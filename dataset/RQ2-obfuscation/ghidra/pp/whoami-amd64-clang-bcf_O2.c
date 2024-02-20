#include "decompile_ghidra_obfuscated.h"

void _dl_relocate_static_pie(void)

{
  return;
}


void usage(int status)

{
  undefined uVar1;
  undefined uVar2;
  char *pcVar3;
  
  if ((9 < y) && (((x + -1) * x & 1U) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (status == 0) {
    while( true ) {
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
      emit_ancillary_info(pcVar3);
      if ((y < 10) || (((x + -1) * x & 1U) == 0)) break;
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
      emit_ancillary_info(pcVar3);
    }
  }
  else {
    while( true ) {
      uVar2 = stderr;
      uVar1 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
      __fprintf_chk(uVar2,1,uVar1,program_name);
      uVar2 = stderr;
      if ((y < 10) || (((x + -1) * x & 1U) == 0)) break;
      uVar1 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
      __fprintf_chk(uVar2,1,uVar1,program_name);
    }
  }
                    /* WARNING: Subroutine does not return */
  exit(status);
}


void emit_ancillary_info(char *program)

{
  int iVar1;
  undefined uVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((9 < y_29) && (((x_28 + -1) * x_28 & 1U) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pcVar4 = "whoami";
  if (emit_ancillary_info__infomap[6].node != (char *)0x0) {
    pcVar4 = emit_ancillary_info__infomap[6].node;
  }
  while( true ) {
    uVar2 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar2,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar3 = setlocale(5,(char *)0x0);
    if ((y_29 < 10) || (((x_28 + -1) * x_28 & 1U) == 0)) break;
    uVar2 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar2,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    setlocale(5,(char *)0x0);
  }
  if ((pcVar3 != (char *)0x0) && (iVar1 = strncmp(pcVar3,"en_",3), iVar1 != 0)) {
    pcVar3 = (char *)dcgettext(0,
                               "Report any translation bugs to <https://translationproject.org/team/>\n"
                               ,5);
    fputs_unlocked(pcVar3,stdout);
  }
  uVar2 = dcgettext(0,"Full documentation <%s%s>\n",5);
  __printf_chk(1,uVar2,"https://www.gnu.org/software/coreutils/","whoami");
  uVar2 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  pcVar3 = "";
  if (pcVar4 == "whoami") {
    pcVar3 = " invocation";
  }
  __printf_chk(1,uVar2,pcVar4,pcVar3);
  return;
}


int main(int argc,char **argv)

{
  int iVar1;
  __uid_t __uid;
  int *piVar2;
  char *pcVar3;
  passwd *ppVar4;
  undefined uVar5;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  parse_gnu_standard_options_only
            (argc,argv,"whoami","GNU coreutils",Version,true,usage,"Richard Mlynarik",0);
  if (optind != argc) {
    uVar5 = dcgettext(0,"extra operand %s",5);
    pcVar3 = quote(argv[optind]);
    error(0,0,uVar5,pcVar3);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  piVar2 = __errno_location();
  *piVar2 = 0;
  __uid = geteuid();
  if ((__uid != 0xffffffff) || (*piVar2 == 0)) {
    if ((9 < y_31) && (((x_30 + -1) * x_30 & 1U) != 0)) goto LAB_00402882;
    while ((ppVar4 = getpwuid(__uid), 9 < y_31 && (((x_30 + -1) * x_30 & 1U) != 0))) {
LAB_00402882:
      getpwuid(__uid);
    }
    if (ppVar4 != (passwd *)0x0) {
      puts(ppVar4->pw_name);
      return 0;
    }
  }
  if ((9 < y_31) && (((x_30 + -1) * x_30 & 1U) != 0)) goto LAB_004028de;
  do {
    iVar1 = *piVar2;
    uVar5 = dcgettext(0,"cannot find name for user ID %lu",5);
    error(1,iVar1,uVar5,__uid);
LAB_004028de:
    iVar1 = *piVar2;
    uVar5 = dcgettext(0,"cannot find name for user ID %lu",5);
    error(1,iVar1,uVar5,__uid);
  } while( true );
}


void close_stdout_set_file_name(char *file)

{
  do {
    file_name = file;
    if (y < 10) {
      return;
    }
  } while (((x + -1) * x & 1U) != 0);
  return;
}


void close_stdout_set_ignore_EPIPE(_Bool ignore)

{
  do {
    ignore_EPIPE = ignore;
    if (y_4 < 10) {
      return;
    }
  } while (((x_3 + -1) * x_3 & 1U) != 0);
  return;
}


void close_stdout(void)

{
  _Bool _Var1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  char *pcVar5;
  
  if ((9 < y_6) && (((x_5 + -1) * x_5 & 1U) != 0)) goto LAB_004029d3;
  while ((iVar2 = close_stream(stdout), _Var1 = ignore_EPIPE, 9 < y_6 &&
         (((x_5 + -1) * x_5 & 1U) != 0))) {
LAB_004029d3:
    close_stream(stdout);
  }
  if ((iVar2 != 0) && ((piVar3 = __errno_location(), _Var1 == false || (*piVar3 != 0x20)))) {
    uVar4 = dcgettext(0,"write error",5);
    iVar2 = *piVar3;
    if (file_name != (char *)0x0) {
      pcVar5 = quotearg_colon(file_name);
      error(0,iVar2,"%s: %s",pcVar5,uVar4);
                    /* WARNING: Subroutine does not return */
      _exit(exit_failure);
    }
    if ((9 < y_6) && (((x_5 + -1) * x_5 & 1U) != 0)) goto LAB_00402aeb;
    while ((error(0,iVar2,"%s",uVar4), 9 < y_6 && (((x_5 + -1) * x_5 & 1U) != 0))) {
LAB_00402aeb:
      error(0,iVar2,"%s",uVar4);
    }
                    /* WARNING: Subroutine does not return */
    _exit(exit_failure);
  }
  while ((iVar2 = close_stream(stderr), 9 < y_6 && (((x_5 + -1) * x_5 & 1U) != 0))) {
    close_stream(stderr);
  }
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    _exit(exit_failure);
  }
  return;
}


void parse_long_options(int argc,char **argv,char *command_name,char *package,char *version,
                       void (*usage_func)(int),...)

{
  char in_AL;
  int iVar1;
  __va_list_tag *p_Var2;
  uint uVar3;
  __va_list_tag *authors;
  undefined uVar4;
  undefined in_XMM0_Da;
  undefined in_XMM1_Da;
  undefined in_XMM2_Da;
  undefined in_XMM3_Da;
  undefined in_XMM4_Da;
  undefined in_XMM5_Da;
  undefined in_XMM6_Da;
  undefined in_XMM7_Da;
  undefined uStack_120;
  uint local_118 [2];
  long local_110 [3];
  undefined local_f8 [48];
  undefined local_c8;
  undefined local_b8;
  undefined local_a8;
  undefined local_98;
  undefined local_88;
  undefined local_78;
  undefined local_68;
  undefined local_58;
  char *local_40;
  char *local_38;
  
  authors = (__va_list_tag *)local_f8;
  if (in_AL != '\0') {
    local_c8 = in_XMM0_Da;
    local_b8 = in_XMM1_Da;
    local_a8 = in_XMM2_Da;
    local_98 = in_XMM3_Da;
    local_88 = in_XMM4_Da;
    local_78 = in_XMM5_Da;
    local_68 = in_XMM6_Da;
    local_58 = in_XMM7_Da;
  }
  uVar3 = (x + -1) * x & 1;
  p_Var2 = (__va_list_tag *)local_f8;
  uVar4 = opterr;
  if ((9 < y) && (p_Var2 = (__va_list_tag *)local_f8, uVar3 != 0)) goto LAB_00402b9f;
  while( true ) {
    authors = (__va_list_tag *)((long)p_Var2 + -0x20);
    opterr = 0;
    if ((y < 10) || (uVar3 == 0)) break;
LAB_00402b9f:
    p_Var2 = authors;
    uVar4 = 0;
  }
  local_40 = package;
  local_38 = command_name;
  if (argc == 2) {
    while( true ) {
      *(undefined *)((long)p_Var2 + -0x28) = 0x402c04;
      iVar1 = getopt_long(2,argv,&DAT_00408358,long_options,0);
      if ((y < 10) || (((x + -1) * x & 1U) == 0)) break;
      *(undefined *)((long)p_Var2 + -0x28) = 0x402bea;
      getopt_long(2,argv,&DAT_00408358,long_options,0);
    }
    if (iVar1 == 0x68) {
      *(undefined *)((long)p_Var2 + -0x28) = 0x402c70;
      (*usage_func)(0);
    }
    else if (iVar1 == 0x76) {
      *(undefined **)((long)p_Var2 + -0x10) = local_f8;
      *(undefined **)((long)p_Var2 + -0x18) = &stack0x00000008;
      *(undefined *)((long)p_Var2 + -0x1c) = 0x30;
      authors->gp_offset = 0x30;
      *(undefined *)((long)p_Var2 + -0x28) = 0x402c64;
      version_etc_va(stdout,local_38,local_40,version,authors);
                    /* WARNING: Subroutine does not return */
      *(undefined *)((long)p_Var2 + -0x28) = 0x402c6b;
      exit(0);
    }
  }
  opterr = uVar4;
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
  __va_list_tag *p_Var3;
  char *pcVar4;
  __va_list_tag *authors;
  undefined in_XMM0_Da;
  undefined in_XMM1_Da;
  undefined in_XMM2_Da;
  undefined in_XMM3_Da;
  undefined in_XMM4_Da;
  undefined in_XMM5_Da;
  undefined in_XMM6_Da;
  undefined in_XMM7_Da;
  undefined uStack_120;
  uint local_118 [2];
  long local_110 [3];
  undefined local_f8 [48];
  undefined local_c8;
  undefined local_b8;
  undefined local_a8;
  undefined local_98;
  undefined local_88;
  undefined local_78;
  undefined local_68;
  undefined local_58;
  char *local_48;
  char *local_40;
  char *local_38;
  
  if (in_AL != '\0') {
    local_c8 = in_XMM0_Da;
    local_b8 = in_XMM1_Da;
    local_a8 = in_XMM2_Da;
    local_98 = in_XMM3_Da;
    local_88 = in_XMM4_Da;
    local_78 = in_XMM5_Da;
    local_68 = in_XMM6_Da;
    local_58 = in_XMM7_Da;
  }
  pcVar4 = "+";
  if (scan_all) {
    pcVar4 = "";
  }
  p_Var3 = (__va_list_tag *)local_f8;
  local_48 = version;
  local_40 = package;
  local_38 = command_name;
  if ((9 < y_5) &&
     (p_Var3 = (__va_list_tag *)local_f8, authors = (__va_list_tag *)local_f8,
     ((x_4 + -1) * x_4 & 1U) != 0)) goto LAB_00402d5b;
  while( true ) {
    uVar1 = opterr;
    authors = (__va_list_tag *)((long)p_Var3 + -0x20);
    opterr = 1;
    *(undefined *)((long)p_Var3 + -0x28) = 0x402d41;
    iVar2 = getopt_long(argc,argv,pcVar4,long_options,0);
    if ((y_5 < 10) || (((x_4 + -1) * x_4 & 1U) == 0)) break;
LAB_00402d5b:
    p_Var3 = authors;
    opterr = 1;
    p_Var3[-1].reg_save_area = (void *)0x402d7a;
    getopt_long(argc,argv,pcVar4,long_options,0);
  }
  if (iVar2 != -1) {
    if (iVar2 == 0x68) {
      *(undefined *)((long)p_Var3 + -0x28) = 0x402e10;
      (*usage_func)(0);
    }
    else {
      if (iVar2 == 0x76) {
        *(undefined **)((long)p_Var3 + -0x10) = local_f8;
        *(undefined **)((long)p_Var3 + -0x18) = &stack0x00000010;
        *(undefined *)((long)p_Var3 + -0x1c) = 0x30;
        authors->gp_offset = 0x30;
        *(undefined *)((long)p_Var3 + -0x28) = 0x402dd4;
        version_etc_va(stdout,local_38,local_40,local_48,authors);
                    /* WARNING: Subroutine does not return */
        *(undefined *)((long)p_Var3 + -0x28) = 0x402ddb;
        exit(0);
      }
      while( true ) {
        *(undefined *)((long)p_Var3 + -0x28) = 0x402df0;
        (*usage_func)(exit_failure);
        if ((y_5 < 10) || (((x_4 + -1) * x_4 & 1U) == 0)) break;
        *(undefined *)((long)p_Var3 + -0x28) = 0x402de8;
        (*usage_func)(exit_failure);
      }
    }
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
  if (6 < (long)__s1 - (long)argv0) {
    if ((9 < y) && (((x + -1) * x & 1U) != 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar1 = strncmp(__s1 + -7,"/.libs/",7);
    if ((iVar1 == 0) && (iVar1 = strncmp(__s1,"lt-",3), argv0 = __s1, iVar1 == 0)) {
      argv0 = __s1 + 3;
      program_invocation_short_name = argv0;
    }
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
  
  if ((9 < y_22) && (((x_21 + -1) * x_21 & 1U) != 0)) goto LAB_00402f92;
  while( true ) {
    pqVar1 = &default_quoting_options;
    if (o != (quoting_options *)0x0) {
      pqVar1 = o;
    }
    pqVar1->style = s;
    if ((y_22 < 10) || (((x_21 + -1) * x_21 & 1U) == 0)) break;
LAB_00402f92:
    pqVar1 = &default_quoting_options;
    if (o != (quoting_options *)0x0) {
      pqVar1 = o;
    }
    pqVar1->style = s;
  }
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
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ushort **ppuVar11;
  size_t sVar12;
  byte bVar13;
  enum quoting_style qVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  ulong uVar18;
  byte bVar19;
  byte bVar20;
  ulong uVar21;
  ulong uVar22;
  byte bVar23;
  ulong uVar24;
  byte bVar25;
  int iVar26;
  bool bVar27;
  size_t local_d8;
  char *local_d0;
  int local_b0;
  ulong local_a0;
  char *local_90;
  ulong local_88;
  wchar_t local_5c;
  char *local_58;
  ulong local_50;
  mbstate_t local_48;
  size_t local_40;
  ulong local_38;
  
  local_90 = right_quote;
  local_40 = __ctype_get_mb_cur_max();
  uVar10 = (ulong)((byte)((uint)flags >> 1) & 1);
  bVar19 = 1;
  local_a0 = 0;
  local_d0 = (char *)0x0;
  local_d8 = 0;
  bVar7 = false;
  bVar5 = false;
  bVar4 = false;
  local_88 = argsize;
  do {
    bVar25 = (byte)uVar10;
    if (custom_quoting_style < quoting_style) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar18 = 0;
    uVar21 = 0;
    qVar14 = literal_quoting_style;
    switch(quoting_style) {
    case literal_quoting_style:
      break;
    case shell_always_quoting_style:
      bVar2 = bVar7;
      goto joined_r0x004031d2;
    case shell_escape_quoting_style:
      bVar7 = true;
      if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    case shell_quoting_style:
      uVar10 = 1;
    case shell_escape_always_quoting_style:
      if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      bVar2 = true;
      if ((uVar10 & 1) != 0) {
        bVar2 = bVar7;
      }
joined_r0x004031d2:
      bVar7 = bVar2;
      if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      qVar14 = shell_always_quoting_style;
      bVar25 = (byte)uVar10;
      if ((uVar10 & 1) == 0) {
        if ((buffersize != 0) && (*buffer = '\'', 9 < y_32)) {
          do {
            if (((x_31 + -1) * x_31 & 1U) == 0) break;
            *buffer = '\'';
          } while (9 < y_32);
          uVar18 = 1;
          local_d0 = "\'";
          local_d8 = 1;
          uVar21 = uVar10 & 0xff;
          qVar14 = shell_always_quoting_style;
          break;
        }
        uVar18 = 1;
        local_d0 = "\'";
      }
      else {
        uVar18 = 0;
        local_d0 = "\'";
      }
LAB_00403368:
      local_d8 = 1;
      uVar21 = (ulong)bVar25;
      break;
    case c_quoting_style:
      bVar7 = true;
      qVar14 = c_quoting_style;
      if ((uVar10 & 1) == 0) {
        if (buffersize != 0) {
          *buffer = '\"';
        }
        uVar18 = 1;
      }
      else {
        uVar18 = 0;
      }
      local_d0 = "\"";
      goto LAB_00403368;
    case c_maybe_quoting_style:
      bVar7 = true;
      uVar18 = 0;
      local_d0 = "\"";
      local_d8 = 1;
      uVar21 = 1;
      qVar14 = c_quoting_style;
      break;
    case escape_quoting_style:
      uVar18 = 0;
      bVar7 = true;
      uVar21 = 0;
      qVar14 = escape_quoting_style;
      if (9 < y_32) {
        uVar21 = 0;
        qVar14 = escape_quoting_style;
        if (((x_31 + -1) * x_31 & 1U) != 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
      break;
    default:
      if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) goto LAB_004033ca;
      while( true ) {
        left_quote = gettext_quote("`",quoting_style);
        uVar21 = (ulong)quoting_style;
        local_90 = gettext_quote("\'",quoting_style);
        if ((y_32 < 10) || (((x_31 + -1) * x_31 & 1U) == 0)) break;
LAB_004033ca:
        gettext_quote("`",quoting_style);
        gettext_quote("\'",quoting_style);
      }
    case custom_quoting_style:
      if ((uVar10 & 1) == 0) {
        if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
LAB_00404560:
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar18 = 0;
        while (left_quote[uVar18] != '\0') {
          if (uVar18 < buffersize) {
            buffer[uVar18] = left_quote[uVar18];
          }
          uVar18 = uVar18 + 1;
          if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) goto LAB_00404560;
        }
      }
      else {
        uVar18 = 0;
      }
      local_d8 = strlen(local_90);
      bVar7 = true;
      local_d0 = local_90;
      uVar21 = uVar21 & 0xffffffffffffff00 | uVar10 & 0xff;
      qVar14 = quoting_style;
    }
    quoting_style = qVar14;
    if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    bVar2 = quoting_style != shell_always_quoting_style;
    bVar13 = bVar2 & bVar7;
    bVar25 = (byte)uVar21;
    uVar10 = local_88;
    local_88 = 0;
    iVar9 = y_32;
    local_38 = uVar21;
    iVar26 = x_31;
LAB_00403776:
    if (uVar10 != 0xffffffffffffffff) {
      if (local_88 == uVar10) goto LAB_00404473;
LAB_0040379b:
      uVar22 = local_88;
      if ((local_d8 != 0 & bVar13) != 0) {
        if ((local_d8 < 2) || (uVar10 != 0xffffffffffffffff)) {
          if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          if (local_88 + local_d8 <= uVar10) goto LAB_00403870;
          goto LAB_0040380b;
        }
        uVar10 = strlen(arg);
        if (uVar10 < local_88 + local_d8) goto LAB_0040380b;
LAB_00403870:
        if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        iVar8 = memcmp(arg + local_88,local_d0,local_d8);
        bVar27 = iVar8 == 0;
        if ((!bVar27) || (local_b0 = 0x10, (uVar21 & 1) == 0)) goto joined_r0x00403919;
        goto joined_r0x00404065;
      }
LAB_0040380b:
      bVar27 = false;
joined_r0x00403919:
      if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar24 = (ulong)(byte)arg[local_88];
      bVar20 = 1;
      bVar23 = 0x62;
      bVar17 = 0;
      bVar6 = 0x74;
      switch(uVar24) {
      case 0:
        if (bVar7 != false) {
          local_b0 = 0x10;
          if ((uVar21 & 1) != 0) goto joined_r0x00404065;
          uVar22 = uVar18;
          if ((quoting_style == shell_always_quoting_style) && (!bVar5)) {
            if (uVar18 < buffersize) {
              buffer[uVar18] = '\'';
              iVar9 = y_32;
              iVar26 = x_31;
            }
            if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            if (uVar18 + 1 < buffersize) {
              do {
                buffer[uVar18 + 1] = '$';
                if (y_32 < 10) break;
              } while (((x_31 + -1) * x_31 & 1U) != 0);
            }
            if (uVar18 + 2 < buffersize) {
              buffer[uVar18 + 2] = '\'';
            }
            uVar22 = uVar18 + 3;
            bVar5 = true;
          }
          if (uVar22 < buffersize) {
            buffer[uVar22] = '\\';
          }
          uVar18 = uVar22 + 1;
          bVar3 = true;
          uVar24 = 0x30;
          if (quoting_style == shell_always_quoting_style) goto LAB_00403f13;
          if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          if ((uVar10 <= local_88 + 1) || (9 < (byte)(arg[local_88 + 1] - 0x30U)))
          goto LAB_00403f13;
          if (uVar18 < buffersize) {
            buffer[uVar18] = '0';
          }
          if (uVar22 + 2 < buffersize) {
            buffer[uVar22 + 2] = '0';
          }
          uVar18 = uVar22 + 3;
          bVar17 = 0;
          goto joined_r0x0040384b;
        }
        local_b0 = 0xf;
        if ((flags & 1U) == 0) {
          uVar24 = 0;
          goto LAB_00403f11;
        }
        goto joined_r0x00404065;
      default:
        local_50 = buffersize;
        if (local_40 != 1) {
          local_48 = (mbstate_t)0x0;
          if (uVar10 == 0xffffffffffffffff) {
            uVar10 = strlen(arg);
          }
          local_58 = arg + local_88;
          bVar17 = 1;
          uVar15 = 0;
          do {
            uVar16 = uVar15 + local_88;
            sVar12 = rpl_mbrtowc(&local_5c,arg + uVar16,uVar10 - uVar16,&local_48);
            if (sVar12 == 0) goto LAB_004040d2;
            if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            if (sVar12 == 0xffffffffffffffff) {
LAB_004040ca:
              bVar17 = 0;
              goto LAB_004040d2;
            }
            if (sVar12 == 0xfffffffffffffffe) {
              if (uVar10 <= uVar16) goto LAB_004040ca;
              goto LAB_004040a4;
            }
            if ((1 < sVar12 & quoting_style == shell_always_quoting_style & bVar25 & 1) == 1) {
              uVar16 = 1;
              do {
                if (((int)local_58[uVar16 + uVar15] - 0x5bU < 0x22) &&
                   ((0x20000002bU >> ((ulong)((int)local_58[uVar16 + uVar15] - 0x5bU) & 0x3f) & 1)
                    != 0)) {
                  local_b0 = 0x10;
                  goto LAB_004040da;
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 < sVar12);
            }
            iVar9 = iswprint(local_5c);
            local_b0 = 0;
            bVar6 = 0;
            if (iVar9 != 0) {
              bVar6 = bVar17;
            }
            bVar17 = bVar6;
            uVar15 = uVar15 + sVar12;
            iVar9 = mbsinit((mbstate_t *)&local_48);
          } while (iVar9 == 0);
          goto LAB_004040da;
        }
        ppuVar11 = __ctype_b_loc();
        bVar17 = (byte)((*ppuVar11)[uVar24] >> 0xe) & 1;
        uVar15 = 1;
        goto LAB_00404139;
      case 7:
        bVar23 = 0x61;
        break;
      case 8:
        break;
      case 9:
        goto switchD_0040383e_caseD_9;
      case 10:
        bVar6 = 0x6e;
        goto switchD_0040383e_caseD_9;
      case 0xb:
        bVar23 = 0x76;
        break;
      case 0xc:
        bVar23 = 0x66;
        break;
      case 0xd:
        bVar6 = 0x72;
switchD_0040383e_caseD_9:
        bVar23 = bVar6;
        if ((uVar21 & 1) == 0 || bVar2) break;
joined_r0x00404065:
        local_b0 = 0x10;
        goto joined_r0x00404065;
      case 0x20:
switchD_0040383e_caseD_20:
        bVar17 = 1;
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
        if ((quoting_style == shell_always_quoting_style) && ((uVar21 & 1) != 0))
        goto joined_r0x00404065;
joined_r0x00403c85:
        bVar3 = false;
        goto joined_r0x0040384b;
      case 0x23:
      case 0x7e:
        if (local_88 == 0) goto switchD_0040383e_caseD_20;
        goto LAB_00403f11;
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
        goto switchD_0040383e_caseD_25;
      case 0x27:
        uVar24 = 0x27;
        if (quoting_style != shell_always_quoting_style) {
LAB_00403c7b:
          bVar4 = true;
          bVar17 = 1;
          goto joined_r0x00403c85;
        }
        if ((uVar21 & 1) == 0) {
          uVar22 = buffersize;
          if (local_a0 == 0 && buffersize != 0) {
            uVar22 = 0;
            local_a0 = buffersize;
          }
          if (uVar18 < uVar22) {
            buffer[uVar18] = '\'';
          }
          if (uVar18 + 1 < uVar22) {
            buffer[uVar18 + 1] = '\\';
          }
          if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          if (uVar18 + 2 < uVar22) {
            do {
              buffer[uVar18 + 2] = '\'';
              if (y_32 < 10) break;
            } while (((x_31 + -1) * x_31 & 1U) != 0);
          }
          if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar18 = uVar18 + 3;
          bVar5 = false;
          buffersize = uVar22;
          goto LAB_00403c7b;
        }
        bVar4 = true;
        goto joined_r0x00404065;
      case 0x3f:
        uVar24 = 0x3f;
        if (quoting_style == c_quoting_style) {
          if ((((flags & 4U) != 0) && (uVar15 = local_88 + 2, uVar15 < uVar10)) &&
             (arg[local_88 + 1] == '?')) {
            bVar17 = arg[uVar15];
            bVar3 = false;
            if (((uint)(int)(char)bVar17 < 0x3f) &&
               (bVar3 = false,
               (0x7000a38200000000U >> ((ulong)(uint)(int)(char)bVar17 & 0x3f) & 1) != 0)) {
              if ((uVar21 & 1) != 0) goto joined_r0x00404065;
              if (uVar18 < buffersize) {
                do {
                  buffer[uVar18] = '?';
                  iVar26 = x_31;
                  iVar9 = y_32;
                  if (y_32 < 10) break;
                } while (((x_31 + -1) * x_31 & 1U) != 0);
              }
              if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
              if (uVar18 + 1 < buffersize) {
                buffer[uVar18 + 1] = '\"';
              }
              uVar22 = uVar18 + 2;
              if (uVar22 < buffersize) {
                if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) goto LAB_004035bf;
                while ((buffer[uVar22] = '\"', 9 < y_32 && (((x_31 + -1) * x_31 & 1U) != 0))) {
LAB_004035bf:
                  buffer[uVar22] = '\"';
                }
              }
              uVar22 = uVar18 + 3;
              if (uVar22 < buffersize) {
                if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) goto LAB_00403606;
                while ((buffer[uVar22] = '?', 9 < y_32 && (((x_31 + -1) * x_31 & 1U) != 0))) {
LAB_00403606:
                  buffer[uVar22] = '?';
                }
              }
              uVar18 = uVar18 + 4;
              bVar3 = false;
              uVar24 = (ulong)bVar17;
              local_88 = uVar15;
            }
            goto LAB_00403f13;
          }
        }
        else if ((quoting_style == shell_always_quoting_style) && ((uVar21 & 1) != 0))
        goto joined_r0x00404065;
LAB_00403f11:
        bVar3 = false;
LAB_00403f13:
        bVar17 = 0;
        goto joined_r0x0040384b;
      case 0x5c:
        if (quoting_style == shell_always_quoting_style) {
          if ((uVar21 & 1) != 0) goto joined_r0x00404065;
        }
        else {
          bVar6 = 0x5c;
          if ((bVar7 & bVar25 & local_d8 != 0) == 0) goto switchD_0040383e_caseD_9;
        }
        bVar3 = false;
        bVar23 = 0x5c;
        bVar17 = 0;
        goto LAB_004043ea;
      case 0x7b:
      case 0x7d:
        bVar3 = false;
        if (uVar10 == 0xffffffffffffffff) {
          if ((local_88 == 0) && (arg[1] == '\0')) goto switchD_0040383e_caseD_20;
          uVar10 = 0xffffffffffffffff;
          bVar3 = false;
        }
        else if ((local_88 == 0) && (uVar10 == 1)) goto switchD_0040383e_caseD_20;
        goto LAB_00403f13;
      }
      bVar20 = 0;
      bVar17 = 0;
      if (bVar7 == false) {
switchD_0040383e_caseD_25:
        bVar3 = false;
        bVar17 = bVar20;
        goto joined_r0x0040384b;
      }
      goto LAB_00403f82;
    }
    if (arg[local_88] != '\0') goto LAB_0040379b;
    local_88 = 0xffffffffffffffff;
LAB_00404473:
    if (((uVar21 & 1) != 0) && (quoting_style == shell_always_quoting_style && uVar18 == 0)) {
LAB_004046ef:
      qVar14 = shell_escape_always_quoting_style;
      if (bVar7 == false) {
        qVar14 = quoting_style;
      }
      if (quoting_style != shell_always_quoting_style) {
        qVar14 = quoting_style;
      }
      if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) goto LAB_004048ab;
      while( true ) {
        sVar12 = quotearg_buffer_restyled
                           (buffer,buffersize,arg,local_88,qVar14,flags & 0xfffffffdU,(uint *)0x0,
                            left_quote,local_90);
        if (y_32 < 10) {
          return sVar12;
        }
        if (((x_31 + -1) * x_31 & 1U) == 0) break;
LAB_004048ab:
        quotearg_buffer_restyled
                  (buffer,buffersize,arg,local_88,qVar14,flags & 0xfffffffdU,(uint *)0x0,left_quote,
                   local_90);
      }
      return sVar12;
    }
    if ((!bVar4) || (quoting_style != shell_always_quoting_style || (uVar21 & 1) != 0)) {
LAB_00404741:
      if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if ((local_d0 != (char *)0x0) && ((uVar21 & 1) == 0)) {
        cVar1 = *local_d0;
        while (cVar1 != '\0') {
          local_d0 = local_d0 + 1;
          if (uVar18 < buffersize) {
            buffer[uVar18] = cVar1;
            iVar9 = y_32;
            iVar26 = x_31;
          }
          if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar18 = uVar18 + 1;
          cVar1 = *local_d0;
        }
      }
      if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (uVar18 < buffersize) {
        do {
          buffer[uVar18] = '\0';
          if (y_32 < 10) {
            return uVar18;
          }
        } while (((x_31 + -1) * x_31 & 1U) != 0);
      }
      return uVar18;
    }
    if (bVar19 != 0) {
      sVar12 = quotearg_buffer_restyled
                         (buffer,local_a0,arg,local_88,c_quoting_style,flags,quote_these_too,
                          left_quote,local_90);
      return sVar12;
    }
    if ((local_a0 == 0) || (buffersize != 0)) goto LAB_00404741;
    uVar10 = local_38 & 0xffffffff;
    buffersize = local_a0;
    if ((9 < iVar9) && (uVar10 = local_38 & 0xffffffff, ((iVar26 + -1) * iVar26 & 1U) != 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  } while( true );
  while (uVar16 = local_88 + 1 + uVar15, uVar15 = uVar15 + 1, uVar16 < uVar10) {
LAB_004040a4:
    if (local_58[uVar15] == '\0') break;
  }
  bVar17 = 0;
LAB_004040d2:
  local_b0 = 0;
LAB_004040da:
  if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar9 = y_32;
  iVar26 = x_31;
  buffersize = local_50;
  if (local_b0 != 0) goto joined_r0x00404065;
LAB_00404139:
  if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  buffersize = local_50;
  if ((1 < uVar15) || ((bVar17 | !bVar7) == 0)) {
    uVar15 = uVar15 + local_88;
    bVar3 = false;
    do {
      bVar23 = (byte)uVar24;
      if (bVar7 == false) {
LAB_00404296:
        if (bVar27) {
          if (uVar18 < local_50) {
            buffer[uVar18] = '\\';
          }
          uVar18 = uVar18 + 1;
          bVar27 = false;
        }
      }
      else {
        if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        if (bVar17 != 0) goto LAB_00404296;
        if ((uVar21 & 1) != 0) {
          local_b0 = 0x10;
          uVar22 = local_88;
          goto joined_r0x00404065;
        }
        if ((quoting_style == shell_always_quoting_style) && (!bVar5)) {
          if (uVar18 < local_50) {
            do {
              buffer[uVar18] = '\'';
              iVar9 = y_32;
              iVar26 = x_31;
              if (y_32 < 10) break;
            } while (((x_31 + -1) * x_31 & 1U) != 0);
          }
          if (uVar18 + 1 < local_50) {
            buffer[uVar18 + 1] = '$';
            iVar9 = y_32;
            iVar26 = x_31;
          }
          if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          if (uVar18 + 2 < local_50) {
            do {
              buffer[uVar18 + 2] = '\'';
              iVar9 = y_32;
              iVar26 = x_31;
              if (y_32 < 10) break;
            } while (((x_31 + -1) * x_31 & 1U) != 0);
          }
          if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar18 = uVar18 + 3;
          bVar5 = true;
        }
        if (uVar18 < local_50) {
          buffer[uVar18] = '\\';
          iVar9 = y_32;
          iVar26 = x_31;
        }
        if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        if (uVar18 + 1 < local_50) {
          do {
            buffer[uVar18 + 1] = (byte)(uVar24 >> 6) | 0x30;
            if (y_32 < 10) break;
          } while (((x_31 + -1) * x_31 & 1U) != 0);
        }
        if (uVar18 + 2 < local_50) {
          buffer[uVar18 + 2] = (byte)(uVar24 >> 3) & 7 | 0x30;
        }
        uVar18 = uVar18 + 3;
        bVar23 = bVar23 & 7 | 0x30;
        bVar3 = true;
      }
      if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar22 = local_88 + 1;
      iVar26 = x_31;
      iVar9 = y_32;
      if (uVar15 <= uVar22) goto LAB_004043ea;
      if ((bVar5) && (!bVar3)) {
        if (uVar18 < local_50) {
          buffer[uVar18] = '\'';
        }
        if (uVar18 + 1 < local_50) {
          buffer[uVar18 + 1] = '\'';
        }
        uVar18 = uVar18 + 2;
        bVar5 = false;
      }
      if (uVar18 < local_50) {
        buffer[uVar18] = bVar23;
      }
      if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar24 = (ulong)(byte)arg[uVar22];
      uVar18 = uVar18 + 1;
      local_88 = uVar22;
      iVar9 = y_32;
      iVar26 = x_31;
    } while( true );
  }
  bVar3 = false;
joined_r0x0040384b:
  bVar23 = (byte)uVar24;
  if (bVar13 == 0) {
    if ((quote_these_too != (uint *)0x0 & bVar25 & 1) != 0) goto LAB_00403f27;
LAB_00403f50:
    if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar26 = x_31;
    iVar9 = y_32;
    if (bVar27) goto LAB_00403f82;
LAB_004043ea:
    if ((bVar5) && (!bVar3)) {
      if (uVar18 < buffersize) {
        buffer[uVar18] = '\'';
        iVar9 = y_32;
        iVar26 = x_31;
      }
      if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (uVar18 + 1 < buffersize) {
        do {
          buffer[uVar18 + 1] = '\'';
          if (y_32 < 10) break;
        } while (((x_31 + -1) * x_31 & 1U) != 0);
      }
      uVar18 = uVar18 + 2;
      bVar5 = false;
    }
  }
  else {
    if (quote_these_too == (uint *)0x0) goto LAB_00403f50;
LAB_00403f27:
    if ((quote_these_too[uVar24 >> 5] >> ((uint)uVar24 & 0x1f) & 1) == 0) goto LAB_00403f50;
LAB_00403f82:
    local_b0 = 0x10;
    uVar22 = local_88;
    iVar9 = y_32;
    iVar26 = x_31;
    if ((uVar21 & 1) != 0) goto joined_r0x00404065;
    if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if ((quoting_style == shell_always_quoting_style) && (!bVar5)) {
      if (uVar18 < buffersize) {
        do {
          buffer[uVar18] = '\'';
          if (y_32 < 10) break;
        } while (((x_31 + -1) * x_31 & 1U) != 0);
      }
      uVar22 = uVar18 + 1;
      if (uVar22 < buffersize) {
        if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) goto LAB_0040366f;
        while ((buffer[uVar22] = '$', 9 < y_32 && (((x_31 + -1) * x_31 & 1U) != 0))) {
LAB_0040366f:
          buffer[uVar22] = '$';
        }
      }
      uVar22 = uVar18 + 2;
      if (uVar22 < buffersize) {
        if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) goto LAB_004036b3;
        while ((buffer[uVar22] = '\'', 9 < y_32 && (((x_31 + -1) * x_31 & 1U) != 0))) {
LAB_004036b3:
          buffer[uVar22] = '\'';
        }
      }
      uVar18 = uVar18 + 3;
      bVar5 = true;
    }
    if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (uVar18 < buffersize) {
      buffer[uVar18] = '\\';
    }
    uVar18 = uVar18 + 1;
  }
  if (uVar18 < buffersize) {
    if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) goto LAB_00403733;
    while ((buffer[uVar18] = bVar23, 9 < y_32 && (((x_31 + -1) * x_31 & 1U) != 0))) {
LAB_00403733:
      buffer[uVar18] = bVar23;
    }
  }
  uVar18 = uVar18 + 1;
  bVar19 = -bVar17 & bVar19;
  local_b0 = 0;
  uVar22 = local_88;
  iVar9 = y_32;
  iVar26 = x_31;
  if ((9 < y_32) && (((x_31 + -1) * x_31 & 1U) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
joined_r0x00404065:
  local_88 = uVar10;
  if ((9 < iVar9) && (((iVar26 + -1) * iVar26 & 1U) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((local_b0 != 0) && (local_b0 != 0xf)) {
    if (local_b0 != 0x10) {
      return uVar18;
    }
    goto LAB_004046ef;
  }
  uVar10 = local_88;
  local_88 = uVar22 + 1;
  goto LAB_00403776;
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
  char **ppcVar1;
  long lVar2;
  
  __ptr = slotvec;
  if (L'\x01' < nslots) {
    ppcVar1 = &slotvec[1].val;
    lVar2 = 1;
    do {
      if ((9 < y_38) && (((x_37 + -1) * x_37 & 1U) != 0)) goto LAB_00404b24;
      while ((free(*ppcVar1), 9 < y_38 && (((x_37 + -1) * x_37 & 1U) != 0))) {
LAB_00404b24:
        free(*ppcVar1);
      }
      lVar2 = lVar2 + 1;
      ppcVar1 = ppcVar1 + 2;
    } while (lVar2 < nslots);
  }
  if (__ptr->val != slot0) {
    free(__ptr->val);
    slotvec0.size = 0x100;
    slotvec0.val = slot0;
  }
  if (__ptr != &slotvec0) {
    if ((9 < y_38) && (((x_37 + -1) * x_37 & 1U) != 0)) goto LAB_00404bc1;
    while( true ) {
      free(__ptr);
      slotvec = &slotvec0;
      if ((y_38 < 10) || (((x_37 + -1) * x_37 & 1U) == 0)) break;
LAB_00404bc1:
      free(__ptr);
      slotvec = &slotvec0;
    }
  }
  do {
    nslots = L'\x01';
    if (y_38 < 10) {
      nslots = L'\x01';
      return;
    }
  } while (((x_37 + -1) * x_37 & 1U) != 0);
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
  
  if ((9 < y_42) && (((x_41 + -1) * x_41 & 1U) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
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
    if ((9 < y_42) && (((x_41 + -1) * x_41 & 1U) != 0)) goto LAB_00404de5;
    while ((psVar4[n].size = sVar5, 9 < y_42 && (((x_41 + -1) * x_41 & 1U) != 0))) {
LAB_00404de5:
      psVar4[n].size = sVar5;
    }
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


/* WARNING: Type propagation algorithm not settling */

char * quotearg_n_style(wchar_t n,enum quoting_style s,char *arg)

{
  char *pcVar1;
  quoting_options *options;
  quoting_options *options_00;
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28;
  
  options_00 = (quoting_options *)local_58;
  options = (quoting_options *)local_58;
  if ((9 < y_50) && (options = (quoting_options *)local_58, ((x_49 + -1) * x_49 & 1U) != 0))
  goto LAB_00404f64;
  while( true ) {
    options_00 = (quoting_options *)((long)(options + 0xfffffffffffffffe) + 0x30);
    local_38 = ZEXT816(0);
    local_48 = ZEXT816(0);
    local_58 = ZEXT816(0);
    local_28 = 0;
    if (s == custom_quoting_style) {
                    /* WARNING: Subroutine does not return */
      *(undefined *)((long)(options + 0xfffffffffffffffe) + 0x28) = 0x404fd0;
      abort();
    }
    options_00->style = s;
    *(undefined *)((long)(options + 0xffffffffffffffff) + 0x2c) = 0;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x1c) = 0;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x20) = 0;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x24) = 0;
    *(undefined *)((long)(options + 0xffffffffffffffff) + 0x28) = 0;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0xc) = 0;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x10) = 0;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x14) = 0;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x18) = 0;
    *(undefined *)((long)(options + 0xfffffffffffffffe) + 0x34) = 0;
    options[0xffffffffffffffff].style = 0;
    *(int *)((long)(options + 0xffffffffffffffff) + 4) = 0;
    *(uint *)((long)(options + 0xffffffffffffffff) + 8) = 0;
    *(undefined *)((long)(options + 0xfffffffffffffffe) + 0x28) = 0x404f4a;
    pcVar1 = quotearg_n_options(n,arg,0xffffffffffffffff,options_00);
    if ((y_50 < 10) || (((x_49 + -1) * x_49 & 1U) == 0)) break;
LAB_00404f64:
    options = (quoting_options *)((long)(options_00 + 0xfffffffffffffffe) + 0x30);
    local_38 = ZEXT816(0);
    local_48 = ZEXT816(0);
    local_58 = ZEXT816(0);
    local_28 = 0;
    if (s == custom_quoting_style) {
                    /* WARNING: Subroutine does not return */
      *(undefined *)((long)(options_00 + 0xfffffffffffffffe) + 0x28) = 0x404fd5;
      abort();
    }
    options->style = s;
    *(undefined *)((long)(options_00 + 0xffffffffffffffff) + 0x2c) = 0;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x1c) = 0;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x20) = 0;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x24) = 0;
    *(undefined *)((long)(options_00 + 0xffffffffffffffff) + 0x28) = 0;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0xc) = 0;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x10) = 0;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x14) = 0;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x18) = 0;
    *(undefined *)((long)(options_00 + 0xfffffffffffffffe) + 0x34) = 0;
    options_00[0xffffffffffffffff].style = 0;
    *(int *)((long)(options_00 + 0xffffffffffffffff) + 4) = 0;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 8) = 0;
    *(undefined *)((long)(options_00 + 0xfffffffffffffffe) + 0x28) = 0x404fbb;
    quotearg_n_options(n,arg,0xffffffffffffffff,options);
  }
  return pcVar1;
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
  
  pcVar1 = quotearg_n_style(L'\0',s,arg);
  return pcVar1;
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


