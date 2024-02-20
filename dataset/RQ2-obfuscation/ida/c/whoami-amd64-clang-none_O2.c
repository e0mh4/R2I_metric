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
  FILE *v10; // rbx
  char *v11; // rax

  if ( !status )
  {
    v1 = dcgettext(0LL, "Usage: %s [OPTION]...\n", 5);
    __printf_chk(1LL, v1, program_name);
    v2 = dcgettext(0LL, "Print the user name associated with the current effective user ID.\nSame as id -un.\n\n", 5);
    fputs_unlocked(v2, stdout);
    v3 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
    fputs_unlocked(v3, stdout);
    v4 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
    fputs_unlocked(v4, stdout);
    v5 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v5, "GNU coreutils");
    v6 = setlocale(5, 0LL);
    if ( v6 )
    {
      if ( strncmp(v6, "en_", 3uLL) )
      {
        v7 = dcgettext(0LL, "Report any translation bugs to <https://translationproject.org/team/>\n", 5);
        fputs_unlocked(v7, stdout);
      }
    }
    v8 = dcgettext(0LL, "Full documentation <%s%s>\n", 5);
    __printf_chk(1LL, v8, "https://www.gnu.org/software/coreutils/");
    v9 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
    __printf_chk(1LL, v9, "whoami");
    exit(status);
  }
  v10 = stderr;
  v11 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
  __fprintf_chk(v10, 1LL, v11, program_name);
  exit(status);
}

int __cdecl main(int argc, const char **argv, const char **envp)
{
  int *v3; // rbp
  __uid_t v4; // eax
  __uid_t v5; // ebx
  int v6; // r14d
  struct passwd *v7; // rax
  char *v9; // rbp
  const char *v10; // rax
  char *v11; // rax

  set_program_name(*argv);
  setlocale(6, "");
  bindtextdomain("coreutils", "/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  parse_gnu_standard_options_only(
    argc,
    (char **)argv,
    "whoami",
    "GNU coreutils",
    Version,
    1,
    (void (*)(int))usage,
    "Richard Mlynarik",
    0LL);
  if ( optind != argc )
  {
    v9 = dcgettext(0LL, "extra operand %s", 5);
    v10 = quote(argv[optind]);
    error(0, 0, v9, v10);
    usage(1);
  }
  v3 = __errno_location();
  *v3 = 0;
  v4 = geteuid();
  v5 = v4;
  if ( v4 == -1 )
  {
    v6 = *v3;
    if ( *v3 )
    {
LABEL_8:
      v11 = dcgettext(0LL, "cannot find name for user ID %lu", 5);
      error(1, v6, v11, v5);
      JUMPOUT(0x40268CLL);
    }
  }
  v7 = getpwuid(v4);
  if ( !v7 )
  {
    v6 = *v3;
    goto LABEL_8;
  }
  puts(v7->pw_name);
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
  bool v0; // bl
  int *v1; // rax
  int *v2; // rbp
  char *v3; // rbx
  int v4; // ebp
  char *v5; // rax

  if ( close_stream(stdout) )
  {
    v0 = ignore_EPIPE;
    v1 = __errno_location();
    v2 = v1;
    if ( !v0 || *v1 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = *v2;
      if ( !file_name )
      {
        error(0, v4, "%s", v3);
        _exit(exit_failure);
      }
      v5 = quotearg_colon(file_name);
      error(0, v4, "%s: %s", v5, v3);
      _exit(exit_failure);
    }
  }
  if ( close_stream(stderr) )
    _exit(exit_failure);
}

void parse_long_options(
        int argc,
        char **argv,
        const char *command_name,
        const char *package,
        const char *version,
        void (*usage_func)(int),
        ...)
{
  int v10; // ebp
  int v11; // eax
  va_list va; // [rsp+0h] [rbp-F8h] BYREF

  v10 = opterr;
  opterr = 0;
  if ( argc == 2 )
  {
    v11 = getopt_long(2, argv, "+", long_options, 0LL);
    if ( v11 == 104 )
    {
      usage_func(0);
    }
    else if ( v11 == 118 )
    {
      va_start(va, usage_func);
      version_etc_va(stdout, command_name, package, version, va);
      exit(0);
    }
  }
  opterr = v10;
  optind = 0;
}

