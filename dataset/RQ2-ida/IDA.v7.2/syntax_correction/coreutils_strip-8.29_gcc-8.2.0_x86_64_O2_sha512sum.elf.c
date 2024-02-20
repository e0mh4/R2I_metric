#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  char v3; // r14
  char *v4; // r13
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbp
  const char *v7; // rbx
  int v8; // eax
  const char *v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // eax
  char *v12; // rax
  __int64 v13; // rbx
  __ssize_t v14; // rax
  __int64 v15; // r8
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
  __int64 v52; // r11
  const char *v53; // rdx
  __int64 v54; // rbx
  int *v55; // rax
  char *v56; // rax
  unsigned int v57; // ebx
  __int64 v58; // rdx
  char *v59; // rax
  char *v60; // rax
  char *v61; // rax
  char v62; // dl
  __int64 v63; // rax
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
  char *v77; // rax
  const char **v78; // [rsp+0h] [rbp-148h]
  char *s; // [rsp+8h] [rbp-140h]
  char v80; // [rsp+13h] [rbp-135h]
  int v81; // [rsp+14h] [rbp-134h]
  unsigned __int64 v82; // [rsp+18h] [rbp-130h]
  __int64 v83; // [rsp+20h] [rbp-128h]
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
  char v101; // [rsp+5Fh] [rbp-E9h]
  char *lineptr; // [rsp+60h] [rbp-E8h]
  size_t n; // [rsp+68h] [rbp-E0h]
  char v104[80]; // [rsp+70h] [rbp-D8h]
  char v105[136]; // [rsp+C0h] [rbp-88h]

  v3 = 0;
  LOBYTE(v4) = 0;
  LODWORD(v5) = -1;
  LODWORD(v6) = a1;
  v7 = (const char *)a2;
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
          sub_4099E0((char)stdout);
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
          goto LABEL_204;
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
        goto LABEL_204;
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
    goto LABEL_203;
  }
  if ( (_BYTE)v4 )
  {
    v9 = "the --tag option is meaningless when verifying checksums";
    if ( v3 )
      goto LABEL_203;
  }
  v9 = "the --binary and --text options are meaningless when verifying checksums";
  if ( ((v5 & 0x80000000) == 0LL) & (unsigned __int8)v4 )
    goto LABEL_203;
  if ( byte_60F2DA )
    goto LABEL_71;
  if ( !byte_60F2DC )
  {
    if ( !byte_60F2DB )
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
    v72 = dcgettext(0LL, v9, 5);
    error(0, 0, v72);
    goto LABEL_204;
  }
LABEL_37:
  if ( !byte_60F2DB )
    goto LABEL_38;
  while ( 1 )
  {
LABEL_40:
    if ( (_DWORD)v5 == -1 )
      LODWORD(v5) = 0;
    v94 = (const char **)&v7[8 * (int)v6];
    v10 = dword_60F29C;
    if ( dword_60F29C == (_DWORD)v6 )
    {
      *v94 = "-";
      ++v94;
    }
    v78 = (const char **)&v7[8 * v10];
    if ( v94 <= v78 )
    {
      v96 = 1;
      goto LABEL_130;
    }
    v96 = 1;
    v80 = (char)v4;
    v11 = (unsigned int)v5 < 1 ? 0xFFFFFFF6 : 0;
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
          goto LABEL_129;
        }
        if ( strchr(s, 92) || strchr(s, 10) )
        {
          if ( v98 )
          {
            v77 = stdout->_IO_write_ptr;
            v57 = 1;
            if ( stdout->_IO_write_end <= v77 )
            {
              __overflow(stdout, 92);
            }
            else
            {
              stdout->_IO_write_ptr = v77 + 1;
              *v77 = 92;
            }
LABEL_197:
            fwrite_unlocked("SHA512", 1uLL, 6uLL, stdout);
            fwrite_unlocked(" (", 1uLL, 2uLL, stdout);
            sub_402A40(s, v57);
            fwrite_unlocked(") = ", 1uLL, 4uLL, stdout);
            if ( !((unsigned __int64)qword_60F2E0 >> 1) )
              goto LABEL_153;
            goto LABEL_151;
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
            goto LABEL_157;
        }
        else
        {
          v57 = 0;
          if ( v98 )
            goto LABEL_197;
          if ( !((unsigned __int64)qword_60F2E0 >> 1) )
            goto LABEL_157;
        }
LABEL_151:
        v6 = 0LL;
        do
        {
          v58 = (unsigned __int8)v104[v6++];
          __printf_chk(1LL, "%02x", v58);
        }
        while ( (unsigned __int64)qword_60F2E0 >> 1 > v6 );
LABEL_153:
        if ( v98 )
        {
LABEL_154:
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
          goto LABEL_129;
        }
LABEL_157:
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
        goto LABEL_154;
      }
      v81 = strcmp(*v78, "-");
      if ( v81 )
      {
        v6 = sub_407890(s, 4240911LL);
        if ( !v6 )
          goto LABEL_141;
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
LABEL_66:
            ++v5;
            if ( byte_60F2DB )
            {
              v45 = sub_4093D0(0LL, 3LL, s, v17, v15);
              v46 = dcgettext(0LL, "%s: %lu: improperly formatted %s checksum line", 5);
              error(0, 0, v46, v45, v13, "SHA512", v78);
            }
LABEL_68:
            if ( *(_BYTE *)v6 & 0x30 )
              break;
            goto LABEL_69;
          }
          v31 = &v16[v17];
          v52 = v15 - 1;
          if ( v15 != 1 )
          {
            if ( v31[v15 - 1] == 41 )
            {
LABEL_162:
              v53 = &v31[v52];
LABEL_163:
              if ( v19 )
              {
                v24 = (const char *)v52;
                v87 = v53;
                v70 = sub_4029B0(v31, v52);
                v53 = v87;
                if ( !v70 )
                  goto LABEL_66;
              }
              *v53 = 0;
              v62 = v31[v52 + 1];
              v63 = v52 + 1;
              if ( v62 == 9 || v62 == 32 )
              {
                do
                {
                  do
                    v62 = v31[++v63];
                  while ( v62 == 32 );
                }
                while ( v62 == 9 );
              }
              if ( v62 != 61 )
                goto LABEL_66;
              v4 = (char *)&v31[v63 + 1];
              if ( *v4 == 32 || *v4 == 9 )
              {
                v64 = &v31[v63 + 2];
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
              goto LABEL_175;
            }
            while ( --v52 )
            {
              if ( v31[v52] == 41 )
                goto LABEL_162;
            }
          }
          if ( *v31 != 41 )
            goto LABEL_66;
          v53 = v31;
          v52 = 0LL;
          goto LABEL_163;
        }
        v17 = v15 - v18;
        if ( v15 - v18 < qword_60F2E8 + (unsigned __int64)(*v4 == 92) )
          goto LABEL_66;
        v27 = qword_60F2E0 + v18;
        v17 = (unsigned __int64)&v16[v27];
        v28 = v16[v27];
        if ( v28 != 32 && v28 != 9 )
          goto LABEL_66;
        *(_BYTE *)v17 = 0;
        v93 = v27;
        v89 = v19;
        v83 = v15;
        if ( !(unsigned __int8)sub_402950(v4, v24) )
          goto LABEL_66;
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
            goto LABEL_66;
          dword_60F210 = 1;
        }
        v31 = &v16[v29];
        if ( v89 )
        {
          v66 = sub_4029B0(v31, v83 - v29) != 0;
LABEL_175:
          if ( !v66 )
            goto LABEL_66;
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
            v33 = *v35++ == *v34++;
            --v17;
          }
          while ( v33 );
          if ( (!v32 && !v33) == v32 )
            goto LABEL_66;
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
            goto LABEL_97;
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
          goto LABEL_96;
        }
        if ( byte_60F2DA && v101 )
          goto LABEL_97;
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
              goto LABEL_180;
            }
          }
          ++v95;
          if ( byte_60F2DC )
            goto LABEL_97;
          if ( v36 )
          {
LABEL_123:
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
LABEL_96:
            v40 = dcgettext(0LL, v39, 5);
            __printf_chk(1LL, ": %s\n", v40);
            goto LABEL_97;
          }
          goto LABEL_188;
        }
        v48 = 0LL;
LABEL_180:
        v97 = byte_60F2DC;
        if ( byte_60F2DC )
          goto LABEL_97;
        v97 = byte_60F2D9;
        if ( byte_60F2D9 )
          goto LABEL_97;
        if ( v36 )
        {
          v97 = v15;
          goto LABEL_123;
        }
        v86 = v15;
        sub_402A40(v31, 0LL);
        v15 = v86;
        v97 = v86;
LABEL_188:
        if ( !byte_60F2D9 )
        {
          v39 = "OK";
          goto LABEL_96;
        }
LABEL_97:
        v3 = v80;
        if ( *(_BYTE *)v6 & 0x30 )
          break;
LABEL_69:
        if ( !++v13 )
        {
          v7 = (const char *)sub_4093D0(0LL, 3LL, s, v17, v15);
          v26 = dcgettext(0LL, "%s: too many checksum lines", 5);
          error(1, 0, v26, v7);
LABEL_71:
          v9 = "the --ignore-missing option is meaningful only when verifying checksums";
          if ( !(_BYTE)v4 )
            goto LABEL_203;
          goto LABEL_37;
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
        goto LABEL_113;
      }
      if ( !v81 || !(unsigned int)sub_409DB0((FILE *)v6) )
      {
        if ( v3 )
        {
          if ( byte_60F2DC )
            goto LABEL_220;
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
LABEL_220:
            if ( v97 )
              goto LABEL_110;
          }
          else if ( v97 )
          {
LABEL_110:
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
        goto LABEL_113;
      }
LABEL_141:
      v54 = sub_4093D0(0LL, 3LL, s, v41, v42);
      v55 = __errno_location();
      error(0, *v55, "%s", v54);
      v44 = 0;
LABEL_113:
      v96 &= v44;
LABEL_129:
      ++v78;
    }
    while ( v94 > v78 );
LABEL_130:
    if ( !byte_60F2F0 || (unsigned int)sub_409DB0(stdin) != -1 )
      return (unsigned __int8)v96 ^ 1u;
    v7 = dcgettext(0LL, "standard input", 5);
    v71 = __errno_location();
    error(1, *v71, v7);
LABEL_201:
    if ( byte_60F2D9 == 1 )
    {
      v9 = "the --quiet option is meaningful only when verifying checksums";
      if ( !(_BYTE)v4 )
        goto LABEL_203;
    }
LABEL_38:
    if ( byte_60F2D8 )
    {
      v9 = "the --strict option is meaningful only when verifying checksums";
      if ( !(_BYTE)v4 )
        goto LABEL_203;
    }
  }
}

// positive sp value has been detected, the output may be wrong!
noreturn void __usercall  start(__int64 a1, void (*a2)(void))
{
  int v2; // esi
  int v3; // [rsp-8h] [rbp-8h]
  __int64 _0; // [rsp+0h] [rbp+0h]

  v2 = v3;
  *(_QWORD *)&v3 = a1;
  _libc_start_main((int (__fastcall *)(int, char **, char **))main, v2, (char **)&_0, init, fini, a2, &v3);
  __halt();
}

__int64 *sub_40289B()
{
  __int64 *result; // rax

  result = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    result = 0LL;
  return result;
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

__int64 sub_402948()
{
  return sub_4028BA();
}

bool __fastcall sub_402950(_BYTE *a1)
{
  _BYTE *v1; // rbx
  unsigned __int64 v2; // rbp
  const unsigned __int16 *v3; // rcx
  unsigned __int64 v4; // rax

  v1 = a1;
  v2 = qword_60F2E0;
  if ( !qword_60F2E0 )
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

__int64 __fastcall sub_4029B0(__int64 a1, unsigned __int64 a2)
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

void __fastcall sub_402A40(const char *a1, char a2)
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
        fwrite_unlocked(&unk_40B564, 1uLL, 2uLL, stdout);
      }
      else if ( (_BYTE)v4 == 92 )
      {
        fwrite_unlocked(&unk_40B567, 1uLL, 2uLL, stdout);
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

__int64 __fastcall sub_402AF0(const char *a1, __int64 a2, _BYTE *a3)
{
  FILE *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // er12
  _BYTE *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  int *v13; // rax
  __int64 v14; // rbp
  int *v15; // rax
  int *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int *v19; // rbx
  __int64 v20; // rax

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
    v14 = sub_4093D0(0LL, 3LL, a1, v4, v5);
    v15 = __errno_location();
    error(0, *v15, "%s", v14);
    if ( stdin != v3 )
      sub_409DB0(v3);
    return v6;
  }
  v8 = a3;
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
        v12 = sub_4093D0(0LL, 3LL, a1, v10, v11);
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
    *v8 = 1;
  }
  else
  {
    v6 = 0;
    v20 = sub_4093D0(0LL, 3LL, a1, v17, v18);
    error(0, *v19, "%s", v20);
  }
  return v6;
}

