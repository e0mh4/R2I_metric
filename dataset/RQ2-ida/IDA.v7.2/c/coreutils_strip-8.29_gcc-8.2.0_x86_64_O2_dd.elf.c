__int64 __usercall main@<rax>(char **a1@<rsi>, char **a2@<rdx>, int a3@<edi>, size_t a4@<r14>, const char *a5@<r15>)
{
  unsigned __int64 v5; // rbp
  char **v6; // rbx
  unsigned __int64 v7; // r12
  __int64 i; // rax
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  char *v11; // rax
  char *v12; // r8
  const char *v13; // rdx
  char v14; // al
  const char *v15; // rcx
  int v16; // ecx
  char v17; // bp
  int v18; // eax
  __int64 (__fastcall *v19)(int, void *, size_t); // rax
  int v20; // eax
  char *v21; // rax
  __int64 v22; // rdx
  const __int32_t *v23; // rsi
  char *v24; // rax
  __int64 v25; // rdx
  char *v26; // rax
  __int64 v27; // rdx
  __off_t v28; // rax
  size_t v29; // rsi
  __off_t v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // r12
  size_t v34; // r15
  __int64 v35; // r14
  __int64 v36; // rbp
  size_t v37; // r12
  __off_t v38; // rbp
  unsigned __int64 v39; // r12
  __int64 v40; // rbx
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // rbp
  char v43; // si
  void *v44; // r9
  int v45; // esi
  __int64 v46; // rax
  bool v47; // zf
  bool v48; // cf
  unsigned __int64 v49; // r15
  size_t v50; // rbp
  size_t v51; // rdx
  int v52; // esi
  char *v53; // rdi
  char *v54; // rbx
  char *v55; // rdi
  char v56; // r8
  __int64 v57; // rax
  const char *v58; // rax
  char v59; // cl
  const char *v60; // rdx
  char v61; // al
  const char *v62; // rax
  char v63; // cl
  const char *v64; // rdx
  char v65; // al
  const char *v66; // rax
  char v67; // cl
  const char *v68; // rdx
  char v69; // al
  const char *v70; // rax
  char v71; // cl
  const char *v72; // rdx
  char v73; // al
  size_t v74; // r14
  const void *v75; // rsi
  size_t v76; // rbp
  size_t v77; // rdx
  unsigned __int64 v78; // rbp
  size_t v79; // rbp
  __int64 v80; // rax
  char *v81; // rax
  __int64 v82; // rsi
  char v83; // dl
  __int64 v84; // rbx
  char *v85; // rsi
  char *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  __off_t v89; // rax
  size_t v90; // rbx
  __int64 v91; // rax
  const char *v92; // rsi
  char *v94; // rax
  __int64 v95; // rdx
  const __int32_t *v96; // rsi
  char *v97; // rax
  __int64 v98; // rdx
  __off_t v99; // rdx
  __off_t v100; // rdx
  unsigned __int64 v101; // rbx
  __off_t v102; // rdx
  const char *v103; // rax
  char v104; // cl
  const char *v105; // rdx
  char v106; // al
  int v107; // eax
  __off_t v108; // rax
  unsigned __int64 v109; // rax
  char *v110; // r8
  const char *v111; // rdx
  char v112; // si
  const char *v113; // rcx
  char v114; // dl
  unsigned __int64 v115; // rdx
  int v116; // esi
  const char *v117; // rdx
  char v118; // si
  char *v119; // rcx
  char v120; // dl
  const char *v121; // rdx
  char v122; // si
  const char *v123; // rcx
  char v124; // dl
  const char *v125; // rdx
  char v126; // si
  const char *v127; // rcx
  char v128; // dl
  const char *v129; // rsi
  const char *v130; // rdx
  char v131; // si
  char *v132; // rcx
  char v133; // dl
  const char *v134; // rdx
  char v135; // si
  const char *v136; // rcx
  char v137; // dl
  const char *v138; // rdi
  const char *v139; // rdx
  char v140; // si
  const char *v141; // rcx
  char v142; // dl
  char v143; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v144; // [rsp+8h] [rbp-F0h]
  char *v145; // [rsp+10h] [rbp-E8h]
  int v146; // [rsp+1Ch] [rbp-DCh]
  size_t n; // [rsp+20h] [rbp-D8h]
  __m128i v148; // [rsp+28h] [rbp-D0h]
  __m128i v149; // [rsp+38h] [rbp-C0h]
  __m128i v150; // [rsp+48h] [rbp-B0h]
  __m128i v151; // [rsp+58h] [rbp-A0h]
  __m128i v152; // [rsp+68h] [rbp-90h]
  __m128i v153; // [rsp+78h] [rbp-80h]
  __m128i v154; // [rsp+88h] [rbp-70h]
  __m128i v155; // [rsp+98h] [rbp-60h]
  int v156; // [rsp+A8h] [rbp-50h]

  LODWORD(v5) = a3;
  v6 = a1;
  v7 = (unsigned __int64)getenv("POSIXLY_CORRECT");
  sigemptyset(&set);
  if ( v7 )
    goto LABEL_2;
  while ( 1 )
  {
    sigaddset(&set, 10);
LABEL_2:
    sigaction(2, 0LL, (struct sigaction *)&n);
    if ( n != 1 )
      sigaddset(&set, 2);
    v148 = _mm_load_si128((const __m128i *)&set);
    v149 = _mm_load_si128((const __m128i *)&set.__val[2]);
    v150 = _mm_load_si128((const __m128i *)&set.__val[4]);
    v151 = _mm_load_si128((const __m128i *)&set.__val[6]);
    v152 = _mm_load_si128((const __m128i *)&set.__val[8]);
    v153 = _mm_load_si128((const __m128i *)&set.__val[10]);
    v154 = _mm_load_si128((const __m128i *)&set.__val[12]);
    v155 = _mm_load_si128((const __m128i *)&set.__val[14]);
    if ( sigismember(&set, 10) )
    {
      n = (size_t)sub_403D40;
      v156 = 0;
      sigaction(10, (const struct sigaction *)&n, 0LL);
    }
    if ( sigismember(&set, 2) )
    {
      n = (size_t)sub_403D30;
      v156 = -1073741824;
      sigaction(2, (const struct sigaction *)&n, 0LL);
    }
    sub_406A10(*v6);
    setlocale(6, "");
    bindtextdomain(
      "coreutils",
      "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    sub_40DA80(sub_404720);
    qword_614658 = getpagesize();
    sub_406900(v5);
    byte_6142B8 = 0;
    if ( (unsigned int)sub_40A500((unsigned int)v5, v6, "", &unk_40F680, 0LL) != -1 )
      goto LABEL_336;
    for ( i = 0LL; i != 256; ++i )
      byte_6143E0[i] = i;
    if ( (int)v5 > dword_61433C )
    {
      v9 = 0LL;
      a4 = 0LL;
      v144 = 0LL;
      v10 = (unsigned int)(v5 + ~dword_61433C);
      v7 = (unsigned __int64)&v6[dword_61433C];
      v5 = -1LL;
      v6 += dword_61433C + v10 + 1;
LABEL_13:
      a5 = *(const char **)v7;
      v11 = strchr(*(const char **)v7, 61);
      if ( v11 )
      {
        v12 = v11 + 1;
        v13 = a5;
        v14 = 105;
        v15 = "if";
        do
        {
          ++v13;
          ++v15;
          if ( *(v13 - 1) != v14 )
            goto LABEL_116;
          v14 = *v15;
        }
        while ( *v15 );
        if ( !*v13 || *v13 == 61 )
        {
          qword_614668 = v12;
          goto LABEL_20;
        }
LABEL_116:
        v58 = a5;
        v59 = 111;
        v60 = "of";
        do
        {
          ++v58;
          ++v60;
          if ( *(v58 - 1) != v59 )
            goto LABEL_122;
          v59 = *v60;
        }
        while ( *v60 );
        v61 = *v58;
        if ( v61 == 61 || !v61 )
        {
          qword_614660 = v12;
          goto LABEL_20;
        }
LABEL_122:
        v62 = a5;
        v63 = 99;
        v64 = "conv";
        do
        {
          ++v62;
          ++v64;
          if ( *(v62 - 1) != v63 )
            goto LABEL_128;
          v63 = *v64;
        }
        while ( *v64 );
        v65 = *v62;
        if ( !v65 || v65 == 61 )
        {
          dword_61460C |= sub_4059D0(v12);
          goto LABEL_20;
        }
LABEL_128:
        v66 = a5;
        v67 = 105;
        v68 = "iflag";
        do
        {
          ++v66;
          ++v68;
          if ( *(v66 - 1) != v67 )
            goto LABEL_134;
          v67 = *v68;
        }
        while ( *v68 );
        v69 = *v66;
        if ( !v69 || v69 == 61 )
        {
          oflag |= sub_4059D0(v12);
          goto LABEL_20;
        }
LABEL_134:
        v70 = a5;
        v71 = 111;
        v72 = "oflag";
        do
        {
          ++v70;
          ++v72;
          if ( *(v70 - 1) != v71 )
            goto LABEL_264;
          v71 = *v72;
        }
        while ( *v72 );
        v73 = *v70;
        if ( !v73 || v73 == 61 )
        {
          dword_614604 |= sub_4059D0(v12);
          goto LABEL_20;
        }
LABEL_264:
        v103 = a5;
        v104 = 115;
        v105 = "status";
        do
        {
          ++v103;
          ++v105;
          if ( *(v103 - 1) != v104 )
            goto LABEL_295;
          v104 = *v105;
        }
        while ( *v105 );
        v106 = *v103;
        if ( v106 == 61 || !v106 )
        {
          dword_6142BC = sub_4059D0(v12);
          goto LABEL_20;
        }
LABEL_295:
        v145 = v12;
        LODWORD(n) = 0;
        v109 = sub_4042D0(v12, &n, v105);
        v110 = v145;
        v111 = a5;
        v112 = 105;
        v113 = "ibs";
        do
        {
          ++v111;
          ++v113;
          if ( *(v111 - 1) != v112 )
            goto LABEL_318;
          v112 = *v113;
        }
        while ( *v113 );
        v114 = *v111;
        if ( v114 != 61 && v114 )
        {
LABEL_318:
          v121 = a5;
          v122 = 111;
          v123 = "obs";
          do
          {
            ++v121;
            ++v123;
            if ( *(v121 - 1) != v122 )
              goto LABEL_337;
            v122 = *v123;
          }
          while ( *v123 );
          v124 = *v121;
          if ( v124 != 61 && v124 )
          {
LABEL_337:
            v130 = a5;
            v131 = 98;
            v132 = "cbs" + 1;
            do
            {
              ++v130;
              ++v132;
              if ( *(v130 - 1) != v131 )
                goto LABEL_326;
              v131 = *v132;
            }
            while ( *v132 );
            v133 = *v130;
            if ( v133 != 61 && v133 )
            {
LABEL_326:
              v125 = a5;
              v126 = 99;
              v127 = "cbs";
              do
              {
                ++v125;
                ++v127;
                if ( *(v125 - 1) != v126 )
                  goto LABEL_352;
                v126 = *v127;
              }
              while ( *v127 );
              v128 = *v125;
              if ( v128 != 61 && v128 )
                goto LABEL_352;
              qword_614640 = v109;
              if ( v109 )
                goto LABEL_315;
              goto LABEL_332;
            }
            a4 = v109;
            v115 = -2 * (qword_614658 + 2);
            if ( v115 > 0x7FFFFFFFFFFFFFFFLL )
              v115 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else
          {
            offset = v109;
            v115 = -qword_614658;
            if ( (unsigned __int64)-qword_614658 > 0x7FFFFFFFFFFFFFFFLL )
              v115 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
        else
        {
          qword_614650 = v109;
          v115 = -2 * (qword_614658 + 2);
          if ( v115 > 0x7FFFFFFFFFFFFFFFLL )
            v115 = 0x7FFFFFFFFFFFFFFFLL;
        }
        if ( v109 )
        {
          if ( v109 <= v115 )
            goto LABEL_315;
          LODWORD(n) = 1;
LABEL_305:
          sub_408630(v110);
          dcgettext(0LL, "invalid number", 5);
          v116 = 75;
          v30 = 1LL;
          if ( (_DWORD)n != 1 )
            v116 = 0;
          sub_4041E0(1, v116, v143);
          goto LABEL_308;
        }
LABEL_332:
        LODWORD(n) = 4;
        goto LABEL_305;
      }
LABEL_345:
      sub_408630(a5);
      dcgettext(0LL, "unrecognized operand %s", 5);
      sub_4041E0(0, 0, v143);
LABEL_336:
      sub_405460(1);
    }
    v144 = 0LL;
    v5 = -1LL;
    v9 = 0LL;
LABEL_140:
    dword_61460C |= 0x800u;
    if ( !qword_614650 )
      qword_614650 = 512LL;
    if ( !offset )
      offset = 512LL;
    while ( 1 )
    {
      if ( !qword_614640 )
        dword_61460C &= 0xFFFFFFE7;
      if ( oflag & 0x101000 )
        oflag |= 0x101000u;
      if ( dword_614604 & 1 )
      {
        sub_408630("fullblock");
        v129 = "invalid output flag";
        goto LABEL_335;
      }
      v16 = oflag;
      if ( oflag & 0x10 )
        goto LABEL_360;
      if ( dword_614604 & 0xC )
      {
        v138 = "count_bytes";
        if ( !(dword_614604 & 4) )
          v138 = "skip_bytes";
        sub_408630(v138);
        v129 = "invalid output flag";
LABEL_335:
        dcgettext(0LL, v129, 5);
        sub_4041E0(0, 0, v143);
        goto LABEL_336;
      }
      if ( oflag & 8 )
      {
        if ( v9 )
        {
          *((_QWORD *)&xmmword_614630 + 1) = v9 / qword_614650;
          *(_QWORD *)&xmmword_614630 = v9 % qword_614650;
        }
      }
      else if ( v9 )
      {
        *((_QWORD *)&xmmword_614630 + 1) = v9;
      }
      if ( oflag & 4 )
      {
        if ( v5 != -1LL )
        {
          qword_6142C0 = v5 / qword_614650;
          qword_614610 = v5 % qword_614650;
        }
      }
      else if ( v5 != -1LL )
      {
        qword_6142C0 = v5;
      }
      if ( dword_614604 & 0x10 )
      {
        if ( v144 )
        {
          *((_QWORD *)&xmmword_614620 + 1) = v144 / offset;
          *(_QWORD *)&xmmword_614620 = v144 % offset;
        }
      }
      else if ( v144 )
      {
        *((_QWORD *)&xmmword_614620 + 1) = v144;
      }
      v17 = dword_61460C;
      v18 = oflag & 1;
      if ( v18 | dword_61460C & 0x800 )
      {
        v47 = v18 == 0;
        v19 = sub_404A10;
        byte_6145A8 = 0;
        if ( v47 )
          v19 = sub_404900;
      }
      else if ( *((_QWORD *)&xmmword_614630 + 1)
             || (unsigned __int64)(qword_6142C0 - 1) <= 0xFFFFFFFFFFFFFFFDLL
             || (BYTE1(v16) | BYTE1(dword_614604)) & 0x40 )
      {
        byte_6145A8 = 1;
        v19 = sub_404900;
      }
      else
      {
        byte_6145A8 = 0;
        v19 = sub_404900;
      }
      qword_6144E0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v19;
      oflag &= 0xFFFFFFFE;
      if ( dword_61460C & 7 & ((dword_61460C & 7) - 1) )
      {
        dcgettext(0LL, "cannot combine any two of {ascii,ebcdic,ibm}", 5);
        sub_4041E0(1, 0, v143);
LABEL_365:
        dcgettext(0LL, "cannot combine excl and nocreat", 5);
        sub_4041E0(1, 0, v143);
        goto LABEL_366;
      }
      if ( dword_61460C & 0x18 & ((dword_61460C & 0x18) - 1) )
      {
        dcgettext(0LL, "cannot combine block and unblock", 5);
        sub_4041E0(1, 0, v143);
LABEL_359:
        dcgettext(0LL, "cannot combine lcase and ucase", 5);
        sub_4041E0(1, 0, v143);
LABEL_360:
        sub_408630("seek_bytes");
        v129 = "invalid input flag";
        goto LABEL_335;
      }
      if ( dword_61460C & 0x60 & ((dword_61460C & 0x60) - 1) )
        goto LABEL_359;
      if ( dword_61460C & 0x3000 & ((dword_61460C & 0x3000) - 1) )
        goto LABEL_365;
      v20 = dword_614604 & 0x4002 & ((dword_614604 & 0x4002) - 1);
      v6 = (char **)(v20 | v16 & 0x4002 & ((v16 & 0x4002u) - 1));
      v146 = v20 | v16 & 0x4002 & ((v16 & 0x4002) - 1);
      if ( !(v20 | v16 & 0x4002 & ((v16 & 0x4002) - 1)) )
        break;
LABEL_366:
      dcgettext(0LL, "cannot combine direct and nocache", 5);
      v109 = sub_4041E0(1, 0, v143);
LABEL_367:
      v139 = a5;
      v140 = 99;
      v141 = "count";
      do
      {
        ++v139;
        ++v141;
        if ( *(v139 - 1) != v140 )
          goto LABEL_345;
        v140 = *v141;
      }
      while ( *v141 );
      v142 = *v139;
      if ( v142 != 61 && v142 )
        goto LABEL_345;
      v5 = v109;
LABEL_315:
      if ( (_DWORD)n )
        goto LABEL_305;
LABEL_20:
      v7 += 8LL;
      if ( v6 != (char **)v7 )
        goto LABEL_13;
      if ( !a4 )
        goto LABEL_140;
      offset = a4;
      qword_614650 = a4;
    }
    if ( v16 & 2 )
    {
      byte_6144EB = 1;
      byte_6144E9 = (qword_614610 | qword_6142C0) == 0;
      oflag = v16 & 0xFFFFFFFC;
    }
    if ( dword_614604 & 2 )
    {
      byte_6144EA = 1;
      byte_6144E8 = (qword_614610 | qword_6142C0) == 0;
      dword_614604 &= 0xFFFFFFFD;
    }
    if ( dword_61460C & 1 )
    {
      v21 = byte_6143E0;
      do
      {
        v22 = (unsigned __int8)*v21++;
        *(v21 - 1) = byte_40F0E0[v22];
      }
      while ( &qword_6144E0 != (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v21 );
      byte_614600 = 1;
    }
    if ( v17 & 0x40 )
    {
      v23 = *__ctype_toupper_loc();
      v24 = byte_6143E0;
      do
      {
        v25 = (unsigned __int8)*v24++;
        *(v24 - 1) = v23[v25];
      }
      while ( &qword_6144E0 != (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v24 );
      goto LABEL_58;
    }
    if ( v17 & 0x20 )
    {
      v96 = *__ctype_tolower_loc();
      v97 = byte_6143E0;
      do
      {
        v98 = (unsigned __int8)*v97++;
        *(v97 - 1) = v96[v98];
      }
      while ( &qword_6144E0 != (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v97 );
LABEL_58:
      byte_614600 = 1;
    }
    if ( v17 & 2 )
    {
      v26 = byte_6143E0;
      do
      {
        v27 = (unsigned __int8)*v26++;
        *(v26 - 1) = byte_40F2E0[v27];
      }
      while ( &qword_6144E0 != (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v26 );
      goto LABEL_62;
    }
    if ( v17 & 4 )
    {
      v94 = byte_6143E0;
      do
      {
        v95 = (unsigned __int8)*v94++;
        *(v94 - 1) = byte_40F1E0[v95];
      }
      while ( v94 != (char *)&qword_6144E0 );
LABEL_62:
      byte_614600 = 1;
      byte_6142BA = 37;
      byte_6142B9 = 64;
    }
    v5 = (unsigned __int64)qword_614668;
    v7 = (unsigned int)oflag;
    v144 = (unsigned __int64)__errno_location();
    if ( v5 )
    {
      if ( (int)sub_4048B0(0, (char *)v5, v7) >= 0 )
        goto LABEL_65;
      sub_4083E0(4LL, qword_614668);
      dcgettext(0LL, "failed to open %s", 5);
      sub_4041E0(1, *(_DWORD *)v144, v143);
LABEL_349:
      sub_4083E0(4LL, qword_614660);
      dcgettext(0LL, "failed to open %s", 5);
      sub_4041E0(1, *(_DWORD *)v144, v143);
LABEL_350:
      dcgettext(0LL, "offset too large: cannot truncate to a length of seek=%lu (%lu-byte) blocks", 5);
      sub_4041E0(1, 0, v143);
LABEL_351:
      v6 = (char **)sub_4083E0(4LL, qword_614660);
      dcgettext(0LL, "cannot fstat %s", 5);
      v109 = sub_4041E0(1, *(_DWORD *)v144, v143);
LABEL_352:
      v134 = a5;
      v135 = 115;
      v136 = "skip";
      do
      {
        ++v134;
        ++v136;
        if ( *(v134 - 1) != v135 )
          goto LABEL_309;
        v135 = *v136;
      }
      while ( *v136 );
      v137 = *v134;
      if ( v137 == 61 || !v137 )
      {
        v9 = v109;
        goto LABEL_315;
      }
LABEL_309:
      v117 = a5;
      v118 = 115;
      v119 = "%s: cannot seek" + 11;
      do
      {
        ++v117;
        ++v119;
        if ( v118 != *(v117 - 1) )
          goto LABEL_367;
        v118 = *v119;
      }
      while ( *v119 );
      v120 = *v117;
      if ( v120 == 61 || !v120 )
      {
        v144 = v109;
        goto LABEL_315;
      }
      goto LABEL_367;
    }
    qword_614668 = dcgettext(0LL, "standard input", 5);
    sub_4043E0(0);
LABEL_65:
    v28 = lseek(0, 0LL, 1);
    v29 = (size_t)qword_614660;
    v7 = (unsigned int)dword_614604;
    byte_6145BC = ~v28 < 0;
    if ( v28 < 0 )
      v28 = 0LL;
    qword_6145B0 = v28;
    dword_6145B8 = *(_DWORD *)v144;
    if ( !qword_614660 )
      break;
    v5 = (((dword_61460C & 0x1000) == 0) << 6) | dword_614604 | (dword_61460C >> 6) & 0x80u;
    if ( *((_QWORD *)&xmmword_614620 + 1) )
    {
      v30 = 1LL;
      if ( (int)sub_4048B0(
                  1,
                  qword_614660,
                  (((dword_61460C & 0x1000) == 0) << 6) | dword_614604 | (dword_61460C >> 6) & 0x80 | 2u) < 0 )
        goto LABEL_70;
    }
    else
    {
      v5 = ((dword_61460C & 0x200u) < 1 ? 0x200 : 0) | (((dword_61460C & 0x1000) == 0) << 6) | dword_614604 | (dword_61460C >> 6) & 0x80u;
LABEL_70:
      v30 = 1LL;
      v29 = (size_t)qword_614660;
      if ( (int)sub_4048B0(1, qword_614660, (unsigned int)v5 | 1) < 0 )
        goto LABEL_349;
    }
    v5 = *((_QWORD *)&xmmword_614620 + 1);
    if ( !*((_QWORD *)&xmmword_614620 + 1) || dword_61460C & 0x200 )
      goto LABEL_75;
    a4 = offset;
    v7 = xmmword_614620 + offset * *((_QWORD *)&xmmword_614620 + 1);
    if ( *((_QWORD *)&xmmword_614620 + 1) > 0x7FFFFFFFFFFFFFFFLL / offset )
      goto LABEL_350;
    v30 = xmmword_614620 + offset * *((_QWORD *)&xmmword_614620 + 1);
    if ( !(unsigned int)sub_404BF0(v30) )
      goto LABEL_75;
    v29 = 1LL;
    v30 = 1LL;
    v5 = *(unsigned int *)v144;
    if ( __fxstat(1, 1, (struct stat *)&n) )
      goto LABEL_351;
    if ( ((v149.m128i_i16[0] & 0xF000) - 0x4000) & 0xFFFFB000 )
      goto LABEL_75;
    v6 = (char **)sub_4083E0(4LL, qword_614660);
    dcgettext(0LL, "failed to truncate to %lu bytes in output file %s", 5);
    sub_4041E0(1, v5, v143);
  }
  v29 = (unsigned int)dword_614604;
  v30 = 1LL;
  qword_614660 = dcgettext(0LL, "standard output", 5);
  sub_4043E0(1);
LABEL_75:
  v31 = sub_405C40();
  v32 = *((_QWORD *)&xmmword_614630 + 1);
  v33 = xmmword_614630;
  qword_6145D0 = v31;
  qword_6145C8 = v31 + 1000000000;
  if ( xmmword_614630 != 0 )
  {
    v34 = qword_614650;
    v29 = (size_t)qword_614668;
    v30 = 0LL;
    v35 = qword_6145B0;
    if ( (sub_405150(0LL, qword_614668, *((_QWORD *)&xmmword_614630 + 1), qword_614650, &xmmword_614630)
       || v34 * v32 + v33 + v35 != qword_6145B0 && byte_6145A9 != 1)
      && dword_6142BC != 1 )
    {
      sub_4084B0(0LL, 3LL, qword_614668);
      dcgettext(0LL, "%s: cannot skip to specified offset", 5);
      v29 = 0LL;
      v30 = 0LL;
      sub_4041E0(0, 0, v143);
    }
  }
  if ( xmmword_614620 != 0 )
  {
    v30 = 1LL;
    n = xmmword_614620;
    v29 = (size_t)qword_614660;
    v36 = sub_405150(1LL, qword_614660, *((_QWORD *)&xmmword_614620 + 1), offset, &n);
    if ( v36 )
    {
      memset(s1, 0, offset);
      do
      {
        v37 = offset;
        v30 = (__off_t)s1;
        v29 = offset;
        if ( v37 != sub_404C30(s1, offset) )
          goto LABEL_346;
        --v36;
      }
      while ( v36 );
      v38 = n;
      if ( n )
      {
LABEL_85:
        v30 = (__off_t)s1;
        v29 = v38;
        if ( sub_404C30(s1, v38) != v38 )
        {
LABEL_346:
          sub_4083E0(4LL, qword_614660);
          dcgettext(0LL, "writing to %s", 5);
          sub_4041E0(0, *(_DWORD *)v144, v143);
          sub_404E30();
        }
      }
    }
    else if ( n )
    {
      memset(s1, 0, n);
      v38 = n;
      goto LABEL_85;
    }
  }
  if ( !(qword_614610 | qword_6142C0) )
  {
    LODWORD(v145) = 0;
    goto LABEL_254;
  }
  if ( !src )
    sub_404A80();
  sub_404BA0();
  LODWORD(v145) = 0;
  v39 = 0LL;
LABEL_90:
  if ( dword_6142BC == 4 )
    goto LABEL_114;
  while ( 1 )
  {
    v40 = qword_614610;
    v41 = qword_6142C0;
    v42 = qword_6145E8 + qword_6145E0;
    v43 = dword_61460C;
    if ( qword_6145E8 + qword_6145E0 >= qword_6142C0 + (unsigned __int64)(qword_614610 != 0) )
      break;
    v44 = src;
    if ( (dword_61460C & 0x500) == 1280 )
    {
      v45 = dword_61460C & 0x18;
      if ( dword_61460C & 0x18 )
        v45 = 32;
      v44 = memset(src, v45, qword_614650);
    }
    if ( v42 < v41 )
    {
      v30 = 0LL;
      v46 = qword_6144E0(0LL, v44, qword_614650);
      v47 = v46 == 0;
      if ( v46 > 0 )
      {
LABEL_98:
        v48 = __CFADD__(qword_6145B0, v46);
        v49 = v46;
        qword_6145B0 += v46;
        if ( v48 )
          byte_6145A9 = 1;
        if ( byte_6144EB )
          sub_4045A0(0);
        v50 = qword_614650;
        if ( qword_614650 > v49 )
          goto LABEL_103;
        goto LABEL_165;
      }
    }
    else
    {
      v30 = 0LL;
      v46 = qword_6144E0(0LL, v44, v40);
      v47 = v46 == 0;
      if ( v46 > 0 )
        goto LABEL_98;
    }
    v43 = dword_61460C;
    if ( v47 )
    {
      byte_6144E9 |= byte_6144EB;
      if ( byte_6144EA )
        LOBYTE(v146) = (dword_61460C & 0x200) == 0;
      byte_6144E8 = (byte_6144E8 | v146) & 1;
      break;
    }
    if ( !(dword_61460C & 0x100) || dword_6142BC != 1 )
    {
      sub_4083E0(4LL, qword_614668);
      dcgettext(0LL, "error reading %s", 5);
      v30 = 0LL;
      sub_4041E0(0, *(_DWORD *)v144, v143);
      v43 = dword_61460C;
      if ( !(dword_61460C & 0x100) )
      {
        LODWORD(v145) = 1;
        break;
      }
    }
    sub_4040B0();
    v30 = 0LL;
    v79 = qword_614650 - v39;
    sub_4045A0(0);
    if ( byte_6145BC )
    {
      v48 = __CFADD__(qword_6145B0, v79);
      v84 = qword_6145B0 + v79;
      qword_6145B0 += v79;
      if ( v48 )
      {
        byte_6145A9 = 1;
LABEL_176:
        sub_4083E0(4LL, qword_614668);
        dcgettext(0LL, "offset overflow while reading file %s", 5);
        v30 = 0LL;
        sub_4041E0(0, 0, v143);
        goto LABEL_161;
      }
      byte_6145A9 |= v84 < 0;
      if ( byte_6145A9 )
        goto LABEL_176;
      v30 = 0LL;
      v89 = lseek(0, 0LL, 1);
      if ( v89 < 0 )
        goto LABEL_160;
      if ( v89 != v84 )
      {
        v90 = v84 - v89;
        if ( ((v90 & 0x8000000000000000LL) != 0LL || v79 < v90) && dword_6142BC != 1 )
        {
          dcgettext(0LL, "warning: invalid file offset after failed read", 5);
          sub_4041E0(0, 0, v143);
        }
        v30 = (__off_t)qword_614668;
        if ( sub_4044D0(qword_614668, 0LL, v90, 1LL) < 0 )
        {
          if ( !*(_DWORD *)v144 )
          {
            dcgettext(0LL, "cannot work around kernel bug after all", 5);
            sub_4041E0(0, 0, v143);
          }
LABEL_160:
          sub_4084B0(0LL, 3LL, qword_614668);
          dcgettext(0LL, "%s: cannot seek", 5);
          v30 = 0LL;
          sub_4041E0(0, *(_DWORD *)v144, v143);
LABEL_161:
          byte_6145BC = 0;
          dword_6145B8 = 29;
          LODWORD(v145) = 1;
          goto LABEL_162;
        }
      }
    }
    else if ( dword_6145B8 != 29 )
    {
      *(_DWORD *)v144 = dword_6145B8;
      goto LABEL_160;
    }
LABEL_162:
    if ( !(dword_61460C & 0x400) || v39 )
      goto LABEL_90;
    v50 = qword_614650;
    v49 = 0LL;
    if ( qword_614650 )
    {
LABEL_103:
      ++qword_6145E8;
      v39 = v49;
      if ( dword_61460C & 0x400 )
      {
        if ( dword_61460C & 0x100 )
        {
          v49 = v50;
        }
        else
        {
          v51 = v50 - v49;
          v52 = dword_61460C & 0x18;
          if ( dword_61460C & 0x18 )
            v52 = 32;
          v39 = v49;
          v53 = (char *)src + v49;
          v49 = v50;
          memset(v53, v52, v51);
        }
      }
      goto LABEL_108;
    }
LABEL_165:
    ++qword_6145E0;
    v39 = 0LL;
LABEL_108:
    v54 = (char *)src;
    v55 = (char *)s1;
    if ( src == s1 )
    {
      v30 = (__off_t)src;
      v88 = sub_404C30(src, v49);
      qword_6145D8 += v88;
      if ( v88 != v49 )
        goto LABEL_201;
      if ( qword_614650 == v49 )
        ++qword_6145F0;
      else
        ++qword_6145F8;
      goto LABEL_90;
    }
    if ( byte_614600 && v49 )
    {
      v85 = (char *)src + v49;
      v86 = (char *)src;
      do
      {
        v87 = (unsigned __int8)*v86++;
        *(v86 - 1) = byte_6143E0[v87];
      }
      while ( v86 != v85 );
    }
    v56 = dword_61460C;
    if ( (dword_61460C & 0x80u) != 0 )
    {
      if ( byte_6143C1 )
      {
        v80 = (__int64)(v54 - 1);
        ++v49;
        byte_6143C1 = 0;
        *(v54 - 1) = byte_6143C0;
      }
      else
      {
        v80 = (__int64)v54++;
      }
      if ( v49 & 1 )
      {
        --v49;
        byte_6143C1 = 1;
        v81 = (char *)(v49 + v80);
        byte_6143C0 = *v81;
      }
      else
      {
        v81 = (char *)(v49 + v80);
      }
      v82 = (__int64)&v81[-2 * (v49 >> 1)];
      if ( v49 >> 1 )
      {
        do
        {
          v83 = *(v81 - 2);
          v81 -= 2;
          v81[2] = v83;
        }
        while ( v81 != (char *)v82 );
      }
    }
    if ( v56 & 8 )
    {
      v30 = (__off_t)v54;
      sub_404EF0(v54, v49);
      goto LABEL_90;
    }
    if ( !(v56 & 0x10) )
    {
      while ( 1 )
      {
        v74 = offset;
        v75 = v54;
        v76 = offset - qword_614588;
        if ( offset - qword_614588 > v49 )
          v76 = v49;
        v30 = (__off_t)&v55[qword_614588];
        v77 = v76;
        v49 -= v76;
        v54 += v76;
        v78 = qword_614588 + v76;
        memcpy((void *)v30, v75, v77);
        qword_614588 = v78;
        if ( v74 <= v78 )
          sub_404E50();
        if ( !v49 )
          break;
        v55 = (char *)s1;
      }
      goto LABEL_90;
    }
    v30 = (__off_t)v54;
    sub_405000(v54, v49);
    if ( dword_6142BC == 4 )
    {
LABEL_114:
      v57 = sub_405C40();
      if ( v57 >= qword_6145C8 )
      {
        v30 = v57;
        sub_403D50(v57);
        qword_6145C8 += 1000000000LL;
      }
    }
  }
  if ( byte_6143C1 )
  {
    if ( v43 & 8 )
    {
      v30 = (__off_t)&byte_6143C0;
      sub_404EF0(&byte_6143C0, 1LL);
      v43 = dword_61460C;
    }
    else if ( v43 & 0x10 )
    {
      v30 = (__off_t)&byte_6143C0;
      sub_405000(&byte_6143C0, 1LL);
      v43 = dword_61460C;
    }
    else
    {
      v99 = qword_614588;
      v48 = ++qword_614588 < offset;
      *((_BYTE *)s1 + v99) = byte_6143C0;
      if ( v48 )
        goto LABEL_235;
      sub_404E50();
      v43 = dword_61460C;
    }
  }
  if ( !(v43 & 8) )
    goto LABEL_235;
  v101 = qword_614580;
  if ( qword_614580 )
  {
    if ( qword_614640 <= (unsigned __int64)qword_614580 )
      goto LABEL_236;
    do
    {
      v102 = qword_614588;
      v48 = ++qword_614588 < offset;
      *((_BYTE *)s1 + v102) = byte_6142B9;
      if ( !v48 )
        sub_404E50();
      ++v101;
    }
    while ( v101 < qword_614640 );
LABEL_235:
    v43 = dword_61460C;
    if ( qword_614580 )
    {
LABEL_236:
      if ( !(v43 & 0x10) )
        goto LABEL_238;
      v100 = qword_614588;
      v48 = ++qword_614588 < offset;
      *((_BYTE *)s1 + v100) = byte_6142BA;
      if ( v48 )
        goto LABEL_238;
LABEL_308:
      sub_404E50();
    }
  }
LABEL_238:
  if ( qword_614588 )
  {
    v30 = (__off_t)s1;
    v91 = sub_404C30(s1, qword_614588);
    qword_6145D8 += v91;
    if ( v91 )
      ++qword_6145F8;
    if ( v91 != qword_614588 )
    {
LABEL_201:
      sub_4083E0(4LL, qword_614660);
      v92 = "error writing %s";
      goto LABEL_202;
    }
  }
  if ( byte_614618 )
  {
    v30 = 1LL;
    if ( __fxstat(1, 1, (struct stat *)&n) )
    {
      sub_4083E0(4LL, qword_614660);
      v92 = "cannot fstat %s";
LABEL_202:
      dcgettext(0LL, v92, 5);
      v30 = 0LL;
      v29 = *(unsigned int *)v144;
      sub_4041E0(0, v29, v143);
    }
    else
    {
      if ( (v149.m128i_i16[0] & 0xF000) != 0x8000 )
        goto LABEL_240;
      v30 = 1LL;
      v108 = lseek(1, 0LL, 1);
      if ( v108 < 0 )
        goto LABEL_240;
      if ( v108 <= v150.m128i_i64[1] )
        goto LABEL_240;
      v30 = v108;
      if ( !(unsigned int)sub_404BF0(v108) )
        goto LABEL_240;
      sub_4083E0(4LL, qword_614660);
      dcgettext(0LL, "failed to truncate to %ld bytes in output file %s", 5);
      v30 = 0LL;
      v29 = *(unsigned int *)v144;
      sub_4041E0(0, v29, v143);
    }
    LODWORD(v145) = 1;
  }
  else
  {
LABEL_240:
    LOWORD(v29) = dword_61460C;
    if ( dword_61460C & 0x4000 && (v30 = 1LL, v107 = fdatasync(1), v29 = (unsigned int)dword_61460C, v107) )
    {
      if ( (*(_DWORD *)v144 - 22) & 0xFFFFFFEF )
      {
        sub_4083E0(4LL, qword_614660);
        dcgettext(0LL, "fdatasync failed for %s", 5);
        v29 = *(unsigned int *)v144;
        sub_4041E0(0, v29, v143);
        LODWORD(v145) = 1;
      }
      dword_61460C |= 0x8000u;
LABEL_242:
      while ( 1 )
      {
        v30 = 1LL;
        if ( !fsync(1) )
          break;
        if ( *(_DWORD *)v144 != 4 )
        {
          sub_4083E0(4LL, qword_614660);
          v92 = "fsync failed for %s";
          goto LABEL_202;
        }
      }
    }
    else
    {
      v29 = (unsigned __int16)v29 & 0x8000;
      if ( (_DWORD)v29 )
        goto LABEL_242;
    }
  }
  if ( qword_6142C0 || qword_614610 )
  {
    if ( byte_6144EB || byte_6144E9 )
    {
      v29 = 0LL;
      v30 = 0LL;
      sub_4045A0(0);
    }
    if ( byte_6144EA || byte_6144E8 )
    {
      v29 = 0LL;
      v30 = 1LL;
      sub_4045A0(1);
    }
  }
  else
  {
LABEL_254:
    if ( byte_6144EB )
    {
      v29 = 0LL;
      v30 = 0LL;
      if ( !(unsigned __int8)sub_4045A0(0) )
      {
        sub_4084B0(0LL, 3LL, qword_614668);
        dcgettext(0LL, "failed to discard cache for: %s", 5);
        v30 = 0LL;
        v29 = *(unsigned int *)v144;
        sub_4041E0(0, v29, v143);
        LODWORD(v145) = 1;
      }
    }
    if ( byte_6144EA )
    {
      v29 = 0LL;
      v30 = 1LL;
      if ( !(unsigned __int8)sub_4045A0(1) )
      {
        sub_4084B0(0LL, 3LL, qword_614660);
        dcgettext(0LL, "failed to discard cache for: %s", 5);
        v30 = 0LL;
        v29 = *(unsigned int *)v144;
        sub_4041E0(0, v29, v143);
        LODWORD(v145) = 1;
      }
    }
  }
  sub_404760(v30, v29);
  sub_4040B0();
  sub_404810();
  return (unsigned int)v145;
}

// positive sp value has been detected, the output may be wrong!
void __usercall __noreturn start(__int64 a1@<rax>, void (*a2)(void)@<rdx>)
{
  int v2; // esi
  int v3; // [rsp-8h] [rbp-8h]
  __int64 _0; // [rsp+0h] [rbp+0h]

  v2 = v3;
  *(_QWORD *)&v3 = a1;
  _libc_start_main((int (__fastcall *)(int, char **, char **))main, v2, (char **)&_0, init, fini, a2, &v3);
  __halt();
}

void *sub_403C7B()
{
  void *result; // rax

  result = &unk_614348;
  if ( &unk_614348 != &unk_614348 )
    result = 0LL;
  return result;
}

__int64 sub_403C9A()
{
  return 0LL;
}

void *sub_403CD1()
{
  void *result; // rax

  if ( !byte_614388 )
  {
    while ( qword_614390 < (unsigned __int64)(&qword_613E48 - qword_613E40 - 1) )
      ((void (*)(void))qword_613E40[++qword_614390])();
    result = sub_403C7B();
    byte_614388 = 1;
  }
  return result;
}

__int64 sub_403D28()
{
  return sub_403C9A();
}

void __fastcall sub_403D30(int a1)
{
  sig = a1;
}

__int64 sub_403D40()
{
  return (unsigned int)++dword_6144EC;
}

int __fastcall sub_403D50(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // r12
  const char *v3; // r13
  unsigned __int64 v4; // rbx
  double v5; // xmm0_8
  const char *v6; // rbx
  double v7; // xmm0_8
  __int64 v8; // r9
  const char *v9; // r8
  char *v10; // rax
  size_t v11; // rax
  unsigned __int64 v12; // r14
  char *v13; // rax
  char *v14; // r9
  int v15; // ebx
  __int64 v16; // r9
  char *v17; // rax
  char *v18; // rax
  unsigned __int64 v19; // r12
  char *v20; // rax
  char *v22; // [rsp-10h] [rbp-818h]
  char v23; // [rsp+10h] [rbp-7F8h]
  char v24; // [rsp+30h] [rbp-7D8h]
  char v25; // [rsp+2BEh] [rbp-54Ah]
  char v26; // [rsp+54Ch] [rbp-2BCh]

  v1 = a1;
  if ( !a1 )
    v1 = sub_405C40();
  v2 = (const char *)sub_405D70(qword_6145D8, &v24, 465LL, 1LL, 1LL);
  v3 = (const char *)sub_405D70(qword_6145D8, &v25, 497LL, 1LL, 1LL);
  if ( qword_6145D0 >= v1 )
  {
    v18 = dcgettext(0LL, "Infinity", 5);
    v6 = &v26;
    __snprintf_chk(&v26, 654LL, 1LL, 654LL, "%s B/s", v18);
    v7 = 0.0;
  }
  else
  {
    v4 = v1 - qword_6145D0;
    if ( (v4 & 0x8000000000000000LL) != 0LL )
      v5 = (double)(int)(v4 & 1 | (v4 >> 1)) + (double)(int)(v4 & 1 | (v4 >> 1));
    else
      v5 = (double)(int)v4;
    v6 = (const char *)sub_405D70(qword_6145D8, &v26, 465LL, 1000000000LL, v4);
    v7 = v5 / 1000000000.0;
    strcpy((char *)&v6[strlen(v6)], "/s");
  }
  v9 = "%g s";
  if ( a1 )
  {
    v10 = stderr->_IO_write_ptr;
    if ( v10 >= stderr->_IO_write_end )
    {
      __overflow(stderr, 13);
      v9 = "%.0f s";
    }
    else
    {
      v9 = "%.0f s";
      stderr->_IO_write_ptr = v10 + 1;
      *v10 = 13;
    }
  }
  __snprintf_chk(&v23, 24LL, 1LL, 24LL, v9, v8);
  if ( v2[strlen(v2) - 2] == 32 )
  {
    v19 = qword_6145D8;
    v20 = dcngettext(0LL, "%lu byte copied, %s, %s", "%lu bytes copied, %s, %s", qword_6145D8, 5);
    LODWORD(v17) = __fprintf_chk(stderr, 1LL, v20, v19, &v23, v6, v7);
    v15 = (int)v17;
  }
  else
  {
    v11 = strlen(v3);
    v12 = qword_6145D8;
    if ( v3[v11 - 2] == 32 )
    {
      v13 = dcgettext(0LL, "%lu bytes (%s) copied, %s, %s", 5);
      LODWORD(v22) = (_DWORD)v6;
      v14 = &v23;
    }
    else
    {
      v13 = dcgettext(0LL, "%lu bytes (%s, %s) copied, %s, %s", 5);
      v14 = (char *)v3;
      v22 = &v23;
    }
    v15 = __fprintf_chk(stderr, 1LL, v13, v12, v2, v14, v7);
    LODWORD(v17) = (_DWORD)v22;
  }
  if ( a1 )
  {
    if ( v15 >= 0 && dword_6145C0 > v15 )
      LODWORD(v17) = __fprintf_chk(stderr, 1LL, "%*s", (unsigned int)(dword_6145C0 - v15), "", v16, v7);
    dword_6145C0 = v15;
  }
  else
  {
    v17 = stderr->_IO_write_ptr;
    if ( v17 >= stderr->_IO_write_end )
    {
      LODWORD(v17) = __overflow(stderr, 10);
    }
    else
    {
      stderr->_IO_write_ptr = v17 + 1;
      *v17 = 10;
    }
  }
  return (int)v17;
}

void __fastcall sub_4040B0(double a1)
{
  char *v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rbp
  char *v5; // rax
  unsigned __int64 v6; // rbx
  char *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9

  if ( dword_6142BC != 1 )
  {
    if ( dword_6145C0 > 0 )
    {
      v1 = stderr->_IO_write_ptr;
      if ( v1 >= stderr->_IO_write_end )
      {
        __overflow(stderr, 10);
      }
      else
      {
        stderr->_IO_write_ptr = v1 + 1;
        *v1 = 10;
      }
      dword_6145C0 = 0;
    }
    v2 = qword_6145E0;
    v3 = qword_6145F0;
    v4 = qword_6145E8;
    v5 = dcgettext(0LL, "%lu+%lu records in\n%lu+%lu records out\n", 5);
    __fprintf_chk(stderr, 1LL, v5, v2, v4, v3, a1);
    v6 = qword_6145A0;
    if ( qword_6145A0 )
    {
      v7 = dcngettext(0LL, "%lu truncated record\n", "%lu truncated records\n", qword_6145A0, 5);
      __fprintf_chk(stderr, 1LL, v7, v6, v8, v9, a1);
    }
    if ( dword_6142BC != 2 )
      sub_403D50(0LL);
  }
}

__int64 __usercall sub_4041E0@<rax>(int status@<edi>, int errnum@<esi>)
{
  char *v2; // rax

  if ( dword_6145C0 > 0 )
  {
    v2 = stderr->_IO_write_ptr;
    if ( v2 >= stderr->_IO_write_end )
    {
      __overflow(stderr, 10);
    }
    else
    {
      stderr->_IO_write_ptr = v2 + 1;
      *v2 = 10;
    }
    dword_6145C0 = 0;
  }
  return sub_408710(status, errnum);
}

unsigned __int64 __fastcall sub_4042D0(char *a1, unsigned int *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // [rsp+0h] [rbp-28h]
  _BYTE *v9; // [rsp+8h] [rbp-20h]

  v2 = sub_408F50(a1);
  v3 = v2;
  if ( v2 != 2 )
  {
    result = v8;
    if ( !v3 )
      return result;
LABEL_5:
    *a2 = v3;
    return 0LL;
  }
  if ( *v9 != 120 )
    goto LABEL_5;
  v5 = sub_4042D0(v9 + 1, a2, v2);
  v6 = v5;
  if ( v5 )
  {
    v7 = v5 * v8 / v5;
    if ( v8 != v7 )
    {
      *a2 = 1;
      return 0LL;
    }
  }
  else
  {
    v7 = v8;
  }
  if ( !v7 && !memcmp(a1, "0x", 2uLL) )
  {
    sub_408610(1LL, "00x");
    sub_408610(0LL, 4250511LL);
    dcgettext(0LL, "warning: %s is a zero multiplier; use %s if that is intended", 5);
    sub_4041E0(0, 0);
    v7 = v8;
  }
  return v6 * v7;
}

void __fastcall sub_4043E0(int fildes, int a2, __int64 a3)
{
  __int64 v3; // r13
  int v4; // eax
  int v5; // ebp
  unsigned int v6; // ebx
  int *v7; // rax
  __int64 v8; // [rsp+0h] [rbp-B8h]
  int v9; // [rsp+18h] [rbp-A0h]

  if ( a2 & 0xFFFDFEFF )
  {
    v3 = a3;
    v4 = sub_4095D0(fildes);
    v5 = v4;
    v6 = v4 | a2 & 0xFFFDFEFF;
    if ( v4 < 0 )
      goto LABEL_11;
    if ( v4 != v6 )
    {
      if ( v6 & 0x10000 )
      {
        if ( !__fxstat(1, (unsigned __int8)fildes, (struct stat *)&v8) )
        {
          if ( (v9 & 0xF000) == 0x4000 )
            goto LABEL_12;
          *__errno_location() = 20;
        }
        goto LABEL_11;
      }
      while ( (unsigned int)sub_4095D0(fildes) == -1 )
      {
LABEL_11:
        v5 = sub_4083E0(4LL, v3);
        v6 = (unsigned __int64)dcgettext(0LL, "setting flags for %s", 5);
        v7 = __errno_location();
        sub_4041E0(1, *v7);
LABEL_12:
        if ( (v6 & 0xFFFEFFFF) == v5 )
          return;
      }
    }
  }
}

__off_t __fastcall sub_4044D0(__int64 a1, int a2, __off_t a3, int a4)
{
  int v4; // er12
  __off_t v5; // rbp
  int v6; // er13
  __off_t v7; // rbp
  __int64 v9; // [rsp+0h] [rbp-88h]
  __int64 v10; // [rsp+8h] [rbp-80h]
  __int64 v11; // [rsp+28h] [rbp-60h]
  __int64 v12; // [rsp+30h] [rbp-58h]
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+58h] [rbp-30h]

  v4 = a4;
  v5 = a3;
  v6 = ioctl(a2, 0x80306D02uLL, &v9);
  v7 = lseek(a2, v5, v4);
  if ( v7 >= 0 && !v6 && !ioctl(a2, 0x80306D02uLL, &v12) && v10 == v13 && v11 == v14 )
  {
    if ( dword_6142BC != 1 )
    {
      dcgettext(
        0LL,
        "warning: working around lseek kernel bug for file (%s)\n"
        "  of mt_type=0x%0lx -- see <sys/mtio.h> for the list of types",
        5);
      sub_4041E0(0, 0);
    }
    v7 = -1LL;
    *__errno_location() = 0;
  }
  return v7;
}

__int64 __fastcall sub_4045A0(int fd, __int64 a2)
{
  char v2; // r15
  off_t *v3; // rax
  off_t v4; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  unsigned int v7; // er12
  __int64 v9; // rbp
  int v10; // er13
  __off_t v11; // rsi
  unsigned __int64 v12; // rsi

  if ( fd )
  {
    v2 = byte_6144E8;
    v3 = (off_t *)&unk_6143A0;
  }
  else
  {
    v2 = byte_6144E9;
    v3 = (off_t *)&unk_6143A8;
  }
  v4 = *v3;
  if ( a2 )
  {
    v5 = a2 + v4;
    v6 = v5 & 0x1FFFF;
    *v3 = v6;
    if ( v5 > v6 )
    {
      v4 = v5 - v6;
      if ( v4 )
      {
        v9 = a2;
        v10 = fd;
        if ( fd )
          goto LABEL_14;
LABEL_10:
        v7 = (unsigned __int8)byte_6145BC;
        v11 = qword_6145B0;
        if ( !byte_6145BC )
        {
          *__errno_location() = 29;
          return v7;
        }
        goto LABEL_18;
      }
    }
    return 1;
  }
  if ( !v4 && !v2 )
    return 1;
  v6 = 0LL;
  v9 = 0LL;
  v10 = fd;
  if ( !fd )
    goto LABEL_10;
LABEL_14:
  v11 = qword_6142B0;
  v7 = 0;
  if ( qword_6142B0 == -1 )
    return v7;
  if ( qword_6142B0 < 0 )
  {
    v11 = lseek(1, 0LL, 1);
    qword_6142B0 = v11;
  }
  else
  {
    if ( !v9 )
    {
LABEL_19:
      v12 = v11 - v4;
      if ( v9 || !v4 )
      {
        v12 -= v6;
        if ( v4 )
          goto LABEL_23;
      }
      else if ( !v2 )
      {
        v12 -= v6;
LABEL_23:
        LOBYTE(v7) = posix_fadvise(v10, v12, v4, 4) != -1;
        return v7;
      }
      v4 = 0LL;
      v12 -= v12 % qword_614658;
      goto LABEL_23;
    }
    v11 = v6 + v4 + qword_6142B0;
    qword_6142B0 += v6 + v4;
  }
LABEL_18:
  v7 = 0;
  if ( v11 >= 0 )
    goto LABEL_19;
  return v7;
}

__int64 sub_404720()
{
  __int64 result; // rax

  if ( byte_6142B8 )
    return sub_405B30();
  result = sub_405AB0(stderr);
  if ( (_DWORD)result )
    _exit(1);
  return result;
}

int sub_404760()
{
  int result; // eax
  int *v1; // rax
  int *v2; // rax

  if ( close(0) < 0 )
  {
    sub_4083E0(4LL, qword_614668);
    dcgettext(0LL, "closing input file %s", 5);
    v1 = __errno_location();
    sub_4041E0(1, *v1);
    goto LABEL_5;
  }
  result = close(1);
  if ( result < 0 )
  {
LABEL_5:
    sub_4083E0(4LL, qword_614660);
    dcgettext(0LL, "closing output file %s", 5);
    v2 = __errno_location();
    sub_4041E0(1, *v2);
    result = sub_404810();
  }
  return result;
}

__int64 __fastcall sub_404810(double a1)
{
  __int64 result; // rax
  int v2; // ebx
  __int64 v3; // [rsp-88h] [rbp-88h]

  while ( 1 )
  {
    if ( !sig )
    {
      result = (unsigned int)dword_6144EC;
      if ( !dword_6144EC )
        break;
    }
    sigprocmask(0, &set, (sigset_t *)&v3);
    v2 = sig;
    if ( dword_6144EC )
      --dword_6144EC;
    sigprocmask(2, (const sigset_t *)&v3, 0LL);
    if ( v2 )
    {
      sub_404760();
      sub_4040B0(a1);
      raise(v2);
    }
    else
    {
      sub_4040B0(a1);
    }
  }
  return result;
}

__int64 __fastcall sub_4048B0(int fd2, char *file, int oflag, double a4)
{
  int v4; // er12
  unsigned int v5; // ebx

  v4 = oflag;
  do
  {
    sub_404810(a4);
    v5 = sub_405BD0(fd2, file, v4);
  }
  while ( (v5 & 0x80000000) != 0 && *__errno_location() == 4 );
  return v5;
}

__int64 __fastcall sub_404900(int fd, void *buf, size_t nbytes, double a4)
{
  unsigned __int64 v4; // rbp
  int v5; // edx
  ssize_t v6; // rax
  signed __int64 v7; // rbx
  int *v8; // rax

  v4 = nbytes;
  do
  {
    sub_404810(a4);
    v6 = read(fd, buf, v4);
    v7 = v6;
    if ( v6 == -1 )
    {
      v8 = __errno_location();
      v5 = *v8;
      if ( *v8 == 22 )
      {
        if ( (__int64)qword_6143B8 > 0 && qword_6143B8 < v4 && oflag & 0x4000 )
        {
          *v8 = 0;
          v7 = 0LL;
        }
        goto LABEL_11;
      }
    }
    else
    {
      if ( v6 >= 0 )
        break;
      v5 = *__errno_location();
    }
  }
  while ( v5 == 4 );
  if ( v7 <= 0 || v7 >= v4 )
  {
    if ( v7 <= 0 )
      goto LABEL_11;
  }
  else
  {
    sub_404810(a4);
  }
  if ( byte_6145A8 && (__int64)qword_6143B8 > 0 && qword_6143B8 < v4 )
  {
    if ( dword_6142BC != 1 )
    {
      dcngettext(
        0LL,
        "warning: partial read (%lu byte); suggest iflag=fullblock",
        "warning: partial read (%lu bytes); suggest iflag=fullblock",
        qword_6143B8,
        5);
      sub_4041E0(0, 0);
    }
    byte_6145A8 = 0;
  }
LABEL_11:
  qword_6143B8 = v7;
  return v7;
}

__int64 __fastcall sub_404A10(int fd, void *buf, size_t nbytes, double a4)
{
  __int64 v4; // r12
  char *v5; // rbp
  size_t v6; // rbx
  __int64 result; // rax

  if ( !nbytes )
    return 0LL;
  v4 = 0LL;
  v5 = (char *)buf;
  v6 = nbytes;
  while ( 1 )
  {
    result = sub_404900(fd, v5, v6, a4);
    if ( result < 0 )
      break;
    if ( result )
    {
      v4 += result;
      v5 += result;
      v6 -= result;
      if ( v6 )
        continue;
    }
    return v4;
  }
  return result;
}

__int64 sub_404A80()
{
  unsigned __int64 v0; // rbx
  size_t v1; // rbp
  char *v2; // rax
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // rtt
  __int64 v6; // [rsp+0h] [rbp-2A8h]

  v0 = qword_614658;
  v1 = qword_614650;
  v2 = (char *)malloc(qword_614650 + 2 * qword_614658 + 3);
  if ( v2 )
  {
    v3 = (unsigned __int64)&v2[v0 + 1];
    v5 = (unsigned __int64)&v2[v0 + 1];
    result = v3 / v0;
    src = (void *)(v3 - v5 % v0);
  }
  else
  {
    sub_405D70(v1, &v6, 497LL, 1LL, 1LL);
    dcgettext(0LL, "memory exhausted by input buffer of size %lu bytes (%s)", 5);
    sub_4041E0(1, 0);
    result = sub_404B10();
  }
  return result;
}

__int64 sub_404B10()
{
  unsigned __int64 v0; // rbx
  size_t v1; // rbp
  char *v2; // rax
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // rtt
  __int64 v6; // [rsp+0h] [rbp-2A8h]

  v0 = qword_614658;
  v1 = offset;
  v2 = (char *)malloc(qword_614658 + offset - 1);
  if ( v2 )
  {
    v3 = (unsigned __int64)&v2[v0 - 1];
    v5 = (unsigned __int64)&v2[v0 - 1];
    result = v3 / v0;
    s1 = (void *)(v3 - v5 % v0);
  }
  else
  {
    sub_405D70(v1, &v6, 497LL, 1LL, 1LL);
    dcgettext(0LL, "memory exhausted by output buffer of size %lu bytes (%s)", 5);
    sub_4041E0(1, 0);
    result = sub_404BA0();
  }
  return result;
}

void *sub_404BA0()
{
  void *result; // rax

  if ( !s1 )
  {
    if ( dword_61460C & 0x800 )
    {
      result = (void *)sub_404B10();
    }
    else
    {
      if ( !src )
        sub_404A80();
      result = src;
      s1 = src;
    }
  }
  return result;
}

__int64 __fastcall sub_404BF0(__off_t length, double a2)
{
  int v2; // ebx

  do
  {
    sub_404810(a2);
    v2 = ftruncate(1, length);
  }
  while ( v2 < 0 && *__errno_location() == 4 );
  return (unsigned int)v2;
}

unsigned __int64 __fastcall sub_404C30(void *s1, __off_t offset, double a3)
{
  __off_t v3; // rbp
  unsigned __int64 v4; // rbx
  int v5; // er13
  _BYTE *v6; // rsi
  size_t v7; // rdx
  ssize_t v8; // rax
  int *v10; // rax

  v3 = offset;
  if ( dword_614604 & 0x4000 && ::offset > offset )
  {
    sub_4095D0(1);
    if ( (unsigned int)sub_4095D0(1) && dword_6142BC != 1 )
    {
      sub_4084B0(0LL, 3LL, qword_614660);
      dcgettext(0LL, "failed to turn off O_DIRECT: %s", 5);
      v10 = __errno_location();
      sub_4041E0(0, *v10);
    }
    byte_6144E8 = 1;
    sub_4045A0(1, 0LL);
    dword_61460C |= 0x8000u;
  }
  v4 = 0LL;
  if ( !offset )
    return v4;
  while ( 1 )
  {
    sub_404810(a3);
    v5 = dword_61460C;
    byte_614618 = 0;
    if ( dword_61460C & 0x10000 )
    {
      v6 = s1;
      v7 = v3;
      while ( !*v6 )
      {
        ++v6;
        if ( !--v7 )
          goto LABEL_19;
        if ( !(v7 & 0xF) )
        {
          if ( memcmp(s1, v6, v7) )
            break;
LABEL_19:
          if ( lseek(1, v3, 1) < 0 )
          {
            dword_61460C = v5 & 0xFFFEFFFF;
            break;
          }
          byte_614618 = 1;
          v8 = v3;
          if ( v3 >= 0 )
            goto LABEL_6;
          if ( *__errno_location() == 4 )
            goto LABEL_7;
          goto LABEL_16;
        }
      }
    }
    v8 = write(1, (char *)s1 + v4, v3 - v4);
    if ( v8 >= 0 )
      break;
    if ( *__errno_location() != 4 )
      goto LABEL_16;
LABEL_7:
    if ( v3 <= v4 )
      goto LABEL_16;
  }
  if ( v8 )
  {
LABEL_6:
    v4 += v8;
    goto LABEL_7;
  }
  *__errno_location() = 28;
LABEL_16:
  if ( !byte_6144EA || !v4 )
    return v4;
  sub_4045A0(1, v4);
  return v4;
}

void __fastcall __noreturn sub_404E30(double a1)
{
  sub_404760();
  sub_4040B0(a1);
  sub_404810(a1);
  exit(1);
}

unsigned __int64 __fastcall sub_404E50(double a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rbx
  int *v3; // rax

  result = sub_404C30(s1, offset, a1);
  qword_6145D8 += result;
  if ( offset != result )
  {
    v2 = result;
    sub_4083E0(4LL, qword_614660);
    dcgettext(0LL, "writing to %s", 5);
    v3 = __errno_location();
    sub_4041E0(0, *v3);
    if ( v2 )
      ++qword_6145F8;
    sub_404E30(a1);
  }
  qword_614588 = 0LL;
  ++qword_6145F0;
  return result;
}

void __fastcall sub_404EF0(_BYTE *a1, __int64 a2, double a3)
{
  _BYTE *v3; // r12
  _BYTE *v4; // rbp
  __off_t v5; // rdx
  bool v6; // cf
  __off_t v7; // rdx
  unsigned __int64 v8; // rbx

  v3 = &a1[a2];
  if ( a2 )
  {
    v4 = a1;
    do
    {
      while ( 1 )
      {
        v8 = qword_614580;
        if ( *v4 != byte_6142BA )
          break;
        if ( qword_614580 < (unsigned __int64)qword_614640 )
        {
          do
          {
            v7 = qword_614588;
            v6 = ++qword_614588 < offset;
            *((_BYTE *)s1 + v7) = byte_6142B9;
            if ( !v6 )
              sub_404E50(a3);
            ++v8;
          }
          while ( qword_614640 > v8 );
        }
        qword_614580 = 0LL;
        if ( v3 == ++v4 )
          return;
      }
      if ( qword_614580 == qword_614640 )
      {
        ++qword_6145A0;
      }
      else if ( qword_614580 < (unsigned __int64)qword_614640 )
      {
        v5 = qword_614588 + 1;
        v6 = qword_614588 + 1 < offset;
        *((_BYTE *)s1 + qword_614588) = *v4;
        qword_614588 = v5;
        if ( !v6 )
        {
          sub_404E50(a3);
          v8 = qword_614580;
        }
      }
      ++v4;
      qword_614580 = v8 + 1;
    }
    while ( v3 != v4 );
  }
}

void __fastcall sub_405000(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __off_t v6; // rdx
  bool v7; // cf
  char v8; // r13
  char v9; // cl
  __int64 v10; // rdx
  _BYTE *v11; // rdi
  __off_t v12; // rax
  unsigned __int64 v13; // rsi

  if ( a2 )
  {
    v3 = 0LL;
    v4 = a1;
    v5 = a2;
    do
    {
      while ( 1 )
      {
        v7 = qword_614580 < (unsigned __int64)qword_614640;
        v8 = *(_BYTE *)(v4 + v3);
        ++qword_614580;
        if ( v7 )
          break;
        v6 = qword_614588;
        qword_6143B0 = 0LL;
        qword_614580 = 0LL;
        v7 = ++qword_614588 < offset;
        *((_BYTE *)s1 + v6) = byte_6142BA;
        if ( !v7 )
          goto LABEL_10;
LABEL_4:
        if ( v5 <= v3 )
          return;
      }
      v9 = byte_6142B9;
      ++v3;
      if ( byte_6142B9 != v8 )
      {
        v11 = s1;
        v12 = qword_614588;
        v13 = offset;
        if ( qword_6143B0 )
        {
          while ( 1 )
          {
            v10 = v12 + 1;
            v11[v12] = v9;
            qword_614588 = v12 + 1;
            if ( v12 + 1 >= v13 )
            {
              sub_404E50(a3);
              v11 = s1;
              v10 = qword_614588;
              v13 = offset;
            }
            if ( !--qword_6143B0 )
              break;
            v9 = byte_6142B9;
            v12 = v10;
          }
        }
        else
        {
          v10 = qword_614588;
        }
        v11[v10] = v8;
        qword_614588 = v10 + 1;
        if ( v10 + 1 < v13 )
          goto LABEL_4;
LABEL_10:
        sub_404E50(a3);
        goto LABEL_4;
      }
      ++qword_6143B0;
    }
    while ( v5 > v3 );
  }
}

__off_t __fastcall sub_405150(unsigned int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 *a5, double a6)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  __int64 *v8; // rbp
  __int64 v9; // r12
  int *v10; // r15
  __off_t v11; // r12
  __off_t result; // rax
  void *v13; // r12
  __int64 (__fastcall *v14)(_QWORD, void *, unsigned __int64); // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  bool v17; // cf
  __int64 v18; // rdx
  const char *v19; // rsi
  int errnum; // [rsp+Ch] [rbp-CCh]
  struct stat stat_buf; // [rsp+10h] [rbp-C8h]

  v6 = a3;
  v7 = a4;
  v8 = a5;
  v9 = *a5;
  v10 = __errno_location();
  *v10 = 0;
  if ( 0x7FFFFFFFFFFFFFFFLL / v7 < v6 )
  {
    if ( sub_4044D0(a2, a1, 0LL, 2) >= 0 )
      goto LABEL_45;
    errnum = 0;
LABEL_8:
    if ( a1 )
    {
      sub_404BA0();
      v13 = s1;
    }
    else
    {
      if ( !src )
        sub_404A80();
      v13 = src;
    }
    while ( 1 )
    {
      v14 = (__int64 (__fastcall *)(_QWORD, void *, unsigned __int64))qword_6144E0;
      v15 = v7;
      if ( !v6 )
        break;
      while ( 1 )
      {
        v16 = v14(a1, v13, v15);
        if ( v16 < 0 )
        {
          if ( !a1 )
          {
            sub_4083E0(4LL, a2);
            dcgettext(0LL, "error reading %s", 5);
            sub_4041E0(0, *v10);
            if ( dword_61460C & 0x100 )
              sub_4040B0(a6);
LABEL_39:
            sub_404E30(a6);
          }
          v18 = a2;
LABEL_41:
          sub_4084B0(0LL, 3LL, v18);
          v19 = "%s: cannot seek";
LABEL_42:
          dcgettext(0LL, v19, 5);
          sub_4041E0(0, errnum);
          goto LABEL_39;
        }
        if ( !v16 )
          return v6;
        if ( !a1 )
        {
          v17 = __CFADD__(qword_6145B0, v16);
          qword_6145B0 += v16;
          if ( v17 )
            byte_6145A9 = 1;
        }
        if ( !v6 )
          goto LABEL_4;
        if ( --v6 )
          break;
        v15 = *v8;
        if ( !*v8 )
          goto LABEL_44;
        v14 = (__int64 (__fastcall *)(_QWORD, void *, unsigned __int64))qword_6144E0;
LABEL_22:
        v6 = 0LL;
      }
    }
    v15 = *v8;
    goto LABEL_22;
  }
  v11 = v7 * v6 + v9;
  if ( sub_4044D0(a2, a1, v11, 1) < 0 )
  {
    errnum = *v10;
    if ( sub_4044D0(a2, a1, 0LL, 2) >= 0 )
    {
      if ( errnum )
      {
LABEL_25:
        v18 = a2;
        if ( a1 )
          goto LABEL_41;
        sub_4084B0(0LL, 3LL, a2);
        v19 = (const char *)&unk_40DBF2;
        goto LABEL_42;
      }
LABEL_45:
      errnum = 75;
      goto LABEL_25;
    }
    goto LABEL_8;
  }
  if ( a1 )
  {
LABEL_4:
    *v8 = 0LL;
    result = 0LL;
  }
  else if ( __fxstat(1, 0, &stat_buf) )
  {
    sub_4083E0(4LL, a2);
    dcgettext(0LL, "cannot fstat %s", 5);
    sub_4041E0(1, *v10);
LABEL_44:
    result = 0LL;
  }
  else
  {
    result = 0LL;
    if ( (stat_buf.st_mode & 0xD000) == 0x8000 && stat_buf.st_size < (unsigned __int64)(v11 + qword_6145B0) )
    {
      result = (v11 - stat_buf.st_size) / v7;
      v11 = stat_buf.st_size - qword_6145B0;
    }
    v17 = __CFADD__(qword_6145B0, v11);
    qword_6145B0 += v11;
    if ( v17 )
      byte_6145A9 = 1;
  }
  return result;
}

void __fastcall __noreturn sub_405460(int status, double a2)
{
  __int64 v2; // rbp
  char *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rax
  FILE *v7; // rbp
  char *v8; // rax
  FILE *v9; // rbp
  char *v10; // rax
  FILE *v11; // rbp
  char *v12; // rax
  FILE *v13; // rbp
  char *v14; // rax
  FILE *v15; // rbp
  char *v16; // rax
  FILE *v17; // rbp
  char *v18; // rax
  FILE *v19; // rbp
  char *v20; // rax
  FILE *v21; // rbp
  char *v22; // rax
  FILE *v23; // rbp
  char *v24; // rax
  FILE *v25; // rbp
  char *v26; // rax
  FILE *v27; // rbp
  char *v28; // rax
  FILE *v29; // rbp
  char *v30; // rax
  FILE *v31; // rbp
  char *v32; // rax
  FILE *v33; // rbp
  char *v34; // rax
  FILE *v35; // rbp
  char *v36; // rax
  FILE *v37; // rbp
  char *v38; // rax
  FILE *v39; // rbp
  char *v40; // rax
  FILE *v41; // rbp
  char *v42; // rax
  char *v43; // rax
  __int64 v44; // rcx
  FILE *v45; // rbp
  char *v46; // rax
  FILE *v47; // rbp
  char *v48; // rax
  const char **v49; // rax
  char *v50; // rbp
  char *v51; // rax
  char *v52; // rax
  char *v53; // r12
  char *v54; // rax
  char *v55; // rax
  char *v56; // rax
  char *v57; // rax
  char *v58; // rax
  char *v59; // rax
  __int64 v60; // rcx
  const char *v61; // [rsp+0h] [rbp-88h]
  const char *v62; // [rsp+8h] [rbp-80h]
  const char *v63; // [rsp+10h] [rbp-78h]
  const char *v64; // [rsp+18h] [rbp-70h]
  const char *v65; // [rsp+20h] [rbp-68h]
  const char *v66; // [rsp+28h] [rbp-60h]
  const char *v67; // [rsp+30h] [rbp-58h]
  const char *v68; // [rsp+38h] [rbp-50h]
  const char *v69; // [rsp+40h] [rbp-48h]
  const char *v70; // [rsp+48h] [rbp-40h]
  const char *v71; // [rsp+50h] [rbp-38h]
  const char *v72; // [rsp+58h] [rbp-30h]
  __int64 v73; // [rsp+60h] [rbp-28h]
  __int64 v74; // [rsp+68h] [rbp-20h]

  v2 = qword_614680;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2, v4, v5, a2);
    goto LABEL_3;
  }
  v6 = dcgettext(0LL, "Usage: %s [OPERAND]...\n  or:  %s OPTION\n", 5);
  __printf_chk(1LL, v6, v2, v2);
  v7 = stdout;
  v8 = dcgettext(
         0LL,
         "Copy a file, converting and formatting according to the operands.\n"
         "\n"
         "  bs=BYTES        read and write up to BYTES bytes at a time (default: 512);\n"
         "                  overrides ibs and obs\n"
         "  cbs=BYTES       convert BYTES bytes at a time\n"
         "  conv=CONVS      convert the file as per the comma separated symbol list\n"
         "  count=N         copy only N input blocks\n"
         "  ibs=BYTES       read up to BYTES bytes at a time (default: 512)\n",
         5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "  if=FILE         read from FILE instead of stdin\n"
          "  iflag=FLAGS     read as per the comma separated symbol list\n"
          "  obs=BYTES       write BYTES bytes at a time (default: 512)\n"
          "  of=FILE         write to FILE instead of stdout\n"
          "  oflag=FLAGS     write as per the comma separated symbol list\n"
          "  seek=N          skip N obs-sized blocks at start of output\n"
          "  skip=N          skip N ibs-sized blocks at start of input\n"
          "  status=LEVEL    The LEVEL of information to print to stderr;\n"
          "                  'none' suppresses everything but error messages,\n"
          "                  'noxfer' suppresses the final transfer statistics,\n"
          "                  'progress' shows periodic transfer statistics\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "\n"
          "N and BYTES may be followed by the following multiplicative suffixes:\n"
          "c =1, w =2, b =512, kB =1000, K =1024, MB =1000*1000, M =1024*1024, xM =M,\n"
          "GB =1000*1000*1000, G =1024*1024*1024, and so on for T, P, E, Z, Y.\n"
          "\n"
          "Each CONV symbol may be:\n"
          "\n",
          5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(
          0LL,
          "  ascii     from EBCDIC to ASCII\n"
          "  ebcdic    from ASCII to EBCDIC\n"
          "  ibm       from ASCII to alternate EBCDIC\n"
          "  block     pad newline-terminated records with spaces to cbs-size\n"
          "  unblock   replace trailing spaces in cbs-size records with newline\n"
          "  lcase     change upper case to lower case\n"
          "  ucase     change lower case to upper case\n"
          "  sparse    try to seek rather than write the output for NUL input blocks\n"
          "  swab      swap every pair of input bytes\n"
          "  sync      pad every input block with NULs to ibs-size; when used\n"
          "            with block or unblock, pad with spaces rather than NULs\n",
          5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(
          0LL,
          "  excl      fail if the output file already exists\n"
          "  nocreat   do not create the output file\n"
          "  notrunc   do not truncate the output file\n"
          "  noerror   continue after read errors\n"
          "  fdatasync  physically write output file data before finishing\n"
          "  fsync     likewise, but also write metadata\n",
          5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(
          0LL,
          "\n"
          "Each FLAG symbol may be:\n"
          "\n"
          "  append    append mode (makes sense only for output; conv=notrunc suggested)\n",
          5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(0LL, "  direct    use direct I/O for data\n", 5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(0LL, "  directory  fail unless a directory\n", 5);
  fputs_unlocked(v22, v21);
  v23 = stdout;
  v24 = dcgettext(0LL, "  dsync     use synchronized I/O for data\n", 5);
  fputs_unlocked(v24, v23);
  v25 = stdout;
  v26 = dcgettext(0LL, "  sync      likewise, but also for metadata\n", 5);
  fputs_unlocked(v26, v25);
  v27 = stdout;
  v28 = dcgettext(0LL, "  fullblock  accumulate full blocks of input (iflag only)\n", 5);
  fputs_unlocked(v28, v27);
  v29 = stdout;
  v30 = dcgettext(0LL, "  nonblock  use non-blocking I/O\n", 5);
  fputs_unlocked(v30, v29);
  v31 = stdout;
  v32 = dcgettext(0LL, "  noatime   do not update access time\n", 5);
  fputs_unlocked(v32, v31);
  v33 = stdout;
  v34 = dcgettext(0LL, "  nocache   Request to drop cache.  See also oflag=sync\n", 5);
  fputs_unlocked(v34, v33);
  v35 = stdout;
  v36 = dcgettext(0LL, "  noctty    do not assign controlling terminal from file\n", 5);
  fputs_unlocked(v36, v35);
  v37 = stdout;
  v38 = dcgettext(0LL, "  count_bytes  treat 'count=N' as a byte count (iflag only)\n", 5);
  fputs_unlocked(v38, v37);
  v39 = stdout;
  v40 = dcgettext(0LL, "  skip_bytes  treat 'skip=N' as a byte count (iflag only)\n", 5);
  fputs_unlocked(v40, v39);
  v41 = stdout;
  v42 = dcgettext(0LL, "  seek_bytes  treat 'seek=N' as a byte count (oflag only)\n", 5);
  fputs_unlocked(v42, v41);
  v43 = dcgettext(
          0LL,
          "\n"
          "Sending a %s signal to a running 'dd' process makes it\n"
          "print I/O statistics to standard error and then resume copying.\n"
          "\n"
          "Options are:\n"
          "\n",
          5);
  __printf_chk(1LL, v43, "USR1", v44);
  v45 = stdout;
  v46 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v46, v45);
  v47 = stdout;
  v48 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v48, v47);
  v61 = "[";
  v49 = &v61;
  v62 = "test invocation";
  v63 = "coreutils";
  v64 = "Multi-call invocation";
  v65 = "sha224sum";
  v66 = "sha2 utilities";
  v67 = "sha256sum";
  v68 = "sha2 utilities";
  v69 = "sha384sum";
  v70 = "sha2 utilities";
  v71 = "sha512sum";
  v72 = "sha2 utilities";
  v73 = 0LL;
  v74 = 0LL;
  do
    v49 += 2;
  while ( *v49 && strcmp("dd", *v49) );
  v50 = (char *)v49[1];
  if ( v50 )
  {
    v51 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v51, &unk_40DCA1, "https://www.gnu.org/software/coreutils/");
    v52 = setlocale(5, 0LL);
    if ( !v52 || !strncmp(v52, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v56 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v56, &unk_40DCA1, "https://www.gnu.org/software/coreutils/");
    v57 = setlocale(5, 0LL);
    if ( !v57 || !strncmp(v57, "en_", 3uLL) )
    {
      v50 = "dd";
      v58 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v53 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v58, "https://www.gnu.org/software/coreutils/", "dd");
LABEL_12:
      v55 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v55, v50, v53);
LABEL_3:
      exit(status);
    }
    v50 = "dd";
  }
  v59 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v59, "dd", v60);
LABEL_10:
  v53 = "Multi-call invocation" + 10;
  v54 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v54, "https://www.gnu.org/software/coreutils/", "dd");
  if ( v50 != "dd" )
    v53 = "";
  goto LABEL_12;
}

__int64 __fastcall sub_4059D0(char *s, __int64 a2, char a3, const char *a4, double a5)
{
  char *v5; // r14
  const char *v6; // r13
  __int64 v7; // r12
  char v8; // bp
  unsigned int v9; // ebx
  char *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  char v13; // cl
  char v14; // si
  unsigned int v15; // edx
  int v16; // ebx
  size_t v18; // rax

  v5 = s;
  v6 = a4;
  v7 = a2;
  v8 = a3;
  v9 = 0;
  while ( 2 )
  {
    v10 = strchr(v5, 44);
    v11 = v7;
LABEL_3:
    v12 = 0LL;
    while ( 1 )
    {
      v13 = *(_BYTE *)(v11 + v12);
      v14 = v5[v12];
      if ( !v13 )
        break;
      ++v12;
      if ( v13 != v14 )
      {
LABEL_9:
        if ( !*(_BYTE *)v11 )
        {
          if ( v10 )
            v18 = v10 - v5;
          else
            v18 = strlen(v5);
          sub_408370(0LL, 8LL, v5, v18);
          dcgettext(0LL, v6, 5);
          sub_4041E0(0, 0);
          sub_405460(1, a5);
        }
        v11 += 16LL;
        goto LABEL_3;
      }
    }
    if ( v14 != 44 && v14 )
      goto LABEL_9;
    v15 = *(_DWORD *)(v11 + 12);
    if ( !v15 )
      goto LABEL_9;
    v16 = v15 | v9;
    if ( !v8 )
      v15 = v16;
    if ( v10 )
    {
      v5 = v10 + 1;
      v9 = v15;
      continue;
    }
    return v15;
  }
}

__int64 __fastcall sub_405AB0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_409550(stream);
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

__int64 sub_405B30()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

  if ( (unsigned int)sub_405AB0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_614670 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_614678 )
      {
        v5 = sub_408480();
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
  result = sub_405AB0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_405BD0(int fd2, char *file, int oflag, unsigned int a4)
{
  __int64 result; // rax
  int v5; // ebx
  unsigned int v6; // er12
  int *v7; // rax
  int v8; // er13
  int *v9; // rbp

  LODWORD(result) = open(file, oflag, a4);
  v5 = result;
  if ( fd2 == (_DWORD)result || (int)result < 0 )
    return (unsigned int)result;
  v6 = dup2(result, fd2);
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  close(v5);
  result = v6;
  *v9 = v8;
  return result;
}

__int64 sub_405C40()
{
  __int64 v1; // [rsp+0h] [rbp-18h]
  __int64 v2; // [rsp+8h] [rbp-10h]

  if ( clock_gettime(1, (struct timespec *)&v1) )
    sub_405C70((struct timespec *)&v1);
  return v2 + 1000000000 * v1;
}

int __fastcall sub_405C70(struct timespec *tp)
{
  int result; // eax
  __time_t v2; // [rsp+0h] [rbp-18h]
  __int64 v3; // [rsp+8h] [rbp-10h]

  result = clock_gettime(0, tp);
  if ( result )
  {
    gettimeofday((struct timeval *)&v2, 0LL);
    tp->tv_sec = v2;
    result = 1000 * v3;
    tp->tv_nsec = 1000 * v3;
  }
  return result;
}

long double __fastcall sub_405CB0(int a1, long double a15)
{
  unsigned __int64 v7; // rax
  long double v8; // fst6
  long double result; // fst7

  if ( a15 >= 9.223372e18 )
    v7 = (__int64)(a15 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    v7 = (__int64)a15;
  v8 = (long double)v7;
  if ( a1 )
    return v8;
  result = v8;
  if ( a15 != v8 )
  {
    result = (long double)(__int64)(v7 + 1);
    if ( (__int64)(v7 + 1) < 0 )
      result = result + 1.8446744e19;
  }
  return result;
}

__int64 __fastcall sub_405D70(__int64 a1, char *a2, __int16 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  struct lconv *v7; // rax
  const char *v8; // r15
  struct lconv *v9; // r12
  size_t v10; // r8
  char *v11; // rax
  const char *v12; // r12
  size_t v13; // rax
  size_t v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  long double v17; // fst7
  long double v18; // fst6
  long double v19; // fst7
  long double v20; // fst6
  long double v21; // fst7
  long double v22; // fst6
  int v23; // ebx
  long double v24; // fst5
  long double v25; // fst4
  long double v26; // fst7
  long double v27; // fst6
  long double v28; // fst7
  __int64 v29; // r14
  long double v30; // fst7
  unsigned __int64 v31; // r15
  long double v32; // fst6
  size_t v33; // rax
  __int64 v34; // r8
  long double v35; // fst7
  size_t v36; // r14
  __int64 v37; // r15
  char *v38; // r14
  int v39; // eax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rtt
  unsigned __int64 v43; // rdx
  int v44; // er9
  int v45; // edi
  int v46; // ecx
  char *v47; // rbp
  unsigned __int8 *v48; // r15
  size_t v49; // rbx
  size_t v50; // rbp
  unsigned __int8 v51; // dl
  size_t v52; // rax
  size_t v53; // rbp
  char *v54; // r14
  unsigned __int64 v55; // rax
  char *v56; // rdx
  unsigned __int64 v57; // r11
  int v58; // eax
  unsigned int v59; // ett
  unsigned int v60; // edx
  unsigned int v61; // edi
  bool v62; // dl
  char v63; // al
  unsigned __int64 v64; // r9
  unsigned int v65; // edx
  __int64 v66; // rdi
  unsigned __int64 v67; // rcx
  signed __int64 v68; // r15
  unsigned int v69; // edx
  __int64 v70; // rsi
  size_t v71; // [rsp+0h] [rbp-B8h]
  char *v72; // [rsp+10h] [rbp-A8h]
  char *s; // [rsp+18h] [rbp-A0h]
  __int16 v74; // [rsp+20h] [rbp-98h]
  int v75; // [rsp+24h] [rbp-94h]
  int v76; // [rsp+24h] [rbp-94h]
  unsigned __int64 v77; // [rsp+28h] [rbp-90h]
  size_t v78; // [rsp+30h] [rbp-88h]
  size_t v79; // [rsp+30h] [rbp-88h]
  long double v80; // [rsp+30h] [rbp-88h]
  unsigned int v81; // [rsp+40h] [rbp-78h]
  unsigned int v82; // [rsp+44h] [rbp-74h]
  char *v83; // [rsp+48h] [rbp-70h]
  char src[104]; // [rsp+50h] [rbp-68h]

  v5 = a4;
  v6 = a5;
  v81 = a3 & 0x20;
  s = a2;
  v74 = a3;
  v77 = a5;
  v75 = a3 & 3;
  v82 = v81 < 1 ? 1000 : 1024;
  v7 = localeconv();
  v8 = v7->decimal_point;
  v9 = v7;
  v10 = strlen(v7->decimal_point);
  if ( v10 - 1 >= 0x10 )
    v8 = ".";
  v11 = v9->grouping;
  v12 = v9->thousands_sep;
  if ( v10 - 1 >= 0x10 )
    v10 = 1LL;
  v78 = v10;
  v83 = v11;
  v13 = strlen(v12);
  v14 = v78;
  if ( v13 >= 0x11 )
    v12 = "";
  v72 = a2 + 647;
  if ( v6 > v5 )
  {
    if ( !v5 || (v41 = v77 / v5, v77 % v5) )
    {
LABEL_10:
      v17 = (long double)v5;
      v18 = (long double)(__int64)v77;
      if ( (v77 & 0x8000000000000000LL) != 0LL )
      {
        v19 = v17 / (v18 + 1.8446744e19);
        v20 = (long double)a1;
        if ( a1 >= 0 )
        {
LABEL_12:
          v21 = v19 * v20;
          if ( v74 & 0x10 )
          {
LABEL_13:
            v22 = (long double)(int)v82;
            v23 = 0;
            v24 = v22;
            while ( 1 )
            {
              ++v23;
              v25 = v21;
              v26 = v24 * v22;
              if ( v25 < v26 )
                break;
              if ( v23 == 8 )
              {
                v27 = v25;
                v28 = v24;
                goto LABEL_19;
              }
              v24 = v26;
              v21 = v25;
            }
            v27 = v25;
            v28 = v24;
LABEL_19:
            v29 = v78 + 1;
            v30 = v27 / v28;
            v31 = v78 + 1 + (v81 == 0) + 1;
            if ( v75 == 1 )
            {
              __sprintf_chk(s, 1LL, -1LL, "%.1Lf", v78);
              v33 = strlen(s);
              if ( v33 > v31 )
                goto LABEL_26;
            }
            else
            {
              if ( v30 < 1.8446744073709551615e19 )
              {
                v80 = v30;
                sub_405CB0(v75, v30);
                v32 = v80;
              }
              else
              {
                v32 = v30;
              }
              __sprintf_chk(s, 1LL, -1LL, "%.1Lf", v14);
              v33 = strlen(s);
              v30 = v32;
              if ( v33 > v31 )
              {
                v35 = v32 * 10.0;
LABEL_24:
                if ( v35 < 1.8446744073709551615e19 )
                  sub_405CB0(v75, v35);
                goto LABEL_26;
              }
            }
            if ( !(v74 & 8) || s[v33 - 1] != 48 )
            {
              v36 = v33 - v29;
              goto LABEL_31;
            }
            v35 = v30 * 10.0;
            if ( v75 != 1 )
              goto LABEL_24;
LABEL_26:
            __sprintf_chk(s, 1LL, -1LL, "%.0Lf", v34);
            v33 = strlen(s);
            v36 = v33;
LABEL_31:
            v37 = (__int64)&v72[-v33];
            v38 = &v72[v36 - v33];
            memmove(&v72[-v33], s, v33);
            goto LABEL_32;
          }
LABEL_27:
          if ( v75 != 1 && v21 < 1.8446744073709551615e19 )
          {
            sub_405CB0(v75, v21);
            v14 = v71;
          }
          __sprintf_chk(s, 1LL, -1LL, "%.0Lf", v14);
          v23 = -1;
          v33 = strlen(s);
          v36 = v33;
          goto LABEL_31;
        }
      }
      else
      {
        v19 = v17 / v18;
        v20 = (long double)a1;
        if ( a1 >= 0 )
          goto LABEL_12;
      }
      v21 = v19 * (v20 + 1.8446744e19);
      if ( v74 & 0x10 )
        goto LABEL_13;
      goto LABEL_27;
    }
    v16 = a1 / v41;
    v42 = 10 * (a1 % v41);
    v43 = 2 * (v42 % v41);
    v44 = v42 / v41;
    if ( v41 <= v43 )
      v45 = (v41 < v43) + 2;
    else
      v45 = v43 != 0;
    v46 = v74 & 0x10;
    if ( !(v74 & 0x10) )
      goto LABEL_85;
  }
  else
  {
    v15 = v5 / v6;
    if ( v5 % v6 )
      goto LABEL_10;
    v16 = a1 * v15;
    if ( a1 * v15 / (v5 / v6) != a1 )
      goto LABEL_10;
    v45 = 0;
    v44 = 0;
    v46 = v74 & 0x10;
    if ( !(v74 & 0x10) )
    {
LABEL_85:
      v23 = -1;
      goto LABEL_47;
    }
  }
  v23 = 0;
  if ( v82 <= v16 )
  {
    while ( 1 )
    {
      v57 = v16 / v82;
      v59 = v44 + 10 * (v16 % v82);
      v58 = (v44 + 10 * (v16 % v82)) / v82;
      v60 = (v45 >> 1) + 2 * (v59 % v82);
      v44 = v59 / v82;
      v16 /= v82;
      v61 = v60 + v45;
      v45 = v82 > v60 ? v61 != 0 : (v82 < v61) + 2;
      ++v23;
      if ( v82 > v57 )
        break;
      if ( v23 == 8 )
        goto LABEL_47;
    }
    if ( v57 <= 9 )
    {
      if ( v75 == 1 )
        v62 = v45 + (v58 & 1) > 2;
      else
        v62 = v45 > 0 && v75 == 0;
      if ( v62 )
      {
        if ( ++v58 == 10 )
        {
          v16 = v57 + 1;
          if ( v57 == 9 )
          {
            v38 = v72;
LABEL_114:
            v45 = 0;
            goto LABEL_115;
          }
          v45 = 0;
          goto LABEL_107;
        }
      }
      else if ( !v58 )
      {
LABEL_107:
        v38 = v72;
        if ( v74 & 8 )
        {
LABEL_115:
          if ( v75 == 1 )
            goto LABEL_52;
          v44 = 0;
          goto LABEL_48;
        }
        v63 = 48;
        goto LABEL_109;
      }
      v63 = v58 + 48;
LABEL_109:
      s[646] = v63;
      v38 = &s[-v78 + 646];
      if ( (unsigned int)v78 >= 8 )
      {
        v64 = (unsigned __int64)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)v38 = *(_QWORD *)v8;
        *(_QWORD *)&v38[(unsigned int)v78 - 8] = *(_QWORD *)&v8[(unsigned int)v78 - 8];
        if ( (((_DWORD)s + 646 - (_DWORD)v64) & 0xFFFFFFF8) >= 8 )
        {
          v65 = 0;
          do
          {
            v66 = v65;
            v65 += 8;
            *(_QWORD *)(v64 + v66) = *(_QWORD *)(v8 - &v38[-v64] + v66);
          }
          while ( v65 < (((_DWORD)s + 646 - (_DWORD)v64) & 0xFFFFFFF8) );
        }
      }
      else if ( v78 & 4 )
      {
        *(_DWORD *)v38 = *(_DWORD *)v8;
        *(_DWORD *)&v38[(unsigned int)v78 - 4] = *(_DWORD *)&v8[(unsigned int)v78 - 4];
      }
      else if ( (_DWORD)v78 )
      {
        *v38 = *v8;
        if ( v78 & 2 )
          *(_WORD *)&v38[(unsigned int)v78 - 2] = *(_WORD *)&v8[(unsigned int)v78 - 2];
      }
      goto LABEL_114;
    }
  }
LABEL_47:
  v38 = v72;
  if ( v75 == 1 )
  {
    if ( (v45 + (v16 & 1) != 0) + v44 <= 5 )
      goto LABEL_52;
    v38 = v72;
    goto LABEL_50;
  }
LABEL_48:
  if ( v75 || v44 + v45 <= 0 )
  {
LABEL_52:
    v37 = (__int64)v38;
    while ( 1 )
    {
      *(_BYTE *)--v37 = v16 % 0xA + 48;
      if ( v16 <= 9 )
        break;
      v16 /= 0xAuLL;
    }
    if ( !(v74 & 4) )
      goto LABEL_33;
    goto LABEL_56;
  }
LABEL_50:
  ++v16;
  if ( !v46 || v82 != v16 || v23 == 8 )
    goto LABEL_52;
  ++v23;
  if ( !(v74 & 8) )
  {
    *(v38 - 1) = 48;
    v38 += ~v78;
    if ( (unsigned int)v78 >= 8 )
    {
      v67 = (unsigned __int64)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)v38 = *(_QWORD *)v8;
      *(_QWORD *)&v38[(unsigned int)v78 - 8] = *(_QWORD *)&v8[(unsigned int)v78 - 8];
      v68 = v8 - &v38[-v67];
      if ( (((_DWORD)v78 + (_DWORD)v38 - (_DWORD)v67) & 0xFFFFFFF8) >= 8 )
      {
        v69 = 0;
        do
        {
          v70 = v69;
          v69 += 8;
          *(_QWORD *)(v67 + v70) = *(_QWORD *)(v68 + v70);
        }
        while ( v69 < (((_DWORD)v78 + (_DWORD)v38 - (_DWORD)v67) & 0xFFFFFFF8) );
      }
    }
    else if ( v78 & 4 )
    {
      *(_DWORD *)v38 = *(_DWORD *)v8;
      *(_DWORD *)&v38[(unsigned int)v78 - 4] = *(_DWORD *)&v8[(unsigned int)v78 - 4];
    }
    else if ( (_DWORD)v78 )
    {
      *v38 = *v8;
      if ( v78 & 2 )
        *(_WORD *)&v38[(unsigned int)v78 - 2] = *(_WORD *)&v8[(unsigned int)v78 - 2];
    }
  }
  v37 = (__int64)(v38 - 1);
  *(v38 - 1) = 49;
LABEL_32:
  if ( !(v74 & 4) )
    goto LABEL_33;
LABEL_56:
  v47 = &v38[-v37];
  v79 = strlen(v12);
  __memcpy_chk(src, v37, &v38[-v37], 41LL);
  v76 = v23;
  v48 = (unsigned __int8 *)v83;
  v49 = (size_t)v47;
  v50 = -1LL;
  while ( 1 )
  {
    v51 = *v48;
    if ( *v48 )
    {
      v52 = v51;
      if ( v51 >= 0x7Fu )
        v52 = v49;
      ++v48;
      v50 = v52;
    }
    if ( v50 > v49 )
    {
      v53 = v49;
      v23 = v76;
      v37 = (__int64)&v38[-v53];
      memcpy(&v38[-v53], src, v53);
      goto LABEL_33;
    }
    v54 = &v38[-v50];
    v49 -= v50;
    memcpy(v54, &src[v49], v50);
    if ( !v49 )
      break;
    v38 = &v54[-v79];
    memcpy(v38, v12, v79);
  }
  v23 = v76;
  v37 = (__int64)v54;
LABEL_33:
  if ( (v74 & 0x80u) != 0 )
  {
    if ( v23 == -1 )
    {
      if ( v77 > 1 )
      {
        v23 = 1;
        v55 = 1LL;
        do
        {
          v55 *= v82;
          if ( v77 <= v55 )
            break;
          ++v23;
        }
        while ( v23 != 8 );
        v39 = v74 & 0x100;
        if ( !(v74 & 0x40) )
          goto LABEL_72;
        goto LABEL_70;
      }
      v23 = 0;
    }
    v39 = v74 & 0x100;
    if ( !(v23 | v39) )
      goto LABEL_36;
    if ( !(v74 & 0x40) )
    {
LABEL_71:
      if ( !v23 )
      {
        v56 = v72;
        if ( !v39 )
          goto LABEL_36;
        goto LABEL_77;
      }
LABEL_72:
      if ( v81 || v23 != 1 )
      {
        v56 = v72 + 1;
        *v72 = byte_40F728[v23];
        if ( v39 )
        {
          if ( v81 )
          {
            v56 = v72 + 2;
            v72[1] = 105;
          }
          goto LABEL_77;
        }
      }
      else
      {
        v56 = v72 + 1;
        *v72 = 107;
        if ( v39 )
        {
LABEL_77:
          *v56 = 66;
          v72 = v56 + 1;
          goto LABEL_36;
        }
      }
      v72 = v56;
      goto LABEL_36;
    }
LABEL_70:
    s[647] = 32;
    v72 = s + 648;
    goto LABEL_71;
  }
LABEL_36:
  *v72 = 0;
  return v37;
}

__int64 __fastcall sub_406740(char *nptr, int *a2, __int64 *a3)
{
  __int64 *v3; // r12
  char *v4; // rbx
  int v5; // ebp
  int v6; // eax
  int v7; // ebp
  __int64 result; // rax
  __int64 v9; // rdx
  char *v10; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v4 = nptr;
  if ( nptr || (v4 = getenv("BLOCK_SIZE")) != 0LL || (v4 = getenv("BLOCKSIZE")) != 0LL )
  {
    v5 = 0;
    if ( *v4 == 39 )
    {
      ++v4;
      v5 = 4;
    }
    v6 = sub_40A670(v4, off_40F710, dword_40F700, 4LL);
    if ( v6 >= 0 )
    {
      *v3 = 1LL;
      v7 = dword_40F700[v6] | v5;
      result = 0LL;
      *a2 = v7;
      return result;
    }
    result = sub_408F50(v4);
    if ( (_DWORD)result )
    {
      *a2 = 0;
      v9 = *v3;
LABEL_15:
      if ( !v9 )
      {
        *v3 = (unsigned __int64)getenv("POSIXLY_CORRECT") < 1 ? 1024LL : 512LL;
        result = 4LL;
      }
      return result;
    }
    if ( (unsigned __int8)(*v4 - 48) > 9u )
    {
      if ( v4 != v10 )
      {
        while ( (unsigned __int8)(*++v4 - 48) > 9u )
        {
          if ( v4 == v10 )
            goto LABEL_22;
        }
        goto LABEL_13;
      }
LABEL_22:
      if ( *(v10 - 1) == 66 )
      {
        v5 |= 0x180u;
        if ( *(v10 - 2) != 105 )
          goto LABEL_13;
      }
      else
      {
        LOBYTE(v5) = v5 | 0x80;
      }
      v5 |= 0x20u;
    }
LABEL_13:
    v9 = *v3;
    *a2 = v5;
    goto LABEL_15;
  }
  result = (__int64)getenv("POSIXLY_CORRECT");
  if ( result )
  {
    *v3 = 512LL;
    result = 0LL;
  }
  else
  {
    *v3 = 1024LL;
  }
  *a2 = 0;
  return result;
}

void sub_406900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, void (__fastcall *a6)(_QWORD), ...)
{
  int v6; // ebx
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rbp
  void (__fastcall *v10)(_QWORD); // r14
  int v11; // eax
  gcc_va_list va; // [rsp+8h] [rbp-F0h]

  v6 = dword_614338;
  dword_614338 = 0;
  if ( (_DWORD)a1 == 2 )
  {
    v7 = a5;
    v8 = a4;
    v9 = a3;
    v10 = a6;
    v11 = sub_40A500(a1, a2, &unk_40F750, &off_40F760, 0LL);
    if ( v11 != -1 )
    {
      if ( v11 == 104 )
      {
        v10(0LL);
      }
      else if ( v11 == 118 )
      {
        va_start(va, a6);
        sub_408B20(stdout, v9, v8, v7, va);
        exit(0);
      }
    }
  }
  dword_614338 = v6;
  dword_61433C = 0;
}

char *__fastcall sub_406A10(const char *a1)
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
  qword_614680 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_406AB0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_40AA50();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40F811;
      if ( !v5 )
        v2 = (char *)&unk_40F806;
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
    v2 = (char *)&unk_40F80D;
    if ( !v5 )
      v2 = (char *)&unk_40F80A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_406BB0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v11; // er13
  int v12; // ebp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r11
  int v15; // er10
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r12
  int v19; // er11
  char *v20; // r8
  size_t v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rbp
  bool v24; // al
  int v25; // eax
  int v26; // eax
  char v27; // di
  const unsigned __int16 **v28; // rax
  char v29; // cl
  unsigned __int64 result; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  unsigned __int8 v33; // al
  unsigned __int8 v34; // al
  int v35; // er13
  bool v36; // dl
  bool v37; // dl
  bool v38; // al
  size_t v39; // rax
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // r15
  const unsigned __int16 **v42; // r14
  char *v43; // rax
  int v44; // esi
  unsigned __int64 v45; // rcx
  unsigned __int8 v46; // di
  char *v47; // rax
  size_t v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  char i; // al
  char v53; // dl
  char *v54; // rax
  unsigned __int64 v55; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v56; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v57; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+10h] [rbp-B8h]
  char v59; // [rsp+1Fh] [rbp-A9h]
  char *s; // [rsp+20h] [rbp-A8h]
  size_t n; // [rsp+28h] [rbp-A0h]
  char *v62; // [rsp+30h] [rbp-98h]
  unsigned __int8 v63; // [rsp+30h] [rbp-98h]
  char *v64; // [rsp+30h] [rbp-98h]
  unsigned __int64 v65; // [rsp+30h] [rbp-98h]
  unsigned __int8 v66; // [rsp+38h] [rbp-90h]
  unsigned __int8 v67; // [rsp+38h] [rbp-90h]
  unsigned __int64 v68; // [rsp+38h] [rbp-90h]
  char v69; // [rsp+38h] [rbp-90h]
  int v70; // [rsp+38h] [rbp-90h]
  int v71; // [rsp+40h] [rbp-88h]
  unsigned __int64 v72; // [rsp+40h] [rbp-88h]
  int v73; // [rsp+40h] [rbp-88h]
  int v74; // [rsp+40h] [rbp-88h]
  _BYTE *v75; // [rsp+40h] [rbp-88h]
  int v76; // [rsp+48h] [rbp-80h]
  unsigned __int64 v77; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  __int64 v79; // [rsp+58h] [rbp-70h]
  size_t v80; // [rsp+60h] [rbp-68h]
  char v81; // [rsp+68h] [rbp-60h]
  bool v82; // [rsp+6Ch] [rbp-5Ch]
  char v83; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v84; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v85; // [rsp+70h] [rbp-58h]
  char *v86; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h]
  mbstate_t ps; // [rsp+88h] [rbp-40h]

  v9 = a1;
  v10 = a2;
  v11 = a5;
  s = a3;
  v55 = a4;
  v81 = a6;
  v12 = a6 & 2;
  v80 = __ctype_get_mb_cur_max();
  v82 = v12 != 0;
  v14 = v55;
  switch ( v11 )
  {
    case 0:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v56 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v56 = 0;
        goto LABEL_212;
      }
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 2;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v59 = 1;
        v15 = 0;
        v16 = 0LL;
        v11 = 2;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v56 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v56 = 1;
