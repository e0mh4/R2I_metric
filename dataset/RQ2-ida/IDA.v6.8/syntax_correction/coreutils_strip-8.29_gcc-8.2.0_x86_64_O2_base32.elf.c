#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  char v3; // r13@1
  char **v4; // rbx@1
  char **v5; // rsi@2
  int v6; // eax@2
  char *v7; // rax@11
  __int64 v8; // rax@15
  __int64 v9; // rdx@15
  const char *v10; // rbp@17
  FILE *v11; // rbx@18
  __int64 v12; // rax@19
  __int64 v13; // rbx@19
  int *v14; // rax@19
  int *v16; // r12@27
  char *v17; // rax@28
  __int64 v18; // rax@29
  __int64 v19; // rax@30
  __int64 v20; // rbx@30
  char *v21; // rax@30

  v3 = 0;
  v4 = a2;
  sub_402D10(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_406DE0(
    sub_402C30,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  while ( 1 )
  {
    v5 = v4;
    v6 = sub_406530((unsigned int)a1, v4, "diw:", &off_407440, 0LL);
    if ( v6 == -1 )
      break;
    if ( v6 == 100 )
    {
      v3 = 1;
    }
    else
    {
      if ( v6 <= 100 )
      {
        if ( v6 == -131 )
        {
          sub_404DB0((char)stdout);
          exit(0);
        }
        if ( v6 == -130 )
          sub_4020A0(0);
LABEL_31:
        sub_4020A0(1);
      }
      if ( v6 != 105 )
      {
        if ( v6 != 119 )
          goto LABEL_31;
        v7 = dcgettext(0LL, "invalid wrap size", 5);
        sub_405250(qword_60B440, 0LL, -1LL, "", v7, 0LL);
      }
    }
  }
  v8 = dword_60B25C;
  v9 = (unsigned int)(a1 - dword_60B25C - 1);
  if ( a1 - dword_60B25C > 1 )
  {
LABEL_30:
    LODWORD(v19) = sub_404930(v4[v8], v5, v9);
    v20 = v19;
    v21 = dcgettext(0LL, "extra operand %s", 5);
    error(0, 0, v21, v20);
    goto LABEL_31;
  }
  if ( dword_60B25C >= a1 )
  {
LABEL_20:
    v10 = "-";
    goto LABEL_21;
  }
  v10 = v4[dword_60B25C];
  if ( strcmp(v4[dword_60B25C], "-") )
  {
    v11 = fopen(v10, "rb");
    if ( v11 )
      goto LABEL_22;
    LODWORD(v12) = sub_4047B0(0LL, 3LL, v10);
    v13 = v12;
    v14 = __errno_location();
    error(1, *v14, "%s", v13);
    goto LABEL_20;
  }
LABEL_21:
  v11 = (FILE *)stdin;
LABEL_22:
  sub_402CE0(v11, 2LL);
  if ( v3 )
    sub_401BB0(v11);
  else
    sub_401DD0(v11, stdout);
  if ( (unsigned int)sub_4056C0(v11) == -1 )
  {
    v4 = (char **)(unsigned int)strcmp(v10, "-");
    v16 = __errno_location();
    if ( !(_DWORD)v4 )
    {
      v17 = dcgettext(0LL, "closing standard input", 5);
      error(1, *v16, v17);
    }
    LODWORD(v18) = sub_4047B0(0LL, 3LL, v10);
    v5 = (char **)(unsigned int)*v16;
    error(1, (int)v5, "%s", v18);
    goto LABEL_30;
  }
  return 0LL;
}

int sub_401AFB()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_401B1A()
{
  return 0;
}

int sub_401B51()
{
  int result; // eax@4

  if ( !byte_60B288 )
  {
    while ( qword_60B290 < (unsigned __int64)(((&unk_60AE48 - (_UNKNOWN *)&qword_60AE40) >> 3) - 1) )
      (*(&qword_60AE40 + ++qword_60B290))();
    result = sub_401AFB();
    byte_60B288 = 1;
  }
  return result;
}

int sub_401BA8()
{
  return sub_401B1A();
}

__int64 __usercall sub_401BB0(FILE *stream, char a2, FILE *a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // rbp@2
  __int64 result; // rax@3
  char *v7; // rsi@6
  const char *v8; // rbx@6
  char v9; // r13@10
  char v10; // al@10
  int *v11; // rax@14
  unsigned int i; // ebx@16
  unsigned __int64 v13; // rdx@18
  size_t v14; // rax@19
  char *v15; // rbx@28
  int *v16; // rax@28
  char *v17; // rax@29
  FILE *v18; // [sp+0h] [bp-3468h]@1
  char v19; // [sp+Fh] [bp-3459h]@1
  size_t n; // [sp+18h] [bp-3450h]@6
  unsigned int v21; // [sp+24h] [bp-3444h]@1
  char ptr; // [sp+30h] [bp-3438h]@19
  char v23; // [sp+1430h] [bp-2038h]@6
  char src[8247]; // [sp+1431h] [bp-2037h]@15

  v18 = a3;
  v19 = a2;
  sub_4028F0(&v21);
LABEL_2:
  v5 = 0LL;
  do
  {
    v7 = (char *)1;
    v8 = (const char *)fread_unlocked(&v23 + v5, 1uLL, 0x2000 - v5, stream);
    n = (size_t)v8;
    if ( v19 )
    {
      a5 = 0LL;
      goto LABEL_8;
    }
    while ( 1 )
    {
      result = stream->_flags;
      v5 += (unsigned __int64)v8;
      if ( !(result & 0x20) )
        break;
LABEL_14:
      v8 = dcgettext(0LL, "read error", 5);
      v11 = __errno_location();
      error(1, *v11, v8, v18);
LABEL_15:
      --v8;
      v7 = &src[a4];
      n = (size_t)v8;
      memmove(&v23 + a4, &src[a4], (size_t)&v8[-a5]);
LABEL_8:
      if ( v8 )
      {
        while ( a5 < (unsigned __int64)v8 )
        {
          a4 = v5 + a5;
          v9 = *(&v23 + v5 + a5);
          v10 = sub_4028D0((unsigned int)*(&v23 + v5 + a5), v7);
          if ( v9 != 61 && !v10 )
            goto LABEL_15;
          ++a5;
          if ( !v8 )
          {
            result = stream->_flags;
            if ( !(result & 0x20) )
              goto LABEL_4;
            goto LABEL_14;
          }
        }
      }
    }
LABEL_4:
    ;
  }
  while ( v5 <= 0x1FFF && !(result & 0x10) );
  for ( i = 0; ; ++i )
  {
    if ( !(result & 0x10) )
    {
      if ( i )
        goto LABEL_2;
LABEL_18:
      n = 5120LL;
      v13 = v5;
      goto LABEL_19;
    }
    if ( i > 1 )
      return result;
    if ( i != 1 )
      goto LABEL_18;
    result = v21;
    if ( !v21 )
      return result;
    n = 5120LL;
    v13 = 0LL;
LABEL_19:
    a5 = (unsigned int)sub_402900(&v21, &v23, v13, &ptr, &n);
    v14 = fwrite_unlocked(&ptr, 1uLL, n, v18);
    if ( n > v14 )
      break;
    if ( !(_BYTE)a5 )
      goto LABEL_29;
    result = stream->_flags;
  }
  v15 = dcgettext(0LL, "write error", 5);
  v16 = __errno_location();
  error(1, *v16, v15, v18);
LABEL_29:
  v17 = dcgettext(0LL, "invalid input", 5);
  error(1, 0, v17, v18);
  return sub_401DD0((FILE *)1, 0LL);
}

__int64 __fastcall sub_401DD0(FILE *stream, _IO_FILE *a2, __int64 a3)
{
  __int64 v3; // rbp@1
  unsigned __int64 v4; // r15@2
  __int64 result; // rax@4
  unsigned __int64 v6; // r14@10
  size_t v7; // r10@15
  char *v8; // rax@17
  size_t v9; // r9@20
  char *v10; // rax@27
  char *v11; // rbx@31
  int *v12; // rax@31
  char *v13; // rbx@32
  int *v14; // rax@32
  char *v15; // rbx@33
  int *v16; // rax@33
  char *v17; // rbx@34
  int *v18; // rax@34
  char *v19; // rbx@35
  int *v20; // rax@35
  __int64 v21; // [sp+8h] [bp-13850h]@1
  size_t v22; // [sp+10h] [bp-13848h]@23
  size_t v23; // [sp+10h] [bp-13848h]@25
  size_t v24; // [sp+18h] [bp-13840h]@23
  char v25[30720]; // [sp+20h] [bp-13838h]@4
  char ptr[49208]; // [sp+7820h] [bp-C038h]@10

  v3 = 0LL;
  v21 = a3;
  do
  {
    v4 = 0LL;
    while ( 1 )
    {
      v4 += fread_unlocked(&v25[v4], 1uLL, 30720 - v4, stream);
      result = stream->_flags;
      if ( result & 0x30 )
        break;
      if ( v4 > 0x77FF )
        goto LABEL_10;
    }
    if ( !v4 )
      break;
LABEL_10:
    v6 = 8 * ((unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)(v4 + 4) >> 64) >> 2);
    sub_4025D0(v25, v4, ptr, 8 * ((unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)(v4 + 4) >> 64) >> 2));
    if ( v21 )
    {
      v7 = 0LL;
      if ( v6 )
      {
        do
        {
          v9 = v21 - v3;
          if ( v21 - v3 > v6 - v7 )
            v9 = v6 - v7;
          if ( v9 )
          {
            v24 = v7;
            v22 = v9;
            if ( v9 > fwrite_unlocked(&ptr[v7], 1uLL, v9, stdout) )
              goto LABEL_32;
            v3 += v22;
            v7 = v22 + v24;
          }
          else
          {
            v8 = a2->_IO_write_ptr;
            if ( v8 >= a2->_IO_write_end )
            {
              v23 = v7;
              if ( __overflow(a2, 10) == -1 )
                goto LABEL_33;
              v3 = 0LL;
              v7 = v23;
            }
            else
            {
              v3 = 0LL;
              a2->_IO_write_ptr = v8 + 1;
              *v8 = 10;
            }
          }
        }
        while ( v6 > v7 );
      }
    }
    else if ( v6 > fwrite_unlocked(ptr, 1uLL, v6, stdout) )
    {
      goto LABEL_34;
    }
    result = stream->_flags;
  }
  while ( !(result & 0x30) && v4 == 30720 );
  if ( v21 && v3 )
  {
    v10 = a2->_IO_write_ptr;
    if ( v10 >= a2->_IO_write_end )
    {
      if ( __overflow(a2, 10) == -1 )
      {
        v11 = dcgettext(0LL, "write error", 5);
        v12 = __errno_location();
        error(1, *v12, v11);
LABEL_32:
        v13 = dcgettext(0LL, "write error", 5);
        v14 = __errno_location();
        error(1, *v14, v13);
LABEL_33:
        v15 = dcgettext(0LL, "write error", 5);
        v16 = __errno_location();
        error(1, *v16, v15);
LABEL_34:
        v17 = dcgettext(0LL, "write error", 5);
        v18 = __errno_location();
        error(1, *v18, v17);
LABEL_35:
        v19 = dcgettext(0LL, "read error", 5);
        v20 = __errno_location();
        error(1, *v20, v19);
        sub_4020A0(1);
      }
    }
    else
    {
      a2->_IO_write_ptr = v10 + 1;
      *v10 = 10;
    }
    result = stream->_flags;
  }
  if ( result & 0x20 )
    goto LABEL_35;
  return result;
}

