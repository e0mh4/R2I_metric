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
  FILE *v11; // rbx
  char *v12; // rax

  if ( !status )
  {
    v1 = dcgettext(0LL, "Usage: %s [OPTION]...\n", 5);
    __printf_chk(1LL, v1, program_name);
    v2 = dcgettext(
           0LL,
           "Print the number of processing units available to the current process,\n"
           "which may be less than the number of online processors\n"
           "\n",
           5);
    fputs_unlocked(v2, stdout);
    v3 = dcgettext(
           0LL,
           "      --all      print the number of installed processors\n"
           "      --ignore=N  if possible, exclude N processing units\n",
           5);
    fputs_unlocked(v3, stdout);
    v4 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
    fputs_unlocked(v4, stdout);
    v5 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
    fputs_unlocked(v5, stdout);
    v6 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v6, "GNU coreutils");
    v7 = setlocale(5, 0LL);
    if ( v7 )
    {
      if ( strncmp(v7, "en_", 3uLL) )
      {
        v8 = dcgettext(0LL, "Report any translation bugs to <https://translationproject.org/team/>\n", 5);
        fputs_unlocked(v8, stdout);
      }
    }
    v9 = dcgettext(0LL, "Full documentation <%s%s>\n", 5);
    __printf_chk(1LL, v9, "https://www.gnu.org/software/coreutils/");
    v10 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
    __printf_chk(1LL, v10, "nproc");
    exit(status);
  }
  v11 = stderr;
  v12 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
  __fprintf_chk(v11, 1LL, v12, program_name);
  exit(status);
}

