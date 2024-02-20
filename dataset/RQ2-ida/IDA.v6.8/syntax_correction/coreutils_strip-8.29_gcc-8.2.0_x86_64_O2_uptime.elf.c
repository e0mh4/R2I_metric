#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  __int64 v4; // rax@7
  __int64 v5; // rbx@7
  char *v6; // rax@7

  sub_404040(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_408950(
    sub_402490,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  sub_403F30(a1);
  if ( sub_407200(a1, a2, "", &unk_408E80, 0LL) != -1 )
LABEL_8:
    sub_402130(1);
  if ( a1 == dword_60C2BC )
  {
    sub_401DB0("/var/run/utmp", 1LL);
    return 0LL;
  }
  if ( a1 - dword_60C2BC != 1 )
  {
    LODWORD(v4) = sub_405C60(a2[dword_60C2BC + 1]);
    v5 = v4;
    v6 = dcgettext(0LL, "extra operand %s", 5);
    error(0, 0, v6, v5);
    goto LABEL_8;
  }
  sub_401DB0(a2[dword_60C2BC], 0LL);
  return 0LL;
}

int sub_401CFB()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_401D1A()
{
  return 0;
}

int sub_401D51()
{
  int result; // eax@4

  if ( !byte_60C2E8 )
  {
    while ( qword_60C2F0 < (unsigned __int64)(((&unk_60BE48 - (_UNKNOWN *)&qword_60BE40) >> 3) - 1) )
      (*(&qword_60BE40 + ++qword_60C2F0))();
    result = sub_401CFB();
    byte_60C2E8 = 1;
  }
  return result;
}

int sub_401DA8()
{
  return sub_401D1A();
}

int __fastcall sub_401DB0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax@2
  __int64 v3; // rdx@2
  __int64 v4; // rbx@3
  unsigned __int64 v5; // rbp@3
  __int16 v6; // cx@7
  time_t v7; // rax@10
  signed __int64 v8; // r13@11
  struct tm *v9; // r15@11
  char *v10; // rax@12
  char *v11; // rax@15
  char *v12; // rax@16
  char *v13; // rax@16
  signed int v14; // ebx@16
  char *v15; // rax@18
  char *v16; // rax@22
  _IO_FILE *v17; // rdi@25
  char *v18; // rax@27
  char *v19; // rax@28
  char *v20; // rbx@30
  int *v21; // rax@30
  __int64 v22; // rax@32
  __int64 v23; // rbx@32
  int *v24; // rax@32
  __int64 v26; // [sp+18h] [bp-70h]@1
  __int64 v27; // [sp+20h] [bp-68h]@1
  time_t timer; // [sp+28h] [bp-60h]@10
  double loadavg; // [sp+30h] [bp-58h]@16

  v27 = 0LL;
  if ( sub_407360(a1, &v26, &v27, a2) )
  {
    LODWORD(v22) = sub_405AE0(0LL, 3LL, a1);
    v23 = v22;
    v24 = __errno_location();
    error(1, *v24, "%s", v23);
    sub_402130(1);
  }
  v2 = v27;
  v3 = v26 - 1;
  if ( !v26 )
  {
    timer = time(0LL);
LABEL_30:
    v20 = dcgettext(0LL, "couldn't get boot time", 5);
    v21 = __errno_location();
    v17 = (_IO_FILE *)1;
    error(1, *v21, v20);
    goto LABEL_31;
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
      v4 = *(_DWORD *)(v2 + 340);
    --v3;
    v2 += 384LL;
  }
  while ( v3 != -1 );
LABEL_10:
  v7 = time(0LL);
  timer = v7;
  if ( !v4 )
    goto LABEL_30;
  v8 = v7 - v4;
  v9 = localtime(&timer);
  if ( v9 )
  {
    v10 = dcgettext(0LL, " %H:%M:%S  ", 5);
    sub_403F10(stdout, v10, v9, 0LL, 0LL);
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
  else if ( v8 > 86399 )
  {
    v16 = dcngettext(
            0LL,
            "up %ld day %2d:%02d,  ",
            "up %ld days %2d:%02d,  ",
            ((signed __int64)((unsigned __int128)(1749024623285053783LL * v8) >> 64) >> 13) - (v8 >> 63),
            5);
    __printf_chk(1LL, v16);
  }
  else
  {
    v11 = dcgettext(0LL, "up  %2d:%02d,  ", 5);
    __printf_chk(1LL, v11);
  }
  v12 = dcngettext(0LL, "%lu user", "%lu users", v5, 5);
  __printf_chk(1LL, v12);
  LODWORD(v13) = getloadavg(&loadavg, 3);
  v14 = (signed int)v13;
  if ( (_DWORD)v13 == -1 )
  {
LABEL_25:
    v17 = stdout;
    v13 = stdout->_IO_write_ptr;
    if ( v13 < stdout->_IO_write_end )
    {
      stdout->_IO_write_ptr = v13 + 1;
      *v13 = 10;
      return (unsigned __int64)v13;
    }
LABEL_31:
    LODWORD(v13) = __overflow(v17, 10);
    return (unsigned __int64)v13;
  }
  if ( (signed int)v13 > 0 )
  {
    v15 = dcgettext(0LL, ",  load average: %f", 5);
    LODWORD(v13) = __printf_chk(1LL, v15);
  }
  if ( v14 > 1 )
  {
    __printf_chk(1LL, ", %f");
    if ( v14 != 2 )
      __printf_chk(1LL, ", %f");
    goto LABEL_25;
  }
  if ( v14 == 1 )
    goto LABEL_25;
  return (unsigned __int64)v13;
}

noreturn void __fastcall  sub_402130(int status)
{
  int v1; // ebx@1
  __int64 v2; // rbp@1
  char *v3; // rax@2
  char *v4; // rax@4
  char *v5; // rax@4
  char *v6; // rax@4
  char *v7; // rax@4
  FILE *v8; // rbp@4
  char *v9; // rax@4
  FILE *v10; // rbp@4
  char *v11; // rax@4
  __int64 *v12; // rax@4
  _BYTE *v13; // rdi@5
  bool v14; // cf@5
  bool v15; // zf@5
  const char *v16; // rsi@6
  signed __int64 v17; // rcx@6
  char *v18; // rax@11
  char *v19; // rax@11
  char *v20; // rax@13
  char *v21; // rax@14
  char *v22; // rax@15
  char *v23; // rax@15
  char *v24; // rax@17
  char *v25; // rax@18
  const char *v26; // [sp+0h] [bp-88h]@4
  const char *v27; // [sp+8h] [bp-80h]@4
  const char *v28; // [sp+10h] [bp-78h]@4
  const char *v29; // [sp+18h] [bp-70h]@4
  const char *v30; // [sp+20h] [bp-68h]@4
  const char *v31; // [sp+28h] [bp-60h]@4
  const char *v32; // [sp+30h] [bp-58h]@4
  const char *v33; // [sp+38h] [bp-50h]@4
  const char *v34; // [sp+40h] [bp-48h]@4
  const char *v35; // [sp+48h] [bp-40h]@4
  const char *v36; // [sp+50h] [bp-38h]@4
  const char *v37; // [sp+58h] [bp-30h]@4
  __int64 v38; // [sp+60h] [bp-28h]@4
  __int64 v39; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_60C308;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]\n", 5);
  __printf_chk(1LL, v4);
  v5 = dcgettext(
         0LL,
         "Print the current time, the length of time the system has been up,\n"
         "the number of users on the system, and the average number of jobs\n"
         "in the run queue over the last 1, 5 and 15 minutes.",
         5);
  __printf_chk(1LL, v5);
  v6 = dcgettext(0LL, "  Processes in\nan uninterruptible sleep state also contribute to the load average.\n", 5);
  __printf_chk(1LL, v6);
  v7 = dcgettext(0LL, "If FILE is not specified, use %s.  %s as FILE is common.\n\n", 5);
  __printf_chk(1LL, v7);
  v8 = stdout;
  v9 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v11, v10);
  v26 = "[";
  v12 = (__int64 *)&v26;
  v27 = "test invocation";
  v28 = "coreutils";
  v29 = "Multi-call invocation";
  v30 = "sha224sum";
  v31 = "sha2 utilities";
  v32 = "sha256sum";
  v33 = "sha2 utilities";
  v34 = "sha384sum";
  v35 = "sha2 utilities";
  v36 = "sha512sum";
  v37 = "sha2 utilities";
  v38 = 0LL;
  v39 = 0LL;
  do
  {
    v12 += 2;
    v13 = (_BYTE *)*v12;
    v14 = 0;
    v15 = *v12 == 0;
    if ( !*v12 )
      break;
    v16 = "uptime";
    v17 = 7LL;
    do
    {
      if ( !v17 )
        break;
      v14 = (const unsigned __int8)*v16 < *v13;
      v15 = *v16++ == *v13++;
      --v17;
    }
    while ( v15 );
  }
  while ( (!v14 && !v15) != v14 );
  if ( v12[1] )
  {
    v18 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v18);
    v19 = setlocale(5, 0LL);
    if ( !v19 || !strncmp(v19, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v22 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v22);
    v23 = setlocale(5, 0LL);
    if ( !v23 || !strncmp(v23, "en_", 3uLL) )
    {
      v24 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v24);
      goto LABEL_14;
    }
  }
  v25 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v25);
LABEL_13:
  v20 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v20);
LABEL_14:
  v21 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v21);
LABEL_3:
  exit(v1);
}

__int64 sub_402490()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

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
        LODWORD(v5) = sub_405AB0(qword_60C300, "write error");
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