noreturn void __fastcall  sub_4020A0(int status)
{
  int v1; // ebx@1
  __int64 v2; // rbp@1
  char *v3; // rax@2
  char *v4; // rax@4
  FILE *v5; // rbp@4
  char *v6; // rax@4
  FILE *v7; // rbp@4
  char *v8; // rax@4
  FILE *v9; // rbp@4
  char *v10; // rax@4
  FILE *v11; // rbp@4
  char *v12; // rax@4
  FILE *v13; // rbp@4
  char *v14; // rax@4
  char *v15; // rax@4
  __int64 *v16; // rax@4
  _BYTE *v17; // rdi@5
  bool v18; // cf@5
  bool v19; // zf@5
  const char *v20; // rsi@6
  signed __int64 v21; // rcx@6
  char *v22; // rbp@10
  char *v23; // rax@11
  char *v24; // rax@11
  char *v25; // r12@13
  char *v26; // rax@13
  char *v27; // rax@15
  char *v28; // rax@16
  char *v29; // rax@16
  char *v30; // rax@18
  char *v31; // rax@20
  __int64 v32; // rcx@20
  const char *v33; // [sp+0h] [bp-88h]@4
  const char *v34; // [sp+8h] [bp-80h]@4
  const char *v35; // [sp+10h] [bp-78h]@4
  const char *v36; // [sp+18h] [bp-70h]@4
  const char *v37; // [sp+20h] [bp-68h]@4
  const char *v38; // [sp+28h] [bp-60h]@4
  const char *v39; // [sp+30h] [bp-58h]@4
  const char *v40; // [sp+38h] [bp-50h]@4
  const char *v41; // [sp+40h] [bp-48h]@4
  const char *v42; // [sp+48h] [bp-40h]@4
  const char *v43; // [sp+50h] [bp-38h]@4
  const char *v44; // [sp+58h] [bp-30h]@4
  __int64 v45; // [sp+60h] [bp-28h]@4
  __int64 v46; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_60B2A8;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(
         0LL,
         "Usage: %s [OPTION]... [FILE]\nBase%d encode or decode FILE, or standard input, to standard output.\n",
         5);
  __printf_chk(1LL, v4, v2, 32LL);
  v5 = stdout;
  v6 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "  -d, --decode          decode data\n"
          "  -i, --ignore-garbage  when decoding, ignore non-alphabet characters\n"
          "  -w, --wrap=COLS       wrap encoded lines after COLS character (default 76).\n"
          "                          Use 0 to disable line wrapping\n"
          "\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v14, v13);
  v15 = dcgettext(
          0LL,
          "\n"
          "The data are encoded as described for the %s alphabet in RFC 4648.\n"
          "When decoding, the input may contain newlines in addition to the bytes of\n"
          "the formal %s alphabet.  Use --ignore-garbage to attempt to recover\n"
          "from any other non-alphabet bytes in the encoded stream.\n",
          5);
  __printf_chk(1LL, v15, "base32", "base32");
  v33 = "[";
  v16 = (__int64 *)&v33;
  v34 = "test invocation";
  v35 = "coreutils";
  v36 = "Multi-call invocation";
  v37 = "sha224sum";
  v38 = "sha2 utilities";
  v39 = "sha256sum";
  v40 = "sha2 utilities";
  v41 = "sha384sum";
  v42 = "sha2 utilities";
  v43 = "sha512sum";
  v44 = "sha2 utilities";
  v45 = 0LL;
  v46 = 0LL;
  do
  {
    v16 += 2;
    v17 = (_BYTE *)*v16;
    v18 = 0;
    v19 = *v16 == 0;
    if ( !*v16 )
      break;
    v20 = "base32";
    v21 = 7LL;
    do
    {
      if ( !v21 )
        break;
      v18 = (const unsigned __int8)*v20 < *v17;
      v19 = *v20++ == *v17++;
      --v21;
    }
    while ( v19 );
  }
  while ( (!v18 && !v19) != v18 );
  v22 = (char *)v16[1];
  if ( v22 )
  {
    v23 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v23, &unk_406EE6, "https://www.gnu.org/software/coreutils/");
    v24 = setlocale(5, 0LL);
    if ( !v24 || !strncmp(v24, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v28 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v28, &unk_406EE6, "https://www.gnu.org/software/coreutils/");
    v29 = setlocale(5, 0LL);
    if ( !v29 || !strncmp(v29, "en_", 3uLL) )
    {
      v22 = "base32";
      v30 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v25 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v30, "https://www.gnu.org/software/coreutils/", "base32");
LABEL_15:
      v27 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v27, v22, v25);
LABEL_3:
      exit(v1);
    }
    v22 = "base32";
  }
  v31 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v31, "base32", v32);
