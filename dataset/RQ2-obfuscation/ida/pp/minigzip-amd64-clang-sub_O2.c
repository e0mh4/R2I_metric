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
  unsigned int v2; // ebx
  const char *v3; // rax
  char v4[4]; // [rsp+Ch] [rbp-402Ch] BYREF
  char ptr[16424]; // [rsp+10h] [rbp-4028h] BYREF

  while ( 1 )
  {
    v2 = fread(ptr, 1uLL, 0x4000uLL, in);
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
  int v2; // eax
  const char *v3; // rax
  char v4[4]; // [rsp+Ch] [rbp-402Ch] BYREF
  char ptr[16424]; // [rsp+10h] [rbp-4028h] BYREF

  while ( 1 )
  {
    v2 = gzread(in, ptr, 0x4000LL);
    if ( v2 < 0 )
    {
      v3 = (const char *)gzerror(in, v4);
      error(v3);
    }
    if ( !v2 )
      break;
    if ( (unsigned int)fwrite(ptr, 1uLL, (unsigned int)v2, out) != v2 )
      error("failed fwrite");
  }
  if ( fclose(out) )
    error("failed fclose");
  if ( (unsigned int)gzclose(in) )
    error("failed gzclose");
}

void __fastcall file_compress(char *file, char *mode)
{
  FILE *v2; // rbx
  gzFile_s *v3; // rax
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
  gz_compress(v2, v3);
  unlink(file);
}

void __fastcall file_uncompress(char *file)
{
  size_t v1; // rbx
  char *v2; // r14
  char *v3; // r12
  gzFile_s *v4; // rbx
  FILE *v5; // rax
  char s[1064]; // [rsp+0h] [rbp-428h] BYREF

  v1 = strlen(file);
  if ( v1 + 3 >= 0x400 )
  {
    fprintf(stderr, "%s: filename too long\n", prog);
    exit(1);
  }
  v2 = s;
  snprintf(s, 0x400uLL, "%s", file);
  if ( v1 >= 4 && !strcmp(&file[v1 - 3], ".gz") )
  {
    v3 = s;
    s[v1 - 3] = 0;
    v2 = file;
  }
  else
  {
    snprintf(&s[v1], 0x6DB88F8E620E0889LL - v1 - 0x6DB88F8E620E0489LL, "%s", ".gz");
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
  gz_uncompress(v4, v5);
  unlink(v2);
}

int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v3; // r14d
  _BOOL4 v4; // r13d
  const char *v5; // r12
  char *v6; // rax
  const char *v7; // r15
  int v8; // r12d
  int v9; // ebp
  const char **v10; // rbx
  const char *v11; // r15
  char *v12; // rdi
  gzFile_s *v13; // rax
  FILE *v14; // r15
  unsigned int v15; // eax
  gzFile_s *v16; // rax
  unsigned int v17; // eax
  gzFile_s *v18; // rax
  unsigned int v19; // eax
  gzFile_s *v20; // rax
  char v22[3]; // [rsp+0h] [rbp-48h] BYREF
  char v23; // [rsp+3h] [rbp-45h]

  v3 = argc;
  v4 = 0;
  snprintf(v22, 0x14uLL, "%s", "wb6 ");
  prog = (char *)*argv;
  v5 = *argv;
  v6 = strrchr(*argv, 47);
  v7 = v6 + 1;
  if ( !v6 )
    v7 = v5;
  if ( !strcmp(v7, "gunzip") )
  {
    v8 = 1;
  }
  else
  {
    v4 = strcmp(v7, "zcat") == 0;
    v8 = v4;
  }
  v9 = argc - 1;
  v10 = argv + 1;
  if ( argc >= 2 )
  {
    while ( 1 )
    {
      v11 = *v10;
      if ( !strcmp(*v10, "-c") )
      {
        v4 = 1;
      }
      else if ( !strcmp(v11, "-d") )
      {
        v8 = 1;
      }
      else if ( !strcmp(v11, "-f") )
      {
        v23 = 102;
      }
      else if ( !strcmp(v11, "-h") )
      {
        v23 = 104;
      }
      else if ( !strcmp(v11, "-r") )
      {
        v23 = 82;
      }
      else
      {
        if ( *v11 != 45 || (unsigned __int8)(v11[1] - 49) > 8u || v11[2] )
        {
LABEL_22:
          v9 = v3 - 1;
          break;
        }
        v22[2] = v11[1];
      }
      --v9;
      ++v10;
      if ( --v3 <= 1 )
        goto LABEL_22;
    }
  }
  if ( v23 == 32 )
    v23 = 0;
  if ( v9 )
  {
    do
    {
      v12 = (char *)*v10;
      if ( v8 )
      {
        if ( v4 )
        {
          v13 = (gzFile_s *)gzopen(v12, "rb");
          if ( v13 )
            gz_uncompress(v13, stdout);
          else
            fprintf(stderr, "%s: can't gzopen %s\n", prog, *v10);
        }
        else
        {
          file_uncompress(v12);
        }
      }
      else if ( v4 )
      {
        v14 = fopen(v12, "rb");
        if ( v14 )
        {
          v15 = fileno(stdout);
          v16 = (gzFile_s *)gzdopen(v15, v22);
          if ( !v16 )
            goto LABEL_47;
          gz_compress(v14, v16);
        }
        else
        {
          perror(*v10);
        }
      }
      else
      {
        file_compress(v12, v22);
      }
      ++v10;
      --v9;
    }
    while ( v9 );
  }
  else if ( v8 )
  {
    v17 = fileno(stdin);
    v18 = (gzFile_s *)gzdopen(v17, "rb");
    if ( !v18 )
      error("can't gzdopen stdin");
    gz_uncompress(v18, stdout);
  }
  else
  {
    v19 = fileno(stdout);
    v20 = (gzFile_s *)gzdopen(v19, v22);
    if ( !v20 )
LABEL_47:
      error("can't gzdopen stdout");
    gz_compress(stdin, v20);
  }
  return 0;
}
