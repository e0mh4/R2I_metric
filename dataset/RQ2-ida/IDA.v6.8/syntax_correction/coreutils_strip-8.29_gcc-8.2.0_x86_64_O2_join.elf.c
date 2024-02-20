#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
signed __int64 __usercall main(char **a1, char **a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10, __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15, __int64 a16, __int64 a17)
{
  FILE *v17; // rbp@1
  const char *v18; // rbx@1
  char *v19; // rdi@1
  int v20; // eax@2
  char *v21; // rsi@4
  int v22; // eax@4
  bool v23; // cf@16
  bool v24; // zf@16
  char *v25; // r12@18
  signed int v26; // eax@18
  char v27; // al@36
  __int64 v28; // rax@39
  const char *v29; // rdi@50
  signed __int64 v30; // rcx@50
  char *v31; // rsi@50
  __int64 v32; // rax@55
  __int64 v33; // rax@56
  const char *v34; // rsi@60
  __int64 v35; // rax@63
  __int64 v36; // rdi@64
  int v37; // eax@65
  char *v38; // rbx@74
  int v39; // eax@74
  char *v40; // rbx@77
  int v41; // eax@77
  __int64 v42; // rax@82
  __int64 v43; // rax@84
  __int64 v44; // rax@88
  int v45; // eax@90
  char v46; // al@100
  void *v47; // rdi@101
  signed __int64 result; // rax@105
  char v49; // r15@109
  _QWORD *v50; // rdx@115
  __int64 v51; // rcx@115
  _QWORD *v52; // rdx@117
  __int64 v53; // rcx@117
  void *v54; // rdi@127
  void *v55; // rsi@128
  FILE *v56; // rax@78
  char *v57; // rax@75
  char v58; // r13@135
  void **v59; // rbx@139
  unsigned __int64 v60; // r13@148
  unsigned __int64 v61; // r14@149
  __int64 v62; // rsi@150
  __int64 v63; // rax@176
  __int64 v64; // rbx@176
  char *v65; // rax@176
  char *v66; // rax@179
  const char *v67; // rax@180
  __int64 v68; // rax@181
  __int64 v69; // rbx@181
  char *v70; // rax@181
  __int64 v71; // rax@182
  __int64 v72; // rbx@182
  int *v73; // rax@182
  char *v74; // rax@183
  __int64 v75; // rax@184
  __int64 v76; // rbx@184
  char *v77; // rax@184
  char *v78; // rax@185
  __int64 v79; // rax@186
  __int64 v80; // rbx@186
  int *v81; // rax@186
  __int64 v82; // rax@187
  __int64 v83; // rbx@187
  __int64 v84; // rsi@187
  __int64 v85; // rdx@187
  __int64 v86; // rcx@187
  __int64 v87; // r8@187
  __int64 v88; // r9@187
  int v89; // [sp+1Ch] [bp-9Ch]@5
  int i; // [sp+20h] [bp-98h]@1
  int v91; // [sp+24h] [bp-94h]@1
  void *ptr; // [sp+28h] [bp-90h]@96
  char v93; // [sp+30h] [bp-88h]@34
  __int64 v94; // [sp+38h] [bp-80h]@1
  __int64 v95; // [sp+40h] [bp-78h]@81
  __int64 v96; // [sp+48h] [bp-70h]@81
  _QWORD *v97; // [sp+50h] [bp-68h]@81
  __int64 v98; // [sp+60h] [bp-58h]@46
  __int64 v99; // [sp+68h] [bp-50h]@81
  _QWORD *v100; // [sp+70h] [bp-48h]@81

  v17 = (FILE *)a3;
  v18 = (const char *)a1;
  v19 = *a1;
  i = 0;
  v94 = 0LL;
  v91 = 0;
  sub_403DE0(v19, a1, a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  byte_60D37E = sub_403BE0(
                  3LL,
                  "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  sub_4081F0(sub_403A60);
  sub_4081F0(sub_402AF0);
  byte_60D37B = 1;
  byte_60D37A = 0;
  word_60D378 = 0;
  dword_60D330 = 0;
  while ( 1 )
  {
    v21 = (char *)v18;
    v22 = sub_4077C0((unsigned int)v17, v18, "-a:e:i1:2:j:o:t:v:z", &off_408EC0, 0LL);
    if ( v22 == -1 )
      break;
    v89 = 0;
    if ( v22 == 105 )
    {
      byte_60D2E1 = 1;
      v20 = 0;
    }
    else if ( v22 <= 105 )
    {
      if ( v22 == 49 )
      {
        LODWORD(v33) = sub_402910(nptr);
        sub_4028C0(&qword_60D228, v33);
        v20 = v89;
      }
      else if ( v22 <= 49 )
      {
        if ( v22 == -130 )
          sub_4034F0(0);
        if ( v22 != 1 )
        {
          if ( v22 == -131 )
          {
            sub_405E90((char)stdout);
            exit(0);
          }
LABEL_31:
          sub_4034F0(1);
        }
        sub_4038B0(nptr, &v93, &v94, &v91, &i, &v89);
        v20 = v89;
      }
      else
      {
        if ( v22 == 97 )
          goto LABEL_45;
        if ( v22 == 101 )
        {
          v25 = nptr;
          if ( s1 && strcmp(s1, nptr) )
            goto LABEL_183;
          s1 = v25;
          v20 = 0;
        }
        else
        {
          if ( v22 != 50 )
            goto LABEL_31;
          LODWORD(v32) = sub_402910(nptr);
          sub_4028C0(&qword_60D220, v32);
          v20 = v89;
        }
      }
    }
    else
    {
      if ( v22 == 118 )
      {
        byte_60D37B = 0;
LABEL_45:
        if ( (unsigned int)sub_4063E0(nptr) || (unsigned __int64)(v98 - 1) > 1 )
        {
          LODWORD(v63) = sub_405A00(nptr, 0LL);
          v64 = v63;
          v65 = dcgettext(0LL, "invalid field number: %s", 5);
          error(1, 0, v65, v64);
LABEL_177:
          v18 = dcgettext(0LL, "both files cannot be standard input", 5);
          v21 = (char *)(unsigned int)*__errno_location();
          error(1, (int)v21, v18);
LABEL_178:
          if ( !v37 )
          {
            v66 = dcgettext(0LL, "missing operand", 5);
            error(0, 0, v66);
            goto LABEL_31;
          }
LABEL_181:
          LODWORD(v68) = sub_405A00(*(_QWORD *)&v18[8 * (_QWORD)v17 - 8], v21);
          v69 = v68;
          v70 = dcgettext(0LL, "missing operand after %s", 5);
          error(0, 0, v70, v69);
          goto LABEL_31;
        }
        if ( v98 == 1 )
          byte_60D37D = 1;
        else
          byte_60D37C = 1;
LABEL_40:
        v20 = v89;
        goto LABEL_3;
      }
      if ( v22 <= 118 )
      {
        v23 = (unsigned int)v22 < 0x6F;
        v24 = v22 == 111;
        if ( v22 == 111 )
        {
          v29 = "auto";
          v30 = 5LL;
          v31 = nptr;
          do
          {
            if ( !v30 )
              break;
            v23 = (unsigned __int8)*v31 < *v29;
            v24 = *v31++ == *v29++;
            --v30;
          }
          while ( v24 );
          v20 = (char)((!v23 && !v24) - v23);
          if ( (!v23 && !v24) == v23 )
          {
            byte_60D368 = 1;
          }
          else
          {
            sub_402990(nptr);
            v89 = 3;
            v20 = 3;
          }
        }
        else if ( v22 == 116 )
        {
          v25 = nptr;
          v26 = (unsigned __int8)*nptr;
          if ( (_BYTE)v26 )
          {
            if ( nptr[1] )
            {
              v34 = "\\0";
              if ( strcmp(nptr, "\\0") )
                goto LABEL_184;
              v26 = 0;
            }
          }
          else
          {
            v26 = 10;
          }
          if ( dword_60D214 >= 0 && dword_60D214 != v26 )
            goto LABEL_185;
          dword_60D214 = v26;
          v20 = 0;
        }
        else
        {
          if ( v22 != 106 )
            goto LABEL_31;
          v27 = *nptr;
          if ( (unsigned __int8)(*nptr - 49) > 1u
            || nptr[1]
            || nptr != (char *)(*(_QWORD *)&v18[8 * dword_60D29C - 8] + 2LL) )
          {
            LODWORD(v28) = sub_402910(nptr);
            sub_4028C0(&qword_60D228, v28);
            sub_4028C0(&qword_60D220, qword_60D228);
            goto LABEL_40;
          }
          ++*((_DWORD *)&v94 + (v27 == 50));
          v20 = (v27 == 50) + 1;
          v89 = v20;
        }
      }
      else if ( v22 == 128 )
      {
        dword_60D330 = 1;
        v20 = 0;
      }
      else if ( v22 <= 128 )
      {
        if ( v22 != 122 )
          goto LABEL_31;
        byte_60D210 = 0;
        v20 = 0;
      }
      else if ( v22 == 129 )
      {
        dword_60D330 = 2;
        v20 = 0;
      }
      else
      {
        if ( v22 != 130 )
          goto LABEL_31;
        byte_60D2E0 = 1;
        v20 = 0;
      }
    }
LABEL_3:
    i = v20;
  }
  v35 = dword_60D29C;
  for ( i = 0; dword_60D29C < (signed int)v17; v35 = dword_60D29C )
  {
    v36 = *(_QWORD *)&v18[8 * v35];
    v21 = &v93;
    dword_60D29C = v35 + 1;
    sub_4038B0(v36, &v93, &v94, &v91, &i, &v89);
  }
  v37 = v91;
  if ( v91 != 2 )
    goto LABEL_178;
  if ( (_DWORD)v94 )
  {
    sub_4028C0(&qword_60D228, 0LL);
    sub_4028C0(&qword_60D220, 0LL);
  }
  if ( HIDWORD(v94) )
  {
    sub_4028C0(&qword_60D228, 1LL);
    sub_4028C0(&qword_60D220, 1LL);
  }
  if ( qword_60D228 == -1 )
    qword_60D228 = 0LL;
  if ( qword_60D220 == -1 )
    qword_60D220 = 0LL;
  v38 = qword_60D390;
  v39 = strcmp(qword_60D390, "-");
  v25 = (char *)stdin;
  if ( v39 )
  {
    LODWORD(v57) = sub_403B40(v38, "r");
    v25 = v57;
  }
  if ( !v25 )
  {
    LODWORD(v67) = sub_405880(0LL, 3LL, qword_60D390);
    v18 = v67;
    v21 = (char *)(unsigned int)*__errno_location();
    error(1, (int)v21, "%s", v18);
    goto LABEL_181;
  }
  v40 = qword_60D398;
  v41 = strcmp(qword_60D398, "-");
  v17 = stdin;
  if ( v41 )
  {
    LODWORD(v56) = sub_403B40(v40, "r");
    v17 = v56;
  }
  if ( !v17 )
  {
    LODWORD(v71) = sub_405880(0LL, 3LL, qword_60D398);
    v72 = v71;
    v73 = __errno_location();
    error(1, *v73, "%s", v72);
LABEL_183:
    v74 = dcgettext(0LL, "conflicting empty-field replacement strings", 5);
    v34 = 0LL;
    error(1, 0, v74);
LABEL_184:
    LODWORD(v75) = sub_405A00(v25, v34);
    v76 = v75;
    v77 = dcgettext(0LL, "multi-character tab %s", 5);
    error(1, 0, v77, v76);
LABEL_185:
    v78 = dcgettext(0LL, "incompatible tabs", 5);
    error(1, 0, v78);
    goto LABEL_186;
  }
  if ( (FILE *)v25 == v17 )
    goto LABEL_177;
  sub_403B10(v25, 2LL);
  sub_403B10(v17, 2LL);
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  sub_403400(v25, &v95, 1LL);
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  sub_403400(v17, &v98, 2LL);
  if ( byte_60D368 )
  {
    v42 = v95;
    if ( v95 )
      v42 = *(_QWORD *)(*v97 + 24LL);
    qword_60D360 = v42;
    v43 = v98;
    if ( v98 )
      v43 = *(_QWORD *)(*v100 + 24LL);
    qword_60D358 = v43;
  }
  if ( byte_60D2E0 )
  {
    if ( v95 )
    {
      v55 = &unk_60D300;
      v54 = (void *)*v97;
      if ( !v98 )
        goto LABEL_129;
    }
    else
    {
      if ( !v98 )
        goto LABEL_95;
      v54 = &unk_60D300;
    }
    v55 = (void *)*v100;
LABEL_129:
    sub_402E10(v54, v55);
    qword_60D3B0 = 0LL;
    qword_60D3B8 = 0LL;
    if ( v95 )
    {
      v95 = 0LL;
      sub_403400(v25, &v95, 1LL);
    }
    if ( v98 )
    {
      v98 = 0LL;
      sub_403400(v17, &v98, 2LL);
    }
  }
LABEL_88:
  v44 = v95;
  if ( !v95 )
  {
LABEL_95:
    v44 = 0LL;
    goto LABEL_96;
  }
  while ( v98 )
  {
    v45 = sub_402B90(
            *(_QWORD *)(*v97 + 24LL),
            *v97 + 40LL,
            *(_QWORD *)(*v100 + 24LL),
            *v100 + 40LL,
            qword_60D228,
            qword_60D220);
    if ( v45 < 0 )
    {
      if ( byte_60D37D )
        sub_402E10(*v97, &unk_60D300);
      v95 = 0LL;
      sub_403400(v25, &v95, 1LL);
      byte_60D37A = 1;
      goto LABEL_88;
    }
    if ( !v45 )
    {
      do
      {
        if ( !(unsigned __int8)sub_403400(v25, &a11, 1LL) )
        {
          ++a11;
          v49 = 1;
          goto LABEL_111;
        }
      }
      while ( !sub_402B90(
                 *(_QWORD *)(*(_QWORD *)(a13 + 8 * a11 - 8) + 24LL),
                 *(_QWORD *)(a13 + 8 * a11 - 8) + 40LL,
                 *(_QWORD *)(*(_QWORD *)a17 + 24LL),
                 *(_QWORD *)a17 + 40LL,
                 qword_60D228,
                 qword_60D220) );
      v49 = 0;
      do
      {
LABEL_111:
        if ( !(unsigned __int8)sub_403400(v17, &a15, 2LL) )
        {
          ++a15;
          BYTE7(a4) = 1;
          goto LABEL_113;
        }
      }
      while ( !sub_402B90(
                 *(_QWORD *)(*(_QWORD *)a13 + 24LL),
                 *(_QWORD *)a13 + 40LL,
                 *(_QWORD *)(*(_QWORD *)(a17 + 8 * a15 - 8) + 24LL),
                 *(_QWORD *)(a17 + 8 * a15 - 8) + 40LL,
                 qword_60D228,
                 qword_60D220) );
      BYTE7(a4) = 0;
LABEL_113:
      if ( byte_60D37B )
      {
        v60 = 0LL;
        if ( a11 != 1 )
        {
          do
          {
            v61 = 0LL;
            if ( a15 != 1 )
            {
              do
              {
                v62 = *(_QWORD *)(a17 + 8 * v61++);
                sub_402E10(*(_QWORD *)(a13 + 8 * v60), v62);
              }
              while ( v61 < a15 - 1 );
            }
            ++v60;
          }
          while ( v60 < a11 - 1 );
        }
      }
      if ( v49 )
      {
        a11 = 0LL;
      }
      else
      {
        v50 = (_QWORD *)(a13 + 8 * a11 - 8);
        v51 = *(_QWORD *)a13;
        *(_QWORD *)a13 = *v50;
        *v50 = v51;
        a11 = 1LL;
      }
      if ( BYTE7(a4) )
      {
        a15 = 0LL;
      }
      else
      {
        v52 = (_QWORD *)(a17 + 8 * a15 - 8);
        v53 = *(_QWORD *)a17;
        *(_QWORD *)a17 = *v52;
        *v52 = v53;
        a15 = 1LL;
      }
      goto LABEL_88;
    }
    if ( byte_60D37C )
      sub_402E10(&unk_60D300, *v100);
    v98 = 0LL;
    sub_403400(v17, &v98, 2LL);
    v44 = v95;
    byte_60D37A = 1;
    if ( !v95 )
      goto LABEL_95;
  }
LABEL_96:
  ptr = 0LL;
  if ( dword_60D330 == 2 || (_BYTE)word_60D378 && HIBYTE(word_60D378) )
  {
    if ( byte_60D37D && v44 )
    {
      v58 = 0;
LABEL_171:
      sub_402E10(*v97, &unk_60D300);
      goto LABEL_137;
    }
    v46 = byte_60D37C;
    if ( !byte_60D37C )
    {
LABEL_101:
      v47 = ptr;
      goto LABEL_102;
    }
LABEL_154:
    v59 = &ptr;
    if ( !v98 )
      goto LABEL_101;
    goto LABEL_155;
  }
  if ( !v44 )
  {
    v46 = byte_60D37C;
    goto LABEL_154;
  }
  v58 = byte_60D37D;
  if ( byte_60D37D )
    goto LABEL_171;
  v58 = 1;
LABEL_137:
  if ( v98 )
    byte_60D37A = 1;
  v59 = &ptr;
  while ( (unsigned __int8)sub_403040(v25, &ptr, 1LL) )
  {
    if ( byte_60D37D )
    {
      sub_402E10(ptr, &unk_60D300);
      if ( (_BYTE)word_60D378 && !byte_60D37D )
        break;
    }
    else if ( (_BYTE)word_60D378 )
    {
      break;
    }
  }
  v46 = byte_60D37C;
  if ( (byte_60D37C || v58) && v98 )
  {
LABEL_155:
    if ( v46 )
      sub_402E10(&unk_60D300, *v100);
    if ( v95 )
      byte_60D37A = 1;
    while ( (unsigned __int8)sub_403040(v17, v59, 2LL) )
    {
      if ( byte_60D37C )
      {
        sub_402E10(&unk_60D300, ptr);
        if ( HIBYTE(word_60D378) && !byte_60D37C )
          break;
      }
      else if ( HIBYTE(word_60D378) )
      {
        break;
      }
    }
  }
  v47 = ptr;
  if ( ptr )
  {
    sub_402AC0();
    goto LABEL_101;
  }
LABEL_102:
  free(v47);
  sub_402B40(&v96, &v97);
  sub_402B40(&v99, &v100);
  if ( (unsigned int)sub_406810((FILE *)v25) )
  {
LABEL_187:
    LODWORD(v82) = sub_405880(0LL, 3LL, qword_60D390);
    v83 = v82;
    v84 = (unsigned int)*__errno_location();
    error(1, v84, "%s", v83);
    start(1LL, v84, v85, v86, v87, v88, a4, a5, a6, a7, a8, a9);
  }
  if ( (unsigned int)sub_406810(v17) )
  {
LABEL_186:
    LODWORD(v79) = sub_405880(0LL, 3LL, qword_60D398);
    v80 = v79;
    v81 = __errno_location();
    error(1, *v81, "%s", v80);
    goto LABEL_187;
  }
  if ( (_BYTE)word_60D378 )
    result = 1LL;
  else
    result = HIBYTE(word_60D378);
  return result;
}

int sub_40280B()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_40282A()
{
  return 0;
}

int sub_402861()
{
  int result; // eax@4

  if ( !byte_60D2C8 )
  {
    while ( qword_60D2D0 < (unsigned __int64)(((&unk_60CE48 - (_UNKNOWN *)&qword_60CE40) >> 3) - 1) )
      (*(&qword_60CE40 + ++qword_60D2D0))();
    result = sub_40280B();
    byte_60D2C8 = 1;
  }
  return result;
}

int sub_4028B8()
{
  return sub_40282A();
}

void __fastcall sub_4028C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx@1
  char *v3; // rax@4

  v2 = *a1;
  if ( *a1 != -1 && v2 != a2 )
  {
    v3 = dcgettext(0LL, "incompatible join fields %lu, %lu", 5);
    error(1, 0, v3, v2 + 1, a2 + 1);
    sub_402910(1LL);
  }
  else
  {
    *a1 = a2;
  }
}

signed __int64 __fastcall sub_402910(char *a1)
{
  int v1; // eax@1
  signed __int64 result; // rax@4
  __int64 v3; // rax@6
  __int64 v4; // rbx@6
  char *v5; // rax@6
  __int64 v6; // [sp+8h] [bp-10h]@0

  v1 = sub_4063E0(a1);
  if ( v1 == 1 )
  {
    result = -2LL;
  }
  else if ( v1 || !v6 )
  {
    LODWORD(v3) = sub_405A00(a1, 0LL);
    v4 = v3;
    v5 = dcgettext(0LL, "invalid field number: %s", 5);
    error(1, 0, v5, v4);
    result = sub_402990((char *)1);
  }
  else
  {
    result = v6 - 1;
  }
  return result;
}

int __fastcall sub_402990(char *s)
{
  char *i; // rbp@1
  signed __int64 v2; // rbp@3
  int v3; // ebx@3
  __int64 v4; // rax@4
  _QWORD *v5; // rdx@4
  const char *v6; // rsi@6
  signed __int64 v7; // r12@6
  char *v8; // rax@6
  int v9; // eax@8
  __int64 v10; // rax@14
  __int64 v11; // rbx@14
  char *v12; // rax@14
  __int64 v13; // rax@15
  __int64 v14; // rbx@15
  char *v15; // rax@15
  __int64 v16; // rax@16
  __int64 v17; // rbx@16
  char *v18; // rax@16

  for ( i = s; ; i = (char *)v7 )
  {
    v6 = ", \t";
    v7 = 0LL;
    v8 = strpbrk(i, ", \t");
    if ( v8 )
    {
      *v8 = 0;
      v7 = (signed __int64)(v8 + 1);
    }
    v9 = *i;
    if ( *i != 48 )
      break;
    if ( i[1] )
      goto LABEL_15;
    v2 = 0LL;
    v3 = 0;
LABEL_4:
    LODWORD(v4) = sub_405FD0(24LL);
    v5 = off_60D218;
    *(_DWORD *)v4 = v3;
    *(_QWORD *)(v4 + 8) = v2;
    *(_QWORD *)(v4 + 16) = 0LL;
    off_60D218 = (void *)v4;
    v5[2] = v4;
    if ( !v7 )
      return v4;
  }
  if ( *i >= 48 && (char)v9 <= 50 )
  {
    if ( i[1] != 46 )
      goto LABEL_16;
    v3 = v9 - 48;
    v2 = sub_402910(i + 2);
    goto LABEL_4;
  }
  LODWORD(v10) = sub_405A00(i, ", \t");
  v11 = v10;
  v12 = dcgettext(0LL, "invalid file number in field spec: %s", 5);
  v6 = 0LL;
  error(1, 0, v12, v11);
LABEL_15:
  LODWORD(v13) = sub_405A00(i, v6);
  v14 = v13;
  v15 = dcgettext(0LL, "invalid field specifier: %s", 5);
  v6 = 0LL;
  error(1, 0, v15, v14);
LABEL_16:
  LODWORD(v16) = sub_405A00(i, v6);
  v17 = v16;
  v18 = dcgettext(0LL, "invalid field specifier: %s", 5);
  error(1, 0, v18, v17);
  LODWORD(v4) = sub_402AC0();
  return v4;
}

void __fastcall sub_402AC0(__int64 a1)
{
  free(*(void **)(a1 + 40));
  *(_QWORD *)(a1 + 40) = 0LL;
  free(*(void **)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
}

void sub_402AF0()
{
  void *v0; // rbx@1
  void *v1; // rbx@3

  v0 = ptr;
  if ( ptr )
  {
    sub_402AC0((__int64)ptr);
    free(v0);
  }
  v1 = (void *)qword_60D388;
  if ( qword_60D388 )
  {
    sub_402AC0(qword_60D388);
    free(v1);
  }
}

void __fastcall sub_402B40(unsigned __int64 *a1, void **a2)
{
  unsigned __int64 *v2; // r12@1
  unsigned __int64 v3; // rbx@1
  void *v4; // rdi@2

  v2 = a1;
  v3 = 0LL;
  if ( *a1 )
  {
    do
    {
      v4 = (void *)*((_QWORD *)*a2 + v3);
      if ( v4 )
      {
        sub_402AC0((__int64)v4);
        v4 = (void *)*((_QWORD *)*a2 + v3);
      }
      free(v4);
      ++v3;
    }
    while ( v3 < *v2 );
  }
  free(*a2);
}

int __fastcall sub_402B90(unsigned __int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4, unsigned __int64 a5, unsigned __int64 a6)
{
  signed __int64 v6; // r8@2
  const void *v7; // rdi@2
  unsigned __int64 v8; // rbp@2
  int result; // eax@3
  unsigned __int64 v10; // rbx@6
  signed __int64 v11; // r9@8
  const void *v12; // rsi@8
  size_t v13; // rdx@17

  if ( a5 >= a1 )
  {
    if ( a6 >= a3 )
      return 0;
    v10 = *(_QWORD *)(*a4 + 16 * a6 + 8);
    return -(v10 != 0);
  }
  v6 = *a2 + 16 * a5;
  v7 = *(const void **)v6;
  v8 = *(_QWORD *)(v6 + 8);
  if ( a6 >= a3 )
    return v8 != 0;
  v11 = *a4 + 16 * a6;
  v12 = *(const void **)v11;
  v10 = *(_QWORD *)(v11 + 8);
  if ( !v8 )
    return -(v10 != 0);
  if ( v10 )
  {
    if ( byte_60D2E1 )
    {
      result = sub_403D90(v7, v12);
    }
    else
    {
      if ( byte_60D37E )
        return sub_406320(v7, *(_QWORD *)(v6 + 8), *(const void **)v11, *(_QWORD *)(v11 + 8));
      v13 = *(_QWORD *)(v11 + 8);
      if ( v8 <= v10 )
        v13 = *(_QWORD *)(v6 + 8);
      result = memcmp(v7, v12, v13);
    }
    if ( !result )
    {
      if ( v8 < v10 )
        result = -1;
      else
        result = v8 != v10;
    }
  }
  else
  {
    result = 1;
  }
  return result;
}

int __fastcall sub_402C90(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  signed __int64 v3; // rdi@2
  size_t v4; // rdx@2
  int result; // eax@3

  if ( a1 < a2 && (v3 = *a3 + 16 * a1, (v4 = *(_QWORD *)(v3 + 8)) != 0) )
  {
    result = fwrite_unlocked(*(const void **)v3, 1uLL, v4, stdout);
  }
  else if ( s1 )
  {
    result = fputs_unlocked(s1, stdout);
  }
  return result;
}

int __fastcall sub_402CF0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15@1
  unsigned __int64 v4; // r12@1
  char v5; // r14@3
  unsigned __int64 v6; // r13@5
  int result; // eax@7
  unsigned __int64 v8; // rbx@7
  char *v9; // rax@8
  unsigned __int64 v10; // rdi@10
  signed __int64 v11; // rbx@11
  char *v12; // rax@12
  unsigned __int64 v13; // rdi@14

  v3 = a1;
  v4 = a3;
  if ( !byte_60D368 )
    v4 = *(_QWORD *)(a1 + 24);
  v5 = dword_60D214;
  if ( dword_60D214 < 0 )
    v5 = 32;
  v6 = a2;
  if ( v4 <= a2 )
    v6 = v4;
  result = (unsigned __int8)v5;
  v8 = 0LL;
  if ( v6 )
  {
    do
    {
      v9 = stdout->_IO_write_ptr;
      if ( v9 >= stdout->_IO_write_end )
      {
        __overflow(stdout, (unsigned __int8)v5);
      }
      else
      {
        stdout->_IO_write_ptr = v9 + 1;
        *v9 = v5;
      }
      v10 = v8++;
      result = sub_402C90(v10, *(_QWORD *)(v3 + 24), (_QWORD *)(v3 + 40));
    }
    while ( v8 != v6 );
  }
  v11 = a2 + 1;
  if ( v4 > a2 + 1 )
  {
    do
    {
      v12 = stdout->_IO_write_ptr;
      if ( v12 >= stdout->_IO_write_end )
      {
        __overflow(stdout, (unsigned __int8)v5);
      }
      else
      {
        stdout->_IO_write_ptr = v12 + 1;
        *v12 = v5;
      }
      v13 = v11++;
      result = sub_402C90(v13, *(_QWORD *)(v3 + 24), (_QWORD *)(v3 + 40));
    }
    while ( v4 != v11 );
  }
  return result;
}

int __fastcall sub_402E10(void *a1, __int64 a2)
{
  void *v2; // rbp@1
  char v3; // r12@1
  __int64 v4; // rbx@1
  unsigned __int64 v5; // rdi@5
  __int64 v6; // rax@5
  char *v7; // rax@8
  unsigned __int64 v8; // rdi@14
  __int64 v9; // rax@14
  char v10; // dl@17
  char *v11; // rax@17

  v2 = a1;
  v3 = dword_60D214;
  v4 = qword_60D350;
  if ( dword_60D214 < 0 )
    v3 = 32;
  if ( qword_60D350 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)v4 )
      {
        v6 = a2;
        v5 = *(_QWORD *)(v4 + 8);
        if ( *(_DWORD *)v4 == 1 )
          v6 = (__int64)v2;
      }
      else
      {
        v5 = qword_60D228;
        v6 = (__int64)v2;
        if ( v2 == &unk_60D300 )
        {
          v5 = qword_60D220;
          v6 = a2;
        }
      }
      sub_402C90(v5, *(_QWORD *)(v6 + 24), (_QWORD *)(v6 + 40));
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        break;
      v7 = stdout->_IO_write_ptr;
      if ( v7 >= stdout->_IO_write_end )
      {
        __overflow(stdout, (unsigned __int8)v3);
      }
      else
      {
        stdout->_IO_write_ptr = v7 + 1;
        *v7 = v3;
      }
    }
  }
  else
  {
    v8 = qword_60D228;
    v9 = (__int64)v2;
    if ( v2 == &unk_60D300 )
    {
      v8 = qword_60D220;
      v9 = a2;
    }
    sub_402C90(v8, *(_QWORD *)(v9 + 24), (_QWORD *)(v9 + 40));
    sub_402CF0((__int64)v2, qword_60D228, qword_60D360);
    sub_402CF0(a2, qword_60D220, qword_60D358);
  }
  v10 = byte_60D210;
  v11 = stdout->_IO_write_ptr;
  if ( v11 >= stdout->_IO_write_end )
  {
    LODWORD(v11) = __overflow(stdout, (unsigned __int8)byte_60D210);
  }
  else
  {
    stdout->_IO_write_ptr = v11 + 1;
    *v11 = v10;
  }
  return (unsigned __int64)v11;
}

