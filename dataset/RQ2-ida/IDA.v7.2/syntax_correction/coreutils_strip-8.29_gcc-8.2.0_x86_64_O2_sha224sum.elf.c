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
  const char **v78; // [rsp+0h] [rbp-E8h]
  char *s; // [rsp+8h] [rbp-E0h]
  char v80; // [rsp+13h] [rbp-D5h]
  int v81; // [rsp+14h] [rbp-D4h]
  unsigned __int64 v82; // [rsp+18h] [rbp-D0h]
  __int64 v83; // [rsp+20h] [rbp-C8h]
  unsigned __int8 v84; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v85; // [rsp+20h] [rbp-C8h]
  unsigned __int8 v86; // [rsp+20h] [rbp-C8h]
  const char *v87; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v88; // [rsp+20h] [rbp-C8h]
  char v89; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v90; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v91; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v92; // [rsp+28h] [rbp-C0h]
  __int64 v93; // [rsp+30h] [rbp-B8h]
  const char **v94; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v95; // [rsp+40h] [rbp-A8h]
  char v96; // [rsp+48h] [rbp-A0h]
  char v97; // [rsp+49h] [rbp-9Fh]
  char v98; // [rsp+4Ah] [rbp-9Eh]
  char v99; // [rsp+4Bh] [rbp-9Dh]
  int v100; // [rsp+4Ch] [rbp-9Ch]
  char v101; // [rsp+5Fh] [rbp-89h]
  char *lineptr; // [rsp+60h] [rbp-88h]
  size_t n; // [rsp+68h] [rbp-80h]
  char v104[32]; // [rsp+70h] [rbp-78h]
  char v105[88]; // [rsp+90h] [rbp-58h]

  v3 = 0;
  LOBYTE(v4) = 0;
  LODWORD(v5) = -1;
  LODWORD(v6) = a1;
  v7 = (const char *)a2;
  sub_406260(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_409E30(sub_403080);
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
  qword_60E2E8 = 58LL;
  qword_60E2E0 = 56LL;
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
    v72 = dcgettext(0LL, v9, 5);
    error(0, 0, v72);
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
    v94 = (const char **)&v7[8 * (int)v6];
    v10 = dword_60E29C;
    if ( dword_60E29C == (_DWORD)v6 )
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
            fwrite_unlocked("SHA224", 1uLL, 6uLL, stdout);
            fwrite_unlocked(" (", 1uLL, 2uLL, stdout);
            sub_402A40(s, v57);
            fwrite_unlocked(") = ", 1uLL, 4uLL, stdout);
            if ( !((unsigned __int64)qword_60E2E0 >> 1) )
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
          if ( !((unsigned __int64)qword_60E2E0 >> 1) )
            goto LABEL_157;
        }
        else
        {
          v57 = 0;
          if ( v98 )
            goto LABEL_197;
          if ( !((unsigned __int64)qword_60E2E0 >> 1) )
            goto LABEL_157;
        }