void parse_gnu_standard_options_only(
        int argc,
        char **argv,
        const char *command_name,
        const char *package,
        const char *version,
        bool scan_all,
        void (*usage_func)(int),
        ...)
{
  int v10; // ebp
  const char *v11; // rdx
  int v12; // eax
  __int64 v13; // rdi
  va_list va; // [rsp+0h] [rbp-F8h] BYREF

  v10 = opterr;
  opterr = 1;
  v11 = "+";
  if ( scan_all )
    v11 = "";
  v12 = getopt_long(argc, argv, v11, long_options, 0LL);
  if ( v12 != -1 )
  {
    if ( v12 == 104 )
    {
      v13 = 0LL;
    }
    else
    {
      if ( v12 == 118 )
      {
        va_start(va, usage_func);
        version_etc_va(stdout, command_name, package, version, va);
        exit(0);
      }
      v13 = (unsigned int)exit_failure;
    }
    usage_func(v13);
  }
  opterr = v10;
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
  if ( v3 - argv0 >= 7 && !strncmp(v3 - 7, "/.libs/", 7uLL) )
  {
    if ( !strncmp(v3, "lt-", 3uLL) )
    {
      v3 += 3;
      _bss_start = (__int64)v3;
    }
    v1 = v3;
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
  char v12; // r15
  char v13; // di
  char v14; // al
  int v15; // r9d
  size_t v16; // r11
  quoting_style v17; // r8d
  unsigned __int64 i; // r14
  char v19; // r13
  __int64 v20; // rsi
  const char *v21; // r10
  size_t v22; // rbp
  size_t v23; // rbx
  int v24; // ebp
  const char *v25; // rax
  char v26; // al
  size_t v27; // rbx
  size_t v28; // rax
  char v29; // cl
  size_t v30; // r15
  size_t v31; // rbp
  int v32; // r13d
  size_t v33; // rax
  bool v34; // si
  __int64 v35; // r12
  char v36; // dl
  char v37; // r13
  char v38; // cl
  char v39; // bl
  __int64 v40; // rax
  size_t v41; // r13
  int v42; // ebp
  size_t v43; // rbx
  int v44; // eax
  unsigned __int64 v45; // rcx
  size_t v46; // rdx
  bool v47; // zf
  const unsigned __int16 **v48; // rax
  bool v49; // r13
  unsigned __int64 v50; // rbx
  size_t v51; // rax
  unsigned __int64 v52; // rbx
  size_t v53; // rax
  size_t v54; // rbp
  __int64 v55; // rsi
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  int v58; // eax
  unsigned __int64 v59; // rdx
  bool v60; // bl
  __int64 v61; // rsi
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // rax
  char *v64; // rcx
  char v65; // al
  char *v66; // rdx
  int v67; // eax
  int v68; // r9d
  quoting_style v69; // r8d
  char v72; // [rsp+Fh] [rbp-D9h]
  char v74; // [rsp+1Bh] [rbp-CDh]
  int v75; // [rsp+1Ch] [rbp-CCh]
  bool v76; // [rsp+20h] [rbp-C8h]
  char v77; // [rsp+21h] [rbp-C7h]
  bool v78; // [rsp+22h] [rbp-C6h]
  unsigned __int8 v79; // [rsp+23h] [rbp-C5h]
  char v80; // [rsp+24h] [rbp-C4h]
  char v81; // [rsp+25h] [rbp-C3h]
  unsigned __int8 v82; // [rsp+26h] [rbp-C2h]
  size_t v85; // [rsp+30h] [rbp-B8h]
  quoting_style s; // [rsp+38h] [rbp-B0h]
  size_t n; // [rsp+40h] [rbp-A8h]
  const char *s2; // [rsp+48h] [rbp-A0h]
  int v89; // [rsp+50h] [rbp-98h]
  int v90; // [rsp+50h] [rbp-98h]
  bool v91; // [rsp+54h] [rbp-94h]
  unsigned __int64 v92; // [rsp+58h] [rbp-90h]
  size_t v93; // [rsp+60h] [rbp-88h]
  mbstate_t ps; // [rsp+78h] [rbp-70h] BYREF
  int v97; // [rsp+84h] [rbp-64h]
  int v98; // [rsp+88h] [rbp-60h]
  wchar_t pwc; // [rsp+8Ch] [rbp-5Ch] BYREF
  const char *v100; // [rsp+90h] [rbp-58h]
  size_t v101; // [rsp+98h] [rbp-50h]
  __int64 v102; // [rsp+A0h] [rbp-48h]
  size_t mb_cur_max; // [rsp+A8h] [rbp-40h]
  __int64 v104; // [rsp+B0h] [rbp-38h]

  mb_cur_max = __ctype_get_mb_cur_max();
  v12 = (flags & 2) != 0;
  v98 = flags & 1;
  v75 = flags;
  v97 = flags & 4;
  v13 = 1;
  v93 = 0LL;
  s2 = 0LL;
  n = 0LL;
  v14 = 0;
  v15 = 0;
  v102 = 0LL;
LABEL_2:
  v16 = buffersize;
  v17 = escape_quoting_style;
  i = 0LL;
  v19 = 1;
  v20 = 0LL;
  v21 = arg;
  v22 = argsize;
  switch ( quoting_style )
  {
    case 0u:
      v17 = literal_quoting_style;
      i = 0LL;
      v19 = v14;
      v20 = 0LL;
      goto LABEL_32;
    case 1u:
      goto LABEL_14;
    case 2u:
      goto LABEL_18;
    case 3u:
      v14 = 1;
LABEL_14:
      v12 = 1;
      goto LABEL_15;
    case 4u:
LABEL_15:
      v29 = 1;
      if ( (v12 & 1) != 0 )
        v29 = v14;
      v14 = v29;
LABEL_18:
      v17 = shell_always_quoting_style;
      if ( (v12 & 1) != 0 )
      {
        i = 0LL;
      }
      else
      {
        if ( v16 )
          *buffer = 39;
        i = 1LL;
      }
      s2 = "'";
      n = 1LL;
      v19 = v14;
      goto LABEL_31;
    case 5u:
      v17 = c_quoting_style;
      if ( (v12 & 1) != 0 )
      {
        i = 0LL;
      }
      else
      {
        if ( v16 )
          *buffer = 34;
        i = 1LL;
      }
      s2 = "\"";
      n = 1LL;
      v19 = 1;
LABEL_31:
      LOBYTE(v20) = v12;
      goto LABEL_32;
    case 6u:
      v19 = 1;
      v17 = c_quoting_style;
      i = 0LL;
      s2 = "\"";
      n = 1LL;
      LOBYTE(v20) = 1;
      goto LABEL_32;
    case 7u:
      goto LABEL_32;
    case 8u:
    case 9u:
      v23 = v16;
      v24 = v15;
      left_quote = (char *)gettext_quote("`", (quoting_style)quoting_style);
      v20 = quoting_style;
      v25 = gettext_quote("'", (quoting_style)quoting_style);
      v15 = v24;
      v16 = v23;
      right_quote = v25;
      goto LABEL_4;
    case 0xAu:
LABEL_4:
      v89 = v15;
      if ( (v12 & 1) != 0 )
      {
        i = 0LL;
      }
      else
      {
        v26 = *left_quote;
        for ( i = 0LL; v26; ++i )
        {
          if ( i < v16 )
            buffer[i] = v26;
          v26 = left_quote[i + 1];
        }
      }
      v27 = v16;
      v28 = strlen(right_quote);
      v16 = v27;
      n = v28;
      v17 = quoting_style;
      s2 = right_quote;
      v19 = 1;
      LOBYTE(v20) = v12;
      v21 = arg;
      v22 = argsize;
      v15 = v89;
LABEL_32:
      v78 = (v19 & 1) == 0;
      v74 = v19 & 1;
      v82 = v19 & 1 & (v17 != shell_always_quoting_style);
      v79 = v20 & 1 & (v17 == shell_always_quoting_style);
      v72 = v20 & 1;
      v81 = v20 & 1 & (quote_these_too != 0LL);
      v76 = v17 != shell_always_quoting_style || (v20 & 1) == 0;
      v80 = v19;
      v104 = v20;
      v77 = (n != 0) & v20 & v19;
      v30 = 0LL;
      s = v17;
      if ( v22 != -1LL )
        goto LABEL_33;
      break;
    default:
      abort();
  }
LABEL_35:
  if ( !v21[v30] )
  {
    v22 = -1LL;
    goto LABEL_239;
  }
  if ( (v82 & (n != 0)) == 0 )
    goto LABEL_41;
LABEL_36:
  if ( n >= 2 && v22 == -1LL )
  {
    v31 = v16;
    v32 = v15;
    v33 = strlen(v21);
    v15 = v32;
    v17 = s;
    v16 = v31;
    v21 = arg;
    v22 = v33;
  }
  if ( v30 + n <= v22 )
  {
    v41 = v22;
    v42 = v15;
    v43 = v16;
    v44 = memcmp(&v21[v30], s2, n);
    v34 = v44 == 0;
    if ( v44 )
    {
      v21 = arg;
      v16 = v43;
      v17 = s;
      v15 = v42;
      v22 = v41;
    }
    else
    {
      v21 = arg;
      v16 = v43;
      v17 = s;
      v15 = v42;
      v22 = v41;
      if ( v72 )
        goto LABEL_256;
    }
  }
  else
  {
LABEL_41:
    v34 = 0;
  }
  v35 = (unsigned __int8)v21[v30];
  v36 = 0;
  v37 = 1;
  v38 = 110;
  v39 = 97;
  v40 = 0LL;
  switch ( v21[v30] )
  {
    case 0:
      if ( !v74 )
      {
        if ( v98 )
          goto LABEL_155;
        LOBYTE(v35) = 0;
        goto LABEL_190;
      }
      if ( v72 )
        goto LABEL_256;
      if ( v17 == shell_always_quoting_style && (v15 & 1) == 0 )
      {
        if ( i < v16 )
          buffer[i] = 39;
        if ( i + 1 < v16 )
          buffer[i + 1] = 36;
        if ( i + 2 < v16 )
          buffer[i + 2] = 39;
        i += 3LL;
        LOBYTE(v15) = 1;
      }
      v45 = i;
      if ( i < v16 )
        buffer[i] = 92;
      ++i;
      LOBYTE(v40) = 1;
      LOBYTE(v35) = 48;
      if ( v17 == shell_always_quoting_style || v30 + 1 >= v22 || (unsigned __int8)(v21[v30 + 1] - 48) > 9u )
        goto LABEL_191;
      if ( i < v16 )
        buffer[i] = 48;
      if ( v45 + 2 < v16 )
        buffer[v45 + 2] = 48;
      v37 = 0;
      i = v45 + 3;
      if ( v82 )
        goto LABEL_44;
      goto LABEL_116;
    case 7:
      goto LABEL_139;
    case 8:
      v39 = 98;
      goto LABEL_139;
    case 9:
      v38 = 116;
      goto LABEL_138;
    case 0xA:
      goto LABEL_138;
    case 0xB:
      v39 = 118;
      goto LABEL_139;
    case 0xC:
      v39 = 102;
      goto LABEL_139;
    case 0xD:
      v38 = 114;
      goto LABEL_138;
    case 0x20:
      goto LABEL_113;
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
      goto LABEL_114;
    case 0x23:
    case 0x7E:
      if ( !v30 )
        goto LABEL_113;
      goto LABEL_190;
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
      goto LABEL_43;
    case 0x27:
      LOBYTE(v35) = 39;
      LOBYTE(v40) = 1;
      v102 = v40;
      if ( v17 != shell_always_quoting_style )
        goto LABEL_96;
      if ( v72 )
        goto LABEL_254;
      v46 = v93;
      v47 = v16 != 0 && v93 == 0;
      if ( v16 != 0 && v93 == 0 )
        v46 = v16;
      v93 = v46;
      if ( v47 )
        v16 = 0LL;
      if ( i < v16 )
        buffer[i] = 39;
      if ( i + 1 < v16 )
        buffer[i + 1] = 92;
      if ( i + 2 < v16 )
        buffer[i + 2] = 39;
      i += 3LL;
      v15 = 0;
LABEL_96:
      LOBYTE(v40) = 0;
      v37 = 1;
      if ( !v82 )
        goto LABEL_116;
      goto LABEL_44;
    case 0x3F:
      LOBYTE(v35) = 63;
      if ( v17 != c_quoting_style )
      {
        if ( v17 == shell_always_quoting_style && v72 )
          goto LABEL_254;
LABEL_190:
        LOBYTE(v40) = 0;
LABEL_191:
        v37 = 0;
        if ( v82 )
          goto LABEL_44;
        goto LABEL_116;
      }
      if ( !v97 || v30 + 2 >= v22 || v21[v30 + 1] != 63 )
        goto LABEL_190;
      v59 = (unsigned int)v21[v30 + 2];
      LOBYTE(v40) = 0;
      if ( (unsigned int)v59 > 0x3E )
        goto LABEL_191;
      v60 = v34;
      v61 = 0x7000A38200000000LL;
      if ( _bittest64(&v61, v59) )
      {
        if ( v72 )
        {
          v67 = 5;
LABEL_255:
          s = v67;
LABEL_256:
          v68 = v75;
          goto LABEL_257;
        }
        if ( i < v16 )
          buffer[i] = 63;
        if ( i + 1 < v16 )
          buffer[i + 1] = 34;
        if ( i + 2 < v16 )
          buffer[i + 2] = 34;
        if ( i + 3 < v16 )
          buffer[i + 3] = 63;
        i += 4LL;
        LOBYTE(v40) = 0;
        v30 += 2LL;
        LOBYTE(v35) = v59;
      }
      v37 = 0;
      v34 = v60;
      if ( v82 )
        goto LABEL_44;
      goto LABEL_116;
    case 0x5C:
      if ( v17 == shell_always_quoting_style )
      {
        if ( v72 )
          goto LABEL_254;
        LOBYTE(v35) = 92;
        LOBYTE(v40) = 0;
LABEL_136:
        v37 = 0;
        if ( (v15 & 1) != 0 )
          goto LABEL_122;
        goto LABEL_128;
      }
      v38 = 92;
      if ( v77 )
      {
        LOBYTE(v40) = 0;
        LOBYTE(v35) = 92;
        goto LABEL_136;
      }
LABEL_138:
      v39 = v38;
      if ( !v76 )
        goto LABEL_254;
LABEL_139:
      LOBYTE(v40) = 0;
      v37 = 0;
      if ( v74 )
        goto LABEL_140;
LABEL_43:
      if ( !v82 )
        goto LABEL_116;
      goto LABEL_44;
    case 0x7B:
    case 0x7D:
      LOBYTE(v40) = 0;
      if ( v22 == -1LL )
      {
        if ( v30 || v21[1] )
        {
          v22 = -1LL;
          goto LABEL_191;
        }
      }
      else if ( v30 || v22 != 1 )
      {
        goto LABEL_191;
      }
LABEL_113:
      v36 = 1;
LABEL_114:
      if ( !v76 )
      {
LABEL_254:
        v67 = 2;
        goto LABEL_255;
      }
      LOBYTE(v40) = 0;
      v37 = v36;
      if ( !v82 )
        goto LABEL_116;
      goto LABEL_44;
    default:
      v91 = v34;
      v90 = v15;
      v101 = v16;
      if ( mb_cur_max == 1 )
      {
        v48 = __ctype_b_loc();
        v21 = arg;
        v49 = ((*v48)[v35] & 0x4000) != 0;
        v50 = 1LL;
        goto LABEL_107;
      }
      ps = 0LL;
      if ( v22 == -1LL )
      {
        v51 = strlen(v21);
        v21 = arg;
        v22 = v51;
      }
      v100 = &v21[v30];
      v49 = 1;
      v50 = 0LL;
      v85 = v22;
      break;
  }
  while ( 1 )
  {
    v92 = v50;
    v52 = v50 + v30;
    v53 = rpl_mbrtowc(&pwc, &v21[v52], v22 - v52, &ps);
    v54 = v53;
    if ( !v53 )
      goto LABEL_229;
    v55 = 0x20000002BLL;
    if ( v53 == -1LL )
    {
      v49 = 0;
LABEL_229:
      v21 = arg;
      v22 = v85;
      goto LABEL_236;
    }
    if ( v53 == -2LL )
    {
      v22 = v85;
      v21 = arg;
      if ( v85 <= v52 )
      {
        v49 = 0;
LABEL_236:
        v50 = v92;
        goto LABEL_107;
      }
      v50 = v92;
      while ( v100[v50] )
      {
        v63 = v30 + v50++ + 1;
        if ( v63 >= v85 )
        {
          v49 = 0;
          goto LABEL_107;
        }
      }
      v49 = 0;
LABEL_107:
      v37 = v49;
      v16 = v101;
      v17 = s;
      v15 = v90;
      v34 = v91;
      if ( v50 > 1 || !(v78 | (unsigned __int8)v37) )
      {
        v62 = v30 + v50;
        LOBYTE(v40) = 0;
        if ( !(v78 | (unsigned __int8)v37) )
        {
LABEL_204:
          if ( !v72 )
          {
            if ( s == shell_always_quoting_style && (v15 & 1) == 0 )
            {
              if ( i < v16 )
                buffer[i] = 39;
              if ( i + 1 < v16 )
                buffer[i + 1] = 36;
              if ( i + 2 < v16 )
                buffer[i + 2] = 39;
              i += 3LL;
              LOBYTE(v15) = 1;
            }
            if ( i < v16 )
              buffer[i] = 92;
            if ( i + 1 < v16 )
              buffer[i + 1] = ((unsigned __int8)v35 >> 6) | 0x30;
            if ( i + 2 < v16 )
              buffer[i + 2] = ((unsigned __int8)v35 >> 3) & 7 | 0x30;
            i += 3LL;
            LOBYTE(v35) = v35 & 7 | 0x30;
            LOBYTE(v40) = 1;
            goto LABEL_226;
          }
          goto LABEL_256;
        }
        while ( 1 )
        {
          if ( v34 )
          {
            if ( i < v16 )
              buffer[i] = 92;
            ++i;
            v34 = 0;
          }
LABEL_226:
          if ( v62 <= v30 + 1 )
            goto LABEL_121;
          if ( (v15 & 1) != 0 && (v40 & 1) == 0 )
          {
            if ( i < v16 )
              buffer[i] = 39;
            if ( i + 1 < v16 )
              buffer[i + 1] = 39;
            i += 2LL;
            v15 = 0;
          }
          if ( i < v16 )
            buffer[i] = v35;
          ++i;
          LOBYTE(v35) = v21[++v30];
          if ( !(v78 | (unsigned __int8)v37) )
            goto LABEL_204;
        }
      }
      LOBYTE(v40) = 0;
      if ( v82 )
      {
LABEL_44:
        if ( !quote_these_too )
          goto LABEL_120;
      }
      else
      {
LABEL_116:
        if ( !v81 )
        {
LABEL_120:
          v39 = v35;
          if ( !v34 )
            goto LABEL_121;
LABEL_140:
          if ( v72 )
            goto LABEL_256;
LABEL_141:
          if ( v17 == shell_always_quoting_style && (v15 & 1) == 0 )
          {
            if ( i < v16 )
              buffer[i] = 39;
            if ( i + 1 < v16 )
              buffer[i + 1] = 36;
            if ( i + 2 < v16 )
              buffer[i + 2] = 39;
            i += 3LL;
            LOBYTE(v15) = 1;
          }
          if ( i < v16 )
            buffer[i] = 92;
          if ( ++i >= v16 )
            goto LABEL_154;
LABEL_153:
          buffer[i] = v39;
          goto LABEL_154;
        }
      }
      if ( v34 )
      {
        v39 = v35;
        if ( v72 )
          goto LABEL_256;
        goto LABEL_141;
      }
      v39 = v35;
      if ( (quote_these_too[(unsigned __int8)v35 >> 5] & (1 << v35)) != 0 )
        goto LABEL_140;
LABEL_121:
      if ( (v15 & 1) != 0 )
      {
LABEL_122:
        if ( (v40 & 1) == 0 )
        {
          if ( i < v16 )
            buffer[i] = 39;
          if ( i + 1 < v16 )
            buffer[i + 1] = 39;
          i += 2LL;
          v15 = 0;
        }
      }
LABEL_128:
      v39 = v35;
      if ( i < v16 )
        goto LABEL_153;
LABEL_154:
      ++i;
      v13 &= -v37;
LABEL_155:
      ++v30;
      if ( v22 == -1LL )
        goto LABEL_35;
LABEL_33:
      if ( v30 == v22 )
      {
        v22 = v30;
LABEL_239:
        if ( v72 && i == 0 && v17 == shell_always_quoting_style )
          goto LABEL_256;
        argsize = v22;
        if ( (v102 & 1) == 0 || v72 != 0 || v17 != shell_always_quoting_style )
          goto LABEL_246;
        if ( (v13 & 1) != 0 )
          return quotearg_buffer_restyled(
                   buffer,
                   v93,
                   arg,
                   v22,
                   c_quoting_style,
                   v75,
                   quote_these_too,
                   left_quote,
                   right_quote);
        if ( !v93 || (quoting_style = v17, v14 = v80, v12 = v104, buffersize = v93, v16) )
        {
LABEL_246:
          if ( s2 )
          {
            v64 = buffer;
            if ( !v72 )
            {
              v65 = *s2;
              if ( *s2 )
              {
                v66 = (char *)(s2 + 1);
                do
                {
                  if ( i < v16 )
                    buffer[i] = v65;
                  ++i;
                  v65 = *v66++;
                }
                while ( v65 );
              }
            }
          }
          else
          {
            v64 = buffer;
          }
          if ( i < v16 )
            v64[i] = 0;
          return i;
        }
        goto LABEL_2;
      }
      goto LABEL_36;
    }
    v21 = arg;
    v16 = v101;
    if ( (v79 & (v53 > 1)) == 1 )
      break;
LABEL_168:
    if ( !iswprint(pwc) )
      v49 = 0;
    v50 = v54 + v92;
    v58 = mbsinit(&ps);
    v21 = arg;
    v22 = v85;
    if ( v58 )
      goto LABEL_107;
  }
  v56 = 1LL;
  while ( 1 )
  {
    v57 = (unsigned int)(v100[v92 + v56] - 91);
    if ( (unsigned int)v57 <= 0x21 )
    {
      if ( _bittest64(&v55, v57) )
        break;
    }
    if ( ++v56 >= v53 )
      goto LABEL_168;
  }
  s = shell_always_quoting_style;
  v68 = v75;
  v22 = v85;
LABEL_257:
  v69 = shell_escape_always_quoting_style;
  if ( !v74 )
    v69 = s;
  if ( s != shell_always_quoting_style )
    v69 = s;
  return quotearg_buffer_restyled(buffer, v16, v21, v22, v69, v68 & 0xFFFFFFFD, 0LL, left_quote, right_quote);
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
  void **p_val; // r15
  __int64 v2; // rbx
  char *val; // rdi

  v0 = slotvec_0;
  if ( nslots >= 2 )
  {
    p_val = (void **)&slotvec_0[1].val;
    v2 = 1LL;
    do
    {
      free(*p_val);
      ++v2;
      p_val += 2;
    }
    while ( v2 < nslots );
  }
  val = v0->val;
  if ( val != slot0 )
  {
    free(val);
    slotvec0.size = 256LL;
    slotvec0.val = slot0;
  }
  if ( v0 != &slotvec0 )
  {
    free(v0);
    slotvec_0 = &slotvec0;
  }
  nslots = 1;
}

char *__fastcall quotearg_n(int n, const char *arg)
{
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &default_quoting_options);
}