signed __int64 __fastcall sub_402F80(__int64 a1, signed __int64 a2, __int64 a3)
{
  signed __int64 v3; // r12@1
  __int64 v4; // rbp@1
  __int64 v5; // rbx@1
  unsigned __int64 v6; // rcx@1
  unsigned __int64 v7; // rdi@1
  __int64 v8; // rax@1
  signed __int64 result; // rax@2

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)(v5 + 40);
  if ( v6 >= v7 )
  {
    if ( v8 )
    {
      if ( v7 <= 0x555555555555554LL )
      {
        v7 += (v7 >> 1) + 1;
        a2 = 16 * v7;
LABEL_6:
        *(_QWORD *)(v5 + 32) = v7;
        LODWORD(v8) = sub_406030(v8, a2);
        v6 = *(_QWORD *)(v5 + 24);
        *(_QWORD *)(v5 + 40) = v8;
        goto LABEL_2;
      }
    }
    else
    {
      if ( !v7 )
      {
        a2 = 128LL;
        v7 = 8LL;
        goto LABEL_6;
      }
      a2 = 16 * v7;
      if ( !(v7 & 0x800000000000000LL) && v7 >> 60 == 0 )
        goto LABEL_6;
    }
    sub_406220(v7, a2);
  }
LABEL_2:
  result = 16 * v6 + v8;
  *(_QWORD *)result = v3;
  *(_QWORD *)(result + 8) = v4;
  *(_QWORD *)(v5 + 24) = v6 + 1;
  return result;
}

