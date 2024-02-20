#include "decompile_ghidra_obfuscated.h"

void _dl_relocate_static_pie(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402530) */
/* WARNING: Removing unreachable block (ram,0x004025e3) */
/* WARNING: Removing unreachable block (ram,0x0040273e) */

void usage(int status)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined uVar4;
  char *pcVar5;
  undefined uVar6;
  undefined *puVar7;
  char *unaff_R13;
  ulong unaff_R15;
  char **local_60;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  
  iVar1 = 0x1a4cf7cf;
  if (status != 0) {
    iVar1 = -0x36f5510d;
  }
  iVar3 = -0x7f24e955;
LAB_0040246f:
  do {
    iVar2 = iVar3;
    uVar4 = stderr;
    if (-0x36f5510e < iVar2) {
      if (iVar2 != -0x36f5510d) {
        if (iVar2 == 0x1a4cf7cf) {
          uVar4 = dcgettext(0,"Usage: %s [OPTION]...\n",5);
          __printf_chk(1,uVar4,program_name);
          pcVar5 = (char *)dcgettext(0,
                                     "Print the user name associated with the current effective user ID.\nSame as id -un.\n\n"
                                     ,5);
          fputs_unlocked(pcVar5,stdout);
          pcVar5 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
          fputs_unlocked(pcVar5,stdout);
          pcVar5 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
          fputs_unlocked(pcVar5,stdout);
          iVar3 = 0x5cecfd5d;
          puVar7 = emit_ancillary_info_infomap;
LAB_0040256b:
          do {
            if (0x4d785f95 < iVar3) {
              if (iVar3 == 0x4d785f96) {
                pcVar5 = (char *)dcgettext(0,
                                           "Report any translation bugs to <https://translationproject.org/team/>\n"
                                           ,5);
                fputs_unlocked(pcVar5,stdout);
                iVar3 = -0x356715bd;
              }
              else if (iVar3 == 0x70c1ef37) {
                iVar2 = strncmp(local_40,"en_",3);
                iVar3 = -0x356715bd;
                if (iVar2 != 0) {
                  iVar3 = 0x4d785f96;
                }
              }
              else if (iVar3 == 0x5cecfd5d) {
                local_50 = *(char **)puVar7;
                iVar3 = -0xac35fb4;
                if (local_50 != (char *)0x0) {
                  iVar3 = -0x5fd06390;
                }
                unaff_R15 = 0;
                local_60 = (char **)puVar7;
              }
joined_r0x00402609:
              if (iVar3 < -0xac35fb4) {
LAB_00402630:
                while (iVar3 < -0x51e2e72c) {
                  if (iVar3 == -0x5fd06390) {
                    iVar3 = strcmp("whoami",local_50);
                    unaff_R15 = (ulong)(iVar3 != 0);
                    iVar3 = -0xac35fb4;
                    goto LAB_0040256b;
                  }
                  if (iVar3 != -0x57af574e) goto joined_r0x00402609;
                  unaff_R13 = local_48;
                  iVar3 = -0x2f5bef6f;
                }
                if (iVar3 == -0x51e2e72c) {
                  local_48 = local_60[1];
                  iVar3 = -0x2f5bef6f;
                  if (local_48 != (char *)0x0) {
                    iVar3 = -0x57af574e;
                  }
                  unaff_R13 = "whoami";
                }
                else {
                  if (iVar3 != -0x2f5bef6f) {
                    if (iVar3 == -0x356715bd) {
                      uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
                      __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/","whoami");
                      uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5)
                      ;
                      pcVar5 = "";
                      if (local_38 == "whoami") {
                        pcVar5 = " invocation";
                      }
                      __printf_chk(1,uVar4,local_38,pcVar5);
                      iVar3 = -0x3d9f4c49;
                      goto LAB_0040246f;
                    }
                    goto joined_r0x00402609;
                  }
                  uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
                  __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
                  pcVar5 = setlocale(5,(char *)0x0);
                  iVar3 = -0x356715bd;
                  iVar2 = 0x70c1ef37;
                  local_40 = pcVar5;
                  local_38 = unaff_R13;
LAB_0040261f:
                  if (pcVar5 != (char *)0x0) {
                    iVar3 = iVar2;
                  }
                }
                if (-0xac35fb5 < iVar3) goto LAB_0040256b;
                goto LAB_00402630;
              }
              goto LAB_0040256b;
            }
            if (iVar3 == -0xac35fb4) {
              pcVar5 = (char *)(unaff_R15 & 1);
              iVar3 = -0x51e2e72c;
              iVar2 = 0x2b649e26;
              goto LAB_0040261f;
            }
            if (iVar3 != 0x2b649e26) goto joined_r0x00402609;
            puVar7 = (undefined *)(local_60 + 2);
            iVar3 = 0x5cecfd5d;
          } while( true );
        }
        goto LAB_004027b0;
      }
      uVar6 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
      __fprintf_chk(uVar4,1,uVar6,program_name);
      iVar3 = -0x3d9f4c49;
      goto LAB_0040246f;
    }
    iVar3 = iVar1;
    if (iVar2 != -0x7f24e955) {
      if (iVar2 == -0x3d9f4c49) {
                    /* WARNING: Subroutine does not return */
        exit(status);
      }
LAB_004027b0:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  } while( true );
}


int main(int argc,char **argv)

