#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  __int64 v4; // rbx
  char *v5; // rax

  sub_404040(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_408950(sub_402490);
  sub_403F30(
    a1,
    (_DWORD)a2,
    (unsigned int)"uptime",
    (unsigned int)&unk_408B0E,
    (_DWORD)off_60C250,
    (unsigned int)sub_402130,
    "Joseph Arceneaux",
    "David MacKenzie",
    "Kaveh Ghazi",
    0LL);
  if ( (unsigned int)sub_407200(a1, a2, "", &unk_408E80, 0LL) != -1 )
LABEL_8:
    sub_402130(1);
  if ( a1 == dword_60C2BC )
  {
    sub_401DB0("/var/run/utmp", 1LL);
    return 0LL;
  }
  if ( a1 - dword_60C2BC != 1 )
  {
    v4 = sub_405C60(a2[dword_60C2BC + 1]);
    v5 = dcgettext(0LL, "extra operand %s", 5);
    error(0, 0, v5, v4);
    goto LABEL_8;
  }
  sub_401DB0(a2[dword_60C2BC], 0LL);
  return 0LL;
}

// positive sp value has been detected, the output may be wrong!
noreturn void __fastcall  start(__int64 a1, __int64 a2, void (*a3)(void))
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // [rsp-8h] [rbp-8h] BYREF
  char *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = v5;
  v5 = v3;
  _libc_start_main((int (__fastcall *)(int, char **, char **))main, v4, &retaddr, init, fini, a3, &v5);
  __halt();
}

__int64 *sub_401CFB()
{
  return &program_invocation_short_name;
}

__int64 sub_401D1A()
{
  return 0LL;
}

__int64 *sub_401D51()
{
  __int64 *result; // rax

  if ( !byte_60C2E8 )
  {
    while ( qword_60C2F0 < (unsigned __int64)(&qword_60BE48 - qword_60BE40 - 1) )
      ((void (*)(void))qword_60BE40[++qword_60C2F0])();
    result = sub_401CFB();
    byte_60C2E8 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_401DA8()
{
  return sub_401D1A();
}

int __fastcall sub_401DB0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __int16 v6; // cx
  time_t v7; // rax
  __int64 v8; // r13
  __int64 v9; // rbx
  struct tm *v10; // r15
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  char *IO_write_ptr; // rax
  int v15; // ebx
  char *v16; // rax
  _IO_FILE *v17; // rdi
  char *v18; // rax
  char *v19; // rax
  char *v20; // rbx
  int *v21; // rax
  const char *v22; // rbx
  int *v23; // rax
  __int64 v25; // [rsp+18h] [rbp-70h] BYREF
  __int64 v26; // [rsp+20h] [rbp-68h] BYREF
  time_t timer; // [rsp+28h] [rbp-60h] BYREF
  double loadavg[11]; // [rsp+30h] [rbp-58h] BYREF

  v26 = 0LL;
  if ( (unsigned int)sub_407360(a1, &v25, &v26, a2) )
  {
    v22 = (const char *)sub_405AE0(0LL, 3LL, a1);
    v23 = __errno_location();
    error(1, *v23, "%s", v22);
    sub_402130(1);
  }
  v2 = v26;
  v3 = v25 - 1;
  if ( !v25 )
  {
    timer = time(0LL);
LABEL_31:
    v20 = dcgettext(0LL, "couldn't get boot time", 5);
    v21 = __errno_location();
    v17 = (_IO_FILE *)1;
    error(1, *v21, v20);
LABEL_32:
    LODWORD(IO_write_ptr) = __overflow(v17, 10);
    return (int)IO_write_ptr;
  }
  v4 = 0LL;
  v5 = 0LL;
  do
  {
    while ( 1 )
    {
      v6 = *(_WORD *)v2;
      if ( !*(_BYTE *)(v2 + 44) || v6 != 7 )
        break;
      --v3;
      ++v5;
      v2 += 384LL;
      if ( v3 == -1 )
        goto LABEL_10;
    }
    if ( v6 == 2 )
      v4 = *(int *)(v2 + 340);
    --v3;
    v2 += 384LL;
  }
  while ( v3 != -1 );
LABEL_10:
  v7 = time(0LL);
  timer = v7;
  if ( !v4 )
    goto LABEL_31;
  v8 = v7 - v4;
  v9 = (v7 - v4) / 86400;
  v10 = localtime(&timer);
  if ( v10 )
  {
    v11 = dcgettext(0LL, " %H:%M:%S  ", 5);
    sub_403F10(stdout, v11, v10, 0LL, 0LL);
  }
  else
  {
    v18 = dcgettext(0LL, " ??:????  ", 5);
    __printf_chk(1LL, v18);
  }
  if ( v8 == -1 )
  {
    v19 = dcgettext(0LL, "up ???? days ??:??,  ", 5);
    __printf_chk(1LL, v19);
  }
  else
  {
    if ( v8 > 86399 )
      v12 = dcngettext(0LL, "up %ld day %2d:%02d,  ", "up %ld days %2d:%02d,  ", v9, 5);
    else
      v12 = dcgettext(0LL, "up  %2d:%02d,  ", 5);
    __printf_chk(1LL, v12);
  }
  v13 = dcngettext(0LL, "%lu user", "%lu users", v5, 5);
  __printf_chk(1LL, v13);
  LODWORD(IO_write_ptr) = getloadavg(loadavg, 3);
  v15 = (int)IO_write_ptr;
  if ( (_DWORD)IO_write_ptr != -1 )
  {
    if ( (int)IO_write_ptr > 0 )
    {
      v16 = dcgettext(0LL, ",  load average: %f", 5);
      LODWORD(IO_write_ptr) = __printf_chk(1LL, v16);
    }
    if ( v15 > 1 )
    {
      __printf_chk(1LL, ", %f", loadavg[1]);
      if ( v15 != 2 )
        __printf_chk(1LL, ", %f", loadavg[2]);
    }
    else if ( v15 != 1 )
    {
      return (int)IO_write_ptr;
    }
  }
  v17 = stdout;
  IO_write_ptr = stdout->_IO_write_ptr;
  if ( IO_write_ptr >= stdout->_IO_write_end )
    goto LABEL_32;
  stdout->_IO_write_ptr = IO_write_ptr + 1;
  *IO_write_ptr = 10;
  return (int)IO_write_ptr;
}

noreturn void __fastcall  sub_402130(int status)
{
  __int64 v1; // rbp
  char *v2; // rax
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  FILE *v7; // rbp
  char *v8; // rax
  FILE *v9; // rbp
  char *v10; // rax
  __int64 *v11; // rax
  char *v12; // rbp
  char *v13; // rax
  char *v14; // rax
  const char *v15; // r12
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  __int64 v22[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_60C308;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = dcgettext(
         0LL,
         "Print the current time, the length of time the system has been up,\n"
         "the number of users on the system, and the average number of jobs\n"
         "in the run queue over the last 1, 5 and 15 minutes.",
         5);
  __printf_chk(1LL, v4);
  v5 = dcgettext(0LL, "  Processes in\nan uninterruptible sleep state also contribute to the load average.\n", 5);
  __printf_chk(1LL, v5);
  v6 = dcgettext(0LL, "If FILE is not specified, use %s.  %s as FILE is common.\n\n", 5);
  __printf_chk(1LL, v6, "/var/run/utmp", "/var/log/wtmp");
  v7 = stdout;
  v8 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v10, v9);
  v22[0] = (__int64)"[";
  v11 = v22;
  v22[1] = (__int64)"test invocation";
  v22[2] = (__int64)"coreutils";
  v22[3] = (__int64)"Multi-call invocation";
  v22[4] = (__int64)"sha224sum";
  v22[5] = (__int64)"sha2 utilities";
  v22[6] = (__int64)"sha256sum";
  v22[7] = (__int64)"sha2 utilities";
  v22[8] = (__int64)"sha384sum";
  v22[9] = (__int64)"sha2 utilities";
  v22[10] = (__int64)"sha512sum";
  v22[11] = (__int64)"sha2 utilities";
  v22[12] = 0LL;
  v22[13] = 0LL;
  do
    v11 += 2;
  while ( *v11 && strcmp("uptime", (const char *)*v11) );
  v12 = (char *)v11[1];
  if ( v12 )
  {
    v13 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v13, &unk_408B0E, "https://www.gnu.org/software/coreutils/");
    v14 = setlocale(5, 0LL);
    if ( !v14 || !strncmp(v14, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v18 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v18, &unk_408B0E, "https://www.gnu.org/software/coreutils/");
    v19 = setlocale(5, 0LL);
    if ( !v19 || !strncmp(v19, "en_", 3uLL) )
    {
      v12 = "uptime";
      v20 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v15 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v20, "https://www.gnu.org/software/coreutils/", "uptime");
LABEL_12:
      v17 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v17, v12, v15);
LABEL_3:
      exit(status);
    }
    v12 = "uptime";
  }
  v21 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v21, "uptime");
LABEL_10:
  v15 = "Multi-call invocation" + 10;
  v16 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v16, "https://www.gnu.org/software/coreutils/", "uptime");
  if ( v12 != "uptime" )
    v15 = "";
  goto LABEL_12;
}

__int64 sub_402490()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_407AB0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60C2F8 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60C300 )
      {
        v5 = (const char *)sub_405AB0();
        error(0, *v1, "%s: %s", v5, v4);
      }
      else
      {
        error(0, *v1, "%s", v3);
      }
LABEL_8:
      _exit(status);
    }
  }
  result = sub_407AB0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

void __fastcall sub_402530(FILE *stream, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbx
  unsigned __int8 *v4; // rbp
  const __int32_t **v5; // r13
  __int64 v6; // rcx

  if ( a3 )
  {
    v3 = a2;
    v4 = &a2[a3];
    v5 = __ctype_tolower_loc();
    do
    {
      v6 = *v3++;
      fputc((*v5)[v6], stream);
    }
    while ( v3 != v4 );
  }
}

void __fastcall sub_402590(FILE *stream, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbx
  unsigned __int8 *v4; // rbp
  const __int32_t **v5; // r13
  __int64 v6; // rcx

  if ( a3 )
  {
    v3 = a2;
    v4 = &a2[a3];
    v5 = __ctype_toupper_loc();
    do
    {
      v6 = *v3++;
      fputc((*v5)[v6], stream);
    }
    while ( v3 != v4 );
  }
}

unsigned __int64 __fastcall sub_4025F0(
        FILE *stream,
        unsigned __int8 *a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        int a7)
{
  unsigned __int8 *v8; // rbx
  const char *v9; // r13
  int v10; // ebp
  int v11; // edi
  unsigned __int64 v12; // r12
  char *v13; // rbp
  char v15; // bp
  int v16; // r11d
  int v17; // eax
  char v18; // cl
  int v19; // edi
  bool v20; // cc
  int v21; // r10d
  int v22; // r15d
  unsigned int v23; // edx
  int v24; // esi
  char v25; // al
  int *v26; // rax
  size_t v27; // rax
  int v28; // r10d
  size_t v29; // rbx
  size_t v30; // rax
  unsigned __int64 v31; // rsi
  size_t v32; // r15
  __int64 v33; // r13
  int v34; // r9d
  unsigned int v35; // esi
  int v36; // edi
  char v37; // bp
  unsigned int v38; // r8d
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rbp
  unsigned __int64 v42; // r13
  __int64 v43; // r15
  __int64 v44; // r15
  __int64 v45; // r13
  char v46; // cl
  unsigned __int8 *v47; // r15
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // r13
  unsigned __int64 v51; // r13
  unsigned __int64 v52; // rax
  __int64 v53; // rbp
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rsi
  __int64 v56; // r15
  __int64 v57; // rbp
  int v58; // edi
  int v59; // edx
  int v60; // esi
  char *v61; // rcx
  char *v62; // r13
  unsigned __int8 *v63; // rax
  char *v64; // r15
  unsigned __int64 v65; // rax
  int v66; // edx
  unsigned __int64 v67; // rcx
  __int64 v68; // rbp
  unsigned __int64 v69; // rdx
  char v70; // dl
  size_t v71; // rax
  __int64 v72; // r10
  size_t v73; // r13
  size_t v74; // rax
  unsigned __int64 v75; // rdx
  int v76; // r11d
  __int64 v77; // rbp
  char v78; // al
  unsigned __int8 *v79; // rax
  int v80; // ebp
  unsigned __int64 v81; // rsi
  __int64 i; // r13
  __int64 v83; // rsi
  int v84; // eax
  int v85; // esi
  __m128i v86; // xmm4
  __m128i v87; // xmm2
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rcx
  int v92; // edx
  unsigned __int8 v93; // al
  unsigned __int8 v94; // dl
  int v95; // r9d
  unsigned __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rbp
  __int64 v99; // rbx
  int v100; // ebp
  __int32 v101; // esi
  __int32 v102; // r13d
  int v103; // r9d
  int v104; // r8d
  int v105; // eax
  int v106; // r13d
  int v107; // r13d
  int v108; // edi
  char v109; // al
  char v110; // dl
  __int64 v111; // r15
  __int64 v112; // r13
  int v113; // esi
  int v114; // esi
  char v115; // al
  char *v116; // rdx
  unsigned __int64 v117; // r15
  __int64 n; // r13
  unsigned __int64 v119; // rcx
  __int64 v120; // rbp
  int v121; // eax
  unsigned __int64 v122; // rbp
  unsigned __int64 v123; // rbp
  __int64 v124; // rbx
  __int64 v125; // rbp
  unsigned __int64 v126; // rbx
  __int64 v127; // rbp
  unsigned __int8 *v128; // rax
  unsigned __int64 v129; // rbx
  unsigned __int8 *v130; // r15
  __int64 j; // r15
  int v132; // r9d
  int v133; // edx
  __int32 v134; // esi
  __int32 v135; // edi
  int k; // edi
  __int64 v137; // rbp
  __int64 v138; // rbx
  unsigned __int64 v139; // rbp
  __int64 v140; // rbx
  __int64 v141; // rbx
  __int64 v142; // rbx
  unsigned __int64 v143; // r15
  __int64 m; // r15
  int v145; // [rsp-8h] [rbp-4E0h]
  int v146; // [rsp+0h] [rbp-4D8h]
  char v147; // [rsp+4h] [rbp-4D4h]
  char v148; // [rsp+4h] [rbp-4D4h]
  const __m128i *tp; // [rsp+8h] [rbp-4D0h]
  int *v150; // [rsp+10h] [rbp-4C8h]
  __int64 v151; // [rsp+18h] [rbp-4C0h]
  int v152; // [rsp+20h] [rbp-4B8h]
  char *v153; // [rsp+28h] [rbp-4B0h]
  int v154; // [rsp+30h] [rbp-4A8h]
  unsigned __int64 v155; // [rsp+30h] [rbp-4A8h]
  const char *v156; // [rsp+30h] [rbp-4A8h]
  int v157; // [rsp+30h] [rbp-4A8h]
  int v158; // [rsp+30h] [rbp-4A8h]
  int v159; // [rsp+30h] [rbp-4A8h]
  int v160; // [rsp+30h] [rbp-4A8h]
  char *v161; // [rsp+30h] [rbp-4A8h]
  int v162; // [rsp+38h] [rbp-4A0h]
  int v163; // [rsp+40h] [rbp-498h]
  int v164; // [rsp+44h] [rbp-494h]
  __int64 v165; // [rsp+48h] [rbp-490h]
  char v166; // [rsp+48h] [rbp-490h]
  signed int v167; // [rsp+48h] [rbp-490h]
  int v168; // [rsp+48h] [rbp-490h]
  int v169; // [rsp+48h] [rbp-490h]
  char v170; // [rsp+48h] [rbp-490h]
  char v171; // [rsp+48h] [rbp-490h]
  __int64 v172; // [rsp+48h] [rbp-490h]
  int v173; // [rsp+48h] [rbp-490h]
  __int64 v174; // [rsp+48h] [rbp-490h]
  int v175; // [rsp+50h] [rbp-488h]
  int v176; // [rsp+50h] [rbp-488h]
  char v177; // [rsp+50h] [rbp-488h]
  char v178; // [rsp+50h] [rbp-488h]
  int v179; // [rsp+50h] [rbp-488h]
  int v180; // [rsp+50h] [rbp-488h]
  int v181; // [rsp+50h] [rbp-488h]
  unsigned __int64 v182; // [rsp+58h] [rbp-480h]
  unsigned __int64 v183; // [rsp+58h] [rbp-480h]
  __int64 v184; // [rsp+58h] [rbp-480h]
  int v185; // [rsp+58h] [rbp-480h]
  unsigned __int64 v186; // [rsp+58h] [rbp-480h]
  int v187; // [rsp+58h] [rbp-480h]
  int v188; // [rsp+58h] [rbp-480h]
  unsigned __int64 v189; // [rsp+58h] [rbp-480h]
  int v190; // [rsp+58h] [rbp-480h]
  __int64 v191; // [rsp+60h] [rbp-478h]
  int v192; // [rsp+60h] [rbp-478h]
  int v193; // [rsp+60h] [rbp-478h]
  int v194; // [rsp+60h] [rbp-478h]
  unsigned __int8 *v195; // [rsp+60h] [rbp-478h]
  unsigned __int8 *v196; // [rsp+60h] [rbp-478h]
  int v197; // [rsp+68h] [rbp-470h]
  int v198; // [rsp+68h] [rbp-470h]
  unsigned __int64 v199; // [rsp+68h] [rbp-470h]
  int v200; // [rsp+68h] [rbp-470h]
  unsigned __int8 *v201; // [rsp+68h] [rbp-470h]
  unsigned __int64 v202; // [rsp+70h] [rbp-468h]
  unsigned __int8 *v203; // [rsp+70h] [rbp-468h]
  char format[2]; // [rsp+80h] [rbp-458h] BYREF
  char v205; // [rsp+82h] [rbp-456h] BYREF
  int v206; // [rsp+83h] [rbp-455h] BYREF
  char v207[9]; // [rsp+97h] [rbp-441h] BYREF
  char s[16]; // [rsp+A0h] [rbp-438h] BYREF
  __m128i v209; // [rsp+B0h] [rbp-428h]
  __m128i v210; // [rsp+C0h] [rbp-418h]
  __int64 v211; // [rsp+D0h] [rbp-408h]

  v8 = a2;
  v9 = *(const char **)(a3 + 48);
  v10 = *(_DWORD *)(a3 + 8);
  tp = (const __m128i *)a3;
  v152 = a5;
  v151 = a6;
  if ( !v9 )
    v9 = "";
  HIBYTE(v163) = a4;
  if ( v10 <= 12 )
  {
    if ( !v10 )
      v10 = 12;
  }
  else
  {
    v10 -= 12;
  }
  v11 = (char)*a2;
  v12 = 0LL;
  if ( !*a2 )
    return v12;
  v164 = v10;
  v150 = (int *)&v205;
  v153 = (char *)v9;
  while ( 2 )
  {
    if ( (_BYTE)v11 != 37 )
    {
      if ( v12 > 0xFFFFFFFFFFFFFFFDLL )
        return 0LL;
      if ( stream )
        fputc(v11, stream);
      ++v12;
      v13 = (char *)v8;
      goto LABEL_12;
    }
    v15 = 0;
    v16 = 0;
    v147 = HIBYTE(v163);
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 1 )
        {
          v17 = (char)*++v8;
          v18 = *v8;
          v19 = v17;
          v20 = (char)*v8 <= 48;
          if ( *v8 != 48 )
            break;
LABEL_25:
          v16 = v17;
        }
        while ( v20 )
        {
          if ( (_BYTE)v17 != 35 )
          {
            if ( (_BYTE)v17 == 45 )
              goto LABEL_25;
            goto LABEL_27;
          }
          v17 = (char)*++v8;
          v15 = 1;
          v18 = *v8;
          v19 = v17;
          v20 = (char)*v8 <= 48;
          if ( *v8 == 48 )
            goto LABEL_25;
        }
        if ( (_BYTE)v17 == 94 )
        {
          v147 = 1;
          continue;
        }
        break;
      }
      if ( (_BYTE)v17 == 95 )
      {
        v16 = v17;
        continue;
      }
      break;
    }