LABEL_13:
  v25 = "Multi-call invocation" + 10;
  v26 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v26, "https://www.gnu.org/software/coreutils/", "base32");
  if ( v22 != "base32" )
    v25 = "";
  goto LABEL_15;
}

signed __int64 __fastcall sub_402400(__int64 a1, unsigned __int64 a2, __int64 *a3, _QWORD *a4)
{
  signed __int64 result; // rax@1
  char v5; // si@2
  char v6; // r8@3
  __int64 v7; // rax@4
  __int64 v8; // rsi@6
  char v9; // si@7
  char v10; // r9@8
  __int64 v11; // rsi@11
  char v12; // r8@12
  __int64 v13; // rsi@15
  char v14; // si@16
  char v15; // r9@17
  __int64 v16; // rsi@20
  char v17; // si@21

  result = 0LL;
  if ( a2 > 7 )
  {
    v5 = byte_407540[(unsigned __int64)*(_BYTE *)a1];
    if ( v5 >= 0 )
    {
      v6 = byte_407540[(unsigned __int64)*(_BYTE *)(a1 + 1)];
      if ( v6 >= 0 )
      {
        v7 = *a3;
        if ( *a4 )
        {
          *(_BYTE *)(++v7 - 1) = (v6 >> 2) | 8 * v5;
          --*a4;
        }
        v8 = *(_BYTE *)(a1 + 2);
        if ( (_BYTE)v8 == 61 )
        {
          if ( *(_BYTE *)(a1 + 3) != 61 || *(_BYTE *)(a1 + 4) != 61 )
            goto LABEL_28;
        }
        else
        {
          v9 = byte_407540[v8];
          if ( v9 < 0 )
            goto LABEL_28;
          v10 = byte_407540[(unsigned __int64)*(_BYTE *)(a1 + 3)];
          if ( v10 < 0 )
            goto LABEL_28;
          if ( *a4 )
          {
            *(_BYTE *)(++v7 - 1) = (v10 >> 4) | 2 * v9 | (v6 << 6);
            --*a4;
          }
          v11 = *(_BYTE *)(a1 + 4);
          if ( (_BYTE)v11 != 61 )
          {
            v12 = byte_407540[v11];
            if ( v12 < 0 )
              goto LABEL_28;
            if ( *a4 )
            {
              *(_BYTE *)(++v7 - 1) = (v12 >> 1) | 16 * v10;
              --*a4;
            }
            v13 = *(_BYTE *)(a1 + 5);
            if ( (_BYTE)v13 != 61 )
            {
              v14 = byte_407540[v13];
              if ( v14 >= 0 )
              {
                v15 = byte_407540[(unsigned __int64)*(_BYTE *)(a1 + 6)];
                if ( v15 >= 0 )
                {
                  if ( *a4 )
                  {
                    *(_BYTE *)(++v7 - 1) = (v15 >> 3) | 4 * v14 | (v12 << 7);
                    --*a4;
                  }
                  v16 = *(_BYTE *)(a1 + 7);
                  if ( (_BYTE)v16 == 61 )
                    goto LABEL_24;
                  v17 = byte_407540[v16];
                  if ( v17 >= 0 )
                  {
                    if ( *a4 )
                    {
                      *(_BYTE *)(++v7 - 1) = v17 | 32 * v15;
                      --*a4;
                    }
LABEL_24:
                    *a3 = v7;
                    return 1LL;
                  }
                }
              }
LABEL_28:
              *a3 = v7;
              return 0LL;
            }
LABEL_30:
            if ( *(_BYTE *)(a1 + 6) == 61 && *(_BYTE *)(a1 + 7) == 61 )
              goto LABEL_24;
            goto LABEL_28;
          }
        }
        if ( *(_BYTE *)(a1 + 5) != 61 )
          goto LABEL_28;
        goto LABEL_30;
      }
    }
  }
  return result;
}