void __fastcall sub_402530(FILE *stream, _BYTE *a2, __int64 a3)
{
  _BYTE *v3; // rbx@2
  _BYTE *v4; // rbp@2
  const __int32_t **v5; // r13@2
  __int64 v6; // rcx@3

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

void __fastcall sub_402590(FILE *stream, _BYTE *a2, __int64 a3)
{
  _BYTE *v3; // rbx@2
  _BYTE *v4; // rbp@2
  const __int32_t **v5; // r13@2
  __int64 v6; // rcx@3

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

unsigned __int64 __usercall sub_4025F0(FILE *stream, __int64 a2, char a3, _BYTE *a4, __int64 a5, int a6)
{
  FILE *v6; // r14@1
  signed __int64 v7; // rbx@1
  char *v8; // r13@1
  signed int v9; // ebp@1
  int v10; // edi@5
  unsigned __int64 v11; // r12@5
  _BYTE *v12; // rbp@11
  char v14; // bp@20
  signed int v15; // er11@20
  signed int v16; // eax@21
  char v17; // cl@21
  int v18; // edi@21
  bool v19; // zf@21
  bool v20; // sf@21
  unsigned __int8 v21; // of@21
  int v22; // er10@27
  signed int v23; // er15@29
  int v24; // edx@37
  int v25; // esi@38
  char v26; // al@46
  char *v27; // rax@49
  size_t v28; // rax@50
  int v29; // er10@51
  unsigned __int64 v30; // rbx@51
  unsigned __int64 v31; // rax@51
  unsigned __int64 v32; // rsi@53
  unsigned __int64 v33; // r15@59
  __int64 v34; // r13@60
  signed int v35; // er9@71
  int v36; // esi@71
  int v37; // edi@72
  char v38; // bp@72
  unsigned int v39; // er8@72
  int v40; // esi@80
  int v41; // edx@80
  unsigned __int64 v42; // rax@82
  unsigned __int64 v43; // rdx@82
  unsigned __int64 v44; // rbp@84
  unsigned __int64 v45; // r13@89
  __int64 v46; // r15@90
  __int64 v47; // r15@101
  signed __int64 v48; // r13@101
  char v49; // cl@106
  _BYTE *v50; // r15@106
  unsigned __int64 v51; // rax@107
  unsigned __int64 v52; // rdx@109
  signed __int64 v53; // r13@110
  unsigned __int64 v54; // r13@112
  __int64 v55; // rbp@118
  unsigned __int64 v56; // rbx@118
  unsigned __int64 v57; // rsi@125
  __int64 v58; // r15@131
  signed __int64 v59; // rbp@131
  signed int v60; // edi@141
  int v61; // edx@141
  signed int v62; // esi@147
  char *v63; // rcx@150
  char *v64; // r13@151
  signed __int64 v65; // rax@152
  char *v66; // r15@162
  unsigned __int64 v67; // rax@162
  unsigned __int64 v68; // rdx@165
  unsigned __int64 v69; // rcx@165
  __int64 v70; // rbp@174
  signed int v71; // ST70_4@178
  unsigned __int64 v72; // rdx@181
  char v73; // dl@188
  size_t v74; // rax@190
  __int64 v75; // r10@190
  size_t v76; // r13@190
  size_t v77; // rax@190
  unsigned __int64 v78; // rdx@192
  signed int v79; // er11@196
  __int64 v80; // rbp@199
  char v81; // al@207
  signed __int64 v82; // rax@210
  int v83; // ebp@211
  unsigned __int64 v84; // rsi@214
  signed __int64 i; // r13@217
  __int64 v86; // rsi@219
  int v87; // eax@222
  int v88; // esi@222
  signed int v89; // ST58_4@227
  __m128i v90; // xmm4@227
  __m128i v91; // xmm2@227
  __int64 v92; // rax@227
  signed __int64 v93; // rax@227
  signed __int64 v94; // rsi@227
  signed __int64 v95; // rcx@227
  signed __int64 v96; // rdx@228
  signed __int64 v97; // rax@228
  char v98; // al@228
  char v99; // dl@228
  signed int v100; // er9@231
  unsigned __int64 v101; // rsi@239
  __int64 v102; // rbp@247
  __int64 v103; // rbx@247
  int v104; // eax@254
  int v105; // eax@255
  signed int v106; // ebp@261
  int v107; // esi@261
  int v108; // er13@261
  signed int v109; // er9@261
  signed int v110; // er8@261
  int v111; // eax@262
  signed int v112; // er13@265
  int v113; // er13@267
  int v114; // edi@270
  char v115; // al@275
  char v116; // dl@275
  __int64 v117; // r15@287
  signed __int64 v118; // r13@287
  signed int v119; // esi@295
  signed int v120; // esi@301
  char v121; // al@308
  signed __int64 v122; // rdx@308
  unsigned __int64 v123; // r15@318
  unsigned __int64 v124; // ST68_8@326
  int v125; // ST60_4@326
  __int64 v126; // r13@333
  unsigned __int64 v127; // rcx@336
  __int64 v128; // rbp@345
  unsigned __int64 v129; // ST78_8@349
  int v130; // ST70_4@349
  signed int v131; // ST68_4@349
  int v132; // eax@354
  unsigned __int64 v133; // rbp@357
  unsigned __int64 v134; // ST68_8@363
  int v135; // ST58_4@363
  unsigned __int64 v136; // rbp@365
  __int64 v137; // rbx@368
  __int64 v138; // rbp@369
  unsigned __int64 v139; // rbx@373
  __int64 v140; // rbp@374
  signed __int64 v141; // rax@380
  unsigned __int64 v142; // rbx@380
  signed __int64 v143; // r15@380
  __int64 v144; // r15@384
  signed int v145; // er9@387
  int v146; // edx@387
  int v147; // esi@390
  int v148; // edi@390
  int v149; // edi@392
  __int64 v150; // rbp@398
  signed __int64 v151; // rbx@398
  int v152; // eax@401
  unsigned __int64 v153; // rbp@411
  __int64 v154; // rbx@411
  __int64 v155; // rbx@415
  __int64 v156; // rbx@418
  unsigned __int64 v157; // r15@418
  __int64 v158; // r15@422
  char v159; // [sp+4h] [bp-4D4h]@20
  char v160; // [sp+4h] [bp-4D4h]@190
  struct tm *tp; // [sp+8h] [bp-4D0h]@1
  __int64 v162; // [sp+18h] [bp-4C0h]@1
  char *v163; // [sp+28h] [bp-4B0h]@6
  int v164; // [sp+30h] [bp-4A8h]@50
  unsigned __int64 v165[2]; // [sp+30h] [bp-4A8h]@55
  signed int v166[4]; // [sp+30h] [bp-4A8h]@158
  int v167; // [sp+30h] [bp-4A8h]@188
  int v168; // [sp+30h] [bp-4A8h]@222
  _BYTE *v169; // [sp+30h] [bp-4A8h]@247
  char v170; // [sp+43h] [bp-495h]@3
  int v171; // [sp+44h] [bp-494h]@6
  char v172; // [sp+48h] [bp-490h]@49
  int v173; // [sp+48h] [bp-490h]@82
  _BYTE *v174; // [sp+48h] [bp-490h]@118
  unsigned __int64 v175; // [sp+48h] [bp-490h]@162
  signed int v176; // [sp+48h] [bp-490h]@190
  size_t v177; // [sp+48h] [bp-490h]@197
  char v178; // [sp+48h] [bp-490h]@274
  char v179; // [sp+48h] [bp-490h]@317
  unsigned __int64 v180; // [sp+48h] [bp-490h]@340
  signed __int64 v181; // [sp+48h] [bp-490h]@418
  signed int v182; // [sp+50h] [bp-488h]@50
  signed int v183; // [sp+50h] [bp-488h]@82
  char v184; // [sp+50h] [bp-488h]@161
  char v185; // [sp+50h] [bp-488h]@199
  int v186; // [sp+50h] [bp-488h]@227
  int v187; // [sp+50h] [bp-488h]@398
  unsigned __int64 v188; // [sp+58h] [bp-480h]@169
  signed __int64 v189; // [sp+58h] [bp-480h]@344
  signed int v190; // [sp+58h] [bp-480h]@365
  int v191; // [sp+58h] [bp-480h]@380
  unsigned __int64 v192; // [sp+58h] [bp-480h]@398
  int v193; // [sp+58h] [bp-480h]@418
  signed __int64 v194; // [sp+60h] [bp-478h]@173
  signed int v195; // [sp+60h] [bp-478h]@346
  signed __int64 v196; // [sp+60h] [bp-478h]@398
  signed __int64 v197; // [sp+60h] [bp-478h]@418
  signed int v198; // [sp+68h] [bp-470h]@175
  int v199; // [sp+68h] [bp-470h]@346
  int v200; // [sp+68h] [bp-470h]@411
  signed __int64 v201; // [sp+68h] [bp-470h]@415
  unsigned __int64 v202; // [sp+70h] [bp-468h]@346
  signed __int64 v203; // [sp+70h] [bp-468h]@411
  char format[2]; // [sp+80h] [bp-458h]@49
  char v205; // [sp+82h] [bp-456h]@49
  char v206; // [sp+83h] [bp-455h]@76
  char v207[9]; // [sp+97h] [bp-441h]@150
  char s[16]; // [sp+A0h] [bp-438h]@50
  __m128i v209; // [sp+B0h] [bp-428h]@227
  __m128i v210; // [sp+C0h] [bp-418h]@227
  __int64 v211; // [sp+D0h] [bp-408h]@227

  v6 = stream;
  v7 = (signed __int64)a4;
  v8 = *(char **)(a2 + 48);
  v9 = *(_DWORD *)(a2 + 8);
  tp = (struct tm *)a2;
  v162 = a5;
  if ( !v8 )
    v8 = "";
  v170 = a3;
  if ( v9 <= 12 )
  {
    if ( !v9 )
      v9 = 12;
  }
  else
  {
    v9 -= 12;
  }
  v10 = *a4;
  v11 = 0LL;
  if ( !*a4 )
    return v11;
  v171 = v9;
  v163 = v8;
  while ( 2 )
  {
    if ( (_BYTE)v10 != 37 )
    {
      if ( v11 > 0xFFFFFFFFFFFFFFFDLL )
        return 0LL;
      if ( v6 )
        fputc(v10, v6);
      ++v11;
      v12 = (_BYTE *)v7;
      goto LABEL_12;
    }
    v14 = 0;
    v15 = 0;
    v159 = v170;
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 1 )
        {
          v16 = *(_BYTE *)++v7;
          v17 = *(_BYTE *)v7;
          v18 = *(_BYTE *)v7;
          v21 = __OFSUB__(*(_BYTE *)v7, 48);
          v19 = *(_BYTE *)v7 == 48;
          v20 = (char)(*(_BYTE *)v7 - 48) < 0;
          if ( *(_BYTE *)v7 != 48 )
            break;
LABEL_25:
          v15 = v16;
        }
        while ( (unsigned __int8)(v20 ^ v21) | v19 )
        {
          if ( (_BYTE)v16 != 35 )
          {
            if ( (_BYTE)v16 == 45 )
              goto LABEL_25;
            goto LABEL_27;
          }
          v16 = *(_BYTE *)++v7;
          v14 = 1;
          v17 = *(_BYTE *)v7;
          v18 = *(_BYTE *)v7;
          v21 = __OFSUB__(*(_BYTE *)v7, 48);
          v19 = *(_BYTE *)v7 == 48;
          v20 = (char)(*(_BYTE *)v7 - 48) < 0;
          if ( *(_BYTE *)v7 == 48 )
            goto LABEL_25;
        }
        if ( (_BYTE)v16 == 94 )
        {
          v159 = 1;
          continue;
        }
        break;
      }
      if ( (_BYTE)v16 == 95 )
      {
        v15 = v16;
        continue;
      }
      break;
    }
LABEL_27:
    v22 = -1;
    if ( (unsigned int)(v16 - 48) > 9 )
      goto LABEL_28;
    v22 = 0;
    while ( 1 )
    {
      v16 = *(_BYTE *)(v7 + 1);
      v17 = *(_BYTE *)(v7 + 1);
      v24 = v16 - 48;
      if ( v22 > 214748364 )
        break;
      v25 = *(_BYTE *)v7;
      if ( v22 == 214748364 && (char)v25 > 55 )
        break;
      ++v7;
      v22 = v25 + 10 * v22 - 48;
LABEL_40:
      if ( (unsigned int)v24 > 9 )
      {
        v18 = v16;
        goto LABEL_28;
      }
    }
    if ( (unsigned int)v24 <= 9 )
    {
      v16 = *(_BYTE *)(v7 + 2);
      v22 = 0x7FFFFFFF;
      v7 += 2LL;
      v17 = v16;
      v24 = v16 - 48;
      goto LABEL_40;
    }
    v18 = *(_BYTE *)(v7++ + 1);
    v22 = 0x7FFFFFFF;
LABEL_28:
    if ( v17 == 69 || (v23 = 0, v17 == 79) )
    {
      v18 = *(_BYTE *)(v7 + 1);
      v23 = v16;
      ++v7;
      v17 = v18;
    }
    switch ( v17 )
    {
      case 65:
      case 66:
      case 97:
        if ( v23 )
          goto LABEL_210;
        v26 = v159;
        if ( v14 )
          v26 = v14;
        v159 = v26;
        goto LABEL_49;
      case 88:
      case 99:
      case 120:
        if ( v23 != 79 )
          goto LABEL_67;
        goto LABEL_210;
      case 114:
LABEL_67:
        v172 = 0;
        goto LABEL_68;
      case 72:
        if ( v23 == 69 )
          goto LABEL_210;
        v35 = 2;
        v36 = tp->tm_hour;
        goto LABEL_72;
      case 73:
        if ( v23 == 69 )
          goto LABEL_210;
        v36 = v171;
        v35 = 2;
        goto LABEL_72;
      case 67:
        if ( v23 == 69 )
          goto LABEL_372;
        v35 = 2;
        v40 = tp->tm_year / 100 + 19;
        v41 = tp->tm_year % 100;
        LOBYTE(v41) = v40 > 0;
        LOBYTE(v39) = tp->tm_year < -1900;
        v36 = v40 - (v41 & ((unsigned int)(tp->tm_year % 100) >> 31));
        v37 = 0;
        v38 = 0;
        goto LABEL_73;
      case 68:
        if ( !v23 )
          goto LABEL_82;
        goto LABEL_210;
      case 116:
        LODWORD(v44) = 0;
        if ( v22 >= 0 )
          LODWORD(v44) = v22;
        v44 = (signed int)v44;
        if ( !(_DWORD)v44 )
          v44 = 1LL;
        if ( ~v11 <= v44 )
          return 0LL;
        if ( v6 )
        {
          if ( v22 > 1 )
          {
            v47 = 0LL;
            v48 = v22 - 1LL;
            if ( v15 == 48 )
            {
              do
              {
                ++v47;
                fputc(48, v6);
              }
              while ( v48 != v47 );
            }
            else
            {
              do
              {
                ++v47;
                fputc(32, v6);
              }
              while ( v48 != v47 );
            }
          }
          fputc(9, v6);
        }
        goto LABEL_93;
      case 0:
        v49 = *(_BYTE *)(v7 - 1);
        v50 = (_BYTE *)(v7 - 1);
        goto LABEL_107;
      case 37:
        LODWORD(v51) = 0;
        if ( v22 >= 0 )
          LODWORD(v51) = v22;
        v57 = 1LL;
        v52 = ~v11;
        v51 = (signed int)v51;
        if ( (_DWORD)v51 )
          v57 = v51;
        v165[0] = v57;
        if ( !v23 )
        {
          if ( v52 > v57 )
          {
            if ( v6 )
            {
              if ( v22 > 1 )
              {
                v58 = 0LL;
                v59 = v22 - 1LL;
                if ( v15 == 48 )
                {
                  do
                  {
                    ++v58;
                    fputc(48, v6);
                  }
                  while ( v59 != v58 );
                }
                else
                {
                  do
                  {
                    ++v58;
                    fputc(32, v6);
                  }
                  while ( v59 != v58 );
                }
                v18 = *(_BYTE *)v7;
              }
              fputc(v18, v6);
            }
LABEL_135:
            v11 += v165[0];
            v12 = (_BYTE *)v7;
            goto LABEL_12;
          }
          return 0LL;
        }
        v12 = (_BYTE *)v7;
        v50 = (_BYTE *)v7;
        v54 = 1LL;
        goto LABEL_113;
      case 77:
        if ( v23 == 69 )
          goto LABEL_210;
        v35 = 2;
        v36 = tp->tm_min;
        goto LABEL_72;
      case 83:
        if ( v23 == 69 )
          goto LABEL_210;
        v35 = 2;
        v36 = tp->tm_sec;
        goto LABEL_72;
      case 85:
        if ( v23 == 69 )
          goto LABEL_210;
        v60 = tp->tm_yday - tp->tm_wday + 7;
        v61 = (unsigned __int64)(-1840700269LL * v60) >> 32;
        goto LABEL_142;
      case 87:
        if ( v23 == 69 )
          goto LABEL_210;
        v60 = 7 * ((tp->tm_wday + 6) / 7) - (tp->tm_wday + 6) + tp->tm_yday + 7;
        v61 = (unsigned __int64)(-1840700269LL * v60) >> 32;
LABEL_142:
        v35 = 2;
        v36 = ((v61 + v60) >> 2) - (v60 >> 31);
        goto LABEL_72;
      case 89:
        if ( v23 == 69 )
          goto LABEL_372;
        if ( v23 == 79 )
          goto LABEL_210;
        v35 = 4;
        v62 = tp->tm_year;
        LOBYTE(v39) = v62 < -1900;
        v36 = v62 + 1900;
        v37 = 0;
        v38 = 0;
        goto LABEL_148;
      case 108:
        if ( v23 == 69 )
          goto LABEL_210;
        v36 = v171;
        goto LABEL_184;
      case 117:
        v35 = 1;
        v36 = (tp->tm_wday + 6) % 7 + 1;
        goto LABEL_72;
      case 90:
        v73 = v159;
        v167 = v22;
        if ( v14 )
          v73 = 0;
        v176 = v15;
        v160 = v73;
        v74 = strlen(v163);
        v75 = v167;
        v76 = v74;
        v77 = 0LL;
        if ( v167 >= 0 )
          v77 = v167;
        v78 = v77;
        if ( v76 >= v77 )
          v78 = v76;
        v165[0] = v78;
        if ( ~v11 <= v78 )
          return 0LL;
        if ( v6 )
        {
          v79 = v176;
          if ( v76 < v77 )
          {
            v177 = v75 - v76;
            if ( v79 == 48 )
            {
              if ( v75 != v76 )
              {
                v158 = 0LL;
                do
                {
                  ++v158;
                  fputc(48, v6);
                }
                while ( v177 != v158 );
              }
            }
            else if ( v75 != v76 )
            {
              v185 = v14;
              v80 = 0LL;
              do
              {
                ++v80;
                fputc(32, v6);
              }
              while ( v177 != v80 );
              v14 = v185;
            }
          }
          if ( v14 )
          {
            sub_402530(v6, v163, v76);
          }
          else if ( v160 )
          {
            sub_402590(v6, v163, v76);
          }
          else
          {
            fwrite(v163, v76, 1uLL, v6);
          }
        }
        goto LABEL_135;
      case 119:
        if ( v23 == 69 )
          goto LABEL_210;
        v35 = 1;
        v36 = tp->tm_wday;
        goto LABEL_72;
      case 98:
      case 104:
        v81 = v159;
        if ( v14 )
          v81 = v14;
        v159 = v81;
        if ( v23 )
          goto LABEL_210;
LABEL_49:
        v172 = 0;
        v12 = (_BYTE *)v7;
        v23 = 0;
        *(_WORD *)format = 9504;
        v27 = &v205;
        goto LABEL_50;
      default:
        goto LABEL_210;
      case 122:
        i = 0LL;
        goto LABEL_218;
      case 115:
        v186 = v22;
        v89 = v15;
        v64 = v207;
        v90 = _mm_loadu_si128((const __m128i *)&tp->tm_isdst);
        v91 = _mm_loadu_si128((const __m128i *)&tp->tm_mon);
        v92 = (__int64)tp->tm_zone;
        *(__m128i *)s = _mm_loadu_si128((const __m128i *)tp);
        v209 = v91;
        v210 = v90;
        v211 = v92;
        LODWORD(v93) = sub_407970(v162, s);
        v15 = v89;
        v22 = v186;
        v94 = v93;
        v95 = v93;
        do
        {
          v96 = ((signed __int64)((unsigned __int128)(7378697629483820647LL * v95) >> 64) >> 2) - (v95 >> 63);
          v97 = v96;
          LODWORD(v96) = v95 - 10 * v96;
          v95 = v97;
          v98 = 48 - v96;
          v99 = v96 + 48;
          if ( v94 < 0 )
            v99 = v98;
          *--v64 = v99;
        }
        while ( v95 );
        v100 = 1;
        if ( v186 > 0 )
          v100 = v186;
        v166[0] = v100;
        if ( v94 >= 0 )
          goto LABEL_234;
        goto LABEL_316;
      case 121:
        if ( v23 == 69 )
        {
LABEL_372:
          v35 = 0;
          goto LABEL_75;
        }
        v35 = 2;
        v104 = tp->tm_year % 100;
        v36 = v104;
        if ( v104 < 0 )
        {
          v105 = -v104;
          v36 += 100;
          if ( tp->tm_year <= -1901 )
            v36 = v105;
        }
LABEL_72:
        v37 = 0;
        v38 = 0;
        v39 = (unsigned int)v36 >> 31;
        goto LABEL_73;
      case 70:
        if ( !v23 )
          goto LABEL_82;
        goto LABEL_210;
      case 71:
      case 86:
      case 103:
        if ( v23 == 69 )
          goto LABEL_210;
        v106 = tp->tm_year;
        v107 = tp->tm_yday;
        v108 = tp->tm_wday;
        v109 = v106 + ((tp->tm_year >> 31) & 0x190) - 100;
        v110 = tp->tm_yday - (tp->tm_yday - v108 + 382) + 7 * ((tp->tm_yday - v108 + 382) / 7) + 3;
        if ( v110 < 0 )
        {
          v145 = v106 + ((tp->tm_year >> 31) & 0x190) - 101;
          v146 = 365;
          if ( !(v145 & 3) )
          {
            v146 = 366;
            if ( v145 == 100 * (v145 / 100) )
              v146 = 366 - ((unsigned int)(v145 % 400) >= 1);
          }
          v147 = v146 + v107;
          v148 = v147 - v108;
          v113 = -1;
          v110 = v147 - (v148 + 382) + 7 * ((v148 + 382) / 7) + 3;
        }
        else
        {
          v111 = 365;
          if ( !(v109 & 3) )
          {
            v111 = 366;
            if ( v109 == 100 * (v109 / 100) )
              v111 = (v109 == 400 * (v109 / 400)) + 365;
          }
          v112 = v107 - v111 - (v107 - v111 - v108 + 382) + 7 * ((v107 - v111 - v108 + 382) / 7) + 3;
          if ( v112 >= 0 )
            v110 = v112;
          v113 = (v112 >> 31) + 1;
        }
        if ( v17 == 71 )
        {
          v36 = v106 + v113 + 1900;
          v35 = 4;
          LOBYTE(v39) = v106 < -1900 - v113;
          v37 = 0;
          v38 = 0;
          goto LABEL_73;
        }
        if ( v17 == 103 )
        {
          v35 = 2;
          v114 = (v113 + v106 % 100) % 100;
          v36 = v114;
          if ( v114 < 0 )
          {
            v36 = v114 + 100;
            if ( v106 < -1900 - v113 )
              v36 = -v114;
          }
        }
        else
        {
          v35 = 2;
          v36 = v110 / 7 + 1;
        }
        goto LABEL_72;
      case 80:
        v178 = 1;
        goto LABEL_275;
      case 82:
      case 84:
LABEL_82:
        v173 = v22;
        v183 = v15;
        v42 = sub_4025F0(0LL, a6);
        v43 = 0LL;
        if ( v173 >= 0 )
          v43 = v173;
        v44 = v43;
        if ( v42 >= v43 )
          v44 = v42;
        if ( ~v11 <= v44 )
          return 0LL;
        if ( v6 )
        {
          if ( v42 < v43 )
          {
            v45 = v173 - v42;
            if ( v183 == 48 )
            {
              if ( v173 != v42 )
              {
                v144 = 0LL;
                do
                {
                  ++v144;
                  fputc(48, v6);
                }
                while ( v45 != v144 );
              }
            }
            else
            {
              v46 = 0LL;
              if ( v173 != v42 )
              {
                do
                {
                  ++v46;
                  fputc(32, v6);
                }
                while ( v45 != v46 );
              }
            }
          }
          sub_4025F0(v6, a6);
        }
        goto LABEL_93;
      case 110:
        LODWORD(v44) = 0;
        if ( v22 >= 0 )
          LODWORD(v44) = v22;
        v44 = (signed int)v44;
        if ( !(_DWORD)v44 )
          v44 = 1LL;
        if ( ~v11 <= v44 )
          return 0LL;
        if ( v6 )
        {
          if ( v22 > 1 )
          {
            v117 = 0LL;
            v118 = v22 - 1LL;
            if ( v15 == 48 )
            {
              do
              {
                ++v117;
                fputc(48, v6);
              }
              while ( v118 != v117 );
            }
            else
            {
              do
              {
                ++v117;
                fputc(32, v6);
              }
              while ( v118 != v117 );
            }
          }
          fputc(10, v6);
        }
LABEL_93:
        v11 += v44;
        v12 = (_BYTE *)v7;
        goto LABEL_12;
      case 113:
        v35 = 1;
        if ( v23 == 79 )
          goto LABEL_75;
        v38 = 0;
        LOBYTE(v39) = 0;
        v37 = 0;
        v36 = (11 * tp->tm_mon >> 5) + 1;
        goto LABEL_150;
      case 109:
        if ( v23 == 69 )
          goto LABEL_210;
        v35 = 2;
        v119 = tp->tm_mon;
        LOBYTE(v39) = v119 < -1;
        v36 = v119 + 1;
        v37 = 0;
        v38 = 0;
        goto LABEL_73;
      case 100:
        if ( v23 == 69 )
          goto LABEL_210;
        v35 = 2;
        v36 = tp->tm_mday;
        goto LABEL_72;
      case 101:
        if ( v23 == 69 )
          goto LABEL_210;
        v36 = tp->tm_mday;
        goto LABEL_184;
      case 106:
        if ( v23 == 69 )
          goto LABEL_210;
        v35 = 3;
        v120 = tp->tm_yday;
        LOBYTE(v39) = v120 < -1;
        v36 = v120 + 1;
        v37 = 0;
        v38 = 0;
        goto LABEL_73;
      case 107:
        if ( v23 == 69 )
          goto LABEL_210;
        v36 = tp->tm_hour;
LABEL_184:
        v35 = 2;
        if ( v15 != 48 && v15 != 45 )
          v15 = 95;
        goto LABEL_72;
      case 78:
        if ( v23 == 69 )
          goto LABEL_210;
        if ( v22 == -1 )
        {
          v36 = a6;
          v22 = 9;
          v35 = 9;
        }
        else
        {
          if ( v22 > 8 )
          {
            v36 = a6;
          }
          else
          {
            v36 = a6;
            v149 = v22;
            do
            {
              ++v149;
              v36 /= 10;
            }
            while ( v149 != 9 );
          }
          v35 = v22;
        }
        goto LABEL_72;
      case 112:
        v178 = 0;
LABEL_275:
        v115 = v178;
        v116 = v159;
        v17 = 112;
        if ( v14 )
          v115 = v14;
        v172 = v115;
        if ( v14 )
          v116 = 0;
        v159 = v116;
LABEL_68:
        *(_WORD *)format = 9504;
        if ( !v23 )
        {
          v12 = (_BYTE *)v7;
          v27 = &v205;
          goto LABEL_50;
        }
        v35 = 0;
        goto LABEL_76;
      case 58:
        v121 = *(_BYTE *)(v7 + 1);
        v122 = v7 + 1;
        for ( i = 1LL; v121 == 58; v122 = v7 + i )
          v121 = *(_BYTE *)(v7 + ++i);
        if ( v121 != 122 )
          goto LABEL_210;
        v7 = v122;
LABEL_218:
        if ( tp->tm_isdst < 0 )
        {
          v12 = (_BYTE *)v7;
          goto LABEL_12;
        }
        v86 = tp->tm_gmtoff;
        LOBYTE(v39) = 1;
        if ( (signed int)v86 >= 0 )
        {
          LOBYTE(v39) = 0;
          if ( !(_DWORD)v86 )
            LOBYTE(v39) = *v163 == 45;
        }
        v168 = (signed int)v86 / 3600;
        v87 = (signed int)v86 / 60 % 60;
        v37 = (signed int)v86 / 60 % 60;
        v88 = (signed int)v86 % 60;
        if ( i == 1 )
          goto LABEL_402;
        if ( i )
        {
          if ( i == 2 )
            goto LABEL_430;
          if ( i != 3 )
          {
            v49 = *(_BYTE *)v7;
            v50 = (_BYTE *)v7;
LABEL_107:
            LODWORD(v51) = 0;
            if ( v22 >= 0 )
              LODWORD(v51) = v22;
            v52 = ~v11;
            v51 = (signed int)v51;
            if ( v49 == 37 )
            {
              v53 = 1LL;
              v12 = v50;
              if ( v51 )
                v53 = v51;
              v165[0] = v53;
              v54 = 1LL;
            }
            else
            {
              v7 = (signed __int64)v50;
LABEL_210:
              v82 = v7 - 1;
              do
              {
                v50 = (_BYTE *)v82;
                v83 = v7 - 1 + 2 - v82--;
              }
              while ( *(_BYTE *)(v82 + 1) != 37 );
              LODWORD(v51) = 0;
              v54 = v83;
              if ( v22 >= 0 )
                LODWORD(v51) = v22;
              v52 = ~v11;
              v12 = (_BYTE *)v7;
              v51 = (signed int)v51;
              v84 = (signed int)v51;
              if ( v54 >= (signed int)v51 )
                v84 = v54;
              v165[0] = v84;
            }
LABEL_113:
            if ( v52 <= v165[0] )
              return 0LL;
            if ( !v6 )
            {
LABEL_65:
              v11 += v165[0];
              goto LABEL_12;
            }
            if ( v54 < v51 )
            {
              if ( v15 != 48 )
              {
                if ( v22 == v54 )
                  goto LABEL_121;
                v174 = v12;
                v55 = 0LL;
                v56 = v22 - v54;
                do
                {
                  ++v55;
                  fputc(32, v6);
                }
                while ( v56 != v55 );
                goto LABEL_120;
              }
              v139 = v22 - v54;
              if ( v22 != v54 )
              {
                v174 = v12;
                v140 = 0LL;
                do
                {
                  ++v140;
                  fputc(48, v6);
                }
                while ( v139 != v140 );
LABEL_120:
                v12 = v174;
                goto LABEL_121;
              }
            }
LABEL_121:
            if ( v159 )
              sub_402590(v6, v50, v54);
            else
              fwrite(v50, v54, 1uLL, v6);
            goto LABEL_65;
          }
          if ( v88 )
          {
LABEL_430:
            v38 = 1;
            v35 = 9;
            v152 = 100 * v37 + 10000 * v168;
            v37 = 20;
            v36 = v152 + v88;
          }
          else if ( v87 )
          {
LABEL_402:
            v38 = 1;
            v35 = 6;
            v36 = v37 + 100 * v168;
            v37 = 4;
          }
          else
          {
            v36 = v168;
            v38 = 1;
            v35 = 3;
          }
        }
        else
        {
          v37 = 0;
          v38 = 1;
          v35 = 5;
          v36 = v87 + 100 * v168;
        }
LABEL_73:
        if ( v23 != 79 )
        {
LABEL_148:
          if ( (_BYTE)v39 )
LABEL_149:
            v36 = -v36;
LABEL_150:
          v63 = v207;
          while ( 1 )
          {
            v64 = v63 - 1;
            if ( v37 & 1 )
            {
              v65 = (signed __int64)(v63 - 2);
              *(v63-- - 1) = 58;
              v64 = (char *)v65;
            }
            v37 >>= 1;
            *(v63 - 1) = v36 % 0xAu + 48;
            v63 = v64;
            if ( (unsigned int)v36 <= 9 && !v37 )
              break;
            v36 /= 0xAu;
          }
          if ( v35 < v22 )
            v35 = v22;
          v166[0] = v35;
          if ( (_BYTE)v39 )
          {
LABEL_316:
            v184 = 45;
            if ( v15 != 45 )
              goto LABEL_162;
            v179 = 45;
          }
          else
          {
            if ( !v38 )
            {
LABEL_234:
              v66 = (char *)(v207 - v64);
              v67 = ~v11;
              if ( v15 == 45 || (LODWORD(v175) = v166[0] - (_DWORD)v66, v166[0] - (signed int)v66 <= 0) )
              {
                LODWORD(v72) = 0;
                v12 = (_BYTE *)v7;
                if ( v22 >= 0 )
                  LODWORD(v72) = v22;
                v72 = (signed int)v72;
                goto LABEL_239;
              }
              if ( v15 != 95 )
              {
                if ( v166[0] >= v67 )
                  return 0LL;
LABEL_180:
                v12 = (_BYTE *)v7;
                v175 = (signed int)v175;
                if ( v6 )
                {
                  v190 = v15;
                  v136 = 0LL;
                  do
                  {
                    ++v136;
                    fputc(48, v6);
                  }
                  while ( v136 < v175 );
                  v12 = (_BYTE *)v7;
                  v15 = v190;
                }
                v11 += v175;
                v72 = 0LL;
                v22 = 0;
                v67 = ~v11;
                goto LABEL_239;
              }
              v184 = 0;
              goto LABEL_352;
            }
            if ( v15 != 45 )
            {
              v184 = 43;
LABEL_162:
              v66 = (char *)(v207 - v64);
              LODWORD(v175) = v166[0] - 1 - ((unsigned __int64)v207 - (_DWORD)v64);
              v67 = ~v11;
              if ( (signed int)v175 > 0 )
              {
                if ( v15 != 95 )
                {
                  if ( v166[0] >= v67 )
                    return 0LL;
                  LODWORD(v68) = 0;
                  v69 = 1LL;
                  if ( v22 >= 0 )
                    LODWORD(v68) = v22;
                  v68 = (signed int)v68;
                  if ( (_DWORD)v68 )
                    v69 = v68;
                  v188 = v69;
                  if ( v69 >= v67 )
                    return 0LL;
                  if ( v6 )
                  {
                    if ( !v166[0] && v68 > 1 )
                    {
                      v194 = v22 - 1LL;
                      if ( v15 == 48 )
                      {
                        if ( v22 != 1LL )
                        {
                          v201 = v7;
                          v155 = 0LL;
                          do
                          {
                            ++v155;
                            fputc(48, v6);
                          }
                          while ( v194 != v155 );
                          v15 = 48;
                          v7 = v201;
                        }
                      }
                      else
                      {
                        v70 = 0LL;
                        if ( v22 != 1LL )
                        {
                          v198 = v15;
                          do
                          {
                            ++v70;
                            fputc(32, v6);
                          }
                          while ( v194 != v70 );
                          v15 = v198;
                        }
                      }
                    }
                    v71 = v15;
                    fputc(v184, v6);
                    v15 = v71;
                  }
                  v11 += v188;
                  goto LABEL_180;
                }
LABEL_352:
                if ( (signed int)v175 >= v67 )
                  return 0LL;
                if ( v6 )
                {
                  v191 = v22;
                  v141 = v7;
                  v142 = 0LL;
                  v143 = v141;
                  do
                  {
                    ++v142;
                    fputc(32, v6);
                  }
                  while ( (signed int)v175 > v142 );
                  v22 = v191;
                  v7 = v143;
                }
                v11 += (signed int)v175;
                v132 = v22 - v175;
                v21 = __OFSUB__((_DWORD)v175, v22);
                v20 = (signed int)v175 - v22 < 0;
                v22 = 0;
                if ( v20 ^ v21 )
                  v22 = v132;
                v67 = ~v11;
                if ( v184 )
                {
                  v72 = v22;
                  v133 = 1LL;
                  if ( v22 )
                    v133 = v22;
                  if ( v133 >= v67 )
                    return 0LL;
                  if ( v6 )
                  {
                    if ( !v166[0] && (unsigned int)v22 > 1 )
                    {
                      v193 = v22;
                      v181 = v22 - 1LL;
                      v197 = v7;
                      v156 = 0LL;
                      v157 = v22;
                      do
                      {
                        ++v156;
                        fputc(32, v6);
                      }
                      while ( v181 != v156 );
                      v22 = v193;
                      v7 = v197;
                      v72 = v157;
                    }
                    v134 = v72;
                    v135 = v22;
                    fputc(v184, v6);
                    v22 = v135;
                    v72 = v134;
                  }
                  v11 += v133;
                  v15 = 95;
                  v12 = (_BYTE *)v7;
                  v66 = (char *)(v207 - v64);
                  v67 = ~v11;
                }
                else
                {
                  v72 = v22;
                  v12 = (_BYTE *)v7;
                  v15 = 95;
                  v66 = (char *)(v207 - v64);
                }
                goto LABEL_239;
              }
              LODWORD(v72) = 0;
              v127 = 1LL;
              if ( v22 >= 0 )
                LODWORD(v72) = v22;
              v72 = (signed int)v72;
              if ( (_DWORD)v72 )
                v127 = v72;
              v180 = v127;
              if ( v127 >= v67 )
                return 0LL;
              if ( v6 )
              {
                if ( !v166[0] && v72 > 1 )
                {
                  v189 = v22 - 1LL;
                  if ( v15 == 48 )
                  {
                    if ( v22 != 1LL )
                    {
                      v153 = v72;
                      v200 = v22;
                      v203 = v7;
                      v154 = 0LL;
                      do
                      {
                        ++v154;
                        fputc(48, v6);
                      }
                      while ( v189 != v154 );
                      v15 = 48;
                      v22 = v200;
                      v72 = v153;
                      v7 = v203;
                    }
                  }
                  else
                  {
                    v128 = 0LL;
                    if ( v22 != 1LL )
                    {
                      v195 = v15;
                      v199 = v22;
                      v202 = v72;
                      do
                      {
                        ++v128;
                        fputc(32, v6);
                      }
                      while ( v189 != v128 );
                      v15 = v195;
                      v22 = v199;
                      v72 = v202;
                    }
                  }
                }
                v129 = v72;
                v130 = v22;
                v131 = v15;
                fputc(v184, v6);
                v15 = v131;
                v22 = v130;
                v72 = v129;
              }
              v11 += v180;
              v12 = (_BYTE *)v7;
              v67 = ~v11;
LABEL_239:
              v101 = v72;
              if ( (unsigned __int64)v66 >= v72 )
                v101 = (unsigned __int64)v66;
              if ( v101 >= v67 )
                return 0LL;
              if ( !v6 )
              {
LABEL_252:
                v11 += v101;
                goto LABEL_12;
              }
              if ( !v166[0] && (unsigned __int64)v66 < v72 )
              {
                if ( v15 != 48 )
                {
                  if ( (char *)v22 == v66 )
                    goto LABEL_250;
                  v169 = v12;
                  v102 = 0LL;
                  v103 = v22 - (_QWORD)v66;
                  do
                  {
                    ++v102;
                    fputc(32, v6);
                  }
                  while ( v103 != v102 );
                  goto LABEL_249;
                }
                v137 = v22 - (_QWORD)v66;
                if ( (char *)v22 != v66 )
                {
                  v169 = v12;
                  v138 = 0LL;
                  do
                  {
                    ++v138;
                    fputc(48, v6);
                  }
                  while ( v137 != v138 );
LABEL_249:
                  v12 = v169;
                  goto LABEL_250;
                }
              }
LABEL_250:
              if ( v159 )
                sub_402590(v6, v64, (__int64)v66);
              else
                fwrite(v64, (size_t)v66, 1uLL, v6);
              goto LABEL_252;
            }
            v179 = 43;
          }
          LODWORD(v72) = 0;
          v123 = 1LL;
          if ( v22 >= 0 )
            LODWORD(v72) = v22;
          v72 = (signed int)v72;
          if ( (_DWORD)v72 )
            v123 = v72;
          if ( ~v11 <= v123 )
            return 0LL;
          if ( v6 )
          {
            if ( !v166[0] && v72 > 1 && v22 != 1LL )
            {
              v187 = v22;
              v150 = 0LL;
              v192 = v72;
              v196 = v7;
              v151 = v22 - 1LL;
              do
              {
                ++v150;
                fputc(32, v6);
              }
              while ( v151 != v150 );
              v22 = v187;
              v72 = v192;
              v7 = v196;
            }
            v124 = v72;
            v125 = v22;
            fputc(v179, v6);
            v22 = v125;
            v72 = v124;
          }
          v11 += v123;
          v12 = (_BYTE *)v7;
          v15 = 45;
          v66 = (char *)(v207 - v64);
          v67 = ~v11;
          goto LABEL_239;
        }
        if ( (_BYTE)v39 )
          goto LABEL_149;
LABEL_75:
        v172 = 0;
        *(_WORD *)format = 9504;
LABEL_76:
        v205 = v23;
        v12 = (_BYTE *)v7;
        v23 = v35;
        v27 = &v206;
LABEL_50:
        *v27 = v17;
        v27[1] = 0;
        v164 = v22;
        v182 = v15;
        v28 = strftime(s, 0x400uLL, format, tp);
        if ( !v28 )
        {
LABEL_12:
          v10 = v12[1];
          v7 = (signed __int64)(v12 + 1);
          if ( !v12[1] )
            return v11;
          continue;
        }
        v29 = v164;
        v30 = v28 - 1;
        v31 = 0LL;
        if ( v164 >= 0 )
          v31 = v164;
        v32 = v31;
        if ( v30 >= v31 )
          v32 = v30;
        v165[0] = v32;
        if ( ~v11 > v32 )
        {
          if ( v6 )
          {
            if ( !v23 && v30 < v31 )
            {
              v33 = v29 - v30;
              if ( v182 == 48 )
              {
                if ( v29 != v30 )
                {
                  v126 = 0LL;
                  do
                  {
                    ++v126;
                    fputc(48, v6);
                  }
                  while ( v33 != v126 );
                }
              }
              else
              {
                v34 = 0LL;
                if ( v29 != v30 )
                {
                  do
                  {
                    ++v34;
                    fputc(32, v6);
                  }
                  while ( v33 != v34 );
                }
              }
            }
            if ( v172 )
            {
              sub_402530(v6, &s[1], v30);
            }
            else if ( v159 )
            {
              sub_402590(v6, &s[1], v30);
            }
            else
            {
              fwrite(&s[1], v30, 1uLL, v6);
            }
          }
          goto LABEL_65;
        }
        return 0LL;
    }
  }
}

