#include "decompile_idapro_obfuscated.h"
void dl_relocate_static_pie()
{
  ;
}

void __fastcall __noreturn usage(int status)
{
  const char *v1; // r12
  bool v2; // r13
  int v3; // ebp
  int i; // eax
  char *v5; // rax
  char *v6; // rsi
  int v7; // ecx
  FILE *v8; // rbx
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  int v16; // eax
  char **v17; // rbx
  char *v18; // rax
  bool v19; // zf
  int v20; // ecx
  char *v21; // rax
  char **v22; // [rsp+8h] [rbp-60h]
  char *s2; // [rsp+18h] [rbp-50h]
  const char *v24; // [rsp+20h] [rbp-48h]
  const char *s1; // [rsp+28h] [rbp-40h]
  const char *v26; // [rsp+30h] [rbp-38h]

  v3 = -651218103;
  if ( status )
    v3 = -645462204;
  for ( i = -776958107; ; i = -713646558 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        v7 = i & 0xFFFFFFF;
        if ( (i & 0xFFFFFFFu) <= 0x92F3348 )
        {
          i = v3;
          if ( v7 == 28348261 )
            continue;
          if ( v7 == 91659810 )
            exit(status);
          while ( 1 )
LABEL_39:
            ;
        }
        break;
      }
      if ( v7 != 154088265 )
      {
        if ( v7 == 159844164 )
        {
          v8 = stderr;
          v9 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
          __fprintf_chk(v8, 1LL, v9, program_name);
          i = -713646558;
          continue;
        }
        goto LABEL_39;
      }
      break;
    }
    v10 = dcgettext(0LL, "Usage: %s [OPTION] NAME...\n", 5);
    __printf_chk(1LL, v10, program_name);
    v11 = dcgettext(
            0LL,
            "Output each NAME with its last non-slash component and trailing slashes\n"
            "removed; if NAME contains no /'s, output '.' (meaning the current directory).\n"
            "\n",
            5);
    fputs_unlocked(v11, stdout);
    v12 = dcgettext(0LL, "  -z, --zero     end each output line with NUL, not newline\n", 5);
    fputs_unlocked(v12, stdout);
    v13 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
    fputs_unlocked(v13, stdout);
    v14 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
    fputs_unlocked(v14, stdout);
    v15 = dcgettext(
            0LL,
            "\n"
            "Examples:\n"
            "  %s /usr/bin/          -> \"/usr\"\n"
            "  %s dir1/str dir2/str  -> \"dir1\" followed by \"dir2\"\n"
            "  %s stdio.h            -> \".\"\n",
            5);
    __printf_chk(1LL, v15, program_name);
    v16 = 1897397849;
    v17 = emit_ancillary_info_infomap;
    while ( 1 )
    {
LABEL_24:
      while ( v16 <= 1897397848 )
      {
        if ( v16 == 519711635 )
        {
          v2 = strcmp("dirname", s2) != 0;
          v16 = 285149388;
          goto LABEL_11;
        }
        v18 = dcgettext(0LL, "Report any translation bugs to <https://translationproject.org/team/>\n", 5);
        fputs_unlocked(v18, stdout);
        v16 = 1934051887;
      }
      if ( v16 != 1897397849 )
        break;
      v22 = v17;
      s2 = *v17;
      v16 = 285149388;
      if ( *v17 )
        v16 = 519711635;
      v2 = 0;
      if ( v16 <= 519711634 )
      {
        while ( 1 )
        {
LABEL_11:
          while ( v16 <= -771973751 )
          {
            if ( v16 == -1568695312 )
            {
              v17 = v22 + 2;
              v16 = 1897397849;
              goto LABEL_24;
            }
            v26 = v1;
            v21 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
            __printf_chk(1LL, v21, "GNU coreutils");
            s1 = setlocale(5, 0LL);
            v19 = s1 == 0LL;
            v16 = 1934051887;
            v20 = -771973750;
LABEL_18:
            if ( !v19 )
              v16 = v20;
            if ( v16 > 519711634 )
              goto LABEL_24;
          }
          if ( v16 == -771973750 )
          {
            v19 = strncmp(s1, "en_", 3uLL) == 0;
            v16 = 1934051887;
            v20 = 1357009905;
            goto LABEL_18;
          }
          if ( v16 != -46144106 )
          {
            v19 = !v2;
            v16 = 1985493267;
            v20 = -1568695312;
            goto LABEL_18;
          }
          v1 = v24;
          v16 = -963157483;
        }
      }
    }
    if ( v16 == 1985493267 )
    {
      v24 = v22[1];
      v16 = -963157483;
      if ( v24 )
        v16 = -46144106;
      v1 = "dirname";
      goto LABEL_11;
    }
    v5 = dcgettext(0LL, "Full documentation <%s%s>\n", 5);
    __printf_chk(1LL, v5, "https://www.gnu.org/software/coreutils/");
    v6 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
    __printf_chk(1LL, v6, v26);
  }
}

int __cdecl main(int argc, const char **argv, const char **envp)
{
  const char *v3; // rbx
  size_t v4; // rbp
  char v5; // r12
  char v7; // r13
  int i; // eax
  int v9; // esi
  char *IO_write_ptr; // rax
  bool v11; // zf
  int v12; // ecx
  bool v13; // cc
  int v14; // ecx
  char *v16; // rax
  char v17; // [rsp+Ah] [rbp-3Eh]
  char v18; // [rsp+Bh] [rbp-3Dh]
  int v19; // [rsp+Ch] [rbp-3Ch]
  int v20; // [rsp+10h] [rbp-38h]
  int v21; // [rsp+14h] [rbp-34h]

  set_program_name(*argv);
  setlocale(6, "");
  bindtextdomain("coreutils", "/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
  textdomain("coreutils");
  v20 = atexit(close_stdout);
  v7 = 0;
  for ( i = 1999519567; ; i = -691664316 )
  {
LABEL_3:
    while ( i > 948941963 )
    {
      if ( i > 1866083342 )
      {
        if ( i != 1866083343 )
        {
          if ( i != 1999519567 )
          {
            version_etc(stdout, "dirname", "GNU coreutils", Version, "David MacKenzie", "Jim Meyering", 0LL);
            exit(0);
          }
          v18 = v7;
          v19 = getopt_long(argc, (char *const *)argv, "z", longopts, 0LL);
          v11 = v19 == -1;
          i = 416985404;
          v12 = -1127487471;
          goto LABEL_43;
        }
        i = 953850684;
        v4 = 1LL;
        v3 = ".";
      }
      else
      {
        if ( i != 948941964 )
        {
          if ( i != 953850684 )
          {
            v16 = dcgettext(0LL, "missing operand", 5);
            error(0, 0, v16);
            usage(1);
          }
          fwrite_unlocked(v3, 1uLL, v4, stdout);
          v9 = 10;
          if ( (v17 & 1) != 0 )
            v9 = 0;
          IO_write_ptr = stdout->_IO_write_ptr;
          if ( IO_write_ptr >= stdout->_IO_write_end )
          {
            __overflow(stdout, v9);
          }
          else
          {
            stdout->_IO_write_ptr = IO_write_ptr + 1;
            *IO_write_ptr = v9;
          }
          ++optind;
          i = -834193215;
          goto LABEL_33;
        }
        i = -834193215;
        if ( optind >= argc )
          i = 1721735917;
        if ( i <= -691664317 )
        {
          while ( 1 )
          {
LABEL_33:
            while ( i > -1127487472 )
            {
              if ( i <= -834193216 )
              {
                if ( i != -1127487471 )
                {
                  v11 = v19 == -131;
                  i = -771051692;
                  v12 = 2113797901;
                  goto LABEL_43;
                }
                i = -1328534982;
                v20 = 3;
                v5 = v18;
              }
              else if ( i > -771051693 )
              {
                if ( i != -771051692 )
                  usage(1);
                i = -716838669;
              }
              else
              {
                if ( i != -834193215 )
                  usage(0);
                v21 = optind;
                v13 = optind < argc;
                i = -413182890;
                v14 = -1437041786;
LABEL_30:
                if ( v13 )
                  i = v14;
                if ( i > -691664317 )
                  goto LABEL_3;
              }
            }
            if ( i > -1437041787 )
              break;
            if ( i == -1922441090 )
            {
              v13 = v19 < 122;
              i = -1760949191;
              v14 = -531738998;
              goto LABEL_30;
            }
            v11 = v19 == 122;
            i = -771051692;
            v12 = 499698732;
LABEL_43:
            if ( v11 )
              i = v12;
            if ( i > -691664317 )
              goto LABEL_3;
          }
          if ( i == -1437041786 )
          {
            v3 = argv[v21];
            v4 = dir_len(v3);
            i = 1866083343;
            if ( v4 )
              i = 953850684;
          }
          else
          {
            v17 = v5;
            i = 948941964;
            if ( !v20 )
              i = 1999519567;
            v7 = v5;
          }
        }
      }
    }
    if ( i <= -413182891 )
    {
      if ( i != -691664316 )
      {
        v11 = v19 == -130;
        i = -771051692;
        v12 = -806581339;
        goto LABEL_43;
      }
      v13 = v19 < -130;
      i = -1922441090;
      v14 = -1067998599;
      goto LABEL_30;
    }
    if ( i == -413182890 )
      break;
    if ( i != 416985404 )
    {
      i = -1328534982;
      v5 = 1;
      v20 = 0;
      goto LABEL_33;
    }
  }
  return 0;
}

void __fastcall close_stdout_set_file_name(const char *file)
{
  file_name = file;
}

void __fastcall close_stdout_set_ignore_EPIPE(bool ignore)
{
  ignore_EPIPE = ignore;
}

void __cdecl close_stdout()
{
  int v0; // ebp
  char *v1; // rax
  int errnum; // [rsp+0h] [rbp-48h]
  int v3; // [rsp+4h] [rbp-44h]
  char *v4; // [rsp+8h] [rbp-40h]
  char *arg; // [rsp+10h] [rbp-38h]

  v3 = close_stream(stdout);
  v0 = 2078431931;
  do
  {
    while ( 1 )
    {
LABEL_19:
      while ( v0 <= 1470494077 )
      {
        if ( v0 == 729976061 )
        {
          v0 = 154328810;
          if ( close_stream(stderr) )
            v0 = 41628230;
          goto LABEL_4;
        }
        if ( v0 != 1190838166 )
          _exit(exit_failure);
        v1 = quotearg_colon(arg);
        error(0, errnum, "%s: %s", v1, v4);
LABEL_18:
        v0 = 178497945;
      }
      if ( v0 == 1470494078 )
        break;
      v0 = 729976061;
      if ( v3 )
        v0 = -570020970;
      if ( v0 <= 178497944 )
        goto LABEL_4;
    }
    v0 = -933182069;
    if ( *__errno_location() == 32 )
      v0 = 729976061;
  }
  while ( v0 > 178497944 );
  while ( 1 )
  {
LABEL_4:
    while ( v0 <= -570020971 )
    {
      if ( v0 == -1830233456 )
      {
        error(0, errnum, "%s", v4);
        goto LABEL_18;
      }
      v4 = dcgettext(0LL, "write error", 5);
      arg = (char *)file_name;
      v0 = -1830233456;
      if ( file_name )
        v0 = 1190838166;
      errnum = *__errno_location();
      if ( v0 > 178497944 )
        goto LABEL_19;
    }
    if ( v0 != -570020970 )
      break;
    v0 = -933182069;
    if ( ignore_EPIPE )
      v0 = 1470494078;
    if ( v0 > 178497944 )
      goto LABEL_19;
  }
  if ( v0 != 154328810 )
    _exit(exit_failure);
}

size_t __fastcall dir_len(const char *file)
{
  unsigned __int64 v1; // rax
  _BOOL4 v2; // r15d
  int v3; // edx
  _BOOL4 v4; // esi
  int v5; // ecx
  size_t v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+10h] [rbp-28h]

  v3 = 504746226;
LABEL_2:
  while ( 2 )
  {
    v4 = v2;
    do
    {
LABEL_3:
      v5 = v3;
      v2 = v4;
      v3 = 6447519;
      v4 = 0;
    }
    while ( v5 == 504746226 );
    while ( 1 )
    {
      if ( v5 <= 168336274 )
      {
        if ( v5 != -1793504290 )
        {
          if ( v5 != -972180048 )
          {
            v4 = *file == 47;
            v3 = -972180048;
            goto LABEL_3;
          }
          v8 = v2;
          v1 = last_component(file) - file;
          v3 = -1793504290;
          goto LABEL_2;
        }
        v7 = v1;
        v5 = 168336275;
        if ( v8 < v1 )
          v5 = 980170474;
      }
      if ( v5 != 980170474 )
        break;
      v5 = 168336275;
      if ( file[v7 - 1] == 47 )
        v5 = 1341910792;
    }
    if ( v5 != 168336275 )
    {
      v1 = v7 - 1;
      v3 = -1793504290;
      continue;
    }
    return v7;
  }
}

char* __fastcall mdir_name(const char *file)
{
  unsigned __int64 v1; // rax
  _BOOL4 v2; // r15d
  int v3; // edx
  __int64 v4; // r14
  _BOOL4 v5; // esi
  int v6; // ecx
  _BYTE *v7; // rax
  int i; // ecx
  int v9; // ecx
  __int64 dest; // [rsp+10h] [rbp-38h]
  size_t v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+20h] [rbp-28h]

  v3 = 504746226;
  v4 = 980170474LL;
LABEL_2:
  while ( 2 )
  {
    v5 = v2;
    do
    {
LABEL_3:
      v6 = v3;
      v2 = v5;
      v3 = 6447519;
      v5 = 0;
    }
    while ( v6 == 504746226 );
    while ( 1 )
    {
      if ( v6 <= 168336274 )
      {
        if ( v6 != -1793504290 )
        {
          if ( v6 != -972180048 )
          {
            v5 = *file == 47;
            v3 = -972180048;
            goto LABEL_3;
          }
          v13 = v2;
          v1 = last_component(file) - file;
          v3 = -1793504290;
          goto LABEL_2;
        }
        v12 = v1;
        v6 = 168336275;
        if ( v13 < v1 )
          v6 = 980170474;
      }
      if ( v6 != 980170474 )
        break;
      v6 = 168336275;
      if ( file[v12 - 1] == 47 )
        v6 = 1341910792;
    }
    if ( v6 != 168336275 )
    {
      v1 = v12 - 1;
      v3 = -1793504290;
      continue;
    }
    break;
  }
  v7 = malloc((v12 == 0) + v12 + 1);
  dest = (__int64)v7;
LABEL_22:
  for ( i = -1498169164; i == -1498169164; i = -1645133560 )
  {
    v9 = -259250239;
    if ( dest )
      v9 = -256802789;
    while ( 1 )
    {
      while ( v9 <= -256802790 )
      {
        if ( v9 != -774109616 )
        {
          i = -1645133560;
          v4 = 0LL;
          goto LABEL_22;
        }
        v7 = (_BYTE *)(v12 + 1);
        *(_BYTE *)(dest + v12) = 46;
        v9 = 423071648;
      }
      if ( v9 != -256802789 )
        break;
      memcpy((void *)dest, file, v12);
      v9 = 423071648;
      if ( !v12 )
        v9 = -774109616;
      v7 = (_BYTE *)v12;
    }
    v7[dest] = 0;
    v4 = dest;
  }
  return (char *)v4;
}

char* __fastcall last_component(const char *name)
{
  const char *v1; // rax
  char *v2; // rdx
  char v3; // cl
  char *v4; // rsi
  char v5; // r14
  int v6; // ebp
  char v8; // [rsp+0h] [rbp-32h]
  char v9; // [rsp+1h] [rbp-31h]
  const char *v10; // [rsp+2h] [rbp-30h]
  const char *v11; // [rsp+Ah] [rbp-28h]
  char *v12; // [rsp+12h] [rbp-20h]

  v6 = 1574956210;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_2:
        while ( v6 <= 1574956209 )
        {
          if ( v6 != 780582791 )
          {
            v1 = v11 + 1;
            v6 = -749527708;
            v5 = v3;
            v4 = v2;
            goto LABEL_16;
          }
          v6 = 1273134469;
          v2 = (char *)v11;
          v3 = 0;
        }
        if ( v6 != 2058612305 )
          break;
        v6 = 1273134469;
        if ( (v9 & 1) != 0 )
          v6 = 780582791;
        v2 = v12;
        v3 = v9;
      }
      if ( v6 != 2023315943 )
        break;
      name = v10 + 1;
      v6 = 1574956210;
    }
    v10 = name;
    v6 = -1420037371;
    if ( *name == 47 )
      v6 = 2023315943;
  }
  while ( v6 > 780582790 );
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_16:
      while ( v6 <= -749527709 )
      {
        if ( v6 != -1420037371 )
        {
          v6 = 1273134469;
          v3 = 1;
          v2 = v12;
          goto LABEL_2;
        }
        v4 = (char *)v10;
        v6 = -749527708;
        v5 = 0;
        v1 = v10;
      }
      if ( v6 != -749527708 )
        break;
      v9 = v5;
      v11 = v1;
      v12 = v4;
      v8 = *v1;
      v6 = -519448596;
      if ( *v1 )
        v6 = 671737460;
    }
    if ( v6 != 671737460 )
      return v12;
    v6 = 2058612305;
    if ( v8 == 47 )
      v6 = -1360521486;
    if ( v6 > 780582790 )
      goto LABEL_2;
  }
}

size_t __fastcall base_len(const char *name)
{
  size_t result; // rax
  int v2; // esi

  for ( result = strlen(name); ; --result )
  {
    v2 = 1498040149;
    if ( result > 1 )
      v2 = 129518580;
    while ( v2 == 129518580 )
    {
      v2 = 1498040149;
      if ( name[result - 1] == 47 )
        v2 = 1517448312;
    }
    if ( v2 == 1498040149 )
      break;
  }
  return result;
}

void __fastcall set_program_name(const char *argv0)
{
  const char *v1; // rcx
  int v2; // ebp
  int v3; // eax
  char *v4; // rax
  bool v5; // zf
  const char *v6; // rax
  bool v7; // cc
  char *s1; // [rsp+8h] [rbp-30h]

  v2 = 1349369856;
  if ( !argv0 )
    v2 = 490241029;
  v3 = -155963679;
  while ( 1 )
  {
LABEL_10:
    if ( v3 > 490241028 )
    {
      if ( v3 != 1349369856 )
      {
        fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x37uLL, 1uLL, stderr);
        abort();
      }
      v4 = strrchr(argv0, 47);
      v5 = v4 == 0LL;
      v6 = v4 + 1;
      if ( v5 )
        v6 = argv0;
      s1 = (char *)v6;
      v7 = v6 - argv0 <= 6;
      v3 = 1566526097;
      if ( !v7 )
        v3 = 1595290114;
      v1 = argv0;
      goto LABEL_9;
    }
    if ( v3 == -2137311637 )
      break;
    v5 = v3 == -155963679;
    v3 = v2;
    if ( !v5 )
    {
      while ( 1 )
        ;
    }
LABEL_9:
    if ( v3 > 1566526096 )
      goto LABEL_19;
  }
  v5 = strncmp(s1, "lt-", 3uLL) == 0;
  v3 = 1566526097;
  if ( v5 )
    v3 = 1716632813;
  v1 = s1;
LABEL_19:
  while ( v3 != 1566526097 )
  {
    if ( v3 == 1595290114 )
    {
      v5 = strncmp(s1 - 7, "/.libs/", 7uLL) == 0;
      v3 = 1566526097;
      if ( v5 )
        v3 = -2137311637;
      v1 = argv0;
      if ( v3 <= 1566526096 )
        goto LABEL_10;
    }
    else
    {
      v1 = s1 + 3;
      program_invocation_short_name = (__int64)(s1 + 3);
      v3 = 1566526097;
    }
  }
  program_name = v1;
  program_invocation_name = (__int64)v1;
}

quoting_options* __fastcall clone_quoting_options(quoting_options *o)
{
  quoting_options *v1; // rbx
  int *v2; // r14
  int v3; // ebp
  quoting_options *result; // rax

  v1 = o;
  v2 = __errno_location();
  v3 = *v2;
  if ( !o )
    v1 = &default_quoting_options;
  result = (quoting_options *)xmemdup(v1, 0x38uLL);
  *v2 = v3;
  return result;
}

enum_quoting_style __fastcall get_quoting_style(const quoting_options *o)
{
  const quoting_options *v1; // rax

  v1 = &default_quoting_options;
  if ( o )
    v1 = o;
  return v1->style;
}

void __fastcall set_quoting_style(quoting_options *o, enum_quoting_style s)
{
  quoting_options *v2; // rax

  v2 = &default_quoting_options;
  if ( o )
    v2 = o;
  v2->style = s;
}

int __fastcall set_char_quoting(quoting_options *o, char c, int i)
{
  quoting_options *v4; // rsi
  __int64 v5; // r8
  int result; // eax

  v4 = &default_quoting_options;
  if ( o )
    v4 = o;
  v5 = (unsigned __int8)c >> 5;
  result = (v4->quote_these_too[v5] >> c) & 1;
  v4->quote_these_too[v5] ^= (((unsigned __int8)i ^ (unsigned __int8)(v4->quote_these_too[v5] >> c)) & 1) << c;
  return result;
}

int __fastcall set_quoting_flags(quoting_options *o, int i)
{
  quoting_options *v2; // rcx
  int v3; // r8d
  int j; // eax
  int v5; // edx
  quoting_options *v6; // r9
  bool v7; // zf
  int result; // eax

  v3 = 1181226820;
  if ( o )
    v3 = 767449293;
  for ( j = -876296926; ; j = 767449293 )
  {
    do
    {
      v5 = j;
      v6 = v2;
      v7 = j == -876296926;
      v2 = o;
      j = v3;
    }
    while ( v7 );
    if ( v5 != 1181226820 )
      break;
    v2 = &default_quoting_options;
  }
  if ( v5 != 767449293 )
  {
    while ( 1 )
      ;
  }
  result = v6->flags;
  v6->flags = i;
  return result;
}

void __fastcall set_custom_quoting(quoting_options *o, const char *left_quote, const char *right_quote)
{
  quoting_options *v3; // rax
  quoting_options *v4; // r11
  int v5; // r10d
  int v6; // r9d
  int v7; // eax
  int v8; // ecx
  quoting_options *v9; // r8
  bool v10; // zf
  quoting_options *v11; // [rsp+0h] [rbp-8h]

  v11 = v3;
  v5 = -1516201695;
  if ( o )
    v5 = -113258152;
  v6 = 2056481274;
  if ( !right_quote )
    v6 = 86926416;
  if ( !left_quote )
    v6 = 86926416;
  v7 = -1617911072;
  do
  {
LABEL_9:
    v8 = v7;
    v9 = v4;
    v10 = v7 == -1617911072;
    v4 = o;
    v7 = v5;
  }
  while ( v10 );
  while ( v8 <= 86926415 )
  {
    if ( v8 == -1516201695 )
    {
      v7 = -113258152;
      v4 = &default_quoting_options;
      goto LABEL_9;
    }
    if ( v8 != -113258152 )
    {
      while ( 1 )
        ;
    }
    v11 = v9;
    v9->style = custom_quoting_style;
    v8 = v6;
  }
  if ( v8 != 2056481274 )
    abort();
  v11->left_quote = left_quote;
  v11->right_quote = right_quote;
}

size_t __fastcall quotearg_buffer(
        char *buffer,
        size_t buffersize,
        const char *arg,
        size_t argsize,
        const quoting_options *o)
{
  const quoting_options *v7; // rbp
  int *v8; // rbx
  size_t result; // rax
  int v10; // [rsp+0h] [rbp-34h]

  v7 = &default_quoting_options;
  if ( o )
    v7 = o;
  v8 = __errno_location();
  v10 = *v8;
  result = quotearg_buffer_restyled(
             buffer,
             buffersize,
             arg,
             argsize,
             v7->style,
             v7->flags,
             v7->quote_these_too,
             v7->left_quote,
             v7->right_quote);
  *v8 = v10;
  return result;
}

