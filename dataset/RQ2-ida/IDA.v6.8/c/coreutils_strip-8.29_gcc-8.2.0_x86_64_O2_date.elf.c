__int64 __fastcall main(int a1, char **a2, char **a3)
{
  char *v3; // r15@1
  signed int v4; // er14@1
  const char *v5; // r13@1
  int v6; // er12@1
  char **v7; // rbp@1
  const char *v8; // rbx@1
  int v9; // eax@2
  const char *v10; // rax@12
  __int64 v11; // rax@18
  __int64 v12; // rax@31
  __int64 v13; // rax@32
  int v14; // edx@34
  __int64 v15; // rax@36
  char *v16; // rdi@38
  FILE *v17; // r12@44
  __ssize_t v18; // r14@46
  char *v19; // rdi@48
  char *v20; // rax@48
  __int64 v21; // rax@50
  __int64 v22; // rbp@50
  char *v23; // rax@50
  __int64 v24; // rcx@50
  int v25; // eax@51
  char *v27; // rax@59
  char v28; // al@61
  int v29; // eax@62
  char *v30; // rbp@64
  int *v31; // rax@64
  char *v32; // rax@68
  const char *v33; // rax@76
  char *v34; // rax@76
  __int64 v35; // rax@78
  const char *v36; // rsi@78
  __int64 v37; // rbx@78
  char *v38; // rax@79
  char *v39; // rax@81
  __int64 v40; // rax@82
  __int64 v41; // rbx@82
  int *v42; // rax@82
  __int64 v43; // rax@83
  __int64 v44; // rbx@83
  int *v45; // rax@83
  char *v46; // rax@84
  __int64 v47; // rax@85
  __int64 v48; // rbx@85
  int *v49; // rax@85
  __int64 v50; // rax@86
  const char *v51; // rsi@87
  char *v52; // rax@88
  struct timespec *n; // [sp+8h] [bp-110h]@1
  __int64 v54; // [sp+10h] [bp-108h]@1
  __int64 v55; // [sp+18h] [bp-100h]@42
  char *v56; // [sp+20h] [bp-F8h]@42
  char v57; // [sp+2Ch] [bp-ECh]@42
  char *lineptr; // [sp+38h] [bp-E0h]@45
  struct timespec tp; // [sp+40h] [bp-D8h]@45
  struct stat stat_buf; // [sp+50h] [bp-C8h]@47

  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = a1;
  v7 = a2;
  v8 = 0LL;
  sub_409F40(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_412A60(
    sub_403120,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  n = 0LL;
  v54 = 0LL;
  while ( 1 )
  {
    v9 = sub_40D290((unsigned int)a1, a2, "d:f:I::r:Rs:u", &off_4141C0, 0LL);
    if ( v9 == -1 )
      break;
    if ( v9 == 102 )
    {
      v5 = (const char *)qword_61B4F0;
    }
    else if ( v9 <= 102 )
    {
      if ( v9 == 73 )
      {
        v12 = 0LL;
        if ( qword_61B4F0 )
        {
          LODWORD(v13) = sub_403040("--iso-8601", qword_61B4F0, off_414420, dword_4143F0, 4LL, off_61B278);
          v12 = (unsigned int)dword_4143F0[v13];
        }
        v10 = (const char *)(32 * v12 + 4276416);
LABEL_13:
        if ( v8 )
        {
          v39 = dcgettext(0LL, "multiple output formats specified", 5);
          error(1, 0, v39);
          goto LABEL_82;
        }
        v8 = v10;
      }
      else
      {
        if ( v9 <= 73 )
        {
          if ( v9 == -131 )
          {
            sub_40C050((char)stdout);
            exit(0);
          }
          if ( v9 == -130 )
            sub_402750(0);
LABEL_80:
          sub_402750(1);
        }
        if ( v9 == 82 )
        {
          v10 = "%a, %d %b %Y %H:%M:%S %z";
          goto LABEL_13;
        }
        if ( v9 != 100 )
          goto LABEL_80;
        v3 = (char *)qword_61B4F0;
      }
    }
    else if ( v9 == 117 )
    {
      if ( putenv("TZ=UTC0") )
        sub_40C3E0("TZ=UTC0");
      tzset();
    }
    else if ( v9 > 117 )
    {
      if ( v9 == 128 )
      {
        LODWORD(v11) = sub_403040("--rfc-3339", qword_61B4F0, off_414430, dword_4143F8, 4LL, off_61B278);
        v10 = (const char *)(32LL * (unsigned int)dword_4143F8[v11] + 4276576);
        goto LABEL_13;
      }
      if ( v9 != 129 )
        goto LABEL_80;
      dword_61B338 |= 1u;
    }
    else if ( v9 == 114 )
    {
      n = (struct timespec *)qword_61B4F0;
    }
    else
    {
      if ( v9 != 115 )
        goto LABEL_80;
      v4 = 1;
      v54 = qword_61B4F0;
    }
  }
  v14 = (n != 0LL) + (v5 != 0LL) + (v3 != 0LL);
  if ( v14 > 1 )
  {
    v51 = "the options to specify dates for printing are mutually exclusive";
    goto LABEL_88;
  }
  if ( (unsigned __int8)v4 & v14 & 1 )
  {
    v51 = "the options to print and set the time may not be used together";
LABEL_88:
    v52 = dcgettext(0LL, v51, 5);
    error(0, 0, v52);
    goto LABEL_80;
  }
  v15 = dword_61B2FC;
  if ( dword_61B2FC >= a1 )
    goto LABEL_41;
  if ( dword_61B2FC + 1 < a1 )
    goto LABEL_86;
  v16 = a2[dword_61B2FC];
  if ( *v16 == 43 )
  {
    if ( !v8 )
    {
      ++dword_61B2FC;
      v8 = v16 + 1;
      goto LABEL_41;
    }
    goto LABEL_84;
  }
  if ( v14 & 1 || (_BYTE)v4 )
  {
    LODWORD(v35) = ((int (*)(void))sub_40BB60)();
    v36 = "the argument %s lacks a leading '+';\n"
          "when using an option to specify date(s), any non-option\n"
          "argument must be a format string beginning with '+'";
    v37 = v35;
    goto LABEL_79;
  }
LABEL_41:
  if ( !v8 )
  {
    v32 = nl_langinfo(131180);
    v14 = (n != 0LL) + (v5 != 0LL) + (v3 != 0LL);
    v8 = v32;
    if ( !*v32 )
      v8 = "%a %b %e %H:%M:%S %Z %Y";
  }
  v57 = v14;
  v56 = getenv("TZ");
  v55 = sub_40DB40(v56);
  if ( v5 )
  {
    if ( !strcmp(v5, "-") )
    {
      v27 = dcgettext(0LL, "standard input", 5);
      v17 = (FILE *)stdin;
      v5 = v27;
      goto LABEL_45;
    }
    v17 = fopen(v5, "r");
    if ( v17 )
    {
LABEL_45:
      v7 = (char **)1;
      lineptr = 0LL;
      tp.tv_sec = 0LL;
      n = &tp;
      while ( 1 )
      {
        v18 = __getdelim(&lineptr, (size_t *)&tp, 10, v17);
        if ( v18 < 0 )
          break;
        if ( (unsigned __int8)sub_407BC0(&stat_buf, lineptr, 0LL, (unsigned int)dword_61B338, v55, v56) )
        {
          v7 = (char **)(sub_402620(v8, stat_buf.st_dev, stat_buf.st_ino, v55) & (unsigned int)v7);
        }
        else
        {
          v19 = lineptr;
          v20 = &lineptr[v18 - 1];
          if ( *v20 == 10 )
          {
            *v20 = 0;
            v19 = lineptr;
          }
          LODWORD(v21) = sub_40BB60(v19);
          v22 = v21;
          v23 = dcgettext(0LL, "invalid date %s", 5);
          v24 = v22;
          v7 = 0LL;
          error(0, 0, v23, v24);
        }
      }
      if ( (unsigned int)sub_40C420(v17) != -1 )
      {
        free(lineptr);
        return (unsigned __int8)((unsigned __int8)v7 ^ 1);
      }
LABEL_82:
      LODWORD(v40) = sub_40B9E0(0LL, 3LL, v5);
      v41 = v40;
      v42 = __errno_location();
      error(1, *v42, "%s", v41);
LABEL_83:
      LODWORD(v43) = sub_40B9E0(0LL, 3LL, n);
      v44 = v43;
      v45 = __errno_location();
      error(1, *v45, "%s", v44);
LABEL_84:
      v46 = dcgettext(0LL, "multiple output formats specified", 5);
      error(1, 0, v46);
    }
    LODWORD(v47) = sub_40B9E0(0LL, 3LL, v5);
    v48 = v47;
    v49 = __errno_location();
    error(1, *v49, "%s", v48);
LABEL_86:
    LODWORD(v50) = sub_40BB60(v7[v15 + 1]);
    v36 = "extra operand %s";
    v37 = v50;
LABEL_79:
    v38 = dcgettext(0LL, v36, 5);
    error(0, 0, v38, v37);
    goto LABEL_80;
  }
  v25 = v4 ^ 1;
  LOBYTE(v25) = (v57 ^ 1) & (v4 ^ 1);
  v5 = (const char *)(unsigned int)v25;
  if ( (_BYTE)v25 )
  {
    if ( dword_61B2FC >= v6 )
    {
      sub_404BC0(&tp);
      goto LABEL_57;
    }
    v3 = a2[dword_61B2FC];
    v28 = sub_409C90(&tp, a2[dword_61B2FC], 7LL);
    tp.tv_nsec = 0LL;
    if ( v28 )
    {
      v29 = sub_40BB80(&tp);
      goto LABEL_63;
    }
LABEL_76:
    LODWORD(v33) = sub_40BB60(v3);
    v8 = v33;
    v34 = dcgettext(0LL, "invalid date %s", 5);
    error(1, 0, v34, v8);
    goto LABEL_77;
  }
  if ( !n )
  {
    if ( v54 )
      v3 = (char *)v54;
    if ( (unsigned __int8)sub_407BC0(&tp, v3, 0LL, (unsigned int)dword_61B338, v55, v56) )
      goto LABEL_55;
    goto LABEL_76;
  }
  if ( __xstat(1, (const char *)n, &stat_buf) )
    goto LABEL_83;
  tp = stat_buf.st_mtim;
LABEL_55:
  if ( !(_BYTE)v4 )
  {
LABEL_56:
    LODWORD(v5) = 1;
    goto LABEL_57;
  }
LABEL_77:
  v29 = sub_40BB80(&tp);
LABEL_63:
  if ( !v29 )
    goto LABEL_56;
  LODWORD(v5) = 0;
  v30 = dcgettext(0LL, "cannot set date", 5);
  v31 = __errno_location();
  error(0, *v31, v30);
LABEL_57:
  LODWORD(v7) = sub_402620(v8, tp.tv_sec, tp.tv_nsec, v55) & (unsigned int)v5;
  return (unsigned __int8)((unsigned __int8)v7 ^ 1);
}

int sub_40256B()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_40258A()
{
  return 0;
}

int sub_4025C1()
{
  int result; // eax@4

  if ( !byte_61B328 )
  {
    while ( qword_61B330 < (unsigned __int64)(((&unk_61AE48 - (_UNKNOWN *)&qword_61AE40) >> 3) - 1) )
      (*(&qword_61AE40 + ++qword_61B330))();
    result = sub_40256B();
    byte_61B328 = 1;
  }
  return result;
}

int sub_402618()
{
  return sub_40258A();
}

signed __int64 __fastcall sub_402620(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx@1
  __int64 v5; // rax@1
  char *v6; // rax@4
  signed __int64 result; // rax@5
  __int64 v8; // rax@7
  __int64 v9; // rax@7
  __int64 v10; // rbx@7
  char *v11; // rax@7
  __int64 v12; // [sp+0h] [bp-88h]@1
  __int64 v13; // [sp+8h] [bp-80h]@1
  char v14; // [sp+10h] [bp-78h]@7
  char v15; // [sp+30h] [bp-58h]@1

  v4 = a4;
  v12 = a2;
  v13 = a3;
  LODWORD(v5) = sub_40DE20(a4, &v12, &v15);
  if ( v5 )
  {
    if ( a1 == "%a, %d %b %Y %H:%M:%S %z" )
    {
      setlocale(2, "C");
      sub_404BA0(stdout, "%a, %d %b %Y %H:%M:%S %z", &v15, v4, (unsigned int)v13);
      setlocale(2, "");
    }
    else
    {
      sub_404BA0(stdout, a1, &v15, v4, (unsigned int)v13);
    }
    v6 = stdout->_IO_write_ptr;
    if ( v6 >= stdout->_IO_write_end )
    {
      __overflow(stdout, 10);
      result = 1LL;
    }
    else
    {
      stdout->_IO_write_ptr = v6 + 1;
      *v6 = 10;
      result = 1LL;
    }
  }
  else
  {
    LODWORD(v8) = sub_404C00(v12, &v14);
    LODWORD(v9) = sub_40BB60(v8);
    v10 = v9;
    v11 = dcgettext(0LL, "time %s is out of range", 5);
    error(0, 0, v11, v10, v12);
    result = 0LL;
  }
  return result;
}

void __fastcall __noreturn sub_402750(int status)
{
  int v1; // ebx@1
  __int64 v2; // rbp@1
  char *v3; // rax@2
  char *v4; // rax@4
  FILE *v5; // rbp@4
  char *v6; // rax@4
  FILE *v7; // rbp@4
  char *v8; // rax@4
  FILE *v9; // rbp@4
  char *v10; // rax@4
  FILE *v11; // rbp@4
  char *v12; // rax@4
  FILE *v13; // rbp@4
  char *v14; // rax@4
  FILE *v15; // rbp@4
  char *v16; // rax@4
  FILE *v17; // rbp@4
  char *v18; // rax@4
  FILE *v19; // rbp@4
  char *v20; // rax@4
  FILE *v21; // rbp@4
  char *v22; // rax@4
  FILE *v23; // rbp@4
  char *v24; // rax@4
  FILE *v25; // rbp@4
  char *v26; // rax@4
  FILE *v27; // rbp@4
  char *v28; // rax@4
  FILE *v29; // rbp@4
  char *v30; // rax@4
  FILE *v31; // rbp@4
  char *v32; // rax@4
  FILE *v33; // rbp@4
  char *v34; // rax@4
  FILE *v35; // rbp@4
  char *v36; // rax@4
  FILE *v37; // rbp@4
  char *v38; // rax@4
  FILE *v39; // rbp@4
  char *v40; // rax@4
  FILE *v41; // rbp@4
  char *v42; // rax@4
  FILE *v43; // rbp@4
  char *v44; // rax@4
  FILE *v45; // rbp@4
  char *v46; // rax@4
  FILE *v47; // rbp@4
  char *v48; // rax@4
  FILE *v49; // rbp@4
  char *v50; // rax@4
  FILE *v51; // rbp@4
  char *v52; // rax@4
  FILE *v53; // rbp@4
  char *v54; // rax@4
  FILE *v55; // rbp@4
  char *v56; // rax@4
  __int64 *v57; // rax@4
  _BYTE *v58; // rdi@5
  bool v59; // cf@5
  bool v60; // zf@5
  const char *v61; // rsi@6
  signed __int64 v62; // rcx@6
  char *v63; // rbp@10
  char *v64; // rax@11
  char *v65; // rax@11
  char *v66; // r12@13
  char *v67; // rax@13
  char *v68; // rax@15
  char *v69; // rax@16
  char *v70; // rax@16
  char *v71; // rax@18
  char *v72; // rax@20
  __int64 v73; // rcx@20
  const char *v74; // [sp+0h] [bp-88h]@4
  const char *v75; // [sp+8h] [bp-80h]@4
  const char *v76; // [sp+10h] [bp-78h]@4
  const char *v77; // [sp+18h] [bp-70h]@4
  const char *v78; // [sp+20h] [bp-68h]@4
  const char *v79; // [sp+28h] [bp-60h]@4
  const char *v80; // [sp+30h] [bp-58h]@4
  const char *v81; // [sp+38h] [bp-50h]@4
  const char *v82; // [sp+40h] [bp-48h]@4
  const char *v83; // [sp+48h] [bp-40h]@4
  const char *v84; // [sp+50h] [bp-38h]@4
  const char *v85; // [sp+58h] [bp-30h]@4
  __int64 v86; // [sp+60h] [bp-28h]@4
  __int64 v87; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_61B350;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [OPTION]... [+FORMAT]\n  or:  %s [-u|--utc|--universal] [MMDDhhmm[[CC]YY][.ss]]\n", 5);
  __printf_chk(1LL, v4, v2, v2);
  v5 = stdout;
  v6 = dcgettext(0LL, "Display the current time in the given FORMAT, or set the system date.\n", 5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(0LL, "  -d, --date=STRING          display time described by STRING, not 'now'\n", 5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "      --debug                annotate the parsed date,\n"
          "                              and warn about questionable usage to stderr\n",
          5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(0LL, "  -f, --file=DATEFILE        like --date; once for each line of DATEFILE\n", 5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(
          0LL,
          "  -I[FMT], --iso-8601[=FMT]  output date/time in ISO 8601 format.\n"
          "                               FMT='date' for date only (the default),\n"
          "                               'hours', 'minutes', 'seconds', or 'ns'\n"
          "                               for date and time to the indicated precision.\n"
          "                               Example: 2006-08-14T02:34:56-06:00\n",
          5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(
          0LL,
          "  -R, --rfc-email            output date and time in RFC 5322 format.\n"
          "                               Example: Mon, 14 Aug 2006 02:34:56 -0600\n",
          5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(
          0LL,
          "      --rfc-3339=FMT         output date/time in RFC 3339 format.\n"
          "                               FMT='date', 'seconds', or 'ns'\n"
          "                               for date and time to the indicated precision.\n"
          "                               Example: 2006-08-14 02:34:56-06:00\n",
          5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(0LL, "  -r, --reference=FILE       display the last modification time of FILE\n", 5);
  fputs_unlocked(v22, v21);
  v23 = stdout;
  v24 = dcgettext(
          0LL,
          "  -s, --set=STRING           set time described by STRING\n"
          "  -u, --utc, --universal     print or set Coordinated Universal Time (UTC)\n",
          5);
  fputs_unlocked(v24, v23);
  v25 = stdout;
  v26 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v26, v25);
  v27 = stdout;
  v28 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v28, v27);
  v29 = stdout;
  v30 = dcgettext(
          0LL,
          "\n"
          "FORMAT controls the output.  Interpreted sequences are:\n"
          "\n"
          "  %%   a literal %\n"
          "  %a   locale's abbreviated weekday name (e.g., Sun)\n",
          5);
  fputs_unlocked(v30, v29);
  v31 = stdout;
  v32 = dcgettext(
          0LL,
          "  %A   locale's full weekday name (e.g., Sunday)\n"
          "  %b   locale's abbreviated month name (e.g., Jan)\n"
          "  %B   locale's full month name (e.g., January)\n"
          "  %c   locale's date and time (e.g., Thu Mar  3 23:05:25 2005)\n",
          5);
  fputs_unlocked(v32, v31);
  v33 = stdout;
  v34 = dcgettext(
          0LL,
          "  %C   century; like %Y, except omit last two digits (e.g., 20)\n"
          "  %d   day of month (e.g., 01)\n"
          "  %D   date; same as %m/%d/%y\n"
          "  %e   day of month, space padded; same as %_d\n",
          5);
  fputs_unlocked(v34, v33);
  v35 = stdout;
  v36 = dcgettext(
          0LL,
          "  %F   full date; same as %Y-%m-%d\n"
          "  %g   last two digits of year of ISO week number (see %G)\n"
          "  %G   year of ISO week number (see %V); normally useful only with %V\n",
          5);
  fputs_unlocked(v36, v35);
  v37 = stdout;
  v38 = dcgettext(
          0LL,
          "  %h   same as %b\n  %H   hour (00..23)\n  %I   hour (01..12)\n  %j   day of year (001..366)\n",
          5);
  fputs_unlocked(v38, v37);
  v39 = stdout;
  v40 = dcgettext(
          0LL,
          "  %k   hour, space padded ( 0..23); same as %_H\n"
          "  %l   hour, space padded ( 1..12); same as %_I\n"
          "  %m   month (01..12)\n"
          "  %M   minute (00..59)\n",
          5);
  fputs_unlocked(v40, v39);
  v41 = stdout;
  v42 = dcgettext(
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
  fputs_unlocked(v42, v41);
  v43 = stdout;
  v44 = dcgettext(
          0LL,
          "  %S   second (00..60)\n"
          "  %t   a tab\n"
          "  %T   time; same as %H:%M:%S\n"
          "  %u   day of week (1..7); 1 is Monday\n",
          5);
  fputs_unlocked(v44, v43);
  v45 = stdout;
  v46 = dcgettext(
          0LL,
          "  %U   week number of year, with Sunday as first day of week (00..53)\n"
          "  %V   ISO week number, with Monday as first day of week (01..53)\n"
          "  %w   day of week (0..6); 0 is Sunday\n"
          "  %W   week number of year, with Monday as first day of week (00..53)\n",
          5);
  fputs_unlocked(v46, v45);
  v47 = stdout;
  v48 = dcgettext(
          0LL,
          "  %x   locale's date representation (e.g., 12/31/99)\n"
          "  %X   locale's time representation (e.g., 23:13:48)\n"
          "  %y   last two digits of year (00..99)\n"
          "  %Y   year\n",
          5);
  fputs_unlocked(v48, v47);
  v49 = stdout;
  v50 = dcgettext(
          0LL,
          "  %z   +hhmm numeric time zone (e.g., -0400)\n"
          "  %:z  +hh:mm numeric time zone (e.g., -04:00)\n"
          "  %::z  +hh:mm:ss numeric time zone (e.g., -04:00:00)\n"
          "  %:::z  numeric time zone with : to necessary precision (e.g., -04, +05:30)\n"
          "  %Z   alphabetic time zone abbreviation (e.g., EDT)\n"
          "\n"
          "By default, date pads numeric fields with zeroes.\n",
          5);
  fputs_unlocked(v50, v49);
  v51 = stdout;
  v52 = dcgettext(
          0LL,
          "The following optional flags may follow '%':\n"
          "\n"
          "  -  (hyphen) do not pad the field\n"
          "  _  (underscore) pad with spaces\n"
          "  0  (zero) pad with zeros\n"
          "  ^  use upper case if possible\n"
          "  #  use opposite case if possible\n",
          5);
  fputs_unlocked(v52, v51);
  v53 = stdout;
  v54 = dcgettext(
          0LL,
          "\n"
          "After any flags comes an optional field width, as a decimal number;\n"
          "then an optional modifier, which is either\n"
          "E to use the locale's alternate representations if available, or\n"
          "O to use the locale's alternate numeric symbols if available.\n",
          5);
  fputs_unlocked(v54, v53);
  v55 = stdout;
  v56 = dcgettext(
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
  fputs_unlocked(v56, v55);
  v74 = "[";
  v57 = (__int64 *)&v74;
  v75 = "test invocation";
  v76 = "coreutils";
  v77 = "Multi-call invocation";
  v78 = "sha224sum";
  v79 = "sha2 utilities";
  v80 = "sha256sum";
  v81 = "sha2 utilities";
  v82 = "sha384sum";
  v83 = "sha2 utilities";
  v84 = "sha512sum";
  v85 = "sha2 utilities";
  v86 = 0LL;
  v87 = 0LL;
  do
  {
    v57 += 2;
    v58 = (_BYTE *)*v57;
    v59 = 0;
    v60 = *v57 == 0;
    if ( !*v57 )
      break;
    v61 = "date";
    v62 = 5LL;
    do
    {
      if ( !v62 )
        break;
      v59 = (const unsigned __int8)*v61 < *v58;
      v60 = *v61++ == *v58++;
      --v62;
    }
    while ( v60 );
  }
  while ( (!v59 && !v60) != v59 );
  v63 = (char *)v57[1];
  if ( v63 )
  {
    v64 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v64, &unk_412B52, "https://www.gnu.org/software/coreutils/");
    v65 = setlocale(5, 0LL);
    if ( !v65 || !strncmp(v65, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v69 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v69, &unk_412B52, "https://www.gnu.org/software/coreutils/");
    v70 = setlocale(5, 0LL);
    if ( !v70 || !strncmp(v70, "en_", 3uLL) )
    {
      v63 = "date";
      v71 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v66 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v71, "https://www.gnu.org/software/coreutils/", "date");
LABEL_15:
      v68 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v68, v63, v66);
LABEL_3:
      exit(v1);
    }
    v63 = "date";
  }
  v72 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v72, "date", v73);
LABEL_13:
  v66 = "Multi-call invocation" + 10;
  v67 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v67, "https://www.gnu.org/software/coreutils/", "date");
  if ( v63 != "date" )
    v66 = "";
  goto LABEL_15;
}

void __noreturn sub_402D70()
{
  sub_402750(1);
}

signed __int64 __fastcall sub_402D80(const char *a1, const char **a2, char *a3, size_t a4)
{
  size_t v4; // r13@1
  char *v5; // rbp@1
  size_t v6; // rax@1
  const char *v7; // r14@1
  size_t v8; // r12@2
  signed __int64 v9; // rbx@2
  bool v10; // zf@4
  char v11; // al@4
  signed __int64 v12; // rax@12
  signed __int64 v14; // [sp+0h] [bp-58h]@1
  char v15; // [sp+17h] [bp-41h]@2
  char *v16; // [sp+18h] [bp-40h]@1

  v4 = a4;
  v5 = a3;
  v16 = a3;
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
      v5 += v4;
      v7 = a2[v9];
      if ( !v7 )
        goto LABEL_12;
    }
    if ( strlen(v7) == v8 )
      return v9;
    if ( v14 != -1 )
    {
      if ( v16 )
      {
        v10 = memcmp(&v16[v4 * v14], v5, v4) == 0;
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
    v5 += v4;
    v7 = a2[v9];
  }
  while ( v7 );
LABEL_12:
  v12 = -2LL;
  if ( !v15 )
    v12 = v14;
  return v12;
}

void __fastcall sub_402EA0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx@2
  __int64 v4; // rax@3
  __int64 v5; // rbp@3
  __int64 v6; // rax@3

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  LODWORD(v4) = sub_40BB40(1LL, a1);
  v5 = v4;
  LODWORD(v6) = sub_40B830(0LL, 8LL, a2);
  error(0, 0, v3, v6, v5);
}

int __fastcall sub_402F20(__int64 *a1, char *a2, size_t a3)
{
  char *v3; // r14@1
  size_t v4; // r13@1
  char *v5; // rbp@1
  FILE *v6; // rbx@1
  char *v7; // rax@1
  FILE *v8; // rsi@1
  __int64 v9; // rbx@1
  __int64 i; // r12@1
  __int64 v11; // rax@3
  __int64 v12; // rax@6
  char *v13; // rax@7

  v3 = 0LL;
  v4 = a3;
  v5 = a2;
  v6 = stderr;
  v7 = dcgettext(0LL, "Valid arguments are:", 5);
  v8 = v6;
  v9 = 0LL;
  fputs_unlocked(v7, v8);
  for ( i = *a1; i; i = a1[v9] )
  {
    while ( !v9 || memcmp(v3, v5, v4) )
    {
      ++v9;
      v3 = v5;
      v5 += v4;
      LODWORD(v11) = sub_40BB60(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    LODWORD(v12) = sub_40BB60(i);
    __fprintf_chk(stderr, 1LL, ", %s", v12);
  }
LABEL_7:
  v13 = stderr->_IO_write_ptr;
  if ( v13 >= stderr->_IO_write_end )
  {
    LODWORD(v13) = __overflow(stderr, 10);
  }
  else
  {
    stderr->_IO_write_ptr = v13 + 1;
    *v13 = 10;
  }
  return (unsigned __int64)v13;
}

__int64 __fastcall sub_403040(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (__fastcall *a6)(__int64 *, char *))
{
  size_t v6; // r15@1
  void (__fastcall *v7)(__int64 *, char *); // r13@1
  char *v8; // rbp@1
  __int64 *v9; // rbx@1
  __int64 result; // rax@1

  v6 = a5;
  v7 = a6;
  v8 = a4;
  v9 = (__int64 *)a3;
  result = sub_402D80(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_402EA0(a1, (__int64)a2, result);
    sub_402F20(v9, v8, v6);
    v7(v9, v8);
    result = -1LL;
  }
  return result;
}

__int64 sub_403120()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

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
        LODWORD(v5) = sub_40B9B0(qword_61B348, "write error");
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

void __fastcall sub_4031C0(FILE *stream, _BYTE *a2, __int64 a3)
{
  _BYTE *v3; // rbx@2
  _BYTE *v4; // rbp@2
  const __int32_t **v5; // r13@2
  __int64 v6; // rcx@3

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

void __fastcall sub_403220(FILE *stream, _BYTE *a2, __int64 a3)
{
  _BYTE *v3; // rbx@2
  _BYTE *v4; // rbp@2
  const __int32_t **v5; // r13@2
  __int64 v6; // rcx@3

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

unsigned __int64 __usercall sub_403280@<rax>(FILE *stream@<rdi>, __int64 a2@<rdx>, char a3@<cl>, _BYTE *a4@<rsi>, __int64 a5@<r9>, int a6)
{
  FILE *v6; // r14@1
  signed __int64 v7; // rbx@1
  char *v8; // r13@1
  signed int v9; // ebp@1
  int v10; // edi@5
  unsigned __int64 v11; // r12@5
  _BYTE *v12; // rbp@11
  char v14; // bp@20
  signed int v15; // er11@20
  signed int v16; // eax@21
  char v17; // cl@21
  int v18; // edi@21
  bool v19; // zf@21
  bool v20; // sf@21
  unsigned __int8 v21; // of@21
  int v22; // er10@27
  signed int v23; // er15@29
  int v24; // edx@37
  int v25; // esi@38
  char v26; // al@46
  char *v27; // rax@49
  size_t v28; // rax@50
  int v29; // er10@51
  unsigned __int64 v30; // rbx@51
  unsigned __int64 v31; // rax@51
  unsigned __int64 v32; // rsi@53
  unsigned __int64 v33; // r15@59
  __int64 v34; // r13@60
  signed int v35; // er9@71
  int v36; // esi@71
  int v37; // edi@72
  char v38; // bp@72
  unsigned int v39; // er8@72
  int v40; // esi@80
  int v41; // edx@80
  unsigned __int64 v42; // rax@82
  unsigned __int64 v43; // rdx@82
  unsigned __int64 v44; // rbp@84
  unsigned __int64 v45; // r13@89
  __int64 v46; // r15@90
  __int64 v47; // r15@101
  signed __int64 v48; // r13@101
  char v49; // cl@106
  _BYTE *v50; // r15@106
  unsigned __int64 v51; // rax@107
  unsigned __int64 v52; // rdx@109
  signed __int64 v53; // r13@110
  unsigned __int64 v54; // r13@112
  __int64 v55; // rbp@118
  unsigned __int64 v56; // rbx@118
  unsigned __int64 v57; // rsi@125
  __int64 v58; // r15@131
  signed __int64 v59; // rbp@131
  signed int v60; // edi@141
  int v61; // edx@141
  signed int v62; // esi@147
  char *v63; // rcx@150
  char *v64; // r13@151
  signed __int64 v65; // rax@152
  char *v66; // r15@162
  unsigned __int64 v67; // rax@162
  unsigned __int64 v68; // rdx@165
  unsigned __int64 v69; // rcx@165
  __int64 v70; // rbp@174
  signed int v71; // ST70_4@178
  unsigned __int64 v72; // rdx@181
  char v73; // dl@188
  size_t v74; // rax@190
  __int64 v75; // r10@190
  size_t v76; // r13@190
  size_t v77; // rax@190
  unsigned __int64 v78; // rdx@192
  signed int v79; // er11@196
  __int64 v80; // rbp@199
  char v81; // al@207
  signed __int64 v82; // rax@210
  int v83; // ebp@211
  unsigned __int64 v84; // rsi@214
  signed __int64 i; // r13@217
  __int64 v86; // rsi@219
  int v87; // eax@222
  int v88; // esi@222
  signed int v89; // ST58_4@227
  __m128i v90; // xmm4@227
  __m128i v91; // xmm2@227
  __int64 v92; // rax@227
  signed __int64 v93; // rax@227
  signed __int64 v94; // rsi@227
  signed __int64 v95; // rcx@227
  signed __int64 v96; // rdx@228
  signed __int64 v97; // rax@228
  char v98; // al@228
  char v99; // dl@228
  signed int v100; // er9@231
  unsigned __int64 v101; // rsi@239
  __int64 v102; // rbp@247
  __int64 v103; // rbx@247
  int v104; // eax@254
  int v105; // eax@255
  signed int v106; // ebp@261
  int v107; // esi@261
  int v108; // er13@261
  signed int v109; // er9@261
  signed int v110; // er8@261
  int v111; // eax@262
  signed int v112; // er13@265
  int v113; // er13@267
  int v114; // edi@270
  char v115; // al@275
  char v116; // dl@275
  __int64 v117; // r15@287
  signed __int64 v118; // r13@287
  signed int v119; // esi@295
  signed int v120; // esi@301
  char v121; // al@308
  signed __int64 v122; // rdx@308
  unsigned __int64 v123; // r15@318
  unsigned __int64 v124; // ST68_8@326
  int v125; // ST60_4@326
  __int64 v126; // r13@333
  unsigned __int64 v127; // rcx@336
  __int64 v128; // rbp@345
  unsigned __int64 v129; // ST78_8@349
  int v130; // ST70_4@349
  signed int v131; // ST68_4@349
  int v132; // eax@354
  unsigned __int64 v133; // rbp@357
  unsigned __int64 v134; // ST68_8@363
  int v135; // ST58_4@363
  unsigned __int64 v136; // rbp@365
  __int64 v137; // rbx@368
  __int64 v138; // rbp@369
  unsigned __int64 v139; // rbx@373
  __int64 v140; // rbp@374
  signed __int64 v141; // rax@380
  unsigned __int64 v142; // rbx@380
  signed __int64 v143; // r15@380
  __int64 v144; // r15@384
  signed int v145; // er9@387
  int v146; // edx@387
  int v147; // esi@390
  int v148; // edi@390
  int v149; // edi@392
  __int64 v150; // rbp@398
  signed __int64 v151; // rbx@398
  int v152; // eax@401
  unsigned __int64 v153; // rbp@411
  __int64 v154; // rbx@411
  __int64 v155; // rbx@415
  __int64 v156; // rbx@418
  unsigned __int64 v157; // r15@418
  __int64 v158; // r15@422
  char v159; // [sp+4h] [bp-4D4h]@20
  char v160; // [sp+4h] [bp-4D4h]@190
  struct tm *tp; // [sp+8h] [bp-4D0h]@1
  __int64 v162; // [sp+18h] [bp-4C0h]@1
  char *v163; // [sp+28h] [bp-4B0h]@6
  int v164; // [sp+30h] [bp-4A8h]@50
  unsigned __int64 v165[2]; // [sp+30h] [bp-4A8h]@55
  signed int v166[4]; // [sp+30h] [bp-4A8h]@158
  int v167; // [sp+30h] [bp-4A8h]@188
  int v168; // [sp+30h] [bp-4A8h]@222
  _BYTE *v169; // [sp+30h] [bp-4A8h]@247
  char v170; // [sp+43h] [bp-495h]@3
  int v171; // [sp+44h] [bp-494h]@6
  char v172; // [sp+48h] [bp-490h]@49
  int v173; // [sp+48h] [bp-490h]@82
  _BYTE *v174; // [sp+48h] [bp-490h]@118
  unsigned __int64 v175; // [sp+48h] [bp-490h]@162
  signed int v176; // [sp+48h] [bp-490h]@190
  size_t v177; // [sp+48h] [bp-490h]@197
  char v178; // [sp+48h] [bp-490h]@274
  char v179; // [sp+48h] [bp-490h]@317
  unsigned __int64 v180; // [sp+48h] [bp-490h]@340
  signed __int64 v181; // [sp+48h] [bp-490h]@418
  signed int v182; // [sp+50h] [bp-488h]@50
  signed int v183; // [sp+50h] [bp-488h]@82
  char v184; // [sp+50h] [bp-488h]@161
  char v185; // [sp+50h] [bp-488h]@199
  int v186; // [sp+50h] [bp-488h]@227
  int v187; // [sp+50h] [bp-488h]@398
  unsigned __int64 v188; // [sp+58h] [bp-480h]@169
  signed __int64 v189; // [sp+58h] [bp-480h]@344
  signed int v190; // [sp+58h] [bp-480h]@365
  int v191; // [sp+58h] [bp-480h]@380
  unsigned __int64 v192; // [sp+58h] [bp-480h]@398
  int v193; // [sp+58h] [bp-480h]@418
  signed __int64 v194; // [sp+60h] [bp-478h]@173
  signed int v195; // [sp+60h] [bp-478h]@346
  signed __int64 v196; // [sp+60h] [bp-478h]@398
  signed __int64 v197; // [sp+60h] [bp-478h]@418
  signed int v198; // [sp+68h] [bp-470h]@175
  int v199; // [sp+68h] [bp-470h]@346
  int v200; // [sp+68h] [bp-470h]@411
  signed __int64 v201; // [sp+68h] [bp-470h]@415
  unsigned __int64 v202; // [sp+70h] [bp-468h]@346
  signed __int64 v203; // [sp+70h] [bp-468h]@411
  char format[2]; // [sp+80h] [bp-458h]@49
  char v205; // [sp+82h] [bp-456h]@49
  char v206; // [sp+83h] [bp-455h]@76
  char v207[9]; // [sp+97h] [bp-441h]@150
  char s[16]; // [sp+A0h] [bp-438h]@50
  __m128i v209; // [sp+B0h] [bp-428h]@227
  __m128i v210; // [sp+C0h] [bp-418h]@227
  __int64 v211; // [sp+D0h] [bp-408h]@227

  v6 = stream;
  v7 = (signed __int64)a4;
  v8 = *(char **)(a2 + 48);
  v9 = *(_DWORD *)(a2 + 8);
  tp = (struct tm *)a2;
  v162 = a5;
  if ( !v8 )
    v8 = "";
  v170 = a3;
  if ( v9 <= 12 )
  {
    if ( !v9 )
      v9 = 12;
  }
  else
  {
    v9 -= 12;
  }
  v10 = *a4;
  v11 = 0LL;
  if ( !*a4 )
    return v11;
  v171 = v9;
  v163 = v8;
  while ( 2 )
  {
    if ( (_BYTE)v10 != 37 )
    {
      if ( v11 > 0xFFFFFFFFFFFFFFFDLL )
        return 0LL;
      if ( v6 )
        fputc(v10, v6);
      ++v11;
      v12 = (_BYTE *)v7;
      goto LABEL_12;
    }
    v14 = 0;
    v15 = 0;
    v159 = v170;
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 1 )
        {
          v16 = *(_BYTE *)++v7;
          v17 = *(_BYTE *)v7;
          v18 = *(_BYTE *)v7;
          v21 = __OFSUB__(*(_BYTE *)v7, 48);
          v19 = *(_BYTE *)v7 == 48;
          v20 = (char)(*(_BYTE *)v7 - 48) < 0;
          if ( *(_BYTE *)v7 != 48 )
            break;
LABEL_25:
          v15 = v16;
        }
        while ( (unsigned __int8)(v20 ^ v21) | v19 )
        {
          if ( (_BYTE)v16 != 35 )
          {
            if ( (_BYTE)v16 == 45 )
              goto LABEL_25;
            goto LABEL_27;
          }
          v16 = *(_BYTE *)++v7;
          v14 = 1;
          v17 = *(_BYTE *)v7;
          v18 = *(_BYTE *)v7;
          v21 = __OFSUB__(*(_BYTE *)v7, 48);
          v19 = *(_BYTE *)v7 == 48;
          v20 = (char)(*(_BYTE *)v7 - 48) < 0;
          if ( *(_BYTE *)v7 == 48 )
            goto LABEL_25;
        }
        if ( (_BYTE)v16 == 94 )
        {
          v159 = 1;
          continue;
        }
        break;
      }
      if ( (_BYTE)v16 == 95 )
      {
        v15 = v16;
        continue;
      }
      break;
    }
LABEL_27:
    v22 = -1;
    if ( (unsigned int)(v16 - 48) > 9 )
      goto LABEL_28;
    v22 = 0;
    while ( 1 )
    {
      v16 = *(_BYTE *)(v7 + 1);
      v17 = *(_BYTE *)(v7 + 1);
      v24 = v16 - 48;
      if ( v22 > 214748364 )
        break;
      v25 = *(_BYTE *)v7;
      if ( v22 == 214748364 && (char)v25 > 55 )
        break;
      ++v7;
      v22 = v25 + 10 * v22 - 48;
LABEL_40:
      if ( (unsigned int)v24 > 9 )
      {
        v18 = v16;
        goto LABEL_28;
      }
    }
    if ( (unsigned int)v24 <= 9 )
    {
      v16 = *(_BYTE *)(v7 + 2);
      v22 = 0x7FFFFFFF;
      v7 += 2LL;
      v17 = v16;
      v24 = v16 - 48;
      goto LABEL_40;
    }
    v18 = *(_BYTE *)(v7++ + 1);
    v22 = 0x7FFFFFFF;
LABEL_28:
    if ( v17 == 69 || (v23 = 0, v17 == 79) )
    {
      v18 = *(_BYTE *)(v7 + 1);
      v23 = v16;
      ++v7;
      v17 = v18;
    }
    switch ( v17 )
    {
      case 65:
      case 66:
      case 97:
        if ( v23 )
          goto LABEL_210;
        v26 = v159;
        if ( v14 )
          v26 = v14;
        v159 = v26;
        goto LABEL_49;
      case 88:
      case 99:
      case 120:
        if ( v23 != 79 )
          goto LABEL_67;
        goto LABEL_210;
      case 114:
LABEL_67:
        v172 = 0;
        goto LABEL_68;
      case 72:
        if ( v23 == 69 )
          goto LABEL_210;
        v35 = 2;
        v36 = tp->tm_hour;
        goto LABEL_72;
      case 73:
        if ( v23 == 69 )
          goto LABEL_210;
        v36 = v171;
        v35 = 2;
        goto LABEL_72;
      case 67:
        if ( v23 == 69 )
          goto LABEL_372;
        v35 = 2;
        v40 = tp->tm_year / 100 + 19;
        v41 = tp->tm_year % 100;
        LOBYTE(v41) = v40 > 0;
        LOBYTE(v39) = tp->tm_year < -1900;
        v36 = v40 - (v41 & ((unsigned int)(tp->tm_year % 100) >> 31));
        v37 = 0;
        v38 = 0;
        goto LABEL_73;
      case 68:
        if ( !v23 )
          goto LABEL_82;
        goto LABEL_210;
      case 116:
        LODWORD(v44) = 0;
        if ( v22 >= 0 )
          LODWORD(v44) = v22;
        v44 = (signed int)v44;
        if ( !(_DWORD)v44 )
          v44 = 1LL;
        if ( ~v11 <= v44 )
          return 0LL;
        if ( v6 )
        {
          if ( v22 > 1 )
          {
            v47 = 0LL;
            v48 = v22 - 1LL;
            if ( v15 == 48 )
            {
              do
              {
                ++v47;
                fputc(48, v6);
              }
              while ( v48 != v47 );
            }
            else
            {
              do
              {
                ++v47;
                fputc(32, v6);
              }
              while ( v48 != v47 );
            }
          }
          fputc(9, v6);
        }
        goto LABEL_93;
      case 0:
        v49 = *(_BYTE *)(v7 - 1);
        v50 = (_BYTE *)(v7 - 1);
        goto LABEL_107;
      case 37:
        LODWORD(v51) = 0;
        if ( v22 >= 0 )
          LODWORD(v51) = v22;
        v57 = 1LL;
        v52 = ~v11;
        v51 = (signed int)v51;
        if ( (_DWORD)v51 )
          v57 = v51;
        v165[0] = v57;
        if ( !v23 )
        {
          if ( v52 > v57 )
          {
            if ( v6 )
            {
              if ( v22 > 1 )
              {
                v58 = 0LL;
                v59 = v22 - 1LL;
                if ( v15 == 48 )
                {
                  do
                  {
                    ++v58;
                    fputc(48, v6);
                  }
                  while ( v59 != v58 );
                }
                else
                {
                  do
                  {
                    ++v58;
                    fputc(32, v6);
                  }
                  while ( v59 != v58 );
                }
                v18 = *(_BYTE *)v7;
              }
              fputc(v18, v6);
            }
LABEL_135:
            v11 += v165[0];
            v12 = (_BYTE *)v7;
            goto LABEL_12;
          }
          return 0LL;
        }
        v12 = (_BYTE *)v7;
        v50 = (_BYTE *)v7;
        v54 = 1LL;
        goto LABEL_113;
      case 77:
        if ( v23 == 69 )
          goto LABEL_210;
        v35 = 2;
        v36 = tp->tm_min;
        goto LABEL_72;
      case 83:
        if ( v23 == 69 )
          goto LABEL_210;
        v35 = 2;
        v36 = tp->tm_sec;
        goto LABEL_72;
      case 85:
        if ( v23 == 69 )
          goto LABEL_210;
        v60 = tp->tm_yday - tp->tm_wday + 7;
        v61 = (unsigned __int64)(-1840700269LL * v60) >> 32;
        goto LABEL_142;
      case 87:
        if ( v23 == 69 )
          goto LABEL_210;
        v60 = 7 * ((tp->tm_wday + 6) / 7) - (tp->tm_wday + 6) + tp->tm_yday + 7;
        v61 = (unsigned __int64)(-1840700269LL * v60) >> 32;
LABEL_142:
        v35 = 2;
        v36 = ((v61 + v60) >> 2) - (v60 >> 31);
        goto LABEL_72;
      case 89:
        if ( v23 == 69 )
          goto LABEL_372;
        if ( v23 == 79 )
          goto LABEL_210;
        v35 = 4;
        v62 = tp->tm_year;
        LOBYTE(v39) = v62 < -1900;
        v36 = v62 + 1900;
        v37 = 0;
        v38 = 0;
        goto LABEL_148;
      case 108:
        if ( v23 == 69 )
          goto LABEL_210;
        v36 = v171;
        goto LABEL_184;
      case 117:
        v35 = 1;
        v36 = (tp->tm_wday + 6) % 7 + 1;
        goto LABEL_72;
      case 90:
        v73 = v159;
        v167 = v22;
        if ( v14 )
          v73 = 0;
        v176 = v15;
        v160 = v73;
        v74 = strlen(v163);
        v75 = v167;
        v76 = v74;
        v77 = 0LL;
        if ( v167 >= 0 )
          v77 = v167;
        v78 = v77;
        if ( v76 >= v77 )
          v78 = v76;
        v165[0] = v78;
        if ( ~v11 <= v78 )
          return 0LL;
        if ( v6 )
        {
          v79 = v176;
          if ( v76 < v77 )
          {
            v177 = v75 - v76;
            if ( v79 == 48 )
            {
              if ( v75 != v76 )
              {
                v158 = 0LL;
                do
                {
                  ++v158;
                  fputc(48, v6);
                }
                while ( v177 != v158 );
              }
            }
            else if ( v75 != v76 )
            {
              v185 = v14;
              v80 = 0LL;
              do
              {
                ++v80;
                fputc(32, v6);
              }
              while ( v177 != v80 );
              v14 = v185;
            }
          }
          if ( v14 )
          {
            sub_4031C0(v6, v163, v76);
          }
          else if ( v160 )
          {
            sub_403220(v6, v163, v76);
          }
          else
          {
            fwrite(v163, v76, 1uLL, v6);
          }
        }
        goto LABEL_135;
      case 119:
        if ( v23 == 69 )
          goto LABEL_210;
        v35 = 1;
        v36 = tp->tm_wday;
        goto LABEL_72;
      case 98:
      case 104:
        v81 = v159;
        if ( v14 )
          v81 = v14;
        v159 = v81;
        if ( v23 )
          goto LABEL_210;
LABEL_49:
        v172 = 0;
        v12 = (_BYTE *)v7;
        v23 = 0;
        *(_WORD *)format = 9504;
        v27 = &v205;
        goto LABEL_50;
      default:
        goto LABEL_210;
      case 122:
        i = 0LL;
        goto LABEL_218;
      case 115:
        v186 = v22;
        v89 = v15;
        v64 = v207;
        v90 = _mm_loadu_si128((const __m128i *)&tp->tm_isdst);
        v91 = _mm_loadu_si128((const __m128i *)&tp->tm_mon);
        v92 = (__int64)tp->tm_zone;
        *(__m128i *)s = _mm_loadu_si128((const __m128i *)tp);
        v209 = v91;
        v210 = v90;
        v211 = v92;
        LODWORD(v93) = sub_40DED0(v162, s);
        v15 = v89;
        v22 = v186;
        v94 = v93;
        v95 = v93;
        do
        {
          v96 = ((signed __int64)((unsigned __int128)(7378697629483820647LL * v95) >> 64) >> 2) - (v95 >> 63);
          v97 = v96;
          LODWORD(v96) = v95 - 10 * v96;
          v95 = v97;
          v98 = 48 - v96;
          v99 = v96 + 48;
          if ( v94 < 0 )
            v99 = v98;
          *--v64 = v99;
        }
        while ( v95 );
        v100 = 1;
        if ( v186 > 0 )
          v100 = v186;
        v166[0] = v100;
        if ( v94 >= 0 )
          goto LABEL_234;
        goto LABEL_316;
      case 121:
        if ( v23 == 69 )
        {
LABEL_372:
          v35 = 0;
          goto LABEL_75;
        }
        v35 = 2;
        v104 = tp->tm_year % 100;
        v36 = v104;
        if ( v104 < 0 )
        {
          v105 = -v104;
          v36 += 100;
          if ( tp->tm_year <= -1901 )
            v36 = v105;
        }
LABEL_72:
        v37 = 0;
        v38 = 0;
        v39 = (unsigned int)v36 >> 31;
        goto LABEL_73;
      case 70:
        if ( !v23 )
          goto LABEL_82;
        goto LABEL_210;
      case 71:
      case 86:
      case 103:
        if ( v23 == 69 )
          goto LABEL_210;
        v106 = tp->tm_year;
        v107 = tp->tm_yday;
        v108 = tp->tm_wday;
        v109 = v106 + ((tp->tm_year >> 31) & 0x190) - 100;
        v110 = tp->tm_yday - (tp->tm_yday - v108 + 382) + 7 * ((tp->tm_yday - v108 + 382) / 7) + 3;
        if ( v110 < 0 )
        {
          v145 = v106 + ((tp->tm_year >> 31) & 0x190) - 101;
          v146 = 365;
          if ( !(v145 & 3) )
          {
            v146 = 366;
            if ( v145 == 100 * (v145 / 100) )
              v146 = 366 - ((unsigned int)(v145 % 400) >= 1);
          }
          v147 = v146 + v107;
          v148 = v147 - v108;
          v113 = -1;
          v110 = v147 - (v148 + 382) + 7 * ((v148 + 382) / 7) + 3;
        }
        else
        {
          v111 = 365;
          if ( !(v109 & 3) )
          {
            v111 = 366;
            if ( v109 == 100 * (v109 / 100) )
              v111 = (v109 == 400 * (v109 / 400)) + 365;
          }
          v112 = v107 - v111 - (v107 - v111 - v108 + 382) + 7 * ((v107 - v111 - v108 + 382) / 7) + 3;
          if ( v112 >= 0 )
            v110 = v112;
          v113 = (v112 >> 31) + 1;
        }
        if ( v17 == 71 )
        {
          v36 = v106 + v113 + 1900;
          v35 = 4;
          LOBYTE(v39) = v106 < -1900 - v113;
          v37 = 0;
          v38 = 0;
          goto LABEL_73;
        }
        if ( v17 == 103 )
        {
          v35 = 2;
          v114 = (v113 + v106 % 100) % 100;
          v36 = v114;
          if ( v114 < 0 )
          {
            v36 = v114 + 100;
            if ( v106 < -1900 - v113 )
              v36 = -v114;
          }
        }
        else
        {
          v35 = 2;
          v36 = v110 / 7 + 1;
        }
        goto LABEL_72;
      case 80:
        v178 = 1;
        goto LABEL_275;
      case 82:
      case 84:
LABEL_82:
        v173 = v22;
        v183 = v15;
        v42 = sub_403280(0LL, a6);
        v43 = 0LL;
        if ( v173 >= 0 )
          v43 = v173;
        v44 = v43;
        if ( v42 >= v43 )
          v44 = v42;
        if ( ~v11 <= v44 )
          return 0LL;
        if ( v6 )
        {
          if ( v42 < v43 )
          {
            v45 = v173 - v42;
            if ( v183 == 48 )
            {
              if ( v173 != v42 )
              {
                v144 = 0LL;
                do
                {
                  ++v144;
                  fputc(48, v6);
                }
                while ( v45 != v144 );
              }
            }
            else
            {
              v46 = 0LL;
              if ( v173 != v42 )
              {
                do
                {
                  ++v46;
                  fputc(32, v6);
                }
                while ( v45 != v46 );
              }
            }
          }
          sub_403280(v6, a6);
        }
        goto LABEL_93;
      case 110:
        LODWORD(v44) = 0;
        if ( v22 >= 0 )
          LODWORD(v44) = v22;
        v44 = (signed int)v44;
        if ( !(_DWORD)v44 )
          v44 = 1LL;
        if ( ~v11 <= v44 )
          return 0LL;
        if ( v6 )
        {
          if ( v22 > 1 )
          {
            v117 = 0LL;
            v118 = v22 - 1LL;
            if ( v15 == 48 )
            {
              do
              {
                ++v117;
                fputc(48, v6);
              }
              while ( v118 != v117 );
            }
            else
            {
              do
              {
                ++v117;
                fputc(32, v6);
              }
              while ( v118 != v117 );
            }
          }
          fputc(10, v6);
        }
LABEL_93:
        v11 += v44;
        v12 = (_BYTE *)v7;
        goto LABEL_12;
      case 113:
        v35 = 1;
        if ( v23 == 79 )
          goto LABEL_75;
        v38 = 0;
        LOBYTE(v39) = 0;
        v37 = 0;
        v36 = (11 * tp->tm_mon >> 5) + 1;
        goto LABEL_150;
      case 109:
        if ( v23 == 69 )
          goto LABEL_210;
        v35 = 2;
        v119 = tp->tm_mon;
        LOBYTE(v39) = v119 < -1;
        v36 = v119 + 1;
        v37 = 0;
        v38 = 0;
        goto LABEL_73;
      case 100:
        if ( v23 == 69 )
          goto LABEL_210;
        v35 = 2;
        v36 = tp->tm_mday;
        goto LABEL_72;
      case 101:
        if ( v23 == 69 )
          goto LABEL_210;
        v36 = tp->tm_mday;
        goto LABEL_184;
      case 106:
        if ( v23 == 69 )
          goto LABEL_210;
        v35 = 3;
        v120 = tp->tm_yday;
        LOBYTE(v39) = v120 < -1;
        v36 = v120 + 1;
        v37 = 0;
        v38 = 0;
        goto LABEL_73;
      case 107:
        if ( v23 == 69 )
          goto LABEL_210;
        v36 = tp->tm_hour;
LABEL_184:
        v35 = 2;
        if ( v15 != 48 && v15 != 45 )
          v15 = 95;
        goto LABEL_72;
      case 78:
        if ( v23 == 69 )
          goto LABEL_210;
        if ( v22 == -1 )
        {
          v36 = a6;
          v22 = 9;
          v35 = 9;
        }
        else
        {
          if ( v22 > 8 )
          {
            v36 = a6;
          }
          else
          {
            v36 = a6;
            v149 = v22;
            do
            {
              ++v149;
              v36 /= 10;
            }
            while ( v149 != 9 );
          }
          v35 = v22;
        }
        goto LABEL_72;
      case 112:
        v178 = 0;
LABEL_275:
        v115 = v178;
        v116 = v159;
        v17 = 112;
        if ( v14 )
          v115 = v14;
        v172 = v115;
        if ( v14 )
          v116 = 0;
        v159 = v116;
LABEL_68:
        *(_WORD *)format = 9504;
        if ( !v23 )
        {
          v12 = (_BYTE *)v7;
          v27 = &v205;
          goto LABEL_50;
        }
        v35 = 0;
        goto LABEL_76;
      case 58:
        v121 = *(_BYTE *)(v7 + 1);
        v122 = v7 + 1;
        for ( i = 1LL; v121 == 58; v122 = v7 + i )
          v121 = *(_BYTE *)(v7 + ++i);
        if ( v121 != 122 )
          goto LABEL_210;
        v7 = v122;
LABEL_218:
        if ( tp->tm_isdst < 0 )
        {
          v12 = (_BYTE *)v7;
          goto LABEL_12;
        }
        v86 = tp->tm_gmtoff;
        LOBYTE(v39) = 1;
        if ( (signed int)v86 >= 0 )
        {
          LOBYTE(v39) = 0;
          if ( !(_DWORD)v86 )
            LOBYTE(v39) = *v163 == 45;
        }
        v168 = (signed int)v86 / 3600;
        v87 = (signed int)v86 / 60 % 60;
        v37 = (signed int)v86 / 60 % 60;
        v88 = (signed int)v86 % 60;
        if ( i == 1 )
          goto LABEL_402;
        if ( i )
        {
          if ( i == 2 )
            goto LABEL_430;
          if ( i != 3 )
          {
            v49 = *(_BYTE *)v7;
            v50 = (_BYTE *)v7;
LABEL_107:
            LODWORD(v51) = 0;
            if ( v22 >= 0 )
              LODWORD(v51) = v22;
            v52 = ~v11;
            v51 = (signed int)v51;
            if ( v49 == 37 )
            {
              v53 = 1LL;
              v12 = v50;
              if ( v51 )
                v53 = v51;
              v165[0] = v53;
              v54 = 1LL;
            }
            else
            {
              v7 = (signed __int64)v50;
LABEL_210:
              v82 = v7 - 1;
              do
              {
                v50 = (_BYTE *)v82;
                v83 = v7 - 1 + 2 - v82--;
              }
              while ( *(_BYTE *)(v82 + 1) != 37 );
              LODWORD(v51) = 0;
              v54 = v83;
              if ( v22 >= 0 )
                LODWORD(v51) = v22;
              v52 = ~v11;
              v12 = (_BYTE *)v7;
              v51 = (signed int)v51;
              v84 = (signed int)v51;
              if ( v54 >= (signed int)v51 )
                v84 = v54;
              v165[0] = v84;
            }
LABEL_113:
            if ( v52 <= v165[0] )
              return 0LL;
            if ( !v6 )
            {
LABEL_65:
              v11 += v165[0];
              goto LABEL_12;
            }
            if ( v54 < v51 )
            {
              if ( v15 != 48 )
              {
                if ( v22 == v54 )
                  goto LABEL_121;
                v174 = v12;
                v55 = 0LL;
                v56 = v22 - v54;
                do
                {
                  ++v55;
                  fputc(32, v6);
                }
                while ( v56 != v55 );
                goto LABEL_120;
              }
              v139 = v22 - v54;
              if ( v22 != v54 )
              {
                v174 = v12;
                v140 = 0LL;
                do
                {
                  ++v140;
                  fputc(48, v6);
                }
                while ( v139 != v140 );
LABEL_120:
                v12 = v174;
                goto LABEL_121;
              }
            }
LABEL_121:
            if ( v159 )
              sub_403220(v6, v50, v54);
            else
              fwrite(v50, v54, 1uLL, v6);
            goto LABEL_65;
          }
          if ( v88 )
          {
LABEL_430:
            v38 = 1;
            v35 = 9;
            v152 = 100 * v37 + 10000 * v168;
            v37 = 20;
            v36 = v152 + v88;
          }
          else if ( v87 )
          {
LABEL_402:
            v38 = 1;
            v35 = 6;
            v36 = v37 + 100 * v168;
            v37 = 4;
          }
          else
          {
            v36 = v168;
            v38 = 1;
            v35 = 3;
          }
        }
        else
        {
          v37 = 0;
          v38 = 1;
          v35 = 5;
          v36 = v87 + 100 * v168;
        }
LABEL_73:
        if ( v23 != 79 )
        {
LABEL_148:
          if ( (_BYTE)v39 )
LABEL_149:
            v36 = -v36;
LABEL_150:
          v63 = v207;
          while ( 1 )
          {
            v64 = v63 - 1;
            if ( v37 & 1 )
            {
              v65 = (signed __int64)(v63 - 2);
              *(v63-- - 1) = 58;
              v64 = (char *)v65;
            }
            v37 >>= 1;
            *(v63 - 1) = v36 % 0xAu + 48;
            v63 = v64;
            if ( (unsigned int)v36 <= 9 && !v37 )
              break;
            v36 /= 0xAu;
          }
          if ( v35 < v22 )
            v35 = v22;
          v166[0] = v35;
          if ( (_BYTE)v39 )
          {
LABEL_316:
            v184 = 45;
            if ( v15 != 45 )
              goto LABEL_162;
            v179 = 45;
          }
          else
          {
            if ( !v38 )
            {
LABEL_234:
              v66 = (char *)(v207 - v64);
              v67 = ~v11;
              if ( v15 == 45 || (LODWORD(v175) = v166[0] - (_DWORD)v66, v166[0] - (signed int)v66 <= 0) )
              {
                LODWORD(v72) = 0;
                v12 = (_BYTE *)v7;
                if ( v22 >= 0 )
                  LODWORD(v72) = v22;
                v72 = (signed int)v72;
                goto LABEL_239;
              }
              if ( v15 != 95 )
              {
                if ( v166[0] >= v67 )
                  return 0LL;
LABEL_180:
                v12 = (_BYTE *)v7;
                v175 = (signed int)v175;
                if ( v6 )
                {
                  v190 = v15;
                  v136 = 0LL;
                  do
                  {
                    ++v136;
                    fputc(48, v6);
                  }
                  while ( v136 < v175 );
                  v12 = (_BYTE *)v7;
                  v15 = v190;
                }
                v11 += v175;
                v72 = 0LL;
                v22 = 0;
                v67 = ~v11;
                goto LABEL_239;
              }
              v184 = 0;
              goto LABEL_352;
            }
            if ( v15 != 45 )
            {
              v184 = 43;
LABEL_162:
              v66 = (char *)(v207 - v64);
              LODWORD(v175) = v166[0] - 1 - ((unsigned __int64)v207 - (_DWORD)v64);
              v67 = ~v11;
              if ( (signed int)v175 > 0 )
              {
                if ( v15 != 95 )
                {
                  if ( v166[0] >= v67 )
                    return 0LL;
                  LODWORD(v68) = 0;
                  v69 = 1LL;
                  if ( v22 >= 0 )
                    LODWORD(v68) = v22;
                  v68 = (signed int)v68;
                  if ( (_DWORD)v68 )
                    v69 = v68;
                  v188 = v69;
                  if ( v69 >= v67 )
                    return 0LL;
                  if ( v6 )
                  {
                    if ( !v166[0] && v68 > 1 )
                    {
                      v194 = v22 - 1LL;
                      if ( v15 == 48 )
                      {
                        if ( v22 != 1LL )
                        {
                          v201 = v7;
                          v155 = 0LL;
                          do
                          {
                            ++v155;
                            fputc(48, v6);
                          }
                          while ( v194 != v155 );
                          v15 = 48;
                          v7 = v201;
                        }
                      }
                      else
                      {
                        v70 = 0LL;
                        if ( v22 != 1LL )
                        {
                          v198 = v15;
                          do
                          {
                            ++v70;
                            fputc(32, v6);
                          }
                          while ( v194 != v70 );
                          v15 = v198;
                        }
                      }
                    }
                    v71 = v15;
                    fputc(v184, v6);
                    v15 = v71;
                  }
                  v11 += v188;
                  goto LABEL_180;
                }
LABEL_352:
                if ( (signed int)v175 >= v67 )
                  return 0LL;
                if ( v6 )
                {
                  v191 = v22;
                  v141 = v7;
                  v142 = 0LL;
                  v143 = v141;
                  do
                  {
                    ++v142;
                    fputc(32, v6);
                  }
                  while ( (signed int)v175 > v142 );
                  v22 = v191;
                  v7 = v143;
                }
                v11 += (signed int)v175;
                v132 = v22 - v175;
                v21 = __OFSUB__((_DWORD)v175, v22);
                v20 = (signed int)v175 - v22 < 0;
                v22 = 0;
                if ( v20 ^ v21 )
                  v22 = v132;
                v67 = ~v11;
                if ( v184 )
                {
                  v72 = v22;
                  v133 = 1LL;
                  if ( v22 )
                    v133 = v22;
                  if ( v133 >= v67 )
                    return 0LL;
                  if ( v6 )
                  {
                    if ( !v166[0] && (unsigned int)v22 > 1 )
                    {
                      v193 = v22;
                      v181 = v22 - 1LL;
                      v197 = v7;
                      v156 = 0LL;
                      v157 = v22;
                      do
                      {
                        ++v156;
                        fputc(32, v6);
                      }
                      while ( v181 != v156 );
                      v22 = v193;
                      v7 = v197;
                      v72 = v157;
                    }
                    v134 = v72;
                    v135 = v22;
                    fputc(v184, v6);
                    v22 = v135;
                    v72 = v134;
                  }
                  v11 += v133;
                  v15 = 95;
                  v12 = (_BYTE *)v7;
                  v66 = (char *)(v207 - v64);
                  v67 = ~v11;
                }
                else
                {
                  v72 = v22;
                  v12 = (_BYTE *)v7;
                  v15 = 95;
                  v66 = (char *)(v207 - v64);
                }
                goto LABEL_239;
              }
              LODWORD(v72) = 0;
              v127 = 1LL;
              if ( v22 >= 0 )
                LODWORD(v72) = v22;
              v72 = (signed int)v72;
              if ( (_DWORD)v72 )
                v127 = v72;
              v180 = v127;
              if ( v127 >= v67 )
                return 0LL;
              if ( v6 )
              {
                if ( !v166[0] && v72 > 1 )
                {
                  v189 = v22 - 1LL;
                  if ( v15 == 48 )
                  {
                    if ( v22 != 1LL )
                    {
                      v153 = v72;
                      v200 = v22;
                      v203 = v7;
                      v154 = 0LL;
                      do
                      {
                        ++v154;
                        fputc(48, v6);
                      }
                      while ( v189 != v154 );
                      v15 = 48;
                      v22 = v200;
                      v72 = v153;
                      v7 = v203;
                    }
                  }
                  else
                  {
                    v128 = 0LL;
                    if ( v22 != 1LL )
                    {
                      v195 = v15;
                      v199 = v22;
                      v202 = v72;
                      do
                      {
                        ++v128;
                        fputc(32, v6);
                      }
                      while ( v189 != v128 );
                      v15 = v195;
                      v22 = v199;
                      v72 = v202;
                    }
                  }
                }
                v129 = v72;
                v130 = v22;
                v131 = v15;
                fputc(v184, v6);
                v15 = v131;
                v22 = v130;
                v72 = v129;
              }
              v11 += v180;
              v12 = (_BYTE *)v7;
              v67 = ~v11;
LABEL_239:
              v101 = v72;
              if ( (unsigned __int64)v66 >= v72 )
                v101 = (unsigned __int64)v66;
              if ( v101 >= v67 )
                return 0LL;
              if ( !v6 )
              {
LABEL_252:
                v11 += v101;
                goto LABEL_12;
              }
              if ( !v166[0] && (unsigned __int64)v66 < v72 )
              {
                if ( v15 != 48 )
                {
                  if ( (char *)v22 == v66 )
                    goto LABEL_250;
                  v169 = v12;
                  v102 = 0LL;
                  v103 = v22 - (_QWORD)v66;
                  do
                  {
                    ++v102;
                    fputc(32, v6);
                  }
                  while ( v103 != v102 );
                  goto LABEL_249;
                }
                v137 = v22 - (_QWORD)v66;
                if ( (char *)v22 != v66 )
                {
                  v169 = v12;
                  v138 = 0LL;
                  do
                  {
                    ++v138;
                    fputc(48, v6);
                  }
                  while ( v137 != v138 );
LABEL_249:
                  v12 = v169;
                  goto LABEL_250;
                }
              }
LABEL_250:
              if ( v159 )
                sub_403220(v6, v64, (__int64)v66);
              else
                fwrite(v64, (size_t)v66, 1uLL, v6);
              goto LABEL_252;
            }
            v179 = 43;
          }
          LODWORD(v72) = 0;
          v123 = 1LL;
          if ( v22 >= 0 )
            LODWORD(v72) = v22;
          v72 = (signed int)v72;
          if ( (_DWORD)v72 )
            v123 = v72;
          if ( ~v11 <= v123 )
            return 0LL;
          if ( v6 )
          {
            if ( !v166[0] && v72 > 1 && v22 != 1LL )
            {
              v187 = v22;
              v150 = 0LL;
              v192 = v72;
              v196 = v7;
              v151 = v22 - 1LL;
              do
              {
                ++v150;
                fputc(32, v6);
              }
              while ( v151 != v150 );
              v22 = v187;
              v72 = v192;
              v7 = v196;
            }
            v124 = v72;
            v125 = v22;
            fputc(v179, v6);
            v22 = v125;
            v72 = v124;
          }
          v11 += v123;
          v12 = (_BYTE *)v7;
          v15 = 45;
          v66 = (char *)(v207 - v64);
          v67 = ~v11;
          goto LABEL_239;
        }
        if ( (_BYTE)v39 )
          goto LABEL_149;
LABEL_75:
        v172 = 0;
        *(_WORD *)format = 9504;
LABEL_76:
        v205 = v23;
        v12 = (_BYTE *)v7;
        v23 = v35;
        v27 = &v206;
LABEL_50:
        *v27 = v17;
        v27[1] = 0;
        v164 = v22;
        v182 = v15;
        v28 = strftime(s, 0x400uLL, format, tp);
        if ( !v28 )
        {
LABEL_12:
          v10 = v12[1];
          v7 = (signed __int64)(v12 + 1);
          if ( !v12[1] )
            return v11;
          continue;
        }
        v29 = v164;
        v30 = v28 - 1;
        v31 = 0LL;
        if ( v164 >= 0 )
          v31 = v164;
        v32 = v31;
        if ( v30 >= v31 )
          v32 = v30;
        v165[0] = v32;
        if ( ~v11 > v32 )
        {
          if ( v6 )
          {
            if ( !v23 && v30 < v31 )
            {
              v33 = v29 - v30;
              if ( v182 == 48 )
              {
                if ( v29 != v30 )
                {
                  v126 = 0LL;
                  do
                  {
                    ++v126;
                    fputc(48, v6);
                  }
                  while ( v33 != v126 );
                }
              }
              else
              {
                v34 = 0LL;
                if ( v29 != v30 )
                {
                  do
                  {
                    ++v34;
                    fputc(32, v6);
                  }
                  while ( v33 != v34 );
                }
              }
            }
            if ( v172 )
            {
              sub_4031C0(v6, &s[1], v30);
            }
            else if ( v159 )
            {
              sub_403220(v6, &s[1], v30);
            }
            else
            {
              fwrite(&s[1], v30, 1uLL, v6);
            }
          }
          goto LABEL_65;
        }
        return 0LL;
    }
  }
}

unsigned __int64 __fastcall sub_404BA0(FILE *a1, _BYTE *a2, __int64 a3, __int64 a4, int a5)
{
  return sub_403280(a1, a3, 0, a2, a4, a5);
}

int __fastcall sub_404BC0(struct timespec *tp)
{
  int result; // eax@1
  __int64 v2; // [sp+0h] [bp-18h]@2
  __int64 v3; // [sp+8h] [bp-10h]@2

  result = clock_gettime(0, tp);
  if ( result )
  {
    gettimeofday((struct timeval *)&v2, 0LL);
    tp->tv_sec = v2;
    result = 1000 * v3;
    tp->tv_nsec = 1000 * v3;
  }
  return result;
}

signed __int64 __fastcall sub_404C00(signed __int64 a1, __int64 a2)
{
  _BYTE *v2; // rcx@1
  unsigned __int64 v3; // rdx@2
  signed __int64 result; // rax@3
  signed __int64 v5; // rdx@5
  int v6; // eax@5

  v2 = (_BYTE *)(a2 + 20);
  *(_BYTE *)(a2 + 20) = 0;
  if ( a1 < 0 )
  {
    while ( 1 )
    {
      v5 = ((signed __int64)((unsigned __int128)(7378697629483820647LL * a1) >> 64) >> 2) - (a1 >> 63);
      v6 = 10 * v5 + 48 - a1;
      a1 = ((signed __int64)((unsigned __int128)(7378697629483820647LL * a1) >> 64) >> 2) - (a1 >> 63);
      *(v2 - 1) = v6;
      if ( !v5 )
        break;
      --v2;
    }
    *(v2 - 2) = 45;
    result = (signed __int64)(v2 - 2);
  }
  else
  {
    do
    {
      --v2;
      v3 = (unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)(unsigned __int64)a1 >> 64) >> 3;
      *v2 = a1 - 10 * v3 + 48;
      a1 = (unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)(unsigned __int64)a1 >> 64) >> 3;
    }
    while ( v3 );
    result = (signed __int64)v2;
  }
  return result;
}

__int64 __usercall sub_404CA0@<rax>(__int64 a1@<rdi>, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int128 v4; // ax@1
  signed __int64 v5; // r8@1
  signed __int64 v6; // r9@1
  __m128i v7; // xmm0@6
  __int64 v8; // r9@8
  signed __int64 v9; // rcx@8

  *(_QWORD *)&v4 = *(_QWORD *)(a1 + 168);
  v5 = a3;
  v6 = a4;
  if ( !(_QWORD)v4 || *(_QWORD *)(a1 + 48) || *(_BYTE *)(a1 + 161) )
  {
    if ( a4 > 4 )
    {
      v8 = a4 - 4;
      *(_QWORD *)(a1 + 168) = v4 + 1;
      *(_QWORD *)(a1 + 48) = v8;
      v9 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v5) >> 64) + v5) >> 6) - (v5 >> 63);
      *(_QWORD *)(a1 + 64) = v5 - 100 * v9;
      v4 = 3777893186295716171LL * v5;
      *(_QWORD *)(a1 + 56) = v9
                           - 100
                           * (((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v9) >> 64) + v9) >> 6)
                            - (v9 >> 63));
      *(_QWORD *)(a1 + 40) = (*((_QWORD *)&v4 + 1) >> 11) - (v5 >> 63);
      return v4;
    }
    ++*(_QWORD *)(a1 + 200);
    if ( v6 > 2 )
    {
      *((_QWORD *)&v4 + 1) = ((signed __int64)(v5 + ((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v5) >> 64)) >> 6)
                           - (v5 >> 63);
      *(_QWORD *)(a1 + 72) = *((_QWORD *)&v4 + 1);
      *(_QWORD *)&v4 = 100LL * *((_QWORD *)&v4 + 1);
      *(_QWORD *)(a1 + 80) = v5 - 100LL * *((_QWORD *)&v4 + 1);
LABEL_11:
      *(_QWORD *)(a1 + 88) = 0LL;
      *(_QWORD *)(a1 + 96) = 0LL;
      *(_DWORD *)(a1 + 28) = 2;
      return v4;
    }
LABEL_13:
    *(_QWORD *)(a1 + 72) = v5;
    *(_QWORD *)(a1 + 80) = 0LL;
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(a1 + 200) && a4 <= 2 )
  {
    *(_QWORD *)(a1 + 200) = 1LL;
    goto LABEL_13;
  }
  v7 = _mm_loadu_si128((const __m128i *)&a2);
  *(_QWORD *)&v4 = a4;
  *(_BYTE *)(a1 + 216) = 1;
  *(__m128i *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 48) = v4;
  return v4;
}

__int64 __fastcall sub_404E20(signed int a1, __int64 a2)
{
  __int64 v2; // r12@1
  int v3; // eax@1
  __int64 v4; // rsi@2
  unsigned int v5; // ebp@2
  unsigned int v6; // ecx@2
  unsigned int v7; // ebp@2

  v2 = a2;
  v3 = __sprintf_chk(
         a2,
         1LL,
         -1LL,
         "%c%02d",
         ((a1 >> 31) & 2u) + 43,
         (a1 / 3600 ^ (unsigned int)(a1 / 3600 >> 31)) - (a1 / 3600 >> 31));
  if ( a1 % 3600 )
  {
    v4 = a2 + v3;
    *(_BYTE *)v4 = 58;
    v5 = ((a1 % 3600 >> 31) ^ a1 % 3600) - (a1 % 3600 >> 31);
    *(_BYTE *)(v4 + 1) = v5 / 0x258 + 48;
    v6 = v5 / 0x3C % 0xA + 48;
    v7 = v5 % 0x3C;
    *(_BYTE *)(v4 + 2) = v6;
    if ( v7 )
    {
      *(_BYTE *)(v4 + 3) = 58;
      *(_BYTE *)(v4 + 4) = v7 / 0xA + 48;
      *(_BYTE *)(v4 + 5) = v7 % 0xA + 48;
      *(_BYTE *)(v4 + 6) = 0;
    }
    else
    {
      *(_BYTE *)(v4 + 3) = 0;
    }
  }
  return v2;
}

__int64 __fastcall sub_404F20(signed int a1, __int64 a2)
{
  __sprintf_chk(
    a2,
    1LL,
    -1LL,
    (a1 >= -1900) + 4278463LL,
    (((a1 / 100 + 19) >> 31) ^ (unsigned int)(a1 / 100 + 19)) - ((a1 / 100 + 19) >> 31),
    ((a1 % 100 >> 31) ^ (unsigned int)(a1 % 100)) - (a1 % 100 >> 31));
  return a2;
}

__int64 sub_404F90()
{
  fwrite("date: ", 1uLL, 6uLL, stderr);
  return sub_40E010(stderr);
}

bool __fastcall sub_405050(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool result; // al@2
  __int64 v5; // rax@4
  __int64 v6; // [sp+8h] [bp-50h]@1
  char v7; // [sp+10h] [bp-48h]@4

  v6 = a4;
  if ( a4 != -1 || (LODWORD(v5) = sub_40DE20(a1, &v6, &v7), (a3 = v5) != 0) )
    result = (*(_DWORD *)(a3 + 20) ^ *(_DWORD *)(a2 + 20) | *(_DWORD *)(a3 + 16) ^ *(_DWORD *)(a2 + 16) | *(_DWORD *)(a3 + 12) ^ *(_DWORD *)(a2 + 12) | *(_DWORD *)(a3 + 8) ^ *(_DWORD *)(a2 + 8) | *(_DWORD *)(a3 + 4) ^ *(_DWORD *)(a2 + 4) | *(_DWORD *)a3 ^ *(_DWORD *)a2) == 0;
  else
    result = 0;
  return result;
}

signed __int64 __fastcall sub_4050C0(char a1, __int64 a2)
{
  __fprintf_chk(stderr, 1LL, &aLdS[(unsigned __int8)(a1 ^ 1)], a2);
  return 1LL;
}

signed __int64 __fastcall sub_405100(_DWORD *a1, char a2, signed __int64 a3, signed __int64 a4, __int64 a5)
{
  signed __int64 v5; // r9@1
  signed __int64 v6; // r9@3
  int v7; // ecx@3
  unsigned __int8 v8; // of@4
  signed __int64 v9; // r9@4
  int v10; // edx@4
  signed __int64 result; // rax@5
  signed __int64 v12; // rcx@10

  v5 = a3;
  if ( a4 <= 2 )
  {
    if ( a5 >= 0 )
      goto LABEL_3;
    v12 = 0LL;
LABEL_11:
    v9 = v12 + 60 * v5;
LABEL_6:
    result = 0LL;
    if ( (unsigned __int64)(v9 + 1440) <= 0xB40 )
    {
      result = 1LL;
      *a1 = 60 * v9;
    }
    return result;
  }
  if ( a5 < 0 )
  {
    v5 = ((signed __int64)(a3 + ((unsigned __int128)(0x0A3D70A3D70A3D70BLL * a3) >> 64)) >> 6) - (a3 >> 63);
    v12 = a3 - 100 * v5;
    goto LABEL_11;
  }
LABEL_3:
  v6 = 60 * a3;
  v7 = (unsigned __int128)(60LL * a3) >> 64 != 0;
  if ( a2 )
  {
    v8 = __OFSUB__(v6, a5);
    v9 = v6 - a5;
    v10 = v8;
  }
  else
  {
    v8 = __OFADD__(a5, v6);
    v9 = a5 + v6;
    v10 = v8;
  }
  result = 0LL;
  if ( !(v10 | v7) )
    goto LABEL_6;
  return result;
}

char **__fastcall sub_4051C0(__int64 a1, const char *a2)
{
  const char *v2; // rbp@1
  const char *v3; // rsi@1
  char **v4; // rbx@1
  const char *v6; // rsi@5
  const char **v7; // rbx@5
  const char *v8; // rsi@6

  v2 = a2;
  v3 = "GMT";
  v4 = &off_415EE0;
  do
  {
    if ( !strcmp(v2, v3) )
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
    while ( strcmp(v2, v8) )
    {
      v4 += 2;
      v8 = *v4;
      if ( !*v4 )
        return 0LL;
    }
    return v4;
  }
  while ( strcmp(v2, v6) )
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
  __int64 v2; // rbx@1
  __int64 v3; // rsi@1
  __int64 v4; // rsi@2
  char v5; // di@3
  char v6; // al@4
  __int64 v7; // rsi@4
  __int64 v8; // rsi@7
  __int64 v9; // rsi@9
  __int64 v10; // rsi@11
  FILE *v12; // rbx@21
  char *v13; // rax@21
  char v14; // al@22

  v2 = a2;
  dcgettext(0LL, "parsed %s part: ", 5);
  sub_404F90();
  v3 = *(_QWORD *)(a2 + 104);
  if ( !v3 )
  {
    v4 = *(_QWORD *)(v2 + 112);
    if ( !v4 )
    {
      v7 = *(_QWORD *)(v2 + 120);
      v5 = 0;
      if ( v7 )
        goto LABEL_6;
      if ( !*(_QWORD *)(v2 + 128) && !*(_QWORD *)(v2 + 136) && !*(_QWORD *)(v2 + 144) && !*(_DWORD *)(v2 + 152) )
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
  v14 = sub_4050C0(0, v3);
  v4 = *(_QWORD *)(v2 + 112);
  v5 = v14;
  if ( v4 )
  {
LABEL_4:
    v6 = sub_4050C0(v5, v4);
    v7 = *(_QWORD *)(v2 + 120);
    v5 = v6;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v2 + 120);
LABEL_5:
  if ( v7 )
LABEL_6:
    v5 = sub_4050C0(v5, v7);
LABEL_7:
  v8 = *(_QWORD *)(v2 + 128);
  if ( v8 )
    v5 = sub_4050C0(v5, v8);
  v9 = *(_QWORD *)(v2 + 136);
  if ( v9 )
    v5 = sub_4050C0(v5, v9);
  v10 = *(_QWORD *)(v2 + 144);
  if ( v10 )
    v5 = sub_4050C0(v5, v10);
  if ( *(_DWORD *)(v2 + 152) )
    sub_4050C0(v5, *(_DWORD *)(v2 + 152));
  return fputc(10, stderr);
}

__int64 __fastcall sub_405410(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx@1
  int v4; // eax@1
  int v5; // ebp@2
  __int64 result; // rax@4
  __int64 v7; // rax@5
  __int64 v8; // [sp+0h] [bp-38h]@5

  v3 = a3;
  v4 = sub_40FF70(a3, 100LL, &unk_41492E, a1, 0LL, 0LL);
  if ( a2 && (v5 = v4, v4 <= 99) && *(_QWORD *)(a2 + 208) )
  {
    v7 = sub_404E20(*(_DWORD *)(a2 + 24), (__int64)&v8);
    __snprintf_chk(v3 + v5, 100 - v5, 1LL, -1LL, " TZ=%s", v7);
    result = v3;
  }
  else
  {
    result = v3;
  }
  return result;
}

char *__fastcall sub_4054B0(__int64 a1, char *a2)
{
  char *v2; // rbp@1
  __int64 v3; // r9@2
  int v4; // eax@3
  __int64 v5; // rdx@3
  signed __int64 v6; // rcx@5
  signed __int64 v7; // rsi@5
  char *v8; // rdi@5

  v2 = a2;
  if ( !*(_BYTE *)(a1 + 224) )
  {
    *a2 = 0;
    v5 = *(_DWORD *)(a1 + 16);
    if ( (unsigned int)v5 <= 6 )
    {
      v8 = a2;
      v6 = 1LL;
      v7 = 100LL;
      goto LABEL_10;
    }
    return a2;
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int64)(v3 + 1) <= 0xD )
  {
    v4 = snprintf(a2, 0x64uLL, "%s", &aLast[11 * (v3 + 1)]);
    v5 = *(_DWORD *)(a1 + 16);
    if ( (unsigned int)v5 <= 6 && (unsigned int)v4 <= 0x63 )
      goto LABEL_5;
    return a2;
  }
  v4 = __snprintf_chk(a2, 100LL, 1LL, -1LL, "%ld", v3);
  v5 = *(_DWORD *)(a1 + 16);
  if ( (unsigned int)v5 > 6 )
    return a2;
LABEL_5:
  v6 = v4 == 0;
  v7 = 100 - v4;
  v8 = &v2[v4];
LABEL_10:
  __snprintf_chk(v8, v7, 1LL, -1LL, v6 + 4277419, (char *)&unk_415980 + 4 * v5);
  return v2;
}

int __fastcall sub_4055A0(__int64 a1, __int64 a2)
{
  char v2; // dl@3
  __int64 v3; // rbp@4
  char *v4; // rax@4
  __int64 v5; // r13@10
  __int64 v6; // r12@10
  char *v7; // rbp@10
  char *v8; // rax@10
  bool v9; // zf@13
  __int64 v10; // rbx@16
  char *v11; // rax@22
  __int64 v13; // r9@24
  __int64 v14; // r8@24
  __int64 v15; // r9@26
  __int64 v16; // r8@26
  __int64 v17; // rcx@26
  const char *v18; // rbp@33
  __int64 v19; // rax@34
  __int64 v20; // [sp+0h] [bp-98h]@10

  dcgettext(0LL, "parsed %s part: ", 5);
  sub_404F90();
  if ( *(_QWORD *)(a2 + 168) && !*(_BYTE *)(a2 + 218) )
  {
    v13 = *(_QWORD *)(a2 + 64);
    v14 = *(_QWORD *)(a2 + 56);
    __fprintf_chk(stderr, 1LL, "(Y-M-D) %04ld-%02ld-%02ld", *(_QWORD *)(a2 + 40));
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
    v15 = *(_QWORD *)(a2 + 88);
    v16 = *(_QWORD *)(a2 + 80);
    __fprintf_chk(stderr, 1LL, (unsigned __int8)(v2 ^ 1) + 4278657LL, *(_QWORD *)(a2 + 72));
    v17 = *(_QWORD *)(a2 + 96);
    if ( v17 )
      __fprintf_chk(stderr, 1LL, ".%09d", v17);
    if ( *(_DWORD *)(a2 + 28) == 1 )
      fwrite("pm", 1uLL, 2uLL, stderr);
    v9 = *(_QWORD *)(a2 + 176) == 0LL;
    *(_BYTE *)(a2 + 221) = 1;
    v2 = 1;
    if ( !v9 )
    {
      v2 = *(_BYTE *)(a2 + 219);
      if ( !v2 )
        goto LABEL_32;
    }
  }
  else if ( *(_QWORD *)(a2 + 176) && !*(_BYTE *)(a2 + 219) )
  {
    if ( !v2 )
    {
LABEL_10:
      v5 = *(_DWORD *)(a2 + 16);
      v6 = *(_QWORD *)(a2 + 8);
      v7 = sub_4054B0(a2, (char *)&v20);
      v8 = dcgettext(0LL, "%s (day ordinal=%ld number=%d)", 5);
      __fprintf_chk(stderr, 1LL, v8, v7);
      *(_BYTE *)(a2 + 219) = 1;
      v2 = 1;
      goto LABEL_11;
    }
LABEL_32:
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
        v10 = *(_QWORD *)(a2 + 88);
        if ( !v2 )
          goto LABEL_22;
        goto LABEL_17;
      }
      return fputc(10, stderr);
    }
    v18 = (const char *)((unsigned __int8)(v2 ^ 1) + 4278612LL);
LABEL_34:
    v19 = sub_404E20(*(_DWORD *)(a2 + 24), (__int64)&v20);
    __fprintf_chk(stderr, 1LL, v18, v19);
    v9 = *(_BYTE *)(a2 + 160) == 0;
    *(_BYTE *)(a2 + 222) = 1;
    if ( v9 )
      return fputc(10, stderr);
    goto LABEL_16;
  }
  *(_QWORD *)(a2 + 192);
  __fprintf_chk(stderr, 1LL, (unsigned __int8)(v2 ^ 1) + 4278685LL, *(_DWORD *)(a2 + 20));
  v9 = *(_QWORD *)(a2 + 208) == 0LL;
  *(_BYTE *)(a2 + 220) = 1;
  if ( !v9 && !*(_BYTE *)(a2 + 222) )
  {
    v18 = " UTC%s";
    goto LABEL_34;
  }
  if ( *(_BYTE *)(a2 + 160) )
  {
LABEL_16:
    v10 = *(_QWORD *)(a2 + 88);
LABEL_17:
    fputc(32, stderr);
LABEL_22:
    v11 = dcgettext(0LL, "number of seconds: %ld", 5);
    __fprintf_chk(stderr, 1LL, v11, v10);
  }
  return fputc(10, stderr);
}

signed __int64 __fastcall sub_405940(__int64 a1)
{
  __int64 v1; // r8@1
  __int64 v2; // r9@1
  signed int v3; // er15@1
  int v4; // ebp@1
  const __m128i *v5; // rbx@1
  __int16 *v6; // r14@1
  int v7; // eax@5
  signed __int64 v8; // rcx@9
  __m128i v9; // xmm7@9
  __int64 v10; // rax@9
  __m128i v11; // xmm0@9
  __m128i v12; // xmm7@9
  char v13; // dl@13
  int v15; // eax@22
  __int64 v16; // rax@23
  __int64 v17; // rcx@26
  __int64 v18; // rsi@26
  signed __int64 v19; // rax@26
  __m128i v20; // xmm1@26
  __m128i v21; // xmm2@26
  __m128i v22; // xmm3@26
  signed __int64 v23; // r15@26
  signed __int64 v24; // r10@26
  signed __int64 v25; // rdi@26
  __int64 v26; // r13@26
  signed __int64 v27; // r11@26
  signed __int64 v28; // rdi@26
  _BYTE *v29; // rax@30
  int v30; // ebp@30
  int v31; // ecx@30
  signed __int64 v32; // rdx@31
  _BYTE *v33; // rsi@33
  char v34; // cl@37
  char *v35; // rsi@39
  _BYTE *i; // rax@39
  int v37; // ecx@43
  char v38; // al@46
  char *v39; // rcx@46
  const char *v40; // rsi@50
  const char **v41; // rbx@50
  __int64 v42; // rbp@50
  const char **v43; // rbp@53
  __int64 v44; // rdx@53
  int v45; // ecx@55
  __int64 v46; // rsi@59
  __int64 v47; // rcx@59
  char v48; // dl@63
  bool v49; // al@66
  unsigned int v50; // esi@67
  _BYTE *v51; // r11@75
  signed __int64 v52; // rcx@75
  int v53; // edi@75
  int v54; // ebp@76
  unsigned __int8 v55; // of@78
  signed __int64 v56; // rcx@78
  signed __int64 v57; // rbp@79
  int v58; // edx@81
  signed __int64 v59; // rbp@82
  int v60; // er11@82
  signed int v61; // eax@82
  char v62; // r13@82
  int v63; // edi@83
  __m128i v64; // xmm0@96
  __int64 v65; // rax@96
  __m128i v66; // xmm0@96
  __int64 v67; // rax@99
  signed __int64 v68; // rdx@99
  __m128i v69; // xmm0@99
  __m128i v70; // xmm7@99
  signed __int64 v71; // rax@99
  int v72; // eax@99
  __m128i v73; // xmm4@100
  __m128i v74; // xmm5@100
  __m128i v75; // xmm6@100
  __int64 v76; // rsi@100
  __int32 v77; // eax@104
  unsigned __int8 v78; // r8@104
  __int64 v79; // rax@104
  __int64 v80; // rdx@104
  __int64 v81; // rdx@104
  unsigned __int8 v82; // di@104
  __int64 v83; // rdx@104
  unsigned __int8 v84; // si@104
  __int64 v85; // rdx@104
  __int64 v86; // rdx@104
  unsigned __int8 v87; // ST58_1@104
  __int64 v88; // rdx@104
  __int64 v89; // rcx@104
  signed __int64 v90; // rax@107
  signed __int64 v91; // rax@116
  __int64 v92; // rax@120
  signed __int64 v93; // rcx@124
  __int64 v94; // r8@124
  signed __int64 v95; // ST68_8@124
  signed __int64 v96; // rdx@124
  char v97; // si@124
  signed __int64 v98; // ST60_8@124
  __int64 v99; // ST58_8@124
  char v100; // al@124
  __int64 v101; // rax@126
  __int64 v102; // rdx@126
  __int64 v103; // rcx@126
  __int64 v104; // rax@126
  signed __int64 v105; // rax@129
  __int64 v106; // rax@139
  __int64 v107; // rax@141
  __m128i v108; // xmm0@147
  char *v109; // rax@147
  __int64 v110; // rdi@147
  const char *v111; // rsi@151
  char *v112; // rax@152
  __int64 v113; // rax@155
  signed __int64 v114; // rax@167
  signed __int64 v115; // rax@168
  __int64 v116; // rax@169
  __int64 v117; // rdx@169
  __int64 v118; // rax@170
  __int32 v119; // eax@172
  unsigned __int8 v120; // r8@172
  __int64 v121; // rax@172
  __int64 v122; // rdx@172
  __int64 v123; // rdx@172
  unsigned __int8 v124; // di@172
  __int64 v125; // rdx@172
  unsigned __int8 v126; // si@172
  __int64 v127; // rdx@172
  unsigned __int8 v128; // r11@172
  __int64 v129; // rdx@172
  unsigned __int8 v130; // r10@172
  __int64 v131; // rdx@172
  __int64 v132; // rcx@172
  char *v133; // rax@174
  __int64 v134; // rdi@174
  __int64 v135; // rsi@175
  __int64 v136; // rdx@180
  __int64 v137; // rcx@180
  __int64 v138; // rax@180
  __int64 v139; // rax@180
  __int64 v140; // rax@181
  __int64 v141; // rdx@181
  __int64 v142; // rax@181
  __int64 v143; // rax@182
  __int64 v144; // rax@182
  const char *v145; // rsi@183
  char *v146; // rax@184
  char *v147; // rax@186
  __int64 v148; // rdi@186
  __int64 v149; // rsi@187
  __int64 v150; // rax@191
  __int64 v151; // rax@192
  __int64 v152; // rax@193
  __int64 v153; // rax@194
  __int64 v154; // rax@198
  __int64 v155; // rax@198
  signed int v156; // edx@198
  __int32 v157; // er8@204
  __int64 v158; // rax@204
  __int64 v159; // rdi@204
  __int64 v160; // rsi@204
  int v161; // ecx@204
  char v162; // al@205
  __m128i v163; // xmm0@208
  __int64 v164; // rax@208
  __int64 v165; // rax@209
  __m128i v166; // xmm7@211
  __int64 v167; // rax@211
  __m128i v168; // xmm0@214
  __int64 v169; // rax@214
  __int64 v170; // rax@216
  __int64 v171; // rax@217
  __int64 v172; // rax@219
  char v173; // al@221
  __m128i v174; // xmm0@224
  __int64 v175; // rax@224
  __int32 v176; // eax@227
  unsigned __int8 v177; // r8@227
  __int64 v178; // rax@227
  __int64 v179; // rdx@227
  __int64 v180; // rdx@227
  unsigned __int8 v181; // di@227
  __int64 v182; // rdx@227
  unsigned __int8 v183; // si@227
  __int64 v184; // rdx@227
  unsigned __int8 v185; // r11@227
  __int64 v186; // rdx@227
  unsigned __int8 v187; // r10@227
  __int64 v188; // rdx@227
  __int64 v189; // rcx@227
  signed __int64 v190; // ST68_8@230
  signed __int64 v191; // ST60_8@230
  __int64 v192; // ST58_8@230
  __int64 v193; // r9@234
  char *v194; // rbp@234
  int v195; // edx@235
  unsigned int v196; // eax@235
  signed int v197; // eax@240
  signed __int64 v198; // rbp@240
  const char *v199; // rsi@243
  char **v200; // rbx@243
  signed int v201; // ebp@243
  bool v202; // dl@244
  signed __int64 v203; // rcx@253
  char *v204; // rsi@253
  _BYTE *v205; // rdi@253
  unsigned __int8 v206; // cf@255
  bool v207; // zf@255
  const char *v208; // rsi@256
  char **v209; // rcx@260
  signed __int64 v210; // rbp@261
  char **v211; // rax@261
  __m128i v212; // xmm7@265
  __int64 v213; // rax@265
  __int64 v214; // ST78_8@223
  signed __int64 v215; // ST70_8@223
  signed __int64 v216; // ST68_8@223
  __int64 v217; // ST58_8@223
  __int64 v218; // ST70_8@264
  signed __int64 v219; // ST68_8@264
  signed __int64 v220; // ST60_8@264
  char *v221; // rcx@267
  int v222; // er8@267
  const __m128i *v223; // rbx@267
  char v224; // dl@267
  const char *v225; // rsi@268
  const __m128i *v226; // r15@268
  const char **v227; // rbx@268
  int v228; // ebp@268
  char v229; // ST38_1@270
  int v230; // eax@270
  const char **v231; // rcx@271
  const char *v232; // rsi@272
  const __m128i *v233; // r15@272
  const char **v234; // rbx@272
  int v235; // ebp@272
  __int64 v236; // ST60_8@274
  char v237; // ST38_1@274
  int v238; // eax@274
  const char **v239; // r10@275
  char v240; // al@276
  char *v241; // rsi@277
  char *v242; // rcx@277
  __int64 v243; // ST30_8@286
  int v244; // ST28_4@286
  char **v245; // rcx@288
  char *v246; // rsi@291
  signed __int64 v247; // [sp+8h] [bp-5E0h]@26
  int v248; // [sp+8h] [bp-5E0h]@50
  signed int v249; // [sp+8h] [bp-5E0h]@268
  signed int v250; // [sp+8h] [bp-5E0h]@272
  signed __int64 v251; // [sp+10h] [bp-5D8h]@26
  const __m128i *v252; // [sp+10h] [bp-5D8h]@50
  signed __int64 v253; // [sp+10h] [bp-5D8h]@268
  signed __int64 v254; // [sp+10h] [bp-5D8h]@272
  __int32 v255; // [sp+18h] [bp-5D0h]@26
  __int64 v256; // [sp+18h] [bp-5D0h]@243
  int v257; // [sp+24h] [bp-5C4h]@1
  signed __int64 v258; // [sp+28h] [bp-5C0h]@0
  signed __int64 v259; // [sp+30h] [bp-5B8h]@0
  __int64 v260; // [sp+38h] [bp-5B0h]@147
  signed __int64 v261; // [sp+38h] [bp-5B0h]@183
  signed __int64 v262; // [sp+38h] [bp-5B0h]@186
  __int64 v263; // [sp+38h] [bp-5B0h]@197
  __int64 v264; // [sp+38h] [bp-5B0h]@204
  __int64 v265; // [sp+38h] [bp-5B0h]@227
  signed __int64 v266; // [sp+38h] [bp-5B0h]@243
  __int64 v267; // [sp+38h] [bp-5B0h]@263
  __int64 v268; // [sp+38h] [bp-5B0h]@270
  char *v269; // [sp+38h] [bp-5B0h]@274
  signed __int64 v270; // [sp+40h] [bp-5A8h]@147
  signed __int64 v271; // [sp+40h] [bp-5A8h]@183
  signed __int64 v272; // [sp+40h] [bp-5A8h]@186
  signed __int64 v273; // [sp+40h] [bp-5A8h]@197
  __int64 v274; // [sp+40h] [bp-5A8h]@204
  signed __int64 v275; // [sp+40h] [bp-5A8h]@227
  signed __int64 v276; // [sp+48h] [bp-5A0h]@147
  signed __int64 v277; // [sp+48h] [bp-5A0h]@149
  signed __int64 v278; // [sp+48h] [bp-5A0h]@171
  __int64 v279; // [sp+48h] [bp-5A0h]@183
  __int64 v280; // [sp+48h] [bp-5A0h]@186
  signed __int64 v281; // [sp+48h] [bp-5A0h]@197
  __int64 v282; // [sp+48h] [bp-5A0h]@204
  signed __int64 v283; // [sp+48h] [bp-5A0h]@227
  signed __int64 v284; // [sp+50h] [bp-598h]@149
  __int64 v285; // [sp+50h] [bp-598h]@204
  signed int v286; // [sp+58h] [bp-590h]@149
  __int64 v287; // [sp+58h] [bp-590h]@204
  signed __int64 v288; // [sp+60h] [bp-588h]@149
  __int64 v289; // [sp+60h] [bp-588h]@204
  signed int v290; // [sp+68h] [bp-580h]@149
  __int64 v291; // [sp+68h] [bp-580h]@204
  __int64 v292; // [sp+70h] [bp-578h]@204
  __int64 v293; // [sp+78h] [bp-570h]@204
  char s1[3]; // [sp+80h] [bp-568h]@39
  char v295; // [sp+83h] [bp-565h]@242
  _BYTE v296[5]; // [sp+93h] [bp-555h]@41
  __int16 v297; // [sp+A0h] [bp-548h]@1
  __int16 v298; // [sp+C6h] [bp-522h]@10
  __int128 v299; // [sp+D0h] [bp-518h]@9
  __int128 v300; // [sp+E0h] [bp-508h]@9
  __int128 v301; // [sp+F0h] [bp-4F8h]@9
  __int64 v302; // [sp+100h] [bp-4E8h]@9
  __m128i v303; // [sp+110h] [bp-4D8h]@26
  __m128i v304; // [sp+120h] [bp-4C8h]@26
  __m128i v305; // [sp+130h] [bp-4B8h]@26
  __int64 v306; // [sp+140h] [bp-4A8h]@26
  char v307; // [sp+150h] [bp-498h]@1

  v1 = 0LL;
  v2 = a1;
  v3 = 38;
  v4 = -2;
  v297 = 0;
  v5 = (const __m128i *)&v307;
  v6 = &v297;
  v257 = 0;
LABEL_2:
  if ( v4 != -2 )
    goto LABEL_3;
  v29 = *(_BYTE **)v2;
  v30 = **(_BYTE **)v2;
  v31 = **(_BYTE **)v2;
  while ( 1 )
  {
LABEL_31:
    LODWORD(v32) = v31;
    if ( (unsigned __int8)v31 > 0x20u )
      goto LABEL_55;
    if ( !((1LL << v31) & 0x100003E00LL) )
    {
LABEL_36:
      if ( (unsigned int)(v30 - 48) > 9 )
      {
        v34 = v30 - 65;
        if ( (unsigned int)(v30 - 65) > 0x39 )
          goto LABEL_27;
LABEL_38:
        if ( !((1LL << v34) & 0x3FFFFFF03FFFFFFLL) )
          goto LABEL_58;
        v35 = s1;
        for ( i = (_BYTE *)(*(_QWORD *)v2 + 1LL); ; ++i )
        {
          if ( v35 < v296 )
            *v35++ = v32;
          *(_QWORD *)v2 = i;
          LOBYTE(v32) = *i;
          v37 = *i - 65;
          if ( ((unsigned int)v37 > 0x39 || !((1LL << v37) & 0x3FFFFFF03FFFFFFLL)) && (_BYTE)v32 != 46 )
            break;
        }
        *v35 = 0;
        v38 = s1[0];
        v39 = s1;
        if ( s1[0] )
        {
          do
          {
            if ( (unsigned int)(unsigned __int8)v38 - 97 < 0x1A )
              v38 -= 32;
            *(++v39 - 1) = v38;
            v38 = *v39;
          }
          while ( *v39 );
        }
        v252 = v5;
        v40 = "AM";
        v41 = (const char **)&off_4162E0;
        v248 = v1;
        v42 = v2;
        do
        {
          if ( !strcmp(s1, v40) )
          {
            v2 = v42;
            v43 = v41;
            v1 = v248;
            v5 = v252;
            v44 = *((_DWORD *)v43 + 3);
            v4 = *((_DWORD *)v43 + 2);
            goto LABEL_54;
          }
          v41 += 2;
          v40 = *v41;
        }
        while ( *v41 );
        v193 = v42;
        v194 = s1;
        do
        {
          v195 = *(_DWORD *)v194;
          v194 += 4;
          v196 = ~v195 & (v195 - 16843009) & 0x80808080;
        }
        while ( !v196 );
        if ( !((unsigned __int16)~(_WORD)v195 & (unsigned __int16)(v195 - 257) & 0x8080) )
          LOBYTE(v196) = v196 >> 16;
        if ( !((unsigned __int16)~(_WORD)v195 & (unsigned __int16)(v195 - 257) & 0x8080) )
          v194 += 2;
        v206 = __CFADD__((_BYTE)v196, (_BYTE)v196);
        v197 = 1;
        v198 = &v194[-v206 - 3] - s1;
        if ( v198 != 3 )
        {
          v197 = 0;
          if ( v198 == 4 )
            v197 = v295 == 46;
        }
        v199 = "JANUARY";
        v266 = v198;
        v200 = &off_416140;
        v201 = v197;
        v256 = v193;
        do
        {
          if ( v201 )
            v202 = strncmp(s1, v199, 3uLL) == 0;
          else
            v202 = strcmp(s1, v199) == 0;
          if ( v202 )
            goto LABEL_260;
          v200 += 2;
          v199 = *v200;
        }
        while ( *v200 );
        v5 = v252;
        v210 = v266;
        v211 = sub_4051C0(v256, s1);
        v2 = v256;
        v206 = 0;
        v207 = v211 == 0LL;
        v1 = v248;
        if ( !v211 )
        {
          v203 = 4LL;
          v204 = s1;
          v205 = " DST" + 1;
          do
          {
            if ( !v203 )
              break;
            v206 = (unsigned __int8)*v204 < *v205;
            v207 = *v204++ == *v205++;
            --v203;
          }
          while ( v207 );
          v208 = "YEAR";
          if ( !(v206 | v207) == v206 )
          {
            *(_QWORD *)&v299 = 0LL;
            v4 = 259;
            goto LABEL_72;
          }
          v200 = &off_416080;
          while ( strcmp(s1, v208) )
          {
            v200 += 2;
            v208 = *v200;
            if ( !*v200 )
            {
              v221 = &s1[v266 - 1];
              v222 = v248;
              v223 = v252;
              v224 = 0;
              v2 = v256;
              if ( *v221 == 83 )
              {
                v250 = v3;
                v232 = "YEAR";
                v233 = v252;
                v254 = v266;
                v234 = (const char **)&off_416080;
                v235 = v222;
                *v221 = 0;
                do
                {
                  v236 = v2;
                  v269 = v221;
                  v237 = v224;
                  v238 = strcmp(s1, v232);
                  v224 = v237;
                  v221 = v269;
                  v2 = v236;
                  if ( !v238 )
                  {
                    v239 = v234;
                    v1 = v235;
                    v5 = v233;
                    v3 = v250;
                    v44 = *((_DWORD *)v239 + 3);
                    v4 = *((_DWORD *)v239 + 2);
                    goto LABEL_54;
                  }
                  v234 += 2;
                  v232 = *v234;
                }
                while ( *v234 );
                v222 = v235;
                v223 = v233;
                v210 = v254;
                v3 = v250;
                *v269 = 83;
              }
              v249 = v3;
              v225 = "TOMORROW";
              v226 = v223;
              v253 = v210;
              v227 = (const char **)&off_415F20;
              v228 = v222;
              do
              {
                v268 = v2;
                v229 = v224;
                v230 = strcmp(s1, v225);
                v224 = v229;
                v2 = v268;
                if ( !v230 )
                {
                  v231 = v227;
                  v1 = v228;
                  v5 = v226;
                  v3 = v249;
                  v44 = *((_DWORD *)v231 + 3);
                  v4 = *((_DWORD *)v231 + 2);
                  goto LABEL_54;
                }
                v227 += 2;
                v225 = *v227;
              }
              while ( *v227 );
              v1 = v228;
              v5 = v226;
              v240 = s1[0];
              v3 = v249;
              if ( v253 == 1 )
              {
                v245 = &off_415A40;
                if ( s1[0] == 65 )
                {
                  *(_QWORD *)&v299 = -3600LL;
                  v4 = 273;
                  goto LABEL_72;
                }
                while ( 1 )
                {
                  v246 = v245[2];
                  if ( !v246 )
                    break;
                  if ( *v246 == s1[0] )
                  {
                    v44 = *((_DWORD *)v245 + 7);
                    v4 = *((_DWORD *)v245 + 6);
                    goto LABEL_54;
                  }
                  v245 += 2;
                }
              }
              v241 = s1;
              v242 = s1;
              if ( !s1[0] )
                goto LABEL_297;
              do
              {
                if ( v240 == 46 )
                  v224 = 1;
                else
                  ++v242;
                v240 = *++v241;
                *v242 = *v241;
              }
              while ( v240 );
              if ( !v224 || (v211 = sub_4051C0(v268, s1), v2 = v268, v1 = v228, !v211) )
              {
LABEL_297:
                if ( !*(_BYTE *)(v2 + 217) )
                  goto LABEL_115;
                v243 = v2;
                v244 = v1;
                v4 = 63;
                dcgettext(0LL, "error: unknown word '%s'\n", 5);
                sub_404F90();
                v7 = 2;
                v1 = v244;
                v2 = v243;
                goto LABEL_73;
              }
              goto LABEL_262;
            }
          }
LABEL_260:
          v209 = v200;
          v1 = v248;
          v5 = v252;
          v2 = v256;
          v44 = *((_DWORD *)v209 + 3);
          v4 = *((_DWORD *)v209 + 2);
          goto LABEL_54;
        }
LABEL_262:
        v44 = *((_DWORD *)v211 + 3);
        v4 = *((_DWORD *)v211 + 2);
LABEL_54:
        *(_QWORD *)&v299 = v44;
LABEL_3:
        if ( v4 <= 0 )
          goto LABEL_28;
        if ( v4 > 277 )
        {
          v3 += 2;
          v7 = 2;
          goto LABEL_6;
        }
        goto LABEL_72;
      }
LABEL_103:
      v29 = *(_BYTE **)v2;
      v50 = 0;
LABEL_75:
      v51 = v29;
      v52 = 0LL;
      v53 = (unsigned __int8)v32;
      while ( 1 )
      {
        v54 = v53 - 48;
        if ( v50 == -1 )
          v54 = 48 - v53;
        v55 = __OFADD__(v54, v52);
        v56 = v54 + v52;
        if ( v55 )
          goto LABEL_115;
        v53 = v51[1];
        v57 = (signed __int64)(v51 + 1);
        if ( (unsigned int)(v53 - 48) > 9 )
          break;
        v55 = (unsigned __int128)(10LL * v56) >> 64 != 0;
        v52 = 10 * v56;
        if ( v55 )
          goto LABEL_115;
        ++v51;
      }
      if ( (v51[1] & 0xFD) != 44 || (v58 = v51[2] - 48, (unsigned int)v58 > 9) )
      {
        *(_QWORD *)v2 = v57;
        v258 = v56;
        LOBYTE(v299) = v50 >> 31;
        v259 = v57 - (_QWORD)v29;
        v7 = 20 - (v50 >= 1);
        v4 = 275 - (v50 >= 1);
        goto LABEL_73;
      }
      v59 = (signed __int64)(v51 + 3);
      v60 = v51[3];
      v61 = 8;
      v62 = v60;
      do
      {
        v63 = v60 - 48;
        v58 *= 10;
        if ( (unsigned int)(v60 - 48) <= 9 )
        {
          v60 = *(_BYTE *)(v59 + 1);
          v58 += v63;
          ++v59;
          v62 = v60;
          v63 = v60 - 48;
        }
        --v61;
      }
      while ( v61 );
      if ( v50 != -1 )
      {
        if ( (unsigned int)v63 > 9 )
          goto LABEL_250;
        goto LABEL_88;
      }
      if ( (unsigned int)v63 <= 9 )
      {
        if ( v62 != 48 )
        {
LABEL_113:
          ++v58;
          if ( (unsigned int)(*(_BYTE *)v59 - 48) > 9 )
            goto LABEL_91;
          do
LABEL_88:
            ++v59;
          while ( (unsigned int)(*(_BYTE *)v59 - 48) <= 9 );
          if ( (v50 & 0x80000000) != 0 && v58 )
            goto LABEL_91;
LABEL_250:
          *(_QWORD *)v2 = v59;
          v258 = v58;
          *(_QWORD *)&v299 = v56;
          v7 = 22 - (v50 >= 1);
          v4 = 277 - (v50 >= 1);
          goto LABEL_73;
        }
        while ( (unsigned int)(*(_BYTE *)++v59 - 48) <= 9 )
        {
          if ( *(_BYTE *)v59 != 48 )
            goto LABEL_113;
        }
      }
      if ( !v58 )
      {
        *(_QWORD *)v2 = v59;
        v7 = 21;
        v4 = 276;
        *(_QWORD *)&v299 = v56;
        v258 = 0LL;
        goto LABEL_73;
      }
LABEL_91:
      if ( v56 != 0x8000000000000000LL )
      {
        *(_QWORD *)v2 = v59;
        v4 = 276;
        *(_QWORD *)&v299 = v56 - 1;
        v258 = 1000000000 - v58;
        v7 = 21;
        goto LABEL_73;
      }
LABEL_115:
      v7 = 2;
      v4 = 63;
      goto LABEL_73;
    }
    v33 = v29 + 1;
    while ( 1 )
    {
      *(_QWORD *)v2 = v33;
      v30 = *v33;
      v29 = v33;
      LODWORD(v32) = *v33;
      if ( (unsigned __int8)v30 > 0x20u )
        break;
      ++v33;
      if ( !((1LL << v32) & 0x100003E00LL) )
        goto LABEL_36;
    }
LABEL_55:
    v45 = (v32 - 43) & 0xFFFFFFFD;
    if ( (unsigned int)(v30 - 48) <= 9 )
    {
      v49 = (_BYTE)v32 == 45;
      if ( (_BYTE)v45 )
        goto LABEL_103;
      goto LABEL_67;
    }
    if ( (_BYTE)v45 )
      break;
    v49 = (_BYTE)v32 == 45;
LABEL_67:
    v32 = *(_QWORD *)v2 + 1LL;
    v50 = (unsigned __int8)v49 < 1u ? 1 : -1;
    while ( 1 )
    {
      *(_QWORD *)v2 = v32;
      v29 = (_BYTE *)v32;
      LOBYTE(v32) = *(_BYTE *)v32;
      v31 = (unsigned __int8)v32;
      if ( (unsigned __int8)v32 > 0x20u )
        break;
      v32 = (signed __int64)(v29 + 1);
      if ( !((1LL << v31) & 0x100003E00LL) )
      {
        v30 = (unsigned __int8)v31;
        goto LABEL_31;
      }
    }
    v30 = (unsigned __int8)v32;
    if ( (unsigned int)(unsigned __int8)v32 - 48 <= 9 )
      goto LABEL_75;
  }
  v34 = v30 - 65;
  if ( (unsigned int)(v30 - 65) <= 0x39 )
    goto LABEL_38;
LABEL_58:
  if ( (_BYTE)v32 != 40 )
  {
LABEL_27:
    *(_QWORD *)v2 = v29 + 1;
    v4 = *v29;
    if ( !(_BYTE)v4 )
      goto LABEL_28;
LABEL_72:
    v7 = (unsigned __int8)byte_416640[(signed __int64)v4];
LABEL_73:
    v3 += v7;
    goto LABEL_6;
  }
  v46 = *(_QWORD *)v2;
  v47 = 0LL;
  while ( 1 )
  {
    v29 = (_BYTE *)(v46 + 1);
    *(_QWORD *)v2 = v46 + 1;
    v48 = *(_BYTE *)v46;
    if ( !*(_BYTE *)v46 )
      break;
    if ( v48 == 40 )
      ++v47;
    else
      v47 -= v48 == 41;
    if ( !v47 )
    {
      v30 = *(_BYTE *)(v46 + 1);
      v31 = *(_BYTE *)(v46 + 1);
      goto LABEL_31;
    }
    ++v46;
  }
LABEL_28:
  v7 = 0;
  v4 = 0;
LABEL_6:
  if ( (unsigned int)v3 <= 0x70 && byte_416400[(signed __int64)v3] == v7 )
  {
    v1 = (unsigned __int8)byte_416480[(signed __int64)v3];
    if ( byte_416480[(signed __int64)v3] )
    {
      v8 = (signed __int64)v6;
      v4 = -2;
      v5 = (const __m128i *)((char *)v5 + 56);
      v257 = ((unsigned int)v257 < 1) + v257 - 1;
      *((_QWORD *)&v299 + 1) = v258;
      v9 = _mm_load_si128((const __m128i *)&v299);
      *(_QWORD *)&v300 = v259;
      v10 = v302;
      v11 = _mm_load_si128((const __m128i *)&v300);
      *v5 = v9;
      v12 = _mm_load_si128((const __m128i *)&v301);
      v5[3].m128i_i64[0] = v10;
      v5[1] = v11;
      v5[2] = v12;
      goto LABEL_10;
    }
    v67 = v5[6].m128i_i64[1];
    v8 = (signed __int64)v6;
    v68 = (signed __int64)v5;
    v69 = _mm_loadu_si128((const __m128i *)((char *)v5 + 72));
    v23 = v5[3].m128i_i64[1];
    v303 = _mm_loadu_si128((const __m128i *)((char *)v5 + 56));
    v70 = _mm_loadu_si128((const __m128i *)((char *)v5 + 88));
    v24 = v5[4].m128i_i64[0];
    v26 = v5[4].m128i_i64[1];
    v306 = v67;
    v71 = v5[5].m128i_i64[1];
    v27 = v5[5].m128i_i64[0];
    v304 = v69;
    v305 = v70;
    v251 = v71;
    v247 = v5[6].m128i_i64[0];
    v255 = v5[6].m128i_i32[2];
    v72 = -28;
    goto LABEL_100;
  }
  while ( 1 )
  {
    v13 = byte_416540[v1];
    if ( byte_416540[v1] )
    {
      v17 = (unsigned __int8)byte_416540[v1];
      v18 = (unsigned __int8)byte_416340[v17];
      v19 = (signed __int64)v5 + 56 * (1 - (unsigned __int8)byte_416340[v17]);
      v20 = _mm_loadu_si128((const __m128i *)v19);
      v21 = _mm_loadu_si128((const __m128i *)(v19 + 16));
      v22 = _mm_loadu_si128((const __m128i *)(v19 + 32));
      v23 = *(_QWORD *)v19;
      v24 = *(_QWORD *)(v19 + 8);
      v306 = *(_QWORD *)(v19 + 48);
      v25 = *(_QWORD *)(v19 + 32);
      v26 = *(_QWORD *)(v19 + 16);
      v303 = v20;
      v27 = *(_QWORD *)(v19 + 24);
      v304 = v21;
      v251 = v25;
      v28 = *(_QWORD *)(v19 + 40);
      LODWORD(v19) = *(_DWORD *)(v19 + 48);
      v305 = v22;
      v247 = v28;
      v255 = v19;
      switch ( v13 )
      {
        case 52:
        case 53:
          v77 = v5[3].m128i_i32[0];
          v78 = __OFADD__(*(_DWORD *)(v2 + 152), v77);
          *(_DWORD *)(v2 + 152) += v77;
          v79 = *(_QWORD *)(v2 + 144);
          v80 = v5[2].m128i_i64[1] + v79;
          LOBYTE(v79) = __OFADD__(v5[2].m128i_i64[1], v79);
          *(_QWORD *)(v2 + 144) = v80;
          v81 = *(_QWORD *)(v2 + 136);
          v82 = __OFADD__(v5[2].m128i_i64[0], v81);
          *(_QWORD *)(v2 + 136) = v5[2].m128i_i64[0] + v81;
          v83 = *(_QWORD *)(v2 + 128);
          v84 = __OFADD__(v5[1].m128i_i64[1], v83);
          *(_QWORD *)(v2 + 128) = v5[1].m128i_i64[1] + v83;
          v85 = *(_QWORD *)(v2 + 120);
          v55 = __OFADD__(v5[1].m128i_i64[0], v85);
          *(_QWORD *)(v2 + 120) = v5[1].m128i_i64[0] + v85;
          v86 = *(_QWORD *)(v2 + 112);
          v87 = v55;
          v55 = __OFADD__(v5->m128i_i64[1], v86);
          *(_QWORD *)(v2 + 112) = v5->m128i_i64[1] + v86;
          v88 = *(_QWORD *)(v2 + 104);
          v89 = __OFADD__(v5->m128i_i64[0], v88);
          *(_QWORD *)(v2 + 104) = v5->m128i_i64[0] + v88;
          if ( (unsigned __int8)(v87 | v84 | v82 | v78 | v79) | v55 || v89 )
            return 1LL;
          *(_BYTE *)(v2 + 161) = 1;
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          LODWORD(v1) = -93;
          v72 = 16;
          break;
        case 71:
        case 72:
          v90 = v5[-4].m128i_i64[1];
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          HIDWORD(v306) = 0;
          LODWORD(v1) = -93;
          v247 = v90;
          v255 = v5[-3].m128i_i32[0];
          v72 = 17;
          goto LABEL_108;
        case 70:
          HIDWORD(v306) = 0;
          v91 = v5[-3].m128i_i64[0];
          goto LABEL_117;
        case 31:
          *(_DWORD *)(v2 + 24) = 25200;
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          LODWORD(v1) = -93;
          v72 = 12;
          break;
        case 30:
          v92 = v5->m128i_i64[0];
          goto LABEL_121;
        case 29:
          *(_DWORD *)(v2 + 20) = 1;
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          LODWORD(v1) = -93;
          ++*(_QWORD *)(v2 + 192);
          v72 = 11;
          break;
        case 28:
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          LODWORD(v1) = -93;
          *(_DWORD *)(v2 + 20) = v5->m128i_i64[0];
          v72 = 11;
          break;
        case 27:
          v93 = v5[-3].m128i_i64[1];
          v94 = v5->m128i_i64[0];
          v95 = v24;
          v96 = v5[-3].m128i_i64[0];
          v97 = v5[-4].m128i_i8[8];
          v98 = v27;
          ++*(_QWORD *)(v2 + 208);
          v99 = v2;
          v100 = sub_405100((_DWORD *)(v2 + 24), v97, v96, v93, v94);
          v2 = v99;
          v27 = v98;
          v24 = v95;
          if ( !v100 )
            return 1LL;
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          LODWORD(v1) = -27;
          v72 = 10;
          break;
        case 24:
          v101 = v5[-4].m128i_i64[1];
          v102 = v5[-10].m128i_i64[0];
          *(_DWORD *)(v2 + 28) = 2;
          LODWORD(v1) = 20;
          v103 = v5[-17].m128i_i64[0];
          *(_QWORD *)(v2 + 88) = v101;
          v104 = v5[-3].m128i_i32[0];
          *(_QWORD *)(v2 + 72) = v103;
          v8 = (signed __int64)(v6 - 6);
          *(_QWORD *)(v2 + 80) = v102;
          v68 = (signed __int64)&v5[-21];
          *(_QWORD *)(v2 + 96) = v104;
          v72 = 8;
          break;
        case 85:
          v23 = v5->m128i_i64[1];
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          v24 = 0LL;
          LODWORD(v1) = -93;
          v72 = 21;
          break;
        case 68:
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          v72 = 17;
          v27 = 0LL;
          LODWORD(v1) = -93;
          v26 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          HIDWORD(v306) = 0;
          v255 = 0;
          v247 = 0LL;
          v251 = 1LL;
          break;
        case 67:
          HIDWORD(v306) = 0;
          v105 = v5[-3].m128i_i64[0];
          goto LABEL_130;
        case 66:
          HIDWORD(v306) = 0;
          v105 = v5[-4].m128i_i64[1];
LABEL_130:
          v251 = v105;
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_131;
        case 65:
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          v72 = 17;
          v26 = 0LL;
          LODWORD(v1) = -93;
          v24 = 0LL;
          v23 = 0LL;
          HIDWORD(v306) = 0;
          v255 = 0;
          v27 = 1LL;
          v247 = 0LL;
          v251 = 0LL;
          break;
        case 64:
          v27 = v5[-3].m128i_i64[0];
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          HIDWORD(v306) = 0;
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_135;
        case 63:
          v27 = v5[-4].m128i_i64[1];
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          HIDWORD(v306) = 0;
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_135;
        case 62:
          v26 = v5->m128i_i64[0];
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          v72 = 17;
          HIDWORD(v306) = 0;
          LODWORD(v1) = -93;
          goto LABEL_138;
        case 61:
          v106 = v5->m128i_i64[0] * v5[-3].m128i_i64[0];
          v55 = (unsigned __int128)(v5->m128i_i64[0] * (signed __int128)v5[-3].m128i_i64[0]) >> 64 != 0;
          v306 = 0LL;
          v303 = 0LL;
          v304 = 0LL;
          v305 = 0LL;
          v26 = v106;
          if ( !v55 )
            goto LABEL_140;
          return 1LL;
        case 60:
          v107 = v5->m128i_i64[0] * v5[-4].m128i_i64[1];
          v55 = (unsigned __int128)(v5->m128i_i64[0] * (signed __int128)v5[-4].m128i_i64[1]) >> 64 != 0;
          v306 = 0LL;
          v303 = 0LL;
          v304 = 0LL;
          v305 = 0LL;
          v26 = v107;
          if ( v55 )
            return 1LL;
LABEL_140:
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_138;
        case 59:
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          v72 = 17;
          v27 = 0LL;
          LODWORD(v1) = -93;
          v26 = 0LL;
          v23 = 0LL;
          HIDWORD(v306) = 0;
          v255 = 0;
          v24 = 1LL;
          v247 = 0LL;
          v251 = 0LL;
          break;
        case 58:
          v24 = v5[-3].m128i_i64[0];
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          HIDWORD(v306) = 0;
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_145;
        case 57:
          v24 = v5[-4].m128i_i64[1];
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          HIDWORD(v306) = 0;
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_145;
        case 4:
          v108 = _mm_loadu_si128(v5);
          *(_BYTE *)(v2 + 160) = 1;
          *(__m128i *)(v2 + 88) = v108;
          v276 = v24;
          v270 = v27;
          v260 = v2;
          v109 = dcgettext(0LL, "number of seconds", 5);
          v8 = (signed __int64)(v6 - 2);
          v68 = (signed __int64)&v5[-7];
          LODWORD(v1) = -93;
          v110 = (__int64)v109;
          v72 = 2;
          goto LABEL_148;
        case 10:
          v276 = v24;
          v111 = "zone";
          ++*(_QWORD *)(v2 + 208);
          v270 = v27;
          v260 = v2;
          goto LABEL_152;
        case 9:
          v276 = v24;
          v111 = (const char *)&unk_414A0E;
          v270 = v27;
          ++*(_QWORD *)(v2 + 184);
          v260 = v2;
          goto LABEL_152;
        case 78:
          v27 = v5[-3].m128i_i64[0];
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          HIDWORD(v306) = 0;
          LODWORD(v1) = 60;
          v72 = 18;
LABEL_135:
          v255 = 0;
          v26 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          v247 = 0LL;
          v251 = 0LL;
          break;
        case 77:
          v113 = v5->m128i_i64[0] * v5[-3].m128i_i64[0];
          v55 = (unsigned __int128)(v5->m128i_i64[0] * (signed __int128)v5[-3].m128i_i64[0]) >> 64 != 0;
          v306 = 0LL;
          v303 = 0LL;
          v304 = 0LL;
          v305 = 0LL;
          v26 = v113;
          if ( v55 )
            return 1LL;
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          LODWORD(v1) = 60;
          v72 = 18;
          goto LABEL_138;
        case 76:
          v24 = v5[-3].m128i_i64[0];
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          HIDWORD(v306) = 0;
          LODWORD(v1) = 60;
          v72 = 18;
LABEL_145:
          v255 = 0;
          v27 = 0LL;
          v26 = 0LL;
          v23 = 0LL;
          v247 = 0LL;
          v251 = 0LL;
          break;
        case 75:
          v23 = v5[-3].m128i_i64[0];
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          HIDWORD(v306) = 0;
          LODWORD(v1) = 60;
          v72 = 18;
          goto LABEL_159;
        case 73:
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          HIDWORD(v306) = 0;
          LODWORD(v1) = -93;
          v72 = 17;
          v255 = 0;
          v247 = 1LL;
          goto LABEL_108;
        case 91:
          v23 = v5->m128i_i64[1];
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          LODWORD(v1) = 43;
          v72 = 25;
          break;
        case 54:
          HIDWORD(v306) = 0;
          v23 = v5[-4].m128i_i64[1];
          goto LABEL_163;
        case 56:
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          v72 = 17;
          v27 = 0LL;
          LODWORD(v1) = -93;
          v26 = 0LL;
          HIDWORD(v306) = 0;
          v24 = 0LL;
          v255 = 0;
          v23 = 1LL;
          v247 = 0LL;
          v251 = 0LL;
          break;
        case 69:
          HIDWORD(v306) = 0;
          v91 = v5[-4].m128i_i64[1];
LABEL_117:
          v247 = v91;
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          LODWORD(v1) = -93;
          v72 = 17;
          goto LABEL_118;
        case 81:
          v26 = v5->m128i_i64[0];
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          v72 = 19;
          HIDWORD(v306) = 0;
          LODWORD(v1) = -93;
LABEL_138:
          v255 = 0;
          v27 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          v247 = 0LL;
          v251 = 0LL;
          break;
        case 80:
          v114 = v5[-3].m128i_i64[0];
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          HIDWORD(v306) = 0;
          LODWORD(v1) = 60;
          v247 = v114;
          v72 = 18;
LABEL_118:
          v255 = 0;
LABEL_108:
          v27 = 0LL;
          v26 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          v251 = 0LL;
          break;
        case 79:
          v115 = v5[-3].m128i_i64[0];
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          HIDWORD(v306) = 0;
          LODWORD(v1) = 60;
          v251 = v115;
          v72 = 18;
LABEL_131:
          v27 = 0LL;
          v26 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          v255 = 0;
          v247 = 0LL;
          break;
        case 23:
          v116 = v5[-3].m128i_i64[0];
          v117 = v5[-10].m128i_i64[0];
          *(_QWORD *)(v2 + 88) = 0LL;
          v8 = (signed __int64)(v6 - 4);
          *(_QWORD *)(v2 + 96) = 0LL;
          LODWORD(v1) = 20;
          *(_QWORD *)(v2 + 72) = v117;
          v68 = (signed __int64)&v5[-14];
          *(_QWORD *)(v2 + 80) = v116;
          v72 = 8;
          *(_DWORD *)(v2 + 28) = 2;
          break;
        case 22:
          v118 = v5[-3].m128i_i64[0];
          *(_QWORD *)(v2 + 80) = 0LL;
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          *(_QWORD *)(v2 + 88) = 0LL;
          LODWORD(v1) = 20;
          *(_QWORD *)(v2 + 72) = v118;
          v72 = 8;
          *(_QWORD *)(v2 + 96) = 0LL;
          *(_DWORD *)(v2 + 28) = 2;
          break;
        case 33:
          v278 = v24;
          v270 = v27;
          *(_DWORD *)(v2 + 24) = 25200;
          goto LABEL_172;
        case 32:
          v278 = v24;
          v270 = v27;
          *(_DWORD *)(v2 + 24) = v5[-4].m128i_i64[1];
LABEL_172:
          v119 = v5[3].m128i_i32[0];
          v120 = __OFADD__(*(_DWORD *)(v2 + 152), v119);
          *(_DWORD *)(v2 + 152) += v119;
          v121 = *(_QWORD *)(v2 + 144);
          v122 = v5[2].m128i_i64[1] + v121;
          LOBYTE(v121) = __OFADD__(v5[2].m128i_i64[1], v121);
          *(_QWORD *)(v2 + 144) = v122;
          v123 = *(_QWORD *)(v2 + 136);
          v124 = __OFADD__(v5[2].m128i_i64[0], v123);
          *(_QWORD *)(v2 + 136) = v5[2].m128i_i64[0] + v123;
          v125 = *(_QWORD *)(v2 + 128);
          v126 = __OFADD__(v5[1].m128i_i64[1], v125);
          *(_QWORD *)(v2 + 128) = v5[1].m128i_i64[1] + v125;
          v127 = *(_QWORD *)(v2 + 120);
          v128 = __OFADD__(v5[1].m128i_i64[0], v127);
          *(_QWORD *)(v2 + 120) = v5[1].m128i_i64[0] + v127;
          v129 = *(_QWORD *)(v2 + 112);
          v130 = __OFADD__(v5->m128i_i64[1], v129);
          *(_QWORD *)(v2 + 112) = v5->m128i_i64[1] + v129;
          v131 = *(_QWORD *)(v2 + 104);
          v132 = __OFADD__(v5->m128i_i64[0], v131);
          *(_QWORD *)(v2 + 104) = v5->m128i_i64[0] + v131;
          if ( (unsigned __int8)(v128 | v126 | v124 | v120 | v121) | v130 || v132 )
            return 1LL;
          *(_BYTE *)(v2 + 161) = 1;
          v260 = v2;
          v133 = dcgettext(0LL, "relative", 5);
          v2 = v260;
          v8 = (signed __int64)(v6 - 2);
          v68 = (signed __int64)&v5[-7];
          v134 = (__int64)v133;
          LODWORD(v1) = -93;
          v72 = 12;
          v27 = v270;
          v24 = v278;
          if ( !*(_BYTE *)(v260 + 217) )
            break;
          v290 = -93;
          v135 = v260;
          v288 = (signed __int64)&v5[-7];
          v286 = 12;
          v284 = v278;
          v277 = (signed __int64)(v6 - 2);
          goto LABEL_176;
        case 8:
          v276 = v24;
          v111 = "time";
          v270 = v27;
          ++*(_QWORD *)(v2 + 200);
          v260 = v2;
          goto LABEL_152;
        case 7:
          v276 = v24;
          v111 = (const char *)&unk_414A05;
          v270 = v27;
          ++*(_QWORD *)(v2 + 200);
          ++*(_QWORD *)(v2 + 168);
          v260 = v2;
          goto LABEL_152;
        case 20:
          v136 = v5[-10].m128i_i64[0];
          LODWORD(v1) = -93;
          v137 = v5[-17].m128i_i64[0];
          *(_QWORD *)(v2 + 88) = v5[-4].m128i_i64[1];
          v138 = v5[-3].m128i_i32[0];
          *(_QWORD *)(v2 + 72) = v137;
          v8 = (signed __int64)(v6 - 6);
          *(_QWORD *)(v2 + 96) = v138;
          v139 = v5->m128i_i64[0];
          *(_QWORD *)(v2 + 80) = v136;
          v68 = (signed __int64)&v5[-21];
          *(_DWORD *)(v2 + 28) = v139;
          v72 = 7;
          break;
        case 19:
          v140 = v5[-3].m128i_i64[0];
          v141 = v5[-10].m128i_i64[0];
          v8 = (signed __int64)(v6 - 4);
          *(_QWORD *)(v2 + 88) = 0LL;
          *(_QWORD *)(v2 + 96) = 0LL;
          LODWORD(v1) = -93;
          *(_QWORD *)(v2 + 80) = v140;
          v142 = v5->m128i_i64[0];
          *(_QWORD *)(v2 + 72) = v141;
          v68 = (signed __int64)&v5[-14];
          *(_DWORD *)(v2 + 28) = v142;
          v72 = 7;
          break;
        case 18:
          v143 = v5[-3].m128i_i64[0];
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          *(_QWORD *)(v2 + 80) = 0LL;
          *(_QWORD *)(v2 + 88) = 0LL;
          LODWORD(v1) = -93;
          *(_QWORD *)(v2 + 72) = v143;
          v144 = v5->m128i_i64[0];
          *(_QWORD *)(v2 + 96) = 0LL;
          *(_DWORD *)(v2 + 28) = v144;
          v72 = 7;
          break;
        case 15:
          v279 = v2;
          v145 = "hybrid";
          v271 = v24;
          v261 = v27;
          goto LABEL_184;
        case 14:
          v280 = v2;
          v272 = v24;
          v262 = v27;
          v147 = dcgettext(0LL, "number", 5);
          v2 = v280;
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          v148 = (__int64)v147;
          LODWORD(v1) = -93;
          v72 = 4;
          v27 = v262;
          v24 = v272;
          if ( !*(_BYTE *)(v280 + 217) )
            break;
          v149 = v280;
          v290 = -93;
          v288 = (signed __int64)&v5[-4].m128i_i64[1];
          v286 = 4;
          v284 = v272;
          v277 = (signed __int64)(v6 - 1);
          v270 = v262;
          v260 = v2;
          sub_4055A0(v148, v149);
          goto LABEL_150;
        case 13:
          v279 = v2;
          v145 = "relative";
          v271 = v24;
          v261 = v27;
LABEL_184:
          v146 = dcgettext(0LL, v145, 5);
          v2 = v279;
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          v134 = (__int64)v146;
          LODWORD(v1) = -93;
          v72 = 4;
          v27 = v261;
          v24 = v271;
          if ( !*(_BYTE *)(v279 + 217) )
            break;
          v290 = -93;
          v135 = v279;
          v288 = (signed __int64)&v5[-4].m128i_i64[1];
          v286 = 4;
          v284 = v271;
          v277 = (signed __int64)(v6 - 1);
          v270 = v261;
          v260 = v2;
LABEL_176:
          sub_405280(v134, v135);
          goto LABEL_150;
        case 12:
          v276 = v24;
          v111 = "day";
          v270 = v27;
          ++*(_QWORD *)(v2 + 176);
          v260 = v2;
          goto LABEL_152;
        case 11:
          v276 = v24;
          v111 = "date";
          v270 = v27;
          ++*(_QWORD *)(v2 + 168);
          v260 = v2;
LABEL_152:
          v112 = dcgettext(0LL, v111, 5);
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          LODWORD(v1) = -93;
          v110 = (__int64)v112;
          v72 = 4;
LABEL_148:
          v2 = v260;
          v27 = v270;
          v24 = v276;
          if ( *(_BYTE *)(v260 + 217) )
          {
            v290 = -93;
            v288 = v68;
            v286 = v72;
            v284 = v276;
            v277 = v8;
            sub_4055A0(v110, v260);
LABEL_150:
            v2 = v260;
            v27 = v270;
            v8 = v277;
            v24 = v284;
            v72 = v286;
            v68 = v288;
            LODWORD(v1) = v290;
          }
          break;
        case 39:
          v150 = v5[-4].m128i_i64[1];
          goto LABEL_192;
        case 38:
          v152 = v5[-4].m128i_i64[1];
          *(_QWORD *)(v2 + 8) = 0LL;
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          LODWORD(v1) = -93;
          *(_DWORD *)(v2 + 16) = v152;
          v72 = 13;
          break;
        case 37:
          v153 = v5->m128i_i64[0];
          *(_QWORD *)(v2 + 8) = 0LL;
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          LODWORD(v1) = -93;
          *(_DWORD *)(v2 + 16) = v153;
          v72 = 13;
          break;
        case 36:
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          LODWORD(v1) = -93;
          *(_DWORD *)(v2 + 24) = v5[-4].m128i_i32[2] + 3600;
          v72 = 12;
          break;
        case 35:
          LODWORD(v92) = LODWORD(v5->m128i_i64[0]) + 3600;
LABEL_121:
          *(_DWORD *)(v2 + 24) = v92;
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          LODWORD(v1) = -93;
          v72 = 12;
          break;
        case 34:
          v281 = v24;
          v273 = v27;
          v263 = v2;
          if ( !(unsigned __int8)sub_405100(
                                   (_DWORD *)(v2 + 24),
                                   v5[-4].m128i_i8[8],
                                   v5[-3].m128i_i64[0],
                                   v5[-3].m128i_i64[1],
                                   v5->m128i_i64[0]) )
            return 1LL;
          v2 = v263;
          v154 = *(_DWORD *)(v263 + 24);
          v55 = __OFADD__(v5[-7].m128i_i64[0], v154);
          v155 = v5[-7].m128i_i64[0] + v154;
          v156 = v55;
          *(_DWORD *)(v263 + 24) = v155;
          if ( v155 != (signed int)v155 )
            v156 = 1;
          if ( v156 )
            return 1LL;
          v68 = (signed __int64)&v5[-11].m128i_i64[1];
          v8 = (signed __int64)(v6 - 3);
          LODWORD(v1) = -93;
          v72 = 12;
          v27 = v273;
          v24 = v281;
          break;
        case 55:
          HIDWORD(v306) = 0;
          v23 = v5[-3].m128i_i64[0];
LABEL_163:
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          LODWORD(v1) = -93;
          v72 = 17;
LABEL_159:
          v255 = 0;
          v27 = 0LL;
          v26 = 0LL;
          v24 = 0LL;
          v247 = 0LL;
          v251 = 0LL;
          break;
        case 90:
          LODWORD(v1) = 43;
          v23 = -1LL;
          v8 = (signed __int64)&v6[-v18];
          v72 = 25;
          v68 = (signed __int64)v5 - 56 * v18;
          break;
        case 51:
          v157 = v5[-1].m128i_i32[2];
          v287 = *(_QWORD *)(v2 + 144);
          v264 = v5[-4].m128i_i64[1];
          v274 = v5[-3].m128i_i64[0];
          v158 = *(_QWORD *)(v2 + 136);
          v289 = *(_QWORD *)(v2 + 128);
          v282 = v5[-3].m128i_i64[1];
          v159 = v5[-1].m128i_i64[0];
          v291 = *(_QWORD *)(v2 + 120);
          v285 = v5[-2].m128i_i64[0];
          v160 = v5[-2].m128i_i64[1];
          v292 = *(_QWORD *)(v2 + 112);
          v161 = *(_DWORD *)(v2 + 152);
          v293 = *(_QWORD *)(v2 + 104);
          if ( SLODWORD(v5->m128i_i64[0]) < 0 )
          {
            *(_DWORD *)(v2 + 152) = v161 - v157;
            *(_QWORD *)(v2 + 144) = v287 - v159;
            *(_QWORD *)(v2 + 136) = v158 - v160;
            *(_QWORD *)(v2 + 128) = v289 - v285;
            *(_QWORD *)(v2 + 120) = v291 - v282;
            *(_QWORD *)(v2 + 112) = v292 - v274;
            *(_QWORD *)(v2 + 104) = v293 - v264;
            v162 = __OFSUB__(v293, v264) | __OFSUB__(v292, v274) | __OFSUB__(v291, v282) | __OFSUB__(v289, v285) | __OFSUB__(v158, v160) | __OFSUB__(v161, v157) | __OFSUB__(v287, v159);
          }
          else
          {
            *(_DWORD *)(v2 + 152) = v157 + v161;
            *(_QWORD *)(v2 + 144) = v159 + v287;
            *(_QWORD *)(v2 + 136) = v160 + v158;
            *(_QWORD *)(v2 + 128) = v285 + v289;
            *(_QWORD *)(v2 + 120) = v282 + v291;
            *(_QWORD *)(v2 + 112) = v274 + v292;
            *(_QWORD *)(v2 + 104) = v264 + v293;
            v162 = __OFADD__(v264, v293) | __OFADD__(v274, v292) | __OFADD__(v282, v291) | __OFADD__(v285, v289) | __OFADD__(v160, v158) | __OFADD__(v157, v161) | __OFADD__(v159, v287);
          }
          if ( v162 )
            return 1LL;
          *(_BYTE *)(v2 + 161) = 1;
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          LODWORD(v1) = -93;
          v72 = 16;
          break;
        case 50:
          v163 = _mm_loadu_si128(v5 - 7);
          *(_QWORD *)(v2 + 48) = v5[-6].m128i_i64[0];
          v164 = v5[-3].m128i_i64[0];
          *(__m128i *)(v2 + 32) = v163;
          *(_QWORD *)(v2 + 56) = -v164;
          if ( v164 == 0x8000000000000000LL )
            return 1LL;
          v165 = v5->m128i_i64[1];
          *(_QWORD *)(v2 + 64) = -v5->m128i_i64[1];
          if ( v165 == 0x8000000000000000LL )
            return 1LL;
          v68 = (signed __int64)&v5[-11].m128i_i64[1];
          v8 = (signed __int64)(v6 - 3);
          LODWORD(v1) = -93;
          v72 = 15;
          break;
        case 48:
          v166 = _mm_loadu_si128(v5);
          *(_QWORD *)(v2 + 64) = v5[-7].m128i_i64[1];
          v167 = v5[-4].m128i_i64[1];
          *(__m128i *)(v2 + 32) = v166;
          *(_QWORD *)(v2 + 56) = v167;
          goto LABEL_212;
        case 47:
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          LODWORD(v1) = -93;
          *(_QWORD *)(v2 + 64) = v5[-3].m128i_i64[0];
          *(_QWORD *)(v2 + 56) = v5->m128i_i64[0];
          v72 = 14;
          break;
        case 46:
          v168 = _mm_loadu_si128(v5);
          v8 = (signed __int64)(v6 - 4);
          v68 = (signed __int64)&v5[-14];
          LODWORD(v1) = -93;
          *(_QWORD *)(v2 + 56) = v5[-11].m128i_i64[1];
          v169 = v5[-7].m128i_i64[1];
          *(__m128i *)(v2 + 32) = v168;
          *(_QWORD *)(v2 + 64) = v169;
          *(_QWORD *)(v2 + 48) = v5[1].m128i_i64[0];
          v72 = 14;
          break;
        case 45:
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          LODWORD(v1) = -93;
          *(_QWORD *)(v2 + 56) = v5[-4].m128i_i64[1];
          *(_QWORD *)(v2 + 64) = v5->m128i_i64[1];
          v72 = 14;
          break;
        case 44:
          *(_QWORD *)(v2 + 56) = v5[-7].m128i_i64[0];
          v170 = v5[-3].m128i_i64[0];
          *(_QWORD *)(v2 + 64) = -v5[-3].m128i_i64[0];
          if ( v170 == 0x8000000000000000LL )
            return 1LL;
          v171 = v5->m128i_i64[1];
          *(_QWORD *)(v2 + 40) = -v5->m128i_i64[1];
          if ( v171 == 0x8000000000000000LL )
            return 1LL;
          goto LABEL_212;
        case 43:
          *(_QWORD *)(v2 + 64) = v5[-7].m128i_i64[1];
          *(_QWORD *)(v2 + 56) = v5[-4].m128i_i64[1];
          v172 = v5->m128i_i64[1];
          *(_QWORD *)(v2 + 40) = -v5->m128i_i64[1];
          if ( v172 == 0x8000000000000000LL )
            return 1LL;
LABEL_212:
          v8 = (signed __int64)(v6 - 3);
          v68 = (signed __int64)&v5[-11].m128i_i64[1];
          LODWORD(v1) = -93;
          *(_QWORD *)(v2 + 48) = v5[1].m128i_i64[0];
          v72 = 14;
          break;
        case 42:
          v173 = *(_BYTE *)(v2 + 217);
          if ( v5[-13].m128i_i64[0] <= 3 )
          {
            v267 = v5[-14].m128i_i64[1];
            if ( v173 )
            {
              v218 = v2;
              v219 = v24;
              v220 = v27;
              dcgettext(0LL, "warning: value %ld has less than 4 digits. Assuming MM/DD/YY[YY]\n", 5);
              sub_404F90();
              v2 = v218;
              v24 = v219;
              v27 = v220;
            }
            v212 = _mm_loadu_si128(v5);
            v8 = (signed __int64)(v6 - 5);
            v68 = (signed __int64)&v5[-18].m128i_i64[1];
            LODWORD(v1) = -93;
            *(_QWORD *)(v2 + 56) = v267;
            v213 = v5[-7].m128i_i64[1];
            *(__m128i *)(v2 + 32) = v212;
            *(_QWORD *)(v2 + 64) = v213;
            *(_QWORD *)(v2 + 48) = v5[1].m128i_i64[0];
            v72 = 14;
          }
          else
          {
            if ( v173 )
            {
              v214 = v2;
              v215 = v24;
              v216 = v27;
              v217 = v5[-14].m128i_i64[1];
              dcgettext(0LL, "warning: value %ld has %ld digits. Assuming YYYY/MM/DD\n", 5);
              sub_404F90();
              v2 = v214;
              v24 = v215;
              v27 = v216;
            }
            v174 = _mm_loadu_si128(v5 - 14);
            v8 = (signed __int64)(v6 - 5);
            v68 = (signed __int64)&v5[-18].m128i_i64[1];
            LODWORD(v1) = -93;
            *(_QWORD *)(v2 + 48) = v5[-13].m128i_i64[0];
            v175 = v5[-7].m128i_i64[1];
            *(__m128i *)(v2 + 32) = v174;
            *(_QWORD *)(v2 + 56) = v175;
            *(_QWORD *)(v2 + 64) = v5->m128i_i64[1];
            v72 = 14;
          }
          break;
        case 41:
          v8 = (signed __int64)(v6 - 3);
          v68 = (signed __int64)&v5[-11].m128i_i64[1];
          LODWORD(v1) = -93;
          *(_QWORD *)(v2 + 56) = v5[-7].m128i_i64[1];
          *(_QWORD *)(v2 + 64) = v5->m128i_i64[1];
          v72 = 14;
          break;
        case 40:
          v150 = v5[-3].m128i_i64[0];
LABEL_192:
          *(_QWORD *)(v2 + 8) = v150;
          v151 = v5->m128i_i64[0];
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          *(_BYTE *)(v2 + 224) = 1;
          LODWORD(v1) = -93;
          *(_DWORD *)(v2 + 16) = v151;
          v72 = 13;
          break;
        case 89:
          v283 = v24;
          v275 = v27;
          v265 = v2;
          sub_404CA0(v2, v5[-4].m128i_i64[1], v5[-3].m128i_i64[0], v5[-3].m128i_i64[1]);
          v176 = v5[3].m128i_i32[0];
          v2 = v265;
          v177 = __OFADD__(*(_DWORD *)(v265 + 152), v176);
          *(_DWORD *)(v265 + 152) += v176;
          v178 = *(_QWORD *)(v265 + 144);
          v179 = v5[2].m128i_i64[1] + v178;
          LOBYTE(v178) = __OFADD__(v5[2].m128i_i64[1], v178);
          *(_QWORD *)(v265 + 144) = v179;
          v180 = *(_QWORD *)(v265 + 136);
          v181 = __OFADD__(v5[2].m128i_i64[0], v180);
          *(_QWORD *)(v265 + 136) = v5[2].m128i_i64[0] + v180;
          v182 = *(_QWORD *)(v265 + 128);
          v183 = __OFADD__(v5[1].m128i_i64[1], v182);
          *(_QWORD *)(v265 + 128) = v5[1].m128i_i64[1] + v182;
          v184 = *(_QWORD *)(v265 + 120);
          v185 = __OFADD__(v5[1].m128i_i64[0], v184);
          *(_QWORD *)(v265 + 120) = v5[1].m128i_i64[0] + v184;
          v186 = *(_QWORD *)(v265 + 112);
          v187 = __OFADD__(v5->m128i_i64[1], v186);
          *(_QWORD *)(v265 + 112) = v5->m128i_i64[1] + v186;
          v188 = *(_QWORD *)(v265 + 104);
          v189 = __OFADD__(v5->m128i_i64[0], v188);
          *(_QWORD *)(v265 + 104) = v5->m128i_i64[0] + v188;
          if ( (unsigned __int8)(v185 | v183 | v181 | v177 | v178) | v187 || v189 )
            return 1LL;
          *(_BYTE *)(v265 + 161) = 1;
          v68 = (signed __int64)&v5[-7];
          v8 = (signed __int64)(v6 - 2);
          LODWORD(v1) = -93;
          v72 = 24;
          v27 = v275;
          v24 = v283;
          break;
        case 88:
          v190 = v24;
          v191 = v27;
          v192 = v2;
          sub_404CA0(v2, v5->m128i_i64[0], v5->m128i_i64[1], v5[1].m128i_i64[0]);
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          LODWORD(v1) = -93;
          v72 = 23;
          v2 = v192;
          v27 = v191;
          v24 = v190;
          break;
        case 87:
          v23 = v5->m128i_i64[1];
          v68 = (signed __int64)&v5[-4].m128i_i64[1];
          v8 = (signed __int64)(v6 - 1);
          v24 = 0LL;
          LODWORD(v1) = -92;
          v72 = 22;
          break;
        default:
          v72 = (unsigned __int8)byte_4163A0[v17] - 28;
          LODWORD(v1) = byte_416520[(signed __int64)v72];
          v8 = (signed __int64)&v6[-v18];
          v68 = (signed __int64)v5 - 56 * v18;
          break;
      }
LABEL_100:
      v303.m128i_i64[0] = v23;
      v5 = (const __m128i *)(v68 + 56);
      v303.m128i_i64[1] = v24;
      v73 = _mm_load_si128(&v303);
      v305.m128i_i64[0] = v251;
      v304.m128i_i64[0] = v26;
      v304.m128i_i64[1] = v27;
      v74 = _mm_load_si128(&v304);
      v305.m128i_i64[1] = v247;
      v75 = _mm_load_si128(&v305);
      LODWORD(v306) = v255;
      v76 = v306;
      *(__m128i *)(v68 + 56) = v73;
      *(_QWORD *)(v68 + 104) = v76;
      *(__m128i *)(v68 + 72) = v74;
      *(__m128i *)(v68 + 88) = v75;
      LODWORD(v1) = *(_WORD *)v8 + (_DWORD)v1;
      if ( (unsigned int)v1 <= 0x70
        && (v1 = (signed int)v1, *(_WORD *)v8 == byte_416400[(signed __int64)(signed int)v1]) )
      {
        v1 = (unsigned __int8)byte_416480[v1];
      }
      else
      {
        v1 = byte_416500[(signed __int64)v72];
      }
      goto LABEL_10;
    }
    if ( v257 == 3 )
    {
      if ( v4 > 0 )
      {
        v4 = -2;
        goto LABEL_22;
      }
      if ( !v4 )
        return 1LL;
    }
LABEL_22:
    while ( 1 )
    {
      v15 = byte_4165C0[v1];
      if ( v15 != -93 )
      {
        LODWORD(v16) = v15 + 1;
        if ( (unsigned int)v16 <= 0x70 )
        {
          v16 = (signed int)v16;
          if ( byte_416400[(signed __int64)(signed int)v16] == 1 )
          {
            v1 = (unsigned __int8)byte_416480[v16];
            if ( byte_416480[v16] )
              break;
          }
        }
      }
      if ( v6 == &v297 )
        return 1LL;
      --v6;
      v1 = *v6;
      v5 = (const __m128i *)((char *)v5 - 56);
    }
    v5 = (const __m128i *)((char *)v5 + 56);
    v8 = (signed __int64)v6;
    v257 = 3;
    *((_QWORD *)&v299 + 1) = v258;
    v64 = _mm_load_si128((const __m128i *)&v299);
    *(_QWORD *)&v300 = v259;
    v65 = v302;
    *v5 = v64;
    v66 = _mm_load_si128((const __m128i *)&v300);
    v5[3].m128i_i64[0] = v65;
    v5[1] = v66;
    v5[2] = _mm_load_si128((const __m128i *)&v301);
LABEL_10:
    v6 = (__int16 *)(v8 + 2);
    *(_WORD *)(v8 + 2) = v1;
    if ( v8 + 2 >= (unsigned __int64)&v298 )
      return 2LL;
    if ( (_DWORD)v1 == 12 )
      return 0LL;
    v3 = byte_4165C0[(signed __int64)(signed int)v1];
    if ( v3 != -93 )
      goto LABEL_2;
  }
}

__int64 __fastcall sub_407BC0(time_t *a1, const char *a2, struct timespec *a3, char a4, unsigned __int64 a5, char *a6)
{
  unsigned __int64 v6; // r14@1
  struct timespec *v7; // r13@1
  const char *v8; // rbp@1
  __time_t v9; // rbx@3
  signed __int64 v10; // r12@3
  unsigned __int64 v11; // rax@3
  unsigned __int8 v12; // cf@3
  bool v13; // zf@3
  signed __int64 v14; // rdx@4
  const char *v15; // rdi@5
  signed __int64 v16; // rcx@5
  _BYTE *v17; // rsi@5
  char v18; // r15@9
  signed __int64 v19; // rsi@9
  signed __int64 v20; // rdx@10
  char v21; // al@10
  signed __int64 v22; // rdi@10
  signed __int64 v23; // rax@12
  char v24; // dl@15
  char *v25; // rsi@17
  __int64 v26; // rax@17
  unsigned __int64 v27; // r15@18
  signed int v28; // er12@21
  __int64 v29; // rax@23
  signed int v30; // ebx@33
  unsigned __int64 v31; // r12@35
  char v32; // bp@37
  signed __int64 v33; // rax@37
  unsigned __int8 v34; // bp@41
  signed int v35; // edx@43
  unsigned __int8 v36; // cl@45
  unsigned int v37; // edx@46
  __int64 v38; // rax@47
  unsigned int v39; // er9@52
  unsigned int v40; // er8@52
  unsigned int v41; // edi@52
  int v42; // eax@55
  __int64 v43; // rax@56
  __int64 v44; // rbx@56
  int v45; // er13@58
  int v46; // er12@58
  __int16 *v47; // rbx@63
  char *v48; // r9@64
  signed __int64 v49; // rax@66
  signed __int64 v50; // rdx@66
  char *v51; // rax@76
  char v53; // cl@83
  unsigned __int64 v54; // rbx@87
  char *i; // rdx@92
  signed __int64 v56; // rax@93
  unsigned __int64 v57; // rax@95
  signed __int64 v58; // rdx@96
  __int64 v59; // rax@99
  const char *v60; // rsi@102
  bool v61; // cf@105
  bool v62; // zf@105
  char *v63; // rax@106
  char *v64; // rcx@106
  char *v65; // rax@111
  __int64 v66; // rcx@111
  __int64 v67; // rax@112
  __int64 v68; // rax@114
  bool v69; // cf@119
  bool v70; // zf@119
  const char *v71; // rsi@119
  char *v72; // rsi@120
  _BYTE *v73; // rdi@120
  signed __int64 v74; // rcx@120
  time_t v75; // rbp@126
  time_t v76; // r12@126
  __int64 v77; // rax@128
  __int64 v78; // rbp@129
  signed __int64 v79; // rcx@134
  char *v80; // rsi@150
  _BYTE *v81; // rdi@150
  signed __int64 v82; // rcx@150
  signed __int64 v83; // rbp@155
  __int64 v84; // rbp@157
  int v85; // edx@162
  __int64 v86; // rax@169
  __int64 v87; // r12@169
  __int64 v88; // rax@170
  bool v89; // r13@170
  unsigned __int64 v90; // rax@173
  int v91; // ecx@177
  char *v92; // rax@177
  unsigned __int8 v93; // of@178
  char *v94; // rax@178
  signed int v95; // edx@178
  __int64 v96; // rax@181
  __int64 v97; // rdi@183
  __int64 v98; // rdx@183
  unsigned __int8 v99; // al@184
  int v100; // er12@186
  __int64 v101; // rdx@186
  signed __int64 v102; // r11@188
  signed __int64 v103; // r9@189
  unsigned __int64 v104; // rcx@189
  int v105; // eax@189
  signed __int64 v106; // rbx@189
  __int64 v107; // r12@190
  __int64 v108; // rdx@190
  signed __int64 v109; // rbx@191
  __int64 v110; // r13@192
  signed __int64 v111; // rbx@192
  char *v112; // rbx@193
  signed __int64 v113; // r9@198
  unsigned __int64 v114; // rbx@198
  char *v115; // r13@210
  __int64 *v116; // r12@213
  __int64 v117; // rcx@214
  __int64 v118; // rax@220
  __int64 v119; // r13@223
  __int64 v120; // r12@225
  __int64 v121; // rax@227
  __int64 v122; // rdx@230
  char *v123; // rbx@245
  __int64 v124; // rax@246
  int v125; // edx@246
  __int64 v126; // rbp@259
  signed __int64 v127; // r9@259
  signed __int64 v128; // r10@260
  __int64 v129; // rax@271
  __int64 v130; // ST50_8@279
  int v131; // ST4C_4@286
  __int64 v132; // r13@286
  __int64 v133; // rbx@294
  __int64 v134; // rax@296
  char *ptr; // [sp+8h] [bp-430h]@18
  char *src; // [sp+10h] [bp-428h]@1
  int srca; // [sp+10h] [bp-428h]@58
  char v138; // [sp+18h] [bp-420h]@1
  signed int v139; // [sp+18h] [bp-420h]@46
  __int64 v140; // [sp+18h] [bp-420h]@188
  signed int v141; // [sp+18h] [bp-420h]@222
  __syscall_slong_t v142; // [sp+20h] [bp-418h]@3
  int v143; // [sp+20h] [bp-418h]@58
  time_t *timer; // [sp+28h] [bp-410h]@1
  size_t v145; // [sp+30h] [bp-408h]@1
  int v146; // [sp+38h] [bp-400h]@58
  int v147; // [sp+44h] [bp-3F4h]@58
  __int64 v148; // [sp+48h] [bp-3F0h]@57
  struct timespec v149; // [sp+60h] [bp-3D8h]@2
  char v150; // [sp+70h] [bp-3C8h]@114
  unsigned __int64 v151; // [sp+90h] [bp-3A8h]@51
  unsigned __int64 v152; // [sp+98h] [bp-3A0h]@46
  unsigned __int64 v153; // [sp+A0h] [bp-398h]@39
  int v154; // [sp+A8h] [bp-390h]@174
  int v155; // [sp+B0h] [bp-388h]@21
  __int64 v156; // [sp+B8h] [bp-380h]@186
  unsigned __int64 v157; // [sp+D0h] [bp-368h]@56
  unsigned __int64 v158; // [sp+D8h] [bp-360h]@56
  unsigned __int64 v159; // [sp+E0h] [bp-358h]@56
  int v160; // [sp+F0h] [bp-348h]@56
  int v161; // [sp+110h] [bp-328h]@17
  int v162; // [sp+114h] [bp-324h]@21
  int v163; // [sp+118h] [bp-320h]@21
  int v164; // [sp+11Ch] [bp-31Ch]@21
  int v165; // [sp+120h] [bp-318h]@21
  int v166; // [sp+124h] [bp-314h]@21
  int v167; // [sp+130h] [bp-308h]@21
  char *v168; // [sp+140h] [bp-2F8h]@21
  struct tm tp; // [sp+150h] [bp-2E8h]@126
  __int64 v170; // [sp+190h] [bp-2A8h]@23
  char v171; // [sp+200h] [bp-238h]@91
  __int16 v172; // [sp+270h] [bp-1C8h]@23
  char v173; // [sp+272h] [bp-1C6h]@169
  char v174; // [sp+273h] [bp-1C5h]@169
  int v175; // [sp+290h] [bp-1A8h]@25
  int v176; // [sp+298h] [bp-1A0h]@129
  char *v177; // [sp+2A0h] [bp-198h]@24
  unsigned __int64 v178; // [sp+2E0h] [bp-158h]@21
  __int64 v179; // [sp+2E8h] [bp-150h]@173
  int v180; // [sp+2F0h] [bp-148h]@174
  int v181; // [sp+2F4h] [bp-144h]@130
  int v182; // [sp+2F8h] [bp-140h]@114
  unsigned int v183; // [sp+2FCh] [bp-13Ch]@21
  __int64 v184; // [sp+308h] [bp-130h]@21
  __int64 v185; // [sp+310h] [bp-128h]@19
  __int64 v186; // [sp+318h] [bp-120h]@21
  __int64 v187; // [sp+320h] [bp-118h]@21
  unsigned __int64 v188; // [sp+328h] [bp-110h]@21
  __int64 v189; // [sp+330h] [bp-108h]@21
  __int128 v190; // [sp+338h] [bp-100h]@21
  __int128 v191; // [sp+348h] [bp-F0h]@21
  __int128 v192; // [sp+358h] [bp-E0h]@21
  __int128 v193; // [sp+368h] [bp-D0h]@21
  __int64 v194; // [sp+378h] [bp-C0h]@21
  __int16 v195; // [sp+380h] [bp-B8h]@21
  __int64 v196; // [sp+388h] [bp-B0h]@21
  __int64 v197; // [sp+390h] [bp-A8h]@21
  __int64 v198; // [sp+398h] [bp-A0h]@21
  __int64 v199; // [sp+3A0h] [bp-98h]@21
  __int64 v200; // [sp+3A8h] [bp-90h]@21
  __int64 v201; // [sp+3B0h] [bp-88h]@21
  char v202; // [sp+3B8h] [bp-80h]@21
  unsigned __int8 v203; // [sp+3B9h] [bp-7Fh]@21
  __int16 v204; // [sp+3BAh] [bp-7Eh]@21
  int v205; // [sp+3BCh] [bp-7Ch]@21
  char v206; // [sp+3C0h] [bp-78h]@21
  char *s1; // [sp+3C8h] [bp-70h]@21
  int v208; // [sp+3D0h] [bp-68h]@21
  int v209; // [sp+3D4h] [bp-64h]@21
  char *s2; // [sp+3D8h] [bp-60h]@21
  int v211; // [sp+3E0h] [bp-58h]@168
  int v212; // [sp+3E4h] [bp-54h]@168
  __int64 v213; // [sp+3E8h] [bp-50h]@168

  v6 = a5;
  v7 = a3;
  v8 = a2;
  timer = a1;
  v138 = a4;
  src = a6;
  v145 = strlen(a2);
  if ( !v7 )
  {
    v7 = &v149;
    sub_404BC0(&v149);
  }
  v9 = v7->tv_sec;
  v10 = (signed __int64)a2;
  v142 = v7->tv_nsec;
  v11 = *a2;
  v12 = (unsigned __int8)v11 < 0x20u;
  v13 = (_BYTE)v11 == 32;
  if ( (unsigned __int8)v11 <= 0x20u )
  {
    v14 = 4294983168LL;
    v12 = _bittest64(&v14, v11);
    if ( v12 )
    {
      do
      {
        v53 = *(_BYTE *)++v10;
        v12 = *(_BYTE *)v10 < 0x20u;
        v13 = *(_BYTE *)v10 == 32;
        if ( *(_BYTE *)v10 > 0x20u )
          break;
        v12 = 0;
        v13 = ((1LL << v53) & 0x100003E00LL) == 0;
      }
      while ( (1LL << v53) & 0x100003E00LL );
    }
  }
  v15 = "TZ=\"";
  v16 = 4LL;
  v17 = (_BYTE *)v10;
  do
  {
    if ( !v16 )
      break;
    v12 = *v17 < (const unsigned __int8)*v15;
    v13 = *v17++ == *v15++;
    --v16;
  }
  while ( v13 );
  if ( !(v12 | v13) != v12 || (v18 = *(_BYTE *)(v10 + 4), v19 = v10 + 4, !v18) )
  {
LABEL_17:
    v25 = (char *)v7;
    LODWORD(v26) = sub_40DE20(v6, v7, &v161);
    if ( !v26 )
      goto LABEL_109;
    ptr = 0LL;
    v27 = v6;
    goto LABEL_19;
  }
  v20 = v10 + 4;
  v21 = *(_BYTE *)(v10 + 4);
  v22 = 1LL;
  while ( v21 == 92 )
  {
    v23 = v20 + 1;
    v24 = *(_BYTE *)(v20 + 1);
    if ( v24 != 92 && v24 != 34 )
      goto LABEL_17;
LABEL_13:
    v20 = v23 + 1;
    v21 = *(_BYTE *)(v23 + 1);
    ++v22;
    if ( !v21 )
      goto LABEL_17;
  }
  if ( v21 != 34 )
  {
    v23 = v20;
    goto LABEL_13;
  }
  if ( v22 <= 100 )
  {
    ptr = 0LL;
    src = &v171;
    goto LABEL_92;
  }
  v19 = v10 + 4;
  src = (char *)malloc(v22);
  ptr = src;
  if ( !src )
  {
LABEL_109:
    v30 = 0;
    free(0LL);
    return (unsigned int)v30;
  }
LABEL_92:
  for ( i = src; v18 != 34; *(i - 1) = *(_BYTE *)v56 )
  {
    ++i;
    v56 = v19 + (v18 == 92);
    v18 = *(_BYTE *)(v56 + 1);
    v19 = v56 + 1;
  }
  *i = 0;
  v27 = sub_40DB40(src);
  if ( !v27 )
  {
    v30 = 0;
    goto LABEL_81;
  }
  v57 = *(_BYTE *)(v19 + 1);
  v10 = v19 + 1;
  if ( (unsigned __int8)v57 <= 0x20u )
  {
    v58 = 4294983168LL;
    if ( _bittest64(&v58, v57) )
    {
      do
        ++v10;
      while ( *(_BYTE *)v10 <= 0x20u && (1LL << *(_BYTE *)v10) & 0x100003E00LL );
    }
  }
  v25 = (char *)v7;
  LODWORD(v59) = sub_40DE20(v27, v7, &v161);
  if ( !v59 )
  {
    v30 = 0;
    goto LABEL_79;
  }
LABEL_19:
  v13 = *(_BYTE *)v10 == 0;
  v185 = 0LL;
  if ( v13 )
    v10 = 4271000LL;
  v183 = 2;
  v191 = 0LL;
  v178 = v10;
  v203 = v138 & 1;
  v184 = v166 + 1900LL;
  *((_QWORD *)&v190 + 1) = (signed int)v142;
  v28 = 7776000;
  v192 = 0LL;
  v193 = 0LL;
  v186 = v165 + 1;
  v194 = 0LL;
  v187 = v164;
  v195 = 0;
  v188 = v163;
  v196 = 0LL;
  v189 = v162;
  v197 = 0LL;
  *(_QWORD *)&v190 = v161;
  v200 = 0LL;
  v155 = v167;
  v198 = 0LL;
  v199 = 0LL;
  v201 = 0LL;
  v202 = 0;
  v204 = 0;
  v205 = 0;
  v206 = 0;
  s1 = v168;
  v208 = 269;
  v209 = v167;
  s2 = 0LL;
  while ( !__OFADD__(v9, v28) )
  {
    v25 = (char *)&v170;
    v170 = v9 + v28;
    LODWORD(v29) = sub_40DE20(v27, &v170, &v172);
    if ( v29 && v177 && v175 != v209 )
    {
      s2 = v177;
      v211 = 269;
      v212 = v175;
      v213 = 0LL;
      break;
    }
    v28 += 7776000;
    if ( v28 == 31104000 )
      break;
  }
  if ( s1 )
  {
    v25 = s2;
    if ( s2 )
    {
      if ( !strcmp(s1, s2) )
      {
        v209 = -1;
        s2 = 0LL;
      }
    }
  }
  if ( (unsigned int)sub_405940((__int64)&v178) )
  {
    v30 = v203;
    if ( v203 )
    {
      v54 = v178;
      if ( v178 < (unsigned __int64)&v8[v145] )
        dcgettext(0LL, "error: parsing failed, stopped at '%s'\n", 5);
      else
        dcgettext(0LL, "error: parsing failed\n", 5);
      v25 = (char *)v54;
      v30 = 0;
      sub_404F90();
    }
    goto LABEL_79;
  }
  if ( v203 )
  {
    dcgettext(0LL, "input timezone: ", 5);
    sub_404F90();
    v60 = "'@timespec' - always UTC";
    if ( !(_BYTE)v195 )
    {
      v60 = "parsed date/time string";
      if ( !v201 )
      {
        if ( src )
        {
          v61 = v6 < v27;
          v62 = v6 == v27;
          if ( v6 != v27 )
          {
            v63 = dcgettext(0LL, "TZ=\"%s\" in date string", 5);
            v64 = src;
LABEL_107:
            __fprintf_chk(stderr, 1LL, v63, v64);
            goto LABEL_112;
          }
          v80 = src;
          v81 = "TZ=UTC0" + 3;
          v82 = 5LL;
          do
          {
            if ( !v82 )
              break;
            v61 = (unsigned __int8)*v80 < *v81;
            v62 = *v80++ == *v81++;
            --v82;
          }
          while ( v62 );
          v60 = "TZ=\"UTC0\" environment value or -u";
          if ( (!v61 && !v62) != v61 )
          {
            v63 = dcgettext(0LL, "TZ=\"%s\" environment value", 5);
            v64 = src;
            goto LABEL_107;
          }
        }
        else
        {
          v60 = "system default";
        }
      }
    }
    v65 = dcgettext(0LL, v60, 5);
    __fprintf_chk(stderr, 1LL, v65, v66);
LABEL_112:
    v67 = v201;
    if ( v198 )
    {
      if ( v201 )
      {
LABEL_114:
        v68 = sub_404E20(v182, (__int64)&v150);
        __fprintf_chk(stderr, 1LL, " (%s)", v68);
LABEL_115:
        v25 = (char *)stderr;
LABEL_116:
        fputc(10, (FILE *)v25);
        v30 = v203;
        if ( !(_BYTE)v195 )
        {
          v25 = (char *)v200;
          v79 = v196;
          if ( ((v198 + v201) | v199 | v197 | v196 | v200) <= 1 )
            goto LABEL_35;
          if ( v203 )
          {
            if ( v200 > 1 )
            {
              sub_404F90();
              v79 = v196;
            }
            if ( v79 > 1 )
              sub_404F90();
            if ( v197 > 1 )
              sub_404F90();
            if ( v199 > 1 )
              sub_404F90();
            if ( v198 + v201 > 1 )
            {
              v30 = 0;
              sub_404F90();
              goto LABEL_79;
            }
          }
          goto LABEL_78;
        }
        *(__m128i *)timer = _mm_loadu_si128((const __m128i *)&v190);
LABEL_118:
        if ( !(_BYTE)v30 )
        {
          v30 = 1;
          goto LABEL_79;
        }
        v69 = 0;
        v70 = src == 0LL;
        v71 = "timezone: system default\n";
        if ( src )
        {
          v72 = src;
          v73 = "TZ=UTC0" + 3;
          v74 = 5LL;
          do
          {
            if ( !v74 )
              break;
            v69 = (unsigned __int8)*v72 < *v73;
            v70 = *v72++ == *v73++;
            --v74;
          }
          while ( v70 );
          if ( (!v69 && !v70) != v69 )
          {
            dcgettext(0LL, "timezone: TZ=\"%s\" environment value\n", 5);
            sub_404F90();
            goto LABEL_126;
          }
          v71 = "timezone: Universal Time\n";
        }
        dcgettext(0LL, v71, 5);
        sub_404F90();
LABEL_126:
        v75 = *timer;
        v76 = timer[1];
        dcgettext(0LL, "final: %ld.%09d (epoch-seconds)\n", 5);
        sub_404F90();
        if ( gmtime_r(timer, &tp) )
        {
          sub_405410((__int64)&tp, 0LL, (__int64)&v170);
          dcgettext(0LL, "final: %s (UTC)\n", 5);
          sub_404F90();
        }
        v25 = (char *)timer;
        LODWORD(v77) = sub_40DE20(v27, timer, &v172);
        if ( v77 )
        {
          sub_404E20(v176, (__int64)&v150);
          v78 = sub_405410((__int64)&v172, 0LL, (__int64)&v170);
          dcgettext(0LL, "final: %s (UTC%s)\n", 5);
          v25 = (char *)v78;
          sub_404F90();
        }
        goto LABEL_79;
      }
      v25 = (char *)stderr;
      if ( v181 <= 0 )
        goto LABEL_116;
      fwrite(", dst", 1uLL, 5uLL, stderr);
      v67 = v201;
    }
    if ( !v67 )
      goto LABEL_115;
    goto LABEL_114;
  }
  v30 = (unsigned __int8)v195;
  if ( (_BYTE)v195 )
  {
    *(__m128i *)timer = _mm_loadu_si128((const __m128i *)&v190);
    goto LABEL_79;
  }
  if ( ((v198 + v201) | v199 | v197 | v196 | v200) > 1 )
    goto LABEL_78;
LABEL_35:
  v31 = v184;
  if ( v184 < 0 )
  {
    v34 = __OFSUB__(-1900LL, v184);
    HIDWORD(v153) = -1900 - v184;
    if ( -1900 - v184 != -1900 - (_DWORD)v184 )
      v34 = 1;
  }
  else
  {
    if ( v185 == 2 )
    {
      v83 = 2000LL;
      if ( v184 >= 69 )
        v83 = 1900LL;
      v84 = v184 + v83;
      if ( (_BYTE)v30 )
      {
        dcgettext(0LL, "warning: adjusting year value %ld to %ld\n", 5);
        v31 = v84;
        sub_404F90();
      }
      else
      {
        v31 = v84;
      }
    }
    v32 = 0;
    v33 = v31 - 1900;
    if ( v31 >= 0x76C )
    {
      if ( v33 < 0 )
        goto LABEL_149;
    }
    else
    {
      if ( v33 < 0 )
        goto LABEL_39;
LABEL_149:
      v32 = 1;
    }
LABEL_39:
    HIDWORD(v153) = v31 - 1900;
    if ( v33 != (signed int)v33 )
      v32 = 1;
    v34 = v32 & 1;
  }
  if ( v34 )
  {
    if ( (_BYTE)v30 )
    {
      dcgettext(0LL, "error: out-of-range year %ld\n", 5);
      sub_404F90();
    }
    v36 = v203;
LABEL_162:
    v85 = 5;
    v25 = "error: year, month, or day overflow\n";
    if ( !v36 )
      goto LABEL_78;
    goto LABEL_163;
  }
  v35 = __OFADD__(-1LL, v186);
  v25 = (char *)(unsigned int)(v186 - 1);
  LODWORD(v153) = v186 - 1;
  if ( v186 - 1 != (_DWORD)v186 - 1 )
    v35 = 1;
  v36 = v203;
  if ( v35 )
    goto LABEL_162;
  HIDWORD(v152) = v187;
  v37 = v187;
  v139 = v187 != v187;
  if ( v187 != (signed int)v187 )
    goto LABEL_162;
  v38 = v200;
  if ( !v200 )
  {
    if ( !HIBYTE(v195) || v196 )
    {
      v151 = 0LL;
      LODWORD(v152) = 0;
      *((_QWORD *)&v190 + 1) = 0LL;
      if ( v203 )
        goto LABEL_249;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      goto LABEL_205;
    }
    if ( v197 )
    {
      v151 = 0LL;
      LODWORD(v152) = 0;
      *((_QWORD *)&v190 + 1) = 0LL;
      if ( !v203 )
      {
        v39 = 0;
        v40 = 0;
        v41 = 0;
        goto LABEL_53;
      }
LABEL_249:
      sub_404F90();
LABEL_250:
      v38 = v200;
      v40 = HIDWORD(v151);
      v41 = v151;
      v37 = HIDWORD(v152);
      v39 = v152;
      LODWORD(v25) = v153;
      goto LABEL_205;
    }
  }
  v113 = v183;
  v114 = v188;
  if ( v183 )
  {
    if ( v183 != 1 )
    {
      if ( v188 <= 0x17 )
        goto LABEL_201;
      LODWORD(v152) = -1;
LABEL_267:
      if ( v203 )
      {
        dcgettext(0LL, "error: invalid hour %ld%s\n", 5);
        v25 = (char *)v114;
        v30 = 0;
        sub_404F90();
        goto LABEL_79;
      }
      goto LABEL_78;
    }
    v113 = (unsigned int)(v188 + 12);
    if ( v188 - 1 > 0xA )
    {
      if ( v188 != 12 )
      {
        LODWORD(v152) = -1;
        goto LABEL_267;
      }
      LODWORD(v152) = 12;
      v113 = 12LL;
      goto LABEL_203;
    }
  }
  else
  {
    if ( v188 - 1 > 0xA )
    {
      if ( v188 != 12 )
      {
        LODWORD(v152) = -1;
        goto LABEL_267;
      }
      LODWORD(v152) = 0;
      goto LABEL_203;
    }
LABEL_201:
    v113 = (unsigned int)v188;
  }
  LODWORD(v152) = v113;
LABEL_203:
  v40 = v189;
  v41 = v190;
  v151 = __PAIR__(v189, (unsigned int)v190);
  if ( v203 )
  {
    __snprintf_chk(&v170, 100LL, 1LL, 100LL, "%02d:%02d:%02d", v113);
    if ( v200 )
      dcgettext(0LL, "using specified time as starting value: '%s'\n", 5);
    else
      dcgettext(0LL, "using current time as starting value: '%s'\n", 5);
    sub_404F90();
    goto LABEL_250;
  }
  v39 = v152;
LABEL_205:
  if ( v38 | v197 | v196 )
LABEL_53:
    v155 = -1;
  if ( v198 )
  {
    v42 = v181;
    v155 = v181;
  }
  else
  {
    v42 = v155;
  }
  v157 = __PAIR__(v40, v41);
  v159 = __PAIR__(HIDWORD(v153), (unsigned int)v25);
  v158 = __PAIR__(v37, v39);
  v160 = v42;
  LODWORD(v43) = sub_40DED0(v27, &v151);
  v25 = (char *)&v157;
  v44 = v43;
  if ( sub_405050(v27, (__int64)&v157, (__int64)&v151, v43) )
    goto LABEL_301;
  v148 = v201;
  if ( v201 )
  {
    v173 = 88;
    v172 = 22616;
    v25 = &v174;
    sub_404E20(v182, (__int64)&v174);
    v86 = sub_40DB40(&v172);
    v87 = v86;
    if ( !v86 )
    {
      if ( v203 )
      {
        v30 = 0;
        dcgettext(0LL, "error: tzalloc (\"%s\") failed\n", 5);
        v25 = (char *)&v172;
        sub_404F90();
        goto LABEL_79;
      }
      goto LABEL_78;
    }
    v151 = v157;
    v152 = v158;
    v153 = v159;
    v155 = v160;
    LODWORD(v88) = sub_40DED0(v86, &v151);
    v25 = (char *)&v157;
    v44 = v88;
    v89 = sub_405050(v87, (__int64)&v157, (__int64)&v151, v88);
    sub_40DE00(v87, &v157);
    if ( v89 )
    {
LABEL_301:
      if ( !v197 )
        goto LABEL_211;
      if ( v196 )
      {
        if ( !v203 )
          goto LABEL_183;
      }
      else
      {
        v90 = v179;
        if ( v179 > 0 && v154 != v180 )
          v90 = v179 - 1;
        v25 = (char *)(7 * v90);
        if ( !is_mul_ok(7uLL, v90) )
          goto LABEL_302;
        v91 = (v180 - v154 + 7) % 7;
        v92 = &v25[v91];
        if ( __OFADD__(v25, v91) )
          goto LABEL_302;
        v93 = __OFADD__(SHIDWORD(v152), v92);
        v94 = &v92[SHIDWORD(v152)];
        HIDWORD(v152) = (_DWORD)v94;
        v95 = v93;
        if ( v94 != (char *)(signed int)v94 )
          v95 = 1;
        if ( v95 || (v25 = (char *)&v151, v155 = -1, LODWORD(v96) = sub_40DED0(v27, &v151), v44 = v96, v96 == -1) )
        {
LABEL_302:
          if ( v203 )
          {
            sub_405410((__int64)&v151, (__int64)&v178, (__int64)&v170);
            v123 = sub_4054B0((__int64)&v178, (char *)&v172);
            dcgettext(0LL, "error: day '%s' (day ordinal=%ld number=%d) resulted in an invalid date: '%s'\n", 5);
            v25 = v123;
            v30 = 0;
            sub_404F90();
            goto LABEL_79;
          }
          goto LABEL_78;
        }
        if ( !v203 )
        {
LABEL_183:
          v97 = *((_QWORD *)&v191 + 1);
          v98 = v191;
          if ( !((unsigned __int64)v192 | (unsigned __int64)v191 | *((_QWORD *)&v191 + 1)) )
          {
            v99 = 0;
            goto LABEL_185;
          }
LABEL_246:
          v124 = v98 + SHIDWORD(v153);
          v125 = __OFADD__(v98, SHIDWORD(v153));
          if ( v124 != (signed int)v124 || v125 )
            goto LABEL_78;
          v141 = v124;
LABEL_223:
          v119 = v97 + (signed int)v153;
          if ( v119 == (_DWORD)v97 + (_DWORD)v153 && !__OFADD__(v97, (signed int)v153) )
          {
            v120 = v192 + SHIDWORD(v152);
            if ( v120 == (_DWORD)v192 + HIDWORD(v152) && !__OFADD__((_QWORD)v192, SHIDWORD(v152)) )
            {
              v25 = (char *)&v151;
              v153 = __PAIR__(v141, (unsigned int)v119);
              HIDWORD(v152) += v192;
              v151 = v157;
              LODWORD(v152) = v158;
              v155 = v160;
              LODWORD(v121) = sub_40DED0(v27, &v151);
              v44 = v121;
              if ( v121 == -1 )
              {
                if ( v203 )
                {
                  v133 = sub_405410((__int64)&v151, (__int64)&v178, (__int64)&v170);
                  dcgettext(0LL, "error: adding relative date resulted in an invalid date: '%s'\n", 5);
                  v25 = (char *)v133;
                  v30 = 0;
                  sub_404F90();
                  goto LABEL_79;
                }
                goto LABEL_78;
              }
              v99 = v203;
              if ( v203 )
              {
                dcgettext(0LL, "after date adjustment (%+ld years, %+ld months, %+ld days),\n", 5);
                sub_404F90();
                v130 = sub_405410((__int64)&v151, (__int64)&v178, (__int64)&v170);
                dcgettext(0LL, "    new date/time = '%s'\n", 5);
                v25 = (char *)v130;
                sub_404F90();
                if ( v160 != -1 && v160 != v155 )
                {
                  v25 = "warning: daylight saving time changed after date adjustment\n";
                  dcgettext(0LL, "warning: daylight saving time changed after date adjustment\n", 5);
                  sub_404F90();
                }
                if ( !(_QWORD)v192
                  && ((_DWORD)v120 != HIDWORD(v152) || !*((_QWORD *)&v191 + 1) && (_DWORD)v119 != (_DWORD)v153) )
                {
                  dcgettext(0LL, "warning: month/year adjustment resulted in shifted dates:\n", 5);
                  sub_404F90();
                  v131 = (unsigned __int64)sub_404F20(v141, (__int64)&tp) >> 32;
                  dcgettext(0LL, "     adjusted Y M D: %s %02d %02d\n", 5);
                  sub_404F90();
                  v132 = sub_404F20(SHIDWORD(v153), (__int64)&tp);
                  dcgettext(0LL, "   normalized Y M D: %s %02d %02d\n", 5);
                  v25 = (char *)v132;
                  sub_404F90();
                }
                v99 = v203;
                goto LABEL_185;
              }
              if ( v201 )
              {
                v122 = v182 - v156;
                v93 = __OFSUB__(v44, v122);
                v44 -= v122;
                if ( v93 | (unsigned __int64)__OFSUB__(v182, v156) )
                {
                  v30 = 0;
                  goto LABEL_79;
                }
                goto LABEL_187;
              }
              goto LABEL_188;
            }
          }
LABEL_233:
          if ( v203 )
          {
            v30 = 0;
            dcgettext(0LL, "error: %s:%d\n", 5);
            v25 = "parse-datetime.y";
            sub_404F90();
            goto LABEL_79;
          }
          goto LABEL_78;
        }
        sub_405410((__int64)&v151, (__int64)&v178, (__int64)&v170);
        v115 = sub_4054B0((__int64)&v178, (char *)&v172);
        dcgettext(0LL, "new start date: '%s' is '%s'\n", 5);
        v25 = v115;
        sub_404F90();
LABEL_211:
        if ( !v203 )
          goto LABEL_183;
        if ( !v196 )
        {
          v116 = &v170;
          if ( v197
            || (v129 = sub_404F20(SHIDWORD(v153), (__int64)&tp),
                __snprintf_chk(&v170, 100LL, 1LL, 100LL, "(Y-M-D) %s-%02d-%02d", v129),
                dcgettext(0LL, "using current date as starting value: '%s'\n", 5),
                sub_404F90(),
                !v197)
            || !v196 )
          {
LABEL_214:
            sub_405410((__int64)&v151, (__int64)&v178, (__int64)v116);
            dcgettext(0LL, "starting date/time: '%s'\n", 5);
            sub_404F90();
            v98 = v191;
            v97 = *((_QWORD *)&v191 + 1);
            v117 = v192;
            v99 = v203;
            v25 = (char *)(*((_QWORD *)&v191 + 1) | v191);
            if ( (unsigned __int64)v192 | *((_QWORD *)&v191 + 1) | (unsigned __int64)v191 )
            {
              if ( !v203 )
                goto LABEL_246;
              if ( !v25 )
                goto LABEL_303;
              if ( HIDWORD(v152) != 15 )
              {
                v25 = "warning: when adding relative months/years, it is recommended to specify the 15th of the months\n";
                dcgettext(
                  0LL,
                  "warning: when adding relative months/years, it is recommended to specify the 15th of the months\n",
                  5);
                sub_404F90();
                v117 = v192;
              }
              if ( v117 )
              {
LABEL_303:
                if ( (_DWORD)v152 != 12 )
                {
                  v25 = "warning: when adding relative days, it is recommended to specify noon\n";
                  dcgettext(0LL, "warning: when adding relative days, it is recommended to specify noon\n", 5);
                  sub_404F90();
                }
              }
              v118 = v191 + SHIDWORD(v153);
              if ( v118 == (_DWORD)v191 + HIDWORD(v153) && !__OFADD__((_QWORD)v191, SHIDWORD(v153)) )
              {
                v141 = v191 + HIDWORD(v153);
                v97 = *((_QWORD *)&v191 + 1);
                goto LABEL_223;
              }
              goto LABEL_233;
            }
LABEL_185:
            if ( v201 )
            {
              v100 = v182;
              v101 = v182 - v156;
              v93 = __OFSUB__(v44, v101);
              v44 -= v101;
              if ( v93 | (unsigned __int64)__OFSUB__(v182, v156) )
              {
                if ( v99 )
                {
                  v30 = 0;
                  dcgettext(0LL, "error: timezone %d caused time_t overflow\n", 5);
                  v25 = (char *)(unsigned int)v100;
                  sub_404F90();
                  goto LABEL_79;
                }
                goto LABEL_78;
              }
            }
LABEL_187:
            if ( v99 )
            {
              v126 = sub_405410((__int64)&v151, (__int64)&v178, (__int64)&v170);
              dcgettext(0LL, "'%s' = %ld epoch-seconds\n", 5);
              v25 = (char *)v126;
              sub_404F90();
              v127 = 3600LL * *((_QWORD *)&v192 + 1);
              v140 = *((_QWORD *)&v192 + 1);
              if ( is_mul_ok(0xE10uLL, *((unsigned __int64 *)&v192 + 1)) )
              {
                v25 = (char *)(signed int)v194;
                v34 = v203;
                v128 = (signed int)v194 + *((_QWORD *)&v190 + 1);
                v104 = v128
                     - 1000000000
                     * (((signed __int64)((unsigned __int128)(1237940039285380275LL * v128) >> 64) >> 26) - (v128 >> 63))
                     + 1000000000
                     - 1000000000
                     * ((unsigned __int64)(19342813113834067LL
                                         * (unsigned __int128)((unsigned __int64)(v128
                                                                                - 1000000000
                                                                                * (((signed __int64)((unsigned __int128)(1237940039285380275LL * v128) >> 64) >> 26)
                                                                                 - (v128 >> 63))
                                                                                + 1000000000) >> 9) >> 64) >> 11);
                v105 = ((signed __int64)((unsigned __int128)(1237940039285380275LL * (signed __int64)(v128 - v104)) >> 64) >> 26)
                     - ((signed __int64)(v128 - v104) >> 63);
                v93 = __OFADD__(v127, v44);
                v106 = v127 + v44;
                if ( !v93 )
                {
                  v107 = v193;
                  v108 = 60 * v193;
                  if ( is_mul_ok(0x3CuLL, v193) )
                    goto LABEL_191;
                }
              }
              else
              {
                v34 = v203;
              }
            }
            else
            {
LABEL_188:
              v102 = 3600LL * *((_QWORD *)&v192 + 1);
              v140 = *((_QWORD *)&v192 + 1);
              if ( !is_mul_ok(0xE10uLL, *((unsigned __int64 *)&v192 + 1)) )
                goto LABEL_78;
              v25 = (char *)(signed int)v194;
              v103 = (signed int)v194 + *((_QWORD *)&v190 + 1);
              v104 = v103
                   - 1000000000
                   * (((signed __int64)((unsigned __int128)(1237940039285380275LL * v103) >> 64) >> 26) - (v103 >> 63))
                   + 1000000000
                   - 1000000000
                   * ((unsigned __int64)(19342813113834067LL
                                       * (unsigned __int128)((unsigned __int64)(v103
                                                                              - 1000000000
                                                                              * (((signed __int64)((unsigned __int128)(1237940039285380275LL * v103) >> 64) >> 26)
                                                                               - (v103 >> 63))
                                                                              + 1000000000) >> 9) >> 64) >> 11);
              v105 = ((signed __int64)((unsigned __int128)(1237940039285380275LL * (signed __int64)(v103 - v104)) >> 64) >> 26)
                   - ((signed __int64)(v103 - v104) >> 63);
              v93 = __OFADD__(v102, v44);
              v106 = v102 + v44;
              if ( v93 )
                goto LABEL_78;
              v107 = v193;
              v108 = 60 * v193;
              if ( !is_mul_ok(0x3CuLL, v193) )
                goto LABEL_78;
LABEL_191:
              v93 = __OFADD__(v108, v106);
              v109 = v108 + v106;
              if ( !v93 )
              {
                v110 = *((_QWORD *)&v193 + 1);
                v93 = __OFADD__(*((_QWORD *)&v193 + 1), v109);
                v111 = *((_QWORD *)&v193 + 1) + v109;
                if ( !v93 )
                {
                  v93 = __OFADD__(v105, v111);
                  v112 = (char *)(v105 + v111);
                  if ( !v93 )
                  {
                    *timer = (time_t)v112;
                    timer[1] = v104;
                    if ( v34 )
                    {
                      v25 = (char *)(v140 | v107 | v110 | (unsigned __int64)v25);
                      if ( v25 )
                      {
                        dcgettext(0LL, "after time adjustment (%+ld hours, %+ld minutes, %+ld seconds, %+d ns),\n", 5);
                        sub_404F90();
                        dcgettext(0LL, "    new time = %ld epoch-seconds\n", 5);
                        v25 = v112;
                        sub_404F90();
                        if ( v155 != -1 )
                        {
                          v25 = (char *)timer;
                          LODWORD(v134) = sub_40DE20(v27, timer, &tp);
                          if ( v134 )
                          {
                            if ( v155 != tp.tm_isdst )
                            {
                              v25 = "warning: daylight saving time changed after time adjustment\n";
                              dcgettext(0LL, "warning: daylight saving time changed after time adjustment\n", 5);
                              sub_404F90();
                            }
                          }
                        }
                      }
                    }
                    v30 = v203;
                    goto LABEL_118;
                  }
                }
              }
            }
            if ( !v34 )
              goto LABEL_78;
            v85 = 5;
            v25 = "error: adding relative time caused an overflow\n";
LABEL_163:
            v30 = 0;
            dcgettext(0LL, v25, v85);
            sub_404F90();
            goto LABEL_79;
          }
LABEL_237:
          sub_4054B0((__int64)&v178, (char *)&v172);
          dcgettext(0LL, "warning: day (%s) ignored when explicit dates are given\n", 5);
          sub_404F90();
          goto LABEL_214;
        }
        if ( !v197 )
        {
          v116 = &v170;
          goto LABEL_214;
        }
      }
      v116 = &v170;
      goto LABEL_237;
    }
  }
  v45 = v159;
  v46 = v153;
  srca = HIDWORD(v158);
  v143 = HIDWORD(v152);
  v146 = HIDWORD(v159);
  v147 = HIDWORD(v153);
  if ( v157 == v151 )
  {
    if ( HIDWORD(v158) != HIDWORD(v152) || (_DWORD)v158 == (_DWORD)v152 || v159 != v153 )
    {
      if ( !v203 )
        goto LABEL_78;
      dcgettext(0LL, "error: invalid date/time value:\n", 5);
      v47 = &v172;
      sub_404F90();
      sub_405410((__int64)&v157, (__int64)&v178, (__int64)&v172);
      dcgettext(0LL, "    user provided time: '%s'\n", 5);
      sub_404F90();
      sub_405410((__int64)&v151, (__int64)&v178, (__int64)&v172);
      dcgettext(0LL, "       normalized time: '%s'\n", 5);
      sub_404F90();
    }
    else
    {
      if ( !v203 )
        goto LABEL_78;
      dcgettext(0LL, "error: invalid date/time value:\n", 5);
      v47 = &v172;
      sub_404F90();
      sub_405410((__int64)&v157, (__int64)&v178, (__int64)&v172);
      dcgettext(0LL, "    user provided time: '%s'\n", 5);
      sub_404F90();
      sub_405410((__int64)&v151, (__int64)&v178, (__int64)&v172);
      dcgettext(0LL, "       normalized time: '%s'\n", 5);
      sub_404F90();
      v139 = 1;
    }
  }
  else
  {
    if ( !v203 )
      goto LABEL_78;
    dcgettext(0LL, "error: invalid date/time value:\n", 5);
    v47 = &v172;
    sub_404F90();
    sub_405410((__int64)&v157, (__int64)&v178, (__int64)&v172);
    dcgettext(0LL, "    user provided time: '%s'\n", 5);
    sub_404F90();
    sub_405410((__int64)&v151, (__int64)&v178, (__int64)&v172);
    dcgettext(0LL, "       normalized time: '%s'\n", 5);
    sub_404F90();
  }
  v48 = "----";
  if ( v146 == v147 )
    v48 = "";
  __snprintf_chk(v47, 100LL, 1LL, 100LL, "                                 %4s %2s %2s %2s %2s %2s", v48);
  v49 = 51LL;
  v50 = 52LL;
  if ( BYTE3(v177) == 32 )
  {
    do
    {
      v50 = (signed int)v49;
      if ( !(_DWORD)v49 )
        break;
      --v49;
    }
    while ( *((_BYTE *)v47 + v49) == 32 );
  }
  *((_BYTE *)&v172 + v50) = 0;
  sub_404F90();
  dcgettext(0LL, "     possible reasons:\n", 5);
  sub_404F90();
  if ( v139 )
  {
    dcgettext(0LL, "       non-existing due to daylight-saving time;\n", 5);
    sub_404F90();
  }
  if ( srca != v143 && v45 != v46 )
  {
    dcgettext(0LL, "       invalid day/month combination;\n", 5);
    sub_404F90();
  }
  dcgettext(0LL, "       numeric values overflow;\n", 5);
  sub_404F90();
  if ( v148 )
    v51 = dcgettext(0LL, "incorrect timezone", 5);
  else
    v51 = dcgettext(0LL, "missing timezone", 5);
  v25 = v51;
  sub_404F90();
LABEL_78:
  v30 = 0;
LABEL_79:
  if ( v27 != v6 )
    sub_40DE00(v27, v25);
LABEL_81:
  free(ptr);
  return (unsigned int)v30;
}

struct tm *__fastcall sub_409C00(int *a1, __int64 a2, __int64 a3, char a4)
{
  struct tm *result; // rax@4
  int v5; // edx@8
  time_t timer; // [sp+0h] [bp-10h]@5

  if ( a3 == 1 )
  {
    v5 = *(_DWORD *)a2;
    result = (struct tm *)1;
    *a1 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 <= 68 )
    {
      if ( !(a4 & 8) )
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
      if ( a4 & 2 )
      {
        *a1 = *(_DWORD *)(a2 + 4) + 100 * *(_DWORD *)a2 - 1900;
        return (struct tm *)1;
      }
      return 0LL;
    }
    time(&timer);
    result = localtime(&timer);
    if ( result )
    {
      *a1 = result->tm_year;
      result = (struct tm *)1;
    }
  }
  return result;
}

int __fastcall sub_409C90(_QWORD *a1, const char *a2, unsigned int a3)
{
  unsigned int v3; // ebp@1
  const char *v4; // rbx@1
  unsigned __int64 v5; // r13@1
  char *v6; // rax@2
  char *v7; // r14@2
  signed __int64 v8; // rax@3
  int result; // eax@4
  const char *v10; // rax@9
  unsigned __int64 v11; // r13@12
  __int64 v12; // rdx@12
  __int64 v13; // rdx@14
  __int64 *v14; // rsi@15
  int v15; // eax@17
  int v16; // edx@18
  int v17; // eax@19
  __int64 v18; // rax@20
  struct tm *v19; // rdx@20
  _BYTE *v20; // rax@23
  char *v21; // rax@27
  int v22; // edx@27
  __int64 v23; // [sp+0h] [bp-C8h]@20
  char v24; // [sp+8h] [bp-C0h]@23
  char s; // [sp+10h] [bp-B8h]@23
  int v26; // [sp+20h] [bp-A8h]@19
  unsigned int v27; // [sp+24h] [bp-A4h]@15
  unsigned __int64 v28; // [sp+28h] [bp-A0h]@15
  __int64 v29; // [sp+30h] [bp-98h]@15
  char v30[16]; // [sp+50h] [bp-78h]@27
  int v31; // [sp+60h] [bp-68h]@13
  unsigned int v32; // [sp+64h] [bp-64h]@15
  unsigned __int64 v33; // [sp+68h] [bp-60h]@15
  __int64 v34; // [sp+70h] [bp-58h]@15
  int v35; // [sp+80h] [bp-48h]@20

  v3 = a3;
  v4 = a2;
  v5 = strlen(a2);
  if ( v3 & 4 )
  {
    v6 = strchr(a2, 46);
    v7 = v6;
    if ( v6 )
    {
      v8 = v6 - a2;
      if ( v5 - v8 != 3 )
        return 0;
      v5 = v8;
    }
  }
  else
  {
    v7 = 0LL;
  }
  if ( v5 - 8 <= 4 && !(v5 & 1) )
  {
    v10 = a2;
    while ( (unsigned int)(*v10 - 48) <= 9 )
    {
      if ( &a2[v5] == ++v10 )
      {
        v11 = v5 >> 1;
        v12 = 0LL;
        do
        {
          *(&v31 + v12) = a2[2 * v12 + 1] + 2 * (5 * a2[2 * v12] - 240) - 48;
          ++v12;
        }
        while ( v11 != v12 );
        v13 = v11 - 4;
        if ( v3 & 1 )
        {
          v14 = &v34;
          LODWORD(v29) = v31 - 1;
          v27 = HIDWORD(v33);
          v28 = __PAIR__(v32, (unsigned int)v33);
          if ( !(unsigned __int8)sub_409C00((int *)&v29 + 1, (__int64)&v34, v13, v3) )
            return 0;
        }
        else
        {
          if ( !(unsigned __int8)sub_409C00((int *)&v29 + 1, (__int64)&v31, v13, v3) )
            return 0;
          v21 = &v30[4 * v11];
          v14 = (__int64 *)*(_DWORD *)v21;
          LODWORD(v29) = (_DWORD)v14 - 1;
          HIDWORD(v28) = *((_DWORD *)v21 + 1);
          v22 = *((_DWORD *)v21 + 2);
          LODWORD(v21) = *((_DWORD *)v21 + 3);
          LODWORD(v28) = v22;
          v27 = (unsigned int)v21;
        }
        if ( v7 )
        {
          v15 = v7[1] - 48;
          if ( (unsigned int)v15 > 9 )
            return 0;
          v16 = v7[2];
          if ( (unsigned int)(v16 - 48) > 9 )
            return 0;
          v17 = v16 + 10 * v15 - 48;
          v26 = v17;
        }
        else
        {
          v26 = 0;
          v17 = 0;
        }
        v31 = v17;
        v35 = -1;
        v32 = v27;
        v33 = v28;
        v34 = v29;
        LODWORD(v18) = sub_40DA50(&v31, v14);
        v19 = (struct tm *)&v31;
        v23 = v18;
        if ( v18 == -1 )
        {
          v19 = localtime(&v23);
          if ( !v19 )
            return 0;
        }
        if ( !(v26 ^ v19->tm_sec | v19->tm_min ^ v27 | v19->tm_hour ^ (unsigned int)v28 | v19->tm_mday ^ HIDWORD(v28) | v19->tm_mon ^ (unsigned int)v29 | v19->tm_year ^ HIDWORD(v29)) )
          goto LABEL_33;
        if ( v26 != 60 )
          return 0;
        LODWORD(v20) = __stpcpy_chk(&s, v4, 16LL);
        *((_WORD *)v20 - 1) = 14645;
        *v20 = 0;
        result = sub_409C90(&v24, &s, v3);
        if ( (_BYTE)result )
        {
LABEL_33:
          *a1 = v23;
          result = 1;
        }
        return result;
      }
    }
  }
  return 0;
}

char *__fastcall sub_409F40(const char *a1)
{
  signed __int64 v1; // rbx@2
  char *result; // rax@2
  signed __int64 v3; // rdx@3
  bool v4; // cf@3
  bool v5; // zf@3
  char *v6; // rsi@4
  const char *v7; // rdi@4
  signed __int64 v8; // rcx@4
  char v9; // dl@7
  bool v10; // cf@7
  bool v11; // zf@7
  const char *v12; // rdi@8
  signed __int64 v13; // rcx@8
  _BYTE *v14; // rsi@8

  if ( !a1 )
  {
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 1uLL, 0x37uLL, stderr);
    abort();
  }
  v1 = (signed __int64)a1;
  result = strrchr(a1, 47);
  if ( result )
  {
    v3 = result + 1 - a1;
    v4 = (unsigned __int64)v3 < 6;
    v5 = v3 == 6;
    if ( v3 > 6 )
    {
      v6 = result - 6;
      v7 = "/.libs/";
      v8 = 7LL;
      do
      {
        if ( !v8 )
          break;
        v4 = (unsigned __int8)*v6 < *v7;
        v5 = *v6++ == *v7++;
        --v8;
      }
      while ( v5 );
      v9 = (!v4 && !v5) - v4;
      v10 = 0;
      v11 = v9 == 0;
      if ( !v9 )
      {
        v12 = "lt-";
        v13 = 3LL;
        v14 = result + 1;
        v1 = (signed __int64)(result + 1);
        do
        {
          if ( !v13 )
            break;
          v10 = *v14 < (const unsigned __int8)*v12;
          v11 = *v14++ == *v12++;
          --v13;
        }
        while ( v11 );
        if ( (!v10 && !v11) == v10 )
        {
          v1 = (signed __int64)(result + 4);
          program_invocation_short_name = (__int64)(result + 4);
        }
      }
    }
  }
  qword_61B350 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_409FE0(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_40E190(0LL);
  if ( (*(_BYTE *)v4 & 0xDF) == 85 )
  {
    if ( (*(_BYTE *)(v4 + 1) & 0xDF) == 84
      && (*(_BYTE *)(v4 + 2) & 0xDF) == 70
      && *(_BYTE *)(v4 + 3) == 45
      && *(_BYTE *)(v4 + 4) == 56
      && !*(_BYTE *)(v4 + 5) )
    {
      v5 = *v2 == 96;
      v2 = "â€˜";
      if ( !v5 )
        v2 = "â€™";
      return (char *)v2;
    }
  }
  else if ( (*(_BYTE *)v4 & 0xDF) == 71
         && (*(_BYTE *)(v4 + 1) & 0xDF) == 66
         && *(_BYTE *)(v4 + 2) == 49
         && *(_BYTE *)(v4 + 3) == 56
         && *(_BYTE *)(v4 + 4) == 48
         && *(_BYTE *)(v4 + 5) == 51
         && *(_BYTE *)(v4 + 6) == 48
         && !*(_BYTE *)(v4 + 7) )
  {
    v5 = *v2 == 96;
    v2 = "¡\ae";
    if ( !v5 )
      v2 = "¡¯";
    return (char *)v2;
  }
  v6 = "TZ=\"" + 3;
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_40A0E0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
{
  _BYTE *v9; // r15@1
  unsigned __int64 v10; // r14@1
  int v11; // er13@1
  int v12; // ebp@1
  unsigned __int64 v13; // rdx@1
  unsigned __int64 v14; // r11@1
  int v15; // er10@2
  unsigned __int64 v16; // rbx@2
  unsigned __int64 v17; // r9@3
  __int64 v18; // r12@3
  int v19; // er11@3
  char *v20; // r8@7
  int v21; // ST60_4@11
  unsigned __int8 v22; // ST58_1@11
  size_t v23; // rax@11
  int v24; // ST68_4@13
  unsigned __int64 v25; // ST60_8@13
  unsigned __int8 v26; // ST58_1@13
  int v27; // eax@13
  unsigned __int64 v28; // rbp@15
  bool v29; // al@17
  int v30; // eax@23
  int v31; // eax@29
  char v32; // di@42
  const unsigned __int16 **v33; // rax@50
  char v34; // cl@65
  unsigned __int64 result; // rax@71
  signed __int64 v36; // rcx@90
  int v37; // ST60_4@99
  unsigned __int64 v38; // ST58_8@99
  unsigned __int8 v39; // ST50_1@99
  unsigned __int64 v40; // rdi@99
  unsigned __int8 v41; // al@122
  unsigned __int8 v42; // al@124
  int v43; // er13@131
  bool v44; // dl@131
  bool v45; // dl@133
  bool v46; // al@136
  int v47; // ST60_4@146
  char v48; // ST58_1@146
  char *v49; // ST50_8@146
  size_t v50; // rax@146
  const unsigned __int16 **v51; // rbx@147
  char *v52; // r15@151
  const unsigned __int16 **v53; // r14@151
  char *v54; // rax@157
  int v55; // esi@173
  unsigned __int64 v56; // rcx@173
  unsigned __int8 v57; // di@173
  char *v58; // rax@218
  unsigned __int64 v59; // ST30_8@220
  size_t v60; // rax@220
  signed __int64 v61; // rsi@246
  char *v62; // rsi@258
  char *v63; // rcx@258
  char i; // al@265
  char v65; // dl@276
  char *v66; // rax@277
  unsigned __int64 v67; // [sp+8h] [bp-C0h]@1
  char v68; // [sp+8h] [bp-C0h]@2
  unsigned __int8 v69; // [sp+10h] [bp-B8h]@7
  char v70; // [sp+1Fh] [bp-A9h]@2
  char *s; // [sp+20h] [bp-A8h]@1
  unsigned __int64 n; // [sp+28h] [bp-A0h]@2
  char *v73; // [sp+30h] [bp-98h]@13
  unsigned __int64 v74; // [sp+30h] [bp-98h]@147
  int v75; // [sp+38h] [bp-90h]@147
  _BYTE *v76; // [sp+40h] [bp-88h]@147
  unsigned __int64 v77; // [sp+48h] [bp-80h]@147
  char *s2; // [sp+50h] [bp-78h]@2
  __int64 v79; // [sp+58h] [bp-70h]@2
  size_t v80; // [sp+60h] [bp-68h]@1
  char v81; // [sp+68h] [bp-60h]@1
  bool v82; // [sp+6Ch] [bp-5Ch]@1
  char v83; // [sp+6Dh] [bp-5Bh]@2
  unsigned __int8 v84; // [sp+6Eh] [bp-5Ah]@147
  unsigned __int64 v85; // [sp+70h] [bp-58h]@147
  char *v86; // [sp+78h] [bp-50h]@147
  wint_t wc; // [sp+84h] [bp-44h]@148
  mbstate_t ps; // [sp+88h] [bp-40h]@145

  v9 = a1;
  v10 = a2;
  v11 = a5;
  s = a3;
  v67 = a4;
  v81 = a6;
  v12 = a6 & 2;
  v80 = __ctype_get_mb_cur_max();
  v82 = v12 != 0;
  v14 = v67;
  switch ( v11 )
  {
    case 1:
      goto LABEL_2;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v11 = 2;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v68 = 1;
      goto LABEL_211;
    case 5:
      if ( v12 )
      {
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 1;
        n = 1LL;
        s2 = "TZ=\"" + 3;
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v15 = 0;
          v70 = 1;
          v83 = 0;
          v79 = 0LL;
        }
        else
        {
          v79 = 0LL;
          v15 = 0;
          v70 = 1;
          v83 = 0;
        }
        v82 = 0;
        v16 = 1LL;
        v68 = 1;
        n = 1LL;
        s2 = "TZ=\"" + 3;
      }
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_409FE0("`", v11);
        v58 = sub_409FE0("'", v11);
        v14 = v67;
        a9 = v58;
      }
      v16 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v16] )
        {
          if ( a2 > v16 )
            a1[v16] = i;
          ++v16;
        }
      }
      v59 = v14;
      v60 = strlen(a9);
      v70 = 1;
      v15 = 0;
      v14 = v59;
      n = v60;
      v83 = 0;
      s2 = a9;
      v79 = 0LL;
      v68 = 1;
      goto LABEL_3;
    case 0:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v68 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 6:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 5;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v68 = 1;
      n = 1LL;
      s2 = "TZ=\"" + 3;
      goto LABEL_3;
    case 7:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v68 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 3:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 2;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v68 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 2:
      if ( v12 )
      {
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 0;
        n = 1LL;
        s2 = "'";
      }
      else
      {
        v68 = 0;
LABEL_211:
        if ( a2 )
        {
          v15 = 0;
          v46 = 0;
          v70 = 1;
          v79 = 0LL;
          goto LABEL_138;
        }
        v70 = 1;
        v15 = 0;
        v16 = 1LL;
        v11 = 2;
        v79 = 0LL;
        v83 = 0;
        v82 = 0;
        n = 1LL;
        s2 = "'";
      }
LABEL_3:
      v17 = v14;
      v18 = 0LL;
      v19 = v11;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(v11) = v17 != v18;
        if ( v17 == -1LL )
          LOBYTE(v11) = s[v18] != 0;
        if ( !(_BYTE)v11 )
        {
          v43 = v19;
          v14 = v17;
          v44 = v43 == 2;
          if ( !v16 && v44 && v82 )
            return sub_40A0E0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_40A0E0((__int64)v9, v79, s);
              v46 = v79 != 0 && v10 == 0;
              if ( v46 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
                n = 1LL;
                v82 = 0;
                v83 = v46;
                goto LABEL_3;
              }
              v45 = v83;
            }
          }
          else
          {
            v45 = !v82;
          }
          if ( s2 )
          {
            if ( v45 )
            {
              v65 = *s2;
              if ( *s2 )
              {
                v66 = &s2[-v16];
                do
                {
                  if ( v10 > v16 )
                    v9[v16] = v65;
                  v65 = v66[++v16];
                }
                while ( v65 );
              }
            }
          }
          if ( v10 > v16 )
            v9[v16] = 0;
          return v16;
        }
        v20 = &s[v18];
        v69 = v68 & (v19 != 2);
        if ( !((unsigned __int8)v68 & (v19 != 2)) )
          break;
        if ( n )
        {
          if ( v17 == -1LL && n > 1 )
          {
            v21 = v19;
            v22 = v15;
            v23 = strlen(s);
            v19 = v21;
            v15 = v22;
            v20 = &s[v18];
            v17 = v23;
          }
          if ( v18 + n <= v17 )
          {
            v24 = v19;
            v25 = v17;
            v26 = v15;
            v73 = v20;
            v27 = memcmp(v20, s2, n);
            v20 = v73;
            v15 = v26;
            v17 = v25;
            v19 = v24;
            if ( !v27 )
            {
              if ( v82 )
                return sub_40A0E0((__int64)v9, v10, s);
              LOBYTE(v28) = *v73;
              switch ( *v73 )
              {
                case 123:
                case 125:
                  goto LABEL_17;
                case 63:
                  goto LABEL_58;
                case 39:
                  goto LABEL_62;
                case 92:
                  goto LABEL_65;
                case 10:
                  goto LABEL_68;
                case 9:
                  goto LABEL_72;
                case 33:
                case 34:
                case 36:
                case 38:
                case 40:
                case 41:
                case 42:
                case 59:
                case 60:
                case 61:
                case 62:
                case 91:
                case 94:
                case 96:
                case 124:
                  goto LABEL_74;
                case 13:
                  goto LABEL_76;
                case 12:
                  goto LABEL_77;
                case 11:
                  goto LABEL_80;
                case 0:
                  goto LABEL_83;
                default:
                  goto LABEL_98;
                case 37:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                case 48:
                case 49:
                case 50:
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                case 56:
                case 57:
                case 58:
                case 65:
                case 66:
                case 67:
                case 68:
                case 69:
                case 70:
                case 71:
                case 72:
                case 73:
                case 74:
                case 75:
                case 76:
                case 77:
                case 78:
                case 79:
                case 80:
                case 81:
                case 82:
                case 83:
                case 84:
                case 85:
                case 86:
                case 87:
                case 88:
                case 89:
                case 90:
                case 93:
                case 95:
                case 97:
                case 98:
                case 99:
                case 100:
                case 101:
                case 102:
                case 103:
                case 104:
                case 105:
                case 106:
                case 107:
                case 108:
                case 109:
                case 110:
                case 111:
                case 112:
                case 113:
                case 114:
                case 115:
                case 116:
                case 117:
                case 118:
                case 119:
                case 120:
                case 121:
                case 122:
                  v41 = v69;
                  goto LABEL_123;
                case 35:
                case 126:
                  v42 = v69;
                  goto LABEL_125;
                case 32:
                  v41 = v69;
                  goto LABEL_128;
                case 8:
                  LODWORD(v13) = 0;
                  v11 = 0;
                  LOBYTE(v28) = 98;
                  goto LABEL_29;
                case 7:
                  LOBYTE(v28) = 97;
                  break;
              }
LABEL_79:
              v11 = 0;
              goto LABEL_37;
            }
          }
        }
        LOBYTE(v28) = *v20;
        switch ( *v20 )
        {
          case 123:
          case 125:
            v69 = 0;
            goto LABEL_17;
          case 63:
            v69 = 0;
            goto LABEL_58;
          case 39:
            v69 = 0;
            goto LABEL_62;
          case 92:
            v69 = 0;
            goto LABEL_65;
          case 10:
LABEL_68:
            LOBYTE(v28) = 110;
            goto LABEL_69;
          case 9:
LABEL_72:
            LOBYTE(v28) = 116;
            goto LABEL_69;
          case 33:
          case 34:
          case 36:
          case 38:
          case 40:
          case 41:
          case 42:
          case 59:
          case 60:
          case 61:
          case 62:
          case 91:
          case 94:
          case 96:
          case 124:
            v69 = 0;
LABEL_74:
            LODWORD(v13) = 0;
            goto LABEL_67;
          case 13:
            v69 = 0;
LABEL_76:
            LOBYTE(v28) = 13;
            v34 = 114;
            LOBYTE(v13) = v19 == 2;
            goto LABEL_66;
          case 12:
LABEL_77:
            LOBYTE(v28) = 102;
            goto LABEL_78;
          case 11:
LABEL_80:
            LOBYTE(v28) = 118;
            goto LABEL_78;
          case 0:
            goto LABEL_81;
          default:
            v69 = 0;
            goto LABEL_98;
          case 37:
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
          case 58:
          case 65:
          case 66:
          case 67:
          case 68:
          case 69:
          case 70:
          case 71:
          case 72:
          case 73:
          case 74:
          case 75:
          case 76:
          case 77:
          case 78:
          case 79:
          case 80:
          case 81:
          case 82:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
          case 90:
          case 93:
          case 95:
          case 97:
          case 98:
          case 99:
          case 100:
          case 101:
          case 102:
          case 103:
          case 104:
          case 105:
          case 106:
          case 107:
          case 108:
          case 109:
          case 110:
          case 111:
          case 112:
          case 113:
          case 114:
          case 115:
          case 116:
          case 117:
          case 118:
          case 119:
          case 120:
          case 121:
          case 122:
            v41 = 0;
            goto LABEL_123;
          case 35:
          case 126:
            v42 = 0;
LABEL_125:
            if ( !v18 )
            {
              v11 = v69;
              LODWORD(v13) = 0;
              v69 = v42;
              goto LABEL_23;
            }
            v69 = v42;
            v11 = 0;
            break;
          case 32:
            v41 = 0;
LABEL_128:
            LOBYTE(v28) = 32;
LABEL_123:
            v11 = v69;
            v69 = v41;
            v30 = 0;
            goto LABEL_25;
          case 8:
            LOBYTE(v28) = 98;
LABEL_69:
            LODWORD(v13) = 0;
            v11 = 0;
            if ( v82 )
              return sub_40A0E0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_40A0E0((__int64)v9, v10, s);
        }
LABEL_24:
        v30 = 0;
LABEL_25:
        if ( a7 )
        {
          LODWORD(v13) = (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v28 >> 5)) >> v28) & 1;
          if ( (_DWORD)v13 )
          {
            LOBYTE(v13) = v19 == 2;
LABEL_28:
            if ( v82 )
              return sub_40A0E0((__int64)v9, v10, s);
LABEL_29:
            v31 = v15 ^ 1;
            LOBYTE(v31) = v13 & (v15 ^ 1);
            if ( (unsigned __int8)v13 & (unsigned __int8)(v15 ^ 1) )
            {
              if ( v10 > v16 )
                v9[v16] = 39;
              if ( v16 + 1 < v10 )
                v9[v16 + 1] = 36;
              LODWORD(v13) = v16 + 2;
              if ( v16 + 2 < v10 )
                v9[v16 + 2] = 39;
              v16 += 3LL;
              v15 = v31;
            }
LABEL_37:
            if ( v10 > v16 )
              v9[v16] = 92;
            ++v16;
            ++v18;
            goto LABEL_40;
          }
        }
LABEL_49:
        LOBYTE(v13) = v19 == 2;
        if ( v69 )
          goto LABEL_28;
        ++v18;
        LODWORD(v33) = v15 & (v30 ^ 1);
LABEL_51:
        if ( (_BYTE)v33 )
        {
          if ( v10 > v16 )
            v9[v16] = 39;
          if ( v10 > v16 + 1 )
            v9[v16 + 1] = 39;
          v16 += 2LL;
          v15 = 0;
        }
LABEL_40:
        if ( v16 < v10 )
          v9[v16] = v28;
        v32 = v70;
        ++v16;
        if ( !(_BYTE)v11 )
          v32 = 0;
        v70 = v32;
      }
      LOBYTE(v28) = *v20;
      switch ( *v20 )
      {
        case 123:
        case 125:
LABEL_17:
          v29 = v17 != 1;
          if ( v17 == -1LL )
            v29 = s[1] != 0;
          LOBYTE(v13) = v19 == 2;
          if ( !v29 )
            goto LABEL_20;
          goto LABEL_67;
        case 63:
LABEL_58:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_40A0E0((__int64)v9, v10, s);
            v11 = 0;
            v30 = 0;
            LOBYTE(v28) = 63;
            goto LABEL_49;
          }
          if ( v19 != 5 )
          {
            LOBYTE(v28) = 63;
            LOBYTE(v13) = v19 == 2;
            v11 = 0;
            goto LABEL_23;
          }
          if ( !(v81 & 4)
            || v18 + 2 >= v17
            || s[v18 + 1] != 63
            || (v28 = (unsigned __int8)s[v18 + 2], (unsigned __int8)v28 > 0x3Eu)
            || (v61 = 8070630310989004800LL, !_bittest64(&v61, v28)) )
          {
            LODWORD(v13) = 0;
            v11 = 0;
            LOBYTE(v28) = 63;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_40A0E0((__int64)v9, v10, s);
          if ( v10 > v16 )
            v9[v16] = 63;
          if ( v10 > v16 + 1 )
            v9[v16 + 1] = 34;
          if ( v10 > v16 + 2 )
            v9[v16 + 2] = 34;
          if ( v10 > v16 + 3 )
            v9[v16 + 3] = 63;
          v16 += 4LL;
          LODWORD(v13) = 0;
          v11 = 0;
          v18 += 2LL;
          goto LABEL_95;
        case 39:
LABEL_62:
          if ( v19 != 2 )
          {
            v83 = v11;
            LODWORD(v13) = 0;
            LOBYTE(v28) = 39;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_40A0E0((__int64)v9, v10, s);
          if ( !v10 || (v13 = 0LL, v79) )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 92;
            if ( v10 <= v16 + 2 )
            {
              v13 = v10;
              v10 = v79;
            }
            else
            {
              v13 = v10;
              v9[v16 + 2] = 39;
              v10 = v79;
            }
          }
          v83 = v11;
          v16 += 3LL;
          v30 = 0;
          v15 = 0;
          v79 = v10;
          LOBYTE(v28) = 39;
          v10 = v13;
          goto LABEL_49;
        default:
LABEL_98:
          if ( v80 == 1 )
          {
            v37 = v19;
            v38 = v17;
            v39 = v15;
            v33 = __ctype_b_loc();
            LODWORD(v13) = (unsigned __int8)v28;
            v15 = v39;
            v17 = v38;
            v19 = v37;
            v40 = 1LL;
            LODWORD(v33) = (*v33)[(unsigned __int8)v28];
            LOWORD(v33) = (unsigned __int16)v33 & 0x4000;
            LOBYTE(v11) = (_WORD)v33 != 0;
            LOBYTE(v13) = v68 & ((_WORD)v33 == 0);
            goto LABEL_100;
          }
          ps = 0LL;
          if ( v17 == -1LL )
          {
            v47 = v19;
            v48 = v15;
            v49 = v20;
            v50 = strlen(s);
            v19 = v47;
            LOBYTE(v15) = v48;
            v20 = v49;
            v17 = v50;
          }
          v85 = v16;
          v86 = v20;
          v51 = 0LL;
          v84 = v15;
          v76 = v9;
          v77 = v10;
          v74 = v17;
          v75 = v19;
          break;
        case 37:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 93:
        case 95:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
        case 112:
        case 113:
        case 114:
        case 115:
        case 116:
        case 117:
        case 118:
        case 119:
        case 120:
        case 121:
        case 122:
          goto LABEL_101;
        case 10:
          LOBYTE(v28) = 10;
          v34 = 110;
          goto LABEL_104;
        case 9:
          LOBYTE(v28) = 9;
          v34 = 116;
          goto LABEL_104;
        case 8:
          LOBYTE(v28) = 8;
          v34 = 98;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 7:
          LOBYTE(v28) = 7;
          v34 = 97;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 0:
          if ( !v68 )
          {
            if ( !(v81 & 1) )
            {
              v69 = 0;
              LOBYTE(v13) = v19 == 2;
              v11 = 0;
              LOBYTE(v28) = 0;
              goto LABEL_23;
            }
            ++v18;
            goto LABEL_4;
          }
LABEL_81:
          if ( v82 )
            return sub_40A0E0((__int64)v9, v10, s);
          v69 = 0;
LABEL_83:
          LOBYTE(v13) = v19 == 2;
          v30 = v15 ^ 1;
          LOBYTE(v30) = (v19 == 2) & (v15 ^ 1);
          if ( (_BYTE)v30 )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 36;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v36 = v16 + 3;
            if ( v10 <= v16 + 3 )
            {
              v16 += 4LL;
              v15 = v30;
              v11 = 0;
              LOBYTE(v28) = 48;
              goto LABEL_49;
            }
            goto LABEL_91;
          }
          v36 = v16;
          if ( v10 > v16 )
          {
            v30 = v15;
LABEL_91:
            v9[v36] = 92;
            v15 = v30;
          }
          v16 = v36 + 1;
          if ( v19 == 2 )
          {
            v30 = v11;
            LOBYTE(v28) = 48;
            v11 = 0;
            goto LABEL_49;
          }
          LOBYTE(v28) = 48;
          if ( v18 + 1 < v17 && (unsigned __int8)(s[v18 + 1] - 48) <= 9u )
          {
            if ( v10 > v16 )
              v9[v16] = 48;
            if ( v10 > v36 + 2 )
              v9[v36 + 2] = 48;
            v16 = v36 + 3;
            LOBYTE(v28) = 48;
          }
LABEL_95:
          v30 = v11;
          v11 = 0;
          if ( (unsigned __int8)v13 | (unsigned __int8)(v68 ^ 1) )
            goto LABEL_49;
          goto LABEL_25;
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_40A0E0((__int64)v9, v10, s);
            ++v18;
            LOBYTE(v33) = v15;
            v11 = 0;
            LOBYTE(v28) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LODWORD(v13) = (unsigned __int8)v68;
          LOBYTE(v28) = 92;
          v34 = 92;
          LOBYTE(v13) = (n != 0) & v82 & v68;
          if ( (_BYTE)v13 )
          {
            ++v18;
            LOBYTE(v33) = v15;
            v11 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v68 )
          {
LABEL_67:
            v11 = 0;
            goto LABEL_23;
          }
          LOBYTE(v28) = v34;
          v11 = 0;
          goto LABEL_28;
        case 35:
        case 126:
          LOBYTE(v13) = v19 == 2;
LABEL_20:
          if ( !v18 )
            goto LABEL_21;
          goto LABEL_67;
        case 33:
        case 34:
        case 36:
        case 38:
        case 40:
        case 41:
        case 42:
        case 59:
        case 60:
        case 61:
        case 62:
        case 91:
        case 94:
        case 96:
        case 124:
          LOBYTE(v13) = v19 == 2;
          v11 = 0;
          goto LABEL_21;
        case 32:
          LOBYTE(v28) = 32;
          LOBYTE(v13) = v19 == 2;
LABEL_21:
          if ( !v82 || !(_BYTE)v13 )
            goto LABEL_23;
          return sub_40A0E0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_40A0E0((__int64)v9, v10, s);
          goto LABEL_66;
        case 12:
          LOBYTE(v28) = 12;
          v34 = 102;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 11:
          LOBYTE(v28) = 11;
          v34 = 118;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
      }
      while ( 2 )
      {
        v52 = (char *)v51 + v18;
        v33 = (const unsigned __int16 **)sub_40D310((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
        v53 = v33;
        if ( !v33 )
        {
LABEL_240:
          v40 = (unsigned __int64)v51;
          v16 = v85;
          v15 = v84;
          v9 = v76;
          LODWORD(v13) = v11 ^ 1;
          v10 = v77;
          v17 = v74;
          v19 = v75;
          LOBYTE(v13) = v68 & (v11 ^ 1);
          goto LABEL_241;
        }
        if ( v33 == (const unsigned __int16 **)-1 )
        {
          v40 = (unsigned __int64)v51;
          v16 = v85;
          v11 = 0;
          v15 = v84;
          v9 = v76;
          v10 = v77;
          v17 = v74;
          v19 = v75;
          LODWORD(v13) = (unsigned __int8)v68;
          goto LABEL_241;
        }
        if ( v33 == (const unsigned __int16 **)-2 )
        {
          v17 = v74;
          v62 = (char *)v51 + v18;
          v63 = (char *)v51 + v18 + (_QWORD)s;
          v33 = v51;
          v40 = (unsigned __int64)v51;
          v15 = v84;
          v16 = v85;
          v9 = v76;
          v10 = v77;
          v19 = v75;
          if ( (unsigned __int64)v62 < v74 && *v63 )
          {
            do
              v33 = (const unsigned __int16 **)((char *)v33 + 1);
            while ( (unsigned __int64)v33 + v18 < v74 && *((_BYTE *)v33 + (_QWORD)v86) );
            v40 = (unsigned __int64)v33;
          }
          LODWORD(v13) = (unsigned __int8)v68;
          v11 = 0;
LABEL_241:
          if ( v40 > 1 )
            goto LABEL_173;
LABEL_100:
          if ( (_BYTE)v13 )
          {
            LODWORD(v13) = (unsigned __int8)v68;
            LOBYTE(v11) = 0;
LABEL_173:
            v55 = 0;
            v56 = v18 + v40;
            v57 = v69;
            while ( 1 )
            {
              if ( (_BYTE)v13 )
              {
                if ( v82 )
                  return sub_40A0E0((__int64)v9, v10, s);
                LOBYTE(v33) = (v15 ^ 1) & (v19 == 2);
                if ( (_BYTE)v33 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 36;
                  if ( v10 > v16 + 2 )
                    v9[v16 + 2] = 39;
                  v16 += 3LL;
                  v15 = (signed int)v33;
                }
                if ( v10 > v16 )
                  v9[v16] = 92;
                if ( v10 > v16 + 1 )
                  v9[v16 + 1] = ((unsigned __int8)v28 >> 6) + 48;
                LODWORD(v33) = v16 + 2;
                if ( v10 > v16 + 2 )
                {
                  LODWORD(v33) = (((unsigned __int8)v28 >> 3) & 7) + 48;
                  v9[v16 + 2] = (_BYTE)v33;
                }
                ++v18;
                v16 += 3LL;
                LOBYTE(v28) = (v28 & 7) + 48;
                if ( v18 >= v56 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_40;
                }
                v55 = v13;
              }
              else
              {
                LODWORD(v33) = v15 & (v55 ^ 1);
                if ( v57 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 92;
                  ++v16;
                }
                if ( ++v18 >= v56 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_51;
                }
                if ( (_BYTE)v33 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  LODWORD(v33) = v16 + 1;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 39;
                  v16 += 2LL;
                  v57 = 0;
                  v15 = 0;
                }
                else
                {
                  v57 = 0;
                }
              }
              if ( v10 > v16 )
                v9[v16] = v28;
              LOBYTE(v28) = s[v18];
              ++v16;
            }
          }
LABEL_101:
          LOBYTE(v13) = v19 == 2;
LABEL_23:
          v30 = (v13 | (unsigned __int8)v68 ^ 1) ^ 1;
          LOBYTE(v30) = v82 | (v13 | v68 ^ 1) ^ 1;
          if ( !(v82 | (unsigned __int8)((v13 | v68 ^ 1) ^ 1)) )
            goto LABEL_49;
          goto LABEL_24;
        }
        if ( v75 != 2 || !v82 || v33 == (const unsigned __int16 **)1 )
        {
LABEL_148:
          if ( !iswprint(wc) )
            v11 = 0;
          v51 = (const unsigned __int16 **)((char *)v51 + (_QWORD)v53);
          LODWORD(v33) = mbsinit(&ps);
          if ( (_DWORD)v33 )
            goto LABEL_240;
          continue;
        }
        break;
      }
      v54 = &v52[(_QWORD)s + 1];
      while ( (unsigned __int8)(*v54 - 91) > 0x21u || !((1LL << (*v54 - 91)) & 0x20000002BLL) )
      {
        if ( &v52[(unsigned int)&s[(_QWORD)v53]] == ++v54 )
          goto LABEL_148;
      }
      v9 = v76;
      v10 = v77;
      return sub_40A0E0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_40A0E0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
{
  _BYTE *v9; // r15@1
  unsigned __int64 v10; // r14@1
  int v11; // er13@1
  int v12; // ebp@1
  unsigned __int64 v13; // rdx@1
  unsigned __int64 v14; // r11@1
  int v15; // er10@2
  unsigned __int64 v16; // rbx@2
  unsigned __int64 v17; // r9@3
  __int64 v18; // r12@3
  int v19; // er11@3
  char *v20; // r8@7
  int v21; // ST60_4@11
  unsigned __int8 v22; // ST58_1@11
  size_t v23; // rax@11
  int v24; // ST68_4@13
  unsigned __int64 v25; // ST60_8@13
  unsigned __int8 v26; // ST58_1@13
  int v27; // eax@13
  unsigned __int64 v28; // rbp@15
  bool v29; // al@17
  int v30; // eax@23
  int v31; // eax@29
  char v32; // di@42
  const unsigned __int16 **v33; // rax@50
  char v34; // cl@65
  unsigned __int64 result; // rax@71
  signed __int64 v36; // rcx@90
  int v37; // ST60_4@99
  unsigned __int64 v38; // ST58_8@99
  unsigned __int8 v39; // ST50_1@99
  unsigned __int64 v40; // rdi@99
  unsigned __int8 v41; // al@122
  unsigned __int8 v42; // al@124
  int v43; // er13@131
  bool v44; // dl@131
  bool v45; // dl@133
  bool v46; // al@136
  int v47; // ST60_4@146
  char v48; // ST58_1@146
  char *v49; // ST50_8@146
  size_t v50; // rax@146
  const unsigned __int16 **v51; // rbx@147
  char *v52; // r15@151
  const unsigned __int16 **v53; // r14@151
  char *v54; // rax@157
  int v55; // esi@173
  unsigned __int64 v56; // rcx@173
  unsigned __int8 v57; // di@173
  char *v58; // rax@218
  unsigned __int64 v59; // ST30_8@220
  size_t v60; // rax@220
  signed __int64 v61; // rsi@246
  char *v62; // rsi@258
  char *v63; // rcx@258
  char i; // al@265
  char v65; // dl@276
  char *v66; // rax@277
  unsigned __int64 v67; // [sp+8h] [bp-C0h]@1
  char v68; // [sp+8h] [bp-C0h]@2
  unsigned __int8 v69; // [sp+10h] [bp-B8h]@7
  char v70; // [sp+1Fh] [bp-A9h]@2
  char *s; // [sp+20h] [bp-A8h]@1
  unsigned __int64 n; // [sp+28h] [bp-A0h]@2
  char *v73; // [sp+30h] [bp-98h]@13
  unsigned __int64 v74; // [sp+30h] [bp-98h]@147
  int v75; // [sp+38h] [bp-90h]@147
  _BYTE *v76; // [sp+40h] [bp-88h]@147
  unsigned __int64 v77; // [sp+48h] [bp-80h]@147
  char *s2; // [sp+50h] [bp-78h]@2
  __int64 v79; // [sp+58h] [bp-70h]@2
  size_t v80; // [sp+60h] [bp-68h]@1
  char v81; // [sp+68h] [bp-60h]@1
  bool v82; // [sp+6Ch] [bp-5Ch]@1
  char v83; // [sp+6Dh] [bp-5Bh]@2
  unsigned __int8 v84; // [sp+6Eh] [bp-5Ah]@147
  unsigned __int64 v85; // [sp+70h] [bp-58h]@147
  char *v86; // [sp+78h] [bp-50h]@147
  wint_t wc; // [sp+84h] [bp-44h]@148
  mbstate_t ps; // [sp+88h] [bp-40h]@145

  v9 = a1;
  v10 = a2;
  v11 = a5;
  s = a3;
  v67 = a4;
  v81 = a6;
  v12 = a6 & 2;
  v80 = __ctype_get_mb_cur_max();
  v82 = v12 != 0;
  v14 = v67;
  switch ( v11 )
  {
    case 1:
      goto LABEL_2;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v11 = 2;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v68 = 1;
      goto LABEL_211;
    case 5:
      if ( v12 )
      {
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 1;
        n = 1LL;
        s2 = "TZ=\"" + 3;
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v15 = 0;
          v70 = 1;
          v83 = 0;
          v79 = 0LL;
        }
        else
        {
          v79 = 0LL;
          v15 = 0;
          v70 = 1;
          v83 = 0;
        }
        v82 = 0;
        v16 = 1LL;
        v68 = 1;
        n = 1LL;
        s2 = "TZ=\"" + 3;
      }
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_409FE0("`", v11);
        v58 = sub_409FE0("'", v11);
        v14 = v67;
        a9 = v58;
      }
      v16 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v16] )
        {
          if ( a2 > v16 )
            a1[v16] = i;
          ++v16;
        }
      }
      v59 = v14;
      v60 = strlen(a9);
      v70 = 1;
      v15 = 0;
      v14 = v59;
      n = v60;
      v83 = 0;
      s2 = a9;
      v79 = 0LL;
      v68 = 1;
      goto LABEL_3;
    case 0:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v68 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 6:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 5;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v68 = 1;
      n = 1LL;
      s2 = "TZ=\"" + 3;
      goto LABEL_3;
    case 7:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v68 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 3:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 2;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v68 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 2:
      if ( v12 )
      {
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 0;
        n = 1LL;
        s2 = "'";
      }
      else
      {
        v68 = 0;
LABEL_211:
        if ( a2 )
        {
          v15 = 0;
          v46 = 0;
          v70 = 1;
          v79 = 0LL;
          goto LABEL_138;
        }
        v70 = 1;
        v15 = 0;
        v16 = 1LL;
        v11 = 2;
        v79 = 0LL;
        v83 = 0;
        v82 = 0;
        n = 1LL;
        s2 = "'";
      }
LABEL_3:
      v17 = v14;
      v18 = 0LL;
      v19 = v11;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(v11) = v17 != v18;
        if ( v17 == -1LL )
          LOBYTE(v11) = s[v18] != 0;
        if ( !(_BYTE)v11 )
        {
          v43 = v19;
          v14 = v17;
          v44 = v43 == 2;
          if ( !v16 && v44 && v82 )
            return sub_40A0E0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_40A0E0((__int64)v9, v79, s);
              v46 = v79 != 0 && v10 == 0;
              if ( v46 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
                n = 1LL;
                v82 = 0;
                v83 = v46;
                goto LABEL_3;
              }
              v45 = v83;
            }
          }
          else
          {
            v45 = !v82;
          }
          if ( s2 )
          {
            if ( v45 )
            {
              v65 = *s2;
              if ( *s2 )
              {
                v66 = &s2[-v16];
                do
                {
                  if ( v10 > v16 )
                    v9[v16] = v65;
                  v65 = v66[++v16];
                }
                while ( v65 );
              }
            }
          }
          if ( v10 > v16 )
            v9[v16] = 0;
          return v16;
        }
        v20 = &s[v18];
        v69 = v68 & (v19 != 2);
        if ( !((unsigned __int8)v68 & (v19 != 2)) )
          break;
        if ( n )
        {
          if ( v17 == -1LL && n > 1 )
          {
            v21 = v19;
            v22 = v15;
            v23 = strlen(s);
            v19 = v21;
            v15 = v22;
            v20 = &s[v18];
            v17 = v23;
          }
          if ( v18 + n <= v17 )
          {
            v24 = v19;
            v25 = v17;
            v26 = v15;
            v73 = v20;
            v27 = memcmp(v20, s2, n);
            v20 = v73;
            v15 = v26;
            v17 = v25;
            v19 = v24;
            if ( !v27 )
            {
              if ( v82 )
                return sub_40A0E0((__int64)v9, v10, s);
              LOBYTE(v28) = *v73;
              switch ( *v73 )
              {
                case 123:
                case 125:
                  goto LABEL_17;
                case 63:
                  goto LABEL_58;
                case 39:
                  goto LABEL_62;
                case 92:
                  goto LABEL_65;
                case 10:
                  goto LABEL_68;
                case 9:
                  goto LABEL_72;
                case 33:
                case 34:
                case 36:
                case 38:
                case 40:
                case 41:
                case 42:
                case 59:
                case 60:
                case 61:
                case 62:
                case 91:
                case 94:
                case 96:
                case 124:
                  goto LABEL_74;
                case 13:
                  goto LABEL_76;
                case 12:
                  goto LABEL_77;
                case 11:
                  goto LABEL_80;
                case 0:
                  goto LABEL_83;
                default:
                  goto LABEL_98;
                case 37:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                case 48:
                case 49:
                case 50:
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                case 56:
                case 57:
                case 58:
                case 65:
                case 66:
                case 67:
                case 68:
                case 69:
                case 70:
                case 71:
                case 72:
                case 73:
                case 74:
                case 75:
                case 76:
                case 77:
                case 78:
                case 79:
                case 80:
                case 81:
                case 82:
                case 83:
                case 84:
                case 85:
                case 86:
                case 87:
                case 88:
                case 89:
                case 90:
                case 93:
                case 95:
                case 97:
                case 98:
                case 99:
                case 100:
                case 101:
                case 102:
                case 103:
                case 104:
                case 105:
                case 106:
                case 107:
                case 108:
                case 109:
                case 110:
                case 111:
                case 112:
                case 113:
                case 114:
                case 115:
                case 116:
                case 117:
                case 118:
                case 119:
                case 120:
                case 121:
                case 122:
                  v41 = v69;
                  goto LABEL_123;
                case 35:
                case 126:
                  v42 = v69;
                  goto LABEL_125;
                case 32:
                  v41 = v69;
                  goto LABEL_128;
                case 8:
                  LODWORD(v13) = 0;
                  v11 = 0;
                  LOBYTE(v28) = 98;
                  goto LABEL_29;
                case 7:
                  LOBYTE(v28) = 97;
                  break;
              }
LABEL_79:
              v11 = 0;
              goto LABEL_37;
            }
          }
        }
        LOBYTE(v28) = *v20;
        switch ( *v20 )
        {
          case 123:
          case 125:
            v69 = 0;
            goto LABEL_17;
          case 63:
            v69 = 0;
            goto LABEL_58;
          case 39:
            v69 = 0;
            goto LABEL_62;
          case 92:
            v69 = 0;
            goto LABEL_65;
          case 10:
LABEL_68:
            LOBYTE(v28) = 110;
            goto LABEL_69;
          case 9:
LABEL_72:
            LOBYTE(v28) = 116;
            goto LABEL_69;
          case 33:
          case 34:
          case 36:
          case 38:
          case 40:
          case 41:
          case 42:
          case 59:
          case 60:
          case 61:
          case 62:
          case 91:
          case 94:
          case 96:
          case 124:
            v69 = 0;
LABEL_74:
            LODWORD(v13) = 0;
            goto LABEL_67;
          case 13:
            v69 = 0;
LABEL_76:
            LOBYTE(v28) = 13;
            v34 = 114;
            LOBYTE(v13) = v19 == 2;
            goto LABEL_66;
          case 12:
LABEL_77:
            LOBYTE(v28) = 102;
            goto LABEL_78;
          case 11:
LABEL_80:
            LOBYTE(v28) = 118;
            goto LABEL_78;
          case 0:
            goto LABEL_81;
          default:
            v69 = 0;
            goto LABEL_98;
          case 37:
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
          case 58:
          case 65:
          case 66:
          case 67:
          case 68:
          case 69:
          case 70:
          case 71:
          case 72:
          case 73:
          case 74:
          case 75:
          case 76:
          case 77:
          case 78:
          case 79:
          case 80:
          case 81:
          case 82:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
          case 90:
          case 93:
          case 95:
          case 97:
          case 98:
          case 99:
          case 100:
          case 101:
          case 102:
          case 103:
          case 104:
          case 105:
          case 106:
          case 107:
          case 108:
          case 109:
          case 110:
          case 111:
          case 112:
          case 113:
          case 114:
          case 115:
          case 116:
          case 117:
          case 118:
          case 119:
          case 120:
          case 121:
          case 122:
            v41 = 0;
            goto LABEL_123;
          case 35:
          case 126:
            v42 = 0;
LABEL_125:
            if ( !v18 )
            {
              v11 = v69;
              LODWORD(v13) = 0;
              v69 = v42;
              goto LABEL_23;
            }
            v69 = v42;
            v11 = 0;
            break;
          case 32:
            v41 = 0;
LABEL_128:
            LOBYTE(v28) = 32;
LABEL_123:
            v11 = v69;
            v69 = v41;
            v30 = 0;
            goto LABEL_25;
          case 8:
            LOBYTE(v28) = 98;
LABEL_69:
            LODWORD(v13) = 0;
            v11 = 0;
            if ( v82 )
              return sub_40A0E0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_40A0E0((__int64)v9, v10, s);
        }
LABEL_24:
        v30 = 0;
LABEL_25:
        if ( a7 )
        {
          LODWORD(v13) = (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v28 >> 5)) >> v28) & 1;
          if ( (_DWORD)v13 )
          {
            LOBYTE(v13) = v19 == 2;
LABEL_28:
            if ( v82 )
              return sub_40A0E0((__int64)v9, v10, s);
LABEL_29:
            v31 = v15 ^ 1;
            LOBYTE(v31) = v13 & (v15 ^ 1);
            if ( (unsigned __int8)v13 & (unsigned __int8)(v15 ^ 1) )
            {
              if ( v10 > v16 )
                v9[v16] = 39;
              if ( v16 + 1 < v10 )
                v9[v16 + 1] = 36;
              LODWORD(v13) = v16 + 2;
              if ( v16 + 2 < v10 )
                v9[v16 + 2] = 39;
              v16 += 3LL;
              v15 = v31;
            }
LABEL_37:
            if ( v10 > v16 )
              v9[v16] = 92;
            ++v16;
            ++v18;
            goto LABEL_40;
          }
        }
LABEL_49:
        LOBYTE(v13) = v19 == 2;
        if ( v69 )
          goto LABEL_28;
        ++v18;
        LODWORD(v33) = v15 & (v30 ^ 1);
LABEL_51:
        if ( (_BYTE)v33 )
        {
          if ( v10 > v16 )
            v9[v16] = 39;
          if ( v10 > v16 + 1 )
            v9[v16 + 1] = 39;
          v16 += 2LL;
          v15 = 0;
        }
LABEL_40:
        if ( v16 < v10 )
          v9[v16] = v28;
        v32 = v70;
        ++v16;
        if ( !(_BYTE)v11 )
          v32 = 0;
        v70 = v32;
      }
      LOBYTE(v28) = *v20;
      switch ( *v20 )
      {
        case 123:
        case 125:
LABEL_17:
          v29 = v17 != 1;
          if ( v17 == -1LL )
            v29 = s[1] != 0;
          LOBYTE(v13) = v19 == 2;
          if ( !v29 )
            goto LABEL_20;
          goto LABEL_67;
        case 63:
LABEL_58:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_40A0E0((__int64)v9, v10, s);
            v11 = 0;
            v30 = 0;
            LOBYTE(v28) = 63;
            goto LABEL_49;
          }
          if ( v19 != 5 )
          {
            LOBYTE(v28) = 63;
            LOBYTE(v13) = v19 == 2;
            v11 = 0;
            goto LABEL_23;
          }
          if ( !(v81 & 4)
            || v18 + 2 >= v17
            || s[v18 + 1] != 63
            || (v28 = (unsigned __int8)s[v18 + 2], (unsigned __int8)v28 > 0x3Eu)
            || (v61 = 8070630310989004800LL, !_bittest64(&v61, v28)) )
          {
            LODWORD(v13) = 0;
            v11 = 0;
            LOBYTE(v28) = 63;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_40A0E0((__int64)v9, v10, s);
          if ( v10 > v16 )
            v9[v16] = 63;
          if ( v10 > v16 + 1 )
            v9[v16 + 1] = 34;
          if ( v10 > v16 + 2 )
            v9[v16 + 2] = 34;
          if ( v10 > v16 + 3 )
            v9[v16 + 3] = 63;
          v16 += 4LL;
          LODWORD(v13) = 0;
          v11 = 0;
          v18 += 2LL;
          goto LABEL_95;
        case 39:
LABEL_62:
          if ( v19 != 2 )
          {
            v83 = v11;
            LODWORD(v13) = 0;
            LOBYTE(v28) = 39;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_40A0E0((__int64)v9, v10, s);
          if ( !v10 || (v13 = 0LL, v79) )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 92;
            if ( v10 <= v16 + 2 )
            {
              v13 = v10;
              v10 = v79;
            }
            else
            {
              v13 = v10;
              v9[v16 + 2] = 39;
              v10 = v79;
            }
          }
          v83 = v11;
          v16 += 3LL;
          v30 = 0;
          v15 = 0;
          v79 = v10;
          LOBYTE(v28) = 39;
          v10 = v13;
          goto LABEL_49;
        default:
LABEL_98:
          if ( v80 == 1 )
          {
            v37 = v19;
            v38 = v17;
            v39 = v15;
            v33 = __ctype_b_loc();
            LODWORD(v13) = (unsigned __int8)v28;
            v15 = v39;
            v17 = v38;
            v19 = v37;
            v40 = 1LL;
            LODWORD(v33) = (*v33)[(unsigned __int8)v28];
            LOWORD(v33) = (unsigned __int16)v33 & 0x4000;
            LOBYTE(v11) = (_WORD)v33 != 0;
            LOBYTE(v13) = v68 & ((_WORD)v33 == 0);
            goto LABEL_100;
          }
          ps = 0LL;
          if ( v17 == -1LL )
          {
            v47 = v19;
            v48 = v15;
            v49 = v20;
            v50 = strlen(s);
            v19 = v47;
            LOBYTE(v15) = v48;
            v20 = v49;
            v17 = v50;
          }
          v85 = v16;
          v86 = v20;
          v51 = 0LL;
          v84 = v15;
          v76 = v9;
          v77 = v10;
          v74 = v17;
          v75 = v19;
          break;
        case 37:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 93:
        case 95:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
        case 112:
        case 113:
        case 114:
        case 115:
        case 116:
        case 117:
        case 118:
        case 119:
        case 120:
        case 121:
        case 122:
          goto LABEL_101;
        case 10:
          LOBYTE(v28) = 10;
          v34 = 110;
          goto LABEL_104;
        case 9:
          LOBYTE(v28) = 9;
          v34 = 116;
          goto LABEL_104;
        case 8:
          LOBYTE(v28) = 8;
          v34 = 98;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 7:
          LOBYTE(v28) = 7;
          v34 = 97;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 0:
          if ( !v68 )
          {
            if ( !(v81 & 1) )
            {
              v69 = 0;
              LOBYTE(v13) = v19 == 2;
              v11 = 0;
              LOBYTE(v28) = 0;
              goto LABEL_23;
            }
            ++v18;
            goto LABEL_4;
          }
LABEL_81:
          if ( v82 )
            return sub_40A0E0((__int64)v9, v10, s);
          v69 = 0;
LABEL_83:
          LOBYTE(v13) = v19 == 2;
          v30 = v15 ^ 1;
          LOBYTE(v30) = (v19 == 2) & (v15 ^ 1);
          if ( (_BYTE)v30 )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 36;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v36 = v16 + 3;
            if ( v10 <= v16 + 3 )
            {
              v16 += 4LL;
              v15 = v30;
              v11 = 0;
              LOBYTE(v28) = 48;
              goto LABEL_49;
            }
            goto LABEL_91;
          }
          v36 = v16;
          if ( v10 > v16 )
          {
            v30 = v15;
LABEL_91:
            v9[v36] = 92;
            v15 = v30;
          }
          v16 = v36 + 1;
          if ( v19 == 2 )
          {
            v30 = v11;
            LOBYTE(v28) = 48;
            v11 = 0;
            goto LABEL_49;
          }
          LOBYTE(v28) = 48;
          if ( v18 + 1 < v17 && (unsigned __int8)(s[v18 + 1] - 48) <= 9u )
          {
            if ( v10 > v16 )
              v9[v16] = 48;
            if ( v10 > v36 + 2 )
              v9[v36 + 2] = 48;
            v16 = v36 + 3;
            LOBYTE(v28) = 48;
          }
LABEL_95:
          v30 = v11;
          v11 = 0;
          if ( (unsigned __int8)v13 | (unsigned __int8)(v68 ^ 1) )
            goto LABEL_49;
          goto LABEL_25;
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_40A0E0((__int64)v9, v10, s);
            ++v18;
            LOBYTE(v33) = v15;
            v11 = 0;
            LOBYTE(v28) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LODWORD(v13) = (unsigned __int8)v68;
          LOBYTE(v28) = 92;
          v34 = 92;
          LOBYTE(v13) = (n != 0) & v82 & v68;
          if ( (_BYTE)v13 )
          {
            ++v18;
            LOBYTE(v33) = v15;
            v11 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v68 )
          {
LABEL_67:
            v11 = 0;
            goto LABEL_23;
          }
          LOBYTE(v28) = v34;
          v11 = 0;
          goto LABEL_28;
        case 35:
        case 126:
          LOBYTE(v13) = v19 == 2;
LABEL_20:
          if ( !v18 )
            goto LABEL_21;
          goto LABEL_67;
        case 33:
        case 34:
        case 36:
        case 38:
        case 40:
        case 41:
        case 42:
        case 59:
        case 60:
        case 61:
        case 62:
        case 91:
        case 94:
        case 96:
        case 124:
          LOBYTE(v13) = v19 == 2;
          v11 = 0;
          goto LABEL_21;
        case 32:
          LOBYTE(v28) = 32;
          LOBYTE(v13) = v19 == 2;
LABEL_21:
          if ( !v82 || !(_BYTE)v13 )
            goto LABEL_23;
          return sub_40A0E0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_40A0E0((__int64)v9, v10, s);
          goto LABEL_66;
        case 12:
          LOBYTE(v28) = 12;
          v34 = 102;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 11:
          LOBYTE(v28) = 11;
          v34 = 118;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
      }
      while ( 2 )
      {
        v52 = (char *)v51 + v18;
        v33 = (const unsigned __int16 **)sub_40D310((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
        v53 = v33;
        if ( !v33 )
        {
LABEL_240:
          v40 = (unsigned __int64)v51;
          v16 = v85;
          v15 = v84;
          v9 = v76;
          LODWORD(v13) = v11 ^ 1;
          v10 = v77;
          v17 = v74;
          v19 = v75;
          LOBYTE(v13) = v68 & (v11 ^ 1);
          goto LABEL_241;
        }
        if ( v33 == (const unsigned __int16 **)-1 )
        {
          v40 = (unsigned __int64)v51;
          v16 = v85;
          v11 = 0;
          v15 = v84;
          v9 = v76;
          v10 = v77;
          v17 = v74;
          v19 = v75;
          LODWORD(v13) = (unsigned __int8)v68;
          goto LABEL_241;
        }
        if ( v33 == (const unsigned __int16 **)-2 )
        {
          v17 = v74;
          v62 = (char *)v51 + v18;
          v63 = (char *)v51 + v18 + (_QWORD)s;
          v33 = v51;
          v40 = (unsigned __int64)v51;
          v15 = v84;
          v16 = v85;
          v9 = v76;
          v10 = v77;
          v19 = v75;
          if ( (unsigned __int64)v62 < v74 && *v63 )
          {
            do
              v33 = (const unsigned __int16 **)((char *)v33 + 1);
            while ( (unsigned __int64)v33 + v18 < v74 && *((_BYTE *)v33 + (_QWORD)v86) );
            v40 = (unsigned __int64)v33;
          }
          LODWORD(v13) = (unsigned __int8)v68;
          v11 = 0;
LABEL_241:
          if ( v40 > 1 )
            goto LABEL_173;
LABEL_100:
          if ( (_BYTE)v13 )
          {
            LODWORD(v13) = (unsigned __int8)v68;
            LOBYTE(v11) = 0;
LABEL_173:
            v55 = 0;
            v56 = v18 + v40;
            v57 = v69;
            while ( 1 )
            {
              if ( (_BYTE)v13 )
              {
                if ( v82 )
                  return sub_40A0E0((__int64)v9, v10, s);
                LOBYTE(v33) = (v15 ^ 1) & (v19 == 2);
                if ( (_BYTE)v33 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 36;
                  if ( v10 > v16 + 2 )
                    v9[v16 + 2] = 39;
                  v16 += 3LL;
                  v15 = (signed int)v33;
                }
                if ( v10 > v16 )
                  v9[v16] = 92;
                if ( v10 > v16 + 1 )
                  v9[v16 + 1] = ((unsigned __int8)v28 >> 6) + 48;
                LODWORD(v33) = v16 + 2;
                if ( v10 > v16 + 2 )
                {
                  LODWORD(v33) = (((unsigned __int8)v28 >> 3) & 7) + 48;
                  v9[v16 + 2] = (_BYTE)v33;
                }
                ++v18;
                v16 += 3LL;
                LOBYTE(v28) = (v28 & 7) + 48;
                if ( v18 >= v56 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_40;
                }
                v55 = v13;
              }
              else
              {
                LODWORD(v33) = v15 & (v55 ^ 1);
                if ( v57 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 92;
                  ++v16;
                }
                if ( ++v18 >= v56 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_51;
                }
                if ( (_BYTE)v33 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  LODWORD(v33) = v16 + 1;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 39;
                  v16 += 2LL;
                  v57 = 0;
                  v15 = 0;
                }
                else
                {
                  v57 = 0;
                }
              }
              if ( v10 > v16 )
                v9[v16] = v28;
              LOBYTE(v28) = s[v18];
              ++v16;
            }
          }
LABEL_101:
          LOBYTE(v13) = v19 == 2;
LABEL_23:
          v30 = (v13 | (unsigned __int8)v68 ^ 1) ^ 1;
          LOBYTE(v30) = v82 | (v13 | v68 ^ 1) ^ 1;
          if ( !(v82 | (unsigned __int8)((v13 | v68 ^ 1) ^ 1)) )
            goto LABEL_49;
          goto LABEL_24;
        }
        if ( v75 != 2 || !v82 || v33 == (const unsigned __int16 **)1 )
        {
LABEL_148:
          if ( !iswprint(wc) )
            v11 = 0;
          v51 = (const unsigned __int16 **)((char *)v51 + (_QWORD)v53);
          LODWORD(v33) = mbsinit(&ps);
          if ( (_DWORD)v33 )
            goto LABEL_240;
          continue;
        }
        break;
      }
      v54 = &v52[(_QWORD)s + 1];
      while ( (unsigned __int8)(*v54 - 91) > 0x21u || !((1LL << (*v54 - 91)) & 0x20000002BLL) )
      {
        if ( &v52[(unsigned int)&s[(_QWORD)v53]] == ++v54 )
          goto LABEL_148;
      }
      v9 = v76;
      v10 = v77;
      return sub_40A0E0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_40B310(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int128 *v7; // rbx@1
  int *v8; // r13@1
  signed __int64 v9; // rsi@4
  __int128 *v10; // rax@5
  signed __int64 v11; // rbx@7
  _BYTE *v12; // r12@7
  unsigned __int64 v13; // ST30_8@7
  unsigned __int64 v14; // rax@7
  unsigned __int64 v15; // rsi@8
  __int64 v16; // ST30_8@9
  _BYTE *v17; // rax@10
  int v18; // er8@10
  __int128 *v20; // rax@12
  char *v21; // [sp+8h] [bp-50h]@1
  int v22; // [sp+18h] [bp-40h]@1
  int v23; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v21 = a2;
  v6 = __errno_location();
  v7 = off_61B2D8;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_61B2F0 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_40C3E0(a1);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_61B2D8 == &xmmword_61B2E0 )
    {
      LODWORD(v20) = sub_40C1F0(0LL, v9);
      v7 = v20;
      off_61B2D8 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B2E0);
    }
    else
    {
      LODWORD(v10) = sub_40C1F0(off_61B2D8, v9);
      off_61B2D8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_61B2F0], 0, 16LL * ((signed int)a1 + 1 - dword_61B2F0));
    dword_61B2F0 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_40A0E0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_61B360 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_40C190(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_40A0E0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_40B310(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int128 *v7; // rbx@1
  int *v8; // r13@1
  signed __int64 v9; // rsi@4
  __int128 *v10; // rax@5
  signed __int64 v11; // rbx@7
  _BYTE *v12; // r12@7
  unsigned __int64 v13; // ST30_8@7
  unsigned __int64 v14; // rax@7
  unsigned __int64 v15; // rsi@8
  __int64 v16; // ST30_8@9
  _BYTE *v17; // rax@10
  int v18; // er8@10
  __int128 *v20; // rax@12
  char *v21; // [sp+8h] [bp-50h]@1
  int v22; // [sp+18h] [bp-40h]@1
  int v23; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v21 = a2;
  v6 = __errno_location();
  v7 = off_61B2D8;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_61B2F0 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_40C3E0(a1);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_61B2D8 == &xmmword_61B2E0 )
    {
      LODWORD(v20) = sub_40C1F0(0LL, v9);
      v7 = v20;
      off_61B2D8 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B2E0);
    }
    else
    {
      LODWORD(v10) = sub_40C1F0(off_61B2D8, v9);
      off_61B2D8 = v10;
      v7 = v10;
    }
    memset(&v7[dword_61B2F0], 0, 16LL * ((signed int)a1 + 1 - dword_61B2F0));
    dword_61B2F0 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_40A0E0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_61B360 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_40C190(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_40A0E0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_40B830(__int64 a1, int a2, char *a3)
{
  int v4; // [sp+0h] [bp-48h]@2
  int v5; // [sp+4h] [bp-44h]@2
  __int64 v6; // [sp+8h] [bp-40h]@2
  __int64 v7; // [sp+10h] [bp-38h]@2
  __int64 v8; // [sp+18h] [bp-30h]@2
  __int64 v9; // [sp+20h] [bp-28h]@2
  __int64 v10; // [sp+28h] [bp-20h]@2
  __int64 v11; // [sp+30h] [bp-18h]@2

  if ( a2 == 10 )
    abort();
  v4 = a2;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_40B310(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40B830(__int64 a1, int a2, char *a3)
{
  int v4; // [sp+0h] [bp-48h]@2
  int v5; // [sp+4h] [bp-44h]@2
  __int64 v6; // [sp+8h] [bp-40h]@2
  __int64 v7; // [sp+10h] [bp-38h]@2
  __int64 v8; // [sp+18h] [bp-30h]@2
  __int64 v9; // [sp+20h] [bp-28h]@2
  __int64 v10; // [sp+28h] [bp-20h]@2
  __int64 v11; // [sp+30h] [bp-18h]@2

  if ( a2 == 10 )
    abort();
  v4 = a2;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_40B310(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40B930(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_61B490;
  v4 = _mm_load_si128((const __m128i *)&xmmword_61B460);
  v5 = _mm_load_si128((const __m128i *)&xmmword_61B470);
  v6 = _mm_load_si128((const __m128i *)&xmmword_61B480);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_40B310(0LL, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_40B9B0(char *a1)
{
  return sub_40B930(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_40B9E0(__int64 a1, int a2, char *a3)
{
  int v4; // [sp+0h] [bp-48h]@2
  int v5; // [sp+4h] [bp-44h]@2
  __int64 v6; // [sp+8h] [bp-40h]@2
  __int64 v7; // [sp+10h] [bp-38h]@2
  __int64 v8; // [sp+18h] [bp-30h]@2
  __int64 v9; // [sp+20h] [bp-28h]@2
  __int64 v10; // [sp+28h] [bp-20h]@2
  __int64 v11; // [sp+30h] [bp-18h]@2

  if ( a2 == 10 )
    abort();
  v4 = a2;
  v6 = 0x400000000000000LL;
  v5 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_40B310(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40B9E0(__int64 a1, int a2, char *a3)
{
  int v4; // [sp+0h] [bp-48h]@2
  int v5; // [sp+4h] [bp-44h]@2
  __int64 v6; // [sp+8h] [bp-40h]@2
  __int64 v7; // [sp+10h] [bp-38h]@2
  __int64 v8; // [sp+18h] [bp-30h]@2
  __int64 v9; // [sp+20h] [bp-28h]@2
  __int64 v10; // [sp+28h] [bp-20h]@2
  __int64 v11; // [sp+30h] [bp-18h]@2

  if ( a2 == 10 )
    abort();
  v4 = a2;
  v6 = 0x400000000000000LL;
  v5 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_40B310(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40BB40(__int64 a1, char *a2)
{
  return sub_40B310(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61B2A0);
}

_BYTE *__fastcall sub_40BB60(char *a1)
{
  return sub_40B310(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61B2A0);
}

__int64 __fastcall sub_40BB80(struct timespec *tp)
{
  int v1; // ebx@1
  signed __int64 v2; // rcx@3
  __int64 v4; // [sp+0h] [bp-28h]@3
  __int64 v5; // [sp+8h] [bp-20h]@3

  v1 = clock_settime(0, tp);
  if ( v1 && *__errno_location() != 1 )
  {
    v2 = tp->tv_nsec;
    v4 = tp->tv_sec;
    v5 = ((signed __int64)((unsigned __int128)(2361183241434822607LL * v2) >> 64) >> 7) - (v2 >> 63);
    v1 = settimeofday((const struct timeval *)&v4, 0LL);
  }
  return (unsigned int)v1;
}

int __fastcall sub_40BBF0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12@1
  __int64 v7; // rbx@1
  char *v8; // rax@3
  char *v9; // rax@3
  __int64 v10; // rax@5
  __int64 v11; // r8@5
  __int64 v12; // r13@5
  __int64 v13; // r12@5
  __int64 v14; // r15@5
  __int64 v15; // ST40_8@5
  __int64 v16; // r14@5
  __int64 v17; // rbx@5
  char *v18; // rax@5
  int result; // eax@6
  const char *v20; // rsi@7
  __int64 v21; // r8@7
  __int64 v22; // r13@7
  __int64 v23; // r12@7
  __int64 v24; // ST48_8@7
  __int64 v25; // r15@7
  __int64 v26; // r14@7
  __int64 v27; // ST40_8@7
  __int64 v28; // ST30_8@7
  __int64 v29; // rbx@9
  char *v30; // rax@9
  __int64 v31; // r12@10
  __int64 v32; // rbx@10
  char *v33; // rax@10
  __int64 v34; // r13@11
  __int64 v35; // r12@11
  __int64 v36; // rbx@11
  char *v37; // rax@11
  __int64 v38; // r14@12
  __int64 v39; // r13@12
  __int64 v40; // r12@12
  __int64 v41; // rbx@12
  char *v42; // rax@12
  __int64 v43; // r15@14
  __int64 v44; // r13@14
  __int64 v45; // r12@14
  __int64 v46; // r12@15
  __int64 v47; // r15@15
  __int64 v48; // r14@15
  __int64 v49; // ST30_8@15
  __int64 v50; // r13@15
  __int64 v51; // rbx@15
  char *v52; // rax@15
  __int64 v53; // r13@17
  __int64 v54; // r12@17
  __int64 v55; // r15@17
  __int64 v56; // r14@17
  __int64 v57; // r8@17
  __int64 v58; // ST38_8@17
  __int64 v59; // r8@18
  __int64 v60; // r13@18
  __int64 v61; // r12@18
  __int64 v62; // ST48_8@18
  __int64 v63; // r15@18
  __int64 v64; // r14@18
  __int64 v65; // ST40_8@18
  __int64 v66; // ST30_8@18

  v6 = a6;
  v7 = a5;
  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs_unlocked(v9, stream);
  switch ( v6 )
  {
    case 0LL:
      abort();
      return result;
    case 8LL:
      v10 = *(_QWORD *)(v7 + 16);
      v11 = *(_QWORD *)(v7 + 8);
      v12 = *(_QWORD *)(v7 + 48);
      v13 = *(_QWORD *)(v7 + 40);
      v14 = *(_QWORD *)(v7 + 32);
      v15 = *(_QWORD *)(v7 + 56);
      v16 = *(_QWORD *)(v7 + 24);
      v17 = *(_QWORD *)v7;
      v18 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_6;
    case 9LL:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v21 = *(_QWORD *)(v7 + 8);
      v22 = *(_QWORD *)(v7 + 48);
      v23 = *(_QWORD *)(v7 + 40);
      v24 = *(_QWORD *)(v7 + 64);
      v25 = *(_QWORD *)(v7 + 32);
      v26 = *(_QWORD *)(v7 + 24);
      v27 = *(_QWORD *)(v7 + 56);
      v28 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
      goto LABEL_8;
    case 1LL:
      v29 = *(_QWORD *)v7;
      v30 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29);
    case 2LL:
      v31 = *(_QWORD *)(v7 + 8);
      v32 = *(_QWORD *)v7;
      v33 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v33, v32);
    case 3LL:
      v34 = *(_QWORD *)(v7 + 16);
      v35 = *(_QWORD *)(v7 + 8);
      v36 = *(_QWORD *)v7;
      v37 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v37, v36);
    case 4LL:
      v38 = *(_QWORD *)(v7 + 24);
      v39 = *(_QWORD *)(v7 + 16);
      v40 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v43 = *(_QWORD *)(v7 + 32);
      v38 = *(_QWORD *)(v7 + 24);
      v44 = *(_QWORD *)(v7 + 16);
      v45 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v42, v41);
      return v38;
    case 6LL:
      v46 = *(_QWORD *)(v7 + 40);
      v47 = *(_QWORD *)(v7 + 32);
      v48 = *(_QWORD *)(v7 + 24);
      v49 = *(_QWORD *)(v7 + 8);
      v50 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      goto LABEL_16;
    case 7LL:
      v53 = *(_QWORD *)(v7 + 48);
      v54 = *(_QWORD *)(v7 + 40);
      v55 = *(_QWORD *)(v7 + 32);
      v56 = *(_QWORD *)(v7 + 24);
      v57 = *(_QWORD *)(v7 + 8);
      v58 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
LABEL_16:
      result = __fprintf_chk(stream, 1LL, v52, v51);
      break;
    default:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = *(_QWORD *)(v7 + 8);
      v60 = *(_QWORD *)(v7 + 48);
      v61 = *(_QWORD *)(v7 + 40);
      v62 = *(_QWORD *)(v7 + 64);
      v63 = *(_QWORD *)(v7 + 32);
      v64 = *(_QWORD *)(v7 + 24);
      v65 = *(_QWORD *)(v7 + 56);
      v66 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
LABEL_8:
      v18 = dcgettext(0LL, v20, 5);
LABEL_6:
      result = __fprintf_chk(stream, 1LL, v18, v17);
      break;
  }
  return result;
}

int __fastcall sub_40BBF0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12@1
  __int64 v7; // rbx@1
  char *v8; // rax@3
  char *v9; // rax@3
  __int64 v10; // rax@5
  __int64 v11; // r8@5
  __int64 v12; // r13@5
  __int64 v13; // r12@5
  __int64 v14; // r15@5
  __int64 v15; // ST40_8@5
  __int64 v16; // r14@5
  __int64 v17; // rbx@5
  char *v18; // rax@5
  int result; // eax@6
  const char *v20; // rsi@7
  __int64 v21; // r8@7
  __int64 v22; // r13@7
  __int64 v23; // r12@7
  __int64 v24; // ST48_8@7
  __int64 v25; // r15@7
  __int64 v26; // r14@7
  __int64 v27; // ST40_8@7
  __int64 v28; // ST30_8@7
  __int64 v29; // rbx@9
  char *v30; // rax@9
  __int64 v31; // r12@10
  __int64 v32; // rbx@10
  char *v33; // rax@10
  __int64 v34; // r13@11
  __int64 v35; // r12@11
  __int64 v36; // rbx@11
  char *v37; // rax@11
  __int64 v38; // r14@12
  __int64 v39; // r13@12
  __int64 v40; // r12@12
  __int64 v41; // rbx@12
  char *v42; // rax@12
  __int64 v43; // r15@14
  __int64 v44; // r13@14
  __int64 v45; // r12@14
  __int64 v46; // r12@15
  __int64 v47; // r15@15
  __int64 v48; // r14@15
  __int64 v49; // ST30_8@15
  __int64 v50; // r13@15
  __int64 v51; // rbx@15
  char *v52; // rax@15
  __int64 v53; // r13@17
  __int64 v54; // r12@17
  __int64 v55; // r15@17
  __int64 v56; // r14@17
  __int64 v57; // r8@17
  __int64 v58; // ST38_8@17
  __int64 v59; // r8@18
  __int64 v60; // r13@18
  __int64 v61; // r12@18
  __int64 v62; // ST48_8@18
  __int64 v63; // r15@18
  __int64 v64; // r14@18
  __int64 v65; // ST40_8@18
  __int64 v66; // ST30_8@18

  v6 = a6;
  v7 = a5;
  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs_unlocked(v9, stream);
  switch ( v6 )
  {
    case 0LL:
      abort();
      return result;
    case 8LL:
      v10 = *(_QWORD *)(v7 + 16);
      v11 = *(_QWORD *)(v7 + 8);
      v12 = *(_QWORD *)(v7 + 48);
      v13 = *(_QWORD *)(v7 + 40);
      v14 = *(_QWORD *)(v7 + 32);
      v15 = *(_QWORD *)(v7 + 56);
      v16 = *(_QWORD *)(v7 + 24);
      v17 = *(_QWORD *)v7;
      v18 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_6;
    case 9LL:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v21 = *(_QWORD *)(v7 + 8);
      v22 = *(_QWORD *)(v7 + 48);
      v23 = *(_QWORD *)(v7 + 40);
      v24 = *(_QWORD *)(v7 + 64);
      v25 = *(_QWORD *)(v7 + 32);
      v26 = *(_QWORD *)(v7 + 24);
      v27 = *(_QWORD *)(v7 + 56);
      v28 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
      goto LABEL_8;
    case 1LL:
      v29 = *(_QWORD *)v7;
      v30 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29);
    case 2LL:
      v31 = *(_QWORD *)(v7 + 8);
      v32 = *(_QWORD *)v7;
      v33 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v33, v32);
    case 3LL:
      v34 = *(_QWORD *)(v7 + 16);
      v35 = *(_QWORD *)(v7 + 8);
      v36 = *(_QWORD *)v7;
      v37 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v37, v36);
    case 4LL:
      v38 = *(_QWORD *)(v7 + 24);
      v39 = *(_QWORD *)(v7 + 16);
      v40 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v43 = *(_QWORD *)(v7 + 32);
      v38 = *(_QWORD *)(v7 + 24);
      v44 = *(_QWORD *)(v7 + 16);
      v45 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v42, v41);
      return v38;
    case 6LL:
      v46 = *(_QWORD *)(v7 + 40);
      v47 = *(_QWORD *)(v7 + 32);
      v48 = *(_QWORD *)(v7 + 24);
      v49 = *(_QWORD *)(v7 + 8);
      v50 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      goto LABEL_16;
    case 7LL:
      v53 = *(_QWORD *)(v7 + 48);
      v54 = *(_QWORD *)(v7 + 40);
      v55 = *(_QWORD *)(v7 + 32);
      v56 = *(_QWORD *)(v7 + 24);
      v57 = *(_QWORD *)(v7 + 8);
      v58 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
LABEL_16:
      result = __fprintf_chk(stream, 1LL, v52, v51);
      break;
    default:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = *(_QWORD *)(v7 + 8);
      v60 = *(_QWORD *)(v7 + 48);
      v61 = *(_QWORD *)(v7 + 40);
      v62 = *(_QWORD *)(v7 + 64);
      v63 = *(_QWORD *)(v7 + 32);
      v64 = *(_QWORD *)(v7 + 24);
      v65 = *(_QWORD *)(v7 + 56);
      v66 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
LABEL_8:
      v18 = dcgettext(0LL, v20, 5);
LABEL_6:
      result = __fprintf_chk(stream, 1LL, v18, v17);
      break;
  }
  return result;
}

int __fastcall sub_40C050(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  char *v7; // r10@1
  signed int v8; // er8@1
  __int64 v9; // r9@1
  __int64 v10; // rax@2
  __int64 v11; // rax@2
  __int64 *v12; // rax@5
  __int64 v13; // rax@5
  __int64 v15[10]; // [sp+20h] [bp-88h]@2
  char v16[32]; // [sp+70h] [bp-38h]@2
  __int64 v17; // [sp+90h] [bp-18h]@1
  __int64 v18; // [sp+98h] [bp-10h]@1

  v17 = a5;
  v7 = &a7;
  v8 = 32;
  v18 = a6;
  v9 = 0LL;
  do
  {
    if ( (unsigned int)v8 <= 0x2F )
    {
      v10 = (unsigned int)v8;
      v8 += 8;
      v11 = *(_QWORD *)&v16[v10];
      v15[v9] = v11;
      if ( !v11 )
        return sub_40BBF0(a1, a2, a3, a4, (__int64)v15, v9);
      goto LABEL_3;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[v9] = v13;
    if ( !v13 )
      break;
LABEL_3:
    ++v9;
  }
  while ( v9 != 10 );
  return sub_40BBF0(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_40C190(size_t a1)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_40C3E0(a1);
  }
  return result;
}

void *__fastcall sub_40C1F0(void *a1, size_t a2)
{
  void *result; // rax@3

  if ( !a2 && a1 )
  {
    free(a1);
    result = 0LL;
  }
  else
  {
    result = realloc(a1, a2);
    if ( !result )
    {
      if ( a2 )
        sub_40C3E0(a1);
    }
  }
  return result;
}

void *__fastcall sub_40C390(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_40C190(a2);
  return memcpy(v2, a1, a2);
}

void __noreturn sub_40C3E0()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_40C420(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_40C4A0(stream) )
  {
    result = fclose(stream);
  }
  else
  {
    v1 = __errno_location();
    v2 = *v1;
    v3 = v1;
    result = fclose(stream);
    if ( v2 )
    {
      *v3 = v2;
      result = -1;
    }
  }
  return result;
}

int __fastcall sub_40C4A0(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_40C4E0(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_40C4E0(FILE *a1, __off_t a2, int a3)
{
  __off_t v3; // rax@2
  int v4; // er12@5
  int v5; // eax@5

  if ( a1->_IO_read_end != a1->_IO_read_ptr || a1->_IO_write_ptr != a1->_IO_write_base || a1->_IO_save_base )
  {
    LODWORD(v3) = fseeko(a1, a2, a3);
  }
  else
  {
    v4 = a3;
    v5 = fileno(a1);
    v3 = lseek(v5, a2, v4);
    if ( v3 != -1 )
    {
      a1->_flags &= 0xFFFFFFEF;
      a1->_offset = v3;
      LODWORD(v3) = 0;
    }
  }
  return v3;
}

__int64 __fastcall sub_40C540(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r11@1
  int v3; // er12@1
  int v4; // ebp@1
  __int64 v5; // rbx@1
  int v6; // er9@1
  int v7; // er10@1
  int v8; // er8@1
  int v9; // er14@4
  int v10; // edx@4
  __int64 *v11; // rax@5
  unsigned __int64 v12; // r13@5
  signed __int64 v13; // rdx@5
  __int64 v14; // rcx@6
  __int64 result; // rax@8
  __int64 *v16; // rax@9
  __int64 v17; // rdx@9
  __int64 v18; // rcx@10

  v2 = a1 + 8;
  v3 = *(_DWORD *)(a2 + 44);
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 48);
  v6 = *(_DWORD *)(a2 + 44);
  v7 = *(_DWORD *)a2;
  v8 = *(_DWORD *)(a2 + 48);
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
      v12 = v2 + 8 * (v6 + (unsigned __int64)(unsigned int)(v10 - 1));
      v13 = v7 - (signed __int64)v6;
      do
      {
        v14 = *v11;
        *v11 = v11[v13];
        v11[v13] = v14;
        ++v11;
      }
      while ( (__int64 *)v12 != v11 );
      if ( v7 <= v8 )
        break;
    }
  }
  *(_DWORD *)(a2 + 48) = v4;
  result = (unsigned int)(v4 - v8);
  *(_DWORD *)(a2 + 44) = result + v3;
  return result;
}

signed __int64 __fastcall sub_40C620(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
{
  const char *v9; // r14@1
  char *v10; // rbp@1
  size_t v11; // r13@5
  char **v12; // rbx@6
  __int64 v13; // r12@6
  const char *v14; // r15@6
  const char *v15; // rdi@12
  __int64 v16; // r15@12
  char **v17; // rbp@12
  char *v18; // rdx@26
  signed __int64 result; // rax@26
  int v20; // edx@31
  int v21; // eax@31
  int v22; // ecx@31
  char *v23; // rdx@35
  __int64 v24; // rbx@28
  char *v25; // rax@28
  __int64 v26; // rbx@49
  char *v27; // rax@49
  const char *v28; // r12@57
  __int64 v29; // rbp@57
  char *v30; // rax@57
  __int64 v31; // rbx@64
  __int64 v32; // rbp@64
  char *v33; // rax@64
  FILE *v34; // rdi@64
  char **v35; // rbx@64
  _BYTE *v36; // rbp@64
  signed __int64 v37; // r12@64
  char *v38; // r8@67
  const char *v39; // r12@62
  __int64 v40; // rbp@62
  char *v41; // rax@62
  char **v42; // [sp+0h] [bp-88h]@1
  int v43; // [sp+Ch] [bp-7Ch]@1
  char *s1; // [sp+10h] [bp-78h]@6
  char *s1a; // [sp+10h] [bp-78h]@12
  _BYTE *ptr; // [sp+18h] [bp-70h]@12
  _DWORD *v47; // [sp+20h] [bp-68h]@1
  char *s; // [sp+30h] [bp-58h]@1
  signed int v49; // [sp+38h] [bp-50h]@12
  char v50; // [sp+3Fh] [bp-49h]@1
  int v51; // [sp+40h] [bp-48h]@1
  signed int v52; // [sp+44h] [bp-44h]@12
  signed int v53; // [sp+48h] [bp-40h]@12

  v51 = a1;
  v9 = *(const char **)(a7 + 32);
  s = a3;
  v42 = a4;
  v47 = a5;
  v10 = *(char **)(a7 + 32);
  v43 = a6;
  v50 = *v9;
  if ( *v9 != 61 && *v9 )
  {
    do
      ++v10;
    while ( *v10 && *v10 != 61 );
    v11 = v10 - v9;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = a4;
  v13 = 0LL;
  s1 = *a4;
  v14 = *a4;
  if ( !*a4 )
  {
LABEL_24:
    if ( !v43 || *(_BYTE *)(a2[*(_DWORD *)a7] + 1) == 45 || (v18 = strchr(s, v50), result = 0xFFFFFFFFLL, !v18) )
    {
      if ( a8 )
      {
        v24 = *a2;
        v25 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v25, v24);
      }
      *(_QWORD *)(a7 + 32) = 0LL;
      ++*(_DWORD *)a7;
      *(_DWORD *)(a7 + 8) = 0;
      result = 63LL;
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
    v13 = (signed int)v13 + 1;
  }
  v12 = 0LL;
  v52 = -1;
  v15 = s1;
  v16 = 0LL;
  v49 = 0;
  v53 = 0;
  ptr = 0LL;
  s1a = v10;
  v17 = v42;
  do
  {
    if ( strncmp(v15, v9, v11) )
      goto LABEL_20;
    if ( v12 )
    {
      if ( (v43
         || *((_DWORD *)v12 + 2) != *((_DWORD *)v17 + 2)
         || v12[2] != v17[2]
         || *((_DWORD *)v12 + 6) != *((_DWORD *)v17 + 6))
        && !v49 )
      {
        if ( a8 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((signed int)v13 + 1, 1uLL);
          if ( ptr )
          {
            v53 = 1;
            ptr[v52] = 1;
LABEL_19:
            ptr[v16] = 1;
            goto LABEL_20;
          }
          v49 = 1;
        }
        else
        {
          v49 = 1;
          if ( ptr )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v52 = v16;
      v12 = v17;
    }
LABEL_20:
    v17 += 4;
    v15 = *v17;
    ++v16;
  }
  while ( *v17 );
  v10 = s1a;
  if ( ptr || v49 )
  {
    if ( a8 )
    {
      if ( v49 )
      {
        v26 = *a2;
        v27 = dcgettext(0LL, "%s: option '%s%s' is ambiguous\n", 5);
        __fprintf_chk(stderr, 1LL, v27, v26);
        v9 = *(const char **)(a7 + 32);
      }
      else
      {
        flockfile(stderr);
        v31 = *(_QWORD *)(a7 + 32);
        v32 = *a2;
        v33 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v33, v32);
        v34 = stderr;
        v35 = v42;
        v36 = ptr;
        v37 = (signed __int64)&ptr[v13 + 1];
        do
        {
          if ( *v36 )
          {
            v38 = *v35;
            __fprintf_chk(v34, 1LL, " '%s%s'", a9);
            v34 = stderr;
          }
          ++v36;
          v35 += 4;
        }
        while ( (_BYTE *)v37 != v36 );
        fputc(10, v34);
        funlockfile(stderr);
        v9 = *(const char **)(a7 + 32);
      }
    }
    if ( v53 )
      free(ptr);
    *(_QWORD *)(a7 + 32) = &v9[strlen(v9)];
    ++*(_DWORD *)a7;
    *(_DWORD *)(a7 + 8) = 0;
    result = 63LL;
  }
  else
  {
    if ( !v12 )
      goto LABEL_24;
    LODWORD(v13) = v52;
LABEL_31:
    v20 = *(_DWORD *)a7;
    *(_QWORD *)(a7 + 32) = 0LL;
    v21 = v20 + 1;
    *(_DWORD *)a7 = v20 + 1;
    v22 = *((_DWORD *)v12 + 2);
    if ( *v10 )
    {
      if ( v22 )
      {
        *(_QWORD *)(a7 + 16) = v10 + 1;
        goto LABEL_33;
      }
      if ( a8 )
      {
        v28 = *v12;
        v29 = *a2;
        v30 = dcgettext(0LL, "%s: option '%s%s' doesn't allow an argument\n", 5);
        __fprintf_chk(stderr, 1LL, v30, v29);
      }
      *(_DWORD *)(a7 + 8) = *((_DWORD *)v12 + 6);
      result = 63LL;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_33;
      if ( v21 >= v51 )
      {
        if ( a8 )
        {
          v39 = *v12;
          v40 = *a2;
          v41 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v41, v40);
        }
        *(_DWORD *)(a7 + 8) = *((_DWORD *)v12 + 6);
        result = 5 * (unsigned int)(*s != 58) + 58;
      }
      else
      {
        *(_DWORD *)a7 = v20 + 2;
        *(_QWORD *)(a7 + 16) = a2[v21];
LABEL_33:
        if ( v47 )
          *v47 = v13;
        v23 = v12[2];
        result = *((_DWORD *)v12 + 6);
        if ( v23 )
        {
          *(_DWORD *)v23 = result;
          result = 0LL;
        }
      }
    }
  }
  return result;
}

__int64 __fastcall sub_40CC40(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
{
  int v8; // er13@1
  signed int v9; // eax@2
  int v10; // ebp@2
  __int64 *v11; // r12@2
  char *v12; // r15@2
  _BYTE *v13; // rdx@6
  char v14; // al@8
  char v15; // al@9
  unsigned int v16; // eax@12
  bool v17; // cf@17
  bool v18; // zf@17
  signed __int64 v19; // rcx@18
  _BYTE *v20; // rdi@18
  __int64 v21; // r14@18
  _BYTE *v22; // rsi@18
  int v23; // edx@22
  int v24; // ecx@22
  int v25; // eax@22
  int v26; // er14@32
  char *v27; // rax@32
  signed __int64 v28; // r8@32
  char v29; // cl@36
  signed int v31; // edx@47
  int v32; // ST3C_4@49
  __int64 v33; // rax@51
  __int64 v34; // rcx@53
  int v35; // esi@53
  char v36; // cl@57
  int v37; // ST3C_4@62
  char *v38; // rax@62
  __int64 v39; // rax@69
  unsigned int v40; // eax@71
  int v41; // ST3C_4@73
  char *v42; // rax@73
  char v43; // dl@75
  __int64 v44; // rax@76
  int v45; // edx@78
  __int64 v46; // rax@78
  __int64 v47; // rbp@85
  char *v48; // rax@85
  __int64 v49; // rbp@94
  char *v50; // rax@94
  __int64 v51; // rbp@98
  char *v52; // rax@98
  char **v53; // [sp+8h] [bp-60h]@1
  _DWORD *v54; // [sp+10h] [bp-58h]@1
  char v55; // [sp+1Ch] [bp-4Ch]@32
  _BYTE *v56; // [sp+20h] [bp-48h]@32
  signed __int64 v57; // [sp+28h] [bp-40h]@32

  v53 = a4;
  v54 = a5;
  v8 = *(_DWORD *)(a7 + 4);
  if ( a1 <= 0 )
    goto LABEL_46;
  v9 = *(_DWORD *)a7;
  v10 = a1;
  v11 = (__int64 *)a2;
  v12 = a3;
  *(_QWORD *)(a7 + 16) = 0LL;
  if ( !v9 )
  {
    *(_DWORD *)a7 = 1;
    v9 = 1;
LABEL_4:
    *(_DWORD *)(a7 + 48) = v9;
    *(_DWORD *)(a7 + 44) = v9;
    *(_QWORD *)(a7 + 32) = 0LL;
    if ( *a3 == 45 )
    {
      *(_DWORD *)(a7 + 40) = 2;
      v12 = a3 + 1;
      v13 = 0LL;
    }
    else if ( *a3 == 43 )
    {
      *(_DWORD *)(a7 + 40) = 0;
      v12 = a3 + 1;
      v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
      if ( !a8 )
      {
        v41 = a6;
        v42 = getenv("POSIXLY_CORRECT");
        a6 = v41;
        if ( !v42 )
        {
          *(_DWORD *)(a7 + 40) = 1;
          v13 = *(_BYTE **)(a7 + 32);
          goto LABEL_27;
        }
        v13 = *(_BYTE **)(a7 + 32);
      }
      *(_DWORD *)(a7 + 40) = 0;
    }
LABEL_27:
    *(_DWORD *)(a7 + 24) = 1;
    v14 = *v12;
    goto LABEL_28;
  }
  if ( !*(_DWORD *)(a7 + 24) )
    goto LABEL_4;
  v14 = *a3;
  v13 = *(_BYTE **)(a7 + 32);
  if ( !((v14 - 43) & 0xFD) )
  {
    v15 = (v12++)[1];
    if ( v15 == 58 )
      v8 = 0;
    if ( !v13 )
      goto LABEL_12;
    goto LABEL_31;
  }
LABEL_28:
  if ( v14 == 58 )
    v8 = 0;
  if ( !v13 )
    goto LABEL_12;
LABEL_31:
  if ( !*v13 )
  {
LABEL_12:
    v16 = *(_DWORD *)a7;
    if ( *(_DWORD *)(a7 + 48) > *(_DWORD *)a7 )
      *(_DWORD *)(a7 + 48) = v16;
    if ( (signed int)v16 < *(_DWORD *)(a7 + 44) )
      *(_DWORD *)(a7 + 44) = v16;
    if ( *(_DWORD *)(a7 + 40) == 1 )
    {
      v31 = *(_DWORD *)(a7 + 48);
      if ( *(_DWORD *)(a7 + 44) == v31 )
      {
        if ( v16 != v31 )
        {
          *(_DWORD *)(a7 + 44) = v16;
          v31 = v16;
        }
      }
      else if ( v16 != v31 )
      {
        v32 = a6;
        sub_40C540(a2, a7);
        v31 = *(_DWORD *)a7;
        a6 = v32;
      }
      if ( a1 <= v31 )
      {
LABEL_82:
        v16 = v31;
      }
      else
      {
        v33 = v31;
        while ( 1 )
        {
          v34 = v11[v33];
          v35 = v33;
          v31 = v33;
          if ( *(_BYTE *)v34 == 45 )
          {
            if ( *(_BYTE *)(v34 + 1) )
              break;
          }
          v31 = v33++ + 1;
          *(_DWORD *)a7 = v35 + 1;
          if ( a1 <= (signed int)v33 )
            goto LABEL_82;
        }
        v16 = *(_DWORD *)a7;
      }
      *(_DWORD *)(a7 + 48) = v31;
    }
    v17 = a1 < v16;
    v18 = a1 == v16;
    if ( a1 == v16 )
    {
      v10 = *(_DWORD *)(a7 + 48);
      v23 = *(_DWORD *)(a7 + 44);
LABEL_44:
      if ( v23 != v10 )
        *(_DWORD *)a7 = v23;
      goto LABEL_46;
    }
    v19 = 3LL;
    v20 = "----" + 2;
    v21 = v11[v16];
    v22 = (_BYTE *)v11[v16];
    do
    {
      if ( !v19 )
        break;
      v17 = *v22 < *v20;
      v18 = *v22++ == *v20++;
      --v19;
    }
    while ( v18 );
    if ( (!v17 && !v18) == v17 )
    {
      v23 = *(_DWORD *)(a7 + 44);
      v24 = *(_DWORD *)(a7 + 48);
      v25 = v16 + 1;
      *(_DWORD *)a7 = v25;
      if ( v23 == v24 )
      {
        *(_DWORD *)(a7 + 44) = v25;
        v23 = v25;
      }
      else if ( v25 != v24 )
      {
        sub_40C540((__int64)v11, a7);
        v23 = *(_DWORD *)(a7 + 44);
      }
      *(_DWORD *)(a7 + 48) = v10;
      *(_DWORD *)a7 = v10;
      goto LABEL_44;
    }
    if ( *(_BYTE *)v21 == 45 )
    {
      v36 = *(_BYTE *)(v21 + 1);
      if ( v36 )
      {
        if ( v53 )
        {
          if ( v36 == 45 )
          {
            *(_QWORD *)(a7 + 32) = v21 + 2;
            v40 = sub_40C620(v10, v11, v12, v53, v54, a6, a7, v8, 4278841LL);
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_40C620(v10, v11, v12, v53, v54, a6, a7, v8, 4278842LL);
              if ( v26 != -1 )
                return (unsigned int)v26;
              v21 = v11[*(_DWORD *)a7];
            }
          }
        }
        v13 = (_BYTE *)(v21 + 1);
        goto LABEL_32;
      }
    }
    if ( *(_DWORD *)(a7 + 40) )
    {
      *(_QWORD *)(a7 + 16) = v21;
      v26 = 1;
      *(_DWORD *)a7 = v16 + 1;
      return (unsigned int)v26;
    }
LABEL_46:
    return (unsigned int)-1;
  }
LABEL_32:
  v56 = v13;
  *(_QWORD *)(a7 + 32) = v13 + 1;
  v26 = *v13;
  v57 = (signed __int64)(v13 + 1);
  v55 = *v13;
  v27 = strchr(v12, v26);
  v28 = v57;
  if ( !v56[1] )
    ++*(_DWORD *)a7;
  if ( (unsigned __int8)(v55 - 58) > 1u && v27 )
  {
    v29 = v27[1];
    if ( *v27 == 87 && v53 && v29 == 59 )
    {
      if ( v56[1] )
      {
LABEL_71:
        *(_QWORD *)(a7 + 32) = v28;
        *(_QWORD *)(a7 + 16) = 0LL;
        v40 = sub_40C620(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
LABEL_72:
        return v40;
      }
      v39 = *(_DWORD *)a7;
      if ( (_DWORD)v39 != v10 )
      {
        v28 = v11[v39];
        goto LABEL_71;
      }
      if ( v8 )
      {
        v51 = *v11;
        v52 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v52, v51);
      }
      *(_DWORD *)(a7 + 8) = v26;
      v26 = 5 * (*v12 != 58) + 58;
    }
    else if ( v29 == 58 )
    {
      v43 = v56[1];
      if ( v27[2] == 58 )
      {
        if ( v43 )
        {
          *(_QWORD *)(a7 + 16) = v57;
          ++*(_DWORD *)a7;
        }
        else
        {
          *(_QWORD *)(a7 + 16) = 0LL;
        }
      }
      else
      {
        v44 = *(_DWORD *)a7;
        if ( v43 )
        {
          *(_QWORD *)(a7 + 16) = v57;
          *(_DWORD *)a7 = v44 + 1;
        }
        else if ( v10 == (_DWORD)v44 )
        {
          if ( v8 )
          {
            v49 = *v11;
            v50 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v50, v49);
          }
          *(_DWORD *)(a7 + 8) = v26;
          v26 = 5 * (*v12 != 58) + 58;
        }
        else
        {
          v45 = v44 + 1;
          v46 = v11[v44];
          *(_DWORD *)a7 = v45;
          *(_QWORD *)(a7 + 16) = v46;
        }
      }
      *(_QWORD *)(a7 + 32) = 0LL;
    }
  }
  else
  {
    if ( v8 )
    {
      v47 = *v11;
      v48 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
      __fprintf_chk(stderr, 1LL, v48, v47);
    }
    *(_DWORD *)(a7 + 8) = v26;
    v26 = 63;
  }
  return (unsigned int)v26;
}

__int64 __fastcall sub_40D210(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_61B4A0 = dword_61B2FC;
  dword_61B4A4 = dword_61B2F8;
  result = sub_40CC40(a1, a2, a3, a4, a5, a6, (__int64)&dword_61B4A0, a7);
  dword_61B2FC = dword_61B4A0;
  qword_61B4F0 = qword_61B4B0;
  dword_61B2F4 = dword_61B4A8;
  return result;
}

__int64 __fastcall sub_40D290(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_40D210(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_40D310(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx@2
  wchar_t *v5; // r12@3
  char *v6; // rbp@3
  char v8; // [sp+Ch] [bp-1Ch]@7

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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40E130(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

signed __int64 __fastcall sub_40D390(signed __int64 a1, __int64 a2, int a3, int a4, int a5, signed int a6, int a7, int a8, int a9, int a10)
{
  signed int v10; // er10@1
  signed int v11; // er12@1

  v10 = (unsigned __int64)(a1 >> 2) + 475 - ((a1 & 3) == 0);
  v11 = (a6 >> 2) + 475 - ((a6 & 3) == 0);
  return a5
       + 60
       * (a4
        + 60
        * (a3
         + 24
         * ((signed int)(v10
                       - v11
                       - (v10 / 25
                        - ((unsigned int)(v10 % 25) >> 31)
                        - (v11 / 25
                         - ((unsigned int)(v11 % 25) >> 31)))
                       + ((signed int)(v10 / 25 - ((unsigned int)(v10 % 25) >> 31)) >> 2)
                       - ((signed int)(v11 / 25 - ((unsigned int)(v11 % 25) >> 31)) >> 2))
          + 365 * (a1 - a6)
          + a2
          - a7)
         - a8)
        - a9)
       - a10;
}

signed __int64 __fastcall sub_40D4B0(signed __int64 a1, __int64 a2, int a3, int a4, int a5, signed __int64 a6, __int64 a7)
{
  signed __int64 v7; // rbx@1
  signed __int64 v8; // rax@2
  unsigned __int8 v9; // of@2
  signed __int64 result; // rax@2

  v7 = a6;
  if ( !a7
    || (v8 = sub_40D390(
               a1,
               a2,
               a3,
               a4,
               a5,
               *(_DWORD *)(a7 + 20),
               *(_DWORD *)(a7 + 28),
               *(_DWORD *)(a7 + 8),
               *(_DWORD *)(a7 + 4),
               *(_DWORD *)a7),
        v9 = __OFADD__(v7, v8),
        result = v7 + v8,
        v9) )
  {
    if ( v7 < 0 )
    {
      if ( v7 >= -9223372036854775806LL )
        result = 0x8000000000000000LL;
      else
        result = v7 + 1;
    }
    else
    {
      result = 0x7FFFFFFFFFFFFFFFLL;
      if ( v7 > 9223372036854775805LL )
        result = v7 - 1;
    }
  }
  return result;
}

int __fastcall sub_40D550(int (__fastcall *a1)(__int64 *, __int64), __int64 *a2, __int64 a3)
{
  __int64 v3; // r13@1
  __int64 v4; // rax@1
  signed __int64 v5; // r14@3
  signed __int64 v6; // rbp@3
  signed __int64 v7; // rdx@6
  signed __int64 v8; // rbx@6
  __int64 v10; // [sp+8h] [bp-30h]@1

  v3 = a3;
  v10 = *a2;
  LODWORD(v4) = a1(&v10, a3);
  if ( !v4 )
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
        v10 = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        LODWORD(v4) = a1(&v10, v3);
        if ( !v4 )
        {
          v5 = v8;
          v8 = v6;
        }
        v6 = v8;
      }
      if ( !v4 && v6 )
      {
        v10 = v6;
        LODWORD(v4) = a1(&v10, v3);
      }
    }
  }
  return v4;
}

signed __int64 __fastcall sub_40DA50(__int64 a1)
{
  __int64 v1; // r14@1
  __int64 v2; // rsi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  signed __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  __int64 v10; // rsi@4
  int v11; // eax@6
  signed __int64 v12; // r13@8
  signed int v13; // er12@8
  signed __int64 v14; // r14@8
  __int64 v15; // rax@11
  __int64 v16; // r15@11
  signed __int64 result; // rax@11
  bool v18; // dl@15
  __int64 v19; // r14@17
  signed __int64 v20; // rdx@19
  unsigned __int8 v21; // of@19
  __int64 v22; // rax@19
  __int64 v23; // rax@20
  __m128i v24; // xmm1@22
  __m128i v25; // xmm2@22
  __int64 v26; // rdx@22
  signed int v27; // er13@30
  signed int v28; // er12@32
  int v29; // er15@32
  __int64 v30; // rdx@32
  int v31; // [sp+0h] [bp-10Ch]@1
  int v32; // [sp+Ch] [bp-100h]@1
  int v33; // [sp+10h] [bp-FCh]@8
  int v34; // [sp+1Ch] [bp-F0h]@1
  signed __int64 v35; // [sp+2Ch] [bp-E0h]@8
  signed int v36; // [sp+34h] [bp-D8h]@1
  int v37; // [sp+38h] [bp-D4h]@8
  __int64 v38; // [sp+3Ch] [bp-D0h]@8
  __int64 v39; // [sp+44h] [bp-C8h]@8
  __int64 v40; // [sp+4Ch] [bp-C0h]@32
  __m128i v41[4]; // [sp+54h] [bp-B8h]@11
  __m128i v42[4]; // [sp+64h] [bp-A8h]@22
  int v43; // [sp+74h] [bp-98h]@10
  __int64 v44; // [sp+84h] [bp-88h]@22
  __int64 v45; // [sp+94h] [bp-78h]@20
  int v46; // [sp+B4h] [bp-58h]@35
  __int64 v47; // [sp+DCh] [bp-30h]@1
  __int64 v48; // [sp+104h] [bp-8h]@1

  tzset();
  v1 = a1;
  v47 = v48;
  v2 = *(_DWORD *)(a1 + 12);
  v36 = *(_DWORD *)a1;
  v31 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v32 = v3;
  v34 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_4179C0[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v36 <= 59 )
    v8 = v36;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v33 = v11;
  v37 = -dword_61B4D8;
  v12 = sub_40D390(v6, v10, v32, v31, v11, 70, 0, 0, 0, -dword_61B4D8);
  v35 = v12;
  v39 = v12;
  v38 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    LODWORD(v15) = sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
    v16 = v39;
    result = sub_40D4B0(v6, v10, v32, v31, v33, v39, v15);
    if ( v16 == result )
      break;
    if ( v16 == v12 && v16 != v14 )
    {
      if ( v43 < 0 )
        goto LABEL_17;
      v18 = v43 != 0;
      if ( v34 < 0 )
      {
        if ( v18 >= v13 )
        {
LABEL_17:
          v19 = v38;
          result = v16;
          goto LABEL_18;
        }
      }
      else if ( (v34 != 0) != v18 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v39 = result;
    v12 = v14;
    v14 = v16;
    v13 = v43 != 0;
  }
  v19 = v38;
  if ( (v34 == 0) != (v43 == 0) && v34 >= 0 && v43 >= 0 )
  {
    v27 = 601200;
    do
    {
      v28 = 2;
      v29 = -v27;
      v30 = -v27;
      v40 = result + v30;
      if ( !__OFADD__(result, v30) )
      {
LABEL_35:
        sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v40, (__int64)&v45);
        if ( (v34 == 0) == (v46 == 0) || v46 < 0 )
        {
          v39 = sub_40D4B0(v6, v10, v32, v31, v33, v40, (__int64)&v45);
          sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
          result = v39;
          break;
        }
        result = v39;
      }
      while ( 1 )
      {
        v29 += 2 * v27;
        if ( v28 == 1 )
          break;
        v28 = 1;
        v40 = result + v29;
        if ( !__OFADD__(result, v29) )
          goto LABEL_35;
      }
      v27 += 601200;
    }
    while ( v27 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_61B4D8 = result - (v35 + v37);
  if ( v41[0].m128i_i32[0] == v36 )
    goto LABEL_22;
  v20 = ((v36 <= 0) & (unsigned __int8)(v41[0].m128i_i32[0] == 60)) - (signed __int64)v33 + v36;
  v21 = __OFADD__(v20, result);
  v22 = v20 + result;
  v39 = v22;
  if ( !v21 )
  {
    v45 = v22;
    LODWORD(v23) = ((int (__fastcall *)(__int64 *, __m128i *))localtime_r)(&v45, v41);
    if ( v23 )
    {
      result = v39;
LABEL_22:
      v24 = _mm_load_si128(v42);
      v25 = _mm_load_si128((const __m128i *)&v43);
      v26 = v44;
      *(__m128i *)v19 = _mm_load_si128(v41);
      *(__m128i *)(v19 + 16) = v24;
      *(__m128i *)(v19 + 32) = v25;
      *(_QWORD *)(v19 + 48) = v26;
      return result;
    }
  }
  return -1LL;
}

signed __int64 __fastcall sub_40DA50(__int64 a1)
{
  __int64 v1; // r14@1
  __int64 v2; // rsi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  signed __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  __int64 v10; // rsi@4
  int v11; // eax@6
  signed __int64 v12; // r13@8
  signed int v13; // er12@8
  signed __int64 v14; // r14@8
  __int64 v15; // rax@11
  __int64 v16; // r15@11
  signed __int64 result; // rax@11
  bool v18; // dl@15
  __int64 v19; // r14@17
  signed __int64 v20; // rdx@19
  unsigned __int8 v21; // of@19
  __int64 v22; // rax@19
  __int64 v23; // rax@20
  __m128i v24; // xmm1@22
  __m128i v25; // xmm2@22
  __int64 v26; // rdx@22
  signed int v27; // er13@30
  signed int v28; // er12@32
  int v29; // er15@32
  __int64 v30; // rdx@32
  int v31; // [sp+0h] [bp-10Ch]@1
  int v32; // [sp+Ch] [bp-100h]@1
  int v33; // [sp+10h] [bp-FCh]@8
  int v34; // [sp+1Ch] [bp-F0h]@1
  signed __int64 v35; // [sp+2Ch] [bp-E0h]@8
  signed int v36; // [sp+34h] [bp-D8h]@1
  int v37; // [sp+38h] [bp-D4h]@8
  __int64 v38; // [sp+3Ch] [bp-D0h]@8
  __int64 v39; // [sp+44h] [bp-C8h]@8
  __int64 v40; // [sp+4Ch] [bp-C0h]@32
  __m128i v41[4]; // [sp+54h] [bp-B8h]@11
  __m128i v42[4]; // [sp+64h] [bp-A8h]@22
  int v43; // [sp+74h] [bp-98h]@10
  __int64 v44; // [sp+84h] [bp-88h]@22
  __int64 v45; // [sp+94h] [bp-78h]@20
  int v46; // [sp+B4h] [bp-58h]@35
  __int64 v47; // [sp+DCh] [bp-30h]@1
  __int64 v48; // [sp+104h] [bp-8h]@1

  tzset();
  v1 = a1;
  v47 = v48;
  v2 = *(_DWORD *)(a1 + 12);
  v36 = *(_DWORD *)a1;
  v31 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v32 = v3;
  v34 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_4179C0[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v36 <= 59 )
    v8 = v36;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v33 = v11;
  v37 = -dword_61B4D8;
  v12 = sub_40D390(v6, v10, v32, v31, v11, 70, 0, 0, 0, -dword_61B4D8);
  v35 = v12;
  v39 = v12;
  v38 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    LODWORD(v15) = sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
    v16 = v39;
    result = sub_40D4B0(v6, v10, v32, v31, v33, v39, v15);
    if ( v16 == result )
      break;
    if ( v16 == v12 && v16 != v14 )
    {
      if ( v43 < 0 )
        goto LABEL_17;
      v18 = v43 != 0;
      if ( v34 < 0 )
      {
        if ( v18 >= v13 )
        {
LABEL_17:
          v19 = v38;
          result = v16;
          goto LABEL_18;
        }
      }
      else if ( (v34 != 0) != v18 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v39 = result;
    v12 = v14;
    v14 = v16;
    v13 = v43 != 0;
  }
  v19 = v38;
  if ( (v34 == 0) != (v43 == 0) && v34 >= 0 && v43 >= 0 )
  {
    v27 = 601200;
    do
    {
      v28 = 2;
      v29 = -v27;
      v30 = -v27;
      v40 = result + v30;
      if ( !__OFADD__(result, v30) )
      {
LABEL_35:
        sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v40, (__int64)&v45);
        if ( (v34 == 0) == (v46 == 0) || v46 < 0 )
        {
          v39 = sub_40D4B0(v6, v10, v32, v31, v33, v40, (__int64)&v45);
          sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
          result = v39;
          break;
        }
        result = v39;
      }
      while ( 1 )
      {
        v29 += 2 * v27;
        if ( v28 == 1 )
          break;
        v28 = 1;
        v40 = result + v29;
        if ( !__OFADD__(result, v29) )
          goto LABEL_35;
      }
      v27 += 601200;
    }
    while ( v27 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_61B4D8 = result - (v35 + v37);
  if ( v41[0].m128i_i32[0] == v36 )
    goto LABEL_22;
  v20 = ((v36 <= 0) & (unsigned __int8)(v41[0].m128i_i32[0] == 60)) - (signed __int64)v33 + v36;
  v21 = __OFADD__(v20, result);
  v22 = v20 + result;
  v39 = v22;
  if ( !v21 )
  {
    v45 = v22;
    LODWORD(v23) = ((int (__fastcall *)(__int64 *, __m128i *))localtime_r)(&v45, v41);
    if ( v23 )
    {
      result = v39;
LABEL_22:
      v24 = _mm_load_si128(v42);
      v25 = _mm_load_si128((const __m128i *)&v43);
      v26 = v44;
      *(__m128i *)v19 = _mm_load_si128(v41);
      *(__m128i *)(v19 + 16) = v24;
      *(__m128i *)(v19 + 32) = v25;
      *(_QWORD *)(v19 + 48) = v26;
      return result;
    }
  }
  return -1LL;
}

signed __int64 __fastcall sub_40DA50(__int64 a1)
{
  __int64 v1; // r14@1
  __int64 v2; // rsi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  signed __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  __int64 v10; // rsi@4
  int v11; // eax@6
  signed __int64 v12; // r13@8
  signed int v13; // er12@8
  signed __int64 v14; // r14@8
  __int64 v15; // rax@11
  __int64 v16; // r15@11
  signed __int64 result; // rax@11
  bool v18; // dl@15
  __int64 v19; // r14@17
  signed __int64 v20; // rdx@19
  unsigned __int8 v21; // of@19
  __int64 v22; // rax@19
  __int64 v23; // rax@20
  __m128i v24; // xmm1@22
  __m128i v25; // xmm2@22
  __int64 v26; // rdx@22
  signed int v27; // er13@30
  signed int v28; // er12@32
  int v29; // er15@32
  __int64 v30; // rdx@32
  int v31; // [sp+0h] [bp-10Ch]@1
  int v32; // [sp+Ch] [bp-100h]@1
  int v33; // [sp+10h] [bp-FCh]@8
  int v34; // [sp+1Ch] [bp-F0h]@1
  signed __int64 v35; // [sp+2Ch] [bp-E0h]@8
  signed int v36; // [sp+34h] [bp-D8h]@1
  int v37; // [sp+38h] [bp-D4h]@8
  __int64 v38; // [sp+3Ch] [bp-D0h]@8
  __int64 v39; // [sp+44h] [bp-C8h]@8
  __int64 v40; // [sp+4Ch] [bp-C0h]@32
  __m128i v41[4]; // [sp+54h] [bp-B8h]@11
  __m128i v42[4]; // [sp+64h] [bp-A8h]@22
  int v43; // [sp+74h] [bp-98h]@10
  __int64 v44; // [sp+84h] [bp-88h]@22
  __int64 v45; // [sp+94h] [bp-78h]@20
  int v46; // [sp+B4h] [bp-58h]@35
  __int64 v47; // [sp+DCh] [bp-30h]@1
  __int64 v48; // [sp+104h] [bp-8h]@1

  tzset();
  v1 = a1;
  v47 = v48;
  v2 = *(_DWORD *)(a1 + 12);
  v36 = *(_DWORD *)a1;
  v31 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v32 = v3;
  v34 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_4179C0[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v36 <= 59 )
    v8 = v36;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v33 = v11;
  v37 = -dword_61B4D8;
  v12 = sub_40D390(v6, v10, v32, v31, v11, 70, 0, 0, 0, -dword_61B4D8);
  v35 = v12;
  v39 = v12;
  v38 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    LODWORD(v15) = sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
    v16 = v39;
    result = sub_40D4B0(v6, v10, v32, v31, v33, v39, v15);
    if ( v16 == result )
      break;
    if ( v16 == v12 && v16 != v14 )
    {
      if ( v43 < 0 )
        goto LABEL_17;
      v18 = v43 != 0;
      if ( v34 < 0 )
      {
        if ( v18 >= v13 )
        {
LABEL_17:
          v19 = v38;
          result = v16;
          goto LABEL_18;
        }
      }
      else if ( (v34 != 0) != v18 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v39 = result;
    v12 = v14;
    v14 = v16;
    v13 = v43 != 0;
  }
  v19 = v38;
  if ( (v34 == 0) != (v43 == 0) && v34 >= 0 && v43 >= 0 )
  {
    v27 = 601200;
    do
    {
      v28 = 2;
      v29 = -v27;
      v30 = -v27;
      v40 = result + v30;
      if ( !__OFADD__(result, v30) )
      {
LABEL_35:
        sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v40, (__int64)&v45);
        if ( (v34 == 0) == (v46 == 0) || v46 < 0 )
        {
          v39 = sub_40D4B0(v6, v10, v32, v31, v33, v40, (__int64)&v45);
          sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
          result = v39;
          break;
        }
        result = v39;
      }
      while ( 1 )
      {
        v29 += 2 * v27;
        if ( v28 == 1 )
          break;
        v28 = 1;
        v40 = result + v29;
        if ( !__OFADD__(result, v29) )
          goto LABEL_35;
      }
      v27 += 601200;
    }
    while ( v27 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_61B4D8 = result - (v35 + v37);
  if ( v41[0].m128i_i32[0] == v36 )
    goto LABEL_22;
  v20 = ((v36 <= 0) & (unsigned __int8)(v41[0].m128i_i32[0] == 60)) - (signed __int64)v33 + v36;
  v21 = __OFADD__(v20, result);
  v22 = v20 + result;
  v39 = v22;
  if ( !v21 )
  {
    v45 = v22;
    LODWORD(v23) = ((int (__fastcall *)(__int64 *, __m128i *))localtime_r)(&v45, v41);
    if ( v23 )
    {
      result = v39;
LABEL_22:
      v24 = _mm_load_si128(v42);
      v25 = _mm_load_si128((const __m128i *)&v43);
      v26 = v44;
      *(__m128i *)v19 = _mm_load_si128(v41);
      *(__m128i *)(v19 + 16) = v24;
      *(__m128i *)(v19 + 32) = v25;
      *(_QWORD *)(v19 + 48) = v26;
      return result;
    }
  }
  return -1LL;
}

signed __int64 __fastcall sub_40DA50(__int64 a1)
{
  __int64 v1; // r14@1
  __int64 v2; // rsi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  signed __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  __int64 v10; // rsi@4
  int v11; // eax@6
  signed __int64 v12; // r13@8
  signed int v13; // er12@8
  signed __int64 v14; // r14@8
  __int64 v15; // rax@11
  __int64 v16; // r15@11
  signed __int64 result; // rax@11
  bool v18; // dl@15
  __int64 v19; // r14@17
  signed __int64 v20; // rdx@19
  unsigned __int8 v21; // of@19
  __int64 v22; // rax@19
  __int64 v23; // rax@20
  __m128i v24; // xmm1@22
  __m128i v25; // xmm2@22
  __int64 v26; // rdx@22
  signed int v27; // er13@30
  signed int v28; // er12@32
  int v29; // er15@32
  __int64 v30; // rdx@32
  int v31; // [sp+0h] [bp-10Ch]@1
  int v32; // [sp+Ch] [bp-100h]@1
  int v33; // [sp+10h] [bp-FCh]@8
  int v34; // [sp+1Ch] [bp-F0h]@1
  signed __int64 v35; // [sp+2Ch] [bp-E0h]@8
  signed int v36; // [sp+34h] [bp-D8h]@1
  int v37; // [sp+38h] [bp-D4h]@8
  __int64 v38; // [sp+3Ch] [bp-D0h]@8
  __int64 v39; // [sp+44h] [bp-C8h]@8
  __int64 v40; // [sp+4Ch] [bp-C0h]@32
  __m128i v41[4]; // [sp+54h] [bp-B8h]@11
  __m128i v42[4]; // [sp+64h] [bp-A8h]@22
  int v43; // [sp+74h] [bp-98h]@10
  __int64 v44; // [sp+84h] [bp-88h]@22
  __int64 v45; // [sp+94h] [bp-78h]@20
  int v46; // [sp+B4h] [bp-58h]@35
  __int64 v47; // [sp+DCh] [bp-30h]@1
  __int64 v48; // [sp+104h] [bp-8h]@1

  tzset();
  v1 = a1;
  v47 = v48;
  v2 = *(_DWORD *)(a1 + 12);
  v36 = *(_DWORD *)a1;
  v31 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v32 = v3;
  v34 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_4179C0[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v36 <= 59 )
    v8 = v36;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v33 = v11;
  v37 = -dword_61B4D8;
  v12 = sub_40D390(v6, v10, v32, v31, v11, 70, 0, 0, 0, -dword_61B4D8);
  v35 = v12;
  v39 = v12;
  v38 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    LODWORD(v15) = sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
    v16 = v39;
    result = sub_40D4B0(v6, v10, v32, v31, v33, v39, v15);
    if ( v16 == result )
      break;
    if ( v16 == v12 && v16 != v14 )
    {
      if ( v43 < 0 )
        goto LABEL_17;
      v18 = v43 != 0;
      if ( v34 < 0 )
      {
        if ( v18 >= v13 )
        {
LABEL_17:
          v19 = v38;
          result = v16;
          goto LABEL_18;
        }
      }
      else if ( (v34 != 0) != v18 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v39 = result;
    v12 = v14;
    v14 = v16;
    v13 = v43 != 0;
  }
  v19 = v38;
  if ( (v34 == 0) != (v43 == 0) && v34 >= 0 && v43 >= 0 )
  {
    v27 = 601200;
    do
    {
      v28 = 2;
      v29 = -v27;
      v30 = -v27;
      v40 = result + v30;
      if ( !__OFADD__(result, v30) )
      {
LABEL_35:
        sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v40, (__int64)&v45);
        if ( (v34 == 0) == (v46 == 0) || v46 < 0 )
        {
          v39 = sub_40D4B0(v6, v10, v32, v31, v33, v40, (__int64)&v45);
          sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
          result = v39;
          break;
        }
        result = v39;
      }
      while ( 1 )
      {
        v29 += 2 * v27;
        if ( v28 == 1 )
          break;
        v28 = 1;
        v40 = result + v29;
        if ( !__OFADD__(result, v29) )
          goto LABEL_35;
      }
      v27 += 601200;
    }
    while ( v27 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_61B4D8 = result - (v35 + v37);
  if ( v41[0].m128i_i32[0] == v36 )
    goto LABEL_22;
  v20 = ((v36 <= 0) & (unsigned __int8)(v41[0].m128i_i32[0] == 60)) - (signed __int64)v33 + v36;
  v21 = __OFADD__(v20, result);
  v22 = v20 + result;
  v39 = v22;
  if ( !v21 )
  {
    v45 = v22;
    LODWORD(v23) = ((int (__fastcall *)(__int64 *, __m128i *))localtime_r)(&v45, v41);
    if ( v23 )
    {
      result = v39;
LABEL_22:
      v24 = _mm_load_si128(v42);
      v25 = _mm_load_si128((const __m128i *)&v43);
      v26 = v44;
      *(__m128i *)v19 = _mm_load_si128(v41);
      *(__m128i *)(v19 + 16) = v24;
      *(__m128i *)(v19 + 32) = v25;
      *(_QWORD *)(v19 + 48) = v26;
      return result;
    }
  }
  return -1LL;
}

signed __int64 __fastcall sub_40DA50(__int64 a1)
{
  __int64 v1; // r14@1
  __int64 v2; // rsi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  signed __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  __int64 v10; // rsi@4
  int v11; // eax@6
  signed __int64 v12; // r13@8
  signed int v13; // er12@8
  signed __int64 v14; // r14@8
  __int64 v15; // rax@11
  __int64 v16; // r15@11
  signed __int64 result; // rax@11
  bool v18; // dl@15
  __int64 v19; // r14@17
  signed __int64 v20; // rdx@19
  unsigned __int8 v21; // of@19
  __int64 v22; // rax@19
  __int64 v23; // rax@20
  __m128i v24; // xmm1@22
  __m128i v25; // xmm2@22
  __int64 v26; // rdx@22
  signed int v27; // er13@30
  signed int v28; // er12@32
  int v29; // er15@32
  __int64 v30; // rdx@32
  int v31; // [sp+0h] [bp-10Ch]@1
  int v32; // [sp+Ch] [bp-100h]@1
  int v33; // [sp+10h] [bp-FCh]@8
  int v34; // [sp+1Ch] [bp-F0h]@1
  signed __int64 v35; // [sp+2Ch] [bp-E0h]@8
  signed int v36; // [sp+34h] [bp-D8h]@1
  int v37; // [sp+38h] [bp-D4h]@8
  __int64 v38; // [sp+3Ch] [bp-D0h]@8
  __int64 v39; // [sp+44h] [bp-C8h]@8
  __int64 v40; // [sp+4Ch] [bp-C0h]@32
  __m128i v41[4]; // [sp+54h] [bp-B8h]@11
  __m128i v42[4]; // [sp+64h] [bp-A8h]@22
  int v43; // [sp+74h] [bp-98h]@10
  __int64 v44; // [sp+84h] [bp-88h]@22
  __int64 v45; // [sp+94h] [bp-78h]@20
  int v46; // [sp+B4h] [bp-58h]@35
  __int64 v47; // [sp+DCh] [bp-30h]@1
  __int64 v48; // [sp+104h] [bp-8h]@1

  tzset();
  v1 = a1;
  v47 = v48;
  v2 = *(_DWORD *)(a1 + 12);
  v36 = *(_DWORD *)a1;
  v31 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v32 = v3;
  v34 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_4179C0[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v36 <= 59 )
    v8 = v36;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v33 = v11;
  v37 = -dword_61B4D8;
  v12 = sub_40D390(v6, v10, v32, v31, v11, 70, 0, 0, 0, -dword_61B4D8);
  v35 = v12;
  v39 = v12;
  v38 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    LODWORD(v15) = sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
    v16 = v39;
    result = sub_40D4B0(v6, v10, v32, v31, v33, v39, v15);
    if ( v16 == result )
      break;
    if ( v16 == v12 && v16 != v14 )
    {
      if ( v43 < 0 )
        goto LABEL_17;
      v18 = v43 != 0;
      if ( v34 < 0 )
      {
        if ( v18 >= v13 )
        {
LABEL_17:
          v19 = v38;
          result = v16;
          goto LABEL_18;
        }
      }
      else if ( (v34 != 0) != v18 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v39 = result;
    v12 = v14;
    v14 = v16;
    v13 = v43 != 0;
  }
  v19 = v38;
  if ( (v34 == 0) != (v43 == 0) && v34 >= 0 && v43 >= 0 )
  {
    v27 = 601200;
    do
    {
      v28 = 2;
      v29 = -v27;
      v30 = -v27;
      v40 = result + v30;
      if ( !__OFADD__(result, v30) )
      {
LABEL_35:
        sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v40, (__int64)&v45);
        if ( (v34 == 0) == (v46 == 0) || v46 < 0 )
        {
          v39 = sub_40D4B0(v6, v10, v32, v31, v33, v40, (__int64)&v45);
          sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
          result = v39;
          break;
        }
        result = v39;
      }
      while ( 1 )
      {
        v29 += 2 * v27;
        if ( v28 == 1 )
          break;
        v28 = 1;
        v40 = result + v29;
        if ( !__OFADD__(result, v29) )
          goto LABEL_35;
      }
      v27 += 601200;
    }
    while ( v27 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_61B4D8 = result - (v35 + v37);
  if ( v41[0].m128i_i32[0] == v36 )
    goto LABEL_22;
  v20 = ((v36 <= 0) & (unsigned __int8)(v41[0].m128i_i32[0] == 60)) - (signed __int64)v33 + v36;
  v21 = __OFADD__(v20, result);
  v22 = v20 + result;
  v39 = v22;
  if ( !v21 )
  {
    v45 = v22;
    LODWORD(v23) = ((int (__fastcall *)(__int64 *, __m128i *))localtime_r)(&v45, v41);
    if ( v23 )
    {
      result = v39;
LABEL_22:
      v24 = _mm_load_si128(v42);
      v25 = _mm_load_si128((const __m128i *)&v43);
      v26 = v44;
      *(__m128i *)v19 = _mm_load_si128(v41);
      *(__m128i *)(v19 + 16) = v24;
      *(__m128i *)(v19 + 32) = v25;
      *(_QWORD *)(v19 + 48) = v26;
      return result;
    }
  }
  return -1LL;
}

signed __int64 __fastcall sub_40DA50(__int64 a1)
{
  __int64 v1; // r14@1
  __int64 v2; // rsi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  signed __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  __int64 v10; // rsi@4
  int v11; // eax@6
  signed __int64 v12; // r13@8
  signed int v13; // er12@8
  signed __int64 v14; // r14@8
  __int64 v15; // rax@11
  __int64 v16; // r15@11
  signed __int64 result; // rax@11
  bool v18; // dl@15
  __int64 v19; // r14@17
  signed __int64 v20; // rdx@19
  unsigned __int8 v21; // of@19
  __int64 v22; // rax@19
  __int64 v23; // rax@20
  __m128i v24; // xmm1@22
  __m128i v25; // xmm2@22
  __int64 v26; // rdx@22
  signed int v27; // er13@30
  signed int v28; // er12@32
  int v29; // er15@32
  __int64 v30; // rdx@32
  int v31; // [sp+0h] [bp-10Ch]@1
  int v32; // [sp+Ch] [bp-100h]@1
  int v33; // [sp+10h] [bp-FCh]@8
  int v34; // [sp+1Ch] [bp-F0h]@1
  signed __int64 v35; // [sp+2Ch] [bp-E0h]@8
  signed int v36; // [sp+34h] [bp-D8h]@1
  int v37; // [sp+38h] [bp-D4h]@8
  __int64 v38; // [sp+3Ch] [bp-D0h]@8
  __int64 v39; // [sp+44h] [bp-C8h]@8
  __int64 v40; // [sp+4Ch] [bp-C0h]@32
  __m128i v41[4]; // [sp+54h] [bp-B8h]@11
  __m128i v42[4]; // [sp+64h] [bp-A8h]@22
  int v43; // [sp+74h] [bp-98h]@10
  __int64 v44; // [sp+84h] [bp-88h]@22
  __int64 v45; // [sp+94h] [bp-78h]@20
  int v46; // [sp+B4h] [bp-58h]@35
  __int64 v47; // [sp+DCh] [bp-30h]@1
  __int64 v48; // [sp+104h] [bp-8h]@1

  tzset();
  v1 = a1;
  v47 = v48;
  v2 = *(_DWORD *)(a1 + 12);
  v36 = *(_DWORD *)a1;
  v31 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v32 = v3;
  v34 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_4179C0[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v36 <= 59 )
    v8 = v36;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v33 = v11;
  v37 = -dword_61B4D8;
  v12 = sub_40D390(v6, v10, v32, v31, v11, 70, 0, 0, 0, -dword_61B4D8);
  v35 = v12;
  v39 = v12;
  v38 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    LODWORD(v15) = sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
    v16 = v39;
    result = sub_40D4B0(v6, v10, v32, v31, v33, v39, v15);
    if ( v16 == result )
      break;
    if ( v16 == v12 && v16 != v14 )
    {
      if ( v43 < 0 )
        goto LABEL_17;
      v18 = v43 != 0;
      if ( v34 < 0 )
      {
        if ( v18 >= v13 )
        {
LABEL_17:
          v19 = v38;
          result = v16;
          goto LABEL_18;
        }
      }
      else if ( (v34 != 0) != v18 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v39 = result;
    v12 = v14;
    v14 = v16;
    v13 = v43 != 0;
  }
  v19 = v38;
  if ( (v34 == 0) != (v43 == 0) && v34 >= 0 && v43 >= 0 )
  {
    v27 = 601200;
    do
    {
      v28 = 2;
      v29 = -v27;
      v30 = -v27;
      v40 = result + v30;
      if ( !__OFADD__(result, v30) )
      {
LABEL_35:
        sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v40, (__int64)&v45);
        if ( (v34 == 0) == (v46 == 0) || v46 < 0 )
        {
          v39 = sub_40D4B0(v6, v10, v32, v31, v33, v40, (__int64)&v45);
          sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
          result = v39;
          break;
        }
        result = v39;
      }
      while ( 1 )
      {
        v29 += 2 * v27;
        if ( v28 == 1 )
          break;
        v28 = 1;
        v40 = result + v29;
        if ( !__OFADD__(result, v29) )
          goto LABEL_35;
      }
      v27 += 601200;
    }
    while ( v27 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_61B4D8 = result - (v35 + v37);
  if ( v41[0].m128i_i32[0] == v36 )
    goto LABEL_22;
  v20 = ((v36 <= 0) & (unsigned __int8)(v41[0].m128i_i32[0] == 60)) - (signed __int64)v33 + v36;
  v21 = __OFADD__(v20, result);
  v22 = v20 + result;
  v39 = v22;
  if ( !v21 )
  {
    v45 = v22;
    LODWORD(v23) = ((int (__fastcall *)(__int64 *, __m128i *))localtime_r)(&v45, v41);
    if ( v23 )
    {
      result = v39;
LABEL_22:
      v24 = _mm_load_si128(v42);
      v25 = _mm_load_si128((const __m128i *)&v43);
      v26 = v44;
      *(__m128i *)v19 = _mm_load_si128(v41);
      *(__m128i *)(v19 + 16) = v24;
      *(__m128i *)(v19 + 32) = v25;
      *(_QWORD *)(v19 + 48) = v26;
      return result;
    }
  }
  return -1LL;
}

signed __int64 __fastcall sub_40DA50(__int64 a1)
{
  __int64 v1; // r14@1
  __int64 v2; // rsi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  signed __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  __int64 v10; // rsi@4
  int v11; // eax@6
  signed __int64 v12; // r13@8
  signed int v13; // er12@8
  signed __int64 v14; // r14@8
  __int64 v15; // rax@11
  __int64 v16; // r15@11
  signed __int64 result; // rax@11
  bool v18; // dl@15
  __int64 v19; // r14@17
  signed __int64 v20; // rdx@19
  unsigned __int8 v21; // of@19
  __int64 v22; // rax@19
  __int64 v23; // rax@20
  __m128i v24; // xmm1@22
  __m128i v25; // xmm2@22
  __int64 v26; // rdx@22
  signed int v27; // er13@30
  signed int v28; // er12@32
  int v29; // er15@32
  __int64 v30; // rdx@32
  int v31; // [sp+0h] [bp-10Ch]@1
  int v32; // [sp+Ch] [bp-100h]@1
  int v33; // [sp+10h] [bp-FCh]@8
  int v34; // [sp+1Ch] [bp-F0h]@1
  signed __int64 v35; // [sp+2Ch] [bp-E0h]@8
  signed int v36; // [sp+34h] [bp-D8h]@1
  int v37; // [sp+38h] [bp-D4h]@8
  __int64 v38; // [sp+3Ch] [bp-D0h]@8
  __int64 v39; // [sp+44h] [bp-C8h]@8
  __int64 v40; // [sp+4Ch] [bp-C0h]@32
  __m128i v41[4]; // [sp+54h] [bp-B8h]@11
  __m128i v42[4]; // [sp+64h] [bp-A8h]@22
  int v43; // [sp+74h] [bp-98h]@10
  __int64 v44; // [sp+84h] [bp-88h]@22
  __int64 v45; // [sp+94h] [bp-78h]@20
  int v46; // [sp+B4h] [bp-58h]@35
  __int64 v47; // [sp+DCh] [bp-30h]@1
  __int64 v48; // [sp+104h] [bp-8h]@1

  tzset();
  v1 = a1;
  v47 = v48;
  v2 = *(_DWORD *)(a1 + 12);
  v36 = *(_DWORD *)a1;
  v31 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v32 = v3;
  v34 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_4179C0[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v36 <= 59 )
    v8 = v36;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v33 = v11;
  v37 = -dword_61B4D8;
  v12 = sub_40D390(v6, v10, v32, v31, v11, 70, 0, 0, 0, -dword_61B4D8);
  v35 = v12;
  v39 = v12;
  v38 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    LODWORD(v15) = sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
    v16 = v39;
    result = sub_40D4B0(v6, v10, v32, v31, v33, v39, v15);
    if ( v16 == result )
      break;
    if ( v16 == v12 && v16 != v14 )
    {
      if ( v43 < 0 )
        goto LABEL_17;
      v18 = v43 != 0;
      if ( v34 < 0 )
      {
        if ( v18 >= v13 )
        {
LABEL_17:
          v19 = v38;
          result = v16;
          goto LABEL_18;
        }
      }
      else if ( (v34 != 0) != v18 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v39 = result;
    v12 = v14;
    v14 = v16;
    v13 = v43 != 0;
  }
  v19 = v38;
  if ( (v34 == 0) != (v43 == 0) && v34 >= 0 && v43 >= 0 )
  {
    v27 = 601200;
    do
    {
      v28 = 2;
      v29 = -v27;
      v30 = -v27;
      v40 = result + v30;
      if ( !__OFADD__(result, v30) )
      {
LABEL_35:
        sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v40, (__int64)&v45);
        if ( (v34 == 0) == (v46 == 0) || v46 < 0 )
        {
          v39 = sub_40D4B0(v6, v10, v32, v31, v33, v40, (__int64)&v45);
          sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
          result = v39;
          break;
        }
        result = v39;
      }
      while ( 1 )
      {
        v29 += 2 * v27;
        if ( v28 == 1 )
          break;
        v28 = 1;
        v40 = result + v29;
        if ( !__OFADD__(result, v29) )
          goto LABEL_35;
      }
      v27 += 601200;
    }
    while ( v27 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_61B4D8 = result - (v35 + v37);
  if ( v41[0].m128i_i32[0] == v36 )
    goto LABEL_22;
  v20 = ((v36 <= 0) & (unsigned __int8)(v41[0].m128i_i32[0] == 60)) - (signed __int64)v33 + v36;
  v21 = __OFADD__(v20, result);
  v22 = v20 + result;
  v39 = v22;
  if ( !v21 )
  {
    v45 = v22;
    LODWORD(v23) = ((int (__fastcall *)(__int64 *, __m128i *))localtime_r)(&v45, v41);
    if ( v23 )
    {
      result = v39;
LABEL_22:
      v24 = _mm_load_si128(v42);
      v25 = _mm_load_si128((const __m128i *)&v43);
      v26 = v44;
      *(__m128i *)v19 = _mm_load_si128(v41);
      *(__m128i *)(v19 + 16) = v24;
      *(__m128i *)(v19 + 32) = v25;
      *(_QWORD *)(v19 + 48) = v26;
      return result;
    }
  }
  return -1LL;
}

signed __int64 __fastcall sub_40DA50(__int64 a1)
{
  __int64 v1; // r14@1
  __int64 v2; // rsi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  signed __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  __int64 v10; // rsi@4
  int v11; // eax@6
  signed __int64 v12; // r13@8
  signed int v13; // er12@8
  signed __int64 v14; // r14@8
  __int64 v15; // rax@11
  __int64 v16; // r15@11
  signed __int64 result; // rax@11
  bool v18; // dl@15
  __int64 v19; // r14@17
  signed __int64 v20; // rdx@19
  unsigned __int8 v21; // of@19
  __int64 v22; // rax@19
  __int64 v23; // rax@20
  __m128i v24; // xmm1@22
  __m128i v25; // xmm2@22
  __int64 v26; // rdx@22
  signed int v27; // er13@30
  signed int v28; // er12@32
  int v29; // er15@32
  __int64 v30; // rdx@32
  int v31; // [sp+0h] [bp-10Ch]@1
  int v32; // [sp+Ch] [bp-100h]@1
  int v33; // [sp+10h] [bp-FCh]@8
  int v34; // [sp+1Ch] [bp-F0h]@1
  signed __int64 v35; // [sp+2Ch] [bp-E0h]@8
  signed int v36; // [sp+34h] [bp-D8h]@1
  int v37; // [sp+38h] [bp-D4h]@8
  __int64 v38; // [sp+3Ch] [bp-D0h]@8
  __int64 v39; // [sp+44h] [bp-C8h]@8
  __int64 v40; // [sp+4Ch] [bp-C0h]@32
  __m128i v41[4]; // [sp+54h] [bp-B8h]@11
  __m128i v42[4]; // [sp+64h] [bp-A8h]@22
  int v43; // [sp+74h] [bp-98h]@10
  __int64 v44; // [sp+84h] [bp-88h]@22
  __int64 v45; // [sp+94h] [bp-78h]@20
  int v46; // [sp+B4h] [bp-58h]@35
  __int64 v47; // [sp+DCh] [bp-30h]@1
  __int64 v48; // [sp+104h] [bp-8h]@1

  tzset();
  v1 = a1;
  v47 = v48;
  v2 = *(_DWORD *)(a1 + 12);
  v36 = *(_DWORD *)a1;
  v31 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v32 = v3;
  v34 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_4179C0[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v36 <= 59 )
    v8 = v36;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v33 = v11;
  v37 = -dword_61B4D8;
  v12 = sub_40D390(v6, v10, v32, v31, v11, 70, 0, 0, 0, -dword_61B4D8);
  v35 = v12;
  v39 = v12;
  v38 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    LODWORD(v15) = sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
    v16 = v39;
    result = sub_40D4B0(v6, v10, v32, v31, v33, v39, v15);
    if ( v16 == result )
      break;
    if ( v16 == v12 && v16 != v14 )
    {
      if ( v43 < 0 )
        goto LABEL_17;
      v18 = v43 != 0;
      if ( v34 < 0 )
      {
        if ( v18 >= v13 )
        {
LABEL_17:
          v19 = v38;
          result = v16;
          goto LABEL_18;
        }
      }
      else if ( (v34 != 0) != v18 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v39 = result;
    v12 = v14;
    v14 = v16;
    v13 = v43 != 0;
  }
  v19 = v38;
  if ( (v34 == 0) != (v43 == 0) && v34 >= 0 && v43 >= 0 )
  {
    v27 = 601200;
    do
    {
      v28 = 2;
      v29 = -v27;
      v30 = -v27;
      v40 = result + v30;
      if ( !__OFADD__(result, v30) )
      {
LABEL_35:
        sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v40, (__int64)&v45);
        if ( (v34 == 0) == (v46 == 0) || v46 < 0 )
        {
          v39 = sub_40D4B0(v6, v10, v32, v31, v33, v40, (__int64)&v45);
          sub_40D550((int (__fastcall *)(__int64 *, __int64))localtime_r, &v39, (__int64)v41);
          result = v39;
          break;
        }
        result = v39;
      }
      while ( 1 )
      {
        v29 += 2 * v27;
        if ( v28 == 1 )
          break;
        v28 = 1;
        v40 = result + v29;
        if ( !__OFADD__(result, v29) )
          goto LABEL_35;
      }
      v27 += 601200;
    }
    while ( v27 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_61B4D8 = result - (v35 + v37);
  if ( v41[0].m128i_i32[0] == v36 )
    goto LABEL_22;
  v20 = ((v36 <= 0) & (unsigned __int8)(v41[0].m128i_i32[0] == 60)) - (signed __int64)v33 + v36;
  v21 = __OFADD__(v20, result);
  v22 = v20 + result;
  v39 = v22;
  if ( !v21 )
  {
    v45 = v22;
    LODWORD(v23) = ((int (__fastcall *)(__int64 *, __m128i *))localtime_r)(&v45, v41);
    if ( v23 )
    {
      result = v39;
LABEL_22:
      v24 = _mm_load_si128(v42);
      v25 = _mm_load_si128((const __m128i *)&v43);
      v26 = v44;
      *(__m128i *)v19 = _mm_load_si128(v41);
      *(__m128i *)(v19 + 16) = v24;
      *(__m128i *)(v19 + 32) = v25;
      *(_QWORD *)(v19 + 48) = v26;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_40DA70(__int64 a1)
{
  int v1; // eax@2
  signed int v2; // edx@3

  if ( *(_BYTE *)(a1 + 8) )
    v1 = setenv("TZ", (const char *)(a1 + 9), 1);
  else
    v1 = unsetenv("TZ");
  v2 = 0;
  if ( !v1 )
  {
    tzset();
    v2 = 1;
  }
  return (unsigned int)v2;
}

void __fastcall sub_40DAC0(void *a1)
{
  void *v1; // rbx@2

  if ( a1 )
  {
    do
    {
      v1 = *(void **)a1;
      free(a1);
      a1 = v1;
    }
    while ( v1 );
  }
}

__int64 __fastcall sub_40DAF0(void *a1)
{
  int *v1; // rbx@1
  int v2; // er13@1
  unsigned int v3; // ebp@1

  v1 = __errno_location();
  v2 = *v1;
  v3 = sub_40DA70((__int64)a1);
  if ( !(_BYTE)v3 )
    v2 = *v1;
  sub_40DAC0(a1);
  *v1 = v2;
  return v3;
}

_BYTE *__fastcall sub_40DB40(void *src)
{
  void *v1; // r12@2
  size_t v2; // rax@2
  signed __int64 v3; // rdi@2
  size_t v4; // rbp@2
  void *v5; // rax@4
  _BYTE *v6; // rbx@4
  _BYTE *result; // rax@6

  if ( src )
  {
    v1 = src;
    v2 = strlen((const char *)src);
    v3 = 118LL;
    v4 = v2 + 1;
    if ( v2 + 1 >= 0x76 )
      v3 = v2 + 1;
    v5 = malloc((v3 + 17) & 0xFFFFFFFFFFFFFFF8LL);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = 0LL;
      *((_WORD *)v5 + 4) = 1;
      memcpy((char *)v5 + 9, v1, v4);
      v6[v4 + 9] = 0;
    }
    return v6;
  }
  result = malloc(0x80uLL);
  v6 = result;
  if ( !result )
    return v6;
  *(_QWORD *)result = 0LL;
  *((_WORD *)result + 4) = 0;
  return result;
}

signed __int64 __fastcall sub_40DBD0(__int64 a1, unsigned __int64 a2)
{
  const char *v2; // r12@1
  __int64 v3; // rbp@2
  signed __int64 result; // rax@3
  const char *v5; // rbx@4
  signed __int64 v6; // r14@7
  __int64 v7; // rax@10
  size_t v8; // r15@16
  const char *v9; // rax@16
  _BYTE *v10; // rax@21

  v2 = *(const char **)(a2 + 48);
  if ( !v2 )
    return 1LL;
  v3 = a1;
  if ( a2 > (unsigned __int64)v2 || (result = 1LL, (unsigned __int64)v2 >= a2 + 56) )
  {
    v5 = (const char *)(a1 + 9);
    if ( !*v2 )
    {
      v5 = "%s: invalid option -- '%c'\n" + 27;
      goto LABEL_12;
    }
LABEL_5:
    if ( !strcmp(v5, v2) )
      goto LABEL_12;
    while ( 1 )
    {
      if ( !*v5 )
      {
        v6 = v3 + 9;
        if ( (const char *)(v3 + 9) != v5 )
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
            memcpy((void *)v5, v2, v8);
            v5[v8] = 0;
            goto LABEL_12;
          }
          v10 = sub_40DB40((void *)v2);
          *(_QWORD *)v3 = v10;
          if ( v10 )
          {
            v10[8] = 0;
            v5 = v10 + 9;
LABEL_12:
            *(_QWORD *)(a2 + 48) = v5;
            result = 1LL;
          }
          else
          {
            result = 0LL;
          }
          return result;
        }
        if ( !*(_BYTE *)(v3 + 8) )
        {
          v8 = strlen(v2) + 1;
          v9 = 0LL;
          goto LABEL_19;
        }
      }
      v5 += strlen(v5) + 1;
      if ( *v5 )
        goto LABEL_5;
      v7 = *(_QWORD *)v3;
      if ( !*(_QWORD *)v3 )
        goto LABEL_5;
      v5 = (const char *)(v7 + 9);
      v3 = *(_QWORD *)v3;
      if ( !strcmp((const char *)(v7 + 9), v2) )
        goto LABEL_12;
    }
  }
  return result;
}

signed __int64 __fastcall sub_40DD50(__int64 a1)
{
  char *v1; // rax@1
  char *v2; // rbp@1
  _BYTE *v3; // rbx@3
  signed __int64 result; // rax@5
  int *v5; // rbp@10
  int v6; // er12@10

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
  if ( v3 && !(unsigned __int8)sub_40DA70(a1) )
  {
    v5 = __errno_location();
    v6 = *v5;
    if ( v3 != (_BYTE *)1 )
      sub_40DAC0(v3);
    *v5 = v6;
    result = 0LL;
  }
  else
  {
    result = (signed __int64)v3;
  }
  return result;
}

void __fastcall sub_40DE00(void *a1)
{
  if ( a1 != (void *)1 )
    sub_40DAC0(a1);
}

struct tm *__fastcall sub_40DE20(__int64 a1, const time_t *a2, struct tm *a3)
{
  struct tm *v3; // rbx@2
  void *v4; // r13@2
  struct tm *result; // rax@6

  if ( a1 )
  {
    v3 = a3;
    v4 = (void *)sub_40DD50(a1);
    if ( v4 )
    {
      if ( localtime_r(a2, v3) && (unsigned __int8)sub_40DBD0(a1, (unsigned __int64)v3) )
      {
        if ( v4 == (void *)1 || (unsigned __int8)sub_40DAF0(v4) )
          return v3;
      }
      else if ( v4 != (void *)1 )
      {
        sub_40DAF0(v4);
      }
    }
    result = 0LL;
  }
  else
  {
    result = gmtime_r(a2, a3);
  }
  return result;
}

int __fastcall sub_40DED0(__int64 a1, unsigned __int64 a2)
{
  void *v2; // r12@2
  int result; // eax@8
  int v4; // eax@11
  time_t timer; // [sp+8h] [bp-60h]@3
  struct tm tp; // [sp+10h] [bp-58h]@10

  if ( a1 )
  {
    v2 = (void *)sub_40DD50(a1);
    if ( !v2 )
      goto LABEL_20;
    timer = sub_40DA50(a2);
    if ( timer != -1
      || localtime_r(&timer, &tp)
      && ((v4 = *(_DWORD *)(a2 + 32), (v4 == 0) == (tp.tm_isdst == 0)) || v4 < 0 || tp.tm_isdst < 0)
      && !(tp.tm_sec ^ *(_DWORD *)a2 | tp.tm_min ^ *(_DWORD *)(a2 + 4) | tp.tm_hour ^ *(_DWORD *)(a2 + 8) | tp.tm_mday ^ *(_DWORD *)(a2 + 12) | tp.tm_year ^ *(_DWORD *)(a2 + 20) | tp.tm_mon ^ *(_DWORD *)(a2 + 16)) )
    {
      if ( !(unsigned __int8)sub_40DBD0(a1, a2) )
        timer = -1LL;
    }
    if ( v2 == (void *)1 || (unsigned __int8)sub_40DAF0(v2) )
      result = timer;
    else
LABEL_20:
      result = -1;
  }
  else
  {
    result = sub_40DFF0(a2);
  }
  return result;
}

void __fastcall sub_40DFF0(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 0;
  JUMPOUT(&loc_40D610);
}

__int64 __fastcall sub_40E010(FILE *s, __int64 a2, __int64 a3)
{
  char *v3; // rax@1
  unsigned __int64 v4; // rbx@1
  char *v5; // rbp@2
  int *v7; // rax@8
  int v8; // er13@8
  int *v9; // r12@8
  size_t n; // [sp+8h] [bp-800h]@1
  char v11; // [sp+10h] [bp-7F8h]@1

  n = 2000LL;
  LODWORD(v3) = sub_40FFA0(&v11, &n, a2, a3);
  v4 = n;
  if ( !v3 )
    goto LABEL_10;
  v5 = v3;
  if ( fwrite(v3, 1uLL, n, s) >= v4 )
  {
    if ( v5 != &v11 )
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
  if ( v5 != &v11 )
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
  size_t v1; // r12@1
  int v2; // ebx@1
  int result; // eax@1

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
  }
  else
  {
    if ( !result )
      return result;
    if ( !v1 )
      return -(*__errno_location() != 9);
  }
  return -1;
}

bool __fastcall sub_40E130(int a1)
{
  char *v1; // rdx@1
  bool result; // al@1
  bool v3; // cf@1
  bool v4; // zf@1
  signed __int64 v5; // rcx@2
  const char *v6; // rdi@2
  char *v7; // rsi@2
  char v8; // cl@5
  bool v9; // cf@5
  bool v10; // zf@5
  const char *v11; // rdi@7
  signed __int64 v12; // rcx@7
  char *v13; // rsi@7

  v1 = setlocale(a1, 0LL);
  result = 1;
  v3 = 0;
  v4 = v1 == 0LL;
  if ( v1 )
  {
    v5 = 2LL;
    v6 = "C";
    v7 = v1;
    do
    {
      if ( !v5 )
        break;
      v3 = (unsigned __int8)*v7 < *v6;
      v4 = *v7++ == *v6++;
      --v5;
    }
    while ( v4 );
    v8 = (!v3 && !v4) - v3;
    result = 0;
    v9 = 0;
    v10 = v8 == 0;
    if ( v8 )
    {
      v11 = "POSIX";
      v12 = 6LL;
      v13 = v1;
      do
      {
        if ( !v12 )
          break;
        v9 = (unsigned __int8)*v13 < *v11;
        v10 = *v13++ == *v11++;
        --v12;
      }
      while ( v10 );
      result = (!v9 && !v10) != v9;
    }
  }
  return result;
}

const char *sub_40E190()
{
  char *v0; // rax@1
  char *v1; // r15@1
  const char *v2; // rbx@1
  char v3; // bp@4
  size_t v4; // rax@6
  char *v6; // rax@14
  const char *v7; // r13@14
  size_t v8; // rax@16
  signed __int64 v9; // r12@16
  size_t v10; // r14@16
  size_t v11; // rdi@17
  char *v12; // rax@18
  const char *v13; // rbp@18
  size_t v14; // rdi@21
  char *v15; // rax@22
  const char *v16; // r12@24
  int v17; // eax@24
  int v18; // er12@24
  FILE *v19; // r13@28
  const char *v20; // rax@29
  _IO_FILE *v21; // rbx@29
  const char *v22; // r13@29
  char *v23; // rax@30
  int v24; // edi@31
  char *v25; // kr00_8@36
  char *v26; // rdx@36
  int v27; // esi@37
  unsigned int v28; // eax@37
  signed __int64 v29; // rdx@42
  signed __int64 v30; // rax@42
  char *v31; // rax@43
  signed __int64 v32; // rcx@43
  __int64 v33; // rdx@43
  signed __int64 v34; // rsi@45
  unsigned int v35; // ecx@45
  signed __int64 v36; // rdi@45
  char *v37; // rsi@45
  unsigned int v38; // edx@50
  char *v39; // rcx@50
  FILE *v40; // rdi@57
  int v41; // eax@59
  bool v42; // dl@59
  char *v43; // rax@62
  signed __int64 v44; // rax@64
  unsigned __int64 v45; // r9@65
  char *v46; // rsi@65
  char *v47; // r10@65
  unsigned int v48; // ecx@65
  unsigned int v49; // ecx@66
  unsigned int v50; // esi@66
  __int64 v51; // r8@67
  unsigned __int64 v52; // rdi@69
  char *v53; // rcx@69
  char *v54; // r9@69
  unsigned int v55; // edx@69
  unsigned int v56; // edx@70
  unsigned int v57; // ecx@70
  __int64 v58; // rsi@71
  const char *v59; // rax@80
  char *v60; // rdi@80
  FILE *v61; // r13@80
  signed __int64 v62; // [sp+8h] [bp-D0h]@28
  __int64 v63; // [sp+18h] [bp-C0h]@42
  char v64[64]; // [sp+20h] [bp-B8h]@35
  char v65[120]; // [sp+60h] [bp-78h]@35

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
          v1 = "%s: invalid option -- '%c'\n" + 27;
LABEL_20:
          s = v1;
          goto LABEL_4;
        }
        memcpy(v12, v7, v10);
LABEL_24:
        v16 = &v13[v9];
        *(_QWORD *)v16 = 3347411969557751907LL;
        *((_WORD *)v16 + 6) = 115;
        *((_DWORD *)v16 + 2) = 1634298977;
        v17 = open(v13, 0);
        v18 = v17;
        if ( v17 >= 0 )
        {
          v1 = 0LL;
          v62 = 0LL;
          v19 = fdopen(v17, "r");
          if ( v19 )
          {
            v20 = v2;
            v21 = v19;
            v22 = v20;
LABEL_30:
            v23 = v21->_IO_read_ptr;
            if ( v23 < v21->_IO_read_end )
            {
LABEL_31:
              v21->_IO_read_ptr = v23 + 1;
              v24 = (unsigned __int8)*v23;
              goto LABEL_32;
            }
            while ( 1 )
            {
              v24 = __uflow(v21);
              if ( v24 == -1 )
                break;
LABEL_32:
              if ( (unsigned int)(v24 - 9) <= 1 || v24 == 32 )
                goto LABEL_30;
              if ( v24 == 35 )
              {
                do
                {
                  v43 = v21->_IO_read_ptr;
                  if ( v43 < v21->_IO_read_end )
                  {
                    v21->_IO_read_ptr = v43 + 1;
                    v41 = (unsigned __int8)*v43;
                    v42 = 1;
                  }
                  else
                  {
                    v41 = __uflow(v21);
                    v42 = v41 != -1;
                  }
                }
                while ( v41 != 10 && v42 );
                if ( v41 == -1 )
                  break;
                goto LABEL_30;
              }
              ungetc(v24, v21);
              if ( fscanf(v21, "%50s %50s", v64, v65) <= 1 )
                break;
              v25 = &v64[strlen(v64)];
              v26 = v65;
              do
              {
                v27 = *(_DWORD *)v26;
                v26 += 4;
                v28 = ~v27 & (v27 - 16843009) & 0x80808080;
              }
              while ( !v28 );
              if ( !(~v27 & (v27 - 16843009) & 0x8080) )
                v28 >>= 16;
              if ( !(~v27 & (v27 - 16843009) & 0x8080) )
                v26 += 2;
              v29 = &v26[-__CFADD__((_BYTE)v28, (_BYTE)v28) - 3] - v65;
              v30 = v25 - v64 + v29;
              v63 = v29;
              if ( v62 )
              {
                v44 = v62 + v30;
                v62 = v44 + 2;
                v31 = (char *)realloc(v1, v44 + 3);
                v33 = v63;
                v32 = v25 - v64;
              }
              else
              {
                v62 = v30 + 2;
                v31 = (char *)malloc(v30 + 3);
                v32 = v25 - v64;
                v33 = v63;
              }
              if ( !v31 )
              {
                v59 = v22;
                v60 = v1;
                v61 = v21;
                v1 = "%s: invalid option -- '%c'\n" + 27;
                v2 = v59;
                free(v60);
                sub_40C420(v61);
                goto LABEL_26;
              }
              v34 = -2 - v32;
              v35 = v32 + 1;
              v36 = v62 - v33;
              v37 = &v31[v62 - v33] + v34;
              if ( v35 >= 8 )
              {
                *(_QWORD *)v37 = *(_QWORD *)v64;
                *(_QWORD *)&v37[v35 - 8] = *(_QWORD *)&v64[v35 - 8];
                v45 = (unsigned __int64)(v37 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v46 = &v37[-v45];
                v47 = (char *)(v64 - v46);
                v48 = ((_DWORD)v46 + v35) & 0xFFFFFFF8;
                if ( v48 >= 8 )
                {
                  v49 = v48 & 0xFFFFFFF8;
                  v50 = 0;
                  do
                  {
                    v51 = v50;
                    v50 += 8;
                    *(_QWORD *)(v45 + v51) = *(_QWORD *)&v47[v51];
                  }
                  while ( v50 < v49 );
                }
              }
              else if ( v35 & 4 )
              {
                *(_DWORD *)v37 = *(_DWORD *)v64;
                *(_DWORD *)&v37[v35 - 4] = *(_DWORD *)&v64[v35 - 4];
              }
              else if ( v35 )
              {
                *v37 = v64[0];
                if ( v35 & 2 )
                  *(_WORD *)&v37[v35 - 2] = *(_WORD *)&v64[v35 - 2];
              }
              v38 = v33 + 1;
              v39 = &v31[v36 - 1];
              if ( v38 >= 8 )
              {
                *(_QWORD *)v39 = *(_QWORD *)v65;
                *(_QWORD *)&v39[v38 - 8] = *(_QWORD *)&v65[v38 - 8];
                v52 = (unsigned __int64)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v53 = &v39[-v52];
                v54 = (char *)(v65 - v53);
                v55 = ((_DWORD)v53 + v38) & 0xFFFFFFF8;
                if ( v55 >= 8 )
                {
                  v56 = v55 & 0xFFFFFFF8;
                  v57 = 0;
                  do
                  {
                    v58 = v57;
                    v57 += 8;
                    *(_QWORD *)(v52 + v58) = *(_QWORD *)&v54[v58];
                  }
                  while ( v57 < v56 );
                }
              }
              else if ( v38 & 4 )
              {
                *(_DWORD *)v39 = *(_DWORD *)v65;
                *(_DWORD *)&v39[v38 - 4] = *(_DWORD *)&v65[v38 - 4];
              }
              else if ( v38 )
              {
                *v39 = v65[0];
                if ( v38 & 2 )
                  *(_WORD *)&v39[v38 - 2] = *(_WORD *)&v65[v38 - 2];
              }
              v1 = v31;
              v23 = v21->_IO_read_ptr;
              if ( v23 < v21->_IO_read_end )
                goto LABEL_31;
            }
            v40 = v21;
            v2 = v22;
            sub_40C420(v40);
            if ( !v62 )
              goto LABEL_25;
            v1[v62] = 0;
            goto LABEL_26;
          }
          close(v18);
        }
LABEL_25:
        v1 = "%s: invalid option -- '%c'\n" + 27;
LABEL_26:
        free((void *)v13);
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
      v4 = strlen(v1);
      v1 += v4 + strlen(&v1[v4 + 1]) + 2;
      v3 = *v1;
      if ( !*v1 )
        goto LABEL_11;
    }
    v2 = &v1[strlen(v1) + 1];
  }
LABEL_11:
  if ( !*v2 )
    v2 = "ASCII";
  return v2;
}

__int64 __fastcall sub_40E700(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rbx@2
  const __int32_t **v4; // rax@2

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_tolower_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(_BYTE *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __fastcall sub_40E750(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rbx@2
  const __int32_t **v4; // rax@2

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_toupper_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(_BYTE *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __usercall sub_40E7A0@<rax>(void *s@<rdi>, char *a2@<rdx>, __int64 a3@<rcx>, __int64 a4@<rsi>, char a5@<r8b>, __int64 a6, int a7)
{
  char *v7; // r15@1
  signed __int64 v8; // rbx@1
  signed __int64 v9; // r12@1
  signed int v10; // er11@1
  char v11; // al@5
  __int64 v12; // r14@5
  _BYTE *v13; // r8@11
  char v15; // r11@21
  char v16; // r8@21
  signed int i; // er12@21
  signed int v18; // eax@22
  char v19; // cl@22
  signed int v20; // er9@22
  bool v21; // zf@22
  bool v22; // sf@22
  unsigned __int8 v23; // of@22
  int v24; // ebp@28
  signed int v25; // eax@38
  int v26; // edx@38
  int v27; // edi@39
  char *v28; // rax@51
  signed __int64 v29; // r8@51
  char v30; // r13@51
  size_t v31; // rax@52
  unsigned __int64 v32; // rcx@53
  unsigned __int64 v33; // rbx@55
  size_t v34; // rdx@61
  char *v35; // rdi@62
  char *v36; // rsi@63
  size_t v37; // rdx@63
  char *v38; // rdi@63
  unsigned __int64 v39; // rcx@65
  char v40; // ST50_1@72
  char *v41; // r13@72
  __m128i v42; // xmm4@72
  __m128i v43; // xmm2@72
  __int64 v44; // rax@72
  signed __int64 v45; // rax@72
  signed __int64 v46; // rsi@72
  signed __int64 v47; // rcx@72
  signed __int64 v48; // rdx@73
  signed __int64 v49; // rax@73
  char v50; // al@73
  char v51; // dl@73
  signed int v52; // er10@76
  char *v53; // rcx@79
  unsigned __int64 v54; // rax@79
  size_t v55; // r9@80
  unsigned __int64 v56; // r9@81
  size_t v57; // rdx@90
  char *v58; // rdi@91
  unsigned __int64 v59; // r10@94
  unsigned __int64 v60; // rax@94
  unsigned __int64 v61; // rsi@96
  size_t v62; // rdx@101
  char *v63; // rdi@102
  unsigned __int64 v64; // ST58_8@103
  int v65; // er10@108
  int v66; // er13@108
  signed int v67; // edi@108
  signed int v68; // er8@108
  int v69; // eax@109
  signed int v70; // er13@112
  int v71; // er13@114
  int v72; // edi@117
  int v73; // esi@117
  int v74; // edi@120
  unsigned int v75; // er8@120
  unsigned __int64 v76; // r13@127
  unsigned __int64 v77; // rax@127
  unsigned __int64 v78; // rsi@129
  char v79; // r11@133
  char v80; // r8@133
  size_t v81; // rdx@134
  char *v82; // rdi@135
  signed int v83; // esi@164
  unsigned __int64 v84; // r13@165
  size_t v85; // rdx@172
  char *v86; // rdi@173
  char *v87; // rcx@178
  signed __int64 v88; // rax@180
  unsigned __int64 v89; // rdx@193
  unsigned __int64 v90; // rsi@193
  size_t v91; // rdx@201
  char *v92; // rdi@202
  char *v93; // ST68_8@205
  signed int v94; // ST60_4@205
  _BYTE *v95; // ST58_8@205
  char v96; // ST50_1@205
  size_t v97; // ST40_8@205
  size_t v98; // rdx@214
  char *v99; // rdi@215
  signed int v100; // esi@220
  signed int v101; // edi@226
  int v102; // edx@226
  int v103; // esi@229
  int v104; // edx@229
  signed __int64 v105; // rax@237
  _BYTE *v106; // r9@238
  unsigned __int64 v107; // rcx@238
  unsigned __int64 v108; // rax@239
  unsigned __int64 v109; // rdx@239
  size_t v110; // rdx@246
  char *v111; // rdi@247
  unsigned __int64 v112; // rcx@249
  signed __int64 j; // r13@252
  __int64 v114; // rsi@254
  int v115; // eax@257
  int v116; // esi@257
  char v117; // cl@261
  signed int v118; // esi@273
  size_t v119; // rdx@282
  char *v120; // rdi@283
  int v121; // eax@287
  int v122; // eax@288
  char v123; // al@291
  signed __int64 v124; // rdx@291
  char v125; // cl@298
  unsigned __int64 v126; // r12@299
  char v127; // ST68_1@307
  unsigned __int64 v128; // ST60_8@307
  char v129; // ST50_1@307
  char *v130; // rdi@312
  unsigned __int64 v131; // r8@313
  size_t v132; // rdx@321
  __int64 v133; // r12@326
  char *v134; // rdi@328
  int v135; // ST60_4@328
  signed int v136; // ST58_4@328
  char v137; // ST50_1@328
  int v138; // eax@329
  char *v139; // rdi@333
  char *v140; // rdi@335
  unsigned __int64 v141; // rcx@338
  char *v142; // rdi@344
  unsigned __int64 v143; // ST68_8@344
  char v144; // ST58_1@344
  char *v145; // rdi@347
  signed int v146; // esi@348
  int v147; // edx@348
  int v148; // er10@351
  int v149; // esi@351
  int v150; // edi@353
  int v151; // esi@357
  int v152; // eax@361
  int v153; // eax@361
  int v154; // esi@362
  int v155; // esi@365
  char *v156; // rdi@370
  char *v157; // rdi@371
  char *v158; // rdi@373
  char *v159; // rdi@374
  char *v160; // rdi@375
  __int64 v161; // [sp+0h] [bp-4C8h]@1
  struct tm *tp; // [sp+8h] [bp-4C0h]@1
  char *v163; // [sp+20h] [bp-4A8h]@6
  char v164; // [sp+2Bh] [bp-49Dh]@3
  int v165; // [sp+2Ch] [bp-49Ch]@6
  _BYTE *v166; // [sp+30h] [bp-498h]@52
  char v167; // [sp+30h] [bp-498h]@61
  unsigned __int64 v168; // [sp+30h] [bp-498h]@63
  char v169; // [sp+30h] [bp-498h]@90
  signed int v170; // [sp+30h] [bp-498h]@108
  char v171; // [sp+30h] [bp-498h]@120
  char v172; // [sp+30h] [bp-498h]@189
  char v173; // [sp+30h] [bp-498h]@246
  unsigned __int64 v174; // [sp+30h] [bp-498h]@248
  int v175; // [sp+30h] [bp-498h]@257
  char v176; // [sp+40h] [bp-488h]@52
  _BYTE *v177; // [sp+40h] [bp-488h]@61
  _BYTE *v178; // [sp+40h] [bp-488h]@63
  _BYTE *v179; // [sp+40h] [bp-488h]@90
  char v180; // [sp+40h] [bp-488h]@127
  char v181; // [sp+40h] [bp-488h]@201
  _BYTE *v182; // [sp+40h] [bp-488h]@246
  _BYTE *v183; // [sp+40h] [bp-488h]@248
  char *v184; // [sp+40h] [bp-488h]@321
  signed int v185; // [sp+48h] [bp-480h]@52
  unsigned __int64 v186; // [sp+48h] [bp-480h]@61
  char *v187; // [sp+48h] [bp-480h]@90
  char v188; // [sp+48h] [bp-480h]@125
  _BYTE *v189; // [sp+48h] [bp-480h]@246
  char v190; // [sp+48h] [bp-480h]@321
  unsigned __int64 v191; // [sp+50h] [bp-478h]@101
  unsigned __int64 v192; // [sp+50h] [bp-478h]@246
  size_t v193; // [sp+58h] [bp-470h]@201
  unsigned __int64 v194; // [sp+58h] [bp-470h]@321
  unsigned __int64 v195; // [sp+60h] [bp-468h]@321
  char format[2]; // [sp+70h] [bp-458h]@51
  char v197; // [sp+72h] [bp-456h]@51
  char v198; // [sp+73h] [bp-455h]@124
  char v199[9]; // [sp+87h] [bp-441h]@72
  char sa[16]; // [sp+90h] [bp-438h]@52
  __m128i v201; // [sp+A0h] [bp-428h]@72
  __m128i v202; // [sp+B0h] [bp-418h]@72
  __int64 v203; // [sp+C0h] [bp-408h]@72

  v7 = (char *)s;
  v8 = (signed __int64)a2;
  v9 = *(_QWORD *)(a3 + 48);
  v10 = *(_DWORD *)(a3 + 8);
  v161 = a4;
  tp = (struct tm *)a3;
  if ( !v9 )
    v9 = 4290980LL;
  v164 = a5;
  if ( v10 <= 12 )
  {
    if ( !v10 )
      v10 = 12;
  }
  else
  {
    v10 -= 12;
  }
  v11 = *a2;
  v12 = 0LL;
  if ( !*a2 )
  {
LABEL_13:
    if ( v7 && v161 )
      *v7 = 0;
    return v12;
  }
  v165 = v10;
  v163 = (char *)v9;
  while ( v11 != 37 )
  {
    if ( (unsigned __int64)(v161 - v12) <= 1 )
      return 0LL;
    if ( v7 )
      *v7++ = v11;
    ++v12;
    v13 = (_BYTE *)v8;
LABEL_12:
    v11 = v13[1];
    v8 = (signed __int64)(v13 + 1);
    if ( !v11 )
      goto LABEL_13;
  }
  v15 = v164;
  v16 = 0;
LABEL_22:
  for ( i = 0; ; i = v18 )
  {
    v18 = *(_BYTE *)++v8;
    v19 = *(_BYTE *)v8;
    v20 = *(_BYTE *)v8;
    v23 = __OFSUB__(*(_BYTE *)v8, 48);
    v21 = *(_BYTE *)v8 == 48;
    v22 = (char)(*(_BYTE *)v8 - 48) < 0;
    if ( *(_BYTE *)v8 != 48 )
      break;
LABEL_26:
    ;
  }
  while ( 1 )
  {
    if ( !((unsigned __int8)(v22 ^ v23) | v21) )
    {
      if ( (_BYTE)v18 == 94 )
      {
        v15 = 1;
        goto LABEL_22;
      }
      if ( (_BYTE)v18 != 95 )
      {
        v24 = -1;
        if ( (unsigned int)(v18 - 48) > 9 )
          goto LABEL_29;
        goto LABEL_37;
      }
      goto LABEL_26;
    }
    if ( (_BYTE)v18 != 35 )
      break;
    v18 = *(_BYTE *)++v8;
    v16 = 1;
    v19 = *(_BYTE *)v8;
    v20 = *(_BYTE *)v8;
    v23 = __OFSUB__(*(_BYTE *)v8, 48);
    v21 = *(_BYTE *)v8 == 48;
    v22 = (char)(*(_BYTE *)v8 - 48) < 0;
    if ( *(_BYTE *)v8 == 48 )
      goto LABEL_26;
  }
  if ( (_BYTE)v18 == 45 )
    goto LABEL_26;
  v24 = -1;
  if ( (unsigned int)(v18 - 48) > 9 )
    goto LABEL_29;
LABEL_37:
  v24 = 0;
  while ( 1 )
  {
    v25 = *(_BYTE *)(v8 + 1);
    v19 = *(_BYTE *)(v8 + 1);
    v26 = v25 - 48;
    if ( v24 > 214748364 )
      break;
    v27 = *(_BYTE *)v8;
    if ( v24 == 214748364 && (char)v27 > 55 )
      break;
    ++v8;
    v24 = v27 + 10 * v24 - 48;
LABEL_41:
    if ( (unsigned int)v26 > 9 )
    {
      v20 = v25;
      goto LABEL_29;
    }
  }
  if ( (unsigned int)v26 <= 9 )
  {
    v25 = *(_BYTE *)(v8 + 2);
    v24 = 0x7FFFFFFF;
    v8 += 2LL;
    v19 = v25;
    v26 = v25 - 48;
    goto LABEL_41;
  }
  v20 = *(_BYTE *)(v8++ + 1);
  v24 = 0x7FFFFFFF;
LABEL_29:
  if ( v19 == 69 || v19 == 79 )
    v19 = *(_BYTE *)(v8++ + 1);
  else
    v20 = 0;
  switch ( v19 )
  {
    case 65:
    case 66:
    case 97:
      if ( v20 )
        goto LABEL_237;
      if ( v16 )
        v15 = v16;
      goto LABEL_51;
    case 88:
    case 99:
    case 120:
      if ( v20 != 79 )
        goto LABEL_69;
      goto LABEL_237;
    case 114:
LABEL_69:
      v30 = 0;
      goto LABEL_70;
    case 115:
      v40 = v15;
      v41 = v199;
      v42 = _mm_loadu_si128((const __m128i *)&tp->tm_isdst);
      v43 = _mm_loadu_si128((const __m128i *)&tp->tm_mon);
      v44 = (__int64)tp->tm_zone;
      *(__m128i *)sa = _mm_loadu_si128((const __m128i *)tp);
      v201 = v43;
      v202 = v42;
      v203 = v44;
      LODWORD(v45) = sub_40DED0(a6, (unsigned __int64)sa);
      v15 = v40;
      v46 = v45;
      v47 = v45;
      do
      {
        v48 = ((signed __int64)((unsigned __int128)(7378697629483820647LL * v47) >> 64) >> 2) - (v47 >> 63);
        v49 = v48;
        LODWORD(v48) = v47 - 10 * v48;
        v47 = v49;
        v50 = 48 - v48;
        v51 = v48 + 48;
        if ( v46 < 0 )
          v51 = v50;
        *--v41 = v51;
      }
      while ( v47 );
      v52 = 1;
      if ( v24 > 0 )
        v52 = v24;
      if ( v46 >= 0 )
        goto LABEL_79;
      goto LABEL_298;
    case 68:
      if ( !v20 )
        goto LABEL_94;
      goto LABEL_237;
    case 70:
      if ( !v20 )
        goto LABEL_94;
      goto LABEL_237;
    case 71:
    case 86:
    case 103:
      if ( v20 == 69 )
        goto LABEL_237;
      v65 = tp->tm_yday;
      v66 = tp->tm_wday;
      v170 = tp->tm_year;
      v67 = v170 + ((v170 >> 31) & 0x190) - 100;
      v68 = v65 - (v65 - v66 + 382) + 7 * ((v65 - v66 + 382) / 7) + 3;
      if ( v68 < 0 )
      {
        v146 = v170 + ((v170 >> 31) & 0x190) - 101;
        v147 = 365;
        if ( !(((_BYTE)v170 + ((v170 >> 31) & 0x90) - 101) & 3) )
        {
          v147 = 366;
          if ( v146 == 100 * (v146 / 100) )
            v147 = 366 - ((unsigned int)(v146 % 400) >= 1);
        }
        v148 = v147 + v65;
        v149 = v148 - v66;
        v71 = -1;
        v68 = v148 - (v149 + 382) + 7 * ((v149 + 382) / 7) + 3;
      }
      else
      {
        v69 = 365;
        if ( !(v67 & 3) )
        {
          v69 = 366;
          if ( v67 == 100 * (v67 / 100) )
            v69 = (v67 == 400 * (v67 / 400)) + 365;
        }
        v70 = v65 - v69 - (v65 - v69 - v66 + 382) + 7 * ((v65 - v69 - v66 + 382) / 7) + 3;
        if ( v70 >= 0 )
          v68 = v70;
        v71 = (v70 >> 31) + 1;
      }
      if ( v19 == 71 )
      {
        v151 = tp->tm_year;
        v171 = 0;
        v52 = 4;
        v23 = __OFSUB__(v151, -1900 - v71);
        v22 = v151 - (-1900 - v71) < 0;
        v73 = v151 + v71 + 1900;
        LOBYTE(v75) = v22 ^ v23;
        v74 = 0;
        goto LABEL_121;
      }
      if ( v19 == 103 )
      {
        v52 = 2;
        v72 = (v71 + v170 % 100) % 100;
        v73 = v72;
        if ( v72 < 0 )
        {
          v73 = v72 + 100;
          if ( v170 < -1900 - v71 )
            v73 = -v72;
        }
      }
      else
      {
        v52 = 2;
        v73 = v68 / 7 + 1;
      }
      goto LABEL_120;
    case 90:
      v188 = v16;
      if ( v16 )
        v15 = 0;
      v180 = v15;
      v76 = strlen(v163);
      LODWORD(v77) = 0;
      if ( v24 >= 0 )
        LODWORD(v77) = v24;
      v77 = (signed int)v77;
      v78 = (signed int)v77;
      if ( v76 >= (signed int)v77 )
        v78 = v76;
      if ( v161 - v12 <= v78 )
        return 0LL;
      if ( v7 )
      {
        v79 = v180;
        v80 = v188;
        if ( v76 < v77 )
        {
          v81 = v24 - v76;
          if ( i == 48 )
          {
            v159 = v7;
            v7 += v81;
            memset(v159, 48, v81);
            v79 = v180;
            v80 = v188;
          }
          else
          {
            v82 = v7;
            v7 += v81;
            memset(v82, 32, v81);
            v80 = v188;
            v79 = v180;
          }
        }
        if ( v80 )
        {
          sub_40E700((__int64)v7, (__int64)v163, v76);
        }
        else if ( v79 )
        {
          sub_40E750((__int64)v7, (__int64)v163, v76);
        }
        else
        {
          memcpy(v7, v163, v76);
        }
        v7 += v76;
      }
      v12 += v78;
      v13 = (_BYTE *)v8;
      goto LABEL_12;
    case 82:
    case 84:
LABEL_94:
      v59 = sub_40E7A0(0LL, a6, a7);
      LODWORD(v60) = 0;
      if ( v24 >= 0 )
        LODWORD(v60) = v24;
      v60 = (signed int)v60;
      v61 = (signed int)v60;
      if ( v59 >= (signed int)v60 )
        v61 = v59;
      if ( v161 - v12 <= v61 )
        return 0LL;
      if ( v7 )
      {
        if ( v59 < v60 )
        {
          v191 = v59;
          v62 = v24 - v59;
          if ( i == 48 )
          {
            v145 = v7;
            v7 += v62;
            memset(v145, 48, v62);
            v59 = v191;
          }
          else
          {
            v63 = v7;
            v7 += v62;
            memset(v63, 32, v62);
            v59 = v191;
          }
        }
        v64 = v59;
        sub_40E7A0(v7, a6, a7);
        v7 += v64;
      }
      v12 += v61;
      v13 = (_BYTE *)v8;
      goto LABEL_12;
    case 72:
      if ( v20 == 69 )
        goto LABEL_237;
      v52 = 2;
      v73 = tp->tm_hour;
      goto LABEL_120;
    case 73:
      if ( v20 == 69 )
        goto LABEL_237;
      v73 = v165;
      v52 = 2;
      goto LABEL_120;
    case 77:
      if ( v20 == 69 )
        goto LABEL_237;
      v52 = 2;
      v73 = tp->tm_min;
      goto LABEL_120;
    case 78:
      if ( v20 == 69 )
        goto LABEL_237;
      if ( v24 == -1 )
      {
        v73 = a7;
        v24 = 9;
        v52 = 9;
      }
      else
      {
        if ( v24 > 8 )
        {
          v73 = a7;
        }
        else
        {
          v73 = a7;
          v150 = v24;
          do
          {
            ++v150;
            v73 /= 10;
          }
          while ( v150 != 9 );
        }
        v52 = v24;
      }
      goto LABEL_120;
    case 80:
      v30 = 1;
      goto LABEL_151;
    case 107:
      if ( v20 == 69 )
        goto LABEL_237;
      v73 = tp->tm_hour;
      goto LABEL_158;
    case 108:
      if ( v20 == 69 )
        goto LABEL_237;
      v73 = v165;
      goto LABEL_158;
    case 109:
      if ( v20 == 69 )
        goto LABEL_237;
      v171 = 0;
      v52 = 2;
      v83 = tp->tm_mon;
      LOBYTE(v75) = v83 < -1;
      v73 = v83 + 1;
      v74 = 0;
      goto LABEL_121;
    case 110:
      LODWORD(v84) = 0;
      if ( v24 >= 0 )
        LODWORD(v84) = v24;
      v84 = (signed int)v84;
      if ( !(_DWORD)v84 )
        v84 = 1LL;
      if ( v161 - v12 <= v84 )
        return 0LL;
      if ( v7 )
      {
        if ( v24 > 1 )
        {
          v85 = v24 - 1LL;
          if ( i == 48 )
          {
            v156 = v7;
            v7 += v85;
            memset(v156, 48, v85);
          }
          else
          {
            v86 = v7;
            v7 += v85;
            memset(v86, 32, v85);
          }
        }
        *v7++ = 10;
      }
      goto LABEL_175;
    case 113:
      v52 = 1;
      if ( v20 == 79 )
        goto LABEL_123;
      v171 = 0;
      LOBYTE(v75) = 0;
      v74 = 0;
      v73 = (11 * tp->tm_mon >> 5) + 1;
      goto LABEL_178;
    case 116:
      LODWORD(v84) = 0;
      if ( v24 >= 0 )
        LODWORD(v84) = v24;
      v84 = (signed int)v84;
      if ( !(_DWORD)v84 )
        v84 = 1LL;
      if ( v161 - v12 <= v84 )
        return 0LL;
      if ( v7 )
      {
        if ( v24 > 1 )
        {
          v98 = v24 - 1LL;
          if ( i == 48 )
          {
            v157 = v7;
            v7 += v98;
            memset(v157, 48, v98);
          }
          else
          {
            v99 = v7;
            v7 += v98;
            memset(v99, 32, v98);
          }
        }
        *v7++ = 9;
      }
      goto LABEL_175;
    case 117:
      v52 = 1;
      v73 = (tp->tm_wday + 6) % 7 + 1;
      goto LABEL_120;
    case 89:
      if ( v20 == 69 )
        goto LABEL_334;
      if ( v20 == 79 )
        goto LABEL_237;
      v171 = 0;
      v52 = 4;
      v100 = tp->tm_year;
      LOBYTE(v75) = v100 < -1900;
      v73 = v100 + 1900;
      v74 = 0;
      goto LABEL_221;
    case 83:
      if ( v20 == 69 )
        goto LABEL_237;
      v52 = 2;
      v73 = tp->tm_sec;
      goto LABEL_120;
    case 85:
      if ( v20 == 69 )
        goto LABEL_237;
      v101 = tp->tm_yday - tp->tm_wday + 7;
      v102 = (unsigned __int64)(-1840700269LL * v101) >> 32;
      goto LABEL_227;
    case 67:
      if ( v20 == 69 )
        goto LABEL_334;
      v171 = 0;
      v52 = 2;
      v103 = tp->tm_year / 100 + 19;
      v104 = tp->tm_year % 100;
      LOBYTE(v104) = v103 > 0;
      LOBYTE(v75) = tp->tm_year < -1900;
      v73 = v103 - (v104 & ((unsigned int)(tp->tm_year % 100) >> 31));
      v74 = 0;
      goto LABEL_121;
    case 87:
      if ( v20 == 69 )
        goto LABEL_237;
      v101 = 7 * ((tp->tm_wday + 6) / 7) - (tp->tm_wday + 6) + tp->tm_yday + 7;
      v102 = (unsigned __int64)(-1840700269LL * v101) >> 32;
LABEL_227:
      v52 = 2;
      v73 = ((v102 + v101) >> 2) - (v101 >> 31);
      goto LABEL_120;
    case 119:
      if ( v20 == 69 )
        goto LABEL_237;
      v52 = 1;
      v73 = tp->tm_wday;
      goto LABEL_120;
    case 98:
    case 104:
      if ( v16 )
        v15 = v16;
      if ( v20 )
        goto LABEL_237;
LABEL_51:
      v28 = &v197;
      v29 = v8;
      v30 = 0;
      *(_WORD *)format = 9504;
      v20 = 0;
      goto LABEL_52;
    default:
      goto LABEL_237;
    case 122:
      j = 0LL;
      goto LABEL_253;
    case 100:
      if ( v20 == 69 )
        goto LABEL_237;
      v52 = 2;
      v73 = tp->tm_mday;
      goto LABEL_120;
    case 101:
      if ( v20 == 69 )
        goto LABEL_237;
      v73 = tp->tm_mday;
LABEL_158:
      v52 = 2;
      if ( i != 48 && i != 45 )
        i = 95;
      goto LABEL_120;
    case 106:
      if ( v20 == 69 )
        goto LABEL_237;
      v171 = 0;
      v52 = 3;
      v118 = tp->tm_yday;
      LOBYTE(v75) = v118 < -1;
      v73 = v118 + 1;
      v74 = 0;
      goto LABEL_121;
    case 37:
      LODWORD(v108) = 0;
      v84 = 1LL;
      v109 = v161 - v12;
      if ( v24 >= 0 )
        LODWORD(v108) = v24;
      v108 = (signed int)v108;
      if ( (_DWORD)v108 )
        v84 = v108;
      if ( v20 )
      {
        v13 = (_BYTE *)v8;
        v106 = (_BYTE *)v8;
        v107 = 1LL;
        goto LABEL_243;
      }
      if ( v84 < v109 )
      {
        if ( v7 )
        {
          if ( v24 > 1 )
          {
            v119 = v24 - 1LL;
            if ( i == 48 )
            {
              v158 = v7;
              v7 += v119;
              memset(v158, 48, v119);
              v19 = *(_BYTE *)v8;
            }
            else
            {
              v120 = v7;
              v7 += v119;
              memset(v120, 32, v119);
              v19 = *(_BYTE *)v8;
            }
          }
          *v7++ = v19;
        }
LABEL_175:
        v12 += v84;
        v13 = (_BYTE *)v8;
        goto LABEL_12;
      }
      return 0LL;
    case 0:
      v106 = (_BYTE *)(v8 - 1);
      v117 = *(_BYTE *)(v8 - 1);
      goto LABEL_262;
    case 121:
      if ( v20 == 69 )
      {
LABEL_334:
        v52 = 0;
        goto LABEL_123;
      }
      v52 = 2;
      v121 = tp->tm_year % 100;
      v73 = v121;
      if ( v121 < 0 )
      {
        v122 = -v121;
        v73 += 100;
        if ( tp->tm_year <= -1901 )
          v73 = v122;
      }
LABEL_120:
      v171 = 0;
      v74 = 0;
      v75 = (unsigned int)v73 >> 31;
LABEL_121:
      if ( v20 == 79 )
      {
        if ( (_BYTE)v75 )
          goto LABEL_222;
LABEL_123:
        v30 = 0;
        *(_WORD *)format = 9504;
LABEL_124:
        v197 = v20;
        v29 = v8;
        v20 = v52;
        v28 = &v198;
LABEL_52:
        *v28 = v19;
        v28[1] = 0;
        v166 = (_BYTE *)v29;
        v185 = v20;
        v176 = v15;
        v31 = strftime(sa, 0x400uLL, format, tp);
        v13 = v166;
        if ( v31 )
        {
          v32 = v31 - 1;
          LODWORD(v31) = 0;
          if ( v24 >= 0 )
            LODWORD(v31) = v24;
          v31 = (signed int)v31;
          v33 = (signed int)v31;
          if ( v32 >= (signed int)v31 )
            v33 = v32;
          if ( v161 - v12 > v33 )
          {
            if ( v7 )
            {
              v15 = v176;
              if ( !v185 && v32 < v31 )
              {
                v186 = v32;
                v34 = v24 - v32;
                v177 = v166;
                v167 = v15;
                if ( i == 48 )
                {
                  v130 = v7;
                  v7 += v34;
                  memset(v130, 48, v34);
                  v15 = v167;
                  v13 = v177;
                  v32 = v186;
                }
                else
                {
                  v35 = v7;
                  v7 += v34;
                  memset(v35, 32, v34);
                  v32 = v186;
                  v13 = v177;
                  v15 = v167;
                }
              }
              v178 = v13;
              v36 = &sa[1];
              v37 = v32;
              v38 = v7;
              v168 = v32;
              if ( !v30 )
                goto LABEL_64;
              sub_40E700((__int64)v7, (__int64)&sa[1], v32);
              v39 = v168;
              v13 = v178;
              goto LABEL_66;
            }
            goto LABEL_67;
          }
          return 0LL;
        }
        goto LABEL_12;
      }
LABEL_221:
      if ( (_BYTE)v75 )
LABEL_222:
        v73 = -v73;
LABEL_178:
      v87 = v199;
      while ( 1 )
      {
        v41 = v87 - 1;
        if ( v74 & 1 )
        {
          v88 = (signed __int64)(v87 - 2);
          *(v87-- - 1) = 58;
          v41 = (char *)v88;
        }
        v74 >>= 1;
        *(v87 - 1) = v73 % 0xAu + 48;
        v87 = v41;
        if ( (unsigned int)v73 <= 9 && !v74 )
          break;
        v73 /= 0xAu;
      }
      if ( v52 < v24 )
        v52 = v24;
      if ( (_BYTE)v75 )
      {
LABEL_298:
        v172 = 45;
        v125 = 45;
        if ( i == 45 )
          goto LABEL_299;
LABEL_190:
        v53 = (char *)(v199 - v41);
        LODWORD(v55) = v52 - 1 - ((unsigned __int64)v199 - (_DWORD)v41);
        v54 = v161 - v12;
        if ( (signed int)v55 <= 0 )
        {
          LODWORD(v56) = 0;
          v131 = 1LL;
          if ( v24 >= 0 )
            LODWORD(v56) = v24;
          v56 = (signed int)v56;
          if ( (_DWORD)v56 )
            v131 = v56;
          if ( v131 >= v54 )
            return 0LL;
          if ( v7 )
          {
            if ( !v52 && v56 > 1 )
            {
              v132 = v24 - 1LL;
              v195 = v131;
              v194 = v56;
              v184 = &v7[v132];
              v190 = v15;
              if ( i == 48 )
              {
                memset(v7, 48, v132);
                v7 = v184;
                v15 = v190;
                v52 = 0;
                v56 = v194;
                v131 = v195;
                v53 = (char *)(v199 - v41);
              }
              else
              {
                memset(v7, 32, v132);
                v7 = v184;
                v53 = (char *)(v199 - v41);
                v131 = v195;
                v56 = v194;
                v52 = 0;
                v15 = v190;
              }
            }
            *(++v7 - 1) = v172;
          }
          v12 += v131;
          v13 = (_BYTE *)v8;
          v54 = v161 - v12;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          if ( v52 >= v54 )
            return 0LL;
          LODWORD(v89) = 0;
          v90 = 1LL;
          if ( v24 >= 0 )
            LODWORD(v89) = v24;
          v89 = (signed int)v89;
          if ( (_DWORD)v89 )
            v90 = v89;
          if ( v90 >= v54 )
            return 0LL;
          v12 += v90;
          v55 = (signed int)v55;
          v13 = (_BYTE *)v8;
          if ( !v7 )
            goto LABEL_206;
          if ( !v52 && v89 > 1 )
          {
            v193 = v55;
            v91 = v24 - 1LL;
            v181 = v15;
            if ( i == 48 )
            {
              v160 = v7;
              v7 += v91;
              memset(v160, 48, v91);
              v15 = v181;
              v52 = 0;
              v53 = (char *)(v199 - v41);
              v55 = v193;
            }
            else
            {
              v92 = v7;
              v7 += v91;
              memset(v92, 32, v91);
              v55 = v193;
              v53 = (char *)(v199 - v41);
              v52 = 0;
              v15 = v181;
            }
          }
          ++v7;
          v13 = (_BYTE *)v8;
          *(v7 - 1) = v172;
LABEL_204:
          if ( v7 )
          {
            v93 = v53;
            v94 = v52;
            v95 = v13;
            v96 = v15;
            v97 = v55;
            memset(v7, 48, v55);
            v55 = v97;
            v53 = v93;
            v52 = v94;
            v13 = v95;
            v15 = v96;
            v7 += v97;
          }
LABEL_206:
          v12 += v55;
          v24 = 0;
          v56 = 0LL;
          v54 = v161 - v12;
          goto LABEL_84;
        }
LABEL_326:
        v133 = (signed int)v55;
        if ( (signed int)v55 >= v54 )
          return 0LL;
        if ( v7 )
        {
          v134 = v7;
          v135 = v55;
          v136 = v52;
          v7 += (signed int)v55;
          v137 = v15;
          memset(v134, 32, (signed int)v55);
          LODWORD(v55) = v135;
          v52 = v136;
          v15 = v137;
        }
        v12 += v133;
        v138 = v24 - v55;
        v23 = __OFSUB__((_DWORD)v55, v24);
        v22 = (signed int)v55 - v24 < 0;
        v24 = 0;
        if ( v22 ^ v23 )
          v24 = v138;
        v54 = v161 - v12;
        if ( v172 )
        {
          v56 = v24;
          v141 = 1LL;
          if ( v24 )
            v141 = v24;
          if ( v141 >= v54 )
            return 0LL;
          if ( v7 )
          {
            if ( !v52 && (unsigned __int64)v24 > 1 )
            {
              v142 = v7;
              v143 = v141;
              v7 += v24 - 1;
              v144 = v15;
              memset(v142, 32, v24 - 1LL);
              v141 = v143;
              v52 = 0;
              v15 = v144;
              v56 = v24;
            }
            *(++v7 - 1) = v172;
          }
          v12 += v141;
          v13 = (_BYTE *)v8;
          i = 95;
          v53 = (char *)(v199 - v41);
          v54 = v161 - v12;
        }
        else
        {
          v56 = v24;
          v13 = (_BYTE *)v8;
          i = 95;
          v53 = (char *)(v199 - v41);
        }
        goto LABEL_84;
      }
      if ( !v171 )
      {
LABEL_79:
        v53 = (char *)(v199 - v41);
        v54 = v161 - v12;
        if ( i == 45 || (LODWORD(v55) = v52 - (_DWORD)v53, v52 - (signed int)v53 <= 0) )
        {
          LODWORD(v56) = 0;
          v13 = (_BYTE *)v8;
          if ( v24 >= 0 )
            LODWORD(v56) = v24;
          v56 = (signed int)v56;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          if ( v52 >= v54 )
            return 0LL;
          v55 = (signed int)v55;
          v13 = (_BYTE *)v8;
          goto LABEL_204;
        }
        v172 = 0;
        goto LABEL_326;
      }
      if ( i != 45 )
      {
        v172 = 43;
        goto LABEL_190;
      }
      v125 = 43;
LABEL_299:
      LODWORD(v56) = 0;
      v126 = 1LL;
      if ( v24 >= 0 )
        LODWORD(v56) = v24;
      v56 = (signed int)v56;
      if ( (_DWORD)v56 )
        v126 = v56;
      if ( v161 - v12 <= v126 )
        return 0LL;
      if ( v7 )
      {
        if ( !v52 && v56 > 1 )
        {
          v127 = v125;
          v128 = v56;
          v129 = v15;
          memset(v7, 32, v24 - 1LL);
          v125 = v127;
          v56 = v128;
          v52 = 0;
          v15 = v129;
          v7 += v24 - 1;
        }
        *v7++ = v125;
      }
      v12 += v126;
      v13 = (_BYTE *)v8;
      i = 45;
      v53 = (char *)(v199 - v41);
      v54 = v161 - v12;
LABEL_84:
      v33 = v56;
      if ( (unsigned __int64)v53 >= v56 )
        v33 = (unsigned __int64)v53;
      if ( v33 < v54 )
      {
        if ( v7 )
        {
          if ( !v52 && (unsigned __int64)v53 < v56 )
          {
            v187 = v53;
            v57 = v24 - (_QWORD)v53;
            v179 = v13;
            v169 = v15;
            if ( i == 48 )
            {
              v139 = v7;
              v7 += v57;
              memset(v139, 48, v57);
              v15 = v169;
              v13 = v179;
              v53 = v187;
            }
            else
            {
              v58 = v7;
              v7 += v57;
              memset(v58, 32, v57);
              v53 = v187;
              v13 = v179;
              v15 = v169;
            }
          }
          v178 = v13;
          v37 = (size_t)v53;
          v36 = v41;
          v38 = v7;
          v168 = (unsigned __int64)v53;
LABEL_64:
          if ( v15 )
          {
            sub_40E750((__int64)v38, (__int64)v36, v37);
            v39 = v168;
            v13 = v178;
          }
          else
          {
            memcpy(v38, v36, v37);
            v13 = v178;
            v39 = v168;
          }
LABEL_66:
          v7 += v39;
        }
LABEL_67:
        v12 += v33;
        goto LABEL_12;
      }
      return 0LL;
    case 58:
      v123 = *(_BYTE *)(v8 + 1);
      v124 = v8 + 1;
      for ( j = 1LL; v123 == 58; v124 = v8 + j )
        v123 = *(_BYTE *)(v8 + ++j);
      if ( v123 != 122 )
        goto LABEL_237;
      v8 = v124;
LABEL_253:
      if ( tp->tm_isdst < 0 )
      {
        v13 = (_BYTE *)v8;
        goto LABEL_12;
      }
      v114 = tp->tm_gmtoff;
      LOBYTE(v75) = 1;
      if ( (signed int)v114 >= 0 )
      {
        LOBYTE(v75) = 0;
        if ( !(_DWORD)v114 )
          LOBYTE(v75) = *v163 == 45;
      }
      v175 = (signed int)v114 / 3600;
      v115 = (signed int)v114 / 60 % 60;
      v74 = (signed int)v114 / 60 % 60;
      v116 = (signed int)v114 % 60;
      if ( j == 1 )
        goto LABEL_362;
      if ( j )
      {
        if ( j == 2 )
          goto LABEL_381;
        if ( j != 3 )
        {
          v117 = *(_BYTE *)v8;
          v106 = (_BYTE *)v8;
LABEL_262:
          LODWORD(v108) = 0;
          v109 = v161 - v12;
          if ( v24 >= 0 )
            LODWORD(v108) = v24;
          v108 = (signed int)v108;
          if ( v117 == 37 )
          {
            v84 = 1LL;
            v13 = v106;
            v107 = 1LL;
            if ( v108 )
              v84 = v108;
          }
          else
          {
            v8 = (signed __int64)v106;
LABEL_237:
            v105 = v8 - 1;
            do
            {
              v106 = (_BYTE *)v105;
              LODWORD(v107) = v8 - 1 + 2 - v105--;
            }
            while ( *(_BYTE *)(v105 + 1) != 37 );
            LODWORD(v108) = 0;
            v107 = (signed int)v107;
            v13 = (_BYTE *)v8;
            v109 = v161 - v12;
            if ( v24 >= 0 )
              LODWORD(v108) = v24;
            v108 = (signed int)v108;
            v84 = (signed int)v108;
            if ( v107 >= (signed int)v108 )
              v84 = v107;
          }
LABEL_243:
          if ( v109 > v84 )
          {
            if ( v7 )
            {
              if ( v107 < v108 )
              {
                v192 = v107;
                v110 = v24 - v107;
                v189 = v13;
                v182 = v106;
                v173 = v15;
                if ( i == 48 )
                {
                  v140 = v7;
                  v7 += v110;
                  memset(v140, 48, v110);
                  v15 = v173;
                  v106 = v182;
                  v13 = v189;
                  v107 = v192;
                }
                else
                {
                  v111 = v7;
                  v7 += v110;
                  memset(v111, 32, v110);
                  v107 = v192;
                  v13 = v189;
                  v106 = v182;
                  v15 = v173;
                }
              }
              v183 = v13;
              v174 = v107;
              if ( v15 )
              {
                sub_40E750((__int64)v7, (__int64)v106, v107);
                v112 = v174;
                v13 = v183;
              }
              else
              {
                memcpy(v7, v106, v107);
                v13 = v183;
                v112 = v174;
              }
              v7 += v112;
            }
            v12 += v84;
            goto LABEL_12;
          }
          return 0LL;
        }
        if ( v116 )
        {
LABEL_381:
          v152 = 10000 * v175;
          v52 = 9;
          v171 = 1;
          v153 = 100 * v74 + v152;
          v74 = 20;
          v73 = v153 + v116;
        }
        else if ( v115 )
        {
LABEL_362:
          v154 = 100 * v175;
          v52 = 6;
          v171 = 1;
          v73 = v74 + v154;
          v74 = 4;
        }
        else
        {
          v73 = v175;
          v52 = 3;
          v171 = 1;
        }
      }
      else
      {
        v155 = 100 * v175;
        v74 = 0;
        v171 = 1;
        v52 = 5;
        v73 = v115 + v155;
      }
      goto LABEL_121;
    case 112:
      v30 = 0;
LABEL_151:
      v19 = 112;
      if ( v16 )
        v30 = v16;
      if ( v16 )
        v15 = 0;
LABEL_70:
      *(_WORD *)format = 9504;
      if ( !v20 )
      {
        v29 = v8;
        v28 = &v197;
        goto LABEL_52;
      }
      v52 = 0;
      goto LABEL_124;
  }
}

__int64 __fastcall sub_40FF70(void *a1, __int64 a2, char *a3, __int64 a4, __int64 a5, int a6)
{
  return sub_40E7A0(a1, a3, a4, a2, 0, a5, a6);
}

void __fastcall sub_40FF90(_DWORD *a1)
{
  *a1 |= 0x20u;
}

char *__fastcall sub_40FFA0(void *a1, size_t *a2, _BYTE *a3, __int64 a4)
{
  _BYTE *v4; // r15@1
  __int64 v5; // rbx@1
  __int64 v6; // rax@3
  unsigned __int64 v7; // rax@5
  size_t v8; // rdi@6
  void *v9; // rax@9
  size_t v10; // r12@11
  void *v11; // r14@13
  _BYTE *v12; // r8@13
  char *v13; // rbx@13
  size_t v14; // r15@13
  _BYTE *v15; // rcx@13
  char *v16; // rcx@14
  unsigned __int64 v17; // rax@14
  size_t v18; // r13@14
  bool v19; // dl@18
  void *v20; // rax@19
  char *v21; // rax@22
  void *v22; // rsp@23
  char *v23; // rax@30
  char v24; // r15@34
  __int64 v25; // rax@34
  char *v26; // r8@36
  char *v27; // rdx@36
  int v28; // eax@36
  char v29; // al@37
  int v30; // eax@40
  _BYTE *v31; // r15@40
  __int64 v32; // rdi@41
  _BYTE *v33; // rsi@54
  _BYTE *v34; // rdx@54
  _BYTE *v35; // rsi@56
  _BYTE *v36; // rdx@56
  signed __int64 v37; // rax@59
  char v38; // al@62
  __int64 v39; // rax@62
  signed __int64 v40; // rax@63
  __int64 v41; // rax@65
  signed __int64 v42; // r8@66
  __int64 v43; // rax@67
  unsigned __int64 v44; // rax@68
  char *v45; // r11@75
  int *v46; // rax@76
  char *v47; // r11@76
  unsigned __int64 v48; // rbx@77
  unsigned __int64 v49; // r10@81
  _BYTE *v50; // rdx@82
  _BYTE *v51; // rcx@82
  __int64 v52; // rsi@83
  char *v53; // r8@84
  unsigned __int64 v54; // rdx@85
  unsigned __int64 v55; // rcx@87
  char *v56; // r15@88
  char *result; // rax@98
  unsigned __int64 v58; // rax@100
  char *v59; // rax@107
  __int16 v61; // fps@117
  _BYTE *v65; // rdx@118
  _BYTE *v66; // rdi@118
  int v67; // er11@118
  __int64 v68; // rcx@119
  char *v69; // rcx@120
  char *v70; // rdi@128
  int *v71; // r9@128
  int v72; // eax@130
  int v73; // edx@131
  __int64 v74; // rax@138
  unsigned __int8 v75; // cf@138
  unsigned __int64 v76; // rax@138
  bool v77; // bl@144
  char *v78; // rax@146
  __int64 v79; // r9@148
  signed int v80; // ebx@154
  __int64 v81; // rax@167
  long double v82; // fst7@167
  __int64 v83; // rax@171
  char *v84; // rdi@171
  __int128 v85; // xmm0@171
  unsigned __int64 v86; // rax@188
  void *v87; // rax@190
  char *v88; // rax@193
  char *v89; // rcx@193
  int v90; // er8@194
  unsigned __int64 v91; // r15@195
  void *v92; // rax@201
  char *v93; // rax@216
  void *v94; // rax@222
  char v95; // al@254
  unsigned __int64 v96; // r9@257
  size_t v97; // r8@258
  unsigned __int64 v98; // r10@259
  unsigned __int64 v99; // rdi@259
  signed __int64 v100; // rax@263
  unsigned __int64 v101; // r10@266
  unsigned __int64 v102; // rax@269
  char *v103; // rax@277
  signed __int64 v104; // rsi@286
  char v105; // al@287
  size_t v106; // r15@292
  size_t v107; // r14@292
  bool v108; // r13@297
  char *v109; // rax@299
  char *v110; // rax@303
  signed __int64 v111; // rax@316
  unsigned __int64 v112; // r10@320
  void *v113; // rax@323
  char *v114; // rax@326
  __int16 v115; // ST34_2@330
  char *v116; // rax@330
  __int64 v117; // rsi@330
  __int64 v118; // rdx@330
  char v119; // al@330
  signed __int64 v120; // rdx@333
  unsigned __int64 v121; // rax@333
  char *v122; // rax@340
  __int64 v123; // rdx@340
  char v124; // al@340
  unsigned __int64 v125; // rax@343
  signed __int64 v126; // rsi@348
  signed __int64 v127; // r9@348
  __int64 v128; // rdx@348
  signed __int64 v129; // rax@354
  _BYTE *v130; // rsi@355
  _BYTE *v131; // rdi@357
  __int64 v132; // rax@357
  signed __int64 v133; // rsi@357
  unsigned __int64 v134; // rax@359
  char v135; // al@371
  signed __int64 v136; // rsi@372
  char v137; // al@373
  char *v138; // rax@374
  __int64 v139; // rdx@374
  char v140; // al@374
  signed __int64 v141; // rax@377
  void *v142; // rax@381
  __int16 v143; // ST34_2@389
  char *v144; // rax@389
  char *v145; // rdx@389
  char v146; // al@389
  char *v147; // rax@392
  char *v148; // rax@397
  char v149; // al@397
  unsigned __int64 v150; // [sp+28h] [bp-6E8h]@23
  char *v151; // [sp+30h] [bp-6E0h]@76
  void *ptr; // [sp+38h] [bp-6D8h]@10
  size_t *v153; // [sp+40h] [bp-6D0h]@1
  void *v154; // [sp+48h] [bp-6C8h]@128
  char *v155; // [sp+50h] [bp-6C0h]@76
  __int64 v156; // [sp+58h] [bp-6B8h]@13
  _BYTE *v157; // [sp+60h] [bp-6B0h]@19
  unsigned __int64 v158; // [sp+68h] [bp-6A8h]@9
  long double v159; // [sp+70h] [bp-6A0h]@19
  void *v160; // [sp+80h] [bp-690h]@19
  void *src; // [sp+88h] [bp-688h]@1
  int v162; // [sp+94h] [bp-67Ch]@77
  unsigned int v163; // [sp+98h] [bp-678h]@64
  char v164; // [sp+A0h] [bp-670h]@1
  void *v165; // [sp+A8h] [bp-668h]@36
  __int64 v166; // [sp+B0h] [bp-660h]@95
  __int64 v167; // [sp+190h] [bp-580h]@1
  void *v168; // [sp+198h] [bp-578h]@13
  __int64 v169; // [sp+1A0h] [bp-570h]@3
  __int64 v170; // [sp+1A8h] [bp-568h]@5
  __int64 v171; // [sp+1B0h] [bp-560h]@93
  char v172; // [sp+420h] [bp-2F0h]@252

  v4 = a3;
  v5 = a4;
  src = a1;
  v153 = a2;
  if ( sub_411CE0(a3, &v167, &v164) < 0 )
    return 0LL;
  if ( sub_411AC0(v5, &v164) < 0 )
  {
    if ( v168 != &v171 )
      free(v168);
    if ( v165 != &v166 )
      free(v165);
    v13 = 0LL;
    *__errno_location() = 22;
    return v13;
  }
  v6 = v169 + 7;
  if ( (unsigned __int64)(v169 + 7) <= 6 )
    v6 = -1LL;
  v75 = __CFADD__(v170, v6);
  v7 = v170 + v6;
  if ( v75 )
    goto LABEL_112;
  v8 = v7 + 6;
  if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
    goto LABEL_112;
  if ( v8 <= 0xF9F )
  {
    ptr = 0LL;
    v22 = alloca(v7 + 14);
    v158 = ((unsigned __int64)&v150 + 7) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    if ( v8 == -1LL )
      goto LABEL_112;
    v9 = malloc(v8);
    v158 = (unsigned __int64)v9;
    if ( !v9 )
      goto LABEL_112;
    ptr = v9;
  }
  v10 = 0LL;
  if ( src )
    v10 = *v153;
  v11 = v168;
  v12 = v4;
  v13 = (char *)src;
  v156 = 0LL;
  v14 = 0LL;
  v15 = *(_BYTE **)v168;
  if ( *(_BYTE **)v168 == v12 )
    goto LABEL_111;
LABEL_14:
  v16 = (char *)(v15 - v12);
  v17 = (unsigned __int64)&v16[v14];
  v18 = (size_t)&v16[v14];
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
        v157 = v12;
        LOBYTE(v159) = v19;
        v160 = v16;
        v20 = malloc(v10);
        v16 = (char *)v160;
        v12 = v157;
        if ( !v20 )
          goto LABEL_88;
        if ( v14 && LOBYTE(v159) )
        {
          *(_QWORD *)&v159 = v157;
          v21 = (char *)memcpy(v20, v13, v14);
          v16 = (char *)v160;
          v12 = *(_BYTE **)&v159;
          v13 = v21;
        }
        else
        {
          v13 = (char *)v20;
        }
        goto LABEL_32;
      }
LABEL_29:
      if ( !v19 )
      {
        *(_QWORD *)&v159 = v12;
        v160 = v16;
        v23 = (char *)realloc(v13, v10);
        if ( !v23 )
          goto LABEL_126;
        v16 = (char *)v160;
        v12 = *(_BYTE **)&v159;
        v13 = v23;
        goto LABEL_32;
      }
      goto LABEL_19;
    }
    if ( v17 == -1LL )
      goto LABEL_88;
    v10 = (size_t)&v16[v14];
    goto LABEL_28;
  }
LABEL_32:
  memcpy(&v13[v14], v12, (size_t)v16);
  while ( v167 != v156 )
  {
    v24 = *((_BYTE *)v11 + 72);
    v25 = *((_QWORD *)v11 + 10);
    if ( v24 == 37 )
    {
      if ( v25 != -1 )
        goto LABEL_198;
      v58 = v18 + 1;
      v14 = v18 + 1;
      if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
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
            goto LABEL_234;
        }
        else
        {
          if ( v58 <= 0xC )
          {
            v10 = 12LL;
            goto LABEL_105;
          }
LABEL_234:
          if ( v58 == -1LL )
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
          *(_QWORD *)&v159 = __errno_location();
          goto LABEL_127;
        }
        LOBYTE(v160) = v13 == src;
        v94 = malloc(v10);
        if ( !v94 )
          goto LABEL_88;
        if ( v18 && (_BYTE)v160 )
          v13 = (char *)memcpy(v94, v13, v18);
        else
          v13 = (char *)v94;
      }
LABEL_109:
      v13[v18] = 37;
      goto LABEL_110;
    }
    if ( v25 == -1 )
      goto LABEL_198;
    v26 = (char *)v165;
    v27 = (char *)v165 + 32 * v25;
    v28 = *(_DWORD *)v27;
    LODWORD(v160) = *(_DWORD *)v27;
    if ( v24 != 110 )
    {
      v29 = v24 & 0xDF;
      if ( (unsigned __int8)((v24 & 0xDF) - 69) > 2u && v29 != 65
        || (_DWORD)v160 != 12
        || (_FST7 = *((long double *)v27 + 1), _FST7 != _FST7 + _FST7) )
      {
        v30 = *((_DWORD *)v11 + 4);
        v31 = (_BYTE *)(v158 + 1);
        *(_BYTE *)v158 = 37;
        if ( v30 & 1 )
        {
          v32 = v158;
          *(_BYTE *)(v158 + 1) = 39;
          v31 = (_BYTE *)(v32 + 2);
        }
        if ( v30 & 2 )
          *v31++ = 45;
        if ( v30 & 4 )
          *v31++ = 43;
        if ( v30 & 8 )
          *v31++ = 32;
        if ( v30 & 0x10 )
          *v31++ = 35;
        if ( v30 & 0x40 )
          *v31++ = 73;
        if ( v30 & 0x20 )
          *v31++ = 48;
        v33 = (_BYTE *)*((_QWORD *)v11 + 3);
        v34 = (_BYTE *)*((_QWORD *)v11 + 4);
        if ( v33 != v34 )
        {
          v157 = v26;
          *(_QWORD *)&v159 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v157 = v26;
          *(_QWORD *)&v159 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        if ( (unsigned int)v160 <= 0x10 )
        {
          v37 = 1LL << (char)v160;
          if ( (1LL << (char)v160) & 0x14180 )
            goto LABEL_125;
          if ( BYTE1(v37) & 0x10 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( !(BYTE1(v37) & 6) )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = *((_BYTE *)v11 + 72);
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = (signed __int64)&v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v157) = 1;
            v163 = *(_DWORD *)(v40 + 16);
            goto LABEL_65;
          }
LABEL_198:
          abort();
        }
        LODWORD(v157) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = (signed __int64)&v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_198;
          v43 = (unsigned int)v157;
          *(&v163 + v43) = *(_DWORD *)(v42 + 16);
          LODWORD(v157) = v43 + 1;
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
              *(_QWORD *)&v159 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v168 != &v171 )
                    free(v168);
                  if ( v165 != &v166 )
                    free(v165);
                  v13 = 0LL;
                  **(_DWORD **)&v159 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v159 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v159) = v13 == src;
            v93 = (char *)malloc(v10);
            v45 = v93;
            if ( !v93 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v159) )
              v45 = (char *)memcpy(v93, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v155 = v45;
            v46 = __errno_location();
            v47 = v155;
            v155 = v31;
            *(_QWORD *)&v159 = v46;
            LODWORD(v151) = *v46;
            while ( 2 )
            {
              while ( 2 )
              {
                v48 = 0x7FFFFFFFLL;
                v162 = -1;
                **(_DWORD **)&v159 = 0;
                if ( v10 - v18 <= 0x7FFFFFFF )
                  v48 = v10 - v18;
                switch ( (_DWORD)v160 )
                {
                  default:
                    goto LABEL_402;
                  case 7:
                  case 8:
                  case 9:
                  case 0xA:
                  case 0xF:
                  case 0x10:
                  case 0x11:
                    v70 = &v47[v18];
                    v71 = (int *)*((_QWORD *)v165 + 4 * *((_QWORD *)v11 + 10) + 2);
                    v154 = v47;
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_208;
                    if ( (_DWORD)v157 != 2 )
                      goto LABEL_130;
                    goto LABEL_207;
                  case 5:
                  case 6:
                  case 0xD:
                  case 0xE:
                    v79 = *((_DWORD *)v165 + 8 * *((_QWORD *)v11 + 10) + 4);
                    break;
                  case 0xC:
                    v81 = *((_QWORD *)v11 + 10);
                    v70 = &v47[v18];
                    v154 = v47;
                    v82 = *((long double *)v165 + 2 * v81 + 1);
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_207;
                    if ( (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v71 = &v162;
LABEL_130:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v71);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 1:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                  case 0xB:
                    v83 = *((_QWORD *)v11 + 10);
                    v84 = &v47[v18];
                    v154 = v47;
                    v85 = *((_QWORD *)v165 + 4 * v83 + 2);
                    if ( (_DWORD)v157 == 1 || (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, &v162);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 4:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 3:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 2:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                }
                v70 = &v47[v18];
                v154 = v47;
                if ( (_DWORD)v157 != 1 )
                {
                  if ( (_DWORD)v157 != 2 )
                    goto LABEL_151;
LABEL_207:
                  v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                  v47 = (char *)v154;
LABEL_131:
                  v73 = v162;
                  if ( v162 >= 0 )
                    goto LABEL_132;
LABEL_152:
                  if ( v155[1] )
                  {
                    v155[1] = 0;
                    continue;
                  }
                  if ( v72 < 0 )
                  {
                    v80 = **(_DWORD **)&v159;
                    if ( !**(_DWORD **)&v159 )
                    {
                      v80 = 84;
                      if ( (*((_BYTE *)v11 + 72) & 0xEF) != 99 )
                        v80 = 22;
                    }
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v168 != &v171 )
                      free(v168);
                    if ( v165 != &v166 )
                      free(v165);
                    **(_DWORD **)&v159 = v80;
                    return 0LL;
                  }
                  goto LABEL_135;
                }
                break;
              }
LABEL_208:
              v79 = v163;
LABEL_151:
              v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v79);
              v73 = v162;
              v47 = (char *)v154;
              if ( v162 < 0 )
                goto LABEL_152;
LABEL_132:
              if ( v73 < v48 && *(&v47[v73] + v18) )
                goto LABEL_198;
              if ( v73 < v72 )
              {
LABEL_135:
                v162 = v72;
                v73 = v72;
              }
              if ( (unsigned int)(v73 + 1) < v48 )
              {
                v13 = v47;
                v14 = v18 + v73;
                **(_DWORD **)&v159 = (_DWORD)v151;
                goto LABEL_110;
              }
              if ( v10 - v18 > 0x7FFFFFFE )
              {
                if ( v47 != src && v47 )
                  free(v47);
                if ( ptr )
                  free(ptr);
                if ( v168 != &v171 )
                  free(v168);
                if ( v165 != &v166 )
                  free(v165);
                v13 = 0LL;
                **(_DWORD **)&v159 = 75;
                return v13;
              }
              v74 = (unsigned int)(v73 + 2);
              v75 = __CFADD__(v18, v74);
              v76 = v18 + v74;
              if ( (v10 & 0x8000000000000000LL) != 0LL )
              {
                if ( v10 != -1LL )
                  goto LABEL_200;
              }
              else
              {
                if ( v75 )
                  goto LABEL_200;
                if ( 2 * v10 >= v76 )
                  v76 = 2 * v10;
                if ( v10 < v76 )
                {
                  v10 *= 2LL;
                  if ( v10 < v76 )
                  {
                    if ( v76 == -1LL )
                    {
LABEL_200:
                      v56 = v47;
                      goto LABEL_89;
                    }
                    v10 = v76;
                  }
                  v77 = v47 == src;
                  if ( !v47 || v77 )
                  {
                    v154 = v47;
                    v92 = malloc(v10);
                    v47 = (char *)v154;
                    if ( !v92 )
                      goto LABEL_200;
                    if ( v18 && v77 )
                      v47 = (char *)memcpy(v92, v154, v18);
                    else
                      v47 = (char *)v92;
                  }
                  else
                  {
                    v154 = v47;
                    v78 = (char *)realloc(v47, v10);
                    v47 = (char *)v154;
                    if ( !v78 )
                      goto LABEL_200;
                    v47 = v78;
                  }
                }
              }
              continue;
            }
          }
          if ( v44 != -1LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      v65 = (_BYTE *)*((_QWORD *)v11 + 3);
      v66 = (_BYTE *)*((_QWORD *)v11 + 4);
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
          v160 = (void *)-1;
          while ( 1 )
          {
            v126 = (signed __int64)(v65 + 1);
            v127 = -1LL;
            v128 = *v65 - 48;
            if ( v49 <= 0x1999999999999999LL )
              v127 = 10 * v49;
            v75 = __CFADD__(v127, v128);
            v49 = v127 + v128;
            v65 = (_BYTE *)v126;
            if ( v75 )
            {
              if ( v66 == (_BYTE *)v126 )
              {
LABEL_81:
                v49 = (unsigned __int64)v160;
                goto LABEL_82;
              }
              while ( *(++v65 - 1) != 48 )
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
        v69 = (char *)v165 + 32 * v68;
        if ( *(_DWORD *)v69 != 5 )
          goto LABEL_198;
        v49 = *((_DWORD *)v69 + 4);
        if ( (v49 & 0x80000000) != 0LL )
        {
          v67 |= 2u;
          v49 = -(signed __int64)v49;
        }
      }
LABEL_82:
      v50 = (_BYTE *)*((_QWORD *)v11 + 6);
      v51 = (_BYTE *)*((_QWORD *)v11 + 7);
      if ( v50 != v51 )
      {
        v52 = *((_QWORD *)v11 + 8);
        if ( v52 == -1 )
        {
          v129 = (signed __int64)(v50 + 1);
          v54 = 0LL;
          if ( v51 != (_BYTE *)v129 )
          {
            v130 = (_BYTE *)v129;
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
          goto LABEL_369;
        }
        v53 = (char *)v165 + 32 * v52;
        if ( *(_DWORD *)v53 != 5 )
          goto LABEL_198;
        v54 = *((_DWORD *)v53 + 4);
        if ( (v54 & 0x80000000) == 0LL )
        {
LABEL_86:
          if ( v54 )
          {
            v55 = v54 + 12;
            if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
              goto LABEL_88;
LABEL_188:
            v86 = v55;
            if ( v49 >= v55 )
              v86 = v49;
            v75 = __CFADD__(v86, 1LL);
            v87 = (void *)(v86 + 1);
            v160 = v87;
            if ( v75 )
              goto LABEL_88;
            if ( (unsigned __int64)v87 <= 0x2BC )
            {
              v89 = &v172;
            }
            else
            {
              v154 = (void *)v49;
              v155 = (char *)v54;
              LODWORD(v157) = v67;
              v159 = _FST7;
              if ( v87 == (void *)-1 )
                goto LABEL_88;
              v88 = (char *)malloc((size_t)v87);
              v67 = (signed int)v157;
              _FST7 = v159;
              v89 = v88;
              v54 = (unsigned __int64)v155;
              v49 = (unsigned __int64)v154;
              if ( !v88 )
                goto LABEL_88;
            }
            v90 = (unsigned __int16)v163;
            LOWORD(v163) = v163 | 0x300;
            __asm { fxam }
            if ( HIBYTE(v61) & 2 )
            {
              *v89 = 45;
              _FST7 = -_FST7;
              v91 = (unsigned __int64)(v89 + 1);
            }
            else if ( v67 & 4 )
            {
              v91 = (unsigned __int64)(v89 + 1);
              *v89 = 43;
            }
            else
            {
              v91 = (unsigned __int64)v89;
              if ( v67 & 8 )
              {
                v91 = (unsigned __int64)(v89 + 1);
                *v89 = 32;
              }
            }
            if ( _FST7 > 0.0 )
            {
              if ( _FST7 + _FST7 != _FST7 )
                goto LABEL_198;
              v96 = v91 + 3;
              if ( (unsigned __int8)(*((_BYTE *)v11 + 72) - 65) > 0x19u )
              {
                *(_BYTE *)(v91 + 2) = 102;
                *(_WORD *)v91 = 28265;
                v91 = 0LL;
              }
              else
              {
                *(_BYTE *)(v91 + 2) = 70;
                *(_WORD *)v91 = 20041;
                v91 = 0LL;
              }
              goto LABEL_258;
            }
            if ( _FST7 != 0.0 )
              goto LABEL_198;
            v95 = *((_BYTE *)v11 + 72) & 0xDF;
            if ( v95 == 70 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || v54 )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v122 = nl_langinfo(0x10000);
                v123 = (__int64)v155;
                v96 = *(_QWORD *)&v159;
                v124 = *v122;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v124 )
                  v124 = 46;
                *(_BYTE *)(v91 + 1) = v124;
                if ( v123 )
                {
                  v125 = v96;
                  do
                    *(_BYTE *)(++v125 - 1) = 48;
                  while ( v125 != v91 + v123 + 2 );
                  v96 += v123;
                }
                goto LABEL_258;
              }
              goto LABEL_257;
            }
            if ( v95 == 69 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || (v104 = v91 + 1, v54) )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v138 = nl_langinfo(0x10000);
                v139 = (__int64)v155;
                v104 = *(_QWORD *)&v159;
                v140 = *v138;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v140 )
                  v140 = 46;
                *(_BYTE *)(v91 + 1) = v140;
                if ( v139 )
                {
                  v141 = v104;
                  do
                    *(_BYTE *)(++v141 - 1) = 48;
                  while ( v141 != v91 + v139 + 2 );
                  v104 += v139;
                }
              }
              v105 = *((_BYTE *)v11 + 72);
              v96 = v104 + 4;
              *(_BYTE *)(v104 + 3) = 48;
              *(_BYTE *)v104 = v105;
              *(_WORD *)(v104 + 1) = 12331;
              goto LABEL_258;
            }
            if ( v95 == 71 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 )
              {
                if ( v54 )
                {
                  v115 = v90;
                  v150 = v49;
                  v151 = (char *)(v91 + 2);
                  v154 = v89;
                  LODWORD(v155) = v67;
                  v157 = (_BYTE *)v54;
                  *(_QWORD *)&v159 = v54 - 1;
                  v116 = nl_langinfo(0x10000);
                  v117 = *(_QWORD *)&v159;
                  v118 = (__int64)v157;
                  v119 = *v116;
                  LOBYTE(v67) = (_BYTE)v155;
                  v89 = (char *)v154;
                  v96 = (unsigned __int64)v151;
                  v49 = v150;
                  LOWORD(v90) = v115;
                  if ( !v119 )
                    v119 = 46;
                  *(_BYTE *)(v91 + 1) = v119;
                  if ( v117 )
                  {
                    v120 = v91 + v118 + 1;
                    v121 = v96;
                    do
                      *(_BYTE *)(++v121 - 1) = 48;
                    while ( v121 != v120 );
                    v96 += v117;
                  }
                }
                else
                {
                  LODWORD(v151) = v90;
                  v154 = (void *)v49;
                  v155 = (char *)(v91 + 2);
                  v157 = v89;
                  LODWORD(v159) = v67;
                  v148 = nl_langinfo(0x10000);
                  LOBYTE(v67) = LOBYTE(v159);
                  v89 = v157;
                  v149 = *v148;
                  v96 = (unsigned __int64)v155;
                  v49 = (unsigned __int64)v154;
                  LOWORD(v90) = (_WORD)v151;
                  if ( !v149 )
                    v149 = 46;
                  *(_BYTE *)(v91 + 1) = v149;
                }
                goto LABEL_258;
              }
LABEL_257:
              v96 = v91 + 1;
              goto LABEL_258;
            }
            if ( v95 != 65 )
              goto LABEL_198;
            *(_BYTE *)v91 = 48;
            *(_QWORD *)&v159 = v91 + 2;
            v135 = *((_BYTE *)v11 + 72);
            *(_BYTE *)(v91 + 2) = 48;
            *(_BYTE *)(v91 + 1) = v135 + 23;
            if ( v67 & 0x10 || (v136 = v91 + 3, v54) )
            {
              v143 = v90;
              v150 = v49;
              v151 = v89;
              v154 = (void *)v54;
              LODWORD(v155) = v67;
              v157 = (_BYTE *)(v91 + 4);
              v144 = nl_langinfo(0x10000);
              v145 = (char *)v154;
              v136 = (signed __int64)v157;
              v146 = *v144;
              LOBYTE(v67) = (_BYTE)v155;
              v89 = v151;
              v49 = v150;
              LOWORD(v90) = v143;
              if ( !v146 )
                v146 = 46;
              *(_BYTE *)(v91 + 3) = v146;
              if ( v145 )
              {
                v147 = (char *)v136;
                do
                  *(++v147 - 1) = 48;
                while ( v147 != &v145[v91 + 4] );
                v136 += (signed __int64)v145;
              }
            }
            v137 = *((_BYTE *)v11 + 72);
            v96 = v136 + 3;
            *(_WORD *)(v136 + 1) = 12331;
            v91 = *(_QWORD *)&v159;
            *(_BYTE *)v136 = v137 + 15;
LABEL_258:
            LOWORD(v163) = v90;
            v97 = v96 - (_QWORD)v89;
            if ( v49 > v96 - (unsigned __int64)v89 )
            {
              v98 = v49 - v97;
              v99 = v96 + v98;
              v97 = v96 + v98 - (_QWORD)v89;
              if ( v67 & 2 )
              {
                if ( v98 )
                {
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v99 != v96 );
                }
              }
              else if ( v67 & 0x20 && v91 )
              {
                if ( v91 >= v96 )
                {
                  v91 = v96;
                }
                else
                {
                  v100 = -1LL;
                  do
                  {
                    *(_BYTE *)(v99 + v100) = *(_BYTE *)(v96 + v100);
                    --v100;
                  }
                  while ( v100 != v91 - 1 - v96 );
                }
                if ( v98 )
                {
                  v101 = v91 + v98;
                  do
                    *(_BYTE *)(++v91 - 1) = 48;
                  while ( v91 != v101 );
                }
              }
              else
              {
                v111 = -1LL;
                if ( (unsigned __int64)v89 < v96 )
                {
                  do
                  {
                    *(_BYTE *)(v99 + v111) = *(_BYTE *)(v96 + v111);
                    --v111;
                  }
                  while ( &v89[-v96 - 1] != (char *)v111 );
                  v96 = (unsigned __int64)v89;
                }
                if ( v98 )
                {
                  v112 = v96 + v98;
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v96 != v112 );
                }
              }
            }
            if ( (unsigned __int64)v160 <= v97 )
              goto LABEL_198;
            v102 = v97 + v18;
            v14 = v97 + v18;
            if ( v10 - v18 <= v97 )
            {
              if ( __CFADD__(v97, v18) )
              {
                if ( v10 != -1LL )
                  goto LABEL_88;
              }
              else if ( v10 < v102 )
              {
                if ( v10 )
                {
                  if ( (v10 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_88;
                  v10 *= 2LL;
                  if ( v10 < v102 )
                    goto LABEL_367;
                }
                else
                {
                  if ( v102 <= 0xC )
                  {
                    v10 = 12LL;
                    goto LABEL_275;
                  }
LABEL_367:
                  if ( v102 == -1LL )
                    goto LABEL_88;
                  v10 = v97 + v18;
                }
LABEL_275:
                if ( v13 && v13 != src )
                {
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v103 = (char *)realloc(v13, v10);
                  if ( !v103 )
                    goto LABEL_88;
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  v13 = v103;
                }
                else
                {
                  LOBYTE(v157) = v13 == src;
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v113 = malloc(v10);
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  if ( !v113 )
                    goto LABEL_88;
                  if ( v18 && (_BYTE)v157 )
                  {
                    v114 = (char *)memcpy(v113, v13, v18);
                    v89 = (char *)v160;
                    v97 = *(_QWORD *)&v159;
                    v13 = v114;
                  }
                  else
                  {
                    v13 = (char *)v113;
                  }
                }
              }
            }
            v160 = v89;
            memcpy(&v13[v18], v89, v97);
            if ( v160 != &v172 )
              free(v160);
            goto LABEL_110;
          }
LABEL_369:
          v55 = 12LL;
          goto LABEL_188;
        }
      }
      v55 = 12LL;
      if ( v29 != 65 )
        v55 = 18LL;
      v54 = 0LL;
      if ( v29 != 65 )
        v54 = 6LL;
      goto LABEL_188;
    }
    switch ( v28 )
    {
      case 21:
      case 22:
        v14 = v18;
        **((_QWORD **)v27 + 2) = v18;
        break;
      case 20:
        v14 = v18;
        **((_DWORD **)v27 + 2) = v18;
        break;
      case 19:
        v14 = v18;
        **((_WORD **)v27 + 2) = v18;
        break;
      case 18:
        v14 = v18;
        **((_BYTE **)v27 + 2) = v18;
        break;
      default:
LABEL_402:
        abort();
        return result;
    }
LABEL_110:
    v12 = (_BYTE *)*((_QWORD *)v11 + 1);
    v11 = (char *)v11 + 88;
    v15 = *(_BYTE **)v11;
    ++v156;
    if ( v15 != v12 )
      goto LABEL_14;
LABEL_111:
    v18 = v14;
  }
  v106 = v18;
  v107 = v18 + 1;
  if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
  {
    if ( v10 != -1LL )
      goto LABEL_88;
    goto LABEL_301;
  }
  if ( v10 >= v107 )
    goto LABEL_301;
  if ( v10 )
  {
    if ( (v10 & 0x8000000000000000LL) != 0LL )
      goto LABEL_88;
    v10 *= 2LL;
    if ( v10 >= v107 )
      goto LABEL_297;
    goto LABEL_387;
  }
  if ( v107 > 0xC )
  {
LABEL_387:
    if ( v107 == -1LL )
      goto LABEL_88;
    v10 = v18 + 1;
    goto LABEL_297;
  }
  v10 = 12LL;
LABEL_297:
  v108 = v13 == src;
  if ( !v13 || v108 )
  {
    v142 = malloc(v10);
    if ( !v142 )
      goto LABEL_88;
    if ( v106 && v108 )
      v13 = (char *)memcpy(v142, v13, v106);
    else
      v13 = (char *)v142;
  }
  else
  {
    v109 = (char *)realloc(v13, v10);
    if ( !v109 )
      goto LABEL_126;
    v13 = v109;
  }
LABEL_301:
  v13[v106] = 0;
  if ( v10 > v107 && v13 != src )
  {
    v110 = (char *)realloc(v13, v107);
    if ( v110 )
      v13 = v110;
  }
  if ( ptr )
    free(ptr);
  if ( v168 != &v171 )
    free(v168);
  if ( v165 != &v166 )
    free(v165);
  *v153 = v106;
  return v13;
}

char *__fastcall sub_40FFA0(void *a1, size_t *a2, _BYTE *a3, __int64 a4)
{
  _BYTE *v4; // r15@1
  __int64 v5; // rbx@1
  __int64 v6; // rax@3
  unsigned __int64 v7; // rax@5
  size_t v8; // rdi@6
  void *v9; // rax@9
  size_t v10; // r12@11
  void *v11; // r14@13
  _BYTE *v12; // r8@13
  char *v13; // rbx@13
  size_t v14; // r15@13
  _BYTE *v15; // rcx@13
  char *v16; // rcx@14
  unsigned __int64 v17; // rax@14
  size_t v18; // r13@14
  bool v19; // dl@18
  void *v20; // rax@19
  char *v21; // rax@22
  void *v22; // rsp@23
  char *v23; // rax@30
  char v24; // r15@34
  __int64 v25; // rax@34
  char *v26; // r8@36
  char *v27; // rdx@36
  int v28; // eax@36
  char v29; // al@37
  int v30; // eax@40
  _BYTE *v31; // r15@40
  __int64 v32; // rdi@41
  _BYTE *v33; // rsi@54
  _BYTE *v34; // rdx@54
  _BYTE *v35; // rsi@56
  _BYTE *v36; // rdx@56
  signed __int64 v37; // rax@59
  char v38; // al@62
  __int64 v39; // rax@62
  signed __int64 v40; // rax@63
  __int64 v41; // rax@65
  signed __int64 v42; // r8@66
  __int64 v43; // rax@67
  unsigned __int64 v44; // rax@68
  char *v45; // r11@75
  int *v46; // rax@76
  char *v47; // r11@76
  unsigned __int64 v48; // rbx@77
  unsigned __int64 v49; // r10@81
  _BYTE *v50; // rdx@82
  _BYTE *v51; // rcx@82
  __int64 v52; // rsi@83
  char *v53; // r8@84
  unsigned __int64 v54; // rdx@85
  unsigned __int64 v55; // rcx@87
  char *v56; // r15@88
  char *result; // rax@98
  unsigned __int64 v58; // rax@100
  char *v59; // rax@107
  __int16 v61; // fps@117
  _BYTE *v65; // rdx@118
  _BYTE *v66; // rdi@118
  int v67; // er11@118
  __int64 v68; // rcx@119
  char *v69; // rcx@120
  char *v70; // rdi@128
  int *v71; // r9@128
  int v72; // eax@130
  int v73; // edx@131
  __int64 v74; // rax@138
  unsigned __int8 v75; // cf@138
  unsigned __int64 v76; // rax@138
  bool v77; // bl@144
  char *v78; // rax@146
  __int64 v79; // r9@148
  signed int v80; // ebx@154
  __int64 v81; // rax@167
  long double v82; // fst7@167
  __int64 v83; // rax@171
  char *v84; // rdi@171
  __int128 v85; // xmm0@171
  unsigned __int64 v86; // rax@188
  void *v87; // rax@190
  char *v88; // rax@193
  char *v89; // rcx@193
  int v90; // er8@194
  unsigned __int64 v91; // r15@195
  void *v92; // rax@201
  char *v93; // rax@216
  void *v94; // rax@222
  char v95; // al@254
  unsigned __int64 v96; // r9@257
  size_t v97; // r8@258
  unsigned __int64 v98; // r10@259
  unsigned __int64 v99; // rdi@259
  signed __int64 v100; // rax@263
  unsigned __int64 v101; // r10@266
  unsigned __int64 v102; // rax@269
  char *v103; // rax@277
  signed __int64 v104; // rsi@286
  char v105; // al@287
  size_t v106; // r15@292
  size_t v107; // r14@292
  bool v108; // r13@297
  char *v109; // rax@299
  char *v110; // rax@303
  signed __int64 v111; // rax@316
  unsigned __int64 v112; // r10@320
  void *v113; // rax@323
  char *v114; // rax@326
  __int16 v115; // ST34_2@330
  char *v116; // rax@330
  __int64 v117; // rsi@330
  __int64 v118; // rdx@330
  char v119; // al@330
  signed __int64 v120; // rdx@333
  unsigned __int64 v121; // rax@333
  char *v122; // rax@340
  __int64 v123; // rdx@340
  char v124; // al@340
  unsigned __int64 v125; // rax@343
  signed __int64 v126; // rsi@348
  signed __int64 v127; // r9@348
  __int64 v128; // rdx@348
  signed __int64 v129; // rax@354
  _BYTE *v130; // rsi@355
  _BYTE *v131; // rdi@357
  __int64 v132; // rax@357
  signed __int64 v133; // rsi@357
  unsigned __int64 v134; // rax@359
  char v135; // al@371
  signed __int64 v136; // rsi@372
  char v137; // al@373
  char *v138; // rax@374
  __int64 v139; // rdx@374
  char v140; // al@374
  signed __int64 v141; // rax@377
  void *v142; // rax@381
  __int16 v143; // ST34_2@389
  char *v144; // rax@389
  char *v145; // rdx@389
  char v146; // al@389
  char *v147; // rax@392
  char *v148; // rax@397
  char v149; // al@397
  unsigned __int64 v150; // [sp+28h] [bp-6E8h]@23
  char *v151; // [sp+30h] [bp-6E0h]@76
  void *ptr; // [sp+38h] [bp-6D8h]@10
  size_t *v153; // [sp+40h] [bp-6D0h]@1
  void *v154; // [sp+48h] [bp-6C8h]@128
  char *v155; // [sp+50h] [bp-6C0h]@76
  __int64 v156; // [sp+58h] [bp-6B8h]@13
  _BYTE *v157; // [sp+60h] [bp-6B0h]@19
  unsigned __int64 v158; // [sp+68h] [bp-6A8h]@9
  long double v159; // [sp+70h] [bp-6A0h]@19
  void *v160; // [sp+80h] [bp-690h]@19
  void *src; // [sp+88h] [bp-688h]@1
  int v162; // [sp+94h] [bp-67Ch]@77
  unsigned int v163; // [sp+98h] [bp-678h]@64
  char v164; // [sp+A0h] [bp-670h]@1
  void *v165; // [sp+A8h] [bp-668h]@36
  __int64 v166; // [sp+B0h] [bp-660h]@95
  __int64 v167; // [sp+190h] [bp-580h]@1
  void *v168; // [sp+198h] [bp-578h]@13
  __int64 v169; // [sp+1A0h] [bp-570h]@3
  __int64 v170; // [sp+1A8h] [bp-568h]@5
  __int64 v171; // [sp+1B0h] [bp-560h]@93
  char v172; // [sp+420h] [bp-2F0h]@252

  v4 = a3;
  v5 = a4;
  src = a1;
  v153 = a2;
  if ( sub_411CE0(a3, &v167, &v164) < 0 )
    return 0LL;
  if ( sub_411AC0(v5, &v164) < 0 )
  {
    if ( v168 != &v171 )
      free(v168);
    if ( v165 != &v166 )
      free(v165);
    v13 = 0LL;
    *__errno_location() = 22;
    return v13;
  }
  v6 = v169 + 7;
  if ( (unsigned __int64)(v169 + 7) <= 6 )
    v6 = -1LL;
  v75 = __CFADD__(v170, v6);
  v7 = v170 + v6;
  if ( v75 )
    goto LABEL_112;
  v8 = v7 + 6;
  if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
    goto LABEL_112;
  if ( v8 <= 0xF9F )
  {
    ptr = 0LL;
    v22 = alloca(v7 + 14);
    v158 = ((unsigned __int64)&v150 + 7) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    if ( v8 == -1LL )
      goto LABEL_112;
    v9 = malloc(v8);
    v158 = (unsigned __int64)v9;
    if ( !v9 )
      goto LABEL_112;
    ptr = v9;
  }
  v10 = 0LL;
  if ( src )
    v10 = *v153;
  v11 = v168;
  v12 = v4;
  v13 = (char *)src;
  v156 = 0LL;
  v14 = 0LL;
  v15 = *(_BYTE **)v168;
  if ( *(_BYTE **)v168 == v12 )
    goto LABEL_111;
LABEL_14:
  v16 = (char *)(v15 - v12);
  v17 = (unsigned __int64)&v16[v14];
  v18 = (size_t)&v16[v14];
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
        v157 = v12;
        LOBYTE(v159) = v19;
        v160 = v16;
        v20 = malloc(v10);
        v16 = (char *)v160;
        v12 = v157;
        if ( !v20 )
          goto LABEL_88;
        if ( v14 && LOBYTE(v159) )
        {
          *(_QWORD *)&v159 = v157;
          v21 = (char *)memcpy(v20, v13, v14);
          v16 = (char *)v160;
          v12 = *(_BYTE **)&v159;
          v13 = v21;
        }
        else
        {
          v13 = (char *)v20;
        }
        goto LABEL_32;
      }
LABEL_29:
      if ( !v19 )
      {
        *(_QWORD *)&v159 = v12;
        v160 = v16;
        v23 = (char *)realloc(v13, v10);
        if ( !v23 )
          goto LABEL_126;
        v16 = (char *)v160;
        v12 = *(_BYTE **)&v159;
        v13 = v23;
        goto LABEL_32;
      }
      goto LABEL_19;
    }
    if ( v17 == -1LL )
      goto LABEL_88;
    v10 = (size_t)&v16[v14];
    goto LABEL_28;
  }
LABEL_32:
  memcpy(&v13[v14], v12, (size_t)v16);
  while ( v167 != v156 )
  {
    v24 = *((_BYTE *)v11 + 72);
    v25 = *((_QWORD *)v11 + 10);
    if ( v24 == 37 )
    {
      if ( v25 != -1 )
        goto LABEL_198;
      v58 = v18 + 1;
      v14 = v18 + 1;
      if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
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
            goto LABEL_234;
        }
        else
        {
          if ( v58 <= 0xC )
          {
            v10 = 12LL;
            goto LABEL_105;
          }
LABEL_234:
          if ( v58 == -1LL )
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
          *(_QWORD *)&v159 = __errno_location();
          goto LABEL_127;
        }
        LOBYTE(v160) = v13 == src;
        v94 = malloc(v10);
        if ( !v94 )
          goto LABEL_88;
        if ( v18 && (_BYTE)v160 )
          v13 = (char *)memcpy(v94, v13, v18);
        else
          v13 = (char *)v94;
      }
LABEL_109:
      v13[v18] = 37;
      goto LABEL_110;
    }
    if ( v25 == -1 )
      goto LABEL_198;
    v26 = (char *)v165;
    v27 = (char *)v165 + 32 * v25;
    v28 = *(_DWORD *)v27;
    LODWORD(v160) = *(_DWORD *)v27;
    if ( v24 != 110 )
    {
      v29 = v24 & 0xDF;
      if ( (unsigned __int8)((v24 & 0xDF) - 69) > 2u && v29 != 65
        || (_DWORD)v160 != 12
        || (_FST7 = *((long double *)v27 + 1), _FST7 != _FST7 + _FST7) )
      {
        v30 = *((_DWORD *)v11 + 4);
        v31 = (_BYTE *)(v158 + 1);
        *(_BYTE *)v158 = 37;
        if ( v30 & 1 )
        {
          v32 = v158;
          *(_BYTE *)(v158 + 1) = 39;
          v31 = (_BYTE *)(v32 + 2);
        }
        if ( v30 & 2 )
          *v31++ = 45;
        if ( v30 & 4 )
          *v31++ = 43;
        if ( v30 & 8 )
          *v31++ = 32;
        if ( v30 & 0x10 )
          *v31++ = 35;
        if ( v30 & 0x40 )
          *v31++ = 73;
        if ( v30 & 0x20 )
          *v31++ = 48;
        v33 = (_BYTE *)*((_QWORD *)v11 + 3);
        v34 = (_BYTE *)*((_QWORD *)v11 + 4);
        if ( v33 != v34 )
        {
          v157 = v26;
          *(_QWORD *)&v159 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v157 = v26;
          *(_QWORD *)&v159 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        if ( (unsigned int)v160 <= 0x10 )
        {
          v37 = 1LL << (char)v160;
          if ( (1LL << (char)v160) & 0x14180 )
            goto LABEL_125;
          if ( BYTE1(v37) & 0x10 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( !(BYTE1(v37) & 6) )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = *((_BYTE *)v11 + 72);
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = (signed __int64)&v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v157) = 1;
            v163 = *(_DWORD *)(v40 + 16);
            goto LABEL_65;
          }
LABEL_198:
          abort();
        }
        LODWORD(v157) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = (signed __int64)&v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_198;
          v43 = (unsigned int)v157;
          *(&v163 + v43) = *(_DWORD *)(v42 + 16);
          LODWORD(v157) = v43 + 1;
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
              *(_QWORD *)&v159 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v168 != &v171 )
                    free(v168);
                  if ( v165 != &v166 )
                    free(v165);
                  v13 = 0LL;
                  **(_DWORD **)&v159 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v159 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v159) = v13 == src;
            v93 = (char *)malloc(v10);
            v45 = v93;
            if ( !v93 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v159) )
              v45 = (char *)memcpy(v93, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v155 = v45;
            v46 = __errno_location();
            v47 = v155;
            v155 = v31;
            *(_QWORD *)&v159 = v46;
            LODWORD(v151) = *v46;
            while ( 2 )
            {
              while ( 2 )
              {
                v48 = 0x7FFFFFFFLL;
                v162 = -1;
                **(_DWORD **)&v159 = 0;
                if ( v10 - v18 <= 0x7FFFFFFF )
                  v48 = v10 - v18;
                switch ( (_DWORD)v160 )
                {
                  default:
                    goto LABEL_402;
                  case 7:
                  case 8:
                  case 9:
                  case 0xA:
                  case 0xF:
                  case 0x10:
                  case 0x11:
                    v70 = &v47[v18];
                    v71 = (int *)*((_QWORD *)v165 + 4 * *((_QWORD *)v11 + 10) + 2);
                    v154 = v47;
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_208;
                    if ( (_DWORD)v157 != 2 )
                      goto LABEL_130;
                    goto LABEL_207;
                  case 5:
                  case 6:
                  case 0xD:
                  case 0xE:
                    v79 = *((_DWORD *)v165 + 8 * *((_QWORD *)v11 + 10) + 4);
                    break;
                  case 0xC:
                    v81 = *((_QWORD *)v11 + 10);
                    v70 = &v47[v18];
                    v154 = v47;
                    v82 = *((long double *)v165 + 2 * v81 + 1);
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_207;
                    if ( (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v71 = &v162;
LABEL_130:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v71);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 1:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                  case 0xB:
                    v83 = *((_QWORD *)v11 + 10);
                    v84 = &v47[v18];
                    v154 = v47;
                    v85 = *((_QWORD *)v165 + 4 * v83 + 2);
                    if ( (_DWORD)v157 == 1 || (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, &v162);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 4:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 3:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 2:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                }
                v70 = &v47[v18];
                v154 = v47;
                if ( (_DWORD)v157 != 1 )
                {
                  if ( (_DWORD)v157 != 2 )
                    goto LABEL_151;
LABEL_207:
                  v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                  v47 = (char *)v154;
LABEL_131:
                  v73 = v162;
                  if ( v162 >= 0 )
                    goto LABEL_132;
LABEL_152:
                  if ( v155[1] )
                  {
                    v155[1] = 0;
                    continue;
                  }
                  if ( v72 < 0 )
                  {
                    v80 = **(_DWORD **)&v159;
                    if ( !**(_DWORD **)&v159 )
                    {
                      v80 = 84;
                      if ( (*((_BYTE *)v11 + 72) & 0xEF) != 99 )
                        v80 = 22;
                    }
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v168 != &v171 )
                      free(v168);
                    if ( v165 != &v166 )
                      free(v165);
                    **(_DWORD **)&v159 = v80;
                    return 0LL;
                  }
                  goto LABEL_135;
                }
                break;
              }
LABEL_208:
              v79 = v163;
LABEL_151:
              v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v79);
              v73 = v162;
              v47 = (char *)v154;
              if ( v162 < 0 )
                goto LABEL_152;
LABEL_132:
              if ( v73 < v48 && *(&v47[v73] + v18) )
                goto LABEL_198;
              if ( v73 < v72 )
              {
LABEL_135:
                v162 = v72;
                v73 = v72;
              }
              if ( (unsigned int)(v73 + 1) < v48 )
              {
                v13 = v47;
                v14 = v18 + v73;
                **(_DWORD **)&v159 = (_DWORD)v151;
                goto LABEL_110;
              }
              if ( v10 - v18 > 0x7FFFFFFE )
              {
                if ( v47 != src && v47 )
                  free(v47);
                if ( ptr )
                  free(ptr);
                if ( v168 != &v171 )
                  free(v168);
                if ( v165 != &v166 )
                  free(v165);
                v13 = 0LL;
                **(_DWORD **)&v159 = 75;
                return v13;
              }
              v74 = (unsigned int)(v73 + 2);
              v75 = __CFADD__(v18, v74);
              v76 = v18 + v74;
              if ( (v10 & 0x8000000000000000LL) != 0LL )
              {
                if ( v10 != -1LL )
                  goto LABEL_200;
              }
              else
              {
                if ( v75 )
                  goto LABEL_200;
                if ( 2 * v10 >= v76 )
                  v76 = 2 * v10;
                if ( v10 < v76 )
                {
                  v10 *= 2LL;
                  if ( v10 < v76 )
                  {
                    if ( v76 == -1LL )
                    {
LABEL_200:
                      v56 = v47;
                      goto LABEL_89;
                    }
                    v10 = v76;
                  }
                  v77 = v47 == src;
                  if ( !v47 || v77 )
                  {
                    v154 = v47;
                    v92 = malloc(v10);
                    v47 = (char *)v154;
                    if ( !v92 )
                      goto LABEL_200;
                    if ( v18 && v77 )
                      v47 = (char *)memcpy(v92, v154, v18);
                    else
                      v47 = (char *)v92;
                  }
                  else
                  {
                    v154 = v47;
                    v78 = (char *)realloc(v47, v10);
                    v47 = (char *)v154;
                    if ( !v78 )
                      goto LABEL_200;
                    v47 = v78;
                  }
                }
              }
              continue;
            }
          }
          if ( v44 != -1LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      v65 = (_BYTE *)*((_QWORD *)v11 + 3);
      v66 = (_BYTE *)*((_QWORD *)v11 + 4);
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
          v160 = (void *)-1;
          while ( 1 )
          {
            v126 = (signed __int64)(v65 + 1);
            v127 = -1LL;
            v128 = *v65 - 48;
            if ( v49 <= 0x1999999999999999LL )
              v127 = 10 * v49;
            v75 = __CFADD__(v127, v128);
            v49 = v127 + v128;
            v65 = (_BYTE *)v126;
            if ( v75 )
            {
              if ( v66 == (_BYTE *)v126 )
              {
LABEL_81:
                v49 = (unsigned __int64)v160;
                goto LABEL_82;
              }
              while ( *(++v65 - 1) != 48 )
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
        v69 = (char *)v165 + 32 * v68;
        if ( *(_DWORD *)v69 != 5 )
          goto LABEL_198;
        v49 = *((_DWORD *)v69 + 4);
        if ( (v49 & 0x80000000) != 0LL )
        {
          v67 |= 2u;
          v49 = -(signed __int64)v49;
        }
      }
LABEL_82:
      v50 = (_BYTE *)*((_QWORD *)v11 + 6);
      v51 = (_BYTE *)*((_QWORD *)v11 + 7);
      if ( v50 != v51 )
      {
        v52 = *((_QWORD *)v11 + 8);
        if ( v52 == -1 )
        {
          v129 = (signed __int64)(v50 + 1);
          v54 = 0LL;
          if ( v51 != (_BYTE *)v129 )
          {
            v130 = (_BYTE *)v129;
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
          goto LABEL_369;
        }
        v53 = (char *)v165 + 32 * v52;
        if ( *(_DWORD *)v53 != 5 )
          goto LABEL_198;
        v54 = *((_DWORD *)v53 + 4);
        if ( (v54 & 0x80000000) == 0LL )
        {
LABEL_86:
          if ( v54 )
          {
            v55 = v54 + 12;
            if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
              goto LABEL_88;
LABEL_188:
            v86 = v55;
            if ( v49 >= v55 )
              v86 = v49;
            v75 = __CFADD__(v86, 1LL);
            v87 = (void *)(v86 + 1);
            v160 = v87;
            if ( v75 )
              goto LABEL_88;
            if ( (unsigned __int64)v87 <= 0x2BC )
            {
              v89 = &v172;
            }
            else
            {
              v154 = (void *)v49;
              v155 = (char *)v54;
              LODWORD(v157) = v67;
              v159 = _FST7;
              if ( v87 == (void *)-1 )
                goto LABEL_88;
              v88 = (char *)malloc((size_t)v87);
              v67 = (signed int)v157;
              _FST7 = v159;
              v89 = v88;
              v54 = (unsigned __int64)v155;
              v49 = (unsigned __int64)v154;
              if ( !v88 )
                goto LABEL_88;
            }
            v90 = (unsigned __int16)v163;
            LOWORD(v163) = v163 | 0x300;
            __asm { fxam }
            if ( HIBYTE(v61) & 2 )
            {
              *v89 = 45;
              _FST7 = -_FST7;
              v91 = (unsigned __int64)(v89 + 1);
            }
            else if ( v67 & 4 )
            {
              v91 = (unsigned __int64)(v89 + 1);
              *v89 = 43;
            }
            else
            {
              v91 = (unsigned __int64)v89;
              if ( v67 & 8 )
              {
                v91 = (unsigned __int64)(v89 + 1);
                *v89 = 32;
              }
            }
            if ( _FST7 > 0.0 )
            {
              if ( _FST7 + _FST7 != _FST7 )
                goto LABEL_198;
              v96 = v91 + 3;
              if ( (unsigned __int8)(*((_BYTE *)v11 + 72) - 65) > 0x19u )
              {
                *(_BYTE *)(v91 + 2) = 102;
                *(_WORD *)v91 = 28265;
                v91 = 0LL;
              }
              else
              {
                *(_BYTE *)(v91 + 2) = 70;
                *(_WORD *)v91 = 20041;
                v91 = 0LL;
              }
              goto LABEL_258;
            }
            if ( _FST7 != 0.0 )
              goto LABEL_198;
            v95 = *((_BYTE *)v11 + 72) & 0xDF;
            if ( v95 == 70 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || v54 )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v122 = nl_langinfo(0x10000);
                v123 = (__int64)v155;
                v96 = *(_QWORD *)&v159;
                v124 = *v122;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v124 )
                  v124 = 46;
                *(_BYTE *)(v91 + 1) = v124;
                if ( v123 )
                {
                  v125 = v96;
                  do
                    *(_BYTE *)(++v125 - 1) = 48;
                  while ( v125 != v91 + v123 + 2 );
                  v96 += v123;
                }
                goto LABEL_258;
              }
              goto LABEL_257;
            }
            if ( v95 == 69 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || (v104 = v91 + 1, v54) )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v138 = nl_langinfo(0x10000);
                v139 = (__int64)v155;
                v104 = *(_QWORD *)&v159;
                v140 = *v138;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v140 )
                  v140 = 46;
                *(_BYTE *)(v91 + 1) = v140;
                if ( v139 )
                {
                  v141 = v104;
                  do
                    *(_BYTE *)(++v141 - 1) = 48;
                  while ( v141 != v91 + v139 + 2 );
                  v104 += v139;
                }
              }
              v105 = *((_BYTE *)v11 + 72);
              v96 = v104 + 4;
              *(_BYTE *)(v104 + 3) = 48;
              *(_BYTE *)v104 = v105;
              *(_WORD *)(v104 + 1) = 12331;
              goto LABEL_258;
            }
            if ( v95 == 71 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 )
              {
                if ( v54 )
                {
                  v115 = v90;
                  v150 = v49;
                  v151 = (char *)(v91 + 2);
                  v154 = v89;
                  LODWORD(v155) = v67;
                  v157 = (_BYTE *)v54;
                  *(_QWORD *)&v159 = v54 - 1;
                  v116 = nl_langinfo(0x10000);
                  v117 = *(_QWORD *)&v159;
                  v118 = (__int64)v157;
                  v119 = *v116;
                  LOBYTE(v67) = (_BYTE)v155;
                  v89 = (char *)v154;
                  v96 = (unsigned __int64)v151;
                  v49 = v150;
                  LOWORD(v90) = v115;
                  if ( !v119 )
                    v119 = 46;
                  *(_BYTE *)(v91 + 1) = v119;
                  if ( v117 )
                  {
                    v120 = v91 + v118 + 1;
                    v121 = v96;
                    do
                      *(_BYTE *)(++v121 - 1) = 48;
                    while ( v121 != v120 );
                    v96 += v117;
                  }
                }
                else
                {
                  LODWORD(v151) = v90;
                  v154 = (void *)v49;
                  v155 = (char *)(v91 + 2);
                  v157 = v89;
                  LODWORD(v159) = v67;
                  v148 = nl_langinfo(0x10000);
                  LOBYTE(v67) = LOBYTE(v159);
                  v89 = v157;
                  v149 = *v148;
                  v96 = (unsigned __int64)v155;
                  v49 = (unsigned __int64)v154;
                  LOWORD(v90) = (_WORD)v151;
                  if ( !v149 )
                    v149 = 46;
                  *(_BYTE *)(v91 + 1) = v149;
                }
                goto LABEL_258;
              }
LABEL_257:
              v96 = v91 + 1;
              goto LABEL_258;
            }
            if ( v95 != 65 )
              goto LABEL_198;
            *(_BYTE *)v91 = 48;
            *(_QWORD *)&v159 = v91 + 2;
            v135 = *((_BYTE *)v11 + 72);
            *(_BYTE *)(v91 + 2) = 48;
            *(_BYTE *)(v91 + 1) = v135 + 23;
            if ( v67 & 0x10 || (v136 = v91 + 3, v54) )
            {
              v143 = v90;
              v150 = v49;
              v151 = v89;
              v154 = (void *)v54;
              LODWORD(v155) = v67;
              v157 = (_BYTE *)(v91 + 4);
              v144 = nl_langinfo(0x10000);
              v145 = (char *)v154;
              v136 = (signed __int64)v157;
              v146 = *v144;
              LOBYTE(v67) = (_BYTE)v155;
              v89 = v151;
              v49 = v150;
              LOWORD(v90) = v143;
              if ( !v146 )
                v146 = 46;
              *(_BYTE *)(v91 + 3) = v146;
              if ( v145 )
              {
                v147 = (char *)v136;
                do
                  *(++v147 - 1) = 48;
                while ( v147 != &v145[v91 + 4] );
                v136 += (signed __int64)v145;
              }
            }
            v137 = *((_BYTE *)v11 + 72);
            v96 = v136 + 3;
            *(_WORD *)(v136 + 1) = 12331;
            v91 = *(_QWORD *)&v159;
            *(_BYTE *)v136 = v137 + 15;
LABEL_258:
            LOWORD(v163) = v90;
            v97 = v96 - (_QWORD)v89;
            if ( v49 > v96 - (unsigned __int64)v89 )
            {
              v98 = v49 - v97;
              v99 = v96 + v98;
              v97 = v96 + v98 - (_QWORD)v89;
              if ( v67 & 2 )
              {
                if ( v98 )
                {
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v99 != v96 );
                }
              }
              else if ( v67 & 0x20 && v91 )
              {
                if ( v91 >= v96 )
                {
                  v91 = v96;
                }
                else
                {
                  v100 = -1LL;
                  do
                  {
                    *(_BYTE *)(v99 + v100) = *(_BYTE *)(v96 + v100);
                    --v100;
                  }
                  while ( v100 != v91 - 1 - v96 );
                }
                if ( v98 )
                {
                  v101 = v91 + v98;
                  do
                    *(_BYTE *)(++v91 - 1) = 48;
                  while ( v91 != v101 );
                }
              }
              else
              {
                v111 = -1LL;
                if ( (unsigned __int64)v89 < v96 )
                {
                  do
                  {
                    *(_BYTE *)(v99 + v111) = *(_BYTE *)(v96 + v111);
                    --v111;
                  }
                  while ( &v89[-v96 - 1] != (char *)v111 );
                  v96 = (unsigned __int64)v89;
                }
                if ( v98 )
                {
                  v112 = v96 + v98;
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v96 != v112 );
                }
              }
            }
            if ( (unsigned __int64)v160 <= v97 )
              goto LABEL_198;
            v102 = v97 + v18;
            v14 = v97 + v18;
            if ( v10 - v18 <= v97 )
            {
              if ( __CFADD__(v97, v18) )
              {
                if ( v10 != -1LL )
                  goto LABEL_88;
              }
              else if ( v10 < v102 )
              {
                if ( v10 )
                {
                  if ( (v10 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_88;
                  v10 *= 2LL;
                  if ( v10 < v102 )
                    goto LABEL_367;
                }
                else
                {
                  if ( v102 <= 0xC )
                  {
                    v10 = 12LL;
                    goto LABEL_275;
                  }
LABEL_367:
                  if ( v102 == -1LL )
                    goto LABEL_88;
                  v10 = v97 + v18;
                }
LABEL_275:
                if ( v13 && v13 != src )
                {
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v103 = (char *)realloc(v13, v10);
                  if ( !v103 )
                    goto LABEL_88;
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  v13 = v103;
                }
                else
                {
                  LOBYTE(v157) = v13 == src;
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v113 = malloc(v10);
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  if ( !v113 )
                    goto LABEL_88;
                  if ( v18 && (_BYTE)v157 )
                  {
                    v114 = (char *)memcpy(v113, v13, v18);
                    v89 = (char *)v160;
                    v97 = *(_QWORD *)&v159;
                    v13 = v114;
                  }
                  else
                  {
                    v13 = (char *)v113;
                  }
                }
              }
            }
            v160 = v89;
            memcpy(&v13[v18], v89, v97);
            if ( v160 != &v172 )
              free(v160);
            goto LABEL_110;
          }
LABEL_369:
          v55 = 12LL;
          goto LABEL_188;
        }
      }
      v55 = 12LL;
      if ( v29 != 65 )
        v55 = 18LL;
      v54 = 0LL;
      if ( v29 != 65 )
        v54 = 6LL;
      goto LABEL_188;
    }
    switch ( v28 )
    {
      case 21:
      case 22:
        v14 = v18;
        **((_QWORD **)v27 + 2) = v18;
        break;
      case 20:
        v14 = v18;
        **((_DWORD **)v27 + 2) = v18;
        break;
      case 19:
        v14 = v18;
        **((_WORD **)v27 + 2) = v18;
        break;
      case 18:
        v14 = v18;
        **((_BYTE **)v27 + 2) = v18;
        break;
      default:
LABEL_402:
        abort();
        return result;
    }
LABEL_110:
    v12 = (_BYTE *)*((_QWORD *)v11 + 1);
    v11 = (char *)v11 + 88;
    v15 = *(_BYTE **)v11;
    ++v156;
    if ( v15 != v12 )
      goto LABEL_14;
LABEL_111:
    v18 = v14;
  }
  v106 = v18;
  v107 = v18 + 1;
  if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
  {
    if ( v10 != -1LL )
      goto LABEL_88;
    goto LABEL_301;
  }
  if ( v10 >= v107 )
    goto LABEL_301;
  if ( v10 )
  {
    if ( (v10 & 0x8000000000000000LL) != 0LL )
      goto LABEL_88;
    v10 *= 2LL;
    if ( v10 >= v107 )
      goto LABEL_297;
    goto LABEL_387;
  }
  if ( v107 > 0xC )
  {
LABEL_387:
    if ( v107 == -1LL )
      goto LABEL_88;
    v10 = v18 + 1;
    goto LABEL_297;
  }
  v10 = 12LL;
LABEL_297:
  v108 = v13 == src;
  if ( !v13 || v108 )
  {
    v142 = malloc(v10);
    if ( !v142 )
      goto LABEL_88;
    if ( v106 && v108 )
      v13 = (char *)memcpy(v142, v13, v106);
    else
      v13 = (char *)v142;
  }
  else
  {
    v109 = (char *)realloc(v13, v10);
    if ( !v109 )
      goto LABEL_126;
    v13 = v109;
  }
LABEL_301:
  v13[v106] = 0;
  if ( v10 > v107 && v13 != src )
  {
    v110 = (char *)realloc(v13, v107);
    if ( v110 )
      v13 = v110;
  }
  if ( ptr )
    free(ptr);
  if ( v168 != &v171 )
    free(v168);
  if ( v165 != &v166 )
    free(v165);
  *v153 = v106;
  return v13;
}

signed __int64 __fastcall sub_411AC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  unsigned __int64 v3; // rdx@2
  unsigned int v4; // ecx@4
  _QWORD *v5; // r10@5
  signed __int64 result; // rax@8
  unsigned int v7; // ecx@9
  _DWORD *v8; // r10@10
  unsigned int v9; // ecx@12
  _DWORD *v10; // r10@13
  unsigned int v11; // ecx@15
  _DWORD *v12; // r10@16
  unsigned int v13; // ecx@22
  _QWORD *v14; // r10@23
  long double *v15; // rcx@25
  unsigned int v16; // ecx@26
  void **v17; // r10@27
  void *v18; // rcx@28
  unsigned int v19; // ecx@31
  const char **v20; // r10@32
  const char *v21; // rcx@33

  v2 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 )
  {
    v3 = 0LL;
    while ( 2 )
    {
      switch ( *(_DWORD *)v2 )
      {
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
          v4 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v5 = *(_QWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v5 + 1;
          }
          else
          {
            v5 = (_QWORD *)(*(_QWORD *)(a1 + 16) + v4);
            *(_DWORD *)a1 = v4 + 8;
          }
          *(_QWORD *)(v2 + 16) = *v5;
          goto LABEL_7;
        case 5:
        case 6:
        case 0xD:
        case 0xE:
          v7 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v8 = *(_DWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v8 + 2;
          }
          else
          {
            v8 = (_DWORD *)(*(_QWORD *)(a1 + 16) + v7);
            *(_DWORD *)a1 = v7 + 8;
          }
          *(_DWORD *)(v2 + 16) = *v8;
          goto LABEL_7;
        case 3:
        case 4:
          v9 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v10 = *(_DWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v10 + 2;
          }
          else
          {
            v10 = (_DWORD *)(*(_QWORD *)(a1 + 16) + v9);
            *(_DWORD *)a1 = v9 + 8;
          }
          *(_WORD *)(v2 + 16) = *v10;
          goto LABEL_7;
        case 1:
        case 2:
          v11 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v12 = *(_DWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v12 + 2;
          }
          else
          {
            v12 = (_DWORD *)(*(_QWORD *)(a1 + 16) + v11);
            *(_DWORD *)a1 = v11 + 8;
          }
          *(_BYTE *)(v2 + 16) = *v12;
          goto LABEL_7;
        case 0xB:
          v13 = *(_DWORD *)(a1 + 4);
          if ( v13 > 0xAF )
          {
            v14 = *(_QWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v14 + 1;
          }
          else
          {
            v14 = (_QWORD *)(*(_QWORD *)(a1 + 16) + v13);
            *(_DWORD *)(a1 + 4) = v13 + 16;
          }
          *(_QWORD *)(v2 + 16) = *v14;
          goto LABEL_7;
        case 0xC:
          v15 = (long double *)((*(_QWORD *)(a1 + 8) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
          *(_QWORD *)(a1 + 8) = v15 + 1;
          *(long double *)(v2 + 16) = *v15;
          goto LABEL_7;
        case 0x10:
          v16 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v17 = *(void ***)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v17 + 1;
          }
          else
          {
            v17 = (void **)(*(_QWORD *)(a1 + 16) + v16);
            *(_DWORD *)a1 = v16 + 8;
          }
          v18 = *v17;
          if ( !*v17 )
            v18 = &unk_417FE0;
          *(_QWORD *)(v2 + 16) = v18;
          goto LABEL_7;
        case 0xF:
          v19 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v20 = *(const char ***)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v20 + 1;
          }
          else
          {
            v20 = (const char **)(*(_QWORD *)(a1 + 16) + v19);
            *(_DWORD *)a1 = v19 + 8;
          }
          v21 = *v20;
          if ( !*v20 )
            v21 = "(NULL)";
          *(_QWORD *)(v2 + 16) = v21;
LABEL_7:
          ++v3;
          v2 += 32LL;
          if ( *(_QWORD *)a2 <= v3 )
            goto LABEL_8;
          continue;
        default:
          result = 0xFFFFFFFFLL;
          break;
      }
      break;
    }
  }
  else
  {
LABEL_8:
    result = 0LL;
  }
  return result;
}

signed __int64 __fastcall sub_411CE0(signed __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rcx@1
  signed __int64 *v4; // r8@1
  __int64 v5; // r15@1
  unsigned __int64 v6; // r9@1
  unsigned __int64 v7; // r11@1
  signed __int64 v8; // r13@1
  signed __int64 v9; // rbp@2
  unsigned __int64 v11; // r14@7
  signed __int64 v12; // r12@7
  char v13; // bl@7
  signed __int64 v14; // rcx@17
  signed int v15; // eax@27
  signed __int64 v16; // rax@37
  int v17; // eax@39
  unsigned __int64 v18; // rbx@40
  void *v19; // r13@41
  unsigned __int64 v20; // rdx@42
  char *v21; // rax@46
  bool v22; // zf@48
  signed __int64 v23; // rax@49
  char *v24; // rcx@49
  int v25; // eax@51
  unsigned __int64 v26; // rbx@52
  unsigned __int64 v27; // rdx@54
  char *v28; // rax@58
  signed int v29; // ecx@62
  unsigned __int64 v30; // rax@66
  signed int *v31; // rax@69
  signed __int64 v32; // rax@71
  signed __int64 v33; // rbx@74
  void *v34; // r12@75
  _QWORD *v35; // rax@76
  _BYTE *v36; // rax@8
  unsigned __int64 v37; // rax@84
  unsigned __int64 v38; // r9@88
  void *v39; // rax@92
  const void *v40; // rsi@92
  _QWORD *v41; // rax@95
  signed __int64 *v42; // ST38_8@96
  unsigned __int64 v43; // ST30_8@96
  _QWORD *v44; // rax@96
  _BYTE *v45; // rdx@99
  unsigned __int64 v46; // rsi@102
  signed __int64 v47; // rdx@104
  __int64 v48; // rax@104
  signed __int64 v49; // rdi@106
  unsigned __int8 v50; // cf@107
  unsigned __int64 v51; // rdx@107
  unsigned __int8 v52; // bl@107
  signed __int64 *v53; // ST08_8@133
  void *v54; // rdi@134
  unsigned __int64 v55; // r9@139
  void *v56; // rax@143
  signed __int64 i; // rcx@149
  signed __int64 v58; // rdx@151
  unsigned __int64 v59; // rax@152
  const void *v60; // rsi@159
  signed __int64 *v61; // ST48_8@159
  unsigned __int64 v62; // ST40_8@159
  unsigned __int64 v63; // ST38_8@159
  signed int v64; // ST30_4@159
  signed __int64 *v65; // ST08_8@162
  void *v66; // rdi@163
  unsigned __int64 v67; // r9@166
  void *v68; // rax@170
  void *v69; // rax@175
  signed __int64 *v70; // ST48_8@177
  unsigned __int64 v71; // ST40_8@177
  unsigned __int64 v72; // ST38_8@177
  signed __int64 v73; // ST30_8@177
  unsigned __int64 v74; // rax@180
  signed __int64 v75; // rsi@182
  __int64 v76; // rdx@182
  signed __int64 v77; // rcx@184
  unsigned __int64 v78; // rdx@185
  unsigned __int8 v79; // si@185
  _BYTE *v80; // rdx@190
  unsigned __int64 v81; // rsi@193
  signed __int64 v82; // rdx@195
  __int64 v83; // rax@195
  char *v84; // rdi@197
  unsigned __int64 v85; // rdx@198
  unsigned __int8 v86; // bl@198
  void *v87; // rax@203
  signed __int64 *v88; // ST48_8@205
  unsigned __int64 v89; // ST40_8@205
  unsigned __int64 v90; // ST38_8@205
  char *v91; // ST30_8@205
  void *src; // [sp+8h] [bp-80h]@1
  unsigned __int64 v93; // [sp+10h] [bp-78h]@1
  unsigned __int64 v94; // [sp+18h] [bp-70h]@1
  unsigned __int64 v95; // [sp+20h] [bp-68h]@1
  signed __int64 v96; // [sp+28h] [bp-60h]@1
  unsigned __int64 v97; // [sp+30h] [bp-58h]@75
  signed __int64 v98; // [sp+30h] [bp-58h]@91
  signed int v99; // [sp+30h] [bp-58h]@142
  char *v100; // [sp+30h] [bp-58h]@169
  signed __int64 *v101; // [sp+38h] [bp-50h]@75
  unsigned __int64 v102; // [sp+38h] [bp-50h]@91
  unsigned __int64 v103; // [sp+38h] [bp-50h]@142
  unsigned __int64 v104; // [sp+38h] [bp-50h]@169
  unsigned __int64 v105; // [sp+40h] [bp-48h]@91
  unsigned __int64 v106; // [sp+40h] [bp-48h]@142
  unsigned __int64 v107; // [sp+40h] [bp-48h]@169
  signed __int64 *v108; // [sp+48h] [bp-40h]@91
  signed __int64 *v109; // [sp+48h] [bp-40h]@142
  signed __int64 *v110; // [sp+48h] [bp-40h]@169

  v3 = (_QWORD *)(a2 + 32);
  v4 = (signed __int64 *)a2;
  v5 = a3;
  v6 = 7LL;
  v7 = 7LL;
  v8 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a2 + 32;
  v96 = a2 + 32;
  *(_QWORD *)a3 = 0LL;
  src = (void *)(a3 + 16);
  *(_QWORD *)(a3 + 8) = a3 + 16;
  v94 = 0LL;
  v93 = 0LL;
  v95 = 0LL;
  while ( 1 )
  {
    if ( !*(_BYTE *)a1 )
    {
      v3[11 * v8] = a1;
      v4[2] = v93;
      v4[3] = v94;
      return 0LL;
    }
    v9 = a1 + 1;
    if ( *(_BYTE *)a1 == 37 )
      break;
LABEL_3:
    a1 = v9;
  }
  v11 = -1LL;
  v12 = (signed __int64)&v3[11 * v8];
  *(_QWORD *)v12 = a1;
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_QWORD *)(v12 + 32) = 0LL;
  *(_QWORD *)(v12 + 40) = -1LL;
  *(_QWORD *)(v12 + 48) = 0LL;
  *(_QWORD *)(v12 + 56) = 0LL;
  *(_QWORD *)(v12 + 64) = -1LL;
  *(_QWORD *)(v12 + 80) = -1LL;
  v13 = *(_BYTE *)(a1 + 1);
  if ( (unsigned __int8)(v13 - 48) > 9u )
    goto LABEL_17;
  v36 = (_BYTE *)(a1 + 1);
  do
    ++v36;
  while ( (unsigned __int8)(*v36 - 48) <= 9u );
  if ( *v36 != 36 )
  {
    v11 = -1LL;
    goto LABEL_17;
  }
  v74 = 0LL;
  do
  {
    v75 = -1LL;
    v76 = v13 - 48;
    if ( v74 <= 0x1999999999999999LL )
      v75 = 10 * v74;
    v77 = v9;
    while ( 1 )
    {
      v13 = *(_BYTE *)(v9 + 1);
      v50 = __CFADD__(v75, v76);
      v78 = v75 + v76;
      v74 = v78;
      ++v9;
      v79 = v13 - 48;
      if ( !v50 )
        break;
      if ( v79 > 9u )
        goto LABEL_131;
      v75 = -1LL;
      v77 = v9;
      v76 = v13 - 48;
    }
  }
  while ( v79 <= 9u );
  v11 = v78 - 1;
  if ( v78 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_131;
  v9 = v77 + 2;
  v13 = *(_BYTE *)(v77 + 2);
  while ( 1 )
  {
LABEL_17:
    v14 = v9 + 1;
    if ( v13 == 39 )
    {
      *(_DWORD *)(v12 + 16) |= 1u;
      goto LABEL_16;
    }
    if ( v13 == 45 )
    {
      *(_DWORD *)(v12 + 16) |= 2u;
      goto LABEL_16;
    }
    if ( v13 == 43 )
    {
      *(_DWORD *)(v12 + 16) |= 4u;
      goto LABEL_16;
    }
    if ( v13 == 32 )
    {
      *(_DWORD *)(v12 + 16) |= 8u;
      goto LABEL_16;
    }
    if ( v13 == 35 )
    {
      *(_DWORD *)(v12 + 16) |= 0x10u;
      goto LABEL_16;
    }
    if ( v13 != 48 )
      break;
    *(_DWORD *)(v12 + 16) |= 0x20u;
LABEL_16:
    v13 = *(_BYTE *)v14;
    ++v9;
  }
  if ( v13 == 73 )
  {
    *(_DWORD *)(v12 + 16) |= 0x40u;
    goto LABEL_16;
  }
  if ( v13 != 42 )
  {
    if ( (unsigned __int8)(v13 - 48) <= 9u )
    {
      *(_QWORD *)(v12 + 24) = v9;
      if ( (unsigned __int8)(*(_BYTE *)v9 - 48) <= 9u )
      {
        for ( i = v9; ; ++i )
        {
          v58 = i + 1;
          if ( (unsigned __int8)(*(_BYTE *)(i + 1) - 48) > 9u )
            break;
        }
        v14 = i + 2;
        v59 = v58 - v9;
        v9 = v58;
        if ( v93 >= v59 )
          v59 = v93;
        v93 = v59;
      }
      *(_QWORD *)(v12 + 32) = v9;
      v13 = *(_BYTE *)v9;
    }
    goto LABEL_26;
  }
  v16 = 1LL;
  *(_QWORD *)(v12 + 24) = v9;
  *(_QWORD *)(v12 + 32) = v14;
  if ( v93 )
    v16 = v93;
  v93 = v16;
  v17 = *(_BYTE *)(v9 + 1);
  if ( (unsigned __int8)(*(_BYTE *)(v9 + 1) - 48) > 9u )
    goto LABEL_215;
  v45 = (_BYTE *)(v9 + 1);
  do
    ++v45;
  while ( (unsigned __int8)(*v45 - 48) <= 9u );
  if ( *v45 != 36 )
  {
LABEL_215:
    v18 = *(_QWORD *)(v12 + 40);
    if ( v18 != -1LL )
      goto LABEL_41;
    *(_QWORD *)(v12 + 40) = v95;
    if ( v95 != -1LL )
    {
      v18 = v95++;
      goto LABEL_41;
    }
    goto LABEL_131;
  }
  v46 = 0LL;
  do
  {
    v47 = -1LL;
    v48 = v17 - 48;
    if ( v46 <= 0x1999999999999999LL )
      v47 = 10 * v46;
    v49 = v14;
    while ( 1 )
    {
      v50 = __CFADD__(v48, v47);
      v51 = v48 + v47;
      v17 = *(_BYTE *)(v14 + 1);
      v46 = v51;
      ++v14;
      v52 = v17 - 48;
      if ( !v50 )
        break;
      if ( v52 > 9u )
        goto LABEL_131;
      v47 = -1LL;
      v49 = v14;
      v48 = v17 - 48;
    }
  }
  while ( v52 <= 9u );
  v18 = v51 - 1;
  if ( v51 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_131;
  *(_QWORD *)(v12 + 40) = v18;
  v14 = v49 + 2;
LABEL_41:
  v19 = *(void **)(v5 + 8);
  if ( v6 > v18 )
  {
    v20 = *(_QWORD *)v5;
    goto LABEL_43;
  }
  v38 = 2 * v6;
  if ( v38 <= v18 )
    v38 = v18 + 1;
  if ( v38 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_160;
  v108 = v4;
  v105 = v38;
  v102 = v7;
  v98 = v14;
  if ( src == v19 )
  {
    v69 = malloc(32 * v38);
    v14 = v98;
    v7 = v102;
    v6 = v105;
    v4 = v108;
    if ( !v69 )
      goto LABEL_163;
    v20 = *(_QWORD *)v5;
    v40 = src;
    v19 = v69;
LABEL_177:
    v70 = v4;
    v71 = v6;
    v72 = v7;
    v73 = v14;
    memcpy(v19, v40, 32 * v20);
    v20 = *(_QWORD *)v5;
    v4 = v70;
    v6 = v71;
    v7 = v72;
    v14 = v73;
    goto LABEL_94;
  }
  v39 = realloc(v19, 32 * v38);
  v40 = *(const void **)(v5 + 8);
  v14 = v98;
  v19 = v39;
  v7 = v102;
  v6 = v105;
  v4 = v108;
  if ( !v39 )
    goto LABEL_161;
  v20 = *(_QWORD *)v5;
  if ( src == v40 )
    goto LABEL_177;
LABEL_94:
  *(_QWORD *)(v5 + 8) = v19;
LABEL_43:
  if ( v20 <= v18 )
  {
    do
      *((_DWORD *)v19 + 8 * ++v20 - 8) = 0;
    while ( v20 <= v18 );
    *(_QWORD *)v5 = v20;
  }
  v21 = (char *)v19 + 32 * v18;
  if ( *(_DWORD *)v21 )
  {
    if ( *(_DWORD *)v21 != 5 )
      goto LABEL_132;
    v13 = *(_BYTE *)v14;
    v9 = v14++;
LABEL_26:
    if ( v13 != 46 )
      goto LABEL_27;
LABEL_48:
    v22 = *(_BYTE *)(v9 + 1) == 42;
    *(_QWORD *)(v12 + 48) = v9;
    if ( !v22 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(v9 + 1) - 48) > 9u )
      {
        v9 = v14;
        v37 = 1LL;
      }
      else
      {
        do
          ++v14;
        while ( (unsigned __int8)(*(_BYTE *)v14 - 48) <= 9u );
        v37 = v14 - v9;
        v9 = v14;
      }
      *(_QWORD *)(v12 + 56) = v14;
      v13 = *(_BYTE *)v14;
      if ( v94 >= v37 )
        v37 = v94;
      v94 = v37;
      goto LABEL_27;
    }
    v23 = 2LL;
    v24 = (char *)(v9 + 2);
    *(_QWORD *)(v12 + 56) = v9 + 2;
    if ( v94 >= 2 )
      v23 = v94;
    v94 = v23;
    v25 = *(_BYTE *)(v9 + 2);
    if ( (unsigned __int8)(*(_BYTE *)(v9 + 2) - 48) > 9u )
      goto LABEL_216;
    v80 = (_BYTE *)(v9 + 2);
    do
      ++v80;
    while ( (unsigned __int8)(*v80 - 48) <= 9u );
    if ( *v80 != 36 )
    {
LABEL_216:
      v26 = *(_QWORD *)(v12 + 64);
      if ( v26 == -1LL )
      {
        *(_QWORD *)(v12 + 64) = v95;
        if ( v95 == -1LL )
          goto LABEL_131;
        v26 = v95++;
      }
LABEL_53:
      v19 = *(void **)(v5 + 8);
      if ( v6 > v26 )
      {
        v27 = *(_QWORD *)v5;
        goto LABEL_55;
      }
      v67 = 2 * v6;
      if ( v67 <= v26 )
        v67 = v26 + 1;
      if ( v67 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_160;
      v110 = v4;
      v107 = v67;
      v104 = v7;
      v100 = v24;
      if ( src != v19 )
      {
        v68 = realloc(v19, 32 * v67);
        v40 = *(const void **)(v5 + 8);
        v24 = v100;
        v19 = v68;
        v7 = v104;
        v6 = v107;
        v4 = v110;
        if ( !v68 )
          goto LABEL_161;
        v27 = *(_QWORD *)v5;
        if ( src != v40 )
          goto LABEL_172;
        goto LABEL_205;
      }
      v87 = malloc(32 * v67);
      v24 = v100;
      v7 = v104;
      v6 = v107;
      v4 = v110;
      if ( v87 )
      {
        v27 = *(_QWORD *)v5;
        v40 = src;
        v19 = v87;
LABEL_205:
        v88 = v4;
        v89 = v6;
        v90 = v7;
        v91 = v24;
        memcpy(v19, v40, 32 * v27);
        v27 = *(_QWORD *)v5;
        v4 = v88;
        v6 = v89;
        v7 = v90;
        v24 = v91;
LABEL_172:
        *(_QWORD *)(v5 + 8) = v19;
LABEL_55:
        if ( v27 <= v26 )
        {
          do
            *((_DWORD *)v19 + 8 * ++v27 - 8) = 0;
          while ( v27 <= v26 );
          *(_QWORD *)v5 = v27;
        }
        v28 = (char *)v19 + 32 * v26;
        if ( *(_DWORD *)v28 )
        {
          if ( *(_DWORD *)v28 != 5 )
            goto LABEL_132;
          v13 = *v24;
          v9 = (signed __int64)v24;
        }
        else
        {
          *(_DWORD *)v28 = 5;
          v9 = (signed __int64)v24;
          v13 = *v24;
        }
        goto LABEL_27;
      }
LABEL_163:
      v66 = (void *)v4[1];
      if ( (void *)v96 != v66 )
        free(v66);
      goto LABEL_165;
    }
    v81 = 0LL;
    do
    {
      v82 = -1LL;
      v83 = v25 - 48;
      if ( v81 <= 0x1999999999999999LL )
        v82 = 10 * v81;
      v84 = v24;
      while ( 1 )
      {
        v50 = __CFADD__(v83, v82);
        v85 = v83 + v82;
        v25 = *++v24;
        v81 = v85;
        v86 = v25 - 48;
        if ( !v50 )
          break;
        if ( v86 > 9u )
          goto LABEL_131;
        v82 = -1LL;
        v84 = v24;
        v83 = v25 - 48;
      }
    }
    while ( v86 <= 9u );
    v26 = v85 - 1;
    if ( v85 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *(_QWORD *)(v12 + 64) = v26;
      v24 = v84 + 2;
      goto LABEL_53;
    }
LABEL_131:
    v19 = *(void **)(v5 + 8);
    goto LABEL_132;
  }
  *(_DWORD *)v21 = 5;
  v13 = *(_BYTE *)v14;
  v9 = v14++;
  if ( v13 == 46 )
    goto LABEL_48;
LABEL_27:
  v15 = 0;
  while ( 2 )
  {
    ++v9;
    if ( v13 == 104 )
    {
      v15 |= 1 << (v15 & 1);
      goto LABEL_34;
    }
    if ( v13 == 76 )
    {
      v15 |= 4u;
      goto LABEL_34;
    }
    if ( v13 == 108 || v13 == 106 || (v13 & 0xDF) == 90 || v13 == 116 )
    {
      v15 += 8;
LABEL_34:
      v13 = *(_BYTE *)v9;
      continue;
    }
    break;
  }
  switch ( v13 )
  {
    case 115:
      v29 = (v15 > 7) + 15;
      break;
    case 37:
      goto LABEL_71;
    case 99:
      v29 = (v15 > 7) + 13;
      break;
    case 110:
      v29 = 22;
      if ( v15 <= 15 && !(v15 & 4) )
      {
        v29 = 21;
        if ( v15 <= 7 )
        {
          v29 = 18;
          if ( !(v15 & 2) )
            v29 = ((v15 & 1) == 0) + 19;
        }
      }
      break;
    case 100:
    case 105:
      v29 = 9;
      if ( v15 <= 15 && !(v15 & 4) )
      {
        v29 = 7;
        if ( v15 <= 7 )
        {
          v29 = 1;
          if ( !(v15 & 2) )
            v29 = (v15 & 1u) < 1 ? 5 : 3;
        }
      }
      break;
    case 112:
      v29 = 17;
      break;
    case 65:
    case 69:
    case 70:
    case 71:
    case 97:
    case 101:
    case 102:
    case 103:
      v29 = 12;
      if ( v15 <= 15 )
        v29 = ((v15 & 4) != 0) + 11;
      break;
    case 83:
      v29 = 16;
      v13 = 115;
      break;
    case 67:
      v29 = 14;
      v13 = 99;
      break;
    case 88:
    case 111:
    case 117:
    case 120:
      v29 = 10;
      if ( v15 <= 15 && !(v15 & 4) )
      {
        v29 = 8;
        if ( v15 <= 7 )
        {
          v29 = 2;
          if ( !(v15 & 2) )
            v29 = (v15 & 1u) < 1 ? 6 : 4;
        }
      }
      break;
    default:
      goto LABEL_131;
  }
  if ( v11 != -1LL )
  {
    *(_QWORD *)(v12 + 80) = v11;
    goto LABEL_65;
  }
  *(_QWORD *)(v12 + 80) = v95;
  if ( v95 == -1LL )
    goto LABEL_131;
  v11 = v95++;
LABEL_65:
  v19 = *(void **)(v5 + 8);
  if ( v6 <= v11 )
  {
    v55 = 2 * v6;
    if ( v55 <= v11 )
      v55 = v11 + 1;
    if ( v55 <= 0x7FFFFFFFFFFFFFFLL )
    {
      v109 = v4;
      v106 = v55;
      v103 = v7;
      v99 = v29;
      if ( src == v19 )
      {
        v56 = malloc(32 * v55);
        v29 = v99;
        v7 = v103;
        v6 = v106;
        v4 = v109;
        if ( !v56 )
          goto LABEL_163;
        goto LABEL_159;
      }
      v56 = realloc(v19, 32 * v55);
      v29 = v99;
      v7 = v103;
      v19 = v56;
      v6 = v106;
      v4 = v109;
      if ( v56 )
      {
        if ( src != *(void **)(v5 + 8) )
        {
LABEL_145:
          *(_QWORD *)(v5 + 8) = v19;
          goto LABEL_66;
        }
        v19 = src;
LABEL_159:
        v60 = v19;
        v61 = v4;
        v62 = v6;
        v19 = v56;
        v63 = v7;
        v64 = v29;
        memcpy(v56, v60, 32LL * *(_QWORD *)v5);
        v4 = v61;
        v29 = v64;
        v6 = v62;
        v7 = v63;
        goto LABEL_145;
      }
LABEL_211:
      v40 = *(const void **)(v5 + 8);
LABEL_161:
      if ( src == v40 )
        goto LABEL_163;
      goto LABEL_162;
    }
LABEL_160:
    v40 = v19;
    goto LABEL_161;
  }
LABEL_66:
  v30 = *(_QWORD *)v5;
  if ( *(_QWORD *)v5 <= v11 )
  {
    do
      *((_DWORD *)v19 + 8 * ++v30 - 8) = 0;
    while ( v30 <= v11 );
    *(_QWORD *)v5 = v30;
  }
  v31 = (signed int *)((char *)v19 + 32 * v11);
  if ( !*v31 )
  {
    *v31 = v29;
    goto LABEL_71;
  }
  if ( *v31 == v29 )
  {
LABEL_71:
    *(_BYTE *)(v12 + 72) = v13;
    v32 = *v4;
    *(_QWORD *)(v12 + 8) = v9;
    v8 = v32 + 1;
    *v4 = v32 + 1;
    if ( v7 > v32 + 1 )
    {
      v3 = (_QWORD *)v4[1];
      goto LABEL_3;
    }
    if ( (v7 & 0x8000000000000000LL) != 0LL )
      goto LABEL_211;
    v33 = 2 * v7;
    if ( 2 * v7 > 0x2E8BA2E8BA2E8BALL )
      goto LABEL_211;
    v34 = (void *)v4[1];
    v101 = v4;
    v97 = v6;
    if ( (void *)v96 != v34 )
    {
      v35 = realloc(v34, 176 * v7);
      v6 = v97;
      v4 = v101;
      v3 = v35;
      if ( !v35 )
        goto LABEL_211;
      v34 = (void *)v101[1];
      v8 = *v101;
      if ( (void *)v96 == v34 )
      {
LABEL_96:
        v42 = v4;
        v43 = v6;
        v44 = memcpy(v3, v34, 88 * v8);
        v4 = v42;
        v6 = v43;
        v3 = v44;
        v8 = *v42;
      }
      v4[1] = (signed __int64)v3;
      v7 = v33;
      goto LABEL_3;
    }
    v41 = malloc(176 * v7);
    v6 = v97;
    v4 = v101;
    v3 = v41;
    if ( v41 )
      goto LABEL_96;
    v40 = *(const void **)(v5 + 8);
    if ( src == v40 )
    {
LABEL_165:
      *__errno_location() = 12;
      return 0xFFFFFFFFLL;
    }
LABEL_162:
    v65 = v4;
    free((void *)v40);
    v4 = v65;
    goto LABEL_163;
  }
LABEL_132:
  if ( src != v19 )
  {
    v53 = v4;
    free(v19);
    v4 = v53;
  }
  v54 = (void *)v4[1];
  if ( (void *)v96 != v54 )
    free(v54);
  *__errno_location() = 22;
  return 0xFFFFFFFFLL;
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_412A60(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_61B268 )
    v1 = unk_61B268;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_412A78(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_61AE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
