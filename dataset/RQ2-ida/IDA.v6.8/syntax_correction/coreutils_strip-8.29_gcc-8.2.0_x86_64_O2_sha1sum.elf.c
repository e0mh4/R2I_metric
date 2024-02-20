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
  const char **v93; // [sp+0h] [bp-E8h]@44
  char *s; // [sp+8h] [bp-E0h]@46
  char v95; // [sp+13h] [bp-D5h]@45
  int v96; // [sp+14h] [bp-D4h]@47
  unsigned __int64 v97; // [sp+18h] [bp-D0h]@49
  signed __int64 v98; // [sp+20h] [bp-C8h]@76
  char v99; // [sp+28h] [bp-C0h]@76
  unsigned __int64 v100; // [sp+28h] [bp-C0h]@117
  __int64 v101; // [sp+30h] [bp-B8h]@76
  const char **v102; // [sp+38h] [bp-B0h]@42
  unsigned __int64 v103; // [sp+40h] [bp-A8h]@49
  char v104; // [sp+48h] [bp-A0h]@45
  char v105; // [sp+49h] [bp-9Fh]@49
  char v106; // [sp+4Ah] [bp-9Eh]@45
  char v107; // [sp+4Bh] [bp-9Dh]@45
  int v108; // [sp+4Ch] [bp-9Ch]@45
  char v109; // [sp+5Fh] [bp-89h]@90
  char *lineptr; // [sp+60h] [bp-88h]@49
  size_t n; // [sp+68h] [bp-80h]@49
  char v112[32]; // [sp+70h] [bp-78h]@127
  char v113[88]; // [sp+90h] [bp-58h]@90

  v3 = 0;
  LOBYTE(v4) = 0;
  LODWORD(v5) = -1;
  LODWORD(v6) = a1;
  v7 = (const char *)a2;
  sub_4049D0(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_4085A0(
    sub_403080,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  setvbuf(stdout, 0LL, 1, 0LL);
  while ( 1 )
  {
    v8 = sub_407E00(a1, a2, "bctw", &off_409180, 0LL);
    if ( v8 == -1 )
      break;
    if ( v8 == 119 )
    {
      byte_60C2DC = 0;
      byte_60C2DB = 1;
      byte_60C2D9 = 0;
    }
    else if ( v8 <= 119 )
    {
      if ( v8 == 98 )
        goto LABEL_15;
      if ( v8 <= 98 )
      {
        if ( v8 == -131 )
        {
          sub_406A80((char)stdout);
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
      byte_60C2DC = 0;
      byte_60C2DB = 0;
      byte_60C2D9 = 1;
    }
    else if ( v8 > 130 )
    {
      if ( v8 == 131 )
      {
        byte_60C2D8 = 1;
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
      byte_60C2DA = 1;
    }
    else
    {
      if ( v8 != 129 )
        goto LABEL_204;
      byte_60C2DC = 1;
      byte_60C2DB = 0;
      byte_60C2D9 = 0;
    }
  }
  qword_60C2E8 = 42LL;
  qword_60C2E0 = 40LL;
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
  if ( byte_60C2DA )
    goto LABEL_71;
  if ( !byte_60C2DC )
  {
    if ( !byte_60C2DB )
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
  if ( !byte_60C2DB )
    goto LABEL_38;
  while ( 1 )
  {
LABEL_40:
    if ( (_DWORD)v5 == -1 )
      LODWORD(v5) = 0;
    v102 = (const char **)&v7[8 * (signed int)v6];
    v10 = dword_60C29C;
    if ( dword_60C29C == (_DWORD)v6 )
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
            fwrite_unlocked("SHA1", 1uLL, 4uLL, stdout);
            fwrite_unlocked(" (", 1uLL, 2uLL, stdout);
            sub_402A40(s, (unsigned int)v64);
            fwrite_unlocked(") = ", 1uLL, 4uLL, stdout);
            if ( !((unsigned __int64)qword_60C2E0 >> 1) )
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
          if ( !((unsigned __int64)qword_60C2E0 >> 1) )
            goto LABEL_157;
        }
        else
        {
          v64 = 0;
          if ( v106 )
            goto LABEL_197;
          if ( !((unsigned __int64)qword_60C2E0 >> 1) )
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
        while ( (unsigned __int64)qword_60C2E0 >> 1 > (unsigned __int64)v6 );
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
        LODWORD(v59) = sub_404930(s, 4228789LL);
        v6 = v59;
        if ( !v59 )
          goto LABEL_141;
      }
      else
      {
        byte_60C2F0 = 1;
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
        v22 = "SHA1";
        v23 = 4LL;
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
          v25 = v16[v18 + 4];
          v17 = (char *)(v18 + 4);
          if ( v25 == 32 )
          {
            v25 = v16[v18 + 5];
            v17 = (char *)(v18 + 5);
          }
          if ( v25 != 40 || (++v17, (v15 -= (signed __int64)v17) == 0) )
          {
LABEL_66:
            ++v5;
            if ( byte_60C2DB )
            {
              LODWORD(v46) = sub_406470(0LL, 3LL, s, v17, v15);
              v47 = v46;
              v48 = dcgettext(0LL, "%s: %lu: improperly formatted %s checksum line", 5);
              error(0, 0, v48, v47, v13, "SHA1", v93);
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
        if ( v15 - v18 < qword_60C2E8 + (unsigned __int64)(*v4 == 92) )
          goto LABEL_66;
        v28 = qword_60C2E0 + v18;
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
        v17 = (char *)(unsigned int)dword_60C210;
        v30 = v101 + 1;
        if ( v98 - (v101 + 1) != 1 && ((v31 = v16[v101 + 1], v31 == 32) || v31 == 42) )
        {
          if ( dword_60C210 != 1 )
          {
            dword_60C210 = 0;
            v30 = v101 + 2;
          }
        }
        else
        {
          if ( !dword_60C210 )
            goto LABEL_66;
          dword_60C210 = 1;
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
        if ( !byte_60C2DC )
          v37 = strchr(v32, 10) != 0LL;
        v38 = sub_402AF0(v32, v113, &v109);
        v15 = (unsigned int)v38;
        if ( !(_BYTE)v38 )
        {
          ++v97;
          if ( byte_60C2DC )
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
        if ( byte_60C2DA && v109 )
          goto LABEL_97;
        v17 = (char *)((unsigned __int64)qword_60C2E0 >> 1);
        if ( (unsigned __int64)qword_60C2E0 >> 1 )
        {
          v100 = (unsigned __int64)qword_60C2E0 >> 1;
          v49 = v38;
          v50 = __ctype_tolower_loc();
          v51 = 0LL;
          v15 = v49;
          v17 = (char *)v100;
          v52 = *v50;
          while ( v52[(unsigned __int8)v4[2 * v51]] == byte_409160[(unsigned __int64)(((unsigned __int8)v113[v51] >> 4) & 0xF)]
               && v52[(unsigned __int8)v4[2 * v51 + 1]] == byte_409160[(unsigned __int64)(v113[v51] & 0xF)] )
          {
            if ( v100 == ++v51 )
            {
              v51 = v100;
              goto LABEL_180;
            }
          }
          ++v103;
          if ( byte_60C2DC )
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
        v105 = byte_60C2DC;
        if ( byte_60C2DC )
          goto LABEL_97;
        v105 = byte_60C2D9;
        if ( byte_60C2D9 )
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
        if ( !byte_60C2D9 )
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
          LODWORD(v26) = sub_406470(0LL, 3LL, s, v17, v15);
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
        LODWORD(v77) = sub_406470(0LL, 3LL, s, v42, v43);
        v78 = v77;
        v79 = dcgettext(0LL, "%s: read error", 5);
        error(0, 0, v79, v78, v93);
        v45 = 0;
        goto LABEL_113;
      }
      if ( !v96 || !(unsigned int)sub_406E50(v6) )
      {
        if ( v3 )
        {
          if ( byte_60C2DC )
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
          if ( !byte_60C2DA )
          {
LABEL_220:
            if ( v105 )
              goto LABEL_110;
          }
          else if ( v105 )
          {
LABEL_110:
            if ( !(v103 | v97) )
              LOBYTE(v44) = (v5 == 0) | byte_60C2D8 ^ 1;
          }
          else
          {
            LODWORD(v85) = sub_406470(0LL, 3LL, s, v42, v43);
            v6 = v85;
            v86 = dcgettext(0LL, "%s: no file was verified", 5);
            error(0, 0, v86, v6, v93);
          }
        }
        else
        {
          LODWORD(v74) = sub_406470(0LL, 3LL, s, v42, v43);
          v6 = v74;
          v75 = dcgettext(0LL, "%s: no properly formatted %s checksum lines found", 5);
          error(0, 0, v75, v6, "SHA1", v93);
        }
        v45 = v44 & 1;
        goto LABEL_113;
      }
LABEL_141:
      LODWORD(v60) = sub_406470(0LL, 3LL, s, v42, v43);
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
    if ( !byte_60C2F0 || (unsigned int)sub_406E50(stdin) != -1 )
      return (unsigned __int8)(v104 ^ 1);
    v7 = dcgettext(0LL, "standard input", 5);
    v83 = __errno_location();
    error(1, *v83, v7, v93);
LABEL_201:
    if ( byte_60C2D9 == 1 )
    {
      v9 = "the --quiet option is meaningful only when verifying checksums";
      if ( !(_BYTE)v4 )
        goto LABEL_203;
    }
LABEL_38:
    if ( byte_60C2D8 )
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

  if ( !byte_60C2C8 )
  {
    while ( qword_60C2D0 < (unsigned __int64)(((&unk_60BE48 - (_UNKNOWN *)&qword_60BE40) >> 3) - 1) )
      (*(&qword_60BE40 + ++qword_60C2D0))();
    result = sub_40289B();
    byte_60C2C8 = 1;
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
  v2 = qword_60C2E0;
  if ( qword_60C2E0 )
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
        fwrite_unlocked(&unk_408604, 1uLL, 2uLL, stdout);
      }
      else if ( (_BYTE)v4 == 92 )
      {
        fwrite_unlocked(&unk_408607, 1uLL, 2uLL, stdout);
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
    byte_60C2F0 = 1;
    sub_404900(stdin, 2LL);
    if ( !(unsigned int)sub_4047C0(v9) )
      return 1;
LABEL_12:
    v12 = 0;
    LODWORD(v21) = sub_406470(0LL, 3LL, v4, v10, v11);
    v22 = v21;
    v23 = __errno_location();
    error(0, *v23, "%s", v22);
    if ( stdin != v9 )
      sub_406E50(v9);
    return v12;
  }
  v14 = a3;
  LODWORD(v15) = sub_404930(v4, 4228789LL);
  v9 = v15;
  if ( v15 )
  {
    sub_404900(v15, 2LL);
    if ( !(unsigned int)sub_4047C0(v9) )
    {
      if ( (unsigned int)sub_406E50(v9) )
      {
        v12 = 0;
        LODWORD(v18) = sub_406470(0LL, 3LL, v4, v16, v17);
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
  v12 = (unsigned __int8)byte_60C2DA;
  v27 = v24;
  if ( byte_60C2DA && *v24 == 2 )
  {
    *v14 = 1;
  }
  else
  {
    v12 = 0;
    LODWORD(v28) = sub_406470(0LL, 3LL, v4, v25, v26);
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
  v2 = qword_60C308;
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
  __printf_chk(1LL, v9, "SHA1");
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
  __printf_chk(1LL, v20, "FIPS-180-1");
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
    v25 = "sha1sum";
    v26 = 8LL;
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
    __printf_chk(1LL, v28, &unk_408698);
    v29 = setlocale(5, 0LL);
    if ( !v29 || !strncmp(v29, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v32 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v32, &unk_408698);
    v33 = setlocale(5, 0LL);
    if ( !v33 || !strncmp(v33, "en_", 3uLL) )
    {
      v27 = "sha1sum";
      v34 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v34, "https://www.gnu.org/software/coreutils/");
      goto LABEL_14;
    }
    v27 = "sha1sum";
  }
  v35 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v35, "sha1sum");
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

  if ( (unsigned int)sub_407F00(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60C2F8 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60C300 )
      {
        LODWORD(v5) = sub_406440(qword_60C300, "write error");
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
  result = sub_407F00(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_403150(__int64 a1, __int64 a2)
{
  __int64 result; // rax@1

  result = a2;
  *(_DWORD *)a2 = _byteswap_ulong(*(_DWORD *)a1);
  *(_DWORD *)(a2 + 4) = _byteswap_ulong(*(_DWORD *)(a1 + 4));
  *(_DWORD *)(a2 + 8) = _byteswap_ulong(*(_DWORD *)(a1 + 8));
  *(_DWORD *)(a2 + 12) = _byteswap_ulong(*(_DWORD *)(a1 + 12));
  *(_DWORD *)(a2 + 16) = _byteswap_ulong(*(_DWORD *)(a1 + 16));
  return result;
}

__int64 __fastcall sub_403180(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r11@1
  unsigned __int64 v4; // rax@1
  unsigned __int64 v5; // r14@1
  __int64 v6; // rbx@1
  int v7; // ecx@1
  int v8; // edi@1
  int v9; // er10@1
  int v10; // er8@1
  __int64 result; // rax@1
  int v12; // edx@1
  int v13; // er9@1
  int v14; // ebp@2
  unsigned __int64 v15; // rcx@2
  int v16; // edi@2
  __int64 v17; // rsi@3
  int v18; // esi@5
  int v19; // esi@5
  int v20; // er9@5
  int v21; // edx@5
  int v22; // er9@5
  int v23; // esi@5
  int v24; // eax@5
  int v25; // er8@5
  int v26; // er8@5
  int v27; // esi@5
  int v28; // edi@5
  int v29; // edi@5
  int v30; // esi@5
  int v31; // esi@5
  int v32; // edx@5
  int v33; // esi@5
  int v34; // edx@5
  int v35; // eax@5
  int v36; // edx@5
  int v37; // eax@5
  int v38; // eax@5
  int v39; // er9@5
  int v40; // eax@5
  int v41; // er9@5
  int v42; // er9@5
  int v43; // er8@5
  int v44; // er9@5
  int v45; // er8@5
  int v46; // er8@5
  int v47; // edi@5
  int v48; // er8@5
  int v49; // edi@5
  int v50; // edi@5
  int v51; // esi@5
  int v52; // edi@5
  int v53; // esi@5
  int v54; // esi@5
  int v55; // edx@5
  int v56; // esi@5
  int v57; // edx@5
  int v58; // edx@5
  int v59; // eax@5
  int v60; // edx@5
  int v61; // eax@5
  int v62; // eax@5
  int v63; // er9@5
  int v64; // eax@5
  int v65; // er9@5
  int v66; // er9@5
  int v67; // er8@5
  int v68; // er9@5
  int v69; // er8@5
  int v70; // edi@5
  int v71; // er8@5
  int v72; // er11@5
  int v73; // edi@5
  int v74; // er10@5
  int v75; // edi@5
  int v76; // esi@5
  int v77; // edi@5
  int v78; // esi@5
  int v79; // esi@5
  int v80; // edx@5
  int v81; // esi@5
  int v82; // edx@5
  int v83; // edx@5
  int v84; // eax@5
  int v85; // edx@5
  int v86; // eax@5
  int v87; // eax@5
  int v88; // er9@5
  int v89; // er12@5
  int v90; // eax@5
  int v91; // er9@5
  int v92; // ebx@5
  int v93; // er12@5
  int v94; // er8@5
  int v95; // er12@5
  int v96; // er8@5
  int v97; // ebx@5
  int v98; // edi@5
  int v99; // ebx@5
  int v100; // edi@5
  int v101; // er15@5
  int v102; // esi@5
  int v103; // er15@5
  int v104; // ebp@5
  int v105; // er15@5
  int v106; // esi@5
  int v107; // er14@5
  int v108; // edx@5
  int v109; // ebp@5
  int v110; // ebp@5
  int v111; // edx@5
  int v112; // eax@5
  int v113; // er14@5
  int v114; // er14@5
  int v115; // eax@5
  int v116; // er13@5
  int v117; // er12@5
  int v118; // er13@5
  int v119; // er13@5
  int v120; // ST10_4@5
  int v121; // er12@5
  int v122; // er11@5
  int v123; // ST18_4@5
  int v124; // er12@5
  int v125; // ebx@5
  int v126; // er12@5
  int v127; // er12@5
  int v128; // ebx@5
  int v129; // er11@5
  int v130; // ST1C_4@5
  int v131; // ebx@5
  int v132; // ebx@5
  int v133; // er15@5
  int v134; // er15@5
  int v135; // ebx@5
  int v136; // ST20_4@5
  int v137; // ebx@5
  int v138; // ebp@5
  int v139; // ebx@5
  int v140; // ebp@5
  int v141; // er11@5
  int v142; // ST00_4@5
  int v143; // ebp@5
  int v144; // ebp@5
  int v145; // er14@5
  int v146; // er14@5
  int v147; // ebp@5
  int v148; // er11@5
  int v149; // ST04_4@5
  int v150; // ebp@5
  int v151; // ebp@5
  int v152; // er13@5
  int v153; // er13@5
  int v154; // ebp@5
  int v155; // ST24_4@5
  int v156; // ebp@5
  int v157; // er12@5
  int v158; // er12@5
  int v159; // ebp@5
  int v160; // er11@5
  int v161; // ST08_4@5
  int v162; // ebp@5
  int v163; // ebp@5
  int v164; // er15@5
  int v165; // ebp@5
  int v166; // er15@5
  int v167; // ST0C_4@5
  int v168; // ebx@5
  int v169; // er15@5
  int v170; // ebx@5
  int v171; // er15@5
  int v172; // ebx@5
  int v173; // er15@5
  int v174; // er11@5
  int v175; // er11@5
  int v176; // er14@5
  int v177; // er11@5
  int v178; // er10@5
  int v179; // er14@5
  int v180; // er9@5
  int v181; // er10@5
  int v182; // er10@5
  int v183; // er8@5
  int v184; // er13@5
  int v185; // er10@5
  int v186; // er13@5
  int v187; // er9@5
  int v188; // er9@5
  int v189; // er12@5
  int v190; // er9@5
  int v191; // er12@5
  int v192; // er8@5
  int v193; // er8@5
  int v194; // ebp@5
  int v195; // er8@5
  int v196; // edi@5
  int v197; // ebp@5
  int v198; // esi@5
  int v199; // ST10_4@5
  int v200; // edi@5
  int v201; // edi@5
  int v202; // ebx@5
  int v203; // edi@5
  int v204; // ST14_4@5
  int v205; // er11@5
  int v206; // ebx@5
  int v207; // ebp@5
  int v208; // esi@5
  int v209; // edx@5
  int v210; // esi@5
  int v211; // ebp@5
  int v212; // ST18_4@5
  int v213; // er10@5
  int v214; // er11@5
  int v215; // edx@5
  int v216; // edx@5
  int v217; // er10@5
  int v218; // eax@5
  int v219; // edx@5
  int v220; // er9@5
  int v221; // ST1C_4@5
  int v222; // eax@5
  int v223; // eax@5
  int v224; // er10@5
  int v225; // er9@5
  int v226; // er9@5
  int v227; // eax@5
  int v228; // ST20_4@5
  int v229; // er8@5
  int v230; // eax@5
  int v231; // er11@5
  int v232; // er8@5
  int v233; // eax@5
  int v234; // er8@5
  int v235; // er10@5
  int v236; // eax@5
  int v237; // eax@5
  int v238; // edi@5
  int v239; // edi@5
  int v240; // ebx@5
  int v241; // er10@5
  int v242; // esi@5
  int v243; // ST28_4@5
  int v244; // ebx@5
  int v245; // eax@5
  int v246; // esi@5
  int v247; // eax@5
  int v248; // ebp@5
  int v249; // eax@5
  int v250; // edx@5
  int v251; // ST00_4@5
  int v252; // esi@5
  int v253; // ebp@5
  int v254; // er10@5
  int v255; // eax@5
  int v256; // ST24_4@5
  int v257; // eax@5
  int v258; // edx@5
  int v259; // edx@5
  int v260; // er10@5
  int v261; // er9@5
  int v262; // er10@5
  int v263; // ebp@5
  int v264; // ebx@5
  int v265; // ST40_4@5
  int v266; // eax@5
  int v267; // er8@5
  int v268; // er8@5
  int v269; // ebp@5
  int v270; // er10@5
  int v271; // edi@5
  int v272; // eax@5
  int v273; // er10@5
  int v274; // edi@5
  int v275; // eax@5
  int v276; // ST04_4@5
  int v277; // eax@5
  int v278; // er15@5
  int v279; // eax@5
  int v280; // er10@5
  int v281; // esi@5
  int v282; // esi@5
  int v283; // eax@5
  int v284; // edx@5
  int v285; // eax@5
  int v286; // edx@5
  int v287; // eax@5
  int v288; // er10@5
  int v289; // er14@5
  int v290; // ebx@5
  int v291; // er9@5
  int v292; // ebx@5
  int v293; // er9@5
  int v294; // er13@5
  int v295; // er8@5
  int v296; // er9@5
  int v297; // er8@5
  int v298; // eax@5
  int v299; // er9@5
  int v300; // er9@5
  int v301; // eax@5
  int v302; // er8@5
  int v303; // er12@5
  int v304; // er8@5
  int v305; // er10@5
  int v306; // eax@5
  int v307; // er8@5
  int v308; // edi@5
  int v309; // esi@5
  int v310; // ST2C_4@5
  int v311; // er10@5
  int v312; // edi@5
  int v313; // er8@5
  int v314; // esi@5
  int v315; // er8@5
  int v316; // edi@5
  int v317; // eax@5
  int v318; // esi@5
  int v319; // er8@5
  int v320; // esi@5
  int v321; // ST14_4@5
  int v322; // er8@5
  int v323; // edx@5
  int v324; // er8@5
  int v325; // edx@5
  int v326; // esi@5
  int v327; // ST18_4@5
  int v328; // edx@5
  int v329; // eax@5
  int v330; // esi@5
  int v331; // edx@5
  int v332; // eax@5
  int v333; // ST1C_4@5
  int v334; // eax@5
  int v335; // er9@5
  int v336; // er9@5
  int v337; // er11@5
  int v338; // ST08_4@5
  int v339; // eax@5
  int v340; // esi@5
  int v341; // ST20_4@5
  int v342; // er10@5
  int v343; // esi@5
  int v344; // eax@5
  int v345; // er10@5
  int v346; // er10@5
  int v347; // eax@5
  int v348; // ebx@5
  int v349; // esi@5
  int v350; // eax@5
  int v351; // esi@5
  int v352; // ST0C_4@5
  int v353; // eax@5
  int v354; // edi@5
  int v355; // edi@5
  int v356; // er8@5
  int v357; // esi@5
  int v358; // eax@5
  int v359; // er8@5
  int v360; // er11@5
  int v361; // ST10_4@5
  int v362; // er8@5
  int v363; // esi@5
  int v364; // er9@5
  int v365; // er11@5
  int v366; // eax@5
  int v367; // ST00_4@5
  int v368; // eax@5
  int v369; // eax@5
  int v370; // edx@5
  int v371; // edx@5
  int v372; // eax@5
  int v373; // eax@5
  int v374; // esi@5
  int v375; // er9@5
  int v376; // er9@5
  int v377; // er8@5
  int v378; // ebx@5
  int v379; // eax@5
  int v380; // ST24_4@5
  int v381; // er10@5
  int v382; // er8@5
  int v383; // er10@5
  int v384; // er8@5
  int v385; // ebp@5
  int v386; // eax@5
  int v387; // ST04_4@5
  int v388; // eax@5
  int v389; // er15@5
  int v390; // edi@5
  int v391; // ebp@5
  int v392; // edi@5
  int v393; // eax@5
  int v394; // er11@5
  int v395; // eax@5
  int v396; // eax@5
  int v397; // esi@5
  int v398; // esi@5
  int v399; // eax@5
  int v400; // er15@5
  int v401; // er10@5
  int v402; // edx@5
  int v403; // er15@5
  int v404; // er14@5
  int v405; // ST28_4@5
  int v406; // ST14_4@5
  int v407; // eax@5
  int v408; // eax@5
  int v409; // er9@5
  int v410; // er10@5
  int v411; // eax@5
  int v412; // er9@5
  int v413; // er8@5
  int v414; // er10@5
  int v415; // er10@5
  int v416; // er8@5
  int v417; // ebp@5
  int v418; // ST18_4@5
  int v419; // er12@5
  int v420; // er11@5
  int v421; // edi@5
  int v422; // ebx@5
  int v423; // esi@5
  int v424; // er15@5
  int v425; // esi@5
  int v426; // er14@5
  int v427; // esi@5
  int v428; // er13@5
  int v429; // edx@5
  int v430; // er14@5
  int v431; // er14@5
  int v432; // edx@5
  int v433; // eax@5
  int v434; // er13@5
  int v435; // er13@5
  int v436; // eax@5
  int v437; // ebx@5
  int v438; // er10@5
  int v439; // er12@5
  int v440; // er10@5
  int v441; // ebx@5
  int v442; // ebp@5
  int v443; // er10@5
  int v444; // er11@5
  int v445; // er10@5
  int v446; // er11@5
  int v447; // ebp@5
  int v448; // er15@5
  int v449; // ebp@5
  int v450; // er9@5
  int v451; // er15@5
  int v452; // er14@5
  int v453; // er15@5
  int v454; // ebx@5
  int v455; // er8@5
  int v456; // er10@5
  int v457; // er8@5
  int v458; // er11@5
  int v459; // er10@5
  int v460; // edi@5
  int v461; // er10@5
  int v462; // er9@5
  int v463; // esi@5
  int v464; // esi@5
  int v465; // edi@5
  int v466; // esi@5
  int v467; // ebx@5
  int v468; // edx@5
  int v469; // edi@5
  int v470; // edx@5
  int v471; // er11@5
  int v472; // eax@5
  int v473; // er14@5
  int v474; // eax@5
  int v475; // [sp+30h] [bp-A0h]@2
  int v476; // [sp+34h] [bp-9Ch]@2
  int v477; // [sp+38h] [bp-98h]@2
  int v478; // [sp+3Ch] [bp-94h]@2
  int v479; // [sp+44h] [bp-8Ch]@2
  unsigned __int64 v480; // [sp+48h] [bp-88h]@1
  __int64 v481; // [sp+50h] [bp-80h]@1
  int v482; // [sp+58h] [bp-78h]@4
  int v483; // [sp+5Ch] [bp-74h]@5
  int v484; // [sp+60h] [bp-70h]@5
  int v485; // [sp+64h] [bp-6Ch]@5
  int v486; // [sp+68h] [bp-68h]@5
  int v487; // [sp+6Ch] [bp-64h]@5
  int v488; // [sp+70h] [bp-60h]@5
  int v489; // [sp+74h] [bp-5Ch]@5
  int v490; // [sp+78h] [bp-58h]@5
  int v491; // [sp+7Ch] [bp-54h]@5
  int v492; // [sp+80h] [bp-50h]@5
  int v493; // [sp+84h] [bp-4Ch]@5
  int v494; // [sp+88h] [bp-48h]@5
  int v495; // [sp+8Ch] [bp-44h]@5
  int v496; // [sp+90h] [bp-40h]@5
  int v497; // [sp+94h] [bp-3Ch]@5

  v3 = a1;
  v4 = a1 + (a2 & 0xFFFFFFFFFFFFFFFCLL);
  v5 = v4;
  v6 = a3;
  v7 = *(_DWORD *)(a3 + 20) + a2;
  v8 = *(_DWORD *)(a3 + 8);
  v481 = a3;
  v9 = __CFADD__(*(_DWORD *)(a3 + 20), (_DWORD)a2);
  v10 = *(_DWORD *)(a3 + 12);
  v480 = v4;
  result = *(_DWORD *)a3;
  v12 = *(_DWORD *)(a3 + 4);
  v13 = *(_DWORD *)(v6 + 16);
  *(_DWORD *)(v6 + 20) = v7;
  *(_DWORD *)(v6 + 24) += v9 + HIDWORD(a2);
  if ( v3 < v5 )
  {
    v478 = v13;
    v14 = v8;
    v15 = v3;
    v477 = v10;
    v475 = v12;
    v479 = result;
    v476 = v8;
    v16 = v10;
    do
    {
      v17 = 0LL;
      do
      {
        *(int *)((char *)&v482 + v17 * 4) = _byteswap_ulong(*(_DWORD *)(v15 + v17 * 4));
        ++v17;
      }
      while ( v17 != 16 );
      v15 += 64LL;
      v18 = __ROL4__(result, 5);
      v19 = v482 + v13 + 1518500249 + v18;
      v20 = v12 & (v16 ^ v14);
      v21 = __ROR4__(v12, 2);
      v22 = v19 + (v16 ^ v20);
      v23 = result & (v14 ^ v21);
      v24 = __ROR4__(result, 2);
      v25 = __ROL4__(v22, 5);
      v26 = v483 + v16 + 1518500249 + (v14 ^ v23) + v25;
      v27 = v22 & (v24 ^ v21);
      v22 = __ROR4__(v22, 2);
      v28 = __ROL4__(v26, 5);
      v29 = v484 + v14 + 1518500249 + (v21 ^ v27) + v28;
      v30 = v26 & (v22 ^ v24);
      v26 = __ROR4__(v26, 2);
      v31 = v485 + v21 + 1518500249 + (v24 ^ v30);
      v32 = __ROL4__(v29, 5);
      v33 = v32 + v31;
      v34 = v486 + v24 + 1518500249 + (v22 ^ v29 & (v26 ^ v22));
      v29 = __ROR4__(v29, 2);
      v35 = __ROL4__(v33, 5);
      v36 = v35 + v34;
      v37 = v33 & (v29 ^ v26);
      v33 = __ROR4__(v33, 2);
      v38 = v487 + v22 + 1518500249 + (v26 ^ v37);
      v39 = __ROL4__(v36, 5);
      v40 = v39 + v38;
      v41 = v36 & (v33 ^ v29);
      v36 = __ROR4__(v36, 2);
      v42 = v488 + v26 + 1518500249 + (v29 ^ v41);
      v43 = __ROL4__(v40, 5);
      v44 = v43 + v42;
      v45 = v40 & (v36 ^ v33);
      v40 = __ROR4__(v40, 2);
      v46 = v489 + v29 + 1518500249 + (v33 ^ v45);
      v47 = __ROL4__(v44, 5);
      v48 = v47 + v46;
      v49 = v44 & (v40 ^ v36);
      v44 = __ROR4__(v44, 2);
      v50 = v490 + v33 + 1518500249 + (v36 ^ v49);
      v51 = __ROL4__(v48, 5);
      v52 = v51 + v50;
      v53 = v48 & (v44 ^ v40);
      v48 = __ROR4__(v48, 2);
      v54 = v491 + v36 + 1518500249 + (v40 ^ v53);
      v55 = __ROL4__(v52, 5);
      v56 = v55 + v54;
      v57 = v52 & (v48 ^ v44);
      v52 = __ROR4__(v52, 2);
      v58 = v492 + v40 + 1518500249 + (v44 ^ v57);
      v59 = __ROL4__(v56, 5);
      v60 = v59 + v58;
      v61 = v56 & (v52 ^ v48);
      v56 = __ROR4__(v56, 2);
      v62 = v493 + v44 + 1518500249 + (v48 ^ v61);
      v63 = __ROL4__(v60, 5);
      v64 = v63 + v62;
      v65 = v60 & (v56 ^ v52);
      v60 = __ROR4__(v60, 2);
      v66 = v494 + v48 + 1518500249 + (v52 ^ v65);
      v67 = __ROL4__(v64, 5);
      v68 = v67 + v66;
      v69 = v495 + v52 + 1518500249 + (v56 ^ v64 & (v60 ^ v56));
      v70 = __ROL4__(v68, 5);
      v64 = __ROR4__(v64, 2);
      v71 = v70 + v69;
      v72 = __ROL4__(v495 ^ v490 ^ v484 ^ v482, 1);
      v73 = v68 & (v64 ^ v60);
      v68 = __ROR4__(v68, 2);
      v74 = __ROL4__(v496 ^ v491 ^ v485 ^ v483, 1);
      v75 = v496 + v56 + 1518500249 + (v60 ^ v73);
      v76 = __ROL4__(v71, 5);
      v77 = v76 + v75;
      v78 = v71 & (v68 ^ v64);
      v71 = __ROR4__(v71, 2);
      v79 = v497 + v60 + 1518500249 + (v64 ^ v78);
      v80 = __ROL4__(v77, 5);
      v81 = v80 + v79;
      v82 = v77 & (v71 ^ v68);
      v77 = __ROR4__(v77, 2);
      v83 = v72 + v64 + 1518500249 + (v68 ^ v82);
      v84 = __ROL4__(v81, 5);
      v85 = v84 + v83;
      v86 = v81 & (v77 ^ v71);
      v81 = __ROR4__(v81, 2);
      v87 = v74 + v68 + 1518500249 + (v71 ^ v86);
      v88 = v85;
      v89 = v85 & (v81 ^ v77);
      v85 = __ROR4__(v85, 2);
      v88 = __ROL4__(v88, 5);
      v90 = v88 + v87;
      v91 = __ROL4__(v497 ^ v486 ^ v484 ^ v492, 1);
      v92 = v81 ^ v90 & (v85 ^ v81);
      v93 = v91 + v71 + 1518500249 + (v77 ^ v89);
      v94 = v90;
      v90 = __ROR4__(v90, 2);
      v94 = __ROL4__(v94, 5);
      v95 = v94 + v93;
      v96 = __ROL4__(v72 ^ v493 ^ v487 ^ v485, 1);
      v97 = v96 + v77 + 1518500249 + v92;
      v98 = __ROL4__(v95, 5);
      v99 = v98 + v97;
      v100 = __ROL4__(v74 ^ v494 ^ v486 ^ v488, 1);
      v101 = v95 ^ v90 ^ v85;
      v95 = __ROR4__(v95, 2);
      v102 = v101 + v100 + v81 + 1859775393;
      v103 = __ROL4__(v99, 5);
      v104 = v99 ^ v95 ^ v90;
      v99 = __ROR4__(v99, 2);
      v105 = v102 + v103;
      v106 = __ROL4__(v91 ^ v495 ^ v487 ^ v489, 1);
      v107 = v105 ^ v99 ^ v95;
      v108 = v104 + v106 + v85 + 1859775393;
      v109 = v105;
      v105 = __ROR4__(v105, 2);
      v109 = __ROL4__(v109, 5);
      v110 = v108 + v109;
      v111 = __ROL4__(v96 ^ v496 ^ v490 ^ v488, 1);
      v112 = v107 + v111 + v90 + 1859775393;
      v113 = __ROL4__(v110, 5);
      v114 = v112 + v113;
      v115 = __ROL4__(v100 ^ v497 ^ v491 ^ v489, 1);
      v116 = v110 ^ v105 ^ v99;
      v110 = __ROR4__(v110, 2);
      v117 = v116 + v115 + v95 + 1859775393;
      v118 = __ROL4__(v114, 5);
      v119 = v117 + v118;
      v120 = v72;
      v121 = __ROL4__(v106 ^ v72 ^ v492 ^ v490, 1);
      v122 = v121;
      v123 = v121;
      v124 = v114 ^ v110 ^ v105;
      v114 = __ROR4__(v114, 2);
      v125 = v124 + v122 + v99 + 1859775393;
      v126 = __ROL4__(v119, 5);
      v127 = v125 + v126;
      v128 = __ROL4__(v111 ^ v74 ^ v493 ^ v491, 1);
      v129 = v128;
      v130 = v128;
      v131 = v119 ^ v114 ^ v110;
      v119 = __ROR4__(v119, 2);
      v132 = v129 + v105 + 1859775393 + v131;
      v133 = __ROL4__(v127, 5);
      v134 = v132 + v133;
      v135 = __ROL4__(v115 ^ v91 ^ v494 ^ v492, 1);
      v136 = v135;
      v137 = v135 + v110 + 1859775393 + (v127 ^ v119 ^ v114);
      v138 = __ROL4__(v134, 5);
      v127 = __ROR4__(v127, 2);
      v139 = v138 + v137;
      v140 = __ROL4__(v123 ^ v96 ^ v495 ^ v493, 1);
      v141 = v140;
      v142 = v140;
      v143 = v134 ^ v127 ^ v119;
      v134 = __ROR4__(v134, 2);
      v144 = v141 + v114 + 1859775393 + v143;
      v145 = __ROL4__(v139, 5);
      v146 = v144 + v145;
      v147 = __ROL4__(v130 ^ v100 ^ v496 ^ v494, 1);
      v148 = v147;
      v149 = v147;
      v150 = v139 ^ v134 ^ v127;
      v139 = __ROR4__(v139, 2);
      v151 = v148 + v119 + 1859775393 + v150;
      v152 = __ROL4__(v146, 5);
      v153 = v151 + v152;
      v154 = __ROL4__(v136 ^ v106 ^ v497 ^ v495, 1);
      v155 = v154;
      v156 = v154 + v127 + 1859775393 + (v146 ^ v139 ^ v134);
      v157 = __ROL4__(v153, 5);
      v158 = v156 + v157;
      v146 = __ROR4__(v146, 2);
      v159 = __ROL4__(v142 ^ v111 ^ v496 ^ v120, 1);
      v160 = v159;
      v161 = v159;
      v162 = v153 ^ v146 ^ v139;
      v153 = __ROR4__(v153, 2);
      v163 = v160 + v134 + 1859775393 + v162;
      v164 = __ROL4__(v158, 5);
      v165 = v164 + v163;
      v166 = __ROL4__(v149 ^ v115 ^ v74 ^ v497, 1);
      v167 = v166;
      v168 = v166 + v139 + 1859775393;
      v169 = v158 ^ v153 ^ v146;
      v158 = __ROR4__(v158, 2);
      v170 = v169 + v168;
      v171 = __ROL4__(v165, 5);
      v172 = v171 + v170;
      v173 = __ROL4__(v155 ^ v123 ^ v91 ^ v120, 1);
      v174 = v165 ^ v158 ^ v153;
      v165 = __ROR4__(v165, 2);
      v175 = v173 + v146 + 1859775393 + v174;
      v176 = __ROL4__(v172, 5);
      v177 = v176 + v175;
      v178 = __ROL4__(v161 ^ v130 ^ v96 ^ v74, 1);
      v179 = v178;
      v180 = __ROL4__(v167 ^ v136 ^ v100 ^ v91, 1);
      v181 = v172 ^ v165 ^ v158;
      v172 = __ROR4__(v172, 2);
      v182 = v179 + v153 + 1859775393 + v181;
      v183 = __ROL4__(v173 ^ v142 ^ v106 ^ v96, 1);
      v184 = __ROL4__(v177, 5);
      v185 = v184 + v182;
      v186 = v180;
      v187 = v177 ^ v172 ^ v165;
      v177 = __ROR4__(v177, 2);
      v188 = v186 + v158 + 1859775393 + v187;
      v189 = __ROL4__(v185, 5);
      v190 = v189 + v188;
      v191 = v183;
      v192 = v185 ^ v177 ^ v172;
      v185 = __ROR4__(v185, 2);
      v193 = v191 + v165 + 1859775393 + v192;
      v194 = __ROL4__(v190, 5);
      v195 = v194 + v193;
      v196 = __ROL4__(v179 ^ v149 ^ v111 ^ v100, 1);
      v197 = v196;
      v198 = __ROL4__(v186 ^ v155 ^ v115 ^ v106, 1);
      v199 = v196;
      v200 = v190 ^ v185 ^ v177;
      v190 = __ROR4__(v190, 2);
      v201 = v197 + v172 + 1859775393 + v200;
      v202 = __ROL4__(v195, 5);
      v203 = v202 + v201;
      v204 = v198;
      v205 = v198 + v177 + 1859775393;
      v206 = v123;
      v207 = __ROL4__(v203, 5);
      v208 = v195 ^ v190 ^ v185;
      v195 = __ROR4__(v195, 2);
      v209 = __ROL4__(v191 ^ v161 ^ v123 ^ v111, 1);
      v210 = v207 + v205 + v208;
      v211 = v136;
      v212 = v209;
      v213 = v209 + v185 + 1859775393;
      v214 = v130;
      v215 = v203 ^ v195 ^ v190;
      v203 = __ROR4__(v203, 2);
      v216 = v213 + v215;
      v217 = __ROL4__(v210, 5);
      v218 = __ROL4__(v199 ^ v167 ^ v130 ^ v115, 1);
      v219 = v217 + v216;
      v220 = v218 + v190 + 1859775393;
      v221 = v218;
      v222 = v210 ^ v203 ^ v195;
      v210 = __ROR4__(v210, 2);
      v223 = v220 + v222;
      v224 = v210 & v219;
      v225 = __ROL4__(v219, 5);
      v226 = v223 + v225;
      v227 = __ROL4__(v204 ^ v173 ^ v136 ^ v206, 1);
      v228 = v227;
      v229 = v227 + v195 - 1894007588;
      v230 = __ROL4__(v226, 5);
      v231 = __ROL4__(v212 ^ v179 ^ v214 ^ v142, 1);
      v232 = v230 + v229;
      v233 = v219;
      v219 = __ROR4__(v219, 2);
      v234 = (v224 | v203 & (v210 | v233)) + v232;
      v235 = v219 | v226;
      v236 = v226;
      v226 = __ROR4__(v226, 2);
      v237 = v231 + v203 - 1894007588 + (v210 & v235 | v219 & v236);
      v238 = __ROL4__(v234, 5);
      v239 = v237 + v238;
      v240 = __ROL4__(v221 ^ v186 ^ v211 ^ v149, 1);
      v241 = v226 & v234;
      v242 = v240 + v210 - 1894007588;
      v243 = v240;
      v244 = v155;
      v245 = __ROL4__(v239, 5);
      v246 = v245 + v242;
      v247 = v234;
      v234 = __ROR4__(v234, 2);
      v248 = __ROL4__(v228 ^ v191 ^ v155 ^ v142, 1);
      v249 = v241 | v219 & (v226 | v247);
      v250 = v248 + v219 - 1894007588;
      v251 = v248;
      v252 = v249 + v246;
      v253 = __ROL4__(v231 ^ v199 ^ v161 ^ v149, 1);
      v254 = v226 & (v234 | v239);
      v255 = v234 & v239;
      v239 = __ROR4__(v239, 2);
      v256 = v253;
      v257 = v250 + (v254 | v255);
      v258 = __ROL4__(v252, 5);
      v259 = v257 + v258;
      v260 = __ROL4__(v259, 5);
      v261 = (v239 & v252 | v234 & (v239 | v252)) + v260 + v253 + v226 - 1894007588;
      v252 = __ROR4__(v252, 2);
      v262 = v239 & (v252 | v259);
      v263 = v259;
      v259 = __ROR4__(v259, 2);
      v264 = __ROL4__(v243 ^ v167 ^ v244 ^ v204, 1);
      v265 = v264;
      v266 = v264 + v234 - 1894007588 + (v262 | v252 & v263);
      v267 = __ROL4__(v261, 5);
      v268 = v266 + v267;
      v269 = __ROL4__(v251 ^ v212 ^ v173 ^ v161, 1);
      v270 = __ROL4__(v268, 5);
      v271 = v270 + v269 + v239 - 1894007588;
      v272 = v259 | v261;
      v273 = v261;
      v261 = __ROR4__(v261, 2);
      v274 = (v259 & v273 | v252 & v272) + v271;
      v275 = __ROL4__(v256 ^ v221 ^ v179 ^ v167, 1);
      v276 = v275;
      v277 = v259 & (v261 | v268) | v261 & v268;
      v268 = __ROR4__(v268, 2);
      v278 = __ROL4__(v264 ^ v228 ^ v186 ^ v173, 1);
      v279 = v276 + v252 - 1894007588 + v277;
      v280 = v268 & v274;
      v281 = __ROL4__(v274, 5);
      v282 = v279 + v281;
      v283 = __ROL4__(v282, 5);
      v284 = v283 + v278 + v259 - 1894007588;
      v285 = v274;
      v274 = __ROR4__(v274, 2);
      v286 = (v280 | v261 & (v268 | v285)) + v284;
      v287 = v274 & v282;
      v288 = v282;
      v282 = __ROR4__(v282, 2);
      v289 = __ROL4__(v269 ^ v231 ^ v191 ^ v179, 1);
      v290 = v289 + v261 - 1894007588;
      v291 = __ROL4__(v286, 5);
      v292 = v290 + (v268 & (v274 | v288) | v287) + v291;
      v293 = __ROL4__(v276 ^ v243 ^ v186 ^ v199, 1);
      v294 = v293;
      v295 = v293 + v268 - 1894007588;
      v296 = __ROL4__(v292, 5);
      v297 = v296 + v295;
      v298 = v282 | v286;
      v299 = v286;
      v286 = __ROR4__(v286, 2);
      v300 = (v282 & v299 | v274 & v298) + v297;
      v301 = v286 & v292;
      v302 = __ROL4__(v278 ^ v204 ^ v191 ^ v251, 1);
      v303 = v302;
      v304 = v292;
      v292 = __ROR4__(v292, 2);
      v305 = v303 + v274 - 1894007588;
      v306 = v282 & (v286 | v304) | v301;
      v307 = __ROL4__(v300, 5);
      v308 = __ROL4__(v289 ^ v256 ^ v212 ^ v199, 1);
      v309 = v308 + v282 - 1894007588;
      v310 = v308;
      v311 = v305 + v306 + v307;
      v312 = v292 & v300;
      v313 = __ROL4__(v311, 5);
      v314 = v313 + v309;
      v315 = v300;
      v300 = __ROR4__(v300, 2);
      v316 = (v312 | v286 & (v292 | v315)) + v314;
      v317 = v300 & v311;
      v318 = __ROL4__(v294 ^ v265 ^ v221 ^ v204, 1);
      v319 = v318;
      v320 = v311;
      v311 = __ROR4__(v311, 2);
      v321 = v319;
      v322 = v319 + v286 - 1894007588;
      v323 = __ROL4__(v316, 5);
      v324 = v322 + (v292 & (v300 | v320) | v317) + v323;
      v325 = __ROL4__(v303 ^ v269 ^ v228 ^ v212, 1);
      v326 = __ROL4__(v324, 5);
      v327 = v325;
      v328 = v326 + v325 + v292 - 1894007588;
      v329 = v311 | v316;
      v330 = v316;
      v316 = __ROR4__(v316, 2);
      v331 = (v311 & v330 | v300 & v329) + v328;
      v332 = __ROL4__(v310 ^ v276 ^ v231 ^ v221, 1);
      v333 = v332;
      v334 = v332 + v300 - 1894007588 + (v311 & (v316 | v324) | v316 & v324);
      v335 = __ROL4__(v331, 5);
      v324 = __ROR4__(v324, 2);
      v336 = v334 + v335;
      v337 = __ROL4__(v327 ^ v289 ^ v251 ^ v231, 1);
      v338 = v337;
      v339 = __ROL4__(v321 ^ v278 ^ v243 ^ v228, 1);
      v340 = v339 + v311 - 1894007588;
      v341 = v339;
      v342 = __ROL4__(v336, 5);
      v343 = v342 + v340;
      v344 = v324 | v331;
      v345 = v331;
      v331 = __ROR4__(v331, 2);
      v346 = (v324 & v345 | v316 & v344) + v343;
      v347 = v331 & v336;
      v348 = __ROL4__(v333 ^ v294 ^ v256 ^ v243, 1);
      v349 = v324 & (v331 | v336);
      v336 = __ROR4__(v336, 2);
      v350 = v349 | v347;
      v351 = v348 + v324 - 1894007588;
      v352 = v348;
      v353 = v337 + v316 - 1894007588 + v350;
      v354 = __ROL4__(v346, 5);
      v355 = v353 + v354;
      v356 = __ROL4__(v355, 5);
      v357 = v356 + v351;
      v358 = v336 | v346;
      v359 = v346;
      v346 = __ROR4__(v346, 2);
      v360 = __ROL4__(v337 ^ v310 ^ v269 ^ v256, 1);
      v361 = v360;
      v362 = (v336 & v359 | v331 & v358) + v357;
      v363 = v336 & (v346 | v355);
      v364 = v360 + v336 - 899497514;
      v365 = v276;
      v366 = __ROL4__(v341 ^ v303 ^ v265 ^ v251, 1);
      v367 = v366;
      v368 = v355;
      v355 = __ROR4__(v355, 2);
      v369 = v367 + v331 - 1894007588 + (v363 | v346 & v368);
      v370 = __ROL4__(v362, 5);
      v371 = v369 + v370;
      v372 = v362 ^ v355 ^ v346;
      v362 = __ROR4__(v362, 2);
      v373 = v364 + v372;
      v374 = v362;
      v375 = __ROL4__(v371, 5);
      v376 = v373 + v375;
      v377 = __ROL4__(v348 ^ v276 ^ v265 ^ v321, 1);
      v378 = v377;
      v379 = v377 + v346 - 899497514;
      v380 = v377;
      v381 = __ROL4__(v376, 5);
      v382 = v381;
      v383 = __ROR4__(v371, 2);
      v384 = (v371 ^ v374 ^ v355) + v379 + v382;
      v385 = __ROL4__(v367 ^ v327 ^ v278 ^ v269, 1);
      v386 = v376 ^ v383 ^ v374;
      v376 = __ROR4__(v376, 2);
      v387 = v385;
      v388 = v385 + v355 - 899497514 + v386;
      v389 = __ROL4__(v378 ^ v341 ^ v294 ^ v278, 1);
      v390 = __ROL4__(v384, 5);
      v391 = v389;
      v482 = v389;
      v392 = v388 + v390;
      v393 = __ROL4__(v361 ^ v333 ^ v289 ^ v365, 1);
      v394 = v393;
      v395 = v384 ^ v376 ^ v383;
      v384 = __ROR4__(v384, 2);
      v396 = v394 + v374 - 899497514 + v395;
      v397 = __ROL4__(v392, 5);
      v398 = v396 + v397;
      v399 = (v392 ^ v384 ^ v376) + v389 + v383 - 899497514;
      v400 = __ROL4__(v398, 5);
      v392 = __ROR4__(v392, 2);
      v401 = __ROL4__(v387 ^ v338 ^ v303 ^ v289, 1);
      v402 = v399 + v400;
      v403 = v401;
      v483 = v401;
      v404 = v321;
      v405 = v394;
      v406 = v391;
      v407 = v398 ^ v392 ^ v384;
      v398 = __ROR4__(v398, 2);
      v408 = v401 + v376 - 899497514 + v407;
      v409 = __ROL4__(v402, 5);
      v410 = v402 ^ v398 ^ v392;
      v402 = __ROR4__(v402, 2);
      v411 = v409 + v408;
      v412 = __ROL4__(v394 ^ v352 ^ v310 ^ v294, 1);
      v484 = v412;
      v413 = v410 + v412 + v384 - 899497514;
      v414 = __ROL4__(v411, 5);
      v415 = v413 + v414;
      v416 = v391 ^ v404 ^ v303 ^ v367;
      v417 = v327;
      v418 = v403;
      v416 = __ROL4__(v416, 1);
      v419 = __ROL4__(v415, 5);
      v485 = v416;
      v420 = (v411 ^ v402 ^ v398) + v416 + v392 - 899497514 + v419;
      v411 = __ROR4__(v411, 2);
      v421 = __ROL4__(v403 ^ v417 ^ v310 ^ v361, 1);
      v422 = __ROL4__(v420, 5);
      v486 = v421;
      v423 = (v415 ^ v411 ^ v402) + v421 + v398 - 899497514;
      v415 = __ROR4__(v415, 2);
      v424 = v423 + v422;
      v425 = v404;
      v426 = v420 ^ v415 ^ v411;
      v420 = __ROR4__(v420, 2);
      v427 = __ROL4__(v412 ^ v380 ^ v333 ^ v425, 1);
      v428 = v424 ^ v420 ^ v415;
      v487 = v427;
      v429 = v426 + v427 + v402 - 899497514;
      v430 = v424;
      v424 = __ROR4__(v424, 2);
      v430 = __ROL4__(v430, 5);
      v431 = v429 + v430;
      v432 = __ROL4__(v416 ^ v387 ^ v341 ^ v417, 1);
      v488 = v432;
      v433 = v428 + v432 + v411 - 899497514;
      v434 = __ROL4__(v431, 5);
      v435 = v433 + v434;
      v436 = __ROL4__(v421 ^ v405 ^ v333 ^ v338, 1);
      v437 = __ROL4__(v435, 5);
      v489 = v436;
      v438 = (v431 ^ v424 ^ v420) + v436 + v415 - 899497514;
      v431 = __ROR4__(v431, 2);
      v439 = v438 + v437;
      v440 = v435 ^ v431 ^ v424;
      v435 = __ROR4__(v435, 2);
      v441 = __ROL4__(v427 ^ v406 ^ v341 ^ v352, 1);
      v442 = v439 ^ v435 ^ v431;
      v490 = v441;
      v443 = v441 + v420 - 899497514 + v440;
      v444 = v439;
      v439 = __ROR4__(v439, 2);
      v444 = __ROL4__(v444, 5);
      v445 = v444 + v443;
      v446 = __ROL4__(v432 ^ v418 ^ v367 ^ v338, 1);
      v491 = v446;
      v447 = v446 + v424 - 899497514 + v442;
      v448 = __ROL4__(v445, 5);
      v449 = v448 + v447;
      v450 = __ROL4__(v436 ^ v361 ^ v352 ^ v412, 1);
      v492 = v450;
      v451 = __ROL4__(v449, 5);
      v452 = v451 + (v445 ^ v439 ^ v435) + v450 + v431 - 899497514;
      v453 = __ROR4__(v445, 2);
      v454 = __ROL4__(v380 ^ v367 ^ v416 ^ v441, 1);
      v455 = v449 ^ v453 ^ v439;
      v449 = __ROR4__(v449, 2);
      v493 = v454;
      v456 = __ROL4__(v452, 5);
      v457 = v456 + v454 + v435 - 899497514 + v455;
      v458 = __ROL4__(v387 ^ v361 ^ v421 ^ v446, 1);
      v459 = v452 ^ v449 ^ v453;
      v452 = __ROR4__(v452, 2);
      v494 = v458;
      v460 = __ROL4__(v457, 5);
      v461 = v460 + v458 + v439 - 899497514 + v459;
      v462 = __ROL4__(v405 ^ v380 ^ v427 ^ v450, 1);
      v463 = v457 ^ v452 ^ v449;
      v457 = __ROR4__(v457, 2);
      v495 = v462;
      v464 = v462 + v453 - 899497514 + v463;
      v478 += v457;
      v13 = v478;
      v465 = __ROL4__(v461, 5);
      v466 = v465 + v464;
      v467 = __ROL4__(v406 ^ v387 ^ v432 ^ v454, 1);
      v468 = v461 ^ v457 ^ v452;
      v461 = __ROR4__(v461, 2);
      v477 += v461;
      v496 = v467;
      v469 = __ROL4__(v466, 5);
      v470 = v469 + v467 + v449 - 899497514 + v468;
      v475 += v470;
      v471 = __ROL4__(v405 ^ v418 ^ v436 ^ v458, 1);
      v497 = v471;
      v472 = v466 ^ v461 ^ v457;
      v466 = __ROR4__(v466, 2);
      v476 += v466;
      v473 = v472 + v479 + v471 - 899497514 + v452;
      v474 = v470;
      v14 = v476;
      v12 = v475;
      v474 = __ROL4__(v474, 5);
      result = (unsigned int)(v473 + v474);
      *(_DWORD *)(v481 + 4) = v475;
      *(_DWORD *)v481 = result;
      *(_DWORD *)(v481 + 8) = v476;
      v16 = v477;
      v479 = result;
      *(_DWORD *)(v481 + 12) = v477;
      *(_DWORD *)(v481 + 16) = v478;
    }
    while ( v15 < v480 );
  }
  return result;
}

__int64 __fastcall sub_404320(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp@1
  __int64 v3; // rax@1
  int v4; // ecx@1
  int v5; // esi@1
  __int64 v6; // r8@1
  unsigned __int8 v7; // cf@1
  unsigned int v8; // esi@1
  char *v9; // rdx@3
  unsigned __int64 v10; // rcx@3

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 28);
  v4 = *(_DWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 28);
  v6 = (-(signed __int64)((unsigned int)v3 < 0x38) & 0xFFFFFFFFFFFFFFC0LL) + 128;
  v7 = __CFADD__(*(_DWORD *)(a1 + 20), v5);
  v8 = *(_DWORD *)(a1 + 20) + v5;
  *(_DWORD *)(a1 + 20) = v8;
  if ( v7 )
    *(_DWORD *)(a1 + 24) = ++v4;
  *(_DWORD *)(a1 + 4 * ((-(signed __int64)((unsigned int)v3 < 0x38) & 0xFFFFFFFFFFFFFFF0LL) + 30) + 32) = _byteswap_ulong((v8 >> 29) | 8 * v4);
  *(_DWORD *)(a1 + 4 * ((-(signed __int64)((unsigned int)v3 < 0x38) & 0xFFFFFFFFFFFFFFF0LL) + 31) + 32) = (8 * v8 >> 8) & 0xFF00 | (v8 << 27) | (8 * v8 >> 24) | (v8 << 11) & 0xFF0000;
  v9 = (char *)(a1 + 32 + v3);
  v10 = v6 - v3 - 8;
  if ( v10 >= 8 )
  {
    *(_QWORD *)v9 = 128LL;
    *(_QWORD *)&v9[v10 - 8] = *(_QWORD *)((char *)&unk_409318 + v10);
    qmemcpy(
      (void *)((unsigned __int64)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)((char *)&qword_409320 - &v9[-((unsigned __int64)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL)]),
      8 * ((unsigned __int64)(&v9[v10] - ((unsigned __int64)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL)) >> 3));
  }
  else if ( v10 & 4 )
  {
    *(_DWORD *)v9 = qword_409320;
    *(_DWORD *)&v9[v10 - 4] = *(_DWORD *)((char *)&unk_40931C + v10);
  }
  else if ( v6 - v3 != 8 )
  {
    *v9 = qword_409320;
    if ( v10 & 2 )
      *(_WORD *)&v9[v10 - 2] = *(__int16 *)((char *)&word_40931E + v10);
  }
  sub_403180(a1 + 32, v6, a1);
  return sub_403150(a1, v2);
}

char *__fastcall sub_404460(void *src, size_t n, __int64 a3)
{
  size_t v3; // r13@1
  __int64 v4; // r12@1
  const __m128i *v5; // rbx@1
  char *result; // rax@1
  char *v7; // rbp@4
  const __m128i *v8; // r14@5
  __m128i v9; // xmm0@6
  __int64 v10; // rcx@8
  char *v11; // rsi@8
  size_t v12; // r13@13
  size_t v13; // rbp@16
  unsigned __int64 v14; // rdi@16
  __int64 v15; // rbp@19
  signed __int64 v16; // r15@19
  unsigned __int64 v17; // rdx@19
  unsigned __int64 v18; // r14@21
  unsigned int v19; // esi@21
  unsigned __int64 v20; // rdi@23
  signed __int64 v21; // r14@23
  unsigned int v22; // edx@24
  __int64 v23; // rsi@25
  int v24; // ecx@27
  __int64 v25; // rdx@27
  unsigned __int64 v26; // rsi@32
  unsigned __int64 v27; // r15@32
  unsigned int v28; // er15@32
  unsigned int v29; // er15@33
  unsigned int v30; // edx@33
  __int64 v31; // rcx@34

  v3 = n;
  v4 = a3;
  v5 = (const __m128i *)src;
  result = (char *)*(_DWORD *)(a3 + 28);
  if ( (_DWORD)result )
  {
    v15 = (unsigned int)result;
    v16 = a3 + 32;
    v17 = 128LL - (unsigned int)result;
    if ( v17 > n )
      v17 = n;
    v18 = v17;
    result = (char *)memcpy((void *)(v4 + 32 + (unsigned int)result), src, v17);
    v19 = v18 + *(_DWORD *)(v4 + 28);
    *(_DWORD *)(v4 + 28) = v19;
    if ( v19 > 0x40 )
    {
      sub_403180(v4 + 32, v19 & 0xFFFFFFC0, v4);
      v24 = *(_DWORD *)(v4 + 28);
      result = (char *)(v16 + ((v15 + v18) & 0xFFFFFFFFFFFFFFC0LL));
      v25 = *(_DWORD *)(v4 + 28) & 0x3F;
      *(_DWORD *)(v4 + 28) = v25;
      if ( (unsigned int)v25 >= 8 )
      {
        *(_QWORD *)(v4 + 32) = *(_QWORD *)result;
        *(_QWORD *)(v16 + (unsigned int)v25 - 8) = *(_QWORD *)&result[(unsigned int)v25 - 8];
        v26 = (v4 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        v27 = v16 - v26;
        result -= v27;
        v28 = (v25 + v27) & 0xFFFFFFF8;
        if ( v28 >= 8 )
        {
          v29 = v28 & 0xFFFFFFF8;
          v30 = 0;
          do
          {
            v31 = v30;
            v30 += 8;
            *(_QWORD *)(v26 + v31) = *(_QWORD *)&result[v31];
          }
          while ( v30 < v29 );
        }
      }
      else if ( v24 & 4 )
      {
        *(_DWORD *)(v4 + 32) = *(_DWORD *)result;
        result = (char *)*(_DWORD *)&result[v25 - 4];
        *(_DWORD *)(v16 + v25 - 4) = (_DWORD)result;
      }
      else if ( (_DWORD)v25 )
      {
        *(_BYTE *)(v4 + 32) = *result;
        if ( v24 & 2 )
        {
          result = (char *)*(_WORD *)&result[v25 - 2];
          *(_WORD *)(v16 + v25 - 2) = (_WORD)result;
        }
      }
    }
    v5 = (const __m128i *)((char *)src + v18);
    v3 -= v18;
  }
  if ( v3 > 0x3F )
  {
    if ( (unsigned __int8)v5 & 3 )
    {
      v7 = (char *)(v4 + 32);
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
          *(__m128i *)(v4 + 48) = _mm_loadu_si128(v5 - 3);
          *(__m128i *)(v4 + 64) = _mm_loadu_si128(v5 - 2);
          *(__m128i *)(v4 + 80) = _mm_loadu_si128(v5 - 1);
          sub_403180(v4 + 32, 64LL, v4);
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
    result = (char *)sub_403180(v14, v13 & 0xFFFFFFFFFFFFFFC0LL, v4);
  }
  if ( !v3 )
    return result;
  v7 = (char *)(v4 + 32);
  v8 = v5;
LABEL_8:
  v10 = *(_DWORD *)(v4 + 28);
  result = (char *)(unsigned int)v3;
  v11 = &v7[v10];
  if ( (unsigned int)v3 >= 8 )
  {
    v20 = (unsigned __int64)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v11 = v8->m128i_i64[0];
    *(_QWORD *)&v11[(unsigned int)v3 - 8] = *(__int64 *)((char *)&v8->m128i_i64[-1] + (unsigned int)v3);
    v21 = (char *)v8 - &v11[-v20];
    result = (char *)(((_DWORD)v3 + (_DWORD)v11 - (_DWORD)v20) & 0xFFFFFFF8);
    if ( (unsigned int)result >= 8 )
    {
      result = (char *)(((_DWORD)v3 + (_DWORD)v11 - (_DWORD)v20) & 0xFFFFFFF8);
      v22 = 0;
      do
      {
        v23 = v22;
        v22 += 8;
        *(_QWORD *)(v20 + v23) = *(_QWORD *)(v21 + v23);
      }
      while ( v22 < (unsigned int)result );
    }
  }
  else if ( v3 & 4 )
  {
    *(_DWORD *)v11 = v8->m128i_i64[0];
    result = (char *)*(_DWORD *)((char *)&v8->m128i_i64[0] + (unsigned int)v3 - 4);
    *(_DWORD *)&v11[(unsigned int)v3 - 4] = (_DWORD)result;
  }
  else if ( (_DWORD)v3 )
  {
    *v11 = v8->m128i_i64[0];
    if ( v3 & 2 )
    {
      result = (char *)*(_WORD *)((char *)&v8->m128i_i64[0] + (unsigned int)v3 - 2);
      *(_WORD *)&v11[(unsigned int)v3 - 2] = (_WORD)result;
    }
  }
  v12 = v10 + v3;
  if ( v12 > 0x3F )
  {
    v12 -= 64LL;
    sub_403180((unsigned __int64)v7, 64LL, v4);
    result = (char *)memcpy(v7, (const void *)(v4 + 96), v12);
  }
  *(_DWORD *)(v4 + 28) = v12;
  return result;
}

__int64 __fastcall sub_4047C0(FILE *stream, __int64 a2)
{
  char *v2; // rax@1
  char *v3; // r12@2
  size_t v4; // rbx@3
  int v5; // edx@4
  size_t v6; // rax@6
  __int64 result; // rax@11
  __int64 v8; // [sp+0h] [bp-C8h]@2
  __int64 v9; // [sp+8h] [bp-C0h]@2
  __int64 v10; // [sp+10h] [bp-B8h]@2
  __int64 v11; // [sp+18h] [bp-B0h]@2

  v2 = (char *)malloc(0x8048uLL);
  if ( v2 )
  {
    v11 = 0LL;
    v3 = v2;
    v8 = -1167088121787636991LL;
    v9 = 1167088121787636990LL;
    v10 = 3285377520LL;
LABEL_3:
    v4 = 0LL;
    while ( 1 )
    {
      v6 = fread_unlocked(&v3[v4], 1uLL, 0x8000 - v4, stream);
      v4 += v6;
      if ( v4 == 0x8000 )
      {
        sub_403180((unsigned __int64)v3, 0x8000LL, (__int64)&v8);
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
      sub_404460(v3, v4, (__int64)&v8);
    sub_404320((__int64)&v8, a2);
    free(v3);
    result = 0LL;
  }
  else
  {
    result = 1LL;
  }
  return result;
}

void __fastcall sub_404900(FILE *a1, int a2)
{
  int v2; // eax@2

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

FILE *__fastcall sub_404930(const char *a1, const char *a2)
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
      v6 = sub_406610((unsigned int)v4);
      if ( v6 < 0 )
      {
        v10 = __errno_location();
        v11 = v3;
        v3 = 0LL;
        v12 = *v10;
        v13 = v10;
        sub_406E50(v11);
        *v13 = v12;
      }
      else if ( (unsigned int)sub_406E50(v3) || (v3 = fdopen(v6, a2)) == 0LL )
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

char *__fastcall sub_4049D0(const char *a1)
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
  qword_60C308 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_404A70(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_407FC0(0LL);
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

unsigned __int64 __fastcall sub_404B70(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_404A70("`", v11);
        v58 = sub_404A70("'", v11);
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
            return sub_404B70((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_404B70((__int64)v9, v79, s);
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
                return sub_404B70((__int64)v9, v10, s);
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
              return sub_404B70((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_404B70((__int64)v9, v10, s);
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
              return sub_404B70((__int64)v9, v10, s);
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
              return sub_404B70((__int64)v9, v10, s);
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
            return sub_404B70((__int64)v9, v10, s);
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
            return sub_404B70((__int64)v9, v10, s);
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
            return sub_404B70((__int64)v9, v10, s);
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
              return sub_404B70((__int64)v9, v10, s);
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
          return sub_404B70((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_404B70((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_407E80((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_404B70((__int64)v9, v10, s);
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
      return sub_404B70((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_404B70(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_404A70("`", v11);
        v58 = sub_404A70("'", v11);
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
            return sub_404B70((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_404B70((__int64)v9, v79, s);
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
                return sub_404B70((__int64)v9, v10, s);
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
              return sub_404B70((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_404B70((__int64)v9, v10, s);
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
              return sub_404B70((__int64)v9, v10, s);
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
              return sub_404B70((__int64)v9, v10, s);
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
            return sub_404B70((__int64)v9, v10, s);
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
            return sub_404B70((__int64)v9, v10, s);
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
            return sub_404B70((__int64)v9, v10, s);
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
              return sub_404B70((__int64)v9, v10, s);
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
          return sub_404B70((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_404B70((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_407E80((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_404B70((__int64)v9, v10, s);
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
      return sub_404B70((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_405DA0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60C278;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60C290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_406E10();
    v9 = 16LL * (a1 + 1);
    if ( off_60C278 == &xmmword_60C280 )
    {
      LODWORD(v20) = sub_406C20(0LL, v9);
      v7 = v20;
      off_60C278 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60C280);
    }
    else
    {
      LODWORD(v10) = sub_406C20(off_60C278, v9);
      off_60C278 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60C290], 0, 16LL * (a1 + 1 - dword_60C290));
    dword_60C290 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_404B70(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60C320 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_406BC0(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_404B70(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_405DA0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60C278;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60C290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_406E10();
    v9 = 16LL * (a1 + 1);
    if ( off_60C278 == &xmmword_60C280 )
    {
      LODWORD(v20) = sub_406C20(0LL, v9);
      v7 = v20;
      off_60C278 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60C280);
    }
    else
    {
      LODWORD(v10) = sub_406C20(off_60C278, v9);
      off_60C278 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60C290], 0, 16LL * (a1 + 1 - dword_60C290));
    dword_60C290 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_404B70(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60C320 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_406BC0(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_404B70(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_4063C0(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_60C450;
  v4 = _mm_load_si128((const __m128i *)&xmmword_60C420);
  v5 = _mm_load_si128((const __m128i *)&xmmword_60C430);
  v6 = _mm_load_si128((const __m128i *)&xmmword_60C440);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_405DA0(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_406440(char *a1)
{
  return sub_4063C0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_406470(int a1, int a2, char *a3)
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
  return sub_405DA0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406470(int a1, int a2, char *a3)
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
  return sub_405DA0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

__int64 __fastcall sub_406610(char a1)
{
  return sub_406ED0(a1);
}

int __fastcall sub_406620(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_406620(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_406A80(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_406620(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_406620(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_406BC0(size_t a1)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_406E10();
  }
  return result;
}

void *__fastcall sub_406C20(void *a1, size_t a2)
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
        sub_406E10();
    }
  }
  return result;
}

void *__fastcall sub_406DC0(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_406BC0(a2);
  return memcpy(v2, a1, a2);
}

noreturn void  sub_406E10()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_406E50(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_407010(stream) )
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

__int64 __fastcall sub_406ED0(char a1, int a2, __int64 a3, __int64 a4)
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
    if ( dword_60C458 < 0 )
    {
      v4 = sub_406ED0(a1);
      if ( v4 >= 0 && dword_60C458 == -1 )
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
        dword_60C458 = 1;
      }
      else
      {
        v4 = sub_406ED0(a1);
        if ( v4 >= 0 )
        {
          dword_60C458 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

int __fastcall sub_407010(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_407050(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_407050(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_4070B0(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_407190(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_4077B0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_4070B0(a2, a7);
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
        sub_4070B0((__int64)v11, a7);
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
            v40 = sub_407190(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_407190(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_407190(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_407D80(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_60C460 = dword_60C29C;
  dword_60C464 = dword_60C298;
  result = sub_4077B0(a1, a2, a3, a4, a5, a6, (__int64)&dword_60C460, a7);
  dword_60C29C = dword_60C460;
  qword_60C4A0 = qword_60C470;
  dword_60C294 = dword_60C468;
  return result;
}

__int64 __fastcall sub_407E00(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_407D80(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_407E80(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_407F60(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

int __fastcall sub_407F00(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  int result; // eax@1

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_406E50(stream);
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

bool __fastcall sub_407F60(int a1)
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

const char *sub_407FC0()
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
                sub_406E50(v61);
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
            sub_406E50(v40);
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

int __fastcall sub_4085A0(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_60C208 )
    v1 = unk_60C208;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_4085B8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_60BE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
