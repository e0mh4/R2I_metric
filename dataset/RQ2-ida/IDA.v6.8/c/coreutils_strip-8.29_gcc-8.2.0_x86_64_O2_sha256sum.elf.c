__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  char v3; // r14@1
  char *v4; // r13@1
  unsigned __int64 v5; // r12@1
  FILE *v6; // rbp@1
  const char *v7; // rbx@1
  int v8; // eax@2
  const char *v9; // rsi@32
  __int64 v10; // rax@42
  int v11; // eax@45
  char *v12; // rax@48
  signed __int64 v13; // rbx@49
  __ssize_t v14; // rax@50
  signed __int64 v15; // r8@50
  char *v16; // r15@51
  char *v17; // rcx@51
  __int64 v18; // rdx@54
  char v19; // r10@57
  unsigned __int8 v20; // cf@57
  bool v21; // zf@57
  const char *v22; // rdi@59
  signed __int64 v23; // rcx@59
  char *v24; // rsi@59
  char v25; // al@63
  const char *v26; // rax@70
  char *v27; // rax@70
  __int64 v28; // rdx@74
  char v29; // al@74
  signed __int64 v30; // rax@77
  char v31; // si@78
  const char *v32; // r15@82
  bool v33; // cf@83
  bool v34; // zf@83
  char *v35; // rdi@84
  const char *v36; // rsi@84
  __int64 v37; // r14@88
  int v38; // eax@90
  char *v39; // rax@93
  const char *v40; // rsi@95
  char *v41; // rax@96
  __int64 v42; // rcx@98
  __int64 v43; // r8@98
  int v44; // ebx@98
  char v45; // al@112
  __int64 v46; // rax@67
  __int64 v47; // r15@67
  char *v48; // rax@67
  unsigned __int8 v49; // ST30_1@117
  const __int32_t **v50; // rax@117
  unsigned __int64 v51; // rdx@117
  const __int32_t *v52; // rdi@117
  char *v53; // rax@123
  char *v54; // ST38_8@125
  char *v55; // ST30_8@125
  signed __int64 v57; // r11@133
  char *v58; // rdx@139
  FILE *v59; // rax@140
  __int64 v60; // rax@141
  __int64 v61; // rbx@141
  int *v62; // rax@141
  char *v63; // rax@148
  signed int v64; // ebx@150
  __int64 v65; // rdx@152
  char *v66; // rax@154
  char *v67; // rax@157
  char *v68; // rax@159
  char v69; // dl@164
  signed __int64 v70; // rax@164
  const char *v71; // rax@171
  char v72; // dl@172
  char v73; // al@174
  FILE *v74; // rax@184
  char *v75; // rax@184
  __int64 v76; // rax@185
  __int64 v77; // rax@186
  __int64 v78; // rbx@186
  char *v79; // rax@186
  char v80; // ST30_1@187
  char *v81; // ST30_8@190
  __int64 v82; // rax@190
  int *v83; // rax@200
  char *v84; // rax@203
  FILE *v85; // rax@205
  char *v86; // rax@205
  char *v87; // rax@107
  char *v88; // rax@105
  char *v89; // rax@103
  char *v90; // rax@206
  unsigned __int64 v91; // ST38_8@212
  char *v92; // ST30_8@212
  const char **v93; // [sp+0h] [bp-108h]@44
  char *s; // [sp+8h] [bp-100h]@46
  char v95; // [sp+13h] [bp-F5h]@45
  int v96; // [sp+14h] [bp-F4h]@47
  unsigned __int64 v97; // [sp+18h] [bp-F0h]@49
  signed __int64 v98; // [sp+20h] [bp-E8h]@76
  char v99; // [sp+28h] [bp-E0h]@76
  unsigned __int64 v100; // [sp+28h] [bp-E0h]@117
  __int64 v101; // [sp+30h] [bp-D8h]@76
  const char **v102; // [sp+38h] [bp-D0h]@42
  unsigned __int64 v103; // [sp+40h] [bp-C8h]@49
  char v104; // [sp+48h] [bp-C0h]@45
  char v105; // [sp+49h] [bp-BFh]@49
  char v106; // [sp+4Ah] [bp-BEh]@45
  char v107; // [sp+4Bh] [bp-BDh]@45
  int v108; // [sp+4Ch] [bp-BCh]@45
  char v109; // [sp+5Fh] [bp-A9h]@90
  char *lineptr; // [sp+60h] [bp-A8h]@49
  size_t n; // [sp+68h] [bp-A0h]@49
  char v112[48]; // [sp+70h] [bp-98h]@127
  char v113[104]; // [sp+A0h] [bp-68h]@90

  v3 = 0;
  LOBYTE(v4) = 0;
  LODWORD(v5) = -1;
  LODWORD(v6) = a1;
  v7 = (const char *)a2;
  sub_406260(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_409E30(
    sub_403080,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  setvbuf(stdout, 0LL, 1, 0LL);
  while ( 1 )
  {
    v8 = sub_409690(a1, a2, "bctw", &off_40A9E0, 0LL);
    if ( v8 == -1 )
      break;
    if ( v8 == 119 )
    {
      byte_60E2DC = 0;
      byte_60E2DB = 1;
      byte_60E2D9 = 0;
    }
    else if ( v8 <= 119 )
    {
      if ( v8 == 98 )
        goto LABEL_15;
      if ( v8 <= 98 )
      {
        if ( v8 == -131 )
        {
          sub_408310((char)stdout);
          exit(0);
        }
        if ( v8 == -130 )
          sub_402C90(0);
LABEL_204:
        sub_402C90(1);
      }
      if ( v8 == 99 )
      {
        LOBYTE(v4) = 1;
      }
      else
      {
        if ( v8 != 116 )
          goto LABEL_204;
        LODWORD(v5) = 0;
      }
    }
    else if ( v8 == 130 )
    {
      byte_60E2DC = 0;
      byte_60E2DB = 0;
      byte_60E2D9 = 1;
    }
    else if ( v8 > 130 )
    {
      if ( v8 == 131 )
      {
        byte_60E2D8 = 1;
      }
      else
      {
        if ( v8 != 132 )
          goto LABEL_204;
        v3 = 1;
LABEL_15:
        LODWORD(v5) = 1;
      }
    }
    else if ( v8 == 128 )
    {
      byte_60E2DA = 1;
    }
    else
    {
      if ( v8 != 129 )
        goto LABEL_204;
      byte_60E2DC = 1;
      byte_60E2DB = 0;
      byte_60E2D9 = 0;
    }
  }
  qword_60E2E8 = 66LL;
  qword_60E2E0 = 64LL;
  if ( !(_DWORD)v5 && v3 )
  {
    v9 = "--tag does not support --text mode";
    goto LABEL_203;
  }
  if ( (_BYTE)v4 )
  {
    v9 = "the --tag option is meaningless when verifying checksums";
    if ( v3 )
      goto LABEL_203;
  }
  v9 = "the --binary and --text options are meaningless when verifying checksums";
  if ( ((unsigned int)~(_DWORD)v5 >> 31) & (unsigned __int8)v4 )
    goto LABEL_203;
  if ( byte_60E2DA )
    goto LABEL_71;
  if ( !byte_60E2DC )
  {
    if ( !byte_60E2DB )
      goto LABEL_201;
    v9 = "the --warn option is meaningful only when verifying checksums";
    if ( (_BYTE)v4 )
      goto LABEL_40;
    goto LABEL_203;
  }
  v9 = "the --status option is meaningful only when verifying checksums";
  if ( !(_BYTE)v4 )
  {
LABEL_203:
    v84 = dcgettext(0LL, v9, 5);
    error(0, 0, v84);
    goto LABEL_204;
  }
LABEL_37:
  if ( !byte_60E2DB )
    goto LABEL_38;
  while ( 1 )
  {
LABEL_40:
    if ( (_DWORD)v5 == -1 )
      LODWORD(v5) = 0;
    v102 = (const char **)&v7[8 * (signed int)v6];
    v10 = dword_60E29C;
    if ( dword_60E29C == (_DWORD)v6 )
    {
      *v102 = "-";
      ++v102;
    }
    v93 = (const char **)&v7[8 * v10];
    if ( v102 <= v93 )
    {
      v104 = 1;
      goto LABEL_130;
    }
    v104 = 1;
    v95 = (char)v4;
    v11 = (unsigned int)v5 < 1 ? 0xFFFFFFF6 : 0;
    v106 = v3;
    v108 = v11 + 42;
    v107 = v11 + 42;
    do
    {
      s = (char *)*v93;
      if ( !v95 )
      {
        if ( !(unsigned __int8)sub_402AF0(s, v112, v113) )
        {
          v104 = 0;
          goto LABEL_129;
        }
        if ( strchr(s, 92) || strchr(s, 10) )
        {
          if ( v106 )
          {
            v90 = stdout->_IO_write_ptr;
            if ( stdout->_IO_write_end <= v90 )
            {
              v64 = 1;
              __overflow(stdout, 92);
            }
            else
            {
              v64 = 1;
              stdout->_IO_write_ptr = v90 + 1;
              *v90 = 92;
            }
LABEL_197:
            fwrite_unlocked("SHA256", 1uLL, 6uLL, stdout);
            fwrite_unlocked(" (", 1uLL, 2uLL, stdout);
            sub_402A40(s, (unsigned int)v64);
            fwrite_unlocked(") = ", 1uLL, 4uLL, stdout);
            if ( !((unsigned __int64)qword_60E2E0 >> 1) )
              goto LABEL_153;
            goto LABEL_151;
          }
          v63 = stdout->_IO_write_ptr;
          if ( v63 >= stdout->_IO_write_end )
          {
            __overflow(stdout, 92);
          }
          else
          {
            stdout->_IO_write_ptr = v63 + 1;
            *v63 = 92;
          }
          v64 = 1;
          if ( !((unsigned __int64)qword_60E2E0 >> 1) )
            goto LABEL_157;
        }
        else
        {
          v64 = 0;
          if ( v106 )
            goto LABEL_197;
          if ( !((unsigned __int64)qword_60E2E0 >> 1) )
            goto LABEL_157;
        }
LABEL_151:
        v6 = 0LL;
        do
        {
          v65 = *((_BYTE *)&v6->_flags + (_QWORD)v112);
          v6 = (FILE *)((char *)v6 + 1);
          __printf_chk(1LL, "%02x", v65);
        }
        while ( (unsigned __int64)qword_60E2E0 >> 1 > (unsigned __int64)v6 );
LABEL_153:
        if ( v106 )
        {
LABEL_154:
          v66 = stdout->_IO_write_ptr;
          if ( v66 >= stdout->_IO_write_end )
          {
            __overflow(stdout, 10);
          }
          else
          {
            stdout->_IO_write_ptr = v66 + 1;
            *v66 = 10;
          }
          goto LABEL_129;
        }
LABEL_157:
        v67 = stdout->_IO_write_ptr;
        if ( v67 >= stdout->_IO_write_end )
        {
          __overflow(stdout, 32);
        }
        else
        {
          stdout->_IO_write_ptr = v67 + 1;
          *v67 = 32;
        }
        v68 = stdout->_IO_write_ptr;
        if ( v68 >= stdout->_IO_write_end )
        {
          __overflow(stdout, v108);
        }
        else
        {
          stdout->_IO_write_ptr = v68 + 1;
          *v68 = v107;
        }
        sub_402A40(s, (unsigned int)v64);
        goto LABEL_154;
      }
      v96 = strcmp(*v93, "-");
      if ( v96 )
      {
        LODWORD(v59) = sub_4061C0(s, 4235055LL);
        v6 = v59;
        if ( !v59 )
          goto LABEL_141;
      }
      else
      {
        byte_60E2F0 = 1;
        v12 = dcgettext(0LL, "standard input", 5);
        v6 = stdin;
        s = v12;
      }
      v105 = 0;
      v3 = 0;
      v5 = 0LL;
      v13 = 1LL;
      lineptr = 0LL;
      n = 0LL;
      v103 = 0LL;
      v97 = 0LL;
      while ( 1 )
      {
        v14 = __getdelim(&lineptr, &n, 10, v6);
        if ( v14 <= 0 )
          break;
        v16 = lineptr;
        v17 = (char *)(unsigned __int8)*lineptr;
        if ( (_BYTE)v17 == 35 )
          goto LABEL_68;
        v15 = v14;
        if ( lineptr[v14 - 1] == 10 )
        {
          v15 = v14 - 1;
          lineptr[v14 - 1] = 0;
          v16 = lineptr;
          LOBYTE(v17) = *lineptr;
        }
        v18 = 0LL;
        while ( (_BYTE)v17 == 32 )
LABEL_55:
          LOBYTE(v17) = v16[++v18];
        if ( (_BYTE)v17 == 9 )
          goto LABEL_55;
        v19 = 0;
        v20 = (unsigned __int8)v17 < 0x5Cu;
        v21 = (_BYTE)v17 == 92;
        if ( (_BYTE)v17 == 92 )
        {
          v19 = v95;
          v20 = __CFADD__(v18, 1LL);
          v21 = v18++ == -1;
        }
        v4 = &v16[v18];
        v22 = "SHA256";
        v23 = 6LL;
        v24 = &v16[v18];
        do
        {
          if ( !v23 )
            break;
          v20 = (unsigned __int8)*v24 < *v22;
          v21 = *v24++ == *v22++;
          --v23;
        }
        while ( v21 );
        if ( !(v20 | v21) == v20 )
        {
          v25 = v16[v18 + 6];
          v17 = (char *)(v18 + 6);
          if ( v25 == 32 )
          {
            v25 = v16[v18 + 7];
            v17 = (char *)(v18 + 7);
          }
          if ( v25 != 40 || (++v17, (v15 -= (signed __int64)v17) == 0) )
          {
LABEL_66:
            ++v5;
            if ( byte_60E2DB )
            {
              LODWORD(v46) = sub_407D00(0LL, 3LL, s, v17, v15);
              v47 = v46;
              v48 = dcgettext(0LL, "%s: %lu: improperly formatted %s checksum line", 5);
              error(0, 0, v48, v47, v13, "SHA256", v93);
            }
LABEL_68:
            if ( v6->_flags & 0x30 )
              break;
            goto LABEL_69;
          }
          v32 = &v16[(_QWORD)v17];
          v57 = v15 - 1;
          if ( v15 != 1 )
          {
            if ( v32[v15 - 1] == 41 )
            {
LABEL_162:
              v58 = (char *)&v32[v57];
LABEL_163:
              if ( v19 )
              {
                v24 = (char *)v57;
                v81 = v58;
                LODWORD(v82) = sub_4029B0(v32, v57);
                v58 = v81;
                if ( !v82 )
                  goto LABEL_66;
              }
              *v58 = 0;
              v69 = v32[v57 + 1];
              v70 = v57 + 1;
              if ( v69 == 9 || v69 == 32 )
              {
                do
                {
                  do
                    v69 = v32[++v70];
                  while ( v69 == 32 );
                }
                while ( v69 == 9 );
              }
              if ( v69 != 61 )
                goto LABEL_66;
              v4 = (char *)&v32[v70 + 1];
              if ( *v4 == 32 || *v4 == 9 )
              {
                v71 = &v32[v70 + 2];
                do
                {
                  do
                  {
                    v72 = *v71;
                    v4 = (char *)v71++;
                  }
                  while ( v72 == 32 );
                }
                while ( v72 == 9 );
              }
              v73 = sub_402950(v4, v24);
              goto LABEL_175;
            }
            while ( --v57 )
            {
              if ( v32[v57] == 41 )
                goto LABEL_162;
            }
          }
          if ( *v32 != 41 )
            goto LABEL_66;
          v58 = (char *)v32;
          v57 = 0LL;
          goto LABEL_163;
        }
        v17 = (char *)(v15 - v18);
        if ( v15 - v18 < qword_60E2E8 + (unsigned __int64)(*v4 == 92) )
          goto LABEL_66;
        v28 = qword_60E2E0 + v18;
        v17 = &v16[v28];
        v29 = v16[v28];
        if ( v29 != 32 && v29 != 9 )
          goto LABEL_66;
        *v17 = 0;
        v101 = v28;
        v99 = v19;
        v98 = v15;
        if ( !(unsigned __int8)sub_402950(v4, v24) )
          goto LABEL_66;
        v15 = v98;
        v17 = (char *)(unsigned int)dword_60E210;
        v30 = v101 + 1;
        if ( v98 - (v101 + 1) != 1 && ((v31 = v16[v101 + 1], v31 == 32) || v31 == 42) )
        {
          if ( dword_60E210 != 1 )
          {
            dword_60E210 = 0;
            v30 = v101 + 2;
          }
        }
        else
        {
          if ( !dword_60E210 )
            goto LABEL_66;
          dword_60E210 = 1;
        }
        v32 = &v16[v30];
        if ( v99 )
        {
          LODWORD(v76) = sub_4029B0(v32, v98 - v30);
          v73 = v76 != 0;
LABEL_175:
          if ( !v73 )
            goto LABEL_66;
        }
        v33 = 0;
        v34 = v96 == 0;
        if ( !v96 )
        {
          v35 = "-";
          v17 = (char *)2;
          v36 = v32;
          do
          {
            if ( !v17 )
              break;
            v33 = *v36 < (unsigned __int8)*v35;
            v34 = *v36++ == *v35++;
            --v17;
          }
          while ( v34 );
          if ( (!v33 && !v34) == v33 )
            goto LABEL_66;
        }
        LODWORD(v37) = 0;
        if ( !byte_60E2DC )
          v37 = strchr(v32, 10) != 0LL;
        v38 = sub_402AF0(v32, v113, &v109);
        v15 = (unsigned int)v38;
        if ( !(_BYTE)v38 )
        {
          ++v97;
          if ( byte_60E2DC )
            goto LABEL_97;
          if ( (_DWORD)v37 )
          {
            v39 = stdout->_IO_write_ptr;
            if ( v39 >= stdout->_IO_write_end )
            {
              __overflow(stdout, 92);
            }
            else
            {
              stdout->_IO_write_ptr = v39 + 1;
              *v39 = 92;
            }
          }
          sub_402A40(v32, (unsigned int)v37);
          v40 = "FAILED open or read";
          goto LABEL_96;
        }
        if ( byte_60E2DA && v109 )
          goto LABEL_97;
        v17 = (char *)((unsigned __int64)qword_60E2E0 >> 1);
        if ( (unsigned __int64)qword_60E2E0 >> 1 )
        {
          v100 = (unsigned __int64)qword_60E2E0 >> 1;
          v49 = v38;
          v50 = __ctype_tolower_loc();
          v51 = 0LL;
          v15 = v49;
          v17 = (char *)v100;
          v52 = *v50;
          while ( v52[(unsigned __int8)v4[2 * v51]] == byte_40A9C0[(unsigned __int64)(((unsigned __int8)v113[v51] >> 4) & 0xF)]
               && v52[(unsigned __int8)v4[2 * v51 + 1]] == byte_40A9C0[(unsigned __int64)(v113[v51] & 0xF)] )
          {
            if ( v100 == ++v51 )
            {
              v51 = v100;
              goto LABEL_180;
            }
          }
          ++v103;
          if ( byte_60E2DC )
            goto LABEL_97;
          if ( (_DWORD)v37 )
          {
LABEL_123:
            v53 = stdout->_IO_write_ptr;
            if ( v53 >= stdout->_IO_write_end )
            {
              v91 = v51;
              v92 = v17;
              __overflow(stdout, 92);
              v17 = v92;
              v51 = v91;
            }
            else
            {
              stdout->_IO_write_ptr = v53 + 1;
              *v53 = 92;
            }
          }
          v54 = (char *)v51;
          v55 = v17;
          sub_402A40(v32, (unsigned int)v37);
          v17 = v55;
          if ( v55 != v54 )
          {
            v40 = "FAILED";
LABEL_96:
            v41 = dcgettext(0LL, v40, 5);
            __printf_chk(1LL, ": %s\n", v41);
            goto LABEL_97;
          }
          goto LABEL_188;
        }
        v51 = 0LL;
LABEL_180:
        v105 = byte_60E2DC;
        if ( byte_60E2DC )
          goto LABEL_97;
        v105 = byte_60E2D9;
        if ( byte_60E2D9 )
          goto LABEL_97;
        if ( (_DWORD)v37 )
        {
          v105 = v15;
          goto LABEL_123;
        }
        v80 = v15;
        sub_402A40(v32, 0LL);
        v15 = (unsigned __int8)v80;
        v105 = v80;
LABEL_188:
        if ( !byte_60E2D9 )
        {
          v40 = "OK";
          goto LABEL_96;
        }
LABEL_97:
        v3 = v95;
        if ( v6->_flags & 0x30 )
          break;
LABEL_69:
        if ( !++v13 )
        {
          LODWORD(v26) = sub_407D00(0LL, 3LL, s, v17, v15);
          v7 = v26;
          v27 = dcgettext(0LL, "%s: too many checksum lines", 5);
          error(1, 0, v27, v7, v93);
LABEL_71:
          v9 = "the --ignore-missing option is meaningful only when verifying checksums";
          if ( !(_BYTE)v4 )
            goto LABEL_203;
          goto LABEL_37;
        }
      }
      free(lineptr);
      v44 = v6->_flags & 0x20;
      if ( v44 )
      {
        LODWORD(v77) = sub_407D00(0LL, 3LL, s, v42, v43);
        v78 = v77;
        v79 = dcgettext(0LL, "%s: read error", 5);
        error(0, 0, v79, v78, v93);
        v45 = 0;
        goto LABEL_113;
      }
      if ( !v96 || !(unsigned int)sub_4086E0(v6) )
      {
        if ( v3 )
        {
          if ( byte_60E2DC )
            goto LABEL_220;
          if ( v5 )
          {
            v89 = dcngettext(
                    0LL,
                    "WARNING: %lu line is improperly formatted",
                    "WARNING: %lu lines are improperly formatted",
                    v5,
                    5);
            error(0, 0, v89, v5, v93);
          }
          if ( v97 )
          {
            v3 = v97;
            v88 = dcngettext(
                    0LL,
                    "WARNING: %lu listed file could not be read",
                    "WARNING: %lu listed files could not be read",
                    v97,
                    5);
            error(0, 0, v88, v97, v93);
          }
          if ( v103 )
          {
            v3 = v103;
            v87 = dcngettext(
                    0LL,
                    "WARNING: %lu computed checksum did NOT match",
                    "WARNING: %lu computed checksums did NOT match",
                    v103,
                    5);
            error(0, 0, v87, v103, v93);
          }
          if ( !byte_60E2DA )
          {
LABEL_220:
            if ( v105 )
              goto LABEL_110;
          }
          else if ( v105 )
          {
LABEL_110:
            if ( !(v103 | v97) )
              LOBYTE(v44) = (v5 == 0) | byte_60E2D8 ^ 1;
          }
          else
          {
            LODWORD(v85) = sub_407D00(0LL, 3LL, s, v42, v43);
            v6 = v85;
            v86 = dcgettext(0LL, "%s: no file was verified", 5);
            error(0, 0, v86, v6, v93);
          }
        }
        else
        {
          LODWORD(v74) = sub_407D00(0LL, 3LL, s, v42, v43);
          v6 = v74;
          v75 = dcgettext(0LL, "%s: no properly formatted %s checksum lines found", 5);
          error(0, 0, v75, v6, "SHA256", v93);
        }
        v45 = v44 & 1;
        goto LABEL_113;
      }
LABEL_141:
      LODWORD(v60) = sub_407D00(0LL, 3LL, s, v42, v43);
      v61 = v60;
      v62 = __errno_location();
      error(0, *v62, "%s", v61, v93);
      v45 = 0;
LABEL_113:
      v104 &= v45;
LABEL_129:
      ++v93;
    }
    while ( v102 > v93 );
LABEL_130:
    if ( !byte_60E2F0 || (unsigned int)sub_4086E0(stdin) != -1 )
      return (unsigned __int8)(v104 ^ 1);
    v7 = dcgettext(0LL, "standard input", 5);
    v83 = __errno_location();
    error(1, *v83, v7, v93);
LABEL_201:
    if ( byte_60E2D9 == 1 )
    {
      v9 = "the --quiet option is meaningful only when verifying checksums";
      if ( !(_BYTE)v4 )
        goto LABEL_203;
    }
LABEL_38:
    if ( byte_60E2D8 )
    {
      v9 = "the --strict option is meaningful only when verifying checksums";
      if ( !(_BYTE)v4 )
        goto LABEL_203;
    }
  }
}

int sub_40289B()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_4028BA()
{
  return 0;
}

int sub_4028F1()
{
  int result; // eax@4

  if ( !byte_60E2C8 )
  {
    while ( qword_60E2D0 < (unsigned __int64)(((&unk_60DE48 - (_UNKNOWN *)&qword_60DE40) >> 3) - 1) )
      (*(&qword_60DE40 + ++qword_60E2D0))();
    result = sub_40289B();
    byte_60E2C8 = 1;
  }
  return result;
}

int sub_402948()
{
  return sub_4028BA();
}

bool __fastcall sub_402950(_BYTE *a1)
{
  _BYTE *v1; // rbx@1
  unsigned __int64 v2; // rbp@1
  const unsigned __int16 *v3; // rcx@2
  unsigned __int64 v4; // rax@2
  bool result; // al@5

  v1 = a1;
  v2 = qword_60E2E0;
  if ( qword_60E2E0 )
  {
    v3 = *__ctype_b_loc();
    LODWORD(v4) = 0;
    while ( HIBYTE(v3[*v1]) & 0x10 )
    {
      ++v1;
      v4 = (unsigned int)(v4 + 1);
      if ( v4 >= v2 )
        goto LABEL_6;
    }
    result = 0;
  }
  else
  {
LABEL_6:
    result = *v1 == 0;
  }
  return result;
}

__int64 __fastcall sub_4029B0(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax@1
  unsigned __int64 v3; // rdx@1
  char v4; // cl@2
  char v5; // cl@5
  _BYTE *v7; // r9@8

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

void __fastcall sub_402A40(const char *a1, char a2)
{
  const char *v2; // rbx@1
  char *v3; // rax@3
  int v4; // esi@6

  v2 = a1;
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = *v2;
      if ( !(_BYTE)v4 )
        break;
      if ( (_BYTE)v4 == 10 )
      {
        fwrite_unlocked(&unk_409E84, 1uLL, 2uLL, stdout);
      }
      else if ( (_BYTE)v4 == 92 )
      {
        fwrite_unlocked(&unk_409E87, 1uLL, 2uLL, stdout);
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

__int64 __fastcall sub_402AF0(_BYTE *a1, __int64 a2, _BYTE *a3)
{
  signed __int64 v3; // rcx@1
  _BYTE *v4; // rbp@1
  char *v5; // rdi@1
  _BYTE *v6; // rsi@1
  bool v7; // cf@1
  bool v8; // zf@1
  FILE *v9; // rbx@5
  __int64 v10; // rcx@5
  __int64 v11; // r8@5
  unsigned int v12; // er12@6
  _BYTE *v14; // r13@8
  FILE *v15; // rax@8
  __int64 v16; // rcx@10
  __int64 v17; // r8@10
  __int64 v18; // rax@11
  __int64 v19; // rbx@11
  int *v20; // rax@11
  __int64 v21; // rax@12
  __int64 v22; // rbp@12
  int *v23; // rax@12
  int *v24; // rax@14
  __int64 v25; // rcx@14
  __int64 v26; // r8@14
  int *v27; // rbx@14
  __int64 v28; // rax@16

  v3 = 2LL;
  v4 = a1;
  v5 = "-";
  v6 = v4;
  v7 = 0;
  v8 = 0;
  do
  {
    if ( !v3 )
      break;
    v7 = *v6 < (unsigned __int8)*v5;
    v8 = *v6++ == *v5++;
    --v3;
  }
  while ( v8 );
  *a3 = 0;
  if ( (!v7 && !v8) == v7 )
  {
    v9 = stdin;
    byte_60E2F0 = 1;
    sub_406190(stdin, 2LL);
    if ( !(unsigned int)sub_405EC0(v9) )
      return 1;
LABEL_12:
    v12 = 0;
    LODWORD(v21) = sub_407D00(0LL, 3LL, v4, v10, v11);
    v22 = v21;
    v23 = __errno_location();
    error(0, *v23, "%s", v22);
    if ( stdin != v9 )
      sub_4086E0(v9);
    return v12;
  }
  v14 = a3;
  LODWORD(v15) = sub_4061C0(v4, 4235055LL);
  v9 = v15;
  if ( v15 )
  {
    sub_406190(v15, 2LL);
    if ( !(unsigned int)sub_405EC0(v9) )
    {
      if ( (unsigned int)sub_4086E0(v9) )
      {
        v12 = 0;
        LODWORD(v18) = sub_407D00(0LL, 3LL, v4, v16, v17);
        v19 = v18;
        v20 = __errno_location();
        error(0, *v20, "%s", v19);
        return v12;
      }
      return 1;
    }
    goto LABEL_12;
  }
  v24 = __errno_location();
  v12 = (unsigned __int8)byte_60E2DA;
  v27 = v24;
  if ( byte_60E2DA && *v24 == 2 )
  {
    *v14 = 1;
  }
  else
  {
    v12 = 0;
    LODWORD(v28) = sub_407D00(0LL, 3LL, v4, v25, v26);
    error(0, *v27, "%s", v28);
  }
  return v12;
}

void __fastcall __noreturn sub_402C90(int status)
{
  int v1; // ebx@1
  __int64 v2; // rbp@1
  char *v3; // rax@2
  char *v4; // rax@4
  FILE *v5; // rbp@4
  char *v6; // rax@4
  FILE *v7; // rbp@4
  char *v8; // rax@4
  char *v9; // rax@4
  FILE *v10; // rbp@4
  char *v11; // rax@4
  FILE *v12; // rbp@4
  char *v13; // rax@4
  FILE *v14; // rbp@4
  char *v15; // rax@4
  FILE *v16; // rbp@4
  char *v17; // rax@4
  FILE *v18; // rbp@4
  char *v19; // rax@4
  char *v20; // rax@4
  __int64 *v21; // rax@4
  _BYTE *v22; // rdi@5
  bool v23; // cf@5
  bool v24; // zf@5
  const char *v25; // rsi@6
  signed __int64 v26; // rcx@6
  const char *v27; // rbp@10
  char *v28; // rax@11
  char *v29; // rax@11
  char *v30; // rax@13
  char *v31; // rax@14
  char *v32; // rax@15
  char *v33; // rax@15
  char *v34; // rax@17
  char *v35; // rax@19
  const char *v36; // [sp+0h] [bp-88h]@4
  const char *v37; // [sp+8h] [bp-80h]@4
  const char *v38; // [sp+10h] [bp-78h]@4
  const char *v39; // [sp+18h] [bp-70h]@4
  const char *v40; // [sp+20h] [bp-68h]@4
  const char *v41; // [sp+28h] [bp-60h]@4
  const char *v42; // [sp+30h] [bp-58h]@4
  const char *v43; // [sp+38h] [bp-50h]@4
  const char *v44; // [sp+40h] [bp-48h]@4
  const char *v45; // [sp+48h] [bp-40h]@4
  const char *v46; // [sp+50h] [bp-38h]@4
  const char *v47; // [sp+58h] [bp-30h]@4
  __int64 v48; // [sp+60h] [bp-28h]@4
  __int64 v49; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_60E308;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\nPrint or check %s (%d-bit) checksums.\n", 5);
  __printf_chk(1LL, v4, v2);
  v5 = stdout;
  v6 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "\n  -b, --binary         read in binary mode\n", 5);
  fputs_unlocked(v8, v7);
  v9 = dcgettext(0LL, "  -c, --check          read %s sums from the FILEs and check them\n", 5);
  __printf_chk(1LL, v9, "SHA256");
  v10 = stdout;
  v11 = dcgettext(0LL, "      --tag            create a BSD-style checksum\n", 5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(0LL, "  -t, --text           read in text mode (default)\n", 5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
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
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v19, v18);
  v20 = dcgettext(
          0LL,
          "\n"
          "The sums are computed as described in %s.  When checking, the input\n"
          "should be a former output of this program.  The default mode is to print a\n"
          "line with checksum, a space, a character indicating input mode ('*' for binary,\n"
          "' ' for text or where binary is insignificant), and name for each FILE.\n",
          5);
  __printf_chk(1LL, v20, "FIPS-180-2");
  v36 = "[";
  v21 = (__int64 *)&v36;
  v37 = "test invocation";
  v38 = "coreutils";
  v39 = "Multi-call invocation";
  v40 = "sha224sum";
  v41 = "sha2 utilities";
  v42 = "sha256sum";
  v43 = "sha2 utilities";
  v44 = "sha384sum";
  v45 = "sha2 utilities";
  v46 = "sha512sum";
  v47 = "sha2 utilities";
  v48 = 0LL;
  v49 = 0LL;
  do
  {
    v21 += 2;
    v22 = (_BYTE *)*v21;
    v23 = 0;
    v24 = *v21 == 0;
    if ( !*v21 )
      break;
    v25 = "sha256sum";
    v26 = 10LL;
    do
    {
      if ( !v26 )
        break;
      v23 = (const unsigned __int8)*v25 < *v22;
      v24 = *v25++ == *v22++;
      --v26;
    }
    while ( v24 );
  }
  while ( (!v23 && !v24) != v23 );
  v27 = (const char *)v21[1];
  if ( v27 )
  {
    v28 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v28, &unk_409F12);
    v29 = setlocale(5, 0LL);
    if ( !v29 || !strncmp(v29, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v32 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v32, &unk_409F12);
    v33 = setlocale(5, 0LL);
    if ( !v33 || !strncmp(v33, "en_", 3uLL) )
    {
      v27 = "sha256sum";
      v34 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v34, "https://www.gnu.org/software/coreutils/");
      goto LABEL_14;
    }
    v27 = "sha256sum";
  }
  v35 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v35, "sha256sum");
LABEL_13:
  v30 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v30, "https://www.gnu.org/software/coreutils/");
LABEL_14:
  v31 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v31, v27);
LABEL_3:
  exit(v1);
}

