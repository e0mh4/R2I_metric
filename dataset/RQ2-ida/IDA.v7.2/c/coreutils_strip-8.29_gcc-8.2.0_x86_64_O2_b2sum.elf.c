__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  unsigned int v3; // er14
  char *v4; // r13
  char **v5; // rbp
  unsigned int v6; // ebx
  int v7; // eax
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  char *v12; // rax
  char v13; // dl
  const char *v14; // rsi
  char *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // eax
  char *v18; // rax
  FILE *v19; // r13
  __int64 v20; // r12
  __ssize_t v21; // rax
  char *v22; // r15
  char v23; // dl
  __int64 v24; // r10
  __int64 v25; // rbx
  char *v26; // r8
  __int64 v27; // rbx
  char *v28; // r11
  char v29; // bp
  char **v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r10
  char *v33; // r11
  unsigned __int64 v34; // rax
  char v35; // al
  char *v36; // rax
  __int64 v37; // rsi
  const unsigned __int16 *v38; // rdi
  __int64 i; // rax
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rax
  char *v43; // r8
  char v44; // dl
  const char *v45; // rbx
  _BOOL8 v46; // rbp
  char *v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rdx
  char *v50; // r8
  __int64 v51; // rcx
  char *v52; // rax
  const char *v53; // rsi
  char *v54; // rax
  int v55; // ebx
  char v56; // al
  __int64 v57; // rbx
  char *v58; // rax
  unsigned __int64 v59; // rdx
  const __int32_t **v60; // rax
  const __int32_t *v61; // rdi
  char *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v66; // rbx
  __int64 v67; // r10
  __int64 v68; // r11
  const char *v69; // r10
  __int64 v70; // rbx
  int *v71; // rax
  __int64 v72; // r8
  unsigned int v73; // ebx
  char *v74; // rax
  unsigned __int64 v75; // rbp
  __int64 v76; // rdx
  char *v77; // rax
  char *v78; // rax
  char *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rbp
  char *v83; // rax
  __int64 v84; // rbx
  char *v85; // rax
  char v86; // dl
  __int64 v87; // rax
  const char *v88; // rdx
  char v89; // al
  char *v90; // r8
  char v91; // al
  __int64 v92; // rbp
  char *v93; // rax
  char *v94; // rbx
  int *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  char *v99; // rax
  char *v100; // rax
  char *v101; // rax
  char *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rbx
  char *v105; // rax
  __int64 v106; // rbx
  char *v107; // rax
  char *v108; // [rsp+8h] [rbp-150h]
  char *v109; // [rsp+8h] [rbp-150h]
  unsigned __int64 v110; // [rsp+8h] [rbp-150h]
  const char **v111; // [rsp+10h] [rbp-148h]
  char *s; // [rsp+18h] [rbp-140h]
  __int64 v113; // [rsp+20h] [rbp-138h]
  char *v114; // [rsp+20h] [rbp-138h]
  unsigned __int8 v115; // [rsp+20h] [rbp-138h]
  char *v116; // [rsp+20h] [rbp-138h]
  __int64 v117; // [rsp+28h] [rbp-130h]
  unsigned __int64 v118; // [rsp+28h] [rbp-130h]
  __int64 v119; // [rsp+28h] [rbp-130h]
  __int64 v120; // [rsp+28h] [rbp-130h]
  __int64 v121; // [rsp+28h] [rbp-130h]
  unsigned __int64 v122; // [rsp+30h] [rbp-128h]
  char v123; // [rsp+3Bh] [rbp-11Dh]
  int v124; // [rsp+3Ch] [rbp-11Ch]
  unsigned __int64 v125; // [rsp+40h] [rbp-118h]
  const char **v126; // [rsp+48h] [rbp-110h]
  unsigned __int64 v127; // [rsp+50h] [rbp-108h]
  char v128; // [rsp+58h] [rbp-100h]
  char v129; // [rsp+59h] [rbp-FFh]
  char v130; // [rsp+5Ah] [rbp-FEh]
  unsigned __int8 v131; // [rsp+5Bh] [rbp-FDh]
  int v132; // [rsp+5Ch] [rbp-FCh]
  char *lineptr; // [rsp+68h] [rbp-F0h]
  size_t n; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v135; // [rsp+78h] [rbp-E0h]
  char v136[80]; // [rsp+80h] [rbp-D8h]
  char v137[136]; // [rsp+D0h] [rbp-88h]

  v3 = 0;
  v4 = "";
  v5 = a2;
  v6 = -1;
  sub_4057F0(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_409D30(sub_405670);
  setvbuf(stdout, 0LL, 1, 0LL);
  v123 = 0;
  while ( 1 )
  {
    v7 = sub_409590(a1, a2, "l:bctw", &off_40AA00, 0LL);
    if ( v7 == -1 )
      break;
    if ( v7 == 116 )
    {
      v6 = 0;
    }
    else if ( v7 <= 116 )
    {
      if ( v7 == 98 )
        goto LABEL_16;
      if ( v7 <= 98 )
        goto LABEL_20;
      if ( v7 == 99 )
      {
        v3 = 1;
      }
      else
      {
        if ( v7 != 108 )
          goto LABEL_46;
        v8 = dcgettext(0LL, "invalid length", 5);
        v9 = sub_407D40(qword_60E4C0, 0LL, -1LL, "", v8, 0LL);
        v4 = (char *)qword_60E4C0;
        qword_60E2F8 = v9;
        if ( v9 & 7 )
        {
          v10 = sub_407410(qword_60E4C0);
          v11 = dcgettext(0LL, "invalid length: %s", 5);
          error(0, 0, v11, v10);
          v12 = dcgettext(0LL, "length is not a multiple of 8", 5);
          error(1, 0, v12);
LABEL_20:
          if ( v7 == -131 )
          {
            sub_4078A0((char)stdout);
            exit(0);
          }
          if ( v7 == -130 )
            sub_403280(0);
LABEL_46:
          sub_403280(1);
        }
      }
    }
    else if ( v7 == 129 )
    {
      byte_60E308 = 1;
      byte_60E307 = 0;
      byte_60E305 = 0;
    }
    else if ( v7 <= 129 )
    {
      if ( v7 == 119 )
      {
        byte_60E308 = 0;
        byte_60E307 = 1;
        byte_60E305 = 0;
      }
      else
      {
        if ( v7 != 128 )
          goto LABEL_46;
        byte_60E306 = 1;
      }
    }
    else if ( v7 == 131 )
    {
      byte_60E304 = 1;
    }
    else if ( v7 >= 131 )
    {
      if ( v7 != 132 )
        goto LABEL_46;
      v123 = 1;
LABEL_16:
      v6 = 1;
    }
    else
    {
      byte_60E308 = 0;
      byte_60E307 = 0;
      byte_60E305 = 1;
    }
  }
  qword_60E318 = 3LL;
  if ( (unsigned __int64)qword_60E2F8 > 0x200 )
  {
    v104 = sub_407410(v4);
    v105 = dcgettext(0LL, "invalid length: %s", 5);
    error(0, 0, v105, v104);
    v106 = sub_407410((&off_40ABB0)[dword_60E300]);
    v107 = dcgettext(0LL, "maximum digest length for %s is %lu bits", 5);
    error(1, 0, v107, v106, 512LL);
    start();
  }
  v13 = v123 & (v6 == 0);
  if ( !qword_60E2F8 && !(_BYTE)v3 )
  {
    qword_60E2F8 = 512LL;
    qword_60E310 = 128LL;
    if ( !v13 )
    {
      if ( byte_60E306 )
        goto LABEL_251;
      if ( byte_60E308 )
        goto LABEL_224;
      goto LABEL_50;
    }
LABEL_250:
    v14 = "--tag does not support --text mode";
    goto LABEL_45;
  }
  qword_60E310 = (unsigned __int64)qword_60E2F8 >> 2;
  if ( v13 )
    goto LABEL_250;
  if ( (_BYTE)v3 )
  {
    v14 = "the --tag option is meaningless when verifying checksums";
    if ( v123 )
      goto LABEL_45;
  }
  if ( (v6 & 0x80000000) == 0 )
  {
    v14 = "the --binary and --text options are meaningless when verifying checksums";
    if ( (_BYTE)v3 )
      goto LABEL_45;
  }
  if ( byte_60E306 )
  {
    if ( (_BYTE)v3 )
      goto LABEL_42;
LABEL_251:
    v14 = "the --ignore-missing option is meaningful only when verifying checksums";
LABEL_45:
    v15 = dcgettext(0LL, v14, 5);
    error(0, 0, v15);
    goto LABEL_46;
  }
  if ( byte_60E308 )
  {
    if ( !(_BYTE)v3 )
    {
LABEL_224:
      v14 = "the --status option is meaningful only when verifying checksums";
      goto LABEL_45;
    }
LABEL_42:
    if ( !byte_60E307 )
    {
LABEL_43:
      if ( byte_60E304 )
      {
        v14 = "the --strict option is meaningful only when verifying checksums";
        if ( !(_BYTE)v3 )
          goto LABEL_45;
      }
    }
    goto LABEL_52;
  }
LABEL_50:
  if ( !byte_60E307 )
  {
    if ( byte_60E305 == 1 )
    {
      v14 = "the --quiet option is meaningful only when verifying checksums";
      if ( !(_BYTE)v3 )
        goto LABEL_45;
    }
    goto LABEL_43;
  }
  v14 = "the --warn option is meaningful only when verifying checksums";
  if ( !(_BYTE)v3 )
    goto LABEL_45;
LABEL_52:
  if ( v6 == -1 )
    v6 = 0;
  v126 = (const char **)&v5[a1];
  v16 = dword_60E2BC;
  if ( dword_60E2BC == a1 )
  {
    *v126 = "-";
    ++v126;
  }
  v111 = (const char **)&v5[v16];
  if ( v126 <= v111 )
  {
    v129 = 1;
    goto LABEL_158;
  }
  v129 = 1;
  v17 = v6 < 1 ? 0xFFFFFFF6 : 0;
  v132 = v17 + 42;
  v131 = v17 + 42;
LABEL_58:
  s = (char *)*v111;
  if ( (_BYTE)v3 )
  {
    v124 = strcmp(*v111, "-");
    if ( v124 )
    {
      v19 = (FILE *)sub_405750(s, "r");
      if ( !v19 )
        goto LABEL_176;
    }
    else
    {
      byte_60E320 = 1;
      v18 = dcgettext(0LL, "standard input", 5);
      v19 = stdin;
      s = v18;
    }
    lineptr = 0LL;
    v20 = 1LL;
    n = 0LL;
    v130 = 0;
    v128 = 0;
    v127 = 0LL;
    v125 = 0LL;
    v122 = 0LL;
    while ( 1 )
    {
      v21 = __getdelim(&lineptr, &n, 10, v19);
      if ( v21 <= 0 )
        goto LABEL_122;
      v22 = lineptr;
      v23 = *lineptr;
      if ( *lineptr == 35 )
        goto LABEL_91;
      v24 = v21;
      if ( lineptr[v21 - 1] == 10 )
      {
        v24 = v21 - 1;
        lineptr[v21 - 1] = 0;
        v22 = lineptr;
        v23 = *lineptr;
      }
      v25 = 0LL;
      if ( v23 == 9 || v23 == 32 )
      {
        do
        {
          do
            v23 = v22[++v25];
          while ( v23 == 32 );
        }
        while ( v23 == 9 );
      }
      LOBYTE(v108) = 0;
      if ( v23 == 92 )
      {
        LOBYTE(v108) = v3;
        ++v25;
      }
      v26 = &v22[v25];
      if ( !memcmp(&v22[v25], "BLAKE2", 6uLL) )
        break;
      while ( 2 )
      {
        v117 = v24;
        v114 = v26;
        if ( v24 - v25 < qword_60E318 + (unsigned __int64)(*v26 == 92) )
          goto LABEL_89;
        qword_60E310 = 0LL;
        v37 = 0LL;
        v38 = *__ctype_b_loc();
        for ( i = 0LL; v38[(unsigned __int8)v114[i]] & 0x1000; ++i )
          v37 = v3;
        if ( !(_BYTE)v37 )
          goto LABEL_89;
        qword_60E310 = i;
        if ( (unsigned __int64)(i - 2) > 0x7E )
          goto LABEL_89;
        if ( i & 1 )
          goto LABEL_89;
        v40 = i + v25;
        qword_60E2F8 = 4 * i;
        v41 = (unsigned __int8)v22[v40];
        if ( (_BYTE)v41 != 32 && (_BYTE)v41 != 9 )
          goto LABEL_89;
        v22[v40] = 0;
        if ( !(unsigned __int8)sub_402F30(v114, v37, v41) )
          goto LABEL_89;
        v42 = v40 + 1;
        v43 = v114;
        if ( v117 - (v40 + 1) != 1 && ((v44 = v22[v40 + 1], v44 == 32) || v44 == 42) )
        {
          if ( dword_60E230 != 1 )
          {
            dword_60E230 = 0;
            v42 = v40 + 2;
          }
        }
        else
        {
          if ( !dword_60E230 )
            goto LABEL_89;
          dword_60E230 = 1;
        }
        v45 = &v22[v42];
        if ( (_BYTE)v108 )
        {
          LOBYTE(v108) = (_BYTE)v114;
          v103 = sub_402F90(&v22[v42], v117 - v42);
          v43 = v114;
          v91 = v103 != 0;
LABEL_214:
          if ( !v91 )
            goto LABEL_89;
        }
        if ( !v124 && !strcmp(v45, "-") )
          goto LABEL_89;
        LODWORD(v46) = 0;
        if ( !byte_60E308 )
        {
          v109 = v43;
          v47 = strchr(v45, 10);
          v43 = v109;
          v46 = v47 != 0LL;
        }
        v108 = v43;
        v48 = sub_4030D0(v45, v137, &v135);
        v50 = v108;
        v51 = v48;
        if ( !(_BYTE)v48 )
        {
          ++v125;
          if ( byte_60E308 )
            goto LABEL_121;
          if ( v46 )
          {
            v52 = stdout->_IO_write_ptr;
            if ( v52 >= stdout->_IO_write_end )
            {
              __overflow(stdout, 92);
            }
            else
            {
              v49 = (__int64)(v52 + 1);
              stdout->_IO_write_ptr = v52 + 1;
              *v52 = 92;
            }
          }
          sub_403020(v45, v46, v49, v51, v50);
          v53 = "FAILED open or read";
          goto LABEL_120;
        }
        if ( byte_60E306 && (_BYTE)v135 )
          goto LABEL_121;
        v59 = (unsigned __int64)qword_60E310 >> 1;
        if ( !((unsigned __int64)qword_60E310 >> 1) )
        {
          v22 = 0LL;
          goto LABEL_197;
        }
        v118 = (unsigned __int64)qword_60E310 >> 1;
        v22 = 0LL;
        v115 = v48;
        v60 = __ctype_tolower_loc();
        v50 = v108;
        v51 = v115;
        v61 = *v60;
        v59 = v118;
        do
        {
          if ( v61[(unsigned __int8)v108[2 * (_QWORD)v22]] != byte_40A9E0[((unsigned __int8)v137[(_QWORD)v22] >> 4) & 0xF]
            || v61[(unsigned __int8)v108[2 * (_QWORD)v22 + 1]] != byte_40A9E0[v137[(_QWORD)v22] & 0xF] )
          {
            ++v127;
            if ( byte_60E308 )
              goto LABEL_121;
            if ( v46 )
            {
LABEL_147:
              v62 = stdout->_IO_write_ptr;
              if ( v62 >= stdout->_IO_write_end )
              {
                v110 = v59;
                __overflow(stdout, 92);
                v59 = v110;
              }
              else
              {
                v51 = (__int64)(v62 + 1);
                stdout->_IO_write_ptr = v62 + 1;
                *v62 = 92;
              }
            }
            v108 = (char *)v59;
            sub_403020(v45, v46, v59, v51, v50);
            if ( v108 == v22 )
            {
LABEL_219:
              if ( byte_60E305 )
                goto LABEL_121;
              v53 = "OK";
            }
            else
            {
              v53 = "FAILED";
            }
LABEL_120:
            v54 = dcgettext(0LL, v53, 5);
            __printf_chk(1LL, ": %s\n", v54);
            goto LABEL_121;
          }
          ++v22;
        }
        while ( (char *)v118 != v22 );
        v22 = (char *)v118;
LABEL_197:
        v130 = byte_60E308;
        if ( !byte_60E308 )
        {
          v130 = byte_60E305;
          if ( !byte_60E305 )
          {
            if ( v46 )
            {
              v130 = v51;
              goto LABEL_147;
            }
            LOBYTE(v108) = v51;
            sub_403020(v45, 0LL, v59, v51, v50);
            v130 = (char)v108;
            goto LABEL_219;
          }
        }
LABEL_121:
        v128 = v3;
        if ( v19->_flags & 0x30 )
        {
LABEL_122:
          free(lineptr);
          v55 = v19->_flags & 0x20;
          if ( v55 )
          {
            v84 = sub_407290(0LL, 3LL, s);
            v85 = dcgettext(0LL, "%s: read error", 5);
            error(0, 0, v85, v84);
            v56 = 0;
            goto LABEL_137;
          }
          if ( v124 && (unsigned int)sub_4085E0(v19) )
          {
LABEL_176:
            v70 = sub_407290(0LL, 3LL, s);
            v71 = __errno_location();
            error(0, *v71, "%s", v70);
            v56 = 0;
            goto LABEL_137;
          }
          if ( v128 )
          {
            if ( byte_60E308 )
              goto LABEL_256;
            if ( v122 )
            {
              v101 = dcngettext(
                       0LL,
                       "WARNING: %lu line is improperly formatted",
                       "WARNING: %lu lines are improperly formatted",
                       v122,
                       5);
              error(0, 0, v101, v122);
            }
            if ( v125 )
            {
              v100 = dcngettext(
                       0LL,
                       "WARNING: %lu listed file could not be read",
                       "WARNING: %lu listed files could not be read",
                       v125,
                       5);
              error(0, 0, v100, v125);
            }
            if ( v127 )
            {
              v99 = dcngettext(
                      0LL,
                      "WARNING: %lu computed checksum did NOT match",
                      "WARNING: %lu computed checksums did NOT match",
                      v127,
                      5);
              error(0, 0, v99, v127);
            }
            if ( !byte_60E306 )
            {
LABEL_256:
              if ( v130 )
                goto LABEL_134;
            }
            else if ( v130 )
            {
LABEL_134:
              if ( !(v127 | v125) )
                LOBYTE(v55) = (v122 == 0) | byte_60E304 ^ 1;
            }
            else
            {
              v92 = sub_407290(0LL, 3LL, s);
              v93 = dcgettext(0LL, "%s: no file was verified", 5);
              error(0, 0, v93, v92);
            }
          }
          else
          {
            v82 = sub_407290(0LL, 3LL, s);
            v83 = dcgettext(0LL, "%s: no properly formatted %s checksum lines found", 5);
            error(0, 0, v83, v82, "BLAKE2");
          }
          v56 = v55 & 1;
LABEL_137:
          v129 &= v56;
          goto LABEL_157;
        }
LABEL_92:
        if ( !++v20 )
        {
          v25 = sub_407290(0LL, 3LL, s);
          v36 = dcgettext(0LL, "%s: too many checksum lines", 5);
          error(1, 0, v36, v25);
          continue;
        }
        break;
      }
    }
    v27 = v25 + 6;
    v28 = &v22[v27];
    v29 = v22[v27];
    if ( v29 )
    {
      if ( v29 != 9 && v29 != 32 )
      {
        while ( 1 )
        {
          if ( v29 == 45 )
            goto LABEL_82;
          if ( v29 == 40 )
            break;
          v29 = v22[++v27];
          v28 = &v22[v27];
          if ( !v29 )
            goto LABEL_82;
          if ( v29 == 32 || v29 == 9 )
            goto LABEL_151;
        }
        *v28 = 0;
        v30 = &::s;
        v120 = v24;
        v116 = v28;
        v64 = sub_4052D0(v26, &::s, 0LL, 0LL);
        v33 = v116;
        v32 = v120;
        if ( v64 < 0 )
        {
LABEL_89:
          ++v122;
          if ( byte_60E307 )
          {
            v57 = sub_407290(0LL, 3LL, s);
            v58 = dcgettext(0LL, "%s: %lu: improperly formatted %s checksum line", 5);
            error(0, 0, v58, v57, v20, "BLAKE2");
          }
LABEL_91:
          if ( v19->_flags & 0x30 )
            goto LABEL_122;
          goto LABEL_92;
        }
        dword_60E300 = v64;
        *v116 = 40;
        goto LABEL_85;
      }
LABEL_151:
      *v28 = 0;
      v30 = &::s;
      v119 = v24;
      v63 = sub_4052D0(v26, &::s, 0LL, 0LL);
      if ( v63 < 0 )
        goto LABEL_89;
      dword_60E300 = v63;
      v32 = v119;
      ++v27;
    }
    else
    {
LABEL_82:
      *v28 = 0;
      v30 = &::s;
      v113 = v24;
      v31 = sub_4052D0(v26, &::s, 0LL, 0LL);
      v32 = v113;
      if ( v31 < 0 )
        goto LABEL_89;
      dword_60E300 = v31;
      ++v27;
    }
    v33 = &v22[v27];
    if ( v29 == 45 )
    {
      v30 = 0LL;
      v121 = v32;
      if ( (unsigned int)sub_407D70(&v22[v27]) || v135 - 1 > 0x1FF || v135 & 7 )
        goto LABEL_89;
      qword_60E2F8 = v135;
      v32 = v121;
      v33 = &v22[v27];
      while ( (unsigned int)(v22[v27] - 48) <= 9 )
        v33 = &v22[++v27];
      v34 = v135 >> 2;
LABEL_86:
      qword_60E310 = v34;
      v35 = *v33;
      if ( *v33 == 32 )
        v35 = v22[++v27];
      if ( v35 != 40 )
        goto LABEL_89;
      v66 = v27 + 1;
      v67 = v32 - v66;
      if ( !v67 )
        goto LABEL_89;
      v45 = &v22[v66];
      v68 = v67 - 1;
      if ( v67 != 1 )
      {
        if ( v45[v67 - 1] == 41 )
        {
LABEL_203:
          v69 = &v45[v68];
LABEL_204:
          if ( (_BYTE)v108 )
          {
            v30 = (char **)v68;
            if ( !sub_402F90(v45, v68) )
              goto LABEL_89;
          }
          *v69 = 0;
          v86 = v45[v68 + 1];
          v87 = v68 + 1;
          if ( v86 == 9 || v86 == 32 )
          {
            do
            {
              do
                v86 = v45[++v87];
              while ( v86 == 32 );
            }
            while ( v86 == 9 );
          }
          if ( v86 != 61 )
            goto LABEL_89;
          v88 = &v45[v87 + 1];
          do
          {
            do
            {
              v89 = *v88;
              v90 = (char *)v88++;
            }
            while ( v89 == 32 );
          }
          while ( v89 == 9 );
          v108 = v90;
          v91 = sub_402F30(v90, v30, v88);
          v43 = v108;
          goto LABEL_214;
        }
        while ( --v68 )
        {
          if ( v45[v68] == 41 )
            goto LABEL_203;
        }
      }
      if ( *v45 != 41 )
        goto LABEL_89;
      v69 = v45;
      v68 = 0LL;
      goto LABEL_204;
    }
LABEL_85:
    qword_60E2F8 = 512LL;
    v34 = 128LL;
    goto LABEL_86;
  }
  if ( !(unsigned __int8)sub_4030D0(s, v136, v137) )
  {
    v129 = 0;
    goto LABEL_157;
  }
  if ( strchr(s, 92) )
  {
LABEL_180:
    if ( v123 )
    {
      v102 = stdout->_IO_write_ptr;
      v73 = 1;
      if ( stdout->_IO_write_end <= v102 )
      {
        __overflow(stdout, 92);
      }
      else
      {
        stdout->_IO_write_ptr = v102 + 1;
        *v102 = 92;
      }
      goto LABEL_229;
    }
    v73 = 1;
    v74 = stdout->_IO_write_ptr;
    if ( v74 >= stdout->_IO_write_end )
    {
      __overflow(stdout, 92);
    }
    else
    {
      stdout->_IO_write_ptr = v74 + 1;
      *v74 = 92;
    }
LABEL_183:
    if ( !((unsigned __int64)qword_60E310 >> 1) )
    {
LABEL_189:
      v78 = stdout->_IO_write_ptr;
      if ( v78 >= stdout->_IO_write_end )
      {
        __overflow(stdout, 32);
      }
      else
      {
        stdout->_IO_write_ptr = v78 + 1;
        *v78 = 32;
      }
      v79 = stdout->_IO_write_ptr;
      if ( v79 >= stdout->_IO_write_end )
      {
        __overflow(stdout, v132);
      }
      else
      {
        v80 = v131;
        v81 = (__int64)(v79 + 1);
        stdout->_IO_write_ptr = v79 + 1;
        *v79 = v131;
      }
      sub_403020(s, v73, v81, v80, v72);
      goto LABEL_187;
    }
LABEL_184:
    v75 = 0LL;
    do
    {
      v76 = (unsigned __int8)v136[v75++];
      __printf_chk(1LL, "%02x", v76);
    }
    while ( (unsigned __int64)qword_60E310 >> 1 > v75 );
    goto LABEL_186;
  }
  while ( 1 )
  {
    if ( strchr(s, 10) )
      goto LABEL_180;
    v73 = 0;
    if ( !v123 )
      goto LABEL_183;
LABEL_229:
    fputs_unlocked((&::s)[dword_60E300], stdout);
    if ( (unsigned __int64)qword_60E2F8 <= 0x1FF )
      __printf_chk(1LL, "-%lu", qword_60E2F8);
    fwrite_unlocked(" (", 1uLL, 2uLL, stdout);
    sub_403020(s, v73, v96, v97, v98);
    fwrite_unlocked(") = ", 1uLL, 4uLL, stdout);
    if ( (unsigned __int64)qword_60E310 >> 1 )
      goto LABEL_184;
LABEL_186:
    if ( !v123 )
      goto LABEL_189;
LABEL_187:
    v77 = stdout->_IO_write_ptr;
    if ( v77 >= stdout->_IO_write_end )
    {
      __overflow(stdout, 10);
    }
    else
    {
      stdout->_IO_write_ptr = v77 + 1;
      *v77 = 10;
    }
LABEL_157:
    ++v111;
    if ( v126 > v111 )
      goto LABEL_58;
LABEL_158:
    if ( !byte_60E320 || (unsigned int)sub_4085E0(stdin) != -1 )
      return (unsigned __int8)v129 ^ 1u;
    v94 = dcgettext(0LL, "standard input", 5);
    v95 = __errno_location();
    error(1, *v95, v94);
  }
}

