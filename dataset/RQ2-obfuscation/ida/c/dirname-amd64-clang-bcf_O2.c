void dl_relocate_static_pie()
{
  ;
}

void __fastcall __noreturn usage(int status)
{
  char *v1; // rax
  char *v2; // rax
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  FILE *v12; // rbx
  char *v13; // rax
  FILE *v14; // rbx
  char *v15; // rax

  if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
  if ( !status )
  {
    v1 = dcgettext(0LL, "Usage: %s [OPTION] NAME...\n", 5);
    __printf_chk(1LL, v1, program_name);
    v2 = dcgettext(
           0LL,
           "Output each NAME with its last non-slash component and trailing slashes\n"
           "removed; if NAME contains no /'s, output '.' (meaning the current directory).\n"
           "\n",
           5);
    fputs_unlocked(v2, stdout);
    v3 = dcgettext(0LL, "  -z, --zero     end each output line with NUL, not newline\n", 5);
    fputs_unlocked(v3, stdout);
    v4 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
    fputs_unlocked(v4, stdout);
    v5 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
    fputs_unlocked(v5, stdout);
    v6 = dcgettext(
           0LL,
           "\n"
           "Examples:\n"
           "  %s /usr/bin/          -> \"/usr\"\n"
           "  %s dir1/str dir2/str  -> \"dir1\" followed by \"dir2\"\n"
           "  %s stdio.h            -> \".\"\n",
           5);
    __printf_chk(1LL, v6, program_name);
    v7 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v7, "GNU coreutils");
    v8 = setlocale(5, 0LL);
    if ( v8 && strncmp(v8, "en_", 3uLL) )
    {
      v9 = dcgettext(0LL, "Report any translation bugs to <https://translationproject.org/team/>\n", 5);
      fputs_unlocked(v9, stdout);
    }
    v10 = dcgettext(0LL, "Full documentation <%s%s>\n", 5);
    __printf_chk(1LL, v10, "https://www.gnu.org/software/coreutils/");
    v11 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
    __printf_chk(1LL, v11, "dirname");
    exit(0);
  }
  while ( 1 )
  {
    v14 = stderr;
    v15 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(v14, 1LL, v15, program_name);
    if ( y < 10 || (((_BYTE)x * ((_BYTE)x - 1)) & 1) == 0 )
      break;
    v12 = stderr;
    v13 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(v12, 1LL, v13, program_name);
  }
  exit(status);
}