{
  int iVar1;
  uint uVar2;
  undefined uVar3;
  char *pcVar4;
  passwd *unaff_RBP;
  __uid_t local_4c;
  uint *local_48;
  passwd *local_38;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  parse_gnu_standard_options_only
            (argc,argv,"whoami","GNU coreutils",Version,true,usage,"Richard Mlynarik",0);
  iVar1 = optind;
  uVar2 = 0x508fb20f;
LAB_00402920:
  do {
    do {
      while (uVar2 == 0x2457cedb) {
        unaff_RBP = getpwuid(local_4c);
        uVar2 = 0x2869e4be;
      }
      if (uVar2 == 0x2869e4be) {
        uVar2 = 0xa6e82e3d;
        local_38 = unaff_RBP;
        if (unaff_RBP == (passwd *)0x0) goto joined_r0x00402899;
        uVar2 = 0x9ac5822c;
        goto joined_r0x00402899;
      }
      if (uVar2 != 0x508fb20f) {
LAB_004029c0:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar2 = 0xe1c61796;
      if (iVar1 != argc) {
        uVar2 = 0xb793642c;
      }
    } while (0x2457ceda < (int)uVar2);
    do {
      while( true ) {
        if ((int)uVar2 < -0x1e39e86a) {
          if (uVar2 == 0x9ac5822c) {
            puts(local_38->pw_name);
            return 0;
          }
          if (uVar2 == 0xa6e82e3d) {
            uVar2 = *local_48;
            argv = (char **)(ulong)uVar2;
            uVar3 = dcgettext(0,"cannot find name for user ID %lu",5);
            error(1,uVar2,uVar3,local_4c);
          }
          else if (uVar2 != 0xb793642c) goto LAB_004029c0;
          uVar3 = dcgettext(0,"extra operand %s",5);
          pcVar4 = quote(argv[optind]);
          error(0,0,uVar3,pcVar4);
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
        if (uVar2 == 0xe1c61796) break;
        if (uVar2 != 0xf12614a9) goto LAB_004029c0;
        uVar2 = 0x2457cedb;
        if (*local_48 != 0) {
          uVar2 = 0x2869e4be;
        }
        unaff_RBP = (passwd *)0x0;
        if (0x2457ceda < uVar2) goto LAB_00402920;
      }
      local_48 = (uint *)__errno_location();
      *local_48 = 0;
      local_4c = geteuid();
      uVar2 = 0x2457cedb;
      if (local_4c == 0xffffffff) {
        uVar2 = 0xf12614a9;
      }
INVALID_JUMP;
    } while ((int)uVar2 < 0x2457cedb);
  } while( true );
}


void close_stdout_set_file_name(char *file)

{
  file_name = file;
  return;
}


void close_stdout_set_ignore_EPIPE(_Bool ignore)

{
  ignore_EPIPE = ignore;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402a9c) */

void close_stdout(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int local_48;
  undefined local_40;
  char *local_38;
  
  iVar1 = close_stream(stdout);
  iVar5 = 0x7be25abb;
LAB_00402b9e:
  if (iVar5 < 0x57a5f57e) {
    if (iVar5 == 0x2b828cfd) {
      iVar2 = close_stream(stderr);
      iVar5 = 0x932deea;
      if (iVar2 != 0) {
        iVar5 = 0x27b3246;
      }
    }
    else {
      if (iVar5 == 0x46fabf96) {
        pcVar3 = quotearg_colon(local_38);
        error(0,local_48,"%s: %s",pcVar3,local_40);
LAB_00402b8d:
        iVar5 = 0xaa3a999;
        goto LAB_00402b9e;
      }
      if (iVar5 == 0xaa3a999) {
                    /* WARNING: Subroutine does not return */
        _exit(exit_failure);
      }
    }
  }
  else {
    if (iVar5 == 0x57a5f57e) {
      piVar4 = __errno_location();
      iVar5 = -0x379f3a75;
      if (*piVar4 != 0x20) goto joined_r0x00402b6f;
      iVar5 = 0x2b828cfd;
      goto joined_r0x00402b6f;
    }
    if ((iVar5 == 0x7be25abb) && (iVar5 = 0x2b828cfd, iVar1 != 0)) {
      iVar5 = -0x21f9d46a;
    }
  }
joined_r0x00402c07:
  if (iVar5 < 0xaa3a999) {
    do {
      if (iVar5 < -0x21f9d46a) {
        if (iVar5 == -0x6d172570) {
          error(0,local_48,"%s",local_40);
          goto LAB_00402b8d;
        }
        if (iVar5 != -0x379f3a75) goto joined_r0x00402c07;
        local_40 = dcgettext(0,"write error",5);
        local_38 = file_name;
        iVar5 = -0x6d172570;
        if (file_name != (char *)0x0) {
          iVar5 = 0x46fabf96;
        }
        piVar4 = __errno_location();
        local_48 = *piVar4;
      }
      else {
        if (iVar5 != -0x21f9d46a) goto code_r0x00402adc;
        iVar5 = -0x379f3a75;
        if (ignore_EPIPE != false) {
          iVar5 = 0x57a5f57e;
        }
      }
joined_r0x00402b6f:
      if (0xaa3a998 < iVar5) break;
    } while( true );
  }
  goto LAB_00402b9e;
code_r0x00402adc:
  if (iVar5 == 0x932deea) {
    return;
  }
  if (iVar5 == 0x27b3246) {
                    /* WARNING: Subroutine does not return */
    _exit(exit_failure);
  }
  goto joined_r0x00402c07;
}


void parse_long_options(int argc,char **argv,char *command_name,char *package,char *version,
                       void (*usage_func)(int),...)

{
  undefined uVar1;
  int iVar2;
  char in_AL;
  int iVar3;
  int iVar4;
  undefined in_XMM0_Da;
  undefined in_XMM1_Da;
  undefined in_XMM2_Da;
  undefined in_XMM3_Da;
  undefined in_XMM4_Da;
  undefined in_XMM5_Da;
  undefined in_XMM6_Da;
  undefined in_XMM7_Da;
  int local_128;
  __va_list_tag local_108;
  undefined local_e8 [48];
  undefined local_b8;
  undefined local_a8;
  undefined local_98;
  undefined local_88;
  undefined local_78;
  undefined local_68;
  undefined local_58;
  undefined local_48;
  
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
  iVar3 = 0x11cd842a;
  if (argc != 2) {
    iVar3 = 0x4cea61a9;
  }
  iVar2 = 0x2e4d36f;
LAB_00402d20:
  do {
    while (iVar4 = iVar2, iVar2 = iVar4, iVar4 < 0x4cea61a9) {
      if (iVar4 < 0x2e4d36f) {
        if (iVar4 == -0x6cfa2614) {
LAB_00402d12:
          iVar2 = 0x4cea61a9;
        }
        else if ((iVar4 == -0x686bddc6) && (iVar2 = 0x757c25ab, local_128 < 0x76)) {
          iVar2 = 0x48cccc1d;
        }
      }
      else {
        iVar2 = iVar3;
        if (iVar4 != 0x2e4d36f) {
          if (iVar4 == 0x11cd842a) {
            local_128 = getopt_long(argc,argv,&DAT_0040e358,long_options,0);
            iVar2 = 0x4cea61a9;
            if (local_128 != -1) {
              iVar2 = 0x4d197d2a;
            }
          }
          else {
            iVar2 = iVar4;
            if ((iVar4 == 0x48cccc1d) && (iVar2 = -0x6cfa2614, local_128 == 0x68)) {
              iVar2 = 0x68ed79f2;
            }
          }
        }
      }
    }
    if (iVar4 < 0x56dccd01) {
      if (iVar4 == 0x4cea61a9) {
        opterr = uVar1;
        optind = 0;
        return;
      }
      if (iVar4 == 0x4d197d2a) {
        iVar2 = -0x686bddc6;
      }
      goto LAB_00402d20;
    }
    if (iVar4 == 0x68ed79f2) {
      (*usage_func)(0);
      goto LAB_00402d12;
    }
    if (iVar4 == 0x757c25ab) {
      iVar2 = -0x6cfa2614;
      if (local_128 == 0x76) {
        iVar2 = 0x56dccd01;
      }
    }
    else if (iVar4 == 0x56dccd01) {
      local_108.reg_save_area = local_e8;
      local_108.overflow_arg_area = &stack0x00000008;
      local_108.fp_offset = 0x30;
      local_108.gp_offset = 0x30;
      version_etc_va(stdout,command_name,package,version,&local_108);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x0040300a) */

void parse_gnu_standard_options_only
               (int argc,char **argv,char *command_name,char *package,char *version,_Bool scan_all,
               void (*usage_func)(int),...)

{
  undefined uVar1;
  char in_AL;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined in_XMM0_Da;
  undefined in_XMM1_Da;
  undefined in_XMM2_Da;
  undefined in_XMM3_Da;
  undefined in_XMM4_Da;
  undefined in_XMM5_Da;
  undefined in_XMM6_Da;
  undefined in_XMM7_Da;
  __va_list_tag local_108;
  undefined local_e8 [48];
  undefined local_b8;
  undefined local_a8;
  undefined local_98;
  undefined local_88;
  undefined local_78;
  undefined local_68;
  undefined local_58;
  undefined local_48;
  
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
  pcVar4 = "+";
  if (scan_all) {
    pcVar4 = "";
  }
  iVar2 = getopt_long(_argc,argv,pcVar4,long_options,0);
  uVar3 = 0x2b39bd1e;
LAB_00403050:
  do {
    if ((int)uVar3 < 0x4cd8e95e) {
      if (uVar3 == 0x2b39bd1e) {
        uVar3 = 0x7e261eed;
        if (iVar2 != -1) {
          uVar3 = 0x94a8d460;
        }
      }
      else if (uVar3 == 0x373d4050) {
        uVar3 = 0x5fc9bae9;
        goto LAB_00403050;
      }
    }
    else {
      iVar5 = exit_failure;
      if (uVar3 == 0x5fc9bae9) goto LAB_00402fa5;
      if (uVar3 == 0x7e261eed) {
        opterr = uVar1;
        return;
      }
      if (uVar3 == 0x4cd8e95e) {
        local_108.reg_save_area = local_e8;
        local_108.overflow_arg_area = &stack0x00000010;
        local_108.fp_offset = 0x30;
        local_108.gp_offset = 0x30;
        version_etc_va(stdout,command_name,package,version,&local_108);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
joined_r0x004030c4:
    if ((int)uVar3 < 0x2b39bd1e) {
      while( true ) {
        while ((int)uVar3 < -0x55e58e07) {
          if (uVar3 == 0x821ab5c1) {
            uVar3 = 0x373d4050;
            if (iVar2 == 0x68) {
              uVar3 = 0xf95efb52;
            }
            goto joined_r0x004030c4;
          }
          if (uVar3 != 0x94a8d460) goto joined_r0x004030c4;
          uVar3 = 0xaa1a71f9;
        }
        if (uVar3 == 0xaa1a71f9) {
          uVar3 = 0x16076fda;
          if (iVar2 < 0x76) {
            uVar3 = 0x821ab5c1;
          }
          goto joined_r0x004030c4;
        }
        if (uVar3 == 0xf95efb52) break;
        if (uVar3 != 0x16076fda) goto joined_r0x004030c4;
        uVar3 = 0x373d4050;
        if (iVar2 == 0x76) {
          uVar3 = 0x4cd8e95e;
        }
        if (0x2b39bd1d < uVar3) goto LAB_00403050;
      }
      iVar5 = 0;
LAB_00402fa5:
      (*usage_func)(iVar5);
      uVar3 = 0x7e261eed;
      goto joined_r0x004030c4;
    }
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x0040317d) */

void set_program_name(char *argv0)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *in_RCX;
  bool bVar5;
  char *local_30;
  
  uVar1 = 0x506dc000;
  if (argv0 == (char *)0x0) {
    uVar1 = 0x1d387c05;
  }
  uVar3 = 0xf6b42ee1;
  do {
    if ((int)uVar3 < 0x1d387c05) {
      if (uVar3 == 0x809b366b) {
        iVar2 = strncmp(local_30,"lt-",3);
        uVar3 = 0x5d5f4a91;
        in_RCX = local_30;
        if (iVar2 == 0) {
          uVar3 = 0x6651bced;
        }
      }
      else {
        bVar5 = uVar3 != 0xf6b42ee1;
        uVar3 = uVar1;
        if (bVar5) goto LAB_004032b0;
      }
    }
    else {
      if (uVar3 != 0x506dc000) {
        if (uVar3 == 0x1d387c05) {
          fwrite("A NULL argv[0] was passed through an exec system call.\n",0x37,1,stderr);
                    /* WARNING: Subroutine does not return */
          abort();
        }
LAB_004032b0:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      pcVar4 = strrchr(argv0,0x2f);
      local_30 = pcVar4 + 1;
      if (pcVar4 == (char *)0x0) {
        local_30 = argv0;
      }
      uVar3 = 0x5d5f4a91;
      in_RCX = argv0;
      if (6 < (long)local_30 - (long)argv0) {
        uVar3 = 0x5f163202;
      }
    }
    if (0x5d5f4a90 < uVar3) {
      do {
        while( true ) {
          if (uVar3 == 0x5d5f4a91) {
            program_name = in_RCX;
            program_invocation_name = in_RCX;
            return;
          }
          if (uVar3 == 0x5f163202) break;
          if (uVar3 != 0x6651bced) goto LAB_004032b0;
          program_invocation_short_name = local_30 + 3;
          uVar3 = 0x5d5f4a91;
          in_RCX = program_invocation_short_name;
        }
        iVar2 = strncmp(local_30 + -7,"/.libs/",7);
        uVar3 = 0x5d5f4a91;
        if (iVar2 == 0) {
          uVar3 = 0x809b366b;
        }
        in_RCX = argv0;
      } while (0x5d5f4a90 < (int)uVar3);
    }
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


enum quoting_style get_quoting_style(quoting_options *o)

{
  quoting_options *pqVar1;
  
  pqVar1 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar1 = o;
  }
  return pqVar1->style;
}


void set_quoting_style(quoting_options *o,enum quoting_style s)

{
  quoting_options *pqVar1;
  
  pqVar1 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar1 = o;
  }
  pqVar1->style = s;
  return;
}


wchar_t set_char_quoting(quoting_options *o,char c,wchar_t i)

{
  quoting_options *pqVar1;
  uint uVar2;
  
  pqVar1 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar1 = o;
  }
  uVar2 = pqVar1->quote_these_too[(byte)c >> 5] >> (c & 0x1fU);
  pqVar1->quote_these_too[(byte)c >> 5] =
       ((uVar2 ^ i) & 1U) << (c & 0x1fU) ^ pqVar1->quote_these_too[(byte)c >> 5];
  return uVar2 & 1;
}


wchar_t set_quoting_flags(quoting_options *o,wchar_t i)

{
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  quoting_options *in_RCX;
  quoting_options *pqVar5;
  
  iVar3 = 0x46681744;
  if (o != (quoting_options *)0x0) {
    iVar3 = 0x2dbe58cd;
  }
  iVar2 = -0x343b3ade;
  while( true ) {
    do {
      iVar4 = iVar2;
      pqVar5 = in_RCX;
      in_RCX = o;
      iVar2 = iVar3;
    } while (iVar4 == -0x343b3ade);
    if (iVar4 != 0x46681744) break;
    in_RCX = &default_quoting_options;
    iVar2 = 0x2dbe58cd;
  }
  if (iVar4 == 0x2dbe58cd) {
    wVar1 = pqVar5->flags;
    pqVar5->flags = i;
    return wVar1;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


void set_custom_quoting(quoting_options *o,char *left_quote,char *right_quote)

{
  int iVar1;
  int iVar2;
  quoting_options *in_RAX;
  int iVar3;
  int iVar4;
  quoting_options *in_R11;
  quoting_options *pqVar5;
  quoting_options *local_8;
  
  iVar2 = -0x5a5f66df;
  if (o != (quoting_options *)0x0) {
    iVar2 = -0x6c02ea8;
  }
  iVar4 = 0x7a9369fa;
  if (right_quote == (char *)0x0) {
    iVar4 = 0x52e6450;
  }
  if (left_quote == (char *)0x0) {
    iVar4 = 0x52e6450;
  }
  iVar1 = -0x606f5d20;
  local_8 = in_RAX;
LAB_00403430:
  do {
    iVar3 = iVar1;
    pqVar5 = in_R11;
    in_R11 = o;
    iVar1 = iVar2;
  } while (iVar3 == -0x606f5d20);
  do {
    if (0x52e644f < iVar3) {
      if (iVar3 == 0x7a9369fa) {
        local_8->left_quote = left_quote;
        local_8->right_quote = right_quote;
        return;
      }
      if (iVar3 == 0x52e6450) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
LAB_004034a0:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iVar3 == -0x5a5f66df) break;
    if (iVar3 != -0x6c02ea8) goto LAB_004034a0;
    pqVar5->style = custom_quoting_style;
    local_8 = pqVar5;
    iVar3 = iVar4;
  } while( true );
  in_R11 = &default_quoting_options;
  iVar1 = -0x6c02ea8;
  goto LAB_00403430;
}


size_t quotearg_buffer(char *buffer,size_t buffersize,char *arg,size_t argsize,quoting_options *o)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  quoting_options *pqVar4;
  wchar_t e;
  
  pqVar4 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar4 = o;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  sVar3 = quotearg_buffer_restyled
                    (buffer,buffersize,arg,argsize,pqVar4->style,pqVar4->flags,
                     pqVar4->quote_these_too,pqVar4->left_quote,pqVar4->right_quote);
  *piVar2 = iVar1;
  return sVar3;
}


/* WARNING: Removing unreachable block (ram,0x004050f3) */
/* WARNING: Removing unreachable block (ram,0x00404471) */
/* WARNING: Removing unreachable block (ram,0x004062f3) */
/* WARNING: Removing unreachable block (ram,0x00405430) */
/* WARNING: Removing unreachable block (ram,0x00404bab) */
/* WARNING: Removing unreachable block (ram,0x00405609) */
/* WARNING: Removing unreachable block (ram,0x00404d0b) */
/* WARNING: Removing unreachable block (ram,0x00406419) */
/* WARNING: Removing unreachable block (ram,0x00403d00) */
/* WARNING: Removing unreachable block (ram,0x004040c5) */
/* WARNING: Removing unreachable block (ram,0x00405203) */
/* WARNING: Removing unreachable block (ram,0x00404746) */
/* WARNING: Removing unreachable block (ram,0x0040752c) */
/* WARNING: Removing unreachable block (ram,0x00407c80) */
/* WARNING: Removing unreachable block (ram,0x004077eb) */
/* WARNING: Removing unreachable block (ram,0x00407e7c) */
/* WARNING: Removing unreachable block (ram,0x00408b11) */
/* WARNING: Removing unreachable block (ram,0x00408999) */
/* WARNING: Removing unreachable block (ram,0x0040864e) */
/* WARNING: Removing unreachable block (ram,0x00406aea) */
/* WARNING: Removing unreachable block (ram,0x004087ae) */
/* WARNING: Removing unreachable block (ram,0x004083f6) */
/* WARNING: Removing unreachable block (ram,0x004078a0) */
/* WARNING: Removing unreachable block (ram,0x004090c3) */
/* WARNING: Removing unreachable block (ram,0x004076b4) */
/* WARNING: Removing unreachable block (ram,0x00409100) */
/* WARNING: Removing unreachable block (ram,0x00408a70) */
/* WARNING: Removing unreachable block (ram,0x0040692c) */
/* WARNING: Removing unreachable block (ram,0x00408c56) */
/* WARNING: Removing unreachable block (ram,0x00407668) */
/* WARNING: Removing unreachable block (ram,0x00408828) */
/* WARNING: Removing unreachable block (ram,0x00408616) */
/* WARNING: Removing unreachable block (ram,0x00405a94) */
/* WARNING: Removing unreachable block (ram,0x00405315) */
/* WARNING: Removing unreachable block (ram,0x004055a7) */
/* WARNING: Removing unreachable block (ram,0x00405298) */
/* WARNING: Removing unreachable block (ram,0x00405799) */
/* WARNING: Removing unreachable block (ram,0x00404e95) */
/* WARNING: Removing unreachable block (ram,0x004043e2) */
/* WARNING: Removing unreachable block (ram,0x00403b6f) */
/* WARNING: Removing unreachable block (ram,0x00404ef5) */
/* WARNING: Removing unreachable block (ram,0x00408f84) */
/* WARNING: Removing unreachable block (ram,0x00405344) */
/* WARNING: Removing unreachable block (ram,0x0040511c) */
/* WARNING: Type propagation algorithm not settling */

size_t quotearg_buffer_restyled
                 (char *buffer,size_t buffersize,char *arg,size_t argsize,
                 enum quoting_style quoting_style,wchar_t flags,uint *quote_these_too,char *left_quote,
                 char *right_quote)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  size_t sVar15;
  char *pcVar16;
  ushort **ppuVar17;
  int iVar18;
  int iVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *unaff_R12;
  byte unaff_R13B;
  byte unaff_R14B;
  byte unaff_R15B;
  bool bVar23;
  bool bVar24;
  bool bVar25;
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
  uint local_6d8;
  byte local_6d1;
  char *local_6d0;
  byte local_6c1;
  byte local_6c0;
  byte local_6bf;
  byte local_6be;
  byte local_6bd;
  byte local_6bc;
  byte local_6bb;
  byte local_6ba;
  byte local_6b9;
  char *local_6b8;
  char *local_6b0;
  byte local_6a4;
  byte local_6a3;
  byte local_6a2;
  byte local_6a1;
  byte local_6a0;
  byte local_69f;
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
  char *local_690;
  char *local_688;
  enum quoting_style local_67c;
  enum quoting_style local_678;
  byte local_672;
  byte local_671;
  byte local_670;
  byte local_66f;
  byte local_66e;
  byte local_66d;
  byte local_66c;
  byte local_66b;
  byte local_66a;
  byte local_668;
  byte local_667;
  byte local_666;
  byte local_665;
  byte local_664;
  byte local_663;
  byte local_662;
  byte local_661;
  byte local_660;
  byte local_65f;
  byte local_65e;
  byte local_65d;
  byte local_65c;
  byte local_65b;
  byte local_65a;
  byte local_659;
  uint local_658;
  byte local_64e;
  byte local_64d;
  byte local_64b;
  char local_64a;
  char local_649;
  byte local_648;
  char local_647;
  byte local_646;
  char local_645;
  byte local_644;
  byte local_643;
  byte local_642;
  byte local_641;
  byte local_640;
  byte local_63f;
  byte local_63e;
  byte local_63d;
  byte local_63c;
  byte local_63b;
  byte local_63a;
  byte local_639;
  char *local_638;
  char *local_630;
  char *local_628;
  int local_61c;
  int local_60c;
  byte local_607;
  byte local_606;
  byte local_605;
  byte local_604;
  byte local_603;
  byte local_602;
  byte local_601;
  byte local_600;
  byte local_5ff;
  byte local_5fe;
  byte local_5fd;
  byte local_5fc;
  byte local_5fb;
  byte local_5fa;
  byte local_5f9;
  byte local_5f8;
  byte local_5f7;
  byte local_5f6;
  byte local_5f5;
  byte local_5f4;
  byte local_5f3;
  byte local_5f2;
  byte local_5f1;
  char *local_5f0;
  char *local_5e8;
  char *local_5e0;
  char *local_5d8;
  char *local_5d0;
  uint local_5c8;
  uint local_5c4;
  enum quoting_style local_5b8;
  char *local_5b0;
  uint local_5a0;
  undefined local_594;
  undefined local_58c;
  enum quoting_style local_588;
  uint local_584;
  uint local_580;
  uint local_57c;
  char *local_578;
  char *local_570;
  enum quoting_style local_568;
  undefined local_564;
  uint local_560;
  uint local_55c;
  uint local_558;
  uint local_554;
  uint local_550;
  uint local_54c;
  char *local_548;
  byte *local_540;
  undefined *local_538;
  char *local_528;
  char *local_520;
  byte *local_518;
  byte *local_510;
  char *local_508;
  char *local_500;
  char *local_4f8;
  char *local_4f0;
  char *local_4e8;
  char *local_4e0;
  char *local_4d8;
  char *local_4d0;
  char *local_4c8;
  char *local_4c0;
  char *local_4b8;
  undefined *local_4b0;
  byte *local_4a8;
  byte *local_4a0;
  undefined *local_498;
  char *local_490;
  char *local_488;
  enum quoting_style local_480;
  int local_47c;
  char *local_478;
  char *local_470;
  char *local_468;
  char *local_460;
  char *local_458;
  char *local_450;
  char *local_448;
  char *local_440;
  char *local_438;
  char *local_430;
  char *local_428;
  char *local_420;
  char *local_418;
  char *local_410;
  char *local_408;
  char *local_400;
  char *local_3f8;
  char *local_3f0;
  char *local_3e8;
  byte *local_3e0;
  char *local_3d8;
  char *local_3d0;
  char *local_3c8;
  char *local_3c0;
  char *local_3b8;
  char *local_3b0;
  char *local_3a8;
  char *local_3a0;
  char *local_398;
  char *local_390;
  char *local_388;
  char *local_380;
  char *local_378;
  undefined *local_370;
  byte *local_368;
  char *local_360;
  byte *local_358;
  byte *local_350;
  char *local_348;
  char *local_340;
  char *local_338;
  char *local_330;
  char *local_328;
  char *local_320;
  char *local_318;
  char *local_310;
  char *local_308;
  char *local_300;
  byte *local_2f8;
  char *local_2f0;
  char *local_2e8;
  char *local_2e0;
  char *local_2d8;
  char *local_2d0;
  char *local_2c8;
  char *local_2c0;
  char *local_2b8;
  char *local_2b0;
  char *local_2a8;
  char *local_2a0;
  char *local_290;
  char *local_288;
  char *local_280;
  char *local_278;
  char *local_270;
  char *local_268;
  char *local_260;
  char *local_258;
  char *local_250;
  char *local_248;
  byte *local_240;
  byte *local_238;
  byte *local_230;
  char *local_228;
  char *local_220;
  undefined *local_218;
  char *local_210;
  char *local_208;
  char *local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  char *local_1c8;
  char *local_1c0;
  char *local_1b8;
  char *local_1b0;
  wchar_t local_190;
  enum quoting_style local_18c;
  ulong local_188;
  ulong local_180;
  undefined *local_178;
  byte *local_170;
  char *local_168;
  ulong local_160;
  char *local_158;
  char *local_150;
  byte *local_148;
  byte *local_140;
  mbstate_t local_138;
  char *local_130;
  byte *local_128;
  wchar_t *local_120;
  char *local_118;
  undefined *local_110;
  byte *local_108;
  byte *local_100;
  byte *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  byte *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  
  local_140 = (byte *)right_quote;
  local_148 = (byte *)left_quote;
  local_158 = (char *)buffersize;
  local_150 = (char *)argsize;
  sVar15 = __ctype_get_mb_cur_max();
  local_64d = (byte)((uint)flags >> 1) & 1;
  iVar11 = 0x7d729940;
  if ((flags & 1U) == 0) {
    iVar11 = 0x7d349bf0;
  }
  iVar12 = 0x41b46991;
  if ((flags & 4U) == 0) {
    iVar12 = 0x7d349bf0;
  }
  iVar18 = -0x38868cee;
  if (quote_these_too != (uint *)0x0) {
    iVar18 = -0x510a8e85;
  }
  local_64e = 1;
  local_6db = 0x7b;
  local_6da = 0x7b;
  local_6d9 = 0x7b;
  local_6bd = 0x7b;
  local_6bf = 0x7b;
  local_6be = 0x7b;
  local_696 = 0x7b;
  local_699 = 0x7b;
  local_698 = 0x7b;
  local_697 = 0x7b;
  local_6df = 0x7b;
  local_6de = 0x7b;
  local_6e0 = 0x7b;
  local_69c = 0x7b;
  local_69a = 0x7b;
  local_69b = 0x7b;
  iVar19 = 0x456ba924;
  local_160 = 0;
  local_4b8 = (char *)0x0;
  local_588 = literal_quoting_style;
  local_300 = (char *)0x0;
  local_2f0 = (char *)0x0;
  local_3f8 = (char *)0x0;
  local_2f8 = (byte *)0x0;
  local_2e8 = (char *)0x0;
  local_5f0 = &DAT_aef5717b;
  local_658 = 0xaef5717b;
  local_5e8 = &DAT_aef5717b;
  local_5e0 = (char *)0x0;
  local_5d8 = (char *)0x0;
  local_5d0 = (char *)0x0;
  local_54c = 0;
  local_58c = 0;
  local_408 = (char *)0x0;
  local_528 = &DAT_aef5717b;
  bVar1 = 0x7b;
  bVar9 = 0x7b;
  local_508 = &DAT_aef5717b;
  local_500 = &DAT_aef5717b;
  local_4f8 = (char *)0x0;
  local_4f0 = (char *)0x0;
  local_400 = (char *)0x0;
  local_460 = &DAT_aef5717b;
  bVar5 = 0;
  local_440 = (char *)0x0;
  local_430 = (char *)0x0;
  local_418 = (char *)0x0;
  local_410 = (char *)0x0;
  local_638 = &DAT_aef5717b;
  local_630 = &DAT_aef5717b;
  local_628 = &DAT_aef5717b;
  local_5a0 = 0xaef5717b;
  local_450 = (char *)0x0;
  local_470 = &DAT_aef5717b;
  local_428 = (char *)0x0;
  local_550 = 0;
  local_308 = (char *)0x0;
  local_594 = 0;
  local_438 = (char *)0x0;
  bVar6 = 0x7b;
  local_420 = (char *)0x0;
  local_448 = (char *)0x0;
  local_564 = 0;
  local_310 = (char *)0x0;
  local_320 = (char *)0x0;
  local_55c = 0;
  local_378 = &DAT_aef5717b;
  local_338 = &DAT_aef5717b;
  local_554 = 0;
  local_5c8 = 0xaef5717b;
  local_4e8 = (char *)0x0;
  local_5c4 = 0xaef5717b;
  local_560 = 0;
  local_558 = 0;
  local_370 = &DAT_aef5717b;
  local_318 = (char *)0x0;
  local_478 = &DAT_aef5717b;
  local_468 = &DAT_aef5717b;
  local_380 = &DAT_aef5717b;
  local_328 = (char *)0x0;
  bVar7 = 0x7b;
  local_520 = &DAT_aef5717b;
  local_458 = &DAT_aef5717b;
  bVar8 = 0x7b;
  local_4c0 = &DAT_aef5717b;
  local_330 = &DAT_aef5717b;
  local_388 = &DAT_aef5717b;
  local_360 = &DAT_aef5717b;
  local_348 = &DAT_aef5717b;
  local_340 = &DAT_aef5717b;
  local_398 = &DAT_aef5717b;
  local_390 = &DAT_aef5717b;
  bVar4 = 0x7b;
  local_538 = &DAT_aef5717b;
  local_540 = &DAT_aef5717b;
  local_548 = &DAT_aef5717b;
  local_518 = &DAT_aef5717b;
  local_510 = &DAT_aef5717b;
  local_5b8 = 0xaef5717b;
  local_3b0 = &DAT_aef5717b;
  local_3a8 = &DAT_aef5717b;
  local_350 = &DAT_aef5717b;
  local_3a0 = &DAT_aef5717b;
  local_368 = &DAT_aef5717b;
  local_358 = &DAT_aef5717b;
  local_3b8 = &DAT_aef5717b;
  local_568 = 0xaef5717b;
  local_188 = 0;
  local_180 = 0;
  local_178 = (undefined *)0x0;
  local_170 = (byte *)0x0;
  local_168 = (char *)0x0;
  local_667 = 0;
  local_666 = 0;
  local_665 = 0;
  local_664 = 0;
  local_6a2 = 0;
  local_69d = 0;
  local_69f = 0;
  local_69e = 0;
  local_66e = 0;
  local_668 = 0;
  local_66b = 0;
  local_6a3 = 0;
  local_6d1 = 0;
  local_6c0 = 0;
  local_6a0 = 0;
  bVar23 = false;
  local_671 = 0;
  local_670 = 0;
  local_66f = 0;
  local_6c1 = 0;
  local_6a1 = 0;
  local_6a4 = 0;
  local_66c = 0;
  local_672 = 0;
  local_66a = 0;
  local_66d = 0;
  pcVar20 = (char *)0x0;
  pcVar22 = (char *)(ulong)(uint)(flags & 0xfffffffdU);
  local_480 = quoting_style;
  bVar2 = 0;
  bVar3 = 0x7b;
LAB_004064e0:
  pcVar16 = local_688;
  if (iVar19 < 0x45286e14) {
    if (iVar19 < 0x231211a0) {
      if (0x120112a4 < iVar19) {
        if (iVar19 < 0x19bb047c) {
          if (iVar19 < 0x159f232b) {
            if (0x12ed529e < iVar19) {
              if (iVar19 == 0x12ed529f) {
                local_6d0 = local_360;
                local_6dc = local_671;
                local_6e3 = local_670;
                local_6e4 = local_66f;
                local_578 = local_348;
                local_690 = local_340;
                local_6b0 = local_398;
                local_6b8 = local_390;
                local_64a = local_348 == (char *)0xffffffffffffffff;
                iVar19 = -0x260ac87d;
                pcVar20 = (char *)0xe1e408b9;
                bVar24 = !(bool)local_64a;
                goto LAB_004090d8;
              }
              if (iVar19 == 0x14f96d48) goto LAB_00407b49;
              if (iVar19 != 0x15446e21) goto joined_r0x00409006;
              bVar25 = SBORROW4(local_6d8,0x3f);
              bVar24 = (int)(local_6d8 - 0x3f) < 0;
              iVar14 = 0x56e78998;
              goto LAB_00407ea6;
            }
            if (iVar19 == 0x120112a5) {
              local_218 = local_370;
              bVar24 = local_370 < local_4b0;
              iVar19 = -0x370d8a5c;
              pcVar20 = (char *)0x764930d;
              goto LAB_00409271;
            }
            if (iVar19 != 0x12c43c6c) goto joined_r0x00409006;
            buffer[(long)local_6b0] = '?';
            iVar19 = 0x2fc52b78;
          }
          else {
            if (iVar19 < 0x166cf1ff) {
              if (iVar19 == 0x159f232b) {
                local_3d0 = local_380;
                local_78 = local_328;
                bVar24 = local_6b0 < local_380;
                iVar19 = 0x46004cef;
                pcVar20 = (char *)0x7367ccde;
                goto LAB_00409271;
              }
              if (iVar19 != 0x1620464c) goto joined_r0x00409006;
              bVar24 = local_60c - 0x5bU < 2;
              iVar19 = -0x6d7549ed;
              pcVar20 = (char *)0x9542ad5a;
              goto LAB_00409271;
            }
            if (iVar19 == 0x166cf1ff) {
              local_98 = local_6b8 + (long)local_e8;
              local_668 = local_6e2;
              local_320 = local_6b8;
              local_310 = local_6b0;
              local_66b = local_6e4;
              iVar19 = 0x6b6f9d2c;
              local_564 = 0;
              local_66e = local_6e1;
            }
            else {
              if (iVar19 == 0x16eaf33d) {
                bVar24 = local_4b0 == (undefined *)0xfffffffffffffffe;
                iVar19 = 0x325db615;
                pcVar20 = (char *)0x8e0022a2;
                goto LAB_00408cb0;
              }
              if (iVar19 != 0x1846c4a0) goto joined_r0x00409006;
              local_388 = (char *)strlen(arg);
              iVar19 = 0x45da0fc2;
              local_330 = local_388;
            }
          }
        }
        else if (iVar19 < 0x1d140590) {
          if (iVar19 < 0x1b5b584d) {
            if (iVar19 != 0x19bb047c) {
              if (iVar19 != 0x19c5a5e6) goto joined_r0x00409006;
              pcVar20 = (char *)0x56e9acc0;
              iVar14 = -0xc2434c5;
              local_368 = local_4a8;
              local_358 = local_4a0;
              if (local_67c == custom_quoting_style) goto joined_r0x00409068;
              iVar14 = 0x56e9acc0;
              goto joined_r0x00409068;
            }
            iVar19 = 0x7d349bf0;
            unaff_R13B = 1;
            goto LAB_00408ff8;
          }
          if (iVar19 == 0x1b5b584d) {
            local_138 = (mbstate_t)0x0;
            pcVar20 = (char *)0x4b56707f;
            iVar19 = -0x1f45cbdb;
            if (local_688 == (char *)0xffffffffffffffff) {
              iVar19 = 0x4b56707f;
            }
            local_468 = local_688;
            goto LAB_004085c0;
          }
          pcVar16 = pcVar20;
          if (iVar19 != 0x1c8c675a) {
            if (iVar19 != 0x1cc6d789) goto joined_r0x00409006;
            iVar19 = -0x7dc7eaf2;
            pcVar20 = (char *)0xbfb53ded;
            bVar24 = local_3f0 == (char *)0x0;
            goto LAB_004090d8;
          }
LAB_004085e0:
          iVar19 = 0x68fd5719;
          pcVar20 = pcVar16;
          local_4b8 = pcVar16;
        }
        else {
          if (iVar19 < 0x1eac3be9) {
            if (iVar19 == 0x1d140590) {
              bVar25 = SBORROW4(local_6d8,0x5f);
              bVar24 = (int)(local_6d8 - 0x5f) < 0;
              goto LAB_00407ea1;
            }
            if (iVar19 == 0x1d4f8b83) {
              iVar19 = -0xd050028;
              bVar8 = 1;
              local_4c0 = local_3d8;
              goto joined_r0x00409006;
            }
            if (iVar19 != 0x1dd1f07c) goto joined_r0x00409006;
            bVar25 = SBORROW4(local_6d8,0xb);
            bVar24 = (int)(local_6d8 - 0xb) < 0;
            iVar19 = 0x65197087;
            pcVar20 = (char *)0x6339a220;
            goto LAB_00409022;
          }
          if (iVar19 == 0x1eac3be9) {
            local_5d0 = local_6b8;
            local_5d8 = local_6b0;
            local_5e0 = local_690;
            local_5e8 = local_688;
            local_6da = 1;
            goto LAB_00407b6e;
          }
          if (iVar19 != 0x211e73a7) {
            if (iVar19 != 0x22009641) goto joined_r0x00409006;
            bVar24 = local_5b0 < local_6d0;
            iVar19 = 0x6fd5b9cf;
            pcVar20 = (char *)0x89e89484;
            goto LAB_00409271;
          }
          local_388 = local_578;
          iVar19 = 0x45da0fc2;
          local_330 = local_578;
        }
        goto LAB_004064e0;
      }
      if (iVar19 < 0x598f204) {
        if (iVar19 < 0x300161) {
          if (-0x11e23dd < iVar19) {
            if (iVar19 == -0x11e23dc) {
              local_4f8 = local_1c0 + 1;
              bVar9 = 1;
              iVar14 = -0x4aa92a28;
              local_6bf = local_639;
              local_6be = local_5f9;
              local_6bd = local_5fa;
              local_528 = local_4d0;
              local_508 = local_d0;
              local_500 = local_c8;
              local_4f0 = local_c0;
              bVar1 = local_5fb;
              goto joined_r0x00409068;
            }
            if (iVar19 == -0xd84768) {
              iVar14 = -0x71523802;
              iVar19 = -0x458e7b24;
              bVar10 = local_693;
              goto LAB_004080c9;
            }
            if (iVar19 != -0x3c5f97) goto joined_r0x00409006;
            local_4e8 = local_4e0;
            iVar19 = 0x566e46b5;
            local_5c4 = 0x34;
            local_5c8 = (uint)local_660;
            goto LAB_004064e0;
          }
          if (iVar19 == -0x1c7c5d0) {
            local_a0 = local_6b8 + (long)local_498;
            iVar19 = 0x211e73a7;
            if ((undefined *)0x1 < local_498) {
              iVar19 = 0x1846c4a0;
            }
            bVar24 = local_64a == '\0';
            pcVar20 = (char *)0x211e73a7;
            goto LAB_00408cb0;
          }
          if (iVar19 != -0x1881848) goto joined_r0x00409006;
          local_408 = local_248 + 1;
          iVar19 = -0x4cb75ec3;
          local_58c = 0;
        }
        else {
          if (0x24fadc7 < iVar19) {
            if (iVar19 != 0x24fadc8) {
              if (iVar19 != 0x31bf32d) {
                if (iVar19 != 0x416143d) goto joined_r0x00409006;
                local_570 = local_228 + 1;
                pcVar20 = (char *)0x786dea1a;
                iVar19 = -0x70414a18;
                local_520 = local_570;
                if (local_649 == '\0') goto joined_r0x00409006;
                iVar19 = 0x786dea1a;
                goto joined_r0x00409006;
              }
              bVar25 = SBORROW4(local_6d8,0x3b);
              bVar24 = (int)(local_6d8 - 0x3b) < 0;
              iVar19 = 0x15446e21;
              pcVar20 = (char *)0xa96168f2;
              goto LAB_00409022;
            }
            ppuVar17 = __ctype_b_loc();
            pcVar20 = (char *)(long)(int)local_6d8;
            local_55c = (*ppuVar17)[(long)pcVar20] >> 0xe & 1;
            iVar19 = 0x66ebc4cd;
            local_338 = local_688;
            local_378 = (char *)0x1;
            goto LAB_004064e0;
          }
          if (iVar19 != 0x300161) {
            if (iVar19 != 0x19078f4) goto joined_r0x00409006;
            local_2d8 = local_2e0 + 1;
            bVar24 = local_2d8 < local_6d0;
            iVar19 = -0x2bfdd721;
            pcVar20 = (char *)0xf0153fe0;
            goto LAB_00409271;
          }
          pcVar20 = (char *)(ulong)local_63d;
          buffer[(long)local_208] = local_63d;
          iVar19 = -0x2dae8851;
        }
      }
      else {
        if (0xc9856f4 < iVar19) {
          if (iVar19 < 0xe85f377) {
            if (iVar19 == 0xc9856f5) {
              bVar24 = local_6d8 == 0xd;
              iVar19 = -0x53f51e1d;
              pcVar20 = (char *)0x367b2567;
              goto LAB_00408cb0;
            }
            if (iVar19 == 0xcc95e33) {
              bVar25 = SBORROW4(local_6d8,0x5b);
              bVar24 = (int)(local_6d8 - 0x5b) < 0;
              iVar14 = 0x37185d53;
              pcVar20 = (char *)0x19bb047c;
              goto LAB_00407eab;
            }
            if (iVar19 != 0xd6bff2a) goto joined_r0x00409006;
            bVar25 = SBORROW4(local_61c,0x2d);
            bVar24 = local_61c + -0x2d < 0;
            iVar19 = -0x5f037ad2;
            pcVar20 = (char *)0xcaea675a;
            goto LAB_00409022;
          }
          if (iVar19 == 0xe85f377) {
            iVar19 = 0x38343e51;
            pcVar20 = (char *)0xd5f5b568;
            bVar24 = local_645 == '\0';
            goto LAB_004090d8;
          }
          if (iVar19 != 0x10561490) {
            if (iVar19 != 0x10d55dd6) goto joined_r0x00409006;
            bVar24 = local_3c0 < local_6d0;
            iVar19 = -0x50a8d95d;
            pcVar20 = (char *)0xb03d4928;
            goto LAB_00409271;
          }
          local_308 = local_4d8;
          local_664 = local_693;
          local_665 = local_63d;
          local_666 = local_63e;
          local_550 = 0x2c;
          local_667 = local_65e;
LAB_00408ef7:
          iVar19 = 0x3c6a567f;
          goto LAB_004064e0;
        }
        if (iVar19 < 0x764930d) {
          if (iVar19 == 0x598f204) {
            iVar14 = -0x23d33ced;
            if (local_580 == 0x2c) {
              iVar14 = -0x4aa92a28;
            }
            pcVar20 = (char *)((ulong)local_1f8 & 0xffffffffffffff00 | (ulong)local_63a);
            local_6bf = local_6e3;
            local_6be = local_65d;
            local_6bd = local_63a;
            local_528 = local_6d0;
            local_508 = local_200;
            local_500 = local_690;
            local_4f8 = local_1f8;
            local_4f0 = local_1f0;
            bVar9 = local_63b;
            bVar1 = local_63c;
            goto joined_r0x00409068;
          }
          if (iVar19 != 0x74c779d) goto joined_r0x00409006;
          buffer[(long)local_1b0] = '\0';
          iVar19 = -0xc64753d;
        }
        else {
          if (iVar19 != 0x764930d) {
            if (iVar19 == 0x9ad67c1) {
              pcVar20 = (char *)0xbc46c095;
              iVar14 = -0x5c1c5171;
              if ((local_66d & 1) != 0) {
                iVar14 = -0x43b93f6b;
              }
              local_3b8 = (char *)0x0;
              local_643 = local_66d;
              local_18c = local_568;
              goto joined_r0x00409068;
            }
            if (iVar19 != 0xb21edb8) goto joined_r0x00409006;
            iVar19 = 0x4203c159;
            local_6c0 = 0x6e;
            goto LAB_004064e0;
          }
          local_60c = (int)arg[(long)(local_290 + (long)local_218)];
          iVar19 = -0x359d0cb;
          pcVar20 = arg;
        }
      }
    }
    else if (iVar19 < 0x367b2567) {
      if (iVar19 < 0x2e1f68ae) {
        if (iVar19 < 0x286a0521) {
          if (iVar19 < 0x24798e48) {
            if (iVar19 == 0x231211a0) {
              local_5f9 = local_696;
              local_1c0 = local_400;
              bVar24 = local_400 < local_4d0;
              iVar19 = -0x11e23dc;
              pcVar20 = (char *)0x88c7815c;
              goto LAB_00409271;
            }
            if (iVar19 != 0x23592045) goto joined_r0x00409006;
            bVar24 = local_60c == 0x7c;
            goto LAB_00407e8b;
          }
          if (iVar19 == 0x24798e48) {
            pcVar20 = (char *)0xe1fa1387;
            local_6d1 = local_641;
            iVar14 = -0x21c10faf;
            if ((local_6dd & 1) == 0) goto joined_r0x00409068;
            iVar14 = -0x1e05ec79;
            goto joined_r0x00409068;
          }
          if (iVar19 == 0x25bd8294) {
            local_250 = local_258 + 1;
            bVar24 = local_250 < local_4d0;
            iVar19 = -0x2f87cbb7;
            pcVar20 = (char *)0x51684d88;
            goto LAB_00409271;
          }
          if (iVar19 != 0x27abe5b4) goto joined_r0x00409006;
          buffer[(long)local_260] = '\'';
          iVar19 = -0x148c0130;
        }
        else if (iVar19 < 0x2b993d33) {
          if (iVar19 != 0x286a0521) {
            if (iVar19 != 0x292c00a6) goto joined_r0x00409006;
            bVar25 = SBORROW4(local_6d8,0x41);
            bVar24 = (int)(local_6d8 - 0x41) < 0;
            iVar19 = -0x5b6d1c18;
            pcVar20 = (char *)0x31bf32d;
            goto LAB_00409022;
          }
          *buffer = '\"';
          iVar19 = -0x1e8714d2;
        }
        else {
          if (iVar19 != 0x2b993d33) {
            if (iVar19 == 0x2c634995) {
              bVar24 = local_488 < local_3c8;
              iVar19 = -0x53088084;
              pcVar20 = (char *)0x75f38424;
              goto LAB_00409271;
            }
            if (iVar19 != 0x2c64a008) goto joined_r0x00409006;
            iVar19 = 0x9ad67c1;
            pcVar20 = (char *)0x7c02e571;
            local_672 = local_695;
            local_66d = local_6b9;
            local_66c = local_6b9;
            local_568 = local_67c;
            if (4 < (int)local_67c) goto joined_r0x00409006;
            iVar19 = 0x7c02e571;
            goto joined_r0x00409006;
          }
          local_3a0 = local_3e8 + 1;
          local_350 = local_f8 + 1;
          iVar19 = -0x6d8d1883;
        }
      }
      else {
        if (iVar19 < 0x320d6956) {
          if (iVar19 < 0x2fcf2033) {
            if (iVar19 != 0x2e1f68ae) {
              if (iVar19 != 0x2fc52b78) goto joined_r0x00409006;
              local_2c0 = local_6b0 + 1;
              bVar24 = local_2c0 < local_6d0;
              iVar19 = -0x611637a9;
              pcVar20 = (char *)0x3fd92880;
              goto LAB_00409271;
            }
            local_6c1 = 1;
LAB_00408f6e:
            local_510 = local_4a0;
            local_518 = local_4a8;
            bVar4 = 0;
            local_538 = local_110;
            local_540 = local_108;
            local_5b8 = local_67c;
            local_548 = (char *)0x0;
            goto LAB_00408f70;
          }
          if (iVar19 == 0x2fcf2033) {
            iVar19 = -0x48821763;
            pcVar20 = (char *)0x3fc30886;
            bVar24 = (local_6dc & 1) == 0;
            goto LAB_004090d8;
          }
          if (iVar19 != 0x2ff7a0b1) {
            pcVar16 = local_3d8;
            if (iVar19 != 0x31edb382) goto joined_r0x00409006;
            goto LAB_00407b49;
          }
          local_4e8 = local_4e0 + (long)local_4b0;
          iVar19 = 0x566e46b5;
          local_5c4 = 0;
          pcVar20 = (char *)(ulong)local_560;
          local_5c8 = local_560;
          goto LAB_004064e0;
        }
        if (iVar19 < 0x336d8d06) {
          if (iVar19 == 0x320d6956) {
            bVar24 = local_61c == 0x21;
            goto LAB_00407e1d;
          }
          if (iVar19 == 0x325db615) {
            iVar19 = -0x6d8a11fe;
            if (local_678 == shell_always_quoting_style) {
              iVar19 = -0x87acf8e;
            }
            bVar24 = (local_6dd & 1) == 0;
            pcVar20 = (char *)0x9275ee02;
            goto LAB_00408cb0;
          }
          if (iVar19 != 0x32fcc5c2) goto joined_r0x00409006;
          local_450 = local_e0;
          iVar19 = 0x56147fa9;
          local_5a0 = 0;
          pcVar20 = (char *)((ulong)pcVar20 & 0xffffffffffffff00 | (ulong)local_6e1);
          bVar2 = local_646;
          goto LAB_00406689;
        }
        if (iVar19 == 0x336d8d06) {
          iVar19 = 0x32fcc5c2;
          pcVar20 = (char *)0x64f5ba3e;
          bVar24 = local_6bc == 0;
          goto LAB_004090d8;
        }
        if (iVar19 != 0x3569c5c8) {
          if (iVar19 != 0x35837ffb) goto joined_r0x00409006;
          iVar19 = 0x7ed1059c;
          local_54c = 0;
          goto LAB_004064e0;
        }
        buffer[(long)local_2b0] = '?';
        iVar19 = -0x571534a0;
      }
    }
    else {
      if (iVar19 < 0x3fc4c1d7) {
        if (iVar19 < 0x38beb86e) {
          if (0x37713ebf < iVar19) {
            if (iVar19 == 0x37713ec0) {
              iVar19 = 0x1b5b584d;
              pcVar20 = (char *)0x24fadc8;
              bVar24 = sVar15 != 1;
              goto LAB_004090d8;
            }
            if (iVar19 != 0x38343e51) {
              if (iVar19 != 0x38921ca9) goto joined_r0x00409006;
              bVar25 = SBORROW4(local_584,0x34);
              bVar24 = (int)(local_584 - 0x34) < 0;
              iVar19 = -0x3e541ad;
              pcVar20 = (char *)0xc7ba80a2;
              goto LAB_00409022;
            }
            iVar19 = 0x6ac25e51;
            pcVar20 = local_6b0;
            local_3f8 = local_6b0;
            if (local_3e0 == (byte *)0x0) goto joined_r0x00409006;
            iVar19 = 0x408a7e1a;
            goto joined_r0x00409006;
          }
          if (iVar19 != 0x367b2567) {
            if (iVar19 != 0x37185d53) goto joined_r0x00409006;
            iVar19 = 0x7d349bf0;
            local_640 = bVar7;
            if (local_678 == shell_always_quoting_style) {
              iVar19 = 0x5a807149;
            }
LAB_00408518:
            pcVar20 = (char *)(ulong)local_6e2;
            unaff_R13B = local_640;
LAB_00408ff8:
            unaff_R15B = 0;
            unaff_R14B = local_6e4;
            local_6e0 = local_6e3;
            local_6df = local_6e1;
            local_6de = local_6e2;
            pcVar22 = local_6d0;
            unaff_R12 = local_6b0;
            local_638 = local_688;
            local_630 = local_690;
            local_628 = local_6b8;
            goto joined_r0x00409006;
          }
          iVar19 = 0x4203c159;
          local_6c0 = 0x72;
        }
        else if (iVar19 < 0x3df5fdbd) {
          if (iVar19 == 0x38beb86e) {
            iVar14 = mbsinit((mbstate_t *)&local_138);
            iVar19 = -0x2124c508;
            pcVar20 = (char *)0xe0ba3425;
            local_6a3 = local_63f;
            local_478 = local_f0;
            local_468 = local_490;
            if (iVar14 != 0) goto joined_r0x00409006;
            iVar19 = -0x1f45cbdb;
            goto joined_r0x00409006;
          }
          if (iVar19 != 0x3c6a567f) goto joined_r0x00409006;
          local_428 = local_d8;
          iVar19 = 0x56147fa9;
          local_450 = local_e0;
          local_5a0 = local_550;
          local_69c = local_666;
          local_69a = local_665;
          local_69b = local_664;
          local_470 = local_308;
          pcVar20 = local_e0;
          bVar2 = local_646;
          bVar3 = local_667;
        }
        else {
          if (iVar19 == 0x3df5fdbd) {
            bVar25 = SBORROW4(local_57c,0xf);
            bVar24 = (int)(local_57c - 0xf) < 0;
            iVar19 = 0x7a2139e3;
            pcVar20 = (char *)0x4f6af3bd;
            goto LAB_00409022;
          }
          if (iVar19 == 0x3e968845) {
            iVar19 = -0x38868cee;
            if ((local_6dd & 1) != 0) {
              iVar19 = -0x510a8e85;
            }
            bVar24 = quote_these_too == (uint *)0x0;
            pcVar20 = (char *)0xc7797312;
            goto LAB_00408cb0;
          }
          if (iVar19 != 0x3fc30886) goto joined_r0x00409006;
          pcVar20 = local_578;
          local_4b8 = (char *)quotearg_buffer_restyled
                                        (buffer,(size_t)local_690,arg,(size_t)local_578,
                                         c_quoting_style,flags,quote_these_too,(char *)local_230,
                                         (char *)local_238);
LAB_0040728f:
          iVar19 = 0x68fd5719;
        }
        goto LAB_004064e0;
      }
      if (iVar19 < 0x4203c159) {
        if (iVar19 < 0x40f2ea54) {
          if (iVar19 != 0x3fd92880) {
            if (iVar19 != 0x408a7e1a) {
              if (iVar19 != 0x3fc4c1d7) goto joined_r0x00409006;
                    /* WARNING: Subroutine does not return */
              abort();
            }
            iVar19 = -0x656ec497;
            pcVar20 = local_6b0;
            local_3f8 = local_6b0;
            local_2f8 = local_3e0;
            local_2e8 = local_6b0;
            if ((local_6dd & 1) == 0) goto joined_r0x00409006;
            iVar19 = 0x6ac25e51;
            goto joined_r0x00409006;
          }
          buffer[(long)local_2c0] = '\"';
          iVar19 = -0x611637a9;
        }
        else {
          if (iVar19 == 0x40f2ea54) {
            bVar24 = local_4d8 < local_6d0;
            iVar19 = -0x4e479316;
            pcVar20 = (char *)0x86599e58;
            goto LAB_00409271;
          }
          if (iVar19 == 0x41b46991) {
            local_2c8 = local_6b8 + 2;
            iVar14 = 0x7d349bf0;
            pcVar20 = (char *)0x46e066cc;
            if (local_688 <= local_2c8) goto LAB_004082d7;
            iVar14 = 0x46e066cc;
            goto LAB_004082d7;
          }
          if (iVar19 != 0x4201febc) goto joined_r0x00409006;
          local_5d0 = local_c0;
          local_5d8 = local_4c8;
          local_5e0 = local_c8;
          local_5e8 = local_d0;
          local_6d9 = local_691;
          local_6da = local_639;
          local_6db = local_6dc;
          iVar19 = -0xbb19703;
          local_658 = 0x10;
          local_5f0 = local_4d0;
        }
      }
      else {
        if (iVar19 < 0x43d0d807) {
          if (iVar19 != 0x4203c159) {
            if (iVar19 != 0x438d2fcb) goto joined_r0x00409006;
            iVar19 = -0x2fd2c068;
            pcVar20 = (char *)0xd197ff03;
            bVar24 = !bVar23;
            goto LAB_004090d8;
          }
          pcVar20 = (char *)0x24798e48;
          local_6d1 = local_6c0;
          iVar14 = -0x21c10faf;
          local_641 = local_6c0;
          if (local_678 != shell_always_quoting_style) goto joined_r0x00409068;
          iVar14 = 0x24798e48;
          goto joined_r0x00409068;
        }
        if (iVar19 != 0x43d0d807) {
          if (iVar19 == 0x43dba6fe) {
            iVar19 = 0xe85f377;
            pcVar20 = local_6d0;
            local_300 = local_6d0;
            local_2f0 = local_578;
            if ((local_6dd & 1) == 0) goto joined_r0x00409006;
            iVar19 = 0x71c9d2e8;
            goto joined_r0x00409006;
          }
          if (iVar19 != 0x44574ab3) goto joined_r0x00409006;
          pcVar20 = local_38;
          local_4b8 = (char *)quotearg_buffer_restyled
                                        (buffer,(size_t)local_40,arg,(size_t)local_38,local_588,
                                         flags & 0xfffffffdU,(uint *)0x0,(char *)local_230,
                                         (char *)local_238);
          goto LAB_0040728f;
        }
        buffer[(long)local_5b0] = '\'';
        iVar19 = -0x765170ec;
      }
    }
  }
  else if (iVar19 < 0x618b0c4c) {
    if (iVar19 < 0x52157a07) {
      if (iVar19 < 0x4a7d58a8) {
        if (0x463c7a40 < iVar19) {
          if (iVar19 < 0x47e19a1c) {
            if (iVar19 != 0x463c7a41) {
              if (iVar19 != 0x46e066cc) goto joined_r0x00409006;
              iVar14 = 0x7d349bf0;
              pcVar20 = (char *)0xe9daa39f;
              if ((arg + 1)[(long)local_6b8] != '?') goto LAB_004082d7;
              iVar14 = -0x16255c61;
              goto LAB_004082d7;
            }
            iVar19 = 0x492502f0;
            pcVar20 = (char *)0xce61bee9;
            local_66a = local_695;
            if (0 < (int)local_67c) goto joined_r0x00409006;
            iVar19 = -0x319e4117;
            goto joined_r0x00409006;
          }
          if (iVar19 == 0x47e19a1c) {
            pcVar20 = (char *)0xedf4b3fa;
            iVar19 = 0x4203c159;
            local_6c0 = local_6e2;
            if (local_6bc == 0) goto joined_r0x00409006;
            iVar19 = -0x120b4c06;
            goto joined_r0x00409006;
          }
          if (iVar19 != 0x492502f0) {
            if (iVar19 != 0x495d2c34) goto joined_r0x00409006;
            local_280 = local_288 + 1;
            bVar24 = local_280 < local_6d0;
            iVar19 = 0x5fa70308;
            pcVar20 = (char *)0x97c97627;
            goto LAB_00409271;
          }
          iVar19 = 0x7c02e571;
          local_66c = 1;
          local_672 = local_66a;
          goto LAB_004064e0;
        }
        if (0x45b815e3 < iVar19) {
          if (iVar19 == 0x45b815e4) {
            iVar14 = 0x2c634995;
            iVar19 = -0x4cb75ec3;
            bVar10 = local_5f7;
            goto LAB_00407fa1;
          }
          if (iVar19 == 0x45da0fc2) {
            local_3d8 = local_388;
            pcVar20 = (char *)0xccc377f8;
            iVar19 = -0xd050028;
            if (local_330 < local_a0) goto LAB_00408000;
            iVar19 = -0x333c8808;
            goto LAB_00408000;
          }
          if (iVar19 != 0x46004cef) goto joined_r0x00409006;
          local_2a8 = local_6b0 + 1;
          bVar24 = local_2a8 < local_3d0;
          iVar19 = 0x50800aa4;
          pcVar20 = (char *)0xa5f1b424;
          goto LAB_00409271;
        }
        if (iVar19 == 0x45286e14) {
          bVar25 = SBORROW4(local_580,0x2c);
          bVar24 = (int)(local_580 - 0x2c) < 0;
          iVar19 = 0x598f204;
          pcVar20 = (char *)0x8cb71766;
          goto LAB_00409022;
        }
        if (iVar19 != 0x456ba924) goto joined_r0x00409006;
        local_3f0 = local_158;
        local_606 = local_64e;
        local_605 = (byte)local_160;
        local_604 = (byte)local_188;
        local_6b9 = local_64d;
        local_88 = local_150;
        local_695 = (byte)local_180;
        local_110 = local_178;
        local_108 = local_170;
        local_80 = local_168;
        local_4a8 = local_140;
        local_4a0 = local_148;
        local_67c = local_480;
        iVar19 = -0x662dc671;
      }
      else {
        if (iVar19 < 0x50800aa4) {
          if (iVar19 < 0x4e4dc84f) {
            if (iVar19 == 0x4a7d58a8) {
              bVar24 = arg[(long)local_118] == '\0';
              iVar19 = -0x271c580c;
              pcVar20 = (char *)0x85cc1832;
              goto LAB_004090d8;
            }
            if (iVar19 != 0x4b56707f) goto joined_r0x00409006;
            local_468 = (char *)strlen(arg);
            iVar19 = -0x1f45cbdb;
LAB_004085c0:
            local_6a3 = 1;
            local_478 = (char *)0x0;
            goto joined_r0x00409006;
          }
          if (iVar19 == 0x4e4dc84f) {
            bVar25 = SBORROW4(local_6d8,0x27);
            bVar24 = (int)(local_6d8 - 0x27) < 0;
            iVar14 = -0x40c72ae0;
            goto LAB_00407ea6;
          }
          if (iVar19 != 0x4f6af117) {
            if (iVar19 != 0x4f6af3bd) goto joined_r0x00409006;
            bVar24 = local_57c == 0;
            iVar19 = 0x1c8c675a;
            pcVar20 = (char *)0xf8587b22;
            goto LAB_00408cb0;
          }
          pcVar20 = (char *)(ulong)local_64b;
          buffer[(long)local_3e8] = local_64b;
          iVar19 = 0x2b993d33;
          goto LAB_004064e0;
        }
        if (iVar19 < 0x50d35a85) {
          if (iVar19 == 0x50800aa4) {
            local_2a0 = local_2a8 + 1;
            bVar24 = local_2a0 < local_3d0;
            iVar19 = 0x5fa61f6c;
            pcVar20 = (char *)0x8a858c20;
            goto LAB_00409271;
          }
          if (iVar19 != 0x50c6fda1) goto joined_r0x00409006;
          local_6c1 = local_695;
          goto LAB_00408f6e;
        }
        if (iVar19 == 0x50d35a85) {
          buffer[(long)local_248] = '\'';
          iVar19 = -0x1881848;
          goto LAB_004064e0;
        }
        if (iVar19 != 0x51684d88) {
          if (iVar19 != 0x51699fbd) goto joined_r0x00409006;
          local_220 = local_318;
          local_118 = local_6b8 + (long)local_318;
          bVar24 = local_118 < local_490;
          iVar19 = -0x271c580c;
          pcVar20 = (char *)0x4a7d58a8;
          goto LAB_00409271;
        }
        buffer[(long)local_250] = '\'';
        iVar19 = -0x2f87cbb7;
      }
    }
    else if (iVar19 < 0x5921050f) {
      if (iVar19 < 0x56147fa9) {
        if (iVar19 < 0x553e218a) {
          if (iVar19 == 0x52157a07) {
            bVar24 = (local_6dd & 1) == 0;
            iVar19 = -0xb66c1b8;
            pcVar20 = (char *)0x91018eab;
            goto LAB_004090d8;
          }
          if (iVar19 != 0x5478aad6) goto joined_r0x00409006;
          bVar24 = local_67c + ~escape_quoting_style < 3;
          iVar19 = 0x6fee4918;
          pcVar20 = (char *)0x19c5a5e6;
          goto LAB_00409271;
        }
        if (iVar19 == 0x553e218a) {
          iVar19 = -0x43210b7c;
          pcVar20 = local_5b0;
          local_69e = local_6ba;
          local_448 = local_5b0;
          if (local_678 != shell_always_quoting_style) goto joined_r0x00409006;
          iVar19 = -0x76270dbe;
          goto joined_r0x00409006;
        }
        if (iVar19 == 0x55b6d685) {
          iVar14 = -0x7c07f38f;
          if (local_690 != (char *)0x0) {
            iVar14 = 0x159f232b;
          }
          pcVar20 = local_690;
          local_380 = local_6d0;
          local_328 = local_690;
          if (local_6d0 != (char *)0x0) goto joined_r0x00409068;
          iVar14 = 0x159f232b;
          goto joined_r0x00409068;
        }
        if (iVar19 != 0x55e7cf76) goto joined_r0x00409006;
        bVar25 = SBORROW4(local_6d8,0x7e);
        bVar24 = (int)(local_6d8 - 0x7e) < 0;
        iVar19 = -0x75b2babf;
        pcVar20 = (char *)0xaf4d75a4;
        goto LAB_00409022;
      }
      if (iVar19 < 0x56e78998) {
        if (iVar19 == 0x56147fa9) {
          local_580 = local_5a0;
          local_5fe = local_69c;
          local_63a = local_69a;
          local_65d = local_69b;
          local_200 = local_450;
          local_1f8 = local_470;
          local_1f0 = local_428;
          iVar19 = 0x45286e14;
          local_63c = bVar2;
          local_63b = bVar3;
        }
        else {
          if (iVar19 != 0x566e46b5) goto joined_r0x00409006;
          local_63f = (byte)local_5c8;
          local_f0 = local_4e8;
          local_584 = local_5c4;
          iVar19 = 0x38921ca9;
        }
        goto LAB_004064e0;
      }
      if (iVar19 == 0x56e78998) {
        bVar24 = local_6d8 == 0x3f;
        iVar19 = -0x53f51e1d;
        pcVar20 = (char *)0xc41fe1a7;
        goto LAB_00408cb0;
      }
      if (iVar19 != 0x56e9acc0) {
        if (iVar19 != 0x58deffab) goto joined_r0x00409006;
        bVar25 = SBORROW4(local_6d8,0x7c);
        bVar24 = (int)(local_6d8 - 0x7c) < 0;
        iVar14 = 0x37185d53;
        pcVar20 = (char *)0xaf4d75a4;
        goto LAB_00407eab;
      }
      local_358 = (byte *)gettext_quote("`",local_67c);
      local_368 = (byte *)gettext_quote("\'",local_67c);
      iVar19 = -0xc2434c5;
    }
    else {
      if (iVar19 < 0x5c1ac00a) {
        if (iVar19 < 0x59adf2ec) {
          if (iVar19 != 0x5921050f) {
            if (iVar19 != 0x59430ae6) goto joined_r0x00409006;
            local_90 = local_1b8 + 1;
            iVar14 = 0x35837ffb;
            if ((local_5f8 & 1) != 0) {
              iVar14 = 0x7ed1059c;
            }
            local_54c = (uint)(char *)CONCAT71(0x7ed105,local_6dc);
            pcVar20 = (char *)CONCAT71(0x7ed105,local_6dc);
            goto joined_r0x00409068;
          }
          iVar19 = 0x492502f0;
          local_66a = 1;
        }
        else {
          if (iVar19 != 0x59adf2ec) {
            if (iVar19 != 0x5a807149) {
              if (iVar19 != 0x5ad7cf7f) goto joined_r0x00409006;
              unaff_R13B = 0;
              unaff_R15B = 0;
              iVar19 = iVar12;
              unaff_R14B = local_6e4;
              local_6e0 = local_6e3;
              local_6df = local_6e1;
              local_6de = local_6e2;
              pcVar22 = local_6d0;
              unaff_R12 = local_6b0;
              local_638 = local_688;
              local_630 = local_690;
              local_628 = local_6b8;
              goto joined_r0x00409006;
            }
            iVar19 = 0x7d349bf0;
            if ((local_6dd & 1) != 0) {
              iVar19 = -0x21f2bf10;
            }
            goto LAB_00408518;
          }
          local_370 = local_218 + 1;
          iVar19 = 0x120112a5;
        }
        goto LAB_004064e0;
      }
      if (0x5fa61f6b < iVar19) {
        if (iVar19 != 0x5fa61f6c) {
          if (iVar19 != 0x5fa70308) {
            if (iVar19 != 0x60728148) goto joined_r0x00409006;
            bVar25 = SBORROW4(local_6d8,0x5e);
            bVar24 = (int)(local_6d8 - 0x5e) < 0;
            iVar19 = -0x4016c04a;
            pcVar20 = (char *)0x292c00a6;
            goto LAB_00409022;
          }
          local_448 = local_280 + 1;
          iVar19 = -0x43210b7c;
          local_69e = 1;
          goto LAB_004039fc;
        }
        unaff_R12 = local_2a0 + 1;
        local_6de = local_6e2;
        local_628 = local_6b8;
        local_630 = local_78;
        local_638 = local_688;
        local_6df = local_6e1;
        iVar19 = 0x7d349bf0;
        unaff_R13B = 1;
        unaff_R15B = 0;
        local_6e0 = 1;
        unaff_R14B = 0;
        pcVar22 = local_3d0;
        goto LAB_004064e0;
      }
      if (iVar19 != 0x5c1ac00a) {
        if (iVar19 == 0x5caf72f0) {
          bVar24 = local_60c == 0x60;
          goto LAB_00407e8b;
        }
        if (iVar19 != 0x5ebb4251) goto joined_r0x00409006;
        buffer[(long)local_270] = local_6bb >> 3 & 7 | 0x30;
        iVar19 = 0x6bf15c94;
        pcVar20 = local_270;
        goto LAB_004064e0;
      }
      iVar19 = -0x6d8d1883;
      local_350 = local_100;
      local_3a0 = (char *)0x0;
    }
  }
  else {
    if (iVar19 < 0x6b6f9d2c) {
      if (iVar19 < 0x6648d30a) {
        if (0x647d5047 < iVar19) {
          if (iVar19 < 0x64f5ba3e) {
            if (iVar19 == 0x647d5048) {
              bVar24 = local_6bc == 0;
              iVar19 = -0x31926a8b;
              pcVar20 = (char *)0xdce0963d;
              goto LAB_004090d8;
            }
            if (iVar19 != 0x64cb348b) goto joined_r0x00409006;
            goto LAB_00407b49;
          }
          if (iVar19 == 0x64f5ba3e) {
            bVar24 = local_663 == 0;
            iVar19 = 0x166cf1ff;
            pcVar20 = (char *)0x32fcc5c2;
            goto LAB_004090d8;
          }
          if (iVar19 != 0x65197087) {
            if (iVar19 != 0x660afdbb) goto joined_r0x00409006;
            bVar24 = local_3e8 < local_3f0;
            iVar19 = 0x2b993d33;
            pcVar20 = (char *)0x4f6af117;
            goto LAB_00409271;
          }
          bVar25 = SBORROW4(local_6d8,0xc);
          bVar24 = (int)(local_6d8 - 0xc) < 0;
          iVar19 = -0x43df7c42;
          pcVar20 = (char *)0x9d833b07;
          goto LAB_00409022;
        }
        if (0x6339a21f < iVar19) {
          if (iVar19 == 0x6339a220) {
            bVar25 = SBORROW4(local_6d8,10);
            bVar24 = (int)(local_6d8 - 10) < 0;
            iVar19 = 0xb21edb8;
            pcVar20 = (char *)0x69ab88f8;
            goto LAB_00409022;
          }
          if (iVar19 == 0x63a892d7) {
            bVar24 = local_678 == shell_always_quoting_style;
            iVar19 = -0x5757f928;
            pcVar20 = (char *)0x6eb4594c;
            goto LAB_00408cb0;
          }
          if (iVar19 != 0x63ecbc5f) goto joined_r0x00409006;
          local_258 = local_4c8 + 1;
          bVar24 = local_258 < local_4d0;
          iVar19 = 0x25bd8294;
          pcVar20 = (char *)0xda6a431d;
          goto LAB_00409271;
        }
        if (iVar19 == 0x618b0c4c) {
          uVar13 = local_61c - 0x27;
          goto LAB_00408cce;
        }
        if (iVar19 != 0x632f9713) goto joined_r0x00409006;
        iVar19 = 0x9ad67c1;
        local_568 = c_quoting_style;
        local_66d = 1;
      }
      else if (iVar19 < 0x6756050d) {
        if (iVar19 < 0x66f9435c) {
          if (iVar19 == 0x6648d30a) {
            local_308 = local_5b0;
            local_664 = local_6ba;
            local_665 = local_6bb;
            local_666 = local_694;
            local_550 = 0x10;
            local_667 = local_65f;
            goto LAB_00408ef7;
          }
          if (iVar19 != 0x66ebc4cd) goto joined_r0x00409006;
          local_663 = (byte)local_55c & 1;
          pcVar20 = (char *)0x166cf1ff;
          iVar19 = 0x336d8d06;
          local_646 = local_663;
          local_e8 = local_378;
          local_e0 = local_338;
          if ((char *)0x1 < local_378) {
            iVar19 = 0x166cf1ff;
          }
joined_r0x00407f34:
          if (iVar19 < -0x1c7c5d0) goto LAB_004039fc;
        }
        else {
          pcVar21 = local_4e0;
          if (iVar19 != 0x66f9435c) {
            if (iVar19 == 0x671cb0e2) goto LAB_00407b49;
            if (iVar19 != 0x6750c4f9) goto joined_r0x00409006;
            bVar25 = SBORROW4(local_67c,8);
            bVar24 = (int)(local_67c + ~escape_quoting_style) < 0;
            iVar19 = 0x5478aad6;
            pcVar20 = (char *)0x2e1f68ae;
            goto LAB_00409022;
          }
LAB_0040845c:
          local_5c4 = 0x34;
          iVar19 = 0x566e46b5;
          local_5c8 = 0;
          pcVar20 = pcVar21;
          local_4e8 = pcVar21;
        }
      }
      else if (iVar19 < 0x69058b57) {
        if (iVar19 != 0x6756050d) {
          if (iVar19 == 0x67d468af) {
            bVar24 = (local_6dd & 1) == 0;
            iVar19 = 0x55b6d685;
            pcVar20 = (char *)0x1eac3be9;
            goto LAB_004090d8;
          }
          if (iVar19 != 0x68fd5719) goto joined_r0x00409006;
          return (size_t)local_4b8;
        }
        buffer[(long)local_228] = '\\';
        iVar19 = 0x416143d;
      }
      else {
        if (iVar19 == 0x69058b57) {
          bVar25 = SBORROW4(local_6d8,7);
          bVar24 = (int)(local_6d8 - 7) < 0;
          iVar19 = -0x629f5deb;
          pcVar20 = (char *)0xe65faf38;
          goto LAB_00409022;
        }
        if (iVar19 != 0x69ab88f8) {
          if (iVar19 != 0x6ac25e51) goto joined_r0x00409006;
          local_1b0 = local_3f8;
          bVar24 = local_3f8 < local_6d0;
          iVar19 = -0xc64753d;
          pcVar20 = (char *)0x74c779d;
          goto LAB_00409271;
        }
        iVar19 = 0x4203c159;
        local_6c0 = 0x74;
      }
      goto LAB_004064e0;
    }
    if (iVar19 < 0x748c4531) {
      if (iVar19 < 0x6fee4918) {
        if (0x6ea4bf52 < iVar19) {
          if (iVar19 == 0x6ea4bf53) {
            iVar19 = 0x1cc6d789;
            if ((local_6a1 & 1) != 0) {
              iVar19 = -0x40a4934e;
            }
            local_3b0 = (char *)0x0;
            pcVar20 = (char *)0xbf5b6cb2;
            local_642 = local_6a1;
            local_603 = local_6a4;
            goto joined_r0x00409006;
          }
          if (iVar19 == 0x6eb4594c) {
            bVar24 = (local_6dd & 1) == 0;
            iVar14 = 0x7d349bf0;
            pcVar20 = (char *)0x671cb0e2;
            goto LAB_004082d4;
          }
          if (iVar19 != 0x6fd5b9cf) goto joined_r0x00409006;
          local_420 = local_5b0 + 1;
          iVar19 = -0x9ef7c34;
          local_6a2 = local_65f;
          local_69f = local_6ba;
          local_69d = local_6bb;
          bVar6 = 0;
          goto joined_r0x00409006;
        }
        if (iVar19 == 0x6b6f9d2c) {
          local_65f = (byte)local_564;
          local_694 = local_66e;
          local_6bb = local_668;
          local_6ba = local_66b;
          local_5b0 = local_310;
          local_d8 = local_320;
          bVar24 = local_6bc == 0;
          iVar19 = -0x21188f96;
          pcVar20 = (char *)0xb4c899ce;
          goto LAB_004090d8;
        }
        if (iVar19 != 0x6bf15c94) goto joined_r0x00409006;
        local_420 = local_270 + 1;
        local_69d = local_6bb & 7 | 0x30;
        local_69f = local_600;
        iVar19 = -0x9ef7c34;
        local_6a2 = 1;
        bVar6 = local_694;
        goto LAB_004039fc;
      }
      if (0x71c9d2e7 < iVar19) {
        if (iVar19 == 0x71c9d2e8) {
          local_40 = local_300;
          local_38 = local_2f0;
          iVar19 = 0x44574ab3;
          if (local_678 != shell_always_quoting_style) goto LAB_004088ea;
          iVar19 = -0x718ce589;
          goto LAB_004088ea;
        }
        if (iVar19 == 0x7237e26f) {
          bVar25 = SBORROW4(local_67c,7);
          bVar24 = (int)(local_67c + ~c_maybe_quoting_style) < 0;
          iVar19 = 0x6750c4f9;
          pcVar20 = (char *)0x632f9713;
          goto LAB_00409022;
        }
        if (iVar19 != 0x7367ccde) goto joined_r0x00409006;
        buffer[(long)local_6b0] = '\'';
        iVar19 = 0x46004cef;
        goto LAB_004064e0;
      }
      if (iVar19 == 0x6fee4918) {
        iVar19 = 0x3fc4c1d7;
        goto LAB_004064e0;
      }
      if (iVar19 != 0x6feec056) goto joined_r0x00409006;
      buffer[(long)local_278] = local_6bb >> 6 | 0x30;
      iVar19 = -0x6ce6178f;
      pcVar20 = local_278;
    }
    else if (iVar19 < 0x7a2139e3) {
      if (iVar19 < 0x75f38424) {
        if (iVar19 == 0x748c4531) {
          bVar25 = SBORROW4(local_67c,6);
          bVar24 = (int)(local_67c + ~c_quoting_style) < 0;
          iVar19 = 0x7237e26f;
          pcVar20 = (char *)0x2c64a008;
          goto LAB_00409022;
        }
        if (iVar19 != 0x75964b5e) goto joined_r0x00409006;
        bVar25 = SBORROW4(local_60c,0x5e);
        bVar24 = local_60c + -0x5e < 0;
        iVar19 = -0x49b67d8b;
        pcVar20 = (char *)0x1620464c;
        goto LAB_00409022;
      }
      if (iVar19 != 0x75f38424) {
        if (iVar19 != 0x764623e3) {
          if (iVar19 != 0x786dea1a) goto joined_r0x00409006;
          local_130 = local_6b8 + 1;
          pcVar20 = (char *)0xe224b2e1;
          iVar19 = -0x70414a18;
          local_520 = local_570;
          if (local_688 <= local_130) goto joined_r0x00409006;
          iVar19 = -0x1ddb4d1f;
          goto joined_r0x00409006;
        }
        bVar25 = SBORROW4(local_6d8,9);
        bVar24 = (int)(local_6d8 - 9) < 0;
        iVar19 = 0x1dd1f07c;
        pcVar20 = (char *)0x69058b57;
        goto LAB_00409022;
      }
      buffer[(long)local_488] = '\'';
      iVar19 = -0x53088084;
    }
    else {
      if (iVar19 < 0x7d729940) {
        if (iVar19 == 0x7a2139e3) {
          bVar25 = SBORROW4(local_57c,0x10);
          bVar24 = (int)(local_57c - 0x10) < 0;
          iVar19 = -0x3e4fc40;
          pcVar20 = (char *)0xf8587b22;
          goto LAB_00409022;
        }
        if (iVar19 != 0x7c02e571) {
          if (iVar19 != 0x7d349bf0) goto joined_r0x00409006;
          local_5fc = local_6df;
          local_692 = local_6de;
          local_65b = local_6e0;
          local_1e0 = local_638;
          local_1d8 = local_630;
          local_1c8 = local_628;
          bVar24 = local_648 == 0;
          iVar19 = 0x3e968845;
          pcVar20 = (char *)0x80f239c0;
          local_65c = unaff_R13B;
          local_65a = unaff_R14B;
          local_5fd = unaff_R15B;
          local_1e8 = pcVar22;
          local_1d0 = unaff_R12;
          goto LAB_004090d8;
        }
        pcVar20 = (char *)0x6ea4bf53;
        iVar19 = -0x2dfc66ea;
        local_662 = local_66c;
        local_6a4 = local_672;
        local_6a1 = local_66c;
        if ((local_66c & 1) != 0) {
          iVar19 = 0x6ea4bf53;
        }
        goto joined_r0x00407f34;
      }
      if (iVar19 == 0x7d729940) {
        local_5d0 = local_6b8;
        local_5d8 = local_6b0;
        local_5e0 = local_690;
        local_5e8 = local_688;
        local_6d9 = local_6e4;
        local_6da = local_6e3;
        local_6db = local_6dc;
        local_658 = 0xf;
        goto LAB_004039de;
      }
      if (iVar19 == 0x7db686c8) {
        pcVar20 = (char *)0xee890295;
        iVar19 = -0x297a5b83;
        local_6a0 = local_6e4;
        local_458 = local_6b0;
        if ((local_6e4 & 1) == 0) goto joined_r0x00409006;
        iVar19 = -0x1176fd6b;
        goto joined_r0x00409006;
      }
      if (iVar19 != 0x7ed1059c) goto joined_r0x00409006;
      local_5d8 = local_90;
      local_5d0 = local_60;
      local_5e0 = local_68;
      local_5e8 = local_70;
      local_6d9 = local_5f4;
      local_6da = local_5f5;
      iVar19 = -0xbb19703;
      local_658 = 0;
      local_5f0 = local_3c8;
      pcVar20 = (char *)(ulong)local_54c;
      local_6db = (byte)local_54c;
    }
  }
LAB_004039fc:
  pcVar16 = local_688;
  if (iVar19 < -0x40c72ae0) {
    if (iVar19 < -0x66e17485) {
      if (iVar19 < -0x7348e89a) {
        if (iVar19 < -0x77387ea4) {
          if (iVar19 < -0x7c07f38f) {
            if (iVar19 < -0x7dc7eaf2) {
              if (iVar19 == -0x7fe081d7) {
                iVar19 = 0x566e46b5;
                if (local_558 == 0) {
                  iVar19 = -0x6d8a11fe;
                }
                local_5c8 = (uint)local_660;
                pcVar20 = local_4e0;
                local_5c4 = local_558;
                local_4e8 = local_4e0;
              }
              else {
                iVar14 = iVar18;
                if (iVar19 == -0x7f0dc640) goto joined_r0x00409068;
              }
            }
            else if (iVar19 == -0x7dc7eaf2) {
              iVar19 = -0x40a4934e;
              local_3b0 = (char *)0x1;
            }
            else {
              if (iVar19 == -0x7d9f3862) {
                iVar19 = -0x21c10faf;
                local_6d1 = 0x62;
                goto LAB_004039fc;
              }
              if (iVar19 == -0x7d5a5a36) {
                bVar25 = SBORROW4(local_6d8,0x28);
                bVar24 = (int)(local_6d8 - 0x28) < 0;
                iVar19 = 0x60728148;
                pcVar20 = (char *)0xb4829007;
                goto LAB_00409022;
              }
            }
          }
          else if (iVar19 < -0x7a33e7ce) {
            if (iVar19 == -0x7c07f38f) {
              local_380 = (char *)0x0;
              pcVar20 = local_6d0;
              iVar14 = 0x159f232b;
              local_328 = local_6d0;
              goto joined_r0x00409068;
            }
            if (iVar19 == -0x7bc50e3f) {
              bVar25 = SBORROW4(local_6d8,0x61);
              bVar24 = (int)(local_6d8 - 0x61) < 0;
              goto LAB_00407ea1;
            }
          }
          else {
            if (iVar19 == -0x7a33e7ce) {
              local_318 = local_220 + 1;
              iVar19 = 0x51699fbd;
              goto LAB_004064e0;
            }
            if (iVar19 == -0x79a661a8) {
              buffer[(long)local_4d8] = '\'';
              iVar19 = -0x4e479316;
              goto LAB_004039fc;
            }
            if (iVar19 == -0x77515cb7) {
              iVar14 = -0x695f8c5c;
              if ((local_691 & 1) != 0) {
                iVar14 = 0x231211a0;
              }
              goto LAB_00404783;
            }
          }
        }
        else if (iVar19 < -0x757a73e0) {
          if (iVar19 < -0x76270dbe) {
            if (iVar19 == -0x77387ea4) {
              buffer[(long)local_1c0] = '\\';
              iVar19 = -0x11e23dc;
              goto LAB_004064e0;
            }
            if (iVar19 == -0x765170ec) {
              local_288 = local_5b0 + 1;
              bVar24 = local_288 < local_6d0;
              iVar19 = 0x495d2c34;
              pcVar20 = (char *)0xc53894d1;
              goto LAB_00409271;
            }
          }
          else {
            if (iVar19 != -0x76270dbe) {
              if (iVar19 != -0x76176b7c) {
                if (iVar19 == -0x75b2babf) {
                  bVar24 = local_6d8 == 0x7e;
                  iVar19 = -0x53f51e1d;
                  pcVar20 = (char *)0xf3d065f6;
                  goto LAB_00408cb0;
                }
                goto joined_r0x00409006;
              }
              buffer[(long)local_5b0] = '\\';
              iVar19 = 0x6fd5b9cf;
              goto LAB_004064e0;
            }
            iVar19 = -0x5d3de72a;
            pcVar20 = local_5b0;
            local_69e = local_6ba;
            local_448 = local_5b0;
            if ((local_6ba & 1) != 0) {
              iVar19 = -0x43210b7c;
            }
          }
        }
        else if (iVar19 < -0x74474e96) {
          if (iVar19 == -0x757a73e0) {
            buffer[(long)local_2a0] = '\'';
            iVar19 = 0x5fa61f6c;
            goto LAB_004064e0;
          }
          if (iVar19 == -0x74c05300) {
            iVar19 = 0x1d4f8b83;
            pcVar20 = (char *)0x31edb382;
            bVar24 = (local_6dd & 1) == 0;
            goto LAB_004090d8;
          }
        }
        else {
          if (iVar19 == -0x74474e96) {
            uVar13 = local_61c - 0x3c;
LAB_00408cce:
            bVar24 = uVar13 < 3;
            iVar19 = -0x67a4acce;
            pcVar20 = (char *)0x52157a07;
            goto LAB_00409271;
          }
          if (iVar19 == -0x73f538f7) {
            local_661 = local_6c1;
            local_498 = local_538;
            local_3e0 = local_540;
            local_238 = local_518;
            local_230 = local_510;
            local_678 = local_5b8;
            local_340 = local_80;
            local_348 = local_88;
            local_66f = local_604;
            local_670 = local_605;
            local_671 = local_606;
            iVar19 = 0x12ed529f;
            local_360 = local_3f0;
            local_398 = local_548;
            local_390 = (char *)0x0;
            local_6dd = bVar4;
            goto LAB_004064e0;
          }
          if (iVar19 == -0x73a18a13) {
            buffer[(long)local_570] = '0';
            iVar19 = -0x2cde8f41;
            goto LAB_004039fc;
          }
        }
      }
      else if (iVar19 < -0x6d8a11fe) {
        if (iVar19 < -0x71523802) {
          if (iVar19 < -0x71ba6f6c) {
            if (iVar19 == -0x7348e89a) {
              iVar19 = -0x23d33ced;
              if (local_580 == 0) {
                iVar19 = 0x7d349bf0;
              }
              pcVar20 = (char *)(ulong)local_63a;
              unaff_R14B = local_65d;
              local_6e0 = local_6e3;
              local_6df = local_5fe;
              local_6de = local_63a;
              pcVar22 = local_6d0;
              unaff_R12 = local_1f8;
              local_638 = local_200;
              local_630 = local_690;
              local_628 = local_1f0;
              unaff_R15B = local_63b;
              unaff_R13B = local_63c;
            }
            else if (iVar19 == -0x71ffdd5e) {
              iVar19 = 0x51699fbd;
              local_318 = local_4e0;
              pcVar20 = local_4e0;
              goto LAB_004064e0;
            }
          }
          else {
            if (iVar19 == -0x71ba6f6c) {
              bVar25 = SBORROW4(local_678,5);
              bVar24 = (int)(local_678 + ~shell_escape_always_quoting_style) < 0;
              iVar19 = -0x493debe9;
              pcVar20 = (char *)0x63a892d7;
              goto LAB_00409022;
            }
            if (iVar19 == -0x718ce589) {
              iVar19 = 0x44574ab3;
              if ((local_661 & 1) != 0) {
                iVar19 = -0x21bf5dde;
              }
LAB_004088ea:
              pcVar20 = (char *)(ulong)local_678;
              local_588 = local_678;
            }
            else if (iVar19 == -0x717feb80) {
              local_538 = (undefined *)strlen((char *)local_240);
              local_5b8 = local_67c;
              local_510 = local_100;
              local_518 = local_240;
              local_540 = local_240;
              local_6c1 = 1;
              local_548 = local_3a8;
              bVar4 = local_6b9;
              goto LAB_00408f70;
            }
          }
        }
        else if (iVar19 < -0x70414a18) {
          if (iVar19 == -0x71523802) {
            local_5ff = (byte)local_594;
            local_208 = local_438;
            bVar24 = local_438 < local_6d0;
            iVar19 = -0x2dae8851;
            pcVar20 = (char *)0x300161;
            goto LAB_00409271;
          }
          if (iVar19 == -0x70599c7d) {
            bVar24 = local_61c == 0x2d;
            goto LAB_00407e1d;
          }
        }
        else {
          if (iVar19 == -0x70414a18) {
            local_628 = local_6b8;
            local_630 = local_690;
            local_638 = local_688;
            local_6e0 = local_6e3;
            local_6df = local_6e1;
            iVar19 = 0x7d349bf0;
            local_6de = 0x30;
            unaff_R15B = 1;
            unaff_R13B = 0;
            pcVar22 = local_6d0;
            unaff_R12 = local_520;
            unaff_R14B = local_602;
            goto LAB_004064e0;
          }
          if (iVar19 == -0x6efe7155) goto LAB_00407b49;
          if (iVar19 == -0x6d8d1883) {
            local_64b = *local_350;
            pcVar20 = (char *)0x660afdbb;
            iVar19 = -0x717feb80;
            local_3e8 = local_3a0;
            local_3a8 = local_3a0;
            local_f8 = local_350;
            if (local_64b != 0) {
              iVar19 = 0x660afdbb;
            }
          }
        }
      }
      else if (iVar19 < -0x6abd52a6) {
        if (iVar19 < -0x6ce6178f) {
          if (iVar19 == -0x6d8a11fe) {
            iVar14 = iswprint(local_190);
            iVar19 = -0x3f622954;
            if (iVar14 != 0) {
              iVar19 = 0x2ff7a0b1;
            }
            local_560 = (uint)(char *)CONCAT71(0x2ff7a0,local_660);
            pcVar20 = (char *)CONCAT71(0x2ff7a0,local_660);
          }
          else if (iVar19 == -0x6d7549ed) {
            iVar19 = 0x59adf2ec;
            goto LAB_004064e0;
          }
        }
        else {
          if (iVar19 == -0x6ce6178f) {
            local_270 = local_278 + 1;
            bVar24 = local_270 < local_6d0;
            iVar19 = 0x6bf15c94;
            pcVar20 = (char *)0x5ebb4251;
            goto LAB_00409271;
          }
          if (iVar19 == -0x6c740ebd) {
            iVar19 = -0x4aa92a28;
            if ((local_6dd & 1) != 0) {
              iVar19 = 0x14f96d48;
            }
LAB_004058a6:
            pcVar20 = (char *)(ulong)local_6e3;
            bVar1 = 0;
            bVar9 = 0;
            local_6bf = local_6e3;
            local_6be = local_6e4;
            local_6bd = local_6e2;
            local_528 = local_6d0;
            local_508 = local_688;
            local_500 = local_690;
            local_4f8 = local_6b0;
            local_4f0 = local_6b8;
          }
          else if (iVar19 == -0x6c15b3fb) {
            local_4d0 = local_460;
            local_5fa = local_699;
            local_639 = local_698;
            local_691 = local_697;
            local_d0 = local_440;
            local_c8 = local_430;
            local_4c8 = local_418;
            local_c0 = local_410;
            iVar19 = -0x3267e844;
            pcVar20 = (char *)0x4201febc;
            bVar24 = (local_6dd & 1) == 0;
            local_5fb = bVar5;
            goto LAB_004090d8;
          }
        }
      }
      else if (iVar19 < -0x680e7907) {
        if (iVar19 == -0x6abd52a6) {
          iVar19 = -0x7fe081d7;
          local_558 = 0x10;
          goto LAB_004039fc;
        }
        if (iVar19 == -0x695f8c5c) {
          bVar24 = local_4c8 < local_4d0;
          iVar19 = 0x63ecbc5f;
          pcVar20 = (char *)0xfbe18fa9;
          goto LAB_00409271;
        }
        if (iVar19 == -0x683689d9) {
          buffer[(long)local_280] = '\'';
          iVar19 = 0x5fa70308;
          goto LAB_004064e0;
        }
      }
      else {
        if (iVar19 == -0x680e7907) {
          bVar25 = SBORROW4(local_6d8,0x25);
          bVar24 = (int)(local_6d8 - 0x25) < 0;
LAB_00407ea1:
          iVar14 = 0x19bb047c;
          goto LAB_00407ea6;
        }
        if (iVar19 == -0x67a4acce) goto LAB_004050bb;
        if (iVar19 == -0x66f3b526) {
          local_480 = local_678;
          local_148 = local_230;
          local_140 = local_238;
          local_168 = local_690;
          local_170 = local_3e0;
          local_178 = local_498;
          local_180 = (ulong)local_498 & 0xffffffffffffff00 | (ulong)local_661;
          local_150 = local_578;
          local_64d = local_6dd;
          local_188 = (ulong)local_6e4;
          local_160 = (ulong)local_6e3;
          local_64e = local_6dc;
          local_158 = local_690;
          iVar19 = 0x456ba924;
          goto LAB_004064e0;
        }
      }
    }
    else if (iVar19 < -0x51ded492) {
      if (iVar19 < -0x5c1c5171) {
        if (iVar19 < -0x627cc4f9) {
          if (iVar19 < -0x656ec497) {
            if (iVar19 == -0x66e17485) {
              buffer[(long)local_2e0] = '$';
              iVar19 = 0x19078f4;
              goto LAB_004064e0;
            }
            if (iVar19 == -0x662dc671) {
              bVar25 = SBORROW4(local_67c,4);
              bVar24 = (int)(local_67c + ~shell_escape_quoting_style) < 0;
              iVar19 = 0x748c4531;
              pcVar20 = (char *)0xc31a07d3;
              goto LAB_00409022;
            }
          }
          else {
            if (iVar19 != -0x656ec497) {
              if (iVar19 != -0x64538e13) {
                if (iVar19 == -0x629f5deb) {
                  bVar25 = SBORROW4(local_6d8,8);
                  bVar24 = (int)(local_6d8 - 8) < 0;
                  iVar19 = -0x7d9f3862;
                  pcVar20 = (char *)0xa4a7e4fd;
                  goto LAB_00409022;
                }
                goto joined_r0x00409006;
              }
              iVar19 = 0x37185d53;
              bVar7 = 1;
              goto LAB_004064e0;
            }
            local_644 = *local_2f8;
            iVar19 = 0x6ac25e51;
            pcVar20 = local_2e8;
            local_3f8 = local_2e8;
            local_3c0 = local_2e8;
            local_a8 = local_2f8;
            if (local_644 != 0) {
              iVar19 = 0x10d55dd6;
            }
          }
        }
        else if (iVar19 < -0x5f853537) {
          if (iVar19 == -0x627cc4f9) {
            iVar19 = -0x21c10faf;
            local_6d1 = 0x76;
            goto LAB_004039fc;
          }
          if (iVar19 == -0x611637a9) {
            local_2b8 = local_2c0 + 1;
            bVar24 = local_2b8 < local_6d0;
            iVar19 = -0x255c8248;
            pcVar20 = (char *)0xf8e1f5d9;
            goto LAB_00409271;
          }
        }
        else if (iVar19 == -0x5f853537) {
          pcVar20 = (char *)0xe272a002;
          iVar19 = -0x70414a18;
          local_520 = local_570;
          if (local_47c < 0x3a) {
            iVar19 = -0x1d8d5ffe;
          }
        }
        else {
          if (iVar19 == -0x5f037ad2) {
            bVar25 = SBORROW4(local_61c,0x2f);
            bVar24 = local_61c + -0x2f < 0;
            iVar19 = -0x51ded492;
            pcVar20 = (char *)0x8fa66383;
            goto LAB_00409022;
          }
          if (iVar19 == -0x5d3de72a) {
            bVar24 = local_5b0 < local_6d0;
            iVar19 = -0x765170ec;
            pcVar20 = (char *)0x43d0d807;
            goto LAB_00409271;
          }
        }
      }
      else {
        if (-0x5757f929 < iVar19) {
          if (-0x53f51e1e < iVar19) {
            if (iVar19 != -0x53f51e1d) {
              if (iVar19 == -0x532f39dc) {
                bVar24 = local_61c == 0x2f;
LAB_00407e1d:
                iVar19 = -0x67a4acce;
                pcVar20 = (char *)0x52157a07;
                goto LAB_00408cb0;
              }
              if (iVar19 == -0x53088084) {
                local_248 = local_488 + 1;
                bVar24 = local_248 < local_3c8;
                iVar19 = -0x1881848;
                pcVar20 = (char *)0x50d35a85;
                goto LAB_00409271;
              }
              goto joined_r0x00409006;
            }
            iVar19 = 0x37713ec0;
            goto LAB_004064e0;
          }
          if (iVar19 == -0x5757f928) {
LAB_004050bb:
            local_6de = local_6e2;
            local_628 = local_6b8;
            unaff_R12 = local_6b0;
          }
          else {
            if (iVar19 != -0x571534a0) {
              if (iVar19 == -0x569e970e) {
                bVar25 = SBORROW4(local_6d8,0x2b);
                bVar24 = (int)(local_6d8 - 0x2b) < 0;
                goto LAB_00407ea1;
              }
              goto joined_r0x00409006;
            }
            local_628 = local_2c8;
            local_6de = local_607;
            unaff_R12 = local_2b0 + 1;
          }
          iVar14 = 0x7d349bf0;
LAB_00408320:
          unaff_R13B = 0;
          unaff_R15B = 0;
          pcVar22 = local_6d0;
          local_6e0 = local_6e3;
          local_6df = local_6e1;
          local_638 = local_688;
          local_630 = local_690;
          unaff_R14B = local_6e4;
          goto joined_r0x00409068;
        }
        if (iVar19 < -0x5b581b03) {
          if (iVar19 == -0x5c1c5171) {
            iVar19 = -0x1e8714d2;
            pcVar20 = (char *)0x286a0521;
            bVar24 = local_3f0 == (char *)0x0;
            goto LAB_004090d8;
          }
          if (iVar19 == -0x5b6d1c18) {
            bVar25 = SBORROW4(local_6d8,0x5c);
            bVar24 = (int)(local_6d8 - 0x5c) < 0;
            iVar19 = -0x19cca383;
            pcVar20 = (char *)0xcc95e33;
            goto LAB_00409022;
          }
        }
        else {
          if (iVar19 == -0x5b581b03) {
            iVar19 = -0x21c10faf;
            local_6d1 = 0x61;
            goto LAB_004039fc;
          }
          if (iVar19 != -0x5a96c0e7) {
            if (iVar19 != -0x5a0e4bdc) goto joined_r0x00409006;
            buffer[(long)local_2a8] = '\\';
            iVar19 = 0x50800aa4;
            goto LAB_004064e0;
          }
          iVar19 = -0x6c15b3fb;
          local_699 = local_601;
          local_698 = local_6e3;
          local_697 = local_6e4;
          local_460 = local_6d0;
          local_440 = local_688;
          local_430 = local_690;
          local_418 = local_6b0;
          local_410 = local_6b8;
          bVar5 = 0;
        }
      }
    }
    else if (iVar19 < -0x4aa92a28) {
      if (iVar19 < -0x4e479316) {
        if (iVar19 < -0x50b28a5c) {
          if (iVar19 == -0x51ded492) {
            bVar25 = SBORROW4(local_61c,0x3c);
            bVar24 = local_61c + -0x3c < 0;
            iVar19 = -0x74474e96;
            pcVar20 = (char *)0xacd0c624;
            goto LAB_00409022;
          }
          if (iVar19 == -0x510a8e85) {
            iVar19 = -0x38868cee;
            if ((quote_these_too[local_692 >> 5] >> (local_692 & 0x1f) & 1) != 0) {
              iVar19 = -0x6c15b3fb;
            }
            pcVar20 = (char *)(ulong)local_65c;
            local_699 = local_692;
            local_698 = local_65b;
            local_697 = local_65a;
            local_460 = local_1e8;
            local_440 = local_1e0;
            local_430 = local_1d8;
            local_418 = local_1d0;
            local_410 = local_1c8;
            bVar5 = local_65c;
          }
        }
        else {
          if (iVar19 == -0x50b28a5c) {
            bVar24 = local_688 == (char *)0xffffffffffffffff;
            iVar19 = -0x136afb0b;
            pcVar20 = (char *)0xe89c5b46;
            goto LAB_00408cb0;
          }
          if (iVar19 == -0x50a8d95d) {
            local_2e8 = local_3c0 + 1;
            local_2f8 = local_a8 + 1;
            iVar19 = -0x656ec497;
            goto LAB_004039fc;
          }
          if (iVar19 == -0x4fc2b6d8) {
            buffer[(long)local_3c0] = local_644;
            iVar19 = -0x50a8d95d;
            pcVar20 = (char *)(ulong)local_644;
            goto LAB_004039fc;
          }
        }
      }
      else if (iVar19 < -0x4cb75ec3) {
        if (iVar19 == -0x4e479316) {
          local_260 = local_4d8 + 1;
          bVar24 = local_260 < local_6d0;
          iVar19 = -0x148c0130;
          pcVar20 = (char *)0x27abe5b4;
          goto LAB_00409271;
        }
        if (iVar19 == -0x4d123782) {
          bVar25 = SBORROW4(local_6d8,0x21);
          bVar24 = (int)(local_6d8 - 0x21) < 0;
          iVar19 = -0x32340c54;
          pcVar20 = (char *)0xf0da854b;
          goto LAB_00409022;
        }
      }
      else if (iVar19 == -0x4cb75ec3) {
        local_5f4 = (byte)local_58c;
        local_1b8 = local_408;
        bVar24 = local_408 < local_3c8;
        iVar19 = 0x59430ae6;
        pcVar20 = (char *)0xe2560a7c;
LAB_00409271:
        if (bVar24) {
          iVar19 = (int)pcVar20;
        }
      }
      else {
        if (iVar19 == -0x4b7d6ff9) {
          bVar25 = SBORROW4(local_6d8,0xd);
          bVar24 = (int)(local_6d8 - 0xd) < 0;
          iVar19 = -0x40626746;
          pcVar20 = (char *)0x764623e3;
          goto LAB_00409022;
        }
        if (iVar19 == -0x4b376632) {
          iVar19 = -0x2f216176;
          pcVar20 = (char *)0xdee7706a;
          bVar24 = local_663 == 0;
          goto LAB_004090d8;
        }
      }
    }
    else if (iVar19 < -0x46dcb055) {
      if (iVar19 < -0x493debe9) {
        if (iVar19 == -0x4aa92a28) {
          local_3c8 = local_528;
          local_5f6 = local_6bd;
          local_5f5 = local_6bf;
          local_659 = local_6be;
          local_70 = local_508;
          local_68 = local_500;
          local_488 = local_4f8;
          local_60 = local_4f0;
          iVar14 = -0x4cb75ec3;
          iVar19 = 0x45b815e4;
          local_5f8 = bVar1;
          local_5f7 = bVar9;
          bVar10 = local_6be;
LAB_00407fa1:
          if ((bVar10 & 1) != 0) {
            iVar14 = iVar19;
          }
          pcVar20 = (char *)((ulong)local_488 & 0xffffffffffffff00 | (ulong)local_659);
          local_58c = SUB84(pcVar20,0);
          local_408 = local_488;
          goto joined_r0x00409068;
        }
        if (iVar19 == -0x49b67d8b) {
          bVar24 = local_60c == 0x5e;
LAB_00407e8b:
          iVar19 = -0x6d7549ed;
          pcVar20 = (char *)0x9542ad5a;
          goto LAB_00408cb0;
        }
      }
      else if (iVar19 == -0x493debe9) {
        bVar24 = local_678 == c_quoting_style;
        iVar19 = -0x5757f928;
        pcVar20 = (char *)0x5ad7cf7f;
LAB_00408cb0:
        if (bVar24) {
          iVar19 = (int)pcVar20;
        }
      }
      else {
        if (iVar19 == -0x48821763) {
          iVar19 = 0x38343e51;
          if (local_690 != (char *)0x0) {
            iVar19 = -0x66f3b526;
          }
          bVar24 = local_6d0 == (char *)0x0;
          goto LAB_00405994;
        }
        if (iVar19 == -0x48258aed) {
          pcVar20 = (char *)0x7db686c8;
          iVar19 = -0x1176fd6b;
          local_6a0 = local_6e4;
          local_458 = local_6b0;
          if (local_678 == shell_always_quoting_style) {
            iVar19 = 0x7db686c8;
          }
        }
      }
    }
    else {
      if (iVar19 < -0x43b93f6b) {
        if (iVar19 == -0x46dcb055) {
          buffer[(long)local_2d0] = '0';
          iVar19 = -0x355ef7f9;
        }
        else {
          if (iVar19 == -0x458e7b24) {
            iVar14 = 0x40f2ea54;
            iVar19 = -0x71523802;
            bVar10 = local_65e;
LAB_004080c9:
            if ((bVar10 & 1) != 0) {
              iVar14 = iVar19;
            }
            pcVar20 = (char *)((ulong)local_4d8 & 0xffffffffffffff00 | (ulong)local_693);
            local_594 = SUB84(pcVar20,0);
            local_438 = local_4d8;
            goto joined_r0x00409068;
          }
          if (iVar19 != -0x43df7c42) goto joined_r0x00409006;
          iVar19 = -0x21c10faf;
          local_6d1 = 0x66;
        }
        goto LAB_004039fc;
      }
      if (iVar19 == -0x43b93f6b) {
        local_5b8 = local_18c;
        local_510 = local_4a0;
        local_518 = local_4a8;
        local_6c1 = 1;
        local_538 = (undefined *)0x1;
        local_540 = &DAT_0040e462;
        local_548 = local_3b8;
        bVar4 = local_643;
LAB_00408f70:
        iVar19 = -0x73f538f7;
        goto LAB_004039fc;
      }
      if (iVar19 == -0x43210b7c) {
        local_600 = local_69e;
        local_210 = local_448;
        bVar24 = local_448 < local_6d0;
        iVar19 = -0x1a6c1bad;
        pcVar20 = (char *)0xe067dc71;
        goto LAB_00409271;
      }
      if (iVar19 == -0x4304995c) {
        iVar19 = 0x56147fa9;
        if (local_554 == 0) {
          iVar19 = 0x66ebc4cd;
        }
        local_338 = local_490;
        local_378 = local_f0;
        local_55c = (uint)CONCAT71(0x66ebc4,local_63f);
        local_450 = local_490;
        pcVar20 = (char *)((ulong)local_490 & 0xffffffffffffff00 | (ulong)local_6e1);
        local_5a0 = local_554;
        bVar2 = 0;
LAB_00406689:
        bVar3 = 0;
        local_69c = local_6e1;
        local_69b = local_6e4;
        local_69a = local_6e2;
        local_470 = local_6b0;
        local_428 = local_6b8;
      }
    }
  }
  else if (iVar19 < -0x21bf5dde) {
    if (iVar19 < -0x32340c54) {
      if (iVar19 < -0x3bca10bb) {
        if (iVar19 < -0x3f622954) {
          if (iVar19 < -0x40626746) {
            if (iVar19 == -0x40c72ae0) {
              iVar19 = 0x7d349bf0;
              if (local_678 == shell_always_quoting_style) {
                iVar19 = 0x67d468af;
              }
              unaff_R13B = 1;
              unaff_R15B = 0;
              local_6e0 = 1;
              pcVar20 = (char *)(ulong)local_6e2;
              unaff_R14B = local_6e4;
              local_6df = local_6e1;
              local_6de = local_6e2;
              pcVar22 = local_6d0;
              unaff_R12 = local_6b0;
              local_638 = local_688;
              local_630 = local_690;
              local_628 = local_6b8;
            }
            else if (iVar19 == -0x40a4934e) {
              local_510 = local_4a0;
              local_518 = local_4a8;
              local_6c1 = local_603;
              local_5b8 = shell_always_quoting_style;
              local_538 = (undefined *)0x1;
              local_540 = &DAT_0040e466;
              local_548 = local_3b0;
              bVar4 = local_642;
              goto LAB_00408f70;
            }
          }
          else {
            if (iVar19 == -0x40626746) {
              bVar25 = SBORROW4(local_6d8,0x24);
              bVar24 = (int)(local_6d8 - 0x24) < 0;
              iVar19 = -0x33407068;
              pcVar20 = (char *)0xb2edc87e;
              goto LAB_00409022;
            }
            if (iVar19 == -0x404ac213) {
              *buffer = '\'';
              iVar19 = -0x7dc7eaf2;
              goto LAB_004039fc;
            }
            if (iVar19 != -0x4016c04a) goto joined_r0x00409006;
            bVar25 = SBORROW4(local_6d8,0x7b);
            bVar24 = (int)(local_6d8 - 0x7b) < 0;
            iVar19 = -0x3cc00386;
            pcVar20 = (char *)0xc5291d91;
LAB_00409022:
            if (bVar25 != bVar24) {
              iVar19 = (int)pcVar20;
            }
          }
        }
        else {
          if (-0x3ce5f82e < iVar19) {
            if (iVar19 == -0x3ce5f82d) {
              bVar25 = SBORROW4(local_67c,2);
              bVar24 = (int)(local_67c + ~shell_quoting_style) < 0;
              iVar19 = -0x3bca10bb;
              pcVar20 = (char *)0x463c7a41;
            }
            else {
              if (iVar19 != -0x3cc00386) {
                if (iVar19 != -0x3be01e59) goto joined_r0x00409006;
                iVar19 = -0x71ba6f6c;
                goto LAB_004039fc;
              }
              bVar25 = SBORROW4(local_6d8,0x7d);
              bVar24 = (int)(local_6d8 - 0x7d) < 0;
              iVar19 = 0x55e7cf76;
              pcVar20 = (char *)0x58deffab;
            }
            goto LAB_00409022;
          }
          if (iVar19 == -0x3f622954) {
            iVar19 = 0x2ff7a0b1;
            local_560 = 0;
            goto LAB_004064e0;
          }
          if (iVar19 == -0x3e4ef1dd) {
            iVar19 = -0x4304995c;
            local_554 = local_584;
            pcVar20 = (char *)(ulong)local_584;
            goto LAB_004039fc;
          }
        }
      }
      else if (iVar19 < -0x370d8a5c) {
        if (iVar19 < -0x3ac76b2f) {
          if (iVar19 == -0x3bca10bb) {
            pcVar20 = (char *)0x6ea4bf53;
            iVar19 = 0x5921050f;
            local_6a4 = local_695;
            local_6a1 = local_6b9;
            if ((int)local_67c < 3) {
              iVar19 = 0x6ea4bf53;
            }
          }
          else if (iVar19 == -0x3ad6e26f) {
            bVar25 = SBORROW4(local_6d8,0x60);
            bVar24 = (int)(local_6d8 - 0x60) < 0;
            iVar19 = -0x7bc50e3f;
            pcVar20 = (char *)0x1d140590;
            goto LAB_00409022;
          }
        }
        else {
          if (iVar19 == -0x3ac76b2f) {
            buffer[(long)local_288] = '$';
            iVar19 = 0x495d2c34;
            goto LAB_004064e0;
          }
          if (iVar19 == -0x38868cee) {
            iVar14 = -0x4aa92a28;
            if ((local_5fc & 1) != 0) {
              iVar14 = -0x6c15b3fb;
            }
            pcVar20 = (char *)((ulong)local_1d0 & 0xffffffffffffff00 | (ulong)local_692);
            local_6bf = local_65b;
            local_6be = local_65a;
            local_6bd = local_692;
            local_699 = local_692;
            local_698 = local_65b;
            local_697 = local_65a;
            local_528 = local_1e8;
            local_508 = local_1e0;
            local_500 = local_1d8;
            local_4f8 = local_1d0;
            local_4f0 = local_1c8;
            local_460 = local_1e8;
            local_440 = local_1e0;
            local_430 = local_1d8;
            local_418 = local_1d0;
            local_410 = local_1c8;
            bVar9 = local_5fd;
            bVar1 = local_65c;
            bVar5 = local_65c;
            goto joined_r0x00409068;
          }
          if (iVar19 == -0x38457f5e) {
            bVar24 = local_584 == 0;
            iVar19 = -0x3e4ef1dd;
            pcVar20 = (char *)0x38beb86e;
            goto LAB_00408cb0;
          }
        }
      }
      else if (iVar19 < -0x33407068) {
        if (iVar19 == -0x370d8a5c) {
          iVar19 = -0x7fe081d7;
          local_558 = 0;
          goto LAB_004039fc;
        }
        if (iVar19 == -0x355ef7f9) {
          local_520 = local_2d0 + 1;
          iVar19 = -0x70414a18;
          goto LAB_004039fc;
        }
        if (iVar19 == -0x351598a6) {
          bVar25 = SBORROW4(local_61c,0x27);
          bVar24 = local_61c + -0x27 < 0;
          iVar19 = 0x618b0c4c;
          pcVar20 = (char *)0x320d6956;
          goto LAB_00409022;
        }
      }
      else {
        if (iVar19 == -0x33407068) {
          bVar25 = SBORROW4(local_6d8,0x26);
          bVar24 = (int)(local_6d8 - 0x26) < 0;
          iVar19 = 0x4e4dc84f;
          pcVar20 = (char *)0x97f186f9;
          goto LAB_00409022;
        }
        if (iVar19 == -0x333c8808) {
          iVar14 = memcmp(local_6b8 + (long)arg,local_3e0,(size_t)local_498);
          pcVar20 = (char *)0x8b3fad00;
          iVar19 = -0xd050028;
          if (iVar14 == 0) {
            iVar19 = -0x74c05300;
          }
LAB_00408000:
          bVar8 = 0;
          local_4c0 = local_3d8;
        }
        else if (iVar19 == -0x3267e844) {
          iVar14 = 0x231211a0;
          if (local_678 == shell_always_quoting_style) {
            iVar14 = -0x77515cb7;
          }
LAB_00404783:
          pcVar20 = (char *)(ulong)local_691;
          local_696 = local_691;
          local_400 = local_4c8;
          goto joined_r0x00409068;
        }
      }
    }
    else if (iVar19 < -0x2bfdd721) {
      if (iVar19 < -0x2f216176) {
        if (iVar19 < -0x31926a8b) {
          if (iVar19 == -0x32340c54) {
            bVar25 = SBORROW4(local_6d8,0x23);
            bVar24 = (int)(local_6d8 - 0x23) < 0;
            iVar14 = -0xc2f9a0a;
LAB_00407ea6:
            pcVar20 = (char *)0x37185d53;
LAB_00407eab:
            if (bVar25 != bVar24) {
              iVar14 = (int)pcVar20;
            }
            bVar7 = 0;
            goto joined_r0x00409068;
          }
          if (iVar19 == -0x319e4117) {
            bVar24 = local_67c == literal_quoting_style;
            iVar19 = 0x6fee4918;
            pcVar20 = (char *)0x50c6fda1;
            goto LAB_00408cb0;
          }
        }
        else if (iVar19 == -0x31926a8b) {
          unaff_R13B = 0;
          unaff_R15B = 0;
          iVar19 = iVar11;
          unaff_R14B = local_6e4;
          local_6e0 = local_6e3;
          local_6df = local_6e1;
          local_6de = local_6e2;
          pcVar22 = local_6d0;
          unaff_R12 = local_6b0;
          local_638 = local_688;
          local_630 = local_690;
          local_628 = local_6b8;
        }
        else if (iVar19 == -0x2fd2c068) {
          local_6bc = local_661 & 1;
          local_649 = local_678 != shell_always_quoting_style;
          local_648 = local_649 & local_6bc;
          local_647 = local_498 != (undefined *)0x0;
          iVar19 = -0xd050028;
          if ((bool)local_647) {
            iVar19 = -0x1c7c5d0;
          }
          if (local_648 == 0) {
            iVar19 = -0xd050028;
          }
          bVar8 = 0;
          pcVar20 = (char *)0xf2faffd8;
          local_4c0 = local_578;
        }
        else if (iVar19 == -0x2f87cbb7) {
          local_400 = local_250 + 1;
          iVar19 = 0x231211a0;
          local_696 = 1;
          goto LAB_004064e0;
        }
      }
      else if (iVar19 < -0x2dfc66ea) {
        if (iVar19 == -0x2f216176) {
          iVar19 = 0x553e218a;
          pcVar20 = (char *)0x6648d30a;
          bVar24 = (local_6dd & 1) == 0;
        }
        else {
          if (iVar19 != -0x2e6800fd) goto joined_r0x00409006;
          local_645 = local_678 == shell_always_quoting_style;
          iVar19 = 0xe85f377;
          if ((bool)local_645) {
            iVar19 = 0x43dba6fe;
          }
          pcVar20 = (char *)0xe85f377;
          bVar24 = local_6b0 == (char *)0x0;
        }
LAB_004090d8:
        if (!bVar24) {
          iVar19 = (int)pcVar20;
        }
      }
      else if (iVar19 == -0x2dfc66ea) {
        iVar19 = 0x6ea4bf53;
        local_6a4 = 1;
        local_6a1 = local_662;
      }
      else {
        if (iVar19 == -0x2dae8851) {
          local_310 = local_208 + 1;
          local_668 = arg[(long)local_268];
          local_320 = local_268;
          local_66b = local_5ff;
          local_66e = local_63e;
          iVar19 = 0x6b6f9d2c;
          pcVar20 = (char *)((ulong)arg & 0xffffffffffffff00 | (ulong)local_65e);
          local_564 = SUB84(pcVar20,0);
          goto LAB_004064e0;
        }
        if (iVar19 == -0x2cde8f41) {
          local_2d0 = local_570 + 1;
          bVar24 = local_2d0 < local_6d0;
          iVar19 = -0x355ef7f9;
          pcVar20 = (char *)0xb9234fab;
          goto LAB_00409271;
        }
      }
    }
    else if (iVar19 < -0x2595bce3) {
      if (iVar19 < -0x297a5b83) {
        if (iVar19 == -0x2bfdd721) {
          local_458 = local_2d8 + 1;
          iVar19 = -0x1176fd6b;
          local_6a0 = 1;
          goto LAB_004039fc;
        }
        if (iVar19 == -0x2a0a4a98) {
          bVar24 = (local_6dd & 1) == 0;
          iVar19 = -0x1d94e2fb;
LAB_00405994:
          pcVar20 = (char *)0x38343e51;
          goto LAB_004090d8;
        }
      }
      else {
        if (iVar19 == -0x297a5b83) {
          bVar24 = local_6b0 < local_6d0;
          iVar19 = -0x923317b;
          pcVar20 = (char *)0xf7046cd6;
          goto LAB_00409271;
        }
        pcVar21 = local_220;
        if (iVar19 == -0x271c580c) goto LAB_0040845c;
        if (iVar19 == -0x260ac87d) {
          bVar23 = local_6b8 == local_578;
          pcVar20 = local_6b8;
LAB_00404f6a:
          iVar19 = 0x438d2fcb;
          goto LAB_004064e0;
        }
      }
    }
    else if (iVar19 < -0x231f69c3) {
      if (iVar19 == -0x2595bce3) {
        buffer[(long)local_258] = '$';
        iVar19 = 0x25bd8294;
        goto LAB_004064e0;
      }
      if (iVar19 == -0x255c8248) {
        local_2b0 = local_2b8 + 1;
        bVar24 = local_2b0 < local_6d0;
        iVar19 = -0x571534a0;
        pcVar20 = (char *)0x3569c5c8;
        goto LAB_00409271;
      }
      if (iVar19 == -0x23d33ced) {
        local_5d0 = local_1f0;
        local_5d8 = local_1f8;
        local_5e0 = local_690;
        local_5e8 = local_200;
        local_6d9 = local_65d;
        local_6da = local_6e3;
        local_6db = local_6dc;
        local_658 = local_580;
        goto LAB_004039de;
      }
    }
    else {
      if (iVar19 == -0x231f69c3) {
        iVar19 = -0x48258aed;
        pcVar20 = (char *)0x64cb348b;
        bVar24 = (local_6dd & 1) == 0;
        goto LAB_004090d8;
      }
      if (iVar19 == -0x21f2bf10) goto LAB_00407b49;
      if (iVar19 == -0x21c10faf) {
        local_601 = local_6d1;
        bVar24 = local_6bc == 0;
        iVar14 = 0x7d349bf0;
        pcVar20 = (char *)0xa5693f19;
        goto LAB_004082d4;
      }
    }
  }
  else if (iVar19 < -0x1176fd6b) {
    if (iVar19 < -0x1d94e2fb) {
      if (iVar19 < -0x1e8714d2) {
        if (iVar19 < -0x21188f96) {
          if (iVar19 == -0x21bf5dde) {
            iVar19 = 0x44574ab3;
            local_588 = shell_escape_always_quoting_style;
            goto LAB_004064e0;
          }
          if (iVar19 == -0x2124c508) {
            iVar19 = -0x4304995c;
            local_554 = 0;
            goto LAB_004039fc;
          }
        }
        else if (iVar19 == -0x21188f96) {
          iVar19 = -0x9ef7c34;
          pcVar20 = local_5b0;
          local_6a2 = local_65f;
          local_69f = local_6ba;
          local_69d = local_6bb;
          local_420 = local_5b0;
          bVar6 = local_694;
          if ((local_694 & 1) != 0) {
            iVar19 = 0x22009641;
          }
        }
        else {
          if (iVar19 == -0x1f98238f) {
            buffer[(long)local_210] = '\\';
            iVar19 = -0x1a6c1bad;
            goto LAB_004039fc;
          }
          if (iVar19 == -0x1f45cbdb) {
            local_660 = local_6a3;
            local_4e0 = local_478;
            local_490 = local_468;
            local_120 = &local_190;
            local_290 = local_6b8 + (long)local_478;
            local_4b0 = (undefined *)
                        rpl_mbrtowc(local_120,local_290 + (long)arg,
                                    (long)local_468 - (long)local_290,&local_138);
            bVar24 = local_4b0 == (undefined *)0x0;
            iVar19 = -0x128cc876;
            pcVar20 = (char *)0xffc3a069;
            goto LAB_00408cb0;
          }
        }
      }
      else if (iVar19 < -0x1e05ec79) {
        if (iVar19 == -0x1e8714d2) {
          local_3b8 = (char *)0x1;
          iVar14 = -0x43b93f6b;
          goto joined_r0x00409068;
        }
        if (iVar19 == -0x1e1bf747) {
          bVar23 = arg[(long)local_6b8] == '\0';
          pcVar20 = arg;
          goto LAB_00404f6a;
        }
      }
      else if (iVar19 == -0x1e05ec79) {
LAB_00407b49:
        local_6da = local_6e3;
        local_5e8 = pcVar16;
        local_5e0 = local_690;
        local_5d8 = local_6b0;
        local_5d0 = local_6b8;
LAB_00407b6e:
        local_658 = 0x10;
        local_6db = local_6dc;
        local_6d9 = local_6e4;
        local_6b8 = local_5d0;
        local_6b0 = local_5d8;
LAB_004039de:
        iVar19 = -0xbb19703;
        local_6dc = local_6db;
        local_690 = local_5e0;
        local_5f0 = local_6d0;
      }
      else if (iVar19 == -0x1ddb4d1f) {
        local_47c = (int)arg[(long)local_130];
        pcVar20 = (char *)0xa07acac9;
        iVar19 = -0x70414a18;
        local_520 = local_570;
        if (0x2f < local_47c) {
          iVar19 = -0x5f853537;
        }
      }
      else if (iVar19 == -0x1da9f584) {
        buffer[(long)local_1b8] = local_5f6;
        iVar19 = 0x59430ae6;
        pcVar20 = (char *)(ulong)local_5f6;
        goto LAB_004064e0;
      }
    }
    else if (iVar19 < -0x1763a4ba) {
      if (iVar19 < -0x1a6c1bad) {
        if (iVar19 == -0x1d94e2fb) {
          iVar19 = 0x38343e51;
          pcVar20 = (char *)0x2fcf2033;
          bVar24 = (local_6e3 & 1) == 0;
          goto LAB_004090d8;
        }
        if (iVar19 == -0x1d8d5ffe) {
          bVar24 = local_570 < local_6d0;
          iVar19 = -0x2cde8f41;
          pcVar20 = (char *)0x8c5e75ed;
          goto LAB_00409271;
        }
      }
      else {
        if (iVar19 == -0x1a6c1bad) {
          local_278 = local_210 + 1;
          bVar24 = local_278 < local_6d0;
          iVar19 = -0x6ce6178f;
          pcVar20 = (char *)0x6feec056;
          goto LAB_00409271;
        }
        if (iVar19 == -0x19cca383) {
          bVar25 = SBORROW4(local_6d8,0x5d);
          bVar24 = (int)(local_6d8 - 0x5d) < 0;
          iVar19 = 0x19bb047c;
          pcVar20 = (char *)0xfda924ae;
          goto LAB_00409022;
        }
        if (iVar19 == -0x19a050c8) {
          bVar24 = local_6d8 == 0;
          iVar19 = -0x53f51e1d;
          pcVar20 = (char *)0x647d5048;
          goto LAB_00408cb0;
        }
      }
    }
    else if (iVar19 < -0x136afb0b) {
      if (iVar19 == -0x1763a4ba) {
        iVar14 = -0x64538e13;
        if (local_6b8 != (char *)0x0) {
          iVar14 = 0x7d349bf0;
        }
        pcVar20 = arg;
        if (arg[1] != '\0') {
          iVar14 = 0x7d349bf0;
        }
LAB_004082d7:
        pcVar20 = (char *)((ulong)pcVar20 & 0xffffffffffffff00 | (ulong)local_6e2);
        local_6de = local_6e2;
        local_628 = local_6b8;
        unaff_R12 = local_6b0;
        goto LAB_00408320;
      }
      if (iVar19 == -0x16255c61) {
        local_128 = (byte *)(local_2c8 + (long)arg);
        local_61c = (int)(char)*local_128;
        iVar19 = 0xd6bff2a;
        goto LAB_004064e0;
      }
      if (iVar19 == -0x148c0130) {
        local_438 = local_260 + 1;
        iVar19 = -0x71523802;
        local_594 = 0;
        goto LAB_004039fc;
      }
    }
    else {
      if (iVar19 == -0x136afb0b) {
        iVar14 = -0x64538e13;
        if (local_6b8 != (char *)0x0) {
          iVar14 = 0x7d349bf0;
        }
        pcVar20 = local_688;
        if (local_688 != (char *)0x1) {
          iVar14 = 0x7d349bf0;
        }
        goto LAB_004082d7;
      }
      if (iVar19 == -0x128cc876) {
        bVar24 = local_4b0 == (undefined *)0xffffffffffffffff;
        iVar19 = 0x16eaf33d;
        pcVar20 = (char *)0x66f9435c;
        goto LAB_00408cb0;
      }
      if (iVar19 == -0x120b4c06) {
        iVar19 = 0x4203c159;
        if ((local_6dd & 1) != 0) {
          iVar19 = -0x4aa92a28;
        }
        if (local_647 == '\0') {
          iVar19 = 0x4203c159;
        }
        local_6c0 = local_6e2;
        goto LAB_004058a6;
      }
    }
  }
  else if (iVar19 < -0x923317b) {
    if (iVar19 < -0xc2f9a0a) {
      if (iVar19 < -0xf257ab5) {
        if (iVar19 == -0x1176fd6b) {
          local_602 = local_6a0;
          local_228 = local_458;
          bVar24 = local_458 < local_6d0;
          iVar19 = 0x416143d;
          pcVar20 = (char *)0x6756050d;
          goto LAB_00409271;
        }
        if (iVar19 == -0xfeac020) {
          buffer[(long)local_2d8] = '\'';
          iVar19 = -0x2bfdd721;
          goto LAB_004039fc;
        }
      }
      else {
        if (iVar19 == -0xf257ab5) {
          bVar25 = SBORROW4(local_6d8,0x20);
          bVar24 = (int)(local_6d8 - 0x20) < 0;
          iVar19 = -0x64538e13;
          pcVar20 = (char *)0xc9856f5;
          goto LAB_00409022;
        }
        if (iVar19 == -0xd050028) {
          local_688 = local_4c0;
          local_6e2 = arg[(long)local_6b8];
          local_6d8 = (uint)local_6e2;
          iVar19 = -0x7d5a5a36;
          pcVar20 = arg;
          local_6e1 = bVar8;
          goto LAB_004039fc;
        }
        pcVar16 = local_1b0;
        if (iVar19 == -0xc64753d) goto LAB_004085e0;
      }
    }
    else if (iVar19 < -0xbb19703) {
      if (iVar19 == -0xc2f9a0a) {
        bVar24 = local_6b8 == (char *)0x0;
        iVar14 = -0x64538e13;
        pcVar20 = (char *)0x7d349bf0;
LAB_004082d4:
        if (!bVar24) {
          iVar14 = (int)pcVar20;
        }
        goto LAB_004082d7;
      }
      if (iVar19 == -0xc2434c5) {
        pcVar20 = (char *)0x8e801480;
        iVar19 = 0x5c1ac00a;
        if ((local_6b9 & 1) != 0) {
          iVar19 = -0x717feb80;
        }
        local_3a8 = (char *)0x0;
        local_240 = local_368;
        local_100 = local_358;
      }
    }
    else {
      if (iVar19 == -0xbb19703) {
        local_b8 = local_5f0;
        local_57c = local_658;
        local_5f3 = local_6db;
        local_5f2 = local_6da;
        local_5f1 = local_6d9;
        local_b0 = local_5e8;
        local_58 = local_5e0;
        local_50 = local_5d8;
        local_48 = local_5d0;
        iVar19 = 0x3df5fdbd;
        goto LAB_004064e0;
      }
      if (iVar19 == -0xb66c1b8) {
        local_607 = *local_128;
        bVar24 = local_6b0 < local_6d0;
        iVar19 = 0x2fc52b78;
        pcVar20 = (char *)0x12c43c6c;
        goto LAB_00409271;
      }
      if (iVar19 == -0x9ef7c34) {
        local_268 = local_d8 + 1;
        pcVar20 = (char *)0x10561490;
        iVar14 = -0xd84768;
        local_693 = local_69f;
        local_65e = local_6a2;
        local_63e = bVar6;
        local_63d = local_69d;
        local_4d8 = local_420;
        if (local_98 <= local_268) {
          iVar14 = 0x10561490;
        }
        goto joined_r0x00409068;
      }
    }
  }
  else if (iVar19 < -0x4b0b59e) {
    if (iVar19 < -0x87acf8e) {
      if (iVar19 == -0x923317b) {
        local_2e0 = local_6b0 + 1;
        bVar24 = local_2e0 < local_6d0;
        iVar19 = 0x19078f4;
        pcVar20 = (char *)0x991e8b7b;
        goto LAB_00409271;
      }
      if (iVar19 == -0x8fb932a) {
        buffer[(long)local_6b0] = '\'';
        iVar19 = -0x923317b;
        goto LAB_004039fc;
      }
    }
    else {
      if (iVar19 == -0x87acf8e) {
        iVar19 = 0x120112a5;
        local_370 = (undefined *)0x1;
        goto LAB_004064e0;
      }
      if (iVar19 == -0x7a784de) {
        local_390 = local_48 + 1;
        local_398 = local_50;
        local_340 = local_58;
        local_348 = local_b0;
        local_66f = local_5f1;
        local_670 = local_5f2;
        local_671 = local_5f3;
        iVar19 = 0x12ed529f;
        local_360 = local_b8;
        goto LAB_004064e0;
      }
      if (iVar19 == -0x71e0a27) {
        buffer[(long)local_2b8] = '\"';
        iVar19 = -0x255c8248;
        goto LAB_004039fc;
      }
    }
  }
  else if (iVar19 < -0x3e4fc40) {
    if (iVar19 == -0x4b0b59e) {
      bVar25 = SBORROW4(local_60c,0x7c);
      bVar24 = local_60c + -0x7c < 0;
      iVar19 = 0x23592045;
      pcVar20 = (char *)0x5caf72f0;
      goto LAB_00409022;
    }
    if (iVar19 == -0x41e7057) {
      buffer[(long)local_4c8] = '\'';
      iVar19 = 0x63ecbc5f;
      goto LAB_004064e0;
    }
    if (iVar19 == -0x3e541ad) {
      bVar24 = local_584 == 0x34;
      iVar19 = -0x3e4ef1dd;
      pcVar20 = (char *)0xdedb3af8;
      goto LAB_00408cb0;
    }
  }
  else if (iVar19 == -0x3e4fc40) {
    iVar19 = 0x1c8c675a;
    pcVar20 = local_b8;
    local_300 = local_b8;
    local_2f0 = local_b0;
    if (local_57c == 0x10) {
      iVar19 = 0x71c9d2e8;
    }
  }
  else {
    if (iVar19 == -0x359d0cb) {
      bVar25 = SBORROW4(local_60c,0x60);
      bVar24 = local_60c + -0x60 < 0;
      iVar19 = -0x4b0b59e;
      pcVar20 = (char *)0x75964b5e;
      goto LAB_00409022;
    }
    if (iVar19 == -0x256db52) {
      bVar24 = local_678 == shell_always_quoting_style;
      iVar19 = 0x47e19a1c;
      pcVar20 = (char *)0x938bf143;
      goto LAB_00408cb0;
    }
  }
joined_r0x00409006:
  iVar14 = iVar19;
joined_r0x00409068:
  iVar19 = iVar14;
  if (-0x1c7c5d1 < iVar19) goto LAB_004064e0;
  goto LAB_004039fc;
}


char * quotearg_alloc(char *arg,size_t argsize,quoting_options *o)

{
  char *pcVar1;
  
  pcVar1 = quotearg_alloc_mem(arg,argsize,(size_t *)0x0,o);
  return pcVar1;
}


char * quotearg_alloc_mem(char *arg,size_t argsize,size_t *size,quoting_options *o)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  char *buffer;
  int iVar4;
  wchar_t flags;
  quoting_options *pqVar5;
  
  pqVar5 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar5 = o;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  flags = size != (size_t *)0x0 ^ 1 | pqVar5->flags;
  sVar3 = quotearg_buffer_restyled
                    ((char *)0x0,0,arg,argsize,pqVar5->style,flags,pqVar5->quote_these_too,
                     pqVar5->left_quote,pqVar5->right_quote);
  buffer = (char *)xmalloc(sVar3 + 1);
  quotearg_buffer_restyled
            (buffer,sVar3 + 1,arg,argsize,pqVar5->style,flags,pqVar5->quote_these_too,
             pqVar5->left_quote,pqVar5->right_quote);
  iVar4 = -0x156b42e;
  while (iVar4 == -0x156b42e) {
    *piVar2 = iVar1;
    iVar4 = 0x1323d875;
    if (size != (size_t *)0x0) {
      iVar4 = -0x25b5b7e4;
    }
    if (iVar4 == -0x25b5b7e4) {
      *size = sVar3;
      iVar4 = 0x1323d875;
    }
  }
  if (iVar4 != 0x1323d875) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return buffer;
}


/* WARNING: Removing unreachable block (ram,0x0040947e) */
/* WARNING: Removing unreachable block (ram,0x00409573) */

void quotearg_free(void)

{
  slotvec *__ptr;
  uint uVar1;
  wchar_t wVar2;
  wchar_t local_44;
  char *local_38;
  
  __ptr = slotvec;
  wVar2 = L'\x01';
  while( true ) {
    uVar1 = 0x1ec0206a;
    while( true ) {
      while ((int)uVar1 < 0x6984bc38) {
        if (uVar1 == 0x1ec0206a) {
          uVar1 = 0xbe0f5ec0;
          local_44 = wVar2;
          if (wVar2 < nslots) {
            uVar1 = 0x6d981074;
          }
        }
        else {
          if (uVar1 != 0x4944ba0d) goto LAB_004095e0;
          uVar1 = 0x829d288a;
          if (__ptr != &slotvec0) {
            uVar1 = 0xea40a6b8;
          }
        }
        if ((int)uVar1 < 0x1ec0206a) {
          do {
            while (uVar1 != 0xbe0f5ec0) {
              if (uVar1 != 0xea40a6b8) {
                if (uVar1 == 0x829d288a) {
                  nslots = L'\x01';
                  return;
                }
                goto LAB_004095e0;
              }
              free(__ptr);
              slotvec = &slotvec0;
              uVar1 = 0x829d288a;
            }
            local_38 = __ptr->val;
            uVar1 = 0x4944ba0d;
            if (local_38 != slot0) {
              uVar1 = 0x6984bc38;
            }
          } while (uVar1 < 0x1ec0206a);
        }
      }
      if (uVar1 != 0x6984bc38) break;
      free(local_38);
      slotvec0.size = 0x100;
      slotvec0.val = slot0;
      uVar1 = 0x4944ba0d;
    }
    if (uVar1 != 0x6d981074) break;
    free(__ptr[local_44].val);
    wVar2 = local_44 + L'\x01';
  }
LAB_004095e0:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


char * quotearg_n(wchar_t n,char *arg)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_options(n,arg,0xffffffffffffffff,&default_quoting_options);
  return pcVar1;
}


/* WARNING: Removing unreachable block (ram,0x004096bd) */

char * quotearg_n_options(wchar_t n,char *arg,size_t argsize,quoting_options *options)

{
  uint *quote_these_too;
  char **ppcVar1;
  char **ppcVar2;
  int iVar3;
  size_t buffersize;
  slotvec *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  slotvec *unaff_RBP;
  slotvec *p;
  char *unaff_R15;
  bool bVar9;
  char local_e1;
  wchar_t local_e0;
  wchar_t local_dc;
  char *local_d8;
  slotvec *local_c8;
  size_t local_c0;
  slotvec *local_90;
  slotvec *local_88;
  char **local_80;
  quoting_options *local_78;
  uint *local_70;
  char **local_68;
  char **local_60;
  size_t local_58;
  
  piVar8 = __errno_location();
  psVar4 = slotvec;
  iVar3 = *piVar8;
  iVar5 = -0x1ac32ac9;
  if (n == L'\x7fffffff') {
    iVar5 = -0x2d2a55c6;
  }
  quote_these_too = options->quote_these_too;
  ppcVar1 = &options->left_quote;
  ppcVar2 = &options->right_quote;
  iVar6 = 0x579d5ed3;
  do {
    if (iVar6 < 0x4f562141) {
      if (iVar6 == -0x30f762b) {
        *piVar8 = iVar3;
        return unaff_R15;
      }
      if (iVar6 != 0xb20b0f2) {
        if (iVar6 != 0x318e9fd6) goto joined_r0x00409779;
        iVar6 = -0x185918de;
        unaff_RBP = psVar4;
        if (n < nslots) goto joined_r0x00409779;
        iVar6 = 0xb20b0f2;
        goto joined_r0x00409779;
      }
      local_e1 = psVar4 == &slotvec0;
      iVar7 = iVar5;
      goto joined_r0x004097c4;
    }
    if (iVar6 != 0x4f562141) {
      if (iVar6 == 0x61360f2b) {
        local_c0 = local_58 + 1;
        local_88->size = local_c0;
        bVar9 = local_d8 == slot0;
        iVar7 = -0xcd247f1;
        iVar6 = 0x4f562141;
        goto LAB_0040981c;
      }
      iVar7 = (n >> 0x1f & 0x948acadbU) + 0x318e9fd6;
      if (iVar6 != 0x579d5ed3) goto joined_r0x00409779;
      goto joined_r0x004097c4;
    }
    free(local_d8);
    iVar6 = -0xcd247f1;
LAB_00409830:
    do {
      if (iVar6 < -0x1ac32ac9) {
        if (iVar6 < -0x2d2a55c6) {
          if (iVar6 == -0x62999775) {
            *local_90 = slotvec0;
            iVar6 = -0x230857d0;
            goto LAB_00409830;
          }
          if (iVar6 == -0x39e6954f) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        else {
          if (iVar6 == -0x230857d0) {
            memset(local_c8 + nslots,0,((long)local_e0 - (long)nslots) * 0x10);
            nslots = local_e0;
            iVar6 = -0x185918de;
            unaff_RBP = local_c8;
            goto LAB_00409830;
          }
          if (iVar6 == -0x2d2a55c6) {
                    /* WARNING: Subroutine does not return */
            xalloc_die();
          }
        }
joined_r0x00409779:
        if (-0x30f762c < iVar6) break;
        goto LAB_00409830;
      }
      if (iVar6 == -0x1ac32ac9) {
        p = (struct slotvec *)0x0;
        if (local_e1 == '\0') {
          p = psVar4;
        }
        slotvec = (struct slotvec *)xrealloc(p,(long)(n + L'\x01') << 4);
        bVar9 = local_e1 == '\0';
        iVar7 = -0x230857d0;
        iVar6 = -0x62999775;
        local_e0 = n + L'\x01';
        local_c8 = slotvec;
        local_90 = slotvec;
LAB_0040981c:
        if (!bVar9) {
          iVar7 = iVar6;
        }
      }
      else {
        if (iVar6 != -0x185918de) {
          if (iVar6 == -0xcd247f1) {
            unaff_R15 = (char *)xmalloc(local_c0);
            *local_80 = unaff_R15;
            quotearg_buffer_restyled
                      (unaff_R15,local_c0,arg,argsize,local_78->style,local_dc,local_70,*local_68,
                       *local_60);
            iVar6 = -0x30f762b;
          }
          goto joined_r0x00409779;
        }
        local_88 = unaff_RBP + n;
        buffersize = local_88->size;
        local_80 = &unaff_RBP[n].val;
        unaff_R15 = *local_80;
        local_dc = options->flags | 1;
        local_58 = quotearg_buffer_restyled
                             (unaff_R15,buffersize,arg,argsize,options->style,local_dc,
                              quote_these_too,*ppcVar1,*ppcVar2);
        iVar7 = -0x30f762b;
        local_d8 = unaff_R15;
        local_78 = options;
        local_70 = quote_these_too;
        local_68 = ppcVar1;
        local_60 = ppcVar2;
        if (buffersize <= local_58) {
          iVar7 = 0x61360f2b;
        }
      }
joined_r0x004097c4:
      iVar6 = iVar7;
    } while (iVar6 < -0x30f762b);
  } while( true );
}


char * quotearg_n_mem(wchar_t n,char *arg,size_t argsize)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_options(n,arg,argsize,&default_quoting_options);
  return pcVar1;
}


char * quotearg(char *arg)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,&default_quoting_options);
  return pcVar1;
}


char * quotearg_mem(char *arg,size_t argsize)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_options(L'\0',arg,argsize,&default_quoting_options);
  return pcVar1;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffcc : 0x00409b41 */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

char * quotearg_n_style(wchar_t n,enum quoting_style s,char *arg)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined local_70 [44];
  undefined uStack_44;
  undefined uStack_40;
  undefined local_3c;
  undefined local_34 [8];
  uint uStack_2c;
  uint uStack_28;
  undefined auStack_24 [8];
  uint uStack_1c;
  uint uStack_18;
  undefined auStack_14 [8];
  undefined uStack_c;
  undefined uStack_8;
  undefined uStack_4;
  
  uStack_4 = 0;
  iVar2 = 0x16bfb60a;
  if (s == custom_quoting_style) {
    iVar2 = -0x644fc8;
  }
  iVar1 = 0x4985f7e8;
  do {
    iVar4 = iVar1;
    if (iVar4 == 0x16bfb60a) {
      local_3c = 0;
      local_70._4_4_ = local_34._0_4_;
      local_70._8_4_ = local_34._4_4_;
      local_70._12_4_ = uStack_2c;
      local_70._16_4_ = uStack_28;
      local_70._20_4_ = auStack_24._0_4_;
      local_70._24_4_ = auStack_24._4_4_;
      local_70._28_4_ = uStack_1c;
      local_70._32_4_ = uStack_18;
      local_70._36_4_ = auStack_14._0_4_;
      local_70._40_4_ = auStack_14._4_4_;
      uStack_44 = uStack_c;
      uStack_40 = uStack_8;
      local_70._0_4_ = s;
      _local_34 = ZEXT816(0);
      _auStack_24 = ZEXT816(0);
      _auStack_14 = ZEXT816(0);
      pcVar3 = quotearg_n_options(n,arg,0xffffffffffffffff,(quoting_options *)local_70);
      return pcVar3;
    }
    iVar1 = iVar2;
  } while (iVar4 == 0x4985f7e8);
  if (iVar4 != -0x644fc8) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  _local_34 = ZEXT816(0);
  _auStack_24 = ZEXT816(0);
  _auStack_14 = ZEXT816(0);
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffcc : 0x00409bf1 */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

char * quotearg_n_style_mem(wchar_t n,enum quoting_style s,char *arg,size_t argsize)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined local_70 [44];
  undefined uStack_44;
  undefined uStack_40;
  undefined local_3c;
  undefined local_34 [8];
  uint uStack_2c;
  uint uStack_28;
  undefined auStack_24 [8];
  uint uStack_1c;
  uint uStack_18;
  undefined auStack_14 [8];
  undefined uStack_c;
  undefined uStack_8;
  undefined uStack_4;
  
  uStack_4 = 0;
  iVar2 = 0x16bfb60a;
  if (s == custom_quoting_style) {
    iVar2 = -0x644fc8;
  }
  iVar1 = 0x4985f7e8;
  do {
    iVar4 = iVar1;
    if (iVar4 == 0x16bfb60a) {
      local_3c = 0;
      local_70._4_4_ = local_34._0_4_;
      local_70._8_4_ = local_34._4_4_;
      local_70._12_4_ = uStack_2c;
      local_70._16_4_ = uStack_28;
      local_70._20_4_ = auStack_24._0_4_;
      local_70._24_4_ = auStack_24._4_4_;
      local_70._28_4_ = uStack_1c;
      local_70._32_4_ = uStack_18;
      local_70._36_4_ = auStack_14._0_4_;
      local_70._40_4_ = auStack_14._4_4_;
      uStack_44 = uStack_c;
      uStack_40 = uStack_8;
      local_70._0_4_ = s;
      _local_34 = ZEXT816(0);
      _auStack_24 = ZEXT816(0);
      _auStack_14 = ZEXT816(0);
      pcVar3 = quotearg_n_options(n,arg,argsize,(quoting_options *)local_70);
      return pcVar3;
    }
    iVar1 = iVar2;
  } while (iVar4 == 0x4985f7e8);
  if (iVar4 != -0x644fc8) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  _local_34 = ZEXT816(0);
  _auStack_24 = ZEXT816(0);
  _auStack_14 = ZEXT816(0);
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffcc : 0x00409ca1 */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

char * quotearg_style(enum quoting_style s,char *arg)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined local_70 [44];
  undefined uStack_44;
  undefined uStack_40;
  undefined local_3c;
  undefined local_34 [8];
  uint uStack_2c;
  uint uStack_28;
  undefined auStack_24 [8];
  uint uStack_1c;
  uint uStack_18;
  undefined auStack_14 [8];
  undefined uStack_c;
  undefined uStack_8;
  undefined uStack_4;
  
  uStack_4 = 0;
  iVar2 = 0x16bfb60a;
  if (s == custom_quoting_style) {
    iVar2 = -0x644fc8;
  }
  iVar1 = 0x4985f7e8;
  do {
    iVar4 = iVar1;
    if (iVar4 == 0x16bfb60a) {
      local_3c = 0;
      local_70._4_4_ = local_34._0_4_;
      local_70._8_4_ = local_34._4_4_;
      local_70._12_4_ = uStack_2c;
      local_70._16_4_ = uStack_28;
      local_70._20_4_ = auStack_24._0_4_;
      local_70._24_4_ = auStack_24._4_4_;
      local_70._28_4_ = uStack_1c;
      local_70._32_4_ = uStack_18;
      local_70._36_4_ = auStack_14._0_4_;
      local_70._40_4_ = auStack_14._4_4_;
      uStack_44 = uStack_c;
      uStack_40 = uStack_8;
      local_70._0_4_ = s;
      _local_34 = ZEXT816(0);
      _auStack_24 = ZEXT816(0);
      _auStack_14 = ZEXT816(0);
      pcVar3 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,(quoting_options *)local_70);
      return pcVar3;
    }
    iVar1 = iVar2;
  } while (iVar4 == 0x4985f7e8);
  if (iVar4 == -0x644fc8) {
    _local_34 = ZEXT816(0);
    _auStack_24 = ZEXT816(0);
    _auStack_14 = ZEXT816(0);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffcc : 0x00409d51 */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

char * quotearg_style_mem(enum quoting_style s,char *arg,size_t argsize)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined local_70 [44];
  undefined uStack_44;
  undefined uStack_40;
  undefined local_3c;
  undefined local_34 [8];
  uint uStack_2c;
  uint uStack_28;
  undefined auStack_24 [8];
  uint uStack_1c;
  uint uStack_18;
  undefined auStack_14 [8];
  undefined uStack_c;
  undefined uStack_8;
  undefined uStack_4;
  
  uStack_4 = 0;
  iVar2 = 0x16bfb60a;
  if (s == custom_quoting_style) {
    iVar2 = -0x644fc8;
  }
  iVar1 = 0x4985f7e8;
  do {
    iVar3 = iVar1;
    if (iVar3 == 0x16bfb60a) {
      local_3c = 0;
      local_70._4_4_ = local_34._0_4_;
      local_70._8_4_ = local_34._4_4_;
      local_70._12_4_ = uStack_2c;
      local_70._16_4_ = uStack_28;
      local_70._20_4_ = auStack_24._0_4_;
      local_70._24_4_ = auStack_24._4_4_;
      local_70._28_4_ = uStack_1c;
      local_70._32_4_ = uStack_18;
      local_70._36_4_ = auStack_14._0_4_;
      local_70._40_4_ = auStack_14._4_4_;
      uStack_44 = uStack_c;
      uStack_40 = uStack_8;
      local_70._0_4_ = s;
      _local_34 = ZEXT816(0);
      _auStack_24 = ZEXT816(0);
      _auStack_14 = ZEXT816(0);
      pcVar4 = quotearg_n_options(L'\0',arg,argsize,(quoting_options *)local_70);
      return pcVar4;
    }
    iVar1 = iVar2;
  } while (iVar3 == 0x4985f7e8);
  if (iVar3 != -0x644fc8) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  _local_34 = ZEXT816(0);
  _auStack_24 = ZEXT816(0);
  _auStack_14 = ZEXT816(0);
                    /* WARNING: Subroutine does not return */
  abort();
}


char * quotearg_char_mem(char *arg,size_t argsize,char ch)

{
  char *pcVar1;
  undefined local_38 [44];
  undefined uStack_c;
  char *local_8;
  
  local_8 = default_quoting_options.right_quote;
  local_38._32_4_ = default_quoting_options.quote_these_too[6];
  local_38._36_4_ = default_quoting_options.quote_these_too[7];
  local_38._40_4_ = default_quoting_options.left_quote._0_4_;
  uStack_c = default_quoting_options.left_quote._4_4_;
  local_38._16_4_ = default_quoting_options.quote_these_too[2];
  local_38._20_4_ = default_quoting_options.quote_these_too[3];
  local_38._24_4_ = default_quoting_options.quote_these_too[4];
  local_38._28_4_ = default_quoting_options.quote_these_too[5];
  local_38._0_4_ = default_quoting_options.style;
  local_38._4_4_ = default_quoting_options.flags;
  local_38._8_4_ = default_quoting_options.quote_these_too[0];
  local_38._12_4_ = default_quoting_options.quote_these_too[1];
  *(uint *)(local_38 + (ulong)((byte)ch >> 5) * 4 + 8) =
       (~(*(uint *)(local_38 + (ulong)((byte)ch >> 5) * 4 + 8) >> (ch & 0x1fU)) & 1) << (ch & 0x1fU)
       ^ *(uint *)(local_38 + (ulong)((byte)ch >> 5) * 4 + 8);
  pcVar1 = quotearg_n_options(L'\0',arg,argsize,(quoting_options *)local_38);
  return pcVar1;
}


char * quotearg_char(char *arg,char ch)

{
  char *pcVar1;
  undefined local_38 [44];
  undefined uStack_c;
  char *local_8;
  
  local_8 = default_quoting_options.right_quote;
  local_38._32_4_ = default_quoting_options.quote_these_too[6];
  local_38._36_4_ = default_quoting_options.quote_these_too[7];
  local_38._40_4_ = default_quoting_options.left_quote._0_4_;
  uStack_c = default_quoting_options.left_quote._4_4_;
  local_38._16_4_ = default_quoting_options.quote_these_too[2];
  local_38._20_4_ = default_quoting_options.quote_these_too[3];
  local_38._24_4_ = default_quoting_options.quote_these_too[4];
  local_38._28_4_ = default_quoting_options.quote_these_too[5];
  local_38._0_4_ = default_quoting_options.style;
  local_38._4_4_ = default_quoting_options.flags;
  local_38._8_4_ = default_quoting_options.quote_these_too[0];
  local_38._12_4_ = default_quoting_options.quote_these_too[1];
  *(uint *)(local_38 + (ulong)((byte)ch >> 5) * 4 + 8) =
       (~(*(uint *)(local_38 + (ulong)((byte)ch >> 5) * 4 + 8) >> (ch & 0x1fU)) & 1) << (ch & 0x1fU)
       ^ *(uint *)(local_38 + (ulong)((byte)ch >> 5) * 4 + 8);
  pcVar1 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,(quoting_options *)local_38);
  return pcVar1;
}


char * quotearg_colon(char *arg)

{
  char *pcVar1;
  undefined local_38 [44];
  undefined uStack_c;
  char *local_8;
  
  local_8 = default_quoting_options.right_quote;
  local_38._32_4_ = default_quoting_options.quote_these_too[6];
  local_38._36_4_ = default_quoting_options.quote_these_too[7];
  local_38._40_4_ = default_quoting_options.left_quote._0_4_;
  uStack_c = default_quoting_options.left_quote._4_4_;
  local_38._16_4_ = default_quoting_options.quote_these_too[2];
  local_38._20_4_ = default_quoting_options.quote_these_too[3];
  local_38._24_4_ = default_quoting_options.quote_these_too[4];
  local_38._28_4_ = default_quoting_options.quote_these_too[5];
  local_38._0_4_ = default_quoting_options.style;
  local_38._4_4_ = default_quoting_options.flags;
  local_38._8_4_ = default_quoting_options.quote_these_too[0];
  local_38._12_4_ = default_quoting_options.quote_these_too[1] | 0x4000000;
  pcVar1 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,(quoting_options *)local_38);
  return pcVar1;
}


