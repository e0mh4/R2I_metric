#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  int v3; // ebp
  char **v4; // rbx
  char *v5; // rax
  __int64 v6; // rsi
  char **v7; // r14
  int v8; // er13
  unsigned __int8 *v9; // r12
  __int64 v10; // r15
  char *v11; // rax
  __int64 v12; // rbx
  unsigned __int8 *v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  char *v17; // rax
  unsigned int v18; // er12
  int v20; // ebp
  FILE *v21; // rbp
  const char *v22; // rax
  __int64 v23; // rbp
  int i; // esi
  char *v25; // rax
  __int64 v26; // rax
  char *v27; // rax
  char v28; // r11
  char v29; // dl
  char v30; // r10
  char v31; // al
  char v32; // di
  char v33; // r9
  char v34; // si
  char v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  char *v41; // r8
  char v42; // cl
  __int64 v43; // rdi
  void *v44; // rax
  _BYTE *v45; // rax
  const char *v46; // r13
  __int64 v47; // rdi
  const char *v48; // r9
  unsigned __int64 v49; // rax
  _BOOL8 v50; // rcx
  _BYTE *v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rsi
  _BYTE *v54; // rax
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // rcx
  char *v58; // rax
  char *v59; // rax
  char *v60; // rax
  __int64 v61; // rbx
  char *v62; // rax
  char *v63; // rax
  char **v64; // [rsp+18h] [rbp-1B0h]
  int v65; // [rsp+24h] [rbp-1A4h]
  void *ptr; // [rsp+28h] [rbp-1A0h]
  void *ptra; // [rsp+28h] [rbp-1A0h]
  unsigned __int8 *src; // [rsp+30h] [rbp-198h]
  _BOOL8 v69; // [rsp+40h] [rbp-188h]
  size_t v70; // [rsp+50h] [rbp-178h]
  char n; // [rsp+60h] [rbp-168h]
  size_t na; // [rsp+60h] [rbp-168h]
  char *nptr; // [rsp+68h] [rbp-160h]
  char v74; // [rsp+77h] [rbp-151h]
  const char *v75; // [rsp+78h] [rbp-150h]
  char *endptr; // [rsp+88h] [rbp-140h]
  char v77[65]; // [rsp+90h] [rbp-138h]
  char v78; // [rsp+D1h] [rbp-F7h]
  char v79; // [rsp+D5h] [rbp-F3h]
  __int16 v80; // [rsp+D6h] [rbp-F2h]
  char v81; // [rsp+E8h] [rbp-E0h]
  char v82; // [rsp+F1h] [rbp-D7h]
  char v83; // [rsp+F3h] [rbp-D5h]
  int v84; // [rsp+F4h] [rbp-D4h]
  char v85; // [rsp+F9h] [rbp-CFh]
  char v86; // [rsp+FFh] [rbp-C9h]
  char v87; // [rsp+103h] [rbp-C5h]
  char v88; // [rsp+105h] [rbp-C3h]
  char v89; // [rsp+108h] [rbp-C0h]

  v3 = a1;
  v4 = a2;
  sub_403130(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_408ED0(sub_403090);
  dword_60D29C = 0;
  byte_60D298 = getenv("POSIXLY_CORRECT") != 0LL;
  if ( a1 == 2 )
  {
    v46 = a2[1];
    if ( !strcmp(a2[1], "--help") )
      sub_402C40(0);
    v18 = strcmp(v46, "--version");
    if ( !v18 )
    {
      sub_405590((char)stdout);
      return v18;
    }
    if ( !strcmp(v46, "--") )
    {
LABEL_3:
      v5 = dcgettext(0LL, "missing operand", 5);
      error(0, 0, v5);
      sub_402C40(1);
    }
  }
  else
  {
    if ( a1 <= 1 )
      goto LABEL_3;
    if ( !strcmp(a2[1], "--") )
    {
      v3 = a1 - 1;
      v4 = a2 + 1;
    }
  }
  src = (unsigned __int8 *)v4[1];
  v65 = v3 - 2;
  v64 = v4 + 2;
  do
  {
    v6 = *src;
    if ( !(_BYTE)v6 )
    {
      v8 = v65;
      break;
    }
    v7 = v64;
    v8 = v65;
    v9 = src;
LABEL_14:
    if ( (_BYTE)v6 == 37 )
    {
      v20 = v9[1];
      v12 = (__int64)(v9 + 1);
      v10 = (__int64)(v9 + 2);
      switch ( (_BYTE)v20 )
      {
        case 0x25:
          v27 = stdout->_IO_write_ptr;
          if ( v27 >= stdout->_IO_write_end )
          {
            __overflow(stdout, 37);
          }
          else
          {
            stdout->_IO_write_ptr = v27 + 1;
            *v27 = 37;
          }
          goto LABEL_12;
        case 0x62:
          if ( v8 )
          {
            v23 = (__int64)*v7;
            for ( i = (unsigned __int8)**v7; (_BYTE)i; v23 = v26 + 1 )
            {
              if ( (_BYTE)i == 92 )
              {
                v26 = v23 + (int)sub_4025F0(v23, 1LL);
              }
              else
              {
                v25 = stdout->_IO_write_ptr;
                if ( v25 >= stdout->_IO_write_end )
                {
                  __overflow(stdout, i);
                }
                else
                {
                  stdout->_IO_write_ptr = v25 + 1;
                  *v25 = i;
                }
                v26 = v23;
              }
              i = *(unsigned __int8 *)(v26 + 1);
            }
            goto LABEL_31;
          }
LABEL_27:
          LODWORD(v6) = v9[2];
          if ( !(_BYTE)v6 )
            return (unsigned int)dword_60D29C;
          v8 = 0;
          goto LABEL_13;
        case 0x71:
          if ( v8 )
          {
            v21 = stdout;
            v22 = (const char *)sub_404B00(3LL, *v7);
            fputs_unlocked(v22, v21);
LABEL_31:
            ++v7;
            --v8;
            goto LABEL_12;
          }
          goto LABEL_27;
      }
      LOBYTE(v10) = 0;
      v28 = 0;
      LOBYTE(ptr) = 0;
      v29 = 0;
      memset(v77, 0, 0x100uLL);
      v81 = 1;
      v30 = 1;
      v80 = 257;
      v31 = v20 - 32;
      v32 = 0;
      v33 = 0;
      v89 = 1;
      v34 = 1;
      v35 = 1;
      v36 = 1LL;
      v88 = 1;
      v87 = 1;
      v86 = 1;
      v85 = 1;
      v79 = 1;
      v83 = 1;
      v84 = 16843009;
      v78 = 1;
      v82 = 1;
      while ( 2 )
      {
        switch ( v31 )
        {
          case 0:
          case 11:
          case 13:
            goto LABEL_47;
          case 3:
            LOBYTE(ptr) = 1;
            LOBYTE(v10) = 1;
            v28 = 1;
            v30 = 0;
            goto LABEL_46;
          case 7:
          case 41:
            v32 = 1;
            v29 = 1;
            v34 = 0;
            v35 = 0;
            v33 = 1;
            goto LABEL_47;
          case 16:
LABEL_46:
            v32 = 1;
            v29 = 1;
            v34 = 0;
LABEL_47:
            v20 = *(unsigned __int8 *)++v12;
            ++v36;
            v31 = v20 - 32;
            if ( (unsigned __int8)(v20 - 32) > 0x29u )
              goto LABEL_48;
            continue;
          default:
LABEL_48:
            if ( !v33 )
              goto LABEL_152;
            v81 = v35;
            v89 = v35;
            if ( v29 )
              goto LABEL_50;
            break;
        }
        break;
      }
LABEL_82:
      v86 = v35;
      v79 = v35;
      BYTE1(v84) = v35;
      if ( !v32 )
      {
LABEL_53:
        v78 = v35;
        v82 = v35;
        goto LABEL_54;
      }
LABEL_52:
      v83 = v34;
      if ( v33 )
        goto LABEL_53;
      while ( 1 )
      {
LABEL_54:
        if ( v28 )
          v88 = v30;
        if ( (_BYTE)v10 )
          v85 = v30;
        if ( (_BYTE)ptr )
          LOBYTE(v84) = v30;
        v37 = v12 + 1;
        if ( (_BYTE)v20 == 42 )
          break;
        v55 = v12;
        if ( (unsigned int)((char)v20 - 48) > 9 )
        {
          v10 = v12 + 1;
          v38 = v36;
          n = 0;
LABEL_63:
          if ( (_BYTE)v20 != 46 )
            goto LABEL_125;
          goto LABEL_64;
        }
        while ( 1 )
        {
          v37 = v55 + 1;
          v20 = *(char *)(v55 + 1);
          v38 = v55 + 1 + v36 - v12;
          if ( (unsigned int)(v20 - 48) > 9 )
            break;
          ++v55;
        }
        v10 = v55 + 2;
        v12 = v37;
        n = 0;
        if ( (_BYTE)v20 != 46 )
        {
LABEL_125:
          v74 = 0;
          goto LABEL_69;
        }
LABEL_64:
        v20 = *(unsigned __int8 *)(v12 + 1);
        v83 = 0;
        if ( (_BYTE)v20 != 42 )
        {
          v37 = v38 + 1;
          v56 = v10;
          if ( (unsigned int)((char)v20 - 48) <= 9 )
          {
            while ( 1 )
            {
              v37 = v56 + 2;
              v12 = v56 + 1;
              v20 = *(char *)(v56 + 1);
              v57 = v56 + 2 + v38 - v10;
              if ( (unsigned int)(v20 - 48) > 9 )
                break;
              ++v56;
            }
            v10 = v56 + 2;
            v38 = v57;
            v74 = 0;
          }
          else
          {
            v12 = v10;
            ++v38;
            ++v10;
            v74 = 0;
          }
          goto LABEL_69;
        }
        v38 += 2LL;
        if ( !v8 )
        {
          v20 = *(unsigned __int8 *)(v12 + 2);
          v10 = v12 + 3;
          v74 = 1;
          v12 += 2LL;
LABEL_69:
          if ( (unsigned __int8)(v20 - 76) <= 0x2Eu )
          {
            v40 = 71473892950017LL;
            if ( _bittest64(&v40, (unsigned int)(v20 - 76)) )
            {
              while ( 1 )
              {
                v20 = *(unsigned __int8 *)(v12 + 1);
                if ( (unsigned __int8)(v20 - 76) > 0x2Eu )
                  break;
                v47 = 71473892950017LL;
                if ( !_bittest64(&v47, (unsigned int)(v20 - 76)) )
                  break;
                ++v12;
              }
              v10 = v12++ + 2;
            }
          }
          if ( v77[(unsigned __int8)v20] )
          {
            v41 = "";
            if ( v8 )
            {
              v41 = *v7;
              --v8;
              ++v7;
            }
            v42 = v20 - 65;
            v43 = v38 + 2;
            if ( (unsigned __int8)(v20 - 65) > 0x37u )
            {
              na = v38;
              v44 = (void *)sub_4056D0(v43, v37);
              ptra = v44;
              v45 = mempcpy(v44, v9, na);
              *v45 = v20;
              v45[1] = 0;
              goto LABEL_78;
            }
            if ( (1LL << v42) & 0x90410800800000LL )
            {
              v50 = 1LL;
              v48 = "ld";
            }
            else
            {
              v48 = "L";
              v49 = (1LL << v42) & 0x7100000071LL;
              if ( !v49 )
                v48 = (const char *)v9;
              v50 = v49 >= 1;
            }
            nptr = v41;
            v69 = v50;
            v75 = v48;
            v70 = v38;
            ptra = (void *)sub_4056D0(v50 + v43, v37);
            v51 = mempcpy(ptra, v9, v70);
            if ( v69 )
            {
              v52 = 0;
              do
              {
                v53 = v52++;
                v51[v53] = v75[v53];
              }
              while ( v52 < (unsigned int)v69 );
            }
            v54 = &v51[v69];
            *v54 = v20;
            v54[1] = 0;
            switch ( (_BYTE)v20 )
            {
              case 0x41:
              case 0x45:
              case 0x46:
              case 0x47:
              case 0x61:
              case 0x65:
              case 0x66:
              case 0x67:
                if ( (*nptr == 34 || *nptr == 39) && nptr[1] )
                {
                  if ( nptr[2] && !byte_60D298 )
                  {
                    v58 = dcgettext(0LL, "warning: %s: character(s) following character constant have been ignored", 5);
                    error(0, 0, v58, nptr + 2);
                  }
                  if ( !n )
                  {
LABEL_119:
                    sub_4059C0((char)ptra);
                    goto LABEL_78;
                  }
                }
                else
                {
                  *__errno_location() = 0;
                  sub_402FF0(nptr, &endptr);
                  sub_402B00(nptr, endptr);
                  if ( !n )
                    goto LABEL_119;
                }
                sub_4059C0((char)ptra);
                goto LABEL_78;
              case 0x58:
              case 0x6F:
              case 0x75:
              case 0x78:
                if ( (*nptr == 34 || *nptr == 39) && nptr[1] )
                {
                  if ( nptr[2] && !byte_60D298 )
                  {
                    v59 = dcgettext(0LL, "warning: %s: character(s) following character constant have been ignored", 5);
                    error(0, 0, v59, nptr + 2);
                  }
                  if ( !n )
                  {
LABEL_111:
                    sub_4059C0((char)ptra);
                    goto LABEL_78;
                  }
                }
                else
                {
                  *__errno_location() = 0;
                  __strtoul_internal(nptr, &endptr, 0, 0);
                  sub_402B00(nptr, endptr);
                  if ( !n )
                    goto LABEL_111;
                }
                if ( v74 )
                  goto LABEL_145;
                sub_4059C0((char)ptra);
LABEL_78:
                free(ptra);
                break;
              case 0x63:
                sub_4059C0((char)ptra);
                goto LABEL_78;
              case 0x64:
              case 0x69:
                sub_402BB0(nptr);
                if ( n )
                {
                  if ( v74 )
                    goto LABEL_145;
                  sub_4059C0((char)ptra);
                }
                else
                {
                  sub_4059C0((char)ptra);
                }
                goto LABEL_78;
              case 0x73:
                if ( n )
                {
                  if ( v74 )
LABEL_145:
                    sub_4059C0((char)ptra);
                  else
                    sub_4059C0((char)ptra);
                }
                else
                {
                  sub_4059C0((char)ptra);
                }
                goto LABEL_78;
              default:
                goto LABEL_78;
            }
LABEL_12:
            v6 = *(unsigned __int8 *)(v12 + 1);
            if ( !(_BYTE)v6 )
              goto LABEL_17;
LABEL_13:
            v9 = (unsigned __int8 *)v10;
            goto LABEL_14;
          }
          v60 = dcgettext(0LL, "%.*s: invalid conversion specification", 5);
          v37 = 0LL;
          error(1, 0, v60, v10 - (_QWORD)v9, v9);
LABEL_150:
          v61 = sub_404D50(*v7, v37);
          v62 = dcgettext(0LL, "invalid field width: %s", 5);
          v37 = 0LL;
          error(1, 0, v62, v61);
          goto LABEL_151;
        }
        ptr = (void *)v38;
        v39 = sub_402BB0(*v7);
        v38 = (__int64)ptr;
        if ( v39 < 0 || v39 <= 0x7FFFFFFF )
        {
          v20 = *(unsigned __int8 *)(v12 + 2);
          v10 = v12 + 3;
          v74 = 1;
          v12 += 2LL;
          ++v7;
          --v8;
          goto LABEL_69;
        }
LABEL_151:
        v12 = sub_404D50(*v7, v37);
        v63 = dcgettext(0LL, "invalid precision: %s", 5);
        v34 = 0;
        v32 = 1;
        error(1, 0, v63, v12);
LABEL_152:
        if ( v29 )
        {
LABEL_50:
          v87 = v34;
          if ( v33 )
            goto LABEL_82;
        }
        if ( v32 )
          goto LABEL_52;
      }
      v38 = v36 + 1;
      if ( v8 )
      {
        ptr = (void *)(v36 + 1);
        if ( (unsigned __int64)(sub_402BB0(*v7) + 0x80000000LL) > 0xFFFFFFFF )
          goto LABEL_150;
        v20 = *(unsigned __int8 *)(v12 + 1);
        v10 = v12 + 2;
        ++v7;
        v37 = v12 + 1;
        --v8;
        n = 1;
        v38 = (__int64)ptr;
        ++v12;
      }
      else
      {
        v20 = *(unsigned __int8 *)(v12 + 1);
        v10 = v12++ + 2;
        n = 1;
      }
      goto LABEL_63;
    }
    if ( (_BYTE)v6 != 92 )
    {
      v10 = (__int64)(v9 + 1);
      v11 = stdout->_IO_write_ptr;
      if ( v11 >= stdout->_IO_write_end )
      {
        __overflow(stdout, v6);
        v12 = (__int64)v9;
      }
      else
      {
        v12 = (__int64)v9;
        stdout->_IO_write_ptr = v11 + 1;
        *v11 = v6;
      }
      goto LABEL_12;
    }
    v13 = &v9[(int)sub_4025F0(v9, 0LL)];
    v6 = v13[1];
    v10 = (__int64)(v13 + 1);
    if ( (_BYTE)v6 )
      goto LABEL_13;
LABEL_17:
    v14 = v65;
    v65 = v8;
    v15 = v14 - v8;
    v64 += v15;
  }
  while ( v15 > 0 && v8 > 0 );
  if ( v8 )
  {
    v16 = sub_404D50(*v64, v6);
    v17 = dcgettext(0LL, "warning: ignoring excess arguments, starting with %s", 5);
    error(0, 0, v17, v16);
  }
  return (unsigned int)dword_60D29C;
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

void *sub_40253B()
{
  void *result; // rax

  result = &unk_60D258;
  if ( &unk_60D258 != &unk_60D258 )
    result = 0LL;
  return result;
}

__int64 sub_40255A()
{
  return 0LL;
}

void *sub_402591()
{
  void *result; // rax

  if ( !byte_60D288 )
  {
    while ( qword_60D290 < (unsigned __int64)(&qword_60CE48 - qword_60CE40 - 1) )
      ((void (*)(void))qword_60CE40[++qword_60D290])();
    result = sub_40253B();
    byte_60D288 = 1;
  }
  return result;
}

__int64 sub_4025E8()
{
  return sub_40255A();
}

__int64 __fastcall sub_4025F0(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r13
  char v3; // r12
  int v4; // ecx
  __int64 v5; // rsi
  unsigned __int8 *v6; // rdx
  unsigned __int8 *v7; // rbp
  int v8; // eax
  unsigned int v9; // ebp
  char *v10; // rax
  __int64 result; // rax
  _IO_FILE *v12; // rdi
  char *v13; // rax
  unsigned __int8 v14; // al
  char *v15; // rdx
  const unsigned __int16 **v16; // rax
  int v17; // edi
  const unsigned __int16 *v18; // r8
  int v19; // edx
  unsigned __int8 v20; // al
  int v21; // esi
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // ebx
  bool v25; // zf
  _BYTE *v26; // r12
  _BOOL4 v27; // ebp
  const unsigned __int16 **v28; // rax
  unsigned int v29; // ebp
  unsigned int v30; // er9
  const unsigned __int16 *v31; // r10
  __int64 v32; // r8
  int v33; // ecx
  int v34; // er9
  int v35; // eax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  char *v43; // rax
  char *v44; // rax
  char *v45; // rax
  char *v46; // rax
  unsigned int v47; // [rsp+Ch] [rbp-2Ch]

  v2 = a1;
  v3 = *(_BYTE *)(a1 + 1);
  if ( v3 == 120 )
  {
    v7 = (unsigned __int8 *)(a1 + 2);
    v16 = __ctype_b_loc();
    v17 = 0;
    v4 = 0;
    v18 = *v16;
    while ( 1 )
    {
      v19 = (char)*v7;
      v20 = *v7;
      if ( !(v18[*v7] & 0x1000) )
        break;
      v21 = 16 * v4;
      if ( (unsigned __int8)(v20 - 97) > 5u )
      {
        v23 = v19 - 48;
        v22 = v19 - 55;
        if ( (unsigned __int8)(v20 - 65) > 5u )
          v22 = v23;
      }
      else
      {
        v22 = v19 - 87;
      }
      v4 = v21 + v22;
      ++v7;
      if ( v17 == 1 )
        goto LABEL_6;
      v17 = 1;
    }
    if ( v17 )
      goto LABEL_6;
    goto LABEL_62;
  }
  if ( (unsigned __int8)(v3 - 48) > 7u )
  {
    if ( !v3 )
      goto LABEL_77;
    v24 = v3;
    if ( strchr("\"\\abcefnrtv", v3) )
    {
      switch ( v3 )
      {
        case 97:
          v9 = 1;
          v43 = stdout->_IO_write_ptr;
          if ( v43 >= stdout->_IO_write_end )
          {
            __overflow(stdout, 7);
          }
          else
          {
            stdout->_IO_write_ptr = v43 + 1;
            *v43 = 7;
          }
          break;
        case 98:
          v9 = 1;
          v42 = stdout->_IO_write_ptr;
          if ( v42 >= stdout->_IO_write_end )
          {
            __overflow(stdout, 8);
          }
          else
          {
            stdout->_IO_write_ptr = v42 + 1;
            *v42 = 8;
          }
          break;
        case 99:
          exit(0);
          return result;
        case 101:
          v9 = 1;
          v41 = stdout->_IO_write_ptr;
          if ( v41 >= stdout->_IO_write_end )
          {
            __overflow(stdout, 27);
          }
          else
          {
            stdout->_IO_write_ptr = v41 + 1;
            *v41 = 27;
          }
          break;
        case 102:
          v9 = 1;
          v40 = stdout->_IO_write_ptr;
          if ( v40 >= stdout->_IO_write_end )
          {
            __overflow(stdout, 12);
          }
          else
          {
            stdout->_IO_write_ptr = v40 + 1;
            *v40 = 12;
          }
          break;
        case 110:
          v9 = 1;
          v39 = stdout->_IO_write_ptr;
          if ( v39 >= stdout->_IO_write_end )
          {
            __overflow(stdout, 10);
          }
          else
          {
            stdout->_IO_write_ptr = v39 + 1;
            *v39 = 10;
          }
          break;
        case 114:
          v9 = 1;
          v38 = stdout->_IO_write_ptr;
          if ( v38 >= stdout->_IO_write_end )
          {
            __overflow(stdout, 13);
          }
          else
          {
            stdout->_IO_write_ptr = v38 + 1;
            *v38 = 13;
          }
          break;
        case 116:
          v9 = 1;
          v37 = stdout->_IO_write_ptr;
          if ( v37 >= stdout->_IO_write_end )
          {
            __overflow(stdout, 9);
          }
          else
          {
            stdout->_IO_write_ptr = v37 + 1;
            *v37 = 9;
          }
          break;
        case 118:
          v9 = 1;
          v36 = stdout->_IO_write_ptr;
          if ( v36 >= stdout->_IO_write_end )
          {
            __overflow(stdout, 11);
          }
          else
          {
            stdout->_IO_write_ptr = v36 + 1;
            *v36 = 11;
          }
          break;
        default:
          v9 = 1;
          v44 = stdout->_IO_write_ptr;
          if ( v44 >= stdout->_IO_write_end )
          {
            __overflow(stdout, (unsigned __int8)v3);
          }
          else
          {
            stdout->_IO_write_ptr = v44 + 1;
            *v44 = v3;
          }
          break;
      }
      return v9;
    }
    if ( (v3 & 0xDF) != 85 )
    {
LABEL_77:
      v12 = stdout;
      v13 = stdout->_IO_write_ptr;
      if ( v13 < stdout->_IO_write_end )
      {
        stdout->_IO_write_ptr = v13 + 1;
        *v13 = 92;
        goto LABEL_12;
      }
LABEL_63:
      __overflow(v12, 92);
LABEL_12:
      v14 = *(_BYTE *)(v2 + 1);
      v9 = 0;
      if ( v14 )
      {
        v15 = stdout->_IO_write_ptr;
        if ( v15 >= stdout->_IO_write_end )
        {
          __overflow(stdout, v14);
        }
        else
        {
          stdout->_IO_write_ptr = v15 + 1;
          *v15 = v14;
        }
        v9 = 1;
      }
      return v9;
    }
    v25 = v3 == 117;
    v26 = (_BYTE *)(a1 + 2);
    v27 = !v25;
    v28 = __ctype_b_loc();
    v29 = 4 * v27 + 4;
    v30 = 0;
    v31 = *v28;
    v32 = a1 + v29 - 1 + 3;
    while ( 1 )
    {
      v33 = (char)*v26;
      if ( !(v31[(unsigned __int8)*v26] & 0x1000) )
        break;
      v34 = 16 * v30;
      if ( (unsigned __int8)(v33 - 97) <= 5u )
      {
        ++v26;
        v30 = v33 - 87 + v34;
        if ( v26 == (_BYTE *)v32 )
          goto LABEL_35;
      }
      else
      {
        v35 = v33 - 55;
        if ( (unsigned __int8)(*v26 - 65) > 5u )
          v35 = v33 - 48;
        ++v26;
        v30 = v35 + v34;
        if ( v26 == (_BYTE *)v32 )
        {
LABEL_35:
          if ( v30 <= 0x9F && v30 != 36 && (v30 & 0xFFFFFFDF) != 64 || v30 - 55296 <= 0x7FF )
          {
            v47 = v30;
            v46 = dcgettext(0LL, "invalid universal character name \\%c%0*x", 5);
            error(1, 0, v46, v24, v29, v47);
            result = sub_402B00(1LL, 0LL);
          }
          else
          {
            sub_405060(stdout, v30, 0LL);
            result = v29 + 1;
          }
          return result;
        }
      }
    }
LABEL_62:
    v45 = dcgettext(0LL, "missing hexadecimal number in escape", 5);
    v12 = (_IO_FILE *)1;
    error(1, 0, v45);
    goto LABEL_63;
  }
  v4 = 0;
  v5 = (v3 == 48) & a2;
  v6 = (unsigned __int8 *)(a1 + v5 + 1);
  v7 = (unsigned __int8 *)(a1 + v5 + 4);
  while ( 1 )
  {
    v8 = (char)*v6;
    if ( (unsigned __int8)(*v6 - 48) > 7u )
      break;
    ++v6;
    v4 = v8 + 8 * v4 - 48;
    if ( v6 == v7 )
      goto LABEL_6;
  }
  LODWORD(v7) = (_DWORD)v6;
LABEL_6:
  v9 = (_DWORD)v7 - v2 - 1;
  v10 = stdout->_IO_write_ptr;
  if ( v10 >= stdout->_IO_write_end )
  {
    __overflow(stdout, (unsigned __int8)v4);
  }
  else
  {
    stdout->_IO_write_ptr = v10 + 1;
    *v10 = v4;
  }
  return v9;
}

void __fastcall sub_402B00(_BYTE *a1, _BYTE *a2)
{
  int *v2; // rax
  __int64 v3; // rax
  const char *v4; // rsi
  __int64 v5; // rbx
  char *v6; // rax
  int *v7; // rbx
  __int64 v8; // rax

  v2 = __errno_location();
  if ( *v2 )
  {
    v7 = v2;
    v8 = sub_404D50(a1, a2);
    error(0, *v7, "%s", v8);
    dword_60D29C = 1;
  }
  else if ( *a2 )
  {
    v3 = sub_404D50(a1, a2);
    if ( a1 == a2 )
      v4 = "%s: expected a numeric value";
    else
      v4 = "%s: value not completely converted";
    v5 = v3;
    v6 = dcgettext(0LL, v4, 5);
    error(0, 0, v6, v5);
    dword_60D29C = 1;
  }
}

__int64 __fastcall sub_402BB0(char *nptr)
{
  __int64 v1; // rbp
  char *v3; // rax
  char *endptr; // [rsp+8h] [rbp-20h]

  if ( (*nptr == 34 || *nptr == 39) && (v1 = (unsigned __int8)nptr[1], (_BYTE)v1) )
  {
    if ( nptr[2] && !byte_60D298 )
    {
      v3 = dcgettext(0LL, "warning: %s: character(s) following character constant have been ignored", 5);
      error(0, 0, v3, nptr + 2);
    }
  }
  else
  {
    *__errno_location() = 0;
    v1 = __strtol_internal(nptr, &endptr, 0, 0);
    sub_402B00(nptr, endptr);
  }
  return v1;
}

noreturn void __fastcall  sub_402C40(int status)
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
  char *v18; // rax
  __int64 v19; // rcx
  const char **v20; // rax
  char *v21; // rbp
  char *v22; // rax
  char *v23; // rax
  char *v24; // r12
  char *v25; // rax
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  __int64 v31; // rcx
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

  v1 = qword_60D2B8;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s FORMAT [ARGUMENT]...\n  or:  %s OPTION\n", 5);
  __printf_chk(1LL, v3, v1, v1);
  v4 = stdout;
  v5 = dcgettext(0LL, "Print ARGUMENT(s) according to FORMAT, or execute according to OPTION:\n\n", 5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "\nFORMAT controls the output as in C printf.  Interpreted sequences are:\n\n  \\\"      double quote\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "  \\\\      backslash\n"
          "  \\a      alert (BEL)\n"
          "  \\b      backspace\n"
          "  \\c      produce no further output\n"
          "  \\e      escape\n"
          "  \\f      form feed\n"
          "  \\n      new line\n"
          "  \\r      carriage return\n"
          "  \\t      horizontal tab\n"
          "  \\v      vertical tab\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "  \\NNN    byte with octal value NNN (1 to 3 digits)\n"
          "  \\xHH    byte with hexadecimal value HH (1 to 2 digits)\n"
          "  \\uHHHH  Unicode (ISO/IEC 10646) character with hex value HHHH (4 digits)\n"
          "  \\UHHHHHHHH  Unicode character with hex value HHHHHHHH (8 digits)\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(
          0LL,
          "  %%      a single %\n"
          "  %b      ARGUMENT as a string with '\\' escapes interpreted,\n"
          "          except that octal escapes are of the form \\0 or \\0NNN\n"
          "  %q      ARGUMENT is printed in a format that can be reused as shell input,\n"
          "          escaping non-printable characters with the proposed POSIX $'' syntax.\n"
          "\n"
          "and all C format specifications ending with one of diouxXfeEgGcs, with\n"
          "ARGUMENTs converted to proper type first.  Variable widths are handled.\n",
          5);
  fputs_unlocked(v17, v16);
  v18 = dcgettext(
          0LL,
          "\n"
          "NOTE: your shell may have its own version of %s, which usually supersedes\n"
          "the version described here.  Please refer to your shell's documentation\n"
          "for details about the options it supports.\n",
          5);
  __printf_chk(1LL, v18, "printf", v19);
  v32 = "[";
  v20 = &v32;
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
    v20 += 2;
  while ( *v20 && strcmp("printf", *v20) );
  v21 = (char *)v20[1];
  if ( v21 )
  {
    v22 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v22, &unk_40981B, "https://www.gnu.org/software/coreutils/");
    v23 = setlocale(5, 0LL);
    if ( !v23 || !strncmp(v23, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v27 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v27, &unk_40981B, "https://www.gnu.org/software/coreutils/");
    v28 = setlocale(5, 0LL);
    if ( !v28 || !strncmp(v28, "en_", 3uLL) )
    {
      v21 = "printf";
      v29 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v24 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v29, "https://www.gnu.org/software/coreutils/", "printf");
LABEL_12:
      v26 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v26, v21, v24);
LABEL_3:
      exit(status);
    }
    v21 = "printf";
  }
  v30 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v30, "printf", v31);