LABEL_27:
    v21 = -1;
    if ( (unsigned int)(v17 - 48) > 9 )
      goto LABEL_28;
    v21 = 0;
    while ( 1 )
    {
      v17 = (char)v8[1];
      v18 = v8[1];
      v23 = v17 - 48;
      if ( v21 > 214748364 )
        break;
      v24 = (char)*v8;
      if ( v21 == 214748364 && (char)v24 > 55 )
        break;
      ++v8;
      v21 = v24 + 10 * v21 - 48;
LABEL_40:
      if ( v23 > 9 )
      {
        v19 = v17;
        goto LABEL_28;
      }
    }
    if ( v23 <= 9 )
    {
      v17 = (char)v8[2];
      v21 = 0x7FFFFFFF;
      v8 += 2;
      v18 = v17;
      v23 = v17 - 48;
      goto LABEL_40;
    }
    v19 = (char)*++v8;
    v21 = 0x7FFFFFFF;
LABEL_28:
    if ( v18 == 69 || (v22 = 0, v18 == 79) )
    {
      v19 = (char)v8[1];
      v22 = v17;
      ++v8;
      v18 = v19;
    }
    switch ( v18 )
    {
      case 0:
        v46 = *(v8 - 1);
        v47 = v8 - 1;
        goto LABEL_108;
      case 37:
        LODWORD(v48) = 0;
        if ( v21 >= 0 )
          LODWORD(v48) = v21;
        v55 = 1LL;
        v49 = ~v12;
        v48 = (int)v48;
        if ( (_DWORD)v48 )
          v55 = (int)v48;
        v155 = v55;
        if ( !v22 )
        {
          if ( v49 > v55 )
          {
            if ( stream )
            {
              if ( v21 > 1 )
              {
                v56 = 0LL;
                v57 = v21 - 1LL;
                if ( v16 == 48 )
                {
                  do
                  {
                    ++v56;
                    fputc(48, stream);
                  }
                  while ( v57 != v56 );
                }
                else
                {
                  do
                  {
                    ++v56;
                    fputc(32, stream);
                  }
                  while ( v57 != v56 );
                }
                v19 = (char)*v8;
              }
              fputc(v19, stream);
            }
LABEL_136:
            v12 += v155;
            v13 = (char *)v8;
            goto LABEL_12;
          }
          return 0LL;
        }
        v13 = (char *)v8;
        v47 = v8;
        v51 = 1LL;
        goto LABEL_114;
      case 58:
        v115 = v8[1];
        v116 = (char *)(v8 + 1);
        for ( i = 1LL; v115 == 58; v116 = (char *)&v8[i] )
          v115 = v8[++i];
        if ( v115 != 122 )
          goto LABEL_211;
        v8 = (unsigned __int8 *)v116;
        goto LABEL_219;
      case 65:
      case 66:
      case 97:
        if ( v22 )
          goto LABEL_211;
        v25 = v147;
        if ( v15 )
          v25 = v15;
        v147 = v25;
LABEL_49:
        v166 = 0;
        v13 = (char *)v8;
        v22 = 0;
        *(_WORD *)format = 9504;
        v26 = v150;
        goto LABEL_50;
      case 67:
        if ( v22 == 69 )
          goto LABEL_375;
        v34 = 2;
        LOBYTE(v38) = tp[1].m128i_i32[1] < -1900;
        v35 = tp[1].m128i_i32[1] / 100
            + 19
            - ((tp[1].m128i_i32[1] / 100 + 19 > 0) & ((unsigned int)(tp[1].m128i_i32[1] % 100) >> 31));
        v36 = 0;
        v37 = 0;
        goto LABEL_73;
      case 68:
        if ( v22 )
          goto LABEL_211;
        v156 = "%m/%d/%y";
        goto LABEL_83;
      case 70:
        if ( v22 )
          goto LABEL_211;
        v156 = "%Y-%m-%d";
LABEL_83:
        LODWORD(v165) = v21;
        v176 = v16;
        v39 = sub_4025F0(0LL, a7, v145, v146, (int)tp, (int)v150, v151, v152, (int)v153, (int)v156, v162, v163, v165);
        v40 = 0LL;
        if ( (int)v165 >= 0 )
          v40 = (int)v165;
        v41 = v40;
        if ( v39 >= v40 )
          v41 = v39;
        if ( ~v12 <= v41 )
          return 0LL;
        if ( stream )
        {
          if ( v39 < v40 )
          {
            v42 = (int)v165 - v39;
            if ( v176 == 48 )
            {
              if ( v42 )
              {
                for ( j = 0LL; j != v42; ++j )
                  fputc(48, stream);
              }
            }
            else
            {
              v43 = 0LL;
              if ( v42 )
              {
                do
                {
                  ++v43;
                  fputc(32, stream);
                }
                while ( v42 != v43 );
              }
            }
          }
          sub_4025F0(stream, a7, v145, v146, (int)tp, (int)v150, v151, v152, (int)v153, v157, v162, v163, v165);
        }
        goto LABEL_94;
      case 71:
      case 86:
      case 103:
        if ( v22 == 69 )
          goto LABEL_211;
        v100 = tp[1].m128i_i32[1];
        v101 = tp[1].m128i_i32[3];
        v102 = tp[1].m128i_i32[2];
        v103 = v100 + ((v100 >> 31) & 0x190) - 100;
        v104 = v102 - 382 + 7 * ((v101 - v102 + 382) / 7) + 3;
        if ( v104 < 0 )
        {
          v132 = v100 + ((tp[1].m128i_i32[1] >> 31) & 0x190) - 101;
          v133 = 365;
          if ( (v132 & 3) == 0 )
          {
            v133 = 366;
            if ( v132 == 100 * (v132 / 100) )
              v133 = 366 - (v132 % 400 != 0);
          }
          v134 = v133 + v101;
          v135 = v134 - v102;
          v107 = -1;
          v104 = v134 - (v135 + 382) + 7 * ((v135 + 382) / 7) + 3;
        }
        else
        {
          v105 = 365;
          if ( (v103 & 3) == 0 )
          {
            v105 = 366;
            if ( v103 == 100 * (v103 / 100) )
              v105 = (v103 == 400 * (v103 / 400)) + 365;
          }
          v106 = v102 - 382 + 7 * ((v101 - v105 - v102 + 382) / 7) + 3;
          if ( v106 >= 0 )
            v104 = v106;
          v107 = (v106 >> 31) + 1;
        }
        if ( v18 == 71 )
        {
          v35 = v100 + v107 + 1900;
          v34 = 4;
          LOBYTE(v38) = v100 < -1900 - v107;
          v36 = 0;
          v37 = 0;
          goto LABEL_73;
        }
        if ( v18 == 103 )
        {
          v34 = 2;
          v108 = (v107 + v100 % 100) % 100;
          v35 = v108;
          if ( v108 < 0 )
          {
            v35 = v108 + 100;
            if ( v100 < -1900 - v107 )
              v35 = -v108;
          }
        }
        else
        {
          v34 = 2;
          v35 = v104 / 7 + 1;
        }
        goto LABEL_72;
      case 72:
        if ( v22 == 69 )
          goto LABEL_211;
        v34 = 2;
        v35 = tp->m128i_u32[2];
        goto LABEL_72;
      case 73:
        if ( v22 == 69 )
          goto LABEL_211;
        v35 = v164;
        v34 = 2;
        goto LABEL_72;
      case 77:
        if ( v22 == 69 )
          goto LABEL_211;
        v34 = 2;
        v35 = tp->m128i_u32[1];
        goto LABEL_72;
      case 78:
        if ( v22 == 69 )
          goto LABEL_211;
        if ( v21 == -1 )
        {
          v35 = a7;
          v21 = 9;
          v34 = 9;
        }
        else
        {
          if ( v21 > 8 )
          {
            v35 = a7;
          }
          else
          {
            v35 = a7;
            for ( k = v21; k != 9; ++k )
              v35 = (int)v35 / 10;
          }
          v34 = v21;
        }
        goto LABEL_72;
      case 80:
        v170 = 1;
        goto LABEL_276;
      case 82:
        v156 = "%H:%M";
        goto LABEL_83;
      case 83:
        if ( v22 == 69 )
          goto LABEL_211;
        v34 = 2;
        v35 = tp->m128i_i32[0];
        goto LABEL_72;
      case 84:
        v156 = "%H:%M:%S";
        goto LABEL_83;
      case 85:
        if ( v22 == 69 )
          goto LABEL_211;
        v58 = tp[1].m128i_i32[3] - tp[1].m128i_i32[2] + 7;
        v59 = (unsigned __int64)(-1840700269LL * v58) >> 32;
        goto LABEL_143;
      case 87:
        if ( v22 == 69 )
          goto LABEL_211;
        v58 = 7 * ((tp[1].m128i_i32[2] + 6) / 7) - (tp[1].m128i_i32[2] + 6) + tp[1].m128i_i32[3] + 7;
        v59 = (unsigned __int64)(-1840700269LL * v58) >> 32;
LABEL_143:
        v34 = 2;
        v35 = ((v59 + v58) >> 2) - (v58 >> 31);
        goto LABEL_72;
      case 88:
      case 99:
      case 120:
        if ( v22 != 79 )
          goto LABEL_67;
        goto LABEL_211;
      case 89:
        if ( v22 == 69 )
          goto LABEL_375;
        if ( v22 == 79 )
          goto LABEL_211;
        v34 = 4;
        v60 = tp[1].m128i_i32[1];
        LOBYTE(v38) = v60 < -1900;
        v35 = v60 + 1900;
        v36 = 0;
        v37 = 0;
        goto LABEL_149;
      case 90:
        v70 = v147;
        v159 = v21;
        if ( v15 )
          v70 = 0;
        v168 = v16;
        v148 = v70;
        v71 = strlen(v153);
        v72 = v159;
        v73 = v71;
        v74 = 0LL;
        if ( v159 >= 0 )
          v74 = v159;
        v75 = v74;
        if ( v73 >= v74 )
          v75 = v73;
        v155 = v75;
        if ( ~v12 <= v75 )
          return 0LL;
        if ( stream )
        {
          v76 = v168;
          if ( v73 < v74 )
          {
            v165 = v72 - v73;
            if ( v76 == 48 )
            {
              if ( v165 )
              {
                for ( m = 0LL; m != v165; ++m )
                  fputc(48, stream);
              }
            }
            else if ( v72 != v73 )
            {
              v178 = v15;
              v77 = 0LL;
              do
              {
                ++v77;
                fputc(32, stream);
              }
              while ( v165 != v77 );
              v15 = v178;
            }
          }
          if ( v15 )
          {
            sub_402530(stream, (unsigned __int8 *)v153, v73);
          }
          else if ( v148 )
          {
            sub_402590(stream, (unsigned __int8 *)v153, v73);
          }
          else
          {
            fwrite(v153, v73, 1uLL, stream);
          }
        }
        goto LABEL_136;
      case 98:
      case 104:
        v78 = v147;
        if ( v15 )
          v78 = v15;
        v147 = v78;
        if ( v22 )
          goto LABEL_211;
        goto LABEL_49;
      case 100:
        if ( v22 == 69 )
          goto LABEL_211;
        v34 = 2;
        v35 = tp->m128i_u32[3];
        goto LABEL_72;
      case 101:
        if ( v22 == 69 )
          goto LABEL_211;
        v35 = tp->m128i_u32[3];
        goto LABEL_185;
      case 106:
        if ( v22 == 69 )
          goto LABEL_211;
        v34 = 3;
        v114 = tp[1].m128i_i32[3];
        LOBYTE(v38) = v114 < -1;
        v35 = v114 + 1;
        v36 = 0;
        v37 = 0;
        goto LABEL_73;
      case 107:
        if ( v22 == 69 )
          goto LABEL_211;
        v35 = tp->m128i_u32[2];
        goto LABEL_185;
      case 108:
        if ( v22 == 69 )
          goto LABEL_211;
        v35 = v164;
LABEL_185:
        v34 = 2;
        if ( v16 != 48 && v16 != 45 )
          v16 = 95;
        goto LABEL_72;
      case 109:
        if ( v22 == 69 )
          goto LABEL_211;
        v34 = 2;
        v113 = tp[1].m128i_i32[0];
        LOBYTE(v38) = v113 < -1;
        v35 = v113 + 1;
        v36 = 0;
        v37 = 0;
        goto LABEL_73;
      case 110:
        LODWORD(v41) = 0;
        if ( v21 >= 0 )
          LODWORD(v41) = v21;
        v41 = (int)v41;
        if ( !(_DWORD)v41 )
          v41 = 1LL;
        if ( ~v12 <= v41 )
          return 0LL;
        if ( stream )
        {
          if ( v21 > 1 )
          {
            v111 = 0LL;
            v112 = v21 - 1LL;
            if ( v16 == 48 )
            {
              do
              {
                ++v111;
                fputc(48, stream);
              }
              while ( v112 != v111 );
            }
            else
            {
              do
              {
                ++v111;
                fputc(32, stream);
              }
              while ( v112 != v111 );
            }
          }
          fputc(10, stream);
        }
        goto LABEL_94;
      case 112:
        v170 = 0;
LABEL_276:
        v109 = v170;
        v110 = v147;
        v18 = 112;
        if ( v15 )
          v109 = v15;
        v166 = v109;
        if ( v15 )
          v110 = 0;
        v147 = v110;
        goto LABEL_68;
      case 113:
        v34 = 1;
        if ( v22 == 79 )
          goto LABEL_75;
        v37 = 0;
        LOBYTE(v38) = 0;
        v36 = 0;
        v35 = ((11 * tp[1].m128i_i32[0]) >> 5) + 1;
        goto LABEL_151;
      case 114:
LABEL_67:
        v166 = 0;
LABEL_68:
        *(_WORD *)format = 9504;
        if ( !v22 )
        {
          v13 = (char *)v8;
          v26 = v150;
          goto LABEL_50;
        }
        v34 = 0;
        goto LABEL_76;
      case 115:
        v179 = v21;
        v169 = v16;
        v62 = v207;
        v86 = _mm_loadu_si128(tp + 2);
        v87 = _mm_loadu_si128(tp + 1);
        v88 = tp[3].m128i_i64[0];
        *(__m128i *)s = _mm_loadu_si128(tp);
        v209 = v87;
        v162 = v86.m128i_i32[2];
        v210 = v86;
        v211 = v88;
        v89 = sub_407970(v151, s);
        v16 = v169;
        v21 = v179;
        v90 = v89;
        v91 = v89;
        do
        {
          v92 = v91 % 10;
          v91 /= 10LL;
          v93 = 48 - v92;
          v94 = v92 + 48;
          if ( v90 < 0 )
            v94 = v93;
          *--v62 = v94;
        }
        while ( v91 );
        v95 = 1;
        if ( v179 > 0 )
          v95 = v179;
        v158 = v95;
        if ( v90 >= 0 )
          goto LABEL_235;
        goto LABEL_319;
      case 116:
        LODWORD(v41) = 0;
        if ( v21 >= 0 )
          LODWORD(v41) = v21;
        v41 = (int)v41;
        if ( !(_DWORD)v41 )
          v41 = 1LL;
        if ( ~v12 <= v41 )
          return 0LL;
        if ( stream )
        {
          if ( v21 > 1 )
          {
            v44 = 0LL;
            v45 = v21 - 1LL;
            if ( v16 == 48 )
            {
              do
              {
                ++v44;
                fputc(48, stream);
              }
              while ( v45 != v44 );
            }
            else
            {
              do
              {
                ++v44;
                fputc(32, stream);
              }
              while ( v45 != v44 );
            }
          }
          fputc(9, stream);
        }
LABEL_94:
        v12 += v41;
        v13 = (char *)v8;
        goto LABEL_12;
      case 117:
        v34 = 1;
        v35 = (tp[1].m128i_i32[2] + 6) % 7 + 1;
        goto LABEL_72;
      case 119:
        if ( v22 == 69 )
          goto LABEL_211;
        v34 = 1;
        v35 = tp[1].m128i_u32[2];
        goto LABEL_72;
      case 121:
        if ( v22 == 69 )
        {
LABEL_375:
          v34 = 0;
          goto LABEL_75;
        }
        v34 = 2;
        v35 = tp[1].m128i_i32[1] % 100;
        if ( (v35 & 0x80000000) != 0 )
        {
          v35 += 100;
          if ( tp[1].m128i_i32[1] <= -1901 )
            v35 = -(tp[1].m128i_i32[1] % 100);
        }
LABEL_72:
        v36 = 0;
        v37 = 0;
        v38 = v35 >> 31;
        goto LABEL_73;
      case 122:
        i = 0LL;
LABEL_219:
        if ( tp[2].m128i_i32[0] < 0 )
        {
          v13 = (char *)v8;
          goto LABEL_12;
        }
        v83 = tp[2].m128i_i64[1];
        LOBYTE(v38) = 1;
        if ( (int)v83 >= 0 )
        {
          LOBYTE(v38) = 0;
          if ( !(_DWORD)v83 )
            LOBYTE(v38) = *v153 == 45;
        }
        v160 = (int)v83 / 3600;
        v84 = (int)v83 / 60 % 60;
        v36 = v84;
        v85 = (int)v83 % 60;
        if ( i == 1 )
          goto LABEL_405;
        if ( i )
        {
          if ( i == 2 )
            goto LABEL_404;
          if ( i != 3 )
          {
            v46 = *v8;
            v47 = v8;
LABEL_108:
            LODWORD(v48) = 0;
            if ( v21 >= 0 )
              LODWORD(v48) = v21;
            v49 = ~v12;
            v48 = (int)v48;
            if ( v46 == 37 )
            {
              v50 = 1LL;
              v13 = (char *)v47;
              if ( (_DWORD)v48 )
                v50 = (int)v48;
              v155 = v50;
              v51 = 1LL;
            }
            else
            {
              v8 = v47;
LABEL_211:
              v79 = v8 - 1;
              do
              {
                v47 = v79;
                v80 = (_DWORD)v8 - 1 + 2 - (_DWORD)v79--;
              }
              while ( v79[1] != 37 );
              LODWORD(v48) = 0;
              v51 = v80;
              if ( v21 >= 0 )
                LODWORD(v48) = v21;
              v49 = ~v12;
              v13 = (char *)v8;
              v48 = (int)v48;
              v81 = (int)v48;
              if ( v51 >= (int)v48 )
                v81 = v51;
              v155 = v81;
            }
LABEL_114:
            if ( v49 <= v155 )
              return 0LL;
            if ( !stream )
            {
LABEL_65:
              v12 += v155;
              goto LABEL_12;
            }
            if ( v51 < v48 )
            {
              v52 = v21 - v51;
              if ( v16 != 48 )
              {
                if ( !v52 )
                  goto LABEL_122;
                v165 = (__int64)v13;
                v53 = 0LL;
                v54 = v21 - v51;
                do
                {
                  ++v53;
                  fputc(32, stream);
                }
                while ( v54 != v53 );
                goto LABEL_121;
              }
              v126 = v21 - v51;
              if ( v52 )
              {
                v165 = (__int64)v13;
                v127 = 0LL;
                do
                {
                  ++v127;
                  fputc(48, stream);
                }
                while ( v126 != v127 );
LABEL_121:
                v13 = (char *)v165;
              }
            }
LABEL_122:
            if ( v147 )
              sub_402590(stream, v47, v51);
            else
              fwrite(v47, v51, 1uLL, stream);
            goto LABEL_65;
          }
          if ( v85 )
          {
LABEL_404:
            v37 = 1;
            v34 = 9;
            v36 = 20;
            v35 = 100 * v84 + 10000 * v160 + v85;
          }
          else if ( v84 )
          {
LABEL_405:
            v37 = 1;
            v34 = 6;
            v35 = v84 + 100 * v160;
            v36 = 4;
          }
          else
          {
            v35 = v160;
            v37 = 1;
            v34 = 3;
          }
        }
        else
        {
          v36 = 0;
          v37 = 1;
          v34 = 5;
          v35 = v84 + 100 * v160;
        }
LABEL_73:
        if ( v22 != 79 )
        {
LABEL_149:
          if ( (_BYTE)v38 )
LABEL_150:
            v35 = -v35;
LABEL_151:
          v61 = v207;
          while ( 1 )
          {
            v62 = v61 - 1;
            if ( (v36 & 1) != 0 )
            {
              v63 = (unsigned __int8 *)(v61 - 2);
              *--v61 = 58;
              v62 = (char *)v63;
            }
            v36 >>= 1;
            *(v61 - 1) = v35 % 0xA + 48;
            v61 = v62;
            if ( v35 <= 9 && !v36 )
              break;
            v35 /= 0xAu;
          }
          if ( v34 < v21 )
            v34 = v21;
          v158 = v34;
          if ( (_BYTE)v38 )
          {
LABEL_319:
            v177 = 45;
            if ( v16 != 45 )
              goto LABEL_163;
            v171 = 45;
          }
          else
          {
            if ( !v37 )
            {
LABEL_235:
              v64 = (char *)(v207 - v62);
              v65 = ~v12;
              if ( v16 == 45 || (v167 = v158 - (_DWORD)v64, v158 - (int)v64 <= 0) )
              {
                LODWORD(v69) = 0;
                v13 = (char *)v8;
                if ( v21 >= 0 )
                  LODWORD(v69) = v21;
                v69 = (int)v69;
                goto LABEL_240;
              }
              if ( v16 != 95 )
              {
                if ( v158 >= v65 )
                  return 0LL;
LABEL_181:
                v13 = (char *)v8;
                if ( stream )
                {
                  v187 = v16;
                  v123 = 0LL;
                  do
                  {
                    ++v123;
                    fputc(48, stream);
                  }
                  while ( v123 < v167 );
                  v13 = (char *)v8;
                  v16 = v187;
                }
                v12 += v167;
                v69 = 0LL;
                v21 = 0;
                v65 = ~v12;
                goto LABEL_240;
              }
              v177 = 0;
              goto LABEL_355;
            }
            if ( v16 != 45 )
            {
              v177 = 43;
LABEL_163:
              v64 = (char *)(v207 - v62);
              v167 = v158 - 1 - (v207 - v62);
              v65 = ~v12;
              if ( v167 > 0 )
              {
                if ( v16 != 95 )
                {
                  if ( v158 >= v65 )
                    return 0LL;
                  v66 = 0;
                  v67 = 1LL;
                  if ( v21 >= 0 )
                    v66 = v21;
                  if ( v66 )
                    v67 = v66;
                  v182 = v67;
                  if ( v67 >= v65 )
                    return 0LL;
                  if ( stream )
                  {
                    if ( !v158 && (unsigned __int64)v66 > 1 )
                    {
                      v191 = v21 - 1LL;
                      if ( v16 == 48 )
                      {
                        if ( v21 != 1LL )
                        {
                          v201 = v8;
                          v141 = 0LL;
                          do
                          {
                            ++v141;
                            fputc(48, stream);
                          }
                          while ( v191 != v141 );
                          v16 = 48;
                          v8 = v201;
                        }
                      }
                      else
                      {
                        v68 = 0LL;
                        if ( v21 != 1LL )
                        {
                          v197 = v16;
                          do
                          {
                            ++v68;
                            fputc(32, stream);
                          }
                          while ( v191 != v68 );
                          v16 = v197;
                        }
                      }
                    }
                    v192 = v16;
                    fputc(v177, stream);
                    v16 = v192;
                  }
                  v12 += v182;
                  goto LABEL_181;
                }
LABEL_355:
                if ( v167 >= v65 )
                  return 0LL;
                if ( stream )
                {
                  v188 = v21;
                  v128 = v8;
                  v129 = 0LL;
                  v130 = v128;
                  do
                  {
                    ++v129;
                    fputc(32, stream);
                  }
                  while ( v167 > v129 );
                  v21 = v188;
                  v8 = v130;
                }
                v12 += v167;
                v121 = v21 - v167;
                v20 = v167 < v21;
                v21 = 0;
                if ( v20 )
                  v21 = v121;
                v65 = ~v12;
                if ( v177 )
                {
                  v69 = v21;
                  v122 = 1LL;
                  if ( v21 )
                    v122 = v21;
                  if ( v122 >= v65 )
                    return 0LL;
                  if ( stream )
                  {
                    if ( !v158 && (unsigned int)v21 > 1 )
                    {
                      v190 = v21;
                      v174 = v21 - 1LL;
                      v196 = v8;
                      v142 = 0LL;
                      v143 = v21;
                      do
                      {
                        ++v142;
                        fputc(32, stream);
                      }
                      while ( v174 != v142 );
                      v21 = v190;
                      v8 = v196;
                      v69 = v143;
                    }
                    v186 = v69;
                    v173 = v21;
                    fputc(v177, stream);
                    v21 = v173;
                    v69 = v186;
                  }
                  v12 += v122;
                  v16 = 95;
                  v13 = (char *)v8;
                  v64 = (char *)(v207 - v62);
                  v65 = ~v12;
                }
                else
                {
                  v69 = v21;
                  v13 = (char *)v8;
                  v16 = 95;
                  v64 = (char *)(v207 - v62);
                }
                goto LABEL_240;
              }
              LODWORD(v69) = 0;
              v119 = 1LL;
              if ( v21 >= 0 )
                LODWORD(v69) = v21;
              v69 = (int)v69;
              if ( (_DWORD)v69 )
                v119 = (int)v69;
              v172 = v119;
              if ( v119 >= v65 )
                return 0LL;
              if ( stream )
              {
                if ( !v158 && (unsigned __int64)(int)v69 > 1 )
                {
                  v184 = v21 - 1LL;
                  if ( v16 == 48 )
                  {
                    if ( v21 != 1LL )
                    {
                      v139 = (int)v69;
                      v200 = v21;
                      v203 = v8;
                      v140 = 0LL;
                      do
                      {
                        ++v140;
                        fputc(48, stream);
                      }
                      while ( v184 != v140 );
                      v16 = 48;
                      v21 = v200;
                      v69 = v139;
                      v8 = v203;
                    }
                  }
                  else
                  {
                    v120 = 0LL;
                    if ( v21 != 1LL )
                    {
                      v193 = v16;
                      v198 = v21;
                      v202 = (int)v69;
                      do
                      {
                        ++v120;
                        fputc(32, stream);
                      }
                      while ( v184 != v120 );
                      v16 = v193;
                      v21 = v198;
                      v69 = v202;
                    }
                  }
                }
                v199 = v69;
                v194 = v21;
                v185 = v16;
                fputc(v177, stream);
                v16 = v185;
                v21 = v194;
                v69 = v199;
              }
              v12 += v172;
              v13 = (char *)v8;
              v65 = ~v12;
LABEL_240:
              v96 = v69;
              if ( (unsigned __int64)v64 >= v69 )
                v96 = (unsigned __int64)v64;
              HIDWORD(v165) = HIDWORD(v96);
              if ( v96 >= v65 )
                return 0LL;
              if ( !stream )
              {
LABEL_253:
                v12 += v96;
                goto LABEL_12;
              }
              if ( !v158 && (unsigned __int64)v64 < v69 )
              {
                v97 = v21 - (_QWORD)v64;
                if ( v16 != 48 )
                {
                  if ( !v97 )
                    goto LABEL_251;
                  v161 = v13;
                  v98 = 0LL;
                  v99 = v21 - (_QWORD)v64;
                  do
                  {
                    ++v98;
                    fputc(32, stream);
                  }
                  while ( v99 != v98 );
                  goto LABEL_250;
                }
                v124 = v21 - (_QWORD)v64;
                if ( v97 )
                {
                  v161 = v13;
                  v125 = 0LL;
                  do
                  {
                    ++v125;
                    fputc(48, stream);
                  }
                  while ( v124 != v125 );
LABEL_250:
                  v13 = v161;
                }
              }
LABEL_251:
              if ( v147 )
                sub_402590(stream, (unsigned __int8 *)v62, (__int64)v64);
              else
                fwrite(v62, (size_t)v64, 1uLL, stream);
              goto LABEL_253;
            }
            v171 = 43;
          }
          LODWORD(v69) = 0;
          v117 = 1LL;
          if ( v21 >= 0 )
            LODWORD(v69) = v21;
          v69 = (int)v69;
          if ( (_DWORD)v69 )
            v117 = (int)v69;
          if ( ~v12 <= v117 )
            return 0LL;
          if ( stream )
          {
            if ( !v158 && (unsigned __int64)(int)v69 > 1 && v21 != 1LL )
            {
              v181 = v21;
              v137 = 0LL;
              v189 = (int)v69;
              v195 = v8;
              v138 = v21 - 1LL;
              do
              {
                ++v137;
                fputc(32, stream);
              }
              while ( v138 != v137 );
              v21 = v181;
              v69 = v189;
              v8 = v195;
            }
            v183 = v69;
            v180 = v21;
            fputc(v171, stream);
            v21 = v180;
            v69 = v183;
          }
          v12 += v117;
          v13 = (char *)v8;
          v16 = 45;
          v64 = (char *)(v207 - v62);
          v65 = ~v12;
          goto LABEL_240;
        }
        if ( (_BYTE)v38 )
          goto LABEL_150;
LABEL_75:
        v166 = 0;
        *(_WORD *)format = 9504;
LABEL_76:
        v205 = v22;
        v13 = (char *)v8;
        v22 = v34;
        v26 = &v206;
LABEL_50:
        *(_BYTE *)v26 = v18;
        *((_BYTE *)v26 + 1) = 0;
        v154 = v21;
        v175 = v16;
        v27 = strftime(s, 0x400uLL, format, (const struct tm *)tp);
        if ( !v27 )
        {
LABEL_12:
          v11 = v13[1];
          v8 = (unsigned __int8 *)(v13 + 1);
          if ( !v13[1] )
            return v12;
          continue;
        }
        v28 = v154;
        v29 = v27 - 1;
        v30 = 0LL;
        if ( v154 >= 0 )
          v30 = v154;
        v31 = v30;
        if ( v29 >= v30 )
          v31 = v29;
        v155 = v31;
        if ( ~v12 > v31 )
        {
          if ( stream )
          {
            if ( !v22 && v29 < v30 )
            {
              v32 = v28 - v29;
              if ( v175 == 48 )
              {
                if ( v32 )
                {
                  for ( n = 0LL; n != v32; ++n )
                    fputc(48, stream);
                }
              }
              else
              {
                v33 = 0LL;
                if ( v32 )
                {
                  do
                  {
                    ++v33;
                    fputc(32, stream);
                  }
                  while ( v32 != v33 );
                }
              }
            }
            if ( v166 )
            {
              sub_402530(stream, (unsigned __int8 *)&s[1], v29);
            }
            else if ( v147 )
            {
              sub_402590(stream, (unsigned __int8 *)&s[1], v29);
            }
            else
            {
              fwrite(&s[1], v29, 1uLL, stream);
            }
          }
          goto LABEL_65;
        }
        return 0LL;
      default:
        goto LABEL_211;
    }
  }
}