/* WARNING: Type propagation algorithm not settling */

char * quotearg_char_mem(char *arg,size_t argsize,char ch)

{
  char *pcVar1;
  byte bVar2;
  quoting_options *options;
  quoting_options *options_00;
  ulong uVar3;
  
  options_00 = (quoting_options *)&stack0xffffffffffffffd8;
  bVar2 = ch & 0x1f;
  uVar3 = (ulong)((byte)ch >> 5);
  options = (quoting_options *)&stack0xffffffffffffffd8;
  if ((9 < y_60) &&
     (options = (quoting_options *)&stack0xffffffffffffffd8, ((x_59 + -1) * x_59 & 1U) != 0))
  goto LAB_00405192;
  while( true ) {
    options_00 = (quoting_options *)((long)(options + 0xfffffffffffffffe) + 0x30);
    *(char **)((long)(options + 0xffffffffffffffff) + 0x28) = default_quoting_options.right_quote;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x18) =
         default_quoting_options.quote_these_too[6];
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x1c) =
         default_quoting_options.quote_these_too[7];
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x20) =
         (uint)default_quoting_options.left_quote;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x24) =
         default_quoting_options.left_quote._4_4_;
    *(uint *)((long)(options + 0xffffffffffffffff) + 8) = default_quoting_options.quote_these_too[2]
    ;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0xc) =
         default_quoting_options.quote_these_too[3];
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x10) =
         default_quoting_options.quote_these_too[4];
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x14) =
         default_quoting_options.quote_these_too[5];
    *(enum quoting_style *)((long)(options + 0xfffffffffffffffe) + 0x30) = default_quoting_options.style;
    *(int *)((long)(options + 0xfffffffffffffffe) + 0x34) = default_quoting_options.flags;
    options[0xffffffffffffffff].style = default_quoting_options.quote_these_too[0];
    *(uint *)((long)(options + 0xffffffffffffffff) + 4) = default_quoting_options.quote_these_too[1]
    ;
    *(uint *)((long)(options + 0xffffffffffffffff) + uVar3 * 4) =
         (~(*(uint *)((long)(options + 0xffffffffffffffff) + uVar3 * 4) >> bVar2) & 1) << bVar2 ^
         *(uint *)((long)(options + 0xffffffffffffffff) + uVar3 * 4);
    *(undefined *)((long)(options + 0xfffffffffffffffe) + 0x28) = 0x405178;
    pcVar1 = quotearg_n_options(L'\0',arg,argsize,options_00);
    if ((y_60 < 10) || (((x_59 + -1) * x_59 & 1U) == 0)) break;