LABEL_10:
  v24 = "Multi-call invocation" + 10;
  v25 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v25, "https://www.gnu.org/software/coreutils/", "printf");
  if ( v21 != "printf" )
    v24 = "";
  goto LABEL_12;
}

long double __fastcall sub_402FF0(char *nptr, char **endptr)
{
  if ( !loc )
    loc = newlocale(8127, "C", 0LL);
  if ( loc )
    return strtold_l(nptr, endptr, loc);
  if ( endptr )
    *endptr = nptr;
  return 0.0;
}

__int64 sub_403090()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

  if ( (unsigned int)sub_405CB0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60D2A8 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60D2B0 )
      {
        v5 = sub_404BA0();
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
  result = sub_405CB0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

char *__fastcall sub_403130(const char *a1)
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
  qword_60D2B8 = v1;
  program_invocation_name = v1;
  return result;
}

const char *__fastcall sub_4031D0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_405D70();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_409CD9;
      if ( !v5 )
        v2 = (char *)&unk_409CCE;
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
    v2 = (char *)&unk_409CD5;
    if ( !v5 )
      v2 = (char *)&unk_409CD2;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_4032D0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
  const char *v47; // rax
  size_t v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  char i; // al
  char v53; // dl
  const char *v54; // rax
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
  const char *s2; // [rsp+50h] [rbp-78h]
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
            return sub_4032D0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_4032D0((__int64)v9, v79, s);
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
              return sub_4032D0((__int64)v9, v10, s);
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
              return sub_4032D0((__int64)v9, v10, s);
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
              return sub_4032D0((__int64)v9, v10, s);
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
              return sub_4032D0((__int64)v9, v10, s);
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
            return sub_4032D0((__int64)v9, v10, s);
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
            return sub_4032D0((__int64)v9, v10, s);
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
            return sub_4032D0((__int64)v9, v10, s);
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
              return sub_4032D0((__int64)v9, v10, s);
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
            return sub_4032D0((__int64)v9, v10, s);
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
              return sub_4032D0((__int64)v9, v10, s);
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
          return sub_4032D0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_405B50((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_4032D0((__int64)v9, v10, s);
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
      return sub_4032D0((__int64)v9, v10, s);
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
        a8 = sub_4031D0("`", v11);
        v47 = sub_4031D0("'", v11);
        v14 = v55;
        a9 = (char *)v47;
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

unsigned __int64 __fastcall sub_4032D0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
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
  const char *v47; // rax
  size_t v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  char i; // al
  char v53; // dl
  const char *v54; // rax
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
  const char *s2; // [rsp+50h] [rbp-78h]
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
            return sub_4032D0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_4032D0((__int64)v9, v79, s);
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
              return sub_4032D0((__int64)v9, v10, s);
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
              return sub_4032D0((__int64)v9, v10, s);
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
              return sub_4032D0((__int64)v9, v10, s);
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
              return sub_4032D0((__int64)v9, v10, s);
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
            return sub_4032D0((__int64)v9, v10, s);
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
            return sub_4032D0((__int64)v9, v10, s);
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
            return sub_4032D0((__int64)v9, v10, s);
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
              return sub_4032D0((__int64)v9, v10, s);
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
            return sub_4032D0((__int64)v9, v10, s);
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
              return sub_4032D0((__int64)v9, v10, s);
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
          return sub_4032D0((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_405B50((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_4032D0((__int64)v9, v10, s);
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
      return sub_4032D0((__int64)v9, v10, s);
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
        a8 = sub_4031D0("`", v11);
        v47 = sub_4031D0("'", v11);
        v14 = v55;
        a9 = (char *)v47;
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

_BYTE *__fastcall sub_404500(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60D238;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60D250 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405920();
    v9 = 16LL * (a1 + 1);
    if ( off_60D238 == &xmmword_60D240 )
    {
      v7 = (__int128 *)sub_405730(0LL, v9);
      off_60D238 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60D240);
    }
    else
    {
      off_60D238 = (__int128 *)sub_405730(off_60D238, v9);
      v7 = off_60D238;
    }
    memset(&v7[dword_60D250], 0, 16LL * (a1 + 1 - dword_60D250));
    dword_60D250 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_4032D0(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60D2C0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_4056D0(v13, v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_4032D0(v14, v13, v17, v4, v15, v21, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_404500(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60D238;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60D250 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_405920();
    v9 = 16LL * (a1 + 1);
    if ( off_60D238 == &xmmword_60D240 )
    {
      v7 = (__int128 *)sub_405730(0LL, v9);
      off_60D238 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60D240);
    }
    else
    {
      off_60D238 = (__int128 *)sub_405730(off_60D238, v9);
      v7 = off_60D238;
    }
    memset(&v7[dword_60D250], 0, 16LL * (a1 + 1 - dword_60D250));
    dword_60D250 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_4032D0(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60D2C0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_4056D0(v13, v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_4032D0(v14, v13, v17, v4, v15, v21, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_404A20(int a1, int a2, char *a3)
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
  return sub_404500(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404A20(int a1, int a2, char *a3)
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
  return sub_404500(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404A90(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_404500(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_404A90(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_404500(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_404B00(int a1, char *a2)
{
  return sub_404A20(0, a1, a2);
}

_BYTE *__fastcall sub_404B20(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_60D3F0;
  v7 = _mm_load_si128((const __m128i *)&xmmword_60D3C0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_60D3D0);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_60D3E0);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_404500(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_404BA0(char *a1)
{
  return sub_404B20(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_404BD0(int a1, int a2, char *a3)
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
  return sub_404500(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404BD0(int a1, int a2, char *a3)
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
  return sub_404500(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_404C40(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_60D3C0);
  v7 = _mm_load_si128((const __m128i *)&xmmword_60D3D0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_60D3E0);
  v9 = qword_60D3F0;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_404500(a1, a4, a5, (__int64)&v6);
}

_BYTE *__fastcall sub_404D50(char *a1)
{
  return sub_404500(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60D200);
}

__int64 __fastcall sub_404D70(const void *a1, size_t a2, FILE *a3)
{
  fwrite(a1, 1uLL, a2, a3);
  return 0LL;
}

__int64 __fastcall sub_404D90(unsigned int a1, __int64 a2, __int64 a3)
{
  if ( a1 > 0xFFFF )
    __fprintf_chk(a3, 1LL, "\\U%08X", a1);
  else
    __fprintf_chk(a3, 1LL, "\\u%04X", a1);
  return -1LL;
}

__int64 __fastcall sub_404DE0(unsigned int a1, const char *a2)
{
  char *v2; // rbp
  char *v3; // rax
  char *v5; // rax

  if ( a2 )
  {
    v2 = dcgettext(0LL, a2, 5);
    v3 = dcgettext(0LL, "cannot convert U+%04X to local character set: %s", 5);
    error(1, 0, v3, a1, v2);
  }
  else
  {
    v5 = dcgettext(0LL, "cannot convert U+%04X to local character set", 5);
    error(1, 0, v5, a1);
  }
  return -1LL;
}

__int64 __fastcall sub_404E70(__int64 a1, __int64 (__fastcall *a2)(char *, size_t, __int64), __int64 (__fastcall *a3)(_QWORD, const char *, __int64), __int64 a4)
{
  __int64 (__fastcall *v4)(_QWORD, const char *, __int64); // r13
  __int64 (__fastcall *v5)(char *, size_t, __int64); // r12
  __int64 v6; // rbp
  int v7; // edx
  size_t v8; // rsi
  __int64 result; // rax
  const char *v10; // rax
  bool v11; // zf
  _BOOL4 v12; // ecx
  int v13; // eax
  size_t v14; // rax
  char v15; // [rsp+Ah] [rbp-6Eh]
  char *inbuf; // [rsp+10h] [rbp-68h]
  size_t inbytesleft; // [rsp+18h] [rbp-60h]
  char *outbuf; // [rsp+20h] [rbp-58h]
  size_t outbytesleft; // [rsp+28h] [rbp-50h]
  char v20; // [rsp+30h] [rbp-48h]

  v4 = a3;
  v5 = a2;
  v6 = a4;
  v7 = dword_60D400;
  if ( !dword_60D404 )
  {
    v10 = (const char *)sub_405D70(a1, a2, (unsigned int)dword_60D400);
    v11 = strcmp(v10, "UTF-8") == 0;
    v12 = !v11;
    v7 = !v12;
    dword_60D400 = !v12;
    if ( !v11 )
    {
      cd = iconv_open(v10, "UTF-8");
      if ( cd == (iconv_t)-1LL )
        cd = iconv_open("ASCII", "UTF-8");
      v7 = dword_60D400;
    }
    dword_60D404 = 1;
  }
  if ( !v7 && cd == (iconv_t)-1LL )
    return v4((unsigned int)a1, "iconv function not usable", v6);
  if ( (unsigned int)a1 > 0x7F )
  {
    v13 = sub_405080(&v15, (unsigned int)a1, 6LL);
    v7 = dword_60D400;
    v8 = v13;
    if ( v13 < 0 )
      return v4((unsigned int)a1, "character out of range", v6);
  }
  else
  {
    v15 = a1;
    v8 = 1LL;
  }
  if ( v7 )
    return v5(&v15, v8, v6);
  inbuf = &v15;
  inbytesleft = v8;
  outbuf = &v20;
  outbytesleft = 25LL;
  v14 = iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
  if ( inbytesleft || v14 == -1LL || iconv(cd, 0LL, 0LL, &outbuf, &outbytesleft) == -1LL )
    result = v4((unsigned int)a1, 0LL, v6);
  else
    result = v5(&v20, outbuf - &v20, v6);
  return result;
}

__int64 __fastcall sub_405060(__int64 a1, unsigned int a2, int a3)
{
  bool v3; // zf
  __int64 (__fastcall *v4)(_QWORD, const char *, __int64); // rdx

  v3 = a3 == 0;
  v4 = (__int64 (__fastcall *)(_QWORD, const char *, __int64))sub_404DE0;
  if ( v3 )
    v4 = (__int64 (__fastcall *)(_QWORD, const char *, __int64))sub_404D90;
  return sub_404E70(a2, (__int64 (__fastcall *)(char *, size_t, __int64))sub_404D70, v4, a1);
}

__int64 __fastcall sub_405080(_BYTE *a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  char v4; // dl
  char v5; // al

  if ( a2 <= 0x7F )
    return 4294967294LL;
  if ( a2 <= 0x7FF )
  {
    if ( a3 > 1 )
    {
      result = 2LL;
      goto LABEL_8;
    }
    return 4294967294LL;
  }
  if ( a2 > 0xFFFF )
  {
    if ( a2 <= 0x10FFFF )
    {
      if ( a3 > 3 )
      {
        v5 = a2;
        a2 = (a2 >> 6) | 0x10000;
        a1[3] = v5 & 0x3F | 0x80;
        result = 4LL;
        goto LABEL_7;
      }
      return 4294967294LL;
    }
  }
  else if ( a2 - 55296 > 0x7FF )
  {
    if ( a3 > 2 )
    {
      result = 3LL;
LABEL_7:
      v4 = a2;
      a2 = (a2 >> 6) | 0x800;
      a1[2] = v4 & 0x3F | 0x80;
LABEL_8:
      *a1 = (a2 >> 6) | 0xC0;
      a1[1] = a2 & 0x3F | 0x80;
      return result;
    }
    return 4294967294LL;
  }
  return 0xFFFFFFFFLL;
}

__int64 __fastcall sub_405130(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_405130(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_405530(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_405130(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_405130(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_405590(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_405130(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_405130(a1, a2, a3, a4, v15, i);
}

int sub_405650()
{
  char *v0; // rax
  __int64 v1; // rcx
  char *v2; // rax
  FILE *v3; // rbx
  char *v4; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org", v1);
  v2 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v2, &unk_40981B, "https://www.gnu.org/software/coreutils/");
  v3 = stdout;
  v4 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v4, v3);
}

void *__fastcall sub_4056D0(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_405920();
  }
  return result;
}

void *__fastcall sub_405730(void *a1, size_t a2)
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
        sub_405920();
    }
  }
  return result;
}

void *__fastcall sub_4058D0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_4056D0(n);
  return memcpy(v2, src, n);
}

noreturn void  sub_405920()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 sub_405960()
{
  unsigned int v0; // ebx
  char *v2; // rbp
  int *v3; // rax

  v0 = sub_405C90();
  if ( (v0 & 0x80000000) != 0 && !ferror(stdout) )
  {
    v2 = dcgettext(0LL, "cannot perform formatted output", 5);
    v3 = __errno_location();
    error(status, *v3, v2);
  }
  return v0;
}

__int64 sub_4059C0()
{
  return sub_405960();
}

__int64 __fastcall sub_405A60(FILE *stream)
{
  unsigned int v1; // ebx
  char *v3; // rbp
  int *v4; // rax

  v1 = sub_405BD0(stream);
  if ( (v1 & 0x80000000) != 0 && !ferror(stream) )
  {
    v3 = dcgettext(0LL, "cannot perform formatted output", 5);
    v4 = __errno_location();
    error(status, *v4, v3);
  }
  return v1;
}

__int64 __fastcall sub_405AC0(FILE *a1)
{
  return sub_405A60(a1);
}

size_t __fastcall sub_405B50(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx
  wchar_t *v5; // r12
  char *v6; // rbp
  char v8; // [rsp+Ch] [rbp-1Ch]

  if ( !s )
  {
    a3 = 1LL;
    v6 = "Written by %s, %s, and %s.\n" + 27;
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_405D10(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

__int64 __fastcall sub_405BD0(FILE *s, __int64 a2, __int64 a3)
{
  char *v3; // rax
  size_t v4; // rbx
  char *v5; // rbp
  int *v7; // rax
  int v8; // er13
  int *v9; // r12
  size_t n; // [rsp+8h] [rbp-800h]
  char v11; // [rsp+10h] [rbp-7F8h]

  n = 2000LL;
  v3 = (char *)sub_406410(&v11, &n, a2, a3);
  v4 = n;
  if ( !v3 )
    goto LABEL_10;
  v5 = v3;
  if ( fwrite(v3, 1uLL, n, s) >= v4 )
  {
    if ( v5 != &v11 )
      free(v5);
    if ( v4 <= 0x7FFFFFFF )
      return (unsigned int)v4;
    *__errno_location() = 75;
LABEL_10:
    LODWORD(v4) = -1;
    sub_406400(s);
    return (unsigned int)v4;
  }
  LODWORD(v4) = -1;
  if ( v5 != &v11 )
  {
    v7 = __errno_location();
    v8 = *v7;
    v9 = v7;
    free(v5);
    *v9 = v8;
  }
  return (unsigned int)v4;
}

__int64 __fastcall sub_405C90(__int64 a1, __int64 a2)
{
  return sub_405BD0(stdout, a1, a2);
}

__int64 __fastcall sub_405CB0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_4062E0(stream);
  if ( v2 )
  {
    if ( !(_DWORD)result )
    {
      *__errno_location() = 0;
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    if ( !(_DWORD)result )
      return result;
    if ( !v1 )
      return (unsigned int)-(*__errno_location() != 9);
  }
  return 0xFFFFFFFFLL;
}

bool __fastcall sub_405D10(int a1)
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

const char *sub_405D70()
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
  v1 = qword_60D408;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_60D408 )
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
          v1 = "Written by %s, %s, and %s.\n" + 27;
LABEL_20:
          qword_60D408 = v1;
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
                v1 = "Written by %s, %s, and %s.\n" + 27;
                v2 = v58;
                free(v59);
                sub_4062E0(v60);
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
            sub_4062E0(v39);
            if ( !v61 )
              goto LABEL_25;
            v1[v61] = 0;
            goto LABEL_26;
          }
          close(v17);
        }
LABEL_25:
        v1 = "Written by %s, %s, and %s.\n" + 27;
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

int __fastcall sub_4062E0(FILE *stream)
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
  if ( !(unsigned int)sub_406360(stream) )
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

int __fastcall sub_406360(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_4063A0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_4063A0(FILE *a1, __off_t a2, int a3)
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

void __fastcall sub_406400(_DWORD *a1)
{
  *a1 |= 0x20u;
}

char *__fastcall sub_406410(void *a1, size_t *a2, char *a3, __int64 a4, double a5)
{
  char *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  _BYTE *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  char *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  char *v17; // rcx
  unsigned __int64 v18; // rax
  size_t v19; // r13
  bool v20; // dl
  char *v21; // rax
  char *v22; // rax
  void *v23; // rsp
  char *v24; // rax
  char v25; // r15
  __int64 v26; // rax
  char *v27; // r8
  long double *v28; // rdx
  int v29; // eax
  char v30; // al
  int v31; // eax
  char *v32; // r15
  _BYTE *v33; // rdi
  _BYTE *v34; // rsi
  _BYTE *v35; // rdx
  _BYTE *v36; // rsi
  _BYTE *v37; // rdx
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rax
  char *v41; // rax
  __int64 v42; // rax
  char *v43; // r8
  int v44; // eax
  unsigned __int64 v45; // rax
  char *v46; // r11
  int *v47; // rax
  char *v48; // r11
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r10
  char *v51; // rdx
  char *v52; // rcx
  __int64 v53; // rsi
  _DWORD *v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  void *v57; // r15
  char *result; // rax
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // er11
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  char *v71; // rdi
  int *v72; // r9
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  bool v76; // cf
  unsigned __int64 v77; // rax
  bool v78; // bl
  char *v79; // rax
  unsigned __int64 v80; // r9
  int v81; // ebx
  __int64 v82; // rax
  char *v83; // rdi
  unsigned __int128 v84; // fst7
  __int64 v85; // rax
  char *v86; // rdi
  unsigned __int64 v87; // rax
  void *v88; // rax
  char *v89; // rax
  char *v90; // rcx
  int v91; // er8
  __int16 v92; // ax
  unsigned __int64 v93; // r15
  char *v94; // rax
  char *v95; // rax
  char *v96; // rax
  char v97; // al
  unsigned __int64 v98; // r9
  size_t v99; // r8
  unsigned __int64 v100; // r10
  unsigned __int64 v101; // rdi
  __int64 v102; // rax
  unsigned __int64 v103; // r10
  unsigned __int64 v104; // rax
  char *v105; // rax
  __int64 v106; // rsi
  char v107; // al
  size_t v108; // r15
  size_t v109; // r14
  bool v110; // r13
  char *v111; // rax
  char *v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // r10
  char *v115; // rax
  char *v116; // rax
  char *v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rdx
  char v120; // al
  __int64 v121; // rdx
  unsigned __int64 v122; // rax
  char *v123; // rax
  __int64 v124; // rdx
  char v125; // al
  unsigned __int64 v126; // rax
  __int64 v127; // rsi
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // rax
  char *v131; // rsi
  char *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rsi
  unsigned __int64 v135; // rax
  char v136; // al
  __int64 v137; // rsi
  char v138; // al
  char *v139; // rax
  __int64 v140; // rdx
  char v141; // al
  __int64 v142; // rax
  char *v143; // rax
  char *v144; // rax
  void *v145; // rdx
  char v146; // al
  char *v147; // rax
  char *v148; // rax
  char v149; // al
  __int64 v150; // [rsp-8h] [rbp-718h]
  int *v151; // [rsp+8h] [rbp-708h]
  int *v152; // [rsp+10h] [rbp-700h]
  int *v153; // [rsp+18h] [rbp-6F8h]
  __int64 v154; // [rsp+20h] [rbp-6F0h]
  unsigned __int64 v155; // [rsp+28h] [rbp-6E8h]
  char *v156; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v158; // [rsp+40h] [rbp-6D0h]
  void *v159; // [rsp+48h] [rbp-6C8h]
  char *v160; // [rsp+50h] [rbp-6C0h]
  __int64 v161; // [rsp+58h] [rbp-6B8h]
  char *v162; // [rsp+60h] [rbp-6B0h]
  _BYTE *v163; // [rsp+68h] [rbp-6A8h]
  long double v164; // [rsp+70h] [rbp-6A0h]
  void *v165; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v167; // [rsp+94h] [rbp-67Ch]
  unsigned int v168; // [rsp+98h] [rbp-678h]
  unsigned int v169; // [rsp+9Ch] [rbp-674h]
  char v170; // [rsp+A0h] [rbp-670h]
  void *v171; // [rsp+A8h] [rbp-668h]
  __int64 v172; // [rsp+B0h] [rbp-660h]
  __int64 v173; // [rsp+190h] [rbp-580h]
  void *v174; // [rsp+198h] [rbp-578h]
  __int64 v175; // [rsp+1A0h] [rbp-570h]
  __int64 v176; // [rsp+1A8h] [rbp-568h]
  __int64 v177; // [rsp+1B0h] [rbp-560h]
  char v178; // [rsp+420h] [rbp-2F0h]

  v5 = a3;
  v6 = a4;
  src = a1;
  v158 = a2;
  if ( (int)sub_408150(a3, &v173, &v170) < 0 )
    return 0LL;
  if ( (int)sub_407F30(v6, &v170) >= 0 )
  {
    v7 = v175 + 7;
    if ( (unsigned __int64)(v175 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v176, v7);
    v8 = v176 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v163 = (_BYTE *)(((unsigned __int64)&v155 + 7) & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = malloc(v9);
      v163 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v158;
    v12 = (char *)v174;
    v13 = v5;
    v14 = (char *)src;
    v161 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v174;
    if ( *(char **)v174 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (char *)(v16 - v13);
    v18 = (unsigned __int64)&v17[v15];
    v19 = (size_t)&v17[v15];
    if ( __CFADD__(v17, v15) )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
      v19 = -1LL;
    }
    else if ( v11 < v18 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v18 )
        {
LABEL_28:
          v20 = v14 == src;
          if ( !v14 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v18 <= 0xC )
      {
        v11 = 12LL;
        v20 = v14 == src;
        if ( !v14 )
        {
LABEL_19:
          v162 = v13;
          LOBYTE(v164) = v20;
          v165 = v17;
          v21 = (char *)malloc(v11);
          v17 = (char *)v165;
          v13 = v162;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v164) )
          {
            *(_QWORD *)&v164 = v162;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = (char *)v165;
            v13 = *(char **)&v164;
            v14 = v22;
          }
          else
          {
            v14 = v21;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v20 )
        {
          *(_QWORD *)&v164 = v13;
          v165 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = (char *)v165;
          v13 = *(char **)&v164;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)&v17[v15];
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v173 != v161 )
    {
      v25 = v12[72];
      v26 = *((_QWORD *)v12 + 10);
      if ( v25 == 37 )
      {
        if ( v26 != -1 )
          goto LABEL_200;
        v59 = v19 + 1;
        v15 = v19 + 1;
        if ( v19 == -1LL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
          v15 = -1LL;
        }
        else if ( v11 < v59 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 < v59 )
              goto LABEL_239;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_239:
            if ( v19 == -2LL )
              goto LABEL_88;
            v11 = v19 + 1;
          }
LABEL_105:
          if ( v14 && v14 != src )
          {
            v60 = (char *)realloc(v14, v11);
            if ( v60 )
            {
              v14 = v60;
              goto LABEL_109;
            }
LABEL_126:
            v57 = v14;
            *(_QWORD *)&v164 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v165) = v14 == src;
          v96 = (char *)malloc(v11);
          if ( !v96 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v165 )
            v14 = (char *)memcpy(v96, v14, v19);
          else
            v14 = v96;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v171;
      v28 = (long double *)((char *)v171 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v165) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v165 == 12 )
        {
          _FST7 = v28[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v66 = (char *)*((_QWORD *)v12 + 3);
            v67 = (char *)*((_QWORD *)v12 + 4);
            v68 = *((_DWORD *)v12 + 4);
            if ( v66 == v67 )
            {
              v50 = 0LL;
            }
            else
            {
              v69 = *((_QWORD *)v12 + 5);
              if ( v69 == -1 )
              {
                v50 = 0LL;
                v165 = (void *)-1LL;
                while ( 1 )
                {
                  v127 = (__int64)(v66 + 1);
                  v128 = -1LL;
                  v129 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v128 = 10 * v50;
                  v76 = __CFADD__(v128, v129);
                  v50 = v128 + v129;
                  v66 = (char *)v127;
                  if ( v76 )
                  {
                    if ( v67 == (char *)v127 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v165;
                      goto LABEL_82;
                    }
                    while ( *(++v66 - 1) != 48 )
                    {
                      if ( v67 == v66 )
                        goto LABEL_81;
                    }
                    v50 = -1LL;
                  }
                  if ( v67 == v66 )
                    goto LABEL_82;
                }
              }
              v70 = (char *)v171 + 32 * v69;
              if ( *v70 != 5 )
                goto LABEL_200;
              v50 = (int)v70[4];
              if ( (v50 & 0x80000000) != 0LL )
              {
                v68 |= 2u;
                v50 = -(__int64)v50;
              }
            }
LABEL_82:
            v51 = (char *)*((_QWORD *)v12 + 6);
            v52 = (char *)*((_QWORD *)v12 + 7);
            if ( v51 != v52 )
            {
              v53 = *((_QWORD *)v12 + 8);
              if ( v53 == -1 )
              {
                v130 = (__int64)(v51 + 1);
                v55 = 0LL;
                if ( v52 != (char *)v130 )
                {
                  v131 = (char *)v130;
                  while ( 1 )
                  {
                    v132 = v131 + 1;
                    v133 = *v131 - 48;
                    v134 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v134 = 10 * v55;
                    v76 = __CFADD__(v134, v133);
                    v135 = v134 + v133;
                    v131 = v132;
                    v55 = v135;
                    if ( v76 )
                    {
                      if ( v52 == v132 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v131 = v132 + 1;
                        if ( *v132 == 48 )
                          break;
                        if ( v52 == v131 )
                          goto LABEL_88;
                        ++v132;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v131 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_376;
              }
              v54 = (char *)v171 + 32 * v53;
              if ( *v54 != 5 )
                goto LABEL_200;
              v55 = (int)v54[4];
              if ( (v55 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v55 )
                {
                  v56 = v55 + 12;
                  if ( v55 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_190:
                  v87 = v56;
                  if ( v50 >= v56 )
                    v87 = v50;
                  v76 = __CFADD__(v87, 1LL);
                  v88 = (void *)(v87 + 1);
                  v165 = v88;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v88 <= 0x2BC )
                  {
                    v90 = &v178;
                  }
                  else
                  {
                    v159 = (void *)v50;
                    v160 = (char *)v55;
                    LODWORD(v162) = v68;
                    v164 = _FST7;
                    if ( v88 == (void *)-1LL )
                      goto LABEL_88;
                    v89 = (char *)malloc((size_t)v88);
                    v68 = (int)v162;
                    _FST7 = v164;
                    v90 = v89;
                    v55 = (unsigned __int64)v160;
                    v50 = (unsigned __int64)v159;
                    if ( !v89 )
                      goto LABEL_88;
                  }
                  v91 = (unsigned __int16)v168;
                  LOBYTE(v92) = v168;
                  HIBYTE(v92) = BYTE1(v168) | 3;
                  LOWORD(v168) = v92;
                  __asm (" fxam ");
                  if ( v62 & 2 )
                  {
                    *v90 = 45;
                    _FST7 = -_FST7;
                    v93 = (unsigned __int64)(v90 + 1);
                  }
                  else if ( v68 & 4 )
                  {
                    v93 = (unsigned __int64)(v90 + 1);
                    *v90 = 43;
                  }
                  else
                  {
                    v93 = (unsigned __int64)v90;
                    if ( v68 & 8 )
                    {
                      v93 = (unsigned __int64)(v90 + 1);
                      *v90 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v98 = v93 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      *(_BYTE *)(v93 + 2) = 102;
                      *(_WORD *)v93 = 28265;
                    }
                    else
                    {
                      *(_BYTE *)(v93 + 2) = 70;
                      *(_WORD *)v93 = 20041;
                    }
                    v93 = 0LL;
                    goto LABEL_264;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v97 = v12[72] & 0xDF;
                  switch ( v97 )
                  {
                    case 70:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || v55 )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v123 = nl_langinfo(0x10000);
                        v124 = (__int64)v160;
                        v98 = *(_QWORD *)&v164;
                        v125 = *v123;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v125 )
                          v125 = 46;
                        *(_BYTE *)(v93 + 1) = v125;
                        if ( v124 )
                        {
                          v126 = v98;
                          do
                            *(_BYTE *)(++v126 - 1) = 48;
                          while ( v126 != v93 + v124 + 2 );
                          v98 += v124;
                        }
                        goto LABEL_264;
                      }
                      goto LABEL_263;
                    case 69:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || (v106 = v93 + 1, v55) )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v139 = nl_langinfo(0x10000);
                        v140 = (__int64)v160;
                        v106 = *(_QWORD *)&v164;
                        v141 = *v139;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v141 )
                          v141 = 46;
                        *(_BYTE *)(v93 + 1) = v141;
                        if ( v140 )
                        {
                          v142 = v106;
                          do
                            *(_BYTE *)(++v142 - 1) = 48;
                          while ( v142 != v93 + v140 + 2 );
                          v106 += v140;
                        }
                      }
                      v107 = v12[72];
                      v98 = v106 + 4;
                      *(_BYTE *)(v106 + 3) = 48;
                      *(_BYTE *)v106 = v107;
                      *(_WORD *)(v106 + 1) = 12331;
                      goto LABEL_264;
                    case 71:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v154) = v91;
                          v155 = v50;
                          v156 = (char *)(v93 + 2);
                          v159 = v90;
                          LODWORD(v160) = v68;
                          v162 = (char *)v55;
                          *(_QWORD *)&v164 = v55 - 1;
                          v117 = nl_langinfo(0x10000);
                          v118 = *(_QWORD *)&v164;
                          v119 = (__int64)v162;
                          v120 = *v117;
                          LOBYTE(v68) = (_BYTE)v160;
                          v90 = (char *)v159;
                          v98 = (unsigned __int64)v156;
                          v50 = v155;
                          LOWORD(v91) = WORD2(v154);
                          if ( !v120 )
                            v120 = 46;
                          *(_BYTE *)(v93 + 1) = v120;
                          if ( v118 )
                          {
                            v121 = v93 + v119 + 1;
                            v122 = v98;
                            do
                              *(_BYTE *)(++v122 - 1) = 48;
                            while ( v122 != v121 );
                            v98 += v118;
                          }
                        }
                        else
                        {
                          LODWORD(v156) = v91;
                          v159 = (void *)v50;
                          v160 = (char *)(v93 + 2);
                          v162 = v90;
                          LODWORD(v164) = v68;
                          v148 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v164);
                          v90 = v162;
                          v149 = *v148;
                          v98 = (unsigned __int64)v160;
                          v50 = (unsigned __int64)v159;
                          LOWORD(v91) = (_WORD)v156;
                          if ( !v149 )
                            v149 = 46;
                          *(_BYTE *)(v93 + 1) = v149;
                        }
                        goto LABEL_264;
                      }
LABEL_263:
                      v98 = v93 + 1;
                      goto LABEL_264;
                  }
                  if ( v97 != 65 )
                    goto LABEL_200;
                  *(_BYTE *)v93 = 48;
                  *(_QWORD *)&v164 = v93 + 2;
                  v136 = v12[72];
                  *(_BYTE *)(v93 + 2) = 48;
                  *(_BYTE *)(v93 + 1) = v136 + 23;
                  if ( v68 & 0x10 || (v137 = v93 + 3, v55) )
                  {
                    HIDWORD(v154) = v91;
                    v155 = v50;
                    v156 = v90;
                    v159 = (void *)v55;
                    LODWORD(v160) = v68;
                    v162 = (char *)(v93 + 4);
                    v144 = nl_langinfo(0x10000);
                    v145 = v159;
                    v137 = (__int64)v162;
                    v146 = *v144;
                    LOBYTE(v68) = (_BYTE)v160;
                    v90 = v156;
                    v50 = v155;
                    LOWORD(v91) = WORD2(v154);
                    if ( !v146 )
                      v146 = 46;
                    *(_BYTE *)(v93 + 3) = v146;
                    if ( v145 )
                    {
                      v147 = (char *)v137;
                      do
                        *(++v147 - 1) = 48;
                      while ( v147 != (char *)v145 + v93 + 4 );
                      v137 += (__int64)v145;
                    }
                  }
                  v138 = v12[72];
                  v98 = v137 + 3;
                  *(_WORD *)(v137 + 1) = 12331;
                  v93 = *(_QWORD *)&v164;
                  *(_BYTE *)v137 = v138 + 15;
LABEL_264:
                  LOWORD(v168) = v91;
                  v99 = v98 - (_QWORD)v90;
                  if ( v50 > v98 - (unsigned __int64)v90 )
                  {
                    v100 = v50 - v99;
                    v101 = v98 + v100;
                    v99 = v98 + v100 - (_QWORD)v90;
                    if ( v68 & 2 )
                    {
                      if ( v100 )
                      {
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v101 != v98 );
                      }
                    }
                    else if ( v68 & 0x20 && v93 )
                    {
                      if ( v93 >= v98 )
                      {
                        v93 = v98;
                      }
                      else
                      {
                        v102 = -1LL;
                        do
                        {
                          *(_BYTE *)(v101 + v102) = *(_BYTE *)(v98 + v102);
                          --v102;
                        }
                        while ( v102 != v93 - 1 - v98 );
                      }
                      if ( v100 )
                      {
                        v103 = v93 + v100;
                        do
                          *(_BYTE *)(++v93 - 1) = 48;
                        while ( v93 != v103 );
                      }
                    }
                    else
                    {
                      v113 = -1LL;
                      if ( (unsigned __int64)v90 < v98 )
                      {
                        do
                        {
                          *(_BYTE *)(v101 + v113) = *(_BYTE *)(v98 + v113);
                          --v113;
                        }
                        while ( &v90[-v98 - 1] != (char *)v113 );
                        v98 = (unsigned __int64)v90;
                      }
                      if ( v100 )
                      {
                        v114 = v98 + v100;
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v98 != v114 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v165 <= v99 )
                    goto LABEL_200;
                  v104 = v99 + v19;
                  v15 = v99 + v19;
                  if ( v11 - v19 <= v99 )
                  {
                    if ( __CFADD__(v99, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v104 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v104 )
                          goto LABEL_374;
                      }
                      else
                      {
                        if ( v104 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_281;
                        }
LABEL_374:
                        if ( v104 == -1LL )
                          goto LABEL_88;
                        v11 = v99 + v19;
                      }
LABEL_281:
                      if ( v14 && v14 != src )
                      {
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v105 = (char *)realloc(v14, v11);
                        if ( !v105 )
                          goto LABEL_88;
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        v14 = v105;
                      }
                      else
                      {
                        LOBYTE(v162) = v14 == src;
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v115 = (char *)malloc(v11);
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        if ( !v115 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v162 )
                        {
                          v116 = (char *)memcpy(v115, v14, v19);
                          v90 = (char *)v165;
                          v99 = *(_QWORD *)&v164;
                          v14 = v116;
                        }
                        else
                        {
                          v14 = v115;
                        }
                      }
                    }
                  }
                  v165 = v90;
                  memcpy(&v14[v19], v90, v99);
                  if ( v165 != &v178 )
                    free(v165);
                  goto LABEL_110;
                }
LABEL_376:
                v56 = 12LL;
                goto LABEL_190;
              }
            }
            v56 = 12LL;
            if ( v30 != 65 )
              v56 = 18LL;
            v55 = 0LL;
            if ( v30 != 65 )
              v55 = 6LL;
            goto LABEL_190;
          }
        }
        v31 = *((_DWORD *)v12 + 4);
        v32 = v163 + 1;
        *v163 = 37;
        if ( v31 & 1 )
        {
          v33 = v163;
          v163[1] = 39;
          v32 = v33 + 2;
        }
        if ( v31 & 2 )
          *v32++ = 45;
        if ( v31 & 4 )
          *v32++ = 43;
        if ( v31 & 8 )
          *v32++ = 32;
        if ( v31 & 0x10 )
          *v32++ = 35;
        if ( v31 & 0x40 )
          *v32++ = 73;
        if ( v31 & 0x20 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        if ( (unsigned int)v165 <= 0x10 )
        {
          v38 = 1LL << (char)v165;
          if ( (1LL << (char)v165) & 0x14180 )
            goto LABEL_125;
          if ( v38 & 0x1000 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( !(v38 & 0x600) )
              goto LABEL_62;
            *v32++ = 108;
LABEL_125:
            *v32++ = 108;
          }
        }
LABEL_62:
        v39 = v12[72];
        v32[1] = 0;
        *v32 = v39;
        v40 = *((_QWORD *)v12 + 5);
        if ( v40 != -1 )
        {
          v41 = &v27[32 * v40];
          if ( *(_DWORD *)v41 == 5 )
          {
            LODWORD(v162) = 1;
            v168 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v162) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v162;
          *(&v168 + (unsigned int)v162) = *((_DWORD *)v43 + 4);
          LODWORD(v162) = v44 + 1;
        }
        v45 = v19 + 2;
        if ( v19 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
        }
        else if ( v11 < v45 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 >= v45 )
              goto LABEL_73;
          }
          else if ( v45 <= 0xC )
          {
            v11 = 12LL;
LABEL_73:
            if ( v14 && v14 != src )
            {
              v46 = (char *)realloc(v14, v11);
              if ( v46 )
                goto LABEL_76;
LABEL_88:
              v57 = v14;
              *(_QWORD *)&v164 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v174 != &v177 )
                    free(v174);
                  if ( v171 != &v172 )
                    free(v171);
                  v14 = 0LL;
                  **(_DWORD **)&v164 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v164 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v164) = v14 == src;
            v95 = (char *)malloc(v11);
            v46 = v95;
            if ( !v95 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v164) )
              v46 = (char *)memcpy(v95, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v160 = v46;
            v47 = __errno_location();
            v48 = v160;
            v160 = v32;
            *(_QWORD *)&v164 = v47;
            LODWORD(v156) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v167 = -1;
              **(_DWORD **)&v164 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (_DWORD)v165 )
              {
                case 1:
                  v80 = (unsigned int)*((char *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v80 = *((unsigned __int8 *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v80 = (unsigned int)*((__int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v80 = *((unsigned __int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 0xD:
                case 0xE:
                  v80 = *((unsigned int *)v171 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v152 = &v167;
                      goto LABEL_153;
                    }
                    v151 = (int *)v80;
                    goto LABEL_210;
                  }
                  v153 = &v167;
                  v152 = (int *)v80;
                  break;
                case 7:
                case 8:
                case 9:
                case 0xA:
                case 0xF:
                case 0x10:
                case 0x11:
                  v71 = &v48[v19];
                  v72 = (int *)*((_QWORD *)v171 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v72, a5, &v167, v153);
LABEL_131:
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v151 = v72;
LABEL_210:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v168, a5, v169, v151);
LABEL_211:
                    v48 = (char *)v159;
LABEL_132:
                    v74 = v167;
                    if ( v167 < 0 )
                    {
LABEL_154:
                      if ( v160[1] )
                      {
                        v160[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v81 = **(_DWORD **)&v164;
                        if ( !**(_DWORD **)&v164 )
                        {
                          v81 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v81 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        **(_DWORD **)&v164 = v81;
                        return 0LL;
                      }
LABEL_136:
                      v167 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v164 = (_DWORD)v156;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        v14 = 0LL;
                        **(_DWORD **)&v164 = 75;
                        return v14;
                      }
                      v75 = (unsigned int)(v74 + 2);
                      v76 = __CFADD__(v19, v75);
                      v77 = v19 + v75;
                      if ( (v11 & 0x8000000000000000LL) != 0LL )
                      {
                        if ( v11 != -1LL )
                          goto LABEL_202;
                      }
                      else
                      {
                        if ( v76 )
                          goto LABEL_202;
                        if ( 2 * v11 >= v77 )
                          v77 = 2 * v11;
                        if ( v11 < v77 )
                        {
                          v11 *= 2LL;
                          if ( v11 < v77 )
                          {
                            if ( v77 == -1LL )
                            {
LABEL_202:
                              v57 = v48;
                              goto LABEL_89;
                            }
                            v11 = v77;
                          }
                          v78 = v48 == src;
                          if ( !v48 || v78 )
                          {
                            v159 = v48;
                            v94 = (char *)malloc(v11);
                            v48 = (char *)v159;
                            if ( !v94 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v94, v159, v19);
                            else
                              v48 = v94;
                          }
                          else
                          {
                            v159 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v159;
                            if ( !v79 )
                              goto LABEL_202;
                            v48 = v79;
                          }
                        }
                      }
                      continue;
                    }
LABEL_133:
                    if ( v74 < v49 && v48[v74 + v19] )
                      goto LABEL_200;
                    if ( v74 >= v73 )
                      goto LABEL_137;
                    goto LABEL_136;
                  }
                  v153 = &v167;
                  v152 = v72;
                  break;
                case 0xB:
                  v85 = *((_QWORD *)v12 + 10);
                  v86 = &v48[v19];
                  v159 = v48;
                  a5 = *((double *)v171 + 4 * v85 + 2);
                  if ( (_DWORD)v162 == 1 )
                  {
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, &v167, v153);
                  }
                  else
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, &v167, a5, v154, v155);
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, v169, &v167);
                  }
                  v48 = (char *)v159;
                  goto LABEL_132;
                case 0xC:
                  v82 = *((_QWORD *)v12 + 10);
                  v83 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 == 1 )
                  {
                    v84 = *((unsigned __int128 *)v171 + 2 * v82 + 1);
                    v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v84, v84 >> 64);
                    goto LABEL_211;
                  }
                  if ( (_DWORD)v162 != 2 )
                  {
                    v73 = __snprintf_chk(
                            v83,
                            v49,
                            1LL,
                            -1LL,
                            v163,
                            &v167,
                            a5,
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)),
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)) >> 64);
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v169, v150);
                  v48 = (char *)v159;
                  goto LABEL_132;
                default:
                  goto LABEL_409;
              }
              break;
            }
            v80 = v168;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v80, a5, v152, v153);
            v74 = v167;
            v48 = (char *)v159;
            if ( v167 < 0 )
              goto LABEL_154;
            goto LABEL_133;
          }
          if ( v19 != -3LL )
          {
            v11 = v19 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v46 = v14;
        goto LABEL_76;
      }
      switch ( v29 )
      {
        case 18:
          v15 = v19;
          **((_BYTE **)v28 + 2) = v19;
          break;
        case 19:
          v15 = v19;
          **((_WORD **)v28 + 2) = v19;
          break;
        case 20:
          v15 = v19;
          **((_DWORD **)v28 + 2) = v19;
          break;
        case 21:
        case 22:
          v15 = v19;
          **((_QWORD **)v28 + 2) = v19;
          break;
        default:
LABEL_409:
          abort();
          return result;
      }
LABEL_110:
      v13 = (char *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v161;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v108 = v19;
    v109 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v109 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v109 )
        {
LABEL_304:
          v110 = v14 == src;
          if ( !v14 || v110 )
          {
            v143 = (char *)malloc(v11);
            if ( !v143 )
              goto LABEL_88;
            if ( v108 && v110 )
              v14 = (char *)memcpy(v143, v14, v108);
            else
              v14 = v143;
          }
          else
          {
            v111 = (char *)realloc(v14, v11);
            if ( !v111 )
              goto LABEL_126;
            v14 = v111;
          }
          goto LABEL_308;
        }
      }
      else if ( v109 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_304;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_304;
    }
LABEL_308:
    v14[v108] = 0;
    if ( v11 > v109 && v14 != src )
    {
      v112 = (char *)realloc(v14, v109);
      if ( v112 )
        v14 = v112;
    }
    if ( ptr )
      free(ptr);
    if ( v174 != &v177 )
      free(v174);
    if ( v171 != &v172 )
      free(v171);
    *v158 = v108;
    return v14;
  }
  if ( v174 != &v177 )
    free(v174);
  if ( v171 != &v172 )
    free(v171);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

char *__fastcall sub_406410(void *a1, size_t *a2, char *a3, __int64 a4, double a5)
{
  char *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  _BYTE *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  char *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  char *v17; // rcx
  unsigned __int64 v18; // rax
  size_t v19; // r13
  bool v20; // dl
  char *v21; // rax
  char *v22; // rax
  void *v23; // rsp
  char *v24; // rax
  char v25; // r15
  __int64 v26; // rax
  char *v27; // r8
  long double *v28; // rdx
  int v29; // eax
  char v30; // al
  int v31; // eax
  char *v32; // r15
  _BYTE *v33; // rdi
  _BYTE *v34; // rsi
  _BYTE *v35; // rdx
  _BYTE *v36; // rsi
  _BYTE *v37; // rdx
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rax
  char *v41; // rax
  __int64 v42; // rax
  char *v43; // r8
  int v44; // eax
  unsigned __int64 v45; // rax
  char *v46; // r11
  int *v47; // rax
  char *v48; // r11
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r10
  char *v51; // rdx
  char *v52; // rcx
  __int64 v53; // rsi
  _DWORD *v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  void *v57; // r15
  char *result; // rax
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // er11
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  char *v71; // rdi
  int *v72; // r9
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  bool v76; // cf
  unsigned __int64 v77; // rax
  bool v78; // bl
  char *v79; // rax
  unsigned __int64 v80; // r9
  int v81; // ebx
  __int64 v82; // rax
  char *v83; // rdi
  unsigned __int128 v84; // fst7
  __int64 v85; // rax
  char *v86; // rdi
  unsigned __int64 v87; // rax
  void *v88; // rax
  char *v89; // rax
  char *v90; // rcx
  int v91; // er8
  __int16 v92; // ax
  unsigned __int64 v93; // r15
  char *v94; // rax
  char *v95; // rax
  char *v96; // rax
  char v97; // al
  unsigned __int64 v98; // r9
  size_t v99; // r8
  unsigned __int64 v100; // r10
  unsigned __int64 v101; // rdi
  __int64 v102; // rax
  unsigned __int64 v103; // r10
  unsigned __int64 v104; // rax
  char *v105; // rax
  __int64 v106; // rsi
  char v107; // al
  size_t v108; // r15
  size_t v109; // r14
  bool v110; // r13
  char *v111; // rax
  char *v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // r10
  char *v115; // rax
  char *v116; // rax
  char *v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rdx
  char v120; // al
  __int64 v121; // rdx
  unsigned __int64 v122; // rax
  char *v123; // rax
  __int64 v124; // rdx
  char v125; // al
  unsigned __int64 v126; // rax
  __int64 v127; // rsi
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // rax
  char *v131; // rsi
  char *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rsi
  unsigned __int64 v135; // rax
  char v136; // al
  __int64 v137; // rsi
  char v138; // al
  char *v139; // rax
  __int64 v140; // rdx
  char v141; // al
  __int64 v142; // rax
  char *v143; // rax
  char *v144; // rax
  void *v145; // rdx
  char v146; // al
  char *v147; // rax
  char *v148; // rax
  char v149; // al
  __int64 v150; // [rsp-8h] [rbp-718h]
  int *v151; // [rsp+8h] [rbp-708h]
  int *v152; // [rsp+10h] [rbp-700h]
  int *v153; // [rsp+18h] [rbp-6F8h]
  __int64 v154; // [rsp+20h] [rbp-6F0h]
  unsigned __int64 v155; // [rsp+28h] [rbp-6E8h]
  char *v156; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v158; // [rsp+40h] [rbp-6D0h]
  void *v159; // [rsp+48h] [rbp-6C8h]
  char *v160; // [rsp+50h] [rbp-6C0h]
  __int64 v161; // [rsp+58h] [rbp-6B8h]
  char *v162; // [rsp+60h] [rbp-6B0h]
  _BYTE *v163; // [rsp+68h] [rbp-6A8h]
  long double v164; // [rsp+70h] [rbp-6A0h]
  void *v165; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v167; // [rsp+94h] [rbp-67Ch]
  unsigned int v168; // [rsp+98h] [rbp-678h]
  unsigned int v169; // [rsp+9Ch] [rbp-674h]
  char v170; // [rsp+A0h] [rbp-670h]
  void *v171; // [rsp+A8h] [rbp-668h]
  __int64 v172; // [rsp+B0h] [rbp-660h]
  __int64 v173; // [rsp+190h] [rbp-580h]
  void *v174; // [rsp+198h] [rbp-578h]
  __int64 v175; // [rsp+1A0h] [rbp-570h]
  __int64 v176; // [rsp+1A8h] [rbp-568h]
  __int64 v177; // [rsp+1B0h] [rbp-560h]
  char v178; // [rsp+420h] [rbp-2F0h]

  v5 = a3;
  v6 = a4;
  src = a1;
  v158 = a2;
  if ( (int)sub_408150(a3, &v173, &v170) < 0 )
    return 0LL;
  if ( (int)sub_407F30(v6, &v170) >= 0 )
  {
    v7 = v175 + 7;
    if ( (unsigned __int64)(v175 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v176, v7);
    v8 = v176 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v163 = (_BYTE *)(((unsigned __int64)&v155 + 7) & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = malloc(v9);
      v163 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v158;
    v12 = (char *)v174;
    v13 = v5;
    v14 = (char *)src;
    v161 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v174;
    if ( *(char **)v174 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (char *)(v16 - v13);
    v18 = (unsigned __int64)&v17[v15];
    v19 = (size_t)&v17[v15];
    if ( __CFADD__(v17, v15) )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
      v19 = -1LL;
    }
    else if ( v11 < v18 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v18 )
        {
LABEL_28:
          v20 = v14 == src;
          if ( !v14 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v18 <= 0xC )
      {
        v11 = 12LL;
        v20 = v14 == src;
        if ( !v14 )
        {
LABEL_19:
          v162 = v13;
          LOBYTE(v164) = v20;
          v165 = v17;
          v21 = (char *)malloc(v11);
          v17 = (char *)v165;
          v13 = v162;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v164) )
          {
            *(_QWORD *)&v164 = v162;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = (char *)v165;
            v13 = *(char **)&v164;
            v14 = v22;
          }
          else
          {
            v14 = v21;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v20 )
        {
          *(_QWORD *)&v164 = v13;
          v165 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = (char *)v165;
          v13 = *(char **)&v164;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)&v17[v15];
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v173 != v161 )
    {
      v25 = v12[72];
      v26 = *((_QWORD *)v12 + 10);
      if ( v25 == 37 )
      {
        if ( v26 != -1 )
          goto LABEL_200;
        v59 = v19 + 1;
        v15 = v19 + 1;
        if ( v19 == -1LL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
          v15 = -1LL;
        }
        else if ( v11 < v59 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 < v59 )
              goto LABEL_239;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_239:
            if ( v19 == -2LL )
              goto LABEL_88;
            v11 = v19 + 1;
          }
LABEL_105:
          if ( v14 && v14 != src )
          {
            v60 = (char *)realloc(v14, v11);
            if ( v60 )
            {
              v14 = v60;
              goto LABEL_109;
            }
LABEL_126:
            v57 = v14;
            *(_QWORD *)&v164 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v165) = v14 == src;
          v96 = (char *)malloc(v11);
          if ( !v96 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v165 )
            v14 = (char *)memcpy(v96, v14, v19);
          else
            v14 = v96;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v171;
      v28 = (long double *)((char *)v171 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v165) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v165 == 12 )
        {
          _FST7 = v28[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v66 = (char *)*((_QWORD *)v12 + 3);
            v67 = (char *)*((_QWORD *)v12 + 4);
            v68 = *((_DWORD *)v12 + 4);
            if ( v66 == v67 )
            {
              v50 = 0LL;
            }
            else
            {
              v69 = *((_QWORD *)v12 + 5);
              if ( v69 == -1 )
              {
                v50 = 0LL;
                v165 = (void *)-1LL;
                while ( 1 )
                {
                  v127 = (__int64)(v66 + 1);
                  v128 = -1LL;
                  v129 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v128 = 10 * v50;
                  v76 = __CFADD__(v128, v129);
                  v50 = v128 + v129;
                  v66 = (char *)v127;
                  if ( v76 )
                  {
                    if ( v67 == (char *)v127 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v165;
                      goto LABEL_82;
                    }
                    while ( *(++v66 - 1) != 48 )
                    {
                      if ( v67 == v66 )
                        goto LABEL_81;
                    }
                    v50 = -1LL;
                  }
                  if ( v67 == v66 )
                    goto LABEL_82;
                }
              }
              v70 = (char *)v171 + 32 * v69;
              if ( *v70 != 5 )
                goto LABEL_200;
              v50 = (int)v70[4];
              if ( (v50 & 0x80000000) != 0LL )
              {
                v68 |= 2u;
                v50 = -(__int64)v50;
              }
            }
LABEL_82:
            v51 = (char *)*((_QWORD *)v12 + 6);
            v52 = (char *)*((_QWORD *)v12 + 7);
            if ( v51 != v52 )
            {
              v53 = *((_QWORD *)v12 + 8);
              if ( v53 == -1 )
              {
                v130 = (__int64)(v51 + 1);
                v55 = 0LL;
                if ( v52 != (char *)v130 )
                {
                  v131 = (char *)v130;
                  while ( 1 )
                  {
                    v132 = v131 + 1;
                    v133 = *v131 - 48;
                    v134 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v134 = 10 * v55;
                    v76 = __CFADD__(v134, v133);
                    v135 = v134 + v133;
                    v131 = v132;
                    v55 = v135;
                    if ( v76 )
                    {
                      if ( v52 == v132 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v131 = v132 + 1;
                        if ( *v132 == 48 )
                          break;
                        if ( v52 == v131 )
                          goto LABEL_88;
                        ++v132;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v131 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_376;
              }
              v54 = (char *)v171 + 32 * v53;
              if ( *v54 != 5 )
                goto LABEL_200;
              v55 = (int)v54[4];
              if ( (v55 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v55 )
                {
                  v56 = v55 + 12;
                  if ( v55 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_190:
                  v87 = v56;
                  if ( v50 >= v56 )
                    v87 = v50;
                  v76 = __CFADD__(v87, 1LL);
                  v88 = (void *)(v87 + 1);
                  v165 = v88;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v88 <= 0x2BC )
                  {
                    v90 = &v178;
                  }
                  else
                  {
                    v159 = (void *)v50;
                    v160 = (char *)v55;
                    LODWORD(v162) = v68;
                    v164 = _FST7;
                    if ( v88 == (void *)-1LL )
                      goto LABEL_88;
                    v89 = (char *)malloc((size_t)v88);
                    v68 = (int)v162;
                    _FST7 = v164;
                    v90 = v89;
                    v55 = (unsigned __int64)v160;
                    v50 = (unsigned __int64)v159;
                    if ( !v89 )
                      goto LABEL_88;
                  }
                  v91 = (unsigned __int16)v168;
                  LOBYTE(v92) = v168;
                  HIBYTE(v92) = BYTE1(v168) | 3;
                  LOWORD(v168) = v92;
                  __asm (" fxam ");
                  if ( v62 & 2 )
                  {
                    *v90 = 45;
                    _FST7 = -_FST7;
                    v93 = (unsigned __int64)(v90 + 1);
                  }
                  else if ( v68 & 4 )
                  {
                    v93 = (unsigned __int64)(v90 + 1);
                    *v90 = 43;
                  }
                  else
                  {
                    v93 = (unsigned __int64)v90;
                    if ( v68 & 8 )
                    {
                      v93 = (unsigned __int64)(v90 + 1);
                      *v90 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v98 = v93 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      *(_BYTE *)(v93 + 2) = 102;
                      *(_WORD *)v93 = 28265;
                    }
                    else
                    {
                      *(_BYTE *)(v93 + 2) = 70;
                      *(_WORD *)v93 = 20041;
                    }
                    v93 = 0LL;
                    goto LABEL_264;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v97 = v12[72] & 0xDF;
                  switch ( v97 )
                  {
                    case 70:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || v55 )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v123 = nl_langinfo(0x10000);
                        v124 = (__int64)v160;
                        v98 = *(_QWORD *)&v164;
                        v125 = *v123;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v125 )
                          v125 = 46;
                        *(_BYTE *)(v93 + 1) = v125;
                        if ( v124 )
                        {
                          v126 = v98;
                          do
                            *(_BYTE *)(++v126 - 1) = 48;
                          while ( v126 != v93 + v124 + 2 );
                          v98 += v124;
                        }
                        goto LABEL_264;
                      }
                      goto LABEL_263;
                    case 69:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || (v106 = v93 + 1, v55) )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v139 = nl_langinfo(0x10000);
                        v140 = (__int64)v160;
                        v106 = *(_QWORD *)&v164;
                        v141 = *v139;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v141 )
                          v141 = 46;
                        *(_BYTE *)(v93 + 1) = v141;
                        if ( v140 )
                        {
                          v142 = v106;
                          do
                            *(_BYTE *)(++v142 - 1) = 48;
                          while ( v142 != v93 + v140 + 2 );
                          v106 += v140;
                        }
                      }
                      v107 = v12[72];
                      v98 = v106 + 4;
                      *(_BYTE *)(v106 + 3) = 48;
                      *(_BYTE *)v106 = v107;
                      *(_WORD *)(v106 + 1) = 12331;
                      goto LABEL_264;
                    case 71:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v154) = v91;
                          v155 = v50;
                          v156 = (char *)(v93 + 2);
                          v159 = v90;
                          LODWORD(v160) = v68;
                          v162 = (char *)v55;
                          *(_QWORD *)&v164 = v55 - 1;
                          v117 = nl_langinfo(0x10000);
                          v118 = *(_QWORD *)&v164;
                          v119 = (__int64)v162;
                          v120 = *v117;
                          LOBYTE(v68) = (_BYTE)v160;
                          v90 = (char *)v159;
                          v98 = (unsigned __int64)v156;
                          v50 = v155;
                          LOWORD(v91) = WORD2(v154);
                          if ( !v120 )
                            v120 = 46;
                          *(_BYTE *)(v93 + 1) = v120;
                          if ( v118 )
                          {
                            v121 = v93 + v119 + 1;
                            v122 = v98;
                            do
                              *(_BYTE *)(++v122 - 1) = 48;
                            while ( v122 != v121 );
                            v98 += v118;
                          }
                        }
                        else
                        {
                          LODWORD(v156) = v91;
                          v159 = (void *)v50;
                          v160 = (char *)(v93 + 2);
                          v162 = v90;
                          LODWORD(v164) = v68;
                          v148 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v164);
                          v90 = v162;
                          v149 = *v148;
                          v98 = (unsigned __int64)v160;
                          v50 = (unsigned __int64)v159;
                          LOWORD(v91) = (_WORD)v156;
                          if ( !v149 )
                            v149 = 46;
                          *(_BYTE *)(v93 + 1) = v149;
                        }
                        goto LABEL_264;
                      }
LABEL_263:
                      v98 = v93 + 1;
                      goto LABEL_264;
                  }
                  if ( v97 != 65 )
                    goto LABEL_200;
                  *(_BYTE *)v93 = 48;
                  *(_QWORD *)&v164 = v93 + 2;
                  v136 = v12[72];
                  *(_BYTE *)(v93 + 2) = 48;
                  *(_BYTE *)(v93 + 1) = v136 + 23;
                  if ( v68 & 0x10 || (v137 = v93 + 3, v55) )
                  {
                    HIDWORD(v154) = v91;
                    v155 = v50;
                    v156 = v90;
                    v159 = (void *)v55;
                    LODWORD(v160) = v68;
                    v162 = (char *)(v93 + 4);
                    v144 = nl_langinfo(0x10000);
                    v145 = v159;
                    v137 = (__int64)v162;
                    v146 = *v144;
                    LOBYTE(v68) = (_BYTE)v160;
                    v90 = v156;
                    v50 = v155;
                    LOWORD(v91) = WORD2(v154);
                    if ( !v146 )
                      v146 = 46;
                    *(_BYTE *)(v93 + 3) = v146;
                    if ( v145 )
                    {
                      v147 = (char *)v137;
                      do
                        *(++v147 - 1) = 48;
                      while ( v147 != (char *)v145 + v93 + 4 );
                      v137 += (__int64)v145;
                    }
                  }
                  v138 = v12[72];
                  v98 = v137 + 3;
                  *(_WORD *)(v137 + 1) = 12331;
                  v93 = *(_QWORD *)&v164;
                  *(_BYTE *)v137 = v138 + 15;
LABEL_264:
                  LOWORD(v168) = v91;
                  v99 = v98 - (_QWORD)v90;
                  if ( v50 > v98 - (unsigned __int64)v90 )
                  {
                    v100 = v50 - v99;
                    v101 = v98 + v100;
                    v99 = v98 + v100 - (_QWORD)v90;
                    if ( v68 & 2 )
                    {
                      if ( v100 )
                      {
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v101 != v98 );
                      }
                    }
                    else if ( v68 & 0x20 && v93 )
                    {
                      if ( v93 >= v98 )
                      {
                        v93 = v98;
                      }
                      else
                      {
                        v102 = -1LL;
                        do
                        {
                          *(_BYTE *)(v101 + v102) = *(_BYTE *)(v98 + v102);
                          --v102;
                        }
                        while ( v102 != v93 - 1 - v98 );
                      }
                      if ( v100 )
                      {
                        v103 = v93 + v100;
                        do
                          *(_BYTE *)(++v93 - 1) = 48;
                        while ( v93 != v103 );
                      }
                    }
                    else
                    {
                      v113 = -1LL;
                      if ( (unsigned __int64)v90 < v98 )
                      {
                        do
                        {
                          *(_BYTE *)(v101 + v113) = *(_BYTE *)(v98 + v113);
                          --v113;
                        }
                        while ( &v90[-v98 - 1] != (char *)v113 );
                        v98 = (unsigned __int64)v90;
                      }
                      if ( v100 )
                      {
                        v114 = v98 + v100;
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v98 != v114 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v165 <= v99 )
                    goto LABEL_200;
                  v104 = v99 + v19;
                  v15 = v99 + v19;
                  if ( v11 - v19 <= v99 )
                  {
                    if ( __CFADD__(v99, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v104 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v104 )
                          goto LABEL_374;
                      }
                      else
                      {
                        if ( v104 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_281;
                        }
LABEL_374:
                        if ( v104 == -1LL )
                          goto LABEL_88;
                        v11 = v99 + v19;
                      }
LABEL_281:
                      if ( v14 && v14 != src )
                      {
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v105 = (char *)realloc(v14, v11);
                        if ( !v105 )
                          goto LABEL_88;
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        v14 = v105;
                      }
                      else
                      {
                        LOBYTE(v162) = v14 == src;
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v115 = (char *)malloc(v11);
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        if ( !v115 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v162 )
                        {
                          v116 = (char *)memcpy(v115, v14, v19);
                          v90 = (char *)v165;
                          v99 = *(_QWORD *)&v164;
                          v14 = v116;
                        }
                        else
                        {
                          v14 = v115;
                        }
                      }
                    }
                  }
                  v165 = v90;
                  memcpy(&v14[v19], v90, v99);
                  if ( v165 != &v178 )
                    free(v165);
                  goto LABEL_110;
                }
LABEL_376:
                v56 = 12LL;
                goto LABEL_190;
              }
            }
            v56 = 12LL;
            if ( v30 != 65 )
              v56 = 18LL;
            v55 = 0LL;
            if ( v30 != 65 )
              v55 = 6LL;
            goto LABEL_190;
          }
        }
        v31 = *((_DWORD *)v12 + 4);
        v32 = v163 + 1;
        *v163 = 37;
        if ( v31 & 1 )
        {
          v33 = v163;
          v163[1] = 39;
          v32 = v33 + 2;
        }
        if ( v31 & 2 )
          *v32++ = 45;
        if ( v31 & 4 )
          *v32++ = 43;
        if ( v31 & 8 )
          *v32++ = 32;
        if ( v31 & 0x10 )
          *v32++ = 35;
        if ( v31 & 0x40 )
          *v32++ = 73;
        if ( v31 & 0x20 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        if ( (unsigned int)v165 <= 0x10 )
        {
          v38 = 1LL << (char)v165;
          if ( (1LL << (char)v165) & 0x14180 )
            goto LABEL_125;
          if ( v38 & 0x1000 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( !(v38 & 0x600) )
              goto LABEL_62;
            *v32++ = 108;
LABEL_125:
            *v32++ = 108;
          }
        }
LABEL_62:
        v39 = v12[72];
        v32[1] = 0;
        *v32 = v39;
        v40 = *((_QWORD *)v12 + 5);
        if ( v40 != -1 )
        {
          v41 = &v27[32 * v40];
          if ( *(_DWORD *)v41 == 5 )
          {
            LODWORD(v162) = 1;
            v168 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v162) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v162;
          *(&v168 + (unsigned int)v162) = *((_DWORD *)v43 + 4);
          LODWORD(v162) = v44 + 1;
        }
        v45 = v19 + 2;
        if ( v19 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
        }
        else if ( v11 < v45 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 >= v45 )
              goto LABEL_73;
          }
          else if ( v45 <= 0xC )
          {
            v11 = 12LL;
LABEL_73:
            if ( v14 && v14 != src )
            {
              v46 = (char *)realloc(v14, v11);
              if ( v46 )
                goto LABEL_76;
LABEL_88:
              v57 = v14;
              *(_QWORD *)&v164 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v174 != &v177 )
                    free(v174);
                  if ( v171 != &v172 )
                    free(v171);
                  v14 = 0LL;
                  **(_DWORD **)&v164 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v164 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v164) = v14 == src;
            v95 = (char *)malloc(v11);
            v46 = v95;
            if ( !v95 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v164) )
              v46 = (char *)memcpy(v95, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v160 = v46;
            v47 = __errno_location();
            v48 = v160;
            v160 = v32;
            *(_QWORD *)&v164 = v47;
            LODWORD(v156) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v167 = -1;
              **(_DWORD **)&v164 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (_DWORD)v165 )
              {
                case 1:
                  v80 = (unsigned int)*((char *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v80 = *((unsigned __int8 *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v80 = (unsigned int)*((__int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v80 = *((unsigned __int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 0xD:
                case 0xE:
                  v80 = *((unsigned int *)v171 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v152 = &v167;
                      goto LABEL_153;
                    }
                    v151 = (int *)v80;
                    goto LABEL_210;
                  }
                  v153 = &v167;
                  v152 = (int *)v80;
                  break;
                case 7:
                case 8:
                case 9:
                case 0xA:
                case 0xF:
                case 0x10:
                case 0x11:
                  v71 = &v48[v19];
                  v72 = (int *)*((_QWORD *)v171 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v72, a5, &v167, v153);
LABEL_131:
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v151 = v72;
LABEL_210:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v168, a5, v169, v151);
LABEL_211:
                    v48 = (char *)v159;
LABEL_132:
                    v74 = v167;
                    if ( v167 < 0 )
                    {
LABEL_154:
                      if ( v160[1] )
                      {
                        v160[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v81 = **(_DWORD **)&v164;
                        if ( !**(_DWORD **)&v164 )
                        {
                          v81 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v81 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        **(_DWORD **)&v164 = v81;
                        return 0LL;
                      }
LABEL_136:
                      v167 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v164 = (_DWORD)v156;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        v14 = 0LL;
                        **(_DWORD **)&v164 = 75;
                        return v14;
                      }
                      v75 = (unsigned int)(v74 + 2);
                      v76 = __CFADD__(v19, v75);
                      v77 = v19 + v75;
                      if ( (v11 & 0x8000000000000000LL) != 0LL )
                      {
                        if ( v11 != -1LL )
                          goto LABEL_202;
                      }
                      else
                      {
                        if ( v76 )
                          goto LABEL_202;
                        if ( 2 * v11 >= v77 )
                          v77 = 2 * v11;
                        if ( v11 < v77 )
                        {
                          v11 *= 2LL;
                          if ( v11 < v77 )
                          {
                            if ( v77 == -1LL )
                            {
LABEL_202:
                              v57 = v48;
                              goto LABEL_89;
                            }
                            v11 = v77;
                          }
                          v78 = v48 == src;
                          if ( !v48 || v78 )
                          {
                            v159 = v48;
                            v94 = (char *)malloc(v11);
                            v48 = (char *)v159;
                            if ( !v94 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v94, v159, v19);
                            else
                              v48 = v94;
                          }
                          else
                          {
                            v159 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v159;
                            if ( !v79 )
                              goto LABEL_202;
                            v48 = v79;
                          }
                        }
                      }
                      continue;
                    }
LABEL_133:
                    if ( v74 < v49 && v48[v74 + v19] )
                      goto LABEL_200;
                    if ( v74 >= v73 )
                      goto LABEL_137;
                    goto LABEL_136;
                  }
                  v153 = &v167;
                  v152 = v72;
                  break;
                case 0xB:
                  v85 = *((_QWORD *)v12 + 10);
                  v86 = &v48[v19];
                  v159 = v48;
                  a5 = *((double *)v171 + 4 * v85 + 2);
                  if ( (_DWORD)v162 == 1 )
                  {
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, &v167, v153);
                  }
                  else
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, &v167, a5, v154, v155);
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, v169, &v167);
                  }
                  v48 = (char *)v159;
                  goto LABEL_132;
                case 0xC:
                  v82 = *((_QWORD *)v12 + 10);
                  v83 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 == 1 )
                  {
                    v84 = *((unsigned __int128 *)v171 + 2 * v82 + 1);
                    v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v84, v84 >> 64);
                    goto LABEL_211;
                  }
                  if ( (_DWORD)v162 != 2 )
                  {
                    v73 = __snprintf_chk(
                            v83,
                            v49,
                            1LL,
                            -1LL,
                            v163,
                            &v167,
                            a5,
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)),
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)) >> 64);
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v169, v150);
                  v48 = (char *)v159;
                  goto LABEL_132;
                default:
                  goto LABEL_409;
              }
              break;
            }
            v80 = v168;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v80, a5, v152, v153);
            v74 = v167;
            v48 = (char *)v159;
            if ( v167 < 0 )
              goto LABEL_154;
            goto LABEL_133;
          }
          if ( v19 != -3LL )
          {
            v11 = v19 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v46 = v14;
        goto LABEL_76;
      }
      switch ( v29 )
      {
        case 18:
          v15 = v19;
          **((_BYTE **)v28 + 2) = v19;
          break;
        case 19:
          v15 = v19;
          **((_WORD **)v28 + 2) = v19;
          break;
        case 20:
          v15 = v19;
          **((_DWORD **)v28 + 2) = v19;
          break;
        case 21:
        case 22:
          v15 = v19;
          **((_QWORD **)v28 + 2) = v19;
          break;
        default:
LABEL_409:
          abort();
          return result;
      }
LABEL_110:
      v13 = (char *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v161;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v108 = v19;
    v109 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v109 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v109 )
        {
LABEL_304:
          v110 = v14 == src;
          if ( !v14 || v110 )
          {
            v143 = (char *)malloc(v11);
            if ( !v143 )
              goto LABEL_88;
            if ( v108 && v110 )
              v14 = (char *)memcpy(v143, v14, v108);
            else
              v14 = v143;
          }
          else
          {
            v111 = (char *)realloc(v14, v11);
            if ( !v111 )
              goto LABEL_126;
            v14 = v111;
          }
          goto LABEL_308;
        }
      }
      else if ( v109 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_304;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_304;
    }
LABEL_308:
    v14[v108] = 0;
    if ( v11 > v109 && v14 != src )
    {
      v112 = (char *)realloc(v14, v109);
      if ( v112 )
        v14 = v112;
    }
    if ( ptr )
      free(ptr);
    if ( v174 != &v177 )
      free(v174);
    if ( v171 != &v172 )
      free(v171);
    *v158 = v108;
    return v14;
  }
  if ( v174 != &v177 )
    free(v174);
  if ( v171 != &v172 )
    free(v171);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