unsigned __int64 __fastcall sub_403F10(FILE *a1, _BYTE *a2, __int64 a3, __int64 a4, int a5)
{
  return sub_4025F0(a1, a3, 0, a2, a4, a5);
}

void sub_403F30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, void (__fastcall *a6)(_QWORD), ...)
{
  int v6; // ebx@1
  __int64 v7; // r13@3
  __int64 v8; // r12@3
  __int64 v9; // rbp@3
  void (__fastcall *v10)(_QWORD); // r14@3
  int v11; // eax@3
  va_list va; // [sp+8h] [bp-F0h]@1

  va_start(va, a6);
  v6 = dword_60C2B8;
  dword_60C2B8 = 0;
  if ( (_DWORD)a1 == 2 )
  {
    v7 = a5;
    v8 = a4;
    v9 = a3;
    v10 = a6;
    v11 = sub_407200(a1, a2, &unk_4092B8, &off_4092E0, 0LL);
    if ( v11 != -1 )
    {
      if ( v11 == 104 )
      {
        v10(0LL);
      }
      else if ( v11 == 118 )
      {
        sub_406080(stdout, v9, v8, v7, va);
        exit(0);
      }
    }
  }
  dword_60C2B8 = v6;
  dword_60C2BC = 0;
}

char *__fastcall sub_404040(const char *a1)
{
  signed __int64 v1; // rbx@2
  char *result; // rax@2
  signed __int64 v3; // rdx@3
  bool v4; // cf@3
  bool v5; // zf@3
  char *v6; // rsi@4
  const char *v7; // rdi@4
  signed __int64 v8; // rcx@4
  char v9; // dl@7
  bool v10; // cf@7
  bool v11; // zf@7
  const char *v12; // rdi@8
  signed __int64 v13; // rcx@8
  _BYTE *v14; // rsi@8

  if ( !a1 )
  {
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 1uLL, 0x37uLL, stderr);
    abort();
  }
  v1 = (signed __int64)a1;
  result = strrchr(a1, 47);
  if ( result )
  {
    v3 = result + 1 - a1;
    v4 = (unsigned __int64)v3 < 6;
    v5 = v3 == 6;
    if ( v3 > 6 )
    {
      v6 = result - 6;
      v7 = "/.libs/";
      v8 = 7LL;
      do
      {
        if ( !v8 )
          break;
        v4 = (unsigned __int8)*v6 < *v7;
        v5 = *v6++ == *v7++;
        --v8;
      }
      while ( v5 );
      v9 = (!v4 && !v5) - v4;
      v10 = 0;
      v11 = v9 == 0;
      if ( !v9 )
      {
        v12 = "lt-";
        v13 = 3LL;
        v14 = result + 1;
        v1 = (signed __int64)(result + 1);
        do
        {
          if ( !v13 )
            break;
          v10 = *v14 < (const unsigned __int8)*v12;
          v11 = *v14++ == *v12++;
          --v13;
        }
        while ( v11 );
        if ( (!v10 && !v11) == v10 )
        {
          v1 = (signed __int64)(result + 4);
          program_invocation_short_name = (__int64)(result + 4);
        }
      }
    }
  }
  qword_60C308 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_4040E0(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_407B70(0LL);
  if ( (*(_BYTE *)v4 & 0xDF) == 85 )
  {
    if ( (*(_BYTE *)(v4 + 1) & 0xDF) == 84
      && (*(_BYTE *)(v4 + 2) & 0xDF) == 70
      && *(_BYTE *)(v4 + 3) == 45
      && *(_BYTE *)(v4 + 4) == 56
      && !*(_BYTE *)(v4 + 5) )
    {
      v5 = *v2 == 96;
      v2 = "‘";
      if ( !v5 )
        v2 = "’";
      return (char *)v2;
    }
  }
  else if ( (*(_BYTE *)v4 & 0xDF) == 71
         && (*(_BYTE *)(v4 + 1) & 0xDF) == 66
         && *(_BYTE *)(v4 + 2) == 49
         && *(_BYTE *)(v4 + 3) == 56
         && *(_BYTE *)(v4 + 4) == 48
         && *(_BYTE *)(v4 + 5) == 51
         && *(_BYTE *)(v4 + 6) == 48
         && !*(_BYTE *)(v4 + 7) )
  {
    v5 = *v2 == 96;
    v2 = "�\ae";
    if ( !v5 )
      v2 = "��";
    return (char *)v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_4041E0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
{
  _BYTE *v9; // r15@1
  unsigned __int64 v10; // r14@1
  int v11; // er13@1
  int v12; // ebp@1
  unsigned __int64 v13; // rdx@1
  unsigned __int64 v14; // r11@1
  int v15; // er10@2
  unsigned __int64 v16; // rbx@2
  unsigned __int64 v17; // r9@3
  __int64 v18; // r12@3
  int v19; // er11@3
  char *v20; // r8@7
  int v21; // ST60_4@11
  unsigned __int8 v22; // ST58_1@11
  size_t v23; // rax@11
  int v24; // ST68_4@13
  unsigned __int64 v25; // ST60_8@13
  unsigned __int8 v26; // ST58_1@13
  int v27; // eax@13
  unsigned __int64 v28; // rbp@15
  bool v29; // al@17
  int v30; // eax@23
  int v31; // eax@29
  char v32; // di@42
  const unsigned __int16 **v33; // rax@50
  char v34; // cl@65
  unsigned __int64 result; // rax@71
  signed __int64 v36; // rcx@90
  int v37; // ST60_4@99
  unsigned __int64 v38; // ST58_8@99
  unsigned __int8 v39; // ST50_1@99
  unsigned __int64 v40; // rdi@99
  unsigned __int8 v41; // al@122
  unsigned __int8 v42; // al@124
  int v43; // er13@131
  bool v44; // dl@131
  bool v45; // dl@133
  bool v46; // al@136
  int v47; // ST60_4@146
  char v48; // ST58_1@146
  char *v49; // ST50_8@146
  size_t v50; // rax@146
  const unsigned __int16 **v51; // rbx@147
  char *v52; // r15@151
  const unsigned __int16 **v53; // r14@151
  char *v54; // rax@157
  int v55; // esi@173
  unsigned __int64 v56; // rcx@173
  unsigned __int8 v57; // di@173
  char *v58; // rax@218
  unsigned __int64 v59; // ST30_8@220
  size_t v60; // rax@220
  signed __int64 v61; // rsi@246
  char *v62; // rsi@258
  char *v63; // rcx@258
  char i; // al@265
  char v65; // dl@276
  char *v66; // rax@277
  unsigned __int64 v67; // [sp+8h] [bp-C0h]@1
  char v68; // [sp+8h] [bp-C0h]@2
  unsigned __int8 v69; // [sp+10h] [bp-B8h]@7
  char v70; // [sp+1Fh] [bp-A9h]@2
  char *s; // [sp+20h] [bp-A8h]@1
  unsigned __int64 n; // [sp+28h] [bp-A0h]@2
  char *v73; // [sp+30h] [bp-98h]@13
  unsigned __int64 v74; // [sp+30h] [bp-98h]@147
  int v75; // [sp+38h] [bp-90h]@147
  _BYTE *v76; // [sp+40h] [bp-88h]@147
  unsigned __int64 v77; // [sp+48h] [bp-80h]@147
  char *s2; // [sp+50h] [bp-78h]@2
  __int64 v79; // [sp+58h] [bp-70h]@2
  size_t v80; // [sp+60h] [bp-68h]@1
  char v81; // [sp+68h] [bp-60h]@1
  bool v82; // [sp+6Ch] [bp-5Ch]@1
  char v83; // [sp+6Dh] [bp-5Bh]@2
  unsigned __int8 v84; // [sp+6Eh] [bp-5Ah]@147
  unsigned __int64 v85; // [sp+70h] [bp-58h]@147
  char *v86; // [sp+78h] [bp-50h]@147
  wint_t wc; // [sp+84h] [bp-44h]@148
  mbstate_t ps; // [sp+88h] [bp-40h]@145

  v9 = a1;
  v10 = a2;
  v11 = a5;
  s = a3;
  v67 = a4;
  v81 = a6;
  v12 = a6 & 2;
  v80 = __ctype_get_mb_cur_max();
  v82 = v12 != 0;
  v14 = v67;
  switch ( v11 )
  {
    case 1:
      goto LABEL_2;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v11 = 2;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v68 = 1;
      goto LABEL_211;
    case 5:
      if ( v12 )
      {
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v15 = 0;
          v70 = 1;
          v83 = 0;
          v79 = 0LL;
        }
        else
        {
          v79 = 0LL;
          v15 = 0;
          v70 = 1;
          v83 = 0;
        }
        v82 = 0;
        v16 = 1LL;
        v68 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_4040E0("`", v11);
        v58 = sub_4040E0("'", v11);
        v14 = v67;
        a9 = v58;
      }
      v16 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v16] )
        {
          if ( a2 > v16 )
            a1[v16] = i;
          ++v16;
        }
      }
      v59 = v14;
      v60 = strlen(a9);
      v70 = 1;
      v15 = 0;
      v14 = v59;
      n = v60;
      v83 = 0;
      s2 = a9;
      v79 = 0LL;
      v68 = 1;
      goto LABEL_3;
    case 0:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v68 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 6:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 5;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v68 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v68 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 3:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 2;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v68 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 2:
      if ( v12 )
      {
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 0;
        n = 1LL;
        s2 = "'";
      }
      else
      {
        v68 = 0;
LABEL_211:
        if ( a2 )
        {
          v15 = 0;
          v46 = 0;
          v70 = 1;
          v79 = 0LL;
          goto LABEL_138;
        }
        v70 = 1;
        v15 = 0;
        v16 = 1LL;
        v11 = 2;
        v79 = 0LL;
        v83 = 0;
        v82 = 0;
        n = 1LL;
        s2 = "'";
      }