char *__fastcall quotearg_n_options(int n, const char *arg, size_t argsize, const quoting_options *options)
{
  int *v7; // rax
  slotvec *v8; // rbp
  slotvec *v9; // rdi
  slotvec *v10; // rax
  slotvec *v11; // r14
  __int64 v12; // r13
  size_t size; // r12
  char *val; // r14
  unsigned int style; // r8d
  unsigned int *quote_these_too; // rbx
  size_t v17; // rax
  int *v18; // rax
  int v19; // ebp
  char **p_val; // r12
  size_t v21; // r15
  char *left_quote; // [rsp-18h] [rbp-70h]
  const char *right_quote; // [rsp-10h] [rbp-68h]
  int v25; // [rsp+0h] [rbp-58h]
  int v26; // [rsp+4h] [rbp-54h]
  size_t v27; // [rsp+8h] [rbp-50h]
  const quoting_options *v28; // [rsp+10h] [rbp-48h]
  int *v29; // [rsp+18h] [rbp-40h]

  v7 = __errno_location();
  if ( n < 0 )
    abort();
  v8 = slotvec_0;
  v29 = v7;
  v25 = *v7;
  v28 = options;
  v27 = argsize;
  if ( nslots <= n )
  {
    if ( n == 0x7FFFFFFF )
      xalloc_die();
    v9 = 0LL;
    if ( slotvec_0 != &slotvec0 )
      v9 = slotvec_0;
    v10 = (slotvec *)xrealloc(v9, 16LL * n + 16);
    v11 = v10;
    slotvec_0 = v10;
    if ( v8 == &slotvec0 )
      *v10 = slotvec0;
    memset(&v10[nslots], 0, 16 * (n + 1 - (__int64)nslots));
    nslots = n + 1;
    v8 = v11;
  }
  v12 = n;
  size = v8[v12].size;
  val = v8[v12].val;
  style = options->style;
  v26 = options->flags | 1;
  right_quote = options->right_quote;
  left_quote = (char *)options->left_quote;
  quote_these_too = options->quote_these_too;
  v17 = quotearg_buffer_restyled(val, size, arg, argsize, style, v26, quote_these_too, left_quote, right_quote);
  if ( size <= v17 )
  {
    p_val = &v8[v12].val;
    v21 = v17 + 1;
    v8[v12].size = v17 + 1;
    v19 = v25;
    if ( val != slot0 )
      free(val);
    val = (char *)xmalloc(v21);
    *p_val = val;
    quotearg_buffer_restyled(
      val,
      v21,
      arg,
      v27,
      v28->style,
      v26,
      quote_these_too,
      (char *)v28->left_quote,
      v28->right_quote);
    v18 = v29;
  }
  else
  {
    v18 = v29;
    v19 = v25;
  }
  *v18 = v19;
  return val;
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
  quoting_options options; // [rsp+40h] [rbp-38h] BYREF

  if ( s == custom_quoting_style )
    abort();
  options.style = s;
  memset(&options.flags, 0, 52);
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &options);
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
  quoting_options options; // [rsp+40h] [rbp-38h] BYREF

  if ( s == custom_quoting_style )
    abort();
  options.style = s;
  memset(&options.flags, 0, 52);
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &options);
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

