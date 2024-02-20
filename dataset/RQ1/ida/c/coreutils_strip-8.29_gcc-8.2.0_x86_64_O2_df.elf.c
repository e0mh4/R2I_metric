__int64 __fastcall main(int a1, char **a2, char **a3)
{
  char v3; // r12
  char *v5; // r13
  int v6; // eax
  char *v7; // r14
  char **v8; // rax
  __int64 v9; // rdx
  char *v10; // r14
  char **v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // r12
  char v15; // r13
  __int64 v16; // rbp
  const char *v17; // r14
  __int64 v18; // rbp
  char *v19; // rax
  __int64 v20; // rdi
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r14
  int v25; // eax
  const char *v26; // rbp
  int *v27; // rax
  int v28; // ebp
  char *v29; // r12
  char *v30; // r13
  int *v31; // rax
  char *v32; // rax
  const char *v33; // rsi
  __int64 v34; // rax
  const char *v35; // rcx
  char *v36; // rbx
  char *v37; // rax
  __int64 v38; // rbp
  char v39; // r14
  const char *v40; // r12
  char *v41; // rax
  char *v42; // r13
  __int64 v43; // r14
  const char *v44; // rbx
  const char **v45; // r15
  char *v46; // rax
  const char *v47; // rcx
  int v48; // eax
  char *v49; // rcx
  size_t v50; // rax
  char *v51; // rax
  __int64 v52; // rbx
  char *v53; // r13
  __int64 v54; // r12
  __dev_t v55; // rax
  void *v56; // rax
  void *v57; // rbx
  int v58; // eax
  int *v59; // r13
  __int64 v60; // rbp
  __int64 v61; // rax
  _QWORD *v62; // rbx
  char v63; // r12
  __int64 i; // rbx
  char *v65; // rsi
  unsigned __int64 v66; // r13
  __int64 v67; // rax
  unsigned __int64 v68; // rbx
  __int64 v69; // r14
  bool v70; // zf
  __int64 v71; // rbp
  __int64 v72; // rax
  char *v73; // r14
  const char *v74; // rdi
  char *IO_write_ptr; // rdx
  char *v76; // rax
  unsigned __int64 v77; // r14
  __int64 v78; // rbp
  unsigned __int64 v79; // r15
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // r10
  char *v82; // rax
  int v83; // eax
  __int64 v84; // rbp
  __int64 v85; // rax
  void *v86; // rdi
  _QWORD *v87; // r13
  __dev_t st_dev; // rax
  char v89; // al
  char *v90; // r13
  unsigned __int8 v91; // r14
  __int64 v92; // rax
  __int64 v93; // r13
  __int64 v94; // r15
  _BYTE *v95; // rdi
  __int64 v96; // rcx
  _BYTE *v97; // rdi
  unsigned __int64 v98; // rsi
  __int64 v99; // rcx
  const char *v100; // r14
  const char *v101; // rax
  __int64 v102; // rbx
  char *v103; // rax
  const char *v104; // rcx
  char *s2; // [rsp+0h] [rbp-158h]
  char *s1; // [rsp+8h] [rbp-150h]
  char *s1a; // [rsp+8h] [rbp-150h]
  char v108; // [rsp+10h] [rbp-148h]
  char *v109; // [rsp+10h] [rbp-148h]
  const char *ptrb; // [rsp+18h] [rbp-140h]
  char *ptr; // [rsp+18h] [rbp-140h]
  void *ptra; // [rsp+18h] [rbp-140h]
  char *name; // [rsp+20h] [rbp-138h]
  unsigned __int64 v114; // [rsp+28h] [rbp-130h]
  __int64 v115; // [rsp+30h] [rbp-128h]
  __int64 v116; // [rsp+38h] [rbp-120h]
  __int64 v117; // [rsp+40h] [rbp-118h]
  char *v118; // [rsp+48h] [rbp-110h]
  __int64 v119; // [rsp+50h] [rbp-108h]
  bool v120; // [rsp+5Fh] [rbp-F9h]
  __int64 v121; // [rsp+60h] [rbp-F8h]
  char *v122; // [rsp+68h] [rbp-F0h]
  __dev_t v123[4]; // [rsp+70h] [rbp-E8h] BYREF
  struct stat stat_buf; // [rsp+90h] [rbp-C8h] BYREF

  v3 = 0;
  s2 = (char *)a2;
  sub_4081C0(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_410F70(sub_4058F0);
  qword_6176D0 = 0LL;
  qword_6176C8 = 0LL;
  byte_6176EE = 0;
  byte_6176EC = 0;
  dword_6176E8 = -1;
  byte_6176B9 = 0;
  byte_6176DD = 0;
  dword_6176D8 = 0;
  byte_6176B8 = 0;
  qword_617680 = 1LL;
  v5 = dcgettext(0LL, "options %s and %s are mutually exclusive", 5);
  while ( 1 )
  {
    LODWORD(stat_buf.st_dev) = -1;
    v6 = sub_40C380((unsigned int)a1, a2, "aB:iF:hHklmPTt:vx:", &off_411380, &stat_buf);
    if ( v6 == -1 )
      break;
    if ( v6 == 105 )
    {
      if ( dword_617660 == 4 )
        goto LABEL_295;
      dword_617660 = 1;
    }
    else if ( v6 <= 105 )
    {
      if ( v6 == 72 )
      {
        dword_6176E8 = 144;
        qword_6176E0 = 1LL;
      }
      else if ( v6 <= 72 )
      {
        if ( v6 == -130 )
          sub_404930(0);
        if ( v6 <= -130 )
        {
          if ( v6 == -131 )
          {
            sub_40A420(
              (_DWORD)stdout,
              (unsigned int)"df",
              (unsigned int)&unk_4110B6,
              (_DWORD)off_617560,
              (unsigned int)"Torbjorn Granlund",
              (unsigned int)"David MacKenzie",
              "Paul Eggert",
              0LL);
            exit(0);
          }
          goto LABEL_47;
        }
        if ( v6 == 66 )
        {
          v13 = sub_407980(nptr);
          if ( v13 )
            sub_40A820(v13, LODWORD(stat_buf.st_dev), 66LL, &off_411380, nptr);
        }
        else
        {
          if ( v6 != 70 )
            goto LABEL_47;
LABEL_31:
          v10 = nptr;
          v11 = (char **)sub_40A560(16LL);
          v12 = qword_6176D0;
          *v11 = v10;
          v11[1] = (char *)v12;
          qword_6176D0 = (__int64)v11;
        }
      }
      else if ( v6 == 84 )
      {
        if ( dword_617660 == 4 )
          goto LABEL_290;
        byte_6176B9 = 1;
      }
      else if ( v6 <= 84 )
      {
        if ( v6 != 80 )
          goto LABEL_47;
        if ( dword_617660 == 4 )
        {
          v104 = "-P";
          goto LABEL_291;
        }
        v3 = 1;
      }
      else if ( v6 == 97 )
      {
        byte_6176EE = 1;
      }
      else
      {
        if ( v6 != 104 )
          goto LABEL_47;
        dword_6176E8 = 176;
        qword_6176E0 = 1LL;
      }
    }
    else if ( v6 != 118 )
    {
      if ( v6 <= 118 )
      {
        if ( v6 == 108 )
        {
          byte_6176ED = 1;
        }
        else if ( v6 <= 108 )
        {
          if ( v6 != 107 )
            goto LABEL_47;
          dword_6176E8 = 0;
          qword_6176E0 = 1024LL;
        }
        else
        {
          if ( v6 != 109 )
          {
            if ( v6 != 116 )
              goto LABEL_47;
            goto LABEL_31;
          }
          dword_6176E8 = 0;
          qword_6176E0 = 0x100000LL;
        }
      }
      else if ( v6 == 129 )
      {
        byte_6176DC = 1;
      }
      else if ( v6 > 129 )
      {
        if ( v6 == 130 )
        {
          byte_6176B8 = 1;
        }
        else
        {
          if ( v6 != 131 )
            goto LABEL_47;
          if ( dword_617660 == 1 )
          {
LABEL_295:
            v104 = "-i";
LABEL_291:
            error(0, 0, v5, v104, "--output");
LABEL_47:
            sub_404930(1);
          }
          if ( !dword_617660 && v3 )
          {
            error(0, 0, v5, "-P", "--output");
            sub_404930(1);
          }
          if ( byte_6176B9 )
          {
LABEL_290:
            v104 = "-T";
            goto LABEL_291;
          }
          dword_617660 = 4;
          if ( nptr )
            sub_404D60(nptr);
        }
      }
      else if ( v6 == 120 )
      {
        v7 = nptr;
        v8 = (char **)sub_40A560(16LL);
        v9 = qword_6176C8;
        *v8 = v7;
        v8[1] = (char *)v9;
        qword_6176C8 = (__int64)v8;
      }
      else
      {
        if ( v6 != 128 )
          goto LABEL_47;
        byte_6176DC = 0;
      }
    }
  }
  if ( dword_6176E8 == -1 )
  {
    if ( v3 )
    {
      dword_6176E8 = 0;
      qword_6176E0 = getenv("POSIXLY_CORRECT") == 0LL ? 1024LL : 512LL;
    }
    else
    {
      v32 = getenv("DF_BLOCK_SIZE");
      sub_407980(v32);
    }
  }
  if ( dword_617660 != 1 && dword_617660 != 4 )
  {
    if ( (dword_6176E8 & 0x10) != 0 )
    {
      dword_617660 = 2;
    }
    else if ( v3 )
    {
      dword_617660 = 3;
    }
  }
  v14 = qword_6176D0;
  v15 = 0;
  if ( qword_6176D0 )
  {
    do
    {
      v16 = qword_6176C8;
      if ( qword_6176C8 )
      {
        v17 = *(const char **)v14;
        while ( strcmp(v17, *(const char **)v16) )
        {
          v16 = *(_QWORD *)(v16 + 8);
          if ( !v16 )
            goto LABEL_68;
        }
        v15 = 1;
        v18 = sub_409DE0(v17);
        v19 = dcgettext(0LL, "file system type %s both selected and excluded", 5);
        error(0, 0, v19, v18);
      }
LABEL_68:
      v14 = *(_QWORD *)(v14 + 8);
    }
    while ( v14 );
    if ( v15 )
      return 1LL;
  }
  if ( dword_6175E0 < a1 )
  {
    v22 = sub_40A560(144LL * (a1 - dword_6175E0));
    v23 = dword_6175E0;
    v121 = v22;
    v24 = v22;
    while ( a1 > (int)v23 )
    {
      if ( __xstat(1, a2[v23], (struct stat *)(v24 + 144LL * ((int)v23 - dword_6175E0))) )
      {
        v26 = (const char *)sub_409C60(0LL, 3LL, a2[v23]);
        v27 = __errno_location();
        error(0, *v27, "%s", v26);
        dword_6176D8 = 1;
        a2[v23] = 0LL;
      }
      else if ( (*(_DWORD *)(v24 + 144LL * ((int)v23 - dword_6175E0) + 24) & 0xF000) != 4096 )
      {
        v25 = open(a2[v23], 256);
        if ( v25 >= 0 )
          close(v25);
      }
      ++v23;
    }
  }
  v20 = 1LL;
  if ( !qword_6176D0 && !qword_6176C8 && !byte_6176B9 && !byte_61737C )
    v20 = (unsigned __int8)byte_6176ED;
  qword_6176C0 = sub_40C670(v20);
  if ( !qword_6176C0 )
  {
    if ( dword_6175E0 >= a1 || byte_6176EE || byte_6176ED || qword_6176D0 || qword_6176C8 )
    {
      v28 = 1;
      v29 = (char *)"";
    }
    else
    {
      v28 = 0;
      v29 = dcgettext(0LL, "Warning: ", 5);
    }
    v30 = dcgettext(0LL, "cannot read table of mounted file systems", 5);
    v31 = __errno_location();
    error(v28, *v31, "%s%s", v29, v30);
  }
  if ( byte_6176DC )
    sync();
  switch ( dword_617660 )
  {
    case 0:
      sub_403E20(0LL, 0LL);
      if ( byte_6176B9 )
        sub_403E20(1LL, 0LL);
      sub_403E20(2LL, 0LL);
      sub_403E20(3LL, 0LL);
      sub_403E20(4LL, 0LL);
      v33 = 0LL;
      goto LABEL_105;
    case 1:
      sub_403E20(0LL, 0LL);
      if ( byte_6176B9 )
        sub_403E20(1LL, 0LL);
      sub_403E20(6LL, 0LL);
      sub_403E20(7LL, 0LL);
      sub_403E20(8LL, 0LL);
      sub_403E20(9LL, 0LL);
      sub_403E20(10LL, 0LL);
      break;
    case 2:
      sub_403E20(0LL, 0LL);
      if ( byte_6176B9 )
        sub_403E20(1LL, 0LL);
      sub_403E20(2LL, "Size");
      sub_403E20(3LL, 0LL);
      sub_403E20(4LL, "Avail");
      v33 = 0LL;
      goto LABEL_105;
    case 3:
      sub_403E20(0LL, 0LL);
      if ( byte_6176B9 )
        sub_403E20(1LL, 0LL);
      sub_403E20(2LL, 0LL);
      sub_403E20(3LL, 0LL);
      sub_403E20(4LL, 0LL);
      v33 = "Capacity";
LABEL_105:
      sub_403E20(5LL, v33);
      sub_403E20(10LL, 0LL);
      break;
    case 4:
      if ( !qword_617650 )
        sub_404D60("source,fstype,itotal,iused,iavail,ipcent,size,used,avail,pcent,file,target");
      break;
    default:
      __assert_fail("!\"invalid header_mode\"", "src/df.c", 0x1F0u, "get_field_list");
  }
  sub_403BA0();
  if ( dword_6175E0 < a1 )
  {
    v34 = dword_6175E0;
    byte_6176EC = 1;
    v115 = dword_6175E0 + 1LL;
    v116 = v115 + (unsigned int)(a1 + ~dword_6175E0);
    goto LABEL_108;
  }
  v63 = byte_6176EE;
  v60 = qword_6176C0;
  v83 = 0;
  while ( v60 )
  {
    v60 = *(_QWORD *)(v60 + 48);
    ++v83;
  }
  qword_6176F0 = (void *)sub_406460(v83, 0LL, sub_4039F0, sub_403A00, j__free);
  if ( !qword_6176F0 )
LABEL_293:
    sub_40A7B0();
  v62 = 0LL;
  if ( qword_6176C0 )
  {
    v84 = qword_6176C0;
    while ( 1 )
    {
      v89 = *(_BYTE *)(v84 + 40);
      if ( (v89 & 2) != 0 )
      {
        if ( byte_6176ED )
          break;
      }
      if ( (v89 & 1) != 0 && !byte_6176EE && !byte_6176EC )
        break;
      v90 = *(char **)(v84 + 24);
      if ( !(unsigned __int8)sub_403A10(v90) )
        break;
      v91 = sub_403A60(v90);
      if ( v91 || __xstat(1, *(const char **)(v84 + 8), &stat_buf) == -1 )
        break;
      if ( !qword_6176F0 )
        goto LABEL_247;
      v123[0] = stat_buf.st_dev;
      v92 = sub_4061F0(qword_6176F0, v123);
      v93 = v92;
      if ( !v92 )
        goto LABEL_247;
      v94 = *(_QWORD *)(v92 + 8);
      v95 = *(_BYTE **)(v94 + 16);
      if ( v95 && *(_QWORD *)(v84 + 16) )
      {
        v96 = -1LL;
        do
        {
          if ( !v96 )
            break;
          v70 = *v95++ == v91;
          --v96;
        }
        while ( !v70 );
        v97 = *(_BYTE **)(v84 + 16);
        v98 = -v96 - 2;
        v99 = -1LL;
        do
        {
          if ( !v99 )
            break;
          v70 = *v97++ == v91;
          --v99;
        }
        while ( !v70 );
        LODWORD(s2) = v98 < -v99 - 2;
      }
      else
      {
        LODWORD(s2) = 0;
      }
      v100 = *(const char **)v84;
      if ( !byte_6176B8
        && (*(_BYTE *)(v84 + 40) & 2) != 0
        && (*(_BYTE *)(v94 + 40) & 2) != 0
        && strcmp(*(const char **)v94, *(const char **)v84) )
      {
        goto LABEL_247;
      }
      if ( (!strchr(v100, 47) || strchr(*(const char **)v94, 47))
        && (strlen(*(const char **)(v94 + 8)) <= strlen(*(const char **)(v84 + 8)) || (_DWORD)s2)
        && ((v109 = *(char **)(v84 + 8), s2 = *(char **)(v94 + 8), !strcmp(*(const char **)v94, v100))
         || strcmp(v109, s2)) )
      {
        v94 = v84;
      }
      else
      {
        *(_QWORD *)(v93 + 8) = v84;
      }
      v84 = *(_QWORD *)(v84 + 48);
      if ( !v63 )
        sub_40C620((void *)v94);
LABEL_249:
      if ( !v84 )
      {
        v60 = 0LL;
        goto LABEL_184;
      }
    }
    stat_buf.st_dev = *(_QWORD *)(v84 + 32);
LABEL_247:
    v85 = sub_40A560(24LL);
    v86 = qword_6176F0;
    v87 = (_QWORD *)v85;
    *(_QWORD *)(v85 + 8) = v84;
    st_dev = stat_buf.st_dev;
    v87[2] = v62;
    *v87 = st_dev;
    if ( !sub_406C00(v86, v87) )
      goto LABEL_293;
    v84 = *(_QWORD *)(v84 + 48);
    v62 = v87;
    goto LABEL_249;
  }
LABEL_184:
  if ( !v63 )
  {
    qword_6176C0 = 0LL;
    while ( v62 )
    {
      v61 = v62[1];
      v62 = (_QWORD *)v62[2];
      v63 = 1;
      *(_QWORD *)(v61 + 48) = v60;
      v60 = v61;
    }
    if ( v63 )
      qword_6176C0 = v60;
    sub_4066A0(qword_6176F0);
    qword_6176F0 = 0LL;
  }
  for ( i = qword_6176C0; i; i = *(_QWORD *)(i + 48) )
    sub_403F10(*(char **)i, *(void **)(i + 8), (*(_BYTE *)(i + 40) & 2) != 0, 0LL, 1);
LABEL_194:
  if ( !byte_6176DD )
  {
    if ( dword_6176D8 )
      return (unsigned int)dword_6176D8;
    v82 = dcgettext(0LL, "no file systems processed", 5);
    error(1, 0, v82);
LABEL_235:
    s1 = name;
LABEL_114:
    v38 = qword_6176C0;
    if ( !qword_6176C0 )
    {
      free(v122);
      goto LABEL_136;
    }
    v119 = 0LL;
    v39 = 0;
    v114 = -1LL;
    v108 = 0;
    while ( 1 )
    {
      v40 = *(const char **)v38;
      v41 = canonicalize_file_name(*(const char **)v38);
      v42 = v41;
      if ( v41 && *v41 == 47 )
        v40 = v41;
      if ( strcmp(s1, v40) )
        goto LABEL_133;
      v43 = qword_6176C0;
      v44 = *(const char **)(v38 + 8);
      v45 = 0LL;
      if ( !qword_6176C0 )
        goto LABEL_168;
      do
      {
        if ( !strcmp(*(const char **)(v43 + 8), v44) )
          v45 = (const char **)v43;
        v43 = *(_QWORD *)(v43 + 48);
      }
      while ( v43 );
      if ( !v45 )
        goto LABEL_168;
      v46 = canonicalize_file_name(*v45);
      v47 = v46;
      if ( !v46 || *v46 != 47 )
      {
        free(v46);
        v47 = (const char *)sub_40A790((void *)*v45);
        if ( !v47 )
          break;
      }
      ptrb = v47;
      v48 = strcmp(v47, v40);
      v49 = (char *)ptrb;
      if ( v48 )
      {
        v39 = 1;
        goto LABEL_132;
      }
      v44 = *(const char **)(v38 + 8);
LABEL_130:
      ptr = v49;
      v50 = strlen(v44);
      v49 = ptr;
      v39 = (v114 > v50) | v108 ^ 1;
      if ( v39 )
      {
        v118 = ptr;
        v120 = v114 > v50;
        ptra = (void *)v50;
        v58 = __xstat(1, v44, &stat_buf);
        v49 = v118;
        if ( !v58 )
          goto LABEL_173;
        if ( v108 != 1 && v120 )
        {
          v39 = 0;
LABEL_173:
          if ( ptra == (void *)1 )
          {
            free(v118);
            free(v42);
            free(v122);
            v119 = v38;
            goto LABEL_232;
          }
          v114 = (unsigned __int64)ptra;
          v119 = v38;
        }
        else
        {
          v39 = v108;
        }
        v108 = v39;
        v39 = 0;
        goto LABEL_132;
      }
      v108 = 1;
LABEL_132:
      free(v49);
LABEL_133:
      free(v42);
      v38 = *(_QWORD *)(v38 + 48);
      if ( !v38 )
      {
        free(v122);
        if ( v119 )
        {
LABEL_232:
          sub_403F10(*(char **)v119, *(void **)(v119 + 8), (*(_BYTE *)(v119 + 40) & 2) != 0, 0LL, 0);
          goto LABEL_164;
        }
        if ( !v39 )
          goto LABEL_136;
        v102 = sub_409B90(4LL, name);
        v103 = dcgettext(0LL, "cannot access %s: over-mounted by another device", 5);
        error(0, 0, v103, v102);
        dword_6176D8 = 1;
LABEL_164:
        while ( 2 )
        {
          v34 = v115;
          if ( v116 != v115 )
          {
            ++v115;
LABEL_108:
            v35 = *(const char **)&s2[8 * v34];
            v36 = (char *)v35;
            name = (char *)v35;
            if ( !v35 )
              continue;
            v117 = v121 + 144LL * ((int)v34 - dword_6175E0);
            if ( (*(_DWORD *)(v117 + 24) & 0xB000) == 0x2000 )
            {
              v37 = canonicalize_file_name(v35);
              v122 = v37;
              if ( !v37 )
                goto LABEL_235;
              if ( *v37 != 47 )
                v37 = v36;
              s1 = v37;
              goto LABEL_114;
            }
LABEL_136:
            v51 = canonicalize_file_name(name);
            v52 = qword_6176C0;
            v53 = v51;
            if ( v51 && *v51 == 47 )
            {
              v77 = strlen(v51);
              if ( qword_6176C0 )
              {
                v78 = qword_6176C0;
                v79 = 0LL;
                v54 = 0LL;
                do
                {
                  if ( strcmp(*(const char **)(v78 + 24), "lofs")
                    && (!v54 || (*(_BYTE *)(v54 + 40) & 1) != 0 || (*(_BYTE *)(v78 + 40) & 1) == 0) )
                  {
                    v80 = strlen(*(const char **)(v78 + 8)) + 1;
                    v81 = v80 - 1;
                    if ( v80 - 1 >= v79 && v77 >= v81 )
                    {
                      if ( v80 == 2 )
                      {
                        v79 = 1LL;
                        v54 = v78;
                      }
                      else if ( v77 == v81 || v53[v80 - 1] == 47 )
                      {
                        s1a = (char *)(v80 - 1);
                        if ( !strncmp(*(const char **)(v78 + 8), v53, v80 - 1) )
                        {
                          v79 = (unsigned __int64)s1a;
                          v54 = v78;
                        }
                      }
                    }
                  }
                  v78 = *(_QWORD *)(v78 + 48);
                }
                while ( v78 );
                free(v53);
                if ( !v54 || __xstat(1, *(const char **)(v54 + 8), &stat_buf) || stat_buf.st_dev != *(_QWORD *)v117 )
                {
LABEL_139:
                  v54 = 0LL;
                  do
                  {
                    v55 = *(_QWORD *)(v52 + 32);
                    if ( v55 == -1LL )
                    {
                      if ( __xstat(1, *(const char **)(v52 + 8), &stat_buf) )
                      {
                        v59 = __errno_location();
                        if ( *v59 == 5 )
                        {
                          v101 = (const char *)sub_409C60(0LL, 3LL, *(_QWORD *)(v52 + 8));
                          error(0, *v59, "%s", v101);
                          dword_6176D8 = 1;
                        }
                        *(_QWORD *)(v52 + 32) = -2LL;
                        v55 = -2LL;
                      }
                      else
                      {
                        v55 = stat_buf.st_dev;
                        *(_QWORD *)(v52 + 32) = stat_buf.st_dev;
                      }
                    }
                    if ( *(_QWORD *)v117 == v55
                      && strcmp(*(const char **)(v52 + 24), "lofs")
                      && (!v54 || (*(_BYTE *)(v54 + 40) & 1) != 0 || (*(_BYTE *)(v52 + 40) & 1) == 0) )
                    {
                      if ( !__xstat(1, *(const char **)(v52 + 8), &stat_buf) && stat_buf.st_dev == *(_QWORD *)(v52 + 32) )
                        v54 = v52;
                      else
                        *(_QWORD *)(v52 + 32) = -2LL;
                    }
                    v52 = *(_QWORD *)(v52 + 48);
                  }
                  while ( v52 );
                  if ( !v54 )
                    goto LABEL_162;
                }
                sub_403F10(*(char **)v54, *(void **)(v54 + 8), (*(_BYTE *)(v54 + 40) & 2) != 0, 0LL, 0);
                continue;
              }
              free(v51);
            }
            else
            {
              free(v51);
              if ( v52 )
                goto LABEL_139;
            }
LABEL_162:
            v56 = (void *)sub_404ED0(name);
            v57 = v56;
            if ( v56 )
            {
              sub_403F10(0LL, v56, 0, 0LL, 0);
              free(v57);
            }
            continue;
          }
          goto LABEL_194;
        }
      }
    }
    v44 = *(const char **)(v38 + 8);
LABEL_168:
    v49 = 0LL;
    goto LABEL_130;
  }
  if ( byte_6176B8 )
  {
    v65 = "-";
    if ( !byte_61734C )
      v65 = "total";
    sub_403F10("total", v65, 0, (__int64)&qword_617680, 0);
  }
  if ( qword_617640 )
  {
    v66 = 0LL;
    do
    {
      v67 = qword_617650;
      if ( qword_617650 )
      {
        v68 = 0LL;
        v69 = **(_QWORD **)(qword_617648 + 8 * v66);
        while ( 1 )
        {
          v70 = v68 == v67 - 1;
          v71 = 8 * v68;
          v72 = *(_QWORD *)(qword_617658 + 8 * v68);
          stat_buf.st_dev = *(_QWORD *)(v72 + 32);
          v73 = (char *)sub_407F30(v69, &stat_buf, *(unsigned int *)(v72 + 40), 8 * (unsigned int)v70);
          v74 = v73;
          if ( !v73 )
            v74 = *(const char **)(*(_QWORD *)(qword_617648 + 8 * v66) + 8 * v68);
          fputs_unlocked(v74, stdout);
          ++v68;
          free(v73);
          v67 = qword_617650;
          if ( v68 >= qword_617650 )
            break;
          v69 = *(_QWORD *)(*(_QWORD *)(qword_617648 + 8 * v66) + v71 + 8);
          if ( v68 )
          {
            IO_write_ptr = stdout->_IO_write_ptr;
            if ( IO_write_ptr >= stdout->_IO_write_end )
            {
              __overflow(stdout, 32);
              v67 = qword_617650;
            }
            else
            {
              stdout->_IO_write_ptr = IO_write_ptr + 1;
              *IO_write_ptr = 32;
            }
          }
        }
      }
      v76 = stdout->_IO_write_ptr;
      if ( v76 >= stdout->_IO_write_end )
      {
        __overflow(stdout, 10);
      }
      else
      {
        stdout->_IO_write_ptr = v76 + 1;
        *v76 = 10;
      }
      ++v66;
    }
    while ( v66 < qword_617640 );
  }
  return (unsigned int)dword_6176D8;
}

// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void))
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

void *sub_40393B()
{
  return &unk_6175F0;
}

__int64 sub_40395A()
{
  return 0LL;
}

void *sub_403991()
{
  void *result; // rax

  if ( !byte_617628 )
  {
    while ( qword_617630 < (unsigned __int64)(&qword_616E48 - qword_616E40 - 1) )
      ((void (*)(void))qword_616E40[++qword_617630])();
    result = sub_40393B();
    byte_617628 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_4039E8()
{
  return sub_40395A();
}

unsigned __int64 __fastcall sub_4039F0(_QWORD *a1, unsigned __int64 a2)
{
  return *a1 % a2;
}

bool __fastcall sub_403A00(_QWORD *a1, _QWORD *a2)
{
  return *a1 == *a2;
}

__int64 __fastcall sub_403A10(char *s1)
{
  unsigned int v1; // r12d
  __int64 v2; // rbx

  v2 = qword_6176D0;
  LOBYTE(v1) = qword_6176D0 == 0 || s1 == 0LL;
  if ( (_BYTE)v1 )
    return v1;
  while ( strcmp(s1, *(const char **)v2) )
  {
    v2 = *(_QWORD *)(v2 + 8);
    if ( !v2 )
      return v1;
  }
  return 1LL;
}

__int64 __fastcall sub_403A60(char *s1)
{
  unsigned int v1; // r12d
  __int64 v2; // rbx

  v2 = qword_6176C8;
  LOBYTE(v1) = qword_6176C8 == 0 || s1 == 0LL;
  if ( (_BYTE)v1 )
    return 0LL;
  while ( strcmp(s1, *(const char **)v2) )
  {
    v2 = *(_QWORD *)(v2 + 8);
    if ( !v2 )
      return v1;
  }
  return 1LL;
}

// attributes: thunk
void j__free(void *ptr)
{
  free(ptr);
}

__int64 sub_403AD0()
{
  __int64 v0; // rdi
  __int64 v1; // rsi
  __int64 *v2; // rbx
  __int64 result; // rax

  v0 = qword_617648;
  ++qword_617640;
  v1 = 8 * qword_617640;
  if ( (qword_617640 & 0x1000000000000000LL) != 0
    || (unsigned __int64)qword_617640 >> 61
    || (qword_617648 = sub_40A5C0(qword_617648, v1),
        v2 = (__int64 *)(qword_617648 + 8 * qword_617640 - 8),
        v0 = 8 * qword_617650,
        (qword_617650 & 0x1000000000000000LL) != 0)
    || (unsigned __int64)qword_617650 >> 61 )
  {
    sub_40A7B0(v0, v1);
  }
  result = sub_40A560(v0);
  *v2 = result;
  return result;
}

unsigned __int8 *__fastcall sub_403B50(unsigned __int8 *a1)
{
  __int64 v1; // rbx
  const unsigned __int16 **v2; // rax
  _BYTE *v3; // rdx

  v1 = *a1;
  if ( (_BYTE)v1 )
  {
    v2 = __ctype_b_loc();
    v3 = a1;
    do
    {
      if ( ((*v2)[v1] & 2) != 0 )
        *v3 = 63;
      v1 = (unsigned __int8)*++v3;
    }
    while ( (_BYTE)v1 );
  }
  return a1;
}

__int64 sub_403BA0()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rbp
  unsigned __int8 *v3; // rdi
  char *v4; // rdi
  unsigned __int64 v5; // r13
  __int64 v6; // rcx
  bool v7; // cc
  __int64 v8; // r13
  char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char *v13; // r14
  __int16 v14; // r9
  int v15; // r13d
  int v16; // r8d
  int v17; // r9d
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rsi
  __int16 v20; // ax
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  bool v23; // al
  __int64 v24; // rdx
  char v25; // [rsp+0h] [rbp-2C8h]
  char *s; // [rsp+8h] [rbp-2C0h] BYREF
  char v27[696]; // [rsp+10h] [rbp-2B8h] BYREF

  result = sub_403AD0();
  v1 = qword_617658;
  if ( qword_617650 )
  {
    v2 = 0LL;
    do
    {
      s = 0LL;
      v8 = v1 + 8 * v2;
      v9 = *(char **)(*(_QWORD *)v8 + 24LL);
      v13 = dcgettext(0LL, v9, 5);
      if ( **(_DWORD **)v8 == 2 )
      {
        v14 = dword_6176E8;
        switch ( dword_617660 )
        {
          case 0:
            goto LABEL_18;
          case 4:
            v14 = dword_6176E8;
            if ( (dword_6176E8 & 0x10) == 0 )
            {
LABEL_18:
              v18 = qword_6176E0;
              v19 = qword_6176E0;
              do
              {
                v20 = v18;
                v18 >>= 10;
                v21 = v20 & 0x3FF;
                v22 = v19 % 0x3E8;
                v19 /= 0x3E8uLL;
              }
              while ( !(v21 | v22) );
              v23 = v21 == 0;
              if ( (unsigned __int8)(v22 == 0) < (unsigned __int8)v23 )
              {
                v24 = v14 & 0x124;
                LOBYTE(v24) = v14 & 4 | 0xB8;
                goto LABEL_22;
              }
              if ( (unsigned __int8)(v22 == 0) > (unsigned __int8)v23 )
              {
                v24 = v14 & 0x104;
                LOBYTE(v24) = v14 & 4 | 0x98;
                goto LABEL_27;
              }
              v24 = v14 & 0x124;
              LOBYTE(v24) = v14 & 0x24 | 0x98;
LABEL_22:
              if ( (v24 & 0x20) == 0 )
LABEL_27:
                BYTE1(v24) |= 1u;
              v15 = sub_406FB0(qword_6176E0, v27, v24, 1LL, 1LL);
              LODWORD(v13) = (unsigned int)dcgettext(0LL, "blocks", 5);
LABEL_13:
              v9 = dcgettext(0LL, "%s-%s", 5);
              if ( (unsigned int)sub_40ACF0((unsigned int)&s, (_DWORD)v9, v15, (_DWORD)v13, v16, v17, v25) == -1 )
                s = 0LL;
              v3 = (unsigned __int8 *)s;
              goto LABEL_4;
            }
            break;
          case 3:
            v15 = sub_407B40(qword_6176E0, v27, v10, v11, v12, (unsigned int)dword_6176E8);
            goto LABEL_13;
        }
      }
      s = strdup(v13);
      v3 = (unsigned __int8 *)s;
LABEL_4:
      if ( !v3 )
        sub_40A7B0(0LL, v9);
      sub_403B50(v3);
      v4 = s;
      *(_QWORD *)(*(_QWORD *)(qword_617648 + 8 * qword_617640 - 8) + 8 * v2) = s;
      v5 = *(_QWORD *)(*(_QWORD *)(qword_617658 + 8 * v2) + 32LL);
      if ( v5 <= (int)sub_408190(v4) )
      {
        LODWORD(result) = sub_408190(s);
        v1 = qword_617658;
        result = (int)result;
        v6 = *(_QWORD *)(qword_617658 + 8 * v2);
      }
      else
      {
        v1 = qword_617658;
        v6 = *(_QWORD *)(qword_617658 + 8 * v2);
        result = *(_QWORD *)(v6 + 32);
      }
      v7 = qword_617650 <= (unsigned __int64)++v2;
      *(_QWORD *)(v6 + 32) = result;
    }
    while ( !v7 );
  }
  return result;
}

__int64 __fastcall sub_403E20(int a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 result; // rax

  ++qword_617650;
  v3 = 8 * qword_617650;
  if ( (qword_617650 & 0x1000000000000000LL) != 0 || (unsigned __int64)qword_617650 >> 61 )
    sub_40A7B0(qword_617658, v3);
  qword_617658 = sub_40A5C0(qword_617658, v3);
  *(_QWORD *)(qword_617658 + 8 * qword_617650 - 8) = 48LL * a1 + 6386464;
  if ( a2 )
    *((_QWORD *)&unk_617338 + 6 * a1) = a2;
  result = 48LL * a1 + 6386464;
  if ( byte_61734C[48 * a1] )
    __assert_fail("!\"field used\"", "src/df.c", 0x164u, "alloc_field");
  byte_61734C[48 * a1] = 1;
  return result;
}

_BYTE *__fastcall sub_403ED0(unsigned __int8 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  _BYTE *result; // rax

  v6 = a1 + a3;
  if ( !a1 )
    return (_BYTE *)sub_406FB0(a2, v6, (unsigned int)dword_6176E8, a4, a5);
  result = (_BYTE *)(sub_406FB0(-a2, v6, (unsigned int)dword_6176E8, a4, a5) - 1);
  *result = 45;
  return result;
}

void __fastcall sub_403F10(
        char *s2,
        __int64 *src,
        char *a3,
        char *a4,
        char *a5,
        char a6,
        char a7,
        const __m128i *a8,
        char a9)
{
  __int64 *v10; // r14
  char *v11; // r13
  char *v14; // rdi
  const char *v15; // rax
  const char *v16; // rbx
  size_t v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // r8
  __int32 v20; // r9d
  char v21; // al
  __int64 v22; // rbx
  __int64 v23; // rdx
  _DWORD *v24; // rdx
  __int64 v25; // rbp
  int v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  char *v29; // rdi
  char *p_s; // rdi
  unsigned __int64 v31; // r12
  __int64 v32; // rcx
  __int64 v33; // rax
  bool v34; // cc
  signed __int64 v35; // rdx
  unsigned __int64 v36; // rsi
  unsigned __int8 v37; // dl
  unsigned __int64 v38; // rsi
  char v39; // di
  double v40; // xmm0_8
  double v41; // xmm1_8
  double v42; // xmm1_8
  double v43; // xmm1_8
  double v44; // xmm0_8
  double v45; // xmm1_8
  double v46; // xmm0_8
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  int *v51; // rax
  int *v52; // rbx
  int v53; // eax
  const char *v54; // rax
  __int64 v55; // rbx
  char v56; // cl
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // r12
  unsigned __int64 v60; // rax
  void *ptr; // [rsp+0h] [rbp-3B8h]
  char *s; // [rsp+28h] [rbp-390h] BYREF
  __m128i si128; // [rsp+30h] [rbp-388h]
  __m128i v64; // [rsp+40h] [rbp-378h]
  __m128i v65; // [rsp+50h] [rbp-368h]
  unsigned __int64 v66; // [rsp+60h] [rbp-358h]
  __int64 v67[4]; // [rsp+70h] [rbp-348h] BYREF
  char v68; // [rsp+90h] [rbp-328h]
  __int64 v69; // [rsp+98h] [rbp-320h]
  __int64 v70; // [rsp+A0h] [rbp-318h]
  bool v71; // [rsp+A8h] [rbp-310h]
  __int64 v72[4]; // [rsp+B0h] [rbp-308h] BYREF
  char v73; // [rsp+D0h] [rbp-2E8h]
  unsigned __int64 v74; // [rsp+D8h] [rbp-2E0h]
  unsigned __int64 v75; // [rsp+E0h] [rbp-2D8h]
  bool v76; // [rsp+E8h] [rbp-2D0h]
  struct stat stat_buf; // [rsp+F0h] [rbp-2C8h] BYREF

  v10 = src;
  v11 = a5;
  if ( a7 && byte_6176ED )
    return;
  if ( a6 && !byte_6176EE && !byte_6176EC )
    return;
  if ( !(unsigned __int8)sub_403A10(a5) )
    return;
  v14 = v11;
  if ( (unsigned __int8)sub_403A60(v11) )
    return;
  if ( !src || a8 )
  {
    if ( !a4 )
    {
      a4 = (char *)src;
      if ( !src )
        a4 = s2;
    }
    if ( a8 )
    {
      si128 = _mm_load_si128(a8);
      v28 = a8[3].m128i_u64[0];
      v64 = _mm_load_si128(a8 + 1);
      v65 = _mm_load_si128(a8 + 2);
      v66 = v28;
      if ( !si128.m128i_i64[1] && !byte_6176EE && !byte_6176EC )
        return;
      goto LABEL_19;
    }
  }
  else
  {
    if ( *(_BYTE *)src != 47 )
      return;
    if ( !a4 )
      a4 = (char *)src;
  }
  src = (__int64 *)s2;
  v14 = a4;
  if ( !(unsigned int)sub_40B070(a4) )
  {
    if ( a9 )
    {
      if ( !byte_6176EE )
      {
        if ( !si128.m128i_i64[1] )
          goto LABEL_17;
        goto LABEL_18;
      }
      src = (__int64 *)a4;
      v14 = (char *)1;
      if ( !__xstat(1, a4, &stat_buf) )
      {
        v14 = (char *)qword_6176F0;
        if ( qword_6176F0 )
        {
          src = v72;
          v72[0] = stat_buf.st_dev;
          v58 = sub_4061F0(qword_6176F0, v72);
          if ( v58 )
          {
            v59 = *(_QWORD *)(v58 + 8);
            if ( v59 )
            {
              v14 = *(char **)v59;
              src = (__int64 *)s2;
              if ( strcmp(*(const char **)v59, s2) )
              {
                if ( (*(_BYTE *)(v59 + 40) & 2) == 0 || !a7 )
                {
                  v65.m128i_i8[0] = 0;
                  v11 = "-";
                  v66 = -1LL;
                  v65.m128i_i64[1] = -1LL;
                  v64.m128i_i64[1] = -1LL;
                  v64.m128i_i64[0] = -1LL;
                  si128.m128i_i64[1] = -1LL;
                  si128.m128i_i64[0] = -1LL;
                }
              }
            }
          }
        }
      }
    }
    if ( !si128.m128i_i64[1] && !byte_6176EE )
    {
LABEL_17:
      if ( !byte_6176EC )
        return;
    }
LABEL_18:
    byte_6176DD = 1;
LABEL_19:
    sub_403AD0(v14, src);
    if ( !s2 )
      s2 = "-";
    if ( !a3 )
      a3 = "-";
    v15 = (const char *)sub_40A790(s2);
    v16 = v15;
    ptr = (void *)v15;
    if ( a9 )
    {
      v17 = strlen(v15);
      if ( v17 > 0x24 && strspn(&v16[v17 - 36], "-0123456789abcdefABCDEF") == 36 )
      {
        v55 = sub_405250(ptr);
        if ( v55 )
        {
          free(ptr);
          ptr = (void *)v55;
        }
      }
    }
    v18 = v65.m128i_i64[1];
    if ( !v11 )
      v11 = "-";
    v73 = 0;
    v72[1] = 1LL;
    v72[0] = 1LL;
    v72[2] = v65.m128i_i64[1];
    v74 = v66;
    v72[3] = v66;
    v75 = -1LL;
    v76 = 0;
    if ( v65.m128i_i64[1] <= 0xFFFFFFFFFFFFFFFDLL && v66 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v75 = v65.m128i_i64[1] - v66;
      v76 = v65.m128i_i64[1] < v66;
    }
    LODWORD(v19) = v64.m128i_i32[2];
    v70 = -1LL;
    v20 = si128.m128i_i32[0];
    v71 = 0;
    v67[1] = qword_6176E0;
    v21 = v65.m128i_i8[0] & (v64.m128i_i64[1] <= 0xFFFFFFFFFFFFFFFDLL);
    v67[2] = si128.m128i_i64[1];
    v67[0] = si128.m128i_i64[0];
    v67[3] = v64.m128i_i64[1];
    v69 = v64.m128i_i64[0];
    v68 = v21;
    if ( si128.m128i_i64[1] <= 0xFFFFFFFFFFFFFFFDLL && v64.m128i_i64[0] <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v70 = si128.m128i_i64[1] - v64.m128i_i64[0];
      v71 = si128.m128i_i64[1] < (unsigned __int64)v64.m128i_i64[0];
    }
    if ( byte_6176B8 && !a8 )
    {
      if ( v65.m128i_i64[1] <= 0xFFFFFFFFFFFFFFFDLL )
        qword_6176A8 += v65.m128i_i64[1];
      if ( v66 <= 0xFFFFFFFFFFFFFFFDLL )
        qword_6176B0 += v66;
      if ( si128.m128i_i64[1] <= 0xFFFFFFFFFFFFFFFDLL )
        qword_617688 += si128.m128i_i64[0] * si128.m128i_i64[1];
      if ( v64.m128i_i64[0] <= 0xFFFFFFFFFFFFFFFDLL )
        qword_617690 += si128.m128i_i64[0] * v64.m128i_i64[0];
      if ( v64.m128i_i64[1] <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v56 = byte_6176A0;
        v19 = si128.m128i_i64[0] * v64.m128i_i64[1];
        if ( byte_6176A0 == v21 )
        {
          v19 += qword_617698;
          qword_617698 = v19;
        }
        else
        {
          v57 = -qword_617698;
          if ( !byte_6176A0 )
            v57 = qword_617698;
          v18 = -(__int64)v19;
          if ( v21 )
            v19 = -(__int64)v19;
          if ( v57 <= v19 )
          {
            v19 -= v57;
            byte_6176A0 = v65.m128i_i8[0] & (v64.m128i_i64[1] <= 0xFFFFFFFFFFFFFFFDLL);
            v56 = v65.m128i_i8[0] & (v64.m128i_i64[1] <= 0xFFFFFFFFFFFFFFFDLL);
            qword_617698 = v19;
          }
          else
          {
            qword_617698 = v57 - v19;
          }
          if ( v56 )
            qword_617698 = -qword_617698;
        }
      }
    }
    v22 = 0LL;
    v23 = qword_617658;
    if ( qword_617650 )
    {
      while ( 2 )
      {
        v24 = *(_DWORD **)(v23 + 8 * v22);
        v25 = 8 * v22;
        v26 = v24[4];
        if ( v26 == 1 )
        {
          v27 = (unsigned __int64)v72;
        }
        else if ( v26 )
        {
          if ( v26 != 2 )
            __assert_fail("!\"bad field_type\"", "src/df.c", 0x435u, "get_dev");
          v27 = 0LL;
        }
        else
        {
          v27 = (unsigned __int64)v67;
        }
        switch ( *v24 )
        {
          case 0:
            p_s = (char *)sub_40A790(ptr);
            s = p_s;
            goto LABEL_49;
          case 1:
            p_s = (char *)sub_40A790(v11);
            s = p_s;
            goto LABEL_49;
          case 2:
          case 6:
            v38 = *(_QWORD *)(v27 + 16);
            v29 = "-";
            if ( v38 <= 0xFFFFFFFFFFFFFFFDLL )
              v29 = sub_403ED0(0, v38, (__int64)&stat_buf, *(_QWORD *)v27, *(_QWORD *)(v27 + 8));
            goto LABEL_48;
          case 3:
          case 7:
            v36 = *(_QWORD *)(v27 + 48);
            v37 = *(_BYTE *)(v27 + 56);
            if ( v36 <= 0xFFFFFFFFFFFFFFFDLL )
              goto LABEL_60;
            goto LABEL_59;
          case 4:
          case 8:
            v36 = *(_QWORD *)(v27 + 24);
            v37 = *(_BYTE *)(v27 + 32);
            if ( v36 <= 0xFFFFFFFFFFFFFFFDLL )
              goto LABEL_60;
LABEL_59:
            v29 = "-";
            if ( v37 )
LABEL_60:
              v29 = sub_403ED0(v37, v36, (__int64)&stat_buf, *(_QWORD *)v27, *(_QWORD *)(v27 + 8));
LABEL_48:
            s = (char *)sub_40A790(v29);
            p_s = s;
LABEL_49:
            if ( !p_s )
              __assert_fail("!\"empty cell\"", "src/df.c", 0x49Fu, "get_dev");
            goto LABEL_50;
          case 5:
          case 9:
            v35 = *(_QWORD *)(v27 + 48);
            if ( (unsigned __int64)v35 > 0xFFFFFFFFFFFFFFFDLL )
              goto LABEL_55;
            v18 = *(_QWORD *)(v27 + 24);
            if ( (unsigned __int64)v18 > 0xFFFFFFFFFFFFFFFDLL )
              goto LABEL_55;
            v39 = *(_BYTE *)(v27 + 32);
            if ( *(_BYTE *)(v27 + 56) )
            {
              v35 = -v35;
              if ( v35 < 0 )
              {
                v48 = v35;
                LODWORD(v35) = v35 & 1;
                v46 = (double)(int)(v35 | (v48 >> 1)) + (double)(int)(v35 | (v48 >> 1));
              }
              else
              {
                v46 = (double)(int)v35;
              }
              v40 = -v46;
            }
            else
            {
              if ( (unsigned __int64)v35 <= 0x28F5C28F5C28F5CLL )
              {
                v27 = v18 + v35;
                if ( v18 + v35 )
                {
                  if ( v39 == __CFADD__(v18, v35) )
                  {
                    v35 = 100 * v35 / v27 + (100 * v35 % v27 != 0);
                    if ( v35 < 0 )
                    {
                      v60 = v35;
                      LODWORD(v35) = v35 & 1;
                      v44 = (double)(int)(v35 | (v60 >> 1)) + (double)(int)(v35 | (v60 >> 1));
                    }
                    else
                    {
                      v44 = (double)(int)v35;
                    }
                    goto LABEL_85;
                  }
                }
              }
              if ( v35 < 0 )
              {
                v49 = v35;
                LODWORD(v35) = v35 & 1;
                v40 = (double)(int)(v35 | (v49 >> 1)) + (double)(int)(v35 | (v49 >> 1));
              }
              else
              {
                v40 = (double)(int)v35;
              }
            }
            if ( v39 )
            {
              v18 = -v18;
              if ( v18 < 0 )
              {
                v47 = v18;
                v18 &= 1u;
                v41 = (double)(int)(v18 | (v47 >> 1)) + (double)(int)(v18 | (v47 >> 1));
              }
              else
              {
                v41 = (double)(int)v18;
              }
              v42 = -v41;
            }
            else if ( v18 < 0 )
            {
              v50 = v18;
              v18 &= 1u;
              v42 = (double)(int)(v18 | (v50 >> 1)) + (double)(int)(v18 | (v50 >> 1));
            }
            else
            {
              v42 = (double)(int)v18;
            }
            v43 = v42 + v40;
            if ( v43 == 0.0 )
            {
LABEL_55:
              s = strdup("-");
              p_s = s;
              goto LABEL_56;
            }
            v44 = v40 * 100.0 / v43;
            v45 = (double)(int)v44;
            if ( v44 > v45 - 1.0 && v45 + 1.0 >= v44 )
            {
              if ( v44 > v45 )
                v44 = v45 + 1.0;
              else
                v44 = v45 + 0.0;
            }
LABEL_85:
            if ( v44 < 0.0 )
              goto LABEL_55;
            v18 = (__int64)"%.0f%%";
            p_s = (char *)&s;
            if ( (unsigned int)sub_40ACF0((unsigned int)&s, (unsigned int)"%.0f%%", v35, v27, v19, v20, (char)ptr) == -1 )
            {
              s = 0LL;
LABEL_89:
              sub_40A7B0(p_s, v18);
            }
            p_s = s;
LABEL_56:
            if ( !p_s )
              goto LABEL_89;
LABEL_50:
            sub_403B50((unsigned __int8 *)p_s);
            v18 = 0LL;
            v31 = *(_QWORD *)(*(_QWORD *)(qword_617658 + 8 * v22) + 32LL);
            if ( v31 <= (int)sub_408190(s) )
            {
              v18 = 0LL;
              LODWORD(v33) = sub_408190(s);
              v23 = qword_617658;
              v33 = (int)v33;
              v32 = *(_QWORD *)(qword_617658 + 8 * v22);
            }
            else
            {
              v23 = qword_617658;
              v32 = *(_QWORD *)(qword_617658 + 8 * v22);
              v33 = *(_QWORD *)(v32 + 32);
            }
            *(_QWORD *)(v32 + 32) = v33;
            v34 = qword_617650 <= (unsigned __int64)++v22;
            *(_QWORD *)(*(_QWORD *)(qword_617648 + 8 * qword_617640 - 8) + v25) = s;
            if ( v34 )
              break;
            continue;
          case 0xA:
            v29 = (char *)v10;
            goto LABEL_48;
          case 0xB:
            v29 = a3;
            goto LABEL_48;
          default:
            __assert_fail("!\"unhandled field\"", "src/df.c", 0x49Bu, "get_dev");
        }
        break;
      }
    }
    free(ptr);
    return;
  }
  v51 = __errno_location();
  v52 = v51;
  if ( !a9 || (v53 = *v51, v53 != 13) && v53 != 2 )
  {
    v54 = (const char *)sub_409C60(0LL, 3LL, a4);
    error(0, *v52, "%s", v54);
    dword_6176D8 = 1;
    return;
  }
  if ( byte_6176EE )
  {
    v65.m128i_i8[0] = 0;
    v11 = "-";
    v66 = -1LL;
    v65.m128i_i64[1] = -1LL;
    v64.m128i_i64[1] = -1LL;
    v64.m128i_i64[0] = -1LL;
    si128.m128i_i64[1] = -1LL;
    si128.m128i_i64[0] = -1LL;
    goto LABEL_18;
  }
}

void __fastcall __noreturn sub_404930(int status)
{
  __int64 v1; // rbp
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbp
  char *v5; // rax
  FILE *v6; // rbp
  char *v7; // rax
  FILE *v8; // rbp
  char *v9; // rax
  FILE *v10; // rbp
  char *v11; // rax
  FILE *v12; // rbp
  char *v13; // rax
  FILE *v14; // rbp
  char *v15; // rax
  FILE *v16; // rbp
  char *v17; // rax
  FILE *v18; // rbp
  char *v19; // rax
  FILE *v20; // rbp
  char *v21; // rax
  char *v22; // rax
  FILE *v23; // rbp
  char *v24; // rax
  FILE *v25; // rbp
  char *v26; // rax
  __int64 *v27; // rax
  const char *v28; // rbp
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  __int64 v37[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_617708;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = stdout;
  v5 = dcgettext(
         0LL,
         "Show information about the file system on which each FILE resides,\nor all file systems by default.\n",
         5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(
         0LL,
         "  -a, --all             include pseudo, duplicate, inaccessible file systems\n"
         "  -B, --block-size=SIZE  scale sizes by SIZE before printing them; e.g.,\n"
         "                           '-BM' prints sizes in units of 1,048,576 bytes;\n"
         "                           see SIZE format below\n"
         "  -h, --human-readable  print sizes in powers of 1024 (e.g., 1023M)\n"
         "  -H, --si              print sizes in powers of 1000 (e.g., 1.1G)\n",
         5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "  -i, --inodes          list inode information instead of block usage\n"
          "  -k                    like --block-size=1K\n"
          "  -l, --local           limit listing to local file systems\n"
          "      --no-sync         do not invoke sync before getting usage info (default)\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "      --output[=FIELD_LIST]  use the output format defined by FIELD_LIST,\n"
          "                               or print all fields if FIELD_LIST is omitted.\n"
          "  -P, --portability     use the POSIX output format\n"
          "      --sync            invoke sync before getting usage info\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "      --total           elide all entries insignificant to available space,\n"
          "                          and produce a grand total\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(
          0LL,
          "  -t, --type=TYPE       limit listing to file systems of type TYPE\n"
          "  -T, --print-type      print file system type\n"
          "  -x, --exclude-type=TYPE   limit listing to file systems not of type TYPE\n"
          "  -v                    (ignored)\n",
          5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v21, v20);
  v22 = dcgettext(
          0LL,
          "\n"
          "Display values are in units of the first available SIZE from --block-size,\n"
          "and the %s_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\n"
          "Otherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n",
          5);
  __printf_chk(1LL, v22, "DF");
  v23 = stdout;
  v24 = dcgettext(
          0LL,
          "\n"
          "The SIZE argument is an integer and optional unit (example: 10K is 10*1024).\n"
          "Units are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n",
          5);
  fputs_unlocked(v24, v23);
  v25 = stdout;
  v26 = dcgettext(
          0LL,
          "\n"
          "FIELD_LIST is a comma-separated list of columns to be included.  Valid\n"
          "field names are: 'source', 'fstype', 'itotal', 'iused', 'iavail', 'ipcent',\n"
          "'size', 'used', 'avail', 'pcent', 'file' and 'target' (see info page).\n",
          5);
  fputs_unlocked(v26, v25);
  v37[0] = (__int64)"[";
  v27 = v37;
  v37[1] = (__int64)"test invocation";
  v37[2] = (__int64)"coreutils";
  v37[3] = (__int64)"Multi-call invocation";
  v37[4] = (__int64)"sha224sum";
  v37[5] = (__int64)"sha2 utilities";
  v37[6] = (__int64)"sha256sum";
  v37[7] = (__int64)"sha2 utilities";
  v37[8] = (__int64)"sha384sum";
  v37[9] = (__int64)"sha2 utilities";
  v37[10] = (__int64)"sha512sum";
  v37[11] = (__int64)"sha2 utilities";
  v37[12] = 0LL;
  v37[13] = 0LL;
  do
    v27 += 2;
  while ( *v27 && strcmp("df", (const char *)*v27) );
  v28 = (const char *)v27[1];
  if ( v28 )
  {
    v29 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v29, &unk_4110B6);
    v30 = setlocale(5, 0LL);
    if ( !v30 || !strncmp(v30, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v33 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v33, &unk_4110B6);
    v34 = setlocale(5, 0LL);
    if ( !v34 || !strncmp(v34, "en_", 3uLL) )
    {
      v28 = "df";
      v35 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v35, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v28 = "df";
  }
  v36 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v36, "df");
LABEL_10:
  v31 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v31, "https://www.gnu.org/software/coreutils/");
LABEL_11:
  v32 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v32, v28);
LABEL_3:
  exit(status);
}

void __fastcall sub_404D60(void *a1)
{
  char *v1; // r14
  const char *v2; // rbp
  const char *v3; // r13
  char *v4; // rax
  __int64 v5; // rbx
  const char *v6; // r15
  const char *v7; // rsi
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // rax

  v1 = (char *)sub_40A790(a1);
  v2 = v1;
  do
  {
    v3 = 0LL;
    v4 = strchr(v2, 44);
    if ( v4 )
    {
      *v4 = 0;
      v3 = v4 + 1;
    }
    v5 = 0LL;
    while ( 1 )
    {
      v6 = (&off_617328)[6 * v5];
      if ( !strcmp(v6, v2) )
        break;
      if ( ++v5 == 12 )
      {
        v7 = "option --output: field %s unknown";
        v8 = sub_409DE0(v2);
        goto LABEL_8;
      }
    }
    if ( byte_61734C[48 * (unsigned int)v5] )
    {
      v7 = "option --output: field %s used more than once";
      v8 = sub_409DE0(v6);
LABEL_8:
      v9 = dcgettext(0LL, v7, 5);
      error(0, 0, v9, v8);
      sub_404930(1);
    }
    v10 = 1LL << v5;
    if ( ((1LL << v5) & 0xFEB) != 0 )
    {
      sub_403E20(v5, 0LL);
    }
    else if ( (v10 & 0x10) != 0 )
    {
      sub_403E20(v5, (__int64)"Avail");
    }
    else
    {
      if ( (v10 & 4) == 0 )
        __assert_fail("!\"invalid field\"", "src/df.c", 0x1ABu, "decode_output_arg");
      sub_403E20(v5, (__int64)"Size");
    }
    v2 = v3;
  }
  while ( v3 );
  free(v1);
}

__int64 __fastcall sub_404ED0(char *path, const __m128i *a2)
{
  int v2; // r13d
  int *v3; // r12
  char *v4; // rbx
  size_t v5; // rax
  void *v6; // rsp
  const char *v7; // r13
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __m128i si128; // xmm1
  __m128i v13; // xmm2
  __m128i v14; // xmm3
  __m128i v15; // xmm4
  __m128i v16; // xmm5
  __m128i v17; // xmm6
  __m128i v18; // xmm7
  __m128i v19; // xmm0
  const char *v20; // rsi
  __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // rcx
  int v24; // r13d
  __m128i v26; // xmm2
  __m128i v27; // xmm3
  __m128i v28; // xmm4
  __m128i v29; // xmm5
  __m128i v30; // xmm6
  __m128i v31; // xmm7
  __m128i v32; // xmm1
  __m128i v33; // xmm2
  char *v34; // rsi
  __int64 v35; // rbx
  char *v36; // rax
  __int64 v37; // rcx
  char *v38; // rax
  char *v39; // rax
  char v40[15]; // [rsp+0h] [rbp-150h] BYREF
  struct stat stat_buf; // [rsp+10h] [rbp-140h] BYREF
  struct stat v42; // [rsp+A0h] [rbp-B0h] BYREF

  v2 = sub_409F30(v40);
  v3 = __errno_location();
  if ( v2 )
  {
    v11 = 0LL;
    v38 = dcgettext(0LL, "cannot get current directory", 5);
    error(0, *v3, v38);
    return v11;
  }
  if ( (a2[1].m128i_i32[2] & 0xF000) == 0x4000 )
  {
    v26 = _mm_loadu_si128(a2 + 1);
    v27 = _mm_loadu_si128(a2 + 2);
    v28 = _mm_loadu_si128(a2 + 3);
    *(__m128i *)&stat_buf.st_dev = _mm_loadu_si128(a2);
    v29 = _mm_loadu_si128(a2 + 4);
    v30 = _mm_loadu_si128(a2 + 5);
    *(__m128i *)&stat_buf.st_nlink = v26;
    v31 = _mm_loadu_si128(a2 + 6);
    v32 = _mm_loadu_si128(a2 + 7);
    v33 = _mm_loadu_si128(a2 + 8);
    *(__m128i *)&stat_buf.st_gid = v27;
    *(__m128i *)&stat_buf.st_size = v28;
    *(__m128i *)&stat_buf.st_blocks = v29;
    *(__m128i *)&stat_buf.st_atim.tv_nsec = v30;
    *(__m128i *)&stat_buf.st_mtim.tv_nsec = v31;
    *(__m128i *)&stat_buf.st_ctim.tv_nsec = v32;
    *(__m128i *)&stat_buf.__unused[1] = v33;
    v34 = path;
    if ( chdir(path) >= 0 )
    {
LABEL_10:
      while ( __xstat(1, "..", &v42) >= 0 )
      {
        if ( v42.st_dev != stat_buf.st_dev || v42.st_ino == stat_buf.st_ino )
        {
          v11 = sub_40A7F0();
          goto LABEL_14;
        }
        if ( chdir("..") < 0 )
        {
          v20 = "cannot change to directory %s";
          v21 = sub_409B90(4LL, "..");
          goto LABEL_12;
        }
        si128 = _mm_load_si128((const __m128i *)&v42.st_nlink);
        v13 = _mm_load_si128((const __m128i *)&v42.st_gid);
        v14 = _mm_load_si128((const __m128i *)&v42.st_size);
        *(__m128i *)&stat_buf.st_dev = _mm_load_si128((const __m128i *)&v42);
        v15 = _mm_load_si128((const __m128i *)&v42.st_blocks);
        v16 = _mm_load_si128((const __m128i *)&v42.st_atim.tv_nsec);
        v17 = _mm_load_si128((const __m128i *)&v42.st_mtim.tv_nsec);
        v18 = _mm_load_si128((const __m128i *)&v42.st_ctim.tv_nsec);
        *(__m128i *)&stat_buf.st_nlink = si128;
        v19 = _mm_load_si128((const __m128i *)&v42.__unused[1]);
        *(__m128i *)&stat_buf.st_gid = v13;
        *(__m128i *)&stat_buf.st_size = v14;
        *(__m128i *)&stat_buf.st_blocks = v15;
        *(__m128i *)&stat_buf.st_atim.tv_nsec = v16;
        *(__m128i *)&stat_buf.st_mtim.tv_nsec = v17;
        *(__m128i *)&stat_buf.st_ctim.tv_nsec = v18;
        *(__m128i *)&stat_buf.__unused[1] = v19;
      }
      v20 = "cannot stat %s";
      v21 = sub_409B90(4LL, "..");
LABEL_12:
      v22 = dcgettext(0LL, v20, 5);
      v23 = v21;
      v11 = 0LL;
      error(0, *v3, v22, v23);
      goto LABEL_14;
    }
    goto LABEL_18;
  }
  v4 = (char *)sub_405990(path);
  v5 = strlen(v4);
  v6 = alloca(v5 + 9);
  v7 = (const char *)memcpy(v40, v4, v5 + 1);
  free(v4);
  if ( chdir(v7) < 0 )
  {
    v34 = (char *)v7;
LABEL_18:
    v35 = sub_409B90(4LL, v34);
    v36 = dcgettext(0LL, "cannot change to directory %s", 5);
    v37 = v35;
    v11 = 0LL;
    error(0, *v3, v36, v37);
    return v11;
  }
  if ( __xstat(1, ".", &stat_buf) >= 0 )
    goto LABEL_10;
  v8 = sub_409B90(4LL, v7);
  v9 = dcgettext(0LL, "cannot stat current directory (now %s)", 5);
  v10 = v8;
  v11 = 0LL;
  error(0, *v3, v9, v10);
LABEL_14:
  v24 = *v3;
  if ( !(unsigned int)sub_409F80(v40) )
  {
    sub_409FA0(v40);
    *v3 = v24;
    return v11;
  }
  v39 = dcgettext(0LL, "failed to return to initial working directory", 5);
  error(1, *v3, v39);
  return sub_405250((void *)1);
}

_BYTE *__fastcall sub_405250(_BYTE *src, char a2)
{
  _BYTE *v2; // r15
  const char *v3; // rax
  _BYTE *v4; // r12
  size_t v5; // rax
  size_t v6; // rbx
  _BYTE *v7; // rbx
  _BYTE *v8; // rbp
  char v9; // al
  char v10; // dl
  _BYTE *i; // r13
  _BYTE *v12; // r14
  signed __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  bool v19; // al
  int *v20; // rdx
  int v21; // ecx
  size_t v22; // rax
  int v23; // eax
  _BYTE *v24; // rax
  const char *v26; // rax
  char *v27; // r15
  const char *v28; // rdi
  size_t v29; // r13
  size_t v30; // rax
  size_t v31; // rdx
  unsigned __int64 v32; // r8
  int *v33; // rax
  int v34; // ecx
  int *v35; // rdx
  int *v36; // rdx
  int v37; // ecx
  _BYTE *v38; // rdx
  int *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  bool v43; // zf
  signed __int64 v44; // [rsp+8h] [rbp-100h]
  int *v45; // [rsp+8h] [rbp-100h]
  int *v46; // [rsp+8h] [rbp-100h]
  int *v47; // [rsp+8h] [rbp-100h]
  int *v48; // [rsp+8h] [rbp-100h]
  size_t v49; // [rsp+8h] [rbp-100h]
  __int64 v50; // [rsp+8h] [rbp-100h]
  int v51; // [rsp+14h] [rbp-F4h]
  int v52; // [rsp+14h] [rbp-F4h]
  int v53; // [rsp+14h] [rbp-F4h]
  int v54; // [rsp+14h] [rbp-F4h]
  void *v55; // [rsp+18h] [rbp-F0h]
  _BYTE *v56; // [rsp+20h] [rbp-E8h]
  size_t v57; // [rsp+20h] [rbp-E8h]
  char *ptr; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v59; // [rsp+30h] [rbp-D8h]
  int v60; // [rsp+3Ch] [rbp-CCh]
  struct stat stat_buf; // [rsp+40h] [rbp-C8h] BYREF

  v51 = a2 & 3;
  if ( ((v51 - 1) & (unsigned __int8)v51) != 0 || (v2 = src) == 0LL )
  {
    v4 = 0LL;
    *__errno_location() = 22;
    return v4;
  }
  if ( !*src )
  {
    v4 = 0LL;
    *__errno_location() = 2;
    return v4;
  }
  if ( *src == 47 )
  {
    v4 = (_BYTE *)sub_40A560(4096LL);
    v8 = v4 + 4096;
    v7 = v4 + 1;
    *v4 = 47;
  }
  else
  {
    v3 = (const char *)sub_40A7F0();
    v4 = v3;
    if ( !v3 )
      return v4;
    v5 = strlen(v3);
    v6 = v5;
    if ( v5 <= 0xFFF )
    {
      v4 = (_BYTE *)sub_40A5C0(v4, 4096LL);
      v7 = &v4[v6];
      v8 = v4 + 4096;
    }
    else
    {
      v7 = &v4[v5];
      v8 = &v4[v5];
    }
  }
  v56 = src;
  v9 = *src;
  v55 = 0LL;
  v59 = 0LL;
  ptr = 0LL;
  while ( v9 )
  {
    v10 = v9;
    if ( v9 == 47 )
    {
      do
        v10 = *++v2;
      while ( *v2 == 47 );
      if ( !v10 )
        break;
    }
    for ( i = v2; ; ++i )
    {
      v9 = i[1];
      v12 = i + 1;
      if ( !v9 || v9 == 47 )
        break;
    }
    if ( v12 == v2 )
      break;
    v13 = v12 - v2;
    if ( v12 - v2 == 1 )
    {
      if ( v10 == 46 )
        goto LABEL_46;
      goto LABEL_21;
    }
    if ( v10 == 46 && v13 == 2 && v2[1] == 46 )
    {
      v2 = i + 1;
      if ( v7 > v4 + 1 )
      {
        v38 = v7 - 1;
        if ( v4 >= v7 - 1 || *(v7 - 2) == 47 )
        {
          --v7;
        }
        else
        {
          v7 -= 2;
          if ( v4 != v38 - 1 )
          {
            do
            {
              if ( *(v7 - 1) == 47 )
                break;
              --v7;
            }
            while ( v4 != v7 );
          }
LABEL_46:
          v2 = i + 1;
        }
      }
    }
    else
    {
LABEL_21:
      if ( *(v7 - 1) != 47 )
        *v7++ = 47;
      if ( v8 <= &v7[v13] )
      {
        v14 = v8 - v4;
        v15 = v7 - v4;
        v16 = v13 + v14 + 1;
        v17 = v14 + 4096;
        if ( v13 >= 4096 )
          v17 = v16;
        v18 = sub_40A5C0(v4, v17);
        v13 = v12 - v2;
        v4 = (_BYTE *)v18;
        v8 = (_BYTE *)(v18 + v17);
        v7 = (_BYTE *)(v18 + v15);
      }
      v44 = v13;
      memcpy(v7, v2, v13);
      v7 += v44;
      *v7 = 0;
      if ( v51 == 2 && (a2 & 4) != 0 )
      {
LABEL_29:
        stat_buf.st_mode = 0;
LABEL_30:
        if ( *v12 && v51 != 2 )
        {
          v39 = __errno_location();
          v21 = 20;
          v20 = v39;
LABEL_79:
          v54 = v21;
          v48 = v20;
          free(ptr);
          free(v4);
          v36 = v48;
          v37 = v54;
          if ( v55 )
            goto LABEL_68;
          goto LABEL_69;
        }
LABEL_32:
        v9 = *v12;
        v2 = v12;
      }
      else
      {
        if ( (a2 & 4) != 0 )
          v19 = __xstat(1, v4, &stat_buf) != 0;
        else
          v19 = __lxstat(1, v4, &stat_buf) != 0;
        if ( v19 )
        {
          v20 = __errno_location();
          v21 = *v20;
          if ( (a2 & 3) == 0 )
            goto LABEL_79;
          if ( v51 != 1 )
            goto LABEL_29;
          v60 = *v20;
          v45 = v20;
          v22 = strspn(i + 1, "/");
          v20 = v45;
          v21 = v60;
          if ( v12[v22] || v60 != 2 )
            goto LABEL_79;
        }
        else
        {
          v23 = stat_buf.st_mode & 0xF000;
          if ( v23 != 40960 )
          {
            if ( v23 == 0x4000 )
              goto LABEL_32;
            goto LABEL_30;
          }
          if ( !v55 )
          {
            v55 = (void *)sub_406460(7LL, 0LL, sub_406E20, sub_406E90, sub_406ED0);
            if ( !v55 )
              sub_40A7B0(7LL, 0LL);
          }
          if ( (unsigned __int8)sub_405B90(v55, v56, &stat_buf) )
          {
            if ( v51 != 2 )
            {
              v33 = __errno_location();
              v34 = 40;
              v35 = v33;
LABEL_67:
              v52 = v34;
              v46 = v35;
              free(ptr);
              free(v4);
              v36 = v46;
              v37 = v52;
LABEL_68:
              v53 = v37;
              v47 = v36;
              sub_4066A0(v55);
              v37 = v53;
              v36 = v47;
LABEL_69:
              *v36 = v37;
              return 0LL;
            }
          }
          else
          {
            sub_405B00(v55, v56, &stat_buf);
            v26 = (const char *)sub_40D6B0(v4);
            v27 = (char *)v26;
            if ( v26 )
            {
              v28 = i + 1;
              v29 = strlen(v26);
              v30 = strlen(v28);
              v31 = v30;
              v32 = v29 + v30 + 1;
              if ( v59 )
              {
                if ( v32 > v59 )
                {
                  v50 = v29 + v30 + 1;
                  v57 = v30;
                  v42 = sub_40A5C0(ptr, v50);
                  v31 = v57;
                  ptr = (char *)v42;
                  v59 = v50;
                }
              }
              else
              {
                v49 = v30;
                v40 = 4096LL;
                if ( v32 >= 0x1000 )
                  v40 = v32;
                v59 = v40;
                v41 = sub_40A560(v40);
                v31 = v49;
                ptr = (char *)v41;
              }
              memmove(&ptr[v29], v12, v31 + 1);
              v12 = memcpy(ptr, v27, v29);
              v56 = v12;
              if ( *v27 == 47 )
              {
                *v4 = 47;
                v7 = v4 + 1;
              }
              else if ( v7 > v4 + 1 )
              {
                if ( v4 >= v7 - 1 )
                {
                  --v7;
                }
                else
                {
                  v43 = *(v7 - 2) == 47;
                  --v7;
                  if ( !v43 )
                  {
                    do
                      --v7;
                    while ( v4 != v7 && *(v7 - 1) != 47 );
                  }
                }
              }
              free(v27);
              goto LABEL_32;
            }
            v35 = __errno_location();
            v34 = *v35;
            if ( v51 != 2 || v34 == 12 )
              goto LABEL_67;
          }
        }
        v9 = i[1];
        v2 = i + 1;
      }
    }
  }
  if ( v7 > v4 + 1 && *(v7 - 1) == 47 )
    v24 = v7--;
  else
    v24 = v7 + 1;
  *v7 = 0;
  if ( v8 != v24 )
    v4 = (_BYTE *)sub_40A5C0(v4, v7 - v4 + 1);
  free(ptr);
  if ( v55 )
    sub_4066A0(v55);
  return v4;
}

__int64 sub_4058F0()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_40DB30(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_6176F8 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_617700 )
      {
        v5 = (const char *)sub_409C30();
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
  result = sub_40DB30(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_405990(void *a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_405A10(a1);
  if ( !result )
    sub_40A7B0(a1, a2);
  return result;
}

__int64 __fastcall sub_4059B0(_BYTE *a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdx

  v1 = *a1 == 47;
  v2 = sub_405A70();
  if ( v2 - (__int64)a1 <= v1 )
    return v2 - (_QWORD)a1;
  v3 = v2 - (_QWORD)a1 - 1;
  if ( *(_BYTE *)(v2 - 1) != 47 )
    return v2 - (_QWORD)a1;
  while ( v1 != v3 && a1[v3 - 1] == 47 )
    --v3;
  return v3;
}

_BYTE *__fastcall sub_405A10(_BYTE *src)
{
  __int64 v1; // rbx
  _BYTE *v2; // rax
  _BYTE *v3; // rcx
  _BYTE *v4; // rax

  v1 = sub_4059B0(src);
  v2 = malloc(v1 + (v1 == 0) + 1);
  v3 = v2;
  if ( v2 )
  {
    v4 = memcpy(v2, src, v1);
    v3 = v4;
    if ( !v1 )
    {
      *v4 = 46;
      v1 = 1LL;
    }
    v4[v1] = 0;
  }
  return v3;
}

_BYTE *__fastcall sub_405A70(_BYTE *a1)
{
  char v1; // dl
  _BYTE *result; // rax
  _BYTE *v3; // rcx
  char v4; // si

  v1 = *a1;
  for ( result = a1; *result == 47; v1 = *result )
    ++result;
  if ( v1 )
  {
    v3 = result;
    v4 = 0;
    do
    {
      while ( v1 == 47 )
      {
        v1 = *++v3;
        v4 = 1;
        if ( !*v3 )
          return result;
      }
      if ( v4 )
      {
        result = v3;
        v4 = 0;
      }
      v1 = *++v3;
    }
    while ( *v3 );
  }
  return result;
}

size_t __fastcall sub_405AD0(const char *a1)
{
  size_t result; // rax
  size_t v2; // rdx

  result = strlen(a1);
  if ( result > 1 )
  {
    do
    {
      v2 = result - 1;
      if ( a1[result - 1] != 47 )
        break;
      --result;
    }
    while ( v2 != 1 );
  }
  return result;
}

void __fastcall sub_405B00(__int64 a1, void *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax

  if ( a1 )
  {
    v4 = (_QWORD *)sub_40A560(24LL);
    *v4 = sub_40A790(a2);
    v4[1] = a3[1];
    v4[2] = *a3;
    v5 = sub_406C00(a1, v4);
    if ( !v5 )
      sub_40A7B0(a1, v4);
    if ( v4 != (_QWORD *)v5 )
      sub_406ED0(v4);
  }
}

bool __fastcall sub_405B90(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v5[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a1 )
    return 0;
  v3 = a3[1];
  v5[0] = a2;
  v5[1] = v3;
  v5[2] = *a3;
  return sub_4061F0(a1, v5) != 0;
}

unsigned __int64 __fastcall sub_405BD0(unsigned __int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx

  v1 = 10LL;
  if ( a1 >= 0xA )
    v1 = a1;
  v2 = v1 | 1;
  if ( v2 != -1LL )
  {
    while ( 1 )
    {
      v3 = v2 % 3;
      if ( v2 <= 9 )
        goto LABEL_9;
      if ( v2 % 3 )
        break;
LABEL_10:
      v2 += 2LL;
      if ( v2 == -1LL )
        return v2;
    }
    v4 = 16LL;
    v5 = 9LL;
    v6 = 3LL;
    while ( 1 )
    {
      v6 += 2LL;
      v5 += v4;
      v3 = v2 % v6;
      if ( v5 >= v2 )
        break;
      v4 += 8LL;
      if ( !(v2 % v6) )
        goto LABEL_10;
    }
LABEL_9:
    if ( v3 )
      return v2;
    goto LABEL_10;
  }
  return v2;
}

unsigned __int64 __fastcall sub_405C70(__int64 a1, unsigned __int64 a2)
{
  return __ROR8__(a1, 3) % a2;
}

bool __fastcall sub_405C80(__int64 a1, __int64 a2)
{
  return a1 == a2;
}

__int64 __fastcall sub_405C90(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_405C90(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_405CC0(__int64 a1, __int64 a2, __m128i **a3, char a4)
{
  __m128i *v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // rbx
  __int64 *v10; // rax
  const __m128i *v12; // rax

  v7 = (__m128i *)sub_405C90(a1, a2);
  *a3 = v7;
  v8 = v7->m128i_i64[0];
  if ( v7->m128i_i64[0] )
  {
    v9 = v7;
    if ( v8 != a2 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(a1 + 56))(a2) )
      {
        v10 = (__int64 *)v9->m128i_i64[1];
        if ( v10 )
        {
          v8 = *v10;
          if ( a2 != *v10 )
          {
            while ( !(*(unsigned __int8 (__fastcall **)(__int64))(a1 + 56))(a2) )
            {
              v9 = (__m128i *)v9->m128i_i64[1];
              v10 = (__int64 *)v9->m128i_i64[1];
              if ( !v10 )
                return 0LL;
              v8 = *v10;
              if ( *v10 == a2 )
                goto LABEL_11;
            }
            v10 = (__int64 *)v9->m128i_i64[1];
            v8 = *v10;
          }
LABEL_11:
          if ( a4 )
          {
            v9->m128i_i64[1] = v10[1];
            *v10 = 0LL;
            v10[1] = *(_QWORD *)(a1 + 72);
            *(_QWORD *)(a1 + 72) = v10;
          }
          return v8;
        }
        return 0LL;
      }
      v8 = v9->m128i_i64[0];
    }
    if ( a4 )
    {
      v12 = (const __m128i *)v9->m128i_i64[1];
      if ( v12 )
      {
        *v9 = _mm_loadu_si128(v12);
        v12->m128i_i64[0] = 0LL;
        v12->m128i_i64[1] = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = v12;
        return v8;
      }
      v9->m128i_i64[0] = 0LL;
    }
    return v8;
  }
  return 0LL;
}

__int64 __fastcall sub_405DE0(float **a1)
{
  float *v1; // rax
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 == (float *)&unk_412280 )
    return 1LL;
  v2 = v1[2];
  if ( v2 <= 0.1
    || v2 >= 0.89999998
    || v1[3] <= 1.1
    || *v1 < 0.0
    || (v3 = *v1 + 0.1, v4 = v1[1], v4 <= v3)
    || v4 > 1.0
    || (result = 1LL, v2 <= v3) )
  {
    *a1 = (float *)&unk_412280;
    return 0LL;
  }
  return result;
}

__int64 __fastcall sub_405E60(__int64 a1, __int64 a2, char a3)
{
  __int64 *v4; // r12
  __int64 v5; // r15
  __int64 *v6; // rbx
  __int64 v7; // r15
  _QWORD *v8; // rax
  __int64 *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx

  v4 = *(__int64 **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    return 1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 )
      {
        v6 = (__int64 *)v4[1];
        if ( v6 )
        {
          do
          {
            while ( 1 )
            {
              v7 = *v6;
              v8 = (_QWORD *)sub_405C90(a1, *v6);
              v9 = (__int64 *)v6[1];
              if ( !*v8 )
                break;
              v6[1] = v8[1];
              v8[1] = v6;
              v6 = v9;
              if ( !v9 )
                goto LABEL_10;
            }
            *v8 = v7;
            ++*(_QWORD *)(a1 + 24);
            *v6 = 0LL;
            v6[1] = *(_QWORD *)(a1 + 72);
            *(_QWORD *)(a1 + 72) = v6;
            v6 = v9;
          }
          while ( v9 );
LABEL_10:
          v5 = *v4;
        }
        v4[1] = 0LL;
        if ( !a3 )
          break;
      }
      v4 += 2;
      if ( *(_QWORD *)(a2 + 8) <= (unsigned __int64)v4 )
        return 1LL;
    }
    v10 = (_QWORD *)sub_405C90(a1, v5);
    v11 = v10;
    if ( !*v10 )
    {
      *v10 = v5;
      ++*(_QWORD *)(a1 + 24);
      goto LABEL_16;
    }
    v12 = *(_QWORD **)(a1 + 72);
    if ( !v12 )
      break;
    *(_QWORD *)(a1 + 72) = v12[1];
LABEL_15:
    v13 = v11[1];
    *v12 = v5;
    v12[1] = v13;
    v11[1] = v12;
LABEL_16:
    *v4 = 0LL;
    v4 += 2;
    --*(_QWORD *)(a2 + 24);
    if ( *(_QWORD *)(a2 + 8) <= (unsigned __int64)v4 )
      return 1LL;
  }
  v12 = malloc(0x10uLL);
  if ( v12 )
    goto LABEL_15;
  return 0LL;
}

__int64 __fastcall sub_4060A0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r12
  __int64 v6; // r13
  _QWORD *v7; // rsi
  unsigned __int64 i; // rdi
  __int64 v9; // rax
  unsigned __int64 j; // rdx
  double v11; // xmm0_8
  double v12; // xmm1_8

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD **)a1;
  for ( i = *(_QWORD *)(a1 + 8); (unsigned __int64)v7 < i; v7 += 2 )
  {
    while ( !*v7 )
    {
      v7 += 2;
      if ( (unsigned __int64)v7 >= i )
        goto LABEL_10;
    }
    v9 = v7[1];
    for ( j = 1LL; v9; ++j )
      v9 = *(_QWORD *)(v9 + 8);
    if ( v3 < j )
      v3 = j;
  }
