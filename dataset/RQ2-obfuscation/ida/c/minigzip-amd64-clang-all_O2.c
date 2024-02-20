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
  int v4; // ecx
  int v5; // edx
  const char *v6; // rax
  bool v7; // [rsp+Bh] [rbp-405Dh]
  unsigned int v8; // [rsp+Ch] [rbp-405Ch]
  char *ptr; // [rsp+10h] [rbp-4058h]
  char v10[4]; // [rsp+1Ch] [rbp-404Ch] BYREF
  char *v11; // [rsp+20h] [rbp-4048h]
  char *v12; // [rsp+28h] [rbp-4040h]
  char v13[16440]; // [rsp+30h] [rbp-4038h] BYREF

  v11 = v13;
  v12 = v10;
  v2 = -276857115;
  do
  {
    while ( 1 )
    {
LABEL_2:
      while ( v2 > -892404334 )
      {
        if ( v2 == -892404333 )
        {
          v2 = -546258062;
          if ( !v8 )
            v2 = -1368484647;
        }
        else
        {
          if ( v2 != -546258062 )
          {
            ptr = v13;
            v8 = fread(v13, 1uLL, 0x4000uLL, in);
            v3 = ferror(in) == 0;
            v2 = -892404333;
            v4 = -83168205;
            goto LABEL_32;
          }
          v2 = -1328113296;
          if ( ((x_22 * (x_22 - 1)) & ((x_22 * (x_22 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v2 = -1640129222;
          if ( y_23 >= 10 )
            v2 = -1328113296;
          if ( (((x_22 * (x_22 - 1)) & ((x_22 * (x_22 - 1)) ^ 0xFFFFFFFE)) == 0) != y_23 < 10 )
            v2 = -1640129222;
        }
      }
      if ( v2 == -1640129222 )
        break;
      if ( v2 == -1368484647 )
      {
        fclose(in);
        v3 = (unsigned int)gzclose(out) == 0;
        v2 = 172562806;
        v4 = 1083187007;
        goto LABEL_32;
      }
      gzwrite(out, ptr, v8);
      v2 = -1640129222;
    }
    v7 = (unsigned int)gzwrite(out, ptr, v8) != v8;
    v2 = -1328113296;
    if ( ((x_22 * (x_22 - 1)) & ((x_22 * (x_22 - 1)) ^ 0xFFFFFFFE)) == 0 )
      v2 = 197719793;
    if ( y_23 >= 10 )
      v2 = -1328113296;
    if ( (((x_22 * (x_22 - 1)) & ((x_22 * (x_22 - 1)) ^ 0xFFFFFFFE)) == 0) != y_23 < 10 )
      v2 = 197719793;
  }
  while ( v2 <= -83168206 );
  while ( 1 )
  {
    while ( 1 )
    {
      while ( v2 > 502936418 )
      {
        if ( v2 <= 718541450 )
        {
          if ( v2 != 502936419 )
            error("failed gzclose");
          error("failed gzclose");
        }
        if ( v2 <= 1083187006 )
        {
          perror("fread");
          exit(1);
        }
        if ( v2 != 1083187007 )
        {
          v6 = (const char *)gzerror(out, v10);
          error(v6);
        }
        v5 = 609034855;
        if ( (((x_22 * (x_22 - 1)) & ((x_22 * (x_22 - 1)) ^ 0xFFFFFFFE)) == 0) != y_23 < 10 )
          v5 = 502936419;
        v2 = v5;
        if ( ((x_22 * (x_22 - 1)) & ((x_22 * (x_22 - 1)) ^ 0xFFFFFFFE)) == 0 )
          v2 = 502936419;
        if ( y_23 >= 10 )
          v2 = v5;
      }
      if ( v2 != -83168205 )
        break;
      v2 = 718541451;
      if ( (~((_BYTE)x_22 * ((_BYTE)x_22 - 1)) | 0xFFFFFFFE) == -1 )
        v2 = 918558406;
      if ( y_23 >= 10 )
        v2 = 718541451;
      if ( ((~((_BYTE)x_22 * ((_BYTE)x_22 - 1)) | 0xFFFFFFFE) == -1) != y_23 < 10 )
        v2 = 918558406;
    }
    if ( v2 == 172562806 )
      break;
    v3 = !v7;
    v2 = -276857115;
    v4 = 1756346242;
LABEL_32:
    if ( !v3 )
      v2 = v4;
    if ( v2 <= -83168206 )
      goto LABEL_2;
  }
}

void __fastcall gz_uncompress(gzFile in, FILE *out)
{
  signed int v2; // eax
  int v3; // ecx
  int v4; // edx
  bool v5; // zf
  int v6; // ecx
  const char *v7; // rax
  bool v8; // [rsp+Fh] [rbp-4059h]
  int n; // [rsp+10h] [rbp-4058h]
  _BYTE n_4[12]; // [rsp+14h] [rbp-4054h] BYREF
  _BYTE *v11; // [rsp+20h] [rbp-4048h]
  void *ptr; // [rsp+28h] [rbp-4040h]
  char v13[16440]; // [rsp+30h] [rbp-4038h] BYREF

  *(_QWORD *)&n_4[4] = v13;
  v11 = n_4;
  v2 = 488817811;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_5:
      while ( v2 > 1684202040 )
      {
        if ( v2 == 1807965810 )
        {
          v8 = fclose(out) != 0;
          v3 = y_25;
          v4 = -409038205;
          if ( (((x_24 * (x_24 - 1)) & ((x_24 * (x_24 - 1)) ^ 0xFFFFFFFE)) == 0) != y_25 < 10 )
            v4 = -2053197399;
          v2 = v4;
          if ( ((x_24 * (x_24 - 1)) & ((x_24 * (x_24 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v2 = -2053197399;
          goto LABEL_2;
        }
        v2 = -1322164578;
        if ( !n )
          v2 = 1150788138;
        if ( v2 <= -22223213 )
        {
LABEL_28:
          while ( v2 <= -1322164579 )
          {
            if ( v2 <= -1820511702 )
            {
              if ( v2 != -2053197399 )
                error("failed gzclose");
              v5 = !v8;
              v2 = -1820511701;
              v6 = 554936822;
              goto LABEL_47;
            }
            if ( v2 == -1820511701 )
            {
              v5 = (unsigned int)gzclose(in) == 0;
              v2 = -22223212;
              v6 = -1886072679;
LABEL_47:
              if ( !v5 )
                v2 = v6;
              if ( v2 > -22223213 )
                goto LABEL_5;
            }
            else
            {
              v2 = -877501420;
              if ( (~((_BYTE)x_24 * ((_BYTE)x_24 - 1)) | 0xFFFFFFFE) == -1 )
                v2 = 880802669;
              if ( y_25 >= 10 )
                v2 = -877501420;
              if ( ((~((_BYTE)x_24 * ((_BYTE)x_24 - 1)) | 0xFFFFFFFE) == -1) != y_25 < 10 )
                v2 = 880802669;
              if ( v2 > -22223213 )
                goto LABEL_5;
            }
          }
          if ( v2 <= -409038206 )
          {
            if ( v2 != -1322164578 )
              error("failed fwrite");
            v5 = (unsigned int)fwrite(ptr, 1uLL, (unsigned int)n, out) == n;
            v2 = 488817811;
            v6 = -1460255739;
            goto LABEL_47;
          }
          if ( v2 != -409038205 )
          {
            v7 = (const char *)gzerror(in, n_4);
            error(v7);
          }
          fclose(out);
          v2 = 1807965810;
        }
      }
      if ( v2 <= 554936821 )
        break;
      if ( v2 != 1150788138 )
      {
        if ( v2 != 554936822 )
          error("failed fwrite");
        error("failed fclose");
      }
      v3 = y_25;
      v4 = -409038205;
      if ( (((x_24 * (x_24 - 1)) & ((x_24 * (x_24 - 1)) ^ 0xFFFFFFFE)) == 0) != y_25 < 10 )
        v4 = 1807965810;
      v2 = v4;
      if ( ((x_24 * (x_24 - 1)) & ((x_24 * (x_24 - 1)) ^ 0xFFFFFFFE)) == 0 )
        v2 = 1807965810;
LABEL_2:
      if ( v3 >= 10 )
        v2 = v4;
      if ( v2 <= -22223213 )
        goto LABEL_28;
    }
    if ( v2 == -22223212 )
      break;
    ptr = v13;
    n = gzread(in, v13, 0x4000LL);
    v2 = ((n >> 31) & 0x815C6606) + 1822373453;
    if ( v2 <= -22223213 )
      goto LABEL_28;
  }
}

void __fastcall file_compress(char *file, char *mode)
{
  int v2; // eax
  bool v3; // zf
  int v4; // ecx
  __int64 v5; // [rsp+0h] [rbp-60h] BYREF
  gzFile v6; // [rsp+8h] [rbp-58h]
  FILE *v7; // [rsp+10h] [rbp-50h]
  __int64 *v8; // [rsp+18h] [rbp-48h]
  char *v9; // [rsp+20h] [rbp-40h]
  char *s; // [rsp+28h] [rbp-38h]
  bool v11; // [rsp+35h] [rbp-2Bh]
  char v12; // [rsp+36h] [rbp-2Ah]
  char v13; // [rsp+37h] [rbp-29h]

  v13 = (~((_BYTE)x_26 * ((_BYTE)x_26 - 1)) | 0xFFFFFFFE) == -1;
  v12 = y_27 < 10;
  v2 = -429282909;
LABEL_3:
  while ( v2 > 684292048 )
  {
    if ( v2 > 918060549 )
    {
      if ( v2 != 1996286543 )
      {
LABEL_49:
        perror(file);
        exit(1);
      }
      v2 = -567562430;
      if ( v11 )
        v2 = 194366980;
      if ( v2 <= -429282910 )
      {
        while ( 1 )
        {
LABEL_31:
          while ( v2 > -788568660 )
          {
            if ( v2 == -788568659 )
            {
              v2 = -1303810858;
            }
            else
            {
              s = v9;
              snprintf(v9, 0x400uLL, "%s%s", file, ".gz");
              v7 = fopen64(file, "rb");
              v3 = v7 == 0LL;
              v2 = -1934943384;
              v4 = 785140504;
LABEL_44:
              if ( v3 )
                v2 = v4;
              if ( v2 > -429282910 )
                goto LABEL_3;
            }
          }
          if ( v2 == -1934943384 )
          {
            v6 = (gzFile)gzopen64(s, mode);
            v3 = v6 == 0LL;
            v2 = -179115688;
            v4 = 204215524;
            goto LABEL_44;
          }
          v9 = (char *)(&v5 - 128);
          v8 = &v5 - 128;
          v11 = strlen(file) + 3 > 0x3FF;
          v2 = -788568659;
          if ( ((x_26 * (x_26 - 1)) & ((x_26 * (x_26 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v2 = 1996286543;
          if ( y_27 >= 10 )
            v2 = -788568659;
          if ( (((x_26 * (x_26 - 1)) & ((x_26 * (x_26 - 1)) ^ 0xFFFFFFFE)) == 0) != y_27 < 10 )
            v2 = 1996286543;
          if ( v2 > -429282910 )
            goto LABEL_3;
        }
      }
    }
    else
    {
      if ( v2 != 785140504 )
        goto LABEL_49;
      v2 = 918060550;
      if ( ((x_26 * (x_26 - 1)) & ((x_26 * (x_26 - 1)) ^ 0xFFFFFFFE)) == 0 )
        v2 = 684292049;
      if ( y_27 >= 10 )
        v2 = 918060550;
      if ( (((x_26 * (x_26 - 1)) & ((x_26 * (x_26 - 1)) ^ 0xFFFFFFFE)) == 0) != y_27 < 10 )
        v2 = 684292049;
    }
  }
  if ( v2 <= -179115689 )
  {
    v2 = -788568659;
    if ( v12 )
      v2 = -1303810858;
    if ( !v13 )
      v2 = -788568659;
    if ( v12 != v13 )
      v2 = -1303810858;
    goto LABEL_31;
  }
  if ( v2 != -179115688 )
  {
    if ( v2 != 194366980 )
    {
      fprintf(stderr, "%s: can't gzopen %s\n", prog, s);
      exit(1);
    }
    fprintf(stderr, "%s: filename too long\n", prog);
    exit(1);
  }
  gz_compress(v7, v6);
  unlink(file);
}

void __fastcall file_uncompress(char *file)
{
  char *v1; // r12
  char *v2; // r15
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // eax
  bool v8; // zf
  int v9; // esi
  bool v10; // zf
  int v11; // ecx
  char v12; // cl
  int v13; // edi
  bool v14; // cc
  char v15; // dl
  int v16; // esi
  unsigned int v17; // edx
  int v18; // esi
  bool v19; // [rsp+Dh] [rbp-47Bh]
  bool v20; // [rsp+Eh] [rbp-47Ah]
  bool v21; // [rsp+Fh] [rbp-479h]
  size_t v22; // [rsp+10h] [rbp-478h]
  char *v23; // [rsp+18h] [rbp-470h]
  char *name; // [rsp+20h] [rbp-468h]
  gzFile_s *v25; // [rsp+30h] [rbp-458h]
  FILE *v26; // [rsp+38h] [rbp-450h]
  char *filename; // [rsp+40h] [rbp-448h]
  char s[1080]; // [rsp+50h] [rbp-438h] BYREF

  v22 = strlen(file);
  v4 = 1027036117;
  while ( 1 )
  {
LABEL_44:
    while ( v4 <= 1484805433 )
    {
      if ( v4 > 1027036116 )
      {
        if ( v4 == 1027036117 )
        {
          v4 = -711517835;
          if ( v22 + 3 > 0x3FF )
            v4 = 131897199;
          goto LABEL_9;
        }
        if ( v4 != 1181490158 )
        {
          v23[v22 - 3] = 0;
          v4 = -1374862414;
          v1 = v23;
          v2 = file;
          goto LABEL_9;
        }
        snprintf(&v23[v22], 1024 - v22, "%s", ".gz");
        v12 = (~((_BYTE)x_28 * ((_BYTE)x_28 - 1)) | 0xFFFFFFFE) == -1;
        v4 = 517947194;
        v13 = -223058248;
        if ( (~((_BYTE)x_28 * ((_BYTE)x_28 - 1)) | 0xFFFFFFFE) == -1 )
          v4 = -223058248;
        v14 = y_29 < 10;
        v15 = y_29 < 10;
        v16 = 517947194;
LABEL_68:
        if ( !v14 )
          v4 = v16;
        if ( v12 != v15 )
          v4 = v13;
        goto LABEL_9;
      }
      if ( v4 != 571221954 )
      {
        v10 = !v21;
        v4 = 1633047320;
        v11 = 1663650126;
        goto LABEL_41;
      }
      v6 = y_29;
      v7 = (x_28 * (x_28 - 1)) & ((x_28 * (x_28 - 1)) ^ 0xFFFFFFFE);
      v8 = (v7 == 0) == y_29 < 10;
      v5 = -880590570;
      v9 = 1484805434;
LABEL_2:
      if ( !v8 )
        v5 = v9;
      v8 = v7 == 0;
      v4 = v5;
      if ( v8 )
        v4 = v9;
      if ( v6 >= 10 )
        v4 = v5;
      if ( v4 <= 571221953 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_9:
            while ( v4 <= -478139792 )
            {
              if ( v4 <= -880590571 )
              {
                if ( v4 != -1374862414 )
                {
                  v10 = !v20;
                  v4 = 47078825;
                  v11 = 1388145696;
                  goto LABEL_41;
                }
                name = v2;
                filename = v1;
                v25 = (gzFile_s *)gzopen64(v2, "rb");
                v4 = -478139791;
                if ( !v25 )
                  v4 = 324408565;
              }
              else
              {
                if ( v4 == -880590570 )
                {
                  v4 = 1484805434;
                  goto LABEL_44;
                }
                if ( v4 != -777246719 )
                {
                  v6 = y_29;
                  v7 = (x_28 * (x_28 - 1)) & ((x_28 * (x_28 - 1)) ^ 0xFFFFFFFE);
                  v8 = (v7 == 0) == y_29 < 10;
                  v5 = 1832292314;
                  v9 = 1615481561;
                  goto LABEL_2;
                }
                v10 = !v19;
                v4 = 47078825;
                v11 = 571221954;
LABEL_41:
                if ( !v10 )
                  v4 = v11;
                if ( v4 > 571221953 )
                  goto LABEL_44;
              }
            }
            if ( v4 > 47078824 )
              break;
            if ( v4 == -478139791 )
            {
              v6 = y_29;
              v7 = (x_28 * (x_28 - 1)) & ((x_28 * (x_28 - 1)) ^ 0xFFFFFFFE);
              v8 = (v7 == 0) == y_29 < 10;
              v5 = -327003221;
              v9 = 1794691601;
              goto LABEL_2;
            }
            if ( v4 == -327003221 )
            {
              fopen64(filename, "wb");
              v4 = 1794691601;
              goto LABEL_44;
            }
            v4 = -1374862414;
            v2 = v23;
            v1 = file;
          }
          if ( v4 > 324408564 )
            break;
          if ( v4 != 47078825 )
          {
            fprintf(stderr, "%s: filename too long\n", prog);
            exit(1);
          }
          v4 = 517947194;
          if ( ((x_28 * (x_28 - 1)) & ((x_28 * (x_28 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v4 = 1181490158;
          if ( y_29 >= 10 )
            v4 = 517947194;
          if ( (((x_28 * (x_28 - 1)) & ((x_28 * (x_28 - 1)) ^ 0xFFFFFFFE)) == 0) != y_29 < 10 )
            v4 = 1181490158;
          if ( v4 > 571221953 )
            goto LABEL_44;
        }
        if ( v4 != 517947194 )
        {
          fprintf(stderr, "%s: can't gzopen %s\n", prog, name);
          exit(1);
        }
        snprintf(&v23[v22], 1024 - v22, "%s", ".gz");
        v4 = 1181490158;
      }
    }
    if ( v4 <= 1663650125 )
      break;
    if ( v4 == 1794691601 )
    {
      v26 = fopen64(filename, "wb");
      v21 = v26 == 0LL;
      v17 = ~((_BYTE)x_28 * ((_BYTE)x_28 - 1)) | 0xFFFFFFFE;
      v18 = -327003221;
      if ( (v17 == -1) != y_29 < 10 )
        v18 = 990496783;
      v4 = v18;
      if ( v17 == -1 )
        v4 = 990496783;
      if ( y_29 >= 10 )
        v4 = v18;
      if ( v4 <= 571221953 )
        goto LABEL_9;
    }
    else
    {
      if ( v4 != 1832292314 )
      {
        perror(file);
        exit(1);
      }
      snprintf(s, 0x400uLL, "%s", file);
      v4 = 1615481561;
    }
  }
  if ( v4 == 1484805434 )
  {
    v20 = strcmp(&file[v22 - 3], ".gz") == 0;
    v12 = (~((_BYTE)x_28 * ((_BYTE)x_28 - 1)) | 0xFFFFFFFE) == -1;
    v4 = -880590570;
    v13 = -1037525482;
    if ( (~((_BYTE)x_28 * ((_BYTE)x_28 - 1)) | 0xFFFFFFFE) == -1 )
      v4 = -1037525482;
    v14 = y_29 < 10;
    v15 = y_29 < 10;
    v16 = -880590570;
    goto LABEL_68;
  }
  if ( v4 == 1615481561 )
  {
    v23 = s;
    snprintf(s, 0x400uLL, "%s", file);
    v19 = v22 > 3;
    v6 = y_29;
    v7 = (x_28 * (x_28 - 1)) & ((x_28 * (x_28 - 1)) ^ 0xFFFFFFFE);
    v8 = (v7 == 0) == y_29 < 10;
    v5 = 1832292314;
    v9 = -777246719;
    goto LABEL_2;
  }
  gz_uncompress(v25, v26);
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
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // edx
  bool v13; // zf
  int v14; // esi
  int v15; // edi
  bool v16; // zf
  int v17; // ecx
  char v18; // cl
  int v19; // esi
  bool v20; // cc
  char v21; // dl
  int v22; // edi
  char v23; // cl
  int v24; // edi
  bool v25; // cc
  char v26; // dl
  int v27; // esi
  int v28; // ecx
  unsigned int v29; // eax
  bool v30; // zf
  int v31; // esi
  unsigned int v32; // eax
  bool v33; // zf
  int v34; // ecx
  bool v35; // cc
  int v36; // ecx
  char *v37; // rax
  unsigned int v38; // eax
  unsigned int v39; // eax
  char v41; // [rsp+6h] [rbp-122h]
  bool v42; // [rsp+7h] [rbp-121h]
  int v43; // [rsp+8h] [rbp-120h]
  bool v44; // [rsp+Fh] [rbp-119h]
  bool v45; // [rsp+10h] [rbp-118h]
  bool v46; // [rsp+11h] [rbp-117h]
  bool v47; // [rsp+12h] [rbp-116h]
  bool v48; // [rsp+13h] [rbp-115h]
  int v49; // [rsp+14h] [rbp-114h]
  char *v50; // [rsp+18h] [rbp-110h]
  int v51; // [rsp+24h] [rbp-104h]
  int v52; // [rsp+28h] [rbp-100h]
  int v53; // [rsp+2Ch] [rbp-FCh]
  const char **v54; // [rsp+30h] [rbp-F8h]
  int v55; // [rsp+38h] [rbp-F0h]
  int v56; // [rsp+3Ch] [rbp-ECh]
  int v57; // [rsp+4Ch] [rbp-DCh]
  char *v58; // [rsp+50h] [rbp-D8h]
  const char *v59; // [rsp+58h] [rbp-D0h]
  const char **v60; // [rsp+60h] [rbp-C8h]
  const char **v61; // [rsp+68h] [rbp-C0h]
  const char **v62; // [rsp+70h] [rbp-B8h]
  int v63; // [rsp+7Ch] [rbp-ACh]
  char *v64; // [rsp+88h] [rbp-A0h]
  char *v65; // [rsp+90h] [rbp-98h]
  char *v66; // [rsp+98h] [rbp-90h]
  gzFile_s *v67; // [rsp+A0h] [rbp-88h]
  gzFile_s *v68; // [rsp+A8h] [rbp-80h]
  gzFile_s *v69; // [rsp+B0h] [rbp-78h]
  FILE *v70; // [rsp+B8h] [rbp-70h]
  gzFile_s *out; // [rsp+C0h] [rbp-68h]
  char *s1; // [rsp+C8h] [rbp-60h]
  char v73[3]; // [rsp+D0h] [rbp-58h] BYREF
  char v74; // [rsp+D3h] [rbp-55h] BYREF
  const char **v75; // [rsp+F0h] [rbp-38h]

  snprintf(v73, 0x14uLL, "%s", "wb6 ");
  prog = (char *)*argv;
  v64 = (char *)*argv;
  v65 = strrchr(*argv, 47);
  v7 = argc - 1;
  v75 = argv + 1;
  v8 = -770969451;
  v55 = (int)v9;
  v60 = (const char **)v9;
  v52 = (int)v9;
  v51 = (int)v9;
  v59 = v9;
  while ( 1 )
  {
LABEL_9:
    while ( v8 > -899810599 )
    {
      if ( v8 > -691187542 )
      {
        if ( v8 > -161627020 )
        {
          if ( v8 <= 19423054 )
          {
            if ( v8 == -124850611 )
            {
              v46 = *v50 == 45;
              v28 = y_31;
              v29 = (x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE);
              v30 = (v29 == 0) == y_31 < 10;
              v10 = -691187541;
              v31 = 1874811093;
            }
            else
            {
              if ( v8 != -29795917 )
                error("can't gzdopen stdin");
              v28 = y_31;
              v29 = (x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE);
              v30 = (v29 == 0) == y_31 < 10;
              v10 = 900285641;
              v31 = -573339146;
            }
            goto LABEL_2;
          }
          if ( v8 == 19423055 )
          {
            file_compress((char *)*v54, v73);
            v8 = -1228117402;
            goto LABEL_9;
          }
          if ( v8 == 212199019 )
          {
            v6 = v53 - 1;
            v4 = v62 + 1;
            v8 = 1573439514;
            v52 = v3;
            v51 = v5;
            goto LABEL_125;
          }
          gz_compress(v70, out);
LABEL_114:
          v8 = 2124376705;
          goto LABEL_125;
        }
        if ( v8 > -449689356 )
        {
          if ( v8 == -449689355 )
          {
            v38 = fileno(stdout);
            out = (gzFile_s *)gzdopen(v38, v73);
            v33 = out == 0LL;
            v8 = 215389649;
            v34 = -838519356;
            goto LABEL_229;
          }
          if ( v8 == -257543957 )
          {
            v16 = !v48;
            v8 = -2089967105;
            v17 = -1537299142;
            goto LABEL_115;
          }
          file_uncompress(v58);
          v23 = ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0;
          v8 = -880360191;
          v24 = 1472378718;
          if ( ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v8 = 1472378718;
          v25 = y_31 < 10;
          v26 = y_31 < 10;
          v27 = -880360191;
          goto LABEL_216;
        }
        if ( v8 == -691187541 )
        {
          v8 = -124850611;
          goto LABEL_9;
        }
        if ( v8 != -573339146 )
        {
          v6 = v56;
          v8 = 1573439514;
          v52 = 1;
          v4 = v61;
          v51 = 1;
          goto LABEL_125;
        }
        v8 = 212199019;
        v5 = 1;
LABEL_123:
        v3 = v43;
        goto LABEL_9;
      }
      if ( v8 <= -813563706 )
      {
        if ( v8 <= -880360192 )
        {
          if ( v8 == -899810598 )
          {
            v8 = 1017742449;
            goto LABEL_125;
          }
          v18 = ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0;
          v8 = 900285641;
          v19 = -29795917;
          if ( ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v8 = -29795917;
          v20 = y_31 < 10;
          v21 = y_31 < 10;
          v22 = 900285641;
          goto LABEL_184;
        }
        if ( v8 != -880360191 )
        {
          if ( v8 == -877771394 )
          {
            v8 = 864604049;
            goto LABEL_125;
          }
          v18 = ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0;
          v8 = -2034789436;
          v19 = -711286504;
          if ( ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v8 = -711286504;
          v20 = y_31 < 10;
          v21 = y_31 < 10;
          v22 = -2034789436;
          goto LABEL_184;
        }
        file_uncompress(v58);
        v8 = -182307965;
      }
      else if ( v8 > -711286505 )
      {
        if ( v8 == -696913230 )
        {
          v18 = ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0;
          v8 = 647563767;
          v19 = 305091305;
          if ( ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v8 = 305091305;
          v20 = y_31 < 10;
          v21 = y_31 < 10;
          v22 = 647563767;
          goto LABEL_184;
        }
        if ( v8 != -695827280 )
          error("can't gzdopen stdout");
        v11 = y_31;
        v12 = ~((_BYTE)x_30 * ((_BYTE)x_30 - 1)) | 0xFFFFFFFE;
        v13 = (v12 == -1) == y_31 < 10;
        v14 = -691187541;
        v15 = -124850611;
LABEL_242:
        if ( !v13 )
          v14 = v15;
        v8 = v14;
        if ( v12 == -1 )
          v8 = v15;
        if ( v11 >= 10 )
          v8 = v14;
        if ( v8 > 251315900 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
LABEL_125:
                while ( v8 <= 964244221 )
                {
                  if ( v8 > 558811557 )
                  {
                    if ( v8 <= 732546812 )
                    {
                      if ( v8 <= 652623840 )
                      {
                        if ( v8 == 558811558 )
                        {
                          v16 = !v45;
                          v8 = -695827280;
                          v17 = -1899738453;
                          goto LABEL_115;
                        }
                        v8 = 305091305;
                      }
                      else if ( v8 == 652623841 )
                      {
                        v23 = ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0;
                        v8 = 1807205560;
                        v24 = 263567358;
                        if ( ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0 )
                          v8 = 263567358;
                        v25 = y_31 < 10;
                        v26 = y_31 < 10;
                        v27 = 1807205560;
LABEL_216:
                        if ( !v25 )
                          v8 = v27;
                        if ( v23 != v26 )
                          v8 = v24;
                        if ( v8 <= 251315900 )
                          goto LABEL_9;
                      }
                      else
                      {
                        if ( v8 != 697542678 )
                        {
                          v58 = (char *)*v54;
                          v16 = !v42;
                          v8 = -1178410018;
                          v17 = 465102860;
                          goto LABEL_115;
                        }
                        v8 = 1083999164;
                      }
                    }
                    else
                    {
                      if ( v8 > 864604048 )
                      {
                        if ( v8 == 864604049 )
                        {
                          v44 = strcmp(v50, "-h") == 0;
                          v28 = y_31;
                          v29 = (x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE);
                          v30 = (v29 == 0) == y_31 < 10;
                          v10 = -877771394;
                          v31 = 1410010275;
                          goto LABEL_2;
                        }
                        if ( v8 == 900285641 )
                        {
                          v8 = -29795917;
                          goto LABEL_9;
                        }
                        v33 = strcmp(v50, "-f") == 0;
                        v8 = -1672342486;
                        v34 = 1698720247;
                      }
                      else
                      {
                        if ( v8 == 732546813 )
                        {
                          v74 = 104;
                          goto LABEL_203;
                        }
                        if ( v8 == 794740119 )
                        {
                          gz_compress(stdin, v68);
                          goto LABEL_124;
                        }
                        v39 = fileno(stdin);
                        v67 = (gzFile_s *)gzdopen(v39, "rb");
                        v33 = v67 == 0LL;
                        v8 = -1657947235;
                        v34 = -161627019;
                      }
LABEL_229:
                      if ( v33 )
                        v8 = v34;
                      if ( v8 <= 251315900 )
                        goto LABEL_9;
                    }
                  }
                  else if ( v8 <= 353980136 )
                  {
                    if ( v8 <= 285396960 )
                    {
                      if ( v8 == 251315901 )
                      {
                        v16 = !v42;
                        v8 = -1298408786;
                        v17 = 1182752032;
                        goto LABEL_115;
                      }
                      v47 = v50[2] == 0;
                      v18 = ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0;
                      v8 = 1807205560;
                      v19 = -1253148703;
                      if ( ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0 )
                        v8 = -1253148703;
                      v20 = y_31 < 10;
                      v21 = y_31 < 10;
                      v22 = 1807205560;
LABEL_184:
                      if ( !v20 )
                        v8 = v22;
                      if ( v18 != v21 )
                        v8 = v19;
                      if ( v8 <= 251315900 )
                        goto LABEL_9;
                    }
                    else
                    {
                      if ( v8 != 285396961 )
                      {
                        if ( v8 != 305091305 )
                          goto LABEL_203;
                        v23 = (~((_BYTE)x_30 * ((_BYTE)x_30 - 1)) | 0xFFFFFFFE) == -1;
                        v8 = 647563767;
                        v24 = 1475085627;
                        if ( (~((_BYTE)x_30 * ((_BYTE)x_30 - 1)) | 0xFFFFFFFE) == -1 )
                          v8 = 1475085627;
                        v25 = y_31 < 10;
                        v26 = y_31 < 10;
                        v27 = 647563767;
                        goto LABEL_216;
                      }
                      v6 = v56;
                      v8 = 1573439514;
                      v51 = 0;
                      v52 = 1;
                      v4 = v61;
                    }
                  }
                  else if ( v8 > 465102859 )
                  {
                    if ( v8 == 465102860 )
                    {
                      v28 = y_31;
                      v29 = (x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE);
                      v30 = (v29 == 0) == y_31 < 10;
                      v10 = 1057065802;
                      v31 = -813563705;
                      goto LABEL_2;
                    }
                    if ( v8 == 465565585 )
                    {
                      v60 = v54 + 1;
                      v16 = v63 == 1;
                      v55 = v63 - 1;
                      v8 = -1606929248;
                      v17 = 488582236;
                      goto LABEL_115;
                    }
                    v63 = v55;
                    v54 = v60;
                    v8 = 251315901;
                    if ( v43 )
                      v8 = 720662457;
                    v42 = v49 != 0;
                  }
                  else
                  {
                    if ( v8 == 353980137 )
                    {
                      v50 = (char *)*v62;
                      v33 = strcmp(*v62, "-c") == 0;
                      v8 = 1858084336;
                      v34 = -887172701;
                      goto LABEL_229;
                    }
                    if ( v8 != 375236136 )
                    {
                      perror(*v54);
                      goto LABEL_114;
                    }
                    *v66 = 0;
                    v8 = 1447155250;
                  }
                }
                if ( v8 <= 1477589658 )
                  break;
                if ( v8 <= 1710807401 )
                {
                  if ( v8 <= 1539270373 )
                  {
                    if ( v8 != 1477589659 )
                      goto LABEL_197;
                    v11 = y_31;
                    v12 = ~((_BYTE)x_30 * ((_BYTE)x_30 - 1)) | 0xFFFFFFFE;
                    v13 = (v12 == -1) == y_31 < 10;
                    v14 = 697542678;
                    v15 = 1083999164;
                    goto LABEL_242;
                  }
                  if ( v8 == 1539270374 )
                  {
                    v37 = v65 + 1;
                    goto LABEL_224;
                  }
                  if ( v8 == 1573439514 )
                  {
                    v53 = v6;
                    v43 = v52;
                    v49 = v51;
                    v62 = v4;
                    v35 = v6 <= 0;
                    v8 = -1005484189;
                    v36 = 353980137;
LABEL_119:
                    if ( !v35 )
                      v8 = v36;
                    if ( v8 <= 251315900 )
                      goto LABEL_9;
                  }
                  else
                  {
                    v28 = y_31;
                    v29 = (x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE);
                    v30 = (v29 == 0) == y_31 < 10;
                    v10 = -771759639;
                    v31 = -1904028174;
LABEL_2:
                    if ( !v30 )
                      v10 = v31;
                    v13 = v29 == 0;
                    v8 = v10;
                    if ( v13 )
                      v8 = v31;
                    if ( v28 >= 10 )
                      v8 = v10;
                    if ( v8 <= 251315900 )
                      goto LABEL_9;
                  }
                }
                else
                {
                  if ( v8 > 1858084335 )
                  {
                    if ( v8 == 1858084336 )
                    {
                      v33 = strcmp(v50, "-d") == 0;
                      v8 = 957367343;
                      v34 = 1090111495;
                      goto LABEL_229;
                    }
                    if ( v8 != 1874811093 )
                      goto LABEL_197;
                    v16 = !v46;
                    v8 = -1005484189;
                    v17 = -1744757435;
                    goto LABEL_115;
                  }
                  if ( v8 == 1710807402 )
                    goto LABEL_197;
                  if ( v8 != 1807205560 )
                    error("can't gzdopen stdout");
                  v8 = 263567358;
                }
              }
              if ( v8 > 1090111494 )
                break;
              if ( v8 <= 1018636728 )
              {
                if ( v8 != 964244222 )
                {
                  v45 = strcmp(v50, "-r") == 0;
                  v23 = ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0;
                  v8 = -899810598;
                  v24 = 558811558;
                  if ( ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0 )
                    v8 = 558811558;
                  v25 = y_31 < 10;
                  v26 = y_31 < 10;
                  v27 = -899810598;
                  goto LABEL_216;
                }
                v8 = -1005484189;
                if ( v57 < 58 )
                  v8 = 652623841;
                if ( v8 <= 251315900 )
                  goto LABEL_9;
              }
              else
              {
                if ( v8 != 1018636729 )
                {
                  if ( v8 == 1057065802 )
                  {
                    gzopen64(v58, "rb");
                    v8 = -813563705;
                    goto LABEL_9;
                  }
                  v18 = (~((_BYTE)x_30 * ((_BYTE)x_30 - 1)) | 0xFFFFFFFE) == -1;
                  v8 = 697542678;
                  v19 = -538822259;
                  if ( (~((_BYTE)x_30 * ((_BYTE)x_30 - 1)) | 0xFFFFFFFE) == -1 )
                    v8 = -538822259;
                  v20 = y_31 < 10;
                  v21 = y_31 < 10;
                  v22 = 697542678;
                  goto LABEL_184;
                }
                s1 = (char *)v59;
                v56 = v7;
                v61 = v75;
                v16 = strcmp(v59, "gunzip") == 0;
                v8 = 285396961;
                v17 = -1687047300;
LABEL_115:
                if ( !v16 )
                  v8 = v17;
                if ( v8 <= 251315900 )
                  goto LABEL_9;
              }
            }
            if ( v8 <= 1447155249 )
            {
              if ( v8 == 1090111495 )
              {
                v8 = 212199019;
                v3 = 1;
                v5 = v49;
                goto LABEL_9;
              }
              if ( v8 == 1182752032 )
              {
                v70 = fopen64(*v54, "rb");
                v33 = v70 == 0LL;
                v8 = -449689355;
                v34 = 454609296;
                goto LABEL_229;
              }
              v16 = !v44;
              v8 = -948151754;
              v17 = 732546813;
              goto LABEL_115;
            }
            if ( v8 == 1447155250 )
            {
              v33 = v53 == 0;
              v8 = -696913230;
              v34 = -1266645825;
              goto LABEL_229;
            }
            if ( v8 == 1472378718 )
              goto LABEL_197;
            v60 = v62;
            v8 = 488582236;
            v55 = v53;
          }
        }
      }
      else
      {
        if ( v8 == -813563705 )
        {
          v69 = (gzFile_s *)gzopen64(v58, "rb");
          v48 = v69 == 0LL;
          v28 = y_31;
          v29 = (x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE);
          v30 = (v29 == 0) == y_31 < 10;
          v10 = 1057065802;
          v31 = -257543957;
          goto LABEL_2;
        }
        if ( v8 != -771759639 )
        {
          v16 = v65 == 0LL;
          v8 = -1994993993;
          v17 = 1539270374;
          goto LABEL_115;
        }
        v74 = 102;
        v8 = -1904028174;
      }
    }
    if ( v8 > -1537299143 )
    {
      if ( v8 > -1253148704 )
      {
        if ( v8 <= -1048615608 )
        {
          if ( v8 != -1253148703 )
          {
            if ( v8 == -1228117402 )
            {
              file_compress((char *)*v54, v73);
              v11 = y_31;
              v12 = ~((_BYTE)x_30 * ((_BYTE)x_30 - 1)) | 0xFFFFFFFE;
              v13 = (v12 == -1) == y_31 < 10;
              v14 = 19423055;
              v15 = 1710807402;
            }
            else
            {
              v11 = y_31;
              v12 = ~((_BYTE)x_30 * ((_BYTE)x_30 - 1)) | 0xFFFFFFFE;
              v13 = (v12 == -1) == y_31 < 10;
              v14 = -880360191;
              v15 = -182307965;
            }
            goto LABEL_242;
          }
          v16 = !v47;
          v8 = -1005484189;
          v17 = -1496739370;
          goto LABEL_115;
        }
        if ( v8 != -1005484189 )
        {
          v28 = y_31;
          v29 = (x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE);
          v30 = (v29 == 0) == y_31 < 10;
          v10 = -899810598;
          v31 = 1017742449;
          goto LABEL_2;
        }
        v66 = &v74;
        v33 = v74 == 32;
        v8 = 1447155250;
        v34 = 375236136;
        goto LABEL_229;
      }
      if ( v8 > -1324930315 )
      {
        if ( v8 != -1324930314 )
        {
          if ( v8 != -1298408786 )
          {
            v16 = v43 == 0;
            v8 = -2070196606;
            v17 = 830736038;
            goto LABEL_115;
          }
          v18 = ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0;
          v8 = 19423055;
          v19 = -1228117402;
          if ( ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0 )
            v8 = -1228117402;
          v20 = y_31 < 10;
          v21 = y_31 < 10;
          v22 = 19423055;
          goto LABEL_184;
        }
        fprintf(stderr, "%s: can't gzopen %s\n", prog, *v54);
        v23 = ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0;
        v8 = -1923084110;
        v24 = 1515865540;
        if ( ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0 )
          v8 = 1515865540;
        v25 = y_31 < 10;
        v26 = y_31 < 10;
        v27 = -1923084110;
        goto LABEL_216;
      }
      if ( v8 == -1537299142 )
      {
        v11 = y_31;
        v12 = ~((_BYTE)x_30 * ((_BYTE)x_30 - 1)) | 0xFFFFFFFE;
        v13 = (v12 == -1) == y_31 < 10;
        v14 = -1923084110;
        v15 = -1324930314;
        goto LABEL_242;
      }
      v73[2] = v41;
      goto LABEL_203;
    }
    if ( v8 > -1899738454 )
      break;
    if ( v8 <= -1994993994 )
    {
      if ( v8 != -2089967105 )
      {
        if ( v8 != -2070196606 )
          error("can't gzdopen stdout");
        v32 = fileno(stdout);
        v68 = (gzFile_s *)gzdopen(v32, v73);
        v33 = v68 == 0LL;
        v8 = 794740119;
        v34 = 1789954675;
        goto LABEL_229;
      }
      gz_uncompress(v69, stdout);
LABEL_197:
      v8 = 465565585;
      goto LABEL_125;
    }
    if ( v8 == -1994993993 )
    {
      v37 = v64;
LABEL_224:
      v59 = v37;
      v8 = 1018636729;
      goto LABEL_125;
    }
    if ( v8 != -1923084110 )
    {
      v74 = 102;
      v18 = ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0;
      v8 = -771759639;
      v19 = 328059763;
      if ( ((x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE)) == 0 )
        v8 = 328059763;
      v20 = y_31 < 10;
      v21 = y_31 < 10;
      v22 = -771759639;
      goto LABEL_184;
    }
    fprintf(stderr, "%s: can't gzopen %s\n", prog, *v54);
    v8 = -1324930314;
  }
  if ( v8 <= -1672342487 )
  {
    if ( v8 != -1899738453 )
    {
      if ( v8 != -1744757435 )
      {
        v13 = strcmp(s1, "zcat") == 0;
        v8 = 1477589659;
        if ( !v13 )
          v8 = 1573439514;
        v6 = v56;
        v52 = 0;
        v4 = v61;
        v51 = 0;
        goto LABEL_125;
      }
      v41 = v50[1];
      v57 = v41;
      v35 = v41 <= 48;
      v8 = -1005484189;
      v36 = 964244222;
      goto LABEL_119;
    }
    v74 = 82;
LABEL_203:
    v5 = v49;
    v8 = 212199019;
    goto LABEL_123;
  }
  if ( v8 == -1672342486 )
  {
    v28 = y_31;
    v29 = (x_30 * (x_30 - 1)) & ((x_30 * (x_30 - 1)) ^ 0xFFFFFFFE);
    v30 = (v29 == 0) == y_31 < 10;
    v10 = -877771394;
    v31 = 864604049;
    goto LABEL_2;
  }
  if ( v8 == -1657947235 )
  {
    gz_uncompress(v67, stdout);
LABEL_124:
    v8 = -1606929248;
    goto LABEL_9;
  }
  return 0;
}