char *__fastcall quotearg_char_mem(const char *arg, size_t argsize, char ch_0)
{
  quoting_options v4; // [rsp+0h] [rbp-38h] BYREF

  v4 = default_quoting_options;
  v4.quote_these_too[(unsigned __int8)ch_0 >> 5] ^= (((v4.quote_these_too[(unsigned __int8)ch_0 >> 5] >> ch_0) & 1) == 0) << ch_0;
  return quotearg_n_options(0, arg, argsize, &v4);
}

char *__fastcall quotearg_char(const char *arg, char ch_0)
{
  quoting_options v3; // [rsp+0h] [rbp-38h] BYREF

  v3 = default_quoting_options;
  v3.quote_these_too[(unsigned __int8)ch_0 >> 5] ^= (((v3.quote_these_too[(unsigned __int8)ch_0 >> 5] >> ch_0) & 1) == 0) << ch_0;
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &v3);
}

char *__fastcall quotearg_colon(const char *arg)
{
  quoting_options v2; // [rsp+0h] [rbp-38h] BYREF

  v2 = default_quoting_options;
  HIBYTE(v2.quote_these_too[1]) = HIBYTE(default_quoting_options.quote_these_too[1]) | 4;
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &v2);
}

char *__fastcall quotearg_colon_mem(const char *arg, size_t argsize)
{
  quoting_options v3; // [rsp+0h] [rbp-38h] BYREF

  v3 = default_quoting_options;
  HIBYTE(v3.quote_these_too[1]) = HIBYTE(default_quoting_options.quote_these_too[1]) | 4;
  return quotearg_n_options(0, arg, argsize, &v3);
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
  return quotearg_n_options(n, arg, argsize, &quote_quoting_options);
}