__int64 sub_403080()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_409790(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60E2F8 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60E300 )
      {
        LODWORD(v5) = sub_407CD0(qword_60E300, "write error");
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
  result = sub_409790(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_4031C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax@1
  __int64 v3; // rdx@1

  result = a2;
  v3 = 0LL;
  do
  {
    *(_DWORD *)(a2 + v3) = _byteswap_ulong(*(_DWORD *)(a1 + v3));
    v3 += 4LL;
  }
  while ( v3 != 32 );
  return result;
}

__int64 __fastcall sub_4031E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax@1
  __int64 v3; // rdx@1

  result = a2;
  v3 = 0LL;
  do
  {
    *(_DWORD *)(a2 + v3) = _byteswap_ulong(*(_DWORD *)(a1 + v3));
    v3 += 4LL;
  }
  while ( v3 != 28 );
  return result;
}

__int64 __fastcall sub_403200(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx@1
  int v4; // er13@1
  int v5; // er12@1
  int v6; // er10@1
  int v7; // ebp@1
  unsigned __int8 v8; // cf@1
  int v9; // ecx@1
  int v10; // er9@1
  int v11; // edx@1
  int v12; // er8@1
  __int64 result; // rax@1
  __int64 v14; // rcx@3
  int v15; // ecx@5
  int v16; // esi@5
  int v17; // esi@5
  int v18; // ecx@5
  int v19; // ecx@5
  int v20; // esi@5
  int v21; // edi@5
  int v22; // er14@5
  int v23; // edi@5
  int v24; // esi@5
  int v25; // er8@5
  int v26; // esi@5
  int v27; // edi@5
  int v28; // er8@5
  int v29; // edi@5
  int v30; // edi@5
  int v31; // er8@5
  int v32; // ecx@5
  int v33; // er9@5
  int v34; // ecx@5
  int v35; // er8@5
  int v36; // er8@5
  int v37; // ecx@5
  int v38; // edi@5
  int v39; // ebx@5
  int v40; // edi@5
  int v41; // edi@5
  int v42; // ecx@5
  int v43; // er11@5
  int v44; // eax@5
  int v45; // ebx@5
  int v46; // eax@5
  int v47; // ebx@5
  int v48; // edi@5
  int v49; // eax@5
  int v50; // edi@5
  int v51; // eax@5
  int v52; // eax@5
  int v53; // edi@5
  int v54; // er10@5
  int v55; // edx@5
  int v56; // er10@5
  int v57; // edi@5
  int v58; // edi@5
  int v59; // er11@5
  int v60; // eax@5
  int v61; // er11@5
  int v62; // eax@5
  int v63; // eax@5
  int v64; // esi@5
  int v65; // er11@5
  int v66; // er10@5
  int v67; // er10@5
  int v68; // er11@5
  int v69; // er11@5
  int v70; // er10@5
  int v71; // eax@5
  int v72; // er9@5
  int v73; // eax@5
  int v74; // er9@5
  int v75; // er9@5
  int v76; // eax@5
  int v77; // er10@5
  int v78; // er8@5
  int v79; // er10@5
  int v80; // eax@5
  int v81; // eax@5
  int v82; // er10@5
  int v83; // ecx@5
  int v84; // er9@5
  int v85; // ecx@5
  int v86; // er9@5
  int v87; // er9@5
  int v88; // ecx@5
  int v89; // er10@5
  int v90; // ebx@5
  int v91; // er10@5
  int v92; // ecx@5
  int v93; // ecx@5
  int v94; // er10@5
  int v95; // edx@5
  int v96; // er9@5
  int v97; // edx@5
  int v98; // er9@5
  int v99; // er9@5
  int v100; // edx@5
  int v101; // er10@5
  int v102; // edi@5
  int v103; // er10@5
  int v104; // edx@5
  int v105; // edx@5
  int v106; // er10@5
  int v107; // er9@5
  int v108; // esi@5
  int v109; // er10@5
  int v110; // esi@5
  int v111; // esi@5
  int v112; // er10@5
  int v113; // er9@5
  int v114; // er11@5
  int v115; // er9@5
  int v116; // er10@5
  int v117; // er10@5
  int v118; // er9@5
  int v119; // esi@5
  int v120; // er9@5
  int v121; // esi@5
  int v122; // esi@5
  int v123; // er9@5
  int v124; // er8@5
  int v125; // eax@5
  int v126; // er8@5
  int v127; // er9@5
  int v128; // er9@5
  int v129; // er8@5
  int v130; // esi@5
  int v131; // er8@5
  int v132; // esi@5
  int v133; // er14@5
  int v134; // esi@5
  int v135; // er8@5
  int v136; // ebx@5
  int v137; // ecx@5
  int v138; // er8@5
  int v139; // er14@5
  int v140; // er8@5
  int v141; // ebx@5
  int v142; // er8@5
  int v143; // er14@5
  int v144; // esi@5
  int v145; // ebx@5
  int v146; // esi@5
  int v147; // esi@5
  int v148; // edi@5
  int v149; // edx@5
  int v150; // ebx@5
  int v151; // edi@5
  int v152; // ebx@5
  int v153; // esi@5
  int v154; // edi@5
  int v155; // esi@5
  int v156; // edi@5
  int v157; // edi@5
  int v158; // esi@5
  int v159; // er11@5
  int v160; // er10@5
  int v161; // er11@5
  int v162; // esi@5
  int v163; // esi@5
  int v164; // er11@5
  int v165; // eax@5
  int v166; // edi@5
  int v167; // edi@5
  int v168; // eax@5
  int v169; // eax@5
  int v170; // edi@5
  int v171; // er11@5
  int v172; // er9@5
  int v173; // er11@5
  int v174; // edi@5
  int v175; // er14@5
  int v176; // edi@5
  int v177; // eax@5
  int v178; // er14@5
  int v179; // eax@5
  int v180; // eax@5
  int v181; // er14@5
  int v182; // ecx@5
  int v183; // er8@5
  int v184; // ecx@5
  int v185; // er14@5
  int v186; // er14@5
  int v187; // ecx@5
  int v188; // eax@5
  int v189; // ecx@5
  int v190; // eax@5
  int v191; // eax@5
  int v192; // ecx@5
  int v193; // edx@5
  int v194; // ebx@5
  int v195; // edx@5
  int v196; // ecx@5
  int v197; // ecx@5
  int v198; // er11@5
  int v199; // eax@5
  unsigned int v200; // eax@5
  int v201; // edx@5
  int v202; // er11@5
  unsigned int v203; // er11@5
  int v204; // edx@5
  int v205; // eax@5
  int v206; // edx@5
  int v207; // eax@5
  int v208; // eax@5
  int v209; // edx@5
  int v210; // er10@5
  int v211; // esi@5
  int v212; // er10@5
  int v213; // edx@5
  int v214; // edx@5
  int v215; // er10@5
  int v216; // eax@5
  int v217; // er13@5
  unsigned int v218; // eax@5
  int v219; // ebp@5
  int v220; // er10@5
  unsigned int v221; // er10@5
  int v222; // eax@5
  int v223; // er13@5
  int v224; // eax@5
  int v225; // eax@5
  int v226; // er13@5
  int v227; // er9@5
  int v228; // edi@5
  int v229; // er9@5
  int v230; // er13@5
  int v231; // er13@5
  int v232; // ebp@5
  int v233; // er9@5
  int v234; // er12@5
  int v235; // eax@5
  int v236; // ebp@5
  int v237; // er9@5
  unsigned int v238; // er9@5
  int v239; // eax@5
  int v240; // er12@5
  int v241; // eax@5
  int v242; // eax@5
  int v243; // er12@5
  int v244; // er8@5
  int v245; // er14@5
  int v246; // er8@5
  int v247; // er12@5
  int v248; // er12@5
  int v249; // ebp@5
  int v250; // er8@5
  int v251; // er12@5
  int v252; // eax@5
  int v253; // ebp@5
  int v254; // er15@5
  int v255; // er8@5
  unsigned int v256; // er8@5
  int v257; // ebp@5
  int v258; // eax@5
  int v259; // ebp@5
  int v260; // eax@5
  int v261; // eax@5
  int v262; // ebp@5
  int v263; // ebx@5
  int v264; // ecx@5
  int v265; // ebp@5
  int v266; // er15@5
  int v267; // ebp@5
  int v268; // ebx@5
  int v269; // eax@5
  int v270; // er15@5
  int v271; // ebx@5
  int v272; // eax@5
  unsigned int v273; // ebx@5
  int v274; // esi@5
  unsigned int v275; // ST00_4@5
  int v276; // ebx@5
  int v277; // eax@5
  int v278; // ebx@5
  int v279; // eax@5
  int v280; // eax@5
  int v281; // esi@5
  int v282; // edx@5
  int v283; // ebx@5
  int v284; // esi@5
  int v285; // esi@5
  int v286; // ebx@5
  int v287; // ebx@5
  int v288; // esi@5
  int v289; // ebx@5
  int v290; // er15@5
  int v291; // eax@5
  int v292; // esi@5
  int v293; // eax@5
  unsigned int v294; // eax@5
  int v295; // edi@5
  unsigned int v296; // ST04_4@5
  int v297; // eax@5
  int v298; // esi@5
  int v299; // eax@5
  int v300; // esi@5
  int v301; // esi@5
  int v302; // edi@5
  int v303; // er13@5
  int v304; // eax@5
  int v305; // edi@5
  int v306; // edi@5
  int v307; // eax@5
  int v308; // eax@5
  int v309; // esi@5
  int v310; // edi@5
  int v311; // edi@5
  int v312; // er15@5
  int v313; // esi@5
  unsigned int v314; // edi@5
  int v315; // er14@5
  unsigned int v316; // ST08_4@5
  int v317; // edi@5
  int v318; // esi@5
  int v319; // edi@5
  int v320; // esi@5
  int v321; // esi@5
  int v322; // edi@5
  int v323; // er14@5
  int v324; // er12@5
  int v325; // er14@5
  int v326; // edi@5
  int v327; // edi@5
  int v328; // esi@5
  int v329; // er14@5
  int v330; // er14@5
  int v331; // esi@5
  int v332; // er15@5
  int v333; // esi@5
  unsigned int v334; // ST10_4@5
  int v335; // er14@5
  int v336; // esi@5
  int v337; // ecx@5
  int v338; // esi@5
  int v339; // ecx@5
  int v340; // ecx@5
  int v341; // er14@5
  int v342; // ebp@5
  int v343; // esi@5
  int v344; // er14@5
  int v345; // er14@5
  int v346; // esi@5
  int v347; // esi@5
  int v348; // ecx@5
  int v349; // er14@5
  int v350; // er14@5
  int v351; // ecx@5
  int v352; // er15@5
  int v353; // ecx@5
  unsigned int v354; // ecx@5
  int v355; // edx@5
  unsigned int v356; // ST14_4@5
  int v357; // ecx@5
  int v358; // er14@5
  int v359; // edx@5
  int v360; // ecx@5
  int v361; // edx@5
  int v362; // edx@5
  int v363; // ecx@5
  int v364; // er14@5
  int v365; // ebx@5
  int v366; // er14@5
  int v367; // ecx@5
  int v368; // ecx@5
  int v369; // edx@5
  int v370; // er14@5
  int v371; // er14@5
  int v372; // edx@5
  int v373; // er15@5
  int v374; // edx@5
  unsigned int v375; // edx@5
  int v376; // er13@5
  unsigned int v377; // ST18_4@5
  int v378; // edx@5
  int v379; // er14@5
  int v380; // edx@5
  int v381; // er14@5
  int v382; // er14@5
  int v383; // er13@5
  int v384; // eax@5
  int v385; // edx@5
  int v386; // eax@5
  int v387; // eax@5
  int v388; // edx@5
  int v389; // edx@5
  int v390; // eax@5
  int v391; // er14@5
  int v392; // er14@5
  int v393; // eax@5
  int v394; // er15@5
  int v395; // eax@5
  unsigned int v396; // eax@5
  int v397; // er12@5
  unsigned int v398; // ST1C_4@5
  int v399; // eax@5
  int v400; // er14@5
  int v401; // eax@5
  int v402; // er14@5
  int v403; // er14@5
  int v404; // er12@5
  int v405; // edi@5
  int v406; // eax@5
  int v407; // edi@5
  int v408; // edi@5
  int v409; // eax@5
  int v410; // eax@5
  int v411; // edi@5
  int v412; // er14@5
  int v413; // er14@5
  int v414; // edi@5
  int v415; // er15@5
  int v416; // edi@5
  unsigned int v417; // edi@5
  int v418; // ebp@5
  unsigned int v419; // ST20_4@5
  int v420; // edi@5
  int v421; // er14@5
  int v422; // edi@5
  int v423; // er14@5
  int v424; // er14@5
  int v425; // ebp@5
  int v426; // esi@5
  int v427; // edi@5
  int v428; // esi@5
  int v429; // esi@5
  int v430; // edi@5
  int v431; // edi@5
  int v432; // esi@5
  int v433; // er14@5
  int v434; // er14@5
  int v435; // esi@5
  int v436; // er15@5
  int v437; // esi@5
  unsigned int v438; // esi@5
  int v439; // ebx@5
  unsigned int v440; // ST24_4@5
  int v441; // esi@5
  int v442; // er14@5
  int v443; // esi@5
  int v444; // er14@5
  int v445; // er14@5
  int v446; // ebx@5
  int v447; // ecx@5
  int v448; // esi@5
  int v449; // ecx@5
  int v450; // ecx@5
  int v451; // esi@5
  int v452; // esi@5
  int v453; // ecx@5
  int v454; // er14@5
  int v455; // er14@5
  int v456; // ecx@5
  int v457; // er15@5
  int v458; // ecx@5
  unsigned int v459; // ecx@5
  int v460; // er13@5
  unsigned int v461; // ST28_4@5
  int v462; // ecx@5
  int v463; // er14@5
  int v464; // ecx@5
  int v465; // er14@5
  int v466; // er14@5
  int v467; // er13@5
  int v468; // edx@5
  int v469; // ecx@5
  int v470; // edx@5
  int v471; // edx@5
  int v472; // ecx@5
  int v473; // ecx@5
  int v474; // edx@5
  int v475; // er14@5
  int v476; // er14@5
  int v477; // edx@5
  int v478; // er15@5
  int v479; // edx@5
  unsigned int v480; // edx@5
  int v481; // er12@5
  unsigned int v482; // ST2C_4@5
  int v483; // edx@5
  int v484; // er14@5
  int v485; // er12@5
  int v486; // edx@5
  int v487; // er12@5
  int v488; // er12@5
  int v489; // er14@5
  int v490; // eax@5
  int v491; // edx@5
  int v492; // eax@5
  int v493; // eax@5
  int v494; // edx@5
  int v495; // edx@5
  int v496; // eax@5
  int v497; // er12@5
  int v498; // er12@5
  int v499; // eax@5
  int v500; // er15@5
  int v501; // eax@5
  int v502; // eax@5
  int v503; // ebp@5
  unsigned int v504; // ST30_4@5
  int v505; // eax@5
  int v506; // er12@5
  int v507; // ebp@5
  int v508; // eax@5
  int v509; // ebp@5
  int v510; // ebp@5
  int v511; // eax@5
  int v512; // er12@5
  int v513; // edi@5
  int v514; // er12@5
  int v515; // eax@5
  int v516; // eax@5
  int v517; // ebp@5
  int v518; // er12@5
  int v519; // er12@5
  int v520; // ebp@5
  int v521; // er15@5
  int v522; // ebp@5
  unsigned int v523; // er15@5
  int v524; // er11@5
  unsigned int v525; // ST60_4@5
  int v526; // ebp@5
  int v527; // ebx@5
  int v528; // er11@5
  int v529; // er11@5
  int v530; // ebx@5
  int v531; // ebx@5
  int v532; // er11@5
  int v533; // ebp@5
  int v534; // esi@5
  int v535; // ebp@5
  int v536; // er11@5
  int v537; // er11@5
  int v538; // ebx@5
  int v539; // ebp@5
  int v540; // er12@5
  int v541; // ebp@5
  int v542; // ebx@5
  int v543; // er10@5
  int v544; // ebp@5
  unsigned int v545; // ST34_4@5
  int v546; // er13@5
  int v547; // ebx@5
  int v548; // er13@5
  int v549; // er10@5
  int v550; // er13@5
  int v551; // ebx@5
  int v552; // ecx@5
  int v553; // er13@5
  int v554; // er10@5
  int v555; // er12@5
  int v556; // er13@5
  int v557; // ebp@5
  int v558; // er13@5
  int v559; // er10@5
  int v560; // ebp@5
  int v561; // er10@5
  int v562; // er12@5
  int v563; // ebx@5
  int v564; // er13@5
  int v565; // er9@5
  unsigned int v566; // er13@5
  int v567; // ebp@5
  int v568; // er9@5
  unsigned int v569; // ST64_4@5
  int v570; // ebx@5
  int v571; // er12@5
  int v572; // er9@5
  int v573; // ebx@5
  int v574; // er9@5
  int v575; // ebp@5
  int v576; // edx@5
  int v577; // edx@5
  int v578; // er9@5
  int v579; // er9@5
  int v580; // ebx@5
  int v581; // edx@5
  int v582; // er12@5
  int v583; // edx@5
  int v584; // ebx@5
  int v585; // er8@5
  int v586; // edi@5
  unsigned int v587; // er12@5
  int v588; // er8@5
  unsigned int v589; // ST68_4@5
  int v590; // edx@5
  int v591; // er8@5
  int v592; // edx@5
  int v593; // edx@5
  int v594; // er8@5
  int v595; // edi@5
  int v596; // eax@5
  int v597; // edi@5
  int v598; // er8@5
  int v599; // ebx@5
  int v600; // er8@5
  int v601; // edi@5
  int v602; // edx@5
  int v603; // edi@5
  int v604; // edx@5
  unsigned int v605; // er13@5
  int v606; // edi@5
  int v607; // edx@5
  int v608; // ebx@5
  int v609; // edi@5
  int v610; // edx@5
  int v611; // edx@5
  int v612; // esi@5
  int v613; // er11@5
  int v614; // esi@5
  int v615; // edi@5
  int v616; // esi@5
  int v617; // edi@5
  int v618; // ebx@5
  int v619; // edx@5
  int v620; // edi@5
  int v621; // edi@5
  int v622; // esi@5
  int v623; // edx@5
  unsigned int v624; // ST0C_4@5
  int v625; // edi@5
  unsigned int v626; // ST40_4@5
  int v627; // er15@5
  int v628; // edi@5
  int v629; // edx@5
  int v630; // esi@5
  int v631; // er15@5
  int v632; // edx@5
  int v633; // edx@5
  int v634; // ecx@5
  int v635; // er10@5
  int v636; // er15@5
  int v637; // ecx@5
  int v638; // er15@5
  int v639; // ecx@5
  int v640; // edx@5
  int v641; // edx@5
  int v642; // ecx@5
  int v643; // edi@5
  int v644; // ecx@5
  unsigned int v645; // er12@5
  int v646; // ecx@5
  unsigned int v647; // ebp@5
  unsigned int v648; // ST14_4@5
  int v649; // edx@5
  int v650; // edi@5
  int v651; // edx@5
  int v652; // edx@5
  int v653; // edi@5
  int v654; // ecx@5
  int v655; // er9@5
  int v656; // ecx@5
  int v657; // edi@5
  int v658; // edi@5
  int v659; // ecx@5
  int v660; // edx@5
  int v661; // esi@5
  int v662; // er13@5
  int v663; // edx@5
  unsigned int v664; // er14@5
  int v665; // ecx@5
  int v666; // esi@5
  int v667; // edx@5
  unsigned int v668; // ST00_4@5
  int v669; // eax@5
  int v670; // esi@5
  int v671; // eax@5
  int v672; // eax@5
  int v673; // esi@5
  int v674; // edx@5
  int v675; // er8@5
  int v676; // edx@5
  int v677; // esi@5
  int v678; // er13@5
  int v679; // esi@5
  int v680; // eax@5
  int v681; // er13@5
  int v682; // eax@5
  int v683; // ecx@5
  unsigned int v684; // er13@5
  int v685; // edx@5
  unsigned int v686; // ST18_4@5
  int v687; // er11@5
  int v688; // eax@5
  int v689; // er11@5
  int v690; // er11@5
  int v691; // eax@5
  int v692; // eax@5
  int v693; // er11@5
  int v694; // edx@5
  int v695; // ebx@5
  int v696; // edx@5
  int v697; // er11@5
  int v698; // er12@5
  int v699; // er11@5
  int v700; // eax@5
  int v701; // er12@5
  int v702; // eax@5
  int v703; // edx@5
  int v704; // edx@5
  unsigned int v705; // ST04_4@5
  int v706; // edx@5
  int v707; // er10@5
  int v708; // er12@5
  int v709; // eax@5
  int v710; // er10@5
  int v711; // eax@5
  int v712; // er12@5
  int v713; // eax@5
  int v714; // er10@5
  int v715; // edx@5
  int v716; // er15@5
  int v717; // er10@5
  int v718; // er10@5
  int v719; // edx@5
  int v720; // er12@5
  int v721; // eax@5
  int v722; // er12@5
  int v723; // edx@5
  int v724; // ebp@5
  int v725; // edx@5
  unsigned int v726; // er13@5
  int v727; // er9@5
  unsigned int v728; // ST1C_4@5
  int v729; // eax@5
  int v730; // ebp@5
  int v731; // er9@5
  int v732; // eax@5
  int v733; // er9@5
  int v734; // ebp@5
  int v735; // edi@5
  int v736; // edx@5
  int v737; // er9@5
  int v738; // er9@5
  int v739; // er12@5
  int v740; // edx@5
  int v741; // eax@5
  int v742; // edx@5
  int v743; // edi@5
  int v744; // er14@5
  int v745; // eax@5
  unsigned int v746; // ST08_4@5
  int v747; // er8@5
  int v748; // ecx@5
  int v749; // er8@5
  int v750; // edx@5
  int v751; // er8@5
  int v752; // edx@5
  int v753; // ecx@5
  int v754; // er8@5
  int v755; // ecx@5
  int v756; // edx@5
  int v757; // ecx@5
  int v758; // er8@5
  int v759; // eax@5
  int v760; // esi@5
  int v761; // er8@5
  int v762; // er14@5
  int v763; // edi@5
  int v764; // edx@5
  int v765; // ecx@5
  int v766; // esi@5
  int v767; // esi@5
  int v768; // ecx@5
  unsigned int v769; // ST10_4@5
  int v770; // esi@5
  int v771; // ecx@5
  int v772; // esi@5
  int v773; // esi@5
  int v774; // er8@5
  int v775; // er11@5
  int v776; // ecx@5
  int v777; // er11@5
  int v778; // edi@5
  int v779; // er11@5
  int v780; // ecx@5
  int v781; // er11@5
  int v782; // ecx@5
  int v783; // edi@5
  int v784; // esi@5
  int v785; // edi@5
  int v786; // esi@5
  unsigned int v787; // er12@5
  int v788; // er14@5
  unsigned int v789; // ST20_4@5
  int v790; // er13@5
  int v791; // er14@5
  int v792; // esi@5
  int v793; // er13@5
  int v794; // esi@5
  int v795; // esi@5
  int v796; // er13@5
  int v797; // er14@5
  int v798; // esi@5
  int v799; // edi@5
  int v800; // er11@5
  int v801; // er14@5
  int v802; // er13@5
  int v803; // esi@5
  int v804; // edi@5
  int v805; // er10@5
  int v806; // edi@5
  int v807; // esi@5
  int v808; // er14@5
  int v809; // esi@5
  unsigned int v810; // ST24_4@5
  int v811; // ebp@5
  int v812; // edi@5
  int v813; // ebp@5
  int v814; // er14@5
  int v815; // ebp@5
  int v816; // er14@5
  int v817; // edi@5
  int v818; // ebp@5
  int v819; // edi@5
  int v820; // esi@5
  int v821; // er9@5
  int v822; // er9@5
  int v823; // ebp@5
  int v824; // er10@5
  int v825; // er14@5
  int v826; // er9@5
  int v827; // er14@5
  int v828; // edi@5
  int v829; // er9@5
  int v830; // er9@5
  int v831; // edi@5
  int v832; // er9@5
  unsigned int v833; // ebp@5
  int v834; // er9@5
  int v835; // eax@5
  unsigned int v836; // ST2C_4@5
  int v837; // edi@5
  int v838; // eax@5
  int v839; // edi@5
  int v840; // edi@5
  int v841; // eax@5
  int v842; // er9@5
  int v843; // edx@5
  int v844; // er9@5
  int v845; // eax@5
  int v846; // eax@5
  int v847; // edi@5
  int v848; // er9@5
  int v849; // er10@5
  int v850; // er9@5
  int v851; // edi@5
  int v852; // edi@5
  int v853; // er10@5
  int v854; // er9@5
  unsigned int v855; // ST28_4@5
  int v856; // edi@5
  int v857; // er10@5
  int v858; // edi@5
  int v859; // edi@5
  int v860; // ecx@5
  int v861; // er10@5
  int v862; // er8@5
  int v863; // er12@5
  int v864; // er8@5
  int v865; // er10@5
  int v866; // er10@5
  int v867; // er8@5
  int v868; // edi@5
  int v869; // er12@5
  int v870; // edi@5
  unsigned int v871; // er12@5
  int v872; // er8@5
  int v873; // er11@5
  int v874; // edi@5
  int v875; // er9@5
  int v876; // edi@5
  int v877; // er11@5
  int v878; // edi@5
  int v879; // er8@5
  int v880; // er13@5
  int v881; // er9@5
  int v882; // er8@5
  int v883; // er9@5
  int v884; // er8@5
  int v885; // edi@5
  int v886; // ebp@5
  int v887; // er8@5
  int v888; // ebp@5
  int v889; // edi@5
  unsigned int v890; // ebp@5
  int v891; // edi@5
  int v892; // esi@5
  int v893; // er8@5
  int v894; // er8@5
  int v895; // ebx@5
  int v896; // esi@5
  int v897; // esi@5
  int v898; // er8@5
  int v899; // edi@5
  int v900; // er14@5
  int v901; // edi@5
  int v902; // er8@5
  int v903; // er8@5
  int v904; // esi@5
  int v905; // edi@5
  int v906; // ebx@5
  int v907; // esi@5
  int v908; // er15@5
  int v909; // edi@5
  int v910; // esi@5
  int v911; // er15@5
  int v912; // edx@5
  int v913; // edi@5
  int v914; // edx@5
  int v915; // edx@5
  int v916; // esi@5
  int v917; // eax@5
  int v918; // edi@5
  int v919; // esi@5
  int v920; // edi@5
  int v921; // esi@5
  int v922; // edi@5
  int v923; // edx@5
  int v924; // esi@5
  int v925; // er11@5
  int v926; // edx@5
  int v927; // esi@5
  unsigned int v928; // er11@5
  int v929; // esi@5
  int v930; // edx@5
  int v931; // esi@5
  int v932; // edx@5
  int v933; // edx@5
  int v934; // ecx@5
  int v935; // er10@5
  int v936; // esi@5
  int v937; // ecx@5
  int v938; // ecx@5
  int v939; // esi@5
  int v940; // esi@5
  int v941; // ecx@5
  int v942; // esi@5
  int v943; // edx@5
  int v944; // ecx@5
  unsigned int v945; // ecx@5
  int v946; // edx@5
  int v947; // er15@5
  int v948; // ecx@5
  int v949; // er13@5
  unsigned int v950; // ST0C_4@5
  int v951; // ecx@5
  int v952; // edx@5
  int v953; // ecx@5
  int v954; // edx@5
  int v955; // edx@5
  int v956; // ecx@5
  int v957; // er13@5
  int v958; // er9@5
  int v959; // er13@5
  int v960; // ecx@5
  int v961; // ecx@5
  int v962; // er13@5
  int v963; // edx@5
  int v964; // er13@5
  int v965; // er15@5
  int v966; // edx@5
  int v967; // edx@5
  int v968; // er14@5
  unsigned int v969; // ST14_4@5
  int v970; // er15@5
  int v971; // edx@5
  int v972; // er13@5
  int v973; // edx@5
  int v974; // er13@5
  int v975; // edx@5
  int v976; // er14@5
  int v977; // er8@5
  int v978; // er14@5
  int v979; // edx@5
  int v980; // edx@5
  int v981; // er15@5
  int v982; // er14@5
  int v983; // er14@5
  int v984; // er13@5
  int v985; // er15@5
  int v986; // er14@5
  int v987; // er15@5
  unsigned int v988; // ST00_4@5
  int v989; // er14@5
  int v990; // eax@5
  int v991; // er13@5
  int v992; // eax@5
  int v993; // eax@5
  int v994; // er13@5
  int v995; // er13@5
  int v996; // eax@5
  int v997; // er14@5
  int v998; // edi@5
  int v999; // eax@5
  int v1000; // eax@5
  int v1001; // er13@5
  int v1002; // er14@5
  int v1003; // er14@5
  int v1004; // er13@5
  int v1005; // er15@5
  unsigned int v1006; // er15@5
  int v1007; // er13@5
  int v1008; // er10@5
  int v1009; // er12@5
  int v1010; // er10@5
  int v1011; // er10@5
  int v1012; // er12@5
  int v1013; // er12@5
  int v1014; // er10@5
  int v1015; // er13@5
  int v1016; // esi@5
  int v1017; // er13@5
  int v1018; // er10@5
  int v1019; // er10@5
  int v1020; // er12@5
  int v1021; // er13@5
  int v1022; // er13@5
  int v1023; // er12@5
  int v1024; // er14@5
  unsigned int v1025; // ebp@5
  int v1026; // er13@5
  int v1027; // er9@5
  int v1028; // er12@5
  int v1029; // er9@5
  int v1030; // er9@5
  int v1031; // er12@5
  int v1032; // er12@5
  int v1033; // er9@5
  int v1034; // er13@5
  int v1035; // ecx@5
  int v1036; // er13@5
  int v1037; // er9@5
  int v1038; // er9@5
  int v1039; // er13@5
  int v1040; // er12@5
  int v1041; // er13@5
  int v1042; // er12@5
  int v1043; // er14@5
  int v1044; // er12@5
  int v1045; // er13@5
  int v1046; // er12@5
  int v1047; // er12@5
  int v1048; // er13@5
  int v1049; // er12@5
  int v1050; // er8@5
  int v1051; // edx@5
  int v1052; // er13@5
  int v1053; // er8@5
  int v1054; // er8@5
  int v1055; // er13@5
  int v1056; // er13@5
  int v1057; // er8@5
  int v1058; // er12@5
  int v1059; // er13@5
  int v1060; // er8@5
  int v1061; // ebp@5
  int v1062; // er13@5
  int v1063; // er8@5
  int v1064; // er8@5
  int v1065; // ebp@5
  int v1066; // er8@5
  int v1067; // er8@5
  int v1068; // ebp@5
  int v1069; // er8@5
  int v1070; // eax@5
  int v1071; // edi@5
  int v1072; // ebp@5
  int v1073; // edi@5
  int v1074; // edi@5
  int v1075; // ebp@5
  int v1076; // ebp@5
  int v1077; // edi@5
  int v1078; // er8@5
  int v1079; // ebp@5
  int v1080; // edi@5
  unsigned int v1081; // ebx@5
  int v1082; // ebp@5
  int v1083; // edi@5
  int v1084; // ebp@5
  int v1085; // ebx@5
  int v1086; // ebx@5
  int v1087; // ebp@5
  int v1088; // ebx@5
  int v1089; // ebp@5
  int v1090; // esi@5
  int v1091; // er10@5
  int v1092; // esi@5
  int v1093; // ebp@5
  int v1094; // ebx@5
  int v1095; // esi@5
  int v1096; // ebp@5
  unsigned int v1097; // er11@5
  int v1098; // ebp@5
  int v1099; // esi@5
  unsigned int v1100; // esi@5
  int v1101; // ebp@5
  int v1102; // er11@5
  int v1103; // er11@5
  int v1104; // ebp@5
  int v1105; // er11@5
  int v1106; // ebp@5
  int v1107; // ecx@5
  int v1108; // er9@5
  int v1109; // ecx@5
  int v1110; // ebp@5
  int v1111; // er11@5
  int v1112; // ecx@5
  int v1113; // ebp@5
  unsigned int v1114; // edi@5
  int v1115; // ebp@5
  int v1116; // ecx@5
  int v1117; // edi@5
  int v1118; // edx@5
  int v1119; // edi@5
  int v1120; // ecx@5
  int v1121; // ecx@5
  int v1122; // edi@5
  int v1123; // ecx@5
  int v1124; // edi@5
  int v1125; // edx@5
  int v1126; // er12@5
  int v1127; // edx@5
  int v1128; // edi@5
  int v1129; // ecx@5
  int v1130; // edx@5
  int v1131; // edi@5
  int v1132; // esi@5
  int v1133; // edi@5
  int v1134; // edx@5
  int v1135; // edx@5
  int v1136; // esi@5
  int v1137; // eax@5
  int v1138; // eax@5
  int v1139; // esi@5
  int v1140; // eax@5
  int v1141; // esi@5
  int v1142; // edx@5
  int v1143; // edx@5
  int v1144; // esi@5
  unsigned __int64 v1145; // [sp+38h] [bp-C0h]@1
  unsigned int v1146; // [sp+44h] [bp-B4h]@2
  int v1147; // [sp+48h] [bp-B0h]@2
  int v1148; // [sp+4Ch] [bp-ACh]@2
  int v1149; // [sp+50h] [bp-A8h]@2
  int v1150; // [sp+54h] [bp-A4h]@2
  int v1151; // [sp+58h] [bp-A0h]@2
  int v1152; // [sp+5Ch] [bp-9Ch]@2
  int v1153; // [sp+6Ch] [bp-8Ch]@2
  unsigned __int64 v1154; // [sp+70h] [bp-88h]@1
  __int64 v1155; // [sp+78h] [bp-80h]@1
  int v1156; // [sp+80h] [bp-78h]@4
  unsigned int v1157; // [sp+84h] [bp-74h]@5
  unsigned int v1158; // [sp+88h] [bp-70h]@5
  unsigned int v1159; // [sp+8Ch] [bp-6Ch]@5
  unsigned int v1160; // [sp+90h] [bp-68h]@5
  unsigned int v1161; // [sp+94h] [bp-64h]@5
  unsigned int v1162; // [sp+98h] [bp-60h]@5
  unsigned int v1163; // [sp+9Ch] [bp-5Ch]@5
  unsigned int v1164; // [sp+A0h] [bp-58h]@5
  unsigned int v1165; // [sp+A4h] [bp-54h]@5
  unsigned int v1166; // [sp+A8h] [bp-50h]@5
  unsigned int v1167; // [sp+ACh] [bp-4Ch]@5
  unsigned int v1168; // [sp+B0h] [bp-48h]@5
  unsigned int v1169; // [sp+B4h] [bp-44h]@5
  unsigned int v1170; // [sp+B8h] [bp-40h]@5
  unsigned int v1171; // [sp+BCh] [bp-3Ch]@5

  v3 = a3;
  v4 = *(_DWORD *)(a3 + 8);
  v5 = *(_DWORD *)(a3 + 12);
  v6 = *(_DWORD *)(a3 + 16);
  v7 = *(_DWORD *)(a3 + 20);
  v1145 = a1;
  v8 = __CFADD__(*(_DWORD *)(a3 + 32), (_DWORD)a2);
  v9 = *(_DWORD *)(a3 + 32) + a2;
  v10 = *(_DWORD *)(a3 + 24);
  v1155 = a3;
  v11 = *(_DWORD *)a3;
  *(_DWORD *)(v3 + 32) = v9;
  v12 = *(_DWORD *)(v3 + 28);
  v1154 = a1 + (a2 & 0xFFFFFFFFFFFFFFFCLL);
  result = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 36) += v8 + HIDWORD(a2);
  if ( a1 < a1 + (a2 & 0xFFFFFFFFFFFFFFFCLL) )
  {
    v1152 = v12;
    v1151 = v10;
    v1150 = v7;
    v1149 = v6;
    v1148 = v5;
    v1147 = v4;
    v1146 = result;
    v1153 = v11;
    do
    {
      v14 = 0LL;
      do
      {
        *(int *)((char *)&v1156 + v14 * 4) = _byteswap_ulong(*(_DWORD *)(v1145 + v14 * 4));
        ++v14;
      }
      while ( v14 != 16 );
      v1145 += 64LL;
      v15 = __ROR4__(v6, 6);
      v16 = __ROR4__(v6, 11);
      v17 = v15 ^ v16;
      v18 = __ROL4__(v6, 7);
      v19 = (v17 ^ v18) + v1156 + v12 + 1116352408 + (v10 ^ v6 & (v10 ^ v7));
      v20 = __ROR4__(v11, 2);
      v21 = __ROR4__(v11, 13);
      v22 = v19 + v5;
      v23 = v20 ^ v21;
      v24 = __ROL4__(v11, 10);
      v25 = __ROR4__(v19 + v5, 11);
      v26 = v19 + (v24 ^ v23) + (result & v11 | v4 & (result | v11));
      v27 = __ROR4__(v19 + v5, 6);
      v28 = v27 ^ v25;
      v29 = __ROL4__(v19 + v5, 7);
      v30 = (v7 ^ (v19 + v5) & (v7 ^ v6)) + v1157 + v10 + 1899447441 + (v28 ^ v29);
      v31 = __ROR4__(v26, 2);
      v32 = __ROR4__(v26, 13);
      v33 = v30 + v4;
      v34 = v31 ^ v32;
      v35 = __ROL4__(v26, 10);
      v36 = v30 + (v35 ^ v34) + (v11 & v26 | result & (v11 | v26));
      v37 = __ROR4__(v30 + v4, 11);
      v38 = __ROR4__(v30 + v4, 6);
      v39 = v38 ^ v37;
      v40 = __ROL4__(v33, 7);
      v41 = (v6 ^ v33 & (v6 ^ v22)) + v1158 + v7 - 1245643825 + (v39 ^ v40);
      v42 = v41 + result;
      v43 = __ROL4__(v36, 10);
      v44 = __ROR4__(v36, 2);
      v45 = v44;
      v46 = __ROR4__(v36, 13);
      v47 = v41 + (v43 ^ v45 ^ v46) + (v36 & v26 | v11 & (v36 | v26));
      v48 = __ROR4__(v42, 11);
      v49 = __ROR4__(v42, 6);
      v50 = v49 ^ v48;
      v51 = __ROL4__(v42, 7);
      v52 = (v22 ^ v42 & (v33 ^ v22)) + v6 + v1159 - 373957723 + (v50 ^ v51);
      v53 = __ROR4__(v47, 2);
      v54 = __ROR4__(v47, 13);
      v55 = v52 + v11;
      v56 = v53 ^ v54;
      v57 = __ROL4__(v47, 10);
      v58 = v52 + (v57 ^ v56) + (v47 & v36 | v26 & (v47 | v36));
      v59 = __ROR4__(v55, 11);
      v60 = __ROR4__(v55, 6);
      v61 = v60 ^ v59;
      v62 = __ROL4__(v55, 7);
      v63 = (v33 ^ v55 & (v42 ^ v33)) + v1160 + v22 + 961987163 + (v61 ^ v62);
      v64 = v63 + v26;
      v65 = __ROR4__(v58, 2);
      v66 = __ROR4__(v58, 13);
      v67 = v65 ^ v66;
      v68 = __ROL4__(v58, 10);
      v69 = v63 + (v68 ^ v67) + (v58 & v47 | v36 & (v58 | v47));
      v70 = v1161 + v33 + 1508970993 + (v42 ^ v64 & (v55 ^ v42));
      v71 = __ROR4__(v64, 11);
      v72 = __ROR4__(v64, 6);
      v73 = v72 ^ v71;
      v74 = __ROL4__(v64, 7);
      v75 = v70 + (v73 ^ v74);
      v76 = __ROR4__(v69, 2);
      v77 = __ROR4__(v69, 13);
      v78 = v75 + v36;
      v79 = v76 ^ v77;
      v80 = __ROL4__(v69, 10);
      v81 = v75 + (v80 ^ v79) + (v69 & v58 | v47 & (v69 | v58));
      v82 = v1162 + v42 - 1841331548;
      v83 = __ROR4__(v78, 11);
      v84 = __ROR4__(v78, 6);
      v85 = v84 ^ v83;
      v86 = __ROL4__(v78, 7);
      v87 = (v55 ^ v78 & (v64 ^ v55)) + v82 + (v85 ^ v86);
      v88 = __ROR4__(v81, 2);
      v89 = __ROR4__(v81, 13);
      v90 = v87 + v47;
      v91 = v88 ^ v89;
      v92 = __ROL4__(v81, 10);
      v93 = v87 + (v92 ^ v91) + (v81 & v69 | v58 & (v81 | v69));
      v94 = v1163 + v55 - 1424204075;
      v95 = __ROR4__(v90, 11);
      v96 = __ROR4__(v90, 6);
      v97 = v96 ^ v95;
      v98 = __ROL4__(v90, 7);
      v99 = (v64 ^ v90 & (v78 ^ v64)) + v94 + (v97 ^ v98);
      v100 = __ROR4__(v93, 2);
      v101 = __ROR4__(v93, 13);
      v102 = v99 + v58;
      v103 = v100 ^ v101;
      v104 = __ROL4__(v93, 10);
      v105 = v99 + (v104 ^ v103) + (v93 & v81 | v69 & (v93 | v81));
      v106 = __ROR4__(v102, 11);
      v107 = v1164 + v64 - 670586216 + (v78 ^ v102 & (v90 ^ v78));
      v108 = __ROR4__(v102, 6);
      v109 = v108 ^ v106;
      v110 = __ROL4__(v102, 7);
      v111 = v107 + (v109 ^ v110);
      v112 = __ROR4__(v105, 2);
      v113 = __ROR4__(v105, 13);
      v114 = v111 + v69;
      v115 = v112 ^ v113;
      v116 = __ROL4__(v105, 10);
      v117 = v111 + (v116 ^ v115) + (v105 & v93 | v81 & (v105 | v93));
      v118 = __ROR4__(v114, 11);
      v119 = __ROR4__(v114, 6);
      v120 = v119 ^ v118;
      v121 = __ROL4__(v114, 7);
      v122 = (v90 ^ v114 & (v102 ^ v90)) + v1165 + v78 + 310598401 + (v120 ^ v121);
      v123 = __ROR4__(v117, 2);
      v124 = __ROR4__(v117, 13);
      v125 = v122 + v81;
      v126 = v123 ^ v124;
      v127 = __ROL4__(v117, 10);
      v128 = v122 + (v127 ^ v126) + (v117 & v105 | v93 & (v117 | v105));
      v129 = __ROR4__(v125, 11);
      v130 = __ROR4__(v125, 6);
      v131 = v130 ^ v129;
      v132 = __ROL4__(v125, 7);
      v133 = __ROR4__(v128, 13);
      v134 = (v102 ^ v125 & (v114 ^ v102)) + v1166 + v90 + 607225278 + (v131 ^ v132);
      v135 = __ROR4__(v128, 2);
      v136 = v135 ^ v133;
      v137 = v134 + v93;
      v138 = __ROL4__(v128, 10);
      v139 = __ROR4__(v137, 11);
      v140 = (v138 ^ v136) + (v128 & v117 | v105 & (v128 | v117));
      v141 = v139;
      v142 = v134 + v140;
      v143 = __ROL4__(v142, 10);
      v144 = __ROR4__(v137, 6);
      v145 = v144 ^ v141;
      v146 = __ROL4__(v137, 7);
      v147 = (v114 ^ v137 & (v125 ^ v114)) + v1167 + v102 + 1426881987 + (v145 ^ v146);
      v148 = __ROR4__(v142, 2);
      v149 = v147 + v105;
      v150 = v148;
      v151 = __ROR4__(v142, 13);
      v152 = v147 + (v143 ^ v150 ^ v151) + (v142 & v128 | v117 & (v142 | v128));
      v153 = __ROR4__(v149, 11);
      v154 = __ROR4__(v149, 6);
      v155 = v154 ^ v153;
      v156 = __ROL4__(v149, 7);
      v157 = (v125 ^ v149 & (v137 ^ v125)) + v1168 + v114 + 1925078388 + (v155 ^ v156);
      v158 = __ROR4__(v152, 2);
      v159 = __ROR4__(v152, 13);
      v160 = v157 + v117;
      v161 = v158 ^ v159;
      v162 = __ROL4__(v152, 10);
      v163 = v157 + (v162 ^ v161) + (v152 & v142 | v128 & (v152 | v142));
      v164 = v1169 + v125 - 2132889090 + (v137 ^ v160 & (v149 ^ v137));
      v165 = __ROR4__(v160, 6);
      v166 = __ROR4__(v160, 11);
      v167 = v165 ^ v166;
      v168 = __ROL4__(v160, 7);
      v169 = v164 + (v167 ^ v168);
      v170 = __ROR4__(v163, 2);
      v171 = __ROR4__(v163, 13);
      v172 = v169 + v128;
      v173 = v170 ^ v171;
      v174 = __ROL4__(v163, 10);
      v175 = __ROR4__(v172, 11);
      v176 = v169 + (v174 ^ v173) + (v163 & v152 | v142 & (v163 | v152));
      v177 = __ROR4__(v172, 6);
      v178 = v177 ^ v175;
      v179 = __ROL4__(v172, 7);
      v180 = (v149 ^ v172 & (v160 ^ v149)) + v1170 + v137 - 1680079193 + (v178 ^ v179);
      v181 = __ROR4__(v176, 2);
      v182 = __ROR4__(v176, 13);
      v183 = v180 + v142;
      v184 = v181 ^ v182;
      v185 = __ROL4__(v176, 10);
      v186 = v180 + (v185 ^ v184) + (v176 & v163 | v152 & (v176 | v163));
      v187 = __ROR4__(v183, 11);
      v188 = __ROR4__(v183, 6);
      v189 = v188 ^ v187;
      v190 = __ROL4__(v183, 7);
      v191 = (v160 ^ v183 & (v172 ^ v160)) + v1171 + v149 - 1046744716 + (v189 ^ v190);
      v192 = __ROR4__(v186, 2);
      v193 = __ROR4__(v186, 13);
      v194 = v191 + v152;
      v195 = v192 ^ v193;
      v196 = __ROL4__(v186, 10);
      v197 = v191 + (v196 ^ v195) + (v186 & v176 | v163 & (v186 | v176));
      v198 = __ROL4__(v1170, 15);
      v199 = __ROL4__(v1170, 13);
      v200 = (v198 ^ v199 ^ (v1170 >> 10)) + v1165 + v1156;
      v201 = __ROR4__(v1157, 7);
      v202 = __ROL4__(v1157, 14);
      v203 = v200 + ((v1157 >> 3) ^ v201 ^ v202);
      v204 = __ROR4__(v194, 11);
      v205 = __ROR4__(v194, 6);
      v206 = v205 ^ v204;
      v207 = __ROL4__(v194, 7);
      v208 = (v172 ^ v194 & (v183 ^ v172)) + v160 + v203 - 459576895 + (v206 ^ v207);
      v209 = __ROR4__(v197, 2);
      v210 = __ROR4__(v197, 13);
      v211 = v208 + v163;
      v212 = v209 ^ v210;
      v213 = __ROL4__(v197, 10);
      v214 = v208 + (v213 ^ v212) + (v197 & v186 | v176 & (v197 | v186));
      v215 = __ROL4__(v1171, 15);
      v216 = __ROL4__(v1171, 13);
      v217 = __ROR4__(v211, 11);
      v218 = (v215 ^ v216 ^ (v1171 >> 10)) + v1157 + v1166;
      v219 = __ROR4__(v1158, 7);
      v220 = __ROL4__(v1158, 14);
      v221 = v218 + ((v1158 >> 3) ^ v219 ^ v220);
      v222 = __ROR4__(v211, 6);
      v223 = v222 ^ v217;
      v224 = __ROL4__(v211, 7);
      v225 = (v183 ^ v211 & (v194 ^ v183)) + v172 + v221 - 272742522 + (v223 ^ v224);
      v226 = __ROR4__(v214, 2);
      v227 = __ROR4__(v214, 13);
      v228 = v225 + v176;
      v229 = v226 ^ v227;
      v230 = __ROL4__(v214, 10);
      v231 = v225 + (v230 ^ v229) + (v214 & v197 | v186 & (v214 | v197));
      v232 = __ROL4__(v203, 15);
      v233 = __ROL4__(v203, 13);
      v234 = __ROR4__(v228, 11);
      v235 = __ROR4__(v1159, 7);
      v236 = v232 ^ v233 ^ (v203 >> 10);
      v237 = __ROL4__(v1159, 14);
      v238 = v236 + v1158 + v1167 + (v237 ^ v235 ^ (v1159 >> 3));
      v239 = __ROR4__(v228, 6);
      v240 = v239 ^ v234;
      v241 = __ROL4__(v228, 7);
      v242 = (v194 ^ v228 & (v211 ^ v194)) + v183 + v238 + 264347078 + (v240 ^ v241);
      v243 = __ROR4__(v231, 2);
      v244 = __ROR4__(v231, 13);
      v245 = v242 + v186;
      v246 = v243 ^ v244;
      v247 = __ROL4__(v231, 10);
      v248 = (v247 ^ v246) + (v231 & v214 | v197 & (v231 | v214));
      v249 = __ROL4__(v221, 15);
      v250 = __ROL4__(v221, 13);
      v251 = v242 + v248;
      v252 = __ROR4__(v1160, 7);
      v253 = v249 ^ v250 ^ (v221 >> 10);
      v254 = __ROR4__(v251, 13);
      v255 = __ROL4__(v1160, 14);
      v256 = v253 + v1168 + v1159 + (v255 ^ v252 ^ (v1160 >> 3));
      v257 = __ROR4__(v245, 11);
      v258 = __ROR4__(v245, 6);
      v259 = v258 ^ v257;
      v260 = __ROL4__(v245, 7);
      v261 = (v211 ^ v245 & (v228 ^ v211)) + v194 + v256 + 604807628 + (v259 ^ v260);
      v262 = __ROR4__(v251, 2);
      v263 = v262 ^ v254;
      v264 = v261 + v197;
      v265 = __ROL4__(v251, 10);
      v266 = __ROL4__(v238, 13);
      v267 = v261 + (v265 ^ v263) + (v251 & v231 | v214 & (v251 | v231));
      v268 = v266;
      v269 = __ROL4__(v238, 15);
      v270 = __ROL4__(v1161, 14);
      v271 = (v238 >> 10) ^ v269 ^ v268;
      v272 = __ROR4__(v1161, 7);
      v273 = (v270 ^ v272 ^ (v1161 >> 3)) + v1169 + v1160 + v271;
      v274 = v211 + v273 + 770255983;
      v275 = v273;
      v276 = __ROR4__(v264, 11);
      v277 = __ROR4__(v264, 6);
      v278 = v277 ^ v276;
      v279 = __ROL4__(v264, 7);
      v280 = (v228 ^ v264 & (v245 ^ v228)) + v274 + (v278 ^ v279);
      v281 = __ROR4__(v267, 2);
      v282 = v280 + v214;
      v283 = v281;
      v284 = __ROR4__(v267, 13);
      v285 = v283 ^ v284;
      v286 = __ROL4__(v267, 10);
      v287 = (v286 ^ v285) + (v267 & v251 | v231 & (v267 | v251));
      v288 = __ROL4__(v256, 13);
      v289 = v280 + v287;
      v290 = __ROL4__(v1162, 14);
      v291 = __ROL4__(v256, 15);
      v292 = (v256 >> 10) ^ v291 ^ v288;
      v293 = __ROR4__(v1162, 7);
      v294 = v292 + (v290 ^ v293 ^ (v1162 >> 3)) + v1170 + v1161;
      v295 = v228 + v294 + 1249150122;
      v296 = v294;
      v297 = __ROR4__(v282, 11);
      v298 = __ROR4__(v282, 6);
      v299 = v298 ^ v297;
      v300 = __ROL4__(v282, 7);
      v301 = (v245 ^ v282 & (v264 ^ v245)) + v295 + (v299 ^ v300);
      v302 = __ROR4__(v289, 2);
      v303 = v301 + v231;
      v304 = v302;
      v305 = __ROR4__(v289, 13);
      v306 = v304 ^ v305;
      v307 = __ROL4__(v289, 10);
      v308 = v301 + (v307 ^ v306) + (v289 & v267 | v251 & (v289 | v267));
      v309 = __ROL4__(v275, 15);
      v310 = __ROL4__(v275, 13);
      v311 = (v275 >> 10) ^ v309 ^ v310;
      v312 = __ROL4__(v1163, 14);
      v313 = __ROR4__(v1163, 7);
      v314 = (v312 ^ v313 ^ (v1163 >> 3)) + v1171 + v1162 + v311;
      v315 = v245 + v314 + 1555081692;
      v316 = v314;
      v317 = __ROR4__(v303, 11);
      v318 = __ROR4__(v303, 6);
      v319 = v318 ^ v317;
      v320 = __ROL4__(v303, 7);
      v321 = (v264 ^ v303 & (v282 ^ v264)) + v315 + (v319 ^ v320);
      v322 = __ROR4__(v308, 2);
      v323 = __ROR4__(v308, 13);
      v324 = v321 + v251;
      v325 = v322 ^ v323;
      v326 = __ROL4__(v308, 10);
      v327 = v321 + (v326 ^ v325) + (v308 & v289 | v267 & (v308 | v289));
      v328 = __ROL4__(v296, 15);
      v329 = __ROL4__(v296, 13);
      v330 = (v296 >> 10) ^ v328 ^ v329;
      v331 = __ROR4__(v1164, 7);
      v332 = v331;
      v333 = __ROL4__(v1164, 14);
      v334 = v330 + v203 + v1163 + ((v1164 >> 3) ^ v332 ^ v333);
      v335 = v264 + v334 + 1996064986 + (v282 ^ v324 & (v303 ^ v282));
      v336 = __ROR4__(v324, 11);
      v337 = __ROR4__(v324, 6);
      v338 = v337 ^ v336;
      v339 = __ROL4__(v324, 7);
      v340 = v335 + (v338 ^ v339);
      v341 = __ROR4__(v327, 2);
      v342 = v340 + v267;
      v343 = v341;
      v344 = __ROR4__(v327, 13);
      v345 = v343 ^ v344;
      v346 = __ROL4__(v327, 10);
      v347 = v340 + (v346 ^ v345) + (v327 & v308 | v289 & (v327 | v308));
      v348 = __ROL4__(v316, 15);
      v349 = __ROL4__(v316, 13);
      v350 = (v316 >> 10) ^ v348 ^ v349;
      v351 = __ROR4__(v1165, 7);
      v352 = v351;
      v353 = __ROL4__(v1165, 14);
      v354 = v350 + v221 + v1164 + ((v1165 >> 3) ^ v352 ^ v353);
      v355 = v282 + v354 - 1740746414;
      v356 = v354;
      v357 = __ROR4__(v342, 11);
      v358 = v355 + (v303 ^ v342 & (v324 ^ v303));
      v359 = __ROR4__(v342, 6);
      v360 = v359 ^ v357;
      v361 = __ROL4__(v342, 7);
      v362 = v358 + (v360 ^ v361);
      v363 = __ROR4__(v347, 2);
      v364 = __ROR4__(v347, 13);
      v365 = v362 + v289;
      v366 = v363 ^ v364;
      v367 = __ROL4__(v347, 10);
      v368 = v362 + (v367 ^ v366) + (v347 & v327 | v308 & (v347 | v327));
      v369 = __ROL4__(v334, 15);
      v370 = __ROL4__(v334, 13);
      v371 = (v334 >> 10) ^ v369 ^ v370;
      v372 = __ROR4__(v1166, 7);
      v373 = v372;
      v374 = __ROL4__(v1166, 14);
      v375 = v371 + v238 + v1165 + ((v1166 >> 3) ^ v373 ^ v374);
      v376 = v303 + v375 - 1473132947;
      v377 = v375;
      v378 = __ROR4__(v365, 11);
      v379 = __ROR4__(v365, 6);
      v380 = v379 ^ v378;
      v381 = __ROL4__(v365, 7);
      v382 = (v324 ^ v365 & (v342 ^ v324)) + v376 + (v380 ^ v381);
      v383 = v308 + v382;
      v384 = __ROR4__(v368, 2);
      v385 = v384;
      v386 = __ROR4__(v368, 13);
      v387 = v385 ^ v386;
      v388 = __ROL4__(v368, 10);
      v389 = v382 + (v388 ^ v387) + (v368 & v347 | v327 & (v368 | v347));
      v390 = __ROL4__(v356, 15);
      v391 = __ROL4__(v356, 13);
      v392 = (v356 >> 10) ^ v390 ^ v391;
      v393 = __ROR4__(v1167, 7);
      v394 = v393;
      v395 = __ROL4__(v1167, 14);
      v396 = v392 + v256 + v1166 + ((v1167 >> 3) ^ v394 ^ v395);
      v397 = v324 + v396 - 1341970488;
      v398 = v396;
      v399 = __ROR4__(v383, 11);
      v400 = __ROR4__(v383, 6);
      v401 = v400 ^ v399;
      v402 = __ROL4__(v383, 7);
      v403 = (v342 ^ v383 & (v365 ^ v342)) + v397 + (v401 ^ v402);
      v404 = v327 + v403;
      v405 = __ROR4__(v389, 2);
      v406 = v405;
      v407 = __ROR4__(v389, 13);
      v408 = v406 ^ v407;
      v409 = __ROL4__(v389, 10);
      v410 = v403 + (v409 ^ v408) + (v389 & v368 | v347 & (v389 | v368));
      v411 = __ROL4__(v377, 15);
      v412 = __ROL4__(v377, 13);
      v413 = (v377 >> 10) ^ v411 ^ v412;
      v414 = __ROR4__(v1168, 7);
      v415 = v414;
      v416 = __ROL4__(v1168, 14);
      v417 = v413 + v275 + v1167 + ((v1168 >> 3) ^ v415 ^ v416);
      v418 = v342 + v417 - 1084653625;
      v419 = v417;
      v420 = __ROR4__(v404, 11);
      v421 = __ROR4__(v404, 6);
      v422 = v421 ^ v420;
      v423 = __ROL4__(v404, 7);
      v424 = (v365 ^ v404 & (v383 ^ v365)) + v418 + (v422 ^ v423);
      v425 = v347 + v424;
      v426 = __ROR4__(v410, 2);
      v427 = v426;
      v428 = __ROR4__(v410, 13);
      v429 = v427 ^ v428;
      v430 = __ROL4__(v410, 10);
      v431 = v424 + (v430 ^ v429) + (v410 & v389 | v368 & (v410 | v389));
      v432 = __ROL4__(v398, 15);
      v433 = __ROL4__(v398, 13);
      v434 = (v398 >> 10) ^ v432 ^ v433;
      v435 = __ROR4__(v1169, 7);
      v436 = v435;
      v437 = __ROL4__(v1169, 14);
      v438 = v434 + v296 + v1168 + ((v1169 >> 3) ^ v436 ^ v437);
      v439 = v365 + v438 - 958395405;
      v440 = v438;
      v441 = __ROR4__(v425, 11);
      v442 = __ROR4__(v425, 6);
      v443 = v442 ^ v441;
      v444 = __ROL4__(v425, 7);
      v445 = (v383 ^ v425 & (v404 ^ v383)) + v439 + (v443 ^ v444);
      v446 = v368 + v445;
      v447 = __ROR4__(v431, 2);
      v448 = v447;
      v449 = __ROR4__(v431, 13);
      v450 = v448 ^ v449;
      v451 = __ROL4__(v431, 10);
      v452 = v445 + (v451 ^ v450) + (v431 & v410 | v389 & (v431 | v410));
      v453 = __ROL4__(v419, 15);
      v454 = __ROL4__(v419, 13);
      v455 = (v419 >> 10) ^ v453 ^ v454;
      v456 = __ROR4__(v1170, 7);
      v457 = v456;
      v458 = __ROL4__(v1170, 14);
      v459 = v455 + v316 + v1169 + ((v1170 >> 3) ^ v457 ^ v458);
      v460 = v383 + v459 - 710438585;
      v461 = v459;
      v462 = __ROR4__(v446, 11);
      v463 = __ROR4__(v446, 6);
      v464 = v463 ^ v462;
      v465 = __ROL4__(v446, 7);
      v466 = (v404 ^ v446 & (v425 ^ v404)) + v460 + (v464 ^ v465);
      v467 = v389 + v466;
      v468 = __ROR4__(v452, 2);
      v469 = v468;
      v470 = __ROR4__(v452, 13);
      v471 = v469 ^ v470;
      v472 = __ROL4__(v452, 10);
      v473 = v466 + (v472 ^ v471) + (v452 & v431 | v410 & (v452 | v431));
      v474 = __ROL4__(v440, 15);
      v475 = __ROL4__(v440, 13);
      v476 = (v440 >> 10) ^ v474 ^ v475;
      v477 = __ROR4__(v1171, 7);
      v478 = v477;
      v479 = __ROL4__(v1171, 14);
      v480 = v476 + v334 + v1170 + ((v1171 >> 3) ^ v478 ^ v479);
      v481 = v404 + v480 + 113926993;
      v482 = v480;
      v483 = __ROR4__(v467, 11);
      v484 = v481 + (v425 ^ v467 & (v446 ^ v425));
      v485 = __ROR4__(v467, 6);
      v486 = v485 ^ v483;
      v487 = __ROL4__(v467, 7);
      v488 = v484 + (v486 ^ v487);
      v489 = v410 + v488;
      v490 = __ROR4__(v473, 2);
      v491 = v490;
      v492 = __ROR4__(v473, 13);
      v493 = v491 ^ v492;
      v494 = __ROL4__(v473, 10);
      v495 = v488 + (v494 ^ v493) + (v473 & v452 | v431 & (v473 | v452));
      v496 = __ROL4__(v461, 15);
      v497 = __ROL4__(v461, 13);
      v498 = (v461 >> 10) ^ v496 ^ v497;
      v499 = __ROR4__(v203, 7);
      v500 = v499;
      v501 = __ROL4__(v203, 14);
      v502 = v498 + v356 + v1171 + ((v203 >> 3) ^ v500 ^ v501);
      v503 = v425 + v502 + 338241895;
      v504 = v502;
      v505 = __ROR4__(v489, 11);
      v506 = v503 + (v446 ^ v489 & (v467 ^ v446));
      v507 = __ROR4__(v489, 6);
      v508 = v507 ^ v505;
      v509 = __ROL4__(v489, 7);
      v510 = v506 + (v508 ^ v509);
      v511 = __ROR4__(v495, 2);
      v512 = __ROR4__(v495, 13);
      v513 = v510 + v431;
      v514 = v511 ^ v512;
      v515 = __ROL4__(v495, 10);
      v516 = v510 + (v515 ^ v514) + (v495 & v473 | v452 & (v495 | v473));
      v517 = __ROL4__(v482, 15);
      v518 = __ROL4__(v482, 13);
      v519 = (v482 >> 10) ^ v517 ^ v518;
      v520 = __ROR4__(v221, 7);
      v521 = v520;
      v522 = __ROL4__(v221, 14);
      v523 = v519 + v377 + ((v221 >> 3) ^ v521 ^ v522) + v203;
      v524 = __ROR4__(v513, 6);
      v525 = v523;
      v526 = v446 + v523 + 666307205 + (v467 ^ v513 & (v489 ^ v467));
      v527 = v524;
      v528 = __ROR4__(v513, 11);
      v529 = v527 ^ v528;
      v530 = __ROL4__(v513, 7);
      v531 = v526 + (v529 ^ v530);
      v532 = __ROR4__(v516, 2);
      v533 = __ROR4__(v516, 13);
      v534 = v531 + v452;
      v535 = v532 ^ v533;
      v536 = __ROL4__(v516, 10);
      v537 = v531 + (v536 ^ v535) + (v516 & v495 | v473 & (v516 | v495));
      v538 = __ROL4__(v504, 15);
      v539 = __ROL4__(v504, 13);
      v540 = __ROR4__(v238, 7);
      v541 = (v504 >> 10) ^ v538 ^ v539;
      v542 = __ROL4__(v238, 14);
      v543 = v541 + v398 + ((v238 >> 3) ^ v540 ^ v542) + v221;
      v544 = v467 + v543 + 773529912;
      v545 = v543;
      v546 = __ROR4__(v534, 6);
      v547 = v546;
      v548 = __ROR4__(v534, 11);
      v549 = v548;
      v550 = __ROL4__(v534, 7);
      v551 = (v489 ^ v534 & (v513 ^ v489)) + v544 + (v547 ^ v549 ^ v550);
      v552 = v551 + v473;
      v553 = __ROR4__(v537, 2);
      v554 = v553;
      v555 = __ROL4__(v523, 13);
      v556 = __ROR4__(v537, 13);
      v557 = v556;
      v558 = __ROL4__(v537, 10);
      v559 = (v558 ^ v554 ^ v557) + (v537 & v516 | v495 & (v537 | v516));
      v560 = v555;
      v561 = v551 + v559;
      v562 = __ROR4__(v256, 7);
      v563 = __ROL4__(v523, 15);
      v564 = __ROL4__(v256, 14);
      v565 = ((v523 >> 10) ^ v563 ^ v560) + v419 + ((v256 >> 3) ^ v562 ^ v564) + v238;
      v566 = v565;
      v567 = v489 + v565 + 1294757372;
      v568 = __ROR4__(v552, 6);
      v569 = v566;
      v570 = v568;
      v571 = __ROL4__(v552, 7);
      v572 = __ROR4__(v552, 11);
      v573 = (v513 ^ v552 & (v534 ^ v513)) + v567 + (v570 ^ v572 ^ v571);
      v574 = __ROR4__(v561, 2);
      v575 = v495 + v573;
      v576 = __ROR4__(v561, 13);
      v577 = v574 ^ v576;
      v578 = __ROL4__(v561, 10);
      v579 = v573 + (v578 ^ v577) + (v561 & v537 | v516 & (v561 | v537));
      v580 = __ROL4__(v545, 15);
      v581 = __ROL4__(v545, 13);
      v582 = __ROR4__(v275, 7);
      v583 = (v545 >> 10) ^ v580 ^ v581;
      v584 = __ROL4__(v275, 14);
      v585 = v583 + v440 + ((v275 >> 3) ^ v582 ^ v584) + v256;
      v586 = v513 + v585 + 1396182291;
      v587 = v585;
      v588 = __ROR4__(v575, 11);
      v589 = v587;
      v590 = __ROR4__(v575, 6);
      v591 = v590 ^ v588;
      v592 = __ROL4__(v575, 7);
      v593 = (v534 ^ v575 & (v552 ^ v534)) + v586 + (v591 ^ v592);
      v594 = __ROR4__(v579, 2);
      v595 = __ROR4__(v579, 13);
      v596 = v593 + v516;
      v597 = v594 ^ v595;
      v598 = __ROL4__(v579, 10);
      v599 = __ROR4__(v296, 7);
      v600 = v593 + (v598 ^ v597) + (v579 & v561 | v537 & (v579 | v561));
      v601 = __ROL4__(v566, 13);
      v602 = __ROL4__(v566, 15);
      v603 = (v566 >> 10) ^ v602 ^ v601;
      v604 = __ROL4__(v296, 14);
      v605 = v461 + v275 + ((v296 >> 3) ^ v599 ^ v604) + v603;
      v606 = __ROR4__(v596, 11);
      v607 = __ROR4__(v596, 6);
      v608 = v607 ^ v606;
      v609 = __ROR4__(v600, 2);
      v610 = __ROL4__(v596, 7);
      v611 = (v552 ^ v596 & (v575 ^ v552)) + v534 + v605 + 1695183700 + (v608 ^ v610);
      v612 = __ROR4__(v600, 13);
      v613 = v611 + v537;
      v614 = v609 ^ v612;
      v615 = __ROL4__(v600, 10);
      v616 = v615 ^ v614;
      v617 = __ROL4__(v587, 15);
      v618 = v611 + v616 + (v600 & v579 | v561 & (v600 | v579));
      v619 = v617;
      v620 = __ROL4__(v587, 13);
      v621 = (v587 >> 10) ^ v619 ^ v620;
      v622 = __ROR4__(v316, 7);
      v623 = __ROL4__(v316, 14);
      v624 = v482 + v296 + ((v316 >> 3) ^ v622 ^ v623) + v621;
      v625 = __ROR4__(v613, 11);
      v626 = v605;
      v627 = v625;
      v628 = __ROL4__(v618, 10);
      v629 = __ROR4__(v613, 6);
      v630 = __ROL4__(v334, 14);
      v631 = v629 ^ v627;
      v632 = __ROL4__(v613, 7);
      v633 = (v575 ^ v613 & (v596 ^ v575)) + v552 + v624 + 1986661051 + (v631 ^ v632);
      v634 = __ROR4__(v618, 2);
      v635 = v633 + v561;
      v636 = v634;
      v637 = __ROR4__(v618, 13);
      v638 = v633 + (v628 ^ v636 ^ v637) + (v618 & v600 | v579 & (v618 | v600));
      v639 = __ROL4__(v605, 15);
      v640 = __ROL4__(v605, 13);
      v641 = (v605 >> 10) ^ v639 ^ v640;
      v642 = __ROR4__(v334, 7);
      v643 = __ROR4__(v635, 11);
      v644 = v641 + v504 + v316 + ((v334 >> 3) ^ v642 ^ v630);
      v645 = v644;
      v646 = v575 + v644 - 2117940946;
      v647 = v356;
      v648 = v645;
      v649 = __ROR4__(v635, 6);
      v650 = v649 ^ v643;
      v651 = __ROL4__(v635, 7);
      v652 = (v596 ^ v635 & (v613 ^ v596)) + v646 + (v650 ^ v651);
      v653 = __ROR4__(v638, 2);
      v654 = __ROR4__(v638, 13);
      v655 = v652 + v579;
      v656 = v653 ^ v654;
      v657 = __ROL4__(v638, 10);
      v658 = v652 + (v657 ^ v656) + (v638 & v618 | v600 & (v638 | v618));
      v659 = __ROL4__(v624, 13);
      v660 = __ROL4__(v624, 15);
      v661 = __ROL4__(v647, 14);
      v662 = (v624 >> 10) ^ v660 ^ v659;
      v663 = __ROR4__(v647, 7);
      v664 = v377;
      v665 = v662 + v525 + v334 + ((v647 >> 3) ^ v663 ^ v661);
      v666 = __ROR4__(v655, 11);
      v667 = v596 + v665 - 1838011259 + (v613 ^ v655 & (v635 ^ v613));
      v668 = v665;
      v669 = __ROR4__(v655, 6);
      v670 = v669 ^ v666;
      v671 = __ROL4__(v655, 7);
      v672 = v667 + (v670 ^ v671);
      v673 = __ROR4__(v658, 2);
      v674 = __ROR4__(v658, 13);
      v675 = v672 + v600;
      v676 = v673 ^ v674;
      v677 = __ROL4__(v658, 10);
      v678 = __ROL4__(v645, 13);
      v679 = v672 + (v677 ^ v676) + (v658 & v638 | v618 & (v658 | v638));
      v680 = __ROL4__(v645, 15);
      v681 = (v645 >> 10) ^ v680 ^ v678;
      v682 = __ROR4__(v377, 7);
      v683 = __ROL4__(v377, 14);
      v684 = v545 + v647 + ((v377 >> 3) ^ v682 ^ v683) + v681;
      v685 = v613 + v684 - 1564481375;
      v686 = v684;
      v687 = __ROR4__(v675, 6);
      v688 = v687;
      v689 = __ROR4__(v675, 11);
      v690 = v688 ^ v689;
      v691 = __ROL4__(v675, 7);
      v692 = (v635 ^ v675 & (v655 ^ v635)) + v685 + (v690 ^ v691);
      v693 = __ROR4__(v679, 2);
      v694 = __ROR4__(v679, 13);
      v695 = v692 + v618;
      v696 = v693 ^ v694;
      v697 = __ROL4__(v679, 10);
      v698 = __ROL4__(v668, 13);
      v699 = v692 + (v697 ^ v696) + (v679 & v658 | v638 & (v679 | v658));
      v700 = __ROL4__(v668, 15);
      v701 = (v668 >> 10) ^ v700 ^ v698;
      v702 = __ROR4__(v398, 7);
      v703 = __ROL4__(v398, 14);
      v704 = v701 + v569 + v664 + ((v398 >> 3) ^ v702 ^ v703);
      v705 = v704;
      v706 = v635 + v704 - 1474664885;
      v707 = __ROR4__(v695, 6);
      v708 = __ROL4__(v695, 7);
      v709 = v707;
      v710 = __ROR4__(v695, 11);
      v711 = v709 ^ v710 ^ v708;
      v712 = __ROR4__(v699, 13);
      v713 = (v655 ^ v695 & (v675 ^ v655)) + v706 + v711;
      v714 = __ROR4__(v699, 2);
      v715 = v714 ^ v712;
      v716 = v713 + v638;
      v717 = __ROL4__(v699, 10);
      v718 = v713 + (v717 ^ v715) + (v699 & v679 | v658 & (v699 | v679));
      v719 = __ROL4__(v684, 15);
      v720 = __ROL4__(v684, 13);
      v721 = __ROL4__(v419, 14);
      v722 = (v684 >> 10) ^ v719 ^ v720;
      v723 = __ROR4__(v419, 7);
      v724 = v722 + v589 + v398 + ((v419 >> 3) ^ v723 ^ v721);
      v725 = v655 + v724 - 1035236496;
      v726 = v724;
      v727 = __ROR4__(v716, 6);
      v728 = v724;
      v729 = v727;
      v730 = __ROL4__(v716, 7);
      v731 = __ROR4__(v716, 11);
      v732 = (v675 ^ v716 & (v695 ^ v675)) + v725 + (v729 ^ v731 ^ v730);
      v733 = __ROR4__(v718, 2);
      v734 = v658 + v732;
      v735 = __ROR4__(v718, 13);
      v736 = v733 ^ v735;
      v737 = __ROL4__(v718, 10);
      v738 = v732 + (v737 ^ v736) + (v718 & v699 | v679 & (v718 | v699));
      v739 = __ROL4__(v705, 13);
      v740 = __ROL4__(v705, 15);
      v741 = (v705 >> 10) ^ v740 ^ v739;
      v742 = __ROR4__(v440, 7);
      v743 = __ROL4__(v440, 14);
      v744 = v741 + v626 + v419 + ((v440 >> 3) ^ v742 ^ v743);
      v745 = v675 + v744 - 949202525;
      v746 = v744;
      v747 = __ROR4__(v734, 6);
      v748 = v747;
      v749 = __ROR4__(v734, 11);
      v750 = v749;
      v751 = __ROL4__(v734, 7);
      v752 = v748 ^ v750;
      v753 = v751;
      v754 = __ROR4__(v738, 2);
      v755 = v752 ^ v753;
      v756 = v754;
      v757 = (v695 ^ v734 & (v716 ^ v695)) + v745 + v755;
      v758 = __ROR4__(v738, 13);
      v759 = v679 + v757;
      v760 = v758;
      v761 = __ROL4__(v738, 10);
      v762 = __ROL4__(v726, 15);
      v763 = __ROL4__(v726, 13);
      v764 = v757 + (v761 ^ v756 ^ v760) + (v738 & v718 | v699 & (v738 | v718));
      v765 = __ROR4__(v461, 7);
      v766 = __ROL4__(v461, 14);
      v767 = v624 + v440 + ((v461 >> 3) ^ v765 ^ v766);
      v768 = __ROR4__(v759, 11);
      v769 = v767 + ((v726 >> 10) ^ v762 ^ v763);
      v770 = __ROR4__(v759, 6);
      v771 = v770 ^ v768;
      v772 = __ROL4__(v759, 7);
      v773 = (v716 ^ v759 & (v734 ^ v716)) + v695 + v769 - 778901479 + (v771 ^ v772);
      v774 = v699 + v773;
      v775 = __ROR4__(v764, 2);
      v776 = v775;
      v777 = __ROR4__(v764, 13);
      v778 = v777;
      v779 = __ROL4__(v764, 10);
      v780 = (v779 ^ v776 ^ v778) + (v764 & v738 | v718 & (v764 | v738));
      v781 = __ROR4__(v482, 7);
      v782 = v773 + v780;
      v783 = __ROL4__(v746, 13);
      v784 = __ROL4__(v746, 15);
      v785 = (v746 >> 10) ^ v784 ^ v783;
      v786 = __ROL4__(v482, 14);
      v787 = v785 + v648 + v461 + ((v482 >> 3) ^ v781 ^ v786);
      v788 = __ROR4__(v774, 11);
      v789 = v787;
      v790 = v788;
      v791 = __ROR4__(v782, 2);
      v792 = __ROR4__(v774, 6);
      v793 = v792 ^ v790;
      v794 = __ROL4__(v774, 7);
      v795 = v793 ^ v794;
      v796 = v791;
      v797 = __ROR4__(v782, 13);
      v798 = (v734 ^ v774 & (v759 ^ v734)) + v716 + v787 - 694614492 + v795;
      v799 = v797;
      v800 = v718 + v798;
      v801 = __ROL4__(v782, 10);
      v802 = v798 + (v801 ^ v796 ^ v799) + (v782 & v764 | v738 & (v782 | v764));
      v803 = __ROL4__(v769, 15);
      v804 = __ROL4__(v769, 13);
      v805 = __ROR4__(v504, 7);
      v806 = (v769 >> 10) ^ v803 ^ v804;
      v807 = __ROL4__(v504, 14);
      v808 = v806 + v668 + v482 + ((v504 >> 3) ^ v805 ^ v807);
      v809 = v734 + v808 - 200395387;
      v810 = v808;
      v811 = __ROR4__(v800, 6);
      v812 = v811;
      v813 = __ROR4__(v800, 11);
      v814 = v813;
      v815 = __ROL4__(v800, 7);
      v816 = v812 ^ v814;
      v817 = v815;
      v818 = __ROR4__(v802, 2);
      v819 = (v759 ^ v800 & (v774 ^ v759)) + v809 + (v816 ^ v817);
      v820 = v738 + v819;
      v821 = __ROR4__(v802, 13);
      v822 = v818 ^ v821;
      v823 = __ROL4__(v802, 10);
      v824 = __ROR4__(v525, 7);
      v825 = (v823 ^ v822) + (v802 & v782 | v764 & (v802 | v782));
      v826 = __ROL4__(v787, 15);
      v827 = v819 + v825;
      v828 = v826;
      v829 = __ROL4__(v787, 13);
      v830 = v828 ^ v829;
      v831 = __ROL4__(v525, 14);
      v832 = v686 + v504 + ((v525 >> 3) ^ v824 ^ v831) + ((v787 >> 10) ^ v830);
      v833 = v832;
      v834 = v759 + v832 + 275423344;
      v835 = __ROR4__(v820, 11);
      v836 = v833;
      v837 = __ROR4__(v820, 6);
      v838 = v837 ^ v835;
      v839 = __ROL4__(v820, 7);
      v840 = (v774 ^ v820 & (v800 ^ v774)) + v834 + (v838 ^ v839);
      v841 = __ROR4__(v827, 2);
      v842 = __ROR4__(v827, 13);
      v843 = v840 + v764;
      v844 = v841 ^ v842;
      v845 = __ROL4__(v827, 10);
      v846 = v840 + (v845 ^ v844) + (v827 & v802 | v782 & (v827 | v802));
      v847 = __ROL4__(v810, 15);
      v848 = __ROL4__(v810, 13);
      v849 = __ROR4__(v545, 7);
      v850 = (v810 >> 10) ^ v847 ^ v848;
      v851 = __ROL4__(v545, 14);
      v852 = v705 + v525 + ((v545 >> 3) ^ v849 ^ v851);
      v853 = __ROR4__(v843, 11);
      v854 = v852 + v850;
      v855 = v854;
      v1156 = v854;
      v856 = __ROR4__(v843, 6);
      v857 = v856 ^ v853;
      v858 = __ROL4__(v843, 7);
      v859 = (v800 ^ v843 & (v820 ^ v800)) + v774 + v854 + 430227734 + (v857 ^ v858);
      v860 = v859 + v782;
      v861 = __ROR4__(v846, 2);
      v862 = __ROR4__(v846, 13);
      v863 = __ROL4__(v833, 13);
      v864 = v861 ^ v862;
      v865 = __ROL4__(v846, 10);
      v866 = v859 + (v865 ^ v864) + (v846 & v827 | v802 & (v846 | v827));
      v867 = __ROR4__(v569, 7);
      v868 = __ROL4__(v833, 15);
      v869 = v868 ^ v863;
      v870 = __ROL4__(v569, 14);
      v871 = v728 + v545 + ((v569 >> 3) ^ v867 ^ v870) + ((v833 >> 10) ^ v869);
      v872 = v800 + v871 + 506948616;
      v1157 = v871;
      v873 = __ROR4__(v860, 11);
      v874 = __ROR4__(v860, 6);
      v875 = v874 ^ v873;
      v876 = __ROL4__(v860, 7);
      v877 = __ROL4__(v866, 10);
      v878 = (v820 ^ v860 & (v843 ^ v820)) + v872 + (v875 ^ v876);
      v879 = __ROR4__(v866, 2);
      v880 = v878 + v802;
      v881 = v879;
      v882 = __ROR4__(v866, 13);
      v883 = v878 + (v877 ^ v881 ^ v882) + (v866 & v846 | v827 & (v866 | v846));
      v884 = __ROL4__(v855, 13);
      v885 = __ROL4__(v855, 15);
      v886 = v884;
      v887 = __ROR4__(v589, 7);
      v888 = (v855 >> 10) ^ v885 ^ v886;
      v889 = __ROL4__(v589, 14);
      v890 = v746 + v569 + ((v589 >> 3) ^ v887 ^ v889) + v888;
      v1158 = v890;
      v891 = v820 + v890 + 659060556 + (v843 ^ v880 & (v860 ^ v843));
      v892 = __ROR4__(v880, 6);
      v893 = __ROR4__(v880, 11);
      v894 = v892 ^ v893;
      v895 = __ROL4__(v871, 13);
      v896 = __ROL4__(v880, 7);
      v897 = v891 + (v894 ^ v896);
      v898 = __ROR4__(v883, 2);
      v899 = __ROR4__(v883, 13);
      v900 = v897 + v827;
      v901 = v898 ^ v899;
      v902 = __ROL4__(v883, 10);
      v903 = v897 + (v902 ^ v901) + (v883 & v866 | v846 & (v883 | v866));
      v904 = __ROL4__(v871, 15);
      v905 = __ROR4__(v626, 7);
      v906 = (v871 >> 10) ^ v904 ^ v895;
      v907 = __ROL4__(v626, 14);
      v1159 = v769 + v589 + ((v626 >> 3) ^ v905 ^ v907) + v906;
      v908 = __ROR4__(v900, 11);
      v909 = v908;
      v910 = v843 + v1159 + 883997877 + (v860 ^ v900 & (v880 ^ v860));
      v911 = __ROL4__(v903, 10);
      v912 = __ROR4__(v900, 6);
      v913 = v912 ^ v909;
      v914 = __ROL4__(v900, 7);
      v915 = v910 + (v913 ^ v914);
      v916 = __ROR4__(v903, 2);
      v917 = v915 + v846;
      v918 = v916;
      v919 = __ROR4__(v903, 13);
      v920 = (v911 ^ v918 ^ v919) + (v903 & v883 | v866 & (v903 | v883));
      v921 = __ROL4__(v890, 15);
      v922 = v915 + v920;
      v923 = v921;
      v924 = __ROL4__(v890, 13);
      v925 = v923 ^ v924;
      v926 = __ROL4__(v624, 14);
      v927 = __ROR4__(v624, 7);
      v928 = v789 + v626 + ((v624 >> 3) ^ v927 ^ v926) + ((v890 >> 10) ^ v925);
      v929 = __ROR4__(v917, 11);
      v1160 = v928;
      v930 = __ROR4__(v917, 6);
      v931 = v930 ^ v929;
      v932 = __ROL4__(v917, 7);
      v933 = (v880 ^ v917 & (v900 ^ v880)) + v860 + v928 + 958139571 + (v931 ^ v932);
      v934 = __ROR4__(v922, 2);
      v935 = v933 + v866;
      v936 = v934;
      v937 = __ROR4__(v922, 13);
      v938 = v936 ^ v937;
      v939 = __ROL4__(v922, 10);
      v940 = (v939 ^ v938) + (v922 & v903 | v883 & (v922 | v903));
      v941 = __ROL4__(v1159, 15);
      v942 = v933 + v940;
      v943 = v941;
      v944 = __ROL4__(v1159, 13);
      v945 = (v1159 >> 10) ^ v943 ^ v944;
      v946 = __ROL4__(v648, 14);
      v947 = __ROR4__(v648, 7);
      v948 = v810 + v624 + ((v648 >> 3) ^ v947 ^ v946) + v945;
      v949 = v880 + v948 + 1322822218;
      v1161 = v948;
      v950 = v948;
      v951 = __ROR4__(v935, 11);
      v952 = __ROR4__(v935, 6);
      v953 = v952 ^ v951;
      v954 = __ROL4__(v935, 7);
      v955 = (v900 ^ v935 & (v917 ^ v900)) + v949 + (v953 ^ v954);
      v956 = __ROR4__(v942, 2);
      v957 = __ROR4__(v942, 13);
      v958 = v955 + v883;
      v959 = v956 ^ v957;
      v960 = __ROL4__(v942, 10);
      v961 = v955 + (v960 ^ v959) + (v942 & v922 | v903 & (v942 | v922));
      v962 = __ROL4__(v928, 13);
      v963 = __ROL4__(v928, 15);
      v964 = (v928 >> 10) ^ v963 ^ v962;
      v965 = __ROR4__(v668, 7);
      v966 = __ROL4__(v668, 14);
      v967 = v964 + v836 + v648 + ((v668 >> 3) ^ v965 ^ v966);
      v1162 = v967;
      v968 = v900 + v967 + 1537002063;
      v969 = v967;
      v970 = __ROL4__(v958, 7);
      v971 = __ROR4__(v958, 6);
      v972 = v971;
      v973 = __ROR4__(v958, 11);
      v974 = (v917 ^ v958 & (v935 ^ v917)) + v968 + (v972 ^ v973 ^ v970);
      v975 = __ROR4__(v961, 2);
      v976 = __ROR4__(v961, 13);
      v977 = v974 + v903;
      v978 = v975 ^ v976;
      v979 = __ROL4__(v961, 10);
      v980 = v974 + (v979 ^ v978) + (v961 & v942 | v922 & (v961 | v942));
      v981 = __ROL4__(v950, 15);
      v982 = __ROL4__(v950, 13);
      v983 = (v950 >> 10) ^ v981 ^ v982;
      v984 = __ROL4__(v686, 14);
      v985 = __ROR4__(v686, 7);
      v986 = v855 + v668 + ((v686 >> 3) ^ v985 ^ v984) + v983;
      v987 = __ROR4__(v980, 13);
      v988 = v986;
      v1163 = v986;
      v989 = v917 + v986 + 1747873779;
      v990 = __ROR4__(v977, 6);
      v991 = v990;
      v992 = __ROR4__(v977, 11);
      v993 = v991 ^ v992;
      v994 = __ROL4__(v977, 7);
      v995 = (v935 ^ v977 & (v958 ^ v935)) + v989 + (v993 ^ v994);
      v996 = __ROR4__(v980, 2);
      v997 = v996 ^ v987;
      v998 = v995 + v922;
      v999 = __ROL4__(v980, 10);
      v1000 = v995 + (v999 ^ v997) + (v980 & v961 | v942 & (v980 | v961));
      v1001 = __ROL4__(v969, 15);
      v1002 = __ROL4__(v969, 13);
      v1003 = (v969 >> 10) ^ v1001 ^ v1002;
      v1004 = __ROL4__(v705, 14);
      v1005 = __ROR4__(v705, 7);
      v1006 = v1003 + v686 + ((v705 >> 3) ^ v1005 ^ v1004) + v871;
      v1007 = v935 + v1006 + 1955562222;
      v1008 = __ROR4__(v998, 6);
      v1164 = v1006;
      v1009 = v1008;
      v1010 = __ROR4__(v998, 11);
      v1011 = v1009 ^ v1010;
      v1012 = __ROL4__(v998, 7);
      v1013 = (v958 ^ v998 & (v977 ^ v958)) + v1007 + (v1011 ^ v1012);
      v1014 = __ROR4__(v1000, 2);
      v1015 = __ROR4__(v1000, 13);
      v1016 = v1013 + v942;
      v1017 = v1014 ^ v1015;
      v1018 = __ROL4__(v1000, 10);
      v1019 = v1013 + (v1018 ^ v1017) + (v1000 & v980 | v961 & (v1000 | v980));
      v1020 = __ROL4__(v988, 15);
      v1021 = __ROL4__(v988, 13);
      v1022 = (v988 >> 10) ^ v1020 ^ v1021;
      v1023 = __ROL4__(v728, 14);
      v1024 = __ROR4__(v728, 7);
      v1025 = v1022 + v705 + ((v728 >> 3) ^ v1024 ^ v1023) + v890;
      v1026 = v958 + v1025 + 2024104815;
      v1165 = v1025;
      v1027 = __ROR4__(v1016, 6);
      v1028 = v1027;
      v1029 = __ROR4__(v1016, 11);
      v1030 = v1028 ^ v1029;
      v1031 = __ROL4__(v1016, 7);
      v1032 = (v977 ^ v1016 & (v998 ^ v977)) + v1026 + (v1030 ^ v1031);
      v1033 = __ROR4__(v1019, 2);
      v1034 = __ROR4__(v1019, 13);
      v1035 = v1032 + v961;
      v1036 = v1033 ^ v1034;
      v1037 = __ROL4__(v1019, 10);
      v1038 = v1032 + (v1037 ^ v1036) + (v1019 & v1000 | v980 & (v1019 | v1000));
      v1039 = __ROL4__(v1006, 13);
      v1040 = __ROL4__(v1006, 15);
      v1041 = (v1006 >> 10) ^ v1040 ^ v1039;
      v1042 = __ROL4__(v746, 14);
      v1043 = __ROR4__(v746, 7);
      v1166 = v1041 + v728 + ((v746 >> 3) ^ v1043 ^ v1042) + v1159;
      v1044 = __ROR4__(v1035, 6);
      v1045 = v1044;
      v1046 = __ROR4__(v1035, 11);
      v1047 = v1045 ^ v1046;
      v1048 = __ROL4__(v1035, 7);
      v1049 = (v998 ^ v1035 & (v1016 ^ v998)) + v977 + v1166 - 2067236844 + (v1048 ^ v1047);
      v1050 = __ROR4__(v1038, 2);
      v1051 = v1049 + v980;
      v1052 = v1050;
      v1053 = __ROR4__(v1038, 13);
      v1054 = v1052 ^ v1053;
      v1055 = __ROL4__(v1038, 10);
      v1056 = (v1055 ^ v1054) + (v1038 & v1019 | v1000 & (v1038 | v1019));
      v1057 = __ROL4__(v1025, 15);
      v1058 = v1056 + v1049;
      v1059 = v1057;
      v1060 = __ROL4__(v1025, 13);
      v1061 = v1059 ^ v1060 ^ (v1025 >> 10);
      v1062 = __ROR4__(v769, 7);
      v1063 = __ROL4__(v769, 14);
      v1167 = v1061 + v746 + ((v769 >> 3) ^ v1062 ^ v1063) + v928;
      v1064 = __ROR4__(v1051, 6);
      v1065 = v1064;
      v1066 = __ROR4__(v1051, 11);
      v1067 = v1065 ^ v1066;
      v1068 = __ROL4__(v1051, 7);
      v1069 = (v1016 ^ v1051 & (v1035 ^ v1016)) + v998 + v1167 - 1933114872 + (v1068 ^ v1067);
      v1070 = v1069 + v1000;
      v1071 = __ROR4__(v1058, 2);
      v1072 = v1071;
      v1073 = __ROR4__(v1058, 13);
      v1074 = v1072 ^ v1073;
      v1075 = __ROL4__(v1058, 10);
      v1076 = (v1075 ^ v1074) + (v1058 & v1038 | v1019 & (v1058 | v1038));
      v1077 = __ROL4__(v1166, 15);
      v1078 = v1076 + v1069;
      v1079 = v1077;
      v1080 = __ROL4__(v1166, 13);
      v1081 = v1079 ^ v1080 ^ (v1166 >> 10);
      v1082 = __ROL4__(v789, 14);
      v1083 = __ROR4__(v789, 7);
      v1168 = v1081 + v950 + ((v789 >> 3) ^ v1083 ^ v1082) + v769;
      v1084 = __ROR4__(v1070, 6);
      v1085 = __ROR4__(v1070, 11);
      v1086 = v1084 ^ v1085;
      v1087 = __ROL4__(v1070, 7);
      v1088 = (v1035 ^ v1070 & (v1051 ^ v1035)) + v1016 + v1168 - 1866530822 + (v1087 ^ v1086);
      v1089 = __ROR4__(v1078, 2);
      v1090 = __ROR4__(v1078, 13);
      v1091 = v1088 + v1019;
      v1092 = v1089 ^ v1090;
      v1093 = __ROL4__(v1078, 10);
      v1094 = (v1093 ^ v1092) + (v1078 & v1058 | v1038 & (v1078 | v1058)) + v1088;
      v1095 = __ROL4__(v1167, 13);
      v1096 = __ROL4__(v1167, 15);
      v1097 = v1096 ^ v1095 ^ (v1167 >> 10);
      v1098 = __ROL4__(v810, 14);
      v1099 = __ROR4__(v810, 7);
      v1100 = v1097 + v969 + ((v810 >> 3) ^ v1099 ^ v1098) + v789;
      v1101 = __ROR4__(v1091, 6);
      v1169 = v1100;
      v1102 = __ROR4__(v1091, 11);
      v1103 = v1101 ^ v1102;
      v1104 = __ROL4__(v1091, 7);
      v1105 = (v1051 ^ v1091 & (v1070 ^ v1051)) + v1035 + v1100 - 1538233109 + (v1104 ^ v1103);
      v1106 = __ROR4__(v1094, 2);
      v1107 = __ROR4__(v1094, 13);
      v1108 = v1105 + v1038;
      v1109 = v1106 ^ v1107;
      v1110 = __ROL4__(v1094, 10);
      v1111 = (v1110 ^ v1109) + (v1094 & v1078 | v1058 & (v1094 | v1078)) + v1105;
      v1112 = __ROL4__(v1168, 13);
      v1113 = __ROL4__(v1168, 15);
      v1114 = v1113 ^ v1112 ^ (v1168 >> 10);
      v1115 = __ROR4__(v836, 7);
      v1116 = __ROL4__(v836, 14);
      v1117 = v988 + v810 + ((v836 >> 3) ^ v1115 ^ v1116) + v1114;
      v1118 = v1051 + v1117 - 1090935817;
      v1170 = v1117;
      v1119 = __ROR4__(v1108, 6);
      v1120 = __ROR4__(v1108, 11);
      v1121 = v1119 ^ v1120;
      v1122 = __ROL4__(v1108, 7);
      v1123 = (v1070 ^ v1108 & (v1091 ^ v1070)) + v1118 + (v1122 ^ v1121);
      v1124 = __ROR4__(v1111, 2);
      v1125 = __ROR4__(v1111, 13);
      v1126 = v1123 + v1058;
      v1127 = v1124 ^ v1125;
      v1128 = __ROL4__(v1111, 10);
      v1129 = (v1128 ^ v1127) + (v1111 & v1094 | v1078 & (v1111 | v1094)) + v1123;
      v1130 = __ROL4__(v1100, 13);
      v1131 = __ROL4__(v1100, 15);
      v1132 = v1131 ^ v1130 ^ (v1100 >> 10);
      v1133 = __ROL4__(v855, 14);
      v1134 = __ROR4__(v855, 7);
      v1146 += v1129;
      v1171 = v1006 + v836 + ((v855 >> 3) ^ v1134 ^ v1133) + v1132;
      v1148 += v1094;
      v1135 = v1070 + v1171 - 965641998 + (v1091 ^ v1126 & (v1108 ^ v1091));
      v1136 = __ROR4__(v1126, 6);
      v1147 += v1111;
      v1137 = __ROR4__(v1126, 11);
      v4 = v1147;
      v1150 += v1126;
      v1138 = v1136 ^ v1137;
      v7 = v1150;
      v1151 += v1108;
      v1139 = __ROL4__(v1126, 7);
      v10 = v1151;
      v1140 = v1135 + (v1139 ^ v1138);
      v1141 = __ROR4__(v1129, 2);
      v1142 = __ROR4__(v1129, 13);
      v1149 += v1140 + v1078;
      v1143 = v1141 ^ v1142;
      v1144 = __ROL4__(v1129, 10);
      v11 = v1140 + v1153 + (v1129 & v1111 | v1094 & (v1129 | v1111)) + (v1144 ^ v1143);
      *(_DWORD *)v1155 = v11;
      *(_DWORD *)(v1155 + 4) = v1146;
      result = v1146;
      *(_DWORD *)(v1155 + 8) = v1147;
      *(_DWORD *)(v1155 + 12) = v1148;
      *(_DWORD *)(v1155 + 20) = v1150;
      v5 = v1148;
      *(_DWORD *)(v1155 + 16) = v1149;
      v1153 = v11;
      *(_DWORD *)(v1155 + 24) = v1151;
      v1152 += v1091;
      v12 = v1152;
      v6 = v1149;
      *(_DWORD *)(v1155 + 28) = v1152;
    }
    while ( v1145 < v1154 );
  }
  return result;
}