size_t __fastcall quotearg_buffer_restyled(
        char *buffer,
        __int64 buffersize,
        const char *arg,
        __int64 argsize,
        enum_quoting_style quoting_style,
        int flags,
        const unsigned int *quote_these_too,
        const char *left_quote,
        const char *right_quote)
{
  __int64 v9; // r12
  char v10; // r13
  char v11; // r14
  char v12; // r15
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  unsigned __int64 v17; // rbp
  int v18; // esi
  __int64 v19; // rcx
  bool v20; // cc
  bool v21; // cc
  bool v22; // zf
  __int64 v23; // rax
  bool v24; // zf
  bool v25; // zf
  bool v26; // cf
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // zf
  unsigned int v31; // ecx
  __int64 v32; // rax
  bool v33; // zf
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  char v38; // al
  unsigned int v39; // eax
  int v40; // eax
  int v41; // eax
  bool v42; // zf
  int v43; // ecx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  size_t v47; // rax
  const unsigned __int16 **v48; // rax
  char v49; // al
  int v50; // eax
  char v52; // [rsp+4h] [rbp-6E4h]
  unsigned __int8 v53; // [rsp+5h] [rbp-6E3h]
  unsigned __int8 v54; // [rsp+6h] [rbp-6E2h]
  char v55; // [rsp+7h] [rbp-6E1h]
  char v56; // [rsp+8h] [rbp-6E0h]
  char v57; // [rsp+9h] [rbp-6DFh]
  char v58; // [rsp+Ah] [rbp-6DEh]
  unsigned __int8 v59; // [rsp+Bh] [rbp-6DDh]
  char v60; // [rsp+Ch] [rbp-6DCh]
  char v61; // [rsp+Dh] [rbp-6DBh]
  char v62; // [rsp+Eh] [rbp-6DAh]
  char v63; // [rsp+Fh] [rbp-6D9h]
  int v64; // [rsp+10h] [rbp-6D8h]
  char v65; // [rsp+17h] [rbp-6D1h]
  unsigned __int64 v66; // [rsp+18h] [rbp-6D0h]
  char v67; // [rsp+27h] [rbp-6C1h]
  char v68; // [rsp+28h] [rbp-6C0h]
  char v69; // [rsp+29h] [rbp-6BFh]
  char v70; // [rsp+2Ah] [rbp-6BEh]
  char v71; // [rsp+2Bh] [rbp-6BDh]
  char v72; // [rsp+2Ch] [rbp-6BCh]
  unsigned __int8 v73; // [rsp+2Dh] [rbp-6BBh]
  char v74; // [rsp+2Eh] [rbp-6BAh]
  bool v75; // [rsp+2Fh] [rbp-6B9h]
  __int64 v76; // [rsp+30h] [rbp-6B8h]
  unsigned __int64 v77; // [rsp+38h] [rbp-6B0h]
  char v78; // [rsp+44h] [rbp-6A4h]
  char v79; // [rsp+45h] [rbp-6A3h]
  char v80; // [rsp+46h] [rbp-6A2h]
  char v81; // [rsp+47h] [rbp-6A1h]
  char v82; // [rsp+48h] [rbp-6A0h]
  char v83; // [rsp+49h] [rbp-69Fh]
  char v84; // [rsp+4Ah] [rbp-69Eh]
  unsigned __int8 v85; // [rsp+4Bh] [rbp-69Dh]
  char v86; // [rsp+4Ch] [rbp-69Ch]
  char v87; // [rsp+4Dh] [rbp-69Bh]
  char v88; // [rsp+4Eh] [rbp-69Ah]
  char v89; // [rsp+4Fh] [rbp-699h]
  char v90; // [rsp+50h] [rbp-698h]
  char v91; // [rsp+51h] [rbp-697h]
  char v92; // [rsp+52h] [rbp-696h]
  char v93; // [rsp+53h] [rbp-695h]
  char v94; // [rsp+54h] [rbp-694h]
  char v95; // [rsp+55h] [rbp-693h]
  unsigned __int8 v96; // [rsp+56h] [rbp-692h]
  unsigned __int8 v97; // [rsp+57h] [rbp-691h]
  __int64 v98; // [rsp+58h] [rbp-690h]
  unsigned __int64 v99; // [rsp+60h] [rbp-688h]
  enum_quoting_style v100; // [rsp+6Ch] [rbp-67Ch]
  enum_quoting_style v101; // [rsp+70h] [rbp-678h]
  char v102; // [rsp+76h] [rbp-672h]
  char v103; // [rsp+77h] [rbp-671h]
  unsigned __int8 v104; // [rsp+78h] [rbp-670h]
  char v105; // [rsp+79h] [rbp-66Fh]
  char v106; // [rsp+7Ah] [rbp-66Eh]
  char v107; // [rsp+7Bh] [rbp-66Dh]
  char v108; // [rsp+7Ch] [rbp-66Ch]
  char v109; // [rsp+7Dh] [rbp-66Bh]
  char v110; // [rsp+7Eh] [rbp-66Ah]
  bool v111; // [rsp+7Fh] [rbp-669h]
  char v112; // [rsp+80h] [rbp-668h]
  char v113; // [rsp+81h] [rbp-667h]
  char v114; // [rsp+82h] [rbp-666h]
  unsigned __int8 v115; // [rsp+83h] [rbp-665h]
  char v116; // [rsp+84h] [rbp-664h]
  bool v117; // [rsp+85h] [rbp-663h]
  char v118; // [rsp+86h] [rbp-662h]
  char v119; // [rsp+87h] [rbp-661h]
  char v120; // [rsp+88h] [rbp-660h]
  char v121; // [rsp+89h] [rbp-65Fh]
  char v122; // [rsp+8Ah] [rbp-65Eh]
  char v123; // [rsp+8Bh] [rbp-65Dh]
  char v124; // [rsp+8Ch] [rbp-65Ch]
  char v125; // [rsp+8Dh] [rbp-65Bh]
  char v126; // [rsp+8Eh] [rbp-65Ah]
  char v127; // [rsp+8Fh] [rbp-659h]
  int v128; // [rsp+90h] [rbp-658h]
  char v129; // [rsp+94h] [rbp-654h]
  char v130; // [rsp+9Ah] [rbp-64Eh]
  bool v131; // [rsp+9Bh] [rbp-64Dh]
  bool v132; // [rsp+9Ch] [rbp-64Ch]
  unsigned __int8 v133; // [rsp+9Dh] [rbp-64Bh]
  bool v134; // [rsp+9Eh] [rbp-64Ah]
  bool v135; // [rsp+9Fh] [rbp-649h]
  char v136; // [rsp+A0h] [rbp-648h]
  bool v137; // [rsp+A1h] [rbp-647h]
  bool v138; // [rsp+A2h] [rbp-646h]
  bool v139; // [rsp+A3h] [rbp-645h]
  unsigned __int8 v140; // [rsp+A4h] [rbp-644h]
  char v141; // [rsp+A5h] [rbp-643h]
  char v142; // [rsp+A6h] [rbp-642h]
  char v143; // [rsp+A7h] [rbp-641h]
  char v144; // [rsp+A8h] [rbp-640h]
  char v145; // [rsp+A9h] [rbp-63Fh]
  char v146; // [rsp+AAh] [rbp-63Eh]
  unsigned __int8 v147; // [rsp+ABh] [rbp-63Dh]
  char v148; // [rsp+ACh] [rbp-63Ch]
  char v149; // [rsp+ADh] [rbp-63Bh]
  unsigned __int8 v150; // [rsp+AEh] [rbp-63Ah]
  char v151; // [rsp+AFh] [rbp-639h]
  __int64 v152; // [rsp+B0h] [rbp-638h]
  __int64 v153; // [rsp+B8h] [rbp-630h]
  __int64 v154; // [rsp+C0h] [rbp-628h]
  int v155; // [rsp+CCh] [rbp-61Ch]
  int v157; // [rsp+DCh] [rbp-60Ch]
  char v158; // [rsp+E1h] [rbp-607h]
  char v159; // [rsp+E2h] [rbp-606h]
  unsigned __int8 v160; // [rsp+E3h] [rbp-605h]
  char v161; // [rsp+E4h] [rbp-604h]
  char v162; // [rsp+E5h] [rbp-603h]
  char v163; // [rsp+E6h] [rbp-602h]
  char v164; // [rsp+E7h] [rbp-601h]
  char v165; // [rsp+E8h] [rbp-600h]
  char v166; // [rsp+E9h] [rbp-5FFh]
  char v167; // [rsp+EAh] [rbp-5FEh]
  char v168; // [rsp+EBh] [rbp-5FDh]
  char v169; // [rsp+ECh] [rbp-5FCh]
  char v170; // [rsp+EDh] [rbp-5FBh]
  char v171; // [rsp+EEh] [rbp-5FAh]
  char v172; // [rsp+EFh] [rbp-5F9h]
  char v173; // [rsp+F0h] [rbp-5F8h]
  char v174; // [rsp+F1h] [rbp-5F7h]
  unsigned __int8 v175; // [rsp+F2h] [rbp-5F6h]
  char v176; // [rsp+F3h] [rbp-5F5h]
  char v177; // [rsp+F4h] [rbp-5F4h]
  char v178; // [rsp+F5h] [rbp-5F3h]
  char v179; // [rsp+F6h] [rbp-5F2h]
  char v180; // [rsp+F7h] [rbp-5F1h]
  __int64 v181; // [rsp+F8h] [rbp-5F0h]
  __int64 v182; // [rsp+100h] [rbp-5E8h]
  __int64 v183; // [rsp+108h] [rbp-5E0h]
  __int64 v184; // [rsp+110h] [rbp-5D8h]
  __int64 v185; // [rsp+118h] [rbp-5D0h]
  char v186; // [rsp+120h] [rbp-5C8h]
  int v187; // [rsp+124h] [rbp-5C4h]
  char v188; // [rsp+128h] [rbp-5C0h]
  char v189; // [rsp+12Ch] [rbp-5BCh]
  int v190; // [rsp+130h] [rbp-5B8h]
  char v191; // [rsp+134h] [rbp-5B4h]
  unsigned __int64 v192; // [rsp+138h] [rbp-5B0h]
  char v193; // [rsp+144h] [rbp-5A4h]
  int v194; // [rsp+148h] [rbp-5A0h]
  char v195; // [rsp+14Ch] [rbp-59Ch]
  char v196; // [rsp+150h] [rbp-598h]
  char v197; // [rsp+154h] [rbp-594h]
  bool v198; // [rsp+158h] [rbp-590h]
  char v199; // [rsp+15Ch] [rbp-58Ch]
  enum_quoting_style v200; // [rsp+160h] [rbp-588h]
  int v201; // [rsp+164h] [rbp-584h]
  int v202; // [rsp+168h] [rbp-580h]
  int v203; // [rsp+16Ch] [rbp-57Ch]
  __int64 v204; // [rsp+170h] [rbp-578h]
  unsigned __int64 v205; // [rsp+178h] [rbp-570h]
  int v206; // [rsp+180h] [rbp-568h]
  char v207; // [rsp+184h] [rbp-564h]
  unsigned int v208; // [rsp+188h] [rbp-560h]
  bool v209; // [rsp+18Ch] [rbp-55Ch]
  int v210; // [rsp+190h] [rbp-558h]
  int v211; // [rsp+194h] [rbp-554h]
  int v212; // [rsp+198h] [rbp-550h]
  unsigned int v213; // [rsp+19Ch] [rbp-54Ch]
  __int64 v214; // [rsp+1A0h] [rbp-548h]
  __int64 v215; // [rsp+1A8h] [rbp-540h]
  size_t v216; // [rsp+1B0h] [rbp-538h]
  char v217; // [rsp+1B8h] [rbp-530h]
  __int64 v218; // [rsp+1C0h] [rbp-528h]
  __int64 v219; // [rsp+1C8h] [rbp-520h]
  __int64 v220; // [rsp+1D0h] [rbp-518h]
  __int64 v221; // [rsp+1D8h] [rbp-510h]
  __int64 v222; // [rsp+1E0h] [rbp-508h]
  __int64 v223; // [rsp+1E8h] [rbp-500h]
  unsigned __int64 v224; // [rsp+1F0h] [rbp-4F8h]
  __int64 v225; // [rsp+1F8h] [rbp-4F0h]
  __int64 v226; // [rsp+200h] [rbp-4E8h]
  __int64 v227; // [rsp+208h] [rbp-4E0h]
  unsigned __int64 v228; // [rsp+210h] [rbp-4D8h]
  unsigned __int64 v229; // [rsp+218h] [rbp-4D0h]
  unsigned __int64 v230; // [rsp+220h] [rbp-4C8h]
  __int64 v231; // [rsp+228h] [rbp-4C0h]
  size_t v232; // [rsp+230h] [rbp-4B8h]
  size_t v233; // [rsp+238h] [rbp-4B0h]
  const char *v234; // [rsp+240h] [rbp-4A8h]
  const char *v235; // [rsp+248h] [rbp-4A0h]
  unsigned __int64 n; // [rsp+250h] [rbp-498h]
  size_t v237; // [rsp+258h] [rbp-490h]
  unsigned __int64 v238; // [rsp+260h] [rbp-488h]
  int v240; // [rsp+26Ch] [rbp-47Ch]
  __int64 v241; // [rsp+270h] [rbp-478h]
  __int64 v242; // [rsp+278h] [rbp-470h]
  size_t v243; // [rsp+280h] [rbp-468h]
  __int64 v244; // [rsp+288h] [rbp-460h]
  unsigned __int64 v245; // [rsp+290h] [rbp-458h]
  __int64 v246; // [rsp+298h] [rbp-450h]
  unsigned __int64 v247; // [rsp+2A0h] [rbp-448h]
  __int64 v248; // [rsp+2A8h] [rbp-440h]
  unsigned __int64 v249; // [rsp+2B0h] [rbp-438h]
  __int64 v250; // [rsp+2B8h] [rbp-430h]
  __int64 v251; // [rsp+2C0h] [rbp-428h]
  __int64 v252; // [rsp+2C8h] [rbp-420h]
  unsigned __int64 v253; // [rsp+2D0h] [rbp-418h]
  __int64 v254; // [rsp+2D8h] [rbp-410h]
  unsigned __int64 v255; // [rsp+2E0h] [rbp-408h]
  unsigned __int64 v256; // [rsp+2E8h] [rbp-400h]
  unsigned __int64 v257; // [rsp+2F0h] [rbp-3F8h]
  unsigned __int64 v258; // [rsp+2F8h] [rbp-3F0h]
  unsigned __int64 v259; // [rsp+300h] [rbp-3E8h]
  unsigned __int8 *s2; // [rsp+308h] [rbp-3E0h]
  __int64 v261; // [rsp+310h] [rbp-3D8h]
  unsigned __int64 v262; // [rsp+318h] [rbp-3D0h]
  unsigned __int64 v263; // [rsp+320h] [rbp-3C8h]
  unsigned __int64 v264; // [rsp+328h] [rbp-3C0h]
  __int64 v265; // [rsp+330h] [rbp-3B8h]
  __int64 v266; // [rsp+338h] [rbp-3B0h]
  __int64 v267; // [rsp+340h] [rbp-3A8h]
  __int64 v268; // [rsp+348h] [rbp-3A0h]
  __int64 v269; // [rsp+350h] [rbp-398h]
  __int64 v270; // [rsp+358h] [rbp-390h]
  __int64 v271; // [rsp+360h] [rbp-388h]
  unsigned __int64 v272; // [rsp+368h] [rbp-380h]
  unsigned __int64 v273; // [rsp+370h] [rbp-378h]
  unsigned __int64 v274; // [rsp+378h] [rbp-370h]
  __int64 v275; // [rsp+380h] [rbp-368h]
  __int64 v276; // [rsp+388h] [rbp-360h]
  __int64 v277; // [rsp+390h] [rbp-358h]
  __int64 v278; // [rsp+398h] [rbp-350h]
  __int64 v279; // [rsp+3A0h] [rbp-348h]
  __int64 v280; // [rsp+3A8h] [rbp-340h]
  __int64 v281; // [rsp+3B0h] [rbp-338h]
  size_t v282; // [rsp+3B8h] [rbp-330h]
  __int64 v283; // [rsp+3C0h] [rbp-328h]
  __int64 v284; // [rsp+3C8h] [rbp-320h]
  __int64 v285; // [rsp+3D0h] [rbp-318h]
  unsigned __int64 v286; // [rsp+3D8h] [rbp-310h]
  __int64 v287; // [rsp+3E0h] [rbp-308h]
  size_t v288; // [rsp+3E8h] [rbp-300h]
  unsigned __int8 *v289; // [rsp+3F0h] [rbp-2F8h]
  size_t v290; // [rsp+3F8h] [rbp-2F0h]
  __int64 v291; // [rsp+400h] [rbp-2E8h]
  unsigned __int64 v292; // [rsp+408h] [rbp-2E0h]
  unsigned __int64 v293; // [rsp+410h] [rbp-2D8h]
  unsigned __int64 v294; // [rsp+418h] [rbp-2D0h]
  __int64 v295; // [rsp+420h] [rbp-2C8h]
  unsigned __int64 v296; // [rsp+428h] [rbp-2C0h]
  unsigned __int64 v297; // [rsp+430h] [rbp-2B8h]
  unsigned __int64 v298; // [rsp+438h] [rbp-2B0h]
  unsigned __int64 v299; // [rsp+440h] [rbp-2A8h]
  unsigned __int64 v300; // [rsp+448h] [rbp-2A0h]
  __int64 v301; // [rsp+458h] [rbp-290h]
  unsigned __int64 v302; // [rsp+460h] [rbp-288h]
  unsigned __int64 v303; // [rsp+468h] [rbp-280h]
  __int64 v304; // [rsp+470h] [rbp-278h]
  __int64 v305; // [rsp+478h] [rbp-270h]
  __int64 v306; // [rsp+480h] [rbp-268h]
  unsigned __int64 v307; // [rsp+488h] [rbp-260h]
  unsigned __int64 v308; // [rsp+490h] [rbp-258h]
  unsigned __int64 v309; // [rsp+498h] [rbp-250h]
  unsigned __int64 v310; // [rsp+4A0h] [rbp-248h]
  char *s; // [rsp+4A8h] [rbp-240h]
  char *v312; // [rsp+4B0h] [rbp-238h]
  char *v313; // [rsp+4B8h] [rbp-230h]
  unsigned __int64 v314; // [rsp+4C0h] [rbp-228h]
  __int64 v315; // [rsp+4C8h] [rbp-220h]
  unsigned __int64 v316; // [rsp+4D0h] [rbp-218h]
  unsigned __int64 v317; // [rsp+4D8h] [rbp-210h]
  unsigned __int64 v318; // [rsp+4E0h] [rbp-208h]
  __int64 v319; // [rsp+4E8h] [rbp-200h]
  __int64 v320; // [rsp+4F0h] [rbp-1F8h]
  __int64 v321; // [rsp+4F8h] [rbp-1F0h]
  __int64 v322; // [rsp+500h] [rbp-1E8h]
  __int64 v323; // [rsp+508h] [rbp-1E0h]
  __int64 v324; // [rsp+510h] [rbp-1D8h]
  __int64 v325; // [rsp+518h] [rbp-1D0h]
  __int64 v326; // [rsp+520h] [rbp-1C8h]
  unsigned __int64 v327; // [rsp+528h] [rbp-1C0h]
  unsigned __int64 v328; // [rsp+530h] [rbp-1B8h]
  __int64 v329; // [rsp+538h] [rbp-1B0h]
  int v330; // [rsp+544h] [rbp-1A4h]
  int v331; // [rsp+548h] [rbp-1A0h]
  int v332; // [rsp+54Ch] [rbp-19Ch]
  int v333; // [rsp+550h] [rbp-198h]
  int v334; // [rsp+554h] [rbp-194h]
  wchar_t pwc; // [rsp+558h] [rbp-190h] BYREF
  int v336; // [rsp+55Ch] [rbp-18Ch]
  __int64 v337; // [rsp+560h] [rbp-188h]
  __int64 v338; // [rsp+568h] [rbp-180h]
  unsigned __int64 v339; // [rsp+570h] [rbp-178h]
  unsigned __int8 *v340; // [rsp+578h] [rbp-170h]
  __int64 v341; // [rsp+580h] [rbp-168h]
  __int64 v342; // [rsp+588h] [rbp-160h]
  __int64 v343; // [rsp+590h] [rbp-158h]
  __int64 v344; // [rsp+598h] [rbp-150h]
  const char *v345; // [rsp+5A0h] [rbp-148h]
  const char *v346; // [rsp+5A8h] [rbp-140h]
  mbstate_t ps; // [rsp+5B0h] [rbp-138h] BYREF
  __int64 v348; // [rsp+5B8h] [rbp-130h]
  const char *v349; // [rsp+5C0h] [rbp-128h]
  wchar_t *p_pwc; // [rsp+5C8h] [rbp-120h]
  __int64 v351; // [rsp+5D0h] [rbp-118h]
  size_t v352; // [rsp+5D8h] [rbp-110h]
  unsigned __int8 *v353; // [rsp+5E0h] [rbp-108h]
  __int64 v354; // [rsp+5E8h] [rbp-100h]
  __int64 v355; // [rsp+5F0h] [rbp-F8h]
  __int64 v356; // [rsp+5F8h] [rbp-F0h]
  unsigned __int64 v357; // [rsp+600h] [rbp-E8h]
  __int64 v358; // [rsp+608h] [rbp-E0h]
  __int64 v359; // [rsp+610h] [rbp-D8h]
  __int64 v360; // [rsp+618h] [rbp-D0h]
  __int64 v361; // [rsp+620h] [rbp-C8h]
  __int64 v362; // [rsp+628h] [rbp-C0h]
  __int64 v363; // [rsp+630h] [rbp-B8h]
  __int64 v364; // [rsp+638h] [rbp-B0h]
  unsigned __int8 *v365; // [rsp+640h] [rbp-A8h]
  unsigned __int64 v366; // [rsp+648h] [rbp-A0h]
  unsigned __int64 v367; // [rsp+650h] [rbp-98h]
  __int64 v368; // [rsp+658h] [rbp-90h]
  __int64 v369; // [rsp+660h] [rbp-88h]
  __int64 v370; // [rsp+668h] [rbp-80h]
  __int64 v371; // [rsp+670h] [rbp-78h]
  __int64 v372; // [rsp+678h] [rbp-70h]
  __int64 v373; // [rsp+680h] [rbp-68h]
  __int64 v374; // [rsp+688h] [rbp-60h]
  __int64 v375; // [rsp+690h] [rbp-58h]
  __int64 v376; // [rsp+698h] [rbp-50h]
  __int64 v377; // [rsp+6A0h] [rbp-48h]
  size_t v378; // [rsp+6A8h] [rbp-40h]
  size_t v379; // [rsp+6B0h] [rbp-38h]

  v344 = argsize;
  v343 = buffersize;
  v346 = right_quote;
  v345 = left_quote;
  v132 = __ctype_get_mb_cur_max() == 1;
  v131 = (flags & 2) != 0;
  v14 = 2104662336;
  if ( (flags & 1) == 0 )
    v14 = 2100599792;
  v333 = v14;
  v15 = 1102342545;
  if ( (flags & 4) == 0 )
    v15 = 2100599792;
  v332 = v15;
  v16 = -948341998;
  if ( quote_these_too )
    v16 = -1359646341;
  v331 = v16;
  v334 = flags;
  v17 = flags & 0xFFFFFFFD;
  v330 = v17;
  v130 = 1;
  v61 = 123;
  v62 = 123;
  v63 = 123;
  v71 = 123;
  v69 = 123;
  v70 = 123;
  v92 = 123;
  v89 = 123;
  v90 = 123;
  v91 = 123;
  v57 = 123;
  v58 = 123;
  v56 = 123;
  v86 = 123;
  v88 = 123;
  v87 = 123;
  v18 = 1164683556;
  v19 = 0LL;
  v342 = 0LL;
  v232 = 0LL;
  v200 = literal_quoting_style;
  v288 = 0LL;
  v290 = 0LL;
  v257 = 0LL;
  v289 = 0LL;
  v291 = 0LL;
  v181 = 2935320955LL;
  v128 = -1359646341;
  v182 = 2935320955LL;
  v183 = 0LL;
  v184 = 0LL;
  v185 = 0LL;
  v213 = 0;
  v199 = 0;
  v255 = 0LL;
  v218 = 2935320955LL;
  v189 = 123;
  v188 = 123;
  v222 = 2935320955LL;
  v223 = 2935320955LL;
  v224 = 0LL;
  v225 = 0LL;
  v256 = 0LL;
  v244 = 2935320955LL;
  v196 = 0;
  v248 = 0LL;
  v250 = 0LL;
  v253 = 0LL;
  v254 = 0LL;
  v152 = 2935320955LL;
  v153 = 2935320955LL;
  v154 = 2935320955LL;
  v194 = -1359646341;
  v198 = 0;
  v193 = 123;
  v246 = 0LL;
  v242 = 2935320955LL;
  v251 = 0LL;
  v212 = 0;
  v287 = 0LL;
  v197 = 0;
  v249 = 0LL;
  v195 = 123;
  v252 = 0LL;
  v247 = 0LL;
  v207 = 0;
  v286 = 0LL;
  v284 = 0LL;
  v209 = 0;
  v273 = 2935320955LL;
  v281 = 2935320955LL;
  v211 = 0;
  v186 = 123;
  v226 = 0LL;
  v187 = -1359646341;
  v208 = 0;
  v210 = 0;
  v274 = 2935320955LL;
  v285 = 0LL;
  v241 = 2935320955LL;
  v243 = 2935320955LL;
  v272 = 2935320955LL;
  v283 = 0LL;
  v129 = 123;
  v219 = 2935320955LL;
  v245 = 2935320955LL;
  v191 = 123;
  v231 = 2935320955LL;
  v282 = 2935320955LL;
  v271 = 2935320955LL;
  v276 = 2935320955LL;
  v279 = 2935320955LL;
  v280 = 2935320955LL;
  v269 = 2935320955LL;
  v270 = 2935320955LL;
  v217 = 123;
  v216 = 2935320955LL;
  v215 = 2935320955LL;
  v214 = 2935320955LL;
  v220 = 2935320955LL;
  v221 = 2935320955LL;
  v190 = -1359646341;
  v266 = 2935320955LL;
  v267 = 2935320955LL;
  v278 = 2935320955LL;
  v268 = 2935320955LL;
  v275 = 2935320955LL;
  v277 = 2935320955LL;
  v265 = 2935320955LL;
  v206 = -1359646341;
  v337 = 0LL;
  v338 = 0LL;
  v339 = 0LL;
  v340 = 0LL;
  v341 = 0LL;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v80 = 0;
  v85 = 0;
  v83 = 0;
  v84 = 0;
  v106 = 0;
  v112 = 0;
  v109 = 0;
  v79 = 0;
  v65 = 0;
  v68 = 0;
  v82 = 0;
  v111 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v67 = 0;
  v81 = 0;
  v78 = 0;
  v108 = 0;
  v102 = 0;
  v110 = 0;
  v107 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_416:
              while ( v18 <= 1160277523 )
              {
                if ( v18 > 588386719 )
                {
                  if ( v18 > 914040166 )
                  {
                    if ( v18 <= 1069859286 )
                    {
                      if ( v18 > 952023149 )
                      {
                        if ( v18 <= 1039531452 )
                        {
                          if ( v18 == 952023150 )
                          {
                            v50 = mbsinit(&ps);
                            v18 = -556057864;
                            v19 = 3770299429LL;
                            if ( !v50 )
                              v18 = -524667867;
                            v243 = v237;
                            v241 = v356;
                            v79 = v145;
                            goto LABEL_9;
                          }
                          v198 = v138;
                          v251 = v359;
                          v18 = 1444183977;
                          v19 = v358;
                          v246 = v358;
                          v194 = v212;
                          v193 = v113;
                          v86 = v114;
                          v88 = v115;
                          v87 = v116;
                          v242 = v287;
                        }
                        else
                        {
                          if ( v18 == 1039531453 )
                          {
                            v20 = v203 < 15;
                            v18 = 2048997859;
                            v19 = 1332409277LL;
                            goto LABEL_852;
                          }
                          if ( v18 == 1050052677 )
                          {
                            v18 = -948341998;
                            if ( (v59 & 1) != 0 )
                              v18 = -1359646341;
                            v22 = quote_these_too == 0LL;
                            v19 = 3346625298LL;
                            goto LABEL_826;
                          }
                          v47 = quotearg_buffer_restyled(
                                  buffer,
                                  v98,
                                  arg,
                                  v204,
                                  c_quoting_style,
                                  v334,
                                  quote_these_too,
                                  v313,
                                  v312);
LABEL_581:
                          v232 = v47;
                          v18 = 1761433369;
                        }
                      }
                      else if ( v18 <= 930168511 )
                      {
                        if ( v18 == 914040167 )
                        {
                          v18 = 1107542361;
                          v68 = 114;
                        }
                        else
                        {
                          v144 = v129;
                          v18 = 2100599792;
                          if ( v101 == shell_always_quoting_style )
                            v18 = 1518367049;
LABEL_765:
                          v19 = v54;
                          v58 = v54;
                          v154 = v76;
                          v9 = v77;
                          v153 = v98;
                          v152 = v99;
                          v11 = v52;
                          v56 = v53;
                          v57 = v55;
                          v10 = v144;
LABEL_849:
                          v12 = 0;
                          v17 = v66;
                          if ( v18 <= -29869521 )
                            goto LABEL_9;
                        }
                      }
                      else
                      {
                        if ( v18 == 930168512 )
                        {
                          v24 = !v132;
                          v18 = 458971213;
                          v19 = 38776264LL;
                          goto LABEL_866;
                        }
                        if ( v18 != 942947921 )
                        {
                          v20 = v201 < 52;
                          v18 = -65356205;
                          v19 = 3350888610LL;
                          goto LABEL_852;
                        }
                        v18 = 1791123025;
                        if ( s2 )
                          v18 = 1082818074;
LABEL_749:
                        v19 = v77;
                        v257 = v77;
                        if ( v18 <= -29869521 )
                          goto LABEL_9;
                      }
                    }
                    else
                    {
                      if ( v18 <= 1107542360 )
                      {
                        if ( v18 > 1089661523 )
                        {
                          if ( v18 == 1089661524 )
                          {
                            v26 = v228 < v66;
                            v18 = -1313313558;
                            v19 = 2254020184LL;
                            goto LABEL_878;
                          }
                          if ( v18 != 1102342545 )
                          {
                            v185 = v362;
                            v184 = v230;
                            v183 = v361;
                            v182 = v360;
                            v63 = v97;
                            v62 = v151;
                            v61 = v60;
                            v18 = -196187907;
                            v128 = 16;
                            v181 = v229;
                            goto LABEL_9;
                          }
                          v295 = v76 + 2;
                          v18 = 2100599792;
                          v19 = 1189111500LL;
                          if ( v76 + 2 < v99 )
                            v18 = 1189111500;
                          goto LABEL_743;
                        }
                        if ( v18 == 1071196288 )
                        {
                          buffer[v296] = 34;
                          v18 = -1628845993;
                          goto LABEL_9;
                        }
                        if ( v18 != 1082818074 )
                          abort();
                        v18 = -1701758103;
                        if ( (v59 & 1) != 0 )
                          v18 = 1791123025;
                        v291 = v77;
                        v289 = s2;
                        goto LABEL_749;
                      }
                      if ( v18 <= 1137760262 )
                      {
                        if ( v18 != 1107542361 )
                        {
                          v24 = !v111;
                          v18 = -802340968;
                          v19 = 3516399363LL;
                          goto LABEL_866;
                        }
                        v143 = v68;
                        v18 = -566300591;
                        v19 = 611946056LL;
                        if ( v101 == shell_always_quoting_style )
                          v18 = 611946056;
LABEL_858:
                        v65 = v143;
                        if ( v18 <= -29869521 )
                          goto LABEL_9;
                      }
                      else
                      {
                        if ( v18 == 1137760263 )
                        {
                          buffer[v192] = 39;
                          v18 = -1985048812;
                          goto LABEL_9;
                        }
                        if ( v18 != 1138468606 )
                        {
                          v47 = quotearg_buffer_restyled(buffer, v378, arg, v379, v200, v330, 0LL, v313, v312);
                          goto LABEL_581;
                        }
                        v18 = 243659639;
                        if ( (v59 & 1) != 0 )
                          v18 = 1909052136;
                        v290 = v204;
                        v19 = v66;
LABEL_779:
                        v288 = v19;
                      }
                    }
                  }
                  else if ( v18 <= 773810349 )
                  {
                    if ( v18 <= 678036768 )
                    {
                      if ( v18 <= 611946055 )
                      {
                        if ( v18 == 588386720 )
                        {
                          v172 = v92;
                          v327 = v256;
                          v26 = v256 < v229;
                          v18 = -18752476;
                          v19 = 2294776156LL;
                          goto LABEL_878;
                        }
                        v22 = v157 == 124;
                        goto LABEL_683;
                      }
                      if ( v18 != 611946056 )
                      {
                        if ( v18 != 633176724 )
                        {
                          buffer[v307] = 39;
                          v18 = -344719664;
                          goto LABEL_9;
                        }
                        v309 = v308 + 1;
                        v26 = v308 + 1 < v229;
                        v18 = -797428663;
                        v19 = 1365790088LL;
                        goto LABEL_878;
                      }
                      v18 = -566300591;
                      v19 = 3791262599LL;
                      if ( (v59 & 1) != 0 )
                        v18 = -503704697;
                      goto LABEL_858;
                    }
                    if ( v18 <= 731462962 )
                    {
                      if ( v18 == 678036769 )
                      {
                        *buffer = 34;
                        v18 = -512169170;
                        goto LABEL_9;
                      }
                      v20 = v64 < 65;
                      v18 = -1533877272;
                      v19 = 52163373LL;
                      goto LABEL_852;
                    }
                    if ( v18 == 731462963 )
                    {
                      v268 = v259 + 1;
                      v278 = v355 + 1;
                      v18 = -1837963395;
                      goto LABEL_9;
                    }
                    if ( v18 == 744704405 )
                    {
                      v26 = v238 < v263;
                      v18 = -1393066116;
                      v19 = 1978893348LL;
                      goto LABEL_878;
                    }
                    v18 = 162359233;
                    v19 = 2080564593LL;
                    if ( v100 < c_quoting_style )
                      v18 = 2080564593;
                    v206 = v100;
                    v107 = v75;
                    v102 = v93;
                    v108 = v75;
                  }
                  else if ( v18 <= 839739733 )
                  {
                    if ( v18 <= 802103346 )
                    {
                      if ( v18 != 773810350 )
                      {
                        v296 = v77 + 1;
                        v26 = v77 + 1 < v66;
                        v18 = -1628845993;
                        v19 = 1071196288LL;
                        goto LABEL_878;
                      }
                      v190 = v100;
                      v221 = (__int64)v235;
                      v220 = (__int64)v234;
                      v215 = (__int64)v353;
                      v18 = -1945450743;
                      v67 = 1;
                      v217 = 0;
                      v216 = v352;
                      goto LABEL_845;
                    }
                    if ( v18 == 802103347 )
                    {
                      v24 = (v60 & 1) == 0;
                      v18 = -1216485219;
                      v19 = 1069746310LL;
                      goto LABEL_866;
                    }
                    if ( v18 != 804757681 )
                    {
                      v185 = v76;
                      v184 = v77;
                      v183 = v98;
                      v46 = v261;
                      goto LABEL_658;
                    }
                    v226 = v227 + v233;
                    v18 = 1450067637;
                    v187 = 0;
                    v19 = v208;
                    v186 = v208;
                  }
                  else
                  {
                    if ( v18 <= 862817541 )
                    {
                      if ( v18 == 839739734 )
                      {
                        v22 = v155 == 33;
                        goto LABEL_677;
                      }
                      if ( v18 == 845002261 )
                      {
                        v18 = -1837765118;
                        if ( v101 == shell_always_quoting_style )
                          v18 = -142266254;
                        v22 = (v59 & 1) == 0;
                        v19 = 2457202178LL;
                        goto LABEL_826;
                      }
                      v88 = v54;
                      v198 = v138;
                      v251 = v76;
                      v242 = v77;
                      v246 = v358;
                      v87 = v52;
                      v18 = 1444183977;
                      v194 = 0;
                      LOBYTE(v19) = v55;
                      v86 = v55;
                      goto LABEL_440;
                    }
                    if ( v18 == 862817542 )
                    {
                      v24 = v72 == 0;
                      v18 = 855426498;
                      v19 = 1693825598LL;
                      goto LABEL_866;
                    }
                    if ( v18 == 896124360 )
                    {
                      buffer[v298] = 63;
                      v18 = -1461007520;
                      goto LABEL_9;
                    }
                    v18 = 2127627676;
                    v213 = 0;
                  }
                }
                else if ( v18 > 302060196 )
                {
                  if ( v18 <= 431686779 )
                  {
                    if ( v18 > 362750762 )
                    {
                      if ( v18 <= 376238590 )
                      {
                        if ( v18 == 362750763 )
                        {
                          v262 = v272;
                          v371 = v283;
                          v26 = v77 < v272;
                          v18 = 1174424815;
                          v19 = 1936182494LL;
                        }
                        else
                        {
                          v26 = (unsigned int)(v157 - 91) < 2;
                          v18 = -1836403181;
                          v19 = 2504174938LL;
                        }
                        goto LABEL_878;
                      }
                      if ( v18 == 376238591 )
                      {
                        v367 = v357 + v76;
                        v112 = v54;
                        v284 = v76;
                        v286 = v77;
                        v109 = v52;
                        v18 = 1802476844;
                        v207 = 0;
                        v106 = v55;
                      }
                      else
                      {
                        if ( v18 == 384496445 )
                        {
                          v22 = v233 == -2LL;
                          v18 = 845002261;
                          v19 = 2382373538LL;
                          goto LABEL_826;
                        }
                        v18 = 1171918786;
                        v282 = strlen(arg);
                        v271 = v282;
                      }
                    }
                    else
                    {
                      if ( v18 > 317543070 )
                      {
                        if ( v18 == 317543071 )
                        {
                          v66 = v276;
                          v60 = v103;
                          v53 = v104;
                          v52 = v105;
                          v204 = v279;
                          v98 = v280;
                          v77 = v269;
                          v76 = v270;
                          v134 = v279 == -1;
                          v24 = v279 != -1;
                          v18 = -638240893;
                          v19 = 3789818041LL;
                          goto LABEL_866;
                        }
                        if ( v18 == 351890760 )
                          goto LABEL_657;
                        v21 = v64 < 63;
                        v18 = 1458014616;
                        goto LABEL_686;
                      }
                      if ( v18 == 302060197 )
                      {
                        v316 = v274;
                        v26 = v274 < v233;
                        v18 = -923634268;
                        v19 = 124031757LL;
                        goto LABEL_878;
                      }
                      buffer[v77] = 63;
                      v18 = 801450872;
                    }
                  }
                  else if ( v18 <= 487851407 )
                  {
                    if ( v18 <= 458971212 )
                    {
                      if ( v18 == 431686780 )
                      {
                        v58 = v54;
                        v154 = v76;
                        v9 = v77;
                        v153 = v98;
                        v152 = v99;
                        v11 = v52;
                        v56 = v53;
                        v57 = v55;
                        v18 = 2100599792;
                        v10 = 1;
                        goto LABEL_849;
                      }
                      v18 = -203699397;
                      v19 = 1458154688LL;
                      if ( v100 != custom_quoting_style )
                        v18 = 1458154688;
                      v277 = (__int64)v235;
                      v275 = (__int64)v234;
                      if ( v18 <= -29869521 )
                        goto LABEL_9;
                    }
                    else if ( v18 == 458971213 )
                    {
                      ps = 0LL;
                      v18 = -524667867;
                      v19 = 1263956095LL;
                      if ( v99 == -1LL )
                        v18 = 1263956095;
                      v79 = 1;
                      v243 = v99;
LABEL_769:
                      v241 = 0LL;
                      if ( v18 <= -29869521 )
                        goto LABEL_9;
                    }
                    else
                    {
                      if ( v18 != 478963546 )
                      {
                        v24 = v258 == 0;
                        v18 = -2110253810;
                        v19 = 3216326125LL;
                        goto LABEL_866;
                      }
                      v18 = 1761433369;
LABEL_772:
                      v232 = v19;
                    }
                  }
                  else
                  {
                    if ( v18 <= 514604008 )
                    {
                      if ( v18 != 487851408 )
                      {
                        if ( v18 != 491752323 )
                        {
                          v20 = v64 < 11;
                          v18 = 1696166023;
                          v19 = 1664721440LL;
                          goto LABEL_852;
                        }
                        v18 = -218431528;
                        v191 = 1;
                        goto LABEL_709;
                      }
                      v21 = v64 < 95;
                      goto LABEL_685;
                    }
                    if ( v18 == 514604009 )
                    {
                      v185 = v76;
                      v184 = v77;
                      v183 = v98;
                      v182 = v99;
                      v63 = v52;
                      v61 = v60;
                      v18 = -196187907;
                      v62 = 1;
                      goto LABEL_659;
                    }
                    if ( v18 != 555643815 )
                    {
                      v26 = v192 < v66;
                      v18 = 1876277711;
                      v19 = 2313720964LL;
                      goto LABEL_878;
                    }
                    v271 = v204;
                    v18 = 1171918786;
                    v282 = v204;
                  }
                }
                else if ( v18 <= 93909507 )
                {
                  if ( v18 > 3146080 )
                  {
                    if ( v18 <= 38776263 )
                    {
                      if ( v18 == 3146081 )
                      {
                        v19 = v147;
                        buffer[v318] = v147;
                        v18 = -766412881;
                        goto LABEL_9;
                      }
                      v293 = v292 + 1;
                      v26 = v292 + 1 < v66;
                      v18 = -738055969;
                      v19 = 4027924448LL;
                      goto LABEL_878;
                    }
                    if ( v18 != 38776264 )
                    {
                      if ( v18 != 52163373 )
                      {
                        v205 = v314 + 1;
                        v18 = -1883327000;
                        v19 = 2020469274LL;
                        if ( v135 )
                          v18 = 2020469274;
                        goto LABEL_553;
                      }
                      v20 = v64 < 59;
                      v18 = 356806177;
                      v19 = 2841733362LL;
                      goto LABEL_852;
                    }
                    v48 = __ctype_b_loc();
                    v19 = v64;
                    v209 = ((*v48)[v64] & 0x4000) != 0;
                    v18 = 1726727373;
                    v281 = v99;
                    v273 = 1LL;
                  }
                  else
                  {
                    if ( v18 <= -18752477 )
                    {
                      if ( v18 != -29869520 )
                      {
                        v255 = v310 + 1;
                        v18 = -1287085763;
                        v199 = 0;
                        goto LABEL_9;
                      }
                      v366 = v76 + n;
                      v18 = 555643815;
                      if ( n > 1 )
                        v18 = 407291040;
                      v22 = !v134;
                      v19 = 555643815LL;
                      goto LABEL_826;
                    }
                    if ( v18 == -18752476 )
                    {
                      v224 = v327 + 1;
                      v225 = v362;
                      v223 = v361;
                      v222 = v360;
                      v70 = v172;
                      v69 = v151;
                      v71 = v171;
                      v189 = v170;
                      v18 = -1252600360;
                      v188 = 1;
                      v37 = v229;
LABEL_841:
                      v218 = v37;
                      goto LABEL_9;
                    }
                    if ( v18 == -14174056 )
                    {
                      v33 = (v95 & 1) == 0;
                      v18 = -1901213698;
                      v34 = -1166965540;
                      goto LABEL_714;
                    }
                    v226 = v227;
                    v18 = 1450067637;
                    v187 = 52;
                    v186 = v120;
                  }
                }
                else if ( v18 <= 211310324 )
                {
                  if ( v18 <= 124031756 )
                  {
                    if ( v18 != 93909508 )
                    {
                      buffer[v329] = 0;
                      v18 = -207910205;
                      goto LABEL_9;
                    }
                    v18 = -601046253;
                    if ( v202 == 44 )
                      v18 = -1252600360;
                    v225 = v321;
                    v19 = v320;
                    v224 = v320;
                    v223 = v98;
                    v222 = v319;
                    v70 = v123;
                    v69 = v53;
                    LOBYTE(v19) = v150;
                    v71 = v150;
                    v188 = v149;
                    v189 = v148;
                    v37 = v66;
                    goto LABEL_841;
                  }
                  if ( v18 == 124031757 )
                  {
                    v19 = (__int64)arg;
                    v157 = arg[v316 + v301];
                    v18 = -56217803;
                    goto LABEL_9;
                  }
                  if ( v18 == 162359233 )
                  {
                    v141 = v107;
                    v336 = v206;
                    v18 = -1545359729;
                    v19 = 3158753429LL;
                    if ( (v107 & 1) != 0 )
                      v18 = -1136213867;
                    v45 = 0LL;
                    goto LABEL_757;
                  }
                  v18 = 1107542361;
                  v68 = 110;
                }
                else
                {
                  if ( v18 <= 243659638 )
                  {
                    if ( v18 != 211310325 )
                    {
                      if ( v18 != 214523443 )
                      {
                        v20 = v155 < 45;
                        v18 = -1594063570;
                        v19 = 3404359514LL;
                        goto LABEL_852;
                      }
                      v21 = v64 < 91;
                      v18 = 924343635;
                      v19 = 431686780LL;
                      goto LABEL_687;
                    }
                    v22 = v64 == 13;
                    v18 = -1408572957;
                    v19 = 914040167LL;
                    goto LABEL_826;
                  }
                  if ( v18 == 243659639 )
                  {
                    v24 = !v139;
                    v18 = 942947921;
                    v19 = 3589649768LL;
                    goto LABEL_866;
                  }
                  if ( v18 != 274076816 )
                  {
                    v26 = v264 < v66;
                    v18 = -1353242973;
                    v19 = 2956806440LL;
                    goto LABEL_878;
                  }
                  v287 = v228;
                  v116 = v95;
                  v115 = v147;
                  v114 = v146;
                  v18 = 1013601919;
                  v212 = 44;
                  v49 = v122;
LABEL_843:
                  v113 = v49;
                }
              }
              if ( v18 > 1636502603 )
                break;
              if ( v18 <= 1377139206 )
              {
                if ( v18 > 1249728679 )
                {
                  if ( v18 > 1350568611 )
                  {
                    if ( v18 <= 1356028548 )
                    {
                      if ( v18 == 1350568612 )
                      {
                        v300 = v299 + 1;
                        v26 = v299 + 1 < v262;
                        v18 = 1604722540;
                        v19 = 2324007968LL;
                        goto LABEL_878;
                      }
                      v190 = v100;
                      v221 = (__int64)v235;
                      v220 = (__int64)v234;
                      v215 = (__int64)v353;
                      v216 = v352;
                      v18 = -1945450743;
                      v217 = 0;
                      v67 = v93;
LABEL_845:
                      v23 = 0LL;
LABEL_846:
                      v214 = v23;
                      goto LABEL_9;
                    }
                    if ( v18 != 1356028549 )
                    {
                      if ( v18 == 1365790088 )
                      {
                        buffer[v309] = 39;
                        v18 = -797428663;
                        goto LABEL_9;
                      }
                      v315 = v285;
                      v351 = v285 + v76;
                      v26 = v285 + v76 < v237;
                      v18 = -656168972;
                      v19 = 1249728680LL;
                      goto LABEL_878;
                    }
                    buffer[v310] = 39;
                    v18 = -25696328;
                  }
                  else
                  {
                    if ( v18 <= 1313720398 )
                    {
                      if ( v18 == 1249728680 )
                      {
                        v24 = arg[v351] == 0;
                        v18 = -656168972;
                        v19 = 2244745266LL;
                        goto LABEL_866;
                      }
                      v243 = strlen(arg);
                      v18 = -524667867;
                      v79 = 1;
                      goto LABEL_769;
                    }
                    if ( v18 == 1313720399 )
                    {
                      v21 = v64 < 39;
                      v18 = -1086794464;
                      goto LABEL_686;
                    }
                    if ( v18 != 1332408599 )
                    {
                      v22 = v203 == 0;
                      v18 = 478963546;
                      v19 = 4166548258LL;
                      goto LABEL_826;
                    }
                    v19 = v133;
                    buffer[v259] = v133;
                    v18 = 731462963;
                  }
                }
                else
                {
                  if ( v18 <= 1178368576 )
                  {
                    if ( v18 <= 1169692131 )
                    {
                      if ( v18 != 1160277524 )
                      {
                        v258 = v343;
                        v159 = v130;
                        v160 = v342;
                        v161 = v337;
                        v75 = v131;
                        v369 = v344;
                        v93 = v338;
                        v352 = v339;
                        v353 = v340;
                        v370 = v341;
                        v234 = v346;
                        v235 = v345;
                        v100 = quoting_style;
                        v18 = -1714275953;
                        goto LABEL_9;
                      }
                      v20 = v202 < 44;
                      v18 = 93909508;
                      v19 = 2360809318LL;
                      goto LABEL_852;
                    }
                    if ( v18 != 1169692132 )
                    {
                      if ( v18 != 1171918786 )
                      {
                        v299 = v77 + 1;
                        v26 = v77 + 1 < v262;
                        v18 = 1350568612;
                        v19 = 2784080932LL;
                        goto LABEL_878;
                      }
                      v261 = v271;
                      v18 = -218431528;
                      v19 = 3435362296LL;
                      if ( v366 <= v282 )
                        v18 = -859605000;
LABEL_708:
                      v191 = 0;
LABEL_709:
                      v36 = v261;
                      goto LABEL_710;
                    }
                    v42 = (v174 & 1) == 0;
                    v18 = 744704405;
                    v43 = -1287085763;
                    goto LABEL_702;
                  }
                  if ( v18 <= 1205967387 )
                  {
                    if ( v18 != 1178368577 )
                    {
                      v18 = 2100599792;
                      v19 = 3923420063LL;
                      if ( arg[v76 + 1] == 63 )
                        v18 = -371547233;
                      goto LABEL_743;
                    }
                    v18 = 1227162352;
                    v19 = 3462512361LL;
                    if ( v100 <= literal_quoting_style )
                      v18 = -832454935;
                    v110 = v93;
                    if ( v18 <= -29869521 )
                      goto LABEL_9;
                  }
                  else if ( v18 == 1205967388 )
                  {
                    v18 = 1107542361;
                    v19 = 3992237050LL;
                    if ( v72 )
                      v18 = -302730246;
                    v68 = v54;
                    if ( v18 <= -29869521 )
                      goto LABEL_9;
                  }
                  else
                  {
                    if ( v18 != 1227162352 )
                    {
                      v303 = v302 + 1;
                      v26 = v302 + 1 < v66;
                      v18 = 1604780808;
                      v19 = 2546562599LL;
                      goto LABEL_878;
                    }
                    v18 = 2080564593;
                    v108 = 1;
                    v102 = v110;
                  }
                }
              }
              else if ( v18 <= 1495336206 )
              {
                if ( v18 > 1444183976 )
                {
                  if ( v18 > 1458014615 )
                  {
                    if ( v18 != 1458014616 )
                    {
                      if ( v18 == 1458154688 )
                      {
                        v277 = (__int64)gettext_quote("`", v100);
                        v275 = (__int64)gettext_quote("'", v100);
                        v18 = -203699397;
                        goto LABEL_9;
                      }
                      v21 = v64 < 124;
                      v18 = 924343635;
                      v19 = 2941089188LL;
                      goto LABEL_687;
                    }
                    v22 = v64 == 63;
                    v18 = -1408572957;
                    v19 = 3290423719LL;
                    goto LABEL_826;
                  }
                  if ( v18 == 1444183977 )
                  {
                    v202 = v194;
                    v148 = v198;
                    v149 = v193;
                    v167 = v86;
                    v150 = v88;
                    v123 = v87;
                    v319 = v246;
                    v320 = v242;
                    v321 = v251;
                    v18 = 1160277524;
                  }
                  else
                  {
                    v145 = v186;
                    v356 = v226;
                    v201 = v187;
                    v18 = 949099689;
                  }
                }
                else
                {
                  if ( v18 <= 1430135177 )
                  {
                    if ( v18 != 1377139207 )
                    {
                      v26 = (unsigned int)(v100 - 8) < 3;
                      v18 = 1877887256;
                      v19 = 432383462LL;
                      goto LABEL_878;
                    }
                    v24 = (v59 & 1) == 0;
                    v18 = -191283640;
                    v19 = 2432798379LL;
                    goto LABEL_866;
                  }
                  if ( v18 != 1430135178 )
                  {
                    if ( v18 != 1438045829 )
                    {
                      v20 = v64 < 126;
                      v18 = -1974647487;
                      v19 = 2941089188LL;
                      goto LABEL_852;
                    }
                    v18 = -2080895887;
                    if ( v98 )
                      v18 = 362750763;
                    if ( !v66 )
                      v18 = 362750763;
                    v19 = v98;
                    v283 = v98;
                    v44 = v66;
                    goto LABEL_732;
                  }
                  v18 = -1126239100;
                  if ( v101 == shell_always_quoting_style )
                    v18 = -1982270910;
                  while ( 2 )
                  {
                    v19 = v192;
                    v247 = v192;
                    v84 = v74;
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          while ( 1 )
                          {
LABEL_9:
                            while ( v18 > -1086794465 )
                            {
                              if ( v18 > -566189535 )
                              {
                                if ( v18 > -293010796 )
                                {
                                  if ( v18 <= -153301372 )
                                  {
                                    if ( v18 > -204446219 )
                                    {
                                      if ( v18 > -196187908 )
                                      {
                                        if ( v18 == -196187907 )
                                        {
                                          v363 = v181;
                                          v203 = v128;
                                          v178 = v61;
                                          v179 = v62;
                                          v180 = v63;
                                          v364 = v182;
                                          v375 = v183;
                                          v376 = v184;
                                          v377 = v185;
                                          v18 = 1039531453;
                                        }
                                        else
                                        {
                                          if ( v18 == -191283640 )
                                          {
                                            v158 = *v349;
                                            v26 = v77 < v66;
                                            v18 = 801450872;
                                            v19 = 314850412LL;
                                            goto LABEL_878;
                                          }
                                          v122 = v80;
                                          v146 = v195;
                                          v147 = v85;
                                          v95 = v83;
                                          v228 = v252;
                                          v306 = v359 + 1;
                                          v18 = -14174056;
                                          v19 = 274076816LL;
                                          if ( v367 <= v359 + 1 )
                                            v18 = 274076816;
                                        }
                                        goto LABEL_416;
                                      }
                                      if ( v18 != -204446218 )
                                      {
                                        s = (char *)v275;
                                        v354 = v277;
                                        v18 = 1545256970;
                                        v19 = 2390758528LL;
                                        if ( v75 )
                                          v18 = -1904208768;
                                        v27 = 0LL;
                                        goto LABEL_261;
                                      }
                                      v30 = v76 == 0;
                                      v18 = -1683197459;
                                      v19 = 2100599792LL;
LABEL_741:
                                      if ( !v30 )
                                        v18 = v19;
LABEL_743:
                                      LOBYTE(v19) = v54;
                                      v58 = v54;
                                      v154 = v76;
                                      v9 = v77;
                                      v153 = v98;
                                      v152 = v99;
                                      v11 = v52;
                                      v56 = v53;
                                      v57 = v55;
LABEL_744:
                                      v10 = 0;
                                      v17 = v66;
                                      v12 = 0;
                                      if ( v18 > -29869521 )
                                        goto LABEL_416;
                                    }
                                    else if ( v18 <= -254114486 )
                                    {
                                      if ( v18 == -293010795 )
                                      {
                                        v163 = v82;
                                        v314 = v245;
                                        v26 = v245 < v66;
                                        v18 = 68555837;
                                        v19 = 1733690637LL;
                                        goto LABEL_878;
                                      }
                                      buffer[v293] = 39;
                                      v18 = -738055969;
                                    }
                                    else
                                    {
                                      if ( v18 == -254114485 )
                                      {
                                        v20 = v64 < 32;
                                        v18 = -1683197459;
                                        v19 = 211310325LL;
                                        goto LABEL_852;
                                      }
                                      if ( v18 != -218431528 )
                                      {
                                        v18 = 1761433369;
                                        v19 = v329;
                                        goto LABEL_772;
                                      }
                                      v55 = v191;
                                      v99 = v231;
                                      v19 = (__int64)arg;
                                      v54 = arg[v76];
                                      v64 = v54;
                                      v18 = -2103073334;
                                    }
                                  }
                                  else if ( v18 <= -78689695 )
                                  {
                                    if ( v18 <= -142266255 )
                                    {
                                      if ( v18 == -153301371 )
                                      {
                                        v292 = v77 + 1;
                                        v26 = v77 + 1 < v66;
                                        v18 = 26245364;
                                        v19 = 2568915835LL;
                                        goto LABEL_878;
                                      }
                                      buffer[v77] = 39;
                                      v18 = -153301371;
                                    }
                                    else
                                    {
                                      if ( v18 == -142266254 )
                                      {
                                        v18 = 302060197;
                                        v274 = 1LL;
                                        goto LABEL_416;
                                      }
                                      if ( v18 == -128419038 )
                                      {
                                        v270 = v377 + 1;
                                        v269 = v376;
                                        v280 = v375;
                                        v279 = v364;
                                        v105 = v180;
                                        v104 = v179;
                                        v103 = v178;
                                        v18 = 317543071;
                                        v276 = v363;
                                        goto LABEL_416;
                                      }
                                      buffer[v297] = 34;
                                      v18 = -626819656;
                                    }
                                  }
                                  else
                                  {
                                    if ( v18 <= -65338433 )
                                    {
                                      if ( v18 == -78689694 )
                                      {
                                        v20 = v157 < 124;
                                        v18 = 593043525;
                                        v19 = 1555002096LL;
                                        goto LABEL_852;
                                      }
                                      if ( v18 != -69103703 )
                                      {
                                        v22 = v201 == 52;
                                        v18 = -1045361117;
                                        v19 = 3738909432LL;
                                        goto LABEL_826;
                                      }
                                      buffer[v230] = 39;
                                      v18 = 1676459103;
                                      goto LABEL_416;
                                    }
                                    if ( v18 == -65338432 )
                                    {
                                      v18 = 478963546;
                                      if ( v203 == 16 )
                                        v18 = 1909052136;
                                      v290 = v364;
                                      v19 = v363;
                                      goto LABEL_779;
                                    }
                                    if ( v18 != -56217803 )
                                    {
                                      v22 = v101 == shell_always_quoting_style;
                                      v18 = 1205967388;
                                      v19 = 2475422019LL;
                                      goto LABEL_826;
                                    }
                                    v20 = v157 < 96;
                                    v18 = -78689694;
                                    v19 = 1972783966LL;
LABEL_852:
                                    if ( v20 )
                                      v18 = v19;
                                    if ( v18 > -29869521 )
                                      goto LABEL_416;
                                  }
                                }
                                else if ( v18 <= -496296700 )
                                {
                                  if ( v18 > -512169171 )
                                  {
                                    if ( v18 <= -503704698 )
                                    {
                                      if ( v18 == -512169170 )
                                      {
                                        v18 = -1136213867;
                                        v45 = 1LL;
LABEL_757:
                                        v265 = v45;
                                        goto LABEL_9;
                                      }
                                      v19 = (__int64)arg;
                                      v25 = arg[v76] == 0;
LABEL_248:
                                      v111 = v25;
                                      v18 = 1133326283;
                                    }
                                    else
                                    {
                                      if ( v18 == -503704697 )
                                        goto LABEL_657;
                                      if ( v18 == -500911391 )
                                      {
                                        v240 = arg[v348];
                                        v18 = -1883327000;
                                        v19 = 2692401865LL;
                                        if ( v240 > 47 )
                                          v18 = -1602565431;
                                        goto LABEL_553;
                                      }
                                      v19 = v175;
                                      buffer[v328] = v175;
                                      v18 = 1497565926;
                                    }
                                    goto LABEL_416;
                                  }
                                  if ( v18 <= -555257751 )
                                  {
                                    if ( v18 == -566189534 )
                                    {
                                      v18 = 1146571443;
                                      v200 = shell_escape_always_quoting_style;
                                      goto LABEL_416;
                                    }
                                    v18 = -1124374876;
                                    v211 = 0;
                                  }
                                  else if ( v18 == -555257750 )
                                  {
                                    v18 = -166689844;
                                    if ( (v94 & 1) != 0 )
                                      v18 = 570463809;
                                    v19 = v192;
                                    v252 = v192;
                                    v83 = v74;
                                    v85 = v73;
                                    v195 = v94;
LABEL_502:
                                    v80 = v121;
                                    if ( v18 > -29869521 )
                                      goto LABEL_416;
                                  }
                                  else
                                  {
                                    if ( v18 != -530064271 )
                                    {
                                      v120 = v79;
                                      v227 = v241;
                                      v237 = v243;
                                      p_pwc = &pwc;
                                      v301 = v241 + v76;
                                      v233 = rpl_mbrtowc(&pwc, &arg[v241 + v76], v243 - (v241 + v76), &ps);
                                      v22 = v233 == 0;
                                      v18 = -311216246;
                                      v19 = 4291010665LL;
                                      goto LABEL_826;
                                    }
                                    buffer[v317] = 92;
                                    v18 = -443292589;
                                  }
                                }
                                else if ( v18 <= -392406203 )
                                {
                                  if ( v18 <= -443292590 )
                                  {
                                    if ( v18 != -496296699 )
                                    {
                                      v26 = v205 < v66;
                                      v18 = -752783169;
                                      v19 = 2355000813LL;
                                      goto LABEL_878;
                                    }
                                    v24 = (v53 & 1) == 0;
                                    v18 = 942947921;
                                    v19 = 802103347LL;
                                    goto LABEL_866;
                                  }
                                  if ( v18 == -443292589 )
                                  {
                                    v304 = v317 + 1;
                                    v26 = v317 + 1 < v66;
                                    v18 = -1827018639;
                                    v19 = 1877917782LL;
                                    goto LABEL_878;
                                  }
                                  if ( v18 == -432841603 )
                                  {
                                    v20 = v64 < 93;
                                    v18 = 431686780;
                                    v19 = 4255720622LL;
                                    goto LABEL_852;
                                  }
                                  v22 = v64 == 0;
                                  v18 = -1408572957;
                                  v19 = 1685934152LL;
LABEL_826:
                                  if ( v22 )
                                    v18 = v19;
                                  if ( v18 > -29869521 )
                                    goto LABEL_416;
                                }
                                else
                                {
                                  if ( v18 > -325778188 )
                                  {
                                    if ( v18 == -325778187 )
                                    {
                                      v19 = v99;
                                      v18 = -1683197459;
                                      if ( v76 )
                                        v18 = 2100599792;
                                      if ( v99 != 1 )
                                        v18 = 2100599792;
                                      goto LABEL_743;
                                    }
                                    if ( v18 == -311216246 )
                                    {
                                      v22 = v233 == -1LL;
                                      v18 = 384496445;
                                      v19 = 1727611740LL;
                                      goto LABEL_826;
                                    }
                                    v18 = 1107542361;
                                    if ( (v59 & 1) != 0 )
                                      v18 = -1252600360;
                                    if ( !v137 )
                                      v18 = 1107542361;
                                    v68 = v54;
                                    goto LABEL_326;
                                  }
                                  if ( v18 == -392406202 )
                                  {
                                    v18 = -1683197459;
                                    if ( v76 )
                                      v18 = 2100599792;
                                    v19 = (__int64)arg;
                                    if ( arg[1] )
                                      v18 = 2100599792;
                                    goto LABEL_743;
                                  }
                                  if ( v18 == -371547233 )
                                  {
                                    v349 = &arg[v295];
                                    v155 = arg[v295];
                                    v18 = 225181482;
                                    goto LABEL_416;
                                  }
                                  v249 = v307 + 1;
                                  v18 = -1901213698;
                                  v197 = 0;
                                }
                              }
                              else if ( v18 > -842271829 )
                              {
                                if ( v18 <= -738055970 )
                                {
                                  if ( v18 > -790716791 )
                                  {
                                    if ( v18 <= -771516139 )
                                    {
                                      if ( v18 == -790716790 )
                                      {
                                        v24 = (v59 & 1) == 0;
                                        v18 = 1430135178;
                                        v19 = 1716048650LL;
                                      }
                                      else
                                      {
                                        v139 = v101 == shell_always_quoting_style;
                                        v18 = 243659639;
                                        if ( v101 == shell_always_quoting_style )
                                          v18 = 1138468606;
                                        v24 = v77 == 0;
                                        v19 = 243659639LL;
                                      }
                                      goto LABEL_866;
                                    }
                                    if ( v18 == -771516138 )
                                    {
                                      v18 = 1856290643;
                                      v78 = 1;
                                      v38 = v118;
                                      goto LABEL_397;
                                    }
                                    if ( v18 != -766412881 )
                                    {
                                      v294 = v205 + 1;
                                      v26 = v205 + 1 < v66;
                                      v18 = -895416313;
                                      v19 = 3106099115LL;
                                      goto LABEL_878;
                                    }
                                    v286 = v318 + 1;
                                    v19 = (__int64)arg;
                                    v112 = arg[v306];
                                    v284 = v306;
                                    v109 = v166;
                                    v106 = v146;
                                    v18 = 1802476844;
                                    LOBYTE(v19) = v122;
                                    v207 = v122;
                                    goto LABEL_416;
                                  }
                                  if ( v18 <= -831679116 )
                                  {
                                    if ( v18 != -842271828 )
                                    {
                                      v22 = v100 == literal_quoting_style;
                                      v18 = 1877887256;
                                      v19 = 1355218337LL;
                                      goto LABEL_826;
                                    }
                                    v21 = v64 < 35;
                                    v18 = -204446218;
LABEL_686:
                                    v19 = 924343635LL;
LABEL_687:
                                    if ( v21 )
                                      v18 = v19;
                                    v129 = 0;
                                    if ( v18 > -29869521 )
                                      goto LABEL_416;
                                  }
                                  else
                                  {
                                    if ( v18 == -831679115 )
                                    {
                                      v58 = v54;
                                      v154 = v76;
                                      v9 = v77;
                                      v153 = v98;
                                      v152 = v99;
                                      v11 = v52;
                                      v56 = v53;
                                      v57 = v55;
                                      v10 = 0;
                                      v17 = v66;
                                      v12 = 0;
                                      v18 = v333;
                                      goto LABEL_416;
                                    }
                                    if ( v18 != -802340968 )
                                    {
                                      v256 = v309 + 1;
                                      v18 = 588386720;
                                      v92 = 1;
                                      goto LABEL_416;
                                    }
                                    v72 = v119 & 1;
                                    v135 = v101 != shell_always_quoting_style;
                                    v136 = v119 & 1 & (v101 != shell_always_quoting_style);
                                    v137 = n != 0;
                                    v18 = -218431528;
                                    if ( n )
                                      v18 = -29869520;
                                    v19 = 4076535768LL;
                                    if ( (v119 & 1 & (v101 != shell_always_quoting_style)) == 0 )
                                      v18 = -218431528;
                                    v191 = 0;
                                    v36 = v204;
LABEL_710:
                                    v231 = v36;
                                    if ( v18 > -29869521 )
                                      goto LABEL_416;
                                  }
                                }
                                else if ( v18 <= -630570212 )
                                {
                                  if ( v18 > -695884676 )
                                  {
                                    if ( v18 == -695884675 )
                                    {
                                      v26 = v77 < v66;
                                      v18 = -153301371;
                                      v19 = 4144262358LL;
                                      goto LABEL_878;
                                    }
                                    if ( v18 != -656168972 )
                                    {
                                      v19 = v76;
                                      v25 = v76 == v204;
                                      goto LABEL_248;
                                    }
                                    v18 = 1450067637;
                                    v187 = 52;
                                    v19 = v315;
LABEL_759:
                                    v226 = v19;
                                    v186 = 0;
                                    goto LABEL_416;
                                  }
                                  if ( v18 != -738055969 )
                                  {
                                    v24 = (v59 & 1) == 0;
                                    v18 = -496296699;
LABEL_334:
                                    v19 = 942947921LL;
                                    goto LABEL_866;
                                  }
                                  v245 = v293 + 1;
                                  v18 = -293010795;
                                  v82 = 1;
                                }
                                else
                                {
                                  if ( v18 <= -589261252 )
                                  {
                                    if ( v18 != -630570211 )
                                    {
                                      if ( v18 != -626819656 )
                                      {
                                        v185 = v321;
                                        v184 = v320;
                                        v183 = v98;
                                        v182 = v319;
                                        v63 = v123;
                                        v62 = v53;
                                        v61 = v60;
                                        v128 = v202;
                                        v18 = -196187907;
                                        goto LABEL_8;
                                      }
                                      v298 = v297 + 1;
                                      v26 = v297 + 1 < v66;
                                      v18 = -1461007520;
                                      v19 = 896124360LL;
                                      goto LABEL_878;
                                    }
                                    buffer[v308] = 36;
                                    v18 = 633176724;
                                    goto LABEL_416;
                                  }
                                  if ( v18 != -589261251 )
                                  {
                                    if ( v18 == -569556752 )
                                      goto LABEL_657;
                                    v164 = v65;
                                    v30 = v72 == 0;
                                    v18 = 2100599792;
                                    v19 = 2775138073LL;
                                    goto LABEL_741;
                                  }
                                  v24 = (v59 & 1) == 0;
                                  v18 = -1210419949;
                                  v19 = 1691038859LL;
LABEL_866:
                                  if ( !v24 )
                                    v18 = v19;
                                  if ( v18 > -29869521 )
                                    goto LABEL_416;
                                }
                              }
                              else if ( v18 <= -1003098300 )
                              {
                                if ( v18 > -1063397717 )
                                {
                                  if ( v18 <= -1021704238 )
                                  {
                                    if ( v18 == -1063397716 )
                                    {
                                      v18 = 804757681;
                                      v208 = 0;
                                      goto LABEL_416;
                                    }
                                    v18 = -1124374876;
                                    v19 = (unsigned int)v201;
                                    v211 = v201;
                                  }
                                  else
                                  {
                                    if ( v18 == -1021704237 )
                                    {
                                      v20 = v100 < shell_always_quoting_style;
                                      v18 = -1003098299;
                                      v19 = 1178368577LL;
                                      goto LABEL_852;
                                    }
                                    if ( v18 == -1019216774 )
                                    {
                                      v20 = v64 < 125;
                                      v18 = 1441255286;
                                      v19 = 1491009451LL;
                                      goto LABEL_852;
                                    }
                                    v18 = -1908043628;
                                  }
                                }
                                else
                                {
                                  if ( v18 <= -1080190791 )
                                  {
                                    if ( v18 != -1086794464 )
                                    {
                                      v221 = (__int64)v235;
                                      v220 = (__int64)v234;
                                      v67 = v162;
                                      v18 = -1945450743;
                                      v190 = 2;
                                      v217 = v142;
                                      v216 = 1LL;
                                      v215 = (__int64)"'";
                                      v23 = v266;
                                      goto LABEL_846;
                                    }
                                    v18 = 2100599792;
                                    if ( v101 == shell_always_quoting_style )
                                      v18 = 1741973679;
                                    v19 = v54;
                                    v58 = v54;
                                    v154 = v76;
                                    v9 = v77;
                                    v153 = v98;
                                    v152 = v99;
                                    v11 = v52;
                                    v57 = v55;
                                    v10 = 1;
                                    v12 = 0;
                                    v17 = v66;
                                    v56 = 1;
                                    goto LABEL_416;
                                  }
                                  if ( v18 == -1080190790 )
                                  {
                                    v20 = v64 < 36;
                                    v18 = -859861096;
                                    v19 = 3001927806LL;
                                    goto LABEL_852;
                                  }
                                  if ( v18 != -1078641171 )
                                  {
                                    v20 = v64 < 123;
                                    v18 = -1019216774;
                                    v19 = 3307806097LL;
                                    goto LABEL_852;
                                  }
                                  *buffer = 39;
                                  v18 = -2110253810;
                                }
                              }
                              else
                              {
                                if ( v18 <= -923634269 )
                                {
                                  if ( v18 <= -986147632 )
                                  {
                                    if ( v18 != -1003098299 )
                                    {
                                      v20 = v64 < 96;
                                      v18 = -2076511807;
                                      v19 = 487851408LL;
                                      goto LABEL_852;
                                    }
                                    v18 = 1495336207;
                                    v19 = 1856290643LL;
                                    if ( v100 < shell_escape_quoting_style )
                                      v18 = 1856290643;
                                    v78 = v93;
                                    v38 = v75;
LABEL_397:
                                    v81 = v38;
                                  }
                                  else
                                  {
                                    if ( v18 != -986147631 )
                                    {
                                      if ( v18 == -948341998 )
                                      {
                                        v18 = -1252600360;
                                        if ( (v169 & 1) != 0 )
                                          v18 = -1813361659;
                                        v254 = v326;
                                        v253 = v325;
                                        v250 = v324;
                                        v248 = v323;
                                        v91 = v126;
                                        v90 = v125;
                                        v89 = v96;
                                        v196 = v124;
                                        v244 = v322;
                                        v225 = v326;
                                        v19 = v325;
                                        v224 = v325;
                                        v223 = v324;
                                        v222 = v323;
                                        v70 = v126;
                                        v69 = v125;
                                        LOBYTE(v19) = v96;
                                        v71 = v96;
                                        v188 = v168;
                                        v189 = v124;
                                        v37 = v322;
                                        goto LABEL_841;
                                      }
                                      v22 = v201 == 0;
                                      v18 = -1045361117;
                                      v19 = 952023150LL;
                                      goto LABEL_826;
                                    }
                                    buffer[v302] = 36;
                                    v18 = 1230842932;
                                  }
                                  goto LABEL_416;
                                }
                                if ( v18 > -859861097 )
                                {
                                  if ( v18 == -859861096 )
                                  {
                                    v20 = v64 < 38;
                                    v18 = 1313720399;
                                    v19 = 2549188345LL;
                                    goto LABEL_852;
                                  }
                                  if ( v18 == -859605000 )
                                  {
                                    v40 = memcmp(&arg[v76], s2, n);
                                    v18 = -218431528;
                                    v19 = 2336206080LL;
                                    if ( !v40 )
                                      v18 = -1958761216;
                                    goto LABEL_708;
                                  }
                                  v18 = 588386720;
                                  if ( v101 == shell_always_quoting_style )
                                    v18 = -2001820855;
LABEL_180:
                                  v256 = v230;
                                  v19 = v97;
                                  v92 = v97;
                                  if ( v18 > -29869521 )
                                    goto LABEL_416;
                                }
                                else if ( v18 == -923634268 )
                                {
                                  v18 = -2145419735;
                                  v210 = 0;
                                }
                                else
                                {
                                  if ( v18 != -895416313 )
                                  {
                                    v20 = v155 < 39;
                                    v18 = 1636502604;
                                    v19 = 839739734LL;
                                    goto LABEL_852;
                                  }
                                  v219 = v294 + 1;
                                  v18 = -1883327000;
                                }
                              }
                            }
                            if ( v18 <= -1726051462 )
                              break;
                            if ( v18 > -1373557907 )
                            {
                              if ( v18 <= -1252600361 )
                              {
                                if ( v18 > -1313313559 )
                                {
                                  if ( v18 > -1287085764 )
                                  {
                                    if ( v18 == -1287085763 )
                                    {
                                      v177 = v199;
                                      v328 = v255;
                                      v26 = v255 < v263;
                                      v18 = 1497565926;
                                      v19 = 3797289596LL;
                                      goto LABEL_878;
                                    }
                                    if ( v18 == -1266511865 )
                                    {
                                      v20 = v64 < 13;
                                      v18 = -1080190790;
                                      v19 = 1984308195LL;
                                      goto LABEL_852;
                                    }
                                    v24 = !v117;
                                    v18 = -790716790;
                                    v19 = 3739709546LL;
                                    goto LABEL_866;
                                  }
                                  if ( v18 != -1313313558 )
                                  {
                                    v20 = v64 < 33;
                                    v18 = -842271828;
                                    v19 = 4040852811LL;
                                    goto LABEL_852;
                                  }
                                  v307 = v228 + 1;
                                  v26 = v228 + 1 < v66;
                                  v18 = -344719664;
                                  v19 = 665576884LL;
LABEL_878:
                                  if ( v26 )
                                    v18 = v19;
                                  if ( v18 > -29869521 )
                                    goto LABEL_416;
                                }
                                else if ( v18 <= -1353878109 )
                                {
                                  if ( v18 == -1373557906 )
                                  {
                                    v20 = v155 < 60;
                                    v18 = -1950830230;
                                    v19 = 2899363364LL;
                                    goto LABEL_852;
                                  }
                                  v31 = quote_these_too[v96 >> 5];
                                  v18 = -948341998;
                                  if ( _bittest((const int *)&v31, v96) )
                                    v18 = -1813361659;
                                  v254 = v326;
                                  v253 = v325;
                                  v250 = v324;
                                  v248 = v323;
                                  v91 = v126;
                                  v90 = v125;
                                  v19 = v96;
                                  v89 = v96;
                                  LOBYTE(v19) = v124;
                                  v196 = v124;
                                  v32 = v322;
LABEL_320:
                                  v244 = v32;
                                }
                                else
                                {
                                  if ( v18 == -1353878108 )
                                  {
                                    v22 = v99 == -1LL;
                                    v18 = -325778187;
                                    v19 = 3902561094LL;
                                    goto LABEL_826;
                                  }
                                  if ( v18 == -1353242973 )
                                  {
                                    v291 = v264 + 1;
                                    v289 = v365 + 1;
                                    v18 = -1701758103;
                                  }
                                  else
                                  {
                                    v19 = v140;
                                    buffer[v264] = v140;
                                    v18 = -1353242973;
                                  }
                                }
                              }
                              else if ( v18 <= -1188868182 )
                              {
                                if ( v18 <= -1228794858 )
                                {
                                  if ( v18 != -1252600360 )
                                  {
                                    v22 = v157 == 94;
LABEL_683:
                                    v18 = -1836403181;
                                    v19 = 2504174938LL;
                                    goto LABEL_826;
                                  }
                                  v263 = v218;
                                  v173 = v189;
                                  v174 = v188;
                                  v175 = v71;
                                  v176 = v69;
                                  v127 = v70;
                                  v372 = v222;
                                  v373 = v223;
                                  v238 = v224;
                                  v374 = v225;
                                  v42 = (v70 & 1) == 0;
                                  v18 = -1287085763;
                                  v43 = 1169692132;
LABEL_702:
                                  if ( !v42 )
                                    v18 = v43;
                                  v19 = v238;
                                  v255 = v238;
                                  LOBYTE(v19) = v127;
                                  v199 = v127;
                                  if ( v18 > -29869521 )
                                    goto LABEL_416;
                                }
                                else
                                {
                                  if ( v18 == -1228794857 )
                                  {
                                    v22 = v101 == c_quoting_style;
                                    v18 = -1465383208;
                                    v19 = 1524092799LL;
                                    goto LABEL_826;
                                  }
                                  if ( v18 == -1216485219 )
                                  {
                                    v18 = 942947921;
                                    if ( v98 )
                                      v18 = -1727247654;
                                    v24 = v66 == 0;
                                    goto LABEL_334;
                                  }
                                  v18 = -293010795;
                                  v19 = 2109114056LL;
                                  if ( v101 == shell_always_quoting_style )
                                    v18 = 2109114056;
LABEL_819:
                                  v245 = v77;
                                  v82 = v52;
                                  if ( v18 > -29869521 )
                                    goto LABEL_416;
                                }
                              }
                              else
                              {
                                if ( v18 > -1136213868 )
                                {
                                  if ( v18 == -1136213867 )
                                  {
                                    v190 = v336;
                                    v221 = (__int64)v235;
                                    v220 = (__int64)v234;
                                    v18 = -1945450743;
                                    v67 = 1;
                                    v217 = v141;
                                    v216 = 1LL;
                                    v215 = (__int64)"\"";
                                    v23 = v265;
                                    goto LABEL_846;
                                  }
                                  if ( v18 == -1126239100 )
                                  {
                                    v165 = v84;
                                    v317 = v247;
                                    v26 = v247 < v66;
                                    v18 = -443292589;
                                    v19 = 3764903025LL;
                                    goto LABEL_878;
                                  }
                                  v18 = 1444183977;
                                  if ( !v211 )
                                    v18 = 1726727373;
                                  v88 = v54;
                                  v281 = v237;
                                  v273 = v356;
                                  v209 = v145;
                                  v251 = v76;
                                  v242 = v77;
                                  v19 = v237;
                                  v246 = v237;
                                  v87 = v52;
                                  v198 = 0;
                                  LOBYTE(v19) = v55;
                                  v86 = v55;
                                  v194 = v211;
LABEL_440:
                                  v193 = 0;
                                  goto LABEL_416;
                                }
                                if ( v18 == -1188868181 )
                                {
                                  buffer[v294] = 48;
                                  v18 = -895416313;
                                }
                                else if ( v18 == -1166965540 )
                                {
                                  v33 = (v122 & 1) == 0;
                                  v18 = 1089661524;
                                  v34 = -1901213698;
LABEL_714:
                                  if ( !v33 )
                                    v18 = v34;
                                  v19 = v228;
                                  v249 = v228;
                                  LOBYTE(v19) = v95;
                                  v197 = v95;
                                  if ( v18 > -29869521 )
                                    goto LABEL_416;
                                }
                                else
                                {
                                  v18 = -566300591;
                                  v65 = 102;
                                }
                              }
                            }
                            else if ( v18 <= -1545359730 )
                            {
                              if ( v18 <= -1652344058 )
                              {
                                if ( v18 <= -1701758104 )
                                {
                                  if ( v18 != -1726051461 )
                                  {
                                    v20 = v100 < shell_escape_always_quoting_style;
                                    v18 = 1955349809;
                                    v19 = 3273263059LL;
                                    goto LABEL_852;
                                  }
                                  buffer[v292] = 36;
                                  v18 = 26245364;
                                }
                                else if ( v18 == -1701758103 )
                                {
                                  v365 = v289;
                                  v264 = v291;
                                  v140 = *v289;
                                  v18 = 1791123025;
                                  if ( *v289 )
                                    v18 = 282418646;
                                  v19 = v291;
                                  v257 = v291;
                                }
                                else
                                {
                                  if ( v18 != -1683197459 )
                                  {
                                    v20 = v64 < 8;
                                    v18 = -2107586658;
                                    v19 = 2762466557LL;
                                    goto LABEL_852;
                                  }
                                  v18 = 924343635;
                                  v129 = 1;
                                }
                                goto LABEL_416;
                              }
                              if ( v18 <= -1602565432 )
                              {
                                if ( v18 != -1652344057 )
                                {
                                  v297 = v296 + 1;
                                  v26 = v296 + 1 < v66;
                                  v18 = -626819656;
                                  v19 = 4175558105LL;
                                  goto LABEL_878;
                                }
                                v18 = -566300591;
                                v65 = 118;
                              }
                              else
                              {
                                if ( v18 != -1602565431 )
                                {
                                  if ( v18 == -1594063570 )
                                  {
                                    v20 = v155 < 47;
                                    v18 = -1373557906;
                                    v19 = 2410046339LL;
                                    goto LABEL_852;
                                  }
                                  v26 = v192 < v66;
                                  v18 = -1985048812;
                                  v19 = 1137760263LL;
                                  goto LABEL_878;
                                }
                                v18 = -1883327000;
                                v19 = 3799162882LL;
                                if ( v240 < 58 )
                                  v18 = -495804414;
LABEL_553:
                                v219 = v205;
                                if ( v18 > -29869521 )
                                  goto LABEL_416;
                              }
                            }
                            else
                            {
                              if ( v18 > -1465383209 )
                              {
                                if ( v18 <= -1408572958 )
                                {
                                  if ( v18 == -1465383208 )
                                  {
LABEL_265:
                                    v58 = v54;
                                    v154 = v76;
                                    v9 = v77;
                                  }
                                  else
                                  {
                                    if ( v18 != -1461007520 )
                                    {
                                      v21 = v64 < 43;
LABEL_685:
                                      v18 = 431686780;
                                      goto LABEL_686;
                                    }
                                    v9 = v298 + 1;
                                    v154 = v295;
                                    v58 = v158;
                                  }
                                  v153 = v98;
                                  v152 = v99;
                                  v11 = v52;
                                  v56 = v53;
                                  v57 = v55;
                                  v18 = 2100599792;
                                  goto LABEL_744;
                                }
                                if ( v18 != -1408572957 )
                                {
                                  if ( v18 != -1395603932 )
                                  {
                                    v310 = v238 + 1;
                                    v26 = v238 + 1 < v263;
                                    v18 = -25696328;
                                    v19 = 1356028549LL;
                                    goto LABEL_878;
                                  }
                                  v22 = v155 == 47;
                                  goto LABEL_677;
                                }
                                v18 = 930168512;
                                goto LABEL_416;
                              }
                              if ( v18 <= -1532500740 )
                              {
                                if ( v18 != -1545359729 )
                                {
                                  v20 = v64 < 92;
                                  v18 = -432841603;
                                  v19 = 214523443LL;
                                  goto LABEL_852;
                                }
                                v24 = v258 == 0;
                                v18 = -512169170;
                                v19 = 678036769LL;
                                goto LABEL_866;
                              }
                              if ( v18 != -1532500739 )
                              {
                                if ( v18 == -1519829223 )
                                {
                                  v254 = v76;
                                  v253 = v77;
                                  v250 = v98;
                                  v248 = v99;
                                  v91 = v52;
                                  v90 = v53;
                                  v89 = v164;
                                  v18 = -1813361659;
                                  v196 = 0;
                                  v32 = v66;
                                  goto LABEL_320;
                                }
                                buffer[v299] = 92;
                                v18 = 1350568612;
                                goto LABEL_416;
                              }
                              v18 = -566300591;
                              v65 = 97;
                            }
                          }
                          if ( v18 <= -1934157979 )
                            break;
                          if ( v18 <= -1837765119 )
                          {
                            if ( v18 > -1901213699 )
                            {
                              if ( v18 <= -1883327001 )
                              {
                                if ( v18 == -1901213698 )
                                {
                                  v166 = v197;
                                  v318 = v249;
                                  v26 = v249 < v66;
                                  v18 = -766412881;
                                  v19 = 3146081LL;
                                  goto LABEL_878;
                                }
                                v22 = v155 == 45;
LABEL_677:
                                v18 = -1738845390;
                                v19 = 1377139207LL;
                                goto LABEL_826;
                              }
                              if ( v18 == -1883327000 )
                              {
                                v154 = v76;
                                v153 = v98;
                                v152 = v99;
                                v11 = v163;
                                v56 = v53;
                                v57 = v55;
                                v18 = 2100599792;
                                v58 = 48;
                                v12 = 1;
                                v10 = 0;
                                v17 = v66;
                                v9 = v219;
                                goto LABEL_416;
                              }
                              if ( v18 == -1862168917 )
                                goto LABEL_657;
                              v355 = v278;
                              v259 = v268;
                              v133 = *(_BYTE *)v278;
                              v18 = -1904208768;
                              v19 = 1711996347LL;
                              if ( *(_BYTE *)v278 )
                                v18 = 1711996347;
                              v27 = v268;
LABEL_261:
                              v267 = v27;
                              if ( v18 > -29869521 )
                                goto LABEL_416;
                            }
                            else if ( v18 <= -1908043629 )
                            {
                              if ( v18 != -1934157978 )
                              {
                                v18 = 1365876669;
                                v19 = v227;
                                v285 = v227;
                                goto LABEL_416;
                              }
                              v18 = -601046253;
                              if ( !v202 )
                                v18 = 2100599792;
                              v154 = v321;
                              v9 = v320;
                              v153 = v98;
                              v152 = v319;
                              v11 = v123;
                              v56 = v53;
                              v19 = v150;
                              v58 = v150;
                              v57 = v167;
                              v12 = v149;
                              v10 = v148;
                              v17 = v66;
                              if ( v18 > -29869521 )
                                goto LABEL_416;
                            }
                            else
                            {
                              if ( v18 == -1908043628 )
                              {
                                v20 = v101 < c_quoting_style;
                                v18 = -1228794857;
                                v19 = 1671992023LL;
                                goto LABEL_852;
                              }
                              if ( v18 != -1905059209 )
                              {
                                v216 = strlen(s);
                                v190 = v100;
                                v221 = v354;
                                v220 = (__int64)s;
                                v215 = (__int64)s;
                                v18 = -1945450743;
                                v67 = 1;
                                v217 = v75;
                                v23 = v267;
                                goto LABEL_846;
                              }
                              v18 = 1146571443;
                              if ( (v119 & 1) != 0 )
                                v18 = -566189534;
LABEL_797:
                              v19 = (unsigned int)v101;
                              v200 = v101;
                              if ( v18 > -29869521 )
                                goto LABEL_416;
                            }
                          }
                          else if ( v18 <= -1790792359 )
                          {
                            if ( v18 <= -1827018640 )
                            {
                              if ( v18 != -1837765118 )
                              {
                                v18 = 1504572140;
                                goto LABEL_416;
                              }
                              v41 = iswprint(pwc);
                              v18 = -1063397716;
                              v19 = 804757681LL;
                              if ( v41 )
                                v18 = 804757681;
                              LOBYTE(v19) = v120;
                              v208 = v19;
                              if ( v18 > -29869521 )
                                goto LABEL_416;
                            }
                            else
                            {
                              if ( v18 == -1827018639 )
                              {
                                v305 = v304 + 1;
                                v26 = v304 + 1 < v66;
                                v18 = 1810979988;
                                v19 = 1589330513LL;
                                goto LABEL_878;
                              }
                              if ( v18 != -1819545277 )
                              {
                                v229 = v244;
                                v170 = v196;
                                v171 = v89;
                                v151 = v90;
                                v97 = v91;
                                v360 = v248;
                                v361 = v250;
                                v230 = v253;
                                v362 = v254;
                                v24 = (v59 & 1) == 0;
                                v18 = -845670468;
                                v19 = 1107427004LL;
                                goto LABEL_866;
                              }
                              v18 = -1252600360;
                              if ( (v59 & 1) != 0 )
                                v18 = 351890760;
LABEL_326:
                              v71 = v54;
                              v225 = v76;
                              v224 = v77;
                              v223 = v98;
                              v222 = v99;
                              v70 = v52;
                              v19 = v53;
                              v69 = v53;
                              v189 = 0;
                              v218 = v66;
                              v188 = 0;
                              if ( v18 > -29869521 )
                                goto LABEL_416;
                            }
                          }
                          else
                          {
                            if ( v18 > -1745778952 )
                            {
                              if ( v18 == -1745778951 )
                              {
                                v21 = v64 < 37;
                                goto LABEL_685;
                              }
                              if ( v18 == -1738845390 )
                                goto LABEL_265;
                              quoting_style = v101;
                              v345 = v313;
                              v346 = v312;
                              v341 = v98;
                              v340 = s2;
                              v28 = n;
                              v339 = n;
                              LOBYTE(v28) = v119;
                              v338 = v28;
                              v344 = v204;
                              v29 = v59;
                              v131 = v59;
                              LOBYTE(v29) = v52;
                              v337 = v29;
                              LOBYTE(v29) = v53;
                              v342 = v29;
                              v130 = v60;
                              v343 = v98;
                              v18 = 1164683556;
                              goto LABEL_416;
                            }
                            if ( v18 != -1790792358 )
                            {
                              if ( v18 == -1767869532 )
                              {
                                v26 = v230 < v229;
                                v18 = 1676459103;
                                v19 = 4225863593LL;
                                goto LABEL_878;
                              }
                              buffer[v303] = 39;
                              v18 = 1604780808;
                              goto LABEL_416;
                            }
                            v18 = -2145419735;
                            v210 = 16;
                          }
                        }
                        if ( v18 > -2000191141 )
                          break;
                        if ( v18 > -2080895888 )
                        {
                          if ( v18 <= -2050222031 )
                          {
                            if ( v18 != -2080895887 )
                            {
                              v21 = v64 < 97;
                              goto LABEL_685;
                            }
                            v18 = 362750763;
                            v19 = v66;
                            v283 = v66;
                            v44 = 0LL;
LABEL_732:
                            v272 = v44;
                            if ( v18 > -29869521 )
                              goto LABEL_416;
                          }
                          else
                          {
                            if ( v18 == -2050222030 )
                            {
                              v285 = v315 + 1;
                              v18 = 1365876669;
                              goto LABEL_416;
                            }
                            if ( v18 != -2040947112 )
                            {
                              v18 = -1767869532;
                              if ( (v97 & 1) != 0 )
                                v18 = 588386720;
                              goto LABEL_180;
                            }
                            buffer[v228] = 39;
                            v18 = -1313313558;
                          }
                        }
                        else if ( v18 <= -2110253811 )
                        {
                          if ( v18 == -2145419735 )
                          {
                            v18 = 1450067637;
                            if ( !v210 )
                              v18 = -1837765118;
                            v19 = v227;
                            v226 = v227;
                            v186 = v120;
                            v187 = v210;
                            if ( v18 > -29869521 )
                              goto LABEL_416;
                          }
                          else
                          {
                            v18 = v331;
                          }
                        }
                        else
                        {
                          if ( v18 == -2110253810 )
                          {
                            v18 = -1084527438;
                            v35 = 1LL;
                            goto LABEL_738;
                          }
                          if ( v18 != -2107586658 )
                          {
                            v20 = v64 < 40;
                            v18 = 1618116936;
                            v19 = 3028455431LL;
                            goto LABEL_852;
                          }
                          v18 = -566300591;
                          v65 = 98;
                        }
                      }
                      if ( v18 <= -1970959329 )
                        break;
                      if ( v18 <= -1950830231 )
                      {
                        if ( v18 != -1970959328 )
                        {
                          v24 = (v59 & 1) == 0;
                          v18 = 491752323;
                          v19 = 837661570LL;
                          goto LABEL_866;
                        }
                        buffer[v300] = 39;
                        v18 = 1604722540;
                        goto LABEL_416;
                      }
                      if ( v18 == -1950830230 )
                      {
                        v39 = v155 - 60;
LABEL_831:
                        v26 = v39 < 3;
                        v18 = -1738845390;
                        v19 = 1377139207LL;
                        goto LABEL_878;
                      }
                      if ( v18 == -1945450743 )
                      {
                        v59 = v217;
                        v119 = v67;
                        n = v216;
                        s2 = (unsigned __int8 *)v215;
                        v312 = (char *)v220;
                        v313 = (char *)v221;
                        v101 = v190;
                        v280 = v370;
                        v279 = v369;
                        v105 = v161;
                        v104 = v160;
                        v103 = v159;
                        v18 = 317543071;
                        v276 = v258;
                        v269 = v214;
                        v270 = 0LL;
                        goto LABEL_416;
                      }
                      buffer[v205] = 48;
                      v18 = -752783169;
                    }
                    if ( v18 <= -1982270911 )
                    {
                      if ( v18 != -2000191140 )
                      {
                        v302 = v192 + 1;
                        v26 = v192 + 1 < v66;
                        v18 = 1230842932;
                        v19 = 3308819665LL;
                        goto LABEL_878;
                      }
                      buffer[v327] = 92;
                      v18 = -18752476;
                    }
                    else
                    {
                      if ( v18 == -1982270910 )
                      {
                        v18 = -1564337962;
                        if ( (v74 & 1) != 0 )
                          v18 = -1126239100;
                        continue;
                      }
                      if ( v18 != -1981246332 )
                      {
                        v22 = v64 == 126;
                        v18 = -1408572957;
                        v19 = 4090521078LL;
                        goto LABEL_826;
                      }
                      buffer[v192] = 92;
                      v18 = 1876277711;
                    }
                    break;
                  }
                }
              }
              else if ( v18 <= 1545256969 )
              {
                if ( v18 <= 1504572139 )
                {
                  if ( v18 == 1495336207 )
                  {
                    v18 = 1227162352;
                    v110 = 1;
                  }
                  else
                  {
                    v368 = v328 + 1;
                    v18 = 897810427;
                    v19 = 2127627676LL;
                    if ( (v173 & 1) != 0 )
                      v18 = 2127627676;
                    LOBYTE(v19) = v60;
                    v213 = v19;
                  }
                }
                else if ( v18 == 1504572140 )
                {
                  v274 = v316 + 1;
                  v18 = 302060197;
                }
                else
                {
                  if ( v18 == 1518367049 )
                  {
                    v18 = 2100599792;
                    if ( (v59 & 1) != 0 )
                      v18 = -569556752;
                    goto LABEL_765;
                  }
                  v58 = v54;
                  v154 = v76;
                  v9 = v77;
                  v153 = v98;
                  v152 = v99;
                  v11 = v52;
                  v56 = v53;
                  v57 = v55;
                  v10 = 0;
                  v17 = v66;
                  v12 = 0;
                  v18 = v332;
                }
              }
              else if ( v18 > 1604722539 )
              {
                if ( v18 != 1604722540 )
                {
                  if ( v18 == 1604780808 )
                  {
                    v247 = v303 + 1;
                    v18 = -1126239100;
                    v84 = 1;
                    goto LABEL_9;
                  }
                  v20 = v64 < 94;
                  v18 = -1075232842;
                  v19 = 690749606LL;
                  goto LABEL_852;
                }
                v9 = v300 + 1;
                v58 = v54;
                v154 = v76;
                v153 = v371;
                v152 = v99;
                v57 = v55;
                v18 = 2100599792;
                v10 = 1;
                v12 = 0;
                v17 = v262;
                v56 = 1;
                v11 = 0;
              }
              else
              {
                if ( v18 == 1545256970 )
                {
                  v18 = -1837963395;
                  v278 = v354;
                  v268 = 0LL;
                  goto LABEL_9;
                }
                if ( v18 == 1555002096 )
                {
                  v22 = v157 == 96;
                  goto LABEL_683;
                }
                v19 = v305;
                buffer[v305] = (v73 >> 3) & 7 | 0x30;
                v18 = 1810979988;
              }
            }
            if ( v18 <= 1802476843 )
              break;
            if ( v18 <= 1955349808 )
            {
              if ( v18 > 1877887255 )
              {
                if ( v18 <= 1909052135 )
                {
                  if ( v18 != 1877887256 )
                  {
                    v19 = v304;
                    buffer[v304] = (v73 >> 6) | 0x30;
                    v18 = -1827018639;
                    goto LABEL_9;
                  }
                  v18 = 1069859287;
                }
                else
                {
                  if ( v18 == 1909052136 )
                  {
                    v378 = v288;
                    v379 = v290;
                    v18 = 1146571443;
                    if ( v101 == shell_always_quoting_style )
                      v18 = -1905059209;
                    goto LABEL_797;
                  }
                  if ( v18 == 1916265071 )
                  {
                    v20 = v100 < escape_quoting_style;
                    v18 = 1733346553;
                    v19 = 1664063251LL;
                    goto LABEL_852;
                  }
                  buffer[v77] = 39;
                  v18 = 1174424815;
                }
              }
              else
              {
                if ( v18 <= 1856290642 )
                {
                  if ( v18 != 1802476844 )
                  {
                    v252 = v305 + 1;
                    v85 = v73 & 7 | 0x30;
                    v83 = v165;
                    v18 = -166689844;
                    v80 = 1;
                    v195 = v94;
                    goto LABEL_9;
                  }
                  v121 = v207;
                  v94 = v106;
                  v73 = v112;
                  v74 = v109;
                  v192 = v286;
                  v359 = v284;
                  v24 = v72 == 0;
                  v18 = -555257750;
                  v19 = 3033045454LL;
                  goto LABEL_866;
                }
                if ( v18 != 1856290643 )
                {
                  if ( v18 != 1857313100 )
                  {
                    v252 = v192 + 1;
                    v83 = v74;
                    v85 = v73;
                    v18 = -166689844;
                    v195 = 0;
                    goto LABEL_502;
                  }
                  v30 = (v59 & 1) == 0;
                  v18 = 2100599792;
                  v19 = 1729933538LL;
                  goto LABEL_741;
                }
                v142 = v81;
                v162 = v78;
                v18 = 482793353;
                v19 = 3210439858LL;
                if ( (v81 & 1) != 0 )
                  v18 = -1084527438;
                v35 = 0LL;
LABEL_738:
                v266 = v35;
                if ( v18 <= -29869521 )
                  goto LABEL_9;
              }
            }
            else
            {
              if ( v18 <= 2048997858 )
              {
                if ( v18 <= 1978893347 )
                {
                  if ( v18 == 1955349809 )
                  {
                    v20 = v100 < c_maybe_quoting_style;
                    v18 = 1916265071;
                    v19 = 744792072LL;
                  }
                  else
                  {
                    v20 = v157 < 94;
                    v18 = -1236696459;
                    v19 = 371213900LL;
                  }
                  goto LABEL_852;
                }
                if ( v18 == 1978893348 )
                {
                  buffer[v238] = 39;
                  v18 = -1393066116;
                  goto LABEL_9;
                }
                if ( v18 == 1984308195 )
                {
                  v20 = v64 < 9;
                  v18 = 500297852;
                  v19 = 1761971031LL;
                  goto LABEL_852;
                }
                v348 = v76 + 1;
                v18 = -1883327000;
                v19 = 3794055905LL;
                if ( v76 + 1 < v99 )
                  v18 = -500911391;
                goto LABEL_553;
              }
              if ( v18 > 2104662335 )
              {
                if ( v18 == 2104662336 )
                {
                  v185 = v76;
                  v184 = v77;
                  v183 = v98;
                  v182 = v99;
                  v63 = v52;
                  v62 = v53;
                  v61 = v60;
                  v18 = -196187907;
                  v128 = 15;
                  goto LABEL_8;
                }
                if ( v18 != 2109114056 )
                {
                  v184 = v368;
                  v185 = v374;
                  v183 = v373;
                  v182 = v372;
                  v63 = v177;
                  v62 = v176;
                  v18 = -196187907;
                  v128 = 0;
                  v181 = v263;
                  v19 = v213;
                  v61 = v213;
                  goto LABEL_9;
                }
                v18 = -695884675;
                v19 = 4001956501LL;
                if ( (v52 & 1) != 0 )
                  v18 = -293010795;
                goto LABEL_819;
              }
              if ( v18 == 2048997859 )
              {
                v20 = v203 < 16;
                v18 = -65338432;
                v19 = 4166548258LL;
                goto LABEL_852;
              }
              if ( v18 != 2080564593 )
              {
                v322 = v17;
                v124 = v10;
                v168 = v12;
                v169 = v57;
                v96 = v58;
                v125 = v56;
                v126 = v11;
                v323 = v152;
                v324 = v153;
                v325 = v9;
                v326 = v154;
                v24 = v136 == 0;
                v18 = 1050052677;
                v19 = 2163358144LL;
                goto LABEL_866;
              }
              v118 = v108;
              v18 = -771516138;
              v19 = 1856290643LL;
              if ( (v108 & 1) != 0 )
                v18 = 1856290643;
              v81 = v108;
              v78 = v102;
              if ( v18 <= -29869521 )
                goto LABEL_9;
            }
          }
          if ( v18 > 1716048649 )
            break;
          if ( v18 > 1685934151 )
          {
            if ( v18 > 1693825597 )
            {
              if ( v18 == 1693825598 )
              {
                v24 = !v117;
                v18 = 376238591;
                v19 = 855426498LL;
                goto LABEL_866;
              }
              if ( v18 != 1696166023 )
              {
                v26 = v259 < v258;
                v18 = 731462963;
                v19 = 1332408599LL;
                goto LABEL_878;
              }
              v20 = v64 < 12;
              v18 = -1138719810;
              v19 = 2642623239LL;
              goto LABEL_852;
            }
            if ( v18 != 1685934152 )
              goto LABEL_657;
            v24 = v72 == 0;
            v18 = -831679115;
            v19 = 3705706045LL;
            goto LABEL_866;
          }
          if ( v18 > 1664721439 )
          {
            if ( v18 == 1664721440 )
            {
              v20 = v64 < 10;
              v18 = 186772920;
              v19 = 1772849400LL;
              goto LABEL_852;
            }
            if ( v18 == 1671992023 )
            {
              v22 = v101 == shell_always_quoting_style;
              v18 = -1465383208;
              v19 = 1857313100LL;
              goto LABEL_826;
            }
            v308 = v230 + 1;
            v26 = v230 + 1 < v229;
            v18 = 633176724;
            v19 = 3664397085LL;
            goto LABEL_878;
          }
          if ( v18 == 1636502604 )
          {
            v39 = v155 - 39;
            goto LABEL_831;
          }
          v18 = 162359233;
          v206 = 5;
          v107 = 1;
        }
        if ( v18 > 1733690636 )
          break;
        if ( v18 > 1727611739 )
        {
          if ( v18 != 1727611740 )
          {
            if ( v18 != 1729933538 )
            {
              v20 = v100 < locale_quoting_style;
              v18 = 1417194198;
              v19 = 773810350LL;
              goto LABEL_852;
            }
LABEL_657:
            v185 = v76;
            v184 = v77;
            v183 = v98;
            v46 = v99;
LABEL_658:
            v182 = v46;
            v63 = v52;
            v62 = v53;
            v61 = v60;
            v18 = -196187907;
LABEL_659:
            v128 = 16;
LABEL_8:
            v181 = v66;
            goto LABEL_9;
          }
          v18 = 1450067637;
          v187 = 52;
          v19 = v227;
          goto LABEL_759;
        }
        if ( v18 == 1716048650 )
        {
          v287 = v192;
          v116 = v74;
          v115 = v73;
          v114 = v94;
          v18 = 1013601919;
          v212 = 16;
          v49 = v121;
          goto LABEL_843;
        }
        v357 = v273;
        v358 = v281;
        v117 = v209;
        v138 = v209;
        v18 = 862817542;
        v19 = 376238591LL;
        if ( v273 > 1 )
          v18 = 376238591;
      }
      if ( v18 <= 1761971030 )
        break;
      if ( v18 == 1761971031 )
      {
        v20 = v64 < 7;
        v18 = -1654611435;
        v19 = 3865030456LL;
        goto LABEL_852;
      }
      if ( v18 != 1772849400 )
      {
        v329 = v257;
        v26 = v257 < v66;
        v18 = -207910205;
        v19 = 122451869LL;
        goto LABEL_878;
      }
      v18 = 1107542361;
      v68 = 116;
    }
    if ( v18 != 1733690637 )
      break;
    buffer[v314] = 92;
    v18 = 68555837;
  }
  if ( v18 == 1741973679 )
  {
    v24 = (v59 & 1) == 0;
    v18 = 1438045829;
    v19 = 514604009LL;
    goto LABEL_866;
  }
  return v232;
}