unsigned __int64 __fastcall sub_403F10(FILE *a1, unsigned __int8 *a2, __int64 a3, __int64 a4, int a5)
{
  char v6; // [rsp+17h] [rbp-9h] BYREF

  v6 = 0;
  return sub_4025F0(a1, a2, a3, 0, (int)&v6, a4, a5);
}

void sub_403F30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, void (__fastcall *a6)(_QWORD), ...)
{
  int v6; // ebx
  int v11; // eax
  gcc_va_list va; // [rsp+8h] [rbp-F0h] BYREF

  v6 = dword_60C2B8;
  dword_60C2B8 = 0;
  if ( (_DWORD)a1 == 2 )
  {
    v11 = sub_407200(a1, a2, &unk_4092B8, &off_4092E0, 0LL);
    if ( v11 != -1 )
    {
      if ( v11 == 104 )
      {
        a6(0LL);
      }
      else if ( v11 == 118 )
      {
        va_start(va, a6);
        sub_406080(stdout, a3, a4, a5, va);
        exit(0);
      }
    }
  }
  dword_60C2B8 = v6;
  dword_60C2BC = 0;
}

char *__fastcall sub_404040(const char *a1)
{
  __int64 v1; // rbx
  char *result; // rax

  if ( !a1 )
  {
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 1uLL, 0x37uLL, stderr);
    abort();
  }
  v1 = (__int64)a1;
  result = strrchr(a1, 47);
  if ( result )
  {
    if ( result + 1 - a1 > 6 && !memcmp(result - 6, "/.libs/", 7uLL) )
    {
      v1 = (__int64)(result + 1);
      if ( !memcmp(result + 1, "lt-", 3uLL) )
      {
        v1 = (__int64)(result + 4);
        program_invocation_short_name = (__int64)(result + 4);
      }
    }
  }
  qword_60C308 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_4040E0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_407B70();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_409391;
      if ( !v5 )
        return (char *)&unk_409386;
      return v2;
    }
  }
  else if ( (*v4 & 0xDF) == 71
         && (v4[1] & 0xDF) == 66
         && v4[2] == 49
         && v4[3] == 56
         && v4[4] == 48
         && v4[5] == 51
         && v4[6] == 48
         && !v4[7] )
  {
    v5 = *v2 == 96;
    v2 = (char *)&unk_40938D;
    if ( !v5 )
      return (char *)&unk_40938A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_4041E0(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char *a8,
        char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v12; // ebp
  unsigned __int64 v13; // r11
  int v14; // r10d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r12
  int v18; // r11d
  _BYTE *v19; // r8
  size_t v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rbp
  bool v23; // al
  unsigned __int8 v24; // dl
  const unsigned __int16 **v25; // rax
  int v26; // eax
  char v27; // di
  unsigned __int64 v28; // rdx
  char v29; // cl
  int v30; // r13d
  unsigned __int8 v31; // al
  bool v33; // dl
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  int v36; // edx
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
  int v39; // r13d
  bool v40; // dl
  bool v41; // dl
  bool v42; // al
  size_t v43; // rax
  const unsigned __int16 **v44; // rbx
  char *v45; // r15
  const unsigned __int16 **v46; // r14
  char *v47; // rax
  int v48; // esi
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // di
  char *v51; // rax
  size_t v52; // rax
  __int64 v53; // rsi
  char *v54; // rsi
  _BYTE *v55; // rcx
  char i; // al
  char v57; // dl
  char *v58; // rax
  unsigned __int8 v60; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v61; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+10h] [rbp-B8h]
  char v63; // [rsp+1Fh] [rbp-A9h]
  size_t n; // [rsp+28h] [rbp-A0h]
  _BYTE *v66; // [rsp+30h] [rbp-98h]
  unsigned __int8 v67; // [rsp+30h] [rbp-98h]
  _BYTE *v68; // [rsp+30h] [rbp-98h]
  unsigned __int64 v69; // [rsp+30h] [rbp-98h]
  unsigned __int8 v70; // [rsp+38h] [rbp-90h]
  unsigned __int8 v71; // [rsp+38h] [rbp-90h]
  unsigned __int64 v72; // [rsp+38h] [rbp-90h]
  char v73; // [rsp+38h] [rbp-90h]
  int v74; // [rsp+38h] [rbp-90h]
  int v75; // [rsp+40h] [rbp-88h]
  unsigned __int64 v76; // [rsp+40h] [rbp-88h]
  int v77; // [rsp+40h] [rbp-88h]
  int v78; // [rsp+40h] [rbp-88h]
  _BYTE *v79; // [rsp+40h] [rbp-88h]
  int v80; // [rsp+48h] [rbp-80h]
  unsigned __int64 v81; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  unsigned __int64 v83; // [rsp+58h] [rbp-70h]
  size_t mb_cur_max; // [rsp+60h] [rbp-68h]
  bool v86; // [rsp+6Ch] [rbp-5Ch]
  char v87; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v88; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v89; // [rsp+70h] [rbp-58h]
  _BYTE *v90; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+88h] [rbp-40h] BYREF

  v9 = a1;
  v10 = a2;
  v12 = a6 & 2;
  mb_cur_max = __ctype_get_mb_cur_max();
  v86 = v12 != 0;
  v13 = a4;
  switch ( a5 )
  {
    case 0:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v60 = 0;
        goto LABEL_216;
      }
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 2;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        a5 = 2;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v60 = 1;
LABEL_216:
      if ( a2 )
      {
        v14 = 0;
        v42 = 0;
        v63 = 1;
        v83 = 0LL;
        goto LABEL_142;
      }
      v63 = 1;
      v14 = 0;
      v15 = 1LL;
      a5 = 2;
      v83 = 0LL;
      v87 = 0;
      v86 = 0;
      n = 1LL;
      s2 = "'";
