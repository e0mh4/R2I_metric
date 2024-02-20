__int64 __fastcall main(int a1, char **a2, char **a3)
{
  int v3; // er14@1
  struct lconv *v4; // rax@1
  const char *v5; // rdi@1
  signed int v6; // ebx@3
  char v7; // bp@3
  int v8; // er12@4
  __int64 v9; // rax@23
  char *v10; // rax@24
  char *v11; // rbx@24
  int v12; // eax@25
  __int64 v13; // rax@28
  const char **v14; // rbx@28
  unsigned __int8 v15; // cf@28
  bool v16; // zf@28
  char **v17; // r15@28
  char v18; // r13@28
  char v19; // al@31
  const char *v20; // r14@33
  signed __int64 v21; // rcx@33
  char *v22; // rdi@33
  const char *v23; // rsi@33
  bool v24; // al@39
  void *v25; // rdi@41
  __int64 v26; // rax@44
  __int64 v27; // r14@44
  char *v28; // rax@44
  char *v29; // r14@47
  int *v30; // rax@47
  __int64 v32; // rax@50
  const char *v33; // rsi@50
  char *v34; // r14@51
  int *v35; // rax@51
  __int64 v36; // rax@52
  __int64 v37; // rax@53
  __int64 v38; // rbx@53
  char *v39; // rax@53
  void *v40; // rax@54
  void *v41; // rax@54
  char *v42; // rax@57
  void *src; // [sp+8h] [bp-E0h]@3
  void *v44; // [sp+10h] [bp-D8h]@23
  __int64 v45; // [sp+18h] [bp-D0h]@50
  struct stat stat_buf; // [sp+20h] [bp-C8h]@30

  v3 = a1;
  sub_4072F0(*a2, a2, a3);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  v4 = localeconv();
  v5 = v4->decimal_point;
  if ( !*v4->decimal_point )
    v5 = ".";
  v6 = 0;
  v7 = 0;
  qword_617478 = (__int64)v5;
  qword_617470 = strlen(v5);
  sub_410340(
    sub_405530,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  src = 0LL;
  while ( 1 )
  {
    v8 = sub_40ADD0((unsigned int)v3, a2, "c:fLt", &off_410E20, 0LL);
    if ( v8 == -1 )
      break;
    if ( v8 == 99 )
    {
      byte_617480 = 0;
      off_617310 = "\n";
      src = (void *)qword_617638;
    }
    else if ( v8 <= 99 )
    {
      if ( v8 == -130 )
        sub_404870(0);
      if ( v8 != 76 )
      {
        if ( v8 == -131 )
        {
          sub_409420((char)stdout);
          exit(0);
        }
LABEL_14:
        sub_404870(1);
      }
      byte_617481 = 1;
    }
    else if ( v8 == 116 )
    {
      v6 = 1;
    }
    else if ( v8 == 128 )
    {
      byte_617480 = 1;
      off_617310 = "";
      src = (void *)qword_617638;
    }
    else
    {
      if ( v8 != 102 )
        goto LABEL_14;
      v7 = 1;
    }
  }
  if ( dword_61739C == v3 )
  {
    v42 = dcgettext(0LL, "missing operand", 5);
    error(0, 0, v42);
    goto LABEL_14;
  }
  if ( src )
  {
    LODWORD(v9) = sub_40BD00(src, "%N");
    v44 = src;
    if ( v9 )
    {
      v10 = getenv("QUOTING_STYLE");
      v11 = v10;
      if ( v10 )
      {
        v12 = sub_405190(v10, off_413240, dword_413200, 4LL);
        if ( v12 < 0 )
        {
          sub_4088B0(0LL, 4LL);
          LODWORD(v37) = sub_408F10(v11);
          v38 = v37;
          v39 = dcgettext(0LL, "ignoring invalid value of environment variable QUOTING_STYLE: %s", 5);
          error(0, 0, v39, v38);
          v44 = src;
        }
        else
        {
          sub_4088B0(0LL, (unsigned int)dword_413200[v12]);
          v44 = src;
        }
      }
      else
      {
        sub_4088B0(0LL, 4LL);
        v44 = src;
      }
    }
  }
  else
  {
    LODWORD(v40) = sub_403E80((unsigned __int8)v7, (unsigned int)v6, 0LL);
    src = v40;
    LODWORD(v41) = sub_403E80((unsigned __int8)v7, (unsigned int)v6, 1LL);
    v44 = v41;
  }
  if ( v3 > dword_61739C )
  {
    v13 = (unsigned int)(v3 + ~dword_61739C);
    v14 = (const char **)&a2[dword_61739C];
    v15 = __CFADD__(dword_61739C, v13);
    v16 = dword_61739C + v13 == 0;
    v17 = &(&a2[dword_61739C + 1])[8 * v13];
    v18 = 1;
    while ( 1 )
    {
      v20 = *v14;
      v21 = 2LL;
      v22 = "-";
      v23 = *v14;
      do
      {
        if ( !v21 )
          break;
        v15 = *v23 < (unsigned __int8)*v22;
        v16 = *v23++ == *v22++;
        --v21;
      }
      while ( v16 );
      if ( v7 )
      {
        if ( !(v15 | v16) == v15 )
        {
          LODWORD(v26) = sub_408CC0(4LL, *v14);
          v27 = v26;
          v28 = dcgettext(0LL, "using %s to denote standard input does not work in file system mode", 5);
          error(0, 0, v28, v27);
          v19 = 0;
        }
        else
        {
          if ( statfs(*v14, (struct statfs *)&stat_buf) )
          {
            LODWORD(v32) = sub_408CC0(4LL, v20);
            v33 = "cannot read file system information for %s";
            v45 = v32;
LABEL_51:
            v34 = dcgettext(0LL, v33, 5);
            v35 = __errno_location();
            error(0, *v35, v34, v45);
            v19 = 0;
            goto LABEL_32;
          }
          v19 = (unsigned __int64)sub_4037B0(src) ^ 1;
        }
      }
      else
      {
        if ( !(v15 | v16) != v15 )
        {
          if ( byte_617481 )
            v24 = __xstat(1, *v14, &stat_buf) != 0;
          else
            v24 = __lxstat(1, *v14, &stat_buf) != 0;
          if ( !v24 )
          {
LABEL_41:
            v25 = v44;
            if ( (stat_buf.st_mode & 0xB000) != 0x2000 )
              v25 = src;
            v19 = (unsigned __int64)sub_4037B0(v25) ^ 1;
            goto LABEL_32;
          }
          LODWORD(v36) = sub_408CC0(4LL, v20);
          v33 = "cannot stat %s";
          v45 = v36;
          goto LABEL_51;
        }
        if ( !__fxstat(1, 0, &stat_buf) )
          goto LABEL_41;
        v29 = dcgettext(0LL, "cannot stat standard input", 5);
        v30 = __errno_location();
        error(0, *v30, v29);
        v19 = 0;
      }
LABEL_32:
      ++v14;
      v18 &= v19;
      v15 = v17 < (char **)v14;
      v16 = (const char **)v17 == v14;
      if ( (const char **)v17 == v14 )
        return (unsigned __int8)(v18 ^ 1);
    }
  }
  v18 = 1;
  return (unsigned __int8)(v18 ^ 1);
}

int sub_4028CB()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_4028EA()
{
  return 0;
}

int sub_402921()
{
  int result; // eax@4

  if ( !byte_6173C8 )
  {
    while ( qword_6173D0 < (unsigned __int64)(((&unk_616E48 - (_UNKNOWN *)&qword_616E40) >> 3) - 1) )
      (*(&qword_616E40 + ++qword_6173D0))();
    result = sub_4028CB();
    byte_6173C8 = 1;
  }
  return result;
}

int sub_402978()
{
  return sub_4028EA();
}

char *__fastcall sub_402980(__int64 a1, __int64 a2, const char *a3, const char *a4)
{
  const char *v4; // r15@1
  unsigned __int64 v5; // r13@1
  char *v6; // r12@1
  char *v7; // rbx@1
  int v8; // er14@6
  char v9; // bp@6
  char *v10; // rax@6
  char *v11; // r13@8
  const char *v13; // [sp+8h] [bp-40h]@1

  v4 = a3;
  v5 = a1 + a2;
  v6 = (char *)(a1 + 1);
  v7 = (char *)(a1 + 1);
  v13 = a4;
  if ( a1 + 1 < (unsigned __int64)(a1 + a2) )
  {
    while ( 1 )
    {
      v8 = *v7;
      v9 = *v7;
      v10 = strchr("'-+ #0I", v8);
      if ( !v10 )
        break;
      if ( strchr(v4, v8) )
        *v6++ = v9;
      if ( v5 <= (unsigned __int64)++v7 )
        return strcpy(v6, v13);
    }
    if ( (unsigned __int64)v7 < v5 )
    {
      v11 = (char *)(v5 - (_QWORD)v7);
      while ( 1 )
      {
        (v10++)[(_QWORD)v6] = v9;
        if ( v11 == v10 )
          break;
        v9 = v10[(_QWORD)v7];
      }
      v6 = &v6[(_QWORD)v11];
    }
  }
  return strcpy(v6, v13);
}

int __fastcall sub_402A30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@1

  v3 = a3;
  sub_402980(a1, a2, (const char *)&unk_4103A7, (const char *)&unk_4103A4);
  return __printf_chk(1LL, a1, v3);
}

int __fastcall sub_402A70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@1

  v3 = a3;
  sub_402980(a1, a2, "-", "s");
  return __printf_chk(1LL, a1, v3);
}

int __fastcall sub_402AB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@1

  v3 = a3;
  sub_402980(a1, a2, (const char *)&unk_4103AE, (const char *)&unk_4103AB);
  return __printf_chk(1LL, a1, v3);
}

int __fastcall sub_402AF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp@1

  v3 = a3;
  sub_402980(a1, a2, "'-+ 0", (const char *)&unk_4103B2);
  return __printf_chk(1LL, a1, v3);
}

__int64 __fastcall sub_402B30(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx@2
  void *v8; // r8@7
  char *v9; // rdx@17
  char *v10; // rax@34

  switch ( a3 )
  {
    case 83:
      v6 = *(_QWORD *)(a6 + 72);
      if ( v6 )
        goto LABEL_4;
      goto LABEL_3;
    case 115:
LABEL_3:
      v6 = *(_QWORD *)(a6 + 8);
      goto LABEL_4;
    case 116:
      sub_402A30(a1, a2, *(_QWORD *)a6);
      return 0LL;
    case 84:
      v8 = *(void **)a6;
      if ( *(_QWORD *)a6 == 684539205LL )
      {
        v9 = (char *)&unk_41044A;
      }
      else if ( *(_QWORD *)a6 <= 684539205LL )
      {
        if ( v8 == (void *)44533 )
        {
          v9 = "adfs";
        }
        else if ( (signed __int64)v8 <= 44533 )
        {
          if ( v8 == (void *)16964 )
          {
            v9 = "squashfs" + 5;
          }
          else if ( (signed __int64)v8 > 16964 )
          {
            if ( v8 == (void *)24053 )
            {
              v9 = "exofs";
            }
            else if ( (signed __int64)v8 <= 24053 )
            {
              if ( v8 == (void *)19780 )
              {
                v9 = "msdos";
              }
              else if ( (signed __int64)v8 <= 19780 )
              {
                v9 = "hfs+";
                if ( v8 != (void *)18475 )
                {
                  v9 = "hfsx";
                  if ( v8 != (void *)18520 )
                    goto LABEL_20;
                }
              }
              else
              {
                v9 = "smb";
                if ( v8 != (void *)20859 )
                {
                  v9 = "novell";
                  if ( v8 != (void *)22092 )
                  {
                    v9 = "minix3";
                    if ( v8 != (void *)19802 )
                      goto LABEL_20;
                  }
                }
              }
            }
            else if ( v8 == (void *)38496 )
            {
              v9 = "isofs";
            }
            else if ( (signed __int64)v8 > 38496 )
            {
              v9 = "openprom";
              if ( v8 != (void *)40865 )
              {
                v9 = "usbdevfs";
                if ( v8 != (void *)40866 )
                {
                  v9 = "proc";
                  if ( v8 != (void *)40864 )
                    goto LABEL_20;
                }
              }
            }
            else
            {
              v9 = "romfs";
              if ( v8 != (void *)29301 )
              {
                v9 = "jffs2";
                if ( v8 != (void *)29366 )
                {
                  v9 = "nfs";
                  if ( v8 != (void *)26985 )
                    goto LABEL_20;
                }
              }
            }
          }
          else if ( v8 == (void *)5007 )
          {
            v9 = "minix (30 char.)";
          }
          else if ( (signed __int64)v8 <= 5007 )
          {
            if ( v8 == (void *)1984 )
            {
              v9 = "jffs";
            }
            else if ( (signed __int64)v8 <= 1984 )
            {
              v9 = "qnx4";
              if ( v8 != (void *)47 )
              {
                v9 = "autofs";
                if ( v8 != (void *)391 )
                  goto LABEL_20;
              }
            }
            else
            {
              v9 = "ext";
              if ( v8 != (void *)4989 )
              {
                v9 = "minix";
                if ( v8 != (void *)4991 )
                {
                  v9 = "usbdevfs" + 3;
                  if ( v8 != (void *)4979 )
                    goto LABEL_20;
                }
              }
            }
          }
          else if ( v8 == (void *)13364 )
          {
            v9 = "nilfs";
          }
          else if ( (signed __int64)v8 > 13364 )
          {
            v9 = "isofs";
            if ( v8 != (void *)16388 )
            {
              v9 = "fat";
              if ( v8 != (void *)16390 )
              {
                v9 = "isofs";
                if ( v8 != (void *)0x4000 )
                  goto LABEL_20;
              }
            }
          }
          else
          {
            v9 = "minix v2";
            if ( v8 != (void *)9320 )
            {
              v9 = "minix v2 (30 char.)";
              if ( v8 != (void *)9336 )
              {
                v9 = "devpts";
                if ( v8 != (void *)7377 )
                  goto LABEL_20;
              }
            }
          }
        }
        else if ( v8 == (void *)19920821 )
        {
          v9 = "sysv4";
        }
        else if ( (signed __int64)v8 > 19920821 )
        {
          if ( v8 == (void *)198183888 )
          {
            v9 = "lustre";
          }
          else if ( (signed __int64)v8 <= 198183888 )
          {
            if ( v8 == (void *)19993000 )
            {
              v9 = "ibrix";
            }
            else if ( (signed __int64)v8 <= 19993000 )
            {
              v9 = "sysv2";
              if ( v8 != (void *)19920822 )
              {
                v9 = "coh";
                if ( v8 != (void *)19920823 )
                  goto LABEL_20;
              }
            }
            else
            {
              v9 = "anon-inode FS";
              if ( v8 != (void *)151263540 )
              {
                v9 = "futexfs";
                if ( v8 != (void *)195894762 )
                {
                  v9 = "rdt";
                  if ( v8 != (void *)124082209 )
                    goto LABEL_20;
                }
              }
            }
          }
          else if ( v8 == (void *)427819522 )
          {
            v9 = "mqueue";
          }
          else if ( (signed __int64)v8 > 427819522 )
          {
            v9 = "hugetlbfs" + 6;
            if ( v8 != (void *)464386766 )
            {
              v9 = "ubifs";
              if ( v8 != (void *)604313861 )
              {
                v9 = "fhgfs";
                if ( v8 != (void *)428016422 )
                  goto LABEL_20;
              }
            }
          }
          else
          {
            v9 = "balloon-kvm-fs";
            if ( v8 != (void *)325456742 )
            {
              v9 = "udf";
              if ( v8 != (void *)352400198 )
              {
                v9 = "inodefs";
                if ( v8 != (void *)288389204 )
                  goto LABEL_20;
              }
            }
          }
        }
        else if ( v8 == &unk_414A53 )
        {
          v9 = "befs" + 1;
        }
        else if ( (signed __int64)v8 <= (signed __int64)&unk_414A53 )
        {
          if ( v8 == (void *)61267 )
          {
            v9 = "ext2/ext3";
          }
          else if ( (signed __int64)v8 <= 61267 )
          {
            v9 = "affs";
            if ( v8 != (void *)44543 )
            {
              v9 = "ext2";
              if ( v8 != (void *)61265 )
                goto LABEL_20;
            }
          }
          else
          {
            v9 = "aufs" + 1;
            if ( v8 != (void *)72020 )
            {
              v9 = "cgroupfs";
              if ( v8 != (void *)2613483 )
              {
                v9 = "ecryptfs";
                if ( v8 != (void *)61791 )
                  goto LABEL_20;
              }
            }
          }
        }
        else if ( v8 == (void *)16914839 )
        {
          v9 = "v9fs";
        }
        else if ( (signed __int64)v8 > 16914839 )
        {
          v9 = "xia";
          if ( v8 != (void *)19911021 )
          {
            v9 = "xenix";
            if ( v8 != (void *)19920820 )
            {
              v9 = "gfs/gfs2";
              if ( v8 != (void *)18225520 )
                goto LABEL_20;
            }
          }
        }
        else
        {
          v9 = "ceph";
          if ( v8 != (void *)12805120 )
          {
            v9 = "tmpfs";
            if ( v8 != (void *)16914836 )
            {
              v9 = "hostfs";
              if ( v8 != (void *)12648430 )
                goto LABEL_20;
            }
          }
        }
      }
      else if ( v8 == (void *)1702057283 )
      {
        v9 = "fusectl";
      }
      else if ( (signed __int64)v8 <= 1702057283 )
      {
        if ( v8 == (void *)1397703499 )
        {
          v9 = "sockfs";
        }
        else if ( (signed __int64)v8 > 1397703499 )
        {
          if ( v8 == (void *)1634035564 )
          {
            v9 = "pstorefs";
          }
          else if ( (signed __int64)v8 <= 1634035564 )
          {
            if ( v8 == (void *)1479104553 )
            {
              v9 = "zsmallocfs";
            }
            else if ( (signed __int64)v8 <= 1479104553 )
            {
              v9 = "aufs" + 1;
              if ( v8 != (void *)1410924800 )
              {
                v9 = "vzfs";
                if ( v8 != (void *)1448756819 )
                  goto LABEL_20;
              }
            }
            else
            {
              v9 = "aafs";
              if ( v8 != (void *)1513908720 )
              {
                v9 = "acfs";
                if ( v8 != (void *)1633904243 )
                {
                  v9 = "daxfs" + 2;
                  if ( v8 != (void *)1481003842 )
                    goto LABEL_20;
                }
              }
            }
          }
          else if ( v8 == (void *)1650812274 )
          {
            v9 = "sysfs";
          }
          else if ( (signed __int64)v8 > 1650812274 )
          {
            v9 = "debugfs";
            if ( v8 != (void *)1684170528 )
            {
              v9 = "daxfs";
              if ( v8 != (void *)1684300152 )
              {
                v9 = "cgroup2fs";
                if ( v8 != (void *)1667723888 )
                  goto LABEL_20;
              }
            }
          }
          else
          {
            v9 = "usbdevfs" + 2;
            if ( v8 != (void *)1650746742 )
            {
              v9 = "configfs";
              if ( v8 != (void *)1650812272 )
              {
                v9 = "aufs";
                if ( v8 != (void *)1635083891 )
                  goto LABEL_20;
              }
            }
          }
        }
        else if ( v8 == (void *)1161678120 )
        {
          v9 = "cramfs-wend";
        }
        else if ( (signed __int64)v8 <= 1161678120 )
        {
          if ( v8 == (void *)827541066 )
          {
            v9 = "jfs";
          }
          else if ( (signed __int64)v8 <= 827541066 )
          {
            v9 = "inotifyfs";
            if ( v8 != (void *)732765674 )
            {
              v9 = "zfs";
              if ( v8 != (void *)801189825 )
                goto LABEL_20;
            }
          }
          else
          {
            v9 = "binfmt_misc";
            if ( v8 != (void *)1112100429 )
            {
              v9 = "smackfs";
              if ( v8 != (void *)1128357203 )
              {
                v9 = "befs";
                if ( v8 != (void *)1111905073 )
                  goto LABEL_20;
              }
            }
          }
        }
        else if ( v8 == (void *)1397109069 )
        {
          v9 = "m1fs";
        }
        else if ( (signed __int64)v8 > 1397109069 )
        {
          v9 = "wslfs";
          if ( v8 != (void *)1397114950 )
          {
            v9 = "ntfs";
            if ( v8 != (void *)1397118030 )
            {
              v9 = "afs";
              if ( v8 != (void *)1397113167 )
                goto LABEL_20;
            }
          }
        }
        else
        {
          v9 = "pipefs";
          if ( v8 != (void *)1346981957 )
          {
            v9 = "reiserfs";
            if ( v8 != (void *)1382369651 )
            {
              v9 = "gpfs";
              if ( v8 != (void *)1196443219 )
                goto LABEL_20;
            }
          }
        }
      }
      else if ( v8 == (void *)2240043254 )
      {
        v9 = "ramfs";
      }
      else if ( (signed __int64)v8 <= 2240043254LL )
      {
        if ( v8 == (void *)1935894131 )
        {
          v9 = "securityfs";
        }
        else if ( (signed __int64)v8 <= 1935894131 )
        {
          if ( v8 == (void *)1746473250 )
          {
            v9 = "qnx6";
          }
          else if ( (signed __int64)v8 <= 1746473250 )
          {
            v9 = "fuseblk";
            if ( v8 != (void *)1702057286 )
            {
              v9 = (char *)&unk_4105FC;
              if ( v8 != (void *)1733912937 )
                goto LABEL_20;
            }
          }
          else
          {
            v9 = "nfsd";
            if ( v8 != (void *)1852207972 )
            {
              v9 = "nsfs";
              if ( v8 != (void *)1853056627 )
              {
                v9 = "k-afs";
                if ( v8 != (void *)1799439955 )
                  goto LABEL_20;
              }
            }
          }
        }
        else if ( v8 == (void *)1952539503 )
        {
          v9 = "ocfs2";
        }
        else if ( (signed __int64)v8 > 1952539503 )
        {
          v9 = "overlayfs";
          if ( v8 != (void *)2035054128 )
          {
            v9 = "prl_fs";
            if ( v8 != (void *)2088527475 )
            {
              v9 = "tracefs";
              if ( v8 != (void *)1953653091 )
                goto LABEL_20;
            }
          }
        }
        else
        {
          v9 = "btrfs_test";
          if ( v8 != (void *)1936880249 )
          {
            v9 = "coda";
            if ( v8 != (void *)1937076805 )
            {
              v9 = "squashfs";
              if ( v8 != (void *)1936814952 )
                goto LABEL_20;
            }
          }
        }
      }
      else if ( v8 == (void *)3380511080 )
      {
        v9 = "logfs";
      }
      else if ( (signed __int64)v8 <= 3380511080LL )
      {
        if ( v8 == (void *)2866260714 )
        {
          v9 = "panfs";
        }
        else if ( (signed __int64)v8 > 2866260714LL )
        {
          v9 = "vmhgfs";
          if ( v8 != (void *)3133910204 )
          {
            v9 = "snfs";
            if ( v8 != (void *)3203391149 )
            {
              v9 = "xenfs";
              if ( v8 != (void *)2881100148 )
                goto LABEL_20;
            }
          }
        }
        else
        {
          v9 = "hugetlbfs";
          if ( v8 != (void *)2508478710 )
          {
            v9 = "vxfs";
            if ( v8 != (void *)2768370933 )
            {
              v9 = "btrfs";
              if ( v8 != (void *)2435016766 )
                goto LABEL_20;
            }
          }
        }
      }
      else if ( v8 == (void *)4185718668 )
      {
        v9 = "selinux";
      }
      else if ( (signed __int64)v8 > 4185718668LL )
      {
        v9 = "smb2";
        if ( v8 != (void *)4266872130 )
        {
          v9 = "cifs";
          if ( v8 != (void *)4283649346 )
          {
            v9 = "hpfs";
            if ( v8 != (void *)4187351113 )
              goto LABEL_20;
          }
        }
      }
      else
      {
        v9 = "efivarfs";
        if ( v8 != (void *)3730735588 )
        {
          v9 = "f2fs";
          if ( v8 != (void *)4076150800 )
          {
            v9 = "bpf_fs";
            if ( v8 != (void *)3405662737 )
            {
LABEL_20:
              __sprintf_chk(&unk_617450, 1LL, 29LL, "UNKNOWN (0x%lx)");
              v9 = (char *)&unk_617450;
              goto LABEL_21;
            }
          }
        }
      }
LABEL_21:
      sub_402A70(a1, a2, (__int64)v9);
      return 0LL;
    case 97:
      sub_402AF0(a1, a2, *(_QWORD *)(a6 + 32));
      return 0LL;
    case 98:
      sub_402AF0(a1, a2, *(_QWORD *)(a6 + 16));
      return 0LL;
    case 102:
      sub_402AF0(a1, a2, *(_QWORD *)(a6 + 24));
      return 0LL;
    case 105:
      sub_402A30(a1, a2, *(_DWORD *)(a6 + 60) | ((unsigned __int64)*(_DWORD *)(a6 + 56) << 32));
      return 0LL;
    case 108:
      sub_402AB0(a1, a2, *(_QWORD *)(a6 + 64));
      return 0LL;
    case 110:
      sub_402A70(a1, a2, a5);
      return 0LL;
    case 99:
      v6 = *(_QWORD *)(a6 + 40);
LABEL_4:
      sub_402AB0(a1, a2, v6);
      return 0LL;
    case 100:
      sub_402AF0(a1, a2, *(_QWORD *)(a6 + 48));
      return 0LL;
    default:
      v10 = stdout->_IO_write_ptr;
      if ( v10 >= stdout->_IO_write_end )
      {
        __overflow(stdout, 63);
      }
      else
      {
        stdout->_IO_write_ptr = v10 + 1;
        *v10 = 63;
      }
      return 0LL;
  }
}

void *__fastcall sub_4037B0(void *src, unsigned int a2, __int64 a3, int (__fastcall *a4)(void *, size_t, _QWORD, _QWORD, __int64, __int64), __int64 a5)
{
  void *v5; // r14@1
  size_t v6; // rax@1
  void *v7; // rax@1
  int v8; // esi@1
  void *v9; // rbx@1
  char *v10; // rax@3
  signed __int64 v11; // rbp@4
  signed __int64 v12; // r12@6
  char v13; // bp@9
  char *v14; // rax@12
  char *v15; // rax@13
  _BYTE *v16; // rbp@14
  void *result; // rax@15
  size_t v18; // rax@16
  char v19; // r15@16
  size_t v20; // r13@18
  signed __int64 v21; // r12@18
  char *v22; // rax@23
  signed int v23; // er13@25
  const unsigned __int16 **v24; // rax@26
  __int64 v25; // rcx@26
  const unsigned __int16 *v26; // rdx@26
  char v27; // al@26
  char *v28; // rax@28
  char *v29; // rax@29
  int v30; // er10@31
  char *v31; // rax@34
  unsigned __int8 v32; // al@39
  char v33; // si@39
  char v34; // cl@39
  bool v35; // cf@39
  bool v36; // zf@39
  char v37; // al@39
  __int64 v38; // rsi@41
  char v39; // al@42
  char v40; // dl@43
  char *v41; // rdx@45
  char v42; // si@58
  __int64 v43; // rax@66
  __int64 v44; // rbx@66
  char *v45; // rax@66
  __int64 v46; // rdi@66
  unsigned int v47; // ebx@68
  __int64 v48; // rax@68
  char *v49; // rax@67
  __int64 v50; // [sp+0h] [bp-D0h]@66
  __int64 v51; // [sp+8h] [bp-C8h]@66
  char v52; // [sp+10h] [bp-C0h]@70
  char v53; // [sp+30h] [bp-A0h]@68
  __int64 v54; // [sp+70h] [bp-60h]@66
  unsigned __int8 v55; // [sp+7Bh] [bp-55h]@1
  unsigned int v56; // [sp+7Ch] [bp-54h]@1
  __int64 v57; // [sp+80h] [bp-50h]@1
  int (__fastcall *v58)(void *, size_t, _QWORD, _QWORD, __int64, __int64); // [sp+88h] [bp-48h]@1
  __int64 v59; // [sp+90h] [bp-40h]@1

  v5 = src;
  v56 = a2;
  v57 = a3;
  v58 = a4;
  v59 = a5;
  v6 = strlen((const char *)src);
  LODWORD(v7) = sub_409560(v6 + 3);
  v8 = *(_BYTE *)src;
  v55 = 0;
  v9 = v7;
  if ( !(_BYTE)v8 )
  {
LABEL_15:
    free(v9);
    fputs_unlocked(off_617310, stdout);
    return (void *)v55;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = (signed __int64)v5 + 1;
      if ( (_BYTE)v8 == 37 )
        break;
      if ( (_BYTE)v8 != 92 )
      {
        v10 = stdout->_IO_write_ptr;
        if ( v10 >= stdout->_IO_write_end )
        {
          __overflow(stdout, v8);
          v11 = (signed __int64)v5;
          v5 = (char *)v5 + 1;
        }
        else
        {
          v11 = (signed __int64)v5;
          v5 = (char *)v5 + 1;
          stdout->_IO_write_ptr = v10 + 1;
          *v10 = v8;
        }
        goto LABEL_5;
      }
      if ( byte_617480 )
      {
        v13 = *((_BYTE *)v5 + 1);
        if ( (unsigned __int8)(v13 - 48) <= 7u )
        {
          v30 = v13 - 48;
          if ( (unsigned __int8)(*((_BYTE *)v5 + 2) - 48) > 7u )
          {
            v5 = (char *)v5 + 2;
          }
          else
          {
            v30 = *((_BYTE *)v5 + 2) + 8 * v30 - 48;
            if ( (unsigned __int8)(*((_BYTE *)v5 + 3) - 48) > 7u )
            {
              v5 = (char *)v5 + 3;
            }
            else
            {
              v30 = *((_BYTE *)v5 + 3) + 8 * v30 - 48;
              v5 = (char *)v5 + 4;
            }
          }
          v31 = stdout->_IO_write_ptr;
          if ( v31 >= stdout->_IO_write_end )
          {
            __overflow(stdout, (unsigned __int8)v30);
          }
          else
          {
            stdout->_IO_write_ptr = v31 + 1;
            *v31 = v30;
          }
          v11 = (signed __int64)v5 - 1;
          goto LABEL_5;
        }
        if ( v13 == 120 )
        {
          v24 = __ctype_b_loc();
          v25 = *((_BYTE *)v5 + 2);
          v26 = *v24;
          v27 = *((_BYTE *)v5 + 2);
          if ( HIBYTE(v26[v25]) & 0x10 )
          {
            if ( (unsigned __int8)(v27 - 97) <= 5u )
            {
              v37 = v25 - 87;
            }
            else
            {
              v32 = v27 - 65;
              v33 = v25 - 55;
              v34 = v25 - 48;
              v35 = v32 < 5u;
              v36 = v32 == 5;
              v37 = v33;
              if ( !v35 && !v36 )
                v37 = v34;
            }
            v38 = *((_BYTE *)v5 + 3);
            v11 = (signed __int64)v5 + 2;
            if ( HIBYTE(v26[v38]) & 0x10 )
            {
              v11 = (signed __int64)v5 + 3;
              v39 = 16 * v37;
              if ( (unsigned __int8)(v38 - 97) > 5u )
              {
                v42 = v38 - 55;
                v40 = *((_BYTE *)v5 + 3) - 48;
                if ( (unsigned __int8)(*((_BYTE *)v5 + 3) - 65) <= 5u )
                  v40 = v42;
              }
              else
              {
                v40 = v38 - 87;
              }
              v37 = v40 + v39;
            }
            v5 = (void *)(v11 + 1);
            v41 = stdout->_IO_write_ptr;
            if ( v41 >= stdout->_IO_write_end )
            {
              __overflow(stdout, (unsigned __int8)v37);
            }
            else
            {
              stdout->_IO_write_ptr = v41 + 1;
              *v41 = v37;
            }
            goto LABEL_5;
          }
          v23 = 120;
LABEL_28:
          v28 = dcgettext(0LL, "warning: unrecognized escape '\\%c'", 5);
          error(0, 0, v28, (unsigned int)v23);
          goto LABEL_29;
        }
        if ( v13 )
        {
          v23 = v13;
          switch ( v13 )
          {
            default:
              goto LABEL_28;
            case 34:
            case 92:
              break;
            case 97:
              LOBYTE(v23) = 7;
              v13 = 7;
              break;
            case 98:
              LOBYTE(v23) = 8;
              v13 = 8;
              break;
            case 101:
              LOBYTE(v23) = 27;
              v13 = 27;
              break;
            case 102:
              LOBYTE(v23) = 12;
              v13 = 12;
              break;
            case 110:
              LOBYTE(v23) = 10;
              v13 = 10;
              break;
            case 114:
              LOBYTE(v23) = 13;
              v13 = 13;
              break;
            case 116:
              LOBYTE(v23) = 9;
              v13 = 9;
              break;
            case 118:
              LOBYTE(v23) = 11;
              v13 = 11;
              break;
          }
LABEL_29:
          v5 = (char *)v5 + 2;
          v29 = stdout->_IO_write_ptr;
          if ( v29 >= stdout->_IO_write_end )
          {
            v11 = v12;
            __overflow(stdout, (unsigned __int8)v23);
          }
          else
          {
            stdout->_IO_write_ptr = v29 + 1;
            *v29 = v13;
            v11 = v12;
          }
          goto LABEL_5;
        }
        v14 = dcgettext(0LL, "warning: backslash at end of format", 5);
        error(0, 0, v14);
      }
      v15 = stdout->_IO_write_ptr;
      if ( v15 >= stdout->_IO_write_end )
      {
        v11 = (signed __int64)v5;
        v5 = (char *)v5 + 1;
        __overflow(stdout, 92);
        goto LABEL_5;
      }
      v16 = v5;
      v5 = (char *)v5 + 1;
      stdout->_IO_write_ptr = v15 + 1;
      *v15 = 92;
      v8 = v16[1];
      if ( !(_BYTE)v8 )
        goto LABEL_15;
    }
    v18 = strspn((const char *)v5 + 1, "'-+ #0I");
    v11 = (signed __int64)v5 + v18 + strspn((const char *)v5 + v18 + 1, "0123456789") + 1;
    v19 = *(_BYTE *)v11;
    if ( *(_BYTE *)v11 == 46 )
    {
      v11 += strspn((const char *)(v11 + 1), "0123456789") + 1;
      v19 = *(_BYTE *)v11;
    }
    v20 = v11 - v12 + 1;
    v21 = v11 - v12;
    memcpy(v9, v5, v20);
    if ( !v19 )
      break;
    if ( v19 == 37 )
      goto LABEL_22;
    v5 = (void *)(v11 + 1);
    v55 |= v58(v9, v20, (unsigned int)v19, v56, v57, v59);
LABEL_5:
    v8 = *(_BYTE *)(v11 + 1);
    if ( !(_BYTE)v8 )
      goto LABEL_15;
  }
  --v11;
LABEL_22:
  if ( !v21 )
  {
    v5 = (void *)(v11 + 1);
    v22 = stdout->_IO_write_ptr;
    if ( v22 >= stdout->_IO_write_end )
    {
      __overflow(stdout, 37);
    }
    else
    {
      stdout->_IO_write_ptr = v22 + 1;
      *v22 = 37;
    }
    goto LABEL_5;
  }
  *((_BYTE *)v9 + v20) = v19;
  *((_BYTE *)v9 + v21 + 2) = 0;
  LODWORD(v43) = sub_408F10(v9);
  v44 = v43;
  v45 = dcgettext(0LL, "%s: invalid directive", 5);
  error(1, 0, v45, v44);
  v54 = v44;
  v50 = 1LL;
  v46 = qword_617420;
  v51 = 0LL;
  if ( !qword_617420 )
  {
    v49 = getenv("TZ");
    v46 = sub_40C170(v49);
    qword_617420 = v46;
  }
  v47 = v51;
  LODWORD(v48) = sub_40C450(v46, &v50, &v53);
  if ( v48 )
  {
    sub_4072D0(&unk_6173E0, 61LL, "%Y-%m-%d %H:%M:%S.%N %z", &v53, qword_617420, v47);
    result = &unk_6173E0;
  }
  else
  {
    sub_4059C0(v50, &v52);
    __sprintf_chk(&unk_6173E0, 1LL, 61LL, "%s.%09d");
    result = &unk_6173E0;
  }
  return result;
}

