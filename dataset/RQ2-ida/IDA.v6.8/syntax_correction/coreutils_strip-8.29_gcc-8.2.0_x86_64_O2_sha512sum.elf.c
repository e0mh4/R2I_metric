#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
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
  const char **v93; // [sp+0h] [bp-148h]@44
  char *s; // [sp+8h] [bp-140h]@46
  char v95; // [sp+13h] [bp-135h]@45
  int v96; // [sp+14h] [bp-134h]@47
  unsigned __int64 v97; // [sp+18h] [bp-130h]@49
  signed __int64 v98; // [sp+20h] [bp-128h]@76
  char v99; // [sp+28h] [bp-120h]@76
  unsigned __int64 v100; // [sp+28h] [bp-120h]@117
  __int64 v101; // [sp+30h] [bp-118h]@76
  const char **v102; // [sp+38h] [bp-110h]@42
  unsigned __int64 v103; // [sp+40h] [bp-108h]@49
  char v104; // [sp+48h] [bp-100h]@45
  char v105; // [sp+49h] [bp-FFh]@49
  char v106; // [sp+4Ah] [bp-FEh]@45
  char v107; // [sp+4Bh] [bp-FDh]@45
  int v108; // [sp+4Ch] [bp-FCh]@45
  char v109; // [sp+5Fh] [bp-E9h]@90
  char *lineptr; // [sp+60h] [bp-E8h]@49
  size_t n; // [sp+68h] [bp-E0h]@49
  char v112[80]; // [sp+70h] [bp-D8h]@127
  char v113[136]; // [sp+C0h] [bp-88h]@90

  v3 = 0;
  LOBYTE(v4) = 0;
  LODWORD(v5) = -1;
  LODWORD(v6) = a1;
  v7 = (const char *)a2;
  sub_407930(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40B500(
    sub_403080,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
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
  if ( ((unsigned int)~(_DWORD)v5 >> 31) & (unsigned __int8)v4 )
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
    v84 = dcgettext(0LL, v9, 5);
    error(0, 0, v84);
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
    v102 = (const char **)&v7[8 * (signed int)v6];
    v10 = dword_60F29C;
    if ( dword_60F29C == (_DWORD)v6 )
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
            fwrite_unlocked("SHA512", 1uLL, 6uLL, stdout);
            fwrite_unlocked(" (", 1uLL, 2uLL, stdout);
            sub_402A40(s, (unsigned int)v64);
            fwrite_unlocked(") = ", 1uLL, 4uLL, stdout);
            if ( !((unsigned __int64)qword_60F2E0 >> 1) )
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
          if ( !((unsigned __int64)qword_60F2E0 >> 1) )
            goto LABEL_157;
        }
        else
        {
          v64 = 0;
          if ( v106 )
            goto LABEL_197;
          if ( !((unsigned __int64)qword_60F2E0 >> 1) )
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
        while ( (unsigned __int64)qword_60F2E0 >> 1 > (unsigned __int64)v6 );
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
        LODWORD(v59) = sub_407890(s, 4240911LL);
        v6 = v59;
        if ( !v59 )
          goto LABEL_141;
      }
      else
      {
        byte_60F2F0 = 1;
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
        v22 = "SHA512";
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
            if ( byte_60F2DB )
            {
              LODWORD(v46) = sub_4093D0(0LL, 3LL, s, v17, v15);
              v47 = v46;
              v48 = dcgettext(0LL, "%s: %lu: improperly formatted %s checksum line", 5);
              error(0, 0, v48, v47, v13, "SHA512", v93);
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
        if ( v15 - v18 < qword_60F2E8 + (unsigned __int64)(*v4 == 92) )
          goto LABEL_66;
        v28 = qword_60F2E0 + v18;
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
        v17 = (char *)(unsigned int)dword_60F210;
        v30 = v101 + 1;
        if ( v98 - (v101 + 1) != 1 && ((v31 = v16[v101 + 1], v31 == 32) || v31 == 42) )
        {
          if ( dword_60F210 != 1 )
          {
            dword_60F210 = 0;
            v30 = v101 + 2;
          }
        }
        else
        {
          if ( !dword_60F210 )
            goto LABEL_66;
          dword_60F210 = 1;
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
        if ( !byte_60F2DC )
          v37 = strchr(v32, 10) != 0LL;
        v38 = sub_402AF0(v32, v113, &v109);
        v15 = (unsigned int)v38;
        if ( !(_BYTE)v38 )
        {
          ++v97;
          if ( byte_60F2DC )
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
        if ( byte_60F2DA && v109 )
          goto LABEL_97;
        v17 = (char *)((unsigned __int64)qword_60F2E0 >> 1);
        if ( (unsigned __int64)qword_60F2E0 >> 1 )
        {
          v100 = (unsigned __int64)qword_60F2E0 >> 1;
          v49 = v38;
          v50 = __ctype_tolower_loc();
          v51 = 0LL;
          v15 = v49;
          v17 = (char *)v100;
          v52 = *v50;
          while ( v52[(unsigned __int8)v4[2 * v51]] == byte_40C0A0[(unsigned __int64)(((unsigned __int8)v113[v51] >> 4) & 0xF)]
               && v52[(unsigned __int8)v4[2 * v51 + 1]] == byte_40C0A0[(unsigned __int64)(v113[v51] & 0xF)] )
          {
            if ( v100 == ++v51 )
            {
              v51 = v100;
              goto LABEL_180;
            }
          }
          ++v103;
          if ( byte_60F2DC )
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
        v105 = byte_60F2DC;
        if ( byte_60F2DC )
          goto LABEL_97;
        v105 = byte_60F2D9;
        if ( byte_60F2D9 )
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
        if ( !byte_60F2D9 )
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
          LODWORD(v26) = sub_4093D0(0LL, 3LL, s, v17, v15);
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
        LODWORD(v77) = sub_4093D0(0LL, 3LL, s, v42, v43);
        v78 = v77;
        v79 = dcgettext(0LL, "%s: read error", 5);
        error(0, 0, v79, v78, v93);
        v45 = 0;
        goto LABEL_113;
      }
      if ( !v96 || !(unsigned int)sub_409DB0(v6) )
      {
        if ( v3 )
        {
          if ( byte_60F2DC )
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
          if ( !byte_60F2DA )
          {
LABEL_220:
            if ( v105 )
              goto LABEL_110;
          }
          else if ( v105 )
          {
LABEL_110:
            if ( !(v103 | v97) )
              LOBYTE(v44) = (v5 == 0) | byte_60F2D8 ^ 1;
          }
          else
          {
            LODWORD(v85) = sub_4093D0(0LL, 3LL, s, v42, v43);
            v6 = v85;
            v86 = dcgettext(0LL, "%s: no file was verified", 5);
            error(0, 0, v86, v6, v93);
          }
        }
        else
        {
          LODWORD(v74) = sub_4093D0(0LL, 3LL, s, v42, v43);
          v6 = v74;
          v75 = dcgettext(0LL, "%s: no properly formatted %s checksum lines found", 5);
          error(0, 0, v75, v6, "SHA512", v93);
        }
        v45 = v44 & 1;
        goto LABEL_113;
      }
LABEL_141:
      LODWORD(v60) = sub_4093D0(0LL, 3LL, s, v42, v43);
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
    if ( !byte_60F2F0 || (unsigned int)sub_409DB0(stdin) != -1 )
      return (unsigned __int8)(v104 ^ 1);
    v7 = dcgettext(0LL, "standard input", 5);
    v83 = __errno_location();
    error(1, *v83, v7, v93);
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

  if ( !byte_60F2C8 )
  {
    while ( qword_60F2D0 < (unsigned __int64)(((&unk_60EE48 - (_UNKNOWN *)&qword_60EE40) >> 3) - 1) )
      (*(&qword_60EE40 + ++qword_60F2D0))();
    result = sub_40289B();
    byte_60F2C8 = 1;
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
  v2 = qword_60F2E0;
  if ( qword_60F2E0 )
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
    byte_60F2F0 = 1;
    sub_407860(stdin, 2LL);
    if ( !(unsigned int)sub_407510(v9) )
      return 1;
LABEL_12:
    v12 = 0;
    LODWORD(v21) = sub_4093D0(0LL, 3LL, v4, v10, v11);
    v22 = v21;
    v23 = __errno_location();
    error(0, *v23, "%s", v22);
    if ( stdin != v9 )
      sub_409DB0(v9);
    return v12;
  }
  v14 = a3;
  LODWORD(v15) = sub_407890(v4, 4240911LL);
  v9 = v15;
  if ( v15 )
  {
    sub_407860(v15, 2LL);
    if ( !(unsigned int)sub_407510(v9) )
    {
      if ( (unsigned int)sub_409DB0(v9) )
      {
        v12 = 0;
        LODWORD(v18) = sub_4093D0(0LL, 3LL, v4, v16, v17);
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
  v12 = (unsigned __int8)byte_60F2DA;
  v27 = v24;
  if ( byte_60F2DA && *v24 == 2 )
  {
    *v14 = 1;
  }
  else
  {
    v12 = 0;
    LODWORD(v28) = sub_4093D0(0LL, 3LL, v4, v25, v26);
    error(0, *v27, "%s", v28);
  }
  return v12;
}

noreturn void __fastcall  sub_402C90(int status)
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
  v2 = qword_60F308;
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
  __printf_chk(1LL, v9, "SHA512");
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
    v25 = "sha512sum";
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
    __printf_chk(1LL, v28, &unk_40B5F2);
    v29 = setlocale(5, 0LL);
    if ( !v29 || !strncmp(v29, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v32 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v32, &unk_40B5F2);
    v33 = setlocale(5, 0LL);
    if ( !v33 || !strncmp(v33, "en_", 3uLL) )
    {
      v27 = "sha512sum";
      v34 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v34, "https://www.gnu.org/software/coreutils/");
      goto LABEL_14;
    }
    v27 = "sha512sum";
  }
  v35 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v35, "sha512sum");
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
        LODWORD(v5) = sub_4093A0(qword_60F300, "write error");
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
  __int64 result; // rax@1
  __int64 v3; // rdx@1

  result = a2;
  v3 = 0LL;
  do
  {
    _RCX = *(_QWORD *)(a1 + v3);
    __asm (" bswap   rcx ");
    *(_QWORD *)(a2 + v3) = _RCX;
    v3 += 8LL;
  }
  while ( v3 != 64 );
  return result;
}

__int64 __fastcall sub_403260(__int64 a1, __int64 a2)
{
  __int64 result; // rax@1
  __int64 v3; // rdx@1

  result = a2;
  v3 = 0LL;
  do
  {
    _RCX = *(_QWORD *)(a1 + v3);
    __asm (" bswap   rcx ");
    *(_QWORD *)(a2 + v3) = _RCX;
    v3 += 8LL;
  }
  while ( v3 != 48 );
  return result;
}

__int64 __fastcall sub_403280(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r15@1
  unsigned __int64 v4; // rax@1
  unsigned __int64 v5; // rcx@1
  unsigned __int8 v6; // cf@1
  __int64 v7; // r13@1
  __int64 v8; // rbp@1
  __int64 v9; // r9@1
  __int64 v10; // r8@1
  __int64 v11; // rdi@1
  __int64 v12; // r10@1
  __int64 result; // rax@1
  __int64 v14; // r11@1
  __int64 v15; // rcx@2
  __int64 v16; // r14@2
  __int64 v17; // r9@2
  __int64 v18; // rdx@3
  __int64 v21; // rsi@5
  __int64 v22; // rdx@5
  __int64 v23; // rdx@5
  __int64 v24; // r8@5
  __int64 v25; // rsi@5
  __int64 v26; // rsi@5
  __int64 v27; // rdx@5
  __int64 v28; // r12@5
  __int64 v29; // r8@5
  __int64 v30; // rdx@5
  __int64 v31; // rdx@5
  __int64 v32; // r10@5
  __int64 v33; // rsi@5
  __int64 v34; // r8@5
  __int64 v35; // r10@5
  __int64 v36; // rsi@5
  __int64 v37; // r10@5
  __int64 v38; // r10@5
  __int64 v39; // r11@5
  __int64 v40; // rsi@5
  __int64 v41; // r10@5
  __int64 v42; // r11@5
  __int64 v43; // rbp@5
  __int64 v44; // rsi@5
  __int64 v45; // rsi@5
  __int64 v46; // r9@5
  __int64 v47; // r10@5
  __int64 v48; // r8@5
  __int64 v49; // rbx@5
  __int64 v50; // r10@5
  __int64 v51; // r8@5
  __int64 v52; // r8@5
  __int64 v53; // r9@5
  __int64 v54; // rdi@5
  __int64 v55; // r9@5
  __int64 v56; // r10@5
  __int64 v57; // r11@5
  __int64 v58; // rbx@5
  __int64 v59; // r8@5
  __int64 v60; // r11@5
  __int64 v61; // r8@5
  __int64 v62; // r8@5
  __int64 v63; // r11@5
  __int64 v64; // rcx@5
  __int64 v65; // rax@5
  __int64 v66; // rax@5
  __int64 v67; // r11@5
  __int64 v68; // r11@5
  __int64 v69; // r10@5
  __int64 v70; // r8@5
  __int64 v71; // rax@5
  __int64 v72; // r10@5
  __int64 v73; // rax@5
  __int64 v74; // rax@5
  __int64 v75; // r10@5
  __int64 v76; // rax@5
  __int64 v77; // r8@5
  __int64 v78; // rdx@5
  __int64 v79; // r10@5
  __int64 v80; // r10@5
  __int64 v81; // rax@5
  __int64 v82; // r8@5
  __int64 v83; // rax@5
  __int64 v84; // r8@5
  __int64 v85; // r8@5
  __int64 v86; // rax@5
  __int64 v87; // r9@5
  __int64 v88; // rsi@5
  __int64 v89; // rsi@5
  __int64 v90; // rax@5
  __int64 v91; // rax@5
  __int64 v92; // r8@5
  __int64 v93; // rsi@5
  __int64 v94; // r8@5
  __int64 v95; // rsi@5
  __int64 v96; // rsi@5
  __int64 v97; // r8@5
  __int64 v98; // rdi@5
  __int64 v99; // rbx@5
  __int64 v100; // rdi@5
  __int64 v101; // r8@5
  __int64 v102; // r8@5
  __int64 v103; // rdi@5
  __int64 v104; // rsi@5
  __int64 v105; // rcx@5
  __int64 v106; // rdi@5
  __int64 v107; // rcx@5
  __int64 v108; // rcx@5
  __int64 v109; // rdi@5
  __int64 v110; // rsi@5
  __int64 v111; // r11@5
  __int64 v112; // rsi@5
  __int64 v113; // rdi@5
  __int64 v114; // rdi@5
  __int64 v115; // rcx@5
  __int64 v116; // rsi@5
  __int64 v117; // rdx@5
  __int64 v118; // rsi@5
  __int64 v119; // rdx@5
  __int64 v120; // rdx@5
  __int64 v121; // rsi@5
  __int64 v122; // rcx@5
  __int64 v123; // r10@5
  __int64 v124; // rcx@5
  __int64 v125; // rsi@5
  __int64 v126; // rsi@5
  __int64 v127; // rcx@5
  __int64 v128; // rdx@5
  __int64 v129; // rcx@5
  __int64 v130; // rdx@5
  __int64 v131; // rdx@5
  __int64 v132; // rax@5
  __int64 v133; // rcx@5
  __int64 v134; // r9@5
  __int64 v135; // r9@5
  __int64 v136; // rcx@5
  __int64 v137; // rcx@5
  __int64 v138; // rdx@5
  __int64 v139; // r14@5
  __int64 v140; // r9@5
  __int64 v141; // rdx@5
  __int64 v142; // r9@5
  __int64 v143; // r9@5
  __int64 v144; // rdx@5
  __int64 v145; // rbx@5
  __int64 v146; // r8@5
  __int64 v147; // rdx@5
  __int64 v148; // r13@5
  __int64 v149; // rdx@5
  __int64 v150; // r9@5
  __int64 v151; // r13@5
  __int64 v152; // r9@5
  __int64 v153; // r9@5
  __int64 v154; // r13@5
  __int64 v155; // r11@5
  __int64 v156; // rdi@5
  __int64 v157; // r11@5
  __int64 v158; // r13@5
  __int64 v159; // r13@5
  __int64 v160; // r14@5
  __int64 v161; // r9@5
  __int64 v162; // r14@5
  __int64 v163; // r9@5
  __int64 v164; // r9@5
  __int64 v165; // r14@5
  __int64 v166; // r10@5
  __int64 v167; // rsi@5
  __int64 v168; // r10@5
  __int64 v169; // r14@5
  __int64 v170; // r12@5
  __int64 v171; // r14@5
  __int64 v172; // r9@5
  __int64 v173; // rax@5
  __int64 v174; // r12@5
  __int64 v175; // rax@5
  __int64 v176; // rax@5
  __int64 v177; // r12@5
  __int64 v178; // rcx@5
  __int64 v179; // r9@5
  __int64 v180; // r9@5
  __int64 v181; // r12@5
  __int64 v182; // rbp@5
  __int64 v183; // r12@5
  __int64 v184; // rax@5
  __int64 v185; // rbp@5
  __int64 v186; // rax@5
  __int64 v187; // rax@5
  __int64 v188; // rbp@5
  __int64 v189; // r8@5
  __int64 v190; // rdx@5
  __int64 v191; // r8@5
  __int64 v192; // rbp@5
  __int64 v193; // rbp@5
  __int64 v194; // r8@5
  __int64 v195; // rax@5
  __int64 v196; // r8@5
  __int64 v197; // rax@5
  __int64 v198; // rax@5
  __int64 v199; // r8@5
  __int64 v200; // rdi@5
  __int64 v201; // r13@5
  __int64 v202; // rdi@5
  __int64 v203; // r8@5
  __int64 v204; // r8@5
  __int64 v205; // rax@5
  __int64 v206; // rbx@5
  __int64 v207; // rax@5
  __int64 v208; // rdi@5
  __int64 v209; // r10@5
  __int64 v210; // r11@5
  unsigned __int64 v211; // rbx@5
  __int64 v212; // rdi@5
  __int64 v213; // rax@5
  __int64 v214; // rdi@5
  __int64 v215; // rax@5
  signed __int64 v216; // rax@5
  __int64 v217; // rdi@5
  __int64 v218; // rsi@5
  signed __int64 v219; // r14@5
  __int64 v220; // rsi@5
  __int64 v221; // rdi@5
  signed __int64 v222; // rdi@5
  __int64 v223; // rax@5
  unsigned __int64 v224; // rax@5
  __int64 v225; // rsi@5
  __int64 v226; // r11@5
  unsigned __int64 v227; // r11@5
  __int64 v228; // rsi@5
  __int64 v229; // rax@5
  __int64 v230; // rsi@5
  __int64 v231; // rax@5
  signed __int64 v232; // rax@5
  __int64 v233; // rsi@5
  __int64 v234; // rcx@5
  signed __int64 v235; // r12@5
  __int64 v236; // rcx@5
  __int64 v237; // rsi@5
  __int64 v238; // r10@5
  signed __int64 v239; // rsi@5
  __int64 v240; // rax@5
  unsigned __int64 v241; // rax@5
  __int64 v242; // rcx@5
  __int64 v243; // r10@5
  unsigned __int64 v244; // r10@5
  __int64 v245; // rcx@5
  __int64 v246; // rax@5
  __int64 v247; // rcx@5
  __int64 v248; // rax@5
  signed __int64 v249; // rax@5
  __int64 v250; // rcx@5
  __int64 v251; // rdx@5
  signed __int64 v252; // rbp@5
  __int64 v253; // rdx@5
  __int64 v254; // rcx@5
  signed __int64 v255; // rcx@5
  __int64 v256; // r9@5
  __int64 v257; // rax@5
  unsigned __int64 v258; // rax@5
  __int64 v259; // rdx@5
  __int64 v260; // r9@5
  unsigned __int64 v261; // r9@5
  __int64 v262; // rax@5
  __int64 v263; // rdx@5
  __int64 v264; // rax@5
  __int64 v265; // rdx@5
  signed __int64 v266; // rdx@5
  __int64 v267; // rax@5
  signed __int64 v268; // r8@5
  __int64 v269; // r13@5
  __int64 v270; // r13@5
  __int64 v271; // rax@5
  __int64 v272; // r15@5
  signed __int64 v273; // rax@5
  __int64 v274; // r13@5
  __int64 v275; // rdx@5
  unsigned __int64 v276; // r13@5
  __int64 v277; // rdx@5
  unsigned __int64 v278; // ST40_8@5
  __int64 v279; // rdx@5
  __int64 v280; // r13@5
  __int64 v281; // rdx@5
  __int64 v282; // r13@5
  signed __int64 v283; // r13@5
  __int64 v284; // rdx@5
  __int64 v285; // r14@5
  signed __int64 v286; // rdi@5
  __int64 v287; // r14@5
  __int64 v288; // rdx@5
  signed __int64 v289; // rdx@5
  __int64 v290; // r14@5
  __int64 v291; // r13@5
  unsigned __int64 v292; // r14@5
  __int64 v293; // r13@5
  __int64 v294; // r15@5
  __int64 v295; // r13@5
  unsigned __int64 v296; // ST28_8@5
  __int64 v297; // r14@5
  signed __int64 v298; // r13@5
  __int64 v299; // r12@5
  __int64 v300; // r14@5
  __int64 v301; // r14@5
  __int64 v302; // r12@5
  signed __int64 v303; // r12@5
  __int64 v304; // r14@5
  __int64 v305; // r13@5
  signed __int64 v306; // rsi@5
  __int64 v307; // r13@5
  __int64 v308; // r14@5
  signed __int64 v309; // r14@5
  __int64 v310; // r13@5
  __int64 v311; // r12@5
  __int64 v312; // r13@5
  unsigned __int64 v313; // r13@5
  __int64 v314; // r12@5
  __int64 v315; // r15@5
  unsigned __int64 v316; // ST30_8@5
  signed __int64 v317; // r12@5
  __int64 v318; // r13@5
  __int64 v319; // rbp@5
  __int64 v320; // r15@5
  __int64 v321; // r13@5
  __int64 v322; // rbp@5
  signed __int64 v323; // rbp@5
  __int64 v324; // r13@5
  __int64 v325; // r12@5
  signed __int64 v326; // rcx@5
  __int64 v327; // r13@5
  signed __int64 v328; // r13@5
  __int64 v329; // r15@5
  __int64 v330; // rbp@5
  unsigned __int64 v331; // rbp@5
  __int64 v332; // r12@5
  __int64 v333; // r15@5
  unsigned __int64 v334; // ST00_8@5
  signed __int64 v335; // rbp@5
  __int64 v336; // r15@5
  __int64 v337; // r8@5
  __int64 v338; // r12@5
  __int64 v339; // r15@5
  __int64 v340; // r8@5
  signed __int64 v341; // r8@5
  __int64 v342; // rbp@5
  signed __int64 v343; // rax@5
  __int64 v344; // rbp@5
  __int64 v345; // r15@5
  signed __int64 v346; // r12@5
  __int64 v347; // r8@5
  __int64 v348; // rbp@5
  __int64 v349; // r8@5
  unsigned __int64 v350; // r8@5
  __int64 v351; // r15@5
  __int64 v352; // rbp@5
  unsigned __int64 v353; // ST38_8@5
  __int64 v354; // rbp@5
  signed __int64 v355; // r8@5
  __int64 v356; // rdi@5
  __int64 v357; // rbp@5
  __int64 v358; // rdi@5
  signed __int64 v359; // rdi@5
  __int64 v360; // rbp@5
  __int64 v361; // r8@5
  signed __int64 v362; // rdx@5
  __int64 v363; // r8@5
  __int64 v364; // rbp@5
  signed __int64 v365; // rbp@5
  __int64 v366; // rdi@5
  __int64 v367; // r8@5
  __int64 v368; // rdi@5
  unsigned __int64 v369; // rdi@5
  __int64 v370; // r8@5
  __int64 v371; // r15@5
  unsigned __int64 v372; // ST08_8@5
  __int64 v373; // r8@5
  signed __int64 v374; // rdi@5
  __int64 v375; // rsi@5
  __int64 v376; // r8@5
  __int64 v377; // rsi@5
  signed __int64 v378; // rsi@5
  __int64 v379; // r8@5
  __int64 v380; // rdi@5
  signed __int64 v381; // r14@5
  __int64 v382; // rdi@5
  __int64 v383; // r8@5
  signed __int64 v384; // r8@5
  __int64 v385; // rsi@5
  __int64 v386; // rdi@5
  __int64 v387; // rsi@5
  unsigned __int64 v388; // rsi@5
  __int64 v389; // rdi@5
  __int64 v390; // r15@5
  unsigned __int64 v391; // ST10_8@5
  __int64 v392; // rdi@5
  signed __int64 v393; // rsi@5
  __int64 v394; // rcx@5
  __int64 v395; // rdi@5
  __int64 v396; // rcx@5
  signed __int64 v397; // rcx@5
  __int64 v398; // rdi@5
  __int64 v399; // rsi@5
  signed __int64 v400; // r13@5
  __int64 v401; // rsi@5
  __int64 v402; // rdi@5
  signed __int64 v403; // rdi@5
  __int64 v404; // rcx@5
  __int64 v405; // rsi@5
  __int64 v406; // rcx@5
  unsigned __int64 v407; // rcx@5
  __int64 v408; // rsi@5
  __int64 v409; // r15@5
  __int64 v410; // rsi@5
  unsigned __int64 v411; // ST48_8@5
  __int64 v412; // r15@5
  signed __int64 v413; // rsi@5
  __int64 v414; // rax@5
  __int64 v415; // rcx@5
  __int64 v416; // rax@5
  __int64 v417; // rax@5
  __int64 v418; // rcx@5
  signed __int64 v419; // rcx@5
  __int64 v420; // rax@5
  signed __int64 v421; // r12@5
  __int64 v422; // rsi@5
  __int64 v423; // rax@5
  signed __int64 v424; // rax@5
  __int64 v425; // rcx@5
  __int64 v426; // rsi@5
  __int64 v427; // rcx@5
  __int64 v428; // rcx@5
  __int64 v429; // rsi@5
  __int64 v430; // r15@5
  unsigned __int64 v431; // ST18_8@5
  __int64 v432; // rsi@5
  signed __int64 v433; // rcx@5
  __int64 v434; // rdx@5
  __int64 v435; // rsi@5
  __int64 v436; // rdx@5
  signed __int64 v437; // rdx@5
  __int64 v438; // rcx@5
  signed __int64 v439; // rbp@5
  __int64 v440; // rsi@5
  __int64 v441; // rcx@5
  __int64 v442; // rcx@5
  __int64 v443; // rsi@5
  signed __int64 v444; // rsi@5
  __int64 v445; // rdx@5
  __int64 v446; // rcx@5
  __int64 v447; // rdx@5
  unsigned __int64 v448; // rdx@5
  __int64 v449; // rcx@5
  __int64 v450; // r15@5
  unsigned __int64 v451; // ST20_8@5
  __int64 v452; // rdx@5
  __int64 v453; // rcx@5
  __int64 v454; // rcx@5
  __int64 v455; // rdx@5
  signed __int64 v456; // rdx@5
  __int64 v457; // r14@5
  signed __int64 v458; // r8@5
  __int64 v459; // rcx@5
  __int64 v460; // r14@5
  __int64 v461; // r14@5
  __int64 v462; // rcx@5
  signed __int64 v463; // rcx@5
  __int64 v464; // rdx@5
  __int64 v465; // r14@5
  __int64 v466; // rdx@5
  unsigned __int64 v467; // rdx@5
  __int64 v468; // r14@5
  __int64 v469; // r15@5
  unsigned __int64 v470; // ST58_8@5
  __int64 v471; // rdx@5
  __int64 v472; // r14@5
  __int64 v473; // rdx@5
  __int64 v474; // rdx@5
  __int64 v475; // r14@5
  signed __int64 v476; // r14@5
  __int64 v477; // rdx@5
  signed __int64 v478; // r13@5
  __int64 v479; // rdi@5
  __int64 v480; // rdi@5
  __int64 v481; // rdx@5
  signed __int64 v482; // rdx@5
  __int64 v483; // rdi@5
  signed __int64 v484; // rdx@5
  __int64 v485; // r14@5
  __int64 v486; // rdi@5
  __int64 v487; // rdi@5
  __int64 v488; // r14@5
  __int64 v489; // r15@5
  unsigned __int64 v490; // ST50_8@5
  signed __int64 v491; // rdi@5
  __int64 v492; // r12@5
  __int64 v493; // r14@5
  __int64 v494; // r12@5
  __int64 v495; // r12@5
  __int64 v496; // r14@5
  signed __int64 v497; // r12@5
  signed __int64 v498; // rdi@5
  __int64 v499; // rax@5
  __int64 v500; // r14@5
  __int64 v501; // rax@5
  __int64 v502; // rax@5
  __int64 v503; // r14@5
  signed __int64 v504; // r14@5
  __int64 v505; // rax@5
  signed __int64 v506; // r12@5
  __int64 v507; // r14@5
  __int64 v508; // rax@5
  unsigned __int64 v509; // rbx@5
  __int64 v510; // r14@5
  __int64 v511; // rax@5
  unsigned __int64 v512; // r15@5
  __int64 v513; // rbx@5
  __int64 v514; // rax@5
  __int64 v515; // rax@5
  __int64 v516; // rbx@5
  signed __int64 v517; // rax@5
  __int64 v518; // rbx@5
  __int64 v519; // rbp@5
  signed __int64 v520; // rsi@5
  __int64 v521; // rbx@5
  __int64 v522; // rbp@5
  signed __int64 v523; // rbx@5
  __int64 v524; // rbp@5
  __int64 v525; // rax@5
  unsigned __int64 v526; // r11@5
  __int64 v527; // rbp@5
  __int64 v528; // rax@5
  unsigned __int64 v529; // r14@5
  __int64 v530; // r11@5
  __int64 v531; // rax@5
  __int64 v532; // rax@5
  __int64 v533; // r11@5
  signed __int64 v534; // rax@5
  __int64 v535; // r11@5
  __int64 v536; // r8@5
  signed __int64 v537; // rcx@5
  __int64 v538; // r8@5
  __int64 v539; // r11@5
  signed __int64 v540; // r8@5
  __int64 v541; // r11@5
  __int64 v542; // rax@5
  __int64 v543; // rbp@5
  unsigned __int64 v544; // r10@5
  __int64 v545; // r11@5
  __int64 v546; // rax@5
  unsigned __int64 v547; // ST60_8@5
  __int64 v548; // r10@5
  __int64 v549; // rax@5
  __int64 v550; // rax@5
  __int64 v551; // r10@5
  __int64 v552; // rax@5
  __int64 v553; // r10@5
  signed __int64 v554; // rax@5
  unsigned __int64 v555; // r13@5
  __int64 v556; // r11@5
  signed __int64 v557; // rdx@5
  __int64 v558; // r10@5
  signed __int64 v559; // r10@5
  __int64 v560; // r11@5
  __int64 v561; // rax@5
  unsigned __int64 v562; // r9@5
  __int64 v563; // rax@5
  __int64 v564; // r11@5
  __int64 v565; // rax@5
  unsigned __int64 v566; // rbp@5
  unsigned __int64 v567; // ST40_8@5
  __int64 v568; // r9@5
  __int64 v569; // rax@5
  __int64 v570; // rax@5
  __int64 v571; // r9@5
  signed __int64 v572; // rax@5
  __int64 v573; // rdi@5
  signed __int64 v574; // r9@5
  unsigned __int64 v575; // r12@5
  __int64 v576; // r11@5
  __int64 v577; // rdi@5
  __int64 v578; // rdi@5
  __int64 v579; // r11@5
  signed __int64 v580; // rdi@5
  __int64 v581; // r11@5
  __int64 v582; // rax@5
  unsigned __int64 v583; // rax@5
  __int64 v584; // rbp@5
  __int64 v585; // r11@5
  unsigned __int64 v586; // r13@5
  signed __int64 v587; // r11@5
  unsigned __int64 v588; // ST28_8@5
  unsigned __int64 v589; // r13@5
  signed __int64 v590; // rsi@5
  __int64 v591; // r11@5
  __int64 v592; // rax@5
  __int64 v593; // rax@5
  __int64 v594; // r11@5
  signed __int64 v595; // rax@5
  __int64 v596; // r11@5
  __int64 v597; // rsi@5
  signed __int64 v598; // rbx@5
  __int64 v599; // rsi@5
  __int64 v600; // r11@5
  signed __int64 v601; // rsi@5
  __int64 v602; // r11@5
  __int64 v603; // rax@5
  unsigned __int64 v604; // rax@5
  __int64 v605; // r11@5
  __int64 v606; // rbp@5
  __int64 v607; // r11@5
  unsigned __int64 v608; // rax@5
  unsigned __int64 v609; // ST30_8@5
  signed __int64 v610; // rcx@5
  __int64 v611; // r11@5
  __int64 v612; // rax@5
  __int64 v613; // rax@5
  __int64 v614; // r11@5
  signed __int64 v615; // rax@5
  __int64 v616; // rcx@5
  signed __int64 v617; // r11@5
  __int64 v618; // r8@5
  __int64 v619; // rcx@5
  __int64 v620; // rcx@5
  __int64 v621; // r8@5
  signed __int64 v622; // rcx@5
  __int64 v623; // rax@5
  __int64 v624; // r12@5
  __int64 v625; // r8@5
  unsigned __int64 v626; // r12@5
  __int64 v627; // rax@5
  unsigned __int64 v628; // r13@5
  unsigned __int64 v629; // ST68_8@5
  signed __int64 v630; // r8@5
  unsigned __int64 v631; // r13@5
  signed __int64 v632; // rdx@5
  __int64 v633; // r8@5
  __int64 v634; // rax@5
  __int64 v635; // r12@5
  __int64 v636; // rax@5
  __int64 v637; // r8@5
  signed __int64 v638; // rax@5
  __int64 v639; // rdx@5
  signed __int64 v640; // r10@5
  __int64 v641; // r8@5
  __int64 v642; // rdx@5
  __int64 v643; // rdx@5
  __int64 v644; // r8@5
  __int64 v645; // rbp@5
  signed __int64 v646; // rdx@5
  __int64 v647; // r8@5
  __int64 v648; // rax@5
  unsigned __int64 v649; // rax@5
  unsigned __int64 v650; // ST38_8@5
  __int64 v651; // r12@5
  signed __int64 v652; // r9@5
  __int64 v653; // rax@5
  __int64 v654; // r8@5
  __int64 v655; // rax@5
  signed __int64 v656; // rax@5
  __int64 v657; // r12@5
  signed __int64 v658; // r9@5
  __int64 v659; // rdi@5
  __int64 v660; // r8@5
  __int64 v661; // rdi@5
  signed __int64 v662; // r12@5
  __int64 v663; // rax@5
  __int64 v664; // rbp@5
  unsigned __int64 v665; // rbp@5
  __int64 v666; // rdi@5
  __int64 v667; // rax@5
  unsigned __int64 v668; // r13@5
  unsigned __int64 v669; // ST00_8@5
  __int64 v670; // rdi@5
  __int64 v671; // rax@5
  __int64 v672; // rax@5
  __int64 v673; // rdi@5
  signed __int64 v674; // rax@5
  __int64 v675; // rdi@5
  signed __int64 v676; // rbx@5
  __int64 v677; // rsi@5
  __int64 v678; // rdi@5
  __int64 v679; // rsi@5
  signed __int64 v680; // rbp@5
  __int64 v681; // r8@5
  __int64 v682; // rax@5
  __int64 v683; // r8@5
  __int64 v684; // rsi@5
  unsigned __int64 v685; // r8@5
  __int64 v686; // rax@5
  unsigned __int64 v687; // rax@5
  unsigned __int64 v688; // rdi@5
  unsigned __int64 v689; // ST70_8@5
  __int64 v690; // rax@5
  __int64 v691; // rsi@5
  __int64 v692; // rax@5
  __int64 v693; // rax@5
  __int64 v694; // rsi@5
  signed __int64 v695; // rax@5
  __int64 v696; // rsi@5
  signed __int64 v697; // r11@5
  __int64 v698; // rcx@5
  __int64 v699; // rsi@5
  __int64 v700; // rcx@5
  __int64 v701; // rdi@5
  signed __int64 v702; // r13@5
  __int64 v703; // rax@5
  __int64 v704; // rcx@5
  unsigned __int64 v705; // rdi@5
  __int64 v706; // rax@5
  unsigned __int64 v707; // rax@5
  unsigned __int64 v708; // ST10_8@5
  signed __int64 v709; // r10@5
  __int64 v710; // rax@5
  __int64 v711; // rcx@5
  __int64 v712; // rax@5
  __int64 v713; // rax@5
  __int64 v714; // rcx@5
  signed __int64 v715; // rax@5
  __int64 v716; // r10@5
  signed __int64 v717; // rdx@5
  __int64 v718; // rsi@5
  __int64 v719; // r10@5
  __int64 v720; // rcx@5
  __int64 v721; // r10@5
  signed __int64 v722; // r10@5
  __int64 v723; // rax@5
  __int64 v724; // rsi@5
  unsigned __int64 v725; // rsi@5
  __int64 v726; // rcx@5
  __int64 v727; // rax@5
  unsigned __int64 v728; // ST48_8@5
  signed __int64 v729; // rdi@5
  __int64 v730; // r9@5
  __int64 v731; // rcx@5
  __int64 v732; // r9@5
  __int64 v733; // rax@5
  __int64 v734; // r9@5
  __int64 v735; // rax@5
  __int64 v736; // r9@5
  signed __int64 v737; // rax@5
  __int64 v738; // rcx@5
  signed __int64 v739; // r12@5
  __int64 v740; // r9@5
  __int64 v741; // rsi@5
  __int64 v742; // r9@5
  signed __int64 v743; // r8@5
  __int64 v744; // rsi@5
  __int64 v745; // rax@5
  __int64 v746; // rsi@5
  unsigned __int64 v747; // rsi@5
  __int64 v748; // rax@5
  __int64 v749; // rcx@5
  __int64 v750; // rax@5
  unsigned __int64 v751; // rdi@5
  unsigned __int64 v752; // ST78_8@5
  signed __int64 v753; // rsi@5
  unsigned __int64 v754; // rbx@5
  __int64 v755; // rax@5
  __int64 v756; // rcx@5
  __int64 v757; // rax@5
  __int64 v758; // rax@5
  __int64 v759; // rcx@5
  signed __int64 v760; // rax@5
  __int64 v761; // rcx@5
  __int64 v762; // rsi@5
  signed __int64 v763; // rbp@5
  __int64 v764; // rcx@5
  __int64 v765; // rsi@5
  __int64 v766; // rdi@5
  signed __int64 v767; // r9@5
  __int64 v768; // rax@5
  __int64 v769; // rsi@5
  unsigned __int64 v770; // rcx@5
  __int64 v771; // rax@5
  unsigned __int64 v772; // ST58_8@5
  signed __int64 v773; // rcx@5
  __int64 v774; // r11@5
  __int64 v775; // rax@5
  __int64 v776; // rsi@5
  __int64 v777; // rax@5
  signed __int64 v778; // rax@5
  signed __int64 v779; // r13@5
  __int64 v780; // r11@5
  __int64 v781; // rcx@5
  __int64 v782; // rdi@5
  __int64 v783; // rcx@5
  signed __int64 v784; // rdi@5
  __int64 v785; // rcx@5
  __int64 v786; // rax@5
  unsigned __int64 v787; // rax@5
  __int64 v788; // rsi@5
  __int64 v789; // rcx@5
  unsigned __int64 v790; // rax@5
  unsigned __int64 v791; // rbx@5
  unsigned __int64 v792; // STC8_8@5
  signed __int64 v793; // rdx@5
  __int64 v794; // rax@5
  __int64 v795; // rcx@5
  __int64 v796; // rax@5
  __int64 v797; // rax@5
  __int64 v798; // rcx@5
  signed __int64 v799; // rax@5
  __int64 v800; // rdx@5
  signed __int64 v801; // r10@5
  __int64 v802; // rcx@5
  __int64 v803; // rdx@5
  __int64 v804; // rdx@5
  __int64 v805; // rcx@5
  signed __int64 v806; // rdx@5
  __int64 v807; // rax@5
  __int64 v808; // rcx@5
  __int64 v809; // rax@5
  unsigned __int64 v810; // rax@5
  __int64 v811; // rcx@5
  __int64 v812; // rsi@5
  __int64 v813; // rcx@5
  unsigned __int64 v814; // r11@5
  unsigned __int64 v815; // ST50_8@5
  __int64 v816; // rcx@5
  __int64 v817; // rax@5
  __int64 v818; // rax@5
  __int64 v819; // rcx@5
  __int64 v820; // rax@5
  __int64 v821; // rcx@5
  signed __int64 v822; // rax@5
  __int64 v823; // rsi@5
  signed __int64 v824; // r8@5
  __int64 v825; // rcx@5
  __int64 v826; // rcx@5
  __int64 v827; // rsi@5
  __int64 v828; // r11@5
  signed __int64 v829; // rcx@5
  __int64 v830; // rax@5
  __int64 v831; // rsi@5
  __int64 v832; // rax@5
  unsigned __int64 v833; // rax@5
  __int64 v834; // rsi@5
  unsigned __int64 v835; // r12@5
  unsigned __int64 v836; // r15@5
  __int64 v837; // rax@5
  __int64 v838; // rsi@5
  __int64 v839; // rax@5
  __int64 v840; // rax@5
  __int64 v841; // rsi@5
  __int64 v842; // rax@5
  __int64 v843; // rsi@5
  signed __int64 v844; // rax@5
  __int64 v845; // r11@5
  __int64 v846; // rbp@5
  signed __int64 v847; // r9@5
  __int64 v848; // rsi@5
  signed __int64 v849; // rsi@5
  __int64 v850; // r11@5
  __int64 v851; // rax@5
  unsigned __int64 v852; // rax@5
  __int64 v853; // rbx@5
  unsigned __int64 v854; // r14@5
  __int64 v855; // r11@5
  unsigned __int64 v856; // rax@5
  unsigned __int64 v857; // ST60_8@5
  signed __int64 v858; // r13@5
  __int64 v859; // rax@5
  __int64 v860; // r11@5
  __int64 v861; // rax@5
  __int64 v862; // rax@5
  __int64 v863; // r11@5
  signed __int64 v864; // rax@5
  __int64 v865; // r11@5
  __int64 v866; // r13@5
  signed __int64 v867; // rdi@5
  __int64 v868; // r11@5
  __int64 v869; // r13@5
  signed __int64 v870; // rbx@5
  __int64 v871; // r11@5
  __int64 v872; // rax@5
  __int64 v873; // r13@5
  __int64 v874; // rbp@5
  __int64 v875; // r13@5
  unsigned __int64 v876; // r13@5
  unsigned __int64 v877; // ST40_8@5
  __int64 v878; // rax@5
  __int64 v879; // r11@5
  __int64 v880; // rax@5
  __int64 v881; // rax@5
  __int64 v882; // r11@5
  signed __int64 v883; // rax@5
  __int64 v884; // r10@5
  signed __int64 v885; // rdx@5
  __int64 v886; // r11@5
  __int64 v887; // r10@5
  __int64 v888; // r10@5
  __int64 v889; // r11@5
  __int64 v890; // rbp@5
  signed __int64 v891; // r10@5
  __int64 v892; // r11@5
  __int64 v893; // rax@5
  unsigned __int64 v894; // rax@5
  __int64 v895; // r11@5
  unsigned __int64 v896; // rax@5
  unsigned __int64 v897; // r13@5
  signed __int64 v898; // r8@5
  __int64 v899; // rax@5
  __int64 v900; // r11@5
  __int64 v901; // rax@5
  __int64 v902; // rax@5
  __int64 v903; // r11@5
  signed __int64 v904; // rax@5
  __int64 v905; // r8@5
  signed __int64 v906; // rcx@5
  __int64 v907; // r11@5
  __int64 v908; // r8@5
  __int64 v909; // r8@5
  __int64 v910; // r11@5
  signed __int64 v911; // r8@5
  __int64 v912; // r11@5
  __int64 v913; // rax@5
  unsigned __int64 v914; // r11@5
  __int64 v915; // r12@5
  __int64 v916; // rax@5
  unsigned __int64 v917; // r12@5
  signed __int64 v918; // r11@5
  unsigned __int64 v919; // ST80_8@5
  unsigned __int64 v920; // r12@5
  signed __int64 v921; // r9@5
  __int64 v922; // rax@5
  __int64 v923; // r11@5
  __int64 v924; // rax@5
  __int64 v925; // rax@5
  __int64 v926; // r11@5
  signed __int64 v927; // rax@5
  __int64 v928; // r9@5
  signed __int64 v929; // rsi@5
  __int64 v930; // r11@5
  __int64 v931; // r9@5
  __int64 v932; // r9@5
  __int64 v933; // r11@5
  signed __int64 v934; // r9@5
  __int64 v935; // r11@5
  __int64 v936; // rax@5
  unsigned __int64 v937; // r11@5
  unsigned __int64 v938; // rax@5
  unsigned __int64 v939; // rbp@5
  unsigned __int64 v940; // r13@5
  unsigned __int64 v941; // ST68_8@5
  unsigned __int64 v942; // rax@5
  unsigned __int64 v943; // r13@5
  signed __int64 v944; // rdi@5
  __int64 v945; // rax@5
  __int64 v946; // r11@5
  __int64 v947; // rax@5
  __int64 v948; // rax@5
  __int64 v949; // r11@5
  signed __int64 v950; // rax@5
  __int64 v951; // rdi@5
  signed __int64 v952; // rbx@5
  __int64 v953; // r11@5
  __int64 v954; // rdi@5
  __int64 v955; // rdi@5
  __int64 v956; // r11@5
  signed __int64 v957; // rdi@5
  __int64 v958; // r11@5
  __int64 v959; // rax@5
  unsigned __int64 v960; // rax@5
  __int64 v961; // r12@5
  __int64 v962; // r11@5
  unsigned __int64 v963; // rbp@5
  unsigned __int64 v964; // ST08_8@5
  __int64 v965; // r11@5
  __int64 v966; // rax@5
  __int64 v967; // rax@5
  __int64 v968; // r11@5
  signed __int64 v969; // rax@5
  __int64 v970; // rdx@5
  signed __int64 v971; // r10@5
  __int64 v972; // r11@5
  __int64 v973; // rdx@5
  __int64 v974; // rdx@5
  __int64 v975; // r11@5
  signed __int64 v976; // rdx@5
  __int64 v977; // r11@5
  __int64 v978; // rax@5
  unsigned __int64 v979; // rax@5
  __int64 v980; // r11@5
  unsigned __int64 v981; // r14@5
  unsigned __int64 v982; // ST38_8@5
  unsigned __int64 v983; // r13@5
  __int64 v984; // rax@5
  __int64 v985; // r11@5
  __int64 v986; // rax@5
  __int64 v987; // rax@5
  __int64 v988; // r11@5
  signed __int64 v989; // rax@5
  __int64 v990; // rcx@5
  signed __int64 v991; // r8@5
  __int64 v992; // r11@5
  __int64 v993; // rcx@5
  __int64 v994; // rcx@5
  __int64 v995; // r11@5
  unsigned __int64 v996; // r14@5
  unsigned __int64 v997; // ST70_8@5
  signed __int64 v998; // r12@5
  __int64 v999; // rcx@5
  __int64 v1000; // rax@5
  __int64 v1001; // r11@5
  unsigned __int64 v1002; // rcx@5
  __int64 v1003; // rax@5
  __int64 v1004; // rax@5
  unsigned __int64 v1005; // r11@5
  unsigned __int64 v1006; // rbp@5
  unsigned __int64 v1007; // r11@5
  unsigned __int64 v1008; // ST00_8@5
  __int64 v1009; // rcx@5
  __int64 v1010; // rax@5
  __int64 v1011; // rcx@5
  __int64 v1012; // rax@5
  signed __int64 v1013; // rax@5
  __int64 v1014; // rcx@5
  __int64 v1015; // rsi@5
  signed __int64 v1016; // r9@5
  __int64 v1017; // rsi@5
  __int64 v1018; // rcx@5
  signed __int64 v1019; // rcx@5
  __int64 v1020; // rsi@5
  __int64 v1021; // rax@5
  __int64 v1022; // r11@5
  unsigned __int64 v1023; // rsi@5
  __int64 v1024; // r14@5
  __int64 v1025; // rax@5
  unsigned __int64 v1026; // r13@5
  unsigned __int64 v1027; // ST10_8@5
  __int64 v1028; // rsi@5
  __int64 v1029; // rax@5
  __int64 v1030; // rsi@5
  __int64 v1031; // r11@5
  __int64 v1032; // rsi@5
  __int64 v1033; // r11@5
  __int64 v1034; // rax@5
  __int64 v1035; // rsi@5
  __int64 v1036; // rax@5
  __int64 v1037; // r11@5
  signed __int64 v1038; // rax@5
  __int64 v1039; // rsi@5
  signed __int64 v1040; // rdi@5
  signed __int64 v1041; // r11@5
  __int64 v1042; // rsi@5
  __int64 v1043; // rax@5
  unsigned __int64 v1044; // rsi@5
  __int64 v1045; // rbx@5
  __int64 v1046; // rax@5
  unsigned __int64 v1047; // rsi@5
  unsigned __int64 v1048; // ST18_8@5
  signed __int64 v1049; // rsi@5
  __int64 v1050; // r10@5
  __int64 v1051; // rax@5
  __int64 v1052; // r10@5
  __int64 v1053; // r10@5
  __int64 v1054; // rax@5
  signed __int64 v1055; // rax@5
  __int64 v1056; // r10@5
  signed __int64 v1057; // rdx@5
  __int64 v1058; // rsi@5
  __int64 v1059; // rsi@5
  __int64 v1060; // r10@5
  signed __int64 v1061; // r10@5
  __int64 v1062; // rsi@5
  __int64 v1063; // rax@5
  unsigned __int64 v1064; // rsi@5
  __int64 v1065; // rbx@5
  __int64 v1066; // rax@5
  unsigned __int64 v1067; // rbp@5
  unsigned __int64 v1068; // ST20_8@5
  __int64 v1069; // rax@5
  __int64 v1070; // rsi@5
  __int64 v1071; // rax@5
  __int64 v1072; // rbx@5
  __int64 v1073; // rax@5
  __int64 v1074; // rsi@5
  __int64 v1075; // rax@5
  __int64 v1076; // rsi@5
  __int64 v1077; // rbx@5
  signed __int64 v1078; // rsi@5
  __int64 v1079; // rax@5
  signed __int64 v1080; // r8@5
  __int64 v1081; // rbp@5
  __int64 v1082; // rax@5
  unsigned __int64 v1083; // r12@5
  signed __int64 v1084; // rbx@5
  __int64 v1085; // rsi@5
  __int64 v1086; // rax@5
  unsigned __int64 v1087; // rax@5
  __int64 v1088; // rsi@5
  __int64 v1089; // rbp@5
  __int64 v1090; // rsi@5
  unsigned __int64 v1091; // rax@5
  unsigned __int64 v1092; // ST48_8@5
  signed __int64 v1093; // r9@5
  __int64 v1094; // rax@5
  __int64 v1095; // rsi@5
  __int64 v1096; // r13@5
  __int64 v1097; // rax@5
  signed __int64 v1098; // rax@5
  __int64 v1099; // r9@5
  signed __int64 v1100; // rcx@5
  __int64 v1101; // r13@5
  __int64 v1102; // r9@5
  __int64 v1103; // rsi@5
  __int64 v1104; // r9@5
  signed __int64 v1105; // r13@5
  __int64 v1106; // rsi@5
  __int64 v1107; // rax@5
  unsigned __int64 v1108; // rax@5
  __int64 v1109; // r9@5
  __int64 v1110; // rsi@5
  unsigned __int64 v1111; // rax@5
  unsigned __int64 v1112; // ST28_8@5
  signed __int64 v1113; // rdi@5
  __int64 v1114; // rsi@5
  __int64 v1115; // rax@5
  __int64 v1116; // r14@5
  __int64 v1117; // rax@5
  signed __int64 v1118; // rax@5
  __int64 v1119; // rdi@5
  signed __int64 v1120; // r11@5
  __int64 v1121; // r14@5
  __int64 v1122; // rdi@5
  __int64 v1123; // rsi@5
  __int64 v1124; // rdi@5
  signed __int64 v1125; // r14@5
  __int64 v1126; // rsi@5
  __int64 v1127; // rax@5
  unsigned __int64 v1128; // rax@5
  __int64 v1129; // rdi@5
  __int64 v1130; // rsi@5
  unsigned __int64 v1131; // rbp@5
  unsigned __int64 v1132; // ST50_8@5
  __int64 v1133; // rdi@5
  signed __int64 v1134; // rsi@5
  __int64 v1135; // rax@5
  __int64 v1136; // rdx@5
  __int64 v1137; // rdx@5
  __int64 v1138; // rax@5
  __int64 v1139; // rax@5
  __int64 v1140; // rdx@5
  signed __int64 v1141; // rax@5
  __int64 v1142; // rdi@5
  signed __int64 v1143; // rsi@5
  __int64 v1144; // rdx@5
  signed __int64 v1145; // rdx@5
  __int64 v1146; // rax@5
  __int64 v1147; // rdi@5
  __int64 v1148; // rax@5
  unsigned __int64 v1149; // rax@5
  __int64 v1150; // r9@5
  __int64 v1151; // rdi@5
  unsigned __int64 v1152; // ST30_8@5
  __int64 v1153; // rdi@5
  signed __int64 v1154; // rax@5
  __int64 v1155; // r8@5
  __int64 v1156; // r9@5
  __int64 v1157; // rdi@5
  __int64 v1158; // r8@5
  __int64 v1159; // r8@5
  __int64 v1160; // rdi@5
  signed __int64 v1161; // r8@5
  __int64 v1162; // r9@5
  signed __int64 v1163; // rax@5
  __int64 v1164; // rdi@5
  signed __int64 v1165; // rdi@5
  __int64 v1166; // r9@5
  __int64 v1167; // r8@5
  unsigned __int64 v1168; // r15@5
  __int64 v1169; // r8@5
  __int64 v1170; // r9@5
  __int64 v1171; // r8@5
  unsigned __int64 v1172; // ST58_8@5
  __int64 v1173; // r8@5
  __int64 v1174; // rcx@5
  __int64 v1175; // r10@5
  __int64 v1176; // r10@5
  __int64 v1177; // rcx@5
  __int64 v1178; // rcx@5
  __int64 v1179; // r10@5
  __int64 v1180; // r8@5
  __int64 v1181; // r13@5
  __int64 v1182; // r8@5
  __int64 v1183; // r10@5
  __int64 v1184; // r10@5
  __int64 v1185; // r12@5
  __int64 v1186; // rcx@5
  __int64 v1187; // r9@5
  unsigned __int64 v1188; // rcx@5
  __int64 v1189; // r8@5
  __int64 v1190; // r12@5
  __int64 v1191; // rcx@5
  __int64 v1192; // r9@5
  __int64 v1193; // rcx@5
  __int64 v1194; // rcx@5
  __int64 v1195; // r11@5
  __int64 v1196; // r14@5
  __int64 v1197; // r9@5
  __int64 v1198; // r11@5
  __int64 v1199; // r8@5
  __int64 v1200; // r11@5
  __int64 v1201; // r8@5
  __int64 v1202; // rbp@5
  __int64 v1203; // r11@5
  __int64 v1204; // r9@5
  __int64 v1205; // rbx@5
  __int64 v1206; // rcx@5
  unsigned __int64 v1207; // rbp@5
  __int64 v1208; // r11@5
  __int64 v1209; // rcx@5
  __int64 v1210; // r8@5
  __int64 v1211; // rcx@5
  signed __int64 v1212; // rcx@5
  signed __int64 v1213; // rdx@5
  __int64 v1214; // r11@5
  __int64 v1215; // r8@5
  __int64 v1216; // r11@5
  __int64 v1217; // rsi@5
  __int64 v1218; // r11@5
  __int64 v1219; // r8@5
  __int64 v1220; // r11@5
  signed __int64 v1221; // r8@5
  __int64 v1222; // rsi@5
  __int64 v1223; // rcx@5
  unsigned __int64 v1224; // r11@5
  __int64 v1225; // rcx@5
  __int64 v1226; // rsi@5
  __int64 v1227; // r11@5
  __int64 v1228; // rcx@5
  __int64 v1229; // rax@5
  __int64 v1230; // rcx@5
  __int64 v1231; // r11@5
  __int64 v1232; // rcx@5
  __int64 v1233; // rax@5
  __int64 v1234; // r11@5
  __int64 v1235; // rcx@5
  __int64 v1236; // rsi@5
  __int64 v1237; // rdi@5
  __int64 v1238; // r11@5
  __int64 v1239; // rax@5
  __int64 v1240; // r11@5
  __int64 v1241; // rcx@5
  __int64 v1242; // rsi@5
  unsigned __int64 v1243; // rcx@5
  __int64 v1244; // r11@5
  unsigned __int64 v1245; // r11@5
  __int64 v1246; // rsi@5
  __int64 v1247; // rcx@5
  __int64 v1248; // rsi@5
  __int64 v1249; // rcx@5
  signed __int64 v1250; // rcx@5
  __int64 v1251; // rsi@5
  __int64 v1252; // r13@5
  signed __int64 v1253; // r10@5
  __int64 v1254; // r13@5
  __int64 v1255; // rsi@5
  signed __int64 v1256; // rsi@5
  __int64 v1257; // r13@5
  __int64 v1258; // rcx@5
  __int64 v1259; // r15@5
  unsigned __int64 v1260; // rcx@5
  __int64 v1261; // r13@5
  unsigned __int64 v1262; // ST38_8@5
  __int64 v1263; // rcx@5
  __int64 v1264; // r13@5
  __int64 v1265; // rcx@5
  __int64 v1266; // rcx@5
  __int64 v1267; // r13@5
  signed __int64 v1268; // r13@5
  __int64 v1269; // rcx@5
  __int64 v1270; // r14@5
  signed __int64 v1271; // r9@5
  __int64 v1272; // r14@5
  __int64 v1273; // rcx@5
  signed __int64 v1274; // rcx@5
  __int64 v1275; // r14@5
  __int64 v1276; // r13@5
  __int64 v1277; // r15@5
  unsigned __int64 v1278; // r13@5
  __int64 v1279; // r14@5
  unsigned __int64 v1280; // r13@5
  unsigned __int64 v1281; // ST08_8@5
  __int64 v1282; // r15@5
  signed __int64 v1283; // r14@5
  __int64 v1284; // rdx@5
  __int64 v1285; // r13@5
  __int64 v1286; // rdx@5
  __int64 v1287; // rdx@5
  __int64 v1288; // r13@5
  signed __int64 v1289; // r13@5
  __int64 v1290; // rdx@5
  __int64 v1291; // r14@5
  signed __int64 v1292; // r8@5
  __int64 v1293; // rdx@5
  signed __int64 v1294; // rdx@5
  __int64 v1295; // r14@5
  __int64 v1296; // r13@5
  unsigned __int64 v1297; // r13@5
  __int64 v1298; // r14@5
  __int64 v1299; // r15@5
  unsigned __int64 v1300; // r13@5
  unsigned __int64 v1301; // ST40_8@5
  __int64 v1302; // r15@5
  signed __int64 v1303; // rdi@5
  __int64 v1304; // r13@5
  __int64 v1305; // r14@5
  __int64 v1306; // r13@5
  signed __int64 v1307; // r13@5
  __int64 v1308; // r15@5
  signed __int64 v1309; // rdi@5
  __int64 v1310; // rax@5
  __int64 v1311; // r14@5
  __int64 v1312; // rax@5
  signed __int64 v1313; // r13@5
  __int64 v1314; // r14@5
  __int64 v1315; // rax@5
  __int64 v1316; // r12@5
  __int64 v1317; // r15@5
  __int64 v1318; // rax@5
  __int64 v1319; // r12@5
  __int64 v1320; // r10@5
  __int64 v1321; // rax@5
  __int64 v1322; // r10@5
  __int64 v1323; // r10@5
  __int64 v1324; // rax@5
  __int64 v1325; // rax@5
  __int64 v1326; // r10@5
  __int64 v1327; // r12@5
  __int64 v1328; // rsi@5
  __int64 v1329; // r12@5
  __int64 v1330; // r10@5
  __int64 v1331; // r10@5
  __int64 v1332; // r12@5
  __int64 v1333; // rax@5
  unsigned __int64 v1334; // rax@5
  __int64 v1335; // r12@5
  __int64 v1336; // rbp@5
  unsigned __int64 v1337; // rbp@5
  signed __int64 v1338; // r12@5
  __int64 v1339; // r9@5
  __int64 v1340; // rax@5
  __int64 v1341; // r9@5
  __int64 v1342; // r9@5
  __int64 v1343; // rax@5
  signed __int64 v1344; // rax@5
  __int64 v1345; // r9@5
  __int64 v1346; // r12@5
  signed __int64 v1347; // rcx@5
  __int64 v1348; // r12@5
  __int64 v1349; // r9@5
  signed __int64 v1350; // r9@5
  __int64 v1351; // r12@5
  __int64 v1352; // rax@5
  __int64 v1353; // rax@5
  __int64 v1354; // r12@5
  __int64 v1355; // rbx@5
  __int64 v1356; // rax@5
  __int64 v1357; // r8@5
  __int64 v1358; // r12@5
  __int64 v1359; // r8@5
  __int64 v1360; // r8@5
  __int64 v1361; // r12@5
  __int64 v1362; // r8@5
  __int64 v1363; // rax@5
  __int64 v1364; // rdx@5
  __int64 v1365; // r12@5
  __int64 v1366; // rax@5
  __int64 v1367; // rax@5
  __int64 v1368; // r12@5
  __int64 v1369; // r8@5
  __int64 v1370; // r12@5
  __int64 v1371; // rax@5
  unsigned __int64 v1372; // rax@5
  __int64 v1373; // r11@5
  __int64 v1374; // r12@5
  __int64 v1375; // r11@5
  unsigned __int64 v1376; // r11@5
  __int64 v1377; // rax@5
  __int64 v1378; // rbp@5
  __int64 v1379; // rax@5
  __int64 v1380; // rax@5
  __int64 v1381; // rbp@5
  signed __int64 v1382; // rax@5
  __int64 v1383; // rdi@5
  signed __int64 v1384; // r13@5
  __int64 v1385; // rbp@5
  __int64 v1386; // rdi@5
  __int64 v1387; // rdi@5
  __int64 v1388; // rbp@5
  signed __int64 v1389; // rax@5
  __int64 v1390; // rbp@5
  __int64 v1391; // rdi@5
  unsigned __int64 v1392; // rbp@5
  __int64 v1393; // rdi@5
  __int64 v1394; // r12@5
  __int64 v1395; // rdi@5
  unsigned __int64 v1396; // rdi@5
  __int64 v1397; // rbx@5
  __int64 v1398; // rbp@5
  __int64 v1399; // rbx@5
  __int64 v1400; // rbx@5
  __int64 v1401; // rbp@5
  signed __int64 v1402; // rbx@5
  __int64 v1403; // rsi@5
  signed __int64 v1404; // r10@5
  __int64 v1405; // rbp@5
  __int64 v1406; // rsi@5
  __int64 v1407; // rsi@5
  __int64 v1408; // rbp@5
  signed __int64 v1409; // rbx@5
  __int64 v1410; // rsi@5
  __int64 v1411; // r14@5
  __int64 v1412; // rbp@5
  unsigned __int64 v1413; // r14@5
  __int64 v1414; // rsi@5
  unsigned __int64 v1415; // r11@5
  __int64 v1416; // rbp@5
  __int64 v1417; // rsi@5
  __int64 v1418; // rsi@5
  __int64 v1419; // rbp@5
  signed __int64 v1420; // rsi@5
  __int64 v1421; // rbp@5
  __int64 v1422; // rcx@5
  signed __int64 v1423; // r9@5
  __int64 v1424; // rcx@5
  __int64 v1425; // rbp@5
  signed __int64 v1426; // rsi@5
  __int64 v1427; // rbp@5
  __int64 v1428; // rcx@5
  unsigned __int64 v1429; // r14@5
  __int64 v1430; // rcx@5
  __int64 v1431; // rbp@5
  __int64 v1432; // rcx@5
  unsigned __int64 v1433; // r14@5
  __int64 v1434; // rdi@5
  signed __int64 v1435; // rcx@5
  __int64 v1436; // rdx@5
  __int64 v1437; // rdx@5
  __int64 v1438; // rdi@5
  signed __int64 v1439; // rdx@5
  __int64 v1440; // rdi@5
  __int64 v1441; // rcx@5
  signed __int64 v1442; // r8@5
  __int64 v1443; // rcx@5
  __int64 v1444; // rdi@5
  signed __int64 v1445; // rdx@5
  __int64 v1446; // rcx@5
  __int64 v1447; // rdi@5
  __int64 v1448; // r12@5
  __int64 v1449; // rcx@5
  __int64 v1450; // r15@5
  unsigned __int64 v1451; // r12@5
  __int64 v1452; // r11@5
  __int64 v1453; // rdi@5
  __int64 v1454; // rcx@5
  __int64 v1455; // rcx@5
  __int64 v1456; // rdi@5
  __int64 v1457; // rcx@5
  __int64 v1458; // rdi@5
  signed __int64 v1459; // rcx@5
  __int64 v1460; // rdi@5
  __int64 v1461; // r11@5
  unsigned __int64 v1462; // [sp+88h] [bp-118h]@1
  __int64 v1463; // [sp+90h] [bp-110h]@2
  __int64 v1464; // [sp+98h] [bp-108h]@2
  __int64 v1465; // [sp+A0h] [bp-100h]@2
  __int64 v1466; // [sp+A8h] [bp-F8h]@2
  __int64 v1467; // [sp+B0h] [bp-F0h]@2
  __int64 v1468; // [sp+B8h] [bp-E8h]@2
  __int64 v1469; // [sp+C0h] [bp-E0h]@2
  __int64 v1470; // [sp+D0h] [bp-D0h]@2
  unsigned __int64 v1471; // [sp+D8h] [bp-C8h]@1
  __int64 v1472; // [sp+E0h] [bp-C0h]@1
  unsigned __int64 v1473; // [sp+E8h] [bp-B8h]@4
  unsigned __int64 v1474; // [sp+F0h] [bp-B0h]@5
  unsigned __int64 v1475; // [sp+F8h] [bp-A8h]@5
  unsigned __int64 v1476; // [sp+100h] [bp-A0h]@5
  unsigned __int64 v1477; // [sp+108h] [bp-98h]@5
  unsigned __int64 v1478; // [sp+110h] [bp-90h]@5
  unsigned __int64 v1479; // [sp+118h] [bp-88h]@5
  unsigned __int64 v1480; // [sp+120h] [bp-80h]@5
  unsigned __int64 v1481; // [sp+128h] [bp-78h]@5
  unsigned __int64 v1482; // [sp+130h] [bp-70h]@5
  unsigned __int64 v1483; // [sp+138h] [bp-68h]@5
  unsigned __int64 v1484; // [sp+140h] [bp-60h]@5
  unsigned __int64 v1485; // [sp+148h] [bp-58h]@5
  unsigned __int64 v1486; // [sp+150h] [bp-50h]@5
  unsigned __int64 v1487; // [sp+158h] [bp-48h]@5
  unsigned __int64 v1488; // [sp+160h] [bp-40h]@5

  v3 = a1;
  v4 = a1 + (a2 & 0xFFFFFFFFFFFFFFF8LL);
  v5 = v4;
  v6 = __CFADD__(*(_QWORD *)(a3 + 64), a2);
  v7 = *(_QWORD *)(a3 + 16);
  v8 = *(_QWORD *)(a3 + 24);
  v9 = *(_QWORD *)(a3 + 32);
  v1462 = a1;
  v10 = *(_QWORD *)(a3 + 40);
  v11 = *(_QWORD *)(a3 + 8);
  v1471 = v4;
  v12 = *(_QWORD *)(a3 + 48);
  result = *(_QWORD *)a3;
  v1472 = a3;
  v14 = *(_QWORD *)(a3 + 56);
  *(_QWORD *)(a3 + 64) += a2;
  *(_QWORD *)(a3 + 72) += v6;
  if ( v3 < v5 )
  {
    v1469 = v14;
    v15 = v9;
    v16 = v10;
    v1468 = v12;
    v1467 = v10;
    v1465 = v8;
    v1464 = v7;
    v1463 = v11;
    v1470 = result;
    v1466 = v9;
    v17 = v12;
    do
    {
      v18 = 0LL;
      do
      {
        _RSI = *(_QWORD *)(v1462 + v18 * 8);
        __asm (" bswap   rsi ");
        *(unsigned __int64 *)((char *)&v1473 + v18 * 8) = _RSI;
        ++v18;
      }
      while ( v18 != 16 );
      v21 = __ROR8__(v15, 18);
      v22 = __ROR8__(v15, 14);
      v1462 += 128LL;
      v23 = v21 ^ v22;
      v24 = __ROL8__(result, 30);
      v25 = __ROL8__(v15, 23);
      v26 = (v23 ^ v25) + v1473 + 4794697086780616226LL + v14 + (v17 ^ v15 & (v17 ^ v16));
      v27 = __ROR8__(result, 28);
      v28 = v26 + v8;
      v29 = v27 ^ v24;
      v30 = __ROL8__(result, 25);
      v31 = v26 + (v30 ^ v29) + (v11 & result | v7 & (v11 | result));
      v32 = v16 ^ (v26 + v8) & (v16 ^ v15);
      v33 = __ROR8__(v26 + v8, 18);
      v34 = v32 + v17 + v1474 + 8158064640168781261LL;
      v35 = __ROR8__(v28, 14);
      v36 = v35 ^ v33;
      v37 = __ROL8__(v28, 23);
      v38 = v36 ^ v37;
      v39 = __ROL8__(v31, 30);
      v40 = __ROR8__(v31, 28);
      v41 = v34 + v38;
      v42 = v40 ^ v39;
      v43 = v41 + v7;
      v44 = __ROL8__(v31, 25);
      v45 = v41 + (v44 ^ v42) + (result & v31 | v11 & (result | v31));
      v46 = (v15 ^ (v41 + v7) & (v15 ^ v28)) + v16 + v1475 - 5349999486874862801LL;
      v47 = __ROR8__(v41 + v7, 18);
      v48 = __ROR8__(v43, 14);
      v49 = v48 ^ v47;
      v50 = __ROR8__(v45, 28);
      v51 = __ROL8__(v43, 23);
      v52 = v46 + (v49 ^ v51);
      v53 = __ROL8__(v45, 30);
      v54 = v52 + v11;
      v55 = v50 ^ v53;
      v56 = __ROL8__(v45, 25);
      v57 = __ROR8__(v54, 18);
      v58 = v52 + (v56 ^ v55) + (v45 & v31 | result & (v45 | v31));
      v59 = __ROR8__(v54, 14);
      v60 = v59 ^ v57;
      v61 = __ROL8__(v54, 23);
      v62 = (v28 ^ v54 & (v43 ^ v28)) + v1476 - 1606136188198331460LL + v15 + (v60 ^ v61);
      v63 = __ROR8__(v58, 28);
      v64 = v62 + result;
      v65 = __ROL8__(v58, 30);
      v66 = v63 ^ v65;
      v67 = __ROL8__(v58, 25);
      v68 = v62 + (v67 ^ v66) + (v58 & v45 | v31 & (v58 | v45));
      v69 = __ROR8__(v64, 18);
      v70 = __ROL8__(v68, 30);
      v71 = __ROR8__(v64, 14);
      v72 = v71 ^ v69;
      v73 = __ROL8__(v64, 23);
      v74 = v72 ^ v73;
      v75 = __ROR8__(v68, 28);
      v76 = (v43 ^ v64 & (v54 ^ v43)) + v1477 + 4131703408338449720LL + v28 + v74;
      v77 = v75 ^ v70;
      v78 = v76 + v31;
      v79 = __ROL8__(v68, 25);
      v80 = v76 + (v79 ^ v77) + (v68 & v58 | v45 & (v68 | v58));
      v81 = __ROR8__(v78, 18);
      v82 = __ROR8__(v78, 14);
      v83 = v82 ^ v81;
      v84 = __ROL8__(v78, 23);
      v85 = (v54 ^ v78 & (v64 ^ v54)) + v1478 + 6480981068601479193LL + v43 + (v83 ^ v84);
      v86 = __ROR8__(v80, 28);
      v87 = v45 + v85;
      v88 = __ROL8__(v80, 30);
      v89 = v86 ^ v88;
      v90 = __ROL8__(v80, 25);
      v91 = v85 + (v90 ^ v89) + (v80 & v68 | v58 & (v80 | v68));
      v92 = __ROR8__(v87, 18);
      v93 = __ROR8__(v87, 14);
      v94 = v93 ^ v92;
      v95 = __ROL8__(v87, 23);
      v96 = (v64 ^ v87 & (v78 ^ v64)) + v1479 - 7908458776815382629LL + v54 + (v94 ^ v95);
      v97 = __ROR8__(v91, 28);
      v98 = __ROL8__(v91, 30);
      v99 = v96 + v58;
      v100 = v97 ^ v98;
      v101 = __ROL8__(v91, 25);
      v102 = v96 + (v101 ^ v100) + (v91 & v80 | v68 & (v91 | v80));
      v103 = __ROR8__(v99, 18);
      v104 = v1480 - 6116909921290321640LL + v64 + (v78 ^ v99 & (v87 ^ v78));
      v105 = __ROR8__(v99, 14);
      v106 = v105 ^ v103;
      v107 = __ROL8__(v99, 23);
      v108 = v104 + (v106 ^ v107);
      v109 = __ROR8__(v102, 28);
      v110 = __ROL8__(v102, 30);
      v111 = v108 + v68;
      v112 = v109 ^ v110;
      v113 = __ROL8__(v102, 25);
      v114 = v108 + (v113 ^ v112) + (v102 & v91 | v80 & (v102 | v91));
      v115 = v1481 - 2880145864133508542LL + v78 + (v87 ^ v111 & (v99 ^ v87));
      v116 = __ROR8__(v111, 18);
      v117 = __ROR8__(v111, 14);
      v118 = v117 ^ v116;
      v119 = __ROL8__(v111, 23);
      v120 = v115 + (v118 ^ v119);
      v121 = __ROR8__(v114, 28);
      v122 = __ROL8__(v114, 30);
      v123 = v120 + v80;
      v124 = v121 ^ v122;
      v125 = __ROL8__(v114, 25);
      v126 = v120 + (v125 ^ v124) + (v114 & v102 | v91 & (v114 | v102));
      v127 = __ROR8__(v123, 18);
      v128 = __ROR8__(v123, 14);
      v129 = v128 ^ v127;
      v130 = __ROL8__(v123, 23);
      v131 = (v99 ^ v123 & (v111 ^ v99)) + v1482 + 1334009975649890238LL + v87 + (v129 ^ v130);
      v132 = v131 + v91;
      v133 = __ROR8__(v126, 28);
      v134 = __ROL8__(v126, 30);
      v135 = v133 ^ v134;
      v136 = __ROL8__(v126, 25);
      v137 = v131 + (v136 ^ v135) + (v126 & v114 | v102 & (v126 | v114));
      v138 = __ROR8__(v132, 18);
      v139 = __ROL8__(v137, 30);
      v140 = __ROR8__(v132, 14);
      v141 = v140 ^ v138;
      v142 = __ROL8__(v132, 23);
      v143 = (v111 ^ v132 & (v123 ^ v111)) + v1483 + 2608012711638119052LL + v99 + (v141 ^ v142);
      v144 = __ROR8__(v137, 28);
      v145 = v144 ^ v139;
      v146 = v143 + v102;
      v147 = __ROL8__(v137, 25);
      v148 = __ROR8__(v146, 18);
      v149 = v143 + (v147 ^ v145) + (v137 & v126 | v114 & (v137 | v126));
      v150 = __ROR8__(v146, 14);
      v151 = v150 ^ v148;
      v152 = __ROL8__(v146, 23);
      v153 = (v123 ^ v146 & (v132 ^ v123)) + v1484 + 6128411473006802146LL + v111 + (v151 ^ v152);
      v154 = __ROR8__(v149, 28);
      v155 = __ROL8__(v149, 30);
      v156 = v153 + v114;
      v157 = v154 ^ v155;
      v158 = __ROL8__(v149, 25);
      v159 = v153 + (v158 ^ v157) + (v149 & v137 | v126 & (v149 | v137));
      v160 = __ROR8__(v156, 18);
      v161 = __ROR8__(v156, 14);
      v162 = v161 ^ v160;
      v163 = __ROL8__(v156, 23);
      v164 = (v132 ^ v156 & (v146 ^ v132)) + v1485 + 8268148722764581231LL + v123 + (v162 ^ v163);
      v165 = __ROR8__(v159, 28);
      v166 = __ROL8__(v159, 30);
      v167 = v164 + v126;
      v168 = v165 ^ v166;
      v169 = __ROL8__(v159, 25);
      v170 = __ROR8__(v167, 18);
      v171 = v164 + (v169 ^ v168) + (v159 & v149 | v137 & (v159 | v149));
      v172 = (v146 ^ v167 & (v156 ^ v146)) + v1486 - 9160688886553864527LL + v132;
      v173 = __ROR8__(v167, 14);
      v174 = v173 ^ v170;
      v175 = __ROL8__(v167, 23);
      v176 = v172 + (v174 ^ v175);
      v177 = __ROR8__(v171, 28);
      v178 = v176 + v137;
      v179 = __ROL8__(v171, 30);
      v180 = v177 ^ v179;
      v181 = __ROL8__(v171, 25);
      v182 = __ROR8__(v178, 18);
      v183 = v176 + (v181 ^ v180) + (v171 & v159 | v149 & (v171 | v159));
      v184 = __ROR8__(v178, 14);
      v185 = v184 ^ v182;
      v186 = __ROL8__(v178, 23);
      v187 = (v156 ^ v178 & (v167 ^ v156)) + v1487 - 7215885187991268811LL + v146 + (v185 ^ v186);
      v188 = __ROR8__(v183, 28);
      v189 = __ROL8__(v183, 30);
      v190 = v187 + v149;
      v191 = v188 ^ v189;
      v192 = __ROL8__(v183, 25);
      v193 = v187 + (v192 ^ v191) + (v183 & v171 | v159 & (v183 | v171));
      v194 = __ROR8__(v190, 18);
      v195 = __ROR8__(v190, 14);
      v196 = v195 ^ v194;
      v197 = __ROL8__(v190, 23);
      v198 = (v167 ^ v190 & (v178 ^ v167)) + v1488 - 4495734319001033068LL + v156 + (v196 ^ v197);
      v199 = __ROR8__(v193, 28);
      v200 = __ROL8__(v193, 30);
      v201 = v198 + v159;
      v202 = v199 ^ v200;
      v203 = __ROL8__(v193, 25);
      v204 = v198 + (v203 ^ v202) + (v193 & v183 | v171 & (v193 | v183));
      v205 = __ROR8__(v1487, 19);
      v206 = v205;
      v207 = __ROL8__(v1487, 3);
      v208 = __ROR8__(v1474, 1);
      v209 = __ROR8__(v1474, 8);
      v210 = __ROR8__(v1488, 19);
      v211 = (v206 ^ v207 ^ (v1487 >> 6)) + v1482 + v1473 + ((v1474 >> 7) ^ v208 ^ v209);
      v212 = __ROR8__(v201, 18);
      v213 = __ROR8__(v201, 14);
      v214 = v213 ^ v212;
      v215 = __ROL8__(v201, 23);
      v216 = (v178 ^ v201 & (v190 ^ v178)) + v211 - 1973867731355612462LL + v167 + (v214 ^ v215);
      v217 = __ROR8__(v204, 28);
      v218 = __ROL8__(v204, 30);
      v219 = v216 + v171;
      v220 = v217 ^ v218;
      v221 = __ROL8__(v204, 25);
      v222 = v216 + (v221 ^ v220) + (v204 & v193 | v183 & (v204 | v193));
      v223 = __ROL8__(v1488, 3);
      v224 = (v210 ^ v223 ^ (v1488 >> 6)) + v1474 + v1483;
      v225 = __ROR8__(v1475, 1);
      v226 = __ROR8__(v1475, 8);
      v227 = v224 + ((v1475 >> 7) ^ v225 ^ v226);
      v228 = __ROR8__(v219, 18);
      v229 = __ROR8__(v219, 14);
      v230 = v229 ^ v228;
      v231 = __ROL8__(v219, 23);
      v232 = (v190 ^ v219 & (v201 ^ v190)) + v227 - 1171420211273849373LL + v178 + (v230 ^ v231);
      v233 = __ROR8__(v222, 28);
      v234 = __ROL8__(v222, 30);
      v235 = v232 + v183;
      v236 = v233 ^ v234;
      v237 = __ROL8__(v222, 25);
      v238 = __ROR8__(v1476, 1);
      v239 = v232 + (v237 ^ v236) + (v222 & v204 | v193 & (v222 | v204));
      v240 = __ROR8__(v1476, 8);
      v241 = (v238 ^ v240 ^ (v1476 >> 7)) + v1484 + v1475;
      v242 = __ROR8__(v211, 19);
      v243 = __ROL8__(v211, 3);
      v244 = v241 + ((v211 >> 6) ^ v242 ^ v243);
      v245 = __ROR8__(v235, 18);
      v246 = __ROR8__(v235, 14);
      v247 = v246 ^ v245;
      v248 = __ROL8__(v235, 23);
      v249 = (v201 ^ v235 & (v219 ^ v201)) + v244 + 1135362057144423861LL + v190 + (v247 ^ v248);
      v250 = __ROR8__(v239, 28);
      v251 = __ROL8__(v239, 30);
      v252 = v249 + v193;
      v253 = v250 ^ v251;
      v254 = __ROL8__(v239, 25);
      v255 = v249 + (v254 ^ v253) + (v239 & v222 | v204 & (v239 | v222));
      v256 = __ROR8__(v1477, 1);
      v257 = __ROR8__(v1477, 8);
      v258 = (v256 ^ v257 ^ (v1477 >> 7)) + v1485 + v1476;
      v259 = __ROR8__(v227, 19);
      v260 = __ROL8__(v227, 3);
      v261 = v258 + ((v227 >> 6) ^ v259 ^ v260);
      v262 = __ROR8__(v252, 18);
      v263 = __ROR8__(v252, 14);
      v264 = v263 ^ v262;
      v265 = __ROL8__(v252, 23);
      v266 = (v219 ^ v252 & (v235 ^ v219)) + v261 + 2597628984639134821LL + v201 + (v264 ^ v265);
      v267 = __ROR8__(v255, 28);
      v268 = v266 + v204;
      v269 = __ROL8__(v255, 30);
      v270 = v267 ^ v269;
      v271 = __ROL8__(v255, 25);
      v272 = __ROR8__(v244, 19);
      v273 = v266 + (v271 ^ v270) + (v255 & v239 | v222 & (v255 | v239));
      v274 = __ROR8__(v1478, 8);
      v275 = __ROR8__(v1478, 1);
      v276 = v1486 + v1477 + (v274 ^ v275 ^ (v1478 >> 7));
      v277 = __ROL8__(v244, 3);
      v278 = v276 + ((v244 >> 6) ^ v272 ^ v277);
      v279 = __ROR8__(v268, 18);
      v280 = __ROR8__(v268, 14);
      v281 = v280 ^ v279;
      v282 = __ROL8__(v268, 23);
      v283 = (v235 ^ v268 & (v252 ^ v235)) + v278 + 3308224258029322869LL + v219 + (v281 ^ v282);
      v284 = __ROR8__(v273, 28);
      v285 = __ROL8__(v273, 30);
      v286 = v283 + v222;
      v287 = v284 ^ v285;
      v288 = __ROL8__(v273, 25);
      v289 = v283 + (v288 ^ v287) + (v273 & v255 | v239 & (v273 | v255));
      v290 = __ROR8__(v1479, 8);
      v291 = __ROR8__(v1479, 1);
      v292 = v1487 + v1478 + (v290 ^ v291 ^ (v1479 >> 7));
      v293 = __ROR8__(v261, 19);
      v294 = v293;
      v295 = __ROL8__(v261, 3);
      v296 = ((v261 >> 6) ^ v294 ^ v295) + v292;
      v297 = __ROR8__(v286, 14);
      v298 = (v252 ^ v286 & (v268 ^ v252)) + v296 + 5365058923640841347LL + v235;
      v299 = v297;
      v300 = __ROR8__(v286, 18);
      v301 = v299 ^ v300;
      v302 = __ROL8__(v286, 23);
      v303 = v298 + (v301 ^ v302);
      v304 = __ROR8__(v289, 28);
      v305 = __ROL8__(v289, 30);
      v306 = v303 + v239;
      v307 = v304 ^ v305;
      v308 = __ROL8__(v289, 25);
      v309 = v303 + (v308 ^ v307) + (v289 & v273 | v255 & (v289 | v273));
      v310 = __ROR8__(v1480, 1);
      v311 = v310;
      v312 = __ROR8__(v1480, 8);
      v313 = v1488 + v1479 + (v312 ^ v311 ^ (v1480 >> 7));
      v314 = __ROL8__(v278, 3);
      v315 = __ROR8__(v278, 19);
      v316 = v313 + ((v278 >> 6) ^ v315 ^ v314);
      v317 = (v268 ^ v306 & (v286 ^ v268)) + v316 + 6679025012923562964LL + v252;
      v318 = __ROR8__(v306, 18);
      v319 = __ROR8__(v306, 14);
      v320 = __ROL8__(v309, 30);
      v321 = v319 ^ v318;
      v322 = __ROL8__(v306, 23);
      v323 = v317 + (v321 ^ v322);
      v324 = __ROR8__(v309, 28);
      v325 = v324 ^ v320;
      v326 = v323 + v255;
      v327 = __ROL8__(v309, 25);
      v328 = v323 + (v327 ^ v325) + (v309 & v289 | v273 & (v309 | v289));
      v329 = __ROR8__(v1481, 1);
      v330 = __ROR8__(v1481, 8);
      v331 = (v1481 >> 7) ^ v329 ^ v330;
      v332 = __ROL8__(v296, 3);
      v333 = __ROR8__(v296, 19);
      v334 = ((v296 >> 6) ^ v333 ^ v332) + v211 + v1480 + v331;
      v335 = (v286 ^ v326 & (v306 ^ v286)) + v334 + 8573033837759648693LL + v268;
      v336 = __ROR8__(v326, 18);
      v337 = __ROR8__(v326, 14);
      v338 = v337 ^ v336;
      v339 = __ROR8__(v328, 28);
      v340 = __ROL8__(v326, 23);
      v341 = v335 + (v338 ^ v340);
      v342 = __ROL8__(v328, 30);
      v343 = v341 + v273;
      v344 = v339 ^ v342;
      v345 = __ROL8__(v328, 25);
      v346 = v341 + (v345 ^ v344) + (v328 & v309 | v289 & (v328 | v309));
      v347 = __ROR8__(v1482, 1);
      v348 = v347;
      v349 = __ROR8__(v1482, 8);
      v350 = (v1482 >> 7) ^ v348 ^ v349;
      v351 = __ROR8__(v316, 19);
      v352 = __ROL8__(v316, 3);
      v353 = ((v316 >> 6) ^ v351 ^ v352) + v227 + v1481 + v350;
      v354 = __ROR8__(v343, 18);
      v355 = (v306 ^ v343 & (v326 ^ v306)) + v353 - 7476448914759557205LL + v286;
      v356 = __ROR8__(v343, 14);
      v357 = v356 ^ v354;
      v358 = __ROL8__(v343, 23);
      v359 = v355 + (v357 ^ v358);
      v360 = __ROR8__(v346, 28);
      v361 = __ROL8__(v346, 30);
      v362 = v359 + v289;
      v363 = v360 ^ v361;
      v364 = __ROL8__(v346, 25);
      v365 = v359 + (v364 ^ v363) + (v346 & v328 | v309 & (v346 | v328));
      v366 = __ROR8__(v1483, 1);
      v367 = v366;
      v368 = __ROR8__(v1483, 8);
      v369 = (v1483 >> 7) ^ v367 ^ v368;
      v370 = __ROL8__(v334, 3);
      v371 = __ROR8__(v334, 19);
      v372 = ((v334 >> 6) ^ v371 ^ v370) + v244 + v1482 + v369;
      v373 = __ROR8__(v362, 18);
      v374 = (v326 ^ v362 & (v343 ^ v326)) + v372 - 6327057829258317296LL + v306;
      v375 = __ROR8__(v362, 14);
      v376 = v375 ^ v373;
      v377 = __ROL8__(v362, 23);
      v378 = v374 + (v376 ^ v377);
      v379 = __ROR8__(v365, 28);
      v380 = __ROL8__(v365, 30);
      v381 = v378 + v309;
      v382 = v379 ^ v380;
      v383 = __ROL8__(v365, 25);
      v384 = v378 + (v383 ^ v382) + (v365 & v346 | v328 & (v365 | v346));
      v385 = __ROR8__(v1484, 1);
      v386 = v385;
      v387 = __ROR8__(v1484, 8);
      v388 = (v1484 >> 7) ^ v386 ^ v387;
      v389 = __ROL8__(v353, 3);
      v390 = __ROR8__(v353, 19);
      v391 = ((v353 >> 6) ^ v390 ^ v389) + v261 + v1483 + v388;
      v392 = __ROR8__(v381, 18);
      v393 = (v343 ^ v381 & (v362 ^ v343)) + v391 - 5763719355590565569LL + v326;
      v394 = __ROR8__(v381, 14);
      v395 = v394 ^ v392;
      v396 = __ROL8__(v381, 23);
      v397 = v393 + (v395 ^ v396);
      v398 = __ROR8__(v384, 28);
      v399 = __ROL8__(v384, 30);
      v400 = v397 + v328;
      v401 = v398 ^ v399;
      v402 = __ROL8__(v384, 25);
      v403 = v397 + (v402 ^ v401) + (v384 & v365 | v346 & (v384 | v365));
      v404 = __ROR8__(v1485, 1);
      v405 = v404;
      v406 = __ROR8__(v1485, 8);
      v407 = (v1485 >> 7) ^ v405 ^ v406;
      v408 = __ROL8__(v372, 3);
      v409 = __ROR8__(v372, 19);
      v410 = ((v372 >> 6) ^ v409 ^ v408) + v278 + v1484 + v407;
      v411 = v410;
      v412 = __ROL8__(v403, 30);
      v413 = (v362 ^ v400 & (v381 ^ v362)) + v410 - 4658551843659510044LL + v343;
      v414 = __ROR8__(v400, 14);
      v415 = v414;
      v416 = __ROR8__(v400, 18);
      v417 = v415 ^ v416;
      v418 = __ROL8__(v400, 23);
      v419 = v413 + (v417 ^ v418);
      v420 = __ROR8__(v403, 28);
      v421 = v419 + v346;
      v422 = v420 ^ v412;
      v423 = __ROL8__(v403, 25);
      v424 = v419 + (v423 ^ v422) + (v403 & v384 | v365 & (v403 | v384));
      v425 = __ROR8__(v1486, 1);
      v426 = v425;
      v427 = __ROR8__(v1486, 8);
      v428 = v426 ^ v427;
      v429 = __ROL8__(v391, 3);
      v430 = __ROR8__(v391, 19);
      v431 = ((v391 >> 6) ^ v430 ^ v429) + v296 + v1485 + ((v1486 >> 7) ^ v428);
      v432 = __ROR8__(v421, 18);
      v433 = (v381 ^ v421 & (v400 ^ v381)) + v431 - 4116276920077217854LL + v362;
      v434 = __ROR8__(v421, 14);
      v435 = v434 ^ v432;
      v436 = __ROL8__(v421, 23);
      v437 = v433 + (v435 ^ v436);
      v438 = __ROR8__(v424, 28);
      v439 = v437 + v365;
      v440 = v438;
      v441 = __ROL8__(v424, 30);
      v442 = v440 ^ v441;
      v443 = __ROL8__(v424, 25);
      v444 = v437 + (v443 ^ v442) + (v424 & v403 | v384 & (v424 | v403));
      v445 = __ROR8__(v1487, 1);
      v446 = v445;
      v447 = __ROR8__(v1487, 8);
      v448 = (v1487 >> 7) ^ v446 ^ v447;
      v449 = __ROL8__(v411, 3);
      v450 = __ROR8__(v411, 19);
      v451 = ((v411 >> 6) ^ v450 ^ v449) + v316 + v1486 + v448;
      v452 = __ROR8__(v439, 14);
      v453 = __ROR8__(v439, 18);
      v454 = v452 ^ v453;
      v455 = __ROL8__(v439, 23);
      v456 = (v400 ^ v439 & (v421 ^ v400)) + v451 - 3051310485924567259LL + v381 + (v454 ^ v455);
      v457 = __ROR8__(v444, 28);
      v458 = v456 + v384;
      v459 = v457;
      v460 = __ROL8__(v444, 30);
      v461 = v459 ^ v460;
      v462 = __ROL8__(v444, 25);
      v463 = v456 + (v462 ^ v461) + (v444 & v424 | v403 & (v444 | v424));
      v464 = __ROR8__(v1488, 1);
      v465 = v464;
      v466 = __ROR8__(v1488, 8);
      v467 = (v1488 >> 7) ^ v465 ^ v466;
      v468 = __ROL8__(v431, 3);
      v469 = __ROR8__(v431, 19);
      v470 = ((v431 >> 6) ^ v469 ^ v468) + v334 + v1487 + v467;
      v471 = __ROR8__(v458, 14);
      v472 = v471;
      v473 = __ROR8__(v458, 18);
      v474 = v472 ^ v473;
      v475 = __ROL8__(v458, 23);
      v476 = (v421 ^ v458 & (v439 ^ v421)) + v470 + 489312712824947311LL + v400 + (v474 ^ v475);
      v477 = __ROR8__(v463, 28);
      v478 = v403 + v476;
      v479 = __ROL8__(v463, 30);
      v480 = v477 ^ v479;
      v481 = __ROL8__(v463, 25);
      v482 = (v481 ^ v480) + (v463 & v444 | v424 & (v463 | v444));
      v483 = __ROR8__(v211, 1);
      v484 = v476 + v482;
      v485 = v483;
      v486 = __ROR8__(v211, 8);
      v487 = v353 + v1488 + ((v211 >> 7) ^ v485 ^ v486);
      v488 = __ROL8__(v451, 3);
      v489 = __ROR8__(v451, 19);
      v490 = ((v451 >> 6) ^ v489 ^ v488) + v487;
      v491 = (v439 ^ v478 & (v458 ^ v439)) + v490 + 1452737877330783856LL + v421;
      v492 = __ROR8__(v478, 14);
      v493 = v492;
      v494 = __ROR8__(v478, 18);
      v495 = v493 ^ v494;
      v496 = __ROL8__(v478, 23);
      v497 = v491 + (v496 ^ v495);
      v498 = v424 + v497;
      v499 = __ROR8__(v484, 28);
      v500 = v499;
      v501 = __ROL8__(v484, 30);
      v502 = v500 ^ v501;
      v503 = __ROL8__(v484, 25);
      v504 = (v503 ^ v502) + (v484 & v463 | v444 & (v484 | v463));
      v505 = __ROR8__(v227, 1);
      v506 = v504 + v497;
      v507 = v505;
      v508 = __ROR8__(v227, 8);
      v509 = ((v227 >> 7) ^ v507 ^ v508) + v211;
      v510 = __ROR8__(v470, 19);
      v511 = __ROL8__(v470, 3);
      v512 = v372 + v509 + ((v470 >> 6) ^ v510 ^ v511);
      v513 = __ROR8__(v498, 14);
      v514 = __ROR8__(v498, 18);
      v515 = v513 ^ v514;
      v516 = __ROL8__(v498, 23);
      v517 = (v458 ^ v498 & (v478 ^ v458)) + v512 + 2861767655752347644LL + v439 + (v516 ^ v515);
      v518 = __ROL8__(v506, 30);
      v519 = __ROR8__(v506, 28);
      v520 = v517 + v444;
      v521 = v519 ^ v518;
      v522 = __ROL8__(v506, 25);
      v523 = v517 + (v506 & v484 | v463 & (v506 | v484)) + (v522 ^ v521);
      v524 = __ROR8__(v244, 1);
      v525 = __ROR8__(v244, 8);
      v526 = ((v244 >> 7) ^ v524 ^ v525) + v227;
      v527 = __ROR8__(v490, 19);
      v528 = __ROL8__(v490, 3);
      v529 = v391 + v526 + ((v490 >> 6) ^ v527 ^ v528);
      v530 = __ROR8__(v520, 14);
      v531 = __ROR8__(v520, 18);
      v532 = v530 ^ v531;
      v533 = __ROL8__(v520, 23);
      v534 = (v478 ^ v520 & (v498 ^ v478)) + v529 + 3322285676063803686LL + v458 + (v533 ^ v532);
      v535 = __ROR8__(v523, 28);
      v536 = __ROL8__(v523, 30);
      v537 = v534 + v463;
      v538 = v535 ^ v536;
      v539 = __ROL8__(v523, 25);
      v540 = v534 + (v523 & v506 | v484 & (v523 | v506)) + (v539 ^ v538);
      v541 = __ROR8__(v261, 1);
      v542 = __ROR8__(v261, 8);
      v543 = __ROL8__(v540, 25);
      v544 = ((v261 >> 7) ^ v541 ^ v542) + v244;
      v545 = __ROR8__(v512, 19);
      v546 = __ROL8__(v512, 3);
      v547 = ((v512 >> 6) ^ v545 ^ v546) + v411 + v544;
      v548 = __ROR8__(v537, 14);
      v549 = __ROR8__(v537, 18);
      v550 = v548 ^ v549;
      v551 = __ROL8__(v537, 23);
      v552 = v551 ^ v550;
      v553 = __ROR8__(v540, 28);
      v554 = (v498 ^ v537 & (v520 ^ v498)) + v547 + 5560940570517711597LL + v478 + v552;
      v555 = v278;
      v556 = v553;
      v557 = v554 + v484;
      v558 = __ROL8__(v540, 30);
      v559 = v554 + (v540 & v523 | v506 & (v540 | v523)) + (v543 ^ v556 ^ v558);
      v560 = __ROR8__(v278, 1);
      v561 = __ROR8__(v278, 8);
      v562 = v431 + ((v278 >> 7) ^ v560 ^ v561) + v261;
      v563 = __ROR8__(v529, 19);
      v564 = v563;
      v565 = __ROL8__(v529, 3);
      v566 = ((v529 >> 6) ^ v564 ^ v565) + v562;
      v567 = v566;
      v568 = __ROR8__(v557, 14);
      v569 = __ROR8__(v557, 18);
      v570 = v568 ^ v569;
      v571 = __ROL8__(v557, 23);
      v572 = (v520 ^ v557 & (v537 ^ v520)) + v566 + 5996557281743188959LL + v498 + (v571 ^ v570);
      v573 = __ROR8__(v559, 28);
      v574 = v506 + v572;
      v575 = v296;
      v576 = v573;
      v577 = __ROL8__(v559, 30);
      v578 = v576 ^ v577;
      v579 = __ROL8__(v559, 25);
      v580 = v572 + (v559 & v540 | v523 & (v559 | v540)) + (v579 ^ v578);
      v581 = __ROR8__(v296, 1);
      v582 = __ROR8__(v296, 8);
      v583 = v555 + ((v296 >> 7) ^ v581 ^ v582);
      v584 = __ROR8__(v547, 19);
      v585 = __ROL8__(v547, 3);
      v586 = ((v547 >> 6) ^ v584 ^ v585) + v451 + v583;
      v587 = v586 + 7280758554555802590LL;
      v588 = v586;
      v589 = v316;
      v590 = v587 + v520;
      v591 = __ROR8__(v574, 14);
      v592 = __ROR8__(v574, 18);
      v593 = v591 ^ v592;
      v594 = __ROL8__(v574, 23);
      v595 = (v537 ^ v574 & (v557 ^ v537)) + v590 + (v594 ^ v593);
      v596 = __ROR8__(v580, 28);
      v597 = __ROL8__(v580, 30);
      v598 = v595 + v523;
      v599 = v596 ^ v597;
      v600 = __ROL8__(v580, 25);
      v601 = v595 + (v580 & v559 | v540 & (v580 | v559)) + (v600 ^ v599);
      v602 = __ROR8__(v316, 1);
      v603 = __ROR8__(v316, 8);
      v604 = v575 + ((v316 >> 7) ^ v602 ^ v603);
      v605 = __ROR8__(v567, 19);
      v606 = v605;
      v607 = __ROL8__(v567, 3);
      v608 = ((v567 >> 6) ^ v606 ^ v607) + v470 + v604;
      v609 = v608;
      v610 = (v557 ^ v598 & (v574 ^ v557)) + v608 + 8532644243296465576LL + v537;
      v611 = __ROR8__(v598, 14);
      v612 = __ROR8__(v598, 18);
      v613 = v611 ^ v612;
      v614 = __ROL8__(v598, 23);
      v615 = v610 + (v614 ^ v613);
      v616 = __ROR8__(v601, 28);
      v617 = v540 + v615;
      v618 = v616;
      v619 = __ROL8__(v601, 30);
      v620 = v618 ^ v619;
      v621 = __ROL8__(v601, 25);
      v622 = v615 + (v601 & v580 | v559 & (v601 | v580)) + (v621 ^ v620);
      v623 = __ROR8__(v334, 1);
      v624 = __ROR8__(v334, 8);
      v625 = __ROR8__(v588, 19);
      v626 = (v334 >> 7) ^ v623 ^ v624;
      v627 = __ROL8__(v588, 3);
      v628 = v490 + v589 + v626 + ((v588 >> 6) ^ v625 ^ v627);
      v629 = v628;
      v630 = v628 - 9096487096722542874LL;
      v631 = v353;
      v632 = v630 + v557;
      v633 = __ROR8__(v617, 14);
      v634 = __ROR8__(v617, 18);
      v635 = __ROR8__(v353, 8);
      v636 = v633 ^ v634;
      v637 = __ROL8__(v617, 23);
      v638 = (v574 ^ v617 & (v598 ^ v574)) + v632 + (v637 ^ v636);
      v639 = __ROR8__(v622, 28);
      v640 = v638 + v559;
      v641 = v639;
      v642 = __ROL8__(v622, 30);
      v643 = v641 ^ v642;
      v644 = __ROL8__(v622, 25);
      v645 = __ROR8__(v353, 1);
      v646 = v638 + (v622 & v601 | v580 & (v622 | v601)) + (v644 ^ v643);
      v647 = __ROR8__(v609, 19);
      v648 = __ROL8__(v609, 3);
      v649 = v512 + v334 + ((v353 >> 7) ^ v645 ^ v635) + ((v609 >> 6) ^ v647 ^ v648);
      v650 = v649;
      v651 = __ROL8__(v640, 23);
      v652 = (v598 ^ v640 & (v617 ^ v598)) + v649 - 7894198246740708037LL + v574;
      v653 = __ROR8__(v640, 14);
      v654 = v653;
      v655 = __ROR8__(v640, 18);
      v656 = v652 + (v651 ^ v654 ^ v655);
      v657 = __ROL8__(v646, 30);
      v658 = v580 + v656;
      v659 = __ROR8__(v646, 28);
      v660 = v659 ^ v657;
      v661 = __ROL8__(v646, 25);
      v662 = (v661 ^ v660) + (v646 & v622 | v601 & (v646 | v622)) + v656;
      v663 = __ROR8__(v372, 1);
      v664 = __ROR8__(v372, 8);
      v665 = v631 + ((v372 >> 7) ^ v663 ^ v664);
      v666 = __ROR8__(v629, 19);
      v667 = __ROL8__(v629, 3);
      v668 = v529 + v665 + ((v629 >> 6) ^ v666 ^ v667);
      v669 = v668;
      v670 = __ROR8__(v658, 14);
      v671 = __ROR8__(v658, 18);
      v672 = v670 ^ v671;
      v673 = __ROL8__(v658, 23);
      v674 = (v617 ^ v658 & (v640 ^ v617)) + v668 - 6719396339535248540LL + v598 + (v673 ^ v672);
      v675 = __ROL8__(v662, 30);
      v676 = v601 + v674;
      v677 = __ROR8__(v662, 28);
      v678 = v677 ^ v675;
      v679 = __ROL8__(v662, 25);
      v680 = (v679 ^ v678) + (v662 & v646 | v622 & (v662 | v646)) + v674;
      v681 = __ROR8__(v391, 1);
      v682 = v681;
      v683 = __ROR8__(v391, 8);
      v684 = __ROR8__(v650, 19);
      v685 = v372 + ((v391 >> 7) ^ v682 ^ v683);
      v686 = __ROL8__(v650, 3);
      v687 = (v650 >> 6) ^ v684 ^ v686;
      v688 = v547 + v685 + v687;
      v689 = v547 + v685 + v687;
      v690 = __ROR8__(v676, 14);
      v691 = v690;
      v692 = __ROR8__(v676, 18);
      v693 = v691 ^ v692;
      v694 = __ROL8__(v676, 23);
      v695 = (v640 ^ v676 & (v658 ^ v640)) + v688 - 6333637450476146687LL + v617 + (v694 ^ v693);
      v696 = __ROL8__(v680, 30);
      v697 = v622 + v695;
      v698 = __ROR8__(v680, 28);
      v699 = v698 ^ v696;
      v700 = __ROL8__(v680, 25);
      v701 = __ROR8__(v411, 8);
      v702 = (v700 ^ v699) + (v680 & v662 | v646 & (v680 | v662)) + v695;
      v703 = __ROR8__(v411, 1);
      v704 = __ROR8__(v669, 19);
      v705 = v391 + ((v411 >> 7) ^ v703 ^ v701);
      v706 = __ROL8__(v669, 3);
      v707 = v567 + v705 + ((v669 >> 6) ^ v704 ^ v706);
      v708 = v707;
      v709 = (v658 ^ v697 & (v676 ^ v658)) + v707 - 4446306890439682159LL + v640;
      v710 = __ROR8__(v697, 14);
      v711 = v710;
      v712 = __ROR8__(v697, 18);
      v713 = v711 ^ v712;
      v714 = __ROL8__(v697, 23);
      v715 = v709 + (v714 ^ v713);
      v716 = __ROR8__(v702, 28);
      v717 = v715 + v646;
      v718 = v716;
      v719 = __ROL8__(v702, 30);
      v720 = v719;
      v721 = __ROL8__(v702, 25);
      v722 = (v721 ^ v718 ^ v720) + (v702 & v680 | v662 & (v702 | v680)) + v715;
      v723 = __ROR8__(v431, 1);
      v724 = __ROR8__(v431, 8);
      v725 = v411 + ((v431 >> 7) ^ v723 ^ v724);
      v726 = __ROR8__(v689, 19);
      v727 = __ROL8__(v689, 3);
      v728 = v588 + v725 + ((v689 >> 6) ^ v726 ^ v727);
      v729 = v728 - 4076793802049405392LL + v658;
      v730 = __ROR8__(v717, 14);
      v731 = v730;
      v732 = __ROR8__(v717, 18);
      v733 = v732;
      v734 = __ROL8__(v717, 23);
      v735 = v734 ^ v731 ^ v733;
      v736 = __ROR8__(v722, 28);
      v737 = (v676 ^ v717 & (v697 ^ v676)) + v729 + v735;
      v738 = v736;
      v739 = v737 + v662;
      v740 = __ROL8__(v722, 30);
      v741 = v740;
      v742 = __ROL8__(v722, 25);
      v743 = (v742 ^ v738 ^ v741) + (v722 & v702 | v680 & (v722 | v702)) + v737;
      v744 = __ROR8__(v451, 1);
      v745 = v744;
      v746 = __ROR8__(v451, 8);
      v747 = v431 + ((v451 >> 7) ^ v745 ^ v746);
      v748 = __ROR8__(v708, 19);
      v749 = v748;
      v750 = __ROL8__(v708, 3);
      v751 = v609 + v747 + ((v708 >> 6) ^ v749 ^ v750);
      v752 = v751;
      v753 = v751 - 3345356375505022440LL + v676;
      v754 = v470;
      v755 = __ROR8__(v739, 14);
      v756 = v755;
      v757 = __ROR8__(v739, 18);
      v758 = v756 ^ v757;
      v759 = __ROL8__(v739, 23);
      v760 = (v697 ^ v739 & (v717 ^ v697)) + v753 + (v759 ^ v758);
      v761 = __ROL8__(v743, 30);
      v762 = __ROR8__(v743, 28);
      v763 = v760 + v680;
      v764 = v762 ^ v761;
      v765 = __ROL8__(v743, 25);
      v766 = __ROR8__(v470, 8);
      v767 = (v765 ^ v764) + (v743 & v722 | v702 & (v743 | v722)) + v760;
      v768 = __ROR8__(v470, 1);
      v769 = __ROR8__(v728, 19);
      v770 = v629 + v451 + ((v470 >> 7) ^ v768 ^ v766);
      v771 = __ROL8__(v728, 3);
      v772 = v770 + ((v728 >> 6) ^ v769 ^ v771);
      v773 = v697 + v772 - 2983346525034927856LL;
      v774 = __ROL8__(v763, 23);
      v775 = __ROR8__(v763, 14);
      v776 = v775;
      v777 = __ROR8__(v763, 18);
      v778 = (v717 ^ v763 & (v739 ^ v717)) + v773 + (v774 ^ v776 ^ v777);
      v779 = v778 + v702;
      v780 = __ROL8__(v767, 30);
      v781 = __ROR8__(v767, 28);
      v782 = v781 ^ v780;
      v783 = __ROL8__(v767, 25);
      v784 = v778 + (v767 & v743 | v722 & (v767 | v743)) + (v783 ^ v782);
      v785 = __ROR8__(v490, 1);
      v786 = __ROR8__(v490, 8);
      v787 = v650 + v754 + ((v490 >> 7) ^ v785 ^ v786);
      v788 = __ROR8__(v752, 19);
      v789 = __ROL8__(v752, 3);
      v790 = ((v752 >> 6) ^ v788 ^ v789) + v787;
      v791 = v790;
      v792 = v790;
      v793 = (v739 ^ v779 & (v763 ^ v739)) + v790 - 860691631967231958LL + v717;
      v794 = __ROR8__(v779, 14);
      v795 = v794;
      v796 = __ROR8__(v779, 18);
      v797 = v795 ^ v796;
      v798 = __ROL8__(v779, 23);
      v799 = v793 + (v798 ^ v797);
      v800 = __ROR8__(v784, 28);
      v801 = v799 + v722;
      v802 = v800;
      v803 = __ROL8__(v784, 30);
      v804 = v802 ^ v803;
      v805 = __ROL8__(v784, 25);
      v806 = v799 + (v784 & v767 | v743 & (v784 | v767)) + (v805 ^ v804);
      v807 = __ROR8__(v512, 1);
      v808 = v807;
      v809 = __ROR8__(v512, 8);
      v810 = v669 + v490 + ((v512 >> 7) ^ v808 ^ v809);
      v811 = __ROR8__(v772, 19);
      v812 = v811;
      v813 = __ROL8__(v772, 3);
      v814 = ((v772 >> 6) ^ v812 ^ v813) + v810;
      v815 = v814;
      v816 = __ROR8__(v801, 14);
      v817 = __ROR8__(v801, 18);
      v818 = v816 ^ v817;
      v819 = __ROL8__(v801, 23);
      v820 = v819 ^ v818;
      v821 = __ROR8__(v806, 28);
      v822 = (v763 ^ v801 & (v779 ^ v763)) + v814 + 1182934255886127544LL + v739 + v820;
      v823 = v821;
      v824 = v822 + v743;
      v825 = __ROL8__(v806, 30);
      v826 = v823 ^ v825;
      v827 = __ROL8__(v806, 25);
      v828 = __ROR8__(v791, 19);
      v829 = v822 + (v806 & v784 | v767 & (v806 | v784)) + (v827 ^ v826);
      v830 = __ROR8__(v529, 1);
      v831 = v830;
      v832 = __ROR8__(v529, 8);
      v833 = (v529 >> 7) ^ v831 ^ v832;
      v834 = __ROL8__(v791, 3);
      v835 = v547;
      v836 = v689 + v512 + v833 + ((v791 >> 6) ^ v828 ^ v834);
      v837 = __ROR8__(v824, 14);
      v838 = v837;
      v839 = __ROR8__(v824, 18);
      v840 = v838 ^ v839;
      v841 = __ROL8__(v824, 23);
      v842 = v841 ^ v840;
      v843 = __ROR8__(v829, 28);
      v844 = (v779 ^ v824 & (v801 ^ v779)) + v836 + 1847814050463011016LL + v763 + v842;
      v845 = v843;
      v846 = __ROL8__(v829, 25);
      v847 = v844 + v767;
      v848 = __ROL8__(v829, 30);
      v849 = v844 + (v829 & v806 | v784 & (v829 | v806)) + (v846 ^ v845 ^ v848);
      v850 = __ROR8__(v547, 1);
      v851 = __ROR8__(v547, 8);
      v852 = v708 + v529 + ((v547 >> 7) ^ v850 ^ v851);
      v853 = __ROR8__(v815, 19);
      v854 = v567;
      v855 = __ROL8__(v815, 3);
      v856 = ((v815 >> 6) ^ v853 ^ v855) + v852;
      v857 = v856;
      v858 = (v801 ^ v847 & (v824 ^ v801)) + v856 + 2177327727835720531LL + v779;
      v859 = __ROR8__(v847, 14);
      v860 = v859;
      v861 = __ROR8__(v847, 18);
      v862 = v860 ^ v861;
      v863 = __ROL8__(v847, 23);
      v864 = v858 + (v863 ^ v862);
      v865 = __ROL8__(v849, 30);
      v866 = __ROR8__(v849, 28);
      v867 = v864 + v784;
      v868 = v866 ^ v865;
      v869 = __ROL8__(v849, 25);
      v870 = v864 + (v869 ^ v868) + (v849 & v829 | v806 & (v849 | v829));
      v871 = __ROR8__(v567, 1);
      v872 = __ROR8__(v567, 8);
      v873 = __ROR8__(v836, 19);
      v874 = v873;
      v875 = __ROL8__(v836, 3);
      v876 = ((v836 >> 6) ^ v874 ^ v875) + v728 + v835 + ((v567 >> 7) ^ v871 ^ v872);
      v877 = v876;
      v878 = __ROR8__(v867, 14);
      v879 = v878;
      v880 = __ROR8__(v867, 18);
      v881 = v879 ^ v880;
      v882 = __ROL8__(v867, 23);
      v883 = (v824 ^ v867 & (v847 ^ v824)) + v876 + 2830643537854262169LL + v801 + (v882 ^ v881);
      v884 = __ROR8__(v870, 28);
      v885 = v883 + v806;
      v886 = v884;
      v887 = __ROL8__(v870, 30);
      v888 = v886 ^ v887;
      v889 = __ROL8__(v870, 25);
      v890 = __ROR8__(v857, 19);
      v891 = v883 + (v870 & v849 | v829 & (v870 | v849)) + (v889 ^ v888);
      v892 = __ROR8__(v588, 1);
      v893 = __ROR8__(v588, 8);
      v894 = (v588 >> 7) ^ v892 ^ v893;
      v895 = __ROL8__(v857, 3);
      v896 = ((v857 >> 6) ^ v890 ^ v895) + v752 + v854 + v894;
      v897 = v896;
      v898 = (v847 ^ v885 & (v867 ^ v847)) + v896 + 3796741975233480872LL + v824;
      v899 = __ROR8__(v885, 14);
      v900 = v899;
      v901 = __ROR8__(v885, 18);
      v902 = v900 ^ v901;
      v903 = __ROL8__(v885, 23);
      v904 = v898 + (v903 ^ v902);
      v905 = __ROR8__(v891, 28);
      v906 = v904 + v829;
      v907 = v905;
      v908 = __ROL8__(v891, 30);
      v909 = v907 ^ v908;
      v910 = __ROL8__(v891, 25);
      v911 = v904 + (v891 & v870 | v849 & (v891 | v870)) + (v910 ^ v909);
      v912 = __ROR8__(v609, 8);
      v913 = __ROR8__(v609, 1);
      v914 = (v609 >> 7) ^ v913 ^ v912;
      v915 = __ROR8__(v877, 19);
      v916 = __ROL8__(v877, 3);
      v917 = v772 + v588 + v914 + ((v877 >> 6) ^ v915 ^ v916);
      v918 = v917 + 4115178125766777443LL;
      v919 = v917;
      v920 = v629;
      v921 = (v867 ^ v906 & (v885 ^ v867)) + v918 + v847;
      v922 = __ROR8__(v906, 14);
      v923 = v922;
      v924 = __ROR8__(v906, 18);
      v925 = v923 ^ v924;
      v926 = __ROL8__(v906, 23);
      v927 = v921 + (v926 ^ v925);
      v928 = __ROR8__(v911, 28);
      v929 = v927 + v849;
      v930 = v928;
      v931 = __ROL8__(v911, 30);
      v932 = v930 ^ v931;
      v933 = __ROL8__(v911, 25);
      v934 = v927 + (v911 & v891 | v870 & (v911 | v891)) + (v933 ^ v932);
      v935 = __ROR8__(v629, 8);
      v936 = __ROR8__(v629, 1);
      v937 = (v629 >> 7) ^ v936 ^ v935;
      v938 = v897;
      v897 = __ROR8__(v897, 19);
      v939 = v897;
      v940 = v938;
      v938 = __ROL8__(v938, 3);
      v941 = v940;
      v942 = v792 + v609 + v937 + ((v940 >> 6) ^ v939 ^ v938);
      v943 = v942;
      v944 = (v885 ^ v929 & (v906 ^ v885)) + v942 + 5681478168544905931LL + v867;
      v945 = __ROR8__(v929, 14);
      v946 = v945;
      v947 = __ROR8__(v929, 18);
      v948 = v946 ^ v947;
      v949 = __ROL8__(v929, 23);
      v950 = v944 + (v949 ^ v948);
      v951 = __ROR8__(v934, 28);
      v952 = v950 + v870;
      v953 = v951;
      v954 = __ROL8__(v934, 30);
      v955 = v953 ^ v954;
      v956 = __ROL8__(v934, 25);
      v957 = v950 + (v934 & v911 | v891 & (v934 | v911)) + (v956 ^ v955);
      v958 = __ROR8__(v650, 1);
      v959 = __ROR8__(v650, 8);
      v960 = v815 + v920 + ((v650 >> 7) ^ v958 ^ v959);
      v961 = __ROR8__(v919, 19);
      v962 = __ROL8__(v919, 3);
      v963 = ((v919 >> 6) ^ v961 ^ v962) + v960;
      v964 = v963;
      v965 = __ROR8__(v952, 14);
      v966 = __ROR8__(v952, 18);
      v967 = v965 ^ v966;
      v968 = __ROL8__(v952, 23);
      v969 = (v906 ^ v952 & (v929 ^ v906)) + v963 + 6601373596472566643LL + v885 + (v968 ^ v967);
      v970 = __ROR8__(v957, 28);
      v971 = v969 + v891;
      v972 = v970;
      v973 = __ROL8__(v957, 30);
      v974 = v972 ^ v973;
      v975 = __ROL8__(v957, 25);
      v976 = v969 + (v957 & v934 | v911 & (v957 | v934)) + (v975 ^ v974);
      v977 = __ROR8__(v669, 1);
      v978 = __ROR8__(v669, 8);
      v979 = v650 + ((v669 >> 7) ^ v977 ^ v978);
      v980 = __ROR8__(v943, 19);
      v981 = v943;
      v943 = __ROL8__(v943, 3);
      v982 = v981;
      v983 = ((v981 >> 6) ^ v980 ^ v943) + v836 + v979;
      v984 = __ROR8__(v971, 14);
      v985 = v984;
      v986 = __ROR8__(v971, 18);
      v987 = v985 ^ v986;
      v988 = __ROL8__(v971, 23);
      v989 = (v929 ^ v971 & (v952 ^ v929)) + v983 + 7507060721942968483LL + v906 + (v988 ^ v987);
      v990 = __ROR8__(v976, 28);
      v991 = v989 + v911;
      v992 = v990;
      v993 = __ROL8__(v976, 30);
      v994 = v992 ^ v993;
      v995 = __ROL8__(v976, 25);
      v996 = v689;
      v997 = v983;
      v998 = (v995 ^ v994) + (v976 & v957 | v934 & (v976 | v957)) + v989;
      v999 = __ROR8__(v996, 1);
      v1000 = __ROR8__(v996, 8);
      v1001 = __ROR8__(v963, 19);
      v1002 = v669 + ((v996 >> 7) ^ v999 ^ v1000) + v857;
      v1003 = __ROL8__(v963, 3);
      v1004 = v1001 ^ v1003;
      v1005 = v963;
      v1006 = v708;
      v1007 = v1002 + ((v1005 >> 6) ^ v1004);
      v1008 = v1007;
      v1009 = __ROR8__(v991, 18);
      v1010 = __ROR8__(v991, 14);
      v1011 = v1010 ^ v1009;
      v1012 = __ROL8__(v991, 23);
      v1013 = (v952 ^ v991 & (v971 ^ v952)) + v1007 + 8399075790359081724LL + v929 + (v1011 ^ v1012);
      v1014 = __ROR8__(v998, 28);
      v1015 = __ROL8__(v998, 30);
      v1016 = v1013 + v934;
      v1017 = v1014 ^ v1015;
      v1018 = __ROL8__(v998, 25);
      v1019 = v1013 + (v1018 ^ v1017) + (v998 & v976 | v957 & (v998 | v976));
      v1020 = __ROR8__(v708, 1);
      v1021 = __ROR8__(v708, 8);
      v1022 = __ROR8__(v983, 19);
      v1023 = v996 + ((v708 >> 7) ^ v1020 ^ v1021) + v877;
      v1024 = __ROL8__(v1019, 25);
      v1025 = __ROL8__(v983, 3);
      v1026 = ((v983 >> 6) ^ v1022 ^ v1025) + v1023;
      v1027 = v1026;
      v1028 = __ROR8__(v1016, 14);
      v1029 = v1028;
      v1030 = __ROR8__(v1016, 18);
      v1031 = v1030;
      v1032 = __ROL8__(v1016, 23);
      v1033 = v1029 ^ v1031;
      v1034 = v1032;
      v1035 = __ROR8__(v1019, 28);
      v1036 = v1033 ^ v1034;
      v1037 = v1035;
      v1038 = (v971 ^ v1016 & (v991 ^ v971)) + v1026 + 8693463985226723168LL + v952 + v1036;
      v1039 = __ROL8__(v1019, 30);
      v1040 = v1038 + v957;
      v1041 = v1038 + (v1024 ^ v1037 ^ v1039) + (v1019 & v998 | v976 & (v1019 | v998));
      v1042 = __ROR8__(v728, 1);
      v1043 = __ROR8__(v728, 8);
      v1044 = v1006 + ((v728 >> 7) ^ v1042 ^ v1043) + v941;
      v1045 = __ROR8__(v1008, 19);
      v1046 = __ROL8__(v1008, 3);
      v1047 = ((v1008 >> 6) ^ v1045 ^ v1046) + v1044;
      v1048 = v1047;
      v1049 = (v991 ^ v1040 & (v1016 ^ v991)) + v1047 - 8878714635349349518LL + v971;
      v1050 = __ROR8__(v1040, 14);
      v1051 = v1050;
      v1052 = __ROR8__(v1040, 18);
      v1053 = v1051 ^ v1052;
      v1054 = __ROL8__(v1040, 23);
      v1055 = v1049 + (v1053 ^ v1054);
      v1056 = __ROR8__(v1041, 28);
      v1057 = v1055 + v976;
      v1058 = __ROL8__(v1041, 30);
      v1059 = v1056 ^ v1058;
      v1060 = __ROL8__(v1041, 25);
      v1061 = v1055 + (v1060 ^ v1059) + (v1041 & v1019 | v998 & (v1041 | v1019));
      v1062 = __ROR8__(v752, 1);
      v1063 = __ROR8__(v752, 8);
      v1064 = v728 + ((v752 >> 7) ^ v1062 ^ v1063) + v919;
      v1065 = __ROR8__(v1026, 19);
      v1066 = __ROL8__(v1026, 3);
      v1067 = v1064 + ((v1026 >> 6) ^ v1065 ^ v1066);
      v1068 = v1067;
      v1069 = __ROR8__(v1057, 14);
      v1070 = v1069;
      v1071 = __ROR8__(v1057, 18);
      v1072 = v1070 ^ v1071;
      v1073 = __ROL8__(v1057, 23);
      v1074 = v1073;
      v1075 = __ROR8__(v1061, 28);
      v1076 = v1072 ^ v1074;
      v1077 = v1075;
      v1078 = (v1016 ^ v1057 & (v1040 ^ v1016)) + v1067 - 8302665154208450068LL + v991 + v1076;
      v1079 = __ROL8__(v1061, 30);
      v1080 = v998 + v1078;
      v1081 = v1079;
      v1082 = __ROL8__(v1061, 25);
      v1083 = v815;
      v1084 = (v1082 ^ v1077 ^ v1081) + (v1061 & v1041 | v1019 & (v1061 | v1041)) + v1078;
      v1085 = __ROR8__(v772, 1);
      v1086 = __ROR8__(v772, 8);
      v1087 = v982 + v752 + ((v772 >> 7) ^ v1085 ^ v1086);
      v1088 = __ROR8__(v1048, 19);
      v1089 = v1088;
      v1090 = __ROL8__(v1048, 3);
      v1091 = ((v1048 >> 6) ^ v1089 ^ v1090) + v1087;
      v1092 = v1091;
      v1093 = (v1040 ^ v1080 & (v1057 ^ v1040)) + v1091 - 8016688836872298968LL + v1016;
      v1094 = __ROR8__(v1080, 14);
      v1095 = __ROR8__(v1080, 18);
      v1096 = v1094 ^ v1095;
      v1097 = __ROL8__(v1080, 23);
      v1098 = v1093 + (v1096 ^ v1097);
      v1099 = __ROR8__(v1084, 28);
      v1100 = v1098 + v1019;
      v1101 = v1099;
      v1102 = __ROL8__(v1084, 30);
      v1103 = v1102;
      v1104 = __ROL8__(v1084, 25);
      v1105 = v1098 + (v1104 ^ v1101 ^ v1103) + (v1084 & v1061 | v1041 & (v1084 | v1061));
      v1106 = __ROR8__(v792, 1);
      v1107 = __ROR8__(v792, 8);
      v1108 = v964 + v772 + ((v792 >> 7) ^ v1106 ^ v1107);
      v1109 = __ROR8__(v1068, 19);
      v1110 = __ROL8__(v1068, 3);
      v1111 = ((v1068 >> 6) ^ v1109 ^ v1110) + v1108;
      v1112 = v1111;
      v1113 = (v1057 ^ v1100 & (v1080 ^ v1057)) + v1111 - 6606660893046293015LL + v1040;
      v1114 = __ROR8__(v1100, 18);
      v1115 = __ROR8__(v1100, 14);
      v1116 = v1115 ^ v1114;
      v1117 = __ROL8__(v1100, 23);
      v1118 = v1113 + (v1116 ^ v1117);
      v1119 = __ROR8__(v1105, 28);
      v1120 = v1118 + v1041;
      v1121 = v1119;
      v1122 = __ROL8__(v1105, 30);
      v1123 = v1122;
      v1124 = __ROL8__(v1105, 25);
      v1125 = v1118 + (v1124 ^ v1121 ^ v1123) + (v1105 & v1084 | v1061 & (v1105 | v1084));
      v1126 = __ROR8__(v815, 1);
      v1127 = __ROR8__(v815, 8);
      v1128 = v792 + ((v815 >> 7) ^ v1126 ^ v1127);
      v1129 = __ROR8__(v1092, 19);
      v1130 = __ROL8__(v1092, 3);
      v1131 = ((v1092 >> 6) ^ v1129 ^ v1130) + v997 + v1128;
      v1132 = v1131;
      v1133 = __ROL8__(v1125, 30);
      v1134 = (v1080 ^ v1120 & (v1100 ^ v1080)) + v1131 - 4685533653050689259LL + v1057;
      v1135 = __ROR8__(v1120, 14);
      v1136 = __ROR8__(v1120, 18);
      v1137 = v1135 ^ v1136;
      v1138 = __ROL8__(v1120, 23);
      v1139 = v1137 ^ v1138;
      v1140 = __ROR8__(v1125, 28);
      v1141 = v1134 + v1139;
      v1142 = v1140 ^ v1133;
      v1143 = v1061 + v1141;
      v1144 = __ROL8__(v1125, 25);
      v1145 = v1141 + (v1144 ^ v1142) + (v1125 & v1105 | v1084 & (v1125 | v1105));
      v1146 = __ROR8__(v836, 1);
      v1147 = v1146;
      v1148 = __ROR8__(v836, 8);
      v1149 = v1008 + v1083 + ((v836 >> 7) ^ v1147 ^ v1148);
      v1150 = __ROR8__(v1112, 19);
      v1151 = __ROL8__(v1112, 3);
      v1152 = ((v1112 >> 6) ^ v1150 ^ v1151) + v1149;
      v1153 = __ROR8__(v1143, 18);
      v1154 = (v1100 ^ v1143 & (v1120 ^ v1100)) + v1152 - 4147400797238176981LL + v1080;
      v1155 = __ROR8__(v1143, 14);
      v1156 = __ROL8__(v1145, 30);
      v1157 = v1155 ^ v1153;
      v1158 = __ROL8__(v1143, 23);
      v1159 = v1157 ^ v1158;
      v1160 = __ROR8__(v1145, 28);
      v1161 = v1154 + v1159;
      v1162 = v1160 ^ v1156;
      v1163 = v1084 + v1161;
      v1164 = __ROL8__(v1145, 25);
      v1165 = v1161 + (v1164 ^ v1162) + (v1145 & v1125 | v1105 & (v1145 | v1125));
      v1166 = __ROR8__(v857, 1);
      v1167 = __ROR8__(v857, 8);
      v1168 = v1027 + ((v857 >> 7) ^ v1166 ^ v1167) + v836;
      v1169 = __ROR8__(v1131, 19);
      v1170 = v1169;
      v1171 = __ROL8__(v1131, 3);
      v1473 = v1168 + ((v1131 >> 6) ^ v1170 ^ v1171);
      v1172 = v1168 + ((v1131 >> 6) ^ v1170 ^ v1171);
      v1173 = (v1120 ^ v1163 & (v1143 ^ v1120)) + v1473 - 3880063495543823972LL + v1100;
      v1174 = __ROR8__(v1163, 14);
      v1175 = __ROR8__(v1163, 18);
      v1176 = v1174 ^ v1175;
      v1177 = __ROL8__(v1163, 23);
      v1178 = v1173 + (v1176 ^ v1177);
      v1179 = __ROR8__(v1165, 28);
      v1180 = __ROL8__(v1165, 30);
      v1181 = v1178 + v1105;
      v1182 = v1179 ^ v1180;
      v1183 = __ROL8__(v1165, 25);
      v1184 = v1178 + (v1183 ^ v1182) + (v1165 & v1145 | v1125 & (v1165 | v1145));
      v1185 = __ROR8__(v877, 1);
      v1186 = __ROR8__(v877, 8);
      v1187 = __ROR8__(v1181, 18);
      v1188 = v857 + ((v877 >> 7) ^ v1185 ^ v1186);
      v1189 = __ROR8__(v1152, 19);
      v1190 = __ROL8__(v1152, 3);
      v1474 = v1048 + v1188 + ((v1152 >> 6) ^ v1189 ^ v1190);
      v1191 = __ROR8__(v1181, 14);
      v1192 = v1191 ^ v1187;
      v1193 = __ROL8__(v1181, 23);
      v1194 = (v1143 ^ v1181 & (v1163 ^ v1143)) + v1474 - 3348786107499101689LL + v1120 + (v1192 ^ v1193);
      v1195 = __ROR8__(v1184, 28);
      v1196 = v1194 + v1125;
      v1197 = v1195;
      v1198 = __ROL8__(v1184, 30);
      v1199 = v1198;
      v1200 = __ROL8__(v1184, 25);
      v1201 = v1200 ^ v1197 ^ v1199;
      v1202 = __ROR8__(v941, 1);
      v1203 = __ROR8__(v941, 8);
      v1204 = v1194 + v1201 + (v1184 & v1165 | v1145 & (v1184 | v1165));
      v1205 = __ROL8__(v1172, 3);
      v1206 = __ROR8__(v1172, 19);
      v1207 = v1068 + v877 + ((v941 >> 7) ^ v1202 ^ v1203) + ((v1172 >> 6) ^ v1206 ^ v1205);
      v1208 = __ROR8__(v1196, 18);
      v1475 = v1207;
      v1209 = __ROR8__(v1196, 14);
      v1210 = v1209 ^ v1208;
      v1211 = __ROL8__(v1196, 23);
      v1212 = (v1163 ^ v1196 & (v1181 ^ v1163)) + v1207 - 1523767162380948706LL + v1143 + (v1210 ^ v1211);
      v1213 = v1212 + v1145;
      v1214 = __ROR8__(v1204, 28);
      v1215 = v1214;
      v1216 = __ROL8__(v1204, 30);
      v1217 = v1216;
      v1218 = __ROL8__(v1204, 25);
      v1219 = (v1218 ^ v1215 ^ v1217) + (v1204 & v1184 | v1165 & (v1204 | v1184));
      v1220 = __ROR8__(v919, 8);
      v1221 = v1212 + v1219;
      v1222 = __ROL8__(v1474, 3);
      v1223 = __ROR8__(v919, 1);
      v1224 = v941 + ((v919 >> 7) ^ v1223 ^ v1220);
      v1225 = __ROR8__(v1474, 19);
      v1476 = v1092 + v1224 + ((v1474 >> 6) ^ v1225 ^ v1222);
      v1226 = (v1181 ^ v1213 & (v1196 ^ v1181)) + v1476 - 757361751448694408LL + v1163;
      v1227 = __ROR8__(v1213, 18);
      v1228 = __ROR8__(v1213, 14);
      v1229 = v1228 ^ v1227;
      v1230 = __ROL8__(v1213, 23);
      v1231 = __ROR8__(v1221, 28);
      v1232 = v1229 ^ v1230;
      v1233 = v1231;
      v1234 = __ROL8__(v1221, 30);
      v1235 = v1226 + v1232;
      v1236 = v1234;
      v1237 = v1235 + v1165;
      v1238 = __ROL8__(v1221, 25);
      v1239 = v1235 + (v1238 ^ v1233 ^ v1236) + (v1221 & v1204 | v1184 & (v1221 | v1204));
      v1240 = __ROR8__(v982, 1);
      v1241 = __ROR8__(v982, 8);
      v1242 = __ROR8__(v1207, 19);
      v1243 = ((v982 >> 7) ^ v1240 ^ v1241) + v919 + v1112;
      v1244 = __ROL8__(v1207, 3);
      v1245 = v1243 + ((v1207 >> 6) ^ v1242 ^ v1244);
      v1477 = v1245;
      v1246 = __ROR8__(v1237, 18);
      v1247 = __ROR8__(v1237, 14);
      v1248 = v1247 ^ v1246;
      v1249 = __ROL8__(v1237, 23);
      v1250 = (v1196 ^ v1237 & (v1213 ^ v1196)) + v1245 + 500013540394364858LL + v1181 + (v1248 ^ v1249);
      v1251 = __ROR8__(v1239, 28);
      v1252 = __ROL8__(v1239, 30);
      v1253 = v1250 + v1184;
      v1254 = v1251 ^ v1252;
      v1255 = __ROL8__(v1239, 25);
      v1256 = v1250 + (v1255 ^ v1254) + (v1239 & v1221 | v1204 & (v1239 | v1221));
      v1257 = __ROR8__(v964, 1);
      v1258 = __ROR8__(v964, 8);
      v1259 = __ROR8__(v1476, 19);
      v1260 = v1132 + v982 + ((v964 >> 7) ^ v1257 ^ v1258);
      v1261 = __ROL8__(v1476, 3);
      v1262 = v1260 + ((v1476 >> 6) ^ v1259 ^ v1261);
      v1478 = v1260 + ((v1476 >> 6) ^ v1259 ^ v1261);
      v1263 = __ROR8__(v1253, 14);
      v1264 = v1263;
      v1265 = __ROR8__(v1253, 18);
      v1266 = v1264 ^ v1265;
      v1267 = __ROL8__(v1253, 23);
      v1268 = (v1213 ^ v1253 & (v1237 ^ v1213)) + v1262 + 748580250866718886LL + v1196 + (v1266 ^ v1267);
      v1269 = __ROR8__(v1256, 28);
      v1270 = __ROL8__(v1256, 30);
      v1271 = v1268 + v1204;
      v1272 = v1269 ^ v1270;
      v1273 = __ROL8__(v1256, 25);
      v1274 = v1268 + (v1273 ^ v1272) + (v1256 & v1239 | v1221 & (v1256 | v1239));
      v1275 = __ROR8__(v997, 1);
      v1276 = __ROR8__(v997, 8);
      v1277 = __ROR8__(v1245, 19);
      v1278 = v964 + ((v997 >> 7) ^ v1275 ^ v1276);
      v1279 = __ROL8__(v1245, 3);
      v1280 = ((v1245 >> 6) ^ v1277 ^ v1279) + v1152 + v1278;
      v1479 = v1280;
      v1281 = v1280;
      v1282 = __ROL8__(v1274, 30);
      v1283 = (v1237 ^ v1271 & (v1253 ^ v1237)) + v1280 + 1242879168328830382LL + v1213;
      v1284 = __ROR8__(v1271, 14);
      v1285 = v1284;
      v1286 = __ROR8__(v1271, 18);
      v1287 = v1285 ^ v1286;
      v1288 = __ROL8__(v1271, 23);
      v1289 = v1283 + (v1287 ^ v1288);
      v1290 = __ROR8__(v1274, 28);
      v1291 = v1290 ^ v1282;
      v1292 = v1289 + v1221;
      v1293 = __ROL8__(v1274, 25);
      v1294 = v1289 + (v1293 ^ v1291) + (v1274 & v1256 | v1239 & (v1274 | v1256));
      v1295 = __ROR8__(v1008, 1);
      v1296 = __ROR8__(v1008, 8);
      v1297 = (v1008 >> 7) ^ v1295 ^ v1296;
      v1298 = __ROL8__(v1262, 3);
      v1299 = __ROR8__(v1262, 19);
      v1300 = ((v1262 >> 6) ^ v1299 ^ v1298) + v1172 + v997 + v1297;
      v1480 = v1300;
      v1301 = v1300;
      v1302 = __ROL8__(v1292, 23);
      v1303 = (v1253 ^ v1292 & (v1271 ^ v1253)) + v1300 + 1977374033974150939LL + v1237;
      v1304 = __ROR8__(v1292, 14);
      v1305 = v1304;
      v1306 = __ROR8__(v1292, 18);
      v1307 = v1303 + (v1302 ^ v1305 ^ v1306);
      v1308 = __ROL8__(v1294, 25);
      v1309 = v1239 + v1307;
      v1310 = __ROR8__(v1294, 28);
      v1311 = v1310;
      v1312 = __ROL8__(v1294, 30);
      v1313 = (v1308 ^ v1311 ^ v1312) + (v1294 & v1274 | v1256 & (v1294 | v1274)) + v1307;
      v1314 = __ROR8__(v1027, 1);
      v1315 = __ROR8__(v1027, 8);
      v1316 = v1008 + ((v1027 >> 7) ^ v1314 ^ v1315) + v1474;
      v1317 = __ROR8__(v1281, 19);
      v1318 = __ROL8__(v1281, 3);
      v1481 = v1316 + ((v1281 >> 6) ^ v1317 ^ v1318);
      v1319 = (v1271 ^ v1309 & (v1292 ^ v1271)) + v1481 + 2944078676154940804LL + v1253;
      v1320 = __ROR8__(v1309, 14);
      v1321 = v1320;
      v1322 = __ROR8__(v1309, 18);
      v1323 = v1321 ^ v1322;
      v1324 = __ROL8__(v1309, 23);
      v1325 = v1319 + (v1323 ^ v1324);
      v1326 = __ROR8__(v1313, 28);
      v1327 = __ROL8__(v1313, 30);
      v1328 = v1325 + v1256;
      v1329 = v1326 ^ v1327;
      v1330 = __ROL8__(v1313, 25);
      v1331 = v1325 + (v1330 ^ v1329) + (v1313 & v1294 | v1274 & (v1313 | v1294));
      v1332 = __ROR8__(v1048, 1);
      v1333 = __ROR8__(v1048, 8);
      v1334 = v1207 + v1027 + ((v1048 >> 7) ^ v1332 ^ v1333);
      v1335 = __ROR8__(v1301, 19);
      v1336 = __ROL8__(v1301, 3);
      v1337 = v1334 + ((v1301 >> 6) ^ v1335 ^ v1336);
      v1482 = v1337;
      v1338 = (v1292 ^ v1328 & (v1309 ^ v1292)) + v1337 + 3659926193048069267LL + v1271;
      v1339 = __ROR8__(v1328, 14);
      v1340 = v1339;
      v1341 = __ROR8__(v1328, 18);
      v1342 = v1340 ^ v1341;
      v1343 = __ROL8__(v1328, 23);
      v1344 = v1338 + (v1342 ^ v1343);
      v1345 = __ROR8__(v1331, 28);
      v1346 = __ROL8__(v1331, 30);
      v1347 = v1344 + v1274;
      v1348 = v1345 ^ v1346;
      v1349 = __ROL8__(v1331, 25);
      v1350 = v1344 + (v1349 ^ v1348) + (v1331 & v1313 | v1294 & (v1331 | v1313));
      v1351 = __ROR8__(v1068, 1);
      v1352 = __ROR8__(v1068, 8);
      v1353 = v1476 + v1048 + ((v1068 >> 7) ^ v1351 ^ v1352);
      v1354 = __ROR8__(v1481, 19);
      v1355 = __ROL8__(v1481, 3);
      v1483 = v1353 + ((v1481 >> 6) ^ v1354 ^ v1355);
      v1356 = (v1309 ^ v1347 & (v1328 ^ v1309)) + v1483 + 4368137639120453308LL + v1292;
      v1357 = __ROR8__(v1347, 14);
      v1358 = v1357;
      v1359 = __ROR8__(v1347, 18);
      v1360 = v1358 ^ v1359;
      v1361 = __ROL8__(v1347, 23);
      v1362 = v1356 + (v1361 ^ v1360);
      v1363 = __ROR8__(v1350, 28);
      v1364 = v1362 + v1294;
      v1365 = v1363;
      v1366 = __ROL8__(v1350, 30);
      v1367 = v1365 ^ v1366;
      v1368 = __ROL8__(v1350, 25);
      v1369 = (v1368 ^ v1367) + (v1350 & v1331 | v1313 & (v1350 | v1331)) + v1362;
      v1370 = __ROR8__(v1092, 1);
      v1371 = __ROR8__(v1092, 8);
      v1372 = v1245 + v1068 + ((v1092 >> 7) ^ v1370 ^ v1371);
      v1373 = __ROR8__(v1337, 19);
      v1374 = v1373;
      v1375 = __ROL8__(v1337, 3);
      v1376 = v1372 + ((v1337 >> 6) ^ v1374 ^ v1375);
      v1484 = v1376;
      v1377 = __ROR8__(v1364, 14);
      v1378 = v1377;
      v1379 = __ROR8__(v1364, 18);
      v1380 = v1378 ^ v1379;
      v1381 = __ROL8__(v1364, 23);
      v1382 = (v1328 ^ v1364 & (v1347 ^ v1328)) + v1376 + 4836135668995329356LL + v1309 + (v1381 ^ v1380);
      v1383 = __ROR8__(v1369, 28);
      v1384 = v1382 + v1313;
      v1385 = v1383;
      v1386 = __ROL8__(v1369, 30);
      v1387 = v1385 ^ v1386;
      v1388 = __ROL8__(v1369, 25);
      v1389 = (v1388 ^ v1387) + (v1369 & v1350 | v1331 & (v1369 | v1350)) + v1382;
      v1390 = __ROR8__(v1112, 1);
      v1391 = __ROR8__(v1112, 8);
      v1392 = v1092 + ((v1112 >> 7) ^ v1390 ^ v1391) + v1262;
      v1393 = __ROR8__(v1483, 19);
      v1394 = v1393;
      v1395 = __ROL8__(v1483, 3);
      v1396 = v1392 + ((v1483 >> 6) ^ v1394 ^ v1395);
      v1485 = v1396;
      v1397 = __ROR8__(v1384, 14);
      v1398 = v1397;
      v1399 = __ROR8__(v1384, 18);
      v1400 = v1398 ^ v1399;
      v1401 = __ROL8__(v1384, 23);
      v1402 = (v1347 ^ v1384 & (v1364 ^ v1347)) + v1396 + 5532061633213252278LL + v1328 + (v1401 ^ v1400);
      v1403 = __ROR8__(v1389, 28);
      v1404 = v1402 + v1331;
      v1405 = v1403;
      v1406 = __ROL8__(v1389, 30);
      v1407 = v1405 ^ v1406;
      v1408 = __ROL8__(v1389, 25);
      v1409 = (v1408 ^ v1407) + (v1389 & v1369 | v1350 & (v1389 | v1369)) + v1402;
      v1410 = __ROR8__(v1132, 1);
      v1411 = __ROR8__(v1132, 8);
      v1412 = __ROR8__(v1376, 19);
      v1413 = v1112 + ((v1132 >> 7) ^ v1410 ^ v1411);
      v1414 = __ROL8__(v1376, 3);
      v1415 = v1281 + v1413 + (v1412 ^ v1414 ^ (v1376 >> 6));
      v1486 = v1415;
      v1416 = __ROR8__(v1404, 14);
      v1417 = __ROR8__(v1404, 18);
      v1418 = v1416 ^ v1417;
      v1419 = __ROL8__(v1404, 23);
      v1420 = (v1364 ^ v1404 & (v1384 ^ v1364)) + v1415 + 6448918945643986474LL + v1347 + (v1419 ^ v1418);
      v1421 = __ROR8__(v1409, 28);
      v1422 = __ROL8__(v1409, 30);
      v1423 = v1420 + v1350;
      v1424 = v1421 ^ v1422;
      v1425 = __ROL8__(v1409, 25);
      v1426 = (v1425 ^ v1424) + (v1409 & v1389 | v1369 & (v1409 | v1389)) + v1420;
      v1427 = __ROR8__(v1152, 1);
      v1428 = __ROR8__(v1152, 8);
      v1429 = v1132 + ((v1152 >> 7) ^ v1427 ^ v1428) + v1301;
      v1430 = __ROR8__(v1396, 19);
      v1431 = v1430;
      v1432 = __ROL8__(v1396, 3);
      v1433 = ((v1396 >> 6) ^ v1431 ^ v1432) + v1429;
      v1487 = v1433;
      v1434 = __ROR8__(v1423, 14);
      v1435 = v1433 + 6902733635092675308LL + v1364 + (v1384 ^ v1423 & (v1404 ^ v1384));
      v1436 = __ROR8__(v1423, 18);
      v1437 = v1434 ^ v1436;
      v1438 = __ROL8__(v1423, 23);
      v1439 = v1435 + (v1438 ^ v1437);
      v1440 = __ROR8__(v1426, 28);
      v1441 = __ROL8__(v1426, 30);
      v1442 = v1439 + v1369;
      v1443 = v1440 ^ v1441;
      v1444 = __ROL8__(v1426, 25);
      v1445 = (v1444 ^ v1443) + (v1426 & v1409 | v1389 & (v1426 | v1409)) + v1439;
      v1446 = __ROR8__(v1172, 1);
      v1447 = __ROR8__(v1172, 8);
      v1448 = v1152 + ((v1172 >> 7) ^ v1446 ^ v1447) + v1481;
      v1449 = __ROL8__(v1415, 3);
      v1463 += v1445;
      v1450 = __ROR8__(v1415, 19);
      v1451 = ((v1415 >> 6) ^ v1450 ^ v1449) + v1448;
      v1452 = __ROR8__(v1445, 28);
      v1488 = v1451;
      v1453 = __ROR8__(v1442, 14);
      v1454 = __ROR8__(v1442, 18);
      v1455 = v1453 ^ v1454;
      v1456 = __ROL8__(v1442, 23);
      v1457 = v1456 ^ v1455;
      v1458 = __ROL8__(v1445, 30);
      v1459 = (v1404 ^ v1442 & (v1423 ^ v1404)) + v1451 + 7801388544844847127LL + v1384 + v1457;
      v1460 = v1452 ^ v1458;
      v1461 = __ROL8__(v1445, 25);
      v1470 += (v1445 & v1426 | v1409 & (v1445 | v1426)) + (v1461 ^ v1460) + v1459;
      *(_QWORD *)v1472 = v1470;
      v11 = v1463;
      *(_QWORD *)(v1472 + 8) = v1463;
      v1464 += v1426;
      v7 = v1464;
      v1465 += v1409;
      v8 = v1465;
      v1466 += v1459 + v1389;
      v15 = v1466;
      result = v1470;
      v1467 += v1442;
      v16 = v1467;
      v1468 += v1423;
      v17 = v1468;
      v1469 += v1404;
      v14 = v1469;
      *(_QWORD *)(v1472 + 16) = v1464;
      *(_QWORD *)(v1472 + 24) = v1465;
      *(_QWORD *)(v1472 + 32) = v1466;
      *(_QWORD *)(v1472 + 40) = v1467;
      *(_QWORD *)(v1472 + 48) = v1468;
      *(_QWORD *)(v1472 + 56) = v1469;
    }
    while ( v1462 < v1471 );
  }
  return result;
}

__int64 __fastcall sub_406ED0(__int64 a1)
{
  unsigned __int64 v1; // rcx@1
  __int64 v2; // rax@1
  __int64 v3; // rdx@1
  __int64 v4; // rbp@1
  unsigned __int8 v5; // cf@1
  unsigned __int64 v6; // rdx@1

  v1 = *(_QWORD *)(a1 + 80);
  v2 = *(_QWORD *)(a1 + 72);
  v3 = *(_QWORD *)(a1 + 80);
  v4 = (-(signed __int64)(v1 < 0x70) & 0xFFFFFFFFFFFFFF80LL) + 256;
  v5 = __CFADD__(*(_QWORD *)(a1 + 64), v3);
  v6 = *(_QWORD *)(a1 + 64) + v3;
  *(_QWORD *)(a1 + 64) = v6;
  if ( v5 )
    *(_QWORD *)(a1 + 72) = ++v2;
  _RAX = (v6 >> 61) | 8 * v2;
  __asm (" bswap   rax ");
  *(_QWORD *)(a1 + 8 * ((-(signed __int64)(v1 < 0x70) & 0xFFFFFFFFFFFFFFF0LL) + 30) + 88) = _RAX;
  *(_QWORD *)(a1 + 8 * ((-(signed __int64)(v1 < 0x70) & 0xFFFFFFFFFFFFFFF0LL) + 31) + 88) = (8 * v6 >> 40) & 0xFF00 | (8 * v6 >> 24) & 0xFF0000 | (8 * v6 >> 8) & 0xFF000000 | (8 * v6 >> 56) | (v6 << 11) & 0xFF00000000LL | (v6 << 59) | (v6 << 27) & 0xFF0000000000LL | (v6 << 43) & 0xFF000000000000LL;
  memcpy((void *)(a1 + 88 + v1), "�", v4 - v1 - 16);
  return sub_403280(a1 + 88, v4, a1);
}

void __fastcall sub_407060(void *src, size_t n, __int64 a3)
{
  size_t v3; // r13@1
  __int64 v4; // r12@1
  const __m128i *v5; // rbx@1
  __int64 v6; // rbp@1
  char *v7; // rbp@4
  const __m128i *v8; // r14@5
  __m128i v9; // xmm0@6
  __int64 v10; // rdx@8
  char *v11; // rsi@8
  size_t v12; // r13@13
  size_t v13; // rbp@15
  unsigned __int64 v14; // rdi@15
  unsigned __int64 v15; // r15@18
  signed __int64 v16; // r14@18
  unsigned __int64 v17; // rsi@20
  char *v18; // rdi@22
  unsigned int v19; // ecx@22
  char *v20; // rsi@24
  signed __int64 v21; // rcx@24

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
      sub_403280(v15, v17 & 0xFFFFFFFFFFFFFF80LL, v4);
      v20 = (char *)(v15 + ((v16 + v6) & 0xFFFFFFFFFFFFFF80LL));
      v21 = *(_QWORD *)(v4 + 80) & 0x7FLL;
      *(_QWORD *)(v4 + 80) = v21;
      if ( (unsigned int)v21 >= 8 )
      {
        *(_QWORD *)(v4 + 88) = *(_QWORD *)v20;
        *(_QWORD *)(v15 + (unsigned int)v21 - 8) = *(_QWORD *)&v20[(unsigned int)v21 - 8];
        qmemcpy(
          (void *)((v4 + 96) & 0xFFFFFFFFFFFFFFF8LL),
          &v20[-(v15 - ((v4 + 96) & 0xFFFFFFFFFFFFFFF8LL))],
          8LL * (((unsigned int)v15 - (((_DWORD)v4 + 96) & 0xFFFFFFF8) + (unsigned int)v21) >> 3));
      }
      else if ( v21 & 4 )
      {
        *(_DWORD *)(v4 + 88) = *(_DWORD *)v20;
        *(_DWORD *)(v15 + (unsigned int)v21 - 4) = *(_DWORD *)&v20[(unsigned int)v21 - 4];
      }
      else if ( (_DWORD)v21 )
      {
        *(_BYTE *)(v4 + 88) = *v20;
        if ( v21 & 2 )
          *(_WORD *)(v15 + (unsigned int)v21 - 2) = *(_WORD *)&v20[(unsigned int)v21 - 2];
      }
    }
    v5 = (const __m128i *)((char *)src + v16);
    v3 -= v16;
  }
  if ( v3 > 0x7F )
  {
    if ( (unsigned __int8)v5 & 7 )
    {
      v7 = (char *)(v4 + 88);
      if ( v3 == 128 )
      {
        v8 = v5;
      }
      else
      {
        v8 = &v5[8 * (((v3 - 129) >> 7) + 1)];
        do
        {
          v9 = _mm_loadu_si128(v5);
          v5 += 8;
          *(__m128i *)v7 = v9;
          *(__m128i *)(v4 + 104) = _mm_loadu_si128(v5 - 7);
          *(__m128i *)(v4 + 120) = _mm_loadu_si128(v5 - 6);
          *(__m128i *)(v4 + 136) = _mm_loadu_si128(v5 - 5);
          *(__m128i *)(v4 + 152) = _mm_loadu_si128(v5 - 4);
          *(__m128i *)(v4 + 168) = _mm_loadu_si128(v5 - 3);
          *(__m128i *)(v4 + 184) = _mm_loadu_si128(v5 - 2);
          *(__m128i *)(v4 + 200) = _mm_loadu_si128(v5 - 1);
          sub_403280(v4 + 88, 128LL, v4);
        }
        while ( v5 != v8 );
        v3 = v3 + -128LL * ((v3 - 129) >> 7) - 128;
      }
LABEL_8:
      v10 = *(_QWORD *)(v4 + 80);
      v11 = &v7[v10];
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
          *(_DWORD *)&v11[(unsigned int)v3 - 4] = *(_DWORD *)((char *)&v8->m128i_i64[0] + (unsigned int)v3 - 4);
        }
        else if ( (_DWORD)v3 )
        {
          *v11 = v8->m128i_i64[0];
          if ( v3 & 2 )
            *(_WORD *)&v11[(unsigned int)v3 - 2] = *(_WORD *)((char *)&v8->m128i_i64[0] + (unsigned int)v3 - 2);
        }
        v12 = v10 + v3;
        if ( v12 <= 0x7F )
          goto LABEL_14;
      }
      v12 -= 128LL;
      sub_403280((unsigned __int64)v7, 128LL, v4);
      memcpy(v7, (const void *)(v4 + 216), v12);
      goto LABEL_14;
    }
    v13 = v3;
    v14 = (unsigned __int64)v5;
    v3 &= 0x7Fu;
    v5 = (const __m128i *)((char *)v5 + (v13 & 0xFFFFFFFFFFFFFF80LL));
    sub_403280(v14, v13 & 0xFFFFFFFFFFFFFF80LL, v4);
  }
  if ( v3 )
  {
    v7 = (char *)(v4 + 88);
    v8 = v5;
    goto LABEL_8;
  }
}