int __cdecl main(int argc, const char **argv, const char **envp)
{
  nproc_query v3; // ebx
  uintmax_t v4; // r12
  const char *v5; // rbp
  char *v6; // rax
  nproc_query v7; // ebp
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  char *v12; // rbx
  const char *v13; // rax

  set_program_name(*argv);
  setlocale(6, "");
  bindtextdomain("coreutils", "/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  v3 = NPROC_CURRENT_OVERRIDABLE;
  v4 = 0LL;
LABEL_4:
  v7 = v3;
  while ( 1 )
  {
    v3 = v7;
    v7 = NPROC_ALL;
    v8 = getopt_long(argc, (char *const *)argv, "", longopts, 0LL);
    if ( v8 <= 127 )
      break;
    if ( v8 != 128 )
    {
      if ( v8 == 129 )
      {
        v5 = optarg;
        v6 = dcgettext(0LL, "invalid number", 5);
        v4 = xdectoumax(v5, 0LL, 0xFFFFFFFFFFFFFFFFLL, "", v6, 0);
        goto LABEL_4;
      }
LABEL_18:
      usage(1);
    }
  }
  if ( v8 != -1 )
  {
    if ( v8 == -131 )
    {
      version_etc(stdout, "nproc", "GNU coreutils", Version, "Giuseppe Scrivano", 0LL);
      exit(0);
    }
    if ( v8 == -130 )
      usage(0);
    goto LABEL_18;
  }
  if ( optind != argc )
  {
    v12 = dcgettext(0LL, "extra operand %s", 5);
    v13 = quote(argv[optind]);
    error(0, 0, v12, v13);
    usage(1);
  }
  v9 = num_processors(v3);
  v10 = 1LL;
  if ( v9 > v4 )
    v10 = v9 - v4;
  __printf_chk(1LL, "%lu\n", v10);
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

unsigned __int64 __fastcall num_processors(nproc_query query)
{
  unsigned __int64 v1; // r14
  char *v2; // rax
  unsigned __int64 v3; // rbx
  char *v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 result; // rax
  __int64 v7; // rax
  cpu_set_t cpuset; // [rsp+8h] [rbp-90h] BYREF

  v1 = -1LL;
  if ( query != NPROC_CURRENT_OVERRIDABLE )
  {
LABEL_6:
    if ( query == NPROC_CURRENT )
    {
      if ( !sched_getaffinity(0, 0x80uLL, &cpuset) )
      {
        LODWORD(v7) = __sched_cpucount(0x80uLL, &cpuset);
        if ( (_DWORD)v7 )
        {
          v7 = (int)v7;
          goto LABEL_18;
        }
      }
      v7 = sysconf(84);
      if ( v7 <= 0 )
        goto LABEL_15;
LABEL_18:
      if ( v7 < v1 )
        return v7;
      return v1;
    }
    v7 = sysconf(83);
    if ( v7 == 1 )
    {
      if ( sched_getaffinity(0, 0x80uLL, &cpuset) )
        goto LABEL_15;
      LODWORD(v7) = __sched_cpucount(0x80uLL, &cpuset);
      if ( !(_DWORD)v7 )
        goto LABEL_15;
      v7 = (int)v7;
    }
    if ( v7 > 0 )
      goto LABEL_18;
LABEL_15:
    v7 = 1LL;
    goto LABEL_18;
  }
  v2 = getenv("OMP_NUM_THREADS");
  v3 = parse_omp_threads(v2);
  v4 = getenv("OMP_THREAD_LIMIT");
  v5 = parse_omp_threads(v4);
  result = v5 | -(__int64)(v5 == 0);
  v1 = result;
  if ( v3 < result )
    result = v3;
  if ( !v3 )
  {
    query = NPROC_CURRENT;
    goto LABEL_6;
  }
  return result;
}

unsigned __int64 __fastcall parse_omp_threads(const char *threads)
{
  char *v1; // rax
  char v2; // al
  unsigned int v3; // ecx
  unsigned __int64 result; // rax
  char *v5; // rdx
  char v6; // cl
  unsigned int v7; // ecx
  char *v8; // [rsp+0h] [rbp-8h] BYREF

  v8 = v1;
  if ( !threads )
    return 0LL;
  v2 = *threads;
  if ( *threads )
  {
    while ( 1 )
    {
      v3 = v2 - 9;
      if ( v3 > 0x17 || ((0x80001Fu >> v3) & ((0x80001Fu >> v3) ^ 0xFFFFFE) & 0xFFFFFF) == 0 )
        break;
      v2 = *++threads;
      if ( !v2 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v2 = 0;
  }
  if ( (unsigned int)(v2 - 48) > 9 )
    return 0LL;
  v8 = 0LL;
  result = strtoul(threads, &v8, 10);
  v5 = v8;
  if ( !v8 )
    return 0LL;
  v6 = *v8;
  if ( *v8 )
  {
    do
    {
      v7 = v6 - 9;
      if ( v7 >= 0x18 )
        break;
      if ( (~(0x80001Fu >> v7) | 0xFFFFFFFE) == -1 )
        break;
      v6 = *++v5;
    }
    while ( v6 );
    v8 = v5;
  }
  if ( *v5 != 44 && *v5 )
    return 0LL;
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
  if ( v3 - argv0 >= 7 && !strncmp(v3 - 7, "/.libs/", 7uLL) )
  {
    if ( !strncmp(v3, "lt-", 3uLL) )
    {
      v3 += 3;
      program_invocation_short_name = (__int64)v3;
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
  quoting_options *v3; // r8
  char v4; // cl
  __int64 v5; // r9
  int result; // eax
  unsigned int v7; // edx

  v3 = &default_quoting_options;
  if ( o )
    v3 = o;
  v4 = c & (c ^ 0xE0);
  v5 = (unsigned __int8)c >> 5;
  result = (v3->quote_these_too[v5] >> v4) & ((v3->quote_these_too[v5] >> v4) ^ 0xFFFFFFFE);
  v7 = ((unsigned __int8)i & (unsigned __int8)~((v3->quote_these_too[v5] >> v4) & ((v3->quote_these_too[v5] >> v4) ^ 0xFE)) & 1 | result & (~(_BYTE)i | 0xFFFFFFFE)) << v4;
  v3->quote_these_too[v5] = (~v7 & 0x9DECE435 | v7 & 0x62131BCA) ^ (~v3->quote_these_too[v5] & 0x9DECE435 | v3->quote_these_too[v5] & 0x62131BCA);
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
  if ( (left_quote != 0LL) != (right_quote != 0LL) || !left_quote )
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
  char v12; // r12
  __int64 v13; // r9
  size_t v14; // rsi
  char v15; // al
  size_t v16; // r14
  char v17; // r15
  quoting_style v18; // edx
  size_t v19; // r10
  unsigned __int64 v20; // rsi
  char *v21; // rdi
  size_t v22; // rbx
  char v23; // bl
  const char *v24; // rax
  char v25; // al
  size_t v26; // rcx
  char v27; // cl
  bool v28; // al
  bool v29; // dl
  size_t v30; // r11
  bool v31; // r10
  unsigned int v32; // ecx
  size_t v33; // rax
  const char *i; // r10
  char *v35; // rdi
  __int64 v36; // r12
  int v37; // r15d
  bool v38; // cl
  char v39; // r15
  __int64 v40; // r13
  char v41; // si
  char v42; // cl
  char v43; // bl
  char v44; // dl
  int v45; // r15d
  size_t v46; // r13
  size_t v47; // rbp
  size_t v48; // rax
  size_t v49; // rsi
  bool v50; // zf
  const unsigned __int16 **v51; // rax
  bool v52; // cl
  unsigned __int64 v53; // rsi
  unsigned __int8 v54; // r8
  bool v55; // al
  unsigned int v56; // esi
  size_t v57; // r14
  int v58; // ecx
  size_t v59; // rax
  unsigned __int64 v60; // rbp
  size_t v61; // rdi
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  __int64 v64; // rbx
  unsigned __int64 v65; // rcx
  __int64 v66; // rsi
  unsigned __int64 v67; // r9
  __int64 v68; // r12
  int v69; // edi
  bool v70; // al
  int v71; // eax
  quoting_style v72; // r8d
  char *v75; // rcx
  char v76; // al
  size_t v77; // rsi
  char *v78; // rdx
  char v79; // [rsp+5h] [rbp-E3h]
  char v80; // [rsp+6h] [rbp-E2h]
  char v81; // [rsp+6h] [rbp-E2h]
  char v82; // [rsp+7h] [rbp-E1h]
  char v83; // [rsp+8h] [rbp-E0h]
  char v84; // [rsp+Eh] [rbp-DAh]
  char v85; // [rsp+Fh] [rbp-D9h]
  char v87; // [rsp+1Eh] [rbp-CAh]
  bool v88; // [rsp+20h] [rbp-C8h]
  bool v89; // [rsp+22h] [rbp-C6h]
  char v90; // [rsp+23h] [rbp-C5h]
  char v91; // [rsp+24h] [rbp-C4h]
  quoting_style s; // [rsp+30h] [rbp-B8h]
  size_t v95; // [rsp+38h] [rbp-B0h]
  const __int16 *s2; // [rsp+40h] [rbp-A8h]
  size_t v97; // [rsp+48h] [rbp-A0h]
  size_t v98; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v99; // [rsp+50h] [rbp-98h]
  unsigned __int64 v100; // [rsp+50h] [rbp-98h]
  size_t v101; // [rsp+58h] [rbp-90h]
  int v102; // [rsp+64h] [rbp-84h]
  size_t n; // [rsp+78h] [rbp-70h]
  mbstate_t ps; // [rsp+80h] [rbp-68h] BYREF
  unsigned int v107; // [rsp+8Ch] [rbp-5Ch]
  unsigned int v108; // [rsp+90h] [rbp-58h]
  wchar_t pwc; // [rsp+94h] [rbp-54h] BYREF
  const char *v110; // [rsp+98h] [rbp-50h]
  size_t v111; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v112; // [rsp+A8h] [rbp-40h]
  size_t mb_cur_max; // [rsp+B0h] [rbp-38h]

  mb_cur_max = __ctype_get_mb_cur_max();
  v12 = (flags & 2) != 0;
  v108 = flags & (flags ^ 0xFFFFFFFE);
  v102 = flags;
  v107 = flags & (flags ^ 0xFFFFFFFB);
  LOBYTE(v13) = 1;
  v101 = 0LL;
  s2 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v83 = 0;
  v111 = 0LL;
  while ( 1 )
  {
    v19 = v14;
    v18 = escape_quoting_style;
    v16 = 0LL;
    v17 = 1;
    v20 = 0LL;
    v21 = buffer;
    v22 = argsize;
    switch ( quoting_style )
    {
      case 0u:
        v18 = literal_quoting_style;
        v16 = 0LL;
        v17 = v15;
        v20 = 0LL;
        goto LABEL_36;
      case 1u:
        goto LABEL_26;
      case 2u:
        goto LABEL_30;
      case 3u:
        v15 = 1;
LABEL_26:
        v12 = 1;
        goto LABEL_27;
      case 4u:
LABEL_27:
        v27 = 1;
        if ( ((unsigned __int8)v12 & ((unsigned __int8)v12 ^ 0xFE)) != 0 )
          v27 = v15;
        v15 = v27;
LABEL_30:
        if ( ((unsigned __int8)v12 & ((unsigned __int8)v12 ^ 0xFE)) != 0 )
        {
          v16 = 0LL;
        }
        else
        {
          if ( buffersize )
            *buffer = 39;
          v16 = 1LL;
        }
        s2 = asc_407974 + 4;
        v19 = 1LL;
        v17 = v15;
        LOBYTE(v20) = v12;
        v18 = shell_always_quoting_style;
        goto LABEL_36;
      case 5u:
        if ( ((unsigned __int8)v12 & ((unsigned __int8)v12 ^ 0xFE)) != 0 )
        {
          v16 = 0LL;
        }
        else
        {
          if ( buffersize )
            *buffer = 34;
          v16 = 1LL;
        }
        s2 = asc_407974;
        v19 = 1LL;
        v17 = 1;
        LOBYTE(v20) = v12;
        v18 = c_quoting_style;
        goto LABEL_36;
      case 6u:
        v17 = 1;
        v18 = c_quoting_style;
        v16 = 0LL;
        s2 = asc_407974;
        v19 = 1LL;
        LOBYTE(v20) = 1;
        goto LABEL_36;
      case 7u:
        goto LABEL_36;
      case 8u:
      case 9u:
        v23 = v13;
        left_quote = (char *)gettext_quote((const char *)&asc_407974[1], (quoting_style)quoting_style);
        v20 = quoting_style;
        v24 = gettext_quote((const char *)&asc_407974[2], (quoting_style)quoting_style);
        LOBYTE(v13) = v23;
        v21 = buffer;
        right_quote = v24;
        goto LABEL_16;
      case 0xAu:
LABEL_16:
        v80 = v13;
        if ( ((unsigned __int8)~v12 | 0xFE) == 0xFF && (v25 = *left_quote, v20 = 0x95FB53789B2DC18FLL, *left_quote) )
        {
          v26 = 0LL;
          do
          {
            if ( v26 < buffersize )
              v21[v26] = v25;
            v16 = v26 + 1;
            v25 = left_quote[++v26];
          }
          while ( v25 );
        }
        else
        {
          v16 = 0LL;
        }
        v19 = strlen(right_quote);
        v18 = quoting_style;
        s2 = (const __int16 *)right_quote;
        LOBYTE(v20) = v12;
        v22 = argsize;
        LOBYTE(v13) = v80;
        v17 = 1;
LABEL_36:
        s = v18;
        v28 = v18 != shell_always_quoting_style;
        v29 = v18 == shell_always_quoting_style;
        v82 = v17 & (v17 ^ 0xFE);
        n = v19;
        v30 = v22;
        v31 = v19 != 0;
        v89 = v82 != 0 && !v29;
        v90 = v31 & ~(v89 ^ v31);
        v79 = v20 & (v20 ^ 0xFE);
        v88 = v79 != 0 && !v28;
        v85 = (v79 != 0) ^ v29 | (v79 == 0 && !v29);
        v84 = v17;
        v112 = v20;
        v32 = v20;
        LOBYTE(v32) = ~v17 | ~(_BYTE)v20;
        v33 = v32;
        v87 = (((unsigned __int8)~(_BYTE)v32 & ((unsigned __int8)v32 ^ 1)) != 0) & ~((((unsigned __int8)~(_BYTE)v32 & ((unsigned __int8)v32 ^ 1)) != 0) ^ v31);
        i = arg;
        v35 = buffer;
        v36 = 0LL;
        if ( v22 != -1LL )
          goto LABEL_37;
        break;
      default:
        abort();
    }
LABEL_39:
    if ( !i[v36] )
    {
      v98 = buffersize;
      v30 = -1LL;
      goto LABEL_237;
    }
    do
    {
      if ( !v90 )
        goto LABEL_45;
      if ( (v30 == -1LL) == n > 1 && n >= 2 )
      {
        v37 = v13;
        v33 = strlen(i);
        LODWORD(v13) = v37;
        i = arg;
        v35 = buffer;
        v30 = v33;
      }
      if ( n + v36 <= v30 )
      {
        v45 = v13;
        v46 = buffersize;
        v47 = v30;
        LODWORD(v33) = memcmp(&i[v36], s2, n);
        v50 = (_DWORD)v33 == 0;
        LOBYTE(v33) = (_DWORD)v33 != 0;
        v38 = v50;
        if ( ((v79 == 0) & (unsigned __int8)v33) != 0 )
        {
          v35 = buffer;
          i = arg;
          v30 = v47;
          buffersize = v46;
          LODWORD(v13) = v45;
        }
        else
        {
          v35 = buffer;
          i = arg;
          v30 = v47;
          buffersize = v46;
          LODWORD(v13) = v45;
          if ( (v79 == 0) == (unsigned __int8)v33 )
            goto LABEL_240;
        }
      }
      else
      {
LABEL_45:
        v38 = 0;
      }
      v39 = v38;
      v40 = (unsigned __int8)i[v36];
      v41 = 0;
      LOBYTE(v33) = 1;
      v42 = 110;
      v43 = 97;
      v44 = 0;
      switch ( i[v36] )
      {
        case 0:
          if ( v82 )
          {
            if ( v79 )
              goto LABEL_240;
            if ( (s == shell_always_quoting_style) != (((unsigned __int8)~v83 | 0xFE) == 0xFF)
              || s != shell_always_quoting_style )
            {
              v48 = v16;
              if ( v16 >= buffersize )
              {
LABEL_183:
                v44 = 1;
                v16 = v48 + 1;
                LOBYTE(v40) = 48;
                if ( s != shell_always_quoting_style && v36 + 1 < v30 && (unsigned __int8)(i[v36 + 1] - 48) <= 9u )
                {
                  if ( v16 < buffersize )
                    v35[v16] = 48;
                  if ( v48 + 2 < buffersize )
                    v35[v48 + 2] = 48;
                  v16 = v48 + 3;
                }
                break;
              }
            }
            else
            {
              if ( v16 < buffersize )
                v35[v16] = 39;
              if ( v16 + 1 < buffersize )
                v35[v16 + 1] = 36;
              if ( v16 + 2 < buffersize )
                v35[v16 + 2] = 39;
              v48 = v16 + 3;
              v83 = 1;
              if ( v16 + 3 >= buffersize )
                goto LABEL_183;
            }
            v35[v48] = 92;
            goto LABEL_183;
          }
          if ( v108 )
            goto LABEL_143;
          LOBYTE(v40) = 0;
          goto LABEL_178;
        case 7:
          goto LABEL_126;
        case 8:
          v43 = 98;
          goto LABEL_126;
        case 9:
          v42 = 116;
          goto LABEL_125;
        case 0xA:
          goto LABEL_125;
        case 0xB:
          v43 = 118;
          goto LABEL_126;
        case 0xC:
          v43 = 102;
          goto LABEL_126;
        case 0xD:
          v42 = 114;
          goto LABEL_125;
        case 0x20:
          goto LABEL_107;
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
          goto LABEL_108;
        case 0x23:
        case 0x7E:
          if ( !v36 )
            goto LABEL_107;
          goto LABEL_178;
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
          goto LABEL_47;
        case 0x27:
          LOBYTE(v40) = 39;
          LOBYTE(v33) = 1;
          v111 = v33;
          if ( s != shell_always_quoting_style )
            goto LABEL_90;
          if ( v79 )
            goto LABEL_241;
          v49 = v101;
          v50 = ((buffersize == 0 && v101 != 0) | (buffersize == 0) ^ (v101 != 0)) == 0;
          if ( !((buffersize == 0 && v101 != 0) | (buffersize == 0) ^ (v101 != 0)) )
            v49 = buffersize;
          v101 = v49;
          if ( v50 )
            buffersize = 0LL;
          if ( v16 < buffersize )
            v35[v16] = 39;
          v33 = -(__int64)v16;
          if ( v16 + 1 < buffersize )
            v35[v16 + 1] = 92;
          if ( v16 + 2 < buffersize )
            v35[v16 + 2] = 39;
          v16 += 3LL;
          v83 = 0;
LABEL_90:
          v44 = 0;
          LOBYTE(v33) = 1;
          if ( !v89 )
            goto LABEL_110;
          goto LABEL_48;
        case 0x3F:
          LOBYTE(v40) = 63;
          if ( s != c_quoting_style )
          {
            if ( s == shell_always_quoting_style && v79 )
              goto LABEL_241;
LABEL_178:
            v44 = 0;
            break;
          }
          if ( !v107 || v36 + 2 >= v30 || i[v36 + 1] != 63 )
            goto LABEL_178;
          v65 = (unsigned int)i[v36 + 2];
          v44 = 0;
          if ( (unsigned int)v65 > 0x3E )
            break;
          v66 = 0x7000A38200000000LL;
          if ( !_bittest64(&v66, v65) )
            break;
          if ( v79 )
          {
            v69 = 5;
            goto LABEL_242;
          }
          if ( v16 < buffersize )
            v35[v16] = 63;
          if ( v16 + 1 < buffersize )
            v35[v16 + 1] = 34;
          if ( v16 + 2 < buffersize )
            v35[v16 + 2] = 34;
          if ( v16 + 3 < buffersize )
            v35[v16 + 3] = 63;
          v44 = 0;
          v36 += 2LL;
          v16 += 4LL;
          LOBYTE(v40) = v65;
          break;
        case 0x5C:
          if ( s == shell_always_quoting_style )
          {
            if ( v79 )
              goto LABEL_241;
            LOBYTE(v40) = 92;
            v44 = 0;
            LODWORD(v33) = 0;
            goto LABEL_113;
          }
          v42 = 92;
          if ( v87 )
          {
            v44 = 0;
            LOBYTE(v40) = 92;
            LODWORD(v33) = 0;
            goto LABEL_113;
          }
LABEL_125:
          v43 = v42;
          if ( !v85 )
            goto LABEL_241;
LABEL_126:
          v44 = 0;
          LODWORD(v33) = 0;
          if ( v82 )
            goto LABEL_127;
LABEL_47:
          if ( !v89 )
            goto LABEL_110;
          goto LABEL_48;
        case 0x7B:
        case 0x7D:
          if ( v30 == -1LL )
          {
            v55 = i[1] != 0;
            v44 = 0;
            if ( v55 && v36 != 0 || v55 != (v36 != 0) )
            {
              v30 = -1LL;
              break;
            }
LABEL_107:
            v41 = 1;
LABEL_108:
            if ( v85 )
            {
              v44 = 0;
              LOBYTE(v33) = v41;
              if ( !v89 )
                goto LABEL_110;
              goto LABEL_48;
            }
LABEL_241:
            v69 = 2;
LABEL_242:
            v71 = 4;
            if ( (v69 != 2) != (v82 == 0) )
              v71 = v69;
            v72 = v71;
            if ( !v82 )
              v72 = v69;
            if ( v69 == 2 )
              v72 = v71;
            return quotearg_buffer_restyled(
                     buffer,
                     buffersize,
                     i,
                     v30,
                     v72,
                     v102 & 0xFFFFFFFD,
                     0LL,
                     left_quote,
                     right_quote);
          }
          v44 = 0;
          if ( (v30 == 1 || v36 == 0) && (v30 != 1) == (v36 != 0) )
            goto LABEL_107;
          break;
        default:
          v97 = buffersize;
          v81 = v13;
          if ( mb_cur_max == 1 )
          {
            v95 = v30;
            v51 = __ctype_b_loc();
            i = arg;
            v33 = (size_t)*v51;
            v52 = (*(_WORD *)(v33 + 2 * v40) & 0x4000) != 0;
            v53 = 1LL;
            goto LABEL_101;
          }
          ps = 0LL;
          if ( v30 == -1LL )
          {
            v59 = strlen(i);
            i = arg;
            v30 = v59;
          }
          v110 = &i[v36];
          v91 = 1;
          v60 = 0LL;
          v95 = v30;
          while ( 2 )
          {
            v33 = rpl_mbrtowc(&pwc, &i[v36 + v60], v30 - (v36 + v60), &ps);
            v61 = v33;
            if ( !v33 )
              goto LABEL_229;
            if ( v33 == -1LL )
            {
              v91 = 0;
LABEL_229:
              i = arg;
            }
            else
            {
              v30 = v95;
              if ( v33 != -2LL )
              {
                v99 = v60;
                i = arg;
                buffersize = v97;
                if ( v88 && v33 >= 2 )
                {
                  v62 = 1LL;
                  do
                  {
                    v63 = (unsigned int)(v110[v99 + v62] - 91);
                    if ( (unsigned int)v63 <= 0x21 )
                    {
                      v64 = 0x20000002BLL;
                      if ( _bittest64(&v64, v63) )
                        goto LABEL_241;
                    }
                    ++v62;
                  }
                  while ( v62 < v33 );
                }
                if ( !iswprint(pwc) )
                  v91 = 0;
                LODWORD(v33) = mbsinit(&ps);
                v53 = v99 + v61;
                v60 = v99 + v61;
                i = arg;
                v30 = v95;
                if ( (_DWORD)v33 )
                  goto LABEL_235;
                continue;
              }
              for ( i = arg; v60 + v36 < v95; LODWORD(v33) = ++v60 + v36 )
              {
                LODWORD(v33) = (_DWORD)v110;
                if ( !v110[v60] )
                  break;
              }
              v91 = 0;
            }
            break;
          }
          v53 = v60;
LABEL_235:
          v52 = v91;
LABEL_101:
          LOBYTE(v33) = v52 & (v52 ^ 0xFE);
          v54 = (v82 == 0 && (_BYTE)v33 != 0) | (v82 == 0) ^ ((_BYTE)v33 != 0);
          buffersize = v97;
          if ( (v54 ^ (v53 < 2)) != 1 && v53 < 2 )
          {
            v44 = 0;
            v30 = v95;
            LOBYTE(v13) = v81;
            v35 = buffer;
            if ( !v89 )
              goto LABEL_110;
            goto LABEL_48;
          }
          v100 = v36 + v53;
          v67 = v36 + 1;
          v44 = 0;
          v30 = v95;
          if ( v54 )
            goto LABEL_221;
          while ( !v79 )
          {
            if ( (s == shell_always_quoting_style) == (((unsigned __int8)v83 & ((unsigned __int8)v83 ^ 0xFE)) == 0)
              && s == shell_always_quoting_style )
            {
              if ( v16 < v97 )
                buffer[v16] = 39;
              if ( v16 + 1 < v97 )
                buffer[v16 + 1] = 36;
              if ( v16 + 2 < v97 )
                buffer[v16 + 2] = 39;
              v16 += 3LL;
              v83 = 1;
            }
            if ( v16 < v97 )
              buffer[v16] = 92;
            if ( v16 + 1 < v97 )
              buffer[v16 + 1] = (((unsigned __int8)v40 >> 6) | 0x60) ^ 0x50;
            if ( v16 + 2 < v97 )
              buffer[v16 + 2] = ((unsigned __int8)v40 >> 3) & 7 | 0x30;
            v44 = 1;
            v16 += 3LL;
            LOBYTE(v40) = (~(v40 & (v40 ^ 0xF8)) & 0x4F | v40 & (v40 ^ 0xF8) & 0xB0) ^ 0x7F | v40 & (v40 ^ 0xF8) & 0x30;
            if ( v100 <= v67 )
            {
LABEL_227:
              v13 = v67 - 1;
              v36 = v13;
              LOBYTE(v13) = v81;
              v35 = buffer;
LABEL_113:
              if ( ((unsigned __int8)~v83 | 0xFE) != 0xFF && ((unsigned __int8)~v44 | 0xFE) == 0xFF )
              {
                if ( v16 < buffersize )
                  v35[v16] = 39;
                if ( v16 + 1 < buffersize )
                  v35[v16 + 1] = 39;
                v16 += 2LL;
                v83 = 0;
              }
              v43 = v40;
              if ( v16 >= buffersize )
                goto LABEL_140;
              goto LABEL_139;
            }
            while ( 1 )
            {
              if ( (((unsigned __int8)v83 & ((unsigned __int8)v83 ^ 0xFE)) != 0) == (((unsigned __int8)~v44 | 0xFE) == 0xFF)
                && ((unsigned __int8)v83 & ((unsigned __int8)v83 ^ 0xFE)) != 0 )
              {
                if ( v16 < v97 )
                  buffer[v16] = 39;
                if ( v16 + 1 < v97 )
                  buffer[v16 + 1] = 39;
                v83 = 0;
                v16 += 2LL;
              }
              v68 = v36 - 0x7DB7EFA0A39CCFDCLL + 1;
              if ( v16 < v97 )
                buffer[v16] = v40;
              v36 = v68 + 0x7DB7EFA0A39CCFDCLL;
              ++v16;
              LOBYTE(v40) = i[v67++];
              if ( !v54 )
                break;
LABEL_221:
              if ( ((unsigned __int8)~v39 | 0xFE) == 0xFF )
              {
                if ( v100 <= v67 )
                  goto LABEL_227;
              }
              else
              {
                if ( v16 < v97 )
                  buffer[v16] = 92;
                v39 = 0;
                ++v16;
                if ( v100 <= v67 )
                  goto LABEL_227;
              }
            }
          }
LABEL_240:
          v69 = s;
          goto LABEL_242;
      }
      LODWORD(v33) = 0;
      if ( !v89 )
      {
LABEL_110:
        if ( ((quote_these_too != 0LL) & ((quote_these_too != 0LL) ^ (v79 == 0))) == 0 )
          goto LABEL_112;
        goto LABEL_111;
      }
LABEL_48:
      if ( !quote_these_too )
        goto LABEL_112;
LABEL_111:
      v56 = quote_these_too[(unsigned __int8)v40 >> 5];
      if ( ((v56 & ~(v56 ^ (1 << (v40 & (v40 ^ 0xE0))))) == 0) != (v39 == 0) )
      {
        v43 = v40;
        if ( v79 )
          goto LABEL_240;
        goto LABEL_128;
      }
LABEL_112:
      v43 = v40;
      if ( !v39 )
        goto LABEL_113;
LABEL_127:
      if ( v79 )
        goto LABEL_240;
LABEL_128:
      if ( s == shell_always_quoting_style && ((unsigned __int8)v83 & ((unsigned __int8)v83 ^ 0xFE)) == 0 )
      {
        if ( v16 < buffersize )
          v35[v16] = 39;
        if ( v16 + 1 < buffersize )
          v35[v16 + 1] = 36;
        if ( v16 + 2 < buffersize )
          v35[v16 + 2] = 39;
        v16 += 3LL;
        v83 = 1;
      }
      if ( v16 < buffersize )
        v35[v16] = 92;
      if ( ++v16 >= buffersize )
        goto LABEL_140;
LABEL_139:
      v35[v16] = v43;
LABEL_140:
      v57 = v16 + 0x62FF2D22A07DC23ALL;
      v58 = v33;
      LOBYTE(v58) = v33 & (v33 ^ 0xFE);
      if ( (_BYTE)v58 )
        v58 = v13;
      v16 = v57 - 0x62FF2D22A07DC239LL;
      LODWORD(v13) = v58;
LABEL_143:
      v33 = ++v36;
      if ( v30 == -1LL )
        goto LABEL_39;
LABEL_37:
      ;
    }
    while ( v36 != v30 );
    v98 = buffersize;
    v30 = v36;
LABEL_237:
    v14 = n;
    v69 = s;
    v70 = !((s == shell_always_quoting_style) & (unsigned __int8)~((s == shell_always_quoting_style) ^ (v16 == 0)));
    if ( (!v70 || v79 != 0) && v70 == (v79 == 0) )
    {
      buffersize = v98;
      goto LABEL_242;
    }
    argsize = v30;
    if ( (s != shell_always_quoting_style || v79 != 0) != (((unsigned __int8)v111 & ((unsigned __int8)v111 ^ 0xFE)) == 0)
      || (s != shell_always_quoting_style || v79 != 0) && ((unsigned __int8)v111 & ((unsigned __int8)v111 ^ 0xFE)) == 0 )
    {
      break;
    }
    if ( ((unsigned __int8)v13 & ((unsigned __int8)v13 ^ 0xFE)) != 0 )
      return quotearg_buffer_restyled(
               buffer,
               v101,
               arg,
               v30,
               c_quoting_style,
               v102,
               quote_these_too,
               left_quote,
               right_quote);
    if ( v101 == 0 || v98 != 0 )
      break;
    quoting_style = s;
    v15 = v84;
    v12 = v112;
    buffersize = v101;
  }
  if ( (v79 == 0) != (s2 != 0LL) )
  {
    v75 = buffer;
    if ( v16 < v98 )
      goto LABEL_264;
  }
  else
  {
    v75 = buffer;
    if ( s2 )
    {
      v76 = *(_BYTE *)s2;
      v77 = v98;
      if ( *(_BYTE *)s2 )
      {
        v78 = (char *)s2 + 1;
        do
        {
          if ( v16 < v98 )
            buffer[v16] = v76;
          ++v16;
          v76 = *v78++;
        }
        while ( v76 );
      }
    }
    else
    {
      v77 = v98;
    }
    if ( v16 < v77 )
LABEL_264:
      v75[v16] = 0;
  }
  return v16;
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
  v4 = v3->flags & 1 | v3->flags ^ 1;
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
  v6 = (~v5->flags & 0x5530148E | v5->flags & 0xAACFEB71) ^ ((size == 0LL) | 0x5530148E) | ~(~v5->flags | ~(size == 0LL));
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
  void **p_val; // r12
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
  slotvec *v8; // r14
  slotvec *v9; // rdi
  slotvec *v10; // rax
  slotvec *v11; // r13
  __int64 v12; // r13
  char *val; // r12
  int v14; // ebp
  size_t v15; // r15
  int *v16; // rax
  int v17; // ebx
  slotvec *v18; // rax
  char **p_val; // r14
  size_t v20; // r15
  int v22; // [rsp+4h] [rbp-64h]
  size_t v23; // [rsp+8h] [rbp-60h]
  const quoting_options *v24; // [rsp+10h] [rbp-58h]
  int *v25; // [rsp+18h] [rbp-50h]
  const unsigned int *quote_these_too; // [rsp+28h] [rbp-40h]
  size_t size; // [rsp+30h] [rbp-38h]

  v7 = __errno_location();
  if ( n < 0 )
    abort();
  v8 = slotvec_0;
  v25 = v7;
  v22 = *v7;
  v24 = options;
  v23 = argsize;
  if ( nslots <= n )
  {
    if ( n == 0x7FFFFFFF )
      xalloc_die();
    v9 = 0LL;
    if ( slotvec_0 != &slotvec0 )
      v9 = slotvec_0;
    v10 = (slotvec *)xrealloc(v9, 16LL * (n + 1));
    v11 = v10;
    slotvec_0 = v10;
    if ( v8 == &slotvec0 )
      *v10 = slotvec0;
    memset(&v10[nslots], 0, 16LL * (n + 1 - nslots));
    nslots = n + 1;
    v8 = v11;
  }
  v12 = n;
  size = v8[v12].size;
  val = v8[v12].val;
  v14 = options->flags & 1 | options->flags ^ 1;
  quote_these_too = options->quote_these_too;
  v15 = quotearg_buffer_restyled(
          val,
          size,
          arg,
          argsize,
          options->style,
          v14,
          options->quote_these_too,
          (char *)options->left_quote,
          options->right_quote);
  if ( size <= v15 )
  {
    v18 = &v8[v12];
    p_val = &v8[v12].val;
    v20 = v15 + 1;
    v18->size = v20;
    v17 = v22;
    if ( val != slot0 )
      free(val);
    val = (char *)xmalloc(v20);
    *p_val = val;
    quotearg_buffer_restyled(
      val,
      v20,
      arg,
      v23,
      v24->style,
      v14,
      quote_these_too,
      (char *)v24->left_quote,
      v24->right_quote);
    v16 = v25;
  }
  else
  {
    v16 = v25;
    v17 = v22;
  }
  *v16 = v17;
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
  __int64 v4; // rsi
  quoting_options v6; // [rsp+0h] [rbp-38h] BYREF

  v6 = default_quoting_options;
  v4 = (unsigned __int8)ch_0 >> 5;
  v6.quote_these_too[v4] = v6.quote_these_too[v4] & ~(((~((v6.quote_these_too[v4] >> ch_0) & ((v6.quote_these_too[v4] >> ch_0) ^ 0xFFFFFFFE)) & 0x16B9B0E9 | (v6.quote_these_too[v4] >> ch_0) & ((v6.quote_these_too[v4] >> ch_0) ^ 0xFFFFFFFE) & 0xE9464F16) ^ 0x16B9B0E8) << ch_0) | (((~((v6.quote_these_too[v4] >> ch_0) & ((v6.quote_these_too[v4] >> ch_0) ^ 0xFFFFFFFE)) & 0x16B9B0E9 | (v6.quote_these_too[v4] >> ch_0) & ((v6.quote_these_too[v4] >> ch_0) ^ 0xFFFFFFFE) & 0xE9464F16) ^ 0x16B9B0E8) << ch_0) & ~v6.quote_these_too[v4];
  return quotearg_n_options(0, arg, argsize, &v6);
}

char *__fastcall quotearg_char(const char *arg, char ch_0)
{
  char v2; // cl
  __int64 v3; // rdx
  quoting_options v5; // [rsp+0h] [rbp-38h] BYREF

  v5 = default_quoting_options;
  v2 = ch_0 & (ch_0 ^ 0xE0);
  v3 = (unsigned __int8)ch_0 >> 5;
  v5.quote_these_too[v3] = (~((((v5.quote_these_too[v3] >> v2) & 1) == 0) << v2) & 0x192D388 | ((((v5.quote_these_too[v3] >> v2) & 1) == 0) << v2) & 0xFE6D2C77) ^ (~v5.quote_these_too[v3] & 0x192D388 | v5.quote_these_too[v3] & 0xFE6D2C77);
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &v5);
}

char *__fastcall quotearg_colon(const char *arg)
{
  quoting_options v2; // [rsp+0h] [rbp-38h] BYREF

  v2 = default_quoting_options;
  v2.quote_these_too[1] = default_quoting_options.quote_these_too[1] & 0x4000000 | default_quoting_options.quote_these_too[1] ^ 0x4000000;
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &v2);
}

char *__fastcall quotearg_colon_mem(const char *arg, size_t argsize)
{
  quoting_options v3; // [rsp+0h] [rbp-38h] BYREF

  v3 = default_quoting_options;
  v3.quote_these_too[1] = default_quoting_options.quote_these_too[1] & 0x4000000 | default_quoting_options.quote_these_too[1] ^ 0x4000000;
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
  v4.quote_these_too[1] = DWORD2(v5) & 0x4000000 | DWORD2(v5) ^ 0x4000000;
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &v4);
}

char *__fastcall quotearg_n_custom(int n, const char *left_quote, const char *right_quote, const char *arg)
{
  quoting_options v5; // [rsp+0h] [rbp-38h] BYREF

  v5 = default_quoting_options;
  v5.style = custom_quoting_style;
  if ( (left_quote != 0LL) != (right_quote != 0LL) || !left_quote )
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
  if ( left_quote == 0LL || right_quote == 0LL )
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
  if ( left_quote == 0LL || right_quote == 0LL )
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
  if ( left_quote == 0LL || right_quote == 0LL )
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
  int v4; // ecx
  bool v5; // zf
  const char *v6; // rcx

  result = dcgettext(0LL, msgid, 5);
  if ( result == msgid )
  {
    v3 = locale_charset();
    v4 = *v3 & (*v3 ^ 0x20);
    if ( v4 == 71 )
    {
      if ( (~v3[1] | 0x20) == -67 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && !v3[7] )
      {
        v5 = *msgid == 96;
        v6 = (const char *)&unk_407982;
        result = (const char *)&unk_407986;
LABEL_18:
        if ( v5 )
          return v6;
        return result;
      }
    }
    else if ( v4 == 85
           && (v3[1] & (v3[1] ^ 0x20)) == 84
           && (~v3[2] | 0x20) == -71
           && v3[3] == 45
           && v3[4] == 56
           && !v3[5] )
    {
      v5 = *msgid == 96;
      v6 = (const char *)&unk_40797A;
      result = (const char *)&unk_40797E;
      goto LABEL_18;
    }
    v5 = s == clocale_quoting_style;
    v6 = (const char *)asc_407974;
    result = (_BYTE *)(asc_407974 + 4);
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
  __int64 v6; // rax

  v5 = -1LL;
  v6 = 0LL;
  do
    ++v6;
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
  unsigned __int64 gp_offset; // r10
  const char **overflow_arg_area; // r9
  _QWORD *v7; // r9
  size_t v8; // r9
  _QWORD *v9; // r9
  _QWORD *v10; // r9
  _QWORD *v11; // r9
  int v12; // r10d
  _QWORD *v13; // r9
  _QWORD *v14; // r9
  _QWORD *v15; // r9
  _QWORD *v16; // r9
  __int64 *v17; // r9
  const char *v18; // [rsp+0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+48h] [rbp-10h]

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
  v18 = *overflow_arg_area;
  if ( v18 )
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
            v12 = -(int)gp_offset;
            authors->gp_offset = 8 - v12;
            LODWORD(gp_offset) = 8 - v12;
          }
          if ( *v11 )
          {
            if ( (unsigned int)gp_offset >= 0x29 )
            {
              v13 = authors->overflow_arg_area;
              authors->overflow_arg_area = v13 + 1;
            }
            else
            {
              v13 = (char *)authors->reg_save_area + (int)gp_offset;
              authors->gp_offset = gp_offset + 8;
            }
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
                  v16 = authors->overflow_arg_area;
                  authors->overflow_arg_area = v16 + 1;
                  if ( *v16 )
                  {
                    v17 = (__int64 *)authors->overflow_arg_area;
                    authors->overflow_arg_area = v17 + 1;
                    v27 = *v17;
                    v8 = 9 - ((v27 == 0) - 1LL);
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
  version_etc_arn(stream, command_name, package, version, &v18, v8);
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
  __printf_chk(1LL, v1, "GNU coreutils", "https://www.gnu.org/software/coreutils/");
  v2 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  fputs_unlocked(v2, stdout);
}

void *__fastcall xnmalloc(size_t n, size_t s)
{
  void *result; // rax

  if ( 0x7FFFFFFFFFFFFFFFLL / s < n || (result = malloc(n * s), n * s != 0 && result == 0LL) )
    xalloc_die();
  return result;
}

void *__fastcall xmalloc(size_t n)
{
  void *result; // rax

  result = malloc(n);
  if ( (result == 0LL) == (n != 0) )
  {
    if ( n )
      xalloc_die();
  }
  return result;
}

void *__fastcall xnrealloc(void *p, size_t n, size_t s)
{
  size_t v3; // rbx
  void *result; // rax

  if ( 0x7FFFFFFFFFFFFFFFLL / s < n )
    goto LABEL_6;
  v3 = n * s;
  if ( (n * s == 0) == (p != 0LL) && p )
  {
    free(p);
    return 0LL;
  }
  result = realloc(p, v3);
  if ( v3 != 0 && result == 0LL )
LABEL_6:
    xalloc_die();
  return result;
}

void *__fastcall xrealloc(void *p, size_t n)
{
  void *result; // rax

  if ( p == 0LL || n != 0 )
  {
    result = realloc(p, n);
    if ( n != 0 && result == 0LL )
      xalloc_die();
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
  unsigned __int64 v3; // rcx
  size_t v4; // rbx
  void *result; // rax

  v3 = *pn;
  if ( p )
  {
    if ( 0x5555555555555554LL / s <= v3 )
      goto LABEL_10;
    v3 = (v3 >> 1) + v3 - 0x3D08F1964B422EF0LL + 0x3D08F1964B422EF1LL;
  }
  else
  {
    if ( !v3 )
      v3 = (s > 0x80) + 0x80 / s;
    if ( 0x7FFFFFFFFFFFFFFFLL / s < v3 )
      xalloc_die();
  }
  *pn = v3;
  v4 = v3 * s;
  if ( p != 0LL && v3 * s == 0 )
  {
    free(p);
    return 0LL;
  }
  result = realloc(p, v4);
  if ( v4 != 0 && result == 0LL )
LABEL_10:
    xalloc_die();
  return result;
}

char *__fastcall xcharalloc(size_t n)
{
  char *result; // rax

  result = (char *)malloc(n);
  if ( (result == 0LL) == (n != 0) )
  {
    if ( n )
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
  if ( (result == 0LL) == (v3 != 0) && v3 )
    goto LABEL_12;
  return result;
}

void *__fastcall xzalloc(size_t s)
{
  void *v1; // r14

  v1 = malloc(s);
  if ( (v1 == 0LL) == (s != 0) && s )
    xalloc_die();
  memset(v1, 0, s);
  return v1;
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
  void *v2; // r15

  v2 = malloc(s);
  if ( (v2 == 0LL) == (s != 0) && s )
    xalloc_die();
  memcpy(v2, p, s);
  return v2;
}

char *__fastcall xstrdup(const char *string)
{
  size_t v1; // rax
  size_t v2; // rbx
  bool v3; // bp
  void *v4; // r15

  v1 = strlen(string);
  v2 = v1 + 1;
  v3 = v1 != -1LL;
  v4 = malloc(v1 + 1);
  if ( v3 == (v4 == 0LL) && v2 )
    xalloc_die();
  memcpy(v4, string, v2);
  return (char *)v4;
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

uintmax_t __fastcall xnumtoumax(
        const char *n_str,
        int base,
        uintmax_t min,
        uintmax_t max,
        const char *suffixes,
        const char *err,
        int err_exit)
{
  uintmax_t v7; // rax
  strtol_error_0 v11; // eax
  int *v12; // rax
  uintmax_t v13; // rbx
  int v14; // edx
  int v15; // ebx
  int v16; // ebp
  const char *v17; // rax
  uintmax_t v19[7]; // [rsp+0h] [rbp-38h] BYREF

  v19[0] = v7;
  v11 = xstrtoumax(n_str, 0LL, base, v19, suffixes);
  if ( v11 )
  {
    if ( v11 == LONGINT_OVERFLOW )
    {
      v12 = __errno_location();
      *v12 = 75;
    }
    else if ( v11 == LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW )
    {
      v12 = __errno_location();
      *v12 = 0;
    }
    else
    {
      v12 = __errno_location();
    }
  }
  else
  {
    v13 = v19[0];
    if ( v19[0] <= max == v19[0] >= min && (v19[0] <= max || v19[0] >= min) )
      return v13;
    v12 = __errno_location();
    v14 = 34;
    if ( v13 > 0x3FFFFFFF )
      v14 = 75;
    *v12 = v14;
  }
  v15 = 1;
  if ( err_exit )
    v15 = err_exit;
  v16 = *v12;
  if ( *v12 == 22 )
    v16 = 0;
  v17 = quote(n_str);
  error(v15, v16, "%s: %s", err, v17);
  return v19[0];
}

uintmax_t __fastcall xdectoumax(
        const char *n_str,
        uintmax_t min,
        uintmax_t max,
        const char *suffixes,
        const char *err,
        int err_exit)
{
  return xnumtoumax(n_str, 10, min, max, suffixes, err, err_exit);
}

strtol_error_0 __fastcall xstrtoumax(
        const char *s,
        char **ptr,
        int strtol_base,
        uintmax_t *val,
        const char *valid_suffixes)
{
  int *v8; // r15
  const unsigned __int16 *v9; // rcx
  const char *v10; // rdx
  __int64 v11; // rax
  char **v12; // rsi
  strtol_error_0 v13; // r13d
  int v14; // ebp
  uintmax_t v15; // r12
  char *v16; // rcx
  strtol_error_0 v17; // r15d
  char *v18; // rbx
  char *v19; // rax
  int v20; // r13d
  __int64 v21; // r8
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // eax
  unsigned __int64 v26; // rax
  char v27; // dl
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rbp
  __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  bool v32; // bl
  char v33; // bl
  unsigned __int64 v34; // rdi
  char v35; // dl
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // rdi
  char v38; // dl
  uintmax_t v39; // rdx
  uintmax_t v40; // r12
  unsigned __int64 v41; // rax
  char v42; // r9
  unsigned __int64 v43; // rbx
  char v44; // dl
  unsigned __int64 v45; // rbp
  unsigned __int64 v46; // rbx
  bool v47; // r11
  unsigned __int64 v48; // rdi
  bool v49; // r14
  unsigned __int64 v50; // rbp
  bool v51; // dl
  char v52; // dl
  char v53; // dl
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rbp
  unsigned __int64 v57; // rdi
  bool v58; // r9
  char v59; // dl
  char v60; // bl
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rcx
  bool v63; // r13
  unsigned __int64 v64; // rbp
  bool v65; // dl
  unsigned __int64 v66; // rbx
  bool v67; // r14
  unsigned __int64 v68; // rbp
  bool v69; // r12
  unsigned __int64 v70; // rbx
  bool v71; // cf
  strtol_error_0 v72; // ebp
  bool v73; // r15
  unsigned __int64 v74; // r10
  bool v75; // cf
  unsigned __int64 v76; // r9
  bool v77; // cl
  bool v78; // r10
  char v79; // r11
  char v80; // dl
  char v81; // dl
  char v82; // al
  char v83; // dl
  char v84; // dl
  char v85; // dl
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // rbp
  char v88; // dl
  unsigned __int64 v89; // rcx
  char v90; // dl
  unsigned __int64 v91; // rbp
  char v92; // dl
  char v93; // dl
  unsigned __int64 v94; // rcx
  char v95; // dl
  strtol_error_0 v96; // eax
  __int64 v98; // rcx
  bool v99; // [rsp+6h] [rbp-52h]
  char *v101; // [rsp+10h] [rbp-48h]
  char **v102; // [rsp+18h] [rbp-40h]
  char v103; // [rsp+20h] [rbp-38h] BYREF

  if ( (unsigned int)strtol_base >= 0x25 )
    __assert_fail(
      "0 <= strtol_base && strtol_base <= 36",
      "../lib/xstrtol.c",
      0x54u,
      "strtol_error xstrtoumax(const char *, char **, int, uintmax_t *, const char *)");
  v8 = __errno_location();
  *v8 = 0;
  v9 = *__ctype_b_loc();
  v10 = s;
  do
    v11 = *(unsigned __int8 *)v10++;
  while ( (v9[v11] & (v9[v11] ^ 0xDFFF)) != 0 );
  v12 = (char **)&v103;
  if ( ptr )
    v12 = ptr;
  v13 = LONGINT_INVALID;
  if ( (_BYTE)v11 != 45 )
  {
    v14 = 0;
    v102 = v12;
    v15 = __strtoul_internal(s, v12, strtol_base, 0);
    v16 = *v12;
    if ( *v12 == s )
    {
      if ( valid_suffixes )
      {
        if ( *s )
        {
          v18 = *v12;
          v19 = strchr(valid_suffixes, *s);
          v16 = v18;
          if ( v19 )
          {
            v17 = LONGINT_OK;
            v15 = 1LL;
            goto LABEL_17;
          }
        }
      }
    }
    else
    {
      if ( !*v8 )
        goto LABEL_11;
      if ( *v8 == 34 )
      {
        v14 = 1;
LABEL_11:
        v17 = v14;
        if ( !valid_suffixes )
          goto LABEL_114;
LABEL_17:
        v20 = *v16;
        if ( !*v16 )
        {
LABEL_114:
          *val = v15;
          return v17;
        }
        v101 = v16;
        if ( !strchr(valid_suffixes, v20) )
        {
          *val = v15;
          return v17 | 2;
        }
        v21 = 1LL;
        v22 = 1024LL;
        v23 = (unsigned int)(v20 - 69);
        if ( (unsigned int)v23 <= 0x2F )
        {
          v24 = 0x814400308945LL;
          if ( _bittest64(&v24, v23) )
          {
            if ( !strchr(valid_suffixes, 48) )
              goto LABEL_27;
            v25 = v101[1];
            if ( v25 == 66 || v25 == 68 )
            {
              v21 = 2LL;
              v22 = 1000LL;
              goto LABEL_29;
            }
            if ( v25 == 105 )
            {
              v21 = 2LL * (v101[2] == 66) + 1;
              v22 = 1024LL;
            }
            else
            {
LABEL_27:
              v21 = 1LL;
              v22 = 1024LL;
            }
          }
        }
LABEL_29:
        LODWORD(v26) = 0;
        switch ( v20 )
        {
          case 'B':
            v39 = v15 >> 54;
            v26 = v15 >> 54 != 0;
            v40 = v15 << 10;
            goto LABEL_118;
          case 'E':
            v41 = 0xFFFFFFFFFFFFFFFFLL / v22;
            v42 = -(0xFFFFFFFFFFFFFFFFLL / v22 < v15);
            v43 = v22 * v15;
            if ( 0xFFFFFFFFFFFFFFFFLL / v22 < v15 )
              v43 = -1LL;
            v44 = -(v41 < v43);
            v45 = v22 * v43;
            if ( v41 < v43 )
              v45 = -1LL;
            v46 = v22 * v45;
            if ( v41 < v45 )
              v46 = -1LL;
            v47 = v41 >= v45;
            v48 = v22 * v46;
            if ( v41 < v46 )
              v48 = -1LL;
            v50 = v22 * v48;
            if ( v41 < v48 )
              v50 = -1LL;
            v30 = v50 * v22;
            if ( v41 < v50 )
              v30 = -1LL;
            v51 = (((unsigned __int8)(v42 ^ v44) | (unsigned __int8)(v42 & v44)) & 1) == 0;
            v52 = (v51 ^ v47 | (!v47 && !v51)) ^ 1;
            v49 = v41 >= v46;
            v53 = ((v52 ^ v49 | (v49 | v52) ^ 1) & (v41 < v48) | (v41 < v48) ^ (v52 ^ v49 | (v49 | v52) ^ 1)) ^ -(v41 < v50) | ~((v41 >= v50) | ~((v52 ^ v49 | (v49 | v52) ^ 1) & (v41 < v48) | (v41 < v48) ^ (v52 ^ v49 | (v49 | v52) ^ 1)));
            goto LABEL_109;
          case 'G':
          case 'g':
            v26 = 0xFFFFFFFFFFFFFFFFLL / v22;
            v27 = -(0xFFFFFFFFFFFFFFFFLL / v22 < v15);
            v28 = v22 * v15;
            if ( 0xFFFFFFFFFFFFFFFFLL / v22 < v15 )
              v28 = -1LL;
            v29 = v22 * v28;
            if ( v26 < v28 )
              v29 = -1LL;
            v30 = v29 * v22;
            if ( v26 < v29 )
              v30 = -1LL;
            LODWORD(v26) = ((unsigned __int8)((v27 ^ -(v26 < v28) | (v26 < v28 ? v27 : 0)) ^ -(v26 < v29)) | (v26 < v29 ? (unsigned __int8)(v27 ^ -(v26 < v28)) | (unsigned __int8)(v26 < v28 ? v27 : 0) : 0)) & 1;
            goto LABEL_111;
          case 'K':
          case 'k':
            v26 = 0xFFFFFFFFFFFFFFFFLL / v22;
            v30 = v15 * v22;
            if ( v26 < v15 )
              v30 = -1LL;
            LODWORD(v26) = -(v26 < v15);
            goto LABEL_110;
          case 'M':
          case 'm':
            v26 = 0xFFFFFFFFFFFFFFFFLL / v22;
            v31 = v22 * v15;
            if ( 0xFFFFFFFFFFFFFFFFLL / v22 < v15 )
              v31 = -1LL;
            v32 = 0xFFFFFFFFFFFFFFFFLL / v22 >= v15;
            v30 = v31 * v22;
            if ( v26 < v31 )
              v30 = -1LL;
            LODWORD(v26) = v32 ^ (v26 >= v31) | (!v32 && v26 < v31);
            goto LABEL_111;
          case 'P':
            v54 = 0xFFFFFFFFFFFFFFFFLL / v22;
            v55 = v22 * v15;
            if ( 0xFFFFFFFFFFFFFFFFLL / v22 < v15 )
              v55 = -1LL;
            v56 = v22 * v55;
            if ( v54 < v55 )
              v56 = -1LL;
            v57 = v22 * v56;
            if ( v54 < v56 )
              v57 = -1LL;
            v58 = v54 >= v56;
            v59 = (((unsigned __int8)(-(0xFFFFFFFFFFFFFFFFLL / v22 < v15) ^ -(v54 < v55)) | (0xFFFFFFFFFFFFFFFFLL / v22 < v15
                                                                                           ? -(v54 < v55)
                                                                                           : 0)) & 1) == 0;
            v60 = v59 ^ (v54 >= v56);
            goto LABEL_104;
          case 'T':
          case 't':
            v26 = 0xFFFFFFFFFFFFFFFFLL / v22;
            v33 = -(0xFFFFFFFFFFFFFFFFLL / v22 < v15);
            v34 = v22 * v15;
            if ( 0xFFFFFFFFFFFFFFFFLL / v22 < v15 )
              v34 = -1LL;
            v35 = -(v26 < v34);
            v36 = v22 * v34;
            if ( v26 < v34 )
              v36 = -1LL;
            v37 = v22 * v36;
            if ( v26 < v36 )
              v37 = -1LL;
            v30 = v37 * v22;
            if ( v26 < v37 )
              v30 = -1LL;
            v38 = (v33 ^ v35 | v33 & v35) ^ -(v26 < v36) | (v26 < v36 ? v33 ^ v35 | v33 & v35 : 0);
            LOBYTE(v26) = -(v26 < v37) ^ v38 & 1 | (v26 < v37 && (v38 & 1) != 0);
            goto LABEL_110;
          case 'Y':
            v61 = 0xFFFFFFFFFFFFFFFFLL / v22;
            v62 = v22 * v15;
            if ( 0xFFFFFFFFFFFFFFFFLL / v22 < v15 )
              v62 = -1LL;
            v63 = 0xFFFFFFFFFFFFFFFFLL / v22 >= v15;
            v64 = v22 * v62;
            if ( v61 < v62 )
              v64 = -1LL;
            v65 = v61 >= v62;
            v66 = v22 * v64;
            if ( v61 < v64 )
              v66 = -1LL;
            v67 = v61 >= v64;
            v68 = v22 * v66;
            v69 = v61 < v66;
            if ( v61 < v66 )
              v68 = -1LL;
            v70 = v22 * v68;
            v71 = v61 < v68;
            if ( v61 < v68 )
              v70 = -1LL;
            v72 = v17;
            v73 = !v71;
            v74 = v22 * v70;
            v75 = v61 < v70;
            if ( v61 < v70 )
              v74 = -1LL;
            v76 = v22 * v74;
            v77 = v61 < v74;
            if ( v61 < v74 )
              v76 = -1LL;
            v78 = v61 >= v74;
            v79 = -(v61 < v76);
            v99 = v61 >= v76;
            v30 = v76 * v22;
            if ( v61 < v76 )
              v30 = -1LL;
            v80 = (v63 ^ v65 | (!v63 && !v65)) ^ 1;
            v81 = ((v80 ^ v67 | (v67 | v80) ^ 1) & v69 | v69 ^ (v80 ^ v67 | (v67 | v80) ^ 1)) ^ 1;
            v82 = v81 ^ v73;
            v83 = v73 | v81;
            v17 = v72;
            v84 = (v82 | v83 ^ 1) ^ v75 | (!v75 | (v82 | v83 ^ 1) ^ 1) ^ 1;
            v85 = v84 ^ v77 | (v78 | v84 ^ 1) ^ 1;
            v53 = v85 ^ v79 | ~(v99 | ~v85);
            goto LABEL_109;
          case 'Z':
            v54 = 0xFFFFFFFFFFFFFFFFLL / v22;
            v86 = v22 * v15;
            if ( 0xFFFFFFFFFFFFFFFFLL / v22 < v15 )
              v86 = -1LL;
            v87 = v22 * v86;
            if ( v54 < v86 )
              v87 = -1LL;
            v88 = (0xFFFFFFFFFFFFFFFFLL / v22 >= v15) ^ (v54 >= v86) | (0xFFFFFFFFFFFFFFFFLL / v22 < v15 && v54 < v86);
            v89 = v22 * v87;
            if ( v54 < v87 )
              v89 = -1LL;
            v90 = v88 & (v54 < v87) | (v54 < v87) ^ v88;
            v91 = v22 * v89;
            if ( v54 < v89 )
              v91 = -1LL;
            v92 = v90 & (v54 < v89) | (v54 < v89) ^ v90;
            v57 = v22 * v91;
            if ( v54 < v91 )
              v57 = -1LL;
            v58 = v54 >= v91;
            v60 = v92 ^ (v54 < v91);
            v59 = v92 ^ 1;
LABEL_104:
            v93 = v60 | (v58 | v59) ^ 1;
            v94 = v22 * v57;
            if ( v54 < v57 )
              v94 = -1LL;
            v95 = v93 & (v54 < v57) | (v54 < v57) ^ v93;
            v30 = v94 * v22;
            if ( v54 < v94 )
              v30 = -1LL;
            v53 = v95 ^ 1 ^ (v54 >= v94) | ~((v54 >= v94) | v95 ^ 1);
LABEL_109:
            LOBYTE(v26) = v53;
LABEL_110:
            LODWORD(v26) = v26 & 1;
LABEL_111:
            v15 = v30;
            goto LABEL_112;
          case 'b':
            v39 = v15 >> 55;
            v26 = v15 >> 55 != 0;
            v40 = v15 << 9;
LABEL_118:
            v15 = -(__int64)(v39 != 0) | v40;
            goto LABEL_112;
          case 'c':
            goto LABEL_112;
          case 'w':
            v98 = -1LL;
            if ( (v15 & 0x8000000000000000LL) == 0LL )
              v98 = 2 * v15;
            LODWORD(v26) = v15 >> 63;
            v15 = v98;
LABEL_112:
            v96 = v17 & v26 | v17 ^ v26;
            *v102 = &v101[v21];
            v17 = v96 + 2;
            if ( !v101[v21] )
              v17 = v96;
            goto LABEL_114;
          default:
            *val = v15;
            return ~v17 & 0x422869BF ^ 0x422869BD;
        }
      }
    }
  }
  return v13;
}

// local variable allocation has failed, the output may be wrong!
void *__fastcall rpl_calloc(size_t n, size_t s)
{
  __int64 v2; // rsi
  size_t v3; // rax
  size_t v4; // rcx
  size_t v5; // rsi

  v3 = 1LL;
  if ( *(_OWORD *)&n == 0LL )
  {
    v4 = 1LL;
  }
  else
  {
    v4 = 1LL;
    if ( (v2 == 0) == (n == 0) )
    {
      v3 = v5;
      v4 = n;
      if ( n * v5 / v5 != n )
      {
        *__errno_location() = 12;
        return 0LL;
      }
    }
  }
  return calloc(v4, v3);
}

size_t __fastcall rpl_mbrtowc(wchar_t *pwc, const char *s, size_t n, mbstate_t *ps)
{
  __int64 v4; // rax
  int *v6; // r12
  size_t v7; // r15
  int v9; // [rsp+0h] [rbp-24h] BYREF

  v9 = HIDWORD(v4);
  v6 = &v9;
  if ( pwc )
    v6 = pwc;
  v7 = mbrtowc(v6, s, n, ps);
  if ( n != 0 && v7 >= 0xFFFFFFFFFFFFFFFELL && !hard_locale(0) )
  {
    *v6 = *(unsigned __int8 *)s;
    return 1LL;
  }
  return v7;
}

int __fastcall close_stream(FILE *stream)
{
  size_t v1; // r14
  unsigned int v2; // ebp
  int v3; // eax
  int v4; // ebx

  v1 = __fpending(stream);
  v2 = ~LOBYTE(stream->_flags) | 0xFFFFFFDF;
  v3 = rpl_fclose(stream);
  if ( v2 == -1 )
  {
    v4 = -(v3 != 0);
    if ( (v3 != 0 || v1 == 0) && (v3 == 0) == (v1 != 0) )
    {
      v4 = -1;
      if ( *__errno_location() == 9 )
        return 0;
    }
  }
  else
  {
    v4 = -1;
    if ( !v3 )
      *__errno_location() = 0;
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
  v1 = "\n"
       "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
       "This is free software: you are free to change and redistribute it.\n"
       "There is NO WARRANTY, to the extent permitted by law.\n"
       "\n"
     + 203;
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
  if ( stream && __freading(stream) && (stream->_flags & (stream->_flags ^ 0xFFFFFEFF)) != 0 )
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