// positive sp value has been detected, the output may be wrong!
void __usercall __noreturn start(__int64 a1@<rax>, void (*a2)(void)@<rdx>)
{
  int v2; // esi
  int v3; // [rsp-8h] [rbp-8h]
  __int64 _0; // [rsp+0h] [rbp+0h]

  v2 = v3;
  *(_QWORD *)&v3 = a1;
  _libc_start_main((int (__fastcall *)(int, char **, char **))main, v2, (char **)&_0, init, fini, a2, &v3);
  __halt();
}

__int64 *sub_402E7B()
{
  __int64 *result; // rax

  result = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    result = 0LL;
  return result;
}

__int64 sub_402E9A()
{
  return 0LL;
}

__int64 *sub_402ED1()
{
  __int64 *result; // rax

  if ( !byte_60E2E8 )
  {
    while ( qword_60E2F0 < (unsigned __int64)(&qword_60DE48 - qword_60DE40 - 1) )
      ((void (*)(void))qword_60DE40[++qword_60E2F0])();
    result = sub_402E7B();
    byte_60E2E8 = 1;
  }
  return result;
}

__int64 sub_402F28()
{
  return sub_402E9A();
}

bool __fastcall sub_402F30(_BYTE *a1)
{
  _BYTE *v1; // rbx
  unsigned __int64 v2; // rbp
  const unsigned __int16 *v3; // rcx
  unsigned __int64 v4; // rax

  v1 = a1;
  v2 = qword_60E310;
  if ( !qword_60E310 )
    return *v1 == 0;
  v3 = *__ctype_b_loc();
  LODWORD(v4) = 0;
  while ( v3[(unsigned __int8)*v1] & 0x1000 )
  {
    ++v1;
    v4 = (unsigned int)(v4 + 1);
    if ( v4 >= v2 )
      return *v1 == 0;
  }
  return 0;
}

__int64 __fastcall sub_402F90(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  char v4; // cl
  char v5; // cl
  _BYTE *v7; // r9

  v2 = a1 + 1;
  v3 = 0LL;
  if ( a2 )
  {
    do
    {
      v4 = *(_BYTE *)(a1 + v3);
      if ( !v4 )
        return 0LL;
      if ( v4 == 92 )
      {
        if ( a2 - 1 == v3 )
          return 0LL;
        v5 = *(_BYTE *)(a1 + ++v3);
        if ( v5 == 92 )
        {
          v7 = (_BYTE *)v2;
          *(_BYTE *)(v2 - 1) = 92;
        }
        else
        {
          if ( v5 != 110 )
            return 0LL;
          v7 = (_BYTE *)v2;
          *(_BYTE *)(v2 - 1) = 10;
        }
      }
      else
      {
        *(_BYTE *)(v2 - 1) = v4;
        v7 = (_BYTE *)v2;
      }
      ++v3;
      ++v2;
    }
    while ( a2 > v3 );
    if ( (unsigned __int64)v7 < a1 + a2 )
      *v7 = 0;
  }
  return a1;
}

void __fastcall sub_403020(const char *a1, char a2)
{
  const char *v2; // rbx
  char *v3; // rax
  int v4; // esi

  v2 = a1;
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = *(unsigned __int8 *)v2;
      if ( !(_BYTE)v4 )
        break;
      if ( (_BYTE)v4 == 10 )
      {
        fwrite_unlocked(&unk_409D84, 1uLL, 2uLL, stdout);
      }
      else if ( (_BYTE)v4 == 92 )
      {
        fwrite_unlocked(&unk_409D87, 1uLL, 2uLL, stdout);
      }
      else
      {
        v3 = stdout->_IO_write_ptr;
        if ( v3 >= stdout->_IO_write_end )
        {
          __overflow(stdout, v4);
        }
        else
        {
          stdout->_IO_write_ptr = v3 + 1;
          *v3 = v4;
        }
      }
      ++v2;
    }
  }
  else
  {
    fputs_unlocked(a1, stdout);
  }
}

__int64 __fastcall sub_4030D0(const char *a1, __int64 a2, _BYTE *a3)
{
  FILE *v3; // rbx
  unsigned int v4; // er12
  _BYTE *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  int *v9; // rax
  __int64 v10; // rbp
  int *v11; // rax
  int *v12; // rax
  int *v13; // rbx
  __int64 v14; // rax

  *a3 = 0;
  if ( !strcmp(a1, "-") )
  {
    v3 = stdin;
    byte_60E320 = 1;
    sub_405720(stdin, 2LL);
    if ( !(unsigned int)sub_4051D0(v3) )
      return 1;
LABEL_9:
    v4 = 0;
    v10 = sub_407290(0LL, 3LL, a1);
    v11 = __errno_location();
    error(0, *v11, "%s", v10);
    if ( stdin != v3 )
      sub_4085E0(v3);
    return v4;
  }
  v6 = a3;
  v7 = sub_405750(a1, 4234976LL);
  v3 = (FILE *)v7;
  if ( v7 )
  {
    sub_405720(v7, 2LL);
    if ( !(unsigned int)sub_4051D0(v3) )
    {
      if ( (unsigned int)sub_4085E0(v3) )
      {
        v4 = 0;
        v8 = sub_407290(0LL, 3LL, a1);
        v9 = __errno_location();
        error(0, *v9, "%s", v8);
        return v4;
      }
      return 1;
    }
    goto LABEL_9;
  }
  v12 = __errno_location();
  v4 = (unsigned __int8)byte_60E306;
  v13 = v12;
  if ( byte_60E306 && *v12 == 2 )
  {
    *v6 = 1;
  }
  else
  {
    v4 = 0;
    v14 = sub_407290(0LL, 3LL, a1);
    error(0, *v13, "%s", v14);
  }
  return v4;
}

void __fastcall __noreturn sub_403280(int status)
{
  __int64 v1; // rbp
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbp
  char *v5; // rax
  FILE *v6; // rbp
  char *v7; // rax
  char *v8; // rax
  FILE *v9; // rbp
  char *v10; // rax
  FILE *v11; // rbp
  char *v12; // rax
  FILE *v13; // rbp
  char *v14; // rax
  FILE *v15; // rbp
  char *v16; // rax
  FILE *v17; // rbp
  char *v18; // rax
  FILE *v19; // rbp
  char *v20; // rax
  char *v21; // rax
  const char **v22; // rax
  const char *v23; // rbp
  char *v24; // rax
  char *v25; // rax
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  const char *v32; // [rsp+0h] [rbp-88h]
  const char *v33; // [rsp+8h] [rbp-80h]
  const char *v34; // [rsp+10h] [rbp-78h]
  const char *v35; // [rsp+18h] [rbp-70h]
  const char *v36; // [rsp+20h] [rbp-68h]
  const char *v37; // [rsp+28h] [rbp-60h]
  const char *v38; // [rsp+30h] [rbp-58h]
  const char *v39; // [rsp+38h] [rbp-50h]
  const char *v40; // [rsp+40h] [rbp-48h]
  const char *v41; // [rsp+48h] [rbp-40h]
  const char *v42; // [rsp+50h] [rbp-38h]
  const char *v43; // [rsp+58h] [rbp-30h]
  __int64 v44; // [rsp+60h] [rbp-28h]
  __int64 v45; // [rsp+68h] [rbp-20h]

  v1 = qword_60E338;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\nPrint or check %s (%d-bit) checksums.\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = stdout;
  v5 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\n  -b, --binary         read in binary mode\n", 5);
  fputs_unlocked(v7, v6);
  v8 = dcgettext(0LL, "  -c, --check          read %s sums from the FILEs and check them\n", 5);
  __printf_chk(1LL, v8, "BLAKE2");
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "  -l, --length         digest length in bits; must not exceed the maximum for\n"
          "                       the blake2 algorithm and must be a multiple of 8\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(0LL, "      --tag            create a BSD-style checksum\n", 5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(0LL, "  -t, --text           read in text mode (default)\n", 5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(
          0LL,
          "\n"
          "The following five options are useful only when verifying checksums:\n"
          "      --ignore-missing  don't fail or report status for missing files\n"
          "      --quiet          don't print OK for each successfully verified file\n"
          "      --status         don't output anything, status code shows success\n"
          "      --strict         exit non-zero for improperly formatted checksum lines\n"
          "  -w, --warn           warn about improperly formatted checksum lines\n"
          "\n",
          5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v20, v19);
  v21 = dcgettext(
          0LL,
          "\n"
          "The sums are computed as described in %s.  When checking, the input\n"
          "should be a former output of this program.  The default mode is to print a\n"
          "line with checksum, a space, a character indicating input mode ('*' for binary,\n"
          "' ' for text or where binary is insignificant), and name for each FILE.\n",
          5);
  __printf_chk(1LL, v21, "RFC 7693");
  v32 = "[";
  v22 = &v32;
  v33 = "test invocation";
  v34 = "coreutils";
  v35 = "Multi-call invocation";
  v36 = "sha224sum";
  v37 = "sha2 utilities";
  v38 = "sha256sum";
  v39 = "sha2 utilities";
  v40 = "sha384sum";
  v41 = "sha2 utilities";
  v42 = "sha512sum";
  v43 = "sha2 utilities";
  v44 = 0LL;
  v45 = 0LL;
  do
    v22 += 2;
  while ( *v22 && strcmp("b2sum", *v22) );
  v23 = v22[1];
  if ( v23 )
  {
    v24 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v24, &unk_409E16);
    v25 = setlocale(5, 0LL);
    if ( !v25 || !strncmp(v25, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v28 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v28, &unk_409E16);
    v29 = setlocale(5, 0LL);
    if ( !v29 || !strncmp(v29, "en_", 3uLL) )
    {
      v23 = "b2sum";
      v30 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v30, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v23 = "b2sum";
  }
  v31 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v31, "b2sum");
LABEL_10:
  v26 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v26, "https://www.gnu.org/software/coreutils/");
LABEL_11:
  v27 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v27, v23);
LABEL_3:
  exit(status);
}

