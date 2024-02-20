#include "decompile_ghidra_obfuscated.h"

void _dl_relocate_static_pie(void)

{
  return;
}


void usage(int status)

{
  int iVar1;
  undefined uVar2;
  char *pcVar3;
  undefined uVar4;
  
  uVar2 = stderr;
  if (status == 0) {
    uVar2 = dcgettext(0,"Usage: %s [OPTION]...\n",5);
    __printf_chk(1,uVar2,program_name);
    pcVar3 = (char *)dcgettext(0,
                               "Print the user name associated with the current effective user ID.\nSame as id -un.\n\n"
                               ,5);
    fputs_unlocked(pcVar3,stdout);
    pcVar3 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
    fputs_unlocked(pcVar3,stdout);
    pcVar3 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
    fputs_unlocked(pcVar3,stdout);
    uVar2 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar2,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar3 = setlocale(5,(char *)0x0);
    if (pcVar3 != (char *)0x0) {
      iVar1 = strncmp(pcVar3,"en_",3);
      if (iVar1 != 0) {
        pcVar3 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar3,stdout);
      }
    }
    uVar2 = dcgettext(0,"Full documentation <%s%s>\n",5);
    __printf_chk(1,uVar2,"https://www.gnu.org/software/coreutils/","whoami");
    uVar2 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
    __printf_chk(1,uVar2,"whoami"," invocation");
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  uVar4 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
  __fprintf_chk(uVar2,1,uVar4,program_name);
                    /* WARNING: Subroutine does not return */
  exit(status);
}


int main(int argc,char **argv)