LABEL_3:
      v17 = v14;
      v18 = 0LL;
      v19 = v11;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(v11) = v17 != v18;
        if ( v17 == -1LL )
          LOBYTE(v11) = s[v18] != 0;
        if ( !(_BYTE)v11 )
        {
          v43 = v19;
          v14 = v17;
          v44 = v43 == 2;
          if ( !v16 && v44 && v82 )
            return sub_4041E0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_4041E0((__int64)v9, v79, s);
              v46 = v79 != 0 && v10 == 0;
              if ( v46 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
                n = 1LL;
                v82 = 0;
                v83 = v46;
                goto LABEL_3;
              }
              v45 = v83;
            }
          }
          else
          {
            v45 = !v82;
          }
          if ( s2 )
          {
            if ( v45 )
            {
              v65 = *s2;
              if ( *s2 )
              {
                v66 = &s2[-v16];
                do
                {
                  if ( v10 > v16 )
                    v9[v16] = v65;
                  v65 = v66[++v16];
                }
                while ( v65 );
              }
            }
          }
          if ( v10 > v16 )
            v9[v16] = 0;
          return v16;
        }
        v20 = &s[v18];
        v69 = v68 & (v19 != 2);
        if ( !((unsigned __int8)v68 & (v19 != 2)) )
          break;
        if ( n )
        {
          if ( v17 == -1LL && n > 1 )
          {
            v21 = v19;
            v22 = v15;
            v23 = strlen(s);
            v19 = v21;
            v15 = v22;
            v20 = &s[v18];
            v17 = v23;
          }
          if ( v18 + n <= v17 )
          {
            v24 = v19;
            v25 = v17;
            v26 = v15;
            v73 = v20;
            v27 = memcmp(v20, s2, n);
            v20 = v73;
            v15 = v26;
            v17 = v25;
            v19 = v24;
            if ( !v27 )
            {
              if ( v82 )
                return sub_4041E0((__int64)v9, v10, s);
              LOBYTE(v28) = *v73;
              switch ( *v73 )
              {
                case 123:
                case 125:
                  goto LABEL_17;
                case 63:
                  goto LABEL_58;
                case 39:
                  goto LABEL_62;
                case 92:
                  goto LABEL_65;
                case 10:
                  goto LABEL_68;
                case 9:
                  goto LABEL_72;
                case 33:
                case 34:
                case 36:
                case 38:
                case 40:
                case 41:
                case 42:
                case 59:
                case 60:
                case 61:
                case 62:
                case 91:
                case 94:
                case 96:
                case 124:
                  goto LABEL_74;
                case 13:
                  goto LABEL_76;
                case 12:
                  goto LABEL_77;
                case 11:
                  goto LABEL_80;
                case 0:
                  goto LABEL_83;
                default:
                  goto LABEL_98;
                case 37:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                case 48:
                case 49:
                case 50:
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                case 56:
                case 57:
                case 58:
                case 65:
                case 66:
                case 67:
                case 68:
                case 69:
                case 70:
                case 71:
                case 72:
                case 73:
                case 74:
                case 75:
                case 76:
                case 77:
                case 78:
                case 79:
                case 80:
                case 81:
                case 82:
                case 83:
                case 84:
                case 85:
                case 86:
                case 87:
                case 88:
                case 89:
                case 90:
                case 93:
                case 95:
                case 97:
                case 98:
                case 99:
                case 100:
                case 101:
                case 102:
                case 103:
                case 104:
                case 105:
                case 106:
                case 107:
                case 108:
                case 109:
                case 110:
                case 111:
                case 112:
                case 113:
                case 114:
                case 115:
                case 116:
                case 117:
                case 118:
                case 119:
                case 120:
                case 121:
                case 122:
                  v41 = v69;
                  goto LABEL_123;
                case 35:
                case 126:
                  v42 = v69;
                  goto LABEL_125;
                case 32:
                  v41 = v69;
                  goto LABEL_128;
                case 8:
                  LODWORD(v13) = 0;
                  v11 = 0;
                  LOBYTE(v28) = 98;
                  goto LABEL_29;
                case 7:
                  LOBYTE(v28) = 97;
                  break;
              }
LABEL_79:
              v11 = 0;
              goto LABEL_37;
            }
          }
        }
        LOBYTE(v28) = *v20;
        switch ( *v20 )
        {
          case 123:
          case 125:
            v69 = 0;
            goto LABEL_17;
          case 63:
            v69 = 0;
            goto LABEL_58;
          case 39:
            v69 = 0;
            goto LABEL_62;
          case 92:
            v69 = 0;
            goto LABEL_65;
          case 10:
LABEL_68:
            LOBYTE(v28) = 110;
            goto LABEL_69;
          case 9:
LABEL_72:
            LOBYTE(v28) = 116;
            goto LABEL_69;
          case 33:
          case 34:
          case 36:
          case 38:
          case 40:
          case 41:
          case 42:
          case 59:
          case 60:
          case 61:
          case 62:
          case 91:
          case 94:
          case 96:
          case 124:
            v69 = 0;
LABEL_74:
            LODWORD(v13) = 0;
            goto LABEL_67;
          case 13:
            v69 = 0;
LABEL_76:
            LOBYTE(v28) = 13;
            v34 = 114;
            LOBYTE(v13) = v19 == 2;
            goto LABEL_66;
          case 12:
LABEL_77:
            LOBYTE(v28) = 102;
            goto LABEL_78;
          case 11:
LABEL_80:
            LOBYTE(v28) = 118;
            goto LABEL_78;
          case 0:
            goto LABEL_81;
          default:
            v69 = 0;
            goto LABEL_98;
          case 37:
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
          case 58:
          case 65:
          case 66:
          case 67:
          case 68:
          case 69:
          case 70:
          case 71:
          case 72:
          case 73:
          case 74:
          case 75:
          case 76:
          case 77:
          case 78:
          case 79:
          case 80:
          case 81:
          case 82:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
          case 90:
          case 93:
          case 95:
          case 97:
          case 98:
          case 99:
          case 100:
          case 101:
          case 102:
          case 103:
          case 104:
          case 105:
          case 106:
          case 107:
          case 108:
          case 109:
          case 110:
          case 111:
          case 112:
          case 113:
          case 114:
          case 115:
          case 116:
          case 117:
          case 118:
          case 119:
          case 120:
          case 121:
          case 122:
            v41 = 0;
            goto LABEL_123;
          case 35:
          case 126:
            v42 = 0;
LABEL_125:
            if ( !v18 )
            {
              v11 = v69;
              LODWORD(v13) = 0;
              v69 = v42;
              goto LABEL_23;
            }
            v69 = v42;
            v11 = 0;
            break;
          case 32:
            v41 = 0;
LABEL_128:
            LOBYTE(v28) = 32;
LABEL_123:
            v11 = v69;
            v69 = v41;
            v30 = 0;
            goto LABEL_25;
          case 8:
            LOBYTE(v28) = 98;
LABEL_69:
            LODWORD(v13) = 0;
            v11 = 0;
            if ( v82 )
              return sub_4041E0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_4041E0((__int64)v9, v10, s);
        }
LABEL_24:
        v30 = 0;
LABEL_25:
        if ( a7 )
        {
          LODWORD(v13) = (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v28 >> 5)) >> v28) & 1;
          if ( (_DWORD)v13 )
          {
            LOBYTE(v13) = v19 == 2;
LABEL_28:
            if ( v82 )
              return sub_4041E0((__int64)v9, v10, s);
LABEL_29:
            v31 = v15 ^ 1;
            LOBYTE(v31) = v13 & (v15 ^ 1);
            if ( (unsigned __int8)v13 & (unsigned __int8)(v15 ^ 1) )
            {
              if ( v10 > v16 )
                v9[v16] = 39;
              if ( v16 + 1 < v10 )
                v9[v16 + 1] = 36;
              LODWORD(v13) = v16 + 2;
              if ( v16 + 2 < v10 )
                v9[v16 + 2] = 39;
              v16 += 3LL;
              v15 = v31;
            }
LABEL_37:
            if ( v10 > v16 )
              v9[v16] = 92;
            ++v16;
            ++v18;
            goto LABEL_40;
          }
        }
LABEL_49:
        LOBYTE(v13) = v19 == 2;
        if ( v69 )
          goto LABEL_28;
        ++v18;
        LODWORD(v33) = v15 & (v30 ^ 1);
LABEL_51:
        if ( (_BYTE)v33 )
        {
          if ( v10 > v16 )
            v9[v16] = 39;
          if ( v10 > v16 + 1 )
            v9[v16 + 1] = 39;
          v16 += 2LL;
          v15 = 0;
        }
LABEL_40:
        if ( v16 < v10 )
          v9[v16] = v28;
        v32 = v70;
        ++v16;
        if ( !(_BYTE)v11 )
          v32 = 0;
        v70 = v32;
      }
      LOBYTE(v28) = *v20;
      switch ( *v20 )
      {
        case 123:
        case 125:
LABEL_17:
          v29 = v17 != 1;
          if ( v17 == -1LL )
            v29 = s[1] != 0;
          LOBYTE(v13) = v19 == 2;
          if ( !v29 )
            goto LABEL_20;
          goto LABEL_67;
        case 63:
LABEL_58:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_4041E0((__int64)v9, v10, s);
            v11 = 0;
            v30 = 0;
            LOBYTE(v28) = 63;
            goto LABEL_49;
          }
          if ( v19 != 5 )
          {
            LOBYTE(v28) = 63;
            LOBYTE(v13) = v19 == 2;
            v11 = 0;
            goto LABEL_23;
          }
          if ( !(v81 & 4)
            || v18 + 2 >= v17
            || s[v18 + 1] != 63
            || (v28 = (unsigned __int8)s[v18 + 2], (unsigned __int8)v28 > 0x3Eu)
            || (v61 = 8070630310989004800LL, !_bittest64(&v61, v28)) )
          {
            LODWORD(v13) = 0;
            v11 = 0;
            LOBYTE(v28) = 63;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_4041E0((__int64)v9, v10, s);
          if ( v10 > v16 )
            v9[v16] = 63;
          if ( v10 > v16 + 1 )
            v9[v16 + 1] = 34;
          if ( v10 > v16 + 2 )
            v9[v16 + 2] = 34;
          if ( v10 > v16 + 3 )
            v9[v16 + 3] = 63;
          v16 += 4LL;
          LODWORD(v13) = 0;
          v11 = 0;
          v18 += 2LL;
          goto LABEL_95;
        case 39:
LABEL_62:
          if ( v19 != 2 )
          {
            v83 = v11;
            LODWORD(v13) = 0;
            LOBYTE(v28) = 39;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_4041E0((__int64)v9, v10, s);
          if ( !v10 || (v13 = 0LL, v79) )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 92;
            if ( v10 <= v16 + 2 )
            {
              v13 = v10;
              v10 = v79;
            }
            else
            {
              v13 = v10;
              v9[v16 + 2] = 39;
              v10 = v79;
            }
          }
          v83 = v11;
          v16 += 3LL;
          v30 = 0;
          v15 = 0;
          v79 = v10;
          LOBYTE(v28) = 39;
          v10 = v13;
          goto LABEL_49;
        default:
LABEL_98:
          if ( v80 == 1 )
          {
            v37 = v19;
            v38 = v17;
            v39 = v15;
            v33 = __ctype_b_loc();
            LODWORD(v13) = (unsigned __int8)v28;
            v15 = v39;
            v17 = v38;
            v19 = v37;
            v40 = 1LL;
            LODWORD(v33) = (*v33)[(unsigned __int8)v28];
            LOWORD(v33) = (unsigned __int16)v33 & 0x4000;
            LOBYTE(v11) = (_WORD)v33 != 0;
            LOBYTE(v13) = v68 & ((_WORD)v33 == 0);
            goto LABEL_100;
          }
          ps = 0LL;
          if ( v17 == -1LL )
          {
            v47 = v19;
            v48 = v15;
            v49 = v20;
            v50 = strlen(s);
            v19 = v47;
            LOBYTE(v15) = v48;
            v20 = v49;
            v17 = v50;
          }
          v85 = v16;
          v86 = v20;
          v51 = 0LL;
          v84 = v15;
          v76 = v9;
          v77 = v10;
          v74 = v17;
          v75 = v19;
          break;
        case 37:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 93:
        case 95:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
        case 112:
        case 113:
        case 114:
        case 115:
        case 116:
        case 117:
        case 118:
        case 119:
        case 120:
        case 121:
        case 122:
          goto LABEL_101;
        case 10:
          LOBYTE(v28) = 10;
          v34 = 110;
          goto LABEL_104;
        case 9:
          LOBYTE(v28) = 9;
          v34 = 116;
          goto LABEL_104;
        case 8:
          LOBYTE(v28) = 8;
          v34 = 98;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 7:
          LOBYTE(v28) = 7;
          v34 = 97;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 0:
          if ( !v68 )
          {
            if ( !(v81 & 1) )
            {
              v69 = 0;
              LOBYTE(v13) = v19 == 2;
              v11 = 0;
              LOBYTE(v28) = 0;
              goto LABEL_23;
            }
            ++v18;
            goto LABEL_4;
          }
LABEL_81:
          if ( v82 )
            return sub_4041E0((__int64)v9, v10, s);
          v69 = 0;
LABEL_83:
          LOBYTE(v13) = v19 == 2;
          v30 = v15 ^ 1;
          LOBYTE(v30) = (v19 == 2) & (v15 ^ 1);
          if ( (_BYTE)v30 )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 36;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v36 = v16 + 3;
            if ( v10 <= v16 + 3 )
            {
              v16 += 4LL;
              v15 = v30;
              v11 = 0;
              LOBYTE(v28) = 48;
              goto LABEL_49;
            }
            goto LABEL_91;
          }
          v36 = v16;
          if ( v10 > v16 )
          {
            v30 = v15;
LABEL_91:
            v9[v36] = 92;
            v15 = v30;
          }
          v16 = v36 + 1;
          if ( v19 == 2 )
          {
            v30 = v11;
            LOBYTE(v28) = 48;
            v11 = 0;
            goto LABEL_49;
          }
          LOBYTE(v28) = 48;
          if ( v18 + 1 < v17 && (unsigned __int8)(s[v18 + 1] - 48) <= 9u )
          {
            if ( v10 > v16 )
              v9[v16] = 48;
            if ( v10 > v36 + 2 )
              v9[v36 + 2] = 48;
            v16 = v36 + 3;
            LOBYTE(v28) = 48;
          }
LABEL_95:
          v30 = v11;
          v11 = 0;
          if ( (unsigned __int8)v13 | (unsigned __int8)(v68 ^ 1) )
            goto LABEL_49;
          goto LABEL_25;
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_4041E0((__int64)v9, v10, s);
            ++v18;
            LOBYTE(v33) = v15;
            v11 = 0;
            LOBYTE(v28) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LODWORD(v13) = (unsigned __int8)v68;
          LOBYTE(v28) = 92;
          v34 = 92;
          LOBYTE(v13) = (n != 0) & v82 & v68;
          if ( (_BYTE)v13 )
          {
            ++v18;
            LOBYTE(v33) = v15;
            v11 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v68 )
          {
LABEL_67:
            v11 = 0;
            goto LABEL_23;
          }
          LOBYTE(v28) = v34;
          v11 = 0;
          goto LABEL_28;
        case 35:
        case 126:
          LOBYTE(v13) = v19 == 2;
LABEL_20:
          if ( !v18 )
            goto LABEL_21;
          goto LABEL_67;
        case 33:
        case 34:
        case 36:
        case 38:
        case 40:
        case 41:
        case 42:
        case 59:
        case 60:
        case 61:
        case 62:
        case 91:
        case 94:
        case 96:
        case 124:
          LOBYTE(v13) = v19 == 2;
          v11 = 0;
          goto LABEL_21;
        case 32:
          LOBYTE(v28) = 32;
          LOBYTE(v13) = v19 == 2;
LABEL_21:
          if ( !v82 || !(_BYTE)v13 )
            goto LABEL_23;
          return sub_4041E0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_4041E0((__int64)v9, v10, s);
          goto LABEL_66;
        case 12:
          LOBYTE(v28) = 12;
          v34 = 102;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 11:
          LOBYTE(v28) = 11;
          v34 = 118;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
      }
      while ( 2 )
      {
        v52 = (char *)v51 + v18;
        v33 = (const unsigned __int16 **)sub_407280((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
        v53 = v33;
        if ( !v33 )
        {
LABEL_240:
          v40 = (unsigned __int64)v51;
          v16 = v85;
          v15 = v84;
          v9 = v76;
          LODWORD(v13) = v11 ^ 1;
          v10 = v77;
          v17 = v74;
          v19 = v75;
          LOBYTE(v13) = v68 & (v11 ^ 1);
          goto LABEL_241;
        }
        if ( v33 == (const unsigned __int16 **)-1 )
        {
          v40 = (unsigned __int64)v51;
          v16 = v85;
          v11 = 0;
          v15 = v84;
          v9 = v76;
          v10 = v77;
          v17 = v74;
          v19 = v75;
          LODWORD(v13) = (unsigned __int8)v68;
          goto LABEL_241;
        }
        if ( v33 == (const unsigned __int16 **)-2 )
        {
          v17 = v74;
          v62 = (char *)v51 + v18;
          v63 = (char *)v51 + v18 + (_QWORD)s;
          v33 = v51;
          v40 = (unsigned __int64)v51;
          v15 = v84;
          v16 = v85;
          v9 = v76;
          v10 = v77;
          v19 = v75;
          if ( (unsigned __int64)v62 < v74 && *v63 )
          {
            do
              v33 = (const unsigned __int16 **)((char *)v33 + 1);
            while ( (unsigned __int64)v33 + v18 < v74 && *((_BYTE *)v33 + (_QWORD)v86) );
            v40 = (unsigned __int64)v33;
          }
          LODWORD(v13) = (unsigned __int8)v68;
          v11 = 0;
LABEL_241:
          if ( v40 > 1 )
            goto LABEL_173;
LABEL_100:
          if ( (_BYTE)v13 )
          {
            LODWORD(v13) = (unsigned __int8)v68;
            LOBYTE(v11) = 0;
LABEL_173:
            v55 = 0;
            v56 = v18 + v40;
            v57 = v69;
            while ( 1 )
            {
              if ( (_BYTE)v13 )
              {
                if ( v82 )
                  return sub_4041E0((__int64)v9, v10, s);
                LOBYTE(v33) = (v15 ^ 1) & (v19 == 2);
                if ( (_BYTE)v33 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 36;
                  if ( v10 > v16 + 2 )
                    v9[v16 + 2] = 39;
                  v16 += 3LL;
                  v15 = (signed int)v33;
                }
                if ( v10 > v16 )
                  v9[v16] = 92;
                if ( v10 > v16 + 1 )
                  v9[v16 + 1] = ((unsigned __int8)v28 >> 6) + 48;
                LODWORD(v33) = v16 + 2;
                if ( v10 > v16 + 2 )
                {
                  LODWORD(v33) = (((unsigned __int8)v28 >> 3) & 7) + 48;
                  v9[v16 + 2] = (_BYTE)v33;
                }
                ++v18;
                v16 += 3LL;
                LOBYTE(v28) = (v28 & 7) + 48;
                if ( v18 >= v56 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_40;
                }
                v55 = v13;
              }
              else
              {
                LODWORD(v33) = v15 & (v55 ^ 1);
                if ( v57 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 92;
                  ++v16;
                }
                if ( ++v18 >= v56 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_51;
                }
                if ( (_BYTE)v33 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  LODWORD(v33) = v16 + 1;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 39;
                  v16 += 2LL;
                  v57 = 0;
                  v15 = 0;
                }
                else
                {
                  v57 = 0;
                }
              }
              if ( v10 > v16 )
                v9[v16] = v28;
              LOBYTE(v28) = s[v18];
              ++v16;
            }
          }
LABEL_101:
          LOBYTE(v13) = v19 == 2;
LABEL_23:
          v30 = (v13 | (unsigned __int8)v68 ^ 1) ^ 1;
          LOBYTE(v30) = v82 | (v13 | v68 ^ 1) ^ 1;
          if ( !(v82 | (unsigned __int8)((v13 | v68 ^ 1) ^ 1)) )
            goto LABEL_49;
          goto LABEL_24;
        }
        if ( v75 != 2 || !v82 || v33 == (const unsigned __int16 **)1 )
        {
LABEL_148:
          if ( !iswprint(wc) )
            v11 = 0;
          v51 = (const unsigned __int16 **)((char *)v51 + (_QWORD)v53);
          LODWORD(v33) = mbsinit(&ps);
          if ( (_DWORD)v33 )
            goto LABEL_240;
          continue;
        }
        break;
      }
      v54 = &v52[(_QWORD)s + 1];
      while ( (unsigned __int8)(*v54 - 91) > 0x21u || !((1LL << (*v54 - 91)) & 0x20000002BLL) )
      {
        if ( &v52[(unsigned int)&s[(_QWORD)v53]] == ++v54 )
          goto LABEL_148;
      }
      v9 = v76;
      v10 = v77;
      return sub_4041E0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_4041E0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
{
  _BYTE *v9; // r15@1
  unsigned __int64 v10; // r14@1
  int v11; // er13@1
  int v12; // ebp@1
  unsigned __int64 v13; // rdx@1
  unsigned __int64 v14; // r11@1
  int v15; // er10@2
  unsigned __int64 v16; // rbx@2
  unsigned __int64 v17; // r9@3
  __int64 v18; // r12@3
  int v19; // er11@3
  char *v20; // r8@7
  int v21; // ST60_4@11
  unsigned __int8 v22; // ST58_1@11
  size_t v23; // rax@11
  int v24; // ST68_4@13
  unsigned __int64 v25; // ST60_8@13
  unsigned __int8 v26; // ST58_1@13
  int v27; // eax@13
  unsigned __int64 v28; // rbp@15
  bool v29; // al@17
  int v30; // eax@23
  int v31; // eax@29
  char v32; // di@42
  const unsigned __int16 **v33; // rax@50
  char v34; // cl@65
  unsigned __int64 result; // rax@71
  signed __int64 v36; // rcx@90
  int v37; // ST60_4@99
  unsigned __int64 v38; // ST58_8@99
  unsigned __int8 v39; // ST50_1@99
  unsigned __int64 v40; // rdi@99
  unsigned __int8 v41; // al@122
  unsigned __int8 v42; // al@124
  int v43; // er13@131
  bool v44; // dl@131
  bool v45; // dl@133
  bool v46; // al@136
  int v47; // ST60_4@146
  char v48; // ST58_1@146
  char *v49; // ST50_8@146
  size_t v50; // rax@146
  const unsigned __int16 **v51; // rbx@147
  char *v52; // r15@151
  const unsigned __int16 **v53; // r14@151
  char *v54; // rax@157
  int v55; // esi@173
  unsigned __int64 v56; // rcx@173
  unsigned __int8 v57; // di@173
  char *v58; // rax@218
  unsigned __int64 v59; // ST30_8@220
  size_t v60; // rax@220
  signed __int64 v61; // rsi@246
  char *v62; // rsi@258
  char *v63; // rcx@258
  char i; // al@265
  char v65; // dl@276
  char *v66; // rax@277
  unsigned __int64 v67; // [sp+8h] [bp-C0h]@1
  char v68; // [sp+8h] [bp-C0h]@2
  unsigned __int8 v69; // [sp+10h] [bp-B8h]@7
  char v70; // [sp+1Fh] [bp-A9h]@2
  char *s; // [sp+20h] [bp-A8h]@1
  unsigned __int64 n; // [sp+28h] [bp-A0h]@2
  char *v73; // [sp+30h] [bp-98h]@13
  unsigned __int64 v74; // [sp+30h] [bp-98h]@147
  int v75; // [sp+38h] [bp-90h]@147
  _BYTE *v76; // [sp+40h] [bp-88h]@147
  unsigned __int64 v77; // [sp+48h] [bp-80h]@147
  char *s2; // [sp+50h] [bp-78h]@2
  __int64 v79; // [sp+58h] [bp-70h]@2
  size_t v80; // [sp+60h] [bp-68h]@1
  char v81; // [sp+68h] [bp-60h]@1
  bool v82; // [sp+6Ch] [bp-5Ch]@1
  char v83; // [sp+6Dh] [bp-5Bh]@2
  unsigned __int8 v84; // [sp+6Eh] [bp-5Ah]@147
  unsigned __int64 v85; // [sp+70h] [bp-58h]@147
  char *v86; // [sp+78h] [bp-50h]@147
  wint_t wc; // [sp+84h] [bp-44h]@148
  mbstate_t ps; // [sp+88h] [bp-40h]@145

  v9 = a1;
  v10 = a2;
  v11 = a5;
  s = a3;
  v67 = a4;
  v81 = a6;
  v12 = a6 & 2;
  v80 = __ctype_get_mb_cur_max();
  v82 = v12 != 0;
  v14 = v67;
  switch ( v11 )
  {
    case 1:
      goto LABEL_2;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v11 = 2;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v68 = 1;
      goto LABEL_211;
    case 5:
      if ( v12 )
      {
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v15 = 0;
          v70 = 1;
          v83 = 0;
          v79 = 0LL;
        }
        else
        {
          v79 = 0LL;
          v15 = 0;
          v70 = 1;
          v83 = 0;
        }
        v82 = 0;
        v16 = 1LL;
        v68 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_4040E0("`", v11);
        v58 = sub_4040E0("'", v11);
        v14 = v67;
        a9 = v58;
      }
      v16 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v16] )
        {
          if ( a2 > v16 )
            a1[v16] = i;
          ++v16;
        }
      }
      v59 = v14;
      v60 = strlen(a9);
      v70 = 1;
      v15 = 0;
      v14 = v59;
      n = v60;
      v83 = 0;
      s2 = a9;
      v79 = 0LL;
      v68 = 1;
      goto LABEL_3;
    case 0:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v68 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 6:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 5;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v68 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v68 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 3:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 2;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v68 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 2:
      if ( v12 )
      {
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 0;
        n = 1LL;
        s2 = "'";
      }
      else
      {
        v68 = 0;
LABEL_211:
        if ( a2 )
        {
          v15 = 0;
          v46 = 0;
          v70 = 1;
          v79 = 0LL;
          goto LABEL_138;
        }
        v70 = 1;
        v15 = 0;
        v16 = 1LL;
        v11 = 2;
        v79 = 0LL;
        v83 = 0;
        v82 = 0;
        n = 1LL;
        s2 = "'";
      }
