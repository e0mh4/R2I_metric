#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  unsigned __int64 v3; // r14
  char *v4; // rax
  char *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned int v8; // ebx
  char *v9; // rbp
  char *v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  const char *v15; // rsi
  char *v16; // rbx
  void *v17; // rbp
  __int64 *v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rax
  char *v21; // rbp
  FILE *v22; // rsi
  __int64 v23; // r15
  __int64 v24; // rdi
  __int64 v25; // r13
  unsigned __int8 v26; // al
  unsigned int v27; // ecx
  char v28; // al
  __int64 v29; // rdx
  __int64 *v30; // rax
  char *v32; // rax
  __int64 *v33; // rax
  char *IO_write_ptr; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rbx
  char *v37; // rax
  __int64 v38; // r15
  __int64 v39; // rdi
  const char *v40; // rbx
  __int64 *v41; // rax
  int v42; // eax
  int v43; // eax
  int *v44; // rax
  char *v45; // rax
  char *v46; // rax
  __int64 v47; // rbx
  char *v48; // rax
  const char *v49; // rbx
  int *v50; // rax
  int v51; // [rsp+0h] [rbp-B8h]
  __int64 v52; // [rsp+0h] [rbp-B8h]
  __int64 v53; // [rsp+8h] [rbp-B0h]
  char v54; // [rsp+17h] [rbp-A1h]
  __int64 v55; // [rsp+18h] [rbp-A0h]
  char *v56; // [rsp+20h] [rbp-98h]
  const char *v57; // [rsp+28h] [rbp-90h]
  char *s1; // [rsp+30h] [rbp-88h]
  char *v59; // [rsp+38h] [rbp-80h]
  char v60[16]; // [rsp+40h] [rbp-78h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h]
  __int64 v62; // [rsp+60h] [rbp-58h] BYREF
  __int64 v63; // [rsp+68h] [rbp-50h]
  void *v64; // [rsp+70h] [rbp-48h]

  v3 = a1;
  v4 = getenv("POSIXLY_CORRECT");
  v5 = *a2;
  v59 = "-";
  s1 = "-";
  LOBYTE(v6) = v4 != 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  sub_403410(v5);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  byte_60C300 = sub_403190(3LL);
  sub_407660(sub_402EB0);
  qword_60C2F0 = 0LL;
  qword_60C2F8 = 0LL;
  n = -1LL;
  byte_60C2E2 = 1;
  byte_60C2E3 = 1;
  byte_60C2E1 = 0;
  dword_60C2E4 = 1;
  dword_60C2DC = 0;
  v54 = 10;
  v51 = 0;
  while ( 1 )
  {
    while ( (_DWORD)v9 != -1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              if ( v8 && (_BYTE)v6 )
                goto LABEL_2;
              v12 = sub_406D40((unsigned int)v3, a2, "-0123456789Dcdf:is:uw:z", &off_408160, 0LL);
              v9 = (char *)(unsigned int)v12;
              if ( v12 == -1 )
                goto LABEL_2;
              if ( v12 != 100 )
                break;
              byte_60C2E3 = 0;
              v7 = 1LL;
            }
            if ( v12 <= 100 )
              break;
            if ( v12 == 117 )
            {
              byte_60C2E2 = 0;
              v7 = 1LL;
            }
            else if ( v12 > 117 )
            {
              switch ( v12 )
              {
                case 122:
                  v54 = 0;
                  break;
                case 128:
                  if ( nptr )
                    dword_60C2D8 = dword_408300[sub_402DD0("--group", nptr, off_408320, dword_408300, 4LL, off_60C218)];
                  else
                    dword_60C2D8 = 3;
                  break;
                case 119:
                  n = sub_402500(nptr, "invalid number of bytes to compare");
                  break;
                default:
                  goto LABEL_24;
              }
            }
            else
            {
              switch ( v12 )
              {
                case 'i':
                  byte_60C2E0 = 1;
                  break;
                case 's':
                  qword_60C2F0 = sub_402500(nptr, "invalid number of bytes to skip");
                  break;
                case 'f':
                  v51 = 2;
                  qword_60C2F8 = sub_402500(nptr, "invalid number of fields to skip");
                  break;
                default:
                  goto LABEL_24;
              }
            }
          }
          if ( v12 <= 57 )
            break;
          if ( v12 == 68 )
          {
            byte_60C2E3 = 0;
            byte_60C2E1 = 1;
            if ( nptr )
            {
              v7 = 1LL;
              dword_60C2DC = dword_408348[sub_402DD0("--all-repeated", nptr, off_408360, dword_408348, 4LL, off_60C218)];
            }
            else
            {
              dword_60C2DC = 0;
              v7 = 1LL;
            }
          }
          else
          {
            if ( v12 != 99 )
              goto LABEL_24;
            dword_60C2E4 = 0;
            v7 = 1LL;
          }
        }
        if ( v12 >= 48 )
          break;
        if ( v12 == -130 )
          sub_4026B0(0);
        if ( v12 != 1 )
        {
          if ( v12 == -131 )
          {
            sub_4054B0(
              (_DWORD)stdout,
              (unsigned int)"uniq",
              (unsigned int)&unk_40774C,
              (_DWORD)off_60C210,
              (unsigned int)"Richard M. Stallman",
              (unsigned int)"David MacKenzie",
              0LL,
              v13);
            exit(0);
          }
LABEL_24:
          sub_4026B0(1);
        }
        v10 = nptr;
        if ( *nptr != 43
          || (v42 = sub_403390(), v10 = nptr, (unsigned int)(v42 - 200112) <= 0x2B8)
          || (v43 = sub_405A00(nptr), v10 = nptr, v43) )
        {
          if ( v8 == 2 )
            goto LABEL_119;
          v14 = v8++;
          (&s1)[v14] = v10;
        }
        else
        {
          qword_60C2F0 = v62;
        }
      }
      if ( v51 == 2 )
      {
        v35 = v12 - 48;
      }
      else if ( (unsigned __int64)qword_60C2F8 > 0x1999999999999999LL
             || (v35 = v12 - 48 + 10 * qword_60C2F8, qword_60C2F8 > v35) )
      {
        v35 = -1LL;
      }
      qword_60C2F8 = v35;
      v51 = 1;
    }
