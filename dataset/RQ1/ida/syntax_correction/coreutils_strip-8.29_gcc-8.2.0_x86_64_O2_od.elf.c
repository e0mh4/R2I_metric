
#include "decompile_idapro.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  unsigned __int64 v3; // r15
  char **v5; // rbp
  __int64 i; // rax
  __int64 j; // rax
  char *v8; // rbx
  char *v9; // r14
  char v10; // r13
  unsigned __int64 v11; // rsi
  char *v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  char v20; // r13
  __int64 v21; // rax
  char *v22; // rdx
  int v23; // r12d
  void **v24; // rax
  __int64 v25; // rax
  __int64 v26; // r10
  __int64 v27; // r11
  int v28; // r8d
  unsigned int *v29; // rdi
  unsigned __int64 v30; // rax
  unsigned __int64 k; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // r12
  char *v34; // rax
  unsigned int *v35; // rcx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rdi
  unsigned int *v38; // rsi
  __int64 v39; // r9
  int v40; // edx
  __int64 v41; // rax
  int v42; // r12d
  __int64 v43; // rdi
  __int64 v44; // rax
  unsigned __int64 v45; // r13
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rbx
  const unsigned __int16 **v48; // rax
  int v49; // eax
  int v50; // ebp
  int v52; // eax
  __int64 v53; // rbx
  char *v54; // rax
  char *v55; // rax
  char *v56; // rax
  int v57; // r13d
  void *v58; // rbp
  int v59; // eax
  unsigned __int64 v60; // rbx
  __int64 v61; // rdi
  int v62; // r8d
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // rax
  unsigned __int64 m; // rcx
  unsigned __int64 v66; // rdx
  __int64 v67; // rdi
  void *v68; // rbp
  int v69; // eax
  unsigned __int64 v70; // rdi
  char *v71; // rbx
  char v72; // dl
  char *IO_write_ptr; // rax
  char *v74; // rax
  char *v75; // rax
  char *v76; // rax
  char *v77; // rax
  unsigned int v78; // [rsp+4h] [rbp-64h]
  void *v79; // [rsp+8h] [rbp-60h]
  unsigned __int64 v80; // [rsp+18h] [rbp-50h] BYREF
  void *ptr[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a2;
  sub_4055F0(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40C270(sub_4051B0);
  for ( i = 0LL; i != 9; ++i )
    dword_6123A0[i] = 0;
  dword_6123B0 = 3;
  dword_6123C0 = 5;
  qword_6123A4 = 0x200000001LL;
  for ( j = 0LL; j != 17; ++j )
    dword_612340[j] = 0;
  dword_612350 = 6;
  LODWORD(v8) = 1;
  LOBYTE(v9) = 0;
  v10 = 0;
  dword_612380 = 8;
  dword_612360 = 7;
  qword_6123F0 = 0LL;
  qword_6123E8 = 0LL;
  qword_6123F8 = 0LL;
  qword_612420 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_402D50;
  dword_612444 = 8;
  dword_612440 = 7;
  byte_612432 = 0;
  while ( 1 )
  {
    v11 = (unsigned __int64)v5;
    v12 = (char *)a1;
    LODWORD(v80) = -1;
    v13 = sub_408F90(a1, v5, "A:aBbcDdeFfHhIij:LlN:OoS:st:vw::Xx", &off_40CF80, &v80);
    if ( v13 == -1 )
      break;
    switch ( v13 )
    {
      case -131:
        sub_407690(
          (_DWORD)stdout,
          (unsigned int)"od",
          (unsigned int)&unk_40C41A,
          (_DWORD)off_612258,
          (unsigned int)"Jim Meyering",
          0);
        exit(0);
      case -130:
        sub_404960(0);
      case 65:
        v20 = *nptr;
        if ( *nptr == 110 )
        {
          dword_612440 = 0;
          v10 = 1;
          qword_612420 = (__int64 (__fastcall *)(_QWORD, _QWORD))nullsub_1;
        }
        else if ( v20 <= 110 )
        {
          if ( v20 != 100 )
          {
LABEL_207:
            v77 = dcgettext(0LL, "invalid output address radix '%c'; it must be one character from [doxn]", 5);
            error(1, 0, v77, (unsigned int)v20);
LABEL_208:
            __assert_fail("s != NULL", "src/od.c", 0x3D7u, "decode_format_string");
          }
          dword_612444 = 10;
          v10 = 1;
          qword_612420 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_402D50;
          dword_612440 = 7;
        }
        else if ( v20 == 111 )
        {
          dword_612444 = 8;
          v10 = 1;
          qword_612420 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_402D50;
          dword_612440 = 7;
        }
        else
        {
          if ( v20 != 120 )
            goto LABEL_207;
          dword_612444 = 16;
          v10 = 1;
          qword_612420 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_402D50;
          dword_612440 = 6;
        }
        break;
      case 66:
      case 111:
        LODWORD(v8) = sub_4040C0("o2", v5, v14) & (unsigned int)v8;
        continue;
      case 68:
        LODWORD(v8) = sub_4040C0("u4", v5, v14) & (unsigned int)v8;
        continue;
      case 70:
      case 101:
        LODWORD(v8) = sub_4040C0("fD", v5, v14) & (unsigned int)v8;
        continue;
      case 72:
      case 88:
        LODWORD(v8) = sub_4040C0("x4", v5, v14) & (unsigned int)v8;
        continue;
      case 73:
      case 76:
      case 108:
        LODWORD(v8) = sub_4040C0("dL", v5, v14) & (unsigned int)v8;
        continue;
      case 78:
        byte_612410 = 1;
        v19 = sub_407CE0(nptr);
        if ( v19 )
          sub_407C50(v19, (unsigned int)v80, 78LL, &off_40CF80, nptr);
        goto LABEL_20;
      case 79:
        LODWORD(v8) = sub_4040C0("o4", v5, v14) & (unsigned int)v8;
        continue;
      case 83:
        if ( nptr )
        {
          v18 = sub_407CE0(nptr);
          if ( v18 )
            sub_407C50(v18, (unsigned int)v80, 83LL, &off_40CF80, nptr);
          qword_612438 = (__int64)ptr[0];
        }
        else
        {
          qword_612438 = 3LL;
        }
        byte_612432 = 1;
        v10 = 1;
        continue;
      case 97:
        LODWORD(v8) = sub_4040C0("a", v5, v14) & (unsigned int)v8;
        continue;
      case 98:
        LODWORD(v8) = sub_4040C0("o1", v5, v14) & (unsigned int)v8;
        continue;
      case 99:
        LODWORD(v8) = sub_4040C0("c", v5, v14) & (unsigned int)v8;
        continue;
      case 100:
        LODWORD(v8) = sub_4040C0("u2", v5, v14) & (unsigned int)v8;
        continue;
      case 102:
        LODWORD(v8) = sub_4040C0("fF", v5, v14) & (unsigned int)v8;
        continue;
      case 104:
      case 120:
        LODWORD(v8) = sub_4040C0("x2", v5, v14) & (unsigned int)v8;
        continue;
      case 105:
        LODWORD(v8) = sub_4040C0("dI", v5, v14) & (unsigned int)v8;
        continue;
      case 106:
        v17 = sub_407CE0(nptr);
        if ( v17 )
          sub_407C50(v17, (unsigned int)v80, 106LL, &off_40CF80, nptr);
LABEL_20:
        v10 = 1;
        continue;
      case 115:
        LODWORD(v8) = sub_4040C0("d2", v5, v14) & (unsigned int)v8;
        continue;
      case 116:
        if ( !nptr )
          goto LABEL_208;
        v10 = 1;
        LODWORD(v8) = sub_4040C0(nptr, v5, v14) & (unsigned int)v8;
        continue;
      case 118:
        byte_612251 = 0;
        v10 = 1;
        continue;
      case 119:
        if ( nptr )
        {
          v16 = sub_407CE0(nptr);
          if ( v16 )
            goto LABEL_206;
          v3 = (unsigned __int64)ptr[0];
          LOBYTE(v9) = 1;
          v10 = 1;
        }
        else
        {
          LOBYTE(v9) = 1;
          v10 = 1;
          v3 = 32LL;
        }
        continue;
      case 128:
        byte_612431 = 1;
        continue;
      case 129:
        v15 = dword_40D100[sub_4050D0("--endian", nptr, off_40D110, dword_40D100, 4LL, off_612260)];
        if ( v15 )
        {
          if ( v15 == 1 )
            byte_612321 = 1;
        }
        else
        {
          byte_612321 = 0;
        }
        continue;
      default:
        goto LABEL_130;
    }
  }
  if ( (_BYTE)v8 )
  {
    if ( byte_612432 && qword_6123F0 )
    {
      v76 = dcgettext(0LL, "no type may be specified when dumping strings", 5);
      error(1, 0, v76);
LABEL_206:
      sub_407C50(v16, (unsigned int)v80, 119LL, &off_40CF80, nptr);
    }
    v21 = dword_6122DC;
    v22 = (char *)(unsigned __int8)byte_612431;
    v23 = a1 - dword_6122DC;
    if ( v10 )
    {
      if ( !byte_612431 )
        goto LABEL_59;
      if ( v23 != 2 )
      {
        if ( v23 != 3 )
        {
          if ( v23 != 1 )
            goto LABEL_58;
          goto LABEL_111;
        }
        goto LABEL_131;
      }
    }
    else if ( v23 != 2 )
    {
      if ( v23 != 3 )
      {
        if ( v23 != 1 )
        {
LABEL_58:
          if ( v23 > 1 && byte_612431 )
            goto LABEL_129;
          goto LABEL_59;
        }
        if ( !byte_612431 && *v5[dword_6122DC] != 43 )
        {
LABEL_173:
          v23 = 1;
          goto LABEL_59;
        }
LABEL_111:
        v12 = v5[dword_6122DC];
        v11 = (unsigned __int64)&v80;
        if ( (unsigned __int8)sub_402E40(v12) )
        {
          ++v5;
          v23 = 0;
          qword_612418 = v80;
          goto LABEL_59;
        }
        goto LABEL_173;
      }
LABEL_131:
      v23 = 3;
      if ( !byte_612431 )
        goto LABEL_59;
      v12 = v5[dword_6122DC + 1];
      v11 = (unsigned __int64)&v80;
      if ( (unsigned __int8)sub_402E40(v12) )
      {
        v11 = (unsigned __int64)ptr;
        v12 = v5[dword_6122DC + 2];
        if ( (unsigned __int8)sub_402E40(v12) )
        {
          byte_612430 = 1;
          v23 = 1;
          qword_612418 = v80;
          v79 = ptr[0];
          v22 = v5[dword_6122DC];
          v5[dword_6122DC + 2] = v22;
          v5 += 2;
          goto LABEL_59;
        }
      }
      v23 = 3;
      goto LABEL_134;
    }
    v12 = v5[dword_6122DC + 1];
    if ( !byte_612431 && *v12 != 43 && (unsigned int)(*v12 - 48) > 9 )
    {
      v23 = 2;
      goto LABEL_59;
    }
    v11 = (unsigned __int64)ptr;
    if ( (unsigned __int8)sub_402E40(v12) )
    {
      if ( byte_612431 && (v11 = (unsigned __int64)&v80, v12 = v5[dword_6122DC], (unsigned __int8)sub_402E40(v12)) )
      {
        byte_612430 = 1;
        v5 += 2;
        v23 = 0;
        qword_612418 = v80;
        v79 = ptr[0];
      }
      else
      {
        v23 = 1;
        qword_612418 = (__int64)ptr[0];
        v22 = v5[dword_6122DC];
        v5[dword_6122DC + 1] = v22;
        ++v5;
      }
LABEL_59:
      if ( byte_612430 )
      {
        if ( (char *)qword_612420 == (char *)nullsub_1 )
        {
          dword_612444 = 8;
          dword_612440 = 7;
          qword_612420 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_404010;
        }
        else
        {
          qword_612420 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_404090;
        }
      }
      if ( byte_612410 )
      {
        qword_612400 = qword_612418 + qword_612408;
        if ( __CFADD__(qword_612418, qword_612408) )
        {
          v75 = dcgettext(0LL, "skip-bytes + read-bytes is too large", 5);
          error(1, 0, v75);
LABEL_202:
          __assert_fail("n_bytes_read == bytes_per_block", "src/od.c", 0x575u, "dump");
        }
      }
      if ( !qword_6123F0 )
        goto LABEL_116;
      while ( 1 )
      {
        v24 = &off_40D170;
        if ( v23 > 0 )
          v24 = (void **)&v5[dword_6122DC];
        qword_6123D0 = (__int64)v24;
        v23 = sub_403A50(v12, v11, v22);
        if ( !stream )
          goto LABEL_103;
        v23 &= sub_403B50(qword_612418);
        v78 = (unsigned __int8)v23;
        if ( !stream )
          goto LABEL_103;
        v25 = 0LL;
        if ( byte_612430 )
          v25 = (__int64)v79 - qword_612418;
        v26 = qword_6123F0;
        qword_612428 = v25;
        if ( qword_6123F0 )
        {
          v27 = qword_6123F8;
          v28 = 1;
          v29 = (unsigned int *)(qword_6123F8 + 4);
          do
          {
            v11 = dword_40D220[*v29];
            v30 = v28;
            for ( k = v11; ; k = v32 )
            {
              v32 = v30 % k;
              v30 = k;
              if ( !v32 )
                break;
            }
            v29 += 10;
            v28 *= (unsigned int)(v11 / k);
          }
          while ( (unsigned int *)(qword_6123F8 + 40 * qword_6123F0 + 4) != v29 );
          if ( !(_BYTE)v9 )
          {
            if ( v28 > 15 )
            {
              qword_6123E0 = v28;
LABEL_82:
              v35 = (unsigned int *)(v27 + 4);
              v36 = qword_6123E0;
              v37 = 0LL;
              v38 = (unsigned int *)(v27 + 4);
              v39 = v27 + 40 * v26 + 4;
              do
              {
                v40 = qword_6123E0 / (unsigned __int64)dword_40D220[*v38] * (v38[6] + 1);
                if ( v37 < v40 )
                  v37 = v40;
                v38 += 10;
              }
              while ( (unsigned int *)v39 != v38 );
              do
              {
                v41 = *v35;
                v35 += 10;
                v11 = (unsigned int)v37 - *(v35 - 4) * (unsigned int)(v36 / dword_40D220[v41]);
                *(v35 - 3) = v11;
              }
              while ( (unsigned int *)v39 != v35 );
              goto LABEL_87;
            }
LABEL_127:
            qword_6123E0 = v28 * (16 / v28);
            goto LABEL_81;
          }
          v33 = v28;
          if ( !v3 || v3 % v28 )
            goto LABEL_80;
        }
        else
        {
          v28 = 1;
          if ( !(_BYTE)v9 )
            goto LABEL_127;
          if ( !v3 )
          {
            v33 = 1LL;
            v28 = 1;
LABEL_80:
            LODWORD(v79) = v28;
            v34 = dcgettext(0LL, "warning: invalid width %lu; using %d instead", 5);
            v11 = 0LL;
            error(0, 0, v34, v3, (unsigned int)v79);
            qword_6123E0 = v33;
            v26 = qword_6123F0;
            goto LABEL_81;
          }
        }
        qword_6123E0 = v3;
LABEL_81:
        v27 = qword_6123F8;
        if ( v26 )
          goto LABEL_82;
LABEL_87:
        v42 = (unsigned __int8)byte_612432;
        if ( byte_612432 )
        {
          v43 = 100LL;
          if ( (unsigned __int64)qword_612438 >= 0x64 )
            v43 = qword_612438;
          ptr[0] = (void *)v43;
          v44 = sub_4077D0(v43);
          v45 = qword_612418;
          v9 = (char *)v44;
LABEL_91:
          v46 = qword_612438;
          while ( 1 )
          {
LABEL_92:
            v47 = v46;
            if ( byte_612410 && (qword_612400 < v46 || qword_612400 - v46 <= v45) )
            {
              free(v9);
              LOBYTE(v42) = sub_4038F0(0) & v42;
              goto LABEL_101;
            }
            if ( v46 )
              break;
LABEL_123:
            while ( !byte_612410 || v45 < qword_612400 )
            {
              if ( ptr[0] == (void *)v47 )
                v9 = (char *)sub_407930(v9, ptr);
              ++v45;
              v52 = sub_403D20(&v80);
              v3 = (unsigned int)v80;
              v42 &= v52;
              if ( (v80 & 0x80000000) != 0LL )
                goto LABEL_100;
              if ( !(_DWORD)v80 )
                break;
              if ( ((*__ctype_b_loc())[(int)v3] & 0x4000) == 0 )
                goto LABEL_91;
              v9[v47++] = v3;
            }
            v9[v47] = 0;
            v70 = ~v47;
            v71 = v9;
            qword_612420(v45 + v70, 32LL);
            while ( 1 )
            {
              v72 = *v71;
              LODWORD(v80) = *v71;
              if ( !v72 )
                break;
              switch ( v72 )
              {
                case 7:
                  fwrite_unlocked("\\a", 1uLL, 2uLL, stdout);
                  break;
                case 8:
                  fwrite_unlocked("\\b", 1uLL, 2uLL, stdout);
                  break;
                case 9:
                  fwrite_unlocked("\\t", 1uLL, 2uLL, stdout);
                  break;
                case 10:
                  fwrite_unlocked("\\n", 1uLL, 2uLL, stdout);
                  break;
                case 11:
                  fwrite_unlocked("\\v", 1uLL, 2uLL, stdout);
                  break;
                case 12:
                  fwrite_unlocked("\\f", 1uLL, 2uLL, stdout);
                  break;
                case 13:
                  fwrite_unlocked(&unk_40C2F4, 1uLL, 2uLL, stdout);
                  break;
                default:
                  IO_write_ptr = stdout->_IO_write_ptr;
                  if ( IO_write_ptr >= stdout->_IO_write_end )
                  {
                    __overflow(stdout, 2);
                  }
                  else
                  {
                    stdout->_IO_write_ptr = IO_write_ptr + 1;
                    *IO_write_ptr = 2;
                  }
                  break;
              }
              ++v71;
            }
            v74 = stdout->_IO_write_ptr;
            if ( v74 >= stdout->_IO_write_end )
            {
              __overflow(stdout, 10);
              v46 = qword_612438;
            }
            else
            {
              v46 = qword_612438;
              stdout->_IO_write_ptr = v74 + 1;
              *v74 = 10;
            }
          }
          v47 = 0LL;
          v3 = v45 + 1;
          while ( 1 )
          {
            v45 = v3 + v47;
            v49 = sub_403D20(&v80);
            v50 = v80;
            v42 &= v49;
            if ( (v80 & 0x80000000) != 0LL )
              break;
            v48 = __ctype_b_loc();
            v46 = qword_612438;
            if ( ((*v48)[v50] & 0x4000) == 0 )
              goto LABEL_92;
            v9[v47++] = v50;
            if ( v47 >= v46 )
              goto LABEL_123;
          }
LABEL_100:
          free(v9);
LABEL_101:
          v42 = (unsigned __int8)v42;
        }
        else
        {
          if ( (qword_6123E0 & 0x4000000000000000LL) != 0 || !is_mul_ok(qword_6123E0, 2uLL) )
            sub_407A20(qword_6123E0, v11, ((unsigned __int64)qword_6123E0 * (unsigned __int128)2uLL) >> 64 != 0);
          v56 = (char *)sub_4077D0(2 * qword_6123E0);
          v57 = (unsigned __int8)byte_612410;
          v9 = (char *)qword_612418;
          ptr[0] = v56;
          ptr[1] = &v56[qword_6123E0];
          if ( byte_612410 )
          {
            while ( qword_612400 > (unsigned __int64)v9 )
            {
              v67 = qword_612400 - (_QWORD)v9;
              v68 = ptr[(unsigned __int8)v42];
              v3 = (unsigned __int8)v42;
              if ( qword_612400 - (__int64)v9 > (unsigned __int64)qword_6123E0 )
                v67 = qword_6123E0;
              v69 = sub_4048A0(v67, ptr[(unsigned __int8)v42], &v80);
              v60 = v80;
              v57 &= v69;
              if ( v80 < qword_6123E0 )
                goto LABEL_148;
              if ( v80 != qword_6123E0 )
                goto LABEL_202;
              LOBYTE(v42) = v42 ^ 1;
              sub_403D80(v9, v80, ptr[(unsigned __int8)v42], v68);
              v9 += v80;
            }
            v80 = 0LL;
          }
          else
          {
            v3 = 0LL;
            while ( 1 )
            {
              v58 = ptr[(int)v3];
              v59 = (unsigned int)v8 & sub_4048A0(qword_6123E0, v58, &v80);
              v60 = v80;
              v57 = v59;
              if ( v80 < qword_6123E0 )
                break;
              if ( v80 != qword_6123E0 )
                __assert_fail("n_bytes_read == bytes_per_block", "src/od.c", 0x583u, "dump");
              LOBYTE(v42) = v42 ^ 1;
              LODWORD(v8) = v59;
              v3 = (unsigned __int8)v42;
              sub_403D80(v9, v80, ptr[(unsigned __int8)v42], v58);
              v9 += v80;
            }
LABEL_148:
            if ( v60 )
            {
              v61 = 0LL;
              v62 = 1;
              while ( v61 != qword_6123F0 )
              {
                v63 = dword_40D220[*(unsigned int *)(qword_6123F8 + 40 * v61 + 4)];
                v64 = v62;
                for ( m = v63; ; m = v66 )
                {
                  v66 = v64 % m;
                  v64 = m;
                  if ( !v66 )
                    break;
                }
                ++v61;
                v62 *= (unsigned int)(v63 / m);
              }
              v3 = (unsigned __int64)ptr[v3];
              memset((void *)(v3 + v60), 0, v62 * ((v62 + v60 - 1) / v62) - v60);
              sub_403D80(v9, v60, ptr[(unsigned __int8)v42 ^ 1u], v3);
              v9 += v80;
            }
          }
          qword_612420(v9, 10LL);
          if ( byte_612410 && (unsigned __int64)v9 >= qword_612400 )
            v57 &= sub_4038F0(0);
          v42 = (unsigned __int8)v57;
          free(ptr[0]);
        }
        v5 = (char **)(v42 & v78);
        v23 = (unsigned __int8)v42 & (unsigned __int8)v78 & 1;
LABEL_103:
        if ( !byte_6123C4 || (unsigned int)sub_408120(stdin) != -1 )
          return (unsigned __int8)v23 ^ 1u;
        v8 = dcgettext(0LL, "standard input", 5);
        v11 = (unsigned int)*__errno_location();
        error(1, v11, v8);
LABEL_116:
        v12 = "oS";
        sub_4040C0("oS", v11, v22);
      }
    }
    v23 = 2;
LABEL_134:
    if ( byte_612431 )
    {
      v21 = dword_6122DC;
LABEL_129:
      v53 = sub_407210(v5[v21 + 1]);
      v54 = dcgettext(0LL, "extra operand %s", 5);
      error(0, 0, v54, v53);
      v55 = dcgettext(0LL, "compatibility mode supports at most one file", 5);
      error(0, 0, "%s", v55);
LABEL_130:
      sub_404960(1);
    }
    goto LABEL_59;
  }
  return 1LL;
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

__int64 *sub_402C8B()
{
  return &program_invocation_short_name;
}

__int64 sub_402CAA()
{
  return 0LL;
}

__int64 *sub_402CE1()
{
  __int64 *result; // rax

  if ( !byte_612308 )
  {
    while ( qword_612310 < (unsigned __int64)(&qword_611E48 - qword_611E40 - 1) )
      ((void (*)(void))qword_611E40[++qword_612310])();
    result = sub_402C8B();
    byte_612308 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_402D38()
{
  return sub_402CAA();
}

void nullsub_1()
{
  ;
}

int __fastcall sub_402D50(unsigned __int64 a1, char a2)
{
  char *v3; // rcx
  const char *v4; // rdi
  unsigned __int64 v6; // rax
  char v7; // al
  char v8[17]; // [rsp+17h] [rbp-11h] BYREF

  v3 = v8;
  v8[1] = 0;
  v8[0] = a2;
  v4 = &v8[-dword_612440];
  if ( dword_612444 != 10 )
  {
    if ( dword_612444 == 16 )
    {
      do
      {
        --v3;
        v6 = a1 & 0xF;
        a1 >>= 4;
        *v3 = byte_40C2C4[v6];
      }
      while ( a1 );
    }
    else if ( dword_612444 == 8 )
    {
      do
      {
        --v3;
        v7 = (a1 & 7) + 48;
        a1 >>= 3;
        *v3 = v7;
      }
      while ( a1 );
    }
    if ( v4 < v3 )
      goto LABEL_5;
LABEL_15:
    v4 = v3;
    return fputs_unlocked(v4, stdout);
  }
  while ( 1 )
  {
    *--v3 = a1 % 0xA + 48;
    if ( a1 <= 9 )
      break;
    a1 /= 0xAuLL;
  }
  if ( v4 >= v3 )
    goto LABEL_15;
  do
LABEL_5:
    *--v3 = 48;
  while ( v4 != v3 );
  return fputs_unlocked(v4, stdout);
}

bool __fastcall sub_402E40(char *nptr)
{
  char *v1; // rbx

  if ( !*nptr )
    return 0;
  v1 = nptr;
  if ( *nptr == 43 )
    v1 = nptr + 1;
  strchr(v1, 46);
  return (unsigned int)sub_407CE0(v1) == 0;
}

void __fastcall sub_402EC0(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  const char *v10; // rdx
  unsigned __int64 v11; // rbp
  unsigned __int8 v12; // al
  char v13; // [rsp-8h] [rbp-58h]
  __int64 v14; // [rsp+0h] [rbp-50h]
  char v15[58]; // [rsp+16h] [rbp-3Ah] BYREF

  if ( a1 > a2 )
  {
    v6 = a3;
    v8 = a6;
    v9 = a6 * (a1 - 1);
    v14 = a3 + a1 - a2;
    do
    {
      ++v6;
      v10 = "del";
      v11 = v9 / a1;
      v12 = *(_BYTE *)(v6 - 1) & 0x7F;
      if ( v12 != 127 )
      {
        if ( v12 <= 0x20u )
        {
          v10 = (char *)&unk_40D180 + 4 * v12;
        }
        else
        {
          v15[0] = *(_BYTE *)(v6 - 1) & 0x7F;
          v10 = v15;
          v15[1] = 0;
        }
      }
      v9 -= v8;
      sub_407AC0((unsigned int)"%*s", a6 - v11 + a5, (_DWORD)v10, a4, a5, a6 - v11, v13);
      a6 = v11;
    }
    while ( v6 != v14 );
  }
}

void __fastcall sub_402F80(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3, int a4, int a5, int a6)
{
  int v8; // ecx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  int v12; // r9d
  unsigned __int64 v13; // r12
  char *v14; // rdx
  char *v15; // rax
  char v16; // di
  __int64 v17; // [rsp+0h] [rbp-68h]
  __int64 v20; // [rsp+18h] [rbp-50h]
  __int64 v21; // [rsp+28h] [rbp-40h] BYREF
  char v22; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(v17) = a2;
  if ( a1 > a2 )
  {
    v8 = a6 * (a1 - 1);
    v20 = a6;
    v9 = a1;
    v10 = a6 * (a1 - 1);
    do
    {
      --v9;
      v12 = a6 - v10 / a1;
      v13 = v10 / a1;
      if ( byte_612321 )
      {
        v14 = (char *)a3 + 7;
        v15 = (char *)&v21;
        do
        {
          v16 = *v14;
          ++v15;
          --v14;
          *(v15 - 1) = v16;
        }
        while ( &v22 != v15 );
        LODWORD(v11) = v21;
      }
      else
      {
        v11 = *a3;
      }
      ++a3;
      sub_407AC0(a4, v12 + a5, v11, v8, a5, v12, v17);
      v10 -= v20;
      a6 = v13;
    }
    while ( v9 != v17 );
  }
}

void __fastcall sub_403050(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3, int a4, int a5, int a6)
{
  int v8; // ecx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  int v12; // r9d
  unsigned __int64 v13; // r12
  char *v14; // rdx
  char *v15; // rax
  char v16; // di
  __int64 v17; // [rsp+0h] [rbp-68h]
  __int64 v20; // [rsp+18h] [rbp-50h]
  __int64 v21; // [rsp+28h] [rbp-40h] BYREF
  char v22; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(v17) = a2;
  if ( a1 > a2 )
  {
    v8 = a6 * (a1 - 1);
    v20 = a6;
    v9 = a1;
    v10 = a6 * (a1 - 1);
    do
    {
      --v9;
      v12 = a6 - v10 / a1;
      v13 = v10 / a1;
      if ( byte_612321 )
      {
        v14 = (char *)a3 + 7;
        v15 = (char *)&v21;
        do
        {
          v16 = *v14;
          ++v15;
          --v14;
          *(v15 - 1) = v16;
        }
        while ( &v22 != v15 );
        LODWORD(v11) = v21;
      }
      else
      {
        v11 = *a3;
      }
      ++a3;
      sub_407AC0(a4, v12 + a5, v11, v8, a5, v12, v17);
      v10 -= v20;
      a6 = v13;
    }
    while ( v9 != v17 );
  }
}

__int64 __fastcall sub_403120(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v7; // r8d
  __int64 v8; // r15
  unsigned __int64 v9; // r13
  int v10; // edx
  __int64 result; // rax
  int v12; // r9d
  unsigned __int64 v13; // r12
  unsigned __int16 v14; // ax
  int v15; // [rsp+0h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-40h]

  v15 = a4;
  if ( a1 > a2 )
  {
    v7 = a6 * (a1 - 1);
    v17 = a6;
    v8 = 0LL;
    v9 = a6 * (a1 - 1);
    do
    {
      v12 = a6 - v9 / a1;
      v13 = v9 / a1;
      if ( byte_612321 )
      {
        a4 = *(unsigned __int8 *)(a3 + 4 * v8 + 2);
        LOBYTE(v14) = *(_BYTE *)(a3 + 4 * v8 + 3);
        HIBYTE(v14) = *(_BYTE *)(a3 + 4 * v8 + 2);
        v10 = (*(unsigned __int8 *)(a3 + 4 * v8) << 24) | (*(unsigned __int8 *)(a3 + 4 * v8 + 1) << 16) | v14;
      }
      else
      {
        v10 = *(_DWORD *)(a3 + 4 * v8);
      }
      ++v8;
      result = sub_407AC0(v15, v12 + a5, v10, a4, v7, v12, v15);
      v9 -= v17;
      a6 = v13;
    }
    while ( a1 - a2 != v8 );
  }
  return result;
}

__int64 __fastcall sub_403200(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // r14d
  int v8; // r8d
  __int64 v9; // r15
  unsigned __int64 v10; // r13
  int v11; // edx
  __int64 result; // rax
  int v13; // r9d
  unsigned __int64 v14; // r12
  int v15; // [rsp+0h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-40h]

  v15 = a4;
  if ( a1 > a2 )
  {
    v8 = a6 * (a1 - 1);
    v17 = a6;
    v9 = 0LL;
    v10 = a6 * (a1 - 1);
    do
    {
      v13 = a6 - v10 / a1;
      v14 = v10 / a1;
      if ( byte_612321 )
      {
        LOBYTE(v6) = *(_BYTE *)(a3 + 2 * v9 + 1);
        a4 = v6;
        BYTE1(a4) = *(_BYTE *)(a3 + 2 * v9);
        v6 = a4;
        v11 = (unsigned __int16)a4;
      }
      else
      {
        v11 = *(unsigned __int16 *)(a3 + 2 * v9);
      }
      ++v9;
      result = sub_407AC0(v15, v13 + a5, v11, a4, v8, v13, v15);
      v10 -= v17;
      a6 = v14;
    }
    while ( a1 - a2 != v9 );
  }
  return result;
}

__int64 __fastcall sub_4032C0(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // r14d
  int v8; // r8d
  __int64 v9; // r15
  unsigned __int64 v10; // r13
  int v11; // edx
  __int64 result; // rax
  int v13; // r9d
  unsigned __int64 v14; // r12
  int v15; // [rsp+0h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-40h]

  v15 = a4;
  if ( a1 > a2 )
  {
    v8 = a6 * (a1 - 1);
    v17 = a6;
    v9 = 0LL;
    v10 = a6 * (a1 - 1);
    do
    {
      v13 = a6 - v10 / a1;
      v14 = v10 / a1;
      if ( byte_612321 )
      {
        LOBYTE(v6) = *(_BYTE *)(a3 + 2 * v9 + 1);
        a4 = v6;
        BYTE1(a4) = *(_BYTE *)(a3 + 2 * v9);
        v6 = a4;
        v11 = (__int16)a4;
      }
      else
      {
        v11 = *(__int16 *)(a3 + 2 * v9);
      }
      ++v9;
      result = sub_407AC0(v15, v13 + a5, v11, a4, v8, v13, v15);
      v10 -= v17;
      a6 = v14;
    }
    while ( a1 - a2 != v9 );
  }
  return result;
}

__int64 __fastcall sub_403380(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r12
  int v7; // ecx
  __int64 v8; // r15
  __int64 v10; // r13
  unsigned __int64 v11; // rtt
  __int64 result; // rax
  int v13; // [rsp+0h] [rbp-48h]
  __int64 v14; // [rsp+8h] [rbp-40h]

  v13 = a4;
  if ( a1 > a2 )
  {
    v6 = a6;
    v7 = a6 * (a1 - 1);
    v8 = a3;
    v14 = a3 + a1 - a2;
    v10 = a6 * (a1 - 1);
    do
    {
      ++v8;
      v11 = v10;
      v10 -= v6;
      result = sub_407AC0(
                 v13,
                 a6 - (unsigned int)(v11 / a1) + a5,
                 *(unsigned __int8 *)(v8 - 1),
                 v7,
                 a5,
                 a6 - (unsigned int)(v11 / a1),
                 v13);
      a6 = v11 / a1;
    }
    while ( v8 != v14 );
  }
  return result;
}

__int64 __fastcall sub_403410(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r12
  int v7; // ecx
  __int64 v8; // r15
  __int64 v10; // r13
  unsigned __int64 v11; // rtt
  __int64 result; // rax
  int v13; // [rsp+0h] [rbp-48h]
  __int64 v14; // [rsp+8h] [rbp-40h]

  v13 = a4;
  if ( a1 > a2 )
  {
    v6 = a6;
    v7 = a6 * (a1 - 1);
    v8 = a3;
    v14 = a3 + a1 - a2;
    v10 = a6 * (a1 - 1);
    do
    {
      ++v8;
      v11 = v10;
      v10 -= v6;
      result = sub_407AC0(
                 v13,
                 a6 - (unsigned int)(v11 / a1) + a5,
                 *(char *)(v8 - 1),
                 v7,
                 a5,
                 a6 - (unsigned int)(v11 / a1),
                 v13);
      a6 = v11 / a1;
    }
    while ( v8 != v14 );
  }
  return result;
}

void __fastcall sub_4034A0(unsigned __int64 a1, unsigned __int64 a2, long double *a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v6; // r15
  int v8; // ebx
  unsigned __int64 v9; // r14
  long double v10; // fst7
  int v11; // esi
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // ebx
  char *v16; // rdx
  long double *p_nptr; // rax
  char v18; // cl
  long double v19; // [rsp+0h] [rbp-98h]
  char v20; // [rsp+0h] [rbp-98h]
  __int64 v23; // [rsp+28h] [rbp-70h]
  long double nptr; // [rsp+30h] [rbp-68h] BYREF
  char v25; // [rsp+40h] [rbp-58h] BYREF

  if ( a1 > a2 )
  {
    v6 = a1;
    v8 = a6;
    v23 = a6;
    v9 = a6 * (a1 - 1);
    do
    {
      --v6;
      v15 = a5 + v8 - v9 / a1;
      if ( byte_612321 )
      {
        v16 = (char *)a3 + 15;
        p_nptr = &nptr;
        do
        {
          v18 = *v16;
          p_nptr = (long double *)((char *)p_nptr + 1);
          --v16;
          *((_BYTE *)p_nptr - 1) = v18;
        }
        while ( &v25 != (char *)p_nptr );
        v10 = nptr;
      }
      else
      {
        v10 = *a3;
      }
      v19 = v10;
      ++a3;
      sub_4054D0((char *)&nptr, *(_TBYTE *)&v19);
      v11 = v15;
      v8 = v9 / a1;
      sub_407AC0((unsigned int)"%*s", v11, (unsigned int)&nptr, v12, v13, v14, v20);
      v9 -= v23;
    }
    while ( v6 != a2 );
  }
}

void __fastcall sub_403590(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v6; // r15
  int v8; // ebx
  unsigned __int64 v9; // r14
  int v10; // esi
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // ebx
  char *v15; // rdx
  char *v16; // rax
  char v17; // cl
  unsigned __int64 v18; // [rsp+0h] [rbp-88h]
  __int64 v21; // [rsp+18h] [rbp-70h]
  char nptr[8]; // [rsp+20h] [rbp-68h] BYREF
  char v23; // [rsp+28h] [rbp-60h] BYREF

  v18 = a1;
  if ( a1 > a2 )
  {
    v6 = a1;
    v8 = a6;
    v21 = a6;
    v9 = a6 * (a1 - 1);
    do
    {
      --v6;
      v14 = a5 + v8 - v9 / v18;
      if ( byte_612321 )
      {
        v15 = (char *)(a3 + 7);
        v16 = nptr;
        do
        {
          v17 = *v15;
          ++v16;
          --v15;
          *(v16 - 1) = v17;
        }
        while ( &v23 != v16 );
      }
      a3 += 8LL;
      sub_405250(nptr);
      v10 = v14;
      v8 = v9 / v18;
      sub_407AC0((unsigned int)"%*s", v10, (unsigned int)nptr, v11, v12, v13, v18);
      v9 -= v21;
    }
    while ( v6 != a2 );
  }
}

__int64 __fastcall sub_403680(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v6; // ebx
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  int v9; // esi
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 result; // rax
  unsigned __int64 v14; // [rsp+0h] [rbp-78h]
  unsigned __int64 v15; // [rsp+8h] [rbp-70h]
  __int64 v16; // [rsp+10h] [rbp-68h]
  char nptr[88]; // [rsp+20h] [rbp-58h] BYREF

  v14 = a1;
  if ( a1 > a2 )
  {
    v6 = a6;
    v16 = a6;
    v7 = 0LL;
    v15 = a1 - a2;
    v8 = a6 * (a1 - 1);
    do
    {
      ++v7;
      sub_405390(nptr);
      v9 = a5 + v6 - v8 / v14;
      v6 = v8 / v14;
      result = sub_407AC0((unsigned int)"%*s", v9, (unsigned int)nptr, v10, v11, v12, v14);
      v8 -= v16;
    }
    while ( v15 != v7 );
  }
  return result;
}

void __fastcall sub_403780(unsigned __int64 a1, unsigned __int64 a2, unsigned __int8 *a3, int a4, int a5, int a6)
{
  __int64 v6; // r13
  unsigned __int64 v7; // r15
  unsigned __int8 *v8; // r14
  int v9; // ebx
  int v10; // r8d
  unsigned __int64 v11; // r12
  const char *v12; // rdx
  int v13; // esi
  const unsigned __int16 **v14; // rax
  const char *v15; // rcx
  char v16; // [rsp+0h] [rbp-68h]
  unsigned __int8 *v17; // [rsp+8h] [rbp-60h]
  unsigned __int8 v19; // [rsp+17h] [rbp-51h]
  __int64 v20; // [rsp+18h] [rbp-50h]
  char v21[60]; // [rsp+2Ch] [rbp-3Ch] BYREF

  if ( a1 > a2 )
  {
    v6 = a6;
    v7 = a6 * (a1 - 1);
    v8 = a3;
    v9 = a6;
    v17 = &a3[a1 - a2];
    do
    {
      v10 = *v8++;
      v11 = v7 / a1;
      switch ( (char)v10 )
      {
        case 0:
          v12 = "\\0";
          break;
        case 7:
          v12 = "\\a";
          break;
        case 8:
          v12 = "\\b";
          break;
        case 9:
          v12 = "\\t";
          break;
        case 10:
          v12 = "\\n";
          break;
        case 11:
          v12 = "\\v";
          break;
        case 12:
          v12 = "\\f";
          break;
        case 13:
          v12 = (const char *)&unk_40C2F4;
          break;
        default:
          v20 = (unsigned __int8)v10;
          v19 = *(v8 - 1);
          v14 = __ctype_b_loc();
          v15 = "%c";
          if ( ((*v14)[v20] & 0x4000) == 0 )
            v15 = "%03o";
          __sprintf_chk(v21, 1LL, 4LL, v15, v19);
          v12 = v21;
          break;
      }
      v7 -= v6;
      v13 = v9 - v11 + a5;
      v9 = v11;
      sub_407AC0((unsigned int)"%*s", v13, (_DWORD)v12, a4, v10, a6, v16);
    }
    while ( v8 != v17 );
  }
}

__int64 __fastcall sub_4038F0(int errnum)
{
  unsigned int v1; // ebx
  __int64 v3; // rbx
  char *v4; // rax
  char *v5; // rax
  __int64 v6; // rbx
  int *v7; // rax
  const char *v8; // rcx

  v1 = 1;
  if ( stream )
  {
    if ( (stream->_flags & 0x20) != 0 )
    {
      v3 = sub_407090(0LL, 3LL, qword_6123D8);
      v4 = dcgettext(0LL, "%s: read error", 5);
      error(0, errnum, v4, v3);
      v1 = 0;
      if ( strcmp(*(const char **)(qword_6123D0 - 8), "-") )
        sub_408120(stream);
    }
    else if ( !strcmp(*(const char **)(qword_6123D0 - 8), "-") || !(unsigned int)sub_408120(stream) )
    {
      v1 = 1;
    }
    else
    {
      v6 = sub_407090(0LL, 3LL, qword_6123D8);
      v7 = __errno_location();
      v8 = (const char *)v6;
      v1 = 0;
      error(0, *v7, "%s", v8);
    }
    stream = 0LL;
  }
  if ( (stdout->_flags & 0x20) == 0 )
    return v1;
  v5 = dcgettext(0LL, "write error", 5);
  error(0, 0, v5);
  return 0LL;
}

__int64 sub_403A50()
{
  unsigned int v0; // ebx
  char *v1; // rax
  FILE *v2; // rax
  const char *v3; // rdx
  __int64 v5; // rbx
  int *v6; // rax
  const char *v7; // rcx

  v0 = 1;
  while ( 1 )
  {
    v3 = *(const char **)qword_6123D0;
    qword_6123D8 = (__int64)v3;
    if ( !v3 )
      return v0;
    qword_6123D0 += 8LL;
    if ( !strcmp(v3, "-") )
    {
      v1 = dcgettext(0LL, "standard input", 5);
      byte_6123C4 = 1;
      qword_6123D8 = (__int64)v1;
      v2 = stdin;
      stream = stdin;
    }
    else
    {
      v2 = fopen(v3, "r");
      stream = v2;
      if ( v2 )
      {
LABEL_7:
        if ( byte_612410 && !byte_612432 )
          setvbuf(v2, 0LL, 2, 0LL);
        return v0;
      }
      v5 = sub_407090(0LL, 3LL, qword_6123D8);
      v6 = __errno_location();
      v7 = (const char *)v5;
      v0 = 0;
      error(0, *v6, "%s", v7);
      v2 = stream;
    }
    if ( v2 )
      goto LABEL_7;
  }
}

__int64 __fastcall sub_403B50(unsigned __int64 a1)
{
  FILE *v1; // rbp
  unsigned __int64 v2; // rbx
  unsigned int v3; // r12d
  __blksize_t st_blksize; // rax
  int v5; // r12d
  int v6; // eax
  int v7; // eax
  const char *v8; // rbp
  int *v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  char *v13; // rax
  struct stat v14; // [rsp+0h] [rbp-20B8h] BYREF
  char v15[8232]; // [rsp+90h] [rbp-2028h] BYREF

  if ( !a1 )
    return 1;
  v1 = stream;
  if ( !stream )
  {
LABEL_27:
    v13 = dcgettext(0LL, "cannot skip past end of combined input", 5);
    error(1, 0, v13);
    return 1;
  }
  v2 = a1;
  v3 = 1;
  while ( 1 )
  {
    v7 = fileno(v1);
    if ( __fxstat(1, v7, &v14) )
    {
      v3 = 0;
      v8 = (const char *)sub_407090(0LL, 3LL, qword_6123D8);
      v9 = __errno_location();
      error(0, *v9, "%s", v8);
      goto LABEL_10;
    }
    if ( (v14.st_mode & 0xD000) != 0x8000 )
      break;
    st_blksize = v14.st_blksize;
    if ( (unsigned __int64)(v14.st_blksize - 1) > 0x1FFFFFFFFFFFFFFFLL )
      st_blksize = 512LL;
    if ( v14.st_size <= st_blksize )
      break;
    if ( v14.st_size >= v2 )
    {
      if ( (unsigned int)sub_4081E0(v1, v2, 1LL) )
        return 0;
      return v3;
    }
    v2 -= v14.st_size;
LABEL_10:
    v5 = sub_4038F0(0) & v3;
    v6 = sub_403A50();
    v1 = stream;
    v3 = v6 & v5;
    if ( !stream )
      goto LABEL_27;
  }
  v10 = 0x2000LL;
  while ( 1 )
  {
    if ( v10 > v2 )
      v10 = v2;
    v11 = __fread_unlocked_chk(v15, 0x2000LL, 1LL, v10, stream);
    v2 -= v11;
    if ( v11 != v10 )
    {
      if ( (stream->_flags & 0x20) != 0 )
        return 0;
      if ( (stream->_flags & 0x10) != 0 )
        break;
    }
    if ( !v2 )
      return v3;
  }
  if ( v2 )
    goto LABEL_10;
  return v3;
}

__int64 __fastcall sub_403D20(int *a1)
{
  unsigned int v2; // ebp
  FILE *i; // rdi
  int *v4; // rax
  int v5; // ebx
  int v6; // eax
  int v7; // eax

  v2 = 1;
  *a1 = -1;
  for ( i = stream; stream; v2 &= v6 & v5 )
  {
    v7 = fgetc(i);
    *a1 = v7;
    if ( v7 != -1 )
      break;
    v4 = __errno_location();
    v5 = sub_4038F0(*v4);
    v6 = sub_403A50();
    i = stream;
  }
  return v2;
}

void __fastcall sub_403D80(__int64 a1, size_t a2, const void *a3, unsigned __int8 *a4)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  char *v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r12
  unsigned __int8 *v13; // rbx
  const unsigned __int16 **v14; // r12
  __int64 v15; // rax
  int v16; // esi
  char *IO_write_ptr; // rdx
  char *v18; // rax
  int v19; // [rsp+Ch] [rbp-4Ch]
  unsigned __int8 *v20; // [rsp+10h] [rbp-48h]

  if ( byte_612251 && !byte_612250 && qword_6123E0 == a2 && !memcmp(a3, a4, a2) )
  {
    if ( !byte_612320 )
    {
      puts("*");
      byte_612320 = 1;
    }
  }
  else
  {
    byte_612320 = 0;
    if ( qword_6123F0 )
    {
      v6 = 0LL;
      v20 = &a4[a2];
      do
      {
        v9 = 40 * v6;
        v10 = dword_40D220[*(unsigned int *)(qword_6123F8 + 40 * v6 + 4)];
        v11 = qword_6123E0 / v10;
        v19 = qword_6123E0 / v10;
        v12 = (qword_6123E0 - a2) / v10;
        if ( v6 )
          __printf_chk(1LL, "%*s", dword_612440, "");
        else
          qword_612420(a1, 0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, __int64, _QWORD, _QWORD))(v9 + qword_6123F8 + 8))(
          (int)v11,
          (int)v12,
          a4,
          v9 + qword_6123F8 + 16,
          *(unsigned int *)(v9 + qword_6123F8 + 28),
          *(unsigned int *)(v9 + qword_6123F8 + 32));
        v7 = qword_6123F8 + v9;
        if ( *(_BYTE *)(v7 + 24) )
        {
          __printf_chk(1LL, "%*s", (int)v12 * *(_DWORD *)(v7 + 32) / v19 + *(_DWORD *)(v7 + 28) * v12, "");
          fwrite_unlocked("  >", 1uLL, 3uLL, stdout);
          if ( a2 )
          {
            v13 = a4;
            v14 = __ctype_b_loc();
            do
            {
              v15 = *v13++;
              v16 = (unsigned __int8)v15;
              if ( ((*v14)[v15] & 0x4000) == 0 )
              {
                v16 = 46;
                LOBYTE(v15) = 46;
              }
              IO_write_ptr = stdout->_IO_write_ptr;
              if ( IO_write_ptr >= stdout->_IO_write_end )
              {
                __overflow(stdout, v16);
              }
              else
              {
                stdout->_IO_write_ptr = IO_write_ptr + 1;
                *IO_write_ptr = v15;
              }
            }
            while ( v13 != v20 );
          }
          v18 = stdout->_IO_write_ptr;
          if ( v18 >= stdout->_IO_write_end )
          {
            __overflow(stdout, 60);
          }
          else
          {
            stdout->_IO_write_ptr = v18 + 1;
            *v18 = 60;
          }
        }
        v8 = stdout->_IO_write_ptr;
        if ( v8 >= stdout->_IO_write_end )
        {
          __overflow(stdout, 10);
        }
        else
        {
          stdout->_IO_write_ptr = v8 + 1;
          *v8 = 10;
        }
        ++v6;
      }
      while ( qword_6123F0 > v6 );
    }
  }
  byte_612250 = 0;
}

int __fastcall sub_404010(unsigned __int64 a1, unsigned __int8 a2)
{
  char *IO_write_ptr; // rax
  char *v3; // rax

  IO_write_ptr = stdout->_IO_write_ptr;
  if ( IO_write_ptr >= stdout->_IO_write_end )
  {
    __overflow(stdout, 40);
  }
  else
  {
    stdout->_IO_write_ptr = IO_write_ptr + 1;
    *IO_write_ptr = 40;
  }
  LODWORD(v3) = sub_402D50(a1, 41);
  if ( a2 )
  {
    v3 = stdout->_IO_write_ptr;
    if ( v3 >= stdout->_IO_write_end )
    {
      LODWORD(v3) = __overflow(stdout, a2);
    }
    else
    {
      stdout->_IO_write_ptr = v3 + 1;
      *v3 = a2;
    }
  }
  return (int)v3;
}

int __fastcall sub_404090(unsigned __int64 a1, unsigned __int8 a2)
{
  sub_402D50(a1, 32);
  return sub_404010(qword_612428 + a1, a2);
}

__int64 __fastcall sub_4040C0(char *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  char *v4; // r15
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  char v9; // cl
  char v10; // al
  __int64 v11; // rcx
  char *v12; // rbx
  unsigned __int64 v13; // r8
  int v14; // r14d
  const char *v15; // rsi
  __int64 v16; // rbx
  char *v17; // rax
  int v19; // eax
  unsigned __int64 v20; // r8
  bool v21; // cc
  int v22; // r11d
  char *v23; // r8
  int v24; // r11d
  int v25; // eax
  bool v26; // al
  char *v27; // rbx
  bool v28; // zf
  __int64 v29; // rax
  unsigned int v30; // ebx
  __int64 v31; // rbp
  char *v32; // rax
  int v33; // r11d
  const char *v34; // r8
  char *decimal_point; // rdi
  int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // rdi
  int v39; // eax
  __int64 v40; // rbx
  char *v41; // rax
  unsigned __int64 v42; // [rsp+0h] [rbp-40h]
  int v43; // [rsp+0h] [rbp-40h]
  unsigned int v44; // [rsp+0h] [rbp-40h]
  unsigned int v45; // [rsp+0h] [rbp-40h]
  int v46; // [rsp+0h] [rbp-40h]

  v3 = qword_6123F0;
  if ( *a1 )
  {
    v4 = a1;
    while ( 2 )
    {
      v6 = qword_6123E8;
      v7 = qword_6123F8;
      if ( qword_6123E8 > v3 )
        goto LABEL_4;
      if ( qword_6123F8 )
      {
        if ( (unsigned __int64)qword_6123E8 > 0x222222222222221LL )
          goto LABEL_53;
        v6 = qword_6123E8 + ((unsigned __int64)qword_6123E8 >> 1) + 1;
      }
      else
      {
        if ( !qword_6123E8 )
        {
          a2 = 120LL;
          v6 = 3LL;
          goto LABEL_40;
        }
        a3 = ((unsigned __int64)qword_6123E8 * (unsigned __int128)0x28uLL) >> 64 != 0;
        if ( 40 * qword_6123E8 < 0 || !is_mul_ok(qword_6123E8, 0x28uLL) )
LABEL_53:
          sub_407A20(qword_6123F8, a2, a3);
      }
      a2 = 40 * v6;
LABEL_40:
      qword_6123E8 = v6;
      v7 = sub_407830(qword_6123F8, a2);
      qword_6123F8 = v7;
      v3 = qword_6123F0;
LABEL_4:
      v8 = v7 + 40 * v3;
      if ( !v8 )
        __assert_fail("tspec != NULL", "src/od.c", 0x285u, "decode_one_format");
      v9 = *v4;
      switch ( *v4 )
      {
        case 'a':
          v12 = v4 + 1;
          v24 = 3;
          a3 = (unsigned __int64)sub_402EC0;
          v25 = 5;
          v14 = 1;
          goto LABEL_31;
        case 'c':
          v12 = v4 + 1;
          v24 = 3;
          a3 = (unsigned __int64)sub_403780;
          v25 = 6;
          v14 = 1;
          goto LABEL_31;
        case 'd':
        case 'o':
        case 'u':
        case 'x':
          v19 = v4[1];
          if ( v4[1] == 73 )
          {
            v12 = v4 + 2;
            v14 = dword_6123B0;
            v20 = 4LL;
            goto LABEL_23;
          }
          if ( v4[1] <= 73 )
          {
            if ( (_BYTE)v19 == 67 )
            {
              v12 = v4 + 2;
              v14 = qword_6123A4;
              v20 = 1LL;
              v21 = v9 <= 111;
              if ( v9 != 111 )
              {
LABEL_24:
                if ( v21 )
                {
                  if ( v9 == 100 )
                  {
                    v33 = dword_40D320[v20];
                    v34 = "ld";
                    if ( (unsigned int)(v14 - 4) >= 2 )
                      v34 = "d";
                    a2 = 1LL;
                    v46 = v33;
                    __sprintf_chk(v8 + 16, 1LL, 8LL, "%%*%s", v34);
                    v24 = v46;
                    switch ( v14 )
                    {
                      case 1:
                        a3 = (unsigned __int64)sub_403410;
                        v25 = 0;
                        goto LABEL_31;
                      case 2:
                        a3 = (unsigned __int64)sub_4032C0;
                        v25 = 0;
                        goto LABEL_31;
                      case 3:
                        a3 = (unsigned __int64)sub_403120;
                        v25 = 0;
                        goto LABEL_31;
                      case 4:
                        a3 = (unsigned __int64)sub_403050;
                        v25 = 0;
                        goto LABEL_31;
                      case 5:
                        a3 = (unsigned __int64)sub_402F80;
                        v25 = 0;
                        goto LABEL_31;
                      default:
                        break;
                    }
                  }
                }
                else
                {
                  if ( v9 == 117 )
                  {
                    v22 = dword_40D2C0[v20];
                    v23 = "lu";
                    if ( (unsigned int)(v14 - 4) >= 2 )
                      v23 = "u";
                    a2 = 1LL;
                    v43 = v22;
                    __sprintf_chk(v8 + 16, 1LL, 8LL, "%%*%s", v23);
                    v24 = v43;
                    v25 = 1;
LABEL_29:
                    switch ( v14 )
                    {
                      case 1:
                        a3 = (unsigned __int64)sub_403380;
                        goto LABEL_31;
                      case 2:
                        a3 = (unsigned __int64)sub_403200;
                        goto LABEL_31;
                      case 3:
                        a3 = (unsigned __int64)sub_403120;
                        goto LABEL_31;
                      case 4:
                        a3 = (unsigned __int64)sub_403050;
                        goto LABEL_31;
                      case 5:
                        a3 = (unsigned __int64)sub_402F80;
                        goto LABEL_31;
                      default:
                        goto LABEL_61;
                    }
                  }
                  if ( v9 == 120 )
                  {
                    a2 = 1LL;
                    v45 = dword_40D260[v20];
                    __sprintf_chk(v8 + 16, 1LL, 8LL, "%%*.%d%s", v45);
                    v24 = v45;
                    switch ( v14 )
                    {
                      case 1:
                        a3 = (unsigned __int64)sub_403380;
                        v25 = 3;
                        goto LABEL_31;
                      case 2:
                        a3 = (unsigned __int64)sub_403200;
                        v25 = 3;
                        goto LABEL_31;
                      case 3:
                        a3 = (unsigned __int64)sub_403120;
                        v25 = 3;
                        goto LABEL_31;
                      case 4:
                        a3 = (unsigned __int64)sub_403050;
                        v25 = 3;
                        goto LABEL_31;
                      case 5:
                        a3 = (unsigned __int64)sub_402F80;
                        v25 = 3;
                        goto LABEL_31;
                      default:
                        break;
                    }
                  }
                }
LABEL_61:
                abort();
              }
LABEL_43:
              a2 = 1LL;
              v44 = dword_40D380[v20];
              __sprintf_chk(v8 + 16, 1LL, 8LL, "%%*.%d%s", v44);
              v25 = 2;
              v24 = v44;
              goto LABEL_29;
            }
          }
          else
          {
            if ( (_BYTE)v19 == 76 )
            {
              v12 = v4 + 2;
              v14 = dword_6123C0;
              v20 = 8LL;
              goto LABEL_23;
            }
            if ( (_BYTE)v19 == 83 )
            {
              v14 = HIDWORD(qword_6123A4);
              v12 = v4 + 2;
              v20 = 2LL;
              goto LABEL_23;
            }
          }
          v37 = v19 - 48;
          if ( v37 > 9 )
          {
            v14 = dword_6123B0;
            v12 = v4 + 1;
            v20 = 4LL;
          }
          else
          {
            v12 = v4 + 2;
            v38 = (int)v37;
            v20 = 0LL;
            while ( 1 )
            {
              v20 = v38 + 10 * v20;
              v39 = *v12 - 48;
              if ( (unsigned int)v39 > 9 )
                break;
              v38 = v39;
              ++v12;
              if ( ~(__int64)v39 / 0xAuLL < v20 )
                goto LABEL_83;
            }
            if ( v12 == v4 + 1 )
            {
              v14 = dword_6123B0;
              v20 = 4LL;
            }
            else if ( v20 > 8 || (v14 = dword_6123A0[v20]) == 0 )
            {
              v42 = v20;
              v15 = "invalid type string %s;\nthis system doesn't provide a %lu-byte integral type";
              v16 = sub_407210(a1);
              goto LABEL_17;
            }
          }
LABEL_23:
          v21 = v9 <= 111;
          if ( v9 != 111 )
            goto LABEL_24;
          goto LABEL_43;
        case 'f':
          v10 = v4[1];
          switch ( v10 )
          {
            case 'F':
              v12 = v4 + 2;
              v14 = dword_612350;
              break;
            case 'L':
              v12 = v4 + 2;
              v14 = dword_612380;
              break;
            case 'D':
              v14 = dword_612360;
              v12 = v4 + 2;
              break;
            default:
              a2 = (__int64)(v4 + 1);
              LODWORD(v11) = v10 - 48;
              if ( (unsigned int)v11 > 9 )
              {
                v14 = dword_612360;
                v12 = v4 + 1;
              }
              else
              {
                v12 = v4 + 2;
                v11 = (int)v11;
                v13 = 0LL;
                while ( 1 )
                {
                  v13 = v11 + 10 * v13;
                  LODWORD(v11) = *v12 - 48;
                  if ( (unsigned int)v11 > 9 )
                    break;
                  v11 = (int)v11;
                  ++v12;
                  if ( ~(__int64)(int)v11 / 0xAuLL < v13 )
                  {
LABEL_83:
                    v40 = sub_407210(a1);
                    v41 = dcgettext(0LL, "invalid type string %s", 5);
                    error(0, 0, v41, v40);
                    return 0LL;
                  }
                }
                v14 = dword_612360;
                if ( (char *)a2 != v12 && (v13 > 0x10 || (v14 = dword_612340[v13]) == 0) )
                {
                  v42 = v13;
                  v15 = "invalid type string %s;\nthis system doesn't provide a %lu-byte floating point type";
                  v16 = sub_407210(a1);
LABEL_17:
                  v17 = dcgettext(0LL, v15, 5);
                  error(0, 0, v17, v16, v42);
                  return 0LL;
                }
              }
              break;
          }
          decimal_point = localeconv()->decimal_point;
          v36 = 1;
          if ( *decimal_point )
            v36 = strlen(decimal_point);
          switch ( v14 )
          {
            case 7:
              v24 = v36 + 23;
              a3 = (unsigned __int64)sub_403590;
              v25 = 4;
              break;
            case 8:
              v24 = v36 + 28;
              a3 = (unsigned __int64)sub_4034A0;
              v25 = 4;
              break;
            case 6:
              v24 = v36 + 14;
              a3 = (unsigned __int64)sub_403680;
              v25 = 4;
              break;
            default:
              goto LABEL_61;
          }
LABEL_31:
          *(_DWORD *)v8 = v25;
          *(_DWORD *)(v8 + 4) = v14;
          *(_QWORD *)(v8 + 8) = a3;
          *(_DWORD *)(v8 + 28) = v24;
          v26 = *v12 == 122;
          *(_BYTE *)(v8 + 24) = v26;
          v27 = &v12[v26];
          if ( v27 == v4 )
            __assert_fail("s != next", "src/od.c", 0x3E3u, "decode_format_string");
          v4 = v27;
          v3 = qword_6123F0 + 1;
          v28 = *v27 == 0;
          ++qword_6123F0;
          if ( v28 )
            return 1LL;
          continue;
        default:
          v29 = sub_407210(a1);
          v30 = *v4;
          v31 = v29;
          v32 = dcgettext(0LL, "invalid character '%c' in type string %s", 5);
          error(0, 0, v32, v30, v31);
          return 0LL;
      }
    }
  }
  return 1LL;
}

__int64 __fastcall sub_4048A0(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  FILE *v4; // rcx
  __int64 v6; // rdi
  unsigned int v7; // ebp
  int *v8; // rax
  int v9; // r14d
  int v10; // eax
  size_t v11; // rax

  if ( !a1 || qword_6123E0 < a1 )
    __assert_fail("0 < n && n <= bytes_per_block", "src/od.c", 0x507u, "read_block");
  v4 = stream;
  *a3 = 0LL;
  if ( v4 )
  {
    v6 = 0LL;
    v7 = 1;
    while ( 1 )
    {
      v11 = fread_unlocked((void *)(a2 + v6), 1uLL, a1 - v6, v4);
      *a3 += v11;
      if ( a1 - v6 == v11 )
        break;
      v8 = __errno_location();
      v9 = sub_4038F0(*v8);
      v10 = sub_403A50();
      v4 = stream;
      v7 &= v10 & v9;
      if ( !stream )
        break;
      v6 = *a3;
    }
  }
  else
  {
    return 1;
  }
  return v7;
}

void __fastcall __noreturn sub_404960(int status)
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
  FILE *v30; // rbp
  char *v31; // rax
  FILE *v32; // rbp
  char *v33; // rax
  __int64 *v34; // rax
  char *v35; // rbp
  char *v36; // rax
  char *v37; // rax
  const char *v38; // r12
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  char *v43; // rax
  char *v44; // rax
  __int64 v45[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_612458;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(
         0LL,
         "Usage: %s [OPTION]... [FILE]...\n"
         "  or:  %s [-abcdfilosx]... [FILE] [[+]OFFSET[.][b]]\n"
         "  or:  %s --traditional [OPTION]... [FILE] [[+]OFFSET[.][b] [+][LABEL][.][b]]\n",
         5);
  __printf_chk(1LL, v3, v1, v1, v1);
  v4 = stdout;
  v5 = dcgettext(
         0LL,
         "\n"
         "Write an unambiguous representation, octal bytes by default,\n"
         "of FILE to standard output.  With more than one FILE argument,\n"
         "concatenate them in the listed order to form the input.\n",
         5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(
         0LL,
         "\n"
         "If first and second call formats both apply, the second format is assumed\n"
         "if the last operand begins with + or (if there are 2 operands) a digit.\n"
         "An OFFSET operand means -j OFFSET.  LABEL is the pseudo-address\n"
         "at first byte printed, incremented when dump is progressing.\n"
         "For OFFSET and LABEL, a 0x or 0X prefix indicates hexadecimal;\n"
         "suffixes may be . for octal and b for multiply by 512.\n",
         5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "  -A, --address-radix=RADIX   output format for file offsets; RADIX is one\n"
          "                                of [doxn], for Decimal, Octal, Hex or None\n"
          "      --endian={big|little}   swap input bytes according the specified order\n"
          "  -j, --skip-bytes=BYTES      skip BYTES input bytes first\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "  -N, --read-bytes=BYTES      limit dump to BYTES input bytes\n"
          "  -S BYTES, --strings[=BYTES]  output strings of at least BYTES graphic chars;\n"
          "                                3 is implied when BYTES is not specified\n"
          "  -t, --format=TYPE           select output format or formats\n"
          "  -v, --output-duplicates     do not use * to mark line suppression\n"
          "  -w[BYTES], --width[=BYTES]  output BYTES bytes per output line;\n"
          "                                32 is implied when BYTES is not specified\n"
          "      --traditional           accept arguments in third form above\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(
          0LL,
          "\n"
          "\n"
          "Traditional format specifications may be intermixed; they accumulate:\n"
          "  -a   same as -t a,  select named characters, ignoring high-order bit\n"
          "  -b   same as -t o1, select octal bytes\n"
          "  -c   same as -t c,  select printable characters or backslash escapes\n"
          "  -d   same as -t u2, select unsigned decimal 2-byte units\n",
          5);
  fputs_unlocked(v21, v20);
  v22 = stdout;
  v23 = dcgettext(
          0LL,
          "  -f   same as -t fF, select floats\n"
          "  -i   same as -t dI, select decimal ints\n"
          "  -l   same as -t dL, select decimal longs\n"
          "  -o   same as -t o2, select octal 2-byte units\n"
          "  -s   same as -t d2, select decimal 2-byte units\n"
          "  -x   same as -t x2, select hexadecimal 2-byte units\n",
          5);
  fputs_unlocked(v23, v22);
  v24 = stdout;
  v25 = dcgettext(
          0LL,
          "\n"
          "\n"
          "TYPE is made up of one or more of these specifications:\n"
          "  a          named character, ignoring high-order bit\n"
          "  c          printable character or backslash escape\n",
          5);
  fputs_unlocked(v25, v24);
  v26 = stdout;
  v27 = dcgettext(
          0LL,
          "  d[SIZE]    signed decimal, SIZE bytes per integer\n"
          "  f[SIZE]    floating point, SIZE bytes per float\n"
          "  o[SIZE]    octal, SIZE bytes per integer\n"
          "  u[SIZE]    unsigned decimal, SIZE bytes per integer\n"
          "  x[SIZE]    hexadecimal, SIZE bytes per integer\n",
          5);
  fputs_unlocked(v27, v26);
  v28 = stdout;
  v29 = dcgettext(
          0LL,
          "\n"
          "SIZE is a number.  For TYPE in [doux], SIZE may also be C for\n"
          "sizeof(char), S for sizeof(short), I for sizeof(int) or L for\n"
          "sizeof(long).  If TYPE is f, SIZE may also be F for sizeof(float), D\n"
          "for sizeof(double) or L for sizeof(long double).\n",
          5);
  fputs_unlocked(v29, v28);
  v30 = stdout;
  v31 = dcgettext(
          0LL,
          "\nAdding a z suffix to any type displays printable characters at the end of\neach output line.\n",
          5);
  fputs_unlocked(v31, v30);
  v32 = stdout;
  v33 = dcgettext(
          0LL,
          "\n"
          "\n"
          "BYTES is hex with 0x or 0X prefix, and may have a multiplier suffix:\n"
          "  b    512\n"
          "  KB   1000\n"
          "  K    1024\n"
          "  MB   1000*1000\n"
          "  M    1024*1024\n"
          "and so on for G, T, P, E, Z, Y.\n",
          5);
  fputs_unlocked(v33, v32);
  v45[0] = (__int64)"[";
  v34 = v45;
  v45[1] = (__int64)"test invocation";
  v45[2] = (__int64)"coreutils";
  v45[3] = (__int64)"Multi-call invocation";
  v45[4] = (__int64)"sha224sum";
  v45[5] = (__int64)"sha2 utilities";
  v45[6] = (__int64)"sha256sum";
  v45[7] = (__int64)"sha2 utilities";
  v45[8] = (__int64)"sha384sum";
  v45[9] = (__int64)"sha2 utilities";
  v45[10] = (__int64)"sha512sum";
  v45[11] = (__int64)"sha2 utilities";
  v45[12] = 0LL;
  v45[13] = 0LL;
  do
    v34 += 2;
  while ( *v34 && strcmp("od", (const char *)*v34) );
  v35 = (char *)v34[1];
  if ( v35 )
  {
    v36 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v36, &unk_40C41A, "https://www.gnu.org/software/coreutils/");
    v37 = setlocale(5, 0LL);
    if ( !v37 || !strncmp(v37, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v41 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v41, &unk_40C41A, "https://www.gnu.org/software/coreutils/");
    v42 = setlocale(5, 0LL);
    if ( !v42 || !strncmp(v42, "en_", 3uLL) )
    {
      v35 = "od";
      v43 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v38 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v43, "https://www.gnu.org/software/coreutils/", "od");
LABEL_12:
      v40 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v40, v35, v38);
LABEL_3:
      exit(status);
    }
    v35 = "od";
  }
  v44 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v44, "od");