char* __fastcall quotearg_alloc(const char *arg, size_t argsize, const quoting_options *o)
{
  return quotearg_alloc_mem(arg, argsize, 0LL, o);
}

char* __fastcall quotearg_alloc_mem(const char *arg, size_t argsize, size_t *size, const quoting_options *o)
{
  const quoting_options *v5; // r13
  int v6; // r12d
  int v7; // ecx
  int v9; // [rsp+4h] [rbp-54h]
  int *v10; // [rsp+8h] [rbp-50h]
  size_t v11; // [rsp+10h] [rbp-48h]
  char *buffer; // [rsp+18h] [rbp-40h]

  v5 = &default_quoting_options;
  if ( o )
    v5 = o;
  v10 = __errno_location();
  v9 = *v10;
  v6 = v5->flags | (size == 0LL);
  v11 = quotearg_buffer_restyled(
          0LL,
          0LL,
          arg,
          argsize,
          v5->style,
          v6,
          v5->quote_these_too,
          v5->left_quote,
          v5->right_quote);
  buffer = (char *)xmalloc(v11 + 1);
  quotearg_buffer_restyled(
    buffer,
    v11 + 1,
    arg,
    argsize,
    v5->style,
    v6,
    v5->quote_these_too,
    v5->left_quote,
    v5->right_quote);
  v7 = -22459438;
  while ( v7 == -22459438 )
  {
    *v10 = v9;
    v7 = 321116277;
    if ( size )
      v7 = -632666084;
    if ( v7 == -632666084 )
    {
      *size = v11;
      v7 = 321116277;
    }
  }
  return buffer;
}