__int64 __fastcall sub_403680(_QWORD *a1, __int64 a2)
{
  __int64 i; // rax
  __int64 j; // rax
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r10
  __int64 v21; // r12
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // r11
  __int64 v25; // r13
  __int64 v26; // r15
  __int64 v27; // rsi
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // r10
  __int64 v31; // rdx
  __int64 v32; // r13
  __int64 v33; // r15
  __int64 v34; // r13
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rbp
  __int64 v40; // r11
  __int64 v41; // r9
  __int64 v42; // r13
  __int64 v43; // r8
  __int64 v44; // r12
  __int64 v45; // r13
  __int64 v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // r11
  __int64 v51; // rcx
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // r14
  __int64 v56; // r10
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // r15
  __int64 v60; // r13
  __int64 v61; // r10
  __int64 v62; // rsi
  __int64 v63; // r15
  __int64 v64; // r13
  __int64 v65; // rbp
  __int64 v66; // r9
  __int64 v67; // r14
  __int64 v68; // r13
  __int64 v69; // rbp
  __int64 v70; // r9
  __int64 v71; // r14
  __int64 v72; // rbx
  __int64 v73; // r11
  __int64 v74; // r8
  __int64 v75; // r10
  __int64 v76; // r15
  __int64 v77; // rsi
  __int64 v78; // r12
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rbx
  __int64 v82; // r13
  __int64 v83; // r11
  __int64 v84; // r8
  __int64 v85; // rsi
  __int64 v86; // r12
  __int64 v87; // rcx
  __int64 v88; // r15
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rbp
  __int64 v92; // r10
  __int64 v93; // rbx
  __int64 v94; // r13
  __int64 v95; // r9
  __int64 v96; // r15
  __int64 v97; // r13
  __int64 v98; // rax
  __int64 v99; // r15
  __int64 v100; // r12
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rbx
  __int64 v105; // rbp
  __int64 v106; // r13
  __int64 v107; // r12
  __int64 v108; // rcx
  __int64 v109; // r9
  __int64 v110; // r11
  __int64 v111; // r10
  __int64 v112; // r8
  __int64 v113; // rsi
  __int64 v114; // r14
  __int64 v115; // rdx
  __int64 v116; // r15
  __int64 v117; // rax
  __int64 v118; // r11
  __int64 v119; // r13
  __int64 v120; // r10
  __int64 v121; // r8
  __int64 v122; // r14
  __int64 v123; // rsi
  __int64 v124; // r15
  __int64 v125; // rax
  __int64 v126; // r13
  __int64 v127; // rbp
  __int64 v128; // rbx
  __int64 v129; // r9
  __int64 v130; // r8
  __int64 v131; // r14
  __int64 v132; // r15
  __int64 v133; // r13
  __int64 v134; // rcx
  __int64 v135; // rbp
  __int64 v136; // rbx
  __int64 v137; // r9
  __int64 v138; // r8
  __int64 v139; // r14
  __int64 v140; // rcx
  __int64 v141; // r11
  __int64 v142; // rsi
  __int64 v143; // r10
  __int64 v144; // r12
  __int64 v145; // rbp
  __int64 v146; // r13
  __int64 v147; // rdx
  __int64 v148; // r15
  __int64 v149; // r11
  __int64 v150; // rax
  __int64 v151; // rsi
  __int64 v152; // r10
  __int64 v153; // r12
  __int64 v154; // r13
  __int64 v155; // rdx
  __int64 v156; // r15
  __int64 v157; // r13
  __int64 v158; // r12
  __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rbx
  __int64 v162; // rbp
  __int64 v163; // r11
  __int64 v164; // r9
  __int64 v165; // r13
  __int64 v166; // r15
  __int64 v167; // r8
  __int64 v168; // r12
  __int64 v169; // r14
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rbx
  __int64 v173; // rax
  __int64 v174; // r11
  __int64 v175; // r9
  __int64 v176; // r8
  __int64 v177; // rdx
  __int64 v178; // r14
  __int64 v179; // r10
  __int64 v180; // rax
  __int64 v181; // rsi
  __int64 v182; // r15
  __int64 v183; // r13
  __int64 v184; // r10
  __int64 v185; // rsi
  __int64 v186; // r15
  __int64 v187; // r13
  __int64 v188; // rbp
  __int64 v189; // r9
  __int64 v190; // r14
  __int64 v191; // r13
  __int64 v192; // rbp
  __int64 v193; // r9
  __int64 v194; // r14
  __int64 v195; // rbx
  __int64 v196; // r11
  __int64 v197; // r8
  __int64 v198; // r10
  __int64 v199; // r15
  __int64 v200; // rsi
  __int64 v201; // r12
  __int64 v202; // rcx
  __int64 v203; // rdx
  __int64 v204; // rbx
  __int64 v205; // r13
  __int64 v206; // r11
  __int64 v207; // r8
  __int64 v208; // rsi
  __int64 v209; // r12
  __int64 v210; // rcx
  __int64 v211; // r15
  __int64 v212; // rdx
  __int64 v213; // rax
  __int64 v214; // rbp
  __int64 v215; // r10
  __int64 v216; // r13
  __int64 v217; // r15
  __int64 v218; // r13
  __int64 v219; // r12
  __int64 v220; // rax
  __int64 v221; // rcx
  __int64 v222; // rbp
  __int64 v223; // r12
  __int64 v224; // rbx
  __int64 v225; // rcx
  __int64 v226; // r9
  __int64 v227; // r15
  __int64 v228; // rdx
  __int64 v229; // rbx
  __int64 v230; // r9
  __int64 v231; // r11
  __int64 v232; // r10
  __int64 v233; // r8
  __int64 v234; // rsi
  __int64 v235; // r14
  __int64 v236; // rdx
  __int64 v237; // r15
  __int64 v238; // rax
  __int64 v239; // r11
  __int64 v240; // r13
  __int64 v241; // r10
  __int64 v242; // r8
  __int64 v243; // r14
  __int64 v244; // rsi
  __int64 v245; // r15
  __int64 v246; // rax
  __int64 v247; // r13
  __int64 v248; // rbp
  __int64 v249; // rbx
  __int64 v250; // r9
  __int64 v251; // r8
  __int64 v252; // r11
  __int64 v253; // r14
  __int64 v254; // r15
  __int64 v255; // r13
  __int64 v256; // rcx
  __int64 v257; // rbp
  __int64 v258; // rbx
  __int64 v259; // r9
  __int64 v260; // r8
  __int64 v261; // r14
  __int64 v262; // rcx
  __int64 v263; // rsi
  __int64 v264; // r12
  __int64 v265; // r10
  __int64 v266; // rdx
  __int64 v267; // rbp
  __int64 v268; // r13
  __int64 v269; // r11
  __int64 v270; // r15
  __int64 v271; // rsi
  __int64 v272; // rax
  __int64 v273; // r12
  __int64 v274; // r10
  __int64 v275; // rdx
  __int64 v276; // r13
  __int64 v277; // r15
  __int64 v278; // r13
  __int64 v279; // r12
  __int64 v280; // rax
  __int64 v281; // rcx
  __int64 v282; // rbx
  __int64 v283; // rbp
  __int64 v284; // r11
  __int64 v285; // r9
  __int64 v286; // r13
  __int64 v287; // r15
  __int64 v288; // r8
  __int64 v289; // r12
  __int64 v290; // r14
  __int64 v291; // rdx
  __int64 v292; // rcx
  __int64 v293; // rbx
  __int64 v294; // rax
  __int64 v295; // r11
  __int64 v296; // r9
  __int64 v297; // r8
  __int64 v298; // rdx
  __int64 v299; // r14
  __int64 v300; // r10
  __int64 v301; // rax
  __int64 v302; // rsi
  __int64 v303; // r15
  __int64 v304; // r13
  __int64 v305; // r10
  __int64 v306; // rsi
  __int64 v307; // r15
  __int64 v308; // r13
  __int64 v309; // rbp
  __int64 v310; // r9
  __int64 v311; // r14
  __int64 v312; // r13
  __int64 v313; // rbp
  __int64 v314; // r9
  __int64 v315; // r14
  __int64 v316; // rbx
  __int64 v317; // r11
  __int64 v318; // r8
  __int64 v319; // r15
  __int64 v320; // rsi
  __int64 v321; // r10
  __int64 v322; // r12
  __int64 v323; // rcx
  __int64 v324; // r13
  __int64 v325; // rbx
  __int64 v326; // rdx
  __int64 v327; // r11
  __int64 v328; // r8
  __int64 v329; // rsi
  __int64 v330; // r12
  __int64 v331; // rcx
  __int64 v332; // r15
  __int64 v333; // rdx
  __int64 v334; // rax
  __int64 v335; // rbp
  __int64 v336; // r10
  __int64 v337; // rbx
  __int64 v338; // r13
  __int64 v339; // r9
  __int64 v340; // r15
  __int64 v341; // r13
  __int64 v342; // rax
  __int64 v343; // r15
  __int64 v344; // r12
  __int64 v345; // rax
  __int64 v346; // rdx
  __int64 v347; // rcx
  __int64 v348; // rbx
  __int64 v349; // rbp
  __int64 v350; // r13
  __int64 v351; // r12
  __int64 v352; // rcx
  __int64 v353; // r9
  __int64 v354; // r11
  __int64 v355; // r10
  __int64 v356; // r8
  __int64 v357; // rsi
  __int64 v358; // r14
  __int64 v359; // rdx
  __int64 v360; // r15
  __int64 v361; // rax
  __int64 v362; // r11
  __int64 v363; // r13
  __int64 v364; // r10
  __int64 v365; // r8
  __int64 v366; // r14
  __int64 v367; // rsi
  __int64 v368; // r15
  __int64 v369; // rax
  __int64 v370; // r13
  __int64 v371; // rbp
  __int64 v372; // rbx
  __int64 v373; // r9
  __int64 v374; // r8
  __int64 v375; // r11
  __int64 v376; // r14
  __int64 v377; // r15
  __int64 v378; // r13
  __int64 v379; // rcx
  __int64 v380; // rbp
  __int64 v381; // rbx
  __int64 v382; // r9
  __int64 v383; // r8
  __int64 v384; // r14
  __int64 v385; // rcx
  __int64 v386; // rsi
  __int64 v387; // r12
  __int64 v388; // r10
  __int64 v389; // rdx
  __int64 v390; // rbp
  __int64 v391; // r13
  __int64 v392; // r11
  __int64 v393; // r15
  __int64 v394; // rsi
  __int64 v395; // rax
  __int64 v396; // r12
  __int64 v397; // r10
  __int64 v398; // rdx
  __int64 v399; // r13
  __int64 v400; // r15
  __int64 v401; // r13
  __int64 v402; // r12
  __int64 v403; // rax
  __int64 v404; // rcx
  __int64 v405; // rbx
  __int64 v406; // rbp
  __int64 v407; // r11
  __int64 v408; // r9
  __int64 v409; // r13
  __int64 v410; // r15
  __int64 v411; // r8
  __int64 v412; // r12
  __int64 v413; // r14
  __int64 v414; // rdx
  __int64 v415; // rcx
  __int64 v416; // rbx
  __int64 v417; // rax
  __int64 v418; // r11
  __int64 v419; // r9
  __int64 v420; // r8
  __int64 v421; // rdx
  __int64 v422; // r14
  __int64 v423; // r10
  __int64 v424; // rax
  __int64 v425; // rsi
  __int64 v426; // r15
  __int64 v427; // r13
  __int64 v428; // r10
  __int64 v429; // rsi
  __int64 v430; // r15
  __int64 v431; // r13
  __int64 v432; // rbp
  __int64 v433; // r9
  __int64 v434; // r14
  __int64 v435; // r13
  __int64 v436; // rbp
  __int64 v437; // r9
  __int64 v438; // r14
  __int64 v439; // rbx
  __int64 v440; // r11
  __int64 v441; // r8
  __int64 v442; // r10
  __int64 v443; // r15
  __int64 v444; // rsi
  __int64 v445; // r12
  __int64 v446; // rcx
  __int64 v447; // rdx
  __int64 v448; // rbx
  __int64 v449; // r13
  __int64 v450; // r11
  __int64 v451; // r8
  __int64 v452; // rsi
  __int64 v453; // r12
  __int64 v454; // rcx
  __int64 v455; // r15
  __int64 v456; // rdx
  __int64 v457; // rax
  __int64 v458; // rbp
  __int64 v459; // r10
  __int64 v460; // r13
  __int64 v461; // r15
  __int64 v462; // r13
  __int64 v463; // r12
  __int64 v464; // rax
  __int64 v465; // rcx
  __int64 v466; // rbp
  __int64 v467; // r12
  __int64 v468; // rbx
  __int64 v469; // rcx
  __int64 v470; // r9
  __int64 v471; // r15
  __int64 v472; // rdx
  __int64 v473; // rbx
  __int64 v474; // r9
  __int64 v475; // r11
  __int64 v476; // r10
  __int64 v477; // r8
  __int64 v478; // rsi
  __int64 v479; // r14
  __int64 v480; // rdx
  __int64 v481; // r15
  __int64 v482; // rax
  __int64 v483; // r11
  __int64 v484; // r13
  __int64 v485; // r10
  __int64 v486; // r8
  __int64 v487; // r14
  __int64 v488; // rsi
  __int64 v489; // r15
  __int64 v490; // rax
  __int64 v491; // r13
  __int64 v492; // rbp
  __int64 v493; // rbx
  __int64 v494; // r9
  __int64 v495; // r8
  __int64 v496; // r11
  __int64 v497; // r14
  __int64 v498; // r15
  __int64 v499; // r13
  __int64 v500; // rcx
  __int64 v501; // rbp
  __int64 v502; // rbx
  __int64 v503; // r9
  __int64 v504; // r8
  __int64 v505; // r14
  __int64 v506; // rcx
  __int64 v507; // rsi
  __int64 v508; // r12
  __int64 v509; // r10
  __int64 v510; // rdx
  __int64 v511; // rbp
  __int64 v512; // r13
  __int64 v513; // r11
  __int64 v514; // r15
  __int64 v515; // rsi
  __int64 v516; // rax
  __int64 v517; // r12
  __int64 v518; // r10
  __int64 v519; // rdx
  __int64 v520; // r13
  __int64 v521; // r15
  __int64 v522; // r13
  __int64 v523; // r12
  __int64 v524; // rax
  __int64 v525; // rcx
  __int64 v526; // rbx
  __int64 v527; // rbp
  __int64 v528; // r11
  __int64 v529; // r9
  __int64 v530; // r13
  __int64 v531; // r15
  __int64 v532; // r8
  __int64 v533; // r12
  __int64 v534; // r14
  __int64 v535; // rdx
  __int64 v536; // rcx
  __int64 v537; // rbx
  __int64 v538; // rax
  __int64 v539; // r11
  __int64 v540; // r9
  __int64 v541; // r8
  __int64 v542; // rdx
  __int64 v543; // r14
  __int64 v544; // r10
  __int64 v545; // rax
  __int64 v546; // rsi
  __int64 v547; // r15
  __int64 v548; // r13
  __int64 v549; // r10
  __int64 v550; // rsi
  __int64 v551; // r15
  __int64 v552; // r13
  __int64 v553; // rbp
  __int64 v554; // r9
  __int64 v555; // r14
  __int64 v556; // r13
  __int64 v557; // rbp
  __int64 v558; // r9
  __int64 v559; // r14
  __int64 v560; // rbx
  __int64 v561; // r11
  __int64 v562; // r8
  __int64 v563; // r10
  __int64 v564; // r15
  __int64 v565; // rsi
  __int64 v566; // r12
  __int64 v567; // rcx
  __int64 v568; // rdx
  __int64 v569; // rbx
  __int64 v570; // r13
  __int64 v571; // r11
  __int64 v572; // r8
  __int64 v573; // rsi
  __int64 v574; // r12
  __int64 v575; // rcx
  __int64 v576; // r15
  __int64 v577; // rdx
  __int64 v578; // rax
  __int64 v579; // rbp
  __int64 v580; // r10
  __int64 v581; // rbx
  __int64 v582; // r13
  __int64 v583; // r9
  __int64 v584; // r15
  __int64 v585; // r13
  __int64 v586; // rax
  __int64 v587; // r15
  __int64 v588; // r12
  __int64 v589; // rax
  __int64 v590; // rdx
  __int64 v591; // rcx
  __int64 v592; // rbx
  __int64 v593; // rbp
  __int64 v594; // r13
  __int64 v595; // r12
  __int64 v596; // rcx
  __int64 v597; // r9
  __int64 v598; // r11
  __int64 v599; // r10
  __int64 v600; // r8
  __int64 v601; // rsi
  __int64 v602; // r14
  __int64 v603; // rdx
  __int64 v604; // r15
  __int64 v605; // rax
  __int64 v606; // r11
  __int64 v607; // r13
  __int64 v608; // r10
  __int64 v609; // r8
  __int64 v610; // r14
  __int64 v611; // rsi
  __int64 v612; // r15
  __int64 v613; // rax
  __int64 v614; // r13
  __int64 v615; // rbp
  __int64 v616; // rbx
  __int64 v617; // r9
  __int64 v618; // r8
  __int64 v619; // r11
  __int64 v620; // r14
  __int64 v621; // r15
  __int64 v622; // r13
  __int64 v623; // rcx
  __int64 v624; // rbp
  __int64 v625; // rbx
  __int64 v626; // r9
  __int64 v627; // r8
  __int64 v628; // r14
  __int64 v629; // rcx
  __int64 v630; // rsi
  __int64 v631; // r12
  __int64 v632; // r10
  __int64 v633; // rdx
  __int64 v634; // rbp
  __int64 v635; // r13
  __int64 v636; // r11
  __int64 v637; // r15
  __int64 v638; // rsi
  __int64 v639; // rax
  __int64 v640; // r12
  __int64 v641; // r10
  __int64 v642; // rdx
  __int64 v643; // r13
  __int64 v644; // r15
  __int64 v645; // r13
  __int64 v646; // r12
  __int64 v647; // rax
  __int64 v648; // rcx
  __int64 v649; // rbx
  __int64 v650; // rbp
  __int64 v651; // r11
  __int64 v652; // r9
  __int64 v653; // r13
  __int64 v654; // r15
  __int64 v655; // r8
  __int64 v656; // r12
  __int64 v657; // r14
  __int64 v658; // rdx
  __int64 v659; // rcx
  __int64 v660; // rbx
  __int64 v661; // rax
  __int64 v662; // r11
  __int64 v663; // r9
  __int64 v664; // r8
  __int64 v665; // rdx
  __int64 v666; // r14
  __int64 v667; // r10
  __int64 v668; // rax
  __int64 v669; // rsi
  __int64 v670; // r15
  __int64 v671; // r13
  __int64 v672; // r10
  __int64 v673; // rsi
  __int64 v674; // r15
  __int64 v675; // r13
  __int64 v676; // rbp
  __int64 v677; // r9
  __int64 v678; // r14
  __int64 v679; // r13
  __int64 v680; // rbp
  __int64 v681; // r9
  __int64 v682; // r14
  __int64 v683; // rbx
  __int64 v684; // r11
  __int64 v685; // r10
  __int64 v686; // r8
  __int64 v687; // rsi
  __int64 v688; // r15
  __int64 v689; // r13
  __int64 v690; // r12
  __int64 v691; // rcx
  __int64 v692; // rdx
  __int64 v693; // rbx
  __int64 v694; // r14
  __int64 v695; // r11
  __int64 v696; // r8
  __int64 v697; // rsi
  __int64 v698; // r15
  __int64 v699; // r12
  __int64 v700; // rcx
  __int64 v701; // rdx
  __int64 v702; // rax
  __int64 v703; // rbp
  __int64 v704; // r10
  __int64 v705; // r13
  __int64 v706; // r14
  __int64 v707; // r13
  __int64 v708; // r12
  __int64 v709; // rax
  __int64 v710; // rcx
  __int64 v711; // rbp
  __int64 v712; // rbx
  __int64 v713; // r9
  __int64 v714; // r14
  __int64 v715; // rdx
  __int64 v716; // rbx
  __int64 v717; // r11
  __int64 v718; // rbx
  __int64 v719; // r14
  __int64 v720; // r8
  __int64 v721; // rax
  __int64 v722; // r14
  __int64 v723; // r14
  __int64 v724; // rdx
  __int64 v725; // rsi
  __int64 v726; // r15
  __int64 v727; // r13
  __int64 result; // rax
  __int64 v729; // [rsp+0h] [rbp-158h]
  __int64 v730; // [rsp+0h] [rbp-158h]
  __int64 v731; // [rsp+0h] [rbp-158h]
  __int64 v732; // [rsp+0h] [rbp-158h]
  __int64 v733; // [rsp+0h] [rbp-158h]
  __int64 v734; // [rsp+0h] [rbp-158h]
  __int64 v735; // [rsp+0h] [rbp-158h]
  __int64 v736; // [rsp+0h] [rbp-158h]
  __int64 v737; // [rsp+0h] [rbp-158h]
  __int64 v738; // [rsp+0h] [rbp-158h]
  __int64 v739; // [rsp+0h] [rbp-158h]
  __int64 v740; // [rsp+0h] [rbp-158h]
  __int64 v741; // [rsp+8h] [rbp-150h]
  __int64 v742; // [rsp+8h] [rbp-150h]
  __int64 v743; // [rsp+8h] [rbp-150h]
  __int64 v744; // [rsp+8h] [rbp-150h]
  __int64 v745; // [rsp+8h] [rbp-150h]
  __int64 v746; // [rsp+8h] [rbp-150h]
  __int64 v747; // [rsp+8h] [rbp-150h]
  __int64 v748; // [rsp+8h] [rbp-150h]
  __int64 v749; // [rsp+8h] [rbp-150h]
  __int64 v750; // [rsp+8h] [rbp-150h]
  __int64 v751; // [rsp+8h] [rbp-150h]
  __int64 v752; // [rsp+10h] [rbp-148h]
  __int64 v753; // [rsp+10h] [rbp-148h]
  __int64 v754; // [rsp+10h] [rbp-148h]
  __int64 v755; // [rsp+10h] [rbp-148h]
  __int64 v756; // [rsp+10h] [rbp-148h]
  __int64 v757; // [rsp+10h] [rbp-148h]
  __int64 v758; // [rsp+10h] [rbp-148h]
  __int64 v759; // [rsp+10h] [rbp-148h]
  __int64 v760; // [rsp+10h] [rbp-148h]
  __int64 v761; // [rsp+10h] [rbp-148h]
  __int64 v762; // [rsp+10h] [rbp-148h]
  __int64 v763; // [rsp+10h] [rbp-148h]
  __int64 v764; // [rsp+18h] [rbp-140h]
  __int64 v765; // [rsp+18h] [rbp-140h]
  __int64 v766; // [rsp+18h] [rbp-140h]
  __int64 v767; // [rsp+18h] [rbp-140h]
  __int64 v768; // [rsp+18h] [rbp-140h]
  __int64 v769; // [rsp+18h] [rbp-140h]
  __int64 v770; // [rsp+18h] [rbp-140h]
  __int64 v771; // [rsp+18h] [rbp-140h]
  __int64 v772; // [rsp+18h] [rbp-140h]
  __int64 v773; // [rsp+18h] [rbp-140h]
  __int64 v774; // [rsp+18h] [rbp-140h]
  __int64 v775; // [rsp+20h] [rbp-138h]
  __int64 v776; // [rsp+28h] [rbp-130h]
  __int64 v777; // [rsp+30h] [rbp-128h]
  __int64 v778; // [rsp+38h] [rbp-120h]
  __int64 v779; // [rsp+40h] [rbp-118h]
  __int64 v780; // [rsp+48h] [rbp-110h]
  __int64 v781; // [rsp+50h] [rbp-108h]
  __int64 v782; // [rsp+58h] [rbp-100h]
  __int64 v783; // [rsp+60h] [rbp-F8h]
  __int64 v784; // [rsp+68h] [rbp-F0h]
  __int64 v785; // [rsp+70h] [rbp-E8h]
  __int64 v786; // [rsp+78h] [rbp-E0h]
  __int64 v787; // [rsp+80h] [rbp-D8h]
  __int64 v788; // [rsp+88h] [rbp-D0h]
  __int64 v789; // [rsp+90h] [rbp-C8h]
  __int64 v790; // [rsp+98h] [rbp-C0h]
  __int64 v791; // [rsp+A0h] [rbp-B8h]
  __int64 v792; // [rsp+A8h] [rbp-B0h]
  __int64 v793; // [rsp+B0h] [rbp-A8h]
  __int64 v794; // [rsp+B8h] [rbp-A0h]
  __int64 v795; // [rsp+C0h] [rbp-98h]
  __int64 v796; // [rsp+C8h] [rbp-90h]
  __int64 v797; // [rsp+D0h] [rbp-88h]
  __int64 v798; // [rsp+D8h] [rbp-80h]
  __int64 v799; // [rsp+E0h] [rbp-78h]
  __int64 v800; // [rsp+E8h] [rbp-70h]
  __int64 v801; // [rsp+F0h] [rbp-68h]
  __int64 v802; // [rsp+F8h] [rbp-60h]
  __int64 v803; // [rsp+100h] [rbp-58h]
  __int64 v804; // [rsp+108h] [rbp-50h]
  __int64 v805; // [rsp+110h] [rbp-48h]
  __int64 v806; // [rsp+118h] [rbp-40h]

  for ( i = 0LL; i != 16; ++i )
    *(&v775 + i) = *(_QWORD *)(a2 + 8 * i);
  for ( j = 0LL; j != 8; ++j )
    *(&v791 + j) = a1[j];
  v4 = v775 + v795 + v791;
  v5 = v777 + v796 + v792;
  v6 = __ROL8__(v4 ^ a1[8] ^ 0x510E527FADE682D1LL, 32);
  v7 = v6 + 7640891576956012808LL;
  v8 = v779 + v797 + v793;
  v9 = __ROL8__(v5 ^ a1[9] ^ 0x9B05688C2B3E6C1FLL, 32);
  v10 = v9 - 4942790177534073029LL;
  v11 = __ROR8__((v6 + 7640891576956012808LL) ^ v795, 24);
  v12 = v11 + v776 + v4;
  v13 = __ROR8__((v9 - 4942790177534073029LL) ^ v796, 24);
  v14 = v13 + v778 + v5;
  v15 = __ROR8__(v12 ^ v6, 16);
  v16 = v15 + v7;
  v17 = __ROR8__(v14 ^ v9, 16);
  v729 = v10 + v17;
  v18 = __ROL8__((v10 + v17) ^ v13, 1);
  v752 = __ROL8__(v16 ^ v11, 1);
  v19 = __ROL8__(v8 ^ a1[10] ^ 0x1F83D9ABFB41BD6BLL, 32);
  v20 = v781 + v798 + v794;
  v21 = v19 + 4354685564936845355LL;
  v22 = v18 + v783 + v12;
  v23 = __ROR8__((v19 + 4354685564936845355LL) ^ v797, 24);
  v24 = v23 + v780 + v8;
  v25 = __ROL8__(v20 ^ a1[11] ^ 0x5BE0CD19137E2179LL, 32);
  v26 = v25 - 6534734903238641935LL;
  v27 = __ROR8__(v24 ^ v19, 16);
  v28 = v27 + v21;
  v29 = __ROR8__((v25 - 6534734903238641935LL) ^ v798, 24);
  v30 = v29 + v782 + v20;
  v31 = __ROL8__(v28 ^ v23, 1);
  v32 = __ROR8__(v30 ^ v25, 16);
  v33 = v32 + v26;
  v34 = __ROL8__(v22 ^ v32, 32);
  v35 = v34 + v28;
  v36 = __ROL8__(v33 ^ v29, 1);
  v37 = __ROR8__(v35 ^ v18, 24);
  v38 = v31 + v785 + v14;
  v39 = v37 + v784 + v22;
  v40 = v36 + v787 + v24;
  v41 = __ROL8__(v38 ^ v15, 32);
  v42 = __ROR8__(v39 ^ v34, 16);
  v43 = __ROL8__(v40 ^ v17, 32);
  v44 = v42 + v35;
  v764 = v42;
  v45 = v33 + v41;
  v46 = v43 + v16;
  v47 = __ROR8__((v33 + v41) ^ v31, 24);
  v48 = __ROR8__(v46 ^ v36, 24);
  v49 = v47 + v786 + v38;
  v50 = v48 + v788 + v40;
  v51 = __ROL8__(v44 ^ v37, 1);
  v52 = __ROR8__(v49 ^ v41, 16);
  v53 = __ROR8__(v50 ^ v43, 16);
  v741 = v45 + v52;
  v54 = __ROL8__((v45 + v52) ^ v47, 1);
  v55 = v53 + v46;
  v56 = v752 + v789 + v30;
  v57 = __ROL8__(v55 ^ v48, 1);
  v58 = __ROL8__(v56 ^ v27, 32);
  v59 = v58 + v729;
  v60 = __ROR8__((v58 + v729) ^ v752, 24);
  v61 = v60 + v790 + v56;
  v62 = __ROR8__(v61 ^ v58, 16);
  v63 = v62 + v59;
  v64 = __ROL8__(v63 ^ v60, 1);
  v65 = v64 + v789 + v39;
  v66 = __ROL8__(v65 ^ v52, 32);
  v67 = v66 + v55;
  v68 = __ROR8__(v67 ^ v64, 24);
  v69 = v68 + v785 + v65;
  v70 = __ROR8__(v69 ^ v66, 16);
  v71 = v70 + v67;
  v72 = v51 + v779 + v49;
  v73 = v54 + v784 + v50;
  v753 = __ROL8__(v71 ^ v68, 1);
  v74 = __ROL8__(v72 ^ v53, 32);
  v75 = v57 + v788 + v61;
  v76 = v74 + v63;
  v77 = __ROL8__(v73 ^ v62, 32);
  v78 = v77 + v44;
  v79 = __ROR8__(v76 ^ v51, 24);
  v80 = __ROR8__(v78 ^ v54, 24);
  v81 = v79 + v783 + v72;
  v82 = __ROL8__(v75 ^ v764, 32);
  v83 = v80 + v790 + v73;
  v84 = __ROR8__(v81 ^ v74, 16);
  v85 = __ROR8__(v83 ^ v77, 16);
  v730 = v84 + v76;
  v86 = v85 + v78;
  v87 = __ROL8__((v84 + v76) ^ v79, 1);
  v88 = v82 + v741;
  v89 = __ROL8__(v86 ^ v80, 1);
  v90 = __ROR8__((v82 + v741) ^ v57, 24);
  v91 = v87 + v776 + v69;
  v92 = v90 + v781 + v75;
  v93 = v89 + v775 + v81;
  v94 = __ROR8__(v92 ^ v82, 16);
  v95 = __ROL8__(v93 ^ v70, 32);
  v96 = v94 + v88;
  v97 = __ROL8__(v91 ^ v94, 32);
  v98 = v96 ^ v90;
  v99 = v95 + v96;
  v100 = v97 + v86;
  v101 = __ROL8__(v98, 1);
  v102 = __ROR8__(v99 ^ v89, 24);
  v103 = __ROR8__(v100 ^ v87, 24);
  v104 = v102 + v777 + v93;
  v105 = v103 + v787 + v91;
  v106 = __ROR8__(v105 ^ v97, 16);
  v107 = v106 + v100;
  v765 = v106;
  v108 = __ROL8__(v107 ^ v103, 1);
  v109 = __ROR8__(v104 ^ v95, 16);
  v110 = v101 + v786 + v83;
  v111 = v753 + v780 + v92;
  v742 = v109 + v99;
  v112 = __ROL8__(v110 ^ v84, 32);
  v113 = __ROL8__(v111 ^ v85, 32);
  v114 = v112 + v71;
  v115 = __ROL8__((v109 + v99) ^ v102, 1);
  v116 = v113 + v730;
  v117 = __ROR8__(v114 ^ v101, 24);
  v118 = v117 + v782 + v110;
  v119 = __ROR8__((v113 + v730) ^ v753, 24);
  v120 = v119 + v778 + v111;
  v121 = __ROR8__(v118 ^ v112, 16);
  v122 = v121 + v114;
  v123 = __ROR8__(v120 ^ v113, 16);
  v124 = v123 + v116;
  v125 = __ROL8__(v122 ^ v117, 1);
  v126 = __ROL8__(v124 ^ v119, 1);
  v127 = v126 + v786 + v105;
  v128 = v108 + v787 + v104;
  v129 = __ROL8__(v127 ^ v109, 32);
  v130 = __ROL8__(v128 ^ v121, 32);
  v131 = v129 + v122;
  v132 = v130 + v124;
  v133 = __ROR8__(v131 ^ v126, 24);
  v134 = __ROR8__(v132 ^ v108, 24);
  v135 = v133 + v783 + v127;
  v136 = v134 + v775 + v128;
  v137 = __ROR8__(v135 ^ v129, 16);
  v138 = __ROR8__(v136 ^ v130, 16);
  v139 = v137 + v131;
  v731 = v138 + v132;
  v140 = __ROL8__((v138 + v132) ^ v134, 1);
  v754 = __ROL8__(v139 ^ v133, 1);
  v141 = v115 + v780 + v118;
  v142 = __ROL8__(v141 ^ v123, 32);
  v143 = v125 + v790 + v120;
  v144 = v142 + v107;
  v145 = v140 + v785 + v135;
  v146 = __ROL8__(v143 ^ v765, 32);
  v147 = __ROR8__(v144 ^ v115, 24);
  v148 = v146 + v742;
  v149 = v147 + v777 + v141;
  v150 = __ROR8__((v146 + v742) ^ v125, 24);
  v151 = __ROR8__(v149 ^ v142, 16);
  v152 = v150 + v788 + v143;
  v153 = v151 + v144;
  v154 = __ROR8__(v152 ^ v146, 16);
  v155 = __ROL8__(v153 ^ v147, 1);
  v156 = v154 + v148;
  v157 = __ROL8__(v145 ^ v154, 32);
  v158 = v157 + v153;
  v159 = __ROL8__(v156 ^ v150, 1);
  v160 = __ROR8__(v158 ^ v140, 24);
  v161 = v155 + v778 + v136;
  v162 = v160 + v789 + v145;
  v163 = v159 + v782 + v149;
  v164 = __ROL8__(v161 ^ v137, 32);
  v165 = __ROR8__(v162 ^ v157, 16);
  v166 = v164 + v156;
  v167 = __ROL8__(v163 ^ v138, 32);
  v168 = v165 + v158;
  v766 = v165;
  v169 = v167 + v139;
  v170 = __ROR8__(v166 ^ v155, 24);
  v171 = __ROL8__(v168 ^ v160, 1);
  v172 = v170 + v781 + v161;
  v173 = __ROR8__(v169 ^ v159, 24);
  v174 = v173 + v776 + v163;
  v175 = __ROR8__(v172 ^ v164, 16);
  v176 = __ROR8__(v174 ^ v167, 16);
  v743 = v175 + v166;
  v177 = __ROL8__((v175 + v166) ^ v170, 1);
  v178 = v176 + v169;
  v179 = v754 + v784 + v152;
  v180 = __ROL8__(v178 ^ v173, 1);
  v181 = __ROL8__(v179 ^ v151, 32);
  v182 = v181 + v731;
  v183 = __ROR8__((v181 + v731) ^ v754, 24);
  v184 = v183 + v779 + v179;
  v185 = __ROR8__(v184 ^ v181, 16);
  v186 = v185 + v182;
  v187 = __ROL8__(v186 ^ v183, 1);
  v188 = v187 + v782 + v162;
  v189 = __ROL8__(v188 ^ v175, 32);
  v190 = v189 + v178;
  v191 = __ROR8__(v190 ^ v187, 24);
  v192 = v191 + v784 + v188;
  v193 = __ROR8__(v192 ^ v189, 16);
  v194 = v193 + v190;
  v195 = v171 + v778 + v172;
  v196 = v177 + v788 + v174;
  v755 = __ROL8__(v194 ^ v191, 1);
  v197 = __ROL8__(v195 ^ v176, 32);
  v198 = v180 + v786 + v184;
  v199 = v197 + v186;
  v200 = __ROL8__(v196 ^ v185, 32);
  v201 = v200 + v168;
  v202 = __ROR8__(v199 ^ v171, 24);
  v203 = __ROR8__(v201 ^ v177, 24);
  v204 = v202 + v776 + v195;
  v205 = __ROL8__(v198 ^ v766, 32);
  v206 = v203 + v787 + v196;
  v207 = __ROR8__(v204 ^ v197, 16);
  v208 = __ROR8__(v206 ^ v200, 16);
  v732 = v207 + v199;
  v209 = v208 + v201;
  v210 = __ROL8__((v207 + v199) ^ v202, 1);
  v211 = v205 + v743;
  v212 = __ROL8__(v209 ^ v203, 1);
  v213 = __ROR8__((v205 + v743) ^ v180, 24);
  v214 = v210 + v777 + v192;
  v215 = v213 + v789 + v198;
  v216 = __ROR8__(v215 ^ v205, 16);
  v217 = v216 + v211;
  v218 = __ROL8__(v214 ^ v216, 32);
  v219 = v218 + v209;
  v220 = __ROL8__(v217 ^ v213, 1);
  v221 = __ROR8__(v219 ^ v210, 24);
  v222 = v221 + v781 + v214;
  v767 = __ROR8__(v222 ^ v218, 16);
  v223 = v767 + v219;
  v224 = v212 + v780 + v204;
  v225 = __ROL8__(v223 ^ v221, 1);
  v226 = __ROL8__(v224 ^ v193, 32);
  v227 = v226 + v217;
  v228 = __ROR8__(v227 ^ v212, 24);
  v229 = v228 + v785 + v224;
  v230 = __ROR8__(v229 ^ v226, 16);
  v231 = v220 + v779 + v206;
  v232 = v755 + v790 + v215;
  v744 = v230 + v227;
  v233 = __ROL8__(v231 ^ v207, 32);
  v234 = __ROL8__(v232 ^ v208, 32);
  v235 = v233 + v194;
  v236 = __ROL8__((v230 + v227) ^ v228, 1);
  v237 = v234 + v732;
  v238 = __ROR8__(v235 ^ v220, 24);
  v239 = v238 + v775 + v231;
  v240 = __ROR8__((v234 + v732) ^ v755, 24);
  v241 = v240 + v783 + v232;
  v242 = __ROR8__(v239 ^ v233, 16);
  v243 = v242 + v235;
  v244 = __ROR8__(v241 ^ v234, 16);
  v245 = v244 + v237;
  v246 = __ROL8__(v243 ^ v238, 1);
  v247 = __ROL8__(v245 ^ v240, 1);
  v248 = v247 + v784 + v222;
  v249 = v225 + v780 + v229;
  v250 = __ROL8__(v248 ^ v230, 32);
  v251 = __ROL8__(v249 ^ v242, 32);
  v252 = v236 + v777 + v239;
  v253 = v250 + v243;
  v254 = v251 + v245;
  v255 = __ROR8__(v253 ^ v247, 24);
  v256 = __ROR8__(v254 ^ v225, 24);
  v257 = v255 + v775 + v248;
  v258 = v256 + v782 + v249;
  v259 = __ROR8__(v257 ^ v250, 16);
  v260 = __ROR8__(v258 ^ v251, 16);
  v261 = v259 + v253;
  v733 = v260 + v254;
  v262 = __ROL8__((v260 + v254) ^ v256, 1);
  v756 = __ROL8__(v261 ^ v255, 1);
  v263 = __ROL8__(v252 ^ v244, 32);
  v264 = v263 + v223;
  v265 = v246 + v785 + v241;
  v266 = __ROR8__(v264 ^ v236, 24);
  v267 = v262 + v789 + v257;
  v268 = __ROL8__(v265 ^ v767, 32);
  v269 = v266 + v779 + v252;
  v270 = v268 + v744;
  v271 = __ROR8__(v269 ^ v263, 16);
  v272 = __ROR8__((v268 + v744) ^ v246, 24);
  v273 = v271 + v264;
  v274 = v272 + v790 + v265;
  v275 = __ROL8__(v273 ^ v266, 1);
  v276 = __ROR8__(v274 ^ v268, 16);
  v277 = v276 + v270;
  v278 = __ROL8__(v267 ^ v276, 32);
  v279 = v278 + v273;
  v280 = __ROL8__(v277 ^ v272, 1);
  v281 = __ROR8__(v279 ^ v262, 24);
  v282 = v275 + v786 + v258;
  v283 = v281 + v776 + v267;
  v284 = v280 + v781 + v269;
  v285 = __ROL8__(v282 ^ v259, 32);
  v286 = __ROR8__(v283 ^ v278, 16);
  v287 = v285 + v277;
  v288 = __ROL8__(v284 ^ v260, 32);
  v289 = v286 + v279;
  v768 = v286;
  v290 = v288 + v261;
  v291 = __ROR8__(v287 ^ v275, 24);
  v292 = __ROL8__(v289 ^ v281, 1);
  v293 = v291 + v787 + v282;
  v294 = __ROR8__(v290 ^ v280, 24);
  v295 = v294 + v783 + v284;
  v296 = __ROR8__(v293 ^ v285, 16);
  v297 = __ROR8__(v295 ^ v288, 16);
  v745 = v296 + v287;
  v298 = __ROL8__((v296 + v287) ^ v291, 1);
  v299 = v297 + v290;
  v300 = v756 + v778 + v274;
  v301 = __ROL8__(v299 ^ v294, 1);
  v302 = __ROL8__(v300 ^ v271, 32);
  v303 = v302 + v733;
  v304 = __ROR8__((v302 + v733) ^ v756, 24);
  v305 = v304 + v788 + v300;
  v306 = __ROR8__(v305 ^ v302, 16);
  v307 = v306 + v303;
  v308 = __ROL8__(v307 ^ v304, 1);
  v309 = v308 + v777 + v283;
  v310 = __ROL8__(v309 ^ v296, 32);
  v311 = v310 + v299;
  v312 = __ROR8__(v311 ^ v308, 24);
  v313 = v312 + v787 + v309;
  v314 = __ROR8__(v313 ^ v310, 16);
  v315 = v314 + v311;
  v316 = v292 + v781 + v293;
  v317 = v298 + v775 + v295;
  v757 = __ROL8__(v315 ^ v312, 1);
  v318 = __ROL8__(v316 ^ v297, 32);
  v319 = v318 + v307;
  v320 = __ROL8__(v317 ^ v306, 32);
  v321 = v301 + v783 + v305;
  v322 = v320 + v289;
  v323 = __ROR8__(v319 ^ v292, 24);
  v324 = __ROL8__(v321 ^ v768, 32);
  v325 = v323 + v785 + v316;
  v326 = __ROR8__(v322 ^ v298, 24);
  v327 = v326 + v786 + v317;
  v328 = __ROR8__(v325 ^ v318, 16);
  v329 = __ROR8__(v327 ^ v320, 16);
  v734 = v328 + v319;
  v330 = v329 + v322;
  v331 = __ROL8__((v328 + v319) ^ v323, 1);
  v332 = v324 + v745;
  v333 = __ROL8__(v330 ^ v326, 1);
  v334 = __ROR8__((v324 + v745) ^ v301, 24);
  v335 = v331 + v779 + v313;
  v336 = v334 + v778 + v321;
  v337 = v333 + v782 + v325;
  v338 = __ROR8__(v336 ^ v324, 16);
  v339 = __ROL8__(v337 ^ v314, 32);
  v340 = v338 + v332;
  v341 = __ROL8__(v335 ^ v338, 32);
  v342 = v340 ^ v334;
  v343 = v339 + v340;
  v344 = v341 + v330;
  v345 = __ROL8__(v342, 1);
  v346 = __ROR8__(v343 ^ v333, 24);
  v347 = __ROR8__(v344 ^ v331, 24);
  v348 = v346 + v780 + v337;
  v349 = v347 + v788 + v335;
  v350 = __ROR8__(v349 ^ v341, 16);
  v351 = v350 + v344;
  v769 = v350;
  v352 = __ROL8__(v351 ^ v347, 1);
  v353 = __ROR8__(v348 ^ v339, 16);
  v354 = v345 + v790 + v327;
  v355 = v757 + v776 + v336;
  v746 = v353 + v343;
  v356 = __ROL8__(v354 ^ v328, 32);
  v357 = __ROL8__(v355 ^ v329, 32);
  v358 = v356 + v315;
  v359 = __ROL8__((v353 + v343) ^ v346, 1);
  v360 = v357 + v734;
  v361 = __ROR8__(v358 ^ v345, 24);
  v362 = v361 + v789 + v354;
  v363 = __ROR8__((v357 + v734) ^ v757, 24);
  v364 = v363 + v784 + v355;
  v365 = __ROR8__(v362 ^ v356, 16);
  v366 = v365 + v358;
  v367 = __ROR8__(v364 ^ v357, 16);
  v368 = v367 + v360;
  v369 = __ROL8__(v366 ^ v361, 1);
  v370 = __ROL8__(v368 ^ v363, 1);
  v371 = v370 + v787 + v349;
  v372 = v352 + v776 + v348;
  v373 = __ROL8__(v371 ^ v353, 32);
  v374 = __ROL8__(v372 ^ v365, 32);
  v375 = v359 + v789 + v362;
  v376 = v373 + v366;
  v377 = v374 + v368;
  v378 = __ROR8__(v376 ^ v370, 24);
  v379 = __ROR8__(v377 ^ v352, 24);
  v380 = v378 + v780 + v371;
  v381 = v379 + v790 + v372;
  v382 = __ROR8__(v380 ^ v373, 16);
  v383 = __ROR8__(v381 ^ v374, 16);
  v384 = v382 + v376;
  v735 = v383 + v377;
  v385 = __ROL8__((v383 + v377) ^ v379, 1);
  v758 = __ROL8__(v384 ^ v378, 1);
  v386 = __ROL8__(v375 ^ v367, 32);
  v387 = v386 + v351;
  v388 = v369 + v779 + v364;
  v389 = __ROR8__(v387 ^ v359, 24);
  v390 = v385 + v775 + v380;
  v391 = __ROL8__(v388 ^ v769, 32);
  v392 = v389 + v788 + v375;
  v393 = v391 + v746;
  v394 = __ROR8__(v392 ^ v386, 16);
  v395 = __ROR8__((v391 + v746) ^ v369, 24);
  v396 = v394 + v387;
  v397 = v395 + v785 + v388;
  v398 = __ROL8__(v396 ^ v389, 1);
  v399 = __ROR8__(v397 ^ v391, 16);
  v400 = v399 + v393;
  v401 = __ROL8__(v390 ^ v399, 32);
  v402 = v401 + v396;
  v403 = __ROL8__(v400 ^ v395, 1);
  v404 = __ROR8__(v402 ^ v385, 24);
  v405 = v398 + v781 + v381;
  v406 = v404 + v782 + v390;
  v407 = v403 + v784 + v392;
  v408 = __ROL8__(v405 ^ v382, 32);
  v409 = __ROR8__(v406 ^ v401, 16);
  v410 = v408 + v400;
  v411 = __ROL8__(v407 ^ v383, 32);
  v412 = v409 + v402;
  v770 = v409;
  v413 = v411 + v384;
  v414 = __ROR8__(v410 ^ v398, 24);
  v415 = __ROL8__(v412 ^ v404, 1);
  v416 = v414 + v778 + v405;
  v417 = __ROR8__(v413 ^ v403, 24);
  v418 = v417 + v777 + v407;
  v419 = __ROR8__(v416 ^ v408, 16);
  v420 = __ROR8__(v418 ^ v411, 16);
  v747 = v419 + v410;
  v421 = __ROL8__((v419 + v410) ^ v414, 1);
  v422 = v420 + v413;
  v423 = v758 + v783 + v397;
  v424 = __ROL8__(v422 ^ v417, 1);
  v425 = __ROL8__(v423 ^ v394, 32);
  v426 = v425 + v735;
  v427 = __ROR8__((v425 + v735) ^ v758, 24);
  v428 = v427 + v786 + v423;
  v429 = __ROR8__(v428 ^ v425, 16);
  v430 = v429 + v426;
  v431 = __ROL8__(v430 ^ v427, 1);
  v432 = v431 + v788 + v406;
  v433 = __ROL8__(v432 ^ v419, 32);
  v434 = v433 + v422;
  v435 = __ROR8__(v434 ^ v431, 24);
  v436 = v435 + v786 + v432;
  v437 = __ROR8__(v436 ^ v433, 16);
  v438 = v437 + v434;
  v439 = v415 + v782 + v416;
  v440 = v421 + v787 + v418;
  v759 = __ROL8__(v438 ^ v435, 1);
  v441 = __ROL8__(v439 ^ v420, 32);
  v442 = v424 + v778 + v428;
  v443 = v441 + v430;
  v444 = __ROL8__(v440 ^ v429, 32);
  v445 = v444 + v412;
  v446 = __ROR8__(v443 ^ v415, 24);
  v447 = __ROR8__(v445 ^ v421, 24);
  v448 = v446 + v789 + v439;
  v449 = __ROL8__(v442 ^ v770, 32);
  v450 = v447 + v776 + v440;
  v451 = __ROR8__(v448 ^ v441, 16);
  v452 = __ROR8__(v450 ^ v444, 16);
  v736 = v451 + v443;
  v453 = v452 + v445;
  v454 = __ROL8__((v451 + v443) ^ v446, 1);
  v455 = v449 + v747;
  v456 = __ROL8__(v453 ^ v447, 1);
  v457 = __ROR8__((v449 + v747) ^ v424, 24);
  v458 = v454 + v780 + v436;
  v459 = v457 + v784 + v442;
  v460 = __ROR8__(v459 ^ v449, 16);
  v461 = v460 + v455;
  v462 = __ROL8__(v458 ^ v460, 32);
  v463 = v462 + v453;
  v464 = __ROL8__(v461 ^ v457, 1);
  v465 = __ROR8__(v463 ^ v454, 24);
  v466 = v465 + v775 + v458;
  v771 = __ROR8__(v466 ^ v462, 16);
  v467 = v771 + v463;
  v468 = v456 + v790 + v448;
  v469 = __ROL8__(v467 ^ v465, 1);
  v470 = __ROL8__(v468 ^ v437, 32);
  v471 = v470 + v461;
  v472 = __ROR8__(v471 ^ v456, 24);
  v473 = v472 + v779 + v468;
  v474 = __ROR8__(v473 ^ v470, 16);
  v475 = v464 + v783 + v450;
  v476 = v759 + v777 + v459;
  v748 = v474 + v471;
  v477 = __ROL8__(v475 ^ v451, 32);
  v478 = __ROL8__(v476 ^ v452, 32);
  v479 = v477 + v438;
  v480 = __ROL8__((v474 + v471) ^ v472, 1);
  v481 = v478 + v736;
  v482 = __ROR8__(v479 ^ v464, 24);
  v483 = v482 + v781 + v475;
  v484 = __ROR8__((v478 + v736) ^ v759, 24);
  v485 = v484 + v785 + v476;
  v486 = __ROR8__(v483 ^ v477, 16);
  v487 = v486 + v479;
  v488 = __ROR8__(v485 ^ v478, 16);
  v489 = v488 + v481;
  v490 = __ROL8__(v487 ^ v482, 1);
  v491 = __ROL8__(v489 ^ v484, 1);
  v492 = v491 + v781 + v466;
  v493 = v469 + v789 + v473;
  v494 = __ROL8__(v492 ^ v474, 32);
  v495 = __ROL8__(v493 ^ v486, 32);
  v496 = v480 + v786 + v483;
  v497 = v494 + v487;
  v498 = v495 + v489;
  v499 = __ROR8__(v497 ^ v491, 24);
  v500 = __ROR8__(v498 ^ v469, 24);
  v501 = v499 + v790 + v492;
  v502 = v500 + v784 + v493;
  v503 = __ROR8__(v501 ^ v494, 16);
  v504 = __ROR8__(v502 ^ v495, 16);
  v505 = v503 + v497;
  v737 = v504 + v498;
  v506 = __ROL8__((v504 + v498) ^ v500, 1);
  v760 = __ROL8__(v505 ^ v499, 1);
  v507 = __ROL8__(v496 ^ v488, 32);
  v508 = v507 + v467;
  v509 = v490 + v775 + v485;
  v510 = __ROR8__(v508 ^ v480, 24);
  v511 = v506 + v787 + v501;
  v512 = __ROL8__(v509 ^ v771, 32);
  v513 = v510 + v778 + v496;
  v514 = v512 + v748;
  v515 = __ROR8__(v513 ^ v507, 16);
  v516 = __ROR8__((v512 + v748) ^ v490, 24);
  v517 = v515 + v508;
  v518 = v516 + v783 + v509;
  v519 = __ROL8__(v517 ^ v510, 1);
  v520 = __ROR8__(v518 ^ v512, 16);
  v521 = v520 + v514;
  v522 = __ROL8__(v511 ^ v520, 32);
  v523 = v522 + v517;
  v524 = __ROL8__(v521 ^ v516, 1);
  v525 = __ROR8__(v523 ^ v506, 24);
  v526 = v519 + v788 + v502;
  v527 = v525 + v777 + v511;
  v528 = v524 + v776 + v513;
  v529 = __ROL8__(v526 ^ v503, 32);
  v530 = __ROR8__(v527 ^ v522, 16);
  v531 = v529 + v521;
  v532 = __ROL8__(v528 ^ v504, 32);
  v533 = v530 + v523;
  v772 = v530;
  v534 = v532 + v505;
  v535 = __ROR8__(v531 ^ v519, 24);
  v536 = __ROL8__(v533 ^ v525, 1);
  v537 = v535 + v782 + v526;
  v538 = __ROR8__(v534 ^ v524, 24);
  v539 = v538 + v779 + v528;
  v540 = __ROR8__(v537 ^ v529, 16);
  v541 = __ROR8__(v539 ^ v532, 16);
  v749 = v540 + v531;
  v542 = __ROL8__((v540 + v531) ^ v535, 1);
  v543 = v541 + v534;
  v544 = v760 + v785 + v518;
  v545 = __ROL8__(v543 ^ v538, 1);
  v546 = __ROL8__(v544 ^ v515, 32);
  v547 = v546 + v737;
  v548 = __ROR8__((v546 + v737) ^ v760, 24);
  v549 = v548 + v780 + v544;
  v550 = __ROR8__(v549 ^ v546, 16);
  v551 = v550 + v547;
  v552 = __ROL8__(v551 ^ v548, 1);
  v553 = v552 + v785 + v527;
  v554 = __ROL8__(v553 ^ v540, 32);
  v555 = v554 + v543;
  v556 = __ROR8__(v555 ^ v552, 24);
  v557 = v556 + v777 + v553;
  v558 = __ROR8__(v557 ^ v554, 16);
  v559 = v558 + v555;
  v560 = v536 + v783 + v537;
  v561 = v542 + v782 + v539;
  v761 = __ROL8__(v559 ^ v556, 1);
  v562 = __ROL8__(v560 ^ v541, 32);
  v563 = v545 + v776 + v549;
  v564 = v562 + v551;
  v565 = __ROL8__(v561 ^ v550, 32);
  v566 = v565 + v533;
  v567 = __ROR8__(v564 ^ v536, 24);
  v568 = __ROR8__(v566 ^ v542, 24);
  v569 = v567 + v779 + v560;
  v570 = __ROL8__(v563 ^ v772, 32);
  v571 = v568 + v781 + v561;
  v572 = __ROR8__(v569 ^ v562, 16);
  v573 = __ROR8__(v571 ^ v565, 16);
  v738 = v572 + v564;
  v574 = v573 + v566;
  v575 = __ROL8__((v572 + v564) ^ v567, 1);
  v576 = v570 + v749;
  v577 = __ROL8__(v574 ^ v568, 1);
  v578 = __ROR8__((v570 + v749) ^ v545, 24);
  v579 = v575 + v790 + v557;
  v580 = v578 + v780 + v563;
  v581 = v577 + v784 + v569;
  v582 = __ROR8__(v580 ^ v570, 16);
  v583 = __ROL8__(v581 ^ v558, 32);
  v584 = v582 + v576;
  v585 = __ROL8__(v579 ^ v582, 32);
  v586 = v584 ^ v578;
  v587 = v583 + v584;
  v588 = v585 + v574;
  v589 = __ROL8__(v586, 1);
  v590 = __ROR8__(v587 ^ v577, 24);
  v591 = __ROR8__(v588 ^ v575, 24);
  v592 = v590 + v789 + v581;
  v593 = v591 + v786 + v579;
  v594 = __ROR8__(v593 ^ v585, 16);
  v595 = v594 + v588;
  v773 = v594;
  v596 = __ROL8__(v595 ^ v591, 1);
  v597 = __ROR8__(v592 ^ v583, 16);
  v598 = v589 + v778 + v571;
  v599 = v761 + v788 + v580;
  v750 = v597 + v587;
  v600 = __ROL8__(v598 ^ v572, 32);
  v601 = __ROL8__(v599 ^ v573, 32);
  v602 = v600 + v559;
  v603 = __ROL8__((v597 + v587) ^ v590, 1);
  v604 = v601 + v738;
  v605 = __ROR8__(v602 ^ v589, 24);
  v606 = v605 + v787 + v598;
  v607 = __ROR8__((v601 + v738) ^ v761, 24);
  v608 = v607 + v775 + v599;
  v609 = __ROR8__(v606 ^ v600, 16);
  v610 = v609 + v602;
  v611 = __ROR8__(v608 ^ v601, 16);
  v612 = v611 + v604;
  v613 = __ROL8__(v610 ^ v605, 1);
  v614 = __ROL8__(v612 ^ v607, 1);
  v615 = v614 + v775 + v593;
  v616 = v596 + v777 + v592;
  v617 = __ROL8__(v615 ^ v597, 32);
  v618 = __ROL8__(v616 ^ v609, 32);
  v619 = v603 + v779 + v606;
  v620 = v617 + v610;
  v621 = v618 + v612;
  v622 = __ROR8__(v620 ^ v614, 24);
  v623 = __ROR8__(v621 ^ v596, 24);
  v624 = v622 + v776 + v615;
  v625 = v623 + v778 + v616;
  v626 = __ROR8__(v624 ^ v617, 16);
  v627 = __ROR8__(v625 ^ v618, 16);
  v628 = v626 + v620;
  v739 = v627 + v621;
  v629 = __ROL8__((v627 + v621) ^ v623, 1);
  v762 = __ROL8__(v628 ^ v622, 1);
  v630 = __ROL8__(v619 ^ v611, 32);
  v631 = v630 + v595;
  v632 = v613 + v781 + v608;
  v633 = __ROR8__(v631 ^ v603, 24);
  v634 = v629 + v783 + v624;
  v635 = __ROL8__(v632 ^ v773, 32);
  v636 = v633 + v780 + v619;
  v637 = v635 + v750;
  v638 = __ROR8__(v636 ^ v630, 16);
  v639 = __ROR8__((v635 + v750) ^ v613, 24);
  v640 = v638 + v631;
  v641 = v639 + v782 + v632;
  v642 = __ROL8__(v640 ^ v633, 1);
  v643 = __ROR8__(v641 ^ v635, 16);
  v644 = v643 + v637;
  v645 = __ROL8__(v634 ^ v643, 32);
  v646 = v645 + v640;
  v647 = __ROL8__(v644 ^ v639, 1);
  v648 = __ROR8__(v646 ^ v629, 24);
  v649 = v642 + v785 + v625;
  v650 = v648 + v784 + v634;
  v651 = v647 + v787 + v636;
  v652 = __ROL8__(v649 ^ v626, 32);
  v653 = __ROR8__(v650 ^ v645, 16);
  v654 = v652 + v644;
  v655 = __ROL8__(v651 ^ v627, 32);
  v656 = v653 + v646;
  v774 = v653;
  v657 = v655 + v628;
  v658 = __ROR8__(v654 ^ v642, 24);
  v659 = __ROL8__(v656 ^ v648, 1);
  v660 = v658 + v786 + v649;
  v661 = __ROR8__(v657 ^ v647, 24);
  v662 = v661 + v788 + v651;
  v663 = __ROR8__(v660 ^ v652, 16);
  v664 = __ROR8__(v662 ^ v655, 16);
  v751 = v663 + v654;
  v665 = __ROL8__((v663 + v654) ^ v658, 1);
  v666 = v664 + v657;
  v667 = v762 + v789 + v641;
  v668 = __ROL8__(v666 ^ v661, 1);
  v669 = __ROL8__(v667 ^ v638, 32);
  v670 = v669 + v739;
  v671 = __ROR8__((v669 + v739) ^ v762, 24);
  v672 = v671 + v790 + v667;
  v673 = __ROR8__(v672 ^ v669, 16);
  v674 = v673 + v670;
  v675 = __ROL8__(v674 ^ v671, 1);
  v676 = v675 + v789 + v650;
  v677 = __ROL8__(v676 ^ v663, 32);
  v678 = v677 + v666;
  v679 = __ROR8__(v678 ^ v675, 24);
  v680 = v679 + v785 + v676;
  v681 = __ROR8__(v680 ^ v677, 16);
  v682 = v681 + v678;
  v740 = v682;
  v683 = v659 + v779 + v660;
  v684 = v665 + v784 + v662;
  v685 = v668 + v788 + v672;
  v686 = __ROL8__(v683 ^ v664, 32);
  v687 = __ROL8__(v684 ^ v673, 32);
  v688 = v686 + v674;
  v763 = __ROL8__(v682 ^ v679, 1);
  v689 = __ROL8__(v685 ^ v774, 32);
  v690 = v687 + v656;
  v691 = __ROR8__(v688 ^ v659, 24);
  v692 = __ROR8__(v690 ^ v665, 24);
  v693 = v691 + v783 + v683;
  v694 = v689 + v751;
  v695 = v692 + v790 + v684;
  v696 = __ROR8__(v693 ^ v686, 16);
  v697 = __ROR8__(v695 ^ v687, 16);
  v698 = v696 + v688;
  v699 = v697 + v690;
  v700 = __ROL8__(v698 ^ v691, 1);
  v701 = __ROL8__(v699 ^ v692, 1);
  v702 = __ROR8__((v689 + v751) ^ v668, 24);
  v703 = v700 + v776 + v680;
  v704 = v702 + v781 + v685;
  v705 = __ROR8__(v704 ^ v689, 16);
  v706 = v705 + v694;
  v707 = __ROL8__(v703 ^ v705, 32);
  v708 = v707 + v699;
  v709 = __ROL8__(v706 ^ v702, 1);
  v710 = __ROR8__(v708 ^ v700, 24);
  v711 = v710 + v787 + v703;
  v791 = v711;
  v806 = __ROR8__(v711 ^ v707, 16);
  v712 = v701 + v775 + v693;
  v801 = v806 + v708;
  v713 = __ROL8__(v712 ^ v681, 32);
  v796 = __ROL8__(v710 ^ (v806 + v708), 1);
  v714 = v713 + v706;
  v715 = __ROR8__(v714 ^ v701, 24);
  v716 = v715 + v777 + v712;
  v792 = v716;
  v717 = v709 + v786 + v695;
  v718 = __ROR8__(v713 ^ v716, 16);
  v719 = v718 + v714;
  v803 = v718;
  v720 = __ROL8__(v717 ^ v696, 32);
  v802 = v719;
  v797 = __ROL8__(v715 ^ v719, 1);
  v721 = __ROR8__((v740 + v720) ^ v709, 24);
  v793 = v782 + v717 + v721;
  v722 = __ROR8__(v720 ^ v793, 16);
  v804 = v722;
  v723 = v740 + v720 + v722;
  v799 = v723;
  v798 = __ROL8__(v723 ^ v721, 1);
  v724 = v763 + v704 + v780;
  v725 = __ROL8__(v724 ^ v697, 32);
  v726 = v725 + v698;
  v727 = __ROR8__(v726 ^ v763, 24);
  v794 = v778 + v724 + v727;
  result = 0LL;
  v805 = __ROR8__(v794 ^ v725, 16);
  v800 = v726 + v805;
  v795 = __ROL8__(v727 ^ (v726 + v805), 1);
  while ( 1 )
  {
    a1[result++] ^= v723 ^ v711;
    if ( result == 8 )
      break;
    v711 = *(&v791 + result);
    v723 = *(&v799 + result);
  }
  return result;
}

