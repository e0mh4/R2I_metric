
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


/* WARNING: Removing unreachable block (ram,0x004012e3) */

void gz_compress(FILE *in,gzFile out)

{
  int iVar1;
  size_t sVar2;
  char *msg;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int err;
  char buf [16384];
  char local_405d;
  int local_405c;
  undefined *local_4058;
  undefined local_404c [4];
  undefined *local_4048;
  undefined *local_4040;
  undefined local_4038 [16392];
  
  local_4040 = local_404c;
  iVar1 = -0x1080811b;
  local_4048 = local_4038;
  do {
    if (iVar1 < -0x3531026d) {
      if (iVar1 == -0x61c262c6) {
        iVar1 = gzwrite(out,local_4058,local_405c);
        local_405d = iVar1 != local_405c;
        uVar3 = (x_22 + -1) * x_22;
        uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
        iVar1 = -0x4f296690;
        if (uVar3 == 0) {
          iVar1 = 0xbc8f6f1;
        }
        if (9 < y_23) {
          iVar1 = -0x4f296690;
        }
        if (y_23 < 10 != (uVar3 == 0)) {
          iVar1 = 0xbc8f6f1;
        }
      }
      else {
        if (iVar1 == -0x51916b27) {
          fclose((FILE *)in);
          iVar1 = gzclose(out);
          bVar5 = iVar1 == 0;
          iVar1 = 0xa491976;
          iVar4 = 0x40901f3f;
          goto LAB_004014b8;
        }
        if (iVar1 == -0x4f296690) {
          gzwrite(out,local_4058,local_405c);
          iVar1 = -0x61c262c6;
        }
      }
    }
    else if (iVar1 == -0x3531026d) {
      iVar1 = -0x208f3c8e;
      if (local_405c == 0) {
        iVar1 = -0x51916b27;
      }
    }
    else if (iVar1 == -0x208f3c8e) {
      uVar3 = (x_22 + -1) * x_22;
      uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
      iVar1 = -0x4f296690;
      if (uVar3 == 0) {
        iVar1 = -0x61c262c6;
      }
      if (9 < y_23) {
        iVar1 = -0x4f296690;
      }
      if (y_23 < 10 != (uVar3 == 0)) {
        iVar1 = -0x61c262c6;
      }
    }
    else if (iVar1 == -0x1080811b) {
      sVar2 = fread(local_4038,1,0x4000,(FILE *)in);
      local_405c = (int)sVar2;
      iVar1 = ferror((FILE *)in);
      bVar5 = iVar1 == 0;
      iVar1 = -0x3531026d;
      iVar4 = -0x4f50bcd;
      local_4058 = local_4038;
      goto LAB_004014b8;
    }
joined_r0x00401434:
  } while (iVar1 < -0x4f50bcd);
  while (0x1dfa3362 < iVar1) {
    if (0x2ad4128a < iVar1) {
      if (iVar1 < 0x40901f3f) {
        if ((iVar1 == 0x2ad4128b) || (iVar1 == 0x36c016c6)) {
          perror("fread");
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
      }
      else if (iVar1 == 0x40901f3f) {
        uVar3 = (x_22 + -1) * x_22;
        uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
        iVar4 = 0x244d2267;
        if (y_23 < 10 != (uVar3 == 0)) {
          iVar4 = 0x1dfa3363;
        }
        iVar1 = iVar4;
        if (uVar3 == 0) {
          iVar1 = 0x1dfa3363;
        }
        if (9 < y_23) {
          iVar1 = iVar4;
        }
      }
      else if (iVar1 == 0x68afb782) {
        msg = (char *)gzerror(out,local_404c);
                    /* WARNING: Subroutine does not return */
        error(msg);
      }
      goto joined_r0x00401434;
    }
    if (iVar1 != 0x2260a256) {
      if (iVar1 == 0x1dfa3363) {
                    /* WARNING: Subroutine does not return */
        error("failed gzclose");
      }
      if (iVar1 == 0x244d2267) {
                    /* WARNING: Subroutine does not return */
        error("failed gzclose");
      }
      goto joined_r0x00401434;
    }
    iVar1 = 0xa491976;
  }
  if (iVar1 == -0x4f50bcd) {
    bVar5 = (~((x_22 + -1) * x_22) | 0xfffffffeU) == 0xffffffff;
    iVar1 = 0x2ad4128b;
    if (bVar5) {
      iVar1 = 0x36c016c6;
    }
    if (9 < y_23) {
      iVar1 = 0x2ad4128b;
    }
    if (y_23 < 10 != bVar5) {
      iVar1 = 0x36c016c6;
    }
  }
  else {
    if (iVar1 == 0xa491976) {
      return;
    }
    if (iVar1 == 0xbc8f6f1) {
      bVar5 = local_405d == '\0';
      iVar1 = -0x1080811b;
      iVar4 = 0x68afb782;
LAB_004014b8:
      if (!bVar5) {
        iVar1 = iVar4;
      }
    }
  }
  goto joined_r0x00401434;
}


/* WARNING: Removing unreachable block (ram,0x004018dc) */
/* WARNING: Removing unreachable block (ram,0x00401682) */
/* WARNING: Removing unreachable block (ram,0x00401794) */

void gz_uncompress(gzFile in,FILE *out)

{
  int iVar1;
  size_t sVar2;
  char *msg;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int err;
  char buf [16384];
  char local_4059;
  uint local_4058;
  undefined local_4054 [4];
  undefined *local_4050;
  undefined *local_4048;
  undefined *local_4040;
  undefined local_4038 [16392];
  
  local_4050 = local_4038;
  local_4048 = local_4054;
  iVar1 = 0x1d22c493;
LAB_0040169b:
  do {
    if (iVar1 < 0x6462e239) {
      if (0x2113a9f5 < iVar1) {
        if (iVar1 != 0x4497a22a) {
          if (iVar1 != 0x2113a9f6) {
            if (iVar1 != 0x347ffb6d) goto joined_r0x00401695;
                    /* WARNING: Subroutine does not return */
            error("failed fwrite");
          }
                    /* WARNING: Subroutine does not return */
          error("failed fclose");
        }
        uVar4 = (x_24 + -1) * x_24;
        uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
        iVar3 = -0x18616d7d;
        if (y_25 < 10 != (uVar4 == 0)) {
          iVar3 = 0x6bc35e72;
        }
        iVar1 = iVar3;
        if (uVar4 == 0) {
          iVar1 = 0x6bc35e72;
        }
LAB_00401687:
        if (y_25 < 10) goto joined_r0x00401695;
        iVar1 = iVar3;
        goto joined_r0x00401695;
      }
      if (iVar1 == -0x153196c) {
        return;
      }
      if (iVar1 != 0x1d22c493) goto joined_r0x00401695;
      local_4040 = local_4038;
      local_4058 = gzread(in,local_4040,0x4000);
      iVar1 = ((int)local_4058 >> 0x1f & 0x815c6606U) + 0x6c9f364d;
joined_r0x00401734:
      if (iVar1 < -0x153196c) {
        do {
          if (iVar1 < -0x4ecea162) {
            if (iVar1 < -0x6c82cdd5) {
              if (iVar1 == -0x7a614e57) {
                bVar5 = local_4059 == '\0';
                iVar1 = -0x6c82cdd5;
                iVar3 = 0x2113a9f6;
                goto LAB_004018f5;
              }
              if (iVar1 == -0x706b2f67) {
                    /* WARNING: Subroutine does not return */
                error("failed gzclose");
              }
            }
            else {
              if (iVar1 == -0x6c82cdd5) goto LAB_004018e1;
              if (iVar1 == -0x5709bbfb) {
                bVar5 = (~((x_24 + -1) * x_24) | 0xfffffffeU) == 0xffffffff;
                iVar1 = -0x344d9bec;
                if (bVar5) {
                  iVar1 = 0x347ffb6d;
                }
                if (9 < y_25) {
                  iVar1 = -0x344d9bec;
                }
                if (y_25 < 10 != bVar5) {
                  iVar1 = 0x347ffb6d;
                }
              }
            }
          }
          else if (iVar1 < -0x18616d7d) {
            if (iVar1 == -0x4ecea162) {
              sVar2 = fwrite(local_4040,1,(ulong)local_4058,(FILE *)out);
              bVar5 = (uint)sVar2 == local_4058;
              iVar1 = 0x1d22c493;
              iVar3 = -0x5709bbfb;
              goto LAB_004018f5;
            }
            if (iVar1 == -0x344d9bec) {
                    /* WARNING: Subroutine does not return */
              error("failed fwrite");
            }
          }
          else {
            if (iVar1 == -0x18616d7d) {
              fclose((FILE *)out);
              iVar1 = 0x6bc35e72;
              break;
            }
            if (iVar1 == -0x120463ad) {
              msg = (char *)gzerror(in,local_4054);
                    /* WARNING: Subroutine does not return */
              error(msg);
            }
          }
joined_r0x00401695:
          if (-0x153196d < iVar1) break;
        } while( true );
      }
      goto LAB_0040169b;
    }
    if (iVar1 != 0x6462e239) {
      if (iVar1 == 0x6bc35e72) {
        iVar1 = fclose((FILE *)out);
        local_4059 = iVar1 != 0;
        uVar4 = (x_24 + -1) * x_24;
        uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
        iVar3 = -0x18616d7d;
        if (y_25 < 10 != (uVar4 == 0)) {
          iVar3 = -0x7a614e57;
        }
        iVar1 = iVar3;
        if (uVar4 == 0) {
          iVar1 = -0x7a614e57;
        }
        goto LAB_00401687;
      }
      if (iVar1 != 0x6c9f364d) goto joined_r0x00401695;
      iVar1 = -0x4ecea162;
      if (local_4058 == 0) {
        iVar1 = 0x4497a22a;
      }
      goto joined_r0x00401734;
    }
    iVar1 = 0x1d22c493;
  } while( true );
LAB_004018e1:
  iVar1 = gzclose(in);
  bVar5 = iVar1 == 0;
  iVar1 = -0x153196c;
  iVar3 = -0x706b2f67;
LAB_004018f5:
  if (!bVar5) {
    iVar1 = iVar3;
  }
  goto joined_r0x00401734;
}


/* WARNING: Removing unreachable block (ram,0x004019ed) */

void file_compress(char *file,char *mode)

{
  FILE *in;
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  FILE *pFVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined auStack_68 [8];
  FILE *local_60;
  FILE *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char local_33;
  char local_32;
  char local_31;
  
  pcVar7 = auStack_68;
  local_31 = (~(~-x_26 * x_26) | 0xfffffffeU) == 0xffffffff;
  local_32 = y_27 < 10;
  iVar1 = -0x1996565d;
LAB_00401a0b:
  pcVar2 = local_40;
  in = local_58;
  pFVar4 = local_60;
  if (iVar1 < 0x28c977d1) {
    if (iVar1 < -0xaad16a8) {
      if (iVar1 == -0x1996565d) {
        iVar1 = -0x2f009a53;
        if (local_32 != '\0') {
          iVar1 = -0x4db6932a;
        }
        if (local_31 == '\0') {
          iVar1 = -0x2f009a53;
        }
        if (local_31 == local_32) goto joined_r0x00401a90;
        iVar1 = -0x4db6932a;
        goto joined_r0x00401a90;
      }
    }
    else {
      if (iVar1 == -0xaad16a8) {
        *(undefined8 *)(pcVar7 + -8) = 0x401c6d;
        gz_compress((FILE *)in,(gzFile)pFVar4);
        *(undefined8 *)(pcVar7 + -8) = 0x401c75;
        unlink(file);
        return;
      }
      if (iVar1 == 0xb95ce04) {
        *(undefined8 *)(pcVar7 + -8) = 0x401cb4;
        fprintf(stderr,"%s: filename too long\n",prog);
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(pcVar7 + -8) = 0x401cbe;
        exit(1);
      }
      if (iVar1 == 0xc2c14e4) {
        *(undefined8 *)(pcVar7 + -8) = 0x401cdc;
        fprintf(stderr,"%s: can\'t gzopen %s\n",prog,pcVar2);
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(pcVar7 + -8) = 0x401ce6;
        exit(1);
      }
    }
  }
  else if (iVar1 < 0x36b87e06) {
    if (iVar1 == 0x2ecc4b18) {
      uVar5 = (x_26 + -1) * x_26;
      uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
      iVar1 = 0x36b87e06;
      if (uVar5 == 0) {
        iVar1 = 0x28c977d1;
      }
      if (9 < y_27) {
        iVar1 = 0x36b87e06;
      }
      if (y_27 < 10 == (uVar5 == 0)) goto joined_r0x00401a90;
      iVar1 = 0x28c977d1;
      goto joined_r0x00401a90;
    }
    if (iVar1 == 0x28c977d1) {
LAB_00401c88:
      *(undefined8 *)(pcVar7 + -8) = 0x401c90;
      perror(file);
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(pcVar7 + -8) = 0x401c9a;
      exit(1);
    }
  }
  else if (iVar1 == 0x76fcea4f) {
    iVar1 = -0x21d450be;
    if (local_33 != '\0') {
      iVar1 = 0xb95ce04;
    }
  }
  else if (iVar1 == 0x36b87e06) goto LAB_00401c88;
joined_r0x00401aba:
  if (iVar1 < -0x1996565d) {
    do {
      if (iVar1 < -0x2f009a53) {
        if (iVar1 != -0x7354e498) goto code_r0x00401b36;
        *(undefined8 *)(pcVar7 + -8) = 0x401c3a;
        pFVar4 = (FILE *)gzopen64(local_40,mode);
        local_60 = pFVar4;
        iVar1 = -0xaad16a8;
        iVar6 = 0xc2c14e4;
      }
      else {
        if (iVar1 == -0x2f009a53) {
          iVar1 = -0x4db6932a;
          goto joined_r0x00401aba;
        }
        if (iVar1 != -0x21d450be) goto joined_r0x00401aba;
        local_40 = local_48;
        *(undefined8 *)(pcVar7 + -8) = 0x401c0c;
        snprintf(local_48,0x400,"%s%s",file,&DAT_00404059);
        *(undefined8 *)(pcVar7 + -8) = 0x401c19;
        pFVar4 = fopen64(file,"rb");
        local_58 = pFVar4;
        iVar1 = -0x7354e498;
        iVar6 = 0x2ecc4b18;
      }
      if (pFVar4 == (FILE *)0x0) {
        iVar1 = iVar6;
      }
joined_r0x00401a90:
      if (-0x1996565e < iVar1) break;
    } while( true );
  }
  goto LAB_00401a0b;
code_r0x00401b36:
  if (iVar1 == -0x4db6932a) {
    pcVar2 = pcVar7 + -0x400;
    local_48 = pcVar2;
    local_50 = pcVar2;
    *(undefined8 *)(pcVar7 + -0x408) = 0x401b65;
    sVar3 = strlen(file);
    local_33 = 0x3ff < sVar3 + 3;
    uVar5 = (x_26 + -1) * x_26;
    uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
    iVar1 = -0x2f009a53;
    if (uVar5 == 0) {
      iVar1 = 0x76fcea4f;
    }
    if (9 < y_27) {
      iVar1 = -0x2f009a53;
    }
    pcVar7 = pcVar2;
    if (y_27 < 10 != (uVar5 == 0)) {
      iVar1 = 0x76fcea4f;
    }
  }
  goto joined_r0x00401aba;
}


/* WARNING: Removing unreachable block (ram,0x0040209a) */
/* WARNING: Removing unreachable block (ram,0x00401dae) */

void file_uncompress(char *file)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  char *unaff_R12;
  char *unaff_R15;
  bool bVar7;
  char buf [1024];
  char local_47b;
  char local_47a;
  char local_479;
  char *local_470;
  char *local_468;
  gzFile local_458;
  FILE *local_450;
  char *local_448;
  char local_438 [1032];
  
  sVar5 = strlen(file);
  uVar4 = 0x3d3753d5;
LAB_00402000:
  do {
    if ((int)uVar4 < 0x5880553a) {
      if ((int)uVar4 < 0x3d3753d5) {
        if (uVar4 == 0x220c27c2) {
          uVar2 = (x_28 + -1) * x_28;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          bVar7 = y_29 < 10 == (uVar2 == 0);
          uVar1 = 0xcb834116;
          uVar6 = 0x5880553a;
          goto LAB_00401d4f;
        }
        if (uVar4 == 0x3b09c80f) {
          bVar7 = local_479 == '\0';
          uVar4 = 0x61565318;
          uVar1 = 0x6329494e;
          goto LAB_00401fea;
        }
      }
      else if (uVar4 == 0x3d3753d5) {
        uVar4 = 0xd5971975;
        if (0x3ff < sVar5 + 3) {
          uVar4 = 0x7dc976f;
        }
      }
      else {
        if (uVar4 == 0x466c1bee) {
          snprintf(local_470 + sVar5,0x400 - sVar5,"%s",&DAT_00404059);
          bVar7 = (~((x_28 + -1) * x_28) | 0xfffffffeU) == 0xffffffff;
          uVar1 = 0xf2b466b8;
          uVar4 = 0x1edf3f3a;
          if (bVar7) {
            uVar4 = 0xf2b466b8;
          }
          uVar2 = 0x1edf3f3a;
          goto LAB_00402246;
        }
        if (uVar4 == 0x52bd6c20) {
          local_470[-(3 - sVar5)] = '\0';
          uVar4 = 0xae0d43b2;
          unaff_R12 = local_470;
          unaff_R15 = file;
          goto LAB_00401d6b;
        }
      }
joined_r0x004021e0:
      if ((int)uVar4 < 0x220c27c2) {
LAB_00401d6b:
        while (-0x1c7fd590 < (int)uVar4) {
          if (0x2ce5da8 < (int)uVar4) {
            if ((int)uVar4 < 0x135614f5) {
              if (uVar4 == 0x2ce5da9) {
                uVar1 = (~-x_28 * x_28 ^ 0xfffffffeU) & ~-x_28 * x_28;
                uVar4 = 0x1edf3f3a;
                if (uVar1 == 0) {
                  uVar4 = 0x466c1bee;
                }
                if (9 < y_29) {
                  uVar4 = 0x1edf3f3a;
                }
                if (y_29 < 10 != (uVar1 == 0)) {
                  uVar4 = 0x466c1bee;
                }
                goto joined_r0x00401e79;
              }
              if (uVar4 == 0x7dc976f) {
                fprintf(stderr,"%s: filename too long\n",prog);
                    /* WARNING: Subroutine does not return */
                exit(1);
              }
            }
            else {
              if (uVar4 == 0x1edf3f3a) {
                snprintf(local_470 + sVar5,0x400 - sVar5,"%s",&DAT_00404059);
                uVar4 = 0x466c1bee;
                goto LAB_00402000;
              }
              if (uVar4 == 0x135614f5) {
                fprintf(stderr,"%s: can\'t gzopen %s\n",prog,local_468);
                    /* WARNING: Subroutine does not return */
                exit(1);
              }
            }
            goto joined_r0x004021e0;
          }
          if (uVar4 == 0xe3802a71) {
            uVar2 = (~-x_28 * x_28 ^ 0xfffffffeU) & ~-x_28 * x_28;
            bVar7 = y_29 < 10 == (uVar2 == 0);
            uVar1 = 0xec8253ab;
            uVar6 = 0x6af8d211;
            goto LAB_00401d4f;
          }
          if (uVar4 == 0xec8253ab) {
            fopen64(local_448,"wb");
            uVar4 = 0x6af8d211;
            goto LAB_00402000;
          }
          if (uVar4 != 0xf2b466b8) goto joined_r0x004021e0;
          unaff_R12 = file;
          unaff_R15 = local_470;
          uVar4 = 0xae0d43b2;
        }
        if ((int)uVar4 < -0x347cbeea) {
          if (uVar4 == 0xae0d43b2) {
            local_458 = (gzFile)gzopen64(unaff_R15,&DAT_0040405d);
            uVar4 = 0xe3802a71;
            if (local_458 == (gzFile)0x0) {
              uVar4 = 0x135614f5;
            }
            local_468 = unaff_R15;
            local_448 = unaff_R12;
            if (0x220c27c1 < (int)uVar4) goto LAB_00402000;
            goto LAB_00401d6b;
          }
          if (uVar4 != 0xc2289e16) goto joined_r0x004021e0;
          bVar7 = local_47a == '\0';
          uVar4 = 0x2ce5da9;
          uVar1 = 0x52bd6c20;
        }
        else {
          if (uVar4 == 0xcb834116) {
            uVar4 = 0x5880553a;
            goto LAB_00402000;
          }
          if (uVar4 != 0xd1ac2801) {
            if (uVar4 == 0xd5971975) {
              uVar2 = (x_28 + -1) * x_28;
              uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
              bVar7 = y_29 < 10 == (uVar2 == 0);
              uVar1 = 0x6d368fda;
              uVar6 = 0x604a4ad9;
LAB_00401d4f:
              if (!bVar7) {
                uVar1 = uVar6;
              }
              uVar4 = uVar1;
              if (uVar2 == 0) {
                uVar4 = uVar6;
              }
              if (9 < y_29) {
                uVar4 = uVar1;
              }
            }
            goto joined_r0x004021e0;
          }
          bVar7 = local_47b == '\0';
          uVar4 = 0x2ce5da9;
          uVar1 = 0x220c27c2;
        }
LAB_00401fea:
        if (!bVar7) {
          uVar4 = uVar1;
        }
joined_r0x00401e79:
        if (0x220c27c1 < uVar4) goto LAB_00402000;
        goto LAB_00401d6b;
      }
      goto LAB_00402000;
    }
    if ((int)uVar4 < 0x6329494e) {
      if (uVar4 == 0x5880553a) {
        iVar3 = strcmp(file + (sVar5 - 3),".gz");
        local_47a = iVar3 == 0;
        bVar7 = (~((x_28 + -1) * x_28) | 0xfffffffeU) == 0xffffffff;
        uVar1 = 0xc2289e16;
        uVar4 = 0xcb834116;
        if (bVar7) {
          uVar4 = 0xc2289e16;
        }
        uVar2 = 0xcb834116;
LAB_00402246:
        if (9 < y_29) {
          uVar4 = uVar2;
        }
        if ((bool)(y_29 < 10 ^ bVar7)) {
          uVar4 = uVar1;
        }
      }
      else {
        if (uVar4 == 0x604a4ad9) {
          snprintf(local_438,0x400,"%s",file);
          local_47b = 3 < sVar5;
          uVar2 = (x_28 + -1) * x_28;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          bVar7 = y_29 < 10 == (uVar2 == 0);
          uVar1 = 0x6d368fda;
          uVar6 = 0xd1ac2801;
          local_470 = local_438;
          goto LAB_00401d4f;
        }
        if (uVar4 == 0x61565318) {
          gz_uncompress(local_458,(FILE *)local_450);
          unlink(local_468);
          return;
        }
      }
      goto joined_r0x004021e0;
    }
    if (uVar4 == 0x6af8d211) {
      local_450 = fopen64(local_448,"wb");
      local_479 = local_450 == (FILE *)0x0;
      uVar1 = ~((x_28 + -1) * x_28) | 0xfffffffe;
      uVar2 = 0xec8253ab;
      if (y_29 < 10 != (uVar1 == 0xffffffff)) {
        uVar2 = 0x3b09c80f;
      }
      uVar4 = uVar2;
      if (uVar1 == 0xffffffff) {
        uVar4 = 0x3b09c80f;
      }
      if (9 < y_29) {
        uVar4 = uVar2;
      }
      goto joined_r0x004021e0;
    }
    if (uVar4 != 0x6d368fda) {
      if (uVar4 == 0x6329494e) {
        perror(file);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      goto joined_r0x004021e0;
    }
    snprintf(local_438,0x400,"%s",file);
    uVar4 = 0x604a4ad9;
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402ea6) */
/* WARNING: Removing unreachable block (ram,0x00402d10) */
/* WARNING: Removing unreachable block (ram,0x00402af7) */
/* WARNING: Removing unreachable block (ram,0x00403568) */
/* WARNING: Removing unreachable block (ram,0x0040244f) */
/* WARNING: Removing unreachable block (ram,0x00403402) */
/* WARNING: Removing unreachable block (ram,0x004036fc) */
/* WARNING: Removing unreachable block (ram,0x00402c48) */
/* WARNING: Removing unreachable block (ram,0x00402b62) */
/* WARNING: Removing unreachable block (ram,0x00402a14) */
/* WARNING: Removing unreachable block (ram,0x00402b3b) */
/* WARNING: Removing unreachable block (ram,0x00402e94) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int main(int argc,char **argv)

{
  char **__s;
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char **ppcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_R12D;
  char **unaff_R13;
  uint unaff_R14D;
  uint unaff_R15D;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char local_122;
  char local_121;
  uint local_120;
  char local_119;
  char local_118;
  char local_117;
  char local_116;
  char local_115;
  uint local_114;
  char *local_110;
  uint local_104;
  uint local_100;
  uint local_fc;
  char **local_f8;
  uint local_f0;
  uint local_ec;
  int local_dc;
  char *local_d8;
  char **local_d0;
  char **local_c8;
  char **local_c0;
  char **local_b8;
  uint local_ac;
  char *local_90;
  gzFile local_88;
  gzFile local_80;
  gzFile local_78;
  FILE *local_70;
  gzFile local_68;
  char **local_60;
  char local_58 [2];
  char local_56;
  char local_55 [29];
  char **local_38;
  
  local_d0 = (char **)&DAT_00404078;
  snprintf(local_58,0x14,"%s");
  prog = *argv;
  __s = (char **)*argv;
  pcVar3 = strrchr((char *)__s,0x2f);
  local_38 = argv + 1;
  uVar2 = 0xd20bf095;
  local_104 = (uint)local_d0;
  local_100 = local_104;
  local_f0 = local_104;
  local_c8 = local_d0;
LAB_0040247b:
  uVar8 = unaff_R15D;
  if ((int)uVar2 < -0x35a20526) {
    if ((int)uVar2 < -0x5ba152c6) {
      if ((int)uVar2 < -0x713bb555) {
        if ((int)uVar2 < -0x76e93149) {
          if (uVar2 == 0x836da1ff) {
            gz_uncompress(local_78,(FILE *)stdout);
            goto LAB_00403385;
          }
          if (uVar2 == 0x849b4e82) {
            iVar1 = fileno(stdout);
            local_80 = (gzFile)gzdopen(iVar1,local_58);
            bVar9 = local_80 == (gzFile)0x0;
            uVar2 = 0x2f5ec597;
            uVar5 = 0x6ab08a73;
            goto LAB_0040368d;
          }
          if (uVar2 == 0x86b793c4) {
                    /* WARNING: Subroutine does not return */
            error("can\'t gzdopen stdout");
          }
        }
        else {
          ppcVar4 = __s;
          if (uVar2 == 0x8916ceb7) goto LAB_004035d9;
          if (uVar2 == 0x8d6010b2) {
            fprintf(stderr,"%s: can\'t gzopen %s\n",prog,*local_f8);
            uVar2 = 0xb1072af6;
            goto LAB_0040247b;
          }
          if (uVar2 == 0x8e82d5f2) {
            local_55[0] = 'f';
            uVar5 = (x_30 + -1) * x_30;
            uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
            bVar9 = uVar5 == 0;
            uVar6 = 0x138dcb73;
            uVar2 = 0xd1ffe1e9;
            if (uVar5 == 0) {
              uVar2 = 0x138dcb73;
            }
            bVar11 = SBORROW4(y_31,10);
            bVar10 = y_31 + -10 < 0;
            bVar12 = y_31 < 10;
            uVar5 = 0xd1ffe1e9;
            goto LAB_004032c7;
          }
        }
      }
      else if ((int)uVar2 < -0x63adebd6) {
        if (uVar2 == 0x8ec44aab) {
          local_55[0] = 'R';
          uVar5 = local_114;
LAB_00402e84:
          unaff_R14D = uVar5;
          uVar2 = 0xca5e66b;
          unaff_R15D = uVar8;
          unaff_R12D = local_120;
          goto LAB_0040247b;
        }
        if (uVar2 == 0x98011d45) {
          local_122 = local_110[1];
          local_dc = (int)local_122;
          bVar12 = SBORROW4(local_dc,0x30);
          uVar8 = local_dc - 0x30;
          bVar9 = local_dc == 0x30;
          uVar5 = 0x397932fe;
          goto LAB_00402e74;
        }
        if (uVar2 == 0x9b71b37c) {
          iVar1 = strcmp((char *)local_60,"zcat");
          uVar2 = 0x58123a9b;
          if (iVar1 != 0) {
            uVar2 = 0x5dc8c81a;
          }
          local_100 = 0;
          local_104 = 0;
          unaff_R13 = local_c0;
          uVar8 = local_ec;
          unaff_R15D = local_ec;
          if (0xefac6bc < uVar2) goto LAB_00402eb0;
          goto LAB_0040247b;
        }
      }
      else {
        if (uVar2 == 0x9c52142a) {
          uVar6 = (x_30 + -1) * x_30;
          uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
          bVar9 = y_31 < 10 == (uVar6 == 0);
          uVar5 = 0xcbae457e;
          uVar7 = 0x3388cf91;
          goto LAB_00402454;
        }
        if (uVar2 == 0x9d2dbb9d) {
          gz_uncompress(local_88,(FILE *)stdout);
LAB_00402e96:
          uVar2 = 0xa03834a0;
          unaff_R15D = uVar8;
          goto LAB_0040247b;
        }
        if (uVar2 == 0xa03834a0) {
          return 0;
        }
      }
    }
    else if ((int)uVar2 < -0x4ab1881f) {
      if ((int)uVar2 < -0x4ef8d50a) {
        if (uVar2 == 0xa45ead3a) {
          uVar6 = ~((x_30 + -1) * x_30) | 0xfffffffe;
          bVar9 = y_31 < 10 == (uVar6 == 0xffffffff);
          uVar5 = 0x8d6010b2;
          uVar7 = 0xb1072af6;
          goto LAB_0040377e;
        }
        if (uVar2 == 0xa6c991d6) {
          local_56 = local_122;
          uVar5 = local_114;
          goto LAB_00402e84;
        }
      }
      else {
        if (uVar2 == 0xb1072af6) {
          fprintf(stderr,"%s: can\'t gzopen %s\n",prog,*local_f8);
          uVar5 = (x_30 + -1) * x_30;
          uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
          bVar9 = uVar5 == 0;
          uVar6 = 0x5a5a45c4;
          uVar2 = 0x8d6010b2;
          if (uVar5 == 0) {
            uVar2 = 0x5a5a45c4;
          }
          bVar11 = SBORROW4(y_31,10);
          bVar10 = y_31 + -10 < 0;
          bVar12 = y_31 < 10;
          uVar5 = 0x8d6010b2;
          goto LAB_004035a1;
        }
        if (uVar2 == 0xb29bdaae) {
          uVar5 = (~-x_30 * x_30 ^ 0xfffffffeU) & ~-x_30 * x_30;
          bVar9 = uVar5 == 0;
          uVar6 = 0xb6cc6a66;
          uVar2 = 0x1285f4f;
          if (uVar5 == 0) {
            uVar2 = 0xb6cc6a66;
          }
          bVar11 = SBORROW4(y_31,10);
          bVar10 = y_31 + -10 < 0;
          bVar12 = y_31 < 10;
          uVar5 = 0x1285f4f;
          goto LAB_004032c7;
        }
        if (uVar2 == 0xb48084bf) {
          bVar9 = local_120 == 0;
          uVar2 = 0x849b4e82;
          uVar5 = 0x318406a6;
          goto LAB_00402e64;
        }
      }
    }
    else if ((int)uVar2 < -0x3e809ab7) {
      if (uVar2 == 0xb54e77e1) {
        bVar9 = local_116 == '\0';
        uVar2 = 0xc4118763;
        uVar5 = 0xa6c991d6;
        goto LAB_00402e64;
      }
      if (uVar2 == 0xb6cc6a66) {
        file_compress(*local_f8,local_58);
        uVar6 = ~(~-x_30 * x_30) | 0xfffffffe;
        bVar9 = y_31 < 10 == (uVar6 == 0xffffffff);
        uVar5 = 0x1285f4f;
        uVar7 = 0x65f8d96a;
        goto LAB_0040377e;
      }
      if (uVar2 == 0xb9c2e3de) {
        uVar6 = ~((x_30 + -1) * x_30) | 0xfffffffe;
        bVar9 = y_31 < 10 == (uVar6 == 0xffffffff);
        uVar5 = 0xcb86c501;
        uVar7 = 0xf5223383;
        goto LAB_0040377e;
      }
    }
    else {
      if (uVar2 == 0xc17f6549) {
        uVar2 = 0xcd695d1;
        goto LAB_0040247b;
      }
      if (uVar2 == 0xc4118763) {
        local_90 = local_55;
        bVar9 = local_55[0] == ' ';
        uVar2 = 0x5641d632;
        uVar5 = 0x165da628;
        goto LAB_0040368d;
      }
      if (uVar2 == 0xc77c5a36) {
        uVar6 = (x_30 + -1) * x_30;
        uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
        bVar9 = y_31 < 10 == (uVar6 == 0);
        uVar5 = 0xca5dfada;
        uVar7 = 0x3ca98471;
        goto LAB_00402454;
      }
    }
  }
  else if ((int)uVar2 < -0x2932af55) {
    if ((int)uVar2 < -0x307dff39) {
      if ((int)uVar2 < -0x34793aff) {
        if (uVar2 == 0xca5dfada) {
          uVar2 = 0x3ca98471;
          goto LAB_00402eb0;
        }
        if (uVar2 == 0xcb1ed1a3) {
          uVar5 = (x_30 + -1) * x_30;
          uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
          bVar9 = uVar5 == 0;
          uVar6 = 0xfe3959b3;
          uVar2 = 0x35a944c9;
          if (uVar5 == 0) {
            uVar2 = 0xfe3959b3;
          }
          bVar11 = SBORROW4(y_31,10);
          bVar10 = y_31 + -10 < 0;
          bVar12 = y_31 < 10;
          uVar5 = 0x35a944c9;
          goto LAB_004032c7;
        }
        goto LAB_00402470;
      }
      if (uVar2 != 0xcb86c501) {
        if (uVar2 == 0xcbae457e) {
          uVar2 = 0x3388cf91;
          goto LAB_00402eb0;
        }
        if (uVar2 == 0xce0535c4) {
          uVar5 = (x_30 + -1) * x_30;
          uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
          bVar9 = uVar5 == 0;
          uVar6 = 0xd59aa118;
          uVar2 = 0x86b793c4;
          if (uVar5 == 0) {
            uVar2 = 0xd59aa118;
          }
          bVar11 = SBORROW4(y_31,10);
          bVar10 = y_31 + -10 < 0;
          bVar12 = y_31 < 10;
          uVar5 = 0x86b793c4;
          goto LAB_004032c7;
        }
        goto LAB_00402470;
      }
      file_uncompress(local_d8);
      uVar2 = 0xf5223383;
      goto LAB_0040247b;
    }
    if (-0x2a655ee9 < (int)uVar2) {
      if (uVar2 == 0xd675f2b2) {
        uVar5 = (~-x_30 * x_30 ^ 0xfffffffeU) & ~-x_30 * x_30;
        bVar9 = uVar5 == 0;
        uVar6 = 0x122f52e9;
        uVar2 = 0x269909f7;
        if (uVar5 == 0) {
          uVar2 = 0x122f52e9;
        }
        bVar11 = SBORROW4(y_31,10);
        bVar10 = y_31 + -10 < 0;
        bVar12 = y_31 < 10;
        uVar5 = 0x269909f7;
        goto LAB_004032c7;
      }
      if (uVar2 == 0xd68684b0) {
        uVar6 = ~((x_30 + -1) * x_30) | 0xfffffffe;
        bVar9 = y_31 < 10 == (uVar6 == 0xffffffff);
        uVar5 = 0xd6cd50ab;
        uVar7 = 0xf88eee4d;
        goto LAB_0040377e;
      }
      if (uVar2 == 0xd59aa118) {
                    /* WARNING: Subroutine does not return */
        error("can\'t gzdopen stdout");
      }
      goto LAB_00402470;
    }
    if (uVar2 == 0xcf8200c7) {
      local_78 = (gzFile)gzopen64(local_d8,&DAT_0040405d);
      local_115 = local_78 == (gzFile)0x0;
      uVar6 = (x_30 + -1) * x_30;
      uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
      bVar9 = y_31 < 10 == (uVar6 == 0);
      uVar5 = 0x3f018b4a;
      uVar7 = 0xf0a630eb;
      goto LAB_00402454;
    }
    if (uVar2 == 0xd1ffe1e9) {
      local_55[0] = 'f';
      uVar2 = 0x8e82d5f2;
      goto LAB_0040247b;
    }
    if (uVar2 == 0xd20bf095) {
      bVar9 = pcVar3 == (char *)0x0;
      uVar2 = 0x8916ceb7;
      uVar5 = 0x5bbf66e6;
      goto LAB_00402e64;
    }
  }
  else if ((int)uVar2 < -0x9a23b8b) {
    if (-0x1acdb70c < (int)uVar2) {
      if (uVar2 == 0xe53248f5) {
        iVar1 = fileno(stdout);
        local_68 = (gzFile)gzdopen(iVar1,local_58);
        bVar9 = local_68 == (gzFile)0x0;
        uVar2 = 0xcd695d1;
        uVar5 = 0xce0535c4;
        goto LAB_0040368d;
      }
      if (uVar2 == 0xf0a630eb) {
        bVar9 = local_115 == '\0';
        uVar2 = 0x836da1ff;
        uVar5 = 0xa45ead3a;
        goto LAB_00402e64;
      }
      if (uVar2 == 0xf5223383) {
        file_uncompress(local_d8);
        uVar5 = (x_30 + -1) * x_30;
        uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
        bVar9 = uVar5 == 0;
        uVar6 = 0x57c2b75e;
        uVar2 = 0xcb86c501;
        if (uVar5 == 0) {
          uVar2 = 0x57c2b75e;
        }
        bVar11 = SBORROW4(y_31,10);
        bVar10 = y_31 + -10 < 0;
        bVar12 = y_31 < 10;
        uVar5 = 0xcb86c501;
        goto LAB_004035a1;
      }
      goto LAB_00402470;
    }
    if (uVar2 == 0xd6cd50ab) {
      uVar2 = 0xf88eee4d;
      goto LAB_0040247b;
    }
    if (uVar2 == 0xddd389f6) {
      uVar5 = 1;
      goto LAB_00402e84;
    }
    if (uVar2 == 0xdfe2398d) {
      uVar2 = 0x5dc8c81a;
      local_100 = 1;
      local_104 = 1;
      unaff_R13 = local_c0;
      uVar8 = local_ec;
      goto LAB_00402eb0;
    }
  }
  else if ((int)uVar2 < 0x1285f4f) {
    if (uVar2 == 0xf88eee4d) {
      local_117 = *local_110 == '-';
      uVar6 = (x_30 + -1) * x_30;
      uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
      bVar9 = y_31 < 10 == (uVar6 == 0);
      uVar5 = 0xd6cd50ab;
      uVar7 = 0x6fbf58d5;
      goto LAB_00402454;
    }
    if (uVar2 == 0xfe3959b3) {
      uVar6 = (x_30 + -1) * x_30;
      uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
      bVar9 = y_31 < 10 == (uVar6 == 0);
      uVar5 = 0x35a944c9;
      uVar7 = 0xddd389f6;
      goto LAB_00402454;
    }
    if (uVar2 == 0xf65dc475) {
                    /* WARNING: Subroutine does not return */
      error("can\'t gzdopen stdin");
    }
  }
  else {
    if (uVar2 == 0x1285f4f) {
      file_compress(*local_f8,local_58);
      uVar2 = 0xb6cc6a66;
      goto LAB_0040247b;
    }
    if (uVar2 == 0xca5e66b) {
      unaff_R13 = local_b8 + 1;
      uVar2 = 0x5dc8c81a;
      local_104 = unaff_R14D;
      local_100 = unaff_R12D;
      uVar8 = local_fc - 1;
      goto LAB_00402eb0;
    }
    if (uVar2 == 0xcd695d1) {
      gz_compress((FILE *)local_70,local_68);
      goto LAB_00402e52;
    }
  }