const char *__fastcall sub_403D70(char *s2)
{
  __int64 v1; // rbx@3
  const char *v2; // rbp@7
  const char *result; // rax@12
  __int64 v4; // rax@15
  char *v5; // rbx@16
  int *v6; // rax@16
  __int64 v7; // [sp+0h] [bp-138h]@2
  __int64 v8; // [sp+8h] [bp-130h]@10
  struct stat stat_buf; // [sp+90h] [bp-A8h]@9

  if ( !byte_617430 )
  {
    LODWORD(v4) = sub_40B0C0(0LL);
    qword_617428 = v4;
    if ( !v4 )
    {
      v5 = dcgettext(0LL, "cannot read table of mounted file systems", 5);
      v6 = __errno_location();
      error(0, *v6, "%s", v5);
    }
    byte_617430 = 1;
  }
  if ( !__xstat(1, s2, (struct stat *)&v7) && (v1 = qword_617428) != 0 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v1 + 40) & 1 )
      {
        v2 = *(const char **)v1;
        if ( **(_BYTE **)v1 == 47
          && !strcmp(*(const char **)(v1 + 8), s2)
          && !__xstat(1, v2, &stat_buf)
          && v8 == stat_buf.st_ino
          && v7 == stat_buf.st_dev )
        {
          break;
        }
      }
      v1 = *(_QWORD *)(v1 + 48);
      if ( !v1 )
        goto LABEL_13;
    }
    result = *(const char **)v1;
  }
  else
  {
LABEL_13:
    result = 0LL;
  }
  return result;
}

int __fastcall sub_403E80(char a1, __int64 a2, char a3)
{
  int result; // eax@3
  char *v4; // rax@4
  char v5; // bl@7
  char *v6; // rax@7
  void *v7; // rax@7
  const char *v8; // rsi@7
  void *v9; // r12@7
  void *v10; // rbp@9
  void *v11; // rbx@9

  if ( a1 )
  {
    if ( (_BYTE)a2 )
    {
      result = sub_409790("%n %i %l %t %s %S %b %f %a %c %d\n", a2);
    }
    else
    {
      v4 = dcgettext(
             0LL,
             "  File: \"%n\"\n"
             "    ID: %-8i Namelen: %-7l Type: %T\n"
             "Block size: %-10s Fundamental block size: %S\n"
             "Blocks: Total: %-10b Free: %-10f Available: %a\n"
             "Inodes: Total: %-10c Free: %d\n",
             5);
      result = sub_409790(
                 v4,
                 "  File: \"%n\"\n"
                 "    ID: %-8i Namelen: %-7l Type: %T\n"
                 "Block size: %-10s Fundamental block size: %S\n"
                 "Blocks: Total: %-10b Free: %-10f Available: %a\n"
                 "Inodes: Total: %-10c Free: %d\n");
    }
  }
  else if ( (_BYTE)a2 )
  {
    result = sub_409790("%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n", a2);
  }
  else
  {
    v5 = a3;
    v6 = dcgettext(0LL, "  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\n", 5);
    LODWORD(v7) = sub_409790(v6, "  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\n");
    v8 = "Device: %Dh/%dd\tInode: %-10i  Links: %-5h Device type: %t,%T\n";
    v9 = v7;
    if ( !v5 )
      v8 = "Device: %Dh/%dd\tInode: %-10i  Links: %h\n";
    dcgettext(0LL, v8, 5);
    v10 = (void *)sub_409820((unsigned __int64)"%s%s");
    free(v9);
    dcgettext(0LL, "Access: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\n", 5);
    v11 = (void *)sub_409820((unsigned __int64)"%s%s");
    free(v10);
    dcgettext(0LL, "Access: %x\nModify: %y\nChange: %z\n Birth: %w\n", 5);
    LODWORD(v10) = sub_409820((unsigned __int64)"%s%s");
    free(v11);
    result = (signed int)v10;
  }
  return result;
}

int __fastcall sub_403F90(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14@1
  __int64 v5; // r13@1
  __int64 v6; // r12@1
  __int64 v7; // rbp@1
  __int64 v8; // rax@1
  const char *v9; // r15@2
  __int64 v10; // rcx@2
  signed int v11; // ebx@3
  __int64 v12; // rax@6
  const char *v13; // r15@9
  signed int v14; // eax@10
  const char *v15; // rdx@13
  char v16; // si@13
  __int64 v17; // rax@18
  signed int v18; // esi@24
  signed int v19; // ecx@24
  signed __int64 v20; // rsi@26
  __int128 v21; // tt@26
  __int64 v22; // r15@26
  int result; // eax@29
  signed int v24; // ecx@31
  int v25; // ebx@33
  __int128 v26; // tt@36
  __int64 v27; // rdx@37
  __int64 v28; // [sp+8h] [bp-50h]@1
  __int64 v29; // [sp+10h] [bp-48h]@18
  __int64 v30; // [sp+18h] [bp-40h]@6

  v4 = (__int64)a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v28 = a3;
  LODWORD(v8) = sub_40AED0(a1, 46LL, a2);
  if ( v8 )
  {
    v9 = (const char *)v8;
    a1[a2] = 0;
    v10 = v8 - (_QWORD)a1;
    if ( (unsigned int)(*(_BYTE *)(v8 + 1) - 48) > 9 )
    {
      v11 = 9;
      if ( (unsigned int)(*(_BYTE *)(v8 - 1) - 48) > 9 )
      {
        v5 = v8 - (_QWORD)a1;
        LODWORD(v22) = v7;
        v20 = 1LL;
        v19 = 1;
        goto LABEL_27;
      }
      goto LABEL_4;
    }
    v29 = v8 - (_QWORD)a1;
    v17 = strtol((const char *)(v8 + 1), 0LL, 10);
    v10 = v29;
    if ( v17 > 0x7FFFFFFF )
      LODWORD(v17) = 0x7FFFFFFF;
    v11 = v17;
    if ( (_DWORD)v17 )
    {
      if ( (unsigned int)(*(v9 - 1) - 48) > 9 )
      {
        v5 = v29;
        goto LABEL_23;
      }
LABEL_4:
      *v9 = 0;
      do
        --v9;
      while ( (unsigned int)(*(v9 - 1) - 48) <= 9 );
      v30 = v10;
      v12 = strtol(v9, 0LL, 10);
      if ( v12 > 0x7FFFFFFF )
        LODWORD(v12) = 0x7FFFFFFF;
      v5 = v30;
      if ( (signed int)v12 > 1 )
      {
        v13 = &v9[*v9 == 48];
        v5 = v13 - a1;
        if ( (signed int)v12 > (unsigned __int64)qword_617470 )
        {
          v14 = v12 - qword_617470;
          if ( v14 > 1 && v14 - v11 > 1 )
          {
            if ( a1 >= v13 )
            {
              v5 = 0LL;
LABEL_41:
              v5 += __sprintf_chk(a1, 1LL, -1LL, 4268349LL);
              goto LABEL_23;
            }
            v15 = a1;
            v16 = 0;
            do
            {
              if ( *v15 == 45 )
                v16 = 1;
              else
                *a1++ = *v15;
              ++v15;
            }
            while ( v13 != v15 );
            v5 = (__int64)&a1[-v4];
            if ( !v16 )
              goto LABEL_41;
          }
        }
      }
LABEL_23:
      if ( v11 > 8 )
      {
        LODWORD(v22) = v7;
        v20 = 1LL;
        v19 = 1;
        goto LABEL_27;
      }
      goto LABEL_24;
    }
    v5 = v29;
  }
  else
  {
    v11 = 0;
  }
LABEL_24:
  v18 = v11;
  v19 = 1;
  do
  {
    ++v18;
    v19 *= 10;
  }
  while ( v18 != 9 );
  v20 = v19;
  *(_QWORD *)&v21 = v7;
  *((_QWORD *)&v21 + 1) = (unsigned __int128)v7 >> 64;
  v22 = v21 / v19;
LABEL_27:
  if ( v6 >= 0
    || !v7
    || (*(_QWORD *)&v26 = v7,
        *((_QWORD *)&v26 + 1) = (unsigned __int128)v7 >> 64,
        (v28 = (1000000000 / v19 - (_DWORD)v22 != ((unsigned __int64)(v26 % v20) != 0)) + v6) != 0) )
  {
    result = sub_402AF0(v4, v5, v28);
  }
  else
  {
    sub_402980(v4, v5, "'-+ 0", ".0f");
    result = __printf_chk(1LL, v4, v27);
  }
  if ( v11 )
  {
    v24 = 9;
    if ( v11 <= 9 )
      v24 = v11;
    v25 = v11 - v24;
    __printf_chk(1LL, "%s%.*d%-*.*d", qword_617478);
    result = v25;
  }
  return result;
}

void __fastcall __noreturn sub_404870(int status)
{
  int v1; // ebx@1
  __int64 v2; // rbp@1
  char *v3; // rax@2
  char *v4; // rax@4
  FILE *v5; // rbp@4
  char *v6; // rax@4
  FILE *v7; // rbp@4
  char *v8; // rax@4
  FILE *v9; // rbp@4
  char *v10; // rax@4
  FILE *v11; // rbp@4
  char *v12; // rax@4
  FILE *v13; // rbp@4
  char *v14; // rax@4
  FILE *v15; // rbp@4
  char *v16; // rax@4
  FILE *v17; // rbp@4
  char *v18; // rax@4
  FILE *v19; // rbp@4
  char *v20; // rax@4
  FILE *v21; // rbp@4
  char *v22; // rax@4
  FILE *v23; // rbp@4
  char *v24; // rax@4
  FILE *v25; // rbp@4
  char *v26; // rax@4
  FILE *v27; // rbp@4
  char *v28; // rax@4
  char *v29; // rax@4
  char *v30; // rax@4
  char *v31; // rax@4
  __int64 *v32; // rax@4
  _BYTE *v33; // rdi@5
  bool v34; // cf@5
  bool v35; // zf@5
  const char *v36; // rsi@6
  signed __int64 v37; // rcx@6
  const char *v38; // rbp@10
  char *v39; // rax@11
  char *v40; // rax@11
  char *v41; // rax@13
  char *v42; // rax@14
  char *v43; // rax@15
  char *v44; // rax@15
  char *v45; // rax@17
  char *v46; // rax@19
  const char *v47; // [sp+0h] [bp-88h]@4
  const char *v48; // [sp+8h] [bp-80h]@4
  const char *v49; // [sp+10h] [bp-78h]@4
  const char *v50; // [sp+18h] [bp-70h]@4
  const char *v51; // [sp+20h] [bp-68h]@4
  const char *v52; // [sp+28h] [bp-60h]@4
  const char *v53; // [sp+30h] [bp-58h]@4
  const char *v54; // [sp+38h] [bp-50h]@4
  const char *v55; // [sp+40h] [bp-48h]@4
  const char *v56; // [sp+48h] [bp-40h]@4
  const char *v57; // [sp+50h] [bp-38h]@4
  const char *v58; // [sp+58h] [bp-30h]@4
  __int64 v59; // [sp+60h] [bp-28h]@4
  __int64 v60; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_617498;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [OPTION]... FILE...\n", 5);
  __printf_chk(1LL, v4, v2);
  v5 = stdout;
  v6 = dcgettext(0LL, "Display file or file system status.\n", 5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "  -L, --dereference     follow links\n"
          "  -f, --file-system     display file system status instead of file status\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "  -c  --format=FORMAT   use the specified FORMAT instead of the default;\n"
          "                          output a newline after each use of FORMAT\n"
          "      --printf=FORMAT   like --format, but interpret backslash escapes,\n"
          "                          and do not output a mandatory trailing newline;\n"
          "                          if you want a newline, include \\n in FORMAT\n"
          "  -t, --terse           print the information in terse form\n",
          5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(
          0LL,
          "\n"
          "The valid format sequences for files (without --file-system):\n"
          "\n"
          "  %a   access rights in octal (note '#' and '0' printf flags)\n"
          "  %A   access rights in human readable form\n"
          "  %b   number of blocks allocated (see %B)\n"
          "  %B   the size in bytes of each block reported by %b\n"
          "  %C   SELinux security context string\n",
          5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(
          0LL,
          "  %d   device number in decimal\n"
          "  %D   device number in hex\n"
          "  %f   raw mode in hex\n"
          "  %F   file type\n"
          "  %g   group ID of owner\n"
          "  %G   group name of owner\n",
          5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(
          0LL,
          "  %h   number of hard links\n"
          "  %i   inode number\n"
          "  %m   mount point\n"
          "  %n   file name\n"
          "  %N   quoted file name with dereference if symbolic link\n"
          "  %o   optimal I/O transfer size hint\n"
          "  %s   total size, in bytes\n"
          "  %t   major device type in hex, for character/block device special files\n"
          "  %T   minor device type in hex, for character/block device special files\n",
          5);
  fputs_unlocked(v22, v21);
  v23 = stdout;
  v24 = dcgettext(
          0LL,
          "  %u   user ID of owner\n"
          "  %U   user name of owner\n"
          "  %w   time of file birth, human-readable; - if unknown\n"
          "  %W   time of file birth, seconds since Epoch; 0 if unknown\n"
          "  %x   time of last access, human-readable\n"
          "  %X   time of last access, seconds since Epoch\n"
          "  %y   time of last data modification, human-readable\n"
          "  %Y   time of last data modification, seconds since Epoch\n"
          "  %z   time of last status change, human-readable\n"
          "  %Z   time of last status change, seconds since Epoch\n"
          "\n",
          5);
  fputs_unlocked(v24, v23);
  v25 = stdout;
  v26 = dcgettext(
          0LL,
          "Valid format sequences for file systems:\n"
          "\n"
          "  %a   free blocks available to non-superuser\n"
          "  %b   total data blocks in file system\n"
          "  %c   total file nodes in file system\n"
          "  %d   free file nodes in file system\n"
          "  %f   free blocks in file system\n",
          5);
  fputs_unlocked(v26, v25);
  v27 = stdout;
  v28 = dcgettext(
          0LL,
          "  %i   file system ID in hex\n"
          "  %l   maximum length of filenames\n"
          "  %n   file name\n"
          "  %s   block size (for faster transfers)\n"
          "  %S   fundamental block size (for block counts)\n"
          "  %t   file system type in hex\n"
          "  %T   file system type in human readable form\n",
          5);
  fputs_unlocked(v28, v27);
  v29 = dcgettext(0LL, "\n--terse is equivalent to the following FORMAT:\n    %s", 5);
  __printf_chk(1LL, v29, "%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n");
  v30 = dcgettext(0LL, "--terse --file-system is equivalent to the following FORMAT:\n    %s", 5);
  __printf_chk(1LL, v30, "%n %i %l %t %s %S %b %f %a %c %d\n");
  v31 = dcgettext(
          0LL,
          "\n"
          "NOTE: your shell may have its own version of %s, which usually supersedes\n"
          "the version described here.  Please refer to your shell's documentation\n"
          "for details about the options it supports.\n",
          5);
  __printf_chk(1LL, v31, "stat");
  v47 = "[";
  v32 = (__int64 *)&v47;
  v48 = "test invocation";
  v49 = "coreutils";
  v50 = "Multi-call invocation";
  v51 = "sha224sum";
  v52 = "sha2 utilities";
  v53 = "sha256sum";
  v54 = "sha2 utilities";
  v55 = "sha384sum";
  v56 = "sha2 utilities";
  v57 = "sha512sum";
  v58 = "sha2 utilities";
  v59 = 0LL;
  v60 = 0LL;
  do
  {
    v32 += 2;
    v33 = (_BYTE *)*v32;
    v34 = 0;
    v35 = *v32 == 0;
    if ( !*v32 )
      break;
    v36 = "stat";
    v37 = 5LL;
    do
    {
      if ( !v37 )
        break;
      v34 = (const unsigned __int8)*v36 < *v33;
      v35 = *v36++ == *v33++;
      --v37;
    }
    while ( v35 );
  }
  while ( (!v34 && !v35) != v34 );
  v38 = (const char *)v32[1];
  if ( v38 )
  {
    v39 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v39, &unk_4107C3);
    v40 = setlocale(5, 0LL);
    if ( !v40 || !strncmp(v40, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v43 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v43, &unk_4107C3);
    v44 = setlocale(5, 0LL);
    if ( !v44 || !strncmp(v44, "en_", 3uLL) )
    {
      v38 = "stat";
      v45 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v45, "https://www.gnu.org/software/coreutils/");
      goto LABEL_14;
    }
    v38 = "stat";
  }
  v46 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v46, "stat");
LABEL_13:
  v41 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v41, "https://www.gnu.org/software/coreutils/");
LABEL_14:
  v42 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v42, v38);
LABEL_3:
  exit(v1);
}

