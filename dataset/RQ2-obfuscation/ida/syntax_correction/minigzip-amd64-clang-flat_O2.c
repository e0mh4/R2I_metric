#include "decompile_idapro_obfuscated.h"
void dl_relocate_static_pie()
{
  ;
}

void __fastcall __noreturn error(const char *msg)
{
  fprintf(stderr, "%s: %s\n", prog, msg);
  exit(1);
}

void __fastcall gz_compress(FILE *in, gzFile out)
{
  int v2; // eax
  bool v3; // zf
  const char *v4; // rax
  unsigned int v5; // [rsp+0h] [rbp-4058h]
  char v6[4]; // [rsp+4h] [rbp-4054h] BYREF
  char *v7; // [rsp+8h] [rbp-4050h]
  char *v8; // [rsp+10h] [rbp-4048h]
  void *ptr; // [rsp+18h] [rbp-4040h]
  char v10[16440]; // [rsp+20h] [rbp-4038h] BYREF

  v7 = v10;
  v8 = v6;
  v2 = -67592132;
  do
  {
    while ( v2 != -67592132 )
    {
      if ( v2 == 665414370 )
      {
        v3 = (unsigned int)gzwrite(out, ptr, v5) == v5;
        v2 = -67592132;
        if ( !v3 )
          v2 = -1806364793;
        if ( v2 <= -67592133 )
          goto LABEL_4;
      }
      else
      {
        v2 = 665414370;
        if ( !v5 )
          v2 = -1818809254;
        if ( v2 <= -67592133 )
          goto LABEL_4;
      }
    }
    ptr = v10;
    v5 = fread(v10, 1uLL, 0x4000uLL, in);
    v3 = ferror(in) == 0;
    v2 = 1345405316;
    if ( !v3 )
      v2 = -768540611;
  }
  while ( v2 > -67592133 );
LABEL_4:
  while ( v2 <= -1109694197 )
  {
    if ( v2 != -1818809254 )
    {
      v4 = (const char *)gzerror(out, v6);
      error(v4);
    }
    fclose(in);
    v3 = (unsigned int)gzclose(out) == 0;
    v2 = -1109694196;
    if ( !v3 )
      v2 = -147024421;
  }
  if ( v2 != -1109694196 )
  {
    if ( v2 != -768540611 )
      error("failed gzclose");
    perror("fread");
    exit(1);
  }
}

void __fastcall gz_uncompress(gzFile in, FILE *out)
{
  signed int v2; // eax
  bool v3; // zf
  const char *v4; // rax
  int n; // [rsp+0h] [rbp-4058h]
  _BYTE n_4[12]; // [rsp+4h] [rbp-4054h] BYREF
  _BYTE *v7; // [rsp+10h] [rbp-4048h]
  void *ptr; // [rsp+18h] [rbp-4040h]
  char v9[16440]; // [rsp+20h] [rbp-4038h] BYREF

  *(_QWORD *)&n_4[4] = v9;
  v7 = n_4;
  v2 = -543008314;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v2 <= -63853292 )
        {
          if ( v2 <= -543008315 )
          {
            if ( v2 != -1406387267 )
            {
              v4 = (const char *)gzerror(in, n_4);
              error(v4);
            }
            error("failed gzclose");
          }
          if ( v2 != -543008314 )
            error("failed fclose");
          ptr = v9;
          n = gzread(in, v9, 0x4000LL);
          v2 = ((n >> 31) & 0xCA92CDD6) + 71397878;
        }
        if ( v2 == 71397878 )
          break;
        if ( v2 != 475515701 )
          error("failed fwrite");
        v3 = (unsigned int)gzclose(in) == 0;
        v2 = 1166788132;
        if ( !v3 )
          v2 = -1406387267;
        if ( v2 > 771592558 )
          goto LABEL_15;
      }
      v2 = 771592559;
      if ( !n )
        v2 = 1803429442;
LABEL_15:
      if ( v2 != 771592559 )
        break;
      v3 = (unsigned int)fwrite(ptr, 1uLL, (unsigned int)n, out) == n;
      v2 = -543008314;
      if ( !v3 )
        v2 = -63853291;
    }
    if ( v2 == 1166788132 )
      break;
    v3 = fclose(out) == 0;
    v2 = 475515701;
    if ( !v3 )
      v2 = -87475362;
  }
}