LABEL_212:
      if ( a2 )
      {
        v15 = 0;
        v38 = 0;
        v59 = 1;
        v79 = 0LL;
        goto LABEL_138;
      }
      v59 = 1;
      v15 = 0;
      v16 = 1LL;
      v11 = 2;
      v79 = 0LL;
      v83 = 0;
      v82 = 0;
      n = 1LL;
      s2 = "'";
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
          v35 = v19;
          v14 = v17;
          v36 = v35 == 2;
          if ( !v16 && v36 && v82 )
            return sub_406BB0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_406BB0((__int64)v9, v79, s);
              v38 = v79 != 0 && v10 == 0;
              if ( v38 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
                n = 1LL;
                v82 = 0;
                v83 = v38;
                goto LABEL_3;
              }
              v37 = v83;
            }
          }
          else
          {
            v37 = !v82;
          }
          if ( s2 )
          {
            if ( v37 )
            {
              v53 = *s2;
              if ( *s2 )
              {
                v54 = &s2[-v16];
                do
                {
                  if ( v10 > v16 )
                    v9[v16] = v53;
                  v53 = v54[++v16];
                }
                while ( v53 );
              }
            }
          }
          if ( v10 > v16 )
            v9[v16] = 0;
          return v16;
        }
        v20 = &s[v18];
        v57 = v56 & (v19 != 2);
        if ( !(v56 & (v19 != 2)) )
          break;
        if ( n )
        {
          if ( v17 == -1LL && n > 1 )
          {
            v71 = v19;
            v66 = v15;
            v21 = strlen(s);
            v19 = v71;
            v15 = v66;
            v20 = &s[v18];
            v17 = v21;
          }
          if ( v18 + n <= v17 )
          {
            v76 = v19;
            v72 = v17;
            v67 = v15;
            v62 = v20;
            v22 = memcmp(v20, s2, n);
            v20 = v62;
            v15 = v67;
            v17 = v72;
            v19 = v76;
            if ( !v22 )
            {
              if ( !v82 )
              {
                LOBYTE(v23) = *v62;
                switch ( *v62 )
                {
                  case 0:
                    goto LABEL_83;
                  case 7:
                    LOBYTE(v23) = 97;
                    goto LABEL_79;
                  case 8:
                    LODWORD(v13) = 0;
                    v11 = 0;
                    LOBYTE(v23) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_72;
                  case 10:
                    goto LABEL_68;
                  case 11:
                    goto LABEL_80;
                  case 12:
                    goto LABEL_77;
                  case 13:
                    goto LABEL_76;
                  case 32:
                    v33 = v57;
                    goto LABEL_128;
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
                  case 35:
                  case 126:
                    v34 = v57;
                    goto LABEL_125;
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
                    v33 = v57;
                    goto LABEL_123;
                  case 39:
                    goto LABEL_62;
                  case 63:
                    goto LABEL_58;
                  case 92:
                    goto LABEL_65;
                  case 123:
                  case 125:
                    goto LABEL_17;
                  default:
                    goto LABEL_98;
                }
              }
              return sub_406BB0((__int64)v9, v10, s);
            }
          }
        }
        LOBYTE(v23) = *v20;
        switch ( *v20 )
        {
          case 0:
            goto LABEL_81;
          case 7:
            LOBYTE(v23) = 97;
            goto LABEL_78;
          case 8:
            LOBYTE(v23) = 98;
            goto LABEL_69;
          case 9:
LABEL_72:
            LOBYTE(v23) = 116;
            goto LABEL_69;
          case 10:
LABEL_68:
            LOBYTE(v23) = 110;
LABEL_69:
            LODWORD(v13) = 0;
            v11 = 0;
            if ( v82 )
              return sub_406BB0((__int64)v9, v10, s);
            goto LABEL_29;
          case 11:
LABEL_80:
            LOBYTE(v23) = 118;
            goto LABEL_78;
          case 12:
LABEL_77:
            LOBYTE(v23) = 102;
LABEL_78:
            if ( v82 )
              return sub_406BB0((__int64)v9, v10, s);
LABEL_79:
            v11 = 0;
            goto LABEL_37;
          case 13:
            v57 = 0;
LABEL_76:
            LOBYTE(v23) = 13;
            v29 = 114;
            LOBYTE(v13) = v19 == 2;
            goto LABEL_66;
          case 32:
            v33 = 0;
LABEL_128:
            LOBYTE(v23) = 32;
            goto LABEL_123;
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
            v57 = 0;
LABEL_74:
            LODWORD(v13) = 0;
            goto LABEL_67;
          case 35:
          case 126:
            v34 = 0;
LABEL_125:
            if ( !v18 )
            {
              v11 = v57;
              LODWORD(v13) = 0;
              v57 = v34;
              goto LABEL_23;
            }
            v57 = v34;
            v11 = 0;
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
            v33 = 0;
LABEL_123:
            v11 = v57;
            v57 = v33;
            v25 = 0;
            goto LABEL_25;
          case 39:
            v57 = 0;
            goto LABEL_62;
          case 63:
            v57 = 0;
            goto LABEL_58;
          case 92:
            v57 = 0;
            goto LABEL_65;
          case 123:
          case 125:
            v57 = 0;
            goto LABEL_17;
          default:
            v57 = 0;
            goto LABEL_98;
        }