LAB_00405192:
    options = (quoting_options *)((long)(options_00 + 0xfffffffffffffffe) + 0x30);
    *(char **)((long)(options_00 + 0xffffffffffffffff) + 0x28) = default_quoting_options.right_quote
    ;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x18) =
         default_quoting_options.quote_these_too[6];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x1c) =
         default_quoting_options.quote_these_too[7];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x20) =
         (uint)default_quoting_options.left_quote;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x24) =
         default_quoting_options.left_quote._4_4_;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 8) =
         default_quoting_options.quote_these_too[2];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0xc) =
         default_quoting_options.quote_these_too[3];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x10) =
         default_quoting_options.quote_these_too[4];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x14) =
         default_quoting_options.quote_these_too[5];
    *(enum quoting_style *)((long)(options_00 + 0xfffffffffffffffe) + 0x30) =
         default_quoting_options.style;
    *(int *)((long)(options_00 + 0xfffffffffffffffe) + 0x34) = default_quoting_options.flags;
    options_00[0xffffffffffffffff].style = default_quoting_options.quote_these_too[0];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 4) =
         default_quoting_options.quote_these_too[1];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + uVar3 * 4) =
         (~(*(uint *)((long)(options_00 + 0xffffffffffffffff) + uVar3 * 4) >> bVar2) & 1) << bVar2 ^
         *(uint *)((long)(options_00 + 0xffffffffffffffff) + uVar3 * 4);
    *(undefined *)((long)(options_00 + 0xfffffffffffffffe) + 0x28) = 0x4051f1;
    quotearg_n_options(L'\0',arg,argsize,options);
  }
  return pcVar1;
}


