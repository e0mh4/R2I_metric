void dl_relocate_static_pie()
{
  ;
}

void __fastcall __noreturn usage(int status)
{
  int v1; // ebp
  int v2; // eax
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  int v9; // ecx
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  FILE *v16; // rbx
  char *v17; // rax

  v1 = 219197285;
  if ( status )
    v1 = -1633184545;
  v2 = -788499993;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v2;
        if ( v2 > -1129394059 )
          break;
        if ( v2 == -1668738767 )
        {
          v2 = -1129394058;
        }
        else if ( v2 == -1633184545 )
        {
          v16 = stderr;
          v17 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
          __fprintf_chk(v16, 1LL, v17, program_name);
          v2 = -1129394058;
        }
        else
        {
          v3 = dcgettext(0LL, "Usage: %s [OPTION] NAME...\n", 5);
          __printf_chk(1LL, v3, program_name);
          v4 = dcgettext(
                 0LL,
                 "Output each NAME with its last non-slash component and trailing slashes\n"
                 "removed; if NAME contains no /'s, output '.' (meaning the current directory).\n"
                 "\n",
                 5);
          fputs_unlocked(v4, stdout);
          v5 = dcgettext(0LL, "  -z, --zero     end each output line with NUL, not newline\n", 5);
          fputs_unlocked(v5, stdout);
          v6 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
          fputs_unlocked(v6, stdout);
          v7 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
          fputs_unlocked(v7, stdout);
          v8 = dcgettext(
                 0LL,
                 "\n"
                 "Examples:\n"
                 "  %s /usr/bin/          -> \"/usr\"\n"
                 "  %s dir1/str dir2/str  -> \"dir1\" followed by \"dir2\"\n"
                 "  %s stdio.h            -> \".\"\n",
                 5);
          __printf_chk(1LL, v8, program_name);
          emit_ancillary_info((const char *)1);
          v2 = 1605464596;
        }
      }
      if ( v2 <= 219197284 )
        break;
      if ( v2 == 219197285 )
      {
        v2 = -1315432489;
        if ( (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1 )
          v2 = 1605464596;
        if ( y >= 10 )
          v2 = -1315432489;
        if ( ((~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1) != y < 10 )
          v2 = 1605464596;
      }
      else
      {
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
        emit_ancillary_info((const char *)1);
        v2 = -1315432489;
        if ( (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1 )
          v2 = -1668738767;
        if ( y >= 10 )
          v2 = -1315432489;
        if ( ((~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1) != y < 10 )
          v2 = -1668738767;
      }
    }
    v2 = v1;
  }
  while ( v9 == -788499993 );
  if ( v9 != -1129394058 )
  {
    while ( 1 )
      ;
  }
  exit(status);
}

void __fastcall emit_ancillary_info(const char *program)
{
  bool v1; // bp
  const emit_ancillary_info::infomap *v2; // r12
  const char *v3; // r15
  int v4; // eax
  bool v5; // cl
  bool v6; // zf
  int v7; // esi
  bool v8; // zf
  int v9; // ecx
  char *v10; // rax
  int v11; // edx
  unsigned int v12; // edx
  int v13; // esi
  char *v14; // rax
  char *v15; // rax
  char *v16; // rsi
  char v17; // [rsp+Ch] [rbp-5Ch]
  char v18; // [rsp+Dh] [rbp-5Bh]
  bool v19; // [rsp+Eh] [rbp-5Ah]
  bool v20; // [rsp+Fh] [rbp-59h]
  char *s2; // [rsp+10h] [rbp-58h]
  const char *s1; // [rsp+18h] [rbp-50h]
  const emit_ancillary_info::infomap *v23; // [rsp+20h] [rbp-48h]
  const char *node; // [rsp+28h] [rbp-40h]
  const char *v25; // [rsp+30h] [rbp-38h]

  v17 = ((x_34 * (x_34 - 1)) & ((x_34 * (x_34 - 1)) ^ 0xFFFFFFFE)) == 0;
  v18 = y_35 < 10;
  v4 = 464202809;
  while ( 1 )
  {
LABEL_53:
    while ( v4 > 348267500 )
    {
      if ( v4 <= 464202808 )
      {
        if ( v4 == 348267501 )
        {
          v25 = v3;
          v14 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
          __printf_chk(1LL, v14, "GNU coreutils");
          s1 = setlocale(5, 0LL);
          v8 = s1 == 0LL;
          v4 = -667100153;
          v9 = 37751605;
LABEL_50:
          while ( 2 )
          {
            if ( !v8 )
              v4 = v9;
            if ( v4 > 820507352 )
            {
              while ( 1 )
              {
LABEL_11:
                while ( v4 <= 1465305614 )
                {
                  if ( v4 <= 911157407 )
                  {
                    if ( v4 == 820507353 )
                    {
                      v4 = 1137235312;
                    }
                    else
                    {
                      v23 = v2;
                      s2 = (char *)v2->program;
                      v4 = 1728996040;
                      if ( v2->program )
                        v4 = 776376918;
                      v1 = 0;
                      if ( v4 <= 820507352 )
                        goto LABEL_53;
                    }
                  }
                  else if ( v4 == 911157408 )
                  {
                    v4 = 1728996040;
                    v1 = v19;
                  }
                  else if ( v4 == 1033274510 )
                  {
                    v19 = strcmp("dirname", s2) != 0;
                    v4 = -1309016529;
                    if ( ((x_34 * (x_34 - 1)) & ((x_34 * (x_34 - 1)) ^ 0xFFFFFFFE)) == 0 )
                      v4 = 911157408;
                    if ( y_35 >= 10 )
                      v4 = -1309016529;
                    if ( (((x_34 * (x_34 - 1)) & ((x_34 * (x_34 - 1)) ^ 0xFFFFFFFE)) == 0) != y_35 < 10 )
                      v4 = 911157408;
                    if ( v4 <= 820507352 )
                      goto LABEL_53;
                  }
                  else
                  {
                    v4 = 820507353;
                    if ( ((x_34 * (x_34 - 1)) & ((x_34 * (x_34 - 1)) ^ 0xFFFFFFFE)) == 0 )
                      v4 = 776382717;
                    if ( y_35 >= 10 )
                      v4 = 820507353;
                    if ( (((x_34 * (x_34 - 1)) & ((x_34 * (x_34 - 1)) ^ 0xFFFFFFFE)) == 0) != y_35 < 10 )
                      v4 = 776382717;
                    if ( v4 <= 820507352 )
                      goto LABEL_53;
                  }
                }
                if ( v4 <= 1508928274 )
                {
                  if ( v4 != 1465305615 )
                  {
                    v8 = !v20;
                    v4 = -667100153;
                    v9 = 393466007;
                    goto LABEL_50;
                  }
                  v3 = node;
                  v4 = 348267501;
                  goto LABEL_53;
                }
                if ( v4 != 1508928275 )
                  break;
                node = v23->node;
                v4 = 348267501;
                if ( node )
                  v4 = 1465305615;
                v3 = "dirname";
                if ( v4 <= 820507352 )
                  goto LABEL_53;
              }
              if ( v4 == 1728996040 )
              {
                v8 = !v1;
                v4 = 1508928275;
                v9 = -438560624;
                continue;
              }
              v4 = 130400861;
            }
            break;
          }
        }
        else
        {
          v10 = dcgettext(0LL, "Report any translation bugs to <https://translationproject.org/team/>\n", 5);
          fputs_unlocked(v10, stdout);
          v4 = -667100153;
        }
      }
      else
      {
        if ( v4 == 464202809 )
        {
          v11 = 820507353;
          if ( v18 != v17 )
            v11 = 1137235312;
          v4 = v11;
          if ( v18 )
            v4 = 1137235312;
          if ( !v17 )
            v4 = v11;
          goto LABEL_11;
        }
        if ( v4 != 776376918 )
        {
          v4 = 844320088;
          v2 = emit_ancillary_info_infomap;
          goto LABEL_11;
        }
        v12 = ~((_BYTE)x_34 * ((_BYTE)x_34 - 1)) | 0xFFFFFFFE;
        v13 = -1309016529;
        if ( (v12 == -1) != y_35 < 10 )
          v13 = 1033274510;
        v4 = v13;
        if ( v12 == -1 )
          v4 = 1033274510;
        if ( y_35 >= 10 )
          v4 = v13;
        if ( v4 > 820507352 )
          goto LABEL_11;
      }
    }
    if ( v4 <= 37751604 )
      break;
    if ( v4 == 37751605 )
    {
      v5 = ((x_34 * (x_34 - 1)) & ((x_34 * (x_34 - 1)) ^ 0xFFFFFFFE)) == 0;
      v6 = v5;
      v4 = 1876917554;
      v7 = 130400861;
    }
    else
    {
      v20 = strncmp(s1, "en_", 3uLL) != 0;
      v6 = (~((_BYTE)x_34 * ((_BYTE)x_34 - 1)) | 0xFFFFFFFE) == -1;
      v5 = v6;
      v4 = 1876917554;
      v7 = 1486405029;
    }
    if ( v6 )
      v4 = v7;
    if ( y_35 >= 10 )
      v4 = 1876917554;
    if ( v5 != y_35 < 10 )
      v4 = v7;
    if ( v4 > 820507352 )
      goto LABEL_11;
  }
  if ( v4 == -1309016529 )
  {
    v4 = 1033274510;
    goto LABEL_11;
  }
  if ( v4 == -438560624 )
  {
    v2 = v23 + 1;
    v4 = 844320088;
    goto LABEL_11;
  }
  v15 = dcgettext(0LL, "Full documentation <%s%s>\n", 5);
  __printf_chk(1LL, v15, "https://www.gnu.org/software/coreutils/");
  v16 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v16, v25);
}

int __cdecl main(int argc, const char **argv, const char **envp)
{
  size_t v3; // r14
  const char *v4; // r15
  int v7; // eax
  char v8; // r12
  int i; // eax
  bool v10; // zf
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  bool v14; // zf
  int v15; // edx
  int v16; // esi
  char v17; // cl
  int v18; // esi
  bool v19; // cc
  char v20; // dl
  int v21; // edi
  bool v22; // cc
  int v23; // ecx
  unsigned int v24; // edx
  int v25; // esi
  int v26; // esi
  char *IO_write_ptr; // rax
  char *v29; // rax
  char v30; // [rsp+13h] [rbp-55h]
  char v31; // [rsp+14h] [rbp-54h]
  bool v32; // [rsp+15h] [rbp-53h]
  bool v33; // [rsp+16h] [rbp-52h]
  char v34; // [rsp+17h] [rbp-51h]
  int v35; // [rsp+18h] [rbp-50h]
  int v36; // [rsp+1Ch] [rbp-4Ch]
  int v37; // [rsp+20h] [rbp-48h]
  int v38; // [rsp+24h] [rbp-44h]
  char *file; // [rsp+28h] [rbp-40h]
  size_t v40; // [rsp+30h] [rbp-38h]

  set_program_name(*argv);
  setlocale(6, "");
  bindtextdomain("coreutils", "/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
  textdomain("coreutils");
  v7 = atexit(close_stdout);
  v30 = v7;
  v36 = v7;
  v8 = 0;
  for ( i = 1646371361; ; i = 1299759075 )
  {
    while ( 1 )
    {
LABEL_7:
      while ( i <= 1370001826 )
      {
        if ( i <= 635896653 )
        {
          if ( i <= 443145658 )
          {
            if ( i != -210601444 )
              usage(1);
            v17 = ((x_36 * (x_36 - 1)) & ((x_36 * (x_36 - 1)) ^ 0xFFFFFFFE)) == 0;
            i = 502190305;
            v18 = -1430133797;
            if ( ((x_36 * (x_36 - 1)) & ((x_36 * (x_36 - 1)) ^ 0xFFFFFFFE)) == 0 )
              i = -1430133797;
            v19 = y_37 < 10;
            v20 = y_37 < 10;
            v21 = 502190305;
LABEL_2:
            if ( !v19 )
              i = v21;
            if ( v17 != v20 )
              i = v18;
            if ( i <= -210601445 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
LABEL_58:
                  while ( i <= -969019696 )
                  {
                    if ( i <= -1611015152 )
                    {
                      if ( i <= -1823333725 )
                      {
                        if ( i != -2003603609 )
                          usage(0);
                        i = 2051216556;
                        goto LABEL_7;
                      }
                      if ( i == -1823333724 )
                      {
                        i = 1299759075;
                        v36 = 3;
                        v30 = v34;
                        goto LABEL_7;
                      }
                      i = -944586135;
                      v3 = 1LL;
                      v4 = ".";
                    }
                    else if ( i <= -1430133798 )
                    {
                      if ( i != -1611015151 )
                      {
                        file = (char *)argv[v37];
                        v40 = dir_len(file);
                        v33 = v40 != 0;
                        v17 = ((x_36 * (x_36 - 1)) & ((x_36 * (x_36 - 1)) ^ 0xFFFFFFFE)) == 0;
                        i = 2106831678;
                        v18 = -1611015151;
                        if ( ((x_36 * (x_36 - 1)) & ((x_36 * (x_36 - 1)) ^ 0xFFFFFFFE)) == 0 )
                          i = -1611015151;
                        v19 = y_37 < 10;
                        v20 = y_37 < 10;
                        v21 = 2106831678;
                        goto LABEL_2;
                      }
                      i = 865087130;
                      if ( v33 )
                        i = -944586135;
                      v4 = file;
                      v3 = v40;
                      if ( i > -210601445 )
                        goto LABEL_7;
                    }
                    else if ( i == -1430133797 )
                    {
                      i = -1304197112;
                    }
                    else
                    {
                      if ( i != -1304197112 )
                      {
                        v29 = dcgettext(0LL, "missing operand", 5);
                        error(0, 0, v29);
                        usage(1);
                      }
                      v22 = v35 < -130;
                      i = 635896654;
                      v23 = -255964682;
LABEL_64:
                      if ( v22 )
                        i = v23;
                      if ( i > -210601445 )
                        goto LABEL_7;
                    }
                  }
                  if ( i <= -783449463 )
                    break;
                  if ( i > -269937087 )
                  {
                    if ( i == -269937086 )
                    {
                      i = 1616007414;
                      if ( optind >= argc )
                        i = -1370245273;
                      if ( i > -210601445 )
                        goto LABEL_7;
                    }
                    else
                    {
                      v10 = v35 == -131;
                      i = 1318717054;
                      v11 = -901888133;
LABEL_88:
                      if ( v10 )
                        i = v11;
                      if ( i > -210601445 )
                        goto LABEL_7;
                    }
                  }
                  else
                  {
                    if ( i != -783449462 )
                    {
                      v10 = v35 == 122;
                      i = 1318717054;
                      v11 = 1370001827;
                      goto LABEL_88;
                    }
                    i = 2106831678;
                    if ( ((x_36 * (x_36 - 1)) & ((x_36 * (x_36 - 1)) ^ 0xFFFFFFFE)) == 0 )
                      i = -1448230571;
                    if ( y_37 >= 10 )
                      i = 2106831678;
                    if ( (((x_36 * (x_36 - 1)) & ((x_36 * (x_36 - 1)) ^ 0xFFFFFFFE)) == 0) != y_37 < 10 )
                      i = -1448230571;
                    if ( i > -210601445 )
                      goto LABEL_7;
                  }
                }
                if ( i > -901888134 )
                {
                  if ( i != -887172201 )
                  {
                    version_etc(stdout, "dirname", "GNU coreutils", Version, "David MacKenzie", "Jim Meyering", 0LL);
                    exit(0);
                  }
                  v17 = ((x_36 * (x_36 - 1)) & ((x_36 * (x_36 - 1)) ^ 0xFFFFFFFE)) == 0;
                  i = -969019695;
                  v18 = -1821124679;
                  if ( ((x_36 * (x_36 - 1)) & ((x_36 * (x_36 - 1)) ^ 0xFFFFFFFE)) == 0 )
                    i = -1821124679;
                  v19 = y_37 < 10;
                  v20 = y_37 < 10;
                  v21 = -969019695;
                  goto LABEL_2;
                }
                if ( i != -969019695 )
                  break;
                i = -887172201;
              }
              fwrite_unlocked(v4, 1uLL, v3, stdout);
              v26 = 10;
              if ( ((unsigned __int8)v31 & ((unsigned __int8)v31 ^ 0xFE)) != 0 )
                v26 = 0;
              IO_write_ptr = stdout->_IO_write_ptr;
              if ( IO_write_ptr >= stdout->_IO_write_end )
              {
                __overflow(stdout, v26);
              }
              else
              {
                stdout->_IO_write_ptr = IO_write_ptr + 1;
                *IO_write_ptr = v26;
              }
              ++optind;
              i = 1616007414;
            }
          }
          else if ( i == 443145659 )
          {
            v12 = y_37;
            v13 = (x_36 * (x_36 - 1)) & ((x_36 * (x_36 - 1)) ^ 0xFFFFFFFE);
            v14 = (v13 == 0) == y_37 < 10;
            v15 = 502190305;
            v16 = -210601444;
LABEL_36:
            if ( !v14 )
              v15 = v16;
            v10 = v13 == 0;
            i = v15;
            if ( v10 )
              i = v16;
            if ( v12 >= 10 )
              i = v15;
            if ( i <= -210601445 )
              goto LABEL_58;
          }
          else
          {
            i = -210601444;
          }
        }
        else
        {
          if ( i <= 1299759074 )
          {
            if ( i == 635896654 )
            {
              v22 = v35 < 122;
              i = -292172918;
              v23 = 1453877729;
              goto LABEL_64;
            }
            v12 = y_37;
            v13 = (x_36 * (x_36 - 1)) & ((x_36 * (x_36 - 1)) ^ 0xFFFFFFFE);
            v14 = (v13 == 0) == y_37 < 10;
            v15 = -969019695;
            v16 = -887172201;
            goto LABEL_36;
          }
          if ( i == 1299759075 )
          {
            v38 = v36;
            v31 = v30;
            v24 = ~((_BYTE)x_36 * ((_BYTE)x_36 - 1)) | 0xFFFFFFFE;
            v25 = -2003603609;
            if ( (v24 == -1) != y_37 < 10 )
              v25 = 2051216556;
            i = v25;
            if ( v24 == -1 )
              i = 2051216556;
            if ( y_37 >= 10 )
              i = v25;
            if ( i <= -210601445 )
              goto LABEL_58;
          }
          else
          {
            i = 417436329;
          }
        }
      }
      if ( i <= 1646371360 )
        break;
      if ( i <= 2066163196 )
      {
        if ( i == 1646371361 )
        {
          v34 = v8;
          v35 = getopt_long(argc, (char *const *)argv, "z", longopts, 0LL);
          v10 = v35 == -1;
          i = 443145659;
          v11 = -1823333724;
          goto LABEL_88;
        }
        v32 = v38 == 0;
        v12 = y_37;
        v13 = (x_36 * (x_36 - 1)) & ((x_36 * (x_36 - 1)) ^ 0xFFFFFFFE);
        v14 = (v13 == 0) == y_37 < 10;
        v15 = -2003603609;
        v16 = 2066163197;
        goto LABEL_36;
      }
      if ( i != 2066163197 )
      {
        i = -1448230571;
        goto LABEL_58;
      }
      i = -269937086;
      if ( v32 )
        i = 1646371361;
      v8 = v31;
      if ( i <= -210601445 )
        goto LABEL_58;
    }
    if ( i > 1616007413 )
      break;
    if ( i != 1370001827 )
    {
      v10 = v35 == -130;
      i = 1318717054;
      v11 = -1977780882;
      goto LABEL_88;
    }
    v30 = 1;
    v36 = 0;
  }
  if ( i == 1616007414 )
  {
    v37 = optind;
    v22 = optind < argc;
    i = 1625040817;
    v23 = -783449462;
    goto LABEL_64;
  }
  return 0;
}

void __fastcall close_stdout_set_file_name(const char *file)
{
  file_name = file;
}

void __fastcall close_stdout_set_ignore_EPIPE(bool ignore)
{
  unsigned int v1; // edx
  int v2; // esi
  int v3; // ecx
  int i; // edx
  int v5; // ecx
  bool v6; // [rsp+0h] [rbp-2h]

  v1 = ~((_BYTE)x_3 * ((_BYTE)x_3 - 1)) | 0xFFFFFFFE;
  v2 = -845018275;
  v3 = -1581183024;
  if ( (v1 == -1) != y_4 < 10 )
    v3 = -845018275;
  v6 = v1 == -1;
  if ( v1 != -1 )
    v2 = v3;
  if ( y_4 >= 10 )
    v2 = v3;
  for ( i = 412484386; ; i = -423295642 )
  {
    do
    {
      if ( i == -423295642 )
      {
        ignore_EPIPE = ignore;
        i = v2;
        break;
      }
      v5 = -1581183024;
      if ( y_4 < 10 != v6 )
        v5 = -423295642;
      i = v5;
      if ( y_4 < 10 )
        i = -423295642;
      if ( !v6 )
        i = v5;
    }
    while ( i > -423295643 );
    if ( i != -1581183024 )
      break;
    ignore_EPIPE = ignore;
  }
}

void __cdecl close_stdout()
{
  int v0; // r12d
  int v1; // ecx
  int v2; // edx
  bool v3; // zf
  int v4; // eax
  char *v5; // rax
  unsigned int v6; // edx
  int v7; // eax
  char v8; // [rsp+0h] [rbp-48h]
  char v9; // [rsp+1h] [rbp-47h]
  bool v10; // [rsp+2h] [rbp-46h]
  bool v11; // [rsp+3h] [rbp-45h]
  int errnum; // [rsp+4h] [rbp-44h]
  char *v13; // [rsp+8h] [rbp-40h]
  char *arg; // [rsp+10h] [rbp-38h]

  v8 = ((x_5 * (x_5 - 1)) & ((x_5 * (x_5 - 1)) ^ 0xFFFFFFFE)) == 0;
  v9 = y_6 < 10;
  v0 = -1106079272;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
LABEL_5:
        while ( v0 > -401818291 )
        {
          if ( v0 > 213028784 )
          {
            if ( v0 != 213028785 )
            {
              v10 = close_stream(stdout) != 0;
              v1 = y_6;
              v2 = 1336953328;
              if ( (((x_5 * (x_5 - 1)) & ((x_5 * (x_5 - 1)) ^ 0xFFFFFFFE)) == 0) != y_6 < 10 )
                v2 = 1228456464;
              v0 = v2;
              if ( ((x_5 * (x_5 - 1)) & ((x_5 * (x_5 - 1)) ^ 0xFFFFFFFE)) == 0 )
                v0 = 1228456464;
              goto LABEL_2;
            }
            error(0, errnum, "%s", v13);
          }
          else
          {
            if ( v0 != -401818290 )
            {
              v0 = 447990646;
              goto LABEL_35;
            }
            v5 = quotearg_colon(arg);
            error(0, errnum, "%s: %s", v5, v13);
          }
          v0 = -1908275446;
        }
        if ( v0 <= -1125955972 )
          break;
        if ( v0 == -1125955971 )
        {
          v3 = !v11;
          v0 = 1181840666;
          v4 = 789651613;
          goto LABEL_32;
        }
        v0 = 1336953328;
        if ( v9 )
          v0 = 284563284;
        if ( !v8 )
          v0 = 1336953328;
        if ( v9 != v8 )
          v0 = 284563284;
        if ( v0 > 447990645 )
          goto LABEL_35;
      }
      if ( v0 != -1949297522 )
        _exit(exit_failure);
      v3 = !ignore_EPIPE;
      v0 = 1181840666;
      v4 = 1167965561;
LABEL_32:
      if ( !v3 )
        v0 = v4;
    }
    while ( v0 <= 447990645 );
LABEL_35:
    while ( v0 <= 1181840665 )
    {
      if ( v0 <= 789651612 )
      {
        if ( v0 != 447990646 )
          _exit(exit_failure);
        v11 = *__errno_location() == 32;
        v6 = ~((_BYTE)x_5 * ((_BYTE)x_5 - 1)) | 0xFFFFFFFE;
        v7 = -103119553;
        if ( (v6 == -1) != y_6 < 10 )
          v7 = -1125955971;
        v0 = v7;
        if ( v6 == -1 )
          v0 = -1125955971;
        if ( y_6 >= 10 )
          v0 = v7;
        goto LABEL_5;
      }
      if ( v0 == 789651613 )
      {
        v3 = close_stream(stderr) == 0;
        v0 = 1728809419;
        v4 = 668410696;
        goto LABEL_32;
      }
      v1 = y_6;
      v2 = -103119553;
      if ( (((x_5 * (x_5 - 1)) & ((x_5 * (x_5 - 1)) ^ 0xFFFFFFFE)) == 0) != y_6 < 10 )
        v2 = 447990646;
      v0 = v2;
      if ( ((x_5 * (x_5 - 1)) & ((x_5 * (x_5 - 1)) ^ 0xFFFFFFFE)) == 0 )
        v0 = 447990646;
LABEL_2:
      if ( v1 >= 10 )
        v0 = v2;
      if ( v0 <= 447990645 )
        goto LABEL_5;
    }
    if ( v0 > 1336953327 )
      break;
    if ( v0 != 1181840666 )
    {
      v3 = !v10;
      v0 = 789651613;
      v4 = -1949297522;
      goto LABEL_32;
    }
    v13 = dcgettext(0LL, "write error", 5);
    arg = (char *)file_name;
    v0 = 213028785;
    if ( file_name )
      v0 = -401818290;
    errnum = *__errno_location();
  }
  if ( v0 == 1336953328 )
  {
    close_stream(stdout);
    v0 = 284563284;
    goto LABEL_5;
  }
}

size_t __fastcall dir_len(const char *file)
{
  _BOOL4 v1; // r15d
  unsigned __int8 v2; // dl
  int v3; // eax
  int v4; // ecx
  int v5; // r13d
  int v6; // ebp
  signed __int64 v7; // rax
  int v8; // r14d
  int v9; // ecx
  int v10; // edx
  char v12; // [rsp+Ch] [rbp-4Ch]
  char v13; // [rsp+Dh] [rbp-4Bh]
  bool v14; // [rsp+Eh] [rbp-4Ah]
  bool v15; // [rsp+Fh] [rbp-49h]
  size_t v16; // [rsp+10h] [rbp-48h]
  int v17; // [rsp+18h] [rbp-40h]
  int v18; // [rsp+1Ch] [rbp-3Ch]
  size_t v19; // [rsp+20h] [rbp-38h]

  v12 = (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1;
  v13 = y < 10;
  v2 = v12 & (y < 10);
  v3 = 2108175674;
  if ( !(v2 | (unsigned __int8)(v12 ^ (y < 10))) )
    v3 = -621771391;
  v18 = v3;
  v4 = -994534053;
  if ( !(v2 | (unsigned __int8)(v12 ^ (y < 10))) )
    v4 = 454740262;
  v17 = v4;
  v5 = 1456306397;
  if ( !(v2 | (unsigned __int8)(v12 ^ (y < 10))) )
    v5 = 454740262;
  v6 = -2122204372;
  v7 = 3155662652LL;
  if ( !(v2 | (unsigned __int8)(v12 ^ (y < 10))) )
    v6 = -1139304644;
  v8 = -1034921305;
  if ( !(v2 | (unsigned __int8)(v12 ^ (y < 10))) )
    v8 = -1139304644;
  v9 = 1049736897;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = v9;
          if ( v9 <= 454740261 )
            break;
          if ( v9 > 1511164040 )
          {
            if ( v9 > 1921191712 )
            {
              if ( v9 == 1921191713 )
              {
                v7 = v16 - 1;
                v9 = 1511164041;
              }
              else
              {
                v9 = 1234406365;
                v1 = 0;
              }
            }
            else if ( v9 == 1511164041 )
            {
              v16 = v7;
              v9 = v17;
            }
            else
            {
              v19 = v1;
              v7 = last_component(file) - file;
              v9 = 1511164041;
            }
          }
          else if ( v9 > 1234406364 )
          {
            if ( v9 == 1234406365 )
            {
              v1 = *file == 47;
              v9 = 1617702821;
            }
            else
            {
              v9 = -1408778222;
              if ( v14 )
                v9 = -1565073345;
            }
          }
          else if ( v9 == 454740262 )
          {
            v9 = -994534053;
          }
          else
          {
            v9 = -621771391;
            if ( v13 )
              v9 = -1756243685;
            if ( !v12 )
              v9 = -621771391;
            if ( v13 != v12 )
              v9 = -1756243685;
          }
        }
        if ( v9 <= -1139304645 )
          break;
        if ( v9 > -994534054 )
        {
          if ( v9 == -994534053 )
          {
            v14 = v19 < v16;
            v9 = v5;
          }
          else
          {
            v9 = -1756243685;
          }
        }
        else if ( v9 == -1139304644 )
        {
          v9 = -2122204372;
        }
        else
        {
          v9 = -1408778222;
          if ( v15 )
            v9 = 1921191713;
        }
      }
      if ( v9 > -1565073346 )
        break;
      if ( v9 == -2122204372 )
      {
        v15 = file[v16 - 1] == 47;
        v9 = v8;
      }
      else
      {
        v9 = v18;
      }
    }
    v9 = v6;
  }
  while ( v10 == -1565073345 );
  return v16;
}

char *__fastcall mdir_name(const char *file)
{
  size_t v1; // r13
  char *v2; // r14
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  unsigned int v7; // edx
  bool v8; // zf
  int v9; // edi
  int v10; // ecx
  unsigned int v11; // eax
  bool v12; // zf
  int v13; // edx
  int v14; // esi
  size_t n; // [rsp+10h] [rbp-48h]
  char *dest; // [rsp+18h] [rbp-40h]
  size_t v18; // [rsp+20h] [rbp-38h]

  n = dir_len(file);
  dest = (char *)malloc(n + (n == 0) - 0x2215904D2903F8A4LL + 0x2215904D2903F8A5LL);
  v4 = -677493911;
  do
  {
    while ( 1 )
    {
      while ( v4 > -1765310581 )
      {
        if ( v4 > -726878125 )
        {
          if ( v4 == -726878124 )
          {
            v4 = 1113039350;
            v2 = dest;
          }
          else
          {
            v4 = -461668408;
            if ( dest )
              v4 = 1602779750;
          }
          goto LABEL_9;
        }
        if ( v4 == -1765310580 )
        {
          v4 = -283308433;
          if ( !n )
            v4 = 1117876632;
          v1 = n;
          goto LABEL_9;
        }
        v4 = -2082881715;
      }
      if ( v4 == -2082881715 )
        break;
      if ( v4 == -2053474592 )
      {
        dest[v18] = 0;
        v4 = -1901783099;
      }
      else
      {
        dest[v18] = 0;
        v10 = y_2;
        v11 = (x_1 * (x_1 - 1)) & ((x_1 * (x_1 - 1)) ^ 0xFFFFFFFE);
        v12 = (v11 == 0) == y_2 < 10;
        v13 = -2053474592;
        v14 = -726878124;
LABEL_37:
        if ( !v12 )
          v13 = v14;
        v8 = v11 == 0;
        v4 = v13;
        if ( v8 )
          v4 = v14;
        if ( v10 >= 10 )
          v4 = v13;
      }
    }
    v6 = y_2;
    v7 = ~((_BYTE)x_1 * ((_BYTE)x_1 - 1)) | 0xFFFFFFFE;
    v8 = (v7 == -1) == y_2 < 10;
    v5 = -1437655968;
    v9 = -551163705;
LABEL_2:
    if ( !v8 )
      v5 = v9;
    v4 = v5;
    if ( v7 == -1 )
      v4 = v9;
    if ( v6 >= 10 )
      v4 = v5;
  }
  while ( v4 <= -551163706 );
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_9:
      while ( v4 <= 621948074 )
      {
        if ( v4 > -283308434 )
        {
          if ( v4 != -283308433 )
          {
            memcpy(dest, file, n);
            v6 = y_2;
            v7 = ~((_BYTE)x_1 * ((_BYTE)x_1 - 1)) | 0xFFFFFFFE;
            v8 = (v7 == -1) == y_2 < 10;
            v5 = 621948075;
            v9 = -1765310580;
            goto LABEL_2;
          }
          v18 = v1;
          v10 = y_2;
          v11 = (x_1 * (x_1 - 1)) & ((x_1 * (x_1 - 1)) ^ 0xFFFFFFFE);
          v12 = (v11 == 0) == y_2 < 10;
          v13 = -2053474592;
          v14 = -1901783099;
          goto LABEL_37;
        }
        if ( v4 != -551163705 )
        {
          v6 = y_2;
          v7 = ~((_BYTE)x_1 * ((_BYTE)x_1 - 1)) | 0xFFFFFFFE;
          v8 = (v7 == -1) == y_2 < 10;
          v5 = -1437655968;
          v9 = -2082881715;
          goto LABEL_2;
        }
        v4 = 1113039350;
        v2 = 0LL;
      }
      if ( v4 <= 1117876631 )
        break;
      if ( v4 == 1117876632 )
      {
        v1 = n + 1;
        dest[n] = 46;
        v4 = -283308433;
      }
      else
      {
        v4 = 621948075;
        if ( (~((_BYTE)x_1 * ((_BYTE)x_1 - 1)) | 0xFFFFFFFE) == -1 )
          v4 = 91805798;
        if ( y_2 >= 10 )
          v4 = 621948075;
        if ( ((~((_BYTE)x_1 * ((_BYTE)x_1 - 1)) | 0xFFFFFFFE) == -1) != y_2 < 10 )
          v4 = 91805798;
      }
    }
    if ( v4 != 621948075 )
      return v2;
    memcpy(dest, file, n);
    v4 = 91805798;
  }
}

char *__fastcall last_component(const char *name)
{
  char *v1; // r10
  const char *v2; // r14
  unsigned int v3; // eax
  bool v4; // bl
  bool v5; // si
  bool v6; // al
  char v7; // cl
  bool v8; // dl
  char v9; // di
  int v10; // r11d
  bool v11; // dl
  bool v12; // bl
  unsigned __int8 v13; // al
  bool v14; // zf
  int v15; // esi
  int v16; // esi
  int v17; // eax
  int v18; // eax
  __int64 v19; // rsi
  int v20; // r12d
  int v21; // ebx
  bool v22; // zf
  char v23; // dl
  int v24; // r15d
  int v25; // edx
  int v26; // r13d
  int v27; // r9d
  int v28; // r8d
  char v30; // [rsp+0h] [rbp-7Ch]
  char v31; // [rsp+1h] [rbp-7Bh]
  bool v32; // [rsp+2h] [rbp-7Ah]
  bool v33; // [rsp+4h] [rbp-78h]
  bool v34; // [rsp+5h] [rbp-77h]
  bool v35; // [rsp+6h] [rbp-76h]
  bool v36; // [rsp+7h] [rbp-75h]
  char v37; // [rsp+8h] [rbp-74h]
  const char *v38; // [rsp+Ch] [rbp-70h]
  __int64 v39; // [rsp+14h] [rbp-68h]
  char *v40; // [rsp+1Ch] [rbp-60h]
  char *v41; // [rsp+24h] [rbp-58h]
  int v42; // [rsp+30h] [rbp-4Ch]
  int v43; // [rsp+38h] [rbp-44h]
  int v44; // [rsp+3Ch] [rbp-40h]
  int v45; // [rsp+40h] [rbp-3Ch]

  v3 = (x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE);
  v4 = v3 != 0;
  v5 = v3 == 0;
  v32 = v3 == 0;
  v6 = y < 10;
  v7 = v4 ^ (y > 9);
  v8 = v4 || y > 9;
  v9 = -39;
  v10 = -243279163;
  if ( v8 )
    v10 = 1724684761;
  v11 = !v8;
  v12 = v5 && v6;
  v13 = v5 ^ v6;
  if ( v13 )
    v10 = -243279163;
  v14 = (v12 | v13) == 0;
  v15 = 477950109;
  if ( !(v12 | v13) )
    v15 = -885417992;
  v45 = v15;
  v16 = -1448480632;
  if ( !(v12 | v13) )
    v16 = -885417992;
  v44 = v16;
  v17 = 824528719;
  if ( v14 )
    v17 = -1418207342;
  v43 = v17;
  v18 = 478317372;
  if ( v14 )
    v18 = -1418207342;
  v19 = 2224168113LL;
  if ( v14 )
    v19 = 795394400LL;
  v42 = v19;
  v20 = 518419096;
  if ( v14 )
    v20 = -260889218;
  v21 = -1442392263;
  if ( v14 )
    v21 = -260889218;
  v23 = v7 | v11;
  v22 = v23 == 0;
  v24 = -960057311;
  if ( !v23 )
    v24 = -1959400606;
  v25 = 819694287;
  if ( v22 )
    v25 = 795394400;
  v26 = -1049507984;
  if ( v22 )
    v26 = 1724684761;
  v27 = -1868179973;
  v37 = 96;
  v39 = 795394400LL;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v28 = v27;
            if ( v27 > 265723031 )
              break;
            if ( v27 > -1049507985 )
            {
              if ( v27 <= -856063321 )
              {
                if ( v27 == -1049507984 )
                {
                  v27 = -47809213;
                  v39 = (__int64)v40;
                  v37 = 0;
                }
                else if ( v27 == -960057311 )
                {
                  v27 = 318678440;
                  v2 = name;
                }
                else
                {
                  v27 = 477950109;
                }
              }
              else if ( v27 > -243279164 )
              {
                v27 = v26;
                if ( v28 != -243279163 )
                {
                  v27 = v28;
                  if ( v28 == -47809213 )
                  {
                    v19 = (__int64)(v40 + 1);
                    v27 = 760179277;
                    v9 = v37;
                    v1 = (char *)v39;
                  }
                }
              }
              else if ( v27 == -856063320 )
              {
                v1 = (char *)v38;
                v27 = 760179277;
                v9 = 0;
                v19 = (__int64)v38;
              }
              else
              {
                v27 = 518419096;
              }
            }
            else if ( v27 <= -1864511174 )
            {
              if ( v27 == -2070799183 )
              {
                v27 = 265723032;
                if ( v35 )
                  v27 = 1204970402;
              }
              else if ( v27 == -1959400606 )
              {
                v27 = 1660647680;
              }
              else
              {
                v27 = -1959400606;
                if ( y < 10 )
                  v27 = 1660647680;
                if ( !v32 )
                  v27 = -1959400606;
                if ( y < 10 != v32 )
                  v27 = 1660647680;
              }
            }
            else if ( v27 > -1442392264 )
            {
              if ( v27 == -1442392263 )
              {
                v27 = -47809213;
                if ( v36 )
                  v27 = -1864511173;
                v39 = (__int64)v41;
                v37 = v31;
              }
              else
              {
                v27 = 824528719;
              }
            }
            else
            {
              v27 = v10;
              if ( v28 != -1864511173 )
              {
                v27 = -856063320;
                if ( v33 )
                  v27 = 760053274;
              }
            }
          }
          if ( v27 > 795394399 )
            break;
          if ( v27 <= 478317371 )
          {
            v27 = v20;
            if ( v28 != 265723032 )
            {
              if ( v28 == 318678440 )
              {
                v38 = v2;
                v27 = v45;
              }
              else
              {
                v27 = v28;
                if ( v28 == 477950109 )
                {
                  v33 = *v38 == 47;
                  v27 = v44;
                }
              }
            }
          }
          else if ( v27 > 760053273 )
          {
            if ( v27 == 760053274 )
            {
              v2 = v38 + 1;
              v27 = 318678440;
            }
            else
            {
              v31 = v9;
              v40 = (char *)v19;
              v41 = v1;
              v27 = v43;
            }
          }
          else if ( v27 == 478317372 )
          {
            v27 = 1615973936;
            if ( v34 )
              v27 = 1421835081;
          }
          else
          {
            v36 = ((unsigned __int8)v31 & ((unsigned __int8)v31 ^ 0xFE)) != 0;
            v27 = v21;
          }
        }
        if ( v27 > 1421835080 )
          break;
        if ( v27 > 824528718 )
        {
          if ( v27 == 824528719 )
          {
            v30 = *v40;
            v34 = *v40 != 0;
            v27 = v18;
          }
          else
          {
            v27 = -47809213;
            v37 = 1;
            v39 = (__int64)v41;
          }
        }
        else if ( v27 == 795394400 )
        {
          v27 = 819694287;
        }
        else
        {
          v35 = v30 == 47;
          v27 = v42;
        }
      }
      if ( v27 <= 1660647679 )
        break;
      v27 = v24;
      if ( v28 != 1660647680 )
        v27 = -243279163;
    }
    v27 = v25;
  }
  while ( v28 == 1421835081 );
  return v41;
}

size_t __fastcall base_len(const char *name)
{
  size_t v1; // rax
  unsigned int v2; // esi
  bool v3; // zf
  int v4; // ecx
  int v5; // esi
  int v6; // edx
  bool v8; // [rsp+7h] [rbp-11h]
  size_t v9; // [rsp+8h] [rbp-10h]

  v1 = strlen(name);
  v2 = ~((_BYTE)x_1 * ((_BYTE)x_1 - 1)) | 0xFFFFFFFE;
  v3 = ((y_2 < 10) ^ (v2 == -1) | (y_2 <= 9 && v2 == -1)) == 0;
  v4 = -1648533547;
  if ( !((y_2 < 10) ^ (v2 == -1) | (y_2 <= 9 && v2 == -1)) )
    v4 = -1485685041;
  v5 = -1166815442;
  if ( v3 )
    v5 = -1485685041;
LABEL_7:
  v6 = 36440139;
LABEL_17:
  while ( v6 <= 36440138 )
  {
    if ( v6 != -1166815442 )
    {
      if ( v6 != -88147993 )
      {
        while ( 1 )
LABEL_28:
          ;
      }
      v1 = v9 - 1;
      goto LABEL_7;
    }
    v6 = 43031719;
    if ( v8 )
      v6 = -2108681463;
    if ( v6 <= -1166815443 )
    {
LABEL_9:
      while ( v6 != -2108681463 )
      {
        if ( v6 == -1648533547 )
        {
          v8 = v9 > 1;
          v6 = v5;
          if ( v5 > -1166815443 )
            goto LABEL_17;
        }
        else
        {
          if ( v6 != -1485685041 )
            goto LABEL_28;
          v6 = -1648533547;
        }
      }
      v6 = 43031719;
      if ( name[v9 - 1] == 47 )
        v6 = -88147993;
    }
  }
  if ( v6 == 36440139 )
  {
    v9 = v1;
    v6 = v4;
    goto LABEL_9;
  }
  return v9;
}

void __fastcall set_program_name(const char *argv0)
{
  const char *v1; // r12
  int v3; // ebp
  int v4; // eax
  char *v5; // rax
  bool v6; // zf
  const char *v7; // rax
  char v8; // cl
  int v9; // esi
  bool v10; // cc
  char v11; // dl
  int v12; // edi
  int v13; // edx
  bool v14; // [rsp+6h] [rbp-42h]
  bool v15; // [rsp+7h] [rbp-41h]
  char *s1; // [rsp+8h] [rbp-40h]
  const char *v17; // [rsp+10h] [rbp-38h]

  v3 = 258895378;
  if ( !argv0 )
    v3 = -660166075;
  v4 = -1469887900;
  while ( 1 )
  {
LABEL_44:
    while ( v4 <= -1101171119 )
    {
      if ( v4 > -1633986895 )
      {
        if ( v4 == -1633986894 )
        {
          v4 = 1093188321;
          goto LABEL_9;
        }
        v4 = v3;
        if ( v3 > -306057392 )
          goto LABEL_9;
      }
      else if ( v4 == -1967211913 )
      {
        v6 = strncmp(s1 - 7, "/.libs/", 7uLL) == 0;
        v4 = 121342380;
        if ( v6 )
          v4 = -1042926653;
LABEL_76:
        v1 = argv0;
        if ( v4 > -306057392 )
          goto LABEL_9;
      }
      else
      {
        v17 = s1 + 3;
        program_invocation_short_name = (__int64)(s1 + 3);
        v8 = ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0;
        v4 = 1452975854;
        v9 = 111978507;
        if ( ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0 )
          v4 = 111978507;
        v10 = y < 10;
        v11 = y < 10;
        v12 = 1452975854;
LABEL_4:
        if ( !v10 )
          v4 = v12;
        if ( v8 != v11 )
          v4 = v9;
LABEL_8:
        if ( v4 > -306057392 )
          goto LABEL_9;
      }
    }
    if ( v4 > -735645238 )
      break;
    if ( v4 == -1101171118 )
    {
      v4 = 121342380;
      if ( v14 )
        v4 = -1967211913;
      goto LABEL_76;
    }
    v13 = -306057391;
    if ( (((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0) != y < 10 )
      v13 = -735645237;
    v4 = v13;
    if ( ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0 )
      v4 = -735645237;
    if ( y >= 10 )
      v4 = v13;
    if ( v4 > -306057392 )
      goto LABEL_9;
  }
  if ( v4 != -735645237 )
  {
    if ( v4 == -660166075 )
    {
      fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x37uLL, 1uLL, stderr);
      abort();
    }
    goto LABEL_8;
  }
  v15 = strncmp(s1, "lt-", 3uLL) == 0;
  v4 = -306057391;
  if ( (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1 )
    v4 = -10209593;
  if ( y >= 10 )
    v4 = -306057391;
  if ( ((~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1) != y < 10 )
    v4 = -10209593;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_9:
      while ( v4 > 258895377 )
      {
        if ( v4 <= 1452975853 )
        {
          if ( v4 != 258895378 )
          {
            v5 = strrchr(argv0, 47);
            v6 = v5 == 0LL;
            v7 = v5 + 1;
            if ( v6 )
              v7 = argv0;
            s1 = (char *)v7;
            v14 = v7 - argv0 > 6;
            v4 = -1633986894;
            if ( ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0 )
              v4 = -1101171118;
            if ( y >= 10 )
              v4 = -1633986894;
            if ( (((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0) != y < 10 )
              v4 = -1101171118;
            goto LABEL_44;
          }
          v8 = (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1;
          v4 = -1633986894;
          v9 = 1093188321;
          if ( (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1 )
            v4 = 1093188321;
          v10 = y < 10;
          v11 = y < 10;
          v12 = -1633986894;
          goto LABEL_4;
        }
        if ( v4 == 1452975854 )
        {
          program_invocation_short_name = (__int64)(s1 + 3);
          v4 = -1642546812;
          goto LABEL_44;
        }
        v4 = 1452975854;
        if ( ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0 )
          v4 = -1642546812;
        if ( y >= 10 )
          v4 = 1452975854;
        if ( (((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0) != y < 10 )
          v4 = -1642546812;
        if ( v4 <= -306057392 )
          goto LABEL_44;
      }
      if ( v4 > 111978506 )
        break;
      if ( v4 == -306057391 )
      {
        v4 = -735645237;
        goto LABEL_44;
      }
      if ( v4 != -10209593 )
        goto LABEL_8;
      v4 = 121342380;
      if ( v15 )
        v4 = 1741501043;
      v1 = s1;
    }
    if ( v4 != 111978507 )
      break;
    v4 = 121342380;
    v1 = v17;
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
  unsigned int v1; // ecx
  const quoting_options *v2; // r10
  int v3; // r11d
  int i; // esi
  int v5; // edi
  int v6; // eax
  quoting_style style; // [rsp+2h] [rbp-4h]

  v1 = ~((_BYTE)x_19 * ((_BYTE)x_19 - 1)) | 0xFFFFFFFE;
  v2 = &default_quoting_options;
  if ( o )
    v2 = o;
  v3 = -581356261;
  if ( v1 == -1 )
    v3 = 890202117;
  if ( y_20 >= 10 )
    v3 = -581356261;
  if ( (v1 == -1) != y_20 < 10 )
    v3 = 890202117;
  for ( i = -1310864384; ; i = v3 )
  {
    while ( 1 )
    {
      v5 = i;
      if ( i > 890202116 )
        break;
      i = 2036208484;
      if ( v5 != -581356261 )
      {
        if ( v5 != -1310864384 )
        {
          while ( 1 )
            ;
        }
        v6 = -581356261;
        if ( y_20 < 10 != (v1 == -1) )
          v6 = 2036208484;
        i = v6;
        if ( y_20 < 10 )
          i = 2036208484;
        if ( v1 != -1 )
          i = v6;
      }
    }
    if ( i != 2036208484 )
      break;
    style = v2->style;
  }
  return style;
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
  unsigned int v3; // r10d
  int v4; // r9d
  int v5; // eax
  quoting_options *v6; // r15
  __int64 v7; // r14
  char v8; // cl
  unsigned int v9; // r11d
  int v10; // eax
  unsigned int v11; // esi
  bool v13; // [rsp+1h] [rbp-25h]
  int v14; // [rsp+2h] [rbp-24h]

  v3 = (x_23 * (x_23 - 1)) & ((x_23 * (x_23 - 1)) ^ 0xFFFFFFFE);
  v4 = -193462020;
  v5 = 30747359;
  if ( (v3 == 0) != y_24 < 10 )
    v5 = -193462020;
  if ( v3 )
    v4 = v5;
  v13 = y_24 < 10;
  if ( y_24 >= 10 )
    v4 = v5;
  v6 = &default_quoting_options;
  if ( o )
    v6 = o;
  v7 = (unsigned __int8)c >> 5;
  v8 = c & 0x1F;
  v10 = 1731296489;
  do
  {
LABEL_13:
    if ( v10 == 30747359 )
    {
      v11 = v6->quote_these_too[v7] >> v8;
      v6->quote_these_too[v7] = v6->quote_these_too[v7] & ~((((unsigned __int8)(i & ~(_BYTE)v11) | v11 & (unsigned __int8)~(_BYTE)i) & 1) << v8) | ((((unsigned __int8)(i & ~(_BYTE)v11) | v11 & (unsigned __int8)~(_BYTE)i) & 1) << v8) & ~v6->quote_these_too[v7];
      v10 = -894572080;
      break;
    }
    if ( v10 != 1731296489 )
      goto LABEL_25;
    v10 = 30747359;
    if ( v13 )
      v10 = -894572080;
    if ( v3 )
      v10 = 30747359;
    if ( v13 != (v3 == 0) )
      v10 = -894572080;
  }
  while ( v10 > 30747358 );
  while ( v10 == -894572080 )
  {
    v14 = (v6->quote_these_too[v7] >> v8) & ((v6->quote_these_too[v7] >> v8) ^ 0xFFFFFFFE);
    v9 = i & (i ^ 0xFFFFFFFE);
    v6->quote_these_too[v7] = v6->quote_these_too[v7] & ~(((~v14 & 0x6AFB6163 | v14 & 0x95049E9C) ^ (~v9 & 0x6AFB6163 | v9 & 0x95049E9C)) << v8) | (((~v14 & 0x6AFB6163 | v14 & 0x95049E9C) ^ (~v9 & 0x6AFB6163 | v9 & 0x95049E9C)) << v8) & ~v6->quote_these_too[v7];
    v10 = v4;
    if ( v4 > 30747358 )
      goto LABEL_13;
  }
  if ( v10 != -193462020 )
  {
    while ( 1 )
LABEL_25:
      ;
  }
  return v14;
}

int __fastcall set_quoting_flags(quoting_options *o, int i)
{
  quoting_options *v2; // r11
  int v3; // r9d
  int v4; // r10d
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  quoting_options *v8; // r8
  bool v9; // zf
  int v10; // eax
  int result; // eax

  v3 = -813428043;
  if ( o )
    v3 = -1857096468;
  v4 = -1737343694;
  if ( !((((x_25 * (x_25 - 1)) & ((x_25 * (x_25 - 1)) ^ 0xFFFFFFFE)) == 0) ^ (y_26 < 10) | (((x_25 * (x_25 - 1)) & ((x_25 * (x_25 - 1)) ^ 0xFFFFFFFE)) == 0
                                                                                         && y_26 <= 9)) )
    v4 = -1321605699;
  v5 = -533583421;
  if ( !((((x_25 * (x_25 - 1)) & ((x_25 * (x_25 - 1)) ^ 0xFFFFFFFE)) == 0) ^ (y_26 < 10) | (((x_25 * (x_25 - 1)) & ((x_25 * (x_25 - 1)) ^ 0xFFFFFFFE)) == 0
                                                                                         && y_26 <= 9)) )
    v5 = -1321605699;
  v6 = 103769121;
  do
  {
LABEL_9:
    v7 = v6;
    v8 = v2;
    v9 = v6 == 103769121;
    v2 = o;
    v6 = v3;
  }
  while ( v9 );
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v10 = v7;
        if ( v7 <= -813428044 )
          break;
        v7 = v4;
        if ( v10 != -813428043 )
        {
          if ( v10 != -533583421 )
            goto LABEL_22;
          v6 = -1857096468;
          v2 = &default_quoting_options;
          goto LABEL_9;
        }
      }
      v7 = v5;
    }
    while ( v10 == -1737343694 );
    if ( v10 != -1321605699 )
      break;
    v7 = -1737343694;
  }
  if ( v10 != -1857096468 )
  {
    while ( 1 )
LABEL_22:
      ;
  }
  result = v8->flags;
  v8->flags = i;
  return result;
}

void __fastcall set_custom_quoting(quoting_options *o, const char *left_quote, const char *right_quote)
{
  _DWORD *v3; // rax
  quoting_options *v4; // rcx
  int v5; // eax
  int v6; // r14d
  int i; // ebp
  int v8; // ebx
  _DWORD *v9; // r11
  bool v10; // zf
  int v11; // ebp
  unsigned int v12; // ebx
  int v13; // ecx
  _DWORD *v14; // [rsp+0h] [rbp-28h]

  v14 = v3;
  v4 = (quoting_options *)2015250267;
  v5 = -1445396153;
  if ( o )
    v5 = 2015250267;
  LOBYTE(v4) = right_quote != 0LL;
  v6 = -807453515;
  if ( !left_quote )
    v6 = -409682394;
  if ( (unsigned __int8)v4 != (left_quote != 0LL) )
    v6 = -409682394;
  for ( i = 1743356131; ; i = 2015250267 )
  {
    do
    {
      v8 = i;
      v9 = v4;
      v10 = i == 1743356131;
      v4 = o;
      i = v5;
    }
    while ( v10 );
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = v8;
        if ( v8 <= -513407903 )
          break;
        if ( v8 <= 1480223766 )
        {
          v8 = 1480223767;
          if ( v11 != -513407902 )
          {
            if ( v11 == -409682394 )
              abort();
            while ( 1 )
LABEL_37:
              ;
          }
        }
        else if ( v8 == 1480223767 )
        {
          v8 = -513407902;
          if ( ((x_27 * (x_27 - 1)) & ((x_27 * (x_27 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v8 = -663021726;
          if ( y_28 >= 10 )
            v8 = -513407902;
          if ( (((x_27 * (x_27 - 1)) & ((x_27 * (x_27 - 1)) ^ 0xFFFFFFFE)) == 0) != y_28 < 10 )
            v8 = -663021726;
        }
        else
        {
          if ( v8 != 2015250267 )
            goto LABEL_37;
          v14 = v9;
          *v9 = 10;
          v8 = v6;
        }
      }
      if ( v8 != -1445396153 )
        break;
      v12 = ~((_BYTE)x_27 * ((_BYTE)x_27 - 1)) | 0xFFFFFFFE;
      v13 = -513407902;
      if ( (v12 == -1) != y_28 < 10 )
        v13 = 1480223767;
      v10 = v12 == -1;
      v8 = v13;
      if ( v10 )
        v8 = 1480223767;
      if ( y_28 >= 10 )
        v8 = v13;
    }
    if ( v8 == -807453515 )
      break;
    v4 = &default_quoting_options;
  }
  *((_QWORD *)v14 + 5) = left_quote;
  *((_QWORD *)v14 + 6) = right_quote;
}

size_t __fastcall quotearg_buffer(
        char *buffer,
        size_t buffersize,
        const char *arg,
        size_t argsize,
        const quoting_options *o)
{
  const quoting_options *v6; // rbp
  int v7; // eax
  int *v8; // rbx
  int v9; // r15d
  int v10; // eax
  int *v11; // rbx
  int v12; // r15d
  unsigned int v13; // edx
  int v14; // esi
  char v16; // [rsp+Eh] [rbp-4Ah]
  char v17; // [rsp+Fh] [rbp-49h]
  size_t v20; // [rsp+20h] [rbp-38h]

  v16 = (~((_BYTE)x_29 * ((_BYTE)x_29 - 1)) | 0xFFFFFFFE) == -1;
  v17 = y_30 < 10;
  v6 = &default_quoting_options;
  if ( o )
    v6 = o;
  v7 = 431031666;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = v7 & 0xFFFFFFF;
      if ( v10 > 190240137 )
        break;
      if ( v10 == 82618612 )
      {
        v8 = __errno_location();
        v9 = *v8;
        quotearg_buffer_restyled(
          buffer,
          buffersize,
          arg,
          argsize,
          v6->style,
          v6->flags,
          v6->quote_these_too,
          v6->left_quote,
          v6->right_quote);
        *v8 = v9;
        v7 = 458675594;
      }
      else
      {
        if ( v10 != 162596210 )
          goto LABEL_25;
        v7 = 351054068;
        if ( v17 )
          v7 = 458675594;
        if ( !v16 )
          v7 = 351054068;
        if ( v17 != v16 )
          v7 = 458675594;
      }
    }
    if ( v10 != 190240138 )
      break;
    v11 = __errno_location();
    v12 = *v11;
    v20 = quotearg_buffer_restyled(
            buffer,
            buffersize,
            arg,
            argsize,
            v6->style,
            v6->flags,
            v6->quote_these_too,
            v6->left_quote,
            v6->right_quote);
    *v11 = v12;
    v13 = ~((_BYTE)x_29 * ((_BYTE)x_29 - 1)) | 0xFFFFFFFE;
    v14 = 351054068;
    if ( (v13 == -1) != y_30 < 10 )
      v14 = 503112601;
    v7 = v14;
    if ( v13 == -1 )
      v7 = 503112601;
    if ( y_30 >= 10 )
      v7 = v14;
  }
  if ( v10 != 234677145 )
  {
    while ( 1 )
LABEL_25:
      ;
  }
  return v20;
}

size_t __fastcall quotearg_buffer_restyled(
        char *buffer,
        __int64 buffersize,
        const char *arg,
        __int64 argsize,
        int quoting_style,
        int flags,
        const unsigned int *quote_these_too,
        char *left_quote,
        char *right_quote)
{
  __int64 v9; // rbp
  char v10; // r13
  char v11; // r14
  __int64 v12; // r15
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ebx
  size_t v18; // rcx
  unsigned int v19; // eax
  int v20; // edx
  unsigned int v21; // edx
  int v22; // esi
  unsigned int v23; // eax
  int v24; // edx
  unsigned int v25; // edx
  int v26; // esi
  int v27; // edx
  int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // edx
  int v32; // esi
  int v33; // edx
  int v34; // edx
  int v35; // edx
  unsigned int v36; // eax
  int v37; // edx
  int v38; // edx
  int v39; // edx
  unsigned int v40; // eax
  unsigned int v41; // edx
  int v42; // esi
  unsigned int v43; // edx
  int v44; // esi
  int v45; // edx
  unsigned int v46; // eax
  int v47; // edx
  unsigned int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // edx
  int v53; // edx
  unsigned int v54; // eax
  unsigned int v55; // eax
  int v56; // edx
  unsigned int v57; // edx
  int v58; // esi
  int v59; // edx
  unsigned int v60; // eax
  unsigned int v61; // eax
  unsigned int v62; // eax
  int v63; // edx
  int v64; // edx
  int v65; // edx
  int v66; // edx
  unsigned int v67; // edx
  int v68; // esi
  unsigned int v69; // eax
  unsigned int v70; // edx
  int v71; // esi
  int v72; // edx
  unsigned int v73; // edx
  int v74; // esi
  unsigned int v75; // edx
  int v76; // esi
  int v77; // edx
  int v78; // edx
  int v79; // edx
  unsigned int v80; // eax
  int v81; // edx
  unsigned int v82; // edx
  int v83; // esi
  unsigned int v84; // edx
  int v85; // esi
  int v86; // edx
  unsigned int v87; // eax
  unsigned int v88; // edx
  int v89; // esi
  unsigned int v90; // edx
  int v91; // esi
  int v92; // edx
  int v93; // edx
  unsigned int v94; // edx
  int v95; // esi
  int v96; // edx
  int v97; // edx
  unsigned int v98; // eax
  int v99; // edx
  int v100; // edx
  unsigned int v101; // edx
  int v102; // esi
  unsigned int v103; // edx
  int v104; // esi
  unsigned int v105; // edx
  int v106; // esi
  int v107; // edx
  unsigned int v108; // eax
  unsigned int v109; // eax
  int v110; // edx
  unsigned int v111; // edx
  int v112; // esi
  unsigned int v113; // eax
  unsigned int v114; // edx
  int v115; // esi
  int v116; // edx
  int v117; // edx
  unsigned int v118; // eax
  unsigned int v119; // edx
  int v120; // esi
  int v121; // edx
  unsigned int v122; // eax
  int v123; // edx
  unsigned int v124; // eax
  int v125; // edx
  unsigned int v126; // edx
  int v127; // esi
  unsigned int v128; // eax
  int v129; // edx
  int v130; // edx
  unsigned int v131; // edx
  int v132; // esi
  unsigned int v133; // edx
  int v134; // esi
  unsigned int v135; // edx
  int v136; // esi
  int v137; // edx
  int v138; // edx
  unsigned int v139; // edx
  int v140; // esi
  unsigned int v141; // eax
  unsigned int v142; // edx
  int v143; // esi
  int v144; // edx
  int v145; // edx
  unsigned int v146; // edx
  int v147; // esi
  unsigned int v148; // eax
  unsigned int v149; // eax
  int v150; // edx
  unsigned int v151; // edx
  int v152; // esi
  unsigned int v153; // eax
  unsigned int v154; // eax
  unsigned int v155; // eax
  unsigned int v156; // edx
  int v157; // esi
  int v158; // edx
  unsigned int v159; // edx
  int v160; // esi
  unsigned int v161; // edx
  int v162; // esi
  int v163; // edx
  unsigned int v164; // eax
  unsigned int v165; // eax
  char v167; // [rsp+4h] [rbp-744h]
  char v168; // [rsp+5h] [rbp-743h]
  unsigned __int8 v169; // [rsp+6h] [rbp-742h]
  unsigned __int8 v170; // [rsp+7h] [rbp-741h]
  char v171; // [rsp+8h] [rbp-740h]
  char v172; // [rsp+9h] [rbp-73Fh]
  char v173; // [rsp+Ah] [rbp-73Eh]
  char v174; // [rsp+Bh] [rbp-73Dh]
  char v175; // [rsp+Ch] [rbp-73Ch]
  char v176; // [rsp+Dh] [rbp-73Bh]
  char v177; // [rsp+Eh] [rbp-73Ah]
  char v178; // [rsp+Fh] [rbp-739h]
  int v179; // [rsp+10h] [rbp-738h]
  bool v180; // [rsp+17h] [rbp-731h]
  unsigned __int64 v181; // [rsp+18h] [rbp-730h]
  char v182; // [rsp+27h] [rbp-721h]
  unsigned __int8 v183; // [rsp+28h] [rbp-720h]
  char v184; // [rsp+29h] [rbp-71Fh]
  char v185; // [rsp+2Ah] [rbp-71Eh]
  char v186; // [rsp+2Bh] [rbp-71Dh]
  char v187; // [rsp+2Ch] [rbp-71Ch]
  char v188; // [rsp+2Dh] [rbp-71Bh]
  bool v189; // [rsp+2Eh] [rbp-71Ah]
  char v190; // [rsp+2Fh] [rbp-719h]
  unsigned __int64 v191; // [rsp+30h] [rbp-718h]
  __int64 v192; // [rsp+38h] [rbp-710h]
  char v193; // [rsp+46h] [rbp-702h]
  char v194; // [rsp+47h] [rbp-701h]
  char v195; // [rsp+48h] [rbp-700h]
  int v196; // [rsp+4Ch] [rbp-6FCh]
  unsigned __int64 v197; // [rsp+50h] [rbp-6F8h]
  char v198; // [rsp+5Bh] [rbp-6EDh]
  char v199; // [rsp+5Ch] [rbp-6ECh]
  char v200; // [rsp+5Dh] [rbp-6EBh]
  char v201; // [rsp+5Eh] [rbp-6EAh]
  char v202; // [rsp+5Fh] [rbp-6E9h]
  char v203; // [rsp+60h] [rbp-6E8h]
  char v204; // [rsp+61h] [rbp-6E7h]
  char v205; // [rsp+62h] [rbp-6E6h]
  char v206; // [rsp+63h] [rbp-6E5h]
  char v207; // [rsp+64h] [rbp-6E4h]
  char v208; // [rsp+65h] [rbp-6E3h]
  char v209; // [rsp+66h] [rbp-6E2h]
  char v210; // [rsp+67h] [rbp-6E1h]
  char v211; // [rsp+68h] [rbp-6E0h]
  char v212; // [rsp+69h] [rbp-6DFh]
  char v213; // [rsp+6Ah] [rbp-6DEh]
  char v214; // [rsp+6Bh] [rbp-6DDh]
  char v215; // [rsp+6Ch] [rbp-6DCh]
  char v216; // [rsp+6Dh] [rbp-6DBh]
  unsigned __int8 v217; // [rsp+6Eh] [rbp-6DAh]
  char v218; // [rsp+6Fh] [rbp-6D9h]
  __int64 v219; // [rsp+70h] [rbp-6D8h]
  quoting_style v220; // [rsp+78h] [rbp-6D0h]
  char v221; // [rsp+7Fh] [rbp-6C9h]
  char v222; // [rsp+80h] [rbp-6C8h]
  char v223; // [rsp+81h] [rbp-6C7h]
  char v224; // [rsp+82h] [rbp-6C6h]
  char v225; // [rsp+83h] [rbp-6C5h]
  char v226; // [rsp+84h] [rbp-6C4h]
  char v227; // [rsp+85h] [rbp-6C3h]
  char v228; // [rsp+86h] [rbp-6C2h]
  char v229; // [rsp+87h] [rbp-6C1h]
  char v230; // [rsp+88h] [rbp-6C0h]
  char v231; // [rsp+89h] [rbp-6BFh]
  bool v232; // [rsp+8Ah] [rbp-6BEh]
  unsigned __int8 v233; // [rsp+8Bh] [rbp-6BDh]
  char v234; // [rsp+8Ch] [rbp-6BCh]
  char v235; // [rsp+8Dh] [rbp-6BBh]
  char v236; // [rsp+8Eh] [rbp-6BAh]
  bool v237; // [rsp+8Fh] [rbp-6B9h]
  char v238; // [rsp+90h] [rbp-6B8h]
  char v239; // [rsp+91h] [rbp-6B7h]
  char v240; // [rsp+92h] [rbp-6B6h]
  char v241; // [rsp+93h] [rbp-6B5h]
  char v242; // [rsp+94h] [rbp-6B4h]
  char v243; // [rsp+95h] [rbp-6B3h]
  char v244; // [rsp+96h] [rbp-6B2h]
  char v245; // [rsp+97h] [rbp-6B1h]
  int v246; // [rsp+98h] [rbp-6B0h]
  char v247; // [rsp+9Ch] [rbp-6ACh]
  char v248; // [rsp+A0h] [rbp-6A8h]
  bool v249; // [rsp+A1h] [rbp-6A7h]
  bool v250; // [rsp+A2h] [rbp-6A6h]
  char v251; // [rsp+A3h] [rbp-6A5h]
  bool v252; // [rsp+A4h] [rbp-6A4h]
  bool v253; // [rsp+A5h] [rbp-6A3h]
  bool v254; // [rsp+A6h] [rbp-6A2h]
  bool v255; // [rsp+A7h] [rbp-6A1h]
  bool v256; // [rsp+A8h] [rbp-6A0h]
  char v257; // [rsp+A9h] [rbp-69Fh]
  char v258; // [rsp+AAh] [rbp-69Eh]
  char v259; // [rsp+ABh] [rbp-69Dh]
  char v260; // [rsp+ACh] [rbp-69Ch]
  char v261; // [rsp+ADh] [rbp-69Bh]
  char v262; // [rsp+AEh] [rbp-69Ah]
  char v263; // [rsp+AFh] [rbp-699h]
  char v264; // [rsp+B0h] [rbp-698h]
  char v265; // [rsp+B1h] [rbp-697h]
  char v266; // [rsp+B2h] [rbp-696h]
  char v267; // [rsp+B3h] [rbp-695h]
  char v268; // [rsp+B4h] [rbp-694h]
  char v269; // [rsp+B5h] [rbp-693h]
  char v270; // [rsp+B6h] [rbp-692h]
  char v271; // [rsp+B7h] [rbp-691h]
  __int64 v272; // [rsp+B8h] [rbp-690h]
  __int64 v273; // [rsp+C0h] [rbp-688h]
  __int64 v274; // [rsp+C8h] [rbp-680h]
  int v275; // [rsp+D4h] [rbp-674h]
  int v277; // [rsp+E4h] [rbp-664h]
  bool v278; // [rsp+E9h] [rbp-65Fh]
  bool v279; // [rsp+EAh] [rbp-65Eh]
  bool v280; // [rsp+EBh] [rbp-65Dh]
  bool v281; // [rsp+ECh] [rbp-65Ch]
  bool v282; // [rsp+EDh] [rbp-65Bh]
  bool v283; // [rsp+EEh] [rbp-65Ah]
  bool v284; // [rsp+EFh] [rbp-659h]
  bool v285; // [rsp+F0h] [rbp-658h]
  bool v286; // [rsp+F1h] [rbp-657h]
  char v287; // [rsp+F2h] [rbp-656h]
  bool v288; // [rsp+F3h] [rbp-655h]
  bool v289; // [rsp+F4h] [rbp-654h]
  bool v290; // [rsp+F5h] [rbp-653h]
  char v291; // [rsp+F6h] [rbp-652h]
  bool v292; // [rsp+F7h] [rbp-651h]
  bool v293; // [rsp+F8h] [rbp-650h]
  bool v294; // [rsp+F9h] [rbp-64Fh]
  bool v295; // [rsp+FAh] [rbp-64Eh]
  bool v296; // [rsp+FBh] [rbp-64Dh]
  bool v297; // [rsp+FCh] [rbp-64Ch]
  bool v298; // [rsp+FDh] [rbp-64Bh]
  bool v299; // [rsp+FEh] [rbp-64Ah]
  bool v300; // [rsp+FFh] [rbp-649h]
  bool v301; // [rsp+100h] [rbp-648h]
  bool v302; // [rsp+101h] [rbp-647h]
  bool v303; // [rsp+102h] [rbp-646h]
  bool v304; // [rsp+103h] [rbp-645h]
  char v305; // [rsp+104h] [rbp-644h]
  char v306; // [rsp+105h] [rbp-643h]
  bool v307; // [rsp+106h] [rbp-642h]
  bool v308; // [rsp+107h] [rbp-641h]
  bool v309; // [rsp+108h] [rbp-640h]
  bool v310; // [rsp+109h] [rbp-63Fh]
  bool v311; // [rsp+10Ah] [rbp-63Eh]
  bool v312; // [rsp+10Bh] [rbp-63Dh]
  bool v313; // [rsp+10Ch] [rbp-63Ch]
  bool v314; // [rsp+10Dh] [rbp-63Bh]
  char v315; // [rsp+10Eh] [rbp-63Ah]
  bool v316; // [rsp+10Fh] [rbp-639h]
  bool v317; // [rsp+110h] [rbp-638h]
  bool v318; // [rsp+111h] [rbp-637h]
  bool v319; // [rsp+112h] [rbp-636h]
  bool v320; // [rsp+113h] [rbp-635h]
  bool v321; // [rsp+114h] [rbp-634h]
  char v322; // [rsp+115h] [rbp-633h]
  char v323; // [rsp+116h] [rbp-632h]
  char v324; // [rsp+117h] [rbp-631h]
  char v325; // [rsp+118h] [rbp-630h]
  char v326; // [rsp+119h] [rbp-62Fh]
  char v327; // [rsp+11Ah] [rbp-62Eh]
  char v328; // [rsp+11Bh] [rbp-62Dh]
  char v329; // [rsp+11Ch] [rbp-62Ch]
  char v330; // [rsp+11Dh] [rbp-62Bh]
  char v331; // [rsp+11Eh] [rbp-62Ah]
  char v332; // [rsp+11Fh] [rbp-629h]
  char v333; // [rsp+120h] [rbp-628h]
  char v334; // [rsp+121h] [rbp-627h]
  char v335; // [rsp+122h] [rbp-626h]
  char v336; // [rsp+123h] [rbp-625h]
  char v337; // [rsp+124h] [rbp-624h]
  char v338; // [rsp+125h] [rbp-623h]
  char v339; // [rsp+126h] [rbp-622h]
  char v340; // [rsp+127h] [rbp-621h]
  __int64 v341; // [rsp+128h] [rbp-620h]
  __int64 v342; // [rsp+130h] [rbp-618h]
  __int64 v343; // [rsp+138h] [rbp-610h]
  __int64 v344; // [rsp+140h] [rbp-608h]
  __int64 v345; // [rsp+148h] [rbp-600h]
  unsigned __int64 v346; // [rsp+150h] [rbp-5F8h]
  unsigned __int64 v347; // [rsp+158h] [rbp-5F0h]
  char v348; // [rsp+164h] [rbp-5E4h]
  int v349; // [rsp+168h] [rbp-5E0h]
  char v350; // [rsp+16Ch] [rbp-5DCh]
  char v351; // [rsp+170h] [rbp-5D8h]
  int v352; // [rsp+174h] [rbp-5D4h]
  unsigned __int64 v353; // [rsp+178h] [rbp-5D0h]
  char v354; // [rsp+184h] [rbp-5C4h]
  unsigned __int64 v355; // [rsp+188h] [rbp-5C0h]
  unsigned __int64 v356; // [rsp+190h] [rbp-5B8h]
  unsigned __int64 v357; // [rsp+198h] [rbp-5B0h]
  unsigned __int64 v358; // [rsp+1A0h] [rbp-5A8h]
  __int64 v359; // [rsp+1A8h] [rbp-5A0h]
  unsigned __int64 v360; // [rsp+1B0h] [rbp-598h]
  char v361; // [rsp+1BCh] [rbp-58Ch]
  int v362; // [rsp+1C0h] [rbp-588h]
  char v363; // [rsp+1C4h] [rbp-584h]
  char v364; // [rsp+1C8h] [rbp-580h]
  char v365; // [rsp+1CCh] [rbp-57Ch]
  bool v366; // [rsp+1D0h] [rbp-578h]
  char v367; // [rsp+1D4h] [rbp-574h]
  quoting_style v368; // [rsp+1D8h] [rbp-570h]
  int v369; // [rsp+1DCh] [rbp-56Ch]
  int v370; // [rsp+1E0h] [rbp-568h]
  int v371; // [rsp+1E4h] [rbp-564h]
  unsigned __int64 v372; // [rsp+1E8h] [rbp-560h]
  unsigned __int64 v373; // [rsp+1F0h] [rbp-558h]
  unsigned __int64 v374; // [rsp+1F8h] [rbp-550h]
  unsigned __int64 v375; // [rsp+200h] [rbp-548h]
  int v376; // [rsp+208h] [rbp-540h]
  char v377; // [rsp+20Ch] [rbp-53Ch]
  char v378; // [rsp+210h] [rbp-538h]
  int v379; // [rsp+214h] [rbp-534h]
  int v380; // [rsp+218h] [rbp-530h]
  int v381; // [rsp+21Ch] [rbp-52Ch]
  char v382; // [rsp+220h] [rbp-528h]
  int v383; // [rsp+224h] [rbp-524h]
  __int64 v384; // [rsp+228h] [rbp-520h]
  char *v385; // [rsp+230h] [rbp-518h]
  size_t v386; // [rsp+238h] [rbp-510h]
  __int64 v387; // [rsp+240h] [rbp-508h]
  char v388; // [rsp+248h] [rbp-500h]
  __int64 v389; // [rsp+250h] [rbp-4F8h]
  char *v390; // [rsp+258h] [rbp-4F0h]
  __int64 v391; // [rsp+260h] [rbp-4E8h]
  __int64 v392; // [rsp+268h] [rbp-4E0h]
  __int64 v393; // [rsp+270h] [rbp-4D8h]
  __int64 v394; // [rsp+278h] [rbp-4D0h]
  __int64 v395; // [rsp+280h] [rbp-4C8h]
  __int64 v396; // [rsp+288h] [rbp-4C0h]
  unsigned __int64 v397; // [rsp+290h] [rbp-4B8h]
  size_t v398; // [rsp+298h] [rbp-4B0h]
  unsigned __int64 n; // [rsp+2A0h] [rbp-4A8h]
  char *s2; // [rsp+2A8h] [rbp-4A0h]
  unsigned __int64 v401; // [rsp+2B0h] [rbp-498h]
  __int64 v402; // [rsp+2B8h] [rbp-490h]
  unsigned __int64 v403; // [rsp+2C0h] [rbp-488h]
  unsigned __int64 v404; // [rsp+2C8h] [rbp-480h]
  __int64 v405; // [rsp+2D0h] [rbp-478h]
  size_t v406; // [rsp+2D8h] [rbp-470h]
  unsigned __int64 v407; // [rsp+2E0h] [rbp-468h]
  char *v408; // [rsp+2E8h] [rbp-460h]
  char *v409; // [rsp+2F0h] [rbp-458h]
  unsigned __int64 v410; // [rsp+2F8h] [rbp-450h]
  __int64 v411; // [rsp+300h] [rbp-448h]
  unsigned __int64 v412; // [rsp+308h] [rbp-440h]
  unsigned __int64 v413; // [rsp+310h] [rbp-438h]
  __int64 v415; // [rsp+320h] [rbp-428h]
  __int64 v416; // [rsp+328h] [rbp-420h]
  __int64 v417; // [rsp+330h] [rbp-418h]
  unsigned __int64 v418; // [rsp+338h] [rbp-410h]
  size_t v419; // [rsp+340h] [rbp-408h]
  __int64 v420; // [rsp+348h] [rbp-400h]
  __int64 v421; // [rsp+350h] [rbp-3F8h]
  __int64 v422; // [rsp+358h] [rbp-3F0h]
  unsigned __int64 v423; // [rsp+360h] [rbp-3E8h]
  __int64 v424; // [rsp+368h] [rbp-3E0h]
  unsigned __int64 v425; // [rsp+370h] [rbp-3D8h]
  __int64 v426; // [rsp+378h] [rbp-3D0h]
  unsigned __int64 v427; // [rsp+380h] [rbp-3C8h]
  __int64 v428; // [rsp+388h] [rbp-3C0h]
  unsigned __int64 v429; // [rsp+390h] [rbp-3B8h]
  unsigned __int64 v430; // [rsp+398h] [rbp-3B0h]
  unsigned __int64 v431; // [rsp+3A0h] [rbp-3A8h]
  unsigned __int64 v432; // [rsp+3A8h] [rbp-3A0h]
  __int64 v433; // [rsp+3B0h] [rbp-398h]
  unsigned __int64 v434; // [rsp+3B8h] [rbp-390h]
  unsigned __int64 v435; // [rsp+3C0h] [rbp-388h]
  unsigned __int64 v436; // [rsp+3C8h] [rbp-380h]
  __int64 v437; // [rsp+3D0h] [rbp-378h]
  unsigned __int64 v438; // [rsp+3D8h] [rbp-370h]
  unsigned __int64 v439; // [rsp+3E0h] [rbp-368h]
  char *v440; // [rsp+3E8h] [rbp-360h]
  __int64 v441; // [rsp+3F0h] [rbp-358h]
  __int64 v442; // [rsp+3F8h] [rbp-350h]
  __int64 v443; // [rsp+400h] [rbp-348h]
  __int64 v444; // [rsp+408h] [rbp-340h]
  __int64 v445; // [rsp+410h] [rbp-338h]
  __int64 v446; // [rsp+418h] [rbp-330h]
  __int64 v447; // [rsp+420h] [rbp-328h]
  unsigned __int64 v448; // [rsp+428h] [rbp-320h]
  unsigned __int64 v449; // [rsp+430h] [rbp-318h]
  unsigned __int64 v450; // [rsp+438h] [rbp-310h]
  __int64 v451; // [rsp+440h] [rbp-308h]
  __int64 v452; // [rsp+448h] [rbp-300h]
  __int64 v453; // [rsp+450h] [rbp-2F8h]
  __int64 v454; // [rsp+458h] [rbp-2F0h]
  __int64 v455; // [rsp+460h] [rbp-2E8h]
  __int64 v456; // [rsp+468h] [rbp-2E0h]
  __int64 v457; // [rsp+470h] [rbp-2D8h]
  size_t v458; // [rsp+478h] [rbp-2D0h]
  __int64 v459; // [rsp+480h] [rbp-2C8h]
  __int64 v460; // [rsp+488h] [rbp-2C0h]
  __int64 v461; // [rsp+490h] [rbp-2B8h]
  __int64 v462; // [rsp+498h] [rbp-2B0h]
  __int64 v463; // [rsp+4A0h] [rbp-2A8h]
  size_t v464; // [rsp+4A8h] [rbp-2A0h]
  __int64 v465; // [rsp+4B0h] [rbp-298h]
  size_t v466; // [rsp+4B8h] [rbp-290h]
  __int64 v467; // [rsp+4C0h] [rbp-288h]
  mbstate_t ps; // [rsp+4C8h] [rbp-280h] BYREF
  unsigned __int64 v469; // [rsp+4D0h] [rbp-278h]
  unsigned __int64 v470; // [rsp+4D8h] [rbp-270h]
  __int64 v471; // [rsp+4E0h] [rbp-268h]
  unsigned __int64 v472; // [rsp+4E8h] [rbp-260h]
  unsigned __int64 v473; // [rsp+4F0h] [rbp-258h]
  unsigned __int64 v474; // [rsp+4F8h] [rbp-250h]
  unsigned __int64 v475; // [rsp+500h] [rbp-248h]
  mbstate_t *p_ps; // [rsp+508h] [rbp-240h]
  __int64 v477; // [rsp+510h] [rbp-238h]
  unsigned __int64 v478; // [rsp+518h] [rbp-230h]
  unsigned __int64 v479; // [rsp+520h] [rbp-228h]
  char *s; // [rsp+528h] [rbp-220h]
  char *v481; // [rsp+530h] [rbp-218h]
  char *v482; // [rsp+538h] [rbp-210h]
  __int64 v483; // [rsp+540h] [rbp-208h]
  __int64 v484; // [rsp+548h] [rbp-200h]
  __int64 v485; // [rsp+550h] [rbp-1F8h]
  __int64 v486; // [rsp+558h] [rbp-1F0h]
  __int64 v487; // [rsp+560h] [rbp-1E8h]
  __int64 v488; // [rsp+568h] [rbp-1E0h]
  __int64 v489; // [rsp+570h] [rbp-1D8h]
  __int64 v490; // [rsp+578h] [rbp-1D0h]
  __int64 v491; // [rsp+580h] [rbp-1C8h]
  unsigned __int64 v492; // [rsp+588h] [rbp-1C0h]
  int v493; // [rsp+594h] [rbp-1B4h]
  int v494; // [rsp+598h] [rbp-1B0h]
  int v495; // [rsp+59Ch] [rbp-1ACh]
  int v496; // [rsp+5A0h] [rbp-1A8h]
  int v497; // [rsp+5A4h] [rbp-1A4h]
  wint_t wc; // [rsp+5A8h] [rbp-1A0h] BYREF
  int v499; // [rsp+5ACh] [rbp-19Ch]
  __int64 v500; // [rsp+5B0h] [rbp-198h]
  __int64 v501; // [rsp+5B8h] [rbp-190h]
  unsigned __int64 v502; // [rsp+5C0h] [rbp-188h]
  char *v503; // [rsp+5C8h] [rbp-180h]
  __int64 v504; // [rsp+5D0h] [rbp-178h]
  __int64 v505; // [rsp+5D8h] [rbp-170h]
  __int64 v506; // [rsp+5E0h] [rbp-168h]
  __int64 v507; // [rsp+5E8h] [rbp-160h]
  char *v508; // [rsp+5F0h] [rbp-158h]
  char *v509; // [rsp+5F8h] [rbp-150h]
  __int64 v510; // [rsp+600h] [rbp-148h]
  const char *v511; // [rsp+608h] [rbp-140h]
  wint_t *p_wc; // [rsp+610h] [rbp-138h]
  __int64 v513; // [rsp+618h] [rbp-130h]
  unsigned __int64 v514; // [rsp+620h] [rbp-128h]
  size_t v515; // [rsp+628h] [rbp-120h]
  char *v516; // [rsp+630h] [rbp-118h]
  __int64 v517; // [rsp+638h] [rbp-110h]
  __int64 v518; // [rsp+640h] [rbp-108h]
  __int64 v519; // [rsp+648h] [rbp-100h]
  unsigned __int64 v520; // [rsp+650h] [rbp-F8h]
  __int64 v521; // [rsp+658h] [rbp-F0h]
  __int64 v522; // [rsp+660h] [rbp-E8h]
  __int64 v523; // [rsp+668h] [rbp-E0h]
  __int64 v524; // [rsp+670h] [rbp-D8h]
  __int64 v525; // [rsp+678h] [rbp-D0h]
  __int64 v526; // [rsp+680h] [rbp-C8h]
  unsigned __int64 v527; // [rsp+688h] [rbp-C0h]
  unsigned __int64 v528; // [rsp+690h] [rbp-B8h]
  __int64 v529; // [rsp+698h] [rbp-B0h]
  unsigned __int64 v530; // [rsp+6A0h] [rbp-A8h]
  __int64 v531; // [rsp+6A8h] [rbp-A0h]
  __int64 v532; // [rsp+6B0h] [rbp-98h]
  _BYTE *v533; // [rsp+6B8h] [rbp-90h]
  __int64 v534; // [rsp+6C0h] [rbp-88h]
  __int64 v535; // [rsp+6C8h] [rbp-80h]
  __int64 v536; // [rsp+6D0h] [rbp-78h]
  __int64 v537; // [rsp+6D8h] [rbp-70h]
  __int64 v538; // [rsp+6E0h] [rbp-68h]
  __int64 v539; // [rsp+6E8h] [rbp-60h]
  __int64 v540; // [rsp+6F0h] [rbp-58h]
  __int64 v541; // [rsp+6F8h] [rbp-50h]
  __int64 v542; // [rsp+700h] [rbp-48h]
  size_t v543; // [rsp+708h] [rbp-40h]
  size_t v544; // [rsp+710h] [rbp-38h]

  v507 = argsize;
  v506 = buffersize;
  v509 = right_quote;
  v508 = left_quote;
  v250 = __ctype_get_mb_cur_max() == 1;
  v249 = (flags & 2) != 0;
  v14 = -853538731;
  if ( (~(_BYTE)flags | 0xFFFFFFFE) == -1 )
    v14 = -1943755302;
  v495 = v14;
  v15 = 1929116740;
  if ( (~(_BYTE)flags | 0xFFFFFFFB) == -1 )
    v15 = -1943755302;
  v494 = v15;
  v16 = 1014656684;
  if ( quote_these_too )
    v16 = -2125737697;
  v497 = v16;
  v496 = flags;
  v493 = flags & 0xFFFFFFFD;
  v248 = 1;
  v176 = 31;
  v177 = 31;
  v178 = 31;
  v188 = 31;
  v186 = 31;
  v187 = 31;
  v212 = 31;
  v209 = 31;
  v210 = 31;
  v211 = 31;
  v173 = 31;
  v174 = 31;
  v172 = 31;
  v206 = 31;
  v208 = 31;
  v207 = 31;
  v17 = -193092051;
  v505 = 0LL;
  v406 = 0LL;
  v368 = literal_quoting_style;
  v464 = 0LL;
  v466 = 0LL;
  v431 = 0LL;
  v465 = 0LL;
  v467 = 0LL;
  v341 = 2169229599LL;
  v246 = -2125737697;
  v342 = 2169229599LL;
  v343 = 0LL;
  v344 = 0LL;
  v345 = 0LL;
  v382 = 0;
  v367 = 0;
  v430 = 0LL;
  v387 = 2169229599LL;
  v351 = 31;
  v350 = 31;
  v392 = 2169229599LL;
  v393 = 2169229599LL;
  v394 = 2169229599LL;
  v395 = 2169229599LL;
  v429 = 0LL;
  v417 = 2169229599LL;
  v363 = 31;
  v420 = 0LL;
  v421 = 0LL;
  v422 = 0LL;
  v424 = 0LL;
  v195 = 31;
  v272 = 2169229599LL;
  v273 = 2169229599LL;
  v274 = 2169229599LL;
  v362 = -2125737697;
  v366 = 0;
  v361 = 31;
  v426 = 0LL;
  v416 = 2169229599LL;
  v428 = 0LL;
  v381 = 0;
  v463 = 0LL;
  v365 = 0;
  v425 = 0LL;
  v364 = 31;
  v427 = 0LL;
  v423 = 0LL;
  v378 = 0;
  v461 = 0LL;
  v462 = 0LL;
  v450 = 2169229599LL;
  v459 = 0LL;
  v380 = 0;
  v348 = 31;
  v396 = 0LL;
  v349 = -2125737697;
  v377 = 0;
  v379 = 0;
  v449 = 2169229599LL;
  v460 = 0LL;
  v415 = 2169229599LL;
  v419 = 2169229599LL;
  v448 = 2169229599LL;
  v457 = 2169229599LL;
  v247 = 31;
  v389 = 2169229599LL;
  v418 = 2169229599LL;
  v354 = 31;
  v405 = 2169229599LL;
  v458 = 2169229599LL;
  v447 = 2169229599LL;
  v452 = 2169229599LL;
  v454 = 2169229599LL;
  v456 = 2169229599LL;
  v445 = 2169229599LL;
  v446 = 2169229599LL;
  v388 = 31;
  v386 = 2169229599LL;
  v385 = (char *)2169229599LL;
  v384 = 2169229599LL;
  v390 = (char *)2169229599LL;
  v391 = 2169229599LL;
  v352 = -2125737697;
  v442 = 2169229599LL;
  v443 = 2169229599LL;
  v455 = 2169229599LL;
  v444 = 2169229599LL;
  v451 = 2169229599LL;
  v453 = 2169229599LL;
  v441 = 2169229599LL;
  v376 = -2125737697;
  v500 = 0LL;
  v501 = 0LL;
  v502 = 0LL;
  v503 = 0LL;
  v504 = 0LL;
  v231 = 0;
  v234 = 0;
  v235 = 0;
  v236 = 0;
  v199 = 0;
  v205 = 0;
  v203 = 0;
  v204 = 0;
  v227 = 0;
  v233 = 0;
  v229 = 0;
  v230 = 0;
  v201 = 0;
  v182 = 0;
  v185 = 0;
  v200 = 0;
  v232 = 0;
  v222 = 0;
  v223 = 0;
  v224 = 0;
  v184 = 0;
  v202 = 0;
  v198 = 0;
  v226 = 0;
  v221 = 0;
  v228 = 0;
  v225 = 0;
  do
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
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v18 = (unsigned int)v17;
                      if ( v17 <= 29859337 )
                        break;
                      if ( v17 > 1066676821 )
                      {
                        if ( v17 <= 1562460486 )
                        {
                          if ( v17 <= 1293789815 )
                          {
                            if ( v17 > 1178588743 )
                            {
                              if ( v17 <= 1228684149 )
                              {
                                if ( v17 > 1217306384 )
                                {
                                  if ( v17 > 1221543236 )
                                  {
                                    if ( v17 == 1221543237 )
                                    {
                                      v17 = -1940147062;
                                      if ( v278 )
                                        v17 = 542942761;
                                    }
                                    else if ( v17 == 1225244659 )
                                    {
                                      v440 = (char *)v465;
                                      v413 = v467;
                                      v82 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                                      v83 = -87613352;
                                      if ( (v82 == -1) != y_32 < 10 )
                                        v83 = -801147805;
                                      v17 = v83;
                                      if ( v82 == -1 )
                                        v17 = -801147805;
                                      if ( y_32 >= 10 )
                                        v17 = v83;
                                    }
                                  }
                                  else if ( v17 == 1217306385 )
                                  {
                                    v389 = v470 + 1;
                                    v17 = -1425502135;
                                  }
                                  else if ( v17 == 1219698315 )
                                  {
                                    v17 = -355225445;
                                  }
                                }
                                else if ( v17 > 1195803833 )
                                {
                                  if ( v17 == 1195803834 )
                                  {
                                    v425 = v434 + 1;
                                    v17 = 653618592;
                                    v365 = 0;
                                  }
                                  else if ( v17 == 1200360278 )
                                  {
                                    v470 = v357 + 1;
                                    v17 = 1217306385;
                                    if ( v357 + 1 < v181 )
                                      v17 = -20765636;
                                  }
                                }
                                else if ( v17 == 1178588744 )
                                {
                                  v463 = v347;
                                  v236 = v190;
                                  v235 = v183;
                                  v234 = v214;
                                  v17 = -1027307571;
                                  v381 = 16;
                                  v231 = v241;
                                }
                                else if ( v17 == 1184766264 )
                                {
                                  v17 = -339957105;
                                }
                              }
                              else if ( v17 <= 1260391996 )
                              {
                                if ( v17 > 1254032225 )
                                {
                                  if ( v17 == 1254032226 )
                                  {
                                    v163 = -1827465767;
                                    if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                      v163 = -1323209857;
                                    v17 = v163;
                                    if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                      v17 = -1323209857;
                                    if ( y_32 >= 10 )
                                      v17 = v163;
                                  }
                                  else if ( v17 == 1254099109 )
                                  {
                                    v17 = 1277386913;
                                  }
                                }
                                else if ( v17 == 1228684150 )
                                {
                                  v478 = v358 + 1;
                                  v300 = v358 + 1 < v181;
                                  v125 = -532440036;
                                  if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                    v125 = -1130074801;
                                  v17 = v125;
                                  if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                    v17 = -1130074801;
                                  if ( y_32 >= 10 )
                                    v17 = v125;
                                }
                                else if ( v17 == 1246587898 )
                                {
                                  v17 = -239105074;
                                }
                              }
                              else if ( v17 <= 1274832818 )
                              {
                                if ( v17 == 1260391997 )
                                {
                                  v17 = -606059962;
                                }
                                else if ( v17 == 1271388445 )
                                {
                                  v208 = v170;
                                  v366 = v255;
                                  v428 = v192;
                                  v416 = v191;
                                  v426 = v521;
                                  v207 = v167;
                                  v17 = -968814508;
                                  v362 = 0;
                                  v206 = v171;
                                  v361 = 0;
                                }
                              }
                              else
                              {
                                switch ( v17 )
                                {
                                  case 1274832819:
                                    v17 = 878621694;
                                    break;
                                  case 1277386913:
                                    v278 = v407 != 0;
                                    v97 = 1254099109;
                                    if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                      v97 = 1221543237;
                                    v17 = v97;
                                    if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                      v17 = 1221543237;
                                    if ( y_32 >= 10 )
                                      v17 = v97;
                                    break;
                                  case 1284472774:
                                    v17 = -1349606722;
                                    if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                      v17 = -923476689;
                                    if ( y_32 >= 10 )
                                      v17 = -1349606722;
                                    if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                      v17 = -923476689;
                                    break;
                                }
                              }
                            }
                            else if ( v17 <= 1145471908 )
                            {
                              if ( v17 > 1094452278 )
                              {
                                if ( v17 > 1124078823 )
                                {
                                  if ( v17 == 1124078824 )
                                  {
                                    v17 = 974820099;
                                    if ( v290 )
                                      v17 = 766451094;
                                  }
                                  else if ( v17 == 1137288067 )
                                  {
                                    v17 = -1945260495;
                                    if ( v289 )
                                      v17 = -1243352324;
                                    v182 = v260;
                                  }
                                }
                                else if ( v17 == 1094452279 )
                                {
                                  v17 = 1689316373;
                                  v449 = v528;
                                }
                                else if ( v17 == 1101417084 )
                                {
                                  v318 = ((unsigned __int8)~v175 | 0xFE) != 0xFF;
                                  v17 = 14179288;
                                  if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                    v17 = -1276076176;
                                  if ( y_32 >= 10 )
                                    v17 = 14179288;
                                  if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                    v17 = -1276076176;
                                }
                              }
                              else if ( v17 > 1079553696 )
                              {
                                if ( v17 == 1079553697 )
                                {
                                  v17 = 1274832819;
                                  if ( v277 == 96 )
                                    v17 = 804946282;
                                }
                                else if ( v17 == 1081106250 )
                                {
                                  v17 = -1257394774;
                                  if ( v192 )
                                    v17 = -1943755302;
LABEL_2653:
                                  v174 = v170;
                                  v274 = v192;
                                  v12 = v191;
                                  v273 = v219;
                                  v272 = v197;
                                  v195 = v167;
                                  v172 = v168;
                                  v173 = v171;
                                  v10 = 0;
                                  v9 = v181;
                                  v11 = 0;
                                }
                              }
                              else if ( v17 == 1066676822 )
                              {
                                v17 = 1039347785;
                              }
                              else if ( v17 == 1066892297 )
                              {
                                v17 = 470747750;
                                if ( v179 < 65 )
                                  v17 = -1540659998;
                              }
                            }
                            else if ( v17 <= 1158526585 )
                            {
                              if ( v17 > 1153830586 )
                              {
                                if ( v17 == 1153830587 )
                                {
                                  v304 = ((unsigned __int8)v215 & ((unsigned __int8)v215 ^ 0xFE)) != 0;
                                  v154 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                                  v17 = -1820509527;
                                  if ( !v154 )
                                    v17 = -1790817792;
                                  if ( y_32 >= 10 )
                                    v17 = -1820509527;
                                  if ( (v154 == 0) != y_32 < 10 )
                                    v17 = -1790817792;
                                }
                                else if ( v17 == 1156930725 )
                                {
                                  v17 = 477724148;
                                  if ( !mbsinit(&ps) )
                                    v17 = -698954756;
                                  v419 = v410;
                                  v415 = v519;
                                  v201 = v262;
                                }
                              }
                              else if ( v17 == 1145471909 )
                              {
                                v311 = v438 < v360;
                                v117 = 1643138023;
                                if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                  v117 = -584302314;
                                v17 = v117;
                                if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                  v17 = -584302314;
                                if ( y_32 >= 10 )
                                  v17 = v117;
                              }
                              else if ( v17 == 1147682871 )
                              {
                                v447 = v359;
                                v17 = 907544165;
                                v458 = v359;
                              }
                            }
                            else if ( v17 <= 1166043305 )
                            {
                              if ( v17 == 1158526586 )
                              {
                                v17 = -244804695;
                                if ( v179 < 93 )
                                  v17 = -243266482;
                              }
                              else if ( v17 == 1163025038 )
                              {
                                v17 = -847131456;
                              }
                            }
                            else
                            {
                              switch ( v17 )
                              {
                                case 1166043306:
                                  buffer[v474] = 63;
                                  v17 = 1041775972;
                                  break;
                                case 1170170610:
                                  *buffer = 39;
                                  v17 = 1299465751;
                                  break;
                                case 1178250409:
                                  v17 = 1014656684;
                                  if ( v306 )
                                    v17 = -2125737697;
                                  break;
                              }
                            }
                          }
                          else if ( v17 <= 1412312461 )
                          {
                            if ( v17 <= 1344435695 )
                            {
                              if ( v17 > 1309198647 )
                              {
                                if ( v17 > 1327404520 )
                                {
                                  if ( v17 == 1327404521 )
                                  {
                                    v17 = -911058456;
                                  }
                                  else if ( v17 == 1333956973 )
                                  {
                                    v78 = -1736725149;
                                    if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                      v78 = -1751294166;
                                    v17 = v78;
                                    if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                      v17 = -1751294166;
                                    if ( y_32 >= 10 )
                                      v17 = v78;
                                  }
                                }
                                else if ( v17 == 1309198648 )
                                {
                                  buffer[v438] = 92;
                                  v17 = 1679940810;
                                }
                                else if ( v17 == 1325489134 )
                                {
                                  v17 = -855623633;
                                }
                              }
                              else if ( v17 > 1300016176 )
                              {
                                if ( v17 == 1300016177 )
                                {
                                  v17 = 68039269;
                                  if ( v347 < v181 )
                                    v17 = 2133617987;
                                }
                                else if ( v17 == 1301599608 )
                                {
                                  v17 = 1274832819;
                                  if ( (unsigned int)(v277 - 91) < 2 )
                                    v17 = 804946282;
                                }
                              }
                              else if ( v17 == 1293789816 )
                              {
                                v17 = 589664130;
                                if ( v296 )
                                  v17 = 908610435;
                              }
                              else if ( v17 == 1299465751 )
                              {
                                v17 = 554276863;
                                v442 = 1LL;
                              }
                            }
                            else if ( v17 <= 1367182217 )
                            {
                              if ( v17 > 1358169253 )
                              {
                                if ( v17 == 1358169254 )
                                {
                                  v17 = 1299465751;
                                  if ( v407 )
                                    v17 = 1170170610;
                                }
                                else if ( v17 == 1366491607 )
                                {
                                  v69 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                                  v17 = 428189702;
                                  if ( !v69 )
                                    v17 = -818654027;
                                  if ( y_32 >= 10 )
                                    v17 = 428189702;
                                  if ( (v69 == 0) != y_32 < 10 )
                                    v17 = -818654027;
                                }
                              }
                              else if ( v17 == 1344435696 )
                              {
                                v17 = -18636273;
                                if ( v275 < 47 )
                                  v17 = 753588106;
                              }
                              else if ( v17 == 1346951019 )
                              {
                                v17 = 672472956;
                                if ( v413 < v181 )
                                  v17 = 1029559842;
                              }
                            }
                            else if ( v17 <= 1374310144 )
                            {
                              if ( v17 == 1367182218 )
                              {
                                v17 = -266510488;
                                if ( v220 != custom_quoting_style )
                                  v17 = -641038350;
                                v453 = (__int64)v409;
                                v451 = (__int64)v408;
                              }
                              else if ( v17 == 1373424409 )
                              {
                                v298 = v196 == 2;
                                v60 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                                v17 = -831710196;
                                if ( !v60 )
                                  v17 = -1905580073;
                                if ( y_32 >= 10 )
                                  v17 = -831710196;
                                if ( (v60 == 0) != y_32 < 10 )
                                  v17 = -1905580073;
                              }
                            }
                            else
                            {
                              switch ( v17 )
                              {
                                case 1374310145:
                                  v93 = -1423320578;
                                  if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                    v93 = -649358117;
                                  v17 = v93;
                                  if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                    v17 = -649358117;
                                  if ( y_32 >= 10 )
                                    v17 = v93;
                                  break;
                                case 1377344680:
                                  buffer[v372] = ~(v183 >> 6) & 0xE3 ^ 0xD3;
                                  v17 = 350664359;
                                  break;
                                case 1404681511:
                                  buffer[v435] = 39;
                                  v25 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                                  v26 = -1721598468;
                                  if ( (v25 == -1) != y_32 < 10 )
                                    v26 = 1750033455;
                                  v17 = v26;
                                  if ( v25 == -1 )
                                    v17 = 1750033455;
                                  if ( y_32 >= 10 )
                                    v17 = v26;
                                  break;
                              }
                            }
                          }
                          else if ( v17 > 1485469512 )
                          {
                            if ( v17 <= 1520055806 )
                            {
                              if ( v17 > 1495856669 )
                              {
                                if ( v17 == 1495856670 )
                                {
                                  v17 = -2027654905;
                                  if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                    v17 = -185202150;
                                  if ( y_32 >= 10 )
                                    v17 = -2027654905;
                                  if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                    v17 = -185202150;
                                }
                                else if ( v17 == 1510763460 )
                                {
                                  v17 = 29859338;
                                  v226 = 1;
                                  v221 = v228;
                                }
                              }
                              else if ( v17 == 1485469513 )
                              {
                                v17 = -172527668;
                              }
                              else if ( v17 == 1487672617 )
                              {
                                v17 = -1943755302;
                                if ( v196 == 2 )
                                  v17 = 1056066695;
                                v174 = v170;
                                v274 = v192;
                                v12 = v191;
                                v273 = v219;
                                v272 = v197;
                                v195 = v167;
                                v173 = v171;
                                v10 = 1;
                                v11 = 0;
                                v9 = v181;
                                v172 = 1;
                              }
                            }
                            else if ( v17 <= 1544162306 )
                            {
                              if ( v17 == 1520055807 )
                              {
                                v17 = 151680284;
                              }
                              else if ( v17 == 1539267068 )
                              {
                                v17 = -944806537;
                                if ( v179 < 126 )
                                  v17 = -540382818;
                              }
                            }
                            else
                            {
                              switch ( v17 )
                              {
                                case 1544162307:
                                  v446 = v542 + 1;
                                  v445 = v541;
                                  v456 = v540;
                                  v454 = v526;
                                  v224 = v340;
                                  v223 = v339;
                                  v222 = v338;
                                  v17 = 557990288;
                                  v452 = v525;
                                  break;
                                case 1552579443:
                                  v17 = 1200360278;
                                  break;
                                case 1559253648:
                                  v358 = v347 + 1;
                                  v299 = v347 + 1 < v181;
                                  v29 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                                  v17 = -1968607679;
                                  if ( !v29 )
                                    v17 = -418287413;
                                  if ( y_32 >= 10 )
                                    v17 = -1968607679;
                                  if ( (v29 == 0) != y_32 < 10 )
                                    v17 = -418287413;
                                  break;
                              }
                            }
                          }
                          else if ( v17 <= 1447185642 )
                          {
                            if ( v17 > 1432363646 )
                            {
                              if ( v17 == 1432363647 )
                              {
                                v17 = 863441700;
                                if ( v179 == 63 )
                                  v17 = 1453082084;
                              }
                              else if ( v17 == 1441522157 )
                              {
                                v17 = 1821599198;
                                if ( v281 )
                                  v17 = -85606641;
                              }
                            }
                            else if ( v17 == 1412312462 )
                            {
                              buffer[v357] = 48;
                              v113 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                              v17 = -1821777588;
                              if ( !v113 )
                                v17 = 1552579443;
                              if ( y_32 >= 10 )
                                v17 = -1821777588;
                              if ( (v113 == 0) != y_32 < 10 )
                                v17 = 1552579443;
                            }
                            else if ( v17 == 1428216266 )
                            {
                              v287 = *v511;
                              v17 = -549890530;
                              if ( v191 < v181 )
                                v17 = 780871668;
                            }
                          }
                          else if ( v17 <= 1453082083 )
                          {
                            if ( v17 == 1447185643 )
                            {
                              v474 = v473 + 1;
                              v17 = 1041775972;
                              if ( v473 + 1 < v181 )
                                v17 = 1166043306;
                            }
                            else if ( v17 == 1450895583 )
                            {
                              v17 = 1961063938;
                              if ( v302 )
                                v17 = 1482509079;
                            }
                          }
                          else
                          {
                            switch ( v17 )
                            {
                              case 1453082084:
                                v17 = 1895326959;
                                break;
                              case 1454752319:
                                v17 = -1425502135;
                                if ( v284 )
                                  v17 = 1873310226;
                                v389 = v357;
                                break;
                              case 1482509079:
                                buffer[v479] = (v183 >> 3) & 7 | 0x30;
                                v17 = 1961063938;
                                break;
                            }
                          }
                        }
                        else if ( v17 > 1855381654 )
                        {
                          if ( v17 <= 1961063937 )
                          {
                            if ( v17 <= 1911574182 )
                            {
                              if ( v17 > 1884681492 )
                              {
                                if ( v17 > 1902268899 )
                                {
                                  if ( v17 == 1902268900 )
                                  {
                                    v17 = -786360925;
                                    if ( v220 < c_quoting_style )
                                      v17 = 29859338;
                                    v376 = v220;
                                    v225 = v193;
                                    v221 = v213;
                                    v226 = v193;
                                  }
                                  else if ( v17 == 1904907854 )
                                  {
                                    v262 = v348;
                                    v519 = v396;
                                    v369 = v349;
                                    v81 = 1184766264;
                                    if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                      v81 = -339957105;
                                    v17 = v81;
                                    if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                      v17 = -339957105;
                                    if ( y_32 >= 10 )
                                      v17 = v81;
                                  }
                                }
                                else if ( v17 == 1884681493 )
                                {
                                  buffer[v412] = 92;
                                  v130 = -511459704;
                                  if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                    v130 = 615596741;
                                  v17 = v130;
                                  if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                    v17 = 615596741;
                                  if ( y_32 >= 10 )
                                    v17 = v130;
                                }
                                else if ( v17 == 1895326959 )
                                {
                                  v17 = 1788199484;
                                  if ( v196 < 5 )
                                    v17 = -713203078;
                                }
                              }
                              else if ( v17 > 1873310225 )
                              {
                                if ( v17 == 1873310226 )
                                {
                                  v149 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                                  v17 = 46413542;
                                  if ( !v149 )
                                    v17 = -156629928;
                                  if ( y_32 >= 10 )
                                    v17 = 46413542;
                                  if ( (v149 == 0) != y_32 < 10 )
                                    v17 = -156629928;
                                }
                                else if ( v17 == 1878016197 )
                                {
                                  v17 = -55555315;
                                  if ( (v169 & (v169 ^ 0xFE)) != 0 )
                                    v17 = -861910066;
                                }
                              }
                              else if ( v17 == 1855381655 )
                              {
                                v17 = -2030329258;
                                if ( v179 < 36 )
                                  v17 = 1983623988;
                              }
                              else if ( v17 == 1866774929 )
                              {
                                v232 = arg[v192] == 0;
                                v17 = 831634183;
                              }
                            }
                            else if ( v17 <= 1929116739 )
                            {
                              if ( v17 > 1922310439 )
                              {
                                if ( v17 == 1922310440 )
                                {
                                  v352 = v220;
                                  v391 = (__int64)v409;
                                  v390 = v408;
                                  v385 = v516;
                                  v386 = v515;
                                  v17 = -1126029821;
                                  v388 = 0;
                                  v184 = v213;
                                  v384 = 0LL;
                                }
                                else if ( v17 == 1928413996 )
                                {
                                  v70 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                                  v71 = 1929323704;
                                  if ( (v70 == -1) != y_32 < 10 )
                                    v71 = -1440925305;
                                  v17 = v71;
                                  if ( v70 == -1 )
                                    v17 = -1440925305;
                                  if ( y_32 >= 10 )
                                    v17 = v71;
                                }
                              }
                              else if ( v17 == 1911574183 )
                              {
                                v17 = 1739736379;
                                if ( v189 )
                                  v17 = 559794856;
                              }
                              else if ( v17 == 1919391861 )
                              {
                                v17 = 525820730;
                              }
                            }
                            else if ( v17 <= 1930397619 )
                            {
                              if ( v17 == 1929116740 )
                              {
                                v17 = -565703861;
                                if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                  v17 = -1445991109;
                                if ( y_32 >= 10 )
                                  v17 = -565703861;
                                if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                  v17 = -1445991109;
                              }
                              else if ( v17 == 1929323704 )
                              {
                                v17 = 1928413996;
                              }
                            }
                            else
                            {
                              switch ( v17 )
                              {
                                case 1930397620:
                                  v17 = -244804695;
                                  if ( v179 < 37 )
                                    v17 = 1813414701;
                                  v247 = 0;
                                  break;
                                case 1930570377:
                                  v527 = v192 + n;
                                  v17 = 1147682871;
                                  if ( n > 1 )
                                    v17 = 977830732;
                                  if ( !v252 )
                                    v17 = 1147682871;
                                  break;
                                case 1951043608:
                                  v17 = 238705339;
                                  break;
                              }
                            }
                          }
                          else if ( v17 <= 2044424455 )
                          {
                            if ( v17 <= 1990092607 )
                            {
                              if ( v17 > 1968612078 )
                              {
                                if ( v17 == 1968612079 )
                                {
                                  v352 = v499;
                                  v391 = (__int64)v409;
                                  v390 = v408;
                                  v17 = -1126029821;
                                  v184 = 1;
                                  v388 = v258;
                                  v386 = 1LL;
                                  v385 = "\"";
                                  v384 = v441;
                                }
                                else if ( v17 == 1983623988 )
                                {
                                  v17 = -1935425099;
                                  if ( v179 < 33 )
                                    v17 = -1557363312;
                                }
                              }
                              else if ( v17 == 1961063938 )
                              {
                                v427 = v479 + 1;
                                v205 = v183 & 7 | 0x30;
                                v203 = v328;
                                v17 = 348424786;
                                v199 = 1;
                                v364 = v214;
                              }
                              else if ( v17 == 1961975406 )
                              {
                                goto LABEL_1376;
                              }
                            }
                            else if ( v17 <= 1999609109 )
                            {
                              if ( v17 == 1990092608 )
                              {
                                v12 = v475 + 1;
                                v174 = v170;
                                v274 = v192;
                                v273 = v536;
                                v272 = v197;
                                v173 = v171;
                                v17 = -1943755302;
                                v10 = 1;
                                v11 = 0;
                                v9 = v401;
                                v172 = 1;
                                v195 = 0;
                              }
                              else if ( v17 == 1994813320 )
                              {
                                v17 = 611911588;
                              }
                            }
                            else
                            {
                              switch ( v17 )
                              {
                                case 1999609110:
                                  v101 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                                  v102 = -1933721714;
                                  if ( (v101 == -1) != y_32 < 10 )
                                    v102 = -320846944;
                                  v17 = v102;
                                  if ( v101 == -1 )
                                    v17 = -320846944;
                                  if ( y_32 >= 10 )
                                    v17 = v102;
                                  break;
                                case 2025444065:
                                  v17 = -2034234139;
                                  if ( v301 )
                                    v17 = 1617168078;
                                  break;
                                case 2003745772:
                                  abort();
                              }
                            }
                          }
                          else if ( v17 <= 2105010169 )
                          {
                            if ( v17 > 2058743051 )
                            {
                              if ( v17 == 2058743052 )
                              {
                                v151 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                                v152 = -2084628338;
                                if ( (v151 == -1) != y_32 < 10 )
                                  v152 = -1011286137;
                                v17 = v152;
                                if ( v151 == -1 )
                                  v17 = -1011286137;
                                if ( y_32 >= 10 )
                                  v17 = v152;
                              }
                              else if ( v17 == 2103311049 )
                              {
                                v17 = 508238097;
                                if ( (v169 & (v169 ^ 0xFE)) != 0 )
                                  v17 = 1178588744;
                              }
                            }
                            else if ( v17 == 2044424456 )
                            {
                              v17 = -985273269;
                            }
                            else if ( v17 == 2047502974 )
                            {
                              v39 = 158141481;
                              if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                v39 = 94426251;
                              v17 = v39;
                              if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                v17 = 94426251;
                              if ( y_32 >= 10 )
                                v17 = v39;
                            }
                          }
                          else if ( v17 <= 2133617986 )
                          {
                            if ( v17 == 2105010170 )
                            {
                              v344 = v531;
                              v345 = v539;
                              v343 = v538;
                              v342 = v537;
                              v178 = v337;
                              v177 = v336;
                              v17 = -66814975;
                              v246 = 0;
                              v341 = v439;
                              v176 = v382;
                            }
                            else if ( v17 == 2132741342 )
                            {
                              v17 = -1474032513;
                              if ( v237 )
                                v17 = 1271388445;
                            }
                          }
                          else
                          {
                            switch ( v17 )
                            {
                              case 2133617987:
                                buffer[v347] = 92;
                                v17 = 68039269;
                                break;
                              case 2137460883:
                                v17 = -452604601;
                                if ( v356 < v360 )
                                  v17 = 452627309;
                                break;
                              case 2142419141:
                                v17 = -1080551286;
                                if ( v179 < 96 )
                                  v17 = -1400868203;
                                break;
                            }
                          }
                        }
                        else if ( v17 <= 1750846424 )
                        {
                          if ( v17 <= 1679940809 )
                          {
                            if ( v17 > 1600448654 )
                            {
                              if ( v17 > 1643138022 )
                              {
                                if ( v17 == 1643138023 )
                                {
                                  v17 = 1145471909;
                                }
                                else if ( v17 == 1644205312 )
                                {
                                  v17 = -1567456772;
                                  if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                    v17 = -378436947;
                                  if ( y_32 >= 10 )
                                    v17 = -1567456772;
                                  if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                    v17 = -378436947;
                                }
                              }
                              else if ( v17 == 1600448655 )
                              {
                                v17 = 1045938481;
                                if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                  v17 = 29131559;
                                if ( y_32 >= 10 )
                                  v17 = 1045938481;
                                if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                  v17 = 29131559;
                              }
                              else if ( v17 == 1617168078 )
                              {
                                v17 = -511459704;
                                if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                  v17 = 1884681493;
                                if ( y_32 >= 10 )
                                  v17 = -511459704;
                                if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                  v17 = 1884681493;
                              }
                            }
                            else if ( v17 > 1579305972 )
                            {
                              if ( v17 == 1579305973 )
                              {
                                v17 = -1187452490;
                                v455 = v517;
                                v444 = 0LL;
                              }
                              else if ( v17 == 1595219136 )
                              {
                                v17 = -1089871189;
                              }
                            }
                            else if ( v17 == 1562460487 )
                            {
                              v17 = -568980835;
                              if ( v179 < 7 )
                                v17 = 66501689;
                            }
                            else if ( v17 == 1564777859 )
                            {
                              v17 = 558326920;
                              if ( v277 < 94 )
                                v17 = 1301599608;
                            }
                          }
                          else if ( v17 <= 1718206985 )
                          {
                            if ( v17 > 1689316372 )
                            {
                              if ( v17 == 1689316373 )
                              {
                                v346 = v449;
                                v17 = -571569498;
                                if ( v449 < v398 )
                                  v17 = -747142657;
                              }
                              else if ( v17 == 1706423529 )
                              {
                                v492 = v431;
                                v17 = -760092782;
                                if ( v431 < v181 )
                                  v17 = -2059329412;
                              }
                            }
                            else if ( v17 == 1679940810 )
                            {
                              v394 = v438 + 1;
                              v395 = v524;
                              v393 = v523;
                              v392 = v522;
                              v187 = v335;
                              v186 = v268;
                              v188 = v334;
                              v351 = v333;
                              v17 = 467385887;
                              v350 = 1;
                              v387 = v360;
                            }
                            else if ( v17 == 1684556744 )
                            {
                              v17 = -1510340717;
                            }
                          }
                          else if ( v17 <= 1738529146 )
                          {
                            if ( v17 == 1718206986 )
                            {
                              v17 = -1945260495;
                              v182 = 97;
                            }
                            else if ( v17 == 1731421105 )
                            {
                              v345 = v524;
                              v344 = v356;
                              v343 = v523;
                              v342 = v522;
                              v178 = v194;
                              v177 = v268;
                              v176 = v175;
                              v17 = -66814975;
                              v246 = 16;
                              v341 = v360;
                            }
                          }
                          else
                          {
                            switch ( v17 )
                            {
                              case 1738529147:
                                v17 = 425301089;
                                v379 = 16;
                                break;
                              case 1739736379:
                                v174 = v170;
                                v274 = v192;
                                v12 = v191;
                                v273 = v219;
                                v272 = v197;
                                v195 = v167;
                                v172 = v168;
                                v173 = v171;
                                v10 = 0;
                                v9 = v181;
                                v11 = 0;
                                v17 = v495;
                                break;
                              case 1750033455:
                                v17 = -420567553;
                                break;
                            }
                          }
                        }
                        else if ( v17 > 1814264810 )
                        {
                          if ( v17 <= 1830238573 )
                          {
                            if ( v17 > 1821599197 )
                            {
                              if ( v17 == 1821599198 )
                              {
                                v17 = -1376759160;
                                if ( v196 == 2 )
                                  v17 = -1253538059;
                                v418 = v191;
                                v200 = v167;
                              }
                              else if ( v17 == 1829031924 )
                              {
                                v17 = -317270888;
                              }
                            }
                            else if ( v17 == 1814264811 )
                            {
                              v316 = ((unsigned __int8)~v169 | 0xFE) != 0xFF;
                              v126 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                              v127 = -760237315;
                              if ( (v126 == -1) != y_32 < 10 )
                                v127 = -1851880755;
                              v17 = v127;
                              if ( v126 == -1 )
                                v17 = -1851880755;
                              if ( y_32 >= 10 )
                                v17 = v127;
                            }
                            else if ( v17 == 1817279729 )
                            {
                              v43 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                              v44 = -760237315;
                              if ( (v43 == -1) != y_32 < 10 )
                                v44 = 1814264811;
                              v17 = v44;
                              if ( v43 == -1 )
                                v17 = 1814264811;
                              if ( y_32 >= 10 )
                                v17 = v44;
                            }
                          }
                          else if ( v17 <= 1840300346 )
                          {
                            if ( v17 == 1830238574 )
                            {
                              v17 = -1874243345;
                              if ( v370 == 44 )
                                v17 = 467385887;
                              v395 = v486;
                              v394 = v485;
                              v393 = v219;
                              v392 = v484;
                              v187 = v242;
                              v186 = v168;
                              v188 = v267;
                              v350 = v266;
                              v351 = v265;
                              v387 = v181;
                            }
                            else if ( v17 == 1837976425 )
                            {
                              v17 = -1172099547;
                            }
                          }
                          else
                          {
                            switch ( v17 )
                            {
                              case 1840300347:
                                v17 = 43119390;
                                if ( v179 < 9 )
                                  v17 = 1562460487;
                                break;
                              case 1848347904:
                                v17 = -1550306113;
                                break;
                              case 1850588877:
                                v17 = 903839067;
                                if ( v371 == 16 )
                                  v17 = 840731505;
                                v466 = v526;
                                v464 = v525;
                                break;
                            }
                          }
                        }
                        else if ( v17 <= 1788199483 )
                        {
                          if ( v17 > 1773609392 )
                          {
                            if ( v17 == 1773609393 )
                            {
                              v17 = 549061279;
                              if ( v179 < 94 )
                                v17 = 1066892297;
                            }
                            else if ( v17 == 1782061774 )
                            {
                              buffer[v436] = v251;
                              v17 = 301319056;
                            }
                          }
                          else if ( v17 == 1750846425 )
                          {
                            v17 = 508616350;
                          }
                          else if ( v17 == 1757228674 )
                          {
                            v17 = -793232975;
                          }
                        }
                        else if ( v17 <= 1791498720 )
                        {
                          if ( v17 == 1788199484 )
                          {
                            v17 = -1569405993;
                            if ( v196 == 5 )
                              v17 = -1439867379;
                          }
                          else if ( v17 == 1790950246 )
                          {
                            v17 = -1465220482;
                            if ( v309 )
                              v17 = -192299266;
                          }
                        }
                        else
                        {
                          switch ( v17 )
                          {
                            case 1791498721:
                              buffer[v469] = 39;
                              v17 = 460136316;
                              break;
                            case 1791544130:
LABEL_1231:
                              v174 = v170;
                              v274 = v192;
                              v12 = v191;
                              v273 = v219;
                              v272 = v197;
                              v195 = v167;
                              v172 = v168;
                              v173 = v171;
                              v17 = -1943755302;
                              v10 = 0;
                              v9 = v181;
                              v11 = 0;
                              break;
                            case 1813414701:
                              v261 = v247;
                              v17 = -1943755302;
                              if ( v196 == 2 )
                                v17 = -890715795;
LABEL_57:
                              v174 = v170;
                              v274 = v192;
                              v12 = v191;
                              v273 = v219;
                              v272 = v197;
                              v195 = v167;
                              v172 = v168;
                              v173 = v171;
                              v10 = v261;
                              v11 = 0;
                              v9 = v181;
                              break;
                          }
                        }
                      }
                      else if ( v17 <= 558326919 )
                      {
                        if ( v17 <= 317979416 )
                        {
                          if ( v17 > 139304346 )
                          {
                            if ( v17 <= 238705338 )
                            {
                              if ( v17 > 205852114 )
                              {
                                if ( v17 > 227931130 )
                                {
                                  if ( v17 == 227931131 )
                                  {
                                    v17 = -1935787320;
                                    if ( v219 )
                                      v17 = -2106319326;
                                    if ( v181 )
                                      v17 = -1935787320;
                                    if ( (v219 != 0) != (v181 == 0) )
                                      v17 = -2106319326;
                                    v457 = v219;
                                    v448 = v181;
                                  }
                                  else if ( v17 == 235345799 )
                                  {
                                    v17 = 934238589;
                                  }
                                }
                                else if ( v17 == 205852115 )
                                {
                                  v312 = ((unsigned __int8)~v218 | 0xFE) != 0xFF;
                                  v131 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                                  v132 = 364985314;
                                  if ( (v131 == -1) != y_32 < 10 )
                                    v132 = 810139327;
                                  v17 = v132;
                                  if ( v131 == -1 )
                                    v17 = 810139327;
                                  if ( y_32 >= 10 )
                                    v17 = v132;
                                }
                                else if ( v17 == 225503437 )
                                {
                                  quoting_style = v196;
                                  v508 = v482;
                                  v509 = v481;
                                  v504 = v219;
                                  v503 = s2;
                                  v50 = n;
                                  v502 = n;
                                  LOBYTE(v50) = v239;
                                  v501 = v50;
                                  v507 = v359;
                                  v51 = v169;
                                  v249 = v169;
                                  LOBYTE(v51) = v167;
                                  v500 = v51;
                                  LOBYTE(v51) = v168;
                                  v505 = v51;
                                  v248 = v175;
                                  v506 = v219;
                                  v17 = -193092051;
                                }
                              }
                              else if ( v17 > 151680283 )
                              {
                                if ( v17 == 151680284 )
                                {
                                  v17 = -1220069037;
                                  if ( v220 < shell_escape_always_quoting_style )
                                    v17 = -794258491;
                                }
                                else if ( v17 == 158141481 )
                                {
                                  v17 = 94426251;
                                }
                              }
                              else if ( v17 == 139304347 )
                              {
                                v108 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                                v17 = -489172681;
                                if ( !v108 )
                                  v17 = 584830169;
                                if ( y_32 >= 10 )
                                  v17 = -489172681;
                                if ( (v108 == 0) != y_32 < 10 )
                                  v17 = 584830169;
                              }
                              else if ( v17 == 139382470 )
                              {
                                v483 = v460;
                                v513 = v460 + v192;
                                v17 = 876333504;
                                if ( v460 + v192 < v410 )
                                  v17 = 330725288;
                              }
                            }
                            else if ( v17 <= 290631994 )
                            {
                              if ( v17 > 252976990 )
                              {
                                if ( v17 == 252976991 )
                                {
                                  v17 = -640114631;
                                }
                                else if ( v17 == 258417303 )
                                {
                                  v17 = 419773796;
                                  if ( v283 )
                                    v17 = -1389146222;
                                }
                              }
                              else if ( v17 == 238705339 )
                              {
                                v289 = (v169 & (v169 ^ 0xFE)) != 0;
                                v124 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                                v17 = 1951043608;
                                if ( !v124 )
                                  v17 = 1137288067;
                                if ( y_32 >= 10 )
                                  v17 = 1951043608;
                                if ( (v124 == 0) != y_32 < 10 )
                                  v17 = 1137288067;
                              }
                              else if ( v17 == 251488426 )
                              {
                                v406 = quotearg_buffer_restyled(buffer, v543, arg, v544, v368, v493, 0LL, v482, v481);
                                v17 = -520447342;
                              }
                            }
                            else if ( v17 <= 301319055 )
                            {
                              if ( v17 == 290631995 )
                              {
                                v141 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                                v17 = -1937913605;
                                if ( !v141 )
                                  v17 = -1180936729;
                                if ( y_32 >= 10 )
                                  v17 = -1937913605;
                                if ( (v141 == 0) != y_32 < 10 )
                                  v17 = -1180936729;
                              }
                              else if ( v17 == 290651807 )
                              {
                                v61 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                                v17 = 1757228674;
                                if ( !v61 )
                                  v17 = -793232975;
                                if ( y_32 >= 10 )
                                  v17 = 1757228674;
                                if ( (v61 == 0) != y_32 < 10 )
                                  v17 = -793232975;
                              }
                            }
                            else
                            {
                              switch ( v17 )
                              {
                                case 301319056:
                                  v444 = v436 + 1;
                                  v455 = v518 + 1;
                                  v17 = -1187452490;
                                  break;
                                case 305886412:
                                  v423 = v478 + 1;
                                  v17 = -278977640;
                                  v204 = 1;
                                  break;
                                case 306194517:
                                  v17 = 2137460883;
                                  if ( v308 )
                                    v17 = -679409738;
                                  v429 = v356;
                                  v212 = v194;
                                  break;
                              }
                            }
                          }
                          else if ( v17 <= 66501688 )
                          {
                            if ( v17 > 56156252 )
                            {
                              if ( v17 > 57374528 )
                              {
                                if ( v17 == 57374529 )
                                {
                                  buffer[v191] = 39;
                                  v17 = -617716635;
                                }
                                else if ( v17 == 64495301 )
                                {
                                  v17 = -1108196794;
                                  if ( v220 < locale_quoting_style )
                                    v17 = 1254032226;
                                }
                              }
                              else if ( v17 == 56156253 )
                              {
                                v17 = -151868196;
                                v377 = 0;
                              }
                              else if ( v17 == 56641380 )
                              {
                                v396 = v402;
                                v17 = 1904907854;
                                v349 = 52;
                                v348 = v240;
                              }
                            }
                            else if ( v17 > 46413541 )
                            {
                              if ( v17 == 46413542 )
                              {
                                v17 = -156629928;
                              }
                              else if ( v17 == 51268678 )
                              {
                                v17 = 18694357;
                                if ( iswprint(wc) )
                                  v17 = -151868196;
                                v377 = v240;
                              }
                            }
                            else if ( v17 == 29859338 )
                            {
                              v238 = v226;
                              v17 = 120264890;
                              if ( ((unsigned __int8)v226 & ((unsigned __int8)v226 ^ 0xFE)) != 0 )
                                v17 = -1077017597;
                              v202 = v226;
                              v198 = v221;
                            }
                            else if ( v17 == 43119390 )
                            {
                              v17 = -2096605605;
                              if ( v179 < 11 )
                                v17 = 1031457043;
                            }
                          }
                          else if ( v17 <= 79401476 )
                          {
                            if ( v17 > 69123543 )
                            {
                              if ( v17 == 69123544 )
                              {
                                v17 = 1432363647;
                                if ( v179 < 63 )
                                  v17 = 1813414701;
                                v247 = 0;
                              }
                              else if ( v17 == 78883700 )
                              {
                                goto LABEL_1376;
                              }
                            }
                            else if ( v17 == 66501689 )
                            {
                              v17 = 863441700;
                              if ( !v179 )
                                v17 = -1460469636;
                            }
                            else if ( v17 == 68039269 )
                            {
                              v427 = v347 + 1;
                              v203 = v190;
                              v205 = v183;
                              v17 = 348424786;
                              v364 = 0;
                              v199 = v241;
                            }
                          }
                          else if ( v17 <= 94426250 )
                          {
                            if ( v17 == 79401477 )
                            {
                              v17 = 1377344680;
                              if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                v17 = 350664359;
                              if ( y_32 >= 10 )
                                v17 = 1377344680;
                              if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                v17 = 350664359;
                            }
                            else if ( v17 == 83047793 )
                            {
                              v17 = -1874243345;
                              if ( !v370 )
                                v17 = -1943755302;
                              v274 = v486;
                              v12 = v485;
                              v273 = v219;
                              v272 = v484;
                              v195 = v242;
                              v172 = v168;
                              v174 = v267;
                              v173 = v330;
                              v11 = v266;
                              v10 = v265;
                              v9 = v181;
                            }
                          }
                          else
                          {
                            switch ( v17 )
                            {
                              case 94426251:
                                v84 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                                v85 = 158141481;
                                if ( (v84 == -1) != y_32 < 10 )
                                  v85 = 1961975406;
                                v17 = v85;
                                if ( v84 == -1 )
                                  v17 = 1961975406;
                                if ( y_32 >= 10 )
                                  v17 = v85;
                                break;
                              case 120264890:
                                v17 = -1077017597;
                                v198 = 1;
                                v202 = v238;
                                break;
                              case 136779055:
                                v256 = v196 == 2;
                                v315 = (v191 == 0) & ~((v191 == 0) ^ (v196 == 2));
                                v21 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                                v22 = -2052375821;
                                if ( (v21 == -1) != y_32 < 10 )
                                  v22 = -404007448;
                                v17 = v22;
                                if ( v21 == -1 )
                                  v17 = -404007448;
                                if ( y_32 >= 10 )
                                  v17 = v22;
                                break;
                            }
                          }
                        }
                        else if ( v17 <= 454293988 )
                        {
                          if ( v17 <= 402290713 )
                          {
                            if ( v17 > 364985313 )
                            {
                              if ( v17 > 378515470 )
                              {
                                if ( v17 == 378515471 )
                                {
                                  v171 = v354;
                                  v197 = v405;
                                  v170 = arg[v192];
                                  v179 = v170;
                                  v17 = 706999908;
                                }
                                else if ( v17 == 393394072 )
                                {
                                  buffer[v473] = 34;
                                  v17 = 1447185643;
                                }
                              }
                              else if ( v17 == 364985314 )
                              {
                                v17 = 205852115;
                              }
                              else if ( v17 == 376368249 )
                              {
                                v17 = -2074165829;
                              }
                            }
                            else if ( v17 > 348424785 )
                            {
                              if ( v17 == 348424786 )
                              {
                                v215 = v199;
                                v263 = v364;
                                v264 = v205;
                                v216 = v203;
                                v403 = v427;
                                v146 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                                v147 = 1327404521;
                                if ( (v146 == -1) != y_32 < 10 )
                                  v147 = -911058456;
                                v17 = v147;
                                if ( v146 == -1 )
                                  v17 = -911058456;
                                if ( y_32 >= 10 )
                                  v17 = v147;
                              }
                              else if ( v17 == 350664359 )
                              {
                                buffer[v372] = (v183 >> 6) | 0x30;
                                v63 = 1377344680;
                                if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                  v63 = -619830557;
                                v17 = v63;
                                if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                  v17 = -619830557;
                                if ( y_32 >= 10 )
                                  v17 = v63;
                              }
                            }
                            else if ( v17 == 317979417 )
                            {
                              v290 = v197 == -1LL;
                              v107 = -922279507;
                              if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                v107 = 1124078824;
                              v17 = v107;
                              if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                v17 = 1124078824;
                              if ( y_32 >= 10 )
                                v17 = v107;
                            }
                            else if ( v17 == 330725288 )
                            {
                              v17 = 876333504;
                              if ( arg[v513] )
                                v17 = 703026101;
                            }
                          }
                          else if ( v17 <= 425301088 )
                          {
                            if ( v17 > 412847281 )
                            {
                              if ( v17 == 412847282 )
                              {
                                v158 = 1254099109;
                                if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                  v158 = 1277386913;
                                v17 = v158;
                                if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                  v17 = 1277386913;
                                if ( y_32 >= 10 )
                                  v17 = v158;
                              }
                              else if ( v17 == 419773796 )
                              {
                                v469 = v432 + 1;
                                v17 = 460136316;
                                if ( v432 + 1 < v181 )
                                  v17 = 1791498721;
                              }
                            }
                            else if ( v17 == 402290714 )
                            {
                              v121 = 1246587898;
                              if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                v121 = -239105074;
                              v17 = v121;
                              if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                v17 = -239105074;
                              if ( y_32 >= 10 )
                                v17 = v121;
                            }
                            else if ( v17 == 409280760 )
                            {
                              v473 = v472 + 1;
                              v17 = 1447185643;
                              if ( v472 + 1 < v181 )
                                v17 = 393394072;
                            }
                          }
                          else if ( v17 <= 428189701 )
                          {
                            if ( v17 == 425301089 )
                            {
                              v17 = 1904907854;
                              if ( !v379 )
                                v17 = 51268678;
                              v396 = v402;
                              v348 = v240;
                              v349 = v379;
                            }
                            else if ( v17 == 427002826 )
                            {
                              v57 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                              v58 = 14179288;
                              if ( (v57 == -1) != y_32 < 10 )
                                v58 = 1101417084;
                              v17 = v58;
                              if ( v57 == -1 )
                                v17 = 1101417084;
                              if ( y_32 >= 10 )
                                v17 = v58;
                            }
                          }
                          else
                          {
                            switch ( v17 )
                            {
                              case 428189702:
                                v17 = 1366491607;
                                break;
                              case 446807442:
                                v17 = -1968607679;
                                if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                  v17 = 1559253648;
                                if ( y_32 >= 10 )
                                  v17 = -1968607679;
                                if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                  v17 = 1559253648;
                                break;
                              case 452627309:
                                buffer[v356] = 39;
                                v17 = -452604601;
                                break;
                            }
                          }
                        }
                        else if ( v17 > 508238096 )
                        {
                          if ( v17 <= 542942760 )
                          {
                            if ( v17 > 525820729 )
                            {
                              if ( v17 == 525820730 )
                              {
                                v280 = memcmp(&arg[v192], s2, n) == 0;
                                v17 = 1919391861;
                                if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                  v17 = -580806255;
                                if ( y_32 >= 10 )
                                  v17 = 1919391861;
                                if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                  v17 = -580806255;
                              }
                              else if ( v17 == 538371046 )
                              {
                                v17 = -1927152567;
                              }
                            }
                            else if ( v17 == 508238097 )
                            {
                              v17 = -831710196;
                              if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                v17 = 1373424409;
                              if ( y_32 >= 10 )
                                v17 = -831710196;
                              if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                v17 = 1373424409;
                            }
                            else if ( v17 == 508616350 )
                            {
                              v313 = ((unsigned __int8)v270 & ((unsigned __int8)v270 ^ 0xFE)) != 0;
                              v45 = 1750846425;
                              if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                v45 = -895682293;
                              v17 = v45;
                              if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                v17 = -895682293;
                              if ( y_32 >= 10 )
                                v17 = v45;
                            }
                          }
                          else if ( v17 <= 549061278 )
                          {
                            if ( v17 == 542942761 )
                            {
                              *buffer = 34;
                              v17 = -1940147062;
                            }
                            else if ( v17 == 548247584 )
                            {
                              ps = 0LL;
                              v17 = 996784069;
                            }
                          }
                          else
                          {
                            switch ( v17 )
                            {
                              case 549061279:
                                v17 = -59997874;
                                if ( v179 < 123 )
                                  v17 = 2142419141;
                                break;
                              case 554276863:
                                v391 = (__int64)v409;
                                v390 = v408;
                                v184 = v325;
                                v17 = -1126029821;
                                v352 = 2;
                                v388 = v259;
                                v386 = 1LL;
                                v385 = "'";
                                v384 = v442;
                                break;
                              case 557990288:
                                v181 = v452;
                                v175 = v222;
                                v168 = v223;
                                v167 = v224;
                                v359 = v454;
                                v219 = v456;
                                v191 = v445;
                                v192 = v446;
                                v252 = v454 == -1;
                                v17 = -708298868;
                                if ( v454 == -1 )
                                  v17 = 1866774929;
                                break;
                            }
                          }
                        }
                        else if ( v17 <= 470747749 )
                        {
                          if ( v17 > 460136315 )
                          {
                            if ( v17 == 460136316 )
                            {
                              v418 = v469 + 1;
                              v17 = -1376759160;
                              v200 = 1;
                            }
                            else if ( v17 == 467385887 )
                            {
                              v439 = v387;
                              v269 = v351;
                              v270 = v350;
                              v271 = v188;
                              v336 = v186;
                              v218 = v187;
                              v537 = v392;
                              v538 = v393;
                              v404 = v394;
                              v539 = v395;
                              v65 = 364985314;
                              if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                v65 = 205852115;
                              v17 = v65;
                              if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                v17 = 205852115;
                              if ( y_32 >= 10 )
                                v17 = v65;
                            }
                          }
                          else if ( v17 == 454293989 )
                          {
                            v17 = -1945260495;
                            v182 = 98;
                          }
                          else if ( v17 == 458984693 )
                          {
                            v37 = 2044424456;
                            if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                              v37 = -985273269;
                            v17 = v37;
                            if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                              v17 = -985273269;
                            if ( y_32 >= 10 )
                              v17 = v37;
                          }
                        }
                        else if ( v17 <= 477724147 )
                        {
                          if ( v17 == 470747750 )
                          {
                            v17 = 1158526586;
                            if ( v179 < 92 )
                              v17 = -1399406329;
                          }
                          else if ( v17 == 474252832 )
                          {
                            v17 = 2003745772;
                          }
                        }
                        else
                        {
                          switch ( v17 )
                          {
                            case 477724148:
                              v17 = 574217634;
                              v380 = 0;
                              break;
                            case 489816771:
                              v17 = 1510763460;
                              if ( v220 <= literal_quoting_style )
                                v17 = -334328351;
                              v228 = v213;
                              break;
                            case 500606169:
                              v17 = 653618592;
                              if ( ((unsigned __int8)~v216 | 0xFE) != 0xFF )
                                v17 = -309044;
                              v425 = v403;
                              v365 = v216;
                              break;
                          }
                        }
                      }
                      else if ( v17 > 840731504 )
                      {
                        if ( v17 <= 927256458 )
                        {
                          if ( v17 <= 878621693 )
                          {
                            if ( v17 > 856007655 )
                            {
                              if ( v17 > 874934167 )
                              {
                                if ( v17 == 874934168 )
                                {
                                  v17 = 51268678;
                                  if ( v297 )
                                    v17 = 838581414;
                                }
                                else if ( v17 == 876333504 )
                                {
                                  v17 = 1904907854;
                                  v349 = 52;
                                  v396 = v483;
                                  v348 = 0;
                                }
                              }
                              else if ( v17 == 856007656 )
                              {
                                v17 = 1855381655;
                                if ( v179 < 13 )
                                  v17 = 1840300347;
                              }
                              else if ( v17 == 863441700 )
                              {
                                v17 = 801438143;
                              }
                            }
                            else if ( v17 > 852286310 )
                            {
                              if ( v17 == 852286311 )
                              {
                                buffer[v353] = 92;
                                v17 = 847745701;
                              }
                              else if ( v17 == 854042857 )
                              {
                                v17 = -1844086540;
                                if ( ((unsigned __int8)~v169 | 0xFE) != 0xFF )
                                  v17 = 775202901;
                              }
                            }
                            else if ( v17 == 840731505 )
                            {
                              v543 = v464;
                              v544 = v466;
                              v17 = 251488426;
                              if ( v196 == 2 )
                                v17 = -729019714;
                              v368 = v196;
                            }
                            else if ( v17 == 847745701 )
                            {
                              v17 = -382118467;
                              if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                v17 = -334066050;
                              if ( y_32 >= 10 )
                                v17 = -382118467;
                              if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                v17 = -334066050;
                            }
                          }
                          else if ( v17 <= 905527246 )
                          {
                            if ( v17 > 901748517 )
                            {
                              if ( v17 == 901748518 )
                              {
                                v161 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                                v162 = 25707595;
                                if ( (v161 == -1) != y_32 < 10 )
                                  v162 = 1738529147;
                                v17 = v162;
                                if ( v161 == -1 )
                                  v17 = 1738529147;
                                if ( y_32 >= 10 )
                                  v17 = v162;
                              }
                              else if ( v17 == 903839067 )
                              {
                                v17 = -520447342;
                                v406 = v18;
                              }
                            }
                            else if ( v17 == 878621694 )
                            {
                              v123 = -7610584;
                              if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                v123 = -2058386821;
                              v17 = v123;
                              if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                v17 = -2058386821;
                              if ( y_32 >= 10 )
                                v17 = v123;
                            }
                            else if ( v17 == 882057840 )
                            {
                              buffer[v475] = 39;
                              v17 = 1990092608;
                            }
                          }
                          else if ( v17 <= 908610434 )
                          {
                            if ( v17 == 905527247 )
                            {
                              v297 = ((unsigned __int8)~v169 | 0xFE) != 0xFF && v196 == 2;
                              v139 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                              v140 = -190607691;
                              if ( (v139 == -1) != y_32 < 10 )
                                v140 = 874934168;
                              v17 = v140;
                              if ( v139 == -1 )
                                v17 = 874934168;
                              if ( y_32 >= 10 )
                                v17 = v140;
                            }
                            else if ( v17 == 907544165 )
                            {
                              v437 = v447;
                              v17 = 378515471;
                              if ( v527 <= v458 )
                                v17 = -1819896575;
                              v354 = 0;
                              v405 = v447;
                            }
                          }
                          else
                          {
                            switch ( v17 )
                            {
                              case 908610435:
                                v94 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                                v95 = 1929323704;
                                if ( (v94 == -1) != y_32 < 10 )
                                  v95 = 1928413996;
                                v17 = v95;
                                if ( v94 == -1 )
                                  v17 = 1928413996;
                                if ( y_32 >= 10 )
                                  v17 = v95;
                                break;
                              case 921781338:
                                v17 = -1713306388;
                                if ( v189 )
                                  v17 = 1999609110;
                                v185 = v170;
                                break;
                              case 925533331:
                                v520 = v450;
                                v521 = v459;
                                v237 = ((unsigned __int8)~v230 | 0xFE) != 0xFF;
                                v255 = v237;
                                v17 = -2060716386;
                                if ( v450 > 1 )
                                  v17 = -1474032513;
                                break;
                            }
                          }
                        }
                        else if ( v17 > 1028850847 )
                        {
                          if ( v17 <= 1039347784 )
                          {
                            if ( v17 > 1031457042 )
                            {
                              if ( v17 == 1031457043 )
                              {
                                v17 = -409222916;
                                if ( v179 < 10 )
                                  v17 = -1943761737;
                              }
                              else if ( v17 == 1034046650 )
                              {
                                v17 = -2121278464;
                                if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                  v17 = -627062926;
                                if ( y_32 >= 10 )
                                  v17 = -2121278464;
                                if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                  v17 = -627062926;
                              }
                            }
                            else
                            {
                              v17 = v497;
                              if ( (_DWORD)v18 != 1028850848 )
                              {
                                v17 = v18;
                                if ( (_DWORD)v18 == 1029559842 )
                                {
                                  buffer[v413] = v257;
                                  v17 = 672472956;
                                }
                              }
                            }
                          }
                          else if ( v17 <= 1045938480 )
                          {
                            if ( v17 == 1039347785 )
                            {
                              v355 = v356 + 1;
                              v309 = v356 + 1 < v360;
                              v17 = 1066676822;
                              if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                v17 = 1790950246;
                              if ( y_32 >= 10 )
                                v17 = 1066676822;
                              if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                v17 = 1790950246;
                            }
                            else if ( v17 == 1041775972 )
                            {
                              v12 = v474 + 1;
                              v274 = v471;
                              v174 = v287;
                              v273 = v219;
                              v272 = v197;
                              v195 = v167;
                              v172 = v168;
                              v173 = v171;
                              v17 = -1943755302;
                              v10 = 0;
                              v9 = v181;
                              v11 = 0;
                            }
                          }
                          else
                          {
                            switch ( v17 )
                            {
                              case 1045938481:
                                v17 = 29131559;
                                break;
                              case 1056066695:
                                v17 = 227931131;
                                if ( (v169 & (v169 ^ 0xFE)) != 0 )
                                  v17 = -559730643;
                                break;
                              case 1060971954:
                                v30 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                                v17 = -92979289;
                                if ( !v30 )
                                  v17 = -490372620;
                                if ( y_32 >= 10 )
                                  v17 = -92979289;
                                if ( (v30 == 0) != y_32 < 10 )
                                  v17 = -490372620;
                                break;
                            }
                          }
                        }
                        else if ( v17 <= 993011524 )
                        {
                          if ( v17 > 974820098 )
                          {
                            if ( v17 == 974820099 )
                            {
                              v17 = 606924768;
                              if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                v17 = -59022902;
                              if ( y_32 >= 10 )
                                v17 = 606924768;
                              if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                v17 = -59022902;
                            }
                            else if ( v17 == 977830732 )
                            {
                              v17 = 907544165;
                              v458 = strlen(arg);
                              v447 = v458;
                            }
                          }
                          else if ( v17 == 927256459 )
                          {
                            buffer[v397] = 92;
                            v17 = -150702443;
                          }
                          else if ( v17 == 934238589 )
                          {
                            v307 = (v169 & (v169 ^ 0xFE)) != 0;
                            v38 = 235345799;
                            if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                              v38 = -2146072079;
                            v17 = v38;
                            if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                              v17 = -2146072079;
                            if ( y_32 >= 10 )
                              v17 = v38;
                          }
                        }
                        else if ( v17 <= 1014656683 )
                        {
                          if ( v17 == 993011525 )
                          {
                            v17 = -1943755302;
                            if ( ((unsigned __int8)~v169 | 0xFE) != 0xFF )
                              v17 = 78883700;
                            goto LABEL_2653;
                          }
                          if ( v17 == 996784069 )
                          {
                            p_ps = &ps;
                            ps = 0LL;
                            v295 = v197 == -1LL;
                            v55 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                            v17 = 548247584;
                            if ( !v55 )
                              v17 = -706466028;
                            if ( y_32 >= 10 )
                              v17 = 548247584;
                            if ( (v55 == 0) != y_32 < 10 )
                              v17 = -706466028;
                          }
                        }
                        else
                        {
                          switch ( v17 )
                          {
                            case 1014656684:
                              v17 = 467385887;
                              if ( ((unsigned __int8)~v332 | 0xFE) != 0xFF )
                                v17 = -1058831852;
                              v424 = v491;
                              v422 = v490;
                              v421 = v489;
                              v420 = v488;
                              v211 = v245;
                              v210 = v244;
                              v209 = v217;
                              v363 = v243;
                              v417 = v487;
                              v395 = v491;
                              v394 = v490;
                              v393 = v489;
                              v392 = v488;
                              v187 = v245;
                              v186 = v244;
                              v188 = v217;
                              v350 = v331;
                              v351 = v243;
                              v387 = v487;
                              break;
                            case 1021777213:
                              v17 = -420567553;
                              if ( v310 )
                                v17 = -423599109;
                              break;
                            case 1027593245:
                              v17 = 1706423529;
                              if ( v321 )
                                v17 = 1346951019;
                              v431 = v413;
                              break;
                          }
                        }
                      }
                      else if ( v17 <= 703026100 )
                      {
                        if ( v17 <= 604242539 )
                        {
                          if ( v17 > 584830168 )
                          {
                            if ( v17 > 595077311 )
                            {
                              if ( v17 == 595077312 )
                              {
                                v230 = v294;
                                v17 = 925533331;
                                v459 = v197;
                                v450 = 1LL;
                              }
                              else if ( v17 == 595553056 )
                              {
                                v17 = -2084628338;
                                if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                  v17 = 2058743052;
                                if ( y_32 >= 10 )
                                  v17 = -2084628338;
                                if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                  v17 = 2058743052;
                              }
                            }
                            else if ( v17 == 584830169 )
                            {
                              v17 = 378515471;
                              v354 = 1;
                              v405 = v437;
                            }
                            else if ( v17 == 589664130 )
                            {
                              v17 = -1691448355;
                              if ( v398 == -2LL )
                                v17 = -65236349;
                            }
                          }
                          else if ( v17 > 574217633 )
                          {
                            if ( v17 == 574217634 )
                            {
                              v17 = -968814508;
                              if ( !v380 )
                                v17 = 925533331;
                              v208 = v170;
                              v459 = v410;
                              v450 = v519;
                              v230 = v262;
                              v428 = v192;
                              v416 = v191;
                              v426 = v410;
                              v207 = v167;
                              v366 = 0;
                              v206 = v171;
                              v362 = v380;
                              v361 = 0;
                            }
                            else if ( v17 == 577937495 )
                            {
                              v17 = -1465220482;
                            }
                          }
                          else if ( v17 == 558326920 )
                          {
                            v17 = 1274832819;
                            if ( v277 == 94 )
                              v17 = 804946282;
                          }
                          else if ( v17 == 559794856 )
                          {
                            v33 = 1595219136;
                            if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                              v33 = -1089871189;
                            v17 = v33;
                            if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                              v17 = -1089871189;
                            if ( y_32 >= 10 )
                              v17 = v33;
                          }
                        }
                        else if ( v17 <= 625689654 )
                        {
                          if ( v17 > 611911587 )
                          {
                            if ( v17 == 611911588 )
                            {
                              v279 = v192 == v359;
                              v156 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                              v157 = 1994813320;
                              if ( (v156 == -1) != y_32 < 10 )
                                v157 = -1567510030;
                              v17 = v157;
                              if ( v156 == -1 )
                                v17 = -1567510030;
                              if ( y_32 >= 10 )
                                v17 = v157;
                            }
                            else if ( v17 == 615596741 )
                            {
                              v17 = -2034234139;
                            }
                          }
                          else if ( v17 == 604242540 )
                          {
                            v17 = -794769144;
                            if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                              v17 = 15583549;
                            if ( y_32 >= 10 )
                              v17 = -794769144;
                            if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                              v17 = 15583549;
                          }
                          else if ( v17 == 606924768 )
                          {
                            v17 = -59022902;
                          }
                        }
                        else if ( v17 <= 665904799 )
                        {
                          if ( v17 == 625689655 )
                          {
                            buffer[v432] = 36;
                            v17 = -1604419936;
                          }
                          else if ( v17 == 653618592 )
                          {
                            v329 = v365;
                            v374 = v425;
                            v17 = -1075199398;
                            if ( v425 < v181 )
                              v17 = -1713791166;
                          }
                        }
                        else
                        {
                          switch ( v17 )
                          {
                            case 665904800:
                              v17 = 903839067;
                              if ( !v371 )
                                v17 = 1544162307;
                              break;
                            case 672472956:
                              v88 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                              v89 = -1705040420;
                              if ( (v88 == -1) != y_32 < 10 )
                                v89 = -487125695;
                              v17 = v89;
                              if ( v88 == -1 )
                                v17 = -487125695;
                              if ( y_32 >= 10 )
                                v17 = v89;
                              break;
                            case 697416041:
                              v17 = -679409738;
                              if ( v196 == 2 )
                                v17 = 290631995;
                              v429 = v356;
                              v212 = v194;
                              break;
                          }
                        }
                      }
                      else if ( v17 > 782546094 )
                      {
                        if ( v17 <= 804946281 )
                        {
                          if ( v17 > 801438142 )
                          {
                            if ( v17 == 801438143 )
                            {
                              v164 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                              v17 = -1736725149;
                              if ( !v164 )
                                v17 = 1333956973;
                              if ( y_32 >= 10 )
                                v17 = -1736725149;
                              if ( (v164 == 0) != y_32 < 10 )
                                v17 = 1333956973;
                            }
                            else if ( v17 == 802356848 )
                            {
                              v241 = v378;
                              v214 = v227;
                              v183 = v233;
                              v190 = v229;
                              v347 = v461;
                              v411 = v462;
                              v17 = 782355602;
                              if ( v189 )
                                v17 = 1495856670;
                            }
                          }
                          else if ( v17 == 782546095 )
                          {
                            v17 = 1791544130;
                            if ( v275 == 33 )
                              v17 = -1927146476;
                          }
                          else if ( v17 == 785552227 )
                          {
                            v386 = strlen(s);
                            v352 = v220;
                            v391 = v517;
                            v390 = s;
                            v385 = s;
                            v17 = -1126029821;
                            v184 = 1;
                            v388 = v193;
                            v384 = v443;
                          }
                        }
                        else if ( v17 <= 823121262 )
                        {
                          if ( v17 == 804946282 )
                          {
                            v17 = 25707595;
                            if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                              v17 = 901748518;
                            if ( y_32 >= 10 )
                              v17 = 25707595;
                            if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                              v17 = 901748518;
                          }
                          else if ( v17 == 810139327 )
                          {
                            v17 = -264157865;
                            if ( v312 )
                              v17 = -1309553561;
                            v430 = v404;
                            v367 = v218;
                          }
                        }
                        else
                        {
                          switch ( v17 )
                          {
                            case 823121263:
                              v17 = -264157865;
                              v430 = v530;
                              v367 = 0;
                              break;
                            case 831634183:
                              v17 = -344497976;
                              if ( v232 )
                                v17 = -1006298924;
                              break;
                            case 838581414:
                              v17 = 1689316373;
                              v449 = 1LL;
                              break;
                          }
                        }
                      }
                      else if ( v17 <= 766451093 )
                      {
                        if ( v17 > 743425200 )
                        {
                          if ( v17 == 743425201 )
                          {
                            v17 = -1713306388;
                            v185 = 114;
                          }
                          else if ( v17 == 753588106 )
                          {
                            v17 = 1791544130;
                            if ( v275 == 45 )
                              v17 = -1927146476;
                          }
                        }
                        else if ( v17 == 703026101 )
                        {
                          v460 = v483 + 1;
                          v17 = 139382470;
                        }
                        else if ( v17 == 706999908 )
                        {
                          v17 = 1773609393;
                          if ( v179 < 40 )
                            v17 = 856007656;
                        }
                      }
                      else if ( v17 <= 777569828 )
                      {
                        if ( v17 == 766451094 )
                        {
                          v17 = -1257394774;
                          if ( v192 )
                            v17 = -1943755302;
                          if ( !arg[1] )
                            v17 = -1257394774;
                          if ( (v192 != 0) != (arg[1] != 0) )
                            v17 = -1943755302;
                          goto LABEL_2653;
                        }
                        if ( v17 == 775202901 )
                        {
                          v53 = 1325489134;
                          if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                            v53 = -855623633;
                          v17 = v53;
                          if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                            v17 = -855623633;
                          if ( y_32 >= 10 )
                            v17 = v53;
                        }
                      }
                      else
                      {
                        switch ( v17 )
                        {
                          case 777569829:
                            buffer[v472] = 34;
                            v17 = 409280760;
                            break;
                          case 780871668:
                            buffer[v191] = 63;
                            v17 = -549890530;
                            break;
                          case 782355602:
                            v17 = 348424786;
                            if ( ((unsigned __int8)v214 & ((unsigned __int8)v214 ^ 0xFE)) != 0 )
                              v17 = 1300016177;
                            v427 = v347;
                            v203 = v190;
                            v205 = v183;
                            v364 = v214;
                            v199 = v241;
                            break;
                        }
                      }
                    }
                    if ( v17 > -968814509 )
                      break;
                    if ( v17 <= -1583087876 )
                    {
                      if ( v17 <= -1917492867 )
                      {
                        if ( v17 > -2030329259 )
                        {
                          if ( v17 <= -1943755303 )
                          {
                            if ( v17 > -1986021656 )
                            {
                              if ( v17 > -1945260496 )
                              {
                                if ( v17 == -1945260495 )
                                {
                                  v327 = v182;
                                  v17 = -1943755302;
                                  if ( v189 )
                                    v17 = -873012508;
                                  goto LABEL_2653;
                                }
                                if ( v17 == -1943761737 )
                                {
                                  v17 = -1423320578;
                                  if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                    v17 = 1374310145;
                                  if ( y_32 >= 10 )
                                    v17 = -1423320578;
                                  if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                    v17 = 1374310145;
                                }
                              }
                              else if ( v17 == -1986021655 )
                              {
                                v17 = -2831301;
                                if ( !v369 )
                                  v17 = 1156930725;
                              }
                              else if ( v17 == -1968607679 )
                              {
                                v17 = 1559253648;
                              }
                            }
                            else if ( v17 > -2012823055 )
                            {
                              if ( v17 == -2012823054 )
                              {
                                v17 = -336748934;
                                if ( v277 < 124 )
                                  v17 = 1079553697;
                              }
                              else if ( v17 == -2004994011 )
                              {
                                goto LABEL_1376;
                              }
                            }
                            else if ( v17 == -2030329258 )
                            {
                              v17 = -981770004;
                              if ( v179 < 38 )
                                v17 = 1930397620;
                            }
                            else if ( v17 == -2027654905 )
                            {
                              v17 = -185202150;
                            }
                          }
                          else if ( v17 <= -1935425100 )
                          {
                            if ( v17 > -1937913606 )
                            {
                              if ( v17 == -1937913605 )
                              {
                                v17 = -1180936729;
                              }
                              else if ( v17 == -1935787320 )
                              {
                                v17 = -2106319326;
                                v457 = v181;
                                v448 = 0LL;
                              }
                            }
                            else if ( v17 == -1943755302 )
                            {
                              v487 = v9;
                              v243 = v10;
                              v331 = v11;
                              v332 = v173;
                              v217 = v174;
                              v244 = v172;
                              v245 = v195;
                              v488 = v272;
                              v489 = v273;
                              v490 = v12;
                              v491 = v274;
                              v17 = -799896021;
                              if ( v254 )
                                v17 = 1028850848;
                            }
                            else if ( v17 == -1940147062 )
                            {
                              v17 = 1968612079;
                              v441 = 1LL;
                            }
                          }
                          else if ( v17 <= -1927152568 )
                          {
                            if ( v17 == -1935425099 )
                            {
                              v17 = 1081106250;
                              if ( v179 < 35 )
                                v17 = 1813414701;
                              v247 = 0;
                            }
                            else if ( v17 == -1933721714 )
                            {
                              v17 = -320846944;
                            }
                          }
                          else
                          {
                            switch ( v17 )
                            {
                              case -1927152567:
                                v96 = 538371046;
                                if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                  v96 = -1579098700;
                                v17 = v96;
                                if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                  v17 = -1579098700;
                                if ( y_32 >= 10 )
                                  v17 = v96;
                                break;
                              case -1927146476:
                                v17 = 1428216266;
                                if ( (v169 & (v169 ^ 0xFE)) != 0 )
                                  v17 = -1246748393;
                                break;
                              case -1920509049:
                                v17 = -1333090950;
                                if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                  v17 = -1583087875;
                                if ( y_32 >= 10 )
                                  v17 = -1333090950;
                                if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                  v17 = -1583087875;
                                break;
                            }
                          }
                        }
                        else if ( v17 <= -2074165830 )
                        {
                          if ( v17 > -2121278465 )
                          {
                            if ( v17 > -2096605606 )
                            {
                              if ( v17 == -2096605605 )
                              {
                                v17 = 595553056;
                                if ( v179 < 12 )
                                  v17 = -787845793;
                              }
                              else if ( v17 == -2084628338 )
                              {
                                v17 = 2058743052;
                              }
                            }
                            else if ( v17 == -2121278464 )
                            {
                              buffer[v404] = 39;
                              v17 = -627062926;
                            }
                            else if ( v17 == -2106319326 )
                            {
                              v401 = v448;
                              v536 = v457;
                              v17 = 458984693;
                              if ( v191 < v448 )
                                v17 = -1619458439;
                            }
                          }
                          else if ( v17 > -2132440356 )
                          {
                            if ( v17 == -2132440355 )
                            {
                              v17 = -786360925;
                              v376 = 5;
                              v225 = 1;
                            }
                            else if ( v17 == -2125737697 )
                            {
                              v17 = 1014656684;
                              if ( (__ROL4__(-2, v217) | ~quote_these_too[v217 >> 5]) != -1 )
                                v17 = -1058831852;
                              v424 = v491;
                              v422 = v490;
                              v421 = v489;
                              v420 = v488;
                              v211 = v245;
                              v210 = v244;
                              v209 = v217;
                              v363 = v243;
                              v417 = v487;
                            }
                          }
                          else if ( v17 == -2146072079 )
                          {
                            v17 = 697416041;
                            if ( v307 )
                              v17 = 1731421105;
                          }
                          else if ( v17 == -2135462774 )
                          {
                            buffer[v358] = 36;
                            v17 = -1300781261;
                          }
                        }
                        else if ( v17 <= -2059329413 )
                        {
                          if ( v17 > -2070498389 )
                          {
                            if ( v17 == -2070498388 )
                            {
                              v17 = 419773796;
                            }
                            else if ( v17 == -2060716386 )
                            {
                              v17 = 1271388445;
                              if ( v189 )
                                v17 = 2132741342;
                            }
                          }
                          else if ( v17 == -2074165829 )
                          {
                            v529 = v374 + 1;
                            v305 = arg[v433];
                            v116 = 376368249;
                            if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                              v116 = -1714928545;
                            v17 = v116;
                            if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                              v17 = -1714928545;
                            if ( y_32 >= 10 )
                              v17 = v116;
                          }
                          else if ( v17 == -2072506711 )
                          {
                            v17 = 301319056;
                            if ( v436 < v407 )
                              v17 = 1782061774;
                          }
                        }
                        else if ( v17 <= -2052375822 )
                        {
                          if ( v17 == -2059329412 )
                          {
                            buffer[v492] = 0;
                            v17 = -760092782;
                          }
                          else if ( v17 == -2058386821 )
                          {
                            v528 = v346 + 1;
                            v56 = -7610584;
                            if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                              v56 = 1094452279;
                            v17 = v56;
                            if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                              v17 = 1094452279;
                            if ( y_32 >= 10 )
                              v17 = v56;
                          }
                        }
                        else
                        {
                          switch ( v17 )
                          {
                            case -2052375821:
                              v17 = 136779055;
                              break;
                            case -2034234139:
                              v372 = v412 + 1;
                              v17 = -1097692092;
                              if ( v412 + 1 < v181 )
                                v17 = 79401477;
                              break;
                            case -2033581423:
                              v20 = -1821777588;
                              if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                v20 = 1412312462;
                              v17 = v20;
                              if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                v17 = 1412312462;
                              if ( y_32 >= 10 )
                                v17 = v20;
                              break;
                          }
                        }
                      }
                      else if ( v17 <= -1819896576 )
                      {
                        if ( v17 <= -1871042687 )
                        {
                          if ( v17 > -1880258550 )
                          {
                            if ( v17 > -1874243346 )
                            {
                              if ( v17 == -1874243345 )
                              {
                                v345 = v486;
                                v344 = v485;
                                v343 = v219;
                                v342 = v484;
                                v178 = v242;
                                v177 = v168;
                                v176 = v175;
                                v246 = v370;
                                v17 = -66814975;
                                v341 = v181;
                              }
                              else if ( v17 == -1873509410 )
                              {
                                v17 = 1706423529;
                                if ( v319 )
                                  v17 = 402290714;
                                v431 = v191;
                              }
                            }
                            else if ( v17 == -1880258549 )
                            {
                              v17 = -617716635;
                              if ( v282 )
                                v17 = 57374529;
                            }
                            else if ( v17 == -1877749320 )
                            {
                              v17 = -520447342;
                              v406 = v492;
                            }
                          }
                          else if ( v17 > -1905580074 )
                          {
                            if ( v17 == -1905580073 )
                            {
                              v17 = -278977640;
                              if ( v298 )
                                v17 = -683130863;
                              v423 = v347;
                              v204 = v190;
                            }
                            else if ( v17 == -1901912216 )
                            {
                              v17 = -762562714;
                              if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                v17 = -1871042686;
                              if ( y_32 >= 10 )
                                v17 = -762562714;
                              if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                v17 = -1871042686;
                            }
                          }
                          else if ( v17 == -1917492866 )
                          {
                            buffer[v403] = 39;
                            v17 = -1715218393;
                          }
                          else if ( v17 == -1906419946 )
                          {
                            buffer[v347] = 39;
                            v17 = 446807442;
                          }
                        }
                        else if ( v17 <= -1844086541 )
                        {
                          if ( v17 > -1852353889 )
                          {
                            if ( v17 == -1852353888 )
                            {
                              v17 = 500606169;
                              if ( v303 )
                                v17 = -35036736;
                            }
                            else if ( v17 == -1851880755 )
                            {
                              v17 = -1840350257;
                              if ( v316 )
                                v17 = 840731505;
                              v466 = v359;
                              v464 = v181;
                            }
                          }
                          else if ( v17 == -1871042686 )
                          {
                            buffer[v375] = v271;
                            v119 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                            v120 = -762562714;
                            if ( (v119 == -1) != y_32 < 10 )
                              v120 = -504400660;
                            v17 = v120;
                            if ( v119 == -1 )
                              v17 = -504400660;
                            if ( y_32 >= 10 )
                              v17 = v120;
                          }
                          else if ( v17 == -1868915536 )
                          {
                            v17 = 1830238574;
                            if ( v370 < 44 )
                              v17 = 83047793;
                          }
                        }
                        else if ( v17 <= -1827465768 )
                        {
                          if ( v17 == -1844086540 )
                          {
                            v137 = -53587653;
                            if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                              v137 = -1528933777;
                            v17 = v137;
                            if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                              v17 = -1528933777;
                            if ( y_32 >= 10 )
                              v17 = v137;
                          }
                          else if ( v17 == -1840350257 )
                          {
                            v17 = 775202901;
                            if ( v256 )
                              v17 = 854042857;
                          }
                        }
                        else
                        {
                          switch ( v17 )
                          {
                            case -1827465767:
                              v17 = -1323209857;
                              break;
                            case -1821777588:
                              buffer[v357] = 48;
                              v17 = 1412312462;
                              break;
                            case -1820509527:
                              v17 = 1153830587;
                              break;
                          }
                        }
                      }
                      else if ( v17 > -1713306389 )
                      {
                        if ( v17 <= -1683340169 )
                        {
                          if ( v17 > -1705040421 )
                          {
                            if ( v17 == -1705040420 )
                            {
                              v17 = -487125695;
                            }
                            else if ( v17 == -1691448355 )
                            {
                              v73 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                              v74 = -190607691;
                              if ( (v73 == -1) != y_32 < 10 )
                                v74 = 905527247;
                              v17 = v74;
                              if ( v73 == -1 )
                                v17 = 905527247;
                              if ( y_32 >= 10 )
                                v17 = v74;
                            }
                          }
                          else if ( v17 == -1713306388 )
                          {
                            v260 = v185;
                            v17 = -1945260495;
                            if ( v196 == 2 )
                              v17 = -764807442;
                            v182 = v185;
                          }
                          else if ( v17 == -1705288364 )
                          {
                            v17 = 1200360278;
                            if ( v285 )
                              v17 = -2033581423;
                          }
                        }
                        else if ( v17 <= -1610176897 )
                        {
                          if ( v17 == -1683340168 )
                          {
                            v17 = -97700450;
                            if ( v404 < v439 )
                              v17 = 1034046650;
                          }
                          else if ( v17 == -1619458439 )
                          {
                            buffer[v191] = 39;
                            v17 = 458984693;
                          }
                        }
                        else
                        {
                          switch ( v17 )
                          {
                            case -1610176896:
                              v17 = 1850588877;
                              if ( v371 < 16 )
                                v17 = 1544162307;
                              break;
                            case -1609041227:
                              buffer[v355] = 36;
                              v17 = -649718200;
                              if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                v17 = 577937495;
                              if ( y_32 >= 10 )
                                v17 = -649718200;
                              if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                v17 = 577937495;
                              break;
                            case -1604419936:
                              buffer[v432] = 36;
                              v17 = 625689655;
                              if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                v17 = -2070498388;
                              if ( y_32 >= 10 )
                                v17 = 625689655;
                              if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                v17 = -2070498388;
                              break;
                          }
                        }
                      }
                      else if ( v17 <= -1736725150 )
                      {
                        if ( v17 > -1752018743 )
                        {
                          if ( v17 == -1752018742 )
                          {
                            v17 = -1425502135;
                            if ( v253 )
                              v17 = -1391874270;
                            v389 = v357;
                          }
                          else if ( v17 == -1751294166 )
                          {
                            v17 = -673710329;
                            if ( v250 )
                              v17 = 1060971954;
                          }
                        }
                        else if ( v17 == -1819896575 )
                        {
                          v111 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                          v112 = 1919391861;
                          if ( (v111 == -1) != y_32 < 10 )
                            v112 = 525820730;
                          v17 = v112;
                          if ( v111 == -1 )
                            v17 = 525820730;
                          if ( y_32 >= 10 )
                            v17 = v112;
                        }
                        else if ( v17 == -1790817792 )
                        {
                          v17 = -201123609;
                          if ( v304 )
                            v17 = 653618592;
                          v425 = v403;
                          v365 = v216;
                        }
                      }
                      else if ( v17 <= -1715218394 )
                      {
                        if ( v17 == -1736725149 )
                        {
                          v17 = 1333956973;
                        }
                        else if ( v17 == -1721598468 )
                        {
                          buffer[v435] = 39;
                          v17 = 1404681511;
                        }
                      }
                      else
                      {
                        switch ( v17 )
                        {
                          case -1715218393:
                            v434 = v403 + 1;
                            v17 = 1195803834;
                            if ( v403 + 1 < v181 )
                              v17 = 604242540;
                            break;
                          case -1714928545:
                            v462 = v433;
                            v461 = v529;
                            v233 = v305;
                            v229 = v329;
                            v227 = v263;
                            v17 = 802356848;
                            v378 = v215;
                            break;
                          case -1713791166:
                            buffer[v374] = v264;
                            v17 = -1075199398;
                            break;
                        }
                      }
                    }
                    else if ( v17 > -1276076177 )
                    {
                      if ( v17 <= -1109374399 )
                      {
                        if ( v17 <= -1220069038 )
                        {
                          if ( v17 > -1253538060 )
                          {
                            if ( v17 > -1243352325 )
                            {
                              if ( v17 == -1243352324 )
                              {
LABEL_1376:
                                v345 = v192;
                                v344 = v191;
                                v343 = v219;
                                v342 = v197;
                                v178 = v167;
                                v177 = v168;
                                v176 = v175;
                                v17 = -66814975;
                                v246 = 16;
                                v341 = v181;
                              }
                              else if ( v17 == -1225730876 )
                              {
                                v79 = -1066603581;
                                if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                  v79 = 56156253;
                                v17 = v79;
                                if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                  v17 = 56156253;
                                if ( y_32 >= 10 )
                                  v17 = v79;
                              }
                            }
                            else if ( v17 == -1253538059 )
                            {
                              v17 = -1920509049;
                              if ( ((unsigned __int8)~v167 | 0xFE) != 0xFF )
                                v17 = -1376759160;
                              v418 = v191;
                              v200 = v167;
                            }
                            else if ( v17 == -1246748393 )
                            {
                              goto LABEL_1376;
                            }
                          }
                          else if ( v17 > -1257394775 )
                          {
                            if ( v17 == -1257394774 )
                            {
                              v17 = 1813414701;
                              v247 = 1;
                            }
                            else if ( v17 == -1256545824 )
                            {
                              v17 = 1791544130;
                              if ( v275 == 47 )
                                v17 = -1927146476;
                            }
                          }
                          else if ( v17 == -1276076176 )
                          {
                            v17 = -716526839;
                            if ( v318 )
                              v17 = -501264184;
                          }
                          else if ( v17 == -1258032348 )
                          {
                            v17 = 1195803834;
                          }
                        }
                        else if ( v17 <= -1142452543 )
                        {
                          if ( v17 > -1180936730 )
                          {
                            if ( v17 == -1180936729 )
                            {
                              v308 = ((unsigned __int8)v194 & ((unsigned __int8)v194 ^ 0xFE)) != 0;
                              v159 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                              v160 = -1937913605;
                              if ( (v159 == -1) != y_32 < 10 )
                                v160 = 306194517;
                              v17 = v160;
                              if ( v159 == -1 )
                                v17 = 306194517;
                              if ( y_32 >= 10 )
                                v17 = v160;
                            }
                            else if ( v17 == -1172099547 )
                            {
                              v17 = 1837976425;
                              if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                                v17 = 1922310440;
                              if ( y_32 >= 10 )
                                v17 = 1837976425;
                              if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                                v17 = 1922310440;
                            }
                          }
                          else if ( v17 == -1220069037 )
                          {
                            v17 = -1407508468;
                            if ( v220 < c_maybe_quoting_style )
                              v17 = 1902268900;
                          }
                          else if ( v17 == -1187452490 )
                          {
                            v518 = v455;
                            v436 = v444;
                            v251 = *(_BYTE *)v455;
                            v17 = 785552227;
                            if ( *(_BYTE *)v455 )
                              v17 = -2072506711;
                            v443 = v444;
                          }
                        }
                        else if ( v17 <= -1130074802 )
                        {
                          if ( v17 == -1142452542 )
                          {
                            v383 = arg[v510];
                            v17 = -1425502135;
                            if ( v383 > 47 )
                              v17 = 1600448655;
                            v389 = v357;
                          }
                          else if ( v17 == -1141046213 )
                          {
                            v17 = 467385887;
                            if ( (v169 & (v169 ^ 0xFE)) != 0 )
                              v17 = -2004994011;
                            v188 = v170;
                            v395 = v192;
                            v394 = v191;
                            v393 = v219;
                            v392 = v197;
                            v187 = v167;
                            v186 = v168;
                            v351 = 0;
                            v387 = v181;
                            v350 = 0;
                          }
                        }
                        else
                        {
                          switch ( v17 )
                          {
                            case -1130074801:
                              v17 = 305886412;
                              if ( v300 )
                                v17 = -31356803;
                              break;
                            case -1126029821:
                              v169 = v388;
                              v239 = v184;
                              n = v386;
                              s2 = v385;
                              v481 = v390;
                              v482 = (char *)v391;
                              v196 = v352;
                              v456 = v535;
                              v454 = v534;
                              v224 = v324;
                              v223 = v323;
                              v222 = v322;
                              v17 = 557990288;
                              v452 = v407;
                              v445 = v384;
                              v446 = 0LL;
                              break;
                            case -1120730229:
                              buffer[v373] = 39;
                              v17 = 1284472774;
                              break;
                          }
                        }
                      }
                      else if ( v17 > -1058831853 )
                      {
                        if ( v17 <= -1006340069 )
                        {
                          if ( v17 > -1027307572 )
                          {
                            if ( v17 == -1027307571 )
                            {
                              v366 = v255;
                              v428 = v411;
                              v17 = -968814508;
                              v426 = v521;
                              v362 = v381;
                              v361 = v231;
                              v206 = v234;
                              v208 = v235;
                              v207 = v236;
                              v416 = v463;
                            }
                            else if ( v17 == -1011286137 )
                            {
                              v17 = -1945260495;
                              v182 = 102;
                            }
                          }
                          else if ( v17 == -1058831852 )
                          {
                            v360 = v417;
                            v333 = v363;
                            v334 = v209;
                            v268 = v210;
                            v194 = v211;
                            v522 = v420;
                            v523 = v421;
                            v356 = v422;
                            v524 = v424;
                            v128 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                            v17 = 235345799;
                            if ( !v128 )
                              v17 = 934238589;
                            if ( y_32 >= 10 )
                              v17 = 235345799;
                            if ( (v128 == 0) != y_32 < 10 )
                              v17 = 934238589;
                          }
                          else if ( v17 == -1050767924 )
                          {
                            v475 = v397 + 1;
                            v293 = v397 + 1 < v401;
                            v46 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                            v17 = -27255958;
                            if ( !v46 )
                              v17 = 28303359;
                            if ( y_32 >= 10 )
                              v17 = -27255958;
                            if ( (v46 == 0) != y_32 < 10 )
                              v17 = 28303359;
                          }
                        }
                        else if ( v17 <= -1002853540 )
                        {
                          if ( v17 == -1006340068 )
                          {
                            v17 = -1713306388;
                            if ( v288 )
                              v17 = 467385887;
                            v185 = v170;
                            v188 = v170;
                            v395 = v192;
                            v394 = v191;
                            v393 = v219;
                            v392 = v197;
                            v187 = v167;
                            v186 = v168;
                            v351 = 0;
                            v387 = v181;
                            v350 = 0;
                          }
                          else if ( v17 == -1006298924 )
                          {
                            v62 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                            v17 = -2052375821;
                            if ( !v62 )
                              v17 = 136779055;
                            if ( y_32 >= 10 )
                              v17 = -2052375821;
                            if ( (v62 == 0) != y_32 < 10 )
                              v17 = 136779055;
                          }
                        }
                        else
                        {
                          switch ( v17 )
                          {
                            case -1002853539:
                              v17 = -150702443;
                              if ( v292 )
                                v17 = 927256459;
                              break;
                            case -985273269:
                              v397 = v191 + 1;
                              v292 = v191 + 1 < v401;
                              v100 = 2044424456;
                              if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                                v100 = -1002853539;
                              v17 = v100;
                              if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                v17 = -1002853539;
                              if ( y_32 >= 10 )
                                v17 = v100;
                              break;
                            case -981770004:
                              v17 = 1487672617;
                              if ( v179 < 39 )
                                v17 = 1813414701;
                              v247 = 0;
                              break;
                          }
                        }
                      }
                      else if ( v17 <= -1089871190 )
                      {
                        if ( v17 > -1098388317 )
                        {
                          if ( v17 == -1098388316 )
                          {
                            v17 = -1943755302;
                            if ( arg[v192 + 1] == 63 )
                              v17 = -605660990;
                            goto LABEL_2653;
                          }
                          if ( v17 == -1097692092 )
                          {
                            v66 = 1848347904;
                            if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                              v66 = -1550306113;
                            v17 = v66;
                            if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                              v17 = -1550306113;
                            if ( y_32 >= 10 )
                              v17 = v66;
                          }
                        }
                        else if ( v17 == -1109374398 )
                        {
                          v17 = -244804695;
                          if ( v179 < 43 )
                            v17 = 1813414701;
                          v247 = 0;
                        }
                        else if ( v17 == -1108196794 )
                        {
                          v17 = 474252832;
                          if ( (unsigned int)(v220 - 8) < 3 )
                            v17 = 1367182218;
                        }
                      }
                      else if ( v17 <= -1077017598 )
                      {
                        if ( v17 == -1089871189 )
                        {
                          v281 = (v169 & (v169 ^ 0xFE)) != 0;
                          v135 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                          v136 = 1595219136;
                          if ( (v135 == -1) != y_32 < 10 )
                            v136 = 1441522157;
                          v17 = v136;
                          if ( v135 == -1 )
                            v17 = 1441522157;
                          if ( y_32 >= 10 )
                            v17 = v136;
                        }
                        else if ( v17 == -1080551286 )
                        {
                          v17 = -244804695;
                          if ( v179 < 97 )
                            v17 = 1813414701;
                          v247 = 0;
                        }
                      }
                      else
                      {
                        switch ( v17 )
                        {
                          case -1077017597:
                            v259 = v202;
                            v325 = v198;
                            v17 = 1358169254;
                            if ( ((unsigned __int8)v202 & ((unsigned __int8)v202 ^ 0xFE)) != 0 )
                              v17 = 554276863;
                            v442 = 0LL;
                            break;
                          case -1075199398:
                            v17 = 376368249;
                            if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                              v17 = -2074165829;
                            if ( y_32 >= 10 )
                              v17 = 376368249;
                            if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                              v17 = -2074165829;
                            break;
                          case -1066603581:
                            v17 = -1225730876;
                            break;
                        }
                      }
                    }
                    else if ( v17 <= -1440925306 )
                    {
                      if ( v17 <= -1550306114 )
                      {
                        if ( v17 > -1567510031 )
                        {
                          if ( v17 > -1557363313 )
                          {
                            if ( v17 == -1557363312 )
                            {
                              v17 = -1257394774;
                              if ( v179 < 32 )
                                v17 = -1555703977;
                            }
                            else if ( v17 == -1555703977 )
                            {
                              v17 = 863441700;
                              if ( v179 == 13 )
                                v17 = 743425201;
                            }
                          }
                          else if ( v17 == -1567510030 )
                          {
                            v17 = 831634183;
                            v232 = v279;
                          }
                          else if ( v17 == -1567456772 )
                          {
                            v17 = -378436947;
                          }
                        }
                        else if ( v17 > -1572368255 )
                        {
                          if ( v17 == -1572368254 )
                          {
                            v17 = 1791544130;
                            if ( (unsigned int)(v275 - 60) < 3 )
                              v17 = -1927146476;
                          }
                          else if ( v17 == -1569405993 )
                          {
                            goto LABEL_1231;
                          }
                        }
                        else if ( v17 == -1583087875 )
                        {
                          v282 = v191 < v181;
                          v103 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                          v104 = -1333090950;
                          if ( (v103 == -1) != y_32 < 10 )
                            v104 = -1880258549;
                          v17 = v104;
                          if ( v103 == -1 )
                            v17 = -1880258549;
                          if ( y_32 >= 10 )
                            v17 = v104;
                        }
                        else if ( v17 == -1579098700 )
                        {
                          v17 = 251488426;
                          v368 = shell_escape_always_quoting_style;
                        }
                      }
                      else if ( v17 <= -1507486367 )
                      {
                        if ( v17 > -1528933778 )
                        {
                          if ( v17 == -1528933777 )
                          {
                            v317 = ((unsigned __int8)~v168 | 0xFE) != 0xFF;
                            v155 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                            v17 = -53587653;
                            if ( !v155 )
                              v17 = -748565068;
                            if ( y_32 >= 10 )
                              v17 = -53587653;
                            if ( (v155 == 0) != y_32 < 10 )
                              v17 = -748565068;
                          }
                          else if ( v17 == -1510340717 )
                          {
                            v67 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                            v68 = 1684556744;
                            if ( (v67 == -1) != y_32 < 10 )
                              v68 = -14038314;
                            v17 = v68;
                            if ( v67 == -1 )
                              v17 = -14038314;
                            if ( y_32 >= 10 )
                              v17 = v68;
                          }
                        }
                        else if ( v17 == -1550306113 )
                        {
                          v479 = v372 + 1;
                          v302 = v372 + 1 < v181;
                          v118 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                          v17 = 1848347904;
                          if ( !v118 )
                            v17 = 1450895583;
                          if ( y_32 >= 10 )
                            v17 = 1848347904;
                          if ( (v118 == 0) != y_32 < 10 )
                            v17 = 1450895583;
                        }
                        else if ( v17 == -1540659998 )
                        {
                          v17 = 69123544;
                          if ( v179 < 59 )
                            v17 = -1109374398;
                        }
                      }
                      else if ( v17 <= -1465220483 )
                      {
                        if ( v17 == -1507486366 )
                        {
                          v17 = -518669521;
                        }
                        else if ( v17 == -1474032513 )
                        {
                          v514 = v520 + v192;
                          v233 = v170;
                          v462 = v192;
                          v461 = v191;
                          v229 = v167;
                          v17 = 802356848;
                          v378 = 0;
                          v227 = v171;
                        }
                      }
                      else
                      {
                        switch ( v17 )
                        {
                          case -1465220482:
                            v86 = -1507486366;
                            if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                              v86 = -518669521;
                            v17 = v86;
                            if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                              v17 = -518669521;
                            if ( y_32 >= 10 )
                              v17 = v86;
                            break;
                          case -1460469636:
                            v87 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                            v17 = 1219698315;
                            if ( !v87 )
                              v17 = -355225445;
                            if ( y_32 >= 10 )
                              v17 = 1219698315;
                            if ( (v87 == 0) != y_32 < 10 )
                              v17 = -355225445;
                            break;
                          case -1445991109:
                            v471 = v192 + 2;
                            v286 = v192 + 2 < v197;
                            v24 = -565703861;
                            if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                              v24 = -689086439;
                            v17 = v24;
                            if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                              v17 = -689086439;
                            if ( y_32 >= 10 )
                              v17 = v24;
                            break;
                        }
                      }
                    }
                    else if ( v17 > -1391874271 )
                    {
                      if ( v17 <= -1349606723 )
                      {
                        if ( v17 > -1382932091 )
                        {
                          if ( v17 == -1382932090 )
                          {
                            v17 = 1813414701;
                            if ( v179 < 124 )
                              v17 = -540382818;
                            v247 = 0;
                          }
                          else if ( v17 == -1376759160 )
                          {
                            v326 = v200;
                            v353 = v418;
                            v17 = 847745701;
                            if ( v418 < v181 )
                              v17 = 852286311;
                          }
                        }
                        else if ( v17 == -1391874270 )
                        {
                          v510 = v192 + 1;
                          v17 = -1425502135;
                          if ( v192 + 1 < v197 )
                            v17 = -1142452542;
                          v389 = v357;
                        }
                        else if ( v17 == -1389146222 )
                        {
                          v40 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                          v17 = 625689655;
                          if ( !v40 )
                            v17 = -1604419936;
                          if ( y_32 >= 10 )
                            v17 = 625689655;
                          if ( (v40 == 0) != y_32 < 10 )
                            v17 = -1604419936;
                        }
                      }
                      else if ( v17 <= -1323209858 )
                      {
                        if ( v17 == -1349606722 )
                        {
                          v17 = -923476689;
                        }
                        else if ( v17 == -1333090950 )
                        {
                          v17 = -1583087875;
                        }
                      }
                      else
                      {
                        switch ( v17 )
                        {
                          case -1323209857:
                            v98 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                            v17 = -1827465767;
                            if ( !v98 )
                              v17 = -164936695;
                            if ( y_32 >= 10 )
                              v17 = -1827465767;
                            if ( (v98 == 0) != y_32 < 10 )
                              v17 = -164936695;
                            break;
                          case -1309553561:
                            v99 = 1750846425;
                            if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                              v99 = 508616350;
                            v17 = v99;
                            if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                              v17 = 508616350;
                            if ( y_32 >= 10 )
                              v17 = v99;
                            break;
                          case -1300781261:
                            v27 = -532440036;
                            if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                              v27 = 1228684150;
                            v17 = v27;
                            if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                              v17 = 1228684150;
                            if ( y_32 >= 10 )
                              v17 = v27;
                            break;
                        }
                      }
                    }
                    else if ( v17 <= -1423320579 )
                    {
                      if ( v17 > -1425502136 )
                      {
                        if ( v17 == -1425502135 )
                        {
                          v274 = v192;
                          v273 = v219;
                          v272 = v197;
                          v195 = v326;
                          v172 = v168;
                          v173 = v171;
                          v17 = -1943755302;
                          v174 = 48;
                          v11 = 1;
                          v10 = 0;
                          v9 = v181;
                          v12 = v389;
                        }
                        else if ( v17 == -1425163795 )
                        {
                          v17 = -2831301;
                          if ( v369 == 52 )
                            v17 = 477724148;
                        }
                      }
                      else if ( v17 == -1440925305 )
                      {
                        v17 = 1904907854;
                        v349 = 52;
                        v396 = v402;
                        v348 = 0;
                      }
                      else if ( v17 == -1439867379 )
                      {
                        v174 = v170;
                        v274 = v192;
                        v12 = v191;
                        v273 = v219;
                        v272 = v197;
                        v195 = v167;
                        v172 = v168;
                        v173 = v171;
                        v10 = 0;
                        v9 = v181;
                        v11 = 0;
                        v17 = v494;
                      }
                    }
                    else if ( v17 <= -1407508469 )
                    {
                      if ( v17 == -1423320578 )
                      {
                        v17 = 1374310145;
                      }
                      else if ( v17 == -1421732090 )
                      {
                        v419 = strlen(arg);
                        v17 = -698954756;
                        v201 = 1;
                        v415 = 0LL;
                      }
                    }
                    else
                    {
                      switch ( v17 )
                      {
                        case -1407508468:
                          v17 = 64495301;
                          if ( v220 < escape_quoting_style )
                            v17 = -2132440355;
                          break;
                        case -1400868203:
                          v17 = -244804695;
                          if ( v179 < 95 )
                            v17 = 1813414701;
                          v247 = 0;
                          break;
                        case -1399406329:
                          v17 = 1813414701;
                          if ( v179 < 91 )
                            v17 = -244804695;
                          v247 = 0;
                          break;
                      }
                    }
                  }
                  if ( v17 <= -452604602 )
                    break;
                  if ( v17 > -190607692 )
                  {
                    if ( v17 <= -55555316 )
                    {
                      if ( v17 <= -133175711 )
                      {
                        if ( v17 > -164936696 )
                        {
                          if ( v17 > -151868197 )
                          {
                            if ( v17 == -151868196 )
                            {
                              v396 = v402 + v398;
                              v17 = 1904907854;
                              v349 = 0;
                              v348 = v377;
                            }
                            else if ( v17 == -150702443 )
                            {
                              v80 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                              v17 = -27255958;
                              if ( !v80 )
                                v17 = -1050767924;
                              if ( y_32 >= 10 )
                                v17 = -27255958;
                              if ( (v80 == 0) != y_32 < 10 )
                                v17 = -1050767924;
                            }
                          }
                          else if ( v17 == -164936695 )
                          {
                            v352 = v220;
                            v391 = (__int64)v409;
                            v390 = v408;
                            v385 = v516;
                            v17 = -1126029821;
                            v184 = 1;
                            v388 = 0;
                            v386 = v515;
                            v384 = 0LL;
                          }
                          else if ( v17 == -156629928 )
                          {
                            v285 = v357 < v181;
                            v49 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                            v17 = 46413542;
                            if ( !v49 )
                              v17 = -1705288364;
                            if ( y_32 >= 10 )
                              v17 = 46413542;
                            if ( (v49 == 0) != y_32 < 10 )
                              v17 = -1705288364;
                          }
                        }
                        else if ( v17 > -172527669 )
                        {
                          if ( v17 == -172527668 )
                          {
                            v148 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                            v17 = 1485469513;
                            if ( !v148 )
                              v17 = -1877749320;
                            if ( y_32 >= 10 )
                              v17 = 1485469513;
                            if ( (v148 == 0) != y_32 < 10 )
                              v17 = -1877749320;
                          }
                          else if ( v17 == -165035494 )
                          {
                            v17 = -1610176896;
                            if ( v371 < 15 )
                              v17 = 665904800;
                          }
                        }
                        else if ( v17 == -190607691 )
                        {
                          v17 = 905527247;
                        }
                        else if ( v17 == -185202150 )
                        {
                          v35 = -2027654905;
                          if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                            v35 = -225342910;
                          v17 = v35;
                          if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                            v17 = -225342910;
                          if ( y_32 >= 10 )
                            v17 = v35;
                        }
                      }
                      else if ( v17 <= -85606642 )
                      {
                        if ( v17 > -92979290 )
                        {
                          if ( v17 == -92979289 )
                          {
                            v17 = -490372620;
                          }
                          else if ( v17 == -87613352 )
                          {
                            v17 = -801147805;
                          }
                        }
                        else if ( v17 == -133175710 )
                        {
                          v467 = v532;
                          v17 = 1225244659;
                          v465 = (__int64)v533;
                        }
                        else if ( v17 == -97700450 )
                        {
                          v373 = v404 + 1;
                          v17 = 1284472774;
                          if ( v404 + 1 < v439 )
                            v17 = -1120730229;
                        }
                      }
                      else if ( v17 <= -65236350 )
                      {
                        if ( v17 == -85606641 )
                          goto LABEL_1376;
                        if ( v17 == -66814975 )
                        {
                          v525 = v341;
                          v371 = v246;
                          v338 = v176;
                          v339 = v177;
                          v340 = v178;
                          v526 = v342;
                          v540 = v343;
                          v541 = v344;
                          v542 = v345;
                          v17 = -165035494;
                        }
                      }
                      else
                      {
                        switch ( v17 )
                        {
                          case -65236349:
                            v17 = 139382470;
                            v460 = v402;
                            break;
                          case -59997874:
                            v17 = 1539267068;
                            if ( v179 < 125 )
                              v17 = -1382932090;
                            break;
                          case -59022902:
                            v291 = (v192 == 0) ^ (v197 == 1) | (v192 != 0 && v197 != 1);
                            v17 = 606924768;
                            if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                              v17 = -366731120;
                            if ( y_32 >= 10 )
                              v17 = 606924768;
                            if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                              v17 = -366731120;
                            break;
                        }
                      }
                    }
                    else if ( v17 > -2831302 )
                    {
                      if ( v17 <= 15583548 )
                      {
                        if ( v17 > 5172447 )
                        {
                          if ( v17 == 5172448 )
                          {
                            v17 = -382598066;
                          }
                          else if ( v17 == 14179288 )
                          {
                            v17 = 1101417084;
                          }
                        }
                        else if ( v17 == -2831301 )
                        {
                          v17 = 574217634;
                          v380 = v369;
                        }
                        else if ( v17 == -309044 )
                        {
                          v47 = -1820509527;
                          if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                            v47 = 1153830587;
                          v17 = v47;
                          if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                            v17 = 1153830587;
                          if ( y_32 >= 10 )
                            v17 = v47;
                        }
                      }
                      else if ( v17 <= 25707594 )
                      {
                        if ( v17 == 15583549 )
                        {
                          buffer[v434] = 39;
                          v144 = -794769144;
                          if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                            v144 = -1258032348;
                          v17 = v144;
                          if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                            v17 = -1258032348;
                          if ( y_32 >= 10 )
                            v17 = v144;
                        }
                        else if ( v17 == 18694357 )
                        {
                          v17 = -1066603581;
                          if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                            v17 = -1225730876;
                          if ( y_32 >= 10 )
                            v17 = -1066603581;
                          if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                            v17 = -1225730876;
                        }
                      }
                      else
                      {
                        switch ( v17 )
                        {
                          case 25707595:
                            v17 = 901748518;
                            break;
                          case 28303359:
                            v17 = 1990092608;
                            if ( v293 )
                              v17 = 882057840;
                            break;
                          case 29131559:
                            v284 = v383 < 58;
                            v31 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                            v32 = 1045938481;
                            if ( (v31 == -1) != y_32 < 10 )
                              v32 = 1454752319;
                            v17 = v32;
                            if ( v31 == -1 )
                              v17 = 1454752319;
                            if ( y_32 >= 10 )
                              v17 = v32;
                            break;
                        }
                      }
                    }
                    else if ( v17 <= -27255959 )
                    {
                      if ( v17 > -35036737 )
                      {
                        if ( v17 == -35036736 )
                        {
                          v463 = v403;
                          v236 = v216;
                          v235 = v264;
                          v234 = v263;
                          v17 = -1027307571;
                          v381 = 44;
                          v231 = v215;
                        }
                        else if ( v17 == -31356803 )
                        {
                          buffer[v478] = 39;
                          v17 = 305886412;
                        }
                      }
                      else if ( v17 == -55555315 )
                      {
                        v114 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                        v115 = -489172681;
                        if ( (v114 == -1) != y_32 < 10 )
                          v115 = 139304347;
                        v17 = v115;
                        if ( v114 == -1 )
                          v17 = 139304347;
                        if ( y_32 >= 10 )
                          v17 = v115;
                      }
                      else if ( v17 == -53587653 )
                      {
                        v17 = -1528933777;
                      }
                    }
                    else if ( v17 <= -18636274 )
                    {
                      if ( v17 == -27255958 )
                      {
                        v17 = -1050767924;
                      }
                      else if ( v17 == -20765636 )
                      {
                        buffer[v470] = 48;
                        v17 = 1217306385;
                      }
                    }
                    else
                    {
                      switch ( v17 )
                      {
                        case -18636273:
                          v17 = -1572368254;
                          if ( v275 < 60 )
                            v17 = -1256545824;
                          break;
                        case -14038314:
                          v17 = -1713306388;
                          v185 = 110;
                          break;
                        case -7610584:
                          v17 = -2058386821;
                          break;
                      }
                    }
                  }
                  else if ( v17 <= -334066051 )
                  {
                    if ( v17 <= -382118468 )
                    {
                      if ( v17 > -418287414 )
                      {
                        if ( v17 > -404007449 )
                        {
                          if ( v17 == -404007448 )
                          {
                            v17 = -1840350257;
                            if ( v315 )
                              v17 = 1817279729;
                          }
                          else if ( v17 == -382598066 )
                          {
                            v75 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                            v76 = 5172448;
                            if ( (v75 == -1) != y_32 < 10 )
                              v76 = 1520055807;
                            v17 = v76;
                            if ( v75 == -1 )
                              v17 = 1520055807;
                            if ( y_32 >= 10 )
                              v17 = v76;
                          }
                        }
                        else if ( v17 == -418287413 )
                        {
                          v17 = -1300781261;
                          if ( v299 )
                            v17 = -2135462774;
                        }
                        else if ( v17 == -409222916 )
                        {
                          v48 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                          v17 = 1684556744;
                          if ( !v48 )
                            v17 = -1510340717;
                          if ( y_32 >= 10 )
                            v17 = 1684556744;
                          if ( (v48 == 0) != y_32 < 10 )
                            v17 = -1510340717;
                        }
                      }
                      else if ( v17 > -423599110 )
                      {
                        if ( v17 == -423599109 )
                        {
                          v17 = -1721598468;
                          if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                            v17 = 1404681511;
                          if ( y_32 >= 10 )
                            v17 = -1721598468;
                          if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                            v17 = 1404681511;
                        }
                        else if ( v17 == -420567553 )
                        {
                          v429 = v435 + 1;
                          v17 = -679409738;
                          v212 = 1;
                        }
                      }
                      else if ( v17 == -452604601 )
                      {
                        v105 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                        v106 = 1066676822;
                        if ( (v105 == -1) != y_32 < 10 )
                          v106 = 1039347785;
                        v17 = v106;
                        if ( v105 == -1 )
                          v17 = 1039347785;
                        if ( y_32 >= 10 )
                          v17 = v106;
                      }
                      else if ( v17 == -438350919 )
                      {
                        v17 = -97700450;
                      }
                    }
                    else if ( v17 <= -355225446 )
                    {
                      if ( v17 > -373794933 )
                      {
                        if ( v17 == -373794932 )
                        {
                          v17 = 2105010170;
                          v382 = 0;
                        }
                        else if ( v17 == -366731120 )
                        {
                          v17 = -1257394774;
                          if ( v291 )
                            v17 = -1943755302;
                          goto LABEL_2653;
                        }
                      }
                      else if ( v17 == -382118467 )
                      {
                        v17 = -334066050;
                      }
                      else if ( v17 == -378436947 )
                      {
                        v531 = v375 + 1;
                        v314 = ((unsigned __int8)v269 & ((unsigned __int8)v269 ^ 0xFE)) != 0;
                        v17 = -1567456772;
                        if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                          v17 = -817891589;
                        if ( y_32 >= 10 )
                          v17 = -1567456772;
                        if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                          v17 = -817891589;
                      }
                    }
                    else if ( v17 <= -339957106 )
                    {
                      if ( v17 == -355225445 )
                      {
                        v17 = 1219698315;
                        if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                          v17 = 1911574183;
                        if ( y_32 >= 10 )
                          v17 = 1219698315;
                        if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                          v17 = 1911574183;
                      }
                      else if ( v17 == -344497976 )
                      {
                        v189 = ((unsigned __int8)v239 & ((unsigned __int8)v239 ^ 0xFE)) != 0;
                        v253 = v196 != 2;
                        v254 = ((unsigned __int8)v239 & ((unsigned __int8)v239 ^ 0xFE)) != 0 && v196 != 2;
                        v180 = n != 0;
                        v17 = 378515471;
                        if ( ((unsigned __int8)v239 & ((unsigned __int8)v239 ^ 0xFE)) != 0 && v196 != 2 )
                          v17 = 1930570377;
                        if ( (((unsigned __int8)v239 & ((unsigned __int8)v239 ^ 0xFE)) != 0 && v196 != 2) != (n != 0) )
                          v17 = 378515471;
                        v354 = 0;
                        v405 = v359;
                      }
                    }
                    else
                    {
                      switch ( v17 )
                      {
                        case -339957105:
                          v90 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                          v91 = 1184766264;
                          if ( (v90 == -1) != y_32 < 10 )
                            v91 = 1260391997;
                          v17 = v91;
                          if ( v90 == -1 )
                            v17 = 1260391997;
                          if ( y_32 >= 10 )
                            v17 = v91;
                          break;
                        case -336748934:
                          v17 = 1274832819;
                          if ( v277 == 124 )
                            v17 = 804946282;
                          break;
                        case -334328351:
                          v17 = 474252832;
                          if ( v220 == literal_quoting_style )
                            v17 = -208444535;
                          break;
                      }
                    }
                  }
                  else if ( v17 > -243266483 )
                  {
                    if ( v17 <= -208444536 )
                    {
                      if ( v17 > -225342911 )
                      {
                        if ( v17 == -225342910 )
                        {
                          v17 = 2103311049;
                          if ( v237 )
                            v17 = 782355602;
                        }
                        else if ( v17 == -209225644 )
                        {
                          v17 = -789100506;
                          if ( v275 < 39 )
                            v17 = 782546095;
                        }
                      }
                      else if ( v17 == -243266482 )
                      {
                        v17 = 921781338;
                        if ( v196 == 2 )
                          v17 = -1141046213;
                      }
                      else if ( v17 == -239105074 )
                      {
                        v320 = (v169 & (v169 ^ 0xFE)) != 0;
                        v41 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                        v42 = 1246587898;
                        if ( (v41 == -1) != y_32 < 10 )
                          v42 = -680793389;
                        v17 = v42;
                        if ( v41 == -1 )
                          v17 = -680793389;
                        if ( y_32 >= 10 )
                          v17 = v42;
                      }
                    }
                    else if ( v17 <= -195609831 )
                    {
                      if ( v17 == -208444535 )
                      {
                        v142 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                        v143 = 1837976425;
                        if ( (v142 == -1) != y_32 < 10 )
                          v143 = -1172099547;
                        v17 = v143;
                        if ( v142 == -1 )
                          v17 = -1172099547;
                        if ( y_32 >= 10 )
                          v17 = v143;
                      }
                      else if ( v17 == -201123609 )
                      {
                        v17 = -1715218393;
                        if ( v403 < v181 )
                          v17 = -1917492866;
                      }
                    }
                    else
                    {
                      switch ( v17 )
                      {
                        case -195609830:
                          v17 = 1510763460;
                          v228 = 1;
                          break;
                        case -193092051:
                          v17 = 5172448;
                          if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                            v17 = -382598066;
                          if ( y_32 >= 10 )
                            v17 = 5172448;
                          v407 = v506;
                          v322 = v248;
                          v323 = v505;
                          v324 = v500;
                          v193 = v249;
                          v534 = v507;
                          v213 = v501;
                          v515 = v502;
                          v516 = v503;
                          v535 = v504;
                          v408 = v509;
                          v409 = v508;
                          v220 = quoting_style;
                          if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                            v17 = -382598066;
                          break;
                        case -192299266:
                          v17 = -649718200;
                          if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                            v17 = -1609041227;
                          if ( y_32 >= 10 )
                            v17 = -649718200;
                          if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                            v17 = -1609041227;
                          break;
                      }
                    }
                  }
                  else if ( v17 <= -281751896 )
                  {
                    if ( v17 > -317270889 )
                    {
                      if ( v17 == -317270888 )
                      {
                        v301 = v412 < v181;
                        v150 = 1829031924;
                        if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                          v150 = 2025444065;
                        v17 = v150;
                        if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                          v17 = 2025444065;
                        if ( y_32 >= 10 )
                          v17 = v150;
                      }
                      else if ( v17 == -282167432 )
                      {
                        v17 = -195609830;
                        if ( v220 < shell_escape_quoting_style )
                          v17 = -1077017597;
                        v198 = v213;
                        v202 = v193;
                      }
                    }
                    else if ( v17 == -334066050 )
                    {
                      v357 = v353 + 1;
                      v110 = -382118467;
                      if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                        v110 = -1752018742;
                      v17 = v110;
                      if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                        v17 = -1752018742;
                      if ( y_32 >= 10 )
                        v17 = v110;
                    }
                    else if ( v17 == -320846944 )
                    {
                      v288 = v180 && ((unsigned __int8)~v169 | 0xFE) != 0xFF;
                      v36 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                      v17 = -1933721714;
                      if ( !v36 )
                        v17 = -1006340068;
                      if ( y_32 >= 10 )
                        v17 = -1933721714;
                      if ( (v36 == 0) != y_32 < 10 )
                        v17 = -1006340068;
                    }
                  }
                  else if ( v17 <= -266510489 )
                  {
                    if ( v17 == -281751895 )
                    {
                      v133 = ~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE;
                      v134 = 538371046;
                      if ( (v133 == -1) != y_32 < 10 )
                        v134 = -1927152567;
                      v17 = v134;
                      if ( v133 == -1 )
                        v17 = -1927152567;
                      if ( y_32 >= 10 )
                        v17 = v134;
                    }
                    else if ( v17 == -278977640 )
                    {
                      v328 = v204;
                      v412 = v423;
                      v54 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                      v17 = 1829031924;
                      if ( !v54 )
                        v17 = -317270888;
                      if ( y_32 >= 10 )
                        v17 = 1829031924;
                      if ( (v54 == 0) != y_32 < 10 )
                        v17 = -317270888;
                    }
                  }
                  else
                  {
                    switch ( v17 )
                    {
                      case -266510488:
                        s = (char *)v451;
                        v517 = v453;
                        v17 = 1579305973;
                        if ( ((unsigned __int8)~v193 | 0xFE) != 0xFF )
                          v17 = 785552227;
                        v443 = 0LL;
                        break;
                      case -264157865:
                        v337 = v367;
                        v375 = v430;
                        v17 = 1644205312;
                        if ( v430 < v439 )
                          v17 = -1901912216;
                        break;
                      case -244804695:
                        v174 = v170;
                        v274 = v192;
                        v12 = v191;
                        v273 = v219;
                        v272 = v197;
                        v195 = v167;
                        v172 = v168;
                        v173 = v171;
                        v17 = -1943755302;
                        v10 = 1;
                        v11 = 0;
                        v9 = v181;
                        break;
                    }
                  }
                }
                if ( v17 > -712733763 )
                  break;
                if ( v17 > -799896022 )
                {
                  if ( v17 <= -764807443 )
                  {
                    if ( v17 > -789100507 )
                    {
                      if ( v17 > -786360926 )
                      {
                        if ( v17 == -786360925 )
                        {
                          v258 = v225;
                          v499 = v376;
                          v17 = 412847282;
                          if ( ((unsigned __int8)~v225 | 0xFE) != 0xFF )
                            v17 = 1968612079;
                          v441 = 0LL;
                        }
                        else if ( v17 == -785178946 )
                        {
                          v17 = 1344435696;
                          if ( v275 < 45 )
                            v17 = -209225644;
                        }
                      }
                      else if ( v17 == -789100506 )
                      {
                        v17 = 1791544130;
                        if ( (unsigned int)(v275 - 39) < 3 )
                          v17 = -1927146476;
                      }
                      else if ( v17 == -787845793 )
                      {
                        v52 = 428189702;
                        if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                          v52 = 1366491607;
                        v17 = v52;
                        if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                          v17 = 1366491607;
                        if ( y_32 >= 10 )
                          v17 = v52;
                      }
                    }
                    else if ( v17 > -794258492 )
                    {
                      if ( v17 == -794258491 )
                      {
                        v17 = -282167432;
                        if ( v220 < shell_always_quoting_style )
                          v17 = 489816771;
                      }
                      else if ( v17 == -793232975 )
                      {
                        v296 = v398 == -1LL;
                        v64 = 1757228674;
                        if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                          v64 = 1293789816;
                        v17 = v64;
                        if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                          v17 = 1293789816;
                        if ( y_32 >= 10 )
                          v17 = v64;
                      }
                    }
                    else if ( v17 == -799896021 )
                    {
                      v109 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                      v17 = 1163025038;
                      if ( !v109 )
                        v17 = -847131456;
                      if ( y_32 >= 10 )
                        v17 = 1163025038;
                      if ( (v109 == 0) != y_32 < 10 )
                        v17 = -847131456;
                    }
                    else if ( v17 == -794769144 )
                    {
                      buffer[v434] = 39;
                      v17 = 15583549;
                    }
                  }
                  else if ( v17 <= -748565069 )
                  {
                    if ( v17 > -760237316 )
                    {
                      if ( v17 == -760237315 )
                      {
                        v17 = 1814264811;
                      }
                      else if ( v17 == -760092782 )
                      {
                        v72 = 1485469513;
                        if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                          v72 = -172527668;
                        v17 = v72;
                        if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                          v17 = -172527668;
                        if ( y_32 >= 10 )
                          v17 = v72;
                      }
                    }
                    else if ( v17 == -764807442 )
                    {
                      v17 = 1951043608;
                      if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                        v17 = 238705339;
                      if ( y_32 >= 10 )
                        v17 = 1951043608;
                      if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                        v17 = 238705339;
                    }
                    else if ( v17 == -762562714 )
                    {
                      buffer[v375] = v271;
                      v17 = -1871042686;
                    }
                  }
                  else if ( v17 <= -729019715 )
                  {
                    if ( v17 == -748565068 )
                    {
                      v17 = 775202901;
                      if ( v317 )
                        v17 = 427002826;
                    }
                    else if ( v17 == -747142657 )
                    {
                      v277 = arg[v346 + v477];
                      v17 = -712733762;
                    }
                  }
                  else
                  {
                    switch ( v17 )
                    {
                      case -729019714:
                        v17 = 251488426;
                        if ( ((unsigned __int8)~v239 | 0xFE) != 0xFF )
                          v17 = -281751895;
                        v368 = v196;
                        break;
                      case -716526839:
                        v17 = 775202901;
                        if ( v219 )
                          v17 = 225503437;
                        if ( v181 )
                          v17 = 775202901;
                        break;
                      case -713203078:
                        v17 = -1569405993;
                        if ( v196 == 2 )
                          v17 = 993011525;
                        break;
                    }
                  }
                }
                else if ( v17 <= -873012509 )
                {
                  if ( v17 > -911058457 )
                  {
                    if ( v17 > -890840242 )
                    {
                      if ( v17 == -890840241 )
                      {
                        v17 = 446807442;
                        if ( v347 < v181 )
                          v17 = -1906419946;
                      }
                      else if ( v17 == -890715795 )
                      {
                        v17 = -1943755302;
                        if ( (v169 & (v169 ^ 0xFE)) != 0 )
                          v17 = 2047502974;
                        goto LABEL_57;
                      }
                    }
                    else if ( v17 == -911058456 )
                    {
                      v433 = v411 + 1;
                      v303 = v514 <= v411 + 1;
                      v129 = 1327404521;
                      if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                        v129 = -1852353888;
                      v17 = v129;
                      if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                        v17 = -1852353888;
                      if ( y_32 >= 10 )
                        v17 = v129;
                    }
                    else if ( v17 == -895682293 )
                    {
                      v17 = -1683340168;
                      if ( v313 )
                        v17 = -264157865;
                      v430 = v404;
                      v367 = v218;
                    }
                  }
                  else if ( v17 > -923476690 )
                  {
                    if ( v17 == -923476689 )
                    {
                      v530 = v373 + 1;
                      v145 = -1349606722;
                      if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                        v145 = 823121263;
                      v17 = v145;
                      if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                        v17 = 823121263;
                      if ( y_32 >= 10 )
                        v17 = v145;
                    }
                    else if ( v17 == -922279507 )
                    {
                      v17 = 317979417;
                    }
                  }
                  else if ( v17 == -968814508 )
                  {
                    v370 = v362;
                    v265 = v366;
                    v266 = v361;
                    v330 = v206;
                    v267 = v208;
                    v242 = v207;
                    v484 = v426;
                    v485 = v416;
                    v486 = v428;
                    v17 = -1868915536;
                  }
                  else if ( v17 == -944806537 )
                  {
                    v17 = 863441700;
                    if ( v179 == 126 )
                      v17 = 1081106250;
                  }
                }
                else if ( v17 <= -847131457 )
                {
                  if ( v17 > -855623634 )
                  {
                    if ( v17 == -855623633 )
                    {
                      v319 = s2 != 0LL;
                      v153 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                      v17 = 1325489134;
                      if ( !v153 )
                        v17 = -1873509410;
                      if ( y_32 >= 10 )
                        v17 = 1325489134;
                      if ( (v153 == 0) != y_32 < 10 )
                        v17 = -1873509410;
                    }
                    else if ( v17 == -853538731 )
                    {
                      v345 = v192;
                      v344 = v191;
                      v343 = v219;
                      v342 = v197;
                      v178 = v167;
                      v177 = v168;
                      v176 = v175;
                      v17 = -66814975;
                      v246 = 15;
                      v341 = v181;
                    }
                  }
                  else if ( v17 == -873012508 )
                  {
                    v424 = v192;
                    v422 = v191;
                    v421 = v219;
                    v420 = v197;
                    v211 = v167;
                    v210 = v168;
                    v209 = v327;
                    v17 = -1058831852;
                    v363 = 0;
                    v417 = v181;
                  }
                  else if ( v17 == -861910066 )
                  {
                    v345 = v192;
                    v344 = v191;
                    v343 = v219;
                    v342 = v437;
                    v178 = v167;
                    v177 = v168;
                    v176 = v175;
                    v17 = -66814975;
                    v246 = 16;
                    v341 = v181;
                  }
                }
                else if ( v17 <= -818654028 )
                {
                  if ( v17 == -847131456 )
                  {
                    v306 = (quote_these_too != 0LL) & ~((quote_these_too != 0LL) ^ (((unsigned __int8)~v169 | 0xFE) != 0xFF));
                    v17 = 1163025038;
                    if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                      v17 = 1178250409;
                    if ( y_32 >= 10 )
                      v17 = 1163025038;
                    if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                      v17 = 1178250409;
                  }
                  else if ( v17 == -831710196 )
                  {
                    v17 = 1373424409;
                  }
                }
                else
                {
                  switch ( v17 )
                  {
                    case -818654027:
                      v17 = -1945260495;
                      v182 = 118;
                      break;
                    case -817891589:
                      v17 = -373794932;
                      if ( v314 )
                        v17 = 2105010170;
                      v382 = v175;
                      break;
                    case -801147805:
                      v257 = *v440;
                      v321 = *v440 != 0;
                      v23 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                      v17 = -87613352;
                      if ( !v23 )
                        v17 = 1027593245;
                      if ( y_32 >= 10 )
                        v17 = -87613352;
                      if ( (v23 == 0) != y_32 < 10 )
                        v17 = 1027593245;
                      break;
                  }
                }
              }
              if ( v17 > -605660991 )
                break;
              if ( v17 <= -673710330 )
              {
                if ( v17 > -689086440 )
                {
                  if ( v17 > -680793390 )
                  {
                    if ( v17 == -680793389 )
                    {
                      v17 = 1225244659;
                      if ( v320 )
                        v17 = 1706423529;
                      v467 = v191;
                      v465 = (__int64)s2;
                      v431 = v191;
                    }
                    else if ( v17 == -679409738 )
                    {
                      v335 = v212;
                      v438 = v429;
                      v77 = 1643138023;
                      if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                        v77 = 1145471909;
                      v17 = v77;
                      if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                        v17 = 1145471909;
                      if ( y_32 >= 10 )
                        v17 = v77;
                    }
                  }
                  else
                  {
                    if ( v17 == -689086439 )
                    {
                      v17 = -1943755302;
                      if ( v286 )
                        v17 = -1098388316;
                      goto LABEL_2653;
                    }
                    if ( v17 == -683130863 )
                    {
                      v17 = -890840241;
                      if ( ((unsigned __int8)v190 & ((unsigned __int8)v190 ^ 0xFE)) != 0 )
                        v17 = -278977640;
                      v423 = v347;
                      v204 = v190;
                    }
                  }
                }
                else if ( v17 > -706466029 )
                {
                  if ( v17 == -706466028 )
                  {
                    v17 = -698954756;
                    if ( v295 )
                      v17 = -1421732090;
                    v201 = 1;
                    v419 = v197;
                    v415 = 0LL;
                  }
                  else if ( v17 == -698954756 )
                  {
                    v240 = v201;
                    v402 = v415;
                    v410 = v419;
                    p_wc = &wc;
                    v477 = v415 + v192;
                    v398 = rpl_mbrtowc((wchar_t *)&wc, &arg[v415 + v192], v419 - (v415 + v192), &ps);
                    v17 = 290651807;
                    if ( !v398 )
                      v17 = 56641380;
                  }
                }
                else if ( v17 == -712733762 )
                {
                  v17 = -2012823054;
                  if ( v277 < 96 )
                    v17 = 1564777859;
                }
                else if ( v17 == -708298868 )
                {
                  v34 = 1994813320;
                  if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                    v34 = 611911588;
                  v17 = v34;
                  if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                    v17 = 611911588;
                  if ( y_32 >= 10 )
                    v17 = v34;
                }
              }
              else if ( v17 <= -640114632 )
              {
                if ( v17 > -649358118 )
                {
                  if ( v17 == -649358117 )
                  {
                    v17 = -1713306388;
                    v185 = 116;
                  }
                  else if ( v17 == -641038350 )
                  {
                    v453 = (__int64)gettext_quote("`", v220);
                    v451 = (__int64)gettext_quote("'", v220);
                    v17 = -266510488;
                  }
                }
                else if ( v17 == -673710329 )
                {
                  v122 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                  v17 = 548247584;
                  if ( !v122 )
                    v17 = 996784069;
                  if ( y_32 >= 10 )
                    v17 = 548247584;
                  if ( (v122 == 0) != y_32 < 10 )
                    v17 = 996784069;
                }
                else if ( v17 == -649718200 )
                {
                  buffer[v355] = 36;
                  v17 = -1609041227;
                }
              }
              else if ( v17 <= -619830558 )
              {
                if ( v17 == -640114631 )
                {
                  v432 = v191 + 1;
                  v283 = v191 + 1 < v181;
                  v138 = 252976991;
                  if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                    v138 = 258417303;
                  v17 = v138;
                  if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                    v17 = 258417303;
                  if ( y_32 >= 10 )
                    v17 = v138;
                }
                else if ( v17 == -627062926 )
                {
                  buffer[v404] = 39;
                  v59 = -2121278464;
                  if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                    v59 = -438350919;
                  v17 = v59;
                  if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                    v17 = -438350919;
                  if ( y_32 >= 10 )
                    v17 = v59;
                }
              }
              else
              {
                switch ( v17 )
                {
                  case -619830557:
                    v17 = -1097692092;
                    break;
                  case -617716635:
                    v92 = 252976991;
                    if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                      v92 = -640114631;
                    v17 = v92;
                    if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                      v17 = -640114631;
                    if ( y_32 >= 10 )
                      v17 = v92;
                    break;
                  case -606059962:
                    v17 = -1425163795;
                    if ( v369 < 52 )
                      v17 = -1986021655;
                    break;
                }
              }
            }
            if ( v17 > -532440037 )
              break;
            if ( v17 <= -568980836 )
            {
              if ( v17 > -580806256 )
              {
                if ( v17 == -580806255 )
                {
                  v17 = 378515471;
                  if ( v280 )
                    v17 = 1878016197;
                  v354 = 0;
                  v405 = v437;
                }
                else if ( v17 == -571569498 )
                {
                  v17 = 425301089;
                  v379 = 0;
                }
              }
              else if ( v17 == -605660990 )
              {
                v511 = &arg[v471];
                v275 = arg[v471];
                v17 = -785178946;
              }
              else if ( v17 == -584302314 )
              {
                v17 = 1679940810;
                if ( v311 )
                  v17 = 1309198648;
              }
            }
            else if ( v17 <= -559730644 )
            {
              if ( v17 == -568980835 )
              {
                v17 = 454293989;
                if ( v179 < 8 )
                  v17 = 1718206986;
              }
              else if ( v17 == -565703861 )
              {
                v17 = -1445991109;
              }
            }
            else
            {
              switch ( v17 )
              {
                case -559730643:
                  v345 = v192;
                  v344 = v191;
                  v343 = v219;
                  v342 = v197;
                  v178 = v167;
                  v176 = v175;
                  v17 = -66814975;
                  v177 = 1;
                  v246 = 16;
                  v341 = v181;
                  break;
                case -549890530:
                  v472 = v191 + 1;
                  v17 = 409280760;
                  if ( v191 + 1 < v181 )
                    v17 = 777569829;
                  break;
                case -540382818:
                  v19 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
                  v17 = -922279507;
                  if ( !v19 )
                    v17 = 317979417;
                  if ( y_32 >= 10 )
                    v17 = -922279507;
                  if ( (v19 == 0) != y_32 < 10 )
                    v17 = 317979417;
                  break;
              }
            }
          }
          if ( v17 <= -504400661 )
            break;
          if ( v17 <= -490372621 )
          {
            if ( v17 == -504400660 )
            {
              v17 = 1644205312;
            }
            else if ( v17 == -501264184 )
            {
              v406 = quotearg_buffer_restyled(
                       buffer,
                       v219,
                       arg,
                       v359,
                       c_quoting_style,
                       v496,
                       quote_these_too,
                       v482,
                       v481);
              v17 = -520447342;
            }
          }
          else
          {
            switch ( v17 )
            {
              case -490372620:
                v294 = ((*__ctype_b_loc())[v179] & 0x4000) != 0;
                v17 = -92979289;
                if ( (~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1 )
                  v17 = 595077312;
                if ( y_32 >= 10 )
                  v17 = -92979289;
                if ( ((~((_BYTE)x_31 * ((_BYTE)x_31 - 1)) | 0xFFFFFFFE) == -1) != y_32 < 10 )
                  v17 = 595077312;
                break;
              case -489172681:
                v17 = 139304347;
                break;
              case -487125695:
                v532 = v413 + 1;
                v533 = v440 + 1;
                v28 = -1705040420;
                if ( (((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0) != y_32 < 10 )
                  v28 = -133175710;
                v17 = v28;
                if ( ((x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE)) == 0 )
                  v17 = -133175710;
                if ( y_32 >= 10 )
                  v17 = v28;
                break;
            }
          }
        }
        if ( v17 <= -518669522 )
          break;
        if ( v17 == -518669521 )
        {
          v435 = v355 + 1;
          v310 = v355 + 1 < v360;
          v165 = (x_31 * (x_31 - 1)) & ((x_31 * (x_31 - 1)) ^ 0xFFFFFFFE);
          v17 = -1507486366;
          if ( !v165 )
            v17 = 1021777213;
          if ( y_32 >= 10 )
            v17 = -1507486366;
          if ( (v165 == 0) != y_32 < 10 )
            v17 = 1021777213;
        }
        else if ( v17 == -511459704 )
        {
          buffer[v412] = 92;
          v17 = 1884681493;
        }
      }
      if ( v17 != -532440036 )
        break;
      v17 = 1228684150;
    }
  }
  while ( v17 != -520447342 );
  return v406;
}

char *__fastcall quotearg_alloc(const char *arg, size_t argsize, const quoting_options *o)
{
  int i; // eax
  unsigned int v6; // edx
  int v7; // esi
  char v9; // [rsp+Eh] [rbp-3Ah]
  char v10; // [rsp+Fh] [rbp-39h]
  char *v11; // [rsp+10h] [rbp-38h]

  v9 = ((x_33 * (x_33 - 1)) & ((x_33 * (x_33 - 1)) ^ 0xFFFFFFFE)) == 0;
  v10 = y_34 < 10;
  for ( i = 928596887; ; i = 1367060526 )
  {
    do
    {
      if ( i != 928596887 )
      {
        v11 = quotearg_alloc_mem(arg, argsize, 0LL, o);
        v6 = ~((_BYTE)x_33 * ((_BYTE)x_33 - 1)) | 0xFFFFFFFE;
        v7 = 596604286;
        if ( (v6 == -1) != y_34 < 10 )
          v7 = -1999354544;
        i = v7;
        if ( v6 == -1 )
          i = -1999354544;
        if ( y_34 >= 10 )
          i = v7;
        break;
      }
      i = 596604286;
      if ( v10 )
        i = 1367060526;
      if ( !v9 )
        i = 596604286;
      if ( v10 != v9 )
        i = 1367060526;
    }
    while ( i > 928596886 );
    if ( i != 596604286 )
      break;
    quotearg_alloc_mem(arg, argsize, 0LL, o);
  }
  return v11;
}

char *__fastcall quotearg_alloc_mem(const char *arg, size_t argsize, size_t *size, const quoting_options *o)
{
  const quoting_options *v5; // r13
  int v6; // ebp
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
  v6 = ((size != 0LL) | 0x4D9E41CA) ^ (~v5->flags & 0x4D9E41CB | v5->flags & 0xB261BE34) | ~(~v5->flags | (size != 0LL) | 0xFFFFFFFE);
  v11 = quotearg_buffer_restyled(
          0LL,
          0LL,
          arg,
          argsize,
          v5->style,
          v6,
          v5->quote_these_too,
          (char *)v5->left_quote,
          (char *)v5->right_quote);
  buffer = (char *)xmalloc(v11 + 1);
  quotearg_buffer_restyled(
    buffer,
    v11 + 1,
    arg,
    argsize,
    v5->style,
    v6,
    v5->quote_these_too,
    (char *)v5->left_quote,
    (char *)v5->right_quote);
  *v10 = v9;
  v7 = -1566551560;
  if ( size )
    v7 = 1269785092;
  while ( v7 == 1269785092 )
  {
    *size = v11;
    v7 = -1566551560;
  }
  return buffer;
}

void __cdecl quotearg_free()
{
  int v0; // eax
  int v1; // ebp
  char v2; // cl
  int v3; // esi
  bool v4; // cc
  char v5; // dl
  int v6; // edi
  int v7; // ecx
  unsigned int v8; // edx
  bool v9; // zf
  int v10; // esi
  int v11; // edi
  bool v12; // zf
  int v13; // ecx
  int v14; // [rsp+8h] [rbp-50h]
  bool v15; // [rsp+Fh] [rbp-49h]
  slotvec *v16; // [rsp+10h] [rbp-48h]
  char *ptr; // [rsp+18h] [rbp-40h]
  int v18; // [rsp+24h] [rbp-34h]

  v16 = slotvec_0;
  v0 = -1708400245;
  v1 = 1;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_53:
        while ( v0 <= -975103219 )
        {
          if ( v0 > -1593424366 )
          {
            if ( v0 == -1593424365 )
            {
              v15 = v16 != &slotvec0;
              v2 = (~((_BYTE)x_37 * ((_BYTE)x_37 - 1)) | 0xFFFFFFFE) == -1;
              v0 = 1956475481;
              v3 = 744346636;
              if ( (~((_BYTE)x_37 * ((_BYTE)x_37 - 1)) | 0xFFFFFFFE) == -1 )
                v0 = 744346636;
              v4 = y_38 < 10;
              v5 = y_38 < 10;
              v6 = 1956475481;
            }
            else
            {
              v2 = (~((_BYTE)x_37 * ((_BYTE)x_37 - 1)) | 0xFFFFFFFE) == -1;
              v0 = -323511530;
              v3 = -975103218;
              if ( (~((_BYTE)x_37 * ((_BYTE)x_37 - 1)) | 0xFFFFFFFE) == -1 )
                v0 = -975103218;
              v4 = y_38 < 10;
              v5 = y_38 < 10;
              v6 = -323511530;
            }
            if ( !v4 )
              v0 = v6;
            if ( v2 != v5 )
              v0 = v3;
            if ( v0 > 150437996 )
              goto LABEL_11;
          }
          else
          {
            if ( v0 == -2105832909 )
            {
              free(v16);
              slotvec_0 = &slotvec0;
              v0 = 1752374531;
              goto LABEL_11;
            }
            v14 = v1;
            v0 = -579933194;
            if ( v1 < nslots )
              v0 = -1221448823;
          }
        }
        if ( v0 <= -323511531 )
          break;
        if ( v0 == -323511530 )
        {
          free(v16[v14].val);
          v0 = -975103218;
        }
        else if ( v0 == 7626372 )
        {
          v0 = 1956475481;
          if ( ((x_37 * (x_37 - 1)) & ((x_37 * (x_37 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v0 = -1593424365;
          if ( y_38 >= 10 )
            v0 = 1956475481;
          if ( (((x_37 * (x_37 - 1)) & ((x_37 * (x_37 - 1)) ^ 0xFFFFFFFE)) == 0) != y_38 < 10 )
            v0 = -1593424365;
          if ( v0 > 150437996 )
            goto LABEL_11;
        }
        else
        {
          v0 = 7626372;
        }
      }
      if ( v0 == -975103218 )
        break;
      ptr = v16->val;
      v12 = ptr == slot0;
      v0 = 7626372;
      v13 = 2067002475;
LABEL_50:
      if ( !v12 )
        v0 = v13;
      if ( v0 > 150437996 )
        goto LABEL_11;
    }
    free(v16[v14].val);
    v18 = v14 + 1;
    v7 = y_38;
    v8 = ~((_BYTE)x_37 * ((_BYTE)x_37 - 1)) | 0xFFFFFFFE;
    v9 = (v8 == -1) == y_38 < 10;
    v10 = -323511530;
    v11 = 1535302613;
LABEL_80:
    if ( !v9 )
      v10 = v11;
    v0 = v10;
    if ( v8 == -1 )
      v0 = v11;
    if ( v7 >= 10 )
      v0 = v10;
  }
  while ( v0 <= 150437996 );
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_11:
      while ( v0 > 1535302612 )
      {
        if ( v0 <= 1752374530 )
        {
          if ( v0 == 1535302613 )
          {
            v1 = v18;
            v0 = -1708400245;
            goto LABEL_53;
          }
          free(ptr);
          slotvec0.size = 256LL;
          slotvec0.val = slot0;
          v0 = 169898932;
        }
        else if ( v0 == 1752374531 )
        {
          free(v16);
          slotvec_0 = &slotvec0;
          v0 = -2105832909;
          if ( ((x_37 * (x_37 - 1)) & ((x_37 * (x_37 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v0 = 150437997;
          if ( y_38 >= 10 )
            v0 = -2105832909;
          if ( (((x_37 * (x_37 - 1)) & ((x_37 * (x_37 - 1)) ^ 0xFFFFFFFE)) == 0) != y_38 < 10 )
            v0 = 150437997;
          if ( v0 <= 150437996 )
            goto LABEL_53;
        }
        else
        {
          if ( v0 == 1956475481 )
          {
            v0 = -1593424365;
            goto LABEL_53;
          }
          v0 = 1562445495;
          if ( ((x_37 * (x_37 - 1)) & ((x_37 * (x_37 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v0 = 169898932;
          if ( y_38 >= 10 )
            v0 = 1562445495;
          if ( (((x_37 * (x_37 - 1)) & ((x_37 * (x_37 - 1)) ^ 0xFFFFFFFE)) == 0) != y_38 < 10 )
            v0 = 169898932;
        }
      }
      if ( v0 > 494051953 )
        break;
      if ( v0 != 150437997 )
      {
        free(ptr);
        slotvec0.size = 256LL;
        slotvec0.val = slot0;
        v7 = y_38;
        v8 = ~((_BYTE)x_37 * ((_BYTE)x_37 - 1)) | 0xFFFFFFFE;
        v9 = (v8 == -1) == y_38 < 10;
        v10 = 1562445495;
        v11 = 123569722;
        goto LABEL_80;
      }
      v0 = 676067994;
    }
    if ( v0 != 494051954 )
      break;
    v0 = -2105832909;
    if ( (~((_BYTE)x_37 * ((_BYTE)x_37 - 1)) | 0xFFFFFFFE) == -1 )
      v0 = 1752374531;
    if ( y_38 >= 10 )
      v0 = -2105832909;
    if ( ((~((_BYTE)x_37 * ((_BYTE)x_37 - 1)) | 0xFFFFFFFE) == -1) != y_38 < 10 )
      v0 = 1752374531;
    if ( v0 <= 150437996 )
      goto LABEL_53;
  }
  if ( v0 == 744346636 )
  {
    v12 = !v15;
    v0 = 676067994;
    v13 = 494051954;
    goto LABEL_50;
  }
  nslots = 1;
}

char *__fastcall quotearg_n(int n, const char *arg)
{
  int v3; // eax
  unsigned int v4; // edx
  int v5; // esi
  char v7; // [rsp+Eh] [rbp-3Ah]
  char v8; // [rsp+Fh] [rbp-39h]
  char *v9; // [rsp+10h] [rbp-38h]

  v7 = (~((_BYTE)x_39 * ((_BYTE)x_39 - 1)) | 0xFFFFFFFE) == -1;
  v8 = y_40 < 10;
  v3 = 606959465;
  do
  {
LABEL_11:
    if ( v3 == -1026037890 )
    {
      quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &default_quoting_options);
      v3 = -1726665442;
      break;
    }
    v3 = -1026037890;
    if ( v8 )
      v3 = -1726665442;
    if ( !v7 )
      v3 = -1026037890;
    if ( v8 != v7 )
      v3 = -1726665442;
  }
  while ( v3 > -1026037891 );
  while ( v3 == -1726665442 )
  {
    v9 = quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &default_quoting_options);
    v4 = ~((_BYTE)x_39 * ((_BYTE)x_39 - 1)) | 0xFFFFFFFE;
    v5 = -1026037890;
    if ( (v4 == -1) != y_40 < 10 )
      v5 = -2083939471;
    v3 = v5;
    if ( v4 == -1 )
      v3 = -2083939471;
    if ( y_40 >= 10 )
      v3 = v5;
    if ( v3 > -1026037891 )
      goto LABEL_11;
  }
  return v9;
}

char *__fastcall quotearg_n_options(int n, const char *arg, size_t argsize, const quoting_options *options)
{
  char *v4; // r13
  int v7; // r14d
  __int64 v8; // rcx
  int v9; // eax
  int v10; // esi
  unsigned __int64 v11; // rbp
  char v12; // cl
  int v13; // esi
  bool v14; // cc
  char v15; // dl
  int v16; // edi
  int v17; // ecx
  unsigned int v18; // edx
  bool v19; // zf
  int v20; // edi
  bool v21; // zf
  int v22; // ecx
  int v23; // edx
  slotvec *v24; // rdi
  bool v26; // [rsp+1h] [rbp-F7h]
  bool v27; // [rsp+2h] [rbp-F6h]
  bool v28; // [rsp+3h] [rbp-F5h]
  int v29; // [rsp+4h] [rbp-F4h]
  char *buffer; // [rsp+8h] [rbp-F0h]
  size_t v31; // [rsp+10h] [rbp-E8h]
  int v32; // [rsp+1Ch] [rbp-DCh]
  __int64 v33; // [rsp+20h] [rbp-D8h]
  slotvec *p; // [rsp+38h] [rbp-C0h]
  slotvec *v37; // [rsp+40h] [rbp-B8h]
  slotvec *v38; // [rsp+48h] [rbp-B0h]
  __int64 *v39; // [rsp+50h] [rbp-A8h]
  size_t buffersize; // [rsp+58h] [rbp-A0h]
  int v41; // [rsp+68h] [rbp-90h]
  int v42; // [rsp+6Ch] [rbp-8Ch]
  const unsigned int *quote_these_too; // [rsp+70h] [rbp-88h]
  int *v44; // [rsp+80h] [rbp-78h]
  char **v45; // [rsp+88h] [rbp-70h]
  int *v46; // [rsp+90h] [rbp-68h]
  const unsigned int *v47; // [rsp+98h] [rbp-60h]
  char **p_left_quote; // [rsp+A0h] [rbp-58h]
  char **p_right_quote; // [rsp+A8h] [rbp-50h]
  __int64 v50; // [rsp+B0h] [rbp-48h]

  v44 = __errno_location();
  v42 = *v44;
  p = slotvec_0;
  v7 = ((n >> 31) & 0x18A67D0D) + 113429075;
  v8 = 847377101LL;
  if ( n == 0x7FFFFFFF )
    v8 = 1962068067LL;
  v41 = v8;
  quote_these_too = options->quote_these_too;
  v9 = 405343876;
LABEL_5:
  while ( 2 )
  {
    v33 = v8;
    if ( v9 <= 288399243 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
LABEL_43:
        while ( v9 > 847377100 )
        {
          if ( v9 <= 1517818497 )
          {
            if ( v9 != 847377101 )
            {
              if ( v9 == 968147316 )
              {
                v4 = (char *)xmalloc(buffersize);
                *v45 = v4;
                quotearg_buffer_restyled(v4, buffersize, arg, argsize, *v46, v32, v47, *p_left_quote, *p_right_quote);
                v9 = -1162153682;
              }
              else
              {
                free(buffer);
                v9 = -241375018;
                if ( ((x_41 * (x_41 - 1)) & ((x_41 * (x_41 - 1)) ^ 0xFFFFFFFE)) == 0 )
                  v9 = -878935435;
                if ( y_42 >= 10 )
                  v9 = -241375018;
                if ( (((x_41 * (x_41 - 1)) & ((x_41 * (x_41 - 1)) ^ 0xFFFFFFFE)) == 0) != y_42 < 10 )
                  v9 = -878935435;
              }
              goto LABEL_14;
            }
            v24 = 0LL;
            if ( !v26 )
              v24 = p;
            v29 = n + 1;
            v37 = (slotvec *)xrealloc(v24, 16LL * (n + 1));
            v38 = v37;
            slotvec_0 = v37;
            v21 = !v26;
            v9 = -1196408519;
            v22 = 573983027;
          }
          else
          {
            if ( v9 > 1948836843 )
            {
              if ( v9 != 1948836844 )
                xalloc_die();
              v17 = y_42;
              v18 = ~((_BYTE)x_41 * ((_BYTE)x_41 - 1)) | 0xFFFFFFFE;
              v19 = (v18 == -1) == y_42 < 10;
              v10 = -382900639;
              v20 = 706359861;
              goto LABEL_7;
            }
            if ( v9 != 1517818498 )
            {
              *v37 = slotvec0;
              v17 = y_42;
              v18 = ~((_BYTE)x_41 * ((_BYTE)x_41 - 1)) | 0xFFFFFFFE;
              v19 = (v18 == -1) == y_42 < 10;
              v10 = -420507509;
              v20 = -1614965201;
LABEL_7:
              if ( !v19 )
                v10 = v20;
              v9 = v10;
              if ( v18 == -1 )
                v9 = v20;
              if ( v17 >= 10 )
                v9 = v10;
              goto LABEL_13;
            }
            v21 = !v28;
            v9 = 968147316;
            v22 = 288399244;
          }
          if ( !v21 )
            v9 = v22;
          if ( v9 <= 288399243 )
            goto LABEL_14;
        }
        if ( v9 > 526993247 )
        {
          if ( v9 == 573983027 )
          {
            v17 = y_42;
            v18 = ~((_BYTE)x_41 * ((_BYTE)x_41 - 1)) | 0xFFFFFFFE;
            v19 = (v18 == -1) == y_42 < 10;
            v10 = -420507509;
            v20 = 1541999810;
          }
          else
          {
            if ( v9 != 706359861 )
              abort();
            buffersize = v31 + 1;
            *v39 = v31 + 1;
            v28 = buffer != slot0;
            v17 = y_42;
            v18 = ~((_BYTE)x_41 * ((_BYTE)x_41 - 1)) | 0xFFFFFFFE;
            v19 = (v18 == -1) == y_42 < 10;
            v10 = -382900639;
            v20 = 1517818498;
          }
          goto LABEL_7;
        }
        if ( v9 == 288399244 )
          break;
        if ( v9 == 299802620 )
        {
          v50 = v33;
          v23 = -1980778133;
          if ( (((x_41 * (x_41 - 1)) & ((x_41 * (x_41 - 1)) ^ 0xFFFFFFFE)) == 0) != y_42 < 10 )
            v23 = -1538701659;
          v9 = v23;
          if ( ((x_41 * (x_41 - 1)) & ((x_41 * (x_41 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v9 = -1538701659;
          if ( y_42 >= 10 )
            v9 = v23;
          goto LABEL_14;
        }
        if ( v9 == 405343876 )
        {
          v9 = v7;
          if ( v7 <= 288399243 )
            goto LABEL_14;
        }
        else
        {
LABEL_13:
          if ( v9 <= 288399243 )
            goto LABEL_14;
        }
      }
      v12 = ((x_41 * (x_41 - 1)) & ((x_41 * (x_41 - 1)) ^ 0xFFFFFFFE)) == 0;
      v9 = -241375018;
      v13 = 1483034182;
      if ( ((x_41 * (x_41 - 1)) & ((x_41 * (x_41 - 1)) ^ 0xFFFFFFFE)) == 0 )
        v9 = 1483034182;
      v14 = y_42 < 10;
      v15 = y_42 < 10;
      v16 = -241375018;
LABEL_72:
      if ( !v14 )
        v9 = v16;
      if ( v12 != v15 )
        v9 = v13;
    }
    while ( v9 > 288399243 );
    while ( 1 )
    {
LABEL_14:
      if ( v9 > -878935436 )
      {
        if ( v9 <= -241375019 )
        {
          if ( v9 == -878935435 )
          {
            v9 = 968147316;
          }
          else if ( v9 == -420507509 )
          {
            *v37 = slotvec0;
            v9 = 1541999810;
          }
          else
          {
            *v39 = v31 + 1;
            v9 = 706359861;
          }
          goto LABEL_43;
        }
        if ( v9 == -241375018 )
        {
          free(buffer);
          v9 = 1483034182;
          goto LABEL_43;
        }
        if ( v9 == 64061005 )
        {
          v26 = p == &slotvec0;
          v9 = v41;
          goto LABEL_43;
        }
        if ( v9 != 113429075 )
          goto LABEL_13;
        v9 = 299802620;
        if ( nslots <= n )
          v9 = 64061005;
        v8 = (__int64)p;
        goto LABEL_5;
      }
      if ( v9 > -1538701660 )
        break;
      if ( v9 == -2036265725 )
      {
        v9 = -1162153682;
        if ( v27 )
          v9 = 1948836844;
        v4 = buffer;
        if ( v9 > 288399243 )
          goto LABEL_43;
      }
      else if ( v9 == -1980778133 )
      {
        quotearg_buffer_restyled(
          *(char **)(v50 + 16LL * n + 8),
          *(_QWORD *)(v50 + 16LL * n),
          arg,
          argsize,
          options->style,
          options->flags & 1 | options->flags ^ 1,
          quote_these_too,
          (char *)options->left_quote,
          (char *)options->right_quote);
        v9 = -1538701659;
      }
      else
      {
        v9 = -1196408519;
      }
    }
    if ( v9 == -1538701659 )
    {
      v39 = (__int64 *)(v50 + 16LL * n);
      v11 = *v39;
      v45 = (char **)(v39 + 1);
      buffer = (char *)v39[1];
      v32 = options->flags & 1 | options->flags ^ 1;
      v46 = (int *)options;
      v47 = options->quote_these_too;
      p_left_quote = (char **)&options->left_quote;
      p_right_quote = (char **)&options->right_quote;
      v31 = quotearg_buffer_restyled(
              buffer,
              *v39,
              arg,
              argsize,
              options->style,
              v32,
              quote_these_too,
              (char *)options->left_quote,
              (char *)options->right_quote);
      v27 = v11 <= v31;
      v12 = (~((_BYTE)x_41 * ((_BYTE)x_41 - 1)) | 0xFFFFFFFE) == -1;
      v9 = -1980778133;
      v13 = -2036265725;
      if ( (~((_BYTE)x_41 * ((_BYTE)x_41 - 1)) | 0xFFFFFFFE) == -1 )
        v9 = -2036265725;
      v14 = y_42 < 10;
      v15 = y_42 < 10;
      v16 = -1980778133;
      goto LABEL_72;
    }
    if ( v9 == -1196408519 )
    {
      memset(&v38[nslots], 0, 16LL * (v29 - nslots));
      nslots = v29;
      v9 = 299802620;
      v8 = (__int64)v38;
      continue;
    }
    break;
  }
  *v44 = v42;
  return v4;
}

char *__fastcall quotearg_n_mem(int n, const char *arg, size_t argsize)
{
  return quotearg_n_options(n, arg, argsize, &default_quoting_options);
}

char *__fastcall quotearg(const char *arg)
{
  int i; // eax
  int v2; // eax
  unsigned int v3; // edx
  int v4; // esi
  int v5; // edx
  unsigned int v6; // edx
  int v7; // esi
  int v8; // eax
  int v9; // edx
  char v11; // [rsp+4h] [rbp-44h]
  char v12; // [rsp+4h] [rbp-44h]
  char v13; // [rsp+5h] [rbp-43h]
  char v14; // [rsp+5h] [rbp-43h]
  char v15; // [rsp+6h] [rbp-42h]
  char v16; // [rsp+7h] [rbp-41h]
  char *v17; // [rsp+8h] [rbp-40h]
  char *v18; // [rsp+10h] [rbp-38h]

  v15 = ((x_45 * (x_45 - 1)) & ((x_45 * (x_45 - 1)) ^ 0xFFFFFFFE)) == 0;
  v16 = y_46 < 10;
  for ( i = -1040365005; ; i = -1560948494 )
  {
    while ( i != -1560948494 )
    {
      i = -344024524;
      if ( v16 )
        i = -1560948494;
      if ( !v15 )
        i = -344024524;
      if ( v16 != v15 )
        i = -1560948494;
      if ( i > -344024525 )
        goto LABEL_35;
    }
    v11 = (~((_BYTE)x_39 * ((_BYTE)x_39 - 1)) | 0xFFFFFFFE) == -1;
    v13 = y_40 < 10;
    v2 = 606959465;
    do
    {
LABEL_20:
      if ( v2 == -1026037890 )
      {
        quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &default_quoting_options);
        v2 = -1726665442;
        break;
      }
      v5 = -1026037890;
      if ( v13 != v11 )
        v5 = -1726665442;
      v2 = v5;
      if ( v13 )
        v2 = -1726665442;
      if ( !v11 )
        v2 = v5;
    }
    while ( v2 > -1026037891 );
    while ( v2 == -1726665442 )
    {
      v17 = quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &default_quoting_options);
      v3 = ~((_BYTE)x_39 * ((_BYTE)x_39 - 1)) | 0xFFFFFFFE;
      v4 = -1026037890;
      if ( (v3 == -1) != y_40 < 10 )
        v4 = -2083939471;
      v2 = v4;
      if ( v3 == -1 )
        v2 = -2083939471;
      if ( y_40 >= 10 )
        v2 = v4;
      if ( v2 > -1026037891 )
        goto LABEL_20;
    }
    v18 = v17;
    v6 = ~((_BYTE)x_45 * ((_BYTE)x_45 - 1)) | 0xFFFFFFFE;
    v7 = -344024524;
    if ( (v6 == -1) != y_46 < 10 )
      v7 = 1665083395;
    i = v7;
    if ( v6 == -1 )
      i = 1665083395;
    if ( y_46 >= 10 )
      i = v7;
LABEL_35:
    if ( i != -344024524 )
      break;
    v12 = ((x_39 * (x_39 - 1)) & ((x_39 * (x_39 - 1)) ^ 0xFFFFFFFE)) == 0;
    v14 = y_40 < 10;
    v8 = 606959465;
    do
    {
LABEL_46:
      if ( v8 == -1026037890 )
      {
        quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &default_quoting_options);
        v8 = -1726665442;
        break;
      }
      v9 = -1026037890;
      if ( v14 != v12 )
        v9 = -1726665442;
      v8 = v9;
      if ( v14 )
        v8 = -1726665442;
      if ( !v12 )
        v8 = v9;
    }
    while ( v8 > -1026037891 );
    while ( v8 == -1726665442 )
    {
      v17 = quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &default_quoting_options);
      v8 = -1026037890;
      if ( ((x_39 * (x_39 - 1)) & ((x_39 * (x_39 - 1)) ^ 0xFFFFFFFE)) == 0 )
        v8 = -2083939471;
      if ( y_40 >= 10 )
        v8 = -1026037890;
      if ( (((x_39 * (x_39 - 1)) & ((x_39 * (x_39 - 1)) ^ 0xFFFFFFFE)) == 0) != y_40 < 10 )
        v8 = -2083939471;
      if ( v8 > -1026037891 )
        goto LABEL_46;
    }
  }
  return v18;
}

char *__fastcall quotearg_mem(const char *arg, size_t argsize)
{
  int i; // eax
  int v3; // eax
  int v4; // edx
  char v6; // [rsp+6h] [rbp-32h]
  char v7; // [rsp+7h] [rbp-31h]
  char *v8; // [rsp+8h] [rbp-30h]

  v6 = ((x_47 * (x_47 - 1)) & ((x_47 * (x_47 - 1)) ^ 0xFFFFFFFE)) == 0;
  v7 = y_48 < 10;
  for ( i = -1114668331; ; i = -1295552863 )
  {
    while ( 1 )
    {
      v3 = i & 0x3FFFFFFF;
      if ( v3 <= 851930784 )
        break;
      if ( v3 == 851930785 )
      {
        v8 = quotearg_n_options(0, arg, argsize, &default_quoting_options);
        i = -1814746447;
        if ( (~((_BYTE)x_47 * ((_BYTE)x_47 - 1)) | 0xFFFFFFFE) == -1 )
          i = -1513536274;
        if ( y_48 >= 10 )
          i = -1814746447;
        if ( ((~((_BYTE)x_47 * ((_BYTE)x_47 - 1)) | 0xFFFFFFFE) == -1) != y_48 < 10 )
          i = -1513536274;
      }
      else
      {
        if ( v3 != 1032815317 )
          goto LABEL_24;
        v4 = -1814746447;
        if ( v7 != v6 )
          v4 = -1295552863;
        i = v4;
        if ( v7 )
          i = -1295552863;
        if ( !v6 )
          i = v4;
      }
    }
    if ( v3 != 332737201 )
      break;
    quotearg_n_options(0, arg, argsize, &default_quoting_options);
  }
  if ( v3 != 633947374 )
  {
    while ( 1 )
LABEL_24:
      ;
  }
  return v8;
}

char *__fastcall quotearg_n_style(int n, quoting_style s, const char *arg)
{
  quoting_options options; // [rsp+8h] [rbp-50h] BYREF

  quoting_options_from_style(&options, s);
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &options);
}

quoting_options *__fastcall quoting_options_from_style(quoting_options *retstr, quoting_style style)
{
  int i; // ecx
  int v3; // eax
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 *v9; // [rsp+0h] [rbp-10h] BYREF
  bool v10; // [rsp+Dh] [rbp-3h]
  char v11; // [rsp+Eh] [rbp-2h]
  char v12; // [rsp+Fh] [rbp-1h]

  v12 = (~((_BYTE)x_51 * ((_BYTE)x_51 - 1)) | 0xFFFFFFFE) == -1;
  v11 = y_52 < 10;
  for ( i = -236372287; ; i = -1130857350 )
  {
    while ( 1 )
    {
      v3 = i;
      if ( i > -94818156 )
        break;
      if ( i == -1130857350 )
      {
        v9 = (__int64 *)(&v9 - 8);
        v4 = (__int64 *)(&v9 - 8);
        *((_OWORD *)v4 + 2) = 0LL;
        *((_OWORD *)v4 + 1) = 0LL;
        *(_OWORD *)v4 = 0LL;
        *((_DWORD *)v4 + 12) = 0;
        v10 = style == custom_quoting_style;
        i = 1216737349;
        if ( ((x_51 * (x_51 - 1)) & ((x_51 * (x_51 - 1)) ^ 0xFFFFFFFE)) == 0 )
          i = -937342957;
        if ( y_52 >= 10 )
          i = 1216737349;
        if ( (((x_51 * (x_51 - 1)) & ((x_51 * (x_51 - 1)) ^ 0xFFFFFFFE)) == 0) != y_52 < 10 )
          i = -937342957;
      }
      else if ( i == -937342957 )
      {
        i = -94818155;
        if ( v10 )
          i = 1499384276;
      }
      else
      {
        i = 1216737349;
        if ( v11 )
          i = -1130857350;
        if ( !v12 )
          i = 1216737349;
        if ( v11 != v12 )
          i = -1130857350;
      }
    }
    if ( i == -94818155 )
      break;
    if ( v3 != 1216737349 )
    {
      if ( v3 != 1499384276 )
      {
        while ( 1 )
          ;
      }
      abort();
    }
  }
  retstr->style = style;
  v5 = v9;
  HIDWORD(retstr->right_quote) = *((_DWORD *)v9 + 12);
  v6 = *(_OWORD *)v5;
  v7 = *((_OWORD *)v5 + 1);
  *(_OWORD *)&retstr->quote_these_too[7] = *((_OWORD *)v5 + 2);
  *(_OWORD *)&retstr->quote_these_too[3] = v7;
  *(_OWORD *)&retstr->flags = v6;
  return retstr;
}

char *__fastcall quotearg_n_style_mem(int n, quoting_style s, const char *arg, size_t argsize)
{
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edx
  int v10; // esi
  int v11; // edx
  __int64 v13; // [rsp+0h] [rbp-40h] BYREF
  char *v14; // [rsp+8h] [rbp-38h]
  char v15; // [rsp+16h] [rbp-2Ah]
  char v16; // [rsp+17h] [rbp-29h]

  v16 = ((x_53 * (x_53 - 1)) & ((x_53 * (x_53 - 1)) ^ 0xFFFFFFFE)) == 0;
  v15 = y_54 < 10;
  v7 = 1814132905;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = v7 & 0x7FFFFFFF;
      if ( v8 <= 1814132904 )
        break;
      if ( v8 == 1814132905 )
      {
        v11 = 2013929753;
        if ( v15 != v16 )
          v11 = 59572802;
        v7 = v11;
        if ( v15 )
          v7 = 59572802;
        if ( !v16 )
          v7 = v11;
      }
      else
      {
        if ( v8 != 2013929753 )
          goto LABEL_24;
        quoting_options_from_style((quoting_options *)(&v13 - 8), s);
        quotearg_n_options(n, arg, argsize, (const quoting_options *)(&v13 - 8));
        v7 = 59572802;
      }
    }
    if ( v8 != 59572802 )
      break;
    quoting_options_from_style((quoting_options *)(&v13 - 8), s);
    v14 = quotearg_n_options(n, arg, argsize, (const quoting_options *)(&v13 - 8));
    v9 = ~((_BYTE)x_53 * ((_BYTE)x_53 - 1)) | 0xFFFFFFFE;
    v10 = 2013929753;
    if ( (v9 == -1) != y_54 < 10 )
      v10 = 357483149;
    v7 = v10;
    if ( v9 == -1 )
      v7 = 357483149;
    if ( y_54 >= 10 )
      v7 = v10;
  }
  if ( v8 != 357483149 )
  {
    while ( 1 )
LABEL_24:
      ;
  }
  return v14;
}

char *__fastcall quotearg_style(quoting_style s, const char *arg)
{
  int i; // eax
  char v4; // [rsp+6h] [rbp-72h]
  char v5; // [rsp+7h] [rbp-71h]
  char *v6; // [rsp+8h] [rbp-70h]
  quoting_options options; // [rsp+10h] [rbp-68h] BYREF

  v4 = (~((_BYTE)x_55 * ((_BYTE)x_55 - 1)) | 0xFFFFFFFE) == -1;
  v5 = y_56 < 10;
  for ( i = 1468185350; ; i = 2088549279 )
  {
    do
    {
      if ( i != 1468185350 )
      {
        quoting_options_from_style(&options, s);
        v6 = quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &options);
        i = 472803303;
        if ( (~((_BYTE)x_55 * ((_BYTE)x_55 - 1)) | 0xFFFFFFFE) == -1 )
          i = -271739608;
        if ( y_56 >= 10 )
          i = 472803303;
        if ( ((~((_BYTE)x_55 * ((_BYTE)x_55 - 1)) | 0xFFFFFFFE) == -1) != y_56 < 10 )
          i = -271739608;
        break;
      }
      i = 472803303;
      if ( v5 )
        i = 2088549279;
      if ( !v4 )
        i = 472803303;
      if ( v5 != v4 )
        i = 2088549279;
    }
    while ( i > 1468185349 );
    if ( i != 472803303 )
      break;
    quoting_options_from_style(&options, s);
    quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &options);
  }
  return v6;
}

char *__fastcall quotearg_style_mem(quoting_style s, const char *arg, size_t argsize)
{
  int v4; // eax
  int v5; // edx
  char v7; // [rsp+Eh] [rbp-3Ah]
  char v8; // [rsp+Fh] [rbp-39h]
  char *v9; // [rsp+10h] [rbp-38h]

  v7 = ((x_57 * (x_57 - 1)) & ((x_57 * (x_57 - 1)) ^ 0xFFFFFFFE)) == 0;
  v8 = y_58 < 10;
  v4 = -986362164;
  while ( v4 == -986362164 )
  {
    v4 = 1581865803;
    if ( v8 )
      v4 = 462723118;
    if ( !v7 )
      v4 = 1581865803;
    if ( v8 != v7 )
      v4 = 462723118;
    do
    {
      while ( v4 != 462723118 )
      {
        quotearg_n_style_mem(0, s, arg, argsize);
        v4 = 462723118;
      }
      v9 = quotearg_n_style_mem(0, s, arg, argsize);
      v5 = 1581865803;
      if ( (((x_57 * (x_57 - 1)) & ((x_57 * (x_57 - 1)) ^ 0xFFFFFFFE)) == 0) != y_58 < 10 )
        v5 = -415066895;
      v4 = v5;
      if ( ((x_57 * (x_57 - 1)) & ((x_57 * (x_57 - 1)) ^ 0xFFFFFFFE)) == 0 )
        v4 = -415066895;
      if ( y_58 >= 10 )
        v4 = v5;
    }
    while ( v4 > 462723117 );
  }
  return v9;
}

char *__fastcall quotearg_char_mem(const char *arg, size_t argsize, unsigned __int8 ch_0)
{
  char v5; // r13
  __int64 v6; // r12
  int v7; // eax
  __int64 *v8; // rax
  int v9; // edi
  int v10; // ecx
  unsigned int v11; // edx
  int v12; // edx
  __int64 *v13; // rax
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // ecx
  unsigned int v18; // edx
  size_t v19; // rbx
  const char *v20; // r14
  char *v21; // rax
  size_t v22; // r14
  const char *v23; // rbx
  __int64 v25; // [rsp+0h] [rbp-40h] BYREF
  char *v26; // [rsp+8h] [rbp-38h]
  unsigned int v27; // [rsp+10h] [rbp-30h]
  char v28; // [rsp+14h] [rbp-2Ch]
  char v29; // [rsp+15h] [rbp-2Bh]
  char v30; // [rsp+16h] [rbp-2Ah]
  char v31; // [rsp+17h] [rbp-29h]

  v29 = (~((_BYTE)x_59 * ((_BYTE)x_59 - 1)) | 0xFFFFFFFE) == -1;
  v28 = y_60 < 10;
  v5 = ch_0 & (ch_0 ^ 0xE0);
  v6 = ch_0 >> 5;
  v7 = 1223036581;
  while ( v7 == 1223036581 )
  {
    v7 = -2060445299;
    if ( v28 )
      v7 = -1425056495;
    if ( !v29 )
      v7 = -2060445299;
    if ( v28 != v29 )
      v7 = -1425056495;
    do
    {
      while ( v7 == -2060445299 )
      {
        v13 = &v25 - 8;
        *(quoting_options *)(&v25 - 8) = default_quoting_options;
        v14 = ~((_BYTE)x_23 * ((_BYTE)x_23 - 1)) | 0xFFFFFFFE;
        v15 = 30747359;
        if ( (v14 == -1) != y_24 < 10 )
          v15 = -193462020;
        v31 = v14 == -1;
        v16 = v15;
        if ( v14 == -1 )
          v16 = -193462020;
        v30 = y_24 < 10;
        if ( y_24 >= 10 )
          v16 = v15;
        v17 = 1731296489;
        do
        {
LABEL_39:
          if ( v17 == 30747359 )
          {
            *((_DWORD *)v13 + v6 + 2) = *((_DWORD *)v13 + v6 + 2) & ~((((*((_DWORD *)v13 + v6 + 2) >> v5) & 1) == 0) << v5) | ((((*((_DWORD *)v13 + v6 + 2) >> v5) & 1) == 0) << v5) & ~*((_DWORD *)v13 + v6 + 2);
            v17 = -894572080;
            break;
          }
          if ( v17 != 1731296489 )
            goto LABEL_63;
          v17 = 30747359;
          if ( v30 )
            v17 = -894572080;
          if ( !v31 )
            v17 = 30747359;
          if ( v30 != v31 )
            v17 = -894572080;
        }
        while ( v17 > 30747358 );
        while ( v17 == -894572080 )
        {
          v18 = *((_DWORD *)v13 + v6 + 2);
          v27 = (v18 >> v5) & ((v18 >> v5) ^ 0xFFFFFFFE);
          *((_DWORD *)v13 + v6 + 2) = v18 & ~((((v27 & 1) == 0) | v27 & 0xFFFFFFFE) << v5) | ((((v27 & 1) == 0) | v27 & 0xFFFFFFFE) << v5) & ~v18;
          v17 = v16;
          if ( v16 > 30747358 )
            goto LABEL_39;
        }
        if ( v17 != -193462020 )
        {
          while ( 1 )
LABEL_63:
            ;
        }
        v22 = argsize;
        v23 = arg;
        quotearg_n_options(0, arg, argsize, (const quoting_options *)(&v25 - 8));
        arg = v23;
        argsize = v22;
        v7 = -1425056495;
      }
      v8 = &v25 - 8;
      *(quoting_options *)(&v25 - 8) = default_quoting_options;
      v31 = (~((_BYTE)x_23 * ((_BYTE)x_23 - 1)) | 0xFFFFFFFE) == -1;
      v9 = 30747359;
      if ( (~((_BYTE)x_23 * ((_BYTE)x_23 - 1)) | 0xFFFFFFFE) == -1 )
        v9 = -193462020;
      v30 = y_24 < 10;
      if ( y_24 >= 10 )
        v9 = 30747359;
      if ( ((~((_BYTE)x_23 * ((_BYTE)x_23 - 1)) | 0xFFFFFFFE) == -1) != y_24 < 10 )
        v9 = -193462020;
      v10 = 1731296489;
      do
      {
LABEL_19:
        if ( v10 == 30747359 )
        {
          *((_DWORD *)v8 + v6 + 2) = (~(((((unsigned __int8)(*((_DWORD *)v8 + v6 + 2) >> v5) & ((unsigned __int8)(*((_DWORD *)v8 + v6 + 2) >> v5) ^ 0xFE) & 1) == 0) | (*((_DWORD *)v8 + v6 + 2) >> v5) & ((*((_DWORD *)v8 + v6 + 2) >> v5) ^ 0xFFFFFFFE) & 0xFFFFFFFE) << v5) & 0x740C5F67 | (((((unsigned __int8)(*((_DWORD *)v8 + v6 + 2) >> v5) & ((unsigned __int8)(*((_DWORD *)v8 + v6 + 2) >> v5) ^ 0xFE) & 1) == 0) | (*((_DWORD *)v8 + v6 + 2) >> v5) & ((*((_DWORD *)v8 + v6 + 2) >> v5) ^ 0xFFFFFFFE) & 0xFFFFFFFE) << v5) & 0x8BF3A098) ^ (~*((_DWORD *)v8 + v6 + 2) & 0x740C5F67 | *((_DWORD *)v8 + v6 + 2) & 0x8BF3A098);
          v10 = -894572080;
          break;
        }
        if ( v10 != 1731296489 )
          goto LABEL_62;
        v12 = 30747359;
        if ( v30 != v31 )
          v12 = -894572080;
        v10 = v12;
        if ( v30 )
          v10 = -894572080;
        if ( !v31 )
          v10 = v12;
      }
      while ( v10 > 30747358 );
      while ( v10 == -894572080 )
      {
        v11 = *((_DWORD *)v8 + v6 + 2);
        v27 = (v11 >> v5) & 1;
        *((_DWORD *)v8 + v6 + 2) = v11 & ~(((~v27 & 0x6CE689E4 | v27) ^ 0x6CE689E5) << v5) | (((~v27 & 0x6CE689E4 | v27) ^ 0x6CE689E5) << v5) & ~v11;
        v10 = v9;
        if ( v9 > 30747358 )
          goto LABEL_19;
      }
      if ( v10 != -193462020 )
      {
        while ( 1 )
LABEL_62:
          ;
      }
      v19 = argsize;
      v20 = arg;
      v21 = quotearg_n_options(0, arg, argsize, (const quoting_options *)(&v25 - 8));
      arg = v20;
      argsize = v19;
      v26 = v21;
      v7 = -2060445299;
      if ( ((x_59 * (x_59 - 1)) & ((x_59 * (x_59 - 1)) ^ 0xFFFFFFFE)) == 0 )
        v7 = 1553726239;
      if ( y_60 >= 10 )
        v7 = -2060445299;
      if ( (((x_59 * (x_59 - 1)) & ((x_59 * (x_59 - 1)) ^ 0xFFFFFFFE)) == 0) != y_60 < 10 )
        v7 = 1553726239;
    }
    while ( v7 <= 1223036580 );
  }
  return v26;
}

char *__fastcall quotearg_char(const char *arg, char ch_0)
{
  int v2; // eax
  char v4; // [rsp+6h] [rbp-32h]
  char v5; // [rsp+7h] [rbp-31h]
  char *v6; // [rsp+8h] [rbp-30h]

  v4 = (~((_BYTE)x_61 * ((_BYTE)x_61 - 1)) | 0xFFFFFFFE) == -1;
  v5 = y_62 < 10;
  v2 = 1350735707;
  do
  {
LABEL_10:
    if ( v2 != 1350735707 )
    {
      quotearg_char_mem(arg, 0xFFFFFFFFFFFFFFFFLL, ch_0);
      v2 = -1227777811;
      break;
    }
    v2 = 2033128272;
    if ( v5 )
      v2 = -1227777811;
    if ( !v4 )
      v2 = 2033128272;
    if ( v5 != v4 )
      v2 = -1227777811;
  }
  while ( v2 > 1350735706 );
  while ( v2 == -1227777811 )
  {
    v6 = quotearg_char_mem(arg, 0xFFFFFFFFFFFFFFFFLL, ch_0);
    v2 = 2033128272;
    if ( ((x_61 * (x_61 - 1)) & ((x_61 * (x_61 - 1)) ^ 0xFFFFFFFE)) == 0 )
      v2 = -653481213;
    if ( y_62 >= 10 )
      v2 = 2033128272;
    if ( (((x_61 * (x_61 - 1)) & ((x_61 * (x_61 - 1)) ^ 0xFFFFFFFE)) == 0) != y_62 < 10 )
      v2 = -653481213;
    if ( v2 > 1350735706 )
      goto LABEL_10;
  }
  return v6;
}

char *__fastcall quotearg_colon(const char *arg)
{
  int v1; // eax
  char v3; // [rsp+Eh] [rbp-2Ah]
  char v4; // [rsp+Fh] [rbp-29h]
  char *v5; // [rsp+10h] [rbp-28h]

  v3 = ((x_61 * (x_61 - 1)) & ((x_61 * (x_61 - 1)) ^ 0xFFFFFFFE)) == 0;
  v4 = y_62 < 10;
  v1 = 1350735707;
  do
  {
LABEL_10:
    if ( v1 != 1350735707 )
    {
      quotearg_char_mem(arg, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
      v1 = -1227777811;
      break;
    }
    v1 = 2033128272;
    if ( v4 )
      v1 = -1227777811;
    if ( !v3 )
      v1 = 2033128272;
    if ( v4 != v3 )
      v1 = -1227777811;
  }
  while ( v1 > 1350735706 );
  while ( v1 == -1227777811 )
  {
    v5 = quotearg_char_mem(arg, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
    v1 = 2033128272;
    if ( ((x_61 * (x_61 - 1)) & ((x_61 * (x_61 - 1)) ^ 0xFFFFFFFE)) == 0 )
      v1 = -653481213;
    if ( y_62 >= 10 )
      v1 = 2033128272;
    if ( (((x_61 * (x_61 - 1)) & ((x_61 * (x_61 - 1)) ^ 0xFFFFFFFE)) == 0) != y_62 < 10 )
      v1 = -653481213;
    if ( v1 > 1350735706 )
      goto LABEL_10;
  }
  return v5;
}

char *__fastcall quotearg_colon_mem(const char *arg, size_t argsize)
{
  return quotearg_char_mem(arg, argsize, 0x3Au);
}

char *__fastcall quotearg_n_style_colon(int n, quoting_style s, const char *arg)
{
  unsigned int v4; // edx
  int v5; // eax
  int v6; // esi
  int v7; // esi
  unsigned int v8; // edx
  bool v10; // [rsp+Ah] [rbp-5Eh]
  quoting_options options; // [rsp+10h] [rbp-58h] BYREF

  quoting_options_from_style(&options, s);
  v4 = ~((_BYTE)x_23 * ((_BYTE)x_23 - 1)) | 0xFFFFFFFE;
  v5 = -193462020;
  v6 = 30747359;
  if ( (v4 == -1) != y_24 < 10 )
    v6 = -193462020;
  v10 = v4 == -1;
  if ( v4 != -1 )
    v5 = v6;
  if ( y_24 >= 10 )
    v5 = v6;
  v7 = 1731296489;
  do
  {
LABEL_11:
    if ( v7 == 30747359 )
    {
      options.quote_these_too[1] = (~options.quote_these_too[1] & 0x45117802 | options.quote_these_too[1] & 0xBAEE87FD) ^ 0x41117802 | options.quote_these_too[1] & 0x4000000;
      v7 = -894572080;
      break;
    }
    if ( v7 != 1731296489 )
      goto LABEL_23;
    v7 = 30747359;
    if ( y_24 < 10 )
      v7 = -894572080;
    if ( !v10 )
      v7 = 30747359;
    if ( y_24 < 10 != v10 )
      v7 = -894572080;
  }
  while ( v7 > 30747358 );
  while ( v7 == -894572080 )
  {
    v8 = ((options.quote_these_too[1] >> 26) & ((options.quote_these_too[1] >> 26) ^ 0x3E)) << 26;
    options.quote_these_too[1] = v8 & ((~options.quote_these_too[1] & 0xCCD634A7 | options.quote_these_too[1] & 0x3329CB58) ^ 0x3729CB58) | ((~options.quote_these_too[1] & 0xCCD634A7 | options.quote_these_too[1] & 0x3329CB58) ^ 0xC8D634A7) & ~v8;
    v7 = v5;
    if ( v5 > 30747358 )
      goto LABEL_11;
  }
  if ( v7 != -193462020 )
  {
    while ( 1 )
LABEL_23:
      ;
  }
  return quotearg_n_options(n, arg, 0xFFFFFFFFFFFFFFFFLL, &options);
}

char *__fastcall quotearg_n_custom(int n, const char *left_quote, const char *right_quote, const char *arg)
{
  return quotearg_n_custom_mem(n, left_quote, right_quote, arg, 0xFFFFFFFFFFFFFFFFLL);
}

char *__fastcall quotearg_n_custom_mem(
        int n,
        const char *left_quote,
        const char *right_quote,
        const char *arg,
        size_t argsize)
{
  __int64 v5; // rbx
  const char *v6; // r11
  const char *v7; // r15
  int v8; // r14d
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // esi
  char *v13; // rdx
  int v14; // ebx
  size_t v15; // rbx
  const char *v16; // r14
  const char *v17; // r15
  char *v18; // rax
  unsigned int v19; // edx
  int v20; // esi
  const char *v21; // rdx
  int v22; // eax
  int v23; // esi
  char *v24; // r9
  int v25; // edx
  unsigned int v26; // edx
  size_t v27; // r13
  const char *v28; // r14
  const char *v29; // r15
  char *v31; // [rsp+0h] [rbp-50h] BYREF
  const char *arga; // [rsp+8h] [rbp-48h]
  int v33; // [rsp+14h] [rbp-3Ch]
  char *v34; // [rsp+18h] [rbp-38h]
  char v35; // [rsp+26h] [rbp-2Ah]
  char v36; // [rsp+27h] [rbp-29h]

  v5 = (unsigned int)(x_71 * (x_71 - 1));
  v36 = ((unsigned int)v5 & ((x_71 * (x_71 - 1)) ^ 0xFFFFFFFE)) == 0;
  v35 = y_72 < 10;
  arga = arg;
  v6 = right_quote;
  v7 = left_quote;
  v8 = -807453515;
  if ( !left_quote )
    v8 = -409682394;
  if ( (right_quote != 0LL) != (left_quote != 0LL) )
    v8 = -409682394;
  v9 = -2099611578;
  v33 = v8;
  while ( 1 )
  {
    while ( v9 == -2099611578 )
    {
      v10 = 1282260807;
      if ( v35 != v36 )
        v10 = -1955629977;
      v9 = v10;
      if ( v35 )
        v9 = -1955629977;
      if ( !v36 )
        v9 = v10;
      if ( v9 > -1327193760 )
        goto LABEL_50;
    }
    *(quoting_options *)(&v31 - 8) = default_quoting_options;
    v11 = 1743356131;
    while ( 1 )
    {
      do
      {
        v12 = v11;
        v13 = (char *)v5;
        v11 = 2015250267;
        v5 = (__int64)(&v31 - 8);
      }
      while ( v12 == 1743356131 );
      while ( 1 )
      {
        while ( 1 )
        {
          v14 = v12;
          if ( v12 <= -513407903 )
            break;
          if ( v12 <= 1480223766 )
          {
            v12 = 1480223767;
            if ( v14 != -513407902 )
            {
              if ( v14 == -409682394 )
                abort();
              while ( 1 )
LABEL_83:
                ;
            }
          }
          else if ( v12 == 1480223767 )
          {
            v12 = -513407902;
            if ( ((x_27 * (x_27 - 1)) & ((x_27 * (x_27 - 1)) ^ 0xFFFFFFFE)) == 0 )
              v12 = -663021726;
            if ( y_28 >= 10 )
              v12 = -513407902;
            if ( (((x_27 * (x_27 - 1)) & ((x_27 * (x_27 - 1)) ^ 0xFFFFFFFE)) == 0) != y_28 < 10 )
              v12 = -663021726;
          }
          else
          {
            if ( v12 != 2015250267 )
              goto LABEL_83;
            v34 = v13;
            *(_DWORD *)v13 = 10;
            v12 = v8;
          }
        }
        if ( v12 != -1445396153 )
          break;
        v12 = -513407902;
        if ( ((x_27 * (x_27 - 1)) & ((x_27 * (x_27 - 1)) ^ 0xFFFFFFFE)) == 0 )
          v12 = 1480223767;
        if ( y_28 >= 10 )
          v12 = -513407902;
        if ( (((x_27 * (x_27 - 1)) & ((x_27 * (x_27 - 1)) ^ 0xFFFFFFFE)) == 0) != y_28 < 10 )
          v12 = 1480223767;
      }
      if ( v12 == -807453515 )
        break;
      if ( v12 != -663021726 )
        goto LABEL_83;
      v5 = (__int64)&default_quoting_options;
    }
    *((_QWORD *)v34 + 5) = v7;
    *((_QWORD *)v34 + 6) = v6;
    v15 = argsize;
    v16 = v7;
    v17 = v6;
    v18 = quotearg_n_options(n, arga, argsize, (const quoting_options *)(&v31 - 8));
    v6 = v17;
    v7 = v16;
    v8 = v33;
    argsize = v15;
    v31 = v18;
    v19 = ~((_BYTE)x_71 * ((_BYTE)x_71 - 1)) | 0xFFFFFFFE;
    v20 = 1282260807;
    v5 = 2967773537LL;
    if ( (v19 == -1) != y_72 < 10 )
      v20 = -1327193759;
    v9 = v20;
    if ( v19 == -1 )
      v9 = -1327193759;
    if ( y_72 >= 10 )
      v9 = v20;
LABEL_50:
    if ( v9 != 1282260807 )
      return v31;
    v21 = default_quoting_options.right_quote;
    *(quoting_options *)(&v31 - 8) = default_quoting_options;
    v22 = 1743356131;
    while ( 1 )
    {
      do
      {
        v23 = v22;
        v24 = (char *)v21;
        v22 = 2015250267;
        v21 = (const char *)(&v31 - 8);
      }
      while ( v23 == 1743356131 );
      while ( 1 )
      {
        while ( 1 )
        {
          v25 = v23;
          if ( v23 <= -513407903 )
            break;
          if ( v23 <= 1480223766 )
          {
            v23 = 1480223767;
            if ( v25 != -513407902 )
            {
              if ( v25 == -409682394 )
                abort();
              while ( 1 )
LABEL_85:
                ;
            }
          }
          else if ( v23 == 1480223767 )
          {
            LOBYTE(v5) = ((x_27 * (x_27 - 1)) & ((x_27 * (x_27 - 1)) ^ 0xFFFFFFFE)) == 0;
            v23 = -513407902;
            if ( ((x_27 * (x_27 - 1)) & ((x_27 * (x_27 - 1)) ^ 0xFFFFFFFE)) == 0 )
              v23 = -663021726;
            if ( y_28 >= 10 )
              v23 = -513407902;
            if ( (unsigned __int8)v5 != y_28 < 10 )
              v23 = -663021726;
          }
          else
          {
            if ( v23 != 2015250267 )
              goto LABEL_85;
            v34 = v24;
            *(_DWORD *)v24 = 10;
            v23 = v8;
          }
        }
        if ( v23 != -1445396153 )
          break;
        v26 = ~((_BYTE)x_27 * ((_BYTE)x_27 - 1)) | 0xFFFFFFFE;
        LOBYTE(v5) = v26 == -1;
        v23 = -513407902;
        if ( v26 == -1 )
          v23 = 1480223767;
        if ( y_28 >= 10 )
          v23 = -513407902;
        if ( (unsigned __int8)v5 != y_28 < 10 )
          v23 = 1480223767;
      }
      if ( v23 == -807453515 )
        break;
      if ( v23 != -663021726 )
        goto LABEL_85;
      v21 = (const char *)&default_quoting_options;
    }
    *((_QWORD *)v34 + 5) = v7;
    *((_QWORD *)v34 + 6) = v6;
    v27 = argsize;
    v28 = v7;
    v29 = v6;
    quotearg_n_options(n, arga, argsize, (const quoting_options *)(&v31 - 8));
    v6 = v29;
    v7 = v28;
    v8 = v33;
    argsize = v27;
    v9 = -1955629977;
  }
}

char *__fastcall quotearg_custom(const char *left_quote, const char *right_quote, const char *arg)
{
  return quotearg_n_custom_mem(0, left_quote, right_quote, arg, 0xFFFFFFFFFFFFFFFFLL);
}

char *__fastcall quotearg_custom_mem(const char *left_quote, const char *right_quote, const char *arg, size_t argsize)
{
  return quotearg_n_custom_mem(0, left_quote, right_quote, arg, argsize);
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
  int v1; // eax
  int v2; // edx
  char v4; // [rsp+6h] [rbp-32h]
  char v5; // [rsp+7h] [rbp-31h]
  char *v6; // [rsp+8h] [rbp-30h]

  v4 = (~((_BYTE)x_83 * ((_BYTE)x_83 - 1)) | 0xFFFFFFFE) == -1;
  v5 = y_84 < 10;
  v1 = 182377149;
  do
  {
LABEL_10:
    if ( v1 != 182377149 )
    {
      quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &quote_quoting_options);
      v1 = -1734583408;
      break;
    }
    v1 = 1925717148;
    if ( v5 )
      v1 = -1734583408;
    if ( !v4 )
      v1 = 1925717148;
    if ( v5 != v4 )
      v1 = -1734583408;
  }
  while ( v1 > 182377148 );
  while ( v1 == -1734583408 )
  {
    v6 = quotearg_n_options(0, arg, 0xFFFFFFFFFFFFFFFFLL, &quote_quoting_options);
    v2 = 1925717148;
    if ( (((x_83 * (x_83 - 1)) & ((x_83 * (x_83 - 1)) ^ 0xFFFFFFFE)) == 0) != y_84 < 10 )
      v2 = -1517100999;
    v1 = v2;
    if ( ((x_83 * (x_83 - 1)) & ((x_83 * (x_83 - 1)) ^ 0xFFFFFFFE)) == 0 )
      v1 = -1517100999;
    if ( y_84 >= 10 )
      v1 = v2;
    if ( v1 > 182377148 )
      goto LABEL_10;
  }
  return v6;
}

const char *__fastcall gettext_quote(const char *msgid, quoting_style s)
{
  char *v2; // r14
  const char *v4; // rbp
  int v5; // eax
  bool v6; // zf
  int v7; // ecx
  bool v8; // zf
  char *v9; // rax
  int v10; // ecx
  unsigned int v11; // edx
  bool v12; // zf
  int v13; // esi
  int v14; // edi
  char v16; // [rsp-8h] [rbp-60h]
  char v17; // [rsp+0h] [rbp-58h]
  char *v18; // [rsp+8h] [rbp-50h]
  char *s1; // [rsp+10h] [rbp-48h]
  const char *v20; // [rsp+18h] [rbp-40h]
  const char *v21; // [rsp+20h] [rbp-38h]

  v18 = dcgettext(0LL, msgid, 5);
  v4 = "'";
  if ( s == clocale_quoting_style )
    v4 = "\"";
  v5 = -1100177610;
  while ( 1 )
  {
LABEL_7:
    if ( v5 <= -860219849 )
    {
      if ( v5 == -2035517772 )
      {
        v5 = 2050686136;
        v2 = v18;
        goto LABEL_24;
      }
      if ( v5 != -1100177610 )
      {
        v5 = 2050686136;
        v2 = (char *)v20;
        goto LABEL_24;
      }
      v6 = v18 == msgid;
      v5 = -860219848;
      v7 = -2035517772;
      goto LABEL_19;
    }
    if ( v5 > -520377217 )
      break;
    if ( v5 == -860219848 )
    {
      s1 = (char *)locale_charset();
      v6 = strcaseeq0(s1, "UTF-8", 85, 84, 70, 45, 56, 0, 0, v16, v17) == 0;
      v5 = -676942148;
      v7 = 740390790;
    }
    else
    {
      v6 = strcaseeq0(s1, "GB18030", 71, 66, 49, 56, 48, 51, 48, v16, v17) == 0;
      v5 = 1934861346;
      v7 = -98249395;
    }
LABEL_19:
    if ( !v6 )
      v5 = v7;
    if ( v5 > 241203876 )
      goto LABEL_24;
  }
  if ( v5 == -520377216 )
  {
    v5 = 814092184;
    goto LABEL_24;
  }
  v8 = *msgid == 96;
  v2 = (char *)&unk_4195AA;
  v9 = (char *)&unk_4195A6;
LABEL_4:
  if ( v8 )
    v2 = v9;
  v5 = 2050686136;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_24:
      while ( v5 <= 814092183 )
      {
        if ( v5 == 241203877 )
        {
          v20 = v4;
          v10 = y_86;
          v11 = ~((_BYTE)x_85 * ((_BYTE)x_85 - 1)) | 0xFFFFFFFE;
          v12 = (v11 == -1) == y_86 < 10;
          v13 = 416766782;
          v14 = -1068407713;
          goto LABEL_50;
        }
        if ( v5 != 416766782 )
        {
          v8 = *msgid == 96;
          v2 = (char *)&unk_41959A;
          v9 = (char *)&unk_419596;
          goto LABEL_4;
        }
        v5 = 241203877;
      }
      if ( v5 <= 1934861345 )
        break;
      if ( v5 == 1934861346 )
      {
        v5 = 416766782;
        if ( ((x_85 * (x_85 - 1)) & ((x_85 * (x_85 - 1)) ^ 0xFFFFFFFE)) == 0 )
          v5 = 241203877;
        if ( y_86 >= 10 )
          v5 = 416766782;
        if ( (((x_85 * (x_85 - 1)) & ((x_85 * (x_85 - 1)) ^ 0xFFFFFFFE)) == 0) != y_86 < 10 )
          v5 = 241203877;
      }
      else
      {
        v21 = v2;
        v5 = -520377216;
        if ( ((x_85 * (x_85 - 1)) & ((x_85 * (x_85 - 1)) ^ 0xFFFFFFFE)) == 0 )
          v5 = 814092184;
        if ( y_86 >= 10 )
          v5 = -520377216;
        if ( (((x_85 * (x_85 - 1)) & ((x_85 * (x_85 - 1)) ^ 0xFFFFFFFE)) == 0) != y_86 < 10 )
          v5 = 814092184;
        if ( v5 <= 241203876 )
          goto LABEL_7;
      }
    }
    if ( v5 != 814092184 )
      return v21;
    v10 = y_86;
    v11 = ~((_BYTE)x_85 * ((_BYTE)x_85 - 1)) | 0xFFFFFFFE;
    v12 = (v11 == -1) == y_86 < 10;
    v13 = -520377216;
    v14 = 1018268830;
LABEL_50:
    if ( !v12 )
      v13 = v14;
    v5 = v13;
    if ( v11 == -1 )
      v5 = v14;
    if ( v10 >= 10 )
      v5 = v13;
    if ( v5 <= 241203876 )
      goto LABEL_7;
  }
}

__int64 __fastcall strcaseeq0(
        const char *s1,
        const char *s2,
        int s20,
        char s21,
        char s22,
        char s23,
        char s24,
        char s25,
        char s26)
{
  unsigned int v9; // r15d
  int v13; // eax
  bool v14; // zf
  unsigned int v15; // edx
  int v16; // esi
  int v17; // edx
  int v18; // edx
  char v20; // [rsp+10h] [rbp-48h]
  char v21; // [rsp+11h] [rbp-47h]
  char v22; // [rsp+12h] [rbp-46h]
  bool v23; // [rsp+13h] [rbp-45h]
  int v24; // [rsp+14h] [rbp-44h]
  char v25; // [rsp+18h] [rbp-40h]
  int v26; // [rsp+1Ch] [rbp-3Ch]
  int v28; // [rsp+24h] [rbp-34h]

  v25 = s23;
  v21 = (~((_BYTE)x_87 * ((_BYTE)x_87 - 1)) | 0xFFFFFFFE) == -1;
  v22 = y_88 < 10;
  v13 = -1992717663;
  do
  {
    while ( 1 )
    {
LABEL_5:
      while ( v13 > -1315209001 )
      {
        if ( v13 > -473833355 )
        {
          if ( v13 == -473833354 )
          {
            v13 = 252197798;
            if ( !v24 )
              v13 = -187221628;
            goto LABEL_43;
          }
          v24 = s20;
          v23 = (unsigned int)(s20 - 65) < 0x1A;
          v26 = *s1;
          v15 = ~((_BYTE)x_87 * ((_BYTE)x_87 - 1)) | 0xFFFFFFFE;
          v16 = 414586563;
          if ( (v15 == -1) != y_88 < 10 )
            v16 = -2072964665;
          v13 = v16;
          if ( v15 == -1 )
            v13 = -2072964665;
          if ( y_88 >= 10 )
            v13 = v16;
          if ( v13 > -187221629 )
            goto LABEL_43;
        }
        else if ( v13 == -1315209000 )
        {
          v28 = strcaseeq1(s1, s2, s21, s22, v25, s24, s25, s26, v20, v25);
          v17 = -1490699189;
          if ( (((x_87 * (x_87 - 1)) & ((x_87 * (x_87 - 1)) ^ 0xFFFFFFFE)) == 0) != y_88 < 10 )
            v17 = 493841969;
          v13 = v17;
          if ( ((x_87 * (x_87 - 1)) & ((x_87 * (x_87 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v13 = 493841969;
          if ( y_88 >= 10 )
            v13 = v17;
          if ( v13 > -187221629 )
            goto LABEL_43;
        }
        else
        {
          v14 = v26 == v24;
LABEL_2:
          v13 = 610295752;
          if ( v14 )
            v13 = -473833354;
          if ( v13 > -187221629 )
            goto LABEL_43;
        }
      }
      if ( v13 == -2072964665 )
        break;
      if ( v13 == -1992717663 )
      {
        v18 = 414586563;
        if ( v22 != v21 )
          v18 = -250830249;
        v13 = v18;
        if ( v22 )
          v13 = -250830249;
        if ( !v21 )
          v13 = v18;
        if ( v13 > -187221629 )
          goto LABEL_43;
      }
      else
      {
        strcaseeq1(s1, s2, s21, s22, v25, s24, s25, s26, v20, v25);
        v13 = -1315209000;
      }
    }
    v13 = -659691262;
    if ( v23 )
      v13 = 1661453359;
  }
  while ( v13 <= -187221629 );
  while ( 1 )
  {
LABEL_43:
    while ( v13 <= 493841968 )
    {
      if ( v13 != -187221628 )
      {
        if ( v13 == 252197798 )
        {
          v13 = -1490699189;
          if ( (~((_BYTE)x_87 * ((_BYTE)x_87 - 1)) | 0xFFFFFFFE) == -1 )
            v13 = -1315209000;
          if ( y_88 >= 10 )
            v13 = -1490699189;
          if ( ((~((_BYTE)x_87 * ((_BYTE)x_87 - 1)) | 0xFFFFFFFE) == -1) != y_88 < 10 )
            v13 = -1315209000;
        }
        else
        {
          v13 = -250830249;
        }
        goto LABEL_5;
      }
      v13 = 692139598;
      v9 = 1;
    }
    if ( v13 > 692139597 )
      break;
    if ( v13 == 493841969 )
    {
      v13 = 692139598;
      v9 = v28;
    }
    else
    {
      v13 = 692139598;
      v9 = 0;
    }
  }
  if ( v13 == 1661453359 )
  {
    v14 = (v26 & (v26 ^ 0x20)) == v24;
    goto LABEL_2;
  }
  return v9;
}

char __fastcall strcaseeq1(const char *s1, const char *s2, int s21, int s22, int s23, int s24, char s25, char s26)
{
  char v8; // bp
  char v9; // r13
  char result; // al
  int v13; // ecx
  char v14; // r8
  bool v15; // zf
  int v16; // ecx
  unsigned int v17; // esi
  int v18; // edi
  int v19; // ecx
  bool v20; // zf
  int v21; // eax
  int v22; // eax
  char v23; // cl
  int v24; // edi
  bool v25; // cc
  char v26; // dl
  int v27; // esi
  bool v28; // zf
  int v29; // ecx
  int v30; // esi
  bool v31; // zf
  unsigned int v32; // edx
  int v33; // esi
  unsigned int v34; // eax
  int v35; // esi
  int v36; // esi
  bool v37; // zf
  bool v38; // zf
  int v39; // eax
  bool v40; // zf
  int v41; // eax
  unsigned int v42; // esi
  int v43; // edi
  bool v44; // [rsp+6h] [rbp-72h]
  char v45; // [rsp+7h] [rbp-71h]
  char v46; // [rsp+9h] [rbp-6Fh]
  bool v47; // [rsp+Ah] [rbp-6Eh]
  char v48; // [rsp+Ch] [rbp-6Ch]
  char v49; // [rsp+Dh] [rbp-6Bh]
  char v50; // [rsp+Eh] [rbp-6Ah]
  bool v51; // [rsp+Fh] [rbp-69h]
  int v53; // [rsp+1Ch] [rbp-5Ch]
  int v54; // [rsp+20h] [rbp-58h]
  int v55; // [rsp+24h] [rbp-54h]
  int v56; // [rsp+28h] [rbp-50h]
  int v57; // [rsp+2Ch] [rbp-4Ch]
  char v61; // [rsp+3Ch] [rbp-3Ch]
  char v62; // [rsp+40h] [rbp-38h]
  char v63; // [rsp+44h] [rbp-34h]

  v44 = (unsigned int)(s21 - 65) < 0x1A;
  result = s1[1];
  v45 = result;
  v13 = -62431602;
  v14 = -124;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        while ( v13 <= -1699940769 )
        {
          if ( v13 == -1970216780 )
          {
            v13 = 720694351;
            result = 0;
            goto LABEL_7;
          }
          v42 = ~((_BYTE)x_89 * ((_BYTE)x_89 - 1)) | 0xFFFFFFFE;
          v43 = 51414936;
          v8 = -76;
          if ( (v42 == -1) != y_90 < 10 )
            v43 = -1970216780;
          v13 = v43;
          if ( v42 == -1 )
            v13 = -1970216780;
          if ( y_90 >= 10 )
            v13 = v43;
          if ( v13 > 51414935 )
            goto LABEL_7;
        }
        if ( v13 == -1699940768 )
          break;
        if ( v13 == -1218910140 )
        {
          v13 = 51414936;
          if ( (~((_BYTE)x_89 * ((_BYTE)x_89 - 1)) | 0xFFFFFFFE) == -1 )
            v13 = -1939836680;
          if ( y_90 >= 10 )
            v13 = 51414936;
          if ( ((~((_BYTE)x_89 * ((_BYTE)x_89 - 1)) | 0xFFFFFFFE) == -1) != y_90 < 10 )
            v13 = -1939836680;
          if ( v13 > 51414935 )
            goto LABEL_7;
        }
        else
        {
          v55 = v45;
          v13 = -1699940768;
          if ( v44 )
            v13 = 699652304;
          if ( v13 > 51414935 )
            goto LABEL_7;
        }
      }
      v15 = v55 == s21;
LABEL_2:
      v13 = -1218910140;
      if ( v15 )
        v13 = 911798654;
    }
    while ( v13 <= 51414935 );
LABEL_7:
    while ( v13 > 911798653 )
    {
      if ( v13 == 911798654 )
      {
        v13 = 1372437659;
        if ( !s21 )
          v13 = 1157635020;
      }
      else
      {
        if ( v13 != 1157635020 )
        {
          v46 = s1[2];
          v16 = -195415713;
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_159:
              while ( v16 > 950250867 )
              {
                if ( v16 > 1257373826 )
                {
                  if ( v16 != 1257373827 )
                  {
                    result = v61;
                    v13 = 720694351;
                    goto LABEL_7;
                  }
                  v38 = (v54 & 0xFFFFFFDF) == s22;
                  v16 = 1181134487;
                  v39 = 950250868;
                }
                else
                {
                  if ( v16 != 950250868 )
                  {
                    v16 = -2143504672;
                    v8 = 0;
                    goto LABEL_15;
                  }
                  v38 = s22 == 0;
                  v16 = -1684160554;
                  v39 = -1669156065;
                }
                if ( v38 )
                  v16 = v39;
                if ( v16 <= -195415714 )
                  goto LABEL_15;
              }
              if ( v16 != -195415713 )
                break;
              v54 = v46;
              v40 = (unsigned int)(s22 - 65) >= 0x1A;
              v16 = 812588589;
              v41 = 1257373827;
LABEL_178:
              if ( !v40 )
                v16 = v41;
            }
            if ( v16 == 627393437 )
            {
              v40 = !v47;
              v16 = 1181134487;
              v41 = 950250868;
              goto LABEL_178;
            }
            v16 = -2031111752;
            v36 = -2007409282;
            if ( (~((_BYTE)x_91 * ((_BYTE)x_91 - 1)) | 0xFFFFFFFE) == -1 )
              v16 = -2007409282;
            if ( y_92 >= 10 )
              v16 = -2031111752;
            v37 = ((~((_BYTE)x_91 * ((_BYTE)x_91 - 1)) | 0xFFFFFFFE) == -1) == y_92 < 10;
LABEL_170:
            if ( !v37 )
              v16 = v36;
            do
            {
              while ( 1 )
              {
LABEL_15:
                while ( v16 <= -1684160555 )
                {
                  if ( v16 == -2143504672 )
                  {
                    v61 = v8;
                    v16 = -1458177498;
                    v36 = -851290896;
                    if ( ((x_91 * (x_91 - 1)) & ((x_91 * (x_91 - 1)) ^ 0xFFFFFFFE)) == 0 )
                      v16 = -851290896;
                    if ( y_92 >= 10 )
                      v16 = -1458177498;
                    v37 = (((x_91 * (x_91 - 1)) & ((x_91 * (x_91 - 1)) ^ 0xFFFFFFFE)) == 0) == y_92 < 10;
                    goto LABEL_170;
                  }
                  if ( v16 == -2031111752 )
                  {
                    v16 = -2007409282;
                  }
                  else
                  {
                    v47 = v54 == s22;
                    v17 = ~((_BYTE)x_91 * ((_BYTE)x_91 - 1)) | 0xFFFFFFFE;
                    v18 = -2031111752;
                    if ( (v17 == -1) != y_92 < 10 )
                      v18 = 627393437;
                    v16 = v18;
                    if ( v17 == -1 )
                      v16 = 627393437;
                    if ( y_92 >= 10 )
                      v16 = v18;
                    if ( v16 > -195415714 )
                      goto LABEL_159;
                  }
                }
                if ( v16 > -1458177499 )
                  break;
                if ( v16 != -1684160554 )
                {
                  v16 = -2143504672;
                  v8 = 1;
                  continue;
                }
                v48 = s1[3];
                v19 = 1471418073;
LABEL_43:
                while ( 2 )
                {
                  while ( 2 )
                  {
                    while ( v19 > 124571455 )
                    {
                      if ( v19 == 124571456 )
                      {
                        v20 = (v56 & (v56 ^ 0x20)) == s23;
                        goto LABEL_39;
                      }
                      if ( v19 == 978882426 )
                      {
                        v20 = v56 == s23;
LABEL_39:
                        v19 = -1575255601;
                        if ( v20 )
                          v19 = -1959532156;
                        while ( 1 )
                        {
                          while ( v19 <= -1909983169 )
                          {
                            if ( v19 == -1959532156 )
                            {
                              v19 = -1909983168;
                              if ( !s23 )
                                v19 = -733260537;
                              if ( v19 > -733260538 )
                                goto LABEL_43;
                            }
                            else
                            {
                              v19 = -1673417635;
                            }
                          }
                          if ( v19 == -1909983168 )
                            break;
                          if ( v19 == -1673417635 )
                          {
                            v34 = (x_93 * (x_93 - 1)) & ((x_93 * (x_93 - 1)) ^ 0xFFFFFFFE);
                            v35 = -1936093566;
                            if ( (v34 == 0) != y_94 < 10 )
                              v35 = -97939171;
                            v19 = v35;
                            if ( !v34 )
                              v19 = -97939171;
                            if ( y_94 >= 10 )
                              v19 = v35;
                            if ( v19 > -733260538 )
                              goto LABEL_43;
                          }
                          else
                          {
                            v21 = -1936093566;
                            if ( (((x_93 * (x_93 - 1)) & ((x_93 * (x_93 - 1)) ^ 0xFFFFFFFE)) == 0) != y_94 < 10 )
                              v21 = -1673417635;
                            v19 = v21;
                            if ( ((x_93 * (x_93 - 1)) & ((x_93 * (x_93 - 1)) ^ 0xFFFFFFFE)) == 0 )
                              v19 = -1673417635;
                            if ( y_94 >= 10 )
                              v19 = v21;
                          }
                        }
                        v49 = (~((_BYTE)x_95 * ((_BYTE)x_95 - 1)) | 0xFFFFFFFE) == -1;
                        v50 = y_96 < 10;
                        v22 = -2083191415;
                        while ( 1 )
                        {
LABEL_105:
                          if ( v22 > -880745686 )
                          {
                            if ( v22 <= -789377411 )
                            {
                              if ( v22 == -880745685 )
                              {
                                v22 = 2086144495;
                                if ( v51 )
                                  v22 = -561217385;
                              }
                              else
                              {
                                v22 = 61059822;
                                v9 = 1;
                              }
                              goto LABEL_76;
                            }
                            if ( v22 == -789377410 )
                            {
                              v62 = strcaseeq5(s1, s2, s25, s26, v14, s24);
                              v32 = ~((_BYTE)x_95 * ((_BYTE)x_95 - 1)) | 0xFFFFFFFE;
                              v33 = 2125953263;
                              if ( (v32 == -1) != y_96 < 10 )
                                v33 = -1469928448;
                              v22 = v33;
                              if ( v32 == -1 )
                                v22 = -1469928448;
                              if ( y_96 >= 10 )
                                v22 = v33;
                              if ( v22 <= -561217386 )
                                continue;
LABEL_76:
                              while ( v22 > 541321068 )
                              {
                                if ( v22 > 2086144494 )
                                {
                                  if ( v22 != 2086144495 )
                                  {
                                    strcaseeq5(s1, s2, s25, s26, v14, s24);
                                    v22 = -789377410;
                                    goto LABEL_105;
                                  }
                                  v28 = v57 == v53;
LABEL_101:
                                  v22 = -317261571;
                                  v29 = 564369090;
LABEL_102:
                                  if ( v28 )
                                    v22 = v29;
                                  if ( v22 <= -561217386 )
                                    goto LABEL_105;
                                  goto LABEL_76;
                                }
                                if ( v22 == 564369090 )
                                {
                                  v28 = v53 == 0;
                                  v22 = 1898134979;
                                  v29 = -837512471;
                                  goto LABEL_102;
                                }
                                if ( v22 != 1898134979 )
                                {
                                  v8 = v63;
                                  v19 = -10482753;
                                  v14 = -124;
                                  goto LABEL_43;
                                }
                                v22 = 2125953263;
                                if ( (~((_BYTE)x_95 * ((_BYTE)x_95 - 1)) | 0xFFFFFFFE) == -1 )
                                  v22 = -789377410;
                                if ( y_96 >= 10 )
                                  v22 = 2125953263;
                                if ( ((~((_BYTE)x_95 * ((_BYTE)x_95 - 1)) | 0xFFFFFFFE) == -1) != y_96 < 10 )
                                  v22 = -789377410;
                                if ( v22 <= -561217386 )
                                  goto LABEL_105;
                              }
                              if ( v22 > 61059821 )
                              {
                                if ( v22 == 61059822 )
                                {
                                  v63 = v9;
                                  v23 = ((x_95 * (x_95 - 1)) & ((x_95 * (x_95 - 1)) ^ 0xFFFFFFFE)) == 0;
                                  v22 = -2127020470;
                                  v24 = -773534559;
                                  if ( ((x_95 * (x_95 - 1)) & ((x_95 * (x_95 - 1)) ^ 0xFFFFFFFE)) == 0 )
                                    v22 = -773534559;
                                  v25 = y_96 < 10;
                                  v26 = y_96 < 10;
                                  v27 = -2127020470;
                                }
                                else
                                {
                                  v53 = s24;
                                  v51 = (unsigned int)(s24 - 65) < 0x1A;
                                  v57 = s1[4];
                                  v23 = (~((_BYTE)x_95 * ((_BYTE)x_95 - 1)) | 0xFFFFFFFE) == -1;
                                  v22 = -1878899094;
                                  v24 = -880745685;
                                  if ( (~((_BYTE)x_95 * ((_BYTE)x_95 - 1)) | 0xFFFFFFFE) == -1 )
                                    v22 = -880745685;
                                  v25 = y_96 < 10;
                                  v26 = y_96 < 10;
                                  v27 = -1878899094;
                                }
                                if ( !v25 )
                                  v22 = v27;
                                if ( v23 != v26 )
                                  v22 = v24;
                                continue;
                              }
                              if ( v22 != -561217385 )
                              {
                                v22 = 61059822;
                                v9 = 0;
                                goto LABEL_76;
                              }
                              v28 = (v57 & (v57 ^ 0x20)) == v53;
                              goto LABEL_101;
                            }
                            v22 = -2127020470;
                            v30 = 541321069;
                            if ( ((x_95 * (x_95 - 1)) & ((x_95 * (x_95 - 1)) ^ 0xFFFFFFFE)) == 0 )
                              v22 = 541321069;
                            if ( y_96 >= 10 )
                              v22 = -2127020470;
                            v31 = (((x_95 * (x_95 - 1)) & ((x_95 * (x_95 - 1)) ^ 0xFFFFFFFE)) == 0) == y_96 < 10;
                          }
                          else
                          {
                            if ( v22 > -1878899095 )
                            {
                              if ( v22 == -1878899094 )
                              {
                                v22 = 316634357;
                              }
                              else
                              {
                                v22 = 61059822;
                                v9 = v62;
                              }
                              goto LABEL_76;
                            }
                            if ( v22 == -2127020470 )
                            {
                              v22 = -773534559;
                              continue;
                            }
                            v22 = -1878899094;
                            v30 = 316634357;
                            if ( v50 )
                              v22 = 316634357;
                            if ( !v49 )
                              v22 = -1878899094;
                            v31 = v50 == v49;
                          }
                          if ( !v31 )
                            v22 = v30;
                          if ( v22 > -561217386 )
                            goto LABEL_76;
                        }
                      }
                      v56 = v48;
                      v19 = 978882426;
                      if ( (unsigned int)(s23 - 65) < 0x1A )
                        v19 = 124571456;
                    }
                    if ( v19 == -733260537 )
                    {
                      v19 = -10482753;
                      v8 = 1;
                      continue;
                    }
                    break;
                  }
                  if ( v19 == -97939171 )
                  {
                    v19 = -10482753;
                    v8 = 0;
                    continue;
                  }
                  break;
                }
                v16 = -2143504672;
              }
              if ( v16 == -1458177498 )
              {
                v16 = -851290896;
                goto LABEL_15;
              }
              v16 = -1458177498;
              if ( (~((_BYTE)x_91 * ((_BYTE)x_91 - 1)) | 0xFFFFFFFE) == -1 )
                v16 = 1287030340;
              if ( y_92 >= 10 )
                v16 = -1458177498;
              if ( ((~((_BYTE)x_91 * ((_BYTE)x_91 - 1)) | 0xFFFFFFFE) == -1) != y_92 < 10 )
                v16 = 1287030340;
            }
            while ( v16 <= -195415714 );
          }
        }
        v13 = 720694351;
        result = 1;
      }
    }
    if ( v13 != 51414936 )
      break;
    v13 = -1939836680;
  }
  if ( v13 == 699652304 )
  {
    v15 = (v55 & 0xFFFFFFDF) == s21;
    goto LABEL_2;
  }
  return result;
}

__int64 __fastcall strcaseeq5(const char *s1, const char *s2, int s25, int s26, char s27, char s28)
{
  bool v7; // r10
  unsigned int v8; // edx
  char v9; // r8
  bool v10; // dl
  unsigned __int8 v11; // r9
  int v12; // edi
  int v13; // r12d
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  char v18; // dl
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // ecx
  bool v29; // cl
  int v30; // edx
  int v31; // edx
  bool v32; // zf
  int v33; // eax
  int v34; // eax
  bool v35; // zf
  int v36; // eax
  bool v37; // zf
  bool v38; // zf
  int v39; // edx
  bool v40; // zf
  int v41; // edx
  bool v43; // [rsp+4h] [rbp-B4h]
  char v44; // [rsp+5h] [rbp-B3h]
  bool v45; // [rsp+6h] [rbp-B2h]
  bool v46; // [rsp+7h] [rbp-B1h]
  char v47; // [rsp+9h] [rbp-AFh]
  char v48; // [rsp+Ch] [rbp-ACh]
  char v49; // [rsp+Fh] [rbp-A9h]
  int v51; // [rsp+14h] [rbp-A4h]
  int v52; // [rsp+1Ch] [rbp-9Ch]
  int v53; // [rsp+20h] [rbp-98h]
  int v54; // [rsp+24h] [rbp-94h]
  int v55; // [rsp+28h] [rbp-90h]
  int v56; // [rsp+2Ch] [rbp-8Ch]
  int v57; // [rsp+30h] [rbp-88h]
  int v58; // [rsp+34h] [rbp-84h]
  int v59; // [rsp+38h] [rbp-80h]
  int v60; // [rsp+3Ch] [rbp-7Ch]
  int v61; // [rsp+40h] [rbp-78h]
  int v63; // [rsp+48h] [rbp-70h]
  int v64; // [rsp+4Ch] [rbp-6Ch]
  int v65; // [rsp+50h] [rbp-68h]
  int v66; // [rsp+54h] [rbp-64h]
  int v67; // [rsp+58h] [rbp-60h]
  int v68; // [rsp+5Ch] [rbp-5Ch]
  int v69; // [rsp+60h] [rbp-58h]
  int v70; // [rsp+64h] [rbp-54h]
  int v71; // [rsp+68h] [rbp-50h]
  int v72; // [rsp+6Ch] [rbp-4Ch]
  int v73; // [rsp+74h] [rbp-44h]
  unsigned int v74; // [rsp+78h] [rbp-40h]
  int v75; // [rsp+7Ch] [rbp-3Ch]

  v7 = (unsigned int)(s25 - 65) < 0x1A;
  v8 = ~((_BYTE)x_97 * ((_BYTE)x_97 - 1)) | 0xFFFFFFFE;
  v9 = (y_98 < 10) ^ (v8 == -1);
  v10 = y_98 <= 9 && v8 == -1;
  v11 = (((x_99 * (x_99 - 1)) & ((x_99 * (x_99 - 1)) ^ 0xFFFFFFFE)) == 0) ^ (y_100 < 10);
  v66 = ((_BYTE)x_101 * ((_BYTE)x_101 - 1)) & 1;
  v12 = -48814260;
  if ( (~((_BYTE)x_101 * ((_BYTE)x_101 - 1)) | 0xFFFFFFFE) == -1 )
    v12 = 1961110706;
  v67 = y_102;
  if ( y_102 >= 10 )
    v12 = -48814260;
  if ( ((~((_BYTE)x_101 * ((_BYTE)x_101 - 1)) | 0xFFFFFFFE) == -1) != y_102 < 10 )
    v12 = 1961110706;
  v71 = ((_BYTE)x_103 * ((_BYTE)x_103 - 1)) & 1;
  v13 = 1094587904;
  if ( (~((_BYTE)x_103 * ((_BYTE)x_103 - 1)) | 0xFFFFFFFE) == -1 )
    v13 = -432295367;
  v72 = y_104;
  if ( y_104 >= 10 )
    v13 = 1094587904;
  if ( ((~((_BYTE)x_103 * ((_BYTE)x_103 - 1)) | 0xFFFFFFFE) == -1) != y_104 < 10 )
    v13 = -432295367;
  v14 = 194606459;
  if ( !(v11 | (((x_99 * (x_99 - 1)) & ((x_99 * (x_99 - 1)) ^ 0xFFFFFFFE)) == 0 && y_100 <= 9)) )
    v14 = -671396950;
  v65 = v14;
  v15 = -740902810;
  if ( !(v11 | (((x_99 * (x_99 - 1)) & ((x_99 * (x_99 - 1)) ^ 0xFFFFFFFE)) == 0 && y_100 <= 9)) )
    v15 = -671396950;
  v73 = v15;
  v16 = 307736452;
  if ( !(v11 | (((x_99 * (x_99 - 1)) & ((x_99 * (x_99 - 1)) ^ 0xFFFFFFFE)) == 0 && y_100 <= 9)) )
    v16 = -119704138;
  v64 = v16;
  v17 = 539623174;
  if ( !(v11 | (((x_99 * (x_99 - 1)) & ((x_99 * (x_99 - 1)) ^ 0xFFFFFFFE)) == 0 && y_100 <= 9)) )
    v17 = -119704138;
  v63 = v17;
  v18 = v9 | v10;
  v19 = -947122550;
  if ( !v18 )
    v19 = -1880825715;
  v69 = v19;
  v20 = -2086506758;
  if ( !v18 )
    v20 = -1880825715;
  v61 = v20;
  v21 = -1352456418;
  if ( !v18 )
    v21 = 1198690382;
  v60 = v21;
  v22 = -542736963;
  if ( !v18 )
    v22 = 1198690382;
  v59 = v22;
  v23 = -331120415;
  if ( !v18 )
    v23 = -20393132;
  v70 = v23;
  v24 = -2085895689;
  if ( !v18 )
    v24 = -20393132;
  v68 = v24;
  v25 = 1649983578;
  v26 = -1910645380;
  if ( !v18 )
    v25 = -1910645380;
  v58 = v25;
  v27 = -877239044;
  if ( !v18 )
    v27 = -1910645380;
  v57 = v27;
  v43 = v7;
  LOBYTE(v26) = s1[5];
  v44 = v26;
  v28 = 477800786;
  while ( 1 )
  {
LABEL_42:
    while ( 1 )
    {
      v30 = v28;
      if ( v28 <= -331120416 )
        break;
      if ( v28 > 797882725 )
      {
        if ( v28 <= 1198690381 )
        {
          v28 = v69;
          if ( v30 != 797882726 )
          {
            v74 = v26;
            v28 = v58;
          }
        }
        else if ( v28 == 1198690382 )
        {
          v28 = -1352456418;
        }
        else if ( v28 == 1244505051 )
        {
          v28 = 828367075;
          v26 = 0;
        }
        else
        {
          v28 = v57;
        }
      }
      else if ( v28 <= 394951533 )
      {
        v28 = v68;
        if ( v30 != -331120415 )
        {
          v28 = v30;
          if ( v30 == -20393132 )
            v28 = -331120415;
        }
      }
      else
      {
        v28 = v70;
        if ( v30 != 394951534 )
        {
          if ( v30 == 477800786 )
          {
            v51 = v44;
            v28 = -1765940481;
            if ( v43 )
              v28 = 797882726;
          }
          else
          {
            v28 = -1395470792;
            if ( !s25 )
              v28 = 394951534;
          }
        }
      }
    }
    if ( v28 > -1395470793 )
      break;
    if ( v28 <= -1910645381 )
    {
      if ( v28 != -2086506758 )
      {
        v28 = 828367075;
        v26 = 1;
        continue;
      }
      v29 = v45;
LABEL_38:
      v32 = !v29;
      v28 = 1244505051;
      if ( !v32 )
        v28 = 755917845;
      continue;
    }
    if ( v28 == -1910645380 )
    {
      v28 = 1649983578;
    }
    else if ( v28 == -1880825715 )
    {
      v28 = -947122550;
    }
    else
    {
      v28 = v60;
    }
  }
  if ( v28 <= -947122551 )
  {
    if ( v28 != -1395470792 )
    {
      v46 = v51 == s25;
      v28 = v59;
      goto LABEL_42;
    }
    v47 = s1[6];
    v31 = -1941193063;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_86:
          while ( 1 )
          {
            v33 = v31;
            if ( v31 <= -119704139 )
              break;
            if ( v31 <= 463229642 )
            {
              if ( v31 == -119704138 )
              {
                v31 = 307736452;
              }
              else
              {
                v31 = v73;
                if ( v33 != 194606459 )
                {
                  v31 = v33;
                  if ( v33 == 307736452 )
                    v31 = v63;
                }
              }
            }
            else
            {
              if ( v31 <= 1636371189 )
              {
                if ( v31 != 463229643 )
                {
                  v26 = v75;
                  v28 = 828367075;
                  goto LABEL_42;
                }
                v32 = v54 == s26;
              }
              else
              {
                if ( v31 != 1636371190 )
                {
                  v31 = -580987493;
                  v28 = 0;
                  continue;
                }
                v32 = (v54 & (v54 ^ 0x20)) == s26;
              }
              v31 = 1651838694;
              if ( v32 )
                v31 = -1958500130;
            }
          }
          if ( v31 <= -740902811 )
            break;
          if ( v31 > -671396951 )
          {
            if ( v31 == -671396950 )
            {
              v31 = 194606459;
            }
            else
            {
              v75 = v28;
              v31 = v64;
            }
          }
          else if ( v31 == -740902810 )
          {
            v31 = -580987493;
            v28 = 1;
          }
          else
          {
            v31 = v65;
          }
        }
        if ( v31 != -1958500130 )
          break;
        v31 = -1640349941;
        if ( !s26 )
          v31 = -690494020;
      }
      if ( v31 != -1941193063 )
        break;
      v54 = v47;
      v31 = 463229643;
      if ( (unsigned int)(s26 - 65) < 0x1A )
        v31 = 1636371190;
    }
    v34 = -1275946524;
LABEL_164:
    while ( v34 > -475015338 )
    {
      switch ( v34 )
      {
        case -475015337:
          v34 = 2086975741;
          v28 = 0;
          goto LABEL_108;
        case -48814260:
          v34 = 2103268265;
          goto LABEL_108;
        case 568902878:
          v35 = v55 == v52;
          goto LABEL_102;
      }
LABEL_107:
      if ( v34 > 1269457299 )
        goto LABEL_108;
    }
    if ( v34 != -1275946524 )
    {
      v34 = 2086975741;
      v28 = 1;
      goto LABEL_108;
    }
    v41 = -48814260;
    if ( v67 < 10 != (v66 == 0) )
      v41 = 2103268265;
    v34 = v41;
    if ( v67 < 10 )
      v34 = 2103268265;
    v40 = v66 != 0;
    while ( 1 )
    {
      if ( v40 )
        v34 = v41;
      if ( v34 <= 1269457299 )
        goto LABEL_164;
      while ( 1 )
      {
LABEL_108:
        while ( v34 > 1961110705 )
        {
          if ( v34 == 1961110706 )
          {
            v34 = 568902878;
            if ( v48 )
              v34 = 1767666481;
            if ( v34 <= 1269457299 )
              goto LABEL_164;
          }
          else
          {
            if ( v34 != 2103268265 )
            {
              v31 = -580987493;
              goto LABEL_86;
            }
            v52 = 0;
            v48 = 0;
            v55 = s1[7];
            v34 = v12;
            if ( v12 <= 1269457299 )
              goto LABEL_164;
          }
        }
        if ( v34 == 1269457300 )
          break;
        if ( v34 != 1767666481 )
        {
          if ( v34 != 1855557767 )
            goto LABEL_107;
          v36 = -1379664269;
LABEL_133:
          while ( v36 > -894549345 )
          {
            if ( v36 == -894549344 )
            {
              v53 = 0;
              v49 = 0;
              v56 = s1[8];
              v36 = v13;
              if ( v13 <= 61553906 )
                goto LABEL_133;
              goto LABEL_119;
            }
            if ( v36 != -432295367 )
            {
              if ( v36 == -103416626 )
              {
                v36 = 1323519481;
                v28 = 0;
                goto LABEL_119;
              }
              goto LABEL_118;
            }
            v36 = 61553907;
            if ( v49 )
              v36 = -1288171479;
            if ( v36 > 61553906 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
LABEL_119:
                      while ( v36 > 1094587903 )
                      {
                        if ( v36 == 1094587904 )
                        {
                          v36 = -894549344;
                          goto LABEL_133;
                        }
                        if ( v36 != 1560738343 )
                        {
                          v34 = 2086975741;
                          goto LABEL_108;
                        }
                        v28 = c_strcasecmp(s1 + 9, s2 + 9) == 0;
                        v36 = 1323519481;
                      }
                      if ( v36 != 61553907 )
                        break;
                      v37 = v56 == v53;
LABEL_113:
                      v36 = -103416626;
                      if ( v37 )
                        v36 = 474082419;
                      if ( v36 <= 61553906 )
                        goto LABEL_133;
                    }
                    if ( v36 != 179361575 )
                      break;
                    v36 = 1323519481;
                    v28 = 1;
                  }
                  if ( v36 == 474082419 )
                    break;
LABEL_118:
                  if ( v36 <= 61553906 )
                    goto LABEL_133;
                }
                v38 = v53 == 0;
                v36 = 1560738343;
                v39 = 179361575;
LABEL_130:
                if ( v38 )
                  v36 = v39;
                if ( v36 <= 61553906 )
                  goto LABEL_133;
              }
            }
          }
          if ( v36 != -1379664269 )
          {
            v37 = (v56 & (v56 ^ 0x20)) == v53;
            goto LABEL_113;
          }
          v39 = 1094587904;
          if ( v72 < 10 != (v71 == 0) )
            v39 = -894549344;
          v36 = v39;
          if ( v72 < 10 )
            v36 = -894549344;
          v38 = v71 != 0;
          goto LABEL_130;
        }
        v35 = (v55 & 0xFFFFFFDF) == v52;
LABEL_102:
        v34 = -475015337;
        if ( v35 )
          v34 = 1269457300;
        if ( v34 <= 1269457299 )
          goto LABEL_164;
      }
      v40 = v52 == 0;
      v34 = 1855557767;
      v41 = -1140270149;
    }
  }
  if ( v28 == -947122550 )
  {
    v45 = (v51 & 0xFFFFFFDF) == s25;
    v28 = v61;
    goto LABEL_42;
  }
  if ( v28 == -542736963 )
  {
    v29 = v46;
    goto LABEL_38;
  }
  return v74;
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
  int v13; // r15d
  int v14; // r12d
  int v15; // ebp
  int v16; // r14d
  int v17; // edx
  int v18; // ecx
  int i; // eax
  int v20; // ecx
  char *v21; // rax
  char *v22; // rax
  char *v23; // rax
  int v24; // esi
  int v25; // ecx
  char *v26; // rax
  unsigned int v27; // edx
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  int v37; // [rsp+0h] [rbp-68h]
  int v38; // [rsp+4h] [rbp-64h]
  int v39; // [rsp+8h] [rbp-60h]
  int v40; // [rsp+Ch] [rbp-5Ch]
  int v41; // [rsp+10h] [rbp-58h]
  int v42; // [rsp+14h] [rbp-54h]
  int v43; // [rsp+18h] [rbp-50h]
  int v44; // [rsp+1Ch] [rbp-4Ch]

  v7 = 18243180;
  if ( command_name )
    v7 = 155913100;
  v43 = v7;
  v8 = -929470381;
  if ( (__int64)n_authors < 5 )
    v8 = -1542028811;
  v42 = v8;
  v9 = 335022304;
  if ( (__int64)n_authors < 7 )
    v9 = -1066878403;
  v41 = v9;
  v10 = 755416464;
  if ( (__int64)n_authors < 8 )
    v10 = -1069195538;
  v40 = v10;
  v11 = 1483252784;
  if ( (__int64)n_authors < 9 )
    v11 = 1659953613;
  v39 = v11;
  v12 = 952249201;
  if ( n_authors != 9 )
    v12 = -1546525624;
  v44 = v12;
  v13 = 581831529;
  if ( (__int64)n_authors < 6 )
    v13 = -1696041287;
  v14 = 1870145437;
  if ( (__int64)n_authors < 2 )
    v14 = -1317203894;
  v15 = 441288700;
  if ( (__int64)n_authors < 3 )
    v15 = -890182578;
  v16 = -1289649119;
  if ( (__int64)n_authors < 4 )
    v16 = 523992292;
  v17 = -1355000116;
  if ( (__int64)n_authors <= 0 )
    v17 = -868053535;
  v38 = v17;
  v18 = 1741841283;
  if ( n_authors )
    v18 = -1546525624;
  v37 = v18;
  for ( i = 1203316159; ; i = 1741841283 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v20 = i;
            if ( i > 314263371 )
              break;
            if ( i <= -1066878404 )
            {
              if ( i > -1355000117 )
              {
                if ( i > -1289649120 )
                {
                  if ( i == -1289649119 )
                    v28 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
                  else
                    v28 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
                  __fprintf_chk(stream, 1LL, v28, *authors);
                  i = 1741841283;
                }
                else if ( i == -1355000116 )
                {
                  v31 = dcgettext(0LL, "Written by %s.\n", 5);
                  __fprintf_chk(stream, 1LL, v31, *authors);
                  i = 1741841283;
                }
                else
                {
                  i = v38;
                }
              }
              else if ( i > -1542028812 )
              {
                i = v14;
                if ( v20 != -1542028811 )
                {
                  v23 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
                  __fprintf_chk(stream, 1LL, v23, *authors);
                  v24 = y;
                  v25 = 197908058;
                  if ( (((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0) != y < 10 )
                    v25 = 1843474097;
                  i = v25;
                  if ( ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0 )
                    i = 1843474097;
                  goto LABEL_26;
                }
              }
              else if ( i == -1696041287 )
              {
                i = 69952751;
                if ( (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1 )
                  i = 314263372;
                if ( y >= 10 )
                  i = 69952751;
                if ( ((~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1) != y < 10 )
                  i = 314263372;
              }
              else
              {
                i = 1942485699;
              }
            }
            else if ( i <= -150745455 )
            {
              if ( i > -890182579 )
              {
                if ( i == -890182578 )
                {
                  v35 = dcgettext(0LL, "Written by %s and %s.\n", 5);
                  __fprintf_chk(stream, 1LL, v35, *authors);
                  i = 1741841283;
                }
                else
                {
                  i = v37;
                }
              }
              else
              {
                i = v13;
                if ( v20 != -1066878403 )
                  i = v41;
              }
            }
            else if ( i <= 69952750 )
            {
              if ( i == -150745454 )
              {
                v33 = dcgettext(0LL, "(C)", 5);
                __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v33);
                v34 = dcgettext(
                        0LL,
                        "\n"
                        "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
                        "This is free software: you are free to change and redistribute it.\n"
                        "There is NO WARRANTY, to the extent permitted by law.\n"
                        "\n",
                        5);
                fputs_unlocked(v34, stream);
                i = 1099448541;
              }
              else
              {
                __fprintf_chk(stream, 1LL, "%s %s\n", package);
                i = -150745454;
              }
            }
            else if ( i == 69952751 )
            {
              v29 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
              __fprintf_chk(stream, 1LL, v29, *authors);
              i = 314263372;
            }
            else if ( i == 155913100 )
            {
              __fprintf_chk(stream, 1LL, "%s (%s) %s\n", command_name);
              i = -150745454;
            }
            else
            {
              v21 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
              __fprintf_chk(stream, 1LL, v21, *authors);
              i = -1430747052;
            }
          }
          if ( i > 1128184342 )
            break;
          if ( i > 581831528 )
          {
            if ( i > 952249200 )
            {
              if ( i == 952249201 )
              {
                v36 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n", 5);
                __fprintf_chk(stream, 1LL, v36, *authors);
                i = 1741841283;
              }
              else
              {
                i = v42;
              }
            }
            else if ( i == 581831529 )
            {
              v32 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
              __fprintf_chk(stream, 1LL, v32, *authors);
              i = 1741841283;
            }
            else
            {
              i = v39;
            }
          }
          else if ( i > 441288699 )
          {
            i = v16;
            if ( v20 != 441288700 )
            {
              v26 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
              __fprintf_chk(stream, 1LL, v26, *authors);
              i = 1741841283;
            }
          }
          else if ( i == 314263372 )
          {
            v30 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
            __fprintf_chk(stream, 1LL, v30, *authors);
            i = 69952751;
            if ( (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1 )
              i = 1128184343;
            if ( y >= 10 )
              i = 69952751;
            if ( ((~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1) != y < 10 )
              i = 1128184343;
          }
          else
          {
            i = v40;
          }
        }
        if ( i > 1741841282 )
          break;
        if ( i > 1483252783 )
        {
          i = v44;
          if ( v20 != 1483252784 )
          {
            v24 = y;
            v27 = ~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE;
            v25 = 197908058;
            if ( (v27 == -1) != y < 10 )
              v25 = -1430747052;
            i = v25;
            if ( v27 == -1 )
              i = -1430747052;
LABEL_26:
            if ( v24 >= 10 )
              i = v25;
          }
        }
        else if ( i == 1128184343 )
        {
          i = 1741841283;
        }
        else
        {
          i = v43;
        }
      }
      if ( i <= 1870145436 )
        break;
      i = v15;
      if ( v20 != 1870145437 )
      {
        v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5);
        __fprintf_chk(stream, 1LL, v22, *authors);
        i = 1741841283;
      }
    }
    if ( i == 1741841283 )
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
  size_t v9; // rax
  int i; // eax
  unsigned int v11; // edx
  int v12; // esi
  int v13; // edx
  size_t n_authors; // [rsp+8h] [rbp-40h]
  size_t v15; // [rsp+10h] [rbp-38h]

  v9 = 0LL;
LABEL_2:
  v15 = v9;
  for ( i = -872658244; ; i = -1366382319 )
  {
LABEL_4:
    while ( i != -1366382319 )
    {
      if ( i != -872658244 )
      {
        v9 = n_authors + 1;
        goto LABEL_2;
      }
      n_authors = v15;
      i = -400244819;
      if ( authors[v15] )
        i = -994103284;
      if ( i > -400244820 )
        goto LABEL_16;
    }
    version_etc_arn(stream, command_name, package, version, authors, n_authors);
    v11 = ~((_BYTE)x_20 * ((_BYTE)x_20 - 1)) | 0xFFFFFFFE;
    v12 = 1515226092;
    if ( (v11 == -1) != y_21 < 10 )
      v12 = 1764415465;
    i = v12;
    if ( v11 == -1 )
      i = 1764415465;
    if ( y_21 >= 10 )
      i = v12;
LABEL_16:
    while ( i == -400244819 )
    {
      v13 = 1515226092;
      if ( (((x_20 * (x_20 - 1)) & ((x_20 * (x_20 - 1)) ^ 0xFFFFFFFE)) == 0) != y_21 < 10 )
        v13 = -1366382319;
      i = v13;
      if ( ((x_20 * (x_20 - 1)) & ((x_20 * (x_20 - 1)) ^ 0xFFFFFFFE)) == 0 )
        i = -1366382319;
      if ( y_21 >= 10 )
        i = v13;
      if ( i <= -400244820 )
        goto LABEL_4;
    }
    if ( i != 1515226092 )
      break;
    version_etc_arn(stream, command_name, package, version, authors, n_authors);
  }
}

void __fastcall version_etc_va(
        FILE *stream,
        const char *command_name,
        const char *package,
        const char *version,
        __va_list_tag *authors)
{
  char **overflow_arg_area; // r11
  int v6; // r13d
  size_t v7; // rdi
  bool v8; // zf
  int v9; // eax
  unsigned int v10; // ebp
  unsigned int v11; // edx
  unsigned int v12; // ecx
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  int v16; // eax
  bool v17; // [rsp+Eh] [rbp-DAh]
  bool v18; // [rsp+Fh] [rbp-D9h]
  size_t v19; // [rsp+10h] [rbp-D8h]
  signed int gp_offset; // [rsp+1Ch] [rbp-CCh]
  __va_list_tag *v21; // [rsp+28h] [rbp-C0h]
  char **v22; // [rsp+30h] [rbp-B8h]
  size_t v26; // [rsp+58h] [rbp-90h]
  char *v27[17]; // [rsp+60h] [rbp-88h] BYREF

  v6 = -213853822;
  v7 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_2:
          while ( v6 <= -971655025 )
          {
            if ( v6 <= -1921110091 )
            {
              if ( v6 == -2067431810 )
              {
                overflow_arg_area = (char **)authors->overflow_arg_area;
                authors->overflow_arg_area = overflow_arg_area + 1;
              }
              else
              {
                overflow_arg_area = (char **)((char *)authors->reg_save_area + gp_offset);
                v21->gp_offset = gp_offset + 8;
              }
              v6 = -38591859;
              goto LABEL_46;
            }
            if ( v6 == -1921110090 )
            {
              v12 = ~((_BYTE)x_22 * ((_BYTE)x_22 - 1)) | 0xFFFFFFFE;
              v6 = 333122277;
              if ( v12 == -1 )
                v6 = -286343134;
              if ( y_23 >= 10 )
                v6 = 333122277;
              if ( (v12 == -1) != y_23 < 10 )
                v6 = -286343134;
              if ( v6 > -38591860 )
                goto LABEL_46;
            }
            else
            {
              v8 = !v17;
              v6 = 2092383797;
              v9 = 1477130497;
LABEL_43:
              if ( !v8 )
                v6 = v9;
              if ( v6 > -38591860 )
                goto LABEL_46;
            }
          }
          if ( v6 > -286343135 )
            break;
          if ( v6 == -971655024 )
          {
            v17 = v19 < 0xA;
            v11 = ~((_BYTE)x_22 * ((_BYTE)x_22 - 1)) | 0xFFFFFFFE;
            v6 = -645658196;
            if ( v11 == -1 )
              v6 = -989621810;
            if ( y_23 >= 10 )
              v6 = -645658196;
            if ( (v11 == -1) != y_23 < 10 )
              v6 = -989621810;
          }
          else
          {
            v6 = -971655024;
          }
        }
        if ( v6 == -286343134 )
          break;
        v19 = v7;
        v10 = ~((_BYTE)x_22 * ((_BYTE)x_22 - 1)) | 0xFFFFFFFE;
        v6 = -645658196;
        if ( v10 == -1 )
          v6 = -971655024;
        if ( y_23 >= 10 )
          v6 = -645658196;
        if ( (v10 == -1) != y_23 < 10 )
          v6 = -971655024;
      }
      v26 = v19 + 1;
      v13 = 333122277;
      if ( (((x_22 * (x_22 - 1)) & ((x_22 * (x_22 - 1)) ^ 0xFFFFFFFE)) == 0) != y_23 < 10 )
        v13 = 1818378232;
      v6 = v13;
      if ( ((x_22 * (x_22 - 1)) & ((x_22 * (x_22 - 1)) ^ 0xFFFFFFFE)) == 0 )
        v6 = 1818378232;
      if ( y_23 >= 10 )
        v6 = v13;
LABEL_46:
      while ( v6 <= 1477130496 )
      {
        if ( v6 > 437775042 )
        {
          if ( v6 == 437775043 )
          {
            v27[v19] = *v22;
            v6 = 595318249;
          }
          else
          {
            v18 = *v22 != 0LL;
            v27[v19] = *v22;
            v14 = ~((_BYTE)x_22 * ((_BYTE)x_22 - 1)) | 0xFFFFFFFE;
            v6 = 437775043;
            if ( v14 == -1 )
              v6 = 1803675465;
            if ( y_23 >= 10 )
              v6 = 437775043;
            if ( (v14 == -1) != y_23 < 10 )
              v6 = 1803675465;
          }
        }
        else
        {
          if ( v6 != -38591859 )
          {
            v6 = -286343134;
            goto LABEL_2;
          }
          v22 = overflow_arg_area;
          v15 = (x_22 * (x_22 - 1)) & ((x_22 * (x_22 - 1)) ^ 0xFFFFFFFE);
          v16 = 437775043;
          if ( (v15 == 0) != y_23 < 10 )
            v16 = 595318249;
          v6 = v16;
          if ( !v15 )
            v6 = 595318249;
          if ( y_23 >= 10 )
            v6 = v16;
        }
      }
      if ( v6 > 1818378231 )
        break;
      if ( v6 != 1477130497 )
      {
        v8 = !v18;
        v6 = 2092383797;
        v9 = -1921110090;
        goto LABEL_43;
      }
      v21 = authors;
      gp_offset = authors->gp_offset;
      v6 = -2067431810;
      if ( authors->gp_offset < 0x29 )
        v6 = -2032162871;
    }
    if ( v6 != 1818378232 )
      break;
    v7 = v26;
    v6 = -213853822;
  }
  version_etc_arn(stream, command_name, package, version, (const char *const *)v27, v19);
}

void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm4
  __int128 v11; // xmm5
  __int128 v12; // xmm6
  __int128 v13; // xmm7
  int v16; // eax
  int v17; // edx
  int v18; // edx
  char v19[32]; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+20h] [rbp-C0h]
  __int64 v21; // [rsp+28h] [rbp-B8h]
  __int128 v22; // [rsp+30h] [rbp-B0h]
  __int128 v23; // [rsp+40h] [rbp-A0h]
  __int128 v24; // [rsp+50h] [rbp-90h]
  __int128 v25; // [rsp+60h] [rbp-80h]
  __int128 v26; // [rsp+70h] [rbp-70h]
  __int128 v27; // [rsp+80h] [rbp-60h]
  __int128 v28; // [rsp+90h] [rbp-50h]
  __int128 v29; // [rsp+A0h] [rbp-40h]
  char v30; // [rsp+B6h] [rbp-2Ah]
  char v31; // [rsp+B7h] [rbp-29h]
  char v32; // [rsp+F0h] [rbp+10h] BYREF

  v20 = v4;
  v21 = v5;
  v22 = v6;
  v23 = v7;
  v24 = v8;
  v25 = v9;
  v26 = v10;
  v27 = v11;
  v28 = v12;
  v29 = v13;
  v31 = ((x_24 * (x_24 - 1)) & ((x_24 * (x_24 - 1)) ^ 0xFFFFFFFE)) == 0;
  v30 = y_25 < 10;
  v16 = -1121573307;
  while ( v16 == -1121573307 )
  {
    v17 = 1474738804;
    if ( v30 != v31 )
      v17 = 1479757969;
    v16 = v17;
    if ( v30 )
      v16 = 1479757969;
    if ( !v31 )
      v16 = v17;
    do
    {
      while ( v16 == 1474738804 )
      {
        *(_QWORD *)&v19[-16] = v19;
        *(_QWORD *)&v19[-24] = &v32;
        *(_DWORD *)&v19[-28] = 48;
        *(_DWORD *)&v19[-32] = 32;
        version_etc_va(stream, command_name, package, version, (__va_list_tag *)&v19[-32]);
        v16 = 1479757969;
      }
      *(_QWORD *)&v19[-16] = v19;
      *(_QWORD *)&v19[-24] = &v32;
      *(_DWORD *)&v19[-28] = 48;
      *(_DWORD *)&v19[-32] = 32;
      version_etc_va(stream, command_name, package, version, (__va_list_tag *)&v19[-32]);
      v18 = 1474738804;
      if ( (((x_24 * (x_24 - 1)) & ((x_24 * (x_24 - 1)) ^ 0xFFFFFFFE)) == 0) != y_25 < 10 )
        v18 = 1363012417;
      v16 = v18;
      if ( ((x_24 * (x_24 - 1)) & ((x_24 * (x_24 - 1)) ^ 0xFFFFFFFE)) == 0 )
        v16 = 1363012417;
      if ( y_25 >= 10 )
        v16 = v18;
    }
    while ( v16 > 1474738803 );
  }
}

void __cdecl emit_bug_reporting_address()
{
  int v0; // eax
  char *v1; // rax
  char *v2; // rax
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  int v7; // edx
  int v8; // edx
  char v9; // [rsp+Eh] [rbp-1Ah]
  char v10; // [rsp+Fh] [rbp-19h]

  v9 = ((x_26 * (x_26 - 1)) & ((x_26 * (x_26 - 1)) ^ 0xFFFFFFFE)) == 0;
  v10 = y_27 < 10;
  v0 = 1573923234;
  while ( v0 == 1573923234 )
  {
    v8 = -961510520;
    if ( v10 != v9 )
      v8 = -74836896;
    v0 = v8;
    if ( v10 )
      v0 = -74836896;
    if ( !v9 )
      v0 = v8;
    do
    {
      while ( v0 == -961510520 )
      {
        v1 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
        __printf_chk(1LL, v1, "bug-coreutils@gnu.org");
        v2 = dcgettext(0LL, "%s home page: <%s>\n", 5);
        __printf_chk(1LL, v2, "GNU coreutils");
        v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
        fputs_unlocked(v3, stdout);
        v0 = -74836896;
      }
      v4 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
      __printf_chk(1LL, v4, "bug-coreutils@gnu.org");
      v5 = dcgettext(0LL, "%s home page: <%s>\n", 5);
      __printf_chk(1LL, v5, "GNU coreutils");
      v6 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
      fputs_unlocked(v6, stdout);
      v7 = -961510520;
      if ( (((x_26 * (x_26 - 1)) & ((x_26 * (x_26 - 1)) ^ 0xFFFFFFFE)) == 0) != y_27 < 10 )
        v7 = 1449752707;
      v0 = v7;
      if ( ((x_26 * (x_26 - 1)) & ((x_26 * (x_26 - 1)) ^ 0xFFFFFFFE)) == 0 )
        v0 = 1449752707;
      if ( y_27 >= 10 )
        v0 = v7;
    }
    while ( v0 <= 1449752706 );
  }
}

void *__fastcall xnmalloc(size_t n, size_t s)
{
  bool v2; // r8
  int v3; // r10d
  unsigned int v4; // edx
  int v5; // r12d
  int v6; // eax
  int v7; // ebp
  char v8; // cl
  int v9; // ebx
  int v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  int v18; // r14d
  void *v19; // rax
  int v20; // edx
  int v21; // eax
  int v22; // r13d
  void *v23; // rax
  bool v25; // [rsp+7h] [rbp-61h]
  bool v26; // [rsp+7h] [rbp-61h]
  char v27; // [rsp+8h] [rbp-60h]
  char v28; // [rsp+9h] [rbp-5Fh]
  char v29; // [rsp+Ah] [rbp-5Eh]
  bool v30; // [rsp+Bh] [rbp-5Dh]
  void *v31; // [rsp+10h] [rbp-58h]
  size_t size; // [rsp+18h] [rbp-50h]
  void *v35; // [rsp+30h] [rbp-38h]

  v28 = ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0;
  v29 = y < 10;
  v3 = y_2;
  v4 = ~((_BYTE)x_1 * ((_BYTE)x_1 - 1)) | 0xFFFFFFFE;
  v5 = -863508610;
  v6 = -1181744151;
  if ( (v4 == -1) != y_2 < 10 )
    v6 = -863508610;
  if ( v4 != -1 )
    v5 = v6;
  if ( y_2 >= 10 )
    v5 = v6;
  size = n * s;
  v7 = ((_BYTE)x_1 * ((_BYTE)x_1 - 1)) & 1;
  v2 = ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0;
  v8 = (v2 && y < 10) | v2 ^ (y < 10);
  v9 = -1715246009;
  if ( !v8 )
    v9 = 1522290683;
  v10 = 1758106596;
  if ( !v8 )
    v10 = 1262015372;
  v11 = -1299527252;
  if ( !v8 )
    v11 = 1262015372;
  v12 = 231544461;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = v12;
        if ( v12 <= 1262015371 )
          break;
        if ( v12 > 1758106595 )
        {
          if ( v12 == 1758106596 )
          {
            v26 = v3 < 10;
            v16 = 1955552268;
            while ( 1 )
            {
              while ( 1 )
              {
                v21 = v16;
                if ( v16 > 377401637 )
                  break;
                v16 = 246186571;
                if ( v21 != -1181744151 )
                {
                  if ( v21 == -863508610 )
                  {
                    v16 = 1116265007;
                    if ( v27 )
                      v16 = 377401638;
                  }
                  else
                  {
                    if ( v21 != 246186571 )
                    {
                      while ( 1 )
                        ;
                    }
                    v22 = v3;
                    v23 = malloc(size);
                    v3 = v22;
                    v31 = v23;
                    v27 = (size != 0) & ~((size != 0) ^ (v23 == 0LL));
                    v16 = v5;
                  }
                }
              }
              if ( v16 == 1116265007 )
                break;
              if ( v16 != 1955552268 )
                xalloc_die();
              v16 = -1181744151;
              if ( v26 )
                v16 = 246186571;
              if ( v7 )
                v16 = -1181744151;
              if ( v26 != (v7 == 0) )
                v16 = 246186571;
            }
            v35 = v31;
            v12 = v11;
          }
          else
          {
            v30 = 0x7FFFFFFFFFFFFFFFLL / s < n;
            v12 = v9;
          }
        }
        else if ( v12 == 1262015372 )
        {
          v25 = v3 < 10;
          v15 = 1955552268;
          while ( 1 )
          {
            while ( 1 )
            {
              v17 = v15;
              if ( v15 > 377401637 )
                break;
              v15 = 246186571;
              if ( v17 != -1181744151 )
              {
                if ( v17 == -863508610 )
                {
                  v15 = 1116265007;
                  if ( v27 )
                    v15 = 377401638;
                }
                else
                {
                  if ( v17 != 246186571 )
                  {
                    while ( 1 )
                      ;
                  }
                  v18 = v3;
                  v19 = malloc(size);
                  v3 = v18;
                  v31 = v19;
                  v27 = size != 0 && v19 == 0LL;
                  v15 = v5;
                }
              }
            }
            if ( v15 == 1116265007 )
              break;
            if ( v15 != 1955552268 )
              xalloc_die();
            v20 = -1181744151;
            if ( v25 != (v7 == 0) )
              v20 = 246186571;
            v15 = v20;
            if ( v25 )
              v15 = 246186571;
            if ( v7 )
              v15 = v20;
          }
          v12 = 1758106596;
        }
        else
        {
          v12 = 1873053270;
        }
      }
      if ( v12 <= -866527225 )
        break;
      v12 = v10;
      if ( v13 != -866527224 )
      {
        if ( v13 == 231544461 )
        {
          v14 = 1522290683;
          if ( v29 != v28 )
            v14 = 1873053270;
          v12 = v14;
          if ( v29 )
            v12 = 1873053270;
          if ( !v28 )
            v12 = v14;
        }
        else
        {
          v12 = v13;
          if ( v13 == -445214973 )
            xalloc_die();
        }
      }
    }
    if ( v12 != -1715246009 )
      break;
    v12 = -866527224;
    if ( v30 )
      v12 = -445214973;
  }
  return v35;
}

void *__fastcall xmalloc(size_t n)
{
  unsigned int v1; // edx
  int v2; // ebp
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  char v8; // [rsp+5h] [rbp-33h]
  char v9; // [rsp+6h] [rbp-32h]
  char v10; // [rsp+7h] [rbp-31h]
  void *v11; // [rsp+8h] [rbp-30h]

  v1 = ~((_BYTE)x_1 * ((_BYTE)x_1 - 1)) | 0xFFFFFFFE;
  v2 = -863508610;
  v3 = -1181744151;
  if ( (v1 == -1) != y_2 < 10 )
    v3 = -863508610;
  v8 = v1 == -1;
  if ( v1 != -1 )
    v2 = v3;
  v9 = y_2 < 10;
  if ( y_2 >= 10 )
    v2 = v3;
  v4 = 1955552268;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = v4;
      if ( v4 > 377401637 )
        break;
      v4 = 246186571;
      if ( v5 != -1181744151 )
      {
        if ( v5 == -863508610 )
        {
          v4 = 1116265007;
          if ( v10 )
            v4 = 377401638;
        }
        else
        {
          if ( v5 != 246186571 )
          {
            while ( 1 )
              ;
          }
          v11 = malloc(n);
          v10 = (n != 0) & ~((n != 0) ^ (v11 == 0LL));
          v4 = v2;
        }
      }
    }
    if ( v4 == 1116265007 )
      break;
    if ( v4 != 1955552268 )
      xalloc_die();
    v6 = -1181744151;
    if ( v9 != v8 )
      v6 = 246186571;
    v4 = v6;
    if ( v9 )
      v4 = 246186571;
    if ( !v8 )
      v4 = v6;
  }
  return v11;
}

void *__fastcall xnrealloc(void *p, size_t n, size_t s)
{
  int v4; // edx
  int v5; // edx
  size_t v7; // [rsp+0h] [rbp-8h]

  v7 = 0x7FFFFFFFFFFFFFFFLL / s;
  v4 = -974074979;
  while ( 1 )
  {
    v5 = v4 & 0x7FFFFFFF;
    if ( v5 == 914490825 )
      break;
    if ( v5 != 1173408669 )
    {
      if ( v5 != 1891527517 )
      {
        while ( 1 )
          ;
      }
      xalloc_die();
    }
    v4 = -1232992823;
    if ( v7 < n )
      v4 = -255956131;
  }
  return xrealloc(p, n * s);
}

void *__fastcall xrealloc(void *p, size_t n)
{
  void *v2; // r12
  int v4; // eax
  unsigned int v5; // edx
  int v6; // esi
  bool v8; // [rsp+6h] [rbp-42h]
  void *v9; // [rsp+8h] [rbp-40h]
  void *v10; // [rsp+10h] [rbp-38h]

  v8 = n == 0;
  v4 = 1215426340;
  while ( 1 )
  {
LABEL_29:
    if ( v4 <= 1215426339 )
    {
      if ( v4 == 564799470 )
      {
        v4 = -255578505;
        v2 = v9;
      }
      else
      {
        v4 = -1769196110;
      }
      goto LABEL_2;
    }
    if ( v4 == 1630212183 )
      return v10;
    v4 = -828339558;
    if ( p )
      v4 = -1003834062;
    if ( !v8 )
      v4 = -828339558;
    while ( 1 )
    {
LABEL_2:
      while ( v4 > -828339559 )
      {
        if ( v4 == -828339558 )
        {
          v9 = realloc(p, n);
          v4 = 564799470;
          if ( n )
            v4 = -1068341758;
          if ( (v9 == 0LL) != (n != 0) )
            v4 = 564799470;
          if ( v4 > 564799469 )
            goto LABEL_29;
        }
        else
        {
          v10 = v2;
          v4 = 943826351;
          if ( (~((_BYTE)x_5 * ((_BYTE)x_5 - 1)) | 0xFFFFFFFE) == -1 )
            v4 = -1769196110;
          if ( y_6 >= 10 )
            v4 = 943826351;
          if ( ((~((_BYTE)x_5 * ((_BYTE)x_5 - 1)) | 0xFFFFFFFE) == -1) != y_6 < 10 )
            v4 = -1769196110;
          if ( v4 > 564799469 )
            goto LABEL_29;
        }
      }
      if ( v4 == -1769196110 )
        break;
      if ( v4 != -1003834062 )
        xalloc_die();
      free(p);
      v4 = -255578505;
      v2 = 0LL;
    }
    v5 = ~((_BYTE)x_5 * ((_BYTE)x_5 - 1)) | 0xFFFFFFFE;
    v6 = 943826351;
    if ( (v5 == -1) != y_6 < 10 )
      v6 = 1630212183;
    v4 = v6;
    if ( v5 == -1 )
      v4 = 1630212183;
    if ( y_6 >= 10 )
      v4 = v6;
  }
}

void *__fastcall x2nrealloc(void *p, size_t *pn, size_t s)
{
  size_t v3; // r8
  size_t v5; // rdx
  int v6; // ebp
  int v7; // r15d
  int v8; // ebx
  int v9; // ecx
  int v10; // r11d
  int v11; // r12d
  int v12; // r13d
  int v13; // eax
  int v14; // edx
  int v15; // edx
  bool v17; // [rsp+4h] [rbp-64h]
  bool v18; // [rsp+6h] [rbp-62h]
  bool v19; // [rsp+7h] [rbp-61h]
  size_t v20; // [rsp+8h] [rbp-60h]
  size_t v21; // [rsp+10h] [rbp-58h]
  size_t v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+30h] [rbp-38h]

  v5 = (unsigned int)y_8;
  v17 = ((x_7 * (x_7 - 1)) & ((x_7 * (x_7 - 1)) ^ 0xFFFFFFFE)) == 0;
  LOBYTE(v5) = (v17 && y_8 < 10) | v17 ^ (y_8 < 10);
  v6 = 887358405;
  if ( !(_BYTE)v5 )
    v6 = -1726617386;
  v7 = 1882320974;
  if ( !((v17 && y_8 < 10) | v17 ^ (y_8 < 10)) )
    v7 = 282502931;
  v8 = -1632092335;
  if ( !((v17 && y_8 < 10) | v17 ^ (y_8 < 10)) )
    v8 = 282502931;
  v9 = 839947006;
  if ( !((v17 && y_8 < 10) | v17 ^ (y_8 < 10)) )
    v9 = -884884609;
  v10 = 1746944594;
  if ( !((v17 && y_8 < 10) | v17 ^ (y_8 < 10)) )
    v10 = -884884609;
  v11 = 1159156005;
  if ( !((v17 && y_8 < 10) | v17 ^ (y_8 < 10)) )
    v11 = -1887085397;
  v12 = 238573340;
  if ( !((v17 && y_8 < 10) | v17 ^ (y_8 < 10)) )
    v12 = -1887085397;
  v13 = -1769061413;
LABEL_16:
  v21 = v5;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v14 = v13;
          if ( v13 <= -884884610 )
            break;
          if ( v13 <= 1150795964 )
          {
            if ( v13 <= 282502930 )
            {
              if ( v13 == -884884609 )
              {
                v13 = 839947006;
              }
              else
              {
                v13 = -1424588525;
                v3 = v23;
              }
            }
            else if ( v13 == 282502931 )
            {
              v13 = 1882320974;
            }
            else if ( v13 == 839947006 )
            {
              v19 = 0x5555555555555554LL / s <= v20;
              v13 = v10;
            }
            else
            {
              v13 = -1068602291;
              if ( v18 )
                v13 = -1563472918;
            }
          }
          else if ( v13 <= 1397595309 )
          {
            if ( v13 == 1159156005 )
            {
              v23 = (v20 >> 1) + v20 + 1;
              v13 = v12;
            }
            else
            {
              if ( v13 != 1309444853 )
                xalloc_die();
              v3 = v21;
              v13 = -1424588525;
              if ( 0x7FFFFFFFFFFFFFFFLL / s < v21 )
                v13 = -2143047344;
            }
          }
          else
          {
            v13 = v7;
            if ( v14 != 1397595310 )
            {
              if ( v14 == 1746944594 )
              {
                v13 = -1102502546;
                if ( v19 )
                  v13 = 1150795965;
              }
              else
              {
                v22 = 0x80 / s + (s > 0x80);
                v13 = v8;
              }
            }
          }
        }
        if ( v13 > -1563472919 )
          break;
        if ( v13 > -1726617387 )
        {
          if ( v13 != -1726617386 )
          {
            v13 = 1309444853;
            v5 = v22;
            goto LABEL_16;
          }
          v13 = -1333805642;
        }
        else if ( v13 == -1887085397 )
        {
          v13 = 1159156005;
        }
        else
        {
          if ( v13 != -1769061413 )
            xalloc_die();
          v15 = -1726617386;
          if ( y_8 < 10 != v17 )
            v15 = -1333805642;
          v13 = v15;
          if ( y_8 < 10 )
            v13 = -1333805642;
          if ( ((x_7 * (x_7 - 1)) & ((x_7 * (x_7 - 1)) ^ 0xFFFFFFFE)) != 0 )
            v13 = v15;
        }
      }
      if ( v13 <= -1333805643 )
        break;
      if ( v13 == -1333805642 )
      {
        v20 = *pn;
        v18 = p != 0LL;
        v13 = v6;
      }
      else
      {
        v13 = v11;
        if ( v14 != -1102502546 )
        {
          v13 = v14;
          if ( v14 == -1068602291 )
          {
            v13 = 1397595310;
            if ( v20 )
              v13 = 1309444853;
            v5 = v20;
            goto LABEL_16;
          }
        }
      }
    }
    v13 = v9;
  }
  while ( v14 == -1563472918 );
  *pn = v3;
  return xrealloc(p, v3 * s);
}

char *__fastcall xcharalloc(size_t n)
{
  int v1; // ebp
  int v2; // eax
  int v3; // ecx
  char v5; // [rsp+5h] [rbp-33h]
  char v6; // [rsp+6h] [rbp-32h]
  bool v7; // [rsp+7h] [rbp-31h]
  char *v8; // [rsp+8h] [rbp-30h]

  v5 = (~((_BYTE)x_1 * ((_BYTE)x_1 - 1)) | 0xFFFFFFFE) == -1;
  v1 = -1181744151;
  if ( (~((_BYTE)x_1 * ((_BYTE)x_1 - 1)) | 0xFFFFFFFE) == -1 )
    v1 = -863508610;
  v6 = y_2 < 10;
  if ( y_2 >= 10 )
    v1 = -1181744151;
  if ( ((~((_BYTE)x_1 * ((_BYTE)x_1 - 1)) | 0xFFFFFFFE) == -1) != y_2 < 10 )
    v1 = -863508610;
  v2 = 1955552268;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = v2;
      if ( v2 > 377401637 )
        break;
      v2 = 246186571;
      if ( v3 != -1181744151 )
      {
        if ( v3 == -863508610 )
        {
          v2 = 1116265007;
          if ( v7 )
            v2 = 377401638;
        }
        else
        {
          if ( v3 != 246186571 )
          {
            while ( 1 )
              ;
          }
          v8 = (char *)malloc(n);
          v7 = n != 0 && v8 == 0LL;
          v2 = v1;
        }
      }
    }
    if ( v2 == 1116265007 )
      break;
    if ( v2 != 1955552268 )
      xalloc_die();
    v2 = -1181744151;
    if ( v6 )
      v2 = 246186571;
    if ( !v5 )
      v2 = -1181744151;
    if ( v6 != v5 )
      v2 = 246186571;
  }
  return v8;
}

void *__fastcall x2realloc(void *p, size_t *pn)
{
  return x2nrealloc(p, pn, 1uLL);
}

void *__fastcall xzalloc(size_t s)
{
  int v1; // ebx
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  char v6; // [rsp+Dh] [rbp-2Bh]
  char v7; // [rsp+Eh] [rbp-2Ah]
  bool v8; // [rsp+Fh] [rbp-29h]
  void *v9; // [rsp+10h] [rbp-28h]

  v6 = ((x_1 * (x_1 - 1)) & ((x_1 * (x_1 - 1)) ^ 0xFFFFFFFE)) == 0;
  v1 = -1181744151;
  if ( ((x_1 * (x_1 - 1)) & ((x_1 * (x_1 - 1)) ^ 0xFFFFFFFE)) == 0 )
    v1 = -863508610;
  v7 = y_2 < 10;
  if ( y_2 >= 10 )
    v1 = -1181744151;
  if ( (((x_1 * (x_1 - 1)) & ((x_1 * (x_1 - 1)) ^ 0xFFFFFFFE)) == 0) != y_2 < 10 )
    v1 = -863508610;
  v2 = 1955552268;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = v2;
      if ( v2 > 377401637 )
        break;
      v2 = 246186571;
      if ( v3 != -1181744151 )
      {
        if ( v3 == -863508610 )
        {
          v2 = 1116265007;
          if ( v8 )
            v2 = 377401638;
        }
        else
        {
          if ( v3 != 246186571 )
          {
            while ( 1 )
              ;
          }
          v9 = malloc(s);
          v8 = s != 0 && v9 == 0LL;
          v2 = v1;
        }
      }
    }
    if ( v2 == 1116265007 )
      break;
    if ( v2 != 1955552268 )
      xalloc_die();
    v4 = -1181744151;
    if ( v7 != v6 )
      v4 = 246186571;
    v2 = v4;
    if ( v7 )
      v2 = 246186571;
    if ( !v6 )
      v2 = v4;
  }
  memset(v9, 0, s);
  return v9;
}

void *__fastcall xcalloc(size_t n, size_t s)
{
  unsigned __int8 v2; // dl
  int v3; // ebp
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  char v9; // [rsp+Dh] [rbp-3Bh]
  char v10; // [rsp+Eh] [rbp-3Ah]
  bool v11; // [rsp+Fh] [rbp-39h]
  void *v12; // [rsp+10h] [rbp-38h]

  v9 = (~((_BYTE)x_15 * ((_BYTE)x_15 - 1)) | 0xFFFFFFFE) == -1;
  v10 = y_16 < 10;
  v2 = v9 & (y_16 < 10);
  v3 = -1899193104;
  if ( !(v2 | (unsigned __int8)(v9 ^ (y_16 < 10))) )
    v3 = -948567647;
  v4 = 759126504;
  if ( v2 | (unsigned __int8)(v9 ^ (y_16 < 10)) )
    v4 = 887134384;
  v5 = 871763969;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = v5;
        if ( v5 > 759126503 )
          break;
        if ( v5 > -796425051 )
        {
          v5 = v4;
          if ( v6 != -796425050 )
          {
            if ( v6 != -574992663 )
            {
              while ( 1 )
                ;
            }
            v11 = 0x7FFFFFFFFFFFFFFFLL / s < n;
            v5 = v3;
          }
        }
        else if ( v5 == -1899193104 )
        {
          v5 = 1688980526;
          if ( v11 )
            v5 = -796425050;
        }
        else
        {
          v5 = -574992663;
        }
      }
      if ( v5 > 1343901103 )
        break;
      if ( v5 != 871763969 )
      {
        if ( v5 != 759126504 )
          xalloc_die();
        xalloc_die();
      }
      v7 = -948567647;
      if ( v10 != v9 )
        v7 = -574992663;
      v5 = v7;
      if ( v10 )
        v5 = -574992663;
      if ( !v9 )
        v5 = v7;
    }
    if ( v5 == 1343901104 )
      break;
    v12 = calloc(n, s);
    v5 = -796425050;
    if ( v12 )
      v5 = 1343901104;
  }
  return v12;
}

void *__fastcall xmemdup(const void *p, size_t s)
{
  int v2; // ebx
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  char v7; // [rsp+Dh] [rbp-3Bh]
  char v8; // [rsp+Eh] [rbp-3Ah]
  bool v9; // [rsp+Fh] [rbp-39h]
  void *dest; // [rsp+10h] [rbp-38h]

  v7 = ((x_1 * (x_1 - 1)) & ((x_1 * (x_1 - 1)) ^ 0xFFFFFFFE)) == 0;
  v2 = -863508610;
  v3 = -1181744151;
  if ( v7 != y_2 < 10 )
    v3 = -863508610;
  if ( ((x_1 * (x_1 - 1)) & ((x_1 * (x_1 - 1)) ^ 0xFFFFFFFE)) != 0 )
    v2 = v3;
  v8 = y_2 < 10;
  if ( y_2 >= 10 )
    v2 = v3;
  v4 = 1955552268;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = v4;
      if ( v4 > 377401637 )
        break;
      v4 = 246186571;
      if ( v5 != -1181744151 )
      {
        if ( v5 == -863508610 )
        {
          v4 = 1116265007;
          if ( v9 )
            v4 = 377401638;
        }
        else
        {
          if ( v5 != 246186571 )
          {
            while ( 1 )
              ;
          }
          dest = malloc(s);
          v9 = s != 0 && dest == 0LL;
          v4 = v2;
        }
      }
    }
    if ( v4 == 1116265007 )
      break;
    if ( v4 != 1955552268 )
      xalloc_die();
    v4 = -1181744151;
    if ( v8 )
      v4 = 246186571;
    if ( !v7 )
      v4 = -1181744151;
    if ( v8 != v7 )
      v4 = 246186571;
  }
  memcpy(dest, p, s);
  return dest;
}

char *__fastcall xstrdup(const char *string)
{
  int v1; // eax
  __int64 i; // r15
  int v3; // edx
  size_t v4; // rbx
  unsigned int v5; // edx
  int v6; // ebp
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  __int64 v10; // r13
  size_t v11; // rax
  unsigned int v12; // esi
  int v13; // ecx
  int v14; // ebx
  size_t v15; // r15
  int v16; // ecx
  int v17; // eax
  char v19; // [rsp+3h] [rbp-45h]
  char v20; // [rsp+4h] [rbp-44h]
  bool v21; // [rsp+4h] [rbp-44h]
  char v22; // [rsp+5h] [rbp-43h]
  char v23; // [rsp+6h] [rbp-42h]
  char v24; // [rsp+7h] [rbp-41h]
  void *dest; // [rsp+8h] [rbp-40h]
  char *v26; // [rsp+10h] [rbp-38h]

  v23 = (~((_BYTE)x_19 * ((_BYTE)x_19 - 1)) | 0xFFFFFFFE) == -1;
  v24 = y_20 < 10;
  v1 = -263366207;
  for ( i = 0x3297321C0736F960LL; ; i = v10 )
  {
    if ( v1 <= 263356395 )
    {
      while ( v1 != -921520188 )
      {
        v3 = -921520188;
        if ( v24 != v23 )
          v3 = 1124031365;
        v1 = v3;
        if ( v24 )
          v1 = 1124031365;
        if ( !v23 )
          v1 = v3;
        if ( v1 > 263356395 )
          goto LABEL_43;
      }
      v4 = strlen(string) + 1;
      v5 = ~((_BYTE)x_1 * ((_BYTE)x_1 - 1)) | 0xFFFFFFFE;
      v19 = v5 == -1;
      v6 = -1181744151;
      if ( v5 == -1 )
        v6 = -863508610;
      v20 = y_2 < 10;
      if ( y_2 >= 10 )
        v6 = -1181744151;
      if ( (v5 == -1) != y_2 < 10 )
        v6 = -863508610;
      v7 = 1955552268;
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = v7;
          if ( v7 > 377401637 )
            break;
          v7 = 246186571;
          if ( v8 != -1181744151 )
          {
            if ( v8 == -863508610 )
            {
              v7 = 1116265007;
              if ( v22 )
                v7 = 377401638;
            }
            else
            {
              if ( v8 != 246186571 )
              {
                while ( 1 )
                  ;
              }
              dest = malloc(v4);
              v22 = v4 != 0 && dest == 0LL;
              v7 = v6;
            }
          }
        }
        if ( v7 == 1116265007 )
          break;
        if ( v7 != 1955552268 )
          xalloc_die();
        v9 = -1181744151;
        if ( v20 != v19 )
          v9 = 246186571;
        v7 = v9;
        if ( v20 )
          v7 = 246186571;
        if ( !v19 )
          v7 = v9;
      }
      memcpy(dest, string, v4);
      v1 = 1124031365;
    }
LABEL_43:
    if ( v1 != 1124031365 )
      break;
    v10 = i;
    v11 = strlen(string);
    v12 = ~((_BYTE)x_1 * ((_BYTE)x_1 - 1)) | 0xFFFFFFFE;
    v13 = -1181744151;
    if ( (v12 == -1) != y_2 < 10 )
      v13 = -863508610;
    v14 = v13;
    if ( v12 == -1 )
      v14 = -863508610;
    v21 = y_2 < 10;
    if ( y_2 >= 10 )
      v14 = v13;
    v15 = v11 + 1;
    v16 = 1955552268;
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = v16;
        if ( v16 > 377401637 )
          break;
        v16 = 246186571;
        if ( v17 != -1181744151 )
        {
          if ( v17 == -863508610 )
          {
            v16 = 1116265007;
            if ( v22 )
              v16 = 377401638;
          }
          else
          {
            if ( v17 != 246186571 )
            {
              while ( 1 )
                ;
            }
            dest = malloc(v15);
            v22 = (v15 != 0) & ~((v15 != 0) ^ (dest == 0LL));
            v16 = v14;
          }
        }
      }
      if ( v16 == 1116265007 )
        break;
      if ( v16 != 1955552268 )
        xalloc_die();
      v16 = -1181744151;
      if ( v21 )
        v16 = 246186571;
      if ( v12 != -1 )
        v16 = -1181744151;
      if ( v21 != (v12 == -1) )
        v16 = 246186571;
    }
    memcpy(dest, string, v15);
    v26 = (char *)dest;
    v1 = -921520188;
    if ( (~((_BYTE)x_19 * ((_BYTE)x_19 - 1)) | 0xFFFFFFFE) == -1 )
      v1 = 263356396;
    if ( y_20 >= 10 )
      v1 = -921520188;
    if ( ((~((_BYTE)x_19 * ((_BYTE)x_19 - 1)) | 0xFFFFFFFE) == -1) != y_20 < 10 )
      v1 = 263356396;
  }
  return v26;
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
  wchar_t *v4; // r12
  size_t v5; // r13
  int v7; // eax
  unsigned int v8; // edx
  int v9; // esi
  int v10; // edx
  size_t v11; // rbx
  bool v12; // zf
  mbstate_t *p; // [rsp+0h] [rbp-60h] BYREF
  size_t na; // [rsp+8h] [rbp-58h]
  size_t v16; // [rsp+10h] [rbp-50h]
  mbstate_t **v17; // [rsp+18h] [rbp-48h]
  mbstate_t **v18; // [rsp+20h] [rbp-40h]
  wchar_t *v19; // [rsp+28h] [rbp-38h]
  bool v20; // [rsp+35h] [rbp-2Bh]
  char v21; // [rsp+36h] [rbp-2Ah]
  char v22; // [rsp+37h] [rbp-29h]

  p = ps;
  na = n;
  v22 = ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0;
  v21 = y < 10;
  v7 = 1834788410;
  do
  {
LABEL_33:
    while ( v7 <= 1832197040 )
    {
      if ( v7 == 1297486606 )
      {
        *v19 = *(unsigned __int8 *)s;
        v7 = 1500350653;
      }
      else
      {
        if ( v7 != 1500350653 )
        {
          v7 = -93696979;
          v5 = v16;
          goto LABEL_5;
        }
        *v19 = *(unsigned __int8 *)s;
        v7 = 1297486606;
        if ( (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1 )
          v7 = -496598999;
        if ( y >= 10 )
          v7 = 1297486606;
        if ( ((~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1) != y < 10 )
          v7 = -496598999;
        if ( v7 <= 1297486605 )
          goto LABEL_5;
      }
    }
    if ( v7 == 1832197041 )
    {
      v7 = 1181263152;
      if ( v20 )
        v7 = 914168069;
      v4 = pwc;
      goto LABEL_5;
    }
    if ( v7 != 2054234891 )
    {
      v7 = 234106021;
      if ( v21 )
        v7 = -1137101501;
      if ( !v22 )
        v7 = 234106021;
      if ( v21 != v22 )
        v7 = -1137101501;
      goto LABEL_5;
    }
    v12 = !hard_locale(0);
    v7 = 505748013;
LABEL_2:
    if ( !v12 )
      v7 = 1677839343;
  }
  while ( v7 > 1297486605 );
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_5:
      while ( v7 > 505748012 )
      {
        if ( v7 == 505748013 )
        {
          v10 = 1297486606;
          if ( (((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0) != y < 10 )
            v10 = 1500350653;
          v7 = v10;
          if ( ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0 )
            v7 = 1500350653;
          if ( y >= 10 )
            v7 = v10;
          goto LABEL_33;
        }
        if ( v7 == 914168069 )
        {
          v19 = v4;
          v11 = na;
          v16 = mbrtowc(v4, s, na, p);
          v7 = 1677839343;
          if ( v11 )
            v7 = 2054234891;
          v12 = v16 > 0xFFFFFFFFFFFFFFFDLL == (v11 != 0);
          goto LABEL_2;
        }
        v7 = 914168069;
        v4 = (wchar_t *)v18;
      }
      if ( v7 > -93696980 )
        break;
      if ( v7 == -1137101501 )
      {
        v18 = &p - 2;
        v17 = &p - 2;
        v20 = pwc != 0LL;
        v8 = ~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE;
        v9 = 234106021;
        if ( (v8 == -1) != y < 10 )
          v9 = 1832197041;
        v7 = v9;
        if ( v8 == -1 )
          v7 = 1832197041;
        if ( y >= 10 )
          v7 = v9;
        if ( v7 > 1297486605 )
          goto LABEL_33;
      }
      else
      {
        v7 = -93696979;
        v5 = 1LL;
      }
    }
    if ( v7 != 234106021 )
      return v5;
    v7 = -1137101501;
  }
}

int __fastcall c_strcasecmp(const char *s1, const char *s2)
{
  const char *v2; // r13
  const char *v3; // r14
  unsigned int v4; // edx
  bool v5; // r11
  bool v6; // r10
  int v7; // r9d
  int result; // eax
  int v9; // r12d
  int v10; // ecx
  int v11; // ebx
  int v12; // edx
  int v13; // ebp
  unsigned __int8 v14; // dl
  int v15; // ebx
  unsigned __int8 v16; // [rsp+1h] [rbp-59h]
  bool v17; // [rsp+2h] [rbp-58h]
  bool v18; // [rsp+4h] [rbp-56h]
  bool v19; // [rsp+5h] [rbp-55h]
  int v20; // [rsp+6h] [rbp-54h]
  const char *v21; // [rsp+Ah] [rbp-50h]
  const char *v22; // [rsp+12h] [rbp-48h]
  const char *v23; // [rsp+1Ah] [rbp-40h]
  const char *v24; // [rsp+22h] [rbp-38h]

  v4 = ~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE;
  v5 = v4 == -1;
  v6 = v4 != -1;
  v7 = -54178703;
  result = -1183267216;
  if ( v5 != y < 10 )
    result = -54178703;
  v17 = v4 == -1;
  if ( v4 != -1 )
    v7 = result;
  if ( y >= 10 )
    v7 = result;
  v9 = -891864029;
  v10 = -788734334;
  if ( v6 || y > 9 )
    v10 = -891864029;
  else
    v9 = -1270983325;
  if ( v5 != y < 10 )
    v10 = -788734334;
  LOBYTE(result) = v6 ^ (y > 9);
  if ( (_BYTE)result )
    v9 = -1270983325;
  v11 = -2118262999;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = v11;
          if ( v11 > -533384152 )
            break;
          if ( v11 > -891864030 )
          {
            if ( v11 == -891864029 )
            {
              v11 = -788734334;
            }
            else if ( v11 == -788734334 )
            {
              v23 = v21 + 1;
              v24 = v22 + 1;
              v19 = v20 == v16;
              v11 = v9;
            }
            else
            {
              v11 = 2128001645;
              result = 0;
            }
          }
          else if ( v11 == -2118262999 )
          {
            v11 = -1183267216;
            if ( y < 10 )
              v11 = -533384151;
            if ( !v17 )
              v11 = -1183267216;
            if ( y < 10 != v17 )
              v11 = -533384151;
          }
          else if ( v11 == -1270983325 )
          {
            v11 = 378017066;
            if ( v19 )
              v11 = 358606213;
            v2 = v23;
            v3 = v24;
          }
          else
          {
            v11 = -533384151;
          }
        }
        if ( v11 > 378017065 )
          break;
        if ( v11 == -533384151 )
        {
          v18 = s1 == s2;
          v11 = v7;
        }
        else if ( v11 == -54178703 )
        {
          v11 = 358606213;
          if ( v18 )
            v11 = -730552491;
          v2 = s1;
          v3 = s2;
        }
        else
        {
          v21 = v2;
          v22 = v3;
          v13 = *(unsigned __int8 *)v2;
          v14 = v13 + 32;
          if ( (unsigned int)(v13 - 65) >= 0x1A )
            v14 = *v2;
          v15 = *(unsigned __int8 *)v3;
          if ( (unsigned int)(v15 - 65) < 0x1A )
            LOBYTE(v15) = v15 + 32;
          v16 = v15;
          v20 = v14;
          v11 = 526963590;
          if ( !v14 )
            v11 = 378017066;
        }
      }
      if ( v11 != 378017066 )
        break;
      result = v20 - v16;
      v11 = 2128001645;
    }
    v11 = v10;
  }
  while ( v12 == 526963590 );
  return result;
}

int __fastcall close_stream(FILE *stream)
{
  int v1; // r12d
  int v2; // eax
  bool v3; // zf
  int v4; // edx
  bool v6; // [rsp+1h] [rbp-33h]
  bool v7; // [rsp+2h] [rbp-32h]
  bool v8; // [rsp+3h] [rbp-31h]

  v7 = __fpending(stream) != 0;
  v8 = (~LOBYTE(stream->_flags) | 0xFFFFFFDF) != -1;
  v6 = rpl_fclose(stream) != 0;
  v2 = -2116050811;
  while ( 1 )
  {
LABEL_3:
    if ( v2 <= -800951173 )
    {
      if ( v2 == -2116050811 )
      {
        v3 = !v8;
        v2 = 2101356669;
      }
      else
      {
        if ( v2 != -1609772252 )
        {
          v2 = 1148965021;
          v1 = 0;
          goto LABEL_25;
        }
        v3 = *__errno_location() == 9;
        v2 = -1263190817;
      }
      goto LABEL_12;
    }
    if ( v2 == -800951172 )
      break;
    if ( v2 == 203659112 )
    {
      v4 = 1272170104;
      if ( (((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0) != y < 10 )
        v4 = 972601833;
      v2 = v4;
      if ( ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0 )
        v2 = 972601833;
      if ( y >= 10 )
        v2 = v4;
      goto LABEL_25;
    }
    v3 = !v7;
    v2 = -1609772252;
LABEL_12:
    if ( !v3 )
      v2 = -800951172;
    if ( v2 > 972601832 )
      goto LABEL_25;
  }
  v2 = 2110593281;
  if ( v6 )
    v2 = 1446032095;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_25:
      while ( v2 > 1446032094 )
      {
        if ( v2 == 1446032095 )
        {
          v2 = 1148965021;
          v1 = -1;
        }
        else
        {
          if ( v2 == 2101356669 )
          {
            v2 = -1263190817;
            if ( v6 )
              v2 = 203659112;
            goto LABEL_3;
          }
          *__errno_location() = 0;
          v2 = 1446032095;
        }
      }
      if ( v2 != 972601833 )
        break;
      v2 = 1272170104;
      if ( (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1 )
        v2 = 690644479;
      if ( y >= 10 )
        v2 = 1272170104;
      if ( ((~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1) != y < 10 )
        v2 = 690644479;
      if ( v2 <= 972601832 )
        goto LABEL_3;
    }
    if ( v2 != 1272170104 )
      return v1;
    v2 = 972601833;
  }
}

bool __fastcall hard_locale(int category)
{
  char v1; // bp
  int v2; // eax
  int v3; // edx
  bool v4; // zf
  unsigned int v5; // edx
  int v6; // esi
  char v8; // [rsp+Ch] [rbp-3Ch]
  char v9; // [rsp+Dh] [rbp-3Bh]
  bool v10; // [rsp+Eh] [rbp-3Ah]
  bool v11; // [rsp+Fh] [rbp-39h]
  const char *s1; // [rsp+10h] [rbp-38h]

  v8 = (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1;
  v9 = y < 10;
  v2 = -2124789283;
  while ( 1 )
  {
LABEL_3:
    while ( v2 > -1496501850 )
    {
      if ( v2 == -1496501849 )
      {
        v11 = strcmp(s1, "C") == 0;
        v2 = 2050187439;
        if ( (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1 )
          v2 = -274723557;
        if ( y >= 10 )
          v2 = 2050187439;
        if ( ((~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1) != y < 10 )
          v2 = -274723557;
        if ( v2 > 1181421263 )
          goto LABEL_31;
      }
      else if ( v2 == -274723557 )
      {
        v2 = -1833318767;
        if ( v11 )
          v2 = -36847691;
      }
      else
      {
        v2 = -1556514257;
        v1 = 0;
      }
    }
    if ( v2 == -2124789283 )
    {
      v3 = 1400777302;
      if ( v9 != v8 )
        v3 = 1968748441;
      v2 = v3;
      if ( v9 )
        v2 = 1968748441;
      if ( !v8 )
        v2 = v3;
      goto LABEL_31;
    }
    if ( v2 != -1833318767 )
      return v1 & 1;
    v4 = strcmp(s1, "POSIX") == 0;
    v2 = -1556514257;
    if ( v4 )
      v2 = -36847691;
    while ( 2 )
    {
      v1 = 1;
      if ( v2 > 1181421263 )
      {
        while ( 1 )
        {
LABEL_31:
          while ( v2 <= 1968748440 )
          {
            if ( v2 == 1181421264 )
            {
              v2 = 2050187439;
              if ( (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1 )
                v2 = -1496501849;
              if ( y >= 10 )
                v2 = 2050187439;
              if ( ((~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1) != y < 10 )
                v2 = -1496501849;
              if ( v2 <= 1181421263 )
                goto LABEL_3;
            }
            else
            {
              setlocale(category, 0LL);
              v2 = 1968748441;
            }
          }
          if ( v2 != 1968748441 )
            break;
          s1 = setlocale(category, 0LL);
          v10 = s1 != 0LL;
          v5 = ~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE;
          v6 = 1400777302;
          if ( (v5 == -1) != y < 10 )
            v6 = 2073064477;
          v2 = v6;
          if ( v5 == -1 )
            v2 = 2073064477;
          if ( y >= 10 )
            v2 = v6;
        }
        if ( v2 != 2050187439 )
        {
          v2 = -1556514257;
          if ( v10 )
            v2 = 1181421264;
          continue;
        }
        v2 = -1496501849;
      }
      break;
    }
  }
}

const char *__cdecl locale_charset()
{
  int v0; // eax
  char *v1; // rax
  char v3; // [rsp+6h] [rbp-32h]
  char v4; // [rsp+7h] [rbp-31h]
  const char *v5; // [rsp+8h] [rbp-30h]

  v3 = ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0;
  v4 = y < 10;
  v0 = 176340286;
  do
  {
LABEL_15:
    if ( v0 == -1552253716 )
    {
      nl_langinfo(14);
      v0 = -1993966580;
      break;
    }
    v0 = -1552253716;
    if ( v4 )
      v0 = -1993966580;
    if ( !v3 )
      v0 = -1552253716;
    if ( v4 != v3 )
      v0 = -1993966580;
  }
  while ( v0 > -1552253717 );
  while ( v0 == -1993966580 )
  {
    v1 = nl_langinfo(14);
    if ( !v1 )
      v1 = (_BYTE *)("Output each NAME with its last non-slash component and trailing slashes\n"
                     "removed; if NAME contains no /'s, output '.' (meaning the current directory).\n"
                     "\n"
                   + 151);
    if ( !*v1 )
      v1 = "ASCII";
    v5 = v1;
    v0 = -1552253716;
    if ( (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1 )
      v0 = -1601554959;
    if ( y >= 10 )
      v0 = -1552253716;
    if ( ((~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1) != y < 10 )
      v0 = -1601554959;
    if ( v0 > -1552253717 )
      goto LABEL_15;
  }
  return v5;
}

int __fastcall rpl_fclose(FILE *fp)
{
  int v1; // ebp
  int v2; // r12d
  int v3; // r14d
  signed int v4; // eax
  int v5; // eax
  bool v6; // zf
  int v7; // ecx
  bool v8; // zf
  int v9; // ecx
  int v10; // eax
  bool v11; // zf
  char v12; // cl
  int v13; // esi
  char v14; // dl
  unsigned int v15; // edx
  int v16; // esi
  bool v18; // [rsp+Eh] [rbp-3Ah]
  bool v19; // [rsp+Fh] [rbp-39h]
  int v20; // [rsp+10h] [rbp-38h]
  int v21; // [rsp+14h] [rbp-34h]

  v21 = fileno(fp);
  v4 = 1339536893;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_28:
      while ( v4 > 1405750595 )
      {
        if ( v4 <= 1575666689 )
        {
          if ( v4 != 1405750596 )
          {
            if ( v4 != 1544926867 )
              goto LABEL_4;
            v12 = (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1;
            v4 = 1575666690;
            v13 = 1577094776;
            if ( (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1 )
              v4 = 1577094776;
            v14 = y < 10;
            if ( y >= 10 )
              v4 = 1575666690;
            goto LABEL_2;
          }
          v11 = (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1;
          v12 = v11;
          v4 = -1682779144;
          v13 = -1395401800;
LABEL_58:
          if ( v11 )
            v4 = v13;
          v14 = y < 10;
          if ( y >= 10 )
            v4 = -1682779144;
LABEL_2:
          if ( v12 != v14 )
            v4 = v13;
          goto LABEL_4;
        }
        if ( v4 == 1575666690 )
        {
          __freading(fp);
          v4 = 1577094776;
        }
        else
        {
          if ( v4 != 1577094776 )
            goto LABEL_4;
          v18 = __freading(fp) != 0;
          v15 = ~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE;
          v16 = 1575666690;
          if ( (v15 == -1) != y < 10 )
            v16 = -1551891381;
          v4 = v16;
          if ( v15 == -1 )
            v4 = -1551891381;
          if ( y >= 10 )
            v4 = v16;
          if ( v4 <= 75094156 )
            goto LABEL_5;
        }
      }
      if ( v4 <= 1344779690 )
        break;
      if ( v4 == 1344779691 )
      {
        v4 = 75094157;
        v3 = v1;
      }
      else
      {
        if ( v4 == 1376722827 )
        {
          v6 = !v19;
          v4 = -50105466;
          v7 = -1385840995;
LABEL_41:
          if ( !v6 )
            v4 = v7;
          v2 = 0;
          goto LABEL_5;
        }
LABEL_4:
        while ( 2 )
        {
          if ( v4 <= 75094156 )
          {
LABEL_5:
            while ( v4 <= -1395401801 )
            {
              if ( v4 > -1551891382 )
              {
                if ( v4 == -1551891381 )
                {
                  v8 = !v18;
                  v4 = -1385840995;
                  v9 = 1405750596;
LABEL_23:
                  if ( !v8 )
                    v4 = v9;
                  if ( v4 > 75094156 )
                    goto LABEL_28;
                }
                else
                {
                  if ( v4 != -1424732801 )
                    goto LABEL_4;
                  v2 = *__errno_location();
                  v4 = -50105466;
                }
              }
              else
              {
                if ( v4 == -1955158066 )
                {
                  v3 = fclose(fp);
                  v4 = 75094157;
                  goto LABEL_28;
                }
                if ( v4 != -1682779144 )
                  goto LABEL_4;
                v5 = fileno(fp);
                lseek(v5, 0LL, 1);
                v4 = -1395401800;
              }
            }
            if ( v4 <= -1296937266 )
            {
              if ( v4 == -1395401800 )
              {
                v10 = fileno(fp);
                v19 = lseek(v10, 0LL, 1) != -1;
                v11 = (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1;
                v12 = v11;
                v4 = -1682779144;
                v13 = 1376722827;
                goto LABEL_58;
              }
              if ( v4 == -1385840995 )
              {
                v6 = rpl_fflush(fp) == 0;
                v4 = -50105466;
                v7 = -1424732801;
                goto LABEL_41;
              }
              continue;
            }
            if ( v4 != -1296937265 )
            {
              if ( v4 == -50105466 )
              {
                v20 = v2;
                v1 = fclose(fp);
                v8 = v2 == 0;
                v4 = 1344779691;
                v9 = -1296937265;
                goto LABEL_23;
              }
              continue;
            }
            *__errno_location() = v20;
            v4 = 1344779691;
            v1 = -1;
          }
          break;
        }
      }
    }
    if ( v4 != 1339536893 )
      break;
    v4 = ((v21 >> 31) & ((v21 >> 31) ^ 0xD09F0EC4)) + 1544926867;
    if ( v4 <= 75094156 )
      goto LABEL_5;
  }
  if ( v4 != 75094157 )
    goto LABEL_4;
  return v3;
}

int __fastcall rpl_fflush(FILE *stream)
{
  int v1; // r14d
  int v2; // r12d
  int i; // eax
  int v4; // ecx
  bool v5; // zf
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+Ch] [rbp-3Ch]
  int v12; // [rsp+10h] [rbp-38h]
  unsigned int v13; // [rsp+14h] [rbp-34h]

  v2 = 884717887;
  if ( !stream )
    v2 = 1399687344;
  for ( i = -2040981649; ; i = 1189214134 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = i;
        if ( i > 1189214133 )
          break;
        if ( i > 894758942 )
        {
          if ( i == 894758943 )
          {
            i = 1189214134;
            v1 = v11;
          }
          else
          {
            v13 = stream->_flags & (stream->_flags ^ 0xFFFFFEFF);
            v8 = 1139340605;
            while ( v8 == 1139340605 )
            {
              v8 = 699630752;
              if ( v13 )
                v8 = -475372853;
              if ( v8 == -475372853 )
              {
                rpl_fseeko(stream, 0LL, 1);
                v8 = 699630752;
              }
            }
            fflush(stream);
            i = 1569974221;
          }
        }
        else
        {
          i = v2;
          if ( v4 != -2040981649 )
          {
            v5 = __freading(stream) == 0;
            i = 1399687344;
            if ( !v5 )
              i = 1994067529;
          }
        }
      }
      if ( i <= 1569974220 )
        break;
      if ( i == 1569974221 )
      {
        v12 = stream->_flags & 0x100;
        v9 = 1139340605;
        while ( v9 == 1139340605 )
        {
          v9 = 699630752;
          if ( v12 )
            v9 = -475372853;
          if ( v9 == -475372853 )
          {
            rpl_fseeko(stream, 0LL, 1);
            v9 = 699630752;
          }
        }
        v11 = fflush(stream);
        i = 997932613;
        if ( (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1 )
          i = 894758943;
        if ( y >= 10 )
          i = 997932613;
        if ( ((~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1) != y < 10 )
          i = 894758943;
      }
      else
      {
        v6 = (x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE);
        v7 = 997932613;
        if ( (v6 == 0) != y < 10 )
          v7 = 1569974221;
        v5 = v6 == 0;
        i = v7;
        if ( v5 )
          i = 1569974221;
        if ( y >= 10 )
          i = v7;
      }
    }
    if ( i != 1399687344 )
      break;
    v1 = fflush(stream);
  }
  return v1;
}

int __fastcall rpl_fseeko(FILE *fp, off_t offset, int whence)
{
  int v3; // r12d
  int v4; // r15d
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  unsigned int v11; // edx
  bool v12; // zf
  int v13; // edi
  int v14; // eax
  bool v15; // zf
  int v16; // ecx
  int v17; // edx
  char v18; // cl
  int v19; // edi
  bool v20; // cc
  char v21; // dl
  int v22; // esi
  char v24; // [rsp+5h] [rbp-43h]
  char v25; // [rsp+6h] [rbp-42h]
  bool v26; // [rsp+7h] [rbp-41h]
  __off_t v27; // [rsp+8h] [rbp-40h]
  int v28; // [rsp+14h] [rbp-34h]

  v24 = ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0;
  v25 = y < 10;
  v8 = -2021421298;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_11:
        while ( v8 > -1355115087 )
        {
          if ( v8 > -992506695 )
          {
            if ( v8 != -992506694 )
            {
              if ( v8 != -990924549 )
              {
                v8 = 748252450;
                v3 = v4;
                goto LABEL_45;
              }
              v10 = y;
              v11 = ~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE;
              v12 = (v11 == -1) == y < 10;
              v9 = -1927536490;
              v13 = -1508419061;
              goto LABEL_2;
            }
            v14 = fileno(fp);
            v27 = lseek(v14, offset, whence);
            v15 = v27 == -1;
            v8 = -990924549;
            v16 = -1185528074;
            goto LABEL_68;
          }
          if ( v8 == -1355115086 )
          {
            v8 = 694882859;
            if ( v26 )
              v8 = 1772633239;
            goto LABEL_45;
          }
          v8 = -422134898;
          v4 = -1;
        }
        if ( v8 > -1620246168 )
          break;
        if ( v8 == -2021421298 )
        {
          v17 = 845649317;
          if ( v25 != v24 )
            v17 = -1620246167;
          v8 = v17;
          if ( v25 )
            v8 = -1620246167;
          if ( !v24 )
            v8 = v17;
          if ( v8 > -69168171 )
            goto LABEL_45;
        }
        else
        {
          LOBYTE(fp->_flags) &= ~0x10u;
          fp->_offset = v27;
          v8 = -1508419061;
        }
      }
      if ( v8 == -1620246167 )
        break;
      LOBYTE(fp->_flags) &= ~0x10u;
      fp->_offset = v27;
      v8 = -1927536490;
      if ( (~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1 )
        v8 = 197004298;
      if ( y >= 10 )
        v8 = -1927536490;
      if ( ((~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE) == -1) != y < 10 )
        v8 = 197004298;
      if ( v8 > -69168171 )
        goto LABEL_45;
    }
    v26 = fp->_IO_read_end == fp->_IO_read_ptr;
    v18 = ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0;
    v8 = 845649317;
    v19 = -1355115086;
    if ( ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0 )
      v8 = -1355115086;
    v20 = y < 10;
    v21 = y < 10;
    v22 = 845649317;
LABEL_60:
    if ( !v20 )
      v8 = v22;
    if ( v18 != v21 )
      v8 = v19;
  }
  while ( v8 <= -69168171 );
  while ( 1 )
  {
LABEL_45:
    while ( v8 <= 694882858 )
    {
      if ( v8 > 426535060 )
      {
        if ( v8 == 426535061 )
        {
          fseeko(fp, offset, whence);
          v8 = 503316653;
        }
        else
        {
          v28 = fseeko(fp, offset, whence);
          v10 = y;
          v11 = ~((_BYTE)x * ((_BYTE)x - 1)) | 0xFFFFFFFE;
          v12 = (v11 == -1) == y < 10;
          v9 = 426535061;
          v13 = 919481901;
LABEL_2:
          if ( !v12 )
            v9 = v13;
          v8 = v9;
          if ( v11 == -1 )
            v8 = v13;
          if ( v10 >= 10 )
            v8 = v9;
          if ( v8 <= -69168171 )
            goto LABEL_11;
        }
      }
      else
      {
        if ( v8 != -69168170 )
        {
          v8 = -422134898;
          v4 = 0;
          goto LABEL_11;
        }
        v15 = fp->_IO_save_base == 0LL;
        v8 = 694882859;
        v16 = -992506694;
LABEL_68:
        if ( v15 )
          v8 = v16;
        if ( v8 <= -69168171 )
          goto LABEL_11;
      }
    }
    if ( v8 <= 919481900 )
      break;
    if ( v8 != 919481901 )
    {
      v15 = fp->_IO_write_ptr == fp->_IO_write_base;
      v8 = 694882859;
      v16 = -69168170;
      goto LABEL_68;
    }
    v8 = 748252450;
    v3 = v28;
  }
  if ( v8 == 694882859 )
  {
    v18 = ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0;
    v8 = 426535061;
    v19 = 503316653;
    if ( ((x * (x - 1)) & ((x * (x - 1)) ^ 0xFFFFFFFE)) == 0 )
      v8 = 503316653;
    v20 = y < 10;
    v21 = y < 10;
    v22 = 426535061;
    goto LABEL_60;
  }
  if ( v8 == 845649317 )
  {
    v8 = -1620246167;
    goto LABEL_11;
  }
  return v3;
}

int __fastcall atexit(void (__fastcall *a1)(void *))
{
  return __cxa_atexit(a1, 0LL, _dso_handle);
}