int __fastcall sub_403040(_BYTE *a1, __int64 *a2, int a3)
{
  int v3; // er14@1
  __int64 v4; // r12@1
  __int64 v5; // rbp@1
  __int64 v6; // rax@4
  __int64 v7; // rax@5
  signed __int64 v8; // rbx@5
  signed __int64 v9; // r15@5
  signed __int64 v10; // r13@5
  __int64 v11; // rsi@6
  __int64 v12; // ST18_8@9
  __int64 v13; // rax@10
  __int64 v14; // rdx@11
  __int64 v15; // rax@13
  unsigned __int64 v16; // r8@18
  unsigned __int64 v17; // rax@21
  __int64 v18; // r13@21
  unsigned __int64 v19; // rbx@21
  __int64 v20; // r15@25
  char *v21; // r14@25
  char *v22; // rax@25
  int v23; // ebx@26
  __int64 v25; // rax@31
  __int64 v26; // rax@32
  const unsigned __int16 *v27; // rdx@34
  __int64 v28; // rsi@35
  signed __int64 v29; // rax@35
  signed __int64 v30; // r15@37
  __int64 v31; // rsi@38
  __int64 v32; // rsi@41
  __int64 v33; // rdx@43
  signed __int64 v34; // rsi@44
  __int64 v35; // rcx@48
  char *v36; // rbx@60
  __int64 v37; // rsi@60
  __int64 v38; // rdx@60
  const unsigned __int16 **v39; // [sp+8h] [bp-40h]@34

  v3 = a3;
  v4 = a3 - 1;
  v5 = *a2;
  if ( qword_60D3B0[v4] == *a2 )
  {
    v25 = (__int64)*(&ptr + v4);
    *(&ptr + v4) = (void *)v5;
    v5 = v25;
    *a2 = v25;
    if ( v25 )
      goto LABEL_3;
  }
  else if ( v5 )
  {
LABEL_3:
    *(_QWORD *)(v5 + 24) = 0LL;
    goto LABEL_4;
  }
  LODWORD(v26) = sub_4061A0(1LL, 48LL);
  v5 = v26;
  *a2 = v26;
LABEL_4:
  LODWORD(v6) = sub_403C50(v5, a1, (unsigned int)byte_60D210);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v5 + 8);
    v8 = *(_QWORD *)(v5 + 16);
    ++qword_60D3A0[v4];
    v9 = v7 - 1;
    v10 = v8 + v7 - 1;
    if ( v8 == v10 )
    {
LABEL_13:
      v15 = qword_60D3B0[v4];
      if ( v15 && dword_60D330 != 2 && (dword_60D330 == 1 || byte_60D37A) && !*((_BYTE *)&word_60D378 + v4) )
      {
        v16 = qword_60D228;
        if ( v3 != 1 )
          v16 = qword_60D220;
        if ( sub_402B90(
               *(_QWORD *)(v15 + 24),
               (_QWORD *)(v15 + 40),
               *(_QWORD *)(v5 + 24),
               (_QWORD *)(v5 + 40),
               v16,
               v16) > 0 )
        {
          v17 = *(_QWORD *)(v5 + 8);
          v18 = *(_QWORD *)(v5 + 16);
          LODWORD(v19) = 0;
          if ( v17 )
          {
            v19 = v17 - 1;
            if ( *(_BYTE *)(v18 + v17 - 1) == 10 )
            {
              if ( v19 > 0x7FFFFFFF )
                LODWORD(v19) = 0x7FFFFFFF;
            }
            else
            {
              LODWORD(v19) = 0x7FFFFFFF;
              if ( v17 <= 0x7FFFFFFF )
                v19 = *(_QWORD *)(v5 + 8);
            }
          }
          v20 = qword_60D3A0[v4];
          v21 = (&qword_60D390)[8 * v4];
          v22 = dcgettext(0LL, "%s:%lu: is not sorted: %.*s", 5);
          error(dword_60D330 == 1, 0, v22, v21, v20, (unsigned int)v19, v18);
          *((_BYTE *)&word_60D378 + v4) = 1;
        }
      }
      qword_60D3B0[v4] = v5;
      return 1;
    }
    v11 = (unsigned int)dword_60D214;
    if ( dword_60D214 >= 0 && dword_60D214 != 10 )
    {
      while ( 1 )
      {
        v9 = v10 - v8;
        LODWORD(v13) = sub_4078C0(v8, v11, v10 - v8);
        if ( !v13 )
          break;
        v12 = v13;
        sub_402F80(v5, v8, v13 - v8);
        v11 = (unsigned int)dword_60D214;
        v8 = v12 + 1;
      }
    }
    else if ( dword_60D214 < 0 )
    {
      v39 = __ctype_b_loc();
      v27 = *v39;
      while ( 1 )
      {
        v28 = *(_BYTE *)v8;
        v29 = v8 + 1;
        if ( !(v27[v28] & 1) && (_BYTE)v28 != 10 )
          break;
        ++v8;
        if ( v10 == v29 )
          goto LABEL_13;
      }
      while ( 1 )
      {
        v30 = v29;
        if ( v10 == v29 )
        {
          v14 = 1LL;
          goto LABEL_12;
        }
        v31 = *(_BYTE *)(v8 + 1);
        if ( !(v27[v31] & 1) && (_BYTE)v31 != 10 )
          break;
        v33 = 1LL;
LABEL_44:
        v34 = v8;
        v8 = v30 + 1;
        sub_402F80(v5, v34, v33);
        if ( v10 == v30 + 1 )
          goto LABEL_54;
        v27 = *v39;
        if ( (*v39)[*(_BYTE *)(v30 + 1)] & 1 || *(_BYTE *)(v30 + 1) == 10 )
        {
          while ( v10 != ++v8 )
          {
            v35 = *(_BYTE *)v8;
            if ( !(v27[v35] & 1) && (_BYTE)v35 != 10 )
              goto LABEL_50;
          }
LABEL_54:
          v9 = 0LL;
          goto LABEL_11;
        }
LABEL_50:
        v29 = v8 + 1;
      }
      while ( v10 != ++v30 )
      {
        v32 = *(_BYTE *)v30;
        if ( v27[v32] & 1 || (_BYTE)v32 == 10 )
        {
          v33 = v30 - v8;
          goto LABEL_44;
        }
      }
      v14 = v10 - v8;
      goto LABEL_12;
    }