char * quotearg_colon_mem(char *arg,size_t argsize)

{
  char *pcVar1;
  undefined local_38 [44];
  undefined uStack_c;
  char *local_8;
  
  local_8 = default_quoting_options.right_quote;
  local_38._32_4_ = default_quoting_options.quote_these_too[6];
  local_38._36_4_ = default_quoting_options.quote_these_too[7];
  local_38._40_4_ = default_quoting_options.left_quote._0_4_;
  uStack_c = default_quoting_options.left_quote._4_4_;
  local_38._16_4_ = default_quoting_options.quote_these_too[2];
  local_38._20_4_ = default_quoting_options.quote_these_too[3];
  local_38._24_4_ = default_quoting_options.quote_these_too[4];
  local_38._28_4_ = default_quoting_options.quote_these_too[5];
  local_38._0_4_ = default_quoting_options.style;
  local_38._4_4_ = default_quoting_options.flags;
  local_38._8_4_ = default_quoting_options.quote_these_too[0];
  local_38._12_4_ = default_quoting_options.quote_these_too[1] | 0x4000000;
  pcVar1 = quotearg_n_options(L'\0',arg,argsize,(quoting_options *)local_38);
  return pcVar1;
}


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00409fae */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

char * quotearg_n_style_colon(wchar_t n,enum quoting_style s,char *arg)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  quoting_options local_38;
  
  iVar2 = 0x16bfb60a;
  if (s == custom_quoting_style) {
    iVar2 = -0x644fc8;
  }
  iVar1 = 0x4985f7e8;
  do {
    iVar4 = iVar1;
    if (iVar4 == 0x16bfb60a) {
      local_38.quote_these_too[1] = local_38.quote_these_too[0] | 0x4000000;
      local_38.style = s;
      pcVar3 = quotearg_n_options(n,arg,0xffffffffffffffff,&local_38);
      return pcVar3;
    }
    iVar1 = iVar2;
  } while (iVar4 == 0x4985f7e8);
  if (iVar4 == -0x644fc8) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