LABEL_2:
    if ( dword_60C29C >= (int)v3 )
      break;
    v10 = a2[dword_60C29C];
    if ( v8 == 2 )
    {
LABEL_119:
      v47 = sub_405030(v10);
      v48 = dcgettext(0LL, "extra operand %s", 5);
      error(0, 0, v48, v47);
      sub_4026B0(1);
    }
    ++dword_60C29C;
    v11 = v8++;
    (&s1)[v11] = v10;
  }
  if ( dword_60C2D8 )
  {
    if ( (_BYTE)v7 )
    {
LABEL_123:
      v15 = "--group is mutually exclusive with -c/-d/-D/-u";
      goto LABEL_64;
    }
    v15 = "grouping and printing repeat counts is meaningless";
    if ( dword_60C2E4 != 1 )
    {
LABEL_64:
      v32 = dcgettext(0LL, v15, 5);
      error(0, 0, v32);
      goto LABEL_24;
    }
  }
  else if ( !dword_60C2E4 )
  {
    v15 = "printing all duplicated lines and repeat counts is meaningless";
    if ( byte_60C2E1 )
      goto LABEL_64;
  }
  v16 = v59;
  v56 = s1;
  if ( strcmp(s1, "-") && !sub_402FE0(v56, "r", stdin) )
  {
    v40 = (const char *)sub_404EB0(0LL, 3LL, v56);
    v44 = __errno_location();
    error(1, *v44, "%s", v40);
    goto LABEL_108;
  }
  if ( strcmp(v16, "-") && !sub_402FE0(v16, "w", stdout) )
  {
    v49 = (const char *)sub_404EB0(0LL, 3LL, v16);
    v50 = __errno_location();
    error(1, *v50, "%s", v49);
    goto LABEL_123;
  }
  sub_402F60(stdin, 2LL);
  sub_4031F0(v60);
  sub_4031F0(&v62);
  if ( byte_60C2E3 )
  {
    LOBYTE(v6) = byte_60C2E2;
    if ( byte_60C2E2 )
      goto LABEL_88;
  }
  do
  {
    if ( !sub_403200(&v62, stdin, (unsigned int)v54) )
      goto LABEL_59;
    v17 = v64;
    v6 = 0LL;
    v18 = &v62;
    v19 = v63 - 1;
    LOBYTE(v55) = 1;
    v53 = sub_4025E0(v63, v64);
    v20 = v53 - (_QWORD)v17;
    v21 = v60;
    v52 = v19 - v20;
LABEL_49:
    v22 = stdin;
    if ( (stdin->_flags & 0x10) != 0 )
    {
LABEL_58:
      sub_402560(v18, 0LL, v6);
      goto LABEL_59;
    }
    while ( sub_403200(v21, v22, (unsigned int)v54) )
    {
      v23 = *((_QWORD *)v21 + 2);
      v24 = *((_QWORD *)v21 + 1);
      v25 = sub_4025E0(v24, v23);
      v26 = sub_402480(v25, v53, v24 - 1 - (v25 - v23), v52);
      v27 = v26 ^ 1;
      v6 += v26 ^ 1u;
      if ( v6 == -1 )
      {
        if ( !dword_60C2DC )
        {
          v6 = -2LL;
LABEL_66:
          if ( !v26 )
            goto LABEL_67;
          goto LABEL_57;
        }
        v6 = -2LL;
        if ( !v26 )
          goto LABEL_67;
        LOBYTE(v55) = 0;
        v6 = -2LL;
      }
      else
      {
        if ( !dword_60C2DC )
          goto LABEL_66;
        if ( !v26 )
        {
          if ( v6 == 1 && (dword_60C2DC == 1 || dword_60C2DC == 2 && !(_BYTE)v55) )
          {
            IO_write_ptr = stdout->_IO_write_ptr;
            if ( IO_write_ptr >= stdout->_IO_write_end )
            {
              LODWORD(v57) = v27;
              __overflow(stdout, v54);
              v27 = (unsigned int)v57;
            }
            else
            {
              stdout->_IO_write_ptr = IO_write_ptr + 1;
              *IO_write_ptr = v54;
            }
          }
LABEL_67:
          if ( byte_60C2E1 )
          {
            sub_402560(v18, v27, v6);
            v33 = (__int64 *)v21;
            v52 = v24 - 1 - (v25 - v23);
            v21 = (char *)v18;
            v53 = v25;
            v18 = v33;
          }
          goto LABEL_49;
        }
        v28 = v55;
        if ( v6 )
          v28 = 0;
        LOBYTE(v55) = v28;
      }
LABEL_57:
      v29 = v6;
      v6 = 0LL;
      sub_402560(v18, v27, v29);
      v22 = stdin;
      v30 = (__int64 *)v21;
      v52 = v24 - 1 - (v25 - v23);
      v21 = (char *)v18;
      v53 = v25;
      v18 = v30;
      if ( (stdin->_flags & 0x10) != 0 )
        goto LABEL_58;
    }
    if ( (stdin->_flags & 0x20) == 0 )
      goto LABEL_58;
LABEL_87:
    v36 = sub_404DE0(4LL, v56);
    v37 = dcgettext(0LL, "error reading %s", 5);
    error(1, 0, v37, v36);
LABEL_88:
    ;
  }
  while ( dword_60C2E4 != 1 );
  LOBYTE(v51) = 0;
  v9 = (char *)&v62;
  v3 = (unsigned __int64)v60;
  while ( 2 )
  {
    if ( (stdin->_flags & 0x10) == 0 && sub_403200(v3, stdin, (unsigned int)v54) )
    {
      v38 = *(_QWORD *)(v3 + 16);
      v39 = *(_QWORD *)(v3 + 8);
      v7 = sub_4025E0(v39, v38);
      v40 = (const char *)(v39 - 1 - (v7 - v38));
      if ( !*((_QWORD *)v9 + 1) )
        goto LABEL_93;
LABEL_108:
      if ( (unsigned __int8)sub_402480(v7, v55, v40, v57) )
      {
LABEL_93:
        if ( dword_60C2D8
          && (dword_60C2D8 == 1 || dword_60C2D8 == 4 || (_BYTE)v51 && (unsigned int)(dword_60C2D8 - 2) <= 1) )
        {
          v45 = stdout->_IO_write_ptr;
          if ( v45 >= stdout->_IO_write_end )
          {
            __overflow(stdout, v54);
          }
          else
          {
            stdout->_IO_write_ptr = v45 + 1;
            *v45 = v54;
          }
        }
      }
      else if ( !dword_60C2D8 )
      {
        continue;
      }
      fwrite_unlocked(*(const void **)(v3 + 16), 1uLL, *(_QWORD *)(v3 + 8), stdout);
      v41 = (__int64 *)v3;
      LOBYTE(v51) = v6;
      v3 = (unsigned __int64)v9;
      v57 = v40;
      v9 = (char *)v41;
      v55 = v7;
      continue;
    }
    break;
  }
  if ( ((dword_60C2D8 - 2) & 0xFFFFFFFD) == 0 && (_BYTE)v51 )
  {
    v46 = stdout->_IO_write_ptr;
    if ( v46 >= stdout->_IO_write_end )
    {
      __overflow(stdout, v54);
    }
    else
    {
      stdout->_IO_write_ptr = v46 + 1;
      *v46 = v54;
    }
  }