void __cdecl quotearg_free()
{
  int v0; // ebp
  int v1; // eax
  int v2; // [rsp+4h] [rbp-44h]
  slotvec *ptr; // [rsp+8h] [rbp-40h]
  char *val; // [rsp+10h] [rbp-38h]

  ptr = slotvec_0;
  v0 = 1;
LABEL_2:
  v1 = 515907690;
  do
  {
LABEL_9:
    while ( v1 > 1770306615 )
    {
      if ( v1 != 1770306616 )
      {
        free(ptr[v2].val);
        v0 = v2 + 1;
        goto LABEL_2;
      }
      free(val);
      slotvec0.size = 256LL;
      slotvec0.val = slot0;
      v1 = 1229240845;
    }
    if ( v1 != 515907690 )
    {
      v1 = -2103629686;
      if ( ptr != &slotvec0 )
        v1 = -364861768;
      goto LABEL_4;
    }
    v2 = v0;
    v1 = -1106288960;
    if ( v0 < nslots )
      v1 = 1838682228;
  }
  while ( v1 > 515907689 );
  while ( 1 )
  {
LABEL_4:
    if ( v1 == -1106288960 )
    {
      val = ptr->val;
      v1 = 1229240845;
      if ( val != slot0 )
        v1 = 1770306616;
      goto LABEL_9;
    }
    if ( v1 != -364861768 )
      break;
    free(ptr);
    slotvec_0 = &slotvec0;
    v1 = -2103629686;
  }
  nslots = 1;
}