LABEL_11:
    v14 = v9;
LABEL_12:
    sub_402F80(v5, v8, v14);
    goto LABEL_13;
  }
  if ( !(*a1 & 0x20) )
  {
    v23 = 0;
    if ( v5 )
      sub_402AC0(v5);
    return v23;
  }
  v36 = dcgettext(0LL, "read error", 5);
  v37 = (unsigned int)*__errno_location();
  error(1, v37, v36);
  return sub_403400(1LL, v37, v38);
}

int __fastcall sub_403400(_BYTE *a1, __int64 *a2, int a3)
{
  _BYTE *v3; // rbp@1
  __int64 *v4; // rbx@1
  unsigned __int64 v5; // rsi@1
  unsigned __int64 v6; // rcx@1
  __int64 v7; // rax@1
  int result; // eax@2
  signed __int64 v9; // rsi@6
  int v10; // ST0C_4@8
  unsigned __int64 v11; // rdi@8
  _QWORD *v12; // rcx@9
  signed __int64 v13; // rdi@9

  v3 = a1;
  v4 = a2;
  v5 = *a2;
  v6 = v4[1];
  v7 = v4[2];
  if ( v5 != v6 )
    goto LABEL_2;
  if ( v7 )
  {
    v9 = 768614336404564649LL;
    if ( v6 <= 0xAAAAAAAAAAAAAA9LL )
    {
      v6 += (v6 >> 1) + 1;
      v9 = 8 * v6;
      goto LABEL_8;
    }
LABEL_15:
    sub_406220(a1, v9);
  }
  if ( v6 )
  {
    v9 = 8 * v6;
    a1 = (_BYTE *)(v6 >> 61 != 0);
    if ( v6 & 0x1000000000000000LL || v6 >> 61 != 0 )
      goto LABEL_15;
  }
  else
  {
    v9 = 128LL;
    v6 = 16LL;
  }
LABEL_8:
  v4[1] = v6;
  v10 = a3;
  LODWORD(v7) = sub_406030(v7, v9);
  v5 = *v4;
  v11 = v4[1];
  v4[2] = v7;
  a3 = v10;
  if ( v5 < v11 )
  {
    v12 = (_QWORD *)(v7 + 8 * v5);
    v13 = v7 + 8 * v11;
    do
    {
      *v12 = 0LL;
      ++v12;
    }
    while ( (_QWORD *)v13 != v12 );
  }
LABEL_2:
  result = sub_403040(v3, (__int64 *)(v7 + 8 * v5), a3);
  if ( (_BYTE)result )
    ++*v4;
  return result;
}