noreturn void __fastcall  sub_402C90(int status)
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
  const char **v20; // rax
  const char *v21; // rbp
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax
  char *v25; // rax
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  const char *v30; // [rsp+0h] [rbp-88h]
  const char *v31; // [rsp+8h] [rbp-80h]
  const char *v32; // [rsp+10h] [rbp-78h]
  const char *v33; // [rsp+18h] [rbp-70h]
  const char *v34; // [rsp+20h] [rbp-68h]
  const char *v35; // [rsp+28h] [rbp-60h]
  const char *v36; // [rsp+30h] [rbp-58h]
  const char *v37; // [rsp+38h] [rbp-50h]
  const char *v38; // [rsp+40h] [rbp-48h]
  const char *v39; // [rsp+48h] [rbp-40h]
  const char *v40; // [rsp+50h] [rbp-38h]
  const char *v41; // [rsp+58h] [rbp-30h]
  __int64 v42; // [rsp+60h] [rbp-28h]
  __int64 v43; // [rsp+68h] [rbp-20h]

  v1 = qword_60F308;
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
  v30 = "[";
  v20 = &v30;
  v31 = "test invocation";
  v32 = "coreutils";
  v33 = "Multi-call invocation";
  v34 = "sha224sum";
  v35 = "sha2 utilities";
  v36 = "sha256sum";
  v37 = "sha2 utilities";
  v38 = "sha384sum";
  v39 = "sha2 utilities";
  v40 = "sha512sum";
  v41 = "sha2 utilities";
  v42 = 0LL;
  v43 = 0LL;
  do
    v20 += 2;
  while ( *v20 && strcmp("sha512sum", *v20) );
  v21 = v20[1];
  if ( v21 )
  {
    v22 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v22, &unk_40B5F2);
    v23 = setlocale(5, 0LL);
    if ( !v23 || !strncmp(v23, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v26 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v26, &unk_40B5F2);
    v27 = setlocale(5, 0LL);
    if ( !v27 || !strncmp(v27, "en_", 3uLL) )
    {
      v21 = "sha512sum";
      v28 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v28, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v21 = "sha512sum";
  }
  v29 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v29, "sha512sum");
LABEL_10:
  v24 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v24, "https://www.gnu.org/software/coreutils/");
LABEL_11:
  v25 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v25, v21);
LABEL_3:
  exit(status);
}

__int64 sub_403080()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

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
        v5 = sub_4093A0();
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

