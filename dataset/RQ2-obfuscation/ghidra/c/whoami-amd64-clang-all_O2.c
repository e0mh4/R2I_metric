
void _dl_relocate_static_pie(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402a74) */
/* WARNING: Removing unreachable block (ram,0x004029e3) */
/* WARNING: Removing unreachable block (ram,0x00402f4b) */
/* WARNING: Removing unreachable block (ram,0x00402512) */
/* WARNING: Removing unreachable block (ram,0x00402d4d) */
/* WARNING: Removing unreachable block (ram,0x00402f65) */
/* WARNING: Removing unreachable block (ram,0x0040286d) */
/* WARNING: Removing unreachable block (ram,0x0040283d) */
/* WARNING: Type propagation algorithm not settling */

void usage(int status)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  char *unaff_R12;
  undefined1 *unaff_R13;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  byte local_6c;
  char local_6b;
  char local_6a;
  byte local_69;
  char **local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_40;
  char **local_38;
  
  iVar2 = -0x4e0d400d;
  if (status != 0) {
    iVar2 = 0x3f8fa8fe;
  }
  iVar3 = 0x6423f425;
LAB_004023f5:
  bVar12 = 0x7d;
  uVar5 = stderr;
joined_r0x00402405:
  while (stderr = uVar5, 0x3f8fa8fd < iVar3) {
    if (iVar3 == 0x3f8fa8fe) {
      uVar8 = (x + -1) * x;
      uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
      iVar10 = 0x48d103bc;
      if (y < 10 != (uVar8 == 0)) {
        iVar10 = -0x165231a6;
      }
      iVar3 = iVar10;
      if (uVar8 == 0) {
        iVar3 = -0x165231a6;
      }
      if (9 < y) {
        iVar3 = iVar10;
      }
    }
    else if (iVar3 == 0x48d103bc) {
      uVar4 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
      __fprintf_chk(uVar5,1,uVar4,program_name);
      iVar3 = -0x165231a6;
      uVar5 = stderr;
    }
    else {
      bVar13 = iVar3 != 0x6423f425;
      iVar3 = iVar2;
      if (bVar13) {
LAB_00403020:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
  }
  while (iVar3 < -0x4e0d400d) {
    if (iVar3 != -0x7d0f6a83) {
      if (iVar3 == -0x773555dc) {
                    /* WARNING: Subroutine does not return */
        exit(status);
      }
      goto LAB_00403020;
    }
    iVar3 = -0x773555dc;
  }
  if (iVar3 != -0x4e0d400d) {
    if (iVar3 != -0x165231a6) goto LAB_00403020;
    uVar4 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(uVar5,1,uVar4,program_name);
    uVar8 = ~((x + -1) * x) | 0xfffffffe;
    iVar10 = 0x48d103bc;
    if (y < 10 != (uVar8 == 0xffffffff)) {
      iVar10 = -0x7d0f6a83;
    }
    iVar3 = iVar10;
    if (uVar8 == 0xffffffff) {
      iVar3 = -0x7d0f6a83;
    }
    uVar5 = stderr;
    if (9 < y) {
      iVar3 = iVar10;
    }
    goto joined_r0x00402405;
  }
  uVar5 = dcgettext(0,"Usage: %s [OPTION]...\n",5);
  __printf_chk(1,uVar5,program_name);
  pcVar6 = (char *)dcgettext(0,
                             "Print the user name associated with the current effective user ID.\nSame as id -un.\n\n"
                             ,5);
  fputs_unlocked(pcVar6,stdout);
  pcVar6 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar6,stdout);
  pcVar6 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar6,stdout);
  bVar14 = ((~-x_28 * x_28 ^ 0xfffffffeU) & ~-x_28 * x_28) == 0;
  bVar13 = y_29 < 10;
  uVar8 = 0x4605a73b;
LAB_00402b80:
  if ((int)uVar8 < 0x594e312c) {
    if ((int)uVar8 < 0x1c3f06af) {
      if ((int)uVar8 < 0x13ccad60) {
        if (uVar8 != 0xbe773e6) {
          if (uVar8 != 0xf46b0d8) goto joined_r0x00402de3;
          uVar7 = ~(~-x_28 * x_28) | 0xfffffffe;
          bVar15 = y_29 < 10 == (uVar7 == 0xffffffff);
          uVar9 = 0x790b9f27;
          local_60 = unaff_R12;
          goto LAB_00402cfb;
        }
        uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
        __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
        setlocale(5,(char *)0x0);
        uVar8 = 0x790b9f27;
      }
      else {
        if (uVar8 == 0x13ccad60) {
          local_38 = local_68 + 2;
          uVar9 = (~-x_28 * x_28 ^ 0xfffffffeU) & ~-x_28 * x_28;
          bVar15 = y_29 < 10 == (uVar9 == 0);
          uVar7 = 0x189eaf52;
          uVar11 = 0x99008aa5;
          goto LAB_00402fa9;
        }
        if (uVar8 != 0x189eaf52) goto joined_r0x00402de3;
        uVar8 = 0x13ccad60;
      }
      goto LAB_00402b80;
    }
    if (0x4605a73a < (int)uVar8) {
      if (uVar8 == 0x4605a73b) {
        uVar7 = 0x49f0d145;
        if (bVar14 != bVar13) {
          uVar7 = 0x261dbb24;
        }
        uVar8 = uVar7;
        if (bVar13) {
          uVar8 = 0x261dbb24;
        }
        if (!bVar14) {
          uVar8 = uVar7;
        }
        if (uVar8 < 0xbe773e6) goto LAB_0040266b;
      }
      else {
        if (uVar8 != 0x49f0d145) {
          if (uVar8 == 0x4e91cc84) {
            bVar15 = (~(~-x_28 * x_28) | 0xfffffffeU) == 0xffffffff;
            uVar7 = 0x37db858;
            uVar8 = 0x976d8556;
            if (bVar15) {
              uVar8 = 0x37db858;
            }
            bVar17 = SBORROW4(y_29,10);
            bVar16 = y_29 + -10 < 0;
            bVar1 = y_29 < 10;
            uVar9 = 0x976d8556;
            goto LAB_00402ffc;
          }
          goto joined_r0x00402de3;
        }
        uVar8 = 0x261dbb24;
      }
      goto LAB_00402b80;
    }
    if (uVar8 == 0x1c3f06af) {
      uVar8 = 0xa2fab0b5;
      goto LAB_0040266b;
    }
    if (uVar8 == 0x261dbb24) {
      uVar7 = (x_28 + -1) * x_28;
      uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
      bVar15 = uVar7 == 0;
      uVar9 = 0xb6934071;
      uVar8 = 0x49f0d145;
      if (uVar7 == 0) {
        uVar8 = 0xb6934071;
      }
      bVar17 = SBORROW4(y_29,10);
      bVar16 = y_29 + -10 < 0;
      bVar1 = y_29 < 10;
      uVar7 = 0x49f0d145;
      goto LAB_00402654;
    }
  }
  else {
    if ((int)uVar8 < 0x70fe7311) {
      if ((int)uVar8 < 0x6525b2a8) {
        if (uVar8 == 0x594e312c) {
          bVar15 = (~((x_28 + -1) * x_28) | 0xfffffffeU) == 0xffffffff;
          uVar7 = 0x13ccad60;
          uVar8 = 0x189eaf52;
          if (bVar15) {
            uVar8 = 0x13ccad60;
          }
          bVar17 = SBORROW4(y_29,10);
          bVar16 = y_29 + -10 < 0;
          bVar1 = y_29 < 10;
          uVar9 = 0x189eaf52;
          goto LAB_00402ffc;
        }
        if (uVar8 == 0x5d50ab1d) {
          uVar8 = 0x93af4a2f;
          goto LAB_0040266b;
        }
      }
      else {
        if (uVar8 == 0x6525b2a8) {
          bVar15 = (~((x_28 + -1) * x_28) | 0xfffffffeU) == 0xffffffff;
          uVar7 = 0xa2fab0b5;
          uVar8 = 0x1c3f06af;
          if (bVar15) {
            uVar8 = 0xa2fab0b5;
          }
          bVar17 = SBORROW4(y_29,10);
          bVar16 = y_29 + -10 < 0;
          bVar1 = y_29 < 10;
          uVar9 = 0x1c3f06af;
          goto LAB_00402ffc;
        }
        if (uVar8 == 0x65ce8cb7) {
          uVar9 = (x_28 + -1) * x_28;
          uVar9 = (uVar9 ^ 0xfffffffe) & uVar9;
          bVar15 = y_29 < 10 == (uVar9 == 0);
          uVar7 = 0xb45a55e9;
          uVar11 = 0xa9e931d6;
          goto LAB_00402fa9;
        }
      }
      goto joined_r0x00402de3;
    }
    if (0x7a7109d7 < (int)uVar8) {
      if (uVar8 == 0x7a7109d8) {
        uVar8 = 0xaccf628f;
        bVar12 = local_6c;
        goto LAB_0040266b;
      }
      if (uVar8 == 0x7d49cde4) {
        local_40 = local_68[1];
        uVar8 = 0xf46b0d8;
        if (local_40 != (char *)0x0) {
          uVar8 = 0xe84ccd16;
        }
        unaff_R12 = "whoami";
      }
      goto joined_r0x00402de3;
    }
    if (uVar8 == 0x70fe7311) goto LAB_004023f0;
    if (uVar8 != 0x790b9f27) goto joined_r0x00402de3;
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    local_50 = setlocale(5,(char *)0x0);
    local_6b = local_50 != (char *)0x0;
    uVar7 = ~((x_28 + -1) * x_28) | 0xfffffffe;
    bVar15 = y_29 < 10 == (uVar7 == 0xffffffff);
    uVar9 = 0xb150a787;
LAB_00402cfb:
    uVar11 = 0xbe773e6;
    if (!bVar15) {
      uVar11 = uVar9;
    }
    uVar8 = uVar11;
    if (uVar7 == 0xffffffff) {
      uVar8 = uVar9;
    }
    if (9 < y_29) {
      uVar8 = uVar11;
    }
  }
joined_r0x00402de3:
  if (0xbe773e5 < (int)uVar8) goto LAB_00402b80;
LAB_0040266b:
  while (-0x4eaf587a < (int)uVar8) {
    if ((int)uVar8 < -0x2943a3ae) {
      if ((int)uVar8 < -0x496cbf8f) {
        if (uVar8 == 0xb150a787) {
          bVar15 = local_6b == '\0';
          uVar8 = 0x93af4a2f;
          uVar7 = 0xc7cc5185;
          goto LAB_00402a31;
        }
        if (uVar8 == 0xb45a55e9) {
          uVar8 = 0x65ce8cb7;
          goto LAB_00402b80;
        }
        goto joined_r0x00402de3;
      }
      if (uVar8 != 0xb6934071) {
        if (uVar8 == 0xc7cc5185) {
          uVar7 = (~-x_28 * x_28 ^ 0xfffffffeU) & ~-x_28 * x_28;
          bVar15 = uVar7 == 0;
          uVar9 = 0xd6bc5c52;
          uVar8 = 0xe787759e;
          if (uVar7 == 0) {
            uVar8 = 0xd6bc5c52;
          }
          bVar17 = SBORROW4(y_29,10);
          bVar16 = y_29 + -10 < 0;
          bVar1 = y_29 < 10;
          uVar7 = 0xe787759e;
          goto LAB_00402654;
        }
        goto joined_r0x00402de3;
      }
      uVar8 = 0x91c35b21;
      unaff_R13 = emit_ancillary_info_infomap;
    }
    else if ((int)uVar8 < -0x17b332ea) {
      if (uVar8 == 0xd6bc5c52) {
        iVar3 = strncmp(local_50,"en_",3);
        local_6a = iVar3 != 0;
        uVar9 = (x_28 + -1) * x_28;
        uVar9 = (uVar9 ^ 0xfffffffe) & uVar9;
        bVar15 = y_29 < 10 == (uVar9 == 0);
        uVar7 = 0xe787759e;
        uVar11 = 0x96e2b2e1;
        goto LAB_00402fa9;
      }
      if (uVar8 != 0xe787759e) goto joined_r0x00402de3;
      uVar8 = 0xd6bc5c52;
    }
    else {
      if (uVar8 == 0xe84ccd16) {
        uVar8 = 0xf46b0d8;
        unaff_R12 = local_40;
        goto LAB_00402b80;
      }
      if (uVar8 != 0xeb8d3910) {
        if (uVar8 == 0x37db858) {
          pcVar6 = (char *)dcgettext(0,
                                     "Report any translation bugs to <https://translationproject.org/team/>\n"
                                     ,5);
          fputs_unlocked(pcVar6,stdout);
          uVar7 = (x_28 + -1) * x_28;
          uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
          bVar15 = uVar7 == 0;
          uVar9 = 0x5d50ab1d;
          uVar8 = 0x976d8556;
          if (uVar7 == 0) {
            uVar8 = 0x5d50ab1d;
          }
          bVar17 = SBORROW4(y_29,10);
          bVar16 = y_29 + -10 < 0;
          bVar1 = y_29 < 10;
          uVar7 = 0x976d8556;
          goto LAB_00402654;
        }
        goto joined_r0x00402de3;
      }
      uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
      __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","whoami");
      uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
      pcVar6 = "";
      if (local_60 == "whoami") {
        pcVar6 = " invocation";
      }
      __printf_chk(1,uVar5,local_60,pcVar6);
      uVar8 = 0x965bac4c;
    }
  }
  if ((int)uVar8 < -0x68927aaa) {
    if ((int)uVar8 < -0x69a453b4) {
      if (uVar8 == 0x91c35b21) {
        local_58 = *(char **)unaff_R13;
        uVar8 = 0xaccf628f;
        if (local_58 != (char *)0x0) {
          uVar8 = 0x6525b2a8;
        }
        bVar12 = 0;
        local_68 = (char **)unaff_R13;
      }
      else if (uVar8 == 0x93af4a2f) {
        bVar15 = (~(~-x_28 * x_28) | 0xfffffffeU) == 0xffffffff;
        uVar9 = 0x965bac4c;
        uVar8 = 0xeb8d3910;
        if (bVar15) {
          uVar8 = 0x965bac4c;
        }
        bVar17 = SBORROW4(y_29,10);
        bVar16 = y_29 + -10 < 0;
        bVar1 = y_29 < 10;
        uVar7 = 0xeb8d3910;
LAB_00402654:
        if (bVar17 == bVar16) {
          uVar8 = uVar7;
        }
        if ((bool)(bVar1 ^ bVar15)) {
          uVar8 = uVar9;
        }
      }
      goto joined_r0x00402de3;
    }
    if (uVar8 == 0x965bac4c) {
      uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
      __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","whoami");
      uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
      pcVar6 = "";
      if (local_60 == "whoami") {
        pcVar6 = " invocation";
      }
      __printf_chk(1,uVar5,local_60,pcVar6);
      bVar15 = (~((x_28 + -1) * x_28) | 0xfffffffeU) == 0xffffffff;
      uVar7 = 0x70fe7311;
      uVar8 = 0xeb8d3910;
      if (bVar15) {
        uVar8 = 0x70fe7311;
      }
      bVar17 = SBORROW4(y_29,10);
      bVar16 = y_29 + -10 < 0;
      bVar1 = y_29 < 10;
      uVar9 = 0xeb8d3910;
LAB_00402ffc:
      if (bVar17 == bVar16) {
        uVar8 = uVar9;
      }
      if ((bool)(bVar1 ^ bVar15)) {
        uVar8 = uVar7;
      }
      goto joined_r0x00402de3;
    }
    if (uVar8 != 0x96e2b2e1) goto joined_r0x00402de3;
    bVar15 = local_6a == '\0';
    uVar8 = 0x93af4a2f;
    uVar7 = 0x4e91cc84;
  }
  else {
    if ((int)uVar8 < -0x5d054f4b) {
      if (uVar8 == 0x976d8556) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,stdout);
        uVar8 = 0x37db858;
      }
      else {
        if (uVar8 != 0x99008aa5) goto joined_r0x00402de3;
        uVar8 = 0x91c35b21;
        unaff_R13 = (undefined1 *)local_38;
      }
      goto LAB_0040266b;
    }
    if (uVar8 == 0xa2fab0b5) {
      iVar3 = strcmp("whoami",local_58);
      local_6c = iVar3 != 0;
      uVar9 = (x_28 + -1) * x_28;
      uVar9 = (uVar9 ^ 0xfffffffe) & uVar9;
      bVar15 = y_29 < 10 == (uVar9 == 0);
      uVar7 = 0x1c3f06af;
      uVar11 = 0x7a7109d8;
LAB_00402fa9:
      if (!bVar15) {
        uVar7 = uVar11;
      }
      uVar8 = uVar7;
      if (uVar9 == 0) {
        uVar8 = uVar11;
      }
      if (9 < y_29) {
        uVar8 = uVar7;
      }
      goto joined_r0x00402de3;
    }
    if (uVar8 != 0xa9e931d6) {
      if (uVar8 == 0xaccf628f) {
        local_69 = bVar12 & 1;
        uVar7 = (x_28 + -1) * x_28;
        uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
        bVar15 = uVar7 == 0;
        uVar9 = 0x65ce8cb7;
        uVar8 = 0xb45a55e9;
        if (uVar7 == 0) {
          uVar8 = 0x65ce8cb7;
        }
        bVar17 = SBORROW4(y_29,10);
        bVar16 = y_29 + -10 < 0;
        bVar1 = y_29 < 10;
        uVar7 = 0xb45a55e9;
        goto LAB_00402654;
      }
      goto joined_r0x00402de3;
    }
    bVar15 = local_69 == 0;
    uVar8 = 0x7d49cde4;
    uVar7 = 0x594e312c;
  }
LAB_00402a31:
  if (!bVar15) {
    uVar8 = uVar7;
  }
  goto joined_r0x00402de3;
LAB_004023f0:
  iVar3 = -0x773555dc;
  goto LAB_004023f5;
}


/* WARNING: Removing unreachable block (ram,0x00403371) */
/* WARNING: Removing unreachable block (ram,0x004030d9) */
/* WARNING: Removing unreachable block (ram,0x004031d3) */

int main(int argc,char **argv)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  passwd *unaff_R12;
  bool bVar7;
  char local_55;
  __uid_t local_54;
  int *local_50;
  passwd *local_40;
  passwd *local_38;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  parse_gnu_standard_options_only
            (argc,argv,"whoami","GNU coreutils",Version,true,usage,"Richard Mlynarik",0);
  iVar1 = optind;
  iVar3 = 0x3fca0bbe;
LAB_004030fb:
  do {
    if (iVar3 < 0x261171bc) {
      if (iVar3 < 0x134b4155) {
        if (iVar3 == -0xe553a6e) {
          local_55 = *local_50 != 0;
          uVar2 = (~-x_30 * x_30 ^ 0xfffffffeU) & ~-x_30 * x_30;
          iVar6 = 0x70249cd3;
          if (y_31 < 10 != (uVar2 == 0)) {
            iVar6 = -0x2c0ab567;
          }
          iVar3 = iVar6;
          if (uVar2 != 0) goto LAB_004030de;
          iVar3 = -0x2c0ab567;
          goto LAB_004030de;
        }
        if (iVar3 == 0x3dae373) {
          iVar3 = *local_50;
          uVar4 = dcgettext(0,"cannot find name for user ID %lu",5);
          error(1,iVar3,uVar4,local_54);
LAB_00403433:
          uVar4 = dcgettext(0,"extra operand %s",5);
          pcVar5 = quote(argv[optind]);
          error(0,0,uVar4,pcVar5);
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
      }
      else if (iVar3 == 0x134b4155) {
        local_38 = getpwuid(local_54);
        bVar7 = (~((x_30 + -1) * x_30) | 0xfffffffeU) == 0xffffffff;
        iVar3 = -0x415a391d;
        if (bVar7) {
          iVar3 = -0x339b9a4c;
        }
        if (9 < y_31) {
          iVar3 = -0x415a391d;
        }
        if (y_31 < 10 != bVar7) {
          iVar3 = -0x339b9a4c;
        }
      }
      else if (iVar3 == 0x24124a74) {
        puts(local_40->pw_name);
        return 0;
      }
    }
    else if (iVar3 < 0x4013ab1f) {
      if (iVar3 == 0x261171bc) {
        local_50 = __errno_location();
        *local_50 = 0;
        local_54 = geteuid();
        iVar3 = -0x1216ef3e;
        if (local_54 == 0xffffffff) {
          iVar3 = -0x28d87ccd;
        }
      }
      else if (iVar3 == 0x3fca0bbe) {
        bVar7 = iVar1 == argc;
        iVar3 = 0x261171bc;
        iVar6 = 0x4013ab1f;
        goto LAB_0040328a;
      }
    }
    else {
      if (iVar3 == 0x70249cd3) {
        iVar3 = -0xe553a6e;
        goto LAB_004030fb;
      }
      if (iVar3 == 0x4013ab1f) goto LAB_00403433;
    }
joined_r0x00403262:
    if (iVar3 < -0xe553a6e) {
LAB_004032a0:
      while (iVar3 < -0x2c0ab567) {
        if (iVar3 == -0x48731ce5) {
          bVar7 = unaff_R12 == (passwd *)0x0;
          iVar3 = 0x3dae373;
          iVar6 = 0x24124a74;
          local_40 = unaff_R12;
LAB_0040328a:
          if (!bVar7) {
            iVar3 = iVar6;
          }
          goto joined_r0x00403292;
        }
        if (iVar3 == -0x415a391d) {
          getpwuid(local_54);
          iVar3 = 0x134b4155;
          goto LAB_004030fb;
        }
        if (iVar3 != -0x339b9a4c) goto joined_r0x00403262;
        unaff_R12 = local_38;
        iVar3 = -0x48731ce5;
      }
      if (iVar3 == -0x2c0ab567) {
        iVar3 = -0x1216ef3e;
        if (local_55 != '\0') {
          iVar3 = -0x48731ce5;
        }
        unaff_R12 = (passwd *)0x0;
      }
      else {
        if (iVar3 != -0x28d87ccd) {
          if (iVar3 == -0x1216ef3e) {
            uVar2 = (x_30 + -1) * x_30;
            uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
            iVar6 = -0x415a391d;
            if (y_31 < 10 != (uVar2 == 0)) {
              iVar6 = 0x134b4155;
            }
            iVar3 = iVar6;
            if (uVar2 == 0) {
              iVar3 = 0x134b4155;
            }
LAB_004030de:
            if (9 < y_31) {
              iVar3 = iVar6;
            }
          }
          goto joined_r0x00403262;
        }
        bVar7 = (~((x_30 + -1) * x_30) | 0xfffffffeU) == 0xffffffff;
        iVar3 = 0x70249cd3;
        if (bVar7) {
          iVar3 = -0xe553a6e;
        }
        if (9 < y_31) {
          iVar3 = 0x70249cd3;
        }
        if (y_31 < 10 != bVar7) {
          iVar3 = -0xe553a6e;
        }
      }
joined_r0x00403292:
      if (-0xe553a6f < iVar3) goto LAB_004030fb;
      goto LAB_004032a0;
    }
  } while( true );
}


void close_stdout_set_file_name(char *file)

{
  file_name = file;
  return;
}


/* WARNING: Removing unreachable block (ram,0x004034f1) */

void close_stdout_set_ignore_EPIPE(_Bool ignore)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  uVar2 = ~(~-x_3 * x_3) | 0xfffffffe;
  iVar3 = -0x5e3ef030;
  if (y_4 < 10 != (uVar2 == 0xffffffff)) {
    iVar3 = -0x325df4a3;
  }
  bVar6 = uVar2 == 0xffffffff;
  iVar5 = -0x325df4a3;
  if (!bVar6) {
    iVar5 = iVar3;
  }
  if (9 < y_4) {
    iVar5 = iVar3;
  }
  iVar3 = 0x18960322;
  while( true ) {
    do {
      uVar1 = ignore;
      iVar4 = iVar5;
      if (iVar3 != -0x193afa9a) {
        if (iVar3 != 0x18960322) goto LAB_00403580;
        iVar3 = -0x5e3ef030;
        if (bVar6 != y_4 < 10) {
          iVar3 = -0x193afa9a;
        }
        iVar4 = iVar3;
        if (y_4 < 10) {
          iVar4 = -0x193afa9a;
        }
        uVar1 = ignore_EPIPE;
        if (!bVar6) {
          iVar4 = iVar3;
        }
      }
      iVar3 = iVar4;
      ignore_EPIPE = (_Bool)uVar1;
    } while (-0x193afa9b < iVar3);
    if (iVar3 != -0x5e3ef030) break;
    iVar3 = -0x193afa9a;
    ignore_EPIPE = ignore;
  }
  if (iVar3 == -0x325df4a3) {
    return;
  }
LAB_00403580:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00403799) */
/* WARNING: Removing unreachable block (ram,0x0040398c) */

void close_stdout(void)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  char local_46;
  char local_45;
  int local_44;
  undefined8 local_40;
  char *local_38;
  
  uVar5 = (x_5 + -1) * x_5;
  bVar8 = ((uVar5 ^ 0xfffffffe) & uVar5) == 0;
  bVar1 = y_6 < 10;
  uVar5 = 0xbe1291d8;
LAB_0040360d:
  do {
    while ((int)uVar5 < -0x17f342b2) {
      if ((int)uVar5 < -0x431cb983) {
        if (uVar5 != 0x8bd0148e) {
          if (uVar5 != 0x8e42070a) goto joined_r0x00403607;
                    /* WARNING: Subroutine does not return */
          _exit(exit_failure);
        }
        bVar9 = ignore_EPIPE == false;
        uVar5 = 0x4671751a;
        uVar6 = 0x459dbd79;
        goto LAB_004037b0;
      }
      if (uVar5 == 0xbce3467d) {
        bVar9 = local_45 == '\0';
        uVar5 = 0x4671751a;
        uVar6 = 0x2f11209d;
        goto LAB_004037b0;
      }
      if (uVar5 != 0xbe1291d8) goto joined_r0x00403607;
      uVar5 = 0x4fb049f0;
      if (bVar1) {
        uVar5 = 0x10f61754;
      }
      if (!bVar8) {
        uVar5 = 0x4fb049f0;
      }
      if (bVar8 != bVar1) {
        uVar5 = 0x10f61754;
      }
      if (0x1ab3cb75 < uVar5) goto LAB_004037c1;
    }
    if ((int)uVar5 < 0xcb28fb1) {
      if (uVar5 != 0xe80cbd4e) {
        if (uVar5 != 0xf9da853f) goto joined_r0x00403607;
        uVar5 = 0x1ab3cb76;
        goto LAB_004037c1;
      }
      pcVar3 = quotearg_colon(local_38);
      error(0,local_44,"%s: %s",pcVar3,local_40);
    }
    else {
      if (uVar5 != 0xcb28fb1) {
        if (uVar5 != 0x10f61754) goto joined_r0x00403607;
        iVar2 = close_stream(stdout);
        local_46 = iVar2 != 0;
        uVar7 = (~-x_5 * x_5 ^ 0xfffffffeU) & ~-x_5 * x_5;
        uVar6 = 0x4fb049f0;
        if (y_6 < 10 != (uVar7 == 0)) {
          uVar6 = 0x4938c210;
        }
        uVar5 = uVar6;
        if (uVar7 == 0) {
          uVar5 = 0x4938c210;
        }
        do {
          if (9 < y_6) {
            uVar5 = uVar6;
          }
joined_r0x00403607:
          do {
            while( true ) {
              if ((int)uVar5 < 0x1ab3cb76) goto LAB_0040360d;
LAB_004037c1:
              if ((int)uVar5 < 0x4671751a) break;
              if ((int)uVar5 < 0x4fb049f0) {
                if (uVar5 == 0x4671751a) {
                  local_40 = dcgettext(0,"write error",5);
                  local_38 = file_name;
                  uVar5 = 0xcb28fb1;
                  if (file_name != (char *)0x0) {
                    uVar5 = 0xe80cbd4e;
                  }
                  piVar4 = __errno_location();
                  local_44 = *piVar4;
                }
                else if (uVar5 == 0x4938c210) {
                  bVar9 = local_46 == '\0';
                  uVar5 = 0x2f11209d;
                  uVar6 = 0x8bd0148e;
LAB_004037b0:
                  if (!bVar9) {
                    uVar5 = uVar6;
                  }
                }
              }
              else {
                if (uVar5 == 0x4fb049f0) {
                  close_stream(stdout);
                  uVar5 = 0x10f61754;
                  goto LAB_0040360d;
                }
                if (uVar5 == 0x670b89cb) {
                  return;
                }
              }
            }
            if ((int)uVar5 < 0x2f11209d) {
              if (uVar5 == 0x1ab3cb76) {
                piVar4 = __errno_location();
                local_45 = *piVar4 == 0x20;
                uVar7 = ~(~-x_5 * x_5) | 0xfffffffe;
                uVar6 = 0xf9da853f;
                if (y_6 < 10 != (uVar7 == 0xffffffff)) {
                  uVar6 = 0xbce3467d;
                }
                uVar5 = uVar6;
                if (uVar7 == 0xffffffff) {
                  uVar5 = 0xbce3467d;
                }
                if (9 < y_6) {
                  uVar5 = uVar6;
                }
              }
              else if (uVar5 == 0x27d72348) {
                    /* WARNING: Subroutine does not return */
                _exit(exit_failure);
              }
              goto joined_r0x00403607;
            }
            if (uVar5 == 0x2f11209d) {
              iVar2 = close_stream(stderr);
              bVar9 = iVar2 == 0;
              uVar5 = 0x670b89cb;
              uVar6 = 0x27d72348;
              goto LAB_004037b0;
            }
          } while (uVar5 != 0x459dbd79);
          uVar7 = (x_5 + -1) * x_5;
          uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
          uVar6 = 0xf9da853f;
          if (y_6 < 10 != (uVar7 == 0)) {
            uVar6 = 0x1ab3cb76;
          }
          uVar5 = uVar6;
          if (uVar7 == 0) {
            uVar5 = 0x1ab3cb76;
          }
        } while( true );
      }
      error(0,local_44,"%s",local_40);
    }
    uVar5 = 0x8e42070a;
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00403c24) */
/* WARNING: Removing unreachable block (ram,0x00403a76) */
/* WARNING: Removing unreachable block (ram,0x00403b54) */

void parse_long_options(int argc,char **argv,char *command_name,char *package,char *version,
                       _func_void_int *usage_func,...)

{
  undefined4 uVar1;
  char in_AL;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM6_Da;
  undefined4 in_XMM7_Da;
  int local_128;
  __va_list_tag local_108;
  undefined local_e8 [48];
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  
  uVar1 = opterr;
  if (in_AL != '\0') {
    local_b8 = in_XMM0_Da;
    local_a8 = in_XMM1_Da;
    local_98 = in_XMM2_Da;
    local_88 = in_XMM3_Da;
    local_78 = in_XMM4_Da;
    local_68 = in_XMM5_Da;
    local_58 = in_XMM6_Da;
    local_48 = in_XMM7_Da;
  }
  opterr = 0;
  iVar2 = 0x499e8f4e;
  if (argc != 2) {
    iVar2 = -0x596d2b38;
  }
  iVar3 = 0x6e4a73ca;
LAB_00403a8b:
  if (iVar3 < 0x487a1618) {
    if (iVar3 == -0x1af479a9) {
      optind = 0;
      uVar5 = ~((x + -1) * x) | 0xfffffffe;
      iVar3 = -0x535cb598;
      if (y < 10 != (uVar5 == 0xffffffff)) {
        iVar3 = -0x28e350ca;
      }
      iVar4 = iVar3;
      if (uVar5 == 0xffffffff) {
        iVar4 = -0x28e350ca;
      }
      opterr = uVar1;
      if (9 < y) {
        iVar4 = iVar3;
      }
    }
    else {
      if (iVar3 == 0x402dd83) {
        (*usage_func)(0);
        goto LAB_00403a7b;
      }
      if (iVar3 != 0x39fe9022) goto joined_r0x00403c69;
      iVar4 = -0x60de74d5;
      if (local_128 < 0x76) {
        iVar4 = -0x4b43445c;
      }
    }
  }
  else if (iVar3 < 0x6e4a73ca) {
    if (iVar3 != 0x499e8f4e) {
      if (iVar3 != 0x487a1618) goto joined_r0x00403c69;
      local_108.reg_save_area = local_e8;
      local_108.overflow_arg_area = &stack0x00000008;
      local_108.fp_offset = 0x30;
      local_108.gp_offset = 0x30;
      version_etc_va(stdout,command_name,package,version,&local_108);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    local_128 = getopt_long(argc,argv,&DAT_00419358,long_options,0);
    iVar4 = -0x596d2b38;
    if (local_128 != -1) {
      iVar4 = 0x7d71aa34;
    }
  }
  else {
    if (iVar3 == 0x7d71aa34) {
      iVar3 = 0x39fe9022;
      goto LAB_00403a8b;
    }
    iVar4 = iVar2;
    if (iVar3 != 0x6e4a73ca) goto joined_r0x00403c69;
  }
joined_r0x00403bb4:
  iVar3 = iVar4;
  if (iVar3 < -0x1af479a9) {
    do {
      if (iVar3 < -0x4b43445c) {
        if (iVar3 == -0x60de74d5) {
          iVar3 = -0x36a47ad9;
          if (local_128 == 0x76) {
            iVar3 = 0x487a1618;
          }
        }
        else {
          if (iVar3 == -0x596d2b38) goto LAB_00403c74;
          if (iVar3 == -0x535cb598) {
            optind = 0;
            iVar3 = -0x1af479a9;
            opterr = uVar1;
            break;
          }
        }
      }
      else if (iVar3 == -0x4b43445c) {
        iVar3 = -0x36a47ad9;
        if (local_128 == 0x68) {
          iVar3 = 0x402dd83;
        }
      }
      else if (iVar3 == -0x36a47ad9) {
LAB_00403a7b:
        iVar3 = -0x596d2b38;
      }
      else if (iVar3 == -0x28e350ca) {
        return;
      }
joined_r0x00403c69:
      if (-0x1af479aa < iVar3) break;
    } while( true );
  }
  goto LAB_00403a8b;
LAB_00403c74:
  bVar6 = (~((x + -1) * x) | 0xfffffffeU) == 0xffffffff;
  iVar4 = -0x535cb598;
  if (bVar6) {
    iVar4 = -0x1af479a9;
  }
  if (9 < y) {
    iVar4 = -0x535cb598;
  }
  if (y < 10 != bVar6) {
    iVar4 = -0x1af479a9;
  }
  goto joined_r0x00403bb4;
}


/* WARNING: Removing unreachable block (ram,0x00403e16) */
/* WARNING: Removing unreachable block (ram,0x00403ef6) */

void parse_gnu_standard_options_only
               (int argc,char **argv,char *command_name,char *package,char *version,_Bool scan_all,
               _func_void_int *usage_func,...)

{
  undefined4 uVar1;
  char in_AL;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM6_Da;
  undefined4 in_XMM7_Da;
  __va_list_tag local_108;
  undefined local_e8 [48];
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  
  uVar1 = opterr;
  if (in_AL != '\0') {
    local_b8 = in_XMM0_Da;
    local_a8 = in_XMM1_Da;
    local_98 = in_XMM2_Da;
    local_88 = in_XMM3_Da;
    local_78 = in_XMM4_Da;
    local_68 = in_XMM5_Da;
    local_58 = in_XMM6_Da;
    local_48 = in_XMM7_Da;
  }
  opterr = 1;
  pcVar5 = "+";
  if (scan_all) {
    pcVar5 = "";
  }
  iVar2 = getopt_long(_argc,argv,pcVar5,long_options,0);
  uVar3 = 0x8173f217;
LAB_00403e3b:
  do {
    if ((int)uVar3 < -0x50508471) {
      if (uVar3 == 0x8173f217) {
        uVar3 = 0x6aeca50b;
        if (iVar2 != -1) {
          uVar3 = 0xa98eba6a;
        }
      }
      else {
        if (uVar3 == 0xa98eba6a) {
          uVar3 = 0xada5c449;
          goto LAB_00403e3b;
        }
        if ((uVar3 == 0xada5c449) && (uVar3 = 0xafaf7b8f, iVar2 < 0x76)) {
          uVar3 = 0x35676d02;
        }
      }
    }
    else if ((int)uVar3 < -0x2fc0042e) {
      if (uVar3 == 0xafaf7b8f) {
        uVar3 = 0x2062e28f;
        if (iVar2 == 0x76) {
          uVar3 = 0xd03ffbd2;
        }
      }
      else if (uVar3 == 0xc3074dd4) goto LAB_00403e9d;
    }
    else {
      if (uVar3 == 0xe3e8d7d2) {
        (*usage_func)(0);
LAB_00403e9d:
        uVar3 = 0x6aeca50b;
        goto LAB_00403f10;
      }
      if (uVar3 == 0xd03ffbd2) {
        local_108.reg_save_area = local_e8;
        local_108.overflow_arg_area = &stack0x00000010;
        local_108.fp_offset = 0x30;
        local_108.gp_offset = 0x30;
        version_etc_va(stdout,command_name,package,version,&local_108);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
joined_r0x00403ec3:
    if (0x2062e28e < (int)uVar3) {
LAB_00403f10:
      while( true ) {
        while (0x35676d01 < (int)uVar3) {
          if (uVar3 == 0x35676d02) {
            uVar3 = 0x2062e28f;
            if (iVar2 == 0x68) {
              uVar3 = 0xe3e8d7d2;
            }
            goto joined_r0x00403ec3;
          }
          if (uVar3 == 0x6aeca50b) {
            opterr = uVar1;
            return;
          }
          if (uVar3 != 0x725a14ec) goto joined_r0x00403ec3;
          bVar7 = (~((x_4 + -1) * x_4) | 0xfffffffeU) == 0xffffffff;
          uVar3 = 0x31da8ef7;
          if (bVar7) {
            uVar3 = 0x2d901418;
          }
          if (9 < y_5) {
            uVar3 = 0x31da8ef7;
          }
          if (y_5 < 10 != bVar7) {
            uVar3 = 0x2d901418;
          }
          if (uVar3 < 0x2062e28f) goto LAB_00403e3b;
        }
        if (uVar3 != 0x2062e28f) break;
        uVar3 = 0x725a14ec;
      }
      if (uVar3 == 0x2d901418) {
        (*usage_func)(exit_failure);
        uVar4 = ~((x_4 + -1) * x_4) | 0xfffffffe;
        uVar6 = 0x31da8ef7;
        if (y_5 < 10 != (uVar4 == 0xffffffff)) {
          uVar6 = 0xc3074dd4;
        }
        uVar3 = uVar6;
        if (uVar4 == 0xffffffff) {
          uVar3 = 0xc3074dd4;
        }
        if (9 < y_5) {
          uVar3 = uVar6;
        }
      }
      else if (uVar3 == 0x31da8ef7) {
        (*usage_func)(exit_failure);
        uVar3 = 0x2d901418;
      }
      goto joined_r0x00403ec3;
    }
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x004044e8) */
/* WARNING: Removing unreachable block (ram,0x004042d2) */

void set_program_name(char *argv0)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *unaff_R12;
  bool bVar7;
  char local_42;
  char local_41;
  char *local_40;
  char *local_38;
  
  iVar1 = 0xf6e6e12;
  if (argv0 == (char *)0x0) {
    iVar1 = -0x275955bb;
  }
  iVar3 = -0x579cb59c;
  do {
    if (-0x41a289af < iVar3) {
      if (-0x2bd90e36 < iVar3) {
        if (iVar3 == -0x2bd90e35) {
          iVar3 = strncmp(local_40,"lt-",3);
          local_41 = iVar3 == 0;
          bVar7 = (~((x + -1) * x) | 0xfffffffeU) == 0xffffffff;
          iVar3 = -0x123e10af;
          if (bVar7) {
            iVar3 = -0x9bc939;
          }
          if (9 < y) {
            iVar3 = -0x123e10af;
          }
          if (y < 10 == bVar7) goto joined_r0x00404482;
          iVar3 = -0x9bc939;
          goto joined_r0x00404482;
        }
        if (iVar3 != -0x275955bb) goto joined_r0x00404482;
        fwrite("A NULL argv[0] was passed through an exec system call.\n",0x37,1,stderr);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (iVar3 != -0x41a289ae) {
        if (iVar3 != -0x3e29cc3d) goto joined_r0x00404482;
        uVar2 = (x + -1) * x;
        uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
        iVar4 = -0x123e10af;
        if (y < 10 != (uVar2 == 0)) {
          iVar4 = -0x2bd90e35;
        }
        iVar3 = iVar4;
        if (uVar2 == 0) {
          iVar3 = -0x2bd90e35;
        }
        if (y < 10) goto joined_r0x004043e9;
        iVar3 = iVar4;
        goto joined_r0x004043e9;
      }
      iVar3 = 0x73b89ac;
      unaff_R12 = argv0;
      if (local_42 == '\0') goto joined_r0x004043e9;
      iVar3 = -0x75414589;
      goto joined_r0x004043e9;
    }
    if (iVar3 < -0x6164a94e) {
      if (iVar3 == -0x75414589) {
        iVar4 = strncmp(local_40 + -7,"/.libs/",7);
        iVar3 = 0x73b89ac;
        unaff_R12 = argv0;
        if (iVar4 != 0) goto joined_r0x004043e9;
        iVar3 = -0x3e29cc3d;
        goto joined_r0x004043e9;
      }
      if (iVar3 != -0x61e7467c) goto joined_r0x00404482;
      program_invocation_short_name = local_40 + 3;
      uVar2 = (~-x * x ^ 0xfffffffeU) & ~-x * x;
      bVar7 = uVar2 == 0;
      iVar4 = 0x6aca80b;
      iVar3 = 0x569aa6ee;
      if (uVar2 == 0) {
        iVar3 = 0x6aca80b;
      }
      iVar6 = 0x569aa6ee;
      local_38 = program_invocation_short_name;
      goto LAB_004040e3;
    }
    if (iVar3 != -0x6164a94e) {
      iVar4 = iVar1;
      if (iVar3 != -0x579cb59c) goto joined_r0x00404482;
      goto joined_r0x00404411;
    }
    iVar3 = 0x4128bae1;
LAB_004040fb:
    do {
      if (iVar3 < 0xf6e6e12) {
        if (iVar3 < 0x6aca80b) {
          if (iVar3 == -0x123e10af) {
            iVar3 = -0x2bd90e35;
            break;
          }
          if (iVar3 == -0x9bc939) {
            iVar3 = 0x73b89ac;
            unaff_R12 = local_40;
            if (local_41 != '\0') {
              iVar3 = 0x67cd3273;
            }
joined_r0x004043e9:
            if (iVar3 < -0x123e10af) break;
            goto LAB_004040fb;
          }
        }
        else {
          if (iVar3 == 0x6aca80b) {
            iVar3 = 0x73b89ac;
            unaff_R12 = local_38;
            goto LAB_004040fb;
          }
          if (iVar3 == 0x73b89ac) {
            program_name = unaff_R12;
            program_invocation_name = unaff_R12;
            return;
          }
        }
      }
      else if (iVar3 < 0x569aa6ee) {
        if (iVar3 == 0xf6e6e12) {
          bVar7 = (~((x + -1) * x) | 0xfffffffeU) == 0xffffffff;
          iVar4 = 0x4128bae1;
          iVar3 = -0x6164a94e;
          if (bVar7) {
            iVar3 = 0x4128bae1;
          }
          iVar6 = -0x6164a94e;
LAB_004040e3:
          if (9 < y) {
            iVar3 = iVar6;
          }
          if ((bool)(y < 10 ^ bVar7)) {
            iVar3 = iVar4;
          }
        }
        else if (iVar3 == 0x4128bae1) {
          pcVar5 = strrchr(argv0,0x2f);
          local_40 = pcVar5 + 1;
          if (pcVar5 == (char *)0x0) {
            local_40 = argv0;
          }
          local_42 = 6 < (long)local_40 - (long)argv0;
          uVar2 = (x + -1) * x;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          iVar3 = -0x6164a94e;
          if (uVar2 == 0) {
            iVar3 = -0x41a289ae;
          }
          if (9 < y) {
            iVar3 = -0x6164a94e;
          }
          if (y < 10 != (uVar2 == 0)) {
            iVar3 = -0x41a289ae;
          }
          goto joined_r0x004043e9;
        }
      }
      else {
        if (iVar3 == 0x569aa6ee) {
          program_invocation_short_name = local_40 + 3;
          iVar3 = -0x61e7467c;
          break;
        }
        if (iVar3 == 0x67cd3273) {
          uVar2 = (x + -1) * x;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          iVar3 = 0x569aa6ee;
          if (uVar2 == 0) {
            iVar3 = -0x61e7467c;
          }
          if (9 < y) {
            iVar3 = 0x569aa6ee;
          }
          if (y < 10 != (uVar2 == 0)) {
            iVar3 = -0x61e7467c;
          }
        }
      }
joined_r0x00404482:
      iVar4 = iVar3;
joined_r0x00404411:
      iVar3 = iVar4;
    } while (-0x123e10b0 < iVar3);
  } while( true );
}


quoting_options * clone_quoting_options(quoting_options *o)

{
  int iVar1;
  int *piVar2;
  quoting_options *pqVar3;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (o == (quoting_options *)0x0) {
    o = &default_quoting_options;
  }
  pqVar3 = (quoting_options *)xmemdup(o,0x38);
  *piVar2 = iVar1;
  return pqVar3;
}


quoting_style get_quoting_style(quoting_options *o)

{
  int iVar1;
  int iVar2;
  quoting_options *pqVar3;
  int iVar4;
  bool bVar5;
  quoting_style local_4;
  
  pqVar3 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar3 = o;
  }
  bVar5 = (~((x_19 + -1) * x_19) | 0xfffffffeU) == 0xffffffff;
  iVar4 = -0x22a6cae5;
  if (bVar5) {
    iVar4 = 0x350f6805;
  }
  if (9 < y_20) {
    iVar4 = -0x22a6cae5;
  }
  if (y_20 < 10 != bVar5) {
    iVar4 = 0x350f6805;
  }
  iVar2 = -0x4e223400;
  while( true ) {
    while (iVar1 = iVar2, iVar1 < 0x350f6805) {
      iVar2 = 0x795e1364;
      if (iVar1 != -0x22a6cae5) {
        if (iVar1 != -0x4e223400) goto LAB_00404660;
        iVar1 = -0x22a6cae5;
        if (bVar5 != y_20 < 10) {
          iVar1 = 0x795e1364;
        }
        iVar2 = iVar1;
        if (y_20 < 10) {
          iVar2 = 0x795e1364;
        }
        if (!bVar5) {
          iVar2 = iVar1;
        }
      }
    }
    if (iVar1 != 0x795e1364) break;
    local_4 = pqVar3->style;
    iVar2 = iVar4;
  }
  if (iVar1 == 0x350f6805) {
    return local_4;
  }
LAB_00404660:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


void set_quoting_style(quoting_options *o,quoting_style s)

{
  quoting_options *pqVar1;
  
  pqVar1 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar1 = o;
  }
  pqVar1->style = s;
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040471a) */

wchar_t set_char_quoting(quoting_options *o,char c,wchar_t i)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  quoting_options *pqVar9;
  bool bVar10;
  wchar_t local_24;
  
  uVar6 = (x_23 + -1) * x_23;
  uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
  bVar10 = uVar6 == 0;
  iVar4 = 0x1d52adf;
  if (y_24 < 10 != bVar10) {
    iVar4 = -0xb87ff04;
  }
  iVar8 = -0xb87ff04;
  if (uVar6 != 0) {
    iVar8 = iVar4;
  }
  bVar2 = y_24 < 10;
  if (9 < y_24) {
    iVar8 = iVar4;
  }
  pqVar9 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar9 = o;
  }
  bVar3 = (byte)c >> 5;
  bVar5 = c & 0x1f;
  uVar6 = (i ^ 0xfffffffeU) & i;
  iVar4 = 0x67317ce9;
  do {
    if (iVar4 != 0x1d52adf) {
      if (iVar4 == 0x67317ce9) {
        iVar4 = 0x1d52adf;
        if (bVar2) {
          iVar4 = -0x35521630;
        }
        if (!bVar10) {
          iVar4 = 0x1d52adf;
        }
        if (bVar10 == bVar2) goto joined_r0x004047fe;
        iVar4 = -0x35521630;
        goto joined_r0x004047fe;
      }
LAB_00404820:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar1 = pqVar9->quote_these_too[bVar3];
    uVar7 = ((~i & uVar1 >> bVar5 | ~(uVar1 >> bVar5) & i) & 1U) << bVar5;
    pqVar9->quote_these_too[bVar3] = ~uVar1 & uVar7 | ~uVar7 & uVar1;
    iVar4 = -0x35521630;
    do {
      if (iVar4 != -0x35521630) {
        if (iVar4 == -0xb87ff04) {
          return local_24;
        }
        goto LAB_00404820;
      }
      uVar1 = pqVar9->quote_these_too[bVar3];
      local_24 = (uVar1 >> bVar5 ^ 0xfffffffe) & uVar1 >> bVar5;
      uVar7 = ((uVar6 & 0x95049e9c | ~uVar6 & 0x6afb6163) ^
              (local_24 & 0x95049e9cU | ~local_24 & 0x6afb6163U)) << bVar5;
      pqVar9->quote_these_too[bVar3] = ~uVar1 & uVar7 | ~uVar7 & uVar1;
      iVar4 = iVar8;
joined_r0x004047fe:
    } while (iVar4 < 0x1d52adf);
  } while( true );
}


wchar_t set_quoting_flags(quoting_options *o,wchar_t i)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  quoting_options *in_R11;
  quoting_options *pqVar9;
  
  iVar3 = -0x307bed4b;
  if (o != (quoting_options *)0x0) {
    iVar3 = -0x6eb10b14;
  }
  uVar6 = (x_25 + -1) * x_25;
  uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
  bVar2 = y_26 < 10 == (uVar6 == 0);
  iVar8 = -0x678dc2ce;
  if ((9 < y_26 || uVar6 != 0) && bVar2) {
    iVar8 = -0x4ec61a43;
  }
  iVar7 = -0x1fcdd63d;
  if ((9 < y_26 || uVar6 != 0) && bVar2) {
    iVar7 = -0x4ec61a43;
  }
  iVar5 = 0x62f6421;
  while( true ) {
    do {
      iVar4 = iVar5;
      pqVar9 = in_R11;
      in_R11 = o;
      iVar5 = iVar3;
    } while (iVar4 == 0x62f6421);
    do {
      while (iVar5 = iVar4, iVar5 < -0x307bed4b) {
        iVar4 = iVar7;
        if (iVar5 != -0x678dc2ce) {
          if (iVar5 != -0x4ec61a43) {
            if (iVar5 == -0x6eb10b14) {
              wVar1 = pqVar9->flags;
              pqVar9->flags = i;
              return wVar1;
            }
            goto LAB_00404930;
          }
          iVar4 = -0x678dc2ce;
        }
      }
      iVar4 = iVar8;
    } while (iVar5 == -0x307bed4b);
    if (iVar5 != -0x1fcdd63d) break;
    in_R11 = &default_quoting_options;
    iVar5 = -0x6eb10b14;
  }
LAB_00404930:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


void set_custom_quoting(quoting_options *o,char *left_quote,char *right_quote)

{
  quoting_options *pqVar1;
  int iVar2;
  quoting_options *in_RAX;
  int iVar3;
  uint uVar4;
  quoting_options *pqVar5;
  int iVar6;
  int iVar7;
  quoting_options *local_28;
  
  iVar2 = -0x5626feb9;
  if (o != (quoting_options *)0x0) {
    iVar2 = 0x781e475b;
  }
  iVar7 = -0x3020c34b;
  if (left_quote == (char *)0x0) {
    iVar7 = -0x186b41da;
  }
  if ((left_quote != (char *)0x0) != (right_quote != (char *)0x0)) {
    iVar7 = -0x186b41da;
  }
  pqVar1 = (quoting_options *)CONCAT71(0x781e47,right_quote != (char *)0x0);
  iVar3 = 0x67e980e3;
  local_28 = in_RAX;
  while( true ) {
    do {
      iVar6 = iVar3;
      pqVar5 = pqVar1;
      pqVar1 = o;
      iVar3 = iVar2;
    } while (iVar6 == 0x67e980e3);
    while( true ) {
      while (iVar3 = iVar6, -0x1e99fb9f < iVar3) {
        if (iVar3 < 0x583a6c17) {
          iVar6 = 0x583a6c17;
          if (iVar3 != -0x1e99fb9e) {
            if (iVar3 == -0x186b41da) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            goto LAB_00404ae0;
          }
        }
        else if (iVar3 == 0x583a6c17) {
          uVar4 = (~-x_27 * x_27 ^ 0xfffffffeU) & ~-x_27 * x_27;
          iVar6 = -0x1e99fb9e;
          if (uVar4 == 0) {
            iVar6 = -0x2784e89e;
          }
          if (9 < y_28) {
            iVar6 = -0x1e99fb9e;
          }
          if (y_28 < 10 != (uVar4 == 0)) {
            iVar6 = -0x2784e89e;
          }
        }
        else {
          if (iVar3 != 0x781e475b) goto LAB_00404ae0;
          pqVar5->style = custom_quoting_style;
          iVar6 = iVar7;
          local_28 = pqVar5;
        }
      }
      if (iVar3 != -0x5626feb9) break;
      uVar4 = ~((x_27 + -1) * x_27) | 0xfffffffe;
      iVar3 = -0x1e99fb9e;
      if (y_28 < 10 != (uVar4 == 0xffffffff)) {
        iVar3 = 0x583a6c17;
      }
      iVar6 = iVar3;
      if (uVar4 == 0xffffffff) {
        iVar6 = 0x583a6c17;
      }
      if (9 < y_28) {
        iVar6 = iVar3;
      }
    }
    if (iVar3 == -0x3020c34b) {
      local_28->left_quote = left_quote;
      local_28->right_quote = right_quote;
      return;
    }
    if (iVar3 != -0x2784e89e) break;
    pqVar1 = &default_quoting_options;
    iVar3 = 0x781e475b;
  }
LAB_00404ae0:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


size_t quotearg_buffer(char *buffer,size_t buffersize,char *arg,size_t argsize,quoting_options *o)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  quoting_options *pqVar6;
  uint uVar7;
  bool bVar8;
  size_t local_38;
  
  bVar8 = (~(~-x_29 * x_29) | 0xfffffffeU) == 0xffffffff;
  bVar2 = y_30 < 10;
  pqVar6 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar6 = o;
  }
  uVar3 = 0x19b10572;
  while( true ) {
    while (uVar3 = uVar3 & 0xfffffff, uVar3 < 0xb56d58a) {
      if (uVar3 == 0x4eca8f4) {
        piVar4 = __errno_location();
        iVar1 = *piVar4;
        quotearg_buffer_restyled
                  (buffer,buffersize,arg,argsize,pqVar6->style,pqVar6->flags,pqVar6->quote_these_too
                   ,pqVar6->left_quote,pqVar6->right_quote);
        *piVar4 = iVar1;
        uVar3 = 0x1b56d58a;
      }
      else {
        if (uVar3 != 0x9b10572) goto LAB_00404c90;
        uVar3 = 0x14eca8f4;
        if (bVar2) {
          uVar3 = 0x1b56d58a;
        }
        if (!bVar8) {
          uVar3 = 0x14eca8f4;
        }
        if (bVar8 != bVar2) {
          uVar3 = 0x1b56d58a;
        }
      }
    }
    if (uVar3 != 0xb56d58a) break;
    piVar4 = __errno_location();
    iVar1 = *piVar4;
    local_38 = quotearg_buffer_restyled
                         (buffer,buffersize,arg,argsize,pqVar6->style,pqVar6->flags,
                          pqVar6->quote_these_too,pqVar6->left_quote,pqVar6->right_quote);
    *piVar4 = iVar1;
    uVar5 = ~((x_29 + -1) * x_29) | 0xfffffffe;
    uVar7 = 0x14eca8f4;
    if (y_30 < 10 != (uVar5 == 0xffffffff)) {
      uVar7 = 0x1dfce399;
    }
    uVar3 = uVar7;
    if (uVar5 == 0xffffffff) {
      uVar3 = 0x1dfce399;
    }
    if (9 < y_30) {
      uVar3 = uVar7;
    }
  }
  if (uVar3 == 0xdfce399) {
    return local_38;
  }
LAB_00404c90:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t quotearg_buffer_restyled
                 (char *buffer,size_t buffersize,char *arg,size_t argsize,
                 quoting_style quoting_style,wchar_t flags,uint *quote_these_too,char *left_quote,
                 char *right_quote)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  size_t sVar20;
  ushort **ppuVar21;
  uint uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *unaff_RBP;
  byte unaff_R13B;
  byte unaff_R14B;
  undefined *unaff_R15;
  bool bVar25;
  byte local_744;
  byte local_743;
  byte local_742;
  byte local_741;
  byte local_740;
  byte local_73f;
  byte local_73e;
  byte local_73d;
  byte local_73c;
  byte local_73b;
  byte local_73a;
  byte local_739;
  uint local_738;
  byte local_731;
  undefined *local_730;
  byte local_721;
  byte local_720;
  byte local_71f;
  byte local_71e;
  byte local_71d;
  byte local_71c;
  byte local_71b;
  char local_71a;
  byte local_719;
  undefined *local_718;
  undefined *local_710;
  byte local_702;
  byte local_701;
  quoting_style local_6fc;
  undefined *local_6f8;
  byte local_6ed;
  byte local_6ec;
  byte local_6eb;
  byte local_6ea;
  byte local_6e9;
  byte local_6e8;
  byte local_6e7;
  byte local_6e6;
  byte local_6e5;
  byte local_6e4;
  byte local_6e3;
  byte local_6e2;
  byte local_6e1;
  byte local_6e0;
  byte local_6df;
  byte local_6de;
  byte local_6dd;
  byte local_6dc;
  byte local_6db;
  byte local_6da;
  byte local_6d9;
  undefined *local_6d8;
  quoting_style local_6d0;
  byte local_6c9;
  byte local_6c8;
  byte local_6c7;
  byte local_6c6;
  byte local_6c5;
  byte local_6c4;
  byte local_6c3;
  byte local_6c2;
  byte local_6c1;
  byte local_6c0;
  byte local_6bf;
  byte local_6be;
  byte local_6bd;
  byte local_6bc;
  byte local_6bb;
  byte local_6ba;
  char local_6b9;
  byte local_6b8;
  byte local_6b7;
  byte local_6b6;
  byte local_6b5;
  byte local_6b4;
  byte local_6b3;
  byte local_6b2;
  byte local_6b1;
  int local_6b0;
  byte local_6a8;
  byte local_6a7;
  char local_6a5;
  char local_6a4;
  char local_6a3;
  byte local_6a2;
  byte local_6a1;
  char local_6a0;
  char local_69f;
  byte local_69e;
  byte local_69d;
  byte local_69c;
  byte local_69b;
  byte local_69a;
  byte local_699;
  byte local_698;
  byte local_697;
  byte local_696;
  byte local_695;
  byte local_694;
  byte local_693;
  byte local_692;
  byte local_691;
  undefined *local_690;
  undefined *local_688;
  undefined *local_680;
  int local_674;
  int local_664;
  char local_65f;
  byte local_65e;
  char local_65d;
  char local_65c;
  char local_65b;
  char local_65a;
  char local_659;
  char local_658;
  char local_657;
  byte local_656;
  byte local_655;
  char local_654;
  char local_653;
  byte local_652;
  char local_651;
  char local_650;
  byte local_64f;
  char local_64e;
  char local_64d;
  char local_64c;
  char local_64b;
  char local_64a;
  char local_649;
  char local_648;
  char local_647;
  char local_646;
  char local_645;
  byte local_644;
  byte local_643;
  char local_642;
  char local_641;
  char local_640;
  char local_63f;
  char local_63e;
  char local_63d;
  char local_63c;
  char local_63b;
  byte local_63a;
  char local_639;
  char local_638;
  char local_637;
  char local_636;
  char local_635;
  char local_634;
  byte local_633;
  byte local_632;
  byte local_631;
  byte local_630;
  byte local_62f;
  byte local_62e;
  byte local_62d;
  byte local_62c;
  byte local_62b;
  byte local_62a;
  byte local_629;
  byte local_628;
  byte local_627;
  byte local_626;
  byte local_625;
  byte local_624;
  byte local_623;
  byte local_622;
  byte local_621;
  undefined *local_620;
  undefined *local_618;
  undefined *local_610;
  undefined *local_608;
  undefined *local_600;
  undefined *local_5f8;
  undefined *local_5f0;
  int local_5e0;
  quoting_style local_5d4;
  undefined *local_5d0;
  undefined *local_5c0;
  undefined *local_5b8;
  undefined *local_5b0;
  undefined *local_5a8;
  undefined *local_5a0;
  undefined *local_598;
  int local_588;
  quoting_style local_570;
  int local_56c;
  int local_568;
  int local_564;
  undefined *local_560;
  undefined *local_558;
  undefined *local_550;
  undefined *local_548;
  quoting_style local_540;
  int local_534;
  int local_530;
  int local_52c;
  int local_524;
  undefined *local_520;
  char *local_518;
  undefined *local_510;
  undefined *local_508;
  undefined *local_4f8;
  char *local_4f0;
  char *local_4e8;
  undefined *local_4e0;
  undefined *local_4d8;
  undefined *local_4d0;
  undefined *local_4c8;
  undefined *local_4c0;
  undefined *local_4b8;
  undefined *local_4b0;
  undefined *local_4a8;
  char *local_4a0;
  undefined *local_498;
  undefined *local_490;
  undefined *local_488;
  undefined *local_480;
  undefined *local_478;
  undefined *local_470;
  undefined *local_468;
  char *local_460;
  char *local_458;
  undefined *local_450;
  undefined *local_448;
  undefined *local_440;
  undefined *local_438;
  quoting_style local_42c;
  undefined *local_428;
  undefined *local_420;
  undefined *local_418;
  undefined *local_410;
  undefined *local_408;
  undefined *local_400;
  undefined *local_3f8;
  undefined *local_3f0;
  undefined *local_3e8;
  undefined *local_3e0;
  undefined *local_3d8;
  undefined *local_3d0;
  undefined *local_3c8;
  undefined *local_3c0;
  undefined *local_3b8;
  undefined *local_3b0;
  undefined *local_3a8;
  undefined *local_3a0;
  undefined *local_398;
  undefined *local_390;
  undefined *local_388;
  undefined *local_380;
  undefined *local_378;
  undefined *local_370;
  undefined *local_368;
  char *local_360;
  undefined *local_358;
  undefined *local_350;
  undefined *local_348;
  undefined *local_340;
  undefined *local_338;
  undefined *local_330;
  undefined *local_328;
  undefined *local_320;
  undefined *local_318;
  undefined *local_310;
  char *local_308;
  undefined *local_300;
  char *local_2f8;
  undefined *local_2f0;
  char *local_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined *local_2a0;
  char *local_298;
  undefined *local_290;
  undefined *local_288;
  mbstate_t local_280;
  undefined *local_278;
  undefined *local_270;
  undefined *local_268;
  undefined *local_260;
  undefined *local_258;
  undefined *local_250;
  undefined *local_248;
  mbstate_t *local_240;
  long local_238;
  undefined *local_230;
  undefined *local_228;
  char *local_220;
  char *local_218;
  char *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  wchar_t local_1b4;
  uint local_1b0;
  uint local_1ac;
  wchar_t local_1a8;
  uint local_1a4;
  wchar_t local_1a0;
  quoting_style local_19c;
  ulong local_198;
  ulong local_190;
  undefined *local_188;
  char *local_180;
  undefined *local_178;
  ulong local_170;
  undefined *local_168;
  undefined *local_160;
  char *local_158;
  char *local_150;
  undefined *local_148;
  byte *local_140;
  wchar_t *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  char *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  
  local_150 = right_quote;
  local_158 = left_quote;
  local_168 = (undefined *)buffersize;
  local_160 = (undefined *)argsize;
  sVar20 = __ctype_get_mb_cur_max();
  local_6a7 = (byte)((uint)flags >> 1) & 1;
  local_1ac = 0xcd200855;
  if ((~flags | 0xfffffffeU) == 0xffffffff) {
    local_1ac = 0x8c24a5da;
  }
  local_1b0 = 0x72fbfc44;
  if ((~flags | 0xfffffffbU) == 0xffffffff) {
    local_1b0 = 0x8c24a5da;
  }
  local_1a4 = 0x3c7a6eac;
  if (quote_these_too != (uint *)0x0) {
    local_1a4 = 0x814bd11f;
  }
  local_1b4 = flags & 0xfffffffd;
  local_6a8 = 1;
  local_73b = 0x1f;
  local_73a = 0x1f;
  local_739 = 0x1f;
  local_71b = 0x1f;
  local_71d = 0x1f;
  local_71c = 0x1f;
  local_6df = 0x1f;
  local_6e2 = 0x1f;
  local_6e1 = 0x1f;
  local_6e0 = 0x1f;
  local_73e = 0x1f;
  local_73d = 0x1f;
  local_73f = 0x1f;
  local_6e5 = 0x1f;
  local_6e3 = 0x1f;
  local_6e4 = 0x1f;
  local_170 = 0;
  local_470 = (undefined *)0x0;
  local_570 = literal_quoting_style;
  local_2a0 = (undefined *)0x0;
  local_290 = (undefined *)0x0;
  local_3a8 = (undefined *)0x0;
  local_298 = (char *)0x0;
  local_288 = (undefined *)0x0;
  local_620 = &DAT_814bd11f;
  local_6b0 = -0x7eb42ee1;
  local_618 = &DAT_814bd11f;
  local_610 = (undefined *)0x0;
  local_608 = (undefined *)0x0;
  local_600 = (undefined *)0x0;
  local_3b0 = (undefined *)0x0;
  local_508 = &DAT_814bd11f;
  local_4e0 = &DAT_814bd11f;
  local_4d8 = &DAT_814bd11f;
  local_4d0 = &DAT_814bd11f;
  local_4c8 = &DAT_814bd11f;
  local_3b8 = (undefined *)0x0;
  local_418 = &DAT_814bd11f;
  local_400 = (undefined *)0x0;
  local_3f8 = (undefined *)0x0;
  local_3f0 = (undefined *)0x0;
  local_3e0 = (undefined *)0x0;
  local_690 = &DAT_814bd11f;
  local_688 = &DAT_814bd11f;
  local_680 = &DAT_814bd11f;
  local_588 = -0x7eb42ee1;
  local_3d0 = (undefined *)0x0;
  local_420 = &DAT_814bd11f;
  local_3c0 = (undefined *)0x0;
  local_52c = 0;
  local_2a8 = (undefined *)0x0;
  local_3d8 = (undefined *)0x0;
  local_3c8 = (undefined *)0x0;
  local_3e8 = (undefined *)0x0;
  local_2b8 = (undefined *)0x0;
  local_2b0 = (undefined *)0x0;
  local_310 = &DAT_814bd11f;
  local_2c8 = (undefined *)0x0;
  local_530 = 0;
  local_4c0 = (undefined *)0x0;
  local_5e0 = -0x7eb42ee1;
  local_534 = 0;
  local_318 = &DAT_814bd11f;
  local_2c0 = (undefined *)0x0;
  local_428 = &DAT_814bd11f;
  local_408 = &DAT_814bd11f;
  local_320 = &DAT_814bd11f;
  local_2d8 = &DAT_814bd11f;
  bVar17 = 0x1f;
  local_4f8 = &DAT_814bd11f;
  local_410 = &DAT_814bd11f;
  bVar16 = 0x1f;
  local_478 = &DAT_814bd11f;
  local_2d0 = &DAT_814bd11f;
  local_328 = &DAT_814bd11f;
  local_300 = &DAT_814bd11f;
  local_2f0 = &DAT_814bd11f;
  local_2e0 = &DAT_814bd11f;
  local_338 = &DAT_814bd11f;
  local_330 = &DAT_814bd11f;
  local_510 = &DAT_814bd11f;
  local_518 = &DAT_814bd11f;
  local_520 = &DAT_814bd11f;
  local_4f0 = &DAT_814bd11f;
  local_4e8 = &DAT_814bd11f;
  local_5d4 = 0x814bd11f;
  local_350 = &DAT_814bd11f;
  local_348 = &DAT_814bd11f;
  local_2e8 = &DAT_814bd11f;
  local_340 = &DAT_814bd11f;
  local_308 = &DAT_814bd11f;
  local_2f8 = &DAT_814bd11f;
  local_358 = &DAT_814bd11f;
  local_540 = 0x814bd11f;
  local_198 = 0;
  local_190 = 0;
  local_188 = (undefined *)0x0;
  local_180 = (char *)0x0;
  local_178 = (undefined *)0x0;
  local_6bf = 0;
  local_6bc = 0;
  local_6bb = 0;
  local_6ba = 0;
  local_6ec = 0;
  local_6e6 = 0;
  local_6e8 = 0;
  local_6e7 = 0;
  local_6c3 = 0;
  local_6bd = 0;
  local_6c1 = 0;
  local_6c0 = 0;
  local_6ea = 0;
  local_721 = 0;
  local_71e = 0;
  local_6eb = 0;
  local_6be = 0;
  local_6c8 = 0;
  local_6c7 = 0;
  local_6c6 = 0;
  local_71f = 0;
  local_6e9 = 0;
  local_6ed = 0;
  local_6c4 = 0;
  local_6c9 = 0;
  local_6c2 = 0;
  local_6c5 = 0;
  puVar24 = (undefined *)0xf47da62d;
  local_42c = quoting_style;
  local_1a8 = flags;
  bVar2 = 0x1f;
  bVar3 = 0;
  bVar4 = 0;
  bVar5 = 0;
  bVar6 = 0x1f;
  bVar7 = 0x1f;
  bVar8 = 0x1f;
  bVar9 = 0;
  bVar10 = 0x1f;
  bVar11 = 0;
  bVar12 = 0x1f;
  bVar13 = 0x1f;
  bVar14 = 0x1f;
  bVar15 = 0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while (puVar23 = puVar24, iVar19 = (int)puVar23, puVar24 = puVar23,
                            iVar19 < 0x1c79e0a) {
                        if (iVar19 < -0x39beefac) {
                          if (iVar19 < -0x5e5c0103) {
                            if (iVar19 < -0x724a9e82) {
                              if (iVar19 < -0x79045daa) {
                                if (iVar19 < -0x7ba14245) {
                                  if (iVar19 < -0x7e702400) {
                                    if (iVar19 < -0x7f1a7523) {
                                      if (iVar19 == -0x7fea760f) {
                                        puVar24 = (undefined *)0x2991b969;
                                        if (local_642 != '\0') {
                                          puVar24 = (undefined *)0x673363b1;
                                        }
                                      }
                                      else if (iVar19 == -0x7f489376) {
                                        buffer[(long)local_5a8] = '$';
                                        puVar24 = (undefined *)0xb277a733;
                                      }
                                    }
                                    else if (iVar19 == -0x7f1a7523) {
                                      local_540 = c_quoting_style;
                                      local_6c5 = 1;
                                      puVar24 = (undefined *)0xd12115a3;
                                    }
                                    else if (iVar19 == -0x7eb42ee1) {
                                      puVar24 = (undefined *)0x3c7a6eac;
                                      if ((~quote_these_too[local_6da >> 5] |
                                          -2 << (local_6da & 0x1f) |
                                          0xfffffffeU >> 0x20 - (local_6da & 0x1f)) != 0xffffffff) {
                                        puVar24 = (undefined *)0xc0e38214;
                                      }
                                      local_3e0 = local_1c8;
                                      local_3f0 = local_1d0;
                                      local_3f8 = local_1d8;
                                      local_400 = local_1e0;
                                      local_6e0 = local_6b1;
                                      local_6e1 = local_6b2;
                                      local_6e2 = local_6da;
                                      local_418 = local_1e8;
                                      bVar6 = local_6b3;
                                    }
                                  }
                                  else if (iVar19 < -0x7cf7a9a5) {
                                    if (iVar19 == -0x7e702400) {
                                      buffer[(long)local_480] = '\'';
                                      puVar24 = (undefined *)0xda9fc772;
                                    }
                                    else if (iVar19 == -0x7d8be1de) {
                                      local_498 = local_320;
                                      local_78 = local_2d8;
                                      puVar24 = (undefined *)0x1b5b8cf5;
                                      if (local_718 < local_320) {
                                        puVar24 = (undefined *)0x9f790679;
                                      }
                                    }
                                  }
                                  else if (iVar19 == -0x7cf7a9a5) {
                                    puVar24 = (undefined *)0x237f6b20;
                                    if ((int)local_738 < 0xc) {
                                      puVar24 = (undefined *)0xd10a6d5f;
                                    }
                                  }
                                  else if (iVar19 == -0x7c40e772) {
                                    puVar24 = (undefined *)0x7ab5ed0c;
                                  }
                                }
                                else if (iVar19 < -0x7abedf84) {
                                  if (iVar19 < -0x7b694c54) {
                                    if (iVar19 == -0x7ba14245) {
                                      local_b0 = local_550 + 1;
                                      local_644 = arg[(long)local_398];
                                      uVar18 = (x_31 + -1) * x_31;
                                      uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                      uVar22 = 0x166eec79;
                                      if (y_32 < 10 != (uVar18 == 0)) {
                                        uVar22 = 0x99c8445f;
                                      }
                                      puVar24 = (undefined *)(ulong)uVar22;
                                      if (uVar18 == 0) {
                                        puVar24 = (undefined *)0x99c8445f;
                                      }
                                      if (9 < y_32) {
                                        puVar24 = (undefined *)(ulong)uVar22;
                                      }
                                    }
                                    else if ((iVar19 == -0x7b87f157) &&
                                            (puVar24 = (undefined *)0x11f5c390,
                                            local_380 < local_468)) {
                                      puVar24 = (undefined *)0x6a381ace;
                                    }
                                  }
                                  else if (iVar19 == -0x7b694c54) {
                                    puVar24 = (undefined *)0x19053d64;
                                  }
                                  else if ((iVar19 == -0x7ad40962) &&
                                          (puVar24 = (undefined *)0x4bc7d91d, local_71a != '\0')) {
                                    puVar24 = (undefined *)0x7f1f0cde;
                                  }
                                }
                                else if (iVar19 < -0x7a54c50d) {
                                  if (iVar19 == -0x7abedf84) {
                                    buffer[(long)local_1c0] = '\0';
                                    puVar24 = (undefined *)0xd2b1e792;
                                  }
                                  else if (iVar19 == -0x7ab07d85) {
                                    local_b8 = local_5f8 + 1;
                                    uVar18 = (x_31 + -1) * x_31;
                                    uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                    uVar22 = 0xff8bdf28;
                                    if (y_32 < 10 != (uVar18 == 0)) {
                                      uVar22 = 0x413c0437;
                                    }
                                    puVar24 = (undefined *)(ulong)uVar22;
                                    if (uVar18 == 0) {
                                      puVar24 = (undefined *)0x413c0437;
                                    }
                                    if (9 < y_32) {
                                      puVar24 = (undefined *)(ulong)uVar22;
                                    }
                                  }
                                }
                                else if (iVar19 == -0x7a54c50d) {
                                  puVar24 = (undefined *)0x827152f;
                                }
                                else if (iVar19 == -0x793ff31b) {
                                  local_560 = local_440 + 1;
                                  puVar24 = (undefined *)0xbe928c44;
                                  if (local_560 < local_730) {
                                    puVar24 = (undefined *)0x4bb9205;
                                  }
                                }
                                else if (iVar19 == -0x7935fd6f) {
                                  uVar18 = (x_31 + -1) * x_31;
                                  uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                  uVar22 = 0x9369e14c;
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    uVar22 = 0x542e2d8e;
                                  }
                                  puVar24 = (undefined *)(ulong)uVar22;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0x542e2d8e;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)(ulong)uVar22;
                                  }
                                }
                              }
                              else if (iVar19 < -0x73db5a26) {
                                if (iVar19 < -0x76604917) {
                                  if (iVar19 < -0x77f93e0e) {
                                    if (iVar19 == -0x79045daa) {
                                      puVar24 = (undefined *)0xc57b60ec;
                                      if ((int)local_738 < 0x26) {
                                        puVar24 = (undefined *)0x730f87b4;
                                      }
                                    }
                                    else if (iVar19 == -0x78db8ef9) {
                                      puVar24 = (undefined *)0xf4f60a1a;
                                    }
                                  }
                                  else if (iVar19 == -0x77f93e0e) {
                                    puVar24 = (undefined *)0xebed9e7a;
                                    if (local_664 < 0x7c) {
                                      puVar24 = (undefined *)0x4058aea1;
                                    }
                                  }
                                  else if (iVar19 == -0x7781c7db) {
                                    local_600 = local_710;
                                    local_608 = local_718;
                                    local_610 = local_6d8;
                                    local_618 = local_6f8;
                                    local_739 = local_744;
                                    local_73a = local_743;
                                    local_73b = local_73c;
                                    local_6b0 = 0x10;
                                    local_620 = local_730;
                                    puVar24 = (undefined *)0xfc047c01;
                                  }
                                }
                                else if (iVar19 < -0x73f251cf) {
                                  if (iVar19 == -0x76604917) {
                                    puVar24 = (undefined *)0xffd4cc3b;
                                    if (local_56c == 0) {
                                      puVar24 = (undefined *)0x44f55ca5;
                                    }
                                  }
                                  else if (iVar19 == -0x755691bf) {
                                    puVar24 = (undefined *)0x5cf05290;
                                  }
                                }
                                else if (iVar19 == -0x73f251cf) {
                                  local_62e = local_721;
                                  puVar24 = (undefined *)0x8c24a5da;
                                  if (local_71a != '\0') {
                                    puVar24 = (undefined *)0xcbf6e2e4;
                                  }
                                  local_73d = local_741;
                                  local_680 = local_710;
                                  local_688 = local_6d8;
                                  local_690 = local_6f8;
                                  local_73f = local_743;
                                  local_73e = local_740;
                                  unaff_R14B = 0;
                                  unaff_RBP = local_730;
                                  unaff_R15 = local_718;
                                  unaff_R13B = 0;
                                  bVar2 = local_744;
                                }
                                else if (iVar19 == -0x73db7349) {
                                  bVar25 = (~(~-x_31 * x_31) | 0xfffffffeU) == 0xffffffff;
                                  puVar24 = (undefined *)0xab29d9fe;
                                  if (bVar25) {
                                    puVar24 = (undefined *)0x51ea4f01;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)0xab29d9fe;
                                  }
                                  if (y_32 < 10 != bVar25) {
                                    puVar24 = (undefined *)0x51ea4f01;
                                  }
                                }
                              }
                              else if (iVar19 < -0x735c3e4b) {
                                if (iVar19 < -0x73823705) {
                                  if (iVar19 == -0x73db5a26) {
                                    local_629 = local_73e;
                                    local_6da = local_73d;
                                    local_6b2 = local_73f;
                                    local_1e0 = local_690;
                                    local_1d8 = local_688;
                                    local_1c8 = local_680;
                                    puVar24 = (undefined *)0xd0528e2b;
                                    local_6b3 = unaff_R13B;
                                    local_6b1 = bVar2;
                                    local_62a = unaff_R14B;
                                    local_1e8 = unaff_RBP;
                                    local_1d0 = unaff_R15;
                                    if (local_6a2 != 0) {
                                      puVar24 = (undefined *)0x3d5304a0;
                                    }
                                  }
                                  else if (iVar19 == -0x73a44b76) {
                                    local_358 = (undefined *)0x1;
                                    puVar24 = (undefined *)0x7556a2ef;
                                  }
                                }
                                else if (iVar19 == -0x73823705) {
                                  puVar24 = (undefined *)0xb99c55e7;
                                }
                                else if (iVar19 == -0x7361c538) {
                                  local_2d8 = local_730;
                                  local_320 = (undefined *)0x0;
                                  puVar24 = (undefined *)0x82741e22;
                                }
                              }
                              else if (iVar19 < -0x72de03b7) {
                                if (iVar19 == -0x735c3e4b) {
                                  puVar24 = (undefined *)0x40705f4a;
                                  if ((int)local_738 < 0x23) {
                                    puVar24 = (undefined *)0x6c16832d;
                                  }
                                  bVar17 = 0;
                                }
                                else if (iVar19 == -0x73424072) {
                                  puVar24 = (undefined *)0xece043a0;
                                }
                              }
                              else if (iVar19 == -0x72de03b7) {
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                uVar22 = 0x2016e3e6;
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  uVar22 = 0xa1e0ddb4;
                                }
                                puVar24 = (undefined *)(ulong)uVar22;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0xa1e0ddb4;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)(ulong)uVar22;
                                }
                              }
                              else if (iVar19 == -0x72ddebec) {
                                puVar24 = (undefined *)0x5520d9ca;
                                if (((local_742 ^ 0xfe) & local_742) != 0) {
                                  puVar24 = (undefined *)0xb5b02117;
                                }
                              }
                              else if (iVar19 == -0x7278a479) {
                                bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                                puVar24 = (undefined *)0xb08aa57a;
                                if (bVar25) {
                                  puVar24 = (undefined *)0xa1a3fefd;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)0xb08aa57a;
                                }
                                if (y_32 < 10 != bVar25) {
                                  puVar24 = (undefined *)0xa1a3fefd;
                                }
                              }
                            }
                            else if (iVar19 < -0x6c796aff) {
                              if (iVar19 < -0x6f85d87e) {
                                if (iVar19 < -0x701277f5) {
                                  if (iVar19 < -0x7194d829) {
                                    if (iVar19 == -0x724a9e82) {
                                      buffer[(long)local_488] = '\'';
                                      puVar24 = (undefined *)0x99c3d827;
                                    }
                                    else if (iVar19 == -0x71a1a8ea) {
                                      buffer[(long)local_5f0] = '\'';
                                      puVar24 = (undefined *)0x1aa1bd92;
                                    }
                                  }
                                  else if (iVar19 == -0x7194d829) {
                                    puVar24 = (undefined *)0xef5f2398;
                                    if (local_64b != '\0') {
                                      puVar24 = (undefined *)0xd7484011;
                                    }
                                    local_3e8 = local_5f0;
                                    local_6e7 = local_719;
                                  }
                                  else if (iVar19 == -0x715ce098) {
                                    bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                                    puVar24 = (undefined *)0xd28c3766;
                                    if (bVar25) {
                                      puVar24 = (undefined *)0x907a2782;
                                    }
                                    if (9 < y_32) {
                                      puVar24 = (undefined *)0xd28c3766;
                                    }
                                    if (y_32 < 10 != bVar25) {
                                      puVar24 = (undefined *)0x907a2782;
                                    }
                                  }
                                }
                                else if (iVar19 < -0x6fb6af11) {
                                  if (iVar19 == -0x701277f5) {
                                    puVar24 = (undefined *)0xdb2e6465;
                                    if (local_65b != '\0') {
                                      puVar24 = (undefined *)0x36b7741;
                                    }
                                  }
                                  else if (iVar19 == -0x6fec2e48) {
                                    puVar24 = (undefined *)0xe0fa9a92;
                                    local_470 = local_1c0;
                                  }
                                }
                                else if (iVar19 == -0x6fb6af11) {
                                  local_600 = local_1f0;
                                  local_608 = local_1f8;
                                  local_610 = local_6d8;
                                  local_618 = local_200;
                                  local_739 = local_6b4;
                                  local_73a = local_743;
                                  local_73b = local_73c;
                                  local_6b0 = local_568;
                                  local_620 = local_730;
                                  puVar24 = (undefined *)0xfc047c01;
                                }
                                else if (iVar19 == -0x6fab7c22) {
                                  puVar24 = (undefined *)0x65b5f4e9;
                                  if (local_636 != '\0') {
                                    puVar24 = (undefined *)0x17fa781a;
                                  }
                                  local_3a8 = local_718;
                                }
                              }
                              else if (iVar19 < -0x6dea870c) {
                                if (iVar19 < -0x6e68ad60) {
                                  if (iVar19 == -0x6f85d87e) {
                                    buffer[(long)local_548] = local_691;
                                    uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                                    uVar22 = 0xd28c3766;
                                    if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                      uVar22 = 0xe1ef74ec;
                                    }
                                    uVar1 = uVar22;
                                    if (uVar18 == 0xffffffff) {
                                      uVar1 = 0xe1ef74ec;
                                    }
                                    if (9 < y_32) {
                                      uVar1 = uVar22;
                                    }
                                    puVar24 = (undefined *)(ulong)uVar1;
                                  }
                                  else if ((iVar19 == -0x6f656350) &&
                                          (puVar24 = (undefined *)0x6d17396e, local_568 < 0x2c)) {
                                    puVar24 = (undefined *)0x4f33571;
                                  }
                                }
                                else if (iVar19 == -0x6e68ad60) {
                                  puVar24 = (undefined *)0x1dd6a4d9;
                                  if (local_646 != '\0') {
                                    puVar24 = (undefined *)0xfde961c0;
                                  }
                                }
                                else if (iVar19 == -0x6e617533) {
                                  puVar24 = (undefined *)0x924e7bcf;
                                  if (local_639 != '\0') {
                                    puVar24 = (undefined *)0x321c8b71;
                                  }
                                  local_290 = local_5a0;
                                  local_2a0 = local_730;
                                }
                              }
                              else if (iVar19 < -0x6cecea27) {
                                if (iVar19 == -0x6dea870c) {
                                  uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                                  uVar22 = 0xfcce513b;
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    uVar22 = 0xa4de526f;
                                  }
                                  puVar24 = (undefined *)(ulong)uVar22;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0xa4de526f;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)(ulong)uVar22;
                                  }
                                }
                                else if ((iVar19 == -0x6db18431) &&
                                        (puVar24 = (undefined *)0x2e34a855, local_6a0 != '\0')) {
                                  puVar24 = (undefined *)0x32e7a8e9;
                                }
                              }
                              else if (iVar19 == -0x6cecea27) {
                                puVar24 = (undefined *)0xb1216b7f;
                              }
                              else if (iVar19 == -0x6c961eb4) {
                                buffer[(long)local_5b0] = '0';
                                puVar24 = (undefined *)0x542e2d8e;
                              }
                              else if (iVar19 == -0x6c82c557) {
                                puVar24 = (undefined *)0x44c60ebb;
                              }
                            }
                            else if (iVar19 < -0x661efb14) {
                              if (iVar19 < -0x6784529d) {
                                if (iVar19 < -0x686daf36) {
                                  if (iVar19 == -0x6c796aff) {
                                    uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                                    uVar22 = 0x72679875;
                                    if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                      uVar22 = 0x1f57633a;
                                    }
                                    uVar1 = uVar22;
                                    if (uVar18 == 0xffffffff) {
                                      uVar1 = 0x1f57633a;
                                    }
                                    if (9 < y_32) {
                                      uVar1 = uVar22;
                                    }
                                    puVar24 = (undefined *)(ulong)uVar1;
                                  }
                                  else if (iVar19 == -0x6abdb600) {
                                    puVar24 = (undefined *)0xf40318e7;
                                    if (local_645 != '\0') {
                                      puVar24 = (undefined *)0x26f56da0;
                                    }
                                    local_3d8 = local_488;
                                    bVar3 = local_6db;
                                  }
                                }
                                else if (iVar19 == -0x686daf36) {
                                  puVar24 = (undefined *)0xab089049;
                                  if (local_6a3 != '\0') {
                                    puVar24 = (undefined *)0xad09af22;
                                  }
                                  local_4f8 = local_5b0;
                                }
                                else if ((iVar19 == -0x6862a0d6) &&
                                        (puVar24 = (undefined *)0xd7d7ff07, sVar20 == 1)) {
                                  puVar24 = (undefined *)0x3f3d25b2;
                                }
                              }
                              else if (iVar19 < -0x663c27d9) {
                                if (iVar19 == -0x6784529d) {
                                  puVar24 = (undefined *)0x4f82916d;
                                }
                                else if (iVar19 == -0x669d8204) {
                                  buffer[(long)local_388] = '\'';
                                  puVar24 = (undefined *)0x53b9bd27;
                                }
                              }
                              else if (iVar19 == -0x663c27d9) {
                                local_390 = local_488 + 1;
                                puVar24 = (undefined *)0x474684ba;
                                if (local_390 < local_730) {
                                  puVar24 = (undefined *)0x2404026c;
                                }
                              }
                              else if (iVar19 == -0x6637bba1) {
                                local_2b0 = local_398;
                                local_2b8 = local_b0;
                                local_6bd = local_644;
                                local_6c1 = local_62c;
                                local_6c3 = local_699;
                                puVar24 = (undefined *)0x2fd2fe70;
                                bVar9 = local_6dc;
                              }
                              else if (iVar19 == -0x662660be) {
                                buffer[(long)local_550] = local_698;
                                puVar24 = (undefined *)0xbfe9c25a;
                              }
                            }
                            else if (iVar19 < -0x6455bb88) {
                              if (iVar19 < -0x65a0da24) {
                                if (iVar19 == -0x661efb14) {
                                  local_69c = local_71e;
                                  puVar24 = (undefined *)0x8c0dae31;
                                  if (local_6fc == shell_always_quoting_style) {
                                    puVar24 = (undefined *)0xd269f6ee;
                                  }
                                  local_721 = local_71e;
                                }
                                else if ((iVar19 == -0x65a4a2ac) &&
                                        (puVar24 = (undefined *)0x478c0b56, local_658 != '\0')) {
                                  puVar24 = (undefined *)0x86ca0291;
                                }
                              }
                              else if (iVar19 == -0x65a0da24) {
                                puVar24 = (undefined *)0xe2f70d41;
                              }
                              else if (iVar19 == -0x64d17423) {
                                uVar18 = ~(~-x_31 * x_31) | 0xfffffffe;
                                uVar22 = 0xf4a38eb5;
                                if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                  uVar22 = 0x35f93fcf;
                                }
                                uVar1 = uVar22;
                                if (uVar18 == 0xffffffff) {
                                  uVar1 = 0x35f93fcf;
                                }
                                if (9 < y_32) {
                                  uVar1 = uVar22;
                                }
                                puVar24 = (undefined *)(ulong)uVar1;
                              }
                            }
                            else if (iVar19 < -0x5ff95980) {
                              if (iVar19 == -0x6455bb88) {
                                puVar24 = (undefined *)0xfa2d359e;
                                if (local_480 < local_368) {
                                  puVar24 = (undefined *)0x3da24cba;
                                }
                              }
                              else if (iVar19 == -0x6086f987) {
                                buffer[(long)local_718] = '\'';
                                puVar24 = (undefined *)0x1b5b8cf5;
                              }
                            }
                            else if (iVar19 == -0x5ff95980) {
                              puVar24 = (undefined *)0x6e4dbecd;
                              if (local_564 < 0x10) {
                                puVar24 = (undefined *)0x5c0a0c03;
                              }
                            }
                            else if (iVar19 == -0x5fe8054b) {
                              buffer[(long)local_5c0] = '$';
                              bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                              puVar24 = (undefined *)0xd9461648;
                              if (bVar25) {
                                puVar24 = (undefined *)0x2272a057;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)0xd9461648;
                              }
                              if (y_32 < 10 != bVar25) {
                                puVar24 = (undefined *)0x2272a057;
                              }
                            }
                            else if (iVar19 == -0x5fa18160) {
                              buffer[(long)local_3a0] = '$';
                              bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                              puVar24 = (undefined *)0x254b4437;
                              if (bVar25) {
                                puVar24 = (undefined *)0x8496b3ac;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)0x254b4437;
                              }
                              if (y_32 < 10 != bVar25) {
                                puVar24 = (undefined *)0x8496b3ac;
                              }
                            }
                          }
                          else if (iVar19 < -0x4c0f6090) {
                            if (iVar19 < -0x55e2c679) {
                              if (iVar19 < -0x5c67cb41) {
                                if (iVar19 < -0x5d6e4e0e) {
                                  if (iVar19 < -0x5db86f7e) {
                                    if (iVar19 == -0x5e5c0103) {
                                      local_65b = local_718 < local_730;
                                      uVar18 = ~(~-x_31 * x_31) | 0xfffffffe;
                                      uVar22 = 0xb08aa57a;
                                      if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                        uVar22 = 0x8fed880b;
                                      }
                                      uVar1 = uVar22;
                                      if (uVar18 == 0xffffffff) {
                                        uVar1 = 0x8fed880b;
                                      }
                                      if (9 < y_32) {
                                        uVar1 = uVar22;
                                      }
                                      puVar24 = (undefined *)(ulong)uVar1;
                                    }
                                    else if (iVar19 == -0x5e1f224c) {
                                      local_570 = shell_escape_always_quoting_style;
                                      puVar24 = (undefined *)0xefd68aa;
                                    }
                                  }
                                  else if (iVar19 == -0x5db86f7e) {
                                    puVar24 = (undefined *)0x6ac8cb42;
                                    if (local_674 - 0x3cU < 3) {
                                      puVar24 = (undefined *)0x8d221414;
                                    }
                                  }
                                  else if (iVar19 == -0x5d8b3c29) {
                                    local_73d = local_741;
                                    local_680 = local_710;
                                    local_688 = local_6d8;
                                    local_690 = local_6f8;
                                    local_73f = local_743;
                                    local_73e = local_740;
                                    unaff_R14B = 0;
                                    puVar24 = (undefined *)0x8c24a5da;
                                    unaff_RBP = local_730;
                                    unaff_R15 = local_718;
                                    unaff_R13B = 0;
                                    bVar2 = local_744;
                                  }
                                }
                                else if (iVar19 < -0x5cd37a70) {
                                  if (iVar19 == -0x5d6e4e0e) {
                                    local_6be = local_65e;
                                    puVar24 = (undefined *)0x3191bb07;
                                  }
                                  else if (iVar19 == -0x5d6d7e04) {
                                    puVar24 = (undefined *)0xe97182ad;
                                  }
                                }
                                else if (iVar19 == -0x5cd37a70) {
                                  puVar24 = (undefined *)0xb50dadaa;
                                  if ((int)local_738 < 0x20) {
                                    puVar24 = (undefined *)0xa345d757;
                                  }
                                }
                                else if ((iVar19 == -0x5cba28a9) &&
                                        (puVar24 = (undefined *)0x33771324, local_738 == 0xd)) {
                                  puVar24 = (undefined *)0x2c4fc4b1;
                                }
                              }
                              else if (iVar19 < -0x59da6a9e) {
                                if (iVar19 < -0x5b21ad91) {
                                  if (iVar19 == -0x5c67cb41) {
                                    local_228 = local_560 + 1;
                                    local_647 = local_228 < local_730;
                                    uVar18 = (x_31 + -1) * x_31;
                                    uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                    puVar24 = (undefined *)0x6e2b8d00;
                                    if (uVar18 == 0) {
                                      puVar24 = (undefined *)0x567ae8df;
                                    }
                                    if (9 < y_32) {
                                      puVar24 = (undefined *)0x6e2b8d00;
                                    }
                                    if (y_32 < 10 != (uVar18 == 0)) {
                                      puVar24 = (undefined *)0x567ae8df;
                                    }
                                  }
                                  else if ((iVar19 == -0x5bd49b1e) &&
                                          (puVar24 = (undefined *)0x41ebdd8, (int)local_738 < 0x3b))
                                  {
                                    puVar24 = (undefined *)0xbde04a42;
                                  }
                                }
                                else if (iVar19 == -0x5b21ad91) {
                                  local_638 = (byte)(~local_743 | 0xfe) != 0xff;
                                  uVar18 = (x_31 + -1) * x_31;
                                  uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                  puVar24 = (undefined *)0xfcce513b;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0xd361cdb4;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)0xfcce513b;
                                  }
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    puVar24 = (undefined *)0xd361cdb4;
                                  }
                                }
                                else if (iVar19 == -0x5a05f86d) {
                                  uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                                  uVar22 = 0x64684bc8;
                                  if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                    uVar22 = 0xff29cad6;
                                  }
                                  uVar1 = uVar22;
                                  if (uVar18 == 0xffffffff) {
                                    uVar1 = 0xff29cad6;
                                  }
                                  if (9 < y_32) {
                                    uVar1 = uVar22;
                                  }
                                  puVar24 = (undefined *)(ulong)uVar1;
                                }
                              }
                              else if (iVar19 < -0x57557d82) {
                                if (iVar19 == -0x59da6a9e) {
                                  puVar24 = (undefined *)0xe115bb2f;
                                }
                                else if (iVar19 == -0x57dbf381) {
                                  local_128 = local_710 + (long)local_f8;
                                  local_6bd = local_741;
                                  local_2b0 = local_710;
                                  local_2b8 = local_718;
                                  local_6c1 = local_744;
                                  local_6c3 = local_740;
                                  puVar24 = (undefined *)0x2fd2fe70;
                                  bVar9 = 0;
                                }
                              }
                              else if (iVar19 == -0x57557d82) {
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                uVar22 = 0xa6259562;
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  uVar22 = 0xe115bb2f;
                                }
                                puVar24 = (undefined *)(ulong)uVar22;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0xe115bb2f;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)(ulong)uVar22;
                                }
                              }
                              else if (iVar19 == -0x570cff84) {
                                uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                                puVar24 = (undefined *)0x48b31e8b;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0xead3b09b;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)0x48b31e8b;
                                }
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  puVar24 = (undefined *)0xead3b09b;
                                }
                              }
                              else if (iVar19 == -0x563012c5) {
                                local_268 = local_710 + 2;
                                local_657 = local_268 < local_6f8;
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                uVar22 = 0xde480b4b;
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  uVar22 = 0xd6ed6019;
                                }
                                puVar24 = (undefined *)(ulong)uVar22;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0xd6ed6019;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)(ulong)uVar22;
                                }
                              }
                            }
                            else if (iVar19 < -0x52f650de) {
                              if (iVar19 < -0x54d62602) {
                                if (iVar19 < -0x54f76fb7) {
                                  if (iVar19 == -0x55e2c679) {
                                    local_5e0 = 0x34;
                                    local_4c0 = local_490;
                                    puVar24 = (undefined *)0x718a964e;
                                    bVar10 = 0;
                                  }
                                  else if (iVar19 == -0x55d2a1f3) {
                                    local_73d = local_741;
                                    local_680 = local_710;
                                    local_688 = local_6d8;
                                    local_690 = local_6f8;
                                    local_73f = local_743;
                                    local_73e = local_740;
                                    unaff_R14B = 0;
                                    puVar24 = (undefined *)(ulong)local_1b0;
                                    unaff_RBP = local_730;
                                    unaff_R15 = local_718;
                                    unaff_R13B = 0;
                                    bVar2 = local_744;
                                  }
                                }
                                else if (iVar19 == -0x54f76fb7) {
                                  local_680 = local_710;
                                  local_688 = local_6d8;
                                  local_690 = local_6f8;
                                  local_73f = local_743;
                                  local_73e = local_740;
                                  local_73d = 0x30;
                                  unaff_R14B = 1;
                                  puVar24 = (undefined *)0x8c24a5da;
                                  unaff_RBP = local_730;
                                  unaff_R15 = local_4f8;
                                  unaff_R13B = 0;
                                  bVar2 = local_62f;
                                }
                                else if ((iVar19 == -0x54f24613) &&
                                        (puVar24 = (undefined *)0xffd4cc3b, local_56c == 0x34)) {
                                  puVar24 = (undefined *)0x1c797df4;
                                }
                              }
                              else if (iVar19 < -0x53e4dff4) {
                                if (iVar19 == -0x54d62602) {
                                  puVar24 = (undefined *)0x51ea4f01;
                                }
                                else if (iVar19 == -0x54bde8fa) {
                                  local_408 = (undefined *)strlen(arg);
                                  local_6ea = 1;
                                  local_428 = (undefined *)0x0;
                                  puVar24 = (undefined *)0xd656cbfc;
                                }
                              }
                              else if (iVar19 == -0x53e4dff4) {
                                puVar24 = (undefined *)0x3d81ec5;
                                if ((int)local_6d0 < 7) {
                                  puVar24 = (undefined *)0x80e58add;
                                }
                              }
                              else if (iVar19 == -0x537f8d6b) {
                                puVar24 = (undefined *)0xf16893a9;
                                if ((int)local_738 < 0x5f) {
                                  puVar24 = (undefined *)0x6c16832d;
                                }
                                bVar17 = 0;
                              }
                              else if (iVar19 == -0x53693ef9) {
                                puVar24 = (undefined *)0x6c16832d;
                                if ((int)local_738 < 0x5b) {
                                  puVar24 = (undefined *)0xf16893a9;
                                }
                                bVar17 = 0;
                              }
                            }
                            else if (iVar19 < -0x50715d42) {
                              if (iVar19 < -0x526dde7a) {
                                if (iVar19 == -0x52f650de) {
                                  local_148 = local_710 + 1;
                                  puVar24 = (undefined *)0xab089049;
                                  if (local_148 < local_6f8) {
                                    puVar24 = (undefined *)0xbbe78ec2;
                                  }
                                  local_4f8 = local_5b0;
                                }
                                else if (iVar19 == -0x52ccb06e) {
                                  uVar18 = (x_31 + -1) * x_31;
                                  uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                  puVar24 = (undefined *)0x254b4437;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0xa05e7ea0;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)0x254b4437;
                                  }
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    puVar24 = (undefined *)0xa05e7ea0;
                                  }
                                }
                              }
                              else if (iVar19 == -0x526dde7a) {
                                puVar24 = (undefined *)0x6c16832d;
                                if ((int)local_738 < 0x7c) {
                                  puVar24 = (undefined *)0xdfca699e;
                                }
                                bVar17 = 0;
                              }
                              else if (iVar19 == -0x520fad78) {
                                local_62f = local_6eb;
                                local_5d0 = local_410;
                                puVar24 = (undefined *)0x328792a5;
                                if (local_410 < local_730) {
                                  puVar24 = (undefined *)0x32ccdb67;
                                }
                              }
                            }
                            else if (iVar19 < -0x4ede9481) {
                              if (iVar19 == -0x50715d42) {
                                puVar24 = (undefined *)0xc8f4dd2f;
                              }
                              else if (iVar19 == -0x4f755a86) {
                                puVar24 = (undefined *)0xa1a3fefd;
                              }
                            }
                            else if (iVar19 == -0x4ede9481) {
                              uVar18 = (x_31 + -1) * x_31;
                              uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                              puVar24 = (undefined *)0x931315d9;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0xf62b4409;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)0x931315d9;
                              }
                              if (y_32 < 10 != (uVar18 == 0)) {
                                puVar24 = (undefined *)0xf62b4409;
                              }
                            }
                            else if (iVar19 == -0x4e0e3399) {
                              uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                              uVar22 = 0x685bcbd9;
                              if (y_32 < 10 != (uVar18 == 0)) {
                                uVar22 = 0x1e50de9e;
                              }
                              puVar24 = (undefined *)(ulong)uVar22;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0x1e50de9e;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)(ulong)uVar22;
                              }
                            }
                            else if (iVar19 == -0x4d8858cd) {
                              uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                              uVar22 = 0xe0439c1c;
                              if (y_32 < 10 != (uVar18 == 0)) {
                                uVar22 = 0x493c3b76;
                              }
                              puVar24 = (undefined *)(ulong)uVar22;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0x493c3b76;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)(ulong)uVar22;
                              }
                            }
                          }
                          else if (iVar19 < -0x421fb5be) {
                            if (iVar19 < -0x48b8c6ad) {
                              if (iVar19 < -0x4ab7790b) {
                                if (iVar19 < -0x4af25256) {
                                  if (iVar19 == -0x4c0f6090) {
                                    puVar24 = (undefined *)0xd54aab09;
                                    if (local_637 != '\0') {
                                      puVar24 = (undefined *)0xe21f50c8;
                                    }
                                  }
                                  else if (iVar19 == -0x4afc0cdc) {
                                    puVar24 = (undefined *)0x474684ba;
                                  }
                                }
                                else if (iVar19 == -0x4af25256) {
                                  bVar17 = 1;
                                  puVar24 = (undefined *)0x6c16832d;
                                }
                                else if ((iVar19 == -0x4ae55e20) &&
                                        (puVar24 = (undefined *)0x6ac8cb42, local_674 == 0x2f)) {
                                  puVar24 = (undefined *)0x8d221414;
                                }
                              }
                              else if (iVar19 < -0x4a1c0d04) {
                                if (iVar19 == -0x4ab7790b) {
                                  puVar24 = (undefined *)0x8d875b87;
                                  if ((byte)(~local_744 | 0xfe) != 0xff) {
                                    puVar24 = (undefined *)0xadf05288;
                                  }
                                  local_410 = local_718;
                                  local_6eb = local_744;
                                }
                                else if (iVar19 == -0x4a4fdee9) {
                                  local_600 = local_710;
                                  local_608 = local_718;
                                  local_610 = local_6d8;
                                  local_618 = local_6f8;
                                  local_739 = local_744;
                                  local_73a = local_743;
                                  local_6b0 = 0x10;
                                  local_620 = local_730;
                                  puVar24 = (undefined *)0xfc047c01;
                                  local_73b = local_73c;
                                }
                              }
                              else if (iVar19 == -0x4a1c0d04) {
                                local_600 = local_710;
                                local_608 = local_718;
                                local_610 = local_6d8;
                                local_618 = local_6f8;
                                local_739 = local_744;
                                local_73a = local_743;
                                local_73b = local_73c;
                                local_6b0 = 0x10;
                                local_620 = local_730;
                                puVar24 = (undefined *)0xfc047c01;
                              }
                              else if (iVar19 == -0x490f2b3c) {
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                uVar22 = 0xc06cebc3;
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  uVar22 = 0x358e05d;
                                }
                                puVar24 = (undefined *)(ulong)uVar22;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0x358e05d;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)(ulong)uVar22;
                                }
                              }
                            }
                            else if (iVar19 < -0x4418713e) {
                              if (iVar19 < -0x4663aa19) {
                                if (iVar19 == -0x48b8c6ad) {
                                  puVar24 = (undefined *)0xac1b200c;
                                  if ((int)local_6d0 < 6) {
                                    puVar24 = (undefined *)0x716251e4;
                                  }
                                }
                                else if (iVar19 == -0x46c7164a) {
                                  local_108 = local_2e8;
                                  local_380 = local_340;
                                  local_6a5 = *local_2e8;
                                  puVar24 = (undefined *)0x2ed29363;
                                  if (local_6a5 != '\0') {
                                    puVar24 = (undefined *)0x84780ea9;
                                  }
                                  local_348 = local_340;
                                }
                              }
                              else if (iVar19 == -0x4663aa19) {
                                local_641 = ((local_701 ^ 0xfe) & local_701) != 0;
                                uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                                uVar22 = 0x8c7dc8fb;
                                if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                  uVar22 = 0x12402855;
                                }
                                uVar1 = uVar22;
                                if (uVar18 == 0xffffffff) {
                                  uVar1 = 0x12402855;
                                }
                                if (9 < y_32) {
                                  uVar1 = uVar22;
                                }
                                puVar24 = (undefined *)(ulong)uVar1;
                              }
                              else if (iVar19 == -0x45dcd1db) {
                                bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                                puVar24 = (undefined *)0x6d8d4b69;
                                if (bVar25) {
                                  puVar24 = (undefined *)0x72942128;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)0x6d8d4b69;
                                }
                                if (y_32 < 10 != bVar25) {
                                  puVar24 = (undefined *)0x72942128;
                                }
                              }
                            }
                            else if (iVar19 < -0x435b92b1) {
                              if (iVar19 == -0x4418713e) {
                                local_524 = (int)arg[(long)local_148];
                                puVar24 = (undefined *)0xab089049;
                                if (0x2f < local_524) {
                                  puVar24 = (undefined *)0x5f64e88f;
                                }
                                local_4f8 = local_5b0;
                              }
                              else if (iVar19 == -0x4402fbc5) {
                                puVar24 = (undefined *)0x1bdbbe1f;
                                if (((local_742 ^ 0xfe) & local_742) != 0) {
                                  puVar24 = (undefined *)0x887e3825;
                                }
                                local_71b = local_741;
                                local_4c8 = local_710;
                                local_4d0 = local_718;
                                local_4d8 = local_6d8;
                                local_4e0 = local_6f8;
                                local_71c = local_744;
                                local_71d = local_743;
                                local_508 = local_730;
                                bVar7 = 0;
                                bVar8 = 0;
                              }
                            }
                            else if (iVar19 == -0x435b92b1) {
                              puVar24 = (undefined *)0x123b74cc;
                              if (local_649 != '\0') {
                                puVar24 = (undefined *)0xfe21887d;
                              }
                            }
                            else if (iVar19 == -0x431dd9fd) {
                              local_6b7 = local_71f;
                              local_4a8 = local_510;
                              local_4a0 = local_518;
                              local_218 = local_4f0;
                              local_210 = local_4e8;
                              local_6fc = local_5d4;
                              local_2e0 = local_80;
                              local_2f0 = local_88;
                              local_6c6 = local_631;
                              local_6c7 = local_632;
                              local_6c8 = local_633;
                              local_300 = local_468;
                              local_338 = local_520;
                              local_330 = (undefined *)0x0;
                              puVar24 = (undefined *)0x21424190;
                              local_742 = bVar12;
                            }
                            else if (iVar19 == -0x42ccfc75) {
                              buffer[(long)local_558] = '\'';
                              puVar24 = (undefined *)0x4c8f7fc6;
                            }
                          }
                          else if (iVar19 < -0x3f1c7dec) {
                            if (iVar19 < -0x40f61d55) {
                              if (iVar19 < -0x4178135c) {
                                if (iVar19 == -0x421fb5be) {
                                  puVar24 = (undefined *)0xf16893a9;
                                  if ((int)local_738 < 0x2b) {
                                    puVar24 = (undefined *)0x6c16832d;
                                  }
                                  bVar17 = 0;
                                }
                                else if ((iVar19 == -0x420dbdba) &&
                                        (puVar24 = (undefined *)0x1c448620,
                                        local_6d0 + ~escape_quoting_style < 3)) {
                                  puVar24 = (undefined *)0x517d8b8a;
                                }
                              }
                              else if (iVar19 == -0x4178135c) {
                                puVar24 = (undefined *)0x8c24a5da;
                                if (arg[(long)(local_710 + 1)] == '?') {
                                  puVar24 = (undefined *)0xdbe658c2;
                                }
                                local_73d = local_741;
                                local_680 = local_710;
                                local_688 = local_6d8;
                                local_690 = local_6f8;
                                local_73f = local_743;
                                local_73e = local_740;
                                unaff_R14B = 0;
                                unaff_RBP = local_730;
                                unaff_R15 = local_718;
                                unaff_R13B = 0;
                                bVar2 = local_744;
                              }
                              else if (iVar19 == -0x416d73bc) {
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                uVar22 = 0x6e2b8d00;
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  uVar22 = 0xa39834bf;
                                }
                                puVar24 = (undefined *)(ulong)uVar22;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0xa39834bf;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)(ulong)uVar22;
                                }
                              }
                            }
                            else if (iVar19 < -0x4031fbfd) {
                              if (iVar19 == -0x40f61d55) {
                                local_65c = ((local_742 ^ 0xfe) & local_742) != 0;
                                uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                                uVar22 = 0x5f151cc0;
                                if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                  uVar22 = 0x55ebe1ed;
                                }
                                uVar1 = uVar22;
                                if (uVar18 == 0xffffffff) {
                                  uVar1 = 0x55ebe1ed;
                                }
                                if (9 < y_32) {
                                  uVar1 = uVar22;
                                }
                                puVar24 = (undefined *)(ulong)uVar1;
                              }
                              else if (iVar19 == -0x4067e776) {
                                puVar24 = (undefined *)0xf16893a9;
                                if ((int)local_738 < 0x61) {
                                  puVar24 = (undefined *)0x6c16832d;
                                }
                                bVar17 = 0;
                              }
                            }
                            else if (iVar19 == -0x4031fbfd) {
                              local_69d = local_6e9;
                              local_630 = local_6ed;
                              puVar24 = (undefined *)0x50f404a6;
                              if (((local_6e9 ^ 0xfe) & local_6e9) != 0) {
                                puVar24 = (undefined *)0x210997ff;
                              }
                              local_350 = (undefined *)0x0;
                            }
                            else if (iVar19 == -0x40163da6) {
                              bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                              puVar24 = (undefined *)0x166eec79;
                              if (bVar25) {
                                puVar24 = (undefined *)0x845ebdbb;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)0x166eec79;
                              }
                              if (y_32 < 10 != bVar25) {
                                puVar24 = (undefined *)0x845ebdbb;
                              }
                            }
                            else if (iVar19 == -0x3f93143d) {
                              puVar24 = (undefined *)0xb6f0d4c4;
                            }
                          }
                          else if (iVar19 < -0x3bfb87e4) {
                            if (iVar19 < -0x3d3b7833) {
                              if (iVar19 == -0x3f1c7dec) {
                                local_598 = local_418;
                                local_627 = local_6e2;
                                local_694 = local_6e1;
                                local_701 = local_6e0;
                                local_e8 = local_400;
                                local_e0 = local_3f8;
                                local_5b8 = local_3f0;
                                local_d8 = local_3e0;
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                puVar24 = (undefined *)0xe071787;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0x37af597d;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)0xe071787;
                                }
                                local_628 = bVar6;
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  puVar24 = (undefined *)0x37af597d;
                                }
                              }
                              else if (iVar19 == -0x3ea17234) {
                                local_248 = local_4b8 + 1;
                                local_650 = local_248 < local_498;
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                puVar24 = (undefined *)0xfe601b6a;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0x1afdfff;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)0xfe601b6a;
                                }
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  puVar24 = (undefined *)0x1afdfff;
                                }
                              }
                            }
                            else if (iVar19 == -0x3d3b7833) {
                              local_3c0 = local_448;
                              local_3d0 = local_f0;
                              local_588 = local_52c;
                              local_6e5 = local_6bc;
                              local_6e3 = local_6bb;
                              local_6e4 = local_6ba;
                              local_420 = local_2a8;
                              puVar24 = (undefined *)0xc6411054;
                              bVar4 = local_6a1;
                              bVar13 = local_6bf;
                            }
                            else if (iVar19 == -0x3c470079) {
                              local_721 = 0x66;
                              puVar24 = (undefined *)0x8c0dae31;
                            }
                          }
                          else if (iVar19 < -0x3bc654a3) {
                            if (iVar19 == -0x3bfb87e4) {
                              puVar24 = (undefined *)0x99e104ec;
                              if (local_655 != 0) {
                                puVar24 = (undefined *)0x1bdbbe1f;
                              }
                              local_71e = local_741;
                              local_71b = local_741;
                              local_4c8 = local_710;
                              local_4d0 = local_718;
                              local_4d8 = local_6d8;
                              local_4e0 = local_6f8;
                              local_71c = local_744;
                              local_71d = local_743;
                              local_508 = local_730;
                              bVar7 = 0;
                              bVar8 = 0;
                            }
                            else if (iVar19 == -0x3bfae72c) {
                              uVar18 = (x_31 + -1) * x_31;
                              uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                              puVar24 = (undefined *)0x85ab3af3;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0x827152f;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)0x85ab3af3;
                              }
                              if (y_32 < 10 != (uVar18 == 0)) {
                                puVar24 = (undefined *)0x827152f;
                              }
                            }
                          }
                          else if (iVar19 == -0x3bc654a3) {
                            puVar24 = (undefined *)0xf7047695;
                            if (local_651 != '\0') {
                              puVar24 = (undefined *)0x3744cf8b;
                            }
                          }
                          else if (iVar19 == -0x3aba13b5) {
                            local_4b8 = local_718 + 1;
                            local_651 = local_4b8 < local_498;
                            uVar18 = (x_31 + -1) * x_31;
                            uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                            uVar22 = 0x79db7108;
                            if (y_32 < 10 != (uVar18 == 0)) {
                              uVar22 = 0xc439ab5d;
                            }
                            puVar24 = (undefined *)(ulong)uVar22;
                            if (uVar18 == 0) {
                              puVar24 = (undefined *)0xc439ab5d;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)(ulong)uVar22;
                            }
                          }
                          else if (iVar19 == -0x3a849f14) {
                            puVar24 = (undefined *)0x58ac1529;
                            if ((int)local_738 < 0x27) {
                              puVar24 = (undefined *)0x6c16832d;
                            }
                            bVar17 = 0;
                          }
                        }
                        else if (iVar19 < -0x1afa32b9) {
                          if (iVar19 < -0x2a7b7442) {
                            if (iVar19 < -0x2fad71d5) {
                              if (iVar19 < -0x34091d1c) {
                                if (iVar19 < -0x364da618) {
                                  if (iVar19 < -0x370b22d1) {
                                    if (iVar19 == -0x39beefac) {
                                      local_568 = local_588;
                                      local_62b = local_6e5;
                                      local_695 = local_6e3;
                                      local_6b4 = local_6e4;
                                      local_200 = local_3d0;
                                      local_1f8 = local_420;
                                      local_1f0 = local_3c0;
                                      puVar24 = (undefined *)0x909a9cb0;
                                      local_697 = bVar4;
                                      local_696 = bVar13;
                                    }
                                    else if ((iVar19 == -0x38509a89) &&
                                            (puVar24 = (undefined *)0x33771324, local_738 == 0x7e))
                                    {
                                      puVar24 = (undefined *)0x40705f4a;
                                    }
                                  }
                                  else if (iVar19 == -0x370b22d1) {
                                    local_a8 = local_558 + 1;
                                    uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                                    uVar22 = 0xaf8ea2be;
                                    if (y_32 < 10 != (uVar18 == 0)) {
                                      uVar22 = 0x310fd56f;
                                    }
                                    puVar24 = (undefined *)(ulong)uVar22;
                                    if (uVar18 == 0) {
                                      puVar24 = (undefined *)0x310fd56f;
                                    }
                                    if (9 < y_32) {
                                      puVar24 = (undefined *)(ulong)uVar22;
                                    }
                                  }
                                  else if (iVar19 == -0x36f8de53) {
                                    puVar24 = (undefined *)0x12f3fb19;
                                  }
                                }
                                else if (iVar19 < -0x351924b1) {
                                  if (iVar19 == -0x364da618) {
                                    local_398 = local_448 + 1;
                                    local_646 = local_128 <= local_398;
                                    uVar18 = (x_31 + -1) * x_31;
                                    uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                    uVar22 = 0x4f1e95e9;
                                    if (y_32 < 10 != (uVar18 == 0)) {
                                      uVar22 = 0x919752a0;
                                    }
                                    puVar24 = (undefined *)(ulong)uVar22;
                                    if (uVar18 == 0) {
                                      puVar24 = (undefined *)0x919752a0;
                                    }
                                    if (9 < y_32) {
                                      puVar24 = (undefined *)(ulong)uVar22;
                                    }
                                  }
                                  else if (iVar19 == -0x356306f5) {
                                    puVar24 = (undefined *)0x9baa4478;
                                    if (local_63c != '\0') {
                                      puVar24 = (undefined *)0xf0414557;
                                    }
                                    local_3b0 = local_480;
                                    bVar5 = local_6d9;
                                  }
                                }
                                else if (iVar19 == -0x351924b1) {
                                  puVar24 = (undefined *)0x1aa1bd92;
                                  if (local_5f0 < local_730) {
                                    puVar24 = (undefined *)0x8e5e5716;
                                  }
                                }
                                else if (iVar19 == -0x35173e93) {
                                  puVar24 = (undefined *)0x8c24a5da;
                                  if (((local_742 ^ 0xfe) & local_742) != 0) {
                                    puVar24 = (undefined *)0x7a0a6a7e;
                                  }
                                  local_73d = local_741;
                                  local_680 = local_710;
                                  local_688 = local_6d8;
                                  local_690 = local_6f8;
                                  local_73f = local_743;
                                  local_73e = local_740;
                                  unaff_R14B = 0;
                                  unaff_RBP = local_730;
                                  unaff_R15 = local_718;
                                  unaff_R13B = local_69b;
                                  bVar2 = local_744;
                                }
                              }
                              else if (iVar19 < -0x327e3340) {
                                if (iVar19 < -0x32ffc7d1) {
                                  if (iVar19 == -0x34091d1c) {
                                    local_3e0 = local_710;
                                    local_3f0 = local_718;
                                    local_3f8 = local_6d8;
                                    local_400 = local_6f8;
                                    local_6e0 = local_744;
                                    local_6e1 = local_743;
                                    local_6e2 = local_62e;
                                    local_418 = local_730;
                                    puVar24 = (undefined *)0xc0e38214;
                                    bVar6 = 0;
                                  }
                                  else if (iVar19 == -0x335fb432) {
                                    local_600 = local_710;
                                    local_608 = local_718;
                                    local_610 = local_6d8;
                                    local_618 = local_378;
                                    local_739 = local_744;
                                    local_73a = local_743;
                                    local_73b = local_73c;
                                    local_6b0 = 0x10;
                                    local_620 = local_730;
                                    puVar24 = (undefined *)0xfc047c01;
                                  }
                                }
                                else if (iVar19 == -0x32ffc7d1) {
                                  local_636 = local_4a0 != (char *)0x0;
                                  uVar18 = (x_31 + -1) * x_31;
                                  uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                  puVar24 = (undefined *)0x4f015bee;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0x905483de;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)0x4f015bee;
                                  }
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    puVar24 = (undefined *)0x905483de;
                                  }
                                }
                                else if (iVar19 == -0x32dff7ab) {
                                  local_600 = local_710;
                                  local_608 = local_718;
                                  local_610 = local_6d8;
                                  local_618 = local_6f8;
                                  local_739 = local_744;
                                  local_73a = local_743;
                                  local_73b = local_73c;
                                  local_6b0 = 0xf;
                                  local_620 = local_730;
                                  puVar24 = (undefined *)0xfc047c01;
                                }
                              }
                              else if (iVar19 < -0x30cbab4b) {
                                if (iVar19 == -0x327e3340) {
                                  local_643 = ~(((byte)(~local_742 | 0xfe) != 0xff) !=
                                               (quote_these_too != (uint *)0x0)) &
                                              quote_these_too != (uint *)0x0;
                                  bVar25 = (~(~-x_31 * x_31) | 0xfffffffeU) == 0xffffffff;
                                  puVar24 = (undefined *)0x45525a8e;
                                  if (bVar25) {
                                    puVar24 = (undefined *)0x463aaca9;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)0x45525a8e;
                                  }
                                  if (y_32 < 10 != bVar25) {
                                    puVar24 = (undefined *)0x463aaca9;
                                  }
                                }
                                else if (iVar19 == -0x3192e3f4) {
                                  puVar24 = (undefined *)0x51dccb19;
                                }
                              }
                              else if (iVar19 == -0x30cbab4b) {
                                local_721 = 0x76;
                                puVar24 = (undefined *)0x8c0dae31;
                              }
                              else if (iVar19 == -0x30c00905) {
                                puVar24 = (undefined *)0xe9b8578c;
                                bVar15 = local_73c;
                                if (local_63b != '\0') {
                                  puVar24 = (undefined *)0x7d77e7fa;
                                }
                              }
                              else if (iVar19 == -0x2fc08b9d) {
                                local_69f = *local_360;
                                local_634 = local_69f != '\0';
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                puVar24 = (undefined *)0xfac72058;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0x3d3fd41d;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)0xfac72058;
                                }
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  puVar24 = (undefined *)0x3d3fd41d;
                                }
                              }
                            }
                            else if (iVar19 < -0x2d960912) {
                              if (iVar19 < -0x2f08b7da) {
                                if (iVar19 < -0x2f576c3b) {
                                  if (iVar19 == -0x2fad71d5) {
                                    uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                                    puVar24 = (undefined *)0x45525a8e;
                                    if (uVar18 == 0) {
                                      puVar24 = (undefined *)0xcd81ccc0;
                                    }
                                    if (9 < y_32) {
                                      puVar24 = (undefined *)0x45525a8e;
                                    }
                                    if (y_32 < 10 != (uVar18 == 0)) {
                                      puVar24 = (undefined *)0xcd81ccc0;
                                    }
                                  }
                                  else if (iVar19 == -0x2f5f36f8) {
                                    buffer[(long)local_390] = '\'';
                                    puVar24 = (undefined *)0xedc93d;
                                  }
                                }
                                else if (iVar19 == -0x2f576c3b) {
                                  puVar24 = (undefined *)0xef2e7778;
                                  if ((int)local_6d0 < 2) {
                                    puVar24 = (undefined *)0x1d3202c3;
                                  }
                                }
                                else if (iVar19 == -0x2f47c64f) {
                                  local_64d = local_4b0 == (undefined *)0xffffffffffffffff;
                                  uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                                  uVar22 = 0x68bd2e82;
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    uVar22 = 0x4d1daa78;
                                  }
                                  puVar24 = (undefined *)(ulong)uVar22;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0x4d1daa78;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)(ulong)uVar22;
                                  }
                                }
                              }
                              else if (iVar19 < -0x2edeea5d) {
                                if (iVar19 == -0x2f08b7da) {
                                  puVar24 = (undefined *)0x6ac8cb42;
                                  if (local_674 - 0x27U < 3) {
                                    puVar24 = (undefined *)0x8d221414;
                                  }
                                }
                                else if (iVar19 == -0x2ef592a1) {
                                  uVar18 = (x_31 + -1) * x_31;
                                  uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                  uVar22 = 0x1985a806;
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    uVar22 = 0x517301d7;
                                  }
                                  puVar24 = (undefined *)(ulong)uVar22;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0x517301d7;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)(ulong)uVar22;
                                  }
                                }
                              }
                              else if (iVar19 == -0x2edeea5d) {
                                local_69e = local_6c5;
                                local_19c = local_540;
                                puVar24 = (undefined *)0x189b8cb2;
                                if ((byte)(~local_6c5 | 0xfe) != 0xff) {
                                  puVar24 = (undefined *)0x7556a2ef;
                                }
                                local_358 = (undefined *)0x0;
                              }
                              else if ((iVar19 == -0x2ecce142) &&
                                      (puVar24 = (undefined *)0x502275f0, local_674 < 0x2d)) {
                                puVar24 = (undefined *)0xf3877854;
                              }
                            }
                            else if (iVar19 < -0x2c9e324c) {
                              if (iVar19 < -0x2d504d03) {
                                if (iVar19 == -0x2d960912) {
                                  bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                                  puVar24 = (undefined *)0x744a9018;
                                  if (bVar25) {
                                    puVar24 = (undefined *)0xe3a5abb;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)0x744a9018;
                                  }
                                  if (y_32 < 10 != bVar25) {
                                    puVar24 = (undefined *)0xe3a5abb;
                                  }
                                }
                                else if (iVar19 == -0x2d73c89a) {
                                  buffer[(long)local_548] = local_691;
                                  puVar24 = (undefined *)0x907a2782;
                                }
                              }
                              else if (iVar19 == -0x2d504d03) {
                                puVar24 = (undefined *)0x6c237beb;
                              }
                              else if (iVar19 == -0x2d4e186e) {
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                uVar22 = 0x588a7749;
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  uVar22 = 0xf5b76fcc;
                                }
                                puVar24 = (undefined *)(ulong)uVar22;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0xf5b76fcc;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)(ulong)uVar22;
                                }
                              }
                            }
                            else if (iVar19 < -0x2b73f542) {
                              if (iVar19 == -0x2c9e324c) {
                                puVar24 = (undefined *)0x2e34a855;
                                if (local_638 != '\0') {
                                  puVar24 = (undefined *)0x19738bca;
                                }
                              }
                              else if (iVar19 == -0x2c887e01) {
                                local_664 = (int)arg[(long)(local_5f8 + local_238)];
                                puVar24 = (undefined *)0xd5848bbe;
                              }
                            }
                            else if (iVar19 == -0x2b73f542) {
                              puVar24 = (undefined *)0xefd68aa;
                              if ((byte)(~local_6b7 | 0xfe) != 0xff) {
                                puVar24 = (undefined *)0xef34cea9;
                              }
                              local_570 = local_6fc;
                            }
                            else if (iVar19 == -0x2ab554f7) {
                              uVar18 = 0x2e34a855;
                              if (local_6d8 != (undefined *)0x0) {
                                uVar18 = 0xd70e8cd;
                              }
                              if (local_730 != (undefined *)0x0) {
                                uVar18 = 0x2e34a855;
                              }
                              puVar24 = (undefined *)(ulong)uVar18;
                            }
                            else if ((iVar19 == -0x2a829d86) &&
                                    (puVar24 = (undefined *)0xa274c3d7,
                                    local_6fc == shell_always_quoting_style)) {
                              puVar24 = (undefined *)0x3b302745;
                            }
                          }
                          else if (iVar19 < -0x2419a73e) {
                            if (iVar19 < -0x282800f9) {
                              if (iVar19 < -0x29129fe7) {
                                if (iVar19 < -0x2a1bd0ec) {
                                  if (iVar19 == -0x2a7b7442) {
                                    puVar24 = (undefined *)0x8806c1f2;
                                    if (local_664 < 0x60) {
                                      puVar24 = (undefined *)0x5d449d83;
                                    }
                                  }
                                  else if (iVar19 == -0x2a37c874) {
                                    uVar18 = (x_31 + -1) * x_31;
                                    uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                    uVar22 = 0x76e66f88;
                                    if (y_32 < 10 != (uVar18 == 0)) {
                                      uVar22 = 0x247907a4;
                                    }
                                    puVar24 = (undefined *)(ulong)uVar22;
                                    if (uVar18 == 0) {
                                      puVar24 = (undefined *)0x247907a4;
                                    }
                                    if (9 < y_32) {
                                      puVar24 = (undefined *)(ulong)uVar22;
                                    }
                                  }
                                }
                                else if (iVar19 == -0x2a1bd0ec) {
                                  puVar24 = (undefined *)0xd656cbfc;
                                  if (local_64e != '\0') {
                                    puVar24 = (undefined *)0xab421706;
                                  }
                                  local_6ea = 1;
                                  local_408 = local_6f8;
                                  local_428 = (undefined *)0x0;
                                }
                                else if (iVar19 == -0x29a93404) {
                                  local_6b6 = local_6ea;
                                  local_490 = local_428;
                                  local_450 = local_408;
                                  local_138 = &local_1a0;
                                  local_238 = -(-(long)local_428 - (long)local_710);
                                  local_4b0 = (undefined *)
                                              rpl_mbrtowc(local_138,arg + local_238,
                                                          (size_t)(local_408 +
                                                                  (-(long)local_428 -
                                                                  (long)local_710)),&local_280);
                                  puVar24 = (undefined *)0x1152fe9f;
                                  if (local_4b0 == (undefined *)0x0) {
                                    puVar24 = (undefined *)0x3604764;
                                  }
                                }
                              }
                              else if (iVar19 < -0x2894152d) {
                                if (iVar19 == -0x29129fe7) {
                                  puVar24 = (undefined *)0x8c24a5da;
                                  if (local_657 != '\0') {
                                    puVar24 = (undefined *)0xbe87eca4;
                                  }
                                  local_73d = local_741;
                                  local_680 = local_710;
                                  local_688 = local_6d8;
                                  local_690 = local_6f8;
                                  local_73f = local_743;
                                  local_73e = local_740;
                                  unaff_R14B = 0;
                                  unaff_RBP = local_730;
                                  unaff_R15 = local_718;
                                  unaff_R13B = 0;
                                  bVar2 = local_744;
                                }
                                else if (iVar19 == -0x28b7bfef) {
                                  puVar24 = (undefined *)0xcae6db4f;
                                  if (((local_719 ^ 0xfe) & local_719) != 0) {
                                    puVar24 = (undefined *)0xef5f2398;
                                  }
                                  local_3e8 = local_5f0;
                                  local_6e7 = local_719;
                                }
                              }
                              else if (iVar19 == -0x2894152d) {
                                puVar24 = (undefined *)0x4907bff3;
                                if (local_635 != '\0') {
                                  puVar24 = (undefined *)0x65b5f4e9;
                                }
                                local_288 = local_718;
                                local_298 = local_4a0;
                                local_3a8 = local_718;
                              }
                              else if (iVar19 == -0x287ef84a) {
                                local_626 = local_6df;
                                local_370 = local_3b8;
                                uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                                uVar22 = 0x61f04be7;
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  uVar22 = 0x444683a5;
                                }
                                puVar24 = (undefined *)(ulong)uVar22;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0x444683a5;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)(ulong)uVar22;
                                }
                              }
                            }
                            else if (iVar19 < -0x26275fc7) {
                              if (iVar19 < -0x26b46b25) {
                                if (iVar19 == -0x282800f9) {
                                  uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                                  puVar24 = (undefined *)0x20ad9820;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0x3b69b7c5;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)0x20ad9820;
                                  }
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    puVar24 = (undefined *)0x3b69b7c5;
                                  }
                                }
                                else if (iVar19 == -0x26b9e9b8) {
                                  buffer[(long)local_5c0] = '$';
                                  puVar24 = (undefined *)0xa017fab5;
                                }
                              }
                              else if (iVar19 == -0x26b46b25) {
                                local_71e = 0x74;
                                puVar24 = (undefined *)0x99e104ec;
                              }
                              else if (iVar19 == -0x2635780e) {
                                local_2f8 = gettext_quote("`",local_6d0);
                                local_308 = gettext_quote("\'",local_6d0);
                                puVar24 = (undefined *)0xf01d5f68;
                              }
                            }
                            else if (iVar19 < -0x24f1dd1d) {
                              if (iVar19 == -0x26275fc7) {
                                local_3a0 = local_718 + 1;
                                local_65a = local_3a0 < local_730;
                                uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                                uVar22 = 0xf141f5f;
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  uVar22 = 0xf672297;
                                }
                                puVar24 = (undefined *)(ulong)uVar22;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0xf672297;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)(ulong)uVar22;
                                }
                              }
                              else if (iVar19 == -0x2560388e) {
                                buffer[(long)local_480] = '\'';
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                uVar22 = 0x818fdc00;
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  uVar22 = 0xe5df4bb9;
                                }
                                puVar24 = (undefined *)(ulong)uVar22;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0xe5df4bb9;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)(ulong)uVar22;
                                }
                              }
                            }
                            else if (iVar19 == -0x24f1dd1d) {
                              puVar24 = (undefined *)0xbe928c44;
                            }
                            else if (iVar19 == -0x24d19b9b) {
                              uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                              uVar22 = 0xf141f5f;
                              if (y_32 < 10 != (uVar18 == 0)) {
                                uVar22 = 0xd9d8a039;
                              }
                              puVar24 = (undefined *)(ulong)uVar22;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0xd9d8a039;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)(ulong)uVar22;
                              }
                            }
                            else if ((iVar19 == -0x241fbdba) &&
                                    (puVar24 = (undefined *)0xab0db9ed, local_56c < 0x34)) {
                              puVar24 = (undefined *)0x899fb6e9;
                            }
                          }
                          else if (iVar19 < -0x1fbc63e4) {
                            if (iVar19 < -0x21e9f563) {
                              if (iVar19 < -0x229e666f) {
                                if (iVar19 == -0x2419a73e) {
                                  local_140 = (byte *)(arg + (long)local_268);
                                  local_674 = (int)(char)*local_140;
                                  puVar24 = (undefined *)0xd1331ebe;
                                }
                                else if ((iVar19 == -0x22d3beea) &&
                                        (puVar24 = (undefined *)0x6421dcca, local_63e != '\0')) {
                                  puVar24 = (undefined *)0x4e08c938;
                                }
                              }
                              else if (iVar19 == -0x229e666f) {
                                puVar24 = (undefined *)0x168fb00f;
                                if (local_65d != '\0') {
                                  puVar24 = (undefined *)0x6ff040c5;
                                }
                                bVar16 = 0;
                                local_478 = local_378;
                              }
                              else if (iVar19 == -0x2211755a) {
                                local_534 = 0;
                                puVar24 = (undefined *)0x19599461;
                              }
                            }
                            else if (iVar19 < -0x215ccfd3) {
                              if (iVar19 == -0x21e9f563) {
                                puVar24 = (undefined *)0x1b13f9e5;
                                if ((int)local_738 < 8) {
                                  puVar24 = (undefined *)0x6669c20a;
                                }
                              }
                              else if (iVar19 == -0x21b7f4b5) {
                                puVar24 = (undefined *)0xa9cfed3b;
                              }
                            }
                            else if (iVar19 == -0x215ccfd3) {
                              local_600 = local_710;
                              local_608 = local_718;
                              local_610 = local_6d8;
                              local_618 = local_6f8;
                              local_739 = local_744;
                              local_73b = local_73c;
                              local_73a = 1;
                              local_6b0 = 0x10;
                              local_620 = local_730;
                              puVar24 = (undefined *)0xfc047c01;
                            }
                            else if (iVar19 == -0x20c6a9e2) {
                              local_260 = local_718 + 1;
                              puVar24 = (undefined *)0x186520f8;
                              if (local_260 < local_730) {
                                puVar24 = (undefined *)0x2e58c625;
                              }
                            }
                            else if (iVar19 == -0x20359662) {
                              uVar18 = (x_31 + -1) * x_31;
                              uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                              puVar24 = (undefined *)0xc90721ad;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0x12f3fb19;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)0xc90721ad;
                              }
                              if (y_32 < 10 != (uVar18 == 0)) {
                                puVar24 = (undefined *)0x12f3fb19;
                              }
                            }
                          }
                          else if (iVar19 < -0x1e108b14) {
                            if (iVar19 < -0x1eea44d1) {
                              if (iVar19 == -0x1fbc63e4) {
                                puVar24 = (undefined *)0x493c3b76;
                              }
                              else if (iVar19 == -0x1f05656e) {
                                return (size_t)local_470;
                              }
                            }
                            else if (iVar19 == -0x1eea44d1) {
                              local_388 = local_5c0 + 1;
                              local_63f = local_388 < local_598;
                              uVar18 = (x_31 + -1) * x_31;
                              uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                              puVar24 = (undefined *)0xa6259562;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0x3ce7153d;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)0xa6259562;
                              }
                              if (y_32 < 10 != (uVar18 == 0)) {
                                puVar24 = (undefined *)0x3ce7153d;
                              }
                            }
                            else if (iVar19 == -0x1e7c4178) {
                              buffer[(long)local_440] = '\\';
                              puVar24 = (undefined *)0x7055f515;
                            }
                          }
                          else if (iVar19 < -0x1d3a7e0c) {
                            if (iVar19 == -0x1e108b14) {
                              puVar24 = (undefined *)0x62009500;
                            }
                            else if (iVar19 == -0x1de0af38) {
                              local_470 = (undefined *)
                                          quotearg_buffer_restyled
                                                    (buffer,(size_t)local_6d8,arg,(size_t)local_5a0,
                                                     c_quoting_style,local_1a8,quote_these_too,
                                                     local_210,local_218);
                              puVar24 = (undefined *)0xe0fa9a92;
                            }
                          }
                          else if (iVar19 == -0x1d3a7e0c) {
                            ppuVar21 = __ctype_b_loc();
                            local_64f = (byte)((*ppuVar21)[(int)local_738] >> 0xe) & 1;
                            bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                            puVar24 = (undefined *)0xfa753fa7;
                            if (bVar25) {
                              puVar24 = (undefined *)0x237828c0;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)0xfa753fa7;
                            }
                            if (y_32 < 10 != bVar25) {
                              puVar24 = (undefined *)0x237828c0;
                            }
                          }
                          else if (iVar19 == -0x1d282ec9) {
                            puVar24 = (undefined *)0x84d9d9b;
                          }
                          else if (iVar19 == -0x1d08f2bf) {
                            local_98 = local_438 + 1;
                            local_90 = local_360 + 1;
                            uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                            uVar22 = 0x9a5f25dc;
                            if (y_32 < 10 != (uVar18 == 0)) {
                              uVar22 = 0xf80fe662;
                            }
                            puVar24 = (undefined *)(ulong)uVar22;
                            if (uVar18 == 0) {
                              puVar24 = (undefined *)0xf80fe662;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)(ulong)uVar22;
                            }
                          }
                        }
                        else if (iVar19 < -0xb5c714b) {
                          if (iVar19 < -0x13e97182) {
                            if (iVar19 < -0x16c6aa43) {
                              if (iVar19 < -0x18ee8f35) {
                                if (iVar19 < -0x193f9c05) {
                                  if (iVar19 == -0x1afa32b9) {
                                    uVar18 = ~(~-x_31 * x_31) | 0xfffffffe;
                                    uVar22 = 0x3f943256;
                                    if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                      uVar22 = 0x3df33049;
                                    }
                                    uVar1 = uVar22;
                                    if (uVar18 == 0xffffffff) {
                                      uVar1 = 0x3df33049;
                                    }
                                    if (9 < y_32) {
                                      uVar1 = uVar22;
                                    }
                                    puVar24 = (undefined *)(ulong)uVar1;
                                  }
                                  else if (iVar19 == -0x1a20b447) {
                                    puVar24 = (undefined *)0xfa2d359e;
                                  }
                                }
                                else if (iVar19 == -0x193f9c05) {
                                  bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                                  puVar24 = (undefined *)0x99627dfc;
                                  if (bVar25) {
                                    puVar24 = (undefined *)0x53b9bd27;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)0x99627dfc;
                                  }
                                  if (y_32 < 10 != bVar25) {
                                    puVar24 = (undefined *)0x53b9bd27;
                                  }
                                }
                                else if (iVar19 == -0x19115a01) {
                                  local_3b8 = local_388 + 1;
                                  local_6df = 1;
                                  puVar24 = (undefined *)0xd78107b6;
                                }
                              }
                              else if (iVar19 < -0x1814aa18) {
                                if (iVar19 == -0x18ee8f35) {
                                  puVar24 = (undefined *)0xb277a733;
                                  if (local_64a != '\0') {
                                    puVar24 = (undefined *)0x80b76c8a;
                                  }
                                }
                                else if (iVar19 == -0x18643f04) {
                                  uVar18 = (x_31 + -1) * x_31;
                                  uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                  puVar24 = (undefined *)0x64684bc8;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0xa5fa0793;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)0x64684bc8;
                                  }
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    puVar24 = (undefined *)0xa5fa0793;
                                  }
                                }
                              }
                              else if (iVar19 == -0x1814aa18) {
                                puVar24 = (undefined *)0x924e7bcf;
                                if (local_63a != 0) {
                                  puVar24 = (undefined *)0x6c517cf1;
                                }
                              }
                              else if (iVar19 == -0x16cdfbb2) {
                                uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                                uVar22 = 0x4eece0;
                                if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                  uVar22 = 0x5a9a35ff;
                                }
                                uVar1 = uVar22;
                                if (uVar18 == 0xffffffff) {
                                  uVar1 = 0x5a9a35ff;
                                }
                                if (9 < y_32) {
                                  uVar1 = uVar22;
                                }
                                puVar24 = (undefined *)(ulong)uVar1;
                              }
                            }
                            else if (iVar19 < -0x152c4f65) {
                              if (iVar19 < -0x1647a874) {
                                if (iVar19 == -0x16c6aa43) {
                                  puVar24 = (undefined *)0xec168e7e;
                                }
                                else if (iVar19 == -0x168e7d53) {
                                  local_a0 = local_548 + 1;
                                  local_63b = ((local_693 ^ 0xfe) & local_693) != 0;
                                  bVar25 = (~(~-x_31 * x_31) | 0xfffffffeU) == 0xffffffff;
                                  puVar24 = (undefined *)0xa29281fc;
                                  if (bVar25) {
                                    puVar24 = (undefined *)0xcf3ff6fb;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)0xa29281fc;
                                  }
                                  if (y_32 < 10 != bVar25) {
                                    puVar24 = (undefined *)0xcf3ff6fb;
                                  }
                                }
                              }
                              else if (iVar19 == -0x1647a874) {
                                puVar24 = (undefined *)0x7d77e7fa;
                                bVar15 = 0;
                              }
                              else if (iVar19 == -0x15dbdf70) {
                                puVar24 = (undefined *)0xb50dadaa;
                                if (local_652 != 0) {
                                  puVar24 = (undefined *)0x8c24a5da;
                                }
                                local_73d = local_741;
                                local_680 = local_710;
                                local_688 = local_6d8;
                                local_690 = local_6f8;
                                local_73f = local_743;
                                local_73e = local_740;
                                unaff_R14B = 0;
                                unaff_RBP = local_730;
                                unaff_R15 = local_718;
                                unaff_R13B = 0;
                                bVar2 = local_744;
                              }
                            }
                            else if (iVar19 < -0x14435571) {
                              if (iVar19 == -0x152c4f65) {
                                bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                                puVar24 = (undefined *)0x48b31e8b;
                                if (bVar25) {
                                  puVar24 = (undefined *)0x71f04ea7;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)0x48b31e8b;
                                }
                                if (y_32 < 10 != bVar25) {
                                  puVar24 = (undefined *)0x71f04ea7;
                                }
                              }
                              else if (iVar19 == -0x14889f38) {
                                local_71a = ((local_6b7 ^ 0xfe) & local_6b7) != 0;
                                local_6a3 = local_6fc != shell_always_quoting_style;
                                local_6a2 = ~(~local_6a3 | ~local_71a) & 1;
                                local_731 = local_4a8 != (undefined *)0x0;
                                uVar18 = 0x168fb00f;
                                if ((bool)local_6a2 != false) {
                                  uVar18 = 0x73122a89;
                                }
                                if (local_731 != local_6a2) {
                                  uVar18 = 0x168fb00f;
                                }
                                bVar16 = 0;
                                local_478 = local_5a0;
                                puVar24 = (undefined *)(ulong)uVar18;
                              }
                            }
                            else if (iVar19 == -0x14435571) {
                              uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                              uVar22 = 0x469e1938;
                              if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                uVar22 = 0x4b200e3d;
                              }
                              uVar1 = uVar22;
                              if (uVar18 == 0xffffffff) {
                                uVar1 = 0x4b200e3d;
                              }
                              if (9 < y_32) {
                                uVar1 = uVar22;
                              }
                              puVar24 = (undefined *)(ulong)uVar1;
                            }
                            else if (iVar19 == -0x14126186) {
                              puVar24 = (undefined *)0x4bfc67b3;
                              if (local_664 == 0x7c) {
                                puVar24 = (undefined *)0x2ffa816a;
                              }
                            }
                            else if ((iVar19 == -0x13ed721f) &&
                                    (puVar24 = (undefined *)0x1c448620,
                                    local_6d0 == literal_quoting_style)) {
                              puVar24 = (undefined *)0xf3936389;
                            }
                          }
                          else if (iVar19 < -0xe7ff3b2) {
                            if (iVar19 < -0x10cb3157) {
                              if (iVar19 < -0x12e92b68) {
                                if (iVar19 == -0x13e97182) {
                                  local_5b0 = local_5d0 + 1;
                                  uVar18 = (x_31 + -1) * x_31;
                                  uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                  uVar22 = 0xe93955bd;
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    uVar22 = 0x979250ca;
                                  }
                                  puVar24 = (undefined *)(ulong)uVar22;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0x979250ca;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)(ulong)uVar22;
                                  }
                                }
                                else if (iVar19 == -0x131fbc60) {
                                  local_655 = ~((byte)(~local_742 | 0xfe) == 0xff | ~local_731) & 1;
                                  uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                                  puVar24 = (undefined *)0x8cbdbf8e;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0xc404781c;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)0x8cbdbf8e;
                                  }
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    puVar24 = (undefined *)0xc404781c;
                                  }
                                }
                              }
                              else if (iVar19 == -0x12e92b68) {
                                local_648 = local_440 < local_730;
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                uVar22 = 0x6d04cff4;
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  uVar22 = 0x78b9d2e1;
                                }
                                puVar24 = (undefined *)(ulong)uVar22;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0x78b9d2e1;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)(ulong)uVar22;
                                }
                              }
                              else if (iVar19 == -0x10d18888) {
                                puVar24 = (undefined *)0xf4573b1a;
                                if ((int)local_6d0 < 3) {
                                  puVar24 = (undefined *)0xbfce0403;
                                }
                                local_6ed = local_6de;
                                local_6e9 = local_702;
                              }
                            }
                            else if (iVar19 < -0xfe2a098) {
                              if (iVar19 == -0x10cb3157) {
                                uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                                uVar22 = 0x2016e3e6;
                                if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                  uVar22 = 0x8d21fc49;
                                }
                                uVar1 = uVar22;
                                if (uVar18 == 0xffffffff) {
                                  uVar1 = 0x8d21fc49;
                                }
                                if (9 < y_32) {
                                  uVar1 = uVar22;
                                }
                                puVar24 = (undefined *)(ulong)uVar1;
                              }
                              else if (iVar19 == -0x10a0dc68) {
                                local_62d = local_6e7;
                                local_440 = local_3e8;
                                uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                                puVar24 = (undefined *)0x6d04cff4;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0xed16d498;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)0x6d04cff4;
                                }
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  puVar24 = (undefined *)0xed16d498;
                                }
                              }
                            }
                            else if (iVar19 == -0xfe2a098) {
                              local_220 = local_308;
                              local_110 = local_2f8;
                              puVar24 = (undefined *)0x5e224bf5;
                              if ((byte)(~local_702 | 0xfe) != 0xff) {
                                puVar24 = (undefined *)0x2ed29363;
                              }
                              local_348 = (undefined *)0x0;
                            }
                            else if (iVar19 == -0xfbebaa9) {
                              local_548 = local_3b0;
                              puVar24 = (undefined *)0x62009500;
                              local_624 = bVar5;
                              if (local_3b0 < local_368) {
                                puVar24 = (undefined *)0x8ea31f68;
                              }
                            }
                            else if (iVar19 == -0xe976c57) {
                              local_73d = local_741;
                              local_680 = local_710;
                              local_688 = local_6d8;
                              local_690 = local_6f8;
                              local_73f = local_743;
                              local_73e = local_740;
                              unaff_R14B = 0;
                              puVar24 = (undefined *)0x8c24a5da;
                              unaff_RBP = local_730;
                              unaff_R15 = local_718;
                              unaff_R13B = 1;
                              bVar2 = local_744;
                            }
                          }
                          else if (iVar19 < -0xc6c9c77) {
                            if (iVar19 < -0xd6e75be) {
                              if (iVar19 == -0xe7ff3b2) {
                                puVar24 = (undefined *)0x36f1445a;
                                if (local_6fc == shell_always_quoting_style) {
                                  puVar24 = (undefined *)0xbbfd043b;
                                }
                              }
                              else if (iVar19 == -0xe407432) {
                                local_635 = ((local_742 ^ 0xfe) & local_742) != 0;
                                uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                                uVar22 = 0x4a4d6bfa;
                                if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                  uVar22 = 0xd76bead3;
                                }
                                uVar1 = uVar22;
                                if (uVar18 == 0xffffffff) {
                                  uVar1 = 0xd76bead3;
                                }
                                if (9 < y_32) {
                                  uVar1 = uVar22;
                                }
                                puVar24 = (undefined *)(ulong)uVar1;
                              }
                            }
                            else if (iVar19 == -0xd6e75be) {
                              puVar24 = (undefined *)0x7d5dfac9;
                              if (local_6b9 != '\0') {
                                puVar24 = (undefined *)0x2ea1cc92;
                              }
                            }
                            else if ((iVar19 == -0xc7887ac) &&
                                    (puVar24 = (undefined *)0xd0f74826, local_674 < 0x27)) {
                              puVar24 = (undefined *)0x2ea4b4af;
                            }
                          }
                          else if (iVar19 < -0xba8c4e6) {
                            if (iVar19 == -0xc6c9c77) {
                              uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                              uVar22 = 0x6d8d4b69;
                              if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                uVar22 = 0xba232e25;
                              }
                              uVar1 = uVar22;
                              if (uVar18 == 0xffffffff) {
                                uVar1 = 0xba232e25;
                              }
                              if (9 < y_32) {
                                uVar1 = uVar22;
                              }
                              puVar24 = (undefined *)(ulong)uVar1;
                            }
                            else if ((iVar19 == -0xbfce719) &&
                                    (puVar24 = (undefined *)0x99c3d827, local_488 < local_730)) {
                              puVar24 = (undefined *)0x8db5617e;
                            }
                          }
                          else if (iVar19 == -0xba8c4e6) {
                            local_6c2 = 1;
                            puVar24 = (undefined *)0x5a0c6bc4;
                          }
                          else if (iVar19 == -0xb8259d3) {
                            bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                            puVar24 = (undefined *)0x4eece0;
                            if (bVar25) {
                              puVar24 = (undefined *)0xe932044e;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)0x4eece0;
                            }
                            local_468 = local_168;
                            local_633 = local_6a8;
                            local_632 = (byte)local_170;
                            local_631 = (byte)local_198;
                            local_702 = local_6a7;
                            local_88 = local_160;
                            local_6de = (byte)local_190;
                            local_120 = local_188;
                            local_118 = local_180;
                            local_80 = local_178;
                            local_460 = local_150;
                            local_458 = local_158;
                            local_6d0 = local_42c;
                            if (y_32 < 10 != bVar25) {
                              puVar24 = (undefined *)0xe932044e;
                            }
                          }
                          else if (iVar19 == -0xb764102) {
                            bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                            puVar24 = (undefined *)0xd9461648;
                            if (bVar25) {
                              puVar24 = (undefined *)0xa017fab5;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)0xd9461648;
                            }
                            if (y_32 < 10 != bVar25) {
                              puVar24 = (undefined *)0xa017fab5;
                            }
                          }
                        }
                        else if (iVar19 < -0x34fb4f3) {
                          if (iVar19 < -0x7f0199e) {
                            if (iVar19 < -0x9d4bbf7) {
                              if (iVar19 < -0xa489034) {
                                if (iVar19 == -0xb5c714b) {
                                  puVar24 = (undefined *)0x35f93fcf;
                                }
                                else if (iVar19 == -0xb09f5e6) {
                                  uVar18 = (x_31 + -1) * x_31;
                                  uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                  uVar22 = 0x87247107;
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    uVar22 = 0xf2918a42;
                                  }
                                  puVar24 = (undefined *)(ulong)uVar22;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0xf2918a42;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)(ulong)uVar22;
                                  }
                                }
                              }
                              else if (iVar19 == -0xa489034) {
                                uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                                puVar24 = (undefined *)0x588a7749;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0x9013d1b8;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)0x588a7749;
                                }
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  puVar24 = (undefined *)0x9013d1b8;
                                }
                              }
                              else if ((iVar19 == -0x9d63de6) &&
                                      (puVar24 = (undefined *)0xa006a680, local_564 < 0xf)) {
                                puVar24 = (undefined *)0x27b0e6a0;
                              }
                            }
                            else if (iVar19 < -0x90d5324) {
                              if (iVar19 == -0x9d4bbf7) {
                                local_5d4 = local_6d0;
                                local_4e8 = local_458;
                                local_4f0 = local_460;
                                local_518 = local_118;
                                local_71f = 1;
                                local_510 = local_120;
                                local_520 = (undefined *)0x0;
                                puVar24 = (undefined *)0xbce22603;
                                bVar12 = 0;
                              }
                              else if (iVar19 == -0x955fba8) {
                                local_658 = local_5b0 < local_730;
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                puVar24 = (undefined *)0x2c436e6;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0x9a5b5d54;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)0x2c436e6;
                                }
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  puVar24 = (undefined *)0x9a5b5d54;
                                }
                              }
                            }
                            else if (iVar19 == -0x90d5324) {
                              local_4c0 = local_4b0 + (long)local_490;
                              local_5e0 = 0;
                              puVar24 = (undefined *)0x718a964e;
                              bVar10 = bVar11;
                            }
                            else if (iVar19 == -0x8fb896b) {
                              uVar18 = (x_31 + -1) * x_31;
                              uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                              puVar24 = (undefined *)0xfe601b6a;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0xc15e8dcc;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)0xfe601b6a;
                              }
                              if (y_32 < 10 != (uVar18 == 0)) {
                                puVar24 = (undefined *)0xc15e8dcc;
                              }
                            }
                          }
                          else if (iVar19 < -0x51a40f1) {
                            if (iVar19 < -0x58ac059) {
                              if (iVar19 == -0x7f0199e) {
                                local_288 = local_98;
                                local_298 = local_90;
                                puVar24 = (undefined *)0x4907bff3;
                              }
                              else if (iVar19 == -0x5d2ca62) {
                                local_558 = local_480 + 1;
                                puVar24 = (undefined *)0x4c8f7fc6;
                                if (local_558 < local_368) {
                                  puVar24 = (undefined *)0xbd33038b;
                                }
                              }
                            }
                            else if (iVar19 == -0x58ac059) {
                              puVar24 = (undefined *)0xe2c581f4;
                            }
                            else if (iVar19 == -0x538dfa8) {
                              puVar24 = (undefined *)0xd03f7463;
                            }
                          }
                          else if (iVar19 < -0x3e36d7d) {
                            if (iVar19 == -0x51a40f1) {
                              local_600 = local_710;
                              local_608 = local_718;
                              local_610 = local_6d8;
                              local_618 = local_6f8;
                              local_739 = local_744;
                              local_73a = local_743;
                              local_73b = local_73c;
                              local_6b0 = 0x10;
                              local_620 = local_730;
                              puVar24 = (undefined *)0xfc047c01;
                            }
                            else if (iVar19 == -0x3fb83ff) {
                              local_d0 = local_620;
                              local_564 = local_6b0;
                              local_623 = local_73b;
                              local_622 = local_73a;
                              local_621 = local_739;
                              local_c8 = local_618;
                              local_58 = local_610;
                              local_50 = local_608;
                              local_48 = local_600;
                              puVar24 = (undefined *)0xf629c21a;
                            }
                          }
                          else if (iVar19 == -0x3e36d7d) {
                            local_2c0 = local_490;
                            puVar24 = (undefined *)0x84ecec6;
                          }
                          else if (iVar19 == -0x3937eb2) {
                            puVar24 = (undefined *)0x5bbf59fc;
                            if ((int)local_738 < 0x7d) {
                              puVar24 = (undefined *)0xad922186;
                            }
                          }
                          else if (iVar19 == -0x3849e36) {
                            local_652 = ~(local_6f8 == (undefined *)0x1 ||
                                         local_710 == (undefined *)0x0) & 1U |
                                        (local_6f8 == (undefined *)0x1) !=
                                        (local_710 == (undefined *)0x0);
                            bVar25 = (~(~-x_31 * x_31) | 0xfffffffeU) == 0xffffffff;
                            puVar24 = (undefined *)0x242cefe0;
                            if (bVar25) {
                              puVar24 = (undefined *)0xea242090;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)0x242cefe0;
                            }
                            if (y_32 < 10 != bVar25) {
                              puVar24 = (undefined *)0xea242090;
                            }
                          }
                        }
                        else if (iVar19 < -0x2b33c5) {
                          if (iVar19 < -0x19fe496) {
                            if (iVar19 < -0x2169e40) {
                              if (iVar19 == -0x34fb4f3) {
                                uVar18 = ~(~-x_31 * x_31) | 0xfffffffe;
                                uVar22 = 0xe2d7d137;
                                if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                  uVar22 = 0x84d9d9b;
                                }
                                uVar1 = uVar22;
                                if (uVar18 == 0xffffffff) {
                                  uVar1 = 0x84d9d9b;
                                }
                                if (9 < y_32) {
                                  uVar1 = uVar22;
                                }
                                puVar24 = (undefined *)(ulong)uVar1;
                              }
                              else if (iVar19 == -0x331aec5) {
                                puVar24 = (undefined *)0xa4de526f;
                              }
                            }
                            else if (iVar19 == -0x2169e40) {
                              local_2a8 = local_488;
                              local_6ba = local_6db;
                              local_6bb = local_698;
                              local_6bc = local_699;
                              local_52c = 0x2c;
                              local_6bf = local_6dc;
                              puVar24 = (undefined *)0xc2c487cd;
                            }
                            else if (iVar19 == -0x1de7783) {
                              buffer[(long)local_230] = '\'';
                              puVar24 = (undefined *)0x123b74cc;
                            }
                          }
                          else if (iVar19 < -0x11c5df1) {
                            if (iVar19 == -0x19fe496) {
                              puVar24 = (undefined *)0xc15e8dcc;
                            }
                            else if (iVar19 == -0x13cdbc4) {
                              buffer[(long)local_270] = '0';
                              puVar24 = (undefined *)0x488e9f11;
                            }
                          }
                          else if (iVar19 == -0x11c5df1) {
                            puVar24 = (undefined *)0xa2479082;
                            if (local_674 < 0x3c) {
                              puVar24 = (undefined *)0xb51aa1e0;
                            }
                          }
                          else if (iVar19 == -0xd6352a) {
                            local_71e = 0x6e;
                            puVar24 = (undefined *)0x99e104ec;
                          }
                          else if (iVar19 == -0x7420d8) {
                            puVar24 = (undefined *)0x854f827b;
                          }
                        }
                        else if (iVar19 < 0xedc93d) {
                          if (iVar19 < 0x4eece0) {
                            if (iVar19 == -0x2b33c5) {
                              local_530 = local_56c;
                              puVar24 = (undefined *)0x2239dda2;
                            }
                            else if (iVar19 == -0x4b734) {
                              uVar18 = (x_31 + -1) * x_31;
                              uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                              uVar22 = 0x937d3aa9;
                              if (y_32 < 10 != (uVar18 == 0)) {
                                uVar22 = 0x44c60ebb;
                              }
                              puVar24 = (undefined *)(ulong)uVar22;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0x44c60ebb;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)(ulong)uVar22;
                              }
                            }
                          }
                          else if (iVar19 == 0x4eece0) {
                            puVar24 = (undefined *)0xe932044e;
                          }
                          else if (iVar19 == 0xd85bd8) {
                            puVar24 = (undefined *)0x41a64a7c;
                          }
                        }
                        else if (iVar19 < 0x188444b) {
                          if (iVar19 == 0xedc93d) {
                            buffer[(long)local_390] = '\'';
                            uVar18 = (x_31 + -1) * x_31;
                            uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                            uVar22 = 0xd0a0c908;
                            if (y_32 < 10 != (uVar18 == 0)) {
                              uVar22 = 0xb503f324;
                            }
                            puVar24 = (undefined *)(ulong)uVar22;
                            if (uVar18 == 0) {
                              puVar24 = (undefined *)0xb503f324;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)(ulong)uVar22;
                            }
                          }
                          else if (iVar19 == 0x11d40d5) {
                            bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                            puVar24 = (undefined *)0xc06cebc3;
                            if (bVar25) {
                              puVar24 = (undefined *)0xb6f0d4c4;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)0xc06cebc3;
                            }
                            if (y_32 < 10 != bVar25) {
                              puVar24 = (undefined *)0xb6f0d4c4;
                            }
                          }
                        }
                        else if (iVar19 == 0x188444b) {
                          puVar24 = (undefined *)0x35bf9726;
                        }
                        else if (iVar19 == 0x1afdfff) {
                          puVar24 = (undefined *)0x769e6740;
                          if (local_650 != '\0') {
                            puVar24 = (undefined *)0x34932270;
                          }
                        }
                        else if (iVar19 == 0x1bc8327) {
                          local_659 = local_524 < 0x3a;
                          uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                          uVar22 = 0x3e57c131;
                          if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                            uVar22 = 0x56b5c23f;
                          }
                          uVar1 = uVar22;
                          if (uVar18 == 0xffffffff) {
                            uVar1 = 0x56b5c23f;
                          }
                          if (9 < y_32) {
                            uVar1 = uVar22;
                          }
                          puVar24 = (undefined *)(ulong)uVar1;
                        }
                      }
                      if (0x3f943255 < iVar19) break;
                      if (iVar19 < 0x21476488) {
                        if (iVar19 < 0x12f3fb19) {
                          if (iVar19 < 0x84d9d9b) {
                            if (iVar19 < 0x3f6bc39) {
                              if (iVar19 < 0x358e05d) {
                                if (iVar19 < 0x2c436e6) {
                                  if (iVar19 == 0x1c79e0a) {
                                    local_6b8 = local_6c4;
                                    puVar24 = (undefined *)0x72b18ba;
                                    if (((local_6c4 ^ 0xfe) & local_6c4) != 0) {
                                      puVar24 = (undefined *)0xbfce0403;
                                    }
                                    local_6e9 = local_6c4;
                                    local_6ed = local_6c9;
                                  }
                                  else if ((iVar19 == 0x291f31e) &&
                                          (puVar24 = (undefined *)0x8308565b, (int)local_738 < 0xb))
                                  {
                                    puVar24 = (undefined *)0x3d7ac913;
                                  }
                                }
                                else if (iVar19 == 0x2c436e6) {
                                  puVar24 = (undefined *)0xf6aa0458;
                                }
                                else if (iVar19 == 0x30e4c46) {
                                  iVar19 = iswprint(local_1a0);
                                  puVar24 = (undefined *)0x11d40d5;
                                  bVar11 = local_6b6;
                                  if (iVar19 != 0) {
                                    puVar24 = (undefined *)0xf6f2acdc;
                                  }
                                }
                              }
                              else if (iVar19 < 0x36b7741) {
                                if (iVar19 == 0x358e05d) {
                                  puVar24 = (undefined *)0xf6f2acdc;
                                  bVar11 = 0;
                                }
                                else if (iVar19 == 0x3604764) {
                                  local_4c0 = local_490;
                                  local_5e0 = 0x34;
                                  puVar24 = (undefined *)0x718a964e;
                                  bVar10 = local_6b6;
                                }
                              }
                              else if (iVar19 == 0x36b7741) {
                                buffer[(long)local_718] = '\'';
                                puVar24 = (undefined *)0xdb2e6465;
                              }
                              else if ((iVar19 == 0x3d81ec5) &&
                                      (puVar24 = (undefined *)0xbdf24246, (int)local_6d0 < 8)) {
                                puVar24 = (undefined *)0x4abf0362;
                              }
                            }
                            else if (iVar19 < 0x4bb9205) {
                              if (iVar19 < 0x41ebdd8) {
                                if (iVar19 == 0x3f6bc39) {
                                  puVar24 = (undefined *)0x33771324;
                                  if (local_738 == 0) {
                                    puVar24 = (undefined *)0xa8f3007c;
                                  }
                                }
                                else if (iVar19 == 0x40e3265) {
                                  local_3c8 = local_5f0 + 1;
                                  local_6e8 = local_719;
                                  local_6e6 = local_720;
                                  local_6ec = local_6b5;
                                  puVar24 = (undefined *)0x14c48a52;
                                  bVar14 = 0;
                                }
                              }
                              else if (iVar19 == 0x41ebdd8) {
                                puVar24 = (undefined *)0x5560227f;
                                if ((int)local_738 < 0x3f) {
                                  puVar24 = (undefined *)0x6c16832d;
                                }
                                bVar17 = 0;
                              }
                              else if (iVar19 == 0x4b3ab74) {
                                local_600 = local_710;
                                local_608 = local_718;
                                local_610 = local_6d8;
                                local_618 = local_6f8;
                                local_739 = local_744;
                                local_73a = local_743;
                                local_73b = local_73c;
                                local_6b0 = 0x10;
                                local_620 = local_730;
                                puVar24 = (undefined *)0xfc047c01;
                              }
                            }
                            else if (iVar19 < 0x5a0d48b) {
                              if (iVar19 == 0x4bb9205) {
                                bVar25 = (~(~-x_31 * x_31) | 0xfffffffeU) == 0xffffffff;
                                puVar24 = (undefined *)0x52189ca8;
                                if (bVar25) {
                                  puVar24 = (undefined *)0x14e6b6a7;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)0x52189ca8;
                                }
                                if (y_32 < 10 != bVar25) {
                                  puVar24 = (undefined *)0x14e6b6a7;
                                }
                              }
                              else if (iVar19 == 0x4f33571) {
                                puVar24 = (undefined *)0x904950ef;
                                if (local_568 == 0) {
                                  puVar24 = (undefined *)0x8c24a5da;
                                }
                                local_680 = local_1f0;
                                local_688 = local_6d8;
                                local_690 = local_200;
                                local_73f = local_743;
                                local_73d = local_695;
                                local_73e = local_62b;
                                unaff_RBP = local_730;
                                unaff_R15 = local_1f8;
                                unaff_R13B = local_697;
                                unaff_R14B = local_696;
                                bVar2 = local_6b4;
                              }
                            }
                            else if (iVar19 == 0x5a0d48b) {
                              uVar18 = ~(~-x_31 * x_31) | 0xfffffffe;
                              uVar22 = 0x96d0c29;
                              if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                uVar22 = 0x74f15e6e;
                              }
                              uVar1 = uVar22;
                              if (uVar18 == 0xffffffff) {
                                uVar1 = 0x74f15e6e;
                              }
                              if (9 < y_32) {
                                uVar1 = uVar22;
                              }
                              puVar24 = (undefined *)(ulong)uVar1;
                            }
                            else if (iVar19 == 0x72b18ba) {
                              local_6ed = 1;
                              local_6e9 = local_6b8;
                              puVar24 = (undefined *)0xbfce0403;
                            }
                            else if (iVar19 == 0x827152f) {
                              local_6a0 = local_6fc == shell_always_quoting_style;
                              local_63a = ~((bool)local_6a0 != (local_718 == (undefined *)0x0)) &
                                          local_718 == (undefined *)0x0;
                              uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                              uVar22 = 0x85ab3af3;
                              if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                uVar22 = 0xe7eb55e8;
                              }
                              uVar1 = uVar22;
                              if (uVar18 == 0xffffffff) {
                                uVar1 = 0xe7eb55e8;
                              }
                              if (9 < y_32) {
                                uVar1 = uVar22;
                              }
                              puVar24 = (undefined *)(ulong)uVar1;
                            }
                          }
                          else if (iVar19 < 0xe3a5abb) {
                            if (iVar19 < 0xc450dd3) {
                              if (iVar19 < 0x90a751c) {
                                if (iVar19 == 0x84d9d9b) {
                                  uVar18 = (x_31 + -1) * x_31;
                                  uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                  puVar24 = (undefined *)0xe2d7d137;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0x22dbccd9;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)0xe2d7d137;
                                  }
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    puVar24 = (undefined *)0x22dbccd9;
                                  }
                                }
                                else if (iVar19 == 0x84ecec6) {
                                  local_208 = local_2c0;
                                  local_130 = (undefined *)-(-(long)local_2c0 - (long)local_710);
                                  puVar24 = (undefined *)0x343bc9c0;
                                  if (local_130 < local_450) {
                                    puVar24 = (undefined *)0x13b677a8;
                                  }
                                }
                              }
                              else if (iVar19 == 0x90a751c) {
                                puVar24 = (undefined *)0xb7473953;
                                if ((int)local_6d0 < 4) {
                                  puVar24 = (undefined *)0xd0a893c5;
                                }
                              }
                              else if (iVar19 == 0x96d0c29) {
                                puVar24 = (undefined *)0x5a0d48b;
                              }
                            }
                            else if (iVar19 < 0xd95f3fb) {
                              if (iVar19 == 0xc450dd3) {
                                local_63d = (byte)(~local_6d9 | 0xfe) != 0xff;
                                uVar18 = ~(~-x_31 * x_31) | 0xfffffffe;
                                uVar22 = 0x15c13be2;
                                if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                  uVar22 = 0x3049bebf;
                                }
                                uVar1 = uVar22;
                                if (uVar18 == 0xffffffff) {
                                  uVar1 = 0x3049bebf;
                                }
                                if (9 < y_32) {
                                  uVar1 = uVar22;
                                }
                                puVar24 = (undefined *)(ulong)uVar1;
                              }
                              else if (iVar19 == 0xd70e8cd) {
                                local_42c = local_6fc;
                                local_158 = local_210;
                                local_150 = local_218;
                                local_178 = local_6d8;
                                local_180 = local_4a0;
                                local_188 = local_4a8;
                                local_190 = (ulong)local_4a8 & 0xffffffffffffff00 | (ulong)local_6b7
                                ;
                                local_160 = local_5a0;
                                local_6a7 = local_742;
                                local_198 = (ulong)local_744;
                                local_170 = (ulong)local_743;
                                local_6a8 = local_73c;
                                local_168 = local_6d8;
                                puVar24 = (undefined *)0xf47da62d;
                              }
                            }
                            else if (iVar19 == 0xd95f3fb) {
                              puVar24 = (undefined *)0x8c9e3ac8;
                              if (local_6d8 != (undefined *)0x0) {
                                puVar24 = (undefined *)0x82741e22;
                              }
                              if (local_730 != (undefined *)0x0) {
                                puVar24 = (undefined *)0x8c9e3ac8;
                              }
                              if ((local_730 == (undefined *)0x0) != (local_6d8 != (undefined *)0x0)
                                 ) {
                                puVar24 = (undefined *)0x82741e22;
                              }
                              local_2d8 = local_6d8;
                              local_320 = local_730;
                            }
                            else if (iVar19 == 0xe071787) {
                              puVar24 = (undefined *)0x37af597d;
                            }
                          }
                          else if (iVar19 < 0x1152b13b) {
                            if (iVar19 < 0xf141f5f) {
                              if (iVar19 == 0xe3a5abb) {
                                local_654 = ((local_742 ^ 0xfe) & local_742) != 0;
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                puVar24 = (undefined *)0x744a9018;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0x43c9a383;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)0x744a9018;
                                }
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  puVar24 = (undefined *)0x43c9a383;
                                }
                              }
                              else if (iVar19 == 0xefd68aa) {
                                local_470 = (undefined *)
                                            quotearg_buffer_restyled
                                                      (buffer,(size_t)local_40,arg,(size_t)local_38,
                                                       local_570,local_1b4,(uint *)0x0,local_210,
                                                       local_218);
                                puVar24 = (undefined *)0xe0fa9a92;
                              }
                            }
                            else if (iVar19 == 0xf141f5f) {
                              puVar24 = (undefined *)0xd9d8a039;
                            }
                            else if ((iVar19 == 0xf672297) &&
                                    (puVar24 = (undefined *)0x19053d64, local_65a != '\0')) {
                              puVar24 = (undefined *)0xad334f92;
                            }
                          }
                          else if (iVar19 < 0x11f5c390) {
                            if (iVar19 == 0x1152b13b) {
                              uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                              puVar24 = (undefined *)0x8c7dc8fb;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0xb99c55e7;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)0x8c7dc8fb;
                              }
                              if (y_32 < 10 != (uVar18 == 0)) {
                                puVar24 = (undefined *)0xb99c55e7;
                              }
                            }
                            else if (iVar19 == 0x1152fe9f) {
                              uVar18 = (x_31 + -1) * x_31;
                              uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                              puVar24 = (undefined *)0x68bd2e82;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0xd0b839b1;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)0x68bd2e82;
                              }
                              if (y_32 < 10 != (uVar18 == 0)) {
                                puVar24 = (undefined *)0xd0b839b1;
                              }
                            }
                          }
                          else if (iVar19 == 0x11f5c390) {
                            local_340 = local_380 + 1;
                            local_2e8 = local_108 + 1;
                            puVar24 = (undefined *)0xb938e9b6;
                          }
                          else if (iVar19 == 0x123b74cc) {
                            local_3e8 = local_230 + 1;
                            local_6e7 = 1;
                            puVar24 = (undefined *)0xef5f2398;
                          }
                          else if (iVar19 == 0x12402855) {
                            puVar24 = (undefined *)0x7f671093;
                            if (local_641 != '\0') {
                              puVar24 = (undefined *)0xd78107b6;
                            }
                            local_3b8 = local_5b8;
                            local_6df = local_701;
                          }
                        }
                        else if (iVar19 < 0x1b13f9e5) {
                          if (iVar19 < 0x17fa781a) {
                            if (iVar19 < 0x15c13be2) {
                              if (iVar19 < 0x14c48a52) {
                                if (iVar19 == 0x12f3fb19) {
                                  local_653 = local_6f8 == (undefined *)0xffffffffffffffff;
                                  uVar18 = (x_31 + -1) * x_31;
                                  uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                  uVar22 = 0xc90721ad;
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    uVar22 = 0x430014e8;
                                  }
                                  puVar24 = (undefined *)(ulong)uVar22;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0x430014e8;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)(ulong)uVar22;
                                  }
                                }
                                else if ((iVar19 == 0x13b677a8) &&
                                        (puVar24 = (undefined *)0x343bc9c0,
                                        arg[(long)local_130] != '\0')) {
                                  puVar24 = (undefined *)0x29e753b5;
                                }
                              }
                              else if (iVar19 == 0x14c48a52) {
                                local_6dc = local_6ec;
                                local_698 = local_6e6;
                                local_6db = local_6e8;
                                local_488 = local_3c8;
                                uVar18 = ~(~-x_31 * x_31) | 0xfffffffe;
                                uVar22 = 0x4f1e95e9;
                                if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                  uVar22 = 0xc9b259e8;
                                }
                                uVar1 = uVar22;
                                if (uVar18 == 0xffffffff) {
                                  uVar1 = 0xc9b259e8;
                                }
                                if (9 < y_32) {
                                  uVar1 = uVar22;
                                }
                                puVar24 = (undefined *)(ulong)uVar1;
                                local_699 = bVar14;
                              }
                              else if (iVar19 == 0x14e6b6a7) {
                                buffer[(long)local_560] = local_720 >> 6 | 0x30;
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                uVar22 = 0x52189ca8;
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  uVar22 = 0xdb0e22e3;
                                }
                                puVar24 = (undefined *)(ulong)uVar22;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0xdb0e22e3;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)(ulong)uVar22;
                                }
                              }
                            }
                            else if (iVar19 < 0x168fb00f) {
                              if (iVar19 == 0x15c13be2) {
                                puVar24 = (undefined *)0xc450dd3;
                              }
                              else if (iVar19 == 0x166eec79) {
                                puVar24 = (undefined *)0x845ebdbb;
                              }
                            }
                            else if (iVar19 == 0x168fb00f) {
                              local_6f8 = local_478;
                              local_741 = arg[(long)local_710];
                              local_738 = (uint)local_741;
                              puVar24 = (undefined *)0x2a23f664;
                              local_740 = bVar16;
                            }
                            else if (iVar19 == 0x1772b798) {
                              buffer[(long)local_258] = '\"';
                              puVar24 = (undefined *)0x56424ceb;
                            }
                          }
                          else if (iVar19 < 0x19599461) {
                            if (iVar19 < 0x189b8cb2) {
                              if (iVar19 == 0x17fa781a) {
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                uVar22 = 0x4a4d6bfa;
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  uVar22 = 0xf1bf8bce;
                                }
                                puVar24 = (undefined *)(ulong)uVar22;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0xf1bf8bce;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)(ulong)uVar22;
                                }
                              }
                              else if (iVar19 == 0x186520f8) {
                                local_258 = local_260 + 1;
                                puVar24 = (undefined *)0x56424ceb;
                                if (local_258 < local_730) {
                                  puVar24 = (undefined *)0x1772b798;
                                }
                              }
                            }
                            else if (iVar19 == 0x189b8cb2) {
                              uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                              uVar22 = 0x4ac008a5;
                              if (y_32 < 10 != (uVar18 == 0)) {
                                uVar22 = 0x4c2360a1;
                              }
                              puVar24 = (undefined *)(ulong)uVar22;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0x4c2360a1;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)(ulong)uVar22;
                              }
                            }
                            else if (iVar19 == 0x19053d64) {
                              local_278 = local_3a0 + 1;
                              puVar24 = (undefined *)0x1b6d1f7c;
                              if (local_278 < local_730) {
                                puVar24 = (undefined *)0x6ac819e1;
                              }
                            }
                          }
                          else if (iVar19 < 0x1985a806) {
                            if (iVar19 == 0x19599461) {
                              local_5e0 = local_534;
                              puVar24 = (undefined *)0x718a964e;
                              if (local_534 == 0) {
                                puVar24 = (undefined *)0x30e4c46;
                              }
                              local_4c0 = local_490;
                              bVar10 = local_6b6;
                            }
                            else if (iVar19 == 0x19738bca) {
                              uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                              uVar22 = 0xd85bd8;
                              if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                uVar22 = 0x41a64a7c;
                              }
                              uVar1 = uVar22;
                              if (uVar18 == 0xffffffff) {
                                uVar1 = 0x41a64a7c;
                              }
                              if (9 < y_32) {
                                uVar1 = uVar22;
                              }
                              puVar24 = (undefined *)(ulong)uVar1;
                            }
                          }
                          else if (iVar19 == 0x1985a806) {
                            puVar24 = (undefined *)0x517301d7;
                          }
                          else if (iVar19 == 0x1aa1bd92) {
                            bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                            puVar24 = (undefined *)0x8aa96e41;
                            if (bVar25) {
                              puVar24 = (undefined *)0x5cf05290;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)0x8aa96e41;
                            }
                            if (y_32 < 10 != bVar25) {
                              puVar24 = (undefined *)0x5cf05290;
                            }
                          }
                          else if (iVar19 == 0x1afa8b6d) {
                            buffer[(long)local_5b8] = '\'';
                            puVar24 = (undefined *)0xe505cd47;
                          }
                        }
                        else if (iVar19 < 0x1e4b1911) {
                          if (iVar19 < 0x1c0f0a66) {
                            if (iVar19 < 0x1b6d1f7c) {
                              if (iVar19 == 0x1b13f9e5) {
                                local_721 = 0x62;
                                puVar24 = (undefined *)0x8c0dae31;
                              }
                              else if (iVar19 == 0x1b5b8cf5) {
                                uVar18 = (x_31 + -1) * x_31;
                                uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                uVar22 = 0x79db7108;
                                if (y_32 < 10 != (uVar18 == 0)) {
                                  uVar22 = 0xc545ec4b;
                                }
                                puVar24 = (undefined *)(ulong)uVar22;
                                if (uVar18 == 0) {
                                  puVar24 = (undefined *)0xc545ec4b;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)(ulong)uVar22;
                                }
                              }
                            }
                            else if (iVar19 == 0x1b6d1f7c) {
                              local_410 = local_278 + 1;
                              local_6eb = 1;
                              puVar24 = (undefined *)0xadf05288;
                            }
                            else if (iVar19 == 0x1bdbbe1f) {
                              local_368 = local_508;
                              local_691 = local_71b;
                              local_625 = local_71d;
                              local_6d9 = local_71c;
                              local_70 = local_4e0;
                              local_68 = local_4d8;
                              local_480 = local_4d0;
                              local_60 = local_4c8;
                              uVar18 = (x_31 + -1) * x_31;
                              uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                              uVar22 = 0x15c13be2;
                              if (y_32 < 10 != (uVar18 == 0)) {
                                uVar22 = 0xc450dd3;
                              }
                              puVar24 = (undefined *)(ulong)uVar22;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0xc450dd3;
                              }
                              local_693 = bVar7;
                              local_692 = bVar8;
                              if (9 < y_32) {
                                puVar24 = (undefined *)(ulong)uVar22;
                              }
                            }
                          }
                          else if (iVar19 < 0x1c797df4) {
                            if (iVar19 == 0x1c0f0a66) {
                              puVar24 = (undefined *)0x450db67a;
                              if ((int)local_738 < 0x5c) {
                                puVar24 = (undefined *)0xac96c107;
                              }
                            }
                            else if (iVar19 == 0x1c448620) {
                              puVar24 = (undefined *)0x776ebbec;
                            }
                          }
                          else if (iVar19 == 0x1c797df4) {
                            local_530 = 0;
                            puVar24 = (undefined *)0x2239dda2;
                          }
                          else if (iVar19 == 0x1d3202c3) {
                            puVar24 = (undefined *)0x5a0c6bc4;
                            if ((int)local_6d0 < 1) {
                              puVar24 = (undefined *)0xec128de1;
                            }
                            local_6c2 = local_6de;
                          }
                          else if (iVar19 == 0x1dd6a4d9) {
                            puVar24 = (undefined *)0x26f56da0;
                            if ((byte)(~local_6db | 0xfe) != 0xff) {
                              puVar24 = (undefined *)0xfffb48cc;
                            }
                            local_3d8 = local_488;
                            bVar3 = local_6db;
                          }
                        }
                        else if (iVar19 < 0x205ca629) {
                          if (iVar19 < 0x1f57633a) {
                            if (iVar19 == 0x1e4b1911) {
                              bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                              puVar24 = (undefined *)0xce6d1c0c;
                              if (bVar25) {
                                puVar24 = (undefined *)0x51dccb19;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)0xce6d1c0c;
                              }
                              if (y_32 < 10 != bVar25) {
                                puVar24 = (undefined *)0x51dccb19;
                              }
                            }
                            else if (iVar19 == 0x1e50de9e) {
                              local_63c = ((local_692 ^ 0xfe) & local_692) != 0;
                              uVar18 = (x_31 + -1) * x_31;
                              uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                              uVar22 = 0x685bcbd9;
                              if (y_32 < 10 != (uVar18 == 0)) {
                                uVar22 = 0xca9cf90b;
                              }
                              puVar24 = (undefined *)(ulong)uVar22;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0xca9cf90b;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)(ulong)uVar22;
                              }
                            }
                          }
                          else if (iVar19 == 0x1f57633a) {
                            iVar19 = memcmp(arg + (long)local_710,local_4a0,(size_t)local_4a8);
                            local_65d = iVar19 == 0;
                            bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                            puVar24 = (undefined *)0x72679875;
                            if (bVar25) {
                              puVar24 = (undefined *)0xdd619991;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)0x72679875;
                            }
                            if (y_32 < 10 != bVar25) {
                              puVar24 = (undefined *)0xdd619991;
                            }
                          }
                          else if (iVar19 == 0x2016e3e6) {
                            puVar24 = (undefined *)0x8d21fc49;
                          }
                        }
                        else if (iVar19 < 0x20ba029f) {
                          if (iVar19 == 0x205ca629) {
                            *buffer = '\"';
                            puVar24 = (undefined *)0x8c5bb48a;
                          }
                          else if (iVar19 == 0x20ad9820) {
                            local_280 = (mbstate_t)0x0;
                            puVar24 = (undefined *)0x3b69b7c5;
                          }
                        }
                        else if (iVar19 == 0x20ba029f) {
                          puVar24 = (undefined *)0xfc6c814e;
                          if ((int)local_738 < 0x7b) {
                            puVar24 = (undefined *)0x7fb2b8c5;
                          }
                        }
                        else if (iVar19 == 0x210997ff) {
                          local_4e8 = local_458;
                          local_4f0 = local_460;
                          local_71f = local_630;
                          local_5d4 = shell_always_quoting_style;
                          local_510 = (undefined *)0x1;
                          local_518 = "\'";
                          local_520 = local_350;
                          puVar24 = (undefined *)0xbce22603;
                          bVar12 = local_69d;
                        }
                        else if (iVar19 == 0x21424190) {
                          local_730 = local_300;
                          local_73c = local_6c8;
                          local_743 = local_6c7;
                          local_744 = local_6c6;
                          local_5a0 = local_2f0;
                          local_6d8 = local_2e0;
                          local_718 = local_338;
                          local_710 = local_330;
                          local_6a4 = local_2f0 == (undefined *)0xffffffffffffffff;
                          puVar24 = (undefined *)0xd5c8378c;
                          if ((bool)local_6a4) {
                            puVar24 = (undefined *)0x6f44b991;
                          }
                        }
                      }
                      else if (iVar19 < 0x321c8b71) {
                        if (iVar19 < 0x29e753b5) {
                          if (iVar19 < 0x2404026c) {
                            if (iVar19 < 0x22dbccd9) {
                              if (iVar19 < 0x2239dda2) {
                                if (iVar19 == 0x21476488) {
                                  puVar24 = (undefined *)0x4bfc67b3;
                                  if (local_664 == 0x5e) {
                                    puVar24 = (undefined *)0x2ffa816a;
                                  }
                                }
                                else if (iVar19 == 0x215dcaa8) {
                                  uVar18 = (x_31 + -1) * x_31;
                                  uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                                  uVar22 = 0x5f151cc0;
                                  if (y_32 < 10 != (uVar18 == 0)) {
                                    uVar22 = 0xbf09e2ab;
                                  }
                                  puVar24 = (undefined *)(ulong)uVar22;
                                  if (uVar18 == 0) {
                                    puVar24 = (undefined *)0xbf09e2ab;
                                  }
                                  if (9 < y_32) {
                                    puVar24 = (undefined *)(ulong)uVar22;
                                  }
                                }
                              }
                              else if (iVar19 == 0x2239dda2) {
                                puVar24 = (undefined *)0xc6411054;
                                if (local_530 == 0) {
                                  puVar24 = (undefined *)0x372a8493;
                                }
                                local_6e3 = local_741;
                                local_2c8 = local_450;
                                local_310 = local_100;
                                local_6c0 = local_69a;
                                local_3c0 = local_710;
                                local_420 = local_718;
                                local_3d0 = local_450;
                                local_6e4 = local_744;
                                local_6e5 = local_740;
                                local_588 = local_530;
                                bVar13 = 0;
                                bVar4 = 0;
                              }
                              else if (iVar19 == 0x2272a057) {
                                puVar24 = (undefined *)0xa8aa827e;
                              }
                            }
                            else if (iVar19 < 0x237828c0) {
                              if (iVar19 == 0x22dbccd9) {
                                bVar16 = 1;
                                local_478 = local_378;
                                puVar24 = (undefined *)0x168fb00f;
                              }
                              else if ((iVar19 == 0x23258f82) &&
                                      (puVar24 = (undefined *)0x9b2e8bdd,
                                      local_4b0 == (undefined *)0xfffffffffffffffe)) {
                                puVar24 = (undefined *)0xfc1c9283;
                              }
                            }
                            else if (iVar19 == 0x237828c0) {
                              local_6c0 = local_64f;
                              local_2c8 = local_6f8;
                              local_310 = (undefined *)0x1;
                              puVar24 = (undefined *)0x372a8493;
                            }
                            else if (iVar19 == 0x237f6b20) {
                              bVar25 = (~(~-x_31 * x_31) | 0xfffffffeU) == 0xffffffff;
                              puVar24 = (undefined *)0x83bf188e;
                              if (bVar25) {
                                puVar24 = (undefined *)0x7ab5ed0c;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)0x83bf188e;
                              }
                              if (y_32 < 10 != bVar25) {
                                puVar24 = (undefined *)0x7ab5ed0c;
                              }
                            }
                          }
                          else if (iVar19 < 0x254b4437) {
                            if (iVar19 < 0x247907a4) {
                              if (iVar19 == 0x2404026c) {
                                bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                                puVar24 = (undefined *)0xd0a0c908;
                                if (bVar25) {
                                  puVar24 = (undefined *)0xedc93d;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)0xd0a0c908;
                                }
                                if (y_32 < 10 != bVar25) {
                                  puVar24 = (undefined *)0xedc93d;
                                }
                              }
                              else if (iVar19 == 0x242cefe0) {
                                puVar24 = (undefined *)0xfc7b61ca;
                              }
                            }
                            else if (iVar19 == 0x247907a4) {
                              local_65e = local_710 == local_5a0;
                              uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                              uVar22 = 0x76e66f88;
                              if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                                uVar22 = 0xa291b1f2;
                              }
                              uVar1 = uVar22;
                              if (uVar18 == 0xffffffff) {
                                uVar1 = 0xa291b1f2;
                              }
                              if (9 < y_32) {
                                uVar1 = uVar22;
                              }
                              puVar24 = (undefined *)(ulong)uVar1;
                            }
                            else if (iVar19 == 0x24b142c5) {
                              puVar24 = (undefined *)0x86c00ce5;
                            }
                          }
                          else if (iVar19 < 0x27b0e6a0) {
                            if (iVar19 == 0x254b4437) {
                              buffer[(long)local_3a0] = '$';
                              puVar24 = (undefined *)0xa05e7ea0;
                            }
                            else if (iVar19 == 0x26f56da0) {
                              local_550 = local_3d8;
                              puVar24 = (undefined *)0xbfe9c25a;
                              local_62c = bVar3;
                              if (local_3d8 < local_730) {
                                puVar24 = (undefined *)0x99d99f42;
                              }
                            }
                          }
                          else if (iVar19 == 0x27b0e6a0) {
                            puVar24 = (undefined *)0x35df7d5b;
                            if (local_564 == 0) {
                              puVar24 = (undefined *)0x5c0a0c03;
                            }
                          }
                          else if (iVar19 == 0x28151f7c) {
                            uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                            uVar22 = 0x9a5f25dc;
                            if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                              uVar22 = 0xe2f70d41;
                            }
                            uVar1 = uVar22;
                            if (uVar18 == 0xffffffff) {
                              uVar1 = 0xe2f70d41;
                            }
                            if (9 < y_32) {
                              uVar1 = uVar22;
                            }
                            puVar24 = (undefined *)(ulong)uVar1;
                          }
                          else if (iVar19 == 0x2991b969) {
                            puVar24 = (undefined *)0xd78107b6;
                            if (local_6fc == shell_always_quoting_style) {
                              puVar24 = (undefined *)0x1152b13b;
                            }
                            local_3b8 = local_5b8;
                            local_6df = local_701;
                          }
                        }
                        else if (iVar19 < 0x2ea4b4af) {
                          if (iVar19 < 0x2daf1d96) {
                            if (iVar19 < 0x2c4fc4b1) {
                              if (iVar19 == 0x29e753b5) {
                                local_2c0 = local_208 + 1;
                                puVar24 = (undefined *)0x84ecec6;
                              }
                              else if ((iVar19 == 0x2a23f664) &&
                                      (puVar24 = (undefined *)0x69b721b1, (int)local_738 < 0x28)) {
                                puVar24 = (undefined *)0x3305a3e8;
                              }
                            }
                            else if (iVar19 == 0x2c4fc4b1) {
                              local_71e = 0x72;
                              puVar24 = (undefined *)0x99e104ec;
                            }
                            else if ((iVar19 == 0x2cead78a) &&
                                    (puVar24 = (undefined *)0x6ac8cb42, local_674 == 0x2d)) {
                              puVar24 = (undefined *)0x8d221414;
                            }
                          }
                          else if (iVar19 < 0x2e58c625) {
                            if (iVar19 == 0x2daf1d96) {
                              puVar24 = (undefined *)0xb50dadaa;
                              if (local_710 != (undefined *)0x0) {
                                puVar24 = (undefined *)0x8c24a5da;
                              }
                              if (arg[1] == '\0') {
                                puVar24 = (undefined *)0xb50dadaa;
                              }
                              if ((arg[1] != '\0') != (local_710 != (undefined *)0x0)) {
                                puVar24 = (undefined *)0x8c24a5da;
                              }
                              local_73d = local_741;
                              local_680 = local_710;
                              local_688 = local_6d8;
                              local_690 = local_6f8;
                              local_73f = local_743;
                              local_73e = local_740;
                              unaff_R14B = 0;
                              unaff_RBP = local_730;
                              unaff_R15 = local_718;
                              unaff_R13B = 0;
                              bVar2 = local_744;
                            }
                            else if (iVar19 == 0x2e34a855) {
                              uVar18 = (x_31 + -1) * x_31;
                              uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                              uVar22 = 0x4f015bee;
                              if (y_32 < 10 != (uVar18 == 0)) {
                                uVar22 = 0xcd00382f;
                              }
                              puVar24 = (undefined *)(ulong)uVar22;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0xcd00382f;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)(ulong)uVar22;
                              }
                            }
                          }
                          else if (iVar19 == 0x2e58c625) {
                            buffer[(long)local_260] = '\"';
                            puVar24 = (undefined *)0x186520f8;
                          }
                          else if (iVar19 == 0x2e8b27f4) {
                            buffer[(long)local_718] = '?';
                            puVar24 = (undefined *)0xdf39561e;
                          }
                          else if (iVar19 == 0x2ea1cc92) {
                            puVar24 = (undefined *)0x14c48a52;
                            if (((local_6dd ^ 0xfe) & local_6dd) != 0) {
                              puVar24 = (undefined *)0x4d7cac31;
                            }
                            local_3c8 = local_5f0;
                            local_6e8 = local_719;
                            local_6e6 = local_720;
                            local_6ec = local_6b5;
                            bVar14 = local_6dd;
                          }
                        }
                        else if (iVar19 < 0x2ffa816a) {
                          if (iVar19 < 0x2fc4f9bf) {
                            if (iVar19 == 0x2ea4b4af) {
                              puVar24 = (undefined *)0x6ac8cb42;
                              if (local_674 == 0x21) {
                                puVar24 = (undefined *)0x8d221414;
                              }
                            }
                            else if (iVar19 == 0x2ed29363) {
                              local_510 = (undefined *)strlen(local_220);
                              local_5d4 = local_6d0;
                              local_4e8 = local_110;
                              local_4f0 = local_220;
                              local_518 = local_220;
                              local_71f = 1;
                              local_520 = local_348;
                              puVar24 = (undefined *)0xbce22603;
                              bVar12 = local_702;
                            }
                          }
                          else if (iVar19 == 0x2fc4f9bf) {
                            uVar18 = (x_31 + -1) * x_31;
                            uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                            puVar24 = (undefined *)0x987bad63;
                            if (uVar18 == 0) {
                              puVar24 = (undefined *)0x4f82916d;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)0x987bad63;
                            }
                            if (y_32 < 10 != (uVar18 == 0)) {
                              puVar24 = (undefined *)0x4f82916d;
                            }
                          }
                          else if (iVar19 == 0x2fd2fe70) {
                            local_6dd = local_6c3;
                            local_720 = local_6bd;
                            local_719 = local_6c1;
                            local_5f0 = local_2b8;
                            local_448 = local_2b0;
                            puVar24 = (undefined *)0x2ea1cc92;
                            local_6b5 = bVar9;
                            if (local_71a != '\0') {
                              puVar24 = (undefined *)0x5928f61e;
                            }
                          }
                        }
                        else if (iVar19 < 0x310fd56f) {
                          if (iVar19 == 0x2ffa816a) {
                            bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                            puVar24 = (undefined *)0x188444b;
                            if (bVar25) {
                              puVar24 = (undefined *)0x35bf9726;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)0x188444b;
                            }
                            if (y_32 < 10 != bVar25) {
                              puVar24 = (undefined *)0x35bf9726;
                            }
                          }
                          else if (iVar19 == 0x3049bebf) {
                            puVar24 = (undefined *)0xf0414557;
                            if (local_63d != '\0') {
                              puVar24 = (undefined *)0xb1f1cc67;
                            }
                            local_3b0 = local_480;
                            bVar5 = local_6d9;
                          }
                        }
                        else if (iVar19 == 0x310fd56f) {
                          local_3b0 = local_a8;
                          puVar24 = (undefined *)0xf0414557;
                          bVar5 = 0;
                        }
                        else if (iVar19 == 0x3191bb07) {
                          puVar24 = (undefined *)0xeb7760c8;
                          if ((local_6be & 1) != 0) {
                            puVar24 = (undefined *)0xc40518d4;
                          }
                        }
                        else if (iVar19 == 0x31fbbca6) {
                          local_318 = (undefined *)0x1;
                          puVar24 = (undefined *)0x64b0ec15;
                        }
                      }
                      else if (iVar19 < 0x3744cf8b) {
                        if (iVar19 < 0x345eb3fe) {
                          if (iVar19 < 0x3305a3e8) {
                            if (iVar19 < 0x32ccdb67) {
                              if (iVar19 == 0x321c8b71) {
                                local_40 = local_2a0;
                                local_38 = local_290;
                                puVar24 = (undefined *)0xefd68aa;
                                if (local_6fc == shell_always_quoting_style) {
                                  puVar24 = (undefined *)0xd48c0abe;
                                }
                                local_570 = local_6fc;
                              }
                              else if (iVar19 == 0x328792a5) {
                                bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                                puVar24 = (undefined *)0xe93955bd;
                                if (bVar25) {
                                  puVar24 = (undefined *)0xec168e7e;
                                }
                                if (9 < y_32) {
                                  puVar24 = (undefined *)0xe93955bd;
                                }
                                if (y_32 < 10 != bVar25) {
                                  puVar24 = (undefined *)0xec168e7e;
                                }
                              }
                            }
                            else if (iVar19 == 0x32ccdb67) {
                              buffer[(long)local_5d0] = '\\';
                              puVar24 = (undefined *)0x328792a5;
                            }
                            else if ((iVar19 == 0x32e7a8e9) &&
                                    (puVar24 = (undefined *)0x921578f4,
                                    (byte)(~local_742 | 0xfe) != 0xff)) {
                              puVar24 = (undefined *)0x2e34a855;
                            }
                          }
                          else if (iVar19 < 0x34266f98) {
                            if (iVar19 == 0x3305a3e8) {
                              puVar24 = (undefined *)0x6e96e097;
                              if ((int)local_738 < 0xd) {
                                puVar24 = (undefined *)0x6db0c13b;
                              }
                            }
                            else if (iVar19 == 0x33771324) {
                              puVar24 = (undefined *)0x2fc4f9bf;
                            }
                          }
                          else if (iVar19 == 0x34266f98) {
                            puVar24 = (undefined *)0x30e4c46;
                            if (local_64c != '\0') {
                              puVar24 = (undefined *)0x31fbbca6;
                            }
                          }
                          else if (iVar19 == 0x343bc9c0) {
                            local_5e0 = 0x34;
                            local_4c0 = local_208;
                            puVar24 = (undefined *)0x718a964e;
                            bVar10 = 0;
                          }
                        }
                        else if (iVar19 < 0x35f93fcf) {
                          if (iVar19 < 0x35bf9726) {
                            if (iVar19 == 0x345eb3fe) {
                              uVar18 = (x_31 + -1) * x_31;
                              uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                              uVar22 = 0xff8bdf28;
                              if (y_32 < 10 != (uVar18 == 0)) {
                                uVar22 = 0x854f827b;
                              }
                              puVar24 = (undefined *)(ulong)uVar22;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0x854f827b;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)(ulong)uVar22;
                              }
                            }
                            else if (iVar19 == 0x34932270) {
                              buffer[(long)local_248] = '\'';
                              puVar24 = (undefined *)0x769e6740;
                            }
                          }
                          else if (iVar19 == 0x35bf9726) {
                            uVar18 = ~(~-x_31 * x_31) | 0xfffffffe;
                            uVar22 = 0x188444b;
                            if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                              uVar22 = 0x679fd97b;
                            }
                            uVar1 = uVar22;
                            if (uVar18 == 0xffffffff) {
                              uVar1 = 0x679fd97b;
                            }
                            if (9 < y_32) {
                              uVar1 = uVar22;
                            }
                            puVar24 = (undefined *)(ulong)uVar1;
                          }
                          else if (iVar19 == 0x35df7d5b) {
                            puVar24 = (undefined *)0xe0fa9a92;
                            local_470 = puVar23;
                          }
                        }
                        else if (iVar19 < 0x36284b83) {
                          if (iVar19 == 0x35f93fcf) {
                            local_64c = local_6fc == shell_always_quoting_style &&
                                        (byte)(~local_742 | 0xfe) != 0xff;
                            uVar18 = ~(~-x_31 * x_31) | 0xfffffffe;
                            uVar22 = 0xf4a38eb5;
                            if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                              uVar22 = 0x34266f98;
                            }
                            uVar1 = uVar22;
                            if (uVar18 == 0xffffffff) {
                              uVar1 = 0x34266f98;
                            }
                            if (9 < y_32) {
                              uVar1 = uVar22;
                            }
                            puVar24 = (undefined *)(ulong)uVar1;
                          }
                          else if (iVar19 == 0x36180665) {
                            local_378 = local_328;
                            puVar24 = (undefined *)0x168fb00f;
                            if (local_c0 <= local_2d0) {
                              puVar24 = (undefined *)0x93869501;
                            }
                            bVar16 = 0;
                            local_478 = local_328;
                          }
                        }
                        else if (iVar19 == 0x36284b83) {
                          uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                          uVar22 = 0x72ff24b8;
                          if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                            uVar22 = 0x72f1432c;
                          }
                          uVar1 = uVar22;
                          if (uVar18 == 0xffffffff) {
                            uVar1 = 0x72f1432c;
                          }
                          if (9 < y_32) {
                            uVar1 = uVar22;
                          }
                          puVar24 = (undefined *)(ulong)uVar1;
                        }
                        else if (iVar19 == 0x36f1445a) {
                          puVar24 = (undefined *)0x99e104ec;
                          if (local_71a != '\0') {
                            puVar24 = (undefined *)0x772f9d16;
                          }
                          local_71e = local_741;
                        }
                        else if (iVar19 == 0x372a8493) {
                          local_f8 = local_310;
                          local_f0 = local_2c8;
                          local_6b9 = (byte)(~local_6c0 | 0xfe) != 0xff;
                          puVar24 = (undefined *)0x852bf69e;
                          local_6a1 = local_6b9;
                          if ((undefined *)0x1 < local_310) {
                            puVar24 = (undefined *)0xa8240c7f;
                          }
                        }
                      }
                      else if (iVar19 < 0x3d5304a0) {
                        if (iVar19 < 0x3b302745) {
                          if (iVar19 < 0x3a1a9303) {
                            if (iVar19 == 0x3744cf8b) {
                              buffer[(long)local_4b8] = '\\';
                              puVar24 = (undefined *)0xf7047695;
                            }
                            else if (iVar19 == 0x37af597d) {
                              local_642 = ((local_742 ^ 0xfe) & local_742) != 0;
                              uVar18 = (x_31 + -1) * x_31;
                              uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                              uVar22 = 0xe071787;
                              if (y_32 < 10 != (uVar18 == 0)) {
                                uVar22 = 0x801589f1;
                              }
                              puVar24 = (undefined *)(ulong)uVar22;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0x801589f1;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)(ulong)uVar22;
                              }
                            }
                          }
                          else if (iVar19 == 0x3a1a9303) {
                            bVar25 = (~(~-x_31 * x_31) | 0xfffffffeU) == 0xffffffff;
                            puVar24 = (undefined *)0x242cefe0;
                            if (bVar25) {
                              puVar24 = (undefined *)0xfc7b61ca;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)0x242cefe0;
                            }
                            if (y_32 < 10 != bVar25) {
                              puVar24 = (undefined *)0xfc7b61ca;
                            }
                          }
                          else if (iVar19 == 0x3a48834c) {
                            local_328 = (undefined *)strlen(arg);
                            puVar24 = (undefined *)0x36180665;
                            local_2d0 = local_328;
                          }
                        }
                        else if (iVar19 < 0x3c7a6eac) {
                          if (iVar19 == 0x3b302745) {
                            puVar24 = (undefined *)0x8c24a5da;
                            if ((byte)(~local_742 | 0xfe) != 0xff) {
                              puVar24 = (undefined *)0x4b3ab74;
                            }
                            local_73d = local_741;
                            local_680 = local_710;
                            local_688 = local_6d8;
                            local_690 = local_6f8;
                            local_73f = local_743;
                            local_73e = local_740;
                            unaff_R14B = 0;
                            unaff_RBP = local_730;
                            unaff_R15 = local_718;
                            unaff_R13B = 0;
                            bVar2 = local_744;
                          }
                          else if (iVar19 == 0x3b69b7c5) {
                            local_240 = &local_280;
                            local_280 = (mbstate_t)0x0;
                            local_64e = local_6f8 == (undefined *)0xffffffffffffffff;
                            uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                            puVar24 = (undefined *)0x20ad9820;
                            if (uVar18 == 0) {
                              puVar24 = (undefined *)0xd5e42f14;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)0x20ad9820;
                            }
                            if (y_32 < 10 != (uVar18 == 0)) {
                              puVar24 = (undefined *)0xd5e42f14;
                            }
                          }
                        }
                        else if (iVar19 == 0x3c7a6eac) {
                          puVar24 = (undefined *)0x1bdbbe1f;
                          if ((byte)(~local_629 | 0xfe) != 0xff) {
                            puVar24 = (undefined *)0xc0e38214;
                          }
                          local_3e0 = local_1c8;
                          local_3f0 = local_1d0;
                          local_3f8 = local_1d8;
                          local_400 = local_1e0;
                          local_6e0 = local_6b1;
                          local_6e1 = local_6b2;
                          local_6e2 = local_6da;
                          local_418 = local_1e8;
                          local_4c8 = local_1c8;
                          local_4d0 = local_1d0;
                          local_4d8 = local_1d8;
                          local_4e0 = local_1e0;
                          local_71c = local_6b1;
                          local_71d = local_6b2;
                          local_71b = local_6da;
                          local_508 = local_1e8;
                          bVar6 = local_6b3;
                          bVar7 = local_6b3;
                          bVar8 = local_62a;
                        }
                        else if (iVar19 == 0x3ce7153d) {
                          puVar24 = (undefined *)0xe6eea5ff;
                          if (local_63f != '\0') {
                            puVar24 = (undefined *)0xe6c063fb;
                          }
                        }
                        else if (iVar19 == 0x3d3fd41d) {
                          puVar24 = (undefined *)0x65b5f4e9;
                          if (local_634 != '\0') {
                            puVar24 = (undefined *)0x5048d76b;
                          }
                          local_3a8 = local_438;
                        }
                      }
                      else if (iVar19 < 0x3df33049) {
                        if (iVar19 < 0x3d7ac913) {
                          puVar24 = (undefined *)(ulong)local_1a4;
                          if ((iVar19 != 0x3d5304a0) && (puVar24 = puVar23, iVar19 == 0x3d5dd622)) {
                            buffer[(long)local_438] = local_69f;
                            puVar24 = (undefined *)0x28151f7c;
                          }
                        }
                        else if (iVar19 == 0x3d7ac913) {
                          puVar24 = (undefined *)0xe79bc0fc;
                          if ((int)local_738 < 10) {
                            puVar24 = (undefined *)0x8c248cb7;
                          }
                        }
                        else if (iVar19 == 0x3da24cba) {
                          bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                          puVar24 = (undefined *)0x818fdc00;
                          if (bVar25) {
                            puVar24 = (undefined *)0xda9fc772;
                          }
                          if (9 < y_32) {
                            puVar24 = (undefined *)0x818fdc00;
                          }
                          if (y_32 < 10 != bVar25) {
                            puVar24 = (undefined *)0xda9fc772;
                          }
                        }
                      }
                      else if (iVar19 < 0x3e57c131) {
                        if (iVar19 == 0x3df33049) {
                          local_5c0 = local_5b8 + 1;
                          local_640 = local_5c0 < local_598;
                          bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                          puVar24 = (undefined *)0x3f943256;
                          if (bVar25) {
                            puVar24 = (undefined *)0x6abfbb66;
                          }
                          if (9 < y_32) {
                            puVar24 = (undefined *)0x3f943256;
                          }
                          if (y_32 < 10 != bVar25) {
                            puVar24 = (undefined *)0x6abfbb66;
                          }
                        }
                        else if (iVar19 == 0x3e183d64) {
                          unaff_R15 = local_250 + 1;
                          local_680 = local_268;
                          local_73d = local_656;
                          local_688 = local_6d8;
                          local_690 = local_6f8;
                          local_73f = local_743;
                          local_73e = local_740;
                          unaff_R14B = 0;
                          puVar24 = (undefined *)0x8c24a5da;
                          unaff_RBP = local_730;
                          unaff_R13B = 0;
                          bVar2 = local_744;
                        }
                      }
                      else if (iVar19 == 0x3e57c131) {
                        puVar24 = (undefined *)0x1bc8327;
                      }
                      else if (iVar19 == 0x3ef24c87) {
                        puVar24 = (undefined *)0xd95f3fb;
                        if (((local_742 ^ 0xfe) & local_742) != 0) {
                          puVar24 = (undefined *)0xdea3302d;
                        }
                      }
                      else if (iVar19 == 0x3f3d25b2) {
                        uVar18 = (x_31 + -1) * x_31;
                        uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                        puVar24 = (undefined *)0xfa753fa7;
                        if (uVar18 == 0) {
                          puVar24 = (undefined *)0xe2c581f4;
                        }
                        if (9 < y_32) {
                          puVar24 = (undefined *)0xfa753fa7;
                        }
                        if (y_32 < 10 != (uVar18 == 0)) {
                          puVar24 = (undefined *)0xe2c581f4;
                        }
                      }
                    }
                    if (0x5d214146 < iVar19) break;
                    if (iVar19 < 0x4d1daa78) {
                      if (iVar19 < 0x463fd648) {
                        if (iVar19 < 0x444683a5) {
                          if (iVar19 < 0x413c0437) {
                            if (iVar19 < 0x4058aea1) {
                              if (iVar19 == 0x3f943256) {
                                puVar24 = (undefined *)0x3df33049;
                              }
                              else if ((iVar19 == 0x3f977c09) &&
                                      (puVar24 = (undefined *)0x1c0f0a66, (int)local_738 < 0x41)) {
                                puVar24 = (undefined *)0xa42b64e2;
                              }
                            }
                            else if (iVar19 == 0x4058aea1) {
                              puVar24 = (undefined *)0x4bfc67b3;
                              if (local_664 == 0x60) {
                                puVar24 = (undefined *)0x2ffa816a;
                              }
                            }
                            else if (iVar19 == 0x40705f4a) {
                              puVar24 = (undefined *)0xb50dadaa;
                              if (local_710 != (undefined *)0x0) {
                                puVar24 = (undefined *)0x8c24a5da;
                              }
                              local_73d = local_741;
                              local_680 = local_710;
                              local_688 = local_6d8;
                              local_690 = local_6f8;
                              local_73f = local_743;
                              local_73e = local_740;
                              unaff_R13B = 0;
                              unaff_R14B = 0;
                              unaff_RBP = local_730;
                              unaff_R15 = local_718;
                              bVar2 = local_744;
                            }
                          }
                          else if (iVar19 < 0x430014e8) {
                            if (iVar19 == 0x413c0437) {
                              local_318 = local_b8;
                              puVar24 = (undefined *)0x64b0ec15;
                            }
                            else if (iVar19 == 0x41a64a7c) {
                              local_637 = (byte)(~local_73c | 0xfe) != 0xff;
                              bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                              puVar24 = (undefined *)0xd85bd8;
                              if (bVar25) {
                                puVar24 = (undefined *)0xb3f09f70;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)0xd85bd8;
                              }
                              if (y_32 < 10 != bVar25) {
                                puVar24 = (undefined *)0xb3f09f70;
                              }
                            }
                          }
                          else if (iVar19 == 0x430014e8) {
                            puVar24 = (undefined *)0x3a1a9303;
                            if (local_653 != '\0') {
                              puVar24 = (undefined *)0x2daf1d96;
                            }
                          }
                          else if (iVar19 == 0x43c9a383) {
                            puVar24 = (undefined *)0x8c0dae31;
                            if (local_654 != '\0') {
                              puVar24 = (undefined *)0xb5e3f2fc;
                            }
                            local_721 = local_69c;
                          }
                        }
                        else if (iVar19 < 0x450db67a) {
                          if (iVar19 < 0x44c60ebb) {
                            if (iVar19 == 0x444683a5) {
                              local_63e = local_370 < local_598;
                              uVar18 = (x_31 + -1) * x_31;
                              uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                              uVar22 = 0x61f04be7;
                              if (y_32 < 10 != (uVar18 == 0)) {
                                uVar22 = 0xdd2c4116;
                              }
                              puVar24 = (undefined *)(ulong)uVar22;
                              if (uVar18 == 0) {
                                puVar24 = (undefined *)0xdd2c4116;
                              }
                              if (9 < y_32) {
                                puVar24 = (undefined *)(ulong)uVar22;
                              }
                            }
                            else if (iVar19 == 0x44684037) {
                              local_328 = local_5a0;
                              local_2d0 = local_5a0;
                              puVar24 = (undefined *)0x36180665;
                            }
                          }
                          else if (iVar19 == 0x44c60ebb) {
                            local_645 = ((local_6dc ^ 0xfe) & local_6dc) != 0;
                            uVar18 = (x_31 + -1) * x_31;
                            uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                            puVar24 = (undefined *)0x937d3aa9;
                            if (uVar18 == 0) {
                              puVar24 = (undefined *)0x95424a00;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)0x937d3aa9;
                            }
                            if (y_32 < 10 != (uVar18 == 0)) {
                              puVar24 = (undefined *)0x95424a00;
                            }
                          }
                          else if (iVar19 == 0x44f55ca5) {
                            iVar19 = mbsinit((mbstate_t *)&local_280);
                            puVar24 = (undefined *)0x1c797df4;
                            if (iVar19 == 0) {
                              puVar24 = (undefined *)0xd656cbfc;
                            }
                            local_408 = local_450;
                            local_428 = local_100;
                            local_6ea = local_69a;
                          }
                        }
                        else if (iVar19 < 0x458068aa) {
                          if (iVar19 == 0x450db67a) {
                            puVar24 = (undefined *)0xf16893a9;
                            if ((int)local_738 < 0x5d) {
                              puVar24 = (undefined *)0xf1800c4e;
                            }
                          }
                          else if (iVar19 == 0x45525a8e) {
                            puVar24 = (undefined *)0xcd81ccc0;
                          }
                        }
                        else if (iVar19 == 0x458068aa) {
                          buffer[(long)local_250] = '?';
                          puVar24 = (undefined *)0x3e183d64;
                        }
                        else if (iVar19 == 0x45bf62f2) {
                          *buffer = '\'';
                          puVar24 = (undefined *)0x4d744617;
                        }
                        else if ((iVar19 == 0x463aaca9) &&
                                (puVar24 = (undefined *)0x3c7a6eac, local_643 != 0)) {
                          puVar24 = &DAT_814bd11f;
                        }
                      }
                      else if (iVar19 < 0x493c3b76) {
                        if (iVar19 < 0x488e9f11) {
                          if (iVar19 < 0x474684ba) {
                            if (iVar19 == 0x463fd648) {
                              local_2a8 = local_5f0;
                              local_6ba = local_719;
                              local_6bb = local_720;
                              local_6bc = local_6dd;
                              local_52c = 0x10;
                              local_6bf = local_6b5;
                              puVar24 = (undefined *)0xc2c487cd;
                            }
                            else if (iVar19 == 0x469e1938) {
                              puVar24 = (undefined *)0xebbcaa8f;
                            }
                          }
                          else if (iVar19 == 0x474684ba) {
                            local_3d8 = local_390 + 1;
                            bVar3 = 0;
                            puVar24 = (undefined *)0x26f56da0;
                          }
                          else if (iVar19 == 0x478c0b56) {
                            local_270 = local_5b0 + 1;
                            puVar24 = (undefined *)0x488e9f11;
                            if (local_270 < local_730) {
                              puVar24 = (undefined *)0xfec3243c;
                            }
                          }
                        }
                        else if (iVar19 < 0x48cf4545) {
                          if (iVar19 == 0x488e9f11) {
                            local_4f8 = local_270 + 1;
                            puVar24 = (undefined *)0xab089049;
                          }
                          else if (iVar19 == 0x48b31e8b) {
                            puVar24 = (undefined *)0xead3b09b;
                          }
                        }
                        else if (iVar19 == 0x48cf4545) {
                          puVar24 = (undefined *)0x8c5bb48a;
                          if (local_65f != '\0') {
                            puVar24 = (undefined *)0x205ca629;
                          }
                        }
                        else if (iVar19 == 0x4907bff3) {
                          local_360 = local_298;
                          local_438 = local_288;
                          uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                          uVar22 = 0xfac72058;
                          if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                            uVar22 = 0xd03f7463;
                          }
                          uVar1 = uVar22;
                          if (uVar18 == 0xffffffff) {
                            uVar1 = 0xd03f7463;
                          }
                          if (9 < y_32) {
                            uVar1 = uVar22;
                          }
                          puVar24 = (undefined *)(ulong)uVar1;
                        }
                      }
                      else if (iVar19 < 0x4b200e3d) {
                        if (iVar19 < 0x4abf0362) {
                          if (iVar19 == 0x493c3b76) {
                            local_230 = local_5a8 + 1;
                            local_649 = local_230 < local_730;
                            uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                            uVar22 = 0xe0439c1c;
                            if (y_32 < 10 != (uVar18 == 0)) {
                              uVar22 = 0xbca46d4f;
                            }
                            puVar24 = (undefined *)(ulong)uVar22;
                            if (uVar18 == 0) {
                              puVar24 = (undefined *)0xbca46d4f;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)(ulong)uVar22;
                            }
                          }
                          else if (iVar19 == 0x4a4d6bfa) {
                            puVar24 = (undefined *)0xf1bf8bce;
                          }
                        }
                        else if (iVar19 == 0x4abf0362) {
                          uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                          uVar22 = 0x931315d9;
                          if (y_32 < 10 != (uVar18 == 0)) {
                            uVar22 = 0xb1216b7f;
                          }
                          puVar24 = (undefined *)(ulong)uVar22;
                          if (uVar18 == 0) {
                            puVar24 = (undefined *)0xb1216b7f;
                          }
                          if (9 < y_32) {
                            puVar24 = (undefined *)(ulong)uVar22;
                          }
                        }
                        else if (iVar19 == 0x4ac008a5) {
                          puVar24 = (undefined *)0x4c2360a1;
                        }
                      }
                      else if (iVar19 < 0x4bfc67b3) {
                        if (iVar19 == 0x4b200e3d) {
                          puVar24 = (undefined *)0xdbe04246;
                        }
                        else if (iVar19 == 0x4bc7d91d) {
                          local_6e3 = local_741;
                          local_3c0 = local_710;
                          local_420 = local_718;
                          local_3d0 = local_f0;
                          local_6e4 = local_744;
                          local_588 = 0;
                          local_6e5 = local_740;
                          bVar13 = 0;
                          puVar24 = (undefined *)0xc6411054;
                          bVar4 = local_6a1;
                        }
                      }
                      else if (iVar19 == 0x4bfc67b3) {
                        puVar24 = (undefined *)0x345eb3fe;
                      }
                      else if (iVar19 == 0x4c2360a1) {
                        local_65f = local_468 != (undefined *)0x0;
                        uVar18 = (x_31 + -1) * x_31;
                        uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                        uVar22 = 0x4ac008a5;
                        if (y_32 < 10 != (uVar18 == 0)) {
                          uVar22 = 0x48cf4545;
                        }
                        puVar24 = (undefined *)(ulong)uVar22;
                        if (uVar18 == 0) {
                          puVar24 = (undefined *)0x48cf4545;
                        }
                        if (9 < y_32) {
                          puVar24 = (undefined *)(ulong)uVar22;
                        }
                      }
                      else if (iVar19 == 0x4c8f7fc6) {
                        bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                        puVar24 = (undefined *)0xaf8ea2be;
                        if (bVar25) {
                          puVar24 = (undefined *)0xc8f4dd2f;
                        }
                        if (9 < y_32) {
                          puVar24 = (undefined *)0xaf8ea2be;
                        }
                        if (y_32 < 10 != bVar25) {
                          puVar24 = (undefined *)0xc8f4dd2f;
                        }
                      }
                    }
                    else if (iVar19 < 0x542e2d8e) {
                      if (iVar19 < 0x502275f0) {
                        if (iVar19 < 0x4e08c938) {
                          if (iVar19 < 0x4d7cac31) {
                            if (iVar19 == 0x4d1daa78) {
                              puVar24 = (undefined *)0x23258f82;
                              if (local_64d != '\0') {
                                puVar24 = (undefined *)0x36284b83;
                              }
                            }
                            else if (iVar19 == 0x4d744617) {
                              local_350 = (undefined *)0x1;
                              puVar24 = (undefined *)0x210997ff;
                            }
                          }
                          else if (iVar19 == 0x4d7cac31) {
                            puVar24 = (undefined *)0x40e3265;
                            if (local_5f0 < local_730) {
                              puVar24 = (undefined *)0x7f2c6d43;
                            }
                          }
                          else if ((iVar19 == 0x4d94d578) &&
                                  (puVar24 = (undefined *)0x4bfc67b3, local_664 - 0x5bU < 2)) {
                            puVar24 = (undefined *)0x2ffa816a;
                          }
                        }
                        else if (iVar19 < 0x4f1e95e9) {
                          if (iVar19 == 0x4e08c938) {
                            buffer[(long)local_370] = '\\';
                            puVar24 = (undefined *)0x6421dcca;
                          }
                          else if (iVar19 == 0x4f015bee) {
                            puVar24 = (undefined *)0xcd00382f;
                          }
                        }
                        else if (iVar19 == 0x4f1e95e9) {
                          puVar24 = (undefined *)0xc9b259e8;
                        }
                        else if (iVar19 == 0x4f82916d) {
                          uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                          uVar22 = 0x987bad63;
                          if (y_32 < 10 != (uVar18 == 0)) {
                            uVar22 = 0x979d5f2a;
                          }
                          puVar24 = (undefined *)(ulong)uVar22;
                          if (uVar18 == 0) {
                            puVar24 = (undefined *)0x979d5f2a;
                          }
                          if (9 < y_32) {
                            puVar24 = (undefined *)(ulong)uVar22;
                          }
                        }
                      }
                      else if (iVar19 < 0x517d8b8a) {
                        if (iVar19 < 0x50f404a6) {
                          if (iVar19 == 0x502275f0) {
                            puVar24 = (undefined *)0xfee3a20f;
                            if (local_674 < 0x2f) {
                              puVar24 = (undefined *)0x2cead78a;
                            }
                          }
                          else if ((iVar19 == 0x5048d76b) &&
                                  (puVar24 = (undefined *)0x28151f7c, local_438 < local_730)) {
                            puVar24 = (undefined *)0x3d5dd622;
                          }
                        }
                        else if (iVar19 == 0x50f404a6) {
                          puVar24 = (undefined *)0x4d744617;
                          if (local_468 != (undefined *)0x0) {
                            puVar24 = (undefined *)0x45bf62f2;
                          }
                        }
                        else if (iVar19 == 0x517301d7) {
                          uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                          puVar24 = (undefined *)0x1985a806;
                          if (uVar18 == 0) {
                            puVar24 = (undefined *)0xcf3454b5;
                          }
                          if (9 < y_32) {
                            puVar24 = (undefined *)0x1985a806;
                          }
                          if (y_32 < 10 != (uVar18 == 0)) {
                            puVar24 = (undefined *)0xcf3454b5;
                          }
                        }
                      }
                      else if (iVar19 < 0x51ea4f01) {
                        if (iVar19 == 0x517d8b8a) {
                          puVar24 = (undefined *)0xf01d5f68;
                          if (local_6d0 != custom_quoting_style) {
                            puVar24 = (undefined *)0xd9ca87f2;
                          }
                          local_2f8 = local_458;
                          local_308 = local_460;
                        }
                        else if (iVar19 == 0x51dccb19) {
                          local_64b = local_6fc == shell_always_quoting_style;
                          uVar18 = (x_31 + -1) * x_31;
                          uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                          puVar24 = (undefined *)0xce6d1c0c;
                          if (uVar18 == 0) {
                            puVar24 = (undefined *)0x8e6b27d7;
                          }
                          if (9 < y_32) {
                            puVar24 = (undefined *)0xce6d1c0c;
                          }
                          if (y_32 < 10 != (uVar18 == 0)) {
                            puVar24 = (undefined *)0x8e6b27d7;
                          }
                        }
                      }
                      else if (iVar19 == 0x51ea4f01) {
                        uVar18 = (x_31 + -1) * x_31;
                        uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                        uVar22 = 0xab29d9fe;
                        if (y_32 < 10 != (uVar18 == 0)) {
                          uVar22 = 0xd94b94db;
                        }
                        puVar24 = (undefined *)(ulong)uVar22;
                        if (uVar18 == 0) {
                          puVar24 = (undefined *)0xd94b94db;
                        }
                        if (9 < y_32) {
                          puVar24 = (undefined *)(ulong)uVar22;
                        }
                      }
                      else if (iVar19 == 0x52189ca8) {
                        buffer[(long)local_560] = ~(local_720 >> 6) & 0xe3 ^ 0xd3;
                        puVar24 = (undefined *)0x14e6b6a7;
                      }
                      else if (iVar19 == 0x53b9bd27) {
                        buffer[(long)local_388] = '\'';
                        uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                        uVar22 = 0x99627dfc;
                        if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                          uVar22 = 0x684f642f;
                        }
                        uVar1 = uVar22;
                        if (uVar18 == 0xffffffff) {
                          uVar1 = 0x684f642f;
                        }
                        if (9 < y_32) {
                          uVar1 = uVar22;
                        }
                        puVar24 = (undefined *)(ulong)uVar1;
                      }
                    }
                    else if (iVar19 < 0x588a7749) {
                      if (iVar19 < 0x56424ceb) {
                        if (iVar19 < 0x5560227f) {
                          if (iVar19 == 0x542e2d8e) {
                            buffer[(long)local_5b0] = '0';
                            uVar18 = (x_31 + -1) * x_31;
                            uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                            puVar24 = (undefined *)0x9369e14c;
                            if (uVar18 == 0) {
                              puVar24 = (undefined *)0x5c8a7b73;
                            }
                            if (9 < y_32) {
                              puVar24 = (undefined *)0x9369e14c;
                            }
                            if (y_32 < 10 != (uVar18 == 0)) {
                              puVar24 = (undefined *)0x5c8a7b73;
                            }
                          }
                          else if (iVar19 == 0x5520d9ca) {
                            local_656 = *local_140;
                            puVar24 = (undefined *)0xdf39561e;
                            if (local_718 < local_730) {
                              puVar24 = (undefined *)0x2e8b27f4;
                            }
                          }
                        }
                        else if (iVar19 == 0x5560227f) {
                          puVar24 = (undefined *)0x33771324;
                          if (local_738 == 0x3f) {
                            puVar24 = (undefined *)0x569c45e4;
                          }
                        }
                        else if ((iVar19 == 0x55ebe1ed) &&
                                (puVar24 = (undefined *)0x6c9365de, local_65c != '\0')) {
                          puVar24 = (undefined *)0xfae5bf0f;
                        }
                      }
                      else if (iVar19 < 0x569c45e4) {
                        if (iVar19 == 0x56424ceb) {
                          local_250 = local_258 + 1;
                          puVar24 = (undefined *)0x3e183d64;
                          if (local_250 < local_730) {
                            puVar24 = (undefined *)0x458068aa;
                          }
                        }
                        else if ((iVar19 == 0x567ae8df) &&
                                (puVar24 = (undefined *)0x74e37602, local_647 != '\0')) {
                          puVar24 = (undefined *)0x585d4b17;
                        }
                      }
                      else if (iVar19 == 0x569c45e4) {
                        puVar24 = (undefined *)0x70f864ef;
                      }
                      else if (iVar19 == 0x56b5c23f) {
                        puVar24 = (undefined *)0xab089049;
                        if (local_659 != '\0') {
                          puVar24 = (undefined *)0x6fa87212;
                        }
                        local_4f8 = local_5b0;
                      }
                      else if (iVar19 == 0x585d4b17) {
                        buffer[(long)local_228] = local_720 >> 3 & 0x37 | 0x30;
                        puVar24 = (undefined *)0x74e37602;
                      }
                    }
                    else if (iVar19 < 0x5a9a35ff) {
                      if (iVar19 < 0x5928f61e) {
                        if (iVar19 == 0x588a7749) {
                          puVar24 = (undefined *)0xf5b76fcc;
                        }
                        else if (iVar19 == 0x58ac1529) {
                          puVar24 = (undefined *)0x8c24a5da;
                          if (local_6fc == shell_always_quoting_style) {
                            puVar24 = (undefined *)0x3ef24c87;
                          }
                          local_73d = local_741;
                          local_680 = local_710;
                          local_688 = local_6d8;
                          local_690 = local_6f8;
                          local_73e = local_740;
                          unaff_R13B = 1;
                          unaff_R14B = 0;
                          local_73f = 1;
                          unaff_RBP = local_730;
                          unaff_R15 = local_718;
                          bVar2 = local_744;
                        }
                      }
                      else if (iVar19 == 0x5928f61e) {
                        bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                        puVar24 = (undefined *)0x87247107;
                        if (bVar25) {
                          puVar24 = (undefined *)0xf4f60a1a;
                        }
                        if (9 < y_32) {
                          puVar24 = (undefined *)0x87247107;
                        }
                        if (y_32 < 10 != bVar25) {
                          puVar24 = (undefined *)0xf4f60a1a;
                        }
                      }
                      else if (iVar19 == 0x5a0c6bc4) {
                        local_6c4 = 1;
                        local_6c9 = local_6c2;
                        puVar24 = (undefined *)0x1c79e0a;
                      }
                    }
                    else if (iVar19 < 0x5c0a0c03) {
                      if (iVar19 == 0x5a9a35ff) {
                        puVar24 = (undefined *)0x90a751c;
                      }
                      else if ((iVar19 == 0x5bbf59fc) &&
                              (puVar24 = (undefined *)0xc7af6577, (int)local_738 < 0x7e)) {
                        puVar24 = (undefined *)0xdfca699e;
                      }
                    }
                    else if (iVar19 == 0x5c0a0c03) {
                      local_330 = local_48 + 1;
                      local_338 = local_50;
                      local_2e0 = local_58;
                      local_2f0 = local_c8;
                      local_6c6 = local_621;
                      local_6c7 = local_622;
                      local_6c8 = local_623;
                      local_300 = local_d0;
                      puVar24 = (undefined *)0x21424190;
                    }
                    else if (iVar19 == 0x5c8a7b73) {
                      puVar24 = (undefined *)0x478c0b56;
                    }
                    else if (iVar19 == 0x5cf05290) {
                      local_5a8 = local_5f0 + 1;
                      local_64a = local_5a8 < local_730;
                      uVar18 = (~-x_31 * x_31 ^ 0xfffffffeU) & ~-x_31 * x_31;
                      puVar24 = (undefined *)0x8aa96e41;
                      if (uVar18 == 0) {
                        puVar24 = (undefined *)0xe71170cb;
                      }
                      if (9 < y_32) {
                        puVar24 = (undefined *)0x8aa96e41;
                      }
                      if (y_32 < 10 != (uVar18 == 0)) {
                        puVar24 = (undefined *)0xe71170cb;
                      }
                    }
                  }
                  if (0x6e96e096 < iVar19) break;
                  if (iVar19 < 0x685bcbd9) {
                    if (iVar19 < 0x6421dcca) {
                      if (iVar19 < 0x5f64e88f) {
                        if (iVar19 < 0x5e224bf5) {
                          if (iVar19 == 0x5d214147) {
                            puVar24 = (undefined *)0xde160a9d;
                            if ((int)local_738 < 7) {
                              puVar24 = (undefined *)0x3f6bc39;
                            }
                          }
                          else if ((iVar19 == 0x5d449d83) &&
                                  (puVar24 = (undefined *)0x21476488, local_664 < 0x5e)) {
                            puVar24 = (undefined *)0x4d94d578;
                          }
                        }
                        else if (iVar19 == 0x5e224bf5) {
                          local_2e8 = local_110;
                          local_340 = (undefined *)0x0;
                          puVar24 = (undefined *)0xb938e9b6;
                        }
                        else if (iVar19 == 0x5f151cc0) {
                          puVar24 = (undefined *)0xbf09e2ab;
                        }
                      }
                      else if (iVar19 < 0x61f04be7) {
                        if (iVar19 == 0x5f64e88f) {
                          bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                          puVar24 = (undefined *)0x3e57c131;
                          if (bVar25) {
                            puVar24 = (undefined *)0x1bc8327;
                          }
                          if (9 < y_32) {
                            puVar24 = (undefined *)0x3e57c131;
                          }
                          if (y_32 < 10 != bVar25) {
                            puVar24 = (undefined *)0x1bc8327;
                          }
                        }
                        else if (iVar19 == 0x606406ce) {
                          bVar25 = (~(~-x_31 * x_31) | 0xfffffffeU) == 0xffffffff;
                          puVar24 = (undefined *)0xe183be88;
                          if (bVar25) {
                            puVar24 = (undefined *)0x7055f515;
                          }
                          if (9 < y_32) {
                            puVar24 = (undefined *)0xe183be88;
                          }
                          if (y_32 < 10 != bVar25) {
                            puVar24 = (undefined *)0x7055f515;
                          }
                        }
                      }
                      else if (iVar19 == 0x61f04be7) {
                        puVar24 = (undefined *)0x444683a5;
                      }
                      else if (iVar19 == 0x62009500) {
                        bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                        puVar24 = (undefined *)0xa29281fc;
                        if (bVar25) {
                          puVar24 = (undefined *)0xe97182ad;
                        }
                        if (9 < y_32) {
                          puVar24 = (undefined *)0xa29281fc;
                        }
                        if (y_32 < 10 != bVar25) {
                          puVar24 = (undefined *)0xe97182ad;
                        }
                      }
                    }
                    else if (iVar19 < 0x6669c20a) {
                      if (iVar19 < 0x64b0ec15) {
                        if (iVar19 == 0x6421dcca) {
                          local_4d0 = local_370 + 1;
                          local_4c8 = local_d8;
                          local_4d8 = local_e0;
                          local_4e0 = local_e8;
                          local_71c = local_626;
                          local_71d = local_694;
                          local_71b = local_627;
                          bVar8 = 1;
                          local_508 = local_598;
                          puVar24 = (undefined *)0x1bdbbe1f;
                          bVar7 = local_628;
                        }
                        else if (iVar19 == 0x64684bc8) {
                          puVar24 = (undefined *)0xa5fa0793;
                        }
                      }
                      else if (iVar19 == 0x64b0ec15) {
                        local_5f8 = local_318;
                        puVar24 = (undefined *)0xddee8aa6;
                        if (local_318 < local_4b0) {
                          puVar24 = (undefined *)0xd37781ff;
                        }
                      }
                      else if (iVar19 == 0x65b5f4e9) {
                        local_1c0 = local_3a8;
                        puVar24 = (undefined *)0xd2b1e792;
                        if (local_3a8 < local_730) {
                          puVar24 = (undefined *)0x8541207c;
                        }
                      }
                    }
                    else if (iVar19 < 0x679fd97b) {
                      if (iVar19 == 0x6669c20a) {
                        local_721 = 0x61;
                        puVar24 = (undefined *)0x8c0dae31;
                      }
                      else if (iVar19 == 0x673363b1) {
                        local_600 = local_d8;
                        local_608 = local_5b8;
                        local_610 = local_e0;
                        local_618 = local_e8;
                        local_739 = local_701;
                        local_73a = local_694;
                        local_73b = local_73c;
                        local_6b0 = 0x10;
                        local_620 = local_598;
                        puVar24 = (undefined *)0xfc047c01;
                      }
                    }
                    else if (iVar19 == 0x679fd97b) {
                      local_534 = 0x10;
                      puVar24 = (undefined *)0x19599461;
                    }
                    else if (iVar19 == 0x67b2453b) {
                      local_73d = local_741;
                      local_680 = local_710;
                      local_688 = local_6d8;
                      local_690 = local_6f8;
                      local_73f = local_743;
                      local_73e = local_740;
                      unaff_R13B = 0;
                      unaff_R14B = 0;
                      puVar24 = (undefined *)(ulong)local_1ac;
                      unaff_RBP = local_730;
                      unaff_R15 = local_718;
                      bVar2 = local_744;
                    }
                    else if (iVar19 == 0x684f642f) {
                      puVar24 = (undefined *)0xe6eea5ff;
                    }
                  }
                  else if (iVar19 < 0x6c237beb) {
                    if (iVar19 < 0x6a95c23c) {
                      if (iVar19 < 0x69b721b1) {
                        if (iVar19 == 0x685bcbd9) {
                          puVar24 = (undefined *)0x1e50de9e;
                        }
                        else if (iVar19 == 0x68bd2e82) {
                          puVar24 = (undefined *)0xd0b839b1;
                        }
                      }
                      else if (iVar19 == 0x69b721b1) {
                        puVar24 = (undefined *)0x20ba029f;
                        if ((int)local_738 < 0x5e) {
                          puVar24 = (undefined *)0x3f977c09;
                        }
                      }
                      else if (iVar19 == 0x6a381ace) {
                        buffer[(long)local_380] = local_6a5;
                        puVar24 = (undefined *)0x11f5c390;
                      }
                    }
                    else if (iVar19 < 0x6ac819e1) {
                      if (iVar19 == 0x6a95c23c) {
                        puVar24 = (undefined *)0xa274c3d7;
                        if (local_6fc == c_quoting_style) {
                          puVar24 = (undefined *)0xaa2d5e0d;
                        }
                      }
                      else if ((iVar19 == 0x6abfbb66) &&
                              (puVar24 = (undefined *)0xa8aa827e, local_640 != '\0')) {
                        puVar24 = (undefined *)0xf489befe;
                      }
                    }
                    else if (iVar19 == 0x6ac819e1) {
                      buffer[(long)local_278] = '\'';
                      puVar24 = (undefined *)0x1b6d1f7c;
                    }
                    else if (iVar19 == 0x6ac8cb42) {
                      local_73d = local_741;
                      local_680 = local_710;
                      local_688 = local_6d8;
                      local_690 = local_6f8;
                      local_73f = local_743;
                      local_73e = local_740;
                      unaff_R13B = 0;
                      unaff_R14B = 0;
                      puVar24 = (undefined *)0x8c24a5da;
                      unaff_RBP = local_730;
                      unaff_R15 = local_718;
                      bVar2 = local_744;
                    }
                    else if (iVar19 == 0x6c16832d) {
                      puVar24 = (undefined *)0x8c24a5da;
                      if (local_6fc == shell_always_quoting_style) {
                        puVar24 = (undefined *)0xcae8c16d;
                      }
                      local_73d = local_741;
                      local_680 = local_710;
                      local_688 = local_6d8;
                      local_690 = local_6f8;
                      local_73f = local_743;
                      local_73e = local_740;
                      unaff_R14B = 0;
                      unaff_RBP = local_730;
                      unaff_R15 = local_718;
                      local_69b = bVar17;
                      unaff_R13B = bVar17;
                      bVar2 = local_744;
                    }
                  }
                  else if (iVar19 < 0x6d17396e) {
                    if (iVar19 < 0x6c9365de) {
                      if (iVar19 == 0x6c237beb) {
                        local_639 = (byte)(~local_742 | 0xfe) != 0xff;
                        uVar18 = ~(~-x_31 * x_31) | 0xfffffffe;
                        uVar22 = 0xd2afb2fd;
                        if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                          uVar22 = 0x919e8acd;
                        }
                        uVar1 = uVar22;
                        if (uVar18 == 0xffffffff) {
                          uVar1 = 0x919e8acd;
                        }
                        if (9 < y_32) {
                          uVar1 = uVar22;
                        }
                        puVar24 = (undefined *)(ulong)uVar1;
                      }
                      else if (iVar19 == 0x6c517cf1) {
                        uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                        uVar22 = 0xd2afb2fd;
                        if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                          uVar22 = 0x6c237beb;
                        }
                        uVar1 = uVar22;
                        if (uVar18 == 0xffffffff) {
                          uVar1 = 0x6c237beb;
                        }
                        if (9 < y_32) {
                          uVar1 = uVar22;
                        }
                        puVar24 = (undefined *)(ulong)uVar1;
                      }
                    }
                    else if (iVar19 == 0x6c9365de) {
                      puVar24 = (undefined *)0xadf05288;
                      if (local_6fc == shell_always_quoting_style) {
                        puVar24 = (undefined *)0xb54886f5;
                      }
                      local_410 = local_718;
                      local_6eb = local_744;
                    }
                    else if (iVar19 == 0x6d04cff4) {
                      puVar24 = (undefined *)0xed16d498;
                    }
                  }
                  else if (iVar19 < 0x6db0c13b) {
                    if (iVar19 == 0x6d17396e) {
                      puVar24 = (undefined *)0x904950ef;
                      if (local_568 == 0x2c) {
                        puVar24 = (undefined *)0x1bdbbe1f;
                      }
                      local_4c8 = local_1f0;
                      local_4d0 = local_1f8;
                      local_4d8 = local_6d8;
                      local_4e0 = local_200;
                      local_71c = local_6b4;
                      local_71d = local_743;
                      local_71b = local_695;
                      local_508 = local_730;
                      bVar7 = local_697;
                      bVar8 = local_696;
                    }
                    else if (iVar19 == 0x6d8d4b69) {
                      puVar24 = (undefined *)0xba232e25;
                    }
                  }
                  else if (iVar19 == 0x6db0c13b) {
                    puVar24 = (undefined *)0x291f31e;
                    if ((int)local_738 < 9) {
                      puVar24 = (undefined *)0x5d214147;
                    }
                  }
                  else if (iVar19 == 0x6e2b8d00) {
                    puVar24 = (undefined *)0xa39834bf;
                  }
                  else if (iVar19 == 0x6e4dbecd) {
                    puVar24 = (undefined *)0x35df7d5b;
                    if (local_564 == 0x10) {
                      puVar24 = (undefined *)0x321c8b71;
                    }
                    local_290 = local_c8;
                    local_2a0 = local_d0;
                  }
                }
                if (0x74e37601 < iVar19) break;
                if (iVar19 < 0x71f04ea7) {
                  if (iVar19 < 0x7055f515) {
                    if (iVar19 < 0x6fa87212) {
                      if (iVar19 == 0x6e96e097) {
                        puVar24 = (undefined *)0x86fba256;
                        if ((int)local_738 < 0x24) {
                          puVar24 = (undefined *)0x763bb334;
                        }
                      }
                      else if (iVar19 == 0x6f44b991) {
                        local_6be = arg[(long)local_710] == '\0';
                        puVar24 = (undefined *)0x3191bb07;
                      }
                    }
                    else if (iVar19 == 0x6fa87212) {
                      uVar18 = (x_31 + -1) * x_31;
                      uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                      puVar24 = (undefined *)0x2c436e6;
                      if (uVar18 == 0) {
                        puVar24 = (undefined *)0xf6aa0458;
                      }
                      if (9 < y_32) {
                        puVar24 = (undefined *)0x2c436e6;
                      }
                      if (y_32 < 10 != (uVar18 == 0)) {
                        puVar24 = (undefined *)0xf6aa0458;
                      }
                    }
                    else if ((iVar19 == 0x6ff040c5) &&
                            (puVar24 = (undefined *)0xfcb04b0d,
                            ((local_742 ^ 0xfe) & local_742) != 0)) {
                      puVar24 = (undefined *)0xcca04bce;
                    }
                  }
                  else if (iVar19 < 0x716251e4) {
                    if (iVar19 == 0x7055f515) {
                      buffer[(long)local_440] = '\\';
                      uVar18 = (x_31 + -1) * x_31;
                      uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                      uVar22 = 0xe183be88;
                      if (y_32 < 10 != (uVar18 == 0)) {
                        uVar22 = 0x24b142c5;
                      }
                      puVar24 = (undefined *)(ulong)uVar22;
                      if (uVar18 == 0) {
                        puVar24 = (undefined *)0x24b142c5;
                      }
                      if (9 < y_32) {
                        puVar24 = (undefined *)(ulong)uVar22;
                      }
                    }
                    else if ((iVar19 == 0x70f864ef) &&
                            (puVar24 = (undefined *)0x6a95c23c, (int)local_6fc < 5)) {
                      puVar24 = (undefined *)0xd57d627a;
                    }
                  }
                  else if (iVar19 == 0x716251e4) {
                    puVar24 = (undefined *)0xd12115a3;
                    if ((int)local_6d0 < 5) {
                      puVar24 = (undefined *)0x1c79e0a;
                    }
                    local_540 = local_6d0;
                    local_6c5 = local_702;
                    local_6c9 = local_6de;
                    local_6c4 = local_702;
                  }
                  else if (iVar19 == 0x718a964e) {
                    local_100 = local_4c0;
                    local_56c = local_5e0;
                    uVar18 = (x_31 + -1) * x_31;
                    uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                    uVar22 = 0x469e1938;
                    if (y_32 < 10 != (uVar18 == 0)) {
                      uVar22 = 0xebbcaa8f;
                    }
                    puVar24 = (undefined *)(ulong)uVar22;
                    if (uVar18 == 0) {
                      puVar24 = (undefined *)0xebbcaa8f;
                    }
                    local_69a = bVar10;
                    if (9 < y_32) {
                      puVar24 = (undefined *)(ulong)uVar22;
                    }
                  }
                }
                else if (iVar19 < 0x72fbfc44) {
                  if (iVar19 < 0x72942128) {
                    if (iVar19 == 0x71f04ea7) {
                      puVar24 = (undefined *)0x67b2453b;
                      if (local_71a != '\0') {
                        puVar24 = (undefined *)0x215dcaa8;
                      }
                    }
                    else if (iVar19 == 0x72679875) {
                      puVar24 = (undefined *)0x1f57633a;
                    }
                  }
                  else if (iVar19 == 0x72942128) {
                    local_5d4 = local_6d0;
                    local_4e8 = local_458;
                    local_4f0 = local_460;
                    local_518 = local_118;
                    local_510 = local_120;
                    bVar12 = 0;
                    local_71f = local_6de;
                    local_520 = (undefined *)0x0;
                    puVar24 = (undefined *)0xbce22603;
                  }
                  else if (iVar19 == 0x72f1432c) {
                    uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                    uVar22 = 0x72ff24b8;
                    if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                      uVar22 = 0xaa1d3987;
                    }
                    uVar1 = uVar22;
                    if (uVar18 == 0xffffffff) {
                      uVar1 = 0xaa1d3987;
                    }
                    if (9 < y_32) {
                      uVar1 = uVar22;
                    }
                    puVar24 = (undefined *)(ulong)uVar1;
                  }
                }
                else if (iVar19 < 0x730f87b4) {
                  if (iVar19 == 0x72fbfc44) {
                    bVar25 = (~((x_31 + -1) * x_31) | 0xfffffffeU) == 0xffffffff;
                    puVar24 = (undefined *)0xde480b4b;
                    if (bVar25) {
                      puVar24 = (undefined *)0xa9cfed3b;
                    }
                    if (9 < y_32) {
                      puVar24 = (undefined *)0xde480b4b;
                    }
                    if (y_32 < 10 != bVar25) {
                      puVar24 = (undefined *)0xa9cfed3b;
                    }
                  }
                  else if (iVar19 == 0x72ff24b8) {
                    puVar24 = (undefined *)0x72f1432c;
                  }
                }
                else if (iVar19 == 0x730f87b4) {
                  puVar24 = (undefined *)0xf16893a9;
                  if ((int)local_738 < 0x25) {
                    puVar24 = (undefined *)0x6c16832d;
                  }
                  bVar17 = 0;
                }
                else if (iVar19 == 0x73122a89) {
                  local_c0 = (undefined *)-(-(long)local_710 - (long)local_4a8);
                  uVar18 = 0x44684037;
                  if ((undefined *)0x1 < local_4a8) {
                    uVar18 = 0x3a48834c;
                  }
                  if (local_6a4 == '\0') {
                    uVar18 = 0x44684037;
                  }
                  puVar24 = (undefined *)(ulong)uVar18;
                }
                else if (iVar19 == 0x744a9018) {
                  puVar24 = (undefined *)0xe3a5abb;
                }
              }
              if (iVar19 < 0x79db7108) break;
              if (iVar19 < 0x7d77e7fa) {
                if (iVar19 < 0x7ab5ed0c) {
                  if (iVar19 == 0x79db7108) {
                    puVar24 = (undefined *)0xc545ec4b;
                  }
                  else if (iVar19 == 0x7a0a6a7e) {
                    uVar18 = (x_31 + -1) * x_31;
                    uVar18 = (uVar18 ^ 0xfffffffe) & uVar18;
                    uVar22 = 0x96d0c29;
                    if (y_32 < 10 != (uVar18 == 0)) {
                      uVar22 = 0x5a0d48b;
                    }
                    puVar24 = (undefined *)(ulong)uVar22;
                    if (uVar18 == 0) {
                      puVar24 = (undefined *)0x5a0d48b;
                    }
                    if (9 < y_32) {
                      puVar24 = (undefined *)(ulong)uVar22;
                    }
                  }
                }
                else if (iVar19 == 0x7ab5ed0c) {
                  uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
                  uVar22 = 0x83bf188e;
                  if (y_32 < 10 != (uVar18 == 0xffffffff)) {
                    uVar22 = 0xc3b8ff87;
                  }
                  uVar1 = uVar22;
                  if (uVar18 == 0xffffffff) {
                    uVar1 = 0xc3b8ff87;
                  }
                  if (9 < y_32) {
                    uVar1 = uVar22;
                  }
                  puVar24 = (undefined *)(ulong)uVar1;
                }
                else if ((iVar19 == 0x7d5dfac9) &&
                        (puVar24 = (undefined *)0x1e4b1911, ((local_742 ^ 0xfe) & local_742) != 0))
                {
                  puVar24 = (undefined *)0x463fd648;
                }
              }
              else if (iVar19 < 0x7f2c6d43) {
                if (iVar19 == 0x7d77e7fa) {
                  local_608 = local_a0;
                  local_600 = local_60;
                  local_610 = local_68;
                  local_618 = local_70;
                  local_739 = local_624;
                  local_73a = local_625;
                  local_6b0 = 0;
                  local_620 = local_368;
                  puVar24 = (undefined *)0xfc047c01;
                  local_73b = bVar15;
                }
                else if ((iVar19 == 0x7f1f0cde) &&
                        (puVar24 = (undefined *)0xa8240c7f, local_6b9 != '\0')) {
                  puVar24 = (undefined *)0x4bc7d91d;
                }
              }
              else if (iVar19 == 0x7f2c6d43) {
                buffer[(long)local_5f0] = '\\';
                puVar24 = (undefined *)0x40e3265;
              }
              else if (iVar19 == 0x7f671093) {
                puVar24 = (undefined *)0xe505cd47;
                if (local_5b8 < local_598) {
                  puVar24 = (undefined *)0x1afa8b6d;
                }
              }
              else if ((iVar19 == 0x7fb2b8c5) &&
                      (puVar24 = (undefined *)0xbf98188a, (int)local_738 < 0x60)) {
                puVar24 = (undefined *)0xac807295;
              }
            }
            if (0x769e673f < iVar19) break;
            if (iVar19 < 0x7556a2ef) {
              if (iVar19 == 0x74e37602) {
                local_3c8 = local_228 + 1;
                local_6e6 = local_720 & 0x37 | 0x30;
                local_6e8 = local_62d;
                local_6ec = 1;
                puVar24 = (undefined *)0x14c48a52;
                bVar14 = local_6dd;
              }
              else if (iVar19 == 0x74f15e6e) {
                local_600 = local_710;
                local_608 = local_718;
                local_610 = local_6d8;
                local_618 = local_6f8;
                local_739 = local_744;
                local_73a = local_743;
                local_73b = local_73c;
                local_6b0 = 0x10;
                local_620 = local_730;
                puVar24 = (undefined *)0xfc047c01;
              }
            }
            else if (iVar19 == 0x7556a2ef) {
              local_5d4 = local_19c;
              local_4e8 = local_458;
              local_4f0 = local_460;
              local_71f = 1;
              local_510 = (undefined *)0x1;
              local_518 = "\"";
              local_520 = local_358;
              puVar24 = (undefined *)0xbce22603;
              bVar12 = local_69e;
            }
            else if ((iVar19 == 0x763bb334) &&
                    (puVar24 = (undefined *)0x8ca3c1b5, (int)local_738 < 0x21)) {
              puVar24 = (undefined *)0xa32c8590;
            }
          }
          if (0x772f9d15 < iVar19) break;
          if (iVar19 == 0x769e6740) {
            unaff_R15 = local_248 + 1;
            local_73d = local_741;
            local_680 = local_710;
            local_688 = local_78;
            local_690 = local_6f8;
            local_73e = local_740;
            unaff_R13B = 1;
            unaff_R14B = 0;
            local_73f = 1;
            puVar24 = (undefined *)0x8c24a5da;
            unaff_RBP = local_498;
            bVar2 = 0;
          }
          else if (iVar19 == 0x76e66f88) {
            puVar24 = (undefined *)0x247907a4;
          }
        }
        if (iVar19 != 0x772f9d16) break;
        uVar18 = ~((x_31 + -1) * x_31) | 0xfffffffe;
        uVar22 = 0x8cbdbf8e;
        if (y_32 < 10 != (uVar18 == 0xffffffff)) {
          uVar22 = 0xece043a0;
        }
        uVar1 = uVar22;
        if (uVar18 == 0xffffffff) {
          uVar1 = 0xece043a0;
        }
        if (9 < y_32) {
          uVar1 = uVar22;
        }
        puVar24 = (undefined *)(ulong)uVar1;
      }
      if (iVar19 != 0x78b9d2e1) break;
      puVar24 = (undefined *)0x86c00ce5;
      if (local_648 != '\0') {
        puVar24 = (undefined *)0x606406ce;
      }
    }
  } while (iVar19 != 0x776ebbec);
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Removing unreachable block (ram,0x0040f524) */

char * quotearg_alloc(char *arg,size_t argsize,quoting_options *o)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char *local_38;
  
  uVar2 = (x_33 + -1) * x_33;
  bVar5 = ((uVar2 ^ 0xfffffffe) & uVar2) == 0;
  bVar1 = y_34 < 10;
  uVar2 = 0x37594397;
LAB_0040f560:
  while( true ) {
    if (uVar2 == 0x37594397) goto LAB_0040f5d0;
    if (uVar2 != 0x517bb02e) break;
    local_38 = quotearg_alloc_mem(arg,argsize,(size_t *)0x0,o);
    uVar3 = ~((x_33 + -1) * x_33) | 0xfffffffe;
    uVar4 = 0x238f757e;
    if (y_34 < 10 != (uVar3 == 0xffffffff)) {
      uVar4 = 0x88d44550;
    }
    uVar2 = uVar4;
    if (uVar3 == 0xffffffff) {
      uVar2 = 0x88d44550;
    }
    if (9 < y_34) {
      uVar2 = uVar4;
    }
    if ((int)uVar2 < 0x37594397) goto LAB_0040f54c;
  }
  goto LAB_0040f630;
LAB_0040f5d0:
  uVar2 = 0x238f757e;
  if (bVar1) {
    uVar2 = 0x517bb02e;
  }
  if (!bVar5) {
    uVar2 = 0x238f757e;
  }
  if (bVar5 != bVar1) {
    uVar2 = 0x517bb02e;
  }
  if (uVar2 < 0x37594397) {
LAB_0040f54c:
    if (uVar2 != 0x238f757e) {
      if (uVar2 == 0x88d44550) {
        return local_38;
      }
LAB_0040f630:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    quotearg_alloc_mem(arg,argsize,(size_t *)0x0,o);
    uVar2 = 0x517bb02e;
  }
  goto LAB_0040f560;
}


char * quotearg_alloc_mem(char *arg,size_t argsize,size_t *size,quoting_options *o)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  char *buffer;
  uint uVar5;
  uint uVar6;
  wchar_t flags;
  quoting_options *pqVar7;
  
  pqVar7 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar7 = o;
  }
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  uVar6 = (uint)(size != (size_t *)0x0);
  uVar5 = ~pqVar7->flags;
  flags = ~(uVar6 | 0xfffffffe | uVar5) |
          (pqVar7->flags & 0xb261be34U | uVar5 & 0x4d9e41cb) ^ (uVar6 | 0x4d9e41ca);
  sVar4 = quotearg_buffer_restyled
                    ((char *)0x0,0,arg,argsize,pqVar7->style,flags,pqVar7->quote_these_too,
                     pqVar7->left_quote,pqVar7->right_quote);
  buffer = (char *)xmalloc(sVar4 + 1);
  quotearg_buffer_restyled
            (buffer,sVar4 + 1,arg,argsize,pqVar7->style,flags,pqVar7->quote_these_too,
             pqVar7->left_quote,pqVar7->right_quote);
  do {
    *piVar3 = iVar1;
    iVar2 = -0x5d5fae08;
    if (size != (size_t *)0x0) {
      iVar2 = 0x4baf6204;
    }
  } while (iVar2 == -0x6695839c);
  while (iVar2 == 0x4baf6204) {
    *size = sVar4;
    iVar2 = -0x5d5fae08;
  }
  if (iVar2 != -0x5d5fae08) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return buffer;
}


/* WARNING: Removing unreachable block (ram,0x0040f963) */
/* WARNING: Removing unreachable block (ram,0x0040fcc0) */
/* WARNING: Removing unreachable block (ram,0x0040fac2) */

void quotearg_free(void)

{
  slotvec *__ptr;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  wchar_t wVar4;
  uint uVar5;
  bool bVar6;
  wchar_t local_50;
  char local_49;
  char *local_40;
  wchar_t local_34;
  
  __ptr = slotvec;
  uVar1 = 0x9a2be18b;
  wVar4 = L'\x01';
LAB_0040fae0:
  if ((int)uVar1 < -0x3a1ee4f2) {
    if ((int)uVar1 < -0x5ef9b9ed) {
      if (uVar1 == 0x827b8a33) {
        free(__ptr);
        slotvec = &slotvec0;
        uVar1 = 0x68731d03;
        goto LAB_0040f87b;
      }
      if ((uVar1 == 0x9a2be18b) && (local_50 = wVar4, uVar1 = 0xdd6eebf6, wVar4 < nslots)) {
        uVar1 = 0xb7322b89;
      }
    }
    else {
      if (uVar1 == 0xa1064613) {
        local_49 = __ptr != &slotvec0;
        bVar6 = (~((x_37 + -1) * x_37) | 0xfffffffeU) == 0xffffffff;
        uVar2 = 0x2c5dd40c;
        uVar1 = 0x749d7259;
        if (bVar6) {
          uVar1 = 0x2c5dd40c;
        }
        uVar3 = 0x749d7259;
      }
      else {
        if (uVar1 != 0xb7322b89) goto joined_r0x0040fc90;
        bVar6 = (~((x_37 + -1) * x_37) | 0xfffffffeU) == 0xffffffff;
        uVar2 = 0xc5e11b0e;
        uVar1 = 0xecb79b16;
        if (bVar6) {
          uVar1 = 0xc5e11b0e;
        }
        uVar3 = 0xecb79b16;
      }
      if (9 < y_38) {
        uVar1 = uVar3;
      }
      if ((bool)(y_38 < 10 ^ bVar6)) {
        uVar1 = uVar2;
      }
    }
  }
  else {
    if ((int)uVar1 < -0x134864ea) {
      if (uVar1 == 0xc5e11b0e) {
        free(__ptr[local_50].val);
        local_34 = local_50 + L'\x01';
        uVar3 = ~((x_37 + -1) * x_37) | 0xfffffffe;
        bVar6 = y_38 < 10 == (uVar3 == 0xffffffff);
        uVar2 = 0xecb79b16;
        uVar5 = 0x5b82dbd5;
        goto LAB_0040fd16;
      }
      if (uVar1 == 0xdd6eebf6) {
        local_40 = __ptr->val;
        bVar6 = local_40 == slot0;
        uVar1 = 0x745e84;
        uVar2 = 0x7b33f46b;
        goto LAB_0040fac4;
      }
      goto joined_r0x0040fc90;
    }
    if (uVar1 == 0xecb79b16) {
      free(__ptr[local_50].val);
      uVar1 = 0xc5e11b0e;
      goto LAB_0040fae0;
    }
    if (uVar1 != 0x745e84) {
      if (uVar1 != 0x75d863a) goto joined_r0x0040fc90;
      uVar1 = 0x745e84;
      goto LAB_0040fae0;
    }
    uVar2 = (x_37 + -1) * x_37;
    uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
    uVar1 = 0x749d7259;
    if (uVar2 == 0) {
      uVar1 = 0xa1064613;
    }
    if (9 < y_38) {
      uVar1 = 0x749d7259;
    }
    if (y_38 < 10 != (uVar2 == 0)) {
      uVar1 = 0xa1064613;
    }
  }
joined_r0x0040fc90:
  if (0x8f7806c < (int)uVar1) {
LAB_0040f87b:
    while (0x5b82dbd4 < (int)uVar1) {
      if (0x68731d02 < (int)uVar1) {
        if (uVar1 == 0x68731d03) {
          free(__ptr);
          slotvec = &slotvec0;
          uVar2 = (x_37 + -1) * x_37;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          uVar1 = 0x827b8a33;
          if (uVar2 == 0) {
            uVar1 = 0x8f7806d;
          }
          if (9 < y_38) {
            uVar1 = 0x827b8a33;
          }
          if (y_38 < 10 != (uVar2 == 0)) {
            uVar1 = 0x8f7806d;
          }
          goto joined_r0x0040fa24;
        }
        if (uVar1 == 0x749d7259) {
          uVar1 = 0xa1064613;
          goto LAB_0040fae0;
        }
        if (uVar1 == 0x7b33f46b) {
          uVar2 = (x_37 + -1) * x_37;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          uVar1 = 0x5d2106b7;
          if (uVar2 == 0) {
            uVar1 = 0xa2073b4;
          }
          if (9 < y_38) {
            uVar1 = 0x5d2106b7;
          }
          if (y_38 < 10 != (uVar2 == 0)) {
            uVar1 = 0xa2073b4;
          }
          goto joined_r0x0040f8e8;
        }
        goto joined_r0x0040fc90;
      }
      if (uVar1 == 0x5b82dbd5) {
        uVar1 = 0x9a2be18b;
        wVar4 = local_34;
        goto LAB_0040fae0;
      }
      if (uVar1 != 0x5d2106b7) goto joined_r0x0040fc90;
      free(local_40);
      slotvec0.size = 0x100;
      slotvec0.val = slot0;
      uVar1 = 0xa2073b4;
    }
    if ((int)uVar1 < 0x1d72a272) {
      if (uVar1 == 0x8f7806d) {
        uVar1 = 0x284bfa9a;
        goto LAB_0040f87b;
      }
      if (uVar1 != 0xa2073b4) goto joined_r0x0040fc90;
      free(local_40);
      slotvec0.size = 0x100;
      slotvec0.val = slot0;
      uVar3 = ~(~-x_37 * x_37) | 0xfffffffe;
      bVar6 = y_38 < 10 == (uVar3 == 0xffffffff);
      uVar2 = 0x5d2106b7;
      uVar5 = 0x75d863a;
LAB_0040fd16:
      if (!bVar6) {
        uVar2 = uVar5;
      }
      uVar1 = uVar2;
      if (uVar3 == 0xffffffff) {
        uVar1 = uVar5;
      }
      if (9 < y_38) {
        uVar1 = uVar2;
      }
    }
    else {
      if (uVar1 != 0x1d72a272) {
        if (uVar1 == 0x2c5dd40c) {
          bVar6 = local_49 == '\0';
          uVar1 = 0x284bfa9a;
          uVar2 = 0x1d72a272;
LAB_0040fac4:
          if (!bVar6) {
            uVar1 = uVar2;
          }
joined_r0x0040f8e8:
          if (uVar1 < 0x8f7806d) goto LAB_0040fae0;
          goto LAB_0040f87b;
        }
        if (uVar1 == 0x284bfa9a) {
          nslots = L'\x01';
          return;
        }
        goto joined_r0x0040fc90;
      }
      bVar6 = (~((x_37 + -1) * x_37) | 0xfffffffeU) == 0xffffffff;
      uVar1 = 0x827b8a33;
      if (bVar6) {
        uVar1 = 0x68731d03;
      }
      if (9 < y_38) {
        uVar1 = 0x827b8a33;
      }
      if (y_38 < 10 != bVar6) {
        uVar1 = 0x68731d03;
      }
    }
joined_r0x0040fa24:
    if ((int)uVar1 < 0x8f7806d) goto LAB_0040fae0;
    goto LAB_0040f87b;
  }
  goto LAB_0040fae0;
}


/* WARNING: Removing unreachable block (ram,0x0040fdac) */

char * quotearg_n(wchar_t n,char *arg)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char *local_38;
  
  bVar5 = (~((x_39 + -1) * x_39) | 0xfffffffeU) == 0xffffffff;
  bVar1 = y_40 < 10;
  iVar2 = 0x242d7769;
  do {
    if (iVar2 != -0x3d281882) {
      if (iVar2 == 0x242d7769) {
        iVar2 = -0x3d281882;
        if (bVar1) {
          iVar2 = -0x66ead2e2;
        }
        if (!bVar5) {
          iVar2 = -0x3d281882;
        }
        if (bVar5 == bVar1) goto joined_r0x0040fe78;
        iVar2 = -0x66ead2e2;
        goto joined_r0x0040fe78;
      }
LAB_0040fea0:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    quotearg_n_options(n,arg,0xffffffffffffffff,&default_quoting_options);
    iVar2 = -0x66ead2e2;
    do {
      if (iVar2 != -0x66ead2e2) {
        if (iVar2 == -0x7c36648f) {
          return local_38;
        }
        goto LAB_0040fea0;
      }
      local_38 = quotearg_n_options(n,arg,0xffffffffffffffff,&default_quoting_options);
      uVar3 = ~((x_39 + -1) * x_39) | 0xfffffffe;
      iVar4 = -0x3d281882;
      if (y_40 < 10 != (uVar3 == 0xffffffff)) {
        iVar4 = -0x7c36648f;
      }
      iVar2 = iVar4;
      if (uVar3 == 0xffffffff) {
        iVar2 = -0x7c36648f;
      }
      if (9 < y_40) {
        iVar2 = iVar4;
      }
joined_r0x0040fe78:
    } while (iVar2 < -0x3d281882);
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00410151) */
/* WARNING: Removing unreachable block (ram,0x004106ca) */
/* WARNING: Removing unreachable block (ram,0x00410016) */

char * quotearg_n_options(wchar_t n,char *arg,size_t argsize,quoting_options *options)

{
  uint *quote_these_too;
  int iVar1;
  size_t buffersize;
  char cVar2;
  slotvec *psVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  slotvec *psVar8;
  uint uVar9;
  uint uVar10;
  slotvec *p;
  char *unaff_R13;
  bool bVar11;
  char local_f7;
  char local_f6;
  char local_f5;
  wchar_t local_f4;
  char *local_f0;
  size_t local_e8;
  wchar_t local_dc;
  slotvec *local_b8;
  slotvec *local_b0;
  slotvec *local_a8;
  size_t local_a0;
  char **local_70;
  quoting_options *local_68;
  uint *local_60;
  char **local_58;
  char **local_50;
  slotvec *local_48;
  
  piVar5 = __errno_location();
  psVar3 = slotvec;
  iVar1 = *piVar5;
  psVar8 = (slotvec *)0x3281f2cd;
  if (n == L'\x7fffffff') {
    psVar8 = (slotvec *)0x74f2c863;
  }
  uVar6 = (uint)psVar8;
  quote_these_too = options->quote_these_too;
  uVar7 = 0x18290e84;
joined_r0x0040ffb2:
  uVar4 = uVar7;
  if (uVar7 < 0x11309f8c) goto LAB_0040ffdb;
LAB_00410330:
  if ((int)uVar4 < 0x3281f2cd) {
    if (0x1f69475f < (int)uVar4) {
      if (uVar4 == 0x22364933) {
        uVar9 = ~((x_41 + -1) * x_41) | 0xfffffffe;
        bVar11 = y_42 < 10 == (uVar9 == 0xffffffff);
        uVar7 = 0xe6ef908b;
        uVar10 = 0x5be90cc2;
      }
      else {
        if (uVar4 != 0x2a1a3235) {
          if (uVar4 == 0x1f694760) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto joined_r0x0041064c;
        }
        local_a0 = local_e8 + 1;
        local_a8->size = local_a0;
        local_f5 = local_f0 != slot0;
        uVar9 = ~(~-x_41 * x_41) | 0xfffffffe;
        bVar11 = y_42 < 10 == (uVar9 == 0xffffffff);
        uVar7 = 0xe92d6661;
        uVar10 = 0x5a781282;
      }
      goto LAB_0040ffb9;
    }
    if (uVar4 == 0x11309f8c) {
      uVar7 = (x_41 + -1) * x_41;
      uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
      bVar11 = uVar7 == 0;
      uVar9 = 0x58654e46;
      uVar4 = 0xf19ce8d6;
      if (uVar7 == 0) {
        uVar4 = 0x58654e46;
      }
      uVar7 = 0xf19ce8d6;
      goto LAB_00410577;
    }
    if (uVar4 != 0x11de9ffc) {
      uVar7 = (n >> 0x1f & 0x18a67d0dU) + 0x6c2ca53;
      if (uVar4 != 0x18290e84) goto joined_r0x0041064c;
      goto joined_r0x0040ffb2;
    }
    uVar7 = (~-x_41 * x_41 ^ 0xfffffffeU) & ~-x_41 * x_41;
    uVar9 = 0x89efb96b;
    if (y_42 < 10 != (uVar7 == 0)) {
      uVar9 = 0xa44946a5;
    }
    uVar4 = uVar9;
    if (uVar7 == 0) {
      uVar4 = 0xa44946a5;
    }
    local_48 = psVar8;
    if (9 < y_42) {
      uVar4 = uVar9;
    }
  }
  else {
    if ((int)uVar4 < 0x5a781282) {
      if (uVar4 != 0x3281f2cd) {
        if (uVar4 == 0x39b4c174) {
          unaff_R13 = (char *)xmalloc(local_a0);
          *local_70 = unaff_R13;
          quotearg_buffer_restyled
                    (unaff_R13,local_a0,arg,argsize,local_68->style,local_dc,local_60,*local_58,
                     *local_50);
          uVar7 = 0xbabaf12e;
          goto LAB_0040ffdb;
        }
        if (uVar4 == 0x58654e46) {
          free(local_f0);
          uVar7 = (x_41 + -1) * x_41;
          uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
          uVar4 = 0xf19ce8d6;
          if (uVar7 == 0) {
            uVar4 = 0xcb9c8275;
          }
          if (9 < y_42) {
            uVar4 = 0xf19ce8d6;
          }
          if (y_42 < 10 != (uVar7 == 0)) {
            uVar4 = 0xcb9c8275;
          }
        }
        goto joined_r0x0041064c;
      }
      p = (slotvec *)0x0;
      if (local_f7 == '\0') {
        p = psVar3;
      }
      slotvec = (slotvec *)xrealloc(p,(long)(n + L'\x01') << 4);
      uVar4 = 0xb8b04139;
      uVar7 = 0x22364933;
      cVar2 = local_f7;
      local_f4 = n + L'\x01';
      local_b8 = slotvec;
      local_b0 = slotvec;
LAB_00410644:
      if (cVar2 != '\0') {
        uVar4 = uVar7;
      }
      goto joined_r0x0041064c;
    }
    if ((int)uVar4 < 0x7428e3ec) {
      if (uVar4 == 0x5a781282) {
        uVar4 = 0x39b4c174;
        uVar7 = 0x11309f8c;
        cVar2 = local_f5;
        goto LAB_00410644;
      }
      if (uVar4 != 0x5be90cc2) goto joined_r0x0041064c;
      *local_b8 = slotvec0;
      uVar9 = ~((x_41 + -1) * x_41) | 0xfffffffe;
      bVar11 = y_42 < 10 == (uVar9 == 0xffffffff);
      uVar7 = 0xe6ef908b;
      uVar10 = 0x9fbd962f;
    }
    else {
      if (uVar4 != 0x7428e3ec) {
        if (uVar4 == 0x74f2c863) {
                    /* WARNING: Subroutine does not return */
          xalloc_die();
        }
        goto joined_r0x0041064c;
      }
      uVar9 = ~((x_41 + -1) * x_41) | 0xfffffffe;
      bVar11 = y_42 < 10 == (uVar9 == 0xffffffff);
      uVar7 = 0xe92d6661;
      uVar10 = 0x2a1a3235;
    }
LAB_0040ffb9:
    if (!bVar11) {
      uVar7 = uVar10;
    }
    uVar4 = uVar7;
    if (uVar9 == 0xffffffff) {
      uVar4 = uVar10;
    }
    if (9 < y_42) {
      uVar4 = uVar7;
    }
  }
joined_r0x0041064c:
  do {
    uVar7 = uVar4;
    if (0x11309f8b < (int)uVar4) goto LAB_00410330;
LAB_0040ffdb:
    while( true ) {
      while (uVar4 = uVar7, (int)uVar7 < -0x34637d8b) {
        if (-0x5bb6b95c < (int)uVar7) {
          if (uVar7 == 0xa44946a5) {
            local_a8 = local_48 + n;
            buffersize = local_a8->size;
            local_70 = &local_48[n].val;
            local_f0 = *local_70;
            local_dc = options->flags ^ 1U | options->flags & 1U;
            local_e8 = quotearg_buffer_restyled
                                 (local_f0,buffersize,arg,argsize,options->style,local_dc,
                                  quote_these_too,options->left_quote,options->right_quote);
            local_f6 = buffersize <= local_e8;
            bVar11 = (~(~-x_41 * x_41) | 0xfffffffeU) == 0xffffffff;
            uVar9 = 0x86a10d03;
            uVar4 = 0x89efb96b;
            if (bVar11) {
              uVar4 = 0x86a10d03;
            }
            uVar7 = 0x89efb96b;
            local_68 = options;
            local_60 = quote_these_too;
            local_58 = &options->left_quote;
            local_50 = &options->right_quote;
LAB_00410577:
            if (9 < y_42) {
              uVar4 = uVar7;
            }
            if ((bool)(y_42 < 10 ^ bVar11)) {
              uVar4 = uVar9;
            }
          }
          else {
            if (uVar7 == 0xb8b04139) {
              memset(local_b0 + nslots,0,(long)(local_f4 - nslots) << 4);
              uVar7 = 0x11de9ffc;
              nslots = local_f4;
              psVar8 = local_b0;
              goto joined_r0x0040ffb2;
            }
            if (uVar7 == 0xbabaf12e) {
              *piVar5 = iVar1;
              return unaff_R13;
            }
          }
          goto joined_r0x0041064c;
        }
        if (uVar7 == 0x86a10d03) {
          uVar4 = 0xbabaf12e;
          unaff_R13 = local_f0;
          if (local_f6 != '\0') {
            uVar4 = 0x7428e3ec;
          }
          goto joined_r0x0041064c;
        }
        if (uVar7 == 0x89efb96b) {
          quotearg_buffer_restyled
                    (local_48[n].val,local_48[n].size,arg,argsize,options->style,
                     options->flags ^ 1U | options->flags & 1U,quote_these_too,options->left_quote,
                     options->right_quote);
          uVar7 = 0xa44946a5;
        }
        else {
          if (uVar7 != 0x9fbd962f) goto joined_r0x0041064c;
          uVar7 = 0xb8b04139;
        }
      }
      if ((int)uVar7 < -0xe63172a) {
        if (uVar7 == 0xcb9c8275) {
          uVar4 = 0x39b4c174;
          goto LAB_00410330;
        }
        if (uVar7 == 0xe6ef908b) {
          *local_b8 = slotvec0;
          uVar4 = 0x5be90cc2;
        }
        else {
          if (uVar7 != 0xe92d6661) goto joined_r0x0041064c;
          local_a8->size = local_e8 + 1;
          uVar4 = 0x2a1a3235;
        }
        goto LAB_00410330;
      }
      if (uVar7 == 0xf19ce8d6) {
        free(local_f0);
        uVar4 = 0x58654e46;
        goto LAB_00410330;
      }
      if (uVar7 != 0x3d17e4d) break;
      local_f7 = psVar3 == &slotvec0;
      uVar7 = uVar6;
      uVar4 = uVar6;
      if (0x11309f8b < uVar6) goto LAB_00410330;
    }
    if (uVar7 == 0x6c2ca53) {
      uVar7 = 0x11de9ffc;
      psVar8 = psVar3;
      if (nslots <= n) {
        uVar7 = 0x3d17e4d;
      }
      goto joined_r0x0040ffb2;
    }
  } while( true );
}


char * quotearg_n_mem(wchar_t n,char *arg,size_t argsize)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_options(n,arg,argsize,&default_quoting_options);
  return pcVar1;
}


/* WARNING: Removing unreachable block (ram,0x004107ad) */
/* WARNING: Removing unreachable block (ram,0x004109d1) */
/* WARNING: Removing unreachable block (ram,0x00410acc) */
/* WARNING: Removing unreachable block (ram,0x00410847) */

char * quotearg(char *arg)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  char *local_40;
  char *local_38;
  
  bVar6 = ((~-x_45 * x_45 ^ 0xfffffffeU) & ~-x_45 * x_45) == 0;
  bVar1 = y_46 < 10;
  iVar3 = -0x3e02b5cd;
LAB_004107f2:
  do {
    if (iVar3 == -0x5d0a2f0e) {
      bVar7 = (~((x_39 + -1) * x_39) | 0xfffffffeU) == 0xffffffff;
      bVar2 = y_40 < 10;
      iVar3 = 0x242d7769;
      do {
        if (iVar3 != -0x3d281882) {
          if (iVar3 == 0x242d7769) {
            iVar5 = -0x3d281882;
            if (bVar7 != bVar2) {
              iVar5 = -0x66ead2e2;
            }
            iVar3 = iVar5;
            if (bVar2) {
              iVar3 = -0x66ead2e2;
            }
            if (bVar7) goto joined_r0x0041091c;
            iVar3 = iVar5;
            goto joined_r0x0041091c;
          }
LAB_00410ae0:
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        quotearg_n_options(L'\0',arg,0xffffffffffffffff,&default_quoting_options);
        iVar3 = -0x66ead2e2;
        do {
          if (iVar3 != -0x66ead2e2) {
            if (iVar3 != -0x7c36648f) goto LAB_00410ae0;
            uVar4 = ~((x_45 + -1) * x_45) | 0xfffffffe;
            iVar5 = -0x148165cc;
            if (y_46 < 10 != (uVar4 == 0xffffffff)) {
              iVar5 = 0x633f2803;
            }
            iVar3 = iVar5;
            if (uVar4 == 0xffffffff) {
              iVar3 = 0x633f2803;
            }
            local_38 = local_40;
            if (9 < y_46) {
              iVar3 = iVar5;
            }
            goto joined_r0x004107ec;
          }
          local_40 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,&default_quoting_options);
          uVar4 = ~(~-x_39 * x_39) | 0xfffffffe;
          iVar5 = -0x3d281882;
          if (y_40 < 10 != (uVar4 == 0xffffffff)) {
            iVar5 = -0x7c36648f;
          }
          iVar3 = iVar5;
          if (uVar4 == 0xffffffff) {
            iVar3 = -0x7c36648f;
          }
          if (9 < y_40) {
            iVar3 = iVar5;
          }
joined_r0x0041091c:
        } while (iVar3 < -0x3d281882);
      } while( true );
    }
    if (iVar3 != -0x3e02b5cd) goto LAB_00410b10;
    iVar3 = -0x148165cc;
    if (bVar1) {
      iVar3 = -0x5d0a2f0e;
    }
    if (!bVar6) {
      iVar3 = -0x148165cc;
    }
    if (bVar6 != bVar1) {
      iVar3 = -0x5d0a2f0e;
    }
joined_r0x004107ec:
  } while (iVar3 < -0x148165cc);
  if (iVar3 == -0x148165cc) {
    uVar4 = (x_39 + -1) * x_39;
    bVar7 = ((uVar4 ^ 0xfffffffe) & uVar4) == 0;
    bVar2 = y_40 < 10;
    iVar3 = 0x242d7769;
    do {
      if (iVar3 != -0x3d281882) {
        if (iVar3 == 0x242d7769) {
          iVar5 = -0x3d281882;
          if (bVar7 != bVar2) {
            iVar5 = -0x66ead2e2;
          }
          iVar3 = iVar5;
          if (bVar2) {
            iVar3 = -0x66ead2e2;
          }
          if (bVar7) goto joined_r0x00410a9d;
          iVar3 = iVar5;
          goto joined_r0x00410a9d;
        }
LAB_00410af0:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      quotearg_n_options(L'\0',arg,0xffffffffffffffff,&default_quoting_options);
      iVar3 = -0x66ead2e2;
      do {
        if (iVar3 != -0x66ead2e2) {
          if (iVar3 != -0x7c36648f) goto LAB_00410af0;
          iVar3 = -0x5d0a2f0e;
          goto LAB_004107f2;
        }
        local_40 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,&default_quoting_options);
        uVar4 = (x_39 + -1) * x_39;
        uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
        iVar3 = -0x3d281882;
        if (uVar4 == 0) {
          iVar3 = -0x7c36648f;
        }
        if (9 < y_40) {
          iVar3 = -0x3d281882;
        }
        if (y_40 < 10 != (uVar4 == 0)) {
          iVar3 = -0x7c36648f;
        }
joined_r0x00410a9d:
      } while (iVar3 < -0x3d281882);
    } while( true );
  }
  if (iVar3 == 0x633f2803) {
    return local_38;
  }
LAB_00410b10:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


char * quotearg_mem(char *arg,size_t argsize)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char *local_30;
  
  uVar2 = (x_47 + -1) * x_47;
  bVar4 = ((uVar2 ^ 0xfffffffe) & uVar2) == 0;
  bVar1 = y_48 < 10;
  uVar2 = 0xbd8f82d5;
  while( true ) {
    while (uVar2 = uVar2 & 0x3fffffff, 0x32c76ea0 < uVar2) {
      if (uVar2 == 0x32c76ea1) {
        local_30 = quotearg_n_options(L'\0',arg,argsize,&default_quoting_options);
        bVar5 = (~(~-x_47 * x_47) | 0xfffffffeU) == 0xffffffff;
        uVar2 = 0x93d52ab1;
        if (bVar5) {
          uVar2 = 0xa5c944ee;
        }
        if (9 < y_48) {
          uVar2 = 0x93d52ab1;
        }
        if (y_48 < 10 != bVar5) {
          uVar2 = 0xa5c944ee;
        }
      }
      else {
        if (uVar2 != 0x3d8f82d5) goto LAB_00410c50;
        uVar3 = 0x93d52ab1;
        if (bVar4 != bVar1) {
          uVar3 = 0xb2c76ea1;
        }
        uVar2 = uVar3;
        if (bVar1) {
          uVar2 = 0xb2c76ea1;
        }
        if (!bVar4) {
          uVar2 = uVar3;
        }
      }
    }
    if (uVar2 != 0x13d52ab1) break;
    quotearg_n_options(L'\0',arg,argsize,&default_quoting_options);
    uVar2 = 0xb2c76ea1;
  }
  if (uVar2 == 0x25c944ee) {
    return local_30;
  }
LAB_00410c50:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


char * quotearg_n_style(wchar_t n,quoting_style s,char *arg)

{
  char *pcVar1;
  quoting_options local_50;
  
  quoting_options_from_style(&local_50,s);
  pcVar1 = quotearg_n_options(n,arg,0xffffffffffffffff,&local_50);
  return pcVar1;
}


quoting_options *
quoting_options_from_style(quoting_options *__return_storage_ptr__,quoting_style style)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined (*pauVar13) [16];
  undefined (*local_18) [16];
  char local_b;
  undefined local_a;
  undefined local_9;
  
  local_9 = (~((x_51 + -1) * x_51) | 0xfffffffeU) == 0xffffffff;
  local_a = y_52 < 10;
  pauVar13 = (undefined (*) [16])&local_18;
  iVar11 = -0xe16c13f;
  do {
    while (iVar10 = iVar11, iVar10 < -0x5a6cf6b) {
      if (iVar10 == -0x43678386) {
        local_18 = pauVar13[-4];
        pauVar13[-2] = ZEXT816(0);
        pauVar13[-3] = ZEXT816(0);
        *local_18 = ZEXT816(0);
        *(undefined4 *)pauVar13[-1] = 0;
        local_b = style == custom_quoting_style;
        uVar12 = (x_51 + -1) * x_51;
        uVar12 = (uVar12 ^ 0xfffffffe) & uVar12;
        iVar11 = 0x4885f045;
        if (uVar12 == 0) {
          iVar11 = -0x37deb7ed;
        }
        if (9 < y_52) {
          iVar11 = 0x4885f045;
        }
        pauVar13 = local_18;
        if (y_52 < 10 != (uVar12 == 0)) {
          iVar11 = -0x37deb7ed;
        }
      }
      else if (iVar10 == -0x37deb7ed) {
        iVar11 = -0x5a6cf6b;
        if (local_b != '\0') {
          iVar11 = 0x595ec9d4;
        }
      }
      else {
        if (iVar10 != -0xe16c13f) goto LAB_00410e10;
        iVar11 = 0x4885f045;
        if ((bool)local_a) {
          iVar11 = -0x43678386;
        }
        if (!(bool)local_9) {
          iVar11 = 0x4885f045;
        }
        if (local_9 != local_a) {
          iVar11 = -0x43678386;
        }
      }
    }
    if (iVar10 == -0x5a6cf6b) {
      __return_storage_ptr__->style = style;
      *(undefined4 *)((long)&__return_storage_ptr__->right_quote + 4) = *(undefined4 *)local_18[3];
      iVar11 = *(int *)*local_18;
      uVar12 = *(uint *)(*local_18 + 4);
      uVar1 = *(uint *)(*local_18 + 8);
      uVar2 = *(uint *)(*local_18 + 0xc);
      uVar3 = *(uint *)local_18[1];
      uVar4 = *(uint *)(local_18[1] + 4);
      uVar5 = *(uint *)(local_18[1] + 8);
      uVar6 = *(uint *)(local_18[1] + 0xc);
      uVar7 = *(undefined4 *)(local_18[2] + 4);
      uVar8 = *(undefined4 *)(local_18[2] + 8);
      uVar9 = *(undefined4 *)(local_18[2] + 0xc);
      __return_storage_ptr__->quote_these_too[7] = *(uint *)local_18[2];
      *(undefined4 *)&__return_storage_ptr__->left_quote = uVar7;
      *(undefined4 *)((long)&__return_storage_ptr__->left_quote + 4) = uVar8;
      *(undefined4 *)&__return_storage_ptr__->right_quote = uVar9;
      __return_storage_ptr__->quote_these_too[3] = uVar3;
      __return_storage_ptr__->quote_these_too[4] = uVar4;
      __return_storage_ptr__->quote_these_too[5] = uVar5;
      __return_storage_ptr__->quote_these_too[6] = uVar6;
      __return_storage_ptr__->flags = iVar11;
      __return_storage_ptr__->quote_these_too[0] = uVar12;
      __return_storage_ptr__->quote_these_too[1] = uVar1;
      __return_storage_ptr__->quote_these_too[2] = uVar2;
      return __return_storage_ptr__;
    }
    iVar11 = -0x43678386;
  } while (iVar10 == 0x4885f045);
  if (iVar10 == 0x595ec9d4) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(pauVar13[-1] + 8) = 0x410e17;
    abort();
  }
LAB_00410e10:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Type propagation algorithm not settling */

char * quotearg_n_style_mem(wchar_t n,quoting_style s,char *arg,size_t argsize)

{
  uint uVar1;
  uint uVar2;
  quoting_options *pqVar3;
  quoting_options *pqVar4;
  uint uVar5;
  undefined auStack_48 [8];
  char *local_40;
  char local_32;
  char local_31;
  
  local_31 = ((~-x_53 * x_53 ^ 0xfffffffeU) & ~-x_53 * x_53) == 0;
  local_32 = y_54 < 10;
  pqVar4 = (quoting_options *)auStack_48;
  uVar1 = 0x6c2178a9;
  while( true ) {
    while (0x6c2178a8 < uVar1) {
      if (uVar1 == 0x6c2178a9) {
        uVar2 = 0x780a2119;
        if (local_31 != local_32) {
          uVar2 = 0x38d0242;
        }
        uVar1 = uVar2;
        if (local_32 != '\0') {
          uVar1 = 0x38d0242;
        }
        if (local_31 == '\0') {
          uVar1 = uVar2;
        }
      }
      else {
        if (uVar1 != 0x780a2119) goto LAB_00410f90;
        pqVar3 = (quoting_options *)((long)(pqVar4 + 0xfffffffffffffffe) + 0x30);
        *(undefined8 *)((long)(pqVar4 + 0xfffffffffffffffe) + 0x28) = 0x410e85;
        quoting_options_from_style(pqVar3,s);
        *(undefined8 *)((long)(pqVar4 + 0xfffffffffffffffe) + 0x28) = 0x410e96;
        quotearg_n_options(n,arg,argsize,pqVar3);
        pqVar4 = pqVar3;
        uVar1 = 0x38d0242;
      }
    }
    if (uVar1 != 0x38d0242) break;
    pqVar3 = (quoting_options *)((long)(pqVar4 + 0xfffffffffffffffe) + 0x30);
    *(undefined8 *)((long)(pqVar4 + 0xfffffffffffffffe) + 0x28) = 0x410ee0;
    quoting_options_from_style(pqVar3,s);
    *(undefined8 *)((long)(pqVar4 + 0xfffffffffffffffe) + 0x28) = 0x410ef1;
    local_40 = quotearg_n_options(n,arg,argsize,pqVar3);
    uVar2 = ~(~-x_53 * x_53) | 0xfffffffe;
    uVar5 = 0x780a2119;
    if (y_54 < 10 != (uVar2 == 0xffffffff)) {
      uVar5 = 0x154ec28d;
    }
    uVar1 = uVar5;
    if (uVar2 == 0xffffffff) {
      uVar1 = 0x154ec28d;
    }
    pqVar4 = pqVar3;
    if (9 < y_54) {
      uVar1 = uVar5;
    }
  }
  if (uVar1 == 0x154ec28d) {
    return local_40;
  }
LAB_00410f90:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00410ffd) */

char * quotearg_style(quoting_style s,char *arg)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  char *local_70;
  quoting_options local_68;
  
  bVar3 = (~((x_55 + -1) * x_55) | 0xfffffffeU) == 0xffffffff;
  bVar1 = y_56 < 10;
  uVar2 = 0x5782bb06;
LAB_00411040:
  while( true ) {
    if (uVar2 == 0x5782bb06) goto LAB_004110c0;
    if (uVar2 != 0x7c7cbb9f) break;
    quoting_options_from_style(&local_68,s);
    local_70 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,&local_68);
    bVar4 = (~(~-x_55 * x_55) | 0xfffffffeU) == 0xffffffff;
    uVar2 = 0x1c2e67e7;
    if (bVar4) {
      uVar2 = 0xefcd9528;
    }
    if (9 < y_56) {
      uVar2 = 0x1c2e67e7;
    }
    if (y_56 < 10 != bVar4) {
      uVar2 = 0xefcd9528;
    }
    if ((int)uVar2 < 0x5782bb06) goto LAB_0041102a;
  }
  goto LAB_00411110;
LAB_004110c0:
  uVar2 = 0x1c2e67e7;
  if (bVar1) {
    uVar2 = 0x7c7cbb9f;
  }
  if (!bVar3) {
    uVar2 = 0x1c2e67e7;
  }
  if (bVar3 != bVar1) {
    uVar2 = 0x7c7cbb9f;
  }
  if (uVar2 < 0x5782bb06) {
LAB_0041102a:
    if (uVar2 != 0x1c2e67e7) {
      if (uVar2 == 0xefcd9528) {
        return local_70;
      }
LAB_00411110:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    quoting_options_from_style(&local_68,s);
    quotearg_n_options(L'\0',arg,0xffffffffffffffff,&local_68);
    uVar2 = 0x7c7cbb9f;
  }
  goto LAB_00411040;
}


char * quotearg_style_mem(quoting_style s,char *arg,size_t argsize)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char *local_38;
  
  uVar2 = (x_57 + -1) * x_57;
  bVar5 = ((uVar2 ^ 0xfffffffe) & uVar2) == 0;
  bVar1 = y_58 < 10;
  uVar2 = 0xc5354ecc;
  while (uVar2 == 0xc5354ecc) {
    uVar2 = 0x5e495b4b;
    if (bVar1) {
      uVar2 = 0x1b94982e;
    }
    if (!bVar5) {
      uVar2 = 0x5e495b4b;
    }
    if (bVar5 != bVar1) {
      uVar2 = 0x1b94982e;
    }
    if (0x1b94982d < uVar2) {
      do {
        while (uVar2 != 0x1b94982e) {
          if (uVar2 != 0x5e495b4b) goto LAB_00411270;
          quotearg_n_style_mem(L'\0',s,arg,argsize);
          uVar2 = 0x1b94982e;
        }
        local_38 = quotearg_n_style_mem(L'\0',s,arg,argsize);
        uVar3 = (x_57 + -1) * x_57;
        uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
        uVar4 = 0x5e495b4b;
        if (y_58 < 10 != (uVar3 == 0)) {
          uVar4 = 0xe74294f1;
        }
        uVar2 = uVar4;
        if (uVar3 == 0) {
          uVar2 = 0xe74294f1;
        }
        if (9 < y_58) {
          uVar2 = uVar4;
        }
      } while (0x1b94982d < (int)uVar2);
    }
  }
  if (uVar2 == 0xe74294f1) {
    return local_38;
  }
LAB_00411270:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x0041155c) */
/* WARNING: Removing unreachable block (ram,0x004113c9) */
/* WARNING: Removing unreachable block (ram,0x00411711) */
/* WARNING: Type propagation algorithm not settling */

char * quotearg_char_mem(char *arg,size_t argsize,char ch)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  quoting_options *pqVar5;
  quoting_options *options;
  uint uVar6;
  ulong uVar7;
  undefined auStack_48 [8];
  char *local_40;
  uint local_38;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  
  options = (quoting_options *)auStack_48;
  local_33 = (~(~-x_59 * x_59) | 0xfffffffeU) == 0xffffffff;
  local_34 = y_60 < 10;
  uVar7 = (ulong)((byte)ch >> 5);
  iVar1 = 0x48e60ea5;
  do {
    if (iVar1 != 0x48e60ea5) {
      if (iVar1 == 0x5c9bfb1f) {
        return local_40;
      }
LAB_00411770:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar1 = -0x7acfe673;
    if (local_34 != '\0') {
      iVar1 = -0x54f0a2ef;
    }
    if (local_33 == '\0') {
      iVar1 = -0x7acfe673;
    }
    if (local_33 != local_34) {
      iVar1 = -0x54f0a2ef;
    }
joined_r0x00411325:
    pqVar5 = options;
  } while (0x48e60ea4 < iVar1);
LAB_0041132b:
  if (iVar1 == -0x7acfe673) {
    *(char **)((long)(pqVar5 + 0xffffffffffffffff) + 0x28) = default_quoting_options.right_quote;
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 0x18) =
         default_quoting_options.quote_these_too[6];
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 0x1c) =
         default_quoting_options.quote_these_too[7];
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 0x20) = (uint)default_quoting_options.left_quote
    ;
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 0x24) = default_quoting_options.left_quote._4_4_
    ;
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 8) = default_quoting_options.quote_these_too[2];
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 0xc) =
         default_quoting_options.quote_these_too[3];
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 0x10) =
         default_quoting_options.quote_these_too[4];
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 0x14) =
         default_quoting_options.quote_these_too[5];
    *(quoting_style *)((long)(pqVar5 + 0xfffffffffffffffe) + 0x30) = default_quoting_options.style;
    *(int *)((long)(pqVar5 + 0xfffffffffffffffe) + 0x34) = default_quoting_options.flags;
    pqVar5[0xffffffffffffffff].style = default_quoting_options.quote_these_too[0];
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 4) = default_quoting_options.quote_these_too[1];
    uVar3 = ~((x_23 + -1) * x_23) | 0xfffffffe;
    iVar1 = 0x1d52adf;
    if (y_24 < 10 != (uVar3 == 0xffffffff)) {
      iVar1 = -0xb87ff04;
    }
    local_31 = uVar3 == 0xffffffff;
    iVar2 = iVar1;
    if (uVar3 == 0xffffffff) {
      iVar2 = -0xb87ff04;
    }
    local_32 = y_24 < 10;
    if (9 < y_24) {
      iVar2 = iVar1;
    }
    iVar1 = 0x67317ce9;
    do {
      if (iVar1 != 0x1d52adf) {
        if (iVar1 == 0x67317ce9) {
          iVar1 = 0x1d52adf;
          if (local_32 != '\0') {
            iVar1 = -0x35521630;
          }
          if (local_31 == '\0') {
            iVar1 = 0x1d52adf;
          }
          if (local_31 == local_32) goto joined_r0x00411623;
          iVar1 = -0x35521630;
          goto joined_r0x00411623;
        }
LAB_00411760:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar3 = *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + uVar7 * 4);
      uVar6 = (~(uVar3 >> (ch & 0x1fU)) & 1) << (ch & 0x1fU);
      *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + uVar7 * 4) = ~uVar3 & uVar6 | ~uVar6 & uVar3;
      iVar1 = -0x35521630;
      do {
        if (iVar1 != -0x35521630) {
          if (iVar1 != -0xb87ff04) goto LAB_00411760;
          *(undefined8 *)((long)(pqVar5 + 0xfffffffffffffffe) + 0x28) = 0x4116e5;
          quotearg_n_options(L'\0',arg,argsize,
                             (quoting_options *)((long)(pqVar5 + 0xfffffffffffffffe) + 0x30U));
          iVar1 = -0x54f0a2ef;
          pqVar5 = (quoting_options *)((long)(pqVar5 + 0xfffffffffffffffe) + 0x30U);
          goto LAB_0041132b;
        }
        uVar3 = *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + uVar7 * 4);
        local_38 = uVar3 >> (ch & 0x1fU);
        local_38 = (local_38 ^ 0xfffffffe) & local_38;
        uVar6 = (local_38 & 0xfffffffe | ~local_38 & 1) << (ch & 0x1fU);
        *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + uVar7 * 4) = ~uVar3 & uVar6 | ~uVar6 & uVar3
        ;
        iVar1 = iVar2;
joined_r0x00411623:
      } while (iVar1 < 0x1d52adf);
    } while( true );
  }
  if (iVar1 == -0x54f0a2ef) {
    options = (quoting_options *)((long)(pqVar5 + 0xfffffffffffffffe) + 0x30);
    *(char **)((long)(pqVar5 + 0xffffffffffffffff) + 0x28) = default_quoting_options.right_quote;
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 0x18) =
         default_quoting_options.quote_these_too[6];
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 0x1c) =
         default_quoting_options.quote_these_too[7];
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 0x20) = (uint)default_quoting_options.left_quote
    ;
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 0x24) = default_quoting_options.left_quote._4_4_
    ;
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 8) = default_quoting_options.quote_these_too[2];
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 0xc) =
         default_quoting_options.quote_these_too[3];
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 0x10) =
         default_quoting_options.quote_these_too[4];
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 0x14) =
         default_quoting_options.quote_these_too[5];
    *(quoting_style *)((long)(pqVar5 + 0xfffffffffffffffe) + 0x30) = default_quoting_options.style;
    *(int *)((long)(pqVar5 + 0xfffffffffffffffe) + 0x34) = default_quoting_options.flags;
    pqVar5[0xffffffffffffffff].style = default_quoting_options.quote_these_too[0];
    *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + 4) = default_quoting_options.quote_these_too[1];
    local_31 = (~(~-x_23 * x_23) | 0xfffffffeU) == 0xffffffff;
    iVar1 = 0x1d52adf;
    if ((bool)local_31) {
      iVar1 = -0xb87ff04;
    }
    local_32 = y_24 < 10;
    if (9 < y_24) {
      iVar1 = 0x1d52adf;
    }
    if (y_24 < 10 != (bool)local_31) {
      iVar1 = -0xb87ff04;
    }
    iVar2 = 0x67317ce9;
    do {
      if (iVar2 != 0x1d52adf) {
        if (iVar2 == 0x67317ce9) {
          iVar4 = 0x1d52adf;
          if (local_31 != local_32) {
            iVar4 = -0x35521630;
          }
          iVar2 = iVar4;
          if (local_32 != '\0') {
            iVar2 = -0x35521630;
          }
          if (local_31 != '\0') goto joined_r0x004114c5;
          iVar2 = iVar4;
          goto joined_r0x004114c5;
        }
LAB_00411750:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar3 = *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + uVar7 * 4);
      uVar6 = uVar3 >> (ch & 0x1fU);
      uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
      uVar6 = (uVar6 & 0xfffffffe | ~uVar6 & 1) << (ch & 0x1fU);
      *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + uVar7 * 4) =
           (uVar3 & 0x8bf3a098 | ~uVar3 & 0x740c5f67) ^ (uVar6 & 0x8bf3a098 | ~uVar6 & 0x740c5f67);
      iVar2 = -0x35521630;
      do {
        if (iVar2 != -0x35521630) {
          if (iVar2 != -0xb87ff04) goto LAB_00411750;
          *(undefined8 *)((long)(pqVar5 + 0xfffffffffffffffe) + 0x28) = 0x411655;
          local_40 = quotearg_n_options(L'\0',arg,argsize,options);
          uVar3 = (x_59 + -1) * x_59;
          uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
          iVar1 = -0x7acfe673;
          if (uVar3 == 0) {
            iVar1 = 0x5c9bfb1f;
          }
          if (9 < y_60) {
            iVar1 = -0x7acfe673;
          }
          if (y_60 < 10 != (uVar3 == 0)) {
            iVar1 = 0x5c9bfb1f;
          }
          goto joined_r0x00411325;
        }
        uVar3 = *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + uVar7 * 4);
        local_38 = uVar3 >> (ch & 0x1fU) & 1;
        uVar6 = ((local_38 | ~local_38 & 0x6ce689e4) ^ 0x6ce689e5) << (ch & 0x1fU);
        *(uint *)((long)(pqVar5 + 0xffffffffffffffff) + uVar7 * 4) = ~uVar3 & uVar6 | ~uVar6 & uVar3
        ;
        iVar2 = iVar1;
joined_r0x004114c5:
      } while (iVar2 < 0x1d52adf);
    } while( true );
  }
  goto LAB_00411770;
}


/* WARNING: Removing unreachable block (ram,0x004117dc) */

char * quotearg_char(char *arg,char ch)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char *local_30;
  
  bVar4 = (~((x_61 + -1) * x_61) | 0xfffffffeU) == 0xffffffff;
  bVar1 = y_62 < 10;
  iVar2 = 0x5082975b;
  while( true ) {
    if (iVar2 == 0x5082975b) {
      iVar2 = 0x792f1350;
      if (bVar1) {
        iVar2 = -0x492e6713;
      }
      if (!bVar4) {
        iVar2 = 0x792f1350;
      }
      if (bVar4 == bVar1) goto joined_r0x0041189a;
      iVar2 = -0x492e6713;
      goto joined_r0x0041189a;
    }
    if (iVar2 != 0x792f1350) break;
    quotearg_char_mem(arg,0xffffffffffffffff,ch);
    iVar2 = -0x492e6713;
    do {
      if (iVar2 != -0x492e6713) {
        if (iVar2 == -0x26f354fd) {
          return local_30;
        }
        goto LAB_004118c0;
      }
      local_30 = quotearg_char_mem(arg,0xffffffffffffffff,ch);
      uVar3 = (x_61 + -1) * x_61;
      uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
      iVar2 = 0x792f1350;
      if (uVar3 == 0) {
        iVar2 = -0x26f354fd;
      }
      if (9 < y_62) {
        iVar2 = 0x792f1350;
      }
      if (y_62 < 10 != (uVar3 == 0)) {
        iVar2 = -0x26f354fd;
      }
joined_r0x0041189a:
    } while (iVar2 < 0x5082975b);
  }
LAB_004118c0:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00411924) */

char * quotearg_colon(char *arg)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char *local_28;
  
  uVar3 = (x_61 + -1) * x_61;
  bVar4 = ((uVar3 ^ 0xfffffffe) & uVar3) == 0;
  bVar1 = y_62 < 10;
  iVar2 = 0x5082975b;
  while( true ) {
    if (iVar2 == 0x5082975b) {
      iVar2 = 0x792f1350;
      if (bVar1) {
        iVar2 = -0x492e6713;
      }
      if (!bVar4) {
        iVar2 = 0x792f1350;
      }
      if (bVar4 == bVar1) goto joined_r0x004119f8;
      iVar2 = -0x492e6713;
      goto joined_r0x004119f8;
    }
    if (iVar2 != 0x792f1350) break;
    quotearg_char_mem(arg,0xffffffffffffffff,':');
    iVar2 = -0x492e6713;
    do {
      if (iVar2 != -0x492e6713) {
        if (iVar2 == -0x26f354fd) {
          return local_28;
        }
        goto LAB_00411a20;
      }
      local_28 = quotearg_char_mem(arg,0xffffffffffffffff,':');
      uVar3 = (x_61 + -1) * x_61;
      uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
      iVar2 = 0x792f1350;
      if (uVar3 == 0) {
        iVar2 = -0x26f354fd;
      }
      if (9 < y_62) {
        iVar2 = 0x792f1350;
      }
      if (y_62 < 10 != (uVar3 == 0)) {
        iVar2 = -0x26f354fd;
      }
joined_r0x004119f8:
    } while (iVar2 < 0x5082975b);
  }
LAB_00411a20:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


char * quotearg_colon_mem(char *arg,size_t argsize)

{
  char *pcVar1;
  
  pcVar1 = quotearg_char_mem(arg,argsize,':');
  return pcVar1;
}


/* WARNING: Removing unreachable block (ram,0x00411ac0) */

char * quotearg_n_style_colon(wchar_t n,quoting_style s,char *arg)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  quoting_options local_58;
  
  quoting_options_from_style(&local_58,s);
  uVar3 = ~(~-x_23 * x_23) | 0xfffffffe;
  iVar5 = 0x1d52adf;
  if (y_24 < 10 != (uVar3 == 0xffffffff)) {
    iVar5 = -0xb87ff04;
  }
  bVar6 = uVar3 == 0xffffffff;
  iVar1 = -0xb87ff04;
  if (!bVar6) {
    iVar1 = iVar5;
  }
  if (9 < y_24) {
    iVar1 = iVar5;
  }
  iVar5 = 0x67317ce9;
  do {
    if (iVar5 != 0x1d52adf) {
      if (iVar5 == 0x67317ce9) {
        iVar5 = 0x1d52adf;
        if (y_24 < 10) {
          iVar5 = -0x35521630;
        }
        if (!bVar6) {
          iVar5 = 0x1d52adf;
        }
        if (bVar6 == y_24 < 10) goto joined_r0x00411ba0;
        iVar5 = -0x35521630;
        goto joined_r0x00411ba0;
      }
LAB_00411be0:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    local_58.quote_these_too[1] =
         local_58.quote_these_too[1] & 0x4000000 |
         (local_58.quote_these_too[1] & 0xbaee87fd | ~local_58.quote_these_too[1] & 0x45117802) ^
         0x41117802;
    iVar5 = -0x35521630;
    do {
      if (iVar5 != -0x35521630) {
        if (iVar5 == -0xb87ff04) {
          pcVar2 = quotearg_n_options(n,arg,0xffffffffffffffff,&local_58);
          return pcVar2;
        }
        goto LAB_00411be0;
      }
      uVar4 = ((local_58.quote_these_too[1] >> 0x1a ^ 0x3e) & local_58.quote_these_too[1] >> 0x1a)
              << 0x1a;
      uVar3 = local_58.quote_these_too[1] & 0x3329cb58 | ~local_58.quote_these_too[1] & 0xccd634a7;
      local_58.quote_these_too[1] = ~uVar4 & (uVar3 ^ 0xc8d634a7) | (uVar3 ^ 0x3729cb58) & uVar4;
      iVar5 = iVar1;
joined_r0x00411ba0:
    } while (iVar5 < 0x1d52adf);
  } while( true );
}


char * quotearg_n_custom(wchar_t n,char *left_quote,char *right_quote,char *arg)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_custom_mem(n,left_quote,right_quote,arg,0xffffffffffffffff);
  return pcVar1;
}


/* WARNING: Removing unreachable block (ram,0x00411c82) */
/* WARNING: Removing unreachable block (ram,0x0041209a) */
/* WARNING: Type propagation algorithm not settling */

char * quotearg_n_custom_mem(wchar_t n,char *left_quote,char *right_quote,char *arg,size_t argsize)

{
  quoting_options *pqVar1;
  int iVar2;
  int iVar3;
  quoting_options *pqVar4;
  uint uVar5;
  quoting_options *pqVar6;
  quoting_options *pqVar7;
  quoting_options *pqVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  char *local_58;
  char *local_50;
  int local_44;
  quoting_options *local_40;
  char local_32;
  char local_31;
  
  uVar5 = (x_71 + -1) * x_71;
  pqVar7 = (quoting_options *)(ulong)uVar5;
  local_31 = ((uVar5 ^ 0xfffffffe) & uVar5) == 0;
  local_32 = y_72 < 10;
  local_44 = -0x3020c34b;
  if (left_quote == (char *)0x0) {
    local_44 = -0x186b41da;
  }
  if ((left_quote != (char *)0x0) != (right_quote != (char *)0x0)) {
    local_44 = -0x186b41da;
  }
  iVar2 = -0x7d2587ba;
  pqVar8 = (quoting_options *)&local_58;
  local_50 = arg;
  iVar10 = local_44;
  do {
    do {
      if (iVar2 == -0x7d2587ba) {
        iVar3 = 0x4c6dbf47;
        if (local_31 != local_32) {
          iVar3 = -0x74908b99;
        }
        iVar2 = iVar3;
        if (local_32 != '\0') {
          iVar2 = -0x74908b99;
        }
        if (local_31 == '\0') {
          iVar2 = iVar3;
        }
      }
      else {
        if (iVar2 != -0x74908b99) goto LAB_004120e0;
        pqVar1 = (quoting_options *)((long)(pqVar8 + 0xfffffffffffffffe) + 0x30);
        *(char **)((long)(pqVar8 + 0xffffffffffffffff) + 0x28) = default_quoting_options.right_quote
        ;
        *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 0x18) =
             default_quoting_options.quote_these_too[6];
        *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 0x1c) =
             default_quoting_options.quote_these_too[7];
        *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 0x20) =
             (uint)default_quoting_options.left_quote;
        *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 0x24) =
             default_quoting_options.left_quote._4_4_;
        *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 8) =
             default_quoting_options.quote_these_too[2];
        *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 0xc) =
             default_quoting_options.quote_these_too[3];
        *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 0x10) =
             default_quoting_options.quote_these_too[4];
        *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 0x14) =
             default_quoting_options.quote_these_too[5];
        *(quoting_style *)((long)(pqVar8 + 0xfffffffffffffffe) + 0x30) =
             default_quoting_options.style;
        *(int *)((long)(pqVar8 + 0xfffffffffffffffe) + 0x34) = default_quoting_options.flags;
        pqVar8[0xffffffffffffffff].style = default_quoting_options.quote_these_too[0];
        *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 4) =
             default_quoting_options.quote_these_too[1];
        iVar2 = 0x67e980e3;
        while( true ) {
          do {
            iVar3 = iVar2;
            pqVar6 = pqVar7;
            pqVar7 = pqVar1;
            iVar2 = 0x781e475b;
          } while (iVar3 == 0x67e980e3);
          while( true ) {
            while (iVar9 = iVar3, -0x1e99fb9f < iVar9) {
              if (iVar9 < 0x583a6c17) {
                iVar3 = 0x583a6c17;
                if (iVar9 != -0x1e99fb9e) {
                  if (iVar9 == -0x186b41da) {
                    /* WARNING: Subroutine does not return */
                    *(undefined8 *)((long)(pqVar8 + 0xfffffffffffffffe) + 0x28) = 0x4120e7;
                    abort();
                  }
                  goto LAB_004120b0;
                }
              }
              else if (iVar9 == 0x583a6c17) {
                uVar5 = (x_27 + -1) * x_27;
                uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
                iVar3 = -0x1e99fb9e;
                if (uVar5 == 0) {
                  iVar3 = -0x2784e89e;
                }
                if (9 < y_28) {
                  iVar3 = -0x1e99fb9e;
                }
                if (y_28 < 10 != (uVar5 == 0)) {
                  iVar3 = -0x2784e89e;
                }
              }
              else {
                if (iVar9 != 0x781e475b) goto LAB_004120b0;
                local_40 = pqVar6;
                pqVar6->style = custom_quoting_style;
                iVar3 = iVar10;
              }
            }
            if (iVar9 != -0x5626feb9) break;
            uVar5 = (x_27 + -1) * x_27;
            uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
            iVar3 = -0x1e99fb9e;
            if (uVar5 == 0) {
              iVar3 = 0x583a6c17;
            }
            if (9 < y_28) {
              iVar3 = -0x1e99fb9e;
            }
            if (y_28 < 10 != (uVar5 == 0)) {
              iVar3 = 0x583a6c17;
            }
          }
          if (iVar9 == -0x3020c34b) break;
          if (iVar9 != -0x2784e89e) {
LAB_004120b0:
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          pqVar7 = &default_quoting_options;
        }
        local_40->left_quote = left_quote;
        local_40->right_quote = right_quote;
        *(undefined8 *)((long)(pqVar8 + 0xfffffffffffffffe) + 0x28) = 0x411e58;
        local_58 = quotearg_n_options(n,local_50,argsize,pqVar1);
        uVar5 = ~(~-x_71 * x_71) | 0xfffffffe;
        pqVar7 = (quoting_options *)0xb0e4a161;
        iVar3 = 0x4c6dbf47;
        if (y_72 < 10 != (uVar5 == 0xffffffff)) {
          iVar3 = -0x4f1b5e9f;
        }
        iVar2 = iVar3;
        if (uVar5 == 0xffffffff) {
          iVar2 = -0x4f1b5e9f;
        }
        pqVar8 = pqVar1;
        iVar10 = local_44;
        if (9 < y_72) {
          iVar2 = iVar3;
        }
      }
    } while (iVar2 < -0x4f1b5e9f);
    if (iVar2 != 0x4c6dbf47) {
      if (iVar2 == -0x4f1b5e9f) {
        return local_58;
      }
LAB_004120e0:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    pqVar1 = (quoting_options *)((long)(pqVar8 + 0xfffffffffffffffe) + 0x30);
    *(char **)((long)(pqVar8 + 0xffffffffffffffff) + 0x28) = default_quoting_options.right_quote;
    *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 0x18) =
         default_quoting_options.quote_these_too[6];
    *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 0x1c) =
         default_quoting_options.quote_these_too[7];
    *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 0x20) = (uint)default_quoting_options.left_quote
    ;
    *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 0x24) = default_quoting_options.left_quote._4_4_
    ;
    *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 8) = default_quoting_options.quote_these_too[2];
    *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 0xc) =
         default_quoting_options.quote_these_too[3];
    *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 0x10) =
         default_quoting_options.quote_these_too[4];
    *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 0x14) =
         default_quoting_options.quote_these_too[5];
    *(quoting_style *)((long)(pqVar8 + 0xfffffffffffffffe) + 0x30) = default_quoting_options.style;
    *(int *)((long)(pqVar8 + 0xfffffffffffffffe) + 0x34) = default_quoting_options.flags;
    pqVar8[0xffffffffffffffff].style = default_quoting_options.quote_these_too[0];
    *(uint *)((long)(pqVar8 + 0xffffffffffffffff) + 4) = default_quoting_options.quote_these_too[1];
    pqVar6 = (quoting_options *)default_quoting_options.right_quote;
    iVar2 = 0x67e980e3;
    while( true ) {
      do {
        iVar3 = iVar2;
        pqVar4 = pqVar6;
        pqVar6 = pqVar1;
        iVar2 = 0x781e475b;
      } while (iVar3 == 0x67e980e3);
      while( true ) {
        while (iVar9 = iVar3, -0x1e99fb9f < iVar9) {
          if (iVar9 < 0x583a6c17) {
            iVar3 = 0x583a6c17;
            if (iVar9 != -0x1e99fb9e) {
              if (iVar9 == -0x186b41da) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)((long)(pqVar8 + 0xfffffffffffffffe) + 0x28) = 0x4120ec;
                abort();
              }
              goto LAB_004120c0;
            }
          }
          else if (iVar9 == 0x583a6c17) {
            uVar5 = (x_27 + -1) * x_27;
            uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
            pqVar7 = (quoting_options *)((ulong)pqVar7 & 0xffffffffffffff00 | (ulong)(uVar5 == 0));
            iVar3 = -0x1e99fb9e;
            if (uVar5 == 0) {
              iVar3 = -0x2784e89e;
            }
            if (9 < y_28) {
              iVar3 = -0x1e99fb9e;
            }
            if (y_28 < 10 != (uVar5 == 0)) {
              iVar3 = -0x2784e89e;
            }
          }
          else {
            if (iVar9 != 0x781e475b) goto LAB_004120c0;
            local_40 = pqVar4;
            pqVar4->style = custom_quoting_style;
            iVar3 = iVar10;
          }
        }
        if (iVar9 != -0x5626feb9) break;
        bVar11 = (~(~-x_27 * x_27) | 0xfffffffeU) == 0xffffffff;
        pqVar7 = (quoting_options *)((ulong)pqVar7 & 0xffffffffffffff00 | (ulong)bVar11);
        iVar3 = -0x1e99fb9e;
        if (bVar11) {
          iVar3 = 0x583a6c17;
        }
        if (9 < y_28) {
          iVar3 = -0x1e99fb9e;
        }
        if (y_28 < 10 != bVar11) {
          iVar3 = 0x583a6c17;
        }
      }
      if (iVar9 == -0x3020c34b) break;
      if (iVar9 != -0x2784e89e) {
LAB_004120c0:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      pqVar6 = &default_quoting_options;
    }
    local_40->left_quote = left_quote;
    local_40->right_quote = right_quote;
    *(undefined8 *)((long)(pqVar8 + 0xfffffffffffffffe) + 0x28) = 0x412068;
    quotearg_n_options(n,local_50,argsize,pqVar1);
    iVar2 = -0x74908b99;
    pqVar8 = pqVar1;
    iVar10 = local_44;
  } while( true );
}


char * quotearg_custom(char *left_quote,char *right_quote,char *arg)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_custom_mem(L'\0',left_quote,right_quote,arg,0xffffffffffffffff);
  return pcVar1;
}


char * quotearg_custom_mem(char *left_quote,char *right_quote,char *arg,size_t argsize)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_custom_mem(L'\0',left_quote,right_quote,arg,argsize);
  return pcVar1;
}


char * quote_n_mem(wchar_t n,char *arg,size_t argsize)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_options(n,arg,argsize,&quote_quoting_options);
  return pcVar1;
}


char * quote_mem(char *arg,size_t argsize)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_options(L'\0',arg,argsize,&quote_quoting_options);
  return pcVar1;
}


char * quote_n(wchar_t n,char *arg)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_options(n,arg,0xffffffffffffffff,&quote_quoting_options);
  return pcVar1;
}


/* WARNING: Removing unreachable block (ram,0x004121d8) */

char * quote(char *arg)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char *local_30;
  
  bVar5 = (~((x_83 + -1) * x_83) | 0xfffffffeU) == 0xffffffff;
  bVar1 = y_84 < 10;
  iVar2 = 0xadedabd;
  while( true ) {
    if (iVar2 == 0xadedabd) {
      iVar2 = 0x72c81c9c;
      if (bVar1) {
        iVar2 = -0x6763a470;
      }
      if (!bVar5) {
        iVar2 = 0x72c81c9c;
      }
      if (bVar5 == bVar1) goto joined_r0x004122ba;
      iVar2 = -0x6763a470;
      goto joined_r0x004122ba;
    }
    if (iVar2 != 0x72c81c9c) break;
    quotearg_n_options(L'\0',arg,0xffffffffffffffff,&quote_quoting_options);
    iVar2 = -0x6763a470;
    do {
      if (iVar2 != -0x6763a470) {
        if (iVar2 == -0x5a6d1fc7) {
          return local_30;
        }
        goto LAB_004122e0;
      }
      local_30 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,&quote_quoting_options);
      uVar3 = (~-x_83 * x_83 ^ 0xfffffffeU) & ~-x_83 * x_83;
      iVar4 = 0x72c81c9c;
      if (y_84 < 10 != (uVar3 == 0)) {
        iVar4 = -0x5a6d1fc7;
      }
      iVar2 = iVar4;
      if (uVar3 == 0) {
        iVar2 = -0x5a6d1fc7;
      }
      if (9 < y_84) {
        iVar2 = iVar4;
      }
joined_r0x004122ba:
    } while (iVar2 < 0xadedabd);
  }
LAB_004122e0:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00412340) */

char * gettext_quote(char *msgid,quoting_style s)

{
  char cVar1;
  uint uVar2;
  wchar_t wVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char *unaff_R14;
  bool bVar10;
  undefined8 uVar11;
  char in_stack_ffffffffffffffa8;
  char *local_48;
  char *local_40;
  char *local_38;
  
  uVar11 = 0x412312;
  pcVar5 = (char *)dcgettext(0,msgid,5);
  pcVar8 = "\'";
  if (s == clocale_quoting_style) {
    pcVar8 = "\"";
  }
  uVar2 = 0xbe6c9f36;
LAB_0041235b:
  do {
    if ((int)uVar2 < -0x3345e9c8) {
      if (uVar2 == 0x86ac76b4) {
        uVar2 = 0x7a3afcb8;
        unaff_R14 = pcVar5;
        goto LAB_004124d0;
      }
      if (uVar2 == 0xbe6c9f36) {
        bVar10 = pcVar5 == msgid;
        uVar2 = 0xccba1638;
        uVar4 = 0x86ac76b4;
        goto LAB_004124aa;
      }
      if (uVar2 == 0xc051645f) {
        uVar2 = 0x7a3afcb8;
        unaff_R14 = local_40;
        goto LAB_004124d0;
      }
    }
    else if ((int)uVar2 < -0x1f045380) {
      if (uVar2 == 0xccba1638) {
        uVar11 = 0x41243b;
        local_48 = locale_charset();
        wVar3 = strcaseeq0(local_48,"UTF-8",'U','T','F','-','8','\0','\0',(char)uVar11,
                           in_stack_ffffffffffffffa8);
        bVar10 = wVar3 == L'\0';
        uVar2 = 0xd7a6aebc;
        uVar4 = 0x2c217786;
      }
      else {
        if (uVar2 != 0xd7a6aebc) goto joined_r0x004124b2;
        wVar3 = strcaseeq0(local_48,"GB18030",'G','B','1','8','0','3','0',(char)uVar11,
                           in_stack_ffffffffffffffa8);
        bVar10 = wVar3 == L'\0';
        uVar2 = 0x7353a422;
        uVar4 = 0xfa24d54d;
      }
LAB_004124aa:
      if (!bVar10) {
        uVar2 = uVar4;
      }
    }
    else {
      if (uVar2 == 0xe0fbac80) {
        uVar2 = 0x30860f98;
        goto LAB_004124d0;
      }
      if (uVar2 == 0xfa24d54d) {
        cVar1 = *msgid;
        unaff_R14 = &DAT_00419482;
        pcVar6 = &DAT_0041947e;
        goto LAB_00412345;
      }
    }
joined_r0x004124b2:
    if (0xe607aa4 < (int)uVar2) {
LAB_004124d0:
      while( true ) {
        while (0x30860f97 < (int)uVar2) {
          if ((int)uVar2 < 0x7353a422) {
            if (uVar2 == 0x30860f98) {
              uVar7 = ~(~-x_85 * x_85) | 0xfffffffe;
              bVar10 = y_86 < 10 == (uVar7 == 0xffffffff);
              uVar4 = 0xe0fbac80;
              uVar9 = 0x3cb18c9e;
              goto LAB_00412667;
            }
            if (uVar2 == 0x3cb18c9e) {
              return local_38;
            }
            goto joined_r0x004124b2;
          }
          if (uVar2 != 0x7353a422) {
            if (uVar2 == 0x7a3afcb8) {
              uVar4 = (~-x_85 * x_85 ^ 0xfffffffeU) & ~-x_85 * x_85;
              uVar2 = 0xe0fbac80;
              if (uVar4 == 0) {
                uVar2 = 0x30860f98;
              }
              if (9 < y_86) {
                uVar2 = 0xe0fbac80;
              }
              local_38 = unaff_R14;
              if (y_86 < 10 != (uVar4 == 0)) {
                uVar2 = 0x30860f98;
              }
              goto joined_r0x0041253e;
            }
            goto joined_r0x004124b2;
          }
          uVar4 = (x_85 + -1) * x_85;
          uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
          uVar2 = 0x18d75b3e;
          if (uVar4 == 0) {
            uVar2 = 0xe607aa5;
          }
          if (9 < y_86) {
            uVar2 = 0x18d75b3e;
          }
          if (y_86 < 10 != (uVar4 == 0)) {
            uVar2 = 0xe607aa5;
          }
          if (uVar2 < 0xe607aa5) goto LAB_0041235b;
        }
        if (uVar2 != 0xe607aa5) break;
        uVar7 = ~((x_85 + -1) * x_85) | 0xfffffffe;
        bVar10 = y_86 < 10 == (uVar7 == 0xffffffff);
        uVar4 = 0x18d75b3e;
        uVar9 = 0xc051645f;
        local_40 = pcVar8;
LAB_00412667:
        if (!bVar10) {
          uVar4 = uVar9;
        }
        uVar2 = uVar4;
        if (uVar7 == 0xffffffff) {
          uVar2 = uVar9;
        }
        if (9 < y_86) {
          uVar2 = uVar4;
        }
joined_r0x0041253e:
        if ((int)uVar2 < 0xe607aa5) goto LAB_0041235b;
      }
      if (uVar2 == 0x18d75b3e) {
        uVar2 = 0xe607aa5;
        goto LAB_004124d0;
      }
      if (uVar2 == 0x2c217786) {
        cVar1 = *msgid;
        unaff_R14 = &DAT_00419472;
        pcVar6 = &DAT_0041946e;
LAB_00412345:
        if (cVar1 == '`') {
          unaff_R14 = pcVar6;
        }
        uVar2 = 0x7a3afcb8;
      }
      goto joined_r0x004124b2;
    }
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x004129a9) */
/* WARNING: Removing unreachable block (ram,0x004126f6) */
/* WARNING: Removing unreachable block (ram,0x004127ad) */

wchar_t strcaseeq0(char *s1,char *s2,char s20,char s21,char s22,char s23,char s24,char s25,char s26,
                  char s27,char s28)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined7 in_register_00000011;
  int iVar5;
  uint uVar6;
  wchar_t unaff_R15D;
  bool bVar7;
  bool bVar8;
  char in_stack_ffffffffffffffb8;
  char local_45;
  int local_44;
  char s23_00;
  uint local_3c;
  wchar_t local_34;
  
  uVar6 = (uint)(byte)s23;
  iVar4 = (int)CONCAT71(in_register_00000011,s20);
  bVar7 = (~((x_87 + -1) * x_87) | 0xfffffffeU) == 0xffffffff;
  bVar1 = y_88 < 10;
  iVar2 = -0x76c6755f;
LAB_0041271b:
  do {
    s23_00 = (char)uVar6;
    if (-0x4e647f29 < iVar2) {
      if (iVar2 < -0x1c3e1f8a) {
        if (iVar2 == -0x4e647f28) {
          local_34 = strcaseeq1(s1,s2,s21,s22,s23_00,s24,s25,s26,in_stack_ffffffffffffffb8,s23_00);
          uVar3 = (~-x_87 * x_87 ^ 0xfffffffeU) & ~-x_87 * x_87;
          iVar5 = -0x58da43b5;
          if (y_88 < 10 != (uVar3 == 0)) {
            iVar5 = 0x1d6f6e31;
          }
          iVar2 = iVar5;
          if (uVar3 == 0) {
            iVar2 = 0x1d6f6e31;
          }
          if (9 < y_88) {
            iVar2 = iVar5;
          }
        }
        else if (iVar2 == -0x275216fe) {
          iVar5 = local_3c - local_44;
          goto LAB_004126fb;
        }
      }
      else if (iVar2 == -0x1c3e1f8a) {
        iVar2 = 0xf083ba6;
        if (local_44 == 0) {
          iVar2 = -0xb28c67c;
        }
      }
      else if (iVar2 == -0xef35da9) {
        local_45 = iVar4 - 0x41U < 0x1a;
        local_3c = (uint)*s1;
        uVar3 = ~(~-x_87 * x_87) | 0xfffffffe;
        iVar5 = 0x18b616c3;
        if (y_88 < 10 != (uVar3 == 0xffffffff)) {
          iVar5 = -0x7b8eee39;
        }
        iVar2 = iVar5;
        if (uVar3 == 0xffffffff) {
          iVar2 = -0x7b8eee39;
        }
        local_44 = iVar4;
        if (9 < y_88) {
          iVar2 = iVar5;
        }
      }
joined_r0x004128e0:
      do {
        if (iVar2 < -0xb28c67c) goto LAB_0041271b;
        while( true ) {
          while (iVar2 < 0x1d6f6e31) {
            if (iVar2 != -0xb28c67c) {
              if (iVar2 == 0xf083ba6) {
                bVar8 = (~(~-x_87 * x_87) | 0xfffffffeU) == 0xffffffff;
                iVar2 = -0x58da43b5;
                if (bVar8) {
                  iVar2 = -0x4e647f28;
                }
                if (9 < y_88) {
                  iVar2 = -0x58da43b5;
                }
                if (y_88 < 10 != bVar8) {
                  iVar2 = -0x4e647f28;
                }
              }
              else if (iVar2 == 0x18b616c3) {
                iVar2 = -0xef35da9;
                goto LAB_0041271b;
              }
              goto joined_r0x004128e0;
            }
            unaff_R15D = L'\x01';
            iVar2 = 0x2941364e;
          }
          if (0x2941364d < iVar2) break;
          if (iVar2 == 0x1d6f6e31) {
            iVar2 = 0x2941364e;
            unaff_R15D = local_34;
          }
          else {
            if (iVar2 != 0x24605fc8) goto joined_r0x004128e0;
            iVar2 = 0x2941364e;
            unaff_R15D = L'\0';
          }
        }
        if (iVar2 == 0x6307c42f) {
          iVar5 = ((local_3c ^ 0x20) & local_3c) - local_44;
LAB_004126fb:
          iVar2 = 0x24605fc8;
          if (iVar5 == 0) {
            iVar2 = -0x1c3e1f8a;
          }
        }
        else if (iVar2 == 0x2941364e) {
          return unaff_R15D;
        }
      } while( true );
    }
    if (iVar2 == -0x7b8eee39) {
      iVar2 = -0x275216fe;
      if (local_45 != '\0') {
        iVar2 = 0x6307c42f;
      }
      goto joined_r0x004128e0;
    }
    if (iVar2 == -0x76c6755f) {
      iVar5 = 0x18b616c3;
      if (bVar7 != bVar1) {
        iVar5 = -0xef35da9;
      }
      iVar2 = iVar5;
      if (bVar1) {
        iVar2 = -0xef35da9;
      }
      if (!bVar7) {
        iVar2 = iVar5;
      }
      goto joined_r0x004128e0;
    }
    if (iVar2 != -0x58da43b5) goto joined_r0x004128e0;
    strcaseeq1(s1,s2,s21,s22,s23_00,s24,s25,s26,in_stack_ffffffffffffffb8,s23_00);
    iVar2 = -0x4e647f28;
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00413263) */
/* WARNING: Removing unreachable block (ram,0x004133d3) */
/* WARNING: Removing unreachable block (ram,0x00412d05) */
/* WARNING: Removing unreachable block (ram,0x0041341f) */
/* WARNING: Removing unreachable block (ram,0x0041356d) */
/* WARNING: Removing unreachable block (ram,0x004136d7) */
/* WARNING: Removing unreachable block (ram,0x00413597) */
/* WARNING: Removing unreachable block (ram,0x00412df7) */
/* WARNING: Removing unreachable block (ram,0x00412de2) */
/* WARNING: Removing unreachable block (ram,0x00413183) */
/* WARNING: Removing unreachable block (ram,0x004131b3) */
/* WARNING: Removing unreachable block (ram,0x004133c0) */
/* WARNING: Removing unreachable block (ram,0x00412fa8) */
/* WARNING: Removing unreachable block (ram,0x00413360) */
/* WARNING: Removing unreachable block (ram,0x00412be6) */
/* WARNING: Type propagation algorithm not settling */

wchar_t strcaseeq1(char *s1,char *s2,char s21,char s22,char s23,char s24,char s25,char s26,char s27,
                  char s28)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  wchar_t wVar5;
  uint uVar6;
  uint uVar7;
  undefined7 in_register_00000009;
  int iVar8;
  undefined7 in_register_00000011;
  wchar_t unaff_EBP;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined7 in_register_00000081;
  undefined8 uVar14;
  undefined3 in_register_00000089;
  uint uVar15;
  uint uVar16;
  wchar_t unaff_R13D;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  char local_6e;
  char local_69;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  wchar_t local_3c;
  wchar_t local_38;
  wchar_t local_34;
  
  uVar15 = CONCAT31(in_register_00000089,s24);
  iVar13 = (int)CONCAT71(in_register_00000081,s23);
  uVar6 = (uint)CONCAT71(in_register_00000009,s22);
  iVar8 = (int)CONCAT71(in_register_00000011,s21);
  bVar1 = s1[1];
  wVar5 = -iVar8 & 0xffffff00U | (uint)bVar1;
  uVar7 = 0xfc475e8e;
  uVar16 = uVar15;
LAB_004135a0:
  do {
    if ((int)uVar7 < -0x655309a0) {
      if (uVar7 == 0x8a90e0b4) {
        uVar7 = 0x2af4ec4f;
        wVar5 = L'\0';
        break;
      }
      if (uVar7 == 0x8c6070f8) {
        uVar10 = ~((x_89 + -1) * x_89) | 0xfffffffe;
        unaff_EBP = L'\x8a90e0b4';
        uVar12 = 0x3108798;
        if (y_90 < 10 != (uVar10 == 0xffffffff)) {
          uVar12 = 0x8a90e0b4;
        }
        uVar7 = uVar12;
        if (uVar10 == 0xffffffff) {
          uVar7 = 0x8a90e0b4;
        }
        if (9 < y_90) {
          uVar7 = uVar12;
        }
      }
    }
    else {
      if (uVar7 == 0x9aacf660) {
        iVar4 = local_54 - iVar8;
        goto LAB_00412ad3;
      }
      if (uVar7 == 0xb758e844) {
        bVar17 = (~((x_89 + -1) * x_89) | 0xfffffffeU) == 0xffffffff;
        uVar7 = 0x3108798;
        if (bVar17) {
          uVar7 = 0x8c6070f8;
        }
        if (9 < y_90) {
          uVar7 = 0x3108798;
        }
        if (y_90 < 10 != bVar17) {
          uVar7 = 0x8c6070f8;
        }
      }
      else if (uVar7 == 0xfc475e8e) {
        local_54 = (uint)(char)bVar1;
        uVar7 = 0x9aacf660;
        if (iVar8 - 0x41U < 0x1a) {
          uVar7 = 0x29b3d8d0;
        }
      }
    }
joined_r0x004135ef:
  } while ((int)uVar7 < 0x3108798);
LAB_00412b0c:
  while (0x3658f17d < (int)uVar7) {
    if (uVar7 == 0x3658f17e) {
      uVar7 = 0x51cdbc9b;
      if (iVar8 == 0) {
        uVar7 = 0x45001bcc;
      }
      if (uVar7 < 0x3108798) goto LAB_004135a0;
    }
    else {
      if (uVar7 != 0x45001bcc) {
        if (uVar7 == 0x51cdbc9b) {
          cVar2 = s1[2];
          iVar4 = -0xba5cea1;
LAB_004133e0:
          if (iVar4 < 0x38a3ad74) {
            if (iVar4 == -0xba5cea1) {
              local_58 = (uint)cVar2;
              iVar4 = 0x306f1e2d;
              iVar11 = 0x4af20083;
              cVar3 = uVar6 - 0x41 < 0x1a;
            }
            else {
              if (iVar4 != 0x2565439d) {
                if (iVar4 == 0x306f1e2d) {
                  bVar17 = (~(~-x_91 * x_91) | 0xfffffffeU) == 0xffffffff;
                  iVar11 = -0x77a6a282;
                  iVar4 = -0x79104e48;
                  if (bVar17) {
                    iVar4 = -0x77a6a282;
                  }
                  if (9 < y_92) {
                    iVar4 = -0x79104e48;
                  }
                  bVar17 = y_92 < 10 == bVar17;
                  goto LAB_0041348f;
                }
                goto joined_r0x00413503;
              }
              iVar4 = 0x4666ae97;
              iVar11 = 0x38a3ad74;
              cVar3 = local_6e;
            }
            if (cVar3 != '\0') {
              iVar4 = iVar11;
            }
          }
          else if (iVar4 < 0x4af20083) {
            if (iVar4 == 0x38a3ad74) {
              bVar17 = uVar6 == 0;
              iVar4 = -0x6462402a;
              iVar11 = -0x637d4ce1;
              goto LAB_00413523;
            }
            if (iVar4 == 0x4666ae97) {
              iVar4 = -0x7fc34920;
              unaff_EBP = L'\0';
              goto LAB_00412bac;
            }
          }
          else {
            if (iVar4 == 0x4af20083) {
              bVar17 = (local_58 & 0xffffffdf) == uVar6;
              iVar4 = 0x4666ae97;
              iVar11 = 0x38a3ad74;
LAB_00413523:
              if (!bVar17) goto joined_r0x0041352c;
              iVar4 = iVar11;
              goto joined_r0x0041352c;
            }
            if (iVar4 == 0x4cb68644) goto LAB_00413582;
          }
joined_r0x00413503:
          if (iVar4 < -0xba5cea1) {
LAB_00412bac:
            while (-0x6462402b < iVar4) {
              if (iVar4 < -0x56ea05da) {
                if (iVar4 == -0x6462402a) {
                  cVar3 = s1[3];
                  iVar4 = 0x57b40ed9;
LAB_00412d4c:
                  if (0x76ccf3f < iVar4) {
                    if (iVar4 == 0x76ccf40) {
                      iVar11 = ((local_50 ^ 0x20) & local_50) - iVar13;
                    }
                    else {
                      if (iVar4 != 0x3a588f7a) {
                        if (iVar4 == 0x57b40ed9) {
                          local_50 = (uint)cVar3;
                          iVar4 = 0x3a588f7a;
                          if (iVar13 - 0x41U < 0x1a) {
                            iVar4 = 0x76ccf40;
                          }
                        }
                        goto joined_r0x00412d19;
                      }
                      iVar11 = local_50 - iVar13;
                    }
                    iVar4 = -0x5de47e31;
                    if (iVar11 == 0) {
                      iVar4 = -0x74cc167c;
                    }
joined_r0x00412d19:
                    if (iVar4 < -0x2bb4aaf9) {
                      while (uVar14 = 0x8b33e984, iVar4 < -0x71d807c0) {
                        if (iVar4 == -0x74cc167c) {
                          iVar4 = -0x71d807c0;
                          if (iVar13 == 0) {
                            iVar4 = -0x2bb4aaf9;
                          }
                          goto joined_r0x00412d19;
                        }
                        if (iVar4 != -0x7366717e) goto joined_r0x00412d19;
                        iVar4 = -0x63be53a3;
                      }
                      if (iVar4 == -0x71d807c0) {
                        bVar18 = (~((x_95 + -1) * x_95) | 0xfffffffeU) == 0xffffffff;
                        bVar17 = y_96 < 10;
                        iVar4 = -0x7c2afa77;
                        goto LAB_004130f0;
                      }
                      if (iVar4 == -0x63be53a3) {
                        uVar7 = (x_93 + -1) * x_93;
                        uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
                        iVar11 = -0x7366717e;
                        if (y_94 < 10 != (uVar7 == 0)) {
                          iVar11 = -0x5d66ee3;
                        }
                        iVar4 = iVar11;
                        if (uVar7 == 0) {
                          iVar4 = -0x5d66ee3;
                        }
                        if (9 < y_94) {
                          iVar4 = iVar11;
                        }
                      }
                      else if (iVar4 == -0x5de47e31) {
                        uVar7 = (~-x_93 * x_93 ^ 0xfffffffeU) & ~-x_93 * x_93;
                        iVar11 = -0x7366717e;
                        if (y_94 < 10 != (uVar7 == 0)) {
                          iVar11 = -0x63be53a3;
                        }
                        iVar4 = iVar11;
                        if (uVar7 == 0) {
                          iVar4 = -0x63be53a3;
                        }
                        if (9 < y_94) {
                          iVar4 = iVar11;
                        }
                      }
                      goto joined_r0x00412d19;
                    }
                    goto LAB_00412d4c;
                  }
                  if (iVar4 == -0x2bb4aaf9) {
                    iVar4 = -0x9ff441;
                    unaff_EBP = L'\x01';
                    goto LAB_00412d4c;
                  }
                  if (iVar4 == -0x5d66ee3) {
                    iVar4 = -0x9ff441;
                    unaff_EBP = L'\0';
                    goto LAB_00412d4c;
                  }
                  if (iVar4 != -0x9ff441) goto joined_r0x00412d19;
                  iVar4 = -0x7fc34920;
                }
                else {
                  if (iVar4 != -0x637d4ce1) goto joined_r0x00413503;
                  iVar4 = -0x7fc34920;
                  unaff_EBP = L'\x01';
                }
              }
              else {
                if (iVar4 == -0x56ea05da) {
                  iVar4 = -0x32bdab10;
                  goto joined_r0x00413503;
                }
                if (iVar4 != -0x32bdab10) goto joined_r0x00413503;
                bVar17 = (~(~-x_91 * x_91) | 0xfffffffeU) == 0xffffffff;
                iVar4 = -0x56ea05da;
                if (bVar17) {
                  iVar4 = 0x4cb68644;
                }
                if (9 < y_92) {
                  iVar4 = -0x56ea05da;
                }
                if (y_92 < 10 != bVar17) {
                  iVar4 = 0x4cb68644;
                }
joined_r0x0041352c:
                if (-0xba5cea2 < iVar4) goto LAB_004133e0;
              }
            }
            if (iVar4 != -0x7fc34920) {
              if (iVar4 != -0x79104e48) {
                if (iVar4 == -0x77a6a282) {
                  local_6e = local_58 == uVar6;
                  uVar7 = ~((x_91 + -1) * x_91) | 0xfffffffe;
                  iVar11 = -0x79104e48;
                  if (y_92 < 10 != (uVar7 == 0xffffffff)) {
                    iVar11 = 0x2565439d;
                  }
                  iVar4 = iVar11;
                  if (uVar7 == 0xffffffff) {
                    iVar4 = 0x2565439d;
                  }
                  if (9 < y_92) {
                    iVar4 = iVar11;
                  }
                }
                goto joined_r0x00413503;
              }
              iVar4 = -0x77a6a282;
              goto LAB_00412bac;
            }
            uVar7 = (x_91 + -1) * x_91;
            uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
            iVar11 = -0x32bdab10;
            iVar4 = -0x56ea05da;
            if (uVar7 == 0) {
              iVar4 = -0x32bdab10;
            }
            if (9 < y_92) {
              iVar4 = -0x56ea05da;
            }
            bVar17 = y_92 < 10 == (uVar7 == 0);
            local_3c = unaff_EBP;
LAB_0041348f:
            if (!bVar17) {
              iVar4 = iVar11;
            }
            goto joined_r0x00413503;
          }
          goto LAB_004133e0;
        }
        goto joined_r0x004135ef;
      }
      uVar7 = 0x2af4ec4f;
      wVar5 = L'\x01';
    }
  }
  if (uVar7 == 0x3108798) {
    uVar7 = 0x8c6070f8;
    goto LAB_004135a0;
  }
  if (uVar7 == 0x29b3d8d0) {
    iVar4 = (local_54 & 0xffffffdf) - iVar8;
LAB_00412ad3:
    uVar7 = 0xb758e844;
    if (iVar4 == 0) {
      uVar7 = 0x3658f17e;
    }
  }
  else if (uVar7 == 0x2af4ec4f) {
    return wVar5;
  }
  goto joined_r0x004135ef;
LAB_00413582:
  uVar7 = 0x2af4ec4f;
  wVar5 = local_3c;
  goto LAB_00412b0c;
LAB_004130f0:
  if (-0x347f1cd6 < iVar4) {
    if (iVar4 < -0x2f0cf182) {
      if (iVar4 == -0x347f1cd5) {
        iVar4 = 0x7c5809ef;
        if (local_69 != '\0') {
          iVar4 = -0x21737f69;
        }
      }
      else if (iVar4 == -0x31eb6d17) {
        iVar4 = 0x3a3b2ee;
        unaff_R13D = L'\x01';
        goto LAB_00412f4b;
      }
    }
    else if (iVar4 == -0x2f0cf182) {
      local_38 = strcaseeq5(s1,s2,s25,s26,(char)uVar14,(char)uVar16);
      uVar7 = ~((x_95 + -1) * x_95) | 0xfffffffe;
      iVar11 = 0x7eb778ef;
      if (y_96 < 10 != (uVar7 == 0xffffffff)) {
        iVar11 = -0x579d5400;
      }
      iVar4 = iVar11;
      if (uVar7 == 0xffffffff) {
        iVar4 = -0x579d5400;
      }
      if (9 < y_96) {
        iVar4 = iVar11;
      }
    }
    else if (iVar4 == -0x2e1b335f) {
      uVar7 = (x_95 + -1) * x_95;
      uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
      iVar11 = 0x2043e76d;
      iVar4 = -0x7ec7c1b6;
      if (uVar7 == 0) {
        iVar4 = 0x2043e76d;
      }
      if (9 < y_96) {
        iVar4 = -0x7ec7c1b6;
      }
      bVar19 = y_96 < 10 == (uVar7 == 0);
      goto LAB_00413207;
    }
joined_r0x0041320f:
    do {
      if (iVar4 < -0x21737f69) goto LAB_004130f0;
LAB_00412f4b:
      while (iVar4 < 0x2043e76d) {
        if (0x3a3b2ed < iVar4) {
          if (iVar4 == 0x3a3b2ee) {
            uVar7 = (x_95 + -1) * x_95;
            uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
            bVar19 = uVar7 == 0;
            iVar11 = -0x2e1b335f;
            iVar4 = -0x7ec7c1b6;
            if (uVar7 == 0) {
              iVar4 = -0x2e1b335f;
            }
            iVar9 = -0x7ec7c1b6;
            local_34 = unaff_R13D;
          }
          else {
            if (iVar4 != 0x12df74f5) goto joined_r0x0041320f;
            local_69 = uVar15 - 0x41 < 0x1a;
            local_4c = (uint)s1[4];
            bVar19 = (~(~-x_95 * x_95) | 0xfffffffeU) == 0xffffffff;
            iVar11 = -0x347f1cd5;
            iVar4 = -0x6ffdb996;
            if (bVar19) {
              iVar4 = -0x347f1cd5;
            }
            iVar9 = -0x6ffdb996;
            local_5c = uVar15;
          }
          if (9 < y_96) {
            iVar4 = iVar9;
          }
          if ((bool)(y_96 < 10 ^ bVar19)) {
            iVar4 = iVar11;
          }
          goto joined_r0x0041320f;
        }
        if (iVar4 == -0x21737f69) {
          uVar7 = (local_4c ^ 0x20) & local_4c;
          goto LAB_004130cf;
        }
        if (iVar4 != -0x12e90703) goto joined_r0x0041320f;
        unaff_R13D = L'\0';
        iVar4 = 0x3a3b2ee;
      }
      if (iVar4 < 0x7c5809ef) {
        if (iVar4 == 0x21a396c2) {
          bVar19 = local_5c == 0;
          iVar4 = 0x71233dc3;
          iVar11 = -0x31eb6d17;
LAB_004130d9:
          if (bVar19) {
            iVar4 = iVar11;
          }
        }
        else if (iVar4 == 0x71233dc3) {
          bVar19 = (~((x_95 + -1) * x_95) | 0xfffffffeU) == 0xffffffff;
          iVar4 = 0x7eb778ef;
          if (bVar19) {
            iVar4 = -0x2f0cf182;
          }
          if (9 < y_96) {
            iVar4 = 0x7eb778ef;
          }
          if (y_96 < 10 != bVar19) {
            iVar4 = -0x2f0cf182;
          }
        }
        else if (iVar4 == 0x2043e76d) {
          iVar4 = -0x9ff441;
          unaff_EBP = local_34;
          goto LAB_00412d4c;
        }
        goto joined_r0x0041320f;
      }
      uVar7 = local_4c;
      if (iVar4 == 0x7c5809ef) {
LAB_004130cf:
        bVar19 = uVar7 == local_5c;
        iVar4 = -0x12e90703;
        iVar11 = 0x21a396c2;
        goto LAB_004130d9;
      }
    } while (iVar4 != 0x7eb778ef);
    strcaseeq5(s1,s2,s25,s26,(char)uVar14,(char)uVar16);
    iVar4 = -0x2f0cf182;
    goto LAB_004130f0;
  }
  if (-0x6ffdb997 < iVar4) {
    if (iVar4 == -0x6ffdb996) {
      iVar4 = 0x12df74f5;
      goto LAB_00412f4b;
    }
    if (iVar4 == -0x579d5400) {
      iVar4 = 0x3a3b2ee;
      unaff_R13D = local_38;
      goto LAB_00412f4b;
    }
    goto joined_r0x0041320f;
  }
  if (iVar4 != -0x7ec7c1b6) {
    if (iVar4 == -0x7c2afa77) {
      iVar11 = 0x12df74f5;
      iVar4 = -0x6ffdb996;
      if (bVar17) {
        iVar4 = 0x12df74f5;
      }
      if (!bVar18) {
        iVar4 = -0x6ffdb996;
      }
      bVar19 = bVar18 == bVar17;
LAB_00413207:
      if (!bVar19) {
        iVar4 = iVar11;
      }
    }
    goto joined_r0x0041320f;
  }
  iVar4 = -0x2e1b335f;
  goto LAB_004130f0;
}


/* WARNING: Removing unreachable block (ram,0x00414027) */
/* WARNING: Removing unreachable block (ram,0x00413e66) */
/* WARNING: Removing unreachable block (ram,0x00413e12) */
/* WARNING: Removing unreachable block (ram,0x0041404d) */
/* WARNING: Removing unreachable block (ram,0x00413ddb) */
/* WARNING: Removing unreachable block (ram,0x0041403b) */
/* WARNING: Removing unreachable block (ram,0x00413f5f) */

wchar_t strcaseeq5(char *s1,char *s2,char s25,char s26,char s27,char s28)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined7 in_register_00000009;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined7 in_register_00000011;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  char local_b2;
  char local_b1;
  char local_ac;
  char local_a9;
  uint local_a4;
  int local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  wchar_t local_40;
  uint local_3c;
  
  iVar4 = y_102;
  iVar3 = y_104;
  iVar9 = (int)CONCAT71(in_register_00000009,s26);
  uVar23 = (uint)CONCAT71(in_register_00000011,s25);
  bVar30 = (~(~-x_97 * x_97) | 0xfffffffeU) == 0xffffffff;
  bVar34 = bVar30 == y_98 < 10;
  bVar35 = 9 < y_98;
  uVar26 = (x_99 + -1) * x_99;
  uVar26 = (uVar26 ^ 0xfffffffe) & uVar26;
  bVar31 = uVar26 != 0;
  bVar33 = y_100 < 10 == (uVar26 == 0);
  bVar2 = 9 < y_100;
  uVar26 = ~-x_101 * x_101;
  bVar32 = (~uVar26 | 0xfffffffe) == 0xffffffff;
  uVar27 = 0xfd17274c;
  if (bVar32) {
    uVar27 = 0x74e42cb2;
  }
  if (9 < y_102) {
    uVar27 = 0xfd17274c;
  }
  if (y_102 < 10 != bVar32) {
    uVar27 = 0x74e42cb2;
  }
  uVar28 = ~-x_103 * x_103;
  bVar32 = (~uVar28 | 0xfffffffe) == 0xffffffff;
  iVar29 = 0x413e1600;
  if (bVar32) {
    iVar29 = -0x19c44dc7;
  }
  if (9 < y_104) {
    iVar29 = 0x413e1600;
  }
  if (y_104 < 10 != bVar32) {
    iVar29 = -0x19c44dc7;
  }
  iVar10 = 0xb99757b;
  if ((bVar2 || bVar31) && bVar33) {
    iVar10 = -0x2804b456;
  }
  iVar11 = -0x2c29479a;
  if ((bVar2 || bVar31) && bVar33) {
    iVar11 = -0x2804b456;
  }
  iVar12 = 0x1257af84;
  if ((bVar2 || bVar31) && bVar33) {
    iVar12 = -0x7228a4a;
  }
  iVar13 = 0x2029ff06;
  if ((bVar2 || bVar31) && bVar33) {
    iVar13 = -0x7228a4a;
  }
  uVar14 = 0xc78c0e8a;
  if ((!bVar30 || bVar35) && bVar34) {
    uVar14 = 0x8fe4e08d;
  }
  uVar15 = 0x83a26efa;
  if ((!bVar30 || bVar35) && bVar34) {
    uVar15 = 0x8fe4e08d;
  }
  uVar16 = 0xaf63271e;
  if ((!bVar30 || bVar35) && bVar34) {
    uVar16 = 0x4772904e;
  }
  uVar17 = 0xdfa67dbd;
  if ((!bVar30 || bVar35) && bVar34) {
    uVar17 = 0x4772904e;
  }
  uVar18 = 0xec4380e1;
  if ((!bVar30 || bVar35) && bVar34) {
    uVar18 = 0xfec8d354;
  }
  uVar19 = 0x83abc1f7;
  if ((!bVar30 || bVar35) && bVar34) {
    uVar19 = 0xfec8d354;
  }
  uVar20 = 0x6258c05a;
  if ((!bVar30 || bVar35) && bVar34) {
    uVar20 = 0x8e1ddd7c;
  }
  uVar21 = 0xcbb664fc;
  if ((!bVar30 || bVar35) && bVar34) {
    uVar21 = 0x8e1ddd7c;
  }
  cVar1 = s1[5];
  uVar7 = CONCAT71(0x8e1ddd,cVar1);
  uVar6 = 0x1c7aa952;
LAB_00413930:
  do {
    while( true ) {
      while (uVar22 = uVar6, uVar6 = uVar22, -0x13bc7f20 < (int)uVar22) {
        if ((int)uVar22 < 0x2f8eb966) {
          if ((int)uVar22 < 0x178a7b6e) {
            uVar6 = uVar19;
            if ((uVar22 != 0xec4380e1) && (uVar6 = uVar22, uVar22 == 0xfec8d354)) {
              uVar6 = 0xec4380e1;
            }
          }
          else {
            uVar6 = uVar18;
            if (uVar22 != 0x178a7b6e) {
              if (uVar22 == 0x1c7aa952) {
                local_a4 = (uint)cVar1;
                uVar6 = 0x96bde2ff;
                if (uVar23 - 0x41 < 0x1a) {
                  uVar6 = 0x2f8eb966;
                }
              }
              else {
                uVar6 = uVar22;
                if ((uVar22 == 0x2d0e6415) && (uVar6 = 0xacd2ce38, uVar23 == 0)) {
                  uVar6 = 0x178a7b6e;
                }
              }
            }
          }
        }
        else if ((int)uVar22 < 0x4772904e) {
          uVar6 = uVar14;
          if ((uVar22 != 0x2f8eb966) && (uVar6 = uVar22, uVar22 == 0x315fe0e3)) {
            local_40 = (wchar_t)uVar7;
            uVar6 = uVar20;
          }
        }
        else if (uVar22 == 0x4772904e) {
          uVar6 = 0xaf63271e;
        }
        else if (uVar22 == 0x4a2da3db) {
          uVar7 = 0;
          uVar6 = 0x315fe0e3;
        }
        else if (uVar22 == 0x6258c05a) {
          uVar6 = uVar21;
        }
      }
      if (-0x532d31c9 < (int)uVar22) break;
      if ((int)uVar22 < -0x71e22284) {
        cVar8 = local_b2;
        if (uVar22 == 0x83a26efa) {
LAB_00413912:
          uVar6 = 0x4a2da3db;
          if (cVar8 != '\0') {
            uVar6 = 0x2d0e6415;
          }
        }
        else if (uVar22 == 0x83abc1f7) {
          uVar7 = 1;
          uVar6 = 0x315fe0e3;
        }
      }
      else if (uVar22 == 0x8e1ddd7c) {
        uVar6 = 0x6258c05a;
      }
      else if (uVar22 == 0x8fe4e08d) {
        uVar6 = 0xc78c0e8a;
      }
      else if (uVar22 == 0x96bde2ff) {
        uVar6 = uVar16;
      }
    }
    if ((int)uVar22 < -0x3873f176) {
      if (uVar22 == 0xacd2ce38) {
        cVar8 = s1[6];
        iVar5 = -0x73b44167;
LAB_00413bd0:
        iVar24 = iVar5;
        iVar5 = iVar24;
        if (iVar24 < -0x7228a4a) {
          if (iVar24 < -0x2c29479a) {
            if (iVar24 == -0x74bc5722) {
              iVar5 = -0x61c5c0f5;
              if (iVar9 == 0) {
                iVar5 = -0x29281a44;
              }
            }
            else if (iVar24 == -0x73b44167) {
              local_94 = (uint)cVar8;
              iVar5 = 0x1b9c52cb;
              if (iVar9 - 0x41U < 0x1a) {
                iVar5 = 0x61890af6;
              }
            }
            else if (iVar24 == -0x61c5c0f5) {
              bVar33 = (uVar26 & 1) == 0;
              uVar6 = 0xb3f299e4;
LAB_00413fd0:
              if ((int)uVar6 < -0x1c5028a9) {
                if (uVar6 == 0xb3f299e4) {
                  uVar25 = 0xfd17274c;
                  if (bVar33 != iVar4 < 10) {
                    uVar25 = 0x7d5d53a9;
                  }
                  uVar6 = uVar25;
                  if (iVar4 < 10) {
                    uVar6 = 0x7d5d53a9;
                  }
                  bVar34 = !bVar33;
                  goto LAB_00413fb3;
                }
                if (uVar6 != 0xbc08dbbb) goto joined_r0x00413fab;
                uVar6 = 0x7c64b8fd;
                uVar22 = 1;
              }
              else if (uVar6 == 0xe3afd757) {
                uVar6 = 0x7c64b8fd;
                uVar22 = 0;
              }
              else {
                if (uVar6 != 0xfd17274c) {
                  if (uVar6 != 0x21e8c4de) goto joined_r0x00413fab;
                  iVar5 = local_90 - local_9c;
                  goto LAB_00413cc0;
                }
                uVar6 = 0x7d5d53a9;
              }
LAB_00413cfb:
              if ((int)uVar6 < 0x74e42cb2) {
                if (uVar6 == 0x4baa6194) {
                  bVar34 = local_9c == 0;
                  uVar6 = 0x6e999087;
                  uVar25 = 0xbc08dbbb;
LAB_00413fb3:
                  if (bVar34) {
                    uVar6 = uVar25;
                  }
                }
                else if (uVar6 == 0x695c7331) {
                  iVar5 = (local_90 & 0xffffffdf) - local_9c;
LAB_00413cc0:
                  uVar6 = 0xe3afd757;
                  if (iVar5 == 0) {
                    uVar6 = 0x4baa6194;
                  }
                }
                else if (uVar6 == 0x6e999087) {
                  bVar34 = (uVar28 & 1) == 0;
                  iVar5 = -0x523c018d;
LAB_00413e30:
                  do {
                    if (iVar5 < -0x3551bd60) {
                      if (iVar5 == -0x523c018d) {
                        iVar24 = 0x413e1600;
                        if (bVar34 != iVar3 < 10) {
                          iVar24 = -0x3551bd60;
                        }
                        iVar5 = iVar24;
                        if (iVar3 < 10) {
                          iVar5 = -0x3551bd60;
                        }
                        bVar35 = !bVar34;
                        goto LAB_00413e14;
                      }
                      if (iVar5 != -0x4cc7efd7) goto joined_r0x00413ee3;
                      iVar24 = ((local_8c ^ 0x20) & local_8c) - local_98;
                      goto LAB_00413d44;
                    }
                    if (iVar5 == -0x3551bd60) {
                      local_98 = 0;
                      local_a9 = '\0';
                      local_8c = (uint)s1[8];
                      iVar5 = iVar29;
                      goto joined_r0x00413d52;
                    }
                    if (iVar5 == -0x19c44dc7) {
                      iVar5 = 0x3ab3cf3;
                      if (local_a9 == '\0') goto joined_r0x00413ee3;
                      iVar5 = -0x4cc7efd7;
                      goto joined_r0x00413ee3;
                    }
                    if (iVar5 != -0x62a0332) goto joined_r0x00413ee3;
                    iVar5 = 0x4ee34df9;
                    uVar22 = 0;
LAB_00413d7b:
                    do {
                      while (0x413e15ff < iVar5) {
                        if (iVar5 == 0x413e1600) {
                          iVar5 = -0x3551bd60;
                          goto LAB_00413e30;
                        }
                        if (iVar5 == 0x5d06fa27) {
                          iVar5 = c_strcasecmp(s1 + 9,s2 + 9);
                          uVar22 = (uint)(iVar5 == 0);
                          iVar5 = 0x4ee34df9;
                        }
                        else {
                          if (iVar5 == 0x4ee34df9) {
                            uVar6 = 0x7c64b8fd;
                            goto LAB_00413cfb;
                          }
joined_r0x00413ee3:
                          if (iVar5 < 0x3ab3cf3) goto LAB_00413e30;
                        }
                      }
                      if (iVar5 == 0x3ab3cf3) {
                        iVar24 = local_8c - local_98;
LAB_00413d44:
                        iVar5 = -0x62a0332;
                        if (iVar24 == 0) {
                          iVar5 = 0x1c41ec73;
                        }
                      }
                      else {
                        if (iVar5 == 0xab0d727) {
                          iVar5 = 0x4ee34df9;
                          uVar22 = 1;
                          goto LAB_00413d7b;
                        }
                        if (iVar5 != 0x1c41ec73) goto joined_r0x00413ee3;
                        bVar35 = local_98 == 0;
                        iVar5 = 0x5d06fa27;
                        iVar24 = 0xab0d727;
LAB_00413e14:
                        if (bVar35) {
                          iVar5 = iVar24;
                        }
                      }
joined_r0x00413d52:
                    } while (0x3ab3cf2 < iVar5);
                  } while( true );
                }
              }
              else {
                if (uVar6 == 0x74e42cb2) {
                  uVar6 = 0x21e8c4de;
                  if (local_ac != '\0') {
                    uVar6 = 0x695c7331;
                  }
                  if (uVar6 < 0x4baa6194) goto LAB_00413fd0;
                  goto LAB_00413cfb;
                }
                if (uVar6 != 0x7d5d53a9) {
                  if (uVar6 != 0x7c64b8fd) goto joined_r0x00413fab;
                  iVar5 = -0x22a12a65;
                  goto LAB_00413bd0;
                }
                local_9c = 0;
                local_ac = '\0';
                local_90 = (uint)s1[7];
                uVar6 = uVar27;
              }
joined_r0x00413fab:
              if ((int)uVar6 < 0x4baa6194) goto LAB_00413fd0;
              goto LAB_00413cfb;
            }
          }
          else if (iVar24 < -0x2804b456) {
            if (iVar24 == -0x2c29479a) {
              uVar22 = 1;
              iVar5 = -0x22a12a65;
            }
            else if (iVar24 == -0x29281a44) {
              iVar5 = iVar10;
            }
          }
          else if (iVar24 == -0x2804b456) {
            iVar5 = 0xb99757b;
          }
          else if (iVar24 == -0x22a12a65) {
            iVar5 = iVar12;
            local_3c = uVar22;
          }
          goto LAB_00413bd0;
        }
        if (iVar24 < 0x1b9c52cb) {
          if (iVar24 == -0x7228a4a) {
            iVar5 = 0x1257af84;
          }
          else {
            iVar5 = iVar11;
            if ((iVar24 != 0xb99757b) && (iVar5 = iVar24, iVar24 == 0x1257af84)) {
              iVar5 = iVar13;
            }
          }
          goto LAB_00413bd0;
        }
        if (0x61890af5 < iVar24) {
          if (iVar24 == 0x61890af6) {
            iVar24 = ((local_94 ^ 0x20) & local_94) - iVar9;
LAB_00413bad:
            iVar5 = 0x62750ee6;
            if (iVar24 == 0) {
              iVar5 = -0x74bc5722;
            }
          }
          else if (iVar24 == 0x62750ee6) {
            uVar22 = 0;
            iVar5 = -0x22a12a65;
          }
          goto LAB_00413bd0;
        }
        if (iVar24 == 0x1b9c52cb) {
          iVar24 = local_94 - iVar9;
          goto LAB_00413bad;
        }
        if (iVar24 != 0x2029ff06) goto LAB_00413bd0;
        uVar7 = (ulong)local_3c;
        uVar6 = 0x315fe0e3;
      }
      else if (uVar22 == 0xaf63271e) {
        local_b1 = local_a4 == uVar23;
        uVar6 = uVar17;
      }
      goto LAB_00413930;
    }
    if (uVar22 == 0xc78c0e8a) {
      local_b2 = (local_a4 & 0xffffffdf) == uVar23;
      uVar6 = uVar15;
    }
    else {
      cVar8 = local_b1;
      if (uVar22 == 0xdfa67dbd) goto LAB_00413912;
      if (uVar22 == 0xcbb664fc) {
        return local_40;
      }
    }
  } while( true );
}


void version_etc_arn(FILE *stream,char *command_name,char *package,char *version,char **authors,
                    size_t n_authors)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  char *__s;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  iVar1 = 0x1165e6c;
  if (command_name != (char *)0x0) {
    iVar1 = 0x94b0b8c;
  }
  iVar2 = -0x376697ad;
  if ((long)n_authors < 5) {
    iVar2 = -0x5be97e0b;
  }
  iVar3 = 0x13f808e0;
  if ((long)n_authors < 7) {
    iVar3 = -0x3f9745c3;
  }
  iVar4 = 0x2d06bd90;
  if ((long)n_authors < 8) {
    iVar4 = -0x3fbaa112;
  }
  iVar5 = 0x5868a430;
  if ((long)n_authors < 9) {
    iVar5 = 0x62f0e1cd;
  }
  iVar8 = 0x38c22b71;
  if (n_authors != 9) {
    iVar8 = -0x5c2e1bb8;
  }
  iVar9 = 0x22ae0b69;
  if ((long)n_authors < 6) {
    iVar9 = -0x65178947;
  }
  iVar10 = 0x6f78279d;
  if ((long)n_authors < 2) {
    iVar10 = -0x4e82efb6;
  }
  iVar11 = 0x1a4d87fc;
  if ((long)n_authors < 3) {
    iVar11 = -0x350f1bb2;
  }
  iVar12 = -0x4cde7bdf;
  if ((long)n_authors < 4) {
    iVar12 = 0x1f3b7ce4;
  }
  iVar13 = -0x50c3a934;
  if ((long)n_authors < 1) {
    iVar13 = -0x33bd721f;
  }
  iVar14 = 0x67d26383;
  if (n_authors != 0) {
    iVar14 = -0x5c2e1bb8;
  }
  iVar6 = 0x47b925bf;
LAB_00414270:
  do {
    while (iVar15 = iVar6, iVar6 = iVar15, 0x12bb474b < iVar15) {
      if (iVar15 < 0x433eba17) {
        if (iVar15 < 0x22ae0b69) {
          if (iVar15 < 0x1a4d87fc) {
            if (iVar15 == 0x12bb474c) {
              uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
              __fprintf_chk(stream,1,uVar7,*authors,authors[1],authors[2],authors[3],authors[4]);
              bVar17 = (~((x + -1) * x) | 0xfffffffeU) == 0xffffffff;
              iVar6 = 0x42b64ef;
              if (bVar17) {
                iVar6 = 0x433eba17;
              }
              if (9 < y) {
                iVar6 = 0x42b64ef;
              }
              if (y < 10 != bVar17) {
                iVar6 = 0x433eba17;
              }
            }
            else if (iVar15 == 0x13f808e0) {
              iVar6 = iVar4;
            }
          }
          else {
            iVar6 = iVar12;
            if ((iVar15 != 0x1a4d87fc) && (iVar6 = iVar15, iVar15 == 0x1f3b7ce4)) {
              uVar7 = dcgettext(0,"Written by %s, %s, and %s.\n",5);
              __fprintf_chk(stream,1,uVar7,*authors,authors[1],authors[2]);
              iVar6 = 0x67d26383;
            }
          }
        }
        else if (iVar15 < 0x38c22b71) {
          if (iVar15 == 0x22ae0b69) {
            uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
            __fprintf_chk(stream,1,uVar7,*authors,authors[1],authors[2],authors[3],authors[4],
                          authors[5]);
            iVar6 = 0x67d26383;
          }
          else if (iVar15 == 0x2d06bd90) {
            iVar6 = iVar5;
          }
        }
        else if (iVar15 == 0x38c22b71) {
          uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n",5);
          __fprintf_chk(stream,1,uVar7,*authors,authors[1],authors[2],authors[3],authors[4],
                        authors[5],authors[6],authors[7],authors[8]);
          iVar6 = 0x67d26383;
        }
        else if (iVar15 == 0x418840dd) {
          iVar6 = iVar2;
        }
      }
      else if (iVar15 < 0x67d26383) {
        if (iVar15 < 0x5868a430) {
          if (iVar15 == 0x433eba17) {
            iVar6 = 0x67d26383;
          }
          else if (iVar15 == 0x47b925bf) {
            iVar6 = iVar1;
          }
        }
        else {
          iVar6 = iVar8;
          if ((iVar15 != 0x5868a430) && (iVar6 = iVar15, iVar15 == 0x62f0e1cd)) {
            uVar16 = ~((x + -1) * x) | 0xfffffffe;
            iVar15 = 0xbcbd65a;
            if (y < 10 != (uVar16 == 0xffffffff)) {
              iVar15 = -0x554777ac;
            }
            iVar6 = iVar15;
            if (uVar16 == 0xffffffff) {
              iVar6 = -0x554777ac;
            }
LAB_0041425c:
            if (9 < y) {
              iVar6 = iVar15;
            }
          }
        }
      }
      else if (iVar15 < 0x6f78279d) {
        if (iVar15 == 0x67d26383) {
          return;
        }
        if (iVar15 == 0x6de12eb1) {
          iVar6 = 0x67d26383;
        }
      }
      else {
        iVar6 = iVar11;
        if ((iVar15 != 0x6f78279d) && (iVar6 = iVar15, iVar15 == 0x73c7fac3)) {
          uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n",5);
          __fprintf_chk(stream,1,uVar7,*authors,authors[1],authors[2],authors[3],authors[4],
                        authors[5],authors[6],authors[7],authors[8]);
          iVar6 = 0x67d26383;
        }
      }
    }
    if (-0x3f9745c4 < iVar15) {
      if (iVar15 < -0x8fc316e) {
        if (iVar15 < -0x350f1bb2) {
          iVar6 = iVar9;
          if ((iVar15 != -0x3f9745c3) && (iVar6 = iVar15, iVar15 == -0x376697ad)) {
            iVar6 = iVar3;
          }
        }
        else if (iVar15 == -0x350f1bb2) {
          uVar7 = dcgettext(0,"Written by %s and %s.\n",5);
          __fprintf_chk(stream,1,uVar7,*authors,authors[1]);
          iVar6 = 0x67d26383;
        }
        else if (iVar15 == -0x33bd721f) {
          iVar6 = iVar14;
        }
      }
      else if (iVar15 < 0x42b64ef) {
        if (iVar15 == -0x8fc316e) {
          uVar7 = dcgettext(0,&DAT_0041952b,5);
          __fprintf_chk(stream,1,"Copyright %s %d Free Software Foundation, Inc.",uVar7,0x7e3);
          __s = (char *)dcgettext(0,
                                  "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"
                                  ,5);
          fputs_unlocked(__s,(FILE *)stream);
          iVar6 = 0x418840dd;
        }
        else if (iVar15 == 0x1165e6c) {
          __fprintf_chk(stream,1,"%s %s\n",package,version);
          iVar6 = -0x8fc316e;
        }
      }
      else if (iVar15 == 0x42b64ef) {
        uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
        __fprintf_chk(stream,1,uVar7,*authors,authors[1],authors[2],authors[3],authors[4]);
        iVar6 = 0x12bb474c;
      }
      else if (iVar15 == 0x94b0b8c) {
        __fprintf_chk(stream,1,"%s (%s) %s\n",command_name,package,version);
        iVar6 = -0x8fc316e;
      }
      else if (iVar15 == 0xbcbd65a) {
        uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
        __fprintf_chk(stream,1,uVar7,*authors,authors[1],authors[2],authors[3],authors[4],authors[5]
                      ,authors[6],authors[7]);
        iVar6 = -0x554777ac;
      }
      goto LAB_00414270;
    }
    if (iVar15 < -0x50c3a934) {
      if (iVar15 < -0x5be97e0b) {
        if (iVar15 == -0x65178947) {
          bVar17 = (~((x + -1) * x) | 0xfffffffeU) == 0xffffffff;
          iVar6 = 0x42b64ef;
          if (bVar17) {
            iVar6 = 0x12bb474c;
          }
          if (9 < y) {
            iVar6 = 0x42b64ef;
          }
          if (y < 10 != bVar17) {
            iVar6 = 0x12bb474c;
          }
        }
        else if (iVar15 == -0x5c2e1bb8) {
          iVar6 = 0x73c7fac3;
        }
      }
      else {
        iVar6 = iVar10;
        if ((iVar15 != -0x5be97e0b) && (iVar6 = iVar15, iVar15 == -0x554777ac)) {
          uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
          __fprintf_chk(stream,1,uVar7,*authors,authors[1],authors[2],authors[3],authors[4],
                        authors[5],authors[6],authors[7]);
          uVar16 = (x + -1) * x;
          uVar16 = (uVar16 ^ 0xfffffffe) & uVar16;
          iVar15 = 0xbcbd65a;
          if (y < 10 != (uVar16 == 0)) {
            iVar15 = 0x6de12eb1;
          }
          iVar6 = iVar15;
          if (uVar16 == 0) {
            iVar6 = 0x6de12eb1;
          }
          goto LAB_0041425c;
        }
      }
    }
    else if (iVar15 < -0x4cde7bdf) {
      if (iVar15 == -0x50c3a934) {
        uVar7 = dcgettext(0,"Written by %s.\n",5);
        __fprintf_chk(stream,1,uVar7,*authors);
        iVar6 = 0x67d26383;
      }
      else if (iVar15 == -0x4e82efb6) {
        iVar6 = iVar13;
      }
    }
    else if (iVar15 == -0x4cde7bdf) {
      uVar7 = dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
      __fprintf_chk(stream,1,uVar7,*authors,authors[1],authors[2],authors[3]);
      iVar6 = 0x67d26383;
    }
    else if (iVar15 == -0x3fbaa112) {
      uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
      __fprintf_chk(stream,1,uVar7,*authors,authors[1],authors[2],authors[3],authors[4],authors[5],
                    authors[6]);
      iVar6 = 0x67d26383;
    }
  } while( true );
}


void version_etc_ar(FILE *stream,char *command_name,char *package,char *version,char **authors)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  size_t local_40;
  
  sVar2 = 0;
LAB_00414a87:
  iVar1 = -0x3403b544;
LAB_00414ac9:
  if (iVar1 == -0x517156ef) {
    version_etc_arn(stream,command_name,package,version,authors,local_40);
    uVar3 = ~(~-x_20 * x_20) | 0xfffffffe;
    iVar4 = 0x5a5083ec;
    if (y_21 < 10 != (uVar3 == 0xffffffff)) {
      iVar4 = 0x692ad7e9;
    }
    iVar1 = iVar4;
    if (uVar3 == 0xffffffff) {
      iVar1 = 0x692ad7e9;
    }
    if (9 < y_21) {
      iVar1 = iVar4;
    }
  }
  else {
    if (iVar1 != -0x3403b544) goto LAB_00414be0;
    iVar1 = -0x17db4053;
    local_40 = sVar2;
    if (authors[sVar2] != (char *)0x0) {
      iVar1 = -0x3b40cff4;
    }
  }
  while (-0x17db4054 < iVar1) {
    if (iVar1 != -0x17db4053) {
      if (iVar1 != 0x5a5083ec) {
        if (iVar1 == 0x692ad7e9) {
          return;
        }
        goto LAB_00414c10;
      }
      version_etc_arn(stream,command_name,package,version,authors,local_40);
      iVar1 = -0x517156ef;
      break;
    }
    uVar3 = (x_20 + -1) * x_20;
    uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
    iVar4 = 0x5a5083ec;
    if (y_21 < 10 != (uVar3 == 0)) {
      iVar4 = -0x517156ef;
    }
    iVar1 = iVar4;
    if (uVar3 == 0) {
      iVar1 = -0x517156ef;
    }
    if (9 < y_21) {
      iVar1 = iVar4;
    }
  }
  goto LAB_00414ac9;
LAB_00414be0:
  if (iVar1 != -0x3b40cff4) {
LAB_00414c10:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  sVar2 = local_40 + 1;
  goto LAB_00414a87;
}


/* WARNING: Removing unreachable block (ram,0x00415119) */
/* WARNING: Removing unreachable block (ram,0x00414c88) */
/* WARNING: Removing unreachable block (ram,0x00414d57) */
/* WARNING: Type propagation algorithm not settling */

void version_etc_va(FILE *stream,char *command_name,char *package,char *version,
                   __va_list_tag *authors)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char **in_R11;
  int iVar5;
  bool bVar6;
  char *authtab [10];
  char local_da;
  char local_d9;
  ulong local_d8;
  uint local_cc;
  __va_list_tag *local_c0;
  char **local_b8;
  ulong local_90;
  char *local_88 [11];
  
  iVar5 = -0xcbf267e;
  uVar4 = 0;
LAB_00414ccd:
  do {
    if (iVar5 < -0x39ea4770) {
      if (iVar5 < -0x7281d04a) {
        if (iVar5 == -0x7b3a8182) {
          in_R11 = (char **)authors->overflow_arg_area;
          authors->overflow_arg_area = in_R11 + 1;
          goto LAB_00414e01;
        }
        if (iVar5 == -0x79205837) {
          in_R11 = (char **)((long)(int)local_cc + (long)authors->reg_save_area);
          local_c0->gp_offset = local_cc + 8;
LAB_00414e01:
          iVar5 = -0x24cdd73;
          goto LAB_00414f30;
        }
      }
      else if (iVar5 == -0x7281d04a) {
        bVar6 = (~(~-x_22 * x_22) | 0xfffffffeU) == 0xffffffff;
        iVar5 = 0x13db0ae5;
        if (bVar6) {
          iVar5 = -0x11113fde;
        }
        if (9 < y_23) {
          iVar5 = 0x13db0ae5;
        }
        if (y_23 < 10 != bVar6) {
          iVar5 = -0x11113fde;
        }
      }
      else if (iVar5 == -0x3afc6e32) {
        iVar3 = 0x580b3901;
        cVar1 = local_da;
        goto LAB_00414f1a;
      }
joined_r0x00414dea:
      if (-0x24cdd74 < iVar5) {
LAB_00414f30:
        while (iVar5 < 0x580b3901) {
          if (iVar5 < 0x1a17eac3) {
            if (iVar5 == -0x24cdd73) {
              uVar2 = (x_22 + -1) * x_22;
              uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
              iVar3 = 0x1a17eac3;
              if (y_23 < 10 != (uVar2 == 0)) {
                iVar3 = 0x237bd5e9;
              }
              iVar5 = iVar3;
              if (uVar2 == 0) {
                iVar5 = 0x237bd5e9;
              }
              local_b8 = in_R11;
              if (9 < y_23) {
                iVar5 = iVar3;
              }
            }
            else if (iVar5 == 0x13db0ae5) {
              iVar5 = -0x11113fde;
            }
            goto joined_r0x00414dea;
          }
          if (iVar5 != 0x1a17eac3) {
            if (iVar5 == 0x237bd5e9) {
              local_d9 = *local_b8 != (char *)0x0;
              local_88[local_d8] = *local_b8;
              bVar6 = (~((x_22 + -1) * x_22) | 0xfffffffeU) == 0xffffffff;
              iVar5 = 0x1a17eac3;
              if (bVar6) {
                iVar5 = 0x6b81e749;
              }
              if (9 < y_23) {
                iVar5 = 0x1a17eac3;
              }
              if (y_23 < 10 != bVar6) {
                iVar5 = 0x6b81e749;
              }
            }
            goto joined_r0x00414dea;
          }
          local_88[local_d8] = *local_b8;
          iVar5 = 0x237bd5e9;
        }
        if (iVar5 < 0x6c623ff8) {
          if (iVar5 == 0x580b3901) {
            local_cc = authors->gp_offset;
            local_c0 = authors;
            iVar5 = -0x7b3a8182;
            if (local_cc < 0x29) {
              iVar5 = -0x79205837;
            }
          }
          else if (iVar5 == 0x6b81e749) {
            iVar3 = -0x7281d04a;
            cVar1 = local_d9;
LAB_00414f1a:
            iVar5 = 0x7cb73e35;
            if (cVar1 != '\0') {
              iVar5 = iVar3;
            }
          }
        }
        else {
          if (iVar5 == 0x6c623ff8) {
            iVar5 = -0xcbf267e;
            uVar4 = local_90;
            goto LAB_00414ccd;
          }
          if (iVar5 == 0x7cb73e35) {
            version_etc_arn(stream,command_name,package,version,local_88,local_d8);
            return;
          }
        }
        goto joined_r0x00414dea;
      }
      goto LAB_00414ccd;
    }
    if (-0x11113fdf < iVar5) {
      if (iVar5 == -0x11113fde) {
        local_90 = local_d8 + 1;
        uVar2 = (x_22 + -1) * x_22;
        uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
        iVar3 = 0x13db0ae5;
        if (y_23 < 10 != (uVar2 == 0)) {
          iVar3 = 0x6c623ff8;
        }
        iVar5 = iVar3;
        if (uVar2 == 0) {
          iVar5 = 0x6c623ff8;
        }
        if (9 < y_23) {
          iVar5 = iVar3;
        }
      }
      else if (iVar5 == -0xcbf267e) {
        bVar6 = (~(~-x_22 * x_22) | 0xfffffffeU) == 0xffffffff;
        iVar5 = -0x267bf654;
        if (bVar6) {
          iVar5 = -0x39ea4770;
        }
        if (9 < y_23) {
          iVar5 = -0x267bf654;
        }
        local_d8 = uVar4;
        if (y_23 < 10 != bVar6) {
          iVar5 = -0x39ea4770;
        }
      }
      goto joined_r0x00414dea;
    }
    if (iVar5 == -0x39ea4770) {
      local_da = local_d8 < 10;
      bVar6 = (~((x_22 + -1) * x_22) | 0xfffffffeU) == 0xffffffff;
      iVar5 = -0x267bf654;
      if (bVar6) {
        iVar5 = -0x3afc6e32;
      }
      if (9 < y_23) {
        iVar5 = -0x267bf654;
      }
      if (y_23 < 10 != bVar6) {
        iVar5 = -0x3afc6e32;
      }
      goto joined_r0x00414dea;
    }
    if (iVar5 != -0x267bf654) goto joined_r0x00414dea;
    iVar5 = -0x39ea4770;
  } while( true );
}


/* WARNING: Type propagation algorithm not settling */

void version_etc(FILE *stream,char *command_name,char *package,char *version,...)

{
  char in_AL;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  __va_list_tag *authors;
  __va_list_tag *p_Var4;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM6_Da;
  undefined4 in_XMM7_Da;
  void *pvStack_110;
  undefined4 local_108 [2];
  void *local_100 [3];
  undefined local_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  char local_32;
  char local_31;
  
  authors = (__va_list_tag *)local_e8;
  if (in_AL != '\0') {
    local_b8 = in_XMM0_Da;
    local_a8 = in_XMM1_Da;
    local_98 = in_XMM2_Da;
    local_88 = in_XMM3_Da;
    local_78 = in_XMM4_Da;
    local_68 = in_XMM5_Da;
    local_58 = in_XMM6_Da;
    local_48 = in_XMM7_Da;
  }
  uVar2 = (x_24 + -1) * x_24;
  local_31 = ((uVar2 ^ 0xfffffffe) & uVar2) == 0;
  local_32 = y_25 < 10;
  uVar2 = 0xbd262645;
  local_c8 = in_R8;
  local_c0 = in_R9;
  while (uVar2 == 0xbd262645) {
    uVar1 = 0x57e6ba74;
    if (local_31 != local_32) {
      uVar1 = 0x58335091;
    }
    uVar2 = uVar1;
    if (local_32 != '\0') {
      uVar2 = 0x58335091;
    }
    if (local_31 == '\0') {
      uVar2 = uVar1;
    }
    while (p_Var4 = authors, 0x57e6ba73 < uVar2) {
      while (uVar2 == 0x57e6ba74) {
        *(undefined **)((long)(p_Var4 + 0xffffffffffffffff) + 8) = local_e8;
        *(undefined **)(p_Var4 + 0xffffffffffffffff) = &stack0x00000008;
        *(undefined4 *)((long)(p_Var4 + 0xfffffffffffffffe) + 0x14) = 0x30;
        *(undefined4 *)((long)(p_Var4 + 0xfffffffffffffffe) + 0x10) = 0x20;
        *(undefined8 *)((long)(p_Var4 + 0xfffffffffffffffe) + 8) = 0x415235;
        version_etc_va(stream,command_name,package,version,
                       (__va_list_tag *)((long)(p_Var4 + 0xfffffffffffffffe) + 0x10U));
        p_Var4 = (__va_list_tag *)((long)(p_Var4 + 0xfffffffffffffffe) + 0x10U);
        uVar2 = 0x58335091;
      }
      if (uVar2 != 0x58335091) goto LAB_00415330;
      authors = (__va_list_tag *)((long)(p_Var4 + 0xfffffffffffffffe) + 0x10);
      *(undefined **)((long)(p_Var4 + 0xffffffffffffffff) + 8) = local_e8;
      *(undefined **)(p_Var4 + 0xffffffffffffffff) = &stack0x00000008;
      *(undefined4 *)((long)(p_Var4 + 0xfffffffffffffffe) + 0x14) = 0x30;
      *(undefined4 *)((long)(p_Var4 + 0xfffffffffffffffe) + 0x10) = 0x20;
      *(undefined8 *)((long)(p_Var4 + 0xfffffffffffffffe) + 8) = 0x4152bf;
      version_etc_va(stream,command_name,package,version,authors);
      uVar1 = (~-x_24 * x_24 ^ 0xfffffffeU) & ~-x_24 * x_24;
      uVar3 = 0x57e6ba74;
      if (y_25 < 10 != (uVar1 == 0)) {
        uVar3 = 0x513deb41;
      }
      uVar2 = uVar3;
      if (uVar1 == 0) {
        uVar2 = 0x513deb41;
      }
      if (9 < y_25) {
        uVar2 = uVar3;
      }
    }
  }
  if (uVar2 == 0x513deb41) {
    return;
  }
LAB_00415330:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


void emit_bug_reporting_address(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  uVar5 = (x_26 + -1) * x_26;
  bVar7 = ((uVar5 ^ 0xfffffffe) & uVar5) == 0;
  bVar1 = y_27 < 10;
  iVar2 = 0x5dd029a2;
  while (iVar2 == 0x5dd029a2) {
    iVar6 = -0x394f7c78;
    if (bVar7 != bVar1) {
      iVar6 = -0x475eba0;
    }
    iVar2 = iVar6;
    if (bVar1) {
      iVar2 = -0x475eba0;
    }
    if (!bVar7) {
      iVar2 = iVar6;
    }
    while (iVar2 < 0x56697883) {
      while (iVar2 == -0x394f7c78) {
        uVar3 = dcgettext(0,"\nReport bugs to: %s\n",5);
        __printf_chk(1,uVar3,"bug-coreutils@gnu.org");
        uVar3 = dcgettext(0,"%s home page: <%s>\n",5);
        __printf_chk(1,uVar3,"GNU coreutils","https://www.gnu.org/software/coreutils/");
        pcVar4 = (char *)dcgettext(0,
                                   "General help using GNU software: <https://www.gnu.org/gethelp/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,stdout);
        iVar2 = -0x475eba0;
      }
      if (iVar2 != -0x475eba0) goto LAB_00415530;
      uVar3 = dcgettext(0,"\nReport bugs to: %s\n",5);
      __printf_chk(1,uVar3,"bug-coreutils@gnu.org");
      uVar3 = dcgettext(0,"%s home page: <%s>\n",5);
      __printf_chk(1,uVar3,"GNU coreutils","https://www.gnu.org/software/coreutils/");
      pcVar4 = (char *)dcgettext(0,
                                 "General help using GNU software: <https://www.gnu.org/gethelp/>\n"
                                 ,5);
      fputs_unlocked(pcVar4,stdout);
      uVar5 = (~-x_26 * x_26 ^ 0xfffffffeU) & ~-x_26 * x_26;
      iVar6 = -0x394f7c78;
      if (y_27 < 10 != (uVar5 == 0)) {
        iVar6 = 0x56697883;
      }
      iVar2 = iVar6;
      if (uVar5 == 0) {
        iVar2 = 0x56697883;
      }
      if (9 < y_27) {
        iVar2 = iVar6;
      }
    }
  }
  if (iVar2 == 0x56697883) {
    return;
  }
LAB_00415530:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


void * xnmalloc(size_t n,size_t s)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  size_t __size;
  int iVar11;
  int iVar12;
  bool bVar13;
  byte local_60;
  char local_5d;
  void *local_58;
  void *local_38;
  
  iVar4 = y_2;
  uVar7 = (x + -1) * x;
  bVar13 = ((uVar7 ^ 0xfffffffe) & uVar7) == 0;
  bVar1 = y < 10;
  bVar2 = y < 10;
  uVar9 = (x_1 + -1) * x_1;
  uVar7 = ~uVar9 | 0xfffffffe;
  iVar5 = -0x466ffc17;
  if (y_2 < 10 != (uVar7 == 0xffffffff)) {
    iVar5 = -0x33781882;
  }
  iVar12 = -0x33781882;
  if (uVar7 != 0xffffffff) {
    iVar12 = iVar5;
  }
  if (9 < y_2) {
    iVar12 = iVar5;
  }
  bVar3 = bVar1 == bVar13;
  __size = s * n;
  uVar9 = uVar9 & 1;
  iVar5 = -0x663c93b9;
  if (bVar3 && (!bVar1 || !bVar13)) {
    iVar5 = 0x5abc4ffb;
  }
  iVar10 = 0x68ca93e4;
  if (bVar3 && (!bVar1 || !bVar13)) {
    iVar10 = 0x4b38d38c;
  }
  iVar11 = -0x4d753654;
  if (bVar3 && (!bVar1 || !bVar13)) {
    iVar11 = 0x4b38d38c;
  }
  iVar6 = 0xdcd168d;
LAB_00415640:
  do {
    while( true ) {
      while (iVar8 = iVar6, iVar6 = iVar8, iVar8 < 0x4b38d38c) {
        if (iVar8 < -0x33a627f8) {
          if (iVar8 == -0x663c93b9) {
            iVar6 = -0x33a627f8;
            if (local_5d != '\0') {
              iVar6 = -0x1a8970fd;
            }
          }
          else if (iVar8 == -0x4d753654) {
            return local_38;
          }
        }
        else {
          iVar6 = iVar10;
          if (iVar8 != -0x33a627f8) {
            if (iVar8 == 0xdcd168d) {
              iVar8 = 0x5abc4ffb;
              if (bVar13 != bVar2) {
                iVar8 = 0x6fa48656;
              }
              iVar6 = iVar8;
              if (bVar2) {
                iVar6 = 0x6fa48656;
              }
              if (!bVar13) {
                iVar6 = iVar8;
              }
            }
            else {
              iVar6 = iVar8;
              if (iVar8 == -0x1a8970fd) {
                    /* WARNING: Subroutine does not return */
                xalloc_die();
              }
            }
          }
        }
      }
      if (0x68ca93e3 < iVar8) break;
      if (iVar8 == 0x4b38d38c) {
        iVar6 = 0x748f5c0c;
        while( true ) {
          while (iVar8 = iVar6, iVar8 < 0x167eb126) {
            iVar6 = 0xeac824b;
            if (iVar8 != -0x466ffc17) {
              if (iVar8 == -0x33781882) {
                iVar6 = 0x4288da2f;
                if (local_60 != 0) {
                  iVar6 = 0x167eb126;
                }
              }
              else {
                if (iVar8 != 0xeac824b) goto LAB_00415980;
                local_58 = malloc(__size);
                local_60 = local_58 == (void *)0x0 && __size != 0;
                iVar6 = iVar12;
              }
            }
          }
          if (iVar8 == 0x4288da2f) break;
          if (iVar8 != 0x748f5c0c) {
            if (iVar8 == 0x167eb126) {
                    /* WARNING: Subroutine does not return */
              xalloc_die();
            }
LAB_00415980:
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          iVar8 = -0x466ffc17;
          if ((uVar9 == 0) != iVar4 < 10) {
            iVar8 = 0xeac824b;
          }
          iVar6 = iVar8;
          if (iVar4 < 10) {
            iVar6 = 0xeac824b;
          }
          if (uVar9 != 0) {
            iVar6 = iVar8;
          }
        }
        iVar6 = 0x68ca93e4;
      }
      else if (iVar8 == 0x5abc4ffb) {
        iVar6 = 0x6fa48656;
      }
    }
    if (iVar8 != 0x68ca93e4) {
      if (iVar8 == 0x6fa48656) {
        local_5d = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0) < n;
        iVar6 = iVar5;
      }
      goto LAB_00415640;
    }
    iVar6 = 0x748f5c0c;
    while( true ) {
      while (iVar8 = iVar6, iVar8 < 0x167eb126) {
        iVar6 = 0xeac824b;
        if (iVar8 != -0x466ffc17) {
          if (iVar8 == -0x33781882) {
            iVar6 = 0x4288da2f;
            if (local_60 != 0) {
              iVar6 = 0x167eb126;
            }
          }
          else {
            if (iVar8 != 0xeac824b) goto LAB_00415990;
            local_58 = malloc(__size);
            local_60 = ~((local_58 == (void *)0x0) != (__size != 0)) & __size != 0;
            iVar6 = iVar12;
          }
        }
      }
      if (iVar8 == 0x4288da2f) break;
      if (iVar8 != 0x748f5c0c) {
        if (iVar8 == 0x167eb126) {
                    /* WARNING: Subroutine does not return */
          xalloc_die();
        }
LAB_00415990:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar6 = -0x466ffc17;
      if (iVar4 < 10) {
        iVar6 = 0xeac824b;
      }
      if (uVar9 != 0) {
        iVar6 = -0x466ffc17;
      }
      if ((uVar9 == 0) != iVar4 < 10) {
        iVar6 = 0xeac824b;
      }
    }
    local_38 = local_58;
    iVar6 = iVar11;
  } while( true );
}


void * xmalloc(size_t n)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  byte local_31;
  void *local_30;
  
  uVar3 = ~((x_1 + -1) * x_1) | 0xfffffffe;
  iVar2 = -0x466ffc17;
  if (y_2 < 10 != (uVar3 == 0xffffffff)) {
    iVar2 = -0x33781882;
  }
  bVar6 = uVar3 == 0xffffffff;
  iVar5 = -0x33781882;
  if (!bVar6) {
    iVar5 = iVar2;
  }
  bVar1 = y_2 < 10;
  if (9 < y_2) {
    iVar5 = iVar2;
  }
  iVar2 = 0x748f5c0c;
  while( true ) {
    while (iVar4 = iVar2, iVar4 < 0x167eb126) {
      iVar2 = 0xeac824b;
      if (iVar4 != -0x466ffc17) {
        if (iVar4 == -0x33781882) {
          iVar2 = 0x4288da2f;
          if (local_31 != 0) {
            iVar2 = 0x167eb126;
          }
        }
        else {
          if (iVar4 != 0xeac824b) goto LAB_00415ac0;
          local_30 = malloc(n);
          local_31 = ~((local_30 == (void *)0x0) != (n != 0)) & n != 0;
          iVar2 = iVar5;
        }
      }
    }
    if (iVar4 == 0x4288da2f) {
      return local_30;
    }
    if (iVar4 != 0x748f5c0c) break;
    iVar4 = -0x466ffc17;
    if (bVar6 != bVar1) {
      iVar4 = 0xeac824b;
    }
    iVar2 = iVar4;
    if (bVar1) {
      iVar2 = 0xeac824b;
    }
    if (!bVar6) {
      iVar2 = iVar4;
    }
  }
  if (iVar4 == 0x167eb126) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
LAB_00415ac0:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


void * xnrealloc(void *p,size_t n,size_t s)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = 0xc5f0cb9d;
  while( true ) {
    uVar2 = uVar2 & 0x7fffffff;
    if (uVar2 == 0x368205c9) {
      pvVar1 = xrealloc(p,s * n);
      return pvVar1;
    }
    if (uVar2 != 0x45f0cb9d) break;
    uVar2 = 0xb68205c9;
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0) < n) {
      uVar2 = 0xf0be6b5d;
    }
  }
  if (uVar2 != 0x70be6b5d) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}


/* WARNING: Removing unreachable block (ram,0x00415d67) */
/* WARNING: Removing unreachable block (ram,0x00415bdf) */

void * xrealloc(void *p,size_t n)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *unaff_R12;
  bool bVar4;
  void *local_40;
  void *local_38;
  
  uVar1 = 0x4871ef24;
LAB_00415cf0:
  do {
    if (0x4871ef23 < (int)uVar1) {
      if (uVar1 != 0x612b1057) {
        if (uVar1 != 0x4871ef24) goto joined_r0x00415ba5;
        uVar1 = 0xcea08a9a;
        if (p != (void *)0x0) {
          uVar1 = 0xc42ab532;
        }
        if (n == 0) goto joined_r0x00415ba5;
        uVar1 = 0xcea08a9a;
        goto joined_r0x00415ba5;
      }
      return local_38;
    }
    if (uVar1 != 0x21aa27ee) {
      if (uVar1 != 0x3841a5af) goto joined_r0x00415ba5;
      uVar1 = 0x968c35b2;
      goto joined_r0x00415ba5;
    }
    uVar1 = 0xf0c42e77;
    unaff_R12 = local_40;
LAB_00415bab:
    do {
      while (-0x315f7567 < (int)uVar1) {
        if (uVar1 == 0xcea08a9a) {
          local_40 = realloc(p,n);
          uVar1 = 0x21aa27ee;
          if (n != 0) {
            uVar1 = 0xc0526602;
          }
          if ((n != 0) != (local_40 == (void *)0x0)) {
            uVar1 = 0x21aa27ee;
          }
        }
        else if (uVar1 == 0xf0c42e77) {
          bVar4 = (~((x_5 + -1) * x_5) | 0xfffffffeU) == 0xffffffff;
          uVar1 = 0x3841a5af;
          if (bVar4) {
            uVar1 = 0x968c35b2;
          }
          if (9 < y_6) {
            uVar1 = 0x3841a5af;
          }
          local_38 = unaff_R12;
          if (y_6 < 10 != bVar4) {
            uVar1 = 0x968c35b2;
          }
        }
joined_r0x00415ba5:
        if (0x21aa27ed < (int)uVar1) goto LAB_00415cf0;
      }
      if (uVar1 != 0x968c35b2) {
        if (uVar1 != 0xc42ab532) {
          if (uVar1 == 0xc0526602) {
                    /* WARNING: Subroutine does not return */
            xalloc_die();
          }
          goto joined_r0x00415ba5;
        }
        free(p);
        uVar1 = 0xf0c42e77;
        unaff_R12 = (void *)0x0;
        goto LAB_00415bab;
      }
      uVar2 = ~((x_5 + -1) * x_5) | 0xfffffffe;
      uVar3 = 0x3841a5af;
      if (y_6 < 10 != (uVar2 == 0xffffffff)) {
        uVar3 = 0x612b1057;
      }
      uVar1 = uVar3;
      if (uVar2 == 0xffffffff) {
        uVar1 = 0x612b1057;
      }
      if (9 < y_6) {
        uVar1 = uVar3;
      }
    } while (uVar1 < 0x21aa27ee);
  } while( true );
}


void * x2nrealloc(void *p,size_t *pn,size_t s)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong in_R8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  char local_62;
  char local_61;
  size_t local_60;
  ulong local_40;
  ulong local_38;
  
  bVar14 = ((~-x_7 * x_7 ^ 0xfffffffeU) & ~-x_7 * x_7) == 0;
  bVar1 = (int)y_8 < 10;
  bVar15 = bVar1 == bVar14 && (!bVar1 || !bVar14);
  iVar2 = 0x34e403c5;
  if (bVar15) {
    iVar2 = -0x66ea172a;
  }
  iVar13 = 0x7031f04e;
  if (bVar15) {
    iVar13 = 0x10d6a713;
  }
  iVar8 = -0x6147c0af;
  if (bVar15) {
    iVar8 = 0x10d6a713;
  }
  iVar5 = 0x321092fe;
  if (bVar15) {
    iVar5 = -0x34be4481;
  }
  iVar10 = 0x68204252;
  if (bVar15) {
    iVar10 = -0x34be4481;
  }
  iVar11 = 0x45175125;
  if (bVar15) {
    iVar11 = -0x707aa355;
  }
  iVar12 = 0xe38571c;
  if (bVar15) {
    iVar12 = -0x707aa355;
  }
  uVar9 = in_R8;
  iVar3 = -0x6971bc25;
  uVar7 = (ulong)(y_8 & 0xffffff00 | (uint)(bVar1 != bVar14 || bVar1 && bVar14));
  do {
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, iVar3 = iVar6, -0x34be4482 < iVar6) {
          if (iVar6 < 0x4497c0bd) {
            if (iVar6 < 0x10d6a713) {
              if (iVar6 == -0x34be4481) {
                iVar3 = 0x321092fe;
              }
              else if (iVar6 == 0xe38571c) {
                uVar9 = local_38;
                iVar3 = -0x54e97eed;
              }
            }
            else if (iVar6 == 0x10d6a713) {
              iVar3 = 0x7031f04e;
            }
            else if (iVar6 == 0x321092fe) {
              local_61 = SUB168((ZEXT416(0) << 0x40 | ZEXT816(0x5555555555555554)) / ZEXT816(s),0)
                         <= local_60;
              iVar3 = iVar10;
            }
            else if ((iVar6 == 0x34e403c5) && (iVar3 = -0x3fb193b3, local_62 != '\0')) {
              iVar3 = -0x5d30b416;
            }
          }
          else if (iVar6 < 0x534d9cae) {
            if (iVar6 == 0x45175125) {
              local_38 = (local_60 >> 1) + 1 + local_60;
              iVar3 = iVar12;
            }
            else if (iVar6 == 0x4e0c8af5) {
              uVar9 = uVar7;
              iVar3 = -0x54e97eed;
              if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0) < uVar7)
              {
                iVar3 = -0x7fbc4eb0;
              }
            }
            else if (iVar6 == 0x4497c0bd) {
                    /* WARNING: Subroutine does not return */
              xalloc_die();
            }
          }
          else {
            iVar3 = iVar13;
            if (iVar6 != 0x534d9cae) {
              if (iVar6 == 0x68204252) {
                iVar3 = -0x41b6da92;
                if (local_61 != '\0') {
                  iVar3 = 0x4497c0bd;
                }
              }
              else {
                iVar3 = iVar6;
                if (iVar6 == 0x7031f04e) {
                  local_40 = SUB168((ZEXT416(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(s),0) +
                             (ulong)(0x80 < s);
                  iVar3 = iVar8;
                }
              }
            }
          }
        }
        if (-0x5d30b417 < iVar6) break;
        if (iVar6 < -0x66ea172a) {
          if (iVar6 == -0x707aa355) {
            iVar3 = 0x45175125;
          }
          else if (iVar6 == -0x6971bc25) {
            iVar6 = -0x66ea172a;
            if (bVar14 != (int)y_8 < 10) {
              iVar6 = -0x4f80424a;
            }
            iVar3 = iVar6;
            if ((int)y_8 < 10) {
              iVar3 = -0x4f80424a;
            }
            if (!bVar14) {
              iVar3 = iVar6;
            }
          }
          else if (iVar6 == -0x7fbc4eb0) {
                    /* WARNING: Subroutine does not return */
            xalloc_die();
          }
        }
        else if (iVar6 == -0x66ea172a) {
          iVar3 = -0x4f80424a;
        }
        else if (iVar6 == -0x6147c0af) {
          iVar3 = 0x4e0c8af5;
          uVar7 = local_40;
        }
      }
      if (iVar6 < -0x4f80424a) break;
      if (iVar6 == -0x4f80424a) {
        local_62 = p != (void *)0x0;
        local_60 = *pn;
        iVar3 = iVar2;
      }
      else {
        iVar3 = iVar11;
        if (((iVar6 != -0x41b6da92) && (iVar3 = iVar6, iVar6 == -0x3fb193b3)) &&
           (iVar3 = 0x534d9cae, uVar7 = local_60, local_60 != 0)) {
          iVar3 = 0x4e0c8af5;
        }
      }
    }
    iVar3 = iVar5;
  } while ((iVar6 == -0x5d30b416) || (iVar3 = iVar6, iVar6 != -0x54e97eed));
  *pn = uVar9;
  pvVar4 = xrealloc(p,s * uVar9);
  return pvVar4;
}


char * xcharalloc(size_t n)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char local_31;
  char *local_30;
  
  bVar5 = (~((x_1 + -1) * x_1) | 0xfffffffeU) == 0xffffffff;
  iVar4 = -0x466ffc17;
  if (bVar5) {
    iVar4 = -0x33781882;
  }
  bVar1 = y_2 < 10;
  if (9 < y_2) {
    iVar4 = -0x466ffc17;
  }
  if (y_2 < 10 != bVar5) {
    iVar4 = -0x33781882;
  }
  iVar3 = 0x748f5c0c;
  while( true ) {
    while (iVar2 = iVar3, iVar2 < 0x167eb126) {
      iVar3 = 0xeac824b;
      if (iVar2 != -0x466ffc17) {
        if (iVar2 == -0x33781882) {
          iVar3 = 0x4288da2f;
          if (local_31 != '\0') {
            iVar3 = 0x167eb126;
          }
        }
        else {
          if (iVar2 != 0xeac824b) goto LAB_004162f0;
          local_30 = (char *)malloc(n);
          local_31 = local_30 == (char *)0x0 && n != 0;
          iVar3 = iVar4;
        }
      }
    }
    if (iVar2 == 0x4288da2f) {
      return local_30;
    }
    if (iVar2 != 0x748f5c0c) break;
    iVar3 = -0x466ffc17;
    if (bVar1) {
      iVar3 = 0xeac824b;
    }
    if (!bVar5) {
      iVar3 = -0x466ffc17;
    }
    if (bVar5 != bVar1) {
      iVar3 = 0xeac824b;
    }
  }
  if (iVar2 == 0x167eb126) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
LAB_004162f0:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


void * x2realloc(void *p,size_t *pn)

{
  void *pvVar1;
  
  pvVar1 = x2nrealloc(p,pn,1);
  return pvVar1;
}


void * xzalloc(size_t s)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  char local_29;
  void *local_28;
  
  uVar3 = (x_1 + -1) * x_1;
  uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
  bVar6 = uVar3 == 0;
  iVar5 = -0x466ffc17;
  if (uVar3 == 0) {
    iVar5 = -0x33781882;
  }
  bVar1 = y_2 < 10;
  if (9 < y_2) {
    iVar5 = -0x466ffc17;
  }
  if (y_2 < 10 != bVar6) {
    iVar5 = -0x33781882;
  }
  iVar2 = 0x748f5c0c;
  while( true ) {
    while (iVar4 = iVar2, iVar4 < 0x167eb126) {
      iVar2 = 0xeac824b;
      if (iVar4 != -0x466ffc17) {
        if (iVar4 == -0x33781882) {
          iVar2 = 0x4288da2f;
          if (local_29 != '\0') {
            iVar2 = 0x167eb126;
          }
        }
        else {
          if (iVar4 != 0xeac824b) goto LAB_00416440;
          local_28 = malloc(s);
          local_29 = local_28 == (void *)0x0 && s != 0;
          iVar2 = iVar5;
        }
      }
    }
    if (iVar4 == 0x4288da2f) {
      memset(local_28,0,s);
      return local_28;
    }
    if (iVar4 != 0x748f5c0c) break;
    iVar4 = -0x466ffc17;
    if (bVar6 != bVar1) {
      iVar4 = 0xeac824b;
    }
    iVar2 = iVar4;
    if (bVar1) {
      iVar2 = 0xeac824b;
    }
    if (!bVar6) {
      iVar2 = iVar4;
    }
  }
  if (iVar4 == 0x167eb126) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
LAB_00416440:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


void * xcalloc(size_t n,size_t s)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  char local_39;
  void *local_38;
  
  bVar7 = (~((x_15 + -1) * x_15) | 0xfffffffeU) == 0xffffffff;
  bVar1 = y_16 < 10;
  bVar2 = y_16 < 10;
  iVar3 = -0x71336310;
  if (bVar1 == bVar7 && (!bVar1 || !bVar7)) {
    iVar3 = -0x3889fe5f;
  }
  iVar4 = 0x2d3f59e8;
  if (bVar1 != bVar7 || bVar1 && bVar7) {
    iVar4 = 0x34e098b0;
  }
  iVar5 = 0x33f61001;
  while( true ) {
    while( true ) {
      while (iVar6 = iVar5, iVar6 < 0x2d3f59e8) {
        if (iVar6 < -0x2f787b5a) {
          if (iVar6 == -0x71336310) {
            iVar5 = 0x64abcc2e;
            if (local_39 != '\0') {
              iVar5 = -0x2f787b5a;
            }
          }
          else {
            if (iVar6 != -0x3889fe5f) goto LAB_00416600;
            iVar5 = -0x2245b117;
          }
        }
        else {
          iVar5 = iVar4;
          if (iVar6 != -0x2f787b5a) {
            if (iVar6 != -0x2245b117) goto LAB_00416600;
            local_39 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0) < n
            ;
            iVar5 = iVar3;
          }
        }
      }
      if (iVar6 < 0x501a4db0) break;
      if (iVar6 == 0x501a4db0) {
        return local_38;
      }
      if (iVar6 != 0x64abcc2e) goto LAB_00416600;
      local_38 = calloc(n,s);
      iVar5 = -0x2f787b5a;
      if (local_38 != (void *)0x0) {
        iVar5 = 0x501a4db0;
      }
    }
    if (iVar6 != 0x33f61001) break;
    iVar6 = -0x3889fe5f;
    if (bVar7 != bVar2) {
      iVar6 = -0x2245b117;
    }
    iVar5 = iVar6;
    if (bVar2) {
      iVar5 = -0x2245b117;
    }
    if (!bVar7) {
      iVar5 = iVar6;
    }
  }
  if (iVar6 == 0x2d3f59e8) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  if (iVar6 == 0x34e098b0) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
LAB_00416600:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


void * xmemdup(void *p,size_t s)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char local_39;
  void *local_38;
  
  uVar4 = (x_1 + -1) * x_1;
  uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
  bVar6 = uVar4 == 0;
  iVar3 = -0x466ffc17;
  if (y_2 < 10 != bVar6) {
    iVar3 = -0x33781882;
  }
  iVar5 = -0x33781882;
  if (uVar4 != 0) {
    iVar5 = iVar3;
  }
  bVar1 = y_2 < 10;
  if (9 < y_2) {
    iVar5 = iVar3;
  }
  iVar3 = 0x748f5c0c;
  while( true ) {
    while (iVar2 = iVar3, iVar2 < 0x167eb126) {
      iVar3 = 0xeac824b;
      if (iVar2 != -0x466ffc17) {
        if (iVar2 == -0x33781882) {
          iVar3 = 0x4288da2f;
          if (local_39 != '\0') {
            iVar3 = 0x167eb126;
          }
        }
        else {
          if (iVar2 != 0xeac824b) goto LAB_00416770;
          local_38 = malloc(s);
          local_39 = local_38 == (void *)0x0 && s != 0;
          iVar3 = iVar5;
        }
      }
    }
    if (iVar2 == 0x4288da2f) {
      memcpy(local_38,p,s);
      return local_38;
    }
    if (iVar2 != 0x748f5c0c) break;
    iVar3 = -0x466ffc17;
    if (bVar1) {
      iVar3 = 0xeac824b;
    }
    if (!bVar6) {
      iVar3 = -0x466ffc17;
    }
    if (bVar6 != bVar1) {
      iVar3 = 0xeac824b;
    }
  }
  if (iVar2 == 0x167eb126) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
LAB_00416770:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


char * xstrdup(char *string)

{
  bool bVar1;
  bool bVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  byte local_43;
  char *local_40;
  char *local_38;
  
  bVar8 = (~((x_19 + -1) * x_19) | 0xfffffffeU) == 0xffffffff;
  bVar1 = y_20 < 10;
  iVar6 = -0xfb2a63f;
  do {
    while (iVar6 < 0xfb27fec) {
      if (iVar6 == -0x36ed483c) {
        sVar3 = strlen(string);
        sVar3 = sVar3 + 1;
        bVar9 = (~(~-x_1 * x_1) | 0xfffffffeU) == 0xffffffff;
        iVar6 = -0x466ffc17;
        if (bVar9) {
          iVar6 = -0x33781882;
        }
        bVar2 = y_2 < 10;
        if (9 < y_2) {
          iVar6 = -0x466ffc17;
        }
        if (y_2 < 10 != bVar9) {
          iVar6 = -0x33781882;
        }
        iVar4 = 0x748f5c0c;
        while( true ) {
          while (iVar5 = iVar4, iVar5 < 0x167eb126) {
            iVar4 = 0xeac824b;
            if (iVar5 != -0x466ffc17) {
              if (iVar5 == -0x33781882) {
                iVar4 = 0x4288da2f;
                if (local_43 != 0) {
                  iVar4 = 0x167eb126;
                }
              }
              else {
                if (iVar5 != 0xeac824b) goto LAB_00416af0;
                local_40 = (char *)malloc(sVar3);
                local_43 = local_40 == (char *)0x0 && sVar3 != 0;
                iVar4 = iVar6;
              }
            }
          }
          if (iVar5 == 0x4288da2f) break;
          if (iVar5 != 0x748f5c0c) {
            if (iVar5 == 0x167eb126) {
                    /* WARNING: Subroutine does not return */
              xalloc_die();
            }
LAB_00416af0:
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          iVar5 = -0x466ffc17;
          if (bVar9 != bVar2) {
            iVar5 = 0xeac824b;
          }
          iVar4 = iVar5;
          if (bVar2) {
            iVar4 = 0xeac824b;
          }
          if (!bVar9) {
            iVar4 = iVar5;
          }
        }
        memcpy(local_40,string,sVar3);
        iVar6 = 0x42ff5b85;
        break;
      }
      if (iVar6 != -0xfb2a63f) goto LAB_00416b20;
      iVar4 = -0x36ed483c;
      if (bVar8 != bVar1) {
        iVar4 = 0x42ff5b85;
      }
      iVar6 = iVar4;
      if (bVar1) {
        iVar6 = 0x42ff5b85;
      }
      if (!bVar8) {
        iVar6 = iVar4;
      }
    }
    if (iVar6 != 0x42ff5b85) {
      if (iVar6 == 0xfb27fec) {
        return local_38;
      }
LAB_00416b20:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    sVar3 = strlen(string);
    uVar7 = ~((x_1 + -1) * x_1) | 0xfffffffe;
    iVar6 = -0x466ffc17;
    if (y_2 < 10 != (uVar7 == 0xffffffff)) {
      iVar6 = -0x33781882;
    }
    bVar9 = uVar7 == 0xffffffff;
    iVar4 = iVar6;
    if (bVar9) {
      iVar4 = -0x33781882;
    }
    bVar2 = y_2 < 10;
    if (9 < y_2) {
      iVar4 = iVar6;
    }
    sVar3 = sVar3 + 1;
    iVar6 = 0x748f5c0c;
    while( true ) {
      while (iVar5 = iVar6, iVar5 < 0x167eb126) {
        iVar6 = 0xeac824b;
        if (iVar5 != -0x466ffc17) {
          if (iVar5 == -0x33781882) {
            iVar6 = 0x4288da2f;
            if (local_43 != 0) {
              iVar6 = 0x167eb126;
            }
          }
          else {
            if (iVar5 != 0xeac824b) goto LAB_00416b00;
            local_40 = (char *)malloc(sVar3);
            local_43 = ~((local_40 == (char *)0x0) != (sVar3 != 0)) & sVar3 != 0;
            iVar6 = iVar4;
          }
        }
      }
      if (iVar5 == 0x4288da2f) break;
      if (iVar5 != 0x748f5c0c) {
        if (iVar5 == 0x167eb126) {
                    /* WARNING: Subroutine does not return */
          xalloc_die();
        }
LAB_00416b00:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar6 = -0x466ffc17;
      if (bVar2) {
        iVar6 = 0xeac824b;
      }
      if (!bVar9) {
        iVar6 = -0x466ffc17;
      }
      if (bVar9 != bVar2) {
        iVar6 = 0xeac824b;
      }
    }
    memcpy(local_40,string,sVar3);
    local_38 = local_40;
    bVar9 = (~(~-x_19 * x_19) | 0xfffffffeU) == 0xffffffff;
    iVar6 = -0x36ed483c;
    if (bVar9) {
      iVar6 = 0xfb27fec;
    }
    if (9 < y_20) {
      iVar6 = -0x36ed483c;
    }
    if (y_20 < 10 != bVar9) {
      iVar6 = 0xfb27fec;
    }
  } while( true );
}


void xalloc_die(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = exit_failure;
  uVar2 = dcgettext(0,"memory exhausted",5);
  error(iVar1,0,"%s",uVar2);
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Removing unreachable block (ram,0x00416c2d) */
/* WARNING: Removing unreachable block (ram,0x00416d9c) */
/* WARNING: Removing unreachable block (ram,0x00416bf9) */

size_t rpl_mbrtowc(wchar_t *pwc,char *s,size_t n,mbstate_t *ps)

{
  mbstate_t *__p;
  size_t sVar1;
  _Bool _Var2;
  uint uVar3;
  uint uVar4;
  mbstate_t **ppmVar5;
  uint uVar6;
  wchar_t *unaff_R12;
  size_t unaff_R13;
  bool bVar7;
  mbstate_t *apmStack_70 [2];
  size_t local_60;
  size_t local_58;
  wchar_t *local_50;
  wchar_t *local_48;
  wchar_t *local_40;
  char local_33;
  char local_32;
  char local_31;
  
  ppmVar5 = apmStack_70 + 1;
  apmStack_70[1] = ps;
  local_60 = n;
  uVar3 = (x + -1) * x;
  local_31 = ((uVar3 ^ 0xfffffffe) & uVar3) == 0;
  local_32 = y < 10;
  uVar3 = 0x6d5ca63a;
LAB_00416d60:
  do {
    if (0x6d351bb0 < (int)uVar3) {
      if (uVar3 == 0x6d351bb1) {
        unaff_R12 = pwc;
        uVar3 = 0x4668a530;
        if (local_33 == '\0') goto joined_r0x00416e8a;
        uVar3 = 0x367d1905;
        goto joined_r0x00416e8a;
      }
      if (uVar3 == 0x7a71230b) {
        *(undefined8 *)((long)ppmVar5 + -8) = 0x416e9c;
        _Var2 = hard_locale(0);
        uVar3 = 0x1e251a2d;
        goto LAB_00416bb4;
      }
      if (uVar3 == 0x6d5ca63a) {
        uVar3 = 0xdf42ca5;
        if (local_32 != '\0') {
          uVar3 = 0xbc393543;
        }
        if (local_31 == '\0') {
          uVar3 = 0xdf42ca5;
        }
        if (local_31 != local_32) {
          uVar3 = 0xbc393543;
        }
      }
joined_r0x00416e64:
      if ((int)uVar3 < 0x4d56130e) {
LAB_00416bcb:
        sVar1 = local_60;
        __p = apmStack_70[1];
        if ((int)uVar3 < 0x1e251a2d) {
          if ((int)uVar3 < -0x595b3d3) {
            if (uVar3 == 0xbc393543) {
              ppmVar5 = (mbstate_t **)((long)ppmVar5 + -0x10);
              local_48 = (wchar_t *)ppmVar5;
              local_50 = (wchar_t *)ppmVar5;
              local_33 = pwc != (wchar_t *)0x0;
              uVar4 = ~((x + -1) * x) | 0xfffffffe;
              uVar6 = 0xdf42ca5;
              if (y < 10 != (uVar4 == 0xffffffff)) {
                uVar6 = 0x6d351bb1;
              }
              uVar3 = uVar6;
              if (uVar4 == 0xffffffff) {
                uVar3 = 0x6d351bb1;
              }
              if (9 < y) {
                uVar3 = uVar6;
              }
joined_r0x00416e8a:
              if (0x4d56130d < uVar3) goto LAB_00416d60;
            }
            else {
              if (uVar3 != 0xe2668029) goto joined_r0x00416e64;
              uVar3 = 0xfa6a4c2d;
              unaff_R13 = 1;
            }
            goto LAB_00416bcb;
          }
          if (uVar3 == 0xdf42ca5) {
            uVar3 = 0xbc393543;
            goto LAB_00416bcb;
          }
          if (uVar3 == 0xfa6a4c2d) {
            return unaff_R13;
          }
          goto joined_r0x00416e64;
        }
        if (uVar3 == 0x1e251a2d) {
          uVar4 = (x + -1) * x;
          uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
          uVar6 = 0x4d56130e;
          if (y < 10 != (uVar4 == 0)) {
            uVar6 = 0x596d88bd;
          }
          uVar3 = uVar6;
          if (uVar4 == 0) {
            uVar3 = 0x596d88bd;
          }
          if (9 < y) {
            uVar3 = uVar6;
          }
          goto joined_r0x00416e8a;
        }
        if (uVar3 != 0x367d1905) {
          if (uVar3 != 0x4668a530) goto joined_r0x00416e64;
          uVar3 = 0x367d1905;
          unaff_R12 = local_48;
          goto LAB_00416bcb;
        }
        local_40 = unaff_R12;
        *(undefined8 *)((long)ppmVar5 + -8) = 0x416d24;
        local_58 = mbrtowc(unaff_R12,s,local_60,(mbstate_t *)__p);
        uVar3 = 0x6401cbef;
        if (sVar1 != 0) {
          uVar3 = 0x7a71230b;
        }
        _Var2 = (sVar1 != 0) != 0xfffffffffffffffd < local_58;
LAB_00416bb4:
        if (_Var2 != false) {
          uVar3 = 0x6401cbef;
        }
        goto joined_r0x00416e64;
      }
      goto LAB_00416d60;
    }
    if (uVar3 != 0x4d56130e) {
      if (uVar3 == 0x596d88bd) {
        *local_40 = (uint)(byte)*s;
        bVar7 = (~((x + -1) * x) | 0xfffffffeU) == 0xffffffff;
        uVar3 = 0x4d56130e;
        if (bVar7) {
          uVar3 = 0xe2668029;
        }
        if (9 < y) {
          uVar3 = 0x4d56130e;
        }
        if (y < 10 != bVar7) {
          uVar3 = 0xe2668029;
        }
      }
      else if (uVar3 == 0x6401cbef) {
        uVar3 = 0xfa6a4c2d;
        unaff_R13 = local_58;
        goto LAB_00416bcb;
      }
      goto joined_r0x00416e64;
    }
    *local_40 = (uint)(byte)*s;
    uVar3 = 0x596d88bd;
  } while( true );
}


int c_strcasecmp(char *s1,char *s2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *unaff_R13;
  byte *unaff_R14;
  bool bVar10;
  bool bVar11;
  byte local_59;
  char local_56;
  char local_55;
  uint local_54;
  byte *local_50;
  byte *local_48;
  byte *local_40;
  byte *local_38;
  
  uVar6 = ~((x + -1) * x) | 0xfffffffe;
  bVar10 = uVar6 == 0xffffffff;
  bVar2 = !bVar10;
  uVar5 = 0xb978c670;
  if (y < 10 != bVar10) {
    uVar5 = 0xfcc54c71;
  }
  bVar11 = uVar6 == 0xffffffff;
  uVar6 = 0xfcc54c71;
  if (!bVar11) {
    uVar6 = uVar5;
  }
  if (9 < y) {
    uVar6 = uVar5;
  }
  bVar3 = 9 < y;
  uVar5 = 0xd0fcde82;
  if (bVar3 || bVar2) {
    uVar5 = 0xcad73c23;
  }
  uVar9 = 0xcad73c23;
  if (!bVar3 && !bVar2) {
    uVar9 = 0xb43e5563;
  }
  if (y < 10 != bVar10) {
    uVar5 = 0xd0fcde82;
  }
  uVar4 = uVar5 & 0xffffff00 | (uint)(bVar3 != bVar2);
  if (bVar3 != bVar2) {
    uVar9 = 0xb43e5563;
  }
  uVar8 = 0x81bddf29;
  do {
    while( true ) {
      while( true ) {
        while (uVar7 = uVar8, uVar8 = uVar7, (int)uVar7 < -0x1fcacbd7) {
          if ((int)uVar7 < -0x3528c3dd) {
            if (uVar7 == 0x81bddf29) {
              uVar8 = 0xb978c670;
              if (y < 10) {
                uVar8 = 0xe0353429;
              }
              if (!bVar11) {
                uVar8 = 0xb978c670;
              }
              if (bVar11 != y < 10) {
                uVar8 = 0xe0353429;
              }
            }
            else if (uVar7 == 0xb43e5563) {
              unaff_R13 = local_40;
              unaff_R14 = local_38;
              uVar8 = 0x1688152a;
              if (local_55 != '\0') {
                uVar8 = 0x155fe585;
              }
            }
            else if (uVar7 == 0xb978c670) {
              uVar8 = 0xe0353429;
            }
          }
          else if (uVar7 == 0xcad73c23) {
            uVar8 = 0xd0fcde82;
          }
          else if (uVar7 == 0xd0fcde82) {
            local_40 = local_50 + 1;
            local_38 = local_48 + 1;
            local_55 = local_54 == local_59;
            uVar8 = uVar9;
          }
          else if (uVar7 == 0xd474a755) {
            uVar4 = 0;
            uVar8 = 0x7ed6ba6d;
          }
        }
        if (0x16881529 < (int)uVar7) break;
        if (uVar7 == 0xe0353429) {
          local_56 = s1 == s2;
          uVar8 = uVar6;
        }
        else if (uVar7 == 0xfcc54c71) {
          unaff_R13 = (byte *)s1;
          unaff_R14 = (byte *)s2;
          uVar8 = 0x155fe585;
          if (local_56 != '\0') {
            uVar8 = 0xd474a755;
          }
        }
        else if (uVar7 == 0x155fe585) {
          bVar1 = *unaff_R13;
          uVar8 = bVar1 + 0x20;
          if (0x19 < bVar1 - 0x41) {
            uVar8 = (uint)bVar1;
          }
          local_59 = *unaff_R14;
          if (local_59 - 0x41 < 0x1a) {
            local_59 = local_59 + 0x20;
          }
          local_54 = uVar8 & 0xff;
          uVar8 = 0x1f68d386;
          local_50 = unaff_R13;
          local_48 = unaff_R14;
          if (local_54 == 0) {
            uVar8 = 0x1688152a;
          }
        }
      }
      if (uVar7 != 0x1688152a) break;
      uVar4 = local_54 - local_59;
      uVar8 = 0x7ed6ba6d;
    }
    uVar8 = uVar5;
  } while ((uVar7 == 0x1f68d386) || (uVar8 = uVar7, uVar7 != 0x7ed6ba6d));
  return uVar4;
}


/* WARNING: Removing unreachable block (ram,0x00417208) */

int close_stream(FILE *stream)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int unaff_R12D;
  bool bVar8;
  
  lVar4 = __fpending();
  uVar1 = stream->_flags;
  iVar2 = rpl_fclose(stream);
  uVar3 = 0x81dfa085;
LAB_0041722b:
  do {
    if ((int)uVar3 < -0x2fbd8b84) {
      if (uVar3 == 0x81dfa085) {
        uVar3 = 0x7d40287d;
        bVar8 = (~uVar1 | 0xffffffdf) == 0xffffffff;
      }
      else {
        if (uVar3 != 0xa00cd324) {
          if (uVar3 != 0xb4b53cdf) goto joined_r0x004172a6;
          uVar3 = 0x447bd09d;
          unaff_R12D = 0;
          goto LAB_00417320;
        }
        piVar5 = __errno_location();
        uVar3 = 0xb4b53cdf;
        bVar8 = *piVar5 == 9;
      }
LAB_0041729e:
      if (bVar8) goto joined_r0x004172a6;
      uVar3 = 0xd042747c;
      goto joined_r0x004172a6;
    }
    if (uVar3 == 0xd042747c) {
      uVar3 = 0x7dcd1901;
      if (iVar2 != 0) {
        uVar3 = 0x5630b2df;
      }
    }
    else {
      if (uVar3 != 0xc239768) {
        if (uVar3 != 0x292a65ff) goto joined_r0x004172a6;
        uVar3 = 0xa00cd324;
        bVar8 = lVar4 == 0;
        goto LAB_0041729e;
      }
      uVar6 = (x + -1) * x;
      uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
      uVar7 = 0x4bd3c678;
      if (y < 10 != (uVar6 == 0)) {
        uVar7 = 0x39f8b9e9;
      }
      uVar3 = uVar7;
      if (uVar6 == 0) {
        uVar3 = 0x39f8b9e9;
      }
      if (9 < y) {
        uVar3 = uVar7;
      }
    }
    while (0x39f8b9e8 < uVar3) {
LAB_00417320:
      while( true ) {
        while (0x5630b2de < (int)uVar3) {
          if (uVar3 == 0x5630b2df) {
            uVar3 = 0x447bd09d;
            unaff_R12D = -1;
          }
          else {
            if (uVar3 == 0x7d40287d) {
              uVar3 = 0xb4b53cdf;
              if (iVar2 != 0) {
                uVar3 = 0xc239768;
              }
              goto joined_r0x004172a6;
            }
            if (uVar3 != 0x7dcd1901) goto joined_r0x004172a6;
            piVar5 = __errno_location();
            *piVar5 = 0;
            uVar3 = 0x5630b2df;
          }
        }
        if (uVar3 == 0x39f8b9e9) break;
        if (uVar3 == 0x4bd3c678) {
          uVar3 = 0x39f8b9e9;
        }
        else if (uVar3 == 0x447bd09d) {
          return unaff_R12D;
        }
joined_r0x004172a6:
        if ((int)uVar3 < 0x39f8b9e9) goto LAB_0041722b;
      }
      bVar8 = (~((x + -1) * x) | 0xfffffffeU) == 0xffffffff;
      uVar3 = 0x4bd3c678;
      if (bVar8) {
        uVar3 = 0x292a65ff;
      }
      if (9 < y) {
        uVar3 = 0x4bd3c678;
      }
      if (y < 10 != bVar8) {
        uVar3 = 0x292a65ff;
      }
    }
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x0041747b) */
/* WARNING: Removing unreachable block (ram,0x004174c9) */

_Bool hard_locale(int category)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte unaff_BPL;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  char local_3a;
  char local_39;
  char *local_38;
  
  bVar6 = (~((x + -1) * x) | 0xfffffffeU) == 0xffffffff;
  bVar1 = y < 10;
  uVar2 = 0x815a49dd;
LAB_0041749b:
  do {
    if (-0x5932ce5a < (int)uVar2) {
      if (uVar2 == 0xa6cd31a7) {
        iVar3 = strcmp(local_38,"C");
        local_39 = iVar3 == 0;
        bVar7 = (~((x + -1) * x) | 0xfffffffeU) == 0xffffffff;
        uVar2 = 0x7a3360af;
        if (bVar7) {
          uVar2 = 0xefa00d1b;
        }
        if (9 < y) {
          uVar2 = 0x7a3360af;
        }
        if (y < 10 != bVar7) {
          uVar2 = 0xefa00d1b;
        }
      }
      else if (uVar2 == 0xefa00d1b) {
        uVar2 = 0x92b9c691;
        if (local_39 != '\0') {
          uVar2 = 0xfdcdbfb5;
        }
      }
      else if (uVar2 == 0xfdcdbfb5) {
        uVar2 = 0xa3397a2f;
        unaff_BPL = 0;
        goto LAB_0041749b;
      }
joined_r0x00417544:
      if (0x466b0ecf < (int)uVar2) {
LAB_004175c0:
        while( true ) {
          while( true ) {
            while ((int)uVar2 < 0x7558b799) {
              if (uVar2 == 0x466b0ed0) {
                bVar7 = (~(~-x * x) | 0xfffffffeU) == 0xffffffff;
                uVar2 = 0x7a3360af;
                if (bVar7) {
                  uVar2 = 0xa6cd31a7;
                }
                if (9 < y) {
                  uVar2 = 0x7a3360af;
                }
                if (y < 10 != bVar7) {
                  uVar2 = 0xa6cd31a7;
                }
                goto joined_r0x004176ed;
              }
              if (uVar2 != 0x537e2a56) goto joined_r0x00417544;
              setlocale(category,(char *)0x0);
              uVar2 = 0x7558b799;
            }
            if (uVar2 != 0x7558b799) break;
            local_38 = setlocale(category,(char *)0x0);
            local_3a = local_38 != (char *)0x0;
            uVar4 = ~((x + -1) * x) | 0xfffffffe;
            uVar5 = 0x537e2a56;
            if (y < 10 != (uVar4 == 0xffffffff)) {
              uVar5 = 0x7b90741d;
            }
            uVar2 = uVar5;
            if (uVar4 == 0xffffffff) {
              uVar2 = 0x7b90741d;
            }
            if (9 < y) {
              uVar2 = uVar5;
            }
            if (uVar2 < 0x466b0ed0) goto LAB_0041749b;
          }
          if (uVar2 == 0x7a3360af) break;
          if (uVar2 != 0x7b90741d) goto joined_r0x00417544;
          uVar2 = 0xa3397a2f;
          if (local_3a != '\0') {
            uVar2 = 0x466b0ed0;
          }
LAB_004175f7:
          unaff_BPL = 1;
joined_r0x004176ed:
          if ((int)uVar2 < 0x466b0ed0) goto LAB_0041749b;
        }
        uVar2 = 0xa6cd31a7;
        goto joined_r0x00417544;
      }
      goto LAB_0041749b;
    }
    if (uVar2 != 0x815a49dd) {
      if (uVar2 == 0x92b9c691) {
        iVar3 = strcmp(local_38,"POSIX");
        uVar2 = 0xa3397a2f;
        if (iVar3 != 0) goto LAB_004175f7;
        uVar2 = 0xfdcdbfb5;
        goto LAB_004175f7;
      }
      if (uVar2 == 0xa3397a2f) {
        return (_Bool)(unaff_BPL & 1);
      }
      goto joined_r0x00417544;
    }
    uVar4 = 0x537e2a56;
    if (bVar6 != bVar1) {
      uVar4 = 0x7558b799;
    }
    uVar2 = uVar4;
    if (bVar1) {
      uVar2 = 0x7558b799;
    }
    if (!bVar6) {
      uVar2 = uVar4;
    }
    if (0x466b0ecf < uVar2) goto LAB_004175c0;
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x0041776d) */

char * locale_charset(void)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char *local_30;
  
  bVar3 = ((~-x * x ^ 0xfffffffeU) & ~-x * x) == 0;
  bVar1 = y < 10;
  iVar2 = 0xa82bd3e;
  do {
    if (iVar2 != -0x5c858314) {
      if (iVar2 == 0xa82bd3e) {
        iVar2 = -0x5c858314;
        if (bVar1) {
          iVar2 = -0x76d983f4;
        }
        if (!bVar3) {
          iVar2 = -0x5c858314;
        }
        if (bVar3 == bVar1) goto joined_r0x0041781d;
        iVar2 = -0x76d983f4;
        goto joined_r0x0041781d;
      }
LAB_00417840:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    nl_langinfo(0xe);
    iVar2 = -0x76d983f4;
    do {
      if (iVar2 != -0x76d983f4) {
        if (iVar2 == -0x5f75ca0f) {
          return local_30;
        }
        goto LAB_00417840;
      }
      local_30 = nl_langinfo(0xe);
      if (local_30 == (char *)0x0) {
        local_30 = "";
      }
      if (*local_30 == '\0') {
        local_30 = "ASCII";
      }
      bVar4 = (~((x + -1) * x) | 0xfffffffeU) == 0xffffffff;
      iVar2 = -0x5c858314;
      if (bVar4) {
        iVar2 = -0x5f75ca0f;
      }
      if (9 < y) {
        iVar2 = -0x5c858314;
      }
      if (y < 10 != bVar4) {
        iVar2 = -0x5f75ca0f;
      }
joined_r0x0041781d:
    } while (iVar2 < -0x5c858314);
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00417950) */
/* WARNING: Removing unreachable block (ram,0x004178dd) */

int rpl_fclose(FILE *fp)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  __off_t _Var4;
  uint uVar5;
  int unaff_EBP;
  int iVar6;
  int unaff_R12D;
  int unaff_R14D;
  bool bVar7;
  char local_3a;
  char local_39;
  int local_38;
  
  iVar1 = fileno((FILE *)fp);
  iVar2 = 0x4fd7b5fd;
LAB_00417a40:
  while( true ) {
    while (0x53ca0d43 < iVar2) {
      if (iVar2 < 0x5deac402) {
        if (iVar2 != 0x53ca0d44) {
          if (iVar2 != 0x5c15b693) goto joined_r0x00417a09;
          bVar7 = (~((x + -1) * x) | 0xfffffffeU) == 0xffffffff;
          iVar6 = 0x5e008e78;
          iVar2 = 0x5deac402;
          if (bVar7) {
            iVar2 = 0x5e008e78;
          }
          if (y < 10) goto LAB_00417886;
          iVar2 = 0x5deac402;
          goto LAB_00417886;
        }
        uVar5 = (x + -1) * x;
        iVar6 = -0x532c2448;
        goto LAB_00417ba6;
      }
      if (iVar2 != 0x5deac402) {
        if (iVar2 != 0x5e008e78) goto joined_r0x00417a09;
        iVar2 = __freading(fp);
        local_3a = iVar2 != 0;
        uVar5 = ~((x + -1) * x) | 0xfffffffe;
        iVar6 = 0x5deac402;
        if (y < 10 != (uVar5 == 0xffffffff)) {
          iVar6 = -0x5c7ffbb5;
        }
        iVar2 = iVar6;
        if (uVar5 == 0xffffffff) {
          iVar2 = -0x5c7ffbb5;
        }
        if (y < 10) goto joined_r0x00417b63;
        iVar2 = iVar6;
        goto joined_r0x00417b63;
      }
      __freading(fp);
      iVar2 = 0x5e008e78;
    }
    if (iVar2 < 0x5027b5ab) {
      if (iVar2 == 0x4fd7b5fd) {
        iVar2 = ((iVar1 >> 0x1f ^ 0xd09f0ec4U) & iVar1 >> 0x1f) + 0x5c15b693;
        goto joined_r0x00417b63;
      }
      if (iVar2 != 0x479d88d) goto joined_r0x00417a09;
      return unaff_R14D;
    }
    if (iVar2 != 0x5027b5ab) break;
    iVar2 = 0x479d88d;
    unaff_R14D = unaff_EBP;
  }
  if (iVar2 != 0x520f1f8b) goto joined_r0x00417a09;
  bVar7 = local_39 == '\0';
  iVar6 = -0x529a4163;
LAB_00417ae1:
  iVar2 = -0x2fc8c7a;
  if (!bVar7) {
    iVar2 = iVar6;
  }
  unaff_R12D = 0;
joined_r0x00417b63:
  if (iVar2 < 0x479d88d) {
LAB_0041789b:
    while (iVar2 < -0x532c2448) {
      if (iVar2 < -0x5c7ffbb5) {
        if (iVar2 == -0x74895832) {
          unaff_R14D = fclose((FILE *)fp);
          iVar2 = 0x479d88d;
          goto LAB_00417a40;
        }
        if (iVar2 != -0x644d2c08) goto joined_r0x00417a09;
        iVar2 = fileno((FILE *)fp);
        lseek(iVar2,0,1);
        iVar2 = -0x532c2448;
      }
      else {
        if (iVar2 == -0x5c7ffbb5) {
          bVar7 = local_3a == '\0';
          iVar2 = -0x529a4163;
          iVar6 = 0x53ca0d44;
LAB_00417a01:
          if (!bVar7) {
            iVar2 = iVar6;
          }
          goto joined_r0x00417a09;
        }
        if (iVar2 != -0x54ebb281) goto joined_r0x00417a09;
        piVar3 = __errno_location();
        unaff_R12D = *piVar3;
        iVar2 = -0x2fc8c7a;
      }
    }
    if (iVar2 < -0x4d4db131) {
      if (iVar2 == -0x532c2448) {
        iVar2 = fileno((FILE *)fp);
        _Var4 = lseek(iVar2,0,1);
        local_39 = _Var4 != -1;
        uVar5 = (x + -1) * x;
        iVar6 = 0x520f1f8b;
LAB_00417ba6:
        bVar7 = (~uVar5 | 0xfffffffe) == 0xffffffff;
        iVar2 = -0x644d2c08;
        if (bVar7) {
          iVar2 = iVar6;
        }
        if (9 < y) {
          iVar2 = -0x644d2c08;
        }
LAB_00417886:
        if ((bool)(y < 10 ^ bVar7)) {
          iVar2 = iVar6;
        }
      }
      else if (iVar2 == -0x529a4163) goto code_r0x00417909;
    }
    else {
      if (iVar2 == -0x4d4db131) {
        piVar3 = __errno_location();
        *piVar3 = local_38;
        iVar2 = 0x5027b5ab;
        unaff_EBP = -1;
        goto LAB_00417a40;
      }
      if (iVar2 == -0x2fc8c7a) {
        unaff_EBP = fclose((FILE *)fp);
        bVar7 = unaff_R12D == 0;
        iVar2 = 0x5027b5ab;
        iVar6 = -0x4d4db131;
        local_38 = unaff_R12D;
        goto LAB_00417a01;
      }
    }
joined_r0x00417a09:
    if (0x479d88c < iVar2) goto LAB_00417a40;
    goto LAB_0041789b;
  }
  goto LAB_00417a40;
code_r0x00417909:
  iVar2 = rpl_fflush(fp);
  bVar7 = iVar2 == 0;
  iVar6 = -0x54ebb281;
  goto LAB_00417ae1;
}


/* WARNING: Removing unreachable block (ram,0x00417d76) */

int rpl_fflush(FILE *stream)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_R14D;
  bool bVar5;
  int local_3c;
  
  iVar1 = 0x34bbb93f;
  if (stream == (FILE *)0x0) {
    iVar1 = 0x536d88b0;
  }
  iVar3 = -0x79a6e891;
  while( true ) {
    while( true ) {
      while( true ) {
        while (iVar2 = iVar3, iVar3 = iVar2, iVar2 < 0x46e1f7b6) {
          if (iVar2 < 0x3554f01f) {
            iVar3 = iVar1;
            if ((iVar2 != -0x79a6e891) && (iVar3 = iVar2, iVar2 == 0x34bbb93f)) {
              iVar2 = __freading(stream);
              iVar3 = 0x536d88b0;
              if (iVar2 != 0) {
                iVar3 = 0x76db0e49;
              }
            }
          }
          else if (iVar2 == 0x3554f01f) {
            iVar3 = 0x46e1f7b6;
            unaff_R14D = local_3c;
          }
          else if (iVar2 == 0x3b7b3e45) {
            uVar4 = stream->_flags;
            iVar3 = 0x43e8f53d;
            while (iVar3 == 0x43e8f53d) {
              iVar3 = 0x29b384a0;
              if (((uVar4 ^ 0xfffffeff) & uVar4) != 0) {
                iVar3 = -0x1c559d35;
              }
              if (iVar3 == -0x1c559d35) {
                rpl_fseeko(stream,0,1);
                iVar3 = 0x29b384a0;
              }
            }
            if (iVar3 != 0x29b384a0) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            fflush((FILE *)stream);
            iVar3 = 0x5d93e7cd;
          }
        }
        if (0x5d93e7cc < iVar2) break;
        if (iVar2 == 0x536d88b0) {
          unaff_R14D = fflush((FILE *)stream);
          iVar3 = 0x46e1f7b6;
        }
        else if (iVar2 == 0x46e1f7b6) {
          return unaff_R14D;
        }
      }
      if (iVar2 == 0x5d93e7cd) break;
      if (iVar2 == 0x76db0e49) {
        uVar4 = (x + -1) * x;
        uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
        iVar2 = 0x3b7b3e45;
        if (y < 10 != (uVar4 == 0)) {
          iVar2 = 0x5d93e7cd;
        }
        iVar3 = iVar2;
        if (uVar4 == 0) {
          iVar3 = 0x5d93e7cd;
        }
        if (9 < y) {
          iVar3 = iVar2;
        }
      }
    }
    uVar4 = stream->_flags;
    iVar3 = 0x43e8f53d;
    while (iVar3 == 0x43e8f53d) {
      iVar3 = 0x29b384a0;
      if ((uVar4 & 0x100) != 0) {
        iVar3 = -0x1c559d35;
      }
      if (iVar3 == -0x1c559d35) {
        rpl_fseeko(stream,0,1);
        iVar3 = 0x29b384a0;
      }
    }
    if (iVar3 != 0x29b384a0) break;
    local_3c = fflush((FILE *)stream);
    bVar5 = (~((x + -1) * x) | 0xfffffffeU) == 0xffffffff;
    iVar3 = 0x3b7b3e45;
    if (bVar5) {
      iVar3 = 0x3554f01f;
    }
    if (9 < y) {
      iVar3 = 0x3b7b3e45;
    }
    if (y < 10 != bVar5) {
      iVar3 = 0x3554f01f;
    }
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00418036) */
/* WARNING: Removing unreachable block (ram,0x004181f0) */
/* WARNING: Removing unreachable block (ram,0x00417f29) */
/* WARNING: Removing unreachable block (ram,0x004182d7) */
/* WARNING: Removing unreachable block (ram,0x00418005) */

int rpl_fseeko(FILE *fp,off_t offset,int whence)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int unaff_R12D;
  int unaff_R15D;
  bool bVar7;
  char local_41;
  __off_t local_40;
  int local_34;
  
  uVar3 = (x + -1) * x;
  bVar7 = ((uVar3 ^ 0xfffffffe) & uVar3) == 0;
  bVar1 = y < 10;
  iVar2 = -0x787c70f2;
LAB_00417f8b:
  do {
    if (-0x50c56a4f < iVar2) {
      if (-0x3b287347 < iVar2) {
        if (iVar2 == -0x3b287346) {
          iVar2 = fileno((FILE *)fp);
          local_40 = lseek(iVar2,offset,whence);
          bVar4 = local_40 == -1;
          iVar2 = -0x3b104f05;
          iVar5 = -0x46a9b90a;
          goto LAB_004182eb;
        }
        if (iVar2 == -0x3b104f05) {
          uVar3 = ~((x + -1) * x) | 0xfffffffe;
          bVar4 = y < 10 != (uVar3 == 0xffffffff);
          iVar5 = -0x72e3df6a;
          iVar6 = -0x59e8a5f5;
          goto LAB_00417f2e;
        }
        if (iVar2 == -0x19294472) {
          iVar2 = 0x2c996d22;
          unaff_R12D = unaff_R15D;
          goto LAB_00418180;
        }
joined_r0x00417f85:
        do {
          if (iVar2 < -0x41f6c2a) goto LAB_00417f8b;
LAB_00418180:
          while( true ) {
            while (iVar2 < 0x296b122b) {
              if (iVar2 < 0x196c6895) {
                if (iVar2 == -0x41f6c2a) {
                  bVar4 = fp->_IO_save_base == (char *)0x0;
                  iVar2 = 0x296b122b;
                  iVar5 = -0x3b287346;
                  goto LAB_004182eb;
                }
                if (iVar2 != 0xbbe0c0a) goto joined_r0x00417f85;
                iVar2 = -0x19294472;
                unaff_R15D = 0;
                goto LAB_00417f8b;
              }
              if (iVar2 != 0x196c6895) {
                if (iVar2 == 0x1e0000ad) {
                  local_34 = fseeko((FILE *)fp,offset,whence);
                  uVar3 = ~((x + -1) * x) | 0xfffffffe;
                  bVar4 = y < 10 != (uVar3 == 0xffffffff);
                  iVar5 = 0x196c6895;
                  iVar6 = 0x36ce2e2d;
LAB_00417f2e:
                  if (bVar4) {
                    iVar5 = iVar6;
                  }
                  iVar2 = iVar5;
                  if (uVar3 == 0xffffffff) {
                    iVar2 = iVar6;
                  }
                  if (9 < y) {
                    iVar2 = iVar5;
                  }
                }
                goto joined_r0x00417f85;
              }
              fseeko((FILE *)fp,offset,whence);
              iVar2 = 0x1e0000ad;
            }
            if (iVar2 < 0x36ce2e2d) break;
            if (iVar2 != 0x36ce2e2d) goto code_r0x004181fd;
            iVar2 = 0x2c996d22;
            unaff_R12D = local_34;
          }
          if (iVar2 != 0x296b122b) {
            if (iVar2 != 0x326795a5) {
              if (iVar2 == 0x2c996d22) {
                return unaff_R12D;
              }
              goto joined_r0x00417f85;
            }
            iVar2 = -0x6092fe97;
            goto LAB_00417f8b;
          }
          uVar3 = (x + -1) * x;
          uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
          iVar5 = 0x1e0000ad;
          iVar2 = 0x196c6895;
          if (uVar3 == 0) {
            iVar2 = 0x1e0000ad;
          }
          iVar6 = 0x196c6895;
LAB_004182af:
          if (9 < y) {
            iVar2 = iVar6;
          }
          if (y < 10 != (uVar3 == 0)) {
            iVar2 = iVar5;
          }
        } while( true );
      }
      if (iVar2 == -0x50c56a4e) {
        iVar2 = 0x296b122b;
        if (local_41 != '\0') {
          iVar2 = 0x69a83c97;
        }
joined_r0x004180a1:
        if (-0x41f6c2b < iVar2) goto LAB_00418180;
      }
      else {
        if (iVar2 != -0x46a9b90a) goto joined_r0x00417f85;
        iVar2 = -0x19294472;
        unaff_R15D = -1;
      }
      goto LAB_00417f8b;
    }
    if (-0x6092fe98 < iVar2) {
      if (iVar2 == -0x6092fe97) {
        local_41 = fp->_IO_read_end == fp->_IO_read_ptr;
        uVar3 = (x + -1) * x;
        uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
        iVar5 = -0x50c56a4e;
        iVar2 = 0x326795a5;
        if (uVar3 == 0) {
          iVar2 = -0x50c56a4e;
        }
        iVar6 = 0x326795a5;
        goto LAB_004182af;
      }
      if (iVar2 != -0x59e8a5f5) goto joined_r0x00417f85;
      *(byte *)&fp->_flags = *(byte *)&fp->_flags & 0xef;
      fp->_offset = local_40;
      bVar4 = (~((x + -1) * x) | 0xfffffffeU) == 0xffffffff;
      iVar2 = -0x72e3df6a;
      if (bVar4) {
        iVar2 = 0xbbe0c0a;
      }
      if (9 < y) {
        iVar2 = -0x72e3df6a;
      }
      if (y < 10 != bVar4) {
        iVar2 = 0xbbe0c0a;
      }
      goto joined_r0x004180a1;
    }
    if (iVar2 == -0x787c70f2) {
      iVar5 = 0x326795a5;
      if (bVar7 != bVar1) {
        iVar5 = -0x6092fe97;
      }
      iVar2 = iVar5;
      if (bVar1) {
        iVar2 = -0x6092fe97;
      }
      if (!bVar7) {
        iVar2 = iVar5;
      }
      goto joined_r0x004180a1;
    }
    if (iVar2 != -0x72e3df6a) goto joined_r0x00417f85;
    *(byte *)&fp->_flags = *(byte *)&fp->_flags & 0xef;
    fp->_offset = local_40;
    iVar2 = -0x59e8a5f5;
  } while( true );
code_r0x004181fd:
  if (iVar2 == 0x69a83c97) {
    bVar4 = fp->_IO_write_ptr == fp->_IO_write_base;
    iVar2 = 0x296b122b;
    iVar5 = -0x41f6c2a;
LAB_004182eb:
    if (bVar4) {
      iVar2 = iVar5;
    }
  }
  goto joined_r0x00417f85;
}


int atexit(__func *__func)

{
  int iVar1;
  
  iVar1 = __cxa_atexit(__func,0,__dso_handle);
  return iVar1;
}