LABEL_10:
  __fprintf_chk(a2, 1LL, "# entries:         %lu\n", v4);
  __fprintf_chk(a2, 1LL, "# buckets:         %lu\n", v5);
  if ( v6 < 0 )
  {
    v11 = ((double)(int)(v6 & 1 | ((unsigned __int64)v6 >> 1)) + (double)(int)(v6 & 1 | ((unsigned __int64)v6 >> 1)))
        * 100.0;
    if ( v5 >= 0 )
      goto LABEL_12;
LABEL_15:
    v12 = (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1)) + (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1));
    goto LABEL_13;
  }
  v11 = (double)(int)v6 * 100.0;
  if ( v5 < 0 )
    goto LABEL_15;
LABEL_12:
  v12 = (double)(int)v5;
LABEL_13:
  __fprintf_chk(a2, 1LL, "# buckets used:    %lu (%.2f%%)\n", v6, v11 / v12);
  return __fprintf_chk(a2, 1LL, "max bucket length: %lu\n", v3);
}

__int64 __fastcall sub_4061F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rbx

  v2 = a2;
  v3 = (_QWORD *)sub_405C90(a1, a2);
  v4 = *v3;
  if ( !*v3 )
    return 0LL;
  v5 = v3;
  while ( v4 != v2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(a1 + 56))(v2) )
      return *v5;
    v5 = (_QWORD *)v5[1];
    if ( !v5 )
      return 0LL;
    v4 = *v5;
  }
  return v2;
}