__int64 __fastcall sub_405990(__int64 a1)
{
  unsigned __int64 v1; // rsi@1
  int v2; // edx@1
  __int64 v3; // rbp@1
  unsigned int v4; // ecx@1

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 36);
  v3 = (-(signed __int64)(v1 < 0x38) & 0xFFFFFFFFFFFFFFC0LL) + 128;
  v4 = v1 + *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v4;
  if ( v4 < v1 )
    *(_DWORD *)(a1 + 36) = ++v2;
  *(_DWORD *)(a1 + 4 * ((-(signed __int64)(v1 < 0x38) & 0xFFFFFFFFFFFFFFF0LL) + 30) + 48) = _byteswap_ulong((v4 >> 29) | 8 * v2);
  *(_DWORD *)(a1 + 4 * ((-(signed __int64)(v1 < 0x38) & 0xFFFFFFFFFFFFFFF0LL) + 31) + 48) = (8 * v4 >> 8) & 0xFF00 | (v4 << 27) | (8 * v4 >> 24) | (v4 << 11) & 0xFF0000;
  memcpy((void *)(a1 + 48 + v1), "€", v3 - v1 - 8);
  return sub_403200(a1 + 48, v3, a1);
}

void __fastcall sub_405AC0(void *src, size_t n, __int64 a3)
{
  size_t v3; // r13@1
  __int64 v4; // r12@1
  const __m128i *v5; // rbx@1
  __int64 v6; // rbp@1
  char *v7; // rbp@4
  const __m128i *v8; // r14@5
  __m128i v9; // xmm0@6
  __int64 v10; // rax@8
  char *v11; // rsi@8
  size_t v12; // r13@13
  size_t v13; // rbp@16
  unsigned __int64 v14; // rdi@16
  unsigned __int64 v15; // r15@19
  signed __int64 v16; // r14@19
  unsigned __int64 v17; // rsi@21
  unsigned __int64 v18; // rdi@23
  signed __int64 v19; // r14@23
  unsigned int v20; // edx@24
  unsigned int v21; // ecx@24
  __int64 v22; // rsi@25
  char *v23; // rax@27
  signed __int64 v24; // rcx@27
  unsigned __int64 v25; // rdi@32
  char *v26; // rax@32
  unsigned int v27; // edx@33
  unsigned int v28; // ecx@33
  __int64 v29; // rsi@34

  v3 = n;
  v4 = a3;
  v5 = (const __m128i *)src;
  v6 = *(_QWORD *)(a3 + 40);
  if ( v6 )
  {
    v15 = a3 + 48;
    v16 = 128 - v6;
    if ( 128 - v6 > n )
      v16 = n;
    memcpy((void *)(a3 + 48 + v6), src, v16);
    v17 = v16 + *(_QWORD *)(v4 + 40);
    *(_QWORD *)(v4 + 40) = v17;
    if ( v17 > 0x40 )
    {
      sub_403200(v15, v17 & 0xFFFFFFFFFFFFFFC0LL, v4);
      v23 = (char *)(v15 + ((v16 + v6) & 0xFFFFFFFFFFFFFFC0LL));
      v24 = *(_QWORD *)(v4 + 40) & 0x3FLL;
      *(_QWORD *)(v4 + 40) = v24;
      if ( (unsigned int)v24 >= 8 )
      {
        v25 = (v4 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)(v4 + 48) = *(_QWORD *)v23;
        *(_QWORD *)(v15 + (unsigned int)v24 - 8) = *(_QWORD *)&v23[(unsigned int)v24 - 8];
        v26 = &v23[-(v15 - v25)];
        if ( (((_DWORD)v24 + (_DWORD)v15 - (_DWORD)v25) & 0xFFFFFFF8) >= 8 )
        {
          v27 = (v24 + v15 - v25) & 0xFFFFFFF8;
          v28 = 0;
          do
          {
            v29 = v28;
            v28 += 8;
            *(_QWORD *)(v25 + v29) = *(_QWORD *)&v26[v29];
          }
          while ( v28 < v27 );
        }
      }
      else if ( v24 & 4 )
      {
        *(_DWORD *)(v4 + 48) = *(_DWORD *)v23;
        *(_DWORD *)(v15 + (unsigned int)v24 - 4) = *(_DWORD *)&v23[(unsigned int)v24 - 4];
      }
      else if ( (_DWORD)v24 )
      {
        *(_BYTE *)(v4 + 48) = *v23;
        if ( v24 & 2 )
          *(_WORD *)(v15 + (unsigned int)v24 - 2) = *(_WORD *)&v23[(unsigned int)v24 - 2];
      }
    }
    v5 = (const __m128i *)((char *)v5 + v16);
    v3 -= v16;
  }
  if ( v3 > 0x3F )
  {
    if ( (unsigned __int8)v5 & 3 )
    {
      v7 = (char *)(v4 + 48);
      if ( v3 == 64 )
      {
        v8 = v5;
      }
      else
      {
        v8 = &v5[4 * (((v3 - 65) >> 6) + 1)];
        do
        {
          v9 = _mm_loadu_si128(v5);
          v5 += 4;
          *(__m128i *)v7 = v9;
          *(__m128i *)(v4 + 64) = _mm_loadu_si128(v5 - 3);
          *(__m128i *)(v4 + 80) = _mm_loadu_si128(v5 - 2);
          *(__m128i *)(v4 + 96) = _mm_loadu_si128(v5 - 1);
          sub_403200(v4 + 48, 64LL, v4);
        }
        while ( v5 != v8 );
        v3 = v3 + -64LL * ((v3 - 65) >> 6) - 64;
      }
      goto LABEL_8;
    }
    v13 = v3;
    v14 = (unsigned __int64)v5;
    v3 &= 0x3Fu;
    v5 = (const __m128i *)((char *)v5 + (v13 & 0xFFFFFFFFFFFFFFC0LL));
    sub_403200(v14, v13 & 0xFFFFFFFFFFFFFFC0LL, v4);
  }
  if ( !v3 )
    return;
  v7 = (char *)(v4 + 48);
  v8 = v5;
LABEL_8:
  v10 = *(_QWORD *)(v4 + 40);
  v11 = &v7[v10];
  if ( (unsigned int)v3 >= 8 )
  {
    v18 = (unsigned __int64)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v11 = v8->m128i_i64[0];
    *(_QWORD *)&v11[(unsigned int)v3 - 8] = *(__int64 *)((char *)&v8->m128i_i64[-1] + (unsigned int)v3);
    v19 = (char *)v8 - &v11[-v18];
    if ( (((_DWORD)v3 + (_DWORD)v11 - (_DWORD)v18) & 0xFFFFFFF8) >= 8 )
    {
      v20 = (v3 + (_DWORD)v11 - v18) & 0xFFFFFFF8;
      v21 = 0;
      do
      {
        v22 = v21;
        v21 += 8;
        *(_QWORD *)(v18 + v22) = *(_QWORD *)(v19 + v22);
      }
      while ( v21 < v20 );
    }
  }
  else if ( v3 & 4 )
  {
    *(_DWORD *)v11 = v8->m128i_i64[0];
    *(_DWORD *)&v11[(unsigned int)v3 - 4] = *(_DWORD *)((char *)&v8->m128i_i64[0] + (unsigned int)v3 - 4);
  }
  else if ( (_DWORD)v3 )
  {
    *v11 = v8->m128i_i64[0];
    if ( v3 & 2 )
      *(_WORD *)&v11[(unsigned int)v3 - 2] = *(_WORD *)((char *)&v8->m128i_i64[0] + (unsigned int)v3 - 2);
  }
  v12 = v10 + v3;
  if ( v12 > 0x3F )
  {
    v12 -= 64LL;
    sub_403200((unsigned __int64)v7, 64LL, v4);
    memcpy(v7, (const void *)(v4 + 112), v12);
  }
  *(_QWORD *)(v4 + 40) = v12;
}