void __fastcall sub_4025D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // r9@1
  __int64 v5; // r10@1
  unsigned __int8 v6; // r8@4
  char v7; // r8@6
  char v8; // al@7
  __int64 v9; // r11@7
  char v10; // r8@8
  unsigned __int8 v11; // al@9
  char v12; // al@11
  char v13; // r8@12
  char v14; // al@18
  char v15; // al@19

  v4 = a3 + a4 - 8;
  v5 = a3 + a4;
  if ( a2 && a4 )
  {
    while ( 1 )
    {
      v14 = *(_BYTE *)a1;
      *(_BYTE *)a3 = byte_407520[(unsigned __int64)((*(_BYTE *)a1 >> 3) & 0x1F)];
      if ( a4 == 1 )
        return;
      v15 = 4 * v14;
      if ( a2 == 1 )
        break;
      v6 = *(_BYTE *)(a1 + 1);
      *(_BYTE *)(a3 + 1) = byte_407520[(unsigned __int64)(((*(_BYTE *)(a1 + 1) >> 6) + v15) & 0x1F)];
      if ( a4 == 2 )
        return;
      *(_BYTE *)(a3 + 2) = byte_407520[(unsigned __int64)((v6 >> 1) & 0x1F)];
      if ( a4 == 3 )
        return;
      v7 = 16 * v6;
      if ( a2 == 2 )
      {
        *(_BYTE *)(a3 + 3) = byte_407520[(unsigned __int64)(v7 & 0x1F)];
        if ( v5 - a3 == 4 )
          return;
        goto LABEL_23;
      }
      v8 = *(_BYTE *)(a1 + 2);
      v9 = v5 - a3;
      *(_BYTE *)(a3 + 3) = byte_407520[(unsigned __int64)(((*(_BYTE *)(a1 + 2) >> 4) + v7) & 0x1F)];
      if ( v5 - a3 == 4 )
        return;
      v10 = 2 * v8;
      if ( a2 == 3 )
      {
        *(_BYTE *)(a3 + 4) = byte_407520[(unsigned __int64)(2 * v8 & 0x1E)];
        if ( v9 == 5 )
          return;
        goto LABEL_24;
      }
      v11 = *(_BYTE *)(a1 + 3);
      *(_BYTE *)(a3 + 4) = byte_407520[(unsigned __int64)(((*(_BYTE *)(a1 + 3) >> 7) + v10) & 0x1F)];
      if ( v9 == 5 )
        return;
      *(_BYTE *)(a3 + 5) = byte_407520[(unsigned __int64)((v11 >> 2) & 0x1F)];
      if ( a4 == 6 )
        return;
      v12 = 8 * v11;
      if ( a2 != 4 )
      {
        v13 = *(_BYTE *)(a1 + 4);
        *(_BYTE *)(a3 + 6) = byte_407520[(unsigned __int64)(((*(_BYTE *)(a1 + 4) >> 5) + v12) & 0x1F)];
        if ( v9 == 7 )
          return;
        *(_BYTE *)(a3 + 7) = byte_407520[(unsigned __int64)(v13 & 0x1F)];
        if ( v4 == a3 )
          return;
        a2 -= 5LL;
        if ( a2 )
          a1 += 5LL;
        goto LABEL_16;
      }
      *(_BYTE *)(a3 + 6) = byte_407520[(unsigned __int64)(v12 & 0x18)];
      if ( v9 == 7 )
        return;
LABEL_26:
      *(_BYTE *)(a3 + 7) = 61;
      if ( v4 == a3 )
        return;
      a2 = 0LL;
LABEL_16:
      a3 += 8LL;
      a4 -= 8LL;
      if ( !a2 || !a4 )
      {
        if ( a4 )
          *(_BYTE *)a3 = 0;
        return;
      }
    }
    *(_BYTE *)(a3 + 1) = byte_407520[(unsigned __int64)(v15 & 0x1C)];
    if ( a4 == 2 )
      return;
    *(_BYTE *)(a3 + 2) = 61;
    if ( a4 == 3 )
      return;
    *(_BYTE *)(a3 + 3) = 61;
    if ( a4 == 4 )
      return;
LABEL_23:
    *(_BYTE *)(a3 + 4) = 61;
    if ( a4 == 5 )
      return;
LABEL_24:
    *(_BYTE *)(a3 + 5) = 61;
    if ( a4 == 6 )
      return;
    *(_BYTE *)(a3 + 6) = 61;
    if ( a4 == 7 )
      return;
    goto LABEL_26;
  }
  if ( a4 )
    *(_BYTE *)a3 = 0;
}