LABEL_59:
  if ( (stdin->_flags & 0x20) != 0 || (unsigned int)sub_405E30(stdin) )
    goto LABEL_87;
  free(ptr);
  free(v64);
  return 0LL;
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

__int64 *sub_4023CB()
{
  return &program_invocation_short_name;
}

__int64 sub_4023EA()
{
  return 0LL;
}

__int64 *sub_402421()
{
  __int64 *result; // rax

  if ( !byte_60C2C8 )
  {
    while ( qword_60C2D0 < (unsigned __int64)(&qword_60BE48 - qword_60BE40 - 1) )
      ((void (*)(void))qword_60BE40[++qword_60C2D0])();
    result = sub_4023CB();
    byte_60C2C8 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_402478()
{
  return sub_4023EA();
}

char __fastcall sub_402480(const void *a1, const void *a2, size_t a3, size_t a4)
{
  char result; // al

  if ( n <= a3 )
    a3 = n;
  if ( n <= a4 )
    a4 = n;
  result = byte_60C2E0;
  if ( byte_60C2E0 )
  {
    if ( a3 == a4 )
      return (unsigned int)sub_403340(a1, a2, a3, a4, a3) != 0;
  }
  else if ( byte_60C300 )
  {
    return (unsigned int)sub_405940(a1, a3, a2, a4) != 0;
  }
  else
  {
    result = 1;
    if ( a3 == a4 )
      return memcmp(a1, a2, a3) != 0;
  }
  return result;
}

__int64 __fastcall sub_402500(char *a1, const char *a2)
{
  char *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // [rsp+8h] [rbp-20h]

  if ( (unsigned int)sub_405A00(a1) <= 1 )
    return v5;
  v3 = dcgettext(0LL, a2, 5);
  error(1, 0, "%s: %s", a1, v3);
  return sub_402560(1LL, 0LL, v4);
}

size_t __fastcall sub_402560(__int64 a1, char a2, __int64 a3)
{
  size_t result; // rax

  if ( a3 )
  {
    if ( !a2 )
    {
      result = (unsigned __int8)byte_60C2E2 ^ 1u;
      if ( byte_60C2E2 != 1 )
        return result;
      goto LABEL_4;
    }
    result = (unsigned __int8)byte_60C2E1 ^ 1u;
  }
  else
  {
    result = (unsigned __int8)byte_60C2E3 ^ 1u;
  }
  if ( (_BYTE)result )
    return result;
LABEL_4:
  if ( !dword_60C2E4 )
    __printf_chk(1LL, "%7lu ", a3 + 1);
  return fwrite_unlocked(*(const void **)(a1 + 16), 1uLL, *(_QWORD *)(a1 + 8), stdout);
}

unsigned __int8 *__fastcall sub_4025E0(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v4; // rbx
  const unsigned __int16 **v5; // rax
  __int64 v6; // rdi
  const unsigned __int16 *v7; // rsi
  __int64 v8; // rdx
  unsigned __int16 v9; // cx
  unsigned __int64 v10; // rax

  v2 = qword_60C2F8;
  v4 = a1 - 1;
  if ( a1 == 1 || !qword_60C2F8 )
  {
    v10 = 0LL;
  }
  else
  {
    v5 = __ctype_b_loc();
    v6 = 0LL;
    v7 = *v5;
    v8 = *a2;
    v9 = (*v5)[v8];
    v10 = 0LL;
    do
    {
      while ( (_BYTE)v8 == 10 || (v9 & 1) != 0 )
      {
        if ( v4 <= ++v10 )
          goto LABEL_11;
        v8 = a2[v10];
        v9 = v7[v8];
      }
      if ( v4 <= v10 )
        break;
      while ( (_BYTE)v8 != 10 && (v9 & 1) == 0 )
      {
        if ( v4 <= ++v10 )
          goto LABEL_11;
        v8 = a2[v10];
        v9 = v7[v8];
      }
      if ( v2 <= ++v6 )
        break;
    }
    while ( v4 > v10 );
LABEL_11:
    v4 -= v10;
  }
  if ( qword_60C2F0 <= v4 )
    v4 = qword_60C2F0;
  return &a2[v4 + v10];
}

noreturn void __fastcall  sub_4026B0(int status)
{
  __int64 v1; // rbp
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbp
  char *v5; // rax
  FILE *v6; // rbp
  char *v7; // rax
  FILE *v8; // rbp
  char *v9; // rax
  FILE *v10; // rbp
  char *v11; // rax
  FILE *v12; // rbp
  char *v13; // rax
  FILE *v14; // rbp
  char *v15; // rax
  FILE *v16; // rbp
  char *v17; // rax
  FILE *v18; // rbp
  char *v19; // rax
  FILE *v20; // rbp
  char *v21; // rax
  FILE *v22; // rbp
  char *v23; // rax
  FILE *v24; // rbp
  char *v25; // rax
  FILE *v26; // rbp
  char *v27; // rax
  FILE *v28; // rbp
  char *v29; // rax
  __int64 *v30; // rax
  char *v31; // rbp
  char *v32; // rax
  char *v33; // rax
  const char *v34; // r12
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  __int64 v41[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_60C318;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [INPUT [OUTPUT]]\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = stdout;
  v5 = dcgettext(
         0LL,
         "Filter adjacent matching lines from INPUT (or standard input),\n"
         "writing to OUTPUT (or standard output).\n"
         "\n"
         "With no options, matching lines are merged to the first occurrence.\n",
         5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(
         0LL,
         "  -c, --count           prefix lines by the number of occurrences\n"
         "  -d, --repeated        only print duplicate lines, one for each group\n",
         5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "  -D                    print all duplicate lines\n"
          "      --all-repeated[=METHOD]  like -D, but allow separating groups\n"
          "                                 with an empty line;\n"
          "                                 METHOD={none(default),prepend,separate}\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(0LL, "  -f, --skip-fields=N   avoid comparing the first N fields\n", 5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "      --group[=METHOD]  show all items, separating groups with an empty line;\n"
          "                          METHOD={separate(default),prepend,append,both}\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(
          0LL,
          "  -i, --ignore-case     ignore differences in case when comparing\n"
          "  -s, --skip-chars=N    avoid comparing the first N characters\n"
          "  -u, --unique          only print unique lines\n",
          5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(0LL, "  -z, --zero-terminated     line delimiter is NUL, not newline\n", 5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(0LL, "  -w, --check-chars=N   compare no more than N characters in lines\n", 5);
  fputs_unlocked(v21, v20);
  v22 = stdout;
  v23 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v23, v22);
  v24 = stdout;
  v25 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v25, v24);
  v26 = stdout;
  v27 = dcgettext(
          0LL,
          "\n"
          "A field is a run of blanks (usually spaces and/or TABs), then non-blank\n"
          "characters.  Fields are skipped before chars.\n",
          5);
  fputs_unlocked(v27, v26);
  v28 = stdout;
  v29 = dcgettext(
          0LL,
          "\n"
          "Note: 'uniq' does not detect repeated lines unless they are adjacent.\n"
          "You may want to sort the input first, or use 'sort -u' without 'uniq'.\n"
          "Also, comparisons honor the rules specified by 'LC_COLLATE'.\n",
          5);
  fputs_unlocked(v29, v28);
  v41[0] = (__int64)"[";
  v30 = v41;
  v41[1] = (__int64)"test invocation";
  v41[2] = (__int64)"coreutils";
  v41[3] = (__int64)"Multi-call invocation";
  v41[4] = (__int64)"sha224sum";
  v41[5] = (__int64)"sha2 utilities";
  v41[6] = (__int64)"sha256sum";
  v41[7] = (__int64)"sha2 utilities";
  v41[8] = (__int64)"sha384sum";
  v41[9] = (__int64)"sha2 utilities";
  v41[10] = (__int64)"sha512sum";
  v41[11] = (__int64)"sha2 utilities";
  v41[12] = 0LL;
  v41[13] = 0LL;
  do
    v30 += 2;
  while ( *v30 && strcmp("uniq", (const char *)*v30) );
  v31 = (char *)v30[1];
  if ( v31 )
  {
    v32 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v32, &unk_40774C, "https://www.gnu.org/software/coreutils/");
    v33 = setlocale(5, 0LL);
    if ( !v33 || !strncmp(v33, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v37 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v37, &unk_40774C, "https://www.gnu.org/software/coreutils/");
    v38 = setlocale(5, 0LL);
    if ( !v38 || !strncmp(v38, "en_", 3uLL) )
    {
      v31 = "uniq";
      v39 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v34 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v39, "https://www.gnu.org/software/coreutils/", "uniq");
LABEL_12:
      v36 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v36, v31, v34);
LABEL_3:
      exit(status);
    }
    v31 = "uniq";
  }
  v40 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v40, "uniq");
LABEL_10:
  v34 = "Multi-call invocation" + 10;
  v35 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v35, "https://www.gnu.org/software/coreutils/", "uniq");
  if ( v31 != "uniq" )
    v34 = "";
  goto LABEL_12;
}