__int64 __fastcall sub_403280(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  bool v6; // cf
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // r10
  __int64 result; // rax
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r9
  __int64 i; // rdx
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // r10
  __int64 v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r11
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r10
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rbx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r11
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // r10
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // r9
  __int64 v53; // rdi
  __int64 v54; // r13
  __int64 v55; // r9
  __int64 v56; // rsi
  __int64 v57; // r14
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r12
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rbp
  __int64 v64; // rax
  __int64 v65; // r13
  __int64 v66; // r8
  unsigned __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 v70; // rdi
  unsigned __int64 v71; // r11
  __int64 v72; // rax
  __int64 v73; // r12
  __int64 v74; // rsi
  unsigned __int64 v75; // r10
  __int64 v76; // rax
  __int64 v77; // rbp
  __int64 v78; // rcx
  unsigned __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 v83; // r13
  __int64 v84; // rdi
  __int64 v85; // rdx
  __int64 v86; // r12
  __int64 v87; // rsi
  __int64 v88; // r14
  __int64 v89; // rbp
  __int64 v90; // rcx
  __int64 v91; // r13
  __int64 v92; // r8
  __int64 v93; // rax
  __int64 v94; // r12
  __int64 v95; // rdi
  __int64 v96; // rdx
  __int64 v97; // rbp
  __int64 v98; // rsi
  __int64 v99; // r14
  __int64 v100; // r8
  __int64 v101; // rcx
  __int64 v102; // r13
  __int64 v103; // rdi
  __int64 v104; // rcx
  __int64 v105; // r12
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rbp
  __int64 v109; // rsi
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // rcx
  __int64 v113; // r14
  __int64 v114; // r13
  __int64 v115; // rdx
  __int64 v116; // r12
  __int64 v117; // rdi
  __int64 v118; // r12
  unsigned __int64 v119; // r15
  __int64 v120; // rax
  __int64 v121; // rsi
  __int64 v122; // rbx
  unsigned __int64 v123; // r14
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rax
  unsigned __int64 v128; // r13
  __int64 v129; // rdx
  __int64 v130; // r10
  unsigned __int64 v131; // rbp
  __int64 v132; // rax
  __int64 v133; // r9
  unsigned __int64 v134; // r12
  __int64 v135; // rdi
  unsigned __int64 v136; // r13
  __int64 v137; // r11
  unsigned __int64 v138; // r13
  __int64 v139; // rax
  __int64 v140; // rbx
  __int64 v141; // rsi
  unsigned __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // r11
  __int64 v145; // rcx
  unsigned __int64 v146; // r13
  __int64 v147; // r8
  unsigned __int64 v148; // r13
  __int64 v149; // rax
  __int64 v150; // r10
  __int64 v151; // rdx
  unsigned __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // r9
  __int64 v155; // r12
  unsigned __int64 v156; // r13
  __int64 v157; // rax
  __int64 v158; // rbx
  __int64 v159; // rbp
  __int64 v160; // rax
  __int64 v161; // r11
  __int64 v162; // r13
  unsigned __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // r10
  __int64 v167; // rax
  __int64 v168; // r12
  __int64 v169; // r8
  unsigned __int64 v170; // rdi
  __int64 v171; // rsi
  unsigned __int64 v172; // rbx
  __int64 v173; // rax
  __int64 v174; // rbp
  __int64 v175; // r9
  __int64 v176; // rax
  __int64 v177; // r13
  __int64 v178; // rdi
  unsigned __int64 v179; // rax
  unsigned __int64 v180; // rbx
  __int64 v181; // rax
  __int64 v182; // r10
  __int64 v183; // rdx
  unsigned __int64 v184; // r11
  __int64 v185; // rax
  __int64 v186; // r8
  __int64 v187; // rcx
  unsigned __int64 v188; // r12
  unsigned __int64 v189; // r15
  __int64 v190; // rax
  __int64 v191; // r9
  __int64 v192; // rsi
  unsigned __int64 v193; // rax
  unsigned __int64 v194; // r14
  unsigned __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // rdi
  __int64 v198; // rbx
  unsigned __int64 v199; // r13
  __int64 v200; // rax
  __int64 v201; // rdx
  __int64 v202; // r10
  unsigned __int64 v203; // rax
  unsigned __int64 v204; // r13
  __int64 v205; // rax
  __int64 v206; // rcx
  __int64 v207; // r8
  unsigned __int64 v208; // r12
  __int64 v209; // r11
  unsigned __int64 v210; // r12
  __int64 v211; // rax
  __int64 v212; // rsi
  __int64 v213; // r9
  unsigned __int64 v214; // r11
  unsigned __int64 v215; // rax
  unsigned __int64 v216; // r13
  __int64 v217; // rax
  __int64 v218; // rbx
  __int64 v219; // rdi
  unsigned __int64 v220; // rbp
  __int64 v221; // rax
  __int64 v222; // r10
  __int64 v223; // rdx
  unsigned __int64 v224; // rax
  unsigned __int64 v225; // r13
  __int64 v226; // rax
  __int64 v227; // r8
  unsigned __int64 v228; // r14
  __int64 v229; // r12
  __int64 v230; // rax
  unsigned __int64 v231; // r11
  unsigned __int64 v232; // rbp
  unsigned __int64 v233; // r11
  __int64 v234; // rax
  __int64 v235; // r9
  __int64 v236; // rcx
  unsigned __int64 v237; // r13
  __int64 v238; // rax
  __int64 v239; // rdi
  __int64 v240; // r11
  __int64 v241; // rax
  __int64 v242; // rdx
  __int64 v243; // r10
  unsigned __int64 v244; // rbp
  __int64 v245; // rsi
  __int64 v246; // r8
  unsigned __int64 v247; // r12
  __int64 v248; // rbx
  unsigned __int64 v249; // rax
  __int64 v250; // rax
  __int64 v251; // rcx
  __int64 v252; // r13
  unsigned __int64 v253; // rax
  __int64 v254; // rax
  __int64 v255; // r11
  __int64 v256; // r14
  unsigned __int64 v257; // rbp
  __int64 v258; // rax
  __int64 v259; // rsi
  __int64 v260; // rdx
  __int64 v261; // r8
  __int64 v262; // rax
  __int64 v263; // rdi
  unsigned __int64 v264; // r15
  __int64 v265; // r9
  __int64 v266; // r8
  __int64 v267; // rcx
  __int64 v268; // r13
  __int64 v269; // r10
  __int64 v270; // rcx
  __int64 v271; // r14
  __int64 v272; // r9
  unsigned __int64 v273; // rbp
  __int64 v274; // rcx
  __int64 v275; // rdx
  __int64 v276; // r8
  __int64 v277; // rcx
  __int64 v278; // rdi
  __int64 v279; // rax
  unsigned __int64 v280; // r11
  __int64 v281; // rcx
  __int64 v282; // r10
  __int64 v283; // rsi
  __int64 v284; // r15
  unsigned __int64 v285; // rcx
  __int64 v286; // r13
  __int64 v287; // r13
  __int64 v288; // r9
  __int64 v289; // rcx
  unsigned __int64 v290; // r13
  __int64 v291; // r13
  __int64 v292; // r8
  __int64 v293; // rdx
  unsigned __int64 v294; // r13
  __int64 v295; // r13
  __int64 v296; // rdi
  __int64 v297; // r13
  __int64 v298; // rax
  __int64 v299; // rsi
  __int64 v300; // r10
  unsigned __int64 v301; // rbp
  __int64 v302; // rax
  __int64 v303; // rcx
  __int64 v304; // r9
  __int64 v305; // r8
  __int64 v306; // rdx
  __int64 v307; // r8
  unsigned __int64 v308; // r11
  __int64 v309; // rax
  __int64 v310; // r13
  __int64 v311; // rax
  unsigned __int64 v312; // rdi
  __int64 v313; // rbx
  __int64 v314; // r10
  __int64 v315; // rbx
  unsigned __int64 v316; // r11
  __int64 v317; // rsi
  __int64 v318; // r9
  __int64 v319; // rsi
  unsigned __int64 v320; // r14
  __int64 v321; // rdx
  __int64 v322; // r8
  __int64 v323; // rdx
  __int64 v324; // rcx
  unsigned __int64 v325; // [rsp+0h] [rbp-1A0h]
  unsigned __int64 v326; // [rsp+0h] [rbp-1A0h]
  unsigned __int64 v327; // [rsp+0h] [rbp-1A0h]
  unsigned __int64 v328; // [rsp+8h] [rbp-198h]
  unsigned __int64 v329; // [rsp+8h] [rbp-198h]
  unsigned __int64 v330; // [rsp+8h] [rbp-198h]
  unsigned __int64 v331; // [rsp+10h] [rbp-190h]
  unsigned __int64 v332; // [rsp+10h] [rbp-190h]
  unsigned __int64 v333; // [rsp+10h] [rbp-190h]
  unsigned __int64 v334; // [rsp+18h] [rbp-188h]
  unsigned __int64 v335; // [rsp+18h] [rbp-188h]
  unsigned __int64 v336; // [rsp+20h] [rbp-180h]
  unsigned __int64 v337; // [rsp+20h] [rbp-180h]
  unsigned __int64 v338; // [rsp+28h] [rbp-178h]
  unsigned __int64 v339; // [rsp+28h] [rbp-178h]
  unsigned __int64 v340; // [rsp+28h] [rbp-178h]
  unsigned __int64 v341; // [rsp+30h] [rbp-170h]
  unsigned __int64 v342; // [rsp+30h] [rbp-170h]
  unsigned __int64 v343; // [rsp+30h] [rbp-170h]
  unsigned __int64 v344; // [rsp+38h] [rbp-168h]
  unsigned __int64 v345; // [rsp+38h] [rbp-168h]
  unsigned __int64 v346; // [rsp+38h] [rbp-168h]
  unsigned __int64 v347; // [rsp+38h] [rbp-168h]
  unsigned __int64 v348; // [rsp+40h] [rbp-160h]
  unsigned __int64 v349; // [rsp+40h] [rbp-160h]
  unsigned __int64 v350; // [rsp+40h] [rbp-160h]
  unsigned __int64 v351; // [rsp+40h] [rbp-160h]
  unsigned __int64 v352; // [rsp+48h] [rbp-158h]
  unsigned __int64 v353; // [rsp+48h] [rbp-158h]
  unsigned __int64 v354; // [rsp+48h] [rbp-158h]
  unsigned __int64 v355; // [rsp+50h] [rbp-150h]
  unsigned __int64 v356; // [rsp+50h] [rbp-150h]
  unsigned __int64 v357; // [rsp+50h] [rbp-150h]
  unsigned __int64 v358; // [rsp+58h] [rbp-148h]
  unsigned __int64 v359; // [rsp+58h] [rbp-148h]
  unsigned __int64 v360; // [rsp+58h] [rbp-148h]
  unsigned __int64 v361; // [rsp+60h] [rbp-140h]
  unsigned __int64 v362; // [rsp+60h] [rbp-140h]
  unsigned __int64 v363; // [rsp+68h] [rbp-138h]
  unsigned __int64 v364; // [rsp+68h] [rbp-138h]
  unsigned __int64 v365; // [rsp+70h] [rbp-130h]
  unsigned __int64 v366; // [rsp+70h] [rbp-130h]
  unsigned __int64 v367; // [rsp+78h] [rbp-128h]
  unsigned __int64 v368; // [rsp+80h] [rbp-120h]
  unsigned __int64 v369; // [rsp+88h] [rbp-118h]
  __int64 v370; // [rsp+90h] [rbp-110h]
  __int64 v371; // [rsp+98h] [rbp-108h]
  __int64 v372; // [rsp+A0h] [rbp-100h]
  __int64 v373; // [rsp+A8h] [rbp-F8h]
  __int64 v374; // [rsp+B0h] [rbp-F0h]
  __int64 v375; // [rsp+B8h] [rbp-E8h]
  __int64 v376; // [rsp+C0h] [rbp-E0h]
  unsigned __int64 v377; // [rsp+C8h] [rbp-D8h]
  __int64 v378; // [rsp+D0h] [rbp-D0h]
  unsigned __int64 v379; // [rsp+D8h] [rbp-C8h]
  _QWORD *v380; // [rsp+E0h] [rbp-C0h]
  unsigned __int64 v381; // [rsp+E8h] [rbp-B8h]
  unsigned __int64 v382; // [rsp+F0h] [rbp-B0h]
  unsigned __int64 v383; // [rsp+F8h] [rbp-A8h]
  unsigned __int64 v384; // [rsp+100h] [rbp-A0h]
  unsigned __int64 v385; // [rsp+108h] [rbp-98h]
  unsigned __int64 v386; // [rsp+110h] [rbp-90h]
  unsigned __int64 v387; // [rsp+118h] [rbp-88h]
  unsigned __int64 v388; // [rsp+120h] [rbp-80h]
  unsigned __int64 v389; // [rsp+128h] [rbp-78h]
  unsigned __int64 v390; // [rsp+130h] [rbp-70h]
  unsigned __int64 v391; // [rsp+138h] [rbp-68h]
  unsigned __int64 v392; // [rsp+140h] [rbp-60h]
  unsigned __int64 v393; // [rsp+148h] [rbp-58h]
  unsigned __int64 v394; // [rsp+150h] [rbp-50h]
  unsigned __int64 v395; // [rsp+158h] [rbp-48h]
  unsigned __int64 v396; // [rsp+160h] [rbp-40h]

  v3 = a1;
  v4 = a1 + (a2 & 0xFFFFFFFFFFFFFFF8LL);
  v5 = v4;
  v6 = __CFADD__(a3[8], a2);
  v7 = a3[2];
  v8 = a3[3];
  v9 = a3[4];
  v369 = a1;
  v10 = a3[5];
  v11 = a3[1];
  v379 = v4;
  v12 = a3[6];
  result = *a3;
  v380 = a3;
  v14 = a3[7];
  a3[8] += a2;
  a3[9] += v6;
  if ( v3 < v5 )
  {
    v376 = v14;
    v15 = v9;
    v16 = v10;
    v375 = v12;
    v374 = v10;
    v372 = v8;
    v371 = v7;
    v370 = v11;
    v378 = result;
    v373 = v9;
    v17 = v12;
    do
    {
      for ( i = 0LL; i != 128; i += 8LL )
        *(unsigned __int64 *)((char *)&v381 + i) = _byteswap_uint64(*(_QWORD *)(v369 + i));
      v369 += 128LL;
      v19 = (__ROR8__(v15, 18) ^ __ROR8__(v15, 14) ^ __ROL8__(v15, 23))
          + v381
          + 4794697086780616226LL
          + v14
          + (v17 ^ v15 & (v17 ^ v16));
      v20 = v19 + v8;
      v21 = v19
          + (__ROL8__(result, 25) ^ __ROR8__(result, 28) ^ __ROL8__(result, 30))
          + (v11 & result | v7 & (v11 | result));
      v22 = (v16 ^ (v19 + v8) & (v16 ^ v15))
          + v17
          + v382
          + 8158064640168781261LL
          + (__ROR8__(v19 + v8, 14) ^ __ROR8__(v19 + v8, 18) ^ __ROL8__(v19 + v8, 23));
      v23 = v22 + v7;
      v24 = v22 + (__ROL8__(v21, 25) ^ __ROR8__(v21, 28) ^ __ROL8__(v21, 30)) + (result & v21 | v11 & (result | v21));
      v25 = (v15 ^ (v22 + v7) & (v15 ^ v20))
          + v16
          + v383
          - 5349999486874862801LL
          + (__ROR8__(v22 + v7, 14) ^ __ROR8__(v22 + v7, 18) ^ __ROL8__(v22 + v7, 23));
      v26 = v25 + v11;
      v27 = v25 + (__ROL8__(v24, 25) ^ __ROR8__(v24, 28) ^ __ROL8__(v24, 30)) + (v24 & v21 | result & (v24 | v21));
      v28 = (v20 ^ v26 & ((v22 + v7) ^ v20))
          + v384
          - 1606136188198331460LL
          + v15
          + (__ROR8__(v26, 14) ^ __ROR8__(v26, 18) ^ __ROL8__(v26, 23));
      v29 = v28 + result;
      v30 = v28 + (__ROL8__(v27, 25) ^ __ROR8__(v27, 28) ^ __ROL8__(v27, 30)) + (v27 & v24 | v21 & (v27 | v24));
      v31 = (v23 ^ v29 & (v26 ^ v23))
          + v385
          + 4131703408338449720LL
          + v20
          + (__ROR8__(v29, 14) ^ __ROR8__(v28 + result, 18) ^ __ROL8__(v29, 23));
      v32 = v31 + v21;
      v33 = v31 + (__ROL8__(v30, 25) ^ __ROR8__(v30, 28) ^ __ROL8__(v30, 30)) + (v30 & v27 | v24 & (v30 | v27));
      v34 = (v26 ^ v32 & (v29 ^ v26))
          + v386
          + 6480981068601479193LL
          + v23
          + (__ROR8__(v32, 14) ^ __ROR8__(v32, 18) ^ __ROL8__(v32, 23));
      v35 = v24 + v34;
      v36 = v34 + (__ROL8__(v33, 25) ^ __ROR8__(v33, 28) ^ __ROL8__(v33, 30)) + (v33 & v30 | v27 & (v33 | v30));
      v37 = (v29 ^ v35 & (v32 ^ v29))
          + v387
          - 7908458776815382629LL
          + v26
          + (__ROR8__(v24 + v34, 14) ^ __ROR8__(v24 + v34, 18) ^ __ROL8__(v35, 23));
      v38 = v37 + v27;
      v39 = v37 + (__ROL8__(v36, 25) ^ __ROR8__(v36, 28) ^ __ROL8__(v36, 30)) + (v36 & v33 | v30 & (v36 | v33));
      v40 = v388
          - 6116909921290321640LL
          + v29
          + (v32 ^ v38 & (v35 ^ v32))
          + (__ROR8__(v38, 14) ^ __ROR8__(v38, 18) ^ __ROL8__(v38, 23));
      v41 = v40 + v30;
      v42 = v40 + (__ROL8__(v39, 25) ^ __ROR8__(v39, 28) ^ __ROL8__(v39, 30)) + (v39 & v36 | v33 & (v39 | v36));
      v43 = v389
          - 2880145864133508542LL
          + v32
          + (v35 ^ v41 & (v38 ^ v35))
          + (__ROR8__(v41, 14) ^ __ROR8__(v41, 18) ^ __ROL8__(v41, 23));
      v44 = v43 + v33;
      v45 = v43 + (__ROL8__(v42, 25) ^ __ROR8__(v42, 28) ^ __ROL8__(v42, 30)) + (v42 & v39 | v36 & (v42 | v39));
      v46 = (v38 ^ v44 & (v41 ^ v38))
          + v390
          + 1334009975649890238LL
          + v35
          + (__ROR8__(v44, 14) ^ __ROR8__(v44, 18) ^ __ROL8__(v44, 23));
      v47 = v46 + v36;
      v48 = v46 + (__ROL8__(v45, 25) ^ __ROR8__(v45, 28) ^ __ROL8__(v45, 30)) + (v45 & v42 | v39 & (v45 | v42));
      v49 = (v41 ^ v47 & (v44 ^ v41))
          + v391
          + 2608012711638119052LL
          + v38
          + (__ROR8__(v47, 14) ^ __ROR8__(v47, 18) ^ __ROL8__(v47, 23));
      v50 = v49 + v39;
      v51 = v49 + (__ROL8__(v48, 25) ^ __ROR8__(v48, 28) ^ __ROL8__(v48, 30)) + (v48 & v45 | v42 & (v48 | v45));
      v52 = (v44 ^ v50 & (v47 ^ v44))
          + v392
          + 6128411473006802146LL
          + v41
          + (__ROR8__(v50, 14) ^ __ROR8__(v50, 18) ^ __ROL8__(v50, 23));
      v53 = v52 + v42;
      v54 = v52 + (__ROL8__(v51, 25) ^ __ROR8__(v51, 28) ^ __ROL8__(v51, 30)) + (v51 & v48 | v45 & (v51 | v48));
      v55 = (v47 ^ v53 & (v50 ^ v47))
          + v393
          + 8268148722764581231LL
          + v44
          + (__ROR8__(v53, 14) ^ __ROR8__(v53, 18) ^ __ROL8__(v53, 23));
      v56 = v55 + v45;
      v57 = v55 + (__ROL8__(v54, 25) ^ __ROR8__(v54, 28) ^ __ROL8__(v54, 30)) + (v54 & v51 | v48 & (v54 | v51));
      v58 = (v50 ^ v56 & (v53 ^ v50))
          + v394
          - 9160688886553864527LL
          + v47
          + (__ROR8__(v56, 14) ^ __ROR8__(v56, 18) ^ __ROL8__(v56, 23));
      v59 = v58 + v48;
      v60 = v58 + (__ROL8__(v57, 25) ^ __ROR8__(v57, 28) ^ __ROL8__(v57, 30)) + (v57 & v54 | v51 & (v57 | v54));
      v61 = (v53 ^ v59 & (v56 ^ v53))
          + v395
          - 7215885187991268811LL
          + v50
          + (__ROR8__(v59, 14) ^ __ROR8__(v59, 18) ^ __ROL8__(v59, 23));
      v62 = v61 + v51;
      v63 = v61 + (__ROL8__(v60, 25) ^ __ROR8__(v60, 28) ^ __ROL8__(v60, 30)) + (v60 & v57 | v54 & (v60 | v57));
      v64 = (v56 ^ v62 & (v59 ^ v56))
          + v396
          - 4495734319001033068LL
          + v53
          + (__ROR8__(v62, 14) ^ __ROR8__(v62, 18) ^ __ROL8__(v62, 23));
      v65 = v64 + v54;
      v66 = v64 + (__ROL8__(v63, 25) ^ __ROR8__(v63, 28) ^ __ROL8__(v63, 30)) + (v63 & v60 | v57 & (v63 | v60));
      v67 = (__ROR8__(v395, 19) ^ __ROL8__(v395, 3) ^ (v395 >> 6))
          + v390
          + v381
          + ((v382 >> 7) ^ __ROR8__(v382, 1) ^ __ROR8__(v382, 8));
      v68 = (v59 ^ v65 & (v62 ^ v59))
          + v67
          - 1973867731355612462LL
          + v56
          + (__ROR8__(v65, 14) ^ __ROR8__(v65, 18) ^ __ROL8__(v65, 23));
      v69 = v68 + v57;
      v70 = v68 + (__ROL8__(v66, 25) ^ __ROR8__(v66, 28) ^ __ROL8__(v66, 30)) + (v66 & v63 | v60 & (v66 | v63));
      v71 = (__ROR8__(v396, 19) ^ __ROL8__(v396, 3) ^ (v396 >> 6))
          + v382
          + v391
          + ((v383 >> 7) ^ __ROR8__(v383, 1) ^ __ROR8__(v383, 8));
      v72 = (v62 ^ v69 & (v65 ^ v62))
          + v71
          - 1171420211273849373LL
          + v59
          + (__ROR8__(v69, 14) ^ __ROR8__(v69, 18) ^ __ROL8__(v69, 23));
      v73 = v72 + v60;
      v74 = v72 + (__ROL8__(v70, 25) ^ __ROR8__(v70, 28) ^ __ROL8__(v70, 30)) + (v70 & v66 | v63 & (v70 | v66));
      v75 = (__ROR8__(v384, 1) ^ __ROR8__(v384, 8) ^ (v384 >> 7))
          + v392
          + v383
          + ((v67 >> 6) ^ __ROR8__(v67, 19) ^ __ROL8__(v67, 3));
      v76 = (v65 ^ v73 & (v69 ^ v65))
          + v75
          + 1135362057144423861LL
          + v62
          + (__ROR8__(v73, 14) ^ __ROR8__(v73, 18) ^ __ROL8__(v73, 23));
      v77 = v76 + v63;
      v78 = v76 + (__ROL8__(v74, 25) ^ __ROR8__(v74, 28) ^ __ROL8__(v74, 30)) + (v74 & v70 | v66 & (v74 | v70));
      v79 = (__ROR8__(v385, 1) ^ __ROR8__(v385, 8) ^ (v385 >> 7))
          + v393
          + v384
          + ((v71 >> 6) ^ __ROR8__(v71, 19) ^ __ROL8__(v71, 3));
      v80 = (v69 ^ v77 & (v73 ^ v69))
          + v79
          + 2597628984639134821LL
          + v65
          + (__ROR8__(v77, 14) ^ __ROR8__(v77, 18) ^ __ROL8__(v77, 23));
      v81 = v80 + v66;
      v82 = v80 + (__ROL8__(v78, 25) ^ __ROR8__(v78, 28) ^ __ROL8__(v78, 30)) + (v78 & v74 | v70 & (v78 | v74));
      v348 = v394
           + v385
           + (__ROR8__(v386, 8) ^ __ROR8__(v386, 1) ^ (v386 >> 7))
           + ((v75 >> 6) ^ __ROR8__(v75, 19) ^ __ROL8__(v75, 3));
      v83 = (v73 ^ v81 & (v77 ^ v73))
          + v348
          + 3308224258029322869LL
          + v69
          + (__ROR8__(v81, 14) ^ __ROR8__(v81, 18) ^ __ROL8__(v81, 23));
      v84 = v83 + v70;
      v85 = v83 + (__ROL8__(v82, 25) ^ __ROR8__(v82, 28) ^ __ROL8__(v82, 30)) + (v82 & v78 | v74 & (v82 | v78));
      v338 = ((v79 >> 6) ^ __ROR8__(v79, 19) ^ __ROL8__(v79, 3))
           + v395
           + v386
           + (__ROR8__(v387, 8) ^ __ROR8__(v387, 1) ^ (v387 >> 7));
      v86 = (v77 ^ v84 & (v81 ^ v77))
          + v338
          + 5365058923640841347LL
          + v73
          + (__ROR8__(v84, 14) ^ __ROR8__(v84, 18) ^ __ROL8__(v84, 23));
      v87 = v86 + v74;
      v88 = v86 + (__ROL8__(v85, 25) ^ __ROR8__(v85, 28) ^ __ROL8__(v85, 30)) + (v85 & v82 | v78 & (v85 | v82));
      v341 = v396
           + v387
           + (__ROR8__(v388, 8) ^ __ROR8__(v388, 1) ^ (v388 >> 7))
           + ((v348 >> 6) ^ __ROR8__(v348, 19) ^ __ROL8__(v348, 3));
      v89 = (v81 ^ v87 & (v84 ^ v81))
          + v341
          + 6679025012923562964LL
          + v77
          + (__ROR8__(v87, 14) ^ __ROR8__(v87, 18) ^ __ROL8__(v87, 23));
      v90 = v89 + v78;
      v91 = v89 + (__ROL8__(v88, 25) ^ __ROR8__(v88, 28) ^ __ROL8__(v88, 30)) + (v88 & v85 | v82 & (v88 | v85));
      v325 = ((v338 >> 6) ^ __ROR8__(v338, 19) ^ __ROL8__(v338, 3))
           + v67
           + v388
           + ((v389 >> 7) ^ __ROR8__(v389, 1) ^ __ROR8__(v389, 8));
      v92 = (v84 ^ v90 & (v87 ^ v84))
          + v325
          + 8573033837759648693LL
          + v81
          + (__ROR8__(v90, 14) ^ __ROR8__(v90, 18) ^ __ROL8__(v90, 23));
      v93 = v92 + v82;
      v94 = v92 + (__ROL8__(v91, 25) ^ __ROR8__(v91, 28) ^ __ROL8__(v91, 30)) + (v91 & v88 | v85 & (v91 | v88));
      v344 = ((v341 >> 6) ^ __ROR8__(v341, 19) ^ __ROL8__(v341, 3))
           + v71
           + v389
           + ((v390 >> 7) ^ __ROR8__(v390, 1) ^ __ROR8__(v390, 8));
      v95 = (v87 ^ v93 & (v90 ^ v87))
          + v344
          - 7476448914759557205LL
          + v84
          + (__ROR8__(v93, 14) ^ __ROR8__(v93, 18) ^ __ROL8__(v93, 23));
      v96 = v95 + v85;
      v97 = v95 + (__ROL8__(v94, 25) ^ __ROR8__(v94, 28) ^ __ROL8__(v94, 30)) + (v94 & v91 | v88 & (v94 | v91));
      v328 = ((v325 >> 6) ^ __ROR8__(v325, 19) ^ __ROL8__(v325, 3))
           + v75
           + v390
           + ((v391 >> 7) ^ __ROR8__(v391, 1) ^ __ROR8__(v391, 8));
      v98 = (v90 ^ v96 & (v93 ^ v90))
          + v328
          - 6327057829258317296LL
          + v87
          + (__ROR8__(v96, 14) ^ __ROR8__(v96, 18) ^ __ROL8__(v96, 23));
      v99 = v98 + v88;
      v100 = v98 + (__ROL8__(v97, 25) ^ __ROR8__(v97, 28) ^ __ROL8__(v97, 30)) + (v97 & v94 | v91 & (v97 | v94));
      v331 = ((v344 >> 6) ^ __ROR8__(v344, 19) ^ __ROL8__(v344, 3))
           + v79
           + v391
           + ((v392 >> 7) ^ __ROR8__(v392, 1) ^ __ROR8__(v392, 8));
      v101 = (v93 ^ v99 & (v96 ^ v93))
           + v331
           - 5763719355590565569LL
           + v90
           + (__ROR8__(v99, 14) ^ __ROR8__(v99, 18) ^ __ROL8__(v99, 23));
      v102 = v101 + v91;
      v103 = v101 + (__ROL8__(v100, 25) ^ __ROR8__(v100, 28) ^ __ROL8__(v100, 30)) + (v100 & v97 | v94 & (v100 | v97));
      v352 = ((v328 >> 6) ^ __ROR8__(v328, 19) ^ __ROL8__(v328, 3))
           + v348
           + v392
           + ((v393 >> 7) ^ __ROR8__(v393, 1) ^ __ROR8__(v393, 8));
      v104 = (v96 ^ v102 & (v99 ^ v96))
           + v352
           - 4658551843659510044LL
           + v93
           + (__ROR8__(v102, 14) ^ __ROR8__(v102, 18) ^ __ROL8__(v102, 23));
      v105 = v104 + v94;
      v106 = v104 + (__ROL8__(v103, 25) ^ __ROR8__(v103, 28) ^ __ROL8__(v103, 30)) + (v103 & v100 | v97 & (v103 | v100));
      v334 = ((v331 >> 6) ^ __ROR8__(v331, 19) ^ __ROL8__(v331, 3))
           + v338
           + v393
           + ((v394 >> 7) ^ __ROR8__(v394, 1) ^ __ROR8__(v394, 8));
      v107 = (v99 ^ v105 & (v102 ^ v99))
           + v334
           - 4116276920077217854LL
           + v96
           + (__ROR8__(v105, 14) ^ __ROR8__(v105, 18) ^ __ROL8__(v105, 23));
      v108 = v107 + v97;
      v109 = v107
           + (__ROL8__(v106, 25) ^ __ROR8__(v106, 28) ^ __ROL8__(v106, 30))
           + (v106 & v103 | v100 & (v106 | v103));
      v336 = ((v352 >> 6) ^ __ROR8__(v352, 19) ^ __ROL8__(v352, 3))
           + v341
           + v394
           + ((v395 >> 7) ^ __ROR8__(v395, 1) ^ __ROR8__(v395, 8));
      v110 = (v102 ^ v108 & (v105 ^ v102))
           + v336
           - 3051310485924567259LL
           + v99
           + (__ROR8__(v108, 14) ^ __ROR8__(v108, 18) ^ __ROL8__(v108, 23));
      v111 = v110 + v100;
      v112 = v110
           + (__ROL8__(v109, 25) ^ __ROR8__(v109, 28) ^ __ROL8__(v109, 30))
           + (v109 & v106 | v103 & (v109 | v106));
      v358 = ((v334 >> 6) ^ __ROR8__(v334, 19) ^ __ROL8__(v334, 3))
           + v325
           + v395
           + ((v396 >> 7) ^ __ROR8__(v396, 1) ^ __ROR8__(v396, 8));
      v113 = (v105 ^ v111 & (v108 ^ v105))
           + v358
           + 489312712824947311LL
           + v102
           + (__ROR8__(v111, 14) ^ __ROR8__(v111, 18) ^ __ROL8__(v111, 23));
      v114 = v103 + v113;
      v115 = v113
           + (__ROL8__(v112, 25) ^ __ROR8__(v112, 28) ^ __ROL8__(v112, 30))
           + (v112 & v109 | v106 & (v112 | v109));
      v355 = ((v336 >> 6) ^ __ROR8__(v336, 19) ^ __ROL8__(v336, 3))
           + v344
           + v396
           + ((v67 >> 7) ^ __ROR8__(v67, 1) ^ __ROR8__(v67, 8));
      v116 = (v108 ^ (v103 + v113) & (v111 ^ v108))
           + v355
           + 1452737877330783856LL
           + v105
           + (__ROL8__(v114, 23) ^ __ROR8__(v114, 14) ^ __ROR8__(v114, 18));
      v117 = v106 + v116;
      v118 = (__ROL8__(v115, 25) ^ __ROR8__(v115, 28) ^ __ROL8__(v115, 30))
           + (v115 & v112 | v109 & (v115 | v112))
           + v116;
      v119 = v328
           + ((v71 >> 7) ^ __ROR8__(v71, 1) ^ __ROR8__(v71, 8))
           + v67
           + ((v358 >> 6) ^ __ROR8__(v358, 19) ^ __ROL8__(v358, 3));
      v120 = (v111 ^ v117 & (v114 ^ v111))
           + v119
           + 2861767655752347644LL
           + v108
           + (__ROL8__(v117, 23) ^ __ROR8__(v117, 14) ^ __ROR8__(v117, 18));
      v121 = v120 + v109;
      v122 = v120
           + (v118 & v115 | v112 & (v118 | v115))
           + (__ROL8__(v118, 25) ^ __ROR8__(v118, 28) ^ __ROL8__(v118, 30));
      v123 = v331
           + ((v75 >> 7) ^ __ROR8__(v75, 1) ^ __ROR8__(v75, 8))
           + v71
           + ((v355 >> 6) ^ __ROR8__(v355, 19) ^ __ROL8__(v355, 3));
      v124 = (v114 ^ v121 & (v117 ^ v114))
           + v123
           + 3322285676063803686LL
           + v111
           + (__ROL8__(v121, 23) ^ __ROR8__(v121, 14) ^ __ROR8__(v121, 18));
      v125 = v124 + v112;
      v126 = v124
           + (v122 & v118 | v115 & (v122 | v118))
           + (__ROL8__(v122, 25) ^ __ROR8__(v122, 28) ^ __ROL8__(v122, 30));
      v361 = ((v119 >> 6) ^ __ROR8__(v119, 19) ^ __ROL8__(v119, 3))
           + v352
           + ((v79 >> 7) ^ __ROR8__(v79, 1) ^ __ROR8__(v79, 8))
           + v75;
      v127 = (v117 ^ v125 & (v121 ^ v117))
           + v361
           + 5560940570517711597LL
           + v114
           + (__ROL8__(v125, 23) ^ __ROR8__(v125, 14) ^ __ROR8__(v125, 18));
      v128 = v348;
      v129 = v127 + v115;
      v130 = v127
           + (v126 & v122 | v118 & (v126 | v122))
           + (__ROL8__(v126, 25) ^ __ROR8__(v126, 28) ^ __ROL8__(v126, 30));
      v131 = ((v123 >> 6) ^ __ROR8__(v123, 19) ^ __ROL8__(v123, 3))
           + v334
           + ((v348 >> 7) ^ __ROR8__(v348, 1) ^ __ROR8__(v348, 8))
           + v79;
      v349 = v131;
      v132 = (v121 ^ v129 & (v125 ^ v121))
           + v131
           + 5996557281743188959LL
           + v117
           + (__ROL8__(v129, 23) ^ __ROR8__(v129, 14) ^ __ROR8__(v129, 18));
      v133 = v118 + v132;
      v134 = v338;
      v135 = v132
           + (v130 & v126 | v122 & (v130 | v126))
           + (__ROL8__(v130, 25) ^ __ROR8__(v130, 28) ^ __ROL8__(v130, 30));
      v136 = ((v361 >> 6) ^ __ROR8__(v361, 19) ^ __ROL8__(v361, 3))
           + v336
           + v128
           + ((v338 >> 7) ^ __ROR8__(v338, 1) ^ __ROR8__(v338, 8));
      v137 = v136 + 7280758554555802590LL;
      v339 = v136;
      v138 = v341;
      v139 = (v125 ^ v133 & (v129 ^ v125))
           + v137
           + v121
           + (__ROL8__(v133, 23) ^ __ROR8__(v133, 14) ^ __ROR8__(v133, 18));
      v140 = v139 + v122;
      v141 = v139
           + (v135 & v130 | v126 & (v135 | v130))
           + (__ROL8__(v135, 25) ^ __ROR8__(v135, 28) ^ __ROL8__(v135, 30));
      v142 = ((v349 >> 6) ^ __ROR8__(v131, 19) ^ __ROL8__(v349, 3))
           + v358
           + v134
           + ((v341 >> 7) ^ __ROR8__(v341, 1) ^ __ROR8__(v341, 8));
      v342 = v142;
      v143 = (v129 ^ v140 & (v133 ^ v129))
           + v142
           + 8532644243296465576LL
           + v125
           + (__ROL8__(v140, 23) ^ __ROR8__(v140, 14) ^ __ROR8__(v140, 18));
      v144 = v126 + v143;
      v145 = v143
           + (v141 & v135 | v130 & (v141 | v135))
           + (__ROL8__(v141, 25) ^ __ROR8__(v141, 28) ^ __ROL8__(v141, 30));
      v146 = v355
           + v138
           + ((v325 >> 7) ^ __ROR8__(v325, 1) ^ __ROR8__(v325, 8))
           + ((v339 >> 6) ^ __ROR8__(v339, 19) ^ __ROL8__(v339, 3));
      v363 = v146;
      v147 = v146 - 9096487096722542874LL;
      v148 = v344;
      v149 = (v133 ^ v144 & (v140 ^ v133))
           + v147
           + v129
           + (__ROL8__(v144, 23) ^ __ROR8__(v144, 14) ^ __ROR8__(v144, 18));
      v150 = v149 + v130;
      v151 = v149
           + (v145 & v141 | v135 & (v145 | v141))
           + (__ROL8__(v145, 25) ^ __ROR8__(v145, 28) ^ __ROL8__(v145, 30));
      v152 = v119
           + v325
           + ((v344 >> 7) ^ __ROR8__(v344, 1) ^ __ROR8__(v344, 8))
           + ((v342 >> 6) ^ __ROR8__(v342, 19) ^ __ROL8__(v342, 3));
      v345 = v152;
      v153 = (v140 ^ v150 & (v144 ^ v140))
           + v152
           - 7894198246740708037LL
           + v133
           + (__ROL8__(v150, 23) ^ __ROR8__(v150, 14) ^ __ROR8__(v150, 18));
      v154 = v135 + v153;
      v155 = (__ROL8__(v151, 25) ^ __ROR8__(v151, 28) ^ __ROL8__(v151, 30))
           + (v151 & v145 | v141 & (v151 | v145))
           + v153;
      v156 = v123
           + v148
           + ((v328 >> 7) ^ __ROR8__(v328, 1) ^ __ROR8__(v328, 8))
           + ((v363 >> 6) ^ __ROR8__(v363, 19) ^ __ROL8__(v363, 3));
      v326 = v156;
      v157 = (v144 ^ v154 & (v150 ^ v144))
           + v156
           - 6719396339535248540LL
           + v140
           + (__ROL8__(v154, 23) ^ __ROR8__(v135 + v153, 14) ^ __ROR8__(v135 + v153, 18));
      v158 = v141 + v157;
      v159 = (__ROL8__(v155, 25) ^ __ROR8__(v155, 28) ^ __ROL8__(v155, 30))
           + (v155 & v151 | v145 & (v155 | v151))
           + v157;
      v365 = v361
           + v328
           + ((v331 >> 7) ^ __ROR8__(v331, 1) ^ __ROR8__(v331, 8))
           + ((v345 >> 6) ^ __ROR8__(v345, 19) ^ __ROL8__(v345, 3));
      v160 = (v150 ^ v158 & (v154 ^ v150))
           + v365
           - 6333637450476146687LL
           + v144
           + (__ROL8__(v158, 23) ^ __ROR8__(v158, 14) ^ __ROR8__(v158, 18));
      v161 = v145 + v160;
      v162 = (__ROL8__(v159, 25) ^ __ROR8__(v159, 28) ^ __ROL8__(v159, 30))
           + (v159 & v155 | v151 & (v159 | v155))
           + v160;
      v163 = v349
           + v331
           + ((v352 >> 7) ^ __ROR8__(v352, 1) ^ __ROR8__(v352, 8))
           + ((v326 >> 6) ^ __ROR8__(v326, 19) ^ __ROL8__(v326, 3));
      v332 = v163;
      v164 = (v154 ^ v161 & (v158 ^ v154))
           + v163
           - 4446306890439682159LL
           + v150
           + (__ROL8__(v161, 23) ^ __ROR8__(v161, 14) ^ __ROR8__(v161, 18));
      v165 = v164 + v151;
      v166 = (__ROL8__(v162, 25) ^ __ROR8__(v162, 28) ^ __ROL8__(v162, 30))
           + (v162 & v159 | v155 & (v162 | v159))
           + v164;
      v353 = v339
           + v352
           + ((v334 >> 7) ^ __ROR8__(v334, 1) ^ __ROR8__(v334, 8))
           + ((v365 >> 6) ^ __ROR8__(v365, 19) ^ __ROL8__(v365, 3));
      v167 = (v158 ^ v165 & (v161 ^ v158))
           + v353
           - 4076793802049405392LL
           + v154
           + (__ROL8__(v165, 23) ^ __ROR8__(v165, 14) ^ __ROR8__(v165, 18));
      v168 = v167 + v155;
      v169 = (__ROL8__(v166, 25) ^ __ROR8__(v166, 28) ^ __ROL8__(v166, 30))
           + (v166 & v162 | v159 & (v166 | v162))
           + v167;
      v170 = v342
           + v334
           + ((v336 >> 7) ^ __ROR8__(v336, 1) ^ __ROR8__(v336, 8))
           + ((v332 >> 6) ^ __ROR8__(v332, 19) ^ __ROL8__(v332, 3));
      v367 = v170;
      v171 = v170 - 3345356375505022440LL + v158;
      v172 = v358;
      v173 = (v161 ^ v168 & (v165 ^ v161)) + v171 + (__ROL8__(v168, 23) ^ __ROR8__(v168, 14) ^ __ROR8__(v168, 18));
      v174 = v173 + v159;
      v175 = (__ROL8__(v169, 25) ^ __ROR8__(v169, 28) ^ __ROL8__(v169, 30))
           + (v169 & v166 | v162 & (v169 | v166))
           + v173;
      v359 = v363
           + v336
           + ((v358 >> 7) ^ __ROR8__(v358, 1) ^ __ROR8__(v358, 8))
           + ((v353 >> 6) ^ __ROR8__(v353, 19) ^ __ROL8__(v353, 3));
      v176 = (v165 ^ v174 & (v168 ^ v165))
           + v161
           + v359
           - 2983346525034927856LL
           + (__ROL8__(v174, 23) ^ __ROR8__(v174, 14) ^ __ROR8__(v174, 18));
      v177 = v176 + v162;
      v178 = v176
           + (v175 & v169 | v166 & (v175 | v169))
           + (__ROL8__(v175, 25) ^ __ROR8__(v175, 28) ^ __ROL8__(v175, 30));
      v179 = ((v367 >> 6) ^ __ROR8__(v367, 19) ^ __ROL8__(v367, 3))
           + v345
           + v172
           + ((v355 >> 7) ^ __ROR8__(v355, 1) ^ __ROR8__(v355, 8));
      v180 = v179;
      v377 = v179;
      v181 = (v168 ^ v177 & (v174 ^ v168))
           + v179
           - 860691631967231958LL
           + v165
           + (__ROL8__(v177, 23) ^ __ROR8__(v177, 14) ^ __ROR8__(v177, 18));
      v182 = v181 + v166;
      v183 = v181
           + (v178 & v175 | v169 & (v178 | v175))
           + (__ROL8__(v178, 25) ^ __ROR8__(v178, 28) ^ __ROL8__(v178, 30));
      v184 = ((v359 >> 6) ^ __ROR8__(v359, 19) ^ __ROL8__(v359, 3))
           + v326
           + v355
           + ((v119 >> 7) ^ __ROR8__(v119, 1) ^ __ROR8__(v119, 8));
      v356 = v184;
      v185 = (v174 ^ v182 & (v177 ^ v174))
           + v184
           + 1182934255886127544LL
           + v168
           + (__ROL8__(v182, 23) ^ __ROR8__(v182, 14) ^ __ROR8__(v182, 18));
      v186 = v185 + v169;
      v187 = v185
           + (v183 & v178 | v175 & (v183 | v178))
           + (__ROL8__(v183, 25) ^ __ROR8__(v183, 28) ^ __ROL8__(v183, 30));
      v188 = v361;
      v189 = v365
           + v119
           + ((v123 >> 7) ^ __ROR8__(v123, 1) ^ __ROR8__(v123, 8))
           + ((v180 >> 6) ^ __ROR8__(v180, 19) ^ __ROL8__(v180, 3));
      v190 = (v177 ^ v186 & (v182 ^ v177))
           + v189
           + 1847814050463011016LL
           + v174
           + (__ROL8__(v186, 23) ^ __ROR8__(v186, 14) ^ __ROR8__(v186, 18));
      v191 = v190 + v175;
      v192 = v190
           + (v187 & v183 | v178 & (v187 | v183))
           + (__ROL8__(v187, 25) ^ __ROR8__(v187, 28) ^ __ROL8__(v187, 30));
      v193 = v332 + v123 + ((v361 >> 7) ^ __ROR8__(v361, 1) ^ __ROR8__(v361, 8));
      v194 = v349;
      v195 = ((v184 >> 6) ^ __ROR8__(v184, 19) ^ __ROL8__(v184, 3)) + v193;
      v362 = v195;
      v196 = (v182 ^ v191 & (v186 ^ v182))
           + v195
           + 2177327727835720531LL
           + v177
           + (__ROL8__(v191, 23) ^ __ROR8__(v191, 14) ^ __ROR8__(v191, 18));
      v197 = v196 + v178;
      v198 = v196
           + (__ROL8__(v192, 25) ^ __ROR8__(v192, 28) ^ __ROL8__(v192, 30))
           + (v192 & v187 | v183 & (v192 | v187));
      v199 = ((v189 >> 6) ^ __ROR8__(v189, 19) ^ __ROL8__(v189, 3))
           + v353
           + v188
           + ((v349 >> 7) ^ __ROR8__(v349, 1) ^ __ROR8__(v349, 8));
      v350 = v199;
      v200 = (v186 ^ v197 & (v191 ^ v186))
           + v199
           + 2830643537854262169LL
           + v182
           + (__ROL8__(v197, 23) ^ __ROR8__(v197, 14) ^ __ROR8__(v197, 18));
      v201 = v200 + v183;
      v202 = v200
           + (v198 & v192 | v187 & (v198 | v192))
           + (__ROL8__(v198, 25) ^ __ROR8__(v198, 28) ^ __ROL8__(v198, 30));
      v203 = ((v362 >> 6) ^ __ROR8__(v362, 19) ^ __ROL8__(v362, 3))
           + v367
           + v194
           + ((v339 >> 7) ^ __ROR8__(v339, 1) ^ __ROR8__(v339, 8));
      v204 = v203;
      v205 = (v191 ^ v201 & (v197 ^ v191))
           + v203
           + 3796741975233480872LL
           + v186
           + (__ROL8__(v201, 23) ^ __ROR8__(v201, 14) ^ __ROR8__(v201, 18));
      v206 = v205 + v187;
      v207 = v205
           + (v202 & v198 | v192 & (v202 | v198))
           + (__ROL8__(v202, 25) ^ __ROR8__(v202, 28) ^ __ROL8__(v202, 30));
      v208 = v359
           + v339
           + ((v342 >> 7) ^ __ROR8__(v342, 1) ^ __ROR8__(v342, 8))
           + ((v350 >> 6) ^ __ROR8__(v350, 19) ^ __ROL8__(v350, 3));
      v209 = v208 + 4115178125766777443LL;
      v368 = v208;
      v210 = v363;
      v211 = (v197 ^ v206 & (v201 ^ v197))
           + v209
           + v191
           + (__ROL8__(v206, 23) ^ __ROR8__(v206, 14) ^ __ROR8__(v206, 18));
      v212 = v211 + v192;
      v213 = v211
           + (v207 & v202 | v198 & (v207 | v202))
           + (__ROL8__(v207, 25) ^ __ROR8__(v207, 28) ^ __ROL8__(v207, 30));
      v214 = (v363 >> 7) ^ __ROR8__(v363, 1) ^ __ROR8__(v363, 8);
      v364 = v204;
      v215 = v377 + v342 + v214 + ((v204 >> 6) ^ __ROR8__(v204, 19) ^ __ROL8__(v204, 3));
      v216 = v215;
      v217 = (v201 ^ v212 & (v206 ^ v201))
           + v215
           + 5681478168544905931LL
           + v197
           + (__ROL8__(v212, 23) ^ __ROR8__(v212, 14) ^ __ROR8__(v212, 18));
      v218 = v217 + v198;
      v219 = v217
           + (v213 & v207 | v202 & (v213 | v207))
           + (__ROL8__(v213, 25) ^ __ROR8__(v213, 28) ^ __ROL8__(v213, 30));
      v220 = ((v368 >> 6) ^ __ROR8__(v368, 19) ^ __ROL8__(v368, 3))
           + v356
           + v210
           + ((v345 >> 7) ^ __ROR8__(v345, 1) ^ __ROR8__(v345, 8));
      v329 = v220;
      v221 = (v206 ^ v218 & (v212 ^ v206))
           + v220
           + 6601373596472566643LL
           + v201
           + (__ROL8__(v218, 23) ^ __ROR8__(v218, 14) ^ __ROR8__(v218, 18));
      v222 = v221 + v202;
      v223 = v221
           + (v219 & v213 | v207 & (v219 | v213))
           + (__ROL8__(v219, 25) ^ __ROR8__(v219, 28) ^ __ROL8__(v219, 30));
      v224 = v345 + ((v326 >> 7) ^ __ROR8__(v326, 1) ^ __ROR8__(v326, 8));
      v346 = v216;
      v225 = ((v216 >> 6) ^ __ROR8__(v216, 19) ^ __ROL8__(v216, 3)) + v189 + v224;
      v226 = (v212 ^ v222 & (v218 ^ v212))
           + v225
           + 7507060721942968483LL
           + v206
           + (__ROL8__(v222, 23) ^ __ROR8__(v222, 14) ^ __ROR8__(v222, 18));
      v227 = v226 + v207;
      v228 = v365;
      v366 = v225;
      v229 = (__ROL8__(v223, 25) ^ __ROR8__(v223, 28) ^ __ROL8__(v223, 30))
           + (v223 & v219 | v213 & (v223 | v219))
           + v226;
      v230 = __ROR8__(v220, 19) ^ __ROL8__(v220, 3);
      v231 = v220;
      v232 = v332;
      v233 = v326 + ((v228 >> 7) ^ __ROR8__(v228, 1) ^ __ROR8__(v228, 8)) + v362 + ((v231 >> 6) ^ v230);
      v327 = v233;
      v234 = (v218 ^ v227 & (v222 ^ v218))
           + v233
           + 8399075790359081724LL
           + v212
           + (__ROR8__(v227, 14) ^ __ROR8__(v227, 18) ^ __ROL8__(v227, 23));
      v235 = v234 + v213;
      v236 = v234
           + (__ROL8__(v229, 25) ^ __ROR8__(v229, 28) ^ __ROL8__(v229, 30))
           + (v229 & v223 | v219 & (v229 | v223));
      v237 = ((v225 >> 6) ^ __ROR8__(v225, 19) ^ __ROL8__(v225, 3))
           + v228
           + ((v332 >> 7) ^ __ROR8__(v332, 1) ^ __ROR8__(v332, 8))
           + v350;
      v333 = v237;
      v238 = (v222 ^ v235 & (v227 ^ v222))
           + v237
           + 8693463985226723168LL
           + v218
           + (__ROR8__(v235, 14) ^ __ROR8__(v235, 18) ^ __ROL8__(v235, 23));
      v239 = v238 + v219;
      v240 = v238
           + (__ROL8__(v236, 25) ^ __ROR8__(v236, 28) ^ __ROL8__(v236, 30))
           + (v236 & v229 | v223 & (v236 | v229));
      v335 = ((v327 >> 6) ^ __ROR8__(v327, 19) ^ __ROL8__(v327, 3))
           + v232
           + ((v353 >> 7) ^ __ROR8__(v353, 1) ^ __ROR8__(v353, 8))
           + v364;
      v241 = (v227 ^ v239 & (v235 ^ v227))
           + v335
           - 8878714635349349518LL
           + v222
           + (__ROR8__(v239, 14) ^ __ROR8__(v239, 18) ^ __ROL8__(v239, 23));
      v242 = v241 + v223;
      v243 = v241
           + (__ROL8__(v240, 25) ^ __ROR8__(v240, 28) ^ __ROL8__(v240, 30))
           + (v240 & v236 | v229 & (v240 | v236));
      v244 = v353
           + ((v367 >> 7) ^ __ROR8__(v367, 1) ^ __ROR8__(v367, 8))
           + v368
           + ((v237 >> 6) ^ __ROR8__(v237, 19) ^ __ROL8__(v237, 3));
      v337 = v244;
      v245 = (v235 ^ v242 & (v239 ^ v235))
           + v244
           - 8302665154208450068LL
           + v227
           + (__ROR8__(v242, 14) ^ __ROR8__(v242, 18) ^ __ROL8__(v242, 23));
      v246 = v229 + v245;
      v247 = v356;
      v248 = (__ROL8__(v243, 25) ^ __ROR8__(v243, 28) ^ __ROL8__(v243, 30))
           + (v243 & v240 | v236 & (v243 | v240))
           + v245;
      v249 = ((v335 >> 6) ^ __ROR8__(v335, 19) ^ __ROL8__(v335, 3))
           + v346
           + v367
           + ((v359 >> 7) ^ __ROR8__(v359, 1) ^ __ROR8__(v359, 8));
      v354 = v249;
      v250 = (v239 ^ v246 & (v242 ^ v239))
           + v249
           - 8016688836872298968LL
           + v235
           + (__ROR8__(v246, 14) ^ __ROR8__(v246, 18) ^ __ROL8__(v246, 23));
      v251 = v250 + v236;
      v252 = v250
           + (__ROL8__(v248, 25) ^ __ROR8__(v248, 28) ^ __ROL8__(v248, 30))
           + (v248 & v243 | v240 & (v248 | v243));
      v253 = ((v244 >> 6) ^ __ROR8__(v244, 19) ^ __ROL8__(v244, 3))
           + v329
           + v359
           + ((v377 >> 7) ^ __ROR8__(v377, 1) ^ __ROR8__(v377, 8));
      v340 = v253;
      v254 = (v242 ^ v251 & (v246 ^ v242))
           + v253
           - 6606660893046293015LL
           + v239
           + (__ROR8__(v251, 14) ^ __ROR8__(v251, 18) ^ __ROL8__(v251, 23));
      v255 = v254 + v240;
      v256 = v254
           + (__ROL8__(v252, 25) ^ __ROR8__(v252, 28) ^ __ROL8__(v252, 30))
           + (v252 & v248 | v243 & (v252 | v248));
      v257 = ((v354 >> 6) ^ __ROR8__(v354, 19) ^ __ROL8__(v354, 3))
           + v366
           + v377
           + ((v356 >> 7) ^ __ROR8__(v356, 1) ^ __ROR8__(v356, 8));
      v357 = v257;
      v258 = (v246 ^ v255 & (v251 ^ v246))
           + v257
           - 4685533653050689259LL
           + v242
           + (__ROR8__(v255, 14) ^ __ROR8__(v255, 18) ^ __ROL8__(v255, 23));
      v259 = v243 + v258;
      v260 = v258
           + (__ROL8__(v256, 25) ^ __ROR8__(v256, 28) ^ __ROL8__(v256, 30))
           + (v256 & v252 | v248 & (v256 | v252));
      v343 = ((v340 >> 6) ^ __ROR8__(v340, 19) ^ __ROL8__(v340, 3))
           + v327
           + v247
           + ((v189 >> 7) ^ __ROR8__(v189, 1) ^ __ROR8__(v189, 8));
      v261 = (v251 ^ (v243 + v258) & (v255 ^ v251))
           + v343
           - 4147400797238176981LL
           + v246
           + (__ROR8__(v259, 14) ^ __ROR8__(v243 + v258, 18) ^ __ROL8__(v259, 23));
      v262 = v248 + v261;
      v263 = v261
           + (__ROL8__(v260, 25) ^ __ROR8__(v260, 28) ^ __ROL8__(v260, 30))
           + (v260 & v256 | v252 & (v260 | v256));
      v264 = v333 + ((v362 >> 7) ^ __ROR8__(v362, 1) ^ __ROR8__(v362, 8)) + v189;
      v265 = __ROR8__(v257, 19);
      v266 = __ROL8__(v257, 3);
      v381 = v264 + ((v257 >> 6) ^ v265 ^ v266);
      v360 = v264 + ((v257 >> 6) ^ v265 ^ v266);
      v267 = (v255 ^ v262 & (v259 ^ v255))
           + v381
           - 3880063495543823972LL
           + v251
           + (__ROR8__(v262, 14) ^ __ROR8__(v262, 18) ^ __ROL8__(v262, 23));
      v268 = v267 + v252;
      v269 = v267
           + (__ROL8__(v263, 25) ^ __ROR8__(v263, 28) ^ __ROL8__(v263, 30))
           + (v263 & v260 | v256 & (v263 | v260));
      v382 = v335
           + v362
           + ((v350 >> 7) ^ __ROR8__(v350, 1) ^ __ROR8__(v350, 8))
           + ((v343 >> 6) ^ __ROR8__(v343, 19) ^ __ROL8__(v343, 3));
      v270 = (v259 ^ v268 & (v262 ^ v259))
           + v382
           - 3348786107499101689LL
           + v255
           + (__ROR8__(v268, 14) ^ __ROR8__(v268, 18) ^ __ROL8__(v268, 23));
      v271 = v270 + v256;
      v272 = v270
           + (__ROL8__(v269, 25) ^ __ROR8__(v269, 28) ^ __ROL8__(v269, 30))
           + (v269 & v263 | v260 & (v269 | v263));
      v273 = v337
           + v350
           + ((v364 >> 7) ^ __ROR8__(v364, 1) ^ __ROR8__(v364, 8))
           + ((v360 >> 6) ^ __ROR8__(v360, 19) ^ __ROL8__(v360, 3));
      v383 = v273;
      v274 = (v262 ^ v271 & (v268 ^ v262))
           + v273
           - 1523767162380948706LL
           + v259
           + (__ROR8__(v271, 14) ^ __ROR8__(v271, 18) ^ __ROL8__(v271, 23));
      v275 = v274 + v260;
      v276 = v274
           + (__ROL8__(v272, 25) ^ __ROR8__(v272, 28) ^ __ROL8__(v272, 30))
           + (v272 & v269 | v263 & (v272 | v269));
      v384 = v354
           + v364
           + ((v368 >> 7) ^ __ROR8__(v368, 1) ^ __ROR8__(v368, 8))
           + ((v382 >> 6) ^ __ROR8__(v382, 19) ^ __ROL8__(v382, 3));
      v277 = (v268 ^ v275 & (v271 ^ v268))
           + v384
           - 757361751448694408LL
           + v262
           + (__ROR8__(v275, 14) ^ __ROR8__(v275, 18) ^ __ROL8__(v275, 23));
      v278 = v277 + v263;
      v279 = v277
           + (__ROL8__(v276, 25) ^ __ROR8__(v276, 28) ^ __ROL8__(v276, 30))
           + (v276 & v272 | v269 & (v276 | v272));
      v280 = ((v346 >> 7) ^ __ROR8__(v346, 1) ^ __ROR8__(v346, 8))
           + v368
           + v340
           + ((v273 >> 6) ^ __ROR8__(v273, 19) ^ __ROL8__(v273, 3));
      v385 = v280;
      v281 = (v271 ^ v278 & (v275 ^ v271))
           + v280
           + 500013540394364858LL
           + v268
           + (__ROR8__(v278, 14) ^ __ROR8__(v278, 18) ^ __ROL8__(v278, 23));
      v282 = v281 + v269;
      v283 = v281
           + (__ROL8__(v279, 25) ^ __ROR8__(v279, 28) ^ __ROL8__(v279, 30))
           + (v279 & v276 | v272 & (v279 | v276));
      v284 = __ROR8__(v384, 19);
      v285 = v357 + v346 + ((v329 >> 7) ^ __ROR8__(v329, 1) ^ __ROR8__(v329, 8));
      v286 = __ROL8__(v384, 3);
      v347 = v285 + ((v384 >> 6) ^ v284 ^ v286);
      v386 = v285 + ((v384 >> 6) ^ v284 ^ v286);
      v287 = (v275 ^ v282 & (v278 ^ v275))
           + v347
           + 748580250866718886LL
           + v271
           + (__ROR8__(v282, 14) ^ __ROR8__(v282, 18) ^ __ROL8__(v282, 23));
      v288 = v287 + v272;
      v289 = v287
           + (__ROL8__(v283, 25) ^ __ROR8__(v283, 28) ^ __ROL8__(v283, 30))
           + (v283 & v279 | v276 & (v283 | v279));
      v290 = ((v280 >> 6) ^ __ROR8__(v280, 19) ^ __ROL8__(v280, 3))
           + v343
           + v329
           + ((v366 >> 7) ^ __ROR8__(v366, 1) ^ __ROR8__(v366, 8));
      v387 = v290;
      v330 = v290;
      v291 = (v278 ^ v288 & (v282 ^ v278))
           + v290
           + 1242879168328830382LL
           + v275
           + (__ROR8__(v288, 14) ^ __ROR8__(v288, 18) ^ __ROL8__(v288, 23));
      v292 = v291 + v276;
      v293 = v291
           + (__ROL8__(v289, 25) ^ __ROR8__(v289, 28) ^ __ROL8__(v289, 30))
           + (v289 & v283 | v279 & (v289 | v283));
      v294 = ((v347 >> 6) ^ __ROR8__(v347, 19) ^ __ROL8__(v347, 3))
           + v360
           + v366
           + ((v327 >> 7) ^ __ROR8__(v327, 1) ^ __ROR8__(v327, 8));
      v388 = v294;
      v351 = v294;
      v295 = (v282 ^ v292 & (v288 ^ v282))
           + v294
           + 1977374033974150939LL
           + v278
           + (__ROL8__(v292, 23) ^ __ROR8__(v292, 14) ^ __ROR8__(v292, 18));
      v296 = v279 + v295;
      v297 = (__ROL8__(v293, 25) ^ __ROR8__(v293, 28) ^ __ROL8__(v293, 30))
           + (v293 & v289 | v283 & (v293 | v289))
           + v295;
      v389 = v327
           + ((v333 >> 7) ^ __ROR8__(v333, 1) ^ __ROR8__(v333, 8))
           + v382
           + ((v330 >> 6) ^ __ROR8__(v330, 19) ^ __ROL8__(v330, 3));
      v298 = (v288 ^ v296 & (v292 ^ v288))
           + v389
           + 2944078676154940804LL
           + v282
           + (__ROR8__(v296, 14) ^ __ROR8__(v296, 18) ^ __ROL8__(v296, 23));
      v299 = v298 + v283;
      v300 = v298
           + (__ROL8__(v297, 25) ^ __ROR8__(v297, 28) ^ __ROL8__(v297, 30))
           + (v297 & v293 | v289 & (v297 | v293));
      v301 = v273
           + v333
           + ((v335 >> 7) ^ __ROR8__(v335, 1) ^ __ROR8__(v335, 8))
           + ((v351 >> 6) ^ __ROR8__(v351, 19) ^ __ROL8__(v351, 3));
      v390 = v301;
      v302 = (v292 ^ v299 & (v296 ^ v292))
           + v301
           + 3659926193048069267LL
           + v288
           + (__ROR8__(v299, 14) ^ __ROR8__(v299, 18) ^ __ROL8__(v299, 23));
      v303 = v302 + v289;
      v304 = v302
           + (__ROL8__(v300, 25) ^ __ROR8__(v300, 28) ^ __ROL8__(v300, 30))
           + (v300 & v297 | v293 & (v300 | v297));
      v391 = v384
           + v335
           + ((v337 >> 7) ^ __ROR8__(v337, 1) ^ __ROR8__(v337, 8))
           + ((v389 >> 6) ^ __ROR8__(v389, 19) ^ __ROL8__(v389, 3));
      v305 = (v296 ^ v303 & (v299 ^ v296))
           + v391
           + 4368137639120453308LL
           + v292
           + (__ROL8__(v303, 23) ^ __ROR8__(v303, 14) ^ __ROR8__(v303, 18));
      v306 = v305 + v293;
      v307 = (__ROL8__(v304, 25) ^ __ROR8__(v304, 28) ^ __ROL8__(v304, 30))
           + (v304 & v300 | v297 & (v304 | v300))
           + v305;
      v308 = v280
           + v337
           + ((v354 >> 7) ^ __ROR8__(v354, 1) ^ __ROR8__(v354, 8))
           + ((v301 >> 6) ^ __ROR8__(v301, 19) ^ __ROL8__(v301, 3));
      v392 = v308;
      v309 = (v299 ^ v306 & (v303 ^ v299))
           + v308
           + 4836135668995329356LL
           + v296
           + (__ROL8__(v306, 23) ^ __ROR8__(v306, 14) ^ __ROR8__(v306, 18));
      v310 = v309 + v297;
      v311 = (__ROL8__(v307, 25) ^ __ROR8__(v307, 28) ^ __ROL8__(v307, 30))
           + (v307 & v304 | v300 & (v307 | v304))
           + v309;
      v312 = v354
           + ((v340 >> 7) ^ __ROR8__(v340, 1) ^ __ROR8__(v340, 8))
           + v347
           + ((v391 >> 6) ^ __ROR8__(v391, 19) ^ __ROL8__(v391, 3));
      v393 = v312;
      v313 = (v303 ^ v310 & (v306 ^ v303))
           + v312
           + 5532061633213252278LL
           + v299
           + (__ROL8__(v310, 23) ^ __ROR8__(v310, 14) ^ __ROR8__(v310, 18));
      v314 = v313 + v300;
      v315 = (__ROL8__(v311, 25) ^ __ROR8__(v311, 28) ^ __ROL8__(v311, 30))
           + (v311 & v307 | v304 & (v311 | v307))
           + v313;
      v316 = v330
           + v340
           + ((v357 >> 7) ^ __ROR8__(v357, 1) ^ __ROR8__(v357, 8))
           + (__ROR8__(v308, 19) ^ __ROL8__(v308, 3) ^ (v308 >> 6));
      v394 = v316;
      v317 = (v306 ^ v314 & (v310 ^ v306))
           + v316
           + 6448918945643986474LL
           + v303
           + (__ROL8__(v314, 23) ^ __ROR8__(v314, 14) ^ __ROR8__(v314, 18));
      v318 = v317 + v304;
      v319 = (__ROL8__(v315, 25) ^ __ROR8__(v315, 28) ^ __ROL8__(v315, 30))
           + (v315 & v311 | v307 & (v315 | v311))
           + v317;
      v320 = ((v312 >> 6) ^ __ROR8__(v312, 19) ^ __ROL8__(v312, 3))
           + v357
           + ((v343 >> 7) ^ __ROR8__(v343, 1) ^ __ROR8__(v343, 8))
           + v351;
      v395 = v320;
      v321 = v320
           + 6902733635092675308LL
           + v306
           + (v310 ^ v318 & (v314 ^ v310))
           + (__ROL8__(v318, 23) ^ __ROR8__(v318, 14) ^ __ROR8__(v318, 18));
      v322 = v321 + v307;
      v323 = (__ROL8__(v319, 25) ^ __ROR8__(v319, 28) ^ __ROL8__(v319, 30))
           + (v319 & v315 | v311 & (v319 | v315))
           + v321;
      v370 += v323;
      v396 = ((v316 >> 6) ^ __ROR8__(v316, 19) ^ __ROL8__(v316, 3))
           + v343
           + ((v360 >> 7) ^ __ROR8__(v360, 1) ^ __ROR8__(v360, 8))
           + v389;
      v324 = (v314 ^ v322 & (v318 ^ v314))
           + v396
           + 7801388544844847127LL
           + v310
           + (__ROL8__(v322, 23) ^ __ROR8__(v322, 14) ^ __ROR8__(v322, 18));
      v378 += (v323 & v319 | v315 & (v323 | v319))
            + (__ROL8__(v323, 25) ^ __ROR8__(v323, 28) ^ __ROL8__(v323, 30))
            + v324;
      *v380 = v378;
      v11 = v370;
      v380[1] = v370;
      v371 += v319;
      v7 = v371;
      v372 += v315;
      v8 = v372;
      v373 += v324 + v311;
      v15 = v373;
      result = v378;
      v374 += v322;
      v16 = v374;
      v375 += v318;
      v17 = v375;
      v376 += v314;
      v14 = v376;
      v380[2] = v371;
      v380[3] = v372;
      v380[4] = v373;
      v380[5] = v374;
      v380[6] = v375;
      v380[7] = v376;
    }
    while ( v369 < v379 );
  }
  return result;
}

