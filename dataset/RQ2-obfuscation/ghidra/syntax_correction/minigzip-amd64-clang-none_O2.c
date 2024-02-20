#include "decompile_ghidra_obfuscated.h"

void _dl_relocate_static_pie(void)

{
  return;
}


void error(char *msg)

{
  fprintf(stderr,"%s: %s\n",prog,msg);
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void gz_compress(FILE *in,gzFile out)

{
  int iVar1;
  size_t sVar2;
  char *msg;
  int err;
  char buf [16384];
  undefined local_402c [4];
  undefined local_4028 [16392];
  
  while( true ) {
    sVar2 = fread(local_4028,1,0x4000,(FILE *)in);
    iVar1 = ferror((FILE *)in);
    if (iVar1 != 0) {
      perror("fread");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if ((int)sVar2 == 0) break;
    iVar1 = gzwrite(out,local_4028,sVar2 & 0xffffffff);
    if (iVar1 != (int)sVar2) {
      msg = (char *)gzerror(out,local_402c);
                    /* WARNING: Subroutine does not return */
      error(msg);
    }
  }
  fclose((FILE *)in);
  iVar1 = gzclose(out);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  error("failed gzclose");
}


void gz_uncompress(gzFile in,FILE *out)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  char *msg;
  int err;
  char buf [16384];
  undefined local_402c [4];
  undefined local_4028 [16392];
  
  while( true ) {
    uVar1 = gzread(in,local_4028,0x4000);
    if ((int)uVar1 < 0) {
      msg = (char *)gzerror(in,local_402c);
                    /* WARNING: Subroutine does not return */
      error(msg);
    }
    if (uVar1 == 0) break;
    sVar3 = fwrite(local_4028,1,(ulong)uVar1,(FILE *)out);
    if ((uint)sVar3 != uVar1) {
                    /* WARNING: Subroutine does not return */
      error("failed fwrite");
    }
  }
  iVar2 = fclose((FILE *)out);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    error("failed fclose");
  }
  iVar2 = gzclose(in);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  error("failed gzclose");
}


void file_compress(char *file,char *mode)