void *__fastcall sub_404C20(_QWORD *a1, char *a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  size_t v4; // r13
  char *v5; // r12
  _QWORD *v6; // rbx
  __int64 v7; // r15
  char *v8; // rdi
  void *result; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  unsigned __int64 v14; // rax

  v3 = (__int64)(a1 + 12);
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = a1[28];
  v8 = (char *)a1 + v7 + 96;
  if ( 128 - v7 < a3 )
  {
    v6[28] = 0LL;
    v4 = v7 + a3 - 128;
    memcpy(v8, a2, 128 - v7);
    v10 = v6[8] + 128LL;
    v6[8] = v10;
    v11 = (__int64)&a2[128 - v7];
    v6[9] += v10 <= 0x7F;
    sub_403680(v6, v3);
    if ( v4 <= 0x80 )
    {
      v5 = &a2[128 - v7];
      v8 = (char *)(v3 + v6[28]);
    }
    else
    {
      v12 = (v4 - 129) >> 7;
      v5 = (char *)(v11 + ((v12 + 1) << 7));
      do
      {
        v13 = v11;
        v14 = v6[8] + 128LL;
        v6[8] = v14;
        v11 += 128LL;
        v6[9] += v14 <= 0x7F;
        sub_403680(v6, v13);
      }
      while ( v5 != (char *)v11 );
      v4 = v4 - (v12 << 7) - 128;
      v8 = (char *)(v3 + v6[28]);
    }
  }
  result = memcpy(v8, v5, v4);
  v6[28] += v4;
  return result;
}

