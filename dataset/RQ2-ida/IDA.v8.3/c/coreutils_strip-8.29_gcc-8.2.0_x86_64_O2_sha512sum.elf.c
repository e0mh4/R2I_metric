__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  char v3; // r14
  char *v4; // r13
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbp
  char *v7; // rbx
  int v8; // eax
  const char *v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // eax
  char *v12; // rax
  __int64 v13; // rbx
  __ssize_t v14; // rax
  __ssize_t v15; // r8
  char *v16; // r15
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // r10
  bool v20; // cf
  bool v21; // zf
  const char *v22; // rdi
  __int64 v23; // rcx
  const char *v24; // rsi
  char v25; // al
  char *v26; // rax
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rax
  char v30; // si
  const char *v31; // r15
  bool v32; // cf
  bool v33; // zf
  char *v34; // rdi
  const char *v35; // rsi
  _BOOL8 v36; // r14
  unsigned int v37; // eax
  char *v38; // rax
  const char *v39; // rsi
  char *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // ebx
  char v44; // al
  __int64 v45; // r15
  char *v46; // rax
  const __int32_t **v47; // rax
  unsigned __int64 v48; // rdx
  const __int32_t *v49; // rdi
  char *v50; // rax
  const char *v52; // r11
  const char *v53; // rdx
  const char *v54; // rbx
  int *v55; // rax
  char *v56; // rax
  unsigned int v57; // ebx
  __int64 v58; // rdx
  char *v59; // rax
  char *v60; // rax
  char *v61; // rax
  char v62; // dl
  const char *v63; // rax
  const char *v64; // rax
  char v65; // dl
  char v66; // al
  char *v67; // rax
  __int64 v68; // rbx
  char *v69; // rax
  __int64 v70; // rax
  int *v71; // rax
  char *v72; // rax
  char *v73; // rax
  char *v74; // rax
  char *v75; // rax
  char *v76; // rax
  char *IO_write_ptr; // rax
  const char **v78; // [rsp+0h] [rbp-148h]
  char *s; // [rsp+8h] [rbp-140h]
  char v80; // [rsp+13h] [rbp-135h]
  int v81; // [rsp+14h] [rbp-134h]
  unsigned __int64 v82; // [rsp+18h] [rbp-130h]
  __ssize_t v83; // [rsp+20h] [rbp-128h]
  unsigned __int8 v84; // [rsp+20h] [rbp-128h]
  unsigned __int64 v85; // [rsp+20h] [rbp-128h]
  unsigned __int8 v86; // [rsp+20h] [rbp-128h]
  const char *v87; // [rsp+20h] [rbp-128h]
  unsigned __int64 v88; // [rsp+20h] [rbp-128h]
  char v89; // [rsp+28h] [rbp-120h]
  unsigned __int64 v90; // [rsp+28h] [rbp-120h]
  unsigned __int64 v91; // [rsp+28h] [rbp-120h]
  unsigned __int64 v92; // [rsp+28h] [rbp-120h]
  __int64 v93; // [rsp+30h] [rbp-118h]
  const char **v94; // [rsp+38h] [rbp-110h]
  unsigned __int64 v95; // [rsp+40h] [rbp-108h]
  char v96; // [rsp+48h] [rbp-100h]
  char v97; // [rsp+49h] [rbp-FFh]
  char v98; // [rsp+4Ah] [rbp-FEh]
  char v99; // [rsp+4Bh] [rbp-FDh]
  int v100; // [rsp+4Ch] [rbp-FCh]
  char v101; // [rsp+5Fh] [rbp-E9h] BYREF
  char *lineptr; // [rsp+60h] [rbp-E8h] BYREF
  size_t n; // [rsp+68h] [rbp-E0h] BYREF
  char v104[80]; // [rsp+70h] [rbp-D8h] BYREF
  char v105[136]; // [rsp+C0h] [rbp-88h] BYREF

  v3 = 0;
  LOBYTE(v4) = 0;
  LODWORD(v5) = -1;
  LODWORD(v6) = a1;
  v7 = (char *)a2;
  sub_407930(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40B500(sub_403080);
  setvbuf(stdout, 0LL, 1, 0LL);
  while ( 1 )
  {
    v8 = sub_40AD60(a1, a2, "bctw", &off_40C0C0, 0LL);
    if ( v8 == -1 )
      break;
    if ( v8 == 119 )
    {
      byte_60F2DC = 0;
      byte_60F2DB = 1;
      byte_60F2D9 = 0;
    }
    else if ( v8 <= 119 )
    {
      if ( v8 == 98 )
        goto LABEL_15;
      if ( v8 <= 98 )
      {
        if ( v8 == -131 )
        {
          sub_4099E0(
            (_DWORD)stdout,
            (unsigned int)"sha512sum",
            (unsigned int)&unk_40B5F2,
            (_DWORD)off_60F218,
            (unsigned int)"Ulrich Drepper",
            (unsigned int)"Scott Miller",
            "David Madore",
            0LL);
          exit(0);
        }
        if ( v8 == -130 )
          sub_402C90(0);
LABEL_203:
        sub_402C90(1);
      }
      if ( v8 == 99 )
      {
        LOBYTE(v4) = 1;
      }
      else
      {
        if ( v8 != 116 )
          goto LABEL_203;
        LODWORD(v5) = 0;
      }
    }
    else if ( v8 == 130 )
    {
      byte_60F2DC = 0;
      byte_60F2DB = 0;
      byte_60F2D9 = 1;
    }
    else if ( v8 > 130 )
    {
      if ( v8 == 131 )
      {
        byte_60F2D8 = 1;
      }
      else
      {
        if ( v8 != 132 )
          goto LABEL_203;
        v3 = 1;
LABEL_15:
        LODWORD(v5) = 1;
      }
    }
    else if ( v8 == 128 )
    {
      byte_60F2DA = 1;
    }
    else
    {
      if ( v8 != 129 )
        goto LABEL_203;
      byte_60F2DC = 1;
      byte_60F2DB = 0;
      byte_60F2D9 = 0;
    }
  }
  qword_60F2E8 = 130LL;
  qword_60F2E0 = 128LL;
  if ( !(_DWORD)v5 && v3 )
  {
    v9 = "--tag does not support --text mode";
    goto LABEL_202;
  }
  if ( (_BYTE)v4 )
  {
    v9 = "the --tag option is meaningless when verifying checksums";
    if ( v3 )
      goto LABEL_202;
  }
  v9 = "the --binary and --text options are meaningless when verifying checksums";
  if ( (((v5 & 0x80000000) == 0LL) & (unsigned __int8)v4) != 0 )
    goto LABEL_202;
  if ( byte_60F2DA )
    goto LABEL_70;
  if ( !byte_60F2DC )
  {
    if ( !byte_60F2DB )
      goto LABEL_200;
    v9 = "the --warn option is meaningful only when verifying checksums";
    if ( (_BYTE)v4 )
      goto LABEL_39;
    goto LABEL_202;
  }
  v9 = "the --status option is meaningful only when verifying checksums";
  if ( !(_BYTE)v4 )
  {
LABEL_202:
    v72 = dcgettext(0LL, v9, 5);
    error(0, 0, v72);
    goto LABEL_203;
  }
LABEL_36:
  if ( !byte_60F2DB )
    goto LABEL_37;
  while ( 1 )
  {
LABEL_39:
    if ( (_DWORD)v5 == -1 )
      LODWORD(v5) = 0;
    v94 = (const char **)&v7[8 * (int)v6];
    v10 = dword_60F29C;
    if ( dword_60F29C == (_DWORD)v6 )
      *v94++ = "-";
    v78 = (const char **)&v7[8 * v10];
    if ( v94 <= v78 )
    {
      v96 = 1;
      goto LABEL_129;
    }
    v96 = 1;
    v80 = (char)v4;
    v11 = (_DWORD)v5 == 0 ? 0xFFFFFFF6 : 0;
    v98 = v3;
    v100 = v11 + 42;
    v99 = v11 + 42;
    do
    {
      s = (char *)*v78;
      if ( !v80 )
      {
        if ( !(unsigned __int8)sub_402AF0(s, v104, v105) )
        {
          v96 = 0;
          goto LABEL_128;
        }
        if ( strchr(s, 92) || strchr(s, 10) )
        {
          if ( v98 )
          {
            IO_write_ptr = stdout->_IO_write_ptr;
            v57 = 1;
            if ( stdout->_IO_write_end <= IO_write_ptr )
            {
              __overflow(stdout, 92);
            }
            else
            {
              stdout->_IO_write_ptr = IO_write_ptr + 1;
              *IO_write_ptr = 92;
            }
LABEL_196:
            fwrite_unlocked("SHA512", 1uLL, 6uLL, stdout);
            fwrite_unlocked(" (", 1uLL, 2uLL, stdout);
            sub_402A40(s, v57);
            fwrite_unlocked(") = ", 1uLL, 4uLL, stdout);
            if ( !((unsigned __int64)qword_60F2E0 >> 1) )
              goto LABEL_152;
            goto LABEL_150;
          }
          v56 = stdout->_IO_write_ptr;
          if ( v56 >= stdout->_IO_write_end )
          {
            __overflow(stdout, 92);
          }
          else
          {
            stdout->_IO_write_ptr = v56 + 1;
            *v56 = 92;
          }
          v57 = 1;
          if ( !((unsigned __int64)qword_60F2E0 >> 1) )
            goto LABEL_156;
        }
        else
        {
          v57 = 0;
          if ( v98 )
            goto LABEL_196;
          if ( !((unsigned __int64)qword_60F2E0 >> 1) )
            goto LABEL_156;
        }
LABEL_150:
        v6 = 0LL;
        do
        {
          v58 = (unsigned __int8)v104[v6++];
          __printf_chk(1LL, "%02x", v58);
        }
        while ( (unsigned __int64)qword_60F2E0 >> 1 > v6 );
LABEL_152:
        if ( v98 )
        {
LABEL_153:
          v59 = stdout->_IO_write_ptr;
          if ( v59 >= stdout->_IO_write_end )
          {
            __overflow(stdout, 10);
          }
          else
          {
            stdout->_IO_write_ptr = v59 + 1;
            *v59 = 10;
          }
          goto LABEL_128;
        }
LABEL_156:
        v60 = stdout->_IO_write_ptr;
        if ( v60 >= stdout->_IO_write_end )
        {
          __overflow(stdout, 32);
        }
        else
        {
          stdout->_IO_write_ptr = v60 + 1;
          *v60 = 32;
        }
        v61 = stdout->_IO_write_ptr;
        if ( v61 >= stdout->_IO_write_end )
        {
          __overflow(stdout, v100);
        }
        else
        {
          stdout->_IO_write_ptr = v61 + 1;
          *v61 = v99;
        }
        sub_402A40(s, v57);
        goto LABEL_153;
      }
      v81 = strcmp(*v78, "-");
      if ( v81 )
      {
        v6 = sub_407890(s, 4240911LL);
        if ( !v6 )
          goto LABEL_140;
      }
      else
      {
        byte_60F2F0 = 1;
        v12 = dcgettext(0LL, "standard input", 5);
        v6 = (unsigned __int64)stdin;
        s = v12;
      }
      v97 = 0;
      v3 = 0;
      v5 = 0LL;
      v13 = 1LL;
      lineptr = 0LL;
      n = 0LL;
      v95 = 0LL;
      v82 = 0LL;
      while ( 1 )
      {
        v14 = __getdelim(&lineptr, &n, 10, (FILE *)v6);
        if ( v14 <= 0 )
          break;
        v16 = lineptr;
        v17 = (unsigned __int8)*lineptr;
        if ( (_BYTE)v17 == 35 )
          goto LABEL_67;
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
LABEL_54:
          LOBYTE(v17) = v16[++v18];
        if ( (_BYTE)v17 == 9 )
          goto LABEL_54;
        v19 = 0;
        v20 = (unsigned __int8)v17 < 0x5Cu;
        v21 = (_BYTE)v17 == 92;
        if ( (_BYTE)v17 == 92 )
        {
          v19 = v80;
          v20 = __CFADD__(v18, 1LL);
          v21 = v18++ == -1;
        }
        v4 = &v16[v18];
        v22 = "SHA512";
        v23 = 6LL;
        v24 = &v16[v18];
        do
        {
          if ( !v23 )
            break;
          v20 = *v24 < (unsigned int)*v22;
          v21 = *v24++ == *v22++;
          --v23;
        }
        while ( v21 );
        if ( (!v20 && !v21) == v20 )
        {
          v25 = v16[v18 + 6];
          v17 = v18 + 6;
          if ( v25 == 32 )
          {
            v25 = v16[v18 + 7];
            v17 = v18 + 7;
          }
          if ( v25 != 40 || (++v17, (v15 -= v17) == 0) )
          {
LABEL_65:
            ++v5;
            if ( byte_60F2DB )
            {
              v45 = sub_4093D0(0LL, 3LL, s, v17, v15);
              v46 = dcgettext(0LL, "%s: %lu: improperly formatted %s checksum line", 5);
              error(0, 0, v46, v45, v13, "SHA512");
            }
LABEL_67:
            if ( (*(_BYTE *)v6 & 0x30) != 0 )
              break;
            goto LABEL_68;
          }
          v31 = &v16[v17];
          v52 = (const char *)(v15 - 1);
          if ( v15 != 1 )
          {
            if ( v31[v15 - 1] == 41 )
            {
LABEL_161:
              v53 = &v52[(_QWORD)v31];
LABEL_162:
              if ( v19 )
              {
                v24 = v52;
                v87 = v53;
                v70 = sub_4029B0(v31, v52);
                v53 = v87;
                if ( !v70 )
                  goto LABEL_65;
              }
              *v53 = 0;
              v62 = v52[(_QWORD)v31 + 1];
              v63 = v52 + 1;
              if ( v62 == 9 || v62 == 32 )
              {
                do
                {
                  do
                    v62 = (++v63)[(_QWORD)v31];
                  while ( v62 == 32 );
                }
                while ( v62 == 9 );
              }
              if ( v62 != 61 )
                goto LABEL_65;
              v4 = (char *)&v63[(_QWORD)v31 + 1];
              if ( *v4 == 32 || *v4 == 9 )
              {
                v64 = &v63[(_QWORD)v31 + 2];
                do
                {
                  do
                  {
                    v65 = *v64;
                    v4 = (char *)v64++;
                  }
                  while ( v65 == 32 );
                }
                while ( v65 == 9 );
              }
              v66 = sub_402950(v4, v24);
              goto LABEL_174;
            }
            while ( --v52 )
            {
              if ( v52[(_QWORD)v31] == 41 )
                goto LABEL_161;
            }
          }
          if ( *v31 != 41 )
            goto LABEL_65;
          v53 = v31;
          v52 = 0LL;
          goto LABEL_162;
        }
        v17 = v15 - v18;
        if ( v15 - v18 < qword_60F2E8 + (unsigned __int64)(*v4 == 92) )
          goto LABEL_65;
        v27 = qword_60F2E0 + v18;
        v17 = (unsigned __int64)&v16[v27];
        v28 = v16[v27];
        if ( v28 != 32 && v28 != 9 )
          goto LABEL_65;
        *(_BYTE *)v17 = 0;
        v93 = v27;
        v89 = v19;
        v83 = v15;
        if ( !(unsigned __int8)sub_402950(v4, v24) )
          goto LABEL_65;
        v15 = v83;
        v17 = (unsigned int)dword_60F210;
        v29 = v93 + 1;
        if ( v83 - (v93 + 1) != 1 && ((v30 = v16[v93 + 1], v30 == 32) || v30 == 42) )
        {
          if ( dword_60F210 != 1 )
          {
            dword_60F210 = 0;
            v29 = v93 + 2;
          }
        }
        else
        {
          if ( !dword_60F210 )
            goto LABEL_65;
          dword_60F210 = 1;
        }
        v31 = &v16[v29];
        if ( v89 )
        {
          v66 = sub_4029B0(v31, v83 - v29) != 0;
LABEL_174:
          if ( !v66 )
            goto LABEL_65;
        }
        v32 = 0;
        v33 = v81 == 0;
        if ( !v81 )
        {
          v34 = "-";
          v17 = 2LL;
          v35 = v31;
          do
          {
            if ( !v17 )
              break;
            v32 = (unsigned int)*v35 < (unsigned __int8)*v34;
            v33 = *v35++ == (unsigned __int8)*v34++;
            --v17;
          }
          while ( v33 );
          if ( (!v32 && !v33) == v32 )
            goto LABEL_65;
        }
        LODWORD(v36) = 0;
        if ( !byte_60F2DC )
          v36 = strchr(v31, 10) != 0LL;
        v37 = sub_402AF0(v31, v105, &v101);
        v15 = v37;
        if ( !(_BYTE)v37 )
        {
          ++v82;
          if ( byte_60F2DC )
            goto LABEL_96;
          if ( v36 )
          {
            v38 = stdout->_IO_write_ptr;
            if ( v38 >= stdout->_IO_write_end )
            {
              __overflow(stdout, 92);
            }
            else
            {
              stdout->_IO_write_ptr = v38 + 1;
              *v38 = 92;
            }
          }
          sub_402A40(v31, v36);
          v39 = "FAILED open or read";
          goto LABEL_95;
        }
        if ( byte_60F2DA && v101 )
          goto LABEL_96;
        v17 = (unsigned __int64)qword_60F2E0 >> 1;
        if ( (unsigned __int64)qword_60F2E0 >> 1 )
        {
          v90 = (unsigned __int64)qword_60F2E0 >> 1;
          v84 = v37;
          v47 = __ctype_tolower_loc();
          v48 = 0LL;
          v15 = v84;
          v17 = v90;
          v49 = *v47;
          while ( v49[(unsigned __int8)v4[2 * v48]] == byte_40C0A0[((unsigned __int8)v105[v48] >> 4) & 0xF]
               && v49[(unsigned __int8)v4[2 * v48 + 1]] == byte_40C0A0[v105[v48] & 0xF] )
          {
            if ( v90 == ++v48 )
            {
              v48 = v90;
              goto LABEL_179;
            }
          }
          ++v95;
          if ( byte_60F2DC )
            goto LABEL_96;
          if ( v36 )
          {
LABEL_122:
            v50 = stdout->_IO_write_ptr;
            if ( v50 >= stdout->_IO_write_end )
            {
              v92 = v48;
              v88 = v17;
              __overflow(stdout, 92);
              v17 = v88;
              v48 = v92;
            }
            else
            {
              stdout->_IO_write_ptr = v50 + 1;
              *v50 = 92;
            }
          }
          v91 = v48;
          v85 = v17;
          sub_402A40(v31, v36);
          v17 = v85;
          if ( v85 != v91 )
          {
            v39 = "FAILED";
LABEL_95:
            v40 = dcgettext(0LL, v39, 5);
            __printf_chk(1LL, ": %s\n", v40);
            goto LABEL_96;
          }
          goto LABEL_187;
        }
        v48 = 0LL;
LABEL_179:
        v97 = byte_60F2DC;
        if ( byte_60F2DC )
          goto LABEL_96;
        v97 = byte_60F2D9;
        if ( byte_60F2D9 )
          goto LABEL_96;
        if ( v36 )
        {
          v97 = v15;
          goto LABEL_122;
        }
        v86 = v15;
        sub_402A40(v31, 0LL);
        v15 = v86;
        v97 = v86;
LABEL_187:
        if ( !byte_60F2D9 )
        {
          v39 = "OK";
          goto LABEL_95;
        }
LABEL_96:
        v3 = v80;
        if ( (*(_BYTE *)v6 & 0x30) != 0 )
          break;
LABEL_68:
        if ( !++v13 )
        {
          v7 = (char *)sub_4093D0(0LL, 3LL, s, v17, v15);
          v26 = dcgettext(0LL, "%s: too many checksum lines", 5);
          error(1, 0, v26, v7);
LABEL_70:
          v9 = "the --ignore-missing option is meaningful only when verifying checksums";
          if ( !(_BYTE)v4 )
            goto LABEL_202;
          goto LABEL_36;
        }
      }
      free(lineptr);
      v43 = *(_DWORD *)v6 & 0x20;
      if ( v43 )
      {
        v68 = sub_4093D0(0LL, 3LL, s, v41, v42);
        v69 = dcgettext(0LL, "%s: read error", 5);
        error(0, 0, v69, v68);
        v44 = 0;
        goto LABEL_112;
      }
      if ( !v81 || !(unsigned int)sub_409DB0((FILE *)v6) )
      {
        if ( v3 )
        {
          if ( byte_60F2DC )
            goto LABEL_143;
          if ( v5 )
          {
            v76 = dcngettext(
                    0LL,
                    "WARNING: %lu line is improperly formatted",
                    "WARNING: %lu lines are improperly formatted",
                    v5,
                    5);
            error(0, 0, v76, v5);
          }
          if ( v82 )
          {
            v3 = v82;
            v75 = dcngettext(
                    0LL,
                    "WARNING: %lu listed file could not be read",
                    "WARNING: %lu listed files could not be read",
                    v82,
                    5);
            error(0, 0, v75, v82);
          }
          if ( v95 )
          {
            v3 = v95;
            v74 = dcngettext(
                    0LL,
                    "WARNING: %lu computed checksum did NOT match",
                    "WARNING: %lu computed checksums did NOT match",
                    v95,
                    5);
            error(0, 0, v74, v95);
          }
          if ( !byte_60F2DA )
          {
LABEL_143:
            if ( v97 )
              goto LABEL_109;
          }
          else if ( v97 )
          {
LABEL_109:
            if ( !(v95 | v82) )
              LOBYTE(v43) = (v5 == 0) | byte_60F2D8 ^ 1;
          }
          else
          {
            v6 = sub_4093D0(0LL, 3LL, s, v41, v42);
            v73 = dcgettext(0LL, "%s: no file was verified", 5);
            error(0, 0, v73, v6);
          }
        }
        else
        {
          v6 = sub_4093D0(0LL, 3LL, s, v41, v42);
          v67 = dcgettext(0LL, "%s: no properly formatted %s checksum lines found", 5);
          error(0, 0, v67, v6, "SHA512");
        }
        v44 = v43 & 1;
        goto LABEL_112;
      }
LABEL_140:
      v54 = (const char *)sub_4093D0(0LL, 3LL, s, v41, v42);
      v55 = __errno_location();
      error(0, *v55, "%s", v54);
      v44 = 0;
LABEL_112:
      v96 &= v44;
LABEL_128:
      ++v78;
    }
    while ( v94 > v78 );
LABEL_129:
    if ( !byte_60F2F0 || (unsigned int)sub_409DB0(stdin) != -1 )
      return (unsigned __int8)v96 ^ 1u;
    v7 = dcgettext(0LL, "standard input", 5);
    v71 = __errno_location();
    error(1, *v71, v7);
LABEL_200:
    if ( byte_60F2D9 == 1 )
    {
      v9 = "the --quiet option is meaningful only when verifying checksums";
      if ( !(_BYTE)v4 )
        goto LABEL_202;
    }
LABEL_37:
    if ( byte_60F2D8 )
    {
      v9 = "the --strict option is meaningful only when verifying checksums";
      if ( !(_BYTE)v4 )
        goto LABEL_202;
    }
  }
}

// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void))
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

__int64 *sub_40289B()
{
  return &program_invocation_short_name;
}

__int64 sub_4028BA()
{
  return 0LL;
}

__int64 *sub_4028F1()
{
  __int64 *result; // rax

  if ( !byte_60F2C8 )
  {
    while ( qword_60F2D0 < (unsigned __int64)(&qword_60EE48 - qword_60EE40 - 1) )
      ((void (*)(void))qword_60EE40[++qword_60F2D0])();
    result = sub_40289B();
    byte_60F2C8 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_402948()
{
  return sub_4028BA();
}

bool __fastcall sub_402950(_BYTE *a1)
{
  unsigned __int64 v2; // rbp
  const unsigned __int16 *v3; // rcx
  unsigned __int64 v4; // rax

  v2 = qword_60F2E0;
  if ( !qword_60F2E0 )
    return *a1 == 0;
  v3 = *__ctype_b_loc();
  LODWORD(v4) = 0;
  while ( (v3[(unsigned __int8)*a1] & 0x1000) != 0 )
  {
    ++a1;
    v4 = (unsigned int)(v4 + 1);
    if ( v4 >= v2 )
      return *a1 == 0;
  }
  return 0;
}

__int64 __fastcall sub_4029B0(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v2; // rax
  unsigned __int64 v3; // rdx
  char v4; // cl
  char v5; // cl
  _BYTE *v7; // r9

  v2 = (_BYTE *)(a1 + 1);
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
        ++v3;
        v5 = *(_BYTE *)(a1 + v3);
        if ( v5 == 92 )
        {
          v7 = v2;
          *(v2 - 1) = 92;
        }
        else
        {
          if ( v5 != 110 )
            return 0LL;
          v7 = v2;
          *(v2 - 1) = 10;
        }
      }
      else
      {
        *(v2 - 1) = v4;
        v7 = v2;
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
  const char *v2; // rbx
  char *IO_write_ptr; // rax
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
        fwrite_unlocked(&unk_40B564, 1uLL, 2uLL, stdout);
      }
      else if ( (_BYTE)v4 == 92 )
      {
        fwrite_unlocked(&unk_40B567, 1uLL, 2uLL, stdout);
      }
      else
      {
        IO_write_ptr = stdout->_IO_write_ptr;
        if ( IO_write_ptr >= stdout->_IO_write_end )
        {
          __overflow(stdout, v4);
        }
        else
        {
          stdout->_IO_write_ptr = IO_write_ptr + 1;
          *IO_write_ptr = v4;
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

__int64 __fastcall sub_402AF0(const char *a1, __int64 a2, _BYTE *a3)
{
  FILE *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r12d
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  const char *v12; // rbx
  int *v13; // rax
  const char *v14; // rbp
  int *v15; // rax
  int *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int *v19; // rbx
  const char *v20; // rax

  *a3 = 0;
  if ( !strcmp(a1, "-") )
  {
    v3 = stdin;
    byte_60F2F0 = 1;
    sub_407860(stdin, 2LL);
    if ( !(unsigned int)sub_407510(v3) )
      return 1;
LABEL_9:
    v6 = 0;
    v14 = (const char *)sub_4093D0(0LL, 3LL, a1, v4, v5);
    v15 = __errno_location();
    error(0, *v15, "%s", v14);
    if ( stdin != v3 )
      sub_409DB0(v3);
    return v6;
  }
  v9 = sub_407890(a1, 4240911LL);
  v3 = (FILE *)v9;
  if ( v9 )
  {
    sub_407860(v9, 2LL);
    if ( !(unsigned int)sub_407510(v3) )
    {
      if ( (unsigned int)sub_409DB0(v3) )
      {
        v6 = 0;
        v12 = (const char *)sub_4093D0(0LL, 3LL, a1, v10, v11);
        v13 = __errno_location();
        error(0, *v13, "%s", v12);
        return v6;
      }
      return 1;
    }
    goto LABEL_9;
  }
  v16 = __errno_location();
  v6 = (unsigned __int8)byte_60F2DA;
  v19 = v16;
  if ( byte_60F2DA && *v16 == 2 )
  {
    *a3 = 1;
  }
  else
  {
    v6 = 0;
    v20 = (const char *)sub_4093D0(0LL, 3LL, a1, v17, v18);
    error(0, *v19, "%s", v20);
  }
  return v6;
}

void __fastcall __noreturn sub_402C90(int status)
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
  char *v19; // rax
  __int64 *v20; // rax
  char *v21; // rbp
  char *v22; // rax
  char *v23; // rax
  const char *v24; // r12
  char *v25; // rax
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  __int64 v31[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_60F308;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\nPrint or check %s (%d-bit) checksums.\n", 5);
  __printf_chk(1LL, v3, v1, "SHA512", 512LL);
  v4 = stdout;
  v5 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\n  -b, --binary         read in binary mode\n", 5);
  fputs_unlocked(v7, v6);
  v8 = dcgettext(0LL, "  -c, --check          read %s sums from the FILEs and check them\n", 5);
  __printf_chk(1LL, v8, "SHA512");
  v9 = stdout;
  v10 = dcgettext(0LL, "      --tag            create a BSD-style checksum\n", 5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(0LL, "  -t, --text           read in text mode (default)\n", 5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(
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
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v18, v17);
  v19 = dcgettext(
          0LL,
          "\n"
          "The sums are computed as described in %s.  When checking, the input\n"
          "should be a former output of this program.  The default mode is to print a\n"
          "line with checksum, a space, a character indicating input mode ('*' for binary,\n"
          "' ' for text or where binary is insignificant), and name for each FILE.\n",
          5);
  __printf_chk(1LL, v19, "FIPS-180-2");
  v31[0] = (__int64)"[";
  v20 = v31;
  v31[1] = (__int64)"test invocation";
  v31[2] = (__int64)"coreutils";
  v31[3] = (__int64)"Multi-call invocation";
  v31[4] = (__int64)"sha224sum";
  v31[5] = (__int64)"sha2 utilities";
  v31[6] = (__int64)"sha256sum";
  v31[7] = (__int64)"sha2 utilities";
  v31[8] = (__int64)"sha384sum";
  v31[9] = (__int64)"sha2 utilities";
  v31[10] = (__int64)"sha512sum";
  v31[11] = (__int64)"sha2 utilities";
  v31[12] = 0LL;
  v31[13] = 0LL;
  do
    v20 += 2;
  while ( *v20 && strcmp("sha512sum", (const char *)*v20) );
  v21 = (char *)v20[1];
  if ( v21 )
  {
    v22 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v22, &unk_40B5F2, "https://www.gnu.org/software/coreutils/");
    v23 = setlocale(5, 0LL);
    if ( !v23 || !strncmp(v23, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v27 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v27, &unk_40B5F2, "https://www.gnu.org/software/coreutils/");
    v28 = setlocale(5, 0LL);
    if ( !v28 || !strncmp(v28, "en_", 3uLL) )
    {
      v21 = "sha512sum";
      v29 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v24 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v29, "https://www.gnu.org/software/coreutils/", "sha512sum");
LABEL_12:
      v26 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v26, v21, v24);
LABEL_3:
      exit(status);
    }
    v21 = "sha512sum";
  }
  v30 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v30, "sha512sum");
LABEL_10:
  v24 = "Multi-call invocation" + 10;
  v25 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v25, "https://www.gnu.org/software/coreutils/", "sha512sum");
  if ( v21 != "sha512sum" )
    v24 = "";
  goto LABEL_12;
}

__int64 sub_403080()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_40AE60(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60F2F8 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60F300 )
      {
        v5 = (const char *)sub_4093A0();
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
  result = sub_40AE60(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_403240(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = a2;
  for ( i = 0LL; i != 64; i += 8LL )
    *(_QWORD *)(a2 + i) = _byteswap_uint64(*(_QWORD *)(a1 + i));
  return result;
}

__int64 __fastcall sub_403260(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = a2;
  for ( i = 0LL; i != 48; i += 8LL )
    *(_QWORD *)(a2 + i) = _byteswap_uint64(*(_QWORD *)(a1 + i));
  return result;
}

__int64 __fastcall sub_403280(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v4; // rcx
  bool v5; // cf
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r10
  __int64 result; // rax
  __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r9
  __int64 i; // rdx
  __int64 v18; // rsi
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r11
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r10
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r11
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // r10
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // r9
  __int64 v52; // rdi
  __int64 v53; // r13
  __int64 v54; // r9
  __int64 v55; // rsi
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rbp
  __int64 v63; // rax
  __int64 v64; // r13
  __int64 v65; // r8
  unsigned __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // rdi
  unsigned __int64 v70; // r11
  __int64 v71; // rax
  __int64 v72; // r12
  __int64 v73; // rsi
  unsigned __int64 v74; // r10
  __int64 v75; // rax
  __int64 v76; // rbp
  __int64 v77; // rcx
  unsigned __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rax
  __int64 v82; // r13
  __int64 v83; // rdi
  __int64 v84; // rdx
  __int64 v85; // r12
  __int64 v86; // rsi
  __int64 v87; // r14
  __int64 v88; // rbp
  __int64 v89; // rcx
  __int64 v90; // r13
  __int64 v91; // r8
  __int64 v92; // rax
  __int64 v93; // r12
  __int64 v94; // rdi
  __int64 v95; // rdx
  __int64 v96; // rbp
  __int64 v97; // rsi
  __int64 v98; // r14
  __int64 v99; // r8
  __int64 v100; // rcx
  __int64 v101; // r13
  __int64 v102; // rdi
  __int64 v103; // rcx
  __int64 v104; // r12
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rbp
  __int64 v108; // rsi
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // rcx
  __int64 v112; // r14
  __int64 v113; // r13
  __int64 v114; // rdx
  __int64 v115; // r12
  __int64 v116; // rdi
  __int64 v117; // r12
  unsigned __int64 v118; // r15
  __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rbx
  unsigned __int64 v122; // r14
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // rax
  unsigned __int64 v127; // r13
  __int64 v128; // rdx
  __int64 v129; // r10
  __int64 v130; // rax
  __int64 v131; // r9
  unsigned __int64 v132; // r12
  __int64 v133; // rdi
  unsigned __int64 v134; // r13
  unsigned __int64 v135; // r11
  unsigned __int64 v136; // r13
  unsigned __int64 v137; // rax
  unsigned __int64 v138; // rbx
  unsigned __int64 v139; // rsi
  __int64 v140; // rax
  __int64 v141; // r11
  __int64 v142; // rcx
  unsigned __int64 v143; // r13
  __int64 v144; // rax
  __int64 v145; // r10
  __int64 v146; // rdx
  __int64 v147; // rax
  __int64 v148; // r9
  __int64 v149; // r12
  __int64 v150; // rax
  unsigned __int64 v151; // rbx
  __int64 v152; // rbp
  __int64 v153; // rax
  __int64 v154; // r11
  __int64 v155; // r13
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // r10
  __int64 v159; // rax
  __int64 v160; // r12
  __int64 v161; // r8
  unsigned __int64 v162; // rsi
  unsigned __int64 v163; // rbx
  __int64 v164; // rax
  __int64 v165; // rbp
  __int64 v166; // r9
  __int64 v167; // rax
  __int64 v168; // r13
  __int64 v169; // rdi
  __int64 v170; // rax
  __int64 v171; // r10
  __int64 v172; // rdx
  __int64 v173; // rax
  __int64 v174; // r8
  __int64 v175; // rcx
  unsigned __int64 v176; // r12
  unsigned __int64 v177; // r15
  __int64 v178; // rax
  __int64 v179; // r9
  __int64 v180; // rsi
  unsigned __int64 v181; // rax
  unsigned __int64 v182; // r14
  __int64 v183; // rax
  __int64 v184; // rdi
  __int64 v185; // rbx
  __int64 v186; // rax
  __int64 v187; // rdx
  __int64 v188; // r10
  unsigned __int64 v189; // r13
  __int64 v190; // rax
  __int64 v191; // rcx
  __int64 v192; // r8
  unsigned __int64 v193; // r12
  unsigned __int64 v194; // r11
  unsigned __int64 v195; // r12
  __int64 v196; // rax
  __int64 v197; // rsi
  __int64 v198; // r9
  unsigned __int64 v199; // r11
  unsigned __int64 v200; // r13
  __int64 v201; // rax
  __int64 v202; // rbx
  __int64 v203; // rdi
  __int64 v204; // rax
  __int64 v205; // r10
  __int64 v206; // rdx
  unsigned __int64 v207; // rax
  unsigned __int64 v208; // r13
  __int64 v209; // rax
  __int64 v210; // r8
  unsigned __int64 v211; // r14
  __int64 v212; // r12
  unsigned __int64 v213; // rbp
  __int64 v214; // rax
  __int64 v215; // r9
  __int64 v216; // rcx
  __int64 v217; // rax
  __int64 v218; // rdi
  __int64 v219; // r11
  __int64 v220; // rax
  __int64 v221; // rdx
  __int64 v222; // r10
  __int64 v223; // rsi
  __int64 v224; // r8
  unsigned __int64 v225; // r12
  __int64 v226; // rbx
  __int64 v227; // rax
  __int64 v228; // rcx
  __int64 v229; // r13
  __int64 v230; // rax
  __int64 v231; // r11
  __int64 v232; // r14
  __int64 v233; // rax
  __int64 v234; // rsi
  __int64 v235; // rdx
  __int64 v236; // r8
  __int64 v237; // rax
  __int64 v238; // rdi
  __int64 v239; // rcx
  __int64 v240; // r13
  __int64 v241; // r10
  __int64 v242; // rcx
  __int64 v243; // r14
  __int64 v244; // r9
  __int64 v245; // rcx
  __int64 v246; // rdx
  __int64 v247; // r8
  __int64 v248; // rcx
  __int64 v249; // rdi
  __int64 v250; // rax
  __int64 v251; // rcx
  __int64 v252; // r10
  __int64 v253; // rsi
  __int64 v254; // r13
  __int64 v255; // r9
  __int64 v256; // rcx
  __int64 v257; // r13
  __int64 v258; // r8
  __int64 v259; // rdx
  __int64 v260; // r13
  __int64 v261; // rdi
  __int64 v262; // r13
  __int64 v263; // rax
  __int64 v264; // rsi
  __int64 v265; // r10
  __int64 v266; // rax
  __int64 v267; // rcx
  __int64 v268; // r9
  __int64 v269; // r8
  __int64 v270; // rdx
  __int64 v271; // r8
  __int64 v272; // rax
  __int64 v273; // r13
  __int64 v274; // rax
  __int64 v275; // rbx
  __int64 v276; // r10
  __int64 v277; // rbx
  __int64 v278; // rsi
  __int64 v279; // r9
  __int64 v280; // rsi
  __int64 v281; // rdx
  __int64 v282; // r8
  __int64 v283; // rdx
  __int64 v284; // rcx
  unsigned __int64 v285; // [rsp+0h] [rbp-1A0h]
  unsigned __int64 v286; // [rsp+0h] [rbp-1A0h]
  unsigned __int64 v287; // [rsp+0h] [rbp-1A0h]
  unsigned __int64 v288; // [rsp+8h] [rbp-198h]
  unsigned __int64 v289; // [rsp+8h] [rbp-198h]
  unsigned __int64 v290; // [rsp+10h] [rbp-190h]
  unsigned __int64 v291; // [rsp+10h] [rbp-190h]
  unsigned __int64 v292; // [rsp+10h] [rbp-190h]
  unsigned __int64 v293; // [rsp+18h] [rbp-188h]
  unsigned __int64 v294; // [rsp+18h] [rbp-188h]
  unsigned __int64 v295; // [rsp+20h] [rbp-180h]
  unsigned __int64 v296; // [rsp+20h] [rbp-180h]
  unsigned __int64 v297; // [rsp+28h] [rbp-178h]
  unsigned __int64 v298; // [rsp+28h] [rbp-178h]
  unsigned __int64 v299; // [rsp+28h] [rbp-178h]
  unsigned __int64 v300; // [rsp+30h] [rbp-170h]
  unsigned __int64 v301; // [rsp+30h] [rbp-170h]
  unsigned __int64 v302; // [rsp+30h] [rbp-170h]
  unsigned __int64 v303; // [rsp+38h] [rbp-168h]
  unsigned __int64 v304; // [rsp+38h] [rbp-168h]
  unsigned __int64 v305; // [rsp+38h] [rbp-168h]
  unsigned __int64 v306; // [rsp+40h] [rbp-160h]
  unsigned __int64 v307; // [rsp+40h] [rbp-160h]
  unsigned __int64 v308; // [rsp+40h] [rbp-160h]
  unsigned __int64 v309; // [rsp+48h] [rbp-158h]
  unsigned __int64 v310; // [rsp+48h] [rbp-158h]
  unsigned __int64 v311; // [rsp+48h] [rbp-158h]
  unsigned __int64 v312; // [rsp+50h] [rbp-150h]
  unsigned __int64 v313; // [rsp+50h] [rbp-150h]
  unsigned __int64 v314; // [rsp+50h] [rbp-150h]
  unsigned __int64 v315; // [rsp+58h] [rbp-148h]
  unsigned __int64 v316; // [rsp+58h] [rbp-148h]
  unsigned __int64 v317; // [rsp+60h] [rbp-140h]
  unsigned __int64 v318; // [rsp+60h] [rbp-140h]
  unsigned __int64 v319; // [rsp+68h] [rbp-138h]
  unsigned __int64 v320; // [rsp+68h] [rbp-138h]
  unsigned __int64 v321; // [rsp+70h] [rbp-130h]
  unsigned __int64 v322; // [rsp+70h] [rbp-130h]
  unsigned __int64 v323; // [rsp+78h] [rbp-128h]
  unsigned __int64 v324; // [rsp+80h] [rbp-120h]
  unsigned __int64 v325; // [rsp+88h] [rbp-118h]
  __int64 v326; // [rsp+90h] [rbp-110h]
  __int64 v327; // [rsp+98h] [rbp-108h]
  __int64 v328; // [rsp+A0h] [rbp-100h]
  __int64 v329; // [rsp+A8h] [rbp-F8h]
  __int64 v330; // [rsp+B0h] [rbp-F0h]
  __int64 v331; // [rsp+B8h] [rbp-E8h]
  __int64 v332; // [rsp+C0h] [rbp-E0h]
  unsigned __int64 v333; // [rsp+C8h] [rbp-D8h]
  __int64 v334; // [rsp+D0h] [rbp-D0h]
  unsigned __int64 v335; // [rsp+D8h] [rbp-C8h]
  unsigned __int64 v337; // [rsp+E8h] [rbp-B8h]
  unsigned __int64 v338; // [rsp+F0h] [rbp-B0h]
  unsigned __int64 v339; // [rsp+F8h] [rbp-A8h]
  unsigned __int64 v340; // [rsp+100h] [rbp-A0h]
  unsigned __int64 v341; // [rsp+108h] [rbp-98h]
  unsigned __int64 v342; // [rsp+110h] [rbp-90h]
  unsigned __int64 v343; // [rsp+118h] [rbp-88h]
  unsigned __int64 v344; // [rsp+120h] [rbp-80h]
  unsigned __int64 v345; // [rsp+128h] [rbp-78h]
  unsigned __int64 v346; // [rsp+130h] [rbp-70h]
  unsigned __int64 v347; // [rsp+138h] [rbp-68h]
  unsigned __int64 v348; // [rsp+140h] [rbp-60h]
  unsigned __int64 v349; // [rsp+148h] [rbp-58h]
  unsigned __int64 v350; // [rsp+150h] [rbp-50h]
  unsigned __int64 v351; // [rsp+158h] [rbp-48h]
  unsigned __int64 v352; // [rsp+160h] [rbp-40h]

  v4 = a1 + (a2 & 0xFFFFFFFFFFFFFFF8LL);
  v5 = __CFADD__(a3[8], a2);
  v6 = a3[2];
  v7 = a3[3];
  v8 = a3[4];
  v325 = a1;
  v9 = a3[5];
  v10 = a3[1];
  v335 = v4;
  v11 = a3[6];
  result = *a3;
  v13 = a3[7];
  a3[8] += a2;
  a3[9] += v5;
  if ( a1 < v4 )
  {
    v332 = v13;
    v14 = v8;
    v15 = v9;
    v331 = v11;
    v330 = v9;
    v328 = v7;
    v327 = v6;
    v326 = v10;
    v334 = result;
    v329 = v8;
    v16 = v11;
    do
    {
      for ( i = 0LL; i != 128; i += 8LL )
        *(unsigned __int64 *)((char *)&v337 + i) = _byteswap_uint64(*(_QWORD *)(v325 + i));
      v325 += 128LL;
      v18 = (__ROR8__(v14, 18) ^ __ROR8__(v14, 14) ^ __ROL8__(v14, 23))
          + v337
          + 0x428A2F98D728AE22LL
          + v13
          + (v16 ^ v14 & (v16 ^ v15));
      v19 = v18 + v7;
      v20 = v18
          + (__ROL8__(result, 25) ^ __ROR8__(result, 28) ^ __ROL8__(result, 30))
          + (v10 & result | v6 & (v10 | result));
      v21 = (v15 ^ (v18 + v7) & (v15 ^ v14))
          + v16
          + v338
          + 0x7137449123EF65CDLL
          + (__ROR8__(v18 + v7, 14) ^ __ROR8__(v18 + v7, 18) ^ __ROL8__(v18 + v7, 23));
      v22 = v21 + v6;
      v23 = v21 + (__ROL8__(v20, 25) ^ __ROR8__(v20, 28) ^ __ROL8__(v20, 30)) + (result & v20 | v10 & (result | v20));
      v24 = (v14 ^ (v21 + v6) & (v14 ^ v19))
          + v15
          + v339
          - 0x4A3F043013B2C4D1LL
          + (__ROR8__(v21 + v6, 14) ^ __ROR8__(v21 + v6, 18) ^ __ROL8__(v21 + v6, 23));
      v25 = v24 + v10;
      v26 = v24 + (__ROL8__(v23, 25) ^ __ROR8__(v23, 28) ^ __ROL8__(v23, 30)) + (v23 & v20 | result & (v23 | v20));
      v27 = (v19 ^ v25 & ((v21 + v6) ^ v19))
          + v340
          - 0x164A245A7E762444LL
          + v14
          + (__ROR8__(v25, 14) ^ __ROR8__(v25, 18) ^ __ROL8__(v25, 23));
      v28 = v27 + result;
      v29 = v27 + (__ROL8__(v26, 25) ^ __ROR8__(v26, 28) ^ __ROL8__(v26, 30)) + (v26 & v23 | v20 & (v26 | v23));
      v30 = (v22 ^ v28 & (v25 ^ v22))
          + v341
          + 0x3956C25BF348B538LL
          + v19
          + (__ROR8__(v28, 14) ^ __ROR8__(v27 + result, 18) ^ __ROL8__(v28, 23));
      v31 = v30 + v20;
      v32 = v30 + (__ROL8__(v29, 25) ^ __ROR8__(v29, 28) ^ __ROL8__(v29, 30)) + (v29 & v26 | v23 & (v29 | v26));
      v33 = (v25 ^ v31 & (v28 ^ v25))
          + v342
          + 0x59F111F1B605D019LL
          + v22
          + (__ROR8__(v31, 14) ^ __ROR8__(v31, 18) ^ __ROL8__(v31, 23));
      v34 = v23 + v33;
      v35 = v33 + (__ROL8__(v32, 25) ^ __ROR8__(v32, 28) ^ __ROL8__(v32, 30)) + (v32 & v29 | v26 & (v32 | v29));
      v36 = (v28 ^ v34 & (v31 ^ v28))
          + v343
          - 0x6DC07D5B50E6B065LL
          + v25
          + (__ROR8__(v23 + v33, 14) ^ __ROR8__(v23 + v33, 18) ^ __ROL8__(v34, 23));
      v37 = v36 + v26;
      v38 = v36 + (__ROL8__(v35, 25) ^ __ROR8__(v35, 28) ^ __ROL8__(v35, 30)) + (v35 & v32 | v29 & (v35 | v32));
      v39 = v344
          - 0x54E3A12A25927EE8LL
          + v28
          + (v31 ^ v37 & (v34 ^ v31))
          + (__ROR8__(v37, 14) ^ __ROR8__(v37, 18) ^ __ROL8__(v37, 23));
      v40 = v39 + v29;
      v41 = v39 + (__ROL8__(v38, 25) ^ __ROR8__(v38, 28) ^ __ROL8__(v38, 30)) + (v38 & v35 | v32 & (v38 | v35));
      v42 = v345
          - 0x27F855675CFCFDBELL
          + v31
          + (v34 ^ v40 & (v37 ^ v34))
          + (__ROR8__(v40, 14) ^ __ROR8__(v40, 18) ^ __ROL8__(v40, 23));
      v43 = v42 + v32;
      v44 = v42 + (__ROL8__(v41, 25) ^ __ROR8__(v41, 28) ^ __ROL8__(v41, 30)) + (v41 & v38 | v35 & (v41 | v38));
      v45 = (v37 ^ v43 & (v40 ^ v37))
          + v346
          + 0x12835B0145706FBELL
          + v34
          + (__ROR8__(v43, 14) ^ __ROR8__(v43, 18) ^ __ROL8__(v43, 23));
      v46 = v45 + v35;
      v47 = v45 + (__ROL8__(v44, 25) ^ __ROR8__(v44, 28) ^ __ROL8__(v44, 30)) + (v44 & v41 | v38 & (v44 | v41));
      v48 = (v40 ^ v46 & (v43 ^ v40))
          + v347
          + 0x243185BE4EE4B28CLL
          + v37
          + (__ROR8__(v46, 14) ^ __ROR8__(v46, 18) ^ __ROL8__(v46, 23));
      v49 = v48 + v38;
      v50 = v48 + (__ROL8__(v47, 25) ^ __ROR8__(v47, 28) ^ __ROL8__(v47, 30)) + (v47 & v44 | v41 & (v47 | v44));
      v51 = (v43 ^ v49 & (v46 ^ v43))
          + v348
          + 0x550C7DC3D5FFB4E2LL
          + v40
          + (__ROR8__(v49, 14) ^ __ROR8__(v49, 18) ^ __ROL8__(v49, 23));
      v52 = v51 + v41;
      v53 = v51 + (__ROL8__(v50, 25) ^ __ROR8__(v50, 28) ^ __ROL8__(v50, 30)) + (v50 & v47 | v44 & (v50 | v47));
      v54 = (v46 ^ v52 & (v49 ^ v46))
          + v349
          + 0x72BE5D74F27B896FLL
          + v43
          + (__ROR8__(v52, 14) ^ __ROR8__(v52, 18) ^ __ROL8__(v52, 23));
      v55 = v54 + v44;
      v56 = v54 + (__ROL8__(v53, 25) ^ __ROR8__(v53, 28) ^ __ROL8__(v53, 30)) + (v53 & v50 | v47 & (v53 | v50));
      v57 = (v49 ^ v55 & (v52 ^ v49))
          + v350
          - 0x7F214E01C4E9694FLL
          + v46
          + (__ROR8__(v55, 14) ^ __ROR8__(v55, 18) ^ __ROL8__(v55, 23));
      v58 = v57 + v47;
      v59 = v57 + (__ROL8__(v56, 25) ^ __ROR8__(v56, 28) ^ __ROL8__(v56, 30)) + (v56 & v53 | v50 & (v56 | v53));
      v60 = (v52 ^ v58 & (v55 ^ v52))
          + v351
          - 0x6423F958DA38EDCBLL
          + v49
          + (__ROR8__(v58, 14) ^ __ROR8__(v58, 18) ^ __ROL8__(v58, 23));
      v61 = v60 + v50;
      v62 = v60 + (__ROL8__(v59, 25) ^ __ROR8__(v59, 28) ^ __ROL8__(v59, 30)) + (v59 & v56 | v53 & (v59 | v56));
      v63 = (v55 ^ v61 & (v58 ^ v55))
          + v352
          - 0x3E640E8B3096D96CLL
          + v52
          + (__ROR8__(v61, 14) ^ __ROR8__(v61, 18) ^ __ROL8__(v61, 23));
      v64 = v63 + v53;
      v65 = v63 + (__ROL8__(v62, 25) ^ __ROR8__(v62, 28) ^ __ROL8__(v62, 30)) + (v62 & v59 | v56 & (v62 | v59));
      v66 = (__ROR8__(v351, 19) ^ __ROL8__(v351, 3) ^ (v351 >> 6))
          + v346
          + v337
          + ((v338 >> 7) ^ __ROR8__(v338, 1) ^ __ROR8__(v338, 8));
      v67 = (v58 ^ v64 & (v61 ^ v58))
          + v66
          - 0x1B64963E610EB52ELL
          + v55
          + (__ROR8__(v64, 14) ^ __ROR8__(v64, 18) ^ __ROL8__(v64, 23));
      v68 = v67 + v56;
      v69 = v67 + (__ROL8__(v65, 25) ^ __ROR8__(v65, 28) ^ __ROL8__(v65, 30)) + (v65 & v62 | v59 & (v65 | v62));
      v70 = (__ROR8__(v352, 19) ^ __ROL8__(v352, 3) ^ (v352 >> 6))
          + v338
          + v347
          + ((v339 >> 7) ^ __ROR8__(v339, 1) ^ __ROR8__(v339, 8));
      v71 = (v61 ^ v68 & (v64 ^ v61))
          + v70
          - 0x1041B879C7B0DA1DLL
          + v58
          + (__ROR8__(v68, 14) ^ __ROR8__(v68, 18) ^ __ROL8__(v68, 23));
      v72 = v71 + v59;
      v73 = v71 + (__ROL8__(v69, 25) ^ __ROR8__(v69, 28) ^ __ROL8__(v69, 30)) + (v69 & v65 | v62 & (v69 | v65));
      v74 = (__ROR8__(v340, 1) ^ __ROR8__(v340, 8) ^ (v340 >> 7))
          + v348
          + v339
          + ((v66 >> 6) ^ __ROR8__(v66, 19) ^ __ROL8__(v66, 3));
      v75 = (v64 ^ v72 & (v68 ^ v64))
          + v74
          + 0xFC19DC68B8CD5B5LL
          + v61
          + (__ROR8__(v72, 14) ^ __ROR8__(v72, 18) ^ __ROL8__(v72, 23));
      v76 = v75 + v62;
      v77 = v75 + (__ROL8__(v73, 25) ^ __ROR8__(v73, 28) ^ __ROL8__(v73, 30)) + (v73 & v69 | v65 & (v73 | v69));
      v78 = (__ROR8__(v341, 1) ^ __ROR8__(v341, 8) ^ (v341 >> 7))
          + v349
          + v340
          + ((v70 >> 6) ^ __ROR8__(v70, 19) ^ __ROL8__(v70, 3));
      v79 = (v68 ^ v76 & (v72 ^ v68))
          + v78
          + 0x240CA1CC77AC9C65LL
          + v64
          + (__ROR8__(v76, 14) ^ __ROR8__(v76, 18) ^ __ROL8__(v76, 23));
      v80 = v79 + v65;
      v81 = v79 + (__ROL8__(v77, 25) ^ __ROR8__(v77, 28) ^ __ROL8__(v77, 30)) + (v77 & v73 | v69 & (v77 | v73));
      v306 = v350
           + v341
           + (__ROR8__(v342, 8) ^ __ROR8__(v342, 1) ^ (v342 >> 7))
           + ((v74 >> 6) ^ __ROR8__(v74, 19) ^ __ROL8__(v74, 3));
      v82 = (v72 ^ v80 & (v76 ^ v72))
          + v306
          + 0x2DE92C6F592B0275LL
          + v68
          + (__ROR8__(v80, 14) ^ __ROR8__(v80, 18) ^ __ROL8__(v80, 23));
      v83 = v82 + v69;
      v84 = v82 + (__ROL8__(v81, 25) ^ __ROR8__(v81, 28) ^ __ROL8__(v81, 30)) + (v81 & v77 | v73 & (v81 | v77));
      v297 = ((v78 >> 6) ^ __ROR8__(v78, 19) ^ __ROL8__(v78, 3))
           + v351
           + v342
           + (__ROR8__(v343, 8) ^ __ROR8__(v343, 1) ^ (v343 >> 7));
      v85 = (v76 ^ v83 & (v80 ^ v76))
          + v297
          + 0x4A7484AA6EA6E483LL
          + v72
          + (__ROR8__(v83, 14) ^ __ROR8__(v83, 18) ^ __ROL8__(v83, 23));
      v86 = v85 + v73;
      v87 = v85 + (__ROL8__(v84, 25) ^ __ROR8__(v84, 28) ^ __ROL8__(v84, 30)) + (v84 & v81 | v77 & (v84 | v81));
      v300 = v352
           + v343
           + (__ROR8__(v344, 8) ^ __ROR8__(v344, 1) ^ (v344 >> 7))
           + ((v306 >> 6) ^ __ROR8__(v306, 19) ^ __ROL8__(v306, 3));
      v88 = (v80 ^ v86 & (v83 ^ v80))
          + v300
          + 0x5CB0A9DCBD41FBD4LL
          + v76
          + (__ROR8__(v86, 14) ^ __ROR8__(v86, 18) ^ __ROL8__(v86, 23));
      v89 = v88 + v77;
      v90 = v88 + (__ROL8__(v87, 25) ^ __ROR8__(v87, 28) ^ __ROL8__(v87, 30)) + (v87 & v84 | v81 & (v87 | v84));
      v285 = ((v297 >> 6) ^ __ROR8__(v297, 19) ^ __ROL8__(v297, 3))
           + v66
           + v344
           + ((v345 >> 7) ^ __ROR8__(v345, 1) ^ __ROR8__(v345, 8));
      v91 = (v83 ^ v89 & (v86 ^ v83))
          + v285
          + 0x76F988DA831153B5LL
          + v80
          + (__ROR8__(v89, 14) ^ __ROR8__(v89, 18) ^ __ROL8__(v89, 23));
      v92 = v91 + v81;
      v93 = v91 + (__ROL8__(v90, 25) ^ __ROR8__(v90, 28) ^ __ROL8__(v90, 30)) + (v90 & v87 | v84 & (v90 | v87));
      v303 = ((v300 >> 6) ^ __ROR8__(v300, 19) ^ __ROL8__(v300, 3))
           + v70
           + v345
           + ((v346 >> 7) ^ __ROR8__(v346, 1) ^ __ROR8__(v346, 8));
      v94 = (v86 ^ v92 & (v89 ^ v86))
          + v303
          - 0x67C1AEAD11992055LL
          + v83
          + (__ROR8__(v92, 14) ^ __ROR8__(v92, 18) ^ __ROL8__(v92, 23));
      v95 = v94 + v84;
      v96 = v94 + (__ROL8__(v93, 25) ^ __ROR8__(v93, 28) ^ __ROL8__(v93, 30)) + (v93 & v90 | v87 & (v93 | v90));
      v288 = ((v285 >> 6) ^ __ROR8__(v285, 19) ^ __ROL8__(v285, 3))
           + v74
           + v346
           + ((v347 >> 7) ^ __ROR8__(v347, 1) ^ __ROR8__(v347, 8));
      v97 = (v89 ^ v95 & (v92 ^ v89))
          + v288
          - 0x57CE3992D24BCDF0LL
          + v86
          + (__ROR8__(v95, 14) ^ __ROR8__(v95, 18) ^ __ROL8__(v95, 23));
      v98 = v97 + v87;
      v99 = v97 + (__ROL8__(v96, 25) ^ __ROR8__(v96, 28) ^ __ROL8__(v96, 30)) + (v96 & v93 | v90 & (v96 | v93));
      v290 = ((v303 >> 6) ^ __ROR8__(v303, 19) ^ __ROL8__(v303, 3))
           + v78
           + v347
           + ((v348 >> 7) ^ __ROR8__(v348, 1) ^ __ROR8__(v348, 8));
      v100 = (v92 ^ v98 & (v95 ^ v92))
           + v290
           - 0x4FFCD8376704DEC1LL
           + v89
           + (__ROR8__(v98, 14) ^ __ROR8__(v98, 18) ^ __ROL8__(v98, 23));
      v101 = v100 + v90;
      v102 = v100 + (__ROL8__(v99, 25) ^ __ROR8__(v99, 28) ^ __ROL8__(v99, 30)) + (v99 & v96 | v93 & (v99 | v96));
      v309 = ((v288 >> 6) ^ __ROR8__(v288, 19) ^ __ROL8__(v288, 3))
           + v306
           + v348
           + ((v349 >> 7) ^ __ROR8__(v349, 1) ^ __ROR8__(v349, 8));
      v103 = (v95 ^ v101 & (v98 ^ v95))
           + v309
           - 0x40A680384110F11CLL
           + v92
           + (__ROR8__(v101, 14) ^ __ROR8__(v101, 18) ^ __ROL8__(v101, 23));
      v104 = v103 + v93;
      v105 = v103 + (__ROL8__(v102, 25) ^ __ROR8__(v102, 28) ^ __ROL8__(v102, 30)) + (v102 & v99 | v96 & (v102 | v99));
      v293 = ((v290 >> 6) ^ __ROR8__(v290, 19) ^ __ROL8__(v290, 3))
           + v297
           + v349
           + ((v350 >> 7) ^ __ROR8__(v350, 1) ^ __ROR8__(v350, 8));
      v106 = (v98 ^ v104 & (v101 ^ v98))
           + v293
           - 0x391FF40CC257703ELL
           + v95
           + (__ROR8__(v104, 14) ^ __ROR8__(v104, 18) ^ __ROL8__(v104, 23));
      v107 = v106 + v96;
      v108 = v106 + (__ROL8__(v105, 25) ^ __ROR8__(v105, 28) ^ __ROL8__(v105, 30)) + (v105 & v102 | v99 & (v105 | v102));
      v295 = ((v309 >> 6) ^ __ROR8__(v309, 19) ^ __ROL8__(v309, 3))
           + v300
           + v350
           + ((v351 >> 7) ^ __ROR8__(v351, 1) ^ __ROR8__(v351, 8));
      v109 = (v101 ^ v107 & (v104 ^ v101))
           + v295
           - 0x2A586EB86CF558DBLL
           + v98
           + (__ROR8__(v107, 14) ^ __ROR8__(v107, 18) ^ __ROL8__(v107, 23));
      v110 = v109 + v99;
      v111 = v109
           + (__ROL8__(v108, 25) ^ __ROR8__(v108, 28) ^ __ROL8__(v108, 30))
           + (v108 & v105 | v102 & (v108 | v105));
      v315 = ((v293 >> 6) ^ __ROR8__(v293, 19) ^ __ROL8__(v293, 3))
           + v285
           + v351
           + ((v352 >> 7) ^ __ROR8__(v352, 1) ^ __ROR8__(v352, 8));
      v112 = (v104 ^ v110 & (v107 ^ v104))
           + v315
           + 0x6CA6351E003826FLL
           + v101
           + (__ROR8__(v110, 14) ^ __ROR8__(v110, 18) ^ __ROL8__(v110, 23));
      v113 = v102 + v112;
      v114 = v112
           + (__ROL8__(v111, 25) ^ __ROR8__(v111, 28) ^ __ROL8__(v111, 30))
           + (v111 & v108 | v105 & (v111 | v108));
      v312 = ((v295 >> 6) ^ __ROR8__(v295, 19) ^ __ROL8__(v295, 3))
           + v303
           + v352
           + ((v66 >> 7) ^ __ROR8__(v66, 1) ^ __ROR8__(v66, 8));
      v115 = (v107 ^ (v102 + v112) & (v110 ^ v107))
           + v312
           + 0x142929670A0E6E70LL
           + v104
           + (__ROL8__(v113, 23) ^ __ROR8__(v113, 14) ^ __ROR8__(v113, 18));
      v116 = v105 + v115;
      v117 = (__ROL8__(v114, 25) ^ __ROR8__(v114, 28) ^ __ROL8__(v114, 30))
           + (v114 & v111 | v108 & (v114 | v111))
           + v115;
      v118 = v288
           + ((v70 >> 7) ^ __ROR8__(v70, 1) ^ __ROR8__(v70, 8))
           + v66
           + ((v315 >> 6) ^ __ROR8__(v315, 19) ^ __ROL8__(v315, 3));
      v119 = (v110 ^ v116 & (v113 ^ v110))
           + v118
           + 0x27B70A8546D22FFCLL
           + v107
           + (__ROL8__(v116, 23) ^ __ROR8__(v116, 14) ^ __ROR8__(v116, 18));
      v120 = v119 + v108;
      v121 = v119
           + (v117 & v114 | v111 & (v117 | v114))
           + (__ROL8__(v117, 25) ^ __ROR8__(v117, 28) ^ __ROL8__(v117, 30));
      v122 = v290
           + ((v74 >> 7) ^ __ROR8__(v74, 1) ^ __ROR8__(v74, 8))
           + v70
           + ((v312 >> 6) ^ __ROR8__(v312, 19) ^ __ROL8__(v312, 3));
      v123 = (v113 ^ v120 & (v116 ^ v113))
           + v122
           + 0x2E1B21385C26C926LL
           + v110
           + (__ROL8__(v120, 23) ^ __ROR8__(v120, 14) ^ __ROR8__(v120, 18));
      v124 = v123 + v111;
      v125 = v123
           + (v121 & v117 | v114 & (v121 | v117))
           + (__ROL8__(v121, 25) ^ __ROR8__(v121, 28) ^ __ROL8__(v121, 30));
      v317 = ((v118 >> 6) ^ __ROR8__(v118, 19) ^ __ROL8__(v118, 3))
           + v309
           + ((v78 >> 7) ^ __ROR8__(v78, 1) ^ __ROR8__(v78, 8))
           + v74;
      v126 = (v116 ^ v124 & (v120 ^ v116))
           + v317
           + 0x4D2C6DFC5AC42AEDLL
           + v113
           + (__ROL8__(v124, 23) ^ __ROR8__(v124, 14) ^ __ROR8__(v124, 18));
      v127 = v306;
      v128 = v126 + v114;
      v129 = v126
           + (v125 & v121 | v117 & (v125 | v121))
           + (__ROL8__(v125, 25) ^ __ROR8__(v125, 28) ^ __ROL8__(v125, 30));
      v307 = ((v122 >> 6) ^ __ROR8__(v122, 19) ^ __ROL8__(v122, 3))
           + v293
           + ((v306 >> 7) ^ __ROR8__(v306, 1) ^ __ROR8__(v306, 8))
           + v78;
      v130 = (v120 ^ v128 & (v124 ^ v120))
           + v307
           + 0x53380D139D95B3DFLL
           + v116
           + (__ROL8__(v128, 23) ^ __ROR8__(v128, 14) ^ __ROR8__(v128, 18));
      v131 = v117 + v130;
      v132 = v297;
      v133 = v130
           + (v129 & v125 | v121 & (v129 | v125))
           + (__ROL8__(v129, 25) ^ __ROR8__(v129, 28) ^ __ROL8__(v129, 30));
      v134 = ((v317 >> 6) ^ __ROR8__(v317, 19) ^ __ROL8__(v317, 3))
           + v295
           + v127
           + ((v297 >> 7) ^ __ROR8__(v297, 1) ^ __ROR8__(v297, 8));
      v135 = v134 + 0x650A73548BAF63DELL;
      v298 = v134;
      v136 = v300;
      v137 = (v124 ^ v131 & (v128 ^ v124))
           + v135
           + v120
           + (__ROL8__(v131, 23) ^ __ROR8__(v131, 14) ^ __ROR8__(v131, 18));
      v138 = v137 + v121;
      v139 = v137
           + (v133 & v129 | v125 & (v133 | v129))
           + (__ROL8__(v133, 25) ^ __ROR8__(v133, 28) ^ __ROL8__(v133, 30));
      v301 = ((v307 >> 6) ^ __ROR8__(v307, 19) ^ __ROL8__(v307, 3))
           + v315
           + v132
           + ((v300 >> 7) ^ __ROR8__(v300, 1) ^ __ROR8__(v300, 8));
      v140 = (v128 ^ v138 & (v131 ^ v128))
           + v301
           + 0x766A0ABB3C77B2A8LL
           + v124
           + (__ROL8__(v138, 23) ^ __ROR8__(v138, 14) ^ __ROR8__(v138, 18));
      v141 = v125 + v140;
      v142 = v140
           + (v139 & v133 | v129 & (v139 | v133))
           + (__ROL8__(v139, 25) ^ __ROR8__(v139, 28) ^ __ROL8__(v139, 30));
      v319 = v312
           + v136
           + ((v285 >> 7) ^ __ROR8__(v285, 1) ^ __ROR8__(v285, 8))
           + ((v298 >> 6) ^ __ROR8__(v298, 19) ^ __ROL8__(v298, 3));
      v143 = v303;
      v144 = (v131 ^ v141 & (v138 ^ v131))
           + v319
           - 0x7E3D36D1B812511ALL
           + v128
           + (__ROL8__(v141, 23) ^ __ROR8__(v125 + v140, 14) ^ __ROR8__(v125 + v140, 18));
      v145 = v144 + v129;
      v146 = v144
           + (v142 & v139 | v133 & (v142 | v139))
           + (__ROL8__(v142, 25) ^ __ROR8__(v142, 28) ^ __ROL8__(v142, 30));
      v304 = v118
           + v285
           + ((v303 >> 7) ^ __ROR8__(v303, 1) ^ __ROR8__(v303, 8))
           + ((v301 >> 6) ^ __ROR8__(v301, 19) ^ __ROL8__(v301, 3));
      v147 = (v138 ^ v145 & (v141 ^ v138))
           + v304
           - 0x6D8DD37AEB7DCAC5LL
           + v131
           + (__ROL8__(v145, 23) ^ __ROR8__(v145, 14) ^ __ROR8__(v145, 18));
      v148 = v133 + v147;
      v149 = (__ROL8__(v146, 25) ^ __ROR8__(v146, 28) ^ __ROL8__(v146, 30))
           + (v146 & v142 | v139 & (v146 | v142))
           + v147;
      v286 = v122
           + v143
           + ((v288 >> 7) ^ __ROR8__(v288, 1) ^ __ROR8__(v288, 8))
           + ((v319 >> 6) ^ __ROR8__(v319, 19) ^ __ROL8__(v319, 3));
      v150 = (v141 ^ v148 & (v145 ^ v141))
           + v286
           - 0x5D40175EB30EFC9CLL
           + v138
           + (__ROL8__(v148, 23) ^ __ROR8__(v133 + v147, 14) ^ __ROR8__(v133 + v147, 18));
      v151 = v139 + v150;
      v152 = (__ROL8__(v149, 25) ^ __ROR8__(v149, 28) ^ __ROL8__(v149, 30))
           + (v149 & v146 | v142 & (v149 | v146))
           + v150;
      v321 = v317
           + v288
           + ((v290 >> 7) ^ __ROR8__(v290, 1) ^ __ROR8__(v290, 8))
           + ((v304 >> 6) ^ __ROR8__(v304, 19) ^ __ROL8__(v304, 3));
      v153 = (v145 ^ v151 & (v148 ^ v145))
           + v321
           - 0x57E599B443BDCFFFLL
           + v141
           + (__ROL8__(v151, 23) ^ __ROR8__(v139 + v150, 14) ^ __ROR8__(v139 + v150, 18));
      v154 = v142 + v153;
      v155 = (__ROL8__(v152, 25) ^ __ROR8__(v152, 28) ^ __ROL8__(v152, 30))
           + (v152 & v149 | v146 & (v152 | v149))
           + v153;
      v291 = v307
           + v290
           + ((v309 >> 7) ^ __ROR8__(v309, 1) ^ __ROR8__(v309, 8))
           + ((v286 >> 6) ^ __ROR8__(v286, 19) ^ __ROL8__(v286, 3));
      v156 = (v148 ^ v154 & (v151 ^ v148))
           + v291
           - 0x3DB4748F2F07686FLL
           + v145
           + (__ROL8__(v154, 23) ^ __ROR8__(v142 + v153, 14) ^ __ROR8__(v142 + v153, 18));
      v157 = v156 + v146;
      v158 = (__ROL8__(v155, 25) ^ __ROR8__(v155, 28) ^ __ROL8__(v155, 30))
           + (v155 & v152 | v149 & (v155 | v152))
           + v156;
      v310 = v298
           + v309
           + ((v293 >> 7) ^ __ROR8__(v293, 1) ^ __ROR8__(v293, 8))
           + ((v321 >> 6) ^ __ROR8__(v321, 19) ^ __ROL8__(v321, 3));
      v159 = (v151 ^ v157 & (v154 ^ v151))
           + v310
           - 0x3893AE5CF9AB41D0LL
           + v148
           + (__ROL8__(v157, 23) ^ __ROR8__(v157, 14) ^ __ROR8__(v157, 18));
      v160 = v159 + v149;
      v161 = (__ROL8__(v158, 25) ^ __ROR8__(v158, 28) ^ __ROL8__(v158, 30))
           + (v158 & v155 | v152 & (v158 | v155))
           + v159;
      v323 = v301
           + v293
           + ((v295 >> 7) ^ __ROR8__(v295, 1) ^ __ROR8__(v295, 8))
           + ((v291 >> 6) ^ __ROR8__(v291, 19) ^ __ROL8__(v291, 3));
      v162 = v323 - 0x2E6D17E62910ADE8LL + v151;
      v163 = v315;
      v164 = (v154 ^ v160 & (v157 ^ v154)) + v162 + (__ROL8__(v160, 23) ^ __ROR8__(v160, 14) ^ __ROR8__(v160, 18));
      v165 = v164 + v152;
      v166 = (__ROL8__(v161, 25) ^ __ROR8__(v161, 28) ^ __ROL8__(v161, 30))
           + (v161 & v158 | v155 & (v161 | v158))
           + v164;
      v316 = v319
           + v295
           + ((v315 >> 7) ^ __ROR8__(v315, 1) ^ __ROR8__(v315, 8))
           + ((v310 >> 6) ^ __ROR8__(v310, 19) ^ __ROL8__(v310, 3));
      v167 = (v157 ^ v165 & (v160 ^ v157))
           + v154
           + v316
           - 0x2966F9DBAA9A56F0LL
           + (__ROL8__(v165, 23) ^ __ROR8__(v165, 14) ^ __ROR8__(v165, 18));
      v168 = v167 + v155;
      v169 = v167
           + (v166 & v161 | v158 & (v166 | v161))
           + (__ROL8__(v166, 25) ^ __ROR8__(v166, 28) ^ __ROL8__(v166, 30));
      v333 = ((v323 >> 6) ^ __ROR8__(v323, 19) ^ __ROL8__(v323, 3))
           + v304
           + v163
           + ((v312 >> 7) ^ __ROR8__(v312, 1) ^ __ROR8__(v312, 8));
      v170 = (v160 ^ v168 & (v165 ^ v160))
           + v333
           - 0xBF1CA7AA88EDFD6LL
           + v157
           + (__ROL8__(v168, 23) ^ __ROR8__(v168, 14) ^ __ROR8__(v168, 18));
      v171 = v170 + v158;
      v172 = v170
           + (v169 & v166 | v161 & (v169 | v166))
           + (__ROL8__(v169, 25) ^ __ROR8__(v169, 28) ^ __ROL8__(v169, 30));
      v313 = ((v316 >> 6) ^ __ROR8__(v316, 19) ^ __ROL8__(v316, 3))
           + v286
           + v312
           + ((v118 >> 7) ^ __ROR8__(v118, 1) ^ __ROR8__(v118, 8));
      v173 = (v165 ^ v171 & (v168 ^ v165))
           + v313
           + 0x106AA07032BBD1B8LL
           + v160
           + (__ROL8__(v171, 23) ^ __ROR8__(v171, 14) ^ __ROR8__(v171, 18));
      v174 = v173 + v161;
      v175 = v173
           + (v172 & v169 | v166 & (v172 | v169))
           + (__ROL8__(v172, 25) ^ __ROR8__(v172, 28) ^ __ROL8__(v172, 30));
      v176 = v317;
      v177 = v321
           + v118
           + ((v122 >> 7) ^ __ROR8__(v122, 1) ^ __ROR8__(v122, 8))
           + ((v333 >> 6) ^ __ROR8__(v333, 19) ^ __ROL8__(v333, 3));
      v178 = (v168 ^ v174 & (v171 ^ v168))
           + v177
           + 0x19A4C116B8D2D0C8LL
           + v165
           + (__ROL8__(v174, 23) ^ __ROR8__(v174, 14) ^ __ROR8__(v174, 18));
      v179 = v178 + v166;
      v180 = v178
           + (v175 & v172 | v169 & (v175 | v172))
           + (__ROL8__(v175, 25) ^ __ROR8__(v175, 28) ^ __ROL8__(v175, 30));
      v181 = v291 + v122 + ((v317 >> 7) ^ __ROR8__(v317, 1) ^ __ROR8__(v317, 8));
      v182 = v307;
      v318 = ((v313 >> 6) ^ __ROR8__(v313, 19) ^ __ROL8__(v313, 3)) + v181;
      v183 = (v171 ^ v179 & (v174 ^ v171))
           + v318
           + 0x1E376C085141AB53LL
           + v168
           + (__ROL8__(v179, 23) ^ __ROR8__(v179, 14) ^ __ROR8__(v179, 18));
      v184 = v183 + v169;
      v185 = v183
           + (__ROL8__(v180, 25) ^ __ROR8__(v180, 28) ^ __ROL8__(v180, 30))
           + (v180 & v175 | v172 & (v180 | v175));
      v308 = ((v177 >> 6) ^ __ROR8__(v177, 19) ^ __ROL8__(v177, 3))
           + v310
           + v176
           + ((v307 >> 7) ^ __ROR8__(v307, 1) ^ __ROR8__(v307, 8));
      v186 = (v174 ^ v184 & (v179 ^ v174))
           + v308
           + 0x2748774CDF8EEB99LL
           + v171
           + (__ROL8__(v184, 23) ^ __ROR8__(v184, 14) ^ __ROR8__(v184, 18));
      v187 = v186 + v172;
      v188 = v186
           + (v185 & v180 | v175 & (v185 | v180))
           + (__ROL8__(v185, 25) ^ __ROR8__(v185, 28) ^ __ROL8__(v185, 30));
      v189 = ((v318 >> 6) ^ __ROR8__(v318, 19) ^ __ROL8__(v318, 3))
           + v323
           + v182
           + ((v298 >> 7) ^ __ROR8__(v298, 1) ^ __ROR8__(v298, 8));
      v190 = (v179 ^ v187 & (v184 ^ v179))
           + v189
           + 0x34B0BCB5E19B48A8LL
           + v174
           + (__ROL8__(v187, 23) ^ __ROR8__(v187, 14) ^ __ROR8__(v187, 18));
      v191 = v190 + v175;
      v192 = v190
           + (v188 & v185 | v180 & (v188 | v185))
           + (__ROL8__(v188, 25) ^ __ROR8__(v188, 28) ^ __ROL8__(v188, 30));
      v193 = v316
           + v298
           + ((v301 >> 7) ^ __ROR8__(v301, 1) ^ __ROR8__(v301, 8))
           + ((v308 >> 6) ^ __ROR8__(v308, 19) ^ __ROL8__(v308, 3));
      v194 = v193 + 0x391C0CB3C5C95A63LL;
      v324 = v193;
      v195 = v319;
      v196 = (v184 ^ v191 & (v187 ^ v184))
           + v194
           + v179
           + (__ROL8__(v191, 23) ^ __ROR8__(v191, 14) ^ __ROR8__(v191, 18));
      v197 = v196 + v180;
      v198 = v196
           + (v192 & v188 | v185 & (v192 | v188))
           + (__ROL8__(v192, 25) ^ __ROR8__(v192, 28) ^ __ROL8__(v192, 30));
      v199 = (v319 >> 7) ^ __ROR8__(v319, 1) ^ __ROR8__(v319, 8);
      v320 = v189;
      v200 = v333 + v301 + v199 + ((v189 >> 6) ^ __ROR8__(v189, 19) ^ __ROL8__(v189, 3));
      v201 = (v187 ^ v197 & (v191 ^ v187))
           + v200
           + 0x4ED8AA4AE3418ACBLL
           + v184
           + (__ROL8__(v197, 23) ^ __ROR8__(v197, 14) ^ __ROR8__(v197, 18));
      v202 = v201 + v185;
      v203 = v201
           + (v198 & v192 | v188 & (v198 | v192))
           + (__ROL8__(v198, 25) ^ __ROR8__(v198, 28) ^ __ROL8__(v198, 30));
      v289 = ((v324 >> 6) ^ __ROR8__(v324, 19) ^ __ROL8__(v324, 3))
           + v313
           + v195
           + ((v304 >> 7) ^ __ROR8__(v304, 1) ^ __ROR8__(v304, 8));
      v204 = (v191 ^ v202 & (v197 ^ v191))
           + v289
           + 0x5B9CCA4F7763E373LL
           + v187
           + (__ROL8__(v202, 23) ^ __ROR8__(v202, 14) ^ __ROR8__(v202, 18));
      v205 = v204 + v188;
      v206 = v204
           + (v203 & v198 | v192 & (v203 | v198))
           + (__ROL8__(v203, 25) ^ __ROR8__(v203, 28) ^ __ROL8__(v203, 30));
      v207 = v304 + ((v286 >> 7) ^ __ROR8__(v286, 1) ^ __ROR8__(v286, 8));
      v305 = v200;
      v208 = ((v200 >> 6) ^ __ROR8__(v200, 19) ^ __ROL8__(v200, 3)) + v177 + v207;
      v209 = (v197 ^ v205 & (v202 ^ v197))
           + v208
           + 0x682E6FF3D6B2B8A3LL
           + v191
           + (__ROL8__(v205, 23) ^ __ROR8__(v205, 14) ^ __ROR8__(v205, 18));
      v210 = v209 + v192;
      v211 = v321;
      v322 = v208;
      v212 = (__ROL8__(v206, 25) ^ __ROR8__(v206, 28) ^ __ROL8__(v206, 30))
           + (v206 & v203 | v198 & (v206 | v203))
           + v209;
      v213 = v291;
      v287 = v286
           + ((v211 >> 7) ^ __ROR8__(v211, 1) ^ __ROR8__(v211, 8))
           + v318
           + ((v289 >> 6) ^ __ROR8__(v289, 19) ^ __ROL8__(v289, 3));
      v214 = (v202 ^ v210 & (v205 ^ v202))
           + v287
           + 0x748F82EE5DEFB2FCLL
           + v197
           + (__ROR8__(v210, 14) ^ __ROR8__(v210, 18) ^ __ROL8__(v210, 23));
      v215 = v214 + v198;
      v216 = v214
           + (__ROL8__(v212, 25) ^ __ROR8__(v212, 28) ^ __ROL8__(v212, 30))
           + (v212 & v206 | v203 & (v212 | v206));
      v292 = ((v208 >> 6) ^ __ROR8__(v208, 19) ^ __ROL8__(v208, 3))
           + v211
           + ((v291 >> 7) ^ __ROR8__(v291, 1) ^ __ROR8__(v291, 8))
           + v308;
      v217 = (v205 ^ v215 & (v210 ^ v205))
           + v292
           + 0x78A5636F43172F60LL
           + v202
           + (__ROR8__(v215, 14) ^ __ROR8__(v215, 18) ^ __ROL8__(v215, 23));
      v218 = v217 + v203;
      v219 = v217
           + (__ROL8__(v216, 25) ^ __ROR8__(v216, 28) ^ __ROL8__(v216, 30))
           + (v216 & v212 | v206 & (v216 | v212));
      v294 = ((v287 >> 6) ^ __ROR8__(v287, 19) ^ __ROL8__(v287, 3))
           + v213
           + ((v310 >> 7) ^ __ROR8__(v310, 1) ^ __ROR8__(v310, 8))
           + v320;
      v220 = (v210 ^ v218 & (v215 ^ v210))
           + v294
           - 0x7B3787EB5E0F548ELL
           + v205
           + (__ROR8__(v218, 14) ^ __ROR8__(v218, 18) ^ __ROL8__(v218, 23));
      v221 = v220 + v206;
      v222 = v220
           + (__ROL8__(v219, 25) ^ __ROR8__(v219, 28) ^ __ROL8__(v219, 30))
           + (v219 & v216 | v212 & (v219 | v216));
      v296 = v310
           + ((v323 >> 7) ^ __ROR8__(v323, 1) ^ __ROR8__(v323, 8))
           + v324
           + ((v292 >> 6) ^ __ROR8__(v292, 19) ^ __ROL8__(v292, 3));
      v223 = (v215 ^ v221 & (v218 ^ v215))
           + v296
           - 0x7338FDF7E59BC614LL
           + v210
           + (__ROR8__(v221, 14) ^ __ROR8__(v221, 18) ^ __ROL8__(v221, 23));
      v224 = v212 + v223;
      v225 = v313;
      v226 = (__ROL8__(v222, 25) ^ __ROR8__(v222, 28) ^ __ROL8__(v222, 30))
           + (v222 & v219 | v216 & (v222 | v219))
           + v223;
      v311 = ((v294 >> 6) ^ __ROR8__(v294, 19) ^ __ROL8__(v294, 3))
           + v305
           + v323
           + ((v316 >> 7) ^ __ROR8__(v316, 1) ^ __ROR8__(v316, 8));
      v227 = (v218 ^ v224 & (v221 ^ v218))
           + v311
           - 0x6F410005DC9CE1D8LL
           + v215
           + (__ROR8__(v224, 14) ^ __ROR8__(v224, 18) ^ __ROL8__(v224, 23));
      v228 = v227 + v216;
      v229 = v227
           + (__ROL8__(v226, 25) ^ __ROR8__(v226, 28) ^ __ROL8__(v226, 30))
           + (v226 & v222 | v219 & (v226 | v222));
      v299 = ((v296 >> 6) ^ __ROR8__(v296, 19) ^ __ROL8__(v296, 3))
           + v289
           + v316
           + ((v333 >> 7) ^ __ROR8__(v333, 1) ^ __ROR8__(v333, 8));
      v230 = (v221 ^ v228 & (v224 ^ v221))
           + v299
           - 0x5BAF9314217D4217LL
           + v218
           + (__ROR8__(v228, 14) ^ __ROR8__(v228, 18) ^ __ROL8__(v228, 23));
      v231 = v230 + v219;
      v232 = v230
           + (__ROL8__(v229, 25) ^ __ROR8__(v229, 28) ^ __ROL8__(v229, 30))
           + (v229 & v226 | v222 & (v229 | v226));
      v314 = ((v311 >> 6) ^ __ROR8__(v311, 19) ^ __ROL8__(v311, 3))
           + v322
           + v333
           + ((v313 >> 7) ^ __ROR8__(v313, 1) ^ __ROR8__(v313, 8));
      v233 = (v224 ^ v231 & (v228 ^ v224))
           + v314
           - 0x41065C084D3986EBLL
           + v221
           + (__ROR8__(v231, 14) ^ __ROR8__(v231, 18) ^ __ROL8__(v231, 23));
      v234 = v222 + v233;
      v235 = v233
           + (__ROL8__(v232, 25) ^ __ROR8__(v232, 28) ^ __ROL8__(v232, 30))
           + (v232 & v229 | v226 & (v232 | v229));
      v302 = ((v299 >> 6) ^ __ROR8__(v299, 19) ^ __ROL8__(v299, 3))
           + v287
           + v225
           + ((v177 >> 7) ^ __ROR8__(v177, 1) ^ __ROR8__(v177, 8));
      v236 = (v228 ^ (v222 + v233) & (v231 ^ v228))
           + v302
           - 0x398E870D1C8DACD5LL
           + v224
           + (__ROR8__(v234, 14) ^ __ROR8__(v222 + v233, 18) ^ __ROL8__(v234, 23));
      v237 = v226 + v236;
      v238 = v236
           + (__ROL8__(v235, 25) ^ __ROR8__(v235, 28) ^ __ROL8__(v235, 30))
           + (v235 & v232 | v229 & (v235 | v232));
      v337 = v292
           + ((v318 >> 7) ^ __ROR8__(v318, 1) ^ __ROR8__(v318, 8))
           + v177
           + ((v314 >> 6) ^ __ROR8__(v314, 19) ^ __ROL8__(v314, 3));
      v239 = (v231 ^ (v226 + v236) & (v234 ^ v231))
           + v337
           - 0x35D8C13115D99E64LL
           + v228
           + (__ROR8__(v237, 14) ^ __ROR8__(v237, 18) ^ __ROL8__(v237, 23));
      v240 = v239 + v229;
      v241 = v239
           + (__ROL8__(v238, 25) ^ __ROR8__(v238, 28) ^ __ROL8__(v238, 30))
           + (v238 & v235 | v232 & (v238 | v235));
      v338 = v294
           + v318
           + ((v308 >> 7) ^ __ROR8__(v308, 1) ^ __ROR8__(v308, 8))
           + ((v302 >> 6) ^ __ROR8__(v302, 19) ^ __ROL8__(v302, 3));
      v242 = (v234 ^ v240 & ((v226 + v236) ^ v234))
           + v338
           - 0x2E794738DE3F3DF9LL
           + v231
           + (__ROR8__(v240, 14) ^ __ROR8__(v240, 18) ^ __ROL8__(v240, 23));
      v243 = v242 + v232;
      v244 = v242
           + (__ROL8__(v241, 25) ^ __ROR8__(v241, 28) ^ __ROL8__(v241, 30))
           + (v241 & v238 | v235 & (v241 | v238));
      v339 = v296
           + v308
           + ((v320 >> 7) ^ __ROR8__(v320, 1) ^ __ROR8__(v320, 8))
           + ((v337 >> 6) ^ __ROR8__(v337, 19) ^ __ROL8__(v337, 3));
      v245 = (v237 ^ v243 & (v240 ^ v237))
           + v339
           - 0x15258229321F14E2LL
           + v234
           + (__ROR8__(v243, 14) ^ __ROR8__(v243, 18) ^ __ROL8__(v243, 23));
      v246 = v245 + v235;
      v247 = v245
           + (__ROL8__(v244, 25) ^ __ROR8__(v244, 28) ^ __ROL8__(v244, 30))
           + (v244 & v241 | v238 & (v244 | v241));
      v340 = v311
           + v320
           + ((v324 >> 7) ^ __ROR8__(v324, 1) ^ __ROR8__(v324, 8))
           + ((v338 >> 6) ^ __ROR8__(v338, 19) ^ __ROL8__(v338, 3));
      v248 = (v240 ^ v246 & (v243 ^ v240))
           + v340
           - 0xA82B08011912E88LL
           + v237
           + (__ROR8__(v246, 14) ^ __ROR8__(v246, 18) ^ __ROL8__(v246, 23));
      v249 = v248 + v238;
      v250 = v248
           + (__ROL8__(v247, 25) ^ __ROR8__(v247, 28) ^ __ROL8__(v247, 30))
           + (v247 & v244 | v241 & (v247 | v244));
      v341 = ((v305 >> 7) ^ __ROR8__(v305, 1) ^ __ROR8__(v305, 8))
           + v324
           + v299
           + ((v339 >> 6) ^ __ROR8__(v339, 19) ^ __ROL8__(v339, 3));
      v251 = (v243 ^ v249 & (v246 ^ v243))
           + v341
           + 0x6F067AA72176FBALL
           + v240
           + (__ROR8__(v249, 14) ^ __ROR8__(v249, 18) ^ __ROL8__(v249, 23));
      v252 = v251 + v241;
      v253 = v251
           + (__ROL8__(v250, 25) ^ __ROR8__(v250, 28) ^ __ROL8__(v250, 30))
           + (v250 & v247 | v244 & (v250 | v247));
      v342 = v314
           + v305
           + ((v289 >> 7) ^ __ROR8__(v289, 1) ^ __ROR8__(v289, 8))
           + ((v340 >> 6) ^ __ROR8__(v340, 19) ^ __ROL8__(v340, 3));
      v254 = (v246 ^ v252 & (v249 ^ v246))
           + v342
           + 0xA637DC5A2C898A6LL
           + v243
           + (__ROR8__(v252, 14) ^ __ROR8__(v252, 18) ^ __ROL8__(v252, 23));
      v255 = v254 + v244;
      v256 = v254
           + (__ROL8__(v253, 25) ^ __ROR8__(v253, 28) ^ __ROL8__(v253, 30))
           + (v253 & v250 | v247 & (v253 | v250));
      v343 = ((v341 >> 6) ^ __ROR8__(v341, 19) ^ __ROL8__(v341, 3))
           + v302
           + v289
           + ((v322 >> 7) ^ __ROR8__(v322, 1) ^ __ROR8__(v322, 8));
      v257 = (v249 ^ v255 & (v252 ^ v249))
           + v343
           + 0x113F9804BEF90DAELL
           + v246
           + (__ROR8__(v255, 14) ^ __ROR8__(v255, 18) ^ __ROL8__(v255, 23));
      v258 = v257 + v247;
      v259 = v257
           + (__ROL8__(v256, 25) ^ __ROR8__(v256, 28) ^ __ROL8__(v256, 30))
           + (v256 & v253 | v250 & (v256 | v253));
      v344 = ((v342 >> 6) ^ __ROR8__(v342, 19) ^ __ROL8__(v342, 3))
           + v337
           + v322
           + ((v287 >> 7) ^ __ROR8__(v287, 1) ^ __ROR8__(v287, 8));
      v260 = (v252 ^ v258 & (v255 ^ v252))
           + v344
           + 0x1B710B35131C471BLL
           + v249
           + (__ROL8__(v258, 23) ^ __ROR8__(v258, 14) ^ __ROR8__(v258, 18));
      v261 = v250 + v260;
      v262 = (__ROL8__(v259, 25) ^ __ROR8__(v259, 28) ^ __ROL8__(v259, 30))
           + (v259 & v256 | v253 & (v259 | v256))
           + v260;
      v345 = v287
           + ((v292 >> 7) ^ __ROR8__(v292, 1) ^ __ROR8__(v292, 8))
           + v338
           + ((v343 >> 6) ^ __ROR8__(v343, 19) ^ __ROL8__(v343, 3));
      v263 = (v255 ^ v261 & (v258 ^ v255))
           + v345
           + 0x28DB77F523047D84LL
           + v252
           + (__ROR8__(v261, 14) ^ __ROR8__(v261, 18) ^ __ROL8__(v261, 23));
      v264 = v263 + v253;
      v265 = v263
           + (__ROL8__(v262, 25) ^ __ROR8__(v262, 28) ^ __ROL8__(v262, 30))
           + (v262 & v259 | v256 & (v262 | v259));
      v346 = v339
           + v292
           + ((v294 >> 7) ^ __ROR8__(v294, 1) ^ __ROR8__(v294, 8))
           + ((v344 >> 6) ^ __ROR8__(v344, 19) ^ __ROL8__(v344, 3));
      v266 = (v258 ^ v264 & (v261 ^ v258))
           + v346
           + 0x32CAAB7B40C72493LL
           + v255
           + (__ROR8__(v264, 14) ^ __ROR8__(v264, 18) ^ __ROL8__(v264, 23));
      v267 = v266 + v256;
      v268 = v266
           + (__ROL8__(v265, 25) ^ __ROR8__(v265, 28) ^ __ROL8__(v265, 30))
           + (v265 & v262 | v259 & (v265 | v262));
      v347 = v340
           + v294
           + ((v296 >> 7) ^ __ROR8__(v296, 1) ^ __ROR8__(v296, 8))
           + ((v345 >> 6) ^ __ROR8__(v345, 19) ^ __ROL8__(v345, 3));
      v269 = (v261 ^ v267 & (v264 ^ v261))
           + v347
           + 0x3C9EBE0A15C9BEBCLL
           + v258
           + (__ROL8__(v267, 23) ^ __ROR8__(v267, 14) ^ __ROR8__(v267, 18));
      v270 = v269 + v259;
      v271 = (__ROL8__(v268, 25) ^ __ROR8__(v268, 28) ^ __ROL8__(v268, 30))
           + (v268 & v265 | v262 & (v268 | v265))
           + v269;
      v348 = v341
           + v296
           + ((v311 >> 7) ^ __ROR8__(v311, 1) ^ __ROR8__(v311, 8))
           + ((v346 >> 6) ^ __ROR8__(v346, 19) ^ __ROL8__(v346, 3));
      v272 = (v264 ^ v270 & (v267 ^ v264))
           + v348
           + 0x431D67C49C100D4CLL
           + v261
           + (__ROL8__(v270, 23) ^ __ROR8__(v270, 14) ^ __ROR8__(v270, 18));
      v273 = v272 + v262;
      v274 = (__ROL8__(v271, 25) ^ __ROR8__(v271, 28) ^ __ROL8__(v271, 30))
           + (v271 & v268 | v265 & (v271 | v268))
           + v272;
      v349 = v311
           + ((v299 >> 7) ^ __ROR8__(v299, 1) ^ __ROR8__(v299, 8))
           + v342
           + ((v347 >> 6) ^ __ROR8__(v347, 19) ^ __ROL8__(v347, 3));
      v275 = (v267 ^ v273 & (v270 ^ v267))
           + v349
           + 0x4CC5D4BECB3E42B6LL
           + v264
           + (__ROL8__(v273, 23) ^ __ROR8__(v273, 14) ^ __ROR8__(v273, 18));
      v276 = v275 + v265;
      v277 = (__ROL8__(v274, 25) ^ __ROR8__(v274, 28) ^ __ROL8__(v274, 30))
           + (v274 & v271 | v268 & (v274 | v271))
           + v275;
      v350 = v343
           + v299
           + ((v314 >> 7) ^ __ROR8__(v314, 1) ^ __ROR8__(v314, 8))
           + (__ROR8__(v348, 19) ^ __ROL8__(v348, 3) ^ (v348 >> 6));
      v278 = (v270 ^ v276 & (v273 ^ v270))
           + v350
           + 0x597F299CFC657E2ALL
           + v267
           + (__ROL8__(v276, 23) ^ __ROR8__(v276, 14) ^ __ROR8__(v276, 18));
      v279 = v278 + v268;
      v280 = (__ROL8__(v277, 25) ^ __ROR8__(v277, 28) ^ __ROL8__(v277, 30))
           + (v277 & v274 | v271 & (v277 | v274))
           + v278;
      v351 = ((v349 >> 6) ^ __ROR8__(v349, 19) ^ __ROL8__(v349, 3))
           + v314
           + ((v302 >> 7) ^ __ROR8__(v302, 1) ^ __ROR8__(v302, 8))
           + v344;
      v281 = v351
           + 0x5FCB6FAB3AD6FAECLL
           + v270
           + (v273 ^ v279 & (v276 ^ v273))
           + (__ROL8__(v279, 23) ^ __ROR8__(v279, 14) ^ __ROR8__(v279, 18));
      v282 = v281 + v271;
      v283 = (__ROL8__(v280, 25) ^ __ROR8__(v280, 28) ^ __ROL8__(v280, 30))
           + (v280 & v277 | v274 & (v280 | v277))
           + v281;
      v326 += v283;
      v352 = ((v350 >> 6) ^ __ROR8__(v350, 19) ^ __ROL8__(v350, 3))
           + v302
           + ((v337 >> 7) ^ __ROR8__(v337, 1) ^ __ROR8__(v337, 8))
           + v345;
      v284 = (v276 ^ v282 & (v279 ^ v276))
           + v352
           + 0x6C44198C4A475817LL
           + v273
           + (__ROL8__(v282, 23) ^ __ROR8__(v282, 14) ^ __ROR8__(v282, 18));
      v334 += (v283 & v280 | v277 & (v283 | v280))
            + (__ROL8__(v283, 25) ^ __ROR8__(v283, 28) ^ __ROL8__(v283, 30))
            + v284;
      *a3 = v334;
      v10 = v326;
      a3[1] = v326;
      v327 += v280;
      v6 = v327;
      v328 += v277;
      v7 = v328;
      v329 += v284 + v274;
      v14 = v329;
      result = v334;
      v330 += v282;
      v15 = v330;
      v331 += v279;
      v16 = v331;
      v332 += v276;
      v13 = v332;
      a3[2] = v327;
      a3[3] = v328;
      a3[4] = v329;
      a3[5] = v330;
      a3[6] = v331;
      a3[7] = v332;
    }
    while ( v325 < v335 );
  }
  return result;
}

__int64 __fastcall sub_406ED0(__int64 *a1)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rbp
  bool v4; // cf
  unsigned __int64 v5; // rdx

  v1 = a1[10];
  v2 = a1[9];
  v3 = (-(__int64)(v1 < 0x70) & 0xFFFFFFFFFFFFFF80LL) + 256;
  v4 = __CFADD__(a1[8], v1);
  v5 = a1[8] + v1;
  a1[8] = v5;
  if ( v4 )
    a1[9] = ++v2;
  a1[(-(__int64)(v1 < 0x70) & 0xFFFFFFFFFFFFFFF0LL) + 41] = _byteswap_uint64((v5 >> 61) | (8 * v2));
  a1[(-(__int64)(v1 < 0x70) & 0xFFFFFFFFFFFFFFF0LL) + 42] = ((8 * v5) >> 40) & 0xFF00 | ((8 * v5) >> 24) & 0xFF0000 | ((8 * v5) >> 8) & 0xFF000000 | ((8 * v5) >> 56) | (v5 << 11) & 0xFF00000000LL | (v5 << 59) | (v5 << 27) & 0xFF0000000000LL | (v5 << 43) & 0xFF000000000000LL;
  memcpy((char *)a1 + v1 + 88, &unk_40C260, v3 - v1 - 16);
  return sub_403280((unsigned __int64)(a1 + 11), v3, a1);
}

__int64 __fastcall sub_407000(__int64 *a1, __int64 a2)
{
  sub_406ED0(a1);
  return sub_403240((__int64)a1, a2);
}

__int64 __fastcall sub_407030(__int64 *a1, __int64 a2)
{
  sub_406ED0(a1);
  return sub_403260((__int64)a1, a2);
}

void __fastcall sub_407060(const __m128i *src, size_t n, __int64 a3)
{
  unsigned __int64 v3; // r13
  const __m128i *v5; // rbx
  __int64 v6; // rbp
  __m128i *v7; // rbp
  const __m128i *v8; // r14
  __m128i v9; // xmm0
  __int64 v10; // rdx
  char *v11; // rsi
  size_t v12; // r13
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r15
  size_t v16; // r14
  unsigned __int64 v17; // rsi
  char *v18; // rdi
  unsigned int v19; // ecx
  unsigned __int64 v20; // rbp
  _QWORD *v21; // rsi
  __int64 v22; // rcx

  v3 = n;
  v5 = src;
  v6 = *(_QWORD *)(a3 + 80);
  if ( v6 )
  {
    v15 = a3 + 88;
    v16 = 256 - v6;
    if ( 256 - v6 > n )
      v16 = n;
    memcpy((void *)(a3 + 88 + v6), src, v16);
    v17 = v16 + *(_QWORD *)(a3 + 80);
    *(_QWORD *)(a3 + 80) = v17;
    if ( v17 > 0x80 )
    {
      sub_403280(v15, v17 & 0xFFFFFFFFFFFFFF80LL, (__int64 *)a3);
      v20 = (v16 + v6) & 0xFFFFFFFFFFFFFF80LL;
      v21 = (_QWORD *)(v15 + v20);
      v22 = *(_QWORD *)(a3 + 80) & 0x7FLL;
      *(_QWORD *)(a3 + 80) = v22;
      if ( (unsigned int)v22 >= 8 )
      {
        *(_QWORD *)(a3 + 88) = *v21;
        *(_QWORD *)(v15 + (unsigned int)v22 - 8) = *(_QWORD *)((char *)v21 + (unsigned int)v22 - 8);
        qmemcpy(
          (void *)((a3 + 96) & 0xFFFFFFFFFFFFFFF8LL),
          (const void *)(v20 + ((a3 + 96) & 0xFFFFFFFFFFFFFFF8LL)),
          8LL * (((unsigned int)v15 - (((_DWORD)a3 + 96) & 0xFFFFFFF8) + (unsigned int)v22) >> 3));
      }
      else if ( (v22 & 4) != 0 )
      {
        *(_DWORD *)(a3 + 88) = *(_DWORD *)v21;
        *(_DWORD *)(v15 + (unsigned int)v22 - 4) = *(_DWORD *)((char *)v21 + (unsigned int)v22 - 4);
      }
      else if ( (_DWORD)v22 )
      {
        *(_BYTE *)(a3 + 88) = *(_BYTE *)v21;
        if ( (v22 & 2) != 0 )
          *(_WORD *)(v15 + (unsigned int)v22 - 2) = *(_WORD *)((char *)v21 + (unsigned int)v22 - 2);
      }
    }
    v5 = (const __m128i *)((char *)src + v16);
    v3 -= v16;
  }
  if ( v3 > 0x7F )
  {
    if ( ((unsigned __int8)v5 & 7) != 0 )
    {
      v7 = (__m128i *)(a3 + 88);
      if ( v3 == 128 )
      {
        v8 = v5;
      }
      else
      {
        v8 = &v5[8 * ((v3 - 129) >> 7) + 8];
        do
        {
          v9 = _mm_loadu_si128(v5);
          v5 += 8;
          *v7 = v9;
          *(__m128i *)(a3 + 104) = _mm_loadu_si128(v5 - 7);
          *(__m128i *)(a3 + 120) = _mm_loadu_si128(v5 - 6);
          *(__m128i *)(a3 + 136) = _mm_loadu_si128(v5 - 5);
          *(__m128i *)(a3 + 152) = _mm_loadu_si128(v5 - 4);
          *(__m128i *)(a3 + 168) = _mm_loadu_si128(v5 - 3);
          *(__m128i *)(a3 + 184) = _mm_loadu_si128(v5 - 2);
          *(__m128i *)(a3 + 200) = _mm_loadu_si128(v5 - 1);
          sub_403280(a3 + 88, 128LL, (__int64 *)a3);
        }
        while ( v5 != v8 );
        v3 = v3 - ((v3 - 129) >> 7 << 7) - 128;
      }
LABEL_8:
      v10 = *(_QWORD *)(a3 + 80);
      v11 = &v7->m128i_i8[v10];
      if ( (unsigned int)v3 >= 8 )
      {
        v18 = (char *)((unsigned __int64)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL);
        *(_QWORD *)v11 = v8->m128i_i64[0];
        *(_QWORD *)&v11[(unsigned int)v3 - 8] = *(__int64 *)((char *)&v8->m128i_i64[-1] + (unsigned int)v3);
        v19 = v3 + (_DWORD)v11 - (_DWORD)v18;
        v12 = v10 + v3;
        qmemcpy(v18, (char *)v8 - (v11 - v18), 8LL * (v19 >> 3));
        if ( v12 <= 0x7F )
        {
LABEL_14:
          *(_QWORD *)(a3 + 80) = v12;
          return;
        }
      }
      else
      {
        if ( (v3 & 4) != 0 )
        {
          *(_DWORD *)v11 = v8->m128i_i32[0];
          *(_DWORD *)&v11[(unsigned int)v3 - 4] = *(__int32 *)((char *)&v8->m128i_i32[-1] + (unsigned int)v3);
        }
        else if ( (_DWORD)v3 )
        {
          *v11 = v8->m128i_i8[0];
          if ( (v3 & 2) != 0 )
            *(_WORD *)&v11[(unsigned int)v3 - 2] = *(__int16 *)((char *)&v8->m128i_i16[-1] + (unsigned int)v3);
        }
        v12 = v10 + v3;
        if ( v12 <= 0x7F )
          goto LABEL_14;
      }
      v12 -= 128LL;
      sub_403280((unsigned __int64)v7, 128LL, (__int64 *)a3);
      memcpy(v7, (const void *)(a3 + 216), v12);
      goto LABEL_14;
    }
    v13 = v3;
    v14 = (unsigned __int64)v5;
    v3 &= 0x7Fu;
    v5 = (const __m128i *)((char *)v5 + (v13 & 0xFFFFFFFFFFFFFF80LL));
    sub_403280(v14, v13 & 0xFFFFFFFFFFFFFF80LL, (__int64 *)a3);
  }
  if ( v3 )
  {
    v7 = (__m128i *)(a3 + 88);
    v8 = v5;
    goto LABEL_8;
  }
}

__int64 __fastcall sub_407370(const __m128i *a1, size_t a2, __int64 a3)
{
  __int64 v5[45]; // [rsp+0h] [rbp-168h] BYREF

  v5[0] = 0x6A09E667F3BCC908LL;
  v5[1] = 0xBB67AE8584CAA73BLL;
  v5[2] = 0x3C6EF372FE94F82BLL;
  v5[3] = 0xA54FF53A5F1D36F1LL;
  v5[4] = 0x510E527FADE682D1LL;
  v5[5] = 0x9B05688C2B3E6C1FLL;
  v5[6] = 0x1F83D9ABFB41BD6BLL;
  v5[7] = 0x5BE0CD19137E2179LL;
  memset(&v5[8], 0, 24);
  sub_407060(a1, a2, (__int64)v5);
  sub_406ED0(v5);
  return sub_403240((__int64)v5, a3);
}

__int64 __fastcall sub_407440(const __m128i *a1, size_t a2, __int64 a3)
{
  __int64 v5[45]; // [rsp+0h] [rbp-168h] BYREF

  v5[0] = 0xCBBB9D5DC1059ED8LL;
  v5[1] = 0x629A292A367CD507LL;
  v5[2] = 0x9159015A3070DD17LL;
  v5[3] = 0x152FECD8F70E5939LL;
  v5[4] = 0x67332667FFC00B31LL;
  v5[5] = 0x8EB44A8768581511LL;
  v5[6] = 0xDB0C2E0D64F98FA7LL;
  v5[7] = 0x47B5481DBEFA4FA4LL;
  memset(&v5[8], 0, 24);
  sub_407060(a1, a2, (__int64)v5);
  sub_406ED0(v5);
  return sub_403260((__int64)v5, a3);
}

__int64 __fastcall sub_407510(FILE *stream, __int64 a2)
{
  __m128i *v2; // rax
  __m128i *v3; // r12
  size_t v4; // rbx
  int flags; // edx
  size_t v6; // rax
  __int64 v8[49]; // [rsp+0h] [rbp-188h] BYREF

  v2 = (__m128i *)malloc(0x8048uLL);
  if ( !v2 )
    return 1LL;
  v3 = v2;
  v8[0] = 0x6A09E667F3BCC908LL;
  v8[1] = 0xBB67AE8584CAA73BLL;
  v8[2] = 0x3C6EF372FE94F82BLL;
  v8[3] = 0xA54FF53A5F1D36F1LL;
  v8[4] = 0x510E527FADE682D1LL;
  v8[5] = 0x9B05688C2B3E6C1FLL;
  v8[6] = 0x1F83D9ABFB41BD6BLL;
  v8[7] = 0x5BE0CD19137E2179LL;
  memset(&v8[8], 0, 24);
LABEL_3:
  v4 = 0LL;
  while ( 1 )
  {
    v6 = fread_unlocked(&v3->m128i_i8[v4], 1uLL, 0x8000 - v4, stream);
    v4 += v6;
    if ( v4 == 0x8000 )
    {
      sub_403280((unsigned __int64)v3, 0x8000LL, v8);
      goto LABEL_3;
    }
    flags = stream->_flags;
    if ( !v6 )
      break;
    if ( (flags & 0x10) != 0 )
      goto LABEL_9;
  }
  if ( (flags & 0x20) != 0 )
  {
    free(v3);
    return 1LL;
  }
LABEL_9:
  if ( v4 )
    sub_407060(v3, v4, (__int64)v8);
  sub_406ED0(v8);
  sub_403240((__int64)v8, a2);
  free(v3);
  return 0LL;
}

__int64 __fastcall sub_4076B0(FILE *stream, __int64 a2)
{
  __m128i *v2; // rax
  __m128i *v3; // r12
  size_t v4; // rbx
  int flags; // edx
  size_t v6; // rax
  __int64 v8[49]; // [rsp+0h] [rbp-188h] BYREF

  v2 = (__m128i *)malloc(0x8048uLL);
  if ( !v2 )
    return 1LL;
  v3 = v2;
  v8[0] = 0xCBBB9D5DC1059ED8LL;
  v8[1] = 0x629A292A367CD507LL;
  v8[2] = 0x9159015A3070DD17LL;
  v8[3] = 0x152FECD8F70E5939LL;
  v8[4] = 0x67332667FFC00B31LL;
  v8[5] = 0x8EB44A8768581511LL;
  v8[6] = 0xDB0C2E0D64F98FA7LL;
  v8[7] = 0x47B5481DBEFA4FA4LL;
  memset(&v8[8], 0, 24);
LABEL_3:
  v4 = 0LL;
  while ( 1 )
  {
    v6 = fread_unlocked(&v3->m128i_i8[v4], 1uLL, 0x8000 - v4, stream);
    v4 += v6;
    if ( v4 == 0x8000 )
    {
      sub_403280((unsigned __int64)v3, 0x8000LL, v8);
      goto LABEL_3;
    }
    flags = stream->_flags;
    if ( !v6 )
      break;
    if ( (flags & 0x10) != 0 )
      goto LABEL_9;
  }
  if ( (flags & 0x20) != 0 )
  {
    free(v3);
    return 1LL;
  }
LABEL_9:
  if ( v4 )
    sub_407060(v3, v4, (__int64)v8);
  sub_406ED0(v8);
  sub_403260((__int64)v8, a2);
  free(v3);
  return 0LL;
}

void __fastcall sub_407860(FILE *a1, int a2)
{
  int v2; // eax

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

FILE *__fastcall sub_407890(const char *a1, const char *a2)
{
  FILE *v2; // rax
  FILE *v3; // rbx
  unsigned int v4; // eax
  int v6; // r12d
  int *v7; // rax
  int v8; // ebp
  int *v9; // rbx
  int *v10; // rax
  FILE *v11; // rdi
  int v12; // r12d
  int *v13; // rbp

  v2 = fopen(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = fileno(v2);
    if ( v4 <= 2 )
    {
      v6 = sub_409570(v4);
      if ( v6 < 0 )
      {
        v10 = __errno_location();
        v11 = v3;
        v3 = 0LL;
        v12 = *v10;
        v13 = v10;
        sub_409DB0(v11);
        *v13 = v12;
      }
      else if ( (unsigned int)sub_409DB0(v3) || (v3 = fdopen(v6, a2)) == 0LL )
      {
        v7 = __errno_location();
        v8 = *v7;
        v9 = v7;
        close(v6);
        *v9 = v8;
        return 0LL;
      }
    }
  }
  return v3;
}

char *__fastcall sub_407930(const char *a1)
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
  qword_60F308 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_4079D0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_40AF20();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40C331;
      if ( !v5 )
        return (char *)&unk_40C326;
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
    v2 = (char *)&unk_40C32D;
    if ( !v5 )
      return (char *)&unk_40C32A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_407AD0(
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
                return sub_407AD0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_407AD0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_40ADE0((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_407AD0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        s2 = "\"";
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
        s2 = "\"";
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
      s2 = "\"";
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
        a8 = sub_4079D0("`", a5);
        v51 = sub_4079D0("'", a5);
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

unsigned __int64 __fastcall sub_407AD0(
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
                return sub_407AD0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_407AD0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_40ADE0((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_407AD0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        s2 = "\"";
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
        s2 = "\"";
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
      s2 = "\"";
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
        a8 = sub_4079D0("`", a5);
        v51 = sub_4079D0("'", a5);
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

_BYTE *__fastcall sub_408D00(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  if ( dword_60F290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_409D70();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_60F280 )
    {
      v7 = (__m128i *)sub_409B80(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_60F280);
    }
    else
    {
      ptr = (void *)sub_409B80(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_60F290], 0, 16LL * (a1 + 1 - dword_60F290));
    dword_60F290 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_407AD0(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60F320 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_409B20(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_407AD0(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_408D00(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  if ( dword_60F290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_409D70();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_60F280 )
    {
      v7 = (__m128i *)sub_409B80(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_60F280);
    }
    else
    {
      ptr = (void *)sub_409B80(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_60F290], 0, 16LL * (a1 + 1 - dword_60F290));
    dword_60F290 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_407AD0(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60F320 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_409B20(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_407AD0(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

__int64 __fastcall sub_408EA0(__int128 *a1)
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
    v1 = &xmmword_60F420;
  result = sub_409D20(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_408F90(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_60F420;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_407AD0(
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

_BYTE *__fastcall sub_409010(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_60F420;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_407AD0(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_409B20(v11 + 1);
  sub_407AD0(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_409110()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( dword_60F290 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_60F290 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_60F320 )
  {
    free(v4);
    *(_QWORD *)&xmmword_60F280 = 256LL;
    *((_QWORD *)&xmmword_60F280 + 1) = &unk_60F320;
  }
  if ( v0 != &xmmword_60F280 )
  {
    free(v0);
    ptr = &xmmword_60F280;
  }
  dword_60F290 = 1;
}

_BYTE *__fastcall sub_409220(int a1, int a2, __int64 a3)
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
  return sub_408D00(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_409220(int a1, int a2, __int64 a3)
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
  return sub_408D00(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_409290(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_408D00(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_409290(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_408D00(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_409320(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_60F450;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F420);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F430);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F440);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_408D00(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_4093A0(__int64 a1)
{
  return sub_409320(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_4093D0(int a1, int a2, __int64 a3)
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
  return sub_408D00(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_4093D0(int a1, int a2, __int64 a3)
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
  return sub_408D00(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_409440(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F420);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F430);
  si128 = _mm_load_si128((const __m128i *)&xmmword_60F440);
  v8 = qword_60F450;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_408D00(a1, a4, a5, (__int64)v6);
}

__int64 __fastcall sub_409570(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6, char a7)
{
  return sub_409E30(a1, 0, 3, a4, a5, a6, a7);
}

__int64 __fastcall sub_409580(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
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
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v14 = *a5;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *a5;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *a5;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 7LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 8LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *a5;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *a5;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_409580(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
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
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v14 = *a5;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *a5;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *a5;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 7LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 8LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *a5;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *a5;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_409980(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_409580(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_409580(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_4099E0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_409580(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_409580(a1, a2, a3, a4, v15, i);
}

int sub_409AA0()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_40B5F2, "https://www.gnu.org/software/coreutils/");
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_409B20(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_409D70();
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_409B70(size_t a1)
{
  return sub_409B20(a1);
}

void *__fastcall sub_409B80(void *a1, size_t a2)
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
        sub_409D70();
    }
  }
  return result;
}

void *__fastcall sub_409CD0(size_t n)
{
  void *v1; // rax

  v1 = sub_409B20(n);
  return memset(v1, 0, n);
}

__int64 __fastcall sub_409CF0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_409D70(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_409D20(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_409B20(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_409D50(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_409D20(src, v1 + 1);
}

void __noreturn sub_409D70()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_409DB0(FILE *stream)
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
  if ( !(unsigned int)sub_409F70(stream) )
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

__int64 __fastcall sub_409E30(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v8; // eax
  int *v9; // rax
  int v10; // edi
  int v11; // r12d
  int *v12; // rbp
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // [rsp+30h] [rbp-38h]

  v16 = a3;
  if ( a2 == 1030 )
  {
    if ( dword_60F458 < 0 )
    {
      v6 = sub_409E30(a1, 0, a3, a4, a5, a6);
      if ( v6 >= 0 && dword_60F458 == -1 )
      {
LABEL_8:
        v8 = fcntl(v6, 1);
        if ( v8 < 0 || fcntl(v6, 2, v8 | 1u) == -1 )
        {
          v9 = __errno_location();
          v10 = v6;
          v6 = -1;
          v11 = *v9;
          v12 = v9;
          close(v10);
          *v12 = v11;
        }
      }
    }
    else
    {
      v6 = fcntl(a1, 1030, (unsigned int)a3);
      if ( v6 < 0 && *__errno_location() == 22 )
      {
        v6 = sub_409E30(a1, 0, v16, v13, v14, v15);
        if ( v6 >= 0 )
        {
          dword_60F458 = -1;
          goto LABEL_8;
        }
      }
      else
      {
        dword_60F458 = 1;
      }
    }
    return (unsigned int)v6;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_409F70(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_409FB0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_409FB0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_40A010(__int64 a1, int *a2)
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

__int64 __fastcall sub_40A0F0(
        int a1,
        __int64 *a2,
        const char *a3,
        char **a4,
        _DWORD *a5,
        int a6,
        int *a7,
        int a8,
        __int64 a9)
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
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  int v45; // [rsp+38h] [rbp-50h]
  char v46; // [rsp+3Fh] [rbp-49h]
  int v48; // [rsp+44h] [rbp-44h]
  int v49; // [rsp+48h] [rbp-40h]

  v9 = (const char *)*((_QWORD *)a7 + 4);
  v10 = (char *)v9;
  v46 = *v9;
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
    if ( !a6 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(a3, v46), result = 0xFFFFFFFFLL, !v18) )
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
  v48 = -1;
  v15 = s1;
  v16 = 0LL;
  v45 = 0;
  v49 = 0;
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
        v33 = a4;
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
    return 63LL;
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
          v36 = *a2;
          v37 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v37, v36);
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

__int64 __fastcall sub_40A710(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
{
  int v8; // r13d
  int v9; // eax
  int v10; // ebp
  const char *v12; // r15
  _BYTE *v13; // rdx
  char v14; // al
  char v15; // al
  int v16; // eax
  __int64 v17; // r14
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
        sub_40A010((__int64)a2, a7);
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
    v17 = a2[v16];
    if ( !strcmp((const char *)v17, "--") )
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
        sub_40A010((__int64)a2, a7);
        v18 = a7[11];
      }
      a7[12] = a1;
      *a7 = a1;
      goto LABEL_41;
    }
    if ( *(_BYTE *)v17 == 45 )
    {
      v30 = *(_BYTE *)(v17 + 1);
      if ( v30 )
      {
        if ( a4 )
        {
          if ( v30 == 45 )
          {
            *((_QWORD *)a7 + 4) = v17 + 2;
            return (unsigned int)sub_40A0F0(a1, a2, v12, a4, a5, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_40A0F0(a1, a2, v12, a4, a5, a6, a7, v8, (__int64)"-");
              if ( v21 != -1 )
                return v21;
              v17 = a2[*a7];
            }
          }
        }
        v13 = (_BYTE *)(v17 + 1);
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
        return (unsigned int)sub_40A0F0(a1, a2, v12, a4, a5, 0, a7, v8, (__int64)"-W ");
      }
      v32 = *a7;
      if ( (_DWORD)v32 != a1 )
      {
        v23 = a2[v32];
        goto LABEL_68;
      }
      if ( v8 )
      {
        v43 = *a2;
        v44 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v44, v43);
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
        else if ( a1 == (_DWORD)v36 )
        {
          if ( v8 )
          {
            v41 = *a2;
            v42 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v42, v41);
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
      __fprintf_chk(stderr, 1LL, v40, v39);
    }
    a7[2] = v21;
    return 63;
  }
  return v21;
}

__int64 __fastcall sub_40ACE0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_60F460 = dword_60F29C;
  dword_60F464 = dword_60F298;
  result = sub_40A710(a1, a2, a3, a4, a5, a6, &dword_60F460, a7);
  dword_60F29C = dword_60F460;
  qword_60F4A0 = qword_60F470;
  dword_60F294 = dword_60F468;
  return result;
}

__int64 __fastcall sub_40AD40(int a1, __int64 *a2, const char *a3)
{
  return sub_40ACE0(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_40AD60(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_40ACE0(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40AD80(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40A710(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40ADA0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_40ACE0(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_40ADC0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40A710(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_40ADE0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40AEC0(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

int __fastcall sub_40AE60(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  int result; // eax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_409DB0(stream);
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

bool __fastcall sub_40AEC0(int a1)
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

const char *sub_40AF20()
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
                sub_409DB0(v60);
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
            sub_409DB0(v39);
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

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40B500(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_60F208 )
    v1 = (void *)qword_60F208;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40B518(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_60EE30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