LAB_00402470:
  unaff_R15D = uVar8;
  if (0xefac6bc < (int)uVar2) {
LAB_00402eb0:
    unaff_R15D = uVar8;
    if ((int)uVar2 < 0x397932fe) {
      if ((int)uVar2 < 0x214ec9a6) {
        if (0x15194ee8 < (int)uVar2) {
          if ((int)uVar2 < 0x1bb8e80c) {
            if (uVar2 == 0x15194ee9) {
              local_110 = *local_b8;
              iVar1 = strcmp(local_110,"-c");
              bVar9 = iVar1 == 0;
              uVar2 = 0x6ec01df0;
              uVar5 = 0xcb1ed1a3;
              goto LAB_0040368d;
            }
            if (uVar2 == 0x165da628) {
              *local_90 = '\0';
              uVar2 = 0x5641d632;
            }
            else {
              if (uVar2 != 0x1b18c990) goto LAB_00402470;
              perror(*local_f8);
LAB_00402e52:
              uVar2 = 0x7e9f6a81;
              uVar8 = unaff_R15D;
            }
          }
          else {
            if (uVar2 == 0x1bb8e80c) {
              uVar6 = (~-x_30 * x_30 ^ 0xfffffffeU) & ~-x_30 * x_30;
              bVar9 = y_31 < 10 == (uVar6 == 0);
              uVar5 = 0x3f018b4a;
              uVar7 = 0xcf8200c7;
              goto LAB_00402454;
            }
            if (uVar2 == 0x1bbff791) {
              local_c8 = local_f8 + 1;
              local_f0 = local_ac - 1;
              bVar9 = local_f0 == 0;
              uVar2 = 0xa03834a0;
              uVar5 = 0x1d1f2c5c;
              goto LAB_00402e64;
            }
            if (uVar2 != 0x1d1f2c5c) goto LAB_00402470;
            local_ac = local_f0;
            local_f8 = local_c8;
            uVar2 = 0xefac6bd;
            if (local_120 != 0) {
              uVar2 = 0x2af46fb9;
            }
            local_121 = local_114 != 0;
            if (uVar2 < 0xefac6bd) goto LAB_0040247b;
          }
          goto LAB_00402eb0;
        }
        if ((int)uVar2 < 0x1102cfe1) {
          if (uVar2 == 0xefac6bd) {
            bVar9 = local_121 == '\0';
            uVar2 = 0xb29bdaae;
            uVar5 = 0x467f5d20;
            goto LAB_00402e64;
          }
          if (uVar2 == 0xfb5b7fe) {
            local_116 = local_110[2] == '\0';
            uVar5 = (x_30 + -1) * x_30;
            uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
            bVar9 = uVar5 == 0;
            uVar6 = 0xb54e77e1;
            uVar2 = 0x6bb7c4b8;
            if (uVar5 == 0) {
              uVar2 = 0xb54e77e1;
            }
            bVar11 = SBORROW4(y_31,10);
            bVar10 = y_31 + -10 < 0;
            bVar12 = y_31 < 10;
            uVar5 = 0x6bb7c4b8;
            goto LAB_004032c7;
          }
          goto LAB_00402470;
        }
        if (uVar2 == 0x1102cfe1) {
          uVar2 = 0x5dc8c81a;
          local_104 = 0;
          local_100 = 1;
          unaff_R13 = local_c0;
          uVar8 = local_ec;
          goto LAB_00402eb0;
        }
        if (uVar2 == 0x122f52e9) {
          bVar9 = (~(~-x_30 * x_30) | 0xfffffffeU) == 0xffffffff;
          uVar6 = 0x57ec053b;
          uVar2 = 0x269909f7;
          if (bVar9) {
            uVar2 = 0x57ec053b;
          }
          bVar11 = SBORROW4(y_31,10);
          bVar10 = y_31 + -10 < 0;
          bVar12 = y_31 < 10;
          uVar5 = 0x269909f7;
LAB_004035a1:
          if (bVar11 == bVar10) {
            uVar2 = uVar5;
          }
          if ((bool)(bVar12 ^ bVar9)) {
            uVar2 = uVar6;
          }
          goto joined_r0x004035ae;
        }
        uVar5 = local_114;
        if (uVar2 == 0x138dcb73) goto LAB_00402e84;
        goto LAB_00402470;
      }
      if ((int)uVar2 < 0x2ba9c6fd) {
        if ((int)uVar2 < 0x26e63fe1) {
          if (uVar2 != 0x214ec9a6) {
            if (uVar2 != 0x269909f7) goto LAB_00402470;
            uVar2 = 0x122f52e9;
            goto LAB_00402eb0;
          }
          bVar9 = local_118 == '\0';
          uVar2 = 0xd68684b0;
          uVar5 = 0x8ec44aab;
        }
        else {
          if (uVar2 == 0x26e63fe1) {
            uVar5 = (x_30 + -1) * x_30;
            uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
            bVar9 = uVar5 == 0;
            uVar6 = 0xfb5b7fe;
            uVar2 = 0x6bb7c4b8;
            if (uVar5 == 0) {
              uVar2 = 0xfb5b7fe;
            }
            bVar11 = SBORROW4(y_31,10);
            bVar10 = y_31 + -10 < 0;
            bVar12 = y_31 < 10;
            uVar5 = 0x6bb7c4b8;
            goto LAB_004035a1;
          }
          if (uVar2 == 0x2993a816) {
            uVar2 = 0x409c83bc;
            goto LAB_00402eb0;
          }
          if (uVar2 != 0x2af46fb9) goto LAB_00402470;
          local_d8 = *local_f8;
          bVar9 = local_121 == '\0';
          uVar2 = 0xb9c2e3de;
          uVar5 = 0x1bb8e80c;
        }
LAB_00402e64:
        if (!bVar9) {
          uVar2 = uVar5;
        }
        goto joined_r0x004035ae;
      }
      if ((int)uVar2 < 0x3388cf91) {
        if (uVar2 == 0x2ba9c6fd) {
          local_55[0] = 'h';
          uVar5 = local_114;
          goto LAB_00402e84;
        }
        if (uVar2 == 0x2f5ec597) {
          gz_compress((FILE *)stdin,local_80);
          goto LAB_00402e96;
        }
        if (uVar2 == 0x318406a6) {
          iVar1 = fileno(stdin);
          local_88 = (gzFile)gzdopen(iVar1,&DAT_0040405d);
          bVar9 = local_88 == (gzFile)0x0;
          uVar2 = 0x9d2dbb9d;
          uVar5 = 0xf65dc475;
          goto LAB_0040368d;
        }
        goto LAB_00402470;
      }
      if (uVar2 == 0x3388cf91) {
        iVar1 = strcmp(local_110,"-h");
        local_119 = iVar1 == 0;
        uVar6 = (~-x_30 * x_30 ^ 0xfffffffeU) & ~-x_30 * x_30;
        bVar9 = y_31 < 10 == (uVar6 == 0);
        uVar5 = 0xcbae457e;
        uVar7 = 0x540b0ca3;
        goto LAB_00402454;
      }
      if (uVar2 == 0x35a944c9) {
        uVar2 = 0xfe3959b3;
        goto LAB_0040247b;
      }
      if (uVar2 != 0x3910442f) goto LAB_00402470;
      iVar1 = strcmp(local_110,"-f");
      bVar9 = iVar1 == 0;
      uVar2 = 0x9c52142a;
      uVar5 = 0x654069f7;
    }
    else {
      if (0x58123a9a < (int)uVar2) {
        if (0x65f8d969 < (int)uVar2) {
          if ((int)uVar2 < 0x6ec01df0) {
            if (uVar2 != 0x65f8d96a) {
              if (uVar2 != 0x6bb7c4b8) {
                if (uVar2 == 0x6ab08a73) {
                    /* WARNING: Subroutine does not return */
                  error("can\'t gzdopen stdout");
                }
                goto LAB_00402470;
              }
              uVar2 = 0xfb5b7fe;
              goto LAB_00402eb0;
            }
          }
          else {
            if (uVar2 == 0x6ec01df0) {
              iVar1 = strcmp(local_110,"-d");
              bVar9 = iVar1 == 0;
              uVar2 = 0x3910442f;
              uVar5 = 0x40f9c807;
              goto LAB_0040368d;
            }
            if (uVar2 == 0x6fbf58d5) {
              bVar9 = local_117 == '\0';
              uVar2 = 0xc4118763;
              uVar5 = 0x98011d45;
              goto LAB_00402e64;
            }
            if (uVar2 != 0x7e9f6a81) goto LAB_00402470;
          }
LAB_00403385:
          uVar2 = 0x1bbff791;
          goto LAB_00402eb0;
        }
        if ((int)uVar2 < 0x5bbf66e6) {
          if (uVar2 != 0x58123a9b) {
            if (uVar2 == 0x5a5a45c4) goto LAB_00403385;
            goto LAB_00402470;
          }
          uVar6 = ~((x_30 + -1) * x_30) | 0xfffffffe;
          bVar9 = y_31 < 10 == (uVar6 == 0xffffffff);
          uVar5 = 0x2993a816;
          uVar7 = 0x409c83bc;
LAB_0040377e:
          if (!bVar9) {
            uVar5 = uVar7;
          }
          uVar2 = uVar5;
          if (uVar6 == 0xffffffff) {
            uVar2 = uVar7;
          }
          if (9 < y_31) {
            uVar2 = uVar5;
          }
        }
        else {
          if (uVar2 == 0x5bbf66e6) {
            ppcVar4 = (char **)(pcVar3 + 1);
LAB_004035d9:
            uVar2 = 0x3cb729b9;
            local_d0 = ppcVar4;
            uVar8 = unaff_R15D;
            goto LAB_00402eb0;
          }
          if (uVar2 != 0x5dc8c81a) {
            if (uVar2 == 0x654069f7) {
              uVar6 = (~-x_30 * x_30 ^ 0xfffffffeU) & ~-x_30 * x_30;
              bVar9 = y_31 < 10 == (uVar6 == 0);
              uVar5 = 0xd1ffe1e9;
              uVar7 = 0x8e82d5f2;
LAB_00402454:
              if (!bVar9) {
                uVar5 = uVar7;
              }
              uVar2 = uVar5;
              if (uVar6 == 0) {
                uVar2 = uVar7;
              }
              if (9 < y_31) {
                uVar2 = uVar5;
              }
            }
            goto LAB_00402470;
          }
          local_120 = local_100;
          local_114 = local_104;
          bVar12 = false;
          bVar9 = uVar8 == 0;
          uVar5 = 0x15194ee9;
          local_fc = uVar8;
          local_b8 = unaff_R13;
LAB_00402e74:
          bVar10 = (int)uVar8 < 0;
          uVar2 = 0xc4118763;
          uVar8 = unaff_R15D;
          if (!bVar9 && bVar12 == bVar10) {
            uVar2 = uVar5;
          }
        }
        goto joined_r0x004035ae;
      }
      if ((int)uVar2 < 0x40f9c807) {
        if ((int)uVar2 < 0x3cb729b9) {
          if (uVar2 != 0x397932fe) {
            if (uVar2 == 0x3ca98471) {
              iVar1 = strcmp(local_110,"-r");
              local_118 = iVar1 == 0;
              uVar5 = (x_30 + -1) * x_30;
              uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
              bVar9 = uVar5 == 0;
              uVar6 = 0x214ec9a6;
              uVar2 = 0xca5dfada;
              if (uVar5 == 0) {
                uVar2 = 0x214ec9a6;
              }
              bVar11 = SBORROW4(y_31,10);
              bVar10 = y_31 + -10 < 0;
              bVar12 = y_31 < 10;
              uVar5 = 0xca5dfada;
              goto LAB_004035a1;
            }
            goto LAB_00402470;
          }
          uVar2 = 0xc4118763;
          if (local_dc < 0x3a) {
            uVar2 = 0x26e63fe1;
          }
        }
        else {
          if (uVar2 == 0x3cb729b9) {
            local_60 = local_d0;
            local_c0 = local_38;
            iVar1 = strcmp((char *)local_d0,"gunzip");
            bVar9 = iVar1 == 0;
            uVar2 = 0x1102cfe1;
            uVar5 = 0x9b71b37c;
            local_ec = ~-argc;
            goto LAB_00402e64;
          }
          if (uVar2 == 0x3f018b4a) {
            gzopen64(local_d8,&DAT_0040405d);
            uVar2 = 0xcf8200c7;
            goto LAB_0040247b;
          }
          if (uVar2 != 0x409c83bc) goto LAB_00402470;
          bVar9 = (~((x_30 + -1) * x_30) | 0xfffffffeU) == 0xffffffff;
          uVar6 = 0xdfe2398d;
          uVar2 = 0x2993a816;
          if (bVar9) {
            uVar2 = 0xdfe2398d;
          }
          bVar11 = SBORROW4(y_31,10);
          bVar10 = y_31 + -10 < 0;
          bVar12 = y_31 < 10;
          uVar5 = 0x2993a816;
LAB_004032c7:
          if (bVar11 == bVar10) {
            uVar2 = uVar5;
          }
          if ((bool)(bVar12 ^ bVar9)) {
            uVar2 = uVar6;
          }
        }
        goto joined_r0x004035ae;
      }
      if ((int)uVar2 < 0x5641d632) {
        if (uVar2 == 0x40f9c807) {
          uVar2 = 0xca5e66b;
          unaff_R12D = 1;
          unaff_R14D = local_114;
          goto LAB_0040247b;
        }
        if (uVar2 != 0x467f5d20) {
          if (uVar2 == 0x540b0ca3) {
            bVar9 = local_119 == '\0';
            uVar2 = 0xc77c5a36;
            uVar5 = 0x2ba9c6fd;
            goto LAB_00402e64;
          }
          goto LAB_00402470;
        }
        local_70 = fopen64(*local_f8,"rb");
        bVar9 = local_70 == (FILE *)0x0;
        uVar2 = 0xe53248f5;
        uVar5 = 0x1b18c990;
      }
      else {
        if (uVar2 != 0x5641d632) {
          if (uVar2 == 0x57c2b75e) goto LAB_00403385;
          if (uVar2 != 0x57ec053b) goto LAB_00402470;
          local_c8 = local_b8;
          uVar2 = 0x1d1f2c5c;
          local_f0 = local_fc;
          goto LAB_00402eb0;
        }
        bVar9 = local_fc == 0;
        uVar2 = 0xd675f2b2;
        uVar5 = 0xb48084bf;
      }
    }
LAB_0040368d:
    if (bVar9) {
      uVar2 = uVar5;
    }
joined_r0x004035ae:
    unaff_R15D = uVar8;
    if ((int)uVar2 < 0xefac6bd) goto LAB_0040247b;
    goto LAB_00402eb0;
  }
  goto LAB_0040247b;
}