void __fastcall file_compress(char *file, char *mode)
{
  int v2; // eax
  char *s; // [rsp+8h] [rbp-460h]
  FILE *v4; // [rsp+18h] [rbp-450h]
  gzFile_s *v5; // [rsp+20h] [rbp-448h]
  size_t v6; // [rsp+28h] [rbp-440h]
  char v7[1080]; // [rsp+30h] [rbp-438h] BYREF

  v6 = strlen(file) + 3;
  v2 = 127668000;
  do
  {
LABEL_8:
    while ( v2 <= 127667999 )
    {
      if ( v2 != 87362101 )
      {
        perror(file);
        exit(1);
      }
      s = v7;
      snprintf(v7, 0x400uLL, "%s%s", file, ".gz");
      v4 = fopen(file, "rb");
      v2 = -994203616;
      if ( !v4 )
        v2 = 20438574;
      if ( v2 <= 20438573 )
        goto LABEL_5;
    }
    if ( v2 != 127668000 )
    {
      fprintf(stderr, "%s: can't gzopen %s\n", prog, s);
      exit(1);
    }
    v2 = 87362101;
    if ( v6 > 0x3FF )
      v2 = -1222921053;
  }
  while ( v2 > 20438573 );
LABEL_5:
  while ( v2 != -2137344504 )
  {
    if ( v2 != -994203616 )
    {
      fprintf(stderr, "%s: filename too long\n", prog);
      exit(1);
    }
    v5 = (gzFile_s *)gzopen(s, mode);
    v2 = -2137344504;
    if ( !v5 )
      v2 = 577180126;
    if ( v2 > 20438573 )
      goto LABEL_8;
  }
  gz_compress(v4, v5);
  unlink(file);
}

void __fastcall file_uncompress(char *file)
{
  char *v1; // r12
  char *v2; // r13
  int v3; // eax
  bool v4; // zf
  bool v5; // cc
  int v6; // ecx
  size_t v7; // [rsp+0h] [rbp-478h]
  char *s; // [rsp+8h] [rbp-470h]
  char *name; // [rsp+10h] [rbp-468h]
  gzFile_s *v10; // [rsp+20h] [rbp-458h]
  FILE *v11; // [rsp+28h] [rbp-450h]
  char *filename; // [rsp+38h] [rbp-440h]
  char v13[1080]; // [rsp+40h] [rbp-438h] BYREF

  v7 = strlen(file);
  v3 = -1339865247;
  while ( 1 )
  {
LABEL_19:
    if ( v3 <= -1011565982 )
    {
      if ( v3 == -1866311988 )
      {
        s[v7 - 3] = 0;
        v3 = 1657602776;
        v2 = s;
        v1 = file;
        goto LABEL_4;
      }
      if ( v3 != -1339865247 )
      {
        fprintf(stderr, "%s: can't gzopen %s\n", prog, name);
        exit(1);
      }
      v5 = v7 + 3 <= 0x3FF;
      v3 = -566354046;
      v6 = 750275211;
      goto LABEL_25;
    }
    if ( v3 == -1011565981 )
      break;
    s = v13;
    snprintf(v13, 0x400uLL, "%s", file);
    v5 = v7 <= 3;
    v3 = -503657606;
    v6 = 1993783317;
LABEL_25:
    if ( !v5 )
      v3 = v6;
    if ( v3 > -503657607 )
      goto LABEL_4;
  }
  v11 = fopen(filename, "wb");
  v3 = 588532619;
  if ( !v11 )
    v3 = 151055433;
  while ( 1 )
  {
LABEL_4:
    while ( v3 > 750275210 )
    {
      if ( v3 == 1657602776 )
      {
        name = v1;
        filename = v2;
        v10 = (gzFile_s *)gzopen(v1, "rb");
        v3 = -1011565981;
        if ( !v10 )
          v3 = -1608235843;
        goto LABEL_19;
      }
      if ( v3 != 1993783317 )
      {
        fprintf(stderr, "%s: filename too long\n", prog);
        exit(1);
      }
      v4 = strcmp(&file[v7 - 3], ".gz") == 0;
      v3 = -503657606;
      if ( v4 )
        v3 = -1866311988;
      if ( v3 <= -503657607 )
        goto LABEL_19;
    }
    if ( v3 != -503657606 )
      break;
    snprintf(&s[v7], 1024 - v7, "%s", ".gz");
    v3 = 1657602776;
    v1 = s;
    v2 = file;
  }
  if ( v3 != 588532619 )
  {
    perror(file);
    exit(1);
  }
  gz_uncompress(v10, v11);
  unlink(name);
}