__int64 __fastcall sub_404D10(char *path, __int64 a2)
{
  int v2; // er13@1
  int *v3; // r12@1
  const char *v4; // rax@3
  const char *v5; // rbx@3
  size_t v6; // rax@3
  void *v7; // rsp@3
  const char *v8; // r13@3
  __int64 v9; // rax@5
  __int64 v10; // rbx@5
  char *v11; // rax@5
  __int64 v12; // rcx@5
  __int64 v13; // rbx@5
  __m128i v14; // xmm1@9
  __m128i v15; // xmm2@9
  __m128i v16; // xmm3@9
  __m128i v17; // xmm4@9
  __m128i v18; // xmm5@9
  __m128i v19; // xmm6@9
  __m128i v20; // xmm7@9
  __m128i v21; // xmm0@9
  __int64 v22; // rax@11
  const char *v23; // rsi@11
  __int64 v24; // rbx@11
  char *v25; // rax@12
  __int64 v26; // rcx@12
  __int64 v27; // rax@13
  int v28; // er13@14
  __m128i v30; // xmm2@17
  __m128i v31; // xmm3@17
  __m128i v32; // xmm4@17
  __m128i v33; // xmm5@17
  __m128i v34; // xmm6@17
  __m128i v35; // xmm7@17
  __m128i v36; // xmm1@17
  __m128i v37; // xmm2@17
  char *v38; // rsi@17
  __int64 v39; // rax@18
  __int64 v40; // rbx@18
  char *v41; // rax@18
  __int64 v42; // rcx@18
  __int64 v43; // rax@19
  char *v44; // rax@20
  char *v45; // rax@22
  char v46; // [sp+0h] [bp-150h]@1
  char v47; // [sp+Fh] [bp-141h]@3
  struct stat stat_buf; // [sp+10h] [bp-140h]@4
  struct stat v49; // [sp+A0h] [bp-B0h]@6

  v2 = sub_408F30(&v46);
  v3 = __errno_location();
  if ( v2 )
  {
    v13 = 0LL;
    v44 = dcgettext(0LL, "cannot get current directory", 5);
    error(0, *v3, v44);
    return v13;
  }
  if ( (*(_DWORD *)(a2 + 24) & 0xF000) == 0x4000 )
  {
    v30 = _mm_loadu_si128((const __m128i *)(a2 + 16));
    v31 = _mm_loadu_si128((const __m128i *)(a2 + 32));
    v32 = _mm_loadu_si128((const __m128i *)(a2 + 48));
    *(__m128i *)&stat_buf.st_dev = _mm_loadu_si128((const __m128i *)a2);
    v33 = _mm_loadu_si128((const __m128i *)(a2 + 64));
    v34 = _mm_loadu_si128((const __m128i *)(a2 + 80));
    *(__m128i *)&stat_buf.st_nlink = v30;
    v35 = _mm_loadu_si128((const __m128i *)(a2 + 96));
    v36 = _mm_loadu_si128((const __m128i *)(a2 + 112));
    v37 = _mm_loadu_si128((const __m128i *)(a2 + 128));
    *(__m128i *)&stat_buf.st_gid = v31;
    *(__m128i *)&stat_buf.st_size = v32;
    *(__m128i *)&stat_buf.st_blocks = v33;
    *(__m128i *)&stat_buf.st_atim.tv_nsec = v34;
    *(__m128i *)&stat_buf.st_mtim.tv_nsec = v35;
    *(__m128i *)&stat_buf.st_ctim.tv_nsec = v36;
    *(__m128i *)&stat_buf.__unused[1] = v37;
    v38 = path;
    if ( chdir(path) >= 0 )
    {
LABEL_10:
      while ( __xstat(1, "..", &v49) >= 0 )
      {
        if ( v49.st_dev != stat_buf.st_dev || v49.st_ino == stat_buf.st_ino )
        {
          LODWORD(v27) = sub_4097F0(1LL, "..");
          v13 = v27;
          goto LABEL_14;
        }
        if ( chdir("..") < 0 )
        {
          LODWORD(v43) = sub_408CC0(4LL, "..");
          v23 = "cannot change to directory %s";
          v24 = v43;
          goto LABEL_12;
        }
        v14 = _mm_load_si128((const __m128i *)&v49.st_nlink);
        v15 = _mm_load_si128((const __m128i *)&v49.st_gid);
        v16 = _mm_load_si128((const __m128i *)&v49.st_size);
        *(__m128i *)&stat_buf.st_dev = _mm_load_si128((const __m128i *)&v49);
        v17 = _mm_load_si128((const __m128i *)&v49.st_blocks);
        v18 = _mm_load_si128((const __m128i *)&v49.st_atim.tv_nsec);
        v19 = _mm_load_si128((const __m128i *)&v49.st_mtim.tv_nsec);
        v20 = _mm_load_si128((const __m128i *)&v49.st_ctim.tv_nsec);
        *(__m128i *)&stat_buf.st_nlink = v14;
        v21 = _mm_load_si128((const __m128i *)&v49.__unused[1]);
        *(__m128i *)&stat_buf.st_gid = v15;
        *(__m128i *)&stat_buf.st_size = v16;
        *(__m128i *)&stat_buf.st_blocks = v17;
        *(__m128i *)&stat_buf.st_atim.tv_nsec = v18;
        *(__m128i *)&stat_buf.st_mtim.tv_nsec = v19;
        *(__m128i *)&stat_buf.st_ctim.tv_nsec = v20;
        *(__m128i *)&stat_buf.__unused[1] = v21;
      }
      LODWORD(v22) = sub_408CC0(4LL, "..");
      v23 = "cannot stat %s";
      v24 = v22;
LABEL_12:
      v25 = dcgettext(0LL, v23, 5);
      v26 = v24;
      v13 = 0LL;
      error(0, *v3, v25, v26);
      goto LABEL_14;
    }
    goto LABEL_18;
  }
  LODWORD(v4) = sub_4055D0(path);
  v5 = v4;
  v6 = strlen(v4);
  v7 = alloca(v6 + 9);
  v8 = (const char *)memcpy((void *)((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFF0LL), v5, v6 + 1);
  free((void *)v5);
  if ( chdir(v8) < 0 )
  {
    v38 = (char *)v8;
LABEL_18:
    LODWORD(v39) = sub_408CC0(4LL, v38);
    v40 = v39;
    v41 = dcgettext(0LL, "cannot change to directory %s", 5);
    v42 = v40;
    v13 = 0LL;
    error(0, *v3, v41, v42);
    return v13;
  }
  if ( __xstat(1, ".", &stat_buf) >= 0 )
    goto LABEL_10;
  LODWORD(v9) = sub_408CC0(4LL, v8);
  v10 = v9;
  v11 = dcgettext(0LL, "cannot stat current directory (now %s)", 5);
  v12 = v10;
  v13 = 0LL;
  error(0, *v3, v11, v12);
LABEL_14:
  v28 = *v3;
  if ( !sub_408F80(&v46) )
  {
    sub_408FA0(&v46);
    *v3 = v28;
    return v13;
  }
  v45 = dcgettext(0LL, "failed to return to initial working directory", 5);
  error(1, *v3, v45);
  return sub_405090((char *)1);
}

char *__fastcall sub_405090(char *path, unsigned __int64 a2)
{
  size_t v2; // rbx@1
  char *v3; // rax@3
  char *v4; // rbp@3
  ssize_t v5; // r12@4
  char *v7; // rdi@12

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

void __noreturn sub_405180()
{
  sub_404870(1);
}

signed __int64 __fastcall sub_405190(const char *a1, const char **a2, char *a3, size_t a4)
{
  size_t v4; // r13@1
  char *v5; // rbp@1
  size_t v6; // rax@1
  const char *v7; // r14@1
  size_t v8; // r12@2
  signed __int64 v9; // rbx@2
  bool v10; // zf@4
  char v11; // al@4
  signed __int64 v12; // rax@12
  signed __int64 v14; // [sp+0h] [bp-58h]@1
  char v15; // [sp+17h] [bp-41h]@2
  char *v16; // [sp+18h] [bp-40h]@1

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

void __fastcall sub_4052B0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx@2
  __int64 v4; // rax@3
  __int64 v5; // rbp@3
  __int64 v6; // rax@3

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  LODWORD(v4) = sub_408EF0(1LL, a1);
  v5 = v4;
  LODWORD(v6) = sub_408BE0(0LL, 8LL, a2);
  error(0, 0, v3, v6, v5);
}

int __fastcall sub_405330(__int64 *a1, char *a2, size_t a3)
{
  char *v3; // r14@1
  size_t v4; // r13@1
  char *v5; // rbp@1
  FILE *v6; // rbx@1
  char *v7; // rax@1
  FILE *v8; // rsi@1
  __int64 v9; // rbx@1
  __int64 i; // r12@1
  __int64 v11; // rax@3
  __int64 v12; // rax@6
  char *v13; // rax@7

  v3 = 0LL;
  v4 = a3;
  v5 = a2;
  v6 = stderr;
  v7 = dcgettext(0LL, "Valid arguments are:", 5);
  v8 = v6;
  v9 = 0LL;
  fputs_unlocked(v7, v8);
  for ( i = *a1; i; i = a1[v9] )
  {
    while ( !v9 || memcmp(v3, v5, v4) )
    {
      ++v9;
      v3 = v5;
      v5 += v4;
      LODWORD(v11) = sub_408F10(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    LODWORD(v12) = sub_408F10(i);
    __fprintf_chk(stderr, 1LL, &unk_412098, v12);
  }
LABEL_7:
  v13 = stderr->_IO_write_ptr;
  if ( v13 >= stderr->_IO_write_end )
  {
    LODWORD(v13) = __overflow(stderr, 10);
  }
  else
  {
    stderr->_IO_write_ptr = v13 + 1;
    *v13 = 10;
  }
  return (unsigned __int64)v13;
}

__int64 sub_405530()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_40C640(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_617488 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_617490 )
      {
        LODWORD(v5) = sub_408D60(qword_617490, "write error");
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
  result = sub_40C640(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_4055D0(void *a1)
{
  __int64 result; // rax@1

  result = sub_405650(a1);
  if ( !result )
    sub_4097B0();
  return result;
}

signed __int64 __fastcall sub_4055F0(_BYTE *a1)
{
  unsigned __int64 v1; // rbp@1
  __int64 v2; // rax@1
  signed __int64 v3; // rdx@2
  signed __int64 result; // rax@7

  v1 = *a1 == 47;
  LODWORD(v2) = sub_4056B0();
  if ( v2 - (signed __int64)a1 > v1 && (v3 = v2 - (_QWORD)a1 - 1, *(_BYTE *)(v2 - 1) == 47) )
  {
    while ( v1 != v3 && a1[v3 - 1] == 47 )
      --v3;
    result = v3;
  }
  else
  {
    result = v2 - (_QWORD)a1;
  }
  return result;
}

_BYTE *__fastcall sub_405650(void *src)
{
  signed __int64 v1; // rax@1
  size_t v2; // rbx@1
  _BYTE *v3; // rax@1
  _BYTE *v4; // rcx@1
  _BYTE *v5; // rax@2

  v1 = sub_4055F0(src);
  v2 = v1;
  v3 = malloc(v1 + (v1 == 0) + 1);
  v4 = v3;
  if ( v3 )
  {
    v5 = memcpy(v3, src, v2);
    v4 = v5;
    if ( !v2 )
    {
      *v5 = 46;
      v2 = 1LL;
    }
    v5[v2] = 0;
  }
  return v4;
}

_BYTE *__fastcall sub_4056B0(_BYTE *a1)
{
  char v1; // dl@1
  _BYTE *result; // rax@1
  _BYTE *v3; // rcx@4
  char v4; // si@4

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

char *__fastcall sub_405740(__int64 a1)
{
  int v1; // eax@1
  char *result; // rax@8

  v1 = *(_DWORD *)(a1 + 24) & 0xF000;
  switch ( v1 )
  {
    case 32768:
      if ( *(_QWORD *)(a1 + 48) )
        result = dcgettext(0LL, "regular file", 5);
      else
        result = dcgettext(0LL, "regular empty file", 5);
      break;
    case 16384:
      result = dcgettext(0LL, "directory", 5);
      break;
    case 40960:
      result = dcgettext(0LL, "symbolic link", 5);
      break;
    case 24576:
      result = dcgettext(0LL, "block special file", 5);
      break;
    case 8192:
      result = dcgettext(0LL, "character special file", 5);
      break;
    case 4096:
      result = dcgettext(0LL, "fifo", 5);
      break;
    case 49152:
      result = dcgettext(0LL, "socket", 5);
      break;
    default:
      result = dcgettext(0LL, "weird file", 5);
      break;
  }
  return result;
}

signed __int64 __fastcall sub_4059B0(__int64 a1, __int64 a2)
{
  char v2; // al@1
  int v3; // edx@1
  int v4; // eax@9
  unsigned int v5; // eax@10
  int v6; // eax@11
  unsigned int v7; // eax@12
  int v8; // eax@13
  signed __int64 result; // rax@14
  int v10; // edi@1

  v10 = *(_DWORD *)(a1 + 24);
  v2 = 45;
  v3 = v10 & 0xF000;
  if ( v3 != 0x8000 )
  {
    v2 = 100;
    if ( v3 != 0x4000 )
    {
      v2 = 98;
      if ( v3 != 24576 )
      {
        v2 = 99;
        if ( v3 != 0x2000 )
        {
          v2 = 108;
          if ( v3 != 40960 )
          {
            v2 = 112;
            if ( v3 != 4096 )
            {
              v2 = 115;
              if ( v3 != 49152 )
                v2 = 63;
            }
          }
        }
      }
    }
  }
  *(_BYTE *)a2 = v2;
  *(_BYTE *)(a2 + 1) = (v10 & 0x100u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (v10 & 0x80u) < 1 ? 45 : 119;
  v4 = -((v10 & 0x40u) < 1);
  if ( v10 & 0x800 )
    v5 = (v4 & 0xFFFFFFE0) + 115;
  else
    v5 = (v4 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (v10 & 0x20u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (v10 & 0x10u) < 1 ? 45 : 119;
  v6 = -((v10 & 8u) < 1);
  if ( v10 & 0x400 )
    v7 = (v6 & 0xFFFFFFE0) + 115;
  else
    v7 = (v6 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (v10 & 4u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (v10 & 2u) < 1 ? 45 : 119;
  v8 = -((v10 & 1u) < 1);
  if ( v10 & 0x200 )
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  else
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  return result;
}

signed __int64 __fastcall sub_4059B0(__int64 a1, __int64 a2)
{
  char v2; // al@1
  int v3; // edx@1
  int v4; // eax@9
  unsigned int v5; // eax@10
  int v6; // eax@11
  unsigned int v7; // eax@12
  int v8; // eax@13
  signed __int64 result; // rax@14
  int v10; // edi@1

  v10 = *(_DWORD *)(a1 + 24);
  v2 = 45;
  v3 = v10 & 0xF000;
  if ( v3 != 0x8000 )
  {
    v2 = 100;
    if ( v3 != 0x4000 )
    {
      v2 = 98;
      if ( v3 != 24576 )
      {
        v2 = 99;
        if ( v3 != 0x2000 )
        {
          v2 = 108;
          if ( v3 != 40960 )
          {
            v2 = 112;
            if ( v3 != 4096 )
            {
              v2 = 115;
              if ( v3 != 49152 )
                v2 = 63;
            }
          }
        }
      }
    }
  }
  *(_BYTE *)a2 = v2;
  *(_BYTE *)(a2 + 1) = (v10 & 0x100u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (v10 & 0x80u) < 1 ? 45 : 119;
  v4 = -((v10 & 0x40u) < 1);
  if ( v10 & 0x800 )
    v5 = (v4 & 0xFFFFFFE0) + 115;
  else
    v5 = (v4 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (v10 & 0x20u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (v10 & 0x10u) < 1 ? 45 : 119;
  v6 = -((v10 & 8u) < 1);
  if ( v10 & 0x400 )
    v7 = (v6 & 0xFFFFFFE0) + 115;
  else
    v7 = (v6 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (v10 & 4u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (v10 & 2u) < 1 ? 45 : 119;
  v8 = -((v10 & 1u) < 1);
  if ( v10 & 0x200 )
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  else
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  return result;
}

signed __int64 __fastcall sub_4059B0(__int64 a1, __int64 a2)
{
  char v2; // al@1
  int v3; // edx@1
  int v4; // eax@9
  unsigned int v5; // eax@10
  int v6; // eax@11
  unsigned int v7; // eax@12
  int v8; // eax@13
  signed __int64 result; // rax@14
  int v10; // edi@1

  v10 = *(_DWORD *)(a1 + 24);
  v2 = 45;
  v3 = v10 & 0xF000;
  if ( v3 != 0x8000 )
  {
    v2 = 100;
    if ( v3 != 0x4000 )
    {
      v2 = 98;
      if ( v3 != 24576 )
      {
        v2 = 99;
        if ( v3 != 0x2000 )
        {
          v2 = 108;
          if ( v3 != 40960 )
          {
            v2 = 112;
            if ( v3 != 4096 )
            {
              v2 = 115;
              if ( v3 != 49152 )
                v2 = 63;
            }
          }
        }
      }
    }
  }
  *(_BYTE *)a2 = v2;
  *(_BYTE *)(a2 + 1) = (v10 & 0x100u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (v10 & 0x80u) < 1 ? 45 : 119;
  v4 = -((v10 & 0x40u) < 1);
  if ( v10 & 0x800 )
    v5 = (v4 & 0xFFFFFFE0) + 115;
  else
    v5 = (v4 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (v10 & 0x20u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (v10 & 0x10u) < 1 ? 45 : 119;
  v6 = -((v10 & 8u) < 1);
  if ( v10 & 0x400 )
    v7 = (v6 & 0xFFFFFFE0) + 115;
  else
    v7 = (v6 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (v10 & 4u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (v10 & 2u) < 1 ? 45 : 119;
  v8 = -((v10 & 1u) < 1);
  if ( v10 & 0x200 )
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  else
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  return result;
}

signed __int64 __fastcall sub_4059B0(__int64 a1, __int64 a2)
{
  char v2; // al@1
  int v3; // edx@1
  int v4; // eax@9
  unsigned int v5; // eax@10
  int v6; // eax@11
  unsigned int v7; // eax@12
  int v8; // eax@13
  signed __int64 result; // rax@14
  int v10; // edi@1

  v10 = *(_DWORD *)(a1 + 24);
  v2 = 45;
  v3 = v10 & 0xF000;
  if ( v3 != 0x8000 )
  {
    v2 = 100;
    if ( v3 != 0x4000 )
    {
      v2 = 98;
      if ( v3 != 24576 )
      {
        v2 = 99;
        if ( v3 != 0x2000 )
        {
          v2 = 108;
          if ( v3 != 40960 )
          {
            v2 = 112;
            if ( v3 != 4096 )
            {
              v2 = 115;
              if ( v3 != 49152 )
                v2 = 63;
            }
          }
        }
      }
    }
  }
  *(_BYTE *)a2 = v2;
  *(_BYTE *)(a2 + 1) = (v10 & 0x100u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 2) = (v10 & 0x80u) < 1 ? 45 : 119;
  v4 = -((v10 & 0x40u) < 1);
  if ( v10 & 0x800 )
    v5 = (v4 & 0xFFFFFFE0) + 115;
  else
    v5 = (v4 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 3) = v5;
  *(_BYTE *)(a2 + 4) = (v10 & 0x20u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 5) = (v10 & 0x10u) < 1 ? 45 : 119;
  v6 = -((v10 & 8u) < 1);
  if ( v10 & 0x400 )
    v7 = (v6 & 0xFFFFFFE0) + 115;
  else
    v7 = (v6 & 0xFFFFFFB5) + 120;
  *(_BYTE *)(a2 + 6) = v7;
  *(_BYTE *)(a2 + 7) = (v10 & 4u) < 1 ? 45 : 114;
  *(_BYTE *)(a2 + 8) = (v10 & 2u) < 1 ? 45 : 119;
  v8 = -((v10 & 1u) < 1);
  if ( v10 & 0x200 )
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  else
  {
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
    result = 32LL;
    *(_WORD *)(a2 + 10) = 32;
  }
  return result;
}

signed __int64 __fastcall sub_4059C0(signed __int64 a1, __int64 a2)
{
  _BYTE *v2; // rcx@1
  unsigned __int64 v3; // rdx@2
  signed __int64 result; // rax@3
  signed __int64 v5; // rdx@5
  int v6; // eax@5

  v2 = (_BYTE *)(a2 + 20);
  *(_BYTE *)(a2 + 20) = 0;
  if ( a1 < 0 )
  {
    while ( 1 )
    {
      v5 = ((signed __int64)((unsigned __int128)(7378697629483820647LL * a1) >> 64) >> 2) - (a1 >> 63);
      v6 = 10 * v5 + 48 - a1;
      a1 = ((signed __int64)((unsigned __int128)(7378697629483820647LL * a1) >> 64) >> 2) - (a1 >> 63);
      *(v2 - 1) = v6;
      if ( !v5 )
        break;
      --v2;
    }
    *(v2 - 2) = 45;
    result = (signed __int64)(v2 - 2);
  }
  else
  {
    do
    {
      --v2;
      v3 = (unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)(unsigned __int64)a1 >> 64) >> 3;
      *v2 = a1 - 10 * v3 + 48;
      a1 = (unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)(unsigned __int64)a1 >> 64) >> 3;
    }
    while ( v3 );
    result = (signed __int64)v2;
  }
  return result;
}

__int64 __fastcall sub_405A60(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rbx@2
  const __int32_t **v4; // rax@2

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_tolower_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(_BYTE *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __fastcall sub_405AB0(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rbx@2
  const __int32_t **v4; // rax@2

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_toupper_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(_BYTE *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __usercall sub_405B00@<rax>(void *s@<rdi>, char *a2@<rdx>, __int64 a3@<rcx>, __int64 a4@<rsi>, char a5@<r8b>, __int64 a6, int a7)
{
  char *v7; // r15@1
  signed __int64 v8; // rbx@1
  char *v9; // r12@1
  signed int v10; // er11@1
  char v11; // al@5
  __int64 v12; // r14@5
  _BYTE *v13; // r8@11
  char v15; // r11@21
  signed __int64 v16; // r8@21
  signed int i; // er12@21
  signed int v18; // eax@22
  __int64 v19; // rcx@22
  __int64 v20; // r9@22
  bool v21; // zf@22
  bool v22; // sf@22
  unsigned __int8 v23; // of@22
  int v24; // ebp@28
  unsigned int v25; // eax@38
  int v26; // edi@39
  char *v27; // rax@51
  signed __int64 v28; // r8@51
  char v29; // r13@51
  size_t v30; // rax@52
  unsigned __int64 v31; // rcx@53
  unsigned __int64 v32; // rbx@55
  size_t v33; // rdx@61
  char *v34; // rdi@62
  char *v35; // rsi@63
  size_t v36; // rdx@63
  char *v37; // rdi@63
  unsigned __int64 v38; // rcx@65
  char v39; // ST50_1@72
  char *v40; // r13@72
  __m128i v41; // xmm4@72
  __m128i v42; // xmm2@72
  __int64 v43; // rax@72
  signed __int64 v44; // rax@72
  signed __int64 v45; // rsi@72
  signed __int64 v46; // rcx@72
  signed __int64 v47; // rdx@73
  signed __int64 v48; // rax@73
  unsigned int v49; // eax@73
  signed int v50; // er10@76
  char *v51; // rcx@79
  unsigned __int64 v52; // rax@79
  size_t v53; // r9@80
  unsigned __int64 v54; // r9@81
  size_t v55; // rdx@90
  char *v56; // rdi@91
  unsigned __int64 v57; // r10@94
  unsigned __int64 v58; // rax@94
  unsigned __int64 v59; // rsi@96
  size_t v60; // rdx@101
  char *v61; // rdi@102
  unsigned __int64 v62; // ST58_8@103
  int v63; // er10@108
  int v64; // er13@108
  signed int v65; // edi@108
  signed int v66; // er8@108
  int v67; // eax@109
  signed int v68; // er13@112
  int v69; // er13@114
  int v70; // edi@117
  int v71; // esi@117
  int v72; // edi@120
  unsigned int v73; // er8@120
  unsigned __int64 v74; // r13@127
  unsigned __int64 v75; // rax@127
  unsigned __int64 v76; // rsi@129
  char v77; // r11@133
  char v78; // r8@133
  size_t v79; // rdx@134
  char *v80; // rdi@135
  signed int v81; // esi@164
  unsigned __int64 v82; // r13@165
  size_t v83; // rdx@172
  char *v84; // rdi@173
  char *v85; // rcx@178
  signed __int64 v86; // rax@180
  unsigned __int64 v87; // rsi@193
  size_t v88; // rdx@201
  char *v89; // rdi@202
  char *v90; // ST68_8@205
  signed int v91; // ST60_4@205
  _BYTE *v92; // ST58_8@205
  char v93; // ST50_1@205
  size_t v94; // ST40_8@205
  size_t v95; // rdx@214
  char *v96; // rdi@215
  signed int v97; // esi@220
  signed int v98; // edi@226
  int v99; // edx@226
  int v100; // esi@229
  int v101; // edx@229
  signed __int64 v102; // rax@237
  _BYTE *v103; // r9@238
  unsigned __int64 v104; // rcx@238
  unsigned __int64 v105; // rax@239
  size_t v106; // rdx@246
  char *v107; // rdi@247
  unsigned __int64 v108; // rcx@249
  signed __int64 j; // r13@252
  __int64 v110; // rsi@254
  int v111; // eax@257
  int v112; // esi@257
  char v113; // cl@261
  signed int v114; // esi@273
  size_t v115; // rdx@282
  char *v116; // rdi@283
  int v117; // eax@287
  int v118; // eax@288
  char v119; // al@291
  char v120; // cl@298
  unsigned __int64 v121; // r12@299
  char v122; // ST68_1@307
  unsigned __int64 v123; // ST60_8@307
  char v124; // ST50_1@307
  char *v125; // rdi@312
  unsigned __int64 v126; // r8@313
  size_t v127; // rdx@321
  __int64 v128; // r12@326
  char *v129; // rdi@328
  int v130; // ST60_4@328
  signed int v131; // ST58_4@328
  char v132; // ST50_1@328
  int v133; // eax@329
  char *v134; // rdi@333
  char *v135; // rdi@335
  unsigned __int64 v136; // rcx@338
  char *v137; // rdi@344
  unsigned __int64 v138; // ST68_8@344
  char v139; // ST58_1@344
  char *v140; // rdi@347
  signed int v141; // esi@348
  int v142; // edx@348
  int v143; // er10@351
  int v144; // esi@351
  int v145; // edi@353
  int v146; // esi@357
  int v147; // eax@361
  int v148; // eax@361
  int v149; // esi@362
  int v150; // esi@365
  char *v151; // rdi@370
  char *v152; // rdi@371
  char *v153; // rdi@373
  char *v154; // rdi@374
  char *v155; // rdi@375
  __int64 v156; // [sp+0h] [bp-4C8h]@1
  struct tm *tp; // [sp+8h] [bp-4C0h]@1
  char *v158; // [sp+20h] [bp-4A8h]@6
  char v159; // [sp+2Bh] [bp-49Dh]@3
  int v160; // [sp+2Ch] [bp-49Ch]@6
  _BYTE *v161; // [sp+30h] [bp-498h]@52
  char v162; // [sp+30h] [bp-498h]@61
  unsigned __int64 v163; // [sp+30h] [bp-498h]@63
  char v164; // [sp+30h] [bp-498h]@90
  signed int v165; // [sp+30h] [bp-498h]@108
  char v166; // [sp+30h] [bp-498h]@120
  char v167; // [sp+30h] [bp-498h]@189
  char v168; // [sp+30h] [bp-498h]@246
  unsigned __int64 v169; // [sp+30h] [bp-498h]@248
  int v170; // [sp+30h] [bp-498h]@257
  char v171; // [sp+40h] [bp-488h]@52
  _BYTE *v172; // [sp+40h] [bp-488h]@61
  _BYTE *v173; // [sp+40h] [bp-488h]@63
  _BYTE *v174; // [sp+40h] [bp-488h]@90
  char v175; // [sp+40h] [bp-488h]@127
  char v176; // [sp+40h] [bp-488h]@201
  _BYTE *v177; // [sp+40h] [bp-488h]@246
  _BYTE *v178; // [sp+40h] [bp-488h]@248
  char *v179; // [sp+40h] [bp-488h]@321
  int v180; // [sp+48h] [bp-480h]@52
  unsigned __int64 v181; // [sp+48h] [bp-480h]@61
  char *v182; // [sp+48h] [bp-480h]@90
  char v183; // [sp+48h] [bp-480h]@125
  _BYTE *v184; // [sp+48h] [bp-480h]@246
  char v185; // [sp+48h] [bp-480h]@321
  unsigned __int64 v186; // [sp+50h] [bp-478h]@101
  unsigned __int64 v187; // [sp+50h] [bp-478h]@246
  size_t v188; // [sp+58h] [bp-470h]@201
  unsigned __int64 v189; // [sp+58h] [bp-470h]@321
  unsigned __int64 v190; // [sp+60h] [bp-468h]@321
  char format[2]; // [sp+70h] [bp-458h]@51
  char v192; // [sp+72h] [bp-456h]@51
  char v193; // [sp+73h] [bp-455h]@124
  char v194[9]; // [sp+87h] [bp-441h]@72
  char sa[16]; // [sp+90h] [bp-438h]@52
  __m128i v196; // [sp+A0h] [bp-428h]@72
  __m128i v197; // [sp+B0h] [bp-418h]@72
  __int64 v198; // [sp+C0h] [bp-408h]@72

  v7 = (char *)s;
  v8 = (signed __int64)a2;
  v9 = *(char **)(a3 + 48);
  v10 = *(_DWORD *)(a3 + 8);
  v156 = a4;
  tp = (struct tm *)a3;
  if ( !v9 )
    v9 = "";
  v159 = a5;
  if ( v10 <= 12 )
  {
    if ( !v10 )
      v10 = 12;
  }
  else
  {
    v10 -= 12;
  }
  v11 = *a2;
  v12 = 0LL;
  if ( !*a2 )
  {
LABEL_13:
    if ( v7 && v156 )
      *v7 = 0;
    return v12;
  }
  v160 = v10;
  v158 = v9;
  while ( v11 != 37 )
  {
    a2 = (char *)(v156 - v12);
    if ( (unsigned __int64)(v156 - v12) <= 1 )
      return 0LL;
    if ( v7 )
      *v7++ = v11;
    ++v12;
    v13 = (_BYTE *)v8;
LABEL_12:
    v11 = v13[1];
    v8 = (signed __int64)(v13 + 1);
    if ( !v11 )
      goto LABEL_13;
  }
  v15 = v159;
  v16 = 0LL;
LABEL_22:
  for ( i = 0; ; i = v18 )
  {
    v18 = *(_BYTE *)++v8;
    v19 = (unsigned int)v18;
    v20 = (unsigned int)v18;
    v23 = __OFSUB__(*(_BYTE *)v8, 48);
    v21 = *(_BYTE *)v8 == 48;
    v22 = (char)(*(_BYTE *)v8 - 48) < 0;
    if ( *(_BYTE *)v8 != 48 )
      break;
LABEL_26:
    ;
  }
  while ( 1 )
  {
    if ( !((unsigned __int8)(v22 ^ v23) | v21) )
    {
      if ( (_BYTE)v18 == 94 )
      {
        v15 = 1;
        goto LABEL_22;
      }
      if ( (_BYTE)v18 != 95 )
      {
        v24 = -1;
        if ( (unsigned int)(v18 - 48) > 9 )
          goto LABEL_29;
        goto LABEL_37;
      }
      goto LABEL_26;
    }
    if ( (_BYTE)v18 != 35 )
      break;
    v18 = *(_BYTE *)++v8;
    v16 = 1LL;
    v19 = (unsigned int)v18;
    v20 = (unsigned int)v18;
    v23 = __OFSUB__(*(_BYTE *)v8, 48);
    v21 = *(_BYTE *)v8 == 48;
    v22 = (char)(*(_BYTE *)v8 - 48) < 0;
    if ( *(_BYTE *)v8 == 48 )
      goto LABEL_26;
  }
  if ( (_BYTE)v18 == 45 )
    goto LABEL_26;
  v24 = -1;
  if ( (unsigned int)(v18 - 48) > 9 )
    goto LABEL_29;
LABEL_37:
  v24 = 0;
  while ( 1 )
  {
    v25 = *(_BYTE *)(v8 + 1);
    v19 = v25;
    a2 = (char *)(v25 - 48);
    if ( v24 > 214748364 )
      break;
    v26 = *(_BYTE *)v8;
    if ( v24 == 214748364 && (char)v26 > 55 )
      break;
    ++v8;
    v24 = v26 + 10 * v24 - 48;
LABEL_41:
    if ( (unsigned int)a2 > 9 )
    {
      v20 = v25;
      goto LABEL_29;
    }
  }
  if ( (unsigned int)a2 <= 9 )
  {
    v25 = *(_BYTE *)(v8 + 2);
    v24 = 0x7FFFFFFF;
    v8 += 2LL;
    v19 = v25;
    a2 = (char *)(v25 - 48);
    goto LABEL_41;
  }
  v20 = v25;
  ++v8;
  v24 = 0x7FFFFFFF;
LABEL_29:
  if ( (_BYTE)v19 == 69 || (_BYTE)v19 == 79 )
    v19 = *(_BYTE *)(v8++ + 1);
  else
    v20 = 0LL;
  switch ( (_BYTE)v19 )
  {
    case 0x41:
    case 0x42:
    case 0x61:
      if ( (_DWORD)v20 )
        goto LABEL_237;
      if ( (_BYTE)v16 )
        v15 = v16;
      goto LABEL_51;
    case 0x58:
    case 0x63:
    case 0x78:
      if ( (_DWORD)v20 != 79 )
        goto LABEL_69;
      goto LABEL_237;
    case 0x72:
LABEL_69:
      v29 = 0;
      goto LABEL_70;
    case 0x73:
      v39 = v15;
      v40 = v194;
      v41 = _mm_loadu_si128((const __m128i *)&tp->tm_isdst);
      v42 = _mm_loadu_si128((const __m128i *)&tp->tm_mon);
      v43 = (__int64)tp->tm_zone;
      *(__m128i *)sa = _mm_loadu_si128((const __m128i *)tp);
      v196 = v42;
      v197 = v41;
      v198 = v43;
      LODWORD(v44) = sub_40C500(a6, sa, a2, v19, v16, v20);
      v15 = v39;
      v45 = v44;
      v46 = v44;
      do
      {
        v47 = ((signed __int64)((unsigned __int128)(7378697629483820647LL * v46) >> 64) >> 2) - (v46 >> 63);
        v48 = v47;
        LODWORD(v47) = v46 - 10 * v47;
        v46 = v48;
        v49 = 48 - v47;
        a2 = (char *)(unsigned int)(v47 + 48);
        if ( v45 < 0 )
          a2 = (char *)v49;
        *--v40 = (char)a2;
      }
      while ( v46 );
      v50 = 1;
      if ( v24 > 0 )
        v50 = v24;
      if ( v45 >= 0 )
        goto LABEL_79;
      goto LABEL_298;
    case 0x44:
      if ( !(_DWORD)v20 )
        goto LABEL_94;
      goto LABEL_237;
    case 0x46:
      if ( !(_DWORD)v20 )
        goto LABEL_94;
      goto LABEL_237;
    case 0x47:
    case 0x56:
    case 0x67:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v63 = tp->tm_yday;
      v64 = tp->tm_wday;
      v165 = tp->tm_year;
      v65 = v165 + ((v165 >> 31) & 0x190) - 100;
      v66 = v63 - (v63 - v64 + 382) + 7 * ((v63 - v64 + 382) / 7) + 3;
      if ( v66 < 0 )
      {
        v141 = v165 + ((v165 >> 31) & 0x190) - 101;
        v142 = 365;
        if ( !(((_BYTE)v165 + ((v165 >> 31) & 0x90) - 101) & 3) )
        {
          v142 = 366;
          if ( v141 == 100 * (v141 / 100) )
            v142 = 366 - ((unsigned int)(v141 % 400) >= 1);
        }
        v143 = v142 + v63;
        v144 = v143 - v64;
        v69 = -1;
        v66 = v143 - (v144 + 382) + 7 * ((v144 + 382) / 7) + 3;
      }
      else
      {
        v67 = 365;
        if ( !(v65 & 3) )
        {
          v67 = 366;
          if ( v65 == 100 * (v65 / 100) )
            v67 = (v65 == 400 * (v65 / 400)) + 365;
        }
        v68 = v63 - v67 - (v63 - v67 - v64 + 382) + 7 * ((v63 - v67 - v64 + 382) / 7) + 3;
        if ( v68 >= 0 )
          v66 = v68;
        v69 = (v68 >> 31) + 1;
      }
      if ( (_BYTE)v19 == 71 )
      {
        v146 = tp->tm_year;
        v166 = 0;
        v50 = 4;
        v23 = __OFSUB__(v146, -1900 - v69);
        v22 = v146 - (-1900 - v69) < 0;
        v71 = v146 + v69 + 1900;
        LOBYTE(v73) = v22 ^ v23;
        v72 = 0;
        goto LABEL_121;
      }
      if ( (_BYTE)v19 == 103 )
      {
        v50 = 2;
        v70 = (v69 + v165 % 100) % 100;
        v71 = v70;
        if ( v70 < 0 )
        {
          v71 = v70 + 100;
          if ( v165 < -1900 - v69 )
            v71 = -v70;
        }
      }
      else
      {
        v50 = 2;
        v71 = v66 / 7 + 1;
      }
      goto LABEL_120;
    case 0x5A:
      v183 = v16;
      if ( (_BYTE)v16 )
        v15 = 0;
      v175 = v15;
      v74 = strlen(v158);
      LODWORD(v75) = 0;
      if ( v24 >= 0 )
        LODWORD(v75) = v24;
      v75 = (signed int)v75;
      v76 = (signed int)v75;
      if ( v74 >= (signed int)v75 )
        v76 = v74;
      a2 = (char *)(v156 - v12);
      if ( v156 - v12 <= v76 )
        return 0LL;
      if ( v7 )
      {
        v77 = v175;
        v78 = v183;
        if ( v74 < v75 )
        {
          v79 = v24 - v74;
          if ( i == 48 )
          {
            v154 = v7;
            v7 += v79;
            memset(v154, 48, v79);
            v77 = v175;
            v78 = v183;
          }
          else
          {
            v80 = v7;
            v7 += v79;
            memset(v80, 32, v79);
            v78 = v183;
            v77 = v175;
          }
        }
        if ( v78 )
        {
          sub_405A60((__int64)v7, (__int64)v158, v74);
        }
        else if ( v77 )
        {
          sub_405AB0((__int64)v7, (__int64)v158, v74);
        }
        else
        {
          memcpy(v7, v158, v74);
        }
        v7 += v74;
      }
      v12 += v76;
      v13 = (_BYTE *)v8;
      goto LABEL_12;
    case 0x52:
    case 0x54:
LABEL_94:
      v57 = sub_405B00(0LL, a6, a7);
      LODWORD(v58) = 0;
      if ( v24 >= 0 )
        LODWORD(v58) = v24;
      v58 = (signed int)v58;
      v59 = (signed int)v58;
      if ( v57 >= (signed int)v58 )
        v59 = v57;
      if ( v156 - v12 <= v59 )
        return 0LL;
      if ( v7 )
      {
        if ( v57 < v58 )
        {
          v186 = v57;
          v60 = v24 - v57;
          if ( i == 48 )
          {
            v140 = v7;
            v7 += v60;
            memset(v140, 48, v60);
            v57 = v186;
          }
          else
          {
            v61 = v7;
            v7 += v60;
            memset(v61, 32, v60);
            v57 = v186;
          }
        }
        v62 = v57;
        sub_405B00(v7, a6, a7);
        v7 += v62;
      }
      v12 += v59;
      v13 = (_BYTE *)v8;
      goto LABEL_12;
    case 0x48:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 2;
      v71 = tp->tm_hour;
      goto LABEL_120;
    case 0x49:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v71 = v160;
      v50 = 2;
      goto LABEL_120;
    case 0x4D:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 2;
      v71 = tp->tm_min;
      goto LABEL_120;
    case 0x4E:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      if ( v24 == -1 )
      {
        v71 = a7;
        v24 = 9;
        v50 = 9;
      }
      else
      {
        if ( v24 > 8 )
        {
          v71 = a7;
        }
        else
        {
          v71 = a7;
          v145 = v24;
          do
          {
            ++v145;
            v71 /= 10;
          }
          while ( v145 != 9 );
        }
        v50 = v24;
      }
      goto LABEL_120;
    case 0x50:
      v29 = 1;
      goto LABEL_151;
    case 0x6B:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v71 = tp->tm_hour;
      goto LABEL_158;
    case 0x6C:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v71 = v160;
      goto LABEL_158;
    case 0x6D:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v166 = 0;
      v50 = 2;
      v81 = tp->tm_mon;
      LOBYTE(v73) = v81 < -1;
      v71 = v81 + 1;
      v72 = 0;
      goto LABEL_121;
    case 0x6E:
      LODWORD(v82) = 0;
      if ( v24 >= 0 )
        LODWORD(v82) = v24;
      v82 = (signed int)v82;
      if ( !(_DWORD)v82 )
        v82 = 1LL;
      if ( v156 - v12 <= v82 )
        return 0LL;
      if ( v7 )
      {
        if ( v24 > 1 )
        {
          v83 = v24 - 1LL;
          if ( i == 48 )
          {
            v151 = v7;
            v7 += v83;
            memset(v151, 48, v83);
          }
          else
          {
            v84 = v7;
            v7 += v83;
            memset(v84, 32, v83);
          }
        }
        *v7++ = 10;
      }
      goto LABEL_175;
    case 0x71:
      v50 = 1;
      if ( (_DWORD)v20 == 79 )
        goto LABEL_123;
      v166 = 0;
      LOBYTE(v73) = 0;
      v72 = 0;
      v71 = (11 * tp->tm_mon >> 5) + 1;
      goto LABEL_178;
    case 0x74:
      LODWORD(v82) = 0;
      if ( v24 >= 0 )
        LODWORD(v82) = v24;
      v82 = (signed int)v82;
      if ( !(_DWORD)v82 )
        v82 = 1LL;
      if ( v156 - v12 <= v82 )
        return 0LL;
      if ( v7 )
      {
        if ( v24 > 1 )
        {
          v95 = v24 - 1LL;
          if ( i == 48 )
          {
            v152 = v7;
            v7 += v95;
            memset(v152, 48, v95);
          }
          else
          {
            v96 = v7;
            v7 += v95;
            memset(v96, 32, v95);
          }
        }
        *v7++ = 9;
      }
      goto LABEL_175;
    case 0x75:
      v50 = 1;
      v71 = (tp->tm_wday + 6) % 7 + 1;
      goto LABEL_120;
    case 0x59:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_334;
      if ( (_DWORD)v20 == 79 )
        goto LABEL_237;
      v166 = 0;
      v50 = 4;
      v97 = tp->tm_year;
      LOBYTE(v73) = v97 < -1900;
      v71 = v97 + 1900;
      v72 = 0;
      goto LABEL_221;
    case 0x53:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 2;
      v71 = tp->tm_sec;
      goto LABEL_120;
    case 0x55:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v98 = tp->tm_yday - tp->tm_wday + 7;
      v99 = (unsigned __int64)(-1840700269LL * v98) >> 32;
      goto LABEL_227;
    case 0x43:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_334;
      v166 = 0;
      v50 = 2;
      v100 = tp->tm_year / 100 + 19;
      v101 = tp->tm_year % 100;
      LOBYTE(v101) = v100 > 0;
      LOBYTE(v73) = tp->tm_year < -1900;
      v71 = v100 - (v101 & ((unsigned int)(tp->tm_year % 100) >> 31));
      v72 = 0;
      goto LABEL_121;
    case 0x57:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v98 = 7 * ((tp->tm_wday + 6) / 7) - (tp->tm_wday + 6) + tp->tm_yday + 7;
      v99 = (unsigned __int64)(-1840700269LL * v98) >> 32;
LABEL_227:
      v50 = 2;
      v71 = ((v99 + v98) >> 2) - (v98 >> 31);
      goto LABEL_120;
    case 0x77:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 1;
      v71 = tp->tm_wday;
      goto LABEL_120;
    case 0x62:
    case 0x68:
      if ( (_BYTE)v16 )
        v15 = v16;
      if ( (_DWORD)v20 )
        goto LABEL_237;
LABEL_51:
      v27 = &v192;
      v28 = v8;
      v29 = 0;
      *(_WORD *)format = 9504;
      LODWORD(v20) = 0;
      goto LABEL_52;
    default:
      goto LABEL_237;
    case 0x7A:
      j = 0LL;
      goto LABEL_253;
    case 0x64:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v50 = 2;
      v71 = tp->tm_mday;
      goto LABEL_120;
    case 0x65:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v71 = tp->tm_mday;
LABEL_158:
      v50 = 2;
      if ( i != 48 && i != 45 )
        i = 95;
      goto LABEL_120;
    case 0x6A:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_237;
      v166 = 0;
      v50 = 3;
      v114 = tp->tm_yday;
      LOBYTE(v73) = v114 < -1;
      v71 = v114 + 1;
      v72 = 0;
      goto LABEL_121;
    case 0x25:
      LODWORD(v105) = 0;
      v82 = 1LL;
      a2 = (char *)(v156 - v12);
      if ( v24 >= 0 )
        LODWORD(v105) = v24;
      v105 = (signed int)v105;
      if ( (_DWORD)v105 )
        v82 = v105;
      if ( (_DWORD)v20 )
      {
        v13 = (_BYTE *)v8;
        v103 = (_BYTE *)v8;
        v104 = 1LL;
        goto LABEL_243;
      }
      if ( v82 < (unsigned __int64)a2 )
      {
        if ( v7 )
        {
          if ( v24 > 1 )
          {
            v115 = v24 - 1LL;
            if ( i == 48 )
            {
              v153 = v7;
              v7 += v115;
              memset(v153, 48, v115);
              LOBYTE(v19) = *(_BYTE *)v8;
            }
            else
            {
              v116 = v7;
              v7 += v115;
              memset(v116, 32, v115);
              LOBYTE(v19) = *(_BYTE *)v8;
            }
          }
          *v7++ = v19;
        }
LABEL_175:
        v12 += v82;
        v13 = (_BYTE *)v8;
        goto LABEL_12;
      }
      return 0LL;
    case 0:
      v103 = (_BYTE *)(v8 - 1);
      v113 = *(_BYTE *)(v8 - 1);
      goto LABEL_262;
    case 0x79:
      if ( (_DWORD)v20 == 69 )
      {
LABEL_334:
        v50 = 0;
        goto LABEL_123;
      }
      v50 = 2;
      v117 = tp->tm_year % 100;
      v71 = v117;
      if ( v117 < 0 )
      {
        v118 = -v117;
        v71 += 100;
        if ( tp->tm_year <= -1901 )
          v71 = v118;
      }
LABEL_120:
      v166 = 0;
      v72 = 0;
      v73 = (unsigned int)v71 >> 31;
LABEL_121:
      if ( (_DWORD)v20 == 79 )
      {
        if ( (_BYTE)v73 )
          goto LABEL_222;
LABEL_123:
        v29 = 0;
        *(_WORD *)format = 9504;
LABEL_124:
        v192 = v20;
        v28 = v8;
        LODWORD(v20) = v50;
        v27 = &v193;
LABEL_52:
        *v27 = v19;
        v27[1] = 0;
        v161 = (_BYTE *)v28;
        v180 = v20;
        v171 = v15;
        v30 = strftime(sa, 0x400uLL, format, tp);
        v13 = v161;
        if ( v30 )
        {
          v31 = v30 - 1;
          LODWORD(v30) = 0;
          if ( v24 >= 0 )
            LODWORD(v30) = v24;
          v30 = (signed int)v30;
          v32 = (signed int)v30;
          if ( v31 >= (signed int)v30 )
            v32 = v31;
          a2 = (char *)(v156 - v12);
          if ( v156 - v12 > v32 )
          {
            if ( v7 )
            {
              v15 = v171;
              if ( !v180 && v31 < v30 )
              {
                v181 = v31;
                v33 = v24 - v31;
                v172 = v161;
                v162 = v15;
                if ( i == 48 )
                {
                  v125 = v7;
                  v7 += v33;
                  memset(v125, 48, v33);
                  v15 = v162;
                  v13 = v172;
                  v31 = v181;
                }
                else
                {
                  v34 = v7;
                  v7 += v33;
                  memset(v34, 32, v33);
                  v31 = v181;
                  v13 = v172;
                  v15 = v162;
                }
              }
              v173 = v13;
              v35 = &sa[1];
              v36 = v31;
              v37 = v7;
              v163 = v31;
              if ( !v29 )
                goto LABEL_64;
              sub_405A60((__int64)v7, (__int64)&sa[1], v31);
              v38 = v163;
              v13 = v173;
              goto LABEL_66;
            }
            goto LABEL_67;
          }
          return 0LL;
        }
        goto LABEL_12;
      }
LABEL_221:
      if ( (_BYTE)v73 )
LABEL_222:
        v71 = -v71;
LABEL_178:
      v85 = v194;
      while ( 1 )
      {
        v40 = v85 - 1;
        if ( v72 & 1 )
        {
          v86 = (signed __int64)(v85 - 2);
          *(v85-- - 1) = 58;
          v40 = (char *)v86;
        }
        v72 >>= 1;
        a2 = (char *)(v71 / 0xAu);
        *(v85 - 1) = v71 % 0xAu + 48;
        v85 = v40;
        if ( (unsigned int)v71 <= 9 && !v72 )
          break;
        v71 /= 0xAu;
      }
      if ( v50 < v24 )
        v50 = v24;
      if ( (_BYTE)v73 )
      {
LABEL_298:
        v167 = 45;
        v120 = 45;
        if ( i == 45 )
          goto LABEL_299;
LABEL_190:
        v51 = (char *)(v194 - v40);
        LODWORD(v53) = v50 - 1 - ((unsigned __int64)v194 - (_DWORD)v40);
        v52 = v156 - v12;
        if ( (signed int)v53 <= 0 )
        {
          LODWORD(v54) = 0;
          v126 = 1LL;
          if ( v24 >= 0 )
            LODWORD(v54) = v24;
          v54 = (signed int)v54;
          if ( (_DWORD)v54 )
            v126 = v54;
          if ( v126 >= v52 )
            return 0LL;
          if ( v7 )
          {
            if ( !v50 && v54 > 1 )
            {
              v127 = v24 - 1LL;
              v190 = v126;
              v189 = v54;
              v179 = &v7[v127];
              v185 = v15;
              if ( i == 48 )
              {
                memset(v7, 48, v127);
                v7 = v179;
                v15 = v185;
                v50 = 0;
                v54 = v189;
                v126 = v190;
                v51 = (char *)(v194 - v40);
              }
              else
              {
                memset(v7, 32, v127);
                v7 = v179;
                v51 = (char *)(v194 - v40);
                v126 = v190;
                v54 = v189;
                v50 = 0;
                v15 = v185;
              }
            }
            *(++v7 - 1) = v167;
          }
          v12 += v126;
          v13 = (_BYTE *)v8;
          v52 = v156 - v12;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          if ( v50 >= v52 )
            return 0LL;
          LODWORD(a2) = 0;
          v87 = 1LL;
          if ( v24 >= 0 )
            LODWORD(a2) = v24;
          a2 = (char *)(signed int)a2;
          if ( (_DWORD)a2 )
            v87 = (unsigned __int64)a2;
          if ( v87 >= v52 )
            return 0LL;
          v12 += v87;
          v53 = (signed int)v53;
          v13 = (_BYTE *)v8;
          if ( !v7 )
            goto LABEL_206;
          if ( !v50 && (unsigned __int64)a2 > 1 )
          {
            v188 = v53;
            v88 = v24 - 1LL;
            v176 = v15;
            if ( i == 48 )
            {
              v155 = v7;
              v7 += v88;
              memset(v155, 48, v88);
              v15 = v176;
              v50 = 0;
              v51 = (char *)(v194 - v40);
              v53 = v188;
            }
            else
            {
              v89 = v7;
              v7 += v88;
              memset(v89, 32, v88);
              v53 = v188;
              v51 = (char *)(v194 - v40);
              v50 = 0;
              v15 = v176;
            }
          }
          ++v7;
          v13 = (_BYTE *)v8;
          *(v7 - 1) = v167;
LABEL_204:
          if ( v7 )
          {
            v90 = v51;
            v91 = v50;
            v92 = v13;
            v93 = v15;
            v94 = v53;
            memset(v7, 48, v53);
            v53 = v94;
            v51 = v90;
            v50 = v91;
            v13 = v92;
            v15 = v93;
            v7 += v94;
          }
LABEL_206:
          v12 += v53;
          v24 = 0;
          v54 = 0LL;
          v52 = v156 - v12;
          goto LABEL_84;
        }
LABEL_326:
        v128 = (signed int)v53;
        if ( (signed int)v53 >= v52 )
          return 0LL;
        if ( v7 )
        {
          v129 = v7;
          v130 = v53;
          v131 = v50;
          v7 += (signed int)v53;
          v132 = v15;
          memset(v129, 32, (signed int)v53);
          LODWORD(v53) = v130;
          v50 = v131;
          v15 = v132;
        }
        v12 += v128;
        v133 = v24 - v53;
        v23 = __OFSUB__((_DWORD)v53, v24);
        v22 = (signed int)v53 - v24 < 0;
        v24 = 0;
        if ( v22 ^ v23 )
          v24 = v133;
        v52 = v156 - v12;
        if ( v167 )
        {
          v54 = v24;
          v136 = 1LL;
          if ( v24 )
            v136 = v24;
          if ( v136 >= v52 )
            return 0LL;
          if ( v7 )
          {
            if ( !v50 && (unsigned __int64)v24 > 1 )
            {
              v137 = v7;
              v138 = v136;
              v7 += v24 - 1;
              v139 = v15;
              memset(v137, 32, v24 - 1LL);
              v136 = v138;
              v50 = 0;
              v15 = v139;
              v54 = v24;
            }
            *(++v7 - 1) = v167;
          }
          v12 += v136;
          v13 = (_BYTE *)v8;
          i = 95;
          v51 = (char *)(v194 - v40);
          v52 = v156 - v12;
        }
        else
        {
          v54 = v24;
          v13 = (_BYTE *)v8;
          i = 95;
          v51 = (char *)(v194 - v40);
        }
        goto LABEL_84;
      }
      if ( !v166 )
      {
LABEL_79:
        v51 = (char *)(v194 - v40);
        v52 = v156 - v12;
        if ( i == 45 || (LODWORD(v53) = v50 - (_DWORD)v51, v50 - (signed int)v51 <= 0) )
        {
          LODWORD(v54) = 0;
          v13 = (_BYTE *)v8;
          if ( v24 >= 0 )
            LODWORD(v54) = v24;
          v54 = (signed int)v54;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          a2 = (char *)v50;
          if ( v50 >= v52 )
            return 0LL;
          v53 = (signed int)v53;
          v13 = (_BYTE *)v8;
          goto LABEL_204;
        }
        v167 = 0;
        goto LABEL_326;
      }
      if ( i != 45 )
      {
        v167 = 43;
        goto LABEL_190;
      }
      v120 = 43;
LABEL_299:
      LODWORD(v54) = 0;
      v121 = 1LL;
      if ( v24 >= 0 )
        LODWORD(v54) = v24;
      v54 = (signed int)v54;
      if ( (_DWORD)v54 )
        v121 = v54;
      if ( v156 - v12 <= v121 )
        return 0LL;
      if ( v7 )
      {
        if ( !v50 && v54 > 1 )
        {
          v122 = v120;
          v123 = v54;
          v124 = v15;
          memset(v7, 32, v24 - 1LL);
          v120 = v122;
          v54 = v123;
          v50 = 0;
          v15 = v124;
          v7 += v24 - 1;
        }
        *v7++ = v120;
      }
      v12 += v121;
      v13 = (_BYTE *)v8;
      i = 45;
      v51 = (char *)(v194 - v40);
      v52 = v156 - v12;
LABEL_84:
      v32 = v54;
      if ( (unsigned __int64)v51 >= v54 )
        v32 = (unsigned __int64)v51;
      if ( v32 < v52 )
      {
        if ( v7 )
        {
          if ( !v50 && (unsigned __int64)v51 < v54 )
          {
            v182 = v51;
            v55 = v24 - (_QWORD)v51;
            v174 = v13;
            v164 = v15;
            if ( i == 48 )
            {
              v134 = v7;
              v7 += v55;
              memset(v134, 48, v55);
              v15 = v164;
              v13 = v174;
              v51 = v182;
            }
            else
            {
              v56 = v7;
              v7 += v55;
              memset(v56, 32, v55);
              v51 = v182;
              v13 = v174;
              v15 = v164;
            }
          }
          v173 = v13;
          v36 = (size_t)v51;
          v35 = v40;
          v37 = v7;
          v163 = (unsigned __int64)v51;
LABEL_64:
          if ( v15 )
          {
            sub_405AB0((__int64)v37, (__int64)v35, v36);
            v38 = v163;
            v13 = v173;
          }
          else
          {
            memcpy(v37, v35, v36);
            v13 = v173;
            v38 = v163;
          }
LABEL_66:
          v7 += v38;
        }
LABEL_67:
        v12 += v32;
        goto LABEL_12;
      }
      return 0LL;
    case 0x3A:
      v119 = *(_BYTE *)(v8 + 1);
      a2 = (char *)(v8 + 1);
      for ( j = 1LL; v119 == 58; a2 = (char *)(v8 + j) )
        v119 = *(_BYTE *)(v8 + ++j);
      if ( v119 != 122 )
        goto LABEL_237;
      v8 = (signed __int64)a2;
LABEL_253:
      if ( tp->tm_isdst < 0 )
      {
        v13 = (_BYTE *)v8;
        goto LABEL_12;
      }
      v110 = tp->tm_gmtoff;
      LOBYTE(v73) = 1;
      if ( (signed int)v110 >= 0 )
      {
        LOBYTE(v73) = 0;
        if ( !(_DWORD)v110 )
          LOBYTE(v73) = *v158 == 45;
      }
      v170 = (signed int)v110 / 3600;
      v111 = (signed int)v110 / 60 % 60;
      v72 = (signed int)v110 / 60 % 60;
      v112 = (signed int)v110 % 60;
      if ( j == 1 )
        goto LABEL_362;
      if ( j )
      {
        if ( j == 2 )
          goto LABEL_381;
        if ( j != 3 )
        {
          v113 = *(_BYTE *)v8;
          v103 = (_BYTE *)v8;
LABEL_262:
          LODWORD(v105) = 0;
          a2 = (char *)(v156 - v12);
          if ( v24 >= 0 )
            LODWORD(v105) = v24;
          v105 = (signed int)v105;
          if ( v113 == 37 )
          {
            v82 = 1LL;
            v13 = v103;
            v104 = 1LL;
            if ( v105 )
              v82 = v105;
          }
          else
          {
            v8 = (signed __int64)v103;
LABEL_237:
            v102 = v8 - 1;
            do
            {
              v103 = (_BYTE *)v102;
              LODWORD(v104) = v8 - 1 + 2 - v102--;
            }
            while ( *(_BYTE *)(v102 + 1) != 37 );
            LODWORD(v105) = 0;
            v104 = (signed int)v104;
            v13 = (_BYTE *)v8;
            a2 = (char *)(v156 - v12);
            if ( v24 >= 0 )
              LODWORD(v105) = v24;
            v105 = (signed int)v105;
            v82 = (signed int)v105;
            if ( v104 >= (signed int)v105 )
              v82 = v104;
          }
LABEL_243:
          if ( (unsigned __int64)a2 > v82 )
          {
            if ( v7 )
            {
              if ( v104 < v105 )
              {
                v187 = v104;
                v106 = v24 - v104;
                v184 = v13;
                v177 = v103;
                v168 = v15;
                if ( i == 48 )
                {
                  v135 = v7;
                  v7 += v106;
                  memset(v135, 48, v106);
                  v15 = v168;
                  v103 = v177;
                  v13 = v184;
                  v104 = v187;
                }
                else
                {
                  v107 = v7;
                  v7 += v106;
                  memset(v107, 32, v106);
                  v104 = v187;
                  v13 = v184;
                  v103 = v177;
                  v15 = v168;
                }
              }
              v178 = v13;
              v169 = v104;
              if ( v15 )
              {
                sub_405AB0((__int64)v7, (__int64)v103, v104);
                v108 = v169;
                v13 = v178;
              }
              else
              {
                memcpy(v7, v103, v104);
                v13 = v178;
                v108 = v169;
              }
              v7 += v108;
            }
            v12 += v82;
            goto LABEL_12;
          }
          return 0LL;
        }
        if ( v112 )
        {
LABEL_381:
          v147 = 10000 * v170;
          v50 = 9;
          v166 = 1;
          v148 = 100 * v72 + v147;
          v72 = 20;
          v71 = v148 + v112;
        }
        else if ( v111 )
        {
LABEL_362:
          v149 = 100 * v170;
          v50 = 6;
          v166 = 1;
          v71 = v72 + v149;
          v72 = 4;
        }
        else
        {
          v71 = v170;
          v50 = 3;
          v166 = 1;
        }
      }
      else
      {
        v150 = 100 * v170;
        v72 = 0;
        v166 = 1;
        v50 = 5;
        v71 = v111 + v150;
      }
      goto LABEL_121;
    case 0x70:
      v29 = 0;
LABEL_151:
      LOBYTE(v19) = 112;
      if ( (_BYTE)v16 )
        v29 = v16;
      if ( (_BYTE)v16 )
        v15 = 0;
LABEL_70:
      *(_WORD *)format = 9504;
      if ( !(_DWORD)v20 )
      {
        v28 = v8;
        v27 = &v192;
        goto LABEL_52;
      }
      v50 = 0;
      goto LABEL_124;
  }
}

__int64 __fastcall sub_4072D0(void *a1, __int64 a2, char *a3, __int64 a4, __int64 a5, int a6)
{
  return sub_405B00(a1, a3, a4, a2, 0, a5, a6);
}

char *__fastcall sub_4072F0(const char *a1)
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
  qword_617498 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_407390(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_40C750(0LL);
  if ( (*(_BYTE *)v4 & 0xDF) == 85 )
  {
    if ( (*(_BYTE *)(v4 + 1) & 0xDF) == 84
      && (*(_BYTE *)(v4 + 2) & 0xDF) == 70
      && *(_BYTE *)(v4 + 3) == 45
      && *(_BYTE *)(v4 + 4) == 56
      && !*(_BYTE *)(v4 + 5) )
    {
      v5 = *v2 == 96;
      v2 = "â€˜";
      if ( !v5 )
        v2 = "â€™";
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
    v2 = "¡\ae";
    if ( !v5 )
      v2 = "¡¯";
    return (char *)v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_407490(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_407390("`", v11);
        v58 = sub_407390("'", v11);
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
            return sub_407490((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_407490((__int64)v9, v79, s);
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
                return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
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
            return sub_407490((__int64)v9, v10, s);
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
            return sub_407490((__int64)v9, v10, s);
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
            return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
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
          return sub_407490((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_407490((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_40AE50((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_407490((__int64)v9, v10, s);
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
      return sub_407490((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_407490(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_407390("`", v11);
        v58 = sub_407390("'", v11);
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
            return sub_407490((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_407490((__int64)v9, v79, s);
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
                return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
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
            return sub_407490((__int64)v9, v10, s);
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
            return sub_407490((__int64)v9, v10, s);
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
            return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
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
          return sub_407490((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_407490((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_40AE50((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_407490((__int64)v9, v10, s);
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
      return sub_407490((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_4086C0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_617378;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_617390 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_4097B0();
    v9 = 16LL * (a1 + 1);
    if ( off_617378 == &xmmword_617380 )
    {
      LODWORD(v20) = sub_4095C0(0LL, v9);
      v7 = v20;
      off_617378 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_617380);
    }
    else
    {
      LODWORD(v10) = sub_4095C0(off_617378, v9);
      off_617378 = v10;
      v7 = v10;
    }
    memset(&v7[dword_617390], 0, 16LL * (a1 + 1 - dword_617390));
    dword_617390 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_407490(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_6174A0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_409560(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_407490(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

_BYTE *__fastcall sub_4086C0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_617378;
  v8 = v6;
  v22 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_617390 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_4097B0();
    v9 = 16LL * (a1 + 1);
    if ( off_617378 == &xmmword_617380 )
    {
      LODWORD(v20) = sub_4095C0(0LL, v9);
      v7 = v20;
      off_617378 = v20;
      *v20 = (__int128)_mm_load_si128((const __m128i *)&xmmword_617380);
    }
    else
    {
      LODWORD(v10) = sub_4095C0(off_617378, v9);
      off_617378 = v10;
      v7 = v10;
    }
    memset(&v7[dword_617390], 0, 16LL * (a1 + 1 - dword_617390));
    dword_617390 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v23 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_407490(v12, *(_QWORD *)v11, v21, v4, *(_DWORD *)v5, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v15 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_6174A0 )
    {
      v16 = v14 + 1;
      free(v12);
      v15 = v16;
    }
    LODWORD(v17) = sub_409560(v15);
    v18 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v17;
    v12 = v17;
    sub_407490(v17, v15, v21, v4, v18, v23, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v22;
  return v12;
}

__int64 __fastcall sub_4088A0(__int128 *a1)
{
  if ( !a1 )
    a1 = &xmmword_6175A0;
  return *(_DWORD *)a1;
}

__int128 *__fastcall sub_4088B0(__int128 *a1, int a2)
{
  __int128 *result; // rax@1

  result = &xmmword_6175A0;
  if ( !a1 )
    a1 = &xmmword_6175A0;
  *(_DWORD *)a1 = a2;
  return result;
}

_BYTE *__fastcall sub_408BE0(int a1, int a2, char *a3)
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
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_4086C0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408BE0(int a1, int a2, char *a3)
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
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_4086C0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408CC0(int a1, char *a2)
{
  return sub_408BE0(0, a1, a2);
}

_BYTE *__fastcall sub_408CE0(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_6175D0;
  v4 = _mm_load_si128((const __m128i *)&xmmword_6175A0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_6175B0);
  v6 = _mm_load_si128((const __m128i *)&xmmword_6175C0);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_4086C0(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_408D60(char *a1)
{
  return sub_408CE0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_408EF0(int a1, char *a2)
{
  return sub_4086C0(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_617340);
}

_BYTE *__fastcall sub_408F10(char *a1)
{
  return sub_4086C0(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_617340);
}

__int64 __fastcall sub_408F30(__int64 a1)
{
  int v1; // eax@1
  int v2; // edx@1
  __int64 result; // rax@1
  __int64 v4; // rax@2

  *(_QWORD *)(a1 + 8) = 0LL;
  v1 = sub_40C6A0((unsigned __int64)".");
  v2 = v1;
  *(_DWORD *)a1 = v1;
  result = 0LL;
  if ( v2 < 0 )
  {
    LODWORD(v4) = sub_409BB0(0LL, 0LL);
    *(_QWORD *)(a1 + 8) = v4;
    result = (unsigned int)-(v4 == 0);
  }
  return result;
}

int __fastcall sub_408F80(__int64 a1)
{
  const char *v2; // rdi@3
  int v3; // ebx@3
  int *v4; // r12@4
  size_t v5; // rax@5
  size_t v6; // r14@5
  char *v7; // rsi@7
  size_t v8; // rax@7
  size_t v9; // rbx@7
  char *v10; // rbp@8
  const char *v11; // r13@10
  _BYTE *v12; // rax@12
  _BYTE *v13; // rbx@12
  int v14; // eax@14
  int v15; // ebx@20
  _BYTE *v16; // rax@25
  _BYTE *v17; // rbx@25
  int v18; // eax@26
  int fd; // [sp+0h] [bp-2Ch]@5

  if ( *(_DWORD *)a1 >= 0 )
    return fchdir(*(_DWORD *)a1);
  v2 = *(const char **)(a1 + 8);
  v3 = chdir(v2);
  if ( v3 )
  {
    v4 = __errno_location();
    if ( *v4 == 36 )
    {
      v5 = strlen(v2);
      fd = -100;
      v6 = v5;
      if ( !v5 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v5 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v7 = "/";
      v8 = strspn(v2, "/");
      v9 = v8;
      if ( v8 == 2 )
      {
        LODWORD(v16) = sub_40AED0(v2 + 3, 47LL, v6 - 3);
        v17 = v16;
        if ( !v16 )
          return -1;
        *v16 = 0;
        v7 = (char *)v2;
        v18 = sub_409900(&fd, v2);
        *v17 = 47;
        if ( !v18 )
        {
          v7 = "/";
          v10 = &v17[strspn(v17 + 1, "/") + 1];
          goto LABEL_9;
        }
      }
      else
      {
        v10 = (char *)v2;
        if ( !v8 )
        {
LABEL_9:
          if ( *v10 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v11 = &v2[v6];
          if ( v10 > &v2[v6] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v11 - v10 > 4095 )
          {
            v12 = memrchr(v10, 47, 0x1000uLL);
            v13 = v12;
            if ( !v12 )
            {
              *v4 = 36;
              return -1;
            }
            *v12 = 0;
            if ( v12 - v10 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v7 = v10;
            v14 = sub_409900(&fd, v10);
            *v13 = 47;
            if ( v14 )
              goto LABEL_20;
            v7 = "/";
            v10 = &v13[strspn(v13 + 1, "/") + 1];
          }
          if ( v11 <= v10 || (v7 = v10, !sub_409900(&fd, v10)) )
          {
            v3 = fchdir(fd);
            if ( !v3 )
            {
              sub_4098C0((unsigned int)fd, v7);
              return v3;
            }
          }
          goto LABEL_20;
        }
        v7 = "/.libs/" + 6;
        if ( !sub_409900(&fd, 4269398LL) )
        {
          v10 = (char *)&v2[v9];
          goto LABEL_9;
        }
      }
LABEL_20:
      v15 = *v4;
      sub_4098C0((unsigned int)fd, v7);
      *v4 = v15;
      return -1;
    }
  }
  return v3;
}

int __fastcall sub_408F80(__int64 a1)
{
  const char *v2; // rdi@3
  int v3; // ebx@3
  int *v4; // r12@4
  size_t v5; // rax@5
  size_t v6; // r14@5
  char *v7; // rsi@7
  size_t v8; // rax@7
  size_t v9; // rbx@7
  char *v10; // rbp@8
  const char *v11; // r13@10
  _BYTE *v12; // rax@12
  _BYTE *v13; // rbx@12
  int v14; // eax@14
  int v15; // ebx@20
  _BYTE *v16; // rax@25
  _BYTE *v17; // rbx@25
  int v18; // eax@26
  int fd; // [sp+0h] [bp-2Ch]@5

  if ( *(_DWORD *)a1 >= 0 )
    return fchdir(*(_DWORD *)a1);
  v2 = *(const char **)(a1 + 8);
  v3 = chdir(v2);
  if ( v3 )
  {
    v4 = __errno_location();
    if ( *v4 == 36 )
    {
      v5 = strlen(v2);
      fd = -100;
      v6 = v5;
      if ( !v5 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v5 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v7 = "/";
      v8 = strspn(v2, "/");
      v9 = v8;
      if ( v8 == 2 )
      {
        LODWORD(v16) = sub_40AED0(v2 + 3, 47LL, v6 - 3);
        v17 = v16;
        if ( !v16 )
          return -1;
        *v16 = 0;
        v7 = (char *)v2;
        v18 = sub_409900(&fd, v2);
        *v17 = 47;
        if ( !v18 )
        {
          v7 = "/";
          v10 = &v17[strspn(v17 + 1, "/") + 1];
          goto LABEL_9;
        }
      }
      else
      {
        v10 = (char *)v2;
        if ( !v8 )
        {
LABEL_9:
          if ( *v10 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v11 = &v2[v6];
          if ( v10 > &v2[v6] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v11 - v10 > 4095 )
          {
            v12 = memrchr(v10, 47, 0x1000uLL);
            v13 = v12;
            if ( !v12 )
            {
              *v4 = 36;
              return -1;
            }
            *v12 = 0;
            if ( v12 - v10 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v7 = v10;
            v14 = sub_409900(&fd, v10);
            *v13 = 47;
            if ( v14 )
              goto LABEL_20;
            v7 = "/";
            v10 = &v13[strspn(v13 + 1, "/") + 1];
          }
          if ( v11 <= v10 || (v7 = v10, !sub_409900(&fd, v10)) )
          {
            v3 = fchdir(fd);
            if ( !v3 )
            {
              sub_4098C0((unsigned int)fd, v7);
              return v3;
            }
          }
          goto LABEL_20;
        }
        v7 = "/.libs/" + 6;
        if ( !sub_409900(&fd, 4269398LL) )
        {
          v10 = (char *)&v2[v9];
          goto LABEL_9;
        }
      }
LABEL_20:
      v15 = *v4;
      sub_4098C0((unsigned int)fd, v7);
      *v4 = v15;
      return -1;
    }
  }
  return v3;
}

int __fastcall sub_408F80(__int64 a1)
{
  const char *v2; // rdi@3
  int v3; // ebx@3
  int *v4; // r12@4
  size_t v5; // rax@5
  size_t v6; // r14@5
  char *v7; // rsi@7
  size_t v8; // rax@7
  size_t v9; // rbx@7
  char *v10; // rbp@8
  const char *v11; // r13@10
  _BYTE *v12; // rax@12
  _BYTE *v13; // rbx@12
  int v14; // eax@14
  int v15; // ebx@20
  _BYTE *v16; // rax@25
  _BYTE *v17; // rbx@25
  int v18; // eax@26
  int fd; // [sp+0h] [bp-2Ch]@5

  if ( *(_DWORD *)a1 >= 0 )
    return fchdir(*(_DWORD *)a1);
  v2 = *(const char **)(a1 + 8);
  v3 = chdir(v2);
  if ( v3 )
  {
    v4 = __errno_location();
    if ( *v4 == 36 )
    {
      v5 = strlen(v2);
      fd = -100;
      v6 = v5;
      if ( !v5 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v5 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v7 = "/";
      v8 = strspn(v2, "/");
      v9 = v8;
      if ( v8 == 2 )
      {
        LODWORD(v16) = sub_40AED0(v2 + 3, 47LL, v6 - 3);
        v17 = v16;
        if ( !v16 )
          return -1;
        *v16 = 0;
        v7 = (char *)v2;
        v18 = sub_409900(&fd, v2);
        *v17 = 47;
        if ( !v18 )
        {
          v7 = "/";
          v10 = &v17[strspn(v17 + 1, "/") + 1];
          goto LABEL_9;
        }
      }
      else
      {
        v10 = (char *)v2;
        if ( !v8 )
        {
LABEL_9:
          if ( *v10 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v11 = &v2[v6];
          if ( v10 > &v2[v6] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v11 - v10 > 4095 )
          {
            v12 = memrchr(v10, 47, 0x1000uLL);
            v13 = v12;
            if ( !v12 )
            {
              *v4 = 36;
              return -1;
            }
            *v12 = 0;
            if ( v12 - v10 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v7 = v10;
            v14 = sub_409900(&fd, v10);
            *v13 = 47;
            if ( v14 )
              goto LABEL_20;
            v7 = "/";
            v10 = &v13[strspn(v13 + 1, "/") + 1];
          }
          if ( v11 <= v10 || (v7 = v10, !sub_409900(&fd, v10)) )
          {
            v3 = fchdir(fd);
            if ( !v3 )
            {
              sub_4098C0((unsigned int)fd, v7);
              return v3;
            }
          }
          goto LABEL_20;
        }
        v7 = "/.libs/" + 6;
        if ( !sub_409900(&fd, 4269398LL) )
        {
          v10 = (char *)&v2[v9];
          goto LABEL_9;
        }
      }
LABEL_20:
      v15 = *v4;
      sub_4098C0((unsigned int)fd, v7);
      *v4 = v15;
      return -1;
    }
  }
  return v3;
}

int __fastcall sub_408F80(__int64 a1)
{
  const char *v2; // rdi@3
  int v3; // ebx@3
  int *v4; // r12@4
  size_t v5; // rax@5
  size_t v6; // r14@5
  char *v7; // rsi@7
  size_t v8; // rax@7
  size_t v9; // rbx@7
  char *v10; // rbp@8
  const char *v11; // r13@10
  _BYTE *v12; // rax@12
  _BYTE *v13; // rbx@12
  int v14; // eax@14
  int v15; // ebx@20
  _BYTE *v16; // rax@25
  _BYTE *v17; // rbx@25
  int v18; // eax@26
  int fd; // [sp+0h] [bp-2Ch]@5

  if ( *(_DWORD *)a1 >= 0 )
    return fchdir(*(_DWORD *)a1);
  v2 = *(const char **)(a1 + 8);
  v3 = chdir(v2);
  if ( v3 )
  {
    v4 = __errno_location();
    if ( *v4 == 36 )
    {
      v5 = strlen(v2);
      fd = -100;
      v6 = v5;
      if ( !v5 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v5 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v7 = "/";
      v8 = strspn(v2, "/");
      v9 = v8;
      if ( v8 == 2 )
      {
        LODWORD(v16) = sub_40AED0(v2 + 3, 47LL, v6 - 3);
        v17 = v16;
        if ( !v16 )
          return -1;
        *v16 = 0;
        v7 = (char *)v2;
        v18 = sub_409900(&fd, v2);
        *v17 = 47;
        if ( !v18 )
        {
          v7 = "/";
          v10 = &v17[strspn(v17 + 1, "/") + 1];
          goto LABEL_9;
        }
      }
      else
      {
        v10 = (char *)v2;
        if ( !v8 )
        {
LABEL_9:
          if ( *v10 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v11 = &v2[v6];
          if ( v10 > &v2[v6] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v11 - v10 > 4095 )
          {
            v12 = memrchr(v10, 47, 0x1000uLL);
            v13 = v12;
            if ( !v12 )
            {
              *v4 = 36;
              return -1;
            }
            *v12 = 0;
            if ( v12 - v10 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v7 = v10;
            v14 = sub_409900(&fd, v10);
            *v13 = 47;
            if ( v14 )
              goto LABEL_20;
            v7 = "/";
            v10 = &v13[strspn(v13 + 1, "/") + 1];
          }
          if ( v11 <= v10 || (v7 = v10, !sub_409900(&fd, v10)) )
          {
            v3 = fchdir(fd);
            if ( !v3 )
            {
              sub_4098C0((unsigned int)fd, v7);
              return v3;
            }
          }
          goto LABEL_20;
        }
        v7 = "/.libs/" + 6;
        if ( !sub_409900(&fd, 4269398LL) )
        {
          v10 = (char *)&v2[v9];
          goto LABEL_9;
        }
      }
LABEL_20:
      v15 = *v4;
      sub_4098C0((unsigned int)fd, v7);
      *v4 = v15;
      return -1;
    }
  }
  return v3;
}

int __fastcall sub_408F80(__int64 a1)
{
  const char *v2; // rdi@3
  int v3; // ebx@3
  int *v4; // r12@4
  size_t v5; // rax@5
  size_t v6; // r14@5
  char *v7; // rsi@7
  size_t v8; // rax@7
  size_t v9; // rbx@7
  char *v10; // rbp@8
  const char *v11; // r13@10
  _BYTE *v12; // rax@12
  _BYTE *v13; // rbx@12
  int v14; // eax@14
  int v15; // ebx@20
  _BYTE *v16; // rax@25
  _BYTE *v17; // rbx@25
  int v18; // eax@26
  int fd; // [sp+0h] [bp-2Ch]@5

  if ( *(_DWORD *)a1 >= 0 )
    return fchdir(*(_DWORD *)a1);
  v2 = *(const char **)(a1 + 8);
  v3 = chdir(v2);
  if ( v3 )
  {
    v4 = __errno_location();
    if ( *v4 == 36 )
    {
      v5 = strlen(v2);
      fd = -100;
      v6 = v5;
      if ( !v5 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v5 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v7 = "/";
      v8 = strspn(v2, "/");
      v9 = v8;
      if ( v8 == 2 )
      {
        LODWORD(v16) = sub_40AED0(v2 + 3, 47LL, v6 - 3);
        v17 = v16;
        if ( !v16 )
          return -1;
        *v16 = 0;
        v7 = (char *)v2;
        v18 = sub_409900(&fd, v2);
        *v17 = 47;
        if ( !v18 )
        {
          v7 = "/";
          v10 = &v17[strspn(v17 + 1, "/") + 1];
          goto LABEL_9;
        }
      }
      else
      {
        v10 = (char *)v2;
        if ( !v8 )
        {
LABEL_9:
          if ( *v10 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v11 = &v2[v6];
          if ( v10 > &v2[v6] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v11 - v10 > 4095 )
          {
            v12 = memrchr(v10, 47, 0x1000uLL);
            v13 = v12;
            if ( !v12 )
            {
              *v4 = 36;
              return -1;
            }
            *v12 = 0;
            if ( v12 - v10 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v7 = v10;
            v14 = sub_409900(&fd, v10);
            *v13 = 47;
            if ( v14 )
              goto LABEL_20;
            v7 = "/";
            v10 = &v13[strspn(v13 + 1, "/") + 1];
          }
          if ( v11 <= v10 || (v7 = v10, !sub_409900(&fd, v10)) )
          {
            v3 = fchdir(fd);
            if ( !v3 )
            {
              sub_4098C0((unsigned int)fd, v7);
              return v3;
            }
          }
          goto LABEL_20;
        }
        v7 = "/.libs/" + 6;
        if ( !sub_409900(&fd, 4269398LL) )
        {
          v10 = (char *)&v2[v9];
          goto LABEL_9;
        }
      }
LABEL_20:
      v15 = *v4;
      sub_4098C0((unsigned int)fd, v7);
      *v4 = v15;
      return -1;
    }
  }
  return v3;
}

int __fastcall sub_408F80(__int64 a1)
{
  const char *v2; // rdi@3
  int v3; // ebx@3
  int *v4; // r12@4
  size_t v5; // rax@5
  size_t v6; // r14@5
  char *v7; // rsi@7
  size_t v8; // rax@7
  size_t v9; // rbx@7
  char *v10; // rbp@8
  const char *v11; // r13@10
  _BYTE *v12; // rax@12
  _BYTE *v13; // rbx@12
  int v14; // eax@14
  int v15; // ebx@20
  _BYTE *v16; // rax@25
  _BYTE *v17; // rbx@25
  int v18; // eax@26
  int fd; // [sp+0h] [bp-2Ch]@5

  if ( *(_DWORD *)a1 >= 0 )
    return fchdir(*(_DWORD *)a1);
  v2 = *(const char **)(a1 + 8);
  v3 = chdir(v2);
  if ( v3 )
  {
    v4 = __errno_location();
    if ( *v4 == 36 )
    {
      v5 = strlen(v2);
      fd = -100;
      v6 = v5;
      if ( !v5 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v5 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v7 = "/";
      v8 = strspn(v2, "/");
      v9 = v8;
      if ( v8 == 2 )
      {
        LODWORD(v16) = sub_40AED0(v2 + 3, 47LL, v6 - 3);
        v17 = v16;
        if ( !v16 )
          return -1;
        *v16 = 0;
        v7 = (char *)v2;
        v18 = sub_409900(&fd, v2);
        *v17 = 47;
        if ( !v18 )
        {
          v7 = "/";
          v10 = &v17[strspn(v17 + 1, "/") + 1];
          goto LABEL_9;
        }
      }
      else
      {
        v10 = (char *)v2;
        if ( !v8 )
        {
LABEL_9:
          if ( *v10 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v11 = &v2[v6];
          if ( v10 > &v2[v6] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v11 - v10 > 4095 )
          {
            v12 = memrchr(v10, 47, 0x1000uLL);
            v13 = v12;
            if ( !v12 )
            {
              *v4 = 36;
              return -1;
            }
            *v12 = 0;
            if ( v12 - v10 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v7 = v10;
            v14 = sub_409900(&fd, v10);
            *v13 = 47;
            if ( v14 )
              goto LABEL_20;
            v7 = "/";
            v10 = &v13[strspn(v13 + 1, "/") + 1];
          }
          if ( v11 <= v10 || (v7 = v10, !sub_409900(&fd, v10)) )
          {
            v3 = fchdir(fd);
            if ( !v3 )
            {
              sub_4098C0((unsigned int)fd, v7);
              return v3;
            }
          }
          goto LABEL_20;
        }
        v7 = "/.libs/" + 6;
        if ( !sub_409900(&fd, 4269398LL) )
        {
          v10 = (char *)&v2[v9];
          goto LABEL_9;
        }
      }
LABEL_20:
      v15 = *v4;
      sub_4098C0((unsigned int)fd, v7);
      *v4 = v15;
      return -1;
    }
  }
  return v3;
}

int __fastcall sub_408F80(__int64 a1)
{
  const char *v2; // rdi@3
  int v3; // ebx@3
  int *v4; // r12@4
  size_t v5; // rax@5
  size_t v6; // r14@5
  char *v7; // rsi@7
  size_t v8; // rax@7
  size_t v9; // rbx@7
  char *v10; // rbp@8
  const char *v11; // r13@10
  _BYTE *v12; // rax@12
  _BYTE *v13; // rbx@12
  int v14; // eax@14
  int v15; // ebx@20
  _BYTE *v16; // rax@25
  _BYTE *v17; // rbx@25
  int v18; // eax@26
  int fd; // [sp+0h] [bp-2Ch]@5

  if ( *(_DWORD *)a1 >= 0 )
    return fchdir(*(_DWORD *)a1);
  v2 = *(const char **)(a1 + 8);
  v3 = chdir(v2);
  if ( v3 )
  {
    v4 = __errno_location();
    if ( *v4 == 36 )
    {
      v5 = strlen(v2);
      fd = -100;
      v6 = v5;
      if ( !v5 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v5 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v7 = "/";
      v8 = strspn(v2, "/");
      v9 = v8;
      if ( v8 == 2 )
      {
        LODWORD(v16) = sub_40AED0(v2 + 3, 47LL, v6 - 3);
        v17 = v16;
        if ( !v16 )
          return -1;
        *v16 = 0;
        v7 = (char *)v2;
        v18 = sub_409900(&fd, v2);
        *v17 = 47;
        if ( !v18 )
        {
          v7 = "/";
          v10 = &v17[strspn(v17 + 1, "/") + 1];
          goto LABEL_9;
        }
      }
      else
      {
        v10 = (char *)v2;
        if ( !v8 )
        {
LABEL_9:
          if ( *v10 == 47 )
            __assert_fail("*dir != '/'", "lib/chdir-long.c", 0xA2u, "chdir_long");
          v11 = &v2[v6];
          if ( v10 > &v2[v6] )
            __assert_fail("dir <= dir_end", "lib/chdir-long.c", 0xA3u, "chdir_long");
          while ( v11 - v10 > 4095 )
          {
            v12 = memrchr(v10, 47, 0x1000uLL);
            v13 = v12;
            if ( !v12 )
            {
              *v4 = 36;
              return -1;
            }
            *v12 = 0;
            if ( v12 - v10 > 4095 )
              __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 0xB3u, "chdir_long");
            v7 = v10;
            v14 = sub_409900(&fd, v10);
            *v13 = 47;
            if ( v14 )
              goto LABEL_20;
            v7 = "/";
            v10 = &v13[strspn(v13 + 1, "/") + 1];
          }
          if ( v11 <= v10 || (v7 = v10, !sub_409900(&fd, v10)) )
          {
            v3 = fchdir(fd);
            if ( !v3 )
            {
              sub_4098C0((unsigned int)fd, v7);
              return v3;
            }
          }
          goto LABEL_20;
        }
        v7 = "/.libs/" + 6;
        if ( !sub_409900(&fd, 4269398LL) )
        {
          v10 = (char *)&v2[v9];
          goto LABEL_9;
        }
      }
LABEL_20:
      v15 = *v4;
      sub_4098C0((unsigned int)fd, v7);
      *v4 = v15;
      return -1;
    }
  }
  return v3;
}

void __fastcall sub_408FA0(int *a1)
{
  int *v1; // rbx@1
  int v2; // edi@1

  v1 = a1;
  v2 = *a1;
  if ( v2 >= 0 )
    close(v2);
  free(*((void **)v1 + 1));
}

int __fastcall sub_408FC0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_408FC0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_409420(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  char *v7; // r10@1
  signed int v8; // er8@1
  __int64 v9; // r9@1
  __int64 v10; // rax@2
  __int64 v11; // rax@2
  __int64 *v12; // rax@5
  __int64 v13; // rax@5
  __int64 v15[10]; // [sp+20h] [bp-88h]@2
  char v16[32]; // [sp+70h] [bp-38h]@2
  __int64 v17; // [sp+90h] [bp-18h]@1
  __int64 v18; // [sp+98h] [bp-10h]@1

  v17 = a5;
  v7 = &a7;
  v8 = 32;
  v18 = a6;
  v9 = 0LL;
  do
  {
    if ( (unsigned int)v8 <= 0x2F )
    {
      v10 = (unsigned int)v8;
      v8 += 8;
      v11 = *(_QWORD *)&v16[v10];
      v15[v9] = v11;
      if ( !v11 )
        return sub_408FC0(a1, a2, a3, a4, (__int64)v15, v9);
      goto LABEL_3;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[v9] = v13;
    if ( !v13 )
      break;
LABEL_3:
    ++v9;
  }
  while ( v9 != 10 );
  return sub_408FC0(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_409560(size_t a1)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_4097B0();
  }
  return result;
}

void *__fastcall sub_4095C0(void *a1, size_t a2)
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
        sub_4097B0();
    }
  }
  return result;
}

void *__fastcall sub_409760(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_409560(a2);
  return memcpy(v2, a1, a2);
}

void *__fastcall sub_409790(const char *a1)
{
  size_t v1; // rax@1

  v1 = strlen(a1);
  return sub_409760(a1, v1 + 1);
}

void __noreturn sub_4097B0()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 sub_4097F0()
{
  __int64 v0; // rax@1
  __int64 v1; // rbx@1

  LODWORD(v0) = sub_409BB0(0LL, 0LL);
  v1 = v0;
  if ( !v0 && *__errno_location() == 12 )
    sub_4097B0();
  return v1;
}

int sub_409820(__int64 a1, ...)
{
  va_list va; // [sp+8h] [bp-D0h]@1

  va_start(va, a1);
  return sub_40CE40(a1, va);
}

void __fastcall sub_4098C0(int a1)
{
  if ( a1 >= 0 )
  {
    if ( close(a1) )
      __assert_fail("! close_fail", "lib/chdir-long.c", 0x40u, "cdb_free");
  }
}

signed __int64 __fastcall sub_409900(int *a1, const char *a2)
{
  int v2; // eax@1
  int v3; // ebp@2
  signed __int64 result; // rax@2

  v2 = openat(*a1, a2, 67840);
  if ( v2 < 0 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v3 = v2;
    sub_4098C0(*a1);
    *a1 = v3;
    result = 0LL;
  }
  return result;
}

char *__fastcall sub_409BB0(char *a1, unsigned __int64 a2)
{
  char *v3; // rbx@7
  __dev_t v4; // r15@8
  __ino_t v5; // r14@8
  DIR *v6; // rbp@10
  int v7; // er15@10
  int *v8; // r12@10
  int v9; // eax@11
  bool v10; // r13@16
  struct dirent *v11; // rax@17
  const char *v12; // rbx@22
  signed __int64 v13; // r13@26
  size_t v14; // r14@26
  char *v15; // rdx@28
  char *v16; // rax@31
  size_t v17; // rbx@39
  char *v18; // rax@41
  signed int v19; // ebx@44
  __dev_t v20; // [sp+8h] [bp-120h]@8
  unsigned __int64 v21; // [sp+8h] [bp-120h]@30
  __dev_t v22; // [sp+10h] [bp-118h]@15
  char *ptr; // [sp+18h] [bp-110h]@3
  char *v24; // [sp+20h] [bp-108h]@1
  unsigned __int64 size; // [sp+28h] [bp-100h]@2
  bool v26; // [sp+3Fh] [bp-E9h]@9
  char *src; // [sp+40h] [bp-E8h]@9
  char *srca; // [sp+40h] [bp-E8h]@30
  __dev_t v29; // [sp+48h] [bp-E0h]@9
  __ino_t v30; // [sp+50h] [bp-D8h]@9
  __ino_t v31; // [sp+58h] [bp-D0h]@15
  struct stat stat_buf; // [sp+60h] [bp-C8h]@7

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
    || (v4 = stat_buf.st_dev, v5 = stat_buf.st_ino, v20 = stat_buf.st_dev, __lxstat(1, "/", &stat_buf) < 0) )
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
  v26 = v5 != stat_buf.st_ino || v4 != stat_buf.st_dev;
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
          if ( v22 != v20 || v11->d_ino == v5 )
          {
            v10 = v22 != v20 || v11->d_ino == v5;
            break;
          }
        }
      }
      v12 = v11->d_name;
    }
    while ( __fxstatat(1, v7, v11->d_name, &stat_buf, 256)
         || (stat_buf.st_mode & 0xF000) != 0x4000
         || stat_buf.st_dev != v20
         || stat_buf.st_ino != v5 );
    v13 = src - ptr;
    v14 = strlen(v12);
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
      v21 = (unsigned __int64)&v15[size];
      if ( __CFADD__(v15, size) || (v16 = (char *)realloc(ptr, (size_t)&v15[size])) == 0LL )
      {
        *v8 = 12;
        v19 = 12;
        goto LABEL_54;
      }
      ptr = v16;
      src = (char *)memcpy(&v16[(_QWORD)&srca[v13]], &v16[v13], size - v13);
      size = v21;
    }
    src = (char *)memcpy(&src[-v14], v12, v14) - 1;
    v5 = v31;
    *src = 47;
    v20 = v22;
  }
  while ( v29 != v22 || v30 != v31 );
  if ( closedir(v6) )
    goto LABEL_58;
  v3 = &ptr[size];
LABEL_37:
  if ( src == &ptr[size - 1] )
    *(src-- - 1) = 47;
  v17 = v3 - src;
  memmove(ptr, src, v17);
  if ( !a2 )
    v24 = (char *)realloc(ptr, v17);
  v18 = v24;
  if ( !v24 )
    v18 = ptr;
  return v18;
}

__int64 __fastcall sub_40A080(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_40A160(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_40A780(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_40A080(a2, a7);
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
        sub_40A080((__int64)v11, a7);
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
            v40 = sub_40A160(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_40A160(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_40A160(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_40AD50(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_6175E0 = dword_61739C;
  dword_6175E4 = dword_617398;
  result = sub_40A780(a1, a2, a3, a4, a5, a6, (__int64)&dword_6175E0, a7);
  dword_61739C = dword_6175E0;
  qword_617638 = qword_6175F0;
  dword_617394 = dword_6175E8;
  return result;
}

__int64 __fastcall sub_40ADD0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_40AD50(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_40AE50(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40C6F0(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

_BYTE *__fastcall sub_40AED0(_BYTE *a1, __int16 a2, unsigned __int64 a3)
{
  _BYTE *result; // rax@8
  signed __int64 v4; // r9@9
  signed __int64 v5; // rcx@16
  _BYTE *v6; // rdi@16

  if ( !a3 )
    return 0LL;
  if ( (unsigned __int8)a1 & 7 )
  {
    if ( (_BYTE)a2 == *a1 )
      return a1;
    while ( 1 )
    {
      ++a1;
      if ( !--a3 )
        return 0LL;
      if ( !((unsigned __int8)a1 & 7) )
        break;
      if ( *a1 == (_BYTE)a2 )
        return a1;
    }
  }
  v4 = ((((signed __int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 32) | ((signed __int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8);
  if ( a3 > 7 && !(((v4 ^ *(_QWORD *)a1) - 72340172838076673LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL) )
  {
    while ( 1 )
    {
      a3 -= 8LL;
      a1 += 8;
      if ( a3 <= 7 )
        break;
      if ( ((v4 ^ *(_QWORD *)a1) - 72340172838076673LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL )
        goto LABEL_15;
    }
    if ( !a3 )
      return 0LL;
  }
LABEL_15:
  if ( (_BYTE)a2 != *a1 )
  {
    v5 = (signed __int64)(a1 + 1);
    v6 = &a1[a3];
    while ( 1 )
    {
      result = (_BYTE *)v5;
      if ( (_BYTE *)v5 == v6 )
        break;
      if ( *(_BYTE *)(++v5 - 1) == (_BYTE)a2 )
        return result;
    }
    return 0LL;
  }
  return a1;
}

unsigned __int64 __fastcall sub_40AFE0(const char *a1)
{
  const char *v1; // rbx@1
  size_t v2; // rax@1
  char *v3; // rcx@1
  unsigned __int64 v4; // rdx@1
  unsigned __int64 result; // rax@1
  char v6; // di@4
  unsigned __int64 v7; // rsi@4
  char v8; // r9@6
  char v9; // r10@7
  unsigned __int8 v10; // r11@8

  v1 = a1;
  v2 = strlen(a1);
  v3 = (char *)a1;
  v4 = 0LL;
  result = v2 + 1;
  while ( 1 )
  {
    v6 = v1[v4];
    v7 = v4 + 1;
    if ( v6 != 92 )
      break;
    if ( v4 + 4 >= result )
      break;
    v8 = v1[v7];
    if ( (unsigned __int8)(v8 - 48) > 3u )
      break;
    v9 = v1[v4 + 2];
    if ( (unsigned __int8)(v9 - 48) > 7u )
      break;
    v10 = v1[v4 + 3] - 48;
    if ( v10 > 7u )
      break;
    ++v3;
    v7 = v4 + 4;
    *(v3 - 1) = v10 + 8 * (v9 + 8 * v8) + -128;
LABEL_3:
    v4 = v7;
  }
  *v3++ = v6;
  if ( result > v7 )
    goto LABEL_3;
  return result;
}

void __fastcall sub_40B070(__int64 a1)
{
  free(*(void **)a1);
  free(*(void **)(a1 + 8));
  free(*(void **)(a1 + 16));
  if ( *(_BYTE *)(a1 + 40) & 4 )
  {
    free(*(void **)(a1 + 24));
    free((void *)a1);
  }
  else
  {
    free((void *)a1);
  }
}

__int64 sub_40B0C0()
{
  FILE *v0; // rax@1
  FILE *v1; // rbp@2
  __int64 *v2; // r12@2
  const char *v3; // rax@5
  const char *v4; // r15@5
  bool v5; // r13@7
  void *v6; // rbx@7
  void *v7; // rax@7
  const char *v8; // rdi@7
  void *v9; // rax@7
  const char *v10; // rdi@7
  void *v11; // rax@7
  __int64 v12; // rdi@7
  const char *v13; // rax@7
  int v14; // edx@7
  const char *v15; // rdi@7
  const char *v16; // r15@7
  __int64 v17; // rax@7
  signed __int64 v18; // rcx@7
  const char *v19; // rsi@7
  bool v20; // cf@7
  bool v21; // zf@7
  unsigned __int64 v22; // rax@7
  char v23; // al@10
  bool v24; // cf@10
  bool v25; // zf@10
  const char *v26; // rdi@11
  signed __int64 v27; // rcx@11
  const char *v28; // rsi@11
  char v29; // al@14
  bool v30; // cf@14
  bool v31; // zf@14
  char v32; // al@15
  __int64 v33; // r13@15
  char *v34; // rax@15
  bool v35; // dl@15
  const char *v37; // rdi@21
  signed __int64 v38; // rcx@21
  const char *v39; // rsi@21
  char v40; // al@24
  bool v41; // cf@24
  bool v42; // zf@24
  const char *v43; // rdi@25
  signed __int64 v44; // rcx@25
  const char *v45; // rsi@25
  char v46; // al@28
  bool v47; // cf@28
  bool v48; // zf@28
  const char *v49; // rdi@29
  signed __int64 v50; // rcx@29
  const char *v51; // rsi@29
  char v52; // al@32
  bool v53; // cf@32
  bool v54; // zf@32
  const char *v55; // rdi@33
  signed __int64 v56; // rcx@33
  const char *v57; // rsi@33
  char v58; // al@36
  bool v59; // cf@36
  bool v60; // zf@36
  const char *v61; // rdi@37
  signed __int64 v62; // rcx@37
  const char *v63; // rsi@37
  char v64; // al@40
  bool v65; // cf@40
  bool v66; // zf@40
  _BYTE *v67; // rdi@41
  signed __int64 v68; // rcx@41
  const char *v69; // rsi@41
  char v70; // al@44
  bool v71; // cf@44
  bool v72; // zf@44
  const char *v73; // rdi@45
  signed __int64 v74; // rcx@45
  const char *v75; // rsi@45
  char v76; // al@48
  bool v77; // cf@48
  bool v78; // zf@48
  _BYTE *v79; // rdi@49
  signed __int64 v80; // rcx@49
  const char *v81; // rsi@49
  char v82; // al@52
  bool v83; // cf@52
  bool v84; // zf@52
  const char *v85; // rdi@53
  signed __int64 v86; // rcx@53
  const char *v87; // rsi@53
  bool v88; // cf@59
  bool v89; // zf@59
  const char *v90; // rsi@60
  signed __int64 v91; // rcx@60
  _BYTE *v92; // rdi@60
  FILE *v93; // rax@64
  FILE *v94; // r13@64
  struct mntent *i; // rbp@65
  char *v96; // r15@66
  void *v97; // rbx@66
  void *v98; // rax@66
  const char *v99; // rdi@66
  void *v100; // rax@66
  const char *v101; // rdi@66
  _BYTE *v102; // rax@66
  const char *v103; // rdi@66
  signed __int64 v104; // rcx@66
  bool v105; // cf@66
  bool v106; // zf@66
  _BYTE *v107; // rsi@66
  const char *v108; // rbp@66
  bool v109; // dl@66
  char v110; // al@69
  bool v111; // cf@69
  bool v112; // zf@69
  const char *v113; // rdi@70
  signed __int64 v114; // rcx@70
  const char *v115; // rsi@70
  char v116; // al@73
  bool v117; // cf@73
  bool v118; // zf@73
  const char *v119; // rdi@74
  signed __int64 v120; // rcx@74
  const char *v121; // rsi@74
  char v122; // al@77
  bool v123; // cf@77
  bool v124; // zf@77
  const char *v125; // rdi@78
  signed __int64 v126; // rcx@78
  const char *v127; // rsi@78
  char v128; // al@81
  bool v129; // cf@81
  bool v130; // zf@81
  const char *v131; // rdi@82
  signed __int64 v132; // rcx@82
  const char *v133; // rsi@82
  char v134; // al@85
  bool v135; // cf@85
  bool v136; // zf@85
  const char *v137; // rdi@86
  signed __int64 v138; // rcx@86
  const char *v139; // rsi@86
  char v140; // al@89
  bool v141; // cf@89
  bool v142; // zf@89
  const char *v143; // rdi@90
  signed __int64 v144; // rcx@90
  const char *v145; // rsi@90
  char v146; // al@93
  bool v147; // cf@93
  bool v148; // zf@93
  _BYTE *v149; // rdi@94
  signed __int64 v150; // rcx@94
  const char *v151; // rsi@94
  char v152; // al@97
  bool v153; // cf@97
  bool v154; // zf@97
  const char *v155; // rdi@98
  signed __int64 v156; // rcx@98
  const char *v157; // rsi@98
  char v158; // al@101
  bool v159; // cf@101
  bool v160; // zf@101
  _BYTE *v161; // rdi@102
  signed __int64 v162; // rcx@102
  const char *v163; // rsi@102
  char v164; // al@105
  bool v165; // cf@105
  bool v166; // zf@105
  const char *v167; // rdi@106
  signed __int64 v168; // rcx@106
  const char *v169; // rsi@106
  int v170; // eax@110
  __int64 v171; // r15@112
  const char *v172; // rdi@112
  char *v173; // rax@112
  bool v174; // dl@112
  char v175; // al@113
  int *v176; // rax@115
  int v177; // er14@115
  int *v178; // r13@115
  __int64 v179; // rdi@116
  __int64 v180; // rbx@117
  bool v181; // cf@119
  bool v182; // zf@119
  const char *v183; // rsi@120
  signed __int64 v184; // rcx@120
  _BYTE *v185; // rdi@120
  const char *v186; // rdi@125
  signed __int64 v187; // rcx@125
  const char *v188; // rsi@125
  char v189; // al@128
  bool v190; // cf@128
  bool v191; // zf@128
  const char *v192; // rdi@129
  signed __int64 v193; // rcx@129
  const char *v194; // rsi@129
  char v195; // al@132
  int *v196; // rax@134
  const char *v197; // rdi@136
  signed __int64 v198; // rcx@136
  const char *v199; // rsi@136
  char v200; // al@139
  bool v201; // cf@139
  bool v202; // zf@139
  const char *v203; // rdi@140
  signed __int64 v204; // rcx@140
  const char *v205; // rsi@140
  char v206; // al@143
  char v207; // [sp+1Fh] [bp-79h]@4
  int v208; // [sp+20h] [bp-78h]@4
  unsigned int v209; // [sp+24h] [bp-74h]@4
  int v210; // [sp+28h] [bp-70h]@4
  int v211; // [sp+2Ch] [bp-6Ch]@4
  int v212; // [sp+30h] [bp-68h]@6
  int v213; // [sp+34h] [bp-64h]@6
  int v214; // [sp+38h] [bp-60h]@6
  int v215; // [sp+3Ch] [bp-5Ch]@6
  int v216; // [sp+40h] [bp-58h]@4
  int v217; // [sp+44h] [bp-54h]@4
  __int64 v218; // [sp+48h] [bp-50h]@2
  char *lineptr; // [sp+50h] [bp-48h]@2
  size_t n; // [sp+58h] [bp-40h]@2

  v0 = fopen("/proc/self/mountinfo", "r");
  if ( v0 )
  {
    lineptr = 0LL;
    v1 = v0;
    v2 = &v218;
    n = 0LL;
    while ( __getdelim(&lineptr, &n, 10, v1) != -1 )
    {
      if ( (sscanf(lineptr, "%*u %*u %u:%u %n%*s%n %n%*s%n%c", &v208, &v209, &v216, &v217, &v210, &v211, &v207) & 0xFFFFFFFB) == 3 )
      {
        LODWORD(v3) = sub_40BD00(&lineptr[v211], " - ");
        v4 = v3;
        if ( v3 )
        {
          if ( (sscanf(v3, " - %n%*s%n %n%*s%n %c", &v212, &v213, &v214, &v215, &v207) & 0xFFFFFFFB) == 1 )
          {
            v5 = 1;
            lineptr[v217] = 0;
            lineptr[v211] = 0;
            v4[v213] = 0;
            v4[v215] = 0;
            sub_40AFE0(&v4[v214]);
            sub_40AFE0(&lineptr[v210]);
            sub_40AFE0(&lineptr[v216]);
            v6 = sub_409560(0x38uLL);
            v7 = sub_409790(&v4[v214]);
            v8 = &lineptr[v210];
            *(_QWORD *)v6 = v7;
            v9 = sub_409790(v8);
            v10 = &lineptr[v216];
            *((_QWORD *)v6 + 1) = v9;
            v11 = sub_409790(v10);
            v12 = v212;
            *((_QWORD *)v6 + 2) = v11;
            v13 = (const char *)sub_409790(&v4[v12]);
            v14 = v208;
            v15 = "autofs";
            v16 = v13;
            *((_QWORD *)v6 + 3) = v13;
            v17 = v209;
            *((_BYTE *)v6 + 40) |= 4u;
            v18 = 7LL;
            v19 = v16;
            v22 = (unsigned __int8)v17 | (unsigned __int64)((v14 << 8) & 0xFFF00) | (v17 << 12) & 0xFFFFFF00000LL;
            v20 = 0;
            v21 = v22 == 0;
            do
            {
              if ( !v18 )
                break;
              v20 = (const unsigned __int8)*v19 < *v15;
              v21 = *v19++ == *v15++;
              --v18;
            }
            while ( v21 );
            *((_QWORD *)v6 + 4) = v22;
            v23 = (!v20 && !v21) - v20;
            v24 = 0;
            v25 = v23 == 0;
            if ( v23 )
            {
              v26 = "proc";
              v27 = 5LL;
              v28 = v16;
              do
              {
                if ( !v27 )
                  break;
                v24 = (const unsigned __int8)*v28 < *v26;
                v25 = *v28++ == *v26++;
                --v27;
              }
              while ( v25 );
              v29 = (!v24 && !v25) - v24;
              v30 = 0;
              v31 = v29 == 0;
              if ( v29 )
              {
                v37 = "subfs";
                v38 = 6LL;
                v39 = v16;
                do
                {
                  if ( !v38 )
                    break;
                  v30 = (const unsigned __int8)*v39 < *v37;
                  v31 = *v39++ == *v37++;
                  --v38;
                }
                while ( v31 );
                v40 = (!v30 && !v31) - v30;
                v41 = 0;
                v42 = v40 == 0;
                if ( v40 )
                {
                  v43 = "debugfs";
                  v44 = 8LL;
                  v45 = v16;
                  do
                  {
                    if ( !v44 )
                      break;
                    v41 = (const unsigned __int8)*v45 < *v43;
                    v42 = *v45++ == *v43++;
                    --v44;
                  }
                  while ( v42 );
                  v46 = (!v41 && !v42) - v41;
                  v47 = 0;
                  v48 = v46 == 0;
                  if ( v46 )
                  {
                    v49 = "devpts";
                    v50 = 7LL;
                    v51 = v16;
                    do
                    {
                      if ( !v50 )
                        break;
                      v47 = (const unsigned __int8)*v51 < *v49;
                      v48 = *v51++ == *v49++;
                      --v50;
                    }
                    while ( v48 );
                    v52 = (!v47 && !v48) - v47;
                    v53 = 0;
                    v54 = v52 == 0;
                    if ( v52 )
                    {
                      v55 = "fusectl";
                      v56 = 8LL;
                      v57 = v16;
                      do
                      {
                        if ( !v56 )
                          break;
                        v53 = (const unsigned __int8)*v57 < *v55;
                        v54 = *v57++ == *v55++;
                        --v56;
                      }
                      while ( v54 );
                      v58 = (!v53 && !v54) - v53;
                      v59 = 0;
                      v60 = v58 == 0;
                      if ( v58 )
                      {
                        v61 = "mqueue";
                        v62 = 7LL;
                        v63 = v16;
                        do
                        {
                          if ( !v62 )
                            break;
                          v59 = (const unsigned __int8)*v63 < *v61;
                          v60 = *v63++ == *v61++;
                          --v62;
                        }
                        while ( v60 );
                        v64 = (!v59 && !v60) - v59;
                        v65 = 0;
                        v66 = v64 == 0;
                        if ( v64 )
                        {
                          v67 = &unk_4105FC;
                          v68 = 11LL;
                          v69 = v16;
                          do
                          {
                            if ( !v68 )
                              break;
                            v65 = (const unsigned __int8)*v69 < *v67;
                            v66 = *v69++ == *v67++;
                            --v68;
                          }
                          while ( v66 );
                          v70 = (!v65 && !v66) - v65;
                          v71 = 0;
                          v72 = v70 == 0;
                          if ( v70 )
                          {
                            v73 = "sysfs";
                            v74 = 6LL;
                            v75 = v16;
                            do
                            {
                              if ( !v74 )
                                break;
                              v71 = (const unsigned __int8)*v75 < *v73;
                              v72 = *v75++ == *v73++;
                              --v74;
                            }
                            while ( v72 );
                            v76 = (!v71 && !v72) - v71;
                            v77 = 0;
                            v78 = v76 == 0;
                            if ( v76 )
                            {
                              v79 = "usbdevfs" + 3;
                              v80 = 6LL;
                              v81 = v16;
                              do
                              {
                                if ( !v80 )
                                  break;
                                v77 = (const unsigned __int8)*v81 < *v79;
                                v78 = *v81++ == *v79++;
                                --v80;
                              }
                              while ( v78 );
                              v82 = (!v77 && !v78) - v77;
                              v83 = 0;
                              v84 = v82 == 0;
                              if ( v82 )
                              {
                                v85 = "kernfs";
                                v86 = 7LL;
                                v87 = v16;
                                do
                                {
                                  if ( !v86 )
                                    break;
                                  v83 = (const unsigned __int8)*v87 < *v85;
                                  v84 = *v87++ == *v85++;
                                  --v86;
                                }
                                while ( v84 );
                                if ( (!v83 && !v84) != v83 && strcmp(v16, "ignore") )
                                  v5 = strcmp(v16, "none") == 0;
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
            v32 = v5 | *((_BYTE *)v6 + 40) & 0xFE;
            v33 = *(_QWORD *)v6;
            *((_BYTE *)v6 + 40) = v32;
            v34 = strchr((const char *)v33, 58);
            v35 = 1;
            if ( !v34 )
            {
              v88 = *(_BYTE *)v33 < 0x2Fu;
              v89 = *(_BYTE *)v33 == 47;
              if ( *(_BYTE *)v33 != 47 )
                goto LABEL_148;
              v88 = *(_BYTE *)(v33 + 1) < 0x2Fu;
              v89 = *(_BYTE *)(v33 + 1) == 47;
              if ( *(_BYTE *)(v33 + 1) != 47 )
                goto LABEL_148;
              v186 = "smbfs";
              v187 = 6LL;
              v188 = v16;
              do
              {
                if ( !v187 )
                  break;
                v88 = (const unsigned __int8)*v188 < *v186;
                v89 = *v188++ == *v186++;
                --v187;
              }
              while ( v89 );
              v189 = (!v88 && !v89) - v88;
              v190 = 0;
              v191 = v189 == 0;
              if ( v189 )
              {
                v192 = "cifs";
                v193 = 5LL;
                v194 = v16;
                do
                {
                  if ( !v193 )
                    break;
                  v190 = (const unsigned __int8)*v194 < *v192;
                  v191 = *v194++ == *v192++;
                  --v193;
                }
                while ( v191 );
                v195 = (!v190 && !v191) - v190;
                v88 = 0;
                v89 = v195 == 0;
                if ( v195 )
                {
LABEL_148:
                  v90 = "-hosts";
                  v91 = 7LL;
                  v92 = (_BYTE *)v33;
                  do
                  {
                    if ( !v91 )
                      break;
                    v88 = (const unsigned __int8)*v90 < *v92;
                    v89 = *v90++ == *v92++;
                    --v91;
                  }
                  while ( v89 );
                  v35 = (!v88 && !v89) == v88;
                }
              }
            }
            *((_BYTE *)v6 + 40) = 2 * v35 | *((_BYTE *)v6 + 40) & 0xFD;
            *v2 = (__int64)v6;
            v2 = (__int64 *)((char *)v6 + 48);
          }
        }
      }
    }
    free(lineptr);
    if ( v1->_flags & 0x20 )
    {
      v196 = __errno_location();
      v177 = *v196;
      v178 = v196;
      sub_40CED0(v1);
      *v178 = v177;
      goto LABEL_116;
    }
    if ( (unsigned int)sub_40CED0(v1) != -1 )
    {
LABEL_19:
      *v2 = 0LL;
      return v218;
    }
  }
  else
  {
    v93 = setmntent("/etc/mtab", "r");
    v94 = v93;
    if ( !v93 )
      return 0LL;
    v2 = &v218;
    for ( i = getmntent(v93); i; i = getmntent(v94) )
    {
      v96 = hasmntopt(i, "bind");
      v97 = sub_409560(0x38uLL);
      v98 = sub_409790(i->mnt_fsname);
      v99 = i->mnt_dir;
      *(_QWORD *)v97 = v98;
      v100 = sub_409790(v99);
      *((_QWORD *)v97 + 2) = 0LL;
      v101 = i->mnt_type;
      *((_QWORD *)v97 + 1) = v100;
      v102 = sub_409790(v101);
      v103 = "autofs";
      v104 = 7LL;
      v105 = 0;
      v106 = (*((_BYTE *)v97 + 40) | 4) == 0;
      *((_BYTE *)v97 + 40) |= 4u;
      v107 = v102;
      v108 = v102;
      *((_QWORD *)v97 + 3) = v102;
      v109 = 1;
      do
      {
        if ( !v104 )
          break;
        v105 = *v107 < (const unsigned __int8)*v103;
        v106 = *v107++ == *v103++;
        --v104;
      }
      while ( v106 );
      v110 = (!v105 && !v106) - v105;
      v111 = 0;
      v112 = v110 == 0;
      if ( v110 )
      {
        v113 = "proc";
        v114 = 5LL;
        v115 = v108;
        do
        {
          if ( !v114 )
            break;
          v111 = (const unsigned __int8)*v115 < *v113;
          v112 = *v115++ == *v113++;
          --v114;
        }
        while ( v112 );
        v116 = (!v111 && !v112) - v111;
        v117 = 0;
        v118 = v116 == 0;
        if ( v116 )
        {
          v119 = "subfs";
          v120 = 6LL;
          v121 = v108;
          do
          {
            if ( !v120 )
              break;
            v117 = (const unsigned __int8)*v121 < *v119;
            v118 = *v121++ == *v119++;
            --v120;
          }
          while ( v118 );
          v122 = (!v117 && !v118) - v117;
          v123 = 0;
          v124 = v122 == 0;
          if ( v122 )
          {
            v125 = "debugfs";
            v126 = 8LL;
            v127 = v108;
            do
            {
              if ( !v126 )
                break;
              v123 = (const unsigned __int8)*v127 < *v125;
              v124 = *v127++ == *v125++;
              --v126;
            }
            while ( v124 );
            v128 = (!v123 && !v124) - v123;
            v129 = 0;
            v130 = v128 == 0;
            if ( v128 )
            {
              v131 = "devpts";
              v132 = 7LL;
              v133 = v108;
              do
              {
                if ( !v132 )
                  break;
                v129 = (const unsigned __int8)*v133 < *v131;
                v130 = *v133++ == *v131++;
                --v132;
              }
              while ( v130 );
              v134 = (!v129 && !v130) - v129;
              v135 = 0;
              v136 = v134 == 0;
              if ( v134 )
              {
                v137 = "fusectl";
                v138 = 8LL;
                v139 = v108;
                do
                {
                  if ( !v138 )
                    break;
                  v135 = (const unsigned __int8)*v139 < *v137;
                  v136 = *v139++ == *v137++;
                  --v138;
                }
                while ( v136 );
                v140 = (!v135 && !v136) - v135;
                v141 = 0;
                v142 = v140 == 0;
                if ( v140 )
                {
                  v143 = "mqueue";
                  v144 = 7LL;
                  v145 = v108;
                  do
                  {
                    if ( !v144 )
                      break;
                    v141 = (const unsigned __int8)*v145 < *v143;
                    v142 = *v145++ == *v143++;
                    --v144;
                  }
                  while ( v142 );
                  v146 = (!v141 && !v142) - v141;
                  v147 = 0;
                  v148 = v146 == 0;
                  if ( v146 )
                  {
                    v149 = &unk_4105FC;
                    v150 = 11LL;
                    v151 = v108;
                    do
                    {
                      if ( !v150 )
                        break;
                      v147 = (const unsigned __int8)*v151 < *v149;
                      v148 = *v151++ == *v149++;
                      --v150;
                    }
                    while ( v148 );
                    v152 = (!v147 && !v148) - v147;
                    v153 = 0;
                    v154 = v152 == 0;
                    if ( v152 )
                    {
                      v155 = "sysfs";
                      v156 = 6LL;
                      v157 = v108;
                      do
                      {
                        if ( !v156 )
                          break;
                        v153 = (const unsigned __int8)*v157 < *v155;
                        v154 = *v157++ == *v155++;
                        --v156;
                      }
                      while ( v154 );
                      v158 = (!v153 && !v154) - v153;
                      v159 = 0;
                      v160 = v158 == 0;
                      if ( v158 )
                      {
                        v161 = "usbdevfs" + 3;
                        v162 = 6LL;
                        v163 = v108;
                        do
                        {
                          if ( !v162 )
                            break;
                          v159 = (const unsigned __int8)*v163 < *v161;
                          v160 = *v163++ == *v161++;
                          --v162;
                        }
                        while ( v160 );
                        v164 = (!v159 && !v160) - v159;
                        v165 = 0;
                        v166 = v164 == 0;
                        if ( v164 )
                        {
                          v167 = "kernfs";
                          v168 = 7LL;
                          v169 = v108;
                          do
                          {
                            if ( !v168 )
                              break;
                            v165 = (const unsigned __int8)*v169 < *v167;
                            v166 = *v169++ == *v167++;
                            --v168;
                          }
                          while ( v166 );
                          if ( (!v165 && !v166) != v165 )
                          {
                            v170 = strcmp(v108, "ignore");
                            v109 = 1;
                            if ( v170 )
                              v109 = strcmp(v108, "none") == 0 && v96 == 0LL;
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
      v171 = *(_QWORD *)v97;
      v172 = *(const char **)v97;
      *((_BYTE *)v97 + 40) = v109 | *((_BYTE *)v97 + 40) & 0xFE;
      v173 = strchr(v172, 58);
      v174 = 1;
      if ( !v173 )
      {
        v181 = *(_BYTE *)v171 < 0x2Fu;
        v182 = *(_BYTE *)v171 == 47;
        if ( *(_BYTE *)v171 != 47 )
          goto LABEL_149;
        v181 = *(_BYTE *)(v171 + 1) < 0x2Fu;
        v182 = *(_BYTE *)(v171 + 1) == 47;
        if ( *(_BYTE *)(v171 + 1) != 47 )
          goto LABEL_149;
        v197 = "smbfs";
        v198 = 6LL;
        v199 = v108;
        do
        {
          if ( !v198 )
            break;
          v181 = (const unsigned __int8)*v199 < *v197;
          v182 = *v199++ == *v197++;
          --v198;
        }
        while ( v182 );
        v200 = (!v181 && !v182) - v181;
        v201 = 0;
        v202 = v200 == 0;
        if ( v200 )
        {
          v203 = "cifs";
          v204 = 5LL;
          v205 = v108;
          do
          {
            if ( !v204 )
              break;
            v201 = (const unsigned __int8)*v205 < *v203;
            v202 = *v205++ == *v203++;
            --v204;
          }
          while ( v202 );
          v206 = (!v201 && !v202) - v201;
          v181 = 0;
          v182 = v206 == 0;
          if ( v206 )
          {
LABEL_149:
            v183 = "-hosts";
            v184 = 7LL;
            v185 = (_BYTE *)v171;
            do
            {
              if ( !v184 )
                break;
              v181 = (const unsigned __int8)*v183 < *v185;
              v182 = *v183++ == *v185++;
              --v184;
            }
            while ( v182 );
            v174 = (!v181 && !v182) == v181;
          }
        }
      }
      v175 = *((_BYTE *)v97 + 40);
      *((_QWORD *)v97 + 4) = -1LL;
      *((_BYTE *)v97 + 40) = 2 * v174 | v175 & 0xFD;
      *v2 = (__int64)v97;
      v2 = (__int64 *)((char *)v97 + 48);
    }
    if ( endmntent(v94) )
      goto LABEL_19;
  }
  v176 = __errno_location();
  v177 = *v176;
  v178 = v176;
LABEL_116:
  *v2 = 0LL;
  v179 = v218;
  if ( v218 )
  {
    do
    {
      v180 = *(_QWORD *)(v179 + 48);
      sub_40B070(v179);
      v218 = v180;
      v179 = v180;
    }
    while ( v180 );
  }
  *v178 = v177;
  return 0LL;
}

unsigned __int64 __fastcall sub_40B880(__int64 a1, unsigned __int64 a2, signed __int64 *a3)
{
  signed __int64 v3; // r11@1
  signed __int64 v4; // r8@1
  unsigned __int64 v5; // r9@1
  signed __int64 v6; // rax@1
  unsigned __int64 v7; // rcx@2
  unsigned __int8 v8; // bl@3
  unsigned __int64 v9; // r11@4
  signed __int64 v10; // rbx@5
  signed __int64 v11; // r8@5
  unsigned __int64 v12; // r9@5
  signed __int64 v13; // r10@5
  unsigned __int64 v14; // rcx@6
  unsigned __int8 v15; // r11@7
  unsigned __int64 v16; // rbx@8
  unsigned __int64 v17; // r10@9
  unsigned __int64 result; // rax@9

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
    result = v17;
  }
  return result;
}

signed __int64 __fastcall sub_40B9B0(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char *v4; // r12@1
  unsigned __int64 v5; // rbp@1
  unsigned __int64 v6; // rbx@1
  unsigned __int64 v7; // r13@2
  char *v8; // rax@3
  char *v9; // rsi@5
  char *v10; // rax@6
  __int64 v11; // rdx@7
  signed __int64 v12; // rcx@7
  unsigned __int64 v13; // r14@9
  unsigned __int64 v14; // rax@9
  __int64 v15; // r9@11
  _BYTE *v16; // rax@14
  signed __int64 v17; // r9@15
  __int64 v18; // rax@16
  signed __int64 v19; // rdx@17
  signed __int64 v20; // rax@22
  signed __int64 v22; // r10@33
  unsigned __int64 v23; // r11@33
  __int64 v24; // r14@33
  unsigned __int64 v25; // rax@36
  unsigned __int64 v26; // rax@42
  unsigned __int64 v27; // rax@49
  unsigned __int64 v28; // [sp+8h] [bp-880h]@14
  unsigned __int64 v29; // [sp+8h] [bp-880h]@39
  signed __int64 v30; // [sp+10h] [bp-878h]@14
  unsigned __int64 v31; // [sp+10h] [bp-878h]@39
  unsigned __int64 v32; // [sp+18h] [bp-870h]@39
  unsigned __int64 v33; // [sp+20h] [bp-868h]@2
  signed __int64 v34; // [sp+20h] [bp-868h]@11
  unsigned __int64 v35; // [sp+48h] [bp-840h]@2
  __int64 v36[256]; // [sp+50h] [bp-838h]@3
  char v37; // [sp+850h] [bp-38h]@4

  v4 = (char *)a3;
  v5 = a2;
  v6 = a4;
  if ( a4 <= 2 )
  {
    v35 = 1LL;
    v7 = a4 - 1;
    v33 = 1LL;
  }
  else
  {
    v7 = sub_40B880(a3, a4, (signed __int64 *)&v35);
    v33 = v35;
  }
  v8 = (char *)v36;
  do
  {
    *(_QWORD *)v8 = v6;
    v8 += 8;
  }
  while ( &v37 != v8 );
  v9 = &v4[v33];
  if ( v6 )
  {
    v10 = v4;
    do
    {
      v11 = (unsigned __int8)*v10;
      v12 = &v4[v6 - 1] - v10++;
      v36[v11] = v12;
    }
    while ( &v4[v6] != v10 );
    if ( memcmp(v4, v9, v7) )
      goto LABEL_9;
    v22 = v6 - 1;
    v23 = 0LL;
    v24 = 0LL;
    while ( 1 )
    {
      v32 = v22;
      v31 = v23;
      v29 = v24 + v6;
      if ( sub_40AED0((_BYTE *)(a1 + v5), 0, v24 + v6 - v5) )
        break;
      v22 = v32;
      if ( !v29 )
        break;
      v25 = v36[(unsigned __int64)*(_BYTE *)(a1 + v29 - 1)];
      if ( v25 )
      {
        if ( v25 < v33 && v31 )
          v25 = v6 - v33;
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
LABEL_49:
          v27 = v7 - 1;
          if ( v31 < v7 && *(_BYTE *)(a1 + v24 + v7 - 1) == v4[v7 - 1] )
          {
            while ( v31 != v27 && v4[v27 - 1] == *(_BYTE *)(v27 + a1 + v24 - 1) )
              --v27;
          }
          else
          {
            v27 = v7;
          }
          if ( v31 + 1 > v27 )
            return a1 + v24;
          v24 += v33;
          v23 = v6 - v33;
        }
        else
        {
          while ( v4[v26] == *(_BYTE *)(a1 + v24 + v26) )
          {
            if ( ++v26 == v32 )
              goto LABEL_49;
          }
          v23 = 0LL;
          v24 += v26 + 1 - v7;
        }
      }
      v5 = v29;
    }
  }
  else if ( memcmp(v4, v9, v7) )
  {
LABEL_9:
    v13 = v6 - 1;
    v14 = v6 - v7;
    if ( v6 - v7 < v7 )
      v14 = v7;
    v15 = 0LL;
    v34 = v14 + 1;
    v35 = v14 + 1;
    while ( 1 )
    {
      v30 = v15;
      v28 = v15 + v6;
      v16 = sub_40AED0((_BYTE *)(a1 + v5), 0, v15 + v6 - v5);
      if ( !v28 )
        return 0LL;
      v17 = v30;
      if ( v16 )
        return 0LL;
      v18 = v36[(unsigned __int64)*(_BYTE *)(a1 + v28 - 1)];
      if ( v18 )
        goto LABEL_12;
      v19 = a1 + v30;
      if ( v7 < v13 )
      {
        v18 = v7;
        if ( *(_BYTE *)(v19 + v7) != v4[v7] )
        {
LABEL_28:
          v17 = 1 - v7 + v30;
LABEL_12:
          v15 = v18 + v17;
          goto LABEL_13;
        }
        while ( ++v18 < v13 )
        {
          if ( v4[v18] != *(_BYTE *)(v19 + v18) )
            goto LABEL_28;
        }
      }
      v20 = v7 - 1;
      if ( !v7 )
        return a1 + v30;
      if ( *(_BYTE *)(v19 + v20) == v4[v7 - 1] )
      {
        while ( --v20 != -1 )
        {
          if ( v4[v20] != *(_BYTE *)(v19 + v20) )
            goto LABEL_32;
        }
        return a1 + v30;
      }
LABEL_32:
      v15 = v34 + v30;
LABEL_13:
      v5 = v28;
    }
  }
  return 0LL;
}

signed __int64 __fastcall sub_40BD00(__int64 a1, char *a2)
{
  char v2; // al@1
  char v3; // r9@1
  char *v4; // rbx@3
  char *v5; // rdx@3
  char v6; // cl@3
  char v7; // r8@3
  bool v8; // al@5
  char *v9; // r12@6
  unsigned __int64 v10; // rbp@8
  char *v11; // rax@8
  char *v12; // rbx@10
  unsigned __int64 v13; // r8@10
  unsigned __int64 v15; // ST08_8@16
  unsigned __int64 v16; // rax@16
  size_t v17; // r15@16
  unsigned __int64 v18; // ST08_8@17
  int v19; // eax@17
  unsigned __int64 v20; // r8@17
  size_t v21; // r13@18
  __int64 v22; // r14@18
  _BYTE *v23; // rax@19
  unsigned __int64 v24; // rax@21
  unsigned __int64 v25; // rax@28
  size_t v26; // rax@39
  __int64 v27; // r14@41
  unsigned __int64 v28; // r13@42
  _BYTE *v29; // rax@42
  char *v30; // rdx@44
  size_t v31; // rax@45
  signed __int64 v32; // rax@49
  unsigned __int64 v33; // [sp+8h] [bp-70h]@19
  signed __int64 v34; // [sp+18h] [bp-60h]@16
  signed __int64 v35; // [sp+18h] [bp-60h]@41
  __int64 v36; // [sp+38h] [bp-40h]@16

  v2 = *(_BYTE *)a1;
  v3 = *a2;
  if ( !*(_BYTE *)a1 )
  {
    v9 = 0LL;
    if ( !v3 )
      v9 = (char *)a1;
    return (signed __int64)v9;
  }
  if ( !v3 )
    return a1;
  v4 = a2;
  v5 = (char *)a1;
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
    return (signed __int64)v9;
LABEL_7:
  v9 = (char *)a1;
  if ( v7 )
    return (signed __int64)v9;
  v10 = v4 - a2;
  v11 = strchr((const char *)(a1 + 1), v3);
  v9 = v11;
  if ( !v11 || v10 == 1 )
    return (signed __int64)v9;
  v12 = &v4[-v10];
  v13 = a1 + v10 - (_QWORD)v11;
  if ( a1 + v10 < (unsigned __int64)v11 )
    v13 = 1LL;
  if ( v10 > 0x1F )
    return sub_40B9B0((__int64)v11, v13, (__int64)v12, v10);
  if ( v10 <= 2 )
  {
    v36 = 1LL;
    v17 = v10 - 1;
    v34 = 1LL;
  }
  else
  {
    v15 = v13;
    v16 = sub_40B880((__int64)v12, v10, &v36);
    v13 = v15;
    v17 = v16;
    v34 = v36;
  }
  v18 = v13;
  v19 = memcmp(v12, &v12[v34], v17);
  v20 = v18;
  if ( !v19 )
  {
    v21 = 0LL;
    v22 = 0LL;
    while ( 1 )
    {
      v33 = v10 + v22;
      v23 = sub_40AED0(&v9[v20], 0, v10 + v22 - v20);
      if ( !(v10 + v22) || v23 )
        return 0LL;
      v24 = v21;
      if ( v17 >= v21 )
        v24 = v17;
      if ( v10 > v24 )
      {
        if ( *(&v9[v24] + v22) != v12[v24] )
        {
LABEL_37:
          v21 = 0LL;
          v22 += v24 + 1 - v17;
          goto LABEL_36;
        }
        while ( v10 != ++v24 )
        {
          if ( v12[v24] != *(&v9[v22] + v24) )
            goto LABEL_37;
        }
      }
      v25 = v17 - 1;
      if ( v17 > v21 && v12[v17 - 1] == *(&v9[v22 - 1] + v17) )
      {
        while ( v21 != v25 && v12[v25 - 1] == *(&v9[v25 - 1] + v22) )
          --v25;
      }
      else
      {
        v25 = v17;
      }
      if ( v21 + 1 > v25 )
      {
        v9 += v22;
        return (signed __int64)v9;
      }
      v21 = v10 - v34;
      v22 += v34;
LABEL_36:
      v20 = v33;
    }
  }
  v26 = v10 - v17;
  if ( v10 - v17 < v17 )
    v26 = v17;
  v27 = 0LL;
  v35 = v26 + 1;
  v36 = v26 + 1;
  while ( 1 )
  {
    v28 = v10 + v27;
    v29 = sub_40AED0(&v9[v20], 0, v10 + v27 - v20);
    if ( !(v10 + v27) || v29 )
      return 0LL;
    v30 = &v9[v27];
    if ( v10 > v17 )
    {
      v31 = v17;
      v30 = &v9[v27];
      if ( *(&v9[v17] + v27) != v12[v17] )
      {
LABEL_55:
        v27 += v31 + 1 - v17;
        goto LABEL_56;
      }
      while ( v10 > ++v31 )
      {
        if ( v12[v31] != v30[v31] )
          goto LABEL_55;
      }
    }
    v32 = v17 - 1;
    if ( !v17 )
      return (signed __int64)v30;
    if ( v30[v32] == v12[v17 - 1] )
      break;
LABEL_57:
    v27 += v35;
LABEL_56:
    v20 = v28;
  }
  while ( --v32 != -1 )
  {
    if ( v12[v32] != v30[v32] )
      goto LABEL_57;
  }
  return (signed __int64)v30;
}

__int64 __fastcall sub_40C0A0(__int64 a1)
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

void __fastcall sub_40C0F0(void *a1)
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

__int64 __fastcall sub_40C120(void *a1)
{
  int *v1; // rbx@1
  int v2; // er13@1
  unsigned int v3; // ebp@1

  v1 = __errno_location();
  v2 = *v1;
  v3 = sub_40C0A0((__int64)a1);
  if ( !(_BYTE)v3 )
    v2 = *v1;
  sub_40C0F0(a1);
  *v1 = v2;
  return v3;
}

_BYTE *__fastcall sub_40C170(void *src)
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

signed __int64 __fastcall sub_40C200(__int64 a1, unsigned __int64 a2)
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
          v10 = sub_40C170((void *)v2);
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

signed __int64 __fastcall sub_40C380(__int64 a1)
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
  v3 = sub_40C170(v2);
  if ( v3 && !(unsigned __int8)sub_40C0A0(a1) )
  {
    v5 = __errno_location();
    v6 = *v5;
    if ( v3 != (_BYTE *)1 )
      sub_40C0F0(v3);
    *v5 = v6;
    result = 0LL;
  }
  else
  {
    result = (signed __int64)v3;
  }
  return result;
}

struct tm *__fastcall sub_40C450(__int64 a1, const time_t *a2, struct tm *a3)
{
  struct tm *v3; // rbx@2
  void *v4; // r13@2
  struct tm *result; // rax@6

  if ( a1 )
  {
    v3 = a3;
    v4 = (void *)sub_40C380(a1);
    if ( v4 )
    {
      if ( localtime_r(a2, v3) && (unsigned __int8)sub_40C200(a1, (unsigned __int64)v3) )
      {
        if ( v4 == (void *)1 || (unsigned __int8)sub_40C120(v4) )
          return v3;
      }
      else if ( v4 != (void *)1 )
      {
        sub_40C120(v4);
      }
    }
    result = 0LL;
  }
  else
  {
    result = gmtime_r(a2, a3);
  }
  return result;
}

int __fastcall sub_40C500(__int64 a1, unsigned __int64 a2)
{
  void *v2; // r12@2
  time_t v3; // rax@3
  int result; // eax@8
  int v5; // eax@11
  time_t timer; // [sp+8h] [bp-60h]@3
  struct tm tp; // [sp+10h] [bp-58h]@10

  if ( a1 )
  {
    v2 = (void *)sub_40C380(a1);
    if ( !v2 )
      goto LABEL_20;
    LODWORD(v3) = sub_40D6B0(a2);
    timer = v3;
    if ( v3 != -1
      || localtime_r(&timer, &tp)
      && ((v5 = *(_DWORD *)(a2 + 32), (v5 == 0) == (tp.tm_isdst == 0)) || v5 < 0 || tp.tm_isdst < 0)
      && !(tp.tm_sec ^ *(_DWORD *)a2 | tp.tm_min ^ *(_DWORD *)(a2 + 4) | tp.tm_hour ^ *(_DWORD *)(a2 + 8) | tp.tm_mday ^ *(_DWORD *)(a2 + 12) | tp.tm_year ^ *(_DWORD *)(a2 + 20) | tp.tm_mon ^ *(_DWORD *)(a2 + 16)) )
    {
      if ( !(unsigned __int8)sub_40C200(a1, a2) )
        timer = -1LL;
    }
    if ( v2 == (void *)1 || (unsigned __int8)sub_40C120(v2) )
      result = timer;
    else
LABEL_20:
      result = -1;
  }
  else
  {
    result = sub_40C620(a2);
  }
  return result;
}

__int64 __fastcall sub_40C620(__int64 a1)
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
  v10 = (unsigned __int16)word_413900[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_617618;
  v12 = sub_40CFF0(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40D1B0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40D110(v6);
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
        sub_40D1B0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40D110(v6);
          sub_40D1B0(gmtime_r, &v38, &v40);
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
  *(_QWORD *)&dword_617618 = result - (v34 + v36);
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

__int64 __fastcall sub_40C620(__int64 a1)
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
  v10 = (unsigned __int16)word_413900[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_617618;
  v12 = sub_40CFF0(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40D1B0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40D110(v6);
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
        sub_40D1B0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40D110(v6);
          sub_40D1B0(gmtime_r, &v38, &v40);
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
  *(_QWORD *)&dword_617618 = result - (v34 + v36);
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

__int64 __fastcall sub_40C620(__int64 a1)
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
  v10 = (unsigned __int16)word_413900[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_617618;
  v12 = sub_40CFF0(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40D1B0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40D110(v6);
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
        sub_40D1B0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40D110(v6);
          sub_40D1B0(gmtime_r, &v38, &v40);
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
  *(_QWORD *)&dword_617618 = result - (v34 + v36);
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

__int64 __fastcall sub_40C620(__int64 a1)
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
  v10 = (unsigned __int16)word_413900[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_617618;
  v12 = sub_40CFF0(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40D1B0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40D110(v6);
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
        sub_40D1B0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40D110(v6);
          sub_40D1B0(gmtime_r, &v38, &v40);
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
  *(_QWORD *)&dword_617618 = result - (v34 + v36);
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

__int64 __fastcall sub_40C620(__int64 a1)
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
  v10 = (unsigned __int16)word_413900[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_617618;
  v12 = sub_40CFF0(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40D1B0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40D110(v6);
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
        sub_40D1B0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40D110(v6);
          sub_40D1B0(gmtime_r, &v38, &v40);
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
  *(_QWORD *)&dword_617618 = result - (v34 + v36);
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

__int64 __fastcall sub_40C620(__int64 a1)
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
  v10 = (unsigned __int16)word_413900[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_617618;
  v12 = sub_40CFF0(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40D1B0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40D110(v6);
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
        sub_40D1B0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40D110(v6);
          sub_40D1B0(gmtime_r, &v38, &v40);
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
  *(_QWORD *)&dword_617618 = result - (v34 + v36);
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

__int64 __fastcall sub_40C620(__int64 a1)
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
  v10 = (unsigned __int16)word_413900[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_617618;
  v12 = sub_40CFF0(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40D1B0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40D110(v6);
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
        sub_40D1B0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40D110(v6);
          sub_40D1B0(gmtime_r, &v38, &v40);
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
  *(_QWORD *)&dword_617618 = result - (v34 + v36);
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

__int64 __fastcall sub_40C620(__int64 a1)
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
  v10 = (unsigned __int16)word_413900[13LL * v5 + ((v4 % 12 >> 31) & 0xC) + v4 % 12] - 1 + v2;
  if ( v35 <= 59 )
    v8 = v35;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  v32 = v11;
  v36 = -dword_617618;
  v12 = sub_40CFF0(v6, v10, v31, v30, v11, 70, 0);
  v34 = v12;
  v38 = v12;
  v37 = v1;
  v13 = 0;
  v14 = v12;
  while ( 1 )
  {
    sub_40D1B0(gmtime_r, &v38, &v40);
    v15 = v38;
    result = sub_40D110(v6);
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
        sub_40D1B0(gmtime_r, &v39, &v44);
        if ( (v33 == 0) == (v45 == 0) || v45 < 0 )
        {
          v38 = sub_40D110(v6);
          sub_40D1B0(gmtime_r, &v38, &v40);
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
  *(_QWORD *)&dword_617618 = result - (v34 + v36);
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

__int64 __fastcall sub_40C640(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  __int64 result; // rax@1

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_40CED0(stream);
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

__int64 __fastcall sub_40C6A0(const char *a1, char a2, __int64 a3)
{
  __int64 v3; // rdx@1
  int v4; // eax@3
  __int64 v6; // [sp+30h] [bp-28h]@1

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = (unsigned int)v6;
  v4 = open(a1, a2, v3);
  return sub_40CCC0(v4);
}

bool __fastcall sub_40C6F0(int a1)
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

const char *sub_40C750()
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
  v1 = qword_617620;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_617620 )
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
          qword_617620 = v1;
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
                sub_40CED0(v61);
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
            sub_40CED0(v40);
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

__int64 __fastcall sub_40CCC0(int fd)
{
  __int64 result; // rax@2
  int v2; // er12@3
  int *v3; // rax@3
  int v4; // er13@3
  int *v5; // rbp@3

  if ( (unsigned int)fd <= 2 )
  {
    v2 = sub_40D730();
    v3 = __errno_location();
    v4 = *v3;
    v5 = v3;
    close(fd);
    result = (unsigned int)v2;
    *v5 = v4;
  }
  else
  {
    result = (unsigned int)fd;
  }
  return result;
}

char *__fastcall sub_40CD10(__int64 a1, const __m128i *a2)
{
  __int64 v2; // r15@1
  __int64 v3; // r13@2
  __int64 v4; // rbp@2
  unsigned __int64 v5; // rbx@2
  const char **v6; // rdx@3
  size_t v7; // rax@4
  unsigned __int8 v8; // cf@4
  __int32 v9; // eax@7
  char *v10; // rbp@10
  char *v11; // rbx@10
  const char **v12; // rdx@11
  const char *v13; // r15@12
  size_t v14; // r14@12
  unsigned int v15; // eax@13
  __m128i v17; // [sp+8h] [bp-50h]@1

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
        v6 = (const char **)(v2 + (unsigned int)v9);
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
    v10 = (char *)sub_409560(v5 + 1);
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
    v11 = (char *)sub_409560(1uLL);
    v10 = v11;
  }
  *v11 = 0;
  return v10;
}

char *__fastcall sub_40CE40(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rax@4
  char v3; // cl@7
  char *result; // rax@8
  char *v5; // [sp+8h] [bp-10h]@9

  if ( !*(_BYTE *)a1 )
  {
    v2 = 0LL;
    return sub_40CD10(v2, a2);
  }
  if ( *(_BYTE *)a1 == 37 && *(_BYTE *)(a1 + 1) == 115 )
  {
    v2 = 0LL;
    do
    {
      v3 = *(_BYTE *)(a1 + 2 * ++v2);
      if ( !v3 )
        return sub_40CD10(v2, a2);
    }
    while ( v3 == 37 && *(_BYTE *)(a1 + 2 * v2 + 1) == 115 );
  }
  if ( sub_40D6D0(&v5, a1, a2) < 0 )
  {
    if ( *__errno_location() == 12 )
      sub_4097B0();
    result = 0LL;
  }
  else
  {
    result = v5;
  }
  return result;
}

int __fastcall sub_40CED0(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_40CF50(stream) )
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

int __fastcall sub_40CF50(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_40CF90(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_40CF90(FILE *a1, __off_t a2, int a3)
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

signed __int64 __fastcall sub_40CFF0(signed __int64 a1, __int64 a2, int a3, int a4, int a5, signed int a6, int a7, int a8, int a9, int a10)
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

signed __int64 __fastcall sub_40D110(signed __int64 a1, __int64 a2, int a3, int a4, int a5, signed __int64 a6, __int64 a7)
{
  signed __int64 v7; // rbx@1
  signed __int64 v8; // rax@2
  unsigned __int8 v9; // of@2
  signed __int64 result; // rax@2

  v7 = a6;
  if ( !a7
    || (v8 = sub_40CFF0(
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

int __fastcall sub_40D1B0(int (__fastcall *a1)(__int64 *, __int64), __int64 *a2, __int64 a3)
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

void sub_40D6B0()
{
  tzset();
  JUMPOUT(&loc_40D270);
}

signed __int64 __fastcall sub_40D6D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *v3; // rax@1
  unsigned int v4; // edx@2
  signed __int64 result; // rax@3
  unsigned __int64 v6; // [sp+8h] [bp-10h]@1

  LODWORD(v3) = sub_40D880(0LL, &v6, a2, a3);
  if ( v3 )
  {
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
  }
  else
  {
    result = 0xFFFFFFFFLL;
  }
  return result;
}

__int64 __fastcall sub_40D730(char a1)
{
  return sub_40D740(a1);
}

__int64 __fastcall sub_40D740(char a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx@3
  int v6; // eax@8
  int *v7; // rax@10
  int v8; // edi@10
  int v9; // er12@10
  int *v10; // rbp@10
  __int64 v11; // [sp+30h] [bp-38h]@1
  __int64 v12; // [sp+38h] [bp-30h]@1

  v11 = a3;
  v12 = a4;
  if ( a2 == 1030 )
  {
    if ( dword_617630 < 0 )
    {
      v4 = sub_40D740(a1);
      if ( v4 >= 0 && dword_617630 == -1 )
      {
LABEL_8:
        v6 = fcntl((unsigned __int8)v4, 1);
        if ( v6 < 0 || fcntl((unsigned __int8)v4, 2, v6 | 1u) == -1 )
        {
          v7 = __errno_location();
          v8 = v4;
          v4 = -1;
          v9 = *v7;
          v10 = v7;
          close(v8);
          *v10 = v9;
        }
        return (unsigned int)v4;
      }
    }
    else
    {
      v4 = fcntl(a1, 1030, (unsigned int)v11);
      if ( v4 >= 0 || *__errno_location() != 22 )
      {
        dword_617630 = 1;
      }
      else
      {
        v4 = sub_40D740(a1);
        if ( v4 >= 0 )
        {
          dword_617630 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

char *__fastcall sub_40D880(void *a1, size_t *a2, _BYTE *a3, __int64 a4)
{
  _BYTE *v4; // r15@1
  __int64 v5; // rbx@1
  __int64 v6; // rax@3
  unsigned __int64 v7; // rax@5
  size_t v8; // rdi@6
  void *v9; // rax@9
  size_t v10; // r12@11
  void *v11; // r14@13
  _BYTE *v12; // r8@13
  char *v13; // rbx@13
  size_t v14; // r15@13
  _BYTE *v15; // rcx@13
  char *v16; // rcx@14
  unsigned __int64 v17; // rax@14
  size_t v18; // r13@14
  bool v19; // dl@18
  void *v20; // rax@19
  char *v21; // rax@22
  void *v22; // rsp@23
  char *v23; // rax@30
  char v24; // r15@34
  __int64 v25; // rax@34
  char *v26; // r8@36
  char *v27; // rdx@36
  int v28; // eax@36
  char v29; // al@37
  int v30; // eax@40
  _BYTE *v31; // r15@40
  __int64 v32; // rdi@41
  _BYTE *v33; // rsi@54
  _BYTE *v34; // rdx@54
  _BYTE *v35; // rsi@56
  _BYTE *v36; // rdx@56
  signed __int64 v37; // rax@59
  char v38; // al@62
  __int64 v39; // rax@62
  signed __int64 v40; // rax@63
  __int64 v41; // rax@65
  signed __int64 v42; // r8@66
  __int64 v43; // rax@67
  unsigned __int64 v44; // rax@68
  char *v45; // r11@75
  int *v46; // rax@76
  char *v47; // r11@76
  unsigned __int64 v48; // rbx@77
  unsigned __int64 v49; // r10@81
  _BYTE *v50; // rdx@82
  _BYTE *v51; // rcx@82
  __int64 v52; // rsi@83
  char *v53; // r8@84
  unsigned __int64 v54; // rdx@85
  unsigned __int64 v55; // rcx@87
  char *v56; // r15@88
  char *result; // rax@98
  unsigned __int64 v58; // rax@100
  char *v59; // rax@107
  __int16 v61; // fps@117
  _BYTE *v65; // rdx@118
  _BYTE *v66; // rdi@118
  int v67; // er11@118
  __int64 v68; // rcx@119
  char *v69; // rcx@120
  char *v70; // rdi@128
  int *v71; // r9@128
  int v72; // eax@130
  int v73; // edx@131
  __int64 v74; // rax@138
  unsigned __int8 v75; // cf@138
  unsigned __int64 v76; // rax@138
  bool v77; // bl@144
  char *v78; // rax@146
  __int64 v79; // r9@148
  signed int v80; // ebx@154
  __int64 v81; // rax@167
  long double v82; // fst7@167
  __int64 v83; // rax@171
  char *v84; // rdi@171
  __int128 v85; // xmm0@171
  unsigned __int64 v86; // rax@188
  void *v87; // rax@190
  char *v88; // rax@193
  char *v89; // rcx@193
  int v90; // er8@194
  unsigned __int64 v91; // r15@195
  void *v92; // rax@201
  char *v93; // rax@216
  void *v94; // rax@222
  char v95; // al@254
  unsigned __int64 v96; // r9@257
  size_t v97; // r8@258
  unsigned __int64 v98; // r10@259
  unsigned __int64 v99; // rdi@259
  signed __int64 v100; // rax@263
  unsigned __int64 v101; // r10@266
  unsigned __int64 v102; // rax@269
  char *v103; // rax@277
  signed __int64 v104; // rsi@286
  char v105; // al@287
  size_t v106; // r15@292
  size_t v107; // r14@292
  bool v108; // r13@297
  char *v109; // rax@299
  char *v110; // rax@303
  signed __int64 v111; // rax@316
  unsigned __int64 v112; // r10@320
  void *v113; // rax@323
  char *v114; // rax@326
  __int16 v115; // ST34_2@330
  char *v116; // rax@330
  __int64 v117; // rsi@330
  __int64 v118; // rdx@330
  char v119; // al@330
  signed __int64 v120; // rdx@333
  unsigned __int64 v121; // rax@333
  char *v122; // rax@340
  __int64 v123; // rdx@340
  char v124; // al@340
  unsigned __int64 v125; // rax@343
  signed __int64 v126; // rsi@348
  signed __int64 v127; // r9@348
  __int64 v128; // rdx@348
  signed __int64 v129; // rax@354
  _BYTE *v130; // rsi@355
  _BYTE *v131; // rdi@357
  __int64 v132; // rax@357
  signed __int64 v133; // rsi@357
  unsigned __int64 v134; // rax@359
  char v135; // al@371
  signed __int64 v136; // rsi@372
  char v137; // al@373
  char *v138; // rax@374
  __int64 v139; // rdx@374
  char v140; // al@374
  signed __int64 v141; // rax@377
  void *v142; // rax@381
  __int16 v143; // ST34_2@389
  char *v144; // rax@389
  char *v145; // rdx@389
  char v146; // al@389
  char *v147; // rax@392
  char *v148; // rax@397
  char v149; // al@397
  unsigned __int64 v150; // [sp+28h] [bp-6E8h]@23
  char *v151; // [sp+30h] [bp-6E0h]@76
  void *ptr; // [sp+38h] [bp-6D8h]@10
  size_t *v153; // [sp+40h] [bp-6D0h]@1
  void *v154; // [sp+48h] [bp-6C8h]@128
  char *v155; // [sp+50h] [bp-6C0h]@76
  __int64 v156; // [sp+58h] [bp-6B8h]@13
  _BYTE *v157; // [sp+60h] [bp-6B0h]@19
  unsigned __int64 v158; // [sp+68h] [bp-6A8h]@9
  long double v159; // [sp+70h] [bp-6A0h]@19
  void *v160; // [sp+80h] [bp-690h]@19
  void *src; // [sp+88h] [bp-688h]@1
  int v162; // [sp+94h] [bp-67Ch]@77
  unsigned int v163; // [sp+98h] [bp-678h]@64
  char v164; // [sp+A0h] [bp-670h]@1
  void *v165; // [sp+A8h] [bp-668h]@36
  __int64 v166; // [sp+B0h] [bp-660h]@95
  __int64 v167; // [sp+190h] [bp-580h]@1
  void *v168; // [sp+198h] [bp-578h]@13
  __int64 v169; // [sp+1A0h] [bp-570h]@3
  __int64 v170; // [sp+1A8h] [bp-568h]@5
  __int64 v171; // [sp+1B0h] [bp-560h]@93
  char v172; // [sp+420h] [bp-2F0h]@252

  v4 = a3;
  v5 = a4;
  src = a1;
  v153 = a2;
  if ( sub_40F5C0(a3, &v167, &v164) < 0 )
    return 0LL;
  if ( sub_40F3A0(v5, &v164) < 0 )
  {
    if ( v168 != &v171 )
      free(v168);
    if ( v165 != &v166 )
      free(v165);
    v13 = 0LL;
    *__errno_location() = 22;
    return v13;
  }
  v6 = v169 + 7;
  if ( (unsigned __int64)(v169 + 7) <= 6 )
    v6 = -1LL;
  v75 = __CFADD__(v170, v6);
  v7 = v170 + v6;
  if ( v75 )
    goto LABEL_112;
  v8 = v7 + 6;
  if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
    goto LABEL_112;
  if ( v8 <= 0xF9F )
  {
    ptr = 0LL;
    v22 = alloca(v7 + 14);
    v158 = ((unsigned __int64)&v150 + 7) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    if ( v8 == -1LL )
      goto LABEL_112;
    v9 = malloc(v8);
    v158 = (unsigned __int64)v9;
    if ( !v9 )
      goto LABEL_112;
    ptr = v9;
  }
  v10 = 0LL;
  if ( src )
    v10 = *v153;
  v11 = v168;
  v12 = v4;
  v13 = (char *)src;
  v156 = 0LL;
  v14 = 0LL;
  v15 = *(_BYTE **)v168;
  if ( *(_BYTE **)v168 == v12 )
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
        v157 = v12;
        LOBYTE(v159) = v19;
        v160 = v16;
        v20 = malloc(v10);
        v16 = (char *)v160;
        v12 = v157;
        if ( !v20 )
          goto LABEL_88;
        if ( v14 && LOBYTE(v159) )
        {
          *(_QWORD *)&v159 = v157;
          v21 = (char *)memcpy(v20, v13, v14);
          v16 = (char *)v160;
          v12 = *(_BYTE **)&v159;
          v13 = v21;
        }
        else
        {
          v13 = (char *)v20;
        }
        goto LABEL_32;
      }
LABEL_29:
      if ( !v19 )
      {
        *(_QWORD *)&v159 = v12;
        v160 = v16;
        v23 = (char *)realloc(v13, v10);
        if ( !v23 )
          goto LABEL_126;
        v16 = (char *)v160;
        v12 = *(_BYTE **)&v159;
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
  while ( v167 != v156 )
  {
    v24 = *((_BYTE *)v11 + 72);
    v25 = *((_QWORD *)v11 + 10);
    if ( v24 == 37 )
    {
      if ( v25 != -1 )
        goto LABEL_198;
      v58 = v18 + 1;
      v14 = v18 + 1;
      if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
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
          if ( v58 == -1LL )
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
          *(_QWORD *)&v159 = __errno_location();
          goto LABEL_127;
        }
        LOBYTE(v160) = v13 == src;
        v94 = malloc(v10);
        if ( !v94 )
          goto LABEL_88;
        if ( v18 && (_BYTE)v160 )
          v13 = (char *)memcpy(v94, v13, v18);
        else
          v13 = (char *)v94;
      }
LABEL_109:
      v13[v18] = 37;
      goto LABEL_110;
    }
    if ( v25 == -1 )
      goto LABEL_198;
    v26 = (char *)v165;
    v27 = (char *)v165 + 32 * v25;
    v28 = *(_DWORD *)v27;
    LODWORD(v160) = *(_DWORD *)v27;
    if ( v24 != 110 )
    {
      v29 = v24 & 0xDF;
      if ( (unsigned __int8)((v24 & 0xDF) - 69) > 2u && v29 != 65
        || (_DWORD)v160 != 12
        || (_FST7 = *((long double *)v27 + 1), _FST7 != _FST7 + _FST7) )
      {
        v30 = *((_DWORD *)v11 + 4);
        v31 = (_BYTE *)(v158 + 1);
        *(_BYTE *)v158 = 37;
        if ( v30 & 1 )
        {
          v32 = v158;
          *(_BYTE *)(v158 + 1) = 39;
          v31 = (_BYTE *)(v32 + 2);
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
          v157 = v26;
          *(_QWORD *)&v159 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v157 = v26;
          *(_QWORD *)&v159 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        if ( (unsigned int)v160 <= 0x10 )
        {
          v37 = 1LL << (char)v160;
          if ( (1LL << (char)v160) & 0x14180 )
            goto LABEL_125;
          if ( BYTE1(v37) & 0x10 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( !(BYTE1(v37) & 6) )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = *((_BYTE *)v11 + 72);
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = (signed __int64)&v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v157) = 1;
            v163 = *(_DWORD *)(v40 + 16);
            goto LABEL_65;
          }
LABEL_198:
          abort();
        }
        LODWORD(v157) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = (signed __int64)&v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_198;
          v43 = (unsigned int)v157;
          *(&v163 + v43) = *(_DWORD *)(v42 + 16);
          LODWORD(v157) = v43 + 1;
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
              *(_QWORD *)&v159 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v168 != &v171 )
                    free(v168);
                  if ( v165 != &v166 )
                    free(v165);
                  v13 = 0LL;
                  **(_DWORD **)&v159 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v159 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v159) = v13 == src;
            v93 = (char *)malloc(v10);
            v45 = v93;
            if ( !v93 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v159) )
              v45 = (char *)memcpy(v93, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v155 = v45;
            v46 = __errno_location();
            v47 = v155;
            v155 = v31;
            *(_QWORD *)&v159 = v46;
            LODWORD(v151) = *v46;
            while ( 2 )
            {
              while ( 2 )
              {
                v48 = 0x7FFFFFFFLL;
                v162 = -1;
                **(_DWORD **)&v159 = 0;
                if ( v10 - v18 <= 0x7FFFFFFF )
                  v48 = v10 - v18;
                switch ( (_DWORD)v160 )
                {
                  default:
                    goto LABEL_402;
                  case 7:
                  case 8:
                  case 9:
                  case 0xA:
                  case 0xF:
                  case 0x10:
                  case 0x11:
                    v70 = &v47[v18];
                    v71 = (int *)*((_QWORD *)v165 + 4 * *((_QWORD *)v11 + 10) + 2);
                    v154 = v47;
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_208;
                    if ( (_DWORD)v157 != 2 )
                      goto LABEL_130;
                    goto LABEL_207;
                  case 5:
                  case 6:
                  case 0xD:
                  case 0xE:
                    v79 = *((_DWORD *)v165 + 8 * *((_QWORD *)v11 + 10) + 4);
                    break;
                  case 0xC:
                    v81 = *((_QWORD *)v11 + 10);
                    v70 = &v47[v18];
                    v154 = v47;
                    v82 = *((long double *)v165 + 2 * v81 + 1);
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_207;
                    if ( (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v71 = &v162;
LABEL_130:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v71);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 1:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                  case 0xB:
                    v83 = *((_QWORD *)v11 + 10);
                    v84 = &v47[v18];
                    v154 = v47;
                    v85 = *((_QWORD *)v165 + 4 * v83 + 2);
                    if ( (_DWORD)v157 == 1 || (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, &v162);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 4:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 3:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 2:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                }
                v70 = &v47[v18];
                v154 = v47;
                if ( (_DWORD)v157 != 1 )
                {
                  if ( (_DWORD)v157 != 2 )
                    goto LABEL_151;
LABEL_207:
                  v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                  v47 = (char *)v154;
LABEL_131:
                  v73 = v162;
                  if ( v162 >= 0 )
                    goto LABEL_132;
LABEL_152:
                  if ( v155[1] )
                  {
                    v155[1] = 0;
                    continue;
                  }
                  if ( v72 < 0 )
                  {
                    v80 = **(_DWORD **)&v159;
                    if ( !**(_DWORD **)&v159 )
                    {
                      v80 = 84;
                      if ( (*((_BYTE *)v11 + 72) & 0xEF) != 99 )
                        v80 = 22;
                    }
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v168 != &v171 )
                      free(v168);
                    if ( v165 != &v166 )
                      free(v165);
                    **(_DWORD **)&v159 = v80;
                    return 0LL;
                  }
                  goto LABEL_135;
                }
                break;
              }
LABEL_208:
              v79 = v163;
LABEL_151:
              v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v79);
              v73 = v162;
              v47 = (char *)v154;
              if ( v162 < 0 )
                goto LABEL_152;
LABEL_132:
              if ( v73 < v48 && *(&v47[v73] + v18) )
                goto LABEL_198;
              if ( v73 < v72 )
              {
LABEL_135:
                v162 = v72;
                v73 = v72;
              }
              if ( (unsigned int)(v73 + 1) < v48 )
              {
                v13 = v47;
                v14 = v18 + v73;
                **(_DWORD **)&v159 = (_DWORD)v151;
                goto LABEL_110;
              }
              if ( v10 - v18 > 0x7FFFFFFE )
              {
                if ( v47 != src && v47 )
                  free(v47);
                if ( ptr )
                  free(ptr);
                if ( v168 != &v171 )
                  free(v168);
                if ( v165 != &v166 )
                  free(v165);
                v13 = 0LL;
                **(_DWORD **)&v159 = 75;
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
                    v154 = v47;
                    v92 = malloc(v10);
                    v47 = (char *)v154;
                    if ( !v92 )
                      goto LABEL_200;
                    if ( v18 && v77 )
                      v47 = (char *)memcpy(v92, v154, v18);
                    else
                      v47 = (char *)v92;
                  }
                  else
                  {
                    v154 = v47;
                    v78 = (char *)realloc(v47, v10);
                    v47 = (char *)v154;
                    if ( !v78 )
                      goto LABEL_200;
                    v47 = v78;
                  }
                }
              }
              continue;
            }
          }
          if ( v44 != -1LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      v65 = (_BYTE *)*((_QWORD *)v11 + 3);
      v66 = (_BYTE *)*((_QWORD *)v11 + 4);
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
          v160 = (void *)-1;
          while ( 1 )
          {
            v126 = (signed __int64)(v65 + 1);
            v127 = -1LL;
            v128 = *v65 - 48;
            if ( v49 <= 0x1999999999999999LL )
              v127 = 10 * v49;
            v75 = __CFADD__(v127, v128);
            v49 = v127 + v128;
            v65 = (_BYTE *)v126;
            if ( v75 )
            {
              if ( v66 == (_BYTE *)v126 )
              {
LABEL_81:
                v49 = (unsigned __int64)v160;
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
        v69 = (char *)v165 + 32 * v68;
        if ( *(_DWORD *)v69 != 5 )
          goto LABEL_198;
        v49 = *((_DWORD *)v69 + 4);
        if ( (v49 & 0x80000000) != 0LL )
        {
          v67 |= 2u;
          v49 = -(signed __int64)v49;
        }
      }
LABEL_82:
      v50 = (_BYTE *)*((_QWORD *)v11 + 6);
      v51 = (_BYTE *)*((_QWORD *)v11 + 7);
      if ( v50 != v51 )
      {
        v52 = *((_QWORD *)v11 + 8);
        if ( v52 == -1 )
        {
          v129 = (signed __int64)(v50 + 1);
          v54 = 0LL;
          if ( v51 != (_BYTE *)v129 )
          {
            v130 = (_BYTE *)v129;
            while ( 1 )
            {
              v131 = v130 + 1;
              v132 = *v130 - 48;
              v133 = -1LL;
              if ( v54 <= 0x1999999999999999LL )
                v133 = 10 * v54;
              v75 = __CFADD__(v133, v132);
              v134 = v133 + v132;
              v130 = v131;
              v54 = v134;
              if ( v75 )
              {
                if ( v51 == v131 )
                  goto LABEL_88;
                while ( 1 )
                {
                  v130 = v131 + 1;
                  if ( *v131 == 48 )
                    break;
                  if ( v51 == v130 )
                    goto LABEL_88;
                  ++v131;
                }
                v54 = -1LL;
              }
              if ( v51 == v130 )
                goto LABEL_86;
            }
          }
          goto LABEL_369;
        }
        v53 = (char *)v165 + 32 * v52;
        if ( *(_DWORD *)v53 != 5 )
          goto LABEL_198;
        v54 = *((_DWORD *)v53 + 4);
        if ( (v54 & 0x80000000) == 0LL )
        {
LABEL_86:
          if ( v54 )
          {
            v55 = v54 + 12;
            if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
              goto LABEL_88;
LABEL_188:
            v86 = v55;
            if ( v49 >= v55 )
              v86 = v49;
            v75 = __CFADD__(v86, 1LL);
            v87 = (void *)(v86 + 1);
            v160 = v87;
            if ( v75 )
              goto LABEL_88;
            if ( (unsigned __int64)v87 <= 0x2BC )
            {
              v89 = &v172;
            }
            else
            {
              v154 = (void *)v49;
              v155 = (char *)v54;
              LODWORD(v157) = v67;
              v159 = _FST7;
              if ( v87 == (void *)-1 )
                goto LABEL_88;
              v88 = (char *)malloc((size_t)v87);
              v67 = (signed int)v157;
              _FST7 = v159;
              v89 = v88;
              v54 = (unsigned __int64)v155;
              v49 = (unsigned __int64)v154;
              if ( !v88 )
                goto LABEL_88;
            }
            v90 = (unsigned __int16)v163;
            LOWORD(v163) = v163 | 0x300;
            __asm { fxam }
            if ( HIBYTE(v61) & 2 )
            {
              *v89 = 45;
              _FST7 = -_FST7;
              v91 = (unsigned __int64)(v89 + 1);
            }
            else if ( v67 & 4 )
            {
              v91 = (unsigned __int64)(v89 + 1);
              *v89 = 43;
            }
            else
            {
              v91 = (unsigned __int64)v89;
              if ( v67 & 8 )
              {
                v91 = (unsigned __int64)(v89 + 1);
                *v89 = 32;
              }
            }
            if ( _FST7 > 0.0 )
            {
              if ( _FST7 + _FST7 != _FST7 )
                goto LABEL_198;
              v96 = v91 + 3;
              if ( (unsigned __int8)(*((_BYTE *)v11 + 72) - 65) > 0x19u )
              {
                *(_BYTE *)(v91 + 2) = 102;
                *(_WORD *)v91 = 28265;
                v91 = 0LL;
              }
              else
              {
                *(_BYTE *)(v91 + 2) = 70;
                *(_WORD *)v91 = 20041;
                v91 = 0LL;
              }
              goto LABEL_258;
            }
            if ( _FST7 != 0.0 )
              goto LABEL_198;
            v95 = *((_BYTE *)v11 + 72) & 0xDF;
            if ( v95 == 70 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || v54 )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v122 = nl_langinfo(0x10000);
                v123 = (__int64)v155;
                v96 = *(_QWORD *)&v159;
                v124 = *v122;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v124 )
                  v124 = 46;
                *(_BYTE *)(v91 + 1) = v124;
                if ( v123 )
                {
                  v125 = v96;
                  do
                    *(_BYTE *)(++v125 - 1) = 48;
                  while ( v125 != v91 + v123 + 2 );
                  v96 += v123;
                }
                goto LABEL_258;
              }
              goto LABEL_257;
            }
            if ( v95 == 69 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || (v104 = v91 + 1, v54) )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v138 = nl_langinfo(0x10000);
                v139 = (__int64)v155;
                v104 = *(_QWORD *)&v159;
                v140 = *v138;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v140 )
                  v140 = 46;
                *(_BYTE *)(v91 + 1) = v140;
                if ( v139 )
                {
                  v141 = v104;
                  do
                    *(_BYTE *)(++v141 - 1) = 48;
                  while ( v141 != v91 + v139 + 2 );
                  v104 += v139;
                }
              }
              v105 = *((_BYTE *)v11 + 72);
              v96 = v104 + 4;
              *(_BYTE *)(v104 + 3) = 48;
              *(_BYTE *)v104 = v105;
              *(_WORD *)(v104 + 1) = 12331;
              goto LABEL_258;
            }
            if ( v95 == 71 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 )
              {
                if ( v54 )
                {
                  v115 = v90;
                  v150 = v49;
                  v151 = (char *)(v91 + 2);
                  v154 = v89;
                  LODWORD(v155) = v67;
                  v157 = (_BYTE *)v54;
                  *(_QWORD *)&v159 = v54 - 1;
                  v116 = nl_langinfo(0x10000);
                  v117 = *(_QWORD *)&v159;
                  v118 = (__int64)v157;
                  v119 = *v116;
                  LOBYTE(v67) = (_BYTE)v155;
                  v89 = (char *)v154;
                  v96 = (unsigned __int64)v151;
                  v49 = v150;
                  LOWORD(v90) = v115;
                  if ( !v119 )
                    v119 = 46;
                  *(_BYTE *)(v91 + 1) = v119;
                  if ( v117 )
                  {
                    v120 = v91 + v118 + 1;
                    v121 = v96;
                    do
                      *(_BYTE *)(++v121 - 1) = 48;
                    while ( v121 != v120 );
                    v96 += v117;
                  }
                }
                else
                {
                  LODWORD(v151) = v90;
                  v154 = (void *)v49;
                  v155 = (char *)(v91 + 2);
                  v157 = v89;
                  LODWORD(v159) = v67;
                  v148 = nl_langinfo(0x10000);
                  LOBYTE(v67) = LOBYTE(v159);
                  v89 = v157;
                  v149 = *v148;
                  v96 = (unsigned __int64)v155;
                  v49 = (unsigned __int64)v154;
                  LOWORD(v90) = (_WORD)v151;
                  if ( !v149 )
                    v149 = 46;
                  *(_BYTE *)(v91 + 1) = v149;
                }
                goto LABEL_258;
              }
LABEL_257:
              v96 = v91 + 1;
              goto LABEL_258;
            }
            if ( v95 != 65 )
              goto LABEL_198;
            *(_BYTE *)v91 = 48;
            *(_QWORD *)&v159 = v91 + 2;
            v135 = *((_BYTE *)v11 + 72);
            *(_BYTE *)(v91 + 2) = 48;
            *(_BYTE *)(v91 + 1) = v135 + 23;
            if ( v67 & 0x10 || (v136 = v91 + 3, v54) )
            {
              v143 = v90;
              v150 = v49;
              v151 = v89;
              v154 = (void *)v54;
              LODWORD(v155) = v67;
              v157 = (_BYTE *)(v91 + 4);
              v144 = nl_langinfo(0x10000);
              v145 = (char *)v154;
              v136 = (signed __int64)v157;
              v146 = *v144;
              LOBYTE(v67) = (_BYTE)v155;
              v89 = v151;
              v49 = v150;
              LOWORD(v90) = v143;
              if ( !v146 )
                v146 = 46;
              *(_BYTE *)(v91 + 3) = v146;
              if ( v145 )
              {
                v147 = (char *)v136;
                do
                  *(++v147 - 1) = 48;
                while ( v147 != &v145[v91 + 4] );
                v136 += (signed __int64)v145;
              }
            }
            v137 = *((_BYTE *)v11 + 72);
            v96 = v136 + 3;
            *(_WORD *)(v136 + 1) = 12331;
            v91 = *(_QWORD *)&v159;
            *(_BYTE *)v136 = v137 + 15;
LABEL_258:
            LOWORD(v163) = v90;
            v97 = v96 - (_QWORD)v89;
            if ( v49 > v96 - (unsigned __int64)v89 )
            {
              v98 = v49 - v97;
              v99 = v96 + v98;
              v97 = v96 + v98 - (_QWORD)v89;
              if ( v67 & 2 )
              {
                if ( v98 )
                {
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v99 != v96 );
                }
              }
              else if ( v67 & 0x20 && v91 )
              {
                if ( v91 >= v96 )
                {
                  v91 = v96;
                }
                else
                {
                  v100 = -1LL;
                  do
                  {
                    *(_BYTE *)(v99 + v100) = *(_BYTE *)(v96 + v100);
                    --v100;
                  }
                  while ( v100 != v91 - 1 - v96 );
                }
                if ( v98 )
                {
                  v101 = v91 + v98;
                  do
                    *(_BYTE *)(++v91 - 1) = 48;
                  while ( v91 != v101 );
                }
              }
              else
              {
                v111 = -1LL;
                if ( (unsigned __int64)v89 < v96 )
                {
                  do
                  {
                    *(_BYTE *)(v99 + v111) = *(_BYTE *)(v96 + v111);
                    --v111;
                  }
                  while ( &v89[-v96 - 1] != (char *)v111 );
                  v96 = (unsigned __int64)v89;
                }
                if ( v98 )
                {
                  v112 = v96 + v98;
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v96 != v112 );
                }
              }
            }
            if ( (unsigned __int64)v160 <= v97 )
              goto LABEL_198;
            v102 = v97 + v18;
            v14 = v97 + v18;
            if ( v10 - v18 <= v97 )
            {
              if ( __CFADD__(v97, v18) )
              {
                if ( v10 != -1LL )
                  goto LABEL_88;
              }
              else if ( v10 < v102 )
              {
                if ( v10 )
                {
                  if ( (v10 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_88;
                  v10 *= 2LL;
                  if ( v10 < v102 )
                    goto LABEL_367;
                }
                else
                {
                  if ( v102 <= 0xC )
                  {
                    v10 = 12LL;
                    goto LABEL_275;
                  }
LABEL_367:
                  if ( v102 == -1LL )
                    goto LABEL_88;
                  v10 = v97 + v18;
                }
LABEL_275:
                if ( v13 && v13 != src )
                {
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v103 = (char *)realloc(v13, v10);
                  if ( !v103 )
                    goto LABEL_88;
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  v13 = v103;
                }
                else
                {
                  LOBYTE(v157) = v13 == src;
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v113 = malloc(v10);
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  if ( !v113 )
                    goto LABEL_88;
                  if ( v18 && (_BYTE)v157 )
                  {
                    v114 = (char *)memcpy(v113, v13, v18);
                    v89 = (char *)v160;
                    v97 = *(_QWORD *)&v159;
                    v13 = v114;
                  }
                  else
                  {
                    v13 = (char *)v113;
                  }
                }
              }
            }
            v160 = v89;
            memcpy(&v13[v18], v89, v97);
            if ( v160 != &v172 )
              free(v160);
            goto LABEL_110;
          }
LABEL_369:
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
    switch ( v28 )
    {
      case 21:
      case 22:
        v14 = v18;
        **((_QWORD **)v27 + 2) = v18;
        break;
      case 20:
        v14 = v18;
        **((_DWORD **)v27 + 2) = v18;
        break;
      case 19:
        v14 = v18;
        **((_WORD **)v27 + 2) = v18;
        break;
      case 18:
        v14 = v18;
        **((_BYTE **)v27 + 2) = v18;
        break;
      default:
LABEL_402:
        abort();
        return result;
    }
LABEL_110:
    v12 = (_BYTE *)*((_QWORD *)v11 + 1);
    v11 = (char *)v11 + 88;
    v15 = *(_BYTE **)v11;
    ++v156;
    if ( v15 != v12 )
      goto LABEL_14;
LABEL_111:
    v18 = v14;
  }
  v106 = v18;
  v107 = v18 + 1;
  if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
  {
    if ( v10 != -1LL )
      goto LABEL_88;
    goto LABEL_301;
  }
  if ( v10 >= v107 )
    goto LABEL_301;
  if ( v10 )
  {
    if ( (v10 & 0x8000000000000000LL) != 0LL )
      goto LABEL_88;
    v10 *= 2LL;
    if ( v10 >= v107 )
      goto LABEL_297;
    goto LABEL_387;
  }
  if ( v107 > 0xC )
  {
LABEL_387:
    if ( v107 == -1LL )
      goto LABEL_88;
    v10 = v18 + 1;
    goto LABEL_297;
  }
  v10 = 12LL;
LABEL_297:
  v108 = v13 == src;
  if ( !v13 || v108 )
  {
    v142 = malloc(v10);
    if ( !v142 )
      goto LABEL_88;
    if ( v106 && v108 )
      v13 = (char *)memcpy(v142, v13, v106);
    else
      v13 = (char *)v142;
  }
  else
  {
    v109 = (char *)realloc(v13, v10);
    if ( !v109 )
      goto LABEL_126;
    v13 = v109;
  }
LABEL_301:
  v13[v106] = 0;
  if ( v10 > v107 && v13 != src )
  {
    v110 = (char *)realloc(v13, v107);
    if ( v110 )
      v13 = v110;
  }
  if ( ptr )
    free(ptr);
  if ( v168 != &v171 )
    free(v168);
  if ( v165 != &v166 )
    free(v165);
  *v153 = v106;
  return v13;
}

char *__fastcall sub_40D880(void *a1, size_t *a2, _BYTE *a3, __int64 a4)
{
  _BYTE *v4; // r15@1
  __int64 v5; // rbx@1
  __int64 v6; // rax@3
  unsigned __int64 v7; // rax@5
  size_t v8; // rdi@6
  void *v9; // rax@9
  size_t v10; // r12@11
  void *v11; // r14@13
  _BYTE *v12; // r8@13
  char *v13; // rbx@13
  size_t v14; // r15@13
  _BYTE *v15; // rcx@13
  char *v16; // rcx@14
  unsigned __int64 v17; // rax@14
  size_t v18; // r13@14
  bool v19; // dl@18
  void *v20; // rax@19
  char *v21; // rax@22
  void *v22; // rsp@23
  char *v23; // rax@30
  char v24; // r15@34
  __int64 v25; // rax@34
  char *v26; // r8@36
  char *v27; // rdx@36
  int v28; // eax@36
  char v29; // al@37
  int v30; // eax@40
  _BYTE *v31; // r15@40
  __int64 v32; // rdi@41
  _BYTE *v33; // rsi@54
  _BYTE *v34; // rdx@54
  _BYTE *v35; // rsi@56
  _BYTE *v36; // rdx@56
  signed __int64 v37; // rax@59
  char v38; // al@62
  __int64 v39; // rax@62
  signed __int64 v40; // rax@63
  __int64 v41; // rax@65
  signed __int64 v42; // r8@66
  __int64 v43; // rax@67
  unsigned __int64 v44; // rax@68
  char *v45; // r11@75
  int *v46; // rax@76
  char *v47; // r11@76
  unsigned __int64 v48; // rbx@77
  unsigned __int64 v49; // r10@81
  _BYTE *v50; // rdx@82
  _BYTE *v51; // rcx@82
  __int64 v52; // rsi@83
  char *v53; // r8@84
  unsigned __int64 v54; // rdx@85
  unsigned __int64 v55; // rcx@87
  char *v56; // r15@88
  char *result; // rax@98
  unsigned __int64 v58; // rax@100
  char *v59; // rax@107
  __int16 v61; // fps@117
  _BYTE *v65; // rdx@118
  _BYTE *v66; // rdi@118
  int v67; // er11@118
  __int64 v68; // rcx@119
  char *v69; // rcx@120
  char *v70; // rdi@128
  int *v71; // r9@128
  int v72; // eax@130
  int v73; // edx@131
  __int64 v74; // rax@138
  unsigned __int8 v75; // cf@138
  unsigned __int64 v76; // rax@138
  bool v77; // bl@144
  char *v78; // rax@146
  __int64 v79; // r9@148
  signed int v80; // ebx@154
  __int64 v81; // rax@167
  long double v82; // fst7@167
  __int64 v83; // rax@171
  char *v84; // rdi@171
  __int128 v85; // xmm0@171
  unsigned __int64 v86; // rax@188
  void *v87; // rax@190
  char *v88; // rax@193
  char *v89; // rcx@193
  int v90; // er8@194
  unsigned __int64 v91; // r15@195
  void *v92; // rax@201
  char *v93; // rax@216
  void *v94; // rax@222
  char v95; // al@254
  unsigned __int64 v96; // r9@257
  size_t v97; // r8@258
  unsigned __int64 v98; // r10@259
  unsigned __int64 v99; // rdi@259
  signed __int64 v100; // rax@263
  unsigned __int64 v101; // r10@266
  unsigned __int64 v102; // rax@269
  char *v103; // rax@277
  signed __int64 v104; // rsi@286
  char v105; // al@287
  size_t v106; // r15@292
  size_t v107; // r14@292
  bool v108; // r13@297
  char *v109; // rax@299
  char *v110; // rax@303
  signed __int64 v111; // rax@316
  unsigned __int64 v112; // r10@320
  void *v113; // rax@323
  char *v114; // rax@326
  __int16 v115; // ST34_2@330
  char *v116; // rax@330
  __int64 v117; // rsi@330
  __int64 v118; // rdx@330
  char v119; // al@330
  signed __int64 v120; // rdx@333
  unsigned __int64 v121; // rax@333
  char *v122; // rax@340
  __int64 v123; // rdx@340
  char v124; // al@340
  unsigned __int64 v125; // rax@343
  signed __int64 v126; // rsi@348
  signed __int64 v127; // r9@348
  __int64 v128; // rdx@348
  signed __int64 v129; // rax@354
  _BYTE *v130; // rsi@355
  _BYTE *v131; // rdi@357
  __int64 v132; // rax@357
  signed __int64 v133; // rsi@357
  unsigned __int64 v134; // rax@359
  char v135; // al@371
  signed __int64 v136; // rsi@372
  char v137; // al@373
  char *v138; // rax@374
  __int64 v139; // rdx@374
  char v140; // al@374
  signed __int64 v141; // rax@377
  void *v142; // rax@381
  __int16 v143; // ST34_2@389
  char *v144; // rax@389
  char *v145; // rdx@389
  char v146; // al@389
  char *v147; // rax@392
  char *v148; // rax@397
  char v149; // al@397
  unsigned __int64 v150; // [sp+28h] [bp-6E8h]@23
  char *v151; // [sp+30h] [bp-6E0h]@76
  void *ptr; // [sp+38h] [bp-6D8h]@10
  size_t *v153; // [sp+40h] [bp-6D0h]@1
  void *v154; // [sp+48h] [bp-6C8h]@128
  char *v155; // [sp+50h] [bp-6C0h]@76
  __int64 v156; // [sp+58h] [bp-6B8h]@13
  _BYTE *v157; // [sp+60h] [bp-6B0h]@19
  unsigned __int64 v158; // [sp+68h] [bp-6A8h]@9
  long double v159; // [sp+70h] [bp-6A0h]@19
  void *v160; // [sp+80h] [bp-690h]@19
  void *src; // [sp+88h] [bp-688h]@1
  int v162; // [sp+94h] [bp-67Ch]@77
  unsigned int v163; // [sp+98h] [bp-678h]@64
  char v164; // [sp+A0h] [bp-670h]@1
  void *v165; // [sp+A8h] [bp-668h]@36
  __int64 v166; // [sp+B0h] [bp-660h]@95
  __int64 v167; // [sp+190h] [bp-580h]@1
  void *v168; // [sp+198h] [bp-578h]@13
  __int64 v169; // [sp+1A0h] [bp-570h]@3
  __int64 v170; // [sp+1A8h] [bp-568h]@5
  __int64 v171; // [sp+1B0h] [bp-560h]@93
  char v172; // [sp+420h] [bp-2F0h]@252

  v4 = a3;
  v5 = a4;
  src = a1;
  v153 = a2;
  if ( sub_40F5C0(a3, &v167, &v164) < 0 )
    return 0LL;
  if ( sub_40F3A0(v5, &v164) < 0 )
  {
    if ( v168 != &v171 )
      free(v168);
    if ( v165 != &v166 )
      free(v165);
    v13 = 0LL;
    *__errno_location() = 22;
    return v13;
  }
  v6 = v169 + 7;
  if ( (unsigned __int64)(v169 + 7) <= 6 )
    v6 = -1LL;
  v75 = __CFADD__(v170, v6);
  v7 = v170 + v6;
  if ( v75 )
    goto LABEL_112;
  v8 = v7 + 6;
  if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
    goto LABEL_112;
  if ( v8 <= 0xF9F )
  {
    ptr = 0LL;
    v22 = alloca(v7 + 14);
    v158 = ((unsigned __int64)&v150 + 7) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    if ( v8 == -1LL )
      goto LABEL_112;
    v9 = malloc(v8);
    v158 = (unsigned __int64)v9;
    if ( !v9 )
      goto LABEL_112;
    ptr = v9;
  }
  v10 = 0LL;
  if ( src )
    v10 = *v153;
  v11 = v168;
  v12 = v4;
  v13 = (char *)src;
  v156 = 0LL;
  v14 = 0LL;
  v15 = *(_BYTE **)v168;
  if ( *(_BYTE **)v168 == v12 )
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
        v157 = v12;
        LOBYTE(v159) = v19;
        v160 = v16;
        v20 = malloc(v10);
        v16 = (char *)v160;
        v12 = v157;
        if ( !v20 )
          goto LABEL_88;
        if ( v14 && LOBYTE(v159) )
        {
          *(_QWORD *)&v159 = v157;
          v21 = (char *)memcpy(v20, v13, v14);
          v16 = (char *)v160;
          v12 = *(_BYTE **)&v159;
          v13 = v21;
        }
        else
        {
          v13 = (char *)v20;
        }
        goto LABEL_32;
      }
LABEL_29:
      if ( !v19 )
      {
        *(_QWORD *)&v159 = v12;
        v160 = v16;
        v23 = (char *)realloc(v13, v10);
        if ( !v23 )
          goto LABEL_126;
        v16 = (char *)v160;
        v12 = *(_BYTE **)&v159;
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
  while ( v167 != v156 )
  {
    v24 = *((_BYTE *)v11 + 72);
    v25 = *((_QWORD *)v11 + 10);
    if ( v24 == 37 )
    {
      if ( v25 != -1 )
        goto LABEL_198;
      v58 = v18 + 1;
      v14 = v18 + 1;
      if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
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
          if ( v58 == -1LL )
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
          *(_QWORD *)&v159 = __errno_location();
          goto LABEL_127;
        }
        LOBYTE(v160) = v13 == src;
        v94 = malloc(v10);
        if ( !v94 )
          goto LABEL_88;
        if ( v18 && (_BYTE)v160 )
          v13 = (char *)memcpy(v94, v13, v18);
        else
          v13 = (char *)v94;
      }
LABEL_109:
      v13[v18] = 37;
      goto LABEL_110;
    }
    if ( v25 == -1 )
      goto LABEL_198;
    v26 = (char *)v165;
    v27 = (char *)v165 + 32 * v25;
    v28 = *(_DWORD *)v27;
    LODWORD(v160) = *(_DWORD *)v27;
    if ( v24 != 110 )
    {
      v29 = v24 & 0xDF;
      if ( (unsigned __int8)((v24 & 0xDF) - 69) > 2u && v29 != 65
        || (_DWORD)v160 != 12
        || (_FST7 = *((long double *)v27 + 1), _FST7 != _FST7 + _FST7) )
      {
        v30 = *((_DWORD *)v11 + 4);
        v31 = (_BYTE *)(v158 + 1);
        *(_BYTE *)v158 = 37;
        if ( v30 & 1 )
        {
          v32 = v158;
          *(_BYTE *)(v158 + 1) = 39;
          v31 = (_BYTE *)(v32 + 2);
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
          v157 = v26;
          *(_QWORD *)&v159 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v157 = v26;
          *(_QWORD *)&v159 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v157;
          v31 += *(_QWORD *)&v159;
        }
        if ( (unsigned int)v160 <= 0x10 )
        {
          v37 = 1LL << (char)v160;
          if ( (1LL << (char)v160) & 0x14180 )
            goto LABEL_125;
          if ( BYTE1(v37) & 0x10 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( !(BYTE1(v37) & 6) )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = *((_BYTE *)v11 + 72);
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = (signed __int64)&v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v157) = 1;
            v163 = *(_DWORD *)(v40 + 16);
            goto LABEL_65;
          }
LABEL_198:
          abort();
        }
        LODWORD(v157) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = (signed __int64)&v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_198;
          v43 = (unsigned int)v157;
          *(&v163 + v43) = *(_DWORD *)(v42 + 16);
          LODWORD(v157) = v43 + 1;
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
              *(_QWORD *)&v159 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v168 != &v171 )
                    free(v168);
                  if ( v165 != &v166 )
                    free(v165);
                  v13 = 0LL;
                  **(_DWORD **)&v159 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v159 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v159) = v13 == src;
            v93 = (char *)malloc(v10);
            v45 = v93;
            if ( !v93 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v159) )
              v45 = (char *)memcpy(v93, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v155 = v45;
            v46 = __errno_location();
            v47 = v155;
            v155 = v31;
            *(_QWORD *)&v159 = v46;
            LODWORD(v151) = *v46;
            while ( 2 )
            {
              while ( 2 )
              {
                v48 = 0x7FFFFFFFLL;
                v162 = -1;
                **(_DWORD **)&v159 = 0;
                if ( v10 - v18 <= 0x7FFFFFFF )
                  v48 = v10 - v18;
                switch ( (_DWORD)v160 )
                {
                  default:
                    goto LABEL_402;
                  case 7:
                  case 8:
                  case 9:
                  case 0xA:
                  case 0xF:
                  case 0x10:
                  case 0x11:
                    v70 = &v47[v18];
                    v71 = (int *)*((_QWORD *)v165 + 4 * *((_QWORD *)v11 + 10) + 2);
                    v154 = v47;
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_208;
                    if ( (_DWORD)v157 != 2 )
                      goto LABEL_130;
                    goto LABEL_207;
                  case 5:
                  case 6:
                  case 0xD:
                  case 0xE:
                    v79 = *((_DWORD *)v165 + 8 * *((_QWORD *)v11 + 10) + 4);
                    break;
                  case 0xC:
                    v81 = *((_QWORD *)v11 + 10);
                    v70 = &v47[v18];
                    v154 = v47;
                    v82 = *((long double *)v165 + 2 * v81 + 1);
                    if ( (_DWORD)v157 == 1 )
                      goto LABEL_207;
                    if ( (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v71 = &v162;
LABEL_130:
                      v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v71);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 1:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                  case 0xB:
                    v83 = *((_QWORD *)v11 + 10);
                    v84 = &v47[v18];
                    v154 = v47;
                    v85 = *((_QWORD *)v165 + 4 * v83 + 2);
                    if ( (_DWORD)v157 == 1 || (_DWORD)v157 == 2 )
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, v163);
                      v47 = (char *)v154;
                    }
                    else
                    {
                      v72 = __snprintf_chk(v84, v48, 1LL, -1LL, v158, &v162);
                      v47 = (char *)v154;
                    }
                    goto LABEL_131;
                  case 4:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 3:
                    v79 = *((_WORD *)v165 + 16 * *((_QWORD *)v11 + 10) + 8);
                    break;
                  case 2:
                    v79 = *((_BYTE *)v165 + 32 * *((_QWORD *)v11 + 10) + 16);
                    break;
                }
                v70 = &v47[v18];
                v154 = v47;
                if ( (_DWORD)v157 != 1 )
                {
                  if ( (_DWORD)v157 != 2 )
                    goto LABEL_151;
LABEL_207:
                  v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v163);
                  v47 = (char *)v154;
LABEL_131:
                  v73 = v162;
                  if ( v162 >= 0 )
                    goto LABEL_132;
LABEL_152:
                  if ( v155[1] )
                  {
                    v155[1] = 0;
                    continue;
                  }
                  if ( v72 < 0 )
                  {
                    v80 = **(_DWORD **)&v159;
                    if ( !**(_DWORD **)&v159 )
                    {
                      v80 = 84;
                      if ( (*((_BYTE *)v11 + 72) & 0xEF) != 99 )
                        v80 = 22;
                    }
                    if ( v47 != src && v47 )
                      free(v47);
                    if ( ptr )
                      free(ptr);
                    if ( v168 != &v171 )
                      free(v168);
                    if ( v165 != &v166 )
                      free(v165);
                    **(_DWORD **)&v159 = v80;
                    return 0LL;
                  }
                  goto LABEL_135;
                }
                break;
              }
LABEL_208:
              v79 = v163;
LABEL_151:
              v72 = __snprintf_chk(v70, v48, 1LL, -1LL, v158, v79);
              v73 = v162;
              v47 = (char *)v154;
              if ( v162 < 0 )
                goto LABEL_152;
LABEL_132:
              if ( v73 < v48 && *(&v47[v73] + v18) )
                goto LABEL_198;
              if ( v73 < v72 )
              {
LABEL_135:
                v162 = v72;
                v73 = v72;
              }
              if ( (unsigned int)(v73 + 1) < v48 )
              {
                v13 = v47;
                v14 = v18 + v73;
                **(_DWORD **)&v159 = (_DWORD)v151;
                goto LABEL_110;
              }
              if ( v10 - v18 > 0x7FFFFFFE )
              {
                if ( v47 != src && v47 )
                  free(v47);
                if ( ptr )
                  free(ptr);
                if ( v168 != &v171 )
                  free(v168);
                if ( v165 != &v166 )
                  free(v165);
                v13 = 0LL;
                **(_DWORD **)&v159 = 75;
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
                    v154 = v47;
                    v92 = malloc(v10);
                    v47 = (char *)v154;
                    if ( !v92 )
                      goto LABEL_200;
                    if ( v18 && v77 )
                      v47 = (char *)memcpy(v92, v154, v18);
                    else
                      v47 = (char *)v92;
                  }
                  else
                  {
                    v154 = v47;
                    v78 = (char *)realloc(v47, v10);
                    v47 = (char *)v154;
                    if ( !v78 )
                      goto LABEL_200;
                    v47 = v78;
                  }
                }
              }
              continue;
            }
          }
          if ( v44 != -1LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      v65 = (_BYTE *)*((_QWORD *)v11 + 3);
      v66 = (_BYTE *)*((_QWORD *)v11 + 4);
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
          v160 = (void *)-1;
          while ( 1 )
          {
            v126 = (signed __int64)(v65 + 1);
            v127 = -1LL;
            v128 = *v65 - 48;
            if ( v49 <= 0x1999999999999999LL )
              v127 = 10 * v49;
            v75 = __CFADD__(v127, v128);
            v49 = v127 + v128;
            v65 = (_BYTE *)v126;
            if ( v75 )
            {
              if ( v66 == (_BYTE *)v126 )
              {
LABEL_81:
                v49 = (unsigned __int64)v160;
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
        v69 = (char *)v165 + 32 * v68;
        if ( *(_DWORD *)v69 != 5 )
          goto LABEL_198;
        v49 = *((_DWORD *)v69 + 4);
        if ( (v49 & 0x80000000) != 0LL )
        {
          v67 |= 2u;
          v49 = -(signed __int64)v49;
        }
      }
LABEL_82:
      v50 = (_BYTE *)*((_QWORD *)v11 + 6);
      v51 = (_BYTE *)*((_QWORD *)v11 + 7);
      if ( v50 != v51 )
      {
        v52 = *((_QWORD *)v11 + 8);
        if ( v52 == -1 )
        {
          v129 = (signed __int64)(v50 + 1);
          v54 = 0LL;
          if ( v51 != (_BYTE *)v129 )
          {
            v130 = (_BYTE *)v129;
            while ( 1 )
            {
              v131 = v130 + 1;
              v132 = *v130 - 48;
              v133 = -1LL;
              if ( v54 <= 0x1999999999999999LL )
                v133 = 10 * v54;
              v75 = __CFADD__(v133, v132);
              v134 = v133 + v132;
              v130 = v131;
              v54 = v134;
              if ( v75 )
              {
                if ( v51 == v131 )
                  goto LABEL_88;
                while ( 1 )
                {
                  v130 = v131 + 1;
                  if ( *v131 == 48 )
                    break;
                  if ( v51 == v130 )
                    goto LABEL_88;
                  ++v131;
                }
                v54 = -1LL;
              }
              if ( v51 == v130 )
                goto LABEL_86;
            }
          }
          goto LABEL_369;
        }
        v53 = (char *)v165 + 32 * v52;
        if ( *(_DWORD *)v53 != 5 )
          goto LABEL_198;
        v54 = *((_DWORD *)v53 + 4);
        if ( (v54 & 0x80000000) == 0LL )
        {
LABEL_86:
          if ( v54 )
          {
            v55 = v54 + 12;
            if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
              goto LABEL_88;
LABEL_188:
            v86 = v55;
            if ( v49 >= v55 )
              v86 = v49;
            v75 = __CFADD__(v86, 1LL);
            v87 = (void *)(v86 + 1);
            v160 = v87;
            if ( v75 )
              goto LABEL_88;
            if ( (unsigned __int64)v87 <= 0x2BC )
            {
              v89 = &v172;
            }
            else
            {
              v154 = (void *)v49;
              v155 = (char *)v54;
              LODWORD(v157) = v67;
              v159 = _FST7;
              if ( v87 == (void *)-1 )
                goto LABEL_88;
              v88 = (char *)malloc((size_t)v87);
              v67 = (signed int)v157;
              _FST7 = v159;
              v89 = v88;
              v54 = (unsigned __int64)v155;
              v49 = (unsigned __int64)v154;
              if ( !v88 )
                goto LABEL_88;
            }
            v90 = (unsigned __int16)v163;
            LOWORD(v163) = v163 | 0x300;
            __asm { fxam }
            if ( HIBYTE(v61) & 2 )
            {
              *v89 = 45;
              _FST7 = -_FST7;
              v91 = (unsigned __int64)(v89 + 1);
            }
            else if ( v67 & 4 )
            {
              v91 = (unsigned __int64)(v89 + 1);
              *v89 = 43;
            }
            else
            {
              v91 = (unsigned __int64)v89;
              if ( v67 & 8 )
              {
                v91 = (unsigned __int64)(v89 + 1);
                *v89 = 32;
              }
            }
            if ( _FST7 > 0.0 )
            {
              if ( _FST7 + _FST7 != _FST7 )
                goto LABEL_198;
              v96 = v91 + 3;
              if ( (unsigned __int8)(*((_BYTE *)v11 + 72) - 65) > 0x19u )
              {
                *(_BYTE *)(v91 + 2) = 102;
                *(_WORD *)v91 = 28265;
                v91 = 0LL;
              }
              else
              {
                *(_BYTE *)(v91 + 2) = 70;
                *(_WORD *)v91 = 20041;
                v91 = 0LL;
              }
              goto LABEL_258;
            }
            if ( _FST7 != 0.0 )
              goto LABEL_198;
            v95 = *((_BYTE *)v11 + 72) & 0xDF;
            if ( v95 == 70 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || v54 )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v122 = nl_langinfo(0x10000);
                v123 = (__int64)v155;
                v96 = *(_QWORD *)&v159;
                v124 = *v122;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v124 )
                  v124 = 46;
                *(_BYTE *)(v91 + 1) = v124;
                if ( v123 )
                {
                  v125 = v96;
                  do
                    *(_BYTE *)(++v125 - 1) = 48;
                  while ( v125 != v91 + v123 + 2 );
                  v96 += v123;
                }
                goto LABEL_258;
              }
              goto LABEL_257;
            }
            if ( v95 == 69 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 || (v104 = v91 + 1, v54) )
              {
                LOWORD(v150) = v90;
                v151 = (char *)v49;
                v154 = v89;
                v155 = (char *)v54;
                LODWORD(v157) = v67;
                *(_QWORD *)&v159 = v91 + 2;
                v138 = nl_langinfo(0x10000);
                v139 = (__int64)v155;
                v104 = *(_QWORD *)&v159;
                v140 = *v138;
                LOBYTE(v67) = (_BYTE)v157;
                v89 = (char *)v154;
                v49 = (unsigned __int64)v151;
                LOWORD(v90) = v150;
                if ( !v140 )
                  v140 = 46;
                *(_BYTE *)(v91 + 1) = v140;
                if ( v139 )
                {
                  v141 = v104;
                  do
                    *(_BYTE *)(++v141 - 1) = 48;
                  while ( v141 != v91 + v139 + 2 );
                  v104 += v139;
                }
              }
              v105 = *((_BYTE *)v11 + 72);
              v96 = v104 + 4;
              *(_BYTE *)(v104 + 3) = 48;
              *(_BYTE *)v104 = v105;
              *(_WORD *)(v104 + 1) = 12331;
              goto LABEL_258;
            }
            if ( v95 == 71 )
            {
              *(_BYTE *)v91 = 48;
              if ( v67 & 0x10 )
              {
                if ( v54 )
                {
                  v115 = v90;
                  v150 = v49;
                  v151 = (char *)(v91 + 2);
                  v154 = v89;
                  LODWORD(v155) = v67;
                  v157 = (_BYTE *)v54;
                  *(_QWORD *)&v159 = v54 - 1;
                  v116 = nl_langinfo(0x10000);
                  v117 = *(_QWORD *)&v159;
                  v118 = (__int64)v157;
                  v119 = *v116;
                  LOBYTE(v67) = (_BYTE)v155;
                  v89 = (char *)v154;
                  v96 = (unsigned __int64)v151;
                  v49 = v150;
                  LOWORD(v90) = v115;
                  if ( !v119 )
                    v119 = 46;
                  *(_BYTE *)(v91 + 1) = v119;
                  if ( v117 )
                  {
                    v120 = v91 + v118 + 1;
                    v121 = v96;
                    do
                      *(_BYTE *)(++v121 - 1) = 48;
                    while ( v121 != v120 );
                    v96 += v117;
                  }
                }
                else
                {
                  LODWORD(v151) = v90;
                  v154 = (void *)v49;
                  v155 = (char *)(v91 + 2);
                  v157 = v89;
                  LODWORD(v159) = v67;
                  v148 = nl_langinfo(0x10000);
                  LOBYTE(v67) = LOBYTE(v159);
                  v89 = v157;
                  v149 = *v148;
                  v96 = (unsigned __int64)v155;
                  v49 = (unsigned __int64)v154;
                  LOWORD(v90) = (_WORD)v151;
                  if ( !v149 )
                    v149 = 46;
                  *(_BYTE *)(v91 + 1) = v149;
                }
                goto LABEL_258;
              }
LABEL_257:
              v96 = v91 + 1;
              goto LABEL_258;
            }
            if ( v95 != 65 )
              goto LABEL_198;
            *(_BYTE *)v91 = 48;
            *(_QWORD *)&v159 = v91 + 2;
            v135 = *((_BYTE *)v11 + 72);
            *(_BYTE *)(v91 + 2) = 48;
            *(_BYTE *)(v91 + 1) = v135 + 23;
            if ( v67 & 0x10 || (v136 = v91 + 3, v54) )
            {
              v143 = v90;
              v150 = v49;
              v151 = v89;
              v154 = (void *)v54;
              LODWORD(v155) = v67;
              v157 = (_BYTE *)(v91 + 4);
              v144 = nl_langinfo(0x10000);
              v145 = (char *)v154;
              v136 = (signed __int64)v157;
              v146 = *v144;
              LOBYTE(v67) = (_BYTE)v155;
              v89 = v151;
              v49 = v150;
              LOWORD(v90) = v143;
              if ( !v146 )
                v146 = 46;
              *(_BYTE *)(v91 + 3) = v146;
              if ( v145 )
              {
                v147 = (char *)v136;
                do
                  *(++v147 - 1) = 48;
                while ( v147 != &v145[v91 + 4] );
                v136 += (signed __int64)v145;
              }
            }
            v137 = *((_BYTE *)v11 + 72);
            v96 = v136 + 3;
            *(_WORD *)(v136 + 1) = 12331;
            v91 = *(_QWORD *)&v159;
            *(_BYTE *)v136 = v137 + 15;
LABEL_258:
            LOWORD(v163) = v90;
            v97 = v96 - (_QWORD)v89;
            if ( v49 > v96 - (unsigned __int64)v89 )
            {
              v98 = v49 - v97;
              v99 = v96 + v98;
              v97 = v96 + v98 - (_QWORD)v89;
              if ( v67 & 2 )
              {
                if ( v98 )
                {
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v99 != v96 );
                }
              }
              else if ( v67 & 0x20 && v91 )
              {
                if ( v91 >= v96 )
                {
                  v91 = v96;
                }
                else
                {
                  v100 = -1LL;
                  do
                  {
                    *(_BYTE *)(v99 + v100) = *(_BYTE *)(v96 + v100);
                    --v100;
                  }
                  while ( v100 != v91 - 1 - v96 );
                }
                if ( v98 )
                {
                  v101 = v91 + v98;
                  do
                    *(_BYTE *)(++v91 - 1) = 48;
                  while ( v91 != v101 );
                }
              }
              else
              {
                v111 = -1LL;
                if ( (unsigned __int64)v89 < v96 )
                {
                  do
                  {
                    *(_BYTE *)(v99 + v111) = *(_BYTE *)(v96 + v111);
                    --v111;
                  }
                  while ( &v89[-v96 - 1] != (char *)v111 );
                  v96 = (unsigned __int64)v89;
                }
                if ( v98 )
                {
                  v112 = v96 + v98;
                  do
                    *(_BYTE *)(++v96 - 1) = 32;
                  while ( v96 != v112 );
                }
              }
            }
            if ( (unsigned __int64)v160 <= v97 )
              goto LABEL_198;
            v102 = v97 + v18;
            v14 = v97 + v18;
            if ( v10 - v18 <= v97 )
            {
              if ( __CFADD__(v97, v18) )
              {
                if ( v10 != -1LL )
                  goto LABEL_88;
              }
              else if ( v10 < v102 )
              {
                if ( v10 )
                {
                  if ( (v10 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_88;
                  v10 *= 2LL;
                  if ( v10 < v102 )
                    goto LABEL_367;
                }
                else
                {
                  if ( v102 <= 0xC )
                  {
                    v10 = 12LL;
                    goto LABEL_275;
                  }
LABEL_367:
                  if ( v102 == -1LL )
                    goto LABEL_88;
                  v10 = v97 + v18;
                }
LABEL_275:
                if ( v13 && v13 != src )
                {
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v103 = (char *)realloc(v13, v10);
                  if ( !v103 )
                    goto LABEL_88;
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  v13 = v103;
                }
                else
                {
                  LOBYTE(v157) = v13 == src;
                  *(_QWORD *)&v159 = v97;
                  v160 = v89;
                  v113 = malloc(v10);
                  v89 = (char *)v160;
                  v97 = *(_QWORD *)&v159;
                  if ( !v113 )
                    goto LABEL_88;
                  if ( v18 && (_BYTE)v157 )
                  {
                    v114 = (char *)memcpy(v113, v13, v18);
                    v89 = (char *)v160;
                    v97 = *(_QWORD *)&v159;
                    v13 = v114;
                  }
                  else
                  {
                    v13 = (char *)v113;
                  }
                }
              }
            }
            v160 = v89;
            memcpy(&v13[v18], v89, v97);
            if ( v160 != &v172 )
              free(v160);
            goto LABEL_110;
          }
LABEL_369:
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
    switch ( v28 )
    {
      case 21:
      case 22:
        v14 = v18;
        **((_QWORD **)v27 + 2) = v18;
        break;
      case 20:
        v14 = v18;
        **((_DWORD **)v27 + 2) = v18;
        break;
      case 19:
        v14 = v18;
        **((_WORD **)v27 + 2) = v18;
        break;
      case 18:
        v14 = v18;
        **((_BYTE **)v27 + 2) = v18;
        break;
      default:
LABEL_402:
        abort();
        return result;
    }
LABEL_110:
    v12 = (_BYTE *)*((_QWORD *)v11 + 1);
    v11 = (char *)v11 + 88;
    v15 = *(_BYTE **)v11;
    ++v156;
    if ( v15 != v12 )
      goto LABEL_14;
LABEL_111:
    v18 = v14;
  }
  v106 = v18;
  v107 = v18 + 1;
  if ( v18 >= 0xFFFFFFFFFFFFFFFFLL )
  {
    if ( v10 != -1LL )
      goto LABEL_88;
    goto LABEL_301;
  }
  if ( v10 >= v107 )
    goto LABEL_301;
  if ( v10 )
  {
    if ( (v10 & 0x8000000000000000LL) != 0LL )
      goto LABEL_88;
    v10 *= 2LL;
    if ( v10 >= v107 )
      goto LABEL_297;
    goto LABEL_387;
  }
  if ( v107 > 0xC )
  {
LABEL_387:
    if ( v107 == -1LL )
      goto LABEL_88;
    v10 = v18 + 1;
    goto LABEL_297;
  }
  v10 = 12LL;
LABEL_297:
  v108 = v13 == src;
  if ( !v13 || v108 )
  {
    v142 = malloc(v10);
    if ( !v142 )
      goto LABEL_88;
    if ( v106 && v108 )
      v13 = (char *)memcpy(v142, v13, v106);
    else
      v13 = (char *)v142;
  }
  else
  {
    v109 = (char *)realloc(v13, v10);
    if ( !v109 )
      goto LABEL_126;
    v13 = v109;
  }
LABEL_301:
  v13[v106] = 0;
  if ( v10 > v107 && v13 != src )
  {
    v110 = (char *)realloc(v13, v107);
    if ( v110 )
      v13 = v110;
  }
  if ( ptr )
    free(ptr);
  if ( v168 != &v171 )
    free(v168);
  if ( v165 != &v166 )
    free(v165);
  *v153 = v106;
  return v13;
}

signed __int64 __fastcall sub_40F3A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax@1
  unsigned __int64 v3; // rdx@2
  unsigned int v4; // ecx@4
  _QWORD *v5; // r10@5
  signed __int64 result; // rax@8
  unsigned int v7; // ecx@9
  _DWORD *v8; // r10@10
  unsigned int v9; // ecx@12
  _DWORD *v10; // r10@13
  unsigned int v11; // ecx@15
  _DWORD *v12; // r10@16
  unsigned int v13; // ecx@22
  _QWORD *v14; // r10@23
  long double *v15; // rcx@25
  unsigned int v16; // ecx@26
  void **v17; // r10@27
  void *v18; // rcx@28
  unsigned int v19; // ecx@31
  const char **v20; // r10@32
  const char *v21; // rcx@33

  v2 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 )
  {
    v3 = 0LL;
    while ( 2 )
    {
      switch ( *(_DWORD *)v2 )
      {
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
          v4 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v5 = *(_QWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v5 + 1;
          }
          else
          {
            v5 = (_QWORD *)(*(_QWORD *)(a1 + 16) + v4);
            *(_DWORD *)a1 = v4 + 8;
          }
          *(_QWORD *)(v2 + 16) = *v5;
          goto LABEL_7;
        case 5:
        case 6:
        case 0xD:
        case 0xE:
          v7 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v8 = *(_DWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v8 + 2;
          }
          else
          {
            v8 = (_DWORD *)(*(_QWORD *)(a1 + 16) + v7);
            *(_DWORD *)a1 = v7 + 8;
          }
          *(_DWORD *)(v2 + 16) = *v8;
          goto LABEL_7;
        case 3:
        case 4:
          v9 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v10 = *(_DWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v10 + 2;
          }
          else
          {
            v10 = (_DWORD *)(*(_QWORD *)(a1 + 16) + v9);
            *(_DWORD *)a1 = v9 + 8;
          }
          *(_WORD *)(v2 + 16) = *v10;
          goto LABEL_7;
        case 1:
        case 2:
          v11 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v12 = *(_DWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v12 + 2;
          }
          else
          {
            v12 = (_DWORD *)(*(_QWORD *)(a1 + 16) + v11);
            *(_DWORD *)a1 = v11 + 8;
          }
          *(_BYTE *)(v2 + 16) = *v12;
          goto LABEL_7;
        case 0xB:
          v13 = *(_DWORD *)(a1 + 4);
          if ( v13 > 0xAF )
          {
            v14 = *(_QWORD **)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v14 + 1;
          }
          else
          {
            v14 = (_QWORD *)(*(_QWORD *)(a1 + 16) + v13);
            *(_DWORD *)(a1 + 4) = v13 + 16;
          }
          *(_QWORD *)(v2 + 16) = *v14;
          goto LABEL_7;
        case 0xC:
          v15 = (long double *)((*(_QWORD *)(a1 + 8) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
          *(_QWORD *)(a1 + 8) = v15 + 1;
          *(long double *)(v2 + 16) = *v15;
          goto LABEL_7;
        case 0x10:
          v16 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v17 = *(void ***)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v17 + 1;
          }
          else
          {
            v17 = (void **)(*(_QWORD *)(a1 + 16) + v16);
            *(_DWORD *)a1 = v16 + 8;
          }
          v18 = *v17;
          if ( !*v17 )
            v18 = &unk_413AC0;
          *(_QWORD *)(v2 + 16) = v18;
          goto LABEL_7;
        case 0xF:
          v19 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 > 0x2Fu )
          {
            v20 = *(const char ***)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v20 + 1;
          }
          else
          {
            v20 = (const char **)(*(_QWORD *)(a1 + 16) + v19);
            *(_DWORD *)a1 = v19 + 8;
          }
          v21 = *v20;
          if ( !*v20 )
            v21 = "(NULL)";
          *(_QWORD *)(v2 + 16) = v21;
LABEL_7:
          ++v3;
          v2 += 32LL;
          if ( *(_QWORD *)a2 <= v3 )
            goto LABEL_8;
          continue;
        default:
          result = 0xFFFFFFFFLL;
          break;
      }
      break;
    }
  }
  else
  {
LABEL_8:
    result = 0LL;
  }
  return result;
}

signed __int64 __fastcall sub_40F5C0(signed __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rcx@1
  signed __int64 *v4; // r8@1
  __int64 v5; // r15@1
  unsigned __int64 v6; // r9@1
  unsigned __int64 v7; // r11@1
  signed __int64 v8; // r13@1
  signed __int64 v9; // rbp@2
  unsigned __int64 v11; // r14@7
  signed __int64 v12; // r12@7
  char v13; // bl@7
  signed __int64 v14; // rcx@17
  signed int v15; // eax@27
  signed __int64 v16; // rax@37
  int v17; // eax@39
  unsigned __int64 v18; // rbx@40
  void *v19; // r13@41
  unsigned __int64 v20; // rdx@42
  char *v21; // rax@46
  bool v22; // zf@48
  signed __int64 v23; // rax@49
  char *v24; // rcx@49
  int v25; // eax@51
  unsigned __int64 v26; // rbx@52
  unsigned __int64 v27; // rdx@54
  char *v28; // rax@58
  signed int v29; // ecx@62
  unsigned __int64 v30; // rax@66
  signed int *v31; // rax@69
  signed __int64 v32; // rax@71
  signed __int64 v33; // rbx@74
  void *v34; // r12@75
  _QWORD *v35; // rax@76
  _BYTE *v36; // rax@8
  unsigned __int64 v37; // rax@84
  unsigned __int64 v38; // r9@88
  void *v39; // rax@92
  const void *v40; // rsi@92
  _QWORD *v41; // rax@95
  signed __int64 *v42; // ST38_8@96
  unsigned __int64 v43; // ST30_8@96
  _QWORD *v44; // rax@96
  _BYTE *v45; // rdx@99
  unsigned __int64 v46; // rsi@102
  signed __int64 v47; // rdx@104
  __int64 v48; // rax@104
  signed __int64 v49; // rdi@106
  unsigned __int8 v50; // cf@107
  unsigned __int64 v51; // rdx@107
  unsigned __int8 v52; // bl@107
  signed __int64 *v53; // ST08_8@133
  void *v54; // rdi@134
  unsigned __int64 v55; // r9@139
  void *v56; // rax@143
  signed __int64 i; // rcx@149
  signed __int64 v58; // rdx@151
  unsigned __int64 v59; // rax@152
  const void *v60; // rsi@159
  signed __int64 *v61; // ST48_8@159
  unsigned __int64 v62; // ST40_8@159
  unsigned __int64 v63; // ST38_8@159
  signed int v64; // ST30_4@159
  signed __int64 *v65; // ST08_8@162
  void *v66; // rdi@163
  unsigned __int64 v67; // r9@166
  void *v68; // rax@170
  void *v69; // rax@175
  signed __int64 *v70; // ST48_8@177
  unsigned __int64 v71; // ST40_8@177
  unsigned __int64 v72; // ST38_8@177
  signed __int64 v73; // ST30_8@177
  unsigned __int64 v74; // rax@180
  signed __int64 v75; // rsi@182
  __int64 v76; // rdx@182
  signed __int64 v77; // rcx@184
  unsigned __int64 v78; // rdx@185
  unsigned __int8 v79; // si@185
  _BYTE *v80; // rdx@190
  unsigned __int64 v81; // rsi@193
  signed __int64 v82; // rdx@195
  __int64 v83; // rax@195
  char *v84; // rdi@197
  unsigned __int64 v85; // rdx@198
  unsigned __int8 v86; // bl@198
  void *v87; // rax@203
  signed __int64 *v88; // ST48_8@205
  unsigned __int64 v89; // ST40_8@205
  unsigned __int64 v90; // ST38_8@205
  char *v91; // ST30_8@205
  void *src; // [sp+8h] [bp-80h]@1
  unsigned __int64 v93; // [sp+10h] [bp-78h]@1
  unsigned __int64 v94; // [sp+18h] [bp-70h]@1
  unsigned __int64 v95; // [sp+20h] [bp-68h]@1
  signed __int64 v96; // [sp+28h] [bp-60h]@1
  unsigned __int64 v97; // [sp+30h] [bp-58h]@75
  signed __int64 v98; // [sp+30h] [bp-58h]@91
  signed int v99; // [sp+30h] [bp-58h]@142
  char *v100; // [sp+30h] [bp-58h]@169
  signed __int64 *v101; // [sp+38h] [bp-50h]@75
  unsigned __int64 v102; // [sp+38h] [bp-50h]@91
  unsigned __int64 v103; // [sp+38h] [bp-50h]@142
  unsigned __int64 v104; // [sp+38h] [bp-50h]@169
  unsigned __int64 v105; // [sp+40h] [bp-48h]@91
  unsigned __int64 v106; // [sp+40h] [bp-48h]@142
  unsigned __int64 v107; // [sp+40h] [bp-48h]@169
  signed __int64 *v108; // [sp+48h] [bp-40h]@91
  signed __int64 *v109; // [sp+48h] [bp-40h]@142
  signed __int64 *v110; // [sp+48h] [bp-40h]@169

  v3 = (_QWORD *)(a2 + 32);
  v4 = (signed __int64 *)a2;
  v5 = a3;
  v6 = 7LL;
  v7 = 7LL;
  v8 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a2 + 32;
  v96 = a2 + 32;
  *(_QWORD *)a3 = 0LL;
  src = (void *)(a3 + 16);
  *(_QWORD *)(a3 + 8) = a3 + 16;
  v94 = 0LL;
  v93 = 0LL;
  v95 = 0LL;
  while ( 1 )
  {
    if ( !*(_BYTE *)a1 )
    {
      v3[11 * v8] = a1;
      v4[2] = v93;
      v4[3] = v94;
      return 0LL;
    }
    v9 = a1 + 1;
    if ( *(_BYTE *)a1 == 37 )
      break;
LABEL_3:
    a1 = v9;
  }
  v11 = -1LL;
  v12 = (signed __int64)&v3[11 * v8];
  *(_QWORD *)v12 = a1;
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_QWORD *)(v12 + 32) = 0LL;
  *(_QWORD *)(v12 + 40) = -1LL;
  *(_QWORD *)(v12 + 48) = 0LL;
  *(_QWORD *)(v12 + 56) = 0LL;
  *(_QWORD *)(v12 + 64) = -1LL;
  *(_QWORD *)(v12 + 80) = -1LL;
  v13 = *(_BYTE *)(a1 + 1);
  if ( (unsigned __int8)(v13 - 48) > 9u )
    goto LABEL_17;
  v36 = (_BYTE *)(a1 + 1);
  do
    ++v36;
  while ( (unsigned __int8)(*v36 - 48) <= 9u );
  if ( *v36 != 36 )
  {
    v11 = -1LL;
    goto LABEL_17;
  }
  v74 = 0LL;
  do
  {
    v75 = -1LL;
    v76 = v13 - 48;
    if ( v74 <= 0x1999999999999999LL )
      v75 = 10 * v74;
    v77 = v9;
    while ( 1 )
    {
      v13 = *(_BYTE *)(v9 + 1);
      v50 = __CFADD__(v75, v76);
      v78 = v75 + v76;
      v74 = v78;
      ++v9;
      v79 = v13 - 48;
      if ( !v50 )
        break;
      if ( v79 > 9u )
        goto LABEL_131;
      v75 = -1LL;
      v77 = v9;
      v76 = v13 - 48;
    }
  }
  while ( v79 <= 9u );
  v11 = v78 - 1;
  if ( v78 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_131;
  v9 = v77 + 2;
  v13 = *(_BYTE *)(v77 + 2);
  while ( 1 )
  {
LABEL_17:
    v14 = v9 + 1;
    if ( v13 == 39 )
    {
      *(_DWORD *)(v12 + 16) |= 1u;
      goto LABEL_16;
    }
    if ( v13 == 45 )
    {
      *(_DWORD *)(v12 + 16) |= 2u;
      goto LABEL_16;
    }
    if ( v13 == 43 )
    {
      *(_DWORD *)(v12 + 16) |= 4u;
      goto LABEL_16;
    }
    if ( v13 == 32 )
    {
      *(_DWORD *)(v12 + 16) |= 8u;
      goto LABEL_16;
    }
    if ( v13 == 35 )
    {
      *(_DWORD *)(v12 + 16) |= 0x10u;
      goto LABEL_16;
    }
    if ( v13 != 48 )
      break;
    *(_DWORD *)(v12 + 16) |= 0x20u;
LABEL_16:
    v13 = *(_BYTE *)v14;
    ++v9;
  }
  if ( v13 == 73 )
  {
    *(_DWORD *)(v12 + 16) |= 0x40u;
    goto LABEL_16;
  }
  if ( v13 != 42 )
  {
    if ( (unsigned __int8)(v13 - 48) <= 9u )
    {
      *(_QWORD *)(v12 + 24) = v9;
      if ( (unsigned __int8)(*(_BYTE *)v9 - 48) <= 9u )
      {
        for ( i = v9; ; ++i )
        {
          v58 = i + 1;
          if ( (unsigned __int8)(*(_BYTE *)(i + 1) - 48) > 9u )
            break;
        }
        v14 = i + 2;
        v59 = v58 - v9;
        v9 = v58;
        if ( v93 >= v59 )
          v59 = v93;
        v93 = v59;
      }
      *(_QWORD *)(v12 + 32) = v9;
      v13 = *(_BYTE *)v9;
    }
    goto LABEL_26;
  }
  v16 = 1LL;
  *(_QWORD *)(v12 + 24) = v9;
  *(_QWORD *)(v12 + 32) = v14;
  if ( v93 )
    v16 = v93;
  v93 = v16;
  v17 = *(_BYTE *)(v9 + 1);
  if ( (unsigned __int8)(*(_BYTE *)(v9 + 1) - 48) > 9u )
    goto LABEL_215;
  v45 = (_BYTE *)(v9 + 1);
  do
    ++v45;
  while ( (unsigned __int8)(*v45 - 48) <= 9u );
  if ( *v45 != 36 )
  {
LABEL_215:
    v18 = *(_QWORD *)(v12 + 40);
    if ( v18 != -1LL )
      goto LABEL_41;
    *(_QWORD *)(v12 + 40) = v95;
    if ( v95 != -1LL )
    {
      v18 = v95++;
      goto LABEL_41;
    }
    goto LABEL_131;
  }
  v46 = 0LL;
  do
  {
    v47 = -1LL;
    v48 = v17 - 48;
    if ( v46 <= 0x1999999999999999LL )
      v47 = 10 * v46;
    v49 = v14;
    while ( 1 )
    {
      v50 = __CFADD__(v48, v47);
      v51 = v48 + v47;
      v17 = *(_BYTE *)(v14 + 1);
      v46 = v51;
      ++v14;
      v52 = v17 - 48;
      if ( !v50 )
        break;
      if ( v52 > 9u )
        goto LABEL_131;
      v47 = -1LL;
      v49 = v14;
      v48 = v17 - 48;
    }
  }
  while ( v52 <= 9u );
  v18 = v51 - 1;
  if ( v51 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_131;
  *(_QWORD *)(v12 + 40) = v18;
  v14 = v49 + 2;
LABEL_41:
  v19 = *(void **)(v5 + 8);
  if ( v6 > v18 )
  {
    v20 = *(_QWORD *)v5;
    goto LABEL_43;
  }
  v38 = 2 * v6;
  if ( v38 <= v18 )
    v38 = v18 + 1;
  if ( v38 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_160;
  v108 = v4;
  v105 = v38;
  v102 = v7;
  v98 = v14;
  if ( src == v19 )
  {
    v69 = malloc(32 * v38);
    v14 = v98;
    v7 = v102;
    v6 = v105;
    v4 = v108;
    if ( !v69 )
      goto LABEL_163;
    v20 = *(_QWORD *)v5;
    v40 = src;
    v19 = v69;
LABEL_177:
    v70 = v4;
    v71 = v6;
    v72 = v7;
    v73 = v14;
    memcpy(v19, v40, 32 * v20);
    v20 = *(_QWORD *)v5;
    v4 = v70;
    v6 = v71;
    v7 = v72;
    v14 = v73;
    goto LABEL_94;
  }
  v39 = realloc(v19, 32 * v38);
  v40 = *(const void **)(v5 + 8);
  v14 = v98;
  v19 = v39;
  v7 = v102;
  v6 = v105;
  v4 = v108;
  if ( !v39 )
    goto LABEL_161;
  v20 = *(_QWORD *)v5;
  if ( src == v40 )
    goto LABEL_177;
LABEL_94:
  *(_QWORD *)(v5 + 8) = v19;
LABEL_43:
  if ( v20 <= v18 )
  {
    do
      *((_DWORD *)v19 + 8 * ++v20 - 8) = 0;
    while ( v20 <= v18 );
    *(_QWORD *)v5 = v20;
  }
  v21 = (char *)v19 + 32 * v18;
  if ( *(_DWORD *)v21 )
  {
    if ( *(_DWORD *)v21 != 5 )
      goto LABEL_132;
    v13 = *(_BYTE *)v14;
    v9 = v14++;
LABEL_26:
    if ( v13 != 46 )
      goto LABEL_27;
LABEL_48:
    v22 = *(_BYTE *)(v9 + 1) == 42;
    *(_QWORD *)(v12 + 48) = v9;
    if ( !v22 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(v9 + 1) - 48) > 9u )
      {
        v9 = v14;
        v37 = 1LL;
      }
      else
      {
        do
          ++v14;
        while ( (unsigned __int8)(*(_BYTE *)v14 - 48) <= 9u );
        v37 = v14 - v9;
        v9 = v14;
      }
      *(_QWORD *)(v12 + 56) = v14;
      v13 = *(_BYTE *)v14;
      if ( v94 >= v37 )
        v37 = v94;
      v94 = v37;
      goto LABEL_27;
    }
    v23 = 2LL;
    v24 = (char *)(v9 + 2);
    *(_QWORD *)(v12 + 56) = v9 + 2;
    if ( v94 >= 2 )
      v23 = v94;
    v94 = v23;
    v25 = *(_BYTE *)(v9 + 2);
    if ( (unsigned __int8)(*(_BYTE *)(v9 + 2) - 48) > 9u )
      goto LABEL_216;
    v80 = (_BYTE *)(v9 + 2);
    do
      ++v80;
    while ( (unsigned __int8)(*v80 - 48) <= 9u );
    if ( *v80 != 36 )
    {
LABEL_216:
      v26 = *(_QWORD *)(v12 + 64);
      if ( v26 == -1LL )
      {
        *(_QWORD *)(v12 + 64) = v95;
        if ( v95 == -1LL )
          goto LABEL_131;
        v26 = v95++;
      }
LABEL_53:
      v19 = *(void **)(v5 + 8);
      if ( v6 > v26 )
      {
        v27 = *(_QWORD *)v5;
        goto LABEL_55;
      }
      v67 = 2 * v6;
      if ( v67 <= v26 )
        v67 = v26 + 1;
      if ( v67 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_160;
      v110 = v4;
      v107 = v67;
      v104 = v7;
      v100 = v24;
      if ( src != v19 )
      {
        v68 = realloc(v19, 32 * v67);
        v40 = *(const void **)(v5 + 8);
        v24 = v100;
        v19 = v68;
        v7 = v104;
        v6 = v107;
        v4 = v110;
        if ( !v68 )
          goto LABEL_161;
        v27 = *(_QWORD *)v5;
        if ( src != v40 )
          goto LABEL_172;
        goto LABEL_205;
      }
      v87 = malloc(32 * v67);
      v24 = v100;
      v7 = v104;
      v6 = v107;
      v4 = v110;
      if ( v87 )
      {
        v27 = *(_QWORD *)v5;
        v40 = src;
        v19 = v87;
LABEL_205:
        v88 = v4;
        v89 = v6;
        v90 = v7;
        v91 = v24;
        memcpy(v19, v40, 32 * v27);
        v27 = *(_QWORD *)v5;
        v4 = v88;
        v6 = v89;
        v7 = v90;
        v24 = v91;
LABEL_172:
        *(_QWORD *)(v5 + 8) = v19;
LABEL_55:
        if ( v27 <= v26 )
        {
          do
            *((_DWORD *)v19 + 8 * ++v27 - 8) = 0;
          while ( v27 <= v26 );
          *(_QWORD *)v5 = v27;
        }
        v28 = (char *)v19 + 32 * v26;
        if ( *(_DWORD *)v28 )
        {
          if ( *(_DWORD *)v28 != 5 )
            goto LABEL_132;
          v13 = *v24;
          v9 = (signed __int64)v24;
        }
        else
        {
          *(_DWORD *)v28 = 5;
          v9 = (signed __int64)v24;
          v13 = *v24;
        }
        goto LABEL_27;
      }
LABEL_163:
      v66 = (void *)v4[1];
      if ( (void *)v96 != v66 )
        free(v66);
      goto LABEL_165;
    }
    v81 = 0LL;
    do
    {
      v82 = -1LL;
      v83 = v25 - 48;
      if ( v81 <= 0x1999999999999999LL )
        v82 = 10 * v81;
      v84 = v24;
      while ( 1 )
      {
        v50 = __CFADD__(v83, v82);
        v85 = v83 + v82;
        v25 = *++v24;
        v81 = v85;
        v86 = v25 - 48;
        if ( !v50 )
          break;
        if ( v86 > 9u )
          goto LABEL_131;
        v82 = -1LL;
        v84 = v24;
        v83 = v25 - 48;
      }
    }
    while ( v86 <= 9u );
    v26 = v85 - 1;
    if ( v85 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *(_QWORD *)(v12 + 64) = v26;
      v24 = v84 + 2;
      goto LABEL_53;
    }
LABEL_131:
    v19 = *(void **)(v5 + 8);
    goto LABEL_132;
  }
  *(_DWORD *)v21 = 5;
  v13 = *(_BYTE *)v14;
  v9 = v14++;
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
      v13 = *(_BYTE *)v9;
      continue;
    }
    break;
  }
  switch ( v13 )
  {
    case 115:
      v29 = (v15 > 7) + 15;
      break;
    case 37:
      goto LABEL_71;
    case 99:
      v29 = (v15 > 7) + 13;
      break;
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
      break;
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
      break;
    case 112:
      v29 = 17;
      break;
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
      break;
    case 83:
      v29 = 16;
      v13 = 115;
      break;
    case 67:
      v29 = 14;
      v13 = 99;
      break;
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
      break;
    default:
      goto LABEL_131;
  }
  if ( v11 != -1LL )
  {
    *(_QWORD *)(v12 + 80) = v11;
    goto LABEL_65;
  }
  *(_QWORD *)(v12 + 80) = v95;
  if ( v95 == -1LL )
    goto LABEL_131;
  v11 = v95++;
LABEL_65:
  v19 = *(void **)(v5 + 8);
  if ( v6 <= v11 )
  {
    v55 = 2 * v6;
    if ( v55 <= v11 )
      v55 = v11 + 1;
    if ( v55 <= 0x7FFFFFFFFFFFFFFLL )
    {
      v109 = v4;
      v106 = v55;
      v103 = v7;
      v99 = v29;
      if ( src == v19 )
      {
        v56 = malloc(32 * v55);
        v29 = v99;
        v7 = v103;
        v6 = v106;
        v4 = v109;
        if ( !v56 )
          goto LABEL_163;
        goto LABEL_159;
      }
      v56 = realloc(v19, 32 * v55);
      v29 = v99;
      v7 = v103;
      v19 = v56;
      v6 = v106;
      v4 = v109;
      if ( v56 )
      {
        if ( src != *(void **)(v5 + 8) )
        {
LABEL_145:
          *(_QWORD *)(v5 + 8) = v19;
          goto LABEL_66;
        }
        v19 = src;
LABEL_159:
        v60 = v19;
        v61 = v4;
        v62 = v6;
        v19 = v56;
        v63 = v7;
        v64 = v29;
        memcpy(v56, v60, 32LL * *(_QWORD *)v5);
        v4 = v61;
        v29 = v64;
        v6 = v62;
        v7 = v63;
        goto LABEL_145;
      }
LABEL_211:
      v40 = *(const void **)(v5 + 8);
LABEL_161:
      if ( src == v40 )
        goto LABEL_163;
      goto LABEL_162;
    }
LABEL_160:
    v40 = v19;
    goto LABEL_161;
  }
LABEL_66:
  v30 = *(_QWORD *)v5;
  if ( *(_QWORD *)v5 <= v11 )
  {
    do
      *((_DWORD *)v19 + 8 * ++v30 - 8) = 0;
    while ( v30 <= v11 );
    *(_QWORD *)v5 = v30;
  }
  v31 = (signed int *)((char *)v19 + 32 * v11);
  if ( !*v31 )
  {
    *v31 = v29;
    goto LABEL_71;
  }
  if ( *v31 == v29 )
  {
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
    if ( (v7 & 0x8000000000000000LL) != 0LL )
      goto LABEL_211;
    v33 = 2 * v7;
    if ( 2 * v7 > 0x2E8BA2E8BA2E8BALL )
      goto LABEL_211;
    v34 = (void *)v4[1];
    v101 = v4;
    v97 = v6;
    if ( (void *)v96 != v34 )
    {
      v35 = realloc(v34, 176 * v7);
      v6 = v97;
      v4 = v101;
      v3 = v35;
      if ( !v35 )
        goto LABEL_211;
      v34 = (void *)v101[1];
      v8 = *v101;
      if ( (void *)v96 == v34 )
      {
LABEL_96:
        v42 = v4;
        v43 = v6;
        v44 = memcpy(v3, v34, 88 * v8);
        v4 = v42;
        v6 = v43;
        v3 = v44;
        v8 = *v42;
      }
      v4[1] = (signed __int64)v3;
      v7 = v33;
      goto LABEL_3;
    }
    v41 = malloc(176 * v7);
    v6 = v97;
    v4 = v101;
    v3 = v41;
    if ( v41 )
      goto LABEL_96;
    v40 = *(const void **)(v5 + 8);
    if ( src == v40 )
    {
LABEL_165:
      *__errno_location() = 12;
      return 0xFFFFFFFFLL;
    }
LABEL_162:
    v65 = v4;
    free((void *)v40);
    v4 = v65;
    goto LABEL_163;
  }
LABEL_132:
  if ( src != v19 )
  {
    v53 = v4;
    free(v19);
    v4 = v53;
  }
  v54 = (void *)v4[1];
  if ( (void *)v96 != v54 )
    free(v54);
  *__errno_location() = 22;
  return 0xFFFFFFFFLL;
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_410340(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_617308 )
    v1 = unk_617308;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_410358(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_616E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