LABEL_3:
      v16 = v13;
      v17 = 0LL;
      v18 = a5;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(a5) = v16 != v17;
        if ( v16 == -1LL )
          LOBYTE(a5) = *(_BYTE *)(a3 + v17) != 0;
        if ( !(_BYTE)a5 )
        {
          v39 = v18;
          v13 = v16;
          v40 = v39 == 2;
          if ( !v15 && v40 && v86 )
          {
            v30 = 2;
            goto LABEL_72;
          }
          v41 = !v86 && v40;
          if ( v41 )
          {
            if ( v87 )
            {
              if ( v63 )
                return sub_4041E0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "'";
                n = 1LL;
                v86 = 0;
                v87 = v42;
                goto LABEL_3;
              }
              v41 = v87;
            }
          }
          else
          {
            v41 = !v86;
          }
          if ( s2 )
          {
            if ( v41 )
            {
              v57 = *s2;
              if ( *s2 )
              {
                v58 = &s2[-v15];
                do
                {
                  if ( v10 > v15 )
                    v9[v15] = v57;
                  v57 = v58[++v15];
                }
                while ( v57 );
              }
            }
          }
          if ( v10 > v15 )
            v9[v15] = 0;
          return v15;
        }
        v19 = (_BYTE *)(a3 + v17);
        v61 = v60 & (v18 != 2);
        if ( !v61 )
          break;
        if ( n )
        {
          if ( v16 == -1LL && n > 1 )
          {
            v75 = v18;
            v70 = v14;
            v20 = strlen((const char *)a3);
            v18 = v75;
            v14 = v70;
            v19 = (_BYTE *)(a3 + v17);
            v16 = v20;
          }
          if ( v17 + n <= v16 )
          {
            v80 = v18;
            v76 = v16;
            v71 = v14;
            v66 = v19;
            v21 = memcmp(v19, s2, n);
            v19 = v66;
            v14 = v71;
            v16 = v76;
            v18 = v80;
            if ( !v21 )
            {
              if ( !v86 )
              {
                LOBYTE(v22) = *v66;
                switch ( *v66 )
                {
                  case 0:
                    goto LABEL_87;
                  case 7:
                    LOBYTE(v22) = 97;
                    goto LABEL_83;
                  case 8:
                    v24 = 0;
                    a5 = 0;
                    LOBYTE(v22) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_76;
                  case 0xA:
                    goto LABEL_68;
                  case 0xB:
                    goto LABEL_84;
                  case 0xC:
                    goto LABEL_81;
                  case 0xD:
                    goto LABEL_80;
                  case 0x20:
                    v37 = v61;
                    goto LABEL_132;
                  case 0x21:
                  case 0x22:
                  case 0x24:
                  case 0x26:
                  case 0x28:
                  case 0x29:
                  case 0x2A:
                  case 0x3B:
                  case 0x3C:
                  case 0x3D:
                  case 0x3E:
                  case 0x5B:
                  case 0x5E:
                  case 0x60:
                  case 0x7C:
                    goto LABEL_78;
                  case 0x23:
                  case 0x7E:
                    v38 = v61;
                    goto LABEL_129;
                  case 0x25:
                  case 0x2B:
                  case 0x2C:
                  case 0x2D:
                  case 0x2E:
                  case 0x2F:
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
                  case 0x3A:
                  case 0x41:
                  case 0x42:
                  case 0x43:
                  case 0x44:
                  case 0x45:
                  case 0x46:
                  case 0x47:
                  case 0x48:
                  case 0x49:
                  case 0x4A:
                  case 0x4B:
                  case 0x4C:
                  case 0x4D:
                  case 0x4E:
                  case 0x4F:
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
                  case 0x5A:
                  case 0x5D:
                  case 0x5F:
                  case 0x61:
                  case 0x62:
                  case 0x63:
                  case 0x64:
                  case 0x65:
                  case 0x66:
                  case 0x67:
                  case 0x68:
                  case 0x69:
                  case 0x6A:
                  case 0x6B:
                  case 0x6C:
                  case 0x6D:
                  case 0x6E:
                  case 0x6F:
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
                  case 0x7A:
                    v37 = v61;
                    goto LABEL_127;
                  case 0x27:
                    goto LABEL_62;
                  case 0x3F:
                    goto LABEL_58;
                  case 0x5C:
                    goto LABEL_65;
                  case 0x7B:
                  case 0x7D:
                    goto LABEL_17;
                  default:
                    goto LABEL_102;
                }
              }
LABEL_277:
              v30 = v18;
              LODWORD(v13) = v16;
              return sub_4041E0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
            }
          }
        }
        LOBYTE(v22) = *v19;
        switch ( *v19 )
        {
          case 0:
            goto LABEL_85;
          case 7:
            LOBYTE(v22) = 97;
            goto LABEL_82;
          case 8:
            LOBYTE(v22) = 98;
            goto LABEL_69;
          case 9:
LABEL_76:
            LOBYTE(v22) = 116;
            goto LABEL_69;
          case 0xA:
LABEL_68:
            LOBYTE(v22) = 110;
LABEL_69:
            v24 = 0;
            a5 = 0;
            if ( v86 )
              goto LABEL_70;
            goto LABEL_29;
          case 0xB:
LABEL_84:
            LOBYTE(v22) = 118;
            goto LABEL_82;
          case 0xC:
LABEL_81:
            LOBYTE(v22) = 102;
LABEL_82:
            if ( v86 )
            {
              v30 = v18;
              v31 = 0;
              LODWORD(v13) = v16;
              goto LABEL_71;
            }
LABEL_83:
            a5 = 0;
            goto LABEL_37;
          case 0xD:
            v61 = 0;
LABEL_80:
            LOBYTE(v22) = 13;
            v29 = 114;
            v24 = v18 == 2;
            goto LABEL_66;
          case 0x20:
            v37 = 0;
LABEL_132:
            LOBYTE(v22) = 32;
            goto LABEL_127;
          case 0x21:
          case 0x22:
          case 0x24:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2A:
          case 0x3B:
          case 0x3C:
          case 0x3D:
          case 0x3E:
          case 0x5B:
          case 0x5E:
          case 0x60:
          case 0x7C:
            v61 = 0;
LABEL_78:
            v24 = 0;
            goto LABEL_67;
          case 0x23:
          case 0x7E:
            v38 = 0;
LABEL_129:
            if ( !v17 )
            {
              a5 = v61;
              v24 = 0;
              v61 = v38;
              goto LABEL_23;
            }
            v61 = v38;
            a5 = 0;
            break;
          case 0x25:
          case 0x2B:
          case 0x2C:
          case 0x2D:
          case 0x2E:
          case 0x2F:
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
          case 0x3A:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4A:
          case 0x4B:
          case 0x4C:
          case 0x4D:
          case 0x4E:
          case 0x4F:
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
          case 0x5A:
          case 0x5D:
          case 0x5F:
          case 0x61:
          case 0x62:
          case 0x63:
          case 0x64:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6A:
          case 0x6B:
          case 0x6C:
          case 0x6D:
          case 0x6E:
          case 0x6F:
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
          case 0x7A:
            v37 = 0;
LABEL_127:
            a5 = v61;
            v61 = v37;
            LOBYTE(v25) = 0;
            goto LABEL_25;
          case 0x27:
            v61 = 0;
            goto LABEL_62;
          case 0x3F:
            v61 = 0;
            goto LABEL_58;
          case 0x5C:
            v61 = 0;
            goto LABEL_65;
          case 0x7B:
          case 0x7D:
            v61 = 0;
            goto LABEL_17;
          default:
            v61 = 0;
            goto LABEL_102;
        }
LABEL_24:
        LOBYTE(v25) = 0;
LABEL_25:
        if ( a7 && ((*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v22 >> 5)) >> v22) & 1) != 0 )
        {
          v24 = v18 == 2;
LABEL_28:
          if ( v86 )
          {
LABEL_70:
            v30 = v18;
            v31 = v24;
            LODWORD(v13) = v16;
LABEL_71:
            v60 &= v31;
            goto LABEL_72;
          }
LABEL_29:
          v26 = v14 ^ 1;
          if ( (v24 & ((unsigned __int8)v14 ^ 1)) != 0 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v15 + 1 < v10 )
              v9[v15 + 1] = 36;
            if ( v15 + 2 < v10 )
              v9[v15 + 2] = 39;
            v15 += 3LL;
            LOBYTE(v26) = v24 & (v14 ^ 1);
            v14 = v26;
          }
LABEL_37:
          if ( v10 > v15 )
            v9[v15] = 92;
          ++v15;
          ++v17;
          goto LABEL_40;
        }
LABEL_49:
        v24 = v18 == 2;
        if ( v61 )
          goto LABEL_28;
        ++v17;
        LOBYTE(v25) = v14 & ((unsigned __int8)v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v25 )
        {
          if ( v10 > v15 )
            v9[v15] = 39;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 39;
          v15 += 2LL;
          v14 = 0;
        }
LABEL_40:
        if ( v15 < v10 )
          v9[v15] = v22;
        v27 = v63;
        ++v15;
        if ( !(_BYTE)a5 )
          v27 = 0;
        v63 = v27;
      }
      LOBYTE(v22) = *v19;
      switch ( *v19 )
      {
        case 0:
          if ( !v60 )
          {
            if ( (a6 & 1) == 0 )
            {
              v61 = 0;
              v24 = v18 == 2;
              a5 = 0;
              LOBYTE(v22) = 0;
              goto LABEL_23;
            }
            ++v17;
            goto LABEL_4;
          }
LABEL_85:
          if ( v86 )
          {
            v30 = v18;
            LODWORD(v13) = v16;
            v60 = v30 == 2;
            goto LABEL_72;
          }
          v61 = 0;
LABEL_87:
          v33 = v18 == 2;
          LODWORD(v25) = v14 ^ 1;
          LOBYTE(v25) = (v18 == 2) & (v14 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 36;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v34 = v15 + 3;
            if ( v10 <= v15 + 3 )
            {
              v15 += 4LL;
              v14 = (int)v25;
              a5 = 0;
              LOBYTE(v22) = 48;
              goto LABEL_49;
            }
            goto LABEL_95;
          }
          v34 = v15;
          if ( v10 > v15 )
          {
            LODWORD(v25) = v14;
LABEL_95:
            v9[v34] = 92;
            v14 = (int)v25;
          }
          v15 = v34 + 1;
          if ( v18 == 2 )
          {
            LOBYTE(v25) = a5;
            LOBYTE(v22) = 48;
            a5 = 0;
            goto LABEL_49;
          }
          LOBYTE(v22) = 48;
          if ( v17 + 1 < v16 && (unsigned __int8)(*(_BYTE *)(a3 + v17 + 1) - 48) <= 9u )
          {
            if ( v10 > v15 )
              v9[v15] = 48;
            if ( v10 > v34 + 2 )
              v9[v34 + 2] = 48;
            v15 = v34 + 3;
            LOBYTE(v22) = 48;
          }
LABEL_99:
          LOBYTE(v25) = a5;
          a5 = 0;
          if ( v33 | v60 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v22) = 7;
          v29 = 97;
          v24 = v18 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v22) = 8;
          v29 = 98;
          v24 = v18 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v22) = 9;
          v29 = 116;
          goto LABEL_108;
        case 0xA:
          LOBYTE(v22) = 10;
          v29 = 110;
          goto LABEL_108;
        case 0xB:
          LOBYTE(v22) = 11;
          v29 = 118;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xC:
          LOBYTE(v22) = 12;
          v29 = 102;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xD:
          LOBYTE(v22) = 13;
          v29 = 114;
LABEL_108:
          v24 = v18 == 2;
          v61 = v18 == 2 && v86;
          if ( v61 )
            goto LABEL_109;
          goto LABEL_66;
        case 0x20:
          LOBYTE(v22) = 32;
          v24 = v18 == 2;
          goto LABEL_21;
        case 0x21:
        case 0x22:
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x5B:
        case 0x5E:
        case 0x60:
        case 0x7C:
          v24 = v18 == 2;
          a5 = 0;
          goto LABEL_21;
        case 0x23:
        case 0x7E:
          v24 = v18 == 2;
          goto LABEL_20;
        case 0x25:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
        case 0x2F:
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
        case 0x3A:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4A:
        case 0x4B:
        case 0x4C:
        case 0x4D:
        case 0x4E:
        case 0x4F:
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
        case 0x5A:
        case 0x5D:
        case 0x5F:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6A:
        case 0x6B:
        case 0x6C:
        case 0x6D:
        case 0x6E:
        case 0x6F:
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
        case 0x7A:
          goto LABEL_105;
        case 0x27:
LABEL_62:
          if ( v18 != 2 )
          {
            v87 = a5;
            v24 = 0;
            LOBYTE(v22) = 39;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_288;
          if ( !v10 || (v28 = 0LL, v83) )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 92;
            v28 = v10;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v10 = v83;
          }
          v87 = a5;
          v15 += 3LL;
          LOBYTE(v25) = 0;
          v14 = 0;
          v83 = v10;
          LOBYTE(v22) = 39;
          v10 = v28;
          goto LABEL_49;
        case 0x3F:
LABEL_58:
          if ( v18 == 2 )
          {
            if ( v86 )
            {
LABEL_288:
              v30 = 2;
              LODWORD(v13) = v16;
              goto LABEL_72;
            }
            a5 = 0;
            LOBYTE(v25) = 0;
            LOBYTE(v22) = 63;
            goto LABEL_49;
          }
          if ( v18 != 5 )
          {
            LOBYTE(v22) = 63;
            v24 = v18 == 2;
            a5 = 0;
            goto LABEL_23;
          }
          if ( (a6 & 4) == 0
            || v17 + 2 >= v16
            || *(_BYTE *)(a3 + v17 + 1) != 63
            || (v22 = *(unsigned __int8 *)(a3 + v17 + 2), (unsigned __int8)v22 > 0x3Eu)
            || (v53 = 0x7000A38200000000LL, !_bittest64(&v53, v22)) )
          {
            v24 = 0;
            a5 = 0;
            LOBYTE(v22) = 63;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_277;
          if ( v10 > v15 )
            v9[v15] = 63;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 34;
          if ( v10 > v15 + 2 )
            v9[v15 + 2] = 34;
          if ( v10 > v15 + 3 )
            v9[v15 + 3] = 63;
          v15 += 4LL;
          v33 = 0;
          LOBYTE(a5) = 0;
          v17 += 2LL;
          goto LABEL_99;
        case 0x5C:
          if ( v18 == 2 )
          {
            if ( v86 )
              goto LABEL_288;
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            LOBYTE(v22) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LOBYTE(v22) = 92;
          v29 = 92;
          v24 = (n != 0) & v86 & v60;
          if ( v24 )
          {
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v60 )
          {
LABEL_67:
            a5 = 0;
            goto LABEL_23;
          }
          LOBYTE(v22) = v29;
          a5 = 0;
          goto LABEL_28;
        case 0x7B:
        case 0x7D:
LABEL_17:
          v23 = v16 != 1;
          if ( v16 == -1LL )
            v23 = *(_BYTE *)(a3 + 1) != 0;
          v24 = v18 == 2;
          if ( v23 )
            goto LABEL_67;
LABEL_20:
          if ( v17 )
            goto LABEL_67;
LABEL_21:
          if ( !v86 || !v24 )
            goto LABEL_23;
LABEL_109:
          LODWORD(v13) = v16;
          v30 = 2;
          goto LABEL_72;
        default:
LABEL_102:
          if ( mb_cur_max == 1 )
          {
            v77 = v18;
            v72 = v16;
            v67 = v14;
            v25 = __ctype_b_loc();
            v14 = v67;
            v16 = v72;
            v18 = v77;
            v35 = 1LL;
            LODWORD(v25) = (*v25)[(unsigned __int8)v22];
            LOWORD(v25) = (unsigned __int16)v25 & 0x4000;
            LOBYTE(a5) = (_WORD)v25 != 0;
            LOBYTE(v36) = v60 & ((_WORD)v25 == 0);
LABEL_104:
            if ( (_BYTE)v36 )
            {
              v36 = v60;
              LOBYTE(a5) = 0;
LABEL_178:
              v48 = 0;
              v49 = v17 + v35;
              v50 = v61;
              while ( 1 )
              {
                if ( (_BYTE)v36 )
                {
                  if ( v86 )
                  {
                    v30 = v18;
                    v60 = v18 == 2;
                    LODWORD(v13) = v16;
                    goto LABEL_72;
                  }
                  LOBYTE(v25) = (v14 ^ 1) & (v18 == 2);
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 36;
                    if ( v10 > v15 + 2 )
                      v9[v15 + 2] = 39;
                    v15 += 3LL;
                    v14 = (int)v25;
                  }
                  if ( v10 > v15 )
                    v9[v15] = 92;
                  if ( v10 > v15 + 1 )
                    v9[v15 + 1] = ((unsigned __int8)v22 >> 6) + 48;
                  LODWORD(v25) = v15 + 2;
                  if ( v10 > v15 + 2 )
                  {
                    LODWORD(v25) = (((unsigned __int8)v22 >> 3) & 7) + 48;
                    v9[v15 + 2] = (_BYTE)v25;
                  }
                  ++v17;
                  v15 += 3LL;
                  LOBYTE(v22) = (v22 & 7) + 48;
                  if ( v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_40;
                  }
                  v48 = v36;
                }
                else
                {
                  LODWORD(v25) = v14 & (v48 ^ 1);
                  if ( v50 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 92;
                    ++v15;
                  }
                  if ( ++v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_51;
                  }
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    LODWORD(v25) = v15 + 1;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 39;
                    v15 += 2LL;
                    v50 = 0;
                    v14 = 0;
                  }
                  else
                  {
                    v50 = 0;
                  }
                }
                if ( v10 > v15 )
                  v9[v15] = v22;
                LOBYTE(v22) = *(_BYTE *)(a3 + v17);
                ++v15;
              }
            }
LABEL_105:
            v24 = v18 == 2;
LABEL_23:
            LOBYTE(v25) = v86 | (v24 | v60 ^ 1) ^ 1;
            if ( !(_BYTE)v25 )
              goto LABEL_49;
            goto LABEL_24;
          }
          ps = 0LL;
          if ( v16 == -1LL )
          {
            v78 = v18;
            v73 = v14;
            v68 = v19;
            v43 = strlen((const char *)a3);
            v18 = v78;
            LOBYTE(v14) = v73;
            v19 = v68;
            v16 = v43;
          }
          v89 = v15;
          v90 = v19;
          v44 = 0LL;
          v88 = v14;
          v79 = v9;
          v81 = v10;
          v69 = v16;
          v74 = v18;
          break;
      }
      while ( 2 )
      {
        v45 = (char *)v44 + v17;
        v25 = (const unsigned __int16 **)sub_407280((wchar_t *)&wc, (char *)v44 + v17 + a3);
        v46 = v25;
        if ( !v25 )
        {
LABEL_245:
          v35 = (unsigned __int64)v44;
          v15 = v89;
          v14 = v88;
          v9 = v79;
          v36 = a5 ^ 1;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          LOBYTE(v36) = v60 & (a5 ^ 1);
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-1LL )
        {
          v35 = (unsigned __int64)v44;
          v15 = v89;
          a5 = 0;
          v14 = v88;
          v9 = v79;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          v36 = v60;
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-2LL )
        {
          v16 = v69;
          v54 = (char *)v44 + v17;
          v55 = (char *)v44 + v17 + a3;
          v25 = v44;
          v35 = (unsigned __int64)v44;
          v14 = v88;
          v15 = v89;
          v9 = v79;
          v10 = v81;
          v18 = v74;
          if ( (unsigned __int64)v54 < v69 && *v55 )
          {
            do
              v25 = (const unsigned __int16 **)((char *)v25 + 1);
            while ( (unsigned __int64)v25 + v17 < v69 && *((_BYTE *)v25 + (_QWORD)v90) );
            v35 = (unsigned __int64)v25;
          }
          v36 = v60;
          a5 = 0;
LABEL_246:
          if ( v35 > 1 )
            goto LABEL_178;
          goto LABEL_104;
        }
        if ( v74 != 2 || !v86 || v25 == (const unsigned __int16 **)1 )
        {
LABEL_152:
          if ( !iswprint(wc) )
            a5 = 0;
          v44 = (const unsigned __int16 **)((char *)v44 + (_QWORD)v46);
          LODWORD(v25) = mbsinit(&ps);
          if ( (_DWORD)v25 )
            goto LABEL_245;
          continue;
        }
        break;
      }
      v47 = &v45[a3 + 1];
      while ( (unsigned __int8)(*v47 - 91) > 0x21u || ((1LL << (*v47 - 91)) & 0x20000002BLL) == 0 )
      {
        if ( (char *)v46 + a3 + (_QWORD)v45 == ++v47 )
          goto LABEL_152;
      }
      LODWORD(v9) = (_DWORD)v79;
      LODWORD(v10) = v81;
      v30 = 2;
      LODWORD(v13) = v69;