char* __fastcall quotearg_n(int n, const char *arg)
{
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &default_quoting_options);
}

char* __fastcall quotearg_n_options(int n, const char *arg, size_t argsize, const quoting_options *options)
{
  slotvec *v4; // rbp
  char *v5; // r15
  signed int v8; // r14d
  int v9; // ecx
  int v10; // eax
  bool v11; // zf
  int v12; // ecx
  slotvec *v13; // rdi
  unsigned __int64 size; // r15
  bool v16; // [rsp+7h] [rbp-E1h]
  int v17; // [rsp+8h] [rbp-E0h]
  int v18; // [rsp+Ch] [rbp-DCh]
  char *ptr; // [rsp+10h] [rbp-D8h]
  slotvec *p; // [rsp+18h] [rbp-D0h]
  slotvec *v21; // [rsp+20h] [rbp-C8h]
  size_t buffersize; // [rsp+28h] [rbp-C0h]
  int v23; // [rsp+38h] [rbp-B0h]
  int v24; // [rsp+3Ch] [rbp-ACh]
  int *v26; // [rsp+50h] [rbp-98h]
  slotvec *v27; // [rsp+58h] [rbp-90h]
  slotvec *v28; // [rsp+60h] [rbp-88h]
  char **p_val; // [rsp+68h] [rbp-80h]
  const quoting_options *v30; // [rsp+70h] [rbp-78h]
  const unsigned int *quote_these_too; // [rsp+78h] [rbp-70h]
  const char **p_left_quote; // [rsp+80h] [rbp-68h]
  const char **p_right_quote; // [rsp+88h] [rbp-60h]
  size_t v34; // [rsp+90h] [rbp-58h]
  __int64 v35; // [rsp+98h] [rbp-50h]

  v26 = __errno_location();
  v24 = *v26;
  p = slotvec_0;
  v8 = ((n >> 31) & 0x948ACADB) + 831430614;
  v9 = -448998089;
  if ( n == 0x7FFFFFFF )
    v9 = -757749190;
  v23 = v9;
  v10 = 1469931219;
  v35 = n;
  while ( 1 )
  {
LABEL_6:
    while ( v10 > 1331044672 )
    {
      if ( v10 == 1331044673 )
      {
        free(ptr);
        v10 = -215107569;
        goto LABEL_24;
      }
      if ( v10 == 1630932779 )
      {
        buffersize = v34 + 1;
        v28->size = v34 + 1;
        v11 = ptr == slot0;
        v10 = -215107569;
        v12 = 1331044673;
        goto LABEL_21;
      }
      v10 = v8;
      if ( v8 <= -51344940 )
      {
        while ( 1 )
        {
LABEL_24:
          while ( v10 <= -448998090 )
          {
            if ( v10 > -757749191 )
            {
              if ( v10 != -587749328 )
                xalloc_die();
              memset(&v21[nslots], 0, 16 * (v17 - (__int64)nslots));
              nslots = v17;
              v10 = -408492254;
              v4 = v21;
            }
            else
            {
              if ( v10 != -1654232949 )
                abort();
              *v27 = slotvec0;
              v10 = -587749328;
            }
          }
          if ( v10 != -448998089 )
            break;
          v13 = 0LL;
          if ( !v16 )
            v13 = p;
          v17 = n + 1;
          v27 = (slotvec *)xrealloc(v13, 16LL * (n + 1));
          v21 = v27;
          slotvec_0 = v27;
          v11 = !v16;
          v10 = -587749328;
          v12 = -1654232949;
LABEL_21:
          if ( !v11 )
            v10 = v12;
          if ( v10 > -51344940 )
            goto LABEL_6;
        }
        if ( v10 != -408492254 )
        {
          if ( v10 == -215107569 )
          {
            v5 = (char *)xmalloc(buffersize);
            *p_val = v5;
            quotearg_buffer_restyled(
              v5,
              buffersize,
              arg,
              argsize,
              v30->style,
              v18,
              quote_these_too,
              *p_left_quote,
              *p_right_quote);
            v10 = -51344939;
          }
          goto LABEL_5;
        }
        v28 = &v4[v35];
        size = v4[n].size;
        p_val = &v4[v35].val;
        ptr = *p_val;
        v18 = options->flags | 1;
        v30 = options;
        quote_these_too = options->quote_these_too;
        p_left_quote = &options->left_quote;
        p_right_quote = &options->right_quote;
        v34 = quotearg_buffer_restyled(
                *p_val,
                size,
                arg,
                argsize,
                options->style,
                v18,
                options->quote_these_too,
                options->left_quote,
                options->right_quote);
        v10 = -51344939;
        if ( size <= v34 )
          v10 = 1630932779;
        v5 = ptr;
      }
    }
    if ( v10 == -51344939 )
      break;
    if ( v10 == 186691826 )
    {
      v16 = p == &slotvec0;
      v10 = v23;
      goto LABEL_24;
    }
    if ( v10 == 831430614 )
    {
      v10 = -408492254;
      if ( nslots <= n )
        v10 = 186691826;
      v4 = p;
      if ( v10 <= -51344940 )
        goto LABEL_24;
    }
    else
    {
LABEL_5:
      if ( v10 <= -51344940 )
        goto LABEL_24;
    }
  }
  *v26 = v24;
  return v5;
}