__int64 __fastcall sub_407F30(int *a1, unsigned __int64 *a2)
{
  unsigned int *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // ecx
  _QWORD *v5; // r10
  unsigned int v7; // ecx
  unsigned int *v8; // r10
  unsigned int v9; // ecx
  _DWORD *v10; // r10
  unsigned int v11; // ecx
  _DWORD *v12; // r10
  unsigned int v13; // ecx
  _QWORD *v14; // r10
  long double *v15; // rcx
  unsigned int v16; // ecx
  void **v17; // r10
  void *v18; // rcx
  unsigned int v19; // ecx
  const char **v20; // r10
  const char *v21; // rcx

  v2 = (unsigned int *)a2[1];
  if ( *a2 )
  {
    v3 = 0LL;
    while ( 2 )
    {
      switch ( (unsigned __int64)*v2 )
      {
        case 1uLL:
        case 2uLL:
          v11 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v12 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v12 + 2;
          }
          else
          {
            v12 = (_DWORD *)(*((_QWORD *)a1 + 2) + v11);
            *a1 = v11 + 8;
          }
          *((_BYTE *)v2 + 16) = *v12;
          goto LABEL_7;
        case 3uLL:
        case 4uLL:
          v9 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v10 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v10 + 2;
          }
          else
          {
            v10 = (_DWORD *)(*((_QWORD *)a1 + 2) + v9);
            *a1 = v9 + 8;
          }
          *((_WORD *)v2 + 8) = *v10;
          goto LABEL_7;
        case 5uLL:
        case 6uLL:
        case 0xDuLL:
        case 0xEuLL:
          v7 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v8 = (unsigned int *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v8 + 2;
          }
          else
          {
            v8 = (unsigned int *)(*((_QWORD *)a1 + 2) + v7);
            *a1 = v7 + 8;
          }
          v2[4] = *v8;
          goto LABEL_7;
        case 7uLL:
        case 8uLL:
        case 9uLL:
        case 0xAuLL:
        case 0x11uLL:
        case 0x12uLL:
        case 0x13uLL:
        case 0x14uLL:
        case 0x15uLL:
        case 0x16uLL:
          v4 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v5 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v5 + 1;
          }
          else
          {
            v5 = (_QWORD *)(*((_QWORD *)a1 + 2) + v4);
            *a1 = v4 + 8;
          }
          *((_QWORD *)v2 + 2) = *v5;
          goto LABEL_7;
        case 0xBuLL:
          v13 = a1[1];
          if ( v13 > 0xAF )
          {
            v14 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v14 + 1;
          }
          else
          {
            v14 = (_QWORD *)(*((_QWORD *)a1 + 2) + v13);
            a1[1] = v13 + 16;
          }
          *((_QWORD *)v2 + 2) = *v14;
          goto LABEL_7;
        case 0xCuLL:
          v15 = (long double *)((*((_QWORD *)a1 + 1) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
          *((_QWORD *)a1 + 1) = v15 + 1;
          *((long double *)v2 + 1) = *v15;
          goto LABEL_7;
        case 0xFuLL:
          v19 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v20 = (const char **)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v20 + 1;
          }
          else
          {
            v20 = (const char **)(*((_QWORD *)a1 + 2) + v19);
            *a1 = v19 + 8;
          }
          v21 = *v20;
          if ( !*v20 )
            v21 = "(NULL)";
          *((_QWORD *)v2 + 2) = v21;
          goto LABEL_7;
        case 0x10uLL:
          v16 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v17 = (void **)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v17 + 1;
          }
          else
          {
            v17 = (void **)(*((_QWORD *)a1 + 2) + v16);
            *a1 = v16 + 8;
          }
          v18 = *v17;
          if ( !*v17 )
            v18 = &unk_40B090;
          *((_QWORD *)v2 + 2) = v18;
LABEL_7:
          ++v3;
          v2 += 8;
          if ( *a2 <= v3 )
            return 0LL;
          continue;
        default:
          return 0xFFFFFFFFLL;
      }
    }
  }
  return 0LL;
}