{
  size_t sVar1;
  FILE *in;
  gzFile out;
  char outfile [1024];
  char acStack_418 [1024];
  
  sVar1 = strlen(file);
  if (0x3ff < sVar1 + 3) {
    fprintf(stderr,"%s: filename too long\n",prog);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  snprintf(acStack_418,0x400,"%s%s",file,&DAT_00402059);
  in = fopen(file,"rb");
  if (in != (FILE *)0x0) {
    out = (gzFile)gzopen(acStack_418,mode);
    if (out != (gzFile)0x0) {
      gz_compress((FILE *)in,out);
      unlink(file);
      return;
    }
    fprintf(stderr,"%s: can\'t gzopen %s\n",prog,acStack_418);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  perror(file);
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void file_uncompress(char *file)

{
  int iVar1;
  size_t sVar2;
  gzFile in;
  FILE *out;
  char *__filename;
  char *__name;
  char buf [1024];
  undefined uStack_430;
  char acStack_428 [1032];
  
  __filename = acStack_428;
  uStack_430 = 0x4014f6;
  sVar2 = strlen(file);
  if (0x3ff < sVar2 + 3) {
    uStack_430 = 0x4015cc;
    fprintf(stderr,"%s: filename too long\n",prog);
                    /* WARNING: Subroutine does not return */
    uStack_430 = 0x4015d6;
    exit(1);
  }
  uStack_430 = 0x401523;
  snprintf(acStack_428,0x400,"%s",file);
  if (3 < sVar2) {
    uStack_430 = 0x401538;
    iVar1 = strcmp(file + (sVar2 - 3),".gz");
    if (iVar1 == 0) {
      acStack_428[sVar2 - 3] = '\0';
      __name = file;
      goto LAB_0040155c;
    }
  }
  uStack_430 = 0x401559;
  snprintf(acStack_428 + sVar2,0x400 - sVar2,"%s",&DAT_00402059);
  __filename = file;
  __name = acStack_428;
LAB_0040155c:
  uStack_430 = 0x401569;
  in = (gzFile)gzopen(__name,&DAT_0040205d);
  if (in == (gzFile)0x0) {
    uStack_430 = 0x4015f3;
    fprintf(stderr,"%s: can\'t gzopen %s\n",prog,__name);
                    /* WARNING: Subroutine does not return */
    uStack_430 = 0x4015fd;
    exit(1);
  }
  uStack_430 = 0x40157e;
  out = fopen(__filename,"wb");
  if (out != (FILE *)0x0) {
    uStack_430 = 0x40158e;
    gz_uncompress(in,(FILE *)out);
    uStack_430 = 0x401596;
    unlink(__name);
    return;
  }
  uStack_430 = 0x401605;
  perror(file);
                    /* WARNING: Subroutine does not return */
  uStack_430 = 0x40160f;
  exit(1);
}


int main(int argc,char **argv)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  gzFile pgVar7;
  FILE *in;
  char **ppcVar8;
  char *__s1;
  bool bVar9;
  char acStack_48 [2];
  char local_46;
  char local_45;
  
  bVar2 = false;
  snprintf(acStack_48,0x14,"%s",&DAT_00402078);
  prog = *argv;
  pcVar1 = *argv;
  pcVar6 = strrchr(pcVar1,0x2f);
  __s1 = pcVar6 + 1;
  if (pcVar6 == (char *)0x0) {
    __s1 = pcVar1;
  }
  iVar4 = strcmp(__s1,"gunzip");
  if (iVar4 == 0) {
    bVar9 = true;
  }
  else {
    iVar4 = strcmp(__s1,"zcat");
    bVar9 = iVar4 == 0;
    bVar2 = bVar9;
  }
  iVar4 = argc + -1;
  ppcVar8 = argv + 1;
  if (1 < argc) {
    do {
      pcVar1 = *ppcVar8;
      iVar5 = strcmp(pcVar1,"-c");
      if (iVar5 == 0) {
        bVar2 = true;
        cVar3 = local_46;
      }
      else {
        iVar5 = strcmp(pcVar1,"-d");
        if (iVar5 == 0) {
          bVar9 = true;
          cVar3 = local_46;
        }
        else {
          iVar5 = strcmp(pcVar1,"-f");
          if (iVar5 == 0) {
            local_45 = 'f';
            cVar3 = local_46;
          }
          else {
            iVar5 = strcmp(pcVar1,"-h");
            if (iVar5 == 0) {
              local_45 = 'h';
              cVar3 = local_46;
            }
            else {
              iVar5 = strcmp(pcVar1,"-r");
              if (iVar5 == 0) {
                local_45 = 'R';
                cVar3 = local_46;
              }
              else {
                if (*pcVar1 != '-') {
                  iVar4 = argc + -1;
                  if (local_45 != ' ') goto LAB_0040177f;
                  goto LAB_0040177a;
                }
                if ((8 < (byte)(pcVar1[1] - 0x31U)) || (cVar3 = pcVar1[1], pcVar1[2] != '\0'))
                break;
              }
            }
          }
        }
      }
      local_46 = cVar3;
      iVar4 = iVar4 + -1;
      ppcVar8 = ppcVar8 + 1;
      argc = argc + -1;
    } while (1 < argc);
  }
  if (local_45 == ' ') {
LAB_0040177a:
    local_45 = '\0';
  }
LAB_0040177f:
  if (iVar4 == 0) {
    if (bVar9) {
      iVar4 = fileno(stdin);
      pgVar7 = (gzFile)gzdopen(iVar4,&DAT_0040205d);
      if (pgVar7 == (gzFile)0x0) {
                    /* WARNING: Subroutine does not return */
        error("can\'t gzdopen stdin");
      }
      gz_uncompress(pgVar7,(FILE *)stdout);
    }
    else {
      iVar4 = fileno(stdout);
      pgVar7 = (gzFile)gzdopen(iVar4,acStack_48);
      if (pgVar7 == (gzFile)0x0) {
LAB_004018e2:
                    /* WARNING: Subroutine does not return */
        error("can\'t gzdopen stdout");
      }
      gz_compress((FILE *)stdin,pgVar7);
    }
  }
  else {
    do {
      pcVar1 = *ppcVar8;
      if (bVar9) {
        if (bVar2) {
          pgVar7 = (gzFile)gzopen(pcVar1,&DAT_0040205d);
          if (pgVar7 == (gzFile)0x0) {
            fprintf(stderr,"%s: can\'t gzopen %s\n",prog,*ppcVar8);
          }
          else {
            gz_uncompress(pgVar7,(FILE *)stdout);
          }
        }
        else {
          file_uncompress(pcVar1);
        }
      }
      else if (bVar2) {
        in = fopen(pcVar1,"rb");
        if (in == (FILE *)0x0) {
          perror(*ppcVar8);
        }
        else {
          iVar5 = fileno(stdout);
          pgVar7 = (gzFile)gzdopen(iVar5,acStack_48);
          if (pgVar7 == (gzFile)0x0) goto LAB_004018e2;
          gz_compress((FILE *)in,pgVar7);
        }
      }
      else {
        file_compress(pcVar1,acStack_48);
      }
      ppcVar8 = ppcVar8 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