/* WARNING: Type propagation algorithm not settling */

char * quotearg_char(char *arg,char ch)

{
  ulong uVar1;
  char *pcVar2;
  byte bVar3;
  quoting_options *options;
  quoting_options *options_00;
  
  options_00 = (quoting_options *)&stack0xffffffffffffffd8;
  uVar1 = (ulong)((byte)ch >> 5);
  bVar3 = ch & 0x1f;
  options = (quoting_options *)&stack0xffffffffffffffd8;
  if ((9 < y_60) &&
     (options = (quoting_options *)&stack0xffffffffffffffd8, ((x_59 + -1) * x_59 & 1U) != 0))
  goto LAB_00405192;
  while( true ) {
    options_00 = (quoting_options *)((long)(options + 0xfffffffffffffffe) + 0x30);
    *(char **)((long)(options + 0xffffffffffffffff) + 0x28) = default_quoting_options.right_quote;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x18) =
         default_quoting_options.quote_these_too[6];
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x1c) =
         default_quoting_options.quote_these_too[7];
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x20) =
         (uint)default_quoting_options.left_quote;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x24) =
         default_quoting_options.left_quote._4_4_;
    *(uint *)((long)(options + 0xffffffffffffffff) + 8) = default_quoting_options.quote_these_too[2]
    ;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0xc) =
         default_quoting_options.quote_these_too[3];
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x10) =
         default_quoting_options.quote_these_too[4];
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x14) =
         default_quoting_options.quote_these_too[5];
    *(enum quoting_style *)((long)(options + 0xfffffffffffffffe) + 0x30) = default_quoting_options.style;
    *(int *)((long)(options + 0xfffffffffffffffe) + 0x34) = default_quoting_options.flags;
    options[0xffffffffffffffff].style = default_quoting_options.quote_these_too[0];
    *(uint *)((long)(options + 0xffffffffffffffff) + 4) = default_quoting_options.quote_these_too[1]
    ;
    *(uint *)((long)(options + 0xffffffffffffffff) + uVar1 * 4) =
         (~(*(uint *)((long)(options + 0xffffffffffffffff) + uVar1 * 4) >> bVar3) & 1) << bVar3 ^
         *(uint *)((long)(options + 0xffffffffffffffff) + uVar1 * 4);
    *(undefined *)((long)(options + 0xfffffffffffffffe) + 0x28) = 0x405178;
    pcVar2 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,options_00);
    if ((y_60 < 10) || (((x_59 + -1) * x_59 & 1U) == 0)) break;