__int64 __fastcall sub_4062A0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = (_QWORD *)sub_405C90(a1, a2);
  v3 = v2;
  while ( 1 )
  {
    v4 = *v3;
    v3 = (_QWORD *)v3[1];
    if ( v4 == a2 )
      break;
    if ( !v3 )
      goto LABEL_7;
  }
  if ( v3 )
    return *v3;
LABEL_7:
  while ( 1 )
  {
    v2 += 2;
    if ( *(_QWORD *)(a1 + 8) <= (unsigned __int64)v2 )
      break;
    result = *v2;
    if ( *v2 )
      return result;
  }
  return 0LL;
}

__int64 __fastcall sub_406380(__int64 a1, unsigned __int8 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 *v3; // r14
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 *v9; // rbx

  v3 = *(__int64 **)a1;
  if ( *(_QWORD *)(a1 + 8) <= *(_QWORD *)a1 )
    return 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *v3;
    if ( *v3 )
      break;
LABEL_4:
    v3 += 2;
    if ( *(_QWORD *)(a1 + 8) <= (unsigned __int64)v3 )
      return v6;
  }
  v9 = v3;
  while ( a2(v7, a3) )
  {
    v9 = (__int64 *)v9[1];
    ++v6;
    if ( !v9 )
      goto LABEL_4;
    v7 = *v9;
  }
  return v6;
}

_QWORD *__fastcall sub_406460(
        __int64 a1,
        __int64 a2,
        unsigned __int64 (__fastcall *a3)(__int64 a1, unsigned __int64 a2),
        bool (__fastcall *a4)(__int64 a1, __int64 a2),
        __int64 a5)
{
  bool (__fastcall *v6)(__int64, __int64); // r13
  unsigned __int64 (__fastcall *v7)(__int64, unsigned __int64); // r12
  char *v9; // rax
  _QWORD *v10; // rbx
  float **v11; // rdi
  unsigned __int64 v12; // rbp
  char *v13; // rax
  void *v14; // rdi
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm0_4

  v6 = a4;
  v7 = a3;
  if ( !a3 )
    v7 = sub_405C70;
  if ( !a4 )
    v6 = sub_405C80;
  v9 = (char *)malloc(0x50uLL);
  v10 = v9;
  if ( v9 )
  {
    v11 = (float **)(v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_405DE0(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_405BD0(a1);
        if ( (v12 & 0x1000000000000000LL) == 0 && !(v12 >> 61) )
        {
          v10[2] = v12;
          if ( v12 )
          {
            v13 = (char *)calloc(v12, 0x10uLL);
            *v10 = v13;
            if ( v13 )
            {
              v10[3] = 0LL;
              v10[4] = 0LL;
              v10[1] = &v13[16 * v12];
              v10[6] = v7;
              v10[7] = v6;
              v10[8] = a5;
              v10[9] = 0LL;
              return v10;
            }
          }
        }
LABEL_14:
        v14 = v10;
        v10 = 0LL;
        free(v14);
        return v10;
      }
      v16 = *(float *)(a2 + 8);
      if ( a1 < 0 )
        goto LABEL_23;
    }
    else
    {
      *((_QWORD *)v9 + 5) = &unk_412280;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_405DE0(v11) )
        goto LABEL_14;
      if ( a1 < 0 )
      {
LABEL_23:
        v17 = (float)(a1 & 1 | (unsigned int)((unsigned __int64)a1 >> 1))
            + (float)(a1 & 1 | (unsigned int)((unsigned __int64)a1 >> 1));
        goto LABEL_19;
      }
    }
    v17 = (float)(int)a1;
LABEL_19:
    v18 = v17 / v16;
    if ( v18 >= 1.8446744e19 )
      goto LABEL_14;
    if ( v18 < 9.223372e18 )
      a1 = (unsigned int)(int)v18;
    else
      a1 = (unsigned int)(int)(float)(v18 - 9.223372e18) ^ 0x8000000000000000LL;
    goto LABEL_9;
  }
  return v10;
}

void __fastcall sub_4065F0(_QWORD *a1)
{
  _QWORD *v1; // r12
  _QWORD *v2; // rbx
  void (__fastcall *v3)(_QWORD); // rax
  _QWORD *v4; // rdx
  __int64 v5; // rcx

  v1 = (_QWORD *)*a1;
  if ( *a1 < a1[1] )
  {
    do
    {
      while ( !*v1 )
      {
        v1 += 2;
        if ( a1[1] <= (unsigned __int64)v1 )
          goto LABEL_12;
      }
      v2 = (_QWORD *)v1[1];
      v3 = (void (__fastcall *)(_QWORD))a1[8];
      if ( v2 )
      {
        do
        {
          if ( v3 )
          {
            v3(*v2);
            v3 = (void (__fastcall *)(_QWORD))a1[8];
          }
          v4 = (_QWORD *)v2[1];
          v5 = a1[9];
          *v2 = 0LL;
          v2[1] = v5;
          a1[9] = v2;
          v2 = v4;
        }
        while ( v4 );
      }
      if ( v3 )
        v3(*v1);
      *v1 = 0LL;
      v1 += 2;
      *(v1 - 1) = 0LL;
    }
    while ( a1[1] > (unsigned __int64)v1 );
  }
LABEL_12:
  a1[3] = 0LL;
  a1[4] = 0LL;
}

void __fastcall sub_4066A0(_QWORD *ptr)
{
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  v2 = (_QWORD *)*ptr;
  v3 = ptr[1];
  if ( ptr[8] && ptr[4] )
  {
    if ( (unsigned __int64)v2 >= v3 )
      goto LABEL_15;
    do
    {
      while ( !*v2 )
      {
        v2 += 2;
        if ( v3 <= (unsigned __int64)v2 )
          goto LABEL_10;
      }
      v4 = v2;
      do
      {
        ((void (*)(void))ptr[8])();
        v4 = (_QWORD *)v4[1];
      }
      while ( v4 );
      v3 = ptr[1];
      v2 += 2;
    }
    while ( v3 > (unsigned __int64)v2 );
LABEL_10:
    v2 = (_QWORD *)*ptr;
  }
  if ( (unsigned __int64)v2 < v3 )
  {
    do
    {
      v5 = (_QWORD *)v2[1];
      if ( v5 )
      {
        do
        {
          v6 = (_QWORD *)v5[1];
          free(v5);
          v5 = v6;
        }
        while ( v6 );
      }
      v2 += 2;
    }
    while ( ptr[1] > (unsigned __int64)v2 );
  }
LABEL_15:
  v7 = (_QWORD *)ptr[9];
  if ( v7 )
  {
    do
    {
      v8 = (_QWORD *)v7[1];
      free(v7);
      v7 = v8;
    }
    while ( v8 );
  }
  free((void *)*ptr);
  free(ptr);
}

__int64 __fastcall sub_406780(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  float v3; // xmm0_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rbx
  _BOOL8 v6; // rax
  void *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebx
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+8h] [rbp-60h]
  unsigned __int64 v16; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+38h] [rbp-30h]
  __int64 v22; // [rsp+40h] [rbp-28h]
  __int64 v23; // [rsp+48h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v2 + 16) )
  {
    if ( a2 < 0 )
      v3 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
         + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
    else
      v3 = (float)(int)a2;
    v4 = v3 / *(float *)(v2 + 8);
    if ( v4 >= 1.8446744e19 )
      return 0;
    if ( v4 < 9.223372e18 )
      a2 = (unsigned int)(int)v4;
    else
      a2 = (unsigned int)(int)(float)(v4 - 9.223372e18) ^ 0x8000000000000000LL;
  }
  v5 = sub_405BD0(a2);
  v6 = v5 >> 61 != 0;
  if ( (v5 & 0x1000000000000000LL) != 0 )
    v6 = 1LL;
  if ( !v5 || v6 )
    return 0;
  if ( *(_QWORD *)(a1 + 16) == v5 )
    return 1LL;
  v7 = calloc(v5, 0x10uLL);
  ptr = v7;
  if ( !v7 )
    return 0;
  v16 = v5;
  v8 = (__int64)v7 + 16 * v5;
  v9 = *(_QWORD *)(a1 + 48);
  v17 = 0LL;
  v15 = v8;
  v20 = v9;
  v10 = *(_QWORD *)(a1 + 56);
  v18 = 0LL;
  v21 = v10;
  v11 = *(_QWORD *)(a1 + 64);
  v19 = v2;
  v22 = v11;
  v23 = *(_QWORD *)(a1 + 72);
  v12 = sub_405E60((__int64)&ptr, a1, 0);
  if ( (_BYTE)v12 )
  {
    free(*(void **)a1);
    *(_QWORD *)a1 = ptr;
    *(_QWORD *)(a1 + 8) = v15;
    *(_QWORD *)(a1 + 16) = v16;
    *(_QWORD *)(a1 + 24) = v17;
    *(_QWORD *)(a1 + 72) = v23;
    return v12;
  }
  *(_QWORD *)(a1 + 72) = v23;
  if ( !(unsigned __int8)sub_405E60(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_405E60(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v12;
}

__int64 __fastcall sub_406780(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  float v3; // xmm0_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rbx
  _BOOL8 v6; // rax
  void *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebx
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+8h] [rbp-60h]
  unsigned __int64 v16; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+38h] [rbp-30h]
  __int64 v22; // [rsp+40h] [rbp-28h]
  __int64 v23; // [rsp+48h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v2 + 16) )
  {
    if ( a2 < 0 )
      v3 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
         + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
    else
      v3 = (float)(int)a2;
    v4 = v3 / *(float *)(v2 + 8);
    if ( v4 >= 1.8446744e19 )
      return 0;
    if ( v4 < 9.223372e18 )
      a2 = (unsigned int)(int)v4;
    else
      a2 = (unsigned int)(int)(float)(v4 - 9.223372e18) ^ 0x8000000000000000LL;
  }
  v5 = sub_405BD0(a2);
  v6 = v5 >> 61 != 0;
  if ( (v5 & 0x1000000000000000LL) != 0 )
    v6 = 1LL;
  if ( !v5 || v6 )
    return 0;
  if ( *(_QWORD *)(a1 + 16) == v5 )
    return 1LL;
  v7 = calloc(v5, 0x10uLL);
  ptr = v7;
  if ( !v7 )
    return 0;
  v16 = v5;
  v8 = (__int64)v7 + 16 * v5;
  v9 = *(_QWORD *)(a1 + 48);
  v17 = 0LL;
  v15 = v8;
  v20 = v9;
  v10 = *(_QWORD *)(a1 + 56);
  v18 = 0LL;
  v21 = v10;
  v11 = *(_QWORD *)(a1 + 64);
  v19 = v2;
  v22 = v11;
  v23 = *(_QWORD *)(a1 + 72);
  v12 = sub_405E60((__int64)&ptr, a1, 0);
  if ( (_BYTE)v12 )
  {
    free(*(void **)a1);
    *(_QWORD *)a1 = ptr;
    *(_QWORD *)(a1 + 8) = v15;
    *(_QWORD *)(a1 + 16) = v16;
    *(_QWORD *)(a1 + 24) = v17;
    *(_QWORD *)(a1 + 72) = v23;
    return v12;
  }
  *(_QWORD *)(a1 + 72) = v23;
  if ( !(unsigned __int8)sub_405E60(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_405E60(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v12;
}

__int64 __fastcall sub_406980(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  float v9; // xmm1_4
  __int64 v10; // rax
  __m128i *v11; // r12
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  float v15; // xmm1_4
  __int64 v16; // rdx
  __int64 v17; // rax
  float v18; // xmm2_4
  float v19; // xmm0_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __m128i *v26[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( !a2 )
    goto LABEL_35;
  v5 = sub_405CC0(a1, a2, v26, 0);
  if ( !v5 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 < 0 )
    {
      v14 = v7 & 1 | ((unsigned __int64)v7 >> 1);
      v10 = *(_QWORD *)(a1 + 16);
      v15 = (float)v14;
      v8 = *(_QWORD *)(a1 + 40);
      v9 = v15 + v15;
      if ( v10 >= 0 )
      {
LABEL_8:
        if ( v9 <= (float)((float)(int)v10 * *(float *)(v8 + 8)) )
          goto LABEL_9;
LABEL_15:
        sub_405DE0((float **)(a1 + 40));
        v16 = *(_QWORD *)(a1 + 40);
        v17 = *(_QWORD *)(a1 + 16);
        v18 = *(float *)(v16 + 8);
        if ( v17 < 0 )
        {
          v24 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
          v19 = (float)(int)v24 + (float)(int)v24;
        }
        else
        {
          v19 = (float)(int)v17;
        }
        v20 = *(_QWORD *)(a1 + 24);
        if ( v20 < 0 )
        {
          v23 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
          v21 = (float)(int)v23 + (float)(int)v23;
        }
        else
        {
          v21 = (float)(int)v20;
        }
        if ( v21 <= (float)(v18 * v19) )
          goto LABEL_9;
        v22 = v19 * *(float *)(v16 + 12);
        if ( !*(_BYTE *)(v16 + 16) )
          v22 = v22 * v18;
        if ( v22 >= 1.8446744e19 )
          return 0xFFFFFFFFLL;
        v25 = v22 >= 9.223372e18
            ? (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL
            : (unsigned int)(int)v22;
        if ( !(unsigned __int8)sub_406780(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_405CC0(a1, a2, v26, 0) )
        {
LABEL_9:
          v11 = v26[0];
          if ( !*(_QWORD *)v26[0] )
          {
            *(_QWORD *)v26[0] = a2;
            result = 1LL;
            ++*(_QWORD *)(a1 + 32);
            ++*(_QWORD *)(a1 + 24);
            return result;
          }
          v12 = *(_QWORD **)(a1 + 72);
          if ( v12 )
          {
            *(_QWORD *)(a1 + 72) = v12[1];
LABEL_12:
            v13 = v11->m128i_i64[1];
            *v12 = a2;
            v12[1] = v13;
            v11->m128i_i64[1] = (__int64)v12;
            result = 1LL;
            ++*(_QWORD *)(a1 + 32);
            return result;
          }
          v12 = malloc(0x10uLL);
          if ( v12 )
            goto LABEL_12;
          return 0xFFFFFFFFLL;
        }
LABEL_35:
        abort();
      }
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40);
      v9 = (float)(int)v7;
      v10 = *(_QWORD *)(a1 + 16);
      if ( v10 >= 0 )
        goto LABEL_8;
    }
    if ( v9 <= (float)((float)((float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
                             + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1)))
                     * *(float *)(v8 + 8)) )
      goto LABEL_9;
    goto LABEL_15;
  }
  result = 0LL;
  if ( a3 )
    *a3 = v5;
  return result;
}

__int64 __fastcall sub_406980(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  float v9; // xmm1_4
  __int64 v10; // rax
  __m128i *v11; // r12
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  float v15; // xmm1_4
  __int64 v16; // rdx
  __int64 v17; // rax
  float v18; // xmm2_4
  float v19; // xmm0_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __m128i *v26[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( !a2 )
    goto LABEL_35;
  v5 = sub_405CC0(a1, a2, v26, 0);
  if ( !v5 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 < 0 )
    {
      v14 = v7 & 1 | ((unsigned __int64)v7 >> 1);
      v10 = *(_QWORD *)(a1 + 16);
      v15 = (float)v14;
      v8 = *(_QWORD *)(a1 + 40);
      v9 = v15 + v15;
      if ( v10 >= 0 )
      {
LABEL_8:
        if ( v9 <= (float)((float)(int)v10 * *(float *)(v8 + 8)) )
          goto LABEL_9;
LABEL_15:
        sub_405DE0((float **)(a1 + 40));
        v16 = *(_QWORD *)(a1 + 40);
        v17 = *(_QWORD *)(a1 + 16);
        v18 = *(float *)(v16 + 8);
        if ( v17 < 0 )
        {
          v24 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
          v19 = (float)(int)v24 + (float)(int)v24;
        }
        else
        {
          v19 = (float)(int)v17;
        }
        v20 = *(_QWORD *)(a1 + 24);
        if ( v20 < 0 )
        {
          v23 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
          v21 = (float)(int)v23 + (float)(int)v23;
        }
        else
        {
          v21 = (float)(int)v20;
        }
        if ( v21 <= (float)(v18 * v19) )
          goto LABEL_9;
        v22 = v19 * *(float *)(v16 + 12);
        if ( !*(_BYTE *)(v16 + 16) )
          v22 = v22 * v18;
        if ( v22 >= 1.8446744e19 )
          return 0xFFFFFFFFLL;
        v25 = v22 >= 9.223372e18
            ? (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL
            : (unsigned int)(int)v22;
        if ( !(unsigned __int8)sub_406780(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_405CC0(a1, a2, v26, 0) )
        {
LABEL_9:
          v11 = v26[0];
          if ( !*(_QWORD *)v26[0] )
          {
            *(_QWORD *)v26[0] = a2;
            result = 1LL;
            ++*(_QWORD *)(a1 + 32);
            ++*(_QWORD *)(a1 + 24);
            return result;
          }
          v12 = *(_QWORD **)(a1 + 72);
          if ( v12 )
          {
            *(_QWORD *)(a1 + 72) = v12[1];
LABEL_12:
            v13 = v11->m128i_i64[1];
            *v12 = a2;
            v12[1] = v13;
            v11->m128i_i64[1] = (__int64)v12;
            result = 1LL;
            ++*(_QWORD *)(a1 + 32);
            return result;
          }
          v12 = malloc(0x10uLL);
          if ( v12 )
            goto LABEL_12;
          return 0xFFFFFFFFLL;
        }
LABEL_35:
        abort();
      }
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40);
      v9 = (float)(int)v7;
      v10 = *(_QWORD *)(a1 + 16);
      if ( v10 >= 0 )
        goto LABEL_8;
    }
    if ( v9 <= (float)((float)((float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
                             + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1)))
                     * *(float *)(v8 + 8)) )
      goto LABEL_9;
    goto LABEL_15;
  }
  result = 0LL;
  if ( a3 )
    *a3 = v5;
  return result;
}

__int64 __fastcall sub_406C00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  v2 = a2;
  v3 = sub_406980(a1, a2, &v5);
  if ( v3 == -1 )
    return 0LL;
  if ( !v3 )
    return v5;
  return v2;
}