__int64 __fastcall sub_405EC0(FILE *stream, __int64 a2)
{
  char *v2; // rax@1
  char *v3; // r12@2
  size_t v4; // rbx@3
  int v5; // edx@4
  size_t v6; // rax@6
  __int64 result; // rax@11
  __int64 v8; // [sp+0h] [bp-D8h]@2
  __int64 v9; // [sp+8h] [bp-D0h]@2
  __int64 v10; // [sp+10h] [bp-C8h]@2
  __int64 v11; // [sp+18h] [bp-C0h]@2
  __int64 v12; // [sp+20h] [bp-B8h]@2
  __int64 v13; // [sp+28h] [bp-B0h]@2

  v2 = (char *)malloc(0x8048uLL);
  if ( v2 )
  {
    v12 = 0LL;
    v3 = v2;
    v8 = -4942790177982912921LL;
    v9 = -6534734903820487822LL;
    v10 = -7276294671082564993LL;
    v11 = 6620516960021240235LL;
    v13 = 0LL;
LABEL_3:
    v4 = 0LL;
    while ( 1 )
    {
      v6 = fread_unlocked(&v3[v4], 1uLL, 0x8000 - v4, stream);
      v4 += v6;
      if ( v4 == 0x8000 )
      {
        sub_403200((unsigned __int64)v3, 0x8000LL, (__int64)&v8);
        goto LABEL_3;
      }
      v5 = stream->_flags;
      if ( !v6 )
        break;
      if ( v5 & 0x10 )
        goto LABEL_9;
    }
    if ( v5 & 0x20 )
    {
      free(v3);
      return 1LL;
    }
LABEL_9:
    if ( v4 )
      sub_405AC0(v3, v4, (__int64)&v8);
    sub_405990((__int64)&v8);
    sub_4031C0((__int64)&v8, a2);
    free(v3);
    result = 0LL;
  }
  else
  {
    result = 1LL;
  }
  return result;
}