LABEL_72:
      if ( v60 )
        v30 = 4;
      return sub_4041E0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
    case 5:
      if ( v12 )
      {
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v14 = 0;
          v63 = 1;
          v87 = 0;
          v83 = 0LL;
        }
        else
        {
          v83 = 0LL;
          v14 = 0;
          v63 = 1;
          v87 = 0;
        }
        v86 = 0;
        v15 = 1LL;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 6:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 5;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_4040E0("`", a5);
        v51 = sub_4040E0("'", a5);
        v13 = a4;
        a9 = v51;
      }
      v15 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v15] )
        {
          if ( a2 > v15 )
            a1[v15] = i;
          ++v15;
        }
      }
      v62 = v13;
      v52 = strlen(a9);
      v63 = 1;
      v14 = 0;
      v13 = v62;
      n = v52;
      v87 = 0;
      s2 = a9;
      v83 = 0LL;
      v60 = 1;
      goto LABEL_3;
    default:
      abort();
  }
}

unsigned __int64 __fastcall sub_4041E0(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char *a8,
        char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v12; // ebp
  unsigned __int64 v13; // r11
  int v14; // r10d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r12
  int v18; // r11d
  _BYTE *v19; // r8
  size_t v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rbp
  bool v23; // al
  unsigned __int8 v24; // dl
  const unsigned __int16 **v25; // rax
  int v26; // eax
  char v27; // di
  unsigned __int64 v28; // rdx
  char v29; // cl
  int v30; // r13d
  unsigned __int8 v31; // al
  bool v33; // dl
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  int v36; // edx
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
  int v39; // r13d
  bool v40; // dl
  bool v41; // dl
  bool v42; // al
  size_t v43; // rax
  const unsigned __int16 **v44; // rbx
  char *v45; // r15
  const unsigned __int16 **v46; // r14
  char *v47; // rax
  int v48; // esi
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // di
  char *v51; // rax
  size_t v52; // rax
  __int64 v53; // rsi
  char *v54; // rsi
  _BYTE *v55; // rcx
  char i; // al
  char v57; // dl
  char *v58; // rax
  unsigned __int8 v60; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v61; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+10h] [rbp-B8h]
  char v63; // [rsp+1Fh] [rbp-A9h]
  size_t n; // [rsp+28h] [rbp-A0h]
  _BYTE *v66; // [rsp+30h] [rbp-98h]
  unsigned __int8 v67; // [rsp+30h] [rbp-98h]
  _BYTE *v68; // [rsp+30h] [rbp-98h]
  unsigned __int64 v69; // [rsp+30h] [rbp-98h]
  unsigned __int8 v70; // [rsp+38h] [rbp-90h]
  unsigned __int8 v71; // [rsp+38h] [rbp-90h]
  unsigned __int64 v72; // [rsp+38h] [rbp-90h]
  char v73; // [rsp+38h] [rbp-90h]
  int v74; // [rsp+38h] [rbp-90h]
  int v75; // [rsp+40h] [rbp-88h]
  unsigned __int64 v76; // [rsp+40h] [rbp-88h]
  int v77; // [rsp+40h] [rbp-88h]
  int v78; // [rsp+40h] [rbp-88h]
  _BYTE *v79; // [rsp+40h] [rbp-88h]
  int v80; // [rsp+48h] [rbp-80h]
  unsigned __int64 v81; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  unsigned __int64 v83; // [rsp+58h] [rbp-70h]
  size_t mb_cur_max; // [rsp+60h] [rbp-68h]
  bool v86; // [rsp+6Ch] [rbp-5Ch]
  char v87; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v88; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v89; // [rsp+70h] [rbp-58h]
  _BYTE *v90; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+88h] [rbp-40h] BYREF

  v9 = a1;
  v10 = a2;
  v12 = a6 & 2;
  mb_cur_max = __ctype_get_mb_cur_max();
  v86 = v12 != 0;
  v13 = a4;
  switch ( a5 )
  {
    case 0:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v60 = 0;
        goto LABEL_216;
      }
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 2;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        a5 = 2;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v60 = 1;
LABEL_216:
      if ( a2 )
      {
        v14 = 0;
        v42 = 0;
        v63 = 1;
        v83 = 0LL;
        goto LABEL_142;
      }
      v63 = 1;
      v14 = 0;
      v15 = 1LL;
      a5 = 2;
      v83 = 0LL;
      v87 = 0;
      v86 = 0;
      n = 1LL;
      s2 = "'";
LABEL_3:
      v16 = v13;
      v17 = 0LL;
      v18 = a5;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(a5) = v16 != v17;
        if ( v16 == -1LL )
          LOBYTE(a5) = *(_BYTE *)(a3 + v17) != 0;
        if ( !(_BYTE)a5 )
        {
          v39 = v18;
          v13 = v16;
          v40 = v39 == 2;
          if ( !v15 && v40 && v86 )
          {
            v30 = 2;
            goto LABEL_72;
          }
          v41 = !v86 && v40;
          if ( v41 )
          {
            if ( v87 )
            {
              if ( v63 )
                return sub_4041E0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "'";
                n = 1LL;
                v86 = 0;
                v87 = v42;
                goto LABEL_3;
              }
              v41 = v87;
            }
          }
          else
          {
            v41 = !v86;
          }
          if ( s2 )
          {
            if ( v41 )
            {
              v57 = *s2;
              if ( *s2 )
              {
                v58 = &s2[-v15];
                do
                {
                  if ( v10 > v15 )
                    v9[v15] = v57;
                  v57 = v58[++v15];
                }
                while ( v57 );
              }
            }
          }
          if ( v10 > v15 )
            v9[v15] = 0;
          return v15;
        }
        v19 = (_BYTE *)(a3 + v17);
        v61 = v60 & (v18 != 2);
        if ( !v61 )
          break;
        if ( n )
        {
          if ( v16 == -1LL && n > 1 )
          {
            v75 = v18;
            v70 = v14;
            v20 = strlen((const char *)a3);
            v18 = v75;
            v14 = v70;
            v19 = (_BYTE *)(a3 + v17);
            v16 = v20;
          }
          if ( v17 + n <= v16 )
          {
            v80 = v18;
            v76 = v16;
            v71 = v14;
            v66 = v19;
            v21 = memcmp(v19, s2, n);
            v19 = v66;
            v14 = v71;
            v16 = v76;
            v18 = v80;
            if ( !v21 )
            {
              if ( !v86 )
              {
                LOBYTE(v22) = *v66;
                switch ( *v66 )
                {
                  case 0:
                    goto LABEL_87;
                  case 7:
                    LOBYTE(v22) = 97;
                    goto LABEL_83;
                  case 8:
                    v24 = 0;
                    a5 = 0;
                    LOBYTE(v22) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_76;
                  case 0xA:
                    goto LABEL_68;
                  case 0xB:
                    goto LABEL_84;
                  case 0xC:
                    goto LABEL_81;
                  case 0xD:
                    goto LABEL_80;
                  case 0x20:
                    v37 = v61;
                    goto LABEL_132;
                  case 0x21:
                  case 0x22:
                  case 0x24:
                  case 0x26:
                  case 0x28:
                  case 0x29:
                  case 0x2A:
                  case 0x3B:
                  case 0x3C:
                  case 0x3D:
                  case 0x3E:
                  case 0x5B:
                  case 0x5E:
                  case 0x60:
                  case 0x7C:
                    goto LABEL_78;
                  case 0x23:
                  case 0x7E:
                    v38 = v61;
                    goto LABEL_129;
                  case 0x25:
                  case 0x2B:
                  case 0x2C:
                  case 0x2D:
                  case 0x2E:
                  case 0x2F:
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
                  case 0x3A:
                  case 0x41:
                  case 0x42:
                  case 0x43:
                  case 0x44:
                  case 0x45:
                  case 0x46:
                  case 0x47:
                  case 0x48:
                  case 0x49:
                  case 0x4A:
                  case 0x4B:
                  case 0x4C:
                  case 0x4D:
                  case 0x4E:
                  case 0x4F:
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
                  case 0x5A:
                  case 0x5D:
                  case 0x5F:
                  case 0x61:
                  case 0x62:
                  case 0x63:
                  case 0x64:
                  case 0x65:
                  case 0x66:
                  case 0x67:
                  case 0x68:
                  case 0x69:
                  case 0x6A:
                  case 0x6B:
                  case 0x6C:
                  case 0x6D:
                  case 0x6E:
                  case 0x6F:
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
                  case 0x7A:
                    v37 = v61;
                    goto LABEL_127;
                  case 0x27:
                    goto LABEL_62;
                  case 0x3F:
                    goto LABEL_58;
                  case 0x5C:
                    goto LABEL_65;
                  case 0x7B:
                  case 0x7D:
                    goto LABEL_17;
                  default:
                    goto LABEL_102;
                }
              }
LABEL_277:
              v30 = v18;
              LODWORD(v13) = v16;
              return sub_4041E0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
            }
          }
        }
        LOBYTE(v22) = *v19;
        switch ( *v19 )
        {
          case 0:
            goto LABEL_85;
          case 7:
            LOBYTE(v22) = 97;
            goto LABEL_82;
          case 8:
            LOBYTE(v22) = 98;
            goto LABEL_69;
          case 9:
LABEL_76:
            LOBYTE(v22) = 116;
            goto LABEL_69;
          case 0xA:
LABEL_68:
            LOBYTE(v22) = 110;
LABEL_69:
            v24 = 0;
            a5 = 0;
            if ( v86 )
              goto LABEL_70;
            goto LABEL_29;
          case 0xB:
LABEL_84:
            LOBYTE(v22) = 118;
            goto LABEL_82;
          case 0xC:
LABEL_81:
            LOBYTE(v22) = 102;
LABEL_82:
            if ( v86 )
            {
              v30 = v18;
              v31 = 0;
              LODWORD(v13) = v16;
              goto LABEL_71;
            }
LABEL_83:
            a5 = 0;
            goto LABEL_37;
          case 0xD:
            v61 = 0;
LABEL_80:
            LOBYTE(v22) = 13;
            v29 = 114;
            v24 = v18 == 2;
            goto LABEL_66;
          case 0x20:
            v37 = 0;
LABEL_132:
            LOBYTE(v22) = 32;
            goto LABEL_127;
          case 0x21:
          case 0x22:
          case 0x24:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2A:
          case 0x3B:
          case 0x3C:
          case 0x3D:
          case 0x3E:
          case 0x5B:
          case 0x5E:
          case 0x60:
          case 0x7C:
            v61 = 0;
LABEL_78:
            v24 = 0;
            goto LABEL_67;
          case 0x23:
          case 0x7E:
            v38 = 0;
LABEL_129:
            if ( !v17 )
            {
              a5 = v61;
              v24 = 0;
              v61 = v38;
              goto LABEL_23;
            }
            v61 = v38;
            a5 = 0;
            break;
          case 0x25:
          case 0x2B:
          case 0x2C:
          case 0x2D:
          case 0x2E:
          case 0x2F:
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
          case 0x3A:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4A:
          case 0x4B:
          case 0x4C:
          case 0x4D:
          case 0x4E:
          case 0x4F:
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
          case 0x5A:
          case 0x5D:
          case 0x5F:
          case 0x61:
          case 0x62:
          case 0x63:
          case 0x64:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6A:
          case 0x6B:
          case 0x6C:
          case 0x6D:
          case 0x6E:
          case 0x6F:
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
          case 0x7A:
            v37 = 0;
LABEL_127:
            a5 = v61;
            v61 = v37;
            LOBYTE(v25) = 0;
            goto LABEL_25;
          case 0x27:
            v61 = 0;
            goto LABEL_62;
          case 0x3F:
            v61 = 0;
            goto LABEL_58;
          case 0x5C:
            v61 = 0;
            goto LABEL_65;
          case 0x7B:
          case 0x7D:
            v61 = 0;
            goto LABEL_17;
          default:
            v61 = 0;
            goto LABEL_102;
        }
LABEL_24:
        LOBYTE(v25) = 0;
LABEL_25:
        if ( a7 && ((*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v22 >> 5)) >> v22) & 1) != 0 )
        {
          v24 = v18 == 2;
LABEL_28:
          if ( v86 )
          {
LABEL_70:
            v30 = v18;
            v31 = v24;
            LODWORD(v13) = v16;
LABEL_71:
            v60 &= v31;
            goto LABEL_72;
          }
LABEL_29:
          v26 = v14 ^ 1;
          if ( (v24 & ((unsigned __int8)v14 ^ 1)) != 0 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v15 + 1 < v10 )
              v9[v15 + 1] = 36;
            if ( v15 + 2 < v10 )
              v9[v15 + 2] = 39;
            v15 += 3LL;
            LOBYTE(v26) = v24 & (v14 ^ 1);
            v14 = v26;
          }
LABEL_37:
          if ( v10 > v15 )
            v9[v15] = 92;
          ++v15;
          ++v17;
          goto LABEL_40;
        }
LABEL_49:
        v24 = v18 == 2;
        if ( v61 )
          goto LABEL_28;
        ++v17;
        LOBYTE(v25) = v14 & ((unsigned __int8)v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v25 )
        {
          if ( v10 > v15 )
            v9[v15] = 39;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 39;
          v15 += 2LL;
          v14 = 0;
        }
LABEL_40:
        if ( v15 < v10 )
          v9[v15] = v22;
        v27 = v63;
        ++v15;
        if ( !(_BYTE)a5 )
          v27 = 0;
        v63 = v27;
      }
      LOBYTE(v22) = *v19;
      switch ( *v19 )
      {
        case 0:
          if ( !v60 )
          {
            if ( (a6 & 1) == 0 )
            {
              v61 = 0;
              v24 = v18 == 2;
              a5 = 0;
              LOBYTE(v22) = 0;
              goto LABEL_23;
            }
            ++v17;
            goto LABEL_4;
          }
LABEL_85:
          if ( v86 )
          {
            v30 = v18;
            LODWORD(v13) = v16;
            v60 = v30 == 2;
            goto LABEL_72;
          }
          v61 = 0;
LABEL_87:
          v33 = v18 == 2;
          LODWORD(v25) = v14 ^ 1;
          LOBYTE(v25) = (v18 == 2) & (v14 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 36;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v34 = v15 + 3;
            if ( v10 <= v15 + 3 )
            {
              v15 += 4LL;
              v14 = (int)v25;
              a5 = 0;
              LOBYTE(v22) = 48;
              goto LABEL_49;
            }
            goto LABEL_95;
          }
          v34 = v15;
          if ( v10 > v15 )
          {
            LODWORD(v25) = v14;
LABEL_95:
            v9[v34] = 92;
            v14 = (int)v25;
          }
          v15 = v34 + 1;
          if ( v18 == 2 )
          {
            LOBYTE(v25) = a5;
            LOBYTE(v22) = 48;
            a5 = 0;
            goto LABEL_49;
          }
          LOBYTE(v22) = 48;
          if ( v17 + 1 < v16 && (unsigned __int8)(*(_BYTE *)(a3 + v17 + 1) - 48) <= 9u )
          {
            if ( v10 > v15 )
              v9[v15] = 48;
            if ( v10 > v34 + 2 )
              v9[v34 + 2] = 48;
            v15 = v34 + 3;
            LOBYTE(v22) = 48;
          }
LABEL_99:
          LOBYTE(v25) = a5;
          a5 = 0;
          if ( v33 | v60 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v22) = 7;
          v29 = 97;
          v24 = v18 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v22) = 8;
          v29 = 98;
          v24 = v18 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v22) = 9;
          v29 = 116;
          goto LABEL_108;
        case 0xA:
          LOBYTE(v22) = 10;
          v29 = 110;
          goto LABEL_108;
        case 0xB:
          LOBYTE(v22) = 11;
          v29 = 118;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xC:
          LOBYTE(v22) = 12;
          v29 = 102;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xD:
          LOBYTE(v22) = 13;
          v29 = 114;
LABEL_108:
          v24 = v18 == 2;
          v61 = v18 == 2 && v86;
          if ( v61 )
            goto LABEL_109;
          goto LABEL_66;
        case 0x20:
          LOBYTE(v22) = 32;
          v24 = v18 == 2;
          goto LABEL_21;
        case 0x21:
        case 0x22:
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x5B:
        case 0x5E:
        case 0x60:
        case 0x7C:
          v24 = v18 == 2;
          a5 = 0;
          goto LABEL_21;
        case 0x23:
        case 0x7E:
          v24 = v18 == 2;
          goto LABEL_20;
        case 0x25:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
        case 0x2F:
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
        case 0x3A:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4A:
        case 0x4B:
        case 0x4C:
        case 0x4D:
        case 0x4E:
        case 0x4F:
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
        case 0x5A:
        case 0x5D:
        case 0x5F:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6A:
        case 0x6B:
        case 0x6C:
        case 0x6D:
        case 0x6E:
        case 0x6F:
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
        case 0x7A:
          goto LABEL_105;
        case 0x27:
LABEL_62:
          if ( v18 != 2 )
          {
            v87 = a5;
            v24 = 0;
            LOBYTE(v22) = 39;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_288;
          if ( !v10 || (v28 = 0LL, v83) )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 92;
            v28 = v10;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v10 = v83;
          }
          v87 = a5;
          v15 += 3LL;
          LOBYTE(v25) = 0;
          v14 = 0;
          v83 = v10;
          LOBYTE(v22) = 39;
          v10 = v28;
          goto LABEL_49;
        case 0x3F:
LABEL_58:
          if ( v18 == 2 )
          {
            if ( v86 )
            {
LABEL_288:
              v30 = 2;
              LODWORD(v13) = v16;
              goto LABEL_72;
            }
            a5 = 0;
            LOBYTE(v25) = 0;
            LOBYTE(v22) = 63;
            goto LABEL_49;
          }
          if ( v18 != 5 )
          {
            LOBYTE(v22) = 63;
            v24 = v18 == 2;
            a5 = 0;
            goto LABEL_23;
          }
          if ( (a6 & 4) == 0
            || v17 + 2 >= v16
            || *(_BYTE *)(a3 + v17 + 1) != 63
            || (v22 = *(unsigned __int8 *)(a3 + v17 + 2), (unsigned __int8)v22 > 0x3Eu)
            || (v53 = 0x7000A38200000000LL, !_bittest64(&v53, v22)) )
          {
            v24 = 0;
            a5 = 0;
            LOBYTE(v22) = 63;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_277;
          if ( v10 > v15 )
            v9[v15] = 63;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 34;
          if ( v10 > v15 + 2 )
            v9[v15 + 2] = 34;
          if ( v10 > v15 + 3 )
            v9[v15 + 3] = 63;
          v15 += 4LL;
          v33 = 0;
          LOBYTE(a5) = 0;
          v17 += 2LL;
          goto LABEL_99;
        case 0x5C:
          if ( v18 == 2 )
          {
            if ( v86 )
              goto LABEL_288;
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            LOBYTE(v22) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LOBYTE(v22) = 92;
          v29 = 92;
          v24 = (n != 0) & v86 & v60;
          if ( v24 )
          {
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v60 )
          {
LABEL_67:
            a5 = 0;
            goto LABEL_23;
          }
          LOBYTE(v22) = v29;
          a5 = 0;
          goto LABEL_28;
        case 0x7B:
        case 0x7D:
LABEL_17:
          v23 = v16 != 1;
          if ( v16 == -1LL )
            v23 = *(_BYTE *)(a3 + 1) != 0;
          v24 = v18 == 2;
          if ( v23 )
            goto LABEL_67;
LABEL_20:
          if ( v17 )
            goto LABEL_67;
LABEL_21:
          if ( !v86 || !v24 )
            goto LABEL_23;
LABEL_109:
          LODWORD(v13) = v16;
          v30 = 2;
          goto LABEL_72;
        default:
LABEL_102:
          if ( mb_cur_max == 1 )
          {
            v77 = v18;
            v72 = v16;
            v67 = v14;
            v25 = __ctype_b_loc();
            v14 = v67;
            v16 = v72;
            v18 = v77;
            v35 = 1LL;
            LODWORD(v25) = (*v25)[(unsigned __int8)v22];
            LOWORD(v25) = (unsigned __int16)v25 & 0x4000;
            LOBYTE(a5) = (_WORD)v25 != 0;
            LOBYTE(v36) = v60 & ((_WORD)v25 == 0);
LABEL_104:
            if ( (_BYTE)v36 )
            {
              v36 = v60;
              LOBYTE(a5) = 0;
LABEL_178:
              v48 = 0;
              v49 = v17 + v35;
              v50 = v61;
              while ( 1 )
              {
                if ( (_BYTE)v36 )
                {
                  if ( v86 )
                  {
                    v30 = v18;
                    v60 = v18 == 2;
                    LODWORD(v13) = v16;
                    goto LABEL_72;
                  }
                  LOBYTE(v25) = (v14 ^ 1) & (v18 == 2);
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 36;
                    if ( v10 > v15 + 2 )
                      v9[v15 + 2] = 39;
                    v15 += 3LL;
                    v14 = (int)v25;
                  }
                  if ( v10 > v15 )
                    v9[v15] = 92;
                  if ( v10 > v15 + 1 )
                    v9[v15 + 1] = ((unsigned __int8)v22 >> 6) + 48;
                  LODWORD(v25) = v15 + 2;
                  if ( v10 > v15 + 2 )
                  {
                    LODWORD(v25) = (((unsigned __int8)v22 >> 3) & 7) + 48;
                    v9[v15 + 2] = (_BYTE)v25;
                  }
                  ++v17;
                  v15 += 3LL;
                  LOBYTE(v22) = (v22 & 7) + 48;
                  if ( v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_40;
                  }
                  v48 = v36;
                }
                else
                {
                  LODWORD(v25) = v14 & (v48 ^ 1);
                  if ( v50 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 92;
                    ++v15;
                  }
                  if ( ++v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_51;
                  }
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    LODWORD(v25) = v15 + 1;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 39;
                    v15 += 2LL;
                    v50 = 0;
                    v14 = 0;
                  }
                  else
                  {
                    v50 = 0;
                  }
                }
                if ( v10 > v15 )
                  v9[v15] = v22;
                LOBYTE(v22) = *(_BYTE *)(a3 + v17);
                ++v15;
              }
            }
LABEL_105:
            v24 = v18 == 2;
LABEL_23:
            LOBYTE(v25) = v86 | (v24 | v60 ^ 1) ^ 1;
            if ( !(_BYTE)v25 )
              goto LABEL_49;
            goto LABEL_24;
          }
          ps = 0LL;
          if ( v16 == -1LL )
          {
            v78 = v18;
            v73 = v14;
            v68 = v19;
            v43 = strlen((const char *)a3);
            v18 = v78;
            LOBYTE(v14) = v73;
            v19 = v68;
            v16 = v43;
          }
          v89 = v15;
          v90 = v19;
          v44 = 0LL;
          v88 = v14;
          v79 = v9;
          v81 = v10;
          v69 = v16;
          v74 = v18;
          break;
      }
      while ( 2 )
      {
        v45 = (char *)v44 + v17;
        v25 = (const unsigned __int16 **)sub_407280((wchar_t *)&wc, (char *)v44 + v17 + a3);
        v46 = v25;
        if ( !v25 )
        {
LABEL_245:
          v35 = (unsigned __int64)v44;
          v15 = v89;
          v14 = v88;
          v9 = v79;
          v36 = a5 ^ 1;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          LOBYTE(v36) = v60 & (a5 ^ 1);
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-1LL )
        {
          v35 = (unsigned __int64)v44;
          v15 = v89;
          a5 = 0;
          v14 = v88;
          v9 = v79;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          v36 = v60;
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-2LL )
        {
          v16 = v69;
          v54 = (char *)v44 + v17;
          v55 = (char *)v44 + v17 + a3;
          v25 = v44;
          v35 = (unsigned __int64)v44;
          v14 = v88;
          v15 = v89;
          v9 = v79;
          v10 = v81;
          v18 = v74;
          if ( (unsigned __int64)v54 < v69 && *v55 )
          {
            do
              v25 = (const unsigned __int16 **)((char *)v25 + 1);
            while ( (unsigned __int64)v25 + v17 < v69 && *((_BYTE *)v25 + (_QWORD)v90) );
            v35 = (unsigned __int64)v25;
          }
          v36 = v60;
          a5 = 0;
LABEL_246:
          if ( v35 > 1 )
            goto LABEL_178;
          goto LABEL_104;
        }
        if ( v74 != 2 || !v86 || v25 == (const unsigned __int16 **)1 )
        {
LABEL_152:
          if ( !iswprint(wc) )
            a5 = 0;
          v44 = (const unsigned __int16 **)((char *)v44 + (_QWORD)v46);
          LODWORD(v25) = mbsinit(&ps);
          if ( (_DWORD)v25 )
            goto LABEL_245;
          continue;
        }
        break;
      }
      v47 = &v45[a3 + 1];
      while ( (unsigned __int8)(*v47 - 91) > 0x21u || ((1LL << (*v47 - 91)) & 0x20000002BLL) == 0 )
      {
        if ( (char *)v46 + a3 + (_QWORD)v45 == ++v47 )
          goto LABEL_152;
      }
      LODWORD(v9) = (_DWORD)v79;
      LODWORD(v10) = v81;
      v30 = 2;
      LODWORD(v13) = v69;
LABEL_72:
      if ( v60 )
        v30 = 4;
      return sub_4041E0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
    case 5:
      if ( v12 )
      {
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v14 = 0;
          v63 = 1;
          v87 = 0;
          v83 = 0LL;
        }
        else
        {
          v83 = 0LL;
          v14 = 0;
          v63 = 1;
          v87 = 0;
        }
        v86 = 0;
        v15 = 1LL;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 6:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 5;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_4040E0("`", a5);
        v51 = sub_4040E0("'", a5);
        v13 = a4;
        a9 = v51;
      }
      v15 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v15] )
        {
          if ( a2 > v15 )
            a1[v15] = i;
          ++v15;
        }
      }
      v62 = v13;
      v52 = strlen(a9);
      v63 = 1;
      v14 = 0;
      v13 = v62;
      n = v52;
      v87 = 0;
      s2 = a9;
      v83 = 0LL;
      v60 = 1;
      goto LABEL_3;
    default:
      abort();
  }
}