LABEL_10:
  v38 = "Multi-call invocation" + 10;
  v39 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v39, "https://www.gnu.org/software/coreutils/", "od");
  if ( v35 != "od" )
    v38 = "";
  goto LABEL_12;
}

void __noreturn sub_404E00()
{
  sub_404960(1);
}

__int64 __fastcall sub_404E10(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_404F30(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_4071F0(1LL, a1);
  v5 = sub_406EE0(0LL, 8LL, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_404FB0(__int64 *a1, char *a2, size_t a3)
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
      v11 = (const char *)sub_407210(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    a2 += a3;
    v12 = (const char *)sub_407210(i);
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

__int64 __fastcall sub_4050D0(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  __int64 result; // rax

  result = sub_404E10(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_404F30(a1, (__int64)a2, result);
    sub_404FB0((__int64 *)a3, a4, a5);
    a6();
    return -1LL;
  }
  return result;
}

__int64 __fastcall sub_405140(void *s1, __int64 *a2, char *a3, size_t a4)
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

__int64 sub_4051B0()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_409170(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_612448 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_612450 )
      {
        v5 = (const char *)sub_407060();
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
  result = sub_409170(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_405250(char *nptr, unsigned __int64 a2, unsigned int a3, unsigned int a4, __m128d a5)
{
  __m128d v5; // xmm1
  double v8; // xmm4_8
  __int64 v10; // rbx
  _BYTE *v11; // rdi
  _BYTE *v12; // rsi
  _BYTE *v13; // rcx
  _BYTE *v14; // rax
  int v15; // ebp
  double v17; // [rsp+0h] [rbp-50h]
  __int16 v18[33]; // [rsp+Dh] [rbp-43h] BYREF

  v5.m128d_f64[0] = 0.0;
  v8 = _mm_cmplt_sd(a5, v5).m128d_f64[0];
  v10 = 1LL;
  v18[0] = 11557;
  v11 = (char *)v18 + (a3 & 1) + 1;
  v17 = a5.m128d_f64[0];
  *v11 = 43;
  v12 = &v11[(a3 >> 1) & 1];
  v13 = &v12[(a3 >> 2) & 1];
  *v12 = 32;
  *v13 = 48;
  v14 = &v13[(a3 >> 3) & 1];
  *(_WORD *)v14 = 11818;
  v14[2] = 42;
  *(_WORD *)(v14 + 3) = (unsigned __int8)((a3 & 0x10) == 0 ? 103 : 71);
  if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-a5.m128d_f64[0]) & *(_QWORD *)&v8 | ~*(_QWORD *)&v8 & *(_QWORD *)&a5.m128d_f64[0]) >= 2.225073858507201e-308 )
    v10 = 15LL;
  while ( 1 )
  {
    v15 = __snprintf_chk(nptr, a2, 1LL, -1LL, v18, a4, v17, v10);
    if ( v15 < 0 || (int)v10 > 16 || v15 < a2 && strtod(nptr, 0LL) == v17 )
      break;
    v10 = (unsigned int)(v10 + 1);
  }
  return (unsigned int)v15;
}

__int64 __fastcall sub_405390(char *nptr, unsigned __int64 a2, unsigned int a3, unsigned int a4, __m128 a5)
{
  __m128 v6; // xmm1
  __m128 v8; // xmm3
  _BYTE *v10; // rdi
  _BYTE *v11; // rsi
  _BYTE *v12; // rcx
  _BYTE *v13; // rax
  __int64 i; // rbx
  int v15; // ebp
  double v17; // [rsp+0h] [rbp-58h]
  float v18; // [rsp+Ch] [rbp-4Ch]
  __int16 v19[33]; // [rsp+15h] [rbp-43h] BYREF

  v6.m128_i32[0] = 0;
  v8 = _mm_cmplt_ss(a5, v6);
  v19[0] = 11557;
  v10 = (char *)v19 + (a3 & 1) + 1;
  v18 = a5.m128_f32[0];
  *v10 = 43;
  v11 = &v10[(a3 >> 1) & 1];
  v17 = a5.m128_f32[0];
  v12 = &v11[(a3 >> 2) & 1];
  *v11 = 32;
  *v12 = 48;
  v13 = &v12[(a3 >> 3) & 1];
  *(_WORD *)v13 = 11818;
  v13[2] = 42;
  *(_WORD *)(v13 + 3) = (unsigned __int8)((a3 & 0x10) == 0 ? 103 : 71);
  for ( i = 5
          * (unsigned int)(COERCE_FLOAT(COERCE_UNSIGNED_INT(-a5.m128_f32[0]) & v8.m128_i32[0] | _mm_andnot_ps(v8, a5).m128_u32[0]) >= 1.1754944e-38)
          + 1; ; i = (unsigned int)(i + 1) )
  {
    v15 = __snprintf_chk(nptr, a2, 1LL, -1LL, v19, a4, v17, i);
    if ( v15 < 0 || (int)i > 8 || v15 < a2 && strtof(nptr, 0LL) == v18 )
      break;
  }
  return (unsigned int)v15;
}

__int64 __fastcall sub_4054D0(
        char *nptr,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        double a5,
        long double a6)
{
  __int64 v11; // rbx
  long double v12; // fst6
  _BYTE *v13; // rdi
  _BYTE *v14; // rsi
  _BYTE *v15; // rcx
  _BYTE *v16; // rax
  int v17; // eax
  unsigned int v18; // ebp
  __int16 v20[33]; // [rsp+5h] [rbp-43h] BYREF

  v11 = 1LL;
  v20[0] = 11557;
  v12 = a6;
  if ( a6 < 0.0 )
    v12 = -a6;
  v13 = (char *)v20 + (a3 & 1) + 1;
  v14 = &v13[(a3 >> 1) & 1];
  *v13 = 43;
  *v14 = 32;
  v15 = &v14[(a3 >> 2) & 1];
  *v15 = 48;
  v16 = &v15[(a3 >> 3) & 1];
  *(_DWORD *)v16 = 1277832746;
  v16[5] = 0;
  v16[4] = (a3 & 0x10) == 0 ? 103 : 71;
  if ( v12 >= 3.3621031431120935063e-4932 )
    v11 = 18LL;
  while ( 1 )
  {
    v17 = __snprintf_chk(nptr, a2, 1LL, -1LL, v20, a4, a5, v11);
    v18 = v17;
    if ( v17 < 0 || (int)v11 > 20 || v17 < a2 && strtold(nptr, 0LL) == a6 )
      break;
    v11 = (unsigned int)(v11 + 1);
  }
  return v18;
}

char *__fastcall sub_4055F0(const char *a1)
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
  qword_612458 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_405690(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_409230();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40E581;
      if ( !v5 )
        return (char *)&unk_40E576;
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
    v2 = (char *)&unk_40E57D;
    if ( !v5 )
      return (char *)&unk_40E57A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_405790(
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
                return sub_405790((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_405790((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_409010((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_405790((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_405690("`", a5);
        v51 = sub_405690("'", a5);
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

unsigned __int64 __fastcall sub_405790(
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
                return sub_405790((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_405790((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_409010((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_405790((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_405690("`", a5);
        v51 = sub_405690("'", a5);
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

_BYTE *__fastcall sub_4069C0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __int64 v7; // rdx
  __m128i *v8; // rbx
  int *v9; // r13
  __int64 v10; // rsi
  unsigned __int64 *v11; // rbx
  _BYTE *v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rax
  int v16; // r8d
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  unsigned __int64 v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+18h] [rbp-40h]
  int v22; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v8 = (__m128i *)ptr;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_6122D0 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_407A20(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( ptr == &xmmword_6122C0 )
    {
      v8 = (__m128i *)sub_407830(0LL, v10);
      ptr = v8;
      *v8 = _mm_load_si128((const __m128i *)&xmmword_6122C0);
    }
    else
    {
      ptr = (void *)sub_407830(ptr, v10);
      v8 = (__m128i *)ptr;
    }
    memset(&v8[dword_6122D0], 0, 16LL * ((int)a1 + 1 - dword_6122D0));
    dword_6122D0 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(a4 + 4) | 1;
  v19 = *v11;
  v13 = sub_405790(v12, *v11, a2, a3, *(_DWORD *)a4, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v19 <= v13 )
  {
    v14 = v13 + 1;
    *v11 = v13 + 1;
    if ( v12 != (_BYTE *)&unk_612460 )
    {
      v20 = v13 + 1;
      free(v12);
      v14 = v20;
    }
    v15 = (_BYTE *)sub_4077D0(v14);
    v16 = *(_DWORD *)a4;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_405790(v15, v14, a2, a3, v16, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v9 = v21;
  return v12;
}

_BYTE *__fastcall sub_4069C0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __int64 v7; // rdx
  __m128i *v8; // rbx
  int *v9; // r13
  __int64 v10; // rsi
  unsigned __int64 *v11; // rbx
  _BYTE *v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rax
  int v16; // r8d
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  unsigned __int64 v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+18h] [rbp-40h]
  int v22; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v8 = (__m128i *)ptr;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_6122D0 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_407A20(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( ptr == &xmmword_6122C0 )
    {
      v8 = (__m128i *)sub_407830(0LL, v10);
      ptr = v8;
      *v8 = _mm_load_si128((const __m128i *)&xmmword_6122C0);
    }
    else
    {
      ptr = (void *)sub_407830(ptr, v10);
      v8 = (__m128i *)ptr;
    }
    memset(&v8[dword_6122D0], 0, 16LL * ((int)a1 + 1 - dword_6122D0));
    dword_6122D0 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(a4 + 4) | 1;
  v19 = *v11;
  v13 = sub_405790(v12, *v11, a2, a3, *(_DWORD *)a4, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v19 <= v13 )
  {
    v14 = v13 + 1;
    *v11 = v13 + 1;
    if ( v12 != (_BYTE *)&unk_612460 )
    {
      v20 = v13 + 1;
      free(v12);
      v14 = v20;
    }
    v15 = (_BYTE *)sub_4077D0(v14);
    v16 = *(_DWORD *)a4;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_405790(v15, v14, a2, a3, v16, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v9 = v21;
  return v12;
}

__int64 __fastcall sub_406B60(__int128 *a1)
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
    v1 = &xmmword_612560;
  result = sub_4079D0(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_406C50(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_612560;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_405790(
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

_BYTE *__fastcall sub_406CD0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_612560;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_405790(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_4077D0(v11 + 1);
  sub_405790(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_406DD0()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( dword_6122D0 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_6122D0 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_612460 )
  {
    free(v4);
    *(_QWORD *)&xmmword_6122C0 = 256LL;
    *((_QWORD *)&xmmword_6122C0 + 1) = &unk_612460;
  }
  if ( v0 != &xmmword_6122C0 )
  {
    free(v0);
    ptr = &xmmword_6122C0;
  }
  dword_6122D0 = 1;
}

_BYTE *__fastcall sub_406EE0(__int64 a1, int a2, __int64 a3)
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
  return sub_4069C0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_406EE0(__int64 a1, int a2, __int64 a3)
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
  return sub_4069C0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_406F50(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_4069C0(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_406F50(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_4069C0(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_406FE0(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_612590;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_612560);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_612570);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_612580);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_4069C0(0LL, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_407060(__int64 a1)
{
  return sub_406FE0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_407090(__int64 a1, int a2, __int64 a3)
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
  return sub_4069C0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407090(__int64 a1, int a2, __int64 a3)
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
  return sub_4069C0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407100(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_612560);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_612570);
  si128 = _mm_load_si128((const __m128i *)&xmmword_612580);
  v8 = qword_612590;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_4069C0(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_4071F0(__int64 a1, __int64 a2)
{
  return sub_4069C0(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_612280);
}

_BYTE *__fastcall sub_407210(__int64 a1)
{
  return sub_4069C0(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_612280);
}

__int64 __fastcall sub_407230(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_407230(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_407630(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
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
        return sub_407230(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_407230(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_407690(
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
        return sub_407230(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_407230(a1, a2, a3, a4, v15, i);
}

int sub_407750()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_40C41A, "https://www.gnu.org/software/coreutils/");
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_4077D0(size_t a1, __int64 a2)
{
  void *result; // rax
  __int64 v3; // rdx

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_407A20(a1, a2, v3);
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_407820(size_t a1, __int64 a2)
{
  return sub_4077D0(a1, a2);
}

void *__fastcall sub_407830(void *a1, size_t a2)
{
  void *result; // rax
  __int64 v3; // rdx

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
        sub_407A20(a1, a2, v3);
    }
  }
  return result;
}

void *__fastcall sub_407930(void *a1, size_t *a2, __int64 a3)
{
  size_t v3; // rax

  v3 = *a2;
  if ( a1 )
  {
    a3 = 0x5555555555555553LL;
    if ( v3 <= 0x5555555555555553LL )
    {
      v3 += (v3 >> 1) + 1;
LABEL_4:
      *a2 = v3;
      return sub_407830(a1, v3);
    }
LABEL_8:
    sub_407A20(a1, a2, a3);
  }
  if ( v3 )
  {
    if ( (v3 & 0x8000000000000000LL) == 0LL )
      goto LABEL_4;
    goto LABEL_8;
  }
  *a2 = 128LL;
  return sub_407830(0LL, 0x80uLL);
}

void *__fastcall sub_407980(size_t n, __int64 a2)
{
  void *v2; // rax

  v2 = sub_4077D0(n, a2);
  return memset(v2, 0, n);
}

__int64 __fastcall sub_4079A0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_407A20(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_4079D0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_4077D0(n, n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_407A00(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_4079D0(src, v1 + 1);
}

void __noreturn sub_407A20()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 sub_407A60()
{
  int v0; // ebx
  char *v2; // rbp
  int *v3; // rax

  v0 = sub_409150();
  if ( v0 < 0 && !ferror(stdout) )
  {
    v2 = dcgettext(0LL, "cannot perform formatted output", 5);
    v3 = __errno_location();
    error(status, *v3, v2);
  }
  return (unsigned int)v0;
}

__int64 sub_407AC0(__int64 a1, ...)
{
  gcc_va_list va; // [rsp+8h] [rbp-D0h] BYREF

  va_start(va, a1);
  return sub_407A60(a1, va);
}

__int64 __fastcall sub_407B60(FILE *stream)
{
  int v1; // ebx
  char *v3; // rbp
  int *v4; // rax

  v1 = sub_409090(stream);
  if ( v1 < 0 && !ferror(stream) )
  {
    v3 = dcgettext(0LL, "cannot perform formatted output", 5);
    v4 = __errno_location();
    error(status, *v4, v3);
  }
  return (unsigned int)v1;
}

__int64 __fastcall sub_407BC0(FILE *a1)
{
  return sub_407B60(a1);
}

void __fastcall __noreturn sub_407C50(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  const char *v9; // rsi
  char *v10; // r12
  char *v11; // r13
  char *v12; // rax
  char v13[42]; // [rsp+Eh] [rbp-2Ah] BYREF

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v9 = (&off_40F700)[v5];
    if ( a2 < 0 )
    {
      v13[0] = a3;
      v11 = v13;
      v10 = &asc_40F680[-a2];
      v13[1] = 0;
    }
    else
    {
      v10 = "--";
      v11 = *(char **)(a4 + 32LL * a2);
    }
    v12 = dcgettext(0LL, v9, 5);
    error(v6, 0, v12, v10, v11, a5);
    abort();
  }
  abort();
}

void __fastcall __noreturn sub_407C50(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  const char *v9; // rsi
  char *v10; // r12
  char *v11; // r13
  char *v12; // rax
  char v13[42]; // [rsp+Eh] [rbp-2Ah] BYREF

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v9 = (&off_40F700)[v5];
    if ( a2 < 0 )
    {
      v13[0] = a3;
      v11 = v13;
      v10 = &asc_40F680[-a2];
      v13[1] = 0;
    }
    else
    {
      v10 = "--";
      v11 = *(char **)(a4 + 32LL * a2);
    }
    v12 = dcgettext(0LL, v9, 5);
    error(v6, 0, v12, v10, v11, a5);
    abort();
  }
  abort();
}

__int64 __fastcall sub_407CE0(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
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
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
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
  v13 = __strtoul_internal(nptr, p_endptr, a3, 0);
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

int __fastcall sub_408120(FILE *stream)
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
  if ( !(unsigned int)sub_4081A0(stream) )
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

int __fastcall sub_4081A0(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_4081E0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_4081E0(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_408240(__int64 a1, int *a2)
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

__int64 __fastcall sub_408320(
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

__int64 __fastcall sub_408940(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_408240((__int64)a2, a7);
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
        sub_408240((__int64)a2, a7);
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
            return (unsigned int)sub_408320(a1, a2, v12, a4, a5, a6, a7, v8, "--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_408320(a1, a2, v12, a4, a5, a6, a7, v8, "-");
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
        return (unsigned int)sub_408320(a1, a2, v12, a4, a5, 0, a7, v8, "-W ");
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

__int64 __fastcall sub_408F10(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_6125A0 = dword_6122DC;
  dword_6125A4 = dword_6122D8;
  result = sub_408940(a1, a2, a3, a4, a5, a6, &dword_6125A0, a7);
  dword_6122DC = dword_6125A0;
  nptr = (char *)qword_6125B0;
  dword_6122D4 = dword_6125A8;
  return result;
}

__int64 __fastcall sub_408F70(int a1, __int64 *a2, const char *a3)
{
  return sub_408F10(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_408F90(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_408F10(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_408FB0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_408940(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_408FD0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_408F10(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_408FF0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_408940(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_409010(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_4091D0(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

__int64 __fastcall sub_409090(FILE *s, __int64 a2, __int64 a3)
{
  char *v3; // rax
  size_t v4; // rbx
  char *v5; // rbp
  int *v7; // rax
  int v8; // r13d
  int *v9; // r12
  size_t n; // [rsp+8h] [rbp-800h] BYREF
  char v11[2040]; // [rsp+10h] [rbp-7F8h] BYREF

  n = 2000LL;
  v3 = (char *)sub_4097B0(v11, &n, a2, a3);
  v4 = n;
  if ( !v3 )
    goto LABEL_10;
  v5 = v3;
  if ( fwrite(v3, 1uLL, n, s) >= v4 )
  {
    if ( v5 != v11 )
      free(v5);
    if ( v4 <= 0x7FFFFFFF )
      return (unsigned int)v4;
    *__errno_location() = 75;
LABEL_10:
    LODWORD(v4) = -1;
    sub_4097A0(s);
    return (unsigned int)v4;
  }
  LODWORD(v4) = -1;
  if ( v5 != v11 )
  {
    v7 = __errno_location();
    v8 = *v7;
    v9 = v7;
    free(v5);
    *v9 = v8;
  }
  return (unsigned int)v4;
}

__int64 __fastcall sub_409150(__int64 a1, __int64 a2)
{
  return sub_409090(stdout, a1, a2);
}

int __fastcall sub_409170(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  int result; // eax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_408120(stream);
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

bool __fastcall sub_4091D0(int a1)
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

const char *sub_409230()
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
  v1 = qword_6125D8;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_6125D8 )
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
          qword_6125D8 = v1;
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
                sub_408120(v60);
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
            sub_408120(v39);
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

void __fastcall sub_4097A0(_DWORD *a1)
{
  *a1 |= 0x20u;
}

char *__fastcall sub_4097B0(void *a1, size_t *a2, _BYTE *a3, __int64 a4, double a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  __int64 *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  _BYTE *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  void *v17; // rcx
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
  __int64 v33; // rdi
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
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // r11d
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
  __int64 v84; // rax
  char *v85; // rdi
  unsigned __int64 v86; // rax
  void *v87; // rax
  char *v88; // rax
  char *v89; // rcx
  int v90; // r8d
  __int16 v91; // ax
  char *v92; // r15
  char *v93; // rax
  char *v94; // rax
  char *v95; // rax
  char v96; // al
  char *v97; // r9
  size_t v98; // r8
  unsigned __int64 v99; // r10
  char *v100; // rdi
  __int64 v101; // rax
  char *v102; // r10
  unsigned __int64 v103; // rax
  char *v104; // rax
  char *v105; // rsi
  char v106; // al
  size_t v107; // r15
  size_t v108; // r14
  bool v109; // r13
  char *v110; // rax
  char *v111; // rax
  __int64 v112; // rax
  char *v113; // r10
  char *v114; // rax
  char *v115; // rax
  char *v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rdx
  char v119; // al
  __int64 v120; // rdx
  char *v121; // rax
  char *v122; // rax
  __int64 v123; // rdx
  char v124; // al
  char *v125; // rax
  char *v126; // rsi
  __int64 v127; // r9
  __int64 v128; // rdx
  char *v129; // rax
  char *v130; // rsi
  char *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned __int64 v134; // rax
  char v135; // al
  __int64 v136; // rsi
  char v137; // al
  char *v138; // rax
  __int64 v139; // rdx
  char v140; // al
  char *v141; // rax
  char *v142; // rax
  char *v143; // rax
  void *v144; // rdx
  char v145; // al
  _BYTE *v146; // rax
  char *v147; // rax
  char v148; // al
  int *v149; // [rsp+10h] [rbp-700h]
  __int64 v150; // [rsp+20h] [rbp-6F0h] BYREF
  unsigned __int64 v151; // [rsp+28h] [rbp-6E8h]
  char *v152; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v154; // [rsp+40h] [rbp-6D0h]
  void *v155; // [rsp+48h] [rbp-6C8h]
  char *v156; // [rsp+50h] [rbp-6C0h]
  __int64 v157; // [rsp+58h] [rbp-6B8h]
  _BYTE *v158; // [rsp+60h] [rbp-6B0h]
  __int64 *v159; // [rsp+68h] [rbp-6A8h]
  long double v160; // [rsp+70h] [rbp-6A0h]
  void *v161; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v163; // [rsp+94h] [rbp-67Ch] BYREF
  unsigned int v164; // [rsp+98h] [rbp-678h]
  unsigned int v165; // [rsp+9Ch] [rbp-674h]
  char v166[8]; // [rsp+A0h] [rbp-670h] BYREF
  void *v167; // [rsp+A8h] [rbp-668h]
  _BYTE v168[224]; // [rsp+B0h] [rbp-660h] BYREF
  __int64 v169; // [rsp+190h] [rbp-580h] BYREF
  void *v170; // [rsp+198h] [rbp-578h]
  __int64 v171; // [rsp+1A0h] [rbp-570h]
  __int64 v172; // [rsp+1A8h] [rbp-568h]
  _BYTE v173[624]; // [rsp+1B0h] [rbp-560h] BYREF
  char v174[752]; // [rsp+420h] [rbp-2F0h] BYREF

  src = a1;
  v154 = a2;
  if ( (int)sub_40B4F0(a3, &v169, v166) < 0 )
    return 0LL;
  if ( (int)sub_40B2D0(a4, v166) >= 0 )
  {
    v7 = v171 + 7;
    if ( (unsigned __int64)(v171 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v172, v7);
    v8 = v172 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v159 = &v150;
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = (__int64 *)malloc(v9);
      v159 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v154;
    v12 = (char *)v170;
    v13 = a3;
    v14 = (char *)src;
    v157 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v170;
    if ( *(_BYTE **)v170 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (void *)(v16 - v13);
    v18 = (unsigned __int64)v17 + v15;
    v19 = (size_t)v17 + v15;
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
          v158 = v13;
          LOBYTE(v160) = v20;
          v161 = v17;
          v21 = (char *)malloc(v11);
          v17 = v161;
          v13 = v158;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v160) )
          {
            *(_QWORD *)&v160 = v158;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = v161;
            v13 = *(_BYTE **)&v160;
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
          *(_QWORD *)&v160 = v13;
          v161 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = v161;
          v13 = *(_BYTE **)&v160;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)v17 + v15;
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v169 != v157 )
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
              goto LABEL_238;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_238:
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
            *(_QWORD *)&v160 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v161) = v14 == src;
          v95 = (char *)malloc(v11);
          if ( !v95 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v161 )
            v14 = (char *)memcpy(v95, v14, v19);
          else
            v14 = v95;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v167;
      v28 = (long double *)((char *)v167 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v161) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v161 == 12 )
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
                v161 = (void *)-1LL;
                while ( 1 )
                {
                  v126 = v66 + 1;
                  v127 = -1LL;
                  v128 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v127 = 10 * v50;
                  v76 = __CFADD__(v127, v128);
                  v50 = v127 + v128;
                  v66 = v126;
                  if ( v76 )
                  {
                    if ( v67 == v126 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v161;
                      goto LABEL_82;
                    }
                    while ( *v66++ != 48 )
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
              v70 = (char *)v167 + 32 * v69;
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
                v129 = v51 + 1;
                v55 = 0LL;
                if ( v52 != v129 )
                {
                  v130 = v129;
                  while ( 1 )
                  {
                    v131 = v130 + 1;
                    v132 = *v130 - 48;
                    v133 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v133 = 10 * v55;
                    v76 = __CFADD__(v133, v132);
                    v134 = v133 + v132;
                    v130 = v131;
                    v55 = v134;
                    if ( v76 )
                    {
                      if ( v52 == v131 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v130 = v131 + 1;
                        if ( *v131 == 48 )
                          break;
                        if ( v52 == v130 )
                          goto LABEL_88;
                        ++v131;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v130 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_375;
              }
              v54 = (char *)v167 + 32 * v53;
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
                  v86 = v56;
                  if ( v50 >= v56 )
                    v86 = v50;
                  v76 = __CFADD__(v86, 1LL);
                  v87 = (void *)(v86 + 1);
                  v161 = v87;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v87 <= 0x2BC )
                  {
                    v89 = v174;
                  }
                  else
                  {
                    v155 = (void *)v50;
                    v156 = (char *)v55;
                    LODWORD(v158) = v68;
                    v160 = _FST7;
                    if ( v87 == (void *)-1LL )
                      goto LABEL_88;
                    v88 = (char *)malloc((size_t)v87);
                    v68 = (int)v158;
                    _FST7 = v160;
                    v89 = v88;
                    v55 = (unsigned __int64)v156;
                    v50 = (unsigned __int64)v155;
                    if ( !v88 )
                      goto LABEL_88;
                  }
                  v90 = (unsigned __int16)v164;
                  LOBYTE(v91) = v164;
                  HIBYTE(v91) = BYTE1(v164) | 3;
                  LOWORD(v164) = v91;
                  __asm (" fxam ");
                  if ( (v62 & 2) != 0 )
                  {
                    *v89 = 45;
                    _FST7 = -_FST7;
                    v92 = v89 + 1;
                  }
                  else if ( (v68 & 4) != 0 )
                  {
                    v92 = v89 + 1;
                    *v89 = 43;
                  }
                  else
                  {
                    v92 = v89;
                    if ( (v68 & 8) != 0 )
                    {
                      v92 = v89 + 1;
                      *v89 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v97 = v92 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      v92[2] = 102;
                      *(_WORD *)v92 = 28265;
                    }
                    else
                    {
                      v92[2] = 70;
                      *(_WORD *)v92 = 20041;
                    }
                    v92 = 0LL;
                    goto LABEL_263;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v96 = v12[72] & 0xDF;
                  switch ( v96 )
                  {
                    case 'F':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || v55 )
                      {
                        LODWORD(v151) = v90;
                        v152 = (char *)v50;
                        v155 = v89;
                        v156 = (char *)v55;
                        LODWORD(v158) = v68;
                        *(_QWORD *)&v160 = v92 + 2;
                        v122 = nl_langinfo(0x10000);
                        v123 = (__int64)v156;
                        v97 = *(char **)&v160;
                        v124 = *v122;
                        LOBYTE(v68) = (_BYTE)v158;
                        v89 = (char *)v155;
                        v50 = (unsigned __int64)v152;
                        LOWORD(v90) = v151;
                        if ( !v124 )
                          v124 = 46;
                        v92[1] = v124;
                        if ( v123 )
                        {
                          v125 = v97;
                          do
                            *v125++ = 48;
                          while ( v125 != &v92[v123 + 2] );
                          v97 += v123;
                        }
                        goto LABEL_263;
                      }
                      goto LABEL_262;
                    case 'E':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || (v105 = v92 + 1, v55) )
                      {
                        LODWORD(v151) = v90;
                        v152 = (char *)v50;
                        v155 = v89;
                        v156 = (char *)v55;
                        LODWORD(v158) = v68;
                        *(_QWORD *)&v160 = v92 + 2;
                        v138 = nl_langinfo(0x10000);
                        v139 = (__int64)v156;
                        v105 = *(char **)&v160;
                        v140 = *v138;
                        LOBYTE(v68) = (_BYTE)v158;
                        v89 = (char *)v155;
                        v50 = (unsigned __int64)v152;
                        LOWORD(v90) = v151;
                        if ( !v140 )
                          v140 = 46;
                        v92[1] = v140;
                        if ( v139 )
                        {
                          v141 = v105;
                          do
                            *v141++ = 48;
                          while ( v141 != &v92[v139 + 2] );
                          v105 += v139;
                        }
                      }
                      v106 = v12[72];
                      v97 = v105 + 4;
                      v105[3] = 48;
                      *v105 = v106;
                      *(_WORD *)(v105 + 1) = 12331;
                      goto LABEL_263;
                    case 'G':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v150) = v90;
                          v151 = v50;
                          v152 = v92 + 2;
                          v155 = v89;
                          LODWORD(v156) = v68;
                          v158 = (_BYTE *)v55;
                          *(_QWORD *)&v160 = v55 - 1;
                          v116 = nl_langinfo(0x10000);
                          v117 = *(_QWORD *)&v160;
                          v118 = (__int64)v158;
                          v119 = *v116;
                          LOBYTE(v68) = (_BYTE)v156;
                          v89 = (char *)v155;
                          v97 = v152;
                          v50 = v151;
                          LOWORD(v90) = WORD2(v150);
                          if ( !v119 )
                            v119 = 46;
                          v92[1] = v119;
                          if ( v117 )
                          {
                            v120 = (__int64)&v92[v118 + 1];
                            v121 = v97;
                            do
                              *v121++ = 48;
                            while ( v121 != (char *)v120 );
                            v97 += v117;
                          }
                        }
                        else
                        {
                          LODWORD(v152) = v90;
                          v155 = (void *)v50;
                          v156 = v92 + 2;
                          v158 = v89;
                          LODWORD(v160) = v68;
                          v147 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v160);
                          v89 = v158;
                          v148 = *v147;
                          v97 = v156;
                          v50 = (unsigned __int64)v155;
                          LOWORD(v90) = (_WORD)v152;
                          if ( !v148 )
                            v148 = 46;
                          v92[1] = v148;
                        }
                        goto LABEL_263;
                      }
LABEL_262:
                      v97 = v92 + 1;
                      goto LABEL_263;
                  }
                  if ( v96 != 65 )
                    goto LABEL_200;
                  *v92 = 48;
                  *(_QWORD *)&v160 = v92 + 2;
                  v135 = v12[72];
                  v92[2] = 48;
                  v92[1] = v135 + 23;
                  if ( (v68 & 0x10) != 0 || (v136 = (__int64)(v92 + 3), v55) )
                  {
                    HIDWORD(v150) = v90;
                    v151 = v50;
                    v152 = v89;
                    v155 = (void *)v55;
                    LODWORD(v156) = v68;
                    v158 = v92 + 4;
                    v143 = nl_langinfo(0x10000);
                    v144 = v155;
                    v136 = (__int64)v158;
                    v145 = *v143;
                    LOBYTE(v68) = (_BYTE)v156;
                    v89 = v152;
                    v50 = v151;
                    LOWORD(v90) = WORD2(v150);
                    if ( !v145 )
                      v145 = 46;
                    v92[3] = v145;
                    if ( v144 )
                    {
                      v146 = (_BYTE *)v136;
                      do
                        *v146++ = 48;
                      while ( v146 != (_BYTE *)v144 + (_QWORD)v92 + 4 );
                      v136 += (__int64)v144;
                    }
                  }
                  v137 = v12[72];
                  v97 = (char *)(v136 + 3);
                  *(_WORD *)(v136 + 1) = 12331;
                  v92 = *(char **)&v160;
                  *(_BYTE *)v136 = v137 + 15;
LABEL_263:
                  LOWORD(v164) = v90;
                  v98 = v97 - v89;
                  if ( v50 > v97 - v89 )
                  {
                    v99 = v50 - v98;
                    v100 = &v97[v99];
                    v98 = &v97[v99] - v89;
                    if ( (v68 & 2) != 0 )
                    {
                      if ( v99 )
                      {
                        do
                          *v97++ = 32;
                        while ( v100 != v97 );
                      }
                    }
                    else if ( (v68 & 0x20) != 0 && v92 )
                    {
                      if ( v92 >= v97 )
                      {
                        v92 = v97;
                      }
                      else
                      {
                        v101 = -1LL;
                        do
                        {
                          v100[v101] = v97[v101];
                          --v101;
                        }
                        while ( v101 != v92 - 1 - v97 );
                      }
                      if ( v99 )
                      {
                        v102 = &v92[v99];
                        do
                          *v92++ = 48;
                        while ( v92 != v102 );
                      }
                    }
                    else
                    {
                      v112 = -1LL;
                      if ( v89 < v97 )
                      {
                        do
                        {
                          v100[v112] = v97[v112];
                          --v112;
                        }
                        while ( v89 - 1 - v97 != v112 );
                        v97 = v89;
                      }
                      if ( v99 )
                      {
                        v113 = &v97[v99];
                        do
                          *v97++ = 32;
                        while ( v97 != v113 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v161 <= v98 )
                    goto LABEL_200;
                  v103 = v98 + v19;
                  v15 = v98 + v19;
                  if ( v11 - v19 <= v98 )
                  {
                    if ( __CFADD__(v98, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v103 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v103 )
                          goto LABEL_373;
                      }
                      else
                      {
                        if ( v103 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_280;
                        }
LABEL_373:
                        if ( v103 == -1LL )
                          goto LABEL_88;
                        v11 = v98 + v19;
                      }
LABEL_280:
                      if ( !v14 || v14 == src )
                      {
                        LOBYTE(v158) = v14 == src;
                        *(_QWORD *)&v160 = v98;
                        v161 = v89;
                        v114 = (char *)malloc(v11);
                        v89 = (char *)v161;
                        v98 = *(_QWORD *)&v160;
                        if ( !v114 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v158 )
                        {
                          v115 = (char *)memcpy(v114, v14, v19);
                          v89 = (char *)v161;
                          v98 = *(_QWORD *)&v160;
                          v14 = v115;
                        }
                        else
                        {
                          v14 = v114;
                        }
                      }
                      else
                      {
                        *(_QWORD *)&v160 = v98;
                        v161 = v89;
                        v104 = (char *)realloc(v14, v11);
                        if ( !v104 )
                          goto LABEL_88;
                        v89 = (char *)v161;
                        v98 = *(_QWORD *)&v160;
                        v14 = v104;
                      }
                    }
                  }
                  v161 = v89;
                  memcpy(&v14[v19], v89, v98);
                  if ( v161 != v174 )
                    free(v161);
                  goto LABEL_110;
                }
LABEL_375:
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
        v32 = (char *)v159 + 1;
        *(_BYTE *)v159 = 37;
        if ( (v31 & 1) != 0 )
        {
          v33 = (__int64)v159;
          *((_BYTE *)v159 + 1) = 39;
          v32 = (char *)(v33 + 2);
        }
        if ( (v31 & 2) != 0 )
          *v32++ = 45;
        if ( (v31 & 4) != 0 )
          *v32++ = 43;
        if ( (v31 & 8) != 0 )
          *v32++ = 32;
        if ( (v31 & 0x10) != 0 )
          *v32++ = 35;
        if ( (v31 & 0x40) != 0 )
          *v32++ = 73;
        if ( (v31 & 0x20) != 0 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v158 = v27;
          *(_QWORD *)&v160 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v158;
          v32 += *(_QWORD *)&v160;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v158 = v27;
          *(_QWORD *)&v160 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v158;
          v32 += *(_QWORD *)&v160;
        }
        if ( (unsigned int)v161 <= 0x10 )
        {
          v38 = 1LL << (char)v161;
          if ( ((1LL << (char)v161) & 0x14180) != 0 )
            goto LABEL_125;
          if ( (v38 & 0x1000) != 0 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( (v38 & 0x600) == 0 )
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
            LODWORD(v158) = 1;
            v164 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v158) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v158;
          *(&v164 + (unsigned int)v158) = *((_DWORD *)v43 + 4);
          LODWORD(v158) = v44 + 1;
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
              *(_QWORD *)&v160 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v170 != v173 )
                    free(v170);
                  if ( v167 != v168 )
                    free(v167);
                  v14 = 0LL;
                  **(_DWORD **)&v160 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v160 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v160) = v14 == src;
            v94 = (char *)malloc(v11);
            v46 = v94;
            if ( !v94 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v160) )
              v46 = (char *)memcpy(v94, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v156 = v46;
            v47 = __errno_location();
            v48 = v156;
            v156 = v32;
            *(_QWORD *)&v160 = v47;
            LODWORD(v152) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v163 = -1;
              **(_DWORD **)&v160 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (int)v161 )
              {
                case 1:
                  v80 = (unsigned int)*((char *)v167 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v80 = *((unsigned __int8 *)v167 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v80 = (unsigned int)*((__int16 *)v167 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v80 = *((unsigned __int16 *)v167 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 13:
                case 14:
                  v80 = *((unsigned int *)v167 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v155 = v48;
                  if ( (_DWORD)v158 != 1 )
                  {
                    if ( (_DWORD)v158 != 2 )
                    {
                      v149 = &v163;
                      goto LABEL_153;
                    }
                    goto LABEL_209;
                  }
                  v149 = (int *)v80;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 15:
                case 16:
                case 17:
                  v71 = &v48[v19];
                  v72 = (int *)*((_QWORD *)v167 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v155 = v48;
                  if ( (_DWORD)v158 != 1 )
                  {
                    if ( (_DWORD)v158 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v159, v72, a5, &v163);
LABEL_131:
                      v48 = (char *)v155;
                      goto LABEL_132;
                    }
LABEL_209:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v159, v164, a5, v165);
LABEL_210:
                    v48 = (char *)v155;
LABEL_132:
                    v74 = v163;
                    if ( v163 < 0 )
                    {
LABEL_154:
                      if ( v156[1] )
                      {
                        v156[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v81 = **(_DWORD **)&v160;
                        if ( !**(_DWORD **)&v160 )
                        {
                          v81 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v81 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v170 != v173 )
                          free(v170);
                        if ( v167 != v168 )
                          free(v167);
                        **(_DWORD **)&v160 = v81;
                        return 0LL;
                      }
LABEL_136:
                      v163 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v160 = (_DWORD)v152;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v170 != v173 )
                          free(v170);
                        if ( v167 != v168 )
                          free(v167);
                        v14 = 0LL;
                        **(_DWORD **)&v160 = 75;
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
                          if ( !v48 || v48 == src )
                          {
                            v155 = v48;
                            v93 = (char *)malloc(v11);
                            v48 = (char *)v155;
                            if ( !v93 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v93, v155, v19);
                            else
                              v48 = v93;
                          }
                          else
                          {
                            v155 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v155;
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
                  v149 = v72;
                  break;
                case 11:
                  v84 = *((_QWORD *)v12 + 10);
                  v85 = &v48[v19];
                  v155 = v48;
                  a5 = *((double *)v167 + 4 * v84 + 2);
                  if ( (_DWORD)v158 == 1 )
                  {
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v159, v164, a5, &v163);
                  }
                  else
                  {
                    if ( (_DWORD)v158 != 2 )
                    {
                      v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v159, &v163, a5, v150);
                      v48 = (char *)v155;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v159, v164, a5, v165);
                  }
                  v48 = (char *)v155;
                  goto LABEL_132;
                case 12:
                  v82 = *((_QWORD *)v12 + 10);
                  v83 = &v48[v19];
                  v155 = v48;
                  if ( (_DWORD)v158 == 1 )
                  {
                    v73 = __snprintf_chk(
                            v83,
                            v49,
                            1LL,
                            -1LL,
                            v159,
                            v164,
                            a5,
                            COERCE_UNSIGNED_INT128(*((long double *)v167 + 2 * v82 + 1)));
                    goto LABEL_210;
                  }
                  if ( (_DWORD)v158 != 2 )
                  {
                    v73 = __snprintf_chk(
                            v83,
                            v49,
                            1LL,
                            -1LL,
                            v159,
                            &v163,
                            a5,
                            COERCE_UNSIGNED_INT128(*((long double *)v167 + 2 * v82 + 1)));
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v159, v164, a5, v165);
                  v48 = (char *)v155;
                  goto LABEL_132;
                default:
                  goto LABEL_408;
              }
              break;
            }
            v80 = v164;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v159, v80, a5, v149);
            v74 = v163;
            v48 = (char *)v155;
            if ( v163 < 0 )
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
LABEL_408:
          abort();
      }
LABEL_110:
      v13 = (_BYTE *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v157;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v107 = v19;
    v108 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v108 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v108 )
        {
LABEL_303:
          v109 = v14 == src;
          if ( !v14 || v14 == src )
          {
            v142 = (char *)malloc(v11);
            if ( !v142 )
              goto LABEL_88;
            if ( v107 && v109 )
              v14 = (char *)memcpy(v142, v14, v107);
            else
              v14 = v142;
          }
          else
          {
            v110 = (char *)realloc(v14, v11);
            if ( !v110 )
              goto LABEL_126;
            v14 = v110;
          }
          goto LABEL_307;
        }
      }
      else if ( v108 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_303;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_303;
    }
LABEL_307:
    v14[v107] = 0;
    if ( v11 > v108 && v14 != src )
    {
      v111 = (char *)realloc(v14, v108);
      if ( v111 )
        v14 = v111;
    }
    if ( ptr )
      free(ptr);
    if ( v170 != v173 )
      free(v170);
    if ( v167 != v168 )
      free(v167);
    *v154 = v107;
    return v14;
  }
  if ( v170 != v173 )
    free(v170);
  if ( v167 != v168 )
    free(v167);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

char *__fastcall sub_4097B0(void *a1, size_t *a2, _BYTE *a3, __int64 a4, double a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  __int64 *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  _BYTE *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  void *v17; // rcx
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
  __int64 v33; // rdi
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
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // r11d
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
  __int64 v84; // rax
  char *v85; // rdi
  unsigned __int64 v86; // rax
  void *v87; // rax
  char *v88; // rax
  char *v89; // rcx
  int v90; // r8d
  __int16 v91; // ax
  char *v92; // r15
  char *v93; // rax
  char *v94; // rax
  char *v95; // rax
  char v96; // al
  char *v97; // r9
  size_t v98; // r8
  unsigned __int64 v99; // r10
  char *v100; // rdi
  __int64 v101; // rax
  char *v102; // r10
  unsigned __int64 v103; // rax
  char *v104; // rax
  char *v105; // rsi
  char v106; // al
  size_t v107; // r15
  size_t v108; // r14
  bool v109; // r13
  char *v110; // rax
  char *v111; // rax
  __int64 v112; // rax
  char *v113; // r10
  char *v114; // rax
  char *v115; // rax
  char *v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rdx
  char v119; // al
  __int64 v120; // rdx
  char *v121; // rax
  char *v122; // rax
  __int64 v123; // rdx
  char v124; // al
  char *v125; // rax
  char *v126; // rsi
  __int64 v127; // r9
  __int64 v128; // rdx
  char *v129; // rax
  char *v130; // rsi
  char *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned __int64 v134; // rax
  char v135; // al
  __int64 v136; // rsi
  char v137; // al
  char *v138; // rax
  __int64 v139; // rdx
  char v140; // al
  char *v141; // rax
  char *v142; // rax
  char *v143; // rax
  void *v144; // rdx
  char v145; // al
  _BYTE *v146; // rax
  char *v147; // rax
  char v148; // al
  int *v149; // [rsp+10h] [rbp-700h]
  __int64 v150; // [rsp+20h] [rbp-6F0h] BYREF
  unsigned __int64 v151; // [rsp+28h] [rbp-6E8h]
  char *v152; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v154; // [rsp+40h] [rbp-6D0h]
  void *v155; // [rsp+48h] [rbp-6C8h]
  char *v156; // [rsp+50h] [rbp-6C0h]
  __int64 v157; // [rsp+58h] [rbp-6B8h]
  _BYTE *v158; // [rsp+60h] [rbp-6B0h]
  __int64 *v159; // [rsp+68h] [rbp-6A8h]
  long double v160; // [rsp+70h] [rbp-6A0h]
  void *v161; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v163; // [rsp+94h] [rbp-67Ch] BYREF
  unsigned int v164; // [rsp+98h] [rbp-678h]
  unsigned int v165; // [rsp+9Ch] [rbp-674h]
  char v166[8]; // [rsp+A0h] [rbp-670h] BYREF
  void *v167; // [rsp+A8h] [rbp-668h]
  _BYTE v168[224]; // [rsp+B0h] [rbp-660h] BYREF
  __int64 v169; // [rsp+190h] [rbp-580h] BYREF
  void *v170; // [rsp+198h] [rbp-578h]
  __int64 v171; // [rsp+1A0h] [rbp-570h]
  __int64 v172; // [rsp+1A8h] [rbp-568h]
  _BYTE v173[624]; // [rsp+1B0h] [rbp-560h] BYREF
  char v174[752]; // [rsp+420h] [rbp-2F0h] BYREF

  src = a1;
  v154 = a2;
  if ( (int)sub_40B4F0(a3, &v169, v166) < 0 )
    return 0LL;
  if ( (int)sub_40B2D0(a4, v166) >= 0 )
  {
    v7 = v171 + 7;
    if ( (unsigned __int64)(v171 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v172, v7);
    v8 = v172 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v159 = &v150;
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = (__int64 *)malloc(v9);
      v159 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v154;
    v12 = (char *)v170;
    v13 = a3;
    v14 = (char *)src;
    v157 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v170;
    if ( *(_BYTE **)v170 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (void *)(v16 - v13);
    v18 = (unsigned __int64)v17 + v15;
    v19 = (size_t)v17 + v15;
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
          v158 = v13;
          LOBYTE(v160) = v20;
          v161 = v17;
          v21 = (char *)malloc(v11);
          v17 = v161;
          v13 = v158;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v160) )
          {
            *(_QWORD *)&v160 = v158;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = v161;
            v13 = *(_BYTE **)&v160;
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
          *(_QWORD *)&v160 = v13;
          v161 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = v161;
          v13 = *(_BYTE **)&v160;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)v17 + v15;
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v169 != v157 )
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
              goto LABEL_238;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_238:
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
            *(_QWORD *)&v160 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v161) = v14 == src;
          v95 = (char *)malloc(v11);
          if ( !v95 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v161 )
            v14 = (char *)memcpy(v95, v14, v19);
          else
            v14 = v95;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v167;
      v28 = (long double *)((char *)v167 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v161) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v161 == 12 )
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
                v161 = (void *)-1LL;
                while ( 1 )
                {
                  v126 = v66 + 1;
                  v127 = -1LL;
                  v128 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v127 = 10 * v50;
                  v76 = __CFADD__(v127, v128);
                  v50 = v127 + v128;
                  v66 = v126;
                  if ( v76 )
                  {
                    if ( v67 == v126 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v161;
                      goto LABEL_82;
                    }
                    while ( *v66++ != 48 )
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
              v70 = (char *)v167 + 32 * v69;
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
                v129 = v51 + 1;
                v55 = 0LL;
                if ( v52 != v129 )
                {
                  v130 = v129;
                  while ( 1 )
                  {
                    v131 = v130 + 1;
                    v132 = *v130 - 48;
                    v133 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v133 = 10 * v55;
                    v76 = __CFADD__(v133, v132);
                    v134 = v133 + v132;
                    v130 = v131;
                    v55 = v134;
                    if ( v76 )
                    {
                      if ( v52 == v131 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v130 = v131 + 1;
                        if ( *v131 == 48 )
                          break;
                        if ( v52 == v130 )
                          goto LABEL_88;
                        ++v131;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v130 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_375;
              }
              v54 = (char *)v167 + 32 * v53;
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
                  v86 = v56;
                  if ( v50 >= v56 )
                    v86 = v50;
                  v76 = __CFADD__(v86, 1LL);
                  v87 = (void *)(v86 + 1);
                  v161 = v87;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v87 <= 0x2BC )
                  {
                    v89 = v174;
                  }
                  else
                  {
                    v155 = (void *)v50;
                    v156 = (char *)v55;
                    LODWORD(v158) = v68;
                    v160 = _FST7;
                    if ( v87 == (void *)-1LL )
                      goto LABEL_88;
                    v88 = (char *)malloc((size_t)v87);
                    v68 = (int)v158;
                    _FST7 = v160;
                    v89 = v88;
                    v55 = (unsigned __int64)v156;
                    v50 = (unsigned __int64)v155;
                    if ( !v88 )
                      goto LABEL_88;
                  }
                  v90 = (unsigned __int16)v164;
                  LOBYTE(v91) = v164;
                  HIBYTE(v91) = BYTE1(v164) | 3;
                  LOWORD(v164) = v91;
                  __asm (" fxam ");
                  if ( (v62 & 2) != 0 )
                  {
                    *v89 = 45;
                    _FST7 = -_FST7;
                    v92 = v89 + 1;
                  }
                  else if ( (v68 & 4) != 0 )
                  {
                    v92 = v89 + 1;
                    *v89 = 43;
                  }
                  else
                  {
                    v92 = v89;
                    if ( (v68 & 8) != 0 )
                    {
                      v92 = v89 + 1;
                      *v89 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v97 = v92 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      v92[2] = 102;
                      *(_WORD *)v92 = 28265;
                    }
                    else
                    {
                      v92[2] = 70;
                      *(_WORD *)v92 = 20041;
                    }
                    v92 = 0LL;
                    goto LABEL_263;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v96 = v12[72] & 0xDF;
                  switch ( v96 )
                  {
                    case 'F':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || v55 )
                      {
                        LODWORD(v151) = v90;
                        v152 = (char *)v50;
                        v155 = v89;
                        v156 = (char *)v55;
                        LODWORD(v158) = v68;
                        *(_QWORD *)&v160 = v92 + 2;
                        v122 = nl_langinfo(0x10000);
                        v123 = (__int64)v156;
                        v97 = *(char **)&v160;
                        v124 = *v122;
                        LOBYTE(v68) = (_BYTE)v158;
                        v89 = (char *)v155;
                        v50 = (unsigned __int64)v152;
                        LOWORD(v90) = v151;
                        if ( !v124 )
                          v124 = 46;
                        v92[1] = v124;
                        if ( v123 )
                        {
                          v125 = v97;
                          do
                            *v125++ = 48;
                          while ( v125 != &v92[v123 + 2] );
                          v97 += v123;
                        }
                        goto LABEL_263;
                      }
                      goto LABEL_262;
                    case 'E':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || (v105 = v92 + 1, v55) )
                      {
                        LODWORD(v151) = v90;
                        v152 = (char *)v50;
                        v155 = v89;
                        v156 = (char *)v55;
                        LODWORD(v158) = v68;
                        *(_QWORD *)&v160 = v92 + 2;
                        v138 = nl_langinfo(0x10000);
                        v139 = (__int64)v156;
                        v105 = *(char **)&v160;
                        v140 = *v138;
                        LOBYTE(v68) = (_BYTE)v158;
                        v89 = (char *)v155;
                        v50 = (unsigned __int64)v152;
                        LOWORD(v90) = v151;
                        if ( !v140 )
                          v140 = 46;
                        v92[1] = v140;
                        if ( v139 )
                        {
                          v141 = v105;
                          do
                            *v141++ = 48;
                          while ( v141 != &v92[v139 + 2] );
                          v105 += v139;
                        }
                      }
                      v106 = v12[72];
                      v97 = v105 + 4;
                      v105[3] = 48;
                      *v105 = v106;
                      *(_WORD *)(v105 + 1) = 12331;
                      goto LABEL_263;
                    case 'G':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v150) = v90;
                          v151 = v50;
                          v152 = v92 + 2;
                          v155 = v89;
                          LODWORD(v156) = v68;
                          v158 = (_BYTE *)v55;
                          *(_QWORD *)&v160 = v55 - 1;
                          v116 = nl_langinfo(0x10000);
                          v117 = *(_QWORD *)&v160;
                          v118 = (__int64)v158;
                          v119 = *v116;
                          LOBYTE(v68) = (_BYTE)v156;
                          v89 = (char *)v155;
                          v97 = v152;
                          v50 = v151;
                          LOWORD(v90) = WORD2(v150);
                          if ( !v119 )
                            v119 = 46;
                          v92[1] = v119;
                          if ( v117 )
                          {
                            v120 = (__int64)&v92[v118 + 1];
                            v121 = v97;
                            do
                              *v121++ = 48;
                            while ( v121 != (char *)v120 );
                            v97 += v117;
                          }
                        }
                        else
                        {
                          LODWORD(v152) = v90;
                          v155 = (void *)v50;
                          v156 = v92 + 2;
                          v158 = v89;
                          LODWORD(v160) = v68;
                          v147 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v160);
                          v89 = v158;
                          v148 = *v147;
                          v97 = v156;
                          v50 = (unsigned __int64)v155;
                          LOWORD(v90) = (_WORD)v152;
                          if ( !v148 )
                            v148 = 46;
                          v92[1] = v148;
                        }
                        goto LABEL_263;
                      }
LABEL_262:
                      v97 = v92 + 1;
                      goto LABEL_263;
                  }
                  if ( v96 != 65 )
                    goto LABEL_200;
                  *v92 = 48;
                  *(_QWORD *)&v160 = v92 + 2;
                  v135 = v12[72];
                  v92[2] = 48;
                  v92[1] = v135 + 23;
                  if ( (v68 & 0x10) != 0 || (v136 = (__int64)(v92 + 3), v55) )
                  {
                    HIDWORD(v150) = v90;
                    v151 = v50;
                    v152 = v89;
                    v155 = (void *)v55;
                    LODWORD(v156) = v68;
                    v158 = v92 + 4;
                    v143 = nl_langinfo(0x10000);
                    v144 = v155;
                    v136 = (__int64)v158;
                    v145 = *v143;
                    LOBYTE(v68) = (_BYTE)v156;
                    v89 = v152;
                    v50 = v151;
                    LOWORD(v90) = WORD2(v150);
                    if ( !v145 )
                      v145 = 46;
                    v92[3] = v145;
                    if ( v144 )
                    {
                      v146 = (_BYTE *)v136;
                      do
                        *v146++ = 48;
                      while ( v146 != (_BYTE *)v144 + (_QWORD)v92 + 4 );
                      v136 += (__int64)v144;
                    }
                  }
                  v137 = v12[72];
                  v97 = (char *)(v136 + 3);
                  *(_WORD *)(v136 + 1) = 12331;
                  v92 = *(char **)&v160;
                  *(_BYTE *)v136 = v137 + 15;
LABEL_263:
                  LOWORD(v164) = v90;
                  v98 = v97 - v89;
                  if ( v50 > v97 - v89 )
                  {
                    v99 = v50 - v98;
                    v100 = &v97[v99];
                    v98 = &v97[v99] - v89;
                    if ( (v68 & 2) != 0 )
                    {
                      if ( v99 )
                      {
                        do
                          *v97++ = 32;
                        while ( v100 != v97 );
                      }
                    }
                    else if ( (v68 & 0x20) != 0 && v92 )
                    {
                      if ( v92 >= v97 )
                      {
                        v92 = v97;
                      }
                      else
                      {
                        v101 = -1LL;
                        do
                        {
                          v100[v101] = v97[v101];
                          --v101;
                        }
                        while ( v101 != v92 - 1 - v97 );
                      }
                      if ( v99 )
                      {
                        v102 = &v92[v99];
                        do
                          *v92++ = 48;
                        while ( v92 != v102 );
                      }
                    }
                    else
                    {
                      v112 = -1LL;
                      if ( v89 < v97 )
                      {
                        do
                        {
                          v100[v112] = v97[v112];
                          --v112;
                        }
                        while ( v89 - 1 - v97 != v112 );
                        v97 = v89;
                      }
                      if ( v99 )
                      {
                        v113 = &v97[v99];
                        do
                          *v97++ = 32;
                        while ( v97 != v113 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v161 <= v98 )
                    goto LABEL_200;
                  v103 = v98 + v19;
                  v15 = v98 + v19;
                  if ( v11 - v19 <= v98 )
                  {
                    if ( __CFADD__(v98, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v103 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v103 )
                          goto LABEL_373;
                      }
                      else
                      {
                        if ( v103 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_280;
                        }
LABEL_373:
                        if ( v103 == -1LL )
                          goto LABEL_88;
                        v11 = v98 + v19;
                      }
LABEL_280:
                      if ( !v14 || v14 == src )
                      {
                        LOBYTE(v158) = v14 == src;
                        *(_QWORD *)&v160 = v98;
                        v161 = v89;
                        v114 = (char *)malloc(v11);
                        v89 = (char *)v161;
                        v98 = *(_QWORD *)&v160;
                        if ( !v114 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v158 )
                        {
                          v115 = (char *)memcpy(v114, v14, v19);
                          v89 = (char *)v161;
                          v98 = *(_QWORD *)&v160;
                          v14 = v115;
                        }
                        else
                        {
                          v14 = v114;
                        }
                      }
                      else
                      {
                        *(_QWORD *)&v160 = v98;
                        v161 = v89;
                        v104 = (char *)realloc(v14, v11);
                        if ( !v104 )
                          goto LABEL_88;
                        v89 = (char *)v161;
                        v98 = *(_QWORD *)&v160;
                        v14 = v104;
                      }
                    }
                  }
                  v161 = v89;
                  memcpy(&v14[v19], v89, v98);
                  if ( v161 != v174 )
                    free(v161);
                  goto LABEL_110;
                }
LABEL_375:
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
        v32 = (char *)v159 + 1;
        *(_BYTE *)v159 = 37;
        if ( (v31 & 1) != 0 )
        {
          v33 = (__int64)v159;
          *((_BYTE *)v159 + 1) = 39;
          v32 = (char *)(v33 + 2);
        }
        if ( (v31 & 2) != 0 )
          *v32++ = 45;
        if ( (v31 & 4) != 0 )
          *v32++ = 43;
        if ( (v31 & 8) != 0 )
          *v32++ = 32;
        if ( (v31 & 0x10) != 0 )
          *v32++ = 35;
        if ( (v31 & 0x40) != 0 )
          *v32++ = 73;
        if ( (v31 & 0x20) != 0 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v158 = v27;
          *(_QWORD *)&v160 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v158;
          v32 += *(_QWORD *)&v160;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v158 = v27;
          *(_QWORD *)&v160 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v158;
          v32 += *(_QWORD *)&v160;
        }
        if ( (unsigned int)v161 <= 0x10 )
        {
          v38 = 1LL << (char)v161;
          if ( ((1LL << (char)v161) & 0x14180) != 0 )
            goto LABEL_125;
          if ( (v38 & 0x1000) != 0 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( (v38 & 0x600) == 0 )
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
            LODWORD(v158) = 1;
            v164 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v158) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v158;
          *(&v164 + (unsigned int)v158) = *((_DWORD *)v43 + 4);
          LODWORD(v158) = v44 + 1;
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
              *(_QWORD *)&v160 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v170 != v173 )
                    free(v170);
                  if ( v167 != v168 )
                    free(v167);
                  v14 = 0LL;
                  **(_DWORD **)&v160 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v160 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v160) = v14 == src;
            v94 = (char *)malloc(v11);
            v46 = v94;
            if ( !v94 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v160) )
              v46 = (char *)memcpy(v94, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v156 = v46;
            v47 = __errno_location();
            v48 = v156;
            v156 = v32;
            *(_QWORD *)&v160 = v47;
            LODWORD(v152) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v163 = -1;
              **(_DWORD **)&v160 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (int)v161 )
              {
                case 1:
                  v80 = (unsigned int)*((char *)v167 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v80 = *((unsigned __int8 *)v167 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v80 = (unsigned int)*((__int16 *)v167 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v80 = *((unsigned __int16 *)v167 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 13:
                case 14:
                  v80 = *((unsigned int *)v167 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v155 = v48;
                  if ( (_DWORD)v158 != 1 )
                  {
                    if ( (_DWORD)v158 != 2 )
                    {
                      v149 = &v163;
                      goto LABEL_153;
                    }
                    goto LABEL_209;
                  }
                  v149 = (int *)v80;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 15:
                case 16:
                case 17:
                  v71 = &v48[v19];
                  v72 = (int *)*((_QWORD *)v167 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v155 = v48;
                  if ( (_DWORD)v158 != 1 )
                  {
                    if ( (_DWORD)v158 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v159, v72, a5, &v163);
LABEL_131:
                      v48 = (char *)v155;
                      goto LABEL_132;
                    }
LABEL_209:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v159, v164, a5, v165);
LABEL_210:
                    v48 = (char *)v155;
LABEL_132:
                    v74 = v163;
                    if ( v163 < 0 )
                    {
LABEL_154:
                      if ( v156[1] )
                      {
                        v156[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v81 = **(_DWORD **)&v160;
                        if ( !**(_DWORD **)&v160 )
                        {
                          v81 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v81 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v170 != v173 )
                          free(v170);
                        if ( v167 != v168 )
                          free(v167);
                        **(_DWORD **)&v160 = v81;
                        return 0LL;
                      }
LABEL_136:
                      v163 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v160 = (_DWORD)v152;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v170 != v173 )
                          free(v170);
                        if ( v167 != v168 )
                          free(v167);
                        v14 = 0LL;
                        **(_DWORD **)&v160 = 75;
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
                          if ( !v48 || v48 == src )
                          {
                            v155 = v48;
                            v93 = (char *)malloc(v11);
                            v48 = (char *)v155;
                            if ( !v93 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v93, v155, v19);
                            else
                              v48 = v93;
                          }
                          else
                          {
                            v155 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v155;
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
                  v149 = v72;
                  break;
                case 11:
                  v84 = *((_QWORD *)v12 + 10);
                  v85 = &v48[v19];
                  v155 = v48;
                  a5 = *((double *)v167 + 4 * v84 + 2);
                  if ( (_DWORD)v158 == 1 )
                  {
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v159, v164, a5, &v163);
                  }
                  else
                  {
                    if ( (_DWORD)v158 != 2 )
                    {
                      v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v159, &v163, a5, v150);
                      v48 = (char *)v155;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v159, v164, a5, v165);
                  }
                  v48 = (char *)v155;
                  goto LABEL_132;
                case 12:
                  v82 = *((_QWORD *)v12 + 10);
                  v83 = &v48[v19];
                  v155 = v48;
                  if ( (_DWORD)v158 == 1 )
                  {
                    v73 = __snprintf_chk(
                            v83,
                            v49,
                            1LL,
                            -1LL,
                            v159,
                            v164,
                            a5,
                            COERCE_UNSIGNED_INT128(*((long double *)v167 + 2 * v82 + 1)));
                    goto LABEL_210;
                  }
                  if ( (_DWORD)v158 != 2 )
                  {
                    v73 = __snprintf_chk(
                            v83,
                            v49,
                            1LL,
                            -1LL,
                            v159,
                            &v163,
                            a5,
                            COERCE_UNSIGNED_INT128(*((long double *)v167 + 2 * v82 + 1)));
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v159, v164, a5, v165);
                  v48 = (char *)v155;
                  goto LABEL_132;
                default:
                  goto LABEL_408;
              }
              break;
            }
            v80 = v164;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v159, v80, a5, v149);
            v74 = v163;
            v48 = (char *)v155;
            if ( v163 < 0 )
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
LABEL_408:
          abort();
      }
LABEL_110:
      v13 = (_BYTE *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v157;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v107 = v19;
    v108 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v108 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v108 )
        {
LABEL_303:
          v109 = v14 == src;
          if ( !v14 || v14 == src )
          {
            v142 = (char *)malloc(v11);
            if ( !v142 )
              goto LABEL_88;
            if ( v107 && v109 )
              v14 = (char *)memcpy(v142, v14, v107);
            else
              v14 = v142;
          }
          else
          {
            v110 = (char *)realloc(v14, v11);
            if ( !v110 )
              goto LABEL_126;
            v14 = v110;
          }
          goto LABEL_307;
        }
      }
      else if ( v108 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_303;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_303;
    }
LABEL_307:
    v14[v107] = 0;
    if ( v11 > v108 && v14 != src )
    {
      v111 = (char *)realloc(v14, v108);
      if ( v111 )
        v14 = v111;
    }
    if ( ptr )
      free(ptr);
    if ( v170 != v173 )
      free(v170);
    if ( v167 != v168 )
      free(v167);
    *v154 = v107;
    return v14;
  }
  if ( v170 != v173 )
    free(v170);
  if ( v167 != v168 )
    free(v167);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

__int64 __fastcall sub_40B2D0(int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // ecx
  _QWORD *v5; // r10
  unsigned int v7; // ecx
  _DWORD *v8; // r10
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

  v2 = a2[1];
  if ( *a2 )
  {
    v3 = 0LL;
    while ( 2 )
    {
      switch ( *(_DWORD *)v2 )
      {
        case 1:
        case 2:
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
          *(_BYTE *)(v2 + 16) = *v12;
          goto LABEL_7;
        case 3:
        case 4:
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
          *(_WORD *)(v2 + 16) = *v10;
          goto LABEL_7;
        case 5:
        case 6:
        case 0xD:
        case 0xE:
          v7 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v8 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v8 + 2;
          }
          else
          {
            v8 = (_DWORD *)(*((_QWORD *)a1 + 2) + v7);
            *a1 = v7 + 8;
          }
          *(_DWORD *)(v2 + 16) = *v8;
          goto LABEL_7;
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
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
          *(_QWORD *)(v2 + 16) = *v5;
          goto LABEL_7;
        case 0xB:
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
          *(_QWORD *)(v2 + 16) = *v14;
          goto LABEL_7;
        case 0xC:
          v15 = (long double *)((*((_QWORD *)a1 + 1) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
          *((_QWORD *)a1 + 1) = v15 + 1;
          *(long double *)(v2 + 16) = *v15;
          goto LABEL_7;
        case 0xF:
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
          *(_QWORD *)(v2 + 16) = v21;
          goto LABEL_7;
        case 0x10:
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
            v18 = &unk_40FDE0;
          *(_QWORD *)(v2 + 16) = v18;
LABEL_7:
          ++v3;
          v2 += 32LL;
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

__int64 __fastcall sub_40B4F0(char *a1, _QWORD *a2, unsigned __int64 *a3)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r13
  char *v9; // rbp
  __int64 result; // rax
  unsigned __int64 v11; // r14
  char *v12; // r12
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
  _QWORD *v34; // r12
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
  _QWORD *v51; // rdi
  unsigned __int64 v52; // r9
  _DWORD *v53; // rax
  char *i; // rcx
  char *v55; // rdx
  unsigned __int64 v56; // rax
  const void *v57; // rsi
  _QWORD *v58; // rdi
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
  _QWORD *v82; // [rsp+28h] [rbp-60h]
  unsigned __int64 v83; // [rsp+30h] [rbp-58h]
  char *v84; // [rsp+30h] [rbp-58h]
  unsigned __int64 v85; // [rsp+30h] [rbp-58h]
  int v86; // [rsp+30h] [rbp-58h]
  int v87; // [rsp+30h] [rbp-58h]
  _BYTE *v88; // [rsp+30h] [rbp-58h]
  char *v89; // [rsp+30h] [rbp-58h]
  _BYTE *v90; // [rsp+30h] [rbp-58h]
  _QWORD *v91; // [rsp+38h] [rbp-50h]
  __int64 v92; // [rsp+38h] [rbp-50h]
  _QWORD *v93; // [rsp+38h] [rbp-50h]
  __int64 v94; // [rsp+38h] [rbp-50h]
  __int64 v95; // [rsp+38h] [rbp-50h]
  __int64 v96; // [rsp+38h] [rbp-50h]
  __int64 v97; // [rsp+38h] [rbp-50h]
  __int64 v98; // [rsp+38h] [rbp-50h]
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
  v6 = 7LL;
  v7 = 7LL;
  v8 = 0LL;
  *a2 = 0LL;
  a2[1] = a2 + 4;
  v82 = a2 + 4;
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
  v12 = (char *)&v3[11 * v8];
  *(_QWORD *)v12 = a1;
  *((_DWORD *)v12 + 4) = 0;
  *((_QWORD *)v12 + 3) = 0LL;
  *((_QWORD *)v12 + 4) = 0LL;
  *((_QWORD *)v12 + 5) = -1LL;
  *((_QWORD *)v12 + 6) = 0LL;
  *((_QWORD *)v12 + 7) = 0LL;
  *((_QWORD *)v12 + 8) = -1LL;
  *((_QWORD *)v12 + 10) = -1LL;
  v13 = a1[1];
  if ( (unsigned __int8)(v13 - 48) > 9u )
    goto LABEL_16;
  v36 = a1 + 1;
  do
    ++v36;
  while ( (unsigned __int8)(*v36 - 48) <= 9u );
  if ( *v36 != 36 )
  {
    v11 = -1LL;
    goto LABEL_16;
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
        goto LABEL_130;
      v63 = -1LL;
      v65 = v9;
      v64 = v13 - 48;
    }
  }
  while ( v67 <= 9u );
  v11 = v66 - 1;
  if ( v66 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_130;
  v9 = v65 + 2;
  v13 = v65[2];
  while ( 1 )
  {
LABEL_16:
    v14 = v9 + 1;
    switch ( v13 )
    {
      case '\'':
        *((_DWORD *)v12 + 4) |= 1u;
        goto LABEL_15;
      case '-':
        *((_DWORD *)v12 + 4) |= 2u;
        goto LABEL_15;
      case '+':
        *((_DWORD *)v12 + 4) |= 4u;
        goto LABEL_15;
      case ' ':
        *((_DWORD *)v12 + 4) |= 8u;
        goto LABEL_15;
      case '#':
        *((_DWORD *)v12 + 4) |= 0x10u;
        goto LABEL_15;
    }
    if ( v13 != 48 )
      break;
    *((_DWORD *)v12 + 4) |= 0x20u;
LABEL_15:
    v13 = *v14;
    ++v9;
  }
  if ( v13 == 73 )
  {
    *((_DWORD *)v12 + 4) |= 0x40u;
    goto LABEL_15;
  }
  if ( v13 == 42 )
  {
    v16 = 1LL;
    *((_QWORD *)v12 + 3) = v9;
    *((_QWORD *)v12 + 4) = v14;
    if ( v79 )
      v16 = v79;
    v79 = v16;
    v17 = v9[1];
    if ( (unsigned __int8)(v9[1] - 48) > 9u )
      goto LABEL_39;
    v43 = v9 + 1;
    do
      ++v43;
    while ( (unsigned __int8)(*v43 - 48) <= 9u );
    if ( *v43 == 36 )
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
            goto LABEL_130;
          v45 = -1LL;
          v47 = v14;
          v46 = v17 - 48;
        }
      }
      while ( v50 <= 9u );
      v18 = v49 - 1;
      if ( v49 - 1 > 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_130;
      *((_QWORD *)v12 + 5) = v18;
      v14 = v47 + 2;
    }
    else
    {
LABEL_39:
      v18 = *((_QWORD *)v12 + 5);
      if ( v18 == -1LL )
      {
        *((_QWORD *)v12 + 5) = v81;
        if ( v81 == -1LL )
          goto LABEL_130;
        v18 = v81++;
      }
    }
    v19 = (_DWORD *)a3[1];
    if ( v6 > v18 )
    {
      v20 = *a3;
LABEL_42:
      if ( v20 <= v18 )
      {
        do
        {
          ++v20;
          v19[8 * v20 - 8] = 0;
        }
        while ( v20 <= v18 );
        *a3 = v20;
      }
      v21 = &v19[8 * v18];
      if ( *v21 )
      {
        if ( *v21 == 5 )
        {
          v13 = *v14;
          v9 = v14++;
          goto LABEL_25;
        }
        goto LABEL_131;
      }
      *v21 = 5;
      v13 = *v14;
      v9 = v14++;
      if ( v13 != 46 )
        goto LABEL_26;
LABEL_47:
      v22 = v9[1] == 42;
      *((_QWORD *)v12 + 6) = v9;
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
        *((_QWORD *)v12 + 7) = v14;
        v13 = *v14;
        if ( v80 >= v37 )
          v37 = v80;
        v80 = v37;
        goto LABEL_26;
      }
      v23 = 2LL;
      v24 = v9 + 2;
      *((_QWORD *)v12 + 7) = v9 + 2;
      if ( v80 >= 2 )
        v23 = v80;
      v80 = v23;
      v25 = v9[2];
      if ( (unsigned __int8)(v9[2] - 48) > 9u )
        goto LABEL_51;
      v68 = v9 + 2;
      do
        ++v68;
      while ( (unsigned __int8)(*v68 - 48) <= 9u );
      if ( *v68 == 36 )
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
              goto LABEL_130;
            v70 = -1LL;
            v72 = v24;
            v71 = v25 - 48;
          }
        }
        while ( v74 <= 9u );
        v26 = v73 - 1;
        if ( v73 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *((_QWORD *)v12 + 8) = v26;
          v24 = v72 + 2;
LABEL_52:
          v19 = (_DWORD *)a3[1];
          if ( v6 > v26 )
          {
            v27 = *a3;
            goto LABEL_54;
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
                goto LABEL_162;
              v27 = *a3;
              v40 = src;
              v19 = v75;
            }
            else
            {
              v60 = realloc(v19, 32 * v59);
              v40 = (_DWORD *)a3[1];
              v24 = v88;
              v19 = v60;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v60 )
                goto LABEL_160;
              v27 = *a3;
              if ( src != v40 )
                goto LABEL_171;
            }
            v110 = v4;
            v104 = v6;
            v98 = v7;
            v90 = v24;
            memcpy(v19, v40, 32 * v27);
            v27 = *a3;
            v4 = v110;
            v6 = v104;
            v7 = v98;
            v24 = v90;
LABEL_171:
            a3[1] = (unsigned __int64)v19;
LABEL_54:
            if ( v27 <= v26 )
            {
              do
              {
                ++v27;
                v19[8 * v27 - 8] = 0;
              }
              while ( v27 <= v26 );
              *a3 = v27;
            }
            v28 = &v19[8 * v26];
            if ( !*v28 )
            {
              *v28 = 5;
              v9 = v24;
              v13 = *v24;
              goto LABEL_26;
            }
            if ( *v28 == 5 )
            {
              v13 = *v24;
              v9 = v24;
              goto LABEL_26;
            }
            goto LABEL_131;
          }
LABEL_159:
          v40 = v19;
          goto LABEL_160;
        }
      }
      else
      {
LABEL_51:
        v26 = *((_QWORD *)v12 + 8);
        if ( v26 != -1LL )
          goto LABEL_52;
        *((_QWORD *)v12 + 8) = v81;
        if ( v81 != -1LL )
        {
          v26 = v81++;
          goto LABEL_52;
        }
      }
LABEL_130:
      v19 = (_DWORD *)a3[1];
LABEL_131:
      if ( src != v19 )
      {
        srca = v4;
        free(v19);
        v4 = srca;
      }
      v51 = (_QWORD *)v4[1];
      if ( v82 != v51 )
        free(v51);
      *__errno_location() = 22;
      return 0xFFFFFFFFLL;
    }
    v38 = 2 * v6;
    if ( v38 <= v18 )
      v38 = v18 + 1;
    if ( v38 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_159;
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
        goto LABEL_162;
      v20 = *a3;
      v40 = src;
      v19 = v61;
    }
    else
    {
      v39 = realloc(v19, 32 * v38);
      v40 = (_DWORD *)a3[1];
      v14 = v84;
      v19 = v39;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v39 )
        goto LABEL_160;
      v20 = *a3;
      if ( src != v40 )
        goto LABEL_93;
    }
    v109 = v4;
    v103 = v6;
    v97 = v7;
    v89 = v14;
    memcpy(v19, v40, 32 * v20);
    v20 = *a3;
    v4 = v109;
    v6 = v103;
    v7 = v97;
    v14 = v89;
LABEL_93:
    a3[1] = (unsigned __int64)v19;
    goto LABEL_42;
  }
  if ( (unsigned __int8)(v13 - 48) <= 9u )
  {
    *((_QWORD *)v12 + 3) = v9;
    if ( (unsigned __int8)(*v9 - 48) <= 9u )
    {
      for ( i = v9; ; ++i )
      {
        v55 = i + 1;
        if ( (unsigned __int8)(i[1] - 48) > 9u )
          break;
      }
      v14 = i + 2;
      v56 = v55 - v9;
      v9 = v55;
      if ( v79 >= v56 )
        v56 = v79;
      v79 = v56;
    }
    *((_QWORD *)v12 + 4) = v9;
    v13 = *v9;
  }
LABEL_25:
  if ( v13 == 46 )
    goto LABEL_47;
LABEL_26:
  v15 = 0;
  while ( 2 )
  {
    ++v9;
    if ( v13 == 104 )
    {
      v15 |= 1 << (v15 & 1);
      goto LABEL_33;
    }
    if ( v13 == 76 )
    {
      v15 |= 4u;
      goto LABEL_33;
    }
    if ( v13 == 108 || v13 == 106 || (v13 & 0xDF) == 90 || v13 == 116 )
    {
      v15 += 8;
LABEL_33:
      v13 = *v9;
      continue;
    }
    break;
  }
  switch ( v13 )
  {
    case '%':
      goto LABEL_70;
    case 'A':
    case 'E':
    case 'F':
    case 'G':
    case 'a':
    case 'e':
    case 'f':
    case 'g':
      v29 = 12;
      if ( v15 <= 15 )
        v29 = ((v15 & 4) != 0) + 11;
      goto LABEL_62;
    case 'C':
      v29 = 14;
      v13 = 99;
      goto LABEL_62;
    case 'S':
      v29 = 16;
      v13 = 115;
      goto LABEL_62;
    case 'X':
    case 'o':
    case 'u':
    case 'x':
      v29 = 10;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 8;
        if ( v15 <= 7 )
        {
          v29 = 2;
          if ( (v15 & 2) == 0 )
            v29 = (v15 & 1) == 0 ? 6 : 4;
        }
      }
      goto LABEL_62;
    case 'c':
      v29 = (v15 > 7) + 13;
      goto LABEL_62;
    case 'd':
    case 'i':
      v29 = 9;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 7;
        if ( v15 <= 7 )
        {
          v29 = 1;
          if ( (v15 & 2) == 0 )
            v29 = (v15 & 1) == 0 ? 5 : 3;
        }
      }
      goto LABEL_62;
    case 'n':
      v29 = 22;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 21;
        if ( v15 <= 7 )
        {
          v29 = 18;
          if ( (v15 & 2) == 0 )
            v29 = ((v15 & 1) == 0) + 19;
        }
      }
      goto LABEL_62;
    case 'p':
      v29 = 17;
      goto LABEL_62;
    case 's':
      v29 = (v15 > 7) + 15;
LABEL_62:
      if ( v11 == -1LL )
      {
        *((_QWORD *)v12 + 10) = v81;
        if ( v81 == -1LL )
          goto LABEL_130;
        v11 = v81++;
      }
      else
      {
        *((_QWORD *)v12 + 10) = v11;
      }
      v19 = (_DWORD *)a3[1];
      if ( v6 > v11 )
        goto LABEL_65;
      v52 = 2 * v6;
      if ( v52 <= v11 )
        v52 = v11 + 1;
      if ( v52 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_159;
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
          goto LABEL_162;
        goto LABEL_158;
      }
      v53 = realloc(v19, 32 * v52);
      v29 = v86;
      v7 = v94;
      v19 = v53;
      v6 = v100;
      v4 = v106;
      if ( !v53 )
        goto LABEL_210;
      if ( src == (_DWORD *)a3[1] )
      {
        v19 = src;
LABEL_158:
        v57 = v19;
        v107 = v4;
        v101 = v6;
        v19 = v53;
        v95 = v7;
        v87 = v29;
        memcpy(v53, v57, 32 * *a3);
        v4 = v107;
        v29 = v87;
        v6 = v101;
        v7 = v95;
      }
      a3[1] = (unsigned __int64)v19;
LABEL_65:
      v30 = *a3;
      if ( *a3 <= v11 )
      {
        do
        {
          ++v30;
          v19[8 * v30 - 8] = 0;
        }
        while ( v30 <= v11 );
        *a3 = v30;
      }
      v31 = &v19[8 * v11];
      if ( *v31 )
      {
        if ( *v31 != v29 )
          goto LABEL_131;
      }
      else
      {
        *v31 = v29;
      }
LABEL_70:
      v12[72] = v13;
      v32 = *v4;
      *((_QWORD *)v12 + 1) = v9;
      v8 = v32 + 1;
      *v4 = v32 + 1;
      if ( v7 > (unsigned __int64)(v32 + 1) )
      {
        v3 = (_QWORD *)v4[1];
        goto LABEL_3;
      }
      if ( v7 >= 0 )
      {
        v33 = 2 * v7;
        if ( (unsigned __int64)(2 * v7) <= 0x2E8BA2E8BA2E8BALL )
        {
          v34 = (_QWORD *)v4[1];
          v91 = v4;
          v83 = v6;
          if ( v82 == v34 )
          {
            v41 = malloc(176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v41;
            if ( !v41 )
            {
              v40 = (_DWORD *)a3[1];
              if ( src != v40 )
                goto LABEL_161;
              goto LABEL_164;
            }
          }
          else
          {
            v35 = realloc(v34, 176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v35;
            if ( !v35 )
              goto LABEL_210;
            v34 = (_QWORD *)v91[1];
            v8 = *v91;
            if ( v82 != v34 )
              goto LABEL_77;
          }
          v93 = v4;
          v85 = v6;
          v42 = memcpy(v3, v34, 88 * v8);
          v4 = v93;
          v6 = v85;
          v3 = v42;
          v8 = *v93;
LABEL_77:
          v4[1] = v3;
          v7 = v33;
          goto LABEL_3;
        }
      }
LABEL_210:
      v40 = (_DWORD *)a3[1];
LABEL_160:
      if ( src != v40 )
      {
LABEL_161:
        srcb = v4;
        free(v40);
        v4 = srcb;
      }
LABEL_162:
      v58 = (_QWORD *)v4[1];
      if ( v82 != v58 )
        free(v58);
LABEL_164:
      *__errno_location() = 12;
      result = 0xFFFFFFFFLL;
      break;
    default:
      goto LABEL_130;
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

int __fastcall sub_40C270(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_612248 )
    v1 = (void *)qword_612248;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40C288(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_611E30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