__int64 __fastcall sub_406C40(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __m128i *v4; // rax
  __int64 v6; // rax
  float *v7; // rdx
  float v8; // xmm0_4
  __int64 v9; // rax
  float v10; // xmm1_4
  __int64 v11; // rax
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rax
  float v15; // xmm1_4
  float v16; // xmm0_4
  __int64 v17; // rsi
  _QWORD *v18; // rdi
  _QWORD *v19; // r12
  int v20; // edx
  float v21; // xmm0_4
  __int64 v22; // rcx
  __int64 v23; // rcx
  __m128i *v24; // [rsp+8h] [rbp-20h] BYREF

  v3 = sub_405CC0(a1, a2, &v24, 1);
  if ( !v3 )
    return v3;
  v4 = v24;
  --*(_QWORD *)(a1 + 32);
  if ( v4->m128i_i64[0] )
    return v3;
  v6 = *(_QWORD *)(a1 + 24) - 1LL;
  *(_QWORD *)(a1 + 24) = v6;
  if ( v6 < 0 )
  {
    v20 = v6 & 1 | ((unsigned __int64)v6 >> 1);
    v9 = *(_QWORD *)(a1 + 16);
    v21 = (float)v20;
    v7 = *(float **)(a1 + 40);
    v8 = v21 + v21;
    if ( v9 >= 0 )
      goto LABEL_6;
LABEL_22:
    v10 = (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1))
        + (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1));
    goto LABEL_7;
  }
  v7 = *(float **)(a1 + 40);
  v8 = (float)(int)v6;
  v9 = *(_QWORD *)(a1 + 16);
  if ( v9 < 0 )
    goto LABEL_22;
LABEL_6:
  v10 = (float)(int)v9;
LABEL_7:
  if ( (float)(v10 * *v7) > v8 )
  {
    sub_405DE0((float **)(a1 + 40));
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_QWORD *)(a1 + 40);
    if ( v11 < 0 )
    {
      v23 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
      v13 = (float)(int)v23 + (float)(int)v23;
    }
    else
    {
      v13 = (float)(int)v11;
    }
    v14 = *(_QWORD *)(a1 + 24);
    if ( v14 < 0 )
    {
      v22 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
      v15 = (float)(int)v22 + (float)(int)v22;
    }
    else
    {
      v15 = (float)(int)v14;
    }
    if ( (float)(*(float *)v12 * v13) > v15 )
    {
      v16 = v13 * *(float *)(v12 + 4);
      if ( !*(_BYTE *)(v12 + 16) )
        v16 = v16 * *(float *)(v12 + 8);
      if ( v16 >= 9.223372e18 )
        v17 = (unsigned int)(int)(float)(v16 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v17 = (unsigned int)(int)v16;
      if ( !(unsigned __int8)sub_406780(a1, v17) )
      {
        v18 = *(_QWORD **)(a1 + 72);
        if ( v18 )
        {
          do
          {
            v19 = (_QWORD *)v18[1];
            free(v18);
            v18 = v19;
          }
          while ( v19 );
        }
        *(_QWORD *)(a1 + 72) = 0LL;
      }
    }
  }
  return v3;
}

unsigned __int64 __fastcall sub_406E20(_QWORD *a1, unsigned __int64 a2)
{
  return (a1[1] ^ (unsigned __int64)sub_40DC40(*a1)) % a2;
}

bool __fastcall sub_406E90(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8) && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) )
    return strcmp(*(const char **)a1, *(const char **)a2) == 0;
  return result;
}

void __fastcall sub_406ED0(void **ptr)
{
  free(*ptr);
  free(ptr);
}

long double __fastcall sub_406EF0(int a1, long double a2)
{
  unsigned __int64 v7; // rax
  long double v8; // fst6
  long double result; // fst7

  if ( a2 >= 9.223372e18 )
    v7 = (__int64)(a2 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    v7 = (__int64)a2;
  v8 = (long double)v7;
  if ( a1 )
    return v8;
  result = v8;
  if ( a2 != v8 )
    return (long double)(v7 + 1);
  return result;
}

char *__fastcall sub_406FB0(__int64 a1, __int64 a2, __int16 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  struct lconv *v7; // rax
  const char *decimal_point; // r15
  struct lconv *v9; // r12
  size_t v10; // r8
  char *grouping; // rax
  const char *thousands_sep; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  long double v15; // fst7
  long double v16; // fst6
  long double v17; // fst7
  long double v18; // fst6
  long double v19; // fst7
  long double v20; // fst6
  int v21; // ebx
  long double v22; // fst5
  long double v23; // fst4
  long double v24; // fst7
  long double v25; // fst6
  long double v26; // fst7
  size_t v27; // r14
  long double v28; // fst7
  unsigned __int64 v29; // r15
  long double v30; // fst6
  size_t v31; // rax
  long double v32; // fst6
  long double v33; // fst7
  size_t v34; // r14
  char *v35; // r15
  char *v36; // r14
  int v37; // eax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rtt
  unsigned __int64 v41; // rdx
  int v42; // r9d
  int v43; // edi
  int v44; // ecx
  char *v45; // rbp
  unsigned __int8 *v46; // r15
  size_t v47; // rbx
  size_t v48; // rbp
  unsigned __int8 v49; // dl
  size_t v50; // rax
  size_t v51; // rbp
  char *v52; // r14
  unsigned __int64 v53; // rax
  char *v54; // rdx
  unsigned __int64 v55; // r11
  int v56; // eax
  unsigned int v57; // edx
  unsigned int v58; // edi
  bool v59; // dl
  char v60; // al
  unsigned __int64 v61; // r9
  unsigned int v62; // edx
  __int64 v63; // rdi
  unsigned __int64 v64; // rcx
  signed __int64 v65; // r15
  unsigned int v66; // edx
  __int64 v67; // rsi
  char *v68; // [rsp+10h] [rbp-A8h]
  int v71; // [rsp+24h] [rbp-94h]
  int v72; // [rsp+24h] [rbp-94h]
  size_t v74; // [rsp+30h] [rbp-88h]
  long double v75; // [rsp+30h] [rbp-88h]
  float v76; // [rsp+30h] [rbp-88h]
  size_t v77; // [rsp+30h] [rbp-88h]
  long double v78; // [rsp+30h] [rbp-88h]
  int v79; // [rsp+40h] [rbp-78h]
  unsigned int v80; // [rsp+44h] [rbp-74h]
  char *v81; // [rsp+48h] [rbp-70h]
  char src[104]; // [rsp+50h] [rbp-68h] BYREF

  v79 = a3 & 0x20;
  v71 = a3 & 3;
  v80 = v79 == 0 ? 1000 : 1024;
  v7 = localeconv();
  decimal_point = v7->decimal_point;
  v9 = v7;
  v10 = strlen(v7->decimal_point);
  if ( v10 - 1 >= 0x10 )
    decimal_point = ".." + 1;
  grouping = v9->grouping;
  thousands_sep = v9->thousands_sep;
  if ( v10 - 1 >= 0x10 )
    v10 = 1LL;
  v74 = v10;
  v81 = grouping;
  if ( strlen(thousands_sep) >= 0x11 )
    thousands_sep = "";
  v68 = (char *)(a2 + 647);
  if ( a5 > a4 )
  {
    if ( !a4 || (v39 = a5 / a4, a5 % a4) )
    {
LABEL_10:
      v15 = (long double)a4;
      v16 = (long double)(__int64)a5;
      if ( (a5 & 0x8000000000000000LL) != 0LL )
      {
        v17 = v15 / (v16 + 1.8446744e19);
        v18 = (long double)a1;
        if ( a1 >= 0 )
        {
LABEL_12:
          v19 = v17 * v18;
          if ( (a3 & 0x10) != 0 )
          {
LABEL_13:
            v20 = (long double)(int)v80;
            v21 = 0;
            v22 = v20;
            while ( 1 )
            {
              ++v21;
              v23 = v19;
              v24 = v22 * v20;
              if ( v23 < v24 )
                break;
              if ( v21 == 8 )
              {
                v25 = v23;
                v26 = v22;
                goto LABEL_19;
              }
              v22 = v24;
              v19 = v23;
            }
            v25 = v23;
            v26 = v22;
LABEL_19:
            v27 = v74 + 1;
            v28 = v25 / v26;
            v29 = v74 + 1 + (v79 == 0) + 1;
            if ( v71 == 1 )
            {
              __sprintf_chk(a2, 1LL, -1LL, "%.1Lf", v28);
              v31 = strlen((const char *)a2);
              if ( v31 > v29 )
              {
                v32 = 10.0;
                v33 = v28 * 10.0;
                goto LABEL_26;
              }
            }
            else
            {
              if ( v28 < 1.8446744073709551615e19 )
              {
                v78 = v28;
                v28 = sub_406EF0(v71, v28);
                v30 = v78;
              }
              else
              {
                v30 = v28;
              }
              v75 = v30;
              __sprintf_chk(a2, 1LL, -1LL, "%.1Lf", v28);
              v31 = strlen((const char *)a2);
              v28 = v30;
              if ( v31 > v29 )
              {
                v32 = 10.0;
                v33 = v75 * 10.0;
LABEL_24:
                if ( v33 < 1.8446744073709551615e19 )
                {
                  v76 = v32;
                  v33 = sub_406EF0(v71, v33);
                  v32 = v76;
                }
                goto LABEL_26;
              }
            }
            if ( (a3 & 8) == 0 || *(_BYTE *)(a2 + v31 - 1) != 48 )
            {
              v34 = v31 - v27;
              goto LABEL_31;
            }
            v32 = 10.0;
            v33 = v28 * 10.0;
            if ( v71 != 1 )
              goto LABEL_24;
LABEL_26:
            __sprintf_chk(a2, 1LL, -1LL, "%.0Lf", v33 / v32);
            v31 = strlen((const char *)a2);
            v34 = v31;
LABEL_31:
            v35 = &v68[-v31];
            v36 = &v68[v34 - v31];
            memmove(&v68[-v31], (const void *)a2, v31);
            goto LABEL_32;
          }
LABEL_27:
          if ( v71 != 1 && v19 < 1.8446744073709551615e19 )
            v19 = sub_406EF0(v71, v19);
          __sprintf_chk(a2, 1LL, -1LL, "%.0Lf", v19);
          v21 = -1;
          v31 = strlen((const char *)a2);
          v34 = v31;
          goto LABEL_31;
        }
      }
      else
      {
        v17 = v15 / v16;
        v18 = (long double)a1;
        if ( a1 >= 0 )
          goto LABEL_12;
      }
      v19 = v17 * (v18 + 1.8446744e19);
      if ( (a3 & 0x10) != 0 )
        goto LABEL_13;
      goto LABEL_27;
    }
    v14 = a1 / v39;
    v40 = 10 * (a1 % v39);
    v41 = 2 * (v40 % v39);
    v42 = v40 / v39;
    if ( v39 <= v41 )
      v43 = (v39 < v41) + 2;
    else
      v43 = v41 != 0;
    v44 = a3 & 0x10;
    if ( (a3 & 0x10) == 0 )
      goto LABEL_85;
  }
  else
  {
    v13 = a4 / a5;
    if ( a4 % a5 )
      goto LABEL_10;
    v14 = a1 * v13;
    if ( a1 * v13 / (a4 / a5) != a1 )
      goto LABEL_10;
    v43 = 0;
    v42 = 0;
    v44 = a3 & 0x10;
    if ( (a3 & 0x10) == 0 )
    {
LABEL_85:
      v21 = -1;
      goto LABEL_47;
    }
  }
  v21 = 0;
  if ( v80 <= v14 )
  {
    while ( 1 )
    {
      v55 = v14 / v80;
      v56 = (v42 + 10 * (v14 % v80)) / v80;
      v57 = (v43 >> 1) + 2 * ((v42 + 10 * (v14 % v80)) % v80);
      v42 = v56;
      v14 = v55;
      v58 = v57 + v43;
      v43 = v80 > v57 ? v58 != 0 : (v80 < v58) + 2;
      ++v21;
      if ( v80 > v55 )
        break;
      if ( v21 == 8 )
        goto LABEL_47;
    }
    if ( v55 <= 9 )
    {
      if ( v71 == 1 )
        v59 = v43 + (v56 & 1) > 2;
      else
        v59 = v43 > 0 && v71 == 0;
      if ( v59 )
      {
        if ( ++v56 == 10 )
        {
          v14 = v55 + 1;
          if ( v55 == 9 )
          {
            v36 = v68;
LABEL_114:
            v43 = 0;
            goto LABEL_115;
          }
          v43 = 0;
          goto LABEL_107;
        }
      }
      else if ( !v56 )
      {
LABEL_107:
        v36 = v68;
        if ( (a3 & 8) != 0 )
        {
LABEL_115:
          if ( v71 == 1 )
            goto LABEL_52;
          v42 = 0;
          goto LABEL_48;
        }
        v60 = 48;
        goto LABEL_109;
      }
      v60 = v56 + 48;
LABEL_109:
      *(_BYTE *)(a2 + 646) = v60;
      v36 = (char *)(a2 + 646 - v74);
      if ( (unsigned int)v74 >= 8 )
      {
        v61 = (unsigned __int64)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)v36 = *(_QWORD *)decimal_point;
        *(_QWORD *)&v36[(unsigned int)v74 - 8] = *(_QWORD *)&decimal_point[(unsigned int)v74 - 8];
        if ( (((_DWORD)a2 + 646 - (_DWORD)v61) & 0xFFFFFFF8) >= 8 )
        {
          v62 = 0;
          do
          {
            v63 = v62;
            v62 += 8;
            *(_QWORD *)(v61 + v63) = *(_QWORD *)(decimal_point - &v36[-v61] + v63);
          }
          while ( v62 < (((_DWORD)a2 + 646 - (_DWORD)v61) & 0xFFFFFFF8) );
        }
      }
      else if ( (v74 & 4) != 0 )
      {
        *(_DWORD *)v36 = *(_DWORD *)decimal_point;
        *(_DWORD *)&v36[(unsigned int)v74 - 4] = *(_DWORD *)&decimal_point[(unsigned int)v74 - 4];
      }
      else if ( (_DWORD)v74 )
      {
        *v36 = *decimal_point;
        if ( (v74 & 2) != 0 )
          *(_WORD *)&v36[(unsigned int)v74 - 2] = *(_WORD *)&decimal_point[(unsigned int)v74 - 2];
      }
      goto LABEL_114;
    }
  }
LABEL_47:
  v36 = v68;
  if ( v71 == 1 )
  {
    if ( (v43 + (v14 & 1) != 0) + v42 <= 5 )
      goto LABEL_52;
    v36 = v68;
    goto LABEL_50;
  }
LABEL_48:
  if ( v71 || v42 + v43 <= 0 )
  {
LABEL_52:
    v35 = v36;
    while ( 1 )
    {
      *--v35 = v14 % 0xA + 48;
      if ( v14 <= 9 )
        break;
      v14 /= 0xAuLL;
    }
    if ( (a3 & 4) == 0 )
      goto LABEL_33;
    goto LABEL_56;
  }
LABEL_50:
  ++v14;
  if ( !v44 || v80 != v14 || v21 == 8 )
    goto LABEL_52;
  ++v21;
  if ( (a3 & 8) == 0 )
  {
    *(v36 - 1) = 48;
    v36 += ~v74;
    if ( (unsigned int)v74 >= 8 )
    {
      v64 = (unsigned __int64)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)v36 = *(_QWORD *)decimal_point;
      *(_QWORD *)&v36[(unsigned int)v74 - 8] = *(_QWORD *)&decimal_point[(unsigned int)v74 - 8];
      v65 = decimal_point - &v36[-v64];
      if ( (((_DWORD)v74 + (_DWORD)v36 - (_DWORD)v64) & 0xFFFFFFF8) >= 8 )
      {
        v66 = 0;
        do
        {
          v67 = v66;
          v66 += 8;
          *(_QWORD *)(v64 + v67) = *(_QWORD *)(v65 + v67);
        }
        while ( v66 < (((_DWORD)v74 + (_DWORD)v36 - (_DWORD)v64) & 0xFFFFFFF8) );
      }
    }
    else if ( (v74 & 4) != 0 )
    {
      *(_DWORD *)v36 = *(_DWORD *)decimal_point;
      *(_DWORD *)&v36[(unsigned int)v74 - 4] = *(_DWORD *)&decimal_point[(unsigned int)v74 - 4];
    }
    else if ( (_DWORD)v74 )
    {
      *v36 = *decimal_point;
      if ( (v74 & 2) != 0 )
        *(_WORD *)&v36[(unsigned int)v74 - 2] = *(_WORD *)&decimal_point[(unsigned int)v74 - 2];
    }
  }
  v35 = v36 - 1;
  *(v36 - 1) = 49;
LABEL_32:
  if ( (a3 & 4) == 0 )
    goto LABEL_33;
LABEL_56:
  v45 = (char *)(v36 - v35);
  v77 = strlen(thousands_sep);
  __memcpy_chk(src, v35, v36 - v35, 41LL);
  v72 = v21;
  v46 = (unsigned __int8 *)v81;
  v47 = (size_t)v45;
  v48 = -1LL;
  while ( 1 )
  {
    v49 = *v46;
    if ( *v46 )
    {
      v50 = v49;
      if ( v49 >= 0x7Fu )
        v50 = v47;
      ++v46;
      v48 = v50;
    }
    if ( v48 > v47 )
    {
      v51 = v47;
      v21 = v72;
      v35 = &v36[-v51];
      memcpy(&v36[-v51], src, v51);
      goto LABEL_33;
    }
    v52 = &v36[-v48];
    v47 -= v48;
    memcpy(v52, &src[v47], v48);
    if ( !v47 )
      break;
    v36 = &v52[-v77];
    memcpy(v36, thousands_sep, v77);
  }
  v21 = v72;
  v35 = v52;
LABEL_33:
  if ( (a3 & 0x80u) != 0 )
  {
    if ( v21 == -1 )
    {
      if ( a5 > 1 )
      {
        v21 = 1;
        v53 = 1LL;
        do
        {
          v53 *= v80;
          if ( a5 <= v53 )
            break;
          ++v21;
        }
        while ( v21 != 8 );
        v37 = a3 & 0x100;
        if ( (a3 & 0x40) == 0 )
          goto LABEL_72;
        goto LABEL_70;
      }
      v21 = 0;
    }
    v37 = a3 & 0x100;
    if ( !(v21 | v37) )
      goto LABEL_36;
    if ( (a3 & 0x40) == 0 )
    {
LABEL_71:
      if ( !v21 )
      {
        v54 = v68;
        if ( !v37 )
          goto LABEL_36;
        goto LABEL_77;
      }
LABEL_72:
      if ( !v79 && v21 == 1 )
      {
        v54 = v68 + 1;
        *v68 = 107;
        if ( v37 )
        {
LABEL_77:
          *v54 = 66;
          v68 = v54 + 1;
          goto LABEL_36;
        }
      }
      else
      {
        v54 = v68 + 1;
        *v68 = byte_412308[v21];
        if ( v37 )
        {
          if ( v79 )
          {
            v54 = v68 + 2;
            v68[1] = 105;
          }
          goto LABEL_77;
        }
      }
      v68 = v54;
      goto LABEL_36;
    }
LABEL_70:
    *(_BYTE *)(a2 + 647) = 32;
    v68 = (char *)(a2 + 648);
    goto LABEL_71;
  }
LABEL_36:
  *v68 = 0;
  return v35;
}

__int64 __fastcall sub_407980(char *nptr, int *a2, __int64 *a3)
{
  char *v4; // rbx
  int v5; // ebp
  int v6; // eax
  int v7; // ebp
  __int64 result; // rax
  __int64 v9; // rdx
  char *v10; // [rsp+8h] [rbp-30h]

  v4 = nptr;
  if ( nptr || (v4 = getenv("BLOCK_SIZE")) != 0LL || (v4 = getenv("BLOCKSIZE")) != 0LL )
  {
    v5 = 0;
    if ( *v4 == 39 )
    {
      ++v4;
      v5 = 4;
    }
    v6 = sub_40D7B0(v4, off_4122F0, dword_4122E0, 4LL);
    if ( v6 >= 0 )
    {
      *a3 = 1LL;
      v7 = dword_4122E0[v6] | v5;
      result = 0LL;
      *a2 = v7;
      return result;
    }
    result = sub_40A8B0(v4);
    if ( (_DWORD)result )
    {
      *a2 = 0;
      v9 = *a3;
LABEL_15:
      if ( !v9 )
      {
        *a3 = getenv("POSIXLY_CORRECT") == 0LL ? 1024LL : 512LL;
        return 4LL;
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
    v9 = *a3;
    *a2 = v5;
    goto LABEL_15;
  }
  result = (__int64)getenv("POSIXLY_CORRECT");
  if ( result )
  {
    *a3 = 512LL;
    result = 0LL;
  }
  else
  {
    *a3 = 1024LL;
  }
  *a2 = 0;
  return result;
}

__int64 __fastcall sub_407B40(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  while ( 1 )
  {
    *(_BYTE *)--v2 = a1 % 0xA + 48;
    if ( a1 <= 9 )
      break;
    a1 /= 0xAuLL;
  }
  return v2;
}

__int64 __fastcall sub_407B90(const char *a1, _BYTE *a2, __int64 a3, size_t *a4, int a5, char a6)
{
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // r15
  char *v12; // r12
  size_t v13; // rdx
  size_t v14; // rax
  int v15; // esi
  size_t v16; // r13
  size_t v17; // r15
  unsigned __int64 v18; // rbp
  _BYTE *v19; // rdi
  size_t v20; // rdx
  _BYTE *v21; // rax
  _BYTE *v22; // rdx
  __int64 v23; // r13
  size_t v25; // r12
  size_t v26; // rax
  size_t v27; // r15
  wint_t v28; // edi
  wchar_t *v29; // rdx
  char *v30; // rax
  wchar_t *v31; // r14
  wchar_t v32; // edi
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  wchar_t *ptr; // [rsp+0h] [rbp-68h]
  void *src; // [rsp+18h] [rbp-50h]
  void *srca; // [rsp+18h] [rbp-50h]
  __int64 size; // [rsp+20h] [rbp-48h]
  char sizea; // [rsp+20h] [rbp-48h]
  size_t sizeb; // [rsp+20h] [rbp-48h]
  wchar_t *v43; // [rsp+28h] [rbp-40h]

  src = (void *)a1;
  v9 = strlen(a1);
  v10 = v9;
  if ( (a6 & 2) != 0 || (v25 = v9, __ctype_get_mb_cur_max() <= 1) )
  {
LABEL_2:
    ptr = 0LL;
    v11 = v10;
    v12 = 0LL;
    goto LABEL_3;
  }
  v26 = mbstowcs(0LL, a1, 0LL);
  if ( v26 == -1LL )
  {
    if ( (a6 & 1) == 0 )
    {
LABEL_36:
      v12 = 0LL;
      v23 = -1LL;
      free(0LL);
      goto LABEL_28;
    }
    goto LABEL_2;
  }
  v27 = v26 + 1;
  size = v26 + 1;
  ptr = (wchar_t *)malloc(size * 4);
  if ( !ptr )
  {
    v11 = v10;
    v12 = 0LL;
    if ( (a6 & 1) == 0 )
      goto LABEL_36;
LABEL_3:
    v13 = *a4;
    if ( *a4 < v11 )
    {
      v10 = *a4;
      v14 = 0LL;
      goto LABEL_5;
    }
LABEL_30:
    if ( v11 < v13 )
    {
      v15 = a5;
      v14 = v13 - v11;
      *a4 = v11;
      if ( a5 )
      {
LABEL_6:
        v16 = 0LL;
        if ( v15 != 1 )
        {
          v16 = v14 >> 1;
          v14 = (v14 >> 1) + (v14 & 1);
        }
        goto LABEL_8;
      }
LABEL_32:
      v16 = v14;
      v14 = 0LL;
LABEL_8:
      v17 = v14 + v10;
      if ( (a6 & 4) != 0 )
      {
        v17 = v10;
        v14 = 0LL;
      }
      if ( (a6 & 8) != 0 )
        v16 = 0LL;
      if ( a3 )
      {
        v18 = (unsigned __int64)&a2[a3 - 1];
        v19 = a2;
        if ( (unsigned __int64)a2 < v18 && v14 )
        {
          do
            *v19++ = 32;
          while ( v14 + a2 - v19 && v18 > (unsigned __int64)v19 );
        }
        *v19 = 0;
        v20 = v18 - (_QWORD)v19;
        if ( v18 - (unsigned __int64)v19 > v10 )
          v20 = v10;
        v21 = mempcpy(v19, src, v20);
        v22 = v21;
        if ( v18 > (unsigned __int64)v21 && v16 )
        {
          do
            *v22++ = 32;
          while ( &v21[v16 - (_QWORD)v22] && v18 > (unsigned __int64)v22 );
        }
        *v22 = 0;
      }
      v23 = v17 + v16;
      goto LABEL_27;
    }
    v13 = v11;
    v14 = 0LL;
LABEL_5:
    v15 = a5;
    *a4 = v13;
    if ( a5 )
      goto LABEL_6;
    goto LABEL_32;
  }
  if ( !mbstowcs(ptr, a1, v27) )
  {
    v11 = v10;
    v12 = 0LL;
    goto LABEL_3;
  }
  ptr[size - 1] = 0;
  v28 = *ptr;
  v29 = ptr;
  if ( *ptr )
  {
    sizea = 0;
    do
    {
      v43 = v29;
      if ( !iswprint(v28) )
      {
        *v43 = 65533;
        sizea = 1;
      }
      v29 = v43 + 1;
      v28 = v43[1];
    }
    while ( v28 );
    v11 = wcswidth(ptr, v27);
    if ( sizea )
    {
      sizeb = wcstombs(0LL, ptr, 0LL) + 1;
      v30 = (char *)malloc(sizeb);
      goto LABEL_46;
    }
  }
  else
  {
    v11 = wcswidth(ptr, v27);
  }
  v13 = *a4;
  if ( *a4 >= v11 )
  {
    v12 = 0LL;
    goto LABEL_30;
  }
  sizeb = v25 + 1;
  v30 = (char *)malloc(v25 + 1);
LABEL_46:
  v12 = v30;
  if ( v30 )
  {
    v31 = ptr;
    v32 = *ptr;
    srca = (void *)*a4;
    if ( *ptr )
    {
      v11 = 0LL;
      do
      {
        LODWORD(v33) = wcwidth(v32);
        if ( (_DWORD)v33 == -1 )
        {
          *v31 = 65533;
          v33 = 1LL;
        }
        else
        {
          v33 = (int)v33;
        }
        v34 = v11 + v33;
        if ( (unsigned __int64)srca < v34 )
          break;
        v32 = *++v31;
        v11 = v34;
      }
      while ( *v31 );
    }
    else
    {
      v31 = ptr;
      v11 = 0LL;
    }
    *v31 = 0;
    src = v12;
    v10 = wcstombs(v12, ptr, sizeb);
    goto LABEL_3;
  }
  if ( (a6 & 1) != 0 )
    goto LABEL_3;
  v23 = -1LL;
LABEL_27:
  free(ptr);
LABEL_28:
  free(v12);
  return v23;
}

_BYTE *__fastcall sub_407F30(const char *a1, size_t *a2, int a3, char a4)
{
  void *v4; // r12
  size_t v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  _BYTE *v8; // rax
  _BYTE *v9; // r14
  void *v11; // rdi

  v4 = 0LL;
  v5 = *a2;
  v6 = *a2;
  while ( 1 )
  {
    v7 = v6 + 1;
    v8 = realloc(v4, v6 + 1);
    v9 = v8;
    if ( !v8 )
    {
      free(v4);
      return v9;
    }
    *a2 = v5;
    v6 = sub_407B90(a1, v8, v7, a2, a3, a4);
    if ( v6 == -1LL )
      break;
    v4 = v9;
    if ( v7 > v6 )
      return v9;
  }
  v11 = v9;
  v9 = 0LL;
  free(v11);
  return v9;
}

__int64 __fastcall sub_407FD0(char *s, __int64 a2, char a3)
{
  char *v4; // r13
  char *v5; // rbx
  unsigned int v6; // r12d
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // eax
  int v12; // r15d
  const unsigned __int16 *v13; // rdx
  unsigned __int16 v14; // ax
  wchar_t c; // [rsp+4h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+8h] [rbp-40h] BYREF

  v4 = &s[a2];
  v5 = s;
  if ( __ctype_get_mb_cur_max() <= 1 )
  {
    v6 = 0;
    if ( s >= v4 )
      return v6;
    v6 = 0;
    v12 = a3 & 2;
    v13 = *__ctype_b_loc();
    while ( 1 )
    {
      v14 = v13[(unsigned __int8)*v5++];
      if ( (v14 & 0x4000) != 0 )
        goto LABEL_33;
      if ( v12 )
        return (unsigned int)-1;
      if ( (v14 & 2) == 0 )
      {
LABEL_33:
        if ( v6 == 0x7FFFFFFF )
          return v6;
        ++v6;
      }
      if ( v4 == v5 )
        return v6;
    }
  }
  v6 = 0;
  if ( s < v4 )
  {
    do
    {
      v7 = *v5;
      if ( *v5 <= 63 )
      {
        if ( v7 < 37 && (unsigned __int8)(v7 - 32) > 3u )
        {
LABEL_12:
          ps = 0LL;
          while ( 1 )
          {
            v8 = sub_40C400(&c, v5);
            v9 = v8;
            if ( v8 == -1 )
            {
              if ( (a3 & 1) == 0 )
                goto LABEL_6;
              return (unsigned int)-1;
            }
            if ( v8 == -2 )
              break;
            if ( !v8 )
              v9 = 1LL;
            v10 = wcwidth(c);
            if ( v10 >= 0 )
            {
              if ( (int)(0x7FFFFFFF - v6) < v10 )
                return 0x7FFFFFFF;
              v6 += v10;
            }
            else
            {
              if ( (a3 & 2) != 0 )
                return (unsigned int)-1;
              if ( !iswcntrl(c) )
              {
                if ( v6 == 0x7FFFFFFF )
                  return 0x7FFFFFFF;
                ++v6;
              }
            }
            v5 += v9;
            if ( mbsinit(&ps) )
              goto LABEL_7;
          }
          if ( (a3 & 1) != 0 )
            return (unsigned int)-1;
          ++v6;
          v5 = &s[a2];
          continue;
        }
      }
      else if ( v7 < 65 || v7 > 95 && (unsigned __int8)(v7 - 97) > 0x1Du )
      {
        goto LABEL_12;
      }
LABEL_6:
      ++v5;
      ++v6;
LABEL_7:
      ;
    }
    while ( v5 < v4 );
  }
  return v6;
}

__int64 __fastcall sub_408190(char *s, char a2)
{
  __int64 v2; // rax

  v2 = strlen(s);
  return sub_407FD0(s, v2, a2);
}

char *__fastcall sub_4081C0(const char *a1)
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
  qword_617708 = v1;
  program_invocation_name = v1;
  return result;
}

const char *__fastcall sub_408260(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  __int64 v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_40DC80();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_41237F;
      if ( !v5 )
        return (const char *)&unk_412374;
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
    v2 = (char *)&unk_41237B;
    if ( !v5 )
      return (const char *)&unk_412378;
    return v2;
  }
  v6 = 4263910LL;
  if ( a2 != 9 )
    return "'";
  return (const char *)v6;
}