__int64 __fastcall sub_408150(char *a1, _QWORD *a2, unsigned __int64 *a3)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  unsigned __int64 *v5; // r15
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // r13
  char *v9; // rbp
  __int64 result; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // r12
  char v13; // bl
  char *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v18; // rbx
  _DWORD *v19; // r13
  unsigned __int64 v20; // rdx
  _DWORD *v21; // rax
  bool v22; // zf
  __int64 v23; // rax
  _BYTE *v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  _DWORD *v28; // rax
  int v29; // ecx
  unsigned __int64 v30; // rax
  int *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  void *v34; // r12
  _QWORD *v35; // rax
  _BYTE *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r9
  _DWORD *v39; // rax
  _DWORD *v40; // rsi
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _BYTE *v43; // rdx
  unsigned __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rax
  char *v47; // rdi
  bool v48; // cf
  unsigned __int64 v49; // rdx
  unsigned __int8 v50; // bl
  void *v51; // rdi
  unsigned __int64 v52; // r9
  _DWORD *v53; // rax
  char *i; // rcx
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  const void *v57; // rsi
  void *v58; // rdi
  unsigned __int64 v59; // r9
  _DWORD *v60; // rax
  _DWORD *v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rdx
  char *v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int8 v67; // si
  _BYTE *v68; // rdx
  unsigned __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rax
  _BYTE *v72; // rdi
  unsigned __int64 v73; // rdx
  unsigned __int8 v74; // bl
  _DWORD *v75; // rax
  _DWORD *src; // [rsp+8h] [rbp-80h]
  _QWORD *srca; // [rsp+8h] [rbp-80h]
  _QWORD *srcb; // [rsp+8h] [rbp-80h]
  unsigned __int64 v79; // [rsp+10h] [rbp-78h]
  unsigned __int64 v80; // [rsp+18h] [rbp-70h]
  unsigned __int64 v81; // [rsp+20h] [rbp-68h]
  __int64 v82; // [rsp+28h] [rbp-60h]
  unsigned __int64 v83; // [rsp+30h] [rbp-58h]
  char *v84; // [rsp+30h] [rbp-58h]
  unsigned __int64 v85; // [rsp+30h] [rbp-58h]
  int v86; // [rsp+30h] [rbp-58h]
  int v87; // [rsp+30h] [rbp-58h]
  _BYTE *v88; // [rsp+30h] [rbp-58h]
  char *v89; // [rsp+30h] [rbp-58h]
  _BYTE *v90; // [rsp+30h] [rbp-58h]
  _QWORD *v91; // [rsp+38h] [rbp-50h]
  unsigned __int64 v92; // [rsp+38h] [rbp-50h]
  _QWORD *v93; // [rsp+38h] [rbp-50h]
  unsigned __int64 v94; // [rsp+38h] [rbp-50h]
  unsigned __int64 v95; // [rsp+38h] [rbp-50h]
  unsigned __int64 v96; // [rsp+38h] [rbp-50h]
  unsigned __int64 v97; // [rsp+38h] [rbp-50h]
  unsigned __int64 v98; // [rsp+38h] [rbp-50h]
  unsigned __int64 v99; // [rsp+40h] [rbp-48h]
  unsigned __int64 v100; // [rsp+40h] [rbp-48h]
  unsigned __int64 v101; // [rsp+40h] [rbp-48h]
  unsigned __int64 v102; // [rsp+40h] [rbp-48h]
  unsigned __int64 v103; // [rsp+40h] [rbp-48h]
  unsigned __int64 v104; // [rsp+40h] [rbp-48h]
  _QWORD *v105; // [rsp+48h] [rbp-40h]
  _QWORD *v106; // [rsp+48h] [rbp-40h]
  _QWORD *v107; // [rsp+48h] [rbp-40h]
  _QWORD *v108; // [rsp+48h] [rbp-40h]
  _QWORD *v109; // [rsp+48h] [rbp-40h]
  _QWORD *v110; // [rsp+48h] [rbp-40h]

  v3 = a2 + 4;
  v4 = a2;
  v5 = a3;
  v6 = 7LL;
  v7 = 7LL;
  v8 = 0LL;
  *a2 = 0LL;
  a2[1] = a2 + 4;
  v82 = (__int64)(a2 + 4);
  *a3 = 0LL;
  src = a3 + 2;
  a3[1] = (unsigned __int64)(a3 + 2);
  v80 = 0LL;
  v79 = 0LL;
  v81 = 0LL;
  while ( 1 )
  {
    if ( !*a1 )
    {
      v3[11 * v8] = a1;
      v4[2] = v79;
      v4[3] = v80;
      return 0LL;
    }
    v9 = a1 + 1;
    if ( *a1 == 37 )
      break;
LABEL_3:
    a1 = v9;
  }
  v11 = -1LL;
  v12 = (__int64)&v3[11 * v8];
  *(_QWORD *)v12 = a1;
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_QWORD *)(v12 + 32) = 0LL;
  *(_QWORD *)(v12 + 40) = -1LL;
  *(_QWORD *)(v12 + 48) = 0LL;
  *(_QWORD *)(v12 + 56) = 0LL;
  *(_QWORD *)(v12 + 64) = -1LL;
  *(_QWORD *)(v12 + 80) = -1LL;
  v13 = a1[1];
  if ( (unsigned __int8)(v13 - 48) > 9u )
    goto LABEL_17;
  v36 = a1 + 1;
  do
    ++v36;
  while ( (unsigned __int8)(*v36 - 48) <= 9u );
  if ( *v36 != 36 )
  {
    v11 = -1LL;
    goto LABEL_17;
  }
  v62 = 0LL;
  do
  {
    v63 = -1LL;
    v64 = v13 - 48;
    if ( v62 <= 0x1999999999999999LL )
      v63 = 10 * v62;
    v65 = v9;
    while ( 1 )
    {
      v13 = v9[1];
      v48 = __CFADD__(v63, v64);
      v66 = v63 + v64;
      v62 = v66;
      ++v9;
      v67 = v13 - 48;
      if ( !v48 )
        break;
      if ( v67 > 9u )
        goto LABEL_131;
      v63 = -1LL;
      v65 = v9;
      v64 = v13 - 48;
    }
  }
  while ( v67 <= 9u );
  v11 = v66 - 1;
  if ( v66 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_131;
  v9 = v65 + 2;
  v13 = v65[2];
  while ( 1 )
  {
LABEL_17:
    v14 = v9 + 1;
    switch ( v13 )
    {
      case 39:
        *(_DWORD *)(v12 + 16) |= 1u;
        goto LABEL_16;
      case 45:
        *(_DWORD *)(v12 + 16) |= 2u;
        goto LABEL_16;
      case 43:
        *(_DWORD *)(v12 + 16) |= 4u;
        goto LABEL_16;
      case 32:
        *(_DWORD *)(v12 + 16) |= 8u;
        goto LABEL_16;
      case 35:
        *(_DWORD *)(v12 + 16) |= 0x10u;
        goto LABEL_16;
    }
    if ( v13 != 48 )
      break;
    *(_DWORD *)(v12 + 16) |= 0x20u;
LABEL_16:
    v13 = *v14;
    ++v9;
  }
  if ( v13 == 73 )
  {
    *(_DWORD *)(v12 + 16) |= 0x40u;
    goto LABEL_16;
  }
  if ( v13 == 42 )
  {
    v16 = 1LL;
    *(_QWORD *)(v12 + 24) = v9;
    *(_QWORD *)(v12 + 32) = v14;
    if ( v79 )
      v16 = v79;
    v79 = v16;
    v17 = v9[1];
    if ( (unsigned __int8)(v9[1] - 48) > 9u )
      goto LABEL_215;
    v43 = v9 + 1;
    do
      ++v43;
    while ( (unsigned __int8)(*v43 - 48) <= 9u );
    if ( *v43 != 36 )
    {
LABEL_215:
      v18 = *(_QWORD *)(v12 + 40);
      if ( v18 == -1LL )
      {
        *(_QWORD *)(v12 + 40) = v81;
        if ( v81 == -1LL )
          goto LABEL_131;
        v18 = v81++;
      }
    }
    else
    {
      v44 = 0LL;
      do
      {
        v45 = -1LL;
        v46 = v17 - 48;
        if ( v44 <= 0x1999999999999999LL )
          v45 = 10 * v44;
        v47 = v14;
        while ( 1 )
        {
          v48 = __CFADD__(v46, v45);
          v49 = v46 + v45;
          v17 = v14[1];
          v44 = v49;
          ++v14;
          v50 = v17 - 48;
          if ( !v48 )
            break;
          if ( v50 > 9u )
            goto LABEL_131;
          v45 = -1LL;
          v47 = v14;
          v46 = v17 - 48;
        }
      }
      while ( v50 <= 9u );
      v18 = v49 - 1;
      if ( v49 - 1 > 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_131;
      *(_QWORD *)(v12 + 40) = v18;
      v14 = v47 + 2;
    }
    v19 = (_DWORD *)v5[1];
    if ( v6 > v18 )
    {
      v20 = *v5;
LABEL_43:
      if ( v20 <= v18 )
      {
        do
          v19[8 * ++v20 - 8] = 0;
        while ( v20 <= v18 );
        *v5 = v20;
      }
      v21 = &v19[8 * v18];
      if ( *v21 )
      {
        if ( *v21 == 5 )
        {
          v13 = *v14;
          v9 = v14++;
          goto LABEL_26;
        }
        goto LABEL_132;
      }
      *v21 = 5;
      v13 = *v14;
      v9 = v14++;
      if ( v13 != 46 )
        goto LABEL_27;
LABEL_48:
      v22 = v9[1] == 42;
      *(_QWORD *)(v12 + 48) = v9;
      if ( !v22 )
      {
        if ( (unsigned __int8)(v9[1] - 48) > 9u )
        {
          v9 = v14;
          v37 = 1LL;
        }
        else
        {
          do
            ++v14;
          while ( (unsigned __int8)(*v14 - 48) <= 9u );
          v37 = v14 - v9;
          v9 = v14;
        }
        *(_QWORD *)(v12 + 56) = v14;
        v13 = *v14;
        if ( v80 >= v37 )
          v37 = v80;
        v80 = v37;
        goto LABEL_27;
      }
      v23 = 2LL;
      v24 = v9 + 2;
      *(_QWORD *)(v12 + 56) = v9 + 2;
      if ( v80 >= 2 )
        v23 = v80;
      v80 = v23;
      v25 = v9[2];
      if ( (unsigned __int8)(v9[2] - 48) > 9u )
        goto LABEL_216;
      v68 = v9 + 2;
      do
        ++v68;
      while ( (unsigned __int8)(*v68 - 48) <= 9u );
      if ( *v68 != 36 )
      {
LABEL_216:
        v26 = *(_QWORD *)(v12 + 64);
        if ( v26 != -1LL )
          goto LABEL_53;
        *(_QWORD *)(v12 + 64) = v81;
        if ( v81 != -1LL )
        {
          v26 = v81++;
          goto LABEL_53;
        }
      }
      else
      {
        v69 = 0LL;
        do
        {
          v70 = -1LL;
          v71 = v25 - 48;
          if ( v69 <= 0x1999999999999999LL )
            v70 = 10 * v69;
          v72 = v24;
          while ( 1 )
          {
            v48 = __CFADD__(v71, v70);
            v73 = v71 + v70;
            v25 = (char)*++v24;
            v69 = v73;
            v74 = v25 - 48;
            if ( !v48 )
              break;
            if ( v74 > 9u )
              goto LABEL_131;
            v70 = -1LL;
            v72 = v24;
            v71 = v25 - 48;
          }
        }
        while ( v74 <= 9u );
        v26 = v73 - 1;
        if ( v73 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *(_QWORD *)(v12 + 64) = v26;
          v24 = v72 + 2;
LABEL_53:
          v19 = (_DWORD *)v5[1];
          if ( v6 > v26 )
          {
            v27 = *v5;
            goto LABEL_55;
          }
          v59 = 2 * v6;
          if ( v59 <= v26 )
            v59 = v26 + 1;
          if ( v59 <= 0x7FFFFFFFFFFFFFFLL )
          {
            v108 = v4;
            v102 = v59;
            v96 = v7;
            v88 = v24;
            if ( src == v19 )
            {
              v75 = malloc(32 * v59);
              v24 = v88;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v75 )
                goto LABEL_163;
              v27 = *v5;
              v40 = src;
              v19 = v75;
            }
            else
            {
              v60 = realloc(v19, 32 * v59);
              v40 = (_DWORD *)v5[1];
              v24 = v88;
              v19 = v60;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v60 )
                goto LABEL_161;
              v27 = *v5;
              if ( src != v40 )
                goto LABEL_172;
            }
            v110 = v4;
            v104 = v6;
            v98 = v7;
            v90 = v24;
            memcpy(v19, v40, 32 * v27);
            v27 = *v5;
            v4 = v110;
            v6 = v104;
            v7 = v98;
            v24 = v90;
LABEL_172:
            v5[1] = (unsigned __int64)v19;
LABEL_55:
            if ( v27 <= v26 )
            {
              do
                v19[8 * ++v27 - 8] = 0;
              while ( v27 <= v26 );
              *v5 = v27;
            }
            v28 = &v19[8 * v26];
            if ( !*v28 )
            {
              *v28 = 5;
              v9 = v24;
              v13 = *v24;
              goto LABEL_27;
            }
            if ( *v28 == 5 )
            {
              v13 = *v24;
              v9 = v24;
              goto LABEL_27;
            }
            goto LABEL_132;
          }
LABEL_160:
          v40 = v19;
          goto LABEL_161;
        }
      }
LABEL_131:
      v19 = (_DWORD *)v5[1];
LABEL_132:
      if ( src != v19 )
      {
        srca = v4;
        free(v19);
        v4 = srca;
      }
      v51 = (void *)v4[1];
      if ( (void *)v82 != v51 )
        free(v51);
      *__errno_location() = 22;
      return 0xFFFFFFFFLL;
    }
    v38 = 2 * v6;
    if ( v38 <= v18 )
      v38 = v18 + 1;
    if ( v38 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_160;
    v105 = v4;
    v99 = v38;
    v92 = v7;
    v84 = v14;
    if ( src == v19 )
    {
      v61 = malloc(32 * v38);
      v14 = v84;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v61 )
        goto LABEL_163;
      v20 = *v5;
      v40 = src;
      v19 = v61;
    }
    else
    {
      v39 = realloc(v19, 32 * v38);
      v40 = (_DWORD *)v5[1];
      v14 = v84;
      v19 = v39;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v39 )
        goto LABEL_161;
      v20 = *v5;
      if ( src != v40 )
        goto LABEL_94;
    }
    v109 = v4;
    v103 = v6;
    v97 = v7;
    v89 = v14;
    memcpy(v19, v40, 32 * v20);
    v20 = *v5;
    v4 = v109;
    v6 = v103;
    v7 = v97;
    v14 = v89;