const char *__fastcall quote_mem(const char *arg, size_t argsize)
{
  return quotearg_n_options(0, arg, argsize, &quote_quoting_options);
}

const char *__fastcall quote_n(int n, const char *arg)
{
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &quote_quoting_options);
}

const char *__fastcall quote(const char *arg)
{
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &quote_quoting_options);
}

const char *__fastcall gettext_quote(const char *msgid, quoting_style s)
{
  const char *result; // rax
  const char *v3; // rax
  unsigned int v4; // ecx
  bool v5; // zf
  const char *v6; // rcx

  result = dcgettext(0LL, msgid, 5);
  if ( result == msgid )
  {
    v3 = locale_charset();
    v4 = *v3 & 0xFFFFFFDF;
    if ( v4 == 71 )
    {
      if ( (v3[1] & 0xFFFFFFDF) == 66
        && v3[2] == 49
        && v3[3] == 56
        && v3[4] == 48
        && v3[5] == 51
        && v3[6] == 48
        && !v3[7] )
      {
        v5 = *msgid == 96;
        v6 = (const char *)&unk_406884;
        result = (const char *)&unk_406888;
LABEL_18:
        if ( v5 )
          return v6;
        return result;
      }
    }
    else if ( v4 == 85
           && (v3[1] & 0xFFFFFFDF) == 84
           && (v3[2] & 0xFFFFFFDF) == 70
           && v3[3] == 45
           && v3[4] == 56
           && !v3[5] )
    {
      v5 = *msgid == 96;
      v6 = (const char *)&unk_40687C;
      result = (const char *)&unk_406880;
      goto LABEL_18;
    }
    v5 = s == clocale_quoting_style;
    v6 = "\"";
    result = "'";
    goto LABEL_18;
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
  char *v8; // rax
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

  if ( command_name )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", command_name);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", package);
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
      v13 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      __fprintf_chk(stream, 1LL, v13, *authors);
      break;
    case 4uLL:
      v14 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      __fprintf_chk(stream, 1LL, v14, *authors);
      break;
    case 5uLL:
      v15 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
      __fprintf_chk(stream, 1LL, v15, *authors);
      break;
    case 6uLL:
      v16 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      __fprintf_chk(stream, 1LL, v16, *authors);
      break;
    case 7uLL:
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      __fprintf_chk(stream, 1LL, v17, *authors);
      break;
    case 8uLL:
      v19 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      __fprintf_chk(stream, 1LL, v19, *authors);
      break;
    case 9uLL:
      v18 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n", 5);
      __fprintf_chk(stream, 1LL, v18, *authors);
      break;
    default:
      v10 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5);
      __fprintf_chk(stream, 1LL, v10, *authors);
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
  while ( authors[++v5] != 0LL )
    ;
  version_etc_arn(stream, command_name, package, version, authors, v5);
}