char __fastcall sub_4028D0(unsigned __int8 a1)
{
  return (unsigned __int8)~byte_407540[(unsigned __int64)a1] >> 7;
}

void __fastcall sub_4028F0(_DWORD *a1)
{
  *a1 = 0;
}

char __fastcall sub_402900(_DWORD *a1, _BYTE *a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  _DWORD *v5; // r14@1
  _BYTE *v6; // rbx@1
  unsigned __int64 v7; // rsi@1
  __int64 v8; // r15@1
  bool v9; // bp@2
  bool v10; // r12@2
  __int64 v11; // rdx@5
  _BYTE *v12; // r15@5
  __int64 v13; // rdi@6
  char result; // al@7
  _BYTE *v15; // rsi@8
  __int64 v16; // rdx@9
  __int64 v17; // rax@14
  char v18; // cl@17
  _BYTE *v19; // r11@27
  unsigned __int64 v20; // r10@29
  __int64 v21; // rax@33
  __int64 v22; // rdx@38
  bool v23; // [sp+Fh] [bp-59h]@1
  __int64 *v24; // [sp+10h] [bp-58h]@1
  __int64 v25; // [sp+18h] [bp-50h]@1
  __int64 v26; // [sp+28h] [bp-40h]@1

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = *a5;
  v25 = a4;
  v24 = a5;
  v26 = v8;
  v23 = a1 != 0LL;
  if ( a1 )
  {
    v9 = a3 != 0;
    v10 = a3 != 0 && *a1 == 0;
  }
  else
  {
    v10 = 1;
    v9 = 1;
  }
  while ( 1 )
  {
LABEL_9:
    v16 = v8;
    if ( v10 )
    {
      v19 = &v6[v7];
      while ( (unsigned __int8)sub_402400((__int64)v6, v19 - v6, &v25, &v26) )
      {
        v8 = v26;
        v6 += 8;
      }
      v16 = v26;
      v7 = v20;
    }
    result = v9 && v7 == 0;
    if ( v9 && v7 == 0 )
      goto LABEL_26;
    if ( !v7 )
      break;
    if ( *v6 != 10 )
    {
      v11 = v16 - v8;
      v26 = v8;
      v12 = &v6[v7];
      v25 += v11;
      if ( !v5 )
      {
        v13 = (__int64)v6;
        goto LABEL_7;
      }
      goto LABEL_14;
    }
    if ( !v5 )
    {
      v22 = v16 - v8;
      v26 = v8;
      v13 = (__int64)v6;
      v12 = &v6[v7];
      v25 += v22;
      goto LABEL_22;
    }
    ++v6;
    --v7;
    v8 = v16;
  }
  v26 = v8;
  v25 += v16 - v8;
  if ( !v5 )
  {
    v16 = v8;
    result = 1;
    goto LABEL_26;
  }
  v12 = v6;
LABEL_14:
  v17 = *v5;
  if ( (_DWORD)v17 == 8 )
  {
    *v5 = 0;
LABEL_32:
    if ( (signed __int64)v7 > 7 )
    {
      LODWORD(v21) = sub_406630(v6, 10LL, 8LL);
      if ( !v21 )
      {
        v13 = (__int64)v6;
        v7 = 8LL;
        v6 += 8;
        goto LABEL_7;
      }
    }
    v17 = *v5;
    goto LABEL_16;
  }
  if ( !(_DWORD)v17 )
    goto LABEL_32;
LABEL_16:
  if ( v6 >= v12 )
    goto LABEL_21;
  while ( 1 )
  {
    v18 = *(++v6 - 1);
    if ( v18 != 10 )
      break;
LABEL_20:
    if ( v6 == v12 )
      goto LABEL_21;
  }
  *v5 = v17 + 1;
  *((_BYTE *)v5 + v17 + 4) = v18;
  if ( (_DWORD)v17 != 7 )
  {
    v17 = (unsigned int)(v17 + 1);
    goto LABEL_20;
  }
  LODWORD(v17) = 8;
LABEL_21:
  v7 = (unsigned int)v17;
  v13 = (__int64)(v5 + 1);
  if ( (_DWORD)v17 )
  {
LABEL_22:
    if ( v7 <= 7 && v9 && v23 )
      goto LABEL_25;
LABEL_7:
    result = sub_402400(v13, v7, &v25, &v26);
    if ( result )
    {
      v15 = v12;
      v8 = v26;
      v7 = v15 - v6;
      goto LABEL_9;
    }
    v16 = v26;
  }
  else
  {
LABEL_25:
    v16 = v26;
    result = 1;
  }
LABEL_26:
  *v24 -= v16;
  return result;
}