LAB_00405192:
    options = (quoting_options *)((long)(options_00 + 0xfffffffffffffffe) + 0x30);
    *(char **)((long)(options_00 + 0xffffffffffffffff) + 0x28) = default_quoting_options.right_quote
    ;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x18) =
         default_quoting_options.quote_these_too[6];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x1c) =
         default_quoting_options.quote_these_too[7];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x20) =
         (uint)default_quoting_options.left_quote;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x24) =
         default_quoting_options.left_quote._4_4_;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 8) =
         default_quoting_options.quote_these_too[2];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0xc) =
         default_quoting_options.quote_these_too[3];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x10) =
         default_quoting_options.quote_these_too[4];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x14) =
         default_quoting_options.quote_these_too[5];
    *(enum quoting_style *)((long)(options_00 + 0xfffffffffffffffe) + 0x30) =
         default_quoting_options.style;
    *(int *)((long)(options_00 + 0xfffffffffffffffe) + 0x34) = default_quoting_options.flags;
    options_00[0xffffffffffffffff].style = default_quoting_options.quote_these_too[0];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 4) =
         default_quoting_options.quote_these_too[1];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + uVar1 * 4) =
         (~(*(uint *)((long)(options_00 + 0xffffffffffffffff) + uVar1 * 4) >> bVar3) & 1) << bVar3 ^
         *(uint *)((long)(options_00 + 0xffffffffffffffff) + uVar1 * 4);
    *(undefined *)((long)(options_00 + 0xfffffffffffffffe) + 0x28) = 0x4051f1;
    quotearg_n_options(L'\0',arg,0xffffffffffffffff,options);
  }
  return pcVar2;
}


/* WARNING: Type propagation algorithm not settling */

char * quotearg_colon(char *arg)