char* __fastcall quotearg_n_mem(int n, const char *arg, size_t argsize)
{
  return quotearg_n_options(n, arg, argsize, &default_quoting_options);
}

char* __fastcall quotearg(const char *arg)
{
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &default_quoting_options);
}

char* __fastcall quotearg_mem(const char *arg, size_t argsize)
{
  return quotearg_n_options(0, arg, argsize, &default_quoting_options);
}

char* __fastcall quotearg_n_style(int n, enum_quoting_style s, const char *arg)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  quoting_options options; // [rsp+8h] [rbp-70h] BYREF
  __int128 v9; // [rsp+44h] [rbp-34h]
  __int128 v10; // [rsp+54h] [rbp-24h]
  __int128 v11; // [rsp+64h] [rbp-14h]
  int v12; // [rsp+74h] [rbp-4h]

  v11 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v12 = 0;
  v4 = 381662730;
  if ( s == custom_quoting_style )
    v4 = -6574024;
  v5 = 1233516520;
  while ( 1 )
  {
    v6 = v5;
    if ( v5 == 381662730 )
      break;
    v5 = v4;
    if ( v6 != 1233516520 )
    {
      if ( v6 != -6574024 )
      {
        while ( 1 )
          ;
      }
      abort();
    }
  }
  options.style = s;
  HIDWORD(options.right_quote) = v12;
  *(_OWORD *)&options.quote_these_too[7] = v11;
  *(_OWORD *)&options.quote_these_too[3] = v10;
  *(_OWORD *)&options.flags = v9;
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &options);
}

char* __fastcall quotearg_n_style_mem(int n, enum_quoting_style s, const char *arg, size_t argsize)
{
  int v4; // r8d
  int v5; // r9d
  int v6; // eax
  quoting_options options; // [rsp+8h] [rbp-70h] BYREF
  __int128 v9; // [rsp+44h] [rbp-34h]
  __int128 v10; // [rsp+54h] [rbp-24h]
  __int128 v11; // [rsp+64h] [rbp-14h]
  int v12; // [rsp+74h] [rbp-4h]

  v11 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v12 = 0;
  v4 = 381662730;
  if ( s == custom_quoting_style )
    v4 = -6574024;
  v5 = 1233516520;
  while ( 1 )
  {
    v6 = v5;
    if ( v5 == 381662730 )
      break;
    v5 = v4;
    if ( v6 != 1233516520 )
    {
      if ( v6 != -6574024 )
      {
        while ( 1 )
          ;
      }
      abort();
    }
  }
  options.style = s;
  HIDWORD(options.right_quote) = v12;
  *(_OWORD *)&options.quote_these_too[7] = v11;
  *(_OWORD *)&options.quote_these_too[3] = v10;
  *(_OWORD *)&options.flags = v9;
  return quotearg_n_options(n, arg, argsize, &options);
}

char* __fastcall quotearg_style(enum_quoting_style s, const char *arg)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  quoting_options options; // [rsp+8h] [rbp-70h] BYREF
  __int128 v7; // [rsp+44h] [rbp-34h]
  __int128 v8; // [rsp+54h] [rbp-24h]
  __int128 v9; // [rsp+64h] [rbp-14h]
  int v10; // [rsp+74h] [rbp-4h]

  v9 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  v10 = 0;
  v2 = 381662730;
  if ( s == custom_quoting_style )
    v2 = -6574024;
  v3 = 1233516520;
  while ( 1 )
  {
    v4 = v3;
    if ( v3 == 381662730 )
      break;
    v3 = v2;
    if ( v4 != 1233516520 )
    {
      if ( v4 != -6574024 )
      {
        while ( 1 )
          ;
      }
      abort();
    }
  }
  options.style = s;
  HIDWORD(options.right_quote) = v10;
  *(_OWORD *)&options.quote_these_too[7] = v9;
  *(_OWORD *)&options.quote_these_too[3] = v8;
  *(_OWORD *)&options.flags = v7;
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &options);
}

char* __fastcall quotearg_style_mem(enum_quoting_style s, const char *arg, size_t argsize)
{
  int v3; // r8d
  int v4; // eax
  int v5; // ecx
  quoting_options options; // [rsp+8h] [rbp-70h] BYREF
  __int128 v8; // [rsp+44h] [rbp-34h]
  __int128 v9; // [rsp+54h] [rbp-24h]
  __int128 v10; // [rsp+64h] [rbp-14h]
  int v11; // [rsp+74h] [rbp-4h]

  v10 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  v11 = 0;
  v3 = 381662730;
  if ( s == custom_quoting_style )
    v3 = -6574024;
  v4 = 1233516520;
  while ( 1 )
  {
    v5 = v4;
    if ( v4 == 381662730 )
      break;
    v4 = v3;
    if ( v5 != 1233516520 )
    {
      if ( v5 != -6574024 )
      {
        while ( 1 )
          ;
      }
      abort();
    }
  }
  options.style = s;
  HIDWORD(options.right_quote) = v11;
  *(_OWORD *)&options.quote_these_too[7] = v10;
  *(_OWORD *)&options.quote_these_too[3] = v9;
  *(_OWORD *)&options.flags = v8;
  return quotearg_n_options(0, arg, argsize, &options);
}

char* __fastcall quotearg_char_mem(const char *arg, size_t argsize, char ch_0)
{
  quoting_options v4; // [rsp+0h] [rbp-38h] BYREF

  v4 = default_quoting_options;
  v4.quote_these_too[(unsigned __int8)ch_0 >> 5] ^= (((v4.quote_these_too[(unsigned __int8)ch_0 >> 5] >> ch_0) & 1) == 0) << ch_0;
  return quotearg_n_options(0, arg, argsize, &v4);
}

char* __fastcall quotearg_char(const char *arg, char ch_0)
{
  quoting_options v3; // [rsp+0h] [rbp-38h] BYREF

  v3 = default_quoting_options;
  v3.quote_these_too[(unsigned __int8)ch_0 >> 5] ^= (((v3.quote_these_too[(unsigned __int8)ch_0 >> 5] >> ch_0) & 1) == 0) << ch_0;
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &v3);
}

char* __fastcall quotearg_colon(const char *arg)
{
  quoting_options v2; // [rsp+0h] [rbp-38h] BYREF

  v2 = default_quoting_options;
  HIBYTE(v2.quote_these_too[1]) = HIBYTE(default_quoting_options.quote_these_too[1]) | 4;
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &v2);
}

char* __fastcall quotearg_colon_mem(const char *arg, size_t argsize)
{
  quoting_options v3; // [rsp+0h] [rbp-38h] BYREF

  v3 = default_quoting_options;
  HIBYTE(v3.quote_these_too[1]) = HIBYTE(default_quoting_options.quote_these_too[1]) | 4;
  return quotearg_n_options(0, arg, argsize, &v3);
}

char* __fastcall quotearg_n_style_colon(int n, enum_quoting_style s, const char *arg)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  __int128 v8; // [rsp+10h] [rbp-78h]
  quoting_options options; // [rsp+50h] [rbp-38h] BYREF

  memset(&options, 0, 52);
  v4 = 381662730;
  if ( s == custom_quoting_style )
    v4 = -6574024;
  v5 = 1233516520;
  while ( 1 )
  {
    v6 = v5;
    if ( v5 == 381662730 )
      break;
    v5 = v4;
    if ( v6 != 1233516520 )
    {
      if ( v6 != -6574024 )
      {
        while ( 1 )
          ;
      }
      abort();
    }
  }
  v8 = *(_OWORD *)&options.style;
  options.style = s;
  HIDWORD(options.right_quote) = options.right_quote;
  *(_OWORD *)&options.quote_these_too[7] = *(_OWORD *)&options.quote_these_too[6];
  *(_OWORD *)&options.quote_these_too[3] = *(_OWORD *)&options.quote_these_too[2];
  *(_OWORD *)&options.flags = v8;
  HIBYTE(options.quote_these_too[1]) = BYTE11(v8) | 4;
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &options);
}