noreturn void __fastcall  sub_4034F0(int status)
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
  FILE *v15; // rbp@4
  char *v16; // rax@4
  FILE *v17; // rbp@4
  char *v18; // rax@4
  FILE *v19; // rbp@4
  char *v20; // rax@4
  FILE *v21; // rbp@4
  char *v22; // rax@4
  __int64 *v23; // rax@4
  _BYTE *v24; // rdi@5
  bool v25; // cf@5
  bool v26; // zf@5
  const char *v27; // rsi@6
  signed __int64 v28; // rcx@6
  const char *v29; // rbp@10
  char *v30; // rax@11
  char *v31; // rax@11
  char *v32; // rax@13
  char *v33; // rax@14
  char *v34; // rax@15
  char *v35; // rax@15
  char *v36; // rax@17
  char *v37; // rax@19
  const char *v38; // [sp+0h] [bp-88h]@4
  const char *v39; // [sp+8h] [bp-80h]@4
  const char *v40; // [sp+10h] [bp-78h]@4
  const char *v41; // [sp+18h] [bp-70h]@4
  const char *v42; // [sp+20h] [bp-68h]@4
  const char *v43; // [sp+28h] [bp-60h]@4
  const char *v44; // [sp+30h] [bp-58h]@4
  const char *v45; // [sp+38h] [bp-50h]@4
  const char *v46; // [sp+40h] [bp-48h]@4
  const char *v47; // [sp+48h] [bp-40h]@4
  const char *v48; // [sp+50h] [bp-38h]@4
  const char *v49; // [sp+58h] [bp-30h]@4
  __int64 v50; // [sp+60h] [bp-28h]@4
  __int64 v51; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_60D3D0;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [OPTION]... FILE1 FILE2\n", 5);
  __printf_chk(1LL, v4, v2);
  v5 = stdout;
  v6 = dcgettext(
         0LL,
         "For each pair of input lines with identical join fields, write a line to\n"
         "standard output.  The default join field is the first, delimited by blanks.\n",
         5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "\n"
          "  -a FILENUM        also print unpairable lines from file FILENUM, where\n"
          "                      FILENUM is 1 or 2, corresponding to FILE1 or FILE2\n"
          "  -e EMPTY          replace missing input fields with EMPTY\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "  -i, --ignore-case  ignore differences in case when comparing fields\n"
          "  -j FIELD          equivalent to '-1 FIELD -2 FIELD'\n"
          "  -o FORMAT         obey FORMAT while constructing output line\n"
          "  -t CHAR           use CHAR as input and output field separator\n",
          5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(
          0LL,
          "  -v FILENUM        like -a FILENUM, but suppress joined output lines\n"
          "  -1 FIELD          join on this FIELD of file 1\n"
          "  -2 FIELD          join on this FIELD of file 2\n"
          "  --check-order     check that the input is correctly sorted, even\n"
          "                      if all input lines are pairable\n"
          "  --nocheck-order   do not check that the input is correctly sorted\n"
          "  --header          treat the first line in each file as field headers,\n"
          "                      print them without trying to pair them\n",
          5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(0LL, "  -z, --zero-terminated     line delimiter is NUL, not newline\n", 5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(
          0LL,
          "\n"
          "Unless -t CHAR is given, leading blanks separate fields and are ignored,\n"
          "else fields are separated by CHAR.  Any FIELD is a field number counted\n"
          "from 1.  FORMAT is one or more comma or blank separated specifications,\n"
          "each being 'FILENUM.FIELD' or '0'.  Default FORMAT outputs the join field,\n"
          "the remaining fields from FILE1, the remaining fields from FILE2, all\n"
          "separated by CHAR.  If FORMAT is the keyword 'auto', then the first\n"
          "line of each file determines the number of fields output for each line.\n"
          "\n"
          "Important: FILE1 and FILE2 must be sorted on the join fields.\n"
          "E.g., use \"sort -k 1b,1\" if 'join' has no options,\n"
          "or use \"join -t ''\" if 'sort' has no options.\n"
          "Note, comparisons honor the rules specified by 'LC_COLLATE'.\n"
          "If the input is not sorted and some lines cannot be joined, a\n"
          "warning message will be given.\n",
          5);
  fputs_unlocked(v22, v21);
  v38 = "[";
  v23 = (__int64 *)&v38;
  v39 = "test invocation";
  v40 = "coreutils";
  v41 = "Multi-call invocation";
  v42 = "sha224sum";
  v43 = "sha2 utilities";
  v44 = "sha256sum";
  v45 = "sha2 utilities";
  v46 = "sha384sum";
  v47 = "sha2 utilities";
  v48 = "sha512sum";
  v49 = "sha2 utilities";
  v50 = 0LL;
  v51 = 0LL;
  do
  {
    v23 += 2;
    v24 = (_BYTE *)*v23;
    v25 = 0;
    v26 = *v23 == 0;
    if ( !*v23 )
      break;
    v27 = "join";
    v28 = 5LL;
    do
    {
      if ( !v28 )
        break;
      v25 = (const unsigned __int8)*v27 < *v24;
      v26 = *v27++ == *v24++;
      --v28;
    }
    while ( v26 );
  }
  while ( (!v25 && !v26) != v25 );
  v29 = (const char *)v23[1];
  if ( v29 )
  {
    v30 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v30, &unk_408DC7);
    v31 = setlocale(5, 0LL);
    if ( !v31 || !strncmp(v31, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v34 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v34, &unk_408DC7);
    v35 = setlocale(5, 0LL);
    if ( !v35 || !strncmp(v35, "en_", 3uLL) )
    {
      v29 = "join";
      v36 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v36, "https://www.gnu.org/software/coreutils/");
      goto LABEL_14;
    }
    v29 = "join";
  }
  v37 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v37, "join");
LABEL_13:
  v32 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v32, "https://www.gnu.org/software/coreutils/");