void __fastcall version_etc_va(
        FILE *stream,
        const char *command_name,
        const char *package,
        const char *version,
        __va_list_tag *authors)
{
  unsigned __int64 gp_offset; // r9
  const char **overflow_arg_area; // r10
  _QWORD *v7; // r10
  size_t v8; // r9
  _QWORD *v9; // r10
  _QWORD *v10; // r10
  _QWORD *v11; // r10
  _QWORD *v12; // r10
  _QWORD *v13; // r9
  _QWORD *v14; // r9
  _QWORD *v15; // r9
  __int64 *v16; // r9
  const char *v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+48h] [rbp-10h]

  gp_offset = (int)authors->gp_offset;
  if ( gp_offset > 0x28 )
  {
    overflow_arg_area = (const char **)authors->overflow_arg_area;
    authors->overflow_arg_area = overflow_arg_area + 1;
  }
  else
  {
    overflow_arg_area = (const char **)((char *)authors->reg_save_area + gp_offset);
    LODWORD(gp_offset) = gp_offset + 8;
    authors->gp_offset = gp_offset;
  }
  v17 = *overflow_arg_area;
  if ( v17 )
  {
    if ( (unsigned int)gp_offset >= 0x29 )
    {
      v7 = authors->overflow_arg_area;
      authors->overflow_arg_area = v7 + 1;
    }
    else
    {
      v7 = (char *)authors->reg_save_area + (int)gp_offset;
      LODWORD(gp_offset) = gp_offset + 8;
      authors->gp_offset = gp_offset;
    }
    if ( *v7 )
    {
      if ( (unsigned int)gp_offset >= 0x29 )
      {
        v9 = authors->overflow_arg_area;
        authors->overflow_arg_area = v9 + 1;
      }
      else
      {
        v9 = (char *)authors->reg_save_area + (int)gp_offset;
        LODWORD(gp_offset) = gp_offset + 8;
        authors->gp_offset = gp_offset;
      }
      if ( *v9 )
      {
        if ( (unsigned int)gp_offset >= 0x29 )
        {
          v10 = authors->overflow_arg_area;
          authors->overflow_arg_area = v10 + 1;
        }
        else
        {
          v10 = (char *)authors->reg_save_area + (int)gp_offset;
          LODWORD(gp_offset) = gp_offset + 8;
          authors->gp_offset = gp_offset;
        }
        if ( *v10 )
        {
          if ( (unsigned int)gp_offset >= 0x29 )
          {
            v11 = authors->overflow_arg_area;
            authors->overflow_arg_area = v11 + 1;
          }
          else
          {
            v11 = (char *)authors->reg_save_area + (int)gp_offset;
            LODWORD(gp_offset) = gp_offset + 8;
            authors->gp_offset = gp_offset;
          }
          if ( *v11 )
          {
            if ( (unsigned int)gp_offset >= 0x29 )
            {
              v12 = authors->overflow_arg_area;
              authors->overflow_arg_area = v12 + 1;
            }
            else
            {
              v12 = (char *)authors->reg_save_area + (int)gp_offset;
              authors->gp_offset = gp_offset + 8;
            }
            if ( *v12 )
            {
              v13 = authors->overflow_arg_area;
              authors->overflow_arg_area = v13 + 1;
              if ( *v13 )
              {
                v14 = authors->overflow_arg_area;
                authors->overflow_arg_area = v14 + 1;
                if ( *v14 )
                {
                  v15 = authors->overflow_arg_area;
                  authors->overflow_arg_area = v15 + 1;
                  if ( *v15 )
                  {
                    v16 = (__int64 *)authors->overflow_arg_area;
                    authors->overflow_arg_area = v16 + 1;
                    v26 = *v16;
                    v8 = 9 - ((v26 == 0) - 1LL);
                  }
                  else
                  {
                    v8 = 8LL;
                  }
                }
                else
                {
                  v8 = 7LL;
                }
              }
              else
              {
                v8 = 6LL;
              }
            }
            else
            {
              v8 = 5LL;
            }
          }
          else
          {
            v8 = 4LL;
          }
        }
        else
        {
          v8 = 3LL;
        }
      }
      else
      {
        v8 = 2LL;
      }
    }
    else
    {
      v8 = 1LL;
    }
  }
  else
  {
    v8 = 0LL;
  }
  version_etc_arn(stream, command_name, package, version, &v17, v8);
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
  char *v2; // rdi

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, "GNU coreutils");
  v2 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  fputs_unlocked(v2, stdout);
}