LABEL_3:
      v17 = v14;
      v18 = 0LL;
      v19 = v11;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(v11) = v17 != v18;
        if ( v17 == -1LL )
          LOBYTE(v11) = s[v18] != 0;
        if ( !(_BYTE)v11 )
        {
          v43 = v19;
          v14 = v17;
          v44 = v43 == 2;
          if ( !v16 && v44 && v82 )
            return sub_4041E0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_4041E0((__int64)v9, v79, s);
              v46 = v79 != 0 && v10 == 0;
              if ( v46 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
                n = 1LL;
                v82 = 0;
                v83 = v46;
                goto LABEL_3;
              }
              v45 = v83;
            }
          }
          else
          {
            v45 = !v82;
          }
          if ( s2 )
          {
            if ( v45 )
            {
              v65 = *s2;
              if ( *s2 )
              {
                v66 = &s2[-v16];
                do
                {
                  if ( v10 > v16 )
                    v9[v16] = v65;
                  v65 = v66[++v16];
                }
                while ( v65 );
              }
            }
          }
          if ( v10 > v16 )
            v9[v16] = 0;
          return v16;
        }
        v20 = &s[v18];
        v69 = v68 & (v19 != 2);
        if ( !((unsigned __int8)v68 & (v19 != 2)) )
          break;
        if ( n )
        {
          if ( v17 == -1LL && n > 1 )
          {
            v21 = v19;
            v22 = v15;
            v23 = strlen(s);
            v19 = v21;
            v15 = v22;
            v20 = &s[v18];
            v17 = v23;
          }
          if ( v18 + n <= v17 )
          {
            v24 = v19;
            v25 = v17;
            v26 = v15;
            v73 = v20;
            v27 = memcmp(v20, s2, n);
            v20 = v73;
            v15 = v26;
            v17 = v25;
            v19 = v24;
            if ( !v27 )
            {
              if ( v82 )
                return sub_4041E0((__int64)v9, v10, s);
              LOBYTE(v28) = *v73;
              switch ( *v73 )
              {
                case 123:
                case 125:
                  goto LABEL_17;
                case 63:
                  goto LABEL_58;
                case 39:
                  goto LABEL_62;
                case 92:
                  goto LABEL_65;
                case 10:
                  goto LABEL_68;
                case 9:
                  goto LABEL_72;
                case 33:
                case 34:
                case 36:
                case 38:
                case 40:
                case 41:
                case 42:
                case 59:
                case 60:
                case 61:
                case 62:
                case 91:
                case 94:
                case 96:
                case 124:
                  goto LABEL_74;
                case 13:
                  goto LABEL_76;
                case 12:
                  goto LABEL_77;
                case 11:
                  goto LABEL_80;
                case 0:
                  goto LABEL_83;
                default:
                  goto LABEL_98;
                case 37:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                case 48:
                case 49:
                case 50:
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                case 56:
                case 57:
                case 58:
                case 65:
                case 66:
                case 67:
                case 68:
                case 69:
                case 70:
                case 71:
                case 72:
                case 73:
                case 74:
                case 75:
                case 76:
                case 77:
                case 78:
                case 79:
                case 80:
                case 81:
                case 82:
                case 83:
                case 84:
                case 85:
                case 86:
                case 87:
                case 88:
                case 89:
                case 90:
                case 93:
                case 95:
                case 97:
                case 98:
                case 99:
                case 100:
                case 101:
                case 102:
                case 103:
                case 104:
                case 105:
                case 106:
                case 107:
                case 108:
                case 109:
                case 110:
                case 111:
                case 112:
                case 113:
                case 114:
                case 115:
                case 116:
                case 117:
                case 118:
                case 119:
                case 120:
                case 121:
                case 122:
                  v41 = v69;
                  goto LABEL_123;
                case 35:
                case 126:
                  v42 = v69;
                  goto LABEL_125;
                case 32:
                  v41 = v69;
                  goto LABEL_128;
                case 8:
                  LODWORD(v13) = 0;
                  v11 = 0;
                  LOBYTE(v28) = 98;
                  goto LABEL_29;
                case 7:
                  LOBYTE(v28) = 97;
                  break;
              }
LABEL_79:
              v11 = 0;
              goto LABEL_37;
            }
          }
        }
        LOBYTE(v28) = *v20;
        switch ( *v20 )
        {
          case 123:
          case 125:
            v69 = 0;
            goto LABEL_17;
          case 63:
            v69 = 0;
            goto LABEL_58;
          case 39:
            v69 = 0;
            goto LABEL_62;
          case 92:
            v69 = 0;
            goto LABEL_65;
          case 10:
LABEL_68:
            LOBYTE(v28) = 110;
            goto LABEL_69;
          case 9:
LABEL_72:
            LOBYTE(v28) = 116;
            goto LABEL_69;
          case 33:
          case 34:
          case 36:
          case 38:
          case 40:
          case 41:
          case 42:
          case 59:
          case 60:
          case 61:
          case 62:
          case 91:
          case 94:
          case 96:
          case 124:
            v69 = 0;
LABEL_74:
            LODWORD(v13) = 0;
            goto LABEL_67;
          case 13:
            v69 = 0;
LABEL_76:
            LOBYTE(v28) = 13;
            v34 = 114;
            LOBYTE(v13) = v19 == 2;
            goto LABEL_66;
          case 12:
LABEL_77:
            LOBYTE(v28) = 102;
            goto LABEL_78;
          case 11:
LABEL_80:
            LOBYTE(v28) = 118;
            goto LABEL_78;
          case 0:
            goto LABEL_81;
          default:
            v69 = 0;
            goto LABEL_98;
          case 37:
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
          case 58:
          case 65:
          case 66:
          case 67:
          case 68:
          case 69:
          case 70:
          case 71:
          case 72:
          case 73:
          case 74:
          case 75:
          case 76:
          case 77:
          case 78:
          case 79:
          case 80:
          case 81:
          case 82:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
          case 90:
          case 93:
          case 95:
          case 97:
          case 98:
          case 99:
          case 100:
          case 101:
          case 102:
          case 103:
          case 104:
          case 105:
          case 106:
          case 107:
          case 108:
          case 109:
          case 110:
          case 111:
          case 112:
          case 113:
          case 114:
          case 115:
          case 116:
          case 117:
          case 118:
          case 119:
          case 120:
          case 121:
          case 122:
            v41 = 0;
            goto LABEL_123;
          case 35:
          case 126:
            v42 = 0;
LABEL_125:
            if ( !v18 )
            {
              v11 = v69;
              LODWORD(v13) = 0;
              v69 = v42;
              goto LABEL_23;
            }
            v69 = v42;
            v11 = 0;
            break;
          case 32:
            v41 = 0;
LABEL_128:
            LOBYTE(v28) = 32;
LABEL_123:
            v11 = v69;
            v69 = v41;
            v30 = 0;
            goto LABEL_25;
          case 8:
            LOBYTE(v28) = 98;
LABEL_69:
            LODWORD(v13) = 0;
            v11 = 0;
            if ( v82 )
              return sub_4041E0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_4041E0((__int64)v9, v10, s);
        }
LABEL_24:
        v30 = 0;
LABEL_25:
        if ( a7 )
        {
          LODWORD(v13) = (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v28 >> 5)) >> v28) & 1;
          if ( (_DWORD)v13 )
          {
            LOBYTE(v13) = v19 == 2;
LABEL_28:
            if ( v82 )
              return sub_4041E0((__int64)v9, v10, s);
LABEL_29:
            v31 = v15 ^ 1;
            LOBYTE(v31) = v13 & (v15 ^ 1);
            if ( (unsigned __int8)v13 & (unsigned __int8)(v15 ^ 1) )
            {
              if ( v10 > v16 )
                v9[v16] = 39;
              if ( v16 + 1 < v10 )
                v9[v16 + 1] = 36;
              LODWORD(v13) = v16 + 2;
              if ( v16 + 2 < v10 )
                v9[v16 + 2] = 39;
              v16 += 3LL;
              v15 = v31;
            }
LABEL_37:
            if ( v10 > v16 )
              v9[v16] = 92;
            ++v16;
            ++v18;
            goto LABEL_40;
          }
        }
LABEL_49:
        LOBYTE(v13) = v19 == 2;
        if ( v69 )
          goto LABEL_28;
        ++v18;
        LODWORD(v33) = v15 & (v30 ^ 1);
LABEL_51:
        if ( (_BYTE)v33 )
        {
          if ( v10 > v16 )
            v9[v16] = 39;
          if ( v10 > v16 + 1 )
            v9[v16 + 1] = 39;
          v16 += 2LL;
          v15 = 0;
        }
LABEL_40:
        if ( v16 < v10 )
          v9[v16] = v28;
        v32 = v70;
        ++v16;
        if ( !(_BYTE)v11 )
          v32 = 0;
        v70 = v32;
      }
      LOBYTE(v28) = *v20;
      switch ( *v20 )
      {
        case 123:
        case 125:
LABEL_17:
          v29 = v17 != 1;
          if ( v17 == -1LL )
            v29 = s[1] != 0;
          LOBYTE(v13) = v19 == 2;
          if ( !v29 )
            goto LABEL_20;
          goto LABEL_67;
        case 63:
LABEL_58:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_4041E0((__int64)v9, v10, s);
            v11 = 0;
            v30 = 0;
            LOBYTE(v28) = 63;
            goto LABEL_49;
          }
          if ( v19 != 5 )
          {
            LOBYTE(v28) = 63;
            LOBYTE(v13) = v19 == 2;
            v11 = 0;
            goto LABEL_23;
          }
          if ( !(v81 & 4)
            || v18 + 2 >= v17
            || s[v18 + 1] != 63
            || (v28 = (unsigned __int8)s[v18 + 2], (unsigned __int8)v28 > 0x3Eu)
            || (v61 = 8070630310989004800LL, !_bittest64(&v61, v28)) )
          {
            LODWORD(v13) = 0;
            v11 = 0;
            LOBYTE(v28) = 63;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_4041E0((__int64)v9, v10, s);
          if ( v10 > v16 )
            v9[v16] = 63;
          if ( v10 > v16 + 1 )
            v9[v16 + 1] = 34;
          if ( v10 > v16 + 2 )
            v9[v16 + 2] = 34;
          if ( v10 > v16 + 3 )
            v9[v16 + 3] = 63;
          v16 += 4LL;
          LODWORD(v13) = 0;
          v11 = 0;
          v18 += 2LL;
          goto LABEL_95;
        case 39:
LABEL_62:
          if ( v19 != 2 )
          {
            v83 = v11;
            LODWORD(v13) = 0;
            LOBYTE(v28) = 39;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_4041E0((__int64)v9, v10, s);
          if ( !v10 || (v13 = 0LL, v79) )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 92;
            if ( v10 <= v16 + 2 )
            {
              v13 = v10;
              v10 = v79;
            }
            else
            {
              v13 = v10;
              v9[v16 + 2] = 39;
              v10 = v79;
            }
          }
          v83 = v11;
          v16 += 3LL;
          v30 = 0;
          v15 = 0;
          v79 = v10;
          LOBYTE(v28) = 39;
          v10 = v13;
          goto LABEL_49;
        default:
LABEL_98:
          if ( v80 == 1 )
          {
            v37 = v19;
            v38 = v17;
            v39 = v15;
            v33 = __ctype_b_loc();
            LODWORD(v13) = (unsigned __int8)v28;
            v15 = v39;
            v17 = v38;
            v19 = v37;
            v40 = 1LL;
            LODWORD(v33) = (*v33)[(unsigned __int8)v28];
            LOWORD(v33) = (unsigned __int16)v33 & 0x4000;
            LOBYTE(v11) = (_WORD)v33 != 0;
            LOBYTE(v13) = v68 & ((_WORD)v33 == 0);
            goto LABEL_100;
          }
          ps = 0LL;
          if ( v17 == -1LL )
          {
            v47 = v19;
            v48 = v15;
            v49 = v20;
            v50 = strlen(s);
            v19 = v47;
            LOBYTE(v15) = v48;
            v20 = v49;
            v17 = v50;
          }
          v85 = v16;
          v86 = v20;
          v51 = 0LL;
          v84 = v15;
          v76 = v9;
          v77 = v10;
          v74 = v17;
          v75 = v19;
          break;
        case 37:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 93:
        case 95:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
        case 112:
        case 113:
        case 114:
        case 115:
        case 116:
        case 117:
        case 118:
        case 119:
        case 120:
        case 121:
        case 122:
          goto LABEL_101;
        case 10:
          LOBYTE(v28) = 10;
          v34 = 110;
          goto LABEL_104;
        case 9:
          LOBYTE(v28) = 9;
          v34 = 116;
          goto LABEL_104;
        case 8:
          LOBYTE(v28) = 8;
          v34 = 98;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 7:
          LOBYTE(v28) = 7;
          v34 = 97;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 0:
          if ( !v68 )
          {
            if ( !(v81 & 1) )
            {
              v69 = 0;
              LOBYTE(v13) = v19 == 2;
              v11 = 0;
              LOBYTE(v28) = 0;
              goto LABEL_23;
            }
            ++v18;
            goto LABEL_4;
          }
LABEL_81:
          if ( v82 )
            return sub_4041E0((__int64)v9, v10, s);
          v69 = 0;
LABEL_83:
          LOBYTE(v13) = v19 == 2;
          v30 = v15 ^ 1;
          LOBYTE(v30) = (v19 == 2) & (v15 ^ 1);
          if ( (_BYTE)v30 )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 36;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v36 = v16 + 3;
            if ( v10 <= v16 + 3 )
            {
              v16 += 4LL;
              v15 = v30;
              v11 = 0;
              LOBYTE(v28) = 48;
              goto LABEL_49;
            }
            goto LABEL_91;
          }
          v36 = v16;
          if ( v10 > v16 )
          {
            v30 = v15;
LABEL_91:
            v9[v36] = 92;
            v15 = v30;
          }
          v16 = v36 + 1;
          if ( v19 == 2 )
          {
            v30 = v11;
            LOBYTE(v28) = 48;
            v11 = 0;
            goto LABEL_49;
          }
          LOBYTE(v28) = 48;
          if ( v18 + 1 < v17 && (unsigned __int8)(s[v18 + 1] - 48) <= 9u )
          {
            if ( v10 > v16 )
              v9[v16] = 48;
            if ( v10 > v36 + 2 )
              v9[v36 + 2] = 48;
            v16 = v36 + 3;
            LOBYTE(v28) = 48;
          }
LABEL_95:
          v30 = v11;
          v11 = 0;
          if ( (unsigned __int8)v13 | (unsigned __int8)(v68 ^ 1) )
            goto LABEL_49;
          goto LABEL_25;
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_4041E0((__int64)v9, v10, s);
            ++v18;
            LOBYTE(v33) = v15;
            v11 = 0;
            LOBYTE(v28) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LODWORD(v13) = (unsigned __int8)v68;
          LOBYTE(v28) = 92;
          v34 = 92;
          LOBYTE(v13) = (n != 0) & v82 & v68;
          if ( (_BYTE)v13 )
          {
            ++v18;
            LOBYTE(v33) = v15;
            v11 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v68 )
          {
LABEL_67:
            v11 = 0;
            goto LABEL_23;
          }
          LOBYTE(v28) = v34;
          v11 = 0;
          goto LABEL_28;
        case 35:
        case 126:
          LOBYTE(v13) = v19 == 2;
LABEL_20:
          if ( !v18 )
            goto LABEL_21;
          goto LABEL_67;
        case 33:
        case 34:
        case 36:
        case 38:
        case 40:
        case 41:
        case 42:
        case 59:
        case 60:
        case 61:
        case 62:
        case 91:
        case 94:
        case 96:
        case 124:
          LOBYTE(v13) = v19 == 2;
          v11 = 0;
          goto LABEL_21;
        case 32:
          LOBYTE(v28) = 32;
          LOBYTE(v13) = v19 == 2;