LABEL_151:
        v6 = 0LL;
        do
        {
          v58 = (unsigned __int8)v104[v6++];
          __printf_chk(1LL, "%02x", v58);
        }
        while ( (unsigned __int64)qword_60E2E0 >> 1 > v6 );
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
        v6 = sub_4061C0(s, 4235053LL);
        if ( !v6 )
          goto LABEL_141;
      }
      else
      {
        byte_60E2F0 = 1;
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
        v22 = "SHA224";
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
            if ( byte_60E2DB )
            {
              v45 = sub_407D00(0LL, 3LL, s, v17, v15);
              v46 = dcgettext(0LL, "%s: %lu: improperly formatted %s checksum line", 5);
              error(0, 0, v46, v45, v13, "SHA224", v78);
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
        if ( v15 - v18 < qword_60E2E8 + (unsigned __int64)(*v4 == 92) )
          goto LABEL_66;
        v27 = qword_60E2E0 + v18;
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
        v17 = (unsigned int)dword_60E210;
        v29 = v93 + 1;
        if ( v83 - (v93 + 1) != 1 && ((v30 = v16[v93 + 1], v30 == 32) || v30 == 42) )
        {
          if ( dword_60E210 != 1 )
          {
            dword_60E210 = 0;
            v29 = v93 + 2;
          }
        }
        else
        {
          if ( !dword_60E210 )
            goto LABEL_66;
          dword_60E210 = 1;
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
        if ( !byte_60E2DC )
          v36 = strchr(v31, 10) != 0LL;
        v37 = sub_402AF0(v31, v105, &v101);
        v15 = v37;
        if ( !(_BYTE)v37 )
        {
          ++v82;
          if ( byte_60E2DC )
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
        if ( byte_60E2DA && v101 )
          goto LABEL_97;
        v17 = (unsigned __int64)qword_60E2E0 >> 1;
        if ( (unsigned __int64)qword_60E2E0 >> 1 )
        {
          v90 = (unsigned __int64)qword_60E2E0 >> 1;
          v84 = v37;
          v47 = __ctype_tolower_loc();
          v48 = 0LL;
          v15 = v84;
          v17 = v90;
          v49 = *v47;
          while ( v49[(unsigned __int8)v4[2 * v48]] == byte_40A9C0[((unsigned __int8)v105[v48] >> 4) & 0xF]
               && v49[(unsigned __int8)v4[2 * v48 + 1]] == byte_40A9C0[v105[v48] & 0xF] )
          {
            if ( v90 == ++v48 )
            {
              v48 = v90;
              goto LABEL_180;
            }
          }
          ++v95;
          if ( byte_60E2DC )
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
        v97 = byte_60E2DC;
        if ( byte_60E2DC )
          goto LABEL_97;
        v97 = byte_60E2D9;
        if ( byte_60E2D9 )
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
        if ( !byte_60E2D9 )
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
          v7 = (const char *)sub_407D00(0LL, 3LL, s, v17, v15);
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
        v68 = sub_407D00(0LL, 3LL, s, v41, v42);
        v69 = dcgettext(0LL, "%s: read error", 5);
        error(0, 0, v69, v68);
        v44 = 0;
        goto LABEL_113;
      }
      if ( !v81 || !(unsigned int)sub_4086E0((FILE *)v6) )
      {
        if ( v3 )
        {
          if ( byte_60E2DC )
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
          if ( !byte_60E2DA )
          {
LABEL_220:
            if ( v97 )
              goto LABEL_110;
          }
          else if ( v97 )
          {
LABEL_110:
            if ( !(v95 | v82) )
              LOBYTE(v43) = (v5 == 0) | byte_60E2D8 ^ 1;
          }
          else
          {
            v6 = sub_407D00(0LL, 3LL, s, v41, v42);
            v73 = dcgettext(0LL, "%s: no file was verified", 5);
            error(0, 0, v73, v6);
          }
        }
        else
        {
          v6 = sub_407D00(0LL, 3LL, s, v41, v42);
          v67 = dcgettext(0LL, "%s: no properly formatted %s checksum lines found", 5);
          error(0, 0, v67, v6, "SHA224");
        }
        v44 = v43 & 1;
        goto LABEL_113;
      }
LABEL_141:
      v54 = sub_407D00(0LL, 3LL, s, v41, v42);
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
    if ( !byte_60E2F0 || (unsigned int)sub_4086E0(stdin) != -1 )
      return (unsigned __int8)v96 ^ 1u;
    v7 = dcgettext(0LL, "standard input", 5);
    v71 = __errno_location();
    error(1, *v71, v7);
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

  if ( !byte_60E2C8 )
  {
    while ( qword_60E2D0 < (unsigned __int64)(&qword_60DE48 - qword_60DE40 - 1) )
      ((void (*)(void))qword_60DE40[++qword_60E2D0])();
    result = sub_40289B();
    byte_60E2C8 = 1;
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
  v2 = qword_60E2E0;
  if ( !qword_60E2E0 )
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
    byte_60E2F0 = 1;
    sub_406190(stdin, 2LL);
    if ( !(unsigned int)sub_406020(v3) )
      return 1;
LABEL_9:
    v6 = 0;
    v14 = sub_407D00(0LL, 3LL, a1, v4, v5);
    v15 = __errno_location();
    error(0, *v15, "%s", v14);
    if ( stdin != v3 )
      sub_4086E0(v3);
    return v6;
  }
  v8 = a3;
  v9 = sub_4061C0(a1, 4235053LL);
  v3 = (FILE *)v9;
  if ( v9 )
  {
    sub_406190(v9, 2LL);
    if ( !(unsigned int)sub_406020(v3) )
    {
      if ( (unsigned int)sub_4086E0(v3) )
      {
        v6 = 0;
        v12 = sub_407D00(0LL, 3LL, a1, v10, v11);
        v13 = __errno_location();
        error(0, *v13, "%s", v12);
        return v6;
      }
      return 1;
    }
    goto LABEL_9;
  }
  v16 = __errno_location();
  v6 = (unsigned __int8)byte_60E2DA;
  v19 = v16;
  if ( byte_60E2DA && *v16 == 2 )
  {
    *v8 = 1;
  }
  else
  {
    v6 = 0;
    v20 = sub_407D00(0LL, 3LL, a1, v17, v18);
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

  v1 = qword_60E308;
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
  __printf_chk(1LL, v8, "SHA224");
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
  __printf_chk(1LL, v19, "RFC 3874");
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
  while ( *v20 && strcmp("sha224sum", *v20) );
  v21 = v20[1];
  if ( v21 )
  {
    v22 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v22, &unk_409F10);
    v23 = setlocale(5, 0LL);
    if ( !v23 || !strncmp(v23, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v26 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v26, &unk_409F10);
    v27 = setlocale(5, 0LL);
    if ( !v27 || !strncmp(v27, "en_", 3uLL) )
    {
      v21 = "sha224sum";
      v28 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v28, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v21 = "sha224sum";
  }
  v29 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v29, "sha224sum");
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
        v5 = sub_407CD0();
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
  __int64 result; // rax
  __int64 i; // rdx

  result = a2;
  for ( i = 0LL; i != 32; i += 4LL )
    *(_DWORD *)(a2 + i) = _byteswap_ulong(*(_DWORD *)(a1 + i));
  return result;
}

__int64 __fastcall sub_4031E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = a2;
  for ( i = 0LL; i != 28; i += 4LL )
    *(_DWORD *)(a2 + i) = _byteswap_ulong(*(_DWORD *)(a1 + i));
  return result;
}

__int64 __fastcall sub_403200(unsigned __int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int *v3; // rbx
  unsigned int v4; // er13
  unsigned int v5; // er12
  unsigned int v6; // er10
  unsigned int v7; // ebp
  bool v8; // cf
  unsigned int v9; // ecx
  unsigned int v10; // er9
  int v11; // edx
  unsigned int v12; // er8
  __int64 result; // rax
  __int64 i; // rcx
  int v15; // ecx
  int v16; // er14
  int v17; // esi
  int v18; // edi
  int v19; // er9
  int v20; // er8
  int v21; // edi
  int v22; // ecx
  int v23; // ebx
  int v24; // eax
  int v25; // edx
  int v26; // edi
  int v27; // eax
  int v28; // esi
  int v29; // er11
  int v30; // er9
  int v31; // er8
  int v32; // eax
  int v33; // er9
  int v34; // ebx
  int v35; // ecx
  int v36; // er9
  int v37; // edi
  int v38; // edx
  int v39; // esi
  int v40; // er11
  int v41; // er10
  int v42; // esi
  int v43; // eax
  int v44; // er9
  int v45; // esi
  int v46; // ecx
  int v47; // er8
  int v48; // esi
  int v49; // edx
  int v50; // ebx
  int v51; // edi
  int v52; // er10
  int v53; // esi
  int v54; // eax
  int v55; // er9
  int v56; // edi
  int v57; // eax
  int v58; // er8
  int v59; // er14
  int v60; // eax
  int v61; // ebx
  int v62; // ecx
  unsigned int v63; // er11
  int v64; // eax
  int v65; // esi
  int v66; // edx
  unsigned int v67; // er10
  int v68; // eax
  int v69; // edi
  int v70; // er13
  unsigned int v71; // er9
  int v72; // eax
  int v73; // er14
  int v74; // er12
  unsigned int v75; // er8
  int v76; // eax
  int v77; // ecx
  int v78; // ebp
  int v79; // eax
  int v80; // edx
  int v81; // ebx
  unsigned int v82; // eax
  int v83; // esi
  int v84; // er13
  int v85; // eax
  int v86; // esi
  int v87; // er12
  int v88; // edi
  int v89; // ecx
  int v90; // ebp
  int v91; // esi
  int v92; // edx
  int v93; // ebx
  int v94; // ecx
  unsigned int v95; // edx
  int v96; // er14
  int v97; // er13
  int v98; // edx
  unsigned int v99; // eax
  int v100; // er14
  int v101; // er12
  int v102; // eax
  int v103; // er14
  int v104; // ebp
  int v105; // edi
  int v106; // er14
  int v107; // ebx
  int v108; // esi
  int v109; // er14
  int v110; // er13
  int v111; // ecx
  unsigned int v112; // edx
  int v113; // er12
  int v114; // er14
  int v115; // edx
  int v116; // eax
  int v117; // ebp
  int v118; // edi
  int v119; // eax
  int v120; // ebx
  int v121; // esi
  int v122; // er11
  int v123; // er10
  int v124; // ebx
  int v125; // ecx
  int v126; // er10
  int v127; // er9
  int v128; // ebx
  int v129; // ebp
  int v130; // er9
  int v131; // er8
  int v132; // edx
  int v133; // eax
  int v134; // er8
  unsigned int v135; // er13
  int v136; // edx
  int v137; // er11
  int v138; // ebx
  int v139; // edx
  int v140; // er10
  int v141; // er15
  int v142; // ecx
  unsigned int v143; // er12
  int v144; // ecx
  unsigned int v145; // ebp
  int v146; // edx
  int v147; // er9
  int v148; // edi
  unsigned int v149; // er14
  int v150; // eax
  int v151; // er8
  int v152; // esi
  unsigned int v153; // er13
  int v154; // eax
  int v155; // ebx
  int v156; // er11
  unsigned int v157; // edx
  int v158; // eax
  int v159; // er15
  int v160; // er10
  int v161; // ebp
  unsigned int v162; // er13
  int v163; // eax
  int v164; // ebp
  int v165; // er9
  int v166; // ecx
  int v167; // eax
  int v168; // edx
  int v169; // esi
  int v170; // er8
  int v171; // ecx
  unsigned int v172; // er12
  int v173; // esi
  int v174; // er11
  int v175; // er13
  int v176; // edi
  int v177; // esi
  int v178; // er14
  int v179; // er9
  int v180; // edi
  int v181; // edx
  int v182; // eax
  int v183; // er9
  int v184; // edi
  int v185; // ecx
  int v186; // er10
  unsigned int v187; // er12
  int v188; // edi
  int v189; // er13
  int v190; // er9
  unsigned int v191; // ebp
  int v192; // esi
  int v193; // er14
  int v194; // er8
  int v195; // edx
  int v196; // eax
  int v197; // edi
  int v198; // edx
  int v199; // er10
  int v200; // esi
  int v201; // edx
  int v202; // er9
  int v203; // ecx
  unsigned int v204; // edx
  int v205; // er13
  int v206; // er8
  int v207; // edx
  int v208; // er13
  int v209; // edi
  int v210; // eax
  int v211; // er12
  int v212; // esi
  int v213; // er10
  unsigned int v214; // ebp
  int v215; // er12
  int v216; // ecx
  int v217; // er9
  int v218; // er12
  int v219; // edx
  int v220; // er12
  int v221; // er8
  int v222; // eax
  int v223; // er8
  int v224; // ebx
  int v225; // er10
  int v226; // ebx
  int v227; // er11
  int v228; // er9
  int v229; // er11
  int v230; // ecx
  int v231; // er12
  int v232; // ecx
  int v233; // edx
  int v234; // eax
  unsigned int v235; // [rsp+0h] [rbp-F8h]
  unsigned int v236; // [rsp+0h] [rbp-F8h]
  unsigned int v237; // [rsp+4h] [rbp-F4h]
  unsigned int v238; // [rsp+4h] [rbp-F4h]
  unsigned int v239; // [rsp+8h] [rbp-F0h]
  unsigned int v240; // [rsp+8h] [rbp-F0h]
  unsigned int v241; // [rsp+Ch] [rbp-ECh]
  unsigned int v242; // [rsp+10h] [rbp-E8h]
  unsigned int v243; // [rsp+10h] [rbp-E8h]
  unsigned int v244; // [rsp+14h] [rbp-E4h]
  unsigned int v245; // [rsp+14h] [rbp-E4h]
  unsigned int v246; // [rsp+14h] [rbp-E4h]
  unsigned int v247; // [rsp+18h] [rbp-E0h]
  unsigned int v248; // [rsp+18h] [rbp-E0h]
  unsigned int v249; // [rsp+1Ch] [rbp-DCh]
  unsigned int v250; // [rsp+1Ch] [rbp-DCh]
  unsigned int v251; // [rsp+20h] [rbp-D8h]
  unsigned int v252; // [rsp+20h] [rbp-D8h]
  unsigned int v253; // [rsp+24h] [rbp-D4h]
  unsigned int v254; // [rsp+24h] [rbp-D4h]
  unsigned int v255; // [rsp+28h] [rbp-D0h]
  unsigned int v256; // [rsp+28h] [rbp-D0h]
  unsigned int v257; // [rsp+2Ch] [rbp-CCh]
  unsigned int v258; // [rsp+2Ch] [rbp-CCh]
  unsigned int v259; // [rsp+30h] [rbp-C8h]
  unsigned int v260; // [rsp+34h] [rbp-C4h]
  unsigned __int64 v261; // [rsp+38h] [rbp-C0h]
  unsigned int v262; // [rsp+40h] [rbp-B8h]
  unsigned int v263; // [rsp+44h] [rbp-B4h]
  int v264; // [rsp+48h] [rbp-B0h]
  int v265; // [rsp+4Ch] [rbp-ACh]
  int v266; // [rsp+50h] [rbp-A8h]
  int v267; // [rsp+54h] [rbp-A4h]
  int v268; // [rsp+58h] [rbp-A0h]
  int v269; // [rsp+5Ch] [rbp-9Ch]
  unsigned int v270; // [rsp+60h] [rbp-98h]
  unsigned int v271; // [rsp+64h] [rbp-94h]
  unsigned int v272; // [rsp+68h] [rbp-90h]
  int v273; // [rsp+6Ch] [rbp-8Ch]
  unsigned __int64 v274; // [rsp+70h] [rbp-88h]
  int *v275; // [rsp+78h] [rbp-80h]
  int v276; // [rsp+80h] [rbp-78h]
  unsigned int v277; // [rsp+84h] [rbp-74h]
  unsigned int v278; // [rsp+88h] [rbp-70h]
  unsigned int v279; // [rsp+8Ch] [rbp-6Ch]
  unsigned int v280; // [rsp+90h] [rbp-68h]
  unsigned int v281; // [rsp+94h] [rbp-64h]
  unsigned int v282; // [rsp+98h] [rbp-60h]
  unsigned int v283; // [rsp+9Ch] [rbp-5Ch]
  unsigned int v284; // [rsp+A0h] [rbp-58h]
  unsigned int v285; // [rsp+A4h] [rbp-54h]
  unsigned int v286; // [rsp+A8h] [rbp-50h]
  unsigned int v287; // [rsp+ACh] [rbp-4Ch]
  unsigned int v288; // [rsp+B0h] [rbp-48h]
  unsigned int v289; // [rsp+B4h] [rbp-44h]
  unsigned int v290; // [rsp+B8h] [rbp-40h]
  unsigned int v291; // [rsp+BCh] [rbp-3Ch]

  v3 = a3;
  v4 = a3[2];
  v5 = a3[3];
  v6 = a3[4];
  v7 = a3[5];
  v261 = a1;
  v8 = __CFADD__(a3[8], (_DWORD)a2);
  v9 = a3[8] + a2;
  v10 = a3[6];
  v275 = (int *)a3;
  v11 = *a3;
  v3[8] = v9;
  v12 = v3[7];
  v274 = a1 + (a2 & 0xFFFFFFFFFFFFFFFCLL);
  result = v3[1];
  v3[9] += v8 + HIDWORD(a2);
  if ( a1 < a1 + (a2 & 0xFFFFFFFFFFFFFFFCLL) )
  {
    v269 = v12;
    v268 = v10;
    v267 = v7;
    v266 = v6;
    v265 = v5;
    v264 = v4;
    v263 = result;
    v273 = v11;
    do
    {
      for ( i = 0LL; i != 64; i += 4LL )
        *(int *)((char *)&v276 + i) = _byteswap_ulong(*(_DWORD *)(v261 + i));
      v261 += 64LL;
      v15 = (__ROR4__(v6, 6) ^ __ROR4__(v6, 11) ^ __ROL4__(v6, 7)) + v276 + v12 + 1116352408 + (v10 ^ v6 & (v10 ^ v7));
      v16 = v15 + v5;
      v17 = v15 + (__ROL4__(v11, 10) ^ __ROR4__(v11, 2) ^ __ROR4__(v11, 13)) + (result & v11 | v4 & (result | v11));
      v18 = (v7 ^ (v15 + v5) & (v7 ^ v6))
          + v277
          + v10
          + 1899447441
          + (__ROR4__(v15 + v5, 6) ^ __ROR4__(v15 + v5, 11) ^ __ROL4__(v15 + v5, 7));
      v19 = v18 + v4;
      v20 = v18 + (__ROL4__(v17, 10) ^ __ROR4__(v17, 2) ^ __ROR4__(v17, 13)) + (v11 & v17 | result & (v11 | v17));
      v21 = (v6 ^ (v18 + v4) & (v6 ^ (v15 + v5)))
          + v278
          + v7
          - 1245643825
          + (__ROR4__(v18 + v4, 6) ^ __ROR4__(v18 + v4, 11) ^ __ROL4__(v18 + v4, 7));
      v22 = v21 + result;
      v23 = v21 + (__ROL4__(v20, 10) ^ __ROR4__(v20, 2) ^ __ROR4__(v20, 13)) + (v20 & v17 | v11 & (v20 | v17));
      v24 = (v16 ^ v22 & (v19 ^ v16))
          + v6
          + v279
          - 373957723
          + (__ROR4__(v21 + result, 6) ^ __ROR4__(v21 + result, 11) ^ __ROL4__(v22, 7));
      v25 = v24 + v11;
      v26 = v24 + (__ROL4__(v23, 10) ^ __ROR4__(v23, 2) ^ __ROR4__(v23, 13)) + (v23 & v20 | v17 & (v23 | v20));
      v27 = (v19 ^ v25 & (v22 ^ v19))
          + v280
          + v16
          + 961987163
          + (__ROR4__(v25, 6) ^ __ROR4__(v25, 11) ^ __ROL4__(v25, 7));
      v28 = v27 + v17;
      v29 = v27 + (__ROL4__(v26, 10) ^ __ROR4__(v26, 2) ^ __ROR4__(v26, 13)) + (v26 & v23 | v20 & (v26 | v23));
      v30 = v281
          + v19
          + 1508970993
          + (v22 ^ v28 & (v25 ^ v22))
          + (__ROR4__(v28, 6) ^ __ROR4__(v28, 11) ^ __ROL4__(v28, 7));
      v31 = v30 + v20;
      v32 = v30 + (__ROL4__(v29, 10) ^ __ROR4__(v29, 2) ^ __ROR4__(v29, 13)) + (v29 & v26 | v23 & (v29 | v26));
      v33 = (v25 ^ v31 & (v28 ^ v25))
          + v282
          + v22
          - 1841331548
          + (__ROR4__(v31, 6) ^ __ROR4__(v31, 11) ^ __ROL4__(v31, 7));
      v34 = v33 + v23;
      v35 = v33 + (__ROL4__(v32, 10) ^ __ROR4__(v32, 2) ^ __ROR4__(v32, 13)) + (v32 & v29 | v26 & (v32 | v29));
      v36 = (v28 ^ v34 & (v31 ^ v28))
          + v283
          + v25
          - 1424204075
          + (__ROR4__(v34, 6) ^ __ROR4__(v34, 11) ^ __ROL4__(v34, 7));
      v37 = v36 + v26;
      v38 = v36 + (__ROL4__(v35, 10) ^ __ROR4__(v35, 2) ^ __ROR4__(v35, 13)) + (v35 & v32 | v29 & (v35 | v32));
      v39 = v284
          + v28
          - 670586216
          + (v31 ^ v37 & (v34 ^ v31))
          + (__ROR4__(v37, 6) ^ __ROR4__(v37, 11) ^ __ROL4__(v37, 7));
      v40 = v39 + v29;
      v41 = v39 + (__ROL4__(v38, 10) ^ __ROR4__(v38, 2) ^ __ROR4__(v38, 13)) + (v38 & v35 | v32 & (v38 | v35));
      v42 = (v34 ^ v40 & (v37 ^ v34))
          + v285
          + v31
          + 310598401
          + (__ROR4__(v40, 6) ^ __ROR4__(v40, 11) ^ __ROL4__(v40, 7));
      v43 = v42 + v32;
      v44 = v42 + (__ROL4__(v41, 10) ^ __ROR4__(v41, 2) ^ __ROR4__(v41, 13)) + (v41 & v38 | v35 & (v41 | v38));
      v45 = (v37 ^ v43 & (v40 ^ v37))
          + v286
          + v34
          + 607225278
          + (__ROR4__(v43, 6) ^ __ROR4__(v43, 11) ^ __ROL4__(v43, 7));
      v46 = v45 + v35;
      v47 = v45 + (__ROL4__(v44, 10) ^ __ROR4__(v44, 2) ^ __ROR4__(v44, 13)) + (v44 & v41 | v38 & (v44 | v41));
      v48 = (v40 ^ v46 & (v43 ^ v40))
          + v287
          + v37
          + 1426881987
          + (__ROR4__(v46, 6) ^ __ROR4__(v46, 11) ^ __ROL4__(v46, 7));
      v49 = v48 + v38;
      v50 = v48 + (__ROL4__(v47, 10) ^ __ROR4__(v47, 2) ^ __ROR4__(v47, 13)) + (v47 & v44 | v41 & (v47 | v44));
      v51 = (v43 ^ v49 & (v46 ^ v43))
          + v288
          + v40
          + 1925078388
          + (__ROR4__(v49, 6) ^ __ROR4__(v49, 11) ^ __ROL4__(v49, 7));
      v52 = v51 + v41;
      v53 = v51 + (__ROL4__(v50, 10) ^ __ROR4__(v50, 2) ^ __ROR4__(v50, 13)) + (v50 & v47 | v44 & (v50 | v47));
      v54 = v289
          + v43
          - 2132889090
          + (v46 ^ v52 & (v49 ^ v46))
          + (__ROR4__(v52, 6) ^ __ROR4__(v52, 11) ^ __ROL4__(v52, 7));
      v55 = v54 + v44;
      v56 = v54 + (__ROL4__(v53, 10) ^ __ROR4__(v53, 2) ^ __ROR4__(v53, 13)) + (v53 & v50 | v47 & (v53 | v50));
      v57 = (v49 ^ v55 & (v52 ^ v49))
          + v290
          + v46
          - 1680079193
          + (__ROR4__(v55, 6) ^ __ROR4__(v55, 11) ^ __ROL4__(v55, 7));
      v58 = v57 + v47;
      v59 = v57 + (__ROL4__(v56, 10) ^ __ROR4__(v56, 2) ^ __ROR4__(v56, 13)) + (v56 & v53 | v50 & (v56 | v53));
      v60 = (v52 ^ v58 & (v55 ^ v52))
          + v291
          + v49
          - 1046744716
          + (__ROR4__(v58, 6) ^ __ROR4__(v58, 11) ^ __ROL4__(v58, 7));
      v61 = v60 + v50;
      v62 = v60 + (__ROL4__(v59, 10) ^ __ROR4__(v59, 2) ^ __ROR4__(v59, 13)) + (v59 & v56 | v53 & (v59 | v56));
      v63 = (__ROL4__(v290, 15) ^ __ROL4__(v290, 13) ^ (v290 >> 10))
          + v285
          + v276
          + ((v277 >> 3) ^ __ROR4__(v277, 7) ^ __ROL4__(v277, 14));
      v64 = (v55 ^ v61 & (v58 ^ v55))
          + v52
          + v63
          - 459576895
          + (__ROR4__(v61, 6) ^ __ROR4__(v61, 11) ^ __ROL4__(v61, 7));
      v65 = v64 + v53;
      v66 = v64 + (__ROL4__(v62, 10) ^ __ROR4__(v62, 2) ^ __ROR4__(v62, 13)) + (v62 & v59 | v56 & (v62 | v59));
      v67 = (__ROL4__(v291, 15) ^ __ROL4__(v291, 13) ^ (v291 >> 10))
          + v277
          + v286
          + ((v278 >> 3) ^ __ROR4__(v278, 7) ^ __ROL4__(v278, 14));
      v68 = (v58 ^ v65 & (v61 ^ v58))
          + v55
          + v67
          - 272742522
          + (__ROR4__(v65, 6) ^ __ROR4__(v65, 11) ^ __ROL4__(v65, 7));
      v69 = v68 + v56;
      v70 = v68 + (__ROL4__(v66, 10) ^ __ROR4__(v66, 2) ^ __ROR4__(v66, 13)) + (v66 & v62 | v59 & (v66 | v62));
      v71 = (__ROL4__(v63, 15) ^ __ROL4__(v63, 13) ^ (v63 >> 10))
          + v278
          + v287
          + (__ROL4__(v279, 14) ^ __ROR4__(v279, 7) ^ (v279 >> 3));
      v72 = (v61 ^ v69 & (v65 ^ v61))
          + v58
          + v71
          + 264347078
          + (__ROR4__(v69, 6) ^ __ROR4__(v69, 11) ^ __ROL4__(v69, 7));
      v73 = v72 + v59;
      v74 = v72 + (__ROL4__(v70, 10) ^ __ROR4__(v70, 2) ^ __ROR4__(v70, 13)) + (v70 & v66 | v62 & (v70 | v66));
      v75 = (__ROL4__(v67, 15) ^ __ROL4__(v67, 13) ^ (v67 >> 10))
          + v288
          + v279
          + (__ROL4__(v280, 14) ^ __ROR4__(v280, 7) ^ (v280 >> 3));
      v76 = (v65 ^ v73 & (v69 ^ v65))
          + v61
          + v75
          + 604807628
          + (__ROR4__(v73, 6) ^ __ROR4__(v73, 11) ^ __ROL4__(v73, 7));
      v77 = v76 + v62;
      v78 = v76 + (__ROL4__(v74, 10) ^ __ROR4__(v74, 2) ^ __ROR4__(v74, 13)) + (v74 & v70 | v66 & (v74 | v70));
      v235 = (__ROL4__(v281, 14) ^ __ROR4__(v281, 7) ^ (v281 >> 3))
           + v289
           + v280
           + ((v71 >> 10) ^ __ROL4__(v71, 15) ^ __ROL4__(v71, 13));
      v79 = (v69 ^ v77 & (v73 ^ v69))
          + v65
          + v235
          + 770255983
          + (__ROR4__(v77, 6) ^ __ROR4__(v77, 11) ^ __ROL4__(v77, 7));
      v80 = v79 + v66;
      v81 = v79 + (__ROL4__(v78, 10) ^ __ROR4__(v78, 2) ^ __ROR4__(v78, 13)) + (v78 & v74 | v70 & (v78 | v74));
      v82 = ((v75 >> 10) ^ __ROL4__(v75, 15) ^ __ROL4__(v75, 13))
          + (__ROL4__(v282, 14) ^ __ROR4__(v282, 7) ^ (v282 >> 3))
          + v290
          + v281;
      v237 = v82;
      v83 = (v73 ^ v80 & (v77 ^ v73))
          + v69
          + v82
          + 1249150122
          + (__ROR4__(v80, 6) ^ __ROR4__(v80, 11) ^ __ROL4__(v80, 7));
      v84 = v83 + v70;
      v85 = v83 + (__ROL4__(v81, 10) ^ __ROR4__(v81, 2) ^ __ROR4__(v81, 13)) + (v81 & v78 | v74 & (v81 | v78));
      v239 = (__ROL4__(v283, 14) ^ __ROR4__(v283, 7) ^ (v283 >> 3))
           + v291
           + v282
           + ((v235 >> 10) ^ __ROL4__(v235, 15) ^ __ROL4__(v235, 13));
      v86 = (v77 ^ v84 & (v80 ^ v77))
          + v73
          + v239
          + 1555081692
          + (__ROR4__(v84, 6) ^ __ROR4__(v84, 11) ^ __ROL4__(v84, 7));
      v87 = v86 + v74;
      v88 = v86 + (__ROL4__(v85, 10) ^ __ROR4__(v85, 2) ^ __ROR4__(v85, 13)) + (v85 & v81 | v78 & (v85 | v81));
      v242 = ((v237 >> 10) ^ __ROL4__(v237, 15) ^ __ROL4__(v237, 13))
           + v63
           + v283
           + ((v284 >> 3) ^ __ROR4__(v284, 7) ^ __ROL4__(v284, 14));
      v89 = v77
          + v242
          + 1996064986
          + (v80 ^ v87 & (v84 ^ v80))
          + (__ROR4__(v87, 6) ^ __ROR4__(v87, 11) ^ __ROL4__(v87, 7));
      v90 = v89 + v78;
      v91 = v89 + (__ROL4__(v88, 10) ^ __ROR4__(v88, 2) ^ __ROR4__(v88, 13)) + (v88 & v85 | v81 & (v88 | v85));
      v244 = ((v239 >> 10) ^ __ROL4__(v239, 15) ^ __ROL4__(v239, 13))
           + v67
           + v284
           + ((v285 >> 3) ^ __ROR4__(v285, 7) ^ __ROL4__(v285, 14));
      v92 = v80
          + v244
          - 1740746414
          + (v84 ^ v90 & (v87 ^ v84))
          + (__ROR4__(v90, 6) ^ __ROR4__(v90, 11) ^ __ROL4__(v90, 7));
      v93 = v92 + v81;
      v94 = v92 + (__ROL4__(v91, 10) ^ __ROR4__(v91, 2) ^ __ROR4__(v91, 13)) + (v91 & v88 | v85 & (v91 | v88));
      v95 = ((v242 >> 10) ^ __ROL4__(v242, 15) ^ __ROL4__(v242, 13))
          + v71
          + v285
          + ((v286 >> 3) ^ __ROR4__(v286, 7) ^ __ROL4__(v286, 14));
      v247 = v95;
      v96 = (v87 ^ v93 & (v90 ^ v87))
          + v84
          + v95
          - 1473132947
          + (__ROR4__(v93, 6) ^ __ROR4__(v93, 11) ^ __ROL4__(v93, 7));
      v97 = v85 + v96;
      v98 = v96 + (__ROL4__(v94, 10) ^ __ROR4__(v94, 2) ^ __ROR4__(v94, 13)) + (v94 & v91 | v88 & (v94 | v91));
      v99 = ((v244 >> 10) ^ __ROL4__(v244, 15) ^ __ROL4__(v244, 13))
          + v75
          + v286
          + ((v287 >> 3) ^ __ROR4__(v287, 7) ^ __ROL4__(v287, 14));
      v249 = v99;
      v100 = (v90 ^ v97 & (v93 ^ v90))
           + v87
           + v99
           - 1341970488
           + (__ROR4__(v97, 6) ^ __ROR4__(v97, 11) ^ __ROL4__(v97, 7));
      v101 = v88 + v100;
      v102 = v100 + (__ROL4__(v98, 10) ^ __ROR4__(v98, 2) ^ __ROR4__(v98, 13)) + (v98 & v94 | v91 & (v98 | v94));
      v251 = ((v247 >> 10) ^ __ROL4__(v247, 15) ^ __ROL4__(v247, 13))
           + v235
           + v287
           + ((v288 >> 3) ^ __ROR4__(v288, 7) ^ __ROL4__(v288, 14));
      v103 = (v93 ^ v101 & (v97 ^ v93))
           + v90
           + v251
           - 1084653625
           + (__ROR4__(v101, 6) ^ __ROR4__(v101, 11) ^ __ROL4__(v101, 7));
      v104 = v91 + v103;
      v105 = v103 + (__ROL4__(v102, 10) ^ __ROR4__(v102, 2) ^ __ROR4__(v102, 13)) + (v102 & v98 | v94 & (v102 | v98));
      v253 = ((v249 >> 10) ^ __ROL4__(v249, 15) ^ __ROL4__(v249, 13))
           + v237
           + v288
           + ((v289 >> 3) ^ __ROR4__(v289, 7) ^ __ROL4__(v289, 14));
      v106 = (v97 ^ v104 & (v101 ^ v97))
           + v93
           + v253
           - 958395405
           + (__ROR4__(v104, 6) ^ __ROR4__(v104, 11) ^ __ROL4__(v104, 7));
      v107 = v94 + v106;
      v108 = v106 + (__ROL4__(v105, 10) ^ __ROR4__(v105, 2) ^ __ROR4__(v105, 13)) + (v105 & v102 | v98 & (v105 | v102));
      v255 = ((v251 >> 10) ^ __ROL4__(v251, 15) ^ __ROL4__(v251, 13))
           + v239
           + v289
           + ((v290 >> 3) ^ __ROR4__(v290, 7) ^ __ROL4__(v290, 14));
      v109 = (v101 ^ v107 & (v104 ^ v101))
           + v97
           + v255
           - 710438585
           + (__ROR4__(v107, 6) ^ __ROR4__(v107, 11) ^ __ROL4__(v107, 7));
      v110 = v98 + v109;
      v111 = v109 + (__ROL4__(v108, 10) ^ __ROR4__(v108, 2) ^ __ROR4__(v108, 13)) + (v108 & v105 | v102 & (v108 | v105));
      v112 = ((v253 >> 10) ^ __ROL4__(v253, 15) ^ __ROL4__(v253, 13))
           + v242
           + v290
           + ((v291 >> 3) ^ __ROR4__(v291, 7) ^ __ROL4__(v291, 14));
      v257 = v112;
      v113 = v101
           + v112
           + 113926993
           + (v104 ^ v110 & (v107 ^ v104))
           + (__ROR4__(v110, 6) ^ __ROR4__(v110, 11) ^ __ROL4__(v110, 7));
      v114 = v102 + v113;
      v115 = v113 + (__ROL4__(v111, 10) ^ __ROR4__(v111, 2) ^ __ROR4__(v111, 13)) + (v111 & v108 | v105 & (v111 | v108));
      v116 = ((v255 >> 10) ^ __ROL4__(v255, 15) ^ __ROL4__(v255, 13))
           + v244
           + v291
           + ((v63 >> 3) ^ __ROR4__(v63, 7) ^ __ROL4__(v63, 14));
      v259 = v116;
      v117 = v104
           + v116
           + 338241895
           + (v107 ^ v114 & (v110 ^ v107))
           + (__ROR4__(v114, 6) ^ __ROR4__(v114, 11) ^ __ROL4__(v114, 7));
      v118 = v117 + v105;
      v119 = v117 + (__ROL4__(v115, 10) ^ __ROR4__(v115, 2) ^ __ROR4__(v115, 13)) + (v115 & v111 | v108 & (v115 | v111));
      v270 = ((v257 >> 10) ^ __ROL4__(v257, 15) ^ __ROL4__(v257, 13))
           + v247
           + ((v67 >> 3) ^ __ROR4__(v67, 7) ^ __ROL4__(v67, 14))
           + v63;
      v120 = v107
           + v270
           + 666307205
           + (v110 ^ v118 & (v114 ^ v110))
           + (__ROR4__(v118, 6) ^ __ROR4__(v118, 11) ^ __ROL4__(v118, 7));
      v121 = v120 + v108;
      v122 = v120 + (__ROL4__(v119, 10) ^ __ROR4__(v119, 2) ^ __ROR4__(v119, 13)) + (v119 & v115 | v111 & (v119 | v115));
      v123 = ((v259 >> 10) ^ __ROL4__(v259, 15) ^ __ROL4__(v259, 13))
           + v249
           + ((v71 >> 3) ^ __ROR4__(v71, 7) ^ __ROL4__(v71, 14))
           + v67;
      v260 = v123;
      v124 = (v114 ^ v121 & (v118 ^ v114))
           + v110
           + v123
           + 773529912
           + (__ROR4__(v121, 6) ^ __ROR4__(v121, 11) ^ __ROL4__(v121, 7));
      v125 = v124 + v111;
      v126 = v124 + (__ROL4__(v122, 10) ^ __ROR4__(v122, 2) ^ __ROR4__(v122, 13)) + (v122 & v119 | v115 & (v122 | v119));
      v127 = ((v270 >> 10) ^ __ROL4__(v270, 15) ^ __ROL4__(v270, 13))
           + v251
           + ((v75 >> 3) ^ __ROR4__(v75, 7) ^ __ROL4__(v75, 14))
           + v71;
      v271 = v127;
      v128 = (v118 ^ v125 & (v121 ^ v118))
           + v114
           + v127
           + 1294757372
           + (__ROR4__(v125, 6) ^ __ROR4__(v125, 11) ^ __ROL4__(v125, 7));
      v129 = v115 + v128;
      v130 = v128 + (__ROL4__(v126, 10) ^ __ROR4__(v126, 2) ^ __ROR4__(v126, 13)) + (v126 & v122 | v119 & (v126 | v122));
      v131 = ((v260 >> 10) ^ __ROL4__(v260, 15) ^ __ROL4__(v260, 13))
           + v253
           + ((v235 >> 3) ^ __ROR4__(v235, 7) ^ __ROL4__(v235, 14))
           + v75;
      v272 = v131;
      v132 = (v121 ^ (v115 + v128) & (v125 ^ v121))
           + v118
           + v131
           + 1396182291
           + (__ROR4__(v115 + v128, 6) ^ __ROR4__(v115 + v128, 11) ^ __ROL4__(v115 + v128, 7));
      v133 = v132 + v119;
      v134 = v132 + (__ROL4__(v130, 10) ^ __ROR4__(v130, 2) ^ __ROR4__(v130, 13)) + (v130 & v126 | v122 & (v130 | v126));
      v135 = v255
           + v235
           + ((v237 >> 3) ^ __ROR4__(v237, 7) ^ __ROL4__(v237, 14))
           + ((v271 >> 10) ^ __ROL4__(v271, 15) ^ __ROL4__(v271, 13));
      v136 = (v125 ^ v133 & (v129 ^ v125))
           + v121
           + v135
           + 1695183700
           + (__ROR4__(v133, 6) ^ __ROR4__(v133, 11) ^ __ROL4__(v133, 7));
      v137 = v136 + v122;
      v138 = v136 + (__ROL4__(v134, 10) ^ __ROR4__(v134, 2) ^ __ROR4__(v134, 13)) + (v134 & v130 | v126 & (v134 | v130));
      v241 = v257
           + v237
           + ((v239 >> 3) ^ __ROR4__(v239, 7) ^ __ROL4__(v239, 14))
           + ((v272 >> 10) ^ __ROL4__(v272, 15) ^ __ROL4__(v272, 13));
      v262 = v135;
      v139 = (v129 ^ v137 & (v133 ^ v129))
           + v125
           + v241
           + 1986661051
           + (__ROR4__(v137, 6) ^ __ROR4__(v137, 11) ^ __ROL4__(v137, 7));
      v140 = v139 + v126;
      v141 = v139 + (__ROL4__(v138, 10) ^ __ROR4__(v138, 2) ^ __ROR4__(v138, 13)) + (v138 & v134 | v130 & (v138 | v134));
      v142 = ((v135 >> 10) ^ __ROL4__(v135, 15) ^ __ROL4__(v135, 13))
           + v259
           + v239
           + ((v242 >> 3) ^ __ROR4__(v242, 7) ^ __ROL4__(v242, 14));
      v143 = v142;
      v144 = v129 + v142 - 2117940946;
      v145 = v244;
      v245 = v143;
      v146 = (v133 ^ v140 & (v137 ^ v133)) + v144 + (__ROR4__(v140, 6) ^ __ROR4__(v140, 11) ^ __ROL4__(v140, 7));
      v147 = v146 + v130;
      v148 = v146 + (__ROL4__(v141, 10) ^ __ROR4__(v141, 2) ^ __ROR4__(v141, 13)) + (v141 & v138 | v134 & (v141 | v138));
      v149 = v247;
      v236 = ((v241 >> 10) ^ __ROL4__(v241, 15) ^ __ROL4__(v241, 13))
           + v270
           + v242
           + ((v145 >> 3) ^ __ROR4__(v145, 7) ^ __ROL4__(v145, 14));
      v150 = v133
           + v236
           - 1838011259
           + (v137 ^ v147 & (v140 ^ v137))
           + (__ROR4__(v147, 6) ^ __ROR4__(v147, 11) ^ __ROL4__(v147, 7));
      v151 = v150 + v134;
      v152 = v150 + (__ROL4__(v148, 10) ^ __ROR4__(v148, 2) ^ __ROR4__(v148, 13)) + (v148 & v141 | v138 & (v148 | v141));
      v153 = v260
           + v145
           + ((v247 >> 3) ^ __ROR4__(v247, 7) ^ __ROL4__(v247, 14))
           + ((v143 >> 10) ^ __ROL4__(v143, 15) ^ __ROL4__(v143, 13));
      v248 = v153;
      v154 = (v140 ^ v151 & (v147 ^ v140))
           + v137
           + v153
           - 1564481375
           + (__ROR4__(v151, 6) ^ __ROR4__(v151, 11) ^ __ROL4__(v151, 7));
      v155 = v154 + v138;
      v156 = v154 + (__ROL4__(v152, 10) ^ __ROR4__(v152, 2) ^ __ROR4__(v152, 13)) + (v152 & v148 | v141 & (v152 | v148));
      v157 = ((v236 >> 10) ^ __ROL4__(v236, 15) ^ __ROL4__(v236, 13))
           + v271
           + v149
           + ((v249 >> 3) ^ __ROR4__(v249, 7) ^ __ROL4__(v249, 14));
      v238 = v157;
      v158 = (v147 ^ v155 & (v151 ^ v147))
           + v140
           + v157
           - 1474664885
           + (__ROR4__(v155, 6) ^ __ROR4__(v155, 11) ^ __ROL4__(v155, 7));
      v159 = v158 + v141;
      v160 = v158 + (__ROL4__(v156, 10) ^ __ROR4__(v156, 2) ^ __ROR4__(v156, 13)) + (v156 & v152 | v148 & (v156 | v152));
      v161 = ((v153 >> 10) ^ __ROL4__(v153, 15) ^ __ROL4__(v153, 13))
           + v272
           + v249
           + ((v251 >> 3) ^ __ROR4__(v251, 7) ^ __ROL4__(v251, 14));
      v162 = v161;
      v250 = v161;
      v163 = (v151 ^ v159 & (v155 ^ v151))
           + v147
           + v161
           - 1035236496
           + (__ROR4__(v159, 6) ^ __ROR4__(v159, 11) ^ __ROL4__(v159, 7));
      v164 = v148 + v163;
      v165 = v163 + (__ROL4__(v160, 10) ^ __ROR4__(v160, 2) ^ __ROR4__(v160, 13)) + (v160 & v156 | v152 & (v160 | v156));
      v240 = ((v157 >> 10) ^ __ROL4__(v157, 15) ^ __ROL4__(v157, 13))
           + v262
           + v251
           + ((v253 >> 3) ^ __ROR4__(v253, 7) ^ __ROL4__(v253, 14));
      v166 = (v155 ^ v164 & (v159 ^ v155))
           + v151
           + v240
           - 949202525
           + (__ROR4__(v164, 6) ^ __ROR4__(v164, 11) ^ __ROL4__(v164, 7));
      v167 = v152 + v166;
      v168 = v166 + (__ROL4__(v165, 10) ^ __ROR4__(v165, 2) ^ __ROR4__(v165, 13)) + (v165 & v160 | v156 & (v165 | v160));
      v243 = v241
           + v253
           + ((v255 >> 3) ^ __ROR4__(v255, 7) ^ __ROL4__(v255, 14))
           + ((v162 >> 10) ^ __ROL4__(v162, 15) ^ __ROL4__(v162, 13));
      v169 = (v159 ^ v167 & (v164 ^ v159))
           + v155
           + v243
           - 778901479
           + (__ROR4__(v167, 6) ^ __ROR4__(v167, 11) ^ __ROL4__(v167, 7));
      v170 = v156 + v169;
      v171 = v169 + (__ROL4__(v168, 10) ^ __ROR4__(v168, 2) ^ __ROR4__(v168, 13)) + (v168 & v165 | v160 & (v168 | v165));
      v172 = ((v240 >> 10) ^ __ROL4__(v240, 15) ^ __ROL4__(v240, 13))
           + v143
           + v255
           + ((v257 >> 3) ^ __ROR4__(v257, 7) ^ __ROL4__(v257, 14));
      v252 = v172;
      v173 = (v164 ^ (v156 + v169) & (v167 ^ v164))
           + v159
           + v172
           - 694614492
           + (__ROR4__(v156 + v169, 6) ^ __ROR4__(v156 + v169, 11) ^ __ROL4__(v156 + v169, 7));
      v174 = v160 + v173;
      v175 = v173 + (__ROL4__(v171, 10) ^ __ROR4__(v171, 2) ^ __ROR4__(v171, 13)) + (v171 & v168 | v165 & (v171 | v168));
      v254 = ((v243 >> 10) ^ __ROL4__(v243, 15) ^ __ROL4__(v243, 13))
           + v236
           + v257
           + ((v259 >> 3) ^ __ROR4__(v259, 7) ^ __ROL4__(v259, 14));
      v176 = (v167 ^ v174 & (v170 ^ v167))
           + v164
           + v254
           - 200395387
           + (__ROR4__(v174, 6) ^ __ROR4__(v174, 11) ^ __ROL4__(v174, 7));
      v177 = v165 + v176;
      v178 = v176 + (__ROL4__(v175, 10) ^ __ROR4__(v175, 2) ^ __ROR4__(v175, 13)) + (v175 & v171 | v168 & (v175 | v171));
      v179 = v248
           + v259
           + ((v270 >> 3) ^ __ROR4__(v270, 7) ^ __ROL4__(v270, 14))
           + ((v172 >> 10) ^ __ROL4__(v172, 15) ^ __ROL4__(v172, 13));
      v258 = v179;
      v180 = (v170 ^ v177 & (v174 ^ v170))
           + v167
           + v179
           + 275423344
           + (__ROR4__(v177, 6) ^ __ROR4__(v177, 11) ^ __ROL4__(v177, 7));
      v181 = v180 + v168;
      v182 = v180 + (__ROL4__(v178, 10) ^ __ROR4__(v178, 2) ^ __ROR4__(v178, 13)) + (v178 & v175 | v171 & (v178 | v175));
      v183 = v238
           + v270
           + ((v260 >> 3) ^ __ROR4__(v260, 7) ^ __ROL4__(v260, 14))
           + ((v254 >> 10) ^ __ROL4__(v254, 15) ^ __ROL4__(v254, 13));
      v256 = v183;
      v276 = v183;
      v184 = (v174 ^ v181 & (v177 ^ v174))
           + v170
           + v183
           + 430227734
           + (__ROR4__(v181, 6) ^ __ROR4__(v181, 11) ^ __ROL4__(v181, 7));
      v185 = v184 + v171;
      v186 = v184 + (__ROL4__(v182, 10) ^ __ROR4__(v182, 2) ^ __ROR4__(v182, 13)) + (v182 & v178 | v175 & (v182 | v178));
      v187 = v250
           + v260
           + ((v271 >> 3) ^ __ROR4__(v271, 7) ^ __ROL4__(v271, 14))
           + ((v258 >> 10) ^ __ROL4__(v258, 15) ^ __ROL4__(v258, 13));
      v277 = v187;
      v188 = (v177 ^ v185 & (v181 ^ v177))
           + v174
           + v187
           + 506948616
           + (__ROR4__(v185, 6) ^ __ROR4__(v185, 11) ^ __ROL4__(v185, 7));
      v189 = v188 + v175;
      v190 = v188 + (__ROL4__(v186, 10) ^ __ROR4__(v186, 2) ^ __ROR4__(v186, 13)) + (v186 & v182 | v178 & (v186 | v182));
      v191 = v240
           + v271
           + ((v272 >> 3) ^ __ROR4__(v272, 7) ^ __ROL4__(v272, 14))
           + ((v256 >> 10) ^ __ROL4__(v256, 15) ^ __ROL4__(v256, 13));
      v278 = v191;
      v192 = v177
           + v191
           + 659060556
           + (v181 ^ v189 & (v185 ^ v181))
           + (__ROR4__(v189, 6) ^ __ROR4__(v189, 11) ^ __ROL4__(v189, 7));
      v193 = v192 + v178;
      v194 = v192 + (__ROL4__(v190, 10) ^ __ROR4__(v190, 2) ^ __ROR4__(v190, 13)) + (v190 & v186 | v182 & (v190 | v186));
      v279 = v243
           + v272
           + ((v262 >> 3) ^ __ROR4__(v262, 7) ^ __ROL4__(v262, 14))
           + ((v187 >> 10) ^ __ROL4__(v187, 15) ^ __ROL4__(v187, 13));
      v195 = v181
           + v279
           + 883997877
           + (v185 ^ v193 & (v189 ^ v185))
           + (__ROR4__(v193, 6) ^ __ROR4__(v193, 11) ^ __ROL4__(v193, 7));
      v196 = v195 + v182;
      v197 = v195 + (__ROL4__(v194, 10) ^ __ROR4__(v194, 2) ^ __ROR4__(v194, 13)) + (v194 & v190 | v186 & (v194 | v190));
      v280 = v252
           + v262
           + ((v241 >> 3) ^ __ROR4__(v241, 7) ^ __ROL4__(v241, 14))
           + ((v191 >> 10) ^ __ROL4__(v191, 15) ^ __ROL4__(v191, 13));
      v198 = (v189 ^ v196 & (v193 ^ v189))
           + v185
           + v280
           + 958139571
           + (__ROR4__(v196, 6) ^ __ROR4__(v196, 11) ^ __ROL4__(v196, 7));
      v199 = v198 + v186;
      v200 = v198 + (__ROL4__(v197, 10) ^ __ROR4__(v197, 2) ^ __ROR4__(v197, 13)) + (v197 & v194 | v190 & (v197 | v194));
      v281 = v254
           + v241
           + ((v245 >> 3) ^ __ROR4__(v245, 7) ^ __ROL4__(v245, 14))
           + ((v279 >> 10) ^ __ROL4__(v279, 15) ^ __ROL4__(v279, 13));
      v201 = (v193 ^ v199 & (v196 ^ v193))
           + v189
           + v281
           + 1322822218
           + (__ROR4__(v199, 6) ^ __ROR4__(v199, 11) ^ __ROL4__(v199, 7));
      v202 = v201 + v190;
      v203 = v201 + (__ROL4__(v200, 10) ^ __ROR4__(v200, 2) ^ __ROR4__(v200, 13)) + (v200 & v197 | v194 & (v200 | v197));
      v204 = ((v280 >> 10) ^ __ROL4__(v280, 15) ^ __ROL4__(v280, 13))
           + v258
           + v245
           + ((v236 >> 3) ^ __ROR4__(v236, 7) ^ __ROL4__(v236, 14));
      v282 = v204;
      v246 = v204;
      v205 = (v196 ^ v202 & (v199 ^ v196))
           + v193
           + v204
           + 1537002063
           + (__ROR4__(v202, 6) ^ __ROR4__(v202, 11) ^ __ROL4__(v202, 7));
      v206 = v205 + v194;
      v207 = v205 + (__ROL4__(v203, 10) ^ __ROR4__(v203, 2) ^ __ROR4__(v203, 13)) + (v203 & v200 | v197 & (v203 | v200));
      v283 = v256
           + v236
           + ((v248 >> 3) ^ __ROR4__(v248, 7) ^ __ROL4__(v248, 14))
           + ((v281 >> 10) ^ __ROL4__(v281, 15) ^ __ROL4__(v281, 13));
      v208 = (v199 ^ v206 & (v202 ^ v199))
           + v196
           + v283
           + 1747873779
           + (__ROR4__(v206, 6) ^ __ROR4__(v206, 11) ^ __ROL4__(v206, 7));
      v209 = v208 + v197;
      v210 = v208 + (__ROL4__(v207, 10) ^ __ROR4__(v207, 2) ^ __ROR4__(v207, 13)) + (v207 & v203 | v200 & (v207 | v203));
      v284 = ((v246 >> 10) ^ __ROL4__(v246, 15) ^ __ROL4__(v246, 13))
           + v248
           + ((v238 >> 3) ^ __ROR4__(v238, 7) ^ __ROL4__(v238, 14))
           + v187;
      v211 = (v202 ^ v209 & (v206 ^ v202))
           + v199
           + v284
           + 1955562222
           + (__ROR4__(v209, 6) ^ __ROR4__(v209, 11) ^ __ROL4__(v209, 7));
      v212 = v211 + v200;
      v213 = v211 + (__ROL4__(v210, 10) ^ __ROR4__(v210, 2) ^ __ROR4__(v210, 13)) + (v210 & v207 | v203 & (v210 | v207));
      v214 = ((v283 >> 10) ^ __ROL4__(v283, 15) ^ __ROL4__(v283, 13))
           + v238
           + ((v250 >> 3) ^ __ROR4__(v250, 7) ^ __ROL4__(v250, 14))
           + v191;
      v285 = v214;
      v215 = (v206 ^ v212 & (v209 ^ v206))
           + v202
           + v214
           + 2024104815
           + (__ROR4__(v212, 6) ^ __ROR4__(v212, 11) ^ __ROL4__(v212, 7));
      v216 = v215 + v203;
      v217 = v215 + (__ROL4__(v213, 10) ^ __ROR4__(v213, 2) ^ __ROR4__(v213, 13)) + (v213 & v210 | v207 & (v213 | v210));
      v286 = ((v284 >> 10) ^ __ROL4__(v284, 15) ^ __ROL4__(v284, 13))
           + v250
           + ((v240 >> 3) ^ __ROR4__(v240, 7) ^ __ROL4__(v240, 14))
           + v279;
      v218 = (v209 ^ v216 & (v212 ^ v209))
           + v206
           + v286
           - 2067236844
           + (__ROL4__(v216, 7) ^ __ROR4__(v216, 6) ^ __ROR4__(v216, 11));
      v219 = v218 + v207;
      v220 = (__ROL4__(v217, 10) ^ __ROR4__(v217, 2) ^ __ROR4__(v217, 13)) + (v217 & v213 | v210 & (v217 | v213)) + v218;
      v287 = (__ROL4__(v214, 15) ^ __ROL4__(v214, 13) ^ (v214 >> 10))
           + v240
           + ((v243 >> 3) ^ __ROR4__(v243, 7) ^ __ROL4__(v243, 14))
           + v280;
      v221 = (v212 ^ v219 & (v216 ^ v212))
           + v209
           + v287
           - 1933114872
           + (__ROL4__(v219, 7) ^ __ROR4__(v219, 6) ^ __ROR4__(v219, 11));
      v222 = v221 + v210;
      v223 = (__ROL4__(v220, 10) ^ __ROR4__(v220, 2) ^ __ROR4__(v220, 13)) + (v220 & v217 | v213 & (v220 | v217)) + v221;
      v288 = (__ROL4__(v286, 15) ^ __ROL4__(v286, 13) ^ (v286 >> 10))
           + v281
           + ((v252 >> 3) ^ __ROR4__(v252, 7) ^ __ROL4__(v252, 14))
           + v243;
      v224 = (v216 ^ v222 & (v219 ^ v216))
           + v212
           + v288
           - 1866530822
           + (__ROL4__(v222, 7) ^ __ROR4__(v222, 6) ^ __ROR4__(v222, 11));
      v225 = v224 + v213;
      v226 = (__ROL4__(v223, 10) ^ __ROR4__(v223, 2) ^ __ROR4__(v223, 13)) + (v223 & v220 | v217 & (v223 | v220)) + v224;
      v289 = (__ROL4__(v287, 15) ^ __ROL4__(v287, 13) ^ (v287 >> 10))
           + v246
           + ((v254 >> 3) ^ __ROR4__(v254, 7) ^ __ROL4__(v254, 14))
           + v252;
      v227 = (v219 ^ v225 & (v222 ^ v219))
           + v216
           + v289
           - 1538233109
           + (__ROL4__(v225, 7) ^ __ROR4__(v225, 6) ^ __ROR4__(v225, 11));
      v228 = v227 + v217;
      v229 = (__ROL4__(v226, 10) ^ __ROR4__(v226, 2) ^ __ROR4__(v226, 13)) + (v226 & v223 | v220 & (v226 | v223)) + v227;
      v290 = v283
           + v254
           + ((v258 >> 3) ^ __ROR4__(v258, 7) ^ __ROL4__(v258, 14))
           + (__ROL4__(v288, 15) ^ __ROL4__(v288, 13) ^ (v288 >> 10));
      v230 = (v222 ^ v228 & (v225 ^ v222))
           + v219
           + v290
           - 1090935817
           + (__ROL4__(v228, 7) ^ __ROR4__(v228, 6) ^ __ROR4__(v228, 11));
      v231 = v230 + v220;
      v232 = (__ROL4__(v229, 10) ^ __ROR4__(v229, 2) ^ __ROR4__(v229, 13)) + (v229 & v226 | v223 & (v229 | v226)) + v230;
      v263 += v232;
      v291 = v284
           + v258
           + ((v256 >> 3) ^ __ROR4__(v256, 7) ^ __ROL4__(v256, 14))
           + (__ROL4__(v289, 15) ^ __ROL4__(v289, 13) ^ (v289 >> 10));
      v265 += v226;
      v233 = v222 + v291 - 965641998 + (v225 ^ v231 & (v228 ^ v225));
      v264 += v229;
      v4 = v264;
      v267 += v231;
      v7 = v267;
      v268 += v228;
      v10 = v268;
      v234 = v233 + (__ROL4__(v231, 7) ^ __ROR4__(v231, 6) ^ __ROR4__(v231, 11));
      v266 += v234 + v223;
      v11 = v234
          + v273
          + (v232 & v229 | v226 & (v232 | v229))
          + (__ROL4__(v232, 10) ^ __ROR4__(v232, 2) ^ __ROR4__(v232, 13));
      *v275 = v11;
      v275[1] = v263;
      result = v263;
      v275[2] = v264;
      v275[3] = v265;
      v275[5] = v267;
      v5 = v265;
      v275[4] = v266;
      v273 = v11;
      v275[6] = v268;
      v269 += v225;
      v12 = v269;
      v6 = v266;
      v275[7] = v269;
    }
    while ( v261 < v274 );
  }
  return result;
}

__int64 __fastcall sub_405990(__int64 a1)
{
  unsigned __int64 v1; // rsi
  int v2; // edx
  __int64 v3; // rbp
  unsigned int v4; // ecx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 36);
  v3 = (-(__int64)(v1 < 0x38) & 0xFFFFFFFFFFFFFFC0LL) + 128;
  v4 = v1 + *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v4;
  if ( v4 < v1 )
    *(_DWORD *)(a1 + 36) = ++v2;
  *(_DWORD *)(a1 + 4 * ((-(__int64)(v1 < 0x38) & 0xFFFFFFFFFFFFFFF0LL) + 30) + 48) = _byteswap_ulong((v4 >> 29) | (8 * v2));
  *(_DWORD *)(a1 + 4 * ((-(__int64)(v1 < 0x38) & 0xFFFFFFFFFFFFFFF0LL) + 31) + 48) = ((8 * v4) >> 8) & 0xFF00 | (v4 << 27) | ((8 * v4) >> 24) | (v4 << 11) & 0xFF0000;
  memcpy((void *)(a1 + 48 + v1), &unk_40AB80, v3 - v1 - 8);
  return sub_403200(a1 + 48, v3, (unsigned int *)a1);
}

__int64 __fastcall sub_405A60(__int64 a1, __int64 a2)
{
  sub_405990(a1);
  return sub_4031C0(a1, a2);
}

__int64 __fastcall sub_405A90(__int64 a1, __int64 a2)
{
  sub_405990(a1);
  return sub_4031E0(a1, a2);
}

void __fastcall sub_405AC0(void *src, size_t n, __m128i *a3)
{
  size_t v3; // r13
  __m128i *v4; // r12
  const __m128i *v5; // rbx
  __int64 v6; // rbp
  __m128i *v7; // rbp
  const __m128i *v8; // r14
  __m128i v9; // xmm0
  __int64 v10; // rax
  _QWORD *v11; // rsi
  size_t v12; // r13
  size_t v13; // rbp
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r15
  __int64 v16; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  signed __int64 v19; // r14
  unsigned int v20; // edx
  unsigned int v21; // ecx
  __int64 v22; // rsi
  unsigned __int64 v23; // rbp
  __int64 *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  unsigned int v27; // edx
  unsigned int v28; // ecx
  __int64 v29; // rsi

  v3 = n;
  v4 = a3;
  v5 = (const __m128i *)src;
  v6 = a3[2].m128i_i64[1];
  if ( v6 )
  {
    v15 = (unsigned __int64)&a3[3];
    v16 = 128 - v6;
    if ( 128 - v6 > n )
      v16 = n;
    memcpy(&a3[3].m128i_i8[v6], src, v16);
    v17 = v16 + v4[2].m128i_i64[1];
    v4[2].m128i_i64[1] = v17;
    if ( v17 > 0x40 )
    {
      sub_403200(v15, v17 & 0xFFFFFFFFFFFFFFC0LL, (unsigned int *)v4);
      v23 = (v16 + v6) & 0xFFFFFFFFFFFFFFC0LL;
      v24 = (__int64 *)(v15 + v23);
      v25 = v4[2].m128i_i64[1] & 0x3F;
      v4[2].m128i_i64[1] = v25;
      if ( (unsigned int)v25 >= 8 )
      {
        v26 = (unsigned __int64)&v4[3].m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
        v4[3].m128i_i64[0] = *v24;
        *(_QWORD *)(v15 + (unsigned int)v25 - 8) = *(__int64 *)((char *)v24 + (unsigned int)v25 - 8);
        if ( (((_DWORD)v25 + (_DWORD)v15 - (_DWORD)v26) & 0xFFFFFFF8) >= 8 )
        {
          v27 = (v25 + v15 - v26) & 0xFFFFFFF8;
          v28 = 0;
          do
          {
            v29 = v28;
            v28 += 8;
            *(_QWORD *)(v26 + v29) = *(_QWORD *)(v23 + v26 + v29);
          }
          while ( v28 < v27 );
        }
      }
      else if ( v25 & 4 )
      {
        v4[3].m128i_i32[0] = *(_DWORD *)v24;
        *(_DWORD *)(v15 + (unsigned int)v25 - 4) = *(_DWORD *)((char *)v24 + (unsigned int)v25 - 4);
      }
      else if ( (_DWORD)v25 )
      {
        v4[3].m128i_i8[0] = *(_BYTE *)v24;
        if ( v25 & 2 )
          *(_WORD *)(v15 + (unsigned int)v25 - 2) = *(_WORD *)((char *)v24 + (unsigned int)v25 - 2);
      }
    }
    v5 = (const __m128i *)((char *)v5 + v16);
    v3 -= v16;
  }
  if ( v3 > 0x3F )
  {
    if ( (unsigned __int8)v5 & 3 )
    {
      v7 = v4 + 3;
      if ( v3 == 64 )
      {
        v8 = v5;
      }
      else
      {
        v8 = &v5[4 * ((v3 - 65) >> 6) + 4];
        do
        {
          v9 = _mm_loadu_si128(v5);
          v5 += 4;
          *v7 = v9;
          v4[4] = _mm_loadu_si128(v5 - 3);
          v4[5] = _mm_loadu_si128(v5 - 2);
          v4[6] = _mm_loadu_si128(v5 - 1);
          sub_403200((unsigned __int64)&v4[3], 64LL, (unsigned int *)v4);
        }
        while ( v5 != v8 );
        v3 = v3 - ((v3 - 65) >> 6 << 6) - 64;
      }
      goto LABEL_8;
    }
    v13 = v3;
    v14 = (unsigned __int64)v5;
    v3 &= 0x3Fu;
    v5 = (const __m128i *)((char *)v5 + (v13 & 0xFFFFFFFFFFFFFFC0LL));
    sub_403200(v14, v13 & 0xFFFFFFFFFFFFFFC0LL, (unsigned int *)v4);
  }
  if ( !v3 )
    return;
  v7 = v4 + 3;
  v8 = v5;
LABEL_8:
  v10 = v4[2].m128i_i64[1];
  v11 = (__int64 *)((char *)v7->m128i_i64 + v10);
  if ( (unsigned int)v3 >= 8 )
  {
    v18 = (unsigned __int64)(v11 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v11 = v8->m128i_i64[0];
    *(_QWORD *)((char *)v11 + (unsigned int)v3 - 8) = *(__int64 *)((char *)&v8->m128i_i64[-1] + (unsigned int)v3);
    v19 = (char *)v8 - ((char *)v11 - v18);
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
    *(_DWORD *)((char *)v11 + (unsigned int)v3 - 4) = *(_DWORD *)((char *)v8->m128i_i64 + (unsigned int)v3 - 4);
  }
  else if ( (_DWORD)v3 )
  {
    *(_BYTE *)v11 = v8->m128i_i64[0];
    if ( v3 & 2 )
      *(_WORD *)((char *)v11 + (unsigned int)v3 - 2) = *(_WORD *)((char *)v8->m128i_i64 + (unsigned int)v3 - 2);
  }
  v12 = v10 + v3;
  if ( v12 > 0x3F )
  {
    v12 -= 64LL;
    sub_403200((unsigned __int64)v7, 64LL, (unsigned int *)v4);
    memcpy(v7, &v4[7], v12);
  }
  v4[2].m128i_i64[1] = v12;
}

__int64 __fastcall sub_406020(FILE *stream, __int64 a2)
{
  char *v2; // rax
  char *v3; // r12
  size_t v4; // rbx
  int v5; // edx
  size_t v6; // rax
  __int64 v8; // [rsp+0h] [rbp-D8h]
  __int64 v9; // [rsp+8h] [rbp-D0h]
  __int64 v10; // [rsp+10h] [rbp-C8h]
  __int64 v11; // [rsp+18h] [rbp-C0h]
  __int64 v12; // [rsp+20h] [rbp-B8h]
  __int64 v13; // [rsp+28h] [rbp-B0h]

  v2 = (char *)malloc(0x8048uLL);
  if ( !v2 )
    return 1LL;
  v12 = 0LL;
  v3 = v2;
  v8 = 3926247204440088280LL;
  v9 = -644479594506691305LL;
  v10 = 7518782744944446257LL;
  v11 = -4685344894838272089LL;
  v13 = 0LL;
LABEL_3:
  v4 = 0LL;
  while ( 1 )
  {
    v6 = fread_unlocked(&v3[v4], 1uLL, 0x8000 - v4, stream);
    v4 += v6;
    if ( v4 == 0x8000 )
    {
      sub_403200((unsigned __int64)v3, 0x8000LL, (unsigned int *)&v8);
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
    sub_405AC0(v3, v4, (__m128i *)&v8);
  sub_405990((__int64)&v8);
  sub_4031E0((__int64)&v8, a2);
  free(v3);
  return 0LL;
}

void __fastcall sub_406190(FILE *a1, int a2)
{
  int v2; // eax

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

FILE *__fastcall sub_4061C0(const char *a1, const char *a2)
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
      v6 = sub_407EA0(v4);
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
  qword_60E308 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_406300(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_409850();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40AC11;
      if ( !v5 )
        v2 = (char *)&unk_40AC06;
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
    v2 = (char *)&unk_40AC0D;
    if ( !v5 )
      v2 = (char *)&unk_40AC0A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_406400(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_406400((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_406400((__int64)v9, v79, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_406400((__int64)v9, v10, s);
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
          return sub_406400((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_409710((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_406400((__int64)v9, v10, s);
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
      return sub_406400((__int64)v9, v10, s);
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
        a8 = sub_406300("`", v11);
        v47 = sub_406300("'", v11);
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

unsigned __int64 __fastcall sub_406400(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_406400((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_406400((__int64)v9, v79, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
            return sub_406400((__int64)v9, v10, s);
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
              return sub_406400((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_406400((__int64)v9, v10, s);
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
          return sub_406400((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_409710((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_406400((__int64)v9, v10, s);
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
      return sub_406400((__int64)v9, v10, s);
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
        a8 = sub_406300("`", v11);
        v47 = sub_406300("'", v11);
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

_BYTE *__fastcall sub_407630(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60E278;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60E290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_4086A0();
    v9 = 16LL * (a1 + 1);
    if ( off_60E278 == &xmmword_60E280 )
    {
      v7 = (__int128 *)sub_4084B0(0LL, v9);
      off_60E278 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E280);
    }
    else
    {
      off_60E278 = (__int128 *)sub_4084B0(off_60E278, v9);
      v7 = off_60E278;
    }
    memset(&v7[dword_60E290], 0, 16LL * (a1 + 1 - dword_60E290));
    dword_60E290 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_406400(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60E320 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_408450(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_406400(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_407630(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60E278;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60E290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_4086A0();
    v9 = 16LL * (a1 + 1);
    if ( off_60E278 == &xmmword_60E280 )
    {
      v7 = (__int128 *)sub_4084B0(0LL, v9);
      off_60E278 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E280);
    }
    else
    {
      off_60E278 = (__int128 *)sub_4084B0(off_60E278, v9);
      v7 = off_60E278;
    }
    memset(&v7[dword_60E290], 0, 16LL * (a1 + 1 - dword_60E290));
    dword_60E290 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_406400(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60E320 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_408450(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_406400(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_407B50(int a1, int a2, char *a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407B50(int a1, int a2, char *a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407BC0(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_407630(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_407BC0(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_407630(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_407C50(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_60E450;
  v7 = _mm_load_si128((const __m128i *)&xmmword_60E420);
  v8 = _mm_load_si128((const __m128i *)&xmmword_60E430);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_60E440);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_407630(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_407CD0(char *a1)
{
  return sub_407C50(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_407D00(int a1, int a2, char *a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407D00(int a1, int a2, char *a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_407D70(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_60E420);
  v7 = _mm_load_si128((const __m128i *)&xmmword_60E430);
  v8 = _mm_load_si128((const __m128i *)&xmmword_60E440);
  v9 = qword_60E450;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_407630(a1, a4, a5, (__int64)&v6);
}

__int64 __fastcall sub_407EA0(char a1)
{
  return sub_408760(a1);
}

__int64 __fastcall sub_407EB0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_407EB0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_4082B0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_407EB0(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_407EB0(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_408310(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_407EB0(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_407EB0(a1, a2, a3, a4, v15, i);
}

int sub_4083D0()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, aReportBugsTo, 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_409F10);
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_408450(size_t a1)
{
  void *result; // rax

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
        sub_4086A0();
    }
  }
  return result;
}

void *__fastcall sub_408650(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_408450(n);
  return memcpy(v2, src, n);
}

noreturn void  sub_4086A0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_4086E0(FILE *stream)
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
  if ( !(unsigned int)sub_4088A0(stream) )
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

__int64 __fastcall sub_408760(char a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // rax
  int v7; // edi
  int v8; // er12
  int *v9; // rbp

  if ( a2 == 1030 )
  {
    if ( dword_60E458 < 0 )
    {
      v3 = sub_408760(a1);
      if ( v3 >= 0 && dword_60E458 == -1 )
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
        dword_60E458 = 1;
      }
      else
      {
        v3 = sub_408760(a1);
        if ( v3 >= 0 )
        {
          dword_60E458 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v3;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_4088A0(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_4088E0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_4088E0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_408940(__int64 a1, int *a2)
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

__int64 __fastcall sub_408A20(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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

__int64 __fastcall sub_409040(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_408940(a2, a7);
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
        sub_408940((__int64)v11, a7);
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
            return (unsigned int)sub_408A20(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_408A20(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"-");
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
        return (unsigned int)sub_408A20(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_409610(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_60E460 = dword_60E29C;
  dword_60E464 = dword_60E298;
  result = sub_409040(a1, a2, a3, a4, a5, a6, &dword_60E460, a7);
  dword_60E29C = dword_60E460;
  qword_60E4A0 = qword_60E470;
  dword_60E294 = dword_60E468;
  return result;
}

__int64 __fastcall sub_409670(int a1, __int64 a2, char *a3)
{
  return sub_409610(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_409690(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_409610(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_4096B0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409040(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_4096D0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_409610(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_4096F0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409040(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_409710(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_4097F0(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

int __fastcall sub_409790(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  int result; // eax

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

const char *sub_409850()
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
                sub_4086E0(v60);
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
            sub_4086E0(v39);
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

int __fastcall sub_409E30(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_60E208 )
    v1 = (void *)unk_60E208;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409E48(__int64 a1, __int64 a2, __int64 a3)
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