{
  __uid_t __uid;
  int iVar1;
  int *piVar2;
  passwd *ppVar3;
  undefined uVar4;
  char *pcVar5;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  parse_gnu_standard_options_only
            (argc,argv,"whoami","GNU coreutils",Version,true,usage,"Richard Mlynarik",0);
  if (optind != argc) {
    uVar4 = dcgettext(0,"extra operand %s",5);
    pcVar5 = quote(argv[optind]);
    error(0,0,uVar4,pcVar5);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  piVar2 = __errno_location();
  *piVar2 = 0;
  __uid = geteuid();
  if ((__uid != 0xffffffff) || (iVar1 = *piVar2, iVar1 == 0)) {
    ppVar3 = getpwuid(__uid);
    if (ppVar3 != (passwd *)0x0) {
      puts(ppVar3->pw_name);
      return 0;
    }
    iVar1 = *piVar2;
  }
  uVar4 = dcgettext(0,"cannot find name for user ID %lu",5);
  pcVar5 = (char *)0x1;
  iVar1 = error(1,iVar1,uVar4,__uid);
  file_name = pcVar5;
  return iVar1;
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


void close_stdout(void)

{
  _Bool _Var1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  char *pcVar5;
  
  iVar2 = close_stream(stdout);
  _Var1 = ignore_EPIPE;
  if (iVar2 != 0) {
    piVar3 = __errno_location();
    if ((_Var1 == false) || (*piVar3 != 0x20)) {
      uVar4 = dcgettext(0,"write error",5);
      iVar2 = *piVar3;
      if (file_name == (char *)0x0) {
        error(0,iVar2,"%s",uVar4);
                    /* WARNING: Subroutine does not return */
        _exit(exit_failure);
      }
      pcVar5 = quotearg_colon(file_name);
      error(0,iVar2,"%s: %s",pcVar5,uVar4);
                    /* WARNING: Subroutine does not return */
      _exit(exit_failure);
    }
  }
  iVar2 = close_stream(stderr);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(exit_failure);
}


void parse_long_options(int argc,char **argv,char *command_name,char *package,char *version,
                       void (*usage_func)(int),...)

{
  undefined uVar1;
  char in_AL;
  int iVar2;
  undefined in_XMM0_Da;
  undefined in_XMM1_Da;
  undefined in_XMM2_Da;
  undefined in_XMM3_Da;
  undefined in_XMM4_Da;
  undefined in_XMM5_Da;
  undefined in_XMM6_Da;
  undefined in_XMM7_Da;
  __va_list_tag local_f8;
  undefined local_d8 [48];
  undefined local_a8;
  undefined local_98;
  undefined local_88;
  undefined local_78;
  undefined local_68;
  undefined local_58;
  undefined local_48;
  undefined local_38;
  
  uVar1 = opterr;
  if (in_AL != '\0') {
    local_a8 = in_XMM0_Da;
    local_98 = in_XMM1_Da;
    local_88 = in_XMM2_Da;
    local_78 = in_XMM3_Da;
    local_68 = in_XMM4_Da;
    local_58 = in_XMM5_Da;
    local_48 = in_XMM6_Da;
    local_38 = in_XMM7_Da;
  }
  opterr = 0;
  if (argc == 2) {
    iVar2 = getopt_long(2,argv,&DAT_00406290,long_options,0);
    if (iVar2 == 0x68) {
      (*usage_func)(0);
    }
    else if (iVar2 == 0x76) {
      local_f8.reg_save_area = local_d8;
      local_f8.overflow_arg_area = &stack0x00000008;
      local_f8.fp_offset = 0x30;
      local_f8.gp_offset = 0x30;
      version_etc_va(stdout,command_name,package,version,&local_f8);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
  }
  opterr = uVar1;
  optind = 0;
  return;
}


void parse_gnu_standard_options_only
               (int argc,char **argv,char *command_name,char *package,char *version,_Bool scan_all,
               void (*usage_func)(int),...)

{
  undefined uVar1;
  char in_AL;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined in_XMM0_Da;
  undefined in_XMM1_Da;
  undefined in_XMM2_Da;
  undefined in_XMM3_Da;
  undefined in_XMM4_Da;
  undefined in_XMM5_Da;
  undefined in_XMM6_Da;
  undefined in_XMM7_Da;
  __va_list_tag local_f8;
  undefined local_d8 [48];
  undefined local_a8;
  undefined local_98;
  undefined local_88;
  undefined local_78;
  undefined local_68;
  undefined local_58;
  undefined local_48;
  undefined local_38;
  
  uVar1 = opterr;
  if (in_AL != '\0') {
    local_a8 = in_XMM0_Da;
    local_98 = in_XMM1_Da;
    local_88 = in_XMM2_Da;
    local_78 = in_XMM3_Da;
    local_68 = in_XMM4_Da;
    local_58 = in_XMM5_Da;
    local_48 = in_XMM6_Da;
    local_38 = in_XMM7_Da;
  }
  opterr = 1;
  pcVar3 = "+";
  if (scan_all) {
    pcVar3 = "";
  }
  iVar2 = getopt_long(_argc,argv,pcVar3,long_options,0);
  if (iVar2 != -1) {
    if (iVar2 == 0x68) {
      iVar4 = 0;
    }
    else {
      iVar4 = exit_failure;
      if (iVar2 == 0x76) {
        local_f8.reg_save_area = local_d8;
        local_f8.overflow_arg_area = &stack0x00000010;
        local_f8.fp_offset = 0x30;
        local_f8.gp_offset = 0x30;
        version_etc_va(stdout,command_name,package,version,&local_f8);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    (*usage_func)(iVar4);
  }
  opterr = uVar1;
  return;
}


void set_program_name(char *argv0)

{
  int iVar1;
  char *pcVar2;
  char *__s1;
  
  if (argv0 == (char *)0x0) {
    fwrite("A NULL argv[0] was passed through an exec system call.\n",0x37,1,stderr);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar2 = strrchr(argv0,0x2f);
  __s1 = pcVar2 + 1;
  if (pcVar2 == (char *)0x0) {
    __s1 = argv0;
  }
  if (((6 < (long)__s1 - (long)argv0) && (iVar1 = strncmp(__s1 + -7,"/.libs/",7), iVar1 == 0)) &&
     (iVar1 = strncmp(__s1,"lt-",3), argv0 = __s1, iVar1 == 0)) {
    argv0 = __s1 + 3;
    program_invocation_short_name = argv0;
  }
  program_name = argv0;
  program_invocation_name = argv0;
  return;
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
  quoting_options *pqVar2;
  
  pqVar2 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar2 = o;
  }
  wVar1 = pqVar2->flags;
  pqVar2->flags = i;
  return wVar1;
}


void set_custom_quoting(quoting_options *o,char *left_quote,char *right_quote)

{
  quoting_options *pqVar1;
  
  pqVar1 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar1 = o;
  }
  pqVar1->style = custom_quoting_style;
  if ((left_quote != (char *)0x0) && (right_quote != (char *)0x0)) {
    pqVar1->left_quote = left_quote;
    pqVar1->right_quote = right_quote;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
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


/* WARNING: Type propagation algorithm not settling */

size_t quotearg_buffer_restyled
                 (char *buffer,size_t buffersize,char *arg,size_t argsize,
                 enum quoting_style quoting_style,wchar_t flags,uint *quote_these_too,char *left_quote,
                 char *right_quote)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  ushort **ppuVar9;
  size_t sVar10;
  ulong uVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  enum quoting_style qVar15;
  bool bVar16;
  ulong uVar17;
  bool bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  ulong uVar22;
  ulong uVar23;
  bool bVar24;
  bool bVar25;
  ulong local_b8;
  size_t local_a8;
  char *local_a0;
  ulong local_88;
  char *local_80;
  char *local_78;
  mbstate_t local_70;
  uint local_64;
  uint local_60;
  wchar_t local_5c;
  char *local_58;
  ulong local_50;
  ulong local_48;
  size_t local_40;
  ulong local_38;
  
  local_78 = right_quote;
  local_80 = left_quote;
  local_40 = __ctype_get_mb_cur_max();
  uVar23 = (ulong)((uint)flags >> 1) & 1;
  local_60 = flags & 1;
  local_64 = flags & 4;
  bVar21 = 1;
  local_88 = 0;
  local_a0 = (char *)0x0;
  local_a8 = 0;
  bVar16 = false;
  local_48 = 0;
  local_b8 = argsize;
  bVar5 = false;
  do {
    if (custom_quoting_style < quoting_style) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar22 = 0;
    uVar14 = 0;
    qVar15 = escape_quoting_style;
    bVar18 = true;
    bVar24 = bVar5;
    switch(quoting_style) {
    case literal_quoting_style:
      uVar22 = 0;
      uVar14 = 0;
      qVar15 = literal_quoting_style;
      bVar18 = bVar5;
      break;
    case shell_escape_quoting_style:
      bVar5 = true;
    case shell_quoting_style:
      uVar23 = 1;
    case shell_escape_always_quoting_style:
      bVar24 = true;
      if ((uVar23 & 1) != 0) {
        bVar24 = bVar5;
      }
    case shell_always_quoting_style:
      qVar15 = shell_always_quoting_style;
      if ((uVar23 & 1) == 0) {
        if (buffersize != 0) {
          *buffer = '\'';
        }
        uVar22 = 1;
      }
      else {
        uVar22 = 0;
      }
      local_a0 = "\'";
      goto LAB_00402de0;
    case c_quoting_style:
      qVar15 = c_quoting_style;
      if ((uVar23 & 1) == 0) {
        if (buffersize != 0) {
          *buffer = '\"';
        }
        uVar22 = 1;
      }
      else {
        uVar22 = 0;
      }
      local_a0 = "\"";
      bVar24 = true;
LAB_00402de0:
      local_a8 = 1;
      uVar14 = uVar23 & 0xff;
      bVar18 = bVar24;
      break;
    case c_maybe_quoting_style:
      uVar22 = 0;
      local_a0 = "\"";
      local_a8 = 1;
      uVar14 = 1;
      qVar15 = c_quoting_style;
      bVar18 = true;
      break;
    case escape_quoting_style:
      break;
    default:
      local_80 = gettext_quote("`",quoting_style);
      uVar14 = (ulong)quoting_style;
      local_78 = gettext_quote("\'",quoting_style);
    case custom_quoting_style:
      if ((uVar23 & 1) == 0) {
        uVar22 = 0;
        cVar2 = *local_80;
        while (cVar2 != '\0') {
          if (uVar22 < buffersize) {
            buffer[uVar22] = cVar2;
          }
          lVar4 = uVar22 + 1;
          uVar22 = uVar22 + 1;
          cVar2 = local_80[lVar4];
        }
      }
      else {
        uVar22 = 0;
      }
      local_a8 = strlen(local_78);
      local_a0 = local_78;
      uVar14 = uVar14 & 0xffffffffffffff00 | uVar23 & 0xff;
      qVar15 = quoting_style;
      bVar18 = true;
    }
    quoting_style = qVar15;
    bVar5 = quoting_style != shell_always_quoting_style;
    bVar3 = (byte)uVar14;
    bVar24 = (uVar14 & 1) != 0;
    uVar23 = 0;
    local_38 = uVar14;
    if (local_b8 == 0xffffffffffffffff) goto LAB_00402e80;
LAB_00402e70:
    uVar13 = buffersize;
    if (uVar23 != local_b8) {
LAB_00402e8b:
      if ((bVar5 & bVar18 & local_a8 != 0) == 0) {
LAB_00402ed3:
        bVar25 = false;
      }
      else {
        if ((1 < local_a8) && (local_b8 == 0xffffffffffffffff)) {
          local_b8 = strlen(arg);
        }
        if (local_b8 < uVar23 + local_a8) goto LAB_00402ed3;
        iVar8 = memcmp(arg + uVar23,local_a0,local_a8);
        bVar25 = iVar8 == 0;
        if ((bVar25) && ((uVar14 & 1) != 0)) goto LAB_0040388a;
      }
      uVar17 = (ulong)(byte)arg[uVar23];
      bVar20 = 0;
      bVar19 = 1;
      bVar12 = 0x61;
      bVar6 = 0x6e;
      uVar13 = uVar22;
      uVar11 = uVar23;
      switch(uVar17) {
      case 0:
        if (bVar18 == false) {
          if (local_60 == 0) {
            uVar17 = 0;
            goto LAB_004035c4;
          }
          goto LAB_004033ce;
        }
        if ((uVar14 & 1) == 0) {
          if ((quoting_style == shell_always_quoting_style) && (!bVar16)) {
            if (uVar22 < buffersize) {
              buffer[uVar22] = '\'';
            }
            if (uVar22 + 1 < buffersize) {
              buffer[uVar22 + 1] = '$';
            }
            if (uVar22 + 2 < buffersize) {
              buffer[uVar22 + 2] = '\'';
            }
            uVar22 = uVar22 + 3;
            bVar16 = true;
          }
          if (uVar22 < buffersize) {
            buffer[uVar22] = '\\';
          }
          uVar13 = uVar22 + 1;
          bVar7 = true;
          uVar17 = 0x30;
          if (((quoting_style == shell_always_quoting_style) || (local_b8 <= uVar23 + 1)) ||
             (9 < (byte)(arg[uVar23 + 1] - 0x30U))) goto LAB_004035c6;
          if (uVar13 < buffersize) {
            buffer[uVar13] = '0';
          }
          if (uVar22 + 2 < buffersize) {
            buffer[uVar22 + 2] = '0';
          }
          uVar22 = uVar22 + 3;
          bVar20 = 0;
          goto joined_r0x00403144;
        }
        goto LAB_0040388a;
      default:
        local_50 = buffersize;
        if (local_40 == 1) {
          ppuVar9 = __ctype_b_loc();
          bVar20 = (byte)((*ppuVar9)[uVar17] >> 0xe) & 1;
          uVar13 = 1;
        }
        else {
          local_70 = (mbstate_t)0x0;
          if (local_b8 == 0xffffffffffffffff) {
            local_b8 = strlen(arg);
          }
          local_58 = arg + uVar23;
          bVar20 = 1;
          uVar13 = 0;
          do {
            uVar11 = uVar13 + uVar23;
            sVar10 = rpl_mbrtowc(&local_5c,arg + uVar11,local_b8 - uVar11,&local_70);
            if (sVar10 == 0) break;
            if (sVar10 == 0xffffffffffffffff) {
              bVar20 = 0;
              break;
            }
            if (sVar10 == 0xfffffffffffffffe) {
              if (uVar11 < local_b8) goto LAB_00403775;
              bVar20 = 0;
              break;
            }
            if ((1 < sVar10 & quoting_style == shell_always_quoting_style & bVar3 & 1) == 1) {
              uVar11 = 1;
              do {
                if (((int)local_58[uVar11 + uVar13] - 0x5bU < 0x22) &&
                   ((0x20000002bU >> ((ulong)((int)local_58[uVar11 + uVar13] - 0x5bU) & 0x3f) & 1)
                    != 0)) {
                  quoting_style = shell_always_quoting_style;
                  buffersize = local_50;
                  goto LAB_0040388a;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < sVar10);
            }
            iVar8 = iswprint(local_5c);
            if (iVar8 == 0) {
              bVar20 = 0;
            }
            uVar13 = uVar13 + sVar10;
            iVar8 = mbsinit((mbstate_t *)&local_70);
          } while (iVar8 == 0);
        }
        goto LAB_004031d9;
      case 7:
        break;
      case 8:
        bVar12 = 0x62;
        break;
      case 9:
        bVar6 = 0x74;
      case 10:
        goto switchD_00402eef_caseD_a;
      case 0xb:
        bVar12 = 0x76;
        break;
      case 0xc:
        bVar12 = 0x66;
        break;
      case 0xd:
        bVar6 = 0x72;
switchD_00402eef_caseD_a:
        bVar12 = bVar6;
        if (bVar24 && !bVar5) {
LAB_0040387b:
          quoting_style = shell_always_quoting_style;
          goto LAB_0040388a;
        }
        break;
      case 0x20:
        goto switchD_00402eef_caseD_20;
      case 0x21:
      case 0x22:
      case 0x24:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x5b:
      case 0x5e:
      case 0x60:
      case 0x7c:
        goto switchD_00402eef_caseD_21;
      case 0x23:
      case 0x7e:
        if (uVar23 != 0) goto LAB_004035c4;
switchD_00402eef_caseD_20:
        bVar20 = 1;
switchD_00402eef_caseD_21:
        if (bVar24 && !bVar5) goto LAB_0040387b;
        bVar7 = false;
        goto joined_r0x00403144;
      case 0x25:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5d:
      case 0x5f:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
        goto switchD_00402eef_caseD_25;
      case 0x27:
        uVar17 = 0x27;
        local_48 = 1;
        uVar23 = buffersize;
        if (quoting_style != shell_always_quoting_style) {
LAB_0040313a:
          bVar7 = false;
          buffersize = uVar23;
          bVar20 = 1;
          goto joined_r0x00403144;
        }
        if ((uVar14 & 1) == 0) {
          if (local_88 == 0 && buffersize != 0) {
            uVar23 = 0;
            local_88 = buffersize;
          }
          if (uVar22 < uVar23) {
            buffer[uVar22] = '\'';
          }
          if (uVar22 + 1 < uVar23) {
            buffer[uVar22 + 1] = '\\';
          }
          if (uVar22 + 2 < uVar23) {
            buffer[uVar22 + 2] = '\'';
          }
          uVar22 = uVar22 + 3;
          bVar16 = false;
          goto LAB_0040313a;
        }
        goto LAB_0040387b;
      case 0x3f:
        uVar17 = 0x3f;
        if (quoting_style != c_quoting_style) {
          if ((quoting_style == shell_always_quoting_style) && ((uVar14 & 1) != 0))
          goto LAB_0040387b;
LAB_004035c4:
          bVar7 = false;
          goto LAB_004035c6;
        }
        if ((local_64 == 0) || ((uVar1 = uVar23 + 2, local_b8 <= uVar1 || (arg[uVar23 + 1] != '?')))
           ) goto LAB_004035c4;
        bVar20 = arg[uVar1];
        bVar7 = false;
        if (0x3e < (uint)(int)(char)bVar20) goto LAB_004035c6;
        if ((0x7000a38200000000U >> ((ulong)(uint)(int)(char)bVar20 & 0x3f) & 1) != 0) {
          if ((uVar14 & 1) != 0) {
            quoting_style = c_quoting_style;
            goto LAB_0040388a;
          }
          if (uVar22 < buffersize) {
            buffer[uVar22] = '?';
          }
          if (uVar22 + 1 < buffersize) {
            buffer[uVar22 + 1] = '\"';
          }
          if (uVar22 + 2 < buffersize) {
            buffer[uVar22 + 2] = '\"';
          }
          if (uVar22 + 3 < buffersize) {
            buffer[uVar22 + 3] = '?';
          }
          uVar22 = uVar22 + 4;
          uVar17 = (ulong)bVar20;
          uVar23 = uVar1;
        }
        bVar20 = 0;
        goto joined_r0x004035b9;
      case 0x5c:
        if (quoting_style == shell_always_quoting_style) {
          if ((uVar14 & 1) != 0) goto LAB_0040387b;
        }
        else {
          bVar6 = 0x5c;
          if ((bVar18 & bVar3 & local_a8 != 0) == 0) goto switchD_00402eef_caseD_a;
        }
        bVar7 = false;
        bVar12 = 0x5c;
        bVar20 = 0;
        bVar6 = 0x5c;
        bVar19 = 0;
        if (bVar16) goto LAB_004032b2;
        goto LAB_004032de;
      case 0x7b:
      case 0x7d:
        bVar7 = false;
        if (local_b8 == 0xffffffffffffffff) {
          if ((uVar23 == 0) && (arg[1] == '\0')) goto switchD_00402eef_caseD_20;
          local_b8 = 0xffffffffffffffff;
          bVar7 = false;
        }
        else if ((uVar23 == 0) && (local_b8 == 1)) goto switchD_00402eef_caseD_20;
LAB_004035c6:
        uVar22 = uVar13;
        bVar20 = 0;
        goto joined_r0x00403144;
      }
      bVar19 = 0;
      bVar20 = 0;
      if (bVar18 == false) {
switchD_00402eef_caseD_25:
        bVar7 = false;
        bVar20 = bVar19;
        goto joined_r0x00403144;
      }
      goto joined_r0x004032f8;
    }
LAB_004037bc:
    local_b8 = uVar23;
    if (((uVar14 & 1) != 0) &&
       (buffersize = uVar13, quoting_style == shell_always_quoting_style && uVar22 == 0)) {
LAB_0040388a:
      qVar15 = shell_escape_always_quoting_style;
      if (bVar18 == false) {
        qVar15 = quoting_style;
      }
      if (quoting_style != shell_always_quoting_style) {
        qVar15 = quoting_style;
      }
      sVar10 = quotearg_buffer_restyled
                         (buffer,buffersize,arg,local_b8,qVar15,flags & 0xfffffffd,(uint *)0x0,
                          local_80,local_78);
      return sVar10;
    }
    if (((local_48 & 1) == 0) || (quoting_style != shell_always_quoting_style || (uVar14 & 1) != 0))
    {
LAB_0040382e:
      if ((local_a0 != (char *)0x0) && ((uVar14 & 1) == 0)) {
        cVar2 = *local_a0;
        while (cVar2 != '\0') {
          local_a0 = local_a0 + 1;
          if (uVar22 < uVar13) {
            buffer[uVar22] = cVar2;
          }
          uVar22 = uVar22 + 1;
          cVar2 = *local_a0;
        }
      }
      if (uVar13 <= uVar22) {
        return uVar22;
      }
      buffer[uVar22] = '\0';
      return uVar22;
    }
    if (bVar21 != 0) {
      sVar10 = quotearg_buffer_restyled
                         (buffer,local_88,arg,local_b8,c_quoting_style,flags,quote_these_too,
                          local_80,local_78);
      return sVar10;
    }
    if ((local_88 == 0) ||
       (uVar23 = local_38 & 0xffffffff, buffersize = local_88, bVar5 = bVar18, uVar13 != 0))
    goto LAB_0040382e;
  } while( true );
  while (uVar11 = uVar23 + 1 + uVar13, uVar13 = uVar13 + 1, uVar11 < local_b8) {
LAB_00403775:
    if (local_58[uVar13] == '\0') {
      bVar20 = 0;
      goto LAB_004031d9;
    }
  }
  bVar20 = 0;
LAB_004031d9:
  bVar6 = bVar20 | !bVar18;
  buffersize = local_50;
  if ((1 < uVar13) || (bVar6 == 0)) {
    uVar13 = uVar13 + uVar23;
    bVar7 = false;
    if (bVar6 != 0) goto LAB_00403726;
    while ((uVar14 & 1) == 0) {
      if ((quoting_style == shell_always_quoting_style) && (!bVar16)) {
        if (uVar22 < local_50) {
          buffer[uVar22] = '\'';
        }
        if (uVar22 + 1 < local_50) {
          buffer[uVar22 + 1] = '$';
        }
        if (uVar22 + 2 < local_50) {
          buffer[uVar22 + 2] = '\'';
        }
        uVar22 = uVar22 + 3;
        bVar16 = true;
      }
      if (uVar22 < local_50) {
        buffer[uVar22] = '\\';
      }
      if (uVar22 + 1 < local_50) {
        buffer[uVar22 + 1] = (byte)(uVar17 >> 6) | 0x30;
      }
      if (uVar22 + 2 < local_50) {
        buffer[uVar22 + 2] = (byte)(uVar17 >> 3) & 7 | 0x30;
      }
      uVar22 = uVar22 + 3;
      uVar17 = uVar17 & 0xffffffffffffff07 | 0x30;
      bVar7 = true;
      uVar11 = uVar23;
      while( true ) {
        bVar12 = (byte)uVar17;
        uVar23 = uVar11 + 1;
        if (uVar13 <= uVar23) goto LAB_004032ac;
        if ((bVar16) && (!bVar7)) {
          if (uVar22 < local_50) {
            buffer[uVar22] = '\'';
          }
          if (uVar22 + 1 < local_50) {
            buffer[uVar22 + 1] = '\'';
          }
          uVar22 = uVar22 + 2;
          bVar16 = false;
        }
        if (uVar22 < local_50) {
          buffer[uVar22] = bVar12;
        }
        uVar22 = uVar22 + 1;
        uVar17 = (ulong)(byte)arg[uVar11 + 1];
        if (bVar6 == 0) break;
LAB_00403726:
        uVar11 = uVar23;
        if (bVar25) {
          if (uVar22 < local_50) {
            buffer[uVar22] = '\\';
          }
          uVar22 = uVar22 + 1;
          bVar25 = false;
        }
      }
    }
    goto LAB_0040388a;
  }
joined_r0x004035b9:
  bVar7 = false;
  uVar11 = uVar23;
joined_r0x00403144:
  bVar12 = (byte)uVar17;
  uVar23 = uVar11;
  if ((bVar5 & bVar18) == 0) {
    if ((quote_these_too != (uint *)0x0 & bVar3 & 1) != 0) goto LAB_00403267;
LAB_004032a0:
    if (!bVar25) goto LAB_004032ac;
joined_r0x004032f8:
    if ((uVar14 & 1) != 0) goto LAB_0040388a;
    if ((quoting_style == shell_always_quoting_style) && (!bVar16)) {
      if (uVar22 < buffersize) {
        buffer[uVar22] = '\'';
      }
      if (uVar22 + 1 < buffersize) {
        buffer[uVar22 + 1] = '$';
      }
      if (uVar22 + 2 < buffersize) {
        buffer[uVar22 + 2] = '\'';
      }
      uVar22 = uVar22 + 3;
      bVar16 = true;
    }
    if (uVar22 < buffersize) {
      buffer[uVar22] = '\\';
    }
    uVar22 = uVar22 + 1;
    if (buffersize <= uVar22) goto LAB_004033c2;
  }
  else {
    if (quote_these_too == (uint *)0x0) goto LAB_004032a0;
LAB_00403267:
    if ((bVar25) || ((1 << (bVar12 & 0x1f) & quote_these_too[uVar17 >> 5]) != 0))
    goto joined_r0x004032f8;
LAB_004032ac:
    uVar23 = uVar11;
    bVar6 = bVar12;
    bVar19 = bVar20;
    if (bVar16) {
LAB_004032b2:
      bVar20 = bVar19;
      bVar12 = bVar6;
      if (!bVar7) {
        if (uVar22 < buffersize) {
          buffer[uVar22] = '\'';
        }
        if (uVar22 + 1 < buffersize) {
          buffer[uVar22 + 1] = '\'';
        }
        uVar22 = uVar22 + 2;
        bVar16 = false;
      }
    }
LAB_004032de:
    if (buffersize <= uVar22) goto LAB_004033c2;
  }
  buffer[uVar22] = bVar12;
LAB_004033c2:
  uVar22 = uVar22 + 1;
  bVar21 = -bVar20 & bVar21;
LAB_004033ce:
  uVar23 = uVar23 + 1;
  if (local_b8 != 0xffffffffffffffff) goto LAB_00402e70;
LAB_00402e80:
  if (arg[uVar23] == '\0') {
    uVar23 = 0xffffffffffffffff;
    uVar13 = buffersize;
    goto LAB_004037bc;
  }
  goto LAB_00402e8b;
}


char * quotearg_alloc(char *arg,size_t argsize,quoting_options *o)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  char *buffer;
  wchar_t flags;
  quoting_options *pqVar4;
  wchar_t e;
  
  pqVar4 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar4 = o;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  flags = pqVar4->flags | 1;
  sVar3 = quotearg_buffer_restyled
                    ((char *)0x0,0,arg,argsize,pqVar4->style,flags,pqVar4->quote_these_too,
                     pqVar4->left_quote,pqVar4->right_quote);
  buffer = (char *)xmalloc(sVar3 + 1);
  quotearg_buffer_restyled
            (buffer,sVar3 + 1,arg,argsize,pqVar4->style,flags,pqVar4->quote_these_too,
             pqVar4->left_quote,pqVar4->right_quote);
  *piVar2 = iVar1;
  return buffer;
}


char * quotearg_alloc_mem(char *arg,size_t argsize,size_t *size,quoting_options *o)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  char *buffer;
  wchar_t flags;
  quoting_options *pqVar4;
  wchar_t e;
  
  pqVar4 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar4 = o;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  flags = (uint)(size == (size_t *)0x0) | pqVar4->flags;
  sVar3 = quotearg_buffer_restyled
                    ((char *)0x0,0,arg,argsize,pqVar4->style,flags,pqVar4->quote_these_too,
                     pqVar4->left_quote,pqVar4->right_quote);
  buffer = (char *)xmalloc(sVar3 + 1);
  quotearg_buffer_restyled
            (buffer,sVar3 + 1,arg,argsize,pqVar4->style,flags,pqVar4->quote_these_too,
             pqVar4->left_quote,pqVar4->right_quote);
  *piVar2 = iVar1;
  if (size != (size_t *)0x0) {
    *size = sVar3;
  }
  return buffer;
}


void quotearg_free(void)

{
  slotvec *__ptr;
  long lVar1;
  char **ppcVar2;
  
  __ptr = slotvec;
  if (L'\x01' < nslots) {
    ppcVar2 = &slotvec[1].val;
    lVar1 = 1;
    do {
      free(*ppcVar2);
      lVar1 = lVar1 + 1;
      ppcVar2 = ppcVar2 + 2;
    } while (lVar1 < nslots);
  }
  if (__ptr->val != slot0) {
    free(__ptr->val);
    slotvec0.size = 0x100;
    slotvec0.val = slot0;
  }
  if (__ptr != &slotvec0) {
    free(__ptr);
    slotvec = &slotvec0;
  }
  nslots = L'\x01';
  return;
}


char * quotearg_n(wchar_t n,char *arg)

{
  char *pcVar1;
  
  pcVar1 = quotearg_n_options(n,arg,0xffffffffffffffff,&default_quoting_options);
  return pcVar1;
}


char * quotearg_n_options(wchar_t n,char *arg,size_t argsize,quoting_options *options)

{
  int iVar1;
  size_t buffersize;
  slotvec *psVar2;
  int *piVar3;
  slotvec *psVar4;
  size_t sVar5;
  char *buffer;
  wchar_t flags;
  
  piVar3 = __errno_location();
  psVar2 = slotvec;
  if (n < L'\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = *piVar3;
  psVar4 = slotvec;
  if (nslots <= n) {
    if (n == L'\x7fffffff') {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    psVar4 = (struct slotvec *)0x0;
    if (slotvec != &slotvec0) {
      psVar4 = slotvec;
    }
    psVar4 = (struct slotvec *)xrealloc(psVar4,(long)n * 0x10 + 0x10);
    slotvec = psVar4;
    if (psVar2 == &slotvec0) {
      *psVar4 = slotvec0;
    }
    memset(psVar4 + nslots,0,((long)(n + L'\x01') - (long)nslots) * 0x10);
    nslots = n + L'\x01';
  }
  buffersize = psVar4[n].size;
  buffer = psVar4[n].val;
  flags = options->flags | 1;
  sVar5 = quotearg_buffer_restyled
                    (buffer,buffersize,arg,argsize,options->style,flags,options->quote_these_too,
                     options->left_quote,options->right_quote);
  if (buffersize <= sVar5) {
    sVar5 = sVar5 + 1;
    psVar4[n].size = sVar5;
    if (buffer != slot0) {
      free(buffer);
    }
    buffer = (char *)xmalloc(sVar5);
    psVar4[n].val = buffer;
    quotearg_buffer_restyled
              (buffer,sVar5,arg,argsize,options->style,flags,options->quote_these_too,
               options->left_quote,options->right_quote);
  }
  *piVar3 = iVar1;
  return buffer;
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


char * quotearg_n_style(wchar_t n,enum quoting_style s,char *arg)

{
  char *pcVar1;
  undefined local_38 [44];
  undefined uStack_c;
  undefined uStack_8;
  undefined local_4;
  
  if (s != custom_quoting_style) {
    local_4 = 0;
    local_38._36_4_ = 0;
    local_38._40_4_ = 0;
    uStack_c = 0;
    uStack_8 = 0;
    local_38._20_4_ = 0;
    local_38._24_4_ = 0;
    local_38._28_4_ = 0;
    local_38._32_4_ = 0;
    local_38._4_4_ = 0;
    local_38._8_4_ = 0;
    local_38._12_4_ = 0;
    local_38._16_4_ = 0;
    local_38._0_4_ = s;
    pcVar1 = quotearg_n_options(n,arg,0xffffffffffffffff,(quoting_options *)local_38);
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


char * quotearg_n_style_mem(wchar_t n,enum quoting_style s,char *arg,size_t argsize)

{
  char *pcVar1;
  undefined local_38 [44];
  undefined uStack_c;
  undefined uStack_8;
  undefined local_4;
  
  if (s != custom_quoting_style) {
    local_4 = 0;
    local_38._36_4_ = 0;
    local_38._40_4_ = 0;
    uStack_c = 0;
    uStack_8 = 0;
    local_38._20_4_ = 0;
    local_38._24_4_ = 0;
    local_38._28_4_ = 0;
    local_38._32_4_ = 0;
    local_38._4_4_ = 0;
    local_38._8_4_ = 0;
    local_38._12_4_ = 0;
    local_38._16_4_ = 0;
    local_38._0_4_ = s;
    pcVar1 = quotearg_n_options(n,arg,argsize,(quoting_options *)local_38);
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


char * quotearg_style(enum quoting_style s,char *arg)

{
  char *pcVar1;
  undefined local_38 [44];
  undefined uStack_c;
  undefined uStack_8;
  undefined local_4;
  
  if (s != custom_quoting_style) {
    local_4 = 0;
    local_38._36_4_ = 0;
    local_38._40_4_ = 0;
    uStack_c = 0;
    uStack_8 = 0;
    local_38._20_4_ = 0;
    local_38._24_4_ = 0;
    local_38._28_4_ = 0;
    local_38._32_4_ = 0;
    local_38._4_4_ = 0;
    local_38._8_4_ = 0;
    local_38._12_4_ = 0;
    local_38._16_4_ = 0;
    local_38._0_4_ = s;
    pcVar1 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,(quoting_options *)local_38);
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


char * quotearg_style_mem(enum quoting_style s,char *arg,size_t argsize)

{
  char *pcVar1;
  undefined local_38 [44];
  undefined uStack_c;
  undefined uStack_8;
  undefined local_4;
  
  if (s != custom_quoting_style) {
    local_4 = 0;
    local_38._36_4_ = 0;
    local_38._40_4_ = 0;
    uStack_c = 0;
    uStack_8 = 0;
    local_38._20_4_ = 0;
    local_38._24_4_ = 0;
    local_38._28_4_ = 0;
    local_38._32_4_ = 0;
    local_38._4_4_ = 0;
    local_38._8_4_ = 0;
    local_38._12_4_ = 0;
    local_38._16_4_ = 0;
    local_38._0_4_ = s;
    pcVar1 = quotearg_n_options(L'\0',arg,argsize,(quoting_options *)local_38);
    return pcVar1;
  }
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


/* WARNING: Could not reconcile some variable overlaps */

char * quotearg_n_style_colon(wchar_t n,enum quoting_style s,char *arg)

{
  char *pcVar1;
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48;
  undefined local_44;
  undefined local_38;
  undefined uStack_34;
  undefined uStack_30;
  undefined uStack_2c;
  undefined local_28;
  undefined uStack_24;
  undefined uStack_20;
  undefined uStack_1c;
  undefined local_18;
  undefined uStack_14;
  undefined uStack_10;
  undefined uStack_c;
  undefined local_8;
  
  local_58 = ZEXT816(0);
  local_68 = ZEXT816(0);
  local_78 = ZEXT816(0);
  local_48 = 0;
  if (s != custom_quoting_style) {
    local_8 = 0;
    local_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_44 = 0;
    local_58._0_12_ = ZEXT412(0) << 0x40;
    local_48 = 0;
    local_68._0_12_ = ZEXT412(0) << 0x40;
    local_58._4_12_ = local_58._0_12_ >> 0x20 & (undefined  [12])0xffffffffffffffff;
    local_58 = ZEXT1216(local_58._4_12_) << 0x20;
    local_68._4_12_ = local_68._0_12_ >> 0x20 & (undefined  [12])0xffffffffffffffff;
    local_68 = ZEXT1216(local_68._4_12_) << 0x20;
    local_78 = ZEXT416(s) | (undefined  [16])0x400000000000000;
    pcVar1 = quotearg_n_options(n,arg,0xffffffffffffffff,(quoting_options *)local_78);
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


char * quotearg_n_custom(wchar_t n,char *left_quote,char *right_quote,char *arg)

{
  char *pcVar1;
  quoting_options local_38;
  
  local_38.right_quote = default_quoting_options.right_quote;
  local_38.quote_these_too[6] = default_quoting_options.quote_these_too[6];
  local_38.quote_these_too[7] = default_quoting_options.quote_these_too[7];
  local_38.left_quote =
       (char *)CONCAT44(default_quoting_options.left_quote._4_4_,
                        default_quoting_options.left_quote._0_4_);
  local_38.quote_these_too[2] = default_quoting_options.quote_these_too[2];
  local_38.quote_these_too[3] = default_quoting_options.quote_these_too[3];
  local_38.quote_these_too[4] = default_quoting_options.quote_these_too[4];
  local_38.quote_these_too[5] = default_quoting_options.quote_these_too[5];
  local_38.flags = default_quoting_options.flags;
  local_38.quote_these_too[0] = default_quoting_options.quote_these_too[0];
  local_38.quote_these_too[1] = default_quoting_options.quote_these_too[1];
  local_38.style = custom_quoting_style;
  if ((left_quote != (char *)0x0) && (right_quote != (char *)0x0)) {
    local_38.left_quote = left_quote;
    local_38.right_quote = right_quote;
    pcVar1 = quotearg_n_options(n,arg,0xffffffffffffffff,&local_38);
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


char * quotearg_n_custom_mem(wchar_t n,char *left_quote,char *right_quote,char *arg,size_t argsize)

{
  char *pcVar1;
  quoting_options local_38;
  
  local_38.right_quote = default_quoting_options.right_quote;
  local_38.quote_these_too[6] = default_quoting_options.quote_these_too[6];
  local_38.quote_these_too[7] = default_quoting_options.quote_these_too[7];
  local_38.left_quote =
       (char *)CONCAT44(default_quoting_options.left_quote._4_4_,
                        default_quoting_options.left_quote._0_4_);
  local_38.quote_these_too[2] = default_quoting_options.quote_these_too[2];
  local_38.quote_these_too[3] = default_quoting_options.quote_these_too[3];
  local_38.quote_these_too[4] = default_quoting_options.quote_these_too[4];
  local_38.quote_these_too[5] = default_quoting_options.quote_these_too[5];
  local_38.flags = default_quoting_options.flags;
  local_38.quote_these_too[0] = default_quoting_options.quote_these_too[0];
  local_38.quote_these_too[1] = default_quoting_options.quote_these_too[1];
  local_38.style = custom_quoting_style;
  if ((left_quote != (char *)0x0) && (right_quote != (char *)0x0)) {
    local_38.left_quote = left_quote;
    local_38.right_quote = right_quote;
    pcVar1 = quotearg_n_options(n,arg,argsize,&local_38);
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


char * quotearg_custom(char *left_quote,char *right_quote,char *arg)

{
  char *pcVar1;
  quoting_options local_38;
  
  local_38.right_quote = default_quoting_options.right_quote;
  local_38.quote_these_too[6] = default_quoting_options.quote_these_too[6];
  local_38.quote_these_too[7] = default_quoting_options.quote_these_too[7];
  local_38.left_quote =
       (char *)CONCAT44(default_quoting_options.left_quote._4_4_,
                        default_quoting_options.left_quote._0_4_);
  local_38.quote_these_too[2] = default_quoting_options.quote_these_too[2];
  local_38.quote_these_too[3] = default_quoting_options.quote_these_too[3];
  local_38.quote_these_too[4] = default_quoting_options.quote_these_too[4];
  local_38.quote_these_too[5] = default_quoting_options.quote_these_too[5];
  local_38.flags = default_quoting_options.flags;
  local_38.quote_these_too[0] = default_quoting_options.quote_these_too[0];
  local_38.quote_these_too[1] = default_quoting_options.quote_these_too[1];
  local_38.style = custom_quoting_style;
  if ((left_quote != (char *)0x0) && (right_quote != (char *)0x0)) {
    local_38.left_quote = left_quote;
    local_38.right_quote = right_quote;
    pcVar1 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,&local_38);
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


char * quotearg_custom_mem(char *left_quote,char *right_quote,char *arg,size_t argsize)

{
  char *pcVar1;
  quoting_options local_38;
  
  local_38.right_quote = default_quoting_options.right_quote;
  local_38.quote_these_too[6] = default_quoting_options.quote_these_too[6];
  local_38.quote_these_too[7] = default_quoting_options.quote_these_too[7];
  local_38.left_quote =
       (char *)CONCAT44(default_quoting_options.left_quote._4_4_,
                        default_quoting_options.left_quote._0_4_);
  local_38.quote_these_too[2] = default_quoting_options.quote_these_too[2];
  local_38.quote_these_too[3] = default_quoting_options.quote_these_too[3];
  local_38.quote_these_too[4] = default_quoting_options.quote_these_too[4];
  local_38.quote_these_too[5] = default_quoting_options.quote_these_too[5];
  local_38.flags = default_quoting_options.flags;
  local_38.quote_these_too[0] = default_quoting_options.quote_these_too[0];
  local_38.quote_these_too[1] = default_quoting_options.quote_these_too[1];
  local_38.style = custom_quoting_style;
  if ((left_quote != (char *)0x0) && (right_quote != (char *)0x0)) {
    local_38.left_quote = left_quote;
    local_38.right_quote = right_quote;
    pcVar1 = quotearg_n_options(L'\0',arg,argsize,&local_38);
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
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
  char *pcVar1;
  byte *pbVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar1 = (char *)dcgettext(0,msgid,5);
  if (pcVar1 != msgid) {
    return pcVar1;
  }
  pbVar2 = (byte *)locale_charset();
  if ((*pbVar2 & 0xdf) == 0x47) {
    if (((((pbVar2[1] & 0xdf) == 0x42) && (pbVar2[2] == 0x31)) && (pbVar2[3] == 0x38)) &&
       (((pbVar2[4] == 0x30 && (pbVar2[5] == 0x33)) && ((pbVar2[6] == 0x30 && (pbVar2[7] == 0))))))
    {
      bVar4 = *msgid == '`';
      pcVar3 = &DAT_00406884;
      pcVar1 = &DAT_00406888;
      goto LAB_004044bb;
    }
  }
  else if ((((*pbVar2 & 0xdf) == 0x55) && ((pbVar2[1] & 0xdf) == 0x54)) &&
          (((pbVar2[2] & 0xdf) == 0x46 &&
           (((pbVar2[3] == 0x2d && (pbVar2[4] == 0x38)) && (pbVar2[5] == 0)))))) {
    bVar4 = *msgid == '`';
    pcVar3 = &DAT_0040687c;
    pcVar1 = &DAT_00406880;
    goto LAB_004044bb;
  }
  bVar4 = s == clocale_quoting_style;
  pcVar3 = "\"";
  pcVar1 = "\'";
LAB_004044bb:
  if (bVar4) {
    pcVar1 = pcVar3;
  }
  return pcVar1;
}


void version_etc_arn(FILE *stream,char *command_name,char *package,char *version,char **authors,
                    size_t n_authors)

{
  undefined uVar1;
  char *__s;
  
  if (command_name == (char *)0x0) {
    __fprintf_chk(stream,1,"%s %s\n",package,version);
  }
  else {
    __fprintf_chk(stream,1,"%s (%s) %s\n",command_name,package);
  }
  uVar1 = dcgettext(0,&DAT_004068f3,5);
  __fprintf_chk(stream,1,"Copyright %s %d Free Software Foundation, Inc.",uVar1,0x7e3);
  __s = (char *)dcgettext(0,
                          "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"
                          ,5);
  fputs_unlocked(__s,(FILE *)stream);
  switch(n_authors) {
  case 0:
    break;
  case 1:
    uVar1 = dcgettext(0,"Written by %s.\n",5);
    __fprintf_chk(stream,1,uVar1,*authors);
    return;
  case 2:
    uVar1 = dcgettext(0,"Written by %s and %s.\n",5);
    __fprintf_chk(stream,1,uVar1,*authors,authors[1]);
    return;
  case 3:
    uVar1 = dcgettext(0,"Written by %s, %s, and %s.\n",5);
    __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2]);
    return;
  case 4:
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
    __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3]);
    break;
  case 5:
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
    __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4]);
    break;
  case 6:
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
    __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4],authors[5]);
    break;
  case 7:
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
    __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4],authors[5],
                  authors[6]);
    break;
  case 8:
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
    __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4],authors[5],
                  authors[6],authors[7]);
    break;
  case 9:
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n",5);
    __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4],authors[5],
                  authors[6],authors[7],authors[8]);
    break;
  default:
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n",5);
    __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4],authors[5],
                  authors[6],authors[7],authors[8]);
  }
  return;
}


void version_etc_ar(FILE *stream,char *command_name,char *package,char *version,char **authors)

{
  long lVar1;
  size_t n_authors;
  
  n_authors = 0xffffffffffffffff;
  do {
    lVar1 = n_authors + 1;
    n_authors = n_authors + 1;
  } while (authors[lVar1] != (char *)0x0);
  version_etc_arn(stream,command_name,package,version,authors,n_authors);
  return;
}


void version_etc_va(FILE *stream,char *command_name,char *package,char *version,
                   __va_list_tag *authors)

{
  uint uVar1;
  size_t n_authors;
  char **ppcVar2;
  long *plVar3;
  char *authtab [10];
  char *local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  uVar1 = authors->gp_offset;
  if ((ulong)(long)(int)uVar1 < 0x29) {
    ppcVar2 = (char **)((long)(int)uVar1 + (long)authors->reg_save_area);
    uVar1 = uVar1 + 8;
    authors->gp_offset = uVar1;
  }
  else {
    ppcVar2 = (char **)authors->overflow_arg_area;
    authors->overflow_arg_area = ppcVar2 + 1;
  }
  local_58 = *ppcVar2;
  if (local_58 == (char *)0x0) {
    n_authors = 0;
  }
  else {
    if (uVar1 < 0x29) {
      plVar3 = (long *)((long)(int)uVar1 + (long)authors->reg_save_area);
      uVar1 = uVar1 + 8;
      authors->gp_offset = uVar1;
    }
    else {
      plVar3 = (long *)authors->overflow_arg_area;
      authors->overflow_arg_area = plVar3 + 1;
    }
    local_50 = *plVar3;
    if (local_50 == 0) {
      n_authors = 1;
    }
    else {
      if (uVar1 < 0x29) {
        plVar3 = (long *)((long)(int)uVar1 + (long)authors->reg_save_area);
        uVar1 = uVar1 + 8;
        authors->gp_offset = uVar1;
      }
      else {
        plVar3 = (long *)authors->overflow_arg_area;
        authors->overflow_arg_area = plVar3 + 1;
      }
      local_48 = *plVar3;
      if (local_48 == 0) {
        n_authors = 2;
      }
      else {
        if (uVar1 < 0x29) {
          plVar3 = (long *)((long)(int)uVar1 + (long)authors->reg_save_area);
          uVar1 = uVar1 + 8;
          authors->gp_offset = uVar1;
        }
        else {
          plVar3 = (long *)authors->overflow_arg_area;
          authors->overflow_arg_area = plVar3 + 1;
        }
        local_40 = *plVar3;
        if (local_40 == 0) {
          n_authors = 3;
        }
        else {
          if (uVar1 < 0x29) {
            plVar3 = (long *)((long)(int)uVar1 + (long)authors->reg_save_area);
            uVar1 = uVar1 + 8;
            authors->gp_offset = uVar1;
          }
          else {
            plVar3 = (long *)authors->overflow_arg_area;
            authors->overflow_arg_area = plVar3 + 1;
          }
          local_38 = *plVar3;
          if (local_38 == 0) {
            n_authors = 4;
          }
          else {
            if (uVar1 < 0x29) {
              plVar3 = (long *)((long)(int)uVar1 + (long)authors->reg_save_area);
              authors->gp_offset = uVar1 + 8;
            }
            else {
              plVar3 = (long *)authors->overflow_arg_area;
              authors->overflow_arg_area = plVar3 + 1;
            }
            local_30 = *plVar3;
            if (local_30 == 0) {
              n_authors = 5;
            }
            else {
              plVar3 = (long *)authors->overflow_arg_area;
              authors->overflow_arg_area = plVar3 + 1;
              local_28 = *plVar3;
              if (local_28 == 0) {
                n_authors = 6;
              }
              else {
                plVar3 = (long *)authors->overflow_arg_area;
                authors->overflow_arg_area = plVar3 + 1;
                local_20 = *plVar3;
                if (local_20 == 0) {
                  n_authors = 7;
                }
                else {
                  plVar3 = (long *)authors->overflow_arg_area;
                  authors->overflow_arg_area = plVar3 + 1;
                  local_18 = *plVar3;
                  if (local_18 == 0) {
                    n_authors = 8;
                  }
                  else {
                    plVar3 = (long *)authors->overflow_arg_area;
                    authors->overflow_arg_area = plVar3 + 1;
                    local_10 = *plVar3;
                    n_authors = 10 - (ulong)(local_10 == 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  version_etc_arn(stream,command_name,package,version,&local_58,n_authors);
  return;
}


void version_etc(FILE *stream,char *command_name,char *package,char *version,...)

{
  char in_AL;
  undefined in_R8;
  undefined in_R9;
  undefined in_XMM0_Da;
  undefined in_XMM1_Da;
  undefined in_XMM2_Da;
  undefined in_XMM3_Da;
  undefined in_XMM4_Da;
  undefined in_XMM5_Da;
  undefined in_XMM6_Da;
  undefined in_XMM7_Da;
  va_list authors;
  __va_list_tag local_d8;
  undefined local_b8 [32];
  undefined local_98;
  undefined local_90;
  undefined local_88;
  undefined local_78;
  undefined local_68;
  undefined local_58;
  undefined local_48;
  undefined local_38;
  undefined local_28;
  undefined local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Da;
    local_78 = in_XMM1_Da;
    local_68 = in_XMM2_Da;
    local_58 = in_XMM3_Da;
    local_48 = in_XMM4_Da;
    local_38 = in_XMM5_Da;
    local_28 = in_XMM6_Da;
    local_18 = in_XMM7_Da;
  }
  local_d8.reg_save_area = local_b8;
  local_d8.overflow_arg_area = &authors[0].overflow_arg_area;
  local_d8.fp_offset = 0x30;
  local_d8.gp_offset = 0x20;
  local_98 = in_R8;
  local_90 = in_R9;
  version_etc_va(stream,command_name,package,version,&local_d8);
  return;
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


void * xnmalloc(size_t n,size_t s)

{
  void *pvVar1;
  
  if (n <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0)) {
    pvVar1 = malloc(s * n);
    if ((s * n == 0) || (pvVar1 != (void *)0x0)) {
      return pvVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}


void * xmalloc(size_t n)

{
  void *pvVar1;
  
  pvVar1 = malloc(n);
  if ((n != 0) && (pvVar1 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  return pvVar1;
}


void * xnrealloc(void *p,size_t n,size_t s)

{
  void *pvVar1;
  size_t __size;
  
  if (n <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0)) {
    __size = s * n;
    if ((p != (void *)0x0) && (__size == 0)) {
      free(p);
      return (void *)0x0;
    }
    pvVar1 = realloc(p,__size);
    if ((__size == 0) || (pvVar1 != (void *)0x0)) {
      return pvVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}


void * xrealloc(void *p,size_t n)

{
  void *pvVar1;
  
  if ((p != (void *)0x0) && (n == 0)) {
    free(p);
    return (void *)0x0;
  }
  pvVar1 = realloc(p,n);
  if ((n != 0) && (pvVar1 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  return pvVar1;
}


void * x2nrealloc(void *p,size_t *pn,size_t s)

{
  void *pvVar1;
  ulong uVar2;
  size_t __size;
  
  uVar2 = *pn;
  if (p == (void *)0x0) {
    if (uVar2 == 0) {
      uVar2 = (ulong)(0x80 < s) + SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(s),0);
    }
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0) < uVar2) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
  }
  else {
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554)) / ZEXT816(s),0) <= uVar2)
    goto LAB_00404cdd;
    uVar2 = uVar2 + 1 + (uVar2 >> 1);
  }
  *pn = uVar2;
  __size = s * uVar2;
  if ((p != (void *)0x0) && (__size == 0)) {
    free(p);
    return (void *)0x0;
  }
  pvVar1 = realloc(p,__size);
  if ((__size == 0) || (pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
LAB_00404cdd:
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}


char * xcharalloc(size_t n)

{
  char *pcVar1;
  
  pcVar1 = (char *)malloc(n);
  if ((n != 0) && (pcVar1 == (char *)0x0)) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  return pcVar1;
}


void * x2realloc(void *p,size_t *pn)

{
  ulong uVar1;
  void *pvVar2;
  ulong __size;
  
  uVar1 = *pn;
  if (p == (void *)0x0) {
    __size = 0x80;
    if (uVar1 != 0) {
      __size = uVar1;
    }
    if ((long)__size < 0) goto LAB_00404d6a;
    *pn = __size;
  }
  else {
    if (0x5555555555555553 < uVar1) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    __size = (uVar1 >> 1) + uVar1 + 1;
    *pn = __size;
    if (__size == 0) {
      free(p);
      return (void *)0x0;
    }
  }
  pvVar2 = realloc(p,__size);
  if ((__size == 0) || (pvVar2 != (void *)0x0)) {
    return pvVar2;
  }
LAB_00404d6a:
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}


void * xzalloc(size_t s)

{
  void *__s;
  
  __s = malloc(s);
  if ((s != 0) && (__s == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  memset(__s,0,s);
  return __s;
}


void * xcalloc(size_t n,size_t s)

{
  void *pvVar1;
  
  if (n <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0)) {
    pvVar1 = rpl_calloc(n,s);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}


void * xmemdup(void *p,size_t s)

{
  void *__dest;
  
  __dest = malloc(s);
  if ((s != 0) && (__dest == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  memcpy(__dest,p,s);
  return __dest;
}


char * xstrdup(char *string)

{
  size_t sVar1;
  char *__dest;
  
  sVar1 = strlen(string);
  __dest = (char *)malloc(sVar1 + 1);
  if ((sVar1 + 1 != 0) && (__dest == (char *)0x0)) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
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


void * rpl_calloc(size_t n,size_t s)

{
  size_t __size;
  int *piVar1;
  void *pvVar2;
  size_t __nmemb;
  
  __size = 1;
  if (n == 0) {
    __nmemb = 1;
  }
  else {
    __nmemb = 1;
    if ((s != 0) && (__size = s, __nmemb = n, (s * n) / s != n)) {
      piVar1 = __errno_location();
      *piVar1 = 0xc;
      return (void *)0x0;
    }
  }
  pvVar2 = calloc(__nmemb,__size);
  return pvVar2;
}


size_t rpl_mbrtowc(wchar_t *pwc,char *s,size_t n,mbstate_t *ps)

{
  _Bool _Var1;
  size_t sVar2;
  wchar_t *__pwc;
  wchar_t local_24;
  
  __pwc = &local_24;
  if (pwc != (wchar_t *)0x0) {
    __pwc = pwc;
  }
  sVar2 = mbrtowc(__pwc,s,n,(mbstate_t *)ps);
  if ((n != 0) && (0xfffffffffffffffd < sVar2)) {
    _Var1 = hard_locale(0);
    if (!_Var1) {
      *__pwc = (uint)(byte)*s;
      sVar2 = 1;
    }
  }
  return sVar2;
}


int close_stream(FILE *stream)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  
  lVar3 = __fpending();
  uVar1 = stream->_flags;
  iVar2 = rpl_fclose(stream);
  if ((uVar1 & 0x20) == 0) {
    iVar5 = -(uint)(iVar2 != 0);
    if ((lVar3 == 0) && (iVar2 != 0)) {
      piVar4 = __errno_location();
      iVar5 = -1;
      if (*piVar4 == 9) {
        iVar5 = 0;
      }
    }
  }
  else {
    iVar5 = -1;
    if (iVar2 == 0) {
      piVar4 = __errno_location();
      *piVar4 = 0;
    }
  }
  return iVar5;
}


_Bool hard_locale(int category)

{
  int iVar1;
  char *__s1;
  _Bool _Var2;
  
  __s1 = setlocale(category,(char *)0x0);
  _Var2 = true;
  if (__s1 != (char *)0x0) {
    iVar1 = strcmp(__s1,"C");
    if ((iVar1 != 0) && (iVar1 = strcmp(__s1,"POSIX"), iVar1 != 0)) {
      return true;
    }
    _Var2 = false;
  }
  return _Var2;
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


int rpl_fclose(FILE *fp)

{
  int iVar1;
  int iVar2;
  __off_t _Var3;
  int *piVar4;
  
  iVar1 = fileno((FILE *)fp);
  if (-1 < iVar1) {
    iVar1 = __freading(fp);
    if (iVar1 != 0) {
      iVar1 = fileno((FILE *)fp);
      _Var3 = lseek(iVar1,0,1);
      if (_Var3 == -1) goto LAB_004050a8;
    }
    iVar1 = rpl_fflush(fp);
    if (iVar1 != 0) {
      piVar4 = __errno_location();
      iVar1 = *piVar4;
      iVar2 = fclose((FILE *)fp);
      if (iVar1 != 0) {
        *piVar4 = iVar1;
        iVar2 = -1;
      }
      return iVar2;
    }
  }
LAB_004050a8:
  iVar1 = fclose((FILE *)fp);
  return iVar1;
}


int rpl_fflush(FILE *stream)

{
  int iVar1;
  
  if (stream != (FILE *)0x0) {
    iVar1 = __freading(stream);
    if ((iVar1 != 0) && ((*(byte *)((long)&stream->_flags + 1) & 1) != 0)) {
      rpl_fseeko(stream,0,1);
    }
  }
  iVar1 = fflush((FILE *)stream);
  return iVar1;
}


int rpl_fseeko(FILE *fp,off_t offset,int whence)

{
  int iVar1;
  __off_t _Var2;
  
  if (((fp->_IO_read_end == fp->_IO_read_ptr) && (fp->_IO_write_ptr == fp->_IO_write_base)) &&
     (fp->_IO_save_base == (char *)0x0)) {
    iVar1 = fileno((FILE *)fp);
    _Var2 = lseek(iVar1,offset,whence);
    if (_Var2 == -1) {
      iVar1 = -1;
    }
    else {
      *(byte *)&fp->_flags = *(byte *)&fp->_flags & 0xef;
      fp->_offset = _Var2;
      iVar1 = 0;
    }
    return iVar1;
  }
  iVar1 = fseeko((FILE *)fp,offset,whence);
  return iVar1;
}


int atexit(void (*__func)(void))

{
  int iVar1;
  
  iVar1 = __cxa_atexit(__func,0,__dso_handle);
  return iVar1;
}