{
  char *pcVar1;
  quoting_options *options;
  quoting_options *options_00;
  
  options_00 = (quoting_options *)&stack0xffffffffffffffd8;
  options = (quoting_options *)&stack0xffffffffffffffd8;
  if ((9 < y_60) &&
     (options = (quoting_options *)&stack0xffffffffffffffd8, ((x_59 + -1) * x_59 & 1U) != 0))
  goto LAB_00405192;
  while( true ) {
    options_00 = (quoting_options *)((long)(options + 0xfffffffffffffffe) + 0x30);
    *(char **)((long)(options + 0xffffffffffffffff) + 0x28) = default_quoting_options.right_quote;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x18) =
         default_quoting_options.quote_these_too[6];
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x1c) =
         default_quoting_options.quote_these_too[7];
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x20) =
         (uint)default_quoting_options.left_quote;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x24) =
         default_quoting_options.left_quote._4_4_;
    *(uint *)((long)(options + 0xffffffffffffffff) + 8) = default_quoting_options.quote_these_too[2]
    ;
    *(uint *)((long)(options + 0xffffffffffffffff) + 0xc) =
         default_quoting_options.quote_these_too[3];
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x10) =
         default_quoting_options.quote_these_too[4];
    *(uint *)((long)(options + 0xffffffffffffffff) + 0x14) =
         default_quoting_options.quote_these_too[5];
    *(enum quoting_style *)((long)(options + 0xfffffffffffffffe) + 0x30) = default_quoting_options.style;
    *(int *)((long)(options + 0xfffffffffffffffe) + 0x34) = default_quoting_options.flags;
    options[0xffffffffffffffff].style = default_quoting_options.quote_these_too[0];
    *(uint *)((long)(options + 0xffffffffffffffff) + 4) = default_quoting_options.quote_these_too[1]
    ;
    *(uint *)((long)(options + 0xffffffffffffffff) + 4) =
         (~((uint)*(int *)((long)(options + 0xffffffffffffffff) + 4) >> 0x1a) & 1) << 0x1a ^
         *(int *)((long)(options + 0xffffffffffffffff) + 4);
    *(undefined *)((long)(options + 0xfffffffffffffffe) + 0x28) = 0x405178;
    pcVar1 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,options_00);
    if ((y_60 < 10) || (((x_59 + -1) * x_59 & 1U) == 0)) break;
LAB_00405192:
    options = (quoting_options *)((long)(options_00 + 0xfffffffffffffffe) + 0x30);
    *(char **)((long)(options_00 + 0xffffffffffffffff) + 0x28) = default_quoting_options.right_quote
    ;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x18) =
         default_quoting_options.quote_these_too[6];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x1c) =
         default_quoting_options.quote_these_too[7];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x20) =
         (uint)default_quoting_options.left_quote;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x24) =
         default_quoting_options.left_quote._4_4_;
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 8) =
         default_quoting_options.quote_these_too[2];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0xc) =
         default_quoting_options.quote_these_too[3];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x10) =
         default_quoting_options.quote_these_too[4];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 0x14) =
         default_quoting_options.quote_these_too[5];
    *(enum quoting_style *)((long)(options_00 + 0xfffffffffffffffe) + 0x30) =
         default_quoting_options.style;
    *(int *)((long)(options_00 + 0xfffffffffffffffe) + 0x34) = default_quoting_options.flags;
    options_00[0xffffffffffffffff].style = default_quoting_options.quote_these_too[0];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 4) =
         default_quoting_options.quote_these_too[1];
    *(uint *)((long)(options_00 + 0xffffffffffffffff) + 4) =
         (~((uint)*(int *)((long)(options_00 + 0xffffffffffffffff) + 4) >> 0x1a) & 1) << 0x1a ^
         *(int *)((long)(options_00 + 0xffffffffffffffff) + 4);
    *(undefined *)((long)(options_00 + 0xfffffffffffffffe) + 0x28) = 0x4051f1;
    quotearg_n_options(L'\0',arg,0xffffffffffffffff,options);
  }
  return pcVar1;
}


char * quotearg_colon_mem(char *arg,size_t argsize)

{
  char *pcVar1;
  
  if ((9 < y_66) && (((x_65 + -1) * x_65 & 1U) != 0)) goto LAB_0040528e;
  while( true ) {
    pcVar1 = quotearg_char_mem(arg,argsize,':');
    if ((y_66 < 10) || (((x_65 + -1) * x_65 & 1U) == 0)) break;
LAB_0040528e:
    quotearg_char_mem(arg,argsize,':');
  }
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
  
  if ((9 < y_78) && (((x_77 + -1) * x_77 & 1U) != 0)) goto LAB_00405562;
  while( true ) {
    pcVar1 = quotearg_n_options(n,arg,argsize,&quote_quoting_options);
    if ((y_78 < 10) || (((x_77 + -1) * x_77 & 1U) == 0)) break;
LAB_00405562:
    quotearg_n_options(n,arg,argsize,&quote_quoting_options);
  }
  return pcVar1;
}


char * quote_mem(char *arg,size_t argsize)

{
  char *pcVar1;
  
  if ((9 < y_78) && (((x_77 + -1) * x_77 & 1U) != 0)) goto LAB_004055d0;
  while( true ) {
    pcVar1 = quotearg_n_options(L'\0',arg,argsize,&quote_quoting_options);
    if ((y_78 < 10) || (((x_77 + -1) * x_77 & 1U) == 0)) break;
LAB_004055d0:
    quotearg_n_options(L'\0',arg,argsize,&quote_quoting_options);
  }
  return pcVar1;
}


char * quote_n(wchar_t n,char *arg)

{
  char *pcVar1;
  
  if ((9 < y_78) && (((x_77 + -1) * x_77 & 1U) != 0)) goto LAB_00405642;
  while( true ) {
    pcVar1 = quotearg_n_options(n,arg,0xffffffffffffffff,&quote_quoting_options);
    if ((y_78 < 10) || (((x_77 + -1) * x_77 & 1U) == 0)) break;
LAB_00405642:
    quotearg_n_options(n,arg,0xffffffffffffffff,&quote_quoting_options);
  }
  return pcVar1;
}


char * quote(char *arg)

{
  char *pcVar1;
  
  if ((9 < y_78) && (((x_77 + -1) * x_77 & 1U) != 0)) goto LAB_004056be;
  while( true ) {
    pcVar1 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,&quote_quoting_options);
    if ((y_78 < 10) || (((x_77 + -1) * x_77 & 1U) == 0)) break;
LAB_004056be:
    quotearg_n_options(L'\0',arg,0xffffffffffffffff,&quote_quoting_options);
  }
  return pcVar1;
}


char * gettext_quote(char *msgid,enum quoting_style s)

{
  wchar_t wVar1;
  char *pcVar2;
  char *pcVar3;
  char unaff_BL;
  char unaff_BPL;
  char unaff_R14B;
  bool bVar4;
  
  pcVar2 = (char *)dcgettext(0,msgid,5);
  if (pcVar2 == msgid) {
    pcVar2 = locale_charset();
    wVar1 = strcaseeq0(pcVar2,(char *)0x55,'T','F','-','8','\0','\0',unaff_BL,unaff_R14B,unaff_BPL);
    if (wVar1 == L'\0') {
      if ((9 < y_86) && (((x_85 + -1) * x_85 & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      wVar1 = strcaseeq0(pcVar2,(char *)0x47,'B','1','8','0','3','0',unaff_BL,unaff_R14B,unaff_BPL);
      if (wVar1 == L'\0') {
        bVar4 = s == clocale_quoting_style;
        pcVar3 = "\"";
        pcVar2 = "\'";
      }
      else {
        bVar4 = *msgid == '`';
        pcVar3 = &DAT_00408954;
        pcVar2 = &DAT_00408958;
      }
    }
    else {
      bVar4 = *msgid == '`';
      pcVar3 = &DAT_0040894c;
      pcVar2 = &DAT_00408950;
    }
    if (bVar4) {
      pcVar2 = pcVar3;
    }
  }
  if ((9 < y_86) && (((x_85 + -1) * x_85 & 1U) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return pcVar2;
}


/* WARNING: Type propagation algorithm not settling */

wchar_t strcaseeq0(char *s1,char *s2,char s20,char s21,char s22,char s23,char s24,char s25,char s26,
                  char s27,char s28)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined uVar10;
  
  if ((9 < y_88) && (((x_87 + -1) * x_87 & 1U) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  cVar6 = (char)s2;
  if ((int)cVar6 - 0x41U < 0x1a) {
    if (((int)*s1 & 0xffffffdfU) != (int)cVar6) {
      return L'\0';
    }
  }
  else if (*s1 != cVar6) {
    return L'\0';
  }
  if (cVar6 != '\0') {
    if ((int)s20 - 0x41U < 0x1a) {
      if (((int)s1[1] & 0xffffffdfU) != (int)s20) {
        return L'\0';
      }
    }
    else if (s1[1] != s20) {
      return L'\0';
    }
    if (s20 != '\0') {
      cVar6 = s1[2];
      uVar3 = (uint)s22;
      uVar7 = (uint)s23;
      bVar8 = ((x_99 + -1) * x_99 & 1U) != 0;
      uVar5 = (uint)s24;
      bVar9 = ((x_91 + -1) * x_91 & 1U) != 0;
      bVar2 = 9 < y_92;
      uVar4 = (uint)s25;
      do {
        if ((int)s21 - 0x41U < 0x1a) {
          if (((int)cVar6 & 0xffffffdfU) == (int)s21) {
            if (bVar2 && bVar9) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            if (s21 != '\0') goto LAB_00405a25;
            uVar10 = true;
          }
          else {
            if (bVar2 && bVar9) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            uVar10 = false;
          }
        }
        else {
          if (bVar2 && bVar9) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar10 = cVar6 == s21;
          if (cVar6 == s21 && s21 != '\0') {
LAB_00405a25:
            cVar1 = s1[3];
            if (uVar3 - 0x41 < 0x1a) {
              uVar10 = ((int)cVar1 & 0xffffffdfU) == uVar3;
              if ((s22 != '\0') && (((int)cVar1 & 0xffffffdfU) == uVar3)) {
LAB_00405aa1:
                cVar1 = s1[4];
                if (uVar7 - 0x41 < 0x1a) {
                  uVar10 = ((int)cVar1 & 0xffffffdfU) == uVar7;
                  if ((s23 != '\0') && (((int)cVar1 & 0xffffffdfU) == uVar7)) {
LAB_00405ae6:
                    cVar1 = s1[5];
                    if (uVar5 - 0x41 < 0x1a) {
                      if (9 < y_98 && ((x_97 + -1) * x_97 & 1U) != 0) {
                        do {
                    /* WARNING: Do nothing block with infinite loop */
                        } while( true );
                      }
                      uVar10 = ((int)cVar1 & 0xffffffdfU) == uVar5;
                      if ((s24 != '\0') && (((int)cVar1 & 0xffffffdfU) == uVar5)) {
LAB_00405b41:
                        cVar1 = s1[6];
                        if (uVar4 - 0x41 < 0x1a) {
                          if (9 < y_100 && bVar8) {
                            do {
                    /* WARNING: Do nothing block with infinite loop */
                            } while( true );
                          }
                          uVar10 = ((int)cVar1 & 0xffffffdfU) == uVar4;
                          if ((s25 != '\0') && (((int)cVar1 & 0xffffffdfU) == uVar4)) {
LAB_00405bce:
                            if (9 < y_102 && ((x_101 + -1) * x_101 & 1U) != 0) {
                              do {
                    /* WARNING: Do nothing block with infinite loop */
                              } while( true );
                            }
                            if (9 < y_100 && bVar8) {
                              do {
                    /* WARNING: Do nothing block with infinite loop */
                              } while( true );
                            }
                            uVar10 = s1[7] == '\0';
                          }
                        }
                        else {
                          uVar10 = cVar1 == s25;
                          if ((s25 != '\0') && (cVar1 == s25)) goto LAB_00405bce;
                        }
                      }
                    }
                    else {
                      uVar10 = cVar1 == s24;
                      if ((s24 != '\0') && (cVar1 == s24)) goto LAB_00405b41;
                    }
                  }
                }
                else {
                  uVar10 = cVar1 == s23;
                  if ((s23 != '\0') && (cVar1 == s23)) goto LAB_00405ae6;
                }
              }
            }
            else {
              if (9 < y_94 && ((x_93 + -1) * x_93 & 1U) != 0) {
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
              uVar10 = cVar1 == s22;
              if ((s22 != '\0') && (cVar1 == s22)) goto LAB_00405aa1;
            }
          }
        }
        if (y_90 < 10 || ((x_89 + -1) * x_89 & 1U) == 0) {
          return (uint)(byte)uVar10;
        }
      } while( true );
    }
    if (9 < y_90) {
      if (((x_89 + -1) * x_89 & 1U) == 0) {
        return L'\x01';
      }
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  return L'\x01';
}


void version_etc_arn(FILE *stream,char *command_name,char *package,char *version,char **authors,
                    size_t n_authors)

{
  undefined uVar1;
  char *__s;
  
  if (command_name == (char *)0x0) {
    if ((9 < y) && (((x + -1) * x & 1U) != 0)) goto LAB_00405d8a;
    while ((__fprintf_chk(stream,1,"%s %s\n",package,version), 9 < y && (((x + -1) * x & 1U) != 0)))
    {
LAB_00405d8a:
      __fprintf_chk(stream,1,"%s %s\n",package,version);
    }
  }
  else {
    __fprintf_chk(stream,1,"%s (%s) %s\n",command_name,package,version);
  }
  uVar1 = dcgettext(0,&DAT_004089c3,5);
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
    if ((9 < y) && (((x + -1) * x & 1U) != 0)) goto LAB_00406069;
    while( true ) {
      uVar1 = dcgettext(0,"Written by %s, %s, and %s.\n",5);
      __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2]);
      if ((y < 10) || (((x + -1) * x & 1U) == 0)) break;
LAB_00406069:
      uVar1 = dcgettext(0,"Written by %s, %s, and %s.\n",5);
      __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2]);
    }
    break;
  case 4:
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
    __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3]);
    break;
  case 5:
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
    __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4]);
    break;
  case 6:
    if ((9 < y) && (((x + -1) * x & 1U) != 0)) goto LAB_00406100;
    while( true ) {
      uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
      __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4],authors[5]);
      if ((y < 10) || (((x + -1) * x & 1U) == 0)) break;
LAB_00406100:
      uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
      __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4],authors[5]);
    }
    break;
  case 7:
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
    __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4],authors[5],
                  authors[6]);
    break;
  case 8:
    if ((9 < y) && (((x + -1) * x & 1U) != 0)) goto LAB_004061b9;
    while( true ) {
      uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
      __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4],authors[5],
                    authors[6],authors[7]);
      if ((y < 10) || (((x + -1) * x & 1U) == 0)) break;