char* __fastcall quotearg_n_custom(int n, const char *left_quote, const char *right_quote, const char *arg)
{
  quoting_options *p_options; // rbx
  int v5; // r9d
  int v6; // r11d
  int v7; // eax
  quoting_options *v8; // r10
  quoting_options *v10; // [rsp+8h] [rbp-50h]
  quoting_options options; // [rsp+10h] [rbp-48h] BYREF

  options = default_quoting_options;
  v5 = 2056481274;
  if ( !right_quote )
    v5 = 86926416;
  if ( !left_quote )
    v5 = 86926416;
  v6 = -1617911072;
  do
  {
    v7 = v6;
    v8 = p_options;
    v6 = -113258152;
    p_options = &options;
  }
  while ( v7 == -1617911072 );
  while ( v7 <= 86926415 )
  {
    v10 = v8;
    v8->style = custom_quoting_style;
    v7 = v5;
  }
  if ( v7 != 2056481274 )
    abort();
  v10->left_quote = left_quote;
  v10->right_quote = right_quote;
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &options);
}

char* __fastcall quotearg_n_custom_mem(
        int n,
        const char *left_quote,
        const char *right_quote,
        const char *arg,
        size_t argsize)
{
  int v5; // r10d
  __int64 p_options; // rax
  int v7; // ebp
  int v8; // ebx
  _DWORD *v9; // r11
  _DWORD *v11; // [rsp+8h] [rbp-50h]
  quoting_options options; // [rsp+10h] [rbp-48h] BYREF

  options = default_quoting_options;
  v5 = 2056481274;
  p_options = 86926416LL;
  if ( !right_quote )
    v5 = 86926416;
  if ( !left_quote )
    v5 = 86926416;
  v7 = -1617911072;
  do
  {
    v8 = v7;
    v9 = (_DWORD *)p_options;
    v7 = -113258152;
    p_options = (__int64)&options;
  }
  while ( v8 == -1617911072 );
  while ( v8 <= 86926415 )
  {
    v11 = v9;
    *v9 = 10;
    v8 = v5;
  }
  if ( v8 != 2056481274 )
    abort();
  *((_QWORD *)v11 + 5) = left_quote;
  *((_QWORD *)v11 + 6) = right_quote;
  return quotearg_n_options(n, arg, argsize, &options);
}

char* __fastcall quotearg_custom(const char *left_quote, const char *right_quote, const char *arg)
{
  quoting_options *p_options; // rcx
  int v5; // r11d
  int v6; // edx
  int v7; // eax
  quoting_options *v8; // r10
  quoting_options *v10; // [rsp+8h] [rbp-40h]
  quoting_options options; // [rsp+10h] [rbp-38h] BYREF

  options = default_quoting_options;
  v5 = 2056481274;
  if ( !right_quote )
    v5 = 86926416;
  if ( !left_quote )
    v5 = 86926416;
  v6 = -1617911072;
  do
  {
    v7 = v6;
    v8 = p_options;
    v6 = -113258152;
    p_options = &options;
  }
  while ( v7 == -1617911072 );
  while ( v7 <= 86926415 )
  {
    v10 = v8;
    v8->style = custom_quoting_style;
    v7 = v5;
  }
  if ( v7 != 2056481274 )
    abort();
  v10->left_quote = left_quote;
  v10->right_quote = right_quote;
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &options);
}

char* __fastcall quotearg_custom_mem(const char *left_quote, const char *right_quote, const char *arg, size_t argsize)
{
  quoting_options *p_options; // rbx
  int v5; // r9d
  int v6; // r11d
  int v7; // eax
  quoting_options *v8; // r10
  quoting_options *v10; // [rsp+8h] [rbp-50h]
  quoting_options options; // [rsp+10h] [rbp-48h] BYREF

  options = default_quoting_options;
  v5 = 2056481274;
  if ( !right_quote )
    v5 = 86926416;
  if ( !left_quote )
    v5 = 86926416;
  v6 = -1617911072;
  do
  {
    v7 = v6;
    v8 = p_options;
    v6 = -113258152;
    p_options = &options;
  }
  while ( v7 == -1617911072 );
  while ( v7 <= 86926415 )
  {
    v10 = v8;
    v8->style = custom_quoting_style;
    v7 = v5;
  }
  if ( v7 != 2056481274 )
    abort();
  v10->left_quote = left_quote;
  v10->right_quote = right_quote;
  return quotearg_n_options(0, arg, argsize, &options);
}

const char* __fastcall quote_n_mem(int n, const char *arg, size_t argsize)
{
  return quotearg_n_options(n, arg, argsize, &quote_quoting_options);
}

const char* __fastcall quote_mem(const char *arg, size_t argsize)
{
  return quotearg_n_options(0, arg, argsize, &quote_quoting_options);
}

const char* __fastcall quote_n(int n, const char *arg)
{
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &quote_quoting_options);
}

const char* __fastcall quote(const char *arg)
{
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &quote_quoting_options);
}

const char* __fastcall gettext_quote(const char *msgid, enum_quoting_style s)
{
  const char *v2; // rbx
  const char *v3; // r15
  int i; // eax
  bool v5; // zf
  int v6; // ecx
  char v8; // [rsp-8h] [rbp-50h]
  char v9; // [rsp+0h] [rbp-48h]
  char *v10; // [rsp+8h] [rbp-40h]
  char *s1; // [rsp+10h] [rbp-38h]

  v2 = (const char *)(unsigned int)s;
  v10 = dcgettext(0LL, msgid, 5);
  v3 = "'";
  if ( s == clocale_quoting_style )
    v3 = "\"";
LABEL_14:
  for ( i = 2065516234; i <= 1408367346; i = 1408367347 )
  {
    if ( i == 732188971 )
    {
      v2 = (const char *)&unk_40E59A;
      if ( *msgid == 96 )
        v2 = (const char *)&unk_40E596;
    }
    else
    {
      v2 = (const char *)&unk_40E5AA;
      if ( *msgid == 96 )
        v2 = (const char *)&unk_40E5A6;
    }
  }
  if ( i == 2065516234 )
  {
    i = -87831194;
    if ( v10 != msgid )
      i = -59371615;
    while ( 1 )
    {
      if ( i > -87831195 )
      {
        if ( i != -87831194 )
        {
          i = 1408367347;
          v2 = v10;
          goto LABEL_14;
        }
        s1 = (char *)locale_charset();
        v5 = strcaseeq0(s1, "UTF-8", 85, 84, 70, 45, 56, 0, 0, v8, v9) == 0;
        i = -999354033;
        v6 = 732188971;
      }
      else
      {
        if ( i != -999354033 )
        {
          i = 1408367347;
          v2 = v3;
          goto LABEL_14;
        }
        v5 = strcaseeq0(s1, "GB18030", 71, 66, 49, 56, 48, 51, 48, v8, v9) == 0;
        i = -286153690;
        v6 = 865035993;
      }
      if ( !v5 )
        i = v6;
      if ( i > 732188970 )
        goto LABEL_14;
    }
  }
  return v2;
}

char __fastcall strcaseeq0(
        const char *s1,
        const char *s2,
        int s20,
        int s21,
        int s22,
        int s23,
        char s24,
        char s25,
        char s26)
{
  char result; // al
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  bool v13; // zf
  int v14; // ecx
  bool v15; // zf
  int v16; // ecx
  bool v17; // zf
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  bool v21; // zf
  int i; // ecx
  int v23; // ecx
  bool v24; // zf
  bool v25; // zf
  bool v26; // zf
  int v27; // [rsp+3Ch] [rbp-6Ch]
  int v28; // [rsp+40h] [rbp-68h]
  int v29; // [rsp+44h] [rbp-64h]
  int v30; // [rsp+48h] [rbp-60h]
  int v31; // [rsp+4Ch] [rbp-5Ch]
  int v32; // [rsp+50h] [rbp-58h]
  int v33; // [rsp+54h] [rbp-54h]

  result = s26;
  v10 = 1623894763;
  while ( 1 )
  {
LABEL_154:
    while ( v10 <= 1623894762 )
    {
      if ( v10 != 347008893 )
      {
        v26 = v27 == s20;
        goto LABEL_2;
      }
      v10 = -2029001742;
      if ( !s20 )
        v10 = 151386425;
LABEL_5:
      while ( v10 > -1324037705 )
      {
        if ( v10 != -1324037704 )
        {
          v10 = 1953024243;
          result = 1;
          goto LABEL_154;
        }
        v26 = (v27 & 0xFFFFFFDF) == s20;
LABEL_2:
        v10 = -1708489072;
        if ( v26 )
          v10 = 347008893;
        if ( v10 > 347008892 )
          goto LABEL_154;
      }
      if ( v10 != -2029001742 )
      {
        v10 = 1953024243;
        result = 0;
        goto LABEL_154;
      }
      result = s1[1];
      v11 = -1015229331;
LABEL_13:
      while ( 2 )
      {
        if ( v11 <= -679773734 )
        {
          if ( v11 != -1113298301 )
          {
            v28 = s1[1];
            v11 = -231924514;
            if ( (unsigned int)(s21 - 65) < 0x1A )
              v11 = 2033163413;
            break;
          }
          result = s1[2];
          v12 = -2107373875;
          while ( 1 )
          {
            while ( v12 <= -158131793 )
            {
              if ( v12 != -2107373875 )
              {
                v13 = (v29 & 0xFFFFFFDF) == s22;
                goto LABEL_21;
              }
              v29 = s1[2];
              v12 = 578549923;
              if ( (unsigned int)(s22 - 65) < 0x1A )
                v12 = -326189908;
              if ( v12 > -12551643 )
                goto LABEL_136;
            }
            if ( v12 == -158131792 )
              break;
            v12 = -158131792;
            if ( !s22 )
              v12 = -12551642;
            if ( v12 <= -12551643 )
              continue;
            do
            {
              while ( 1 )
              {
LABEL_136:
                while ( v12 > 700966735 )
                {
                  if ( v12 != 2123806112 )
                  {
                    v11 = 1917560152;
                    goto LABEL_146;
                  }
                  v12 = 700966736;
                  result = 0;
                }
                if ( v12 != -12551642 )
                  break;
                v12 = 700966736;
                result = 1;
              }
              v13 = v29 == s22;
LABEL_21:
              v12 = 2123806112;
              if ( v13 )
                v12 = -52809777;
            }
            while ( v12 > -12551643 );
          }
          result = s1[3];
          v14 = -1952654881;
LABEL_49:
          while ( v14 <= -1508696104 )
          {
            if ( v14 != -1952654881 )
            {
              v12 = 700966736;
              goto LABEL_136;
            }
            v30 = s1[3];
            v14 = 197407787;
            if ( (unsigned int)(s23 - 65) < 0x1A )
              v14 = -268632663;
            if ( v14 > 197407786 )
            {
LABEL_39:
              while ( v14 <= 1669713529 )
              {
                if ( v14 == 197407787 )
                {
                  v15 = v30 == s23;
                  goto LABEL_37;
                }
                v14 = -1508696103;
                if ( !s23 )
                  v14 = 1803397261;
                if ( v14 <= 197407786 )
                  goto LABEL_49;
              }
              if ( v14 == 1669713530 )
              {
                v14 = -1531326724;
                result = 0;
              }
              else
              {
                v14 = -1531326724;
                result = 1;
              }
            }
          }
          if ( v14 != -1508696103 )
          {
            v15 = (v30 & 0xFFFFFFDF) == s23;
LABEL_37:
            v14 = 1669713530;
            if ( v15 )
              v14 = 643486826;
            goto LABEL_39;
          }
          result = s1[4];
          v16 = -95936112;
          while ( 1 )
          {
LABEL_58:
            if ( v16 > -860283596 )
            {
              if ( v16 == -860283595 )
              {
                v17 = v31 == s24;
                goto LABEL_55;
              }
              v31 = s1[4];
              v16 = -860283595;
              if ( (unsigned int)(s24 - 65) < 0x1A )
                v16 = 1541565399;
              if ( v16 > 1350222282 )
              {
                while ( 1 )
                {
LABEL_71:
                  if ( v16 <= 1541565398 )
                  {
                    if ( v16 != 1536746546 )
                    {
                      v14 = -1531326724;
                      goto LABEL_49;
                    }
                    result = s1[5];
                    v18 = -922853799;
                    while ( 1 )
                    {
LABEL_123:
                      if ( v18 > -617178534 )
                      {
                        if ( v18 != -617178533 )
                        {
                          v16 = 1350222283;
                          goto LABEL_71;
                        }
                        v24 = (v32 & 0xFFFFFFDF) == s25;
                        goto LABEL_78;
                      }
                      if ( v18 == -1977963474 )
                        break;
                      v32 = s1[5];
                      v18 = -1977963474;
                      if ( (unsigned int)(s25 - 65) < 0x1A )
                        v18 = -617178533;
                    }
                    v24 = v32 == s25;
LABEL_78:
                    v19 = 1937670355;
                    if ( v24 )
                      v19 = 2090599814;
                    while ( v19 > 1937670354 )
                    {
                      if ( v19 == 1937670355 )
                      {
                        v18 = 264375765;
                        result = 0;
                        goto LABEL_123;
                      }
                      v19 = 863636089;
                      if ( !s25 )
                        v19 = 1040349902;
                    }
                    if ( v19 != 863636089 )
                    {
                      v18 = 264375765;
                      result = 1;
                      goto LABEL_123;
                    }
                    result = s1[6];
                    v20 = -2096728102;
                    while ( 1 )
                    {
                      if ( v20 <= -263933064 )
                      {
                        if ( v20 != -2096728102 )
                        {
                          v18 = 264375765;
                          goto LABEL_123;
                        }
                        v33 = s1[6];
                        v23 = 1690619555;
                        if ( (unsigned int)(s26 - 65) < 0x1A )
                          v23 = 1891001810;
                      }
                      else
                      {
                        if ( v20 == -263933063 )
                        {
                          v20 = -1541536751;
                          result = 0;
                          continue;
                        }
                        v23 = 205232294;
                        if ( !s26 )
                          v23 = 1632634764;
                      }
                      if ( v23 > 1690619554 )
                      {
                        if ( v23 == 1690619555 )
                          v21 = v33 == s26;
                        else
                          v21 = (v33 & 0xFFFFFFDF) == s26;
                        v20 = -263933063;
                        if ( v21 )
                          v20 = 180846405;
                      }
                      else if ( v23 == 205232294 )
                      {
                        result = s1[7];
                        i = 595967065;
LABEL_105:
                        while ( i <= 964106420 )
                        {
                          if ( i == 595967065 )
                          {
                            for ( i = -1594715933; ; i = -1985794902 )
                            {
                              while ( i > -1594715934 )
                              {
                                i = 791969688;
                                if ( !s1[7] )
                                  i = -2098022796;
                                if ( i > 595967064 )
                                  goto LABEL_105;
                              }
                              if ( i != -2098022796 )
                                break;
                            }
                            i = 2050358409;
                            result = 1;
                          }
                          else
                          {
                            i = 2050358409;
                            result = 0;
                          }
                        }
                        v20 = -1541536751;
                      }
                      else
                      {
                        v20 = -1541536751;
                        result = 1;
                      }
                    }
                  }
                  if ( v16 != 1541565399 )
                  {
                    v16 = 1350222283;
                    result = 0;
                    continue;
                  }
                  v17 = (v31 & 0xFFFFFFDF) == s24;
LABEL_55:
                  v16 = 1649253771;
                  if ( v17 )
                    v16 = -1850717023;
                  if ( v16 <= 1350222282 )
                    goto LABEL_58;
                }
              }
            }
            else
            {
              if ( v16 != -1850717023 )
              {
                v16 = 1350222283;
                result = 1;
                goto LABEL_71;
              }
              v16 = 1536746546;
              if ( !s24 )
                v16 = -1198786116;
              if ( v16 > 1350222282 )
                goto LABEL_71;
            }
          }
        }
        if ( v11 != -679773733 )
        {
          v11 = 1917560152;
          result = 0;
          break;
        }
        v11 = -1113298301;
        if ( !s21 )
          v11 = 1900663187;
        if ( v11 <= -231924515 )
          continue;
        break;
      }
LABEL_146:
      while ( v11 <= 1917560151 )
      {
        if ( v11 == -231924514 )
        {
          v25 = v28 == s21;
LABEL_11:
          v11 = -620174998;
          if ( v25 )
            v11 = -679773733;
          goto LABEL_13;
        }
        v11 = 1917560152;
        result = 1;
      }
      if ( v11 == 2033163413 )
      {
        v25 = (v28 & 0xFFFFFFDF) == s21;
        goto LABEL_11;
      }
      v10 = 1953024243;
    }
    if ( v10 != 1623894763 )
      return result;
    v27 = *s1;
    v10 = 903535753;
    if ( (unsigned int)(s20 - 65) < 0x1A )
      v10 = -1324037704;
    if ( v10 <= 347008892 )
      goto LABEL_5;
  }
}

void __fastcall version_etc_arn(
        FILE *stream,
        const char *command_name,
        const char *package,
        const char *version,
        const char *const *authors,
        size_t n_authors)
{
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // r14d
  int v14; // ebp
  int v15; // edx
  int v16; // r12d
  int v17; // edx
  int v18; // r15d
  int i; // eax
  char *v20; // rax
  int v21; // ecx
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax
  char *v25; // rax
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  int v33; // [rsp+0h] [rbp-68h]
  int v34; // [rsp+4h] [rbp-64h]
  int v35; // [rsp+8h] [rbp-60h]
  int v36; // [rsp+Ch] [rbp-5Ch]
  int v37; // [rsp+10h] [rbp-58h]
  int v38; // [rsp+14h] [rbp-54h]
  int v39; // [rsp+18h] [rbp-50h]
  int v40; // [rsp+1Ch] [rbp-4Ch]

  v7 = -467867048;
  if ( command_name )
    v7 = -2009185061;
  v38 = v7;
  v8 = 2049703688;
  if ( (__int64)n_authors < 5 )
    v8 = -89434635;
  v40 = v8;
  v9 = 1131407043;
  if ( (__int64)n_authors < 7 )
    v9 = -995581721;
  v35 = v9;
  v10 = 762245908;
  if ( (__int64)n_authors < 8 )
    v10 = 1197968456;
  v39 = v10;
  v11 = -1425298827;
  if ( (__int64)n_authors < 9 )
    v11 = 351187649;
  v34 = v11;
  v12 = -600826693;
  if ( n_authors != 9 )
    v12 = 502307442;
  v33 = v12;
  v13 = -183161184;
  if ( (__int64)n_authors < 6 )
    v13 = -1726240848;
  v14 = 673970117;
  if ( (__int64)n_authors < 2 )
    v14 = 1741372331;
  v15 = -21426828;
  if ( (__int64)n_authors < 3 )
    v15 = -752196204;
  v37 = v15;
  v16 = 488733551;
  if ( (__int64)n_authors < 4 )
    v16 = 1551796245;
  v17 = -1421515777;
  if ( (__int64)n_authors <= 0 )
    v17 = -1037732609;
  v36 = v17;
  v18 = 1502725003;
  if ( n_authors )
    v18 = 502307442;
  for ( i = -742234071; ; i = 1502725003 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v21 = i;
            if ( i > -89434636 )
              break;
            if ( i <= -1037732610 )
            {
              if ( i > -1421515778 )
              {
                if ( i == -1421515777 )
                {
                  v31 = dcgettext(0LL, "Written by %s.\n", 5);
                  __fprintf_chk(stream, 1LL, v31, *authors);
                  i = 1502725003;
                }
                else
                {
                  i = v40;
                  if ( v21 != -1224025027 )
                  {
                    v20 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5);
                    __fprintf_chk(stream, 1LL, v20, *authors);
                    i = 1502725003;
                  }
                }
              }
              else if ( i == -2009185061 )
              {
                __fprintf_chk(stream, 1LL, "%s (%s) %s\n", command_name);
                i = 1057905903;
              }
              else if ( i == -1726240848 )
              {
                v28 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
                __fprintf_chk(stream, 1LL, v28, *authors);
                i = 1502725003;
              }
              else
              {
                i = v33;
              }
            }
            else if ( i <= -742234072 )
            {
              i = v18;
              if ( v21 != -1037732609 )
              {
                i = v13;
                if ( v21 != -995581721 )
                {
                  v24 = dcgettext(0LL, "Written by %s and %s.\n", 5);
                  __fprintf_chk(stream, 1LL, v24, *authors);
                  i = 1502725003;
                }
              }
            }
            else if ( i > -467867049 )
            {
              if ( i == -467867048 )
              {
                __fprintf_chk(stream, 1LL, "%s %s\n", package);
                i = 1057905903;
              }
              else
              {
                v26 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
                __fprintf_chk(stream, 1LL, v26, *authors);
                i = 1502725003;
              }
            }
            else
            {
              i = v38;
              if ( v21 != -742234071 )
              {
                v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n", 5);
                __fprintf_chk(stream, 1LL, v22, *authors);
                i = 1502725003;
              }
            }
          }
          if ( i > 1057905902 )
            break;
          if ( i <= 488733550 )
          {
            i = v14;
            if ( v21 != -89434635 )
            {
              i = v16;
              if ( v21 != -21426828 )
              {
                i = v21;
                if ( v21 == 351187649 )
                {
                  v23 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
                  __fprintf_chk(stream, 1LL, v23, *authors);
                  i = 1502725003;
                }
              }
            }
          }
          else if ( i > 673970116 )
          {
            i = v37;
            if ( v21 != 673970117 )
              i = v34;
          }
          else if ( i == 488733551 )
          {
            v27 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
            __fprintf_chk(stream, 1LL, v27, *authors);
            i = 1502725003;
          }
          else
          {
            i = -1213019373;
          }
        }
        if ( i > 1502725002 )
          break;
        if ( i == 1057905903 )
        {
          v29 = dcgettext(0LL, "(C)", 5);
          __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v29);
          v30 = dcgettext(
                  0LL,
                  "\n"
                  "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
                  "This is free software: you are free to change and redistribute it.\n"
                  "There is NO WARRANTY, to the extent permitted by law.\n"
                  "\n",
                  5);
          fputs_unlocked(v30, stream);
          i = -1224025027;
        }
        else
        {
          i = v39;
          if ( v21 != 1131407043 )
          {
            v25 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
            __fprintf_chk(stream, 1LL, v25, *authors);
            i = 1502725003;
          }
        }
      }
      if ( i <= 1741372330 )
        break;
      i = v36;
      if ( v21 != 1741372331 )
        i = v35;
    }
    if ( i != 1551796245 )
      break;
    v32 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
    __fprintf_chk(stream, 1LL, v32, *authors);
  }
}

void __fastcall version_etc_ar(
        FILE *stream,
        const char *command_name,
        const char *package,
        const char *version,
        const char *const *authors)
{
  size_t i; // r10
  int v6; // eax

  for ( i = 0LL; ; ++i )
  {
    v6 = -248880862;
    if ( authors[i] )
      v6 = 52188554;
    if ( v6 == -248880862 )
      break;
  }
  version_etc_arn(stream, command_name, package, version, authors, i);
}

void __fastcall version_etc_va(
        FILE *stream,
        const char *command_name,
        const char *package,
        const char *version,
        __va_list_tag *authors)
{
  char **overflow_arg_area; // rbx
  int v6; // ebp
  unsigned __int64 v7; // r14
  char *v8; // rax
  signed int gp_offset; // [rsp+4h] [rbp-84h]
  size_t v10; // [rsp+8h] [rbp-80h]
  __va_list_tag *v11; // [rsp+18h] [rbp-70h]
  char *v12[13]; // [rsp+20h] [rbp-68h] BYREF

  v6 = 1372194116;
  v7 = 0LL;
  while ( 1 )
  {
    while ( v6 != 971039705 )
    {
      if ( v6 == 972000154 )
      {
        v8 = *overflow_arg_area;
        v12[v10] = *overflow_arg_area;
        v6 = -1673034700;
        if ( v8 )
          v6 = -1800732538;
        goto LABEL_17;
      }
      v10 = v7;
      v6 = -1673034700;
      if ( v7 < 0xA )
        v6 = 971039705;
      if ( v6 <= 971039704 )
        goto LABEL_17;
    }
    v11 = authors;
    gp_offset = authors->gp_offset;
    v6 = 249188311;
    if ( authors->gp_offset < 0x29 )
      v6 = -2133689798;
LABEL_17:
    if ( v6 > -1673034701 )
      break;
    if ( v6 == -2133689798 )
    {
      overflow_arg_area = (char **)((char *)authors->reg_save_area + gp_offset);
      v11->gp_offset = gp_offset + 8;
LABEL_5:
      v6 = 972000154;
    }
    else
    {
      v7 = v10 + 1;
      v6 = 1372194116;
    }
  }
  if ( v6 != -1673034700 )
  {
    overflow_arg_area = (char **)authors->overflow_arg_area;
    authors->overflow_arg_area = overflow_arg_area + 1;
    goto LABEL_5;
  }
  version_etc_arn(stream, command_name, package, version, (const char *const *)v12, v10);
}