__int64 __fastcall sub_406ED0(_QWORD *a1)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbp
  bool v5; // cf
  unsigned __int64 v6; // rdx

  v1 = a1[10];
  v2 = a1[9];
  v3 = a1[10];
  v4 = (-(__int64)(v1 < 0x70) & 0xFFFFFFFFFFFFFF80LL) + 256;
  v5 = __CFADD__(a1[8], v3);
  v6 = a1[8] + v3;
  a1[8] = v6;
  if ( v5 )
    a1[9] = ++v2;
  a1[(-(__int64)(v1 < 0x70) & 0xFFFFFFFFFFFFFFF0LL) + 41] = _byteswap_uint64((v6 >> 61) | (8 * v2));
  a1[(-(__int64)(v1 < 0x70) & 0xFFFFFFFFFFFFFFF0LL) + 42] = ((8 * v6) >> 40) & 0xFF00 | ((8 * v6) >> 24) & 0xFF0000 | ((8 * v6) >> 8) & 0xFF000000 | ((8 * v6) >> 56) | (v6 << 11) & 0xFF00000000LL | (v6 << 59) | (v6 << 27) & 0xFF0000000000LL | (v6 << 43) & 0xFF000000000000LL;
  memcpy((char *)a1 + v1 + 88, &unk_40C260, v4 - v1 - 16);
  return sub_403280((unsigned __int64)(a1 + 11), v4, a1);
}