char * quotearg_n_custom(wchar_t n,char *left_quote,char *right_quote,char *arg)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  quoting_options *unaff_RBX;
  quoting_options *pqVar4;
  int iVar5;
  quoting_options *local_50;
  undefined local_48 [44];
  undefined uStack_1c;
  char *local_18;
  
  local_18 = default_quoting_options.right_quote;
  local_48._32_4_ = default_quoting_options.quote_these_too[6];
  local_48._36_4_ = default_quoting_options.quote_these_too[7];
  local_48._40_4_ = default_quoting_options.left_quote._0_4_;
  uStack_1c = default_quoting_options.left_quote._4_4_;
  local_48._16_4_ = default_quoting_options.quote_these_too[2];
  local_48._20_4_ = default_quoting_options.quote_these_too[3];
  local_48._24_4_ = default_quoting_options.quote_these_too[4];
  local_48._28_4_ = default_quoting_options.quote_these_too[5];
  local_48._0_4_ = default_quoting_options.style;
  local_48._4_4_ = default_quoting_options.flags;
  local_48._8_4_ = default_quoting_options.quote_these_too[0];
  local_48._12_4_ = default_quoting_options.quote_these_too[1];
  iVar5 = 0x7a9369fa;
  if (right_quote == (char *)0x0) {
    iVar5 = 0x52e6450;
  }
  if (left_quote == (char *)0x0) {
    iVar5 = 0x52e6450;
  }
  iVar1 = -0x606f5d20;
