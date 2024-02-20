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
  const char **v78; // [rsp+0h] [rbp-E8h]
  char *s; // [rsp+8h] [rbp-E0h]
  char v80; // [rsp+13h] [rbp-D5h]
  int v81; // [rsp+14h] [rbp-D4h]
  unsigned __int64 v82; // [rsp+18h] [rbp-D0h]
  __ssize_t v83; // [rsp+20h] [rbp-C8h]
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
  char v101; // [rsp+5Fh] [rbp-89h] BYREF
  char *lineptr; // [rsp+60h] [rbp-88h] BYREF
  size_t n; // [rsp+68h] [rbp-80h] BYREF
  char v104[32]; // [rsp+70h] [rbp-78h] BYREF
  char v105[88]; // [rsp+90h] [rbp-58h] BYREF

  v3 = 0;
  LOBYTE(v4) = 0;
  LODWORD(v5) = -1;
  LODWORD(v6) = a1;
  v7 = (char *)a2;
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
          sub_408310(
            (_DWORD)stdout,
            (unsigned int)"sha224sum",
            (unsigned int)&unk_409F10,
            (_DWORD)off_60E218,
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
          goto LABEL_203;
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
        goto LABEL_203;
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
  if ( byte_60E2DA )
    goto LABEL_70;
  if ( !byte_60E2DC )
  {
    if ( !byte_60E2DB )
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
  if ( !byte_60E2DB )
    goto LABEL_37;
  while ( 1 )
  {
LABEL_39:
    if ( (_DWORD)v5 == -1 )
      LODWORD(v5) = 0;
    v94 = (const char **)&v7[8 * (int)v6];
    v10 = dword_60E29C;
    if ( dword_60E29C == (_DWORD)v6 )
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
            fwrite_unlocked("SHA224", 1uLL, 6uLL, stdout);
            fwrite_unlocked(" (", 1uLL, 2uLL, stdout);
            sub_402A40(s, v57);
            fwrite_unlocked(") = ", 1uLL, 4uLL, stdout);
            if ( !((unsigned __int64)qword_60E2E0 >> 1) )
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
          if ( !((unsigned __int64)qword_60E2E0 >> 1) )
            goto LABEL_156;
        }
        else
        {
          v57 = 0;
          if ( v98 )
            goto LABEL_196;
          if ( !((unsigned __int64)qword_60E2E0 >> 1) )
            goto LABEL_156;
        }
LABEL_150:
        v6 = 0LL;
        do
        {
          v58 = (unsigned __int8)v104[v6++];
          __printf_chk(1LL, "%02x", v58);
        }
        while ( (unsigned __int64)qword_60E2E0 >> 1 > v6 );
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
        v6 = sub_4061C0(s, 4235053LL);
        if ( !v6 )
          goto LABEL_140;
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
LABEL_65:
            ++v5;
            if ( byte_60E2DB )
            {
              v45 = sub_407D00(0LL, 3LL, s, v17, v15);
              v46 = dcgettext(0LL, "%s: %lu: improperly formatted %s checksum line", 5);
              error(0, 0, v46, v45, v13, "SHA224");
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
        if ( v15 - v18 < qword_60E2E8 + (unsigned __int64)(*v4 == 92) )
          goto LABEL_65;
        v27 = qword_60E2E0 + v18;
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
            goto LABEL_65;
          dword_60E210 = 1;
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
        if ( !byte_60E2DC )
          v36 = strchr(v31, 10) != 0LL;
        v37 = sub_402AF0(v31, v105, &v101);
        v15 = v37;
        if ( !(_BYTE)v37 )
        {
          ++v82;
          if ( byte_60E2DC )
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
        if ( byte_60E2DA && v101 )
          goto LABEL_96;
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
              goto LABEL_179;
            }
          }
          ++v95;
          if ( byte_60E2DC )
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
        v97 = byte_60E2DC;
        if ( byte_60E2DC )
          goto LABEL_96;
        v97 = byte_60E2D9;
        if ( byte_60E2D9 )
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
        if ( !byte_60E2D9 )
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
          v7 = (char *)sub_407D00(0LL, 3LL, s, v17, v15);
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
        v68 = sub_407D00(0LL, 3LL, s, v41, v42);
        v69 = dcgettext(0LL, "%s: read error", 5);
        error(0, 0, v69, v68);
        v44 = 0;
        goto LABEL_112;
      }
      if ( !v81 || !(unsigned int)sub_4086E0((FILE *)v6) )
      {
        if ( v3 )
        {
          if ( byte_60E2DC )
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
          if ( !byte_60E2DA )
          {
LABEL_143:
            if ( v97 )
              goto LABEL_109;
          }
          else if ( v97 )
          {
LABEL_109:
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
        goto LABEL_112;
      }
LABEL_140:
      v54 = (const char *)sub_407D00(0LL, 3LL, s, v41, v42);
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
    if ( !byte_60E2F0 || (unsigned int)sub_4086E0(stdin) != -1 )
      return (unsigned __int8)v96 ^ 1u;
    v7 = dcgettext(0LL, "standard input", 5);
    v71 = __errno_location();
    error(1, *v71, v7);
LABEL_200:
    if ( byte_60E2D9 == 1 )
    {
      v9 = "the --quiet option is meaningful only when verifying checksums";
      if ( !(_BYTE)v4 )
        goto LABEL_202;
    }
LABEL_37:
    if ( byte_60E2D8 )
    {
      v9 = "the --strict option is meaningful only when verifying checksums";
      if ( !(_BYTE)v4 )
        goto LABEL_202;
    }
  }
}

// positive sp value has been detected, the output may be wrong!
noreturn void __fastcall  start(__int64 a1, __int64 a2, void (*a3)(void))
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

  if ( !byte_60E2C8 )
  {
    while ( qword_60E2D0 < (unsigned __int64)(&qword_60DE48 - qword_60DE40 - 1) )
      ((void (*)(void))qword_60DE40[++qword_60E2D0])();
    result = sub_40289B();
    byte_60E2C8 = 1;
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

  v2 = qword_60E2E0;
  if ( !qword_60E2E0 )
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
        fwrite_unlocked(&unk_409E84, 1uLL, 2uLL, stdout);
      }
      else if ( (_BYTE)v4 == 92 )
      {
        fwrite_unlocked(&unk_409E87, 1uLL, 2uLL, stdout);
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
    byte_60E2F0 = 1;
    sub_406190(stdin, 2LL);
    if ( !(unsigned int)sub_406020(v3) )
      return 1;
LABEL_9:
    v6 = 0;
    v14 = (const char *)sub_407D00(0LL, 3LL, a1, v4, v5);
    v15 = __errno_location();
    error(0, *v15, "%s", v14);
    if ( stdin != v3 )
      sub_4086E0(v3);
    return v6;
  }
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
        v12 = (const char *)sub_407D00(0LL, 3LL, a1, v10, v11);
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
    *a3 = 1;
  }
  else
  {
    v6 = 0;
    v20 = (const char *)sub_407D00(0LL, 3LL, a1, v17, v18);
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

  v1 = qword_60E308;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\nPrint or check %s (%d-bit) checksums.\n", 5);
  __printf_chk(1LL, v3, v1, "SHA224", 224LL);
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
  while ( *v20 && strcmp("sha224sum", (const char *)*v20) );
  v21 = (char *)v20[1];
  if ( v21 )
  {
    v22 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v22, &unk_409F10, "https://www.gnu.org/software/coreutils/");
    v23 = setlocale(5, 0LL);
    if ( !v23 || !strncmp(v23, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v27 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v27, &unk_409F10, "https://www.gnu.org/software/coreutils/");
    v28 = setlocale(5, 0LL);
    if ( !v28 || !strncmp(v28, "en_", 3uLL) )
    {
      v21 = "sha224sum";
      v29 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v24 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v29, "https://www.gnu.org/software/coreutils/", "sha224sum");
LABEL_12:
      v26 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v26, v21, v24);
LABEL_3:
      exit(status);
    }
    v21 = "sha224sum";
  }
  v30 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v30, "sha224sum");
LABEL_10:
  v24 = "Multi-call invocation" + 10;
  v25 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v25, "https://www.gnu.org/software/coreutils/", "sha224sum");
  if ( v21 != "sha224sum" )
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
        v5 = (const char *)sub_407CD0();
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