noreturn void  sub_402B00()
{
  sub_4026B0(1);
}

__int64 __fastcall sub_402B10(const char *a1, const char **a2, char *a3, size_t a4)
{
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

  v5 = a3;
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
      v5 += a4;
      v7 = a2[v9];
      if ( !v7 )
        goto LABEL_12;
    }
    if ( strlen(v7) == v8 )
      return v9;
    if ( v14 != -1 )
    {
      if ( a3 )
      {
        v10 = memcmp(&a3[a4 * v14], v5, a4) == 0;
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
    v5 += a4;
    v7 = a2[v9];
  }
  while ( v7 );
LABEL_12:
  v12 = -2LL;
  if ( !v15 )
    return v14;
  return v12;
}

void __fastcall sub_402C30(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_405010(1LL, a1);
  v5 = sub_404D00(0LL, 8LL, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_402CB0(__int64 *a1, char *a2, size_t a3)
{
  const void *v3; // r14
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rsi
  __int64 v9; // rbx
  __int64 i; // r12
  const char *v11; // rax
  const char *v12; // rax
  char *IO_write_ptr; // rax

  v3 = 0LL;
  v6 = stderr;
  v7 = dcgettext(0LL, "Valid arguments are:", 5);
  v8 = v6;
  v9 = 0LL;
  fputs_unlocked(v7, v8);
  for ( i = *a1; i; i = a1[v9] )
  {
    while ( !v9 || memcmp(v3, a2, a3) )
    {
      ++v9;
      v3 = a2;
      a2 += a3;
      v11 = (const char *)sub_405030(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    a2 += a3;
    v12 = (const char *)sub_405030(i);
    __fprintf_chk(stderr, 1LL, ", %s", v12);
  }
LABEL_7:
  IO_write_ptr = stderr->_IO_write_ptr;
  if ( IO_write_ptr >= stderr->_IO_write_end )
  {
    LODWORD(IO_write_ptr) = __overflow(stderr, 10);
  }
  else
  {
    stderr->_IO_write_ptr = IO_write_ptr + 1;
    *IO_write_ptr = 10;
  }
  return (int)IO_write_ptr;
}

__int64 __fastcall sub_402DD0(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  __int64 result; // rax

  result = sub_402B10(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_402C30(a1, (__int64)a2, result);
    sub_402CB0((__int64 *)a3, a4, a5);
    a6();
    return -1LL;
  }
  return result;
}

__int64 __fastcall sub_402E40(void *s1, __int64 *a2, char *a3, size_t a4)
{
  __int64 v4; // r14
  __int64 *v6; // rbx

  v4 = *a2;
  if ( *a2 )
  {
    v6 = a2 + 1;
    do
    {
      if ( !memcmp(s1, a3, a4) )
        break;
      v4 = *v6;
      a3 += a4;
      ++v6;
    }
    while ( v4 );
  }
  return v4;
}

__int64 sub_402EB0()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_406E40(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60C308 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60C310 )
      {
        v5 = (const char *)sub_404E80();
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
  result = sub_406E40(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

void __fastcall sub_402F60(FILE *a1, int a2)
{
  int v2; // eax

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

__int64 __fastcall sub_402F90(int a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 1;
  v2 = open("/dev/null", 0);
  if ( a1 == v2 )
    return v1;
  v1 = 0;
  if ( v2 < 0 )
    return v1;
  close(v2);
  *__errno_location() = 9;
  return 0LL;
}

__int64 __fastcall sub_402FE0(char *a1, char *a2, FILE *a3)
{
  int v3; // ebx
  int *v4; // r14
  char v5; // bl
  char v6; // bp
  char v7; // r13
  __int64 v8; // r12
  int v9; // r15d

  v3 = fileno(a3);
  v4 = __errno_location();
  if ( v3 == 1 )
  {
    v5 = 0;
    v6 = 0;
  }
  else
  {
    if ( v3 == 2 )
    {
      v5 = 0;
    }
    else
    {
      if ( !v3 )
      {
        v5 = 0;
        v6 = 0;
        v7 = 0;
LABEL_11:
        v8 = sub_405EF0(a1, a2);
        goto LABEL_12;
      }
      v5 = dup2(2, 2) != 2;
    }
    v6 = dup2(1, 1) != 1;
  }
  if ( !dup2(0, 0) )
  {
    v7 = 0;
    if ( !v6 )
      goto LABEL_9;
    goto LABEL_18;
  }
  v7 = sub_402F90(0);
  if ( !v7 )
  {
    v7 = 1;
    v8 = 0LL;
LABEL_12:
    v9 = *v4;
    if ( !v5 )
      goto LABEL_13;
    goto LABEL_27;
  }
  if ( v6 )
  {
LABEL_18:
    v6 = sub_402F90(1);
    if ( !v6 )
    {
      v9 = *v4;
      v8 = 0LL;
      if ( v5 )
        close(2);
      goto LABEL_21;
    }
  }
LABEL_9:
  if ( !v5 )
    goto LABEL_11;
  v5 = sub_402F90(2);
  if ( v5 )
    goto LABEL_11;
  v9 = *v4;
  v8 = 0LL;
LABEL_27:
  close(2);
LABEL_13:
  if ( !v6 )
  {
    if ( !v7 )
      goto LABEL_15;
LABEL_22:
    close(0);
    if ( v8 )
      return v8;
LABEL_23:
    *v4 = v9;
    return v8;
  }
LABEL_21:
  close(1);
  if ( v7 )
    goto LABEL_22;
LABEL_15:
  if ( !v8 )
    goto LABEL_23;
  return v8;
}

bool __fastcall sub_403190(int a1)
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

void __fastcall sub_4031F0(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)a1 = 0LL;
}

__int64 *__fastcall sub_403200(__int64 *a1, _IO_FILE *a2, char a3)
{
  int v3; // r13d
  _BYTE *v5; // r14
  _BYTE *v6; // rsi
  _BYTE *v7; // r15
  int v8; // ebp
  char v9; // dl
  _BYTE *v10; // rax
  char *IO_read_ptr; // rdx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rsi
  _BYTE *v16; // rax
  char v17; // [rsp+0h] [rbp-48h]

  v3 = a3;
  v5 = (_BYTE *)a1[2];
  v6 = &v5[*a1];
  v7 = v5;
  if ( (a2->_flags & 0x10) != 0 )
    return 0LL;
  while ( 1 )
  {
    IO_read_ptr = a2->_IO_read_ptr;
    if ( IO_read_ptr < a2->_IO_read_end )
    {
      a2->_IO_read_ptr = IO_read_ptr + 1;
      v8 = (unsigned __int8)*IO_read_ptr;
      goto LABEL_4;
    }
    v8 = __uflow(a2);
    if ( v8 == -1 )
      break;
LABEL_4:
    v9 = v8;
    if ( v7 == v6 )
      goto LABEL_14;
    v10 = v7;
LABEL_6:
    v7 = v10 + 1;
    *v10 = v9;
    if ( v8 == v3 )
      goto LABEL_18;
  }
  if ( v5 == v7 || (a2->_flags & 0x20) != 0 )
    return 0LL;
  if ( *(v7 - 1) != a3 )
  {
    v8 = v3;
    if ( v7 != v6 )
    {
      v16 = v7 + 1;
      *v7 = a3;
      goto LABEL_17;
    }
    v9 = a3;
LABEL_14:
    v17 = v9;
    v12 = *a1;
    v13 = sub_405750(v5, a1);
    v14 = *a1;
    v9 = v17;
    v5 = (_BYTE *)v13;
    v10 = (_BYTE *)(v13 + v12);
    a1[2] = (__int64)v5;
    v6 = &v5[v14];
    goto LABEL_6;
  }
LABEL_18:
  v16 = v7;
LABEL_17:
  a1[1] = v16 - v5;
  return a1;
}

__int64 __fastcall sub_403340(__int64 a1, __int64 a2, __int64 a3)
{
  const __int32_t **v4; // rax
  __int64 v5; // rcx
  const __int32_t *v6; // r8
  __int64 result; // rax

  if ( !a3 )
    return 0LL;
  v4 = __ctype_toupper_loc();
  v5 = 0LL;
  v6 = *v4;
  do
  {
    result = (unsigned int)(v6[*(unsigned __int8 *)(a1 + v5)] - v6[*(unsigned __int8 *)(a2 + v5)]);
    if ( (_DWORD)result )
      break;
    ++v5;
  }
  while ( v5 != a3 );
  return result;
}

__int64 sub_403390()
{
  unsigned int v0; // ebx
  char *v1; // rax
  __int64 v3; // rax
  unsigned int v4; // ebx
  char *endptr; // [rsp+8h] [rbp-10h] BYREF

  v0 = 200809;
  v1 = getenv("_POSIX2_VERSION");
  if ( !v1 )
    return v0;
  if ( !*v1 )
    return v0;
  v3 = strtol(v1, &endptr, 10);
  if ( *endptr )
    return v0;
  if ( v3 < (__int64)0xFFFFFFFF80000000LL )
    return 0x80000000;
  v4 = 0x7FFFFFFF;
  if ( v3 <= 0x7FFFFFFF )
    return (unsigned int)v3;
  return v4;
}

char *__fastcall sub_403410(const char *a1)
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
  qword_60C318 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_4034B0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_406EA0();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_408461;
      if ( !v5 )
        return (char *)&unk_408456;
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
    v2 = (char *)&unk_40845D;
    if ( !v5 )
      return (char *)&unk_40845A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_4035B0(
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
                return sub_4035B0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_4035B0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_406DC0((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_4035B0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_4034B0("`", a5);
        v51 = sub_4034B0("'", a5);
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

unsigned __int64 __fastcall sub_4035B0(
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
                return sub_4035B0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_4035B0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_406DC0((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_4035B0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_4034B0("`", a5);
        v51 = sub_4034B0("'", a5);
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

_BYTE *__fastcall sub_4047E0(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  if ( dword_60C290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405840();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_60C280 )
    {
      v7 = (__m128i *)sub_405650(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_60C280);
    }
    else
    {
      ptr = (void *)sub_405650(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_60C290], 0, 16LL * (a1 + 1 - dword_60C290));
    dword_60C290 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_4035B0(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60C320 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_4055F0(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_4035B0(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_4047E0(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  if ( dword_60C290 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405840();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_60C280 )
    {
      v7 = (__m128i *)sub_405650(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_60C280);
    }
    else
    {
      ptr = (void *)sub_405650(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_60C290], 0, 16LL * (a1 + 1 - dword_60C290));
    dword_60C290 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_4035B0(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60C320 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_4055F0(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_4035B0(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

__int64 __fastcall sub_404980(__int128 *a1)
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
    v1 = &xmmword_60C420;
  result = sub_4057F0(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_404A70(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_60C420;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_4035B0(
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

_BYTE *__fastcall sub_404AF0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_60C420;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_4035B0(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_4055F0(v11 + 1);
  sub_4035B0(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_404BF0()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( dword_60C290 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_60C290 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_60C320 )
  {
    free(v4);
    *(_QWORD *)&xmmword_60C280 = 256LL;
    *((_QWORD *)&xmmword_60C280 + 1) = &unk_60C320;
  }
  if ( v0 != &xmmword_60C280 )
  {
    free(v0);
    ptr = &xmmword_60C280;
  }
  dword_60C290 = 1;
}

_BYTE *__fastcall sub_404D00(int a1, int a2, __int64 a3)
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
  return sub_4047E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_404D00(int a1, int a2, __int64 a3)
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
  return sub_4047E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_404D70(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_4047E0(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_404D70(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_4047E0(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_404DE0(int a1, __int64 a2)
{
  return sub_404D00(0, a1, a2);
}

_BYTE *__fastcall sub_404E00(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_60C450;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60C420);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60C430);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60C440);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_4047E0(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_404E80(__int64 a1)
{
  return sub_404E00(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_404EB0(int a1, int a2, __int64 a3)
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
  return sub_4047E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_404EB0(int a1, int a2, __int64 a3)
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
  return sub_4047E0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_404F20(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60C420);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60C430);
  si128 = _mm_load_si128((const __m128i *)&xmmword_60C440);
  v8 = qword_60C450;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_4047E0(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_405010(int a1, __int64 a2)
{
  return sub_4047E0(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60C240);
}

_BYTE *__fastcall sub_405030(__int64 a1)
{
  return sub_4047E0(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60C240);
}

__int64 __fastcall sub_405050(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  char *v17; // rax
  const char *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rbx
  char *v53; // rax
  __int64 v54; // r8
  __int64 v55; // [rsp-10h] [rbp-68h]
  __int64 v56; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+0h] [rbp-58h]
  __int64 v58; // [rsp+0h] [rbp-58h]
  __int64 v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  __int64 v65; // [rsp+18h] [rbp-40h]

  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3, a4);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8, 2017LL);
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
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v40, v39, v38, v37, v36);
      return v55;
    case 6LL:
      v41 = a5[5];
      v42 = a5[4];
      v43 = a5[3];
      v58 = a5[1];
      v44 = a5[2];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v46, v45, v58, v44, v43, v42, v41);
    case 7LL:
      v47 = a5[6];
      v48 = a5[5];
      v49 = a5[4];
      v50 = a5[3];
      v51 = a5[1];
      v62 = a5[2];
      v52 = *a5;
      v59 = v51;
      v53 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v53, v52, v59, v62, v50, v49, v48, v47);
    case 8LL:
      v10 = a5[2];
      v11 = a5[1];
      v12 = a5[6];
      v13 = a5[5];
      v14 = a5[4];
      v63 = a5[7];
      v15 = a5[3];
      v16 = *a5;
      v56 = v10;
      v60 = v11;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16, v60, v56, v15, v14, v13, v12, v63);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v54 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v54;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return __fprintf_chk(stream, 1LL, v26, v25, v61, v57, v24, v23, v22, v21, v64, v65);
  }
}

__int64 __fastcall sub_405050(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  char *v17; // rax
  const char *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rbx
  char *v53; // rax
  __int64 v54; // r8
  __int64 v55; // [rsp-10h] [rbp-68h]
  __int64 v56; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+0h] [rbp-58h]
  __int64 v58; // [rsp+0h] [rbp-58h]
  __int64 v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  __int64 v65; // [rsp+18h] [rbp-40h]

  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3, a4);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8, 2017LL);
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
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v40, v39, v38, v37, v36);
      return v55;
    case 6LL:
      v41 = a5[5];
      v42 = a5[4];
      v43 = a5[3];
      v58 = a5[1];
      v44 = a5[2];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v46, v45, v58, v44, v43, v42, v41);
    case 7LL:
      v47 = a5[6];
      v48 = a5[5];
      v49 = a5[4];
      v50 = a5[3];
      v51 = a5[1];
      v62 = a5[2];
      v52 = *a5;
      v59 = v51;
      v53 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v53, v52, v59, v62, v50, v49, v48, v47);
    case 8LL:
      v10 = a5[2];
      v11 = a5[1];
      v12 = a5[6];
      v13 = a5[5];
      v14 = a5[4];
      v63 = a5[7];
      v15 = a5[3];
      v16 = *a5;
      v56 = v10;
      v60 = v11;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16, v60, v56, v15, v14, v13, v12, v63);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v54 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v54;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return __fprintf_chk(stream, 1LL, v26, v25, v61, v57, v24, v23, v22, v21, v64, v65);
  }
}

__int64 __fastcall sub_405450(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
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
        return sub_405050(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_405050(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_4054B0(
        FILE *a1,
        const char *a2,
        const char *a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        char a7)
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
        return sub_405050(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_405050(a1, a2, a3, a4, v15, i);
}

int sub_405570()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_40774C, "https://www.gnu.org/software/coreutils/");
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_4055F0(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_405840();
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_405640(size_t a1)
{
  return sub_4055F0(a1);
}

void *__fastcall sub_405650(void *a1, size_t a2)
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
        sub_405840();
    }
  }
  return result;
}

void *__fastcall sub_405750(void *a1, size_t *a2)
{
  size_t v2; // rax

  v2 = *a2;
  if ( a1 )
  {
    if ( v2 <= 0x5555555555555553LL )
    {
      v2 += (v2 >> 1) + 1;
LABEL_4:
      *a2 = v2;
      return sub_405650(a1, v2);
    }
LABEL_8:
    sub_405840(a1);
  }
  if ( v2 )
  {
    if ( (v2 & 0x8000000000000000LL) == 0LL )
      goto LABEL_4;
    goto LABEL_8;
  }
  *a2 = 128LL;
  return sub_405650(0LL, 0x80uLL);
}

void *__fastcall sub_4057A0(size_t n)
{
  void *v1; // rax

  v1 = sub_4055F0(n);
  return memset(v1, 0, n);
}

void *__fastcall sub_4057C0(unsigned __int64 a1, unsigned __int64 a2)
{
  void *result; // rax

  if ( ((a2 * a1) & 0x8000000000000000LL) != 0LL || !is_mul_ok(a2, a1) || (result = calloc(a1, a2)) == 0LL )
    sub_405840(a1);
  return result;
}

void *__fastcall sub_4057F0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_4055F0(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_405820(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_4057F0(src, v1 + 1);
}

noreturn void  sub_405840()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

void __fastcall sub_405880(int errnum, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5)
{
  char *v8; // rax
  char *v9; // rax
  _BYTE *v10; // rbp
  _BYTE *v11; // rbx
  char *v12; // rax

  v8 = dcgettext(0LL, "string comparison failed", 5);
  error(0, errnum, v8);
  v9 = dcgettext(0LL, "Set LC_ALL='C' to work around the problem.", 5);
  error(0, 0, v9);
  v10 = sub_404D70(1, 8, a4, a5);
  v11 = sub_404D70(0, 8, a2, a3);
  v12 = dcgettext(0LL, "The strings compared were %s and %s.", 5);
  error(status, 0, v12, v11, v10);
}

__int64 __fastcall sub_405940(char *a1, size_t a2, void *a3, unsigned __int64 a4)
{
  unsigned int v7; // r14d
  int v8; // edi

  v7 = sub_4074D0(a1, a2, a3);
  v8 = *__errno_location();
  if ( v8 )
    sub_405880(v8, (__int64)a1, a2, (__int64)a3, a4);
  return v7;
}

__int64 __fastcall sub_4059A0(char *a1, size_t a2, void *a3, __int64 a4)
{
  unsigned int v7; // r13d
  int v8; // edi

  v7 = sub_407580(a1, a2, a3);
  v8 = *__errno_location();
  if ( v8 )
    sub_405880(v8, (__int64)a1, a2 - 1, (__int64)a3, a4 - 1);
  return v7;
}

__int64 __fastcall sub_405A00(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
{
  char **p_endptr; // r15
  int *v8; // rax
  int *v9; // r12
  unsigned __int8 v10; // bl
  const unsigned __int16 *v11; // rsi
  char *v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // ebp
  int v15; // r12d
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
  int v28; // r9d
  bool v29; // of
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  char *basea; // [rsp+0h] [rbp-58h]
  char *baseb; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h] BYREF

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoul");
  p_endptr = a2;
  if ( !a2 )
    p_endptr = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = *nptr;
  v11 = *__ctype_b_loc();
  v12 = nptr;
  while ( (v11[v10] & 0x2000) != 0 )
    v10 = *++v12;
  if ( v10 == 45 )
    return 4;
  v13 = strtoul(nptr, p_endptr, a3);
  if ( *p_endptr == nptr )
  {
    basea = *p_endptr;
    if ( a5 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(a5, (char)v15);
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
  if ( a5 )
  {
    v15 = (unsigned __int8)**p_endptr;
    if ( (_BYTE)v15 )
    {
      baseb = *p_endptr;
      v26 = strchr(a5, (char)v15);
      v18 = baseb;
      if ( !v26 )
      {
LABEL_40:
        *a4 = v13;
        v14 |= 2u;
        return v14;
      }
LABEL_20:
      if ( (unsigned __int8)(v15 - 69) > 0x2Fu
        || (v19 = 0x814400308945LL, !_bittest64(&v19, (unsigned int)(v15 - 69)))
        || (v37 = v18, v20 = strchr(a5, 48), v18 = v37, !v20) )
      {
LABEL_27:
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
          switch ( (char)v15 )
          {
            case 'B':
              if ( (unsigned __int64)v13 >> 54 )
                goto LABEL_38;
              v13 <<= 10;
              break;
            case 'E':
              goto LABEL_71;
            case 'G':
            case 'g':
              goto LABEL_77;
            case 'K':
            case 'k':
              goto LABEL_37;
            case 'M':
            case 'm':
              goto LABEL_30;
            case 'P':
              goto LABEL_65;
            case 'T':
            case 't':
              goto LABEL_59;
            case 'Y':
              goto LABEL_53;
            case 'Z':
              goto LABEL_47;
            case 'b':
              goto LABEL_44;
            case 'c':
              break;
            case 'w':
              if ( v13 < 0 )
                goto LABEL_38;
              v13 *= 2LL;
              break;
            default:
              goto LABEL_40;
          }
LABEL_33:
          v24 = &v18[v22];
          *p_endptr = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
        if ( v21 != 66 )
        {
          switch ( (char)v15 )
          {
            case 'E':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_71:
              v33 = 6;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_51;
            case 'F':
            case 'H':
            case 'I':
            case 'J':
            case 'L':
            case 'N':
            case 'O':
            case 'Q':
            case 'R':
            case 'S':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case '[':
            case '\\':
            case ']':
            case '^':
            case '_':
            case '`':
            case 'a':
            case 'd':
            case 'e':
            case 'f':
            case 'h':
            case 'i':
            case 'j':
            case 'l':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
              goto LABEL_40;
            case 'G':
            case 'g':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_77:
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
              goto LABEL_33;
            case 'K':
            case 'k':
              v22 = 1;
              v23 = 1024LL;
LABEL_37:
              v25 = v13;
              v13 *= v23;
              if ( is_mul_ok(v23, v25) )
                goto LABEL_33;
              goto LABEL_38;
            case 'M':
            case 'm':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_30:
              if ( !is_mul_ok((int)v23, v13) || !is_mul_ok((int)v23, (int)v23 * v13) )
                goto LABEL_38;
              v13 *= (int)v23 * (__int64)(int)v23;
              break;
            case 'P':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_65:
              v32 = 5;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_51;
            case 'T':
            case 't':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_59:
              v31 = 4;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_51;
            case 'Y':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_53:
              v30 = 8;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v30;
              }
              while ( v30 );
              goto LABEL_51;
            case 'Z':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_47:
              v27 = 7;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v27;
              }
              while ( v27 );
LABEL_51:
              v14 |= v28;
              break;
            case 'b':
              v22 = 1;
LABEL_44:
              if ( (unsigned __int64)v13 >> 55 )
              {
LABEL_38:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 9;
              }
              break;
            case 'c':
              v22 = 1;
              goto LABEL_33;
            default:
              goto LABEL_27;
          }
          goto LABEL_33;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_28;
    }
  }
LABEL_13:
  *a4 = v13;
  return v14;
}

int __fastcall sub_405E30(FILE *stream)
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
  if ( !(unsigned int)sub_405EB0(stream) )
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

int __fastcall sub_405EB0(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_405F90(stream, 0LL, 1LL);
  return fflush(stream);
}

FILE *__fastcall sub_405EF0(char *filename, char *modes, FILE *a3)
{
  FILE *v3; // rax
  FILE *v4; // rbx
  int v5; // r13d
  int v7; // eax
  int v8; // r14d

  v3 = freopen(filename, modes, a3);
  v4 = v3;
  if ( !v3 )
    return v4;
  if ( !filename )
    return v4;
  v5 = fileno(v3);
  if ( dup2(v5, v5) >= 0 || *__errno_location() != 9 )
    return v4;
  v7 = open("/dev/null", 0x80000);
  v8 = v7;
  if ( v5 != v7 )
  {
    if ( dup2(v7, v5) >= 0 )
    {
      close(v8);
      return freopen(filename, modes, v4);
    }
    close(v8);
    return v4;
  }
  return freopen(filename, modes, v4);
}

int __fastcall sub_405F90(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_405FF0(__int64 a1, int *a2)
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

__int64 __fastcall sub_4060D0(
        int a1,
        __int64 *a2,
        const char *a3,
        char **a4,
        _DWORD *a5,
        int a6,
        int *a7,
        int a8,
        const char *a9)
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
  const char *v28; // r12
  __int64 v29; // rbp
  char *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rbp
  char *v33; // rax
  FILE *v34; // rdi
  const char **v35; // rbx
  _BYTE *v36; // rbp
  __int64 v37; // r12
  const char *v38; // r12
  __int64 v39; // rbp
  char *v40; // rax
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  int v48; // [rsp+38h] [rbp-50h]
  char v49; // [rsp+3Fh] [rbp-49h]
  int v51; // [rsp+44h] [rbp-44h]
  int v52; // [rsp+48h] [rbp-40h]

  v9 = (const char *)*((_QWORD *)a7 + 4);
  v10 = (char *)v9;
  v49 = *v9;
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
    if ( !a6 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(a3, v49), result = 0xFFFFFFFFLL, !v18) )
    {
      if ( a8 )
      {
        v24 = *a2;
        v25 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v25, v24, a9, v9);
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
  v51 = -1;
  v15 = s1;
  v16 = 0LL;
  v48 = 0;
  v52 = 0;
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
        && !v48 )
      {
        if ( a8 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((int)v13 + 1, 1uLL);
          if ( ptr )
          {
            v52 = 1;
            ptr[v51] = 1;
LABEL_19:
            ptr[v16] = 1;
            goto LABEL_20;
          }
          v48 = 1;
        }
        else
        {
          v48 = 1;
          if ( ptr )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v51 = v16;
      v12 = v17;
    }
LABEL_20:
    v17 += 4;
    v15 = *v17;
    ++v16;
  }
  while ( *v17 );
  v10 = s1a;
  if ( ptr || v48 )
  {
    if ( a8 )
    {
      if ( v48 )
      {
        v26 = *a2;
        v27 = dcgettext(0LL, "%s: option '%s%s' is ambiguous\n", 5);
        __fprintf_chk(stderr, 1LL, v27, v26, a9, v9);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
      else
      {
        flockfile(stderr);
        v31 = *((_QWORD *)a7 + 4);
        v32 = *a2;
        v33 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v33, v32, a9, v31);
        v34 = stderr;
        v35 = (const char **)a4;
        v36 = ptr;
        v37 = (__int64)&ptr[v13 + 1];
        do
        {
          if ( *v36 )
          {
            __fprintf_chk(v34, 1LL, " '%s%s'", a9, *v35);
            v34 = stderr;
          }
          ++v36;
          v35 += 4;
        }
        while ( (_BYTE *)v37 != v36 );
        fputc(10, v34);
        funlockfile(stderr);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
    }
    if ( v52 )
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
    LODWORD(v13) = v51;
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
        v28 = *v12;
        v29 = *a2;
        v30 = dcgettext(0LL, "%s: option '%s%s' doesn't allow an argument\n", 5);
        __fprintf_chk(stderr, 1LL, v30, v29, a9, v28);
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
          v38 = *v12;
          v39 = *a2;
          v40 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v40, v39, a9, v38);
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

__int64 __fastcall sub_4066F0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_405FF0((__int64)a2, a7);
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
        sub_405FF0((__int64)a2, a7);
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
            return (unsigned int)sub_4060D0(a1, a2, v12, a4, a5, a6, a7, v8, "--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_4060D0(a1, a2, v12, a4, a5, a6, a7, v8, "-");
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
        return (unsigned int)sub_4060D0(a1, a2, v12, a4, a5, 0, a7, v8, "-W ");
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
        __fprintf_chk(stderr, 1LL, v44, v43, v21);
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
            __fprintf_chk(stderr, 1LL, v42, v41, v21);
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
      __fprintf_chk(stderr, 1LL, v40, v39, v21);
    }
    a7[2] = v21;
    return 63;
  }
  return v21;
}

__int64 __fastcall sub_406CC0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_60C460 = dword_60C29C;
  dword_60C464 = dword_60C298;
  result = sub_4066F0(a1, a2, a3, a4, a5, a6, &dword_60C460, a7);
  dword_60C29C = dword_60C460;
  nptr = (char *)qword_60C470;
  dword_60C294 = dword_60C468;
  return result;
}

__int64 __fastcall sub_406D20(int a1, __int64 *a2, const char *a3)
{
  return sub_406CC0(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_406D40(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_406CC0(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_406D60(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_4066F0(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_406D80(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_406CC0(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_406DA0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_4066F0(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_406DC0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !sub_403190(0) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

int __fastcall sub_406E40(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  int result; // eax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_405E30(stream);
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

const char *sub_406EA0()
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
                sub_405E30(v60);
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
            sub_405E30(v39);
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

int __fastcall sub_407410(char *s1, __int64 a2, const char *a3, __int64 a4)
{
  int *v8; // r15
  size_t v9; // rbx
  size_t v10; // rax
  int result; // eax

  v8 = __errno_location();
  while ( 1 )
  {
    *v8 = 0;
    result = strcoll(s1, a3);
    if ( result )
      break;
    v9 = strlen(s1) + 1;
    s1 += v9;
    v10 = strlen(a3) + 1;
    a3 += v10;
    a4 -= v10;
    a2 -= v9;
    if ( !a2 )
      return -(a4 != 0);
    if ( !a4 )
      return 1;
  }
  return result;
}

__int64 __fastcall sub_4074D0(char *s1, size_t n, const char *s2, __int64 a4)
{
  char v6; // r9
  char v7; // r8
  unsigned int v8; // edx
  int *v10; // rax
  char v11; // [rsp+8h] [rbp-40h]
  char v12; // [rsp+Fh] [rbp-39h]

  if ( n == a4 && !memcmp(s1, s2, n) )
  {
    v10 = __errno_location();
    v8 = 0;
    *v10 = 0;
  }
  else
  {
    v6 = s1[n];
    v7 = s2[a4];
    s1[n] = 0;
    s2[a4] = 0;
    v12 = v6;
    v11 = v7;
    v8 = sub_407410(s1, n + 1, s2, a4 + 1);
    s1[n] = v12;
    s2[a4] = v11;
  }
  return v8;
}

int __fastcall sub_407580(char *s1, size_t n, const char *s2, __int64 a4)
{
  if ( n != a4 || memcmp(s1, s2, n) )
    return sub_407410(s1, n, s2, a4);
  *__errno_location() = 0;
  return 0;
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_407660(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_60C208 )
    v1 = (void *)qword_60C208;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_407678(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_60BE30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