__int64 __fastcall sub_407000(_QWORD *a1, __int64 a2)
{
  sub_406ED0(a1);
  return sub_403240((__int64)a1, a2);
}

__int64 __fastcall sub_407030(_QWORD *a1, __int64 a2)
{
  sub_406ED0(a1);
  return sub_403260((__int64)a1, a2);
}

void __fastcall sub_407060(void *src, size_t n, __int64 a3)
{
  size_t v3; // r13
  __int64 v4; // r12
  const __m128i *v5; // rbx
  __int64 v6; // rbp
  __m128i *v7; // rbp
  const __m128i *v8; // r14
  __m128i v9; // xmm0
  __int64 v10; // rdx
  char *v11; // rsi
  size_t v12; // r13
  size_t v13; // rbp
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r15
  __int64 v16; // r14
  unsigned __int64 v17; // rsi
  char *v18; // rdi
  unsigned int v19; // ecx
  unsigned __int64 v20; // rbp
  _QWORD *v21; // rsi
  __int64 v22; // rcx

  v3 = n;
  v4 = a3;
  v5 = (const __m128i *)src;
  v6 = *(_QWORD *)(a3 + 80);
  if ( v6 )
  {
    v15 = a3 + 88;
    v16 = 256 - v6;
    if ( 256 - v6 > n )
      v16 = n;
    memcpy((void *)(a3 + 88 + v6), src, v16);
    v17 = v16 + *(_QWORD *)(v4 + 80);
    *(_QWORD *)(v4 + 80) = v17;
    if ( v17 > 0x80 )
    {
      sub_403280(v15, v17 & 0xFFFFFFFFFFFFFF80LL, (_QWORD *)v4);
      v20 = (v16 + v6) & 0xFFFFFFFFFFFFFF80LL;
      v21 = (_QWORD *)(v15 + v20);
      v22 = *(_QWORD *)(v4 + 80) & 0x7FLL;
      *(_QWORD *)(v4 + 80) = v22;
      if ( (unsigned int)v22 >= 8 )
      {
        *(_QWORD *)(v4 + 88) = *v21;
        *(_QWORD *)(v15 + (unsigned int)v22 - 8) = *(_QWORD *)((char *)v21 + (unsigned int)v22 - 8);
        qmemcpy(
          (void *)((v4 + 96) & 0xFFFFFFFFFFFFFFF8LL),
          (const void *)(v20 + ((v4 + 96) & 0xFFFFFFFFFFFFFFF8LL)),
          8LL * (((unsigned int)v15 - (((_DWORD)v4 + 96) & 0xFFFFFFF8) + (unsigned int)v22) >> 3));
      }
      else if ( v22 & 4 )
      {
        *(_DWORD *)(v4 + 88) = *(_DWORD *)v21;
        *(_DWORD *)(v15 + (unsigned int)v22 - 4) = *(_DWORD *)((char *)v21 + (unsigned int)v22 - 4);
      }
      else if ( (_DWORD)v22 )
      {
        *(_BYTE *)(v4 + 88) = *(_BYTE *)v21;
        if ( v22 & 2 )
          *(_WORD *)(v15 + (unsigned int)v22 - 2) = *(_WORD *)((char *)v21 + (unsigned int)v22 - 2);
      }
    }
    v5 = (const __m128i *)((char *)src + v16);
    v3 -= v16;
  }
  if ( v3 > 0x7F )
  {
    if ( (unsigned __int8)v5 & 7 )
    {
      v7 = (__m128i *)(v4 + 88);
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
          *(__m128i *)(v4 + 104) = _mm_loadu_si128(v5 - 7);
          *(__m128i *)(v4 + 120) = _mm_loadu_si128(v5 - 6);
          *(__m128i *)(v4 + 136) = _mm_loadu_si128(v5 - 5);
          *(__m128i *)(v4 + 152) = _mm_loadu_si128(v5 - 4);
          *(__m128i *)(v4 + 168) = _mm_loadu_si128(v5 - 3);
          *(__m128i *)(v4 + 184) = _mm_loadu_si128(v5 - 2);
          *(__m128i *)(v4 + 200) = _mm_loadu_si128(v5 - 1);
          sub_403280(v4 + 88, 128LL, (_QWORD *)v4);
        }
        while ( v5 != v8 );
        v3 = v3 - ((v3 - 129) >> 7 << 7) - 128;
      }
LABEL_8:
      v10 = *(_QWORD *)(v4 + 80);
      v11 = (char *)v7->m128i_i64 + v10;
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
          *(_QWORD *)(v4 + 80) = v12;
          return;
        }
      }
      else
      {
        if ( v3 & 4 )
        {
          *(_DWORD *)v11 = v8->m128i_i64[0];
          *(_DWORD *)&v11[(unsigned int)v3 - 4] = *(_DWORD *)((char *)v8->m128i_i64 + (unsigned int)v3 - 4);
        }
        else if ( (_DWORD)v3 )
        {
          *v11 = v8->m128i_i64[0];
          if ( v3 & 2 )
            *(_WORD *)&v11[(unsigned int)v3 - 2] = *(_WORD *)((char *)v8->m128i_i64 + (unsigned int)v3 - 2);
        }
        v12 = v10 + v3;
        if ( v12 <= 0x7F )
          goto LABEL_14;
      }
      v12 -= 128LL;
      sub_403280((unsigned __int64)v7, 128LL, (_QWORD *)v4);
      memcpy(v7, (const void *)(v4 + 216), v12);
      goto LABEL_14;
    }
    v13 = v3;
    v14 = (unsigned __int64)v5;
    v3 &= 0x7Fu;
    v5 = (const __m128i *)((char *)v5 + (v13 & 0xFFFFFFFFFFFFFF80LL));
    sub_403280(v14, v13 & 0xFFFFFFFFFFFFFF80LL, (_QWORD *)v4);
  }
  if ( v3 )
  {
    v7 = (__m128i *)(v4 + 88);
    v8 = v5;
    goto LABEL_8;
  }
}