void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...)
{
  char **overflow_arg_area; // rbx
  int v5; // ebp
  unsigned __int64 v6; // r14
  char *v7; // rax
  signed int gp_offset; // [rsp+4h] [rbp-154h]
  size_t n_authors; // [rsp+8h] [rbp-150h]
  __va_list_tag *v10; // [rsp+18h] [rbp-140h]
  va_list va; // [rsp+20h] [rbp-138h] BYREF
  char *v12[13]; // [rsp+F0h] [rbp-68h] BYREF

  va_start(va, version);
  v5 = 1372194116;
  v6 = 0LL;
  while ( 1 )
  {
    while ( v5 != 971039705 )
    {
      if ( v5 == 972000154 )
      {
        v7 = *overflow_arg_area;
        v12[n_authors] = *overflow_arg_area;
        v5 = -1673034700;
        if ( v7 )
          v5 = -1800732538;
        goto LABEL_17;
      }
      n_authors = v6;
      v5 = -1673034700;
      if ( v6 < 0xA )
        v5 = 971039705;
      if ( v5 <= 971039704 )
        goto LABEL_17;
    }
    v10 = va;
    gp_offset = va[0].gp_offset;
    v5 = 249188311;
    if ( va[0].gp_offset < 0x29 )
      v5 = -2133689798;
LABEL_17:
    if ( v5 > -1673034701 )
      break;
    if ( v5 == -2133689798 )
    {
      overflow_arg_area = (char **)((char *)va[0].reg_save_area + gp_offset);
      v10->gp_offset = gp_offset + 8;
LABEL_5:
      v5 = 972000154;
    }
    else
    {
      v6 = n_authors + 1;
      v5 = 1372194116;
    }
  }
  if ( v5 != -1673034700 )
  {
    overflow_arg_area = (char **)va[0].overflow_arg_area;
    va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
    goto LABEL_5;
  }
  version_etc_arn(stream, command_name, package, version, (const char *const *)v12, n_authors);
}

void __cdecl emit_bug_reporting_address()
{
  char *v0; // rax
  char *v1; // rax
  char *v2; // rdi

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, "GNU coreutils");
  v2 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  fputs_unlocked(v2, stdout);
}

void* __fastcall xnmalloc(size_t n, size_t s)
{
  int v2; // ecx
  int v3; // edx
  void *v5; // [rsp+10h] [rbp-18h]

  v2 = 1460498993;
  do
  {
    if ( v2 != 1460498993 )
      xalloc_die();
    v2 = 856706941;
    if ( 0x7FFFFFFFFFFFFFFFLL / s < n )
      v2 = -773279095;
  }
  while ( v2 != 856706941 );
  v5 = malloc(n * s);
  v3 = 1313031790;
  do
  {
    if ( v3 != 1313031790 )
      xalloc_die();
    v3 = -444091617;
    if ( n * s )
      v3 = -504387713;
    if ( v5 )
      v3 = -444091617;
  }
  while ( v3 != -444091617 );
  return v5;
}

void* __fastcall xmalloc(size_t n)
{
  int v1; // edx
  void *v3; // [rsp+8h] [rbp-10h]

  v3 = malloc(n);
  v1 = 1313031790;
  do
  {
    if ( v1 != 1313031790 )
      xalloc_die();
    v1 = -444091617;
    if ( n )
      v1 = -504387713;
    if ( v3 )
      v1 = -444091617;
  }
  while ( v1 != -444091617 );
  return v3;
}

void* __fastcall xnrealloc(void *p, size_t n, size_t s)
{
  void *v3; // r15
  int v4; // ecx
  size_t v5; // rbx
  int i; // eax
  bool v8; // [rsp+6h] [rbp-42h]
  void *v9; // [rsp+8h] [rbp-40h]

  v4 = -1598469426;
  do
  {
    if ( v4 != -1598469426 )
      xalloc_die();
    v4 = -2051996053;
    if ( 0x7FFFFFFFFFFFFFFFLL / s < n )
      v4 = 572065121;
  }
  while ( v4 != -2051996053 );
  v5 = n * s;
  v8 = n * s == 0;
LABEL_17:
  for ( i = 1796097734; i != 604102103; i = 604102103 )
  {
    if ( i != 1796097734 )
      xalloc_die();
    i = -1794898164;
    if ( p )
      i = -1063451789;
    if ( !v8 )
      i = -1794898164;
    while ( i != -2072419574 )
    {
      if ( i != -1794898164 )
      {
        free(p);
        i = 604102103;
        v3 = 0LL;
        goto LABEL_17;
      }
      v9 = realloc(p, v5);
      i = -2072419574;
      if ( !v9 )
        i = -296065362;
      if ( !v5 )
        i = -2072419574;
      if ( i > -296065363 )
        goto LABEL_17;
    }
    v3 = v9;
  }
  return v3;
}

void* __fastcall xrealloc(void *p, size_t n)
{
  void *v2; // r15
  int i; // eax
  void *v5; // [rsp+10h] [rbp-38h]

LABEL_11:
  for ( i = 1796097734; i != 604102103; i = 604102103 )
  {
    if ( i != 1796097734 )
      xalloc_die();
    i = -1794898164;
    if ( p )
      i = -1063451789;
    if ( n )
      i = -1794898164;
    while ( i != -2072419574 )
    {
      if ( i != -1794898164 )
      {
        free(p);
        i = 604102103;
        v2 = 0LL;
        goto LABEL_11;
      }
      v5 = realloc(p, n);
      i = -2072419574;
      if ( !v5 )
        i = -296065362;
      if ( !n )
        i = -2072419574;
      if ( i > -296065363 )
        goto LABEL_11;
    }
    v2 = v5;
  }
  return v2;
}

void* __fastcall x2nrealloc(void *p, size_t *pn, size_t s)
{
  size_t v3; // rcx
  size_t v4; // rbp
  bool v6; // zf
  int v7; // edi
  int v8; // eax
  __int64 v9; // r15
  size_t v10; // r12
  int i; // eax
  size_t v13; // [rsp+8h] [rbp-40h]
  void *v14; // [rsp+10h] [rbp-38h]

  v13 = *pn;
  v6 = p == 0LL;
  v7 = -1764886841;
  if ( !v6 )
    v7 = -1396456168;
  v8 = -1473749864;
  v9 = 55157968LL;
  while ( v8 <= -1396456169 )
  {
    if ( v8 == -1764886841 )
    {
      v8 = -794813331;
      if ( v13 )
        v8 = 2104341471;
      v3 = *pn;
      if ( v8 > -763197485 )
        goto LABEL_16;
    }
    else
    {
      v6 = v8 == -1473749864;
      v8 = v7;
      if ( !v6 )
      {
        while ( 1 )
          ;
      }
LABEL_6:
      if ( v8 > -763197485 )
        goto LABEL_16;
    }
  }
  if ( v8 == -1396456168 )
  {
    v8 = 1955661292;
    if ( 0x5555555555555554LL / s <= v13 )
      v8 = 909194887;
    goto LABEL_6;
  }
  v3 = (s > 0x80) + 0x80 / s;
  v8 = 2104341471;
LABEL_16:
  while ( v8 > 1955661291 )
  {
    if ( v8 == 1955661292 )
    {
      v4 = (v13 >> 1) + v13 + 1;
      v8 = -763197484;
    }
    else
    {
      v8 = -763197484;
      if ( 0x7FFFFFFFFFFFFFFFLL / s < v3 )
        v8 = 55157968;
      v4 = v3;
    }
  }
  if ( v8 != -763197484 )
  {
    if ( v8 != 55157968 )
      xalloc_die();
    xalloc_die();
  }
  *pn = v4;
  v10 = v4 * s;
LABEL_33:
  for ( i = 1796097734; i != 604102103; i = 604102103 )
  {
    if ( i != 1796097734 )
      xalloc_die();
    i = -1794898164;
    if ( p )
      i = -1063451789;
    if ( v10 )
      i = -1794898164;
    while ( i != -2072419574 )
    {
      if ( i != -1794898164 )
      {
        free(p);
        i = 604102103;
        v9 = 0LL;
        goto LABEL_33;
      }
      v14 = realloc(p, v10);
      i = -2072419574;
      if ( !v14 )
        i = -296065362;
      if ( !v10 )
        i = -2072419574;
      if ( i > -296065363 )
        goto LABEL_33;
    }
    v9 = (__int64)v14;
  }
  return (void *)v9;
}

char* __fastcall xcharalloc(size_t n)
{
  int v1; // edx
  char *v3; // [rsp+8h] [rbp-10h]

  v3 = (char *)malloc(n);
  v1 = 1313031790;
  do
  {
    if ( v1 != 1313031790 )
      xalloc_die();
    v1 = -444091617;
    if ( n )
      v1 = -504387713;
    if ( v3 )
      v1 = -444091617;
  }
  while ( v1 != -444091617 );
  return v3;
}

void* __fastcall x2realloc(void *p, size_t *pn)
{
  return x2nrealloc(p, pn, 1uLL);
}

void* __fastcall xzalloc(size_t s)
{
  int v1; // edx
  void *v3; // [rsp+10h] [rbp-18h]

  v3 = malloc(s);
  v1 = 1313031790;
  do
  {
    if ( v1 != 1313031790 )
      xalloc_die();
    v1 = -444091617;
    if ( s )
      v1 = -504387713;
    if ( v3 )
      v1 = -444091617;
  }
  while ( v1 != -444091617 );
  memset(v3, 0, s);
  return v3;
}

void* __fastcall xcalloc(size_t n, size_t s)
{
  int v2; // eax
  void *v4; // [rsp+8h] [rbp-30h]

  v2 = -1590525098;
  while ( v2 != -2035143451 )
  {
    v2 = 406140274;
    if ( 0x7FFFFFFFFFFFFFFFLL / s < n )
      v2 = -1083777847;
    do
    {
      if ( v2 != 406140274 )
        xalloc_die();
      v4 = calloc(n, s);
      v2 = -1083777847;
      if ( v4 )
        v2 = -2035143451;
    }
    while ( v2 > -1083777848 );
  }
  return v4;
}

void* __fastcall xmemdup(const void *p, size_t s)
{
  int v2; // edx
  void *dest; // [rsp+8h] [rbp-20h]

  dest = malloc(s);
  v2 = 1313031790;
  do
  {
    if ( v2 != 1313031790 )
      xalloc_die();
    v2 = -444091617;
    if ( s )
      v2 = -504387713;
    if ( dest )
      v2 = -444091617;
  }
  while ( v2 != -444091617 );
  memcpy(dest, p, s);
  return dest;
}

char* __fastcall xstrdup(const char *string)
{
  size_t v1; // rbx
  size_t v2; // rbx
  int v3; // edx
  void *dest; // [rsp+8h] [rbp-20h]

  v1 = strlen(string);
  dest = malloc(v1 + 1);
  v2 = v1 + 1;
  v3 = 1313031790;
  do
  {
    if ( v3 != 1313031790 )
      xalloc_die();
    v3 = -444091617;
    if ( v2 )
      v3 = -504387713;
    if ( dest )
      v3 = -444091617;
  }
  while ( v3 != -444091617 );
  memcpy(dest, string, v2);
  return (char *)dest;
}

void __cdecl __noreturn xalloc_die()
{
  int v0; // ebx
  char *v1; // rax

  v0 = exit_failure;
  v1 = dcgettext(0LL, "memory exhausted", 5);
  error(v0, 0, "%s", v1);
  abort();
}

size_t __fastcall rpl_mbrtowc(wchar_t *pwc, const char *s, size_t n, mbstate_t *ps)
{
  size_t v5; // r12
  int v6; // ebp
  int v7; // ecx
  int v8; // eax
  wchar_t *v9; // r13
  bool v10; // zf
  size_t v11; // rax
  size_t v13; // [rsp+0h] [rbp-58h]
  char v14[4]; // [rsp+Ch] [rbp-4Ch] BYREF
  char *v15; // [rsp+10h] [rbp-48h]
  size_t v16; // [rsp+18h] [rbp-40h]
  wchar_t *v17; // [rsp+20h] [rbp-38h]

  v5 = n;
  v15 = v14;
  v6 = -1771887142;
  if ( pwc )
    v6 = 1568760120;
  v7 = -917313894;
  v13 = 1568760120LL;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        v8 = v7;
        v9 = (wchar_t *)n;
        v10 = v7 == -917313894;
        n = (size_t)pwc;
        v7 = v6;
      }
      while ( v10 );
      while ( v8 > -39558044 )
      {
        while ( v8 != -39558043 )
        {
          if ( v8 != 1568760120 )
          {
            *v17 = *(unsigned __int8 *)s;
            v7 = -168302713;
            v11 = 1LL;
            goto LABEL_4;
          }
          v17 = v9;
          v16 = mbrtowc(v9, s, v5, ps);
          v8 = -1494721371;
          if ( v16 > 0xFFFFFFFFFFFFFFFDLL )
            v8 = -39558043;
          if ( !v5 )
            v8 = -1494721371;
          if ( v8 <= -39558044 )
            goto LABEL_18;
        }
        v10 = !hard_locale(0);
        v8 = 579209423;
        if ( !v10 )
          v8 = -1494721371;
      }
LABEL_18:
      if ( v8 != -1771887142 )
        break;
      v7 = 1568760120;
      n = (size_t)v14;
    }
    if ( v8 != -1494721371 )
      break;
    v7 = -168302713;
    v11 = v16;
LABEL_4:
    v13 = v11;
    n = (size_t)v9;
  }
  if ( v8 != -168302713 )
  {
    while ( 1 )
      ;
  }
  return v13;
}

int __fastcall c_strcasecmp(const char *s1, const char *s2)
{
  const char *v2; // r11
  const char *v3; // r14
  int v4; // r10d
  int v5; // ebp
  int result; // eax
  const char *v7; // rcx
  const char *v8; // rbx
  int v9; // edx
  bool v10; // zf
  int v11; // edx
  unsigned __int8 v12; // cl
  int v13; // edx
  unsigned __int8 v14; // [rsp+1h] [rbp-2Dh]
  int v15; // [rsp+2h] [rbp-2Ch]
  const char *v16; // [rsp+6h] [rbp-28h]
  const char *v17; // [rsp+Eh] [rbp-20h]

  v4 = -200997623;
  if ( s1 != s2 )
    v4 = 938568137;
  v5 = -76219746;
LABEL_4:
  v7 = v3;
  v8 = v2;
  do
  {
LABEL_7:
    v9 = v5;
    v2 = v8;
    v3 = v7;
    v10 = v5 == -76219746;
    v7 = s1;
    v8 = s2;
    v5 = v4;
  }
  while ( v10 );
  while ( 1 )
  {
    while ( v9 <= 938568136 )
    {
      if ( v9 == -1360438796 )
      {
        result = v15 - v14;
        v5 = 2145921123;
        goto LABEL_4;
      }
      if ( v9 == -200997623 )
      {
        v5 = 2145921123;
        result = 0;
        goto LABEL_4;
      }
    }
    if ( v9 == 2145921123 )
      return result;
    if ( v9 == 1284673990 )
    {
      v7 = v16 + 1;
      v8 = v17 + 1;
      v5 = -1360438796;
      if ( v15 == v14 )
        v5 = 938568137;
      goto LABEL_7;
    }
    v16 = v3;
    v17 = v2;
    v11 = *(unsigned __int8 *)v3;
    v12 = v11 + 32;
    if ( (unsigned int)(v11 - 65) >= 0x1A )
      v12 = *v3;
    v13 = *(unsigned __int8 *)v2;
    if ( (unsigned int)(v13 - 65) < 0x1A )
      LOBYTE(v13) = v13 + 32;
    v14 = v13;
    v15 = v12;
    v9 = 1284673990;
    if ( !v12 )
      v9 = -1360438796;
  }
}

int __fastcall close_stream(FILE *stream)
{
  int v1; // ebx
  int i; // eax
  bool v3; // zf
  bool v5; // [rsp+1h] [rbp-23h]
  bool v6; // [rsp+2h] [rbp-22h]
  bool v7; // [rsp+3h] [rbp-21h]

  v1 = (int)stream;
  v6 = __fpending(stream) != 0;
  v7 = (stream->_flags & 0x20) != 0;
  v5 = rpl_fclose(stream) != 0;
  i = -854308671;
LABEL_13:
  while ( i <= -618837877 )
  {
    if ( i == -854308671 )
    {
      v3 = !v7;
      i = -681932499;
      goto LABEL_22;
    }
    i = -147959854;
    if ( v5 )
      i = -618837876;
  }
  if ( i != -618837876 )
  {
    i = 787179380;
    v1 = 0;
    goto LABEL_2;
  }
  v3 = !v6;
  for ( i = 1118610277; ; i = -147959854 )
  {
LABEL_22:
    if ( !v3 )
      i = 1151943293;
    if ( i <= 650160475 )
      goto LABEL_13;
    while ( 1 )
    {
LABEL_2:
      while ( i > 1151943292 )
      {
        if ( i == 1151943293 )
        {
          i = 1958387022;
          if ( v5 )
            i = 650160476;
        }
        else
        {
          *__errno_location() = 0;
          i = 650160476;
        }
      }
      if ( i != 650160476 )
        break;
      i = 787179380;
      v1 = -1;
    }
    if ( i != 1118610277 )
      break;
    v3 = *__errno_location() == 9;
  }
  return v1;
}

bool __fastcall hard_locale(int category)
{
  int v1; // eax
  char v2; // bl
  bool v3; // zf
  const char *s1; // [rsp+8h] [rbp-20h]

  s1 = setlocale(category, 0LL);
  v1 = -1569123557;
  if ( s1 )
    v1 = 1072283909;
  v2 = 1;
  while ( 1 )
  {
    while ( v1 > 1528079344 )
    {
      if ( v1 == 1528079345 )
      {
        v1 = -1569123557;
        v2 = 0;
      }
      else
      {
        v3 = strcmp(s1, "POSIX") == 0;
        v1 = -1569123557;
        if ( v3 )
          v1 = 1528079345;
        v2 = 1;
      }
    }
    if ( v1 != 1072283909 )
      break;
    v3 = strcmp(s1, "C") == 0;
    v1 = 1993275515;
    if ( v3 )
      v1 = 1528079345;
  }
  return v2 != 0;
}

const char *__cdecl locale_charset()
{
  char *v0; // rax
  const char *v1; // rcx
  const char *result; // rax

  v0 = nl_langinfo(14);
  v1 = "Output each NAME with its last non-slash component and trailing slashes\n"
       "removed; if NAME contains no /'s, output '.' (meaning the current directory).\n"
       "\n"
     + 151;
  if ( v0 )
    v1 = v0;
  result = "ASCII";
  if ( *v1 )
    return v1;
  return result;
}

int __fastcall rpl_fclose(FILE *fp)
{
  int v1; // eax
  int v2; // ebp
  int v3; // r12d
  int v4; // r14d
  signed int v5; // eax
  bool v6; // zf
  int v7; // ecx
  int v8; // eax
  int v10; // [rsp+0h] [rbp-38h]
  int v11; // [rsp+4h] [rbp-34h]

  v10 = v1;
  v11 = fileno(fp);
  v5 = -2039130427;
  while ( 1 )
  {
    do
    {
LABEL_3:
      if ( v5 > -1841287631 )
      {
        switch ( v5 )
        {
          case -1841287630:
            *__errno_location() = v10;
            v5 = 62877753;
            v2 = -1;
            goto LABEL_17;
          case -1461739003:
            v4 = fclose(fp);
            v5 = 1391557731;
            goto LABEL_17;
          case -718364531:
            v6 = __freading(fp) == 0;
            v5 = 1114078276;
            v7 = -711578757;
            goto LABEL_15;
        }
        goto LABEL_2;
      }
      if ( v5 != -2039130427 )
      {
        if ( v5 == -1897867431 )
        {
          v3 = *__errno_location();
          v5 = 2040982793;
          goto LABEL_17;
        }
        goto LABEL_2;
      }
      v5 = ((v11 >> 31) & 0xD3B10178) - 718364531;
    }
    while ( v5 <= -711578758 );
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_17:
        if ( v5 <= 1114078275 )
        {
          if ( v5 == -711578757 )
          {
            v8 = fileno(fp);
            v3 = 0;
            v6 = lseek(v8, 0LL, 1) == -1;
            v5 = 2040982793;
            v7 = 1114078276;
LABEL_15:
            if ( !v6 )
              v5 = v7;
            continue;
          }
          if ( v5 == 62877753 )
          {
            v5 = 1391557731;
            v4 = v2;
          }
          goto LABEL_2;
        }
        if ( v5 != 1114078276 )
          break;
        v6 = rpl_fflush(fp) == 0;
        v5 = 2040982793;
        if ( !v6 )
          v5 = -1897867431;
        v3 = 0;
        if ( v5 <= -711578758 )
          goto LABEL_3;
      }
      if ( v5 != 2040982793 )
        break;
      v10 = v3;
      v2 = fclose(fp);
      v5 = 62877753;
      if ( v3 )
        v5 = -1841287630;
      if ( v5 <= -711578758 )
        goto LABEL_3;
    }
    if ( v5 == 1391557731 )
      return v4;
LABEL_2:
    if ( v5 > -711578758 )
      goto LABEL_17;
  }
}

int __fastcall rpl_fflush(FILE *stream)
{
  int v1; // r14d
  int v2; // ebp
  int i; // eax
  bool v4; // zf
  int v5; // ecx
  int v6; // eax
  int v8; // [rsp+0h] [rbp-34h]

  v2 = 1908708530;
  if ( !stream )
    v2 = 1250220017;
  for ( i = 1773671945; ; i = -2071240645 )
  {
    while ( 1 )
    {
      v5 = i;
      if ( i <= 1773671944 )
        break;
      i = v2;
      if ( v5 != 1773671945 )
      {
        if ( v5 != 1908708530 )
        {
          while ( 1 )
            ;
        }
        v4 = __freading(stream) == 0;
        i = 1250220017;
        if ( !v4 )
          i = -1414407193;
      }
    }
    if ( i == -2071240645 )
      break;
    if ( i == -1414407193 )
    {
      v8 = stream->_flags & 0x100;
      v6 = 231023272;
      while ( v6 == 231023272 )
      {
        v6 = 1151920275;
        if ( v8 )
          v6 = -1845628660;
        if ( v6 == -1845628660 )
        {
          rpl_fseeko(stream, 0LL, 1);
          v6 = 1151920275;
        }
      }
    }
    v1 = fflush(stream);
  }
  return v1;
}

int __fastcall rpl_fseeko(FILE *fp, off_t offset, int whence)
{
  int v3; // ebx
  int v4; // r12d
  int i; // eax
  bool v7; // zf
  int v8; // ecx
  int v9; // eax
  __off_t v11; // [rsp+0h] [rbp-48h]
  char *IO_read_end; // [rsp+8h] [rbp-40h]
  char *IO_read_ptr; // [rsp+10h] [rbp-38h]

  IO_read_end = fp->_IO_read_end;
  IO_read_ptr = fp->_IO_read_ptr;
  for ( i = -905106980; ; i = -1877732806 )
  {
    while ( 1 )
    {
LABEL_3:
      while ( i > -905106981 )
      {
        if ( i == -905106980 )
        {
          v7 = IO_read_end == IO_read_ptr;
          i = -1216362749;
          v8 = 881507180;
          while ( 1 )
          {
            if ( v7 )
              i = v8;
            if ( i <= -118282961 )
              break;
            while ( i > 881507179 )
            {
              if ( i != 881507180 )
              {
                LOBYTE(fp->_flags) &= ~0x10u;
                fp->_offset = v11;
                i = -1802861254;
                v3 = 0;
                goto LABEL_3;
              }
              i = -1216362749;
              if ( fp->_IO_write_ptr == fp->_IO_write_base )
                i = 775398061;
              if ( i <= -118282961 )
                goto LABEL_3;
            }
            if ( i == -118282960 )
            {
              v9 = fileno(fp);
              v11 = lseek(v9, offset, whence);
              v7 = v11 == -1;
              i = 1743206242;
              v8 = -760559092;
            }
            else
            {
              v7 = fp->_IO_save_base == 0LL;
              i = -1216362749;
              v8 = -118282960;
            }
          }
        }
        else
        {
          i = -1802861254;
          v3 = -1;
        }
      }
      if ( i != -1802861254 )
        break;
      i = -1877732806;
      v4 = v3;
    }
    if ( i != -1216362749 )
      break;
    v4 = fseeko(fp, offset, whence);
  }
  return v4;
}

int __fastcall atexit(void (__fastcall *a1)(void *))
{
  return __cxa_atexit(a1, 0LL, _dso_handle);
}