unsigned __int64 __fastcall sub_408360(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        const char *a8,
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
  const char *v58; // rax
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
  const char *s2; // [rsp+50h] [rbp-78h]
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
                return sub_408360((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_408360((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_40C400((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_408360((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        s2 = "!\"field used\"" + 12;
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
        s2 = "!\"field used\"" + 12;
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
      s2 = "!\"field used\"" + 12;
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
        a8 = sub_408260("`", a5);
        v51 = (char *)sub_408260((char *)"'", a5);
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

unsigned __int64 __fastcall sub_408360(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        const char *a8,
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
  const char *v58; // rax
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
  const char *s2; // [rsp+50h] [rbp-78h]
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
                return sub_408360((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_408360((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_40C400((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_408360((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        s2 = "!\"field used\"" + 12;
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
        s2 = "!\"field used\"" + 12;
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
      s2 = "!\"field used\"" + 12;
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
        a8 = sub_408260("`", a5);
        v51 = (char *)sub_408260((char *)"'", a5);
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

_BYTE *__fastcall sub_409590(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  if ( (int)a1 < 0 )
    abort();
  if ( dword_6175D0 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_40A7B0(a1, a2);
    v9 = 16LL * ((int)a1 + 1);
    if ( ptr == &xmmword_6175C0 )
    {
      v7 = (__m128i *)sub_40A5C0(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_6175C0);
    }
    else
    {
      ptr = (void *)sub_40A5C0(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_6175D0], 0, 16LL * ((int)a1 + 1 - dword_6175D0));
    dword_6175D0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[(int)a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_408360(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_617720 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_40A560(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_408360(v14, v13, a2, a3, v15, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_409590(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  if ( (int)a1 < 0 )
    abort();
  if ( dword_6175D0 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_40A7B0(a1, a2);
    v9 = 16LL * ((int)a1 + 1);
    if ( ptr == &xmmword_6175C0 )
    {
      v7 = (__m128i *)sub_40A5C0(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_6175C0);
    }
    else
    {
      ptr = (void *)sub_40A5C0(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_6175D0], 0, 16LL * ((int)a1 + 1 - dword_6175D0));
    dword_6175D0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[(int)a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_408360(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_617720 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_40A560(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_408360(v14, v13, a2, a3, v15, v21, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

__int64 __fastcall sub_409730(__int128 *a1)
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
    v1 = &xmmword_617820;
  result = sub_40A760(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_409820(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_617820;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_408360(
             a1,
             a2,
             a3,
             a4,
             *(_DWORD *)v6,
             *((_DWORD *)v6 + 1),
             (__int64)v6 + 8,
             *((const char **)v6 + 5),
             *((char **)v6 + 6));
  *v9 = v8;
  return result;
}

_BYTE *__fastcall sub_4098A0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_617820;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_408360(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_40A560(v11 + 1);
  sub_408360(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_4099A0()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( dword_6175D0 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_6175D0 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_617720 )
  {
    free(v4);
    *(_QWORD *)&xmmword_6175C0 = 256LL;
    *((_QWORD *)&xmmword_6175C0 + 1) = &unk_617720;
  }
  if ( v0 != &xmmword_6175C0 )
  {
    free(v0);
    ptr = &xmmword_6175C0;
  }
  dword_6175D0 = 1;
}

_BYTE *__fastcall sub_409AB0(__int64 a1, int a2, __int64 a3)
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
  return sub_409590(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_409AB0(__int64 a1, int a2, __int64 a3)
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
  return sub_409590(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_409B20(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_409590(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_409B20(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_409590(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_409B90(int a1, __int64 a2)
{
  return sub_409AB0(0LL, a1, a2);
}

_BYTE *__fastcall sub_409BB0(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_617850;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_617820);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_617830);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_617840);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_409590(0LL, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_409C30(__int64 a1)
{
  return sub_409BB0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_409C60(__int64 a1, int a2, __int64 a3)
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
  return sub_409590(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_409C60(__int64 a1, int a2, __int64 a3)
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
  return sub_409590(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_409CD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_617820);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_617830);
  si128 = _mm_load_si128((const __m128i *)&xmmword_617840);
  v8 = qword_617850;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_409590(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_409DC0(__int64 a1, __int64 a2)
{
  return sub_409590(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_617580);
}

_BYTE *__fastcall sub_409DE0(__int64 a1)
{
  return sub_409590(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_617580);
}

__int64 __fastcall sub_409E00(_BYTE *a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  const char *v3; // rbp
  const char *v4; // r12
  size_t v5; // r13
  char *v7; // rbp
  char *v8; // r12
  int *v9; // rax
  int *v10; // rax
  struct stat v11; // [rsp+0h] [rbp-158h] BYREF
  struct stat stat_buf; // [rsp+90h] [rbp-C8h] BYREF

  v2 = 0;
  v3 = sub_405A70(a1);
  v4 = sub_405A70(a2);
  v5 = sub_405AD0(v3);
  if ( v5 == sub_405AD0(v4) && !memcmp(v3, v4, v5) )
  {
    v7 = (char *)sub_405990(a1, (__int64)v4);
    v8 = (char *)sub_405990(a2, (__int64)v4);
    if ( __xstat(1, v7, &v11) )
    {
      v10 = __errno_location();
      error(1, *v10, "%s", v7);
    }
    if ( __xstat(1, v8, &stat_buf) )
    {
      v9 = __errno_location();
      error(1, *v9, "%s", v8);
    }
    v2 = 0;
    if ( v11.st_ino == stat_buf.st_ino )
      LOBYTE(v2) = v11.st_dev == stat_buf.st_dev;
    free(v7);
    free(v8);
  }
  return v2;
}

__int64 __fastcall sub_409F30(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v6; // edx
  __int64 result; // rax
  __int64 v8; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  v6 = sub_40DB90(4268428, 0x80000, a3, a4, a5, a6);
  *(_DWORD *)a1 = v6;
  result = 0LL;
  if ( v6 < 0 )
  {
    v8 = sub_40B160(0LL, 0LL);
    *(_QWORD *)(a1 + 8) = v8;
    return (unsigned int)-(v8 == 0);
  }
  return result;
}

int __fastcall sub_409F80(__int64 a1)
{
  if ( *(int *)a1 < 0 )
    return sub_40AE00(*(void **)(a1 + 8));
  else
    return fchdir(*(_DWORD *)a1);
}

void __fastcall sub_409FA0(__int64 a1)
{
  int v2; // edi

  v2 = *(_DWORD *)a1;
  if ( v2 >= 0 )
    close(v2);
  free(*(void **)(a1 + 8));
}

__int64 __fastcall sub_409FC0(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  char *v17; // rax
  const char *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rbx
  char *v53; // rax
  __int64 v54; // r8
  __int64 v55; // [rsp-10h] [rbp-68h]
  __int64 v56; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+0h] [rbp-58h]
  __int64 v58; // [rsp+0h] [rbp-58h]
  __int64 v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  __int64 v65; // [rsp+18h] [rbp-40h]

  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3, a4);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8, 2017LL);
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
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v40, v39, v38, v37, v36);
      return v55;
    case 6LL:
      v41 = a5[5];
      v42 = a5[4];
      v43 = a5[3];
      v58 = a5[1];
      v44 = a5[2];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v46, v45, v58, v44, v43, v42, v41);
    case 7LL:
      v47 = a5[6];
      v48 = a5[5];
      v49 = a5[4];
      v50 = a5[3];
      v51 = a5[1];
      v62 = a5[2];
      v52 = *a5;
      v59 = v51;
      v53 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v53, v52, v59, v62, v50, v49, v48, v47);
    case 8LL:
      v10 = a5[2];
      v11 = a5[1];
      v12 = a5[6];
      v13 = a5[5];
      v14 = a5[4];
      v63 = a5[7];
      v15 = a5[3];
      v16 = *a5;
      v56 = v10;
      v60 = v11;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16, v60, v56, v15, v14, v13, v12, v63);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v54 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v54;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return __fprintf_chk(stream, 1LL, v26, v25, v61, v57, v24, v23, v22, v21, v64, v65);
  }
}

__int64 __fastcall sub_409FC0(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  char *v17; // rax
  const char *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rbx
  char *v53; // rax
  __int64 v54; // r8
  __int64 v55; // [rsp-10h] [rbp-68h]
  __int64 v56; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+0h] [rbp-58h]
  __int64 v58; // [rsp+0h] [rbp-58h]
  __int64 v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  __int64 v65; // [rsp+18h] [rbp-40h]

  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3, a4);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8, 2017LL);
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
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v40, v39, v38, v37, v36);
      return v55;
    case 6LL:
      v41 = a5[5];
      v42 = a5[4];
      v43 = a5[3];
      v58 = a5[1];
      v44 = a5[2];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v46, v45, v58, v44, v43, v42, v41);
    case 7LL:
      v47 = a5[6];
      v48 = a5[5];
      v49 = a5[4];
      v50 = a5[3];
      v51 = a5[1];
      v62 = a5[2];
      v52 = *a5;
      v59 = v51;
      v53 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v53, v52, v59, v62, v50, v49, v48, v47);
    case 8LL:
      v10 = a5[2];
      v11 = a5[1];
      v12 = a5[6];
      v13 = a5[5];
      v14 = a5[4];
      v63 = a5[7];
      v15 = a5[3];
      v16 = *a5;
      v56 = v10;
      v60 = v11;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16, v60, v56, v15, v14, v13, v12, v63);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v54 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v54;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return __fprintf_chk(stream, 1LL, v26, v25, v61, v57, v24, v23, v22, v21, v64, v65);
  }
}

__int64 __fastcall sub_40A3C0(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
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
        return sub_409FC0(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_409FC0(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_40A420(
        FILE *a1,
        const char *a2,
        const char *a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        char a7)
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
        return sub_409FC0(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_409FC0(a1, a2, a3, a4, v15, i);
}

int sub_40A4E0()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_4110B6);
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_40A560(size_t a1, __int64 a2)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_40A7B0(a1, a2);
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_40A5B0(size_t a1, __int64 a2)
{
  return sub_40A560(a1, a2);
}

void *__fastcall sub_40A5C0(void *a1, size_t a2)
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
        sub_40A7B0(a1, a2);
    }
  }
  return result;
}

void *__fastcall sub_40A710(size_t n, __int64 a2)
{
  void *v2; // rax

  v2 = sub_40A560(n, a2);
  return memset(v2, 0, n);
}

void *__fastcall sub_40A730(unsigned __int64 a1, unsigned __int64 a2)
{
  void *result; // rax

  if ( ((a2 * a1) & 0x8000000000000000LL) != 0LL || !is_mul_ok(a2, a1) || (result = calloc(a1, a2)) == 0LL )
    sub_40A7B0(a1, a2);
  return result;
}

void *__fastcall sub_40A760(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_40A560(n, n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_40A790(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_40A760(src, v1 + 1);
}

void __noreturn sub_40A7B0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 sub_40A7F0()
{
  __int64 v0; // rbx

  v0 = sub_40B160(0LL, 0LL);
  if ( !v0 && *__errno_location() == 12 )
    sub_40A7B0();
  return v0;
}

void __fastcall __noreturn sub_40A820(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  const char *v9; // rsi
  char *v10; // r12
  char *v11; // r13
  char *v12; // rax
  char v13[42]; // [rsp+Eh] [rbp-2Ah] BYREF

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v9 = (&off_4134E0)[v5];
    if ( a2 < 0 )
    {
      v13[0] = a3;
      v11 = v13;
      v10 = &asc_413460[-a2];
      v13[1] = 0;
    }
    else
    {
      v10 = "--";
      v11 = *(char **)(a4 + 32LL * a2);
    }
    v12 = dcgettext(0LL, v9, 5);
    error(v6, 0, v12, v10, v11, a5);
    abort();
  }
  abort();
}

void __fastcall __noreturn sub_40A820(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  const char *v9; // rsi
  char *v10; // r12
  char *v11; // r13
  char *v12; // rax
  char v13[42]; // [rsp+Eh] [rbp-2Ah] BYREF

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v9 = (&off_4134E0)[v5];
    if ( a2 < 0 )
    {
      v13[0] = a3;
      v11 = v13;
      v10 = &asc_413460[-a2];
      v13[1] = 0;
    }
    else
    {
      v10 = "--";
      v11 = *(char **)(a4 + 32LL * a2);
    }
    v12 = dcgettext(0LL, v9, 5);
    error(v6, 0, v12, v10, v11, a5);
    abort();
  }
  abort();
}

__int64 __fastcall sub_40A8B0(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
{
  char **p_endptr; // r15
  int *v8; // rax
  int *v9; // r12
  unsigned __int8 v10; // bl
  const unsigned __int16 *v11; // rsi
  char *v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // ebp
  int v15; // r12d
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
  int v28; // r9d
  bool v29; // of
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  char *basea; // [rsp+0h] [rbp-58h]
  char *baseb; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h] BYREF

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
  p_endptr = a2;
  if ( !a2 )
    p_endptr = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = *nptr;
  v11 = *__ctype_b_loc();
  v12 = nptr;
  while ( (v11[v10] & 0x2000) != 0 )
    v10 = *++v12;
  if ( v10 == 45 )
    return 4;
  v13 = __strtoul_internal(nptr, p_endptr, a3, 0);
  if ( *p_endptr == nptr )
  {
    basea = *p_endptr;
    if ( a5 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(a5, (char)v15);
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
  if ( a5 )
  {
    v15 = (unsigned __int8)**p_endptr;
    if ( (_BYTE)v15 )
    {
      baseb = *p_endptr;
      v26 = strchr(a5, (char)v15);
      v18 = baseb;
      if ( !v26 )
      {
LABEL_40:
        *a4 = v13;
        v14 |= 2u;
        return v14;
      }
LABEL_20:
      if ( (unsigned __int8)(v15 - 69) > 0x2Fu
        || (v19 = 0x814400308945LL, !_bittest64(&v19, (unsigned int)(v15 - 69)))
        || (v37 = v18, v20 = strchr(a5, 48), v18 = v37, !v20) )
      {
LABEL_27:
        v22 = 1;
        v23 = 1024LL;
        goto LABEL_28;
      }
      v21 = v37[1];
      if ( v21 != 68 )
      {
        if ( v21 == 105 )
        {
          v23 = 1024LL;
          v22 = 2 * (v37[2] == 66) + 1;
LABEL_28:
          switch ( (char)v15 )
          {
            case 'B':
              if ( (unsigned __int64)v13 >> 54 )
                goto LABEL_38;
              v13 <<= 10;
              break;
            case 'E':
              goto LABEL_71;
            case 'G':
            case 'g':
              goto LABEL_77;
            case 'K':
            case 'k':
              goto LABEL_37;
            case 'M':
            case 'm':
              goto LABEL_30;
            case 'P':
              goto LABEL_65;
            case 'T':
            case 't':
              goto LABEL_59;
            case 'Y':
              goto LABEL_53;
            case 'Z':
              goto LABEL_47;
            case 'b':
              goto LABEL_44;
            case 'c':
              break;
            case 'w':
              if ( v13 < 0 )
                goto LABEL_38;
              v13 *= 2LL;
              break;
            default:
              goto LABEL_40;
          }
LABEL_33:
          v24 = &v18[v22];
          *p_endptr = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
        if ( v21 != 66 )
        {
          switch ( (char)v15 )
          {
            case 'E':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_71:
              v33 = 6;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_51;
            case 'F':
            case 'H':
            case 'I':
            case 'J':
            case 'L':
            case 'N':
            case 'O':
            case 'Q':
            case 'R':
            case 'S':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case '[':
            case '\\':
            case ']':
            case '^':
            case '_':
            case '`':
            case 'a':
            case 'd':
            case 'e':
            case 'f':
            case 'h':
            case 'i':
            case 'j':
            case 'l':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
              goto LABEL_40;
            case 'G':
            case 'g':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_77:
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
              goto LABEL_33;
            case 'K':
            case 'k':
              v22 = 1;
              v23 = 1024LL;
LABEL_37:
              v25 = v13;
              v13 *= v23;
              if ( is_mul_ok(v23, v25) )
                goto LABEL_33;
              goto LABEL_38;
            case 'M':
            case 'm':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_30:
              if ( !is_mul_ok((int)v23, v13) || !is_mul_ok((int)v23, (int)v23 * v13) )
                goto LABEL_38;
              v13 *= (int)v23 * (__int64)(int)v23;
              break;
            case 'P':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_65:
              v32 = 5;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_51;
            case 'T':
            case 't':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_59:
              v31 = 4;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_51;
            case 'Y':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_53:
              v30 = 8;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v30;
              }
              while ( v30 );
              goto LABEL_51;
            case 'Z':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_47:
              v27 = 7;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v27;
              }
              while ( v27 );
LABEL_51:
              v14 |= v28;
              break;
            case 'b':
              v22 = 1;
LABEL_44:
              if ( (unsigned __int64)v13 >> 55 )
              {
LABEL_38:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 9;
              }
              break;
            case 'c':
              v22 = 1;
              goto LABEL_33;
            default:
              goto LABEL_27;
          }
          goto LABEL_33;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_28;
    }
  }
LABEL_13:
  *a4 = v13;
  return v14;
}

__int64 sub_40ACF0(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+8h] [rbp-D0h] BYREF

  va_start(va, a2);
  return sub_40D650(a1, a2, va);
}

void __fastcall sub_40AD80(int a1)
{
  if ( a1 >= 0 )
  {
    if ( close(a1) )
      __assert_fail("! close_fail", "lib/chdir-long.c", 0x40u, "cdb_free");
  }
}

__int64 __fastcall sub_40ADC0(int *a1, const char *a2)
{
  int v2; // eax
  int v3; // ebp

  v2 = openat(*a1, a2, 67840);
  if ( v2 < 0 )
    return 0xFFFFFFFFLL;
  v3 = v2;
  sub_40AD80(*a1);
  *a1 = v3;
  return 0LL;
}

__int64 __fastcall sub_40AE00(const char *s)
{
  unsigned int v1; // ebx
  int *v2; // r12
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // rax
  size_t v6; // rbx
  const char *v7; // rbp
  const char *v8; // r13
  _BYTE *v9; // rax
  _BYTE *v10; // rbx
  int v11; // eax
  int v12; // ebx
  _BYTE *v14; // rax
  _BYTE *v15; // rbx
  int v16; // eax
  int fd[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v1 = chdir(s);
  if ( v1 )
  {
    v2 = __errno_location();
    if ( *v2 == 36 )
    {
      v3 = strlen(s);
      fd[0] = -100;
      v4 = v3;
      if ( !v3 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v3 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v5 = strspn(s, "/");
      v6 = v5;
      if ( v5 == 2 )
      {
        v14 = (_BYTE *)sub_40C480(s + 3, 47LL, v4 - 3);
        v15 = v14;
        if ( !v14 )
          return (unsigned int)-1;
        *v14 = 0;
        v16 = sub_40ADC0(fd, s);
        *v15 = 47;
        if ( !v16 )
        {
          v7 = &v15[strspn(v15 + 1, "/") + 1];
          goto LABEL_7;
        }
      }
      else
      {
        v7 = s;
        if ( !v5 )
        {
LABEL_7:
          if ( *v7 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v8 = &s[v4];
          if ( v7 > &s[v4] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v8 - v7 > 4095 )
          {
            v9 = memrchr(v7, 47, 0x1000uLL);
            v10 = v9;
            if ( !v9 )
            {
              *v2 = 36;
              return (unsigned int)-1;
            }
            *v9 = 0;
            if ( v9 - v7 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v11 = sub_40ADC0(fd, v7);
            *v10 = 47;
            if ( v11 )
              goto LABEL_18;
            v7 = &v10[strspn(v10 + 1, "/") + 1];
          }
          if ( v8 <= v7 || !(unsigned int)sub_40ADC0(fd, v7) )
          {
            v1 = fchdir(fd[0]);
            if ( !v1 )
            {
              sub_40AD80(fd[0]);
              return v1;
            }
          }
          goto LABEL_18;
        }
        if ( !(unsigned int)sub_40ADC0(fd, "/") )
        {
          v7 = &s[v6];
          goto LABEL_7;
        }
      }
LABEL_18:
      v12 = *v2;
      sub_40AD80(fd[0]);
      *v2 = v12;
      return (unsigned int)-1;
    }
  }
  return v1;
}

__int64 __fastcall sub_40B070(char *file, __int64 a2, __int64 a3)
{
  int v4; // edx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  struct utsname vars0; // [rsp+0h] [rbp+0h] BYREF

  if ( dword_6175D4 < 0 )
  {
    if ( !uname(&vars0) && strverscmp(vars0.release, "2.6.36") >= 0 )
    {
      dword_6175D4 = 1;
      goto LABEL_3;
    }
    dword_6175D4 = 0;
LABEL_8:
    if ( statfs(file, (struct statfs *)&vars0) < 0 )
      return 0xFFFFFFFFLL;
    v6 = *(_QWORD *)&vars0.sysname[8];
    goto LABEL_10;
  }
  if ( !dword_6175D4 )
    goto LABEL_8;
LABEL_3:
  v4 = statvfs(file, (struct statvfs *)&vars0);
  result = 0xFFFFFFFFLL;
  if ( v4 < 0 )
    return result;
  v6 = *(_QWORD *)&vars0.sysname[8];
  if ( !*(_QWORD *)&vars0.sysname[8] )
    v6 = *(_QWORD *)vars0.sysname;
LABEL_10:
  *(_QWORD *)a3 = v6;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)&vars0.sysname[16];
  *(_QWORD *)(a3 + 16) = *(_QWORD *)&vars0.sysname[24];
  v7 = *(_QWORD *)&vars0.sysname[32];
  *(_QWORD *)(a3 + 24) = *(_QWORD *)&vars0.sysname[32];
  *(_BYTE *)(a3 + 32) = v7 < 0;
  *(_QWORD *)(a3 + 40) = *(_QWORD *)&vars0.sysname[40];
  *(_QWORD *)(a3 + 48) = *(_QWORD *)&vars0.sysname[48];
  return 0LL;
}

char *__fastcall sub_40B160(char *a1, size_t a2)
{
  char *v3; // rbx
  __dev_t st_dev; // r15
  __ino_t st_ino; // r14
  DIR *v6; // rbp
  int v7; // r15d
  int *v8; // r12
  int v9; // eax
  bool v10; // r13
  struct dirent *v11; // rax
  const char *d_name; // rbx
  __int64 v13; // r13
  size_t v14; // r14
  char *v15; // rdx
  char *v16; // rax
  size_t v17; // rbx
  void *v18; // rax
  int v19; // ebx
  __dev_t v20; // [rsp+8h] [rbp-120h]
  size_t v21; // [rsp+8h] [rbp-120h]
  __dev_t v22; // [rsp+10h] [rbp-118h]
  char *ptr; // [rsp+18h] [rbp-110h]
  void *v24; // [rsp+20h] [rbp-108h]
  size_t size; // [rsp+28h] [rbp-100h]
  bool v26; // [rsp+3Fh] [rbp-E9h]
  char *src; // [rsp+40h] [rbp-E8h]
  char *srca; // [rsp+40h] [rbp-E8h]
  __dev_t v29; // [rsp+48h] [rbp-E0h]
  __ino_t v30; // [rsp+50h] [rbp-D8h]
  __ino_t v31; // [rsp+58h] [rbp-D0h]
  struct stat stat_buf; // [rsp+60h] [rbp-C8h] BYREF

  v24 = a1;
  if ( !a2 )
  {
    size = 4096LL;
    if ( a1 )
    {
      ptr = 0LL;
      *__errno_location() = 22;
      return ptr;
    }
LABEL_3:
    ptr = (char *)malloc(size);
    if ( !ptr )
      return ptr;
    goto LABEL_7;
  }
  size = a2;
  if ( !a1 )
    goto LABEL_3;
  ptr = a1;
LABEL_7:
  v3 = &ptr[size];
  ptr[size - 1] = 0;
  if ( __lxstat(1, ".", &stat_buf) < 0
    || (st_dev = stat_buf.st_dev, st_ino = stat_buf.st_ino, v20 = stat_buf.st_dev, __lxstat(1, "/", &stat_buf) < 0) )
  {
    v8 = __errno_location();
LABEL_58:
    v19 = *v8;
    if ( a1 )
      goto LABEL_56;
    goto LABEL_59;
  }
  src = v3 - 1;
  v30 = stat_buf.st_ino;
  v29 = stat_buf.st_dev;
  v26 = st_ino != stat_buf.st_ino || st_dev != stat_buf.st_dev;
  if ( !v26 )
    goto LABEL_37;
  v6 = 0LL;
  v7 = -100;
  v8 = __errno_location();
  do
  {
    v9 = openat(v7, "..", 0);
    v7 = v9;
    if ( v9 < 0 )
    {
      v19 = *v8;
      if ( v6 )
LABEL_54:
        closedir(v6);
LABEL_55:
      if ( a1 )
      {
LABEL_56:
        *v8 = v19;
        return 0LL;
      }
LABEL_59:
      free(ptr);
      goto LABEL_56;
    }
    if ( __fxstat(1, v9, &stat_buf) )
    {
      v19 = *v8;
      if ( v6 )
        closedir(v6);
      goto LABEL_62;
    }
    if ( v6 && closedir(v6) || (v22 = stat_buf.st_dev, v31 = stat_buf.st_ino, (v6 = fdopendir(v7)) == 0LL) )
    {
      v19 = *v8;
LABEL_62:
      close(v7);
      goto LABEL_55;
    }
    v10 = v26;
    do
    {
      while ( 1 )
      {
        *v8 = 0;
        v11 = readdir(v6);
        if ( v11 )
        {
          if ( v11->d_name[0] != 46 )
            goto LABEL_19;
          goto LABEL_48;
        }
        v19 = *v8;
        if ( *v8 || !v10 )
          goto LABEL_52;
        rewinddir(v6);
        v11 = readdir(v6);
        if ( !v11 )
        {
          v19 = *v8;
LABEL_52:
          if ( !v19 )
          {
            *v8 = 2;
            v19 = 2;
          }
          goto LABEL_54;
        }
        v10 = 0;
        if ( v11->d_name[0] != 46 )
          break;
LABEL_48:
        if ( v11->d_name[1] && *(_WORD *)&v11->d_name[1] != 46 )
        {
LABEL_19:
          if ( !v10 )
            break;
          if ( v22 != v20 || v11->d_ino == st_ino )
          {
            v10 = v22 != v20 || v11->d_ino == st_ino;
            break;
          }
        }
      }
      d_name = v11->d_name;
    }
    while ( __fxstatat(1, v7, v11->d_name, &stat_buf, 256)
         || (stat_buf.st_mode & 0xF000) != 0x4000
         || stat_buf.st_dev != v20
         || stat_buf.st_ino != st_ino );
    v13 = src - ptr;
    v14 = strlen(d_name);
    if ( src - ptr <= v14 )
    {
      if ( a2 )
      {
        *v8 = 34;
        v19 = 34;
        goto LABEL_54;
      }
      v15 = (char *)size;
      if ( v14 >= size )
        v15 = (char *)v14;
      srca = v15;
      v21 = (size_t)&v15[size];
      if ( __CFADD__(v15, size) || (v16 = (char *)realloc(ptr, (size_t)&v15[size])) == 0LL )
      {
        *v8 = 12;
        v19 = 12;
        goto LABEL_54;
      }
      ptr = v16;
      src = (char *)memcpy(&srca[v13 + (_QWORD)v16], &v16[v13], size - v13);
      size = v21;
    }
    src = (char *)memcpy(&src[-v14], d_name, v14) - 1;
    st_ino = v31;
    *src = 47;
    v20 = v22;
  }
  while ( v29 != v22 || v30 != v31 );
  if ( closedir(v6) )
    goto LABEL_58;
  v3 = &ptr[size];
LABEL_37:
  if ( src == &ptr[size - 1] )
    *--src = 47;
  v17 = v3 - src;
  memmove(ptr, src, v17);
  if ( !a2 )
    v24 = realloc(ptr, v17);
  v18 = v24;
  if ( !v24 )
    return ptr;
  return (char *)v18;
}

__int64 __fastcall sub_40B630(__int64 a1, int *a2)
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

__int64 __fastcall sub_40B710(
        int a1,
        __int64 *a2,
        const char *a3,
        char **a4,
        _DWORD *a5,
        int a6,
        int *a7,
        int a8,
        const char *a9)
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
  const char *v28; // r12
  __int64 v29; // rbp
  char *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rbp
  char *v33; // rax
  FILE *v34; // rdi
  const char **v35; // rbx
  _BYTE *v36; // rbp
  __int64 v37; // r12
  const char *v38; // r12
  __int64 v39; // rbp
  char *v40; // rax
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  int v48; // [rsp+38h] [rbp-50h]
  char v49; // [rsp+3Fh] [rbp-49h]
  int v51; // [rsp+44h] [rbp-44h]
  int v52; // [rsp+48h] [rbp-40h]

  v9 = (const char *)*((_QWORD *)a7 + 4);
  v10 = (char *)v9;
  v49 = *v9;
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
    if ( !a6 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(a3, v49), result = 0xFFFFFFFFLL, !v18) )
    {
      if ( a8 )
      {
        v24 = *a2;
        v25 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v25, v24, a9, v9);
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
  v51 = -1;
  v15 = s1;
  v16 = 0LL;
  v48 = 0;
  v52 = 0;
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
        && !v48 )
      {
        if ( a8 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((int)v13 + 1, 1uLL);
          if ( ptr )
          {
            v52 = 1;
            ptr[v51] = 1;
LABEL_19:
            ptr[v16] = 1;
            goto LABEL_20;
          }
          v48 = 1;
        }
        else
        {
          v48 = 1;
          if ( ptr )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v51 = v16;
      v12 = v17;
    }
LABEL_20:
    v17 += 4;
    v15 = *v17;
    ++v16;
  }
  while ( *v17 );
  v10 = s1a;
  if ( ptr || v48 )
  {
    if ( a8 )
    {
      if ( v48 )
      {
        v26 = *a2;
        v27 = dcgettext(0LL, "%s: option '%s%s' is ambiguous\n", 5);
        __fprintf_chk(stderr, 1LL, v27, v26, a9, v9);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
      else
      {
        flockfile(stderr);
        v31 = *((_QWORD *)a7 + 4);
        v32 = *a2;
        v33 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v33, v32, a9, v31);
        v34 = stderr;
        v35 = (const char **)a4;
        v36 = ptr;
        v37 = (__int64)&ptr[v13 + 1];
        do
        {
          if ( *v36 )
          {
            __fprintf_chk(v34, 1LL, " '%s%s'", a9, *v35);
            v34 = stderr;
          }
          ++v36;
          v35 += 4;
        }
        while ( (_BYTE *)v37 != v36 );
        fputc(10, v34);
        funlockfile(stderr);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
    }
    if ( v52 )
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
    LODWORD(v13) = v51;
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
        v28 = *v12;
        v29 = *a2;
        v30 = dcgettext(0LL, "%s: option '%s%s' doesn't allow an argument\n", 5);
        __fprintf_chk(stderr, 1LL, v30, v29, a9, v28);
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
          v38 = *v12;
          v39 = *a2;
          v40 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v40, v39, a9, v38);
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

__int64 __fastcall sub_40BD30(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_40B630((__int64)a2, a7);
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
        sub_40B630((__int64)a2, a7);
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
            return (unsigned int)sub_40B710(a1, a2, v12, a4, a5, a6, a7, v8, "--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_40B710(a1, a2, v12, a4, a5, a6, a7, v8, "-");
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
        return (unsigned int)sub_40B710(a1, a2, v12, a4, a5, 0, a7, v8, "-W ");
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
        __fprintf_chk(stderr, 1LL, v44, v43, v21);
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
            __fprintf_chk(stderr, 1LL, v42, v41, v21);
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
      __fprintf_chk(stderr, 1LL, v40, v39, v21);
    }
    a7[2] = v21;
    return 63;
  }
  return v21;
}

__int64 __fastcall sub_40C300(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_617860 = dword_6175E0;
  dword_617864 = dword_6175DC;
  result = sub_40BD30(a1, a2, a3, a4, a5, a6, &dword_617860, a7);
  dword_6175E0 = dword_617860;
  nptr = (char *)qword_617870;
  dword_6175D8 = dword_617868;
  return result;
}

__int64 __fastcall sub_40C360(int a1, __int64 *a2, const char *a3)
{
  return sub_40C300(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_40C380(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_40C300(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40C3A0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40BD30(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40C3C0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_40C300(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_40C3E0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40BD30(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_40C400(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40DBE0(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

_BYTE *__fastcall sub_40C480(_BYTE *a1, __int16 a2, unsigned __int64 a3)
{
  _BYTE *result; // rax
  __int64 v4; // r9
  _BYTE *v5; // rcx
  _BYTE *v6; // rdi

  if ( !a3 )
    return 0LL;
  if ( ((unsigned __int8)a1 & 7) != 0 )
  {
    if ( (_BYTE)a2 == *a1 )
      return a1;
    while ( 1 )
    {
      ++a1;
      if ( !--a3 )
        return 0LL;
      if ( ((unsigned __int8)a1 & 7) == 0 )
        break;
      if ( *a1 == (_BYTE)a2 )
        return a1;
    }
  }
  v4 = ((((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 32) | ((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8);
  if ( a3 > 7 && (((v4 ^ *(_QWORD *)a1) - 0x101010101010101LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL) == 0 )
  {
    while ( 1 )
    {
      a3 -= 8LL;
      a1 += 8;
      if ( a3 <= 7 )
        break;
      if ( (((v4 ^ *(_QWORD *)a1) - 0x101010101010101LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL) != 0 )
        goto LABEL_15;
    }
    if ( !a3 )
      return 0LL;
  }
LABEL_15:
  if ( (_BYTE)a2 != *a1 )
  {
    v5 = a1 + 1;
    v6 = &a1[a3];
    while ( 1 )
    {
      result = v5;
      if ( v5 == v6 )
        break;
      if ( *v5++ == (_BYTE)a2 )
        return result;
    }
    return 0LL;
  }
  return a1;
}

unsigned __int64 __fastcall sub_40C590(const char *a1)
{
  size_t v2; // rax
  char *v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  char v6; // di
  unsigned __int64 v7; // rsi
  char v8; // r9
  char v9; // r10
  unsigned __int8 v10; // r11

  v2 = strlen(a1);
  v3 = (char *)a1;
  v4 = 0LL;
  result = v2 + 1;
  while ( 1 )
  {
    v6 = a1[v4];
    v7 = v4 + 1;
    if ( v6 != 92 )
      break;
    if ( v4 + 4 >= result )
      break;
    v8 = a1[v7];
    if ( (unsigned __int8)(v8 - 48) > 3u )
      break;
    v9 = a1[v4 + 2];
    if ( (unsigned __int8)(v9 - 48) > 7u )
      break;
    v10 = a1[v4 + 3] - 48;
    if ( v10 > 7u )
      break;
    ++v3;
    v7 = v4 + 4;
    *(v3 - 1) = v10 + 8 * (v9 + 8 * v8) + 0x80;
LABEL_3:
    v4 = v7;
  }
  *v3++ = v6;
  if ( result > v7 )
    goto LABEL_3;
  return result;
}

void __fastcall sub_40C620(void **ptr)
{
  free(*ptr);
  free(ptr[1]);
  free(ptr[2]);
  if ( ((_BYTE)ptr[5] & 4) != 0 )
    free(ptr[3]);
  free(ptr);
}

void *sub_40C670()
{
  FILE *v0; // rax
  FILE *v1; // rbp
  void **p_ptr; // r12
  const char *v3; // rax
  const char *v4; // r15
  bool v5; // r13
  char *v6; // rbx
  void *v7; // rax
  char *v8; // rdi
  void *v9; // rax
  char *v10; // rdi
  void *v11; // rax
  __int64 v12; // rdi
  const char *v13; // rax
  __int64 v14; // rdx
  const char *v15; // r15
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // r13
  char *v19; // rax
  bool v20; // dl
  FILE *v22; // rax
  FILE *v23; // r13
  struct mntent *i; // rbp
  char *v25; // r15
  char *v26; // rbx
  void *v27; // rax
  char *mnt_dir; // rdi
  void *v29; // rax
  char *mnt_type; // rdi
  const char *v31; // rax
  const char *v32; // rbp
  bool v33; // dl
  int v34; // eax
  __int64 v35; // r15
  const char *v36; // rdi
  char *v37; // rax
  bool v38; // dl
  char v39; // al
  int *v40; // rax
  int v41; // r14d
  int *v42; // r13
  void **v43; // rdi
  void *v44; // rbx
  int *v45; // rax
  char v46; // [rsp+1Fh] [rbp-79h] BYREF
  unsigned int v47; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v48; // [rsp+24h] [rbp-74h] BYREF
  int v49; // [rsp+28h] [rbp-70h] BYREF
  int v50; // [rsp+2Ch] [rbp-6Ch] BYREF
  int v51; // [rsp+30h] [rbp-68h] BYREF
  int v52; // [rsp+34h] [rbp-64h] BYREF
  int v53; // [rsp+38h] [rbp-60h] BYREF
  int v54; // [rsp+3Ch] [rbp-5Ch] BYREF
  int v55; // [rsp+40h] [rbp-58h] BYREF
  int v56; // [rsp+44h] [rbp-54h] BYREF
  void *ptr; // [rsp+48h] [rbp-50h] BYREF
  char *lineptr; // [rsp+50h] [rbp-48h] BYREF
  size_t n[8]; // [rsp+58h] [rbp-40h] BYREF

  v0 = fopen("/proc/self/mountinfo", "r");
  if ( v0 )
  {
    lineptr = 0LL;
    v1 = v0;
    p_ptr = &ptr;
    n[0] = 0LL;
    while ( __getdelim(&lineptr, n, 10, v1) != -1 )
    {
      if ( (sscanf(lineptr, "%*u %*u %u:%u %n%*s%n %n%*s%n%c", &v47, &v48, &v55, &v56, &v49, &v50, &v46) & 0xFFFFFFFB) == 3 )
      {
        v3 = (const char *)sub_40D2B0(&lineptr[v50], " - ");
        v4 = v3;
        if ( v3 )
        {
          if ( (sscanf(v3, " - %n%*s%n %n%*s%n %c", &v51, &v52, &v53, &v54, &v46) & 0xFFFFFFFB) == 1 )
          {
            v5 = 1;
            lineptr[v56] = 0;
            lineptr[v50] = 0;
            v4[v52] = 0;
            v4[v54] = 0;
            sub_40C590(&v4[v53]);
            sub_40C590(&lineptr[v49]);
            sub_40C590(&lineptr[v55]);
            v6 = (char *)sub_40A560(0x38uLL, (__int64)" - %n%*s%n %n%*s%n %c");
            v7 = sub_40A790((char *)&v4[v53]);
            v8 = &lineptr[v49];
            *(_QWORD *)v6 = v7;
            v9 = sub_40A790(v8);
            v10 = &lineptr[v55];
            *((_QWORD *)v6 + 1) = v9;
            v11 = sub_40A790(v10);
            v12 = v51;
            *((_QWORD *)v6 + 2) = v11;
            v13 = (const char *)sub_40A790((char *)&v4[v12]);
            v14 = v47;
            v15 = v13;
            *((_QWORD *)v6 + 3) = v13;
            v16 = v48;
            v6[40] |= 4u;
            *((_QWORD *)v6 + 4) = (unsigned __int8)v16 | ((_DWORD)v14 << 8) & 0xFFF00 | (v14 << 32) & 0xFFFFF00000000000LL | (v16 << 12) & 0xFFFFFF00000LL;
            if ( strcmp(v15, "autofs")
              && strcmp(v15, "proc")
              && strcmp(v15, "subfs")
              && strcmp(v15, "debugfs")
              && strcmp(v15, "devpts")
              && strcmp(v15, "fusectl")
              && strcmp(v15, "mqueue")
              && strcmp(v15, "rpc_pipefs")
              && strcmp(v15, "sysfs")
              && strcmp(v15, "devfs")
              && strcmp(v15, "kernfs")
              && strcmp(v15, "ignore") )
            {
              v5 = strcmp(v15, "none") == 0;
            }
            v17 = v5 | v6[40] & 0xFE;
            v18 = *(_QWORD *)v6;
            v6[40] = v17;
            v19 = strchr((const char *)v18, 58);
            v20 = 1;
            if ( !v19
              && (*(_BYTE *)v18 != 47 || *(_BYTE *)(v18 + 1) != 47 || strcmp(v15, "smbfs") && strcmp(v15, "cifs")) )
            {
              v20 = strcmp("-hosts", (const char *)v18) == 0;
            }
            v6[40] = (2 * v20) | v6[40] & 0xFD;
            *p_ptr = v6;
            p_ptr = (void **)(v6 + 48);
          }
        }
      }
    }
    free(lineptr);
    if ( (v1->_flags & 0x20) != 0 )
    {
      v45 = __errno_location();
      v41 = *v45;
      v42 = v45;
      sub_40E240(v1);
      *v42 = v41;
      goto LABEL_46;
    }
    if ( (unsigned int)sub_40E240(v1) != -1 )
    {
LABEL_13:
      *p_ptr = 0LL;
      return ptr;
    }
  }
  else
  {
    v22 = setmntent("/etc/mtab", "r");
    v23 = v22;
    if ( !v22 )
      return 0LL;
    p_ptr = &ptr;
    for ( i = getmntent(v22); i; i = getmntent(v23) )
    {
      v25 = hasmntopt(i, "bind");
      v26 = (char *)sub_40A560(0x38uLL, (__int64)"bind");
      v27 = sub_40A790(i->mnt_fsname);
      mnt_dir = i->mnt_dir;
      *(_QWORD *)v26 = v27;
      v29 = sub_40A790(mnt_dir);
      *((_QWORD *)v26 + 2) = 0LL;
      mnt_type = i->mnt_type;
      *((_QWORD *)v26 + 1) = v29;
      v31 = (const char *)sub_40A790(mnt_type);
      v26[40] |= 4u;
      v32 = v31;
      *((_QWORD *)v26 + 3) = v31;
      v33 = 1;
      if ( strcmp(v31, "autofs") )
      {
        if ( strcmp(v31, "proc") )
        {
          if ( strcmp(v31, "subfs") )
          {
            if ( strcmp(v31, "debugfs") )
            {
              if ( strcmp(v31, "devpts") )
              {
                if ( strcmp(v31, "fusectl") )
                {
                  if ( strcmp(v31, "mqueue") )
                  {
                    if ( strcmp(v31, "rpc_pipefs") )
                    {
                      if ( strcmp(v31, "sysfs") )
                      {
                        if ( strcmp(v31, "devfs") )
                        {
                          if ( strcmp(v31, "kernfs") )
                          {
                            v34 = strcmp(v31, "ignore");
                            v33 = 1;
                            if ( v34 )
                              v33 = strcmp(v32, "none") == 0 && v25 == 0LL;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v35 = *(_QWORD *)v26;
      v36 = *(const char **)v26;
      v26[40] = v33 | v26[40] & 0xFE;
      v37 = strchr(v36, 58);
      v38 = 1;
      if ( !v37 && (*(_BYTE *)v35 != 47 || *(_BYTE *)(v35 + 1) != 47 || strcmp(v32, "smbfs") && strcmp(v32, "cifs")) )
        v38 = strcmp("-hosts", (const char *)v35) == 0;
      v39 = v26[40];
      *((_QWORD *)v26 + 4) = -1LL;
      v26[40] = (2 * v38) | v39 & 0xFD;
      *p_ptr = v26;
      p_ptr = (void **)(v26 + 48);
    }
    if ( endmntent(v23) )
      goto LABEL_13;
  }
  v40 = __errno_location();
  v41 = *v40;
  v42 = v40;
LABEL_46:
  *p_ptr = 0LL;
  v43 = (void **)ptr;
  if ( ptr )
  {
    do
    {
      v44 = v43[6];
      sub_40C620(v43);
      ptr = v44;
      v43 = (void **)v44;
    }
    while ( v44 );
  }
  *v42 = v41;
  return 0LL;
}

unsigned __int64 __fastcall sub_40CE30(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v3; // r11
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int8 v8; // bl
  unsigned __int64 v9; // r11
  __int64 v10; // rbx
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // rcx
  unsigned __int8 v15; // r11
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r10
  unsigned __int64 result; // rax

  v3 = 1LL;
  v4 = 1LL;
  v5 = 0LL;
  v6 = -1LL;
  while ( 1 )
  {
    v7 = v4 + v5;
    if ( v4 + v5 >= a2 )
      break;
    while ( 1 )
    {
      v8 = *(_BYTE *)(a1 + v6 + v4);
      if ( *(_BYTE *)(a1 + v7) >= v8 )
        break;
      v5 = v7;
      v4 = 1LL;
      v9 = v7++;
      v3 = v9 - v6;
      if ( v7 >= a2 )
        goto LABEL_5;
    }
    if ( *(_BYTE *)(a1 + v7) == v8 )
    {
      if ( v4 == v3 )
      {
        v5 = v7;
        v4 = 1LL;
      }
      else
      {
        ++v4;
      }
    }
    else
    {
      v6 = v5;
      v3 = 1LL;
      ++v5;
      v4 = 1LL;
    }
  }
LABEL_5:
  *a3 = v3;
  v10 = 1LL;
  v11 = 1LL;
  v12 = 0LL;
  v13 = -1LL;
  while ( 1 )
  {
    v14 = v11 + v12;
    if ( a2 <= v11 + v12 )
      break;
    while ( 1 )
    {
      v15 = *(_BYTE *)(a1 + v13 + v11);
      if ( *(_BYTE *)(a1 + v14) <= v15 )
        break;
      v12 = v14;
      v11 = 1LL;
      v16 = v14++;
      v10 = v16 - v13;
      if ( a2 <= v14 )
        goto LABEL_9;
    }
    if ( *(_BYTE *)(a1 + v14) == v15 )
    {
      if ( v11 == v10 )
      {
        v12 = v14;
        v11 = 1LL;
      }
      else
      {
        ++v11;
      }
    }
    else
    {
      v13 = v12;
      v10 = 1LL;
      ++v12;
      v11 = 1LL;
    }
  }
LABEL_9:
  v17 = v13 + 1;
  result = v6 + 1;
  if ( v17 >= result )
  {
    *a3 = v10;
    return v17;
  }
  return result;
}

__int64 __fastcall sub_40CF60(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // r13
  char *v8; // rax
  char *v9; // rsi
  unsigned __int8 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  _BYTE *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r11
  __int64 v24; // r14
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // [rsp+8h] [rbp-880h]
  __int64 v29; // [rsp+8h] [rbp-880h]
  __int64 v30; // [rsp+10h] [rbp-878h]
  unsigned __int64 v31; // [rsp+10h] [rbp-878h]
  unsigned __int64 v32; // [rsp+18h] [rbp-870h]
  unsigned __int64 v33; // [rsp+20h] [rbp-868h]
  unsigned __int64 v34; // [rsp+20h] [rbp-868h]
  unsigned __int64 v35; // [rsp+48h] [rbp-840h] BYREF
  __int64 v36[256]; // [rsp+50h] [rbp-838h] BYREF
  char v37; // [rsp+850h] [rbp-38h] BYREF

  if ( a4 <= 2 )
  {
    v35 = 1LL;
    v7 = a4 - 1;
    v33 = 1LL;
  }
  else
  {
    v7 = sub_40CE30((__int64)a3, a4, (__int64 *)&v35);
    v33 = v35;
  }
  v8 = (char *)v36;
  do
  {
    *(_QWORD *)v8 = a4;
    v8 += 8;
  }
  while ( &v37 != v8 );
  v9 = (char *)&a3[v33];
  if ( a4 )
  {
    v10 = a3;
    do
    {
      v11 = *v10;
      v12 = &a3[a4 - 1] - v10++;
      v36[v11] = v12;
    }
    while ( &a3[a4] != v10 );
    if ( memcmp(a3, v9, v7) )
      goto LABEL_9;
    v22 = a4 - 1;
    v23 = 0LL;
    v24 = 0LL;
    while ( 1 )
    {
      v32 = v22;
      v31 = v23;
      v29 = v24 + a4;
      if ( sub_40C480((_BYTE *)(a1 + a2), 0, v24 + a4 - a2) )
        break;
      v22 = v32;
      if ( !v29 )
        break;
      v25 = v36[*(unsigned __int8 *)(a1 + v29 - 1)];
      if ( v25 )
      {
        if ( v25 < v33 && v31 )
          v25 = a4 - v33;
        v24 += v25;
        v23 = 0LL;
      }
      else
      {
        v26 = v7;
        if ( v31 >= v7 )
          v26 = v31;
        if ( v26 >= v32 )
        {
LABEL_48:
          v27 = v7 - 1;
          if ( v31 < v7 && *(_BYTE *)(a1 + v24 + v7 - 1) == a3[v7 - 1] )
          {
            while ( v31 != v27 && a3[v27 - 1] == *(_BYTE *)(v27 + a1 + v24 - 1) )
              --v27;
          }
          else
          {
            v27 = v7;
          }
          if ( v31 + 1 > v27 )
            return a1 + v24;
          v24 += v33;
          v23 = a4 - v33;
        }
        else
        {
          while ( a3[v26] == *(_BYTE *)(a1 + v24 + v26) )
          {
            if ( ++v26 == v32 )
              goto LABEL_48;
          }
          v23 = 0LL;
          v24 += v26 + 1 - v7;
        }
      }
      a2 = v29;
    }
  }
  else if ( memcmp(a3, v9, v7) )
  {
LABEL_9:
    v13 = a4 - 1;
    v14 = a4 - v7;
    if ( a4 - v7 < v7 )
      v14 = v7;
    v15 = 0LL;
    v34 = v14 + 1;
    v35 = v14 + 1;
    while ( 1 )
    {
      v30 = v15;
      v28 = v15 + a4;
      v16 = sub_40C480((_BYTE *)(a1 + a2), 0, v15 + a4 - a2);
      if ( !v28 )
        return 0LL;
      v17 = v30;
      if ( v16 )
        return 0LL;
      v18 = v36[*(unsigned __int8 *)(a1 + v28 - 1)];
      if ( v18 )
        goto LABEL_12;
      v19 = a1 + v30;
      if ( v7 < v13 )
      {
        v18 = v7;
        if ( *(_BYTE *)(v19 + v7) != a3[v7] )
        {
LABEL_28:
          v17 = 1 - v7 + v30;
LABEL_12:
          v15 = v18 + v17;
          goto LABEL_13;
        }
        while ( ++v18 < v13 )
        {
          if ( a3[v18] != *(_BYTE *)(v19 + v18) )
            goto LABEL_28;
        }
      }
      v20 = v7 - 1;
      if ( !v7 )
        return a1 + v30;
      if ( *(_BYTE *)(v19 + v20) == a3[v7 - 1] )
      {
        while ( --v20 != -1LL )
        {
          if ( a3[v20] != *(_BYTE *)(v19 + v20) )
            goto LABEL_31;
        }
        return a1 + v30;
      }
LABEL_31:
      v15 = v34 + v30;
LABEL_13:
      a2 = v28;
    }
  }
  return 0LL;
}

__int64 __fastcall sub_40D2B0(char *a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // al
  signed __int8 v3; // r9
  unsigned __int8 *v4; // rbx
  unsigned __int8 *v5; // rdx
  unsigned __int8 v6; // cl
  char v7; // r8
  bool v8; // al
  char *v9; // r12
  unsigned __int64 v10; // rbp
  char *v11; // rax
  __int64 v12; // r8
  unsigned __int64 v14; // rax
  size_t v15; // r15
  int v16; // eax
  __int64 v17; // r8
  size_t v18; // r13
  __int64 v19; // r14
  _BYTE *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  size_t v23; // rax
  __int64 v24; // r14
  __int64 v25; // r13
  _BYTE *v26; // rax
  char *v27; // rdx
  size_t v28; // rax
  size_t v29; // rax
  __int64 v30; // [rsp+8h] [rbp-70h]
  __int64 v31; // [rsp+8h] [rbp-70h]
  __int64 v32; // [rsp+8h] [rbp-70h]
  __int64 v33; // [rsp+18h] [rbp-60h]
  size_t v34; // [rsp+18h] [rbp-60h]
  __int64 v35[8]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *a1;
  v3 = *a2;
  if ( !*a1 )
  {
    v9 = 0LL;
    if ( !v3 )
      return (__int64)a1;
    return (__int64)v9;
  }
  if ( !v3 )
    return (__int64)a1;
  v4 = a2;
  v5 = (unsigned __int8 *)a1;
  v6 = *a2;
  v7 = 1;
  while ( 1 )
  {
    ++v5;
    ++v4;
    v8 = v6 == v2;
    v6 = *v4;
    v7 &= v8;
    v2 = *v5;
    if ( !*v5 )
      break;
    if ( !v6 )
      goto LABEL_7;
  }
  v9 = 0LL;
  if ( v6 )
    return (__int64)v9;
LABEL_7:
  v9 = a1;
  if ( v7 )
    return (__int64)v9;
  v10 = v4 - a2;
  v11 = strchr(a1 + 1, v3);
  v9 = v11;
  if ( !v11 || v10 == 1 )
    return (__int64)v9;
  v12 = &a1[v10] - v11;
  if ( &a1[v10] < v11 )
    v12 = 1LL;
  if ( v10 > 0x1F )
    return sub_40CF60((__int64)v11, v12, a2, v10);
  if ( v10 <= 2 )
  {
    v35[0] = 1LL;
    v15 = v10 - 1;
    v33 = 1LL;
  }
  else
  {
    v30 = v12;
    v14 = sub_40CE30((__int64)a2, v10, v35);
    v12 = v30;
    v15 = v14;
    v33 = v35[0];
  }
  v31 = v12;
  v16 = memcmp(a2, &a2[v33], v15);
  v17 = v31;
  if ( !v16 )
  {
    v18 = 0LL;
    v19 = 0LL;
    while ( 1 )
    {
      v32 = v10 + v19;
      v20 = sub_40C480(&v9[v17], 0, v10 + v19 - v17);
      if ( !(v10 + v19) || v20 )
        return 0LL;
      v21 = v18;
      if ( v15 >= v18 )
        v21 = v15;
      if ( v10 > v21 )
      {
        if ( v9[v21 + v19] != a2[v21] )
        {
LABEL_37:
          v18 = 0LL;
          v19 += v21 + 1 - v15;
          goto LABEL_36;
        }
        while ( v10 != ++v21 )
        {
          if ( a2[v21] != v9[v19 + v21] )
            goto LABEL_37;
        }
      }
      v22 = v15 - 1;
      if ( v15 > v18 && a2[v15 - 1] == v9[v19 - 1 + v15] )
      {
        while ( v18 != v22 && a2[v22 - 1] == v9[v19 - 1 + v22] )
          --v22;
      }
      else
      {
        v22 = v15;
      }
      if ( v18 + 1 > v22 )
      {
        v9 += v19;
        return (__int64)v9;
      }
      v18 = v10 - v33;
      v19 += v33;
LABEL_36:
      v17 = v32;
    }
  }
  v23 = v10 - v15;
  if ( v10 - v15 < v15 )
    v23 = v15;
  v24 = 0LL;
  v34 = v23 + 1;
  v35[0] = v23 + 1;
  while ( 1 )
  {
    v25 = v10 + v24;
    v26 = sub_40C480(&v9[v17], 0, v10 + v24 - v17);
    if ( !(v10 + v24) || v26 )
      return 0LL;
    v27 = &v9[v24];
    if ( v10 > v15 )
    {
      v28 = v15;
      v27 = &v9[v24];
      if ( v9[v15 + v24] != a2[v15] )
      {
LABEL_55:
        v24 += v28 + 1 - v15;
        goto LABEL_56;
      }
      while ( v10 > ++v28 )
      {
        if ( a2[v28] != v27[v28] )
          goto LABEL_55;
      }
    }
    v29 = v15 - 1;
    if ( !v15 )
      return (__int64)v27;
    if ( v27[v29] == a2[v15 - 1] )
      break;
LABEL_57:
    v24 += v34;
LABEL_56:
    v17 = v25;
  }
  while ( --v29 != -1LL )
  {
    if ( a2[v29] != v27[v29] )
      goto LABEL_57;
  }
  return (__int64)v27;
}

__int64 __fastcall sub_40D650(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *v3; // rax
  unsigned int v4; // edx
  unsigned __int64 v6; // [rsp+8h] [rbp-10h] BYREF

  v3 = (void *)sub_40E360(0LL, &v6, a2, a3);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = v6;
  if ( v6 > 0x7FFFFFFF )
  {
    free(v3);
    *__errno_location() = 75;
    return 0xFFFFFFFFLL;
  }
  else
  {
    *a1 = v3;
    return v4;
  }
}

char *__fastcall sub_40D6B0(char *path, unsigned __int64 a2)
{
  size_t v2; // rbx
  char *v3; // rax
  char *v4; // rbp
  ssize_t v5; // r12
  char *v7; // rdi

  v2 = a2 + 1;
  if ( a2 >= 0x401 )
    v2 = 1025LL;
  while ( 2 )
  {
    v3 = (char *)malloc(v2);
    v4 = v3;
    if ( v3 )
    {
      while ( 1 )
      {
        v5 = readlink(path, v3, v2);
        if ( v5 < 0 && *__errno_location() != 34 )
        {
          v7 = v4;
          v4 = 0LL;
          free(v7);
          return v4;
        }
        if ( v2 > v5 )
        {
          v4[v5] = 0;
          return v4;
        }
        free(v4);
        if ( v2 > 0x3FFFFFFFFFFFFFFFLL )
          break;
        v2 *= 2LL;
        v3 = (char *)malloc(v2);
        v4 = v3;
        if ( !v3 )
          return v4;
      }
      if ( v2 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v2 = 0x7FFFFFFFFFFFFFFFLL;
        continue;
      }
      v4 = 0LL;
      *__errno_location() = 12;
    }
    break;
  }
  return v4;
}

void __noreturn sub_40D7A0()
{
  sub_404930(1);
}

__int64 __fastcall sub_40D7B0(const char *a1, const char **a2, char *a3, size_t a4)
{
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

  v5 = a3;
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
      v5 += a4;
      v7 = a2[v9];
      if ( !v7 )
        goto LABEL_12;
    }
    if ( strlen(v7) == v8 )
      return v9;
    if ( v14 != -1 )
    {
      if ( a3 )
      {
        v10 = memcmp(&a3[a4 * v14], v5, a4) == 0;
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
    v5 += a4;
    v7 = a2[v9];
  }
  while ( v7 );
LABEL_12:
  v12 = -2LL;
  if ( !v15 )
    return v14;
  return v12;
}

void __fastcall sub_40D8D0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  _BYTE *v4; // rbp
  _BYTE *v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_409DC0(1LL, a1);
  v5 = sub_409AB0(0LL, 8, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_40D950(__int64 *a1, char *a2, size_t a3)
{
  const void *v3; // r14
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rsi
  __int64 v9; // rbx
  __int64 i; // r12
  const char *v11; // rax
  const char *v12; // rax
  char *IO_write_ptr; // rax

  v3 = 0LL;
  v6 = stderr;
  v7 = dcgettext(0LL, "Valid arguments are:", 5);
  v8 = v6;
  v9 = 0LL;
  fputs_unlocked(v7, v8);
  for ( i = *a1; i; i = a1[v9] )
  {
    while ( !v9 || memcmp(v3, a2, a3) )
    {
      ++v9;
      v3 = a2;
      a2 += a3;
      v11 = sub_409DE0(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    a2 += a3;
    v12 = sub_409DE0(i);
    __fprintf_chk(stderr, 1LL, ", %s", v12);
  }
LABEL_7:
  IO_write_ptr = stderr->_IO_write_ptr;
  if ( IO_write_ptr >= stderr->_IO_write_end )
  {
    LODWORD(IO_write_ptr) = __overflow(stderr, 10);
  }
  else
  {
    stderr->_IO_write_ptr = IO_write_ptr + 1;
    *IO_write_ptr = 10;
  }
  return (int)IO_write_ptr;
}

__int64 __fastcall sub_40DA70(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  __int64 result; // rax

  result = sub_40D7B0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_40D8D0(a1, (__int64)a2, result);
    sub_40D950((__int64 *)a3, a4, a5);
    a6();
    return -1LL;
  }
  return result;
}

__int64 __fastcall sub_40DAE0(void *s1, __int64 *a2, char *a3, size_t a4)
{
  __int64 v4; // r14
  __int64 *v6; // rbx

  v4 = *a2;
  if ( *a2 )
  {
    v6 = a2 + 1;
    do
    {
      if ( !memcmp(s1, a3, a4) )
        break;
      v4 = *v6;
      a3 += a4;
      ++v6;
    }
    while ( v4 );
  }
  return v4;
}

__int64 __fastcall sub_40DB30(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_40E240(stream);
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

__int64 __fastcall sub_40DB90(const char *a1, char a2, unsigned int a3)
{
  __int64 v3; // rdx
  int v4; // eax

  v3 = 0LL;
  if ( (a2 & 0x40) != 0 )
    v3 = a3;
  v4 = open(a1, a2, v3);
  return sub_40E1F0(v4);
}

bool __fastcall sub_40DBE0(int a1)
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

unsigned __int64 __fastcall sub_40DC40(char *a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rax

  v2 = *a1;
  if ( !(_BYTE)v2 )
    return 0LL;
  v3 = 0LL;
  do
  {
    ++a1;
    v3 = v2 + __ROL8__(v3, 9);
    v2 = *a1;
  }
  while ( (_BYTE)v2 );
  return v3 % a2;
}

const char *sub_40DC80()
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
                sub_40E240(v60);
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
            sub_40E240(v39);
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

__int64 __fastcall sub_40E1F0(unsigned int fd)
{
  __int64 result; // rax
  unsigned int v2; // r12d
  int *v3; // rax
  int v4; // r13d
  int *v5; // rbp

  if ( fd > 2 )
    return fd;
  v2 = sub_40FE80();
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  close(fd);
  result = v2;
  *v5 = v4;
  return result;
}

int __fastcall sub_40E240(FILE *stream)
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
  if ( !(unsigned int)sub_40E2C0(stream) )
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

int __fastcall sub_40E2C0(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_40E300(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_40E300(FILE *a1, __off_t a2, int a3)
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

char *__fastcall sub_40E360(void *a1, size_t *a2, _BYTE *a3, __int64 a4, double a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  __int64 *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  _BYTE *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  void *v17; // rcx
  unsigned __int64 v18; // rax
  size_t v19; // r13
  bool v20; // dl
  char *v21; // rax
  char *v22; // rax
  void *v23; // rsp
  char *v24; // rax
  char v25; // r15
  __int64 v26; // rax
  char *v27; // r8
  long double *v28; // rdx
  int v29; // eax
  char v30; // al
  int v31; // eax
  char *v32; // r15
  __int64 v33; // rdi
  _BYTE *v34; // rsi
  _BYTE *v35; // rdx
  _BYTE *v36; // rsi
  _BYTE *v37; // rdx
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rax
  char *v41; // rax
  __int64 v42; // rax
  char *v43; // r8
  int v44; // eax
  unsigned __int64 v45; // rax
  char *v46; // r11
  int *v47; // rax
  char *v48; // r11
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r10
  char *v51; // rdx
  char *v52; // rcx
  __int64 v53; // rsi
  _DWORD *v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  void *v57; // r15
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // r11d
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  char *v71; // rdi
  unsigned __int64 v72; // r9
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  bool v76; // cf
  unsigned __int64 v77; // rax
  bool v78; // bl
  char *v79; // rax
  int v80; // ebx
  __int64 v81; // rax
  char *v82; // rdi
  unsigned __int128 v83; // fst7
  __int64 v84; // rax
  char *v85; // rdi
  unsigned __int64 v86; // rax
  void *v87; // rax
  char *v88; // rax
  char *v89; // rcx
  int v90; // r8d
  __int16 v91; // ax
  char *v92; // r15
  char *v93; // rax
  char *v94; // rax
  char *v95; // rax
  char v96; // al
  char *v97; // r9
  size_t v98; // r8
  unsigned __int64 v99; // r10
  char *v100; // rdi
  __int64 v101; // rax
  char *v102; // r10
  unsigned __int64 v103; // rax
  char *v104; // rax
  char *v105; // rsi
  char v106; // al
  size_t v107; // r15
  size_t v108; // r14
  bool v109; // r13
  char *v110; // rax
  char *v111; // rax
  __int64 v112; // rax
  char *v113; // r10
  char *v114; // rax
  char *v115; // rax
  char *v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rdx
  char v119; // al
  __int64 v120; // rdx
  char *v121; // rax
  char *v122; // rax
  __int64 v123; // rdx
  char v124; // al
  char *v125; // rax
  char *v126; // rsi
  __int64 v127; // r9
  __int64 v128; // rdx
  char *v129; // rax
  char *v130; // rsi
  char *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned __int64 v134; // rax
  char v135; // al
  __int64 v136; // rsi
  char v137; // al
  char *v138; // rax
  __int64 v139; // rdx
  char v140; // al
  char *v141; // rax
  char *v142; // rax
  char *v143; // rax
  void *v144; // rdx
  char v145; // al
  _BYTE *v146; // rax
  char *v147; // rax
  char v148; // al
  __int64 v149; // [rsp-8h] [rbp-718h]
  int *v150; // [rsp+10h] [rbp-700h]
  int *v151; // [rsp+18h] [rbp-6F8h]
  __int64 v152; // [rsp+20h] [rbp-6F0h] BYREF
  unsigned __int64 v153; // [rsp+28h] [rbp-6E8h]
  char *v154; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v156; // [rsp+40h] [rbp-6D0h]
  void *v157; // [rsp+48h] [rbp-6C8h]
  char *v158; // [rsp+50h] [rbp-6C0h]
  __int64 v159; // [rsp+58h] [rbp-6B8h]
  _BYTE *v160; // [rsp+60h] [rbp-6B0h]
  __int64 *v161; // [rsp+68h] [rbp-6A8h]
  long double v162; // [rsp+70h] [rbp-6A0h]
  void *v163; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v165; // [rsp+94h] [rbp-67Ch] BYREF
  unsigned int v166; // [rsp+98h] [rbp-678h]
  unsigned int v167; // [rsp+9Ch] [rbp-674h]
  char v168[8]; // [rsp+A0h] [rbp-670h] BYREF
  void *v169; // [rsp+A8h] [rbp-668h]
  _BYTE v170[224]; // [rsp+B0h] [rbp-660h] BYREF
  __int64 v171; // [rsp+190h] [rbp-580h] BYREF
  void *v172; // [rsp+198h] [rbp-578h]
  __int64 v173; // [rsp+1A0h] [rbp-570h]
  __int64 v174; // [rsp+1A8h] [rbp-568h]
  _BYTE v175[624]; // [rsp+1B0h] [rbp-560h] BYREF
  char v176[752]; // [rsp+420h] [rbp-2F0h] BYREF

  src = a1;
  v156 = a2;
  if ( (int)sub_4101F0(a3, &v171, v168) < 0 )
    return 0LL;
  if ( (int)sub_40FFD0(a4, v168) >= 0 )
  {
    v7 = v173 + 7;
    if ( (unsigned __int64)(v173 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v174, v7);
    v8 = v174 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v161 = &v152;
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = (__int64 *)malloc(v9);
      v161 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v156;
    v12 = (char *)v172;
    v13 = a3;
    v14 = (char *)src;
    v159 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v172;
    if ( *(_BYTE **)v172 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (void *)(v16 - v13);
    v18 = (unsigned __int64)v17 + v15;
    v19 = (size_t)v17 + v15;
    if ( __CFADD__(v17, v15) )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
      v19 = -1LL;
    }
    else if ( v11 < v18 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v18 )
        {
LABEL_28:
          v20 = v14 == src;
          if ( !v14 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v18 <= 0xC )
      {
        v11 = 12LL;
        v20 = v14 == src;
        if ( !v14 )
        {
LABEL_19:
          v160 = v13;
          LOBYTE(v162) = v20;
          v163 = v17;
          v21 = (char *)malloc(v11);
          v17 = v163;
          v13 = v160;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v162) )
          {
            *(_QWORD *)&v162 = v160;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = v163;
            v13 = *(_BYTE **)&v162;
            v14 = v22;
          }
          else
          {
            v14 = v21;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v20 )
        {
          *(_QWORD *)&v162 = v13;
          v163 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = v163;
          v13 = *(_BYTE **)&v162;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)v17 + v15;
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v171 != v159 )
    {
      v25 = v12[72];
      v26 = *((_QWORD *)v12 + 10);
      if ( v25 == 37 )
      {
        if ( v26 != -1 )
          goto LABEL_200;
        v59 = v19 + 1;
        v15 = v19 + 1;
        if ( v19 == -1LL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
          v15 = -1LL;
        }
        else if ( v11 < v59 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 < v59 )
              goto LABEL_238;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_238:
            if ( v19 == -2LL )
              goto LABEL_88;
            v11 = v19 + 1;
          }
LABEL_105:
          if ( v14 && v14 != src )
          {
            v60 = (char *)realloc(v14, v11);
            if ( v60 )
            {
              v14 = v60;
              goto LABEL_109;
            }
LABEL_126:
            v57 = v14;
            *(_QWORD *)&v162 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v163) = v14 == src;
          v95 = (char *)malloc(v11);
          if ( !v95 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v163 )
            v14 = (char *)memcpy(v95, v14, v19);
          else
            v14 = v95;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v169;
      v28 = (long double *)((char *)v169 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v163) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v163 == 12 )
        {
          _FST7 = v28[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v66 = (char *)*((_QWORD *)v12 + 3);
            v67 = (char *)*((_QWORD *)v12 + 4);
            v68 = *((_DWORD *)v12 + 4);
            if ( v66 == v67 )
            {
              v50 = 0LL;
            }
            else
            {
              v69 = *((_QWORD *)v12 + 5);
              if ( v69 == -1 )
              {
                v50 = 0LL;
                v163 = (void *)-1LL;
                while ( 1 )
                {
                  v126 = v66 + 1;
                  v127 = -1LL;
                  v128 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v127 = 10 * v50;
                  v76 = __CFADD__(v127, v128);
                  v50 = v127 + v128;
                  v66 = v126;
                  if ( v76 )
                  {
                    if ( v67 == v126 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v163;
                      goto LABEL_82;
                    }
                    while ( *v66++ != 48 )
                    {
                      if ( v67 == v66 )
                        goto LABEL_81;
                    }
                    v50 = -1LL;
                  }
                  if ( v67 == v66 )
                    goto LABEL_82;
                }
              }
              v70 = (char *)v169 + 32 * v69;
              if ( *v70 != 5 )
                goto LABEL_200;
              v50 = (int)v70[4];
              if ( (v50 & 0x80000000) != 0LL )
              {
                v68 |= 2u;
                v50 = -(__int64)v50;
              }
            }
LABEL_82:
            v51 = (char *)*((_QWORD *)v12 + 6);
            v52 = (char *)*((_QWORD *)v12 + 7);
            if ( v51 != v52 )
            {
              v53 = *((_QWORD *)v12 + 8);
              if ( v53 == -1 )
              {
                v129 = v51 + 1;
                v55 = 0LL;
                if ( v52 != v129 )
                {
                  v130 = v129;
                  while ( 1 )
                  {
                    v131 = v130 + 1;
                    v132 = *v130 - 48;
                    v133 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v133 = 10 * v55;
                    v76 = __CFADD__(v133, v132);
                    v134 = v133 + v132;
                    v130 = v131;
                    v55 = v134;
                    if ( v76 )
                    {
                      if ( v52 == v131 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v130 = v131 + 1;
                        if ( *v131 == 48 )
                          break;
                        if ( v52 == v130 )
                          goto LABEL_88;
                        ++v131;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v130 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_375;
              }
              v54 = (char *)v169 + 32 * v53;
              if ( *v54 != 5 )
                goto LABEL_200;
              v55 = (int)v54[4];
              if ( (v55 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v55 )
                {
                  v56 = v55 + 12;
                  if ( v55 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_190:
                  v86 = v56;
                  if ( v50 >= v56 )
                    v86 = v50;
                  v76 = __CFADD__(v86, 1LL);
                  v87 = (void *)(v86 + 1);
                  v163 = v87;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v87 <= 0x2BC )
                  {
                    v89 = v176;
                  }
                  else
                  {
                    v157 = (void *)v50;
                    v158 = (char *)v55;
                    LODWORD(v160) = v68;
                    v162 = _FST7;
                    if ( v87 == (void *)-1LL )
                      goto LABEL_88;
                    v88 = (char *)malloc((size_t)v87);
                    v68 = (int)v160;
                    _FST7 = v162;
                    v89 = v88;
                    v55 = (unsigned __int64)v158;
                    v50 = (unsigned __int64)v157;
                    if ( !v88 )
                      goto LABEL_88;
                  }
                  v90 = (unsigned __int16)v166;
                  LOBYTE(v91) = v166;
                  HIBYTE(v91) = BYTE1(v166) | 3;
                  LOWORD(v166) = v91;
                  __asm { fxam }
                  if ( (v62 & 2) != 0 )
                  {
                    *v89 = 45;
                    _FST7 = -_FST7;
                    v92 = v89 + 1;
                  }
                  else if ( (v68 & 4) != 0 )
                  {
                    v92 = v89 + 1;
                    *v89 = 43;
                  }
                  else
                  {
                    v92 = v89;
                    if ( (v68 & 8) != 0 )
                    {
                      v92 = v89 + 1;
                      *v89 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v97 = v92 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      v92[2] = 102;
                      *(_WORD *)v92 = 28265;
                    }
                    else
                    {
                      v92[2] = 70;
                      *(_WORD *)v92 = 20041;
                    }
                    v92 = 0LL;
                    goto LABEL_263;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v96 = v12[72] & 0xDF;
                  switch ( v96 )
                  {
                    case 'F':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || v55 )
                      {
                        LODWORD(v153) = v90;
                        v154 = (char *)v50;
                        v157 = v89;
                        v158 = (char *)v55;
                        LODWORD(v160) = v68;
                        *(_QWORD *)&v162 = v92 + 2;
                        v122 = nl_langinfo(0x10000);
                        v123 = (__int64)v158;
                        v97 = *(char **)&v162;
                        v124 = *v122;
                        LOBYTE(v68) = (_BYTE)v160;
                        v89 = (char *)v157;
                        v50 = (unsigned __int64)v154;
                        LOWORD(v90) = v153;
                        if ( !v124 )
                          v124 = 46;
                        v92[1] = v124;
                        if ( v123 )
                        {
                          v125 = v97;
                          do
                            *v125++ = 48;
                          while ( v125 != &v92[v123 + 2] );
                          v97 += v123;
                        }
                        goto LABEL_263;
                      }
                      goto LABEL_262;
                    case 'E':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || (v105 = v92 + 1, v55) )
                      {
                        LODWORD(v153) = v90;
                        v154 = (char *)v50;
                        v157 = v89;
                        v158 = (char *)v55;
                        LODWORD(v160) = v68;
                        *(_QWORD *)&v162 = v92 + 2;
                        v138 = nl_langinfo(0x10000);
                        v139 = (__int64)v158;
                        v105 = *(char **)&v162;
                        v140 = *v138;
                        LOBYTE(v68) = (_BYTE)v160;
                        v89 = (char *)v157;
                        v50 = (unsigned __int64)v154;
                        LOWORD(v90) = v153;
                        if ( !v140 )
                          v140 = 46;
                        v92[1] = v140;
                        if ( v139 )
                        {
                          v141 = v105;
                          do
                            *v141++ = 48;
                          while ( v141 != &v92[v139 + 2] );
                          v105 += v139;
                        }
                      }
                      v106 = v12[72];
                      v97 = v105 + 4;
                      v105[3] = 48;
                      *v105 = v106;
                      *(_WORD *)(v105 + 1) = 12331;
                      goto LABEL_263;
                    case 'G':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v152) = v90;
                          v153 = v50;
                          v154 = v92 + 2;
                          v157 = v89;
                          LODWORD(v158) = v68;
                          v160 = (_BYTE *)v55;
                          *(_QWORD *)&v162 = v55 - 1;
                          v116 = nl_langinfo(0x10000);
                          v117 = *(_QWORD *)&v162;
                          v118 = (__int64)v160;
                          v119 = *v116;
                          LOBYTE(v68) = (_BYTE)v158;
                          v89 = (char *)v157;
                          v97 = v154;
                          v50 = v153;
                          LOWORD(v90) = WORD2(v152);
                          if ( !v119 )
                            v119 = 46;
                          v92[1] = v119;
                          if ( v117 )
                          {
                            v120 = (__int64)&v92[v118 + 1];
                            v121 = v97;
                            do
                              *v121++ = 48;
                            while ( v121 != (char *)v120 );
                            v97 += v117;
                          }
                        }
                        else
                        {
                          LODWORD(v154) = v90;
                          v157 = (void *)v50;
                          v158 = v92 + 2;
                          v160 = v89;
                          LODWORD(v162) = v68;
                          v147 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v162);
                          v89 = v160;
                          v148 = *v147;
                          v97 = v158;
                          v50 = (unsigned __int64)v157;
                          LOWORD(v90) = (_WORD)v154;
                          if ( !v148 )
                            v148 = 46;
                          v92[1] = v148;
                        }
                        goto LABEL_263;
                      }
LABEL_262:
                      v97 = v92 + 1;
                      goto LABEL_263;
                  }
                  if ( v96 != 65 )
                    goto LABEL_200;
                  *v92 = 48;
                  *(_QWORD *)&v162 = v92 + 2;
                  v135 = v12[72];
                  v92[2] = 48;
                  v92[1] = v135 + 23;
                  if ( (v68 & 0x10) != 0 || (v136 = (__int64)(v92 + 3), v55) )
                  {
                    HIDWORD(v152) = v90;
                    v153 = v50;
                    v154 = v89;
                    v157 = (void *)v55;
                    LODWORD(v158) = v68;
                    v160 = v92 + 4;
                    v143 = nl_langinfo(0x10000);
                    v144 = v157;
                    v136 = (__int64)v160;
                    v145 = *v143;
                    LOBYTE(v68) = (_BYTE)v158;
                    v89 = v154;
                    v50 = v153;
                    LOWORD(v90) = WORD2(v152);
                    if ( !v145 )
                      v145 = 46;
                    v92[3] = v145;
                    if ( v144 )
                    {
                      v146 = (_BYTE *)v136;
                      do
                        *v146++ = 48;
                      while ( v146 != (_BYTE *)v144 + (_QWORD)v92 + 4 );
                      v136 += (__int64)v144;
                    }
                  }
                  v137 = v12[72];
                  v97 = (char *)(v136 + 3);
                  *(_WORD *)(v136 + 1) = 12331;
                  v92 = *(char **)&v162;
                  *(_BYTE *)v136 = v137 + 15;
LABEL_263:
                  LOWORD(v166) = v90;
                  v98 = v97 - v89;
                  if ( v50 > v97 - v89 )
                  {
                    v99 = v50 - v98;
                    v100 = &v97[v99];
                    v98 = &v97[v99] - v89;
                    if ( (v68 & 2) != 0 )
                    {
                      if ( v99 )
                      {
                        do
                          *v97++ = 32;
                        while ( v100 != v97 );
                      }
                    }
                    else if ( (v68 & 0x20) != 0 && v92 )
                    {
                      if ( v92 >= v97 )
                      {
                        v92 = v97;
                      }
                      else
                      {
                        v101 = -1LL;
                        do
                        {
                          v100[v101] = v97[v101];
                          --v101;
                        }
                        while ( v101 != v92 - 1 - v97 );
                      }
                      if ( v99 )
                      {
                        v102 = &v92[v99];
                        do
                          *v92++ = 48;
                        while ( v92 != v102 );
                      }
                    }
                    else
                    {
                      v112 = -1LL;
                      if ( v89 < v97 )
                      {
                        do
                        {
                          v100[v112] = v97[v112];
                          --v112;
                        }
                        while ( v89 - 1 - v97 != v112 );
                        v97 = v89;
                      }
                      if ( v99 )
                      {
                        v113 = &v97[v99];
                        do
                          *v97++ = 32;
                        while ( v97 != v113 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v163 <= v98 )
                    goto LABEL_200;
                  v103 = v98 + v19;
                  v15 = v98 + v19;
                  if ( v11 - v19 <= v98 )
                  {
                    if ( __CFADD__(v98, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v103 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v103 )
                          goto LABEL_373;
                      }
                      else
                      {
                        if ( v103 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_280;
                        }
LABEL_373:
                        if ( v103 == -1LL )
                          goto LABEL_88;
                        v11 = v98 + v19;
                      }
LABEL_280:
                      if ( !v14 || v14 == src )
                      {
                        LOBYTE(v160) = v14 == src;
                        *(_QWORD *)&v162 = v98;
                        v163 = v89;
                        v114 = (char *)malloc(v11);
                        v89 = (char *)v163;
                        v98 = *(_QWORD *)&v162;
                        if ( !v114 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v160 )
                        {
                          v115 = (char *)memcpy(v114, v14, v19);
                          v89 = (char *)v163;
                          v98 = *(_QWORD *)&v162;
                          v14 = v115;
                        }
                        else
                        {
                          v14 = v114;
                        }
                      }
                      else
                      {
                        *(_QWORD *)&v162 = v98;
                        v163 = v89;
                        v104 = (char *)realloc(v14, v11);
                        if ( !v104 )
                          goto LABEL_88;
                        v89 = (char *)v163;
                        v98 = *(_QWORD *)&v162;
                        v14 = v104;
                      }
                    }
                  }
                  v163 = v89;
                  memcpy(&v14[v19], v89, v98);
                  if ( v163 != v176 )
                    free(v163);
                  goto LABEL_110;
                }
LABEL_375:
                v56 = 12LL;
                goto LABEL_190;
              }
            }
            v56 = 12LL;
            if ( v30 != 65 )
              v56 = 18LL;
            v55 = 0LL;
            if ( v30 != 65 )
              v55 = 6LL;
            goto LABEL_190;
          }
        }
        v31 = *((_DWORD *)v12 + 4);
        v32 = (char *)v161 + 1;
        *(_BYTE *)v161 = 37;
        if ( (v31 & 1) != 0 )
        {
          v33 = (__int64)v161;
          *((_BYTE *)v161 + 1) = 39;
          v32 = (char *)(v33 + 2);
        }
        if ( (v31 & 2) != 0 )
          *v32++ = 45;
        if ( (v31 & 4) != 0 )
          *v32++ = 43;
        if ( (v31 & 8) != 0 )
          *v32++ = 32;
        if ( (v31 & 0x10) != 0 )
          *v32++ = 35;
        if ( (v31 & 0x40) != 0 )
          *v32++ = 73;
        if ( (v31 & 0x20) != 0 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v160 = v27;
          *(_QWORD *)&v162 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v160;
          v32 += *(_QWORD *)&v162;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v160 = v27;
          *(_QWORD *)&v162 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v160;
          v32 += *(_QWORD *)&v162;
        }
        if ( (unsigned int)v163 <= 0x10 )
        {
          v38 = 1LL << (char)v163;
          if ( ((1LL << (char)v163) & 0x14180) != 0 )
            goto LABEL_125;
          if ( (v38 & 0x1000) != 0 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( (v38 & 0x600) == 0 )
              goto LABEL_62;
            *v32++ = 108;
LABEL_125:
            *v32++ = 108;
          }
        }
LABEL_62:
        v39 = v12[72];
        v32[1] = 0;
        *v32 = v39;
        v40 = *((_QWORD *)v12 + 5);
        if ( v40 != -1 )
        {
          v41 = &v27[32 * v40];
          if ( *(_DWORD *)v41 == 5 )
          {
            LODWORD(v160) = 1;
            v166 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v160) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v160;
          *(&v166 + (unsigned int)v160) = *((_DWORD *)v43 + 4);
          LODWORD(v160) = v44 + 1;
        }
        v45 = v19 + 2;
        if ( v19 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
        }
        else if ( v11 < v45 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 >= v45 )
              goto LABEL_73;
          }
          else if ( v45 <= 0xC )
          {
            v11 = 12LL;
LABEL_73:
            if ( v14 && v14 != src )
            {
              v46 = (char *)realloc(v14, v11);
              if ( v46 )
                goto LABEL_76;
LABEL_88:
              v57 = v14;
              *(_QWORD *)&v162 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v172 != v175 )
                    free(v172);
                  if ( v169 != v170 )
                    free(v169);
                  v14 = 0LL;
                  **(_DWORD **)&v162 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v162 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v162) = v14 == src;
            v94 = (char *)malloc(v11);
            v46 = v94;
            if ( !v94 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v162) )
              v46 = (char *)memcpy(v94, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v158 = v46;
            v47 = __errno_location();
            v48 = v158;
            v158 = v32;
            *(_QWORD *)&v162 = v47;
            LODWORD(v154) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v165 = -1;
              **(_DWORD **)&v162 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (int)v163 )
              {
                case 1:
                  v72 = (unsigned int)*((char *)v169 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v72 = *((unsigned __int8 *)v169 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v72 = (unsigned int)*((__int16 *)v169 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v72 = *((unsigned __int16 *)v169 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 13:
                case 14:
                  v72 = *((unsigned int *)v169 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v157 = v48;
                  if ( (_DWORD)v160 != 1 )
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v150 = &v165;
                      goto LABEL_153;
                    }
                    goto LABEL_209;
                  }
                  v151 = &v165;
                  v150 = (int *)v72;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 15:
                case 16:
                case 17:
                  v71 = &v48[v19];
                  v72 = *((_QWORD *)v169 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v157 = v48;
                  if ( (_DWORD)v160 != 1 )
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v72, a5, &v165, v151);
LABEL_131:
                      v48 = (char *)v157;
                      goto LABEL_132;
                    }
LABEL_209:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v166, a5, v167, v72);
LABEL_210:
                    v48 = (char *)v157;
LABEL_132:
                    v74 = v165;
                    if ( v165 < 0 )
                    {
LABEL_154:
                      if ( v158[1] )
                      {
                        v158[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v80 = **(_DWORD **)&v162;
                        if ( !**(_DWORD **)&v162 )
                        {
                          v80 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v80 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v172 != v175 )
                          free(v172);
                        if ( v169 != v170 )
                          free(v169);
                        **(_DWORD **)&v162 = v80;
                        return 0LL;
                      }
LABEL_136:
                      v165 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v162 = (_DWORD)v154;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v172 != v175 )
                          free(v172);
                        if ( v169 != v170 )
                          free(v169);
                        v14 = 0LL;
                        **(_DWORD **)&v162 = 75;
                        return v14;
                      }
                      v75 = (unsigned int)(v74 + 2);
                      v76 = __CFADD__(v19, v75);
                      v77 = v19 + v75;
                      if ( (v11 & 0x8000000000000000LL) != 0LL )
                      {
                        if ( v11 != -1LL )
                          goto LABEL_202;
                      }
                      else
                      {
                        if ( v76 )
                          goto LABEL_202;
                        if ( 2 * v11 >= v77 )
                          v77 = 2 * v11;
                        if ( v11 < v77 )
                        {
                          v11 *= 2LL;
                          if ( v11 < v77 )
                          {
                            if ( v77 == -1LL )
                            {
LABEL_202:
                              v57 = v48;
                              goto LABEL_89;
                            }
                            v11 = v77;
                          }
                          v78 = v48 == src;
                          if ( !v48 || v48 == src )
                          {
                            v157 = v48;
                            v93 = (char *)malloc(v11);
                            v48 = (char *)v157;
                            if ( !v93 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v93, v157, v19);
                            else
                              v48 = v93;
                          }
                          else
                          {
                            v157 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v157;
                            if ( !v79 )
                              goto LABEL_202;
                            v48 = v79;
                          }
                        }
                      }
                      continue;
                    }
LABEL_133:
                    if ( v74 < v49 && v48[v74 + v19] )
                      goto LABEL_200;
                    if ( v74 >= v73 )
                      goto LABEL_137;
                    goto LABEL_136;
                  }
                  v151 = &v165;
                  v150 = (int *)v72;
                  break;
                case 11:
                  v84 = *((_QWORD *)v12 + 10);
                  v85 = &v48[v19];
                  v157 = v48;
                  a5 = *((double *)v169 + 4 * v84 + 2);
                  if ( (_DWORD)v160 == 1 )
                  {
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, v166, a5, &v165, v151);
                  }
                  else
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, &v165, a5, v152, v153);
                      v48 = (char *)v157;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, v166, a5, v167, &v165);
                  }
                  v48 = (char *)v157;
                  goto LABEL_132;
                case 12:
                  v81 = *((_QWORD *)v12 + 10);
                  v82 = &v48[v19];
                  v157 = v48;
                  v83 = *((unsigned __int128 *)v169 + 2 * v81 + 1);
                  if ( (_DWORD)v160 == 1 )
                  {
                    v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, v166, a5, v83, v83 >> 64);
                    goto LABEL_210;
                  }
                  if ( (_DWORD)v160 != 2 )
                  {
                    v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, &v165, a5, v83, v83 >> 64);
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, v166, a5, v167, v149);
                  v48 = (char *)v157;
                  goto LABEL_132;
                default:
                  goto LABEL_408;
              }
              break;
            }
            v72 = v166;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v72, a5, v150, v151);
            v74 = v165;
            v48 = (char *)v157;
            if ( v165 < 0 )
              goto LABEL_154;
            goto LABEL_133;
          }
          if ( v19 != -3LL )
          {
            v11 = v19 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v46 = v14;
        goto LABEL_76;
      }
      switch ( v29 )
      {
        case 18:
          v15 = v19;
          **((_BYTE **)v28 + 2) = v19;
          break;
        case 19:
          v15 = v19;
          **((_WORD **)v28 + 2) = v19;
          break;
        case 20:
          v15 = v19;
          **((_DWORD **)v28 + 2) = v19;
          break;
        case 21:
        case 22:
          v15 = v19;
          **((_QWORD **)v28 + 2) = v19;
          break;
        default:
LABEL_408:
          abort();
      }
LABEL_110:
      v13 = (_BYTE *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v159;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v107 = v19;
    v108 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v108 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v108 )
        {
LABEL_303:
          v109 = v14 == src;
          if ( !v14 || v14 == src )
          {
            v142 = (char *)malloc(v11);
            if ( !v142 )
              goto LABEL_88;
            if ( v107 && v109 )
              v14 = (char *)memcpy(v142, v14, v107);
            else
              v14 = v142;
          }
          else
          {
            v110 = (char *)realloc(v14, v11);
            if ( !v110 )
              goto LABEL_126;
            v14 = v110;
          }
          goto LABEL_307;
        }
      }
      else if ( v108 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_303;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_303;
    }
LABEL_307:
    v14[v107] = 0;
    if ( v11 > v108 && v14 != src )
    {
      v111 = (char *)realloc(v14, v108);
      if ( v111 )
        v14 = v111;
    }
    if ( ptr )
      free(ptr);
    if ( v172 != v175 )
      free(v172);
    if ( v169 != v170 )
      free(v169);
    *v156 = v107;
    return v14;
  }
  if ( v172 != v175 )
    free(v172);
  if ( v169 != v170 )
    free(v169);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

char *__fastcall sub_40E360(void *a1, size_t *a2, _BYTE *a3, __int64 a4, double a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  __int64 *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  _BYTE *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  void *v17; // rcx
  unsigned __int64 v18; // rax
  size_t v19; // r13
  bool v20; // dl
  char *v21; // rax
  char *v22; // rax
  void *v23; // rsp
  char *v24; // rax
  char v25; // r15
  __int64 v26; // rax
  char *v27; // r8
  long double *v28; // rdx
  int v29; // eax
  char v30; // al
  int v31; // eax
  char *v32; // r15
  __int64 v33; // rdi
  _BYTE *v34; // rsi
  _BYTE *v35; // rdx
  _BYTE *v36; // rsi
  _BYTE *v37; // rdx
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rax
  char *v41; // rax
  __int64 v42; // rax
  char *v43; // r8
  int v44; // eax
  unsigned __int64 v45; // rax
  char *v46; // r11
  int *v47; // rax
  char *v48; // r11
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r10
  char *v51; // rdx
  char *v52; // rcx
  __int64 v53; // rsi
  _DWORD *v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  void *v57; // r15
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // r11d
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  char *v71; // rdi
  unsigned __int64 v72; // r9
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  bool v76; // cf
  unsigned __int64 v77; // rax
  bool v78; // bl
  char *v79; // rax
  int v80; // ebx
  __int64 v81; // rax
  char *v82; // rdi
  unsigned __int128 v83; // fst7
  __int64 v84; // rax
  char *v85; // rdi
  unsigned __int64 v86; // rax
  void *v87; // rax
  char *v88; // rax
  char *v89; // rcx
  int v90; // r8d
  __int16 v91; // ax
  char *v92; // r15
  char *v93; // rax
  char *v94; // rax
  char *v95; // rax
  char v96; // al
  char *v97; // r9
  size_t v98; // r8
  unsigned __int64 v99; // r10
  char *v100; // rdi
  __int64 v101; // rax
  char *v102; // r10
  unsigned __int64 v103; // rax
  char *v104; // rax
  char *v105; // rsi
  char v106; // al
  size_t v107; // r15
  size_t v108; // r14
  bool v109; // r13
  char *v110; // rax
  char *v111; // rax
  __int64 v112; // rax
  char *v113; // r10
  char *v114; // rax
  char *v115; // rax
  char *v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rdx
  char v119; // al
  __int64 v120; // rdx
  char *v121; // rax
  char *v122; // rax
  __int64 v123; // rdx
  char v124; // al
  char *v125; // rax
  char *v126; // rsi
  __int64 v127; // r9
  __int64 v128; // rdx
  char *v129; // rax
  char *v130; // rsi
  char *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned __int64 v134; // rax
  char v135; // al
  __int64 v136; // rsi
  char v137; // al
  char *v138; // rax
  __int64 v139; // rdx
  char v140; // al
  char *v141; // rax
  char *v142; // rax
  char *v143; // rax
  void *v144; // rdx
  char v145; // al
  _BYTE *v146; // rax
  char *v147; // rax
  char v148; // al
  __int64 v149; // [rsp-8h] [rbp-718h]
  int *v150; // [rsp+10h] [rbp-700h]
  int *v151; // [rsp+18h] [rbp-6F8h]
  __int64 v152; // [rsp+20h] [rbp-6F0h] BYREF
  unsigned __int64 v153; // [rsp+28h] [rbp-6E8h]
  char *v154; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v156; // [rsp+40h] [rbp-6D0h]
  void *v157; // [rsp+48h] [rbp-6C8h]
  char *v158; // [rsp+50h] [rbp-6C0h]
  __int64 v159; // [rsp+58h] [rbp-6B8h]
  _BYTE *v160; // [rsp+60h] [rbp-6B0h]
  __int64 *v161; // [rsp+68h] [rbp-6A8h]
  long double v162; // [rsp+70h] [rbp-6A0h]
  void *v163; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v165; // [rsp+94h] [rbp-67Ch] BYREF
  unsigned int v166; // [rsp+98h] [rbp-678h]
  unsigned int v167; // [rsp+9Ch] [rbp-674h]
  char v168[8]; // [rsp+A0h] [rbp-670h] BYREF
  void *v169; // [rsp+A8h] [rbp-668h]
  _BYTE v170[224]; // [rsp+B0h] [rbp-660h] BYREF
  __int64 v171; // [rsp+190h] [rbp-580h] BYREF
  void *v172; // [rsp+198h] [rbp-578h]
  __int64 v173; // [rsp+1A0h] [rbp-570h]
  __int64 v174; // [rsp+1A8h] [rbp-568h]
  _BYTE v175[624]; // [rsp+1B0h] [rbp-560h] BYREF
  char v176[752]; // [rsp+420h] [rbp-2F0h] BYREF

  src = a1;
  v156 = a2;
  if ( (int)sub_4101F0(a3, &v171, v168) < 0 )
    return 0LL;
  if ( (int)sub_40FFD0(a4, v168) >= 0 )
  {
    v7 = v173 + 7;
    if ( (unsigned __int64)(v173 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v174, v7);
    v8 = v174 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v161 = &v152;
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = (__int64 *)malloc(v9);
      v161 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v156;
    v12 = (char *)v172;
    v13 = a3;
    v14 = (char *)src;
    v159 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v172;
    if ( *(_BYTE **)v172 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (void *)(v16 - v13);
    v18 = (unsigned __int64)v17 + v15;
    v19 = (size_t)v17 + v15;
    if ( __CFADD__(v17, v15) )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
      v19 = -1LL;
    }
    else if ( v11 < v18 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v18 )
        {
LABEL_28:
          v20 = v14 == src;
          if ( !v14 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v18 <= 0xC )
      {
        v11 = 12LL;
        v20 = v14 == src;
        if ( !v14 )
        {
LABEL_19:
          v160 = v13;
          LOBYTE(v162) = v20;
          v163 = v17;
          v21 = (char *)malloc(v11);
          v17 = v163;
          v13 = v160;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v162) )
          {
            *(_QWORD *)&v162 = v160;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = v163;
            v13 = *(_BYTE **)&v162;
            v14 = v22;
          }
          else
          {
            v14 = v21;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v20 )
        {
          *(_QWORD *)&v162 = v13;
          v163 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = v163;
          v13 = *(_BYTE **)&v162;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)v17 + v15;
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v171 != v159 )
    {
      v25 = v12[72];
      v26 = *((_QWORD *)v12 + 10);
      if ( v25 == 37 )
      {
        if ( v26 != -1 )
          goto LABEL_200;
        v59 = v19 + 1;
        v15 = v19 + 1;
        if ( v19 == -1LL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
          v15 = -1LL;
        }
        else if ( v11 < v59 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 < v59 )
              goto LABEL_238;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_238:
            if ( v19 == -2LL )
              goto LABEL_88;
            v11 = v19 + 1;
          }
LABEL_105:
          if ( v14 && v14 != src )
          {
            v60 = (char *)realloc(v14, v11);
            if ( v60 )
            {
              v14 = v60;
              goto LABEL_109;
            }
LABEL_126:
            v57 = v14;
            *(_QWORD *)&v162 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v163) = v14 == src;
          v95 = (char *)malloc(v11);
          if ( !v95 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v163 )
            v14 = (char *)memcpy(v95, v14, v19);
          else
            v14 = v95;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v169;
      v28 = (long double *)((char *)v169 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v163) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v163 == 12 )
        {
          _FST7 = v28[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v66 = (char *)*((_QWORD *)v12 + 3);
            v67 = (char *)*((_QWORD *)v12 + 4);
            v68 = *((_DWORD *)v12 + 4);
            if ( v66 == v67 )
            {
              v50 = 0LL;
            }
            else
            {
              v69 = *((_QWORD *)v12 + 5);
              if ( v69 == -1 )
              {
                v50 = 0LL;
                v163 = (void *)-1LL;
                while ( 1 )
                {
                  v126 = v66 + 1;
                  v127 = -1LL;
                  v128 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v127 = 10 * v50;
                  v76 = __CFADD__(v127, v128);
                  v50 = v127 + v128;
                  v66 = v126;
                  if ( v76 )
                  {
                    if ( v67 == v126 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v163;
                      goto LABEL_82;
                    }
                    while ( *v66++ != 48 )
                    {
                      if ( v67 == v66 )
                        goto LABEL_81;
                    }
                    v50 = -1LL;
                  }
                  if ( v67 == v66 )
                    goto LABEL_82;
                }
              }
              v70 = (char *)v169 + 32 * v69;
              if ( *v70 != 5 )
                goto LABEL_200;
              v50 = (int)v70[4];
              if ( (v50 & 0x80000000) != 0LL )
              {
                v68 |= 2u;
                v50 = -(__int64)v50;
              }
            }
LABEL_82:
            v51 = (char *)*((_QWORD *)v12 + 6);
            v52 = (char *)*((_QWORD *)v12 + 7);
            if ( v51 != v52 )
            {
              v53 = *((_QWORD *)v12 + 8);
              if ( v53 == -1 )
              {
                v129 = v51 + 1;
                v55 = 0LL;
                if ( v52 != v129 )
                {
                  v130 = v129;
                  while ( 1 )
                  {
                    v131 = v130 + 1;
                    v132 = *v130 - 48;
                    v133 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v133 = 10 * v55;
                    v76 = __CFADD__(v133, v132);
                    v134 = v133 + v132;
                    v130 = v131;
                    v55 = v134;
                    if ( v76 )
                    {
                      if ( v52 == v131 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v130 = v131 + 1;
                        if ( *v131 == 48 )
                          break;
                        if ( v52 == v130 )
                          goto LABEL_88;
                        ++v131;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v130 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_375;
              }
              v54 = (char *)v169 + 32 * v53;
              if ( *v54 != 5 )
                goto LABEL_200;
              v55 = (int)v54[4];
              if ( (v55 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v55 )
                {
                  v56 = v55 + 12;
                  if ( v55 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_190:
                  v86 = v56;
                  if ( v50 >= v56 )
                    v86 = v50;
                  v76 = __CFADD__(v86, 1LL);
                  v87 = (void *)(v86 + 1);
                  v163 = v87;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v87 <= 0x2BC )
                  {
                    v89 = v176;
                  }
                  else
                  {
                    v157 = (void *)v50;
                    v158 = (char *)v55;
                    LODWORD(v160) = v68;
                    v162 = _FST7;
                    if ( v87 == (void *)-1LL )
                      goto LABEL_88;
                    v88 = (char *)malloc((size_t)v87);
                    v68 = (int)v160;
                    _FST7 = v162;
                    v89 = v88;
                    v55 = (unsigned __int64)v158;
                    v50 = (unsigned __int64)v157;
                    if ( !v88 )
                      goto LABEL_88;
                  }
                  v90 = (unsigned __int16)v166;
                  LOBYTE(v91) = v166;
                  HIBYTE(v91) = BYTE1(v166) | 3;
                  LOWORD(v166) = v91;
                  __asm { fxam }
                  if ( (v62 & 2) != 0 )
                  {
                    *v89 = 45;
                    _FST7 = -_FST7;
                    v92 = v89 + 1;
                  }
                  else if ( (v68 & 4) != 0 )
                  {
                    v92 = v89 + 1;
                    *v89 = 43;
                  }
                  else
                  {
                    v92 = v89;
                    if ( (v68 & 8) != 0 )
                    {
                      v92 = v89 + 1;
                      *v89 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v97 = v92 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      v92[2] = 102;
                      *(_WORD *)v92 = 28265;
                    }
                    else
                    {
                      v92[2] = 70;
                      *(_WORD *)v92 = 20041;
                    }
                    v92 = 0LL;
                    goto LABEL_263;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v96 = v12[72] & 0xDF;
                  switch ( v96 )
                  {
                    case 'F':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || v55 )
                      {
                        LODWORD(v153) = v90;
                        v154 = (char *)v50;
                        v157 = v89;
                        v158 = (char *)v55;
                        LODWORD(v160) = v68;
                        *(_QWORD *)&v162 = v92 + 2;
                        v122 = nl_langinfo(0x10000);
                        v123 = (__int64)v158;
                        v97 = *(char **)&v162;
                        v124 = *v122;
                        LOBYTE(v68) = (_BYTE)v160;
                        v89 = (char *)v157;
                        v50 = (unsigned __int64)v154;
                        LOWORD(v90) = v153;
                        if ( !v124 )
                          v124 = 46;
                        v92[1] = v124;
                        if ( v123 )
                        {
                          v125 = v97;
                          do
                            *v125++ = 48;
                          while ( v125 != &v92[v123 + 2] );
                          v97 += v123;
                        }
                        goto LABEL_263;
                      }
                      goto LABEL_262;
                    case 'E':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 || (v105 = v92 + 1, v55) )
                      {
                        LODWORD(v153) = v90;
                        v154 = (char *)v50;
                        v157 = v89;
                        v158 = (char *)v55;
                        LODWORD(v160) = v68;
                        *(_QWORD *)&v162 = v92 + 2;
                        v138 = nl_langinfo(0x10000);
                        v139 = (__int64)v158;
                        v105 = *(char **)&v162;
                        v140 = *v138;
                        LOBYTE(v68) = (_BYTE)v160;
                        v89 = (char *)v157;
                        v50 = (unsigned __int64)v154;
                        LOWORD(v90) = v153;
                        if ( !v140 )
                          v140 = 46;
                        v92[1] = v140;
                        if ( v139 )
                        {
                          v141 = v105;
                          do
                            *v141++ = 48;
                          while ( v141 != &v92[v139 + 2] );
                          v105 += v139;
                        }
                      }
                      v106 = v12[72];
                      v97 = v105 + 4;
                      v105[3] = 48;
                      *v105 = v106;
                      *(_WORD *)(v105 + 1) = 12331;
                      goto LABEL_263;
                    case 'G':
                      *v92 = 48;
                      if ( (v68 & 0x10) != 0 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v152) = v90;
                          v153 = v50;
                          v154 = v92 + 2;
                          v157 = v89;
                          LODWORD(v158) = v68;
                          v160 = (_BYTE *)v55;
                          *(_QWORD *)&v162 = v55 - 1;
                          v116 = nl_langinfo(0x10000);
                          v117 = *(_QWORD *)&v162;
                          v118 = (__int64)v160;
                          v119 = *v116;
                          LOBYTE(v68) = (_BYTE)v158;
                          v89 = (char *)v157;
                          v97 = v154;
                          v50 = v153;
                          LOWORD(v90) = WORD2(v152);
                          if ( !v119 )
                            v119 = 46;
                          v92[1] = v119;
                          if ( v117 )
                          {
                            v120 = (__int64)&v92[v118 + 1];
                            v121 = v97;
                            do
                              *v121++ = 48;
                            while ( v121 != (char *)v120 );
                            v97 += v117;
                          }
                        }
                        else
                        {
                          LODWORD(v154) = v90;
                          v157 = (void *)v50;
                          v158 = v92 + 2;
                          v160 = v89;
                          LODWORD(v162) = v68;
                          v147 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v162);
                          v89 = v160;
                          v148 = *v147;
                          v97 = v158;
                          v50 = (unsigned __int64)v157;
                          LOWORD(v90) = (_WORD)v154;
                          if ( !v148 )
                            v148 = 46;
                          v92[1] = v148;
                        }
                        goto LABEL_263;
                      }
LABEL_262:
                      v97 = v92 + 1;
                      goto LABEL_263;
                  }
                  if ( v96 != 65 )
                    goto LABEL_200;
                  *v92 = 48;
                  *(_QWORD *)&v162 = v92 + 2;
                  v135 = v12[72];
                  v92[2] = 48;
                  v92[1] = v135 + 23;
                  if ( (v68 & 0x10) != 0 || (v136 = (__int64)(v92 + 3), v55) )
                  {
                    HIDWORD(v152) = v90;
                    v153 = v50;
                    v154 = v89;
                    v157 = (void *)v55;
                    LODWORD(v158) = v68;
                    v160 = v92 + 4;
                    v143 = nl_langinfo(0x10000);
                    v144 = v157;
                    v136 = (__int64)v160;
                    v145 = *v143;
                    LOBYTE(v68) = (_BYTE)v158;
                    v89 = v154;
                    v50 = v153;
                    LOWORD(v90) = WORD2(v152);
                    if ( !v145 )
                      v145 = 46;
                    v92[3] = v145;
                    if ( v144 )
                    {
                      v146 = (_BYTE *)v136;
                      do
                        *v146++ = 48;
                      while ( v146 != (_BYTE *)v144 + (_QWORD)v92 + 4 );
                      v136 += (__int64)v144;
                    }
                  }
                  v137 = v12[72];
                  v97 = (char *)(v136 + 3);
                  *(_WORD *)(v136 + 1) = 12331;
                  v92 = *(char **)&v162;
                  *(_BYTE *)v136 = v137 + 15;
LABEL_263:
                  LOWORD(v166) = v90;
                  v98 = v97 - v89;
                  if ( v50 > v97 - v89 )
                  {
                    v99 = v50 - v98;
                    v100 = &v97[v99];
                    v98 = &v97[v99] - v89;
                    if ( (v68 & 2) != 0 )
                    {
                      if ( v99 )
                      {
                        do
                          *v97++ = 32;
                        while ( v100 != v97 );
                      }
                    }
                    else if ( (v68 & 0x20) != 0 && v92 )
                    {
                      if ( v92 >= v97 )
                      {
                        v92 = v97;
                      }
                      else
                      {
                        v101 = -1LL;
                        do
                        {
                          v100[v101] = v97[v101];
                          --v101;
                        }
                        while ( v101 != v92 - 1 - v97 );
                      }
                      if ( v99 )
                      {
                        v102 = &v92[v99];
                        do
                          *v92++ = 48;
                        while ( v92 != v102 );
                      }
                    }
                    else
                    {
                      v112 = -1LL;
                      if ( v89 < v97 )
                      {
                        do
                        {
                          v100[v112] = v97[v112];
                          --v112;
                        }
                        while ( v89 - 1 - v97 != v112 );
                        v97 = v89;
                      }
                      if ( v99 )
                      {
                        v113 = &v97[v99];
                        do
                          *v97++ = 32;
                        while ( v97 != v113 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v163 <= v98 )
                    goto LABEL_200;
                  v103 = v98 + v19;
                  v15 = v98 + v19;
                  if ( v11 - v19 <= v98 )
                  {
                    if ( __CFADD__(v98, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v103 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v103 )
                          goto LABEL_373;
                      }
                      else
                      {
                        if ( v103 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_280;
                        }
LABEL_373:
                        if ( v103 == -1LL )
                          goto LABEL_88;
                        v11 = v98 + v19;
                      }
LABEL_280:
                      if ( !v14 || v14 == src )
                      {
                        LOBYTE(v160) = v14 == src;
                        *(_QWORD *)&v162 = v98;
                        v163 = v89;
                        v114 = (char *)malloc(v11);
                        v89 = (char *)v163;
                        v98 = *(_QWORD *)&v162;
                        if ( !v114 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v160 )
                        {
                          v115 = (char *)memcpy(v114, v14, v19);
                          v89 = (char *)v163;
                          v98 = *(_QWORD *)&v162;
                          v14 = v115;
                        }
                        else
                        {
                          v14 = v114;
                        }
                      }
                      else
                      {
                        *(_QWORD *)&v162 = v98;
                        v163 = v89;
                        v104 = (char *)realloc(v14, v11);
                        if ( !v104 )
                          goto LABEL_88;
                        v89 = (char *)v163;
                        v98 = *(_QWORD *)&v162;
                        v14 = v104;
                      }
                    }
                  }
                  v163 = v89;
                  memcpy(&v14[v19], v89, v98);
                  if ( v163 != v176 )
                    free(v163);
                  goto LABEL_110;
                }
LABEL_375:
                v56 = 12LL;
                goto LABEL_190;
              }
            }
            v56 = 12LL;
            if ( v30 != 65 )
              v56 = 18LL;
            v55 = 0LL;
            if ( v30 != 65 )
              v55 = 6LL;
            goto LABEL_190;
          }
        }
        v31 = *((_DWORD *)v12 + 4);
        v32 = (char *)v161 + 1;
        *(_BYTE *)v161 = 37;
        if ( (v31 & 1) != 0 )
        {
          v33 = (__int64)v161;
          *((_BYTE *)v161 + 1) = 39;
          v32 = (char *)(v33 + 2);
        }
        if ( (v31 & 2) != 0 )
          *v32++ = 45;
        if ( (v31 & 4) != 0 )
          *v32++ = 43;
        if ( (v31 & 8) != 0 )
          *v32++ = 32;
        if ( (v31 & 0x10) != 0 )
          *v32++ = 35;
        if ( (v31 & 0x40) != 0 )
          *v32++ = 73;
        if ( (v31 & 0x20) != 0 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v160 = v27;
          *(_QWORD *)&v162 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v160;
          v32 += *(_QWORD *)&v162;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v160 = v27;
          *(_QWORD *)&v162 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v160;
          v32 += *(_QWORD *)&v162;
        }
        if ( (unsigned int)v163 <= 0x10 )
        {
          v38 = 1LL << (char)v163;
          if ( ((1LL << (char)v163) & 0x14180) != 0 )
            goto LABEL_125;
          if ( (v38 & 0x1000) != 0 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( (v38 & 0x600) == 0 )
              goto LABEL_62;
            *v32++ = 108;
LABEL_125:
            *v32++ = 108;
          }
        }
LABEL_62:
        v39 = v12[72];
        v32[1] = 0;
        *v32 = v39;
        v40 = *((_QWORD *)v12 + 5);
        if ( v40 != -1 )
        {
          v41 = &v27[32 * v40];
          if ( *(_DWORD *)v41 == 5 )
          {
            LODWORD(v160) = 1;
            v166 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v160) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v160;
          *(&v166 + (unsigned int)v160) = *((_DWORD *)v43 + 4);
          LODWORD(v160) = v44 + 1;
        }
        v45 = v19 + 2;
        if ( v19 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v11 != -1LL )
            goto LABEL_88;
        }
        else if ( v11 < v45 )
        {
          if ( v11 )
          {
            if ( (v11 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v11 *= 2LL;
            if ( v11 >= v45 )
              goto LABEL_73;
          }
          else if ( v45 <= 0xC )
          {
            v11 = 12LL;
LABEL_73:
            if ( v14 && v14 != src )
            {
              v46 = (char *)realloc(v14, v11);
              if ( v46 )
                goto LABEL_76;
LABEL_88:
              v57 = v14;
              *(_QWORD *)&v162 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v172 != v175 )
                    free(v172);
                  if ( v169 != v170 )
                    free(v169);
                  v14 = 0LL;
                  **(_DWORD **)&v162 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v162 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v162) = v14 == src;
            v94 = (char *)malloc(v11);
            v46 = v94;
            if ( !v94 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v162) )
              v46 = (char *)memcpy(v94, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v158 = v46;
            v47 = __errno_location();
            v48 = v158;
            v158 = v32;
            *(_QWORD *)&v162 = v47;
            LODWORD(v154) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v165 = -1;
              **(_DWORD **)&v162 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (int)v163 )
              {
                case 1:
                  v72 = (unsigned int)*((char *)v169 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v72 = *((unsigned __int8 *)v169 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v72 = (unsigned int)*((__int16 *)v169 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v72 = *((unsigned __int16 *)v169 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 13:
                case 14:
                  v72 = *((unsigned int *)v169 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v157 = v48;
                  if ( (_DWORD)v160 != 1 )
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v150 = &v165;
                      goto LABEL_153;
                    }
                    goto LABEL_209;
                  }
                  v151 = &v165;
                  v150 = (int *)v72;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 15:
                case 16:
                case 17:
                  v71 = &v48[v19];
                  v72 = *((_QWORD *)v169 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v157 = v48;
                  if ( (_DWORD)v160 != 1 )
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v72, a5, &v165, v151);
LABEL_131:
                      v48 = (char *)v157;
                      goto LABEL_132;
                    }
LABEL_209:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v166, a5, v167, v72);
LABEL_210:
                    v48 = (char *)v157;
LABEL_132:
                    v74 = v165;
                    if ( v165 < 0 )
                    {
LABEL_154:
                      if ( v158[1] )
                      {
                        v158[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v80 = **(_DWORD **)&v162;
                        if ( !**(_DWORD **)&v162 )
                        {
                          v80 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v80 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v172 != v175 )
                          free(v172);
                        if ( v169 != v170 )
                          free(v169);
                        **(_DWORD **)&v162 = v80;
                        return 0LL;
                      }
LABEL_136:
                      v165 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v162 = (_DWORD)v154;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v172 != v175 )
                          free(v172);
                        if ( v169 != v170 )
                          free(v169);
                        v14 = 0LL;
                        **(_DWORD **)&v162 = 75;
                        return v14;
                      }
                      v75 = (unsigned int)(v74 + 2);
                      v76 = __CFADD__(v19, v75);
                      v77 = v19 + v75;
                      if ( (v11 & 0x8000000000000000LL) != 0LL )
                      {
                        if ( v11 != -1LL )
                          goto LABEL_202;
                      }
                      else
                      {
                        if ( v76 )
                          goto LABEL_202;
                        if ( 2 * v11 >= v77 )
                          v77 = 2 * v11;
                        if ( v11 < v77 )
                        {
                          v11 *= 2LL;
                          if ( v11 < v77 )
                          {
                            if ( v77 == -1LL )
                            {
LABEL_202:
                              v57 = v48;
                              goto LABEL_89;
                            }
                            v11 = v77;
                          }
                          v78 = v48 == src;
                          if ( !v48 || v48 == src )
                          {
                            v157 = v48;
                            v93 = (char *)malloc(v11);
                            v48 = (char *)v157;
                            if ( !v93 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v93, v157, v19);
                            else
                              v48 = v93;
                          }
                          else
                          {
                            v157 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v157;
                            if ( !v79 )
                              goto LABEL_202;
                            v48 = v79;
                          }
                        }
                      }
                      continue;
                    }
LABEL_133:
                    if ( v74 < v49 && v48[v74 + v19] )
                      goto LABEL_200;
                    if ( v74 >= v73 )
                      goto LABEL_137;
                    goto LABEL_136;
                  }
                  v151 = &v165;
                  v150 = (int *)v72;
                  break;
                case 11:
                  v84 = *((_QWORD *)v12 + 10);
                  v85 = &v48[v19];
                  v157 = v48;
                  a5 = *((double *)v169 + 4 * v84 + 2);
                  if ( (_DWORD)v160 == 1 )
                  {
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, v166, a5, &v165, v151);
                  }
                  else
                  {
                    if ( (_DWORD)v160 != 2 )
                    {
                      v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, &v165, a5, v152, v153);
                      v48 = (char *)v157;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v85, v49, 1LL, -1LL, v161, v166, a5, v167, &v165);
                  }
                  v48 = (char *)v157;
                  goto LABEL_132;
                case 12:
                  v81 = *((_QWORD *)v12 + 10);
                  v82 = &v48[v19];
                  v157 = v48;
                  v83 = *((unsigned __int128 *)v169 + 2 * v81 + 1);
                  if ( (_DWORD)v160 == 1 )
                  {
                    v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, v166, a5, v83, v83 >> 64);
                    goto LABEL_210;
                  }
                  if ( (_DWORD)v160 != 2 )
                  {
                    v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, &v165, a5, v83, v83 >> 64);
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v82, v49, 1LL, -1LL, v161, v166, a5, v167, v149);
                  v48 = (char *)v157;
                  goto LABEL_132;
                default:
                  goto LABEL_408;
              }
              break;
            }
            v72 = v166;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v161, v72, a5, v150, v151);
            v74 = v165;
            v48 = (char *)v157;
            if ( v165 < 0 )
              goto LABEL_154;
            goto LABEL_133;
          }
          if ( v19 != -3LL )
          {
            v11 = v19 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v46 = v14;
        goto LABEL_76;
      }
      switch ( v29 )
      {
        case 18:
          v15 = v19;
          **((_BYTE **)v28 + 2) = v19;
          break;
        case 19:
          v15 = v19;
          **((_WORD **)v28 + 2) = v19;
          break;
        case 20:
          v15 = v19;
          **((_DWORD **)v28 + 2) = v19;
          break;
        case 21:
        case 22:
          v15 = v19;
          **((_QWORD **)v28 + 2) = v19;
          break;
        default:
LABEL_408:
          abort();
      }
LABEL_110:
      v13 = (_BYTE *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v159;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v107 = v19;
    v108 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v108 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v108 )
        {
LABEL_303:
          v109 = v14 == src;
          if ( !v14 || v14 == src )
          {
            v142 = (char *)malloc(v11);
            if ( !v142 )
              goto LABEL_88;
            if ( v107 && v109 )
              v14 = (char *)memcpy(v142, v14, v107);
            else
              v14 = v142;
          }
          else
          {
            v110 = (char *)realloc(v14, v11);
            if ( !v110 )
              goto LABEL_126;
            v14 = v110;
          }
          goto LABEL_307;
        }
      }
      else if ( v108 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_303;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_303;
    }
LABEL_307:
    v14[v107] = 0;
    if ( v11 > v108 && v14 != src )
    {
      v111 = (char *)realloc(v14, v108);
      if ( v111 )
        v14 = v111;
    }
    if ( ptr )
      free(ptr);
    if ( v172 != v175 )
      free(v172);
    if ( v169 != v170 )
      free(v169);
    *v156 = v107;
    return v14;
  }
  if ( v172 != v175 )
    free(v172);
  if ( v169 != v170 )
    free(v169);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

__int64 __fastcall sub_40FE80(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6, char a7)
{
  return sub_40FE90(a1, 0, 3, a4, a5, a6, a7);
}

__int64 __fastcall sub_40FE90(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v8; // eax
  int *v9; // rax
  int v10; // edi
  int v11; // r12d
  int *v12; // rbp
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // [rsp+30h] [rbp-38h]

  v16 = a3;
  if ( a2 == 1030 )
  {
    if ( dword_6178A0 < 0 )
    {
      v6 = sub_40FE90(a1, 0, a3, a4, a5, a6);
      if ( v6 >= 0 && dword_6178A0 == -1 )
      {
LABEL_8:
        v8 = fcntl(v6, 1);
        if ( v8 < 0 || fcntl(v6, 2, v8 | 1u) == -1 )
        {
          v9 = __errno_location();
          v10 = v6;
          v6 = -1;
          v11 = *v9;
          v12 = v9;
          close(v10);
          *v12 = v11;
        }
      }
    }
    else
    {
      v6 = fcntl(a1, 1030, (unsigned int)a3);
      if ( v6 < 0 && *__errno_location() == 22 )
      {
        v6 = sub_40FE90(a1, 0, v16, v13, v14, v15);
        if ( v6 >= 0 )
        {
          dword_6178A0 = -1;
          goto LABEL_8;
        }
      }
      else
      {
        dword_6178A0 = 1;
      }
    }
    return (unsigned int)v6;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

__int64 __fastcall sub_40FFD0(int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // ecx
  _QWORD *v5; // r10
  unsigned int v7; // ecx
  _DWORD *v8; // r10
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

  v2 = a2[1];
  if ( *a2 )
  {
    v3 = 0LL;
    while ( 2 )
    {
      switch ( *(_DWORD *)v2 )
      {
        case 1:
        case 2:
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
          *(_BYTE *)(v2 + 16) = *v12;
          goto LABEL_7;
        case 3:
        case 4:
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
          *(_WORD *)(v2 + 16) = *v10;
          goto LABEL_7;
        case 5:
        case 6:
        case 0xD:
        case 0xE:
          v7 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v8 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v8 + 2;
          }
          else
          {
            v8 = (_DWORD *)(*((_QWORD *)a1 + 2) + v7);
            *a1 = v7 + 8;
          }
          *(_DWORD *)(v2 + 16) = *v8;
          goto LABEL_7;
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
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
          *(_QWORD *)(v2 + 16) = *v5;
          goto LABEL_7;
        case 0xB:
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
          *(_QWORD *)(v2 + 16) = *v14;
          goto LABEL_7;
        case 0xC:
          v15 = (long double *)((*((_QWORD *)a1 + 1) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
          *((_QWORD *)a1 + 1) = v15 + 1;
          *(long double *)(v2 + 16) = *v15;
          goto LABEL_7;
        case 0xF:
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
          *(_QWORD *)(v2 + 16) = v21;
          goto LABEL_7;
        case 0x10:
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
            v18 = &unk_413D60;
          *(_QWORD *)(v2 + 16) = v18;
LABEL_7:
          ++v3;
          v2 += 32LL;
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

__int64 __fastcall sub_4101F0(char *a1, _QWORD *a2, unsigned __int64 *a3)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r13
  char *v9; // rbp
  __int64 result; // rax
  unsigned __int64 v11; // r14
  char *v12; // r12
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
  _QWORD *v34; // r12
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
  _QWORD *v51; // rdi
  unsigned __int64 v52; // r9
  _DWORD *v53; // rax
  char *i; // rcx
  char *v55; // rdx
  unsigned __int64 v56; // rax
  const void *v57; // rsi
  _QWORD *v58; // rdi
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
  _QWORD *v82; // [rsp+28h] [rbp-60h]
  unsigned __int64 v83; // [rsp+30h] [rbp-58h]
  char *v84; // [rsp+30h] [rbp-58h]
  unsigned __int64 v85; // [rsp+30h] [rbp-58h]
  int v86; // [rsp+30h] [rbp-58h]
  int v87; // [rsp+30h] [rbp-58h]
  _BYTE *v88; // [rsp+30h] [rbp-58h]
  char *v89; // [rsp+30h] [rbp-58h]
  _BYTE *v90; // [rsp+30h] [rbp-58h]
  _QWORD *v91; // [rsp+38h] [rbp-50h]
  __int64 v92; // [rsp+38h] [rbp-50h]
  _QWORD *v93; // [rsp+38h] [rbp-50h]
  __int64 v94; // [rsp+38h] [rbp-50h]
  __int64 v95; // [rsp+38h] [rbp-50h]
  __int64 v96; // [rsp+38h] [rbp-50h]
  __int64 v97; // [rsp+38h] [rbp-50h]
  __int64 v98; // [rsp+38h] [rbp-50h]
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
  v6 = 7LL;
  v7 = 7LL;
  v8 = 0LL;
  *a2 = 0LL;
  a2[1] = a2 + 4;
  v82 = a2 + 4;
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
  v12 = (char *)&v3[11 * v8];
  *(_QWORD *)v12 = a1;
  *((_DWORD *)v12 + 4) = 0;
  *((_QWORD *)v12 + 3) = 0LL;
  *((_QWORD *)v12 + 4) = 0LL;
  *((_QWORD *)v12 + 5) = -1LL;
  *((_QWORD *)v12 + 6) = 0LL;
  *((_QWORD *)v12 + 7) = 0LL;
  *((_QWORD *)v12 + 8) = -1LL;
  *((_QWORD *)v12 + 10) = -1LL;
  v13 = a1[1];
  if ( (unsigned __int8)(v13 - 48) > 9u )
    goto LABEL_16;
  v36 = a1 + 1;
  do
    ++v36;
  while ( (unsigned __int8)(*v36 - 48) <= 9u );
  if ( *v36 != 36 )
  {
    v11 = -1LL;
    goto LABEL_16;
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
        goto LABEL_130;
      v63 = -1LL;
      v65 = v9;
      v64 = v13 - 48;
    }
  }
  while ( v67 <= 9u );
  v11 = v66 - 1;
  if ( v66 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_130;
  v9 = v65 + 2;
  v13 = v65[2];
  while ( 1 )
  {
LABEL_16:
    v14 = v9 + 1;
    switch ( v13 )
    {
      case '\'':
        *((_DWORD *)v12 + 4) |= 1u;
        goto LABEL_15;
      case '-':
        *((_DWORD *)v12 + 4) |= 2u;
        goto LABEL_15;
      case '+':
        *((_DWORD *)v12 + 4) |= 4u;
        goto LABEL_15;
      case ' ':
        *((_DWORD *)v12 + 4) |= 8u;
        goto LABEL_15;
      case '#':
        *((_DWORD *)v12 + 4) |= 0x10u;
        goto LABEL_15;
    }
    if ( v13 != 48 )
      break;
    *((_DWORD *)v12 + 4) |= 0x20u;
LABEL_15:
    v13 = *v14;
    ++v9;
  }
  if ( v13 == 73 )
  {
    *((_DWORD *)v12 + 4) |= 0x40u;
    goto LABEL_15;
  }
  if ( v13 == 42 )
  {
    v16 = 1LL;
    *((_QWORD *)v12 + 3) = v9;
    *((_QWORD *)v12 + 4) = v14;
    if ( v79 )
      v16 = v79;
    v79 = v16;
    v17 = v9[1];
    if ( (unsigned __int8)(v9[1] - 48) > 9u )
      goto LABEL_39;
    v43 = v9 + 1;
    do
      ++v43;
    while ( (unsigned __int8)(*v43 - 48) <= 9u );
    if ( *v43 == 36 )
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
            goto LABEL_130;
          v45 = -1LL;
          v47 = v14;
          v46 = v17 - 48;
        }
      }
      while ( v50 <= 9u );
      v18 = v49 - 1;
      if ( v49 - 1 > 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_130;
      *((_QWORD *)v12 + 5) = v18;
      v14 = v47 + 2;
    }
    else
    {
LABEL_39:
      v18 = *((_QWORD *)v12 + 5);
      if ( v18 == -1LL )
      {
        *((_QWORD *)v12 + 5) = v81;
        if ( v81 == -1LL )
          goto LABEL_130;
        v18 = v81++;
      }
    }
    v19 = (_DWORD *)a3[1];
    if ( v6 > v18 )
    {
      v20 = *a3;
LABEL_42:
      if ( v20 <= v18 )
      {
        do
        {
          ++v20;
          v19[8 * v20 - 8] = 0;
        }
        while ( v20 <= v18 );
        *a3 = v20;
      }
      v21 = &v19[8 * v18];
      if ( *v21 )
      {
        if ( *v21 == 5 )
        {
          v13 = *v14;
          v9 = v14++;
          goto LABEL_25;
        }
        goto LABEL_131;
      }
      *v21 = 5;
      v13 = *v14;
      v9 = v14++;
      if ( v13 != 46 )
        goto LABEL_26;
LABEL_47:
      v22 = v9[1] == 42;
      *((_QWORD *)v12 + 6) = v9;
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
        *((_QWORD *)v12 + 7) = v14;
        v13 = *v14;
        if ( v80 >= v37 )
          v37 = v80;
        v80 = v37;
        goto LABEL_26;
      }
      v23 = 2LL;
      v24 = v9 + 2;
      *((_QWORD *)v12 + 7) = v9 + 2;
      if ( v80 >= 2 )
        v23 = v80;
      v80 = v23;
      v25 = v9[2];
      if ( (unsigned __int8)(v9[2] - 48) > 9u )
        goto LABEL_51;
      v68 = v9 + 2;
      do
        ++v68;
      while ( (unsigned __int8)(*v68 - 48) <= 9u );
      if ( *v68 == 36 )
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
              goto LABEL_130;
            v70 = -1LL;
            v72 = v24;
            v71 = v25 - 48;
          }
        }
        while ( v74 <= 9u );
        v26 = v73 - 1;
        if ( v73 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *((_QWORD *)v12 + 8) = v26;
          v24 = v72 + 2;
LABEL_52:
          v19 = (_DWORD *)a3[1];
          if ( v6 > v26 )
          {
            v27 = *a3;
            goto LABEL_54;
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
                goto LABEL_162;
              v27 = *a3;
              v40 = src;
              v19 = v75;
            }
            else
            {
              v60 = realloc(v19, 32 * v59);
              v40 = (_DWORD *)a3[1];
              v24 = v88;
              v19 = v60;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v60 )
                goto LABEL_160;
              v27 = *a3;
              if ( src != v40 )
                goto LABEL_171;
            }
            v110 = v4;
            v104 = v6;
            v98 = v7;
            v90 = v24;
            memcpy(v19, v40, 32 * v27);
            v27 = *a3;
            v4 = v110;
            v6 = v104;
            v7 = v98;
            v24 = v90;
LABEL_171:
            a3[1] = (unsigned __int64)v19;
LABEL_54:
            if ( v27 <= v26 )
            {
              do
              {
                ++v27;
                v19[8 * v27 - 8] = 0;
              }
              while ( v27 <= v26 );
              *a3 = v27;
            }
            v28 = &v19[8 * v26];
            if ( !*v28 )
            {
              *v28 = 5;
              v9 = v24;
              v13 = *v24;
              goto LABEL_26;
            }
            if ( *v28 == 5 )
            {
              v13 = *v24;
              v9 = v24;
              goto LABEL_26;
            }
            goto LABEL_131;
          }
LABEL_159:
          v40 = v19;
          goto LABEL_160;
        }
      }
      else
      {
LABEL_51:
        v26 = *((_QWORD *)v12 + 8);
        if ( v26 != -1LL )
          goto LABEL_52;
        *((_QWORD *)v12 + 8) = v81;
        if ( v81 != -1LL )
        {
          v26 = v81++;
          goto LABEL_52;
        }
      }
LABEL_130:
      v19 = (_DWORD *)a3[1];
LABEL_131:
      if ( src != v19 )
      {
        srca = v4;
        free(v19);
        v4 = srca;
      }
      v51 = (_QWORD *)v4[1];
      if ( v82 != v51 )
        free(v51);
      *__errno_location() = 22;
      return 0xFFFFFFFFLL;
    }
    v38 = 2 * v6;
    if ( v38 <= v18 )
      v38 = v18 + 1;
    if ( v38 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_159;
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
        goto LABEL_162;
      v20 = *a3;
      v40 = src;
      v19 = v61;
    }
    else
    {
      v39 = realloc(v19, 32 * v38);
      v40 = (_DWORD *)a3[1];
      v14 = v84;
      v19 = v39;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v39 )
        goto LABEL_160;
      v20 = *a3;
      if ( src != v40 )
        goto LABEL_93;
    }
    v109 = v4;
    v103 = v6;
    v97 = v7;
    v89 = v14;
    memcpy(v19, v40, 32 * v20);
    v20 = *a3;
    v4 = v109;
    v6 = v103;
    v7 = v97;
    v14 = v89;
LABEL_93:
    a3[1] = (unsigned __int64)v19;
    goto LABEL_42;
  }
  if ( (unsigned __int8)(v13 - 48) <= 9u )
  {
    *((_QWORD *)v12 + 3) = v9;
    if ( (unsigned __int8)(*v9 - 48) <= 9u )
    {
      for ( i = v9; ; ++i )
      {
        v55 = i + 1;
        if ( (unsigned __int8)(i[1] - 48) > 9u )
          break;
      }
      v14 = i + 2;
      v56 = v55 - v9;
      v9 = v55;
      if ( v79 >= v56 )
        v56 = v79;
      v79 = v56;
    }
    *((_QWORD *)v12 + 4) = v9;
    v13 = *v9;
  }
LABEL_25:
  if ( v13 == 46 )
    goto LABEL_47;
LABEL_26:
  v15 = 0;
  while ( 2 )
  {
    ++v9;
    if ( v13 == 104 )
    {
      v15 |= 1 << (v15 & 1);
      goto LABEL_33;
    }
    if ( v13 == 76 )
    {
      v15 |= 4u;
      goto LABEL_33;
    }
    if ( v13 == 108 || v13 == 106 || (v13 & 0xDF) == 90 || v13 == 116 )
    {
      v15 += 8;
LABEL_33:
      v13 = *v9;
      continue;
    }
    break;
  }
  switch ( v13 )
  {
    case '%':
      goto LABEL_70;
    case 'A':
    case 'E':
    case 'F':
    case 'G':
    case 'a':
    case 'e':
    case 'f':
    case 'g':
      v29 = 12;
      if ( v15 <= 15 )
        v29 = ((v15 & 4) != 0) + 11;
      goto LABEL_62;
    case 'C':
      v29 = 14;
      v13 = 99;
      goto LABEL_62;
    case 'S':
      v29 = 16;
      v13 = 115;
      goto LABEL_62;
    case 'X':
    case 'o':
    case 'u':
    case 'x':
      v29 = 10;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 8;
        if ( v15 <= 7 )
        {
          v29 = 2;
          if ( (v15 & 2) == 0 )
            v29 = (v15 & 1) == 0 ? 6 : 4;
        }
      }
      goto LABEL_62;
    case 'c':
      v29 = (v15 > 7) + 13;
      goto LABEL_62;
    case 'd':
    case 'i':
      v29 = 9;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 7;
        if ( v15 <= 7 )
        {
          v29 = 1;
          if ( (v15 & 2) == 0 )
            v29 = (v15 & 1) == 0 ? 5 : 3;
        }
      }
      goto LABEL_62;
    case 'n':
      v29 = 22;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 21;
        if ( v15 <= 7 )
        {
          v29 = 18;
          if ( (v15 & 2) == 0 )
            v29 = ((v15 & 1) == 0) + 19;
        }
      }
      goto LABEL_62;
    case 'p':
      v29 = 17;
      goto LABEL_62;
    case 's':
      v29 = (v15 > 7) + 15;
LABEL_62:
      if ( v11 == -1LL )
      {
        *((_QWORD *)v12 + 10) = v81;
        if ( v81 == -1LL )
          goto LABEL_130;
        v11 = v81++;
      }
      else
      {
        *((_QWORD *)v12 + 10) = v11;
      }
      v19 = (_DWORD *)a3[1];
      if ( v6 > v11 )
        goto LABEL_65;
      v52 = 2 * v6;
      if ( v52 <= v11 )
        v52 = v11 + 1;
      if ( v52 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_159;
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
          goto LABEL_162;
        goto LABEL_158;
      }
      v53 = realloc(v19, 32 * v52);
      v29 = v86;
      v7 = v94;
      v19 = v53;
      v6 = v100;
      v4 = v106;
      if ( !v53 )
        goto LABEL_210;
      if ( src == (_DWORD *)a3[1] )
      {
        v19 = src;
LABEL_158:
        v57 = v19;
        v107 = v4;
        v101 = v6;
        v19 = v53;
        v95 = v7;
        v87 = v29;
        memcpy(v53, v57, 32 * *a3);
        v4 = v107;
        v29 = v87;
        v6 = v101;
        v7 = v95;
      }
      a3[1] = (unsigned __int64)v19;
LABEL_65:
      v30 = *a3;
      if ( *a3 <= v11 )
      {
        do
        {
          ++v30;
          v19[8 * v30 - 8] = 0;
        }
        while ( v30 <= v11 );
        *a3 = v30;
      }
      v31 = &v19[8 * v11];
      if ( *v31 )
      {
        if ( *v31 != v29 )
          goto LABEL_131;
      }
      else
      {
        *v31 = v29;
      }
LABEL_70:
      v12[72] = v13;
      v32 = *v4;
      *((_QWORD *)v12 + 1) = v9;
      v8 = v32 + 1;
      *v4 = v32 + 1;
      if ( v7 > (unsigned __int64)(v32 + 1) )
      {
        v3 = (_QWORD *)v4[1];
        goto LABEL_3;
      }
      if ( v7 >= 0 )
      {
        v33 = 2 * v7;
        if ( (unsigned __int64)(2 * v7) <= 0x2E8BA2E8BA2E8BALL )
        {
          v34 = (_QWORD *)v4[1];
          v91 = v4;
          v83 = v6;
          if ( v82 == v34 )
          {
            v41 = malloc(176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v41;
            if ( !v41 )
            {
              v40 = (_DWORD *)a3[1];
              if ( src != v40 )
                goto LABEL_161;
              goto LABEL_164;
            }
          }
          else
          {
            v35 = realloc(v34, 176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v35;
            if ( !v35 )
              goto LABEL_210;
            v34 = (_QWORD *)v91[1];
            v8 = *v91;
            if ( v82 != v34 )
              goto LABEL_77;
          }
          v93 = v4;
          v85 = v6;
          v42 = memcpy(v3, v34, 88 * v8);
          v4 = v93;
          v6 = v85;
          v3 = v42;
          v8 = *v93;
LABEL_77:
          v4[1] = v3;
          v7 = v33;
          goto LABEL_3;
        }
      }
LABEL_210:
      v40 = (_DWORD *)a3[1];
LABEL_160:
      if ( src != v40 )
      {
LABEL_161:
        srcb = v4;
        free(v40);
        v4 = srcb;
      }
LABEL_162:
      v58 = (_QWORD *)v4[1];
      if ( v82 != v58 )
        free(v58);
LABEL_164:
      *__errno_location() = 12;
      result = 0xFFFFFFFFLL;
      break;
    default:
      goto LABEL_130;
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

int __fastcall sub_410F70(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( qword_617308 )
    v1 = (void *)qword_617308[0];
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_410F88(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_616E30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
