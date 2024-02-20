
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
  
  do {
    if ((9 < y_23) && (((x_22 + -1) * x_22 & 1U) != 0)) goto LAB_00401302;
    while ((sVar2 = fread(local_4028,1,0x4000,(FILE *)in), 9 < y_23 &&
           (((x_22 + -1) * x_22 & 1U) != 0))) {
LAB_00401302:
      fread(local_4028,1,0x4000,(FILE *)in);
    }
    iVar1 = ferror((FILE *)in);
    if (iVar1 != 0) {
      perror("fread");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if ((int)sVar2 == 0) {
      fclose((FILE *)in);
      iVar1 = gzclose(out);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        error("failed gzclose");
      }
      return;
    }
    iVar1 = gzwrite(out,local_4028,sVar2 & 0xffffffff);
  } while (iVar1 == (int)sVar2);
  msg = (char *)gzerror(out,local_402c);
                    /* WARNING: Subroutine does not return */
  error(msg);
}


void gz_uncompress(gzFile in,FILE *out)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  char *msg;
  undefined *puVar5;
  undefined auStack_38 [8];
  
  puVar1 = auStack_38;
  do {
    puVar5 = puVar1;
    puVar1 = puVar5 + -0x4010;
  } while (9 < y_25 && ((x_24 + -1) * x_24 & 1U) != 0);
  while( true ) {
    *(undefined8 *)(puVar5 + -0x4018) = 0x401410;
    uVar2 = gzread(in,puVar5 + -0x4000,0x4000);
    if ((int)uVar2 < 0) {
      *(undefined8 *)(puVar5 + -0x4018) = 0x4014bc;
      msg = (char *)gzerror(in,puVar5 + -0x4010);
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar5 + -0x4018) = 0x4014c4;
      error(msg);
    }
    if ((9 < y_25) && (((x_24 + -1) * x_24 & 1U) != 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (uVar2 == 0) break;
    *(undefined8 *)(puVar5 + -0x4018) = 0x40144e;
    sVar4 = fwrite(puVar5 + -0x4000,1,(ulong)uVar2,(FILE *)out);
    if ((uint)sVar4 != uVar2) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar5 + -0x4018) = 0x40145d;
      error("failed fwrite");
    }
  }
  *(undefined8 *)(puVar5 + -0x4018) = 0x40146a;
  iVar3 = fclose((FILE *)out);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar5 + -0x4018) = 0x4014ce;
    error("failed fclose");
  }
  *(undefined8 *)(puVar5 + -0x4018) = 0x401476;
  iVar3 = gzclose(in);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar5 + -0x4018) = 0x4014d8;
    error("failed gzclose");
  }
  if ((9 < y_25) && (((x_24 + -1) * x_24 & 1U) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
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
  if (in == (FILE *)0x0) {
    perror(file);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  out = (gzFile)gzopen(acStack_418,mode);
  if (out == (gzFile)0x0) {
    fprintf(stderr,"%s: can\'t gzopen %s\n",prog,acStack_418);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if ((((x_26 + -1) * x_26 & 1U) != 0) && (9 < y_27)) goto LAB_004015f2;
  while( true ) {
    gz_compress((FILE *)in,out);
    unlink(file);
    if ((y_27 < 10) || (((x_26 + -1) * x_26 & 1U) == 0)) break;
LAB_004015f2:
    gz_compress((FILE *)in,out);
    unlink(file);
  }
  return;
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
  undefined8 uStack_430;
  char acStack_428 [1024];
  
  __filename = acStack_428;
  uStack_430 = 0x401638;
  sVar2 = strlen(file);
  if (0x3ff < sVar2 + 3) {
    uStack_430 = 0x401736;
    fprintf(stderr,"%s: filename too long\n",prog);
                    /* WARNING: Subroutine does not return */
    uStack_430 = 0x401740;
    exit(1);
  }
  uStack_430 = 0x401665;
  snprintf(acStack_428,0x400,"%s",file);
  if (3 < sVar2) {
    if ((9 < y_29) && (((x_28 + -1) * x_28 & 1U) != 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uStack_430 = 0x4016a1;
    iVar1 = strcmp(file + (sVar2 - 3),".gz");
    if (iVar1 == 0) {
      acStack_428[sVar2 - 3] = '\0';
      __name = file;
      goto LAB_004016c5;
    }
  }
  uStack_430 = 0x4016c2;
  snprintf(acStack_428 + sVar2,0x400 - sVar2,"%s",&DAT_00402059);
  __filename = file;
  __name = acStack_428;
LAB_004016c5:
  uStack_430 = 0x4016d2;
  in = (gzFile)gzopen(__name,&DAT_0040205d);
  if (in == (gzFile)0x0) {
    uStack_430 = 0x40175d;
    fprintf(stderr,"%s: can\'t gzopen %s\n",prog,__name);
                    /* WARNING: Subroutine does not return */
    uStack_430 = 0x401767;
    exit(1);
  }
  uStack_430 = 0x4016e7;
  out = fopen(__filename,"wb");
  if (out == (FILE *)0x0) {
    uStack_430 = 0x40176f;
    perror(file);
                    /* WARNING: Subroutine does not return */
    uStack_430 = 0x401779;
    exit(1);
  }
  if ((((x_28 + -1) * x_28 & 1U) != 0) && (9 < y_29)) goto LAB_004017a6;
  while( true ) {
    uStack_430 = 0x401784;
    gz_uncompress(in,(FILE *)out);
    uStack_430 = 0x40178c;
    unlink(__name);
    if ((y_29 < 10) || (((x_28 + -1) * x_28 & 1U) == 0)) break;
LAB_004017a6:
    uStack_430 = 0x4017b1;
    gz_uncompress(in,(FILE *)out);
    uStack_430 = 0x4017b9;
    unlink(__name);
  }
  return;
}


int main(int argc,char **argv)

{
  char **ppcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  gzFile pgVar5;
  FILE *in;
  undefined4 in_register_0000003c;
  char *__s;
  char *pcVar6;
  char *__s_00;
  char *__s1;
  char **ppcVar7;
  int iVar8;
  ulong uVar9;
  undefined auStack_58 [8];
  uint local_50;
  int local_4c;
  ulong local_48;
  uint local_40;
  uint local_3c;
  char *local_38;
  
  __s_00 = auStack_58;
  local_38 = (char *)CONCAT44(in_register_0000003c,argc);
  __s = auStack_58;
  if ((9 < y_31) && (__s = auStack_58, ((x_30 - 1) * x_30 & 1) != 0)) goto LAB_0040186a;
  while( true ) {
    __s_00 = __s + -0x20;
    local_40 = 0;
    *(undefined8 *)(__s + -0x28) = 0x40182c;
    snprintf(__s_00,0x14,"%s",&DAT_00402078);
    prog = *argv;
    pcVar6 = *argv;
    *(undefined8 *)(__s + -0x28) = 0x401846;
    pcVar4 = strrchr(pcVar6,0x2f);
    uVar9 = (ulong)x_30;
    local_50 = (x_30 - 1) * x_30;
    local_4c = y_31;
    if ((y_31 < 10) || ((local_50 & 1) == 0)) break;
LAB_0040186a:
    __s = __s_00 + -0x20;
    *(undefined8 *)(__s_00 + -0x28) = 0x40188a;
    snprintf(__s,0x14,"%s",&DAT_00402078);
    prog = *argv;
  }
  __s1 = pcVar4 + 1;
  if (pcVar4 == (char *)0x0) {
    __s1 = pcVar6;
  }
  *(undefined8 *)(__s + -0x28) = 0x4018b4;
  iVar2 = strcmp(__s1,"gunzip");
  if (iVar2 == 0) {
    local_3c = 1;
  }
  else {
    *(undefined8 *)(__s + -0x28) = 0x4018c5;
    iVar2 = strcmp(__s1,"zcat");
    local_40 = (uint)(iVar2 == 0);
    local_3c = (uint)(iVar2 == 0);
  }
  iVar2 = (int)local_38 + -1;
  ppcVar7 = argv + 1;
  if (1 < (int)local_38) {
    local_48 = uVar9;
    local_38 = __s_00;
    ppcVar1 = ppcVar7;
    do {
      while( true ) {
        iVar3 = iVar2;
        ppcVar7 = ppcVar1;
        pcVar6 = *ppcVar7;
        *(undefined8 *)(__s + -0x28) = 0x401914;
        iVar2 = strcmp(pcVar6,"-c");
        if (iVar2 == 0) break;
        *(undefined8 *)(__s + -0x28) = 0x401929;
        iVar2 = strcmp(pcVar6,"-d");
        if (iVar2 == 0) {
          local_3c = 1;
          ppcVar1 = ppcVar7 + 1;
          iVar2 = iVar3 + -1;
          if (iVar3 < 2) {
            ppcVar7 = ppcVar7 + 1;
            iVar2 = iVar3 + -1;
            local_3c = 1;
            __s_00 = local_38;
            uVar9 = local_48;
            goto LAB_00401a56;
          }
        }
        else {
          *(undefined8 *)(__s + -0x28) = 0x40193e;
          iVar2 = strcmp(pcVar6,"-f");
          if (iVar2 == 0) {
            local_38[3] = 'f';
          }
          else {
            *(undefined8 *)(__s + -0x28) = 0x40194f;
            iVar2 = strcmp(pcVar6,"-h");
            if (iVar2 == 0) {
              local_38[3] = 'h';
            }
            else {
              *(undefined8 *)(__s + -0x28) = 0x401960;
              iVar2 = strcmp(pcVar6,"-r");
              if (iVar2 == 0) {
                local_38[3] = 'R';
              }
              else {
                __s_00 = local_38;
                uVar9 = local_48;
                iVar2 = iVar3;
                if (((*pcVar6 != '-') || (8 < (byte)(pcVar6[1] - 0x31U))) || (pcVar6[2] != '\0'))
                goto LAB_00401a56;
                local_38[2] = pcVar6[1];
              }
            }
          }
          iVar2 = iVar3 + -1;
          ppcVar7 = ppcVar7 + 1;
          ppcVar1 = ppcVar7;
          __s_00 = local_38;
          uVar9 = local_48;
          if (iVar3 < 2) goto LAB_00401a56;
        }
      }
      local_40 = 1;
      ppcVar1 = ppcVar7 + 1;
      iVar2 = iVar3 + -1;
    } while (1 < iVar3);
    ppcVar7 = ppcVar7 + 1;
    iVar2 = iVar3 + -1;
    local_40 = 1;
    __s_00 = local_38;
    uVar9 = local_48;
  }
LAB_00401a56:
  if (__s_00[3] == ' ') {
    do {
    } while (9 < local_4c && (local_50 & 1) != 0);
    __s_00[3] = '\0';
  }
  iVar3 = local_4c;
  if (iVar2 == 0) {
    if (local_3c == 0) {
      while( true ) {
        *(undefined8 *)(__s + -0x28) = 0x401d82;
        iVar2 = fileno(stdout);
        *(undefined8 *)(__s + -0x28) = 0x401d8c;
        pgVar5 = (gzFile)gzdopen(iVar2,__s_00);
        if ((y_31 < 10) || (((x_30 - 1) * x_30 & 1) == 0)) break;
        *(undefined8 *)(__s + -0x28) = 0x401d6c;
        iVar2 = fileno(stdout);
        *(undefined8 *)(__s + -0x28) = 0x401d76;
        gzdopen(iVar2,__s_00);
      }
      if (pgVar5 == (gzFile)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(__s + -0x28) = 0x401db8;
        error("can\'t gzdopen stdout");
      }
      while( true ) {
        *(undefined8 *)(__s + -0x28) = 0x401dde;
        gz_compress((FILE *)stdin,pgVar5);
        if ((y_31 < 10) || (((x_30 - 1) * x_30 & 1) == 0)) break;
        *(undefined8 *)(__s + -0x28) = 0x401dcf;
        gz_compress((FILE *)stdin,pgVar5);
      }
    }
    else {
      while( true ) {
        *(undefined8 *)(__s + -0x28) = 0x401d14;
        iVar2 = fileno(stdin);
        *(undefined8 *)(__s + -0x28) = 0x401d20;
        pgVar5 = (gzFile)gzdopen(iVar2,&DAT_0040205d);
        if ((y_31 < 10) || (((x_30 - 1) * x_30 & 1) == 0)) break;
        *(undefined8 *)(__s + -0x28) = 0x401cfc;
        iVar2 = fileno(stdin);
        *(undefined8 *)(__s + -0x28) = 0x401d08;
        gzdopen(iVar2,&DAT_0040205d);
      }
      if (pgVar5 == (gzFile)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(__s + -0x28) = &UNK_00401e1d;
        error("can\'t gzdopen stdin");
      }
      *(undefined8 *)(__s + -0x28) = 0x401d52;
      gz_uncompress(pgVar5,(FILE *)stdout);
    }
  }
  else {
    do {
      iVar8 = (int)uVar9;
      if (local_3c == 0) {
        if ((9 < iVar3) && (((iVar8 + -1) * iVar8 & 1U) != 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        pcVar6 = *ppcVar7;
        if (local_40 == 0) {
          while( true ) {
            *(undefined8 *)(__s + -0x28) = 0x401b66;
            file_compress(pcVar6,__s_00);
            if ((y_31 < 10) || (((x_30 - 1) * x_30 & 1) == 0)) break;
            pcVar6 = *ppcVar7;
            *(undefined8 *)(__s + -0x28) = 0x401b5b;
            file_compress(pcVar6,__s_00);
            pcVar6 = *ppcVar7;
          }
        }
        else {
          *(undefined8 *)(__s + -0x28) = 0x401af9;
          in = fopen(pcVar6,"rb");
          if (in == (FILE *)0x0) {
            if (y_31 < 10) goto LAB_00401bf0;
            if (((x_30 - 1) * x_30 & 1) == 0) goto LAB_00401bf0;
            do {
              pcVar6 = *ppcVar7;
              *(undefined8 *)(__s + -0x28) = 0x401bf0;
              perror(pcVar6);
LAB_00401bf0:
              pcVar6 = *ppcVar7;
              *(undefined8 *)(__s + -0x28) = 0x401bf8;
              perror(pcVar6);
            } while ((9 < y_31) && (((x_30 - 1) * x_30 & 1) != 0));
          }
          else {
            *(undefined8 *)(__s + -0x28) = 0x401b11;
            iVar3 = fileno(stdout);
            *(undefined8 *)(__s + -0x28) = 0x401b1b;
            pgVar5 = (gzFile)gzdopen(iVar3,__s_00);
            if (pgVar5 == (gzFile)0x0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(__s + -0x28) = 0x401e13;
              error("can\'t gzdopen stdout");
            }
            if ((9 < y_31) && (((x_30 - 1) * x_30 & 1) != 0)) goto LAB_00401c75;
            while( true ) {
              *(undefined8 *)(__s + -0x28) = 0x401c5b;
              gz_compress((FILE *)in,pgVar5);
              if ((y_31 < 10) || (((x_30 - 1) * x_30 & 1) == 0)) break;
LAB_00401c75:
              *(undefined8 *)(__s + -0x28) = 0x401c80;
              gz_compress((FILE *)in,pgVar5);
            }
          }
        }
      }
      else {
        pcVar6 = *ppcVar7;
        if (local_40 == 0) {
          if ((9 < iVar3) && (((iVar8 + -1) * iVar8 & 1U) != 0)) goto LAB_00401c42;
          while( true ) {
            *(undefined8 *)(__s + -0x28) = 0x401c28;
            file_uncompress(pcVar6);
            if ((y_31 < 10) || (((x_30 - 1) * x_30 & 1) == 0)) break;
LAB_00401c42:
            *(undefined8 *)(__s + -0x28) = 0x401c4a;
            file_uncompress(pcVar6);
          }
        }
        else {
          *(undefined8 *)(__s + -0x28) = 0x401ab0;
          pgVar5 = (gzFile)gzopen(pcVar6,&DAT_0040205d);
          if (pgVar5 == (gzFile)0x0) {
            pcVar6 = *ppcVar7;
            *(undefined8 *)(__s + -0x28) = 0x401bc9;
            fprintf(stderr,"%s: can\'t gzopen %s\n",prog,pcVar6);
          }
          else {
            *(undefined8 *)(__s + -0x28) = 0x401ac8;
            gz_uncompress(pgVar5,(FILE *)stdout);
          }
        }
      }
      uVar9 = (ulong)x_30;
      if ((9 < y_31) && (((x_30 - 1) * x_30 & 1) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      ppcVar7 = ppcVar7 + 1;
      iVar2 = iVar2 + -1;
      iVar3 = y_31;
    } while (iVar2 != 0);
  }
  return 0;
}