int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v3; // r12d
  const char **v4; // r13
  int v5; // r14d
  int v6; // r15d
  int v7; // ebp
  int v8; // eax
  const char *v9; // rcx
  char *v10; // rax
  bool v11; // zf
  int v12; // ecx
  bool v13; // zf
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // eax
  bool v17; // cc
  int v18; // ecx
  unsigned int v19; // eax
  char v21; // [rsp+6h] [rbp-102h]
  bool v22; // [rsp+7h] [rbp-101h]
  int v23; // [rsp+8h] [rbp-100h]
  int v24; // [rsp+Ch] [rbp-FCh]
  int v25; // [rsp+10h] [rbp-F8h]
  int v26; // [rsp+14h] [rbp-F4h]
  char *s1; // [rsp+18h] [rbp-F0h]
  int v28; // [rsp+20h] [rbp-E8h]
  int v29; // [rsp+24h] [rbp-E4h]
  char **v30; // [rsp+28h] [rbp-E0h]
  int v31; // [rsp+34h] [rbp-D4h]
  const char *v32; // [rsp+40h] [rbp-C8h]
  char **v33; // [rsp+48h] [rbp-C0h]
  const char **v34; // [rsp+50h] [rbp-B8h]
  const char **v35; // [rsp+58h] [rbp-B0h]
  int v36; // [rsp+64h] [rbp-A4h]
  char *v37; // [rsp+70h] [rbp-98h]
  char *v38; // [rsp+78h] [rbp-90h]
  char *v39; // [rsp+80h] [rbp-88h]
  gzFile_s *v40; // [rsp+88h] [rbp-80h]
  gzFile_s *v41; // [rsp+90h] [rbp-78h]
  char *v42; // [rsp+98h] [rbp-70h]
  gzFile_s *v43; // [rsp+A0h] [rbp-68h]
  FILE *v44; // [rsp+A8h] [rbp-60h]
  gzFile_s *out; // [rsp+B0h] [rbp-58h]
  char *v46; // [rsp+B8h] [rbp-50h]
  char v47[3]; // [rsp+C0h] [rbp-48h] BYREF
  char v48; // [rsp+C3h] [rbp-45h] BYREF

  snprintf(v47, 0x14uLL, "%s", "wb6 ");
  prog = (char *)*argv;
  v37 = (char *)*argv;
  v38 = strrchr(*argv, 47);
  v7 = argc - 1;
  v8 = 2137117191;
  v28 = (int)v9;
  v33 = (char **)v9;
  v25 = (int)v9;
  v32 = v9;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_65:
        if ( v8 > 1298182049 )
        {
          if ( v8 > 1672044833 )
          {
            if ( v8 <= 1996791117 )
            {
              if ( v8 > 1750449871 )
              {
                if ( v8 == 1750449872 )
                {
                  v7 = v29;
                  v8 = 437057500;
                  v25 = 1;
                  v4 = v34;
                  v5 = 1;
                  goto LABEL_4;
                }
                v13 = strcmp(s1, "-d") == 0;
                v8 = 1298182050;
                v14 = 1399023137;
                goto LABEL_58;
              }
              if ( v8 != 1705435400 )
                error("can't gzdopen stdout");
              v21 = s1[1];
              v31 = v21;
              v17 = v21 <= 48;
              v8 = -1257734809;
              v18 = -104023227;
              goto LABEL_62;
            }
            if ( v8 == 1996791118 )
            {
              v13 = strcmp(s1, "-h") == 0;
              v8 = -1566644827;
              v14 = 745237032;
              goto LABEL_58;
            }
            if ( v8 == 2029733457 )
            {
              v19 = fileno(stdin);
              v40 = (gzFile_s *)gzdopen(v19, "rb");
              v13 = v40 == 0LL;
              v8 = -363154479;
              v14 = -1599591822;
              goto LABEL_58;
            }
            v11 = v38 == 0LL;
            v8 = -1649526672;
            v12 = -632749968;
            goto LABEL_118;
          }
          if ( v8 > 1426246031 )
          {
            if ( v8 != 1426246032 )
            {
              if ( v8 != 1450529977 )
              {
                *v39 = 0;
                v8 = -304177610;
                goto LABEL_4;
              }
              v11 = !v22;
              v8 = 1406430789;
              v12 = -2005569091;
              goto LABEL_118;
            }
            file_uncompress(v42);
          }
          else
          {
            if ( v8 == 1298182050 )
            {
              v13 = strcmp(s1, "-f") == 0;
              v8 = 1996791118;
              v14 = -1529188371;
              goto LABEL_58;
            }
            if ( v8 == 1399023137 )
            {
              v8 = 488591993;
              v3 = 1;
              v6 = v24;
              goto LABEL_4;
            }
            file_compress(*v30, v47);
          }
          goto LABEL_116;
        }
        if ( v8 <= 977595243 )
          break;
        if ( v8 > 1169655539 )
        {
          if ( v8 == 1169655540 )
          {
            v7 = v29;
            v8 = 437057500;
            v5 = 0;
            v25 = 1;
            v4 = v34;
            goto LABEL_4;
          }
          if ( v8 != 1173425125 )
          {
            v8 = 488591993;
            v6 = 1;
            v3 = v23;
            goto LABEL_4;
          }
          v13 = *s1 == 45;
          v8 = -1257734809;
          v14 = 1705435400;
          goto LABEL_58;
        }
        if ( v8 != 977595244 )
        {
          if ( v8 != 985671120 )
          {
            v13 = s1[2] == 0;
            v8 = -1257734809;
            v14 = 73473267;
            goto LABEL_58;
          }
          v48 = 82;
          goto LABEL_2;
        }
        v36 = v28;
        v30 = v33;
        v8 = 1450529977;
        if ( v23 )
          v8 = -315122965;
        v22 = v24 != 0;
        if ( v8 <= 552749177 )
          goto LABEL_4;
      }
      if ( v8 > 745237031 )
        break;
      if ( v8 == 552749178 )
      {
        s1 = (char *)*v35;
        v13 = strcmp(*v35, "-c") == 0;
        v8 = 1807253901;
        v14 = 1202698591;
        goto LABEL_58;
      }
      if ( v8 != 577599419 )
      {
        v11 = v23 == 0;
        v8 = -861327492;
        v12 = 2029733457;
        goto LABEL_118;
      }
      v33 = (char **)v35;
      v8 = 977595244;
      v28 = v26;
    }
    if ( v8 == 745237032 )
    {
      v48 = 104;
      goto LABEL_2;
    }
    if ( v8 == 890826434 )
    {
      gz_compress(stdin, v41);
      goto LABEL_57;
    }
    v11 = strcmp(v46, "zcat") == 0;
    v8 = 1750449872;
    if ( !v11 )
      v8 = 437057500;
    v7 = v29;
    v25 = 0;
    v4 = v34;
    v5 = 0;
  }
  while ( v8 > 552749177 );
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_4:
        while ( v8 > -900105378 )
        {
          if ( v8 > -304177611 )
          {
            if ( v8 > 321256452 )
            {
              if ( v8 == 321256453 )
              {
                gz_uncompress(v43, stdout);
                goto LABEL_116;
              }
              if ( v8 == 437057500 )
              {
                v26 = v7;
                v23 = v25;
                v24 = v5;
                v35 = v4;
                v17 = v7 <= 0;
                v8 = -1257734809;
                v18 = 552749178;
LABEL_62:
                if ( !v17 )
                  v8 = v18;
                if ( v8 > 552749177 )
                  goto LABEL_65;
              }
              else
              {
                v7 = v26 - 1;
                v4 = v35 + 1;
                v8 = 437057500;
                v25 = v3;
                v5 = v6;
              }
            }
            else
            {
              if ( v8 == -304177610 )
              {
                v13 = v26 == 0;
                v8 = 577599419;
                v14 = 685488601;
                goto LABEL_58;
              }
              if ( v8 != -104023227 )
              {
                v47[2] = v21;
                goto LABEL_2;
              }
              v8 = -1257734809;
              if ( v31 < 58 )
                v8 = 1095303228;
              if ( v8 > 552749177 )
                goto LABEL_65;
            }
          }
          else
          {
            if ( v8 <= -632749969 )
            {
              if ( v8 == -900105377 )
                goto LABEL_116;
              if ( v8 == -861327492 )
              {
                v16 = fileno(stdout);
                v41 = (gzFile_s *)gzdopen(v16, v47);
                v13 = v41 == 0LL;
                v8 = 890826434;
                v14 = 1672044834;
              }
              else
              {
                v43 = (gzFile_s *)gzopen(v42, "rb");
                v13 = v43 == 0LL;
                v8 = 321256453;
                v14 = -1333009718;
              }
              goto LABEL_58;
            }
            if ( v8 <= -363154480 )
            {
              if ( v8 != -632749968 )
                error("can't gzdopen stdout");
              v10 = v38 + 1;
LABEL_39:
              v32 = v10;
              v8 = -1323092916;
            }
            else
            {
              if ( v8 != -363154479 )
              {
                v42 = *v30;
                v11 = !v22;
                v8 = 1426246032;
                v12 = -654494701;
                goto LABEL_118;
              }
              gz_uncompress(v40, stdout);
LABEL_57:
              v8 = -2111766216;
            }
          }
        }
        if ( v8 <= -1529188372 )
          break;
        if ( v8 > -1323092917 )
        {
          if ( v8 != -1323092916 )
          {
            if ( v8 == -1257734809 )
            {
              v39 = &v48;
              v13 = v48 == 32;
              v8 = -304177610;
              v14 = 1545783069;
              goto LABEL_58;
            }
            perror(*v30);
            goto LABEL_49;
          }
          v46 = (char *)v32;
          v29 = argc - 1;
          v34 = argv + 1;
          v11 = strcmp(v32, "gunzip") == 0;
          v8 = 1169655540;
          v12 = 966538992;
LABEL_118:
          if ( !v11 )
            v8 = v12;
          if ( v8 > 552749177 )
            goto LABEL_65;
        }
        else
        {
          if ( v8 != -1529188371 )
          {
            if ( v8 != -1419452043 )
            {
              fprintf(stderr, "%s: can't gzopen %s\n", prog, *v30);
LABEL_116:
              v8 = -2091205891;
              continue;
            }
            v15 = fileno(stdout);
            out = (gzFile_s *)gzdopen(v15, v47);
            v13 = out == 0LL;
            v8 = -2093673670;
            v14 = -455066834;
            goto LABEL_58;
          }
          v48 = 102;
LABEL_2:
          v6 = v24;
          v8 = 488591993;
          v3 = v23;
        }
      }
      if ( v8 <= -2005569092 )
        break;
      if ( v8 > -1599591823 )
      {
        if ( v8 != -1566644827 )
          error("can't gzdopen stdin");
        v13 = strcmp(s1, "-r") == 0;
        v8 = 1173425125;
        v14 = 985671120;
      }
      else
      {
        if ( v8 != -2005569091 )
        {
          v10 = v37;
          goto LABEL_39;
        }
        v44 = fopen(*v30, "rb");
        v13 = v44 == 0LL;
        v8 = -1419452043;
        v14 = -1000655683;
      }
LABEL_58:
      if ( v13 )
        v8 = v14;
      if ( v8 > 552749177 )
        goto LABEL_65;
    }
    if ( v8 == -2111766216 )
      return 0;
    if ( v8 != -2093673670 )
    {
      v33 = v30 + 1;
      v11 = v36 == 1;
      v28 = v36 - 1;
      v8 = -2111766216;
      v12 = 977595244;
      goto LABEL_118;
    }
    gz_compress(v44, out);
LABEL_49:
    v8 = -900105377;
  }
}