LABEL_24:
        v25 = 0;
LABEL_25:
        if ( a7 )
        {
          LODWORD(v13) = (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v23 >> 5)) >> v23) & 1;
          if ( (_DWORD)v13 )
          {
            LOBYTE(v13) = v19 == 2;
LABEL_28:
            if ( v82 )
              return sub_406BB0((__int64)v9, v10, s);
LABEL_29:
            v26 = v15 ^ 1;
            LOBYTE(v26) = v13 & (v15 ^ 1);
            if ( (unsigned __int8)v13 & ((unsigned __int8)v15 ^ 1) )
            {
              if ( v10 > v16 )
                v9[v16] = 39;
              if ( v16 + 1 < v10 )
                v9[v16 + 1] = 36;
              LODWORD(v13) = v16 + 2;
              if ( v16 + 2 < v10 )
                v9[v16 + 2] = 39;
              v16 += 3LL;
              v15 = v26;
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
        if ( v57 )
          goto LABEL_28;
        ++v18;
        LODWORD(v28) = v15 & (v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v28 )
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
          v9[v16] = v23;
        v27 = v59;
        ++v16;
        if ( !(_BYTE)v11 )
          v27 = 0;
        v59 = v27;
      }
      LOBYTE(v23) = *v20;
      switch ( *v20 )
      {
        case 0:
          if ( !v56 )
          {
            if ( !(v81 & 1) )
            {
              v57 = 0;
              LOBYTE(v13) = v19 == 2;
              v11 = 0;
              LOBYTE(v23) = 0;
              goto LABEL_23;
            }
            ++v18;
            goto LABEL_4;
          }
LABEL_81:
          if ( v82 )
            return sub_406BB0((__int64)v9, v10, s);
          v57 = 0;
LABEL_83:
          LOBYTE(v13) = v19 == 2;
          v25 = v15 ^ 1;
          LOBYTE(v25) = (v19 == 2) & (v15 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 36;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v31 = v16 + 3;
            if ( v10 <= v16 + 3 )
            {
              v16 += 4LL;
              v15 = v25;
              v11 = 0;
              LOBYTE(v23) = 48;
              goto LABEL_49;
            }
            goto LABEL_91;
          }
          v31 = v16;
          if ( v10 > v16 )
          {
            v25 = v15;
LABEL_91:
            v9[v31] = 92;
            v15 = v25;
          }
          v16 = v31 + 1;
          if ( v19 == 2 )
          {
            v25 = v11;
            LOBYTE(v23) = 48;
            v11 = 0;
            goto LABEL_49;
          }
          LOBYTE(v23) = 48;
          if ( v18 + 1 < v17 && (unsigned __int8)(s[v18 + 1] - 48) <= 9u )
          {
            if ( v10 > v16 )
              v9[v16] = 48;
            if ( v10 > v31 + 2 )
              v9[v31 + 2] = 48;
            v16 = v31 + 3;
            LOBYTE(v23) = 48;
          }
LABEL_95:
          v25 = v11;
          v11 = 0;
          if ( (unsigned __int8)v13 | v56 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v23) = 7;
          v29 = 97;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v23) = 8;
          v29 = 98;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v23) = 9;
          v29 = 116;
          goto LABEL_104;
        case 10:
          LOBYTE(v23) = 10;
          v29 = 110;
          goto LABEL_104;
        case 11:
          LOBYTE(v23) = 11;
          v29 = 118;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 12:
          LOBYTE(v23) = 12;
          v29 = 102;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 13:
          LOBYTE(v23) = 13;
          v29 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v57 = v19 == 2 && v82;
          if ( v57 )
            return sub_406BB0((__int64)v9, v10, s);
          goto LABEL_66;
        case 32:
          LOBYTE(v23) = 32;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_21;
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
        case 35:
        case 126:
          LOBYTE(v13) = v19 == 2;
          goto LABEL_20;
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
        case 39:
LABEL_62:
          if ( v19 != 2 )
          {
            v83 = v11;
            LODWORD(v13) = 0;
            LOBYTE(v23) = 39;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_406BB0((__int64)v9, v10, s);
          if ( !v10 || (v13 = 0LL, v79) )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 92;
            v13 = v10;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v10 = v79;
          }
          v83 = v11;
          v16 += 3LL;
          v25 = 0;
          v15 = 0;
          v79 = v10;
          LOBYTE(v23) = 39;
          v10 = v13;
          goto LABEL_49;
        case 63:
LABEL_58:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_406BB0((__int64)v9, v10, s);
            v11 = 0;
            v25 = 0;
            LOBYTE(v23) = 63;
            goto LABEL_49;
          }
          if ( v19 != 5 )
          {
            LOBYTE(v23) = 63;
            LOBYTE(v13) = v19 == 2;
            v11 = 0;
            goto LABEL_23;
          }
          if ( !(v81 & 4)
            || v18 + 2 >= v17
            || s[v18 + 1] != 63
            || (v23 = (unsigned __int8)s[v18 + 2], (unsigned __int8)v23 > 0x3Eu)
            || (v49 = 8070630310989004800LL, !_bittest64(&v49, v23)) )
          {
            LODWORD(v13) = 0;
            v11 = 0;
            LOBYTE(v23) = 63;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_406BB0((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_406BB0((__int64)v9, v10, s);
            ++v18;
            LOBYTE(v28) = v15;
            v11 = 0;
            LOBYTE(v23) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LODWORD(v13) = v56;
          LOBYTE(v23) = 92;
          v29 = 92;
          LOBYTE(v13) = (n != 0) & v82 & v56;
          if ( (_BYTE)v13 )
          {
            ++v18;
            LOBYTE(v28) = v15;
            v11 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v56 )
          {
LABEL_67:
            v11 = 0;
            goto LABEL_23;
          }
          LOBYTE(v23) = v29;
          v11 = 0;
          goto LABEL_28;
        case 123:
        case 125:
LABEL_17:
          v24 = v17 != 1;
          if ( v17 == -1LL )
            v24 = s[1] != 0;
          LOBYTE(v13) = v19 == 2;
          if ( v24 )
            goto LABEL_67;
LABEL_20:
          if ( v18 )
            goto LABEL_67;
LABEL_21:
          if ( !v82 || !(_BYTE)v13 )
            goto LABEL_23;
          return sub_406BB0((__int64)v9, v10, s);
        default:
LABEL_98:
          if ( v80 == 1 )
          {
            v73 = v19;
            v68 = v17;
            v63 = v15;
            v28 = __ctype_b_loc();
            LODWORD(v13) = (unsigned __int8)v23;
            v15 = v63;
            v17 = v68;
            v19 = v73;
            v32 = 1LL;
            LODWORD(v28) = (*v28)[(unsigned __int8)v23];
            LOWORD(v28) = (unsigned __int16)v28 & 0x4000;
            LOBYTE(v11) = (_WORD)v28 != 0;
            LOBYTE(v13) = v56 & ((_WORD)v28 == 0);
            goto LABEL_100;
          }
          ps = 0LL;
          if ( v17 == -1LL )
          {
            v74 = v19;
            v69 = v15;
            v64 = v20;
            v39 = strlen(s);
            v19 = v74;
            LOBYTE(v15) = v69;
            v20 = v64;
            v17 = v39;
          }
          v85 = v16;
          v86 = v20;
          v40 = 0LL;
          v84 = v15;
          v75 = v9;
          v77 = v10;
          v65 = v17;
          v70 = v19;
          break;
      }
      while ( 2 )
      {
        v41 = v18 + v40;
        v28 = (const unsigned __int16 **)sub_40A580((wchar_t *)&wc, &s[v18 + v40]);
        v42 = v28;
        if ( !v28 )
        {
LABEL_241:
          v32 = v40;
          v16 = v85;
          v15 = v84;
          v9 = v75;
          LODWORD(v13) = v11 ^ 1;
          v10 = v77;
          v17 = v65;
          v19 = v70;
          LOBYTE(v13) = v56 & (v11 ^ 1);
          goto LABEL_242;
        }
        if ( v28 == (const unsigned __int16 **)-1LL )
        {
          v32 = v40;
          v16 = v85;
          v11 = 0;
          v15 = v84;
          v9 = v75;
          v10 = v77;
          v17 = v65;
          v19 = v70;
          LODWORD(v13) = v56;
          goto LABEL_242;
        }
        if ( v28 == (const unsigned __int16 **)-2LL )
        {
          v17 = v65;
          v50 = v18 + v40;
          v51 = &s[v18 + v40];
          v28 = (const unsigned __int16 **)v40;
          v32 = v40;
          v15 = v84;
          v16 = v85;
          v9 = v75;
          v10 = v77;
          v19 = v70;
          if ( v50 < v65 && *v51 )
          {
            do
              v28 = (const unsigned __int16 **)((char *)v28 + 1);
            while ( (unsigned __int64)v28 + v18 < v65 && *((_BYTE *)v28 + (_QWORD)v86) );
            v32 = (unsigned __int64)v28;
          }
          LODWORD(v13) = v56;
          v11 = 0;
LABEL_242:
          if ( v32 > 1 )
            goto LABEL_174;
LABEL_100:
          if ( (_BYTE)v13 )
          {
            LODWORD(v13) = v56;
            LOBYTE(v11) = 0;
LABEL_174:
            v44 = 0;
            v45 = v18 + v32;
            v46 = v57;
            while ( 1 )
            {
              if ( (_BYTE)v13 )
              {
                if ( v82 )
                  return sub_406BB0((__int64)v9, v10, s);
                LOBYTE(v28) = (v15 ^ 1) & (v19 == 2);
                if ( (_BYTE)v28 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 36;
                  if ( v10 > v16 + 2 )
                    v9[v16 + 2] = 39;
                  v16 += 3LL;
                  v15 = (int)v28;
                }
                if ( v10 > v16 )
                  v9[v16] = 92;
                if ( v10 > v16 + 1 )
                  v9[v16 + 1] = ((unsigned __int8)v23 >> 6) + 48;
                LODWORD(v28) = v16 + 2;
                if ( v10 > v16 + 2 )
                {
                  LODWORD(v28) = (((unsigned __int8)v23 >> 3) & 7) + 48;
                  v9[v16 + 2] = (_BYTE)v28;
                }
                ++v18;
                v16 += 3LL;
                LOBYTE(v23) = (v23 & 7) + 48;
                if ( v18 >= v45 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_40;
                }
                v44 = v13;
              }
              else
              {
                LODWORD(v28) = v15 & (v44 ^ 1);
                if ( v46 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 92;
                  ++v16;
                }
                if ( ++v18 >= v45 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_51;
                }
                if ( (_BYTE)v28 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  LODWORD(v28) = v16 + 1;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 39;
                  v16 += 2LL;
                  v46 = 0;
                  v15 = 0;
                }
                else
                {
                  v46 = 0;
                }
              }
              if ( v10 > v16 )
                v9[v16] = v23;
              LOBYTE(v23) = s[v18];
              ++v16;
            }
          }
LABEL_101:
          LOBYTE(v13) = v19 == 2;
LABEL_23:
          v25 = (v13 | v56 ^ 1) ^ 1;
          LOBYTE(v25) = v82 | (v13 | v56 ^ 1) ^ 1;
          if ( !(v82 | (unsigned __int8)(v13 | v56 ^ 1) ^ 1) )
            goto LABEL_49;
          goto LABEL_24;
        }
        if ( v70 != 2 || !v82 || v28 == (const unsigned __int16 **)1 )
        {
LABEL_148:
          if ( !iswprint(wc) )
            v11 = 0;
          v40 += (unsigned __int64)v42;
          LODWORD(v28) = mbsinit(&ps);
          if ( (_DWORD)v28 )
            goto LABEL_241;
          continue;
        }
        break;
      }
      v43 = &s[v41 + 1];
      while ( (unsigned __int8)(*v43 - 91) > 0x21u || !((1LL << (*v43 - 91)) & 0x20000002BLL) )
      {
        if ( &s[(_QWORD)v42 + v41] == ++v43 )
          goto LABEL_148;
      }
      v9 = v75;
      v10 = v77;
      return sub_406BB0((__int64)v9, v10, s);
    case 5:
      if ( v12 )
      {
        v59 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v15 = 0;
          v59 = 1;
          v83 = 0;
          v79 = 0LL;
        }
        else
        {
          v79 = 0LL;
          v15 = 0;
          v59 = 1;
          v83 = 0;
        }
        v82 = 0;
        v16 = 1LL;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 6:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 5;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v56 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_406AB0("`", v11);
        v47 = sub_406AB0("'", v11);
        v14 = v55;
        a9 = v47;
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
      v58 = v14;
      v48 = strlen(a9);
      v59 = 1;
      v15 = 0;
      v14 = v58;
      n = v48;
      v83 = 0;
      s2 = a9;
      v79 = 0LL;
      v56 = 1;
      goto LABEL_3;
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_406BB0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v11; // er13
  int v12; // ebp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r11
  int v15; // er10
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r12
  int v19; // er11
  char *v20; // r8
  size_t v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rbp
  bool v24; // al
  int v25; // eax
  int v26; // eax
  char v27; // di
  const unsigned __int16 **v28; // rax
  char v29; // cl
  unsigned __int64 result; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  unsigned __int8 v33; // al
  unsigned __int8 v34; // al
  int v35; // er13
  bool v36; // dl
  bool v37; // dl
  bool v38; // al
  size_t v39; // rax
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // r15
  const unsigned __int16 **v42; // r14
  char *v43; // rax
  int v44; // esi
  unsigned __int64 v45; // rcx
  unsigned __int8 v46; // di
  char *v47; // rax
  size_t v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  char *v51; // rcx
  char i; // al
  char v53; // dl
  char *v54; // rax
  unsigned __int64 v55; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v56; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v57; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+10h] [rbp-B8h]
  char v59; // [rsp+1Fh] [rbp-A9h]
  char *s; // [rsp+20h] [rbp-A8h]
  size_t n; // [rsp+28h] [rbp-A0h]
  char *v62; // [rsp+30h] [rbp-98h]
  unsigned __int8 v63; // [rsp+30h] [rbp-98h]
  char *v64; // [rsp+30h] [rbp-98h]
  unsigned __int64 v65; // [rsp+30h] [rbp-98h]
  unsigned __int8 v66; // [rsp+38h] [rbp-90h]
  unsigned __int8 v67; // [rsp+38h] [rbp-90h]
  unsigned __int64 v68; // [rsp+38h] [rbp-90h]
  char v69; // [rsp+38h] [rbp-90h]
  int v70; // [rsp+38h] [rbp-90h]
  int v71; // [rsp+40h] [rbp-88h]
  unsigned __int64 v72; // [rsp+40h] [rbp-88h]
  int v73; // [rsp+40h] [rbp-88h]
  int v74; // [rsp+40h] [rbp-88h]
  _BYTE *v75; // [rsp+40h] [rbp-88h]
  int v76; // [rsp+48h] [rbp-80h]
  unsigned __int64 v77; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  __int64 v79; // [rsp+58h] [rbp-70h]
  size_t v80; // [rsp+60h] [rbp-68h]
  char v81; // [rsp+68h] [rbp-60h]
  bool v82; // [rsp+6Ch] [rbp-5Ch]
  char v83; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v84; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v85; // [rsp+70h] [rbp-58h]
  char *v86; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h]
  mbstate_t ps; // [rsp+88h] [rbp-40h]

  v9 = a1;
  v10 = a2;
  v11 = a5;
  s = a3;
  v55 = a4;
  v81 = a6;
  v12 = a6 & 2;
  v80 = __ctype_get_mb_cur_max();
  v82 = v12 != 0;
  v14 = v55;
  switch ( v11 )
  {
    case 0:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v56 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v56 = 0;
        goto LABEL_212;
      }
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 2;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v59 = 1;
        v15 = 0;
        v16 = 0LL;
        v11 = 2;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v56 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v56 = 1;
LABEL_212:
      if ( a2 )
      {
        v15 = 0;
        v38 = 0;
        v59 = 1;
        v79 = 0LL;
        goto LABEL_138;
      }
      v59 = 1;
      v15 = 0;
      v16 = 1LL;
      v11 = 2;
      v79 = 0LL;
      v83 = 0;
      v82 = 0;
      n = 1LL;
      s2 = "'";
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
          v35 = v19;
          v14 = v17;
          v36 = v35 == 2;
          if ( !v16 && v36 && v82 )
            return sub_406BB0((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_406BB0((__int64)v9, v79, s);
              v38 = v79 != 0 && v10 == 0;
              if ( v38 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
                n = 1LL;
                v82 = 0;
                v83 = v38;
                goto LABEL_3;
              }
              v37 = v83;
            }
          }
          else
          {
            v37 = !v82;
          }
          if ( s2 )
          {
            if ( v37 )
            {
              v53 = *s2;
              if ( *s2 )
              {
                v54 = &s2[-v16];
                do
                {
                  if ( v10 > v16 )
                    v9[v16] = v53;
                  v53 = v54[++v16];
                }
                while ( v53 );
              }
            }
          }
          if ( v10 > v16 )
            v9[v16] = 0;
          return v16;
        }
        v20 = &s[v18];
        v57 = v56 & (v19 != 2);
        if ( !(v56 & (v19 != 2)) )
          break;
        if ( n )
        {
          if ( v17 == -1LL && n > 1 )
          {
            v71 = v19;
            v66 = v15;
            v21 = strlen(s);
            v19 = v71;
            v15 = v66;
            v20 = &s[v18];
            v17 = v21;
          }
          if ( v18 + n <= v17 )
          {
            v76 = v19;
            v72 = v17;
            v67 = v15;
            v62 = v20;
            v22 = memcmp(v20, s2, n);
            v20 = v62;
            v15 = v67;
            v17 = v72;
            v19 = v76;
            if ( !v22 )
            {
              if ( !v82 )
              {
                LOBYTE(v23) = *v62;
                switch ( *v62 )
                {
                  case 0:
                    goto LABEL_83;
                  case 7:
                    LOBYTE(v23) = 97;
                    goto LABEL_79;
                  case 8:
                    LODWORD(v13) = 0;
                    v11 = 0;
                    LOBYTE(v23) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_72;
                  case 10:
                    goto LABEL_68;
                  case 11:
                    goto LABEL_80;
                  case 12:
                    goto LABEL_77;
                  case 13:
                    goto LABEL_76;
                  case 32:
                    v33 = v57;
                    goto LABEL_128;
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
                  case 35:
                  case 126:
                    v34 = v57;
                    goto LABEL_125;
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
                    v33 = v57;
                    goto LABEL_123;
                  case 39:
                    goto LABEL_62;
                  case 63:
                    goto LABEL_58;
                  case 92:
                    goto LABEL_65;
                  case 123:
                  case 125:
                    goto LABEL_17;
                  default:
                    goto LABEL_98;
                }
              }
              return sub_406BB0((__int64)v9, v10, s);
            }
          }
        }
        LOBYTE(v23) = *v20;
        switch ( *v20 )
        {
          case 0:
            goto LABEL_81;
          case 7:
            LOBYTE(v23) = 97;
            goto LABEL_78;
          case 8:
            LOBYTE(v23) = 98;
            goto LABEL_69;
          case 9:
LABEL_72:
            LOBYTE(v23) = 116;
            goto LABEL_69;
          case 10:
LABEL_68:
            LOBYTE(v23) = 110;
LABEL_69:
            LODWORD(v13) = 0;
            v11 = 0;
            if ( v82 )
              return sub_406BB0((__int64)v9, v10, s);
            goto LABEL_29;
          case 11:
LABEL_80:
            LOBYTE(v23) = 118;
            goto LABEL_78;
          case 12:
LABEL_77:
            LOBYTE(v23) = 102;
LABEL_78:
            if ( v82 )
              return sub_406BB0((__int64)v9, v10, s);
LABEL_79:
            v11 = 0;
            goto LABEL_37;
          case 13:
            v57 = 0;
LABEL_76:
            LOBYTE(v23) = 13;
            v29 = 114;
            LOBYTE(v13) = v19 == 2;
            goto LABEL_66;
          case 32:
            v33 = 0;
LABEL_128:
            LOBYTE(v23) = 32;
            goto LABEL_123;
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
            v57 = 0;
LABEL_74:
            LODWORD(v13) = 0;
            goto LABEL_67;
          case 35:
          case 126:
            v34 = 0;
LABEL_125:
            if ( !v18 )
            {
              v11 = v57;
              LODWORD(v13) = 0;
              v57 = v34;
              goto LABEL_23;
            }
            v57 = v34;
            v11 = 0;
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
            v33 = 0;
LABEL_123:
            v11 = v57;
            v57 = v33;
            v25 = 0;
            goto LABEL_25;
          case 39:
            v57 = 0;
            goto LABEL_62;
          case 63:
            v57 = 0;
            goto LABEL_58;
          case 92:
            v57 = 0;
            goto LABEL_65;
          case 123:
          case 125:
            v57 = 0;
            goto LABEL_17;
          default:
            v57 = 0;
            goto LABEL_98;
        }
LABEL_24:
        v25 = 0;
LABEL_25:
        if ( a7 )
        {
          LODWORD(v13) = (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v23 >> 5)) >> v23) & 1;
          if ( (_DWORD)v13 )
          {
            LOBYTE(v13) = v19 == 2;
LABEL_28:
            if ( v82 )
              return sub_406BB0((__int64)v9, v10, s);
LABEL_29:
            v26 = v15 ^ 1;
            LOBYTE(v26) = v13 & (v15 ^ 1);
            if ( (unsigned __int8)v13 & ((unsigned __int8)v15 ^ 1) )
            {
              if ( v10 > v16 )
                v9[v16] = 39;
              if ( v16 + 1 < v10 )
                v9[v16 + 1] = 36;
              LODWORD(v13) = v16 + 2;
              if ( v16 + 2 < v10 )
                v9[v16 + 2] = 39;
              v16 += 3LL;
              v15 = v26;
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
        if ( v57 )
          goto LABEL_28;
        ++v18;
        LODWORD(v28) = v15 & (v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v28 )
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
          v9[v16] = v23;
        v27 = v59;
        ++v16;
        if ( !(_BYTE)v11 )
          v27 = 0;
        v59 = v27;
      }
      LOBYTE(v23) = *v20;
      switch ( *v20 )
      {
        case 0:
          if ( !v56 )
          {
            if ( !(v81 & 1) )
            {
              v57 = 0;
              LOBYTE(v13) = v19 == 2;
              v11 = 0;
              LOBYTE(v23) = 0;
              goto LABEL_23;
            }
            ++v18;
            goto LABEL_4;
          }
LABEL_81:
          if ( v82 )
            return sub_406BB0((__int64)v9, v10, s);
          v57 = 0;
LABEL_83:
          LOBYTE(v13) = v19 == 2;
          v25 = v15 ^ 1;
          LOBYTE(v25) = (v19 == 2) & (v15 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 36;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v31 = v16 + 3;
            if ( v10 <= v16 + 3 )
            {
              v16 += 4LL;
              v15 = v25;
              v11 = 0;
              LOBYTE(v23) = 48;
              goto LABEL_49;
            }
            goto LABEL_91;
          }
          v31 = v16;
          if ( v10 > v16 )
          {
            v25 = v15;
LABEL_91:
            v9[v31] = 92;
            v15 = v25;
          }
          v16 = v31 + 1;
          if ( v19 == 2 )
          {
            v25 = v11;
            LOBYTE(v23) = 48;
            v11 = 0;
            goto LABEL_49;
          }
          LOBYTE(v23) = 48;
          if ( v18 + 1 < v17 && (unsigned __int8)(s[v18 + 1] - 48) <= 9u )
          {
            if ( v10 > v16 )
              v9[v16] = 48;
            if ( v10 > v31 + 2 )
              v9[v31 + 2] = 48;
            v16 = v31 + 3;
            LOBYTE(v23) = 48;
          }
LABEL_95:
          v25 = v11;
          v11 = 0;
          if ( (unsigned __int8)v13 | v56 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v23) = 7;
          v29 = 97;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v23) = 8;
          v29 = 98;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v23) = 9;
          v29 = 116;
          goto LABEL_104;
        case 10:
          LOBYTE(v23) = 10;
          v29 = 110;
          goto LABEL_104;
        case 11:
          LOBYTE(v23) = 11;
          v29 = 118;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 12:
          LOBYTE(v23) = 12;
          v29 = 102;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 13:
          LOBYTE(v23) = 13;
          v29 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v57 = v19 == 2 && v82;
          if ( v57 )
            return sub_406BB0((__int64)v9, v10, s);
          goto LABEL_66;
        case 32:
          LOBYTE(v23) = 32;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_21;
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
        case 35:
        case 126:
          LOBYTE(v13) = v19 == 2;
          goto LABEL_20;
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
        case 39:
LABEL_62:
          if ( v19 != 2 )
          {
            v83 = v11;
            LODWORD(v13) = 0;
            LOBYTE(v23) = 39;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_406BB0((__int64)v9, v10, s);
          if ( !v10 || (v13 = 0LL, v79) )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 92;
            v13 = v10;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v10 = v79;
          }
          v83 = v11;
          v16 += 3LL;
          v25 = 0;
          v15 = 0;
          v79 = v10;
          LOBYTE(v23) = 39;
          v10 = v13;
          goto LABEL_49;
        case 63:
LABEL_58:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_406BB0((__int64)v9, v10, s);
            v11 = 0;
            v25 = 0;
            LOBYTE(v23) = 63;
            goto LABEL_49;
          }
          if ( v19 != 5 )
          {
            LOBYTE(v23) = 63;
            LOBYTE(v13) = v19 == 2;
            v11 = 0;
            goto LABEL_23;
          }
          if ( !(v81 & 4)
            || v18 + 2 >= v17
            || s[v18 + 1] != 63
            || (v23 = (unsigned __int8)s[v18 + 2], (unsigned __int8)v23 > 0x3Eu)
            || (v49 = 8070630310989004800LL, !_bittest64(&v49, v23)) )
          {
            LODWORD(v13) = 0;
            v11 = 0;
            LOBYTE(v23) = 63;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_406BB0((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_406BB0((__int64)v9, v10, s);
            ++v18;
            LOBYTE(v28) = v15;
            v11 = 0;
            LOBYTE(v23) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LODWORD(v13) = v56;
          LOBYTE(v23) = 92;
          v29 = 92;
          LOBYTE(v13) = (n != 0) & v82 & v56;
          if ( (_BYTE)v13 )
          {
            ++v18;
            LOBYTE(v28) = v15;
            v11 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v56 )
          {
LABEL_67:
            v11 = 0;
            goto LABEL_23;
          }
          LOBYTE(v23) = v29;
          v11 = 0;
          goto LABEL_28;
        case 123:
        case 125:
LABEL_17:
          v24 = v17 != 1;
          if ( v17 == -1LL )
            v24 = s[1] != 0;
          LOBYTE(v13) = v19 == 2;
          if ( v24 )
            goto LABEL_67;
LABEL_20:
          if ( v18 )
            goto LABEL_67;
LABEL_21:
          if ( !v82 || !(_BYTE)v13 )
            goto LABEL_23;
          return sub_406BB0((__int64)v9, v10, s);
        default:
LABEL_98:
          if ( v80 == 1 )
          {
            v73 = v19;
            v68 = v17;
            v63 = v15;
            v28 = __ctype_b_loc();
            LODWORD(v13) = (unsigned __int8)v23;
            v15 = v63;
            v17 = v68;
            v19 = v73;
            v32 = 1LL;
            LODWORD(v28) = (*v28)[(unsigned __int8)v23];
            LOWORD(v28) = (unsigned __int16)v28 & 0x4000;
            LOBYTE(v11) = (_WORD)v28 != 0;
            LOBYTE(v13) = v56 & ((_WORD)v28 == 0);
            goto LABEL_100;
          }
          ps = 0LL;
          if ( v17 == -1LL )
          {
            v74 = v19;
            v69 = v15;
            v64 = v20;
            v39 = strlen(s);
            v19 = v74;
            LOBYTE(v15) = v69;
            v20 = v64;
            v17 = v39;
          }
          v85 = v16;
          v86 = v20;
          v40 = 0LL;
          v84 = v15;
          v75 = v9;
          v77 = v10;
          v65 = v17;
          v70 = v19;
          break;
      }
      while ( 2 )
      {
        v41 = v18 + v40;
        v28 = (const unsigned __int16 **)sub_40A580((wchar_t *)&wc, &s[v18 + v40]);
        v42 = v28;
        if ( !v28 )
        {
LABEL_241:
          v32 = v40;
          v16 = v85;
          v15 = v84;
          v9 = v75;
          LODWORD(v13) = v11 ^ 1;
          v10 = v77;
          v17 = v65;
          v19 = v70;
          LOBYTE(v13) = v56 & (v11 ^ 1);
          goto LABEL_242;
        }
        if ( v28 == (const unsigned __int16 **)-1LL )
        {
          v32 = v40;
          v16 = v85;
          v11 = 0;
          v15 = v84;
          v9 = v75;
          v10 = v77;
          v17 = v65;
          v19 = v70;
          LODWORD(v13) = v56;
          goto LABEL_242;
        }
        if ( v28 == (const unsigned __int16 **)-2LL )
        {
          v17 = v65;
          v50 = v18 + v40;
          v51 = &s[v18 + v40];
          v28 = (const unsigned __int16 **)v40;
          v32 = v40;
          v15 = v84;
          v16 = v85;
          v9 = v75;
          v10 = v77;
          v19 = v70;
          if ( v50 < v65 && *v51 )
          {
            do
              v28 = (const unsigned __int16 **)((char *)v28 + 1);
            while ( (unsigned __int64)v28 + v18 < v65 && *((_BYTE *)v28 + (_QWORD)v86) );
            v32 = (unsigned __int64)v28;
          }
          LODWORD(v13) = v56;
          v11 = 0;
LABEL_242:
          if ( v32 > 1 )
            goto LABEL_174;
LABEL_100:
          if ( (_BYTE)v13 )
          {
            LODWORD(v13) = v56;
            LOBYTE(v11) = 0;
LABEL_174:
            v44 = 0;
            v45 = v18 + v32;
            v46 = v57;
            while ( 1 )
            {
              if ( (_BYTE)v13 )
              {
                if ( v82 )
                  return sub_406BB0((__int64)v9, v10, s);
                LOBYTE(v28) = (v15 ^ 1) & (v19 == 2);
                if ( (_BYTE)v28 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 36;
                  if ( v10 > v16 + 2 )
                    v9[v16 + 2] = 39;
                  v16 += 3LL;
                  v15 = (int)v28;
                }
                if ( v10 > v16 )
                  v9[v16] = 92;
                if ( v10 > v16 + 1 )
                  v9[v16 + 1] = ((unsigned __int8)v23 >> 6) + 48;
                LODWORD(v28) = v16 + 2;
                if ( v10 > v16 + 2 )
                {
                  LODWORD(v28) = (((unsigned __int8)v23 >> 3) & 7) + 48;
                  v9[v16 + 2] = (_BYTE)v28;
                }
                ++v18;
                v16 += 3LL;
                LOBYTE(v23) = (v23 & 7) + 48;
                if ( v18 >= v45 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_40;
                }
                v44 = v13;
              }
              else
              {
                LODWORD(v28) = v15 & (v44 ^ 1);
                if ( v46 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 92;
                  ++v16;
                }
                if ( ++v18 >= v45 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_51;
                }
                if ( (_BYTE)v28 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  LODWORD(v28) = v16 + 1;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 39;
                  v16 += 2LL;
                  v46 = 0;
                  v15 = 0;
                }
                else
                {
                  v46 = 0;
                }
              }
              if ( v10 > v16 )
                v9[v16] = v23;
              LOBYTE(v23) = s[v18];
              ++v16;
            }
          }
LABEL_101:
          LOBYTE(v13) = v19 == 2;
LABEL_23:
          v25 = (v13 | v56 ^ 1) ^ 1;
          LOBYTE(v25) = v82 | (v13 | v56 ^ 1) ^ 1;
          if ( !(v82 | (unsigned __int8)(v13 | v56 ^ 1) ^ 1) )
            goto LABEL_49;
          goto LABEL_24;
        }
        if ( v70 != 2 || !v82 || v28 == (const unsigned __int16 **)1 )
        {
LABEL_148:
          if ( !iswprint(wc) )
            v11 = 0;
          v40 += (unsigned __int64)v42;
          LODWORD(v28) = mbsinit(&ps);
          if ( (_DWORD)v28 )
            goto LABEL_241;
          continue;
        }
        break;
      }
      v43 = &s[v41 + 1];
      while ( (unsigned __int8)(*v43 - 91) > 0x21u || !((1LL << (*v43 - 91)) & 0x20000002BLL) )
      {
        if ( &s[(_QWORD)v42 + v41] == ++v43 )
          goto LABEL_148;
      }
      v9 = v75;
      v10 = v77;
      return sub_406BB0((__int64)v9, v10, s);
    case 5:
      if ( v12 )
      {
        v59 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v15 = 0;
          v59 = 1;
          v83 = 0;
          v79 = 0LL;
        }
        else
        {
          v79 = 0LL;
          v15 = 0;
          v59 = 1;
          v83 = 0;
        }
        v82 = 0;
        v16 = 1LL;
        v56 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 6:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 5;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v56 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v59 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v56 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_406AB0("`", v11);
        v47 = sub_406AB0("'", v11);
        v14 = v55;
        a9 = v47;
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
      v58 = v14;
      v48 = strlen(a9);
      v59 = 1;
      v15 = 0;
      v14 = v58;
      n = v48;
      v83 = 0;
      s2 = a9;
      v79 = 0LL;
      v56 = 1;
      goto LABEL_3;
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_407DE0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int128 *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // er8
  char *v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v17 = a2;
  v6 = __errno_location();
  v7 = off_614318;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_614330 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_408F10();
    v9 = 16LL * (a1 + 1);
    if ( off_614318 == &xmmword_614320 )
    {
      v7 = (__int128 *)sub_408D20(0LL, v9);
      off_614318 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_614320);
    }
    else
    {
      off_614318 = (__int128 *)sub_408D20(off_614318, v9);
      v7 = off_614318;
    }
    memset(&v7[dword_614330], 0, 16LL * (a1 + 1 - dword_614330));
    dword_614330 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_406BB0(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_6146A0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_408CC0(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_406BB0(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_407DE0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  int *v6; // rax
  __int128 *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // er8
  char *v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v4 = a3;
  v5 = a4;
  v17 = a2;
  v6 = __errno_location();
  v7 = off_614318;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_614330 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_408F10();
    v9 = 16LL * (a1 + 1);
    if ( off_614318 == &xmmword_614320 )
    {
      v7 = (__int128 *)sub_408D20(0LL, v9);
      off_614318 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_614320);
    }
    else
    {
      off_614318 = (__int128 *)sub_408D20(off_614318, v9);
      v7 = off_614318;
    }
    memset(&v7[dword_614330], 0, 16LL * (a1 + 1 - dword_614330));
    dword_614330 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_406BB0(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_6146A0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_408CC0(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_406BB0(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_408300(int a1, int a2, char *a3)
{
  int v4; // [rsp+0h] [rbp-48h]
  int v5; // [rsp+4h] [rbp-44h]
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4 = a2;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_407DE0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408300(int a1, int a2, char *a3)
{
  int v4; // [rsp+0h] [rbp-48h]
  int v5; // [rsp+4h] [rbp-44h]
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4 = a2;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_407DE0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408370(int a1, int a2, char *a3, unsigned __int64 a4)
{
  int v5; // [rsp+0h] [rbp-48h]
  int v6; // [rsp+4h] [rbp-44h]
  __int64 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+10h] [rbp-38h]
  __int64 v9; // [rsp+18h] [rbp-30h]
  __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v5 = a2;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  return sub_407DE0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_408370(int a1, int a2, char *a3, unsigned __int64 a4)
{
  int v5; // [rsp+0h] [rbp-48h]
  int v6; // [rsp+4h] [rbp-44h]
  __int64 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+10h] [rbp-38h]
  __int64 v9; // [rsp+18h] [rbp-30h]
  __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v5 = a2;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  return sub_407DE0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_4083E0(int a1, char *a2)
{
  return sub_408300(0, a1, a2);
}

_BYTE *__fastcall sub_408400(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_6147D0;
  v7 = _mm_load_si128((const __m128i *)&xmmword_6147A0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_6147B0);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_6147C0);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_407DE0(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_408480(char *a1)
{
  return sub_408400(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_4084B0(int a1, int a2, char *a3)
{
  int v4; // [rsp+0h] [rbp-48h]
  int v5; // [rsp+4h] [rbp-44h]
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

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
  return sub_407DE0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4084B0(int a1, int a2, char *a3)
{
  int v4; // [rsp+0h] [rbp-48h]
  int v5; // [rsp+4h] [rbp-44h]
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

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
  return sub_407DE0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408520(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_6147A0);
  v7 = _mm_load_si128((const __m128i *)&xmmword_6147B0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_6147C0);
  v9 = qword_6147D0;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_407DE0(a1, a4, a5, (__int64)&v6);
}

_BYTE *__fastcall sub_408610(int a1, char *a2)
{
  return sub_407DE0(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6142E0);
}

_BYTE *__fastcall sub_408630(char *a1)
{
  return sub_407DE0(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6142E0);
}

void __fastcall sub_408710(int status, int errnum, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  void *v5; // rbx
  char *v6; // rbx
  int *v7; // rax

  v4 = sub_4094C0(a3, a4);
  if ( !v4 )
  {
    v6 = dcgettext(0LL, "unable to display error message", 5);
    v7 = __errno_location();
    error(0, *v7, v6);
    abort();
  }
  v5 = (void *)v4;
  error(status, errnum, "%s", v4);
  free(v5);
}

void __fastcall sub_408710(int status, int errnum, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  void *v5; // rbx
  char *v6; // rbx
  int *v7; // rax

  v4 = sub_4094C0(a3, a4);
  if ( !v4 )
  {
    v6 = dcgettext(0LL, "unable to display error message", 5);
    v7 = __errno_location();
    error(0, *v7, v6);
    abort();
  }
  v5 = (void *)v4;
  error(status, errnum, "%s", v4);
  free(v5);
}

void __fastcall sub_408710(int status, int errnum, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  void *v5; // rbx
  char *v6; // rbx
  int *v7; // rax

  v4 = sub_4094C0(a3, a4);
  if ( !v4 )
  {
    v6 = dcgettext(0LL, "unable to display error message", 5);
    v7 = __errno_location();
    error(0, *v7, v6);
    abort();
  }
  v5 = (void *)v4;
  error(status, errnum, "%s", v4);
  free(v5);
}

__int64 __fastcall sub_408720(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6, double a7)
{
  __int64 v7; // r12
  __int64 *v8; // rbx
  char *v9; // rax
  __int64 v10; // r9
  char *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rbx
  char *v15; // rax
  __int64 result; // rax
  const char *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rbx
  char *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r12
  __int64 v24; // rbx
  char *v25; // rax
  __int64 v26; // r9
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 v29; // rbx
  char *v30; // rax
  __int64 v31; // r14
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r13
  __int64 v37; // rbx
  char *v38; // rax
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // [rsp+0h] [rbp-58h]
  __int64 v43; // [rsp+0h] [rbp-58h]
  __int64 v44; // [rsp+8h] [rbp-50h]
  __int64 v45; // [rsp+8h] [rbp-50h]

  v7 = a6;
  v8 = a5;
  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4, a7);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3, a4, a6, a7);
  v9 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v9, 2017LL, v10, a7);
  v11 = dcgettext(
          0LL,
          "\n"
          "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
          "This is free software: you are free to change and redistribute it.\n"
          "There is NO WARRANTY, to the extent permitted by law.\n"
          "\n",
          5);
  fputs_unlocked(v11, stream);
  switch ( v7 )
  {
    case 0LL:
      abort();
      return result;
    case 1LL:
      v19 = *v8;
      v20 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v20, v19, v21, v22, a7);
    case 2LL:
      v23 = v8[1];
      v24 = *v8;
      v25 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v25, v24, v23, v26, a7);
    case 3LL:
      v27 = v8[2];
      v28 = v8[1];
      v29 = *v8;
      v30 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29, v28, v27, a7);
    case 4LL:
      v31 = v8[3];
      v32 = v8[2];
      v33 = v8[1];
      v34 = *v8;
      v35 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v31 = v8[3];
      v32 = v8[2];
      v33 = v8[1];
      v34 = *v8;
      v35 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v35, v34, v33, v32, a7);
      return v31;
    case 6LL:
      v43 = v8[1];
      v36 = v8[2];
      v37 = *v8;
      v38 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      v39 = v36;
      return __fprintf_chk(stream, 1LL, v38, v37, v43, v39, a7);
    case 7LL:
      v40 = v8[1];
      v45 = v8[2];
      v37 = *v8;
      v43 = v40;
      v38 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      v39 = v45;
      return __fprintf_chk(stream, 1LL, v38, v37, v43, v39, a7);
    case 8LL:
      v12 = v8[2];
      v13 = v8[1];
      v14 = *v8;
      v42 = v12;
      v44 = v13;
      v15 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14, v44, v42, a7);
    case 9LL:
      v17 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v18 = v8[1];
      v42 = v8[2];
      v14 = *v8;
      v44 = v18;
      goto LABEL_8;
    default:
      v17 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v41 = v8[1];
      v42 = v8[2];
      v14 = *v8;
      v44 = v41;
LABEL_8:
      v15 = dcgettext(0LL, v17, 5);
      return __fprintf_chk(stream, 1LL, v15, v14, v44, v42, a7);
  }
}

__int64 __fastcall sub_408720(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6, double a7)
{
  __int64 v7; // r12
  __int64 *v8; // rbx
  char *v9; // rax
  __int64 v10; // r9
  char *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rbx
  char *v15; // rax
  __int64 result; // rax
  const char *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rbx
  char *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r12
  __int64 v24; // rbx
  char *v25; // rax
  __int64 v26; // r9
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 v29; // rbx
  char *v30; // rax
  __int64 v31; // r14
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r13
  __int64 v37; // rbx
  char *v38; // rax
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // [rsp+0h] [rbp-58h]
  __int64 v43; // [rsp+0h] [rbp-58h]
  __int64 v44; // [rsp+8h] [rbp-50h]
  __int64 v45; // [rsp+8h] [rbp-50h]

  v7 = a6;
  v8 = a5;
  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4, a7);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3, a4, a6, a7);
  v9 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v9, 2017LL, v10, a7);
  v11 = dcgettext(
          0LL,
          "\n"
          "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
          "This is free software: you are free to change and redistribute it.\n"
          "There is NO WARRANTY, to the extent permitted by law.\n"
          "\n",
          5);
  fputs_unlocked(v11, stream);
  switch ( v7 )
  {
    case 0LL:
      abort();
      return result;
    case 1LL:
      v19 = *v8;
      v20 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v20, v19, v21, v22, a7);
    case 2LL:
      v23 = v8[1];
      v24 = *v8;
      v25 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v25, v24, v23, v26, a7);
    case 3LL:
      v27 = v8[2];
      v28 = v8[1];
      v29 = *v8;
      v30 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29, v28, v27, a7);
    case 4LL:
      v31 = v8[3];
      v32 = v8[2];
      v33 = v8[1];
      v34 = *v8;
      v35 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v31 = v8[3];
      v32 = v8[2];
      v33 = v8[1];
      v34 = *v8;
      v35 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v35, v34, v33, v32, a7);
      return v31;
    case 6LL:
      v43 = v8[1];
      v36 = v8[2];
      v37 = *v8;
      v38 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      v39 = v36;
      return __fprintf_chk(stream, 1LL, v38, v37, v43, v39, a7);
    case 7LL:
      v40 = v8[1];
      v45 = v8[2];
      v37 = *v8;
      v43 = v40;
      v38 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      v39 = v45;
      return __fprintf_chk(stream, 1LL, v38, v37, v43, v39, a7);
    case 8LL:
      v12 = v8[2];
      v13 = v8[1];
      v14 = *v8;
      v42 = v12;
      v44 = v13;
      v15 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14, v44, v42, a7);
    case 9LL:
      v17 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v18 = v8[1];
      v42 = v8[2];
      v14 = *v8;
      v44 = v18;
      goto LABEL_8;
    default:
      v17 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v41 = v8[1];
      v42 = v8[2];
      v14 = *v8;
      v44 = v41;
LABEL_8:
      v15 = dcgettext(0LL, v17, 5);
      return __fprintf_chk(stream, 1LL, v15, v14, v44, v42, a7);
  }
}

__int64 __fastcall sub_408B20(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5, double a6)
{
  __int64 i; // r9
  __int64 *v7; // r10
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 *v10; // r10
  __int64 v11; // rax
  __int64 v13[11]; // [rsp+0h] [rbp-58h]

  for ( i = 0LL; i != 10; ++i )
  {
    v9 = *a5;
    if ( (unsigned int)*a5 <= 0x2F )
    {
      v7 = (__int64 *)(*((_QWORD *)a5 + 2) + v9);
      *a5 = v9 + 8;
      v8 = *v7;
      v13[i] = *v7;
      if ( !v8 )
        return sub_408720(a1, a2, a3, a4, v13, i, a6);
      continue;
    }
    v10 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v10 + 1;
    v11 = *v10;
    v13[i] = *v10;
    if ( !v11 )
      break;
  }
  return sub_408720(a1, a2, a3, a4, v13, i, a6);
}

__int64 __fastcall sub_408B80(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7, char a8)
{
  char *v8; // r10
  unsigned int v9; // er8
  __int64 i; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v16[10]; // [rsp+20h] [rbp-88h]
  char v17[32]; // [rsp+70h] [rbp-38h]
  __int64 v18; // [rsp+90h] [rbp-18h]
  __int64 v19; // [rsp+98h] [rbp-10h]

  v18 = a5;
  v8 = &a8;
  v9 = 32;
  v19 = a6;
  for ( i = 0LL; i != 10; ++i )
  {
    if ( v9 <= 0x2F )
    {
      v11 = v9;
      v9 += 8;
      v12 = *(_QWORD *)&v17[v11];
      v16[i] = v12;
      if ( !v12 )
        return sub_408720(a1, a2, a3, a4, v16, i, a7);
      continue;
    }
    v13 = (__int64 *)v8;
    v8 += 8;
    v14 = *v13;
    v16[i] = v14;
    if ( !v14 )
      break;
  }
  return sub_408720(a1, a2, a3, a4, v16, i, a7);
}

int sub_408C40()
{
  char *v0; // rax
  __int64 v1; // rcx
  char *v2; // rax
  FILE *v3; // rbx
  char *v4; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org", v1);
  v2 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v2, &unk_40DCA1, "https://www.gnu.org/software/coreutils/");
  v3 = stdout;
  v4 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v4, v3);
}

void *__fastcall sub_408CC0(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_408F10();
  }
  return result;
}

void *__fastcall sub_408D20(void *a1, size_t a2)
{
  void *result; // rax

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
        sub_408F10();
    }
  }
  return result;
}

void *__fastcall sub_408EC0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_408CC0(n);
  return memcpy(v2, src, n);
}

void __noreturn sub_408F10()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_408F50(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
{
  char **v5; // r15
  unsigned __int64 *v6; // r14
  const char *v7; // r13
  int *v8; // rax
  int *v9; // r12
  unsigned __int8 v10; // bl
  const unsigned __int16 *v11; // rsi
  char *v12; // rax
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  int v15; // er12
  char *v17; // rax
  char *v18; // r8
  __int64 v19; // rax
  char *v20; // rax
  char v21; // al
  int v22; // esi
  unsigned __int64 v23; // rdx
  char *v24; // r8
  unsigned __int64 v25; // kr30_8
  char *v26; // rax
  int v27; // edi
  int v28; // er9
  bool v29; // of
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int base; // [rsp+0h] [rbp-58h]
  char *basea; // [rsp+0h] [rbp-58h]
  char *baseb; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h]

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
  v5 = a2;
  base = a3;
  v6 = a4;
  v7 = a5;
  if ( !a2 )
    v5 = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = *nptr;
  v11 = *__ctype_b_loc();
  v12 = nptr;
  while ( v11[v10] & 0x2000 )
    v10 = *++v12;
  if ( v10 == 45 )
    return 4;
  v13 = __strtoul_internal(nptr, v5, base, 0);
  if ( *v5 == nptr )
  {
    basea = *v5;
    if ( v7 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(v7, (char)v15);
        v18 = basea;
        if ( v17 )
          goto LABEL_20;
      }
    }
    return 4;
  }
  if ( *v9 )
  {
    v14 = 1;
    if ( *v9 == 34 )
      goto LABEL_11;
    return 4;
  }
  v14 = 0;
LABEL_11:
  if ( v7 )
  {
    v15 = (unsigned __int8)**v5;
    if ( (_BYTE)v15 )
    {
      baseb = *v5;
      v26 = strchr(v7, (char)v15);
      v18 = baseb;
      if ( !v26 )
      {
LABEL_39:
        *v6 = v13;
        v14 |= 2u;
        return v14;
      }
LABEL_20:
      v19 = 142129060940101LL;
      if ( !_bittest64(&v19, (unsigned int)(v15 - 69)) || (v37 = v18, v20 = strchr(v7, 48), v18 = v37, !v20) )
      {
LABEL_26:
        v22 = 1;
        v23 = 1024LL;
        goto LABEL_27;
      }
      v21 = v37[1];
      if ( v21 != 68 )
      {
        if ( v21 == 105 )
        {
          v23 = 1024LL;
          v22 = 2 * (v37[2] == 66) + 1;
LABEL_27:
          switch ( (_BYTE)v15 )
          {
            case 0x42:
              if ( v13 >> 54 )
                goto LABEL_37;
              v13 <<= 10;
              break;
            case 0x45:
              goto LABEL_70;
            case 0x47:
            case 0x67:
              goto LABEL_76;
            case 0x4B:
            case 0x6B:
              goto LABEL_36;
            case 0x4D:
            case 0x6D:
              goto LABEL_29;
            case 0x50:
              goto LABEL_64;
            case 0x54:
            case 0x74:
              goto LABEL_58;
            case 0x59:
              goto LABEL_52;
            case 0x5A:
              goto LABEL_46;
            case 0x62:
              goto LABEL_43;
            case 0x63:
              break;
            case 0x77:
              if ( (v13 & 0x8000000000000000LL) != 0LL )
                goto LABEL_37;
              v13 *= 2LL;
              break;
            default:
              goto LABEL_39;
          }
LABEL_32:
          v24 = &v18[v22];
          *v5 = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
        if ( v21 != 66 )
        {
          switch ( (_BYTE)v15 )
          {
            case 0x45:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_70:
              v33 = 6;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_50;
            case 0x46:
            case 0x48:
            case 0x49:
            case 0x4A:
            case 0x4C:
            case 0x4E:
            case 0x4F:
            case 0x51:
            case 0x52:
            case 0x53:
            case 0x55:
            case 0x56:
            case 0x57:
            case 0x58:
            case 0x5B:
            case 0x5C:
            case 0x5D:
            case 0x5E:
            case 0x5F:
            case 0x60:
            case 0x61:
            case 0x64:
            case 0x65:
            case 0x66:
            case 0x68:
            case 0x69:
            case 0x6A:
            case 0x6C:
            case 0x6E:
            case 0x6F:
            case 0x70:
            case 0x71:
            case 0x72:
            case 0x73:
              goto LABEL_39;
            case 0x47:
            case 0x67:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_76:
              if ( is_mul_ok((int)v23, v13)
                && is_mul_ok((int)v23, (int)v23 * v13)
                && is_mul_ok((int)v23, (int)v23 * (int)v23 * v13) )
              {
                v13 *= (int)v23 * (int)v23 * (__int64)(int)v23;
              }
              else
              {
                v13 = -1LL;
                v14 |= 1u;
              }
              goto LABEL_32;
            case 0x4B:
            case 0x6B:
              v22 = 1;
              v23 = 1024LL;
LABEL_36:
              v25 = v13;
              v13 *= v23;
              if ( is_mul_ok(v23, v25) )
                goto LABEL_32;
              goto LABEL_37;
            case 0x4D:
            case 0x6D:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_29:
              if ( !is_mul_ok((int)v23, v13) || !is_mul_ok((int)v23, (int)v23 * v13) )
                goto LABEL_37;
              v13 *= (int)v23 * (__int64)(int)v23;
              break;
            case 0x50:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_64:
              v32 = 5;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_50;
            case 0x54:
            case 0x74:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_58:
              v31 = 4;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_50;
            case 0x59:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_52:
              v30 = 8;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v30;
              }
              while ( v30 );
              goto LABEL_50;
            case 0x5A:
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_46:
              v27 = 7;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v27;
              }
              while ( v27 );
LABEL_50:
              v14 |= v28;
              break;
            case 0x62:
              v22 = 1;
LABEL_43:
              if ( v13 >> 55 )
              {
LABEL_37:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 9;
              }
              break;
            case 0x63:
              v22 = 1;
              goto LABEL_32;
            default:
              goto LABEL_26;
          }
          goto LABEL_32;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_27;
    }
  }
LABEL_13:
  *v6 = v13;
  return v14;
}

_BYTE *__fastcall sub_409390(__int64 a1, __m128i *a2)
{
  __int64 v2; // r15
  __int64 v3; // r13
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  const char **v6; // rdx
  size_t v7; // rax
  bool v8; // cf
  unsigned __int32 v9; // eax
  _BYTE *v10; // rbp
  _BYTE *v11; // rbx
  const char **v12; // rdx
  const char *v13; // r15
  size_t v14; // r14
  unsigned int v15; // eax
  __m128i v17; // [rsp+8h] [rbp-50h]

  v17 = _mm_loadu_si128(a2);
  v2 = a2[1].m128i_i64[0];
  if ( a1 )
  {
    v3 = a1;
    v4 = a1;
    v5 = 0LL;
    do
    {
      v9 = v17.m128i_i32[0];
      if ( v17.m128i_i32[0] <= 0x2Fu )
      {
        v17.m128i_i32[0] += 8;
        v6 = (const char **)(v2 + v9);
      }
      else
      {
        v6 = (const char **)v17.m128i_i64[1];
        v17.m128i_i64[1] += 8LL;
      }
      v7 = strlen(*v6);
      v8 = __CFADD__(v7, v5);
      v5 += v7;
      if ( v8 )
        v5 = -1LL;
      --v4;
    }
    while ( v4 );
    if ( v5 > 0x7FFFFFFF )
    {
      v10 = 0LL;
      *__errno_location() = 75;
      return v10;
    }
    v10 = sub_408CC0(v5 + 1);
    v11 = v10;
    do
    {
      v15 = a2->m128i_i64[0];
      if ( LODWORD(a2->m128i_i64[0]) <= 0x2F )
      {
        v12 = (const char **)(a2[1].m128i_i64[0] + v15);
        LODWORD(a2->m128i_i64[0]) = v15 + 8;
      }
      else
      {
        v12 = (const char **)a2->m128i_i64[1];
        a2->m128i_i64[1] = (__int64)(v12 + 1);
      }
      v13 = *v12;
      v14 = strlen(*v12);
      memcpy(v11, v13, v14);
      v11 += v14;
      --v3;
    }
    while ( v3 );
  }
  else
  {
    v11 = sub_408CC0(1uLL);
    v10 = v11;
  }
  *v11 = 0;
  return v10;
}

_BYTE *__fastcall sub_4094C0(_BYTE *a1, __m128i *a2)
{
  __int64 v2; // rax
  char v3; // cl
  __int64 v5; // [rsp+8h] [rbp-10h]

  if ( !*a1 )
  {
    v2 = 0LL;
    return sub_409390(v2, a2);
  }
  if ( *a1 == 37 && a1[1] == 115 )
  {
    v2 = 0LL;
    do
    {
      v3 = a1[2 * ++v2];
      if ( !v3 )
        return sub_409390(v2, a2);
    }
    while ( v3 == 37 && a1[2 * v2 + 1] == 115 );
  }
  if ( (int)sub_40A600(&v5, a1, a2) >= 0 )
    return (_BYTE *)v5;
  if ( *__errno_location() == 12 )
    sub_408F10();
  return 0LL;
}

int __fastcall sub_409550(FILE *stream)
{
  int *v1; // rax
  int v2; // er12
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
  if ( !(unsigned int)sub_409710(stream) )
    return fclose(stream);
  v1 = __errno_location();
  v2 = *v1;
  v3 = v1;
  result = fclose(stream);
  if ( v2 )
  {
    *v3 = v2;
    result = -1;
  }
  return result;
}