LAB_004061b9:
      uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
      __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4],authors[5],
                    authors[6],authors[7]);
    }
    break;
  case 9:
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n",5);
    __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4],authors[5],
                  authors[6],authors[7],authors[8]);
    break;
  default:
    if ((9 < y) && (((x + -1) * x & 1U) != 0)) goto LAB_00406272;
    while( true ) {
      uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n",5);
      __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4],authors[5],
                    authors[6],authors[7],authors[8]);
      if ((y < 10) || (((x + -1) * x & 1U) == 0)) break;
LAB_00406272:
      uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n",5);
      __fprintf_chk(stream,1,uVar1,*authors,authors[1],authors[2],authors[3],authors[4],authors[5],
                    authors[6],authors[7],authors[8]);
    }
  }
  return;
}


void version_etc_ar(FILE *stream,char *command_name,char *package,char *version,char **authors)

{
  long lVar1;
  size_t n_authors;
  
  n_authors = 0xffffffffffffffff;
  do {
    if (9 < y_21 && ((x_20 + -1) * x_20 & 1U) != 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    lVar1 = n_authors + 1;
    n_authors = n_authors + 1;
  } while (authors[lVar1] != (char *)0x0);
  version_etc_arn(stream,command_name,package,version,authors,n_authors);
  return;
}


void version_etc_va(FILE *stream,char *command_name,char *package,char *version,
                   __va_list_tag *authors)

{
  char *pcVar1;
  char **authors_00;
  char **ppcVar2;
  uint uVar3;
  size_t n_authors;
  char **ppcVar4;
  undefined auStack_18 [8];
  
  uVar3 = (x_22 + -1) * x_22;
  authors_00 = (char **)auStack_18;
  do {
    ppcVar2 = authors_00;
    authors_00 = ppcVar2 + -10;
  } while (9 < y_23 && (uVar3 & 1) != 0);
  if ((y_23 < 10) || ((uVar3 & 1) == 0)) {
    n_authors = 0;
    do {
      if (9 < n_authors) {
LAB_004063e2:
        ppcVar2[-0xb] = (char *)0x4063ea;
        version_etc_arn(stream,command_name,package,version,authors_00,n_authors);
        return;
      }
      uVar3 = authors->gp_offset;
      if ((ulong)(long)(int)uVar3 < 0x29) {
        ppcVar4 = (char **)((long)(int)uVar3 + (long)authors->reg_save_area);
        authors->gp_offset = uVar3 + 8;
      }
      else {
        ppcVar4 = (char **)authors->overflow_arg_area;
        authors->overflow_arg_area = ppcVar4 + 1;
      }
      pcVar1 = *ppcVar4;
      authors_00[n_authors] = pcVar1;
      if (pcVar1 == (char *)0x0) goto LAB_004063e2;
      n_authors = n_authors + 1;
    } while ((y_23 < 10) || (((x_22 + -1) * x_22 & 1U) == 0));
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
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
  char *pcVar2;
  
  if ((9 < y_27) && (((x_26 + -1) * x_26 & 1U) != 0)) goto LAB_0040653f;
  while( true ) {
    uVar1 = dcgettext(0,"\nReport bugs to: %s\n",5);
    __printf_chk(1,uVar1,"bug-coreutils@gnu.org");
    uVar1 = dcgettext(0,"%s home page: <%s>\n",5);
    __printf_chk(1,uVar1,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar2 = (char *)dcgettext(0,"General help using GNU software: <https://www.gnu.org/gethelp/>\n"
                               ,5);
    fputs_unlocked(pcVar2,stdout);
    if ((y_27 < 10) || (((x_26 + -1) * x_26 & 1U) == 0)) break;
LAB_0040653f:
    uVar1 = dcgettext(0,"\nReport bugs to: %s\n",5);
    __printf_chk(1,uVar1,"bug-coreutils@gnu.org");
    uVar1 = dcgettext(0,"%s home page: <%s>\n",5);
    __printf_chk(1,uVar1,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar2 = (char *)dcgettext(0,"General help using GNU software: <https://www.gnu.org/gethelp/>\n"
                               ,5);
    fputs_unlocked(pcVar2,stdout);
  }
  return;
}


void * xnmalloc(size_t n,size_t s)

{
  bool bVar1;
  void *pvVar2;
  uint uVar3;
  
  if ((9 < y) && (((x + -1) * x & 1U) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (n <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0)) {
    uVar3 = (x_1 + -1) * x_1;
    bVar1 = 9 < y_2;
    do {
      pvVar2 = malloc(s * n);
    } while (bVar1 && (uVar3 & 1) != 0);
    if ((s * n == 0) || (pvVar2 != (void *)0x0)) {
      return pvVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}


void * xmalloc(size_t n)

{
  bool bVar1;
  void *pvVar2;
  uint uVar3;
  
  uVar3 = (x_1 + -1) * x_1;
  bVar1 = 9 < y_2;
  do {
    pvVar2 = malloc(n);
  } while (bVar1 && (uVar3 & 1) != 0);
  if ((n != 0) && (pvVar2 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  return pvVar2;
}


void * xnrealloc(void *p,size_t n,size_t s)

{
  void *pvVar1;
  
  if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0) < n) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  if ((9 < y_4) && (((x_3 + -1) * x_3 & 1U) != 0)) goto LAB_00406728;
  while ((pvVar1 = xrealloc(p,s * n), 9 < y_4 && (((x_3 + -1) * x_3 & 1U) != 0))) {
LAB_00406728:
    xrealloc(p,s * n);
  }
  return pvVar1;
}


void * xrealloc(void *p,size_t n)

{
  void *pvVar1;
  
  if ((p == (void *)0x0) || (n != 0)) {
    pvVar1 = realloc(p,n);
    if ((n != 0) && (pvVar1 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
  }
  else {
    if ((9 < y_6) && (((x_5 + -1) * x_5 & 1U) != 0)) goto LAB_004067ae;
    while( true ) {
      free(p);
      pvVar1 = (void *)0x0;
      if ((y_6 < 10) || (((x_5 + -1) * x_5 & 1U) == 0)) break;
LAB_004067ae:
      free(p);
    }
  }
  return pvVar1;
}


void * x2nrealloc(void *p,size_t *pn,size_t s)

{
  void *pvVar1;
  ulong uVar2;
  
  uVar2 = *pn;
  if (p == (void *)0x0) {
    if (uVar2 == 0) {
      if ((9 < y_8) && (((x_7 + -1) * x_7 & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar2 = (ulong)(0x80 < s) + SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(s),0);
    }
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0) < uVar2) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
  }
  else {
    if ((9 < y_8) && (((x_7 + -1) * x_7 & 1U) != 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554)) / ZEXT816(s),0) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    uVar2 = uVar2 + 1 + (uVar2 >> 1);
  }
  *pn = uVar2;
  pvVar1 = xrealloc(p,s * uVar2);
  return pvVar1;
}


char * xcharalloc(size_t n)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = (x_1 + -1) * x_1;
  bVar1 = 9 < y_2;
  do {
    pcVar2 = (char *)malloc(n);
  } while (bVar1 && (uVar3 & 1) != 0);
  if ((n != 0) && (pcVar2 == (char *)0x0)) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  return pcVar2;
}


void * x2realloc(void *p,size_t *pn)

{
  void *pvVar1;
  size_t sVar2;
  
  if ((9 < y_12) && (((x_11 + -1) * x_11 & 1U) != 0)) goto LAB_0040699b;
  while( true ) {
    sVar2 = *pn;
    if (p == (void *)0x0) {
      if (sVar2 == 0) {
        sVar2 = 0x80;
        if ((9 < y_8) && (((x_7 + -1) * x_7 & 1U) != 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
      else if ((long)sVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        xalloc_die();
      }
    }
    else {
      if ((9 < y_8) && (((x_7 + -1) * x_7 & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (0x5555555555555553 < sVar2) {
                    /* WARNING: Subroutine does not return */
        xalloc_die();
      }
      sVar2 = sVar2 + 1 + (sVar2 >> 1);
    }
    *pn = sVar2;
    pvVar1 = xrealloc(p,sVar2);
    if ((y_12 < 10) || (((x_11 + -1) * x_11 & 1U) == 0)) break;
LAB_0040699b:
    sVar2 = *pn;
    if (p == (void *)0x0) {
      if (sVar2 == 0) {
        sVar2 = 0x80;
        if ((9 < y_8) && (((x_7 + -1) * x_7 & 1U) != 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
      else if ((long)sVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        xalloc_die();
      }
    }
    else {
      if ((9 < y_8) && (((x_7 + -1) * x_7 & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (0x5555555555555553 < sVar2) {
                    /* WARNING: Subroutine does not return */
        xalloc_die();
      }
      sVar2 = sVar2 + 1 + (sVar2 >> 1);
    }
    *pn = sVar2;
    xrealloc(p,sVar2);
  }
  return pvVar1;
}


void * xzalloc(size_t s)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *__s;
  uint uVar4;
  
  iVar3 = y_2;
  iVar2 = y_14;
  iVar1 = x_1;
  uVar4 = (x_13 + -1) * x_13 & 1;
  if ((9 < y_14) && (uVar4 != 0)) goto LAB_00406af4;
  do {
    do {
      __s = malloc(s);
    } while (9 < iVar3 && ((iVar1 + -1) * iVar1 & 1U) != 0);
    if ((s != 0) && (__s == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    memset(__s,0,s);
    if ((iVar2 < 10) || (uVar4 == 0)) {
      return __s;
    }
INVALID_JUMP;
  } while ((iVar3 < 10) || (((iVar1 + -1) * iVar1 & 1U) == 0));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
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
  bool bVar1;
  void *__dest;
  uint uVar2;
  
  uVar2 = (x_1 + -1) * x_1;
  bVar1 = 9 < y_2;
  do {
    __dest = malloc(s);
  } while (bVar1 && (uVar2 & 1) != 0);
  if ((s != 0) && (__dest == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  memcpy(__dest,p,s);
  return __dest;
}


char * xstrdup(char *string)

{
  bool bVar1;
  size_t sVar2;
  char *__dest;
  uint uVar3;
  
  sVar2 = strlen(string);
  sVar2 = sVar2 + 1;
  uVar3 = (x_1 + -1) * x_1;
  bVar1 = 9 < y_2;
  do {
    __dest = (char *)malloc(sVar2);
  } while (bVar1 && (uVar3 & 1) != 0);
  if ((sVar2 != 0) && (__dest == (char *)0x0)) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  memcpy(__dest,string,sVar2);
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
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  size_t __size;
  size_t __nmemb;
  
  __size = 1;
  if (n == 0) {
    __nmemb = 1;
  }
  else {
    __nmemb = 1;
    if (s != 0) {
      if ((9 < y) && (((x + -1) * x & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      __size = s;
      __nmemb = n;
      if ((s * n) / s != n) {
        piVar4 = __errno_location();
        *piVar4 = 0xc;
        return (void *)0x0;
      }
    }
  }
  uVar2 = (x + -1) * x;
  bVar1 = 9 < y;
  do {
    pvVar3 = calloc(__nmemb,__size);
  } while (bVar1 && (uVar2 & 1) != 0);
  return pvVar3;
}


size_t rpl_mbrtowc(wchar_t *pwc,char *s,size_t n,mbstate_t *ps)

{
  _Bool _Var1;
  size_t sVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined auStack_40 [3];
  
  pwVar3 = (wchar_t *)&stack0xffffffffffffffd8;
  do {
    pwVar4 = pwVar3;
    pwVar3 = pwVar4 + -4;
  } while (9 < y && ((x + -1) * x & 1U) != 0);
  if (pwc != (wchar_t *)0x0) {
    pwVar3 = pwc;
  }
  *(undefined *)(pwVar4 + -6) = 0x406d83;
  sVar2 = mbrtowc(pwVar3,s,n,(mbstate_t *)ps);
  if ((n != 0) && (0xfffffffffffffffd < sVar2)) {
    *(undefined *)(pwVar4 + -6) = 0x406d98;
    _Var1 = hard_locale(0);
    if (!_Var1) {
      *pwVar3 = (uint)(byte)*s;
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
  int iVar6;
  
  if ((9 < y) && (((x + -1) * x & 1U) != 0)) goto LAB_00406e1a;
  while( true ) {
    lVar3 = __fpending(stream);
    uVar1 = stream->_flags;
    iVar2 = rpl_fclose(stream);
    iVar5 = y;
    iVar6 = x;
    if ((y < 10) || (((x + -1) * x & 1U) == 0)) break;
LAB_00406e1a:
    __fpending(stream);
    rpl_fclose(stream);
  }
  if ((uVar1 & 0x20) == 0) {
    if (iVar2 == 0) {
      return 0;
    }
    if ((lVar3 == 0) && (piVar4 = __errno_location(), *piVar4 == 9)) {
      return 0;
    }
  }
  else if (iVar2 == 0) {
    piVar4 = __errno_location();
    *piVar4 = 0;
    iVar6 = x;
    iVar5 = y;
  }
  if ((9 < iVar5) && (((iVar6 + -1) * iVar6 & 1U) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return -1;
}


_Bool hard_locale(int category)

{
  int iVar1;
  char *__s1;
  _Bool _Var2;
  
  __s1 = setlocale(category,(char *)0x0);
  _Var2 = true;
  if ((__s1 != (char *)0x0) &&
     ((iVar1 = strcmp(__s1,"C"), iVar1 == 0 || (iVar1 = strcmp(__s1,"POSIX"), iVar1 == 0)))) {
    _Var2 = false;
    if ((9 < y) && (_Var2 = false, ((x + -1) * x & 1U) != 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
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
  
  if ((9 < y) && (((x + -1) * x & 1U) != 0)) goto LAB_00406f73;
  while( true ) {
    iVar1 = fileno((FILE *)fp);
    if ((y < 10) || (((x + -1) * x & 1U) == 0)) break;
LAB_00406f73:
    fileno((FILE *)fp);
  }
  if (-1 < iVar1) {
    iVar1 = __freading(fp);
    if (iVar1 != 0) {
      iVar1 = fileno((FILE *)fp);
      _Var3 = lseek(iVar1,0,1);
      if (_Var3 == -1) goto LAB_00406fd2;
    }
    iVar1 = rpl_fflush(fp);
    if (iVar1 != 0) {
      if ((9 < y) && (((x + -1) * x & 1U) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      piVar4 = __errno_location();
      iVar1 = *piVar4;
      iVar2 = fclose((FILE *)fp);
      if (iVar1 != 0) {
        if ((9 < y) && (((x + -1) * x & 1U) != 0)) goto LAB_00407031;
        while( true ) {
          *piVar4 = iVar1;
          iVar2 = -1;
          if ((y < 10) || (((x + -1) * x & 1U) == 0)) break;
LAB_00407031:
          *piVar4 = iVar1;
        }
      }
      return iVar2;
    }
  }
LAB_00406fd2:
  iVar1 = fclose((FILE *)fp);
  return iVar1;
}


int rpl_fflush(FILE *stream)

{
  int iVar1;
  
  if (stream != (FILE *)0x0) {
    if ((9 < y) && (((x + -1) * x & 1U) != 0)) goto LAB_00407085;
    while( true ) {
      iVar1 = __freading(stream);
      if ((y < 10) || (((x + -1) * x & 1U) == 0)) break;
LAB_00407085:
      __freading(stream);
    }
    if (iVar1 != 0) {
      while( true ) {
        if ((*(byte *)((long)&stream->_flags + 1) & 1) != 0) {
          rpl_fseeko(stream,0,1);
        }
        if ((9 < y_2) && (((x_1 + -1) * x_1 & 1U) != 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        iVar1 = fflush((FILE *)stream);
        if ((y < 10) || (((x + -1) * x & 1U) == 0)) {
          return iVar1;
        }
        if ((*(byte *)((long)&stream->_flags + 1) & 1) != 0) {
          rpl_fseeko(stream,0,1);
        }
        if ((9 < y_2) && (((x_1 + -1) * x_1 & 1U) != 0)) break;
        fflush((FILE *)stream);
      }
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  iVar1 = fflush((FILE *)stream);
  return iVar1;
}


int rpl_fseeko(FILE *fp,off_t offset,int whence)

{
  int iVar1;
  __off_t _Var2;
  
  if (fp->_IO_read_end == fp->_IO_read_ptr) {
    if ((9 < y) && (((x + -1) * x & 1U) != 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if ((fp->_IO_write_ptr == fp->_IO_write_base) && (fp->_IO_save_base == (char *)0x0)) {
      iVar1 = fileno((FILE *)fp);
      _Var2 = lseek(iVar1,offset,whence);
      if (_Var2 == -1) {
        iVar1 = -1;
        if ((9 < y) && (((x + -1) * x & 1U) != 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
      else {
        *(byte *)&fp->_flags = *(byte *)&fp->_flags & 0xef;
        fp->_offset = _Var2;
        iVar1 = 0;
      }
      return iVar1;
    }
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