__int64 __fastcall sub_407510(FILE *stream, __int64 a2)
{
  char *v2; // rax@1
  char *v3; // r12@2
  size_t v4; // rbx@3
  int v5; // edx@4
  size_t v6; // rax@6
  __int64 result; // rax@11
  __int64 v8; // [sp+0h] [bp-188h]@2
  __int64 v9; // [sp+8h] [bp-180h]@2
  __int64 v10; // [sp+10h] [bp-178h]@2
  __int64 v11; // [sp+18h] [bp-170h]@2
  __int64 v12; // [sp+20h] [bp-168h]@2
  __int64 v13; // [sp+28h] [bp-160h]@2
  __int64 v14; // [sp+30h] [bp-158h]@2
  __int64 v15; // [sp+38h] [bp-150h]@2
  __int64 v16; // [sp+40h] [bp-148h]@2
  __int64 v17; // [sp+48h] [bp-140h]@2
  __int64 v18; // [sp+50h] [bp-138h]@2

  v2 = (char *)malloc(0x8048uLL);
  if ( v2 )
  {
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
        sub_403280((unsigned __int64)v3, 0x8000LL, (__int64)&v8);
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
    sub_406ED0((__int64)&v8);
    sub_403240((__int64)&v8, a2);
    free(v3);
    result = 0LL;
  }
  else
  {
    result = 1LL;
  }
  return result;
}