__int64 __fastcall sub_4095D0(char a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // rax
  int v7; // edi
  int v8; // er12
  int *v9; // rbp

  if ( a2 == 1030 )
  {
    if ( dword_6147D8 < 0 )
    {
      v3 = sub_4095D0(a1);
      if ( v3 >= 0 && dword_6147D8 == -1 )
      {
LABEL_8:
        v5 = fcntl((unsigned __int8)v3, 1);
        if ( v5 < 0 || fcntl((unsigned __int8)v3, 2, v5 | 1u) == -1 )
        {
          v6 = __errno_location();
          v7 = v3;
          v3 = -1;
          v8 = *v6;
          v9 = v6;
          close(v7);
          *v9 = v8;
        }
        return (unsigned int)v3;
      }
    }
    else
    {
      v3 = fcntl(a1, 1030, (unsigned int)a3);
      if ( v3 >= 0 || *__errno_location() != 22 )
      {
        dword_6147D8 = 1;
      }
      else
      {
        v3 = sub_4095D0(a1);
        if ( v3 >= 0 )
        {
          dword_6147D8 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v3;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_409710(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_409750(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_409750(FILE *a1, __off_t a2, int a3)
{
  __off_t v3; // rax
  int v4; // er12
  int v5; // eax

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

__int64 __fastcall sub_4097B0(__int64 a1, int *a2)
{
  __int64 v2; // r11
  int v3; // er12
  int v4; // ebp
  __int64 v5; // rbx
  int v6; // er9
  int v7; // er10
  int v8; // er8
  int v9; // er14
  int v10; // edx
  __int64 *v11; // rax
  unsigned __int64 v12; // r13
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
  v6 = a2[11];
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
      v12 = v2 + 8 * (v6 + (unsigned __int64)(unsigned int)(v10 - 1));
      v13 = v7 - (__int64)v6;
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
  a2[12] = v4;
  result = (unsigned int)(v4 - v8);
  a2[11] = result + v3;
  return result;
}

__int64 __fastcall sub_409890(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, double a7, int *a8, int a9, __int64 a10)
{
  const char *v10; // r14
  char *v11; // rbp
  size_t v12; // r13
  char **v13; // rbx
  __int64 v14; // r12
  const char *v15; // r15
  const char *v16; // rdi
  __int64 v17; // r15
  char **v18; // rbp
  char *v19; // rdx
  __int64 result; // rax
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  char *v24; // rdx
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  const char *v29; // r12
  __int64 v30; // rbp
  char *v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rbp
  char *v34; // rax
  __int64 v35; // r9
  FILE *v36; // rdi
  char **v37; // rbx
  _BYTE *v38; // rbp
  __int64 v39; // r12
  const char *v40; // r12
  __int64 v41; // rbp
  char *v42; // rax
  char **v43; // [rsp+0h] [rbp-88h]
  int v44; // [rsp+Ch] [rbp-7Ch]
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  _DWORD *v48; // [rsp+20h] [rbp-68h]
  char *s; // [rsp+30h] [rbp-58h]
  int v50; // [rsp+38h] [rbp-50h]
  char v51; // [rsp+3Fh] [rbp-49h]
  int v52; // [rsp+40h] [rbp-48h]
  int v53; // [rsp+44h] [rbp-44h]
  int v54; // [rsp+48h] [rbp-40h]

  v52 = a1;
  v10 = (const char *)*((_QWORD *)a8 + 4);
  s = a3;
  v43 = a4;
  v48 = a5;
  v11 = (char *)*((_QWORD *)a8 + 4);
  v44 = a6;
  v51 = *v10;
  if ( *v10 != 61 && *v10 )
  {
    do
      ++v11;
    while ( *v11 && *v11 != 61 );
    v12 = v11 - v10;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = a4;
  v14 = 0LL;
  s1 = *a4;
  v15 = *a4;
  if ( !*a4 )
  {
LABEL_24:
    if ( !v44 || *(_BYTE *)(a2[*a8] + 1) == 45 || (v19 = strchr(s, v51), result = 0xFFFFFFFFLL, !v19) )
    {
      if ( a9 )
      {
        v25 = *a2;
        v26 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v26, v25, a10, v10, a7);
      }
      *((_QWORD *)a8 + 4) = 0LL;
      ++*a8;
      a8[2] = 0;
      result = 63LL;
    }
    return result;
  }
  while ( 1 )
  {
    if ( !strncmp(v15, v10, v12) && strlen(v15) == v12 )
      goto LABEL_31;
    v13 += 4;
    v15 = *v13;
    if ( !*v13 )
      break;
    v14 = (int)v14 + 1;
  }
  v13 = 0LL;
  v53 = -1;
  v16 = s1;
  v17 = 0LL;
  v50 = 0;
  v54 = 0;
  ptr = 0LL;
  s1a = v11;
  v18 = v43;
  do
  {
    if ( strncmp(v16, v10, v12) )
      goto LABEL_20;
    if ( v13 )
    {
      if ( (v44
         || *((_DWORD *)v13 + 2) != *((_DWORD *)v18 + 2)
         || v13[2] != v18[2]
         || *((_DWORD *)v13 + 6) != *((_DWORD *)v18 + 6))
        && !v50 )
      {
        if ( a9 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((int)v14 + 1, 1uLL);
          if ( ptr )
          {
            v54 = 1;
            ptr[v53] = 1;
LABEL_19:
            ptr[v17] = 1;
            goto LABEL_20;
          }
          v50 = 1;
        }
        else
        {
          v50 = 1;
          if ( ptr )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v53 = v17;
      v13 = v18;
    }
LABEL_20:
    v18 += 4;
    v16 = *v18;
    ++v17;
  }
  while ( *v18 );
  v11 = s1a;
  if ( ptr || v50 )
  {
    if ( a9 )
    {
      if ( v50 )
      {
        v27 = *a2;
        v28 = dcgettext(0LL, "%s: option '%s%s' is ambiguous\n", 5);
        __fprintf_chk(stderr, 1LL, v28, v27, a10, v10, a7);
        v10 = (const char *)*((_QWORD *)a8 + 4);
      }
      else
      {
        flockfile(stderr);
        v32 = *((_QWORD *)a8 + 4);
        v33 = *a2;
        v34 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v34, v33, a10, v32, a7);
        v36 = stderr;
        v37 = v43;
        v38 = ptr;
        v39 = (__int64)&ptr[v14 + 1];
        do
        {
          if ( *v38 )
          {
            __fprintf_chk(v36, 1LL, " '%s%s'", a10, *v37, v35, a7);
            v36 = stderr;
          }
          ++v38;
          v37 += 4;
        }
        while ( (_BYTE *)v39 != v38 );
        fputc(10, v36);
        funlockfile(stderr);
        v10 = (const char *)*((_QWORD *)a8 + 4);
      }
    }
    if ( v54 )
      free(ptr);
    *((_QWORD *)a8 + 4) = &v10[strlen(v10)];
    ++*a8;
    a8[2] = 0;
    result = 63LL;
  }
  else
  {
    if ( !v13 )
      goto LABEL_24;
    LODWORD(v14) = v53;
LABEL_31:
    v21 = *a8;
    *((_QWORD *)a8 + 4) = 0LL;
    v22 = v21 + 1;
    *a8 = v21 + 1;
    v23 = *((_DWORD *)v13 + 2);
    if ( *v11 )
    {
      if ( v23 )
      {
        *((_QWORD *)a8 + 2) = v11 + 1;
        goto LABEL_33;
      }
      if ( a9 )
      {
        v29 = *v13;
        v30 = *a2;
        v31 = dcgettext(0LL, "%s: option '%s%s' doesn't allow an argument\n", 5);
        __fprintf_chk(stderr, 1LL, v31, v30, a10, v29, a7);
      }
      a8[2] = *((_DWORD *)v13 + 6);
      result = 63LL;
    }
    else
    {
      if ( v23 != 1 )
        goto LABEL_33;
      if ( v22 >= v52 )
      {
        if ( a9 )
        {
          v40 = *v13;
          v41 = *a2;
          v42 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v42, v41, a10, v40, a7);
        }
        a8[2] = *((_DWORD *)v13 + 6);
        result = 5 * (unsigned int)(*s != 58) + 58;
      }
      else
      {
        *a8 = v21 + 2;
        *((_QWORD *)a8 + 2) = a2[v22];
LABEL_33:
        if ( v48 )
          *v48 = v14;
        v24 = v13[2];
        result = *((unsigned int *)v13 + 6);
        if ( v24 )
        {
          *(_DWORD *)v24 = result;
          result = 0LL;
        }
      }
    }
  }
  return result;
}

__int64 __fastcall sub_409EB0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, double a7, int *a8, int a9)
{
  int v9; // er13
  int v10; // eax
  int v11; // ebp
  __int64 *v12; // r12
  char *v13; // r15
  _BYTE *v14; // rdx
  char v15; // al
  char v16; // al
  int v17; // eax
  _BYTE *v18; // r14
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // er14
  char *v23; // rax
  __int64 v24; // r8
  char v25; // cl
  int v27; // edx
  __int64 v28; // rax
  _BYTE *v29; // rcx
  int v30; // esi
  char v31; // cl
  char *v32; // rax
  __int64 v33; // rax
  char *v35; // rax
  char v36; // dl
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rbp
  char *v41; // rax
  __int64 v42; // r9
  __int64 v43; // rbp
  char *v44; // rax
  __int64 v45; // r9
  __int64 v46; // rbp
  char *v47; // rax
  __int64 v48; // r9
  char **v49; // [rsp+8h] [rbp-60h]
  _DWORD *v50; // [rsp+10h] [rbp-58h]
  char v51; // [rsp+1Ch] [rbp-4Ch]
  int v52; // [rsp+1Ch] [rbp-4Ch]
  int v53; // [rsp+1Ch] [rbp-4Ch]
  int v54; // [rsp+1Ch] [rbp-4Ch]
  _BYTE *v55; // [rsp+20h] [rbp-48h]
  __int64 v56; // [rsp+28h] [rbp-40h]

  v49 = a4;
  v50 = a5;
  v9 = a8[1];
  if ( a1 <= 0 )
    return (unsigned int)-1;
  v10 = *a8;
  v11 = a1;
  v12 = (__int64 *)a2;
  v13 = a3;
  *((_QWORD *)a8 + 2) = 0LL;
  if ( !v10 )
  {
    *a8 = 1;
    v10 = 1;
LABEL_4:
    a8[12] = v10;
    a8[11] = v10;
    *((_QWORD *)a8 + 4) = 0LL;
    if ( *a3 == 45 )
    {
      a8[10] = 2;
      v13 = a3 + 1;
      v14 = 0LL;
    }
    else if ( *a3 == 43 )
    {
      a8[10] = 0;
      v13 = a3 + 1;
      v14 = 0LL;
    }
    else
    {
      v14 = 0LL;
      if ( !a9 )
      {
        v54 = a6;
        v35 = getenv("POSIXLY_CORRECT");
        a6 = v54;
        if ( !v35 )
        {
          a8[10] = 1;
          v14 = (_BYTE *)*((_QWORD *)a8 + 4);
          goto LABEL_24;
        }
        v14 = (_BYTE *)*((_QWORD *)a8 + 4);
      }
      a8[10] = 0;
    }
LABEL_24:
    a8[6] = 1;
    v15 = *v13;
    goto LABEL_25;
  }
  if ( !a8[6] )
    goto LABEL_4;
  v15 = *a3;
  v14 = (_BYTE *)*((_QWORD *)a8 + 4);
  if ( !((v15 - 43) & 0xFD) )
  {
    v16 = *++v13;
    if ( v16 == 58 )
      v9 = 0;
    if ( !v14 )
      goto LABEL_12;
    goto LABEL_28;
  }
LABEL_25:
  if ( v15 == 58 )
    v9 = 0;
  if ( !v14 )
    goto LABEL_12;
LABEL_28:
  if ( !*v14 )
  {
LABEL_12:
    v17 = *a8;
    if ( a8[12] > *a8 )
      a8[12] = v17;
    if ( v17 < a8[11] )
      a8[11] = v17;
    if ( a8[10] == 1 )
    {
      v27 = a8[12];
      if ( a8[11] == v27 )
      {
        if ( v17 != v27 )
        {
          a8[11] = v17;
          v27 = v17;
        }
      }
      else if ( v17 != v27 )
      {
        v52 = a6;
        sub_4097B0(a2, a8);
        v27 = *a8;
        a6 = v52;
      }
      if ( a1 <= v27 )
      {
LABEL_79:
        v17 = v27;
      }
      else
      {
        v28 = v27;
        while ( 1 )
        {
          v29 = (_BYTE *)v12[v28];
          v30 = v28;
          v27 = v28;
          if ( *v29 == 45 )
          {
            if ( v29[1] )
              break;
          }
          v27 = ++v28;
          *a8 = v30 + 1;
          if ( a1 <= (int)v28 )
            goto LABEL_79;
        }
        v17 = *a8;
      }
      a8[12] = v27;
    }
    if ( a1 == v17 )
    {
      v11 = a8[12];
      v19 = a8[11];
LABEL_41:
      if ( v19 != v11 )
        *a8 = v19;
      return (unsigned int)-1;
    }
    v18 = (_BYTE *)v12[v17];
    if ( !strcmp((const char *)v12[v17], "--") )
    {
      v19 = a8[11];
      v20 = a8[12];
      v21 = v17 + 1;
      *a8 = v21;
      if ( v19 == v20 )
      {
        a8[11] = v21;
        v19 = v21;
      }
      else if ( v21 != v20 )
      {
        sub_4097B0((__int64)v12, a8);
        v19 = a8[11];
      }
      a8[12] = a1;
      *a8 = a1;
      goto LABEL_41;
    }
    if ( *v18 == 45 )
    {
      v31 = v18[1];
      if ( v31 )
      {
        if ( v49 )
        {
          if ( v31 == 45 )
          {
            *((_QWORD *)a8 + 4) = v18 + 2;
            return (unsigned int)sub_409890(a1, v12, v13, v49, v50, a6, a7, a8, v9, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v18[2] || (v53 = a6, v32 = strchr(v13, v31), a6 = v53, !v32) )
            {
              *((_QWORD *)a8 + 4) = v18 + 1;
              v22 = sub_409890(a1, v12, v13, v49, v50, a6, a7, a8, v9, 4263314LL);
              if ( v22 != -1 )
                return v22;
              v18 = (_BYTE *)v12[*a8];
            }
          }
        }
        v14 = v18 + 1;
        goto LABEL_29;
      }
    }
    if ( a8[10] )
    {
      *((_QWORD *)a8 + 2) = v18;
      v22 = 1;
      *a8 = v17 + 1;
      return v22;
    }
    return (unsigned int)-1;
  }
LABEL_29:
  v55 = v14;
  *((_QWORD *)a8 + 4) = v14 + 1;
  v22 = (char)*v14;
  v56 = (__int64)(v14 + 1);
  v51 = *v14;
  v23 = strchr(v13, v22);
  v24 = v56;
  if ( !v55[1] )
    ++*a8;
  if ( (unsigned __int8)(v51 - 58) > 1u && v23 )
  {
    v25 = v23[1];
    if ( *v23 == 87 && v49 && v25 == 59 )
    {
      if ( v55[1] )
      {
LABEL_68:
        *((_QWORD *)a8 + 4) = v24;
        *((_QWORD *)a8 + 2) = 0LL;
        return (unsigned int)sub_409890(a1, v12, v13, v49, v50, 0, a7, a8, v9, (__int64)"-W ");
      }
      v33 = *a8;
      if ( (_DWORD)v33 != a1 )
      {
        v24 = v12[v33];
        goto LABEL_68;
      }
      if ( v9 )
      {
        v46 = *v12;
        v47 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v47, v46, v22, v48, a7);
      }
      a8[2] = v22;
      v22 = 5 * (*v13 != 58) + 58;
    }
    else if ( v25 == 58 )
    {
      v36 = v55[1];
      if ( v23[2] == 58 )
      {
        if ( v36 )
        {
          *((_QWORD *)a8 + 2) = v56;
          ++*a8;
        }
        else
        {
          *((_QWORD *)a8 + 2) = 0LL;
        }
      }
      else
      {
        v37 = *a8;
        if ( v36 )
        {
          *((_QWORD *)a8 + 2) = v56;
          *a8 = v37 + 1;
        }
        else if ( a1 == (_DWORD)v37 )
        {
          if ( v9 )
          {
            v43 = *v12;
            v44 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v44, v43, v22, v45, a7);
          }
          a8[2] = v22;
          v22 = 5 * (*v13 != 58) + 58;
        }
        else
        {
          v38 = v37 + 1;
          v39 = v12[v37];
          *a8 = v38;
          *((_QWORD *)a8 + 2) = v39;
        }
      }
      *((_QWORD *)a8 + 4) = 0LL;
    }
  }
  else
  {
    if ( v9 )
    {
      v40 = *v12;
      v41 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
      __fprintf_chk(stderr, 1LL, v41, v40, v22, v42, a7);
    }
    a8[2] = v22;
    v22 = 63;
  }
  return v22;
}

__int64 __fastcall sub_40A480(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, double a7, int a8)
{
  __int64 result; // rax

  dword_6147E0 = dword_61433C;
  dword_6147E4 = dword_614338;
  result = sub_409EB0(a1, a2, a3, a4, a5, a6, a7, &dword_6147E0, a8);
  dword_61433C = dword_6147E0;
  qword_614820 = qword_6147F0;
  dword_614334 = dword_6147E8;
  return result;
}

__int64 __fastcall sub_40A4E0(int a1, __int64 a2, char *a3, double a4)
{
  return sub_40A480(a1, a2, a3, 0LL, 0LL, 0, a4, 1);
}

__int64 __fastcall sub_40A500(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, double a6)
{
  return sub_40A480(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40A520(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6, double a7)
{
  return sub_409EB0(a1, a2, a3, a4, a5, 0, a7, a6, 0);
}

__int64 __fastcall sub_40A540(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, double a6)
{
  return sub_40A480(a1, a2, a3, a4, a5, 1, a6, 0);
}

__int64 __fastcall sub_40A560(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6, double a7)
{
  return sub_409EB0(a1, a2, a3, a4, a5, 1, a7, a6, 0);
}

size_t __fastcall sub_40A580(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx
  wchar_t *v5; // r12
  char *v6; // rbp
  char v8; // [rsp+Ch] [rbp-1Ch]

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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40A9F0(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

__int64 __fastcall sub_40A600(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *v3; // rax
  unsigned int v4; // edx
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v3 = (void *)sub_40AFC0(0LL, &v6, a2, a3);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = v6;
  if ( v6 > 0x7FFFFFFF )
  {
    free(v3);
    *__errno_location() = 75;
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *a1 = v3;
    result = v4;
  }
  return result;
}

void __fastcall __noreturn sub_40A660(double a1)
{
  sub_405460(1, a1);
}

__int64 __fastcall sub_40A670(const char *a1, const char **a2, char *a3, size_t a4)
{
  size_t v4; // r13
  char *v5; // rbp
  size_t v6; // rax
  const char *v7; // r14
  size_t v8; // r12
  __int64 v9; // rbx
  bool v10; // zf
  char v11; // al
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-58h]
  char v15; // [rsp+17h] [rbp-41h]
  char *v16; // [rsp+18h] [rbp-40h]

  v4 = a4;
  v5 = a3;
  v16 = a3;
  v6 = strlen(a1);
  v7 = *a2;
  v14 = -1LL;
  if ( !*a2 )
    return v14;
  v8 = v6;
  v15 = 0;
  v9 = 0LL;
  do
  {
    while ( strncmp(v7, a1, v8) )
    {
LABEL_7:
      ++v9;
      v5 += v4;
      v7 = a2[v9];
      if ( !v7 )
        goto LABEL_12;
    }
    if ( strlen(v7) == v8 )
      return v9;
    if ( v14 != -1 )
    {
      if ( v16 )
      {
        v10 = memcmp(&v16[v4 * v14], v5, v4) == 0;
        v11 = v15;
        if ( !v10 )
          v11 = 1;
        v15 = v11;
      }
      else
      {
        v15 = 1;
      }
      goto LABEL_7;
    }
    v14 = v9++;
    v5 += v4;
    v7 = a2[v9];
  }
  while ( v7 );
LABEL_12:
  v12 = -2LL;
  if ( !v15 )
    v12 = v14;
  return v12;
}

void __fastcall sub_40A790(char *a1, char *a2, __int64 a3)
{
  char *v3; // rbx
  _BYTE *v4; // rbp
  _BYTE *v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_408610(1, a1);
  v5 = sub_408300(0, 8, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_40A810(char **a1, char *a2, size_t a3, double a4)
{
  const void *v4; // r14
  size_t v5; // r13
  char *v6; // rbp
  _IO_FILE *v7; // rbx
  char *v8; // rax
  FILE *v9; // rsi
  __int64 v10; // rbx
  char *i; // r12
  _BYTE *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rax

  v4 = 0LL;
  v5 = a3;
  v6 = a2;
  v7 = stderr;
  v8 = dcgettext(0LL, "Valid arguments are:", 5);
  v9 = v7;
  v10 = 0LL;
  fputs_unlocked(v8, v9);
  for ( i = *a1; i; i = a1[v10] )
  {
    while ( !v10 || memcmp(v4, v6, v5) )
    {
      ++v10;
      v4 = v6;
      v6 += v5;
      v12 = sub_408630(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v12, v13, v14, a4);
      i = a1[v10];
      if ( !i )
        goto LABEL_7;
    }
    ++v10;
    v6 += v5;
    v15 = sub_408630(i);
    __fprintf_chk(stderr, 1LL, 4250442LL, v15, v16, v17, a4);
  }
LABEL_7:
  v18 = stderr->_IO_write_ptr;
  if ( v18 >= stderr->_IO_write_end )
  {
    LODWORD(v18) = __overflow(stderr, 10);
  }
  else
  {
    stderr->_IO_write_ptr = v18 + 1;
    *v18 = 10;
  }
  return (int)v18;
}

__int64 __fastcall sub_40A930(char *a1, char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void), double a7)
{
  size_t v7; // r15
  void (*v8)(void); // r13
  char *v9; // rbp
  char **v10; // rbx
  __int64 result; // rax

  v7 = a5;
  v8 = a6;
  v9 = a4;
  v10 = (char **)a3;
  result = sub_40A670(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_40A790(a1, a2, result);
    sub_40A810(v10, v9, v7, a7);
    v8();
    result = -1LL;
  }
  return result;
}

__int64 __fastcall sub_40A9A0(void *s1, __int64 *a2, char *a3, size_t a4)
{
  __int64 v4; // r14
  size_t v5; // r12
  __int64 *v6; // rbx
  char *v7; // rbp

  v4 = *a2;
  if ( *a2 )
  {
    v5 = a4;
    v6 = a2 + 1;
    v7 = a3;
    do
    {
      if ( !memcmp(s1, v7, v5) )
        break;
      v4 = *v6;
      v7 += v5;
      ++v6;
    }
    while ( v4 );
  }
  return v4;
}

bool __fastcall sub_40A9F0(int a1)
{
  char *v1; // rdx
  bool result; // al

  v1 = setlocale(a1, 0LL);
  result = 1;
  if ( v1 )
  {
    result = 0;
    if ( strcmp(v1, "C") )
      result = strcmp(v1, "POSIX") != 0;
  }
  return result;
}

const char *sub_40AA50()
{
  char *v0; // rax
  char *v1; // r15
  const char *v2; // rbx
  char v3; // bp
  size_t v4; // rax
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
  int v17; // er12
  FILE *v18; // r13
  const char *v19; // rax
  FILE *v20; // rbx
  const char *v21; // r13
  char *v22; // rax
  int v23; // edi
  char *v24; // kr00_8
  char *v25; // rdx
  int v26; // esi
  unsigned int v27; // eax
  __int64 v28; // rdx
  signed __int64 v29; // rax
  char *v30; // rax
  signed __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rsi
  unsigned int v34; // ecx
  __int64 v35; // rdi
  char *v36; // rsi
  unsigned int v37; // edx
  char *v38; // rcx
  FILE *v39; // rdi
  int v40; // eax
  bool v41; // dl
  char *v42; // rax
  __int64 v43; // rax
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
  __int64 v61; // [rsp+8h] [rbp-D0h]
  __int64 v62; // [rsp+18h] [rbp-C0h]
  char v63[64]; // [rsp+20h] [rbp-B8h]
  char v64[120]; // [rsp+60h] [rbp-78h]

  v0 = nl_langinfo(14);
  v1 = qword_614818;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_614818 )
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
          qword_614818 = v1;
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
            v22 = v20->_IO_read_ptr;
            if ( v22 < v20->_IO_read_end )
            {
LABEL_31:
              v20->_IO_read_ptr = v22 + 1;
              v23 = (unsigned __int8)*v22;
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
              v25 = v64;
              do
              {
                v26 = *(_DWORD *)v25;
                v25 += 4;
                v27 = ~v26 & (v26 - 16843009) & 0x80808080;
              }
              while ( !v27 );
              if ( !(~v26 & (v26 - 16843009) & 0x8080) )
                v27 >>= 16;
              if ( !(~v26 & (v26 - 16843009) & 0x8080) )
                v25 += 2;
              v28 = &v25[-__CFADD__((_BYTE)v27, (_BYTE)v27) - 3] - v64;
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
                v1 = "%s: invalid option -- '%c'\n" + 27;
                v2 = v58;
                free(v59);
                sub_409550(v60);
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
              else if ( v34 & 4 )
              {
                *(_DWORD *)v36 = *(_DWORD *)v63;
                *(_DWORD *)&v36[v34 - 4] = *(_DWORD *)&v63[v34 - 4];
              }
              else if ( v34 )
              {
                *v36 = v63[0];
                if ( v34 & 2 )
                  *(_WORD *)&v36[v34 - 2] = *(_WORD *)&v63[v34 - 2];
              }
              v37 = v32 + 1;
              v38 = &v30[v35 - 1];
              if ( v37 >= 8 )
              {
                *(_QWORD *)v38 = *(_QWORD *)v64;
                *(_QWORD *)&v38[v37 - 8] = *(_QWORD *)&v64[v37 - 8];
                v51 = (unsigned __int64)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v52 = &v38[-v51];
                v53 = (char *)(v64 - v52);
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
              else if ( v37 & 4 )
              {
                *(_DWORD *)v38 = *(_DWORD *)v64;
                *(_DWORD *)&v38[v37 - 4] = *(_DWORD *)&v64[v37 - 4];
              }
              else if ( v37 )
              {
                *v38 = v64[0];
                if ( v37 & 2 )
                  *(_WORD *)&v38[v37 - 2] = *(_WORD *)&v64[v37 - 2];
              }
              v1 = v30;
              v22 = v20->_IO_read_ptr;
              if ( v22 < v20->_IO_read_end )
                goto LABEL_31;
            }
            v39 = v20;
            v2 = v21;
            sub_409550(v39);
            if ( !v61 )
              goto LABEL_25;
            v1[v61] = 0;
            goto LABEL_26;
          }
          close(v17);
        }
LABEL_25:
        v1 = "%s: invalid option -- '%c'\n" + 27;
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

char *__fastcall sub_40AFC0(void *a1, size_t *a2, char *a3, __int64 a4)
{
  char *v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  size_t v8; // rdi
  _BYTE *v9; // rax
  size_t v10; // r12
  char *v11; // r14
  char *v12; // r8
  char *v13; // rbx
  size_t v14; // r15
  _BYTE *v15; // rcx
  char *v16; // rcx
  unsigned __int64 v17; // rax
  size_t v18; // r13
  bool v19; // dl
  char *v20; // rax
  char *v21; // rax
  void *v22; // rsp
  char *v23; // rax
  char v24; // r15
  __int64 v25; // rax
  char *v26; // r8
  long double *v27; // rdx
  int v28; // eax
  char v29; // al
  int v30; // eax
  char *v31; // r15
  _BYTE *v32; // rdi
  _BYTE *v33; // rsi
  _BYTE *v34; // rdx
  _BYTE *v35; // rsi
  _BYTE *v36; // rdx
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rax
  char *v40; // rax
  __int64 v41; // rax
  char *v42; // r8
  int v43; // eax
  unsigned __int64 v44; // rax
  char *v45; // r11
  int *v46; // rax
  char *v47; // r11
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r10
  char *v50; // rdx
  char *v51; // rcx
  __int64 v52; // rsi
  _DWORD *v53; // r8
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  void *v56; // r15
  char *result; // rax
  unsigned __int64 v58; // rax
  char *v59; // rax
  char v61; // fps^1
  char *v65; // rdx
  char *v66; // rdi
  int v67; // er11
  __int64 v68; // rcx
  _DWORD *v69; // rcx
  char *v70; // rdi
  int *v71; // r9
  int v72; // eax
  int v73; // edx
  __int64 v74; // rax
  bool v75; // cf
  unsigned __int64 v76; // rax
  bool v77; // bl
  char *v78; // rax
  __int64 v79; // r9
  int v80; // ebx
  char *v81; // rdi
  unsigned __int64 v82; // rax
  void *v83; // rax
  char *v84; // rax
  char *v85; // rcx
  int v86; // er8
  __int16 v87; // ax
  unsigned __int64 v88; // r15
  char *v89; // rax
  char *v90; // rax
  char *v91; // rax
  char v92; // al
  unsigned __int64 v93; // r9
  size_t v94; // r8
  unsigned __int64 v95; // r10
  unsigned __int64 v96; // rdi
  __int64 v97; // rax
  unsigned __int64 v98; // r10
  unsigned __int64 v99; // rax
  char *v100; // rax
  __int64 v101; // rsi
  char v102; // al
  size_t v103; // r15
  size_t v104; // r14
  bool v105; // r13
  char *v106; // rax
  char *v107; // rax
  __int64 v108; // rax
  unsigned __int64 v109; // r10
  char *v110; // rax
  char *v111; // rax
  char *v112; // rax
  __int64 v113; // rsi
  __int64 v114; // rdx
  char v115; // al
  __int64 v116; // rdx
  unsigned __int64 v117; // rax
  char *v118; // rax
  __int64 v119; // rdx
  char v120; // al
  unsigned __int64 v121; // rax
  __int64 v122; // rsi
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rax
  char *v126; // rsi
  char *v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rsi
  unsigned __int64 v130; // rax
  char v131; // al
  __int64 v132; // rsi
  char v133; // al
  char *v134; // rax
  __int64 v135; // rdx
  char v136; // al
  __int64 v137; // rax
  char *v138; // rax
  char *v139; // rax
  void *v140; // rdx
  char v141; // al
  char *v142; // rax
  char *v143; // rax
  char v144; // al
  __int16 v145; // [rsp+24h] [rbp-6ECh]
  __int16 v146; // [rsp+24h] [rbp-6ECh]
  unsigned __int64 v147; // [rsp+28h] [rbp-6E8h]
  char *v148; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v150; // [rsp+40h] [rbp-6D0h]
  void *v151; // [rsp+48h] [rbp-6C8h]
  char *v152; // [rsp+50h] [rbp-6C0h]
  __int64 v153; // [rsp+58h] [rbp-6B8h]
  char *v154; // [rsp+60h] [rbp-6B0h]
  _BYTE *v155; // [rsp+68h] [rbp-6A8h]
  long double v156; // [rsp+70h] [rbp-6A0h]
  void *v157; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v159; // [rsp+94h] [rbp-67Ch]
  unsigned int v160; // [rsp+98h] [rbp-678h]
  char v161; // [rsp+A0h] [rbp-670h]
  void *v162; // [rsp+A8h] [rbp-668h]
  __int64 v163; // [rsp+B0h] [rbp-660h]
  __int64 v164; // [rsp+190h] [rbp-580h]
  void *v165; // [rsp+198h] [rbp-578h]
  __int64 v166; // [rsp+1A0h] [rbp-570h]
  __int64 v167; // [rsp+1A8h] [rbp-568h]
  __int64 v168; // [rsp+1B0h] [rbp-560h]
  char v169; // [rsp+420h] [rbp-2F0h]

  v4 = a3;
  v5 = a4;
  src = a1;
  v150 = a2;
  if ( (int)sub_40CD00(a3, &v164, &v161) < 0 )
    return 0LL;
  if ( (int)sub_40CAE0(v5, &v161) >= 0 )
  {
    v6 = v166 + 7;
    if ( (unsigned __int64)(v166 + 7) <= 6 )
      v6 = -1LL;
    v75 = __CFADD__(v167, v6);
    v7 = v167 + v6;
    if ( v75 )
      goto LABEL_112;
    v8 = v7 + 6;
    if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v8 <= 0xF9F )
    {
      ptr = 0LL;
      v22 = alloca(v7 + 14);
      v155 = (_BYTE *)(((unsigned __int64)&v147 + 7) & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      if ( v7 == -7LL )
        goto LABEL_112;
      v9 = malloc(v8);
      v155 = v9;
      if ( !v9 )
        goto LABEL_112;
      ptr = v9;
    }
    v10 = 0LL;
    if ( src )
      v10 = *v150;
    v11 = (char *)v165;
    v12 = v4;
    v13 = (char *)src;
    v153 = 0LL;
    v14 = 0LL;
    v15 = *(_BYTE **)v165;
    if ( *(char **)v165 == v12 )
      goto LABEL_111;
LABEL_14:
    v16 = (char *)(v15 - v12);
    v17 = (unsigned __int64)&v16[v14];
    v18 = (size_t)&v16[v14];
    if ( __CFADD__(v16, v14) )
    {
      if ( v10 != -1LL )
        goto LABEL_88;
      v18 = -1LL;
    }
    else if ( v10 < v17 )
    {
      if ( v10 )
      {
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v10 *= 2LL;
        if ( v10 >= v17 )
        {
LABEL_28:
          v19 = v13 == src;
          if ( !v13 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v17 <= 0xC )
      {
        v10 = 12LL;
        v19 = v13 == src;
        if ( !v13 )
        {
LABEL_19:
          v154 = v12;
          LOBYTE(v156) = v19;
          v157 = v16;
          v20 = (char *)malloc(v10);
          v16 = (char *)v157;
          v12 = v154;
          if ( !v20 )
            goto LABEL_88;
          if ( v14 && LOBYTE(v156) )
          {
            *(_QWORD *)&v156 = v154;
            v21 = (char *)memcpy(v20, v13, v14);
            v16 = (char *)v157;
            v12 = *(char **)&v156;
            v13 = v21;
          }
          else
          {
            v13 = v20;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v19 )
        {
          *(_QWORD *)&v156 = v12;
          v157 = v16;
          v23 = (char *)realloc(v13, v10);
          if ( !v23 )
            goto LABEL_126;
          v16 = (char *)v157;
          v12 = *(char **)&v156;
          v13 = v23;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v17 == -1LL )
        goto LABEL_88;
      v10 = (size_t)&v16[v14];
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v13[v14], v12, (size_t)v16);
    while ( v164 != v153 )
    {
      v24 = v11[72];
      v25 = *((_QWORD *)v11 + 10);
      if ( v24 == 37 )
      {
        if ( v25 != -1 )
          goto LABEL_198;
        v58 = v18 + 1;
        v14 = v18 + 1;
        if ( v18 == -1LL )
        {
          if ( v10 != -1LL )
            goto LABEL_88;
          v14 = -1LL;
        }
        else if ( v10 < v58 )
        {
          if ( v10 )
          {
            if ( (v10 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v10 *= 2LL;
            if ( v10 < v58 )
              goto LABEL_234;
          }
          else
          {
            if ( v58 <= 0xC )
            {
              v10 = 12LL;
              goto LABEL_105;
            }
LABEL_234:
            if ( v18 == -2LL )
              goto LABEL_88;
            v10 = v18 + 1;
          }
LABEL_105:
          if ( v13 && v13 != src )
          {
            v59 = (char *)realloc(v13, v10);
            if ( v59 )
            {
              v13 = v59;
              goto LABEL_109;
            }
LABEL_126:
            v56 = v13;
            *(_QWORD *)&v156 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v157) = v13 == src;
          v91 = (char *)malloc(v10);
          if ( !v91 )
            goto LABEL_88;
          if ( v18 && (_BYTE)v157 )
            v13 = (char *)memcpy(v91, v13, v18);
          else
            v13 = v91;
        }
LABEL_109:
        v13[v18] = 37;
        goto LABEL_110;
      }
      if ( v25 == -1 )
        goto LABEL_198;
      v26 = (char *)v162;
      v27 = (long double *)((char *)v162 + 32 * v25);
      v28 = *(_DWORD *)v27;
      LODWORD(v157) = *(_DWORD *)v27;
      if ( v24 != 110 )
      {
        v29 = v24 & 0xDF;
        if ( ((unsigned __int8)((v24 & 0xDF) - 69) <= 2u || v29 == 65) && (_DWORD)v157 == 12 )
        {
          _FST7 = v27[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v65 = (char *)*((_QWORD *)v11 + 3);
            v66 = (char *)*((_QWORD *)v11 + 4);
            v67 = *((_DWORD *)v11 + 4);
            if ( v65 == v66 )
            {
              v49 = 0LL;
            }
            else
            {
              v68 = *((_QWORD *)v11 + 5);
              if ( v68 == -1 )
              {
                v49 = 0LL;
                v157 = (void *)-1LL;
                while ( 1 )
                {
                  v122 = (__int64)(v65 + 1);
                  v123 = -1LL;
                  v124 = *v65 - 48;
                  if ( v49 <= 0x1999999999999999LL )
                    v123 = 10 * v49;
                  v75 = __CFADD__(v123, v124);
                  v49 = v123 + v124;
                  v65 = (char *)v122;
                  if ( v75 )
                  {
                    if ( v66 == (char *)v122 )
                    {
LABEL_81:
                      v49 = (unsigned __int64)v157;
                      goto LABEL_82;
                    }
                    while ( *(++v65 - 1) != 48 )
                    {
                      if ( v66 == v65 )
                        goto LABEL_81;
                    }
                    v49 = -1LL;
                  }
                  if ( v66 == v65 )
                    goto LABEL_82;
                }
              }
              v69 = (char *)v162 + 32 * v68;
              if ( *v69 != 5 )
                goto LABEL_198;
              v49 = (int)v69[4];
              if ( (v49 & 0x80000000) != 0LL )
              {
                v67 |= 2u;
                v49 = -(__int64)v49;
              }
            }
LABEL_82:
            v50 = (char *)*((_QWORD *)v11 + 6);
            v51 = (char *)*((_QWORD *)v11 + 7);
            if ( v50 != v51 )
            {
              v52 = *((_QWORD *)v11 + 8);
              if ( v52 == -1 )
              {
                v125 = (__int64)(v50 + 1);
                v54 = 0LL;
                if ( v51 != (char *)v125 )
                {
                  v126 = (char *)v125;
                  while ( 1 )
                  {
                    v127 = v126 + 1;
                    v128 = *v126 - 48;
                    v129 = -1LL;
                    if ( v54 <= 0x1999999999999999LL )
                      v129 = 10 * v54;
                    v75 = __CFADD__(v129, v128);
                    v130 = v129 + v128;
                    v126 = v127;
                    v54 = v130;
                    if ( v75 )
                    {
                      if ( v51 == v127 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v126 = v127 + 1;
                        if ( *v127 == 48 )
                          break;
                        if ( v51 == v126 )
                          goto LABEL_88;
                        ++v127;
                      }
                      v54 = -1LL;
                    }
                    if ( v51 == v126 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_370;
              }
              v53 = (char *)v162 + 32 * v52;
              if ( *v53 != 5 )
                goto LABEL_198;
              v54 = (int)v53[4];
              if ( (v54 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v54 )
                {
                  v55 = v54 + 12;
                  if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_188:
                  v82 = v55;
                  if ( v49 >= v55 )
                    v82 = v49;
                  v75 = __CFADD__(v82, 1LL);
                  v83 = (void *)(v82 + 1);
                  v157 = v83;
                  if ( v75 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v83 <= 0x2BC )
                  {
                    v85 = &v169;
                  }
                  else
                  {
                    v151 = (void *)v49;
                    v152 = (char *)v54;
                    LODWORD(v154) = v67;
                    v156 = _FST7;
                    if ( v83 == (void *)-1LL )
                      goto LABEL_88;
                    v84 = (char *)malloc((size_t)v83);
                    v67 = (int)v154;
                    _FST7 = v156;
                    v85 = v84;
                    v54 = (unsigned __int64)v152;
                    v49 = (unsigned __int64)v151;
                    if ( !v84 )
                      goto LABEL_88;
                  }
                  v86 = (unsigned __int16)v160;
                  LOBYTE(v87) = v160;
                  HIBYTE(v87) = BYTE1(v160) | 3;
                  LOWORD(v160) = v87;
                  __asm { fxam }
                  if ( v61 & 2 )
                  {
                    *v85 = 45;
                    _FST7 = -_FST7;
                    v88 = (unsigned __int64)(v85 + 1);
                  }
                  else if ( v67 & 4 )
                  {
                    v88 = (unsigned __int64)(v85 + 1);
                    *v85 = 43;
                  }
                  else
                  {
                    v88 = (unsigned __int64)v85;
                    if ( v67 & 8 )
                    {
                      v88 = (unsigned __int64)(v85 + 1);
                      *v85 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_198;
                    v93 = v88 + 3;
                    if ( (unsigned __int8)(v11[72] - 65) > 0x19u )
                    {
                      *(_BYTE *)(v88 + 2) = 102;
                      *(_WORD *)v88 = 28265;
                    }
                    else
                    {
                      *(_BYTE *)(v88 + 2) = 70;
                      *(_WORD *)v88 = 20041;
                    }
                    v88 = 0LL;
                    goto LABEL_258;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_198;
                  v92 = v11[72] & 0xDF;
                  switch ( v92 )
                  {
                    case 70:
                      *(_BYTE *)v88 = 48;
                      if ( v67 & 0x10 || v54 )
                      {
                        LOWORD(v147) = v86;
                        v148 = (char *)v49;
                        v151 = v85;
                        v152 = (char *)v54;
                        LODWORD(v154) = v67;
                        *(_QWORD *)&v156 = v88 + 2;
                        v118 = nl_langinfo(0x10000);
                        v119 = (__int64)v152;
                        v93 = *(_QWORD *)&v156;
                        v120 = *v118;
                        LOBYTE(v67) = (_BYTE)v154;
                        v85 = (char *)v151;
                        v49 = (unsigned __int64)v148;
                        LOWORD(v86) = v147;
                        if ( !v120 )
                          v120 = 46;
                        *(_BYTE *)(v88 + 1) = v120;
                        if ( v119 )
                        {
                          v121 = v93;
                          do
                            *(_BYTE *)(++v121 - 1) = 48;
                          while ( v121 != v88 + v119 + 2 );
                          v93 += v119;
                        }
                        goto LABEL_258;
                      }
                      goto LABEL_257;
                    case 69:
                      *(_BYTE *)v88 = 48;
                      if ( v67 & 0x10 || (v101 = v88 + 1, v54) )
                      {
                        LOWORD(v147) = v86;
                        v148 = (char *)v49;
                        v151 = v85;
                        v152 = (char *)v54;
                        LODWORD(v154) = v67;
                        *(_QWORD *)&v156 = v88 + 2;
                        v134 = nl_langinfo(0x10000);
                        v135 = (__int64)v152;
                        v101 = *(_QWORD *)&v156;
                        v136 = *v134;
                        LOBYTE(v67) = (_BYTE)v154;
                        v85 = (char *)v151;
                        v49 = (unsigned __int64)v148;
                        LOWORD(v86) = v147;
                        if ( !v136 )
                          v136 = 46;
                        *(_BYTE *)(v88 + 1) = v136;
                        if ( v135 )
                        {
                          v137 = v101;
                          do
                            *(_BYTE *)(++v137 - 1) = 48;
                          while ( v137 != v88 + v135 + 2 );
                          v101 += v135;
                        }
                      }
                      v102 = v11[72];
                      v93 = v101 + 4;
                      *(_BYTE *)(v101 + 3) = 48;
                      *(_BYTE *)v101 = v102;
                      *(_WORD *)(v101 + 1) = 12331;
                      goto LABEL_258;
                    case 71:
                      *(_BYTE *)v88 = 48;
                      if ( v67 & 0x10 )
                      {
                        if ( v54 )
                        {
                          v145 = v86;
                          v147 = v49;
                          v148 = (char *)(v88 + 2);
                          v151 = v85;
                          LODWORD(v152) = v67;
                          v154 = (char *)v54;
                          *(_QWORD *)&v156 = v54 - 1;
                          v112 = nl_langinfo(0x10000);
                          v113 = *(_QWORD *)&v156;
                          v114 = (__int64)v154;
                          v115 = *v112;
                          LOBYTE(v67) = (_BYTE)v152;
                          v85 = (char *)v151;
                          v93 = (unsigned __int64)v148;
                          v49 = v147;
                          LOWORD(v86) = v145;
                          if ( !v115 )
                            v115 = 46;
                          *(_BYTE *)(v88 + 1) = v115;
                          if ( v113 )
                          {
                            v116 = v88 + v114 + 1;
                            v117 = v93;
                            do
                              *(_BYTE *)(++v117 - 1) = 48;
                            while ( v117 != v116 );
                            v93 += v113;
                          }
                        }
                        else
                        {
                          LODWORD(v148) = v86;
                          v151 = (void *)v49;
                          v152 = (char *)(v88 + 2);
                          v154 = v85;
                          LODWORD(v156) = v67;
                          v143 = nl_langinfo(0x10000);
                          LOBYTE(v67) = LOBYTE(v156);
                          v85 = v154;
                          v144 = *v143;
                          v93 = (unsigned __int64)v152;
                          v49 = (unsigned __int64)v151;
                          LOWORD(v86) = (_WORD)v148;
                          if ( !v144 )
                            v144 = 46;
                          *(_BYTE *)(v88 + 1) = v144;
                        }
                        goto LABEL_258;
                      }
LABEL_257:
                      v93 = v88 + 1;
                      goto LABEL_258;
                  }
                  if ( v92 != 65 )
                    goto LABEL_198;
                  *(_BYTE *)v88 = 48;
                  *(_QWORD *)&v156 = v88 + 2;
                  v131 = v11[72];
                  *(_BYTE *)(v88 + 2) = 48;
                  *(_BYTE *)(v88 + 1) = v131 + 23;
                  if ( v67 & 0x10 || (v132 = v88 + 3, v54) )
                  {
                    v146 = v86;
                    v147 = v49;
                    v148 = v85;
                    v151 = (void *)v54;
                    LODWORD(v152) = v67;
                    v154 = (char *)(v88 + 4);
                    v139 = nl_langinfo(0x10000);
                    v140 = v151;
                    v132 = (__int64)v154;
                    v141 = *v139;
                    LOBYTE(v67) = (_BYTE)v152;
                    v85 = v148;
                    v49 = v147;
                    LOWORD(v86) = v146;
                    if ( !v141 )
                      v141 = 46;
                    *(_BYTE *)(v88 + 3) = v141;
                    if ( v140 )
                    {
                      v142 = (char *)v132;
                      do
                        *(++v142 - 1) = 48;
                      while ( v142 != (char *)v140 + v88 + 4 );
                      v132 += (__int64)v140;
                    }
                  }
                  v133 = v11[72];
                  v93 = v132 + 3;
                  *(_WORD *)(v132 + 1) = 12331;
                  v88 = *(_QWORD *)&v156;
                  *(_BYTE *)v132 = v133 + 15;
LABEL_258:
                  LOWORD(v160) = v86;
                  v94 = v93 - (_QWORD)v85;
                  if ( v49 > v93 - (unsigned __int64)v85 )
                  {
                    v95 = v49 - v94;
                    v96 = v93 + v95;
                    v94 = v93 + v95 - (_QWORD)v85;
                    if ( v67 & 2 )
                    {
                      if ( v95 )
                      {
                        do
                          *(_BYTE *)(++v93 - 1) = 32;
                        while ( v96 != v93 );
                      }
                    }
                    else if ( v67 & 0x20 && v88 )
                    {
                      if ( v88 >= v93 )
                      {
                        v88 = v93;
                      }
                      else
                      {
                        v97 = -1LL;
                        do
                        {
                          *(_BYTE *)(v96 + v97) = *(_BYTE *)(v93 + v97);
                          --v97;
                        }
                        while ( v97 != v88 - 1 - v93 );
                      }
                      if ( v95 )
                      {
                        v98 = v88 + v95;
                        do
                          *(_BYTE *)(++v88 - 1) = 48;
                        while ( v88 != v98 );
                      }
                    }
                    else
                    {
                      v108 = -1LL;
                      if ( (unsigned __int64)v85 < v93 )
                      {
                        do
                        {
                          *(_BYTE *)(v96 + v108) = *(_BYTE *)(v93 + v108);
                          --v108;
                        }
                        while ( &v85[-v93 - 1] != (char *)v108 );
                        v93 = (unsigned __int64)v85;
                      }
                      if ( v95 )
                      {
                        v109 = v93 + v95;
                        do
                          *(_BYTE *)(++v93 - 1) = 32;
                        while ( v93 != v109 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v157 <= v94 )
                    goto LABEL_198;
                  v99 = v94 + v18;
                  v14 = v94 + v18;
                  if ( v10 - v18 <= v94 )
                  {
                    if ( __CFADD__(v94, v18) )
                    {
                      if ( v10 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v10 < v99 )
                    {
                      if ( v10 )
                      {
                        if ( (v10 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v10 *= 2LL;
                        if ( v10 < v99 )
                          goto LABEL_368;
                      }
                      else
                      {
                        if ( v99 <= 0xC )
                        {
                          v10 = 12LL;
                          goto LABEL_275;
                        }
LABEL_368:
                        if ( v99 == -1LL )
                          goto LABEL_88;
                        v10 = v94 + v18;
                      }
LABEL_275:
                      if ( v13 && v13 != src )
                      {
                        *(_QWORD *)&v156 = v94;
                        v157 = v85;
                        v100 = (char *)realloc(v13, v10);
                        if ( !v100 )
                          goto LABEL_88;
                        v85 = (char *)v157;
                        v94 = *(_QWORD *)&v156;
                        v13 = v100;
                      }
                      else
                      {
                        LOBYTE(v154) = v13 == src;
                        *(_QWORD *)&v156 = v94;
                        v157 = v85;
                        v110 = (char *)malloc(v10);
                        v85 = (char *)v157;
                        v94 = *(_QWORD *)&v156;
                        if ( !v110 )
                          goto LABEL_88;
                        if ( v18 && (_BYTE)v154 )
                        {
                          v111 = (char *)memcpy(v110, v13, v18);
                          v85 = (char *)v157;
                          v94 = *(_QWORD *)&v156;
                          v13 = v111;
                        }
                        else
                        {
                          v13 = v110;
                        }
                      }
                    }
                  }
                  v157 = v85;
                  memcpy(&v13[v18], v85, v94);
                  if ( v157 != &v169 )
                    free(v157);
                  goto LABEL_110;
                }
LABEL_370:
                v55 = 12LL;
                goto LABEL_188;
              }
            }
            v55 = 12LL;
            if ( v29 != 65 )
              v55 = 18LL;
            v54 = 0LL;
            if ( v29 != 65 )
              v54 = 6LL;
            goto LABEL_188;
          }
        }
        v30 = *((_DWORD *)v11 + 4);
        v31 = v155 + 1;
        *v155 = 37;
        if ( v30 & 1 )
        {
          v32 = v155;
          v155[1] = 39;
          v31 = v32 + 2;
        }
        if ( v30 & 2 )
          *v31++ = 45;
        if ( v30 & 4 )
          *v31++ = 43;
        if ( v30 & 8 )
          *v31++ = 32;
        if ( v30 & 0x10 )
          *v31++ = 35;
        if ( v30 & 0x40 )
          *v31++ = 73;
        if ( v30 & 0x20 )
          *v31++ = 48;
        v33 = (_BYTE *)*((_QWORD *)v11 + 3);
        v34 = (_BYTE *)*((_QWORD *)v11 + 4);
        if ( v33 != v34 )
        {
          v154 = v26;
          *(_QWORD *)&v156 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v154;
          v31 += *(_QWORD *)&v156;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v154 = v26;
          *(_QWORD *)&v156 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v154;
          v31 += *(_QWORD *)&v156;
        }
        if ( (unsigned int)v157 <= 0x10 )
        {
          v37 = 1LL << (char)v157;
          if ( (1LL << (char)v157) & 0x14180 )
            goto LABEL_125;
          if ( v37 & 0x1000 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( !(v37 & 0x600) )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = v11[72];
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = &v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v154) = 1;
            v160 = *((_DWORD *)v40 + 4);
            goto LABEL_65;
          }
LABEL_198:
          abort();
        }
        LODWORD(v154) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = &v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_198;
          v43 = (int)v154;
          *(&v160 + (unsigned int)v154) = *((_DWORD *)v42 + 4);
          LODWORD(v154) = v43 + 1;
        }
        v44 = v18 + 2;
        if ( v18 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v10 != -1LL )
            goto LABEL_88;
        }
        else if ( v10 < v44 )
        {
          if ( v10 )
          {
            if ( (v10 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v10 *= 2LL;
            if ( v10 >= v44 )
              goto LABEL_73;
          }
          else if ( v44 <= 0xC )
          {
            v10 = 12LL;
LABEL_73:
            if ( v13 && v13 != src )
            {
              v45 = (char *)realloc(v13, v10);
              if ( v45 )
                goto LABEL_76;
LABEL_88:
              v56 = v13;
              *(_QWORD *)&v156 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v165 != &v168 )
                    free(v165);
                  if ( v162 != &v163 )
                    free(v162);
                  v13 = 0LL;
                  **(_DWORD **)&v156 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v156 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v156) = v13 == src;
            v90 = (char *)malloc(v10);
            v45 = v90;
            if ( !v90 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v156) )
              v45 = (char *)memcpy(v90, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v152 = v45;
            v46 = __errno_location();
            v47 = v152;
            v152 = v31;
            *(_QWORD *)&v156 = v46;
            LODWORD(v148) = *v46;
            while ( 2 )
            {
              v48 = 0x7FFFFFFFLL;
              v159 = -1;
              **(_DWORD **)&v156 = 0;
              if ( v10 - v18 <= 0x7FFFFFFF )
                v48 = v10 - v18;
              switch ( (_DWORD)v157 )
              {
                case 1:
                  v79 = (unsigned int)*((char *)v162 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_149;
                case 2:
                  v79 = *((unsigned __int8 *)v162 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_149;
                case 3:
                  v79 = (unsigned int)*((__int16 *)v162 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_149;
                case 4:
                  v79 = *((unsigned __int16 *)v162 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_149;
                case 5:
                case 6:
                case 0xD:
                case 0xE:
                  v79 = *((unsigned int *)v162 + 8 * *((_QWORD *)v11 + 10) + 4);
LABEL_149:
                  v70 = &v47[v18];
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 )
                    goto LABEL_208;
                  if ( (_DWORD)v154 != 2 )
                    goto LABEL_151;
                  goto LABEL_207;
                case 7:
                case 8:
                case 9:
                case 0xA:
                case 0xF:
                case 0x10:
                case 0x11:
                  v70 = &v47[v18];
                  v71 = (int *)*((_QWORD *)v162 + 4 * *((_QWORD *)v11 + 10) + 2);
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 )
                  {
LABEL_208:
                    v79 = v160;
LABEL_151:
                    v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v79);
                    v73 = v159;
                    v47 = (char *)v151;
                    if ( v159 >= 0 )
                      goto LABEL_132;
                  }
                  else
                  {
                    if ( (_DWORD)v154 == 2 )
                    {
LABEL_207:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v160);
                      v47 = (char *)v151;
                    }
                    else
                    {
LABEL_130:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v71);
                      v47 = (char *)v151;
                    }
LABEL_131:
                    v73 = v159;
                    if ( v159 >= 0 )
                    {
LABEL_132:
                      if ( v73 < v48 && v47[v73 + v18] )
                        goto LABEL_198;
                      if ( v73 >= v72 )
                        goto LABEL_136;
                      goto LABEL_135;
                    }
                  }
                  if ( v152[1] )
                  {
                    v152[1] = 0;
                    continue;
                  }
                  if ( v72 < 0 )
                  {
                    v80 = **(_DWORD **)&v156;
                    if ( !**(_DWORD **)&v156 )
                    {
                      v80 = 84;
                      if ( (v11[72] & 0xEF) != 99 )
                        v80 = 22;
                    }
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v165 != &v168 )
                      free(v165);
                    if ( v162 != &v163 )
                      free(v162);
                    **(_DWORD **)&v156 = v80;
                    return 0LL;
                  }
LABEL_135:
                  v159 = v72;
                  v73 = v72;
LABEL_136:
                  if ( (unsigned int)(v73 + 1) < v48 )
                  {
                    v13 = v47;
                    v14 = v18 + v73;
                    **(_DWORD **)&v156 = (_DWORD)v148;
                    goto LABEL_110;
                  }
                  if ( v10 - v18 > 0x7FFFFFFE )
                  {
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v165 != &v168 )
                      free(v165);
                    if ( v162 != &v163 )
                      free(v162);
                    v13 = 0LL;
                    **(_DWORD **)&v156 = 75;
                    return v13;
                  }
                  v74 = (unsigned int)(v73 + 2);
                  v75 = __CFADD__(v18, v74);
                  v76 = v18 + v74;
                  if ( (v10 & 0x8000000000000000LL) != 0LL )
                  {
                    if ( v10 != -1LL )
                      goto LABEL_200;
                  }
                  else
                  {
                    if ( v75 )
                      goto LABEL_200;
                    if ( 2 * v10 >= v76 )
                      v76 = 2 * v10;
                    if ( v10 < v76 )
                    {
                      v10 *= 2LL;
                      if ( v10 < v76 )
                      {
                        if ( v76 == -1LL )
                        {
LABEL_200:
                          v56 = v47;
                          goto LABEL_89;
                        }
                        v10 = v76;
                      }
                      v77 = v47 == src;
                      if ( !v47 || v77 )
                      {
                        v151 = v47;
                        v89 = (char *)malloc(v10);
                        v47 = (char *)v151;
                        if ( !v89 )
                          goto LABEL_200;
                        if ( v18 && v77 )
                          v47 = (char *)memcpy(v89, v151, v18);
                        else
                          v47 = v89;
                      }
                      else
                      {
                        v151 = v47;
                        v78 = (char *)realloc(v47, v10);
                        v47 = (char *)v151;
                        if ( !v78 )
                          goto LABEL_200;
                        v47 = v78;
                      }
                    }
                  }
                  continue;
                case 0xB:
                  v81 = &v47[v18];
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 || (_DWORD)v154 == 2 )
                  {
                    v72 = __snprintf_chk(v81, v48, 1LL, -1LL, v155, v160);
                    v47 = (char *)v151;
                  }
                  else
                  {
                    v72 = __snprintf_chk(v81, v48, 1LL, -1LL, v155, &v159);
                    v47 = (char *)v151;
                  }
                  goto LABEL_131;
                case 0xC:
                  v70 = &v47[v18];
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 )
                    goto LABEL_207;
                  if ( (_DWORD)v154 != 2 )
                  {
                    v71 = &v159;
                    goto LABEL_130;
                  }
                  v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v160);
                  v47 = (char *)v151;
                  goto LABEL_131;
                default:
                  goto LABEL_403;
              }
            }
          }
          if ( v18 != -3LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      switch ( v28 )
      {
        case 18:
          v14 = v18;
          **((_BYTE **)v27 + 2) = v18;
          break;
        case 19:
          v14 = v18;
          **((_WORD **)v27 + 2) = v18;
          break;
        case 20:
          v14 = v18;
          **((_DWORD **)v27 + 2) = v18;
          break;
        case 21:
        case 22:
          v14 = v18;
          **((_QWORD **)v27 + 2) = v18;
          break;
        default:
LABEL_403:
          abort();
          return result;
      }
LABEL_110:
      v12 = (char *)*((_QWORD *)v11 + 1);
      v11 += 88;
      v15 = *(_BYTE **)v11;
      ++v153;
      if ( v15 != v12 )
        goto LABEL_14;
LABEL_111:
      v18 = v14;
    }
    v103 = v18;
    v104 = v18 + 1;
    if ( v18 == -1LL )
    {
      if ( v10 != -1LL )
        goto LABEL_88;
    }
    else if ( v10 < v104 )
    {
      if ( v10 )
      {
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v10 *= 2LL;
        if ( v10 >= v104 )
        {
LABEL_298:
          v105 = v13 == src;
          if ( !v13 || v105 )
          {
            v138 = (char *)malloc(v10);
            if ( !v138 )
              goto LABEL_88;
            if ( v103 && v105 )
              v13 = (char *)memcpy(v138, v13, v103);
            else
              v13 = v138;
          }
          else
          {
            v106 = (char *)realloc(v13, v10);
            if ( !v106 )
              goto LABEL_126;
            v13 = v106;
          }
          goto LABEL_302;
        }
      }
      else if ( v104 <= 0xC )
      {
        v10 = 12LL;
        goto LABEL_298;
      }
      if ( v18 == -2LL )
        goto LABEL_88;
      v10 = v18 + 1;
      goto LABEL_298;
    }
LABEL_302:
    v13[v103] = 0;
    if ( v10 > v104 && v13 != src )
    {
      v107 = (char *)realloc(v13, v104);
      if ( v107 )
        v13 = v107;
    }
    if ( ptr )
      free(ptr);
    if ( v165 != &v168 )
      free(v165);
    if ( v162 != &v163 )
      free(v162);
    *v150 = v103;
    return v13;
  }
  if ( v165 != &v168 )
    free(v165);
  if ( v162 != &v163 )
    free(v162);
  v13 = 0LL;
  *__errno_location() = 22;
  return v13;
}

char *__fastcall sub_40AFC0(void *a1, size_t *a2, char *a3, __int64 a4)
{
  char *v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  size_t v8; // rdi
  _BYTE *v9; // rax
  size_t v10; // r12
  char *v11; // r14
  char *v12; // r8
  char *v13; // rbx
  size_t v14; // r15
  _BYTE *v15; // rcx
  char *v16; // rcx
  unsigned __int64 v17; // rax
  size_t v18; // r13
  bool v19; // dl
  char *v20; // rax
  char *v21; // rax
  void *v22; // rsp
  char *v23; // rax
  char v24; // r15
  __int64 v25; // rax
  char *v26; // r8
  long double *v27; // rdx
  int v28; // eax
  char v29; // al
  int v30; // eax
  char *v31; // r15
  _BYTE *v32; // rdi
  _BYTE *v33; // rsi
  _BYTE *v34; // rdx
  _BYTE *v35; // rsi
  _BYTE *v36; // rdx
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rax
  char *v40; // rax
  __int64 v41; // rax
  char *v42; // r8
  int v43; // eax
  unsigned __int64 v44; // rax
  char *v45; // r11
  int *v46; // rax
  char *v47; // r11
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r10
  char *v50; // rdx
  char *v51; // rcx
  __int64 v52; // rsi
  _DWORD *v53; // r8
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  void *v56; // r15
  char *result; // rax
  unsigned __int64 v58; // rax
  char *v59; // rax
  char v61; // fps^1
  char *v65; // rdx
  char *v66; // rdi
  int v67; // er11
  __int64 v68; // rcx
  _DWORD *v69; // rcx
  char *v70; // rdi
  int *v71; // r9
  int v72; // eax
  int v73; // edx
  __int64 v74; // rax
  bool v75; // cf
  unsigned __int64 v76; // rax
  bool v77; // bl
  char *v78; // rax
  __int64 v79; // r9
  int v80; // ebx
  char *v81; // rdi
  unsigned __int64 v82; // rax
  void *v83; // rax
  char *v84; // rax
  char *v85; // rcx
  int v86; // er8
  __int16 v87; // ax
  unsigned __int64 v88; // r15
  char *v89; // rax
  char *v90; // rax
  char *v91; // rax
  char v92; // al
  unsigned __int64 v93; // r9
  size_t v94; // r8
  unsigned __int64 v95; // r10
  unsigned __int64 v96; // rdi
  __int64 v97; // rax
  unsigned __int64 v98; // r10
  unsigned __int64 v99; // rax
  char *v100; // rax
  __int64 v101; // rsi
  char v102; // al
  size_t v103; // r15
  size_t v104; // r14
  bool v105; // r13
  char *v106; // rax
  char *v107; // rax
  __int64 v108; // rax
  unsigned __int64 v109; // r10
  char *v110; // rax
  char *v111; // rax
  char *v112; // rax
  __int64 v113; // rsi
  __int64 v114; // rdx
  char v115; // al
  __int64 v116; // rdx
  unsigned __int64 v117; // rax
  char *v118; // rax
  __int64 v119; // rdx
  char v120; // al
  unsigned __int64 v121; // rax
  __int64 v122; // rsi
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rax
  char *v126; // rsi
  char *v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rsi
  unsigned __int64 v130; // rax
  char v131; // al
  __int64 v132; // rsi
  char v133; // al
  char *v134; // rax
  __int64 v135; // rdx
  char v136; // al
  __int64 v137; // rax
  char *v138; // rax
  char *v139; // rax
  void *v140; // rdx
  char v141; // al
  char *v142; // rax
  char *v143; // rax
  char v144; // al
  __int16 v145; // [rsp+24h] [rbp-6ECh]
  __int16 v146; // [rsp+24h] [rbp-6ECh]
  unsigned __int64 v147; // [rsp+28h] [rbp-6E8h]
  char *v148; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v150; // [rsp+40h] [rbp-6D0h]
  void *v151; // [rsp+48h] [rbp-6C8h]
  char *v152; // [rsp+50h] [rbp-6C0h]
  __int64 v153; // [rsp+58h] [rbp-6B8h]
  char *v154; // [rsp+60h] [rbp-6B0h]
  _BYTE *v155; // [rsp+68h] [rbp-6A8h]
  long double v156; // [rsp+70h] [rbp-6A0h]
  void *v157; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v159; // [rsp+94h] [rbp-67Ch]
  unsigned int v160; // [rsp+98h] [rbp-678h]
  char v161; // [rsp+A0h] [rbp-670h]
  void *v162; // [rsp+A8h] [rbp-668h]
  __int64 v163; // [rsp+B0h] [rbp-660h]
  __int64 v164; // [rsp+190h] [rbp-580h]
  void *v165; // [rsp+198h] [rbp-578h]
  __int64 v166; // [rsp+1A0h] [rbp-570h]
  __int64 v167; // [rsp+1A8h] [rbp-568h]
  __int64 v168; // [rsp+1B0h] [rbp-560h]
  char v169; // [rsp+420h] [rbp-2F0h]

  v4 = a3;
  v5 = a4;
  src = a1;
  v150 = a2;
  if ( (int)sub_40CD00(a3, &v164, &v161) < 0 )
    return 0LL;
  if ( (int)sub_40CAE0(v5, &v161) >= 0 )
  {
    v6 = v166 + 7;
    if ( (unsigned __int64)(v166 + 7) <= 6 )
      v6 = -1LL;
    v75 = __CFADD__(v167, v6);
    v7 = v167 + v6;
    if ( v75 )
      goto LABEL_112;
    v8 = v7 + 6;
    if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v8 <= 0xF9F )
    {
      ptr = 0LL;
      v22 = alloca(v7 + 14);
      v155 = (_BYTE *)(((unsigned __int64)&v147 + 7) & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      if ( v7 == -7LL )
        goto LABEL_112;
      v9 = malloc(v8);
      v155 = v9;
      if ( !v9 )
        goto LABEL_112;
      ptr = v9;
    }
    v10 = 0LL;
    if ( src )
      v10 = *v150;
    v11 = (char *)v165;
    v12 = v4;
    v13 = (char *)src;
    v153 = 0LL;
    v14 = 0LL;
    v15 = *(_BYTE **)v165;
    if ( *(char **)v165 == v12 )
      goto LABEL_111;
LABEL_14:
    v16 = (char *)(v15 - v12);
    v17 = (unsigned __int64)&v16[v14];
    v18 = (size_t)&v16[v14];
    if ( __CFADD__(v16, v14) )
    {
      if ( v10 != -1LL )
        goto LABEL_88;
      v18 = -1LL;
    }
    else if ( v10 < v17 )
    {
      if ( v10 )
      {
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v10 *= 2LL;
        if ( v10 >= v17 )
        {
LABEL_28:
          v19 = v13 == src;
          if ( !v13 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v17 <= 0xC )
      {
        v10 = 12LL;
        v19 = v13 == src;
        if ( !v13 )
        {
LABEL_19:
          v154 = v12;
          LOBYTE(v156) = v19;
          v157 = v16;
          v20 = (char *)malloc(v10);
          v16 = (char *)v157;
          v12 = v154;
          if ( !v20 )
            goto LABEL_88;
          if ( v14 && LOBYTE(v156) )
          {
            *(_QWORD *)&v156 = v154;
            v21 = (char *)memcpy(v20, v13, v14);
            v16 = (char *)v157;
            v12 = *(char **)&v156;
            v13 = v21;
          }
          else
          {
            v13 = v20;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v19 )
        {
          *(_QWORD *)&v156 = v12;
          v157 = v16;
          v23 = (char *)realloc(v13, v10);
          if ( !v23 )
            goto LABEL_126;
          v16 = (char *)v157;
          v12 = *(char **)&v156;
          v13 = v23;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v17 == -1LL )
        goto LABEL_88;
      v10 = (size_t)&v16[v14];
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v13[v14], v12, (size_t)v16);
    while ( v164 != v153 )
    {
      v24 = v11[72];
      v25 = *((_QWORD *)v11 + 10);
      if ( v24 == 37 )
      {
        if ( v25 != -1 )
          goto LABEL_198;
        v58 = v18 + 1;
        v14 = v18 + 1;
        if ( v18 == -1LL )
        {
          if ( v10 != -1LL )
            goto LABEL_88;
          v14 = -1LL;
        }
        else if ( v10 < v58 )
        {
          if ( v10 )
          {
            if ( (v10 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v10 *= 2LL;
            if ( v10 < v58 )
              goto LABEL_234;
          }
          else
          {
            if ( v58 <= 0xC )
            {
              v10 = 12LL;
              goto LABEL_105;
            }
LABEL_234:
            if ( v18 == -2LL )
              goto LABEL_88;
            v10 = v18 + 1;
          }
LABEL_105:
          if ( v13 && v13 != src )
          {
            v59 = (char *)realloc(v13, v10);
            if ( v59 )
            {
              v13 = v59;
              goto LABEL_109;
            }
LABEL_126:
            v56 = v13;
            *(_QWORD *)&v156 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v157) = v13 == src;
          v91 = (char *)malloc(v10);
          if ( !v91 )
            goto LABEL_88;
          if ( v18 && (_BYTE)v157 )
            v13 = (char *)memcpy(v91, v13, v18);
          else
            v13 = v91;
        }
LABEL_109:
        v13[v18] = 37;
        goto LABEL_110;
      }
      if ( v25 == -1 )
        goto LABEL_198;
      v26 = (char *)v162;
      v27 = (long double *)((char *)v162 + 32 * v25);
      v28 = *(_DWORD *)v27;
      LODWORD(v157) = *(_DWORD *)v27;
      if ( v24 != 110 )
      {
        v29 = v24 & 0xDF;
        if ( ((unsigned __int8)((v24 & 0xDF) - 69) <= 2u || v29 == 65) && (_DWORD)v157 == 12 )
        {
          _FST7 = v27[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v65 = (char *)*((_QWORD *)v11 + 3);
            v66 = (char *)*((_QWORD *)v11 + 4);
            v67 = *((_DWORD *)v11 + 4);
            if ( v65 == v66 )
            {
              v49 = 0LL;
            }
            else
            {
              v68 = *((_QWORD *)v11 + 5);
              if ( v68 == -1 )
              {
                v49 = 0LL;
                v157 = (void *)-1LL;
                while ( 1 )
                {
                  v122 = (__int64)(v65 + 1);
                  v123 = -1LL;
                  v124 = *v65 - 48;
                  if ( v49 <= 0x1999999999999999LL )
                    v123 = 10 * v49;
                  v75 = __CFADD__(v123, v124);
                  v49 = v123 + v124;
                  v65 = (char *)v122;
                  if ( v75 )
                  {
                    if ( v66 == (char *)v122 )
                    {
LABEL_81:
                      v49 = (unsigned __int64)v157;
                      goto LABEL_82;
                    }
                    while ( *(++v65 - 1) != 48 )
                    {
                      if ( v66 == v65 )
                        goto LABEL_81;
                    }
                    v49 = -1LL;
                  }
                  if ( v66 == v65 )
                    goto LABEL_82;
                }
              }
              v69 = (char *)v162 + 32 * v68;
              if ( *v69 != 5 )
                goto LABEL_198;
              v49 = (int)v69[4];
              if ( (v49 & 0x80000000) != 0LL )
              {
                v67 |= 2u;
                v49 = -(__int64)v49;
              }
            }
LABEL_82:
            v50 = (char *)*((_QWORD *)v11 + 6);
            v51 = (char *)*((_QWORD *)v11 + 7);
            if ( v50 != v51 )
            {
              v52 = *((_QWORD *)v11 + 8);
              if ( v52 == -1 )
              {
                v125 = (__int64)(v50 + 1);
                v54 = 0LL;
                if ( v51 != (char *)v125 )
                {
                  v126 = (char *)v125;
                  while ( 1 )
                  {
                    v127 = v126 + 1;
                    v128 = *v126 - 48;
                    v129 = -1LL;
                    if ( v54 <= 0x1999999999999999LL )
                      v129 = 10 * v54;
                    v75 = __CFADD__(v129, v128);
                    v130 = v129 + v128;
                    v126 = v127;
                    v54 = v130;
                    if ( v75 )
                    {
                      if ( v51 == v127 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v126 = v127 + 1;
                        if ( *v127 == 48 )
                          break;
                        if ( v51 == v126 )
                          goto LABEL_88;
                        ++v127;
                      }
                      v54 = -1LL;
                    }
                    if ( v51 == v126 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_370;
              }
              v53 = (char *)v162 + 32 * v52;
              if ( *v53 != 5 )
                goto LABEL_198;
              v54 = (int)v53[4];
              if ( (v54 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v54 )
                {
                  v55 = v54 + 12;
                  if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_188:
                  v82 = v55;
                  if ( v49 >= v55 )
                    v82 = v49;
                  v75 = __CFADD__(v82, 1LL);
                  v83 = (void *)(v82 + 1);
                  v157 = v83;
                  if ( v75 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v83 <= 0x2BC )
                  {
                    v85 = &v169;
                  }
                  else
                  {
                    v151 = (void *)v49;
                    v152 = (char *)v54;
                    LODWORD(v154) = v67;
                    v156 = _FST7;
                    if ( v83 == (void *)-1LL )
                      goto LABEL_88;
                    v84 = (char *)malloc((size_t)v83);
                    v67 = (int)v154;
                    _FST7 = v156;
                    v85 = v84;
                    v54 = (unsigned __int64)v152;
                    v49 = (unsigned __int64)v151;
                    if ( !v84 )
                      goto LABEL_88;
                  }
                  v86 = (unsigned __int16)v160;
                  LOBYTE(v87) = v160;
                  HIBYTE(v87) = BYTE1(v160) | 3;
                  LOWORD(v160) = v87;
                  __asm { fxam }
                  if ( v61 & 2 )
                  {
                    *v85 = 45;
                    _FST7 = -_FST7;
                    v88 = (unsigned __int64)(v85 + 1);
                  }
                  else if ( v67 & 4 )
                  {
                    v88 = (unsigned __int64)(v85 + 1);
                    *v85 = 43;
                  }
                  else
                  {
                    v88 = (unsigned __int64)v85;
                    if ( v67 & 8 )
                    {
                      v88 = (unsigned __int64)(v85 + 1);
                      *v85 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_198;
                    v93 = v88 + 3;
                    if ( (unsigned __int8)(v11[72] - 65) > 0x19u )
                    {
                      *(_BYTE *)(v88 + 2) = 102;
                      *(_WORD *)v88 = 28265;
                    }
                    else
                    {
                      *(_BYTE *)(v88 + 2) = 70;
                      *(_WORD *)v88 = 20041;
                    }
                    v88 = 0LL;
                    goto LABEL_258;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_198;
                  v92 = v11[72] & 0xDF;
                  switch ( v92 )
                  {
                    case 70:
                      *(_BYTE *)v88 = 48;
                      if ( v67 & 0x10 || v54 )
                      {
                        LOWORD(v147) = v86;
                        v148 = (char *)v49;
                        v151 = v85;
                        v152 = (char *)v54;
                        LODWORD(v154) = v67;
                        *(_QWORD *)&v156 = v88 + 2;
                        v118 = nl_langinfo(0x10000);
                        v119 = (__int64)v152;
                        v93 = *(_QWORD *)&v156;
                        v120 = *v118;
                        LOBYTE(v67) = (_BYTE)v154;
                        v85 = (char *)v151;
                        v49 = (unsigned __int64)v148;
                        LOWORD(v86) = v147;
                        if ( !v120 )
                          v120 = 46;
                        *(_BYTE *)(v88 + 1) = v120;
                        if ( v119 )
                        {
                          v121 = v93;
                          do
                            *(_BYTE *)(++v121 - 1) = 48;
                          while ( v121 != v88 + v119 + 2 );
                          v93 += v119;
                        }
                        goto LABEL_258;
                      }
                      goto LABEL_257;
                    case 69:
                      *(_BYTE *)v88 = 48;
                      if ( v67 & 0x10 || (v101 = v88 + 1, v54) )
                      {
                        LOWORD(v147) = v86;
                        v148 = (char *)v49;
                        v151 = v85;
                        v152 = (char *)v54;
                        LODWORD(v154) = v67;
                        *(_QWORD *)&v156 = v88 + 2;
                        v134 = nl_langinfo(0x10000);
                        v135 = (__int64)v152;
                        v101 = *(_QWORD *)&v156;
                        v136 = *v134;
                        LOBYTE(v67) = (_BYTE)v154;
                        v85 = (char *)v151;
                        v49 = (unsigned __int64)v148;
                        LOWORD(v86) = v147;
                        if ( !v136 )
                          v136 = 46;
                        *(_BYTE *)(v88 + 1) = v136;
                        if ( v135 )
                        {
                          v137 = v101;
                          do
                            *(_BYTE *)(++v137 - 1) = 48;
                          while ( v137 != v88 + v135 + 2 );
                          v101 += v135;
                        }
                      }
                      v102 = v11[72];
                      v93 = v101 + 4;
                      *(_BYTE *)(v101 + 3) = 48;
                      *(_BYTE *)v101 = v102;
                      *(_WORD *)(v101 + 1) = 12331;
                      goto LABEL_258;
                    case 71:
                      *(_BYTE *)v88 = 48;
                      if ( v67 & 0x10 )
                      {
                        if ( v54 )
                        {
                          v145 = v86;
                          v147 = v49;
                          v148 = (char *)(v88 + 2);
                          v151 = v85;
                          LODWORD(v152) = v67;
                          v154 = (char *)v54;
                          *(_QWORD *)&v156 = v54 - 1;
                          v112 = nl_langinfo(0x10000);
                          v113 = *(_QWORD *)&v156;
                          v114 = (__int64)v154;
                          v115 = *v112;
                          LOBYTE(v67) = (_BYTE)v152;
                          v85 = (char *)v151;
                          v93 = (unsigned __int64)v148;
                          v49 = v147;
                          LOWORD(v86) = v145;
                          if ( !v115 )
                            v115 = 46;
                          *(_BYTE *)(v88 + 1) = v115;
                          if ( v113 )
                          {
                            v116 = v88 + v114 + 1;
                            v117 = v93;
                            do
                              *(_BYTE *)(++v117 - 1) = 48;
                            while ( v117 != v116 );
                            v93 += v113;
                          }
                        }
                        else
                        {
                          LODWORD(v148) = v86;
                          v151 = (void *)v49;
                          v152 = (char *)(v88 + 2);
                          v154 = v85;
                          LODWORD(v156) = v67;
                          v143 = nl_langinfo(0x10000);
                          LOBYTE(v67) = LOBYTE(v156);
                          v85 = v154;
                          v144 = *v143;
                          v93 = (unsigned __int64)v152;
                          v49 = (unsigned __int64)v151;
                          LOWORD(v86) = (_WORD)v148;
                          if ( !v144 )
                            v144 = 46;
                          *(_BYTE *)(v88 + 1) = v144;
                        }
                        goto LABEL_258;
                      }
LABEL_257:
                      v93 = v88 + 1;
                      goto LABEL_258;
                  }
                  if ( v92 != 65 )
                    goto LABEL_198;
                  *(_BYTE *)v88 = 48;
                  *(_QWORD *)&v156 = v88 + 2;
                  v131 = v11[72];
                  *(_BYTE *)(v88 + 2) = 48;
                  *(_BYTE *)(v88 + 1) = v131 + 23;
                  if ( v67 & 0x10 || (v132 = v88 + 3, v54) )
                  {
                    v146 = v86;
                    v147 = v49;
                    v148 = v85;
                    v151 = (void *)v54;
                    LODWORD(v152) = v67;
                    v154 = (char *)(v88 + 4);
                    v139 = nl_langinfo(0x10000);
                    v140 = v151;
                    v132 = (__int64)v154;
                    v141 = *v139;
                    LOBYTE(v67) = (_BYTE)v152;
                    v85 = v148;
                    v49 = v147;
                    LOWORD(v86) = v146;
                    if ( !v141 )
                      v141 = 46;
                    *(_BYTE *)(v88 + 3) = v141;
                    if ( v140 )
                    {
                      v142 = (char *)v132;
                      do
                        *(++v142 - 1) = 48;
                      while ( v142 != (char *)v140 + v88 + 4 );
                      v132 += (__int64)v140;
                    }
                  }
                  v133 = v11[72];
                  v93 = v132 + 3;
                  *(_WORD *)(v132 + 1) = 12331;
                  v88 = *(_QWORD *)&v156;
                  *(_BYTE *)v132 = v133 + 15;
LABEL_258:
                  LOWORD(v160) = v86;
                  v94 = v93 - (_QWORD)v85;
                  if ( v49 > v93 - (unsigned __int64)v85 )
                  {
                    v95 = v49 - v94;
                    v96 = v93 + v95;
                    v94 = v93 + v95 - (_QWORD)v85;
                    if ( v67 & 2 )
                    {
                      if ( v95 )
                      {
                        do
                          *(_BYTE *)(++v93 - 1) = 32;
                        while ( v96 != v93 );
                      }
                    }
                    else if ( v67 & 0x20 && v88 )
                    {
                      if ( v88 >= v93 )
                      {
                        v88 = v93;
                      }
                      else
                      {
                        v97 = -1LL;
                        do
                        {
                          *(_BYTE *)(v96 + v97) = *(_BYTE *)(v93 + v97);
                          --v97;
                        }
                        while ( v97 != v88 - 1 - v93 );
                      }
                      if ( v95 )
                      {
                        v98 = v88 + v95;
                        do
                          *(_BYTE *)(++v88 - 1) = 48;
                        while ( v88 != v98 );
                      }
                    }
                    else
                    {
                      v108 = -1LL;
                      if ( (unsigned __int64)v85 < v93 )
                      {
                        do
                        {
                          *(_BYTE *)(v96 + v108) = *(_BYTE *)(v93 + v108);
                          --v108;
                        }
                        while ( &v85[-v93 - 1] != (char *)v108 );
                        v93 = (unsigned __int64)v85;
                      }
                      if ( v95 )
                      {
                        v109 = v93 + v95;
                        do
                          *(_BYTE *)(++v93 - 1) = 32;
                        while ( v93 != v109 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v157 <= v94 )
                    goto LABEL_198;
                  v99 = v94 + v18;
                  v14 = v94 + v18;
                  if ( v10 - v18 <= v94 )
                  {
                    if ( __CFADD__(v94, v18) )
                    {
                      if ( v10 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v10 < v99 )
                    {
                      if ( v10 )
                      {
                        if ( (v10 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v10 *= 2LL;
                        if ( v10 < v99 )
                          goto LABEL_368;
                      }
                      else
                      {
                        if ( v99 <= 0xC )
                        {
                          v10 = 12LL;
                          goto LABEL_275;
                        }
LABEL_368:
                        if ( v99 == -1LL )
                          goto LABEL_88;
                        v10 = v94 + v18;
                      }
LABEL_275:
                      if ( v13 && v13 != src )
                      {
                        *(_QWORD *)&v156 = v94;
                        v157 = v85;
                        v100 = (char *)realloc(v13, v10);
                        if ( !v100 )
                          goto LABEL_88;
                        v85 = (char *)v157;
                        v94 = *(_QWORD *)&v156;
                        v13 = v100;
                      }
                      else
                      {
                        LOBYTE(v154) = v13 == src;
                        *(_QWORD *)&v156 = v94;
                        v157 = v85;
                        v110 = (char *)malloc(v10);
                        v85 = (char *)v157;
                        v94 = *(_QWORD *)&v156;
                        if ( !v110 )
                          goto LABEL_88;
                        if ( v18 && (_BYTE)v154 )
                        {
                          v111 = (char *)memcpy(v110, v13, v18);
                          v85 = (char *)v157;
                          v94 = *(_QWORD *)&v156;
                          v13 = v111;
                        }
                        else
                        {
                          v13 = v110;
                        }
                      }
                    }
                  }
                  v157 = v85;
                  memcpy(&v13[v18], v85, v94);
                  if ( v157 != &v169 )
                    free(v157);
                  goto LABEL_110;
                }
LABEL_370:
                v55 = 12LL;
                goto LABEL_188;
              }
            }
            v55 = 12LL;
            if ( v29 != 65 )
              v55 = 18LL;
            v54 = 0LL;
            if ( v29 != 65 )
              v54 = 6LL;
            goto LABEL_188;
          }
        }
        v30 = *((_DWORD *)v11 + 4);
        v31 = v155 + 1;
        *v155 = 37;
        if ( v30 & 1 )
        {
          v32 = v155;
          v155[1] = 39;
          v31 = v32 + 2;
        }
        if ( v30 & 2 )
          *v31++ = 45;
        if ( v30 & 4 )
          *v31++ = 43;
        if ( v30 & 8 )
          *v31++ = 32;
        if ( v30 & 0x10 )
          *v31++ = 35;
        if ( v30 & 0x40 )
          *v31++ = 73;
        if ( v30 & 0x20 )
          *v31++ = 48;
        v33 = (_BYTE *)*((_QWORD *)v11 + 3);
        v34 = (_BYTE *)*((_QWORD *)v11 + 4);
        if ( v33 != v34 )
        {
          v154 = v26;
          *(_QWORD *)&v156 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v154;
          v31 += *(_QWORD *)&v156;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v154 = v26;
          *(_QWORD *)&v156 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v154;
          v31 += *(_QWORD *)&v156;
        }
        if ( (unsigned int)v157 <= 0x10 )
        {
          v37 = 1LL << (char)v157;
          if ( (1LL << (char)v157) & 0x14180 )
            goto LABEL_125;
          if ( v37 & 0x1000 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( !(v37 & 0x600) )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = v11[72];
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = &v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v154) = 1;
            v160 = *((_DWORD *)v40 + 4);
            goto LABEL_65;
          }
LABEL_198:
          abort();
        }
        LODWORD(v154) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = &v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_198;
          v43 = (int)v154;
          *(&v160 + (unsigned int)v154) = *((_DWORD *)v42 + 4);
          LODWORD(v154) = v43 + 1;
        }
        v44 = v18 + 2;
        if ( v18 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v10 != -1LL )
            goto LABEL_88;
        }
        else if ( v10 < v44 )
        {
          if ( v10 )
          {
            if ( (v10 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v10 *= 2LL;
            if ( v10 >= v44 )
              goto LABEL_73;
          }
          else if ( v44 <= 0xC )
          {
            v10 = 12LL;
LABEL_73:
            if ( v13 && v13 != src )
            {
              v45 = (char *)realloc(v13, v10);
              if ( v45 )
                goto LABEL_76;
LABEL_88:
              v56 = v13;
              *(_QWORD *)&v156 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v165 != &v168 )
                    free(v165);
                  if ( v162 != &v163 )
                    free(v162);
                  v13 = 0LL;
                  **(_DWORD **)&v156 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v156 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v156) = v13 == src;
            v90 = (char *)malloc(v10);
            v45 = v90;
            if ( !v90 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v156) )
              v45 = (char *)memcpy(v90, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v152 = v45;
            v46 = __errno_location();
            v47 = v152;
            v152 = v31;
            *(_QWORD *)&v156 = v46;
            LODWORD(v148) = *v46;
            while ( 2 )
            {
              v48 = 0x7FFFFFFFLL;
              v159 = -1;
              **(_DWORD **)&v156 = 0;
              if ( v10 - v18 <= 0x7FFFFFFF )
                v48 = v10 - v18;
              switch ( (_DWORD)v157 )
              {
                case 1:
                  v79 = (unsigned int)*((char *)v162 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_149;
                case 2:
                  v79 = *((unsigned __int8 *)v162 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_149;
                case 3:
                  v79 = (unsigned int)*((__int16 *)v162 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_149;
                case 4:
                  v79 = *((unsigned __int16 *)v162 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_149;
                case 5:
                case 6:
                case 0xD:
                case 0xE:
                  v79 = *((unsigned int *)v162 + 8 * *((_QWORD *)v11 + 10) + 4);
LABEL_149:
                  v70 = &v47[v18];
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 )
                    goto LABEL_208;
                  if ( (_DWORD)v154 != 2 )
                    goto LABEL_151;
                  goto LABEL_207;
                case 7:
                case 8:
                case 9:
                case 0xA:
                case 0xF:
                case 0x10:
                case 0x11:
                  v70 = &v47[v18];
                  v71 = (int *)*((_QWORD *)v162 + 4 * *((_QWORD *)v11 + 10) + 2);
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 )
                  {
LABEL_208:
                    v79 = v160;
LABEL_151:
                    v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v79);
                    v73 = v159;
                    v47 = (char *)v151;
                    if ( v159 >= 0 )
                      goto LABEL_132;
                  }
                  else
                  {
                    if ( (_DWORD)v154 == 2 )
                    {
LABEL_207:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v160);
                      v47 = (char *)v151;
                    }
                    else
                    {
LABEL_130:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v71);
                      v47 = (char *)v151;
                    }
LABEL_131:
                    v73 = v159;
                    if ( v159 >= 0 )
                    {
LABEL_132:
                      if ( v73 < v48 && v47[v73 + v18] )
                        goto LABEL_198;
                      if ( v73 >= v72 )
                        goto LABEL_136;
                      goto LABEL_135;
                    }
                  }
                  if ( v152[1] )
                  {
                    v152[1] = 0;
                    continue;
                  }
                  if ( v72 < 0 )
                  {
                    v80 = **(_DWORD **)&v156;
                    if ( !**(_DWORD **)&v156 )
                    {
                      v80 = 84;
                      if ( (v11[72] & 0xEF) != 99 )
                        v80 = 22;
                    }
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v165 != &v168 )
                      free(v165);
                    if ( v162 != &v163 )
                      free(v162);
                    **(_DWORD **)&v156 = v80;
                    return 0LL;
                  }
LABEL_135:
                  v159 = v72;
                  v73 = v72;
LABEL_136:
                  if ( (unsigned int)(v73 + 1) < v48 )
                  {
                    v13 = v47;
                    v14 = v18 + v73;
                    **(_DWORD **)&v156 = (_DWORD)v148;
                    goto LABEL_110;
                  }
                  if ( v10 - v18 > 0x7FFFFFFE )
                  {
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v165 != &v168 )
                      free(v165);
                    if ( v162 != &v163 )
                      free(v162);
                    v13 = 0LL;
                    **(_DWORD **)&v156 = 75;
                    return v13;
                  }
                  v74 = (unsigned int)(v73 + 2);
                  v75 = __CFADD__(v18, v74);
                  v76 = v18 + v74;
                  if ( (v10 & 0x8000000000000000LL) != 0LL )
                  {
                    if ( v10 != -1LL )
                      goto LABEL_200;
                  }
                  else
                  {
                    if ( v75 )
                      goto LABEL_200;
                    if ( 2 * v10 >= v76 )
                      v76 = 2 * v10;
                    if ( v10 < v76 )
                    {
                      v10 *= 2LL;
                      if ( v10 < v76 )
                      {
                        if ( v76 == -1LL )
                        {
LABEL_200:
                          v56 = v47;
                          goto LABEL_89;
                        }
                        v10 = v76;
                      }
                      v77 = v47 == src;
                      if ( !v47 || v77 )
                      {
                        v151 = v47;
                        v89 = (char *)malloc(v10);
                        v47 = (char *)v151;
                        if ( !v89 )
                          goto LABEL_200;
                        if ( v18 && v77 )
                          v47 = (char *)memcpy(v89, v151, v18);
                        else
                          v47 = v89;
                      }
                      else
                      {
                        v151 = v47;
                        v78 = (char *)realloc(v47, v10);
                        v47 = (char *)v151;
                        if ( !v78 )
                          goto LABEL_200;
                        v47 = v78;
                      }
                    }
                  }
                  continue;
                case 0xB:
                  v81 = &v47[v18];
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 || (_DWORD)v154 == 2 )
                  {
                    v72 = __snprintf_chk(v81, v48, 1LL, -1LL, v155, v160);
                    v47 = (char *)v151;
                  }
                  else
                  {
                    v72 = __snprintf_chk(v81, v48, 1LL, -1LL, v155, &v159);
                    v47 = (char *)v151;
                  }
                  goto LABEL_131;
                case 0xC:
                  v70 = &v47[v18];
                  v151 = v47;
                  if ( (_DWORD)v154 == 1 )
                    goto LABEL_207;
                  if ( (_DWORD)v154 != 2 )
                  {
                    v71 = &v159;
                    goto LABEL_130;
                  }
                  v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v155, v160);
                  v47 = (char *)v151;
                  goto LABEL_131;
                default:
                  goto LABEL_403;
              }
            }
          }
          if ( v18 != -3LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      switch ( v28 )
      {
        case 18:
          v14 = v18;
          **((_BYTE **)v27 + 2) = v18;
          break;
        case 19:
          v14 = v18;
          **((_WORD **)v27 + 2) = v18;
          break;
        case 20:
          v14 = v18;
          **((_DWORD **)v27 + 2) = v18;
          break;
        case 21:
        case 22:
          v14 = v18;
          **((_QWORD **)v27 + 2) = v18;
          break;
        default:
LABEL_403:
          abort();
          return result;
      }
LABEL_110:
      v12 = (char *)*((_QWORD *)v11 + 1);
      v11 += 88;
      v15 = *(_BYTE **)v11;
      ++v153;
      if ( v15 != v12 )
        goto LABEL_14;
LABEL_111:
      v18 = v14;
    }
    v103 = v18;
    v104 = v18 + 1;
    if ( v18 == -1LL )
    {
      if ( v10 != -1LL )
        goto LABEL_88;
    }
    else if ( v10 < v104 )
    {
      if ( v10 )
      {
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v10 *= 2LL;
        if ( v10 >= v104 )
        {
LABEL_298:
          v105 = v13 == src;
          if ( !v13 || v105 )
          {
            v138 = (char *)malloc(v10);
            if ( !v138 )
              goto LABEL_88;
            if ( v103 && v105 )
              v13 = (char *)memcpy(v138, v13, v103);
            else
              v13 = v138;
          }
          else
          {
            v106 = (char *)realloc(v13, v10);
            if ( !v106 )
              goto LABEL_126;
            v13 = v106;
          }
          goto LABEL_302;
        }
      }
      else if ( v104 <= 0xC )
      {
        v10 = 12LL;
        goto LABEL_298;
      }
      if ( v18 == -2LL )
        goto LABEL_88;
      v10 = v18 + 1;
      goto LABEL_298;
    }
LABEL_302:
    v13[v103] = 0;
    if ( v10 > v104 && v13 != src )
    {
      v107 = (char *)realloc(v13, v104);
      if ( v107 )
        v13 = v107;
    }
    if ( ptr )
      free(ptr);
    if ( v165 != &v168 )
      free(v165);
    if ( v162 != &v163 )
      free(v162);
    *v150 = v103;
    return v13;
  }
  if ( v165 != &v168 )
    free(v165);
  if ( v162 != &v163 )
    free(v162);
  v13 = 0LL;
  *__errno_location() = 22;
  return v13;
}

__int64 __fastcall sub_40CAE0(int *a1, unsigned __int64 *a2)
{
  unsigned int *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // ecx
  _QWORD *v5; // r10
  unsigned int v7; // ecx
  unsigned int *v8; // r10
  unsigned int v9; // ecx
  _DWORD *v10; // r10
  unsigned int v11; // ecx
  _DWORD *v12; // r10
  unsigned int v13; // ecx
  _QWORD *v14; // r10
  long double *v15; // rcx
  unsigned int v16; // ecx
  void **v17; // r10
  void *v18; // rcx
  unsigned int v19; // ecx
  const char **v20; // r10
  const char *v21; // rcx

  v2 = (unsigned int *)a2[1];
  if ( *a2 )
  {
    v3 = 0LL;
    while ( 2 )
    {
      switch ( (unsigned __int64)*v2 )
      {
        case 1uLL:
        case 2uLL:
          v11 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v12 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v12 + 2;
          }
          else
          {
            v12 = (_DWORD *)(*((_QWORD *)a1 + 2) + v11);
            *a1 = v11 + 8;
          }
          *((_BYTE *)v2 + 16) = *v12;
          goto LABEL_7;
        case 3uLL:
        case 4uLL:
          v9 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v10 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v10 + 2;
          }
          else
          {
            v10 = (_DWORD *)(*((_QWORD *)a1 + 2) + v9);
            *a1 = v9 + 8;
          }
          *((_WORD *)v2 + 8) = *v10;
          goto LABEL_7;
        case 5uLL:
        case 6uLL:
        case 0xDuLL:
        case 0xEuLL:
          v7 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v8 = (unsigned int *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v8 + 2;
          }
          else
          {
            v8 = (unsigned int *)(*((_QWORD *)a1 + 2) + v7);
            *a1 = v7 + 8;
          }
          v2[4] = *v8;
          goto LABEL_7;
        case 7uLL:
        case 8uLL:
        case 9uLL:
        case 0xAuLL:
        case 0x11uLL:
        case 0x12uLL:
        case 0x13uLL:
        case 0x14uLL:
        case 0x15uLL:
        case 0x16uLL:
          v4 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v5 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v5 + 1;
          }
          else
          {
            v5 = (_QWORD *)(*((_QWORD *)a1 + 2) + v4);
            *a1 = v4 + 8;
          }
          *((_QWORD *)v2 + 2) = *v5;
          goto LABEL_7;
        case 0xBuLL:
          v13 = a1[1];
          if ( v13 > 0xAF )
          {
            v14 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v14 + 1;
          }
          else
          {
            v14 = (_QWORD *)(*((_QWORD *)a1 + 2) + v13);
            a1[1] = v13 + 16;
          }
          *((_QWORD *)v2 + 2) = *v14;
          goto LABEL_7;
        case 0xCuLL:
          v15 = (long double *)((*((_QWORD *)a1 + 1) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
          *((_QWORD *)a1 + 1) = v15 + 1;
          *((long double *)v2 + 1) = *v15;
          goto LABEL_7;
        case 0xFuLL:
          v19 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v20 = (const char **)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v20 + 1;
          }
          else
          {
            v20 = (const char **)(*((_QWORD *)a1 + 2) + v19);
            *a1 = v19 + 8;
          }
          v21 = *v20;
          if ( !*v20 )
            v21 = "(NULL)";
          *((_QWORD *)v2 + 2) = v21;
          goto LABEL_7;
        case 0x10uLL:
          v16 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v17 = (void **)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v17 + 1;
          }
          else
          {
            v17 = (void **)(*((_QWORD *)a1 + 2) + v16);
            *a1 = v16 + 8;
          }
          v18 = *v17;
          if ( !*v17 )
            v18 = &unk_411020;
          *((_QWORD *)v2 + 2) = v18;
LABEL_7:
          ++v3;
          v2 += 8;
          if ( *a2 <= v3 )
            return 0LL;
          continue;
        default:
          return 0xFFFFFFFFLL;
      }
    }
  }
  return 0LL;
}

__int64 __fastcall sub_40CD00(char *a1, _QWORD *a2, unsigned __int64 *a3)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  unsigned __int64 *v5; // r15
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // r13
  char *v9; // rbp
  __int64 result; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // r12
  char v13; // bl
  char *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v18; // rbx
  _DWORD *v19; // r13
  unsigned __int64 v20; // rdx
  _DWORD *v21; // rax
  bool v22; // zf
  __int64 v23; // rax
  _BYTE *v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  _DWORD *v28; // rax
  int v29; // ecx
  unsigned __int64 v30; // rax
  int *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  void *v34; // r12
  _QWORD *v35; // rax
  _BYTE *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r9
  _DWORD *v39; // rax
  _DWORD *v40; // rsi
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _BYTE *v43; // rdx
  unsigned __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rax
  char *v47; // rdi
  bool v48; // cf
  unsigned __int64 v49; // rdx
  unsigned __int8 v50; // bl
  void *v51; // rdi
  unsigned __int64 v52; // r9
  _DWORD *v53; // rax
  char *i; // rcx
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  const void *v57; // rsi
  void *v58; // rdi
  unsigned __int64 v59; // r9
  _DWORD *v60; // rax
  _DWORD *v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rdx
  char *v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int8 v67; // si
  _BYTE *v68; // rdx
  unsigned __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rax
  _BYTE *v72; // rdi
  unsigned __int64 v73; // rdx
  unsigned __int8 v74; // bl
  _DWORD *v75; // rax
  _DWORD *src; // [rsp+8h] [rbp-80h]
  _QWORD *srca; // [rsp+8h] [rbp-80h]
  _QWORD *srcb; // [rsp+8h] [rbp-80h]
  unsigned __int64 v79; // [rsp+10h] [rbp-78h]
  unsigned __int64 v80; // [rsp+18h] [rbp-70h]
  unsigned __int64 v81; // [rsp+20h] [rbp-68h]
  __int64 v82; // [rsp+28h] [rbp-60h]
  unsigned __int64 v83; // [rsp+30h] [rbp-58h]
  char *v84; // [rsp+30h] [rbp-58h]
  unsigned __int64 v85; // [rsp+30h] [rbp-58h]
  int v86; // [rsp+30h] [rbp-58h]
  int v87; // [rsp+30h] [rbp-58h]
  _BYTE *v88; // [rsp+30h] [rbp-58h]
  char *v89; // [rsp+30h] [rbp-58h]
  _BYTE *v90; // [rsp+30h] [rbp-58h]
  _QWORD *v91; // [rsp+38h] [rbp-50h]
  unsigned __int64 v92; // [rsp+38h] [rbp-50h]
  _QWORD *v93; // [rsp+38h] [rbp-50h]
  unsigned __int64 v94; // [rsp+38h] [rbp-50h]
  unsigned __int64 v95; // [rsp+38h] [rbp-50h]
  unsigned __int64 v96; // [rsp+38h] [rbp-50h]
  unsigned __int64 v97; // [rsp+38h] [rbp-50h]
  unsigned __int64 v98; // [rsp+38h] [rbp-50h]
  unsigned __int64 v99; // [rsp+40h] [rbp-48h]
  unsigned __int64 v100; // [rsp+40h] [rbp-48h]
  unsigned __int64 v101; // [rsp+40h] [rbp-48h]
  unsigned __int64 v102; // [rsp+40h] [rbp-48h]
  unsigned __int64 v103; // [rsp+40h] [rbp-48h]
  unsigned __int64 v104; // [rsp+40h] [rbp-48h]
  _QWORD *v105; // [rsp+48h] [rbp-40h]
  _QWORD *v106; // [rsp+48h] [rbp-40h]
  _QWORD *v107; // [rsp+48h] [rbp-40h]
  _QWORD *v108; // [rsp+48h] [rbp-40h]
  _QWORD *v109; // [rsp+48h] [rbp-40h]
  _QWORD *v110; // [rsp+48h] [rbp-40h]

  v3 = a2 + 4;
  v4 = a2;
  v5 = a3;
  v6 = 7LL;
  v7 = 7LL;
  v8 = 0LL;
  *a2 = 0LL;
  a2[1] = a2 + 4;
  v82 = (__int64)(a2 + 4);
  *a3 = 0LL;
  src = a3 + 2;
  a3[1] = (unsigned __int64)(a3 + 2);
  v80 = 0LL;
  v79 = 0LL;
  v81 = 0LL;
  while ( 1 )
  {
    if ( !*a1 )
    {
      v3[11 * v8] = a1;
      v4[2] = v79;
      v4[3] = v80;
      return 0LL;
    }
    v9 = a1 + 1;
    if ( *a1 == 37 )
      break;
LABEL_3:
    a1 = v9;
  }
  v11 = -1LL;
  v12 = (__int64)&v3[11 * v8];
  *(_QWORD *)v12 = a1;
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_QWORD *)(v12 + 32) = 0LL;
  *(_QWORD *)(v12 + 40) = -1LL;
  *(_QWORD *)(v12 + 48) = 0LL;
  *(_QWORD *)(v12 + 56) = 0LL;
  *(_QWORD *)(v12 + 64) = -1LL;
  *(_QWORD *)(v12 + 80) = -1LL;
  v13 = a1[1];
  if ( (unsigned __int8)(v13 - 48) > 9u )
    goto LABEL_17;
  v36 = a1 + 1;
  do
    ++v36;
  while ( (unsigned __int8)(*v36 - 48) <= 9u );
  if ( *v36 != 36 )
  {
    v11 = -1LL;
    goto LABEL_17;
  }
  v62 = 0LL;
  do
  {
    v63 = -1LL;
    v64 = v13 - 48;
    if ( v62 <= 0x1999999999999999LL )
      v63 = 10 * v62;
    v65 = v9;
    while ( 1 )
    {
      v13 = v9[1];
      v48 = __CFADD__(v63, v64);
      v66 = v63 + v64;
      v62 = v66;
      ++v9;
      v67 = v13 - 48;
      if ( !v48 )
        break;
      if ( v67 > 9u )
        goto LABEL_131;
      v63 = -1LL;
      v65 = v9;
      v64 = v13 - 48;
    }
  }
  while ( v67 <= 9u );
  v11 = v66 - 1;
  if ( v66 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_131;
  v9 = v65 + 2;
  v13 = v65[2];
  while ( 1 )
  {
LABEL_17:
    v14 = v9 + 1;
    switch ( v13 )
    {
      case 39:
        *(_DWORD *)(v12 + 16) |= 1u;
        goto LABEL_16;
      case 45:
        *(_DWORD *)(v12 + 16) |= 2u;
        goto LABEL_16;
      case 43:
        *(_DWORD *)(v12 + 16) |= 4u;
        goto LABEL_16;
      case 32:
        *(_DWORD *)(v12 + 16) |= 8u;
        goto LABEL_16;
      case 35:
        *(_DWORD *)(v12 + 16) |= 0x10u;
        goto LABEL_16;
    }
    if ( v13 != 48 )
      break;
    *(_DWORD *)(v12 + 16) |= 0x20u;
LABEL_16:
    v13 = *v14;
    ++v9;
  }
  if ( v13 == 73 )
  {
    *(_DWORD *)(v12 + 16) |= 0x40u;
    goto LABEL_16;
  }
  if ( v13 == 42 )
  {
    v16 = 1LL;
    *(_QWORD *)(v12 + 24) = v9;
    *(_QWORD *)(v12 + 32) = v14;
    if ( v79 )
      v16 = v79;
    v79 = v16;
    v17 = v9[1];
    if ( (unsigned __int8)(v9[1] - 48) > 9u )
      goto LABEL_215;
    v43 = v9 + 1;
    do
      ++v43;
    while ( (unsigned __int8)(*v43 - 48) <= 9u );
    if ( *v43 != 36 )
    {
LABEL_215:
      v18 = *(_QWORD *)(v12 + 40);
      if ( v18 == -1LL )
      {
        *(_QWORD *)(v12 + 40) = v81;
        if ( v81 == -1LL )
          goto LABEL_131;
        v18 = v81++;
      }
    }
    else
    {
      v44 = 0LL;
      do
      {
        v45 = -1LL;
        v46 = v17 - 48;
        if ( v44 <= 0x1999999999999999LL )
          v45 = 10 * v44;
        v47 = v14;
        while ( 1 )
        {
          v48 = __CFADD__(v46, v45);
          v49 = v46 + v45;
          v17 = v14[1];
          v44 = v49;
          ++v14;
          v50 = v17 - 48;
          if ( !v48 )
            break;
          if ( v50 > 9u )
            goto LABEL_131;
          v45 = -1LL;
          v47 = v14;
          v46 = v17 - 48;
        }
      }
      while ( v50 <= 9u );
      v18 = v49 - 1;
      if ( v49 - 1 > 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_131;
      *(_QWORD *)(v12 + 40) = v18;
      v14 = v47 + 2;
    }
    v19 = (_DWORD *)v5[1];
    if ( v6 > v18 )
    {
      v20 = *v5;
LABEL_43:
      if ( v20 <= v18 )
      {
        do
          v19[8 * ++v20 - 8] = 0;
        while ( v20 <= v18 );
        *v5 = v20;
      }
      v21 = &v19[8 * v18];
      if ( *v21 )
      {
        if ( *v21 == 5 )
        {
          v13 = *v14;
          v9 = v14++;
          goto LABEL_26;
        }
        goto LABEL_132;
      }
      *v21 = 5;
      v13 = *v14;
      v9 = v14++;
      if ( v13 != 46 )
        goto LABEL_27;
LABEL_48:
      v22 = v9[1] == 42;
      *(_QWORD *)(v12 + 48) = v9;
      if ( !v22 )
      {
        if ( (unsigned __int8)(v9[1] - 48) > 9u )
        {
          v9 = v14;
          v37 = 1LL;
        }
        else
        {
          do
            ++v14;
          while ( (unsigned __int8)(*v14 - 48) <= 9u );
          v37 = v14 - v9;
          v9 = v14;
        }
        *(_QWORD *)(v12 + 56) = v14;
        v13 = *v14;
        if ( v80 >= v37 )
          v37 = v80;
        v80 = v37;
        goto LABEL_27;
      }
      v23 = 2LL;
      v24 = v9 + 2;
      *(_QWORD *)(v12 + 56) = v9 + 2;
      if ( v80 >= 2 )
        v23 = v80;
      v80 = v23;
      v25 = v9[2];
      if ( (unsigned __int8)(v9[2] - 48) > 9u )
        goto LABEL_216;
      v68 = v9 + 2;
      do
        ++v68;
      while ( (unsigned __int8)(*v68 - 48) <= 9u );
      if ( *v68 != 36 )
      {
LABEL_216:
        v26 = *(_QWORD *)(v12 + 64);
        if ( v26 != -1LL )
          goto LABEL_53;
        *(_QWORD *)(v12 + 64) = v81;
        if ( v81 != -1LL )
        {
          v26 = v81++;
          goto LABEL_53;
        }
      }
      else
      {
        v69 = 0LL;
        do
        {
          v70 = -1LL;
          v71 = v25 - 48;
          if ( v69 <= 0x1999999999999999LL )
            v70 = 10 * v69;
          v72 = v24;
          while ( 1 )
          {
            v48 = __CFADD__(v71, v70);
            v73 = v71 + v70;
            v25 = (char)*++v24;
            v69 = v73;
            v74 = v25 - 48;
            if ( !v48 )
              break;
            if ( v74 > 9u )
              goto LABEL_131;
            v70 = -1LL;
            v72 = v24;
            v71 = v25 - 48;
          }
        }
        while ( v74 <= 9u );
        v26 = v73 - 1;
        if ( v73 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *(_QWORD *)(v12 + 64) = v26;
          v24 = v72 + 2;
LABEL_53:
          v19 = (_DWORD *)v5[1];
          if ( v6 > v26 )
          {
            v27 = *v5;
            goto LABEL_55;
          }
          v59 = 2 * v6;
          if ( v59 <= v26 )
            v59 = v26 + 1;
          if ( v59 <= 0x7FFFFFFFFFFFFFFLL )
          {
            v108 = v4;
            v102 = v59;
            v96 = v7;
            v88 = v24;
            if ( src == v19 )
            {
              v75 = malloc(32 * v59);
              v24 = v88;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v75 )
                goto LABEL_163;
              v27 = *v5;
              v40 = src;
              v19 = v75;
            }
            else
            {
              v60 = realloc(v19, 32 * v59);
              v40 = (_DWORD *)v5[1];
              v24 = v88;
              v19 = v60;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v60 )
                goto LABEL_161;
              v27 = *v5;
              if ( src != v40 )
                goto LABEL_172;
            }
            v110 = v4;
            v104 = v6;
            v98 = v7;
            v90 = v24;
            memcpy(v19, v40, 32 * v27);
            v27 = *v5;
            v4 = v110;
            v6 = v104;
            v7 = v98;
            v24 = v90;
LABEL_172:
            v5[1] = (unsigned __int64)v19;
LABEL_55:
            if ( v27 <= v26 )
            {
              do
                v19[8 * ++v27 - 8] = 0;
              while ( v27 <= v26 );
              *v5 = v27;
            }
            v28 = &v19[8 * v26];
            if ( !*v28 )
            {
              *v28 = 5;
              v9 = v24;
              v13 = *v24;
              goto LABEL_27;
            }
            if ( *v28 == 5 )
            {
              v13 = *v24;
              v9 = v24;
              goto LABEL_27;
            }
            goto LABEL_132;
          }
LABEL_160:
          v40 = v19;
          goto LABEL_161;
        }
      }
LABEL_131:
      v19 = (_DWORD *)v5[1];
LABEL_132:
      if ( src != v19 )
      {
        srca = v4;
        free(v19);
        v4 = srca;
      }
      v51 = (void *)v4[1];
      if ( (void *)v82 != v51 )
        free(v51);
      *__errno_location() = 22;
      return 0xFFFFFFFFLL;
    }
    v38 = 2 * v6;
    if ( v38 <= v18 )
      v38 = v18 + 1;
    if ( v38 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_160;
    v105 = v4;
    v99 = v38;
    v92 = v7;
    v84 = v14;
    if ( src == v19 )
    {
      v61 = malloc(32 * v38);
      v14 = v84;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v61 )
        goto LABEL_163;
      v20 = *v5;
      v40 = src;
      v19 = v61;
    }
    else
    {
      v39 = realloc(v19, 32 * v38);
      v40 = (_DWORD *)v5[1];
      v14 = v84;
      v19 = v39;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v39 )
        goto LABEL_161;
      v20 = *v5;
      if ( src != v40 )
        goto LABEL_94;
    }
    v109 = v4;
    v103 = v6;
    v97 = v7;
    v89 = v14;
    memcpy(v19, v40, 32 * v20);
    v20 = *v5;
    v4 = v109;
    v6 = v103;
    v7 = v97;
    v14 = v89;
LABEL_94:
    v5[1] = (unsigned __int64)v19;
    goto LABEL_43;
  }
  if ( (unsigned __int8)(v13 - 48) <= 9u )
  {
    *(_QWORD *)(v12 + 24) = v9;
    if ( (unsigned __int8)(*v9 - 48) <= 9u )
    {
      for ( i = v9; ; ++i )
      {
        v55 = (__int64)(i + 1);
        if ( (unsigned __int8)(i[1] - 48) > 9u )
          break;
      }
      v14 = i + 2;
      v56 = v55 - (_QWORD)v9;
      v9 = (char *)v55;
      if ( v79 >= v56 )
        v56 = v79;
      v79 = v56;
    }
    *(_QWORD *)(v12 + 32) = v9;
    v13 = *v9;
  }
LABEL_26:
  if ( v13 == 46 )
    goto LABEL_48;
LABEL_27:
  v15 = 0;
  while ( 2 )
  {
    ++v9;
    if ( v13 == 104 )
    {
      v15 |= 1 << (v15 & 1);
      goto LABEL_34;
    }
    if ( v13 == 76 )
    {
      v15 |= 4u;
      goto LABEL_34;
    }
    if ( v13 == 108 || v13 == 106 || (v13 & 0xDF) == 90 || v13 == 116 )
    {
      v15 += 8;
LABEL_34:
      v13 = *v9;
      continue;
    }
    break;
  }
  switch ( v13 )
  {
    case 37:
      goto LABEL_71;
    case 65:
    case 69:
    case 70:
    case 71:
    case 97:
    case 101:
    case 102:
    case 103:
      v29 = 12;
      if ( v15 <= 15 )
        v29 = ((v15 & 4) != 0) + 11;
      goto LABEL_63;
    case 67:
      v29 = 14;
      v13 = 99;
      goto LABEL_63;
    case 83:
      v29 = 16;
      v13 = 115;
      goto LABEL_63;
    case 88:
    case 111:
    case 117:
    case 120:
      v29 = 10;
      if ( v15 <= 15 && !(v15 & 4) )
      {
        v29 = 8;
        if ( v15 <= 7 )
        {
          v29 = 2;
          if ( !(v15 & 2) )
            v29 = (v15 & 1u) < 1 ? 6 : 4;
        }
      }
      goto LABEL_63;
    case 99:
      v29 = (v15 > 7) + 13;
      goto LABEL_63;
    case 100:
    case 105:
      v29 = 9;
      if ( v15 <= 15 && !(v15 & 4) )
      {
        v29 = 7;
        if ( v15 <= 7 )
        {
          v29 = 1;
          if ( !(v15 & 2) )
            v29 = (v15 & 1u) < 1 ? 5 : 3;
        }
      }
      goto LABEL_63;
    case 110:
      v29 = 22;
      if ( v15 <= 15 && !(v15 & 4) )
      {
        v29 = 21;
        if ( v15 <= 7 )
        {
          v29 = 18;
          if ( !(v15 & 2) )
            v29 = ((v15 & 1) == 0) + 19;
        }
      }
      goto LABEL_63;
    case 112:
      v29 = 17;
      goto LABEL_63;
    case 115:
      v29 = (v15 > 7) + 15;
LABEL_63:
      if ( v11 == -1LL )
      {
        *(_QWORD *)(v12 + 80) = v81;
        if ( v81 == -1LL )
          goto LABEL_131;
        v11 = v81++;
      }
      else
      {
        *(_QWORD *)(v12 + 80) = v11;
      }
      v19 = (_DWORD *)v5[1];
      if ( v6 > v11 )
        goto LABEL_66;
      v52 = 2 * v6;
      if ( v52 <= v11 )
        v52 = v11 + 1;
      if ( v52 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_160;
      v106 = v4;
      v100 = v52;
      v94 = v7;
      v86 = v29;
      if ( src == v19 )
      {
        v53 = malloc(32 * v52);
        v29 = v86;
        v7 = v94;
        v6 = v100;
        v4 = v106;
        if ( !v53 )
          goto LABEL_163;
        goto LABEL_159;
      }
      v53 = realloc(v19, 32 * v52);
      v29 = v86;
      v7 = v94;
      v19 = v53;
      v6 = v100;
      v4 = v106;
      if ( !v53 )
        goto LABEL_211;
      if ( src == (_DWORD *)v5[1] )
      {
        v19 = src;
LABEL_159:
        v57 = v19;
        v107 = v4;
        v101 = v6;
        v19 = v53;
        v95 = v7;
        v87 = v29;
        memcpy(v53, v57, 32 * *v5);
        v4 = v107;
        v29 = v87;
        v6 = v101;
        v7 = v95;
      }
      v5[1] = (unsigned __int64)v19;
LABEL_66:
      v30 = *v5;
      if ( *v5 <= v11 )
      {
        do
          v19[8 * ++v30 - 8] = 0;
        while ( v30 <= v11 );
        *v5 = v30;
      }
      v31 = &v19[8 * v11];
      if ( *v31 )
      {
        if ( *v31 != v29 )
          goto LABEL_132;
      }
      else
      {
        *v31 = v29;
      }
LABEL_71:
      *(_BYTE *)(v12 + 72) = v13;
      v32 = *v4;
      *(_QWORD *)(v12 + 8) = v9;
      v8 = v32 + 1;
      *v4 = v32 + 1;
      if ( v7 > v32 + 1 )
      {
        v3 = (_QWORD *)v4[1];
        goto LABEL_3;
      }
      if ( (v7 & 0x8000000000000000LL) == 0LL )
      {
        v33 = 2 * v7;
        if ( 2 * v7 <= 0x2E8BA2E8BA2E8BALL )
        {
          v34 = (void *)v4[1];
          v91 = v4;
          v83 = v6;
          if ( (void *)v82 == v34 )
          {
            v41 = malloc(176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v41;
            if ( !v41 )
            {
              v40 = (_DWORD *)v5[1];
              if ( src != v40 )
                goto LABEL_162;
              goto LABEL_165;
            }
          }
          else
          {
            v35 = realloc(v34, 176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v35;
            if ( !v35 )
              goto LABEL_211;
            v34 = (void *)v91[1];
            v8 = *v91;
            if ( (void *)v82 != v34 )
              goto LABEL_78;
          }
          v93 = v4;
          v85 = v6;
          v42 = memcpy(v3, v34, 88 * v8);
          v4 = v93;
          v6 = v85;
          v3 = v42;
          v8 = *v93;
LABEL_78:
          v4[1] = v3;
          v7 = v33;
          goto LABEL_3;
        }
      }
LABEL_211:
      v40 = (_DWORD *)v5[1];
LABEL_161:
      if ( src != v40 )
      {
LABEL_162:
        srcb = v4;
        free(v40);
        v4 = srcb;
      }
LABEL_163:
      v58 = (void *)v4[1];
      if ( (void *)v82 != v58 )
        free(v58);
LABEL_165:
      *__errno_location() = 12;
      result = 0xFFFFFFFFLL;
      break;
    default:
      goto LABEL_131;
  }
  return result;
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40DA80(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_6142A8 )
    v1 = (void *)unk_6142A8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40DA98(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_613E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
