#include "decompile_idapro_obfuscated.h"
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
  enum_quoting_style v18; // edx
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
  enum_quoting_style v72; // r8d
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
  enum_quoting_style s; // [rsp+30h] [rbp-B8h]
  size_t v95; // [rsp+38h] [rbp-B0h]
  const char *s2; // [rsp+40h] [rbp-A8h]
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
        s2 = "'";
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
        s2 = "\"";
        v19 = 1LL;
        v17 = 1;
        LOBYTE(v20) = v12;
        v18 = c_quoting_style;
        goto LABEL_36;
      case 6u:
        v17 = 1;
        v18 = c_quoting_style;
        v16 = 0LL;
        s2 = "\"";
        v19 = 1LL;
        LOBYTE(v20) = 1;
        goto LABEL_36;
      case 7u:
        goto LABEL_36;
      case 8u:
      case 9u:
        v23 = v13;
        left_quote = (char *)gettext_quote("`", (enum_quoting_style)quoting_style);
        v20 = quoting_style;
        v24 = gettext_quote("'", (enum_quoting_style)quoting_style);
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
        s2 = right_quote;
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
      v76 = *s2;
      v77 = v98;
      if ( *s2 )
      {
        v78 = (char *)(s2 + 1);
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

char* __fastcall quotearg_alloc(const char *arg, size_t argsize, const quoting_options *o)
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

char* __fastcall quotearg_alloc_mem(const char *arg, size_t argsize, size_t *size, const quoting_options *o)
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

char* __fastcall quotearg_n(int n, const char *arg)
{
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &default_quoting_options);
}

char* __fastcall quotearg_n_options(int n, const char *arg, size_t argsize, const quoting_options *options)
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
  quoting_options options; // [rsp+40h] [rbp-38h] BYREF

  if ( s == custom_quoting_style )
    abort();
  options.style = s;
  memset(&options.flags, 0, 52);
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &options);
}

char* __fastcall quotearg_n_style_mem(int n, enum_quoting_style s, const char *arg, size_t argsize)
{
  quoting_options options; // [rsp+40h] [rbp-38h] BYREF

  if ( s == custom_quoting_style )
    abort();
  options.style = s;
  memset(&options.flags, 0, 52);
  return quotearg_n_options(n, arg, argsize, &options);
}

char* __fastcall quotearg_style(enum_quoting_style s, const char *arg)
{
  quoting_options options; // [rsp+40h] [rbp-38h] BYREF

  if ( s == custom_quoting_style )
    abort();
  options.style = s;
  memset(&options.flags, 0, 52);
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &options);
}

char* __fastcall quotearg_style_mem(enum_quoting_style s, const char *arg, size_t argsize)
{
  quoting_options options; // [rsp+40h] [rbp-38h] BYREF

  if ( s == custom_quoting_style )
    abort();
  options.style = s;
  memset(&options.flags, 0, 52);
  return quotearg_n_options(0, arg, argsize, &options);
}

char* __fastcall quotearg_char_mem(const char *arg, size_t argsize, char ch_0)
{
  __int64 v4; // rsi
  quoting_options v6; // [rsp+0h] [rbp-38h] BYREF

  v6 = default_quoting_options;
  v4 = (unsigned __int8)ch_0 >> 5;
  v6.quote_these_too[v4] = v6.quote_these_too[v4] & ~(((~((v6.quote_these_too[v4] >> ch_0) & ((v6.quote_these_too[v4] >> ch_0) ^ 0xFFFFFFFE)) & 0x16B9B0E9 | (v6.quote_these_too[v4] >> ch_0) & ((v6.quote_these_too[v4] >> ch_0) ^ 0xFFFFFFFE) & 0xE9464F16) ^ 0x16B9B0E8) << ch_0) | (((~((v6.quote_these_too[v4] >> ch_0) & ((v6.quote_these_too[v4] >> ch_0) ^ 0xFFFFFFFE)) & 0x16B9B0E9 | (v6.quote_these_too[v4] >> ch_0) & ((v6.quote_these_too[v4] >> ch_0) ^ 0xFFFFFFFE) & 0xE9464F16) ^ 0x16B9B0E8) << ch_0) & ~v6.quote_these_too[v4];
  return quotearg_n_options(0, arg, argsize, &v6);
}

char* __fastcall quotearg_char(const char *arg, char ch_0)
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

char* __fastcall quotearg_colon(const char *arg)
{
  quoting_options v2; // [rsp+0h] [rbp-38h] BYREF

  v2 = default_quoting_options;
  v2.quote_these_too[1] = default_quoting_options.quote_these_too[1] & 0x4000000 | default_quoting_options.quote_these_too[1] ^ 0x4000000;
  return quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &v2);
}

char* __fastcall quotearg_colon_mem(const char *arg, size_t argsize)
{
  quoting_options v3; // [rsp+0h] [rbp-38h] BYREF

  v3 = default_quoting_options;
  v3.quote_these_too[1] = default_quoting_options.quote_these_too[1] & 0x4000000 | default_quoting_options.quote_these_too[1] ^ 0x4000000;
  return quotearg_n_options(0, arg, argsize, &v3);
}

char* __fastcall quotearg_n_style_colon(int n, enum_quoting_style s, const char *arg)
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

char* __fastcall quotearg_n_custom(int n, const char *left_quote, const char *right_quote, const char *arg)
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

char* __fastcall quotearg_n_custom_mem(
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

char* __fastcall quotearg_custom(const char *left_quote, const char *right_quote, const char *arg)
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

char* __fastcall quotearg_custom_mem(const char *left_quote, const char *right_quote, const char *arg, size_t argsize)
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
        v6 = (const char *)&unk_406884;
        result = (const char *)&unk_406888;
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
  __printf_chk(1LL, v1, "GNU coreutils");
  v2 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  fputs_unlocked(v2, stdout);
}

void* __fastcall xnmalloc(size_t n, size_t s)
{
  void *result; // rax

  if ( 0x7FFFFFFFFFFFFFFFLL / s < n || (result = malloc(n * s), n * s != 0 && result == 0LL) )
    xalloc_die();
  return result;
}

void* __fastcall xmalloc(size_t n)
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

void* __fastcall xnrealloc(void *p, size_t n, size_t s)
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

void* __fastcall xrealloc(void *p, size_t n)
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

void* __fastcall x2nrealloc(void *p, size_t *pn, size_t s)
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

char* __fastcall xcharalloc(size_t n)
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

void* __fastcall x2realloc(void *p, size_t *pn)
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

void* __fastcall xzalloc(size_t s)
{
  void *v1; // r14

  v1 = malloc(s);
  if ( (v1 == 0LL) == (s != 0) && s )
    xalloc_die();
  memset(v1, 0, s);
  return v1;
}

void* __fastcall xcalloc(size_t n, size_t s)
{
  void *result; // rax

  if ( 0x7FFFFFFFFFFFFFFFLL / s < n || (result = rpl_calloc(n, s)) == 0LL )
    xalloc_die();
  return result;
}

void* __fastcall xmemdup(const void *p, size_t s)
{
  void *v2; // r15

  v2 = malloc(s);
  if ( (v2 == 0LL) == (s != 0) && s )
    xalloc_die();
  memcpy(v2, p, s);
  return v2;
}

char* __fastcall xstrdup(const char *string)
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

// local variable allocation has failed, the output may be wrong!
void* __fastcall rpl_calloc(size_t n, size_t s)
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