void __fastcall sub_407860(FILE *a1, int a2)
{
  int v2; // eax@2

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

FILE *__fastcall sub_407890(const char *a1, const char *a2)
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
      v6 = sub_409570((unsigned int)v4);
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
  qword_60F308 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_4079D0(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_40AF20(0LL);
  if ( (*(_BYTE *)v4 & 0xDF) == 85 )
  {
    if ( (*(_BYTE *)(v4 + 1) & 0xDF) == 84
      && (*(_BYTE *)(v4 + 2) & 0xDF) == 70
      && *(_BYTE *)(v4 + 3) == 45
      && *(_BYTE *)(v4 + 4) == 56
      && !*(_BYTE *)(v4 + 5) )
    {
      v5 = *v2 == 96;
      v2 = "‘";
      if ( !v5 )
        v2 = "’";
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
    v2 = "�\ae";
    if ( !v5 )
      v2 = "��";
    return (char *)v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_407AD0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_4079D0("`", v11);
        v58 = sub_4079D0("'", v11);
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
            return sub_407AD0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_407AD0((__int64)v9, v79, s);
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
                return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
            return sub_407AD0((__int64)v9, v10, s);
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
            return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
          return sub_407AD0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_407AD0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_40ADE0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_407AD0((__int64)v9, v10, s);
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
      return sub_407AD0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_407AD0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_4079D0("`", v11);
        v58 = sub_4079D0("'", v11);
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
            return sub_407AD0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_407AD0((__int64)v9, v79, s);
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
                return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
            return sub_407AD0((__int64)v9, v10, s);
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
            return sub_407AD0((__int64)v9, v10, s);
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
              return sub_407AD0((__int64)v9, v10, s);
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
          return sub_407AD0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_407AD0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_40ADE0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_407AD0((__int64)v9, v10, s);
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
      return sub_407AD0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_408D00(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60F278;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60F290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_409D70();
    v9 = 16LL * (a1 + 1);
    if ( off_60F278 == &xmmword_60F280 )
    {
      LODWORD(v20) = sub_409B80(0LL, v9);
      v7 = v20;
      off_60F278 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F280);
    }
    else
    {
      LODWORD(v10) = sub_409B80(off_60F278, v9);
      off_60F278 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60F290], 0, 16LL * (a1 + 1 - dword_60F290));
    dword_60F290 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_407AD0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60F320 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_409B20(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_407AD0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_408D00(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60F278;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60F290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_409D70();
    v9 = 16LL * (a1 + 1);
    if ( off_60F278 == &xmmword_60F280 )
    {
      LODWORD(v20) = sub_409B80(0LL, v9);
      v7 = v20;
      off_60F278 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60F280);
    }
    else
    {
      LODWORD(v10) = sub_409B80(off_60F278, v9);
      off_60F278 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60F290], 0, 16LL * (a1 + 1 - dword_60F290));
    dword_60F290 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_407AD0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60F320 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_409B20(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_407AD0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_409320(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_60F450;
  v4 = _mm_load_si128((const __m128i *)&xmmword_60F420);
  v5 = _mm_load_si128((const __m128i *)&xmmword_60F430);
  v6 = _mm_load_si128((const __m128i *)&xmmword_60F440);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_408D00(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_4093A0(char *a1)
{
  return sub_409320(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_4093D0(int a1, int a2, char *a3)
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
  return sub_408D00(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4093D0(int a1, int a2, char *a3)
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
  return sub_408D00(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

__int64 __fastcall sub_409570(char a1)
{
  return sub_409E30(a1);
}

int __fastcall sub_409580(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_409580(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_4099E0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_409580(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_409580(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_409B20(size_t a1)
{
  void *result; // rax@1

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
        sub_409D70();
    }
  }
  return result;
}

void *__fastcall sub_409D20(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_409B20(a2);
  return memcpy(v2, a1, a2);
}

noreturn void  sub_409D70()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_409DB0(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_409F70(stream) )
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

__int64 __fastcall sub_409E30(char a1, int a2, __int64 a3, __int64 a4)
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
    if ( dword_60F458 < 0 )
    {
      v4 = sub_409E30(a1);
      if ( v4 >= 0 && dword_60F458 == -1 )
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
        dword_60F458 = 1;
      }
      else
      {
        v4 = sub_409E30(a1);
        if ( v4 >= 0 )
        {
          dword_60F458 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

int __fastcall sub_409F70(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_409FB0(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_409FB0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_40A010(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_40A0F0(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_40A710(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_40A010(a2, a7);
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
        sub_40A010((__int64)v11, a7);
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
            v40 = sub_40A0F0(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_40A0F0(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_40A0F0(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_40ACE0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_60F460 = dword_60F29C;
  dword_60F464 = dword_60F298;
  result = sub_40A710(a1, a2, a3, a4, a5, a6, (__int64)&dword_60F460, a7);
  dword_60F29C = dword_60F460;
  qword_60F4A0 = qword_60F470;
  dword_60F294 = dword_60F468;
  return result;
}

__int64 __fastcall sub_40AD60(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_40ACE0(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_40ADE0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40AEC0(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

int __fastcall sub_40AE60(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  int result; // eax@1

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

const char *sub_40AF20()
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
                sub_409DB0(v61);
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
            sub_409DB0(v40);
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

int __fastcall sub_40B500(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_60F208 )
    v1 = unk_60F208;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40B518(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_60EE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
