#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
void __fastcall start(FILE *stream, char *nptr)
{
  size_t v2; // rbp@3
  int v3; // edx@3
  void *v4; // r13@3
  unsigned __int64 v5; // rax@6
  void *v6; // rax@7
  char *v7; // rax@8
  __int64 v8; // r8@8
  __int64 v9; // r9@8
  int v10; // eax@9
  const char *v11; // rbp@10
  char *v12; // rax@13
  __int64 v13; // r9@13
  int v14; // eax@15
  const char *v15; // rbp@16
  char *v16; // rax@19

  if ( *nptr == 48 )
  {
    v2 = 0LL;
    v3 = 2;
    v4 = 0LL;
LABEL_4:
    if ( setvbuf(stream, (char *)v4, v3, v2) )
    {
      v10 = fileno(stream);
      if ( v10 == 1 )
      {
        v11 = "stdout";
      }
      else
      {
        v11 = "stderr";
        if ( v10 != 2 )
        {
          v11 = "stdin";
          if ( v10 )
            v11 = "unknown";
        }
      }
      v12 = dcgettext(0LL, "could not set buffering of %s to mode %s\n", 5);
      __fprintf_chk(stderr, 1LL, v12, v11, nptr, v13);
      free(v4);
    }
    return;
  }
  if ( *nptr == 76 )
  {
    v2 = 0LL;
    v3 = 1;
    v4 = 0LL;
    goto LABEL_4;
  }
  v5 = strtoul(nptr, 0LL, 10);
  v2 = v5;
  if ( v5 )
  {
    v6 = malloc(v5);
    v3 = 0;
    v4 = v6;
    if ( !v6 )
    {
      v7 = dcgettext(0LL, "failed to allocate a %lu byte stdio buffer\n", 5);
      __fprintf_chk(stderr, 1LL, v7, v2, v8, v9);
      return;
    }
    goto LABEL_4;
  }
  v14 = fileno(stream);
  if ( v14 == 1 )
  {
    v15 = "stdout";
  }
  else
  {
    v15 = "stderr";
    if ( v14 != 2 )
    {
      v15 = "stdin";
      if ( v14 )
        v15 = "unknown";
    }
  }
  v16 = dcgettext(0LL, "invalid buffering mode %s for %s\n", 5);
  ((void (__fastcall *)(struct _IO_FILE *, signed __int64, char *, char *, const char *))__fprintf_chk)(
    stderr,
    1LL,
    v16,
    nptr,
    v15);
}

void sub_9C0()
{
  char *v0; // r12@1
  char *v1; // rbp@1
  char *v2; // rbx@1

  v0 = getenv("_STDBUF_E");
  v1 = getenv("_STDBUF_I");
  v2 = getenv("_STDBUF_O");
  if ( v0 )
    start(stderr, v0);
  if ( v1 )
    start(stdin, v1);
  if ( v2 )
    start(stdout, v2);
}

int sub_A3F()
{
  char *v0; // rax@1

  v0 = &_bss_start;
  if ( &_bss_start != &_bss_start )
  {
    v0 = (char *)&ITM_deregisterTMCloneTable;
    if ( &ITM_deregisterTMCloneTable )
      LODWORD(v0) = ITM_deregisterTMCloneTable();
  }
  return (unsigned __int64)v0;
}

int sub_A61()
{
  return 0;
}

int sub_A9A()
{
  int result; // eax@6

  if ( !_bss_start )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(off_201058);
    while ( qword_201068 < (unsigned __int64)(((&unk_200E10 - (_UNKNOWN *)&qword_200E08) >> 3) - 1) )
      (*(&qword_200E08 + ++qword_201068))();
    result = sub_A3F();
    _bss_start = 1;
  }
  return result;
}

int sub_B09()
{
  return sub_A61();
}

__int64 __fastcall sub_B0E(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_200DF8;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