LAB_0040a080:
  do {
    iVar2 = iVar1;
    pqVar4 = unaff_RBX;
    unaff_RBX = (quoting_options *)local_48;
    iVar1 = -0x6c02ea8;
  } while (iVar2 == -0x606f5d20);
  do {
    if (0x52e644f < iVar2) {
      if (iVar2 == 0x7a9369fa) {
        local_50->left_quote = left_quote;
        local_50->right_quote = right_quote;
        pcVar3 = quotearg_n_options(n,arg,0xffffffffffffffff,(quoting_options *)local_48);
        return pcVar3;
      }
      if (iVar2 == 0x52e6450) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
LAB_0040a110:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iVar2 == -0x5a5f66df) break;
    if (iVar2 != -0x6c02ea8) goto LAB_0040a110;
    pqVar4->style = custom_quoting_style;
    iVar2 = iVar5;
    local_50 = pqVar4;
  } while( true );
  unaff_RBX = &default_quoting_options;
  goto LAB_0040a080;
}


char * quotearg_n_custom_mem(wchar_t n,char *left_quote,char *right_quote,char *arg,size_t argsize)

{
  quoting_options *pqVar1;
  int iVar2;
  quoting_options *pqVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  quoting_options *local_50;
  undefined local_48 [44];
  undefined uStack_1c;
  char *local_18;
  
  local_18 = default_quoting_options.right_quote;
  local_48._32_4_ = default_quoting_options.quote_these_too[6];
  local_48._36_4_ = default_quoting_options.quote_these_too[7];
  local_48._40_4_ = default_quoting_options.left_quote._0_4_;
  uStack_1c = default_quoting_options.left_quote._4_4_;
  local_48._16_4_ = default_quoting_options.quote_these_too[2];
  local_48._20_4_ = default_quoting_options.quote_these_too[3];
  local_48._24_4_ = default_quoting_options.quote_these_too[4];
  local_48._28_4_ = default_quoting_options.quote_these_too[5];
  local_48._0_4_ = default_quoting_options.style;
  local_48._4_4_ = default_quoting_options.flags;
  local_48._8_4_ = default_quoting_options.quote_these_too[0];
  local_48._12_4_ = default_quoting_options.quote_these_too[1];
  iVar6 = 0x7a9369fa;
  if (right_quote == (char *)0x0) {
    iVar6 = 0x52e6450;
  }
  if (left_quote == (char *)0x0) {
    iVar6 = 0x52e6450;
  }
  pqVar1 = (quoting_options *)&DAT_052e6450;
  iVar2 = -0x606f5d20;
LAB_0040a180:
  do {
    iVar5 = iVar2;
    pqVar3 = pqVar1;
    pqVar1 = (quoting_options *)local_48;
    iVar2 = -0x6c02ea8;
  } while (iVar5 == -0x606f5d20);
  do {
    if (0x52e644f < iVar5) {
      if (iVar5 == 0x7a9369fa) {
        local_50->left_quote = left_quote;
        local_50->right_quote = right_quote;
        pcVar4 = quotearg_n_options(n,arg,argsize,(quoting_options *)local_48);
        return pcVar4;
      }
      if (iVar5 == 0x52e6450) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
LAB_0040a210:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iVar5 == -0x5a5f66df) break;
    if (iVar5 != -0x6c02ea8) goto LAB_0040a210;
    pqVar3->style = custom_quoting_style;
    iVar5 = iVar6;
    local_50 = pqVar3;
  } while( true );
  pqVar1 = &default_quoting_options;
  goto LAB_0040a180;
}