void *__fastcall xnmalloc(size_t n, size_t s)
{
  void *result; // rax

  if ( 0x7FFFFFFFFFFFFFFFLL / s < n || (result = malloc(n * s), n * s) && !result )
    xalloc_die();
  return result;
}

void *__fastcall xmalloc(size_t n)
{
  void *result; // rax

  result = malloc(n);
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
    goto LABEL_8;
  v3 = n * s;
  if ( p && !v3 )
  {
    free(p);
    return 0LL;
  }
  result = realloc(p, v3);
  if ( v3 )
  {
    if ( !result )
LABEL_8:
      xalloc_die();
  }
  return result;
}

void *__fastcall xrealloc(void *p, size_t n)
{
  void *result; // rax

  if ( !p || n )
  {
    result = realloc(p, n);
    if ( n )
    {
      if ( !result )
        xalloc_die();
    }
  }
  else
  {
    free(p);
    return 0LL;
  }
  return result;
}

void *__fastcall x2nrealloc(void *p, size_t *pn, size_t s)
{
  size_t v3; // rcx
  size_t v4; // rbx
  void *result; // rax

  v3 = *pn;
  if ( p )
  {
    if ( 0x5555555555555554LL / s <= v3 )
      goto LABEL_13;
    v3 += (v3 >> 1) + 1;
  }
  else
  {
    if ( !v3 )
      v3 = 0x80 / s + (s > 0x80);
    if ( 0x7FFFFFFFFFFFFFFFLL / s < v3 )
      xalloc_die();
  }
  *pn = v3;
  v4 = v3 * s;
  if ( p && !v4 )
  {
    free(p);
    return 0LL;
  }
  result = realloc(p, v4);
  if ( v4 && !result )
LABEL_13:
    xalloc_die();
  return result;
}