LABEL_21:
          if ( !v82 || !(_BYTE)v13 )
            goto LABEL_23;
          return sub_4041E0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_4041E0((__int64)v9, v10, s);
          goto LABEL_66;
        case 12:
          LOBYTE(v28) = 12;
          v34 = 102;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 11:
          LOBYTE(v28) = 11;
          v34 = 118;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
      }
      while ( 2 )
      {
        v52 = (char *)v51 + v18;
        v33 = (const unsigned __int16 **)sub_407280((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
        v53 = v33;
        if ( !v33 )
        {
LABEL_240:
          v40 = (unsigned __int64)v51;
          v16 = v85;
          v15 = v84;
          v9 = v76;
          LODWORD(v13) = v11 ^ 1;
          v10 = v77;
          v17 = v74;
          v19 = v75;
          LOBYTE(v13) = v68 & (v11 ^ 1);
          goto LABEL_241;
        }
        if ( v33 == (const unsigned __int16 **)-1 )
        {
          v40 = (unsigned __int64)v51;
          v16 = v85;
          v11 = 0;
          v15 = v84;
          v9 = v76;
          v10 = v77;
          v17 = v74;
          v19 = v75;
          LODWORD(v13) = (unsigned __int8)v68;
          goto LABEL_241;
        }
        if ( v33 == (const unsigned __int16 **)-2 )
        {
          v17 = v74;
          v62 = (char *)v51 + v18;
          v63 = (char *)v51 + v18 + (_QWORD)s;
          v33 = v51;
          v40 = (unsigned __int64)v51;
          v15 = v84;
          v16 = v85;
          v9 = v76;
          v10 = v77;
          v19 = v75;
          if ( (unsigned __int64)v62 < v74 && *v63 )
          {
            do
              v33 = (const unsigned __int16 **)((char *)v33 + 1);
            while ( (unsigned __int64)v33 + v18 < v74 && *((_BYTE *)v33 + (_QWORD)v86) );
            v40 = (unsigned __int64)v33;
          }
          LODWORD(v13) = (unsigned __int8)v68;
          v11 = 0;
LABEL_241:
          if ( v40 > 1 )
            goto LABEL_173;
LABEL_100:
          if ( (_BYTE)v13 )
          {
            LODWORD(v13) = (unsigned __int8)v68;
            LOBYTE(v11) = 0;
LABEL_173:
            v55 = 0;
            v56 = v18 + v40;
            v57 = v69;
            while ( 1 )
            {
              if ( (_BYTE)v13 )
              {
                if ( v82 )
                  return sub_4041E0((__int64)v9, v10, s);
                LOBYTE(v33) = (v15 ^ 1) & (v19 == 2);
                if ( (_BYTE)v33 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 36;
                  if ( v10 > v16 + 2 )
                    v9[v16 + 2] = 39;
                  v16 += 3LL;
                  v15 = (signed int)v33;
                }
                if ( v10 > v16 )
                  v9[v16] = 92;
                if ( v10 > v16 + 1 )
                  v9[v16 + 1] = ((unsigned __int8)v28 >> 6) + 48;
                LODWORD(v33) = v16 + 2;
                if ( v10 > v16 + 2 )
                {
                  LODWORD(v33) = (((unsigned __int8)v28 >> 3) & 7) + 48;
                  v9[v16 + 2] = (_BYTE)v33;
                }
                ++v18;
                v16 += 3LL;
                LOBYTE(v28) = (v28 & 7) + 48;
                if ( v18 >= v56 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_40;
                }
                v55 = v13;
              }
              else
              {
                LODWORD(v33) = v15 & (v55 ^ 1);
                if ( v57 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 92;
                  ++v16;
                }
                if ( ++v18 >= v56 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_51;
                }
                if ( (_BYTE)v33 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  LODWORD(v33) = v16 + 1;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 39;
                  v16 += 2LL;
                  v57 = 0;
                  v15 = 0;
                }
                else
                {
                  v57 = 0;
                }
              }
              if ( v10 > v16 )
                v9[v16] = v28;
              LOBYTE(v28) = s[v18];
              ++v16;
            }
          }
LABEL_101:
          LOBYTE(v13) = v19 == 2;
LABEL_23:
          v30 = (v13 | (unsigned __int8)v68 ^ 1) ^ 1;
          LOBYTE(v30) = v82 | (v13 | v68 ^ 1) ^ 1;
          if ( !(v82 | (unsigned __int8)((v13 | v68 ^ 1) ^ 1)) )
            goto LABEL_49;
          goto LABEL_24;
        }
        if ( v75 != 2 || !v82 || v33 == (const unsigned __int16 **)1 )
        {
LABEL_148:
          if ( !iswprint(wc) )
            v11 = 0;
          v51 = (const unsigned __int16 **)((char *)v51 + (_QWORD)v53);
          LODWORD(v33) = mbsinit(&ps);
          if ( (_DWORD)v33 )
            goto LABEL_240;
          continue;
        }
        break;
      }
      v54 = &v52[(_QWORD)s + 1];
      while ( (unsigned __int8)(*v54 - 91) > 0x21u || !((1LL << (*v54 - 91)) & 0x20000002BLL) )
      {
        if ( &v52[(unsigned int)&s[(_QWORD)v53]] == ++v54 )
          goto LABEL_148;
      }
      v9 = v76;
      v10 = v77;
      return sub_4041E0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_405410(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int128 *v7; // rbx@1
  int *v8; // r13@1
  signed __int64 v9; // rsi@4
  __int128 *v10; // rax@5
  signed __int64 v11; // rbx@7
  _BYTE *v12; // r12@7
  unsigned __int64 v13; // ST30_8@7
  unsigned __int64 v14; // rax@7
  unsigned __int64 v15; // rsi@8
  __int64 v16; // ST30_8@9
  _BYTE *v17; // rax@10
  int v18; // er8@10
  __int128 *v20; // rax@12
  char *v21; // [sp+8h] [bp-50h]@1
  int v22; // [sp+18h] [bp-40h]@1
  int v23; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v21 = a2;
  v6 = __errno_location();
  v7 = off_60C298;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60C2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_406470();
    v9 = 16LL * (a1 + 1);
    if ( off_60C298 == &xmmword_60C2A0 )
    {
      LODWORD(v20) = sub_406280(0LL, v9);
      v7 = v20;
      off_60C298 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60C2A0);
    }
    else
    {
      LODWORD(v10) = sub_406280(off_60C298, v9);
      off_60C298 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60C2B0], 0, 16LL * (a1 + 1 - dword_60C2B0));
    dword_60C2B0 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_4041E0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60C320 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_406220(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_4041E0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_405410(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int128 *v7; // rbx@1
  int *v8; // r13@1
  signed __int64 v9; // rsi@4
  __int128 *v10; // rax@5
  signed __int64 v11; // rbx@7
  _BYTE *v12; // r12@7
  unsigned __int64 v13; // ST30_8@7
  unsigned __int64 v14; // rax@7
  unsigned __int64 v15; // rsi@8
  __int64 v16; // ST30_8@9
  _BYTE *v17; // rax@10
  int v18; // er8@10
  __int128 *v20; // rax@12
  char *v21; // [sp+8h] [bp-50h]@1
  int v22; // [sp+18h] [bp-40h]@1
  int v23; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v21 = a2;
  v6 = __errno_location();
  v7 = off_60C298;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60C2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_406470();
    v9 = 16LL * (a1 + 1);
    if ( off_60C298 == &xmmword_60C2A0 )
    {
      LODWORD(v20) = sub_406280(0LL, v9);
      v7 = v20;
      off_60C298 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60C2A0);
    }
    else
    {
      LODWORD(v10) = sub_406280(off_60C298, v9);
      off_60C298 = v10;
      v7 = v10;
    }
    memset(&v7[dword_60C2B0], 0, 16LL * (a1 + 1 - dword_60C2B0));
    dword_60C2B0 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_4041E0(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_60C320 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_406220(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_4041E0(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_405A30(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_60C450;
  v4 = _mm_load_si128((const __m128i *)&xmmword_60C420);
  v5 = _mm_load_si128((const __m128i *)&xmmword_60C430);
  v6 = _mm_load_si128((const __m128i *)&xmmword_60C440);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_405410(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_405AB0(char *a1)
{
  return sub_405A30(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_405AE0(int a1, int a2, char *a3)
{
  int v4; // [sp+0h] [bp-48h]@2
  int v5; // [sp+4h] [bp-44h]@2
  __int64 v6; // [sp+8h] [bp-40h]@2
  __int64 v7; // [sp+10h] [bp-38h]@2
  __int64 v8; // [sp+18h] [bp-30h]@2
  __int64 v9; // [sp+20h] [bp-28h]@2
  __int64 v10; // [sp+28h] [bp-20h]@2
  __int64 v11; // [sp+30h] [bp-18h]@2

  if ( a2 == 10 )
    abort();
  v4 = a2;
  v6 = 0x400000000000000LL;
  v5 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_405410(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_405AE0(int a1, int a2, char *a3)
{
  int v4; // [sp+0h] [bp-48h]@2
  int v5; // [sp+4h] [bp-44h]@2
  __int64 v6; // [sp+8h] [bp-40h]@2
  __int64 v7; // [sp+10h] [bp-38h]@2
  __int64 v8; // [sp+18h] [bp-30h]@2
  __int64 v9; // [sp+20h] [bp-28h]@2
  __int64 v10; // [sp+28h] [bp-20h]@2
  __int64 v11; // [sp+30h] [bp-18h]@2

  if ( a2 == 10 )
    abort();
  v4 = a2;
  v6 = 0x400000000000000LL;
  v5 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_405410(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_405C60(char *a1)
{
  return sub_405410(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60C260);
}

int __fastcall sub_405C80(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12@1
  __int64 v7; // rbx@1
  char *v8; // rax@3
  char *v9; // rax@3
  __int64 v10; // rax@5
  __int64 v11; // r8@5
  __int64 v12; // r13@5
  __int64 v13; // r12@5
  __int64 v14; // r15@5
  __int64 v15; // ST40_8@5
  __int64 v16; // r14@5
  __int64 v17; // rbx@5
  char *v18; // rax@5
  int result; // eax@6
  const char *v20; // rsi@7
  __int64 v21; // r8@7
  __int64 v22; // r13@7
  __int64 v23; // r12@7
  __int64 v24; // ST48_8@7
  __int64 v25; // r15@7
  __int64 v26; // r14@7
  __int64 v27; // ST40_8@7
  __int64 v28; // ST30_8@7
  __int64 v29; // rbx@9
  char *v30; // rax@9
  __int64 v31; // r12@10
  __int64 v32; // rbx@10
  char *v33; // rax@10
  __int64 v34; // r13@11
  __int64 v35; // r12@11
  __int64 v36; // rbx@11
  char *v37; // rax@11
  __int64 v38; // r14@12
  __int64 v39; // r13@12
  __int64 v40; // r12@12
  __int64 v41; // rbx@12
  char *v42; // rax@12
  __int64 v43; // r15@14
  __int64 v44; // r13@14
  __int64 v45; // r12@14
  __int64 v46; // r12@15
  __int64 v47; // r15@15
  __int64 v48; // r14@15
  __int64 v49; // ST30_8@15
  __int64 v50; // r13@15
  __int64 v51; // rbx@15
  char *v52; // rax@15
  __int64 v53; // r13@17
  __int64 v54; // r12@17
  __int64 v55; // r15@17
  __int64 v56; // r14@17
  __int64 v57; // r8@17
  __int64 v58; // ST38_8@17
  __int64 v59; // r8@18
  __int64 v60; // r13@18
  __int64 v61; // r12@18
  __int64 v62; // ST48_8@18
  __int64 v63; // r15@18
  __int64 v64; // r14@18
  __int64 v65; // ST40_8@18
  __int64 v66; // ST30_8@18

  v6 = a6;
  v7 = a5;
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
  switch ( v6 )
  {
    case 0LL:
      abort();
      return result;
    case 8LL:
      v10 = *(_QWORD *)(v7 + 16);
      v11 = *(_QWORD *)(v7 + 8);
      v12 = *(_QWORD *)(v7 + 48);
      v13 = *(_QWORD *)(v7 + 40);
      v14 = *(_QWORD *)(v7 + 32);
      v15 = *(_QWORD *)(v7 + 56);
      v16 = *(_QWORD *)(v7 + 24);
      v17 = *(_QWORD *)v7;
      v18 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_6;
    case 9LL:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v21 = *(_QWORD *)(v7 + 8);
      v22 = *(_QWORD *)(v7 + 48);
      v23 = *(_QWORD *)(v7 + 40);
      v24 = *(_QWORD *)(v7 + 64);
      v25 = *(_QWORD *)(v7 + 32);
      v26 = *(_QWORD *)(v7 + 24);
      v27 = *(_QWORD *)(v7 + 56);
      v28 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
      goto LABEL_8;
    case 1LL:
      v29 = *(_QWORD *)v7;
      v30 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29);
    case 2LL:
      v31 = *(_QWORD *)(v7 + 8);
      v32 = *(_QWORD *)v7;
      v33 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v33, v32);
    case 3LL:
      v34 = *(_QWORD *)(v7 + 16);
      v35 = *(_QWORD *)(v7 + 8);
      v36 = *(_QWORD *)v7;
      v37 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v37, v36);
    case 4LL:
      v38 = *(_QWORD *)(v7 + 24);
      v39 = *(_QWORD *)(v7 + 16);
      v40 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v43 = *(_QWORD *)(v7 + 32);
      v38 = *(_QWORD *)(v7 + 24);
      v44 = *(_QWORD *)(v7 + 16);
      v45 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v42, v41);
      return v38;
    case 6LL:
      v46 = *(_QWORD *)(v7 + 40);
      v47 = *(_QWORD *)(v7 + 32);
      v48 = *(_QWORD *)(v7 + 24);
      v49 = *(_QWORD *)(v7 + 8);
      v50 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      goto LABEL_16;
    case 7LL:
      v53 = *(_QWORD *)(v7 + 48);
      v54 = *(_QWORD *)(v7 + 40);
      v55 = *(_QWORD *)(v7 + 32);
      v56 = *(_QWORD *)(v7 + 24);
      v57 = *(_QWORD *)(v7 + 8);
      v58 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
LABEL_16:
      result = __fprintf_chk(stream, 1LL, v52, v51);
      break;
    default:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = *(_QWORD *)(v7 + 8);
      v60 = *(_QWORD *)(v7 + 48);
      v61 = *(_QWORD *)(v7 + 40);
      v62 = *(_QWORD *)(v7 + 64);
      v63 = *(_QWORD *)(v7 + 32);
      v64 = *(_QWORD *)(v7 + 24);
      v65 = *(_QWORD *)(v7 + 56);
      v66 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
LABEL_8:
      v18 = dcgettext(0LL, v20, 5);
LABEL_6:
      result = __fprintf_chk(stream, 1LL, v18, v17);
      break;
  }
  return result;
}

int __fastcall sub_405C80(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12@1
  __int64 v7; // rbx@1
  char *v8; // rax@3
  char *v9; // rax@3
  __int64 v10; // rax@5
  __int64 v11; // r8@5
  __int64 v12; // r13@5
  __int64 v13; // r12@5
  __int64 v14; // r15@5
  __int64 v15; // ST40_8@5
  __int64 v16; // r14@5
  __int64 v17; // rbx@5
  char *v18; // rax@5
  int result; // eax@6
  const char *v20; // rsi@7
  __int64 v21; // r8@7
  __int64 v22; // r13@7
  __int64 v23; // r12@7
  __int64 v24; // ST48_8@7
  __int64 v25; // r15@7
  __int64 v26; // r14@7
  __int64 v27; // ST40_8@7
  __int64 v28; // ST30_8@7
  __int64 v29; // rbx@9
  char *v30; // rax@9
  __int64 v31; // r12@10
  __int64 v32; // rbx@10
  char *v33; // rax@10
  __int64 v34; // r13@11
  __int64 v35; // r12@11
  __int64 v36; // rbx@11
  char *v37; // rax@11
  __int64 v38; // r14@12
  __int64 v39; // r13@12
  __int64 v40; // r12@12
  __int64 v41; // rbx@12
  char *v42; // rax@12
  __int64 v43; // r15@14
  __int64 v44; // r13@14
  __int64 v45; // r12@14
  __int64 v46; // r12@15
  __int64 v47; // r15@15
  __int64 v48; // r14@15
  __int64 v49; // ST30_8@15
  __int64 v50; // r13@15
  __int64 v51; // rbx@15
  char *v52; // rax@15
  __int64 v53; // r13@17
  __int64 v54; // r12@17
  __int64 v55; // r15@17
  __int64 v56; // r14@17
  __int64 v57; // r8@17
  __int64 v58; // ST38_8@17
  __int64 v59; // r8@18
  __int64 v60; // r13@18
  __int64 v61; // r12@18
  __int64 v62; // ST48_8@18
  __int64 v63; // r15@18
  __int64 v64; // r14@18
  __int64 v65; // ST40_8@18
  __int64 v66; // ST30_8@18

  v6 = a6;
  v7 = a5;
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
  switch ( v6 )
  {
    case 0LL:
      abort();
      return result;
    case 8LL:
      v10 = *(_QWORD *)(v7 + 16);
      v11 = *(_QWORD *)(v7 + 8);
      v12 = *(_QWORD *)(v7 + 48);
      v13 = *(_QWORD *)(v7 + 40);
      v14 = *(_QWORD *)(v7 + 32);
      v15 = *(_QWORD *)(v7 + 56);
      v16 = *(_QWORD *)(v7 + 24);
      v17 = *(_QWORD *)v7;
      v18 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_6;
    case 9LL:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v21 = *(_QWORD *)(v7 + 8);
      v22 = *(_QWORD *)(v7 + 48);
      v23 = *(_QWORD *)(v7 + 40);
      v24 = *(_QWORD *)(v7 + 64);
      v25 = *(_QWORD *)(v7 + 32);
      v26 = *(_QWORD *)(v7 + 24);
      v27 = *(_QWORD *)(v7 + 56);
      v28 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
      goto LABEL_8;
    case 1LL:
      v29 = *(_QWORD *)v7;
      v30 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29);
    case 2LL:
      v31 = *(_QWORD *)(v7 + 8);
      v32 = *(_QWORD *)v7;
      v33 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v33, v32);
    case 3LL:
      v34 = *(_QWORD *)(v7 + 16);
      v35 = *(_QWORD *)(v7 + 8);
      v36 = *(_QWORD *)v7;
      v37 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v37, v36);
    case 4LL:
      v38 = *(_QWORD *)(v7 + 24);
      v39 = *(_QWORD *)(v7 + 16);
      v40 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v43 = *(_QWORD *)(v7 + 32);
      v38 = *(_QWORD *)(v7 + 24);
      v44 = *(_QWORD *)(v7 + 16);
      v45 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v42, v41);
      return v38;
    case 6LL:
      v46 = *(_QWORD *)(v7 + 40);
      v47 = *(_QWORD *)(v7 + 32);
      v48 = *(_QWORD *)(v7 + 24);
      v49 = *(_QWORD *)(v7 + 8);
      v50 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      goto LABEL_16;
    case 7LL:
      v53 = *(_QWORD *)(v7 + 48);
      v54 = *(_QWORD *)(v7 + 40);
      v55 = *(_QWORD *)(v7 + 32);
      v56 = *(_QWORD *)(v7 + 24);
      v57 = *(_QWORD *)(v7 + 8);
      v58 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
LABEL_16:
      result = __fprintf_chk(stream, 1LL, v52, v51);
      break;
    default:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = *(_QWORD *)(v7 + 8);
      v60 = *(_QWORD *)(v7 + 48);
      v61 = *(_QWORD *)(v7 + 40);
      v62 = *(_QWORD *)(v7 + 64);
      v63 = *(_QWORD *)(v7 + 32);
      v64 = *(_QWORD *)(v7 + 24);
      v65 = *(_QWORD *)(v7 + 56);
      v66 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
LABEL_8:
      v18 = dcgettext(0LL, v20, 5);
LABEL_6:
      result = __fprintf_chk(stream, 1LL, v18, v17);
      break;
  }
  return result;
}

int __fastcall sub_406080(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r9@1
  __int64 *v6; // r10@2
  __int64 v7; // rax@2
  unsigned int v8; // eax@4
  __int64 *v9; // r10@5
  __int64 v10; // rax@5
  __int64 v12[11]; // [sp+0h] [bp-58h]@2

  v5 = 0LL;
  do
  {
    v8 = *(_DWORD *)a5;
    if ( *(_DWORD *)a5 <= 0x2Fu )
    {
      v6 = (__int64 *)(*(_QWORD *)(a5 + 16) + v8);
      *(_DWORD *)a5 = v8 + 8;
      v7 = *v6;
      v12[v5] = *v6;
      if ( !v7 )
        return sub_405C80(a1, a2, a3, a4, (__int64)v12, v5);
      goto LABEL_3;
    }
    v9 = *(__int64 **)(a5 + 8);
    *(_QWORD *)(a5 + 8) = v9 + 1;
    v10 = *v9;
    v12[v5] = *v9;
    if ( !v10 )
      break;
LABEL_3:
    ++v5;
  }
  while ( v5 != 10 );
  return sub_405C80(a1, a2, a3, a4, (__int64)v12, v5);
}

void *__fastcall sub_406220(size_t a1)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_406470();
  }
  return result;
}

void *__fastcall sub_406280(void *a1, size_t a2)
{
  void *result; // rax@3

  if ( !a2 && a1 )
  {
    free(a1);
    result = 0LL;
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

void *__fastcall sub_406420(void *src, size_t n)
{
  void *v2; // rax@1

  v2 = sub_406220(n);
  return memcpy(v2, src, n);
}

noreturn void  sub_406470()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_4064B0(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r11@1
  int v3; // er12@1
  int v4; // ebp@1
  __int64 v5; // rbx@1
  int v6; // er9@1
  int v7; // er10@1
  int v8; // er8@1
  int v9; // er14@4
  int v10; // edx@4
  __int64 *v11; // rax@5
  unsigned __int64 v12; // r13@5
  signed __int64 v13; // rdx@5
  __int64 v14; // rcx@6
  __int64 result; // rax@8
  __int64 *v16; // rax@9
  __int64 v17; // rdx@9
  __int64 v18; // rcx@10

  v2 = a1 + 8;
  v3 = *(_DWORD *)(a2 + 44);
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 48);
  v6 = *(_DWORD *)(a2 + 44);
  v7 = *(_DWORD *)a2;
  v8 = *(_DWORD *)(a2 + 48);
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
      v12 = v2 + 8 * (v6 + (unsigned __int64)(unsigned int)(v10 - 1));
      v13 = v7 - (signed __int64)v6;
      do
      {
        v14 = *v11;
        *v11 = v11[v13];
        v11[v13] = v14;
        ++v11;
      }
      while ( (__int64 *)v12 != v11 );
      if ( v7 <= v8 )
        break;
    }
  }
  *(_DWORD *)(a2 + 48) = v4;
  result = (unsigned int)(v4 - v8);
  *(_DWORD *)(a2 + 44) = result + v3;
  return result;
}

signed __int64 __fastcall sub_406590(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
{
  const char *v9; // r14@1
  char *v10; // rbp@1
  size_t v11; // r13@5
  char **v12; // rbx@6
  __int64 v13; // r12@6
  const char *v14; // r15@6
  const char *v15; // rdi@12
  __int64 v16; // r15@12
  char **v17; // rbp@12
  char *v18; // rdx@26
  signed __int64 result; // rax@26
  int v20; // edx@31
  int v21; // eax@31
  int v22; // ecx@31
  char *v23; // rdx@35
  __int64 v24; // rbx@28
  char *v25; // rax@28
  __int64 v26; // rbx@49
  char *v27; // rax@49
  const char *v28; // r12@57
  __int64 v29; // rbp@57
  char *v30; // rax@57
  __int64 v31; // rbx@64
  __int64 v32; // rbp@64
  char *v33; // rax@64
  FILE *v34; // rdi@64
  char **v35; // rbx@64
  _BYTE *v36; // rbp@64
  signed __int64 v37; // r12@64
  char *v38; // r8@67
  const char *v39; // r12@62
  __int64 v40; // rbp@62
  char *v41; // rax@62
  char **v42; // [sp+0h] [bp-88h]@1
  int v43; // [sp+Ch] [bp-7Ch]@1
  char *s1; // [sp+10h] [bp-78h]@6
  char *s1a; // [sp+10h] [bp-78h]@12
  _BYTE *ptr; // [sp+18h] [bp-70h]@12
  _DWORD *v47; // [sp+20h] [bp-68h]@1
  char *s; // [sp+30h] [bp-58h]@1
  signed int v49; // [sp+38h] [bp-50h]@12
  char v50; // [sp+3Fh] [bp-49h]@1
  int v51; // [sp+40h] [bp-48h]@1
  signed int v52; // [sp+44h] [bp-44h]@12
  signed int v53; // [sp+48h] [bp-40h]@12

  v51 = a1;
  v9 = *(const char **)(a7 + 32);
  s = a3;
  v42 = a4;
  v47 = a5;
  v10 = *(char **)(a7 + 32);
  v43 = a6;
  v50 = *v9;
  if ( *v9 != 61 && *v9 )
  {
    do
      ++v10;
    while ( *v10 && *v10 != 61 );
    v11 = v10 - v9;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = a4;
  v13 = 0LL;
  s1 = *a4;
  v14 = *a4;
  if ( !*a4 )
  {
LABEL_24:
    if ( !v43 || *(_BYTE *)(a2[*(_DWORD *)a7] + 1) == 45 || (v18 = strchr(s, v50), result = 0xFFFFFFFFLL, !v18) )
    {
      if ( a8 )
      {
        v24 = *a2;
        v25 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v25, v24);
      }
      *(_QWORD *)(a7 + 32) = 0LL;
      ++*(_DWORD *)a7;
      *(_DWORD *)(a7 + 8) = 0;
      result = 63LL;
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
    v13 = (signed int)v13 + 1;
  }
  v12 = 0LL;
  v52 = -1;
  v15 = s1;
  v16 = 0LL;
  v49 = 0;
  v53 = 0;
  ptr = 0LL;
  s1a = v10;
  v17 = v42;
  do
  {
    if ( strncmp(v15, v9, v11) )
      goto LABEL_20;
    if ( v12 )
    {
      if ( (v43
         || *((_DWORD *)v12 + 2) != *((_DWORD *)v17 + 2)
         || v12[2] != v17[2]
         || *((_DWORD *)v12 + 6) != *((_DWORD *)v17 + 6))
        && !v49 )
      {
        if ( a8 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((signed int)v13 + 1, 1uLL);
          if ( ptr )
          {
            v53 = 1;
            ptr[v52] = 1;
LABEL_19:
            ptr[v16] = 1;
            goto LABEL_20;
          }
          v49 = 1;
        }
        else
        {
          v49 = 1;
          if ( ptr )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v52 = v16;
      v12 = v17;
    }
LABEL_20:
    v17 += 4;
    v15 = *v17;
    ++v16;
  }
  while ( *v17 );
  v10 = s1a;
  if ( ptr || v49 )
  {
    if ( a8 )
    {
      if ( v49 )
      {
        v26 = *a2;
        v27 = dcgettext(0LL, "%s: option '%s%s' is ambiguous\n", 5);
        __fprintf_chk(stderr, 1LL, v27, v26);
        v9 = *(const char **)(a7 + 32);
      }
      else
      {
        flockfile(stderr);
        v31 = *(_QWORD *)(a7 + 32);
        v32 = *a2;
        v33 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v33, v32);
        v34 = stderr;
        v35 = v42;
        v36 = ptr;
        v37 = (signed __int64)&ptr[v13 + 1];
        do
        {
          if ( *v36 )
          {
            v38 = *v35;
            __fprintf_chk(v34, 1LL, " '%s%s'", a9);
            v34 = stderr;
          }
          ++v36;
          v35 += 4;
        }
        while ( (_BYTE *)v37 != v36 );
        fputc(10, v34);
        funlockfile(stderr);
        v9 = *(const char **)(a7 + 32);
      }
    }
    if ( v53 )
      free(ptr);
    *(_QWORD *)(a7 + 32) = &v9[strlen(v9)];
    ++*(_DWORD *)a7;
    *(_DWORD *)(a7 + 8) = 0;
    result = 63LL;
  }
  else
  {
    if ( !v12 )
      goto LABEL_24;
    LODWORD(v13) = v52;
LABEL_31:
    v20 = *(_DWORD *)a7;
    *(_QWORD *)(a7 + 32) = 0LL;
    v21 = v20 + 1;
    *(_DWORD *)a7 = v20 + 1;
    v22 = *((_DWORD *)v12 + 2);
    if ( *v10 )
    {
      if ( v22 )
      {
        *(_QWORD *)(a7 + 16) = v10 + 1;
        goto LABEL_33;
      }
      if ( a8 )
      {
        v28 = *v12;
        v29 = *a2;
        v30 = dcgettext(0LL, "%s: option '%s%s' doesn't allow an argument\n", 5);
        __fprintf_chk(stderr, 1LL, v30, v29);
      }
      *(_DWORD *)(a7 + 8) = *((_DWORD *)v12 + 6);
      result = 63LL;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_33;
      if ( v21 >= v51 )
      {
        if ( a8 )
        {
          v39 = *v12;
          v40 = *a2;
          v41 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v41, v40);
        }
        *(_DWORD *)(a7 + 8) = *((_DWORD *)v12 + 6);
        result = 5 * (unsigned int)(*s != 58) + 58;
      }
      else
      {
        *(_DWORD *)a7 = v20 + 2;
        *(_QWORD *)(a7 + 16) = a2[v21];
LABEL_33:
        if ( v47 )
          *v47 = v13;
        v23 = v12[2];
        result = *((_DWORD *)v12 + 6);
        if ( v23 )
        {
          *(_DWORD *)v23 = result;
          result = 0LL;
        }
      }
    }
  }
  return result;
}

__int64 __fastcall sub_406BB0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
{
  int v8; // er13@1
  signed int v9; // eax@2
  int v10; // ebp@2
  __int64 *v11; // r12@2
  char *v12; // r15@2
  _BYTE *v13; // rdx@6
  char v14; // al@8
  char v15; // al@9
  unsigned int v16; // eax@12
  bool v17; // cf@17
  bool v18; // zf@17
  signed __int64 v19; // rcx@18
  const char *v20; // rdi@18
  __int64 v21; // r14@18
  _BYTE *v22; // rsi@18
  int v23; // edx@22
  int v24; // ecx@22
  int v25; // eax@22
  int v26; // er14@32
  char *v27; // rax@32
  signed __int64 v28; // r8@32
  char v29; // cl@36
  signed int v31; // edx@47
  int v32; // ST3C_4@49
  __int64 v33; // rax@51
  __int64 v34; // rcx@53
  int v35; // esi@53
  char v36; // cl@57
  int v37; // ST3C_4@62
  char *v38; // rax@62
  __int64 v39; // rax@69
  unsigned int v40; // eax@71
  int v41; // ST3C_4@73
  char *v42; // rax@73
  char v43; // dl@75
  __int64 v44; // rax@76
  int v45; // edx@78
  __int64 v46; // rax@78
  __int64 v47; // rbp@85
  char *v48; // rax@85
  __int64 v49; // rbp@94
  char *v50; // rax@94
  __int64 v51; // rbp@98
  char *v52; // rax@98
  char **v53; // [sp+8h] [bp-60h]@1
  _DWORD *v54; // [sp+10h] [bp-58h]@1
  char v55; // [sp+1Ch] [bp-4Ch]@32
  _BYTE *v56; // [sp+20h] [bp-48h]@32
  signed __int64 v57; // [sp+28h] [bp-40h]@32

  v53 = a4;
  v54 = a5;
  v8 = *(_DWORD *)(a7 + 4);
  if ( a1 <= 0 )
    goto LABEL_46;
  v9 = *(_DWORD *)a7;
  v10 = a1;
  v11 = (__int64 *)a2;
  v12 = a3;
  *(_QWORD *)(a7 + 16) = 0LL;
  if ( !v9 )
  {
    *(_DWORD *)a7 = 1;
    v9 = 1;
LABEL_4:
    *(_DWORD *)(a7 + 48) = v9;
    *(_DWORD *)(a7 + 44) = v9;
    *(_QWORD *)(a7 + 32) = 0LL;
    if ( *a3 == 45 )
    {
      *(_DWORD *)(a7 + 40) = 2;
      v12 = a3 + 1;
      v13 = 0LL;
    }
    else if ( *a3 == 43 )
    {
      *(_DWORD *)(a7 + 40) = 0;
      v12 = a3 + 1;
      v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
      if ( !a8 )
      {
        v41 = a6;
        v42 = getenv("POSIXLY_CORRECT");
        a6 = v41;
        if ( !v42 )
        {
          *(_DWORD *)(a7 + 40) = 1;
          v13 = *(_BYTE **)(a7 + 32);
          goto LABEL_27;
        }
        v13 = *(_BYTE **)(a7 + 32);
      }
      *(_DWORD *)(a7 + 40) = 0;
    }
LABEL_27:
    *(_DWORD *)(a7 + 24) = 1;
    v14 = *v12;
    goto LABEL_28;
  }
  if ( !*(_DWORD *)(a7 + 24) )
    goto LABEL_4;
  v14 = *a3;
  v13 = *(_BYTE **)(a7 + 32);
  if ( !((v14 - 43) & 0xFD) )
  {
    v15 = (v12++)[1];
    if ( v15 == 58 )
      v8 = 0;
    if ( !v13 )
      goto LABEL_12;
    goto LABEL_31;
  }
LABEL_28:
  if ( v14 == 58 )
    v8 = 0;
  if ( !v13 )
    goto LABEL_12;
LABEL_31:
  if ( !*v13 )
  {
LABEL_12:
    v16 = *(_DWORD *)a7;
    if ( *(_DWORD *)(a7 + 48) > *(_DWORD *)a7 )
      *(_DWORD *)(a7 + 48) = v16;
    if ( (signed int)v16 < *(_DWORD *)(a7 + 44) )
      *(_DWORD *)(a7 + 44) = v16;
    if ( *(_DWORD *)(a7 + 40) == 1 )
    {
      v31 = *(_DWORD *)(a7 + 48);
      if ( *(_DWORD *)(a7 + 44) == v31 )
      {
        if ( v16 != v31 )
        {
          *(_DWORD *)(a7 + 44) = v16;
          v31 = v16;
        }
      }
      else if ( v16 != v31 )
      {
        v32 = a6;
        sub_4064B0(a2, a7);
        v31 = *(_DWORD *)a7;
        a6 = v32;
      }
      if ( a1 <= v31 )
      {
LABEL_82:
        v16 = v31;
      }
      else
      {
        v33 = v31;
        while ( 1 )
        {
          v34 = v11[v33];
          v35 = v33;
          v31 = v33;
          if ( *(_BYTE *)v34 == 45 )
          {
            if ( *(_BYTE *)(v34 + 1) )
              break;
          }
          v31 = v33++ + 1;
          *(_DWORD *)a7 = v35 + 1;
          if ( a1 <= (signed int)v33 )
            goto LABEL_82;
        }
        v16 = *(_DWORD *)a7;
      }
      *(_DWORD *)(a7 + 48) = v31;
    }
    v17 = a1 < v16;
    v18 = a1 == v16;
    if ( a1 == v16 )
    {
      v10 = *(_DWORD *)(a7 + 48);
      v23 = *(_DWORD *)(a7 + 44);
LABEL_44:
      if ( v23 != v10 )
        *(_DWORD *)a7 = v23;
      goto LABEL_46;
    }
    v19 = 3LL;
    v20 = "--";
    v21 = v11[v16];
    v22 = (_BYTE *)v11[v16];
    do
    {
      if ( !v19 )
        break;
      v17 = *v22 < (const unsigned __int8)*v20;
      v18 = *v22++ == *v20++;
      --v19;
    }
    while ( v18 );
    if ( (!v17 && !v18) == v17 )
    {
      v23 = *(_DWORD *)(a7 + 44);
      v24 = *(_DWORD *)(a7 + 48);
      v25 = v16 + 1;
      *(_DWORD *)a7 = v25;
      if ( v23 == v24 )
      {
        *(_DWORD *)(a7 + 44) = v25;
        v23 = v25;
      }
      else if ( v25 != v24 )
      {
        sub_4064B0((__int64)v11, a7);
        v23 = *(_DWORD *)(a7 + 44);
      }
      *(_DWORD *)(a7 + 48) = v10;
      *(_DWORD *)a7 = v10;
      goto LABEL_44;
    }
    if ( *(_BYTE *)v21 == 45 )
    {
      v36 = *(_BYTE *)(v21 + 1);
      if ( v36 )
      {
        if ( v53 )
        {
          if ( v36 == 45 )
          {
            *(_QWORD *)(a7 + 32) = v21 + 2;
            v40 = sub_406590(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_406590(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
              if ( v26 != -1 )
                return (unsigned int)v26;
              v21 = v11[*(_DWORD *)a7];
            }
          }
        }
        v13 = (_BYTE *)(v21 + 1);
        goto LABEL_32;
      }
    }
    if ( *(_DWORD *)(a7 + 40) )
    {
      *(_QWORD *)(a7 + 16) = v21;
      v26 = 1;
      *(_DWORD *)a7 = v16 + 1;
      return (unsigned int)v26;
    }
LABEL_46:
    return (unsigned int)-1;
  }
LABEL_32:
  v56 = v13;
  *(_QWORD *)(a7 + 32) = v13 + 1;
  v26 = *v13;
  v57 = (signed __int64)(v13 + 1);
  v55 = *v13;
  v27 = strchr(v12, v26);
  v28 = v57;
  if ( !v56[1] )
    ++*(_DWORD *)a7;
  if ( (unsigned __int8)(v55 - 58) > 1u && v27 )
  {
    v29 = v27[1];
    if ( *v27 == 87 && v53 && v29 == 59 )
    {
      if ( v56[1] )
      {
LABEL_71:
        *(_QWORD *)(a7 + 32) = v28;
        *(_QWORD *)(a7 + 16) = 0LL;
        v40 = sub_406590(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
LABEL_72:
        return v40;
      }
      v39 = *(_DWORD *)a7;
      if ( (_DWORD)v39 != v10 )
      {
        v28 = v11[v39];
        goto LABEL_71;
      }
      if ( v8 )
      {
        v51 = *v11;
        v52 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v52, v51);
      }
      *(_DWORD *)(a7 + 8) = v26;
      v26 = 5 * (*v12 != 58) + 58;
    }
    else if ( v29 == 58 )
    {
      v43 = v56[1];
      if ( v27[2] == 58 )
      {
        if ( v43 )
        {
          *(_QWORD *)(a7 + 16) = v57;
          ++*(_DWORD *)a7;
        }
        else
        {
          *(_QWORD *)(a7 + 16) = 0LL;
        }
      }
      else
      {
        v44 = *(_DWORD *)a7;
        if ( v43 )
        {
          *(_QWORD *)(a7 + 16) = v57;
          *(_DWORD *)a7 = v44 + 1;
        }
        else if ( v10 == (_DWORD)v44 )
        {
          if ( v8 )
          {
            v49 = *v11;
            v50 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v50, v49);
          }
          *(_DWORD *)(a7 + 8) = v26;
          v26 = 5 * (*v12 != 58) + 58;
        }
        else
        {
          v45 = v44 + 1;
          v46 = v11[v44];
          *(_DWORD *)a7 = v45;
          *(_QWORD *)(a7 + 16) = v46;
        }
      }
      *(_QWORD *)(a7 + 32) = 0LL;
    }
  }
  else
  {
    if ( v8 )
    {
      v47 = *v11;
      v48 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
      __fprintf_chk(stderr, 1LL, v48, v47);
    }
    *(_DWORD *)(a7 + 8) = v26;
    v26 = 63;
  }
  return (unsigned int)v26;
}

__int64 __fastcall sub_407180(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_60C460 = dword_60C2BC;
  dword_60C464 = dword_60C2B8;
  result = sub_406BB0(a1, a2, a3, a4, a5, a6, (__int64)&dword_60C460, a7);
  dword_60C2BC = dword_60C460;
  qword_60C4B0 = qword_60C470;
  dword_60C2B4 = dword_60C468;
  return result;
}

__int64 __fastcall sub_407200(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_407180(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_407280(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx@2
  wchar_t *v5; // r12@3
  char *v6; // rbp@3
  char v8; // [sp+Ch] [bp-1Ch]@7

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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_407B10(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

__int64 __fastcall sub_407360(const char *a1, unsigned __int64 *a2, _QWORD *a3, char a4)
{
  void *v4; // r14@1
  int v5; // er13@1
  int v6; // er12@1
  signed __int64 v7; // rbp@1
  unsigned __int64 v8; // rbx@1
  struct utmpx *v9; // r15@2
  signed __int64 v10; // rdx@7
  signed __int64 v11; // rax@8
  char *v12; // rax@8
  __pid_t v14; // edi@11
  signed __int64 v15; // rdx@17
  size_t v16; // rsi@17
  signed __int64 v17; // ST18_8@18
  void *v18; // rax@18
  unsigned __int64 *v19; // [sp+8h] [bp-50h]@1
  _QWORD *v20; // [sp+10h] [bp-48h]@1

  v4 = 0LL;
  v5 = a4 & 1;
  v6 = a4 & 2;
  v7 = 0LL;
  v8 = 0LL;
  v19 = a2;
  v20 = a3;
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
        v14 = v9->ut_pid;
        if ( v14 <= 0 || kill(v14, 0) >= 0 )
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
          if ( (384 * v8 & 0x8000000000000000LL) != 0LL || 384 * (unsigned __int128)v8 >> 64 != 0 )
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
        v17 = v15;
        v18 = sub_406280(v4, v16);
        v10 = v17;
        v4 = v18;
LABEL_8:
        v11 = 3 * v8;
        v8 = v10;
        v12 = (char *)v4 + 128 * v11;
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
  *v19 = v8;
  *v20 = v4;
  return 0LL;
}

__int64 __fastcall sub_407510(__int64 a1)
{
  int v1; // eax@2
  signed int v2; // edx@3

  if ( *(_BYTE *)(a1 + 8) )
    v1 = setenv("TZ", (const char *)(a1 + 9), 1);
  else
    v1 = unsetenv("TZ");
  v2 = 0;
  if ( !v1 )
  {
    tzset();
    v2 = 1;
  }
  return (unsigned int)v2;
}

void __fastcall sub_407560(void *a1)
{
  void *v1; // rbx@2

  if ( a1 )
  {
    do
    {
      v1 = *(void **)a1;
      free(a1);
      a1 = v1;
    }
    while ( v1 );
  }
}

__int64 __fastcall sub_407590(void *a1)
{
  int *v1; // rbx@1
  int v2; // er13@1
  unsigned int v3; // ebp@1

  v1 = __errno_location();
  v2 = *v1;
  v3 = sub_407510((__int64)a1);
  if ( !(_BYTE)v3 )
    v2 = *v1;
  sub_407560(a1);
  *v1 = v2;
  return v3;
}

_BYTE *__fastcall sub_4075E0(void *src)
{
  void *v1; // r12@2
  size_t v2; // rax@2
  signed __int64 v3; // rdi@2
  size_t v4; // rbp@2
  void *v5; // rax@4
  _BYTE *v6; // rbx@4
  _BYTE *result; // rax@6

  if ( src )
  {
    v1 = src;
    v2 = strlen((const char *)src);
    v3 = 118LL;
    v4 = v2 + 1;
    if ( v2 + 1 >= 0x76 )
      v3 = v2 + 1;
    v5 = malloc((v3 + 17) & 0xFFFFFFFFFFFFFFF8LL);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = 0LL;
      *((_WORD *)v5 + 4) = 1;
      memcpy((char *)v5 + 9, v1, v4);
      v6[v4 + 9] = 0;
    }
    return v6;
  }
  result = malloc(0x80uLL);
  v6 = result;
  if ( !result )
    return v6;
  *(_QWORD *)result = 0LL;
  *((_WORD *)result + 4) = 0;
  return result;
}

signed __int64 __fastcall sub_407670(__int64 a1, unsigned __int64 a2)
{
  const char *v2; // r12@1
  __int64 v3; // rbp@2
  signed __int64 result; // rax@3
  const char *v5; // rbx@4
  signed __int64 v6; // r14@7
  __int64 v7; // rax@10
  size_t v8; // r15@16
  const char *v9; // rax@16
  _BYTE *v10; // rax@21

  v2 = *(const char **)(a2 + 48);
  if ( !v2 )
    return 1LL;
  v3 = a1;
  if ( a2 > (unsigned __int64)v2 || (result = 1LL, (unsigned __int64)v2 >= a2 + 56) )
  {
    v5 = (const char *)(a1 + 9);
    if ( !*v2 )
    {
      v5 = "%s: invalid option -- '%c'\n" + 27;
      goto LABEL_12;
    }
LABEL_5:
    if ( !strcmp(v5, v2) )
      goto LABEL_12;
    while ( 1 )
    {
      if ( !*v5 )
      {
        v6 = v3 + 9;
        if ( (const char *)(v3 + 9) != v5 )
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
            memcpy((void *)v5, v2, v8);
            v5[v8] = 0;
            goto LABEL_12;
          }
          v10 = sub_4075E0((void *)v2);
          *(_QWORD *)v3 = v10;
          if ( v10 )
          {
            v10[8] = 0;
            v5 = v10 + 9;
LABEL_12:
            *(_QWORD *)(a2 + 48) = v5;
            result = 1LL;
          }
          else
          {
            result = 0LL;
          }
          return result;
        }
        if ( !*(_BYTE *)(v3 + 8) )
        {
          v8 = strlen(v2) + 1;
          v9 = 0LL;
          goto LABEL_19;
        }
      }
      v5 += strlen(v5) + 1;
      if ( *v5 )
        goto LABEL_5;
      v7 = *(_QWORD *)v3;
      if ( !*(_QWORD *)v3 )
        goto LABEL_5;
      v5 = (const char *)(v7 + 9);
      v3 = *(_QWORD *)v3;
      if ( !strcmp((const char *)(v7 + 9), v2) )
        goto LABEL_12;
    }
  }
  return result;
}

signed __int64 __fastcall sub_4077F0(__int64 a1)
{
  char *v1; // rax@1
  char *v2; // rbp@1
  _BYTE *v3; // rbx@3
  signed __int64 result; // rax@5
  int *v5; // rbp@10
  int v6; // er12@10

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
  if ( v3 && !(unsigned __int8)sub_407510(a1) )
  {
    v5 = __errno_location();
    v6 = *v5;
    if ( v3 != (_BYTE *)1 )
      sub_407560(v3);
    *v5 = v6;
    result = 0LL;
  }
  else
  {
    result = (signed __int64)v3;
  }
  return result;
}

int __fastcall sub_407970(__int64 a1, unsigned __int64 a2)
{
  void *v2; // r12@2
  time_t v3; // rax@3
  int result; // eax@8
  int v5; // eax@11
  time_t timer; // [sp+8h] [bp-60h]@3
  struct tm tp; // [sp+10h] [bp-58h]@10

  if ( a1 )
  {
    v2 = (void *)sub_4077F0(a1);
    if ( !v2 )
      goto LABEL_20;
    LODWORD(v3) = sub_4088C0(a2);
    timer = v3;
    if ( v3 != -1
      || localtime_r(&timer, &tp)
      && ((v5 = *(_DWORD *)(a2 + 32), (v5 == 0) == (tp.tm_isdst == 0)) || v5 < 0 || tp.tm_isdst < 0)
      && !(tp.tm_sec ^ *(_DWORD *)a2 | tp.tm_min ^ *(_DWORD *)(a2 + 4) | tp.tm_hour ^ *(_DWORD *)(a2 + 8) | tp.tm_mday ^ *(_DWORD *)(a2 + 12) | tp.tm_year ^ *(_DWORD *)(a2 + 20) | tp.tm_mon ^ *(_DWORD *)(a2 + 16)) )
    {
      if ( !(unsigned __int8)sub_407670(a1, a2) )
        timer = -1LL;
    }
    if ( v2 == (void *)1 || (unsigned __int8)sub_407590(v2) )
      result = timer;
    else
LABEL_20:
      result = -1;
  }
  else
  {
    result = sub_407A90(a2);
  }
  return result;
}

__int64 __fastcall sub_407A90(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_40A640[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_60C498;
  v12 = sub_408200(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4083C0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_408320(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4083C0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_408320(v6);
          sub_4083C0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_60C498 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_407A90(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_40A640[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_60C498;
  v12 = sub_408200(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4083C0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_408320(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4083C0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_408320(v6);
          sub_4083C0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_60C498 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_407A90(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_40A640[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_60C498;
  v12 = sub_408200(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4083C0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_408320(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4083C0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_408320(v6);
          sub_4083C0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_60C498 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_407A90(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_40A640[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_60C498;
  v12 = sub_408200(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4083C0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_408320(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4083C0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_408320(v6);
          sub_4083C0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_60C498 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_407A90(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_40A640[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_60C498;
  v12 = sub_408200(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4083C0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_408320(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4083C0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_408320(v6);
          sub_4083C0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_60C498 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_407A90(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_40A640[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_60C498;
  v12 = sub_408200(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4083C0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_408320(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4083C0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_408320(v6);
          sub_4083C0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_60C498 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_407A90(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_40A640[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_60C498;
  v12 = sub_408200(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4083C0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_408320(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4083C0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_408320(v6);
          sub_4083C0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_60C498 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_407A90(__int64 a1)
{
  __int64 v1; // r14@1
  int v2; // esi@1
  int v3; // eax@1
  signed int v4; // edi@1
  signed int v5; // edx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rax@2
  signed int v8; // er12@4
  signed int v9; // ebp@4
  int v10; // esi@4
  signed int v11; // eax@6
  __int64 v12; // r13@8
  signed int v13; // er12@8
  __int64 v14; // r14@8
  __int64 v15; // r15@11
  __int64 result; // rax@11
  bool v17; // dl@15
  __int64 v18; // r14@17
  signed __int64 v19; // rdx@19
  unsigned __int8 v20; // of@19
  __int64 v21; // rax@19
  __int64 v22; // rax@20
  __m128i v23; // xmm1@22
  __m128i v24; // xmm2@22
  __int64 v25; // rdx@22
  signed int v26; // er13@30
  signed int v27; // er12@32
  int v28; // er15@32
  __int64 v29; // rdx@32
  int v30; // [sp+0h] [bp-10Ch]@1
  int v31; // [sp+Ch] [bp-100h]@1
  signed int v32; // [sp+10h] [bp-FCh]@8
  int v33; // [sp+1Ch] [bp-F0h]@1
  __int64 v34; // [sp+2Ch] [bp-E0h]@8
  signed int v35; // [sp+34h] [bp-D8h]@1
  int v36; // [sp+38h] [bp-D4h]@8
  __int64 v37; // [sp+3Ch] [bp-D0h]@8
  __int64 v38; // [sp+44h] [bp-C8h]@8
  __int64 v39; // [sp+4Ch] [bp-C0h]@32
  __int128 v40; // [sp+54h] [bp-B8h]@11
  __int128 v41; // [sp+64h] [bp-A8h]@22
  __int128 v42; // [sp+74h] [bp-98h]@10
  __int64 v43; // [sp+84h] [bp-88h]@22
  __int64 v44; // [sp+94h] [bp-78h]@20
  int v45; // [sp+B4h] [bp-58h]@35

  *(_DWORD *)(a1 + 32) = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v35 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v31 = v3;
  v33 = *(_DWORD *)(v1 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 20) + (signed __int64)(signed int)(v4 / 12 - ((unsigned int)(v4 % 12) >> 31));
  if ( !(v6 & 3) )
  {
    v7 = ((signed __int64)(((unsigned __int128)(0x0A3D70A3D70A3D70BLL * v6) >> 64) + v6) >> 6) - (v6 >> 63);
    v5 = 1;
    if ( v6 == 100 * v7 )
      v5 = (v7 & 3) == 1;
  }
  v8 = 59;
  v9 = 6;
  v10 = (unsigned __int16)word_40A640[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_60C498;
  v12 = sub_408200(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_4083C0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_408320(v6);
    if ( v15 == result )
      break;
    if ( v15 == v12 && v15 != v14 )
    {
      if ( (signed int)v42 < 0 )
        goto LABEL_17;
      v17 = (_DWORD)v42 != 0;
      if ( v33 < 0 )
      {
        if ( v17 >= v13 )
        {
LABEL_17:
          v18 = v37;
          result = v15;
          goto LABEL_18;
        }
      }
      else if ( (v33 != 0) != v17 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v9 )
      return -1LL;
    v38 = result;
    v12 = v14;
    v14 = v15;
    v13 = v42 != 0;
  }
  v18 = v37;
  if ( (v33 == 0) != ((_DWORD)v42 == 0) && v33 >= 0 && (signed int)v42 >= 0 )
  {
    v26 = 601200;
    do
    {
      v27 = 2;
      v28 = -v26;
      v29 = -v26;
      v39 = result + v29;
      if ( !__OFADD__(result, v29) )
      {
LABEL_35:
        sub_4083C0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_408320(v6);
          sub_4083C0(gmtime_r, &v38, &v40);
          result = v38;
          break;
        }
        result = v38;
      }
      while ( 1 )
      {
        v28 += 2 * v26;
        if ( v27 == 1 )
          break;
        v27 = 1;
        v39 = result + v28;
        if ( !__OFADD__(result, v28) )
          goto LABEL_35;
      }
      v26 += 601200;
    }
    while ( v26 != 269337600 );
  }
LABEL_18:
  *(_QWORD *)&dword_60C498 = result - (v34 + v36);
  if ( (_DWORD)v40 == v35 )
    goto LABEL_22;
  v19 = ((v35 <= 0) & (unsigned __int8)((_DWORD)v40 == 60)) - (signed __int64)v32 + v35;
  v20 = __OFADD__(v19, result);
  v21 = v19 + result;
  v38 = v21;
  if ( !v20 )
  {
    v44 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64 *, __int128 *))gmtime_r)(&v44, &v40);
    if ( v22 )
    {
      result = v38;
LABEL_22:
      v23 = _mm_load_si128((const __m128i *)&v41);
      v24 = _mm_load_si128((const __m128i *)&v42);
      v25 = v43;
      *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v40);
      *(__m128i *)(v18 + 16) = v23;
      *(__m128i *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 48) = v25;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_407AB0(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  __int64 result; // rax@1

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
  }
  else
  {
    if ( !(_DWORD)result )
      return result;
    if ( !v1 )
      return (unsigned int)-(*__errno_location() != 9);
  }
  return 0xFFFFFFFFLL;
}

bool __fastcall sub_407B10(int a1)
{
  char *v1; // rdx@1
  bool result; // al@1
  bool v3; // cf@1
  bool v4; // zf@1
  signed __int64 v5; // rcx@2
  const char *v6; // rdi@2
  char *v7; // rsi@2
  char v8; // cl@5
  bool v9; // cf@5
  bool v10; // zf@5
  const char *v11; // rdi@7
  signed __int64 v12; // rcx@7
  char *v13; // rsi@7

  v1 = setlocale(a1, 0LL);
  result = 1;
  v3 = 0;
  v4 = v1 == 0LL;
  if ( v1 )
  {
    v5 = 2LL;
    v6 = "C";
    v7 = v1;
    do
    {
      if ( !v5 )
        break;
      v3 = (unsigned __int8)*v7 < *v6;
      v4 = *v7++ == *v6++;
      --v5;
    }
    while ( v4 );
    v8 = (!v3 && !v4) - v3;
    result = 0;
    v9 = 0;
    v10 = v8 == 0;
    if ( v8 )
    {
      v11 = "POSIX";
      v12 = 6LL;
      v13 = v1;
      do
      {
        if ( !v12 )
          break;
        v9 = (unsigned __int8)*v13 < *v11;
        v10 = *v13++ == *v11++;
        --v12;
      }
      while ( v10 );
      result = (!v9 && !v10) != v9;
    }
  }
  return result;
}

const char *sub_407B70()
{
  char *v0; // rax@1
  char *v1; // r15@1
  const char *v2; // rbx@1
  char v3; // bp@4
  size_t v4; // rax@6
  char *v6; // rax@14
  const char *v7; // r13@14
  size_t v8; // rax@16
  signed __int64 v9; // r12@16
  size_t v10; // r14@16
  size_t v11; // rdi@17
  char *v12; // rax@18
  const char *v13; // rbp@18
  size_t v14; // rdi@21
  char *v15; // rax@22
  const char *v16; // r12@24
  int v17; // eax@24
  int v18; // er12@24
  FILE *v19; // r13@28
  const char *v20; // rax@29
  _IO_FILE *v21; // rbx@29
  const char *v22; // r13@29
  char *v23; // rax@30
  int v24; // edi@31
  char *v25; // kr00_8@36
  char *v26; // rdx@36
  int v27; // esi@37
  unsigned int v28; // eax@37
  signed __int64 v29; // rdx@42
  signed __int64 v30; // rax@42
  char *v31; // rax@43
  signed __int64 v32; // rcx@43
  __int64 v33; // rdx@43
  signed __int64 v34; // rsi@45
  unsigned int v35; // ecx@45
  signed __int64 v36; // rdi@45
  char *v37; // rsi@45
  unsigned int v38; // edx@50
  char *v39; // rcx@50
  FILE *v40; // rdi@57
  int v41; // eax@59
  bool v42; // dl@59
  char *v43; // rax@62
  signed __int64 v44; // rax@64
  unsigned __int64 v45; // r9@65
  char *v46; // rsi@65
  char *v47; // r10@65
  unsigned int v48; // ecx@65
  unsigned int v49; // ecx@66
  unsigned int v50; // esi@66
  __int64 v51; // r8@67
  unsigned __int64 v52; // rdi@69
  char *v53; // rcx@69
  char *v54; // r9@69
  unsigned int v55; // edx@69
  unsigned int v56; // edx@70
  unsigned int v57; // ecx@70
  __int64 v58; // rsi@71
  const char *v59; // rax@80
  char *v60; // rdi@80
  FILE *v61; // r13@80
  signed __int64 v62; // [sp+8h] [bp-D0h]@28
  __int64 v63; // [sp+18h] [bp-C0h]@42
  char v64[64]; // [sp+20h] [bp-B8h]@35
  char v65[120]; // [sp+60h] [bp-78h]@35

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
          v1 = "%s: invalid option -- '%c'\n" + 27;
LABEL_20:
          s = v1;
          goto LABEL_4;
        }
        memcpy(v12, v7, v10);
LABEL_24:
        v16 = &v13[v9];
        *(_QWORD *)v16 = 3347411969557751907LL;
        *((_WORD *)v16 + 6) = 115;
        *((_DWORD *)v16 + 2) = 1634298977;
        v17 = open(v13, 0);
        v18 = v17;
        if ( v17 >= 0 )
        {
          v1 = 0LL;
          v62 = 0LL;
          v19 = fdopen(v17, "r");
          if ( v19 )
          {
            v20 = v2;
            v21 = v19;
            v22 = v20;
LABEL_30:
            v23 = v21->_IO_read_ptr;
            if ( v23 < v21->_IO_read_end )
            {
LABEL_31:
              v21->_IO_read_ptr = v23 + 1;
              v24 = (unsigned __int8)*v23;
              goto LABEL_32;
            }
            while ( 1 )
            {
              v24 = __uflow(v21);
              if ( v24 == -1 )
                break;
LABEL_32:
              if ( (unsigned int)(v24 - 9) <= 1 || v24 == 32 )
                goto LABEL_30;
              if ( v24 == 35 )
              {
                do
                {
                  v43 = v21->_IO_read_ptr;
                  if ( v43 < v21->_IO_read_end )
                  {
                    v21->_IO_read_ptr = v43 + 1;
                    v41 = (unsigned __int8)*v43;
                    v42 = 1;
                  }
                  else
                  {
                    v41 = __uflow(v21);
                    v42 = v41 != -1;
                  }
                }
                while ( v41 != 10 && v42 );
                if ( v41 == -1 )
                  break;
                goto LABEL_30;
              }
              ungetc(v24, v21);
              if ( fscanf(v21, "%50s %50s", v64, v65) <= 1 )
                break;
              v25 = &v64[strlen(v64)];
              v26 = v65;
              do
              {
                v27 = *(_DWORD *)v26;
                v26 += 4;
                v28 = ~v27 & (v27 - 16843009) & 0x80808080;
              }
              while ( !v28 );
              if ( !(~v27 & (v27 - 16843009) & 0x8080) )
                v28 >>= 16;
              if ( !(~v27 & (v27 - 16843009) & 0x8080) )
                v26 += 2;
              v29 = &v26[-__CFADD__((_BYTE)v28, (_BYTE)v28) - 3] - v65;
              v30 = v25 - v64 + v29;
              v63 = v29;
              if ( v62 )
              {
                v44 = v62 + v30;
                v62 = v44 + 2;
                v31 = (char *)realloc(v1, v44 + 3);
                v33 = v63;
                v32 = v25 - v64;
              }
              else
              {
                v62 = v30 + 2;
                v31 = (char *)malloc(v30 + 3);
                v32 = v25 - v64;
                v33 = v63;
              }
              if ( !v31 )
              {
                v59 = v22;
                v60 = v1;
                v61 = v21;
                v1 = "%s: invalid option -- '%c'\n" + 27;
                v2 = v59;
                free(v60);
                sub_4080E0(v61);
                goto LABEL_26;
              }
              v34 = -2 - v32;
              v35 = v32 + 1;
              v36 = v62 - v33;
              v37 = &v31[v62 - v33] + v34;
              if ( v35 >= 8 )
              {
                *(_QWORD *)v37 = *(_QWORD *)v64;
                *(_QWORD *)&v37[v35 - 8] = *(_QWORD *)&v64[v35 - 8];
                v45 = (unsigned __int64)(v37 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v46 = &v37[-v45];
                v47 = (char *)(v64 - v46);
                v48 = ((_DWORD)v46 + v35) & 0xFFFFFFF8;
                if ( v48 >= 8 )
                {
                  v49 = v48 & 0xFFFFFFF8;
                  v50 = 0;
                  do
                  {
                    v51 = v50;
                    v50 += 8;
                    *(_QWORD *)(v45 + v51) = *(_QWORD *)&v47[v51];
                  }
                  while ( v50 < v49 );
                }
              }
              else if ( v35 & 4 )
              {
                *(_DWORD *)v37 = *(_DWORD *)v64;
                *(_DWORD *)&v37[v35 - 4] = *(_DWORD *)&v64[v35 - 4];
              }
              else if ( v35 )
              {
                *v37 = v64[0];
                if ( v35 & 2 )
                  *(_WORD *)&v37[v35 - 2] = *(_WORD *)&v64[v35 - 2];
              }
              v38 = v33 + 1;
              v39 = &v31[v36 - 1];
              if ( v38 >= 8 )
              {
                *(_QWORD *)v39 = *(_QWORD *)v65;
                *(_QWORD *)&v39[v38 - 8] = *(_QWORD *)&v65[v38 - 8];
                v52 = (unsigned __int64)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v53 = &v39[-v52];
                v54 = (char *)(v65 - v53);
                v55 = ((_DWORD)v53 + v38) & 0xFFFFFFF8;
                if ( v55 >= 8 )
                {
                  v56 = v55 & 0xFFFFFFF8;
                  v57 = 0;
                  do
                  {
                    v58 = v57;
                    v57 += 8;
                    *(_QWORD *)(v52 + v58) = *(_QWORD *)&v54[v58];
                  }
                  while ( v57 < v56 );
                }
              }
              else if ( v38 & 4 )
              {
                *(_DWORD *)v39 = *(_DWORD *)v65;
                *(_DWORD *)&v39[v38 - 4] = *(_DWORD *)&v65[v38 - 4];
              }
              else if ( v38 )
              {
                *v39 = v65[0];
                if ( v38 & 2 )
                  *(_WORD *)&v39[v38 - 2] = *(_WORD *)&v65[v38 - 2];
              }
              v1 = v31;
              v23 = v21->_IO_read_ptr;
              if ( v23 < v21->_IO_read_end )
                goto LABEL_31;
            }
            v40 = v21;
            v2 = v22;
            sub_4080E0(v40);
            if ( !v62 )
              goto LABEL_25;
            v1[v62] = 0;
            goto LABEL_26;
          }
          close(v18);
        }
LABEL_25:
        v1 = "%s: invalid option -- '%c'\n" + 27;
LABEL_26:
        free((void *)v13);
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
      v4 = strlen(v1);
      v1 += v4 + strlen(&v1[v4 + 1]) + 2;
      v3 = *v1;
      if ( !*v1 )
        goto LABEL_11;
    }
    v2 = &v1[strlen(v1) + 1];
  }
LABEL_11:
  if ( !*v2 )
    v2 = "ASCII";
  return v2;
}

int __fastcall sub_4080E0(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0
    || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1)
    || !(unsigned int)sub_408160(stream) )
  {
    result = fclose(stream);
  }
  else
  {
    v1 = __errno_location();
    v2 = *v1;
    v3 = v1;
    result = fclose(stream);
    if ( v2 )
    {
      *v3 = v2;
      result = -1;
    }
  }
  return result;
}

int __fastcall sub_408160(FILE *stream)
{
  int result; // eax@4

  if ( stream && __freading(stream) && stream->_flags & 0x100 )
  {
    sub_4081A0(stream, 0LL, 1LL);
    result = fflush(stream);
  }
  else
  {
    result = fflush(stream);
  }
  return result;
}

int __fastcall sub_4081A0(FILE *a1, __off_t a2, int a3)
{
  __off_t v3; // rax@2
  int v4; // er12@5
  int v5; // eax@5

  if ( a1->_IO_read_end != a1->_IO_read_ptr || a1->_IO_write_ptr != a1->_IO_write_base || a1->_IO_save_base )
  {
    LODWORD(v3) = fseeko(a1, a2, a3);
  }
  else
  {
    v4 = a3;
    v5 = fileno(a1);
    v3 = lseek(v5, a2, v4);
    if ( v3 != -1 )
    {
      a1->_flags &= 0xFFFFFFEF;
      a1->_offset = v3;
      LODWORD(v3) = 0;
    }
  }
  return v3;
}

signed __int64 __fastcall sub_408200(signed __int64 a1, __int64 a2, int a3, int a4, int a5, signed int a6, int a7, int a8, int a9, int a10)
{
  signed int v10; // er10@1
  signed int v11; // er12@1

  v10 = (unsigned __int64)(a1 >> 2) + 475 - ((a1 & 3) == 0);
  v11 = (a6 >> 2) + 475 - ((a6 & 3) == 0);
  return a5
       + 60
       * (a4
        + 60
        * (a3
         + 24
         * ((signed int)(v10
                       - v11
                       - (v10 / 25
                        - ((unsigned int)(v10 % 25) >> 31)
                        - (v11 / 25
                         - ((unsigned int)(v11 % 25) >> 31)))
                       + ((signed int)(v10 / 25 - ((unsigned int)(v10 % 25) >> 31)) >> 2)
                       - ((signed int)(v11 / 25 - ((unsigned int)(v11 % 25) >> 31)) >> 2))
          + 365 * (a1 - a6)
          + a2
          - a7)
         - a8)
        - a9)
       - a10;
}

signed __int64 __fastcall sub_408320(signed __int64 a1, __int64 a2, int a3, int a4, int a5, signed __int64 a6, __int64 a7)
{
  signed __int64 v7; // rbx@1
  signed __int64 v8; // rax@2
  unsigned __int8 v9; // of@2
  signed __int64 result; // rax@2

  v7 = a6;
  if ( !a7
    || (v8 = sub_408200(
               a1,
               a2,
               a3,
               a4,
               a5,
               *(_DWORD *)(a7 + 20),
               *(_DWORD *)(a7 + 28),
               *(_DWORD *)(a7 + 8),
               *(_DWORD *)(a7 + 4),
               *(_DWORD *)a7),
        v9 = __OFADD__(v7, v8),
        result = v7 + v8,
        v9) )
  {
    if ( v7 < 0 )
    {
      if ( v7 >= -9223372036854775806LL )
        result = 0x8000000000000000LL;
      else
        result = v7 + 1;
    }
    else
    {
      result = 0x7FFFFFFFFFFFFFFFLL;
      if ( v7 > 9223372036854775805LL )
        result = v7 - 1;
    }
  }
  return result;
}

int __fastcall sub_4083C0(int (__fastcall *a1)(__int64 *, __int64), __int64 *a2, __int64 a3)
{
  __int64 v3; // r13@1
  __int64 v4; // rax@1
  signed __int64 v5; // r14@3
  signed __int64 v6; // rbp@3
  signed __int64 v7; // rdx@6
  signed __int64 v8; // rbx@6
  __int64 v10; // [sp+8h] [bp-30h]@1

  v3 = a3;
  v10 = *a2;
  LODWORD(v4) = a1(&v10, a3);
  if ( !v4 )
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
        v10 = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        LODWORD(v4) = a1(&v10, v3);
        if ( !v4 )
        {
          v5 = v8;
          v8 = v6;
        }
        v6 = v8;
      }
      if ( !v4 && v6 )
      {
        v10 = v6;
        LODWORD(v4) = a1(&v10, v3);
      }
    }
  }
  return v4;
}

void sub_4088C0()
{
  tzset();
  JUMPOUT(&loc_408480);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_408950(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_60C248 )
    v1 = unk_60C248;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_408968(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_60BE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