char * quotearg_custom(char *left_quote,char *right_quote,char *arg)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  quoting_options *in_RCX;
  quoting_options *pqVar4;
  int iVar5;
  quoting_options o;
  quoting_options *local_40;
  undefined local_38 [44];
  undefined uStack_c;
  char *local_8;
  
  local_8 = default_quoting_options.right_quote;
  local_38._32_4_ = default_quoting_options.quote_these_too[6];
  local_38._36_4_ = default_quoting_options.quote_these_too[7];
  local_38._40_4_ = default_quoting_options.left_quote._0_4_;
  uStack_c = default_quoting_options.left_quote._4_4_;
  local_38._16_4_ = default_quoting_options.quote_these_too[2];
  local_38._20_4_ = default_quoting_options.quote_these_too[3];
  local_38._24_4_ = default_quoting_options.quote_these_too[4];
  local_38._28_4_ = default_quoting_options.quote_these_too[5];
  local_38._0_4_ = default_quoting_options.style;
  local_38._4_4_ = default_quoting_options.flags;
  local_38._8_4_ = default_quoting_options.quote_these_too[0];
  local_38._12_4_ = default_quoting_options.quote_these_too[1];
  iVar5 = 0x7a9369fa;
  if (right_quote == (char *)0x0) {
    iVar5 = 0x52e6450;
  }
  if (left_quote == (char *)0x0) {
    iVar5 = 0x52e6450;
  }
  iVar1 = -0x606f5d20;
LAB_0040a290:
  do {
    iVar2 = iVar1;
    pqVar4 = in_RCX;
    in_RCX = (quoting_options *)local_38;
    iVar1 = -0x6c02ea8;
  } while (iVar2 == -0x606f5d20);
  do {
    if (0x52e644f < iVar2) {
      if (iVar2 == 0x7a9369fa) {
        local_40->left_quote = left_quote;
        local_40->right_quote = right_quote;
        pcVar3 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,(quoting_options *)local_38);
        return pcVar3;
      }
      if (iVar2 == 0x52e6450) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
LAB_0040a320:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iVar2 == -0x5a5f66df) break;
    if (iVar2 != -0x6c02ea8) goto LAB_0040a320;
    pqVar4->style = custom_quoting_style;
    iVar2 = iVar5;
    local_40 = pqVar4;
  } while( true );
  in_RCX = &default_quoting_options;
  goto LAB_0040a290;
}


char * quotearg_custom_mem(char *left_quote,char *right_quote,char *arg,size_t argsize)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  quoting_options *unaff_RBX;
  quoting_options *pqVar4;
  int iVar5;
  quoting_options o;
  quoting_options *local_50;
  undefined local_48 [44];
  undefined uStack_1c;
  char *local_18;
  
  local_18 = default_quoting_options.right_quote;
  local_48._32_4_ = default_quoting_options.quote_these_too[6];
  local_48._36_4_ = default_quoting_options.quote_these_too[7];
  local_48._40_4_ = default_quoting_options.left_quote._0_4_;
  uStack_1c = default_quoting_options.left_quote._4_4_;
  local_48._16_4_ = default_quoting_options.quote_these_too[2];
  local_48._20_4_ = default_quoting_options.quote_these_too[3];
  local_48._24_4_ = default_quoting_options.quote_these_too[4];
  local_48._28_4_ = default_quoting_options.quote_these_too[5];
  local_48._0_4_ = default_quoting_options.style;
  local_48._4_4_ = default_quoting_options.flags;
  local_48._8_4_ = default_quoting_options.quote_these_too[0];
  local_48._12_4_ = default_quoting_options.quote_these_too[1];
  iVar5 = 0x7a9369fa;
  if (right_quote == (char *)0x0) {
    iVar5 = 0x52e6450;
  }
  if (left_quote == (char *)0x0) {
    iVar5 = 0x52e6450;
  }
  iVar1 = -0x606f5d20;
LAB_0040a390:
  do {
    iVar2 = iVar1;
    pqVar4 = unaff_RBX;
    unaff_RBX = (quoting_options *)local_48;
    iVar1 = -0x6c02ea8;
  } while (iVar2 == -0x606f5d20);
  do {
    if (0x52e644f < iVar2) {
      if (iVar2 == 0x7a9369fa) {
        local_50->left_quote = left_quote;
        local_50->right_quote = right_quote;
        pcVar3 = quotearg_n_options(L'\0',arg,argsize,(quoting_options *)local_48);
        return pcVar3;
      }
      if (iVar2 == 0x52e6450) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
LAB_0040a420:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iVar2 == -0x5a5f66df) break;
    if (iVar2 != -0x6c02ea8) goto LAB_0040a420;
    pqVar4->style = custom_quoting_style;
    iVar2 = iVar5;
    local_50 = pqVar4;
  } while( true );
  unaff_RBX = &default_quoting_options;
  goto LAB_0040a390;
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


char * quote(char *arg)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,&quote_quoting_options);
  return pcVar1;
}


char * gettext_quote(char *msgid,enum quoting_style s)

{
  int iVar1;
  wchar_t wVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined uVar7;
  char in_stack_ffffffffffffffb8;
  char *local_38;
  
  uVar7 = 0x40a4c2;
  pcVar3 = (char *)dcgettext(0,msgid,5);
  pcVar6 = "\'";
  if (s == clocale_quoting_style) {
    pcVar6 = "\"";
  }
  iVar1 = 0x7b1d46ca;
  pcVar5 = (char *)(ulong)s;
LAB_0040a600:
  while (iVar1 < 0x53f1faf3) {
    if (iVar1 == 0x2ba4512b) {
      pcVar5 = &DAT_0040e472;
      if (*msgid == '`') {
        pcVar5 = &DAT_0040e46e;
      }
    }
    else {
      if (iVar1 != 0x338f66d9) goto LAB_0040a510;
      pcVar5 = &DAT_0040e482;
      if (*msgid == '`') {
        pcVar5 = &DAT_0040e47e;
      }
    }
    iVar1 = 0x53f1faf3;
  }
  if (iVar1 != 0x7b1d46ca) {
    if (iVar1 != 0x53f1faf3) goto LAB_0040a510;
    return pcVar5;
  }
  iVar1 = -0x53c329a;
  if (pcVar3 != msgid) {
    iVar1 = -0x389f05f;
  }
joined_r0x0040a679:
  if (iVar1 < 0x2ba4512b) {
    do {
      if (iVar1 < -0x53c329a) {
        if (iVar1 == -0x3b90eeb1) goto LAB_0040a564;
        if (iVar1 == -0x110e5bda) {
          iVar1 = 0x53f1faf3;
          pcVar5 = pcVar6;
        }
      }
      else {
        if (iVar1 == -0x53c329a) {
          uVar7 = 0x40a5aa;
          local_38 = locale_charset();
          wVar2 = strcaseeq0(local_38,"UTF-8",'U','T','F','-','8','\0','\0',(char)uVar7,
                             in_stack_ffffffffffffffb8);
          iVar1 = -0x3b90eeb1;
          iVar4 = 0x2ba4512b;
          goto LAB_0040a5ee;
        }
        if (iVar1 == -0x389f05f) {
          iVar1 = 0x53f1faf3;
          pcVar5 = pcVar3;
          break;
        }
      }
LAB_0040a510:
      if (0x2ba4512a < iVar1) break;
    } while( true );
  }
  goto LAB_0040a600;
LAB_0040a564:
  wVar2 = strcaseeq0(local_38,"GB18030",'G','B','1','8','0','3','0',(char)uVar7,
                     in_stack_ffffffffffffffb8);
  iVar1 = -0x110e5bda;
  iVar4 = 0x338f66d9;
LAB_0040a5ee:
  if (wVar2 != L'\0') {
    iVar1 = iVar4;
  }
  goto joined_r0x0040a679;
}


/* WARNING: Removing unreachable block (ram,0x0040a7d9) */
/* WARNING: Removing unreachable block (ram,0x0040a896) */
/* WARNING: Removing unreachable block (ram,0x0040aa9b) */
/* WARNING: Removing unreachable block (ram,0x0040ae82) */
/* WARNING: Removing unreachable block (ram,0x0040affa) */
/* WARNING: Removing unreachable block (ram,0x0040ae91) */
/* WARNING: Removing unreachable block (ram,0x0040afb6) */
/* WARNING: Removing unreachable block (ram,0x0040adf7) */

wchar_t strcaseeq0(char *s1,char *s2,char s20,char s21,char s22,char s23,char s24,char s25,char s26,
                  char s27,char s28)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  wchar_t wVar13;
  int iVar14;
  wchar_t wVar15;
  int iVar16;
  uint uVar17;
  undefined in_register_00000009;
  int iVar18;
  undefined in_register_00000011;
  undefined in_register_00000081;
  int iVar19;
  undefined in_register_00000089;
  int iVar20;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  
  iVar20 = CONCAT31(in_register_00000089,s23);
  iVar19 = CONCAT31(in_register_00000081,s22);
  iVar16 = (int)CONCAT71(in_register_00000009,s21);
  iVar18 = (int)CONCAT71(in_register_00000011,s20);
  cVar1 = *s1;
  iVar11 = (int)s24;
  iVar12 = (int)s25;
  wVar13 = (wchar_t)s26;
  iVar14 = 0x60caaaeb;
  wVar15 = wVar13;