__int64 __fastcall sub_404D50(_QWORD *a1, unsigned __int8 *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 i; // rax

  a1[8] = 0LL;
  v2 = a1;
  v3 = (__int64)(a1 + 9);
  v4 = 7640891576956012808LL;
  *(_QWORD *)(v3 + 168) = 0LL;
  memset(
    (void *)(v3 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)v2 - (v3 & 0xFFFFFFF8) + 248) >> 3));
  *v2 = 7640891576956012808LL;
  v2[1] = -4942790177534073029LL;
  v2[2] = 4354685564936845355LL;
  v2[3] = -6534734903238641935LL;
  v2[4] = 5840696475078001361LL;
  v2[5] = -7276294671716946913LL;
  v2[6] = 2270897969802886507LL;
  v2[7] = 6620516959819538809LL;
  for ( i = 0LL; ; v4 = v2[i] )
  {
    v2[i] = *(_QWORD *)&a2[8 * i] ^ v4;
    if ( ++i == 8 )
      break;
  }
  v2[29] = *a2;
  return 0LL;
}

__int64 __fastcall sub_404E20(_QWORD *a1, __int64 a2)
{
  char v3; // [rsp+0h] [rbp-48h]
  __int64 v4; // [rsp+1h] [rbp-47h]
  __int64 v5; // [rsp+9h] [rbp-3Fh]
  char v6; // [rsp+11h] [rbp-37h]
  __int64 v7; // [rsp+12h] [rbp-36h]
  int v8; // [rsp+1Ah] [rbp-2Eh]
  __int16 v9; // [rsp+1Eh] [rbp-2Ah]
  __int128 v10; // [rsp+20h] [rbp-28h]
  __int128 v11; // [rsp+30h] [rbp-18h]

  if ( (unsigned __int64)(a2 - 1) > 0x3F )
    return 0xFFFFFFFFLL;
  v3 = a2;
  v4 = 65792LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  return sub_404D50(a1, (unsigned __int8 *)&v3);
}

__int64 __fastcall sub_404E90(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // r10
  char v7; // [rsp+0h] [rbp-D8h]
  char v8; // [rsp+1h] [rbp-D7h]
  __int64 v9; // [rsp+2h] [rbp-D6h]
  __int64 v10; // [rsp+Ah] [rbp-CEh]
  __int64 v11; // [rsp+12h] [rbp-C6h]
  int v12; // [rsp+1Ah] [rbp-BEh]
  __int16 v13; // [rsp+1Eh] [rbp-BAh]
  __int128 v14; // [rsp+20h] [rbp-B8h]
  __int128 v15; // [rsp+30h] [rbp-A8h]
  char s; // [rsp+40h] [rbp-98h]

  if ( (unsigned __int64)(a2 - 1) > 0x3F || (unsigned __int64)(a4 - 1) > 0x3F || !a3 )
    return 0xFFFFFFFFLL;
  v7 = a2;
  v8 = a4;
  v9 = 257LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( (int)sub_404D50(a1, (unsigned __int8 *)&v7) < 0 )
    return 0xFFFFFFFFLL;
  memset(&s, 0, 0x80uLL);
  __memcpy_chk(&s, v5, v4, 128LL);
  sub_404C20(a1, &s, 0x80uLL);
  off_60E238(&s, 0LL, 128LL);
  return 0LL;
}

__int64 __fastcall sub_404F80(_QWORD *a1, char *a2, unsigned __int64 a3)
{
  if ( a3 )
    sub_404C20(a1, a2, a3);
  return 0LL;
}

__int64 __fastcall sub_404FA0(__int64 a1, void *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  bool v5; // cf
  __int64 v6; // rdx
  bool v7; // zf
  __int64 *v8; // rcx
  char *v9; // rax
  __int64 v10; // rdx
  __int128 v12; // [rsp+0h] [rbp-58h]
  __int128 v13; // [rsp+10h] [rbp-48h]
  __int128 v14; // [rsp+20h] [rbp-38h]
  __int128 v15; // [rsp+30h] [rbp-28h]
  char v16; // [rsp+40h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( !a2 || *(_QWORD *)(a1 + 232) > a3 || *(_QWORD *)(a1 + 80) )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 224);
  v4 = *(_QWORD *)(a1 + 224);
  v5 = __CFADD__(*(_QWORD *)(a1 + 64), v4);
  v6 = *(_QWORD *)(a1 + 64) + v4;
  *(_QWORD *)(a1 + 72) += v5;
  v7 = *(_BYTE *)(a1 + 240) == 0;
  *(_QWORD *)(a1 + 64) = v6;
  if ( !v7 )
    *(_QWORD *)(a1 + 88) = -1LL;
  *(_QWORD *)(a1 + 80) = -1LL;
  memset((void *)(a1 + 96 + v3), 0, 128 - v3);
  sub_403680((_QWORD *)a1, a1 + 96);
  v8 = (__int64 *)a1;
  v9 = (char *)&v12;
  do
  {
    v10 = *v8;
    v9 += 8;
    ++v8;
    *((_QWORD *)v9 - 1) = v10;
  }
  while ( v9 != &v16 );
  memcpy(a2, &v12, *(_QWORD *)(a1 + 232));
  off_60E238(&v12, 0LL, 64LL);
  return 0LL;
}

__int64 __fastcall sub_4051D0(FILE *stream, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  FILE *v4; // rbp
  char *v5; // rax
  char *v6; // r12
  unsigned __int64 v7; // rbx
  FILE *v8; // rdi
  size_t v9; // rax
  unsigned int v10; // ebp
  __int64 v12; // [rsp+0h] [rbp-138h]

  v3 = a3;
  v4 = stream;
  v5 = (char *)malloc(0x8000uLL);
  if ( v5 )
  {
    v6 = v5;
    sub_404E20(&v12, v3);
LABEL_3:
    v7 = 0LL;
    while ( 1 )
    {
      v9 = fread(&v6[v7], 1uLL, 0x8000 - v7, v4);
      v7 += v9;
      if ( v7 == 0x8000 )
      {
        sub_404F80(&v12, v6, 0x8000uLL);
        goto LABEL_3;
      }
      v8 = v4;
      if ( !v9 )
        break;
      if ( feof(v4) )
        goto LABEL_9;
    }
    v10 = -1;
    if ( ferror(v8) )
      goto LABEL_12;
LABEL_9:
    if ( v7 )
      sub_404F80(&v12, v6, v7);
    v10 = 0;
    sub_404FA0((__int64)&v12, a2, v3);
LABEL_12:
    free(v6);
  }
  else
  {
    v10 = -1;
  }
  return v10;
}

void __noreturn sub_4052C0()
{
  sub_403280(1);
}

