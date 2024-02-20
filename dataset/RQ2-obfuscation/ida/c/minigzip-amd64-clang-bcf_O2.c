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
  unsigned int v2; // ebx
  const char *v3; // rax
  char v4[4]; // [rsp+Ch] [rbp-402Ch] BYREF
  char ptr[16424]; // [rsp+10h] [rbp-4028h] BYREF

  while ( 1 )
  {
    if ( y_23 >= 10 && (((_BYTE)x_22 * ((_BYTE)x_22 - 1)) & 1) != 0 )
LABEL_5:
      fread(ptr, 1uLL, 0x4000uLL, in);
    v2 = fread(ptr, 1uLL, 0x4000uLL, in);
    if ( y_23 >= 10 && (((_BYTE)x_22 * ((_BYTE)x_22 - 1)) & 1) != 0 )
      goto LABEL_5;
    if ( ferror(in) )
    {
      perror("fread");
      exit(1);
    }
    if ( !v2 )
      break;
    if ( (unsigned int)gzwrite(out, ptr, v2) != v2 )
    {
      v3 = (const char *)gzerror(out, v4);
      error(v3);
    }
  }
  fclose(in);
  if ( (unsigned int)gzclose(out) )
    error("failed gzclose");
}

void __fastcall gz_uncompress(gzFile in, FILE *out)
{
  __int64 v2; // rax
  int v3; // r13d
  const char *v4; // rax
  _QWORD v5[6]; // [rsp-8h] [rbp-30h] BYREF

  v5[0] = v2;
  while ( (((_BYTE)x_24 * ((_BYTE)x_24 - 1)) & 1) != 0 && y_25 >= 10 )
    ;
  while ( 1 )
  {
    v3 = gzread(in, &v5[-2048], 0x4000LL);
    if ( v3 < 0 )
    {
      v4 = (const char *)gzerror(in, &v5[-2]);
      error(v4);
    }
    if ( y_25 >= 10 && (((_BYTE)x_24 * ((_BYTE)x_24 - 1)) & 1) != 0 )
    {
      while ( 1 )
        ;
    }
    if ( !v3 )
      break;
    if ( (unsigned int)fwrite(&v5[-2048], 1uLL, (unsigned int)v3, out) != v3 )
      error("failed fwrite");
  }
  if ( fclose(out) )
    error("failed fclose");
  if ( (unsigned int)gzclose(in) )
    error("failed gzclose");
  if ( y_25 >= 10 && (((_BYTE)x_24 * ((_BYTE)x_24 - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
}

void __fastcall file_compress(char *file, char *mode)
{
  FILE *v2; // r15
  gzFile_s *v3; // rbx
  char v4[1048]; // [rsp+0h] [rbp-418h] BYREF

  if ( strlen(file) + 3 >= 0x400 )
  {
    fprintf(stderr, "%s: filename too long\n", prog);
    exit(1);
  }
  snprintf(v4, 0x400uLL, "%s%s", file, ".gz");
  v2 = fopen(file, "rb");
  if ( !v2 )
  {
    perror(file);
    exit(1);
  }
  v3 = (gzFile_s *)gzopen(v4, mode);
  if ( !v3 )
  {
    fprintf(stderr, "%s: can't gzopen %s\n", prog, v4);
    exit(1);
  }
  if ( (((_BYTE)x_26 * ((_BYTE)x_26 - 1)) & 1) != 0 && y_27 > 9 )
    goto LABEL_12;
  while ( 1 )
  {
    gz_compress(v2, v3);
    unlink(file);
    if ( y_27 < 10 || (((_BYTE)x_26 * ((_BYTE)x_26 - 1)) & 1) == 0 )
      break;
LABEL_12:
    gz_compress(v2, v3);
    unlink(file);
  }
}

void __fastcall file_uncompress(char *file)
{
  size_t v1; // rbx
  char *v2; // r15
  char *v3; // r13
  gzFile_s *v4; // r12
  FILE *v5; // rbx
  char v6[3]; // [rsp+1h] [rbp-42Bh]
  char s[1064]; // [rsp+4h] [rbp-428h] BYREF

  v1 = strlen(file);
  if ( v1 + 3 >= 0x400 )
  {
    fprintf(stderr, "%s: filename too long\n", prog);
    exit(1);
  }
  v2 = s;
  snprintf(s, 0x400uLL, "%s", file);
  if ( v1 < 4 )
    goto LABEL_7;
  if ( y_29 >= 10 && (((_BYTE)x_28 * ((_BYTE)x_28 - 1)) & 1) != 0 )
  {
    while ( 1 )
      ;
  }
  if ( !strcmp(&file[v1 - 3], ".gz") )
  {
    v3 = s;
    v6[v1] = 0;
    v2 = file;
  }
  else
  {
LABEL_7:
    snprintf(&s[v1], 1024 - v1, "%s", ".gz");
    v3 = file;
  }
  v4 = (gzFile_s *)gzopen(v2, "rb");
  if ( !v4 )
  {
    fprintf(stderr, "%s: can't gzopen %s\n", prog, v2);
    exit(1);
  }
  v5 = fopen(v3, "wb");
  if ( !v5 )
  {
    perror(file);
    exit(1);
  }
  if ( (((_BYTE)x_28 * ((_BYTE)x_28 - 1)) & 1) != 0 && y_29 > 9 )
    goto LABEL_19;
  while ( 1 )
  {
    gz_uncompress(v4, v5);
    unlink(v2);
    if ( y_29 < 10 || (((_BYTE)x_28 * ((_BYTE)x_28 - 1)) & 1) == 0 )
      break;
LABEL_19:
    gz_uncompress(v4, v5);
    unlink(v2);
  }
}

// local variable allocation has failed, the output may be wrong!
int __cdecl main(int argc, const char **argv, const char **envp)
{
  char *v3; // r12
  const char *v4; // rbx
  char *v5; // rax
  __int64 v6; // r15
  const char *v7; // r13
  int v8; // r13d
  const char **v9; // r14
  const char **v10; // r12
  int v11; // r15d
  const char *v12; // rbx
  int v13; // ecx
  char *v14; // rbx
  gzFile_s *v15; // rax
  char *v16; // rdi
  FILE *v17; // r15
  unsigned int v18; // eax
  gzFile_s *v19; // rbx
  unsigned int v20; // eax
  unsigned int v21; // eax
  gzFile_s *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  gzFile_s *v25; // rbx
  __int64 v27; // [rsp+0h] [rbp-50h] BYREF
  int v28; // [rsp+8h] [rbp-48h]
  int v29; // [rsp+Ch] [rbp-44h]
  __int64 v30; // [rsp+10h] [rbp-40h]
  _BOOL4 v31; // [rsp+18h] [rbp-38h]
  _BOOL4 v32; // [rsp+1Ch] [rbp-34h]
  __int64 *argca; // [rsp+20h] [rbp-30h]

  argca = *(__int64 **)&argc;
  if ( y_31 >= 10 && (((_BYTE)x_30 * ((_BYTE)x_30 - 1)) & 1) != 0 )
    goto LABEL_5;
  while ( 1 )
  {
    v3 = (char *)(&v27 - 4);
    v31 = 0;
    snprintf((char *)&v27 - 32, 0x14uLL, "%s", "wb6 ");
    prog = (char *)*argv;
    v4 = *argv;
    v5 = strrchr(*argv, 47);
    v6 = (unsigned int)x_30;
    v29 = y_31;
    if ( y_31 < 10 || (((_BYTE)x_30 * ((_BYTE)x_30 - 1)) & 1) == 0 )
      break;
LABEL_5:
    snprintf((char *)&v27 - 32, 0x14uLL, "%s", "wb6 ");
    prog = (char *)*argv;
  }
  v28 = x_30 * (x_30 - 1);
  v7 = v5 + 1;
  if ( !v5 )
    v7 = v4;
  if ( !strcmp(v7, "gunzip") )
  {
    v32 = 1;
  }
  else
  {
    v31 = strcmp(v7, "zcat") == 0;
    v32 = v31;
  }
  v8 = (_DWORD)argca - 1;
  v9 = argv + 1;
  if ( (int)argca >= 2 )
  {
    v30 = v6;
    argca = &v27 - 4;
LABEL_13:
    while ( 2 )
    {
      v10 = v9;
      while ( 1 )
      {
        v11 = v8;
        v12 = *v10;
        if ( !strcmp(*v10, "-c") )
        {
          --v8;
          v9 = v10 + 1;
          v31 = 1;
          if ( v11 >= 2 )
            goto LABEL_13;
          ++v10;
          --v11;
          v31 = 1;
          goto LABEL_32;
        }
        if ( !strcmp(v12, "-d") )
          break;
        if ( !strcmp(v12, "-f") )
        {
          *((_BYTE *)argca + 3) = 102;
        }
        else if ( !strcmp(v12, "-h") )
        {
          *((_BYTE *)argca + 3) = 104;
        }
        else if ( !strcmp(v12, "-r") )
        {
          *((_BYTE *)argca + 3) = 82;
        }
        else
        {
          if ( *v12 != 45 || (unsigned __int8)(v12[1] - 49) > 8u || v12[2] )
            goto LABEL_32;
          *((_BYTE *)argca + 2) = v12[1];
        }
        --v8;
        ++v10;
        if ( v11 <= 1 )
          goto LABEL_33;
      }
      --v8;
      v9 = v10 + 1;
      v32 = 1;
      if ( v11 >= 2 )
        continue;
      break;
    }
    ++v10;
    --v11;
    v32 = 1;
LABEL_32:
    v8 = v11;
LABEL_33:
    v9 = v10;
    v3 = (char *)argca;
    LOBYTE(v6) = v30;
  }
  if ( v3[3] == 32 )
  {
    while ( (v28 & 1) != 0 && v29 >= 10 )
      ;
    v3[3] = 0;
  }
  if ( v8 )
  {
    v13 = v29;
    while ( 1 )
    {
      if ( v32 )
      {
        v14 = (char *)*v9;
        if ( !v31 )
        {
          if ( v13 >= 10 && (((_BYTE)v6 * ((_BYTE)v6 - 1)) & 1) != 0 )
            goto LABEL_67;
          while ( 1 )
          {
            file_uncompress(v14);
            if ( y_31 < 10 || (((_BYTE)x_30 * ((_BYTE)x_30 - 1)) & 1) == 0 )
              goto LABEL_71;
LABEL_67:
            file_uncompress(v14);
          }
        }
        v15 = (gzFile_s *)gzopen(*v9, "rb");
        if ( v15 )
          gz_uncompress(v15, stdout);
        else
          fprintf(stderr, "%s: can't gzopen %s\n", prog, *v9);
      }
      else
      {
        if ( v13 >= 10 && (((_BYTE)v6 * ((_BYTE)v6 - 1)) & 1) != 0 )
        {
          while ( 1 )
            ;
        }
        v16 = (char *)*v9;
        if ( v31 )
        {
          v17 = fopen(v16, "rb");
          if ( !v17 )
          {
            if ( y_31 >= 10 && (((_BYTE)x_30 * ((_BYTE)x_30 - 1)) & 1) != 0 )
              goto LABEL_61;
            while ( 1 )
            {
              perror(*v9);
              if ( y_31 < 10 || (((_BYTE)x_30 * ((_BYTE)x_30 - 1)) & 1) == 0 )
                goto LABEL_71;
LABEL_61:
              perror(*v9);
            }
          }
          v18 = fileno(stdout);
          v19 = (gzFile_s *)gzdopen(v18, v3);
          if ( !v19 )
            error("can't gzdopen stdout");
          if ( y_31 < 10 || (((_BYTE)x_30 * ((_BYTE)x_30 - 1)) & 1) == 0 )
            goto LABEL_68;
          while ( 1 )
          {
            gz_compress(v17, v19);
LABEL_68:
            gz_compress(v17, v19);
            if ( y_31 < 10 || (((_BYTE)x_30 * ((_BYTE)x_30 - 1)) & 1) == 0 )
              goto LABEL_71;
          }
        }
        while ( 1 )
        {
          file_compress(v16, v3);
          if ( y_31 < 10 || (((_BYTE)x_30 * ((_BYTE)x_30 - 1)) & 1) == 0 )
            break;
          file_compress((char *)*v9, v3);
          v16 = (char *)*v9;
        }
      }
LABEL_71:
      LOBYTE(v6) = x_30;
      v13 = y_31;
      if ( y_31 >= 10 && (((_BYTE)x_30 * ((_BYTE)x_30 - 1)) & 1) != 0 )
      {
        while ( 1 )
          ;
      }
      ++v9;
      if ( !--v8 )
        return 0;
    }
  }
  if ( v32 )
  {
    while ( 1 )
    {
      v21 = fileno(stdin);
      v22 = (gzFile_s *)gzdopen(v21, "rb");
      if ( y_31 < 10 || (((_BYTE)x_30 * ((_BYTE)x_30 - 1)) & 1) == 0 )
        break;
      v20 = fileno(stdin);
      gzdopen(v20, "rb");
    }
    if ( !v22 )
      error("can't gzdopen stdin");
    gz_uncompress(v22, stdout);
  }
  else
  {
    while ( 1 )
    {
      v24 = fileno(stdout);
      v25 = (gzFile_s *)gzdopen(v24, v3);
      if ( y_31 < 10 || (((_BYTE)x_30 * ((_BYTE)x_30 - 1)) & 1) == 0 )
        break;
      v23 = fileno(stdout);
      gzdopen(v23, v3);
    }
    if ( !v25 )
      error("can't gzdopen stdout");
    while ( 1 )
    {
      gz_compress(stdin, v25);
      if ( y_31 < 10 || (((_BYTE)x_30 * ((_BYTE)x_30 - 1)) & 1) == 0 )
        break;
      gz_compress(stdin, v25);
    }
  }
  return 0;
}