void __fastcall sub_406190(FILE *a1, int a2)
{
  int v2; // eax@2

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

FILE *__fastcall sub_4061C0(const char *a1, const char *a2)
{
  FILE *v2; // rax@1
  FILE *v3; // rbx@1
  int v4; // eax@2
  int v6; // er12@4
  int *v7; // rax@7
  int v8; // ebp@7
  int *v9; // rbx@7
  int *v10; // rax@8
  FILE *v11; // rdi@8
  int v12; // er12@8
  int *v13; // rbp@8

  v2 = fopen(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = fileno(v2);
    if ( (unsigned int)v4 <= 2 )
    {
      v6 = sub_407EA0((unsigned int)v4);
      if ( v6 < 0 )
      {
        v10 = __errno_location();
        v11 = v3;
        v3 = 0LL;
        v12 = *v10;
        v13 = v10;
        sub_4086E0(v11);
        *v13 = v12;
      }
      else if ( (unsigned int)sub_4086E0(v3) || (v3 = fdopen(v6, a2)) == 0LL )
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

char *__fastcall sub_406260(const char *a1)
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
  qword_60E308 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_406300(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_409850(0LL);
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
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_406400(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        s2 = "\"";
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
        s2 = "\"";
      }
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_406300("`", v11);
        v58 = sub_406300("'", v11);
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
      s2 = "\"";
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
            return sub_406400((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_406400((__int64)v9, v79, s);
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
                return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
          return sub_406400((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_406400((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_409710((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_406400((__int64)v9, v10, s);
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
      return sub_406400((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_406400(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        s2 = "\"";
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
        s2 = "\"";
      }
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_406300("`", v11);
        v58 = sub_406300("'", v11);
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
      s2 = "\"";
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
            return sub_406400((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_406400((__int64)v9, v79, s);
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
                return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
          return sub_406400((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_406400((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_409710((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_406400((__int64)v9, v10, s);
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
      return sub_406400((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_407630(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60E278;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60E290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_4086A0();
    v9 = 16LL * (a1 + 1);
    if ( off_60E278 == &xmmword_60E280 )
    {
      LODWORD(v20) = sub_4084B0(0LL, v9);
      v7 = v20;
      off_60E278 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E280);
    }
    else
    {
      LODWORD(v10) = sub_4084B0(off_60E278, v9);
      off_60E278 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60E290], 0, 16LL * (a1 + 1 - dword_60E290));
    dword_60E290 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_406400(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60E320 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_408450(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_406400(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_407630(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60E278;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60E290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_4086A0();
    v9 = 16LL * (a1 + 1);
    if ( off_60E278 == &xmmword_60E280 )
    {
      LODWORD(v20) = sub_4084B0(0LL, v9);
      v7 = v20;
      off_60E278 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E280);
    }
    else
    {
      LODWORD(v10) = sub_4084B0(off_60E278, v9);
      off_60E278 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60E290], 0, 16LL * (a1 + 1 - dword_60E290));
    dword_60E290 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_406400(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60E320 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_408450(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_406400(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_407C50(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_60E450;
  v4 = _mm_load_si128((const __m128i *)&xmmword_60E420);
  v5 = _mm_load_si128((const __m128i *)&xmmword_60E430);
  v6 = _mm_load_si128((const __m128i *)&xmmword_60E440);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_407630(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_407CD0(char *a1)
{
  return sub_407C50(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_407D00(int a1, int a2, char *a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407D00(int a1, int a2, char *a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

__int64 __fastcall sub_407EA0(char a1)
{
  return sub_408760(a1);
}

int __fastcall sub_407EB0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_407EB0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_408310(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_407EB0(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_407EB0(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_408450(size_t a1)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_4086A0();
  }
  return result;
}

void *__fastcall sub_4084B0(void *a1, size_t a2)
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
        sub_4086A0();
    }
  }
  return result;
}

void *__fastcall sub_408650(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_408450(a2);
  return memcpy(v2, a1, a2);
}

void __noreturn sub_4086A0()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_4086E0(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_4088A0(stream) )
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

__int64 __fastcall sub_408760(char a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx@3
  int v6; // eax@8
  int *v7; // rax@10
  int v8; // edi@10
  int v9; // er12@10
  int *v10; // rbp@10
  __int64 v11; // [sp+30h] [bp-38h]@1
  __int64 v12; // [sp+38h] [bp-30h]@1

  v11 = a3;
  v12 = a4;
  if ( a2 == 1030 )
  {
    if ( dword_60E458 < 0 )
    {
      v4 = sub_408760(a1);
      if ( v4 >= 0 && dword_60E458 == -1 )
      {
LABEL_8:
        v6 = fcntl((unsigned __int8)v4, 1);
        if ( v6 < 0 || fcntl((unsigned __int8)v4, 2, v6 | 1u) == -1 )
        {
          v7 = __errno_location();
          v8 = v4;
          v4 = -1;
          v9 = *v7;
          v10 = v7;
          close(v8);
          *v10 = v9;
        }
        return (unsigned int)v4;
      }
    }
    else
    {
      v4 = fcntl(a1, 1030, (unsigned int)v11);
      if ( v4 >= 0 || *__errno_location() != 22 )
      {
        dword_60E458 = 1;
      }
      else
      {
        v4 = sub_408760(a1);
        if ( v4 >= 0 )
        {
          dword_60E458 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

int __fastcall sub_4088A0(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_4088E0(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_4088E0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_408940(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_408A20(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_409040(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
  const char *v20; // rdi@18
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
        sub_408940(a2, a7);
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
    v20 = "--";
    v21 = v11[v16];
    v22 = (_BYTE *)v11[v16];
    do
    {
      if ( !v19 )
        break;
      v17 = *v22 < (const unsigned __int8)*v20;
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
        sub_408940((__int64)v11, a7);
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
            v40 = sub_408A20(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_408A20(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_408A20(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_409610(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_60E460 = dword_60E29C;
  dword_60E464 = dword_60E298;
  result = sub_409040(a1, a2, a3, a4, a5, a6, (__int64)&dword_60E460, a7);
  dword_60E29C = dword_60E460;
  qword_60E4A0 = qword_60E470;
  dword_60E294 = dword_60E468;
  return result;
}

__int64 __fastcall sub_409690(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_409610(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_409710(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_4097F0(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

int __fastcall sub_409790(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  int result; // eax@1

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_4086E0(stream);
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

bool __fastcall sub_4097F0(int a1)
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

const char *sub_409850()
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
                sub_4086E0(v61);
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
            sub_4086E0(v40);
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

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_409E30(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_60E208 )
    v1 = unk_60E208;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409E48(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_60DE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