__int64 __fastcall sub_403200(unsigned __int64 a1, __int64 a2, int *a3)
{
  int v4; // r13d
  int v5; // r12d
  int v6; // r10d
  int v7; // ebp
  bool v8; // cf
  int v9; // ecx
  int v10; // r9d
  int v11; // edx
  int v12; // r8d
  __int64 result; // rax
  __int64 i; // rcx
  int v15; // ecx
  int v16; // r14d
  int v17; // esi
  int v18; // edi
  int v19; // r9d
  int v20; // r8d
  int v21; // edi
  int v22; // ecx
  int v23; // ebx
  int v24; // eax
  int v25; // edx
  int v26; // edi
  int v27; // eax
  int v28; // esi
  int v29; // r11d
  int v30; // r9d
  int v31; // r8d
  int v32; // eax
  int v33; // r9d
  int v34; // ebx
  int v35; // ecx
  int v36; // r9d
  int v37; // edi
  int v38; // edx
  int v39; // esi
  int v40; // r11d
  int v41; // r10d
  int v42; // esi
  int v43; // eax
  int v44; // r9d
  int v45; // esi
  int v46; // ecx
  int v47; // r8d
  int v48; // esi
  int v49; // edx
  int v50; // ebx
  int v51; // edi
  int v52; // r10d
  int v53; // esi
  int v54; // eax
  int v55; // r9d
  int v56; // edi
  int v57; // eax
  int v58; // r8d
  int v59; // r14d
  int v60; // eax
  int v61; // ebx
  int v62; // ecx
  unsigned int v63; // r11d
  int v64; // eax
  int v65; // esi
  int v66; // edx
  unsigned int v67; // r10d
  int v68; // eax
  int v69; // edi
  int v70; // r13d
  unsigned int v71; // r9d
  int v72; // eax
  int v73; // r14d
  int v74; // r12d
  unsigned int v75; // r8d
  int v76; // eax
  int v77; // ecx
  int v78; // ebp
  int v79; // eax
  int v80; // edx
  int v81; // ebx
  int v82; // esi
  int v83; // r13d
  int v84; // eax
  int v85; // esi
  int v86; // r12d
  int v87; // edi
  int v88; // ecx
  int v89; // ebp
  int v90; // esi
  int v91; // edx
  int v92; // ebx
  int v93; // ecx
  int v94; // r14d
  int v95; // r13d
  int v96; // edx
  int v97; // r14d
  int v98; // r12d
  int v99; // eax
  int v100; // r14d
  int v101; // ebp
  int v102; // edi
  int v103; // r14d
  int v104; // ebx
  int v105; // esi
  int v106; // r14d
  int v107; // r13d
  int v108; // ecx
  int v109; // r12d
  int v110; // r14d
  int v111; // edx
  int v112; // ebp
  int v113; // edi
  int v114; // eax
  int v115; // ebx
  int v116; // esi
  int v117; // r11d
  int v118; // ebx
  int v119; // ecx
  int v120; // r10d
  int v121; // ebx
  int v122; // ebp
  int v123; // r9d
  int v124; // edx
  int v125; // eax
  int v126; // r8d
  unsigned int v127; // r13d
  int v128; // edx
  int v129; // r11d
  int v130; // ebx
  int v131; // edx
  int v132; // r10d
  int v133; // r15d
  unsigned int v134; // r12d
  int v135; // edx
  int v136; // r9d
  int v137; // edi
  unsigned int v138; // r14d
  int v139; // eax
  int v140; // r8d
  int v141; // esi
  int v142; // eax
  int v143; // ebx
  int v144; // r11d
  int v145; // eax
  int v146; // r15d
  int v147; // r10d
  int v148; // eax
  int v149; // ebp
  int v150; // r9d
  int v151; // ecx
  int v152; // eax
  int v153; // edx
  int v154; // esi
  int v155; // r8d
  int v156; // ecx
  int v157; // esi
  int v158; // r11d
  int v159; // r13d
  int v160; // edi
  int v161; // esi
  int v162; // r14d
  int v163; // edi
  int v164; // edx
  int v165; // eax
  int v166; // edi
  int v167; // ecx
  int v168; // r10d
  int v169; // edi
  int v170; // r13d
  int v171; // r9d
  int v172; // esi
  int v173; // r14d
  int v174; // r8d
  int v175; // edx
  int v176; // eax
  int v177; // edi
  int v178; // edx
  int v179; // r10d
  int v180; // esi
  int v181; // edx
  int v182; // r9d
  int v183; // ecx
  int v184; // r13d
  int v185; // r8d
  int v186; // edx
  int v187; // r13d
  int v188; // edi
  int v189; // eax
  int v190; // r12d
  int v191; // esi
  int v192; // r10d
  int v193; // r12d
  int v194; // ecx
  int v195; // r9d
  int v196; // r12d
  int v197; // edx
  int v198; // r12d
  int v199; // r8d
  int v200; // eax
  int v201; // r8d
  int v202; // ebx
  int v203; // r10d
  int v204; // ebx
  int v205; // r11d
  int v206; // r9d
  int v207; // r11d
  int v208; // ecx
  int v209; // r12d
  int v210; // ecx
  int v211; // edx
  int v212; // eax
  unsigned int v213; // [rsp+0h] [rbp-F8h]
  unsigned int v214; // [rsp+0h] [rbp-F8h]
  unsigned int v215; // [rsp+4h] [rbp-F4h]
  unsigned int v216; // [rsp+4h] [rbp-F4h]
  unsigned int v217; // [rsp+8h] [rbp-F0h]
  unsigned int v218; // [rsp+8h] [rbp-F0h]
  unsigned int v219; // [rsp+Ch] [rbp-ECh]
  unsigned int v220; // [rsp+10h] [rbp-E8h]
  unsigned int v221; // [rsp+10h] [rbp-E8h]
  unsigned int v222; // [rsp+14h] [rbp-E4h]
  unsigned int v223; // [rsp+18h] [rbp-E0h]
  unsigned int v224; // [rsp+18h] [rbp-E0h]
  unsigned int v225; // [rsp+1Ch] [rbp-DCh]
  unsigned int v226; // [rsp+1Ch] [rbp-DCh]
  unsigned int v227; // [rsp+20h] [rbp-D8h]
  unsigned int v228; // [rsp+20h] [rbp-D8h]
  unsigned int v229; // [rsp+24h] [rbp-D4h]
  unsigned int v230; // [rsp+24h] [rbp-D4h]
  unsigned int v231; // [rsp+28h] [rbp-D0h]
  unsigned int v232; // [rsp+2Ch] [rbp-CCh]
  unsigned int v233; // [rsp+2Ch] [rbp-CCh]
  unsigned int v234; // [rsp+30h] [rbp-C8h]
  unsigned int v235; // [rsp+34h] [rbp-C4h]
  unsigned __int64 v236; // [rsp+38h] [rbp-C0h]
  unsigned int v237; // [rsp+40h] [rbp-B8h]
  unsigned int v238; // [rsp+44h] [rbp-B4h]
  int v239; // [rsp+48h] [rbp-B0h]
  int v240; // [rsp+4Ch] [rbp-ACh]
  int v241; // [rsp+50h] [rbp-A8h]
  int v242; // [rsp+54h] [rbp-A4h]
  int v243; // [rsp+58h] [rbp-A0h]
  int v244; // [rsp+5Ch] [rbp-9Ch]
  unsigned int v245; // [rsp+60h] [rbp-98h]
  unsigned int v246; // [rsp+64h] [rbp-94h]
  unsigned int v247; // [rsp+68h] [rbp-90h]
  int v248; // [rsp+6Ch] [rbp-8Ch]
  unsigned __int64 v249; // [rsp+70h] [rbp-88h]
  unsigned int v251; // [rsp+80h] [rbp-78h]
  unsigned int v252; // [rsp+84h] [rbp-74h]
  unsigned int v253; // [rsp+88h] [rbp-70h]
  unsigned int v254; // [rsp+8Ch] [rbp-6Ch]
  unsigned int v255; // [rsp+90h] [rbp-68h]
  unsigned int v256; // [rsp+94h] [rbp-64h]
  unsigned int v257; // [rsp+98h] [rbp-60h]
  unsigned int v258; // [rsp+9Ch] [rbp-5Ch]
  unsigned int v259; // [rsp+A0h] [rbp-58h]
  unsigned int v260; // [rsp+A4h] [rbp-54h]
  unsigned int v261; // [rsp+A8h] [rbp-50h]
  unsigned int v262; // [rsp+ACh] [rbp-4Ch]
  unsigned int v263; // [rsp+B0h] [rbp-48h]
  unsigned int v264; // [rsp+B4h] [rbp-44h]
  unsigned int v265; // [rsp+B8h] [rbp-40h]
  unsigned int v266; // [rsp+BCh] [rbp-3Ch]

  v4 = a3[2];
  v5 = a3[3];
  v6 = a3[4];
  v7 = a3[5];
  v236 = a1;
  v8 = __CFADD__(a3[8], (_DWORD)a2);
  v9 = a3[8] + a2;
  v10 = a3[6];
  v11 = *a3;
  a3[8] = v9;
  v12 = a3[7];
  v249 = a1 + (a2 & 0xFFFFFFFFFFFFFFFCLL);
  result = (unsigned int)a3[1];
  a3[9] += v8 + HIDWORD(a2);
  if ( a1 < v249 )
  {
    v244 = v12;
    v243 = v10;
    v242 = v7;
    v241 = v6;
    v240 = v5;
    v239 = v4;
    v238 = result;
    v248 = v11;
    do
    {
      for ( i = 0LL; i != 64; i += 4LL )
        *(unsigned int *)((char *)&v251 + i) = _byteswap_ulong(*(_DWORD *)(v236 + i));
      v236 += 64LL;
      v15 = (__ROR4__(v6, 6) ^ __ROR4__(v6, 11) ^ __ROL4__(v6, 7)) + v251 + v12 + 1116352408 + (v10 ^ v6 & (v10 ^ v7));
      v16 = v15 + v5;
      v17 = v15 + (__ROL4__(v11, 10) ^ __ROR4__(v11, 2) ^ __ROR4__(v11, 13)) + (result & v11 | v4 & (result | v11));
      v18 = (v7 ^ (v15 + v5) & (v7 ^ v6))
          + v252
          + v10
          + 1899447441
          + (__ROR4__(v15 + v5, 6) ^ __ROR4__(v15 + v5, 11) ^ __ROL4__(v15 + v5, 7));
      v19 = v18 + v4;
      v20 = v18 + (__ROL4__(v17, 10) ^ __ROR4__(v17, 2) ^ __ROR4__(v17, 13)) + (v11 & v17 | result & (v11 | v17));
      v21 = (v6 ^ (v18 + v4) & (v6 ^ (v15 + v5)))
          + v253
          + v7
          - 1245643825
          + (__ROR4__(v18 + v4, 6) ^ __ROR4__(v18 + v4, 11) ^ __ROL4__(v18 + v4, 7));
      v22 = v21 + result;
      v23 = v21 + (__ROL4__(v20, 10) ^ __ROR4__(v20, 2) ^ __ROR4__(v20, 13)) + (v20 & v17 | v11 & (v20 | v17));
      v24 = (v16 ^ v22 & (v19 ^ v16))
          + v6
          + v254
          - 373957723
          + (__ROR4__(v21 + result, 6) ^ __ROR4__(v21 + result, 11) ^ __ROL4__(v22, 7));
      v25 = v24 + v11;
      v26 = v24 + (__ROL4__(v23, 10) ^ __ROR4__(v23, 2) ^ __ROR4__(v23, 13)) + (v23 & v20 | v17 & (v23 | v20));
      v27 = (v19 ^ v25 & (v22 ^ v19))
          + v255
          + v16
          + 961987163
          + (__ROR4__(v25, 6) ^ __ROR4__(v25, 11) ^ __ROL4__(v25, 7));
      v28 = v27 + v17;
      v29 = v27 + (__ROL4__(v26, 10) ^ __ROR4__(v26, 2) ^ __ROR4__(v26, 13)) + (v26 & v23 | v20 & (v26 | v23));
      v30 = v256
          + v19
          + 1508970993
          + (v22 ^ v28 & (v25 ^ v22))
          + (__ROR4__(v28, 6) ^ __ROR4__(v28, 11) ^ __ROL4__(v28, 7));
      v31 = v30 + v20;
      v32 = v30 + (__ROL4__(v29, 10) ^ __ROR4__(v29, 2) ^ __ROR4__(v29, 13)) + (v29 & v26 | v23 & (v29 | v26));
      v33 = (v25 ^ v31 & (v28 ^ v25))
          + v257
          + v22
          - 1841331548
          + (__ROR4__(v31, 6) ^ __ROR4__(v31, 11) ^ __ROL4__(v31, 7));
      v34 = v33 + v23;
      v35 = v33 + (__ROL4__(v32, 10) ^ __ROR4__(v32, 2) ^ __ROR4__(v32, 13)) + (v32 & v29 | v26 & (v32 | v29));
      v36 = (v28 ^ v34 & (v31 ^ v28))
          + v258
          + v25
          - 1424204075
          + (__ROR4__(v34, 6) ^ __ROR4__(v34, 11) ^ __ROL4__(v34, 7));
      v37 = v36 + v26;
      v38 = v36 + (__ROL4__(v35, 10) ^ __ROR4__(v35, 2) ^ __ROR4__(v35, 13)) + (v35 & v32 | v29 & (v35 | v32));
      v39 = v259
          + v28
          - 670586216
          + (v31 ^ v37 & (v34 ^ v31))
          + (__ROR4__(v37, 6) ^ __ROR4__(v37, 11) ^ __ROL4__(v37, 7));
      v40 = v39 + v29;
      v41 = v39 + (__ROL4__(v38, 10) ^ __ROR4__(v38, 2) ^ __ROR4__(v38, 13)) + (v38 & v35 | v32 & (v38 | v35));
      v42 = (v34 ^ v40 & (v37 ^ v34))
          + v260
          + v31
          + 310598401
          + (__ROR4__(v40, 6) ^ __ROR4__(v40, 11) ^ __ROL4__(v40, 7));
      v43 = v42 + v32;
      v44 = v42 + (__ROL4__(v41, 10) ^ __ROR4__(v41, 2) ^ __ROR4__(v41, 13)) + (v41 & v38 | v35 & (v41 | v38));
      v45 = (v37 ^ v43 & (v40 ^ v37))
          + v261
          + v34
          + 607225278
          + (__ROR4__(v43, 6) ^ __ROR4__(v43, 11) ^ __ROL4__(v43, 7));
      v46 = v45 + v35;
      v47 = v45 + (__ROL4__(v44, 10) ^ __ROR4__(v44, 2) ^ __ROR4__(v44, 13)) + (v44 & v41 | v38 & (v44 | v41));
      v48 = (v40 ^ v46 & (v43 ^ v40))
          + v262
          + v37
          + 1426881987
          + (__ROR4__(v46, 6) ^ __ROR4__(v46, 11) ^ __ROL4__(v46, 7));
      v49 = v48 + v38;
      v50 = v48 + (__ROL4__(v47, 10) ^ __ROR4__(v47, 2) ^ __ROR4__(v47, 13)) + (v47 & v44 | v41 & (v47 | v44));
      v51 = (v43 ^ v49 & (v46 ^ v43))
          + v263
          + v40
          + 1925078388
          + (__ROR4__(v49, 6) ^ __ROR4__(v49, 11) ^ __ROL4__(v49, 7));
      v52 = v51 + v41;
      v53 = v51 + (__ROL4__(v50, 10) ^ __ROR4__(v50, 2) ^ __ROR4__(v50, 13)) + (v50 & v47 | v44 & (v50 | v47));
      v54 = v264
          + v43
          - 2132889090
          + (v46 ^ v52 & (v49 ^ v46))
          + (__ROR4__(v52, 6) ^ __ROR4__(v52, 11) ^ __ROL4__(v52, 7));
      v55 = v54 + v44;
      v56 = v54 + (__ROL4__(v53, 10) ^ __ROR4__(v53, 2) ^ __ROR4__(v53, 13)) + (v53 & v50 | v47 & (v53 | v50));
      v57 = (v49 ^ v55 & (v52 ^ v49))
          + v265
          + v46
          - 1680079193
          + (__ROR4__(v55, 6) ^ __ROR4__(v55, 11) ^ __ROL4__(v55, 7));
      v58 = v57 + v47;
      v59 = v57 + (__ROL4__(v56, 10) ^ __ROR4__(v56, 2) ^ __ROR4__(v56, 13)) + (v56 & v53 | v50 & (v56 | v53));
      v60 = (v52 ^ v58 & (v55 ^ v52))
          + v266
          + v49
          - 1046744716
          + (__ROR4__(v58, 6) ^ __ROR4__(v58, 11) ^ __ROL4__(v58, 7));
      v61 = v60 + v50;
      v62 = v60 + (__ROL4__(v59, 10) ^ __ROR4__(v59, 2) ^ __ROR4__(v59, 13)) + (v59 & v56 | v53 & (v59 | v56));
      v63 = (__ROL4__(v265, 15) ^ __ROL4__(v265, 13) ^ (v265 >> 10))
          + v260
          + v251
          + ((v252 >> 3) ^ __ROR4__(v252, 7) ^ __ROL4__(v252, 14));
      v64 = (v55 ^ v61 & (v58 ^ v55))
          + v52
          + v63
          - 459576895
          + (__ROR4__(v61, 6) ^ __ROR4__(v61, 11) ^ __ROL4__(v61, 7));
      v65 = v64 + v53;
      v66 = v64 + (__ROL4__(v62, 10) ^ __ROR4__(v62, 2) ^ __ROR4__(v62, 13)) + (v62 & v59 | v56 & (v62 | v59));
      v67 = (__ROL4__(v266, 15) ^ __ROL4__(v266, 13) ^ (v266 >> 10))
          + v252
          + v261
          + ((v253 >> 3) ^ __ROR4__(v253, 7) ^ __ROL4__(v253, 14));
      v68 = (v58 ^ v65 & (v61 ^ v58))
          + v55
          + v67
          - 272742522
          + (__ROR4__(v65, 6) ^ __ROR4__(v65, 11) ^ __ROL4__(v65, 7));
      v69 = v68 + v56;
      v70 = v68 + (__ROL4__(v66, 10) ^ __ROR4__(v66, 2) ^ __ROR4__(v66, 13)) + (v66 & v62 | v59 & (v66 | v62));
      v71 = (__ROL4__(v63, 15) ^ __ROL4__(v63, 13) ^ (v63 >> 10))
          + v253
          + v262
          + (__ROL4__(v254, 14) ^ __ROR4__(v254, 7) ^ (v254 >> 3));
      v72 = (v61 ^ v69 & (v65 ^ v61))
          + v58
          + v71
          + 264347078
          + (__ROR4__(v69, 6) ^ __ROR4__(v69, 11) ^ __ROL4__(v69, 7));
      v73 = v72 + v59;
      v74 = v72 + (__ROL4__(v70, 10) ^ __ROR4__(v70, 2) ^ __ROR4__(v70, 13)) + (v70 & v66 | v62 & (v70 | v66));
      v75 = (__ROL4__(v67, 15) ^ __ROL4__(v67, 13) ^ (v67 >> 10))
          + v263
          + v254
          + (__ROL4__(v255, 14) ^ __ROR4__(v255, 7) ^ (v255 >> 3));
      v76 = (v65 ^ v73 & (v69 ^ v65))
          + v61
          + v75
          + 604807628
          + (__ROR4__(v73, 6) ^ __ROR4__(v73, 11) ^ __ROL4__(v73, 7));
      v77 = v76 + v62;
      v78 = v76 + (__ROL4__(v74, 10) ^ __ROR4__(v74, 2) ^ __ROR4__(v74, 13)) + (v74 & v70 | v66 & (v74 | v70));
      v213 = (__ROL4__(v256, 14) ^ __ROR4__(v256, 7) ^ (v256 >> 3))
           + v264
           + v255
           + ((v71 >> 10) ^ __ROL4__(v71, 15) ^ __ROL4__(v71, 13));
      v79 = (v69 ^ v77 & (v73 ^ v69))
          + v65
          + v213
          + 770255983
          + (__ROR4__(v77, 6) ^ __ROR4__(v77, 11) ^ __ROL4__(v77, 7));
      v80 = v79 + v66;
      v81 = v79 + (__ROL4__(v78, 10) ^ __ROR4__(v78, 2) ^ __ROR4__(v78, 13)) + (v78 & v74 | v70 & (v78 | v74));
      v215 = ((v75 >> 10) ^ __ROL4__(v75, 15) ^ __ROL4__(v75, 13))
           + (__ROL4__(v257, 14) ^ __ROR4__(v257, 7) ^ (v257 >> 3))
           + v265
           + v256;
      v82 = (v73 ^ v80 & (v77 ^ v73))
          + v69
          + v215
          + 1249150122
          + (__ROR4__(v80, 6) ^ __ROR4__(v80, 11) ^ __ROL4__(v80, 7));
      v83 = v82 + v70;
      v84 = v82 + (__ROL4__(v81, 10) ^ __ROR4__(v81, 2) ^ __ROR4__(v81, 13)) + (v81 & v78 | v74 & (v81 | v78));
      v217 = (__ROL4__(v258, 14) ^ __ROR4__(v258, 7) ^ (v258 >> 3))
           + v266
           + v257
           + ((v213 >> 10) ^ __ROL4__(v213, 15) ^ __ROL4__(v213, 13));
      v85 = (v77 ^ v83 & (v80 ^ v77))
          + v73
          + v217
          + 1555081692
          + (__ROR4__(v83, 6) ^ __ROR4__(v83, 11) ^ __ROL4__(v83, 7));
      v86 = v85 + v74;
      v87 = v85 + (__ROL4__(v84, 10) ^ __ROR4__(v84, 2) ^ __ROR4__(v84, 13)) + (v84 & v81 | v78 & (v84 | v81));
      v220 = ((v215 >> 10) ^ __ROL4__(v215, 15) ^ __ROL4__(v215, 13))
           + v63
           + v258
           + ((v259 >> 3) ^ __ROR4__(v259, 7) ^ __ROL4__(v259, 14));
      v88 = v77
          + v220
          + 1996064986
          + (v80 ^ v86 & (v83 ^ v80))
          + (__ROR4__(v86, 6) ^ __ROR4__(v86, 11) ^ __ROL4__(v86, 7));
      v89 = v88 + v78;
      v90 = v88 + (__ROL4__(v87, 10) ^ __ROR4__(v87, 2) ^ __ROR4__(v87, 13)) + (v87 & v84 | v81 & (v87 | v84));
      v222 = ((v217 >> 10) ^ __ROL4__(v217, 15) ^ __ROL4__(v217, 13))
           + v67
           + v259
           + ((v260 >> 3) ^ __ROR4__(v260, 7) ^ __ROL4__(v260, 14));
      v91 = v80
          + v222
          - 1740746414
          + (v83 ^ v89 & (v86 ^ v83))
          + (__ROR4__(v89, 6) ^ __ROR4__(v89, 11) ^ __ROL4__(v89, 7));
      v92 = v91 + v81;
      v93 = v91 + (__ROL4__(v90, 10) ^ __ROR4__(v90, 2) ^ __ROR4__(v90, 13)) + (v90 & v87 | v84 & (v90 | v87));
      v223 = ((v220 >> 10) ^ __ROL4__(v220, 15) ^ __ROL4__(v220, 13))
           + v71
           + v260
           + ((v261 >> 3) ^ __ROR4__(v261, 7) ^ __ROL4__(v261, 14));
      v94 = (v86 ^ v92 & (v89 ^ v86))
          + v83
          + v223
          - 1473132947
          + (__ROR4__(v92, 6) ^ __ROR4__(v92, 11) ^ __ROL4__(v92, 7));
      v95 = v84 + v94;
      v96 = v94 + (__ROL4__(v93, 10) ^ __ROR4__(v93, 2) ^ __ROR4__(v93, 13)) + (v93 & v90 | v87 & (v93 | v90));
      v225 = ((v222 >> 10) ^ __ROL4__(v222, 15) ^ __ROL4__(v222, 13))
           + v75
           + v261
           + ((v262 >> 3) ^ __ROR4__(v262, 7) ^ __ROL4__(v262, 14));
      v97 = (v89 ^ v95 & (v92 ^ v89))
          + v86
          + v225
          - 1341970488
          + (__ROR4__(v95, 6) ^ __ROR4__(v95, 11) ^ __ROL4__(v95, 7));
      v98 = v87 + v97;
      v99 = v97 + (__ROL4__(v96, 10) ^ __ROR4__(v96, 2) ^ __ROR4__(v96, 13)) + (v96 & v93 | v90 & (v96 | v93));
      v227 = ((v223 >> 10) ^ __ROL4__(v223, 15) ^ __ROL4__(v223, 13))
           + v213
           + v262
           + ((v263 >> 3) ^ __ROR4__(v263, 7) ^ __ROL4__(v263, 14));
      v100 = (v92 ^ v98 & (v95 ^ v92))
           + v89
           + v227
           - 1084653625
           + (__ROR4__(v98, 6) ^ __ROR4__(v98, 11) ^ __ROL4__(v98, 7));
      v101 = v90 + v100;
      v102 = v100 + (__ROL4__(v99, 10) ^ __ROR4__(v99, 2) ^ __ROR4__(v99, 13)) + (v99 & v96 | v93 & (v99 | v96));
      v229 = ((v225 >> 10) ^ __ROL4__(v225, 15) ^ __ROL4__(v225, 13))
           + v215
           + v263
           + ((v264 >> 3) ^ __ROR4__(v264, 7) ^ __ROL4__(v264, 14));
      v103 = (v95 ^ v101 & (v98 ^ v95))
           + v92
           + v229
           - 958395405
           + (__ROR4__(v101, 6) ^ __ROR4__(v101, 11) ^ __ROL4__(v101, 7));
      v104 = v93 + v103;
      v105 = v103 + (__ROL4__(v102, 10) ^ __ROR4__(v102, 2) ^ __ROR4__(v102, 13)) + (v102 & v99 | v96 & (v102 | v99));
      v231 = ((v227 >> 10) ^ __ROL4__(v227, 15) ^ __ROL4__(v227, 13))
           + v217
           + v264
           + ((v265 >> 3) ^ __ROR4__(v265, 7) ^ __ROL4__(v265, 14));
      v106 = (v98 ^ v104 & (v101 ^ v98))
           + v95
           + v231
           - 710438585
           + (__ROR4__(v104, 6) ^ __ROR4__(v104, 11) ^ __ROL4__(v104, 7));
      v107 = v96 + v106;
      v108 = v106 + (__ROL4__(v105, 10) ^ __ROR4__(v105, 2) ^ __ROR4__(v105, 13)) + (v105 & v102 | v99 & (v105 | v102));
      v232 = ((v229 >> 10) ^ __ROL4__(v229, 15) ^ __ROL4__(v229, 13))
           + v220
           + v265
           + ((v266 >> 3) ^ __ROR4__(v266, 7) ^ __ROL4__(v266, 14));
      v109 = v98
           + v232
           + 113926993
           + (v101 ^ v107 & (v104 ^ v101))
           + (__ROR4__(v107, 6) ^ __ROR4__(v107, 11) ^ __ROL4__(v107, 7));
      v110 = v99 + v109;
      v111 = v109 + (__ROL4__(v108, 10) ^ __ROR4__(v108, 2) ^ __ROR4__(v108, 13)) + (v108 & v105 | v102 & (v108 | v105));
      v234 = ((v231 >> 10) ^ __ROL4__(v231, 15) ^ __ROL4__(v231, 13))
           + v222
           + v266
           + ((v63 >> 3) ^ __ROR4__(v63, 7) ^ __ROL4__(v63, 14));
      v112 = v101
           + v234
           + 338241895
           + (v104 ^ v110 & (v107 ^ v104))
           + (__ROR4__(v110, 6) ^ __ROR4__(v110, 11) ^ __ROL4__(v110, 7));
      v113 = v112 + v102;
      v114 = v112 + (__ROL4__(v111, 10) ^ __ROR4__(v111, 2) ^ __ROR4__(v111, 13)) + (v111 & v108 | v105 & (v111 | v108));
      v245 = ((v232 >> 10) ^ __ROL4__(v232, 15) ^ __ROL4__(v232, 13))
           + v223
           + ((v67 >> 3) ^ __ROR4__(v67, 7) ^ __ROL4__(v67, 14))
           + v63;
      v115 = v104
           + v245
           + 666307205
           + (v107 ^ v113 & (v110 ^ v107))
           + (__ROR4__(v113, 6) ^ __ROR4__(v113, 11) ^ __ROL4__(v113, 7));
      v116 = v115 + v105;
      v117 = v115 + (__ROL4__(v114, 10) ^ __ROR4__(v114, 2) ^ __ROR4__(v114, 13)) + (v114 & v111 | v108 & (v114 | v111));
      v235 = ((v234 >> 10) ^ __ROL4__(v234, 15) ^ __ROL4__(v234, 13))
           + v225
           + ((v71 >> 3) ^ __ROR4__(v71, 7) ^ __ROL4__(v71, 14))
           + v67;
      v118 = (v110 ^ v116 & (v113 ^ v110))
           + v107
           + v235
           + 773529912
           + (__ROR4__(v116, 6) ^ __ROR4__(v116, 11) ^ __ROL4__(v116, 7));
      v119 = v118 + v108;
      v120 = v118 + (__ROL4__(v117, 10) ^ __ROR4__(v117, 2) ^ __ROR4__(v117, 13)) + (v117 & v114 | v111 & (v117 | v114));
      v246 = ((v245 >> 10) ^ __ROL4__(v245, 15) ^ __ROL4__(v245, 13))
           + v227
           + ((v75 >> 3) ^ __ROR4__(v75, 7) ^ __ROL4__(v75, 14))
           + v71;
      v121 = (v113 ^ v119 & (v116 ^ v113))
           + v110
           + v246
           + 1294757372
           + (__ROR4__(v119, 6) ^ __ROR4__(v119, 11) ^ __ROL4__(v119, 7));
      v122 = v111 + v121;
      v123 = v121 + (__ROL4__(v120, 10) ^ __ROR4__(v120, 2) ^ __ROR4__(v120, 13)) + (v120 & v117 | v114 & (v120 | v117));
      v247 = ((v235 >> 10) ^ __ROL4__(v235, 15) ^ __ROL4__(v235, 13))
           + v229
           + ((v213 >> 3) ^ __ROR4__(v213, 7) ^ __ROL4__(v213, 14))
           + v75;
      v124 = (v116 ^ (v111 + v121) & (v119 ^ v116))
           + v113
           + v247
           + 1396182291
           + (__ROR4__(v111 + v121, 6) ^ __ROR4__(v111 + v121, 11) ^ __ROL4__(v111 + v121, 7));
      v125 = v124 + v114;
      v126 = v124 + (__ROL4__(v123, 10) ^ __ROR4__(v123, 2) ^ __ROR4__(v123, 13)) + (v123 & v120 | v117 & (v123 | v120));
      v127 = v231
           + v213
           + ((v215 >> 3) ^ __ROR4__(v215, 7) ^ __ROL4__(v215, 14))
           + ((v246 >> 10) ^ __ROL4__(v246, 15) ^ __ROL4__(v246, 13));
      v128 = (v119 ^ v125 & (v122 ^ v119))
           + v116
           + v127
           + 1695183700
           + (__ROR4__(v125, 6) ^ __ROR4__(v125, 11) ^ __ROL4__(v125, 7));
      v129 = v128 + v117;
      v130 = v128 + (__ROL4__(v126, 10) ^ __ROR4__(v126, 2) ^ __ROR4__(v126, 13)) + (v126 & v123 | v120 & (v126 | v123));
      v219 = v232
           + v215
           + ((v217 >> 3) ^ __ROR4__(v217, 7) ^ __ROL4__(v217, 14))
           + ((v247 >> 10) ^ __ROL4__(v247, 15) ^ __ROL4__(v247, 13));
      v237 = v127;
      v131 = (v122 ^ v129 & (v125 ^ v122))
           + v119
           + v219
           + 1986661051
           + (__ROR4__(v129, 6) ^ __ROR4__(v129, 11) ^ __ROL4__(v129, 7));
      v132 = v131 + v120;
      v133 = v131 + (__ROL4__(v130, 10) ^ __ROR4__(v130, 2) ^ __ROR4__(v130, 13)) + (v130 & v126 | v123 & (v130 | v126));
      v134 = ((v127 >> 10) ^ __ROL4__(v127, 15) ^ __ROL4__(v127, 13))
           + v234
           + v217
           + ((v220 >> 3) ^ __ROR4__(v220, 7) ^ __ROL4__(v220, 14));
      v135 = (v125 ^ v132 & (v129 ^ v125))
           + v122
           + v134
           - 2117940946
           + (__ROR4__(v132, 6) ^ __ROR4__(v132, 11) ^ __ROL4__(v132, 7));
      v136 = v135 + v123;
      v137 = v135 + (__ROL4__(v133, 10) ^ __ROR4__(v133, 2) ^ __ROR4__(v133, 13)) + (v133 & v130 | v126 & (v133 | v130));
      v138 = v223;
      v214 = ((v219 >> 10) ^ __ROL4__(v219, 15) ^ __ROL4__(v219, 13))
           + v245
           + v220
           + ((v222 >> 3) ^ __ROR4__(v222, 7) ^ __ROL4__(v222, 14));
      v139 = v125
           + v214
           - 1838011259
           + (v129 ^ v136 & (v132 ^ v129))
           + (__ROR4__(v136, 6) ^ __ROR4__(v136, 11) ^ __ROL4__(v136, 7));
      v140 = v139 + v126;
      v141 = v139 + (__ROL4__(v137, 10) ^ __ROR4__(v137, 2) ^ __ROR4__(v137, 13)) + (v137 & v133 | v130 & (v137 | v133));
      v224 = v235
           + v222
           + ((v223 >> 3) ^ __ROR4__(v223, 7) ^ __ROL4__(v223, 14))
           + ((v134 >> 10) ^ __ROL4__(v134, 15) ^ __ROL4__(v134, 13));
      v142 = (v132 ^ v140 & (v136 ^ v132))
           + v129
           + v224
           - 1564481375
           + (__ROR4__(v140, 6) ^ __ROR4__(v140, 11) ^ __ROL4__(v140, 7));
      v143 = v142 + v130;
      v144 = v142 + (__ROL4__(v141, 10) ^ __ROR4__(v141, 2) ^ __ROR4__(v141, 13)) + (v141 & v137 | v133 & (v141 | v137));
      v216 = ((v214 >> 10) ^ __ROL4__(v214, 15) ^ __ROL4__(v214, 13))
           + v246
           + v138
           + ((v225 >> 3) ^ __ROR4__(v225, 7) ^ __ROL4__(v225, 14));
      v145 = (v136 ^ v143 & (v140 ^ v136))
           + v132
           + v216
           - 1474664885
           + (__ROR4__(v143, 6) ^ __ROR4__(v143, 11) ^ __ROL4__(v143, 7));
      v146 = v145 + v133;
      v147 = v145 + (__ROL4__(v144, 10) ^ __ROR4__(v144, 2) ^ __ROR4__(v144, 13)) + (v144 & v141 | v137 & (v144 | v141));
      v226 = ((v224 >> 10) ^ __ROL4__(v224, 15) ^ __ROL4__(v224, 13))
           + v247
           + v225
           + ((v227 >> 3) ^ __ROR4__(v227, 7) ^ __ROL4__(v227, 14));
      v148 = (v140 ^ v146 & (v143 ^ v140))
           + v136
           + v226
           - 1035236496
           + (__ROR4__(v146, 6) ^ __ROR4__(v146, 11) ^ __ROL4__(v146, 7));
      v149 = v137 + v148;
      v150 = v148 + (__ROL4__(v147, 10) ^ __ROR4__(v147, 2) ^ __ROR4__(v147, 13)) + (v147 & v144 | v141 & (v147 | v144));
      v218 = ((v216 >> 10) ^ __ROL4__(v216, 15) ^ __ROL4__(v216, 13))
           + v127
           + v227
           + ((v229 >> 3) ^ __ROR4__(v229, 7) ^ __ROL4__(v229, 14));
      v151 = (v143 ^ v149 & (v146 ^ v143))
           + v140
           + v218
           - 949202525
           + (__ROR4__(v149, 6) ^ __ROR4__(v149, 11) ^ __ROL4__(v149, 7));
      v152 = v141 + v151;
      v153 = v151 + (__ROL4__(v150, 10) ^ __ROR4__(v150, 2) ^ __ROR4__(v150, 13)) + (v150 & v147 | v144 & (v150 | v147));
      v221 = v219
           + v229
           + ((v231 >> 3) ^ __ROR4__(v231, 7) ^ __ROL4__(v231, 14))
           + ((v226 >> 10) ^ __ROL4__(v226, 15) ^ __ROL4__(v226, 13));
      v154 = (v146 ^ v152 & (v149 ^ v146))
           + v143
           + v221
           - 778901479
           + (__ROR4__(v152, 6) ^ __ROR4__(v152, 11) ^ __ROL4__(v152, 7));
      v155 = v144 + v154;
      v156 = v154 + (__ROL4__(v153, 10) ^ __ROR4__(v153, 2) ^ __ROR4__(v153, 13)) + (v153 & v150 | v147 & (v153 | v150));
      v228 = ((v218 >> 10) ^ __ROL4__(v218, 15) ^ __ROL4__(v218, 13))
           + v134
           + v231
           + ((v232 >> 3) ^ __ROR4__(v232, 7) ^ __ROL4__(v232, 14));
      v157 = (v149 ^ (v144 + v154) & (v152 ^ v149))
           + v146
           + v228
           - 694614492
           + (__ROR4__(v144 + v154, 6) ^ __ROR4__(v144 + v154, 11) ^ __ROL4__(v144 + v154, 7));
      v158 = v147 + v157;
      v159 = v157 + (__ROL4__(v156, 10) ^ __ROR4__(v156, 2) ^ __ROR4__(v156, 13)) + (v156 & v153 | v150 & (v156 | v153));
      v230 = ((v221 >> 10) ^ __ROL4__(v221, 15) ^ __ROL4__(v221, 13))
           + v214
           + v232
           + ((v234 >> 3) ^ __ROR4__(v234, 7) ^ __ROL4__(v234, 14));
      v160 = (v152 ^ v158 & (v155 ^ v152))
           + v149
           + v230
           - 200395387
           + (__ROR4__(v158, 6) ^ __ROR4__(v158, 11) ^ __ROL4__(v158, 7));
      v161 = v150 + v160;
      v162 = v160 + (__ROL4__(v159, 10) ^ __ROR4__(v159, 2) ^ __ROR4__(v159, 13)) + (v159 & v156 | v153 & (v159 | v156));
      v233 = v224
           + v234
           + ((v245 >> 3) ^ __ROR4__(v245, 7) ^ __ROL4__(v245, 14))
           + ((v228 >> 10) ^ __ROL4__(v228, 15) ^ __ROL4__(v228, 13));
      v163 = (v155 ^ v161 & (v158 ^ v155))
           + v152
           + v233
           + 275423344
           + (__ROR4__(v161, 6) ^ __ROR4__(v161, 11) ^ __ROL4__(v161, 7));
      v164 = v163 + v153;
      v165 = v163 + (__ROL4__(v162, 10) ^ __ROR4__(v162, 2) ^ __ROR4__(v162, 13)) + (v162 & v159 | v156 & (v162 | v159));
      v251 = v216
           + v245
           + ((v235 >> 3) ^ __ROR4__(v235, 7) ^ __ROL4__(v235, 14))
           + ((v230 >> 10) ^ __ROL4__(v230, 15) ^ __ROL4__(v230, 13));
      v166 = (v158 ^ v164 & (v161 ^ v158))
           + v155
           + v251
           + 430227734
           + (__ROR4__(v164, 6) ^ __ROR4__(v164, 11) ^ __ROL4__(v164, 7));
      v167 = v166 + v156;
      v168 = v166 + (__ROL4__(v165, 10) ^ __ROR4__(v165, 2) ^ __ROR4__(v165, 13)) + (v165 & v162 | v159 & (v165 | v162));
      v252 = v226
           + v235
           + ((v246 >> 3) ^ __ROR4__(v246, 7) ^ __ROL4__(v246, 14))
           + ((v233 >> 10) ^ __ROL4__(v233, 15) ^ __ROL4__(v233, 13));
      v169 = (v161 ^ v167 & (v164 ^ v161))
           + v158
           + v252
           + 506948616
           + (__ROR4__(v167, 6) ^ __ROR4__(v167, 11) ^ __ROL4__(v167, 7));
      v170 = v169 + v159;
      v171 = v169 + (__ROL4__(v168, 10) ^ __ROR4__(v168, 2) ^ __ROR4__(v168, 13)) + (v168 & v165 | v162 & (v168 | v165));
      v253 = v218
           + v246
           + ((v247 >> 3) ^ __ROR4__(v247, 7) ^ __ROL4__(v247, 14))
           + ((v251 >> 10) ^ __ROL4__(v251, 15) ^ __ROL4__(v251, 13));
      v172 = v161
           + v253
           + 659060556
           + (v164 ^ v170 & (v167 ^ v164))
           + (__ROR4__(v170, 6) ^ __ROR4__(v170, 11) ^ __ROL4__(v170, 7));
      v173 = v172 + v162;
      v174 = v172 + (__ROL4__(v171, 10) ^ __ROR4__(v171, 2) ^ __ROR4__(v171, 13)) + (v171 & v168 | v165 & (v171 | v168));
      v254 = v221
           + v247
           + ((v237 >> 3) ^ __ROR4__(v237, 7) ^ __ROL4__(v237, 14))
           + ((v252 >> 10) ^ __ROL4__(v252, 15) ^ __ROL4__(v252, 13));
      v175 = v164
           + v254
           + 883997877
           + (v167 ^ v173 & (v170 ^ v167))
           + (__ROR4__(v173, 6) ^ __ROR4__(v173, 11) ^ __ROL4__(v173, 7));
      v176 = v175 + v165;
      v177 = v175 + (__ROL4__(v174, 10) ^ __ROR4__(v174, 2) ^ __ROR4__(v174, 13)) + (v174 & v171 | v168 & (v174 | v171));
      v255 = v228
           + v237
           + ((v219 >> 3) ^ __ROR4__(v219, 7) ^ __ROL4__(v219, 14))
           + ((v253 >> 10) ^ __ROL4__(v253, 15) ^ __ROL4__(v253, 13));
      v178 = (v170 ^ v176 & (v173 ^ v170))
           + v167
           + v255
           + 958139571
           + (__ROR4__(v176, 6) ^ __ROR4__(v176, 11) ^ __ROL4__(v176, 7));
      v179 = v178 + v168;
      v180 = v178 + (__ROL4__(v177, 10) ^ __ROR4__(v177, 2) ^ __ROR4__(v177, 13)) + (v177 & v174 | v171 & (v177 | v174));
      v256 = v230
           + v219
           + ((v134 >> 3) ^ __ROR4__(v134, 7) ^ __ROL4__(v134, 14))
           + ((v254 >> 10) ^ __ROL4__(v254, 15) ^ __ROL4__(v254, 13));
      v181 = (v173 ^ v179 & (v176 ^ v173))
           + v170
           + v256
           + 1322822218
           + (__ROR4__(v179, 6) ^ __ROR4__(v179, 11) ^ __ROL4__(v179, 7));
      v182 = v181 + v171;
      v183 = v181 + (__ROL4__(v180, 10) ^ __ROR4__(v180, 2) ^ __ROR4__(v180, 13)) + (v180 & v177 | v174 & (v180 | v177));
      v257 = ((v255 >> 10) ^ __ROL4__(v255, 15) ^ __ROL4__(v255, 13))
           + v233
           + v134
           + ((v214 >> 3) ^ __ROR4__(v214, 7) ^ __ROL4__(v214, 14));
      v184 = (v176 ^ v182 & (v179 ^ v176))
           + v173
           + v257
           + 1537002063
           + (__ROR4__(v182, 6) ^ __ROR4__(v182, 11) ^ __ROL4__(v182, 7));
      v185 = v184 + v174;
      v186 = v184 + (__ROL4__(v183, 10) ^ __ROR4__(v183, 2) ^ __ROR4__(v183, 13)) + (v183 & v180 | v177 & (v183 | v180));
      v258 = v251
           + v214
           + ((v224 >> 3) ^ __ROR4__(v224, 7) ^ __ROL4__(v224, 14))
           + ((v256 >> 10) ^ __ROL4__(v256, 15) ^ __ROL4__(v256, 13));
      v187 = (v179 ^ v185 & (v182 ^ v179))
           + v176
           + v258
           + 1747873779
           + (__ROR4__(v185, 6) ^ __ROR4__(v185, 11) ^ __ROL4__(v185, 7));
      v188 = v187 + v177;
      v189 = v187 + (__ROL4__(v186, 10) ^ __ROR4__(v186, 2) ^ __ROR4__(v186, 13)) + (v186 & v183 | v180 & (v186 | v183));
      v259 = ((v257 >> 10) ^ __ROL4__(v257, 15) ^ __ROL4__(v257, 13))
           + v224
           + ((v216 >> 3) ^ __ROR4__(v216, 7) ^ __ROL4__(v216, 14))
           + v252;
      v190 = (v182 ^ v188 & (v185 ^ v182))
           + v179
           + v259
           + 1955562222
           + (__ROR4__(v188, 6) ^ __ROR4__(v188, 11) ^ __ROL4__(v188, 7));
      v191 = v190 + v180;
      v192 = v190 + (__ROL4__(v189, 10) ^ __ROR4__(v189, 2) ^ __ROR4__(v189, 13)) + (v189 & v186 | v183 & (v189 | v186));
      v260 = ((v258 >> 10) ^ __ROL4__(v258, 15) ^ __ROL4__(v258, 13))
           + v216
           + ((v226 >> 3) ^ __ROR4__(v226, 7) ^ __ROL4__(v226, 14))
           + v253;
      v193 = (v185 ^ v191 & (v188 ^ v185))
           + v182
           + v260
           + 2024104815
           + (__ROR4__(v191, 6) ^ __ROR4__(v191, 11) ^ __ROL4__(v191, 7));
      v194 = v193 + v183;
      v195 = v193 + (__ROL4__(v192, 10) ^ __ROR4__(v192, 2) ^ __ROR4__(v192, 13)) + (v192 & v189 | v186 & (v192 | v189));
      v261 = ((v259 >> 10) ^ __ROL4__(v259, 15) ^ __ROL4__(v259, 13))
           + v226
           + ((v218 >> 3) ^ __ROR4__(v218, 7) ^ __ROL4__(v218, 14))
           + v254;
      v196 = (v188 ^ v194 & (v191 ^ v188))
           + v185
           + v261
           - 2067236844
           + (__ROL4__(v194, 7) ^ __ROR4__(v194, 6) ^ __ROR4__(v194, 11));
      v197 = v196 + v186;
      v198 = (__ROL4__(v195, 10) ^ __ROR4__(v195, 2) ^ __ROR4__(v195, 13)) + (v195 & v192 | v189 & (v195 | v192)) + v196;
      v262 = (__ROL4__(v260, 15) ^ __ROL4__(v260, 13) ^ (v260 >> 10))
           + v218
           + ((v221 >> 3) ^ __ROR4__(v221, 7) ^ __ROL4__(v221, 14))
           + v255;
      v199 = (v191 ^ v197 & (v194 ^ v191))
           + v188
           + v262
           - 1933114872
           + (__ROL4__(v197, 7) ^ __ROR4__(v197, 6) ^ __ROR4__(v197, 11));
      v200 = v199 + v189;
      v201 = (__ROL4__(v198, 10) ^ __ROR4__(v198, 2) ^ __ROR4__(v198, 13)) + (v198 & v195 | v192 & (v198 | v195)) + v199;
      v263 = (__ROL4__(v261, 15) ^ __ROL4__(v261, 13) ^ (v261 >> 10))
           + v256
           + ((v228 >> 3) ^ __ROR4__(v228, 7) ^ __ROL4__(v228, 14))
           + v221;
      v202 = (v194 ^ v200 & (v197 ^ v194))
           + v191
           + v263
           - 1866530822
           + (__ROL4__(v200, 7) ^ __ROR4__(v200, 6) ^ __ROR4__(v200, 11));
      v203 = v202 + v192;
      v204 = (__ROL4__(v201, 10) ^ __ROR4__(v201, 2) ^ __ROR4__(v201, 13)) + (v201 & v198 | v195 & (v201 | v198)) + v202;
      v264 = (__ROL4__(v262, 15) ^ __ROL4__(v262, 13) ^ (v262 >> 10))
           + v257
           + ((v230 >> 3) ^ __ROR4__(v230, 7) ^ __ROL4__(v230, 14))
           + v228;
      v205 = (v197 ^ v203 & (v200 ^ v197))
           + v194
           + v264
           - 1538233109
           + (__ROL4__(v203, 7) ^ __ROR4__(v203, 6) ^ __ROR4__(v203, 11));
      v206 = v205 + v195;
      v207 = (__ROL4__(v204, 10) ^ __ROR4__(v204, 2) ^ __ROR4__(v204, 13)) + (v204 & v201 | v198 & (v204 | v201)) + v205;
      v265 = v258
           + v230
           + ((v233 >> 3) ^ __ROR4__(v233, 7) ^ __ROL4__(v233, 14))
           + (__ROL4__(v263, 15) ^ __ROL4__(v263, 13) ^ (v263 >> 10));
      v208 = (v200 ^ v206 & (v203 ^ v200))
           + v197
           + v265
           - 1090935817
           + (__ROL4__(v206, 7) ^ __ROR4__(v206, 6) ^ __ROR4__(v206, 11));
      v209 = v208 + v198;
      v210 = (__ROL4__(v207, 10) ^ __ROR4__(v207, 2) ^ __ROR4__(v207, 13)) + (v207 & v204 | v201 & (v207 | v204)) + v208;
      v238 += v210;
      v266 = v259
           + v233
           + ((v251 >> 3) ^ __ROR4__(v251, 7) ^ __ROL4__(v251, 14))
           + (__ROL4__(v264, 15) ^ __ROL4__(v264, 13) ^ (v264 >> 10));
      v240 += v204;
      v211 = v200 + v266 - 965641998 + (v203 ^ v209 & (v206 ^ v203));
      v239 += v207;
      v4 = v239;
      v242 += v209;
      v7 = v242;
      v243 += v206;
      v10 = v243;
      v212 = v211 + (__ROL4__(v209, 7) ^ __ROR4__(v209, 6) ^ __ROR4__(v209, 11));
      v241 += v212 + v201;
      v11 = v212
          + v248
          + (v210 & v207 | v204 & (v210 | v207))
          + (__ROL4__(v210, 10) ^ __ROR4__(v210, 2) ^ __ROR4__(v210, 13));
      *a3 = v11;
      a3[1] = v238;
      result = v238;
      a3[2] = v239;
      a3[3] = v240;
      a3[5] = v242;
      v5 = v240;
      a3[4] = v241;
      v248 = v11;
      a3[6] = v243;
      v244 += v203;
      v12 = v244;
      v6 = v241;
      a3[7] = v244;
    }
    while ( v236 < v249 );
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
  return sub_403200(a1 + 48, v3, (int *)a1);
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

void __fastcall sub_405AC0(const __m128i *src, size_t n, __m128i *a3)
{
  unsigned __int64 v3; // r13
  const __m128i *v5; // rbx
  __int64 v6; // rbp
  __m128i *v7; // rbp
  const __m128i *v8; // r14
  __m128i v9; // xmm0
  __int64 v10; // rax
  _QWORD *v11; // rsi
  size_t v12; // r13
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r15
  size_t v16; // r14
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
  v5 = src;
  v6 = a3[2].m128i_i64[1];
  if ( v6 )
  {
    v15 = (unsigned __int64)&a3[3];
    v16 = 128 - v6;
    if ( 128 - v6 > n )
      v16 = n;
    memcpy(&a3[3].m128i_i8[v6], src, v16);
    v17 = v16 + a3[2].m128i_i64[1];
    a3[2].m128i_i64[1] = v17;
    if ( v17 > 0x40 )
    {
      sub_403200(v15, v17 & 0xFFFFFFFFFFFFFFC0LL, a3->m128i_i32);
      v23 = (v16 + v6) & 0xFFFFFFFFFFFFFFC0LL;
      v24 = (__int64 *)(v15 + v23);
      v25 = a3[2].m128i_i64[1] & 0x3F;
      a3[2].m128i_i64[1] = v25;
      if ( (unsigned int)v25 >= 8 )
      {
        v26 = (unsigned __int64)&a3[3].m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
        a3[3].m128i_i64[0] = *v24;
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
      else if ( (v25 & 4) != 0 )
      {
        a3[3].m128i_i32[0] = *(_DWORD *)v24;
        *(_DWORD *)(v15 + (unsigned int)v25 - 4) = *(_DWORD *)((char *)v24 + (unsigned int)v25 - 4);
      }
      else if ( (_DWORD)v25 )
      {
        a3[3].m128i_i8[0] = *(_BYTE *)v24;
        if ( (v25 & 2) != 0 )
          *(_WORD *)(v15 + (unsigned int)v25 - 2) = *(_WORD *)((char *)v24 + (unsigned int)v25 - 2);
      }
    }
    v5 = (const __m128i *)((char *)v5 + v16);
    v3 -= v16;
  }
  if ( v3 > 0x3F )
  {
    if ( ((unsigned __int8)v5 & 3) != 0 )
    {
      v7 = a3 + 3;
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
          a3[4] = _mm_loadu_si128(v5 - 3);
          a3[5] = _mm_loadu_si128(v5 - 2);
          a3[6] = _mm_loadu_si128(v5 - 1);
          sub_403200((unsigned __int64)&a3[3], 64LL, a3->m128i_i32);
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
    sub_403200(v14, v13 & 0xFFFFFFFFFFFFFFC0LL, a3->m128i_i32);
  }
  if ( !v3 )
    return;
  v7 = a3 + 3;
  v8 = v5;
LABEL_8:
  v10 = a3[2].m128i_i64[1];
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
  else if ( (v3 & 4) != 0 )
  {
    *(_DWORD *)v11 = v8->m128i_i32[0];
    *(_DWORD *)((char *)v11 + (unsigned int)v3 - 4) = *(__int32 *)((char *)&v8->m128i_i32[-1] + (unsigned int)v3);
  }
  else if ( (_DWORD)v3 )
  {
    *(_BYTE *)v11 = v8->m128i_i8[0];
    if ( (v3 & 2) != 0 )
      *(_WORD *)((char *)v11 + (unsigned int)v3 - 2) = *(__int16 *)((char *)&v8->m128i_i16[-1] + (unsigned int)v3);
  }
  v12 = v10 + v3;
  if ( v12 > 0x3F )
  {
    v12 -= 64LL;
    sub_403200((unsigned __int64)v7, 64LL, a3->m128i_i32);
    memcpy(v7, &a3[7], v12);
  }
  a3[2].m128i_i64[1] = v12;
}

__int64 __fastcall sub_405DC0(const __m128i *a1, size_t a2, __int64 a3)
{
  __m128i v5; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+10h] [rbp-A8h]
  __int64 v7; // [rsp+18h] [rbp-A0h]
  __int64 v8; // [rsp+20h] [rbp-98h]
  __int64 v9; // [rsp+28h] [rbp-90h]

  v5.m128i_i64[0] = 0xBB67AE856A09E667LL;
  v5.m128i_i64[1] = 0xA54FF53A3C6EF372LL;
  v6 = 0x9B05688C510E527FLL;
  v7 = 0x5BE0CD191F83D9ABLL;
  v8 = 0LL;
  v9 = 0LL;
  sub_405AC0(a1, a2, &v5);
  sub_405990((__int64)&v5);
  return sub_4031C0((__int64)&v5, a3);
}

__int64 __fastcall sub_405E40(const __m128i *a1, size_t a2, __int64 a3)
{
  __m128i v5; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+10h] [rbp-A8h]
  __int64 v7; // [rsp+18h] [rbp-A0h]
  __int64 v8; // [rsp+20h] [rbp-98h]
  __int64 v9; // [rsp+28h] [rbp-90h]

  v5.m128i_i64[0] = 0x367CD507C1059ED8LL;
  v5.m128i_i64[1] = 0xF70E59393070DD17LL;
  v6 = 0x68581511FFC00B31LL;
  v7 = 0xBEFA4FA464F98FA7LL;
  v8 = 0LL;
  v9 = 0LL;
  sub_405AC0(a1, a2, &v5);
  sub_405990((__int64)&v5);
  return sub_4031E0((__int64)&v5, a3);
}

__int64 __fastcall sub_405EC0(FILE *stream, __int64 a2)
{
  __m128i *v2; // rax
  __m128i *v3; // r12
  size_t v4; // rbx
  int flags; // edx
  size_t v6; // rax
  __m128i v8; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+10h] [rbp-C8h]
  __int64 v10; // [rsp+18h] [rbp-C0h]
  __int64 v11; // [rsp+20h] [rbp-B8h]
  __int64 v12; // [rsp+28h] [rbp-B0h]

  v2 = (__m128i *)malloc(0x8048uLL);
  if ( !v2 )
    return 1LL;
  v11 = 0LL;
  v3 = v2;
  v8.m128i_i64[0] = 0xBB67AE856A09E667LL;
  v8.m128i_i64[1] = 0xA54FF53A3C6EF372LL;
  v9 = 0x9B05688C510E527FLL;
  v10 = 0x5BE0CD191F83D9ABLL;
  v12 = 0LL;
LABEL_3:
  v4 = 0LL;
  while ( 1 )
  {
    v6 = fread_unlocked(&v3->m128i_i8[v4], 1uLL, 0x8000 - v4, stream);
    v4 += v6;
    if ( v4 == 0x8000 )
    {
      sub_403200((unsigned __int64)v3, 0x8000LL, v8.m128i_i32);
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
    sub_405AC0(v3, v4, &v8);
  sub_405990((__int64)&v8);
  sub_4031C0((__int64)&v8, a2);
  free(v3);
  return 0LL;
}

__int64 __fastcall sub_406020(FILE *stream, __int64 a2)
{
  __m128i *v2; // rax
  __m128i *v3; // r12
  size_t v4; // rbx
  int flags; // edx
  size_t v6; // rax
  __m128i v8; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+10h] [rbp-C8h]
  __int64 v10; // [rsp+18h] [rbp-C0h]
  __int64 v11; // [rsp+20h] [rbp-B8h]
  __int64 v12; // [rsp+28h] [rbp-B0h]

  v2 = (__m128i *)malloc(0x8048uLL);
  if ( !v2 )
    return 1LL;
  v11 = 0LL;
  v3 = v2;
  v8.m128i_i64[0] = 0x367CD507C1059ED8LL;
  v8.m128i_i64[1] = 0xF70E59393070DD17LL;
  v9 = 0x68581511FFC00B31LL;
  v10 = 0xBEFA4FA464F98FA7LL;
  v12 = 0LL;
LABEL_3:
  v4 = 0LL;
  while ( 1 )
  {
    v6 = fread_unlocked(&v3->m128i_i8[v4], 1uLL, 0x8000 - v4, stream);
    v4 += v6;
    if ( v4 == 0x8000 )
    {
      sub_403200((unsigned __int64)v3, 0x8000LL, v8.m128i_i32);
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
    sub_405AC0(v3, v4, &v8);
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
        return 0LL;
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
  const char *v6; // rbx

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
        return (char *)&unk_40AC06;
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
      return (char *)&unk_40AC0A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_406400(
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
                return sub_406400((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_406400((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_409710((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_406400((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_406300("`", a5);
        v51 = sub_406300("'", a5);
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

unsigned __int64 __fastcall sub_406400(
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
                return sub_406400((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_406400((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_409710((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_406400((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_406300("`", a5);
        v51 = sub_406300("'", a5);
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

_BYTE *__fastcall sub_407630(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  if ( dword_60E290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_4086A0();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_60E280 )
    {
      v7 = (__m128i *)sub_4084B0(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_60E280);
    }
    else
    {
      ptr = (void *)sub_4084B0(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_60E290], 0, 16LL * (a1 + 1 - dword_60E290));
    dword_60E290 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_406400(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
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
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_406400(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_407630(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  if ( dword_60E290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_4086A0();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_60E280 )
    {
      v7 = (__m128i *)sub_4084B0(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_60E280);
    }
    else
    {
      ptr = (void *)sub_4084B0(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_60E290], 0, 16LL * (a1 + 1 - dword_60E290));
    dword_60E290 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_406400(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
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
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_406400(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

__int64 __fastcall sub_4077D0(__int128 *a1)
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
    v1 = &xmmword_60E420;
  result = sub_408650(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_4078C0(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_60E420;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_406400(
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

_BYTE *__fastcall sub_407940(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_60E420;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_406400(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_408450(v11 + 1);
  sub_406400(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_407A40()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( dword_60E290 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_60E290 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_60E320 )
  {
    free(v4);
    *(_QWORD *)&xmmword_60E280 = 256LL;
    *((_QWORD *)&xmmword_60E280 + 1) = &unk_60E320;
  }
  if ( v0 != &xmmword_60E280 )
  {
    free(v0);
    ptr = &xmmword_60E280;
  }
  dword_60E290 = 1;
}

_BYTE *__fastcall sub_407B50(int a1, int a2, __int64 a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407B50(int a1, int a2, __int64 a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407BC0(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_407630(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_407BC0(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_407630(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_407C50(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_60E450;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E420);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E430);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E440);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_407630(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_407CD0(__int64 a1)
{
  return sub_407C50(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_407D00(int a1, int a2, __int64 a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407D00(int a1, int a2, __int64 a3)
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
  return sub_407630(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407D70(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E420);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E430);
  si128 = _mm_load_si128((const __m128i *)&xmmword_60E440);
  v8 = qword_60E450;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_407630(a1, a4, a5, (__int64)v6);
}

__int64 __fastcall sub_407EA0(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6, char a7)
{
  return sub_408760(a1, 0, 3, a4, a5, a6, a7);
}

__int64 __fastcall sub_407EB0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_407EB0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_4082B0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_409F10, "https://www.gnu.org/software/coreutils/");
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

// attributes: thunk
void *__fastcall sub_4084A0(size_t a1)
{
  return sub_408450(a1);
}

void *__fastcall sub_4084B0(void *a1, size_t a2)
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
        sub_4086A0();
    }
  }
  return result;
}

void *__fastcall sub_408600(size_t n)
{
  void *v1; // rax

  v1 = sub_408450(n);
  return memset(v1, 0, n);
}

__int64 __fastcall sub_408620(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_4086A0(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_408650(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_408450(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_408680(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_408650(src, v1 + 1);
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
  if ( !(unsigned int)sub_4088A0(stream) )
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

__int64 __fastcall sub_408760(int a1, int a2, __int64 a3, int a4, int a5, int a6)
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
    if ( dword_60E458 < 0 )
    {
      v6 = sub_408760(a1, 0, a3, a4, a5, a6);
      if ( v6 >= 0 && dword_60E458 == -1 )
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
        v6 = sub_408760(a1, 0, v16, v13, v14, v15);
        if ( v6 >= 0 )
        {
          dword_60E458 = -1;
          goto LABEL_8;
        }
      }
      else
      {
        dword_60E458 = 1;
      }
    }
    return (unsigned int)v6;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_4088A0(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_4088E0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_4088E0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_408940(__int64 a1, int *a2)
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

__int64 __fastcall sub_408A20(
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

__int64 __fastcall sub_409040(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_408940((__int64)a2, a7);
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
        sub_408940((__int64)a2, a7);
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
            return (unsigned int)sub_408A20(a1, a2, v12, a4, a5, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_408A20(a1, a2, v12, a4, a5, a6, a7, v8, (__int64)"-");
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
        return (unsigned int)sub_408A20(a1, a2, v12, a4, a5, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_409610(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
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

__int64 __fastcall sub_409670(int a1, __int64 *a2, const char *a3)
{
  return sub_409610(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_409690(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_409610(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_4096B0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409040(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_4096D0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_409610(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_4096F0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409040(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_409710(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_4097F0(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
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
    return -1;
  }
  if ( !result )
    return result;
  if ( v1 )
    return -1;
  return -(*__errno_location() != 9);
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
      return strcmp(v1, "POSIX") != 0;
  }
  return result;
}

const char *sub_409850()
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
            sub_4086E0(v39);
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

int __fastcall sub_409E30(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_60E208 )
    v1 = (void *)qword_60E208;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409E48(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_60DE30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