int __cdecl main(int argc, const char **argv, const char **envp)
{
  char v4; // bl
  int v5; // eax
  int v6; // eax
  int v7; // ebp
  const char *v8; // rbx
  size_t v9; // rax
  const char *v10; // rdi
  char *IO_write_ptr; // rax
  char *v13; // rax

  set_program_name(*argv);
  setlocale(6, "");
  bindtextdomain("coreutils", "/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  v4 = 0;
  while ( 1 )
  {
    v5 = getopt_long(argc, (char *const *)argv, "z", longopts, 0LL);
    if ( v5 <= 121 )
      break;
    v4 = 1;
    if ( v5 != 122 )
      goto LABEL_30;
  }
  if ( v5 != -1 )
  {
    if ( v5 == -131 )
    {
      version_etc(stdout, "dirname", "GNU coreutils", Version, "David MacKenzie", "Jim Meyering", 0LL);
      exit(0);
    }
    if ( v5 == -130 )
      usage(0);
LABEL_30:
    usage(1);
  }
  if ( y_37 >= 10 && (((_BYTE)x_36 * ((_BYTE)x_36 - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
  v6 = optind;
  if ( optind >= argc )
  {
    v13 = dcgettext(0LL, "missing operand", 5);
    error(0, 0, v13);
    usage(1);
  }
  v7 = 10;
  if ( v4 )
    v7 = 0;
  if ( y_37 >= 10 && (((_BYTE)x_36 * ((_BYTE)x_36 - 1)) & 1) != 0 )
  {
    while ( 1 )
LABEL_24:
      ;
  }
  while ( 1 )
  {
    v8 = argv[v6];
    v9 = dir_len(v8);
    v10 = ".";
    if ( v9 )
      v10 = v8;
    else
      v9 = 1LL;
    fwrite_unlocked(v10, 1uLL, v9, stdout);
    IO_write_ptr = stdout->_IO_write_ptr;
    if ( IO_write_ptr >= stdout->_IO_write_end )
    {
      __overflow(stdout, v7);
    }
    else
    {
      stdout->_IO_write_ptr = IO_write_ptr + 1;
      *IO_write_ptr = v7;
    }
    v6 = optind + 1;
    optind = v6;
    if ( v6 >= argc )
      return 0;
    if ( y_37 >= 10 && (((_BYTE)x_36 * ((_BYTE)x_36 - 1)) & 1) != 0 )
      goto LABEL_24;
  }
}

void __fastcall close_stdout_set_file_name(const char *file)
{
  if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    file_name = file;
    if ( y < 10 || (((_BYTE)x * ((_BYTE)x - 1)) & 1) == 0 )
      break;
LABEL_5:
    file_name = file;
  }
}

void __fastcall close_stdout_set_ignore_EPIPE(bool ignore)
{
  if ( y_4 >= 10 && (((_BYTE)x_3 * ((_BYTE)x_3 - 1)) & 1) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    ignore_EPIPE = ignore;
    if ( y_4 < 10 || (((_BYTE)x_3 * ((_BYTE)x_3 - 1)) & 1) == 0 )
      break;
LABEL_5:
    ignore_EPIPE = ignore;
  }
}

void __cdecl close_stdout()
{
  int v0; // eax
  bool v1; // bl
  int *v2; // rax
  int *v3; // rbp
  char *v4; // rbx
  int v5; // ebp
  int v6; // eax
  char *v7; // rax

  if ( y_6 >= 10 && (((_BYTE)x_5 * ((_BYTE)x_5 - 1)) & 1) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    v0 = close_stream(stdout);
    if ( y_6 < 10 || (((_BYTE)x_5 * ((_BYTE)x_5 - 1)) & 1) == 0 )
      break;
LABEL_5:
    close_stream(stdout);
  }
  if ( v0 )
  {
    v1 = ignore_EPIPE;
    v2 = __errno_location();
    v3 = v2;
    if ( !v1 || *v2 != 32 )
    {
      v4 = dcgettext(0LL, "write error", 5);
      v5 = *v3;
      if ( file_name )
      {
        v7 = quotearg_colon(file_name);
        error(0, v5, "%s: %s", v7, v4);
        _exit(exit_failure);
      }
      if ( y_6 >= 10 && (((_BYTE)x_5 * ((_BYTE)x_5 - 1)) & 1) != 0 )
        goto LABEL_21;
      while ( 1 )
      {
        error(0, v5, "%s", v4);
        if ( y_6 < 10 || (((_BYTE)x_5 * ((_BYTE)x_5 - 1)) & 1) == 0 )
          _exit(exit_failure);
LABEL_21:
        error(0, v5, "%s", v4);
      }
    }
  }
  while ( 1 )
  {
    v6 = close_stream(stderr);
    if ( y_6 < 10 || (((_BYTE)x_5 * ((_BYTE)x_5 - 1)) & 1) == 0 )
      break;
    close_stream(stderr);
  }
  if ( v6 )
    _exit(exit_failure);
}

size_t __fastcall dir_len(const char *file)
{
  size_t v1; // rbx
  size_t v2; // rcx
  size_t result; // rax

  v1 = *file == 47;
  if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
  v2 = last_component(file) - file;
  do
  {
    result = v2;
    if ( v1 >= v2 )
      break;
    --v2;
  }
  while ( file[result - 1] == 47 );
  return result;
}

char *__fastcall mdir_name(const char *file)
{
  unsigned __int64 v1; // r12
  bool v2; // bp
  unsigned __int64 v3; // rax
  size_t v4; // rbx
  _BYTE *v5; // r15

  v1 = *file == 47;
  v2 = (((_BYTE)x * ((_BYTE)x - 1)) & 1) == 0 || y < 10;
  do
  {
    if ( !v2 )
    {
      while ( 1 )
        ;
    }
    v3 = last_component(file) - file;
    do
    {
      v4 = v3;
      if ( v1 >= v3 )
        break;
      --v3;
    }
    while ( file[v4 - 1] == 47 );
    v5 = malloc((v4 == 0) + v4 + 1);
  }
  while ( y_2 >= 10 && (((_BYTE)x_1 * ((_BYTE)x_1 - 1)) & 1) != 0 );
  if ( !v5 )
    return 0LL;
  memcpy(v5, file, v4);
  if ( !v4 )
  {
    *v5 = 46;
    v4 = 1LL;
  }
  v5[v4] = 0;
  return v5;
}

char *__fastcall last_component(const char *name)
{
  char *v1; // rdi
  char v2; // cl
  char v3; // si
  char *result; // rax
  char v5; // dl
  char v6; // cl

  v1 = (char *)(name - 1);
  do
    v2 = *++v1;
  while ( v2 == 47 );
  if ( v2 )
  {
    v3 = 0;
    result = v1;
    do
    {
      if ( (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 && y >= 10 )
      {
        while ( 1 )
          ;
      }
      v5 = 1;
      if ( v2 != 47 )
      {
        v6 = v3;
        if ( (v3 & 1) != 0 )
          v3 = 0;
        if ( v6 )
          result = v1;
        v5 = v3;
      }
      v2 = *++v1;
      v3 = v5;
    }
    while ( v2 );
  }
  else
  {
    result = v1;
  }
  if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
  return result;
}

size_t __fastcall base_len(const char *name)
{
  size_t result; // rax

  result = strlen(name);
  if ( result >= 2 )
  {
    do
    {
      if ( name[result - 1] != 47 )
        break;
      --result;
      if ( (((_BYTE)x_1 * ((_BYTE)x_1 - 1)) & 1) != 0 && y_2 >= 10 )
      {
        while ( 1 )
          ;
      }
    }
    while ( result > 1 );
  }
  return result;
}

void __fastcall set_program_name(const char *argv0)
{
  const char *v1; // rbx
  char *v2; // rax
  const char *v3; // r14

  v1 = argv0;
  if ( !argv0 )
  {
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x37uLL, 1uLL, stderr);
    abort();
  }
  v2 = strrchr(argv0, 47);
  v3 = v2 + 1;
  if ( !v2 )
    v3 = argv0;
  if ( v3 - argv0 >= 7 )
  {
    if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
    {
      while ( 1 )
        ;
    }
    if ( !strncmp(v3 - 7, "/.libs/", 7uLL) )
    {
      if ( !strncmp(v3, "lt-", 3uLL) )
      {
        v3 += 3;
        program_invocation_short_name = (__int64)v3;
      }
      v1 = v3;
    }
  }
  program_name = v1;
  program_invocation_name = (__int64)v1;
}

quoting_options *__fastcall clone_quoting_options(quoting_options *o)
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

quoting_style __fastcall get_quoting_style(const quoting_options *o)
{
  const quoting_options *v1; // rax

  v1 = &default_quoting_options;
  if ( o )
    v1 = o;
  return v1->style;
}

void __fastcall set_quoting_style(quoting_options *o, quoting_style s)
{
  quoting_options *v2; // rax
  quoting_options *v3; // rax

  if ( y_22 >= 10 && (((_BYTE)x_21 * ((_BYTE)x_21 - 1)) & 1) != 0 )
    goto LABEL_7;
  while ( 1 )
  {
    v2 = &default_quoting_options;
    if ( o )
      v2 = o;
    v2->style = s;
    if ( y_22 < 10 || (((_BYTE)x_21 * ((_BYTE)x_21 - 1)) & 1) == 0 )
      break;
LABEL_7:
    v3 = &default_quoting_options;
    if ( o )
      v3 = o;
    v3->style = s;
  }
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
  int result; // eax

  v2 = &default_quoting_options;
  if ( o )
    v2 = o;
  result = v2->flags;
  v2->flags = i;
  return result;
}

void __fastcall set_custom_quoting(quoting_options *o, const char *left_quote, const char *right_quote)
{
  quoting_options *v3; // rax

  v3 = &default_quoting_options;
  if ( o )
    v3 = o;
  v3->style = custom_quoting_style;
  if ( !left_quote || !right_quote )
    abort();
  v3->left_quote = left_quote;
  v3->right_quote = right_quote;
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
        size_t buffersize,
        const char *arg,
        size_t argsize,
        unsigned int quoting_style,
        int flags,
        const unsigned int *quote_these_too,
        char *left_quote,
        const char *right_quote)
{
  size_t v13; // rdx
  char v14; // r13
  int v15; // r10d
  size_t v16; // rax
  quoting_style v17; // ecx
  __int64 v18; // rbx
  __int64 v19; // rsi
  char *v20; // rdi
  size_t v21; // r8
  size_t v22; // r11
  char v23; // al
  const char *v24; // rax
  int v25; // ebx
  int v26; // ebx
  unsigned __int64 v27; // rdx
  char v28; // al
  int v29; // r14d
  size_t v30; // rax
  __int64 v31; // r14
  size_t v32; // rbp
  unsigned __int64 v33; // r9
  size_t i; // r11
  char *v35; // rdi
  int v36; // edx
  unsigned __int64 v37; // r13
  const char *v38; // r15
  int v39; // ecx
  int v40; // ecx
  size_t v41; // rax
  char v42; // al
  __int64 v43; // r12
  size_t v44; // rax
  size_t v45; // r12
  const char *v46; // rdi
  size_t v47; // rbx
  char v48; // r15
  size_t v49; // rax
  bool v50; // bl
  char v51; // cl
  char v52; // si
  char v53; // dl
  const char *v54; // rax
  size_t v55; // r15
  char v56; // r12
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // rcx
  const char *v59; // r13
  unsigned __int64 v60; // r14
  bool v61; // al
  size_t v62; // rax
  size_t v63; // rcx
  size_t v64; // rdx
  bool v65; // zf
  char v66; // al
  int v67; // ecx
  const unsigned __int16 **v68; // rax
  const unsigned __int16 *v69; // rax
  unsigned __int64 v70; // rcx
  int v71; // eax
  unsigned __int64 v72; // r14
  unsigned __int64 v73; // rbp
  const char *v74; // rsi
  unsigned __int64 v75; // r13
  size_t v76; // rbx
  __int64 v77; // rsi
  __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rdx
  __int64 v81; // rsi
  size_t v82; // rax
  unsigned int v83; // ecx
  size_t v84; // rax
  unsigned __int64 v85; // rax
  int v86; // ecx
  int v87; // eax
  quoting_style v88; // ebp
  int v89; // r13d
  size_t v90; // r15
  unsigned __int64 v91; // r12
  int v92; // edx
  char v93; // al
  char *v94; // rcx
  char v96; // [rsp+Eh] [rbp-FAh]
  char v97; // [rsp+Fh] [rbp-F9h]
  int v98; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v99; // [rsp+10h] [rbp-F8h]
  int v100; // [rsp+10h] [rbp-F8h]
  int v101; // [rsp+1Ch] [rbp-ECh]
  char v102; // [rsp+23h] [rbp-E5h]
  quoting_style v103; // [rsp+24h] [rbp-E4h]
  char v104; // [rsp+2Bh] [rbp-DDh]
  unsigned __int8 v105; // [rsp+2Ch] [rbp-DCh]
  bool v106; // [rsp+2Dh] [rbp-DBh]
  char v107; // [rsp+2Eh] [rbp-DAh]
  unsigned __int8 v108; // [rsp+2Fh] [rbp-D9h]
  size_t n; // [rsp+30h] [rbp-D8h]
  const char *s2; // [rsp+38h] [rbp-D0h]
  size_t v113; // [rsp+50h] [rbp-B8h]
  __int64 v114; // [rsp+58h] [rbp-B0h]
  int v115; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v116; // [rsp+60h] [rbp-A8h]
  size_t v117; // [rsp+68h] [rbp-A0h]
  char *v118; // [rsp+70h] [rbp-98h]
  char *v119; // [rsp+70h] [rbp-98h]
  int v122; // [rsp+8Ch] [rbp-7Ch]
  char v123; // [rsp+90h] [rbp-78h]
  size_t v124; // [rsp+98h] [rbp-70h]
  bool v125; // [rsp+A0h] [rbp-68h]
  int v126; // [rsp+A4h] [rbp-64h]
  int v127; // [rsp+A8h] [rbp-60h]
  wchar_t pwc; // [rsp+ACh] [rbp-5Ch] BYREF
  const char *v129; // [rsp+B0h] [rbp-58h]
  size_t v130; // [rsp+B8h] [rbp-50h]
  mbstate_t ps; // [rsp+C0h] [rbp-48h] BYREF
  size_t mb_cur_max; // [rsp+C8h] [rbp-40h]
  __int64 v133; // [rsp+D0h] [rbp-38h]

  mb_cur_max = __ctype_get_mb_cur_max();
  v14 = (flags & 2) != 0;
  v127 = flags & 1;
  v122 = flags;
  v126 = flags & 4;
  LOBYTE(v15) = 1;
  v117 = 0LL;
  s2 = 0LL;
  n = 0LL;
  v113 = 0LL;
  v101 = 0;
  v123 = 0;
LABEL_2:
  v16 = quoting_style;
  v17 = literal_quoting_style;
  v18 = 0LL;
  v19 = 0LL;
  v20 = buffer;
  v21 = buffersize;
  v22 = argsize;
  switch ( quoting_style )
  {
    case 0u:
      goto LABEL_53;
    case 1u:
      goto LABEL_10;
    case 2u:
      v23 = x_31;
      if ( y_32 < 10 )
        goto LABEL_17;
      goto LABEL_16;
    case 3u:
      LOBYTE(v16) = 1;
      v113 = v16;
      if ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
      {
        while ( 1 )
          ;
      }
LABEL_10:
      v14 = 1;
      goto LABEL_11;
    case 4u:
LABEL_11:
      v23 = x_31;
      if ( y_32 >= 10 )
      {
        v13 = ((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1;
        if ( (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
        {
          while ( 1 )
            ;
        }
      }
      LOBYTE(v13) = 1;
      if ( (v14 & 1) != 0 )
        v13 = v113;
      v113 = v13;
      if ( y_32 >= 10 )
      {
LABEL_16:
        if ( ((v23 * (v23 - 1)) & 1) != 0 )
        {
          while ( 1 )
            ;
        }
      }
LABEL_17:
      v17 = shell_always_quoting_style;
      if ( (v14 & 1) != 0 )
      {
        v18 = 0LL;
        v24 = "'";
LABEL_35:
        s2 = v24;
        n = 1LL;
        LOBYTE(v19) = v14;
        goto LABEL_53;
      }
      if ( !buffersize || (*buffer = 39, y_32 < 10) )
      {
        v18 = 1LL;
        v24 = "'";
        goto LABEL_35;
      }
      do
      {
        if ( (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) == 0 )
          break;
        *buffer = 39;
      }
      while ( y_32 >= 10 );
      v18 = 1LL;
      s2 = "'";
      n = 1LL;
      LOBYTE(v19) = v14;
      v17 = shell_always_quoting_style;
      goto LABEL_53;
    case 5u:
      LOBYTE(v16) = 1;
      v113 = v16;
      v17 = c_quoting_style;
      if ( (v14 & 1) != 0 )
      {
        v18 = 0LL;
      }
      else
      {
        if ( buffersize )
          *buffer = 34;
        v18 = 1LL;
      }
      v24 = "\"";
      goto LABEL_35;
    case 6u:
      LOBYTE(v16) = 1;
      v113 = v16;
      v17 = c_quoting_style;
      v18 = 0LL;
      s2 = "\"";
      n = 1LL;
      LOBYTE(v19) = 1;
      goto LABEL_53;
    case 7u:
      v18 = 0LL;
      LOBYTE(v16) = 1;
      v113 = v16;
      v17 = escape_quoting_style;
      v19 = 0LL;
      if ( y_32 >= 10 )
      {
        v17 = escape_quoting_style;
        v19 = 0LL;
        if ( (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
        {
          while ( 1 )
            ;
        }
      }
      goto LABEL_53;
    case 8u:
    case 9u:
      if ( y_32 < 10 || (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) == 0 )
        goto LABEL_36;
      break;
    case 0xAu:
      goto LABEL_40;
    default:
      abort();
  }
  while ( 1 )
  {
    v26 = v15;
    gettext_quote("`", (quoting_style)quoting_style);
    gettext_quote("'", (quoting_style)quoting_style);
    v15 = v26;
LABEL_36:
    v25 = v15;
    left_quote = (char *)gettext_quote("`", (quoting_style)quoting_style);
    v19 = quoting_style;
    right_quote = gettext_quote("'", (quoting_style)quoting_style);
    if ( y_32 < 10 )
      break;
    v20 = buffer;
    v21 = buffersize;
    v15 = v25;
    if ( (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) == 0 )
      goto LABEL_40;
  }
  v20 = buffer;
  v21 = buffersize;
  v15 = v25;
LABEL_40:
  if ( (v14 & 1) != 0 )
  {
    v118 = left_quote;
    v29 = v15;
    v18 = 0LL;
  }
  else
  {
    if ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
      goto LABEL_369;
    v27 = 0LL;
    while ( 1 )
    {
      v28 = left_quote[v27];
      if ( !v28 )
        break;
      if ( v27 < v21 )
        v20[v27] = v28;
      ++v27;
      if ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
      {
        while ( 1 )
LABEL_369:
          ;
      }
    }
    v118 = left_quote;
    v18 = v27;
    v29 = v15;
  }
  v30 = strlen(right_quote);
  n = v30;
  LOBYTE(v30) = 1;
  v113 = v30;
  s2 = right_quote;
  LOBYTE(v19) = v14;
  v21 = buffersize;
  v22 = argsize;
  v15 = v29;
  v17 = quoting_style;
  left_quote = v118;
LABEL_53:
  v119 = left_quote;
  v31 = (unsigned int)x_31;
  if ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
  LODWORD(v32) = v113;
  v97 = v113 & 1;
  v108 = v113 & 1 & (v17 != shell_always_quoting_style);
  v105 = v19 & 1 & (v17 == shell_always_quoting_style);
  v96 = v19 & 1;
  v103 = v17;
  v33 = v22;
  i = v18;
  v35 = buffer;
  v107 = v19 & 1 & (quote_these_too != 0LL);
  v36 = y_32;
  v106 = v17 != shell_always_quoting_style || (v19 & 1) == 0;
  v133 = v19;
  v104 = (n != 0) & v19 & v113;
  v37 = 0LL;
  v38 = arg;
  while ( 1 )
  {
    v100 = v36;
    if ( v33 == -1LL )
    {
      if ( !v38[v37] )
      {
        v33 = -1LL;
        goto LABEL_356;
      }
    }
    else if ( v37 == v33 )
    {
      v33 = v37;
LABEL_356:
      v13 = (unsigned int)v103;
      if ( v96 && i == 0 && v103 == shell_always_quoting_style )
        goto LABEL_394;
      if ( (v123 & 1) == 0 || v96 != 0 || v103 != shell_always_quoting_style )
      {
LABEL_402:
        v92 = v100;
        if ( v100 >= 10 && (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
        {
          while ( 1 )
            ;
        }
        if ( s2 )
        {
          if ( !v96 )
          {
            v93 = *s2;
            if ( *s2 )
            {
              v94 = (char *)(s2 + 1);
              do
              {
                if ( i < v21 )
                {
                  v35[i] = v93;
                  LOBYTE(v31) = x_31;
                  v92 = y_32;
                }
                if ( v92 >= 10 && (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
                {
                  while ( 1 )
                    ;
                }
                ++i;
                v93 = *v94++;
              }
              while ( v93 );
            }
          }
        }
        if ( v92 >= 10 && (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
        {
          while ( 1 )
            ;
        }
        if ( i < v21 )
        {
          do
            v35[i] = 0;
          while ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 );
        }
        return i;
      }
      if ( (v15 & 1) != 0 )
        return quotearg_buffer_restyled(v35, v117, v38, v33, c_quoting_style, v122, quote_these_too, v119, right_quote);
      if ( !v117 || v21 )
        goto LABEL_402;
      argsize = v33;
      quoting_style = v103;
      v14 = v133;
      buffersize = v117;
      left_quote = v119;
      if ( v100 >= 10 )
      {
        quoting_style = v103;
        v14 = v133;
        buffersize = v117;
        if ( (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
        {
          while ( 1 )
            ;
        }
      }
      goto LABEL_2;
    }
    if ( (v108 & (n != 0)) == 0 )
    {
LABEL_112:
      v50 = 0;
      goto LABEL_113;
    }
    v45 = v37 + n;
    if ( n >= 2 && v33 == -1LL )
    {
      v46 = v38;
      v47 = v21;
      v48 = v15;
      v32 = i;
      v49 = strlen(v46);
      v36 = v100;
      i = v32;
      LOBYTE(v15) = v48;
      v21 = v47;
      v38 = arg;
      v35 = buffer;
      v33 = v49;
      if ( v45 > v49 )
        goto LABEL_112;
    }
    else
    {
      if ( v36 >= 10 && (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
      {
        while ( 1 )
          ;
      }
      if ( v45 > v33 )
        goto LABEL_112;
    }
    if ( v36 >= 10 && (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
    {
      while ( 1 )
        ;
    }
    v114 = v31;
    v54 = v38;
    v55 = i;
    v56 = v15;
    v57 = v33;
    v32 = v21;
    v58 = v37;
    v59 = v54;
    v60 = v58;
    v61 = memcmp(&v54[v58], s2, n) == 0;
    if ( !v61 )
    {
      v35 = buffer;
      v21 = v32;
      v33 = v57;
      LOBYTE(v15) = v56;
      i = v55;
      v38 = v59;
      v37 = v60;
      v50 = v61;
      v31 = v114;
      if ( v100 < 10 )
        goto LABEL_115;
      goto LABEL_114;
    }
    v40 = 16;
    v35 = buffer;
    v21 = v32;
    v33 = v57;
    LOBYTE(v15) = v56;
    i = v55;
    v38 = v59;
    v37 = v60;
    v50 = v61;
    v31 = v114;
    v36 = v100;
    if ( v96 )
    {
LABEL_58:
      LOBYTE(v32) = v15;
      if ( v36 < 10 )
        goto LABEL_72;
      goto LABEL_71;
    }
LABEL_113:
    if ( v36 < 10 )
      goto LABEL_115;
LABEL_114:
    if ( (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
    {
      while ( 1 )
        ;
    }
LABEL_115:
    v43 = (unsigned __int8)v38[v37];
    LOBYTE(v32) = 1;
    v51 = 116;
    v52 = 98;
    v53 = 0;
    v42 = 0;
    switch ( v38[v37] )
    {
      case 0:
        if ( !v97 )
        {
          v40 = 15;
          v36 = v100;
          if ( v127 )
            goto LABEL_58;
          LOBYTE(v43) = 0;
          goto LABEL_245;
        }
        v40 = 16;
        v36 = v100;
        if ( v96 )
          goto LABEL_58;
        if ( v103 == shell_always_quoting_style && (v101 & 1) == 0 )
        {
          if ( i < v21 )
          {
            v35[i] = 39;
            LOBYTE(v31) = x_31;
            v36 = y_32;
          }
          if ( v36 >= 10 && (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
          {
            while ( 1 )
              ;
          }
          if ( i + 1 < v21 )
          {
            do
              v35[i + 1] = 36;
            while ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 );
          }
          v62 = i + 2;
          if ( i + 2 < v21 )
            v35[v62] = 39;
          i += 3LL;
          LOBYTE(v62) = 1;
          v101 = v62;
        }
        v63 = i;
        if ( i < v21 )
          v35[i] = 92;
        ++i;
        v42 = 1;
        LOBYTE(v43) = 48;
        if ( v103 == shell_always_quoting_style )
          goto LABEL_246;
        if ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
        {
          while ( 1 )
            ;
        }
        if ( v37 + 1 >= v33 || (unsigned __int8)(v38[v37 + 1] - 48) > 9u )
          goto LABEL_246;
        if ( i < v21 )
          v35[i] = 48;
        if ( v63 + 2 < v21 )
          v35[v63 + 2] = 48;
        LODWORD(v32) = 0;
        i = v63 + 3;
        if ( v108 )
          goto LABEL_117;
        goto LABEL_247;
      case 7:
        v52 = 97;
        goto LABEL_207;
      case 8:
        goto LABEL_207;
      case 9:
        goto LABEL_206;
      case 0xA:
        v51 = 110;
        goto LABEL_206;
      case 0xB:
        v52 = 118;
        goto LABEL_207;
      case 0xC:
        v52 = 102;
        goto LABEL_207;
      case 0xD:
        v51 = 114;
        goto LABEL_206;
      case 0x20:
        goto LABEL_193;
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
        goto LABEL_194;
      case 0x23:
      case 0x7E:
        if ( !v37 )
          goto LABEL_193;
        goto LABEL_245;
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
        goto LABEL_116;
      case 0x27:
        LOBYTE(v43) = 39;
        if ( v103 == shell_always_quoting_style )
        {
          if ( v96 )
          {
            v40 = 16;
            v123 = 1;
            goto LABEL_270;
          }
          v64 = v117;
          v65 = v21 != 0 && v117 == 0;
          if ( v21 != 0 && v117 == 0 )
            v64 = v21;
          v117 = v64;
          if ( v65 )
            v21 = 0LL;
          if ( i < v21 )
            v35[i] = 39;
          if ( i + 1 < v21 )
            v35[i + 1] = 92;
          v66 = x_31;
          v67 = y_32;
          if ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
          {
            while ( 1 )
              ;
          }
          if ( i + 2 < v21 )
          {
            do
            {
              v35[i + 2] = 39;
              v66 = x_31;
              v67 = y_32;
            }
            while ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 );
          }
          if ( v67 >= 10 && ((v66 * (v66 - 1)) & 1) != 0 )
          {
            while ( 1 )
              ;
          }
          i += 3LL;
          v123 = 1;
          v101 = 0;
        }
        else
        {
          v123 = 1;
        }
        v42 = 0;
        LOBYTE(v32) = 1;
        if ( v108 )
          goto LABEL_117;
        goto LABEL_247;
      case 0x3F:
        LOBYTE(v43) = 63;
        if ( v103 == c_quoting_style )
        {
          if ( v126 && v37 + 2 < v33 && v38[v37 + 1] == 63 )
          {
            v80 = (unsigned int)v38[v37 + 2];
            v42 = 0;
            if ( (unsigned int)v80 <= 0x3E )
            {
              v81 = 0x7000A38200000000LL;
              if ( _bittest64(&v81, v80) )
              {
                if ( !v96 )
                {
                  if ( i < v21 )
                  {
                    do
                    {
                      v35[i] = 63;
                      LOBYTE(v31) = x_31;
                      v100 = y_32;
                    }
                    while ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 );
                  }
                  if ( v100 >= 10 && (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
                  {
                    while ( 1 )
                      ;
                  }
                  if ( i + 1 < v21 )
                    v35[i + 1] = 34;
                  v82 = i + 2;
                  if ( i + 2 < v21 )
                  {
                    if ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
                      goto LABEL_62;
                    while ( 1 )
                    {
                      v35[v82] = 34;
                      if ( y_32 < 10 || (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) == 0 )
                        break;
LABEL_62:
                      v35[v82] = 34;
                    }
                  }
                  v41 = i + 3;
                  if ( i + 3 < v21 )
                  {
                    if ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
                      goto LABEL_68;
                    while ( 1 )
                    {
                      v35[v41] = 63;
                      if ( y_32 < 10 || (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) == 0 )
                        break;
LABEL_68:
                      v35[v41] = 63;
                    }
                  }
                  i += 4LL;
                  v42 = 0;
                  v37 += 2LL;
                  LOBYTE(v43) = v80;
                  goto LABEL_246;
                }
                goto LABEL_267;
              }
            }
          }
          else
          {
LABEL_245:
            v42 = 0;
          }
LABEL_246:
          LODWORD(v32) = 0;
          if ( v108 )
            goto LABEL_117;
          goto LABEL_247;
        }
        if ( v103 != shell_always_quoting_style )
          goto LABEL_245;
        v40 = 16;
        if ( !v96 )
          goto LABEL_245;
LABEL_270:
        LOBYTE(v32) = v15;
        v36 = v100;
        if ( v100 >= 10 )
          break;
        goto LABEL_72;
      case 0x5C:
        if ( v103 == shell_always_quoting_style )
        {
          v40 = 16;
          if ( v96 )
            goto LABEL_270;
          LOBYTE(v43) = 92;
          v42 = 0;
          goto LABEL_205;
        }
        v51 = 92;
        if ( v104 )
        {
          v42 = 0;
          LOBYTE(v43) = 92;
LABEL_205:
          LODWORD(v32) = 0;
          goto LABEL_345;
        }
LABEL_206:
        v52 = v51;
        if ( !v106 )
        {
LABEL_267:
          LOBYTE(v32) = v15;
          v36 = v100;
          v40 = 16;
          if ( v100 >= 10 )
            break;
          goto LABEL_72;
        }
LABEL_207:
        v42 = 0;
        LODWORD(v32) = 0;
        if ( v97 )
          goto LABEL_253;
LABEL_116:
        if ( !v108 )
          goto LABEL_247;
LABEL_117:
        if ( !quote_these_too )
          goto LABEL_250;
LABEL_248:
        v83 = quote_these_too[(unsigned __int8)v43 >> 5];
        if ( _bittest((const int *)&v83, (unsigned __int8)v43) )
        {
          v52 = v43;
LABEL_253:
          v31 = (unsigned int)x_31;
          v40 = 16;
          v36 = y_32;
          if ( v96 )
            goto LABEL_58;
          if ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
          {
            while ( 1 )
              ;
          }
          if ( v103 == shell_always_quoting_style )
          {
            v39 = v101;
            if ( (v101 & 1) == 0 )
            {
              if ( i < v21 )
              {
                do
                {
                  v35[i] = 39;
                  LOBYTE(v31) = x_31;
                  v36 = y_32;
                }
                while ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 );
              }
              v84 = i + 1;
              if ( i + 1 < v21 )
              {
                if ( v36 >= 10 )
                {
                  v39 = ((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1;
                  if ( (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
                    goto LABEL_77;
                }
                while ( 1 )
                {
                  v35[v84] = 36;
                  LOBYTE(v31) = x_31;
                  v36 = y_32;
                  if ( y_32 < 10 )
                    break;
                  v39 = ((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1;
                  if ( (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) == 0 )
                    break;
LABEL_77:
                  v35[v84] = 36;
                }
              }
              v44 = i + 2;
              if ( i + 2 < v21 )
              {
                if ( v36 >= 10 )
                {
                  v39 = ((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1;
                  if ( (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
                    goto LABEL_83;
                }
                while ( 1 )
                {
                  v35[v44] = 39;
                  LOBYTE(v31) = x_31;
                  v36 = y_32;
                  if ( y_32 < 10 )
                    break;
                  v39 = ((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1;
                  if ( (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) == 0 )
                    break;
LABEL_83:
                  v35[v44] = 39;
                }
              }
              i += 3LL;
              LOBYTE(v39) = 1;
            }
            if ( v36 >= 10 )
            {
LABEL_86:
              if ( (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
              {
                while ( 1 )
                  ;
              }
            }
          }
          else
          {
            v39 = v101;
            if ( y_32 >= 10 )
              goto LABEL_86;
          }
          if ( i < v21 )
            v35[i] = 92;
          ++i;
          LOBYTE(v43) = v52;
          goto LABEL_90;
        }
LABEL_250:
        LOBYTE(v31) = x_31;
        if ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
        {
          while ( 1 )
            ;
        }
        v100 = y_32;
        v52 = v43;
        if ( v50 )
          goto LABEL_253;
LABEL_345:
        v39 = v101;
        if ( (v101 & 1) != 0 )
        {
          v65 = (v42 & 1) == 0;
          v87 = v100;
          if ( v65 )
          {
            if ( i < v21 )
            {
              v35[i] = 39;
              LOBYTE(v31) = x_31;
              v87 = y_32;
            }
            if ( v87 >= 10 && (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
            {
              while ( 1 )
                ;
            }
            if ( i + 1 < v21 )
            {
              do
                v35[i + 1] = 39;
              while ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 );
            }
            i += 2LL;
            v39 = 0;
          }
        }
LABEL_90:
        v31 = (unsigned int)x_31;
        v36 = y_32;
        if ( i >= v21 )
          goto LABEL_96;
        if ( y_32 < 10 || (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) == 0 )
          goto LABEL_93;
        do
        {
          v35[i] = v43;
LABEL_93:
          v35[i] = v43;
          v31 = (unsigned int)x_31;
          v36 = y_32;
        }
        while ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 );
LABEL_96:
        v101 = v39;
        ++i;
        LOBYTE(v32) = v15 & -(char)v32;
        v40 = 0;
        if ( v36 >= 10 && (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
        {
          while ( 1 )
            ;
        }
        if ( v36 < 10 )
          goto LABEL_72;
        break;
      case 0x7B:
      case 0x7D:
        v42 = 0;
        if ( v33 == -1LL )
        {
          if ( v37 || v38[1] )
          {
            v33 = -1LL;
            goto LABEL_246;
          }
        }
        else if ( v37 || v33 != 1 )
        {
          goto LABEL_246;
        }
LABEL_193:
        v53 = 1;
LABEL_194:
        if ( v103 == shell_always_quoting_style )
        {
          v40 = 16;
          if ( v96 )
            goto LABEL_270;
        }
        v42 = 0;
        LOBYTE(v32) = v53;
        if ( v108 )
          goto LABEL_117;
        goto LABEL_247;
      default:
        v124 = i;
        v102 = v15;
        v130 = v21;
        if ( mb_cur_max == 1 )
        {
          v32 = v33;
          v68 = __ctype_b_loc();
          v33 = v32;
          v69 = *v68;
          LODWORD(v32) = v69[v43] >> 14;
          LOBYTE(v32) = (v69[v43] & 0x4000) != 0;
          v70 = 1LL;
          v36 = v100;
          goto LABEL_287;
        }
        v125 = v50;
        ps = 0LL;
        if ( v33 == -1LL )
          v33 = strlen(v38);
        v71 = (_DWORD)v38 + v37;
        v129 = &v38[v37];
        LOBYTE(v71) = 1;
        v70 = 0LL;
        v116 = v37;
        while ( 2 )
        {
          v98 = v71;
          v72 = v70;
          v73 = v70 + v37;
          v74 = &v38[v70 + v37];
          v75 = v33;
          v76 = rpl_mbrtowc(&pwc, v74, v33 - v73, &ps);
          if ( !v76 )
          {
            v38 = arg;
            v33 = v75;
            v37 = v116;
            v70 = v72;
            LODWORD(v32) = v98;
LABEL_281:
            v115 = 0;
            goto LABEL_282;
          }
          if ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
          {
            while ( 1 )
              ;
          }
          if ( v76 == -1LL )
          {
            LODWORD(v32) = 0;
            v38 = arg;
            v33 = v75;
LABEL_280:
            v37 = v116;
            v70 = v72;
            goto LABEL_281;
          }
          v33 = v75;
          if ( v76 == -2LL )
          {
            if ( v75 > v73 )
            {
              v38 = arg;
              v37 = v116;
              v70 = v72;
              do
              {
                if ( !v129[v70] )
                  break;
                v85 = v116 + v70++ + 1;
              }
              while ( v85 < v33 );
              LODWORD(v32) = 0;
              goto LABEL_281;
            }
            LODWORD(v32) = 0;
            v38 = arg;
            goto LABEL_280;
          }
          v77 = 0x20000002BLL;
          if ( (v105 & (v76 > 1)) != 1 )
          {
LABEL_222:
            v115 = 0;
            LODWORD(v32) = 0;
            if ( iswprint(pwc) )
              LODWORD(v32) = v98;
            v71 = mbsinit(&ps);
            v70 = v76 + v72;
            v65 = v71 == 0;
            LOBYTE(v71) = v32;
            v38 = arg;
            v33 = v75;
            v37 = v116;
            if ( !v65 )
              goto LABEL_282;
            continue;
          }
          break;
        }
        v78 = 1LL;
        while ( 1 )
        {
          v79 = (unsigned int)(v129[v72 + v78] - 91);
          if ( (unsigned int)v79 <= 0x21 )
          {
            if ( _bittest64(&v77, v79) )
              break;
          }
          if ( ++v78 >= v76 )
            goto LABEL_222;
        }
        v115 = 16;
        LODWORD(v32) = v98;
        v38 = arg;
        v37 = v116;
        v70 = v72;
LABEL_282:
        v31 = (unsigned int)x_31;
        v36 = y_32;
        if ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
        {
          while ( 1 )
            ;
        }
        v50 = v125;
        if ( v115 )
        {
          LOBYTE(v32) = v102;
          v35 = buffer;
          v21 = v130;
          i = v124;
          v40 = v115;
          if ( y_32 >= 10 )
            break;
          goto LABEL_72;
        }
LABEL_287:
        LOBYTE(v15) = v102;
        if ( v36 >= 10 && (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
        {
          while ( 1 )
            ;
        }
        LOBYTE(v32) = v32 & 1;
        v21 = v130;
        if ( v70 > 1 || !(((v113 & 1) == 0) | (unsigned __int8)v32) )
        {
          v99 = v37 + v70;
          v42 = 0;
          v35 = buffer;
          for ( i = v124; ; ++i )
          {
            v86 = v101;
            if ( !v97 )
              goto LABEL_430;
            if ( v36 >= 10 )
            {
              v86 = v101;
              if ( (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
              {
                while ( 1 )
                  ;
              }
            }
            if ( !(_BYTE)v32 )
            {
              if ( v96 )
              {
                v40 = 16;
                goto LABEL_58;
              }
              if ( v103 == shell_always_quoting_style && (v86 & 1) == 0 )
              {
                if ( i < v21 )
                {
                  do
                  {
                    buffer[i] = 39;
                    LOBYTE(v31) = x_31;
                    v36 = y_32;
                  }
                  while ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 );
                }
                if ( i + 1 < v21 )
                {
                  buffer[i + 1] = 36;
                  LOBYTE(v31) = x_31;
                  v36 = y_32;
                }
                if ( v36 >= 10 && (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
                {
                  while ( 1 )
                    ;
                }
                if ( i + 2 < v21 )
                {
                  do
                  {
                    buffer[i + 2] = 39;
                    LOBYTE(v31) = x_31;
                    v36 = y_32;
                    if ( y_32 < 10 )
                      break;
                    v86 = ((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1;
                  }
                  while ( (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 );
                }
                if ( v36 >= 10 && (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
                {
                  while ( 1 )
                    ;
                }
                i += 3LL;
                LOBYTE(v86) = 1;
              }
              if ( i < v21 )
              {
                buffer[i] = 92;
                LOBYTE(v31) = x_31;
                v36 = y_32;
              }
              if ( v36 >= 10 && (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
              {
                while ( 1 )
                  ;
              }
              v101 = v86;
              if ( i + 1 < v21 )
              {
                do
                  buffer[i + 1] = ((unsigned __int8)v43 >> 6) | 0x30;
                while ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 );
              }
              if ( i + 2 < v21 )
                buffer[i + 2] = ((unsigned __int8)v43 >> 3) & 7 | 0x30;
              i += 3LL;
              LOBYTE(v43) = v43 & 7 | 0x30;
              v42 = 1;
            }
            else
            {
LABEL_430:
              if ( v50 )
              {
                if ( i < v21 )
                  buffer[i] = 92;
                ++i;
                v50 = 0;
              }
            }
            LOBYTE(v31) = x_31;
            if ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
            {
              while ( 1 )
                ;
            }
            if ( v99 <= v37 + 1 )
              break;
            if ( (v101 & 1) != 0 && (v42 & 1) == 0 )
            {
              if ( i < v21 )
                buffer[i] = 39;
              if ( i + 1 < v21 )
                buffer[i + 1] = 39;
              i += 2LL;
              v101 = 0;
            }
            if ( i < v21 )
              buffer[i] = v43;
            v31 = (unsigned int)x_31;
            v36 = y_32;
            if ( y_32 >= 10 && (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) != 0 )
            {
              while ( 1 )
                ;
            }
            LOBYTE(v43) = v38[++v37];
          }
          v100 = y_32;
          goto LABEL_345;
        }
        v42 = 0;
        v35 = buffer;
        i = v124;
        if ( v108 )
          goto LABEL_117;
LABEL_247:
        if ( v107 )
          goto LABEL_248;
        goto LABEL_250;
    }
LABEL_71:
    if ( (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
    {
      while ( 1 )
        ;
    }
LABEL_72:
    if ( v40 && v40 != 15 )
      break;
    ++v37;
    v15 = v32;
  }
  v100 = v36;
  LODWORD(v13) = v103;
LABEL_394:
  v88 = shell_escape_always_quoting_style;
  if ( !v97 )
    v88 = (int)v13;
  if ( (_DWORD)v13 != 2 )
    v88 = (int)v13;
  v89 = v122 & 0xFFFFFFFD;
  v90 = v21;
  v91 = v33;
  if ( v100 >= 10 && (((_BYTE)v31 * ((_BYTE)v31 - 1)) & 1) != 0 )
    goto LABEL_426;
  while ( 1 )
  {
    i = quotearg_buffer_restyled(v35, v21, arg, v33, v88, v89, 0LL, v119, right_quote);
    if ( y_32 < 10 )
      break;
    v35 = buffer;
    v21 = v90;
    v33 = v91;
    if ( (((_BYTE)x_31 * ((_BYTE)x_31 - 1)) & 1) == 0 )
      break;
LABEL_426:
    quotearg_buffer_restyled(v35, v21, arg, v33, v88, v89, 0LL, v119, right_quote);
    v33 = v91;
    v21 = v90;
    v35 = buffer;
  }
  return i;
}

char *__fastcall quotearg_alloc(const char *arg, size_t argsize, const quoting_options *o)
{
  const quoting_options *v3; // r14
  int v4; // ebp
  size_t v5; // rbx
  char *v6; // r13
  int v8; // [rsp+4h] [rbp-44h]
  int *v9; // [rsp+10h] [rbp-38h]

  v3 = &default_quoting_options;
  if ( o )
    v3 = o;
  v9 = __errno_location();
  v8 = *v9;
  v4 = v3->flags | 1;
  v5 = quotearg_buffer_restyled(
         0LL,
         0LL,
         arg,
         argsize,
         v3->style,
         v4,
         v3->quote_these_too,
         (char *)v3->left_quote,
         v3->right_quote)
     + 1;
  v6 = (char *)xmalloc(v5);
  quotearg_buffer_restyled(
    v6,
    v5,
    arg,
    argsize,
    v3->style,
    v4,
    v3->quote_these_too,
    (char *)v3->left_quote,
    v3->right_quote);
  *v9 = v8;
  return v6;
}

char *__fastcall quotearg_alloc_mem(const char *arg, size_t argsize, size_t *size, const quoting_options *o)
{
  const quoting_options *v5; // r12
  int v6; // ebp
  size_t v7; // rbx
  char *v8; // r14
  int v10; // [rsp+4h] [rbp-54h]
  int *v12; // [rsp+20h] [rbp-38h]

  v5 = &default_quoting_options;
  if ( o )
    v5 = o;
  v12 = __errno_location();
  v10 = *v12;
  v6 = v5->flags | (size == 0LL);
  v7 = quotearg_buffer_restyled(
         0LL,
         0LL,
         arg,
         argsize,
         v5->style,
         v6,
         v5->quote_these_too,
         (char *)v5->left_quote,
         v5->right_quote);
  v8 = (char *)xmalloc(v7 + 1);
  quotearg_buffer_restyled(
    v8,
    v7 + 1,
    arg,
    argsize,
    v5->style,
    v6,
    v5->quote_these_too,
    (char *)v5->left_quote,
    v5->right_quote);
  *v12 = v10;
  if ( size )
    *size = v7;
  return v8;
}

void __cdecl quotearg_free()
{
  slotvec *v0; // r14
  char v1; // al
  int v2; // ecx
  void **p_val; // rbx
  __int64 i; // r15
  char *val; // rdi
  char v6; // al
  int v7; // ecx

  v0 = slotvec_0;
  if ( nslots >= 2 )
  {
    v1 = x_37;
    v2 = y_38;
    p_val = (void **)&slotvec_0[1].val;
    for ( i = 1LL; i < nslots; ++i )
    {
      if ( v2 >= 10 && ((v1 * (v1 - 1)) & 1) != 0 )
LABEL_7:
        free(*p_val);
      free(*p_val);
      v1 = x_37;
      v2 = y_38;
      if ( y_38 >= 10 && (((_BYTE)x_37 * ((_BYTE)x_37 - 1)) & 1) != 0 )
        goto LABEL_7;
      p_val += 2;
    }
  }
  val = v0->val;
  if ( val != slot0 )
  {
    free(val);
    slotvec0.size = 256LL;
    slotvec0.val = slot0;
  }
  v6 = x_37;
  v7 = y_38;
  if ( v0 != &slotvec0 )
  {
    if ( y_38 >= 10 && (((_BYTE)x_37 * ((_BYTE)x_37 - 1)) & 1) != 0 )
      goto LABEL_16;
    while ( 1 )
    {
      free(v0);
      slotvec_0 = &slotvec0;
      v6 = x_37;
      v7 = y_38;
      if ( y_38 < 10 || (((_BYTE)x_37 * ((_BYTE)x_37 - 1)) & 1) == 0 )
        break;
LABEL_16:
      free(v0);
      slotvec_0 = &slotvec0;
    }
  }
  if ( v7 >= 10 && ((v6 * (v6 - 1)) & 1) != 0 )
    goto LABEL_21;
  while ( 1 )
  {
    nslots = 1;
    if ( v7 < 10 || ((v6 * (v6 - 1)) & 1) == 0 )
      break;
LABEL_21:
    nslots = 1;
  }
}

char *__fastcall quotearg_n(int n, const char *arg)
{
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &default_quoting_options);
}

char *__fastcall quotearg_n_options(int n, const char *arg, size_t argsize, const quoting_options *options)
{
  const char *v6; // rbx
  int *v8; // rax
  slotvec *v9; // r15
  slotvec *v10; // rdi
  slotvec *v11; // rax
  slotvec *v12; // r14
  __int64 v13; // r13
  size_t size; // r14
  size_t v15; // r12
  int *v16; // rax
  int v17; // ecx
  char *v18; // rbx
  slotvec *v19; // rax
  size_t v20; // r12
  int v22; // [rsp+0h] [rbp-68h]
  int v23; // [rsp+4h] [rbp-64h]
  char *ptr; // [rsp+8h] [rbp-60h]
  size_t v25; // [rsp+18h] [rbp-50h]
  int *v26; // [rsp+20h] [rbp-48h]

  v6 = arg;
  if ( y_42 >= 10 && (((_BYTE)x_41 * ((_BYTE)x_41 - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
  v8 = __errno_location();
  if ( n < 0 )
    abort();
  v9 = slotvec_0;
  v25 = argsize;
  v26 = v8;
  v22 = *v8;
  if ( nslots <= n )
  {
    if ( n == 0x7FFFFFFF )
      xalloc_die();
    v10 = 0LL;
    if ( slotvec_0 != &slotvec0 )
      v10 = slotvec_0;
    v11 = (slotvec *)xrealloc(v10, 16LL * n + 16);
    v12 = v11;
    slotvec_0 = v11;
    if ( v9 == &slotvec0 )
      *v11 = slotvec0;
    memset(&v11[nslots], 0, 16 * (n + 1 - (__int64)nslots));
    nslots = n + 1;
    v9 = v12;
    v6 = arg;
  }
  v13 = n;
  size = v9[v13].size;
  ptr = v9[v13].val;
  v23 = options->flags | 1;
  v15 = quotearg_buffer_restyled(
          ptr,
          size,
          v6,
          argsize,
          options->style,
          v23,
          options->quote_these_too,
          (char *)options->left_quote,
          options->right_quote);
  if ( size <= v15 )
  {
    v19 = &v9[v13];
    v20 = v15 + 1;
    if ( y_42 >= 10 && (((_BYTE)x_41 * ((_BYTE)x_41 - 1)) & 1) != 0 )
      goto LABEL_21;
    while ( 1 )
    {
      v19->size = v20;
      if ( y_42 < 10 || (((_BYTE)x_41 * ((_BYTE)x_41 - 1)) & 1) == 0 )
        break;
LABEL_21:
      v19->size = v20;
    }
    if ( ptr != slot0 )
      free(ptr);
    v18 = (char *)xmalloc(v20);
    v9[v13].val = v18;
    quotearg_buffer_restyled(
      v18,
      v20,
      arg,
      v25,
      options->style,
      v23,
      options->quote_these_too,
      (char *)options->left_quote,
      options->right_quote);
    v16 = v26;
    v17 = v22;
  }
  else
  {
    v16 = v26;
    v17 = v22;
    v18 = ptr;
  }
  *v16 = v17;
  return v18;
}

char *__fastcall quotearg_n_mem(int n, const char *arg, size_t argsize)
{
  return quotearg_n_options(n, arg, argsize, &default_quoting_options);
}

char *__fastcall quotearg(const char *arg)
{
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &default_quoting_options);
}

char *__fastcall quotearg_mem(const char *arg, size_t argsize)
{
  return quotearg_n_options(0, arg, argsize, &default_quoting_options);
}

char *__fastcall quotearg_n_style(int n, quoting_style s, const char *arg)
{
  __int128 *v4; // rcx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  char *result; // rax
  __int128 *v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // [rsp+0h] [rbp-50h] BYREF
  __int128 v12; // [rsp+10h] [rbp-40h]
  __int128 v13; // [rsp+20h] [rbp-30h]
  int v14; // [rsp+30h] [rbp-20h]

  if ( y_50 >= 10 && (((_BYTE)x_49 * ((_BYTE)x_49 - 1)) & 1) != 0 )
    goto LABEL_6;
  while ( 1 )
  {
    v4 = &v11 - 4;
    v13 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
    v14 = 0;
    if ( s == custom_quoting_style )
      abort();
    *(_DWORD *)v4 = s;
    *((_DWORD *)v4 + 13) = v14;
    v5 = v11;
    v6 = v12;
    *(__int128 *)((char *)v4 + 36) = v13;
    *(__int128 *)((char *)v4 + 20) = v6;
    *(__int128 *)((char *)v4 + 4) = v5;
    result = quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, (const quoting_options *)v4);
    if ( y_50 < 10 || (((_BYTE)x_49 * ((_BYTE)x_49 - 1)) & 1) == 0 )
      break;
LABEL_6:
    v8 = &v11 - 4;
    v13 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
    v14 = 0;
    if ( s == custom_quoting_style )
      abort();
    *(_DWORD *)v8 = s;
    *((_DWORD *)v8 + 13) = v14;
    v9 = v11;
    v10 = v12;
    *(__int128 *)((char *)v8 + 36) = v13;
    *(__int128 *)((char *)v8 + 20) = v10;
    *(__int128 *)((char *)v8 + 4) = v9;
    quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, (const quoting_options *)v8);
  }
  return result;
}

char *__fastcall quotearg_n_style_mem(int n, quoting_style s, const char *arg, size_t argsize)
{
  quoting_options options; // [rsp+40h] [rbp-38h] BYREF

  if ( s == custom_quoting_style )
    abort();
  options.style = s;
  memset(&options.flags, 0, 52);
  return quotearg_n_options(n, arg, argsize, &options);
}

char *__fastcall quotearg_style(quoting_style s, const char *arg)
{
  return quotearg_n_style(0, s, arg);
}

char *__fastcall quotearg_style_mem(quoting_style s, const char *arg, size_t argsize)
{
  quoting_options options; // [rsp+40h] [rbp-38h] BYREF

  if ( s == custom_quoting_style )
    abort();
  options.style = s;
  memset(&options.flags, 0, 52);
  return quotearg_n_options(0, arg, argsize, &options);
}

char *__fastcall quotearg_char_mem(const char *arg, size_t argsize, unsigned __int8 ch_0)
{
  char v3; // bl
  __int64 v4; // r12
  char *result; // rax
  _DWORD v6[8]; // [rsp+0h] [rbp-20h] BYREF

  v3 = ch_0 & 0x1F;
  v4 = ch_0 >> 5;
  if ( y_60 >= 10 && (((_BYTE)x_59 * ((_BYTE)x_59 - 1)) & 1) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    *(quoting_options *)&v6[-16] = default_quoting_options;
    v6[v4 - 14] ^= (((v6[v4 - 14] >> v3) & 1) == 0) << v3;
    result = quotearg_n_options(0, arg, argsize, (const quoting_options *)&v6[-16]);
    if ( y_60 < 10 || (((_BYTE)x_59 * ((_BYTE)x_59 - 1)) & 1) == 0 )
      break;
LABEL_5:
    *(quoting_options *)&v6[-16] = default_quoting_options;
    v6[v4 - 14] ^= (((v6[v4 - 14] >> v3) & 1) == 0) << v3;
    quotearg_n_options(0, arg, argsize, (const quoting_options *)&v6[-16]);
  }
  return result;
}

char *__fastcall quotearg_char(const char *arg, char ch_0)
{
  return quotearg_char_mem(arg, 0xFFFFFFFFFFFFFFFFLL, ch_0);
}

char *__fastcall quotearg_colon(const char *arg)
{
  return quotearg_char_mem(arg, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

char *__fastcall quotearg_colon_mem(const char *arg, size_t argsize)
{
  char *result; // rax

  if ( y_66 >= 10 && (((_BYTE)x_65 * ((_BYTE)x_65 - 1)) & 1) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    result = quotearg_char_mem(arg, argsize, 0x3Au);
    if ( y_66 < 10 || (((_BYTE)x_65 * ((_BYTE)x_65 - 1)) & 1) == 0 )
      break;
LABEL_5:
    quotearg_char_mem(arg, argsize, 0x3Au);
  }
  return result;
}

char *__fastcall quotearg_n_style_colon(int n, quoting_style s, const char *arg)
{
  quoting_options v4; // [rsp+0h] [rbp-78h] BYREF
  __int128 v5; // [rsp+40h] [rbp-38h]
  __int128 v6; // [rsp+50h] [rbp-28h]
  __int128 v7; // [rsp+60h] [rbp-18h]
  int right_quote; // [rsp+70h] [rbp-8h]

  memset(&v4, 0, 52);
  if ( s == custom_quoting_style )
    abort();
  right_quote = (int)v4.right_quote;
  v7 = *(_OWORD *)&v4.quote_these_too[6];
  v6 = *(_OWORD *)&v4.quote_these_too[2];
  v5 = *(_OWORD *)&v4.style;
  v4.style = s;
  HIDWORD(v4.right_quote) = v4.right_quote;
  *(_OWORD *)&v4.quote_these_too[7] = *(_OWORD *)&v4.quote_these_too[6];
  *(_OWORD *)&v4.quote_these_too[3] = *(_OWORD *)&v4.quote_these_too[2];
  *(_OWORD *)&v4.flags = v5;
  HIBYTE(v4.quote_these_too[1]) = BYTE11(v5) | 4;
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &v4);
}

char *__fastcall quotearg_n_custom(int n, const char *left_quote, const char *right_quote, const char *arg)
{
  quoting_options v5; // [rsp+0h] [rbp-38h] BYREF

  v5 = default_quoting_options;
  v5.style = custom_quoting_style;
  if ( !left_quote || !right_quote )
    abort();
  v5.left_quote = left_quote;
  v5.right_quote = right_quote;
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &v5);
}

char *__fastcall quotearg_n_custom_mem(
        int n,
        const char *left_quote,
        const char *right_quote,
        const char *arg,
        size_t argsize)
{
  quoting_options v6; // [rsp+0h] [rbp-38h] BYREF

  v6 = default_quoting_options;
  v6.style = custom_quoting_style;
  if ( !left_quote || !right_quote )
    abort();
  v6.left_quote = left_quote;
  v6.right_quote = right_quote;
  return quotearg_n_options(n, arg, argsize, &v6);
}

char *__fastcall quotearg_custom(const char *left_quote, const char *right_quote, const char *arg)
{
  quoting_options v4; // [rsp+0h] [rbp-38h] BYREF

  v4 = default_quoting_options;
  v4.style = custom_quoting_style;
  if ( !left_quote || !right_quote )
    abort();
  v4.left_quote = left_quote;
  v4.right_quote = right_quote;
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &v4);
}

char *__fastcall quotearg_custom_mem(const char *left_quote, const char *right_quote, const char *arg, size_t argsize)
{
  quoting_options v5; // [rsp+0h] [rbp-38h] BYREF

  v5 = default_quoting_options;
  v5.style = custom_quoting_style;
  if ( !left_quote || !right_quote )
    abort();
  v5.left_quote = left_quote;
  v5.right_quote = right_quote;
  return quotearg_n_options(0, arg, argsize, &v5);
}

const char *__fastcall quote_n_mem(int n, const char *arg, size_t argsize)
{
  const char *result; // rax

  if ( y_78 >= 10 && (((_BYTE)x_77 * ((_BYTE)x_77 - 1)) & 1) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    result = quotearg_n_options(n, arg, argsize, &quote_quoting_options);
    if ( y_78 < 10 || (((_BYTE)x_77 * ((_BYTE)x_77 - 1)) & 1) == 0 )
      break;
LABEL_5:
    quotearg_n_options(n, arg, argsize, &quote_quoting_options);
  }
  return result;
}

const char *__fastcall quote_mem(const char *arg, size_t argsize)
{
  const char *result; // rax

  if ( y_78 >= 10 && (((_BYTE)x_77 * ((_BYTE)x_77 - 1)) & 1) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    result = quotearg_n_options(0, arg, argsize, &quote_quoting_options);
    if ( y_78 < 10 || (((_BYTE)x_77 * ((_BYTE)x_77 - 1)) & 1) == 0 )
      break;
LABEL_5:
    quotearg_n_options(0, arg, argsize, &quote_quoting_options);
  }
  return result;
}

const char *__fastcall quote_n(int n, const char *arg)
{
  const char *result; // rax

  if ( y_78 >= 10 && (((_BYTE)x_77 * ((_BYTE)x_77 - 1)) & 1) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    result = quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &quote_quoting_options);
    if ( y_78 < 10 || (((_BYTE)x_77 * ((_BYTE)x_77 - 1)) & 1) == 0 )
      break;
LABEL_5:
    quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &quote_quoting_options);
  }
  return result;
}

const char *__fastcall quote(const char *arg)
{
  const char *result; // rax

  if ( y_78 >= 10 && (((_BYTE)x_77 * ((_BYTE)x_77 - 1)) & 1) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    result = quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &quote_quoting_options);
    if ( y_78 < 10 || (((_BYTE)x_77 * ((_BYTE)x_77 - 1)) & 1) == 0 )
      break;
LABEL_5:
    quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &quote_quoting_options);
  }
  return result;
}

const char *__fastcall gettext_quote(const char *msgid, quoting_style s)
{
  const char *result; // rax
  const char *v3; // rbp
  bool v4; // zf
  const char *v5; // rcx
  char v6; // [rsp+0h] [rbp-18h]
  char v7; // [rsp+0h] [rbp-18h]
  char v8; // [rsp+8h] [rbp-10h]
  char v9; // [rsp+8h] [rbp-10h]
  char v10; // [rsp+10h] [rbp-8h]
  char v11; // [rsp+10h] [rbp-8h]

  result = dcgettext(0LL, msgid, 5);
  if ( result == msgid )
  {
    v3 = locale_charset();
    if ( strcaseeq0(v3, (const char *)0x55, 84, 70, 45, 56, 0, 0, v6, v8, v10) )
    {
      v4 = *msgid == 96;
      v5 = (const char *)&unk_40899C;
      result = (const char *)&unk_4089A0;
    }
    else
    {
      if ( y_86 >= 10 && (((_BYTE)x_85 * ((_BYTE)x_85 - 1)) & 1) != 0 )
      {
        while ( 1 )
          ;
      }
      if ( strcaseeq0(v3, (const char *)0x47, 66, 49, 56, 48, 51, 48, v7, v9, v11) )
      {
        v4 = *msgid == 96;
        v5 = (const char *)&unk_4089A4;
        result = (const char *)&unk_4089A8;
      }
      else
      {
        v4 = s == clocale_quoting_style;
        v5 = "\"";
        result = "'";
      }
    }
    if ( v4 )
      result = v5;
  }
  if ( y_86 >= 10 && (((_BYTE)x_85 * ((_BYTE)x_85 - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
  return result;
}

__int64 __fastcall strcaseeq0(
        const char *s1,
        const char *s2,
        char s20,
        unsigned __int8 s21,
        unsigned __int8 s22,
        unsigned __int8 s23,
        unsigned __int8 s24,
        unsigned __int8 s25)
{
  int v8; // ebp
  __int64 result; // rax
  int v10; // esi
  bool v11; // r15
  bool v12; // r13
  __int64 v13; // rbx
  int v14; // edx
  int v15; // ebp
  bool v16; // r14
  __int64 v17; // r10
  int v18; // ebx
  unsigned int v19; // ebx
  bool v20; // zf
  int v21; // ebx
  unsigned int v22; // ebx
  int v23; // ebx
  unsigned int v24; // ebx
  int v25; // ebx
  unsigned int v26; // ebx
  bool v27; // [rsp+0h] [rbp-6Ch]
  unsigned int v28; // [rsp+18h] [rbp-54h]

  if ( y_88 >= 10 && (((_BYTE)x_87 * ((_BYTE)x_87 - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
  v8 = *s1;
  if ( (unsigned int)((char)s2 - 65) > 0x19 )
  {
    result = 0LL;
    if ( (_BYTE)v8 != (_BYTE)s2 )
      return result;
  }
  else
  {
    result = 0LL;
    if ( (v8 & 0xFFFFFFDF) != (char)s2 )
      return result;
  }
  if ( !(_BYTE)s2 )
    return 1LL;
  v10 = s1[1];
  if ( (unsigned int)(s20 - 65) > 0x19 )
  {
    result = 0LL;
    if ( (_BYTE)v10 != s20 )
      return result;
  }
  else
  {
    result = 0LL;
    if ( (v10 & 0xFFFFFFDF) != s20 )
      return result;
  }
  if ( s20 )
  {
    v27 = (((_BYTE)x_99 * ((_BYTE)x_99 - 1)) & 1) == 0 || y_100 < 10;
    v11 = (((_BYTE)x_89 * ((_BYTE)x_89 - 1)) & 1) == 0 || y_90 < 10;
    v12 = (((_BYTE)x_91 * ((_BYTE)x_91 - 1)) & 1) == 0 || y_92 < 10;
    v13 = (unsigned int)(char)s25;
    v14 = (char)s24;
    v15 = (char)s23;
    v28 = v13 - 65;
    while ( (unsigned int)((char)s21 - 65) < 0x1A )
    {
      if ( (s1[2] & 0xFFFFFFDF) == (char)s21 )
      {
        if ( !v12 )
        {
          while ( 1 )
            ;
        }
        if ( s21 )
        {
LABEL_23:
          v17 = v13;
          v18 = s1[3];
          if ( (unsigned int)((char)s22 - 65) >= 0x1A )
          {
            if ( (((_BYTE)x_93 * ((_BYTE)x_93 - 1)) & 1) != 0 && y_94 >= 10 )
            {
              while ( 1 )
                ;
            }
            v16 = (_BYTE)v18 == s22;
            if ( s22 )
            {
              v20 = (_BYTE)v18 == s22;
              v13 = v17;
              if ( !v20 )
                goto LABEL_65;
              goto LABEL_33;
            }
            v13 = v17;
            if ( v11 )
              return v16;
          }
          else
          {
            v19 = v18 & 0xFFFFFFDF;
            v16 = v19 == (char)s22;
            if ( !s22 )
              goto LABEL_63;
            v20 = v19 == (char)s22;
            v15 = (char)s23;
            v14 = (char)s24;
            v13 = v17;
            if ( !v20 )
              goto LABEL_65;
LABEL_33:
            v21 = s1[4];
            if ( (unsigned int)((char)s23 - 65) > 0x19 )
            {
              v16 = (_BYTE)v21 == s23;
              if ( s23 )
              {
                v20 = (_BYTE)v21 == s23;
                v13 = v17;
                if ( !v20 )
                  goto LABEL_65;
LABEL_39:
                v23 = s1[5];
                if ( (unsigned int)((char)s24 - 65) > 0x19 )
                {
                  v16 = (_BYTE)v23 == s24;
                  if ( !s24 )
                    goto LABEL_64;
                  v20 = (_BYTE)v23 == s24;
                  v14 = (char)s24;
                  v13 = v17;
                  if ( !v20 )
                    goto LABEL_65;
                  goto LABEL_46;
                }
                if ( (((_BYTE)x_97 * ((_BYTE)x_97 - 1)) & 1) != 0 && y_98 >= 10 )
                {
                  while ( 1 )
                    ;
                }
                v24 = v23 & 0xFFFFFFDF;
                v16 = v24 == v14;
                if ( s24 )
                {
                  v20 = v24 == v14;
                  v13 = v17;
                  if ( !v20 )
                    goto LABEL_65;
LABEL_46:
                  v25 = s1[6];
                  if ( v28 > 0x19 )
                  {
                    v16 = (_BYTE)v25 == s25;
                    if ( !s25 )
                    {
LABEL_63:
                      v15 = (char)s23;
LABEL_64:
                      v14 = (char)s24;
                      v13 = v17;
                      goto LABEL_65;
                    }
                    v20 = (_BYTE)v25 == s25;
                    v15 = (char)s23;
                    v14 = (char)s24;
                    v13 = v17;
                    if ( v20 )
                      goto LABEL_59;
LABEL_65:
                    if ( v11 )
                      return v16;
                  }
                  else
                  {
                    if ( !v27 )
                    {
                      while ( 1 )
                        ;
                    }
                    v26 = v25 & 0xFFFFFFDF;
                    v16 = v26 == (_DWORD)v17;
                    if ( s25 )
                    {
                      v20 = v26 == (_DWORD)v17;
                      v13 = v17;
                      if ( !v20 )
                        goto LABEL_65;
LABEL_59:
                      if ( (((_BYTE)x_101 * ((_BYTE)x_101 - 1)) & 1) != 0 && y_102 >= 10 )
                      {
                        while ( 1 )
                          ;
                      }
                      if ( !v27 )
                      {
                        while ( 1 )
                          ;
                      }
                      v16 = s1[7] == 0;
                      if ( v11 )
                        return v16;
                    }
                    else
                    {
                      v13 = v17;
                      if ( v11 )
                        return v16;
                    }
                  }
                }
                else
                {
                  v13 = v17;
                  if ( v11 )
                    return v16;
                }
              }
              else
              {
                v13 = v17;
                if ( v11 )
                  return v16;
              }
            }
            else
            {
              v22 = v21 & 0xFFFFFFDF;
              v16 = v22 == v15;
              if ( s23 )
              {
                v20 = v22 == v15;
                v13 = v17;
                if ( !v20 )
                  goto LABEL_65;
                goto LABEL_39;
              }
              v13 = v17;
              if ( v11 )
                return v16;
            }
          }
        }
        else
        {
          v16 = 1;
          if ( v11 )
            return v16;
        }
      }
      else
      {
        if ( !v12 )
        {
          while ( 1 )
            ;
        }
        v16 = 0;
        if ( v11 )
          return v16;
      }
    }
    if ( !v12 )
    {
      while ( 1 )
        ;
    }
    v16 = s1[2] == s21;
    if ( s21 == 0 || s1[2] != s21 )
      goto LABEL_65;
    goto LABEL_23;
  }
  if ( y_90 < 10 )
    return 1LL;
  result = 1LL;
  if ( (((_BYTE)x_89 * ((_BYTE)x_89 - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
  return result;
}

void __fastcall version_etc_arn(
        FILE *stream,
        const char *command_name,
        const char *package,
        const char *version,
        const char *const *authors,
        size_t n_authors)
{
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax

  if ( command_name )
  {
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", command_name);
  }
  else
  {
    if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      __fprintf_chk(stream, 1LL, "%s %s\n", package);
      if ( y < 10 || (((_BYTE)x * ((_BYTE)x - 1)) & 1) == 0 )
        break;
LABEL_7:
      __fprintf_chk(stream, 1LL, "%s %s\n", package);
    }
  }
  v9 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v9);
  v10 = dcgettext(
          0LL,
          "\n"
          "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
          "This is free software: you are free to change and redistribute it.\n"
          "There is NO WARRANTY, to the extent permitted by law.\n"
          "\n",
          5);
  fputs_unlocked(v10, stream);
  switch ( n_authors )
  {
    case 0uLL:
      return;
    case 1uLL:
      v11 = dcgettext(0LL, "Written by %s.\n", 5);
      __fprintf_chk(stream, 1LL, v11, *authors);
      break;
    case 2uLL:
      v12 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      __fprintf_chk(stream, 1LL, v12, *authors);
      break;
    case 3uLL:
      if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
        goto LABEL_29;
      while ( 1 )
      {
        v17 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
        __fprintf_chk(stream, 1LL, v17, *authors);
        if ( y < 10 || (((_BYTE)x * ((_BYTE)x - 1)) & 1) == 0 )
          break;
LABEL_29:
        v18 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
        __fprintf_chk(stream, 1LL, v18, *authors);
      }
      break;
    case 4uLL:
      v13 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      __fprintf_chk(stream, 1LL, v13, *authors);
      break;
    case 5uLL:
      v14 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
      __fprintf_chk(stream, 1LL, v14, *authors);
      break;
    case 6uLL:
      if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
        goto LABEL_32;
      while ( 1 )
      {
        v19 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
        __fprintf_chk(stream, 1LL, v19, *authors);
        if ( y < 10 || (((_BYTE)x * ((_BYTE)x - 1)) & 1) == 0 )
          break;
LABEL_32:
        v20 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
        __fprintf_chk(stream, 1LL, v20, *authors);
      }
      break;
    case 7uLL:
      v15 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      __fprintf_chk(stream, 1LL, v15, *authors);
      break;
    case 8uLL:
      if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
        goto LABEL_35;
      while ( 1 )
      {
        v21 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
        __fprintf_chk(stream, 1LL, v21, *authors);
        if ( y < 10 || (((_BYTE)x * ((_BYTE)x - 1)) & 1) == 0 )
          break;
LABEL_35:
        v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
        __fprintf_chk(stream, 1LL, v22, *authors);
      }
      break;
    case 9uLL:
      v16 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n", 5);
      __fprintf_chk(stream, 1LL, v16, *authors);
      break;
    default:
      if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
        goto LABEL_38;
      while ( 1 )
      {
        v23 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5);
        __fprintf_chk(stream, 1LL, v23, *authors);
        if ( y < 10 || (((_BYTE)x * ((_BYTE)x - 1)) & 1) == 0 )
          break;
LABEL_38:
        v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5);
        __fprintf_chk(stream, 1LL, v24, *authors);
      }
      break;
  }
}

void __fastcall version_etc_ar(
        FILE *stream,
        const char *command_name,
        const char *package,
        const char *version,
        const char *const *authors)
{
  size_t v5; // r9

  v5 = -1LL;
  do
  {
    if ( (((_BYTE)x_20 * ((_BYTE)x_20 - 1)) & 1) != 0 && y_21 >= 10 )
    {
      while ( 1 )
        ;
    }
  }
  while ( authors[++v5] != 0LL );
  version_etc_arn(stream, command_name, package, version, authors, v5);
}

void __fastcall version_etc_va(
        FILE *stream,
        const char *command_name,
        const char *package,
        const char *version,
        __va_list_tag *authors)
{
  __int64 v5; // rax
  size_t v6; // r9
  unsigned __int64 gp_offset; // r11
  __int64 *overflow_arg_area; // r10
  __int64 v9; // rax
  _QWORD v10[2]; // [rsp-8h] [rbp-10h] BYREF

  v10[0] = v5;
  while ( (((_BYTE)x_22 * ((_BYTE)x_22 - 1)) & 1) != 0 && y_23 >= 10 )
    ;
  if ( y_23 >= 10 && (((_BYTE)x_22 * ((_BYTE)x_22 - 1)) & 1) != 0 )
  {
    while ( 1 )
LABEL_13:
      ;
  }
  v6 = 0LL;
  while ( v6 <= 9 )
  {
    gp_offset = (int)authors->gp_offset;
    if ( gp_offset > 0x28 )
    {
      overflow_arg_area = (__int64 *)authors->overflow_arg_area;
      authors->overflow_arg_area = overflow_arg_area + 1;
    }
    else
    {
      overflow_arg_area = (__int64 *)((char *)authors->reg_save_area + gp_offset);
      authors->gp_offset = gp_offset + 8;
    }
    v9 = *overflow_arg_area;
    v10[v6 - 10] = *overflow_arg_area;
    if ( !v9 )
      break;
    ++v6;
    if ( y_23 >= 10 && (((_BYTE)x_22 * ((_BYTE)x_22 - 1)) & 1) != 0 )
      goto LABEL_13;
  }
  version_etc_arn(stream, command_name, package, version, (const char *const *)&v10[-10], v6);
}

void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...)
{
  va_list va; // [rsp+0h] [rbp-D8h] BYREF

  va_start(va, version);
  version_etc_va(stream, command_name, package, version, va);
}

void __cdecl emit_bug_reporting_address()
{
  char *v0; // rax
  char *v1; // rax
  char *v2; // rax
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax

  if ( y_27 >= 10 && (((_BYTE)x_26 * ((_BYTE)x_26 - 1)) & 1) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
    __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
    v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
    __printf_chk(1LL, v1, "GNU coreutils");
    v2 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
    fputs_unlocked(v2, stdout);
    if ( y_27 < 10 || (((_BYTE)x_26 * ((_BYTE)x_26 - 1)) & 1) == 0 )
      break;
LABEL_5:
    v3 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
    __printf_chk(1LL, v3, "bug-coreutils@gnu.org");
    v4 = dcgettext(0LL, "%s home page: <%s>\n", 5);
    __printf_chk(1LL, v4, "GNU coreutils");
    v5 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
    fputs_unlocked(v5, stdout);
  }
}

void *__fastcall xnmalloc(size_t n, size_t s)
{
  size_t v2; // r14
  bool v3; // bl
  void *result; // rax

  if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
  if ( 0x7FFFFFFFFFFFFFFFLL / s < n )
    goto LABEL_10;
  v2 = n * s;
  v3 = (((_BYTE)x_1 * ((_BYTE)x_1 - 1)) & 1) == 0 || y_2 < 10;
  do
    result = malloc(v2);
  while ( !v3 );
  if ( v2 && !result )
LABEL_10:
    xalloc_die();
  return result;
}

void *__fastcall xmalloc(size_t n)
{
  bool v1; // bl
  void *result; // rax

  v1 = (((_BYTE)x_1 * ((_BYTE)x_1 - 1)) & 1) == 0 || y_2 < 10;
  do
    result = malloc(n);
  while ( !v1 );
  if ( n )
  {
    if ( !result )
      xalloc_die();
  }
  return result;
}

void *__fastcall xnrealloc(void *p, size_t n, size_t s)
{
  size_t v3; // rbx
  void *result; // rax

  if ( 0x7FFFFFFFFFFFFFFFLL / s < n )
    xalloc_die();
  v3 = n * s;
  if ( y_4 >= 10 && (((_BYTE)x_3 * ((_BYTE)x_3 - 1)) & 1) != 0 )
    goto LABEL_8;
  while ( 1 )
  {
    result = xrealloc(p, v3);
    if ( y_4 < 10 || (((_BYTE)x_3 * ((_BYTE)x_3 - 1)) & 1) == 0 )
      break;
LABEL_8:
    xrealloc(p, v3);
  }
  return result;
}

void *__fastcall xrealloc(void *p, size_t n)
{
  void *result; // rax

  if ( !p || n )
  {
    result = realloc(p, n);
    if ( n && !result )
      xalloc_die();
  }
  else
  {
    if ( y_6 >= 10 && (((_BYTE)x_5 * ((_BYTE)x_5 - 1)) & 1) != 0 )
      goto LABEL_11;
    while ( 1 )
    {
      free(p);
      result = 0LL;
      if ( y_6 < 10 || (((_BYTE)x_5 * ((_BYTE)x_5 - 1)) & 1) == 0 )
        break;
LABEL_11:
      free(p);
    }
  }
  return result;
}

void *__fastcall x2nrealloc(void *p, size_t *pn, size_t s)
{
  size_t v3; // rcx

  v3 = *pn;
  if ( p )
  {
    if ( y_8 >= 10 && (((_BYTE)x_7 * ((_BYTE)x_7 - 1)) & 1) != 0 )
    {
      while ( 1 )
        ;
    }
    if ( 0x5555555555555554LL / s <= v3 )
      xalloc_die();
    v3 += (v3 >> 1) + 1;
  }
  else
  {
    if ( !v3 )
    {
      if ( y_8 >= 10 && (((_BYTE)x_7 * ((_BYTE)x_7 - 1)) & 1) != 0 )
      {
        while ( 1 )
          ;
      }
      v3 = 0x80 / s + (s > 0x80);
    }
    if ( 0x7FFFFFFFFFFFFFFFLL / s < v3 )
      xalloc_die();
  }
  *pn = v3;
  return xrealloc(p, v3 * s);
}

char *__fastcall xcharalloc(size_t n)
{
  bool v1; // bl
  char *result; // rax

  v1 = (((_BYTE)x_1 * ((_BYTE)x_1 - 1)) & 1) == 0 || y_2 < 10;
  do
    result = (char *)malloc(n);
  while ( !v1 );
  if ( n )
  {
    if ( !result )
      xalloc_die();
  }
  return result;
}

void *__fastcall x2realloc(void *p, size_t *pn)
{
  __int64 v3; // rsi
  void *result; // rax
  __int64 v5; // rsi

  if ( y_12 >= 10 && (((_BYTE)x_11 * ((_BYTE)x_11 - 1)) & 1) != 0 )
    goto LABEL_14;
  while ( 1 )
  {
    v3 = *pn;
    if ( p )
    {
      if ( y_8 >= 10 && (((_BYTE)x_7 * ((_BYTE)x_7 - 1)) & 1) != 0 )
      {
        while ( 1 )
          ;
      }
      if ( (unsigned __int64)v3 >= 0x5555555555555554LL )
        xalloc_die();
      v3 += ((unsigned __int64)v3 >> 1) + 1;
    }
    else if ( v3 )
    {
      if ( v3 < 0 )
        xalloc_die();
    }
    else
    {
      v3 = 128LL;
      if ( y_8 >= 10 && (((_BYTE)x_7 * ((_BYTE)x_7 - 1)) & 1) != 0 )
      {
        while ( 1 )
          ;
      }
    }
    *pn = v3;
    result = xrealloc(p, v3);
    if ( y_12 < 10 || (((_BYTE)x_11 * ((_BYTE)x_11 - 1)) & 1) == 0 )
      break;
LABEL_14:
    v5 = *pn;
    if ( p )
    {
      if ( y_8 >= 10 && (((_BYTE)x_7 * ((_BYTE)x_7 - 1)) & 1) != 0 )
      {
        while ( 1 )
          ;
      }
      if ( (unsigned __int64)v5 >= 0x5555555555555554LL )
        xalloc_die();
      v5 += ((unsigned __int64)v5 >> 1) + 1;
    }
    else if ( v5 )
    {
      if ( v5 < 0 )
        xalloc_die();
    }
    else
    {
      v5 = 128LL;
      if ( y_8 >= 10 && (((_BYTE)x_7 * ((_BYTE)x_7 - 1)) & 1) != 0 )
      {
        while ( 1 )
          ;
      }
    }
    *pn = v5;
    xrealloc(p, v5);
  }
  return result;
}

void *__fastcall xzalloc(size_t s)
{
  int v1; // ecx
  int v2; // ebp
  char v3; // r12
  int v4; // r13d
  void *v5; // rax
  void *v6; // rbx
  int v8; // [rsp+0h] [rbp-34h]

  v1 = y_14;
  v2 = ((_BYTE)x_13 * ((_BYTE)x_13 - 1)) & 1;
  v3 = x_1;
  v4 = y_2;
  if ( y_14 >= 10 && (((_BYTE)x_13 * ((_BYTE)x_13 - 1)) & 1) != 0 )
    goto LABEL_9;
  while ( 1 )
  {
    v8 = v1;
    do
    {
      v5 = malloc(s);
      v6 = v5;
    }
    while ( ((v3 * (v3 - 1)) & 1) != 0 && v4 >= 10 );
    if ( s && !v5 )
      xalloc_die();
    memset(v5, 0, s);
    v1 = v8;
    if ( v8 < 10 || !v2 )
      break;
LABEL_9:
    if ( v4 >= 10 && ((v3 * (v3 - 1)) & 1) != 0 )
    {
      while ( 1 )
        ;
    }
  }
  return v6;
}

void *__fastcall xcalloc(size_t n, size_t s)
{
  void *result; // rax

  if ( 0x7FFFFFFFFFFFFFFFLL / s < n || (result = rpl_calloc(n, s)) == 0LL )
    xalloc_die();
  return result;
}

void *__fastcall xmemdup(const void *p, size_t s)
{
  bool v2; // bp
  void *v3; // rax
  void *v4; // rbx

  v2 = (((_BYTE)x_1 * ((_BYTE)x_1 - 1)) & 1) == 0 || y_2 < 10;
  do
  {
    v3 = malloc(s);
    v4 = v3;
  }
  while ( !v2 );
  if ( s && !v3 )
    xalloc_die();
  memcpy(v3, p, s);
  return v4;
}

char *__fastcall xstrdup(const char *string)
{
  size_t v1; // r15
  bool v2; // bp
  char *v3; // rax
  char *v4; // rbx

  v1 = strlen(string) + 1;
  v2 = (((_BYTE)x_1 * ((_BYTE)x_1 - 1)) & 1) == 0 || y_2 < 10;
  do
  {
    v3 = (char *)malloc(v1);
    v4 = v3;
  }
  while ( !v2 );
  if ( v1 && !v3 )
    xalloc_die();
  memcpy(v3, string, v1);
  return v4;
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

void *__fastcall rpl_calloc(size_t n, size_t s)
{
  size_t v2; // r14
  size_t v3; // r15
  bool v4; // bl
  void *result; // rax

  v2 = 1LL;
  if ( n )
  {
    v3 = 1LL;
    if ( s )
    {
      if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
      {
        while ( 1 )
          ;
      }
      v2 = s;
      v3 = n;
      if ( n * s / s != n )
      {
        *__errno_location() = 12;
        return 0LL;
      }
    }
  }
  else
  {
    v3 = 1LL;
  }
  v4 = (((_BYTE)x * ((_BYTE)x - 1)) & 1) == 0 || y < 10;
  do
    result = calloc(v3, v2);
  while ( !v4 );
  return result;
}

size_t __fastcall rpl_mbrtowc(wchar_t *pwc, const char *s, size_t n, mbstate_t *ps)
{
  wchar_t *v5; // rbx
  size_t v6; // rax
  size_t v7; // r12
  __int64 v9; // [rsp+0h] [rbp-20h] BYREF

  do
    v5 = (wchar_t *)(&v9 - 2);
  while ( (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 && y >= 10 );
  if ( pwc )
    v5 = pwc;
  v6 = mbrtowc(v5, s, n, ps);
  v7 = v6;
  if ( n && v6 >= 0xFFFFFFFFFFFFFFFELL && !hard_locale(0) )
  {
    *v5 = *(unsigned __int8 *)s;
    return 1LL;
  }
  return v7;
}

int __fastcall close_stream(FILE *stream)
{
  size_t v1; // r14
  int flags; // r12d
  int v3; // eax
  char v4; // r15
  int v5; // ebp
  int v6; // ebx

  if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    v1 = __fpending(stream);
    flags = stream->_flags;
    v3 = rpl_fclose(stream);
    v4 = x;
    v5 = y;
    if ( y < 10 || (((_BYTE)x * ((_BYTE)x - 1)) & 1) == 0 )
      break;
LABEL_5:
    __fpending(stream);
    rpl_fclose(stream);
  }
  if ( (flags & 0x20) != 0 )
  {
    if ( !v3 )
    {
      *__errno_location() = 0;
      v4 = x;
      v5 = y;
    }
  }
  else
  {
    v6 = 0;
    if ( !v3 || !v1 && *__errno_location() == 9 )
      return v6;
  }
  v6 = -1;
  if ( v5 >= 10 && ((v4 * (v4 - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
  return v6;
}

bool __fastcall hard_locale(int category)
{
  char *v1; // rax
  const char *v2; // rbx
  bool v3; // bp

  v1 = setlocale(category, 0LL);
  v2 = v1;
  v3 = 1;
  if ( v1 && (!strcmp(v1, "C") || !strcmp(v2, "POSIX")) )
  {
    v3 = 0;
    if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
    {
      while ( 1 )
        ;
    }
  }
  return v3;
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
  int v2; // eax
  int result; // eax
  int *v4; // r14
  int v5; // ebp

  if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    v1 = fileno(fp);
    if ( y < 10 || (((_BYTE)x * ((_BYTE)x - 1)) & 1) == 0 )
      break;
LABEL_5:
    fileno(fp);
  }
  if ( v1 < 0 )
    return fclose(fp);
  if ( __freading(fp) )
  {
    v2 = fileno(fp);
    if ( lseek(v2, 0LL, 1) == -1 )
      return fclose(fp);
  }
  if ( !rpl_fflush(fp) )
    return fclose(fp);
  if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
  v4 = __errno_location();
  v5 = *v4;
  result = fclose(fp);
  if ( v5 )
  {
    if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
      goto LABEL_19;
    while ( 1 )
    {
      *v4 = v5;
      result = -1;
      if ( y < 10 || (((_BYTE)x * ((_BYTE)x - 1)) & 1) == 0 )
        break;
LABEL_19:
      *v4 = v5;
    }
  }
  return result;
}

int __fastcall rpl_fflush(FILE *stream)
{
  int v1; // eax
  int result; // eax

  if ( !stream )
    return fflush(stream);
  if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
    goto LABEL_6;
  while ( 1 )
  {
    v1 = __freading(stream);
    if ( y < 10 || (((_BYTE)x * ((_BYTE)x - 1)) & 1) == 0 )
      break;
LABEL_6:
    __freading(stream);
  }
  if ( !v1 )
    return fflush(stream);
  while ( 1 )
  {
    if ( (stream->_flags & 0x100) != 0 )
      rpl_fseeko(stream, 0LL, 1);
    if ( y_2 >= 10 && (((_BYTE)x_1 * ((_BYTE)x_1 - 1)) & 1) != 0 )
    {
      while ( 1 )
        ;
    }
    result = fflush(stream);
    if ( y < 10 || (((_BYTE)x * ((_BYTE)x - 1)) & 1) == 0 )
      break;
    if ( (stream->_flags & 0x100) != 0 )
      rpl_fseeko(stream, 0LL, 1);
    if ( y_2 >= 10 && (((_BYTE)x_1 * ((_BYTE)x_1 - 1)) & 1) != 0 )
    {
      while ( 1 )
        ;
    }
    fflush(stream);
  }
  return result;
}

int __fastcall rpl_fseeko(FILE *fp, off_t offset, int whence)
{
  int result; // eax
  int v5; // eax
  __off_t v6; // rax

  if ( fp->_IO_read_end != fp->_IO_read_ptr )
    return fseeko(fp, offset, whence);
  if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
  if ( fp->_IO_write_ptr != fp->_IO_write_base || fp->_IO_save_base )
    return fseeko(fp, offset, whence);
  v5 = fileno(fp);
  v6 = lseek(v5, offset, whence);
  if ( v6 == -1 )
  {
    result = -1;
    if ( y >= 10 && (((_BYTE)x * ((_BYTE)x - 1)) & 1) != 0 )
    {
      while ( 1 )
        ;
    }
  }
  else
  {
    LOBYTE(fp->_flags) &= ~0x10u;
    fp->_offset = v6;
    return 0;
  }
  return result;
}

int __fastcall atexit(void (__fastcall *a1)(void *))
{
  return __cxa_atexit(a1, 0LL, _dso_handle);
}
