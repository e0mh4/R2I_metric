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
                               "Print the number of processing units available to the current process,\nwhich may be less than the number of online processors\n\n"
                               ,5);
    fputs_unlocked(pcVar3,stdout);
    pcVar3 = (char *)dcgettext(0,
                               "      --all      print the number of installed processors\n      --ignore=N  if possible, exclude N processing units\n"
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
    __printf_chk(1,uVar2,"https://www.gnu.org/software/coreutils/","nproc");
    uVar2 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
    __printf_chk(1,uVar2,"nproc"," invocation");
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
  nproc_query nVar1;
  int iVar2;
  char *err;
  uintmax_t uVar3;
  ulong uVar4;
  undefined uVar5;
  char *pcVar6;
  long lVar7;
  nproc_query query;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  uVar3 = 0;
  nVar1 = NPROC_CURRENT_OVERRIDABLE;
  while( true ) {
    query = nVar1;
    iVar2 = getopt_long(argc,argv,"",longopts,0);
    pcVar6 = optarg;
    if (iVar2 < 0x80) break;
    nVar1 = NPROC_ALL;
    if (iVar2 != 0x80) {
      if (iVar2 != 0x81) goto LAB_00402772;
      err = (char *)dcgettext(0,"invalid number",5);
      uVar3 = xdectoumax(pcVar6,0,0xffffffffffffffff,"",err,0);
      nVar1 = query;
    }
  }
  if (iVar2 == -1) {
    if (optind != argc) {
      uVar5 = dcgettext(0,"extra operand %s",5);
      pcVar6 = quote(argv[optind]);
      error(0,0,uVar5,pcVar6);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    uVar4 = num_processors(query);
    lVar7 = 1;
    if (uVar3 < uVar4) {
      lVar7 = uVar4 - uVar3;
    }
    __printf_chk(1,&DAT_00407222,lVar7);
    return 0;
  }
  if (iVar2 == -0x83) {
    version_etc(stdout,"nproc","GNU coreutils",Version,"Giuseppe Scrivano",0);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
    usage(0);
  }
LAB_00402772:
                    /* WARNING: Subroutine does not return */
  usage(1);
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


ulong num_processors(nproc_query query)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  cpu_set_t local_90;
  
  uVar5 = 0xffffffffffffffff;
  if (query == NPROC_CURRENT_OVERRIDABLE) {
    pcVar2 = getenv("OMP_NUM_THREADS");
    uVar3 = parse_omp_threads(pcVar2);
    pcVar2 = getenv("OMP_THREAD_LIMIT");
    uVar5 = parse_omp_threads(pcVar2);
    uVar5 = -(ulong)(uVar5 == 0) | uVar5;
    uVar4 = uVar5;
    if (uVar3 < uVar5) {
      uVar4 = uVar3;
    }
    if (uVar3 != 0) {
      return uVar4;
    }
    query = NPROC_CURRENT;
  }
  if (query == NPROC_CURRENT) {
    iVar1 = sched_getaffinity(0,0x80,&local_90);
    if ((iVar1 == 0) && (iVar1 = __sched_cpucount(0x80,&local_90), iVar1 != 0)) {
      uVar4 = (ulong)iVar1;
      goto LAB_00402945;
    }
    uVar4 = sysconf(0x54);
joined_r0x00402927:
    if (0 < (long)uVar4) goto LAB_00402945;
  }
  else {
    uVar4 = sysconf(0x53);
    if (uVar4 != 1) goto joined_r0x00402927;
    iVar1 = sched_getaffinity(0,0x80,&local_90);
    if ((iVar1 == 0) && (iVar1 = __sched_cpucount(0x80,&local_90), iVar1 != 0)) {
      uVar4 = (ulong)iVar1;
      goto joined_r0x00402927;
    }
  }
  uVar4 = 1;
LAB_00402945:
  if (uVar4 < uVar5) {
    uVar5 = uVar4;
  }
  return uVar5;
}


ulong parse_omp_threads(char *threads)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;
  char *local_8;
  
  if (threads != (char *)0x0) {
    cVar2 = *threads;
    while (cVar2 != '\0') {
      if ((0x17 < (int)cVar2 - 9U) ||
         (uVar4 = 0x80001f >> ((byte)((int)cVar2 - 9U) & 0x1f),
         ((uVar4 ^ 0xfffffe) & uVar4 & 0xffffff) == 0)) goto LAB_004029b2;
      pcVar1 = threads + 1;
      threads = threads + 1;
      cVar2 = *pcVar1;
    }
    cVar2 = '\0';
LAB_004029b2:
    if ((int)cVar2 - 0x30U < 10) {
      local_8 = (char *)0x0;
      uVar3 = strtoul(threads,&local_8,10);
      if (local_8 != (char *)0x0) {
        cVar2 = *local_8;
        while (((cVar2 != '\0' && ((int)cVar2 - 9U < 0x18)) &&
               ((~(0x80001fU >> ((byte)((int)cVar2 - 9U) & 0x1f)) | 0xfffffffe) != 0xffffffff))) {
          cVar2 = local_8[1];
          local_8 = local_8 + 1;
        }
        if (*local_8 == ',') {
          return uVar3;
        }
        if (*local_8 == '\0') {
          return uVar3;
        }
      }
    }
  }
  return 0;
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
  uint uVar1;
  wchar_t wVar2;
  uint uVar3;
  quoting_options *pqVar4;
  
  pqVar4 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar4 = o;
  }
  uVar1 = pqVar4->quote_these_too[(byte)c >> 5];
  uVar3 = uVar1 >> (c & 0x1fU);
  wVar2 = (uVar3 ^ 0xfffffffe) & uVar3;
  uVar3 = ((~i | 0xfffffffeU) & wVar2 | ~wVar2 & i & 1U) << (c & 0x1fU);
  pqVar4->quote_these_too[(byte)c >> 5] =
       (uVar1 & 0x62131bca | ~uVar1 & 0x9dece435) ^ (uVar3 & 0x62131bca | ~uVar3 & 0x9dece435);
  return wVar2;
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
  if (((right_quote != (char *)0x0) == (left_quote != (char *)0x0)) && (left_quote != (char *)0x0))
  {
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


/* WARNING: Removing unreachable block (ram,0x00402dcf) */
/* WARNING: Type propagation algorithm not settling */

size_t quotearg_buffer_restyled
                 (char *buffer,size_t buffersize,char *arg,size_t argsize,
                 enum quoting_style quoting_style,wchar_t flags,uint *quote_these_too,char *left_quote,
                 char *right_quote)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  enum quoting_style qVar4;
  ulong uVar5;
  undefined extraout_var;
  ushort **ppuVar6;
  size_t sVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  size_t __n;
  ulong uVar14;
  bool bVar15;
  enum quoting_style quoting_style_00;
  byte bVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  ulong local_b0;
  char *local_a8;
  ulong local_a0;
  ulong local_90;
  char *local_80;
  char *local_78;
  mbstate_t local_68;
  uint local_5c;
  uint local_58;
  wchar_t local_54;
  char *local_50;
  ulong local_48;
  ulong local_40;
  size_t local_38;
  
  local_78 = right_quote;
  local_80 = left_quote;
  local_38 = __ctype_get_mb_cur_max();
  uVar5 = (ulong)((uint)flags >> 1) & 1;
  local_58 = (flags ^ 0xfffffffeU) & flags;
  local_5c = (flags ^ 0xfffffffbU) & flags;
  bVar16 = 1;
  local_90 = 0;
  local_a8 = (char *)0x0;
  __n = 0;
  bVar9 = 0;
  local_48 = 0;
  local_b0 = argsize;
  bVar10 = 0;
  do {
    if (custom_quoting_style < quoting_style) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar19 = 0;
    uVar14 = 0;
    bVar12 = (byte)uVar5;
    bVar20 = 1;
    bVar8 = bVar10;
    qVar4 = escape_quoting_style;
    switch(quoting_style) {
    case literal_quoting_style:
      uVar19 = 0;
      uVar14 = 0;
      bVar20 = bVar10;
      qVar4 = literal_quoting_style;
      break;
    case shell_always_quoting_style:
      goto switchD_00402e67_caseD_2;
    case shell_escape_quoting_style:
      bVar10 = 1;
    case shell_quoting_style:
      uVar5 = 1;
switchD_00402e67_caseD_4:
      bVar8 = 1;
      if ((byte)(((byte)uVar5 ^ 0xfe) & (byte)uVar5) != 0) {
        bVar8 = bVar10;
      }
switchD_00402e67_caseD_2:
      if ((byte)(((byte)uVar5 ^ 0xfe) & (byte)uVar5) == 0) {
        if (buffersize != 0) {
          *buffer = '\'';
        }
        uVar19 = 1;
      }
      else {
        uVar19 = 0;
      }
      local_a8 = "\'";
      __n = 1;
      uVar14 = uVar5 & 0xff;
      bVar20 = bVar8;
      qVar4 = shell_always_quoting_style;
      break;
    case shell_escape_always_quoting_style:
      goto switchD_00402e67_caseD_4;
    case c_quoting_style:
      if (((bVar12 ^ 0xfe) & bVar12) == 0) {
        if (buffersize != 0) {
          *buffer = '\"';
        }
        uVar19 = 1;
      }
      else {
        uVar19 = 0;
      }
      local_a8 = "\"";
      __n = 1;
      uVar14 = uVar5 & 0xff;
      bVar20 = 1;
      qVar4 = c_quoting_style;
      break;
    case c_maybe_quoting_style:
      uVar19 = 0;
      local_a8 = "\"";
      __n = 1;
      uVar14 = 1;
      bVar20 = 1;
      qVar4 = c_quoting_style;
      break;
    case escape_quoting_style:
      break;
    default:
      local_80 = gettext_quote("`",quoting_style);
      uVar14 = (ulong)quoting_style;
      local_78 = gettext_quote("\'",quoting_style);
    case custom_quoting_style:
      if ((byte)(~bVar12 | 0xfe) == 0xff) {
        cVar2 = *local_80;
        uVar14 = 0x95fb53789b2dc18f;
        if (cVar2 == '\0') goto LAB_00402ead;
        uVar18 = 0;
        do {
          if (uVar18 < buffersize) {
            buffer[uVar18] = cVar2;
          }
          uVar19 = uVar18 + 1;
          cVar2 = local_80[uVar18 + 1];
          uVar18 = uVar19;
        } while (cVar2 != '\0');
      }
      else {
LAB_00402ead:
        uVar19 = 0;
      }
      __n = strlen(local_78);
      local_a8 = local_78;
      uVar14 = uVar14 & 0xffffffffffffff00 | uVar5 & 0xff;
      bVar20 = 1;
      qVar4 = quoting_style;
    }
    quoting_style = qVar4;
    bVar21 = quoting_style == shell_always_quoting_style;
    bVar22 = bVar20 == 0;
    bVar23 = __n != 0;
    bVar10 = (byte)uVar14;
    bVar8 = (bVar10 ^ 0xfe) & bVar10;
    bVar24 = bVar8 == 0;
    bVar1 = !bVar24;
    uVar5 = uVar14 & 0xffffff00;
    bVar25 = (byte)(((~bVar10 | ~bVar20) ^ 1) & ~(~bVar10 | ~bVar20)) != 0;
    uVar18 = 0;
    local_40 = uVar14;
    if (local_b0 == 0xffffffffffffffff) goto LAB_00403070;
LAB_00403060:
    local_a0 = buffersize;
    if (uVar18 != local_b0) {
LAB_0040307b:
      if ((bool)(~(bVar23 != (!bVar21 && !bVar22)) & bVar23)) {
        uVar5 = uVar5 & 0xffffffffffffff00;
        if ((1 < __n == (local_b0 == 0xffffffffffffffff)) && (1 < __n)) {
          uVar5 = strlen(arg);
          local_b0 = uVar5;
        }
        if (local_b0 < uVar18 + __n) goto LAB_004030df;
        iVar3 = memcmp(arg + uVar18,local_a8,__n);
        bVar26 = iVar3 == 0;
        uVar5 = CONCAT44(extraout_var,iVar3) & 0xffffffffffffff00;
        if ((bVar26 || bVar8 != 0) && (!bVar26 == (bVar8 == 0))) goto LAB_00403d0b;
      }
      else {
LAB_004030df:
        bVar26 = false;
      }
      uVar14 = (ulong)(byte)arg[uVar18];
      bVar13 = 0;
      bVar12 = 0x61;
      bVar11 = 0x6e;
      bVar10 = 1;
      switch(uVar14) {
      case 0:
        if (bVar20 == 0) {
          if (local_58 == 0) {
            uVar14 = 0;
            goto LAB_00403909;
          }
          goto LAB_0040364a;
        }
        if (bVar8 == 0) {
          uVar5 = uVar19;
          if ((((byte)(~bVar9 | 0xfe) == 0xff) == (quoting_style == shell_always_quoting_style)) &&
             (quoting_style == shell_always_quoting_style)) {
            if (uVar19 < buffersize) {
              buffer[uVar19] = '\'';
            }
            if (uVar19 + 1 < buffersize) {
              buffer[uVar19 + 1] = '$';
            }
            if (uVar19 + 2 < buffersize) {
              buffer[uVar19 + 2] = '\'';
            }
            bVar9 = 1;
            uVar5 = uVar19 + 3;
          }
          if (uVar5 < buffersize) {
            buffer[uVar5] = '\\';
          }
          uVar19 = uVar5 + 1;
          bVar11 = 1;
          uVar14 = 0x30;
          if (((quoting_style != shell_always_quoting_style) && (uVar18 + 1 < local_b0)) &&
             ((byte)(arg[uVar18 + 1] - 0x30U) < 10)) {
            if (uVar19 < buffersize) {
              buffer[uVar19] = '0';
            }
            if (uVar5 + 2 < buffersize) {
              buffer[uVar5 + 2] = '0';
            }
            uVar19 = uVar5 + 3;
          }
          goto LAB_0040390b;
        }
        goto LAB_00403d0b;
      default:
        if (local_38 == 1) {
          ppuVar6 = __ctype_b_loc();
          bVar10 = (byte)((*ppuVar6)[uVar14] >> 0xe) & 1;
          uVar5 = 1;
        }
        else {
          local_68 = (mbstate_t)0x0;
          if (local_b0 == 0xffffffffffffffff) {
            local_b0 = strlen(arg);
          }
          local_50 = arg + uVar18;
          bVar10 = 1;
          uVar5 = 0;
          do {
            uVar17 = uVar5 + uVar18;
            sVar7 = rpl_mbrtowc(&local_54,arg + uVar17,local_b0 - uVar17,&local_68);
            if (sVar7 == 0) break;
            if (sVar7 == 0xffffffffffffffff) {
              bVar10 = 0;
              break;
            }
            if (sVar7 == 0xfffffffffffffffe) goto joined_r0x00403c51;
            if (1 < sVar7 && (bVar21 && !bVar24)) {
              uVar17 = 1;
              do {
                if (((int)local_50[uVar17 + uVar5] - 0x5bU < 0x22) &&
                   ((0x20000002bU >> ((ulong)((int)local_50[uVar17 + uVar5] - 0x5bU) & 0x3f) & 1) !=
                    0)) goto LAB_00403d06;
                uVar17 = uVar17 + 1;
              } while (uVar17 < sVar7);
            }
            iVar3 = iswprint(local_54);
            if (iVar3 == 0) {
              bVar10 = 0;
            }
            uVar5 = sVar7 + uVar5;
            iVar3 = mbsinit((mbstate_t *)&local_68);
          } while (iVar3 == 0);
        }
        goto LAB_004033da;
      case 7:
        break;
      case 8:
        bVar12 = 0x62;
        break;
      case 9:
        bVar11 = 0x74;
      case 10:
        goto switchD_004030fd_caseD_a;
      case 0xb:
        bVar12 = 0x76;
        break;
      case 0xc:
        bVar12 = 0x66;
        break;
      case 0xd:
        bVar11 = 0x72;
switchD_004030fd_caseD_a:
        bVar12 = bVar11;
        if ((bVar21 || bVar1) && bVar21 == bVar1) {
LAB_00403d06:
          quoting_style = shell_always_quoting_style;
          goto LAB_00403d0b;
        }
        break;
      case 0x20:
switchD_004030fd_caseD_20:
        bVar13 = 1;
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
        bVar10 = bVar13;
        if ((bVar21 || bVar1) && bVar21 == bVar1) goto LAB_00403d06;
        goto joined_r0x0040310a;
      case 0x23:
      case 0x7e:
        if (uVar18 == 0) goto switchD_004030fd_caseD_20;
        goto LAB_00403909;
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
        goto joined_r0x0040310a;
      case 0x27:
        uVar14 = 0x27;
        local_48 = uVar5 & 0xffffffffffffff00 | 1;
        if (quoting_style != shell_always_quoting_style) {
LAB_0040333f:
          bVar10 = 1;
          goto joined_r0x0040310a;
        }
        if (bVar8 == 0) {
          bVar15 = buffersize == 0;
          bVar27 = local_90 != 0;
          if (bVar27 == bVar15 && (!bVar27 || !bVar15)) {
            local_90 = buffersize;
          }
          if (bVar27 == bVar15 && (!bVar27 || !bVar15)) {
            buffersize = 0;
          }
          if (uVar19 < buffersize) {
            buffer[uVar19] = '\'';
          }
          if (uVar19 + 1 < buffersize) {
            buffer[uVar19 + 1] = '\\';
          }
          if (uVar19 + 2 < buffersize) {
            buffer[uVar19 + 2] = '\'';
          }
          uVar19 = uVar19 + 3;
          bVar9 = 0;
          goto LAB_0040333f;
        }
        goto LAB_00403d06;
      case 0x3f:
        uVar14 = 0x3f;
        if (quoting_style == c_quoting_style) {
          if (((local_5c != 0) && (uVar5 = uVar18 + 2, uVar5 < local_b0)) &&
             (arg[uVar18 + 1] == '?')) {
            bVar10 = arg[uVar5];
            bVar11 = 0;
            if (((uint)(int)(char)bVar10 < 0x3f) &&
               ((0x7000a38200000000U >> ((ulong)(uint)(int)(char)bVar10 & 0x3f) & 1) != 0)) {
              if (bVar8 == 0) {
                if (uVar19 < buffersize) {
                  buffer[uVar19] = '?';
                }
                if (uVar19 + 1 < buffersize) {
                  buffer[uVar19 + 1] = '\"';
                }
                if (uVar19 + 2 < buffersize) {
                  buffer[uVar19 + 2] = '\"';
                }
                if (uVar19 + 3 < buffersize) {
                  buffer[uVar19 + 3] = '?';
                }
                uVar19 = uVar19 + 4;
                bVar11 = 0;
                uVar14 = (ulong)bVar10;
                uVar18 = uVar5;
                goto LAB_0040390b;
              }
              quoting_style = c_quoting_style;
              goto LAB_00403d0b;
            }
            goto LAB_0040390b;
          }
        }
        else if ((quoting_style == shell_always_quoting_style) && (bVar8 != 0)) goto LAB_00403d06;
LAB_00403909:
        bVar11 = 0;
LAB_0040390b:
        bVar10 = 0;
        goto joined_r0x0040310a;
      case 0x5c:
        if (quoting_style == shell_always_quoting_style) {
          if (bVar8 != 0) goto LAB_00403d06;
          bVar12 = 0x5c;
          bVar11 = 0;
          bVar10 = 0;
        }
        else {
          bVar11 = 0x5c;
          if (!(bool)(~(bVar23 != bVar25) & bVar25)) goto switchD_004030fd_caseD_a;
          bVar11 = 0;
          bVar12 = 0x5c;
          bVar10 = 0;
        }
        goto LAB_004034ce;
      case 0x7b:
      case 0x7d:
        if (local_b0 == 0xffffffffffffffff) {
          bVar11 = 0;
          if ((uVar18 == 0 || arg[1] == '\0') && ((uVar18 != 0) == (arg[1] != '\0')))
          goto switchD_004030fd_caseD_20;
          local_b0 = 0xffffffffffffffff;
        }
        else {
          bVar11 = 0;
          if ((uVar18 == 0 || local_b0 == 1) && ((uVar18 != 0) == (local_b0 != 1)))
          goto switchD_004030fd_caseD_20;
        }
        goto LAB_0040390b;
      }
      bVar10 = 0;
      bVar13 = 0;
      if (bVar20 == 0) goto joined_r0x0040310a;
      goto joined_r0x004035a5;
    }
LAB_00403cb6:
    local_b0 = uVar18;
    bVar10 = ~((uVar19 == 0) != (quoting_style == shell_always_quoting_style)) &
             quoting_style == shell_always_quoting_style ^ 1;
    if ((!(bool)(bVar8 == 0 & bVar10)) && (buffersize = local_a0, !(bool)(bVar8 == 0 ^ bVar10))) {
LAB_00403d0b:
      qVar4 = shell_escape_always_quoting_style;
      if ((bVar20 == 0) != (quoting_style != shell_always_quoting_style)) {
        qVar4 = quoting_style;
      }
      quoting_style_00 = qVar4;
      if (bVar20 == 0) {
        quoting_style_00 = quoting_style;
      }
      if (quoting_style == shell_always_quoting_style) {
        quoting_style_00 = qVar4;
      }
      sVar7 = quotearg_buffer_restyled
                        (buffer,buffersize,arg,local_b0,quoting_style_00,flags & 0xfffffffd,
                         (uint *)0x0,local_80,local_78);
      return sVar7;
    }
    bVar10 = ((byte)local_48 ^ 0xfe) & (byte)local_48;
    if (((bVar10 == 0) != (bVar8 != 0 || quoting_style != shell_always_quoting_style)) ||
       (bVar10 == 0 && (bVar8 != 0 || quoting_style != shell_always_quoting_style))) {
LAB_00403d7a:
      if (((local_a8 != (char *)0x0) == (bVar8 == 0)) && (local_a8 != (char *)0x0)) {
        cVar2 = *local_a8;
        while (cVar2 != '\0') {
          local_a8 = local_a8 + 1;
          if (uVar19 < local_a0) {
            buffer[uVar19] = cVar2;
          }
          uVar19 = uVar19 + 1;
          cVar2 = *local_a8;
        }
      }
      if (uVar19 < local_a0) {
        buffer[uVar19] = '\0';
      }
      return uVar19;
    }
    if (bVar16 != 0) {
      sVar7 = quotearg_buffer_restyled
                        (buffer,local_90,arg,local_b0,c_quoting_style,flags,quote_these_too,local_80
                         ,local_78);
      return sVar7;
    }
    if (local_a0 != 0 || local_90 == 0) goto LAB_00403d7a;
    uVar5 = local_40 & 0xffffffff;
    buffersize = local_90;
    bVar10 = bVar20;
  } while( true );
joined_r0x00403c51:
  while ((uVar17 < local_b0 && (local_50[uVar5] != '\0'))) {
    uVar5 = uVar5 + 1;
    uVar17 = uVar5 + uVar18;
  }
  bVar10 = 0;
LAB_004033da:
  bVar27 = bVar10 != 0;
  bVar15 = bVar27 != bVar22 || bVar27 && bVar22;
  if ((uVar5 < 2 != bVar15) || (1 < uVar5)) {
    uVar17 = uVar18 + 1;
    bVar11 = 0;
    if (bVar15) goto LAB_00403bcf;
LAB_00403a80:
    if (bVar8 == 0) {
      if (((bVar9 == 0) == (quoting_style == shell_always_quoting_style)) &&
         (quoting_style == shell_always_quoting_style)) {
        if (uVar19 < buffersize) {
          buffer[uVar19] = '\'';
        }
        if (uVar19 + 1 < buffersize) {
          buffer[uVar19 + 1] = '$';
        }
        if (uVar19 + 2 < buffersize) {
          buffer[uVar19 + 2] = '\'';
        }
        uVar19 = uVar19 + 3;
        bVar9 = 1;
      }
      if (uVar19 < buffersize) {
        buffer[uVar19] = '\\';
      }
      if (uVar19 + 1 < buffersize) {
        buffer[uVar19 + 1] = ((byte)(uVar14 >> 6) | 0x60) ^ 0x50;
      }
      if (uVar19 + 2 < buffersize) {
        buffer[uVar19 + 2] = (byte)(uVar14 >> 3) & 0x17 | 0x30;
      }
      uVar19 = uVar19 + 3;
      bVar12 = ((byte)uVar14 ^ 0xf8) & (byte)uVar14;
      bVar12 = bVar12 & 0x30 | (bVar12 & 0xb0 | ~bVar12 & 0x4f) ^ 0x7f;
      bVar11 = 1;
      uVar14 = (ulong)bVar12;
      while (uVar17 < uVar5 + uVar18) {
        while( true ) {
          if ((((byte)(~bVar11 | 0xfe) == 0xff) == (bVar9 != 0)) && (bVar9 != 0)) {
            if (uVar19 < buffersize) {
              buffer[uVar19] = '\'';
            }
            if (uVar19 + 1 < buffersize) {
              buffer[uVar19 + 1] = '\'';
            }
            uVar19 = uVar19 + 2;
            bVar9 = 0;
          }
          if (uVar19 < buffersize) {
            buffer[uVar19] = (char)uVar14;
          }
          uVar19 = uVar19 + 1;
          uVar14 = (ulong)(byte)arg[uVar17];
          uVar17 = uVar17 + 1;
          if (bVar27 == bVar22 && (!bVar27 || !bVar22)) goto LAB_00403a80;
LAB_00403bcf:
          bVar12 = (byte)uVar14;
          if ((byte)(~bVar26 | 0xfeU) == 0xff) break;
          if (uVar19 < buffersize) {
            buffer[uVar19] = '\\';
          }
          uVar19 = uVar19 + 1;
          bVar26 = false;
          if (uVar5 + uVar18 <= uVar17) goto LAB_00403c1b;
        }
      }
LAB_00403c1b:
      uVar18 = uVar17 - 1;
      goto LAB_004034ce;
    }
    goto LAB_00403d0b;
  }
joined_r0x0040310a:
  bVar11 = 0;
joined_r0x0040310a:
  bVar12 = (byte)uVar14;
  bVar13 = bVar10;
  if (!bVar21 && !bVar22) {
    if (quote_these_too != (uint *)0x0) goto LAB_00403487;
LAB_004034c2:
    if (bVar26) goto joined_r0x004035a5;
LAB_004034ce:
    if ((byte)(~bVar11 | 0xfe) == 0xff && (byte)(~bVar9 | 0xfe) != 0xff) {
      if (uVar19 < buffersize) {
        buffer[uVar19] = '\'';
      }
      if (uVar19 + 1 < buffersize) {
        buffer[uVar19 + 1] = '\'';
      }
      uVar19 = uVar19 + 2;
      bVar9 = 0;
    }
    if (buffersize <= uVar19) goto LAB_00403633;
  }
  else {
    if (quote_these_too == (uint *)0x0 || bVar24 == (quote_these_too != (uint *)0x0))
    goto LAB_004034c2;
LAB_00403487:
    if (!bVar26 ==
        ((~(1 << (bVar12 & 0x1f) ^ quote_these_too[uVar14 >> 5]) & quote_these_too[uVar14 >> 5]) ==
        0)) goto LAB_004034c2;
joined_r0x004035a5:
    bVar10 = bVar13;
    if (bVar8 != 0) goto LAB_00403d0b;
    if (bVar9 == 0 && quoting_style == shell_always_quoting_style) {
      if (uVar19 < buffersize) {
        buffer[uVar19] = '\'';
      }
      if (uVar19 + 1 < buffersize) {
        buffer[uVar19 + 1] = '$';
      }
      if (uVar19 + 2 < buffersize) {
        buffer[uVar19 + 2] = '\'';
      }
      uVar19 = uVar19 + 3;
      bVar9 = 1;
    }
    if (uVar19 < buffersize) {
      buffer[uVar19] = '\\';
    }
    uVar19 = uVar19 + 1;
    if (buffersize <= uVar19) goto LAB_00403633;
  }
  buffer[uVar19] = bVar12;
LAB_00403633:
  if (bVar10 != 0) {
    bVar10 = bVar16;
  }
  uVar19 = uVar19 + 1;
  bVar16 = bVar10;
LAB_0040364a:
  uVar5 = uVar18 + 1;
  uVar18 = uVar5;
  if (local_b0 != 0xffffffffffffffff) goto LAB_00403060;
LAB_00403070:
  if (arg[uVar18] == '\0') {
    uVar18 = 0xffffffffffffffff;
    local_a0 = buffersize;
    goto LAB_00403cb6;
  }
  goto LAB_0040307b;
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
  flags = pqVar4->flags ^ 1U | pqVar4->flags & 1U;
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
  uint uVar4;
  wchar_t flags;
  quoting_options *pqVar5;
  wchar_t e;
  
  pqVar5 = &default_quoting_options;
  if (o != (quoting_options *)0x0) {
    pqVar5 = o;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar4 = ~pqVar5->flags;
  flags = ~(~(uint)(size == (size_t *)0x0) | uVar4) |
          (size == (size_t *)0x0 | 0x5530148e) ^ (pqVar5->flags & 0xaacfeb71U | uVar4 & 0x5530148e);
  sVar3 = quotearg_buffer_restyled
                    ((char *)0x0,0,arg,argsize,pqVar5->style,flags,pqVar5->quote_these_too,
                     pqVar5->left_quote,pqVar5->right_quote);
  buffer = (char *)xmalloc(sVar3 + 1);
  quotearg_buffer_restyled
            (buffer,sVar3 + 1,arg,argsize,pqVar5->style,flags,pqVar5->quote_these_too,
             pqVar5->left_quote,pqVar5->right_quote);
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
  wchar_t wVar6;
  
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
    wVar6 = n + L'\x01';
    psVar4 = (struct slotvec *)xrealloc(psVar4,(long)wVar6 << 4);
    slotvec = psVar4;
    if (psVar2 == &slotvec0) {
      *psVar4 = slotvec0;
    }
    memset(psVar4 + nslots,0,(long)(wVar6 - nslots) << 4);
    nslots = wVar6;
  }
  buffersize = psVar4[n].size;
  buffer = psVar4[n].val;
  wVar6 = options->flags ^ 1U | options->flags & 1U;
  sVar5 = quotearg_buffer_restyled
                    (buffer,buffersize,arg,argsize,options->style,wVar6,options->quote_these_too,
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
              (buffer,sVar5,arg,argsize,options->style,wVar6,options->quote_these_too,
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
  uint uVar1;
  char *pcVar2;
  uint uVar3;
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
  uVar1 = *(uint *)(local_38 + (ulong)((byte)ch >> 5) * 4 + 8);
  uVar3 = uVar1 >> (ch & 0x1fU);
  uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
  uVar3 = ((uVar3 & 0xe9464f16 | ~uVar3 & 0x16b9b0e9) ^ 0x16b9b0e8) << (ch & 0x1fU);
  *(uint *)(local_38 + (ulong)((byte)ch >> 5) * 4 + 8) = ~uVar1 & uVar3 | ~uVar3 & uVar1;
  pcVar2 = quotearg_n_options(0 << (ch & 0x1fU),arg,argsize,(quoting_options *)local_38);
  return pcVar2;
}


char * quotearg_char(char *arg,char ch)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
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
  uVar1 = *(uint *)(local_38 + (ulong)((byte)ch >> 5) * 4 + 8);
  uVar3 = (~(uVar1 >> (ch & 0x1fU)) & 1) << (ch & 0x1fU);
  *(uint *)(local_38 + (ulong)((byte)ch >> 5) * 4 + 8) =
       (uVar1 & 0xfe6d2c77 | ~uVar1 & 0x192d388) ^ (uVar3 & 0xfe6d2c77 | ~uVar3 & 0x192d388);
  pcVar2 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,(quoting_options *)local_38);
  return pcVar2;
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
  local_38._12_4_ =
       default_quoting_options.quote_these_too[1] ^ 0x4000000 |
       default_quoting_options.quote_these_too[1] & 0x4000000;
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
  local_38._12_4_ =
       default_quoting_options.quote_these_too[1] ^ 0x4000000 |
       default_quoting_options.quote_these_too[1] & 0x4000000;
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
    local_78 = CONCAT412(0x4000000,ZEXT412(s));
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
  if (((right_quote != (char *)0x0) == (left_quote != (char *)0x0)) && (left_quote != (char *)0x0))
  {
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
  if (right_quote == (char *)0x0 || left_quote == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_38.left_quote = left_quote;
  local_38.right_quote = right_quote;
  pcVar1 = quotearg_n_options(n,arg,argsize,&local_38);
  return pcVar1;
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
  if (right_quote == (char *)0x0 || left_quote == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_38.left_quote = left_quote;
  local_38.right_quote = right_quote;
  pcVar1 = quotearg_n_options(L'\0',arg,0xffffffffffffffff,&local_38);
  return pcVar1;
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
  if (right_quote == (char *)0x0 || left_quote == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_38.left_quote = left_quote;
  local_38.right_quote = right_quote;
  pcVar1 = quotearg_n_options(L'\0',arg,argsize,&local_38);
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
  byte bVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar1 = (char *)dcgettext(0,msgid,5);
  if (pcVar1 != msgid) {
    return pcVar1;
  }
  pbVar2 = (byte *)locale_charset();
  bVar3 = (*pbVar2 ^ 0x20) & *pbVar2;
  if (bVar3 == 0x47) {
    if (((((byte)(~pbVar2[1] | 0x20) == 0xbd) && (pbVar2[2] == 0x31)) && (pbVar2[3] == 0x38)) &&
       (((pbVar2[4] == 0x30 && (pbVar2[5] == 0x33)) && ((pbVar2[6] == 0x30 && (pbVar2[7] == 0))))))
    {
      bVar5 = *msgid == '`';
      pcVar4 = &DAT_00407982;
      pcVar1 = &DAT_00407986;
      goto LAB_00404ae7;
    }
  }
  else if (((bVar3 == 0x55) && (((pbVar2[1] ^ 0x20) & pbVar2[1]) == 0x54)) &&
          (((byte)(~pbVar2[2] | 0x20) == 0xb9 &&
           (((pbVar2[3] == 0x2d && (pbVar2[4] == 0x38)) && (pbVar2[5] == 0)))))) {
    bVar5 = *msgid == '`';
    pcVar4 = &DAT_0040797a;
    pcVar1 = &DAT_0040797e;
    goto LAB_00404ae7;
  }
  bVar5 = s == clocale_quoting_style;
  pcVar4 = "\"";
  pcVar1 = "\'";
LAB_00404ae7:
  if (bVar5) {
    pcVar1 = pcVar4;
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
  uVar1 = dcgettext(0,&DAT_004079f3,5);
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
  char **ppcVar1;
  long *plVar2;
  size_t n_authors;
  uint uVar3;
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
  
  uVar3 = authors->gp_offset;
  if ((ulong)(long)(int)uVar3 < 0x29) {
    ppcVar1 = (char **)((long)(int)uVar3 + (long)authors->reg_save_area);
    uVar3 = uVar3 + 8;
    authors->gp_offset = uVar3;
  }
  else {
    ppcVar1 = (char **)authors->overflow_arg_area;
    authors->overflow_arg_area = ppcVar1 + 1;
  }
  local_58 = *ppcVar1;
  if (local_58 == (char *)0x0) {
    n_authors = 0;
  }
  else {
    if (uVar3 < 0x29) {
      plVar2 = (long *)((long)(int)uVar3 + (long)authors->reg_save_area);
      uVar3 = uVar3 + 8;
      authors->gp_offset = uVar3;
    }
    else {
      plVar2 = (long *)authors->overflow_arg_area;
      authors->overflow_arg_area = plVar2 + 1;
    }
    local_50 = *plVar2;
    if (local_50 == 0) {
      n_authors = 1;
    }
    else {
      if (uVar3 < 0x29) {
        plVar2 = (long *)((long)(int)uVar3 + (long)authors->reg_save_area);
        uVar3 = uVar3 + 8;
        authors->gp_offset = uVar3;
      }
      else {
        plVar2 = (long *)authors->overflow_arg_area;
        authors->overflow_arg_area = plVar2 + 1;
      }
      local_48 = *plVar2;
      if (local_48 == 0) {
        n_authors = 2;
      }
      else {
        if (uVar3 < 0x29) {
          plVar2 = (long *)((long)(int)uVar3 + (long)authors->reg_save_area);
          uVar3 = uVar3 + 8;
          authors->gp_offset = uVar3;
        }
        else {
          plVar2 = (long *)authors->overflow_arg_area;
          authors->overflow_arg_area = plVar2 + 1;
        }
        local_40 = *plVar2;
        if (local_40 == 0) {
          n_authors = 3;
        }
        else {
          if (uVar3 < 0x29) {
            plVar2 = (long *)((long)(int)uVar3 + (long)authors->reg_save_area);
            uVar3 = uVar3 + 8;
            authors->gp_offset = uVar3;
          }
          else {
            plVar2 = (long *)authors->overflow_arg_area;
            authors->overflow_arg_area = plVar2 + 1;
          }
          local_38 = *plVar2;
          if (local_38 == 0) {
            n_authors = 4;
          }
          else {
            if (uVar3 < 0x29) {
              plVar2 = (long *)((long)(int)uVar3 + (long)authors->reg_save_area);
              authors->gp_offset = uVar3 + 8;
            }
            else {
              plVar2 = (long *)authors->overflow_arg_area;
              authors->overflow_arg_area = plVar2 + 1;
            }
            local_30 = *plVar2;
            if (local_30 == 0) {
              n_authors = 5;
            }
            else {
              plVar2 = (long *)authors->overflow_arg_area;
              authors->overflow_arg_area = plVar2 + 1;
              local_28 = *plVar2;
              if (local_28 == 0) {
                n_authors = 6;
              }
              else {
                plVar2 = (long *)authors->overflow_arg_area;
                authors->overflow_arg_area = plVar2 + 1;
                local_20 = *plVar2;
                if (local_20 == 0) {
                  n_authors = 7;
                }
                else {
                  plVar2 = (long *)authors->overflow_arg_area;
                  authors->overflow_arg_area = plVar2 + 1;
                  local_18 = *plVar2;
                  if (local_18 == 0) {
                    n_authors = 8;
                  }
                  else {
                    plVar2 = (long *)authors->overflow_arg_area;
                    authors->overflow_arg_area = plVar2 + 1;
                    local_10 = *plVar2;
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
  
  if ((n <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0)) &&
     (pvVar1 = malloc(s * n), pvVar1 != (void *)0x0 || s * n == 0)) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}


void * xmalloc(size_t n)

{
  void *pvVar1;
  
  pvVar1 = malloc(n);
  if (((n != 0) == (pvVar1 == (void *)0x0)) && (n != 0)) {
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
    if (((p != (void *)0x0) == (__size == 0)) && (p != (void *)0x0)) {
      free(p);
      return (void *)0x0;
    }
    pvVar1 = realloc(p,__size);
    if (pvVar1 != (void *)0x0 || __size == 0) {
      return pvVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}


void * xrealloc(void *p,size_t n)

{
  void *pvVar1;
  
  if (n == 0 && p != (void *)0x0) {
    free(p);
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = realloc(p,n);
    if (pvVar1 == (void *)0x0 && n != 0) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
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
      uVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(s),0) + (ulong)(0x80 < s);
    }
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(s),0) < uVar2) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
  }
  else {
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554)) / ZEXT816(s),0) <= uVar2)
    goto LAB_004053db;
    uVar2 = uVar2 + (uVar2 >> 1) + 1;
  }
  *pn = uVar2;
  __size = s * uVar2;
  if (__size == 0 && p != (void *)0x0) {
    free(p);
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = realloc(p,__size);
    if (pvVar1 == (void *)0x0 && __size != 0) {
LAB_004053db:
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
  }
  return pvVar1;
}


char * xcharalloc(size_t n)

{
  char *pcVar1;
  
  pcVar1 = (char *)malloc(n);
  if (((n != 0) == (pcVar1 == (char *)0x0)) && (n != 0)) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  return pcVar1;
}


void * x2realloc(void *p,size_t *pn)

{
  ulong uVar1;
  void *pvVar2;
  size_t __size;
  
  uVar1 = *pn;
  if (p == (void *)0x0) {
    __size = 0x80;
    if (uVar1 != 0) {
      __size = uVar1;
    }
    if ((long)__size < 0) goto LAB_0040548d;
    *pn = __size;
  }
  else {
    if (0x5555555555555553 < uVar1) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    __size = uVar1 + 1 + (uVar1 >> 1);
    *pn = __size;
    if (__size == 0) {
      free(p);
      return (void *)0x0;
    }
  }
  pvVar2 = realloc(p,__size);
  if (((__size != 0) != (pvVar2 == (void *)0x0)) || (__size == 0)) {
    return pvVar2;
  }
LAB_0040548d:
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}


void * xzalloc(size_t s)

{
  void *__s;
  
  __s = malloc(s);
  if (((s != 0) == (__s == (void *)0x0)) && (s != 0)) {
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
  if (((s != 0) == (__dest == (void *)0x0)) && (s != 0)) {
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
  sVar1 = sVar1 + 1;
  __dest = (char *)malloc(sVar1);
  if (((__dest == (char *)0x0) == (sVar1 != 0)) && (sVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  memcpy(__dest,string,sVar1);
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


uintmax_t xnumtoumax(char *n_str,int base,uintmax_t min,uintmax_t max,char *suffixes,char *err,
                    int err_exit)

{
  ulong uVar1;
  strtol_error sVar2;
  ulong in_RAX;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  ulong local_38;
  
  local_38 = in_RAX;
  sVar2 = xstrtoumax(n_str,(char **)0x0,base,&local_38,suffixes);
  uVar1 = local_38;
  if (sVar2 == LONGINT_OK) {
    if ((min <= local_38 == local_38 <= max) && (min <= local_38 || local_38 <= max)) {
      return local_38;
    }
    piVar3 = __errno_location();
    iVar5 = 0x22;
    if (0x3fffffff < uVar1) {
      iVar5 = 0x4b;
    }
    *piVar3 = iVar5;
  }
  else if (sVar2 == LONGINT_OVERFLOW) {
    piVar3 = __errno_location();
    *piVar3 = 0x4b;
  }
  else if (sVar2 == LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW) {
    piVar3 = __errno_location();
    *piVar3 = 0;
  }
  else {
    piVar3 = __errno_location();
  }
  iVar5 = 1;
  if (err_exit != 0) {
    iVar5 = err_exit;
  }
  iVar6 = *piVar3;
  if (iVar6 == 0x16) {
    iVar6 = 0;
  }
  pcVar4 = quote(n_str);
  error(iVar5,iVar6,"%s: %s",err,pcVar4);
  return local_38;
}


uintmax_t xdectoumax(char *n_str,uintmax_t min,uintmax_t max,char *suffixes,char *err,int err_exit)

{
  uintmax_t uVar1;
  
  uVar1 = xnumtoumax(n_str,10,min,max,suffixes,err,err_exit);
  return uVar1;
}


strtol_error xstrtoumax(char *s,char **ptr,int strtol_base,uintmax_t *val,char *valid_suffixes)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  strtol_error sVar6;
  int *piVar7;
  ushort **ppuVar8;
  uintmax_t uVar9;
  char *pcVar10;
  ulong uVar11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  byte *pbVar17;
  byte bVar18;
  strtol_error sVar19;
  ulong uVar20;
  char **ppcVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  uintmax_t uVar26;
  int __c;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  char *local_38;
  
  if (0x24 < (uint)strtol_base) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= strtol_base && strtol_base <= 36","../lib/xstrtol.c",0x54,
                  "strtol_error xstrtoumax(const char *, char **, int, uintmax_t *, const char *)");
  }
  piVar7 = __errno_location();
  *piVar7 = 0;
  ppuVar8 = __ctype_b_loc();
  pbVar17 = (byte *)s;
  do {
    bVar12 = *pbVar17;
    pbVar17 = pbVar17 + 1;
  } while ((((*ppuVar8)[bVar12] ^ 0xdfff) & (*ppuVar8)[bVar12]) != 0);
  ppcVar21 = &local_38;
  if (ptr != (char **)0x0) {
    ppcVar21 = ptr;
  }
  if (bVar12 == 0x2d) {
    return LONGINT_INVALID;
  }
  sVar19 = LONGINT_OK;
  uVar9 = __strtoul_internal(s,ppcVar21,strtol_base,0);
  pcVar2 = *ppcVar21;
  if (pcVar2 == s) {
    if (valid_suffixes == (char *)0x0) {
      return LONGINT_INVALID;
    }
    if (*s == '\0') {
      return LONGINT_INVALID;
    }
    pcVar10 = strchr(valid_suffixes,(int)*s);
    if (pcVar10 == (char *)0x0) {
      return LONGINT_INVALID;
    }
    sVar19 = LONGINT_OK;
    uVar26 = 1;
  }
  else {
    if (*piVar7 != 0) {
      if (*piVar7 != 0x22) {
        return LONGINT_INVALID;
      }
      sVar19 = LONGINT_OVERFLOW;
    }
    uVar26 = uVar9;
    if (valid_suffixes == (char *)0x0) goto LAB_00405dbe;
  }
  __c = (int)*pcVar2;
  uVar9 = uVar26;
  if (*pcVar2 == '\0') goto LAB_00405dbe;
  pcVar10 = strchr(valid_suffixes,__c);
  if (pcVar10 == (char *)0x0) {
    *val = uVar26;
    return sVar19 | LONGINT_INVALID_SUFFIX_CHAR;
  }
  lVar25 = 1;
  uVar22 = 0x400;
  if ((__c - 0x45U < 0x30) && ((0x814400308945U >> ((ulong)(__c - 0x45U) & 0x3f) & 1) != 0)) {
    pcVar10 = strchr(valid_suffixes,0x30);
    if (pcVar10 == (char *)0x0) {
LAB_004058b3:
      lVar25 = 1;
      uVar22 = 0x400;
    }
    else {
      cVar1 = pcVar2[1];
      if ((cVar1 == 'B') || (cVar1 == 'D')) {
        lVar25 = 2;
        uVar22 = 1000;
      }
      else {
        if (cVar1 != 'i') goto LAB_004058b3;
        lVar25 = (ulong)(pcVar2[2] == 'B') * 2 + 1;
        uVar22 = 0x400;
      }
    }
  }
  sVar6 = LONGINT_OK;
  switch(__c) {
  case 0x42:
    uVar22 = uVar26 >> 0x36;
    uVar11 = uVar26 << 10;
    goto LAB_00405deb;
  default:
    *val = uVar26;
    return ~sVar19 & 0x422869bf ^ 0x422869bd;
  case 0x45:
    uVar11 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / ZEXT816(uVar22),0);
    uVar23 = uVar26 * uVar22;
    if (uVar11 < uVar26) {
      uVar23 = 0xffffffffffffffff;
    }
    uVar20 = uVar23 * uVar22;
    if (uVar11 < uVar23) {
      uVar20 = 0xffffffffffffffff;
    }
    uVar24 = uVar20 * uVar22;
    bVar27 = uVar20 <= uVar11;
    if (!bVar27) {
      uVar24 = 0xffffffffffffffff;
    }
    uVar20 = uVar24 * uVar22;
    bVar28 = uVar24 <= uVar11;
    if (!bVar28) {
      uVar20 = 0xffffffffffffffff;
    }
    uVar24 = uVar20 * uVar22;
    bVar14 = uVar11 < uVar20;
    if (bVar14) {
      uVar24 = 0xffffffffffffffff;
    }
    uVar9 = uVar22 * uVar24;
    if (uVar11 < uVar24) {
      uVar9 = 0xffffffffffffffff;
    }
    bVar12 = ~(uVar11 < uVar23 && uVar11 < uVar26 || uVar11 < uVar23 != uVar11 < uVar26);
    bVar12 = ((bVar12 | bVar27) ^ 1 | bVar27 ^ bVar12) ^ 1;
    bVar12 = (bVar12 | bVar28) ^ 1 | bVar28 ^ bVar12;
    bVar12 = bVar12 ^ bVar14 | bVar14 & bVar12;
    bVar12 = ~(~bVar12 | uVar24 <= uVar11) | -(uVar11 < uVar24) ^ bVar12;
    goto LAB_00405d8d;
  case 0x47:
  case 0x67:
    uVar11 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / ZEXT816(uVar22),0);
    uVar23 = uVar26 * uVar22;
    if (uVar11 < uVar26) {
      uVar23 = 0xffffffffffffffff;
    }
    uVar20 = uVar23 * uVar22;
    if (uVar11 < uVar23) {
      uVar20 = 0xffffffffffffffff;
    }
    uVar9 = uVar22 * uVar20;
    if (uVar11 < uVar20) {
      uVar9 = 0xffffffffffffffff;
    }
    bVar12 = -(uVar11 < uVar23) & -(uVar11 < uVar26) | -(uVar11 < uVar23) ^ -(uVar11 < uVar26);
    sVar6 = (strtol_error)((bVar12 & -(uVar11 < uVar20) | -(uVar11 < uVar20) ^ bVar12) & 1);
    break;
  case 0x4b:
  case 0x6b:
    uVar9 = uVar22 * uVar26;
    bVar27 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / ZEXT816(uVar22),0) < uVar26
    ;
    if (bVar27) {
      uVar9 = 0xffffffffffffffff;
    }
    sVar6 = -(uint)bVar27;
    goto LAB_00405d90;
  case 0x4d:
  case 0x6d:
    uVar11 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / ZEXT816(uVar22),0);
    uVar23 = uVar26 * uVar22;
    bVar27 = uVar26 <= uVar11;
    if (!bVar27) {
      uVar23 = 0xffffffffffffffff;
    }
    uVar9 = uVar22 * uVar23;
    bVar28 = uVar23 <= uVar11;
    if (!bVar28) {
      uVar9 = 0xffffffffffffffff;
    }
    sVar6 = (strtol_error)(!bVar28 && !bVar27 || bVar28 != bVar27);
    break;
  case 0x50:
    uVar11 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / ZEXT816(uVar22),0);
    uVar23 = uVar26 * uVar22;
    if (uVar11 < uVar26) {
      uVar23 = 0xffffffffffffffff;
    }
    uVar20 = uVar23 * uVar22;
    if (uVar11 < uVar23) {
      uVar20 = 0xffffffffffffffff;
    }
    bVar12 = ~(uVar11 < uVar23 && uVar11 < uVar26 || uVar11 < uVar23 != uVar11 < uVar26);
    uVar23 = uVar20 * uVar22;
    bVar4 = uVar20 <= uVar11;
    if (!bVar4) {
      uVar23 = 0xffffffffffffffff;
    }
    bVar18 = bVar4 ^ bVar12;
    goto LAB_00405d4f;
  case 0x54:
  case 0x74:
    uVar11 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / ZEXT816(uVar22),0);
    uVar23 = uVar26 * uVar22;
    if (uVar11 < uVar26) {
      uVar23 = 0xffffffffffffffff;
    }
    uVar20 = uVar23 * uVar22;
    if (uVar11 < uVar23) {
      uVar20 = 0xffffffffffffffff;
    }
    uVar24 = uVar20 * uVar22;
    if (uVar11 < uVar20) {
      uVar24 = 0xffffffffffffffff;
    }
    uVar9 = uVar22 * uVar24;
    if (uVar11 < uVar24) {
      uVar9 = 0xffffffffffffffff;
    }
    bVar27 = uVar11 < uVar23 && uVar11 < uVar26 || uVar11 < uVar23 != uVar11 < uVar26;
    bVar27 = bVar27 && uVar11 < uVar20 || uVar11 < uVar20 != bVar27;
    sVar6 = (strtol_error)(byte)(~(~bVar27 | uVar24 <= uVar11) | bVar27 ^ -(uVar11 < uVar24));
    goto LAB_00405d90;
  case 0x59:
    uVar11 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / ZEXT816(uVar22),0);
    uVar23 = uVar26 * uVar22;
    bVar27 = uVar26 <= uVar11;
    if (!bVar27) {
      uVar23 = 0xffffffffffffffff;
    }
    uVar20 = uVar23 * uVar22;
    bVar28 = uVar23 <= uVar11;
    if (!bVar28) {
      uVar20 = 0xffffffffffffffff;
    }
    uVar23 = uVar20 * uVar22;
    bVar14 = uVar20 <= uVar11;
    if (!bVar14) {
      uVar23 = 0xffffffffffffffff;
    }
    uVar20 = uVar23 * uVar22;
    bVar29 = uVar11 < uVar23;
    if (bVar29) {
      uVar20 = 0xffffffffffffffff;
    }
    uVar23 = uVar20 * uVar22;
    bVar15 = uVar20 <= uVar11;
    if (!bVar15) {
      uVar23 = 0xffffffffffffffff;
    }
    uVar20 = uVar23 * uVar22;
    bVar30 = uVar11 < uVar23;
    if (bVar30) {
      uVar20 = 0xffffffffffffffff;
    }
    uVar23 = uVar20 * uVar22;
    bVar16 = uVar11 < uVar20;
    if (bVar16) {
      uVar23 = 0xffffffffffffffff;
    }
    uVar9 = uVar22 * uVar23;
    if (uVar11 < uVar23) {
      uVar9 = 0xffffffffffffffff;
    }
    bVar4 = bVar14 != ((bVar28 || bVar27) && bVar28 == bVar27);
    bVar31 = bVar28 != bVar27;
    bVar13 = ((!bVar28 && !bVar27 || bVar31) && !bVar14 || bVar4) == bVar29;
    bVar28 = bVar28;
    bVar3 = bVar27;
    bVar31 = !bVar31;
    bVar27 = bVar14;
    bVar4 = !bVar4;
    bVar5 = bVar15 != (bVar13 && (!bVar29 || ((bVar28 || bVar3) && bVar31 || bVar27) && bVar4));
    bVar13 = !bVar13;
    bVar14 = bVar29;
    bVar28 = !bVar28;
    bVar3 = !bVar3;
    bVar31 = !bVar31;
    bVar27 = !bVar27;
    bVar4 = !bVar4;
    bVar15 = !bVar15;
    bVar29 = bVar30 != ((bVar13 || bVar14 && ((bVar28 && bVar3 || bVar31) && bVar27 || bVar4)) &&
                        bVar15 || bVar5);
    bVar27 = (((bVar13 || bVar14 && ((bVar28 && bVar3 || bVar31) && bVar27 || bVar4)) && bVar15 ||
              bVar5) && bVar30 || bVar29) && bVar16 ||
             bVar16 != (((bVar13 || bVar14 && ((bVar28 && bVar3 || bVar31) && bVar27 || bVar4)) &&
                         bVar15 || bVar5) && bVar30 || bVar29);
    bVar12 = ~(~bVar27 | uVar23 <= uVar11) | -(uVar11 < uVar23) ^ bVar27;
    goto LAB_00405d8d;
  case 0x5a:
    uVar11 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / ZEXT816(uVar22),0);
    uVar23 = uVar26 * uVar22;
    bVar27 = uVar26 <= uVar11;
    if (!bVar27) {
      uVar23 = 0xffffffffffffffff;
    }
    uVar20 = uVar23 * uVar22;
    bVar28 = uVar23 <= uVar11;
    if (!bVar28) {
      uVar20 = 0xffffffffffffffff;
    }
    bVar14 = !bVar28 && !bVar27 || bVar28 != bVar27;
    uVar23 = uVar20 * uVar22;
    bVar29 = uVar11 < uVar20;
    if (bVar29) {
      uVar23 = 0xffffffffffffffff;
    }
    bVar15 = bVar14 != bVar29;
    bVar14 = bVar15 || bVar29 && bVar14;
    uVar20 = uVar23 * uVar22;
    bVar30 = uVar11 < uVar23;
    if (bVar30) {
      uVar20 = 0xffffffffffffffff;
    }
    bVar16 = bVar14 != bVar30;
    uVar23 = uVar20 * uVar22;
    bVar31 = uVar11 < uVar20;
    if (bVar31) {
      uVar23 = 0xffffffffffffffff;
    }
    bVar4 = !bVar31;
    bVar18 = bVar31 != (bVar16 || bVar30 && bVar14);
    bVar12 = !bVar16 && (!bVar30 || !bVar15 && (!bVar29 || (bVar28 || bVar27) && bVar28 == bVar27));
LAB_00405d4f:
    bVar18 = (bVar12 | bVar4) ^ 1 | bVar18;
    uVar20 = uVar23 * uVar22;
    bVar27 = uVar11 < uVar23;
    if (bVar27) {
      uVar20 = 0xffffffffffffffff;
    }
    uVar9 = uVar22 * uVar20;
    bVar28 = uVar20 <= uVar11;
    if (!bVar28) {
      uVar9 = 0xffffffffffffffff;
    }
    bVar12 = (bVar18 ^ bVar27 | bVar27 & bVar18) ^ 1;
    bVar12 = ~(bVar12 | bVar28) | bVar28 ^ bVar12;
LAB_00405d8d:
    sVar6 = (strtol_error)bVar12;
LAB_00405d90:
    sVar6 = sVar6 & LONGINT_OVERFLOW;
    break;
  case 0x62:
    uVar22 = uVar26 >> 0x37;
    uVar11 = uVar26 << 9;
LAB_00405deb:
    sVar6 = (strtol_error)(uVar22 != 0);
    uVar9 = uVar11 | ~-(ulong)(uVar22 == 0);
    break;
  case 99:
    break;
  case 0x77:
    uVar9 = 0xffffffffffffffff;
    if (-1 < (long)uVar26) {
      uVar9 = uVar26 * 2;
    }
    sVar6 = (strtol_error)(uVar26 >> 0x3f);
  }
  sVar6 = sVar6 ^ sVar19 | sVar6 & sVar19;
  *ppcVar21 = pcVar2 + lVar25;
  sVar19 = sVar6 + LONGINT_INVALID_SUFFIX_CHAR;
  if (pcVar2[lVar25] == '\0') {
    sVar19 = sVar6;
  }
LAB_00405dbe:
  *val = uVar9;
  return sVar19;
}


void * rpl_calloc(size_t n,size_t s)

{
  size_t __size;
  int *piVar1;
  void *pvVar2;
  size_t __nmemb;
  
  __size = 1;
  if ((n | s) == 0) {
    __nmemb = 1;
  }
  else {
    __nmemb = 1;
    if (((n == 0) == (s == 0)) && (__size = s, __nmemb = n, (s * n) / s != n)) {
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
  if ((0xfffffffffffffffd < sVar2 && n != 0) && (_Var1 = hard_locale(0), !_Var1)) {
    *__pwc = (uint)(byte)*s;
    sVar2 = 1;
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
  if ((~uVar1 | 0xffffffdf) == 0xffffffff) {
    iVar5 = -(uint)(iVar2 != 0);
    if ((iVar2 != 0 || lVar3 == 0) && ((lVar3 != 0) == (iVar2 == 0))) {
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
      if (_Var3 == -1) goto LAB_00406068;
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
LAB_00406068:
  iVar1 = fclose((FILE *)fp);
  return iVar1;
}


int rpl_fflush(FILE *stream)

{
  int iVar1;
  
  if (stream != (FILE *)0x0) {
    iVar1 = __freading(stream);
    if ((iVar1 != 0) && (((stream->_flags ^ 0xfffffeffU) & stream->_flags) != 0)) {
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