__int64 __fastcall sub_4052D0(const char *a1, const char **a2, char *a3, size_t a4)
{
  size_t v4; // r13
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
  char *v16; // [rsp+18h] [rbp-40h]

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

void __fastcall sub_4053F0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_4073F0(1LL, a1);
  v5 = sub_4070E0(0LL, 8LL, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_405470(__int64 *a1, char *a2, size_t a3)
{
  const void *v3; // r14
  size_t v4; // r13
  char *v5; // rbp
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rsi
  __int64 v9; // rbx
  __int64 i; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rax

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
      v11 = sub_407410(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    v12 = sub_407410(i);
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
  return (int)v13;
}

__int64 __fastcall sub_405590(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  size_t v6; // r15
  void (*v7)(void); // r13
  char *v8; // rbp
  __int64 *v9; // rbx
  __int64 result; // rax

  v6 = a5;
  v7 = a6;
  v8 = a4;
  v9 = (__int64 *)a3;
  result = sub_4052D0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_4053F0(a1, (__int64)a2, result);
    sub_405470(v9, v8, v6);
    v7();
    result = -1LL;
  }
  return result;
}

__int64 __fastcall sub_405600(void *s1, __int64 *a2, char *a3, size_t a4)
{
  __int64 v4; // r14
  size_t v5; // r12
  __int64 *v6; // rbx
  char *v7; // rbp

  v4 = *a2;
  if ( *a2 )
  {
    v5 = a4;
    v6 = a2 + 1;
    v7 = a3;
    do
    {
      if ( !memcmp(s1, v7, v5) )
        break;
      v4 = *v6;
      v7 += v5;
      ++v6;
    }
    while ( v4 );
  }
  return v4;
}

__int64 sub_405670()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

  if ( (unsigned int)sub_409690(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60E328 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60E330 )
      {
        v5 = sub_407260();
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
  result = sub_409690(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

void __fastcall sub_405720(FILE *a1, int a2)
{
  int v2; // eax

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

FILE *__fastcall sub_405750(const char *a1, const char *a2)
{
  FILE *v2; // rax
  FILE *v3; // rbx
  unsigned int v4; // eax
  int v6; // er12
  int *v7; // rax
  int v8; // ebp
  int *v9; // rbx
  int *v10; // rax
  FILE *v11; // rdi
  int v12; // er12
  int *v13; // rbp

  v2 = fopen(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = fileno(v2);
    if ( v4 <= 2 )
    {
      v6 = sub_407430(v4);
      if ( v6 < 0 )
      {
        v10 = __errno_location();
        v11 = v3;
        v3 = 0LL;
        v12 = *v10;
        v13 = v10;
        sub_4085E0(v11);
        *v13 = v12;
      }
      else if ( (unsigned int)sub_4085E0(v3) || (v3 = fdopen(v6, a2)) == 0LL )
      {
        v7 = __errno_location();
        v8 = *v7;
        v9 = v7;
        close(v6);
        *v9 = v8;
        v3 = 0LL;
      }
    }
  }
  return v3;
}

char *__fastcall sub_4057F0(const char *a1)
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
  qword_60E338 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_405890(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_409750();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40AC89;
      if ( !v5 )
        v2 = (char *)&unk_40AC7E;
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
    v2 = (char *)&unk_40AC85;
    if ( !v5 )
      v2 = (char *)&unk_40AC82;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_405990(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v11; // er13
  int v12; // ebp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r11
  int v15; // er10
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r12
  int v19; // er11
  char *v20; // r8
  size_t v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rbp
  bool v24; // al
  int v25; // eax
  int v26; // eax
  char v27; // di
  const unsigned __int16 **v28; // rax
  char v29; // cl
  unsigned __int64 result; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  unsigned __int8 v33; // al
  unsigned __int8 v34; // al
  int v35; // er13
  bool v36; // dl
  bool v37; // dl
  bool v38; // al
  size_t v39; // rax
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // r15
  const unsigned __int16 **v42; // r14
  char *v43; // rax
  int v44; // esi
  unsigned __int64 v45; // rcx
  unsigned __int8 v46; // di
  char *v47; // rax
  size_t v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  char i; // al
  char v53; // dl
  char *v54; // rax
  unsigned __int64 v55; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v56; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v57; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+10h] [rbp-B8h]
  char v59; // [rsp+1Fh] [rbp-A9h]
  char *s; // [rsp+20h] [rbp-A8h]
  size_t n; // [rsp+28h] [rbp-A0h]
  char *v62; // [rsp+30h] [rbp-98h]
  unsigned __int8 v63; // [rsp+30h] [rbp-98h]
  char *v64; // [rsp+30h] [rbp-98h]
  unsigned __int64 v65; // [rsp+30h] [rbp-98h]
  unsigned __int8 v66; // [rsp+38h] [rbp-90h]
  unsigned __int8 v67; // [rsp+38h] [rbp-90h]
  unsigned __int64 v68; // [rsp+38h] [rbp-90h]
  char v69; // [rsp+38h] [rbp-90h]
  int v70; // [rsp+38h] [rbp-90h]
  int v71; // [rsp+40h] [rbp-88h]
  unsigned __int64 v72; // [rsp+40h] [rbp-88h]
  int v73; // [rsp+40h] [rbp-88h]
  int v74; // [rsp+40h] [rbp-88h]
  _BYTE *v75; // [rsp+40h] [rbp-88h]
  int v76; // [rsp+48h] [rbp-80h]
  unsigned __int64 v77; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  __int64 v79; // [rsp+58h] [rbp-70h]
  size_t v80; // [rsp+60h] [rbp-68h]
  char v81; // [rsp+68h] [rbp-60h]
  bool v82; // [rsp+6Ch] [rbp-5Ch]
  char v83; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v84; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v85; // [rsp+70h] [rbp-58h]
  char *v86; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h]
  mbstate_t ps; // [rsp+88h] [rbp-40h]

  v9 = a1;
  v10 = a2;
  v11 = a5;
  s = a3;
  v55 = a4;
  v81 = a6;
  v12 = a6 & 2;
  v80 = __ctype_get_mb_cur_max();
  v82 = v12 != 0;
  v14 = v55;
  switch ( v11 )
  {
    case 0:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v56 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v56 = 0;
        goto LABEL_212;
      }
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 2;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v59 = 1;
        v15 = 0;
        v16 = 0LL;
        v11 = 2;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v56 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v56 = 1;
LABEL_212:
      if ( a2 )
      {
        v15 = 0;
        v38 = 0;
        v59 = 1;
        v79 = 0LL;
        goto LABEL_138;
      }
      v59 = 1;
      v15 = 0;
      v16 = 1LL;
      v11 = 2;
      v79 = 0LL;
      v83 = 0;
      v82 = 0;
      n = 1LL;
      s2 = "'";
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
          v35 = v19;
          v14 = v17;
          v36 = v35 == 2;
          if ( !v16 && v36 && v82 )
            return sub_405990((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_405990((__int64)v9, v79, s);
              v38 = v79 != 0 && v10 == 0;
              if ( v38 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
                n = 1LL;
                v82 = 0;
                v83 = v38;
                goto LABEL_3;
              }
              v37 = v83;
            }
          }
          else
          {
            v37 = !v82;
          }
          if ( s2 )
          {
            if ( v37 )
            {
              v53 = *s2;
              if ( *s2 )
              {
                v54 = &s2[-v16];
                do
                {
                  if ( v10 > v16 )
                    v9[v16] = v53;
                  v53 = v54[++v16];
                }
                while ( v53 );
              }
            }
          }
          if ( v10 > v16 )
            v9[v16] = 0;
          return v16;
        }
        v20 = &s[v18];
        v57 = v56 & (v19 != 2);
        if ( !(v56 & (v19 != 2)) )
          break;
        if ( n )
        {
          if ( v17 == -1LL && n > 1 )
          {
            v71 = v19;
            v66 = v15;
            v21 = strlen(s);
            v19 = v71;
            v15 = v66;
            v20 = &s[v18];
            v17 = v21;
          }
          if ( v18 + n <= v17 )
          {
            v76 = v19;
            v72 = v17;
            v67 = v15;
            v62 = v20;
            v22 = memcmp(v20, s2, n);
            v20 = v62;
            v15 = v67;
            v17 = v72;
            v19 = v76;
            if ( !v22 )
            {
              if ( !v82 )
              {
                LOBYTE(v23) = *v62;
                switch ( *v62 )
                {
                  case 0:
                    goto LABEL_83;
                  case 7:
                    LOBYTE(v23) = 97;
                    goto LABEL_79;
                  case 8:
                    LODWORD(v13) = 0;
                    v11 = 0;
                    LOBYTE(v23) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_72;
                  case 10:
                    goto LABEL_68;
                  case 11:
                    goto LABEL_80;
                  case 12:
                    goto LABEL_77;
                  case 13:
                    goto LABEL_76;
                  case 32:
                    v33 = v57;
                    goto LABEL_128;
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
                  case 35:
                  case 126:
                    v34 = v57;
                    goto LABEL_125;
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
                    v33 = v57;
                    goto LABEL_123;
                  case 39:
                    goto LABEL_62;
                  case 63:
                    goto LABEL_58;
                  case 92:
                    goto LABEL_65;
                  case 123:
                  case 125:
                    goto LABEL_17;
                  default:
                    goto LABEL_98;
                }
              }
              return sub_405990((__int64)v9, v10, s);
            }
          }
        }
        LOBYTE(v23) = *v20;
        switch ( *v20 )
        {
          case 0:
            goto LABEL_81;
          case 7:
            LOBYTE(v23) = 97;
            goto LABEL_78;
          case 8:
            LOBYTE(v23) = 98;
            goto LABEL_69;
          case 9:
LABEL_72:
            LOBYTE(v23) = 116;
            goto LABEL_69;
          case 10:
LABEL_68:
            LOBYTE(v23) = 110;
LABEL_69:
            LODWORD(v13) = 0;
            v11 = 0;
            if ( v82 )
              return sub_405990((__int64)v9, v10, s);
            goto LABEL_29;
          case 11:
LABEL_80:
            LOBYTE(v23) = 118;
            goto LABEL_78;
          case 12:
LABEL_77:
            LOBYTE(v23) = 102;
LABEL_78:
            if ( v82 )
              return sub_405990((__int64)v9, v10, s);
LABEL_79:
            v11 = 0;
            goto LABEL_37;
          case 13:
            v57 = 0;
LABEL_76:
            LOBYTE(v23) = 13;
            v29 = 114;
            LOBYTE(v13) = v19 == 2;
            goto LABEL_66;
          case 32:
            v33 = 0;
LABEL_128:
            LOBYTE(v23) = 32;
            goto LABEL_123;
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
            v57 = 0;
LABEL_74:
            LODWORD(v13) = 0;
            goto LABEL_67;
          case 35:
          case 126:
            v34 = 0;
LABEL_125:
            if ( !v18 )
            {
              v11 = v57;
              LODWORD(v13) = 0;
              v57 = v34;
              goto LABEL_23;
            }
            v57 = v34;
            v11 = 0;
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
            v33 = 0;
LABEL_123:
            v11 = v57;
            v57 = v33;
            v25 = 0;
            goto LABEL_25;
          case 39:
            v57 = 0;
            goto LABEL_62;
          case 63:
            v57 = 0;
            goto LABEL_58;
          case 92:
            v57 = 0;
            goto LABEL_65;
          case 123:
          case 125:
            v57 = 0;
            goto LABEL_17;
          default:
            v57 = 0;
            goto LABEL_98;
        }
LABEL_24:
        v25 = 0;
LABEL_25:
        if ( a7 )
        {
          LODWORD(v13) = (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v23 >> 5)) >> v23) & 1;
          if ( (_DWORD)v13 )
          {
            LOBYTE(v13) = v19 == 2;
LABEL_28:
            if ( v82 )
              return sub_405990((__int64)v9, v10, s);
LABEL_29:
            v26 = v15 ^ 1;
            LOBYTE(v26) = v13 & (v15 ^ 1);
            if ( (unsigned __int8)v13 & ((unsigned __int8)v15 ^ 1) )
            {
              if ( v10 > v16 )
                v9[v16] = 39;
              if ( v16 + 1 < v10 )
                v9[v16 + 1] = 36;
              LODWORD(v13) = v16 + 2;
              if ( v16 + 2 < v10 )
                v9[v16 + 2] = 39;
              v16 += 3LL;
              v15 = v26;
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
        if ( v57 )
          goto LABEL_28;
        ++v18;
        LODWORD(v28) = v15 & (v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v28 )
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
          v9[v16] = v23;
        v27 = v59;
        ++v16;
        if ( !(_BYTE)v11 )
          v27 = 0;
        v59 = v27;
      }
      LOBYTE(v23) = *v20;
      switch ( *v20 )
      {
        case 0:
          if ( !v56 )
          {
            if ( !(v81 & 1) )
            {
              v57 = 0;
              LOBYTE(v13) = v19 == 2;
              v11 = 0;
              LOBYTE(v23) = 0;
              goto LABEL_23;
            }
            ++v18;
            goto LABEL_4;
          }
LABEL_81:
          if ( v82 )
            return sub_405990((__int64)v9, v10, s);
          v57 = 0;
LABEL_83:
          LOBYTE(v13) = v19 == 2;
          v25 = v15 ^ 1;
          LOBYTE(v25) = (v19 == 2) & (v15 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 36;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v31 = v16 + 3;
            if ( v10 <= v16 + 3 )
            {
              v16 += 4LL;
              v15 = v25;
              v11 = 0;
              LOBYTE(v23) = 48;
              goto LABEL_49;
            }
            goto LABEL_91;
          }
          v31 = v16;
          if ( v10 > v16 )
          {
            v25 = v15;
LABEL_91:
            v9[v31] = 92;
            v15 = v25;
          }
          v16 = v31 + 1;
          if ( v19 == 2 )
          {
            v25 = v11;
            LOBYTE(v23) = 48;
            v11 = 0;
            goto LABEL_49;
          }
          LOBYTE(v23) = 48;
          if ( v18 + 1 < v17 && (unsigned __int8)(s[v18 + 1] - 48) <= 9u )
          {
            if ( v10 > v16 )
              v9[v16] = 48;
            if ( v10 > v31 + 2 )
              v9[v31 + 2] = 48;
            v16 = v31 + 3;
            LOBYTE(v23) = 48;
          }
LABEL_95:
          v25 = v11;
          v11 = 0;
          if ( (unsigned __int8)v13 | v56 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v23) = 7;
          v29 = 97;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v23) = 8;
          v29 = 98;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v23) = 9;
          v29 = 116;
          goto LABEL_104;
        case 10:
          LOBYTE(v23) = 10;
          v29 = 110;
          goto LABEL_104;
        case 11:
          LOBYTE(v23) = 11;
          v29 = 118;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 12:
          LOBYTE(v23) = 12;
          v29 = 102;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 13:
          LOBYTE(v23) = 13;
          v29 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v57 = v19 == 2 && v82;
          if ( v57 )
            return sub_405990((__int64)v9, v10, s);
          goto LABEL_66;
        case 32:
          LOBYTE(v23) = 32;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_21;
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
        case 35:
        case 126:
          LOBYTE(v13) = v19 == 2;
          goto LABEL_20;
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
        case 39:
LABEL_62:
          if ( v19 != 2 )
          {
            v83 = v11;
            LODWORD(v13) = 0;
            LOBYTE(v23) = 39;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_405990((__int64)v9, v10, s);
          if ( !v10 || (v13 = 0LL, v79) )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 92;
            v13 = v10;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v10 = v79;
          }
          v83 = v11;
          v16 += 3LL;
          v25 = 0;
          v15 = 0;
          v79 = v10;
          LOBYTE(v23) = 39;
          v10 = v13;
          goto LABEL_49;
        case 63:
LABEL_58:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_405990((__int64)v9, v10, s);
            v11 = 0;
            v25 = 0;
            LOBYTE(v23) = 63;
            goto LABEL_49;
          }
          if ( v19 != 5 )
          {
            LOBYTE(v23) = 63;
            LOBYTE(v13) = v19 == 2;
            v11 = 0;
            goto LABEL_23;
          }
          if ( !(v81 & 4)
            || v18 + 2 >= v17
            || s[v18 + 1] != 63
            || (v23 = (unsigned __int8)s[v18 + 2], (unsigned __int8)v23 > 0x3Eu)
            || (v49 = 8070630310989004800LL, !_bittest64(&v49, v23)) )
          {
            LODWORD(v13) = 0;
            v11 = 0;
            LOBYTE(v23) = 63;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_405990((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_405990((__int64)v9, v10, s);
            ++v18;
            LOBYTE(v28) = v15;
            v11 = 0;
            LOBYTE(v23) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LODWORD(v13) = v56;
          LOBYTE(v23) = 92;
          v29 = 92;
          LOBYTE(v13) = (n != 0) & v82 & v56;
          if ( (_BYTE)v13 )
          {
            ++v18;
            LOBYTE(v28) = v15;
            v11 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v56 )
          {
LABEL_67:
            v11 = 0;
            goto LABEL_23;
          }
          LOBYTE(v23) = v29;
          v11 = 0;
          goto LABEL_28;
        case 123:
        case 125:
LABEL_17:
          v24 = v17 != 1;
          if ( v17 == -1LL )
            v24 = s[1] != 0;
          LOBYTE(v13) = v19 == 2;
          if ( v24 )
            goto LABEL_67;
LABEL_20:
          if ( v18 )
            goto LABEL_67;
LABEL_21:
          if ( !v82 || !(_BYTE)v13 )
            goto LABEL_23;
          return sub_405990((__int64)v9, v10, s);
        default:
LABEL_98:
          if ( v80 == 1 )
          {
            v73 = v19;
            v68 = v17;
            v63 = v15;
            v28 = __ctype_b_loc();
            LODWORD(v13) = (unsigned __int8)v23;
            v15 = v63;
            v17 = v68;
            v19 = v73;
            v32 = 1LL;
            LODWORD(v28) = (*v28)[(unsigned __int8)v23];
            LOWORD(v28) = (unsigned __int16)v28 & 0x4000;
            LOBYTE(v11) = (_WORD)v28 != 0;
            LOBYTE(v13) = v56 & ((_WORD)v28 == 0);
            goto LABEL_100;
          }
          ps = 0LL;
          if ( v17 == -1LL )
          {
            v74 = v19;
            v69 = v15;
            v64 = v20;
            v39 = strlen(s);
            v19 = v74;
            LOBYTE(v15) = v69;
            v20 = v64;
            v17 = v39;
          }
          v85 = v16;
          v86 = v20;
          v40 = 0LL;
          v84 = v15;
          v75 = v9;
          v77 = v10;
          v65 = v17;
          v70 = v19;
          break;
      }
      while ( 2 )
      {
        v41 = v18 + v40;
        v28 = (const unsigned __int16 **)sub_409610((wchar_t *)&wc, &s[v18 + v40]);
        v42 = v28;
        if ( !v28 )
        {
LABEL_241:
          v32 = v40;
          v16 = v85;
          v15 = v84;
          v9 = v75;
          LODWORD(v13) = v11 ^ 1;
          v10 = v77;
          v17 = v65;
          v19 = v70;
          LOBYTE(v13) = v56 & (v11 ^ 1);
          goto LABEL_242;
        }
        if ( v28 == (const unsigned __int16 **)-1LL )
        {
          v32 = v40;
          v16 = v85;
          v11 = 0;
          v15 = v84;
          v9 = v75;
          v10 = v77;
          v17 = v65;
          v19 = v70;
          LODWORD(v13) = v56;
          goto LABEL_242;
        }
        if ( v28 == (const unsigned __int16 **)-2LL )
        {
          v17 = v65;
          v50 = v18 + v40;
          v51 = &s[v18 + v40];
          v28 = (const unsigned __int16 **)v40;
          v32 = v40;
          v15 = v84;
          v16 = v85;
          v9 = v75;
          v10 = v77;
          v19 = v70;
          if ( v50 < v65 && *v51 )
          {
            do
              v28 = (const unsigned __int16 **)((char *)v28 + 1);
            while ( (unsigned __int64)v28 + v18 < v65 && *((_BYTE *)v28 + (_QWORD)v86) );
            v32 = (unsigned __int64)v28;
          }
          LODWORD(v13) = v56;
          v11 = 0;
LABEL_242:
          if ( v32 > 1 )
            goto LABEL_174;
LABEL_100:
          if ( (_BYTE)v13 )
          {
            LODWORD(v13) = v56;
            LOBYTE(v11) = 0;
LABEL_174:
            v44 = 0;
            v45 = v18 + v32;
            v46 = v57;
            while ( 1 )
            {
              if ( (_BYTE)v13 )
              {
                if ( v82 )
                  return sub_405990((__int64)v9, v10, s);
                LOBYTE(v28) = (v15 ^ 1) & (v19 == 2);
                if ( (_BYTE)v28 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 36;
                  if ( v10 > v16 + 2 )
                    v9[v16 + 2] = 39;
                  v16 += 3LL;
                  v15 = (int)v28;
                }
                if ( v10 > v16 )
                  v9[v16] = 92;
                if ( v10 > v16 + 1 )
                  v9[v16 + 1] = ((unsigned __int8)v23 >> 6) + 48;
                LODWORD(v28) = v16 + 2;
                if ( v10 > v16 + 2 )
                {
                  LODWORD(v28) = (((unsigned __int8)v23 >> 3) & 7) + 48;
                  v9[v16 + 2] = (_BYTE)v28;
                }
                ++v18;
                v16 += 3LL;
                LOBYTE(v23) = (v23 & 7) + 48;
                if ( v18 >= v45 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_40;
                }
                v44 = v13;
              }
              else
              {
                LODWORD(v28) = v15 & (v44 ^ 1);
                if ( v46 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 92;
                  ++v16;
                }
                if ( ++v18 >= v45 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_51;
                }
                if ( (_BYTE)v28 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  LODWORD(v28) = v16 + 1;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 39;
                  v16 += 2LL;
                  v46 = 0;
                  v15 = 0;
                }
                else
                {
                  v46 = 0;
                }
              }
              if ( v10 > v16 )
                v9[v16] = v23;
              LOBYTE(v23) = s[v18];
              ++v16;
            }
          }
LABEL_101:
          LOBYTE(v13) = v19 == 2;
LABEL_23:
          v25 = (v13 | v56 ^ 1) ^ 1;
          LOBYTE(v25) = v82 | (v13 | v56 ^ 1) ^ 1;
          if ( !(v82 | (unsigned __int8)(v13 | v56 ^ 1) ^ 1) )
            goto LABEL_49;
          goto LABEL_24;
        }
        if ( v70 != 2 || !v82 || v28 == (const unsigned __int16 **)1 )
        {
LABEL_148:
          if ( !iswprint(wc) )
            v11 = 0;
          v40 += (unsigned __int64)v42;
          LODWORD(v28) = mbsinit(&ps);
          if ( (_DWORD)v28 )
            goto LABEL_241;
          continue;
        }
        break;
      }
      v43 = &s[v41 + 1];
      while ( (unsigned __int8)(*v43 - 91) > 0x21u || !((1LL << (*v43 - 91)) & 0x20000002BLL) )
      {
        if ( &s[(_QWORD)v42 + v41] == ++v43 )
          goto LABEL_148;
      }
      v9 = v75;
      v10 = v77;
      return sub_405990((__int64)v9, v10, s);
    case 5:
      if ( v12 )
      {
        v59 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v15 = 0;
          v59 = 1;
          v83 = 0;
          v79 = 0LL;
        }
        else
        {
          v79 = 0LL;
          v15 = 0;
          v59 = 1;
          v83 = 0;
        }
        v82 = 0;
        v16 = 1LL;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 6:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 5;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v56 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_405890("`", v11);
        v47 = sub_405890("'", v11);
        v14 = v55;
        a9 = v47;
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
      v58 = v14;
      v48 = strlen(a9);
      v59 = 1;
      v15 = 0;
      v14 = v58;
      n = v48;
      v83 = 0;
      s2 = a9;
      v79 = 0LL;
      v56 = 1;
      goto LABEL_3;
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_405990(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v11; // er13
  int v12; // ebp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r11
  int v15; // er10
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r12
  int v19; // er11
  char *v20; // r8
  size_t v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rbp
  bool v24; // al
  int v25; // eax
  int v26; // eax
  char v27; // di
  const unsigned __int16 **v28; // rax
  char v29; // cl
  unsigned __int64 result; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  unsigned __int8 v33; // al
  unsigned __int8 v34; // al
  int v35; // er13
  bool v36; // dl
  bool v37; // dl
  bool v38; // al
  size_t v39; // rax
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // r15
  const unsigned __int16 **v42; // r14
  char *v43; // rax
  int v44; // esi
  unsigned __int64 v45; // rcx
  unsigned __int8 v46; // di
  char *v47; // rax
  size_t v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  char i; // al
  char v53; // dl
  char *v54; // rax
  unsigned __int64 v55; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v56; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v57; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+10h] [rbp-B8h]
  char v59; // [rsp+1Fh] [rbp-A9h]
  char *s; // [rsp+20h] [rbp-A8h]
  size_t n; // [rsp+28h] [rbp-A0h]
  char *v62; // [rsp+30h] [rbp-98h]
  unsigned __int8 v63; // [rsp+30h] [rbp-98h]
  char *v64; // [rsp+30h] [rbp-98h]
  unsigned __int64 v65; // [rsp+30h] [rbp-98h]
  unsigned __int8 v66; // [rsp+38h] [rbp-90h]
  unsigned __int8 v67; // [rsp+38h] [rbp-90h]
  unsigned __int64 v68; // [rsp+38h] [rbp-90h]
  char v69; // [rsp+38h] [rbp-90h]
  int v70; // [rsp+38h] [rbp-90h]
  int v71; // [rsp+40h] [rbp-88h]
  unsigned __int64 v72; // [rsp+40h] [rbp-88h]
  int v73; // [rsp+40h] [rbp-88h]
  int v74; // [rsp+40h] [rbp-88h]
  _BYTE *v75; // [rsp+40h] [rbp-88h]
  int v76; // [rsp+48h] [rbp-80h]
  unsigned __int64 v77; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  __int64 v79; // [rsp+58h] [rbp-70h]
  size_t v80; // [rsp+60h] [rbp-68h]
  char v81; // [rsp+68h] [rbp-60h]
  bool v82; // [rsp+6Ch] [rbp-5Ch]
  char v83; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v84; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v85; // [rsp+70h] [rbp-58h]
  char *v86; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h]
  mbstate_t ps; // [rsp+88h] [rbp-40h]

  v9 = a1;
  v10 = a2;
  v11 = a5;
  s = a3;
  v55 = a4;
  v81 = a6;
  v12 = a6 & 2;
  v80 = __ctype_get_mb_cur_max();
  v82 = v12 != 0;
  v14 = v55;
  switch ( v11 )
  {
    case 0:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v56 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v56 = 0;
        goto LABEL_212;
      }
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 2;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v59 = 1;
        v15 = 0;
        v16 = 0LL;
        v11 = 2;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v56 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v56 = 1;
LABEL_212:
      if ( a2 )
      {
        v15 = 0;
        v38 = 0;
        v59 = 1;
        v79 = 0LL;
        goto LABEL_138;
      }
      v59 = 1;
      v15 = 0;
      v16 = 1LL;
      v11 = 2;
      v79 = 0LL;
      v83 = 0;
      v82 = 0;
      n = 1LL;
      s2 = "'";
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
          v35 = v19;
          v14 = v17;
          v36 = v35 == 2;
          if ( !v16 && v36 && v82 )
            return sub_405990((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_405990((__int64)v9, v79, s);
              v38 = v79 != 0 && v10 == 0;
              if ( v38 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
                n = 1LL;
                v82 = 0;
                v83 = v38;
                goto LABEL_3;
              }
              v37 = v83;
            }
          }
          else
          {
            v37 = !v82;
          }
          if ( s2 )
          {
            if ( v37 )
            {
              v53 = *s2;
              if ( *s2 )
              {
                v54 = &s2[-v16];
                do
                {
                  if ( v10 > v16 )
                    v9[v16] = v53;
                  v53 = v54[++v16];
                }
                while ( v53 );
              }
            }
          }
          if ( v10 > v16 )
            v9[v16] = 0;
          return v16;
        }
        v20 = &s[v18];
        v57 = v56 & (v19 != 2);
        if ( !(v56 & (v19 != 2)) )
          break;
        if ( n )
        {
          if ( v17 == -1LL && n > 1 )
          {
            v71 = v19;
            v66 = v15;
            v21 = strlen(s);
            v19 = v71;
            v15 = v66;
            v20 = &s[v18];
            v17 = v21;
          }
          if ( v18 + n <= v17 )
          {
            v76 = v19;
            v72 = v17;
            v67 = v15;
            v62 = v20;
            v22 = memcmp(v20, s2, n);
            v20 = v62;
            v15 = v67;
            v17 = v72;
            v19 = v76;
            if ( !v22 )
            {
              if ( !v82 )
              {
                LOBYTE(v23) = *v62;
                switch ( *v62 )
                {
                  case 0:
                    goto LABEL_83;
                  case 7:
                    LOBYTE(v23) = 97;
                    goto LABEL_79;
                  case 8:
                    LODWORD(v13) = 0;
                    v11 = 0;
                    LOBYTE(v23) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_72;
                  case 10:
                    goto LABEL_68;
                  case 11:
                    goto LABEL_80;
                  case 12:
                    goto LABEL_77;
                  case 13:
                    goto LABEL_76;
                  case 32:
                    v33 = v57;
                    goto LABEL_128;
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
                  case 35:
                  case 126:
                    v34 = v57;
                    goto LABEL_125;
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
                    v33 = v57;
                    goto LABEL_123;
                  case 39:
                    goto LABEL_62;
                  case 63:
                    goto LABEL_58;
                  case 92:
                    goto LABEL_65;
                  case 123:
                  case 125:
                    goto LABEL_17;
                  default:
                    goto LABEL_98;
                }
              }
              return sub_405990((__int64)v9, v10, s);
            }
          }
        }
        LOBYTE(v23) = *v20;
        switch ( *v20 )
        {
          case 0:
            goto LABEL_81;
          case 7:
            LOBYTE(v23) = 97;
            goto LABEL_78;
          case 8:
            LOBYTE(v23) = 98;
            goto LABEL_69;
          case 9:
LABEL_72:
            LOBYTE(v23) = 116;
            goto LABEL_69;
          case 10:
LABEL_68:
            LOBYTE(v23) = 110;
LABEL_69:
            LODWORD(v13) = 0;
            v11 = 0;
            if ( v82 )
              return sub_405990((__int64)v9, v10, s);
            goto LABEL_29;
          case 11:
LABEL_80:
            LOBYTE(v23) = 118;
            goto LABEL_78;
          case 12:
LABEL_77:
            LOBYTE(v23) = 102;
LABEL_78:
            if ( v82 )
              return sub_405990((__int64)v9, v10, s);
LABEL_79:
            v11 = 0;
            goto LABEL_37;
          case 13:
            v57 = 0;
LABEL_76:
            LOBYTE(v23) = 13;
            v29 = 114;
            LOBYTE(v13) = v19 == 2;
            goto LABEL_66;
          case 32:
            v33 = 0;
LABEL_128:
            LOBYTE(v23) = 32;
            goto LABEL_123;
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
            v57 = 0;
LABEL_74:
            LODWORD(v13) = 0;
            goto LABEL_67;
          case 35:
          case 126:
            v34 = 0;
LABEL_125:
            if ( !v18 )
            {
              v11 = v57;
              LODWORD(v13) = 0;
              v57 = v34;
              goto LABEL_23;
            }
            v57 = v34;
            v11 = 0;
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
            v33 = 0;
LABEL_123:
            v11 = v57;
            v57 = v33;
            v25 = 0;
            goto LABEL_25;
          case 39:
            v57 = 0;
            goto LABEL_62;
          case 63:
            v57 = 0;
            goto LABEL_58;
          case 92:
            v57 = 0;
            goto LABEL_65;
          case 123:
          case 125:
            v57 = 0;
            goto LABEL_17;
          default:
            v57 = 0;
            goto LABEL_98;
        }
LABEL_24:
        v25 = 0;
LABEL_25:
        if ( a7 )
        {
          LODWORD(v13) = (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v23 >> 5)) >> v23) & 1;
          if ( (_DWORD)v13 )
          {
            LOBYTE(v13) = v19 == 2;
LABEL_28:
            if ( v82 )
              return sub_405990((__int64)v9, v10, s);
LABEL_29:
            v26 = v15 ^ 1;
            LOBYTE(v26) = v13 & (v15 ^ 1);
            if ( (unsigned __int8)v13 & ((unsigned __int8)v15 ^ 1) )
            {
              if ( v10 > v16 )
                v9[v16] = 39;
              if ( v16 + 1 < v10 )
                v9[v16 + 1] = 36;
              LODWORD(v13) = v16 + 2;
              if ( v16 + 2 < v10 )
                v9[v16 + 2] = 39;
              v16 += 3LL;
              v15 = v26;
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
        if ( v57 )
          goto LABEL_28;
        ++v18;
        LODWORD(v28) = v15 & (v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v28 )
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
          v9[v16] = v23;
        v27 = v59;
        ++v16;
        if ( !(_BYTE)v11 )
          v27 = 0;
        v59 = v27;
      }
      LOBYTE(v23) = *v20;
      switch ( *v20 )
      {
        case 0:
          if ( !v56 )
          {
            if ( !(v81 & 1) )
            {
              v57 = 0;
              LOBYTE(v13) = v19 == 2;
              v11 = 0;
              LOBYTE(v23) = 0;
              goto LABEL_23;
            }
            ++v18;
            goto LABEL_4;
          }
LABEL_81:
          if ( v82 )
            return sub_405990((__int64)v9, v10, s);
          v57 = 0;
LABEL_83:
          LOBYTE(v13) = v19 == 2;
          v25 = v15 ^ 1;
          LOBYTE(v25) = (v19 == 2) & (v15 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 36;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v31 = v16 + 3;
            if ( v10 <= v16 + 3 )
            {
              v16 += 4LL;
              v15 = v25;
              v11 = 0;
              LOBYTE(v23) = 48;
              goto LABEL_49;
            }
            goto LABEL_91;
          }
          v31 = v16;
          if ( v10 > v16 )
          {
            v25 = v15;
LABEL_91:
            v9[v31] = 92;
            v15 = v25;
          }
          v16 = v31 + 1;
          if ( v19 == 2 )
          {
            v25 = v11;
            LOBYTE(v23) = 48;
            v11 = 0;
            goto LABEL_49;
          }
          LOBYTE(v23) = 48;
          if ( v18 + 1 < v17 && (unsigned __int8)(s[v18 + 1] - 48) <= 9u )
          {
            if ( v10 > v16 )
              v9[v16] = 48;
            if ( v10 > v31 + 2 )
              v9[v31 + 2] = 48;
            v16 = v31 + 3;
            LOBYTE(v23) = 48;
          }
LABEL_95:
          v25 = v11;
          v11 = 0;
          if ( (unsigned __int8)v13 | v56 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v23) = 7;
          v29 = 97;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v23) = 8;
          v29 = 98;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v23) = 9;
          v29 = 116;
          goto LABEL_104;
        case 10:
          LOBYTE(v23) = 10;
          v29 = 110;
          goto LABEL_104;
        case 11:
          LOBYTE(v23) = 11;
          v29 = 118;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 12:
          LOBYTE(v23) = 12;
          v29 = 102;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 13:
          LOBYTE(v23) = 13;
          v29 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v57 = v19 == 2 && v82;
          if ( v57 )
            return sub_405990((__int64)v9, v10, s);
          goto LABEL_66;
        case 32:
          LOBYTE(v23) = 32;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_21;
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
        case 35:
        case 126:
          LOBYTE(v13) = v19 == 2;
          goto LABEL_20;
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
        case 39:
LABEL_62:
          if ( v19 != 2 )
          {
            v83 = v11;
            LODWORD(v13) = 0;
            LOBYTE(v23) = 39;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_405990((__int64)v9, v10, s);
          if ( !v10 || (v13 = 0LL, v79) )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 92;
            v13 = v10;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v10 = v79;
          }
          v83 = v11;
          v16 += 3LL;
          v25 = 0;
          v15 = 0;
          v79 = v10;
          LOBYTE(v23) = 39;
          v10 = v13;
          goto LABEL_49;
        case 63:
LABEL_58:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_405990((__int64)v9, v10, s);
            v11 = 0;
            v25 = 0;
            LOBYTE(v23) = 63;
            goto LABEL_49;
          }
          if ( v19 != 5 )
          {
            LOBYTE(v23) = 63;
            LOBYTE(v13) = v19 == 2;
            v11 = 0;
            goto LABEL_23;
          }
          if ( !(v81 & 4)
            || v18 + 2 >= v17
            || s[v18 + 1] != 63
            || (v23 = (unsigned __int8)s[v18 + 2], (unsigned __int8)v23 > 0x3Eu)
            || (v49 = 8070630310989004800LL, !_bittest64(&v49, v23)) )
          {
            LODWORD(v13) = 0;
            v11 = 0;
            LOBYTE(v23) = 63;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_405990((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_405990((__int64)v9, v10, s);
            ++v18;
            LOBYTE(v28) = v15;
            v11 = 0;
            LOBYTE(v23) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LODWORD(v13) = v56;
          LOBYTE(v23) = 92;
          v29 = 92;
          LOBYTE(v13) = (n != 0) & v82 & v56;
          if ( (_BYTE)v13 )
          {
            ++v18;
            LOBYTE(v28) = v15;
            v11 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v56 )
          {
LABEL_67:
            v11 = 0;
            goto LABEL_23;
          }
          LOBYTE(v23) = v29;
          v11 = 0;
          goto LABEL_28;
        case 123:
        case 125:
LABEL_17:
          v24 = v17 != 1;
          if ( v17 == -1LL )
            v24 = s[1] != 0;
          LOBYTE(v13) = v19 == 2;
          if ( v24 )
            goto LABEL_67;
LABEL_20:
          if ( v18 )
            goto LABEL_67;
LABEL_21:
          if ( !v82 || !(_BYTE)v13 )
            goto LABEL_23;
          return sub_405990((__int64)v9, v10, s);
        default:
LABEL_98:
          if ( v80 == 1 )
          {
            v73 = v19;
            v68 = v17;
            v63 = v15;
            v28 = __ctype_b_loc();
            LODWORD(v13) = (unsigned __int8)v23;
            v15 = v63;
            v17 = v68;
            v19 = v73;
            v32 = 1LL;
            LODWORD(v28) = (*v28)[(unsigned __int8)v23];
            LOWORD(v28) = (unsigned __int16)v28 & 0x4000;
            LOBYTE(v11) = (_WORD)v28 != 0;
            LOBYTE(v13) = v56 & ((_WORD)v28 == 0);
            goto LABEL_100;
          }
          ps = 0LL;
          if ( v17 == -1LL )
          {
            v74 = v19;
            v69 = v15;
            v64 = v20;
            v39 = strlen(s);
            v19 = v74;
            LOBYTE(v15) = v69;
            v20 = v64;
            v17 = v39;
          }
          v85 = v16;
          v86 = v20;
          v40 = 0LL;
          v84 = v15;
          v75 = v9;
          v77 = v10;
          v65 = v17;
          v70 = v19;
          break;
      }
      while ( 2 )
      {
        v41 = v18 + v40;
        v28 = (const unsigned __int16 **)sub_409610((wchar_t *)&wc, &s[v18 + v40]);
        v42 = v28;
        if ( !v28 )
        {
LABEL_241:
          v32 = v40;
          v16 = v85;
          v15 = v84;
          v9 = v75;
          LODWORD(v13) = v11 ^ 1;
          v10 = v77;
          v17 = v65;
          v19 = v70;
          LOBYTE(v13) = v56 & (v11 ^ 1);
          goto LABEL_242;
        }
        if ( v28 == (const unsigned __int16 **)-1LL )
        {
          v32 = v40;
          v16 = v85;
          v11 = 0;
          v15 = v84;
          v9 = v75;
          v10 = v77;
          v17 = v65;
          v19 = v70;
          LODWORD(v13) = v56;
          goto LABEL_242;
        }
        if ( v28 == (const unsigned __int16 **)-2LL )
        {
          v17 = v65;
          v50 = v18 + v40;
          v51 = &s[v18 + v40];
          v28 = (const unsigned __int16 **)v40;
          v32 = v40;
          v15 = v84;
          v16 = v85;
          v9 = v75;
          v10 = v77;
          v19 = v70;
          if ( v50 < v65 && *v51 )
          {
            do
              v28 = (const unsigned __int16 **)((char *)v28 + 1);
            while ( (unsigned __int64)v28 + v18 < v65 && *((_BYTE *)v28 + (_QWORD)v86) );
            v32 = (unsigned __int64)v28;
          }
          LODWORD(v13) = v56;
          v11 = 0;
LABEL_242:
          if ( v32 > 1 )
            goto LABEL_174;
LABEL_100:
          if ( (_BYTE)v13 )
          {
            LODWORD(v13) = v56;
            LOBYTE(v11) = 0;
LABEL_174:
            v44 = 0;
            v45 = v18 + v32;
            v46 = v57;
            while ( 1 )
            {
              if ( (_BYTE)v13 )
              {
                if ( v82 )
                  return sub_405990((__int64)v9, v10, s);
                LOBYTE(v28) = (v15 ^ 1) & (v19 == 2);
                if ( (_BYTE)v28 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 36;
                  if ( v10 > v16 + 2 )
                    v9[v16 + 2] = 39;
                  v16 += 3LL;
                  v15 = (int)v28;
                }
                if ( v10 > v16 )
                  v9[v16] = 92;
                if ( v10 > v16 + 1 )
                  v9[v16 + 1] = ((unsigned __int8)v23 >> 6) + 48;
                LODWORD(v28) = v16 + 2;
                if ( v10 > v16 + 2 )
                {
                  LODWORD(v28) = (((unsigned __int8)v23 >> 3) & 7) + 48;
                  v9[v16 + 2] = (_BYTE)v28;
                }
                ++v18;
                v16 += 3LL;
                LOBYTE(v23) = (v23 & 7) + 48;
                if ( v18 >= v45 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_40;
                }
                v44 = v13;
              }
              else
              {
                LODWORD(v28) = v15 & (v44 ^ 1);
                if ( v46 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 92;
                  ++v16;
                }
                if ( ++v18 >= v45 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_51;
                }
                if ( (_BYTE)v28 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  LODWORD(v28) = v16 + 1;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 39;
                  v16 += 2LL;
                  v46 = 0;
                  v15 = 0;
                }
                else
                {
                  v46 = 0;
                }
              }
              if ( v10 > v16 )
                v9[v16] = v23;
              LOBYTE(v23) = s[v18];
              ++v16;
            }
          }
LABEL_101:
          LOBYTE(v13) = v19 == 2;
LABEL_23:
          v25 = (v13 | v56 ^ 1) ^ 1;
          LOBYTE(v25) = v82 | (v13 | v56 ^ 1) ^ 1;
          if ( !(v82 | (unsigned __int8)(v13 | v56 ^ 1) ^ 1) )
            goto LABEL_49;
          goto LABEL_24;
        }
        if ( v70 != 2 || !v82 || v28 == (const unsigned __int16 **)1 )
        {
LABEL_148:
          if ( !iswprint(wc) )
            v11 = 0;
          v40 += (unsigned __int64)v42;
          LODWORD(v28) = mbsinit(&ps);
          if ( (_DWORD)v28 )
            goto LABEL_241;
          continue;
        }
        break;
      }
      v43 = &s[v41 + 1];
      while ( (unsigned __int8)(*v43 - 91) > 0x21u || !((1LL << (*v43 - 91)) & 0x20000002BLL) )
      {
        if ( &s[(_QWORD)v42 + v41] == ++v43 )
          goto LABEL_148;
      }
      v9 = v75;
      v10 = v77;
      return sub_405990((__int64)v9, v10, s);
    case 5:
      if ( v12 )
      {
        v59 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v15 = 0;
          v59 = 1;
          v83 = 0;
          v79 = 0LL;
        }
        else
        {
          v79 = 0LL;
          v15 = 0;
          v59 = 1;
          v83 = 0;
        }
        v82 = 0;
        v16 = 1LL;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 6:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 5;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v56 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_405890("`", v11);
        v47 = sub_405890("'", v11);
        v14 = v55;
        a9 = v47;
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
      v58 = v14;
      v48 = strlen(a9);
      v59 = 1;
      v15 = 0;
      v14 = v58;
      n = v48;
      v83 = 0;
      s2 = a9;
      v79 = 0LL;
      v56 = 1;
      goto LABEL_3;
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_406BC0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int128 *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // er8
  char *v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v17 = a2;
  v6 = __errno_location();
  v7 = off_60E298;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60E2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_407C30();
    v9 = 16LL * (a1 + 1);
    if ( off_60E298 == &xmmword_60E2A0 )
    {
      v7 = (__int128 *)sub_407A40(0LL, v9);
      off_60E298 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E2A0);
    }
    else
    {
      off_60E298 = (__int128 *)sub_407A40(off_60E298, v9);
      v7 = off_60E298;
    }
    memset(&v7[dword_60E2B0], 0, 16LL * (a1 + 1 - dword_60E2B0));
    dword_60E2B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_405990(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60E340 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_4079E0(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_405990(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_406BC0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int128 *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // er8
  char *v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v17 = a2;
  v6 = __errno_location();
  v7 = off_60E298;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60E2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_407C30();
    v9 = 16LL * (a1 + 1);
    if ( off_60E298 == &xmmword_60E2A0 )
    {
      v7 = (__int128 *)sub_407A40(0LL, v9);
      off_60E298 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E2A0);
    }
    else
    {
      off_60E298 = (__int128 *)sub_407A40(off_60E298, v9);
      v7 = off_60E298;
    }
    memset(&v7[dword_60E2B0], 0, 16LL * (a1 + 1 - dword_60E2B0));
    dword_60E2B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_405990(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60E340 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_4079E0(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_405990(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_4070E0(int a1, int a2, char *a3)
{
  int v4; // [rsp+0h] [rbp-48h]
  int v5; // [rsp+4h] [rbp-44h]
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

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
  return sub_406BC0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4070E0(int a1, int a2, char *a3)
{
  int v4; // [rsp+0h] [rbp-48h]
  int v5; // [rsp+4h] [rbp-44h]
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

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
  return sub_406BC0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407150(int a1, int a2, char *a3, unsigned __int64 a4)
{
  int v5; // [rsp+0h] [rbp-48h]
  int v6; // [rsp+4h] [rbp-44h]
  __int64 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+10h] [rbp-38h]
  __int64 v9; // [rsp+18h] [rbp-30h]
  __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v5 = a2;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  return sub_406BC0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_407150(int a1, int a2, char *a3, unsigned __int64 a4)
{
  int v5; // [rsp+0h] [rbp-48h]
  int v6; // [rsp+4h] [rbp-44h]
  __int64 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+10h] [rbp-38h]
  __int64 v9; // [rsp+18h] [rbp-30h]
  __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v5 = a2;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  return sub_406BC0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_4071E0(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_60E470;
  v7 = _mm_load_si128((const __m128i *)&xmmword_60E440);
  v8 = _mm_load_si128((const __m128i *)&xmmword_60E450);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_60E460);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_406BC0(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_407260(char *a1)
{
  return sub_4071E0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_407290(int a1, int a2, char *a3)
{
  int v4; // [rsp+0h] [rbp-48h]
  int v5; // [rsp+4h] [rbp-44h]
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

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
  return sub_406BC0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407290(int a1, int a2, char *a3)
{
  int v4; // [rsp+0h] [rbp-48h]
  int v5; // [rsp+4h] [rbp-44h]
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

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
  return sub_406BC0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407300(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_60E440);
  v7 = _mm_load_si128((const __m128i *)&xmmword_60E450);
  v8 = _mm_load_si128((const __m128i *)&xmmword_60E460);
  v9 = qword_60E470;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_406BC0(a1, a4, a5, (__int64)&v6);
}

_BYTE *__fastcall sub_4073F0(int a1, char *a2)
{
  return sub_406BC0(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60E260);
}

_BYTE *__fastcall sub_407410(char *a1)
{
  return sub_406BC0(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60E260);
}

__int64 __fastcall sub_407430(char a1)
{
  return sub_408660(a1);
}

__int64 __fastcall sub_407440(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  __int64 result; // rax
  const char *v13; // rsi
  __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  __int64 v18; // rbx
  char *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // rbx
  char *v24; // rax

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
    case 1LL:
      v14 = *v7;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *v7;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *v7;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 7LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 8LL:
      v10 = *v7;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *v7;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *v7;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_407440(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  __int64 result; // rax
  const char *v13; // rsi
  __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  __int64 v18; // rbx
  char *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // rbx
  char *v24; // rax

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
    case 1LL:
      v14 = *v7;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *v7;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *v7;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 7LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 8LL:
      v10 = *v7;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *v7;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *v7;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_407840(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
{
  __int64 i; // r9
  __int64 *v6; // r10
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 *v9; // r10
  __int64 v10; // rax
  __int64 v12[11]; // [rsp+0h] [rbp-58h]

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
        return sub_407440(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_407440(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_4078A0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  char *v7; // r10
  unsigned int v8; // er8
  __int64 i; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v15[10]; // [rsp+20h] [rbp-88h]
  char v16[32]; // [rsp+70h] [rbp-38h]
  __int64 v17; // [rsp+90h] [rbp-18h]
  __int64 v18; // [rsp+98h] [rbp-10h]

  v17 = a5;
  v7 = &a7;
  v8 = 32;
  v18 = a6;
  for ( i = 0LL; i != 10; ++i )
  {
    if ( v8 <= 0x2F )
    {
      v10 = v8;
      v8 += 8;
      v11 = *(_QWORD *)&v16[v10];
      v15[i] = v11;
      if ( !v11 )
        return sub_407440(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_407440(a1, a2, a3, a4, v15, i);
}

int sub_407960()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, aReportBugsTo, 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_409E16);
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_4079E0(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_407C30();
  }
  return result;
}

void *__fastcall sub_407A40(void *a1, size_t a2)
{
  void *result; // rax

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
        sub_407C30();
    }
  }
  return result;
}

void *__fastcall sub_407BE0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_4079E0(n);
  return memcpy(v2, src, n);
}

void __noreturn sub_407C30()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

unsigned __int64 __fastcall sub_407C70(char *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  int v10; // ebx
  int v11; // eax
  unsigned __int64 v12; // rbp
  int *v13; // r14
  _BYTE *v14; // rax
  int v15; // esi
  int v17; // ebp
  int *v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v7 = a4;
  v8 = a3;
  v9 = a6;
  v10 = a7;
  v11 = sub_4081A0(a1);
  if ( v11 )
  {
    v17 = v11;
    v18 = __errno_location();
    v13 = v18;
    if ( v17 == 1 )
    {
      *v18 = 75;
    }
    else if ( v17 == 3 )
    {
      *v18 = 0;
    }
  }
  else
  {
    v12 = v19;
    if ( v19 >= v8 && v19 <= v7 )
      return v12;
    v13 = __errno_location();
    *v13 = v19 < 0x40000000 ? 34 : 75;
  }
  v14 = sub_407410(a1);
  v15 = *v13;
  if ( *v13 == 22 )
    v15 = 0;
  if ( !a7 )
    v10 = 1;
  error(v10, v15, "%s: %s", v9, v14);
  return v19;
}

unsigned __int64 __fastcall sub_407D40(char *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return sub_407C70(a1, 10LL, a2, a3, a4, a5, a6);
}

__int64 __fastcall sub_407D70(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
{
  char **v5; // r15
  unsigned __int64 *v6; // r14
  const char *v7; // r13
  int *v8; // rax
  int *v9; // r12
  unsigned __int8 v10; // bl
  const unsigned __int16 *v11; // rsi
  char *v12; // rax
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  int v15; // er12
  char *v17; // rax
  char *v18; // r8
  __int64 v19; // rax
  char *v20; // rax
  char v21; // al
  int v22; // esi
  unsigned __int64 v23; // rdx
  char *v24; // r8
  unsigned __int64 v25; // kr30_8
  char *v26; // rax
  int v27; // edi
  int v28; // er9
  bool v29; // of
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int base; // [rsp+0h] [rbp-58h]
  char *basea; // [rsp+0h] [rbp-58h]
  char *baseb; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h]

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoul");
  v5 = a2;
  base = a3;
  v6 = a4;
  v7 = a5;
  if ( !a2 )
    v5 = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = *nptr;
  v11 = *__ctype_b_loc();
  v12 = nptr;
  while ( v11[v10] & 0x2000 )
    v10 = *++v12;
  if ( v10 == 45 )
    return 4;
  v13 = strtoul(nptr, v5, base);
  if ( *v5 == nptr )
  {
    basea = *v5;
    if ( v7 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(v7, (char)v15);
        v18 = basea;
        if ( v17 )
          goto LABEL_20;
      }
    }
    return 4;
  }
  if ( *v9 )
  {
    v14 = 1;
    if ( *v9 == 34 )
      goto LABEL_11;
    return 4;
  }
  v14 = 0;
LABEL_11:
  if ( v7 )
  {
    v15 = (unsigned __int8)**v5;
    if ( (_BYTE)v15 )
    {
      baseb = *v5;
      v26 = strchr(v7, (char)v15);
      v18 = baseb;
      if ( !v26 )
      {
LABEL_39:
        *v6 = v13;
        v14 |= 2u;
        return v14;
      }
LABEL_20:
      v19 = 142129060940101LL;
      if ( !_bittest64(&v19, (unsigned int)(v15 - 69)) || (v37 = v18, v20 = strchr(v7, 48), v18 = v37, !v20) )
      {
LABEL_26:
        v22 = 1;
        v23 = 1024LL;
        goto LABEL_27;
      }
      v21 = v37[1];
      if ( v21 != 68 )
      {
        if ( v21 == 105 )
        {
          v23 = 1024LL;
          v22 = 2 * (v37[2] == 66) + 1;
LABEL_27:
          switch ( (_BYTE)v15 )
          {
            case 0x42:
              if ( v13 >> 54 )
                goto LABEL_37;
              v13 <<= 10;
              break;
            case 0x45:
              goto LABEL_70;
            case 0x47:
            case 0x67:
              goto LABEL_76;
            case 0x4B:
            case 0x6B:
              goto LABEL_36;
            case 0x4D:
            case 0x6D:
              goto LABEL_29;
            case 0x50:
              goto LABEL_64;
            case 0x54:
            case 0x74:
              goto LABEL_58;
            case 0x59:
              goto LABEL_52;
            case 0x5A:
              goto LABEL_46;
            case 0x62:
              goto LABEL_43;
            case 0x63:
              break;
            case 0x77:
              if ( (v13 & 0x8000000000000000LL) != 0LL )
                goto LABEL_37;
              v13 *= 2LL;
              break;
            default:
              goto LABEL_39;
          }
LABEL_32:
          v24 = &v18[v22];
          *v5 = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
        if ( v21 != 66 )
        {
          switch ( (_BYTE)v15 )
          {
            case 0x45:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_70:
              v33 = 6;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_50;
            case 0x46:
            case 0x48:
            case 0x49:
            case 0x4A:
            case 0x4C:
            case 0x4E:
            case 0x4F:
            case 0x51:
            case 0x52:
            case 0x53:
            case 0x55:
            case 0x56:
            case 0x57:
            case 0x58:
            case 0x5B:
            case 0x5C:
            case 0x5D:
            case 0x5E:
            case 0x5F:
            case 0x60:
            case 0x61:
            case 0x64:
            case 0x65:
            case 0x66:
            case 0x68:
            case 0x69:
            case 0x6A:
            case 0x6C:
            case 0x6E:
            case 0x6F:
            case 0x70:
            case 0x71:
            case 0x72:
            case 0x73:
              goto LABEL_39;
            case 0x47:
            case 0x67:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_76:
              if ( is_mul_ok((int)v23, v13)
                && is_mul_ok((int)v23, (int)v23 * v13)
                && is_mul_ok((int)v23, (int)v23 * (int)v23 * v13) )
              {
                v13 *= (int)v23 * (int)v23 * (__int64)(int)v23;
              }
              else
              {
                v13 = -1LL;
                v14 |= 1u;
              }
              goto LABEL_32;
            case 0x4B:
            case 0x6B:
              v22 = 1;
              v23 = 1024LL;
LABEL_36:
              v25 = v13;
              v13 *= v23;
              if ( is_mul_ok(v23, v25) )
                goto LABEL_32;
              goto LABEL_37;
            case 0x4D:
            case 0x6D:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_29:
              if ( !is_mul_ok((int)v23, v13) || !is_mul_ok((int)v23, (int)v23 * v13) )
                goto LABEL_37;
              v13 *= (int)v23 * (__int64)(int)v23;
              break;
            case 0x50:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_64:
              v32 = 5;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_50;
            case 0x54:
            case 0x74:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_58:
              v31 = 4;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_50;
            case 0x59:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_52:
              v30 = 8;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v30;
              }
              while ( v30 );
              goto LABEL_50;
            case 0x5A:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_46:
              v27 = 7;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v27;
              }
              while ( v27 );
LABEL_50:
              v14 |= v28;
              break;
            case 0x62:
              v22 = 1;
LABEL_43:
              if ( v13 >> 55 )
              {
LABEL_37:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 9;
              }
              break;
            case 0x63:
              v22 = 1;
              goto LABEL_32;
            default:
              goto LABEL_26;
          }
          goto LABEL_32;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_27;
    }
  }
LABEL_13:
  *v6 = v13;
  return v14;
}

__int64 __fastcall sub_4081A0(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
{
  char **v5; // r15
  unsigned __int64 *v6; // r14
  const char *v7; // r13
  int *v8; // rax
  int *v9; // r12
  unsigned __int8 v10; // bl
  const unsigned __int16 *v11; // rsi
  char *v12; // rax
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  int v15; // er12
  char *v17; // rax
  char *v18; // r8
  __int64 v19; // rax
  char *v20; // rax
  char v21; // al
  int v22; // esi
  unsigned __int64 v23; // rdx
  char *v24; // r8
  unsigned __int64 v25; // kr30_8
  char *v26; // rax
  int v27; // edi
  int v28; // er9
  bool v29; // of
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int base; // [rsp+0h] [rbp-58h]
  char *basea; // [rsp+0h] [rbp-58h]
  char *baseb; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h]

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
  v5 = a2;
  base = a3;
  v6 = a4;
  v7 = a5;
  if ( !a2 )
    v5 = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = *nptr;
  v11 = *__ctype_b_loc();
  v12 = nptr;
  while ( v11[v10] & 0x2000 )
    v10 = *++v12;
  if ( v10 == 45 )
    return 4;
  v13 = __strtoul_internal(nptr, v5, base, 0);
  if ( *v5 == nptr )
  {
    basea = *v5;
    if ( v7 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(v7, (char)v15);
        v18 = basea;
        if ( v17 )
          goto LABEL_20;
      }
    }
    return 4;
  }
  if ( *v9 )
  {
    v14 = 1;
    if ( *v9 == 34 )
      goto LABEL_11;
    return 4;
  }
  v14 = 0;
LABEL_11:
  if ( v7 )
  {
    v15 = (unsigned __int8)**v5;
    if ( (_BYTE)v15 )
    {
      baseb = *v5;
      v26 = strchr(v7, (char)v15);
      v18 = baseb;
      if ( !v26 )
      {
LABEL_39:
        *v6 = v13;
        v14 |= 2u;
        return v14;
      }
LABEL_20:
      v19 = 142129060940101LL;
      if ( !_bittest64(&v19, (unsigned int)(v15 - 69)) || (v37 = v18, v20 = strchr(v7, 48), v18 = v37, !v20) )
      {
LABEL_26:
        v22 = 1;
        v23 = 1024LL;
        goto LABEL_27;
      }
      v21 = v37[1];
      if ( v21 != 68 )
      {
        if ( v21 == 105 )
        {
          v23 = 1024LL;
          v22 = 2 * (v37[2] == 66) + 1;
LABEL_27:
          switch ( (_BYTE)v15 )
          {
            case 0x42:
              if ( v13 >> 54 )
                goto LABEL_37;
              v13 <<= 10;
              break;
            case 0x45:
              goto LABEL_70;
            case 0x47:
            case 0x67:
              goto LABEL_76;
            case 0x4B:
            case 0x6B:
              goto LABEL_36;
            case 0x4D:
            case 0x6D:
              goto LABEL_29;
            case 0x50:
              goto LABEL_64;
            case 0x54:
            case 0x74:
              goto LABEL_58;
            case 0x59:
              goto LABEL_52;
            case 0x5A:
              goto LABEL_46;
            case 0x62:
              goto LABEL_43;
            case 0x63:
              break;
            case 0x77:
              if ( (v13 & 0x8000000000000000LL) != 0LL )
                goto LABEL_37;
              v13 *= 2LL;
              break;
            default:
              goto LABEL_39;
          }
LABEL_32:
          v24 = &v18[v22];
          *v5 = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
        if ( v21 != 66 )
        {
          switch ( (_BYTE)v15 )
          {
            case 0x45:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_70:
              v33 = 6;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_50;
            case 0x46:
            case 0x48:
            case 0x49:
            case 0x4A:
            case 0x4C:
            case 0x4E:
            case 0x4F:
            case 0x51:
            case 0x52:
            case 0x53:
            case 0x55:
            case 0x56:
            case 0x57:
            case 0x58:
            case 0x5B:
            case 0x5C:
            case 0x5D:
            case 0x5E:
            case 0x5F:
            case 0x60:
            case 0x61:
            case 0x64:
            case 0x65:
            case 0x66:
            case 0x68:
            case 0x69:
            case 0x6A:
            case 0x6C:
            case 0x6E:
            case 0x6F:
            case 0x70:
            case 0x71:
            case 0x72:
            case 0x73:
              goto LABEL_39;
            case 0x47:
            case 0x67:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_76:
              if ( is_mul_ok((int)v23, v13)
                && is_mul_ok((int)v23, (int)v23 * v13)
                && is_mul_ok((int)v23, (int)v23 * (int)v23 * v13) )
              {
                v13 *= (int)v23 * (int)v23 * (__int64)(int)v23;
              }
              else
              {
                v13 = -1LL;
                v14 |= 1u;
              }
              goto LABEL_32;
            case 0x4B:
            case 0x6B:
              v22 = 1;
              v23 = 1024LL;
LABEL_36:
              v25 = v13;
              v13 *= v23;
              if ( is_mul_ok(v23, v25) )
                goto LABEL_32;
              goto LABEL_37;
            case 0x4D:
            case 0x6D:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_29:
              if ( !is_mul_ok((int)v23, v13) || !is_mul_ok((int)v23, (int)v23 * v13) )
                goto LABEL_37;
              v13 *= (int)v23 * (__int64)(int)v23;
              break;
            case 0x50:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_64:
              v32 = 5;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_50;
            case 0x54:
            case 0x74:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_58:
              v31 = 4;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_50;
            case 0x59:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_52:
              v30 = 8;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v30;
              }
              while ( v30 );
              goto LABEL_50;
            case 0x5A:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_46:
              v27 = 7;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v27;
              }
              while ( v27 );
LABEL_50:
              v14 |= v28;
              break;
            case 0x62:
              v22 = 1;
LABEL_43:
              if ( v13 >> 55 )
              {
LABEL_37:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 9;
              }
              break;
            case 0x63:
              v22 = 1;
              goto LABEL_32;
            default:
              goto LABEL_26;
          }
          goto LABEL_32;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_27;
    }
  }
LABEL_13:
  *v6 = v13;
  return v14;
}

int __fastcall sub_4085E0(FILE *stream)
{
  int *v1; // rax
  int v2; // er12
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
  if ( !(unsigned int)sub_4087A0(stream) )
    return fclose(stream);
  v1 = __errno_location();
  v2 = *v1;
  v3 = v1;
  result = fclose(stream);
  if ( v2 )
  {
    *v3 = v2;
    result = -1;
  }
  return result;
}

__int64 __fastcall sub_408660(char a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // rax
  int v7; // edi
  int v8; // er12
  int *v9; // rbp

  if ( a2 == 1030 )
  {
    if ( dword_60E478 < 0 )
    {
      v3 = sub_408660(a1);
      if ( v3 >= 0 && dword_60E478 == -1 )
      {
LABEL_8:
        v5 = fcntl((unsigned __int8)v3, 1);
        if ( v5 < 0 || fcntl((unsigned __int8)v3, 2, v5 | 1u) == -1 )
        {
          v6 = __errno_location();
          v7 = v3;
          v3 = -1;
          v8 = *v6;
          v9 = v6;
          close(v7);
          *v9 = v8;
        }
        return (unsigned int)v3;
      }
    }
    else
    {
      v3 = fcntl(a1, 1030, (unsigned int)a3);
      if ( v3 >= 0 || *__errno_location() != 22 )
      {
        dword_60E478 = 1;
      }
      else
      {
        v3 = sub_408660(a1);
        if ( v3 >= 0 )
        {
          dword_60E478 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v3;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_4087A0(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_4087E0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_4087E0(FILE *a1, __off_t a2, int a3)
{
  __off_t v3; // rax
  int v4; // er12
  int v5; // eax

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

__int64 __fastcall sub_408840(__int64 a1, int *a2)
{
  __int64 v2; // r11
  int v3; // er12
  int v4; // ebp
  __int64 v5; // rbx
  int v6; // er9
  int v7; // er10
  int v8; // er8
  int v9; // er14
  int v10; // edx
  __int64 *v11; // rax
  unsigned __int64 v12; // r13
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
  v6 = a2[11];
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
      v12 = v2 + 8 * (v6 + (unsigned __int64)(unsigned int)(v10 - 1));
      v13 = v7 - (__int64)v6;
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
  a2[12] = v4;
  result = (unsigned int)(v4 - v8);
  a2[11] = result + v3;
  return result;
}

__int64 __fastcall sub_408920(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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
  __int64 v28; // rbp
  char *v29; // rax
  __int64 v30; // rbp
  char *v31; // rax
  FILE *v32; // rdi
  char **v33; // rbx
  _BYTE *v34; // rbp
  __int64 v35; // r12
  __int64 v36; // rbp
  char *v37; // rax
  char **v38; // [rsp+0h] [rbp-88h]
  int v39; // [rsp+Ch] [rbp-7Ch]
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  _DWORD *v43; // [rsp+20h] [rbp-68h]
  char *s; // [rsp+30h] [rbp-58h]
  int v45; // [rsp+38h] [rbp-50h]
  char v46; // [rsp+3Fh] [rbp-49h]
  int v47; // [rsp+40h] [rbp-48h]
  int v48; // [rsp+44h] [rbp-44h]
  int v49; // [rsp+48h] [rbp-40h]

  v47 = a1;
  v9 = (const char *)*((_QWORD *)a7 + 4);
  s = a3;
  v38 = a4;
  v43 = a5;
  v10 = (char *)*((_QWORD *)a7 + 4);
  v39 = a6;
  v46 = *v9;
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
    if ( !v39 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(s, v46), result = 0xFFFFFFFFLL, !v18) )
    {
      if ( a8 )
      {
        v24 = *a2;
        v25 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v25, v24);
      }
      *((_QWORD *)a7 + 4) = 0LL;
      ++*a7;
      a7[2] = 0;
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
    v13 = (int)v13 + 1;
  }
  v12 = 0LL;
  v48 = -1;
  v15 = s1;
  v16 = 0LL;
  v45 = 0;
  v49 = 0;
  ptr = 0LL;
  s1a = v10;
  v17 = v38;
  do
  {
    if ( strncmp(v15, v9, v11) )
      goto LABEL_20;
    if ( v12 )
    {
      if ( (v39
         || *((_DWORD *)v12 + 2) != *((_DWORD *)v17 + 2)
         || v12[2] != v17[2]
         || *((_DWORD *)v12 + 6) != *((_DWORD *)v17 + 6))
        && !v45 )
      {
        if ( a8 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((int)v13 + 1, 1uLL);
          if ( ptr )
          {
            v49 = 1;
            ptr[v48] = 1;
LABEL_19:
            ptr[v16] = 1;
            goto LABEL_20;
          }
          v45 = 1;
        }
        else
        {
          v45 = 1;
          if ( ptr )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v48 = v16;
      v12 = v17;
    }
LABEL_20:
    v17 += 4;
    v15 = *v17;
    ++v16;
  }
  while ( *v17 );
  v10 = s1a;
  if ( ptr || v45 )
  {
    if ( a8 )
    {
      if ( v45 )
      {
        v26 = *a2;
        v27 = dcgettext(0LL, "%s: option '%s%s' is ambiguous\n", 5);
        __fprintf_chk(stderr, 1LL, v27, v26);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
      else
      {
        flockfile(stderr);
        v30 = *a2;
        v31 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v31, v30);
        v32 = stderr;
        v33 = v38;
        v34 = ptr;
        v35 = (__int64)&ptr[v13 + 1];
        do
        {
          if ( *v34 )
          {
            __fprintf_chk(v32, 1LL, " '%s%s'", a9);
            v32 = stderr;
          }
          ++v34;
          v33 += 4;
        }
        while ( (_BYTE *)v35 != v34 );
        fputc(10, v32);
        funlockfile(stderr);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
    }
    if ( v49 )
      free(ptr);
    *((_QWORD *)a7 + 4) = &v9[strlen(v9)];
    ++*a7;
    a7[2] = 0;
    result = 63LL;
  }
  else
  {
    if ( !v12 )
      goto LABEL_24;
    LODWORD(v13) = v48;
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
        v28 = *a2;
        v29 = dcgettext(0LL, "%s: option '%s%s' doesn't allow an argument\n", 5);
        __fprintf_chk(stderr, 1LL, v29, v28);
      }
      a7[2] = *((_DWORD *)v12 + 6);
      result = 63LL;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_33;
      if ( v21 >= v47 )
      {
        if ( a8 )
        {
          v36 = *a2;
          v37 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v37, v36);
        }
        a7[2] = *((_DWORD *)v12 + 6);
        result = 5 * (unsigned int)(*s != 58) + 58;
      }
      else
      {
        *a7 = v20 + 2;
        *((_QWORD *)a7 + 2) = a2[v21];
LABEL_33:
        if ( v43 )
          *v43 = v13;
        v23 = v12[2];
        result = *((unsigned int *)v12 + 6);
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

__int64 __fastcall sub_408F40(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
{
  int v8; // er13
  int v9; // eax
  int v10; // ebp
  __int64 *v11; // r12
  char *v12; // r15
  _BYTE *v13; // rdx
  char v14; // al
  char v15; // al
  int v16; // eax
  _BYTE *v17; // r14
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // er14
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
  char **v45; // [rsp+8h] [rbp-60h]
  _DWORD *v46; // [rsp+10h] [rbp-58h]
  char v47; // [rsp+1Ch] [rbp-4Ch]
  int v48; // [rsp+1Ch] [rbp-4Ch]
  int v49; // [rsp+1Ch] [rbp-4Ch]
  int v50; // [rsp+1Ch] [rbp-4Ch]
  _BYTE *v51; // [rsp+20h] [rbp-48h]
  __int64 v52; // [rsp+28h] [rbp-40h]

  v45 = a4;
  v46 = a5;
  v8 = a7[1];
  if ( a1 <= 0 )
    return (unsigned int)-1;
  v9 = *a7;
  v10 = a1;
  v11 = (__int64 *)a2;
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
  if ( !((v14 - 43) & 0xFD) )
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
        sub_408840(a2, a7);
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
          v28 = (_BYTE *)v11[v27];
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
    v17 = (_BYTE *)v11[v16];
    if ( !strcmp((const char *)v11[v16], "--") )
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
        sub_408840((__int64)v11, a7);
        v18 = a7[11];
      }
      a7[12] = a1;
      *a7 = a1;
      goto LABEL_41;
    }
    if ( *v17 == 45 )
    {
      v30 = v17[1];
      if ( v30 )
      {
        if ( v45 )
        {
          if ( v30 == 45 )
          {
            *((_QWORD *)a7 + 4) = v17 + 2;
            return (unsigned int)sub_408920(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_408920(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"-");
              if ( v21 != -1 )
                return v21;
              v17 = (_BYTE *)v11[*a7];
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
  v52 = (__int64)(v13 + 1);
  v47 = *v13;
  v22 = strchr(v12, v21);
  v23 = v52;
  if ( !v51[1] )
    ++*a7;
  if ( (unsigned __int8)(v47 - 58) > 1u && v22 )
  {
    v24 = v22[1];
    if ( *v22 == 87 && v45 && v24 == 59 )
    {
      if ( v51[1] )
      {
LABEL_68:
        *((_QWORD *)a7 + 4) = v23;
        *((_QWORD *)a7 + 2) = 0LL;
        return (unsigned int)sub_408920(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
      }
      v32 = *a7;
      if ( (_DWORD)v32 != a1 )
      {
        v23 = v11[v32];
        goto LABEL_68;
      }
      if ( v8 )
      {
        v43 = *v11;
        v44 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v44, v43);
      }
      a7[2] = v21;
      v21 = 5 * (*v12 != 58) + 58;
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
        else if ( a1 == (_DWORD)v36 )
        {
          if ( v8 )
          {
            v41 = *v11;
            v42 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v42, v41);
          }
          a7[2] = v21;
          v21 = 5 * (*v12 != 58) + 58;
        }
        else
        {
          v37 = v36 + 1;
          v38 = v11[v36];
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
      v39 = *v11;
      v40 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
      __fprintf_chk(stderr, 1LL, v40, v39);
    }
    a7[2] = v21;
    v21 = 63;
  }
  return v21;
}

__int64 __fastcall sub_409510(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_60E480 = dword_60E2BC;
  dword_60E484 = dword_60E2B8;
  result = sub_408F40(a1, a2, a3, a4, a5, a6, &dword_60E480, a7);
  dword_60E2BC = dword_60E480;
  qword_60E4C0 = qword_60E490;
  dword_60E2B4 = dword_60E488;
  return result;
}

__int64 __fastcall sub_409570(int a1, __int64 a2, char *a3)
{
  return sub_409510(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_409590(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_409510(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_4095B0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_408F40(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_4095D0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_409510(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_4095F0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_408F40(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_409610(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx
  wchar_t *v5; // r12
  char *v6; // rbp
  char v8; // [rsp+Ch] [rbp-1Ch]

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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_4096F0(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

int __fastcall sub_409690(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  int result; // eax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_4085E0(stream);
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

bool __fastcall sub_4096F0(int a1)
{
  char *v1; // rdx
  bool result; // al

  v1 = setlocale(a1, 0LL);
  result = 1;
  if ( v1 )
  {
    result = 0;
    if ( strcmp(v1, "C") )
      result = strcmp(v1, "POSIX") != 0;
  }
  return result;
}

const char *sub_409750()
{
  char *v0; // rax
  char *v1; // r15
  const char *v2; // rbx
  char v3; // bp
  size_t v4; // rax
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
  int v17; // er12
  FILE *v18; // r13
  const char *v19; // rax
  FILE *v20; // rbx
  const char *v21; // r13
  char *v22; // rax
  int v23; // edi
  char *v24; // kr00_8
  char *v25; // rdx
  int v26; // esi
  unsigned int v27; // eax
  __int64 v28; // rdx
  signed __int64 v29; // rax
  char *v30; // rax
  signed __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rsi
  unsigned int v34; // ecx
  __int64 v35; // rdi
  char *v36; // rsi
  unsigned int v37; // edx
  char *v38; // rcx
  FILE *v39; // rdi
  int v40; // eax
  bool v41; // dl
  char *v42; // rax
  __int64 v43; // rax
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
  __int64 v61; // [rsp+8h] [rbp-D0h]
  __int64 v62; // [rsp+18h] [rbp-C0h]
  char v63[64]; // [rsp+20h] [rbp-B8h]
  char v64[120]; // [rsp+60h] [rbp-78h]

  v0 = nl_langinfo(14);
  v1 = qword_60E4B8;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_60E4B8 )
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
          qword_60E4B8 = v1;
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
            v22 = v20->_IO_read_ptr;
            if ( v22 < v20->_IO_read_end )
            {
LABEL_31:
              v20->_IO_read_ptr = v22 + 1;
              v23 = (unsigned __int8)*v22;
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
              v25 = v64;
              do
              {
                v26 = *(_DWORD *)v25;
                v25 += 4;
                v27 = ~v26 & (v26 - 16843009) & 0x80808080;
              }
              while ( !v27 );
              if ( !(~v26 & (v26 - 16843009) & 0x8080) )
                v27 >>= 16;
              if ( !(~v26 & (v26 - 16843009) & 0x8080) )
                v25 += 2;
              v28 = &v25[-__CFADD__((_BYTE)v27, (_BYTE)v27) - 3] - v64;
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
                v1 = "%s: invalid option -- '%c'\n" + 27;
                v2 = v58;
                free(v59);
                sub_4085E0(v60);
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
              else if ( v34 & 4 )
              {
                *(_DWORD *)v36 = *(_DWORD *)v63;
                *(_DWORD *)&v36[v34 - 4] = *(_DWORD *)&v63[v34 - 4];
              }
              else if ( v34 )
              {
                *v36 = v63[0];
                if ( v34 & 2 )
                  *(_WORD *)&v36[v34 - 2] = *(_WORD *)&v63[v34 - 2];
              }
              v37 = v32 + 1;
              v38 = &v30[v35 - 1];
              if ( v37 >= 8 )
              {
                *(_QWORD *)v38 = *(_QWORD *)v64;
                *(_QWORD *)&v38[v37 - 8] = *(_QWORD *)&v64[v37 - 8];
                v51 = (unsigned __int64)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v52 = &v38[-v51];
                v53 = (char *)(v64 - v52);
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
              else if ( v37 & 4 )
              {
                *(_DWORD *)v38 = *(_DWORD *)v64;
                *(_DWORD *)&v38[v37 - 4] = *(_DWORD *)&v64[v37 - 4];
              }
              else if ( v37 )
              {
                *v38 = v64[0];
                if ( v37 & 2 )
                  *(_WORD *)&v38[v37 - 2] = *(_WORD *)&v64[v37 - 2];
              }
              v1 = v30;
              v22 = v20->_IO_read_ptr;
              if ( v22 < v20->_IO_read_end )
                goto LABEL_31;
            }
            v39 = v20;
            v2 = v21;
            sub_4085E0(v39);
            if ( !v61 )
              goto LABEL_25;
            v1[v61] = 0;
            goto LABEL_26;
          }
          close(v17);
        }
LABEL_25:
        v1 = "%s: invalid option -- '%c'\n" + 27;
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

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_409D30(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_60E228 )
    v1 = (void *)unk_60E228;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409D48(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_60DE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