__int64 __fastcall sub_407510(FILE *stream, __int64 a2)
{
  char *v2; // rax
  char *v3; // r12
  size_t v4; // rbx
  int v5; // edx
  size_t v6; // rax
  __int64 v8; // [rsp+0h] [rbp-188h]
  __int64 v9; // [rsp+8h] [rbp-180h]
  __int64 v10; // [rsp+10h] [rbp-178h]
  __int64 v11; // [rsp+18h] [rbp-170h]
  __int64 v12; // [rsp+20h] [rbp-168h]
  __int64 v13; // [rsp+28h] [rbp-160h]
  __int64 v14; // [rsp+30h] [rbp-158h]
  __int64 v15; // [rsp+38h] [rbp-150h]
  __int64 v16; // [rsp+40h] [rbp-148h]
  __int64 v17; // [rsp+48h] [rbp-140h]
  __int64 v18; // [rsp+50h] [rbp-138h]

  v2 = (char *)malloc(0x8048uLL);
  if ( !v2 )
    return 1LL;
  v17 = 0LL;
  v3 = v2;
  v8 = 7640891576956012808LL;
  v9 = -4942790177534073029LL;
  v10 = 4354685564936845355LL;
  v11 = -6534734903238641935LL;
  v12 = 5840696475078001361LL;
  v13 = -7276294671716946913LL;
  v14 = 2270897969802886507LL;
  v15 = 6620516959819538809LL;
  v16 = 0LL;
  v18 = 0LL;
LABEL_3:
  v4 = 0LL;
  while ( 1 )
  {
    v6 = fread_unlocked(&v3[v4], 1uLL, 0x8000 - v4, stream);
    v4 += v6;
    if ( v4 == 0x8000 )
    {
      sub_403280((unsigned __int64)v3, 0x8000LL, &v8);
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
    sub_407060(v3, v4, (__int64)&v8);
  sub_406ED0(&v8);
  sub_403240((__int64)&v8, a2);
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
        v3 = 0LL;
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
  char *v6; // rbx

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
        v2 = (char *)&unk_40C326;
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
      v2 = (char *)&unk_40C32A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_407AD0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_407AD0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_407AD0((__int64)v9, v79, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
            return sub_407AD0((__int64)v9, v10, s);
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
            return sub_407AD0((__int64)v9, v10, s);
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
            return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
            return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
          return sub_407AD0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_40ADE0((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_407AD0((__int64)v9, v10, s);
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
      return sub_407AD0((__int64)v9, v10, s);
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
        a8 = sub_4079D0("`", v11);
        v47 = sub_4079D0("'", v11);
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

unsigned __int64 __fastcall sub_407AD0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_407AD0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_407AD0((__int64)v9, v79, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
            return sub_407AD0((__int64)v9, v10, s);
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
            return sub_407AD0((__int64)v9, v10, s);
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
            return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
            return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
          return sub_407AD0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_40ADE0((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_407AD0((__int64)v9, v10, s);
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
      return sub_407AD0((__int64)v9, v10, s);
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
        a8 = sub_4079D0("`", v11);
        v47 = sub_4079D0("'", v11);
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

_BYTE *__fastcall sub_408D00(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60F278;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60F290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_409D70();
    v9 = 16LL * (a1 + 1);
    if ( off_60F278 == &xmmword_60F280 )
    {
      v7 = (__int128 *)sub_409B80(0LL, v9);
      off_60F278 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F280);
    }
    else
    {
      off_60F278 = (__int128 *)sub_409B80(off_60F278, v9);
      v7 = off_60F278;
    }
    memset(&v7[dword_60F290], 0, 16LL * (a1 + 1 - dword_60F290));
    dword_60F290 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_407AD0(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
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
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_407AD0(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_408D00(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60F278;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60F290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_409D70();
    v9 = 16LL * (a1 + 1);
    if ( off_60F278 == &xmmword_60F280 )
    {
      v7 = (__int128 *)sub_409B80(0LL, v9);
      off_60F278 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F280);
    }
    else
    {
      off_60F278 = (__int128 *)sub_409B80(off_60F278, v9);
      v7 = off_60F278;
    }
    memset(&v7[dword_60F290], 0, 16LL * (a1 + 1 - dword_60F290));
    dword_60F290 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_407AD0(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
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
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_407AD0(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_409220(int a1, int a2, char *a3)
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
  return sub_408D00(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_409220(int a1, int a2, char *a3)
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
  return sub_408D00(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_409290(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_408D00(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_409290(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_408D00(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_409320(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_60F450;
  v7 = _mm_load_si128((const __m128i *)&xmmword_60F420);
  v8 = _mm_load_si128((const __m128i *)&xmmword_60F430);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_60F440);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_408D00(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_4093A0(char *a1)
{
  return sub_409320(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_4093D0(int a1, int a2, char *a3)
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
  return sub_408D00(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4093D0(int a1, int a2, char *a3)
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
  return sub_408D00(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_409440(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_60F420);
  v7 = _mm_load_si128((const __m128i *)&xmmword_60F430);
  v8 = _mm_load_si128((const __m128i *)&xmmword_60F440);
  v9 = qword_60F450;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_408D00(a1, a4, a5, (__int64)&v6);
}

__int64 __fastcall sub_409570(char a1)
{
  return sub_409E30(a1);
}

__int64 __fastcall sub_409580(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_409580(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_409980(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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

  v0 = dcgettext(0LL, aReportBugsTo, 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_40B5F2);
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

void *__fastcall sub_409B80(void *a1, size_t a2)
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
        sub_409D70();
    }
  }
  return result;
}

void *__fastcall sub_409D20(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_409B20(n);
  return memcpy(v2, src, n);
}

noreturn void  sub_409D70()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_409DB0(FILE *stream)
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
  if ( !(unsigned int)sub_409F70(stream) )
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

__int64 __fastcall sub_409E30(char a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // rax
  int v7; // edi
  int v8; // er12
  int *v9; // rbp

  if ( a2 == 1030 )
  {
    if ( dword_60F458 < 0 )
    {
      v3 = sub_409E30(a1);
      if ( v3 >= 0 && dword_60F458 == -1 )
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
        dword_60F458 = 1;
      }
      else
      {
        v3 = sub_409E30(a1);
        if ( v3 >= 0 )
        {
          dword_60F458 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v3;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_409F70(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_409FB0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_409FB0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_40A010(__int64 a1, int *a2)
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

__int64 __fastcall sub_40A0F0(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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

__int64 __fastcall sub_40A710(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_40A010(a2, a7);
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
        sub_40A010((__int64)v11, a7);
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
            return (unsigned int)sub_40A0F0(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_40A0F0(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"-");
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
        return (unsigned int)sub_40A0F0(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_40ACE0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
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

__int64 __fastcall sub_40AD40(int a1, __int64 a2, char *a3)
{
  return sub_40ACE0(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_40AD60(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_40ACE0(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40AD80(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40A710(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40ADA0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_40ACE0(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_40ADC0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40A710(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_40ADE0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40AEC0(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
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
      result = strcmp(v1, "POSIX") != 0;
  }
  return result;
}

const char *sub_40AF20()
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
            sub_409DB0(v39);
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

int __fastcall sub_40B500(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_60F208 )
    v1 = (void *)unk_60F208;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40B518(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_60EE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