LAB_0040b350:
  do {
    if (iVar14 < 0x60caaaeb) {
      if (iVar14 == 0x14aeef7d) {
        iVar14 = -0x78f01c0e;
        if (iVar18 == 0) {
          iVar14 = 0x905f939;
        }
      }
      else if (iVar14 == 0x35dadc89) {
        iVar10 = local_6c - iVar18;
        goto LAB_0040a72f;
      }
    }
    else if (iVar14 == 0x60caaaeb) {
      local_6c = (uint)cVar1;
      iVar14 = 0x35dadc89;
      if (iVar18 - 0x41U < 0x1a) {
        iVar14 = -0x4eeb3648;
      }
    }
    else if (iVar14 == 0x7468c8f3) {
      return wVar15;
    }
joined_r0x0040b3d9:
    do {
      while( true ) {
        if (0x14aeef7c < iVar14) goto LAB_0040b350;
        if (-0x4eeb3649 < iVar14) break;
        if (iVar14 == -0x78f01c0e) {
          bVar2 = s1[1];
          wVar15 = iVar16 - 0x41U & 0xffffff00 | (uint)bVar2;
          iVar14 = -0x3c832b93;
          do {
            if (iVar14 < -0x28848625) {
              if (iVar14 != -0x425b957d) {
                if (iVar14 != -0x3c832b93) goto joined_r0x0040a836;
                local_68 = (uint)(char)bVar2;
                iVar14 = -0xdd2e322;
                if (0x19 < iVar16 - 0x41U) goto joined_r0x0040a836;
                iVar14 = 0x792f9c95;
                goto joined_r0x0040a836;
              }
              bVar3 = s1[2];
              wVar15 = iVar19 - 0x41U & 0xffffff00 | (uint)bVar3;
              iVar14 = -0x7d9bf933;
              do {
                if (iVar14 < -0x96ce650) {
                  if (iVar14 == -0x7d9bf933) {
                    local_64 = (uint)(char)bVar3;
                    iVar14 = 0x227bf8a3;
                    if (iVar19 - 0x41U < 0x1a) {
                      iVar14 = -0x13714354;
                    }
                  }
                  else if (iVar14 == -0x13714354) {
                    iVar10 = (local_64 & 0xffffffdf) - iVar19;
                    goto LAB_0040a89b;
                  }
                }
                else {
                  if (iVar14 == -0x96ce650) {
                    bVar4 = s1[3];
                    wVar15 = iVar20 - 0x41U & 0xffffff00 | (uint)bVar4;
                    iVar14 = -0x74632621;
                    goto LAB_0040aa20;
                  }
                  if ((iVar14 == -0x325d031) && (iVar14 = -0x96ce650, iVar19 == 0)) {
                    iVar14 = -0xbf85da;
                  }
                }
joined_r0x0040a941:
                if (-0xbf85db < iVar14) {
LAB_0040b200:
                  while( true ) {
                    while (0x29c7e74f < iVar14) {
                      if (iVar14 != 0x7e96b5a0) {
                        if (iVar14 != 0x29c7e750) goto joined_r0x0040a941;
                        iVar14 = 0x724ba558;
                        goto LAB_0040b2b0;
                      }
                      wVar15 = L'\0';
                      iVar14 = 0x29c7e750;
                    }
                    if (iVar14 != -0xbf85da) break;
                    iVar14 = 0x29c7e750;
                    wVar15 = L'\x01';
                  }
                  if (iVar14 == 0x227bf8a3) {
                    iVar10 = local_64 - iVar19;
LAB_0040a89b:
                    iVar14 = 0x7e96b5a0;
                    if (iVar10 == 0) {
                      iVar14 = -0x325d031;
                    }
                  }
                  goto joined_r0x0040a941;
                }
              } while( true );
            }
            if (iVar14 == -0x28848625) {
              iVar14 = -0x425b957d;
              if (iVar16 != 0) goto joined_r0x0040a836;
              iVar14 = 0x7149d193;
              goto joined_r0x0040a836;
            }
            if (iVar14 != -0x24f71e96) goto joined_r0x0040a836;
            iVar14 = 0x724ba558;
            wVar15 = L'\0';
LAB_0040b2b0:
            do {
              if (iVar14 < 0x724ba558) {
                if (iVar14 == -0xdd2e322) {
                  iVar10 = local_68 - iVar16;
                  goto LAB_0040a7de;
                }
                if (iVar14 == 0x7149d193) {
                  iVar14 = 0x724ba558;
                  wVar15 = L'\x01';
                  goto LAB_0040b2b0;
                }
              }
              else if (iVar14 == 0x792f9c95) {
                iVar10 = (local_68 & 0xffffffdf) - iVar16;
LAB_0040a7de:
                iVar14 = -0x24f71e96;
                if (iVar10 == 0) {
                  iVar14 = -0x28848625;
                }
              }
              else if (iVar14 == 0x724ba558) {
                iVar14 = 0x7468c8f3;
                goto LAB_0040b350;
              }
INVALID_JUMP;
            } while (-0xdd2e323 < iVar14);
          } while( true );
        }
        if (iVar14 == -0x65d57970) {
          iVar14 = 0x7468c8f3;
          wVar15 = L'\0';
          goto LAB_0040b350;
        }
      }
      if (iVar14 == -0x4eeb3648) {
        iVar10 = (local_6c & 0xffffffdf) - iVar18;
LAB_0040a72f:
        iVar14 = -0x65d57970;
        if (iVar10 == 0) {
          iVar14 = 0x14aeef7d;
        }
        goto joined_r0x0040b3d9;
      }
    } while (iVar14 != 0x905f939);
    iVar14 = 0x7468c8f3;
    wVar15 = L'\x01';
  } while( true );
LAB_0040aa20:
  do {
    if (-0x59ece028 < iVar14) {
      if (iVar14 != -0x59ece027) {
        if (iVar14 != -0x10030257) goto joined_r0x0040a996;
        iVar10 = (local_60 & 0xffffffdf) - iVar20;
        goto LAB_0040a97f;
      }
      bVar5 = s1[4];
      wVar15 = iVar11 - 0x41U & 0xffffff00 | (uint)bVar5;
      iVar14 = -0x5b7de70;
      do {
        if (iVar14 < -0x3346e2cb) {
          if (iVar14 == -0x6e4fb35f) {
            iVar14 = 0x5b98e432;
            if (iVar11 == 0) {
              iVar14 = -0x47740644;
            }
          }
          else if (iVar14 == -0x47740644) {
            iVar14 = 0x507ac1cb;
            wVar15 = L'\x01';
            break;
          }
        }
        else {
          if (iVar14 == -0x3346e2cb) {
            iVar10 = local_5c - iVar11;
            goto LAB_0040aaa0;
          }
          if (iVar14 == -0x5b7de70) {
            local_5c = (uint)(char)bVar5;
            iVar14 = -0x3346e2cb;
            if (iVar11 - 0x41U < 0x1a) {
              iVar14 = 0x5be26bd7;
            }
          }
        }
INVALID_JUMP;
      } while (iVar14 < 0x507ac1cb);
LAB_0040ab60:
      if (iVar14 < 0x5be26bd7) {
        if (iVar14 != 0x5b98e432) {
          if (iVar14 == 0x507ac1cb) {
            iVar14 = -0x5b463104;
            goto LAB_0040aa20;
          }
          goto joined_r0x0040ab23;
        }
        bVar6 = s1[5];
        wVar15 = iVar12 - 0x41U & 0xffffff00 | (uint)bVar6;
        uVar17 = 0xc8fe5e59;
LAB_0040b110:
        if ((int)uVar17 < -0x24c965a5) {
          if (uVar17 == 0x8a1aac2e) {
            iVar14 = local_58 - iVar12;
            goto LAB_0040abfc;
          }
          if (uVar17 != 0xc8fe5e59) goto LAB_0040ac10;
          local_58 = (uint)(char)bVar6;
          uVar17 = 0x8a1aac2e;
          if (iVar12 - 0x41U < 0x1a) {
            uVar17 = 0xdb369a5b;
          }
          if (0x337a0a78 < (int)uVar17) {
            do {
              while ((int)uVar17 < 0x737e80d3) {
                if (uVar17 == 0x337a0a79) {
                  bVar7 = s1[6];
                  wVar15 = wVar13 + L'\xffffffbf' & 0xffffff00U | (uint)bVar7;
                  uVar17 = 0x830677da;
                  goto LAB_0040b050;
                }
                if (uVar17 == 0x3e027ace) {
                  uVar17 = 0xfc20dd5;
                  wVar15 = L'\x01';
                  goto LAB_0040b110;
                }
LAB_0040ac10:
                if ((int)uVar17 < 0x337a0a79) goto LAB_0040b110;
              }
              if (uVar17 == 0x737e80d3) {
                uVar17 = 0xfc20dd5;
                wVar15 = L'\0';
                break;
              }
              if (uVar17 != 0x7c9c0586) goto LAB_0040ac10;
              uVar17 = 0x337a0a79;
              if (iVar12 == 0) {
                uVar17 = 0x3e027ace;
              }
            } while (0x337a0a78 < uVar17);
          }
          goto LAB_0040b110;
        }
        if (uVar17 == 0xdb369a5b) {
          iVar14 = (local_58 & 0xffffffdf) - iVar12;
LAB_0040abfc:
          uVar17 = 0x737e80d3;
          if (iVar14 != 0) goto LAB_0040ac10;
          uVar17 = 0x7c9c0586;
          goto LAB_0040ac10;
        }
        if (uVar17 != 0xfc20dd5) goto LAB_0040ac10;
        iVar14 = 0x507ac1cb;
        goto LAB_0040ab60;
      }
      if (iVar14 != 0x5be26bd7) {
        if (iVar14 != 0x624d9d8b) goto joined_r0x0040ab23;
        iVar14 = 0x507ac1cb;
        wVar15 = L'\0';
        goto LAB_0040ab60;
      }
      iVar10 = (local_5c & 0xffffffdf) - iVar11;
LAB_0040aaa0:
      iVar14 = 0x624d9d8b;
      if (iVar10 == 0) {
        iVar14 = -0x6e4fb35f;
      }
      goto joined_r0x0040ab23;
    }
    if (iVar14 != -0x74632621) {
      if (iVar14 != -0x5b463104) goto joined_r0x0040a996;
      iVar14 = 0x29c7e750;
      goto LAB_0040b200;
    }
    local_60 = (uint)(char)bVar4;
    iVar14 = 0xbc4342b;
    if (iVar20 - 0x41U < 0x1a) {
      iVar14 = -0x10030257;
    }
  } while (iVar14 < 0xbc4342b);
  do {
    if (iVar14 < 0x6385ce7a) {
      if (iVar14 == 0xbc4342b) {
        iVar10 = local_60 - iVar20;
LAB_0040a97f:
        iVar14 = 0x6385ce7a;
        if (iVar10 == 0) {
          iVar14 = 0x265ad46a;
        }
      }
      else if ((iVar14 == 0x265ad46a) && (iVar14 = -0x59ece027, iVar20 == 0)) {
        iVar14 = 0x6b7da88d;
      }
    }
    else {
      if (iVar14 == 0x6385ce7a) {
        iVar14 = -0x5b463104;
        wVar15 = L'\0';
        break;
      }
      if (iVar14 == 0x6b7da88d) {
        iVar14 = -0x5b463104;
        wVar15 = L'\x01';
        break;
      }
    }
INVALID_JUMP;
  } while (0xbc4342a < iVar14);
  goto LAB_0040aa20;
LAB_0040b050:
  if (-0xfbb4c88 < (int)uVar17) {
    if (uVar17 != 0xf044b379) {
      if (uVar17 == 0xac77f45) {
        uVar17 = 0xc3b98a6;
        if (wVar13 == L'\0') {
          uVar17 = 0x6150078c;
        }
        goto joined_r0x0040b084;
      }
      goto LAB_0040acd0;
    }
    uVar17 = 0xa41e0411;
    wVar15 = L'\0';
    goto LAB_0040b050;
  }
  if (uVar17 == 0x830677da) {
    local_54 = (uint)(char)bVar7;
    uVar17 = 0x64c4cea3;
    if ((uint)(wVar13 + L'\xffffffbf') < 0x1a) {
      uVar17 = 0x70b665d2;
    }
joined_r0x0040b084:
    if (0xc3b98a5 < uVar17) goto LAB_0040acdc;
    goto LAB_0040b050;
  }
  if (uVar17 != 0xa41e0411) {
LAB_0040acd0:
    do {
      if ((int)uVar17 < 0xc3b98a6) goto LAB_0040b050;
LAB_0040acdc:
      if (0x64c4cea2 < (int)uVar17) {
        if (uVar17 == 0x64c4cea3) {
          iVar14 = local_54 - wVar13;
        }
        else {
          if (uVar17 != 0x70b665d2) goto LAB_0040acd0;
          iVar14 = (local_54 & 0xffffffdf) - wVar13;
        }
        uVar17 = 0xf044b379;
        if (iVar14 == 0) {
          uVar17 = 0xac77f45;
        }
        goto LAB_0040acd0;
      }
      if (uVar17 == 0xc3b98a6) {
        bVar8 = s1[7];
        wVar15 = bVar8 | 0xffffff00;
        iVar14 = 0x2385bc59;
        goto LAB_0040ae10;
      }
    } while (uVar17 != 0x6150078c);
    uVar17 = 0xa41e0411;
    wVar15 = L'\x01';
    goto LAB_0040b050;
  }
  uVar17 = 0xfc20dd5;
  goto LAB_0040b110;
LAB_0040ae10:
  if (iVar14 < 0x397718b5) {
    if (iVar14 == 0x2385bc59) {
      local_50 = (uint)(char)bVar8;
      iVar14 = -0x5f0d6f1d;
      goto LAB_0040ad8c;
    }
    if (iVar14 != 0x2f347f98) goto LAB_0040ad80;
    iVar14 = 0x7a35fc89;
    wVar15 = L'\0';
    goto LAB_0040ae10;
  }
  if (iVar14 == 0x397718b5) {
    bVar9 = s1[8];
    wVar15 = bVar9 | 0xffffff00;
    iVar14 = 0x76e9bff6;
LAB_0040af80:
    if (iVar14 < 0x65446b53) {
      uVar17 = local_4c;
      if (iVar14 == 0x2ac4ec98) goto LAB_0040aec9;
      if (iVar14 == 0x2ee4801b) {
        iVar14 = -0x3709e722;
        goto LAB_0040aeec;
      }
LAB_0040aee0:
      do {
        while( true ) {
          while( true ) {
            if (0x2ac4ec97 < iVar14) goto LAB_0040af80;
LAB_0040aeec:
            if (iVar14 < -0x3709e722) break;
            if (iVar14 == -0x3709e722) {
              iVar14 = 0x65446b53;
              wVar15 = L'\x01';
              goto LAB_0040af80;
            }
            if (iVar14 == -0x23ef97b3) {
              iVar14 = c_strcasecmp(s1 + 9,s2 + 9);
              wVar15 = (wchar_t)(iVar14 == 0);
              iVar14 = 0x65446b53;
              goto LAB_0040af80;
            }
          }
          if (iVar14 != -0x53b39dcb) break;
          uVar17 = local_4c & 0xffffffdf;
LAB_0040aec9:
          iVar14 = -0x43c44a18;
          if (uVar17 == 0) {
            iVar14 = 0x2ee4801b;
          }
        }
      } while (iVar14 != -0x43c44a18);
      iVar14 = 0x65446b53;
      wVar15 = L'\0';
      goto LAB_0040af80;
    }
    if (iVar14 == 0x76e9bff6) {
      local_4c = (uint)(char)bVar9;
      iVar14 = 0x2ac4ec98;
      goto LAB_0040af80;
    }
    if (iVar14 != 0x65446b53) goto LAB_0040aee0;
    iVar14 = 0x7a35fc89;
    goto LAB_0040ae10;
  }
  if (iVar14 != 0x7a35fc89) {
LAB_0040ad80:
    if (0x2385bc58 < iVar14) goto LAB_0040ae10;
LAB_0040ad8c:
    while (iVar14 < -0x5f0d6f1d) {
      if (iVar14 != -0x7d0d498c) {
        if (iVar14 != -0x765cd356) goto LAB_0040ad80;
        iVar14 = 0x7a35fc89;
        wVar15 = L'\x01';
        goto LAB_0040ae10;
      }
      iVar14 = -0x765cd356;
    }
    uVar17 = local_50;
    if (iVar14 != -0x5f0d6f1d) {
      if (iVar14 != -0x3b2d280d) goto LAB_0040ad80;
      uVar17 = local_50 & 0xffffffdf;
    }
    iVar14 = 0x2f347f98;
    if (uVar17 == 0) {
      iVar14 = -0x7d0d498c;
    }
    goto LAB_0040ad80;
  }
  uVar17 = 0xa41e0411;
  goto LAB_0040b050;
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
  int iVar7;
  undefined uVar8;
  char *__s;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar2 = -0x1be315a8;
  if (command_name != (char *)0x0) {
    iVar2 = -0x77c1bb25;
  }
  iVar3 = 0x7a2bff08;
  if ((long)n_authors < 5) {
    iVar3 = -0x554aa0b;
  }
  iVar4 = 0x436fe6c3;
  if ((long)n_authors < 7) {
    iVar4 = -0x3b575f19;
  }
  iVar5 = 0x2d6ef314;
  if ((long)n_authors < 8) {
    iVar5 = 0x47678c48;
  }
  iVar6 = -0x54f4558b;
  if ((long)n_authors < 9) {
    iVar6 = 0x14eeb2c1;
  }
  iVar9 = -0x23cfe345;
  if (n_authors != 9) {
    iVar9 = 0x1df09a72;
  }
  iVar10 = -0xaead160;
  if ((long)n_authors < 6) {
    iVar10 = -0x66e45850;
  }
  iVar11 = 0x282bf7c5;
  if ((long)n_authors < 2) {
    iVar11 = 0x67cb3bab;
  }
  iVar12 = -0x146f28c;
  if ((long)n_authors < 3) {
    iVar12 = -0x2cd59a6c;
  }
  iVar13 = 0x1d217b6f;
  if ((long)n_authors < 4) {
    iVar13 = 0x5c7e8815;
  }
  iVar14 = -0x54ba9c01;
  if ((long)n_authors < 1) {
    iVar14 = -0x3dda8b01;
  }
  iVar15 = 0x5991c38b;
  if (n_authors != 0) {
    iVar15 = 0x1df09a72;
  }
  iVar1 = -0x2c3d97d7;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (iVar7 = iVar1, iVar1 = iVar7, iVar7 < -0x554aa0b) {
              if (iVar7 < -0x3dda8b01) {
                if (iVar7 < -0x54ba9c01) {
                  if (iVar7 == -0x77c1bb25) {
                    __fprintf_chk(stream,1,"%s (%s) %s\n",command_name,package,version);
                    iVar1 = 0x3f0e5cef;
                  }
                  else if (iVar7 == -0x66e45850) {
                    uVar8 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
                    __fprintf_chk(stream,1,uVar8,*authors,authors[1],authors[2],authors[3],
                                  authors[4]);
                    iVar1 = 0x5991c38b;
                  }
                  else if (iVar7 == -0x54f4558b) {
                    iVar1 = iVar9;
                  }
                }
                else if (iVar7 == -0x54ba9c01) {
                  uVar8 = dcgettext(0,"Written by %s.\n",5);
                  __fprintf_chk(stream,1,uVar8,*authors);
                  iVar1 = 0x5991c38b;
                }
                else {
                  iVar1 = iVar3;
                  if ((iVar7 != -0x48f523c3) && (iVar1 = iVar7, iVar7 == -0x484d34ed)) {
                    uVar8 = dcgettext(0,
                                      "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n"
                                      ,5);
                    __fprintf_chk(stream,1,uVar8,*authors,authors[1],authors[2],authors[3],
                                  authors[4],authors[5],authors[6],authors[7],authors[8]);
                    iVar1 = 0x5991c38b;
                  }
                }
              }
              else if (iVar7 < -0x2c3d97d7) {
                iVar1 = iVar15;
                if (((iVar7 != -0x3dda8b01) && (iVar1 = iVar10, iVar7 != -0x3b575f19)) &&
                   (iVar1 = iVar7, iVar7 == -0x2cd59a6c)) {
                  uVar8 = dcgettext(0,"Written by %s and %s.\n",5);
                  __fprintf_chk(stream,1,uVar8,*authors,authors[1]);
                  iVar1 = 0x5991c38b;
                }
              }
              else if (iVar7 < -0x1be315a8) {
                iVar1 = iVar2;
                if ((iVar7 != -0x2c3d97d7) && (iVar1 = iVar7, iVar7 == -0x23cfe345)) {
                  uVar8 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n",5);
                  __fprintf_chk(stream,1,uVar8,*authors,authors[1],authors[2],authors[3],authors[4],
                                authors[5],authors[6],authors[7],authors[8]);
                  iVar1 = 0x5991c38b;
                }
              }
              else if (iVar7 == -0x1be315a8) {
                __fprintf_chk(stream,1,"%s %s\n",package,version);
                iVar1 = 0x3f0e5cef;
              }
              else if (iVar7 == -0xaead160) {
                uVar8 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
                __fprintf_chk(stream,1,uVar8,*authors,authors[1],authors[2],authors[3],authors[4],
                              authors[5]);
                iVar1 = 0x5991c38b;
              }
            }
            if (0x3f0e5cee < iVar7) break;
            if (iVar7 < 0x1d217b6f) {
              iVar1 = iVar11;
              if (((iVar7 != -0x554aa0b) && (iVar1 = iVar13, iVar7 != -0x146f28c)) &&
                 (iVar1 = iVar7, iVar7 == 0x14eeb2c1)) {
                uVar8 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
                __fprintf_chk(stream,1,uVar8,*authors,authors[1],authors[2],authors[3],authors[4],
                              authors[5],authors[6],authors[7]);
                iVar1 = 0x5991c38b;
              }
            }
            else if (iVar7 < 0x282bf7c5) {
              if (iVar7 == 0x1d217b6f) {
                uVar8 = dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
                __fprintf_chk(stream,1,uVar8,*authors,authors[1],authors[2],authors[3]);
                iVar1 = 0x5991c38b;
              }
              else if (iVar7 == 0x1df09a72) {
                iVar1 = -0x484d34ed;
              }
            }
            else {
              iVar1 = iVar12;
              if ((iVar7 != 0x282bf7c5) && (iVar1 = iVar7, iVar7 == 0x2d6ef314)) {
                iVar1 = iVar6;
              }
            }
          }
          if (0x5991c38a < iVar7) break;
          if (iVar7 == 0x3f0e5cef) {
            uVar8 = dcgettext(0,&DAT_0040e52b,5);
            __fprintf_chk(stream,1,"Copyright %s %d Free Software Foundation, Inc.",uVar8,0x7e3);
            __s = (char *)dcgettext(0,
                                    "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"
                                    ,5);
            fputs_unlocked(__s,(FILE *)stream);
            iVar1 = -0x48f523c3;
          }
          else {
            iVar1 = iVar5;
            if ((iVar7 != 0x436fe6c3) && (iVar1 = iVar7, iVar7 == 0x47678c48)) {
              uVar8 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
              __fprintf_chk(stream,1,uVar8,*authors,authors[1],authors[2],authors[3],authors[4],
                            authors[5],authors[6]);
              iVar1 = 0x5991c38b;
            }
          }
        }
        if (iVar7 < 0x67cb3bab) break;
        iVar1 = iVar14;
        if ((iVar7 != 0x67cb3bab) && (iVar1 = iVar7, iVar7 == 0x7a2bff08)) {
          iVar1 = iVar4;
        }
      }
      if (iVar7 != 0x5c7e8815) break;
      uVar8 = dcgettext(0,"Written by %s, %s, and %s.\n",5);
      __fprintf_chk(stream,1,uVar8,*authors,authors[1],authors[2]);
      iVar1 = 0x5991c38b;
    }
  } while (iVar7 != 0x5991c38b);
  return;
}


void version_etc_ar(FILE *stream,char *command_name,char *package,char *version,char **authors)

{
  int iVar1;
  size_t n_authors;
  
  n_authors = 0;
  while( true ) {
    do {
      iVar1 = -0xed59ede;
      if (authors[n_authors] != (char *)0x0) {
        iVar1 = 0x31c558a;
      }
    } while (iVar1 == 0x79364210);
    if (iVar1 == -0xed59ede) break;
    if (iVar1 != 0x31c558a) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    n_authors = n_authors + 1;
  }
  version_etc_arn(stream,command_name,package,version,authors,n_authors);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bb39) */
/* WARNING: Removing unreachable block (ram,0x0040bb53) */

void version_etc_va(FILE *stream,char *command_name,char *package,char *version,
                   __va_list_tag *authors)

{
  char *pcVar1;
  char **unaff_RBX;
  int iVar2;
  ulong uVar3;
  char *authtab [10];
  uint local_84;
  size_t local_80;
  __va_list_tag *local_70;
  char *local_68 [10];
  
  iVar2 = 0x51ca0544;
  uVar3 = 0;
LAB_0040bbb0:
  do {
    if (iVar2 == 0x39e0e3d9) {
      local_84 = authors->gp_offset;
      iVar2 = 0xeda4fd7;
      local_70 = authors;
      if (local_84 < 0x29) {
        iVar2 = -0x7f2d85c6;
      }
    }
    else if (iVar2 == 0x39ef8b9a) {
      pcVar1 = *unaff_RBX;
      local_68[local_80] = pcVar1;
      iVar2 = -0x63b87bcc;
      if (pcVar1 != (char *)0x0) {
        iVar2 = -0x6b54ff7a;
      }
    }
    else {
      if (iVar2 != 0x51ca0544) goto LAB_0040bc80;
      iVar2 = -0x63b87bcc;
      local_80 = uVar3;
      if (uVar3 < 10) {
        iVar2 = 0x39e0e3d9;
      }
    }
  } while (0x39e0e3d8 < iVar2);
  if (iVar2 < -0x63b87bcc) {
    if (iVar2 != -0x7f2d85c6) {
      if (iVar2 != -0x6b54ff7a) goto LAB_0040bc80;
      uVar3 = local_80 + 1;
      iVar2 = 0x51ca0544;
      goto LAB_0040bbb0;
    }
    unaff_RBX = (char **)((long)(int)local_84 + (long)authors->reg_save_area);
    local_70->gp_offset = local_84 + 8;
  }
  else {
    if (iVar2 == -0x63b87bcc) {
      version_etc_arn(stream,command_name,package,version,local_68,local_80);
      return;
    }
    if (iVar2 != 0xeda4fd7) {
LAB_0040bc80:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    unaff_RBX = (char **)authors->overflow_arg_area;
    authors->overflow_arg_area = unaff_RBX + 1;
  }
  iVar2 = 0x39ef8b9a;
  goto LAB_0040bbb0;
}


/* WARNING: Removing unreachable block (ram,0x0040bd5a) */
/* WARNING: Removing unreachable block (ram,0x0040bd74) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void version_etc(FILE *stream,char *command_name,char *package,char *version,...)

{
  char *pcVar1;
  char in_AL;
  char **unaff_RBX;
  int iVar2;
  undefined in_R8;
  undefined in_R9;
  ulong uVar3;
  undefined in_XMM0_Da;
  undefined in_XMM1_Da;
  undefined in_XMM2_Da;
  undefined in_XMM3_Da;
  undefined in_XMM4_Da;
  undefined in_XMM5_Da;
  undefined in_XMM6_Da;
  undefined in_XMM7_Da;
  va_list authors;
  char *authtab [10];
  uint local_154;
  size_t local_150;
  uint *local_140;
  uint local_138;
  undefined local_134;
  char **local_130;
  undefined *local_128;
  undefined local_118 [32];
  undefined local_f8;
  undefined local_f0;
  undefined local_e8;
  undefined local_d8;
  undefined local_c8;
  undefined local_b8;
  undefined local_a8;
  undefined local_98;
  undefined local_88;
  undefined local_78;
  char *local_68 [10];
  
  if (in_AL != '\0') {
    local_e8 = in_XMM0_Da;
    local_d8 = in_XMM1_Da;
    local_c8 = in_XMM2_Da;
    local_b8 = in_XMM3_Da;
    local_a8 = in_XMM4_Da;
    local_98 = in_XMM5_Da;
    local_88 = in_XMM6_Da;
    local_78 = in_XMM7_Da;
  }
  local_128 = local_118;
  local_130 = (char **)&stack0x00000008;
  local_134 = 0x30;
  local_138 = 0x20;
  iVar2 = 0x51ca0544;
  uVar3 = 0;
  local_f8 = in_R8;
  local_f0 = in_R9;
LAB_0040bde0:
  do {
    if (iVar2 == 0x39e0e3d9) {
      iVar2 = 0xeda4fd7;
      local_154 = local_138;
      local_140 = &local_138;
      if (local_138 < 0x29) {
        iVar2 = -0x7f2d85c6;
      }
    }
    else if (iVar2 == 0x39ef8b9a) {
      pcVar1 = *unaff_RBX;
      local_68[local_150] = pcVar1;
      iVar2 = -0x63b87bcc;
      if (pcVar1 != (char *)0x0) {
        iVar2 = -0x6b54ff7a;
      }
    }
    else {
      if (iVar2 != 0x51ca0544) goto LAB_0040beb0;
      iVar2 = -0x63b87bcc;
      local_150 = uVar3;
      if (uVar3 < 10) {
        iVar2 = 0x39e0e3d9;
      }
    }
  } while (0x39e0e3d8 < iVar2);
  if (iVar2 < -0x63b87bcc) {
    if (iVar2 != -0x7f2d85c6) {
      if (iVar2 != -0x6b54ff7a) goto LAB_0040beb0;
      uVar3 = local_150 + 1;
      iVar2 = 0x51ca0544;
      goto LAB_0040bde0;
    }
    unaff_RBX = (char **)(local_128 + (int)local_154);
    *local_140 = local_154 + 8;
  }
  else {
    if (iVar2 == -0x63b87bcc) {
      version_etc_arn(stream,command_name,package,version,local_68,local_150);
      return;
    }
    if (iVar2 != 0xeda4fd7) {
LAB_0040beb0:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    unaff_RBX = local_130;
    local_130 = local_130 + 1;
  }
  iVar2 = 0x39ef8b9a;
  goto LAB_0040bde0;
}


void emit_bug_reporting_address(void)

{
  undefined uVar1;
  char *__s;
  
  uVar1 = dcgettext(0,"\nReport bugs to: %s\n",5);
  __printf_chk(1,uVar1,"bug-coreutils@gnu.org");
  uVar1 = dcgettext(0,"%s home page: <%s>\n",5);
  __printf_chk(1,uVar1,"GNU coreutils","https://www.gnu.org/software/coreutils/");
  __s = (char *)dcgettext(0,"General help using GNU software: <https://www.gnu.org/gethelp/>\n",5);
  fputs_unlocked(__s,stdout);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bf8e) */
/* WARNING: Removing unreachable block (ram,0x0040bffd) */

void * xnmalloc(size_t n,size_t s)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = 0x570d7231;
  do {
    if (iVar1 != 0x570d7231) {
      if (iVar1 != -0x2e174d77) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    iVar1 = 0x33104f7d;
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0) < n) {
      iVar1 = -0x2e174d77;
    }
  } while (iVar1 != 0x33104f7d);
  pvVar2 = malloc(s * n);
  iVar1 = 0x4e43466e;
  do {
    if (iVar1 != 0x4e43466e) {
      if (iVar1 != -0x1e105881) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    iVar1 = -0x1a784ce1;
    if (s * n != 0) {
      iVar1 = -0x1e105881;
    }
    if (pvVar2 != (void *)0x0) {
      iVar1 = -0x1a784ce1;
    }
  } while (iVar1 != -0x1a784ce1);
  return pvVar2;
}