__int64 sub_402C30()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_406740(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60B298 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60B2A0 )
      {
        LODWORD(v5) = sub_404780(qword_60B2A0, "write error");
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
  result = sub_406740(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

void __fastcall sub_402CE0(FILE *a1, int a2)
{
  int v2; // eax@2

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

char *__fastcall sub_402D10(const char *a1)
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
  qword_60B2A8 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_402DB0(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_406800(0LL);
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

unsigned __int64 __fastcall sub_402EB0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_402DB0("`", v11);
        v58 = sub_402DB0("'", v11);
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
            return sub_402EB0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_402EB0((__int64)v9, v79, s);
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
                return sub_402EB0((__int64)v9, v10, s);
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
              return sub_402EB0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_402EB0((__int64)v9, v10, s);
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
              return sub_402EB0((__int64)v9, v10, s);
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
              return sub_402EB0((__int64)v9, v10, s);
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
            return sub_402EB0((__int64)v9, v10, s);
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
            return sub_402EB0((__int64)v9, v10, s);
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
            return sub_402EB0((__int64)v9, v10, s);
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
              return sub_402EB0((__int64)v9, v10, s);
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
          return sub_402EB0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_402EB0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_4065B0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_402EB0((__int64)v9, v10, s);
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
      return sub_402EB0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_402EB0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_402DB0("`", v11);
        v58 = sub_402DB0("'", v11);
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
            return sub_402EB0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_402EB0((__int64)v9, v79, s);
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
                return sub_402EB0((__int64)v9, v10, s);
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
              return sub_402EB0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_402EB0((__int64)v9, v10, s);
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
              return sub_402EB0((__int64)v9, v10, s);
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
              return sub_402EB0((__int64)v9, v10, s);
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
            return sub_402EB0((__int64)v9, v10, s);
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
            return sub_402EB0((__int64)v9, v10, s);
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
            return sub_402EB0((__int64)v9, v10, s);
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
              return sub_402EB0((__int64)v9, v10, s);
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
          return sub_402EB0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_402EB0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_4065B0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_402EB0((__int64)v9, v10, s);
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
      return sub_402EB0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_4040E0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60B238;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60B250 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405140();
    v9 = 16LL * (a1 + 1);
    if ( off_60B238 == &xmmword_60B240 )
    {
      LODWORD(v20) = sub_404F50(0LL, v9);
      v7 = v20;
      off_60B238 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60B240);
    }
    else
    {
      LODWORD(v10) = sub_404F50(off_60B238, v9);
      off_60B238 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60B250], 0, 16LL * (a1 + 1 - dword_60B250));
    dword_60B250 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_402EB0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60B2C0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_404EF0(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_402EB0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_4040E0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60B238;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60B250 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405140();
    v9 = 16LL * (a1 + 1);
    if ( off_60B238 == &xmmword_60B240 )
    {
      LODWORD(v20) = sub_404F50(0LL, v9);
      v7 = v20;
      off_60B238 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60B240);
    }
    else
    {
      LODWORD(v10) = sub_404F50(off_60B238, v9);
      off_60B238 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60B250], 0, 16LL * (a1 + 1 - dword_60B250));
    dword_60B250 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_402EB0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60B2C0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_404EF0(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_402EB0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_404700(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_60B3F0;
  v4 = _mm_load_si128((const __m128i *)&xmmword_60B3C0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_60B3D0);
  v6 = _mm_load_si128((const __m128i *)&xmmword_60B3E0);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_4040E0(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_404780(char *a1)
{
  return sub_404700(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_4047B0(int a1, int a2, char *a3)
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
  return sub_4040E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4047B0(int a1, int a2, char *a3)
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
  return sub_4040E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404930(char *a1)
{
  return sub_4040E0(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60B200);
}

int __fastcall sub_404950(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_404950(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_404DB0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_404950(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_404950(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_404EF0(size_t a1)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_405140();
  }
  return result;
}

void *__fastcall sub_404F50(void *a1, size_t a2)
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
        sub_405140();
    }
  }
  return result;
}

void *__fastcall sub_4050F0(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_404EF0(a2);
  return memcpy(v2, a1, a2);
}

noreturn void  sub_405140()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

unsigned __int64 __fastcall sub_405180(char *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned __int64 v7; // r15@1
  unsigned __int64 v8; // r14@1
  __int64 v9; // r13@1
  int v10; // ebx@1
  int v11; // eax@1
  unsigned __int64 v12; // rbp@2
  int *v13; // r14@4
  _BYTE *v14; // rax@5
  int v15; // esi@5
  int v17; // ebp@11
  int *v18; // rax@11
  unsigned __int64 v19; // [sp+8h] [bp-40h]@0

  v7 = a4;
  v8 = a3;
  v9 = a6;
  v10 = a7;
  v11 = sub_405280(a1);
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
  v14 = sub_404930(a1);
  v15 = *v13;
  if ( *v13 == 22 )
    v15 = 0;
  if ( !a7 )
    v10 = 1;
  error(v10, v15, "%s: %s", v9, v14);
  return v19;
}

unsigned __int64 __fastcall sub_405250(char *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return sub_405180(a1, 10LL, a2, a3, a4, a5, a6);
}

__int64 __fastcall sub_405280(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
{
  char **v5; // r15@2
  unsigned __int64 *v6; // r14@2
  const char *v7; // r13@2
  int *v8; // rax@4
  int *v9; // r12@4
  char v10; // bl@4
  const unsigned __int16 *v11; // rsi@4
  char *v12; // rax@4
  unsigned __int64 v13; // rbx@8
  signed int v14; // ebp@10
  int v15; // er12@12
  char *v17; // rax@19
  char *v18; // r8@19
  signed __int64 v19; // rax@21
  char *v20; // rax@22
  char v21; // al@23
  int v22; // esi@27
  unsigned __int64 v23; // rdx@27
  char *v24; // r8@33
  unsigned __int64 v25; // kr18_8@37
  char *v26; // ST00_8@39
  char *v27; // rax@39
  signed int v28; // edi@47
  signed int v29; // er9@47
  bool v30; // of@48
  signed int v31; // edi@53
  signed int v32; // edi@59
  signed int v33; // edi@65
  signed int v34; // edi@71
  int v35; // [sp+0h] [bp-58h]@2
  char *v36; // [sp+0h] [bp-58h]@17
  char *v37; // [sp+8h] [bp-50h]@22
  char *endptr; // [sp+18h] [bp-40h]@3

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
  v5 = a2;
  v35 = a3;
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
  while ( HIBYTE(v11[(unsigned __int8)v10]) & 0x20 )
    v10 = *++v12;
  if ( v10 == 45 )
    goto LABEL_16;
  v13 = __strtoul_internal(nptr, v5, v35, 0);
  if ( *v5 == nptr )
  {
    v36 = *v5;
    if ( v7 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(v7, (char)v15);
        v18 = v36;
        if ( v17 )
          goto LABEL_20;
      }
    }
    goto LABEL_16;
  }
  if ( *v9 )
  {
    v14 = 1;
    if ( *v9 == 34 )
      goto LABEL_11;
LABEL_16:
    return 4;
  }
  v14 = 0;
LABEL_11:
  if ( v7 )
  {
    v15 = (unsigned __int8)**v5;
    if ( (_BYTE)v15 )
    {
      v26 = *v5;
      v27 = strchr(v7, (char)v15);
      v18 = v26;
      if ( !v27 )
      {
LABEL_40:
        *v6 = v13;
        v14 |= 2u;
        return (unsigned int)v14;
      }
LABEL_20:
      if ( (unsigned __int8)(v15 - 69) > 0x2Fu
        || (v19 = 142129060940101LL, !_bittest64(&v19, (unsigned int)(v15 - 69)))
        || (v37 = v18, v20 = strchr(v7, 48), v18 = v37, !v20) )
      {
        v22 = 1;
        v23 = 1024LL;
        goto LABEL_28;
      }
      v21 = v37[1];
      if ( v21 != 68 )
      {
        if ( v21 == 105 )
        {
          v23 = 1024LL;
          v22 = 2 * (v37[2] == 66) + 1;
LABEL_28:
          switch ( (_BYTE)v15 )
          {
            case 0x4D:
            case 0x6D:
LABEL_30:
              if ( !is_mul_ok((signed int)v23, v13) || !is_mul_ok((signed int)v23, (signed int)v23 * v13) )
                goto LABEL_38;
              v13 *= (signed int)v23 * (signed __int64)(signed int)v23;
              goto LABEL_33;
            case 0x63:
              goto LABEL_33;
            case 0x4B:
            case 0x6B:
LABEL_37:
              v25 = v13;
              v13 *= v23;
              if ( !is_mul_ok(v23, v25) )
                goto LABEL_38;
              goto LABEL_33;
            default:
              goto LABEL_40;
            case 0x77:
              if ( (v13 & 0x8000000000000000LL) != 0LL )
                goto LABEL_38;
              v13 *= 2LL;
              goto LABEL_33;
            case 0x62:
LABEL_44:
              if ( v13 >> 55 )
                goto LABEL_38;
              v13 <<= 9;
              goto LABEL_33;
            case 0x5A:
LABEL_47:
              v28 = 7;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v28;
              }
              while ( v28 );
              goto LABEL_51;
            case 0x59:
LABEL_53:
              v31 = 8;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_51;
            case 0x54:
            case 0x74:
LABEL_59:
              v32 = 4;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_51;
            case 0x50:
LABEL_65:
              v33 = 5;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_51;
            case 0x45:
LABEL_71:
              v34 = 6;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v34;
              }
              while ( v34 );
LABEL_51:
              v14 |= v29;
              break;
            case 0x47:
            case 0x67:
LABEL_77:
              if ( is_mul_ok((signed int)v23, v13)
                && is_mul_ok((signed int)v23, (signed int)v23 * v13)
                && is_mul_ok((signed int)v23, (signed int)v23 * (signed int)v23 * v13) )
              {
                v13 *= (signed int)v23 * (signed int)v23 * (signed __int64)(signed int)v23;
              }
              else
              {
                v13 = -1LL;
                v14 |= 1u;
              }
              break;
            case 0x42:
              if ( v13 >> 54 )
              {
LABEL_38:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 10;
              }
              break;
          }
          goto LABEL_33;
        }
        if ( v21 != 66 )
        {
          switch ( (unsigned __int64)(unsigned __int8)(v15 - 69) )
          {
            case 0uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_71;
            case 1uLL:
            case 3uLL:
            case 4uLL:
            case 5uLL:
            case 7uLL:
            case 9uLL:
            case 0xAuLL:
            case 0xCuLL:
            case 0xDuLL:
            case 0xEuLL:
            case 0x10uLL:
            case 0x11uLL:
            case 0x12uLL:
            case 0x13uLL:
            case 0x16uLL:
            case 0x17uLL:
            case 0x18uLL:
            case 0x19uLL:
            case 0x1AuLL:
            case 0x1BuLL:
            case 0x1CuLL:
            case 0x1FuLL:
            case 0x20uLL:
            case 0x21uLL:
            case 0x23uLL:
            case 0x24uLL:
            case 0x25uLL:
            case 0x27uLL:
            case 0x29uLL:
            case 0x2AuLL:
            case 0x2BuLL:
            case 0x2CuLL:
            case 0x2DuLL:
            case 0x2EuLL:
              goto LABEL_40;
            case 2uLL:
            case 0x22uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_77;
            case 6uLL:
            case 0x26uLL:
              v22 = 1;
              v23 = 1024LL;
              goto LABEL_37;
            case 8uLL:
            case 0x28uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_30;
            case 0xBuLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_65;
            case 0xFuLL:
            case 0x2FuLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_59;
            case 0x14uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_53;
            case 0x15uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_47;
            case 0x1DuLL:
              v22 = 1;
              goto LABEL_44;
            case 0x1EuLL:
              v22 = 1;
              break;
          }
LABEL_33:
          v24 = &v18[v22];
          *v5 = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_28;
    }
  }
LABEL_13:
  *v6 = v13;
  return (unsigned int)v14;
}

int __fastcall sub_4056C0(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_405740(stream) )
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

int __fastcall sub_405740(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_405780(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_405780(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_4057E0(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_4058C0(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_405EE0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_4057E0(a2, a7);
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
        sub_4057E0((__int64)v11, a7);
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
            v40 = sub_4058C0(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_4058C0(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_4058C0(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_4064B0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_60B400 = dword_60B25C;
  dword_60B404 = dword_60B258;
  result = sub_405EE0(a1, a2, a3, a4, a5, a6, (__int64)&dword_60B400, a7);
  dword_60B25C = dword_60B400;
  qword_60B440 = qword_60B410;
  dword_60B254 = dword_60B408;
  return result;
}

__int64 __fastcall sub_406530(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_4064B0(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_4065B0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_4067A0(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

_BYTE *__fastcall sub_406630(_BYTE *a1, __int16 a2, unsigned __int64 a3)
{
  _BYTE *result; // rax@8
  signed __int64 v4; // r9@9
  signed __int64 v5; // rcx@16
  _BYTE *v6; // rdi@16

  if ( !a3 )
    return 0LL;
  if ( (unsigned __int8)a1 & 7 )
  {
    if ( (_BYTE)a2 == *a1 )
      return a1;
    while ( 1 )
    {
      ++a1;
      if ( !--a3 )
        return 0LL;
      if ( !((unsigned __int8)a1 & 7) )
        break;
      if ( *a1 == (_BYTE)a2 )
        return a1;
    }
  }
  v4 = ((((signed __int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 32) | ((signed __int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8);
  if ( a3 > 7 && !(((v4 ^ *(_QWORD *)a1) - 72340172838076673LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL) )
  {
    while ( 1 )
    {
      a3 -= 8LL;
      a1 += 8;
      if ( a3 <= 7 )
        break;
      if ( ((v4 ^ *(_QWORD *)a1) - 72340172838076673LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL )
        goto LABEL_15;
    }
    if ( !a3 )
      return 0LL;
  }
LABEL_15:
  if ( (_BYTE)a2 != *a1 )
  {
    v5 = (signed __int64)(a1 + 1);
    v6 = &a1[a3];
    while ( 1 )
    {
      result = (_BYTE *)v5;
      if ( (_BYTE *)v5 == v6 )
        break;
      if ( *(_BYTE *)(++v5 - 1) == (_BYTE)a2 )
        return result;
    }
    return 0LL;
  }
  return a1;
}

int __fastcall sub_406740(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  int result; // eax@1

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_4056C0(stream);
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

bool __fastcall sub_4067A0(int a1)
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

const char *sub_406800()
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
                sub_4056C0(v61);
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
            sub_4056C0(v40);
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

int __fastcall sub_406DE0(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_60B1E8 )
    v1 = unk_60B1E8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_406DF8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_60AE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