LABEL_14:
  v33 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v33, v29);
LABEL_3:
  exit(v1);
}

signed __int64 __fastcall sub_4038B0(char *a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  char *v6; // r13@1
  _DWORD *v7; // r12@1
  int v8; // ebx@1
  __int64 v9; // rax@2
  signed __int64 v10; // rcx@2
  signed __int64 result; // rax@2
  int v12; // er14@6
  __int64 v13; // rax@6
  char *v14; // rdi@6
  signed int v15; // eax@6
  _DWORD *v16; // ST08_8@10
  _DWORD *v17; // ST00_8@10
  __int64 v18; // rax@14
  __int64 v19; // rbx@14
  char *v20; // rax@14
  _DWORD *v21; // ST08_8@17
  _DWORD *v22; // ST00_8@17
  __int64 v23; // rax@17
  _DWORD *v24; // ST08_8@18
  _DWORD *v25; // ST00_8@18
  __int64 v26; // rax@18

  v6 = a1;
  v7 = a4;
  v8 = *a4;
  if ( *a4 == 2 )
  {
    v12 = *(_DWORD *)a2;
    v13 = *(_DWORD *)a2 == 0;
    v14 = (&qword_60D390)[8 * v13];
    v15 = *(_DWORD *)(a2 + 4 * v13);
    if ( v15 == 1 )
    {
      --*(_DWORD *)a3;
      v24 = a6;
      v25 = a5;
      v26 = sub_402910(v14);
      sub_4028C0(&qword_60D228, v26);
      a5 = v25;
      a6 = v24;
    }
    else if ( v15 <= 1 )
    {
      if ( !v15 )
      {
        LODWORD(v18) = sub_4057B0(4LL, v6);
        v19 = v18;
        v20 = dcgettext(0LL, "extra operand %s", 5);
        error(0, 0, v20, v19);
        sub_4034F0(1);
      }
    }
    else if ( v15 == 2 )
    {
      --*(_DWORD *)(a3 + 4);
      v21 = a6;
      v22 = a5;
      v23 = sub_402910(v14);
      sub_4028C0(&qword_60D220, v23);
      a5 = v22;
      a6 = v21;
    }
    else if ( v15 == 3 )
    {
      v16 = a6;
      v17 = a5;
      sub_402990(v14);
      a6 = v16;
      a5 = v17;
    }
    if ( v12 )
    {
      v10 = 4LL;
      *(_DWORD *)a2 = *(_DWORD *)(a2 + 4);
      qword_60D390 = qword_60D398;
      result = 8LL;
    }
    else
    {
      result = 8LL;
      v10 = 4LL;
    }
  }
  else
  {
    v9 = v8++;
    v10 = 4 * v9;
    result = 8 * v9;
  }
  *(_DWORD *)(a2 + v10) = *a5;
  (&qword_60D390)[result] = v6;
  *v7 = v8;
  if ( *a5 == 3 )
    *a6 = 3;
  return result;
}