char *__fastcall xcharalloc(size_t n)
{
  char *result; // rax

  result = (char *)malloc(n);
  if ( n )
  {
    if ( !result )
      xalloc_die();
  }
  return result;
}

void *__fastcall x2realloc(void *p, size_t *pn)
{
  size_t v2; // rax
  __int64 v3; // rbx
  void *result; // rax

  v2 = *pn;
  if ( p )
  {
    if ( v2 >= 0x5555555555555554LL )
      xalloc_die();
    v3 = v2 + (v2 >> 1) + 1;
    *pn = v3;
    if ( v2 + (v2 >> 1) == -1LL )
    {
      free(p);
      return 0LL;
    }
  }
  else
  {
    v3 = 128LL;
    if ( v2 )
      v3 = *pn;
    if ( v3 < 0 )
LABEL_12:
      xalloc_die();
    *pn = v3;
  }
  result = realloc(p, v3);
  if ( v3 && !result )
    goto LABEL_12;
  return result;
}

void *__fastcall xzalloc(size_t s)
{
  void *v1; // rax
  void *v2; // r14

  v1 = malloc(s);
  v2 = v1;
  if ( s && !v1 )
    xalloc_die();
  memset(v1, 0, s);
  return v2;
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
  void *v2; // rax
  void *v3; // r15

  v2 = malloc(s);
  v3 = v2;
  if ( s && !v2 )
    xalloc_die();
  memcpy(v2, p, s);
  return v3;
}

char *__fastcall xstrdup(const char *string)
{
  size_t v1; // rbx
  char *v2; // rax
  char *v3; // r15
  size_t v4; // rbx

  v1 = strlen(string);
  v2 = (char *)malloc(v1 + 1);
  v3 = v2;
  v4 = v1 + 1;
  if ( v4 && !v2 )
    xalloc_die();
  memcpy(v2, string, v4);
  return v3;
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
  size_t v2; // rax
  size_t v3; // rcx

  v2 = 1LL;
  if ( n )
  {
    v3 = 1LL;
    if ( s )
    {
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
  return calloc(v3, v2);
}

size_t __fastcall rpl_mbrtowc(wchar_t *pwc, const char *s, size_t n, mbstate_t *ps)
{
  __int64 v4; // rax
  int *v6; // rbx
  size_t v7; // rax
  size_t v8; // r15
  int v10; // [rsp+0h] [rbp-24h] BYREF

  v10 = HIDWORD(v4);
  v6 = &v10;
  if ( pwc )
    v6 = pwc;
  v7 = mbrtowc(v6, s, n, ps);
  v8 = v7;
  if ( n && v7 >= 0xFFFFFFFFFFFFFFFELL && !hard_locale(0) )
  {
    *v6 = *(unsigned __int8 *)s;
    return 1LL;
  }
  return v8;
}

int __fastcall close_stream(FILE *stream)
{
  size_t v1; // r14
  int flags; // ebp
  int v3; // eax
  int v4; // ebx

  v1 = __fpending(stream);
  flags = stream->_flags;
  v3 = rpl_fclose(stream);
  if ( (flags & 0x20) != 0 )
  {
    v4 = -1;
    if ( !v3 )
      *__errno_location() = 0;
  }
  else
  {
    v4 = -(v3 != 0);
    if ( !v1 )
    {
      if ( v3 )
      {
        v4 = -1;
        if ( *__errno_location() == 9 )
          return 0;
      }
    }
  }
  return v4;
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
    return 0;
  return v3;
}

const char *__cdecl locale_charset()
{
  char *v0; // rax
  const char *v1; // rcx
  const char *result; // rax

  v0 = nl_langinfo(14);
  v1 = "Print the user name associated with the current effective user ID.\nSame as id -un.\n\n" + 84;
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
  int *v2; // r14
  int v3; // ebp
  int result; // eax

  if ( fileno(fp) < 0 )
    return fclose(fp);
  if ( __freading(fp) )
  {
    v1 = fileno(fp);
    if ( lseek(v1, 0LL, 1) == -1 )
      return fclose(fp);
  }
  if ( !rpl_fflush(fp) )
    return fclose(fp);
  v2 = __errno_location();
  v3 = *v2;
  result = fclose(fp);
  if ( v3 )
  {
    *v2 = v3;
    return -1;
  }
  return result;
}

int __fastcall rpl_fflush(FILE *stream)
{
  if ( stream && __freading(stream) && (stream->_flags & 0x100) != 0 )
    rpl_fseeko(stream, 0LL, 1);
  return fflush(stream);
}

int __fastcall rpl_fseeko(FILE *fp, off_t offset, int whence)
{
  int v5; // eax
  __off_t v6; // rax

  if ( fp->_IO_read_end != fp->_IO_read_ptr || fp->_IO_write_ptr != fp->_IO_write_base || fp->_IO_save_base )
    return fseeko(fp, offset, whence);
  v5 = fileno(fp);
  v6 = lseek(v5, offset, whence);
  if ( v6 == -1 )
    return -1;
  LOBYTE(fp->_flags) &= ~0x10u;
  fp->_offset = v6;
  return 0;
}

int __fastcall atexit(void (__fastcall *a1)(void *))
{
  return __cxa_atexit(a1, 0LL, _dso_handle);
}