LABEL_94:
    v5[1] = (unsigned __int64)v19;
    goto LABEL_43;
  }
  if ( (unsigned __int8)(v13 - 48) <= 9u )
  {
    *(_QWORD *)(v12 + 24) = v9;
    if ( (unsigned __int8)(*v9 - 48) <= 9u )
    {
      for ( i = v9; ; ++i )
      {
        v55 = (__int64)(i + 1);
        if ( (unsigned __int8)(i[1] - 48) > 9u )
          break;
      }
      v14 = i + 2;
      v56 = v55 - (_QWORD)v9;
      v9 = (char *)v55;
      if ( v79 >= v56 )
        v56 = v79;
      v79 = v56;
    }
    *(_QWORD *)(v12 + 32) = v9;
    v13 = *v9;
  }
LABEL_26:
  if ( v13 == 46 )
    goto LABEL_48;
LABEL_27:
  v15 = 0;
  while ( 2 )
  {
    ++v9;
    if ( v13 == 104 )
    {
      v15 |= 1 << (v15 & 1);
      goto LABEL_34;
    }
    if ( v13 == 76 )
    {
      v15 |= 4u;
      goto LABEL_34;
    }
    if ( v13 == 108 || v13 == 106 || (v13 & 0xDF) == 90 || v13 == 116 )
    {
      v15 += 8;
LABEL_34:
      v13 = *v9;
      continue;
    }
    break;
  }
  switch ( v13 )
  {
    case 37:
      goto LABEL_71;
    case 65:
    case 69:
    case 70:
    case 71:
    case 97:
    case 101:
    case 102:
    case 103:
      v29 = 12;
      if ( v15 <= 15 )
        v29 = ((v15 & 4) != 0) + 11;
      goto LABEL_63;
    case 67:
      v29 = 14;
      v13 = 99;
      goto LABEL_63;
    case 83:
      v29 = 16;
      v13 = 115;
      goto LABEL_63;
    case 88:
    case 111:
    case 117:
    case 120:
      v29 = 10;
      if ( v15 <= 15 && !(v15 & 4) )
      {
        v29 = 8;
        if ( v15 <= 7 )
        {
          v29 = 2;
          if ( !(v15 & 2) )
            v29 = (v15 & 1u) < 1 ? 6 : 4;
        }
      }
      goto LABEL_63;
    case 99:
      v29 = (v15 > 7) + 13;
      goto LABEL_63;
    case 100:
    case 105:
      v29 = 9;
      if ( v15 <= 15 && !(v15 & 4) )
      {
        v29 = 7;
        if ( v15 <= 7 )
        {
          v29 = 1;
          if ( !(v15 & 2) )
            v29 = (v15 & 1u) < 1 ? 5 : 3;
        }
      }
      goto LABEL_63;
    case 110:
      v29 = 22;
      if ( v15 <= 15 && !(v15 & 4) )
      {
        v29 = 21;
        if ( v15 <= 7 )
        {
          v29 = 18;
          if ( !(v15 & 2) )
            v29 = ((v15 & 1) == 0) + 19;
        }
      }
      goto LABEL_63;
    case 112:
      v29 = 17;
      goto LABEL_63;
    case 115:
      v29 = (v15 > 7) + 15;
LABEL_63:
      if ( v11 == -1LL )
      {
        *(_QWORD *)(v12 + 80) = v81;
        if ( v81 == -1LL )
          goto LABEL_131;
        v11 = v81++;
      }
      else
      {
        *(_QWORD *)(v12 + 80) = v11;
      }
      v19 = (_DWORD *)v5[1];
      if ( v6 > v11 )
        goto LABEL_66;
      v52 = 2 * v6;
      if ( v52 <= v11 )
        v52 = v11 + 1;
      if ( v52 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_160;
      v106 = v4;
      v100 = v52;
      v94 = v7;
      v86 = v29;
      if ( src == v19 )
      {
        v53 = malloc(32 * v52);
        v29 = v86;
        v7 = v94;
        v6 = v100;
        v4 = v106;
        if ( !v53 )
          goto LABEL_163;
        goto LABEL_159;
      }
      v53 = realloc(v19, 32 * v52);
      v29 = v86;
      v7 = v94;
      v19 = v53;
      v6 = v100;
      v4 = v106;
      if ( !v53 )
        goto LABEL_211;
      if ( src == (_DWORD *)v5[1] )
      {
        v19 = src;
LABEL_159:
        v57 = v19;
        v107 = v4;
        v101 = v6;
        v19 = v53;
        v95 = v7;
        v87 = v29;
        memcpy(v53, v57, 32 * *v5);
        v4 = v107;
        v29 = v87;
        v6 = v101;
        v7 = v95;
      }
      v5[1] = (unsigned __int64)v19;
LABEL_66:
      v30 = *v5;
      if ( *v5 <= v11 )
      {
        do
          v19[8 * ++v30 - 8] = 0;
        while ( v30 <= v11 );
        *v5 = v30;
      }
      v31 = &v19[8 * v11];
      if ( *v31 )
      {
        if ( *v31 != v29 )
          goto LABEL_132;
      }
      else
      {
        *v31 = v29;
      }
LABEL_71:
      *(_BYTE *)(v12 + 72) = v13;
      v32 = *v4;
      *(_QWORD *)(v12 + 8) = v9;
      v8 = v32 + 1;
      *v4 = v32 + 1;
      if ( v7 > v32 + 1 )
      {
        v3 = (_QWORD *)v4[1];
        goto LABEL_3;
      }
      if ( (v7 & 0x8000000000000000LL) == 0LL )
      {
        v33 = 2 * v7;
        if ( 2 * v7 <= 0x2E8BA2E8BA2E8BALL )
        {
          v34 = (void *)v4[1];
          v91 = v4;
          v83 = v6;
          if ( (void *)v82 == v34 )
          {
            v41 = malloc(176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v41;
            if ( !v41 )
            {
              v40 = (_DWORD *)v5[1];
              if ( src != v40 )
                goto LABEL_162;
              goto LABEL_165;
            }
          }
          else
          {
            v35 = realloc(v34, 176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v35;
            if ( !v35 )
              goto LABEL_211;
            v34 = (void *)v91[1];
            v8 = *v91;
            if ( (void *)v82 != v34 )
              goto LABEL_78;
          }
          v93 = v4;
          v85 = v6;
          v42 = memcpy(v3, v34, 88 * v8);
          v4 = v93;
          v6 = v85;
          v3 = v42;
          v8 = *v93;
LABEL_78:
          v4[1] = v3;
          v7 = v33;
          goto LABEL_3;
        }
      }
LABEL_211:
      v40 = (_DWORD *)v5[1];
LABEL_161:
      if ( src != v40 )
      {
LABEL_162:
        srcb = v4;
        free(v40);
        v4 = srcb;
      }
LABEL_163:
      v58 = (void *)v4[1];
      if ( (void *)v82 != v58 )
        free(v58);
LABEL_165:
      *__errno_location() = 12;
      result = 0xFFFFFFFFLL;
      break;
    default:
      goto LABEL_131;
  }
  return result;
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_408ED0(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_60D1E8 )
    v1 = (void *)unk_60D1E8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_408EE8(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_60CE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