__int64 sub_403A60()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_4079D0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60D3C0 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60D3C8 )
      {
        LODWORD(v5) = sub_405850(qword_60D3C8, "write error");
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
  result = sub_4079D0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

void __fastcall sub_403B10(FILE *a1, int a2)
{
  int v2; // eax@2

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

FILE *__fastcall sub_403B40(const char *a1, const char *a2)
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
      v6 = sub_405A20((unsigned int)v4);
      if ( v6 < 0 )
      {
        v10 = __errno_location();
        v11 = v3;
        v3 = 0LL;
        v12 = *v10;
        v13 = v10;
        sub_406810(v11);
        *v13 = v12;
      }
      else if ( (unsigned int)sub_406810(v3) || (v3 = fdopen(v6, a2)) == 0LL )
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

bool __fastcall sub_403BE0(int a1)
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

__int64 __fastcall sub_403C50(__int64 a1, _IO_FILE *a2, char a3)
{
  int v3; // er13@1
  _IO_FILE *v4; // rbx@1
  _BYTE *v5; // r14@1
  _BYTE *v6; // rsi@1
  _BYTE *v7; // r15@1
  int v8; // ebp@3
  char v9; // dl@4
  _BYTE *v10; // rax@5
  char *v11; // rdx@7
  char v12; // ST00_1@14
  __int64 v13; // r15@14
  _BYTE *v14; // rax@14
  __int64 v15; // rsi@14
  signed __int64 v17; // rax@16
  char v18; // [sp+Bh] [bp-3Dh]@1
  char v19; // [sp+Ch] [bp-3Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = *(_BYTE **)(a1 + 16);
  v19 = a3;
  v18 = a3;
  v6 = &v5[*(_QWORD *)a1];
  v7 = *(_BYTE **)(a1 + 16);
  if ( v4->_flags & 0x10 )
    return 0LL;
  while ( 1 )
  {
    v11 = v4->_IO_read_ptr;
    if ( v11 < v4->_IO_read_end )
    {
      v4->_IO_read_ptr = v11 + 1;
      v8 = (unsigned __int8)*v11;
      goto LABEL_4;
    }
    v8 = __uflow(v4);
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
  if ( v5 == v7 || v4->_flags & 0x20 )
    return 0LL;
  if ( *(v7 - 1) != v18 )
  {
    v8 = v3;
    if ( v7 != v6 )
    {
      v17 = (signed __int64)(v7 + 1);
      *v7 = v19;
      goto LABEL_17;
    }
    v9 = v18;
LABEL_14:
    v12 = v9;
    v13 = *(_QWORD *)a1;
    LODWORD(v14) = sub_406130(v5, a1);
    v15 = *(_QWORD *)a1;
    v9 = v12;
    v5 = v14;
    v10 = &v14[v13];
    *(_QWORD *)(a1 + 16) = v5;
    v6 = &v5[v15];
    goto LABEL_6;
  }
LABEL_18:
  v17 = (signed __int64)v7;
LABEL_17:
  *(_QWORD *)(a1 + 8) = v17 - (_QWORD)v5;
  return a1;
}

__int64 __fastcall sub_403D90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx@2
  const __int32_t **v4; // rax@2
  __int64 v5; // rcx@2
  const __int32_t *v6; // r8@2
  __int64 result; // rax@4

  if ( a3 )
  {
    v3 = a3;
    v4 = __ctype_toupper_loc();
    v5 = 0LL;
    v6 = *v4;
    do
    {
      result = (unsigned int)(v6[*(_BYTE *)(a1 + v5)] - v6[*(_BYTE *)(a2 + v5)]);
      if ( v6[*(_BYTE *)(a1 + v5)] != v6[*(_BYTE *)(a2 + v5)] )
        break;
      ++v5;
    }
    while ( v5 != v3 );
  }
  else
  {
    result = 0LL;
  }
  return result;
}

char *__fastcall sub_403DE0(const char *a1)
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
  qword_60D3D0 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_403E80(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_407A30(0LL);
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

unsigned __int64 __fastcall sub_403F80(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_403E80("`", v11);
        v58 = sub_403E80("'", v11);
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
            return sub_403F80((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_403F80((__int64)v9, v79, s);
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
                return sub_403F80((__int64)v9, v10, s);
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
              return sub_403F80((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_403F80((__int64)v9, v10, s);
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
              return sub_403F80((__int64)v9, v10, s);
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
              return sub_403F80((__int64)v9, v10, s);
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
            return sub_403F80((__int64)v9, v10, s);
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
            return sub_403F80((__int64)v9, v10, s);
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
            return sub_403F80((__int64)v9, v10, s);
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
              return sub_403F80((__int64)v9, v10, s);
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
          return sub_403F80((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_403F80((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_407840((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_403F80((__int64)v9, v10, s);
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
      return sub_403F80((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_403F80(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_403E80("`", v11);
        v58 = sub_403E80("'", v11);
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
            return sub_403F80((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_403F80((__int64)v9, v79, s);
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
                return sub_403F80((__int64)v9, v10, s);
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
              return sub_403F80((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_403F80((__int64)v9, v10, s);
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
              return sub_403F80((__int64)v9, v10, s);
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
              return sub_403F80((__int64)v9, v10, s);
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
            return sub_403F80((__int64)v9, v10, s);
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
            return sub_403F80((__int64)v9, v10, s);
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
            return sub_403F80((__int64)v9, v10, s);
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
              return sub_403F80((__int64)v9, v10, s);
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
          return sub_403F80((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_403F80((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_407840((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_403F80((__int64)v9, v10, s);
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
      return sub_403F80((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_4051B0(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60D278;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_60D290 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_406220(a1, a2);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_60D278 == &xmmword_60D280 )
    {
      LODWORD(v20) = sub_406030(0LL, v9);
      v7 = v20;
      off_60D278 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60D280);
    }
    else
    {
      LODWORD(v10) = sub_406030(off_60D278, v9);
      off_60D278 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60D290], 0, 16LL * ((signed int)a1 + 1 - dword_60D290));
    dword_60D290 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_403F80(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60D3E0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_405FD0(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_403F80(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_4051B0(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_60D278;
  v8 = v6;
  v22 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_60D290 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_406220(a1, a2);
    v9 = 16LL * ((signed int)a1 + 1);
    if ( off_60D278 == &xmmword_60D280 )
    {
      LODWORD(v20) = sub_406030(0LL, v9);
      v7 = v20;
      off_60D278 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60D280);
    }
    else
    {
      LODWORD(v10) = sub_406030(off_60D278, v9);
      off_60D278 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60D290], 0, 16LL * ((signed int)a1 + 1 - dword_60D290));
    dword_60D290 = a1 + 1;
  }
  v11 = (signed __int64)&v7[(signed int)a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_403F80(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60D3E0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_405FD0(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_403F80(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_4056D0(__int64 a1, int a2, char *a3)
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
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_4051B0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4056D0(__int64 a1, int a2, char *a3)
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
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_4051B0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_405740(__int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  int v5; // [sp+0h] [bp-48h]@2
  int v6; // [sp+4h] [bp-44h]@2
  __int64 v7; // [sp+8h] [bp-40h]@2
  __int64 v8; // [sp+10h] [bp-38h]@2
  __int64 v9; // [sp+18h] [bp-30h]@2
  __int64 v10; // [sp+20h] [bp-28h]@2
  __int64 v11; // [sp+28h] [bp-20h]@2
  __int64 v12; // [sp+30h] [bp-18h]@2

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
  return sub_4051B0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_405740(__int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  int v5; // [sp+0h] [bp-48h]@2
  int v6; // [sp+4h] [bp-44h]@2
  __int64 v7; // [sp+8h] [bp-40h]@2
  __int64 v8; // [sp+10h] [bp-38h]@2
  __int64 v9; // [sp+18h] [bp-30h]@2
  __int64 v10; // [sp+20h] [bp-28h]@2
  __int64 v11; // [sp+28h] [bp-20h]@2
  __int64 v12; // [sp+30h] [bp-18h]@2

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
  return sub_4051B0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_4057B0(int a1, char *a2)
{
  return sub_4056D0(0LL, a1, a2);
}

_BYTE *__fastcall sub_4057D0(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_60D510;
  v4 = _mm_load_si128((const __m128i *)&xmmword_60D4E0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_60D4F0);
  v6 = _mm_load_si128((const __m128i *)&xmmword_60D500);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_4051B0(0LL, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_405850(char *a1)
{
  return sub_4057D0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_405880(__int64 a1, int a2, char *a3)
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
  return sub_4051B0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_405880(__int64 a1, int a2, char *a3)
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
  return sub_4051B0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_405A00(char *a1)
{
  return sub_4051B0(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60D240);
}

__int64 __fastcall sub_405A20(char a1)
{
  return sub_406890(a1);
}

int __fastcall sub_405A30(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_405A30(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_405E90(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_405A30(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_405A30(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_405FD0(size_t a1, __int64 a2)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_406220(a1, a2);
  }
  return result;
}

void *__fastcall sub_406030(void *a1, size_t a2)
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
        sub_406220(a1, a2);
    }
  }
  return result;
}

void *__fastcall sub_406130(void *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax@1

  v2 = *a2;
  if ( a1 )
  {
    if ( v2 <= 0x5555555555555553LL )
    {
      v2 += (v2 >> 1) + 1;
LABEL_4:
      *a2 = v2;
      return sub_406030(a1, v2);
    }
LABEL_8:
    sub_406220(a1, a2);
  }
  if ( v2 )
  {
    if ( (v2 & 0x8000000000000000LL) == 0LL )
      goto LABEL_4;
    goto LABEL_8;
  }
  *a2 = 128LL;
  return sub_406030(0LL, 0x80uLL);
}

void *__fastcall sub_4061A0(size_t a1, size_t a2)
{
  void *result; // rax@3

  if ( (a2 * a1 & 0x8000000000000000LL) != 0LL
    || a2 * (unsigned __int128)a1 >> 64 != 0
    || (result = calloc(a1, a2)) == 0LL )
  {
    sub_406220(a1, a2);
  }
  return result;
}

void *__fastcall sub_4061D0(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_405FD0(a2, a2);
  return memcpy(v2, a1, a2);
}

noreturn void  sub_406220()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

void __fastcall sub_406260(int errnum, char *a2, unsigned __int64 a3, char *a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r13@1
  unsigned __int64 v6; // r12@1
  char *v7; // rbp@1
  char *v8; // rax@1
  char *v9; // rax@1
  _BYTE *v10; // rbp@1
  _BYTE *v11; // rbx@1
  char *v12; // rax@1

  v5 = a5;
  v6 = a3;
  v7 = a4;
  v8 = dcgettext(0LL, "string comparison failed", 5);
  error(0, errnum, v8);
  v9 = dcgettext(0LL, "Set LC_ALL='C' to work around the problem.", 5);
  error(0, 0, v9);
  v10 = sub_405740(1LL, 8, v7, v5);
  v11 = sub_405740(0LL, 8, a2, v6);
  v12 = dcgettext(0LL, "The strings compared were %s and %s.", 5);
  error(status, 0, v12, v11, v10);
}

__int64 __fastcall sub_406320(char *a1, size_t a2, char *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r13@1
  char *v5; // r12@1
  char *v6; // rbx@1
  unsigned int v7; // er14@1
  int v8; // edi@1
  __int64 result; // rax@2

  v4 = a4;
  v5 = a3;
  v6 = a1;
  v7 = sub_408060(a1, a2, a3);
  v8 = *__errno_location();
  if ( v8 )
  {
    sub_406260(v8, v6, a2, v5, v4);
    result = v7;
  }
  else
  {
    result = v7;
  }
  return result;
}

__int64 __fastcall sub_4063E0(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
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
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoul");
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
  v13 = strtoul(nptr, v5, v35);
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

int __fastcall sub_406810(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_4069D0(stream) )
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

__int64 __fastcall sub_406890(char a1, int a2, __int64 a3, __int64 a4)
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
    if ( dword_60D518 < 0 )
    {
      v4 = sub_406890(a1);
      if ( v4 >= 0 && dword_60D518 == -1 )
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
        dword_60D518 = 1;
      }
      else
      {
        v4 = sub_406890(a1);
        if ( v4 >= 0 )
        {
          dword_60D518 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

int __fastcall sub_4069D0(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_406A10(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_406A10(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_406A70(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_406B50(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_407170(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_406A70(a2, a7);
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
        sub_406A70((__int64)v11, a7);
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
            v40 = sub_406B50(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_406B50(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_406B50(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_407740(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_60D520 = dword_60D29C;
  dword_60D524 = dword_60D298;
  result = sub_407170(a1, a2, a3, a4, a5, a6, (__int64)&dword_60D520, a7);
  dword_60D29C = dword_60D520;
  nptr = (char *)qword_60D530;
  dword_60D294 = dword_60D528;
  return result;
}

__int64 __fastcall sub_4077C0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_407740(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_407840(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx@2
  wchar_t *v5; // r12@3
  char *v6; // rbp@3
  char v8; // [sp+Ch] [bp-1Ch]@7

  if ( !s )
  {
    a3 = 1LL;
    v6 = ", \t" + 3;
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !sub_403BE0(0) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

_BYTE *__fastcall sub_4078C0(_BYTE *a1, __int16 a2, unsigned __int64 a3)
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

int __fastcall sub_4079D0(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  int result; // eax@1

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_406810(stream);
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

const char *sub_407A30()
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
          v1 = ", \t" + 3;
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
                v1 = ", \t" + 3;
                v2 = v59;
                free(v60);
                sub_406810(v61);
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
            sub_406810(v40);
            if ( !v62 )
              goto LABEL_25;
            v1[v62] = 0;
            goto LABEL_26;
          }
          close(v18);
        }
LABEL_25:
        v1 = ", \t" + 3;
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

int __fastcall sub_407FA0(char *s1, __int64 a2, const char *a3, __int64 a4)
{
  __int64 v4; // r14@1
  __int64 v5; // r13@1
  char *v6; // r12@1
  const char *v7; // rbp@1
  int *v8; // r15@1
  size_t v9; // rbx@2
  size_t v10; // rax@2
  int result; // eax@4

  v4 = a2;
  v5 = a4;
  v6 = s1;
  v7 = a3;
  v8 = __errno_location();
  while ( 1 )
  {
    *v8 = 0;
    result = strcoll(v6, v7);
    if ( result )
      break;
    v9 = strlen(v6) + 1;
    v6 += v9;
    v10 = strlen(v7) + 1;
    v7 += v10;
    v5 -= v10;
    v4 -= v9;
    if ( !v4 )
      return -(v5 != 0);
    if ( !v5 )
      return 1;
  }
  return result;
}

__int64 __fastcall sub_408060(char *s1, size_t n, void *s2, __int64 a4)
{
  const char *v4; // r13@1
  __int64 v5; // rbp@1
  char v6; // r9@3
  char v7; // r8@3
  char v8; // ST0F_1@3
  char v9; // ST08_1@3
  int v10; // edx@3
  int *v12; // rax@5

  v4 = (const char *)s2;
  v5 = a4;
  if ( n == a4 && !memcmp(s1, s2, n) )
  {
    v12 = __errno_location();
    v10 = 0;
    *v12 = 0;
  }
  else
  {
    v6 = s1[n];
    v7 = v4[v5];
    s1[n] = 0;
    v4[v5] = 0;
    v8 = v6;
    v9 = v7;
    v10 = sub_407FA0(s1, n + 1, v4, v5 + 1);
    s1[n] = v8;
    v4[v5] = v9;
  }
  return (unsigned int)v10;
}

int __fastcall sub_408110(char *s1, size_t n, void *s2, __int64 a4)
{
  const char *v4; // r13@1
  __int64 v5; // rbp@1
  int result; // eax@3

  v4 = (const char *)s2;
  v5 = a4;
  if ( n == a4 && !memcmp(s1, s2, n) )
  {
    *__errno_location() = 0;
    result = 0;
  }
  else
  {
    result = sub_407FA0(s1, n, v4, v5);
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

int __fastcall sub_4081F0(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_60D208 )
    v1 = unk_60D208;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_408208(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_60CE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