/* WARNING: Removing unreachable block (ram,0x0040c09c) */

void * xmalloc(size_t n)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = malloc(n);
  iVar1 = 0x4e43466e;
  do {
    if (iVar1 != 0x4e43466e) {
      if (iVar1 != -0x1e105881) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    iVar1 = -0x1a784ce1;
    if (n != 0) {
      iVar1 = -0x1e105881;
    }
    if (pvVar2 != (void *)0x0) {
      iVar1 = -0x1a784ce1;
    }
  } while (iVar1 != -0x1a784ce1);
  return pvVar2;
}


/* WARNING: Removing unreachable block (ram,0x0040c13a) */

void * xnrealloc(void *p,size_t n,size_t s)

{
  int iVar1;
  size_t __size;
  void *unaff_R15;
  void *local_40;
  
  iVar1 = -0x5f46b532;
  do {
    if (iVar1 != -0x5f46b532) {
      if (iVar1 != 0x22190561) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    iVar1 = -0x7a4ef995;
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0) < n) {
      iVar1 = 0x22190561;
    }
  } while (iVar1 != -0x7a4ef995);
  __size = s * n;
  iVar1 = 0x6b0e46c6;
  do {
    do {
      if (iVar1 == 0x2401ddd7) {
        return unaff_R15;
      }
      if (iVar1 != 0x6b0e46c6) {
        if (iVar1 == -0x11a59952) {
                    /* WARNING: Subroutine does not return */
          xalloc_die();
        }
LAB_0040c2a0:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar1 = -0x6afbf8f4;
      if (p != (void *)0x0) {
        iVar1 = -0x3f62fc8d;
      }
      if (__size != 0) {
        iVar1 = -0x6afbf8f4;
      }
    } while (-0x11a59953 < iVar1);
    do {
      if (iVar1 == -0x7b869cf6) {
        iVar1 = 0x2401ddd7;
        unaff_R15 = local_40;
        break;
      }
      if (iVar1 != -0x6afbf8f4) {
        if (iVar1 != -0x3f62fc8d) goto LAB_0040c2a0;
        free(p);
        iVar1 = 0x2401ddd7;
        unaff_R15 = (void *)0x0;
        break;
      }
      local_40 = realloc(p,__size);
      iVar1 = -0x7b869cf6;
      if (local_40 == (void *)0x0) {
        iVar1 = -0x11a59952;
      }
      if (__size == 0) {
        iVar1 = -0x7b869cf6;
      }
    } while (iVar1 < -0x11a59952);
  } while( true );
}


void * xrealloc(void *p,size_t n)

{
  int iVar1;
  void *unaff_R15;
  void *local_38;
  
  iVar1 = 0x6b0e46c6;
  do {
    do {
      if (iVar1 == 0x2401ddd7) {
        return unaff_R15;
      }
      if (iVar1 != 0x6b0e46c6) {
        if (iVar1 == -0x11a59952) {
                    /* WARNING: Subroutine does not return */
          xalloc_die();
        }
LAB_0040c3f0:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar1 = -0x6afbf8f4;
      if (p != (void *)0x0) {
        iVar1 = -0x3f62fc8d;
      }
      if (n != 0) {
        iVar1 = -0x6afbf8f4;
      }
    } while (-0x11a59953 < iVar1);
    do {
      if (iVar1 == -0x7b869cf6) {
        iVar1 = 0x2401ddd7;
        unaff_R15 = local_38;
        break;
      }
      if (iVar1 != -0x6afbf8f4) {
        if (iVar1 != -0x3f62fc8d) goto LAB_0040c3f0;
        free(p);
        iVar1 = 0x2401ddd7;
        unaff_R15 = (void *)0x0;
        break;
      }
      local_38 = realloc(p,n);
      iVar1 = -0x7b869cf6;
      if (local_38 == (void *)0x0) {
        iVar1 = -0x11a59952;
      }
      if (n == 0) {
        iVar1 = -0x7b869cf6;
      }
    } while (iVar1 < -0x11a59952);
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x0040c46a) */

void * x2nrealloc(void *p,size_t *pn,size_t s)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong in_RCX;
  ulong unaff_RBP;
  size_t __size;
  void *pvVar4;
  bool bVar5;
  void *local_38;
  
  uVar1 = *pn;
  iVar2 = -0x69320939;
  if (p != (void *)0x0) {
    iVar2 = -0x533c3ae8;
  }
  iVar3 = -0x57d7a368;
  do {
    if (iVar3 < -0x533c3ae8) {
      if (iVar3 == -0x69320939) {
        in_RCX = uVar1;
        iVar3 = -0x2f5fe393;
        if (uVar1 != 0) {
          iVar3 = 0x7d6db3df;
        }
      }
      else {
        bVar5 = iVar3 != -0x57d7a368;
        iVar3 = iVar2;
        if (bVar5) goto LAB_0040c6b0;
      }
    }
    else {
      if (iVar3 != -0x533c3ae8) {
        if (iVar3 == -0x2f5fe393) {
          in_RCX = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(s),0) + (ulong)(0x80 < s);
          iVar3 = 0x7d6db3df;
          goto LAB_0040c510;
        }
LAB_0040c6b0:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar3 = 0x749105ec;
      if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554)) / ZEXT816(s),0) <= uVar1) {
        iVar3 = 0x36313687;
      }
    }
    while (-0x2d7d782d < iVar3) {
LAB_0040c510:
      while( true ) {
        if (iVar3 < 0x749105ec) {
          if (iVar3 == -0x2d7d782c) {
            *pn = unaff_RBP;
            __size = s * unaff_RBP;
            iVar2 = 0x6b0e46c6;
            pvVar4 = (void *)0x349a4d0;
            goto LAB_0040c650;
          }
          if (iVar3 == 0x349a4d0) {
                    /* WARNING: Subroutine does not return */
            xalloc_die();
          }
          if (iVar3 == 0x36313687) {
                    /* WARNING: Subroutine does not return */
            xalloc_die();
          }
          goto LAB_0040c6b0;
        }
        if (iVar3 != 0x749105ec) break;
        unaff_RBP = (uVar1 >> 1) + 1 + uVar1;
        iVar3 = -0x2d7d782c;
      }
      if (iVar3 != 0x7d6db3df) goto LAB_0040c6b0;
      iVar3 = -0x2d7d782c;
      unaff_RBP = in_RCX;
      if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0) < in_RCX) {
        iVar3 = 0x349a4d0;
      }
    }
  } while( true );
LAB_0040c650:
  do {
    if (iVar2 == 0x2401ddd7) {
      return pvVar4;
    }
    if (iVar2 != 0x6b0e46c6) {
      if (iVar2 == -0x11a59952) {
                    /* WARNING: Subroutine does not return */
        xalloc_die();
      }
LAB_0040c6c0:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar2 = -0x6afbf8f4;
    if (p != (void *)0x0) {
      iVar2 = -0x3f62fc8d;
    }
    if (__size != 0) {
      iVar2 = -0x6afbf8f4;
    }
  } while (-0x11a59953 < iVar2);
  do {
    if (iVar2 == -0x7b869cf6) {
      iVar2 = 0x2401ddd7;
      pvVar4 = local_38;
      break;
    }
    if (iVar2 != -0x6afbf8f4) {
      if (iVar2 != -0x3f62fc8d) goto LAB_0040c6c0;
      free(p);
      iVar2 = 0x2401ddd7;
      pvVar4 = (void *)0x0;
      break;
    }
    local_38 = realloc(p,__size);
    iVar2 = -0x7b869cf6;
    if (local_38 == (void *)0x0) {
      iVar2 = -0x11a59952;
    }
    if (__size == 0) {
      iVar2 = -0x7b869cf6;
    }
  } while (iVar2 < -0x11a59952);
  goto LAB_0040c650;
}


/* WARNING: Removing unreachable block (ram,0x0040c71c) */

char * xcharalloc(size_t n)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)malloc(n);
  iVar1 = 0x4e43466e;
  do {
    if (iVar1 != 0x4e43466e) {
      if (iVar1 != -0x1e105881) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    iVar1 = -0x1a784ce1;
    if (n != 0) {
      iVar1 = -0x1e105881;
    }
    if (pcVar2 != (char *)0x0) {
      iVar1 = -0x1a784ce1;
    }
  } while (iVar1 != -0x1a784ce1);
  return pcVar2;
}


void * x2realloc(void *p,size_t *pn)

{
  void *pvVar1;
  
  pvVar1 = x2nrealloc(p,pn,1);
  return pvVar1;
}


/* WARNING: Removing unreachable block (ram,0x0040c7ce) */

void * xzalloc(size_t s)

{
  void *__s;
  int iVar1;
  
  __s = malloc(s);
  iVar1 = 0x4e43466e;
  do {
    if (iVar1 != 0x4e43466e) {
      if (iVar1 != -0x1e105881) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    iVar1 = -0x1a784ce1;
    if (s != 0) {
      iVar1 = -0x1e105881;
    }
    if (__s != (void *)0x0) {
      iVar1 = -0x1a784ce1;
    }
  } while (iVar1 != -0x1a784ce1);
  memset(__s,0,s);
  return __s;
}


/* WARNING: Removing unreachable block (ram,0x0040c87b) */

void * xcalloc(size_t n,size_t s)

{
  int iVar1;
  void *local_30;
  
  iVar1 = -0x5ecd7caa;
  while( true ) {
    if (iVar1 == -0x794dd31b) {
      return local_30;
    }
    if (iVar1 != -0x5ecd7caa) break;
    iVar1 = 0x18353572;
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0) < n) {
      iVar1 = -0x40992337;
    }
    while (-0x40992338 < iVar1) {
      if (iVar1 != 0x18353572) {
        if (iVar1 == -0x40992337) {
                    /* WARNING: Subroutine does not return */
          xalloc_die();
        }
        goto LAB_0040c8e0;
      }
      local_30 = calloc(n,s);
      iVar1 = -0x40992337;
      if (local_30 != (void *)0x0) {
        iVar1 = -0x794dd31b;
      }
    }
  }
LAB_0040c8e0:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x0040c946) */

void * xmemdup(void *p,size_t s)

{
  void *__dest;
  int iVar1;
  
  __dest = malloc(s);
  iVar1 = 0x4e43466e;
  do {
    if (iVar1 != 0x4e43466e) {
      if (iVar1 != -0x1e105881) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    iVar1 = -0x1a784ce1;
    if (s != 0) {
      iVar1 = -0x1e105881;
    }
    if (__dest != (void *)0x0) {
      iVar1 = -0x1a784ce1;
    }
  } while (iVar1 != -0x1a784ce1);
  memcpy(__dest,p,s);
  return __dest;
}


/* WARNING: Removing unreachable block (ram,0x0040ca0c) */

char * xstrdup(char *string)

{
  size_t sVar1;
  char *__dest;
  int iVar2;
  
  sVar1 = strlen(string);
  __dest = (char *)malloc(sVar1 + 1);
  iVar2 = 0x4e43466e;
  do {
    if (iVar2 != 0x4e43466e) {
      if (iVar2 != -0x1e105881) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    iVar2 = -0x1a784ce1;
    if (sVar1 + 1 != 0) {
      iVar2 = -0x1e105881;
    }
    if (__dest != (char *)0x0) {
      iVar2 = -0x1a784ce1;
    }
  } while (iVar2 != -0x1a784ce1);
  memcpy(__dest,string,sVar1 + 1);
  return __dest;
}


void xalloc_die(void)

{
  int iVar1;
  undefined uVar2;
  
  iVar1 = exit_failure;
  uVar2 = dcgettext(0,"memory exhausted",5);
  error(iVar1,0,"%s",uVar2);
                    /* WARNING: Subroutine does not return */
  abort();
}


size_t rpl_mbrtowc(wchar_t *pwc,char *s,size_t n,mbstate_t *ps)

{
  wchar_t *pwVar1;
  int iVar2;
  _Bool _Var3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  wchar_t *__pwc;
  size_t local_58;
  wchar_t local_4c;
  wchar_t *local_48;
  size_t local_40;
  wchar_t *local_38;
  
  local_48 = &local_4c;
  iVar4 = -0x699cda26;
  if (pwc != (wchar_t *)0x0) {
    iVar4 = 0x5d816138;
  }
  local_58 = 0x5d816138;
  pwVar1 = (wchar_t *)n;
  iVar2 = -0x36ad1966;
  do {
    do {
      iVar5 = iVar2;
      __pwc = pwVar1;
      pwVar1 = pwc;
      iVar2 = iVar4;
    } while (iVar5 == -0x36ad1966);
    while (-0x25b9b9c < iVar5) {
      while (iVar5 != -0x25b9b9b) {
        if (iVar5 != 0x5d816138) {
          if (iVar5 != 0x228608cf) goto LAB_0040cc10;
          *local_38 = (uint)(byte)*s;
          sVar6 = 1;
          goto LAB_0040caf4;
        }
        local_38 = __pwc;
        local_40 = mbrtowc(__pwc,s,n,(mbstate_t *)ps);
        iVar5 = -0x5917a35b;
        if (0xfffffffffffffffd < local_40) {
          iVar5 = -0x25b9b9b;
        }
        if (n == 0) {
          iVar5 = -0x5917a35b;
        }
        if (iVar5 < -0x25b9b9b) goto LAB_0040cba0;
      }
      _Var3 = hard_locale(0);
      iVar5 = 0x228608cf;
      if (_Var3) {
        iVar5 = -0x5917a35b;
      }
    }
LAB_0040cba0:
    if (iVar5 == -0x699cda26) {
      pwVar1 = &local_4c;
      iVar2 = 0x5d816138;
    }
    else {
      sVar6 = local_40;
      if (iVar5 != -0x5917a35b) {
        if (iVar5 == -0xa081879) {
          return local_58;
        }
LAB_0040cc10:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
LAB_0040caf4:
      pwVar1 = __pwc;
      iVar2 = -0xa081879;
      local_58 = sVar6;
    }
  } while( true );
}


int c_strcasecmp(char *s1,char *s2)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *in_R11;
  byte *unaff_R14;
  byte local_2d;
  uint local_2c;
  byte *local_28;
  byte *local_20;
  
  iVar7 = -0xbfafaf7;
  if (s1 != s2) {
    iVar7 = 0x37f169c9;
  }
  iVar2 = -0x48b0562;
LAB_0040cc90:
  do {
    do {
      iVar5 = iVar2;
      pbVar6 = in_R11;
      pbVar4 = unaff_R14;
      unaff_R14 = (byte *)s1;
      in_R11 = (byte *)s2;
      iVar2 = iVar7;
    } while (iVar5 == -0x48b0562);
    do {
      while (0x37f169c8 < iVar5) {
        if (iVar5 == 0x7fe82863) {
          return in_EAX;
        }
        if (iVar5 == 0x4c9291c6) {
          unaff_R14 = local_28 + 1;
          in_R11 = local_20 + 1;
          iVar2 = -0x5116a60c;
          if (local_2c == local_2d) {
            iVar2 = 0x37f169c9;
          }
          goto LAB_0040cc90;
        }
        if (iVar5 == 0x37f169c9) {
          bVar1 = *pbVar4;
          bVar3 = bVar1 + 0x20;
          if (0x19 < bVar1 - 0x41) {
            bVar3 = bVar1;
          }
          local_2d = *pbVar6;
          if (local_2d - 0x41 < 0x1a) {
            local_2d = local_2d + 0x20;
          }
          local_2c = (uint)bVar3;
          iVar5 = 0x4c9291c6;
          local_28 = pbVar4;
          local_20 = pbVar6;
          if (local_2c == 0) {
            iVar5 = -0x5116a60c;
          }
        }
      }
      if (iVar5 == -0x5116a60c) {
        in_EAX = local_2c - local_2d;
        unaff_R14 = pbVar4;
        in_R11 = pbVar6;
        iVar2 = 0x7fe82863;
        goto LAB_0040cc90;
      }
    } while (iVar5 != -0xbfafaf7);
    in_EAX = 0;
    unaff_R14 = pbVar4;
    in_R11 = pbVar6;
    iVar2 = 0x7fe82863;
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x0040ce48) */
/* WARNING: Removing unreachable block (ram,0x0040ce35) */

int close_stream(FILE *stream)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  bool bVar6;
  
  lVar4 = __fpending();
  bVar1 = *(byte *)&stream->_flags;
  iVar2 = rpl_fclose(stream);
  uVar3 = 0xcd1448c1;
LAB_0040ce80:
  do {
    if ((int)uVar3 < -0x24e2b774) {
      if (uVar3 == 0xcd1448c1) {
        uVar3 = 0xd75a892d;
        bVar6 = (bVar1 >> 5 & 1) == 0;
        goto LAB_0040ceef;
      }
      if ((uVar3 == 0xd75a892d) && (uVar3 = 0xf72e4fd2, iVar2 != 0)) {
        uVar3 = 0xdb1d488c;
      }
    }
    else {
      if (uVar3 == 0xdb1d488c) {
        uVar3 = 0x42aca365;
        bVar6 = lVar4 == 0;
        goto LAB_0040ceef;
      }
      if (uVar3 == 0xf72e4fd2) {
        uVar3 = 0x2eeb6774;
        stream = (FILE *)0x0;
      }
    }
INVALID_JUMP;
  } while ((int)uVar3 < 0x26c0a95c);
  while( true ) {
    while (0x44a9427c < (int)uVar3) {
      if (uVar3 == 0x44a9427d) {
        uVar3 = 0x74ba9d4e;
        if (iVar2 != 0) {
          uVar3 = 0x26c0a95c;
        }
        if (uVar3 < 0x26c0a95c) goto LAB_0040ce80;
      }
      else {
        if (uVar3 != 0x74ba9d4e) goto joined_r0x0040ceae;
        piVar5 = __errno_location();
        *piVar5 = 0;
        uVar3 = 0x26c0a95c;
      }
    }
    if (uVar3 != 0x26c0a95c) break;
    uVar3 = 0x2eeb6774;
    stream = (FILE *)0xffffffff;
  }
  if (uVar3 == 0x42aca365) {
    piVar5 = __errno_location();
    uVar3 = 0xf72e4fd2;
    bVar6 = *piVar5 == 9;
LAB_0040ceef:
    if (!bVar6) {
      uVar3 = 0x44a9427d;
    }
  }
  else if (uVar3 == 0x2eeb6774) {
    return (int)stream;
  }
  goto joined_r0x0040ceae;
}


/* WARNING: Removing unreachable block (ram,0x0040cf65) */

_Bool hard_locale(int category)

{
  _Bool _Var1;
  int iVar2;
  int iVar3;
  char *__s1;
  
  __s1 = setlocale(category,(char *)0x0);
  do {
    do {
      iVar3 = -0x5d86ece5;
      if (__s1 != (char *)0x0) {
        iVar3 = 0x3fe9c105;
      }
      _Var1 = true;
    } while (iVar3 == 0x449b0a96);
LAB_0040cf89:
    do {
      while (iVar3 < 0x5b14a3f1) {
        if (iVar3 != 0x3fe9c105) {
          if (iVar3 == -0x5d86ece5) {
            return _Var1;
          }
LAB_0040cff0:
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        iVar2 = strcmp(__s1,"C");
        iVar3 = 0x76cef87b;
        if (iVar2 == 0) {
          iVar3 = 0x5b14a3f1;
        }
      }
      if (iVar3 == 0x5b14a3f1) {
        iVar3 = -0x5d86ece5;
        _Var1 = false;
        goto LAB_0040cf89;
      }
      if (iVar3 != 0x76cef87b) goto LAB_0040cff0;
      iVar2 = strcmp(__s1,"POSIX");
      iVar3 = -0x5d86ece5;
      if (iVar2 == 0) {
        iVar3 = 0x5b14a3f1;
      }
      _Var1 = true;
    } while (iVar3 != 0x449b0a96);
  } while( true );
}


char * locale_charset(void)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = nl_langinfo(0xe);
  pcVar2 = "";
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
  }
  pcVar1 = "ASCII";
  if (*pcVar2 != '\0') {
    pcVar1 = pcVar2;
  }
  return pcVar1;
}


/* WARNING: Removing unreachable block (ram,0x0040d05f) */

int rpl_fclose(FILE *fp)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  __off_t _Var5;
  int unaff_EBP;
  int unaff_R12D;
  int unaff_R14D;
  bool bVar6;
  int local_38;
  
  iVar1 = fileno((FILE *)fp);
  iVar2 = -0x798aa93b;
  local_38 = in_EAX;
LAB_0040d07b:
  if (-0x6dbfd1cf < iVar2) {
    if (iVar2 == -0x6dbfd1ce) {
      piVar4 = __errno_location();
      *piVar4 = local_38;
      iVar2 = 0x3bf7039;
      unaff_EBP = -1;
      goto LAB_0040d140;
    }
    if (iVar2 != -0x57205dfb) {
      if (iVar2 != -0x2ad15f73) goto joined_r0x0040d134;
      iVar2 = __freading(fp);
      bVar6 = iVar2 == 0;
      iVar2 = 0x42677c44;
      iVar3 = -0x2a69d485;
      goto LAB_0040d12c;
    }
    unaff_R14D = fclose((FILE *)fp);
    iVar2 = 0x52f17c63;
    goto LAB_0040d140;
  }
  if (iVar2 != -0x798aa93b) {
    if (iVar2 != -0x711f28a7) goto joined_r0x0040d134;
    piVar4 = __errno_location();
    unaff_R12D = *piVar4;
    iVar2 = 0x79a6ed09;
    goto LAB_0040d140;
  }
  iVar2 = (iVar1 >> 0x1f & 0xd3b10178U) + 0xd52ea08d;
joined_r0x0040d124:
  if (-0x2a69d486 < iVar2) {
LAB_0040d140:
    do {
      if (iVar2 < 0x42677c44) {
        if (iVar2 == -0x2a69d485) {
          iVar2 = fileno((FILE *)fp);
          unaff_R12D = 0;
          _Var5 = lseek(iVar2,0,1);
          bVar6 = _Var5 == -1;
          iVar2 = 0x79a6ed09;
          iVar3 = 0x42677c44;
LAB_0040d12c:
          if (!bVar6) {
            iVar2 = iVar3;
          }
        }
        else if (iVar2 == 0x3bf7039) {
          iVar2 = 0x52f17c63;
          unaff_R14D = unaff_EBP;
        }
      }
      else {
        if (iVar2 == 0x42677c44) {
          iVar3 = rpl_fflush(fp);
          iVar2 = 0x79a6ed09;
          if (iVar3 != 0) {
            iVar2 = -0x711f28a7;
          }
          unaff_R12D = 0;
          goto joined_r0x0040d124;
        }
        if (iVar2 == 0x79a6ed09) goto LAB_0040d1aa;
        if (iVar2 == 0x52f17c63) {
          return unaff_R14D;
        }
      }
joined_r0x0040d134:
      if (iVar2 < -0x2a69d485) break;
    } while( true );
  }
  goto LAB_0040d07b;
LAB_0040d1aa:
  unaff_EBP = fclose((FILE *)fp);
  iVar2 = 0x3bf7039;
  local_38 = unaff_R12D;
  if (unaff_R12D != 0) {
    iVar2 = -0x6dbfd1ce;
  }
  goto joined_r0x0040d124;
}


int rpl_fflush(FILE *stream)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_R14D;
  
  iVar2 = 0x71c494b2;
  if (stream == (FILE *)0x0) {
    iVar2 = 0x4a84d7f1;
  }
  iVar4 = 0x69b81609;
  do {
    while (iVar3 = iVar4, 0x69b81608 < iVar3) {
      iVar4 = iVar2;
      if (iVar3 != 0x69b81609) {
        if (iVar3 != 0x71c494b2) goto LAB_0040d330;
        iVar3 = __freading(stream);
        iVar4 = 0x4a84d7f1;
        if (iVar3 != 0) {
          iVar4 = -0x544e2419;
        }
      }
    }
    if (iVar3 == -0x7b749fc5) {
      return unaff_R14D;
    }
    if (iVar3 == -0x544e2419) {
      uVar1 = stream->_flags;
      iVar4 = 0xdc522a8;
      while (iVar4 == 0xdc522a8) {
        iVar4 = 0x44a8e893;
        if ((uVar1 & 0x100) != 0) {
          iVar4 = -0x6e020ef4;
        }
        if (iVar4 == -0x6e020ef4) {
          rpl_fseeko(stream,0,1);
          iVar4 = 0x44a8e893;
        }
      }
      if (iVar4 != 0x44a8e893) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    else if (iVar3 != 0x4a84d7f1) {
LAB_0040d330:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    unaff_R14D = fflush((FILE *)stream);
    iVar4 = -0x7b749fc5;
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x0040d420) */
/* WARNING: Removing unreachable block (ram,0x0040d39b) */
/* WARNING: Removing unreachable block (ram,0x0040d4a3) */
/* WARNING: Removing unreachable block (ram,0x0040d40f) */

int rpl_fseeko(FILE *fp,off_t offset,int whence)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_R12D;
  bool bVar5;
  __off_t local_48;
  
  pcVar1 = fp->_IO_read_end;
  pcVar2 = fp->_IO_read_ptr;
  iVar3 = -0x35f2d624;
LAB_0040d3c7:
  do {
    if (-0x35f2d625 < iVar3) {
      if (iVar3 == -0x35f2d624) {
        bVar5 = pcVar1 == pcVar2;
        iVar3 = -0x488038fd;
        iVar4 = 0x348abb6c;
        goto LAB_0040d4d0;
      }
      if (iVar3 == -0x2d5535f4) {
        iVar3 = -0x6b757ac6;
        unaff_EBX = -1;
      }
      else {
joined_r0x0040d3c5:
        do {
          if (iVar3 < -0x70cdad0) goto LAB_0040d3c7;
          if (iVar3 < 0x348abb6c) {
            if (iVar3 == -0x70cdad0) {
              iVar3 = fileno((FILE *)fp);
              local_48 = lseek(iVar3,offset,whence);
              bVar5 = local_48 == -1;
              iVar3 = 0x67e73762;
              iVar4 = -0x2d5535f4;
            }
            else {
              if (iVar3 != 0x2e37a2ad) goto joined_r0x0040d3c5;
              bVar5 = fp->_IO_save_base == (char *)0x0;
              iVar3 = -0x488038fd;
              iVar4 = -0x70cdad0;
            }
LAB_0040d4d0:
            if (bVar5) {
              iVar3 = iVar4;
            }
            goto joined_r0x0040d3c5;
          }
          if (iVar3 == 0x348abb6c) {
            iVar3 = -0x488038fd;
            if (fp->_IO_write_ptr == fp->_IO_write_base) {
              iVar3 = 0x2e37a2ad;
            }
            goto joined_r0x0040d3c5;
          }
        } while (iVar3 != 0x67e73762);
        *(byte *)&fp->_flags = *(byte *)&fp->_flags & 0xef;
        fp->_offset = local_48;
        iVar3 = -0x6b757ac6;
        unaff_EBX = 0;
      }
      goto LAB_0040d3c7;
    }
    if (iVar3 != -0x6b757ac6) {
      if (iVar3 == -0x488038fd) {
        unaff_R12D = fseeko((FILE *)fp,offset,whence);
        iVar3 = -0x6febedc6;
      }
      else if (iVar3 == -0x6febedc6) {
        return unaff_R12D;
      }
      goto joined_r0x0040d3c5;
    }
    iVar3 = -0x6febedc6;
    unaff_R12D = unaff_EBX;
  } while( true );
}


int atexit(void (*__func)(void))

{
  int iVar1;
  
  iVar1 = __cxa_atexit(__func,0,__dso_handle);
  return iVar1;
}

