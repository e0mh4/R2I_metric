
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


/* WARNING: Removing unreachable block (ram,0x004012e2) */

void gz_compress(FILE *in,gzFile out)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *msg;
  int err;
  char buf [16384];
  int local_4058;
  undefined local_4054 [4];
  undefined *local_4050;
  undefined *local_4048;
  undefined *local_4040;
  undefined local_4038 [16392];
  
  local_4048 = local_4054;
  iVar2 = -0x4075fc4;
  local_4050 = local_4038;
  do {
    do {
      if (iVar2 != -0x4075fc4) {
        if (iVar2 == 0x27a96ae2) {
          iVar1 = gzwrite(out,local_4040,local_4058);
          iVar2 = -0x4075fc4;
          if (iVar1 == local_4058) goto joined_r0x004013d0;
          iVar2 = -0x6baaf079;
          goto joined_r0x004013d0;
        }
        if (iVar2 == 0x50314184) {
          iVar2 = 0x27a96ae2;
          if (local_4058 != 0) goto joined_r0x004013d0;
          iVar2 = -0x6c68d3a6;
          goto joined_r0x004013d0;
        }
LAB_00401420:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      local_4040 = local_4038;
      sVar3 = fread(local_4038,1,0x4000,(FILE *)in);
      local_4058 = (int)sVar3;
      iVar1 = ferror((FILE *)in);
      iVar2 = 0x50314184;
      if (iVar1 != 0) {
        iVar2 = -0x2dceffc3;
      }
    } while (-0x4075fc5 < iVar2);
    do {
      if (-0x422496f5 < iVar2) {
        if (iVar2 == -0x422496f4) {
          return;
        }
        if (iVar2 == -0x2dceffc3) {
          perror("fread");
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        if (iVar2 == -0x8c36a25) {
                    /* WARNING: Subroutine does not return */
          error("failed gzclose");
        }
        goto LAB_00401420;
      }
      if (iVar2 != -0x6c68d3a6) {
        if (iVar2 == -0x6baaf079) {
          msg = (char *)gzerror(out,local_4054);
                    /* WARNING: Subroutine does not return */
          error(msg);
        }
        goto LAB_00401420;
      }
      fclose((FILE *)in);
      iVar1 = gzclose(out);
      iVar2 = -0x422496f4;
      if (iVar1 != 0) {
        iVar2 = -0x8c36a25;
      }
joined_r0x004013d0:
    } while (iVar2 < -0x4075fc4);
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x004014a2) */

void gz_uncompress(gzFile in,FILE *out)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  char *msg;
  int err;
  char buf [16384];
  uint local_4058;
  undefined local_4054 [4];
  undefined *local_4050;
  undefined *local_4048;
  undefined *local_4040;
  undefined local_4038 [16392];
  
  local_4048 = local_4054;
  uVar1 = 0xdfa259c6;
  local_4050 = local_4038;
LAB_004014f0:
  do {
    if ((int)uVar1 < -0x3ce52eb) {
      if ((int)uVar1 < -0x205da63a) {
        if (uVar1 == 0xac2c3bbd) {
                    /* WARNING: Subroutine does not return */
          error("failed gzclose");
        }
        if (uVar1 == 0xced43fcc) {
          msg = (char *)gzerror(in,local_4054);
                    /* WARNING: Subroutine does not return */
          error(msg);
        }
      }
      else {
        if (uVar1 == 0xdfa259c6) {
          local_4040 = local_4038;
          local_4058 = gzread(in,local_4038,0x4000);
          uVar1 = ((int)local_4058 >> 0x1f & 0xca92cdd6U) + 0x44171f6;
          goto joined_r0x00401521;
        }
        if (uVar1 == 0xfac93b5e) {
                    /* WARNING: Subroutine does not return */
          error("failed fclose");
        }
      }
LAB_00401640:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (uVar1 != 0x44171f6) {
      if (uVar1 == 0x1c57cb35) {
        iVar2 = gzclose(in);
        uVar1 = 0x458bc624;
        if (iVar2 == 0) goto joined_r0x00401521;
        uVar1 = 0xac2c3bbd;
        goto joined_r0x00401521;
      }
      if (uVar1 == 0xfc31ad15) {
                    /* WARNING: Subroutine does not return */
        error("failed fwrite");
      }
      goto LAB_00401640;
    }
    uVar1 = 0x2dfd916f;
    if (local_4058 == 0) {
      uVar1 = 0x6b7e2642;
    }
    if (0x2dfd916e < uVar1) {
      do {
        while (uVar1 == 0x2dfd916f) {
          sVar3 = fwrite(local_4040,1,(ulong)local_4058,(FILE *)out);
          uVar1 = 0xdfa259c6;
          if ((uint)sVar3 != local_4058) {
            uVar1 = 0xfc31ad15;
          }
joined_r0x00401521:
          if ((int)uVar1 < 0x2dfd916f) goto LAB_004014f0;
        }
        if (uVar1 == 0x458bc624) {
          return;
        }
        if (uVar1 != 0x6b7e2642) goto LAB_00401640;
        iVar2 = fclose((FILE *)out);
        uVar1 = 0x1c57cb35;
        if (iVar2 != 0) {
          uVar1 = 0xfac93b5e;
        }
      } while (0x2dfd916e < (int)uVar1);
    }
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x004016b1) */

void file_compress(char *file,char *mode)

{
  int iVar1;
  size_t sVar2;
  char outfile [1024];
  char *local_460;
  FILE *local_450;
  gzFile local_448;
  char local_438 [1032];
  
  sVar2 = strlen(file);
  iVar1 = 0x79c0f20;
  do {
    if (iVar1 < 0x79c0f20) {
      if (iVar1 != 0x5350a35) {
        if (iVar1 == 0x137de2e) {
          perror(file);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
LAB_00401820:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      snprintf(local_438,0x400,"%s%s",file,&DAT_00403059);
      local_450 = fopen(file,"rb");
      iVar1 = -0x3b4257e0;
      local_460 = local_438;
      if (local_450 == (FILE *)0x0) {
        iVar1 = 0x137de2e;
      }
    }
    else {
      if (iVar1 != 0x79c0f20) {
        if (iVar1 == 0x226711de) {
          fprintf(stderr,"%s: can\'t gzopen %s\n",prog,local_460);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        goto LAB_00401820;
      }
      iVar1 = 0x5350a35;
      if (0x3ff < sVar2 + 3) {
        iVar1 = -0x48e44b5d;
      }
    }
    while (iVar1 < 0x137de2e) {
      if (iVar1 == -0x7f6549f8) {
        gz_compress((FILE *)local_450,local_448);
        unlink(file);
        return;
      }
      if (iVar1 != -0x3b4257e0) {
        if (iVar1 == -0x48e44b5d) {
          fprintf(stderr,"%s: filename too long\n",prog);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        goto LAB_00401820;
      }
      local_448 = (gzFile)gzopen(local_460,mode);
      iVar1 = -0x7f6549f8;
      if (local_448 == (gzFile)0x0) {
        iVar1 = 0x226711de;
      }
    }
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401a7f) */
/* WARNING: Removing unreachable block (ram,0x0040197d) */

void file_uncompress(char *file)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *unaff_R12;
  char *unaff_R13;
  bool bVar4;
  bool bVar5;
  char buf [1024];
  char *local_470;
  char *local_468;
  gzFile local_458;
  FILE *local_450;
  char *local_440;
  char local_438 [1032];
  
  sVar3 = strlen(file);
  iVar2 = -0x4fdcb89f;
LAB_004019d0:
  do {
    if (iVar2 < -0x3c4b459d) {
      if (iVar2 == -0x6f3da934) {
        local_470[sVar3 - 3] = '\0';
        iVar2 = 0x62cd02d8;
        unaff_R12 = file;
        unaff_R13 = local_470;
        goto LAB_004018db;
      }
      if (iVar2 != -0x4fdcb89f) {
        if (iVar2 != -0x5fdbbb43) goto joined_r0x004018d5;
        fprintf(stderr,"%s: can\'t gzopen %s\n",prog,local_468);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      bVar4 = sVar3 + 3 < 0x3ff;
      bVar5 = sVar3 + 3 == 0x3ff;
      iVar2 = -0x21c1e07e;
      iVar1 = 0x2cb84a8b;
    }
    else {
      if (iVar2 == -0x3c4b459d) {
        local_450 = fopen(local_440,"wb");
        iVar2 = 0x23144b8b;
        if (local_450 != (FILE *)0x0) goto joined_r0x004018d5;
        iVar2 = 0x900ec49;
        goto joined_r0x004018d5;
      }
      if (iVar2 != -0x21c1e07e) goto joined_r0x004018d5;
      snprintf(local_438,0x400,"%s",file);
      bVar4 = sVar3 < 3;
      bVar5 = sVar3 == 3;
      iVar2 = -0x1e053486;
      iVar1 = 0x76d6b815;
      local_470 = local_438;
    }
    if (!bVar4 && !bVar5) {
      iVar2 = iVar1;
    }
    while (-0x1e053487 < iVar2) {
LAB_004018db:
      while( true ) {
        while (iVar2 < 0x2cb84a8b) {
          if (iVar2 != -0x1e053486) {
            if (iVar2 == 0x23144b8b) {
              gz_uncompress(local_458,(FILE *)local_450);
              unlink(local_468);
              return;
            }
            if (iVar2 == 0x900ec49) {
              perror(file);
                    /* WARNING: Subroutine does not return */
              exit(1);
            }
            goto joined_r0x004018d5;
          }
          snprintf(local_470 + sVar3,0x400 - sVar3,"%s",&DAT_00403059);
          unaff_R12 = local_470;
          unaff_R13 = file;
          iVar2 = 0x62cd02d8;
        }
        if (iVar2 == 0x62cd02d8) break;
        if (iVar2 == 0x76d6b815) {
          iVar1 = strcmp(file + (sVar3 - 3),".gz");
          iVar2 = -0x1e053486;
          if (iVar1 == 0) {
            iVar2 = -0x6f3da934;
          }
        }
        else if (iVar2 == 0x2cb84a8b) {
          fprintf(stderr,"%s: filename too long\n",prog);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
joined_r0x004018d5:
        if (iVar2 < -0x1e053486) goto LAB_004019d0;
      }
      local_458 = (gzFile)gzopen(unaff_R12,&DAT_0040305d);
      iVar2 = -0x3c4b459d;
      local_468 = unaff_R12;
      local_440 = unaff_R13;
      if (local_458 == (gzFile)0x0) {
        iVar2 = -0x5fdbbb43;
      }
    }
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401f7e) */
/* WARNING: Removing unreachable block (ram,0x00402092) */
/* WARNING: Removing unreachable block (ram,0x0040230b) */
/* WARNING: Removing unreachable block (ram,0x00402538) */
/* WARNING: Removing unreachable block (ram,0x00402401) */
/* WARNING: Removing unreachable block (ram,0x004022ca) */
/* WARNING: Removing unreachable block (ram,0x0040236d) */
/* WARNING: Removing unreachable block (ram,0x00401e41) */
/* WARNING: Removing unreachable block (ram,0x004024ec) */
/* WARNING: Removing unreachable block (ram,0x00401e99) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int main(int argc,char **argv)

{
  char **__s;
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char **ppcVar5;
  uint uVar6;
  int unaff_R12D;
  char **unaff_R13;
  int unaff_R14D;
  int unaff_R15D;
  bool bVar7;
  char local_102;
  char local_101;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  char *local_f0;
  int local_e8;
  int local_e4;
  char **local_e0;
  int local_d4;
  char **local_c8;
  char **local_c0;
  char **local_b8;
  char **local_b0;
  int local_a4;
  char *local_88;
  gzFile local_80;
  gzFile local_78;
  char *local_70;
  gzFile local_68;
  FILE *local_60;
  gzFile local_58;
  char **local_50;
  char local_48 [2];
  char local_46;
  char local_45 [21];
  
  local_c8 = (char **)&DAT_00403078;
  snprintf(local_48,0x14,"%s");
  prog = *argv;
  __s = (char **)*argv;
  pcVar4 = strrchr((char *)__s,0x2f);
  uVar3 = 0x7f61d207;
  local_f8 = (int)local_c8;
  iVar2 = argc + -1;
  local_e8 = local_f8;
  local_c0 = local_c8;
  do {
    while (0x4d60afa1 < (int)uVar3) {
      if ((int)uVar3 < 0x63a96122) {
        if ((int)uVar3 < 0x5502c990) {
          if (uVar3 == 0x4d60afa2) {
            iVar1 = strcmp(local_f0,"-f");
            bVar7 = iVar1 == 0;
            uVar3 = 0x77049d4e;
            uVar6 = 0xa4da6fed;
            goto LAB_004020a0;
          }
          if (uVar3 != 0x53636621) {
            if (uVar3 != 0x53d46e45) goto joined_r0x00402439;
            file_compress(*local_e0,local_48);
            goto LAB_004024dc;
          }
          uVar3 = 0x1d1f5279;
          unaff_R15D = local_fc;
          unaff_R12D = 1;
        }
        else {
          if (uVar3 == 0x5502c990) {
            file_uncompress(local_70);
            goto LAB_004024dc;
          }
          if (uVar3 == 0x567554b9) {
            bVar7 = local_101 == '\0';
            uVar3 = 0x53d46e45;
            uVar6 = 0x887571bd;
            goto LAB_00402501;
          }
          if (uVar3 != 0x5c22c71d) goto joined_r0x00402439;
          *local_88 = '\0';
          uVar3 = 0xedde9e36;
        }
      }
      else {
        if (0x77049d4d < (int)uVar3) {
          if (uVar3 == 0x77049d4e) {
            iVar1 = strcmp(local_f0,"-h");
            bVar7 = iVar1 == 0;
            uVar3 = 0xa29ee5a5;
            uVar6 = 0x2c6b6a28;
            goto LAB_004020a0;
          }
          if (uVar3 == 0x78fb4651) {
            iVar1 = fileno(stdin);
            local_80 = (gzFile)gzdopen(iVar1,&DAT_0040305d);
            bVar7 = local_80 == (gzFile)0x0;
            uVar3 = 0xea5ab3d1;
            uVar6 = 0xa0a82a72;
            goto LAB_004020a0;
          }
          if (uVar3 != 0x7f61d207) goto joined_r0x00402439;
          bVar7 = pcVar4 == (char *)0x0;
          uVar3 = 0x9dae3870;
          uVar6 = 0xda490070;
          goto LAB_00402501;
        }
        if ((int)uVar3 < 0x6855bed0) {
          if (uVar3 != 0x65a6e108) {
            if (uVar3 != 0x63a96122) goto joined_r0x00402439;
                    /* WARNING: Subroutine does not return */
            error("can\'t gzdopen stdout");
          }
          local_102 = local_f0[1];
          local_d4 = (int)local_102;
          bVar7 = SBORROW4(local_d4,0x30);
          iVar1 = local_d4 + -0x30;
          uVar6 = 0xf9ccbb45;
          goto LAB_004020b0;
        }
        if (uVar3 != 0x6855bed0) {
          if (uVar3 != 0x6bb8818d) goto joined_r0x00402439;
          iVar1 = strcmp(local_f0,"-d");
          bVar7 = iVar1 == 0;
          uVar3 = 0x4d60afa2;
          uVar6 = 0x53636621;
          goto LAB_004020a0;
        }
        uVar3 = 0x1a0cf7dc;
        local_f8 = 1;
        unaff_R14D = 1;
        unaff_R13 = local_b8;
        iVar2 = local_e4;
      }
LAB_00401bf0:
      do {
        if ((int)uVar3 < -0x35a684a1) {
          if ((int)uVar3 < -0x5b259013) {
            if ((int)uVar3 < -0x778a8e43) {
              if (uVar3 == 0x82210138) {
                return 0;
              }
              if (uVar3 == 0x8335133a) {
                gz_compress((FILE *)local_60,local_58);
LAB_00401f6e:
                uVar3 = 0xca597b5f;
                goto LAB_00401bf0;
              }
              if (uVar3 == 0x835abafd) {
                local_c0 = local_e0 + 1;
                local_e8 = local_a4 + -1;
                bVar7 = local_e8 == 0;
                uVar3 = 0x82210138;
                uVar6 = 0x3a44eb6c;
                goto LAB_00402501;
              }
            }
            else if ((int)uVar3 < -0x5f57d58e) {
              if (uVar3 == 0x887571bd) {
                local_60 = fopen(*local_e0,"rb");
                bVar7 = local_60 == (FILE *)0x0;
                uVar3 = 0xab64e175;
                uVar6 = 0xc45b34bd;
                goto LAB_004020a0;
              }
              ppcVar5 = __s;
              if (uVar3 == 0x9dae3870) goto LAB_00401e84;
            }
            else if (uVar3 == 0xa29ee5a5) {
              iVar1 = strcmp(local_f0,"-r");
              bVar7 = iVar1 == 0;
              uVar3 = 0x45f10be5;
              uVar6 = 0x3ac025d0;
LAB_004020a0:
              if (bVar7) {
                uVar3 = uVar6;
              }
            }
            else if (uVar3 == 0xa0a82a72) {
                    /* WARNING: Subroutine does not return */
              error("can\'t gzdopen stdin");
            }
          }
          else if ((int)uVar3 < -0x4edccbb4) {
            if (uVar3 == 0xa4da6fed) {
              local_45[0] = 'f';
LAB_00401bbb:
              uVar3 = 0x1d1f5279;
              unaff_R15D = local_fc;
              unaff_R12D = local_100;
            }
            else {
              if (uVar3 == 0xab64e175) {
                iVar1 = fileno(stdout);
                local_58 = (gzFile)gzdopen(iVar1,local_48);
                bVar7 = local_58 == (gzFile)0x0;
                uVar3 = 0x8335133a;
                uVar6 = 0xe4e03b2e;
                goto LAB_004020a0;
              }
              if (uVar3 == 0xb08be2ca) {
                fprintf(stderr,"%s: can\'t gzopen %s\n",prog,*local_e0);
                goto LAB_004024dc;
              }
            }
          }
          else if (uVar3 == 0xb123344c) {
            local_50 = local_c8;
            iVar1 = strcmp((char *)local_c8,"gunzip");
            bVar7 = iVar1 == 0;
            uVar3 = 0x45b786f4;
            uVar6 = 0x399c36f0;
            local_e4 = argc + -1;
            local_b8 = argv + 1;
LAB_00402501:
            if (!bVar7) {
              uVar3 = uVar6;
            }
          }
          else {
            if (uVar3 == 0xb5087d67) {
              local_88 = local_45;
              bVar7 = local_45[0] == ' ';
              uVar3 = 0xedde9e36;
              uVar6 = 0x5c22c71d;
              goto LAB_004020a0;
            }
            if (uVar3 == 0xc45b34bd) {
              perror(*local_e0);
              goto LAB_00401f6e;
            }
          }
        }
        else if ((int)uVar3 < -0x122161ca) {
          if ((int)uVar3 < -0x25b6ff90) {
            if (uVar3 != 0xca597b5f) {
              if (uVar3 == 0xcca92f7c) {
                iVar1 = fileno(stdout);
                local_78 = (gzFile)gzdopen(iVar1,local_48);
                bVar7 = local_78 == (gzFile)0x0;
                uVar3 = 0x3518eec2;
                uVar6 = 0x63a96122;
              }
              else {
                if (uVar3 != 0xd8fd3413) goto joined_r0x00402439;
                local_68 = (gzFile)gzopen(local_70,&DAT_0040305d);
                bVar7 = local_68 == (gzFile)0x0;
                uVar3 = 0x1325fc05;
                uVar6 = 0xb08be2ca;
              }
              goto LAB_004020a0;
            }
LAB_004024dc:
            uVar3 = 0x835abafd;
            goto LAB_00401bf0;
          }
          if ((int)uVar3 < -0x15a54c2f) {
            if (uVar3 == 0xda490070) {
              ppcVar5 = (char **)(pcVar4 + 1);
LAB_00401e84:
              uVar3 = 0xb123344c;
              local_c8 = ppcVar5;
              goto LAB_00401bf0;
            }
            if (uVar3 == 0xe4e03b2e) {
                    /* WARNING: Subroutine does not return */
              error("can\'t gzdopen stdout");
            }
          }
          else {
            if (uVar3 == 0xea5ab3d1) {
              gz_uncompress(local_80,(FILE *)stdout);
LAB_00402082:
              uVar3 = 0x82210138;
              goto LAB_00401bf0;
            }
            if (uVar3 == 0xed379aeb) {
              local_70 = *local_e0;
              bVar7 = local_101 == '\0';
              uVar3 = 0x5502c990;
              uVar6 = 0xd8fd3413;
              goto LAB_00402501;
            }
          }
        }
        else if ((int)uVar3 < 0x1325fc05) {
          if (uVar3 == 0xedde9e36) {
            bVar7 = local_f4 == 0;
            uVar3 = 0x226d77bb;
            uVar6 = 0x28dbb9d9;
            goto LAB_004020a0;
          }
          if (uVar3 == 0xf9ccbb45) {
            uVar3 = 0xb5087d67;
            if (local_d4 < 0x3a) {
              uVar3 = 0x4149003c;
            }
          }
          else if (uVar3 == 0x4611cf3) {
            local_46 = local_102;
            goto LAB_00401bbb;
          }
        }
        else {
          if (uVar3 == 0x1325fc05) {
            gz_uncompress(local_68,(FILE *)stdout);
            goto LAB_004024dc;
          }
          if (uVar3 == 0x1a0cf7dc) {
            local_100 = local_f8;
            bVar7 = false;
            uVar6 = 0x20f2487a;
            iVar1 = iVar2;
            local_fc = unaff_R14D;
            local_f4 = iVar2;
            local_b0 = unaff_R13;
LAB_004020b0:
            uVar3 = 0xb5087d67;
            if (iVar1 != 0 && bVar7 == iVar1 < 0) {
              uVar3 = uVar6;
            }
          }
          else if (uVar3 == 0x1d1f5279) {
            uVar3 = 0x1a0cf7dc;
            unaff_R13 = local_b0 + 1;
            iVar2 = local_f4 + -1;
            local_f8 = unaff_R12D;
            unaff_R14D = unaff_R15D;
            goto LAB_00401bf0;
          }
        }
joined_r0x00402439:
      } while ((int)uVar3 < 0x20f2487a);
    }
    if (0x3a44eb6b < (int)uVar3) {
      if ((int)uVar3 < 0x45b786f4) {
        if (uVar3 == 0x3a44eb6c) {
          uVar3 = 0x567554b9;
          if (local_100 != 0) {
            uVar3 = 0xed379aeb;
          }
          local_101 = local_fc != 0;
          local_a4 = local_e8;
          local_e0 = local_c0;
          goto joined_r0x00402439;
        }
        if (uVar3 != 0x3ac025d0) {
          if (uVar3 != 0x4149003c) goto joined_r0x00402439;
          bVar7 = local_f0[2] == '\0';
          uVar3 = 0xb5087d67;
          uVar6 = 0x4611cf3;
          goto LAB_004020a0;
        }
        local_45[0] = 'R';
        goto LAB_00401bbb;
      }
      if (uVar3 == 0x45b786f4) {
        uVar3 = 0x1a0cf7dc;
        unaff_R14D = 0;
        local_f8 = 1;
        unaff_R13 = local_b8;
        iVar2 = local_e4;
      }
      else {
        if (uVar3 == 0x45f10be5) {
          bVar7 = *local_f0 == '-';
          uVar3 = 0xb5087d67;
          uVar6 = 0x65a6e108;
          goto LAB_004020a0;
        }
        if (uVar3 != 0x47afb95f) goto joined_r0x00402439;
        uVar3 = 0x1d1f5279;
        unaff_R15D = 1;
        unaff_R12D = local_100;
      }
      goto LAB_00401bf0;
    }
    if ((int)uVar3 < 0x2c6b6a28) {
      if (uVar3 == 0x20f2487a) {
        local_f0 = *local_b0;
        iVar1 = strcmp(local_f0,"-c");
        bVar7 = iVar1 == 0;
        uVar3 = 0x6bb8818d;
        uVar6 = 0x47afb95f;
        goto LAB_004020a0;
      }
      if (uVar3 != 0x226d77bb) {
        if (uVar3 != 0x28dbb9d9) goto joined_r0x00402439;
        bVar7 = local_100 == 0;
        uVar3 = 0xcca92f7c;
        uVar6 = 0x78fb4651;
        goto LAB_00402501;
      }
      local_c0 = local_b0;
      uVar3 = 0x3a44eb6c;
      local_e8 = local_f4;
    }
    else {
      if (uVar3 == 0x2c6b6a28) {
        local_45[0] = 'h';
        goto LAB_00401bbb;
      }
      if (uVar3 == 0x3518eec2) {
        gz_compress((FILE *)stdin,local_78);
        goto LAB_00402082;
      }
      if (uVar3 != 0x399c36f0) goto joined_r0x00402439;
      iVar2 = strcmp((char *)local_50,"zcat");
      uVar3 = 0x6855bed0;
      if (iVar2 != 0) {
        uVar3 = 0x1a0cf7dc;
      }
      local_f8 = 0;
      unaff_R14D = 0;
      unaff_R13 = local_b8;
      iVar2 = local_e4;
      if (uVar3 < 0x20f2487a) goto LAB_00401bf0;
    }
  } while( true );
}