_BYTE *__fastcall sub_405410(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // r8d
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)ptr;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60C2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_406470();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_60C2A0 )
    {
      v7 = (__m128i *)sub_406280(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_60C2A0);
    }
    else
    {
      ptr = (void *)sub_406280(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_60C2B0], 0, 16LL * (a1 + 1 - dword_60C2B0));
    dword_60C2B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_4041E0(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60C320 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_406220(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_4041E0(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_405410(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // r8d
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)ptr;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60C2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_406470();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_60C2A0 )
    {
      v7 = (__m128i *)sub_406280(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_60C2A0);
    }
    else
    {
      ptr = (void *)sub_406280(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_60C2B0], 0, 16LL * (a1 + 1 - dword_60C2B0));
    dword_60C2B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_4041E0(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60C320 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_406220(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_4041E0(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

__int64 __fastcall sub_4055B0(__int128 *a1)
{
  __int128 *v1; // rbx
  int *v2; // rax
  int v3; // r12d
  int *v4; // rbp
  __int64 result; // rax

  v1 = a1;
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  if ( !a1 )
    v1 = &xmmword_60C420;
  result = sub_406420(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_4056A0(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_60C420;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_4041E0(
             a1,
             a2,
             a3,
             a4,
             *(_DWORD *)v6,
             *((_DWORD *)v6 + 1),
             (__int64)v6 + 8,
             *((char **)v6 + 5),
             *((char **)v6 + 6));
  *v9 = v8;
  return result;
}

_BYTE *__fastcall sub_405720(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_60C420;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_4041E0(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_406220(v11 + 1);
  sub_4041E0(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_405820()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( dword_60C2B0 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_60C2B0 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_60C320 )
  {
    free(v4);
    *(_QWORD *)&xmmword_60C2A0 = 256LL;
    *((_QWORD *)&xmmword_60C2A0 + 1) = &unk_60C320;
  }
  if ( v0 != &xmmword_60C2A0 )
  {
    free(v0);
    ptr = &xmmword_60C2A0;
  }
  dword_60C2B0 = 1;
}

_BYTE *__fastcall sub_405930(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v4[1] = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_405410(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_405930(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v4[1] = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_405410(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_4059A0(int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  int v5[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v5[0] = a2;
  v5[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_405410(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_4059A0(int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  int v5[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v5[0] = a2;
  v5[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_405410(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_405A30(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_60C450;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60C420);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60C430);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60C440);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_405410(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_405AB0(__int64 a1)
{
  return sub_405A30(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_405AE0(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v5 = 0x400000000000000LL;
  v4[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_405410(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_405AE0(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v5 = 0x400000000000000LL;
  v4[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_405410(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_405B50(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60C420);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60C430);
  si128 = _mm_load_si128((const __m128i *)&xmmword_60C440);
  v8 = qword_60C450;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_405410(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_405C60(__int64 a1)
{
  return sub_405410(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60C260);
}

__int64 __fastcall sub_405C80(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  const char *v13; // rsi
  __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  __int64 v18; // rbx
  char *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  char *v22; // rax

  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs_unlocked(v9, stream);
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v14 = *a5;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *a5;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *a5;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 7LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 8LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *a5;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *a5;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_405C80(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  const char *v13; // rsi
  __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  __int64 v18; // rbx
  char *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  char *v22; // rax

  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs_unlocked(v9, stream);
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v14 = *a5;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *a5;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *a5;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 7LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 8LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *a5;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *a5;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_406080(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
{
  __int64 i; // r9
  __int64 *v6; // r10
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 *v9; // r10
  __int64 v10; // rax
  __int64 v12[11]; // [rsp+0h] [rbp-58h] BYREF

  for ( i = 0LL; i != 10; ++i )
  {
    v8 = *a5;
    if ( (unsigned int)*a5 <= 0x2F )
    {
      v6 = (__int64 *)(*((_QWORD *)a5 + 2) + v8);
      *a5 = v8 + 8;
      v7 = *v6;
      v12[i] = *v6;
      if ( !v7 )
        return sub_405C80(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_405C80(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_4060E0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  char *v7; // r10
  unsigned int v8; // r8d
  __int64 i; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v15[17]; // [rsp+20h] [rbp-88h] BYREF

  v15[14] = a5;
  v7 = &a7;
  v8 = 32;
  v15[15] = a6;
  for ( i = 0LL; i != 10; ++i )
  {
    if ( v8 <= 0x2F )
    {
      v10 = v8;
      v8 += 8;
      v11 = *(__int64 *)((char *)&v15[10] + v10);
      v15[i] = v11;
      if ( !v11 )
        return sub_405C80(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_405C80(a1, a2, a3, a4, v15, i);
}

int sub_4061A0()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_408B0E, "https://www.gnu.org/software/coreutils/");
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_406220(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_406470();
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_406270(size_t a1)
{
  return sub_406220(a1);
}

void *__fastcall sub_406280(void *a1, size_t a2)
{
  void *result; // rax

  if ( !a2 && a1 )
  {
    free(a1);
    return 0LL;
  }
  else
  {
    result = realloc(a1, a2);
    if ( !result )
    {
      if ( a2 )
        sub_406470();
    }
  }
  return result;
}

void *__fastcall sub_4063D0(size_t n)
{
  void *v1; // rax

  v1 = sub_406220(n);
  return memset(v1, 0, n);
}

__int64 __fastcall sub_4063F0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_406470(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_406420(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_406220(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_406450(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_406420(src, v1 + 1);
}

noreturn void  sub_406470()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_4064B0(__int64 a1, int *a2)
{
  __int64 v2; // r11
  int v3; // r12d
  int v4; // ebp
  __int64 v5; // rbx
  int v6; // r9d
  int v7; // r10d
  int v8; // r8d
  int v9; // r14d
  int v10; // edx
  __int64 *v11; // rax
  __int64 *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx

  v2 = a1 + 8;
  v3 = a2[11];
  v4 = *a2;
  v5 = a2[12];
  v6 = v3;
  v7 = *a2;
  v8 = a2[12];
LABEL_2:
  if ( v7 > v8 )
  {
    while ( v6 < v8 )
    {
      v9 = v7 - v8;
      v10 = v8 - v6;
      if ( v7 - v8 <= v8 - v6 )
      {
        v16 = (__int64 *)(a1 + 8LL * v6);
        v17 = v5 - v6;
        do
        {
          v18 = *v16;
          *v16 = v16[v17];
          v16[v17] = v18;
          ++v16;
        }
        while ( v16 != (__int64 *)(v2 + 8 * (v6 + (unsigned __int64)(unsigned int)(v9 - 1))) );
        v6 += v9;
        goto LABEL_2;
      }
      v7 -= v10;
      v11 = (__int64 *)(a1 + 8LL * v6);
      v12 = (__int64 *)(v2 + 8 * (v6 + (unsigned __int64)(unsigned int)(v10 - 1)));
      v13 = v7 - (__int64)v6;
      do
      {
        v14 = *v11;
        *v11 = v11[v13];
        v11[v13] = v14;
        ++v11;
      }
      while ( v12 != v11 );
      if ( v7 <= v8 )
        break;
    }
  }
  a2[12] = v4;
  result = (unsigned int)(v4 - v8);
  a2[11] = result + v3;
  return result;
}

__int64 __fastcall sub_406590(
        int a1,
        __int64 *a2,
        const char *a3,
        char **a4,
        _DWORD *a5,
        int a6,
        int *a7,
        int a8,
        __int64 a9)
{
  const char *v9; // r14
  char *v10; // rbp
  size_t v11; // r13
  char **v12; // rbx
  __int64 v13; // r12
  const char *v14; // r15
  const char *v15; // rdi
  __int64 v16; // r15
  char **v17; // rbp
  char *v18; // rdx
  __int64 result; // rax
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  char *v23; // rdx
  __int64 v24; // rbx
  char *v25; // rax
  __int64 v26; // rbx
  char *v27; // rax
  __int64 v28; // rbp
  char *v29; // rax
  __int64 v30; // rbp
  char *v31; // rax
  FILE *v32; // rdi
  char **v33; // rbx
  _BYTE *v34; // rbp
  __int64 v35; // r12
  __int64 v36; // rbp
  char *v37; // rax
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  int v45; // [rsp+38h] [rbp-50h]
  char v46; // [rsp+3Fh] [rbp-49h]
  int v48; // [rsp+44h] [rbp-44h]
  int v49; // [rsp+48h] [rbp-40h]

  v9 = (const char *)*((_QWORD *)a7 + 4);
  v10 = (char *)v9;
  v46 = *v9;
  if ( *v9 == 61 || !*v9 )
  {
    v11 = 0LL;
  }
  else
  {
    do
      ++v10;
    while ( *v10 && *v10 != 61 );
    v11 = v10 - v9;
  }
  v12 = a4;
  v13 = 0LL;
  s1 = *a4;
  v14 = *a4;
  if ( !*a4 )
  {
LABEL_24:
    if ( !a6 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(a3, v46), result = 0xFFFFFFFFLL, !v18) )
    {
      if ( a8 )
      {
        v24 = *a2;
        v25 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v25, v24);
      }
      *((_QWORD *)a7 + 4) = 0LL;
      ++*a7;
      a7[2] = 0;
      return 63LL;
    }
    return result;
  }
  while ( 1 )
  {
    if ( !strncmp(v14, v9, v11) && strlen(v14) == v11 )
      goto LABEL_31;
    v12 += 4;
    v14 = *v12;
    if ( !*v12 )
      break;
    v13 = (int)v13 + 1;
  }
  v12 = 0LL;
  v48 = -1;
  v15 = s1;
  v16 = 0LL;
  v45 = 0;
  v49 = 0;
  ptr = 0LL;
  s1a = v10;
  v17 = a4;
  do
  {
    if ( strncmp(v15, v9, v11) )
      goto LABEL_20;
    if ( v12 )
    {
      if ( (a6
         || *((_DWORD *)v12 + 2) != *((_DWORD *)v17 + 2)
         || v12[2] != v17[2]
         || *((_DWORD *)v12 + 6) != *((_DWORD *)v17 + 6))
        && !v45 )
      {
        if ( a8 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((int)v13 + 1, 1uLL);
          if ( ptr )
          {
            v49 = 1;
            ptr[v48] = 1;
LABEL_19:
            ptr[v16] = 1;
            goto LABEL_20;
          }
          v45 = 1;
        }
        else
        {
          v45 = 1;
          if ( ptr )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v48 = v16;
      v12 = v17;
    }
LABEL_20:
    v17 += 4;
    v15 = *v17;
    ++v16;
  }
  while ( *v17 );
  v10 = s1a;
  if ( ptr || v45 )
  {
    if ( a8 )
    {
      if ( v45 )
      {
        v26 = *a2;
        v27 = dcgettext(0LL, "%s: option '%s%s' is ambiguous\n", 5);
        __fprintf_chk(stderr, 1LL, v27, v26);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
      else
      {
        flockfile(stderr);
        v30 = *a2;
        v31 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v31, v30);
        v32 = stderr;
        v33 = a4;
        v34 = ptr;
        v35 = (__int64)&ptr[v13 + 1];
        do
        {
          if ( *v34 )
          {
            __fprintf_chk(v32, 1LL, " '%s%s'", a9);
            v32 = stderr;
          }
          ++v34;
          v33 += 4;
        }
        while ( (_BYTE *)v35 != v34 );
        fputc(10, v32);
        funlockfile(stderr);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
    }
    if ( v49 )
      free(ptr);
    *((_QWORD *)a7 + 4) = &v9[strlen(v9)];
    ++*a7;
    a7[2] = 0;
    return 63LL;
  }
  else
  {
    if ( !v12 )
      goto LABEL_24;
    LODWORD(v13) = v48;
LABEL_31:
    v20 = *a7;
    *((_QWORD *)a7 + 4) = 0LL;
    v21 = v20 + 1;
    *a7 = v20 + 1;
    v22 = *((_DWORD *)v12 + 2);
    if ( *v10 )
    {
      if ( v22 )
      {
        *((_QWORD *)a7 + 2) = v10 + 1;
        goto LABEL_33;
      }
      if ( a8 )
      {
        v28 = *a2;
        v29 = dcgettext(0LL, "%s: option '%s%s' doesn't allow an argument\n", 5);
        __fprintf_chk(stderr, 1LL, v29, v28);
      }
      a7[2] = *((_DWORD *)v12 + 6);
      return 63LL;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_33;
      if ( v21 >= a1 )
      {
        if ( a8 )
        {
          v36 = *a2;
          v37 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v37, v36);
        }
        a7[2] = *((_DWORD *)v12 + 6);
        return 5 * (unsigned int)(*a3 != 58) + 58;
      }
      else
      {
        *a7 = v20 + 2;
        *((_QWORD *)a7 + 2) = a2[v21];
LABEL_33:
        if ( a5 )
          *a5 = v13;
        v23 = v12[2];
        result = *((unsigned int *)v12 + 6);
        if ( v23 )
        {
          *(_DWORD *)v23 = result;
          return 0LL;
        }
      }
    }
  }
  return result;
}

__int64 __fastcall sub_406BB0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
{
  int v8; // r13d
  int v9; // eax
  int v10; // ebp
  const char *v12; // r15
  _BYTE *v13; // rdx
  char v14; // al
  char v15; // al
  int v16; // eax
  __int64 v17; // r14
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // r14d
  char *v22; // rax
  __int64 v23; // r8
  char v24; // cl
  int v26; // edx
  __int64 v27; // rax
  _BYTE *v28; // rcx
  int v29; // esi
  char v30; // cl
  char *v31; // rax
  __int64 v32; // rax
  char *v34; // rax
  char v35; // dl
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rbp
  char *v40; // rax
  __int64 v41; // rbp
  char *v42; // rax
  __int64 v43; // rbp
  char *v44; // rax
  char v47; // [rsp+1Ch] [rbp-4Ch]
  int v48; // [rsp+1Ch] [rbp-4Ch]
  int v49; // [rsp+1Ch] [rbp-4Ch]
  int v50; // [rsp+1Ch] [rbp-4Ch]
  _BYTE *v51; // [rsp+20h] [rbp-48h]
  _BYTE *v52; // [rsp+28h] [rbp-40h]

  v8 = a7[1];
  if ( a1 <= 0 )
    return (unsigned int)-1;
  v9 = *a7;
  v10 = a1;
  v12 = a3;
  *((_QWORD *)a7 + 2) = 0LL;
  if ( !v9 )
  {
    *a7 = 1;
    v9 = 1;
LABEL_4:
    a7[12] = v9;
    a7[11] = v9;
    *((_QWORD *)a7 + 4) = 0LL;
    if ( *a3 == 45 )
    {
      a7[10] = 2;
      v12 = a3 + 1;
      v13 = 0LL;
    }
    else if ( *a3 == 43 )
    {
      a7[10] = 0;
      v12 = a3 + 1;
      v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
      if ( !a8 )
      {
        v50 = a6;
        v34 = getenv("POSIXLY_CORRECT");
        a6 = v50;
        if ( !v34 )
        {
          a7[10] = 1;
          v13 = (_BYTE *)*((_QWORD *)a7 + 4);
          goto LABEL_24;
        }
        v13 = (_BYTE *)*((_QWORD *)a7 + 4);
      }
      a7[10] = 0;
    }
LABEL_24:
    a7[6] = 1;
    v14 = *v12;
    goto LABEL_25;
  }
  if ( !a7[6] )
    goto LABEL_4;
  v14 = *a3;
  v13 = (_BYTE *)*((_QWORD *)a7 + 4);
  if ( ((v14 - 43) & 0xFD) == 0 )
  {
    v15 = *++v12;
    if ( v15 == 58 )
      v8 = 0;
    if ( !v13 )
      goto LABEL_12;
    goto LABEL_28;
  }
LABEL_25:
  if ( v14 == 58 )
    v8 = 0;
  if ( !v13 )
    goto LABEL_12;
LABEL_28:
  if ( !*v13 )
  {
LABEL_12:
    v16 = *a7;
    if ( a7[12] > *a7 )
      a7[12] = v16;
    if ( v16 < a7[11] )
      a7[11] = v16;
    if ( a7[10] == 1 )
    {
      v26 = a7[12];
      if ( a7[11] == v26 )
      {
        if ( v16 != v26 )
        {
          a7[11] = v16;
          v26 = v16;
        }
      }
      else if ( v16 != v26 )
      {
        v48 = a6;
        sub_4064B0((__int64)a2, a7);
        v26 = *a7;
        a6 = v48;
      }
      if ( a1 <= v26 )
      {
LABEL_79:
        v16 = v26;
      }
      else
      {
        v27 = v26;
        while ( 1 )
        {
          v28 = (_BYTE *)a2[v27];
          v29 = v27;
          v26 = v27;
          if ( *v28 == 45 )
          {
            if ( v28[1] )
              break;
          }
          v26 = ++v27;
          *a7 = v29 + 1;
          if ( a1 <= (int)v27 )
            goto LABEL_79;
        }
        v16 = *a7;
      }
      a7[12] = v26;
    }
    if ( a1 == v16 )
    {
      v10 = a7[12];
      v18 = a7[11];
LABEL_41:
      if ( v18 != v10 )
        *a7 = v18;
      return (unsigned int)-1;
    }
    v17 = a2[v16];
    if ( !strcmp((const char *)v17, "--") )
    {
      v18 = a7[11];
      v19 = a7[12];
      v20 = v16 + 1;
      *a7 = v20;
      if ( v18 == v19 )
      {
        a7[11] = v20;
        v18 = v20;
      }
      else if ( v20 != v19 )
      {
        sub_4064B0((__int64)a2, a7);
        v18 = a7[11];
      }
      a7[12] = a1;
      *a7 = a1;
      goto LABEL_41;
    }
    if ( *(_BYTE *)v17 == 45 )
    {
      v30 = *(_BYTE *)(v17 + 1);
      if ( v30 )
      {
        if ( a4 )
        {
          if ( v30 == 45 )
          {
            *((_QWORD *)a7 + 4) = v17 + 2;
            return (unsigned int)sub_406590(a1, a2, v12, a4, a5, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_406590(a1, a2, v12, a4, a5, a6, a7, v8, (__int64)"-");
              if ( v21 != -1 )
                return v21;
              v17 = a2[*a7];
            }
          }
        }
        v13 = (_BYTE *)(v17 + 1);
        goto LABEL_29;
      }
    }
    if ( a7[10] )
    {
      *((_QWORD *)a7 + 2) = v17;
      v21 = 1;
      *a7 = v16 + 1;
      return v21;
    }
    return (unsigned int)-1;
  }
LABEL_29:
  v51 = v13;
  *((_QWORD *)a7 + 4) = v13 + 1;
  v21 = (char)*v13;
  v52 = v13 + 1;
  v47 = *v13;
  v22 = strchr(v12, v21);
  v23 = (__int64)v52;
  if ( !v51[1] )
    ++*a7;
  if ( (unsigned __int8)(v47 - 58) > 1u && v22 )
  {
    v24 = v22[1];
    if ( *v22 == 87 && a4 && v24 == 59 )
    {
      if ( v51[1] )
      {
LABEL_68:
        *((_QWORD *)a7 + 4) = v23;
        *((_QWORD *)a7 + 2) = 0LL;
        return (unsigned int)sub_406590(a1, a2, v12, a4, a5, 0, a7, v8, (__int64)"-W ");
      }
      v32 = *a7;
      if ( (_DWORD)v32 != a1 )
      {
        v23 = a2[v32];
        goto LABEL_68;
      }
      if ( v8 )
      {
        v43 = *a2;
        v44 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v44, v43);
      }
      a7[2] = v21;
      return 5 * (unsigned int)(*v12 != 58) + 58;
    }
    else if ( v24 == 58 )
    {
      v35 = v51[1];
      if ( v22[2] == 58 )
      {
        if ( v35 )
        {
          *((_QWORD *)a7 + 2) = v52;
          ++*a7;
        }
        else
        {
          *((_QWORD *)a7 + 2) = 0LL;
        }
      }
      else
      {
        v36 = *a7;
        if ( v35 )
        {
          *((_QWORD *)a7 + 2) = v52;
          *a7 = v36 + 1;
        }
        else if ( a1 == (_DWORD)v36 )
        {
          if ( v8 )
          {
            v41 = *a2;
            v42 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v42, v41);
          }
          a7[2] = v21;
          v21 = 5 * (*v12 != 58) + 58;
        }
        else
        {
          v37 = v36 + 1;
          v38 = a2[v36];
          *a7 = v37;
          *((_QWORD *)a7 + 2) = v38;
        }
      }
      *((_QWORD *)a7 + 4) = 0LL;
    }
  }
  else
  {
    if ( v8 )
    {
      v39 = *a2;
      v40 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
      __fprintf_chk(stderr, 1LL, v40, v39);
    }
    a7[2] = v21;
    return 63;
  }
  return v21;
}

__int64 __fastcall sub_407180(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_60C460 = dword_60C2BC;
  dword_60C464 = dword_60C2B8;
  result = sub_406BB0(a1, a2, a3, a4, a5, a6, &dword_60C460, a7);
  dword_60C2BC = dword_60C460;
  qword_60C4B0 = qword_60C470;
  dword_60C2B4 = dword_60C468;
  return result;
}

__int64 __fastcall sub_4071E0(int a1, __int64 *a2, const char *a3)
{
  return sub_407180(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_407200(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_407180(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_407220(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_406BB0(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_407240(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_407180(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_407260(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_406BB0(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_407280(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx
  wchar_t *v5; // r12
  const char *v6; // rbp
  char v8; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( !s )
  {
    a3 = 1LL;
    v6 = "%s: invalid option -- '%c'\n" + 27;
LABEL_7:
    v5 = (wchar_t *)&v8;
    goto LABEL_4;
  }
  v4 = -2LL;
  if ( !a3 )
    return v4;
  v5 = pwc;
  v6 = s;
  if ( !pwc )
    goto LABEL_7;
LABEL_4:
  v4 = mbrtowc(v5, v6, a3, a4);
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_407B10(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

char *__fastcall sub_407300(__int64 a1)
{
  char *v1; // rbx
  char *v2; // rax

  v1 = (char *)sub_406220(0x21uLL);
  strncpy(v1, (const char *)(a1 + 44), 0x20uLL);
  v1[32] = 0;
  v2 = &v1[strlen(v1)];
  if ( v1 < v2 )
  {
    do
    {
      if ( *(v2 - 1) != 32 )
        break;
      *--v2 = 0;
    }
    while ( v1 != v2 );
  }
  return v1;
}

__int64 __fastcall sub_407360(const char *a1, unsigned __int64 *a2, _QWORD *a3, char a4)
{
  char *v4; // r14
  int v5; // r13d
  int v6; // r12d
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  struct utmpx *v9; // r15
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // rax
  __pid_t ut_pid; // edi
  __int64 v15; // rdx
  size_t v16; // rsi
  char *v17; // rax
  __int64 v20; // [rsp+18h] [rbp-40h]

  v4 = 0LL;
  v5 = a4 & 1;
  v6 = a4 & 2;
  v7 = 0LL;
  v8 = 0LL;
  utmpxname(a1);
  setutxent();
LABEL_2:
  while ( 2 )
  {
    v9 = getutxent();
    if ( v9 )
    {
      while ( v9->ut_user[0] && v9->ut_type == 7 )
      {
        if ( !v5 )
          goto LABEL_6;
        ut_pid = v9->ut_pid;
        if ( ut_pid <= 0 || kill(ut_pid, 0) >= 0 )
          goto LABEL_6;
        if ( *__errno_location() == 3 )
          goto LABEL_2;
        if ( v8 != v7 )
        {
LABEL_7:
          v10 = v8 + 1;
          goto LABEL_8;
        }
LABEL_15:
        if ( v4 )
        {
          if ( v8 > 0x38E38E38E38E37LL )
            goto LABEL_24;
          v15 = v8 + 1;
          v7 = v8 + 1 + (v8 >> 1);
          v16 = 384 * v7;
        }
        else if ( v8 )
        {
          if ( ((384 * v8) & 0x8000000000000000LL) != 0LL || !is_mul_ok(v8, 0x180uLL) )
LABEL_24:
            sub_406470();
          v15 = v8 + 1;
          v16 = 384 * v8;
        }
        else
        {
          v16 = 384LL;
          v7 = 1LL;
          v15 = 1LL;
        }
        v20 = v15;
        v17 = (char *)sub_406280(v4, v16);
        v10 = v20;
        v4 = v17;
LABEL_8:
        v11 = 3 * v8;
        v8 = v10;
        v12 = &v4[128 * v11];
        *(_QWORD *)v12 = *(_QWORD *)&v9->ut_type;
        *((_QWORD *)v12 + 47) = *(_QWORD *)&v9->__unused[12];
        qmemcpy(
          (void *)((unsigned __int64)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL),
          (const void *)((char *)v9 - &v12[-((unsigned __int64)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL)]),
          8LL * (((unsigned int)v12 - (((_DWORD)v12 + 8) & 0xFFFFFFF8) + 384) >> 3));
        v9 = getutxent();
        if ( !v9 )
          goto LABEL_9;
      }
      if ( v6 )
        continue;
LABEL_6:
      if ( v8 != v7 )
        goto LABEL_7;
      goto LABEL_15;
    }
    break;
  }
LABEL_9:
  endutxent();
  *a2 = v8;
  *a3 = v4;
  return 0LL;
}

__int64 __fastcall sub_407510(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx

  if ( *(_BYTE *)(a1 + 8) )
    v1 = setenv("TZ", (const char *)(a1 + 9), 1);
  else
    v1 = unsetenv("TZ");
  v2 = 0;
  if ( !v1 )
  {
    tzset();
    return 1;
  }
  return v2;
}

void __fastcall sub_407560(_QWORD *a1)
{
  _QWORD *v1; // rbx

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      free(a1);
      a1 = v1;
    }
    while ( v1 );
  }
}

__int64 __fastcall sub_407590(_QWORD *a1)
{
  int *v1; // rbx
  int v2; // r13d
  unsigned int v3; // ebp

  v1 = __errno_location();
  v2 = *v1;
  v3 = sub_407510((__int64)a1);
  if ( !(_BYTE)v3 )
    v2 = *v1;
  sub_407560(a1);
  *v1 = v2;
  return v3;
}

_QWORD *__fastcall sub_4075E0(const char *src)
{
  size_t v2; // rax
  __int64 v3; // rdi
  size_t v4; // rbp
  char *v5; // rax
  _BYTE *v6; // rbx
  _QWORD *result; // rax

  if ( src )
  {
    v2 = strlen(src);
    v3 = 118LL;
    v4 = v2 + 1;
    if ( v2 + 1 >= 0x76 )
      v3 = v2 + 1;
    v5 = (char *)malloc((v3 + 17) & 0xFFFFFFFFFFFFFFF8LL);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = 0LL;
      *((_WORD *)v5 + 4) = 1;
      memcpy(v5 + 9, src, v4);
      v6[v4 + 9] = 0;
    }
    return v6;
  }
  result = malloc(0x80uLL);
  v6 = result;
  if ( !result )
    return v6;
  *result = 0LL;
  *((_WORD *)result + 4) = 0;
  return result;
}

__int64 __fastcall sub_407670(__int64 *a1, unsigned __int64 a2)
{
  const char *v2; // r12
  __int64 *v3; // rbp
  __int64 result; // rax
  char *v5; // rbx
  __int64 v6; // r14
  __int64 *v7; // rax
  size_t v8; // r15
  char *v9; // rax
  _QWORD *v10; // rax

  v2 = *(const char **)(a2 + 48);
  if ( !v2 )
    return 1LL;
  v3 = a1;
  if ( a2 > (unsigned __int64)v2 || (result = 1LL, (unsigned __int64)v2 >= a2 + 56) )
  {
    v5 = (char *)a1 + 9;
    if ( !*v2 )
    {
      v5 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
      goto LABEL_12;
    }
LABEL_5:
    if ( !strcmp(v5, v2) )
      goto LABEL_12;
    while ( 1 )
    {
      if ( !*v5 )
      {
        v6 = (__int64)v3 + 9;
        if ( (char *)v3 + 9 != v5 )
        {
          v8 = strlen(v2) + 1;
          v9 = &v5[-v6];
          if ( ~(unsigned __int64)&v5[-v6] < v8 )
          {
            *__errno_location() = 12;
            return 0LL;
          }
LABEL_19:
          if ( (unsigned __int64)&v9[v8] <= 0x76 )
          {
            memcpy(v5, v2, v8);
            v5[v8] = 0;
            goto LABEL_12;
          }
          v10 = sub_4075E0(v2);
          *v3 = (__int64)v10;
          if ( !v10 )
            return 0LL;
          *((_BYTE *)v10 + 8) = 0;
          v5 = (char *)v10 + 9;
LABEL_12:
          *(_QWORD *)(a2 + 48) = v5;
          return 1LL;
        }
        if ( !*((_BYTE *)v3 + 8) )
        {
          v8 = strlen(v2) + 1;
          v9 = 0LL;
          goto LABEL_19;
        }
      }
      v5 += strlen(v5) + 1;
      if ( *v5 )
        goto LABEL_5;
      v7 = (__int64 *)*v3;
      if ( !*v3 )
        goto LABEL_5;
      v5 = (char *)v7 + 9;
      v3 = (__int64 *)*v3;
      if ( !strcmp((const char *)v7 + 9, v2) )
        goto LABEL_12;
    }
  }
  return result;
}

__int64 __fastcall sub_4077F0(__int64 a1)
{
  char *v1; // rax
  const char *v2; // rbp
  _QWORD *v3; // rbx
  int *v5; // rbp
  int v6; // r12d

  v1 = getenv("TZ");
  v2 = v1;
  if ( v1 )
  {
    if ( *(_BYTE *)(a1 + 8) && !strcmp((const char *)(a1 + 9), v1) )
      return 1LL;
  }
  else if ( !*(_BYTE *)(a1 + 8) )
  {
    return 1LL;
  }
  v3 = sub_4075E0(v2);
  if ( !v3 || (unsigned __int8)sub_407510(a1) )
    return (__int64)v3;
  v5 = __errno_location();
  v6 = *v5;
  if ( v3 != (_QWORD *)1 )
    sub_407560(v3);
  *v5 = v6;
  return 0LL;
}

struct tm *__fastcall sub_4078C0(__int64 *a1, const time_t *a2, struct tm *a3)
{
  _QWORD *v4; // r13

  if ( !a1 )
    return gmtime_r(a2, a3);
  v4 = (_QWORD *)sub_4077F0((__int64)a1);
  if ( v4 )
  {
    if ( localtime_r(a2, a3) && (unsigned __int8)sub_407670(a1, (unsigned __int64)a3) )
    {
      if ( v4 == (_QWORD *)1 || (unsigned __int8)sub_407590(v4) )
        return a3;
    }
    else if ( v4 != (_QWORD *)1 )
    {
      sub_407590(v4);
    }
  }
  return 0LL;
}

time_t __fastcall sub_407970(__int64 *a1, _DWORD *a2)
{
  _QWORD *v2; // r12
  int v4; // eax
  time_t timer; // [rsp+8h] [rbp-60h] BYREF
  struct tm tp; // [rsp+10h] [rbp-58h] BYREF

  if ( !a1 )
    return sub_407A90(a2);
  v2 = (_QWORD *)sub_4077F0((__int64)a1);
  if ( !v2 )
    return -1LL;
  timer = sub_4088C0(a2);
  if ( timer != -1
    || localtime_r(&timer, &tp)
    && ((v4 = a2[8], (v4 == 0) == (tp.tm_isdst == 0)) || v4 < 0 || tp.tm_isdst < 0)
    && !(tp.tm_sec ^ *a2 | tp.tm_min ^ a2[1] | tp.tm_hour ^ a2[2] | tp.tm_mday ^ a2[3] | tp.tm_year ^ a2[5] | tp.tm_mon ^ a2[4]) )
  {
    if ( !(unsigned __int8)sub_407670(a1, (unsigned __int64)a2) )
      timer = -1LL;
  }
  if ( v2 == (_QWORD *)1 || (unsigned __int8)sub_407590(v2) )
    return timer;
  else
    return -1LL;
}

__int64 __fastcall sub_407A90(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 0;
  return sub_408480(a1, gmtime_r, &unk_60C498);
}

__int64 __fastcall sub_407AB0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_4080E0(stream);
  if ( v2 )
  {
    if ( !(_DWORD)result )
    {
      *__errno_location() = 0;
      return 0xFFFFFFFFLL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( !(_DWORD)result )
    return result;
  if ( v1 )
    return 0xFFFFFFFFLL;
  return (unsigned int)-(*__errno_location() != 9);
}

bool __fastcall sub_407B10(int a1)
{
  char *v1; // rdx
  bool result; // al

  v1 = setlocale(a1, 0LL);
  result = 1;
  if ( v1 )
  {
    result = 0;
    if ( strcmp(v1, "C") )
      return strcmp(v1, "POSIX") != 0;
  }
  return result;
}

const char *sub_407B70()
{
  char *v0; // rax
  char *v1; // r15
  const char *v2; // rbx
  char v3; // bp
  const char *v4; // rbp
  char *v6; // rax
  const char *v7; // r13
  size_t v8; // rax
  __int64 v9; // r12
  size_t v10; // r14
  size_t v11; // rdi
  char *v12; // rax
  char *v13; // rbp
  size_t v14; // rdi
  char *v15; // rax
  int v16; // eax
  int v17; // r12d
  FILE *v18; // r13
  const char *v19; // rax
  FILE *v20; // rbx
  const char *v21; // r13
  char *IO_read_ptr; // rax
  int v23; // edi
  char *v24; // kr00_8
  int *v25; // rdx
  int v26; // esi
  unsigned int v27; // eax
  __int64 v28; // rdx
  signed __int64 v29; // rax
  char *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rsi
  unsigned int v34; // ecx
  signed __int64 v35; // rdi
  char *v36; // rsi
  unsigned int v37; // edx
  char *v38; // rcx
  FILE *v39; // rdi
  int v40; // eax
  bool v41; // dl
  char *v42; // rax
  signed __int64 v43; // rax
  unsigned __int64 v44; // r9
  char *v45; // rsi
  char *v46; // r10
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // esi
  __int64 v50; // r8
  unsigned __int64 v51; // rdi
  char *v52; // rcx
  char *v53; // r9
  unsigned int v54; // edx
  unsigned int v55; // edx
  unsigned int v56; // ecx
  __int64 v57; // rsi
  const char *v58; // rax
  char *v59; // rdi
  FILE *v60; // r13
  signed __int64 v61; // [rsp+8h] [rbp-D0h]
  __int64 v62; // [rsp+18h] [rbp-C0h]
  char v63[64]; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v64[15]; // [rsp+60h] [rbp-78h] BYREF

  v0 = nl_langinfo(14);
  v1 = s;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !s )
  {
    v6 = getenv("CHARSETALIASDIR");
    v7 = v6;
    if ( v6 && *v6 )
    {
      v8 = strlen(v6);
      v9 = v8;
      v10 = v8;
      if ( !v8 )
      {
        v11 = 14LL;
LABEL_18:
        v12 = (char *)malloc(v11);
        v13 = v12;
        if ( !v12 )
        {
LABEL_19:
          v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
LABEL_20:
          s = v1;
          goto LABEL_4;
        }
        memcpy(v12, v7, v10);
LABEL_24:
        strcpy(&v13[v9], "charset.alias");
        v16 = open(v13, 0);
        v17 = v16;
        if ( v16 >= 0 )
        {
          v1 = 0LL;
          v61 = 0LL;
          v18 = fdopen(v16, "r");
          if ( v18 )
          {
            v19 = v2;
            v20 = v18;
            v21 = v19;
LABEL_30:
            IO_read_ptr = v20->_IO_read_ptr;
            if ( IO_read_ptr < v20->_IO_read_end )
            {
LABEL_31:
              v20->_IO_read_ptr = IO_read_ptr + 1;
              v23 = (unsigned __int8)*IO_read_ptr;
              goto LABEL_32;
            }
            while ( 1 )
            {
              v23 = __uflow(v20);
              if ( v23 == -1 )
                break;
LABEL_32:
              if ( (unsigned int)(v23 - 9) <= 1 || v23 == 32 )
                goto LABEL_30;
              if ( v23 == 35 )
              {
                do
                {
                  v42 = v20->_IO_read_ptr;
                  if ( v42 < v20->_IO_read_end )
                  {
                    v20->_IO_read_ptr = v42 + 1;
                    v40 = (unsigned __int8)*v42;
                    v41 = 1;
                  }
                  else
                  {
                    v40 = __uflow(v20);
                    v41 = v40 != -1;
                  }
                }
                while ( v40 != 10 && v41 );
                if ( v40 == -1 )
                  break;
                goto LABEL_30;
              }
              ungetc(v23, v20);
              if ( fscanf(v20, "%50s %50s", v63, v64) <= 1 )
                break;
              v24 = &v63[strlen(v63)];
              v25 = (int *)v64;
              do
              {
                v26 = *v25++;
                v27 = ~v26 & (v26 - 16843009) & 0x80808080;
              }
              while ( !v27 );
              if ( (~v26 & (v26 - 16843009) & 0x8080) == 0 )
              {
                v27 >>= 16;
                v25 = (int *)((char *)v25 + 2);
              }
              v28 = (char *)v25 - __CFADD__((_BYTE)v27, (_BYTE)v27) - 3 - (char *)v64;
              v29 = v24 - v63 + v28;
              v62 = v28;
              if ( v61 )
              {
                v43 = v61 + v29;
                v61 = v43 + 2;
                v30 = (char *)realloc(v1, v43 + 3);
                v32 = v62;
                v31 = v24 - v63;
              }
              else
              {
                v61 = v29 + 2;
                v30 = (char *)malloc(v29 + 3);
                v31 = v24 - v63;
                v32 = v62;
              }
              if ( !v30 )
              {
                v58 = v21;
                v59 = v1;
                v60 = v20;
                v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
                v2 = v58;
                free(v59);
                sub_4080E0(v60);
                goto LABEL_26;
              }
              v33 = -2 - v31;
              v34 = v31 + 1;
              v35 = v61 - v32;
              v36 = &v30[v61 - v32 + v33];
              if ( v34 >= 8 )
              {
                *(_QWORD *)v36 = *(_QWORD *)v63;
                *(_QWORD *)&v36[v34 - 8] = *(_QWORD *)&v63[v34 - 8];
                v44 = (unsigned __int64)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v45 = &v36[-v44];
                v46 = (char *)(v63 - v45);
                v47 = ((_DWORD)v45 + v34) & 0xFFFFFFF8;
                if ( v47 >= 8 )
                {
                  v48 = v47 & 0xFFFFFFF8;
                  v49 = 0;
                  do
                  {
                    v50 = v49;
                    v49 += 8;
                    *(_QWORD *)(v44 + v50) = *(_QWORD *)&v46[v50];
                  }
                  while ( v49 < v48 );
                }
              }
              else if ( (v34 & 4) != 0 )
              {
                *(_DWORD *)v36 = *(_DWORD *)v63;
                *(_DWORD *)&v36[v34 - 4] = *(_DWORD *)&v63[v34 - 4];
              }
              else if ( v34 )
              {
                *v36 = v63[0];
                if ( (v34 & 2) != 0 )
                  *(_WORD *)&v36[v34 - 2] = *(_WORD *)&v63[v34 - 2];
              }
              v37 = v32 + 1;
              v38 = &v30[v35 - 1];
              if ( v37 >= 8 )
              {
                *(_QWORD *)v38 = v64[0];
                *(_QWORD *)&v38[v37 - 8] = *(_QWORD *)&v63[v37 + 56];
                v51 = (unsigned __int64)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v52 = &v38[-v51];
                v53 = (char *)((char *)v64 - v52);
                v54 = ((_DWORD)v52 + v37) & 0xFFFFFFF8;
                if ( v54 >= 8 )
                {
                  v55 = v54 & 0xFFFFFFF8;
                  v56 = 0;
                  do
                  {
                    v57 = v56;
                    v56 += 8;
                    *(_QWORD *)(v51 + v57) = *(_QWORD *)&v53[v57];
                  }
                  while ( v56 < v55 );
                }
              }
              else if ( (v37 & 4) != 0 )
              {
                *(_DWORD *)v38 = v64[0];
                *(_DWORD *)&v38[v37 - 4] = *(_DWORD *)&v63[v37 + 60];
              }
              else if ( v37 )
              {
                *v38 = v64[0];
                if ( (v37 & 2) != 0 )
                  *(_WORD *)&v38[v37 - 2] = *(_WORD *)&v63[v37 + 62];
              }
              v1 = v30;
              IO_read_ptr = v20->_IO_read_ptr;
              if ( IO_read_ptr < v20->_IO_read_end )
                goto LABEL_31;
            }
            v39 = v20;
            v2 = v21;
            sub_4080E0(v39);
            if ( !v61 )
              goto LABEL_25;
            v1[v61] = 0;
            goto LABEL_26;
          }
          close(v17);
        }
LABEL_25:
        v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
LABEL_26:
        free(v13);
        goto LABEL_20;
      }
      if ( v7[v8 - 1] == 47 )
      {
        v11 = v8 + 14;
        goto LABEL_18;
      }
      v14 = v8 + 15;
      v9 = v8 + 1;
    }
    else
    {
      v14 = 115LL;
      v9 = 101LL;
      v10 = 100LL;
      v7 = "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
    }
    v15 = (char *)malloc(v14);
    v13 = v15;
    if ( !v15 )
      goto LABEL_19;
    memcpy(v15, v7, v10);
    v13[v10] = 47;
    goto LABEL_24;
  }
LABEL_4:
  v3 = *v1;
  if ( *v1 )
  {
    while ( strcmp(v2, v1) && (v3 != 42 || v1[1]) )
    {
      v4 = &v1[strlen(v1) + 1];
      v1 = (char *)&v4[strlen(v4) + 1];
      v3 = *v1;
      if ( !*v1 )
        goto LABEL_11;
    }
    v2 = &v1[strlen(v1) + 1];
  }
LABEL_11:
  if ( !*v2 )
    return "ASCII";
  return v2;
}

int __fastcall sub_4080E0(FILE *stream)
{
  int *v1; // rax
  int v2; // r12d
  int *v3; // rbp
  int result; // eax
  int v5; // eax

  if ( fileno(stream) < 0 )
    return fclose(stream);
  if ( __freading(stream) )
  {
    v5 = fileno(stream);
    if ( lseek(v5, 0LL, 1) == -1 )
      return fclose(stream);
  }
  if ( !(unsigned int)sub_408160(stream) )
    return fclose(stream);
  v1 = __errno_location();
  v2 = *v1;
  v3 = v1;
  result = fclose(stream);
  if ( v2 )
  {
    *v3 = v2;
    return -1;
  }
  return result;
}

int __fastcall sub_408160(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_4081A0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_4081A0(FILE *a1, __off_t a2, int a3)
{
  __off_t v3; // rax
  int v5; // eax

  if ( a1->_IO_read_end == a1->_IO_read_ptr && a1->_IO_write_ptr == a1->_IO_write_base && !a1->_IO_save_base )
  {
    v5 = fileno(a1);
    v3 = lseek(v5, a2, a3);
    if ( v3 != -1 )
    {
      a1->_flags &= ~0x10u;
      a1->_offset = v3;
      LODWORD(v3) = 0;
    }
  }
  else
  {
    LODWORD(v3) = fseeko(a1, a2, a3);
  }
  return v3;
}

__int64 __fastcall sub_408200(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r10d
  int v11; // r12d

  v10 = (a1 >> 2) + 475 - ((a1 & 3) == 0);
  v11 = (__PAIR64__((a6 >> 2) + 475, a6 & 3) - 1) >> 32;
  return a5
       + 60
       * (a4
        + 60
        * (a3
         + 24
         * ((int)(v10
                - v11
                - (v10 / 25
                 - ((unsigned int)(v10 % 25) >> 31)
                 - (v11 / 25
                  - ((unsigned int)(v11 % 25) >> 31)))
                + ((int)(v10 / 25 - ((unsigned int)(v10 % 25) >> 31)) >> 2)
                - ((int)(v11 / 25 - ((unsigned int)(v11 % 25) >> 31)) >> 2))
          + 365 * (a1 - a6)
          + a2
          - a7)
         - a8)
        - a9)
       - a10;
}

unsigned __int64 __fastcall sub_408320(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6, int *a7)
{
  __int64 v8; // rax
  bool v9; // of
  unsigned __int64 result; // rax

  if ( !a7
    || (v8 = sub_408200(a1, a2, a3, a4, a5, a7[5], a7[7], a7[2], a7[1], *a7),
        v9 = __OFADD__(a6, v8),
        result = a6 + v8,
        v9) )
  {
    if ( a6 < 0 )
    {
      if ( a6 >= (__int64)0x8000000000000002LL )
        return 0x8000000000000000LL;
      else
        return a6 + 1;
    }
    else
    {
      result = 0x7FFFFFFFFFFFFFFFLL;
      if ( a6 > 0x7FFFFFFFFFFFFFFDLL )
        return a6 - 1;
    }
  }
  return result;
}

__int64 __fastcall sub_4083C0(__int64 (__fastcall *a1)(__int64 *, __int64), __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v9[0] = *a2;
  result = a1(v9, a3);
  if ( !result )
  {
    v5 = *a2;
    v6 = 0LL;
    if ( *a2 )
    {
      while ( 1 )
      {
        v7 = (v6 >> 1) + (v5 >> 1);
        v8 = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        if ( v6 != v8 && v5 != v8 )
          break;
        v9[0] = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        result = a1(v9, a3);
        if ( !result )
        {
          v5 = v8;
          v8 = v6;
        }
        v6 = v8;
      }
      if ( !result && v6 )
      {
        v9[0] = v6;
        return a1(v9, a3);
      }
    }
  }
  return result;
}

unsigned __int64 __fastcall sub_408480(int *a1, __int64 (__fastcall *a2)(__int64 *, __int64), _QWORD *a3)
{
  __int64 v4; // rsi
  int v5; // eax
  int v6; // edi
  _BOOL4 v7; // edx
  __int64 v8; // rbx
  int v9; // r12d
  int v10; // ebp
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // r13
  _BOOL4 v14; // r12d
  __int64 v15; // r14
  int *v16; // rax
  __int64 v17; // r15
  unsigned __int64 result; // rax
  bool v19; // dl
  __m128i *v20; // r14
  __int32 v21; // esi
  __int64 v22; // rdx
  bool v23; // of
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __int64 v27; // rdx
  int i; // r13d
  int v29; // r12d
  int v30; // r15d
  int v31; // [rsp+Ch] [rbp-10Ch]
  int v33; // [rsp+18h] [rbp-100h]
  int v34; // [rsp+1Ch] [rbp-FCh]
  int v35; // [rsp+28h] [rbp-F0h]
  __int64 v37; // [rsp+38h] [rbp-E0h]
  int v38; // [rsp+40h] [rbp-D8h]
  int v39; // [rsp+44h] [rbp-D4h]
  int *v40; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v41; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-C0h] BYREF
  __m128i v43; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v44; // [rsp+70h] [rbp-A8h] BYREF
  __m128i v45; // [rsp+80h] [rbp-98h] BYREF
  __int64 v46; // [rsp+90h] [rbp-88h]
  __int64 v47[4]; // [rsp+A0h] [rbp-78h] BYREF
  int v48; // [rsp+C0h] [rbp-58h]

  v4 = a1[3];
  v38 = *a1;
  v31 = a1[1];
  v5 = a1[2];
  v6 = a1[4];
  v33 = v5;
  v35 = a1[8];
  v7 = 0;
  v8 = a1[5] + (__int64)(int)(v6 / 12 - ((unsigned int)(v6 % 12) >> 31));
  if ( (v8 & 3) == 0 )
  {
    v7 = 1;
    if ( v8 == 100 * (v8 / 100) )
      v7 = ((v8 / 100) & 3) == 1;
  }
  v9 = 59;
  v10 = 6;
  v11 = (unsigned __int16)word_40A640[13 * v7 + (((v6 % 12) >> 31) & 0xC) + v6 % 12] - 1 + v4;
  if ( v38 <= 59 )
    v9 = v38;
  v12 = 0;
  if ( v9 >= 0 )
    v12 = v9;
  v34 = v12;
  v39 = -(int)*a3;
  v13 = sub_408200(v8, v11, v33, v31, v12, 70, 0, 0, 0, v39);
  v37 = v13;
  v41 = v13;
  v40 = a1;
  v14 = 0;
  v15 = v13;
  while ( 1 )
  {
    v16 = (int *)sub_4083C0(a2, (__int64 *)&v41, (__int64)&v43);
    v17 = v41;
    result = sub_408320(v8, v11, v33, v31, v34, v41, v16);
    if ( v17 == result )
      break;
    if ( v17 == v13 && v17 != v15 )
    {
      if ( v45.m128i_i32[0] < 0 )
        goto LABEL_17;
      v19 = v45.m128i_i32[0] != 0;
      if ( v35 < 0 )
      {
        if ( (unsigned __int8)v19 >= v14 )
        {
LABEL_17:
          v20 = (__m128i *)v40;
          result = v17;
          goto LABEL_18;
        }
      }
      else if ( (v35 != 0) != v19 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v10 )
      return -1LL;
    v41 = result;
    v13 = v15;
    v15 = v17;
    v14 = v45.m128i_i32[0] != 0;
  }
  v20 = (__m128i *)v40;
  if ( (v35 == 0) != (v45.m128i_i32[0] == 0) && v35 >= 0 && v45.m128i_i32[0] >= 0 )
  {
    for ( i = 601200; i != 269337600; i += 601200 )
    {
      v29 = 2;
      v30 = -i;
      v42 = result + -i;
      if ( !__OFADD__(result, -i) )
      {
LABEL_34:
        sub_4083C0(a2, &v42, (__int64)v47);
        if ( (v35 == 0) == (v48 == 0) || v48 < 0 )
        {
          v41 = sub_408320(v8, v11, v33, v31, v34, v42, (int *)v47);
          sub_4083C0(a2, (__int64 *)&v41, (__int64)&v43);
          result = v41;
          break;
        }
        result = v41;
      }
      while ( 1 )
      {
        v30 += 2 * i;
        if ( v29 == 1 )
          break;
        v29 = 1;
        v42 = result + v30;
        if ( !__OFADD__(result, v30) )
          goto LABEL_34;
      }
    }
  }
LABEL_18:
  v21 = v43.m128i_i32[0];
  *a3 = result - (v37 + v39);
  if ( v21 == v38 )
    goto LABEL_22;
  v22 = ((v38 <= 0) & (unsigned __int8)(v21 == 60)) - (__int64)v34 + v38;
  v23 = __OFADD__(v22, result);
  v24 = v22 + result;
  v41 = v24;
  if ( !v23 )
  {
    v47[0] = v24;
    if ( a2(v47, (__int64)&v43) )
    {
      result = v41;
LABEL_22:
      v25 = _mm_load_si128(&v44);
      v26 = _mm_load_si128(&v45);
      v27 = v46;
      *v20 = _mm_load_si128(&v43);
      v20[1] = v25;
      v20[2] = v26;
      v20[3].m128i_i64[0] = v27;
      return result;
    }
  }
  return -1LL;
}

unsigned __int64 __fastcall sub_4088C0(int *a1)
{
  tzset();
  return sub_408480(a1, (__int64 (__fastcall *)(__int64 *, __int64))localtime_r, &qword_60C4A8);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_408950(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_60C248 )
    v1 = (void *)qword_60C248;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_408968(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_60BE30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
