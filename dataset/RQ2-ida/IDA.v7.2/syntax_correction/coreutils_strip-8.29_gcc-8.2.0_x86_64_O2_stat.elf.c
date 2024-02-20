#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  int v3; // er14
  struct lconv *v4; // rax
  const char *v5; // rdi
  unsigned int v6; // ebx
  unsigned __int8 v7; // bp
  int v8; // er12
  char *v9; // rax
  char *v10; // rbx
  int v11; // eax
  const char **v12; // rbx
  char **v13; // r15
  char v14; // r13
  char v15; // al
  const char *v16; // r14
  bool v17; // zf
  bool v18; // al
  void *v19; // rdi
  __int64 v20; // r14
  char *v21; // rax
  char *v22; // r14
  int *v23; // rax
  const char *v25; // rsi
  char *v26; // r14
  int *v27; // rax
  __int64 v28; // rbx
  char *v29; // rax
  char *v30; // rax
  void *src; // [rsp+8h] [rbp-E0h]
  __int64 v32; // [rsp+10h] [rbp-D8h]
  __int64 v33; // [rsp+18h] [rbp-D0h]
  struct stat stat_buf; // [rsp+20h] [rbp-C8h]

  v3 = a1;
  sub_4072F0(*a2);
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
  sub_410340(sub_405530);
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
    else
    {
      switch ( v8 )
      {
        case 116:
          v6 = 1;
          break;
        case 128:
          byte_617480 = 1;
          off_617310 = "";
          src = (void *)qword_617638;
          break;
        case 102:
          v7 = 1;
          break;
        default:
          goto LABEL_14;
      }
    }
  }
  if ( dword_61739C == v3 )
  {
    v30 = dcgettext(0LL, "missing operand", 5);
    error(0, 0, v30);
    goto LABEL_14;
  }
  if ( src )
  {
    v32 = (__int64)src;
    if ( sub_40BD00(src, "%N") )
    {
      v9 = getenv("QUOTING_STYLE");
      v10 = v9;
      if ( v9 )
      {
        v11 = sub_405190(v9, off_413240, dword_413200, 4LL);
        if ( v11 < 0 )
        {
          sub_4088B0(0LL, 4LL);
          v28 = sub_408F10(v10);
          v29 = dcgettext(0LL, "ignoring invalid value of environment variable QUOTING_STYLE: %s", 5);
          error(0, 0, v29, v28);
        }
        else
        {
          sub_4088B0(0LL, (unsigned int)dword_413200[v11]);
        }
        v32 = (__int64)src;
      }
      else
      {
        sub_4088B0(0LL, 4LL);
        v32 = (__int64)src;
      }
    }
  }
  else
  {
    src = (void *)sub_403E80(v7, v6, 0LL);
    v32 = sub_403E80(v7, v6, 1LL);
  }
  if ( v3 > dword_61739C )
  {
    v12 = (const char **)&a2[dword_61739C];
    v13 = &(&a2[dword_61739C + 1])[(unsigned __int64)(unsigned int)(v3 + ~dword_61739C)];
    v14 = 1;
    while ( 1 )
    {
      v16 = *v12;
      v17 = strcmp(*v12, "-") == 0;
      if ( v7 )
      {
        if ( v17 )
        {
          v20 = sub_408CC0(4LL, *v12);
          v21 = dcgettext(0LL, "using %s to denote standard input does not work in file system mode", 5);
          error(0, 0, v21, v20);
          v15 = 0;
        }
        else
        {
          if ( statfs(*v12, (struct statfs *)&stat_buf) )
          {
            v25 = "cannot read file system information for %s";
            v33 = sub_408CC0(4LL, v16);
LABEL_49:
            v26 = dcgettext(0LL, v25, 5);
            v27 = __errno_location();
            error(0, *v27, v26, v33);
            v15 = 0;
            goto LABEL_33;
          }
          v15 = (unsigned __int64)sub_4037B0(src) ^ 1;
        }
      }
      else
      {
        if ( !v17 )
        {
          if ( byte_617481 )
            v18 = __xstat(1, *v12, &stat_buf) != 0;
          else
            v18 = __lxstat(1, *v12, &stat_buf) != 0;
          if ( !v18 )
          {
LABEL_39:
            v19 = (void *)v32;
            if ( (stat_buf.st_mode & 0xB000) != 0x2000 )
              v19 = src;
            v15 = (unsigned __int64)sub_4037B0(v19) ^ 1;
            goto LABEL_33;
          }
          v25 = "cannot stat %s";
          v33 = sub_408CC0(4LL, v16);
          goto LABEL_49;
        }
        if ( !__fxstat(1, 0, &stat_buf) )
          goto LABEL_39;
        v22 = dcgettext(0LL, "cannot stat standard input", 5);
        v23 = __errno_location();
        error(0, *v23, v22);
        v15 = 0;
      }
LABEL_33:
      ++v12;
      v14 &= v15;
      if ( v13 == (char **)v12 )
        return (unsigned __int8)v14 ^ 1u;
    }
  }
  v14 = 1;
  return (unsigned __int8)v14 ^ 1u;
}

// positive sp value has been detected, the output may be wrong!
noreturn void __usercall  start(__int64 a1, void (*a2)(void))
{
  int v2; // esi
  int v3; // [rsp-8h] [rbp-8h]
  __int64 _0; // [rsp+0h] [rbp+0h]

  v2 = v3;
  *(_QWORD *)&v3 = a1;
  _libc_start_main((int (__fastcall *)(int, char **, char **))main, v2, (char **)&_0, init, fini, a2, &v3);
  __halt();
}

__int64 *sub_4028CB()
{
  __int64 *result; // rax

  result = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    result = 0LL;
  return result;
}

__int64 sub_4028EA()
{
  return 0LL;
}

__int64 *sub_402921()
{
  __int64 *result; // rax

  if ( !byte_6173C8 )
  {
    while ( qword_6173D0 < (unsigned __int64)(&qword_616E48 - qword_616E40 - 1) )
      ((void (*)(void))qword_616E40[++qword_6173D0])();
    result = sub_4028CB();
    byte_6173C8 = 1;
  }
  return result;
}

__int64 sub_402978()
{
  return sub_4028EA();
}

char *__fastcall sub_402980(__int64 a1, __int64 a2, const char *a3, char *a4)
{
  const char *v4; // r15
  unsigned __int64 v5; // r13
  char *v6; // r12
  unsigned __int64 v7; // rbx
  int v8; // er14
  char v9; // bp
  char *v10; // rax
  char *v11; // r13
  char *src; // [rsp+8h] [rbp-40h]

  v4 = a3;
  v5 = a1 + a2;
  v6 = (char *)(a1 + 1);
  v7 = a1 + 1;
  src = a4;
  if ( a1 + 1 < (unsigned __int64)(a1 + a2) )
  {
    while ( 1 )
    {
      v8 = *(char *)v7;
      v9 = *(_BYTE *)v7;
      v10 = strchr("'-+ #0I", v8);
      if ( !v10 )
        break;
      if ( strchr(v4, v8) )
        *v6++ = v9;
      if ( v5 <= ++v7 )
        return strcpy(v6, src);
    }
    if ( v7 < v5 )
    {
      v11 = (char *)(v5 - v7);
      while ( 1 )
      {
        (v10++)[(_QWORD)v6] = v9;
        if ( v11 == v10 )
          break;
        v9 = v10[v7];
      }
      v6 = &v6[(_QWORD)v11];
    }
  }
  return strcpy(v6, src);
}

__int64 __fastcall sub_402A30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp

  v3 = a3;
  sub_402980(a1, a2, (const char *)&unk_4103A7, (char *)&unk_4103A4);
  return __printf_chk(1LL, a1, v3);
}

__int64 __fastcall sub_402A70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp

  v3 = a3;
  sub_402980(a1, a2, "-", "s");
  return __printf_chk(1LL, a1, v3);
}

__int64 __fastcall sub_402AB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp

  v3 = a3;
  sub_402980(a1, a2, (const char *)&unk_4103AE, (char *)&unk_4103AB);
  return __printf_chk(1LL, a1, v3);
}

__int64 __fastcall sub_402AF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp

  v3 = a3;
  sub_402980(a1, a2, "'-+ 0", (char *)&unk_4103B2);
  return __printf_chk(1LL, a1, v3);
}

__int64 __fastcall sub_402B30(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v8; // r8
  char *v9; // rdx
  char *v10; // rax

  switch ( a3 )
  {
    case 83:
      v6 = *(_QWORD *)(a6 + 72);
      if ( v6 )
        goto LABEL_4;
      goto LABEL_3;
    case 84:
      v8 = *(_QWORD *)a6;
      if ( *(_QWORD *)a6 == 684539205LL )
      {
        v9 = (char *)&unk_41044A;
      }
      else if ( *(_QWORD *)a6 <= 684539205LL )
      {
        if ( v8 == 44533 )
        {
          v9 = "adfs";
        }
        else if ( v8 <= 44533 )
        {
          if ( v8 == 16964 )
          {
            v9 = "squashfs" + 5;
          }
          else if ( v8 > 16964 )
          {
            if ( v8 == 24053 )
            {
              v9 = "exofs";
            }
            else if ( v8 <= 24053 )
            {
              if ( v8 == 19780 )
              {
                v9 = "msdos";
              }
              else if ( v8 <= 19780 )
              {
                v9 = "hfs+";
                if ( v8 != 18475 )
                {
                  v9 = "hfsx";
                  if ( v8 != 18520 )
                    goto LABEL_20;
                }
              }
              else
              {
                v9 = "smb";
                if ( v8 != 20859 )
                {
                  v9 = "novell";
                  if ( v8 != 22092 )
                  {
                    v9 = "minix3";
                    if ( v8 != 19802 )
                      goto LABEL_20;
                  }
                }
              }
            }
            else if ( v8 == 38496 )
            {
              v9 = "isofs";
            }
            else if ( v8 > 38496 )
            {
              v9 = "openprom";
              if ( v8 != 40865 )
              {
                v9 = "usbdevfs";
                if ( v8 != 40866 )
                {
                  v9 = "proc";
                  if ( v8 != 40864 )
                    goto LABEL_20;
                }
              }
            }
            else
            {
              v9 = "romfs";
              if ( v8 != 29301 )
              {
                v9 = "jffs2";
                if ( v8 != 29366 )
                {
                  v9 = "nfs";
                  if ( v8 != 26985 )
                    goto LABEL_20;
                }
              }
            }
          }
          else if ( v8 == 5007 )
          {
            v9 = "minix (30 char.)";
          }
          else if ( v8 <= 5007 )
          {
            if ( v8 == 1984 )
            {
              v9 = "jffs";
            }
            else if ( v8 <= 1984 )
            {
              v9 = "qnx4";
              if ( v8 != 47 )
              {
                v9 = "autofs";
                if ( v8 != 391 )
                  goto LABEL_20;
              }
            }
            else
            {
              v9 = "ext";
              if ( v8 != 4989 )
              {
                v9 = "minix";
                if ( v8 != 4991 )
                {
                  v9 = "usbdevfs" + 3;
                  if ( v8 != 4979 )
                    goto LABEL_20;
                }
              }
            }
          }
          else if ( v8 == 13364 )
          {
            v9 = "nilfs";
          }
          else if ( v8 > 13364 )
          {
            v9 = "isofs";
            if ( v8 != 16388 )
            {
              v9 = "fat";
              if ( v8 != 16390 )
              {
                v9 = "isofs";
                if ( v8 != 0x4000 )
                  goto LABEL_20;
              }
            }
          }
          else
          {
            v9 = "minix v2";
            if ( v8 != 9320 )
            {
              v9 = "minix v2 (30 char.)";
              if ( v8 != 9336 )
              {
                v9 = "devpts";
                if ( v8 != 7377 )
                  goto LABEL_20;
              }
            }
          }
        }
        else if ( v8 == 19920821 )
        {
          v9 = "sysv4";
        }
        else if ( v8 > 19920821 )
        {
          if ( v8 == 198183888 )
          {
            v9 = "lustre";
          }
          else if ( v8 <= 198183888 )
          {
            if ( v8 == 19993000 )
            {
              v9 = "ibrix";
            }
            else if ( v8 <= 19993000 )
            {
              v9 = "sysv2";
              if ( v8 != 19920822 )
              {
                v9 = "coh";
                if ( v8 != 19920823 )
                  goto LABEL_20;
              }
            }
            else
            {
              v9 = "anon-inode FS";
              if ( v8 != 151263540 )
              {
                v9 = "futexfs";
                if ( v8 != 195894762 )
                {
                  v9 = "rdt";
                  if ( v8 != 124082209 )
                    goto LABEL_20;
                }
              }
            }
          }
          else if ( v8 == 427819522 )
          {
            v9 = "mqueue";
          }
          else if ( v8 > 427819522 )
          {
            v9 = "hugetlbfs" + 6;
            if ( v8 != 464386766 )
            {
              v9 = "ubifs";
              if ( v8 != 604313861 )
              {
                v9 = "fhgfs";
                if ( v8 != 428016422 )
                  goto LABEL_20;
              }
            }
          }
          else
          {
            v9 = "balloon-kvm-fs";
            if ( v8 != 325456742 )
            {
              v9 = "udf";
              if ( v8 != 352400198 )
              {
                v9 = "inodefs";
                if ( v8 != 288389204 )
                  goto LABEL_20;
              }
            }
          }
        }
        else if ( (_UNKNOWN *)v8 == &unk_414A53 )
        {
          v9 = "befs" + 1;
        }
        else if ( v8 <= (__int64)&unk_414A53 )
        {
          if ( v8 == 61267 )
          {
            v9 = "ext2/ext3";
          }
          else if ( v8 <= 61267 )
          {
            v9 = "affs";
            if ( v8 != 44543 )
            {
              v9 = "ext2";
              if ( v8 != 61265 )
                goto LABEL_20;
            }
          }
          else
          {
            v9 = "aufs" + 1;
            if ( v8 != 72020 )
            {
              v9 = "cgroupfs";
              if ( v8 != 2613483 )
              {
                v9 = "ecryptfs";
                if ( v8 != 61791 )
                  goto LABEL_20;
              }
            }
          }
        }
        else if ( v8 == 16914839 )
        {
          v9 = "v9fs";
        }
        else if ( v8 > 16914839 )
        {
          v9 = "xia";
          if ( v8 != 19911021 )
          {
            v9 = "xenix";
            if ( v8 != 19920820 )
            {
              v9 = "gfs/gfs2";
              if ( v8 != 18225520 )
                goto LABEL_20;
            }
          }
        }
        else
        {
          v9 = "ceph";
          if ( v8 != 12805120 )
          {
            v9 = "tmpfs";
            if ( v8 != 16914836 )
            {
              v9 = "hostfs";
              if ( v8 != 12648430 )
                goto LABEL_20;
            }
          }
        }
      }
      else if ( v8 == 1702057283 )
      {
        v9 = "fusectl";
      }
      else if ( v8 <= 1702057283 )
      {
        if ( v8 == 1397703499 )
        {
          v9 = "sockfs";
        }
        else if ( v8 > 1397703499 )
        {
          if ( v8 == 1634035564 )
          {
            v9 = "pstorefs";
          }
          else if ( v8 <= 1634035564 )
          {
            if ( v8 == 1479104553 )
            {
              v9 = "zsmallocfs";
            }
            else if ( v8 <= 1479104553 )
            {
              v9 = "aufs" + 1;
              if ( v8 != 1410924800 )
              {
                v9 = "vzfs";
                if ( v8 != 1448756819 )
                  goto LABEL_20;
              }
            }
            else
            {
              v9 = "aafs";
              if ( v8 != 1513908720 )
              {
                v9 = "acfs";
                if ( v8 != 1633904243 )
                {
                  v9 = "daxfs" + 2;
                  if ( v8 != 1481003842 )
                    goto LABEL_20;
                }
              }
            }
          }
          else if ( v8 == 1650812274 )
          {
            v9 = "sysfs";
          }
          else if ( v8 > 1650812274 )
          {
            v9 = "debugfs";
            if ( v8 != 1684170528 )
            {
              v9 = "daxfs";
              if ( v8 != 1684300152 )
              {
                v9 = "cgroup2fs";
                if ( v8 != 1667723888 )
                  goto LABEL_20;
              }
            }
          }
          else
          {
            v9 = "usbdevfs" + 2;
            if ( v8 != 1650746742 )
            {
              v9 = "configfs";
              if ( v8 != 1650812272 )
              {
                v9 = "aufs";
                if ( v8 != 1635083891 )
                  goto LABEL_20;
              }
            }
          }
        }
        else if ( v8 == 1161678120 )
        {
          v9 = "cramfs-wend";
        }
        else if ( v8 <= 1161678120 )
        {
          if ( v8 == 827541066 )
          {
            v9 = "jfs";
          }
          else if ( v8 <= 827541066 )
          {
            v9 = "inotifyfs";
            if ( v8 != 732765674 )
            {
              v9 = "zfs";
              if ( v8 != 801189825 )
                goto LABEL_20;
            }
          }
          else
          {
            v9 = "binfmt_misc";
            if ( v8 != 1112100429 )
            {
              v9 = "smackfs";
              if ( v8 != 1128357203 )
              {
                v9 = "befs";
                if ( v8 != 1111905073 )
                  goto LABEL_20;
              }
            }
          }
        }
        else if ( v8 == 1397109069 )
        {
          v9 = "m1fs";
        }
        else if ( v8 > 1397109069 )
        {
          v9 = "wslfs";
          if ( v8 != 1397114950 )
          {
            v9 = "ntfs";
            if ( v8 != 1397118030 )
            {
              v9 = "afs";
              if ( v8 != 1397113167 )
                goto LABEL_20;
            }
          }
        }
        else
        {
          v9 = "pipefs";
          if ( v8 != 1346981957 )
          {
            v9 = "reiserfs";
            if ( v8 != 1382369651 )
            {
              v9 = "gpfs";
              if ( v8 != 1196443219 )
                goto LABEL_20;
            }
          }
        }
      }
      else if ( v8 == 2240043254LL )
      {
        v9 = "ramfs";
      }
      else if ( v8 <= 2240043254LL )
      {
        if ( v8 == 1935894131 )
        {
          v9 = "securityfs";
        }
        else if ( v8 <= 1935894131 )
        {
          if ( v8 == 1746473250 )
          {
            v9 = "qnx6";
          }
          else if ( v8 <= 1746473250 )
          {
            v9 = "fuseblk";
            if ( v8 != 1702057286 )
            {
              v9 = (char *)&unk_4105FC;
              if ( v8 != 1733912937 )
                goto LABEL_20;
            }
          }
          else
          {
            v9 = "nfsd";
            if ( v8 != 1852207972 )
            {
              v9 = "nsfs";
              if ( v8 != 1853056627 )
              {
                v9 = "k-afs";
                if ( v8 != 1799439955 )
                  goto LABEL_20;
              }
            }
          }
        }
        else if ( v8 == 1952539503 )
        {
          v9 = "ocfs2";
        }
        else if ( v8 > 1952539503 )
        {
          v9 = "overlayfs";
          if ( v8 != 2035054128 )
          {
            v9 = "prl_fs";
            if ( v8 != 2088527475 )
            {
              v9 = "tracefs";
              if ( v8 != 1953653091 )
                goto LABEL_20;
            }
          }
        }
        else
        {
          v9 = "btrfs_test";
          if ( v8 != 1936880249 )
          {
            v9 = "coda";
            if ( v8 != 1937076805 )
            {
              v9 = "squashfs";
              if ( v8 != 1936814952 )
                goto LABEL_20;
            }
          }
        }
      }
      else if ( v8 == 3380511080LL )
      {
        v9 = "logfs";
      }
      else if ( v8 <= 3380511080LL )
      {
        if ( v8 == 2866260714LL )
        {
          v9 = "panfs";
        }
        else if ( v8 > 2866260714LL )
        {
          v9 = "vmhgfs";
          if ( v8 != 3133910204LL )
          {
            v9 = "snfs";
            if ( v8 != 3203391149LL )
            {
              v9 = "xenfs";
              if ( v8 != 2881100148LL )
                goto LABEL_20;
            }
          }
        }
        else
        {
          v9 = "hugetlbfs";
          if ( v8 != 2508478710LL )
          {
            v9 = "vxfs";
            if ( v8 != 2768370933LL )
            {
              v9 = "btrfs";
              if ( v8 != 2435016766LL )
                goto LABEL_20;
            }
          }
        }
      }
      else if ( v8 == 4185718668LL )
      {
        v9 = "selinux";
      }
      else if ( v8 > 4185718668LL )
      {
        v9 = "smb2";
        if ( v8 != 4266872130LL )
        {
          v9 = "cifs";
          if ( v8 != 4283649346LL )
          {
            v9 = "hpfs";
            if ( v8 != 4187351113LL )
              goto LABEL_20;
          }
        }
      }
      else
      {
        v9 = "efivarfs";
        if ( v8 != 3730735588LL )
        {
          v9 = "f2fs";
          if ( v8 != 4076150800LL )
          {
            v9 = "bpf_fs";
            if ( v8 != 3405662737LL )
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
    case 99:
      v6 = *(_QWORD *)(a6 + 40);
      goto LABEL_4;
    case 100:
      sub_402AF0(a1, a2, *(_QWORD *)(a6 + 48));
      return 0LL;
    case 102:
      sub_402AF0(a1, a2, *(_QWORD *)(a6 + 24));
      return 0LL;
    case 105:
      sub_402A30(a1, a2, *(unsigned int *)(a6 + 60) | ((unsigned __int64)*(unsigned int *)(a6 + 56) << 32));
      return 0LL;
    case 108:
      sub_402AB0(a1, a2, *(_QWORD *)(a6 + 64));
      return 0LL;
    case 110:
      sub_402A70(a1, a2, a5);
      return 0LL;
    case 115:
LABEL_3:
      v6 = *(_QWORD *)(a6 + 8);
LABEL_4:
      sub_402AB0(a1, a2, v6);
      return 0LL;
    case 116:
      sub_402A30(a1, a2, *(_QWORD *)a6);
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

__int64 __fastcall sub_4037B0(void *src, unsigned int a2, __int64 a3, __int64 (__fastcall *a4)(void *, __int64, _QWORD, _QWORD, __int64, __int64), __int64 a5)
{
  const char *v5; // r14
  size_t v6; // rax
  __int64 v7; // rax
  int v8; // esi
  void *v9; // rbx
  char *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r12
  char v13; // bp
  char *v14; // rax
  char *v15; // rax
  char *v16; // rbp
  size_t v18; // rax
  char v19; // r15
  __int64 v20; // r13
  __int64 v21; // r12
  char *v22; // rax
  unsigned int v23; // er13
  const unsigned __int16 **v24; // rax
  __int64 v25; // rcx
  const unsigned __int16 *v26; // rdx
  char v27; // al
  char *v28; // rax
  char *v29; // rax
  int v30; // er10
  char *v31; // rax
  unsigned __int8 v32; // si
  unsigned __int8 v33; // cl
  bool v34; // cc
  unsigned __int8 v35; // al
  __int64 v36; // rsi
  char v37; // al
  char v38; // dl
  char *v39; // rdx
  char v40; // si
  __int64 v41; // rbx
  char *v42; // rax
  unsigned __int8 v43; // [rsp+3h] [rbp-55h]
  unsigned int v44; // [rsp+4h] [rbp-54h]
  __int64 v45; // [rsp+8h] [rbp-50h]
  __int64 (__fastcall *v46)(void *, __int64, _QWORD, _QWORD, __int64, __int64); // [rsp+10h] [rbp-48h]
  __int64 v47; // [rsp+18h] [rbp-40h]

  v5 = (const char *)src;
  v44 = a2;
  v45 = a3;
  v46 = a4;
  v47 = a5;
  v6 = strlen((const char *)src);
  v7 = sub_409560(v6 + 3);
  v8 = *(unsigned __int8 *)src;
  v43 = 0;
  v9 = (void *)v7;
  if ( !(_BYTE)v8 )
  {
LABEL_15:
    free(v9);
    fputs_unlocked(off_617310, stdout);
    return v43;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = (__int64)(v5 + 1);
      if ( (_BYTE)v8 == 37 )
        break;
      if ( (_BYTE)v8 != 92 )
      {
        v10 = stdout->_IO_write_ptr;
        if ( v10 >= stdout->_IO_write_end )
        {
          __overflow(stdout, v8);
          v11 = (__int64)v5++;
        }
        else
        {
          v11 = (__int64)v5++;
          stdout->_IO_write_ptr = v10 + 1;
          *v10 = v8;
        }
        goto LABEL_5;
      }
      if ( byte_617480 )
      {
        v13 = v5[1];
        if ( (unsigned __int8)(v13 - 48) <= 7u )
        {
          v30 = v13 - 48;
          if ( (unsigned __int8)(v5[2] - 48) > 7u )
          {
            v5 += 2;
          }
          else
          {
            v30 = v5[2] + 8 * v30 - 48;
            if ( (unsigned __int8)(v5[3] - 48) > 7u )
            {
              v5 += 3;
            }
            else
            {
              v30 = v5[3] + 8 * v30 - 48;
              v5 += 4;
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
          v11 = (__int64)(v5 - 1);
          goto LABEL_5;
        }
        if ( v13 == 120 )
        {
          v24 = __ctype_b_loc();
          v25 = *((unsigned __int8 *)v5 + 2);
          v26 = *v24;
          v27 = v5[2];
          if ( v26[v25] & 0x1000 )
          {
            if ( (unsigned __int8)(v27 - 97) <= 5u )
            {
              v35 = v25 - 87;
            }
            else
            {
              v32 = v25 - 55;
              v33 = v25 - 48;
              v34 = (unsigned __int8)(v27 - 65) <= 5u;
              v35 = v32;
              if ( !v34 )
                v35 = v33;
            }
            v36 = *((unsigned __int8 *)v5 + 3);
            v11 = (__int64)(v5 + 2);
            if ( v26[v36] & 0x1000 )
            {
              v11 = (__int64)(v5 + 3);
              v37 = 16 * v35;
              if ( (unsigned __int8)(v36 - 97) > 5u )
              {
                v40 = v36 - 55;
                v38 = v5[3] - 48;
                if ( (unsigned __int8)(v5[3] - 65) <= 5u )
                  v38 = v40;
              }
              else
              {
                v38 = v36 - 87;
              }
              v35 = v38 + v37;
            }
            v5 = (const char *)(v11 + 1);
            v39 = stdout->_IO_write_ptr;
            if ( v39 >= stdout->_IO_write_end )
            {
              __overflow(stdout, v35);
            }
            else
            {
              stdout->_IO_write_ptr = v39 + 1;
              *v39 = v35;
            }
            goto LABEL_5;
          }
          v23 = 120;
LABEL_28:
          v28 = dcgettext(0LL, "warning: unrecognized escape '\\%c'", 5);
          error(0, 0, v28, v23);
          goto LABEL_29;
        }
        if ( v13 )
        {
          v23 = v13;
          switch ( v13 )
          {
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
            default:
              goto LABEL_28;
          }
LABEL_29:
          v5 += 2;
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
        v11 = (__int64)v5++;
        __overflow(stdout, 92);
        goto LABEL_5;
      }
      v16 = (char *)v5++;
      stdout->_IO_write_ptr = v15 + 1;
      *v15 = 92;
      v8 = (unsigned __int8)v16[1];
      if ( !(_BYTE)v8 )
        goto LABEL_15;
    }
    v18 = strspn(v5 + 1, "'-+ #0I");
    v11 = (__int64)&v5[v18 + 1 + strspn(&v5[v18 + 1], "0123456789")];
    v19 = *(_BYTE *)v11;
    if ( *(_BYTE *)v11 == 46 )
    {
      v11 += strspn((const char *)(v11 + 1), "0123456789") + 1;
      v19 = *(_BYTE *)v11;
    }
    v20 = v11 - (_QWORD)v5;
    v21 = v11 - v12;
    memcpy(v9, v5, v11 - (_QWORD)v5);
    if ( !v19 )
      break;
    if ( v19 == 37 )
      goto LABEL_22;
    v5 = (const char *)(v11 + 1);
    v43 |= v46(v9, v20, (unsigned int)v19, v44, v45, v47);
LABEL_5:
    v8 = *(unsigned __int8 *)(v11 + 1);
    if ( !(_BYTE)v8 )
      goto LABEL_15;
  }
  --v11;
LABEL_22:
  if ( !v21 )
  {
    v5 = (const char *)(v11 + 1);
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
  v41 = sub_408F10(v9);
  v42 = dcgettext(0LL, "%s: invalid directive", 5);
  error(1, 0, v42, v41);
  return sub_403CA0();
}

void *__fastcall sub_403CA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  char *v5; // rax
  __int64 v6; // [rsp+0h] [rbp-78h]
  __int64 v7; // [rsp+8h] [rbp-70h]
  char v8; // [rsp+10h] [rbp-68h]
  char v9; // [rsp+30h] [rbp-48h]

  v6 = a1;
  v2 = qword_617420;
  v7 = a2;
  if ( !qword_617420 )
  {
    v5 = getenv("TZ");
    v2 = sub_40C170(v5);
    qword_617420 = v2;
  }
  v3 = v7;
  if ( sub_40C450(v2, &v6, &v9) )
  {
    sub_4072D0(&unk_6173E0, 61LL, "%Y-%m-%d %H:%M:%S.%N %z", &v9, qword_617420, v3);
  }
  else
  {
    sub_4059C0(v6, &v8);
    __sprintf_chk(&unk_6173E0, 1LL, 61LL, "%s.%09d");
  }
  return &unk_6173E0;
}

__int64 __fastcall sub_403D70(char *s2)
{
  __int64 v1; // rbx
  const char *v2; // rbp
  char *v4; // rbx
  int *v5; // rax
  __int64 v6; // [rsp+0h] [rbp-138h]
  __int64 v7; // [rsp+8h] [rbp-130h]
  struct stat stat_buf; // [rsp+90h] [rbp-A8h]

  if ( !byte_617430 )
  {
    qword_617428 = sub_40B0C0(0LL);
    if ( !qword_617428 )
    {
      v4 = dcgettext(0LL, "cannot read table of mounted file systems", 5);
      v5 = __errno_location();
      error(0, *v5, "%s", v4);
    }
    byte_617430 = 1;
  }
  if ( __xstat(1, s2, (struct stat *)&v6) )
    return 0LL;
  v1 = qword_617428;
  if ( !qword_617428 )
    return 0LL;
  while ( 1 )
  {
    if ( *(_BYTE *)(v1 + 40) & 1 )
    {
      v2 = *(const char **)v1;
      if ( **(_BYTE **)v1 == 47
        && !strcmp(*(const char **)(v1 + 8), s2)
        && !__xstat(1, v2, &stat_buf)
        && v7 == stat_buf.st_ino
        && v6 == stat_buf.st_dev )
      {
        break;
      }
    }
    v1 = *(_QWORD *)(v1 + 48);
    if ( !v1 )
      return 0LL;
  }
  return *(_QWORD *)v1;
}

__int64 __fastcall sub_403E80(char a1, char a2, char a3)
{
  __int64 result; // rax
  char *v4; // rax
  char v5; // bl
  char *v6; // rax
  const char *v7; // rsi
  void *v8; // r12
  void *v9; // rbp
  void *v10; // rbx
  __int64 v11; // rbp

  if ( a1 )
  {
    if ( a2 )
    {
      result = sub_409790("%n %i %l %t %s %S %b %f %a %c %d\n");
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
      result = sub_409790(v4);
    }
  }
  else if ( a2 )
  {
    result = sub_409790("%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n");
  }
  else
  {
    v5 = a3;
    v6 = dcgettext(0LL, "  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\n", 5);
    v7 = "Device: %Dh/%dd\tInode: %-10i  Links: %-5h Device type: %t,%T\n";
    v8 = (void *)sub_409790(v6);
    if ( !v5 )
      v7 = "Device: %Dh/%dd\tInode: %-10i  Links: %h\n";
    dcgettext(0LL, v7, 5);
    v9 = (void *)sub_409820((unsigned __int64)"%s%s");
    free(v8);
    dcgettext(0LL, "Access: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\n", 5);
    v10 = (void *)sub_409820((unsigned __int64)"%s%s");
    free(v9);
    dcgettext(0LL, "Access: %x\nModify: %y\nChange: %z\n Birth: %w\n", 5);
    v11 = sub_409820((unsigned __int64)"%s%s");
    free(v10);
    result = v11;
  }
  return result;
}

__int64 __fastcall sub_403F90(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rax
  const char *v9; // r15
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rax
  const char *v13; // r15
  int v14; // eax
  const char *v15; // rdx
  char v16; // si
  __int64 v17; // rax
  int v18; // esi
  int v19; // ecx
  __int64 v20; // rsi
  __int64 v21; // r15
  __int64 result; // rax
  int v23; // ecx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+10h] [rbp-48h]
  __int64 v28; // [rsp+18h] [rbp-40h]

  v4 = (__int64)a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v26 = a3;
  v8 = sub_40AED0(a1, 46LL, a2);
  if ( v8 )
  {
    v9 = (const char *)v8;
    a1[a2] = 0;
    v10 = v8 - (_QWORD)a1;
    if ( (unsigned int)(*(char *)(v8 + 1) - 48) > 9 )
    {
      v11 = 9;
      if ( (unsigned int)(*(char *)(v8 - 1) - 48) > 9 )
      {
        v5 = v8 - (_QWORD)a1;
        LODWORD(v21) = v7;
        v20 = 1LL;
        v19 = 1;
        goto LABEL_27;
      }
      goto LABEL_4;
    }
    v27 = v8 - (_QWORD)a1;
    v17 = strtol((const char *)(v8 + 1), 0LL, 10);
    v10 = v27;
    if ( v17 > 0x7FFFFFFF )
      LODWORD(v17) = 0x7FFFFFFF;
    v11 = v17;
    if ( (_DWORD)v17 )
    {
      if ( (unsigned int)(*(v9 - 1) - 48) > 9 )
      {
        v5 = v27;
        goto LABEL_23;
      }
LABEL_4:
      *v9 = 0;
      do
        --v9;
      while ( (unsigned int)(*(v9 - 1) - 48) <= 9 );
      v28 = v10;
      v12 = strtol(v9, 0LL, 10);
      if ( v12 > 0x7FFFFFFF )
        LODWORD(v12) = 0x7FFFFFFF;
      v5 = v28;
      if ( (int)v12 > 1 )
      {
        v13 = &v9[*v9 == 48];
        v5 = v13 - a1;
        if ( (int)v12 > (unsigned __int64)qword_617470 )
        {
          v14 = v12 - qword_617470;
          if ( v14 > 1 && v14 - v11 > 1 )
          {
            if ( a1 >= v13 )
            {
              v5 = 0LL;
LABEL_41:
              v5 += (int)__sprintf_chk(a1, 1LL, -1LL, "%d");
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
        LODWORD(v21) = v7;
        v20 = 1LL;
        v19 = 1;
        goto LABEL_27;
      }
      goto LABEL_24;
    }
    v5 = v27;
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
  v21 = v7 / v19;
LABEL_27:
  if ( v6 >= 0 || !v7 || (v26 = (1000000000 / v19 - (_DWORD)v21 != (v7 % v20 != 0)) + v6) != 0 )
  {
    result = sub_402AF0(v4, v5, v26);
  }
  else
  {
    sub_402980(v4, v5, "'-+ 0", "f");
    result = __printf_chk(1LL, v4, v25);
  }
  if ( v11 )
  {
    v23 = 9;
    if ( v11 <= 9 )
      v23 = v11;
    v24 = (unsigned int)(v11 - v23);
    __printf_chk(1LL, "%s%.*d%-*.*d", qword_617478);
    result = v24;
  }
  return result;
}

__int64 __fastcall sub_4042E0(char *a1, __int64 a2, int a3, __int64 a4, char *a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  void *v10; // rax
  unsigned int v11; // ebp
  char *v13; // rdx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  char *v17; // rax
  char *v18; // r13
  char *v19; // rdi
  const char *v20; // r14
  __int64 v21; // rdx
  int v22; // ebp
  __int64 v23; // rdx
  char **v24; // rax
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // eax
  int *v30; // rax
  int *v31; // rbp
  __int64 v32; // r13
  char *v33; // rax
  int v34; // esi
  char *v35; // rax
  char *v36; // rax
  __int64 v37; // r14
  char *v38; // rbp
  int *v39; // rax
  __int64 v40; // rbp
  char *v41; // rbx
  int *v42; // rax
  __int64 v43; // rcx
  char *path; // [rsp+0h] [rbp-38h]
  char *patha; // [rsp+0h] [rbp-38h]
  char *pathb; // [rsp+0h] [rbp-38h]
  __int64 v47; // [rsp+8h] [rbp-30h]

  v6 = (__int64)a1;
  v7 = a2;
  switch ( a3 )
  {
    case 65:
      v11 = 0;
      sub_4059B0(a6, &unk_617438);
      byte_617442 = 0;
      sub_402A70((__int64)a1, a2, (__int64)&unk_617438);
      return v11;
    case 66:
      v11 = 0;
      sub_402AB0((__int64)a1, a2, 512LL);
      return v11;
    case 67:
      pathb = a5;
      v30 = __errno_location();
      *v30 = 95;
      v31 = v30;
      v32 = sub_408CC0(4LL, pathb);
      v33 = dcgettext(0LL, "failed to get security context of %s", 5);
      v34 = *v31;
      v11 = 1;
      error(0, v34, v33, v32);
      *(_WORD *)&a1[v7] = 115;
      __printf_chk(1LL, a1, "?");
      return v11;
    case 68:
      v11 = 0;
      sub_402A30((__int64)a1, a2, *(_QWORD *)a6);
      return v11;
    case 70:
      v10 = (void *)sub_405740(a6);
      goto LABEL_4;
    case 71:
      v24 = (char **)getgrgid(*(_DWORD *)(a6 + 32));
      v13 = "UNKNOWN";
      if ( !v24 )
        goto LABEL_9;
      goto LABEL_36;
    case 78:
      v47 = a6;
      v11 = 0;
      patha = a5;
      v26 = sub_4088A0(0LL);
      v27 = sub_408CC0(v26, patha);
      sub_402A70((__int64)a1, a2, v27);
      if ( (*(_DWORD *)(v47 + 24) & 0xF000) != 40960 )
        return v11;
      v18 = (char *)sub_405090(patha);
      if ( v18 )
      {
        __printf_chk(1LL, " -> ", v28);
        v29 = sub_4088A0(0LL);
        v21 = sub_408CC0(v29, v18);
        goto LABEL_23;
      }
      v40 = sub_408CC0(4LL, patha);
      v41 = dcgettext(0LL, "cannot read symbolic link %s", 5);
      v42 = __errno_location();
      v43 = v40;
      v11 = 1;
      error(0, *v42, v41, v43);
      return v11;
    case 84:
      v25 = *(_QWORD *)(a6 + 40);
      v14 = (unsigned __int8)v25;
      v15 = v25 >> 12;
      LOBYTE(v15) = 0;
      goto LABEL_12;
    case 85:
      v24 = (char **)getpwuid(*(_DWORD *)(a6 + 28));
      v13 = "UNKNOWN";
      if ( v24 )
LABEL_36:
        v13 = *v24;
      goto LABEL_9;
    case 87:
      v11 = 0;
      sub_403F90(a1, a2, 0LL, 0LL);
      return v11;
    case 88:
      v11 = 0;
      sub_403F90(a1, a2, *(_QWORD *)(a6 + 72), *(_QWORD *)(a6 + 80));
      return v11;
    case 89:
      v11 = 0;
      sub_403F90(a1, a2, *(_QWORD *)(a6 + 88), *(_QWORD *)(a6 + 96));
      return v11;
    case 90:
      v11 = 0;
      sub_403F90(a1, a2, *(_QWORD *)(a6 + 104), *(_QWORD *)(a6 + 112));
      return v11;
    case 97:
      v22 = *(_DWORD *)(a6 + 24);
      sub_402980((__int64)a1, a2, (const char *)&unk_4103A7, "lo");
      v23 = v22 & 0xFFF;
      v11 = 0;
      __printf_chk(1LL, a1, v23);
      return v11;
    case 98:
      v11 = 0;
      sub_402AB0((__int64)a1, a2, *(_QWORD *)(a6 + 64));
      return v11;
    case 100:
      v11 = 0;
      sub_402AB0((__int64)a1, a2, *(_QWORD *)a6);
      return v11;
    case 102:
      v11 = 0;
      sub_402A30((__int64)a1, a2, *(unsigned int *)(a6 + 24));
      return v11;
    case 103:
      v11 = 0;
      sub_402AB0((__int64)a1, a2, *(unsigned int *)(a6 + 32));
      return v11;
    case 104:
      v11 = 0;
      sub_402AB0((__int64)a1, a2, *(_QWORD *)(a6 + 16));
      return v11;
    case 105:
      v11 = 0;
      sub_402AB0((__int64)a1, a2, *(_QWORD *)(a6 + 8));
      return v11;
    case 109:
      if ( !byte_617481 && (*(_DWORD *)(a6 + 24) & 0xF000) == 40960 )
        goto LABEL_51;
      path = a5;
      v17 = canonicalize_file_name(a5);
      v18 = v17;
      if ( !v17 )
      {
        v37 = sub_408CC0(4LL, path);
        v38 = dcgettext(0LL, "failed to canonicalize %s", 5);
        v39 = __errno_location();
        error(0, *v39, v38, v37);
LABEL_56:
        v11 = 1;
        v20 = "?";
        goto LABEL_22;
      }
      v11 = 0;
      v19 = v17;
      v18 = 0LL;
      v20 = (const char *)sub_403D70(v17);
      free(v19);
      if ( v20 )
        goto LABEL_22;
      a5 = path;
LABEL_51:
      v36 = (char *)sub_404D10(a5);
      v18 = v36;
      if ( !v36 )
        goto LABEL_56;
      v20 = (const char *)sub_403D70(v36);
      if ( !v20 )
        v20 = v18;
      v11 = 0;
LABEL_22:
      v21 = (__int64)v20;
LABEL_23:
      sub_402A70(v6, a2, v21);
      free(v18);
      return v11;
    case 110:
      v11 = 0;
      sub_402A70((__int64)a1, a2, (__int64)a5);
      return v11;
    case 111:
      v16 = *(_QWORD *)(a6 + 56);
      if ( (unsigned __int64)(v16 - 1) > 0x1FFFFFFFFFFFFFFFLL )
        v16 = 512LL;
      v11 = 0;
      sub_402AB0((__int64)a1, a2, v16);
      return v11;
    case 115:
      v11 = 0;
      sub_402AF0((__int64)a1, a2, *(_QWORD *)(a6 + 48));
      return v11;
    case 116:
      v14 = ((unsigned int)*(_QWORD *)(a6 + 40) >> 8) & 0xFFF;
      LODWORD(v15) = (*(_QWORD *)(a6 + 40) >> 32) & 0xFFFFF000;
LABEL_12:
      v11 = 0;
      sub_402A30((__int64)a1, a2, v14 | (unsigned int)v15);
      return v11;
    case 117:
      v11 = 0;
      sub_402AB0((__int64)a1, a2, *(unsigned int *)(a6 + 28));
      return v11;
    case 119:
      v13 = "-";
LABEL_9:
      v11 = 0;
      sub_402A70((__int64)a1, a2, (__int64)v13);
      return v11;
    case 120:
      v8 = *(_QWORD *)(a6 + 80);
      v9 = *(_QWORD *)(a6 + 72);
      goto LABEL_3;
    case 121:
      v8 = *(_QWORD *)(a6 + 96);
      v9 = *(_QWORD *)(a6 + 88);
      goto LABEL_3;
    case 122:
      v8 = *(_QWORD *)(a6 + 112);
      v9 = *(_QWORD *)(a6 + 104);
LABEL_3:
      v10 = sub_403CA0(v9, v8);
LABEL_4:
      v11 = 0;
      sub_402A70(v6, v7, (__int64)v10);
      return v11;
    default:
      v35 = stdout->_IO_write_ptr;
      v11 = 0;
      if ( v35 >= stdout->_IO_write_end )
      {
        __overflow(stdout, 63);
      }
      else
      {
        stdout->_IO_write_ptr = v35 + 1;
        *v35 = 63;
      }
      return v11;
  }
}

noreturn void __fastcall  sub_404870(int status)
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
  FILE *v22; // rbp
  char *v23; // rax
  FILE *v24; // rbp
  char *v25; // rax
  FILE *v26; // rbp
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  const char **v31; // rax
  const char *v32; // rbp
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  const char *v41; // [rsp+0h] [rbp-88h]
  const char *v42; // [rsp+8h] [rbp-80h]
  const char *v43; // [rsp+10h] [rbp-78h]
  const char *v44; // [rsp+18h] [rbp-70h]
  const char *v45; // [rsp+20h] [rbp-68h]
  const char *v46; // [rsp+28h] [rbp-60h]
  const char *v47; // [rsp+30h] [rbp-58h]
  const char *v48; // [rsp+38h] [rbp-50h]
  const char *v49; // [rsp+40h] [rbp-48h]
  const char *v50; // [rsp+48h] [rbp-40h]
  const char *v51; // [rsp+50h] [rbp-38h]
  const char *v52; // [rsp+58h] [rbp-30h]
  __int64 v53; // [rsp+60h] [rbp-28h]
  __int64 v54; // [rsp+68h] [rbp-20h]

  v1 = qword_617498;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... FILE...\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = stdout;
  v5 = dcgettext(0LL, "Display file or file system status.\n", 5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(
         0LL,
         "  -L, --dereference     follow links\n"
         "  -f, --file-system     display file system status instead of file status\n",
         5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "  -c  --format=FORMAT   use the specified FORMAT instead of the default;\n"
          "                          output a newline after each use of FORMAT\n"
          "      --printf=FORMAT   like --format, but interpret backslash escapes,\n"
          "                          and do not output a mandatory trailing newline;\n"
          "                          if you want a newline, include \\n in FORMAT\n"
          "  -t, --terse           print the information in terse form\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(
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
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(
          0LL,
          "  %d   device number in decimal\n"
          "  %D   device number in hex\n"
          "  %f   raw mode in hex\n"
          "  %F   file type\n"
          "  %g   group ID of owner\n"
          "  %G   group name of owner\n",
          5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(
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
  fputs_unlocked(v21, v20);
  v22 = stdout;
  v23 = dcgettext(
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
  fputs_unlocked(v23, v22);
  v24 = stdout;
  v25 = dcgettext(
          0LL,
          "Valid format sequences for file systems:\n"
          "\n"
          "  %a   free blocks available to non-superuser\n"
          "  %b   total data blocks in file system\n"
          "  %c   total file nodes in file system\n"
          "  %d   free file nodes in file system\n"
          "  %f   free blocks in file system\n",
          5);
  fputs_unlocked(v25, v24);
  v26 = stdout;
  v27 = dcgettext(
          0LL,
          "  %i   file system ID in hex\n"
          "  %l   maximum length of filenames\n"
          "  %n   file name\n"
          "  %s   block size (for faster transfers)\n"
          "  %S   fundamental block size (for block counts)\n"
          "  %t   file system type in hex\n"
          "  %T   file system type in human readable form\n",
          5);
  fputs_unlocked(v27, v26);
  v28 = dcgettext(0LL, "\n--terse is equivalent to the following FORMAT:\n    %s", 5);
  __printf_chk(1LL, v28, "%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n");
  v29 = dcgettext(0LL, "--terse --file-system is equivalent to the following FORMAT:\n    %s", 5);
  __printf_chk(1LL, v29, "%n %i %l %t %s %S %b %f %a %c %d\n");
  v30 = dcgettext(
          0LL,
          "\n"
          "NOTE: your shell may have its own version of %s, which usually supersedes\n"
          "the version described here.  Please refer to your shell's documentation\n"
          "for details about the options it supports.\n",
          5);
  __printf_chk(1LL, v30, "stat");
  v41 = "[";
  v31 = &v41;
  v42 = "test invocation";
  v43 = "coreutils";
  v44 = "Multi-call invocation";
  v45 = "sha224sum";
  v46 = "sha2 utilities";
  v47 = "sha256sum";
  v48 = "sha2 utilities";
  v49 = "sha384sum";
  v50 = "sha2 utilities";
  v51 = "sha512sum";
  v52 = "sha2 utilities";
  v53 = 0LL;
  v54 = 0LL;
  do
    v31 += 2;
  while ( *v31 && strcmp("stat", *v31) );
  v32 = v31[1];
  if ( v32 )
  {
    v33 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v33, &unk_4107C3);
    v34 = setlocale(5, 0LL);
    if ( !v34 || !strncmp(v34, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v37 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v37, &unk_4107C3);
    v38 = setlocale(5, 0LL);
    if ( !v38 || !strncmp(v38, "en_", 3uLL) )
    {
      v32 = "stat";
      v39 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v39, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v32 = "stat";
  }
  v40 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v40, "stat");
LABEL_10:
  v35 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v35, "https://www.gnu.org/software/coreutils/");
LABEL_11:
  v36 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v36, v32);
LABEL_3:
  exit(status);
}

__int64 __fastcall sub_404D10(char *path, const __m128i *a2)
{
  int v2; // er13
  int *v3; // r12
  const char *v4; // rax
  char *v5; // rbx
  size_t v6; // rax
  void *v7; // rsp
  const char *v8; // r13
  __int64 v9; // rbx
  char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  __m128i v16; // xmm4
  __m128i v17; // xmm5
  __m128i v18; // xmm6
  __m128i v19; // xmm7
  __m128i v20; // xmm0
  const char *v21; // rsi
  __int64 v22; // rbx
  char *v23; // rax
  __int64 v24; // rcx
  int v25; // er13
  __m128i v27; // xmm2
  __m128i v28; // xmm3
  __m128i v29; // xmm4
  __m128i v30; // xmm5
  __m128i v31; // xmm6
  __m128i v32; // xmm7
  __m128i v33; // xmm1
  __m128i v34; // xmm2
  char *v35; // rsi
  __int64 v36; // rbx
  char *v37; // rax
  __int64 v38; // rcx
  char *v39; // rax
  char *v40; // rax
  char v41; // [rsp+0h] [rbp-150h]
  char v42; // [rsp+Fh] [rbp-141h]
  struct stat stat_buf; // [rsp+10h] [rbp-140h]
  struct stat v44; // [rsp+A0h] [rbp-B0h]

  v2 = sub_408F30(&v41);
  v3 = __errno_location();
  if ( v2 )
  {
    v12 = 0LL;
    v39 = dcgettext(0LL, "cannot get current directory", 5);
    error(0, *v3, v39);
    return v12;
  }
  if ( (a2[1].m128i_i32[2] & 0xF000) == 0x4000 )
  {
    v27 = _mm_loadu_si128(a2 + 1);
    v28 = _mm_loadu_si128(a2 + 2);
    v29 = _mm_loadu_si128(a2 + 3);
    *(__m128i *)&stat_buf.st_dev = _mm_loadu_si128(a2);
    v30 = _mm_loadu_si128(a2 + 4);
    v31 = _mm_loadu_si128(a2 + 5);
    *(__m128i *)&stat_buf.st_nlink = v27;
    v32 = _mm_loadu_si128(a2 + 6);
    v33 = _mm_loadu_si128(a2 + 7);
    v34 = _mm_loadu_si128(a2 + 8);
    *(__m128i *)&stat_buf.st_gid = v28;
    *(__m128i *)&stat_buf.st_size = v29;
    *(__m128i *)&stat_buf.st_blocks = v30;
    *(__m128i *)&stat_buf.st_atim.tv_nsec = v31;
    *(__m128i *)&stat_buf.st_mtim.tv_nsec = v32;
    *(__m128i *)&stat_buf.st_ctim.tv_nsec = v33;
    *(__m128i *)&stat_buf.__unused[1] = v34;
    v35 = path;
    if ( chdir(path) >= 0 )
    {
LABEL_10:
      while ( __xstat(1, "..", &v44) >= 0 )
      {
        if ( v44.st_dev != stat_buf.st_dev || v44.st_ino == stat_buf.st_ino )
        {
          v12 = sub_4097F0();
          goto LABEL_14;
        }
        if ( chdir("..") < 0 )
        {
          v21 = "cannot change to directory %s";
          v22 = sub_408CC0(4LL, "..");
          goto LABEL_12;
        }
        v13 = _mm_load_si128((const __m128i *)&v44.st_nlink);
        v14 = _mm_load_si128((const __m128i *)&v44.st_gid);
        v15 = _mm_load_si128((const __m128i *)&v44.st_size);
        *(__m128i *)&stat_buf.st_dev = _mm_load_si128((const __m128i *)&v44);
        v16 = _mm_load_si128((const __m128i *)&v44.st_blocks);
        v17 = _mm_load_si128((const __m128i *)&v44.st_atim.tv_nsec);
        v18 = _mm_load_si128((const __m128i *)&v44.st_mtim.tv_nsec);
        v19 = _mm_load_si128((const __m128i *)&v44.st_ctim.tv_nsec);
        *(__m128i *)&stat_buf.st_nlink = v13;
        v20 = _mm_load_si128((const __m128i *)&v44.__unused[1]);
        *(__m128i *)&stat_buf.st_gid = v14;
        *(__m128i *)&stat_buf.st_size = v15;
        *(__m128i *)&stat_buf.st_blocks = v16;
        *(__m128i *)&stat_buf.st_atim.tv_nsec = v17;
        *(__m128i *)&stat_buf.st_mtim.tv_nsec = v18;
        *(__m128i *)&stat_buf.st_ctim.tv_nsec = v19;
        *(__m128i *)&stat_buf.__unused[1] = v20;
      }
      v21 = "cannot stat %s";
      v22 = sub_408CC0(4LL, "..");
LABEL_12:
      v23 = dcgettext(0LL, v21, 5);
      v24 = v22;
      v12 = 0LL;
      error(0, *v3, v23, v24);
      goto LABEL_14;
    }
    goto LABEL_18;
  }
  v4 = (const char *)sub_4055D0(path);
  v5 = (char *)v4;
  v6 = strlen(v4);
  v7 = alloca(v6 + 9);
  v8 = (const char *)memcpy((void *)((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFF0LL), v5, v6 + 1);
  free(v5);
  if ( chdir(v8) < 0 )
  {
    v35 = (char *)v8;
LABEL_18:
    v36 = sub_408CC0(4LL, v35);
    v37 = dcgettext(0LL, "cannot change to directory %s", 5);
    v38 = v36;
    v12 = 0LL;
    error(0, *v3, v37, v38);
    return v12;
  }
  if ( __xstat(1, ".", &stat_buf) >= 0 )
    goto LABEL_10;
  v9 = sub_408CC0(4LL, v8);
  v10 = dcgettext(0LL, "cannot stat current directory (now %s)", 5);
  v11 = v9;
  v12 = 0LL;
  error(0, *v3, v10, v11);
LABEL_14:
  v25 = *v3;
  if ( !(unsigned int)sub_408F80(&v41) )
  {
    sub_408FA0(&v41);
    *v3 = v25;
    return v12;
  }
  v40 = dcgettext(0LL, "failed to return to initial working directory", 5);
  error(1, *v3, v40);
  return sub_405090((char *)1);
}

char *__fastcall sub_405090(char *path, unsigned __int64 a2)
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

noreturn void  sub_405180()
{
  sub_404870(1);
}

__int64 __fastcall sub_405190(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_4052B0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_408EF0(1LL, a1);
  v5 = sub_408BE0(0LL, 8LL, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_405330(__int64 *a1, char *a2, size_t a3)
{
  const void *v3; // r14
  size_t v4; // r13
  char *v5; // rbp
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rsi
  __int64 v9; // rbx
  __int64 i; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rax

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
      v11 = sub_408F10(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 += v4;
    v12 = sub_408F10(i);
    __fprintf_chk(stderr, 1LL, ", %s", v12);
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
  return (int)v13;
}

__int64 __fastcall sub_405450(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  size_t v6; // r15
  void (*v7)(void); // r13
  char *v8; // rbp
  __int64 *v9; // rbx
  __int64 result; // rax

  v6 = a5;
  v7 = a6;
  v8 = a4;
  v9 = (__int64 *)a3;
  result = sub_405190(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_4052B0(a1, (__int64)a2, result);
    sub_405330(v9, v8, v6);
    v7();
    result = -1LL;
  }
  return result;
}

__int64 __fastcall sub_4054C0(void *s1, __int64 *a2, char *a3, size_t a4)
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

__int64 sub_405530()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rax

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
        v5 = sub_408D60();
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
  __int64 result; // rax

  result = sub_405650(a1);
  if ( !result )
    sub_4097B0();
  return result;
}

__int64 __fastcall sub_4055F0(_BYTE *a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdx

  v1 = *a1 == 47;
  v2 = sub_4056B0();
  if ( v2 - (__int64)a1 <= v1 )
    return v2 - (_QWORD)a1;
  v3 = v2 - (_QWORD)a1 - 1;
  if ( *(_BYTE *)(v2 - 1) != 47 )
    return v2 - (_QWORD)a1;
  while ( v1 != v3 && a1[v3 - 1] == 47 )
    --v3;
  return v3;
}

_BYTE *__fastcall sub_405650(void *src)
{
  __int64 v1; // rax
  size_t v2; // rbx
  _BYTE *v3; // rax
  _BYTE *v4; // rcx
  _BYTE *v5; // rax

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

char *__fastcall sub_405740(__int64 a1)
{
  int v1; // eax
  char *result; // rax

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

__int64 __fastcall sub_4059B0(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  __int64 result; // rax
  int v10; // edi

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
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
  else
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
  result = 32LL;
  *(_WORD *)(a2 + 10) = 32;
  return result;
}

__int64 __fastcall sub_4059B0(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  __int64 result; // rax
  int v10; // edi

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
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
  else
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
  result = 32LL;
  *(_WORD *)(a2 + 10) = 32;
  return result;
}

__int64 __fastcall sub_4059B0(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  __int64 result; // rax
  int v10; // edi

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
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
  else
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
  result = 32LL;
  *(_WORD *)(a2 + 10) = 32;
  return result;
}

__int64 __fastcall sub_4059B0(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  __int64 result; // rax
  int v10; // edi

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
    *(_BYTE *)(a2 + 9) = (v8 & 0xE0) + 116;
  else
    *(_BYTE *)(a2 + 9) = (v8 & 0xB5) + 120;
  result = 32LL;
  *(_WORD *)(a2 + 10) = 32;
  return result;
}

__int64 __fastcall sub_4059C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // eax

  v2 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  if ( a1 < 0 )
  {
    while ( 1 )
    {
      v4 = 10 * (unsigned __int64)(a1 / 10) + 48 - a1;
      a1 /= 10LL;
      *(_BYTE *)(v2 - 1) = v4;
      if ( !a1 )
        break;
      --v2;
    }
    *(_BYTE *)(v2 - 2) = 45;
    result = v2 - 2;
  }
  else
  {
    do
    {
      *(_BYTE *)--v2 = a1 % 0xAuLL + 48;
      a1 /= 0xAuLL;
    }
    while ( a1 );
    result = v2;
  }
  return result;
}

__int64 __fastcall sub_405A60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  const __int32_t **v4; // rax

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_tolower_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(unsigned __int8 *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __fastcall sub_405AB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  const __int32_t **v4; // rax

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_toupper_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(unsigned __int8 *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __usercall sub_405B00(void *s, unsigned __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6, int a7)
{
  char *v7; // r15
  char *v8; // rbx
  char *v9; // r12
  int v10; // er11
  char v11; // al
  __int64 v12; // r14
  char *v13; // r8
  char v15; // r11
  __int64 v16; // r8
  int i; // er12
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  bool v21; // cc
  int v22; // ebp
  unsigned int v23; // eax
  int v24; // edi
  char *v25; // rax
  char *v26; // r8
  char v27; // r13
  size_t v28; // rax
  unsigned __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // rbx
  size_t v32; // rdx
  char *v33; // rdi
  char *v34; // rsi
  size_t v35; // rdx
  char *v36; // rdi
  unsigned __int64 v37; // rcx
  __int64 v38; // r13
  __m128i v39; // xmm4
  __m128i v40; // xmm2
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rcx
  int v45; // edx
  unsigned int v46; // eax
  int v47; // er10
  char *v48; // rcx
  unsigned __int64 v49; // rax
  size_t v50; // r9
  unsigned __int64 v51; // r9
  size_t v52; // rdx
  char *v53; // rdi
  unsigned __int64 v54; // r10
  int v55; // eax
  unsigned __int64 v56; // rsi
  size_t v57; // rdx
  char *v58; // rdi
  __int32 v59; // er10
  __int32 v60; // er13
  int v61; // edi
  int v62; // er8
  int v63; // eax
  int v64; // er13
  int v65; // er13
  int v66; // edi
  unsigned int v67; // esi
  int v68; // edi
  unsigned int v69; // er8
  unsigned __int64 v70; // r13
  int v71; // eax
  unsigned __int64 v72; // rsi
  char v73; // r11
  char v74; // r8
  size_t v75; // rdx
  char *v76; // rdi
  int v77; // esi
  unsigned __int64 v78; // r13
  size_t v79; // rdx
  char *v80; // rdi
  char *v81; // rcx
  __int64 v82; // rax
  unsigned __int64 v83; // rsi
  size_t v84; // rdx
  char *v85; // rdi
  size_t v86; // rdx
  char *v87; // rdi
  int v88; // esi
  int v89; // edi
  int v90; // edx
  __int64 v91; // rax
  char *v92; // r9
  size_t v93; // rcx
  size_t v94; // rax
  size_t v95; // rdx
  char *v96; // rdi
  size_t v97; // rcx
  __int64 j; // r13
  __int64 v99; // rsi
  int v100; // eax
  int v101; // esi
  char v102; // cl
  int v103; // esi
  size_t v104; // rdx
  char *v105; // rdi
  int v106; // eax
  int v107; // eax
  char v108; // al
  char v109; // cl
  unsigned __int64 v110; // r12
  unsigned __int64 v111; // r8
  size_t v112; // rdx
  __int64 v113; // r12
  char *v114; // rdi
  int v115; // eax
  unsigned __int64 v116; // rcx
  char *v117; // rdi
  int v118; // esi
  int v119; // edx
  int v120; // er10
  int v121; // esi
  int k; // edi
  __int32 v123; // esi
  bool v124; // sf
  bool v125; // of
  int v126; // eax
  int v127; // eax
  int v128; // esi
  int v129; // esi
  __int64 v130; // [rsp+0h] [rbp-4C8h]
  const __m128i *tp; // [rsp+8h] [rbp-4C0h]
  char *v132; // [rsp+20h] [rbp-4A8h]
  char v133; // [rsp+2Bh] [rbp-49Dh]
  int v134; // [rsp+2Ch] [rbp-49Ch]
  char *v135; // [rsp+30h] [rbp-498h]
  char v136; // [rsp+30h] [rbp-498h]
  unsigned __int64 v137; // [rsp+30h] [rbp-498h]
  char v138; // [rsp+30h] [rbp-498h]
  int v139; // [rsp+30h] [rbp-498h]
  char v140; // [rsp+30h] [rbp-498h]
  char v141; // [rsp+30h] [rbp-498h]
  size_t v142; // [rsp+30h] [rbp-498h]
  char v143; // [rsp+30h] [rbp-498h]
  size_t v144; // [rsp+30h] [rbp-498h]
  int v145; // [rsp+30h] [rbp-498h]
  char v146; // [rsp+40h] [rbp-488h]
  char *v147; // [rsp+40h] [rbp-488h]
  char *v148; // [rsp+40h] [rbp-488h]
  char v149; // [rsp+40h] [rbp-488h]
  char *v150; // [rsp+40h] [rbp-488h]
  char v151; // [rsp+40h] [rbp-488h]
  char v152; // [rsp+40h] [rbp-488h]
  char v153; // [rsp+40h] [rbp-488h]
  char *v154; // [rsp+40h] [rbp-488h]
  char *v155; // [rsp+40h] [rbp-488h]
  char v156; // [rsp+40h] [rbp-488h]
  char *v157; // [rsp+40h] [rbp-488h]
  char v158; // [rsp+40h] [rbp-488h]
  int v159; // [rsp+48h] [rbp-480h]
  unsigned __int64 v160; // [rsp+48h] [rbp-480h]
  char *v161; // [rsp+48h] [rbp-480h]
  unsigned __int64 v162; // [rsp+48h] [rbp-480h]
  char v163; // [rsp+48h] [rbp-480h]
  char *v164; // [rsp+48h] [rbp-480h]
  char *v165; // [rsp+48h] [rbp-480h]
  char v166; // [rsp+48h] [rbp-480h]
  int v167; // [rsp+48h] [rbp-480h]
  char v168; // [rsp+48h] [rbp-480h]
  unsigned __int64 v169; // [rsp+50h] [rbp-478h]
  int v170; // [rsp+50h] [rbp-478h]
  size_t v171; // [rsp+50h] [rbp-478h]
  unsigned __int64 v172; // [rsp+50h] [rbp-478h]
  int v173; // [rsp+50h] [rbp-478h]
  size_t v174; // [rsp+58h] [rbp-470h]
  char *v175; // [rsp+58h] [rbp-470h]
  char v176; // [rsp+58h] [rbp-470h]
  unsigned __int64 v177; // [rsp+58h] [rbp-470h]
  unsigned __int64 v178; // [rsp+58h] [rbp-470h]
  unsigned __int64 v179; // [rsp+60h] [rbp-468h]
  char format[2]; // [rsp+70h] [rbp-458h]
  char v181; // [rsp+72h] [rbp-456h]
  char v182; // [rsp+73h] [rbp-455h]
  char v183[9]; // [rsp+87h] [rbp-441h]
  char sa[16]; // [rsp+90h] [rbp-438h]
  __m128i v185; // [rsp+A0h] [rbp-428h]
  __m128i v186; // [rsp+B0h] [rbp-418h]
  __int64 v187; // [rsp+C0h] [rbp-408h]

  v7 = (char *)s;
  v8 = (char *)a2;
  v9 = *(char **)(a3 + 48);
  v10 = *(_DWORD *)(a3 + 8);
  v130 = a4;
  tp = (const __m128i *)a3;
  if ( !v9 )
    v9 = "";
  v133 = a5;
  if ( v10 <= 12 )
  {
    if ( !v10 )
      v10 = 12;
  }
  else
  {
    v10 -= 12;
  }
  v11 = *(_BYTE *)a2;
  v12 = 0LL;
  if ( !*(_BYTE *)a2 )
  {
LABEL_13:
    if ( v7 && v130 )
      *v7 = 0;
    return v12;
  }
  v134 = v10;
  v132 = v9;
  while ( v11 != 37 )
  {
    a2 = v130 - v12;
    if ( (unsigned __int64)(v130 - v12) <= 1 )
      return 0LL;
    if ( v7 )
      *v7++ = v11;
    ++v12;
    v13 = v8;
LABEL_12:
    v11 = v13[1];
    v8 = v13 + 1;
    if ( !v11 )
      goto LABEL_13;
  }
  v15 = v133;
  v16 = 0LL;
LABEL_22:
  for ( i = 0; ; i = v18 )
  {
    v18 = *++v8;
    v19 = v18;
    v20 = v18;
    v21 = *v8 <= 48;
    if ( *v8 != 48 )
      break;
LABEL_26:
    ;
  }
  while ( 1 )
  {
    if ( !v21 )
    {
      if ( (_BYTE)v18 == 94 )
      {
        v15 = 1;
        goto LABEL_22;
      }
      if ( (_BYTE)v18 != 95 )
      {
        v22 = -1;
        if ( v18 - 48 > 9 )
          goto LABEL_29;
        goto LABEL_37;
      }
      goto LABEL_26;
    }
    if ( (_BYTE)v18 != 35 )
      break;
    v18 = *++v8;
    v16 = 1LL;
    v19 = v18;
    v20 = v18;
    v21 = *v8 <= 48;
    if ( *v8 == 48 )
      goto LABEL_26;
  }
  if ( (_BYTE)v18 == 45 )
    goto LABEL_26;
  v22 = -1;
  if ( v18 - 48 > 9 )
    goto LABEL_29;
LABEL_37:
  v22 = 0;
  while ( 1 )
  {
    v23 = v8[1];
    v19 = v23;
    a2 = v23 - 48;
    if ( v22 > 214748364 )
      break;
    v24 = *v8;
    if ( v22 == 214748364 && (char)v24 > 55 )
      break;
    ++v8;
    v22 = v24 + 10 * v22 - 48;
LABEL_41:
    if ( (unsigned int)a2 > 9 )
    {
      v20 = v23;
      goto LABEL_29;
    }
  }
  if ( (unsigned int)a2 <= 9 )
  {
    v23 = v8[2];
    v22 = 0x7FFFFFFF;
    v8 += 2;
    v19 = v23;
    a2 = v23 - 48;
    goto LABEL_41;
  }
  v20 = v23;
  ++v8;
  v22 = 0x7FFFFFFF;
LABEL_29:
  if ( (_BYTE)v19 == 69 || (_BYTE)v19 == 79 )
    v19 = (unsigned __int8)*++v8;
  else
    v20 = 0LL;
  switch ( (_BYTE)v19 )
  {
    case 0:
      v92 = v8 - 1;
      v102 = *(v8 - 1);
      goto LABEL_263;
    case 0x25:
      LODWORD(v94) = 0;
      v78 = 1LL;
      a2 = v130 - v12;
      if ( v22 >= 0 )
        LODWORD(v94) = v22;
      v94 = (int)v94;
      if ( (_DWORD)v94 )
        v78 = (int)v94;
      if ( (_DWORD)v20 )
      {
        v13 = v8;
        v92 = v8;
        v93 = 1LL;
        goto LABEL_244;
      }
      if ( v78 < a2 )
      {
        if ( v7 )
        {
          if ( v22 > 1 )
          {
            v104 = v22 - 1LL;
            v105 = v7;
            v7 += v104;
            if ( i == 48 )
              memset(v105, 48, v104);
            else
              memset(v105, 32, v104);
            LOBYTE(v19) = *v8;
          }
          *v7++ = v19;
        }
LABEL_176:
        v12 += v78;
        v13 = v8;
        goto LABEL_12;
      }
      return 0LL;
    case 0x3A:
      v108 = v8[1];
      a2 = (unsigned __int64)(v8 + 1);
      for ( j = 1LL; v108 == 58; a2 = (unsigned __int64)&v8[j] )
        v108 = v8[++j];
      if ( v108 != 122 )
        goto LABEL_238;
      v8 = (char *)a2;
      goto LABEL_254;
    case 0x41:
    case 0x42:
    case 0x61:
      if ( (_DWORD)v20 )
        goto LABEL_238;
      if ( (_BYTE)v16 )
        v15 = v16;
      goto LABEL_51;
    case 0x43:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_336;
      v140 = 0;
      v47 = 2;
      LOBYTE(v69) = tp[1].m128i_i32[1] < -1900;
      v67 = tp[1].m128i_i32[1] / 100
          + 19
          - ((tp[1].m128i_i32[1] / 100 + 19 > 0) & ((unsigned int)(tp[1].m128i_i32[1] % 100) >> 31));
      v68 = 0;
      goto LABEL_122;
    case 0x44:
      if ( !(_DWORD)v20 )
        goto LABEL_94;
      goto LABEL_238;
    case 0x46:
      if ( !(_DWORD)v20 )
        goto LABEL_94;
      goto LABEL_238;
    case 0x47:
    case 0x56:
    case 0x67:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v59 = tp[1].m128i_i32[3];
      v60 = tp[1].m128i_i32[2];
      v139 = tp[1].m128i_i32[1];
      v61 = v139 + ((v139 >> 31) & 0x190) - 100;
      v62 = v60 - 382 + 7 * ((v59 - v60 + 382) / 7) + 3;
      if ( v62 < 0 )
      {
        v118 = v139 + ((v139 >> 31) & 0x190) - 101;
        v119 = 365;
        if ( !(((_BYTE)v139 + ((v139 >> 31) & 0x90) - 101) & 3) )
        {
          v119 = 366;
          if ( v118 == 100 * (v118 / 100) )
            v119 = 366 - ((unsigned int)(v118 % 400) >= 1);
        }
        v120 = v119 + v59;
        v121 = v120 - v60;
        v65 = -1;
        v62 = v120 - (v121 + 382) + 7 * ((v121 + 382) / 7) + 3;
      }
      else
      {
        v63 = 365;
        if ( !(v61 & 3) )
        {
          v63 = 366;
          if ( v61 == 100 * (v61 / 100) )
            v63 = (v61 == 400 * (v61 / 400)) + 365;
        }
        v64 = v60 - 382 + 7 * ((v59 - v63 - v60 + 382) / 7) + 3;
        if ( v64 >= 0 )
          v62 = v64;
        v65 = (v64 >> 31) + 1;
      }
      if ( (_BYTE)v19 == 71 )
      {
        v123 = tp[1].m128i_i32[1];
        v140 = 0;
        v47 = 4;
        v125 = __OFSUB__(v123, -1900 - v65);
        v124 = v123 - (-1900 - v65) < 0;
        v67 = v123 + v65 + 1900;
        LOBYTE(v69) = v124 ^ v125;
        v68 = 0;
        goto LABEL_122;
      }
      if ( (_BYTE)v19 == 103 )
      {
        v47 = 2;
        v66 = (v65 + v139 % 100) % 100;
        v67 = v66;
        if ( v66 < 0 )
        {
          v67 = v66 + 100;
          if ( v139 < -1900 - v65 )
            v67 = -v66;
        }
      }
      else
      {
        v47 = 2;
        v67 = v62 / 7 + 1;
      }
      goto LABEL_121;
    case 0x48:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 2;
      v67 = tp->m128i_i64[1];
      goto LABEL_121;
    case 0x49:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v67 = v134;
      v47 = 2;
      goto LABEL_121;
    case 0x4D:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 2;
      v67 = HIDWORD(tp->m128i_i64[0]);
      goto LABEL_121;
    case 0x4E:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      if ( v22 == -1 )
      {
        v67 = a7;
        v22 = 9;
        v47 = 9;
      }
      else
      {
        if ( v22 > 8 )
        {
          v67 = a7;
        }
        else
        {
          v67 = a7;
          for ( k = v22; k != 9; ++k )
            v67 = (int)v67 / 10;
        }
        v47 = v22;
      }
      goto LABEL_121;
    case 0x50:
      v27 = 1;
      goto LABEL_152;
    case 0x52:
    case 0x54:
LABEL_94:
      v54 = sub_405B00(0LL, a6, a7);
      v55 = 0;
      if ( v22 >= 0 )
        v55 = v22;
      v56 = v55;
      if ( v54 >= v55 )
        v56 = v54;
      if ( v130 - v12 <= v56 )
        return 0LL;
      if ( v7 )
      {
        if ( v54 < v55 )
        {
          v169 = v54;
          v57 = v22 - v54;
          v58 = v7;
          v7 += v57;
          if ( i == 48 )
            memset(v58, 48, v57);
          else
            memset(v58, 32, v57);
          v54 = v169;
        }
        v162 = v54;
        sub_405B00(v7, a6, a7);
        v7 += v162;
      }
      v12 += v56;
      v13 = v8;
      goto LABEL_12;
    case 0x53:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 2;
      v67 = tp->m128i_i64[0];
      goto LABEL_121;
    case 0x55:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v89 = tp[1].m128i_i32[3] - tp[1].m128i_i32[2] + 7;
      v90 = (unsigned __int64)(-1840700269LL * v89) >> 32;
      goto LABEL_228;
    case 0x57:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v89 = 7 * ((tp[1].m128i_i32[2] + 6) / 7) - (tp[1].m128i_i32[2] + 6) + tp[1].m128i_i32[3] + 7;
      v90 = (unsigned __int64)(-1840700269LL * v89) >> 32;
LABEL_228:
      v47 = 2;
      v67 = ((v90 + v89) >> 2) - (v89 >> 31);
      goto LABEL_121;
    case 0x58:
    case 0x63:
    case 0x78:
      if ( (_DWORD)v20 != 79 )
        goto LABEL_69;
      goto LABEL_238;
    case 0x59:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_336;
      if ( (_DWORD)v20 == 79 )
        goto LABEL_238;
      v140 = 0;
      v47 = 4;
      v88 = tp[1].m128i_i32[1];
      LOBYTE(v69) = v88 < -1900;
      v67 = v88 + 1900;
      v68 = 0;
      goto LABEL_222;
    case 0x5A:
      v163 = v16;
      if ( (_BYTE)v16 )
        v15 = 0;
      v151 = v15;
      v70 = strlen(v132);
      v71 = 0;
      if ( v22 >= 0 )
        v71 = v22;
      v72 = v71;
      if ( v70 >= v71 )
        v72 = v70;
      a2 = v130 - v12;
      if ( v130 - v12 <= v72 )
        return 0LL;
      if ( v7 )
      {
        v73 = v151;
        v74 = v163;
        if ( v70 < v71 )
        {
          v75 = v22 - v70;
          v76 = v7;
          v7 += v75;
          if ( i == 48 )
          {
            memset(v76, 48, v75);
            v73 = v151;
            v74 = v163;
          }
          else
          {
            memset(v76, 32, v75);
            v74 = v163;
            v73 = v151;
          }
        }
        if ( v74 )
        {
          sub_405A60((__int64)v7, (__int64)v132, v70);
        }
        else if ( v73 )
        {
          sub_405AB0((__int64)v7, (__int64)v132, v70);
        }
        else
        {
          memcpy(v7, v132, v70);
        }
        v7 += v70;
      }
      v12 += v72;
      v13 = v8;
      goto LABEL_12;
    case 0x62:
    case 0x68:
      if ( (_BYTE)v16 )
        v15 = v16;
      if ( (_DWORD)v20 )
        goto LABEL_238;
LABEL_51:
      v25 = &v181;
      v26 = v8;
      v27 = 0;
      *(_WORD *)format = 9504;
      LODWORD(v20) = 0;
      goto LABEL_52;
    case 0x64:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 2;
      v67 = HIDWORD(tp->m128i_i64[1]);
      goto LABEL_121;
    case 0x65:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v67 = HIDWORD(tp->m128i_i64[1]);
      goto LABEL_159;
    case 0x6A:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v140 = 0;
      v47 = 3;
      v103 = tp[1].m128i_i32[3];
      LOBYTE(v69) = v103 < -1;
      v67 = v103 + 1;
      v68 = 0;
      goto LABEL_122;
    case 0x6B:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v67 = tp->m128i_i64[1];
      goto LABEL_159;
    case 0x6C:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v67 = v134;
LABEL_159:
      v47 = 2;
      if ( i != 48 && i != 45 )
        i = 95;
      goto LABEL_121;
    case 0x6D:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v140 = 0;
      v47 = 2;
      v77 = tp[1].m128i_i32[0];
      LOBYTE(v69) = v77 < -1;
      v67 = v77 + 1;
      v68 = 0;
      goto LABEL_122;
    case 0x6E:
      LODWORD(v78) = 0;
      if ( v22 >= 0 )
        LODWORD(v78) = v22;
      v78 = (int)v78;
      if ( !(_DWORD)v78 )
        v78 = 1LL;
      if ( v130 - v12 <= v78 )
        return 0LL;
      if ( v7 )
      {
        if ( v22 > 1 )
        {
          v79 = v22 - 1LL;
          v80 = v7;
          v7 += v79;
          if ( i == 48 )
            memset(v80, 48, v79);
          else
            memset(v80, 32, v79);
        }
        *v7++ = 10;
      }
      goto LABEL_176;
    case 0x70:
      v27 = 0;
LABEL_152:
      LOBYTE(v19) = 112;
      if ( (_BYTE)v16 )
        v27 = v16;
      if ( (_BYTE)v16 )
        v15 = 0;
      goto LABEL_70;
    case 0x71:
      v47 = 1;
      if ( (_DWORD)v20 == 79 )
        goto LABEL_124;
      v140 = 0;
      LOBYTE(v69) = 0;
      v68 = 0;
      v67 = ((11 * tp[1].m128i_i32[0]) >> 5) + 1;
      goto LABEL_179;
    case 0x72:
LABEL_69:
      v27 = 0;
LABEL_70:
      *(_WORD *)format = 9504;
      if ( !(_DWORD)v20 )
      {
        v26 = v8;
        v25 = &v181;
        goto LABEL_52;
      }
      v47 = 0;
      goto LABEL_125;
    case 0x73:
      v149 = v15;
      v38 = (__int64)v183;
      v39 = _mm_loadu_si128(tp + 2);
      v40 = _mm_loadu_si128(tp + 1);
      v41 = tp[3].m128i_i64[0];
      *(__m128i *)sa = _mm_loadu_si128(tp);
      v185 = v40;
      v186 = v39;
      v187 = v41;
      v42 = sub_40C500(a6, sa, a2, v19, v16, v20);
      v15 = v149;
      v43 = v42;
      v44 = v42;
      do
      {
        v45 = v44 % 10;
        v44 /= 10LL;
        v46 = 48 - v45;
        a2 = (unsigned int)(v45 + 48);
        if ( v43 < 0 )
          a2 = v46;
        *(_BYTE *)--v38 = a2;
      }
      while ( v44 );
      v47 = 1;
      if ( v22 > 0 )
        v47 = v22;
      if ( v43 >= 0 )
        goto LABEL_79;
      goto LABEL_300;
    case 0x74:
      LODWORD(v78) = 0;
      if ( v22 >= 0 )
        LODWORD(v78) = v22;
      v78 = (int)v78;
      if ( !(_DWORD)v78 )
        v78 = 1LL;
      if ( v130 - v12 <= v78 )
        return 0LL;
      if ( v7 )
      {
        if ( v22 > 1 )
        {
          v86 = v22 - 1LL;
          v87 = v7;
          v7 += v86;
          if ( i == 48 )
            memset(v87, 48, v86);
          else
            memset(v87, 32, v86);
        }
        *v7++ = 9;
      }
      goto LABEL_176;
    case 0x75:
      v47 = 1;
      v67 = (tp[1].m128i_i32[2] + 6) % 7 + 1;
      goto LABEL_121;
    case 0x77:
      if ( (_DWORD)v20 == 69 )
        goto LABEL_238;
      v47 = 1;
      v67 = tp[1].m128i_u32[2];
      goto LABEL_121;
    case 0x79:
      if ( (_DWORD)v20 == 69 )
      {
LABEL_336:
        v47 = 0;
        goto LABEL_124;
      }
      v47 = 2;
      v106 = tp[1].m128i_i32[1] % 100;
      v67 = v106;
      if ( v106 < 0 )
      {
        v107 = -v106;
        v67 += 100;
        if ( tp[1].m128i_i32[1] <= -1901 )
          v67 = v107;
      }
LABEL_121:
      v140 = 0;
      v68 = 0;
      v69 = v67 >> 31;
LABEL_122:
      if ( (_DWORD)v20 == 79 )
      {
        if ( (_BYTE)v69 )
          goto LABEL_223;
LABEL_124:
        v27 = 0;
        *(_WORD *)format = 9504;
LABEL_125:
        v181 = v20;
        v26 = v8;
        LODWORD(v20) = v47;
        v25 = &v182;
LABEL_52:
        *v25 = v19;
        v25[1] = 0;
        v135 = v26;
        v159 = v20;
        v146 = v15;
        v28 = strftime(sa, 0x400uLL, format, (const struct tm *)tp);
        v13 = v135;
        if ( v28 )
        {
          v29 = v28 - 1;
          v30 = 0;
          if ( v22 >= 0 )
            v30 = v22;
          v31 = v30;
          if ( v29 >= v30 )
            v31 = v29;
          a2 = v130 - v12;
          if ( v130 - v12 > v31 )
          {
            if ( v7 )
            {
              v15 = v146;
              if ( !v159 && v29 < v30 )
              {
                v160 = v29;
                v32 = v22 - v29;
                v147 = v135;
                v136 = v15;
                v33 = v7;
                v7 += v32;
                if ( i == 48 )
                {
                  memset(v33, 48, v32);
                  v15 = v136;
                  v13 = v147;
                  v29 = v160;
                }
                else
                {
                  memset(v33, 32, v32);
                  v29 = v160;
                  v13 = v147;
                  v15 = v136;
                }
              }
              v148 = v13;
              v34 = &sa[1];
              v35 = v29;
              v36 = v7;
              v137 = v29;
              if ( !v27 )
                goto LABEL_64;
              sub_405A60((__int64)v7, (__int64)&sa[1], v29);
              v37 = v137;
              v13 = v148;
              goto LABEL_66;
            }
            goto LABEL_67;
          }
          return 0LL;
        }
        goto LABEL_12;
      }
LABEL_222:
      if ( (_BYTE)v69 )
LABEL_223:
        v67 = -v67;
LABEL_179:
      v81 = v183;
      while ( 1 )
      {
        v38 = (__int64)(v81 - 1);
        if ( v68 & 1 )
        {
          v82 = (__int64)(v81 - 2);
          *--v81 = 58;
          v38 = v82;
        }
        v68 >>= 1;
        a2 = v67 / 0xA;
        *(v81 - 1) = v67 % 0xA + 48;
        v81 = (char *)v38;
        if ( v67 <= 9 && !v68 )
          break;
        v67 /= 0xAu;
      }
      if ( v47 < v22 )
        v47 = v22;
      if ( (_BYTE)v69 )
      {
LABEL_300:
        v141 = 45;
        v109 = 45;
        if ( i == 45 )
          goto LABEL_301;
LABEL_191:
        v48 = &v183[-v38];
        LODWORD(v50) = v47 - 1 - (unsigned __int64)&v183[-v38];
        v49 = v130 - v12;
        if ( (int)v50 <= 0 )
        {
          LODWORD(v51) = 0;
          v111 = 1LL;
          if ( v22 >= 0 )
            LODWORD(v51) = v22;
          v51 = (int)v51;
          if ( (_DWORD)v51 )
            v111 = (int)v51;
          if ( v111 >= v49 )
            return 0LL;
          if ( v7 )
          {
            if ( !v47 && (unsigned __int64)(int)v51 > 1 )
            {
              v112 = v22 - 1LL;
              v179 = v111;
              v177 = (int)v51;
              v157 = &v7[v112];
              v166 = v15;
              if ( i == 48 )
              {
                memset(v7, 48, v112);
                v7 = v157;
                v15 = v166;
                v47 = 0;
                v51 = v177;
                v111 = v179;
                v48 = &v183[-v38];
              }
              else
              {
                memset(v7, 32, v112);
                v7 = v157;
                v48 = &v183[-v38];
                v111 = v179;
                v51 = v177;
                v47 = 0;
                v15 = v166;
              }
            }
            *(++v7 - 1) = v141;
          }
          v12 += v111;
          v13 = v8;
          v49 = v130 - v12;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          if ( v47 >= v49 )
            return 0LL;
          LODWORD(a2) = 0;
          v83 = 1LL;
          if ( v22 >= 0 )
            LODWORD(a2) = v22;
          a2 = (int)a2;
          if ( (_DWORD)a2 )
            v83 = (int)a2;
          if ( v83 >= v49 )
            return 0LL;
          v12 += v83;
          v50 = (int)v50;
          v13 = v8;
          if ( !v7 )
            goto LABEL_207;
          if ( !v47 && (unsigned __int64)(int)a2 > 1 )
          {
            v174 = (int)v50;
            v84 = v22 - 1LL;
            v152 = v15;
            v85 = v7;
            v7 += v84;
            if ( i == 48 )
            {
              memset(v85, 48, v84);
              v15 = v152;
              v47 = 0;
              v48 = &v183[-v38];
              v50 = v174;
            }
            else
            {
              memset(v85, 32, v84);
              v50 = v174;
              v48 = &v183[-v38];
              v47 = 0;
              v15 = v152;
            }
          }
          ++v7;
          v13 = v8;
          *(v7 - 1) = v141;
LABEL_205:
          if ( v7 )
          {
            v175 = v48;
            v170 = v47;
            v164 = v13;
            v153 = v15;
            v142 = v50;
            memset(v7, 48, v50);
            v50 = v142;
            v48 = v175;
            v47 = v170;
            v13 = v164;
            v15 = v153;
            v7 += v142;
          }
LABEL_207:
          v12 += v50;
          v22 = 0;
          v51 = 0LL;
          v49 = v130 - v12;
          goto LABEL_84;
        }
LABEL_328:
        v113 = (int)v50;
        if ( (int)v50 >= v49 )
          return 0LL;
        if ( v7 )
        {
          v114 = v7;
          v173 = v50;
          v167 = v47;
          v7 += (int)v50;
          v158 = v15;
          memset(v114, 32, (int)v50);
          LODWORD(v50) = v173;
          v47 = v167;
          v15 = v158;
        }
        v12 += v113;
        v115 = v22 - v50;
        v21 = (int)v50 < v22;
        v22 = 0;
        if ( v21 )
          v22 = v115;
        v49 = v130 - v12;
        if ( v141 )
        {
          v51 = v22;
          v116 = 1LL;
          if ( v22 )
            v116 = v22;
          if ( v116 >= v49 )
            return 0LL;
          if ( v7 )
          {
            if ( !v47 && (unsigned __int64)v22 > 1 )
            {
              v117 = v7;
              v178 = v116;
              v7 += v22 - 1;
              v168 = v15;
              memset(v117, 32, v22 - 1LL);
              v116 = v178;
              v47 = 0;
              v15 = v168;
              v51 = v22;
            }
            *(++v7 - 1) = v141;
          }
          v12 += v116;
          v13 = v8;
          i = 95;
          v48 = &v183[-v38];
          v49 = v130 - v12;
        }
        else
        {
          v51 = v22;
          v13 = v8;
          i = 95;
          v48 = &v183[-v38];
        }
        goto LABEL_84;
      }
      if ( !v140 )
      {
LABEL_79:
        v48 = &v183[-v38];
        v49 = v130 - v12;
        if ( i == 45 || (LODWORD(v50) = v47 - (_DWORD)v48, v47 - (int)v48 <= 0) )
        {
          LODWORD(v51) = 0;
          v13 = v8;
          if ( v22 >= 0 )
            LODWORD(v51) = v22;
          v51 = (int)v51;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          a2 = v47;
          if ( v47 >= v49 )
            return 0LL;
          v50 = (int)v50;
          v13 = v8;
          goto LABEL_205;
        }
        v141 = 0;
        goto LABEL_328;
      }
      if ( i != 45 )
      {
        v141 = 43;
        goto LABEL_191;
      }
      v109 = 43;
LABEL_301:
      LODWORD(v51) = 0;
      v110 = 1LL;
      if ( v22 >= 0 )
        LODWORD(v51) = v22;
      v51 = (int)v51;
      if ( (_DWORD)v51 )
        v110 = (int)v51;
      if ( v130 - v12 <= v110 )
        return 0LL;
      if ( v7 )
      {
        if ( !v47 && (unsigned __int64)(int)v51 > 1 )
        {
          v176 = v109;
          v172 = (int)v51;
          v156 = v15;
          memset(v7, 32, v22 - 1LL);
          v109 = v176;
          v51 = v172;
          v47 = 0;
          v15 = v156;
          v7 += v22 - 1;
        }
        *v7++ = v109;
      }
      v12 += v110;
      v13 = v8;
      i = 45;
      v48 = &v183[-v38];
      v49 = v130 - v12;
LABEL_84:
      v31 = v51;
      if ( (unsigned __int64)v48 >= v51 )
        v31 = (unsigned __int64)v48;
      if ( v31 < v49 )
      {
        if ( v7 )
        {
          if ( !v47 && (unsigned __int64)v48 < v51 )
          {
            v161 = v48;
            v52 = v22 - (_QWORD)v48;
            v150 = v13;
            v138 = v15;
            v53 = v7;
            v7 += v52;
            if ( i == 48 )
            {
              memset(v53, 48, v52);
              v15 = v138;
              v13 = v150;
              v48 = v161;
            }
            else
            {
              memset(v53, 32, v52);
              v48 = v161;
              v13 = v150;
              v15 = v138;
            }
          }
          v148 = v13;
          v35 = (size_t)v48;
          v34 = (char *)v38;
          v36 = v7;
          v137 = (unsigned __int64)v48;
LABEL_64:
          if ( v15 )
          {
            sub_405AB0((__int64)v36, (__int64)v34, v35);
            v37 = v137;
            v13 = v148;
          }
          else
          {
            memcpy(v36, v34, v35);
            v13 = v148;
            v37 = v137;
          }
LABEL_66:
          v7 += v37;
        }
LABEL_67:
        v12 += v31;
        goto LABEL_12;
      }
      return 0LL;
    case 0x7A:
      j = 0LL;
LABEL_254:
      if ( tp[2].m128i_i32[0] < 0 )
      {
        v13 = v8;
        goto LABEL_12;
      }
      v99 = tp[2].m128i_i64[1];
      LOBYTE(v69) = 1;
      if ( (int)v99 >= 0 )
      {
        LOBYTE(v69) = 0;
        if ( !(_DWORD)v99 )
          LOBYTE(v69) = *v132 == 45;
      }
      v145 = (int)v99 / 3600;
      v100 = (int)v99 / 60 % 60;
      v68 = (int)v99 / 60 % 60;
      v101 = (int)v99 % 60;
      if ( j == 1 )
        goto LABEL_364;
      if ( j )
      {
        if ( j == 2 )
          goto LABEL_383;
        if ( j != 3 )
        {
          v102 = *v8;
          v92 = v8;
LABEL_263:
          LODWORD(v94) = 0;
          a2 = v130 - v12;
          if ( v22 >= 0 )
            LODWORD(v94) = v22;
          v94 = (int)v94;
          if ( v102 == 37 )
          {
            v78 = 1LL;
            v13 = v92;
            v93 = 1LL;
            if ( (_DWORD)v94 )
              v78 = (int)v94;
          }
          else
          {
            v8 = v92;
LABEL_238:
            v91 = (__int64)(v8 - 1);
            do
            {
              v92 = (char *)v91;
              LODWORD(v93) = (_DWORD)v8 - 1 + 2 - v91--;
            }
            while ( *(_BYTE *)(v91 + 1) != 37 );
            LODWORD(v94) = 0;
            v93 = (int)v93;
            v13 = v8;
            a2 = v130 - v12;
            if ( v22 >= 0 )
              LODWORD(v94) = v22;
            v94 = (int)v94;
            v78 = (int)v94;
            if ( (int)v93 >= (unsigned __int64)(int)v94 )
              v78 = (int)v93;
          }
LABEL_244:
          if ( a2 > v78 )
          {
            if ( v7 )
            {
              if ( v93 < v94 )
              {
                v171 = v93;
                v95 = v22 - v93;
                v165 = v13;
                v154 = v92;
                v143 = v15;
                v96 = v7;
                v7 += v95;
                if ( i == 48 )
                {
                  memset(v96, 48, v95);
                  v15 = v143;
                  v92 = v154;
                  v13 = v165;
                  v93 = v171;
                }
                else
                {
                  memset(v96, 32, v95);
                  v93 = v171;
                  v13 = v165;
                  v92 = v154;
                  v15 = v143;
                }
              }
              v155 = v13;
              v144 = v93;
              if ( v15 )
              {
                sub_405AB0((__int64)v7, (__int64)v92, v93);
                v97 = v144;
                v13 = v155;
              }
              else
              {
                memcpy(v7, v92, v93);
                v13 = v155;
                v97 = v144;
              }
              v7 += v97;
            }
            v12 += v78;
            goto LABEL_12;
          }
          return 0LL;
        }
        if ( v101 )
        {
LABEL_383:
          v126 = 10000 * v145;
          v47 = 9;
          v140 = 1;
          v127 = 100 * v68 + v126;
          v68 = 20;
          v67 = v127 + v101;
        }
        else if ( v100 )
        {
LABEL_364:
          v128 = 100 * v145;
          v47 = 6;
          v140 = 1;
          v67 = v68 + v128;
          v68 = 4;
        }
        else
        {
          v67 = v145;
          v47 = 3;
          v140 = 1;
        }
      }
      else
      {
        v129 = 100 * v145;
        v68 = 0;
        v140 = 1;
        v47 = 5;
        v67 = v100 + v129;
      }
      goto LABEL_122;
    default:
      goto LABEL_238;
  }
}

__int64 __fastcall sub_4072D0(void *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return sub_405B00(a1, a3, a4, a2, 0, a5, a6);
}

char *__fastcall sub_4072F0(const char *a1)
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
  qword_617498 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_407390(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_40C750();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_412569;
      if ( !v5 )
        v2 = (char *)&unk_41255E;
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
    v2 = (char *)&unk_412565;
    if ( !v5 )
      v2 = (char *)&unk_412562;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_407490(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_407490((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_407490((__int64)v9, v79, s);
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
              return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
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
            return sub_407490((__int64)v9, v10, s);
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
            return sub_407490((__int64)v9, v10, s);
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
            return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_407490((__int64)v9, v10, s);
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
          return sub_407490((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_40AE50((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_407490((__int64)v9, v10, s);
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
      return sub_407490((__int64)v9, v10, s);
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
        a8 = sub_407390("`", v11);
        v47 = sub_407390("'", v11);
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

unsigned __int64 __fastcall sub_407490(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
            return sub_407490((__int64)v9, v10, s);
          v37 = !v82 && v36;
          if ( v37 )
          {
            if ( v83 )
            {
              if ( v59 )
                return sub_407490((__int64)v9, v79, s);
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
              return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
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
            return sub_407490((__int64)v9, v10, s);
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
            return sub_407490((__int64)v9, v10, s);
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
            return sub_407490((__int64)v9, v10, s);
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
              return sub_407490((__int64)v9, v10, s);
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
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_407490((__int64)v9, v10, s);
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
          return sub_407490((__int64)v9, v10, s);
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
        v28 = (const unsigned __int16 **)sub_40AE50((wchar_t *)&wc, &s[v18 + v40]);
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
                  return sub_407490((__int64)v9, v10, s);
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
      return sub_407490((__int64)v9, v10, s);
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
        a8 = sub_407390("`", v11);
        v47 = sub_407390("'", v11);
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

_BYTE *__fastcall sub_4086C0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_617378;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_617390 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_4097B0();
    v9 = 16LL * (a1 + 1);
    if ( off_617378 == &xmmword_617380 )
    {
      v7 = (__int128 *)sub_4095C0(0LL, v9);
      off_617378 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_617380);
    }
    else
    {
      off_617378 = (__int128 *)sub_4095C0(off_617378, v9);
      v7 = off_617378;
    }
    memset(&v7[dword_617390], 0, 16LL * (a1 + 1 - dword_617390));
    dword_617390 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_407490(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_6174A0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_409560(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_407490(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_4086C0(int a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v7 = off_617378;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_617390 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_4097B0();
    v9 = 16LL * (a1 + 1);
    if ( off_617378 == &xmmword_617380 )
    {
      v7 = (__int128 *)sub_4095C0(0LL, v9);
      off_617378 = v7;
      *v7 = (__int128)_mm_load_si128((const __m128i *)&xmmword_617380);
    }
    else
    {
      off_617378 = (__int128 *)sub_4095C0(off_617378, v9);
      v7 = off_617378;
    }
    memset(&v7[dword_617390], 0, 16LL * (a1 + 1 - dword_617390));
    dword_617390 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(v5 + 4) | 1;
  v18 = *v10;
  v12 = sub_407490(v11, *v10, v17, v4, *(_DWORD *)v5, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_6174A0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_409560(v13);
    v15 = *(_DWORD *)v5;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_407490(v14, v13, v17, v4, v15, v21, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v20;
  return v11;
}

__int64 __fastcall sub_4088A0(__int128 *a1)
{
  if ( !a1 )
    a1 = &xmmword_6175A0;
  return *(unsigned int *)a1;
}

__int128 *__fastcall sub_4088B0(__int128 *a1, int a2)
{
  __int128 *result; // rax

  result = &xmmword_6175A0;
  if ( !a1 )
    a1 = &xmmword_6175A0;
  *(_DWORD *)a1 = a2;
  return result;
}

_BYTE *__fastcall sub_408BE0(int a1, int a2, char *a3)
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
  return sub_4086C0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408BE0(int a1, int a2, char *a3)
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
  return sub_4086C0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408C50(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_4086C0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_408C50(int a1, int a2, char *a3, unsigned __int64 a4)
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
  return sub_4086C0(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_408CC0(int a1, char *a2)
{
  return sub_408BE0(0, a1, a2);
}

_BYTE *__fastcall sub_408CE0(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v3; // cl
  int *v4; // r8
  unsigned __int32 v5; // edx
  __m128i v7; // [rsp+0h] [rbp-48h]
  __m128i v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = a3 & 0x1F;
  v10 = qword_6175D0;
  v7 = _mm_load_si128((const __m128i *)&xmmword_6175A0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_6175B0);
  v4 = &v7.m128i_i32[(a3 >> 5) + 2];
  v9 = _mm_load_si128((const __m128i *)&xmmword_6175C0);
  v5 = v7.m128i_u32[(a3 >> 5) + 2];
  *v4 = v5 ^ ((~(unsigned __int8)(v5 >> v3) & 1) << v3);
  return sub_4086C0(0, a1, a2, (__int64)&v7);
}

_BYTE *__fastcall sub_408D60(char *a1)
{
  return sub_408CE0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_408D90(int a1, int a2, char *a3)
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
  return sub_4086C0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408D90(int a1, int a2, char *a3)
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
  return sub_4086C0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_408E00(int a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-48h]
  __m128i v7; // [rsp+10h] [rbp-38h]
  __m128i v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v6 = _mm_load_si128((const __m128i *)&xmmword_6175A0);
  v7 = _mm_load_si128((const __m128i *)&xmmword_6175B0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_6175C0);
  v9 = qword_6175D0;
  v6.m128i_i32[0] = 10;
  if ( !a2 || !a3 )
    abort();
  v8.m128i_i64[1] = a2;
  v9 = a3;
  return sub_4086C0(a1, a4, a5, (__int64)&v6);
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
  int v1; // eax
  int v2; // edx
  __int64 result; // rax
  __int64 v4; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  v1 = sub_40C6A0(228);
  v2 = v1;
  *(_DWORD *)a1 = v1;
  result = 0LL;
  if ( v2 < 0 )
  {
    v4 = sub_409BB0(0LL, 0LL);
    *(_QWORD *)(a1 + 8) = v4;
    result = (unsigned int)-(v4 == 0);
  }
  return result;
}

int __fastcall sub_408F80(__int64 a1)
{
  int result; // eax

  if ( *(_DWORD *)a1 < 0 )
    result = sub_409940(*(void **)(a1 + 8));
  else
    result = fchdir(*(_DWORD *)a1);
  return result;
}

void __fastcall sub_408FA0(int *a1)
{
  int *v1; // rbx
  int v2; // edi

  v1 = a1;
  v2 = *a1;
  if ( v2 >= 0 )
    close(v2);
  free(*((void **)v1 + 1));
}

__int64 __fastcall sub_408FC0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  __int64 result; // rax
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
  __int64 v23; // rbx
  char *v24; // rax

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
    case 1LL:
      v14 = *v7;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *v7;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *v7;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 7LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 8LL:
      v10 = *v7;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *v7;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *v7;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_408FC0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  __int64 result; // rax
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
  __int64 v23; // rbx
  char *v24; // rax

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
    case 1LL:
      v14 = *v7;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *v7;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *v7;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = v7[3];
      v21 = *v7;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 7LL:
      v23 = *v7;
      v24 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v24, v23);
    case 8LL:
      v10 = *v7;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *v7;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *v7;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_4093C0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
{
  __int64 i; // r9
  __int64 *v6; // r10
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 *v9; // r10
  __int64 v10; // rax
  __int64 v12[11]; // [rsp+0h] [rbp-58h]

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
        return sub_408FC0(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_408FC0(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_409420(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  char *v7; // r10
  unsigned int v8; // er8
  __int64 i; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v15[10]; // [rsp+20h] [rbp-88h]
  char v16[32]; // [rsp+70h] [rbp-38h]
  __int64 v17; // [rsp+90h] [rbp-18h]
  __int64 v18; // [rsp+98h] [rbp-10h]

  v17 = a5;
  v7 = &a7;
  v8 = 32;
  v18 = a6;
  for ( i = 0LL; i != 10; ++i )
  {
    if ( v8 <= 0x2F )
    {
      v10 = v8;
      v8 += 8;
      v11 = *(_QWORD *)&v16[v10];
      v15[i] = v11;
      if ( !v11 )
        return sub_408FC0(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_408FC0(a1, a2, a3, a4, v15, i);
}

int sub_4094E0()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_4107C3);
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_409560(size_t a1)
{
  void *result; // rax

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
        sub_4097B0();
    }
  }
  return result;
}

void *__fastcall sub_409760(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_409560(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_409790(void *src)
{
  size_t v1; // rax

  v1 = strlen((const char *)src);
  return sub_409760(src, v1 + 1);
}

noreturn void  sub_4097B0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 sub_4097F0()
{
  __int64 v0; // rbx

  v0 = sub_409BB0(0LL, 0LL);
  if ( !v0 && *__errno_location() == 12 )
    sub_4097B0();
  return v0;
}

__int64 sub_409820(__int64 a1, ...)
{
  gcc_va_list va; // [rsp+8h] [rbp-D0h]

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

__int64 __fastcall sub_409900(int *a1, const char *a2)
{
  int v2; // eax
  int v3; // ebp

  v2 = openat(*a1, a2, 67840);
  if ( v2 < 0 )
    return 0xFFFFFFFFLL;
  v3 = v2;
  sub_4098C0(*a1);
  *a1 = v3;
  return 0LL;
}

__int64 __fastcall sub_409940(void *s)
{
  unsigned int v1; // ebx
  int *v2; // r12
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // rax
  size_t v6; // rbx
  _BYTE *v7; // rbp
  char *v8; // r13
  _BYTE *v9; // rax
  _BYTE *v10; // rbx
  int v11; // eax
  int v12; // ebx
  _BYTE *v14; // rax
  _BYTE *v15; // rbx
  int v16; // eax
  int fd; // [rsp+Ch] [rbp-2Ch]

  v1 = chdir((const char *)s);
  if ( v1 )
  {
    v2 = __errno_location();
    if ( *v2 == 36 )
    {
      v3 = strlen((const char *)s);
      fd = -100;
      v4 = v3;
      if ( !v3 )
        __assert_fail("0 < len", "lib/chdir-long.c", 0x7Eu, "chdir_long");
      if ( v3 <= 0xFFF )
        __assert_fail("4096 <= len", "lib/chdir-long.c", 0x7Fu, "chdir_long");
      v5 = strspn((const char *)s, "/");
      v6 = v5;
      if ( v5 == 2 )
      {
        v14 = (_BYTE *)sub_40AED0((char *)s + 3, 47LL, v4 - 3);
        v15 = v14;
        if ( !v14 )
          return (unsigned int)-1;
        *v14 = 0;
        v16 = sub_409900(&fd, (const char *)s);
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
          v8 = (char *)s + v4;
          if ( v7 > (char *)s + v4 )
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
            v11 = sub_409900(&fd, v7);
            *v10 = 47;
            if ( v11 )
              goto LABEL_18;
            v7 = &v10[strspn(v10 + 1, "/") + 1];
          }
          if ( v8 <= v7 || !(unsigned int)sub_409900(&fd, v7) )
          {
            v1 = fchdir(fd);
            if ( !v1 )
            {
              sub_4098C0(fd);
              return v1;
            }
          }
          goto LABEL_18;
        }
        if ( !(unsigned int)sub_409900(&fd, "/") )
        {
          v7 = (char *)s + v6;
          goto LABEL_7;
        }
      }
LABEL_18:
      v12 = *v2;
      sub_4098C0(fd);
      *v2 = v12;
      return (unsigned int)-1;
    }
  }
  return v1;
}

char *__fastcall sub_409BB0(char *a1, size_t a2)
{
  char *v3; // rbx
  __dev_t v4; // r15
  __ino_t v5; // r14
  DIR *v6; // rbp
  int v7; // er15
  int *v8; // r12
  int v9; // eax
  bool v10; // r13
  struct dirent *v11; // rax
  const char *v12; // rbx
  signed __int64 v13; // r13
  size_t v14; // r14
  char *v15; // rdx
  char *v16; // rax
  size_t v17; // rbx
  char *v18; // rax
  int v19; // ebx
  __dev_t v20; // [rsp+8h] [rbp-120h]
  size_t v21; // [rsp+8h] [rbp-120h]
  __dev_t v22; // [rsp+10h] [rbp-118h]
  char *ptr; // [rsp+18h] [rbp-110h]
  char *v24; // [rsp+20h] [rbp-108h]
  size_t size; // [rsp+28h] [rbp-100h]
  bool v26; // [rsp+3Fh] [rbp-E9h]
  char *src; // [rsp+40h] [rbp-E8h]
  char *srca; // [rsp+40h] [rbp-E8h]
  __dev_t v29; // [rsp+48h] [rbp-E0h]
  __ino_t v30; // [rsp+50h] [rbp-D8h]
  __ino_t v31; // [rsp+58h] [rbp-D0h]
  struct stat stat_buf; // [rsp+60h] [rbp-C8h]

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
    *--src = 47;
  v17 = v3 - src;
  memmove(ptr, src, v17);
  if ( !a2 )
    v24 = (char *)realloc(ptr, v17);
  v18 = v24;
  if ( !v24 )
    v18 = ptr;
  return v18;
}

__int64 __fastcall sub_40A080(__int64 a1, int *a2)
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

__int64 __fastcall sub_40A160(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8, __int64 a9)
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
  char **v38; // [rsp+0h] [rbp-88h]
  int v39; // [rsp+Ch] [rbp-7Ch]
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  _DWORD *v43; // [rsp+20h] [rbp-68h]
  char *s; // [rsp+30h] [rbp-58h]
  int v45; // [rsp+38h] [rbp-50h]
  char v46; // [rsp+3Fh] [rbp-49h]
  int v47; // [rsp+40h] [rbp-48h]
  int v48; // [rsp+44h] [rbp-44h]
  int v49; // [rsp+48h] [rbp-40h]

  v47 = a1;
  v9 = (const char *)*((_QWORD *)a7 + 4);
  s = a3;
  v38 = a4;
  v43 = a5;
  v10 = (char *)*((_QWORD *)a7 + 4);
  v39 = a6;
  v46 = *v9;
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
    if ( !v39 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(s, v46), result = 0xFFFFFFFFLL, !v18) )
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
  v17 = v38;
  do
  {
    if ( strncmp(v15, v9, v11) )
      goto LABEL_20;
    if ( v12 )
    {
      if ( (v39
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
        v33 = v38;
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
    result = 63LL;
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
      result = 63LL;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_33;
      if ( v21 >= v47 )
      {
        if ( a8 )
        {
          v36 = *a2;
          v37 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v37, v36);
        }
        a7[2] = *((_DWORD *)v12 + 6);
        result = 5 * (unsigned int)(*s != 58) + 58;
      }
      else
      {
        *a7 = v20 + 2;
        *((_QWORD *)a7 + 2) = a2[v21];
LABEL_33:
        if ( v43 )
          *v43 = v13;
        v23 = v12[2];
        result = *((unsigned int *)v12 + 6);
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

__int64 __fastcall sub_40A780(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
{
  int v8; // er13
  int v9; // eax
  int v10; // ebp
  __int64 *v11; // r12
  char *v12; // r15
  _BYTE *v13; // rdx
  char v14; // al
  char v15; // al
  int v16; // eax
  _BYTE *v17; // r14
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // er14
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
  char **v45; // [rsp+8h] [rbp-60h]
  _DWORD *v46; // [rsp+10h] [rbp-58h]
  char v47; // [rsp+1Ch] [rbp-4Ch]
  int v48; // [rsp+1Ch] [rbp-4Ch]
  int v49; // [rsp+1Ch] [rbp-4Ch]
  int v50; // [rsp+1Ch] [rbp-4Ch]
  _BYTE *v51; // [rsp+20h] [rbp-48h]
  __int64 v52; // [rsp+28h] [rbp-40h]

  v45 = a4;
  v46 = a5;
  v8 = a7[1];
  if ( a1 <= 0 )
    return (unsigned int)-1;
  v9 = *a7;
  v10 = a1;
  v11 = (__int64 *)a2;
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
  if ( !((v14 - 43) & 0xFD) )
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
        sub_40A080(a2, a7);
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
          v28 = (_BYTE *)v11[v27];
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
    v17 = (_BYTE *)v11[v16];
    if ( !strcmp((const char *)v11[v16], "--") )
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
        sub_40A080((__int64)v11, a7);
        v18 = a7[11];
      }
      a7[12] = a1;
      *a7 = a1;
      goto LABEL_41;
    }
    if ( *v17 == 45 )
    {
      v30 = v17[1];
      if ( v30 )
      {
        if ( v45 )
        {
          if ( v30 == 45 )
          {
            *((_QWORD *)a7 + 4) = v17 + 2;
            return (unsigned int)sub_40A160(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_40A160(a1, v11, v12, v45, v46, a6, a7, v8, (__int64)"-");
              if ( v21 != -1 )
                return v21;
              v17 = (_BYTE *)v11[*a7];
            }
          }
        }
        v13 = v17 + 1;
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
  v52 = (__int64)(v13 + 1);
  v47 = *v13;
  v22 = strchr(v12, v21);
  v23 = v52;
  if ( !v51[1] )
    ++*a7;
  if ( (unsigned __int8)(v47 - 58) > 1u && v22 )
  {
    v24 = v22[1];
    if ( *v22 == 87 && v45 && v24 == 59 )
    {
      if ( v51[1] )
      {
LABEL_68:
        *((_QWORD *)a7 + 4) = v23;
        *((_QWORD *)a7 + 2) = 0LL;
        return (unsigned int)sub_40A160(a1, v11, v12, v45, v46, 0, a7, v8, (__int64)"-W ");
      }
      v32 = *a7;
      if ( (_DWORD)v32 != a1 )
      {
        v23 = v11[v32];
        goto LABEL_68;
      }
      if ( v8 )
      {
        v43 = *v11;
        v44 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v44, v43);
      }
      a7[2] = v21;
      v21 = 5 * (*v12 != 58) + 58;
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
            v41 = *v11;
            v42 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v42, v41);
          }
          a7[2] = v21;
          v21 = 5 * (*v12 != 58) + 58;
        }
        else
        {
          v37 = v36 + 1;
          v38 = v11[v36];
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
      v39 = *v11;
      v40 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
      __fprintf_chk(stderr, 1LL, v40, v39);
    }
    a7[2] = v21;
    v21 = 63;
  }
  return v21;
}

__int64 __fastcall sub_40AD50(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_6175E0 = dword_61739C;
  dword_6175E4 = dword_617398;
  result = sub_40A780(a1, a2, a3, a4, a5, a6, &dword_6175E0, a7);
  dword_61739C = dword_6175E0;
  qword_617638 = qword_6175F0;
  dword_617394 = dword_6175E8;
  return result;
}

__int64 __fastcall sub_40ADB0(int a1, __int64 a2, char *a3)
{
  return sub_40AD50(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_40ADD0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_40AD50(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40ADF0(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40A780(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40AE10(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5)
{
  return sub_40AD50(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_40AE30(int a1, __int64 a2, char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40A780(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_40AE50(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40C6F0(0LL) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

_BYTE *__fastcall sub_40AED0(_BYTE *a1, __int16 a2, unsigned __int64 a3)
{
  _BYTE *result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  _BYTE *v6; // rdi

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
  v4 = ((((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 32) | ((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8);
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
    v5 = (__int64)(a1 + 1);
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
  const char *v1; // rbx
  size_t v2; // rax
  char *v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  char v6; // di
  unsigned __int64 v7; // rsi
  char v8; // r9
  char v9; // r10
  unsigned __int8 v10; // r11

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

void __fastcall sub_40B070(void *ptr)
{
  free(*(void **)ptr);
  free(*((void **)ptr + 1));
  free(*((void **)ptr + 2));
  if ( *((_BYTE *)ptr + 40) & 4 )
    free(*((void **)ptr + 3));
  free(ptr);
}

void *sub_40B0C0()
{
  FILE *v0; // rax
  FILE *v1; // rbp
  void **v2; // r12
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
  char *v28; // rdi
  void *v29; // rax
  char *v30; // rdi
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
  int v41; // er14
  int *v42; // r13
  _QWORD *v43; // rdi
  void *v44; // rbx
  int *v45; // rax
  char v46; // [rsp+1Fh] [rbp-79h]
  unsigned int v47; // [rsp+20h] [rbp-78h]
  unsigned int v48; // [rsp+24h] [rbp-74h]
  int v49; // [rsp+28h] [rbp-70h]
  int v50; // [rsp+2Ch] [rbp-6Ch]
  int v51; // [rsp+30h] [rbp-68h]
  int v52; // [rsp+34h] [rbp-64h]
  int v53; // [rsp+38h] [rbp-60h]
  int v54; // [rsp+3Ch] [rbp-5Ch]
  int v55; // [rsp+40h] [rbp-58h]
  int v56; // [rsp+44h] [rbp-54h]
  void *ptr; // [rsp+48h] [rbp-50h]
  char *lineptr; // [rsp+50h] [rbp-48h]
  size_t n; // [rsp+58h] [rbp-40h]

  v0 = fopen("/proc/self/mountinfo", "r");
  if ( v0 )
  {
    lineptr = 0LL;
    v1 = v0;
    v2 = &ptr;
    n = 0LL;
    while ( __getdelim(&lineptr, &n, 10, v1) != -1 )
    {
      if ( (sscanf(lineptr, "%*u %*u %u:%u %n%*s%n %n%*s%n%c", &v47, &v48, &v55, &v56, &v49, &v50, &v46) & 0xFFFFFFFB) == 3 )
      {
        v3 = (const char *)sub_40BD00(&lineptr[v50], " - ");
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
            sub_40AFE0(&v4[v53]);
            sub_40AFE0(&lineptr[v49]);
            sub_40AFE0(&lineptr[v55]);
            v6 = (char *)sub_409560(0x38uLL);
            v7 = sub_409790((void *)&v4[v53]);
            v8 = &lineptr[v49];
            *(_QWORD *)v6 = v7;
            v9 = sub_409790(v8);
            v10 = &lineptr[v55];
            *((_QWORD *)v6 + 1) = v9;
            v11 = sub_409790(v10);
            v12 = v51;
            *((_QWORD *)v6 + 2) = v11;
            v13 = (const char *)sub_409790((void *)&v4[v12]);
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
              && strcmp(v15, (const char *)&unk_4105FC)
              && strcmp(v15, "sysfs")
              && memcmp(v15, "devfs", 6uLL)
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
            *v2 = v6;
            v2 = (void **)(v6 + 48);
          }
        }
      }
    }
    free(lineptr);
    if ( v1->_flags & 0x20 )
    {
      v45 = __errno_location();
      v41 = *v45;
      v42 = v45;
      sub_40CED0(v1);
      *v42 = v41;
      goto LABEL_47;
    }
    if ( (unsigned int)sub_40CED0(v1) != -1 )
    {
LABEL_13:
      *v2 = 0LL;
      return ptr;
    }
  }
  else
  {
    v22 = setmntent("/etc/mtab", "r");
    v23 = v22;
    if ( !v22 )
      return 0LL;
    v2 = &ptr;
    for ( i = getmntent(v22); i; i = getmntent(v23) )
    {
      v25 = hasmntopt(i, "bind");
      v26 = (char *)sub_409560(0x38uLL);
      v27 = sub_409790(i->mnt_fsname);
      v28 = i->mnt_dir;
      *(_QWORD *)v26 = v27;
      v29 = sub_409790(v28);
      *((_QWORD *)v26 + 2) = 0LL;
      v30 = i->mnt_type;
      *((_QWORD *)v26 + 1) = v29;
      v31 = (const char *)sub_409790(v30);
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
                    if ( strcmp(v31, (const char *)&unk_4105FC) )
                    {
                      if ( strcmp(v31, "sysfs") )
                      {
                        if ( memcmp(v31, "devfs", 6uLL) )
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
      *v2 = v26;
      v2 = (void **)(v26 + 48);
    }
    if ( endmntent(v23) )
      goto LABEL_13;
  }
  v40 = __errno_location();
  v41 = *v40;
  v42 = v40;
LABEL_47:
  *v2 = 0LL;
  v43 = ptr;
  if ( ptr )
  {
    do
    {
      v44 = (void *)v43[6];
      sub_40B070(v43);
      ptr = v44;
      v43 = v44;
    }
    while ( v44 );
  }
  *v42 = v41;
  return 0LL;
}

unsigned __int64 __fastcall sub_40B880(__int64 a1, unsigned __int64 a2, __int64 *a3)
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
    result = v17;
  }
  return result;
}

__int64 __fastcall sub_40B9B0(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int8 *v4; // r12
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
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
  __int64 v20; // rax
  __int64 v22; // r10
  unsigned __int64 v23; // r11
  __int64 v24; // r14
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // [rsp+8h] [rbp-880h]
  unsigned __int64 v29; // [rsp+8h] [rbp-880h]
  __int64 v30; // [rsp+10h] [rbp-878h]
  unsigned __int64 v31; // [rsp+10h] [rbp-878h]
  unsigned __int64 v32; // [rsp+18h] [rbp-870h]
  unsigned __int64 v33; // [rsp+20h] [rbp-868h]
  __int64 v34; // [rsp+20h] [rbp-868h]
  unsigned __int64 v35; // [rsp+48h] [rbp-840h]
  __int64 v36[256]; // [rsp+50h] [rbp-838h]
  char v37; // [rsp+850h] [rbp-38h]

  v4 = (unsigned __int8 *)a3;
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
    v7 = sub_40B880(a3, a4, (__int64 *)&v35);
    v33 = v35;
  }
  v8 = (char *)v36;
  do
  {
    *(_QWORD *)v8 = v6;
    v8 += 8;
  }
  while ( &v37 != v8 );
  v9 = (char *)&v4[v33];
  if ( v6 )
  {
    v10 = v4;
    do
    {
      v11 = *v10;
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
      v25 = v36[*(unsigned __int8 *)(a1 + v29 - 1)];
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
      v18 = v36[*(unsigned __int8 *)(a1 + v28 - 1)];
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

__int64 __fastcall sub_40BD00(__int64 a1, char *a2)
{
  char v2; // al
  char v3; // r9
  char *v4; // rbx
  char *v5; // rdx
  char v6; // cl
  char v7; // r8
  bool v8; // al
  char *v9; // r12
  unsigned __int64 v10; // rbp
  char *v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v14; // rax
  size_t v15; // r15
  int v16; // eax
  unsigned __int64 v17; // r8
  size_t v18; // r13
  __int64 v19; // r14
  _BYTE *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  size_t v23; // rax
  __int64 v24; // r14
  unsigned __int64 v25; // r13
  _BYTE *v26; // rax
  char *v27; // rdx
  size_t v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+8h] [rbp-70h]
  unsigned __int64 v31; // [rsp+8h] [rbp-70h]
  unsigned __int64 v32; // [rsp+8h] [rbp-70h]
  __int64 v33; // [rsp+18h] [rbp-60h]
  __int64 v34; // [rsp+18h] [rbp-60h]
  __int64 v35; // [rsp+38h] [rbp-40h]

  v2 = *(_BYTE *)a1;
  v3 = *a2;
  if ( !*(_BYTE *)a1 )
  {
    v9 = 0LL;
    if ( !v3 )
      v9 = (char *)a1;
    return (__int64)v9;
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
    return (__int64)v9;
LABEL_7:
  v9 = (char *)a1;
  if ( v7 )
    return (__int64)v9;
  v10 = v4 - a2;
  v11 = strchr((const char *)(a1 + 1), v3);
  v9 = v11;
  if ( !v11 || v10 == 1 )
    return (__int64)v9;
  v12 = a1 + v10 - (_QWORD)v11;
  if ( a1 + v10 < (unsigned __int64)v11 )
    v12 = 1LL;
  if ( v10 > 0x1F )
    return sub_40B9B0((__int64)v11, v12, (__int64)a2, v10);
  if ( v10 <= 2 )
  {
    v35 = 1LL;
    v15 = v10 - 1;
    v33 = 1LL;
  }
  else
  {
    v30 = v12;
    v14 = sub_40B880((__int64)a2, v10, &v35);
    v12 = v30;
    v15 = v14;
    v33 = v35;
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
      v20 = sub_40AED0(&v9[v17], 0, v10 + v19 - v17);
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
  v35 = v23 + 1;
  while ( 1 )
  {
    v25 = v10 + v24;
    v26 = sub_40AED0(&v9[v17], 0, v10 + v24 - v17);
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
  while ( --v29 != -1 )
  {
    if ( a2[v29] != v27[v29] )
      goto LABEL_57;
  }
  return (__int64)v27;
}

__int64 __fastcall sub_40C0A0(__int64 a1)
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
    v2 = 1;
  }
  return v2;
}

void __fastcall sub_40C0F0(_QWORD *a1)
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

__int64 __fastcall sub_40C120(_QWORD *a1)
{
  int *v1; // rbx
  int v2; // er13
  unsigned int v3; // ebp

  v1 = __errno_location();
  v2 = *v1;
  v3 = sub_40C0A0((__int64)a1);
  if ( !(_BYTE)v3 )
    v2 = *v1;
  sub_40C0F0(a1);
  *v1 = v2;
  return v3;
}

_QWORD *__fastcall sub_40C170(void *src)
{
  void *v1; // r12
  size_t v2; // rax
  __int64 v3; // rdi
  size_t v4; // rbp
  char *v5; // rax
  _BYTE *v6; // rbx
  _QWORD *result; // rax

  if ( src )
  {
    v1 = src;
    v2 = strlen((const char *)src);
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
      memcpy(v5 + 9, v1, v4);
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

__int64 __fastcall sub_40C200(__int64 *a1, unsigned __int64 a2)
{
  char *v2; // r12
  __int64 *v3; // rbp
  __int64 result; // rax
  char *v5; // rbx
  __int64 v6; // r14
  __int64 *v7; // rax
  size_t v8; // r15
  char *v9; // rax
  _QWORD *v10; // rax

  v2 = *(char **)(a2 + 48);
  if ( !v2 )
    return 1LL;
  v3 = a1;
  if ( a2 > (unsigned __int64)v2 || (result = 1LL, (unsigned __int64)v2 >= a2 + 56) )
  {
    v5 = (char *)a1 + 9;
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
          v10 = sub_40C170(v2);
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

__int64 __fastcall sub_40C380(__int64 a1)
{
  char *v1; // rax
  char *v2; // rbp
  _QWORD *v3; // rbx
  int *v5; // rbp
  int v6; // er12

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
  if ( !v3 || (unsigned __int8)sub_40C0A0(a1) )
    return (__int64)v3;
  v5 = __errno_location();
  v6 = *v5;
  if ( v3 != (_QWORD *)1 )
    sub_40C0F0(v3);
  *v5 = v6;
  return 0LL;
}

struct tm *__fastcall sub_40C450(__int64 *a1, const time_t *a2, struct tm *a3)
{
  struct tm *v3; // rbx
  _QWORD *v4; // r13

  if ( !a1 )
    return gmtime_r(a2, a3);
  v3 = a3;
  v4 = (_QWORD *)sub_40C380((__int64)a1);
  if ( v4 )
  {
    if ( localtime_r(a2, v3) && (unsigned __int8)sub_40C200(a1, (unsigned __int64)v3) )
    {
      if ( v4 == (_QWORD *)1 || (unsigned __int8)sub_40C120(v4) )
        return v3;
    }
    else if ( v4 != (_QWORD *)1 )
    {
      sub_40C120(v4);
    }
  }
  return 0LL;
}

time_t __fastcall sub_40C500(__int64 *a1, _DWORD *a2)
{
  _QWORD *v2; // r12
  time_t result; // rax
  int v4; // eax
  time_t timer; // [rsp+8h] [rbp-60h]
  struct tm tp; // [rsp+10h] [rbp-58h]

  if ( !a1 )
    return sub_40C620(a2);
  v2 = (_QWORD *)sub_40C380((__int64)a1);
  if ( !v2 )
    goto LABEL_20;
  timer = sub_40D6B0(a2);
  if ( timer != -1
    || localtime_r(&timer, &tp)
    && ((v4 = a2[8], (v4 == 0) == (tp.tm_isdst == 0)) || v4 < 0 || tp.tm_isdst < 0)
    && !(tp.tm_sec ^ *a2 | tp.tm_min ^ a2[1] | tp.tm_hour ^ a2[2] | tp.tm_mday ^ a2[3] | tp.tm_year ^ a2[5] | tp.tm_mon ^ a2[4]) )
  {
    if ( !(unsigned __int8)sub_40C200(a1, (unsigned __int64)a2) )
      timer = -1LL;
  }
  if ( v2 == (_QWORD *)1 || (unsigned __int8)sub_40C120(v2) )
    result = timer;
  else
LABEL_20:
    result = -1LL;
  return result;
}

__int64 __fastcall sub_40C620(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 0;
  return sub_40D270(a1, gmtime_r, &unk_617618);
}

__int64 __fastcall sub_40C640(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

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

__int64 __fastcall sub_40C6A0(const char *a1, char a2, unsigned int a3)
{
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v6; // [rsp+30h] [rbp-28h]

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = v6;
  v4 = open(a1, a2, v3);
  return sub_40CCC0(v4);
}

bool __fastcall sub_40C6F0(int a1)
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

const char *sub_40C750()
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
                sub_40CED0(v60);
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
            sub_40CED0(v39);
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

__int64 __fastcall sub_40CCC0(int fd)
{
  __int64 result; // rax
  unsigned int v2; // er12
  int *v3; // rax
  int v4; // er13
  int *v5; // rbp

  if ( (unsigned int)fd > 2 )
    return (unsigned int)fd;
  v2 = sub_40D730();
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  close(fd);
  result = v2;
  *v5 = v4;
  return result;
}

_BYTE *__fastcall sub_40CD10(__int64 a1, __m128i *a2)
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
    v10 = sub_409560(v5 + 1);
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
    v11 = sub_409560(1uLL);
    v10 = v11;
  }
  *v11 = 0;
  return v10;
}

_BYTE *__fastcall sub_40CE40(_BYTE *a1, __m128i *a2)
{
  __int64 v2; // rax
  char v3; // cl
  __int64 v5; // [rsp+8h] [rbp-10h]

  if ( !*a1 )
  {
    v2 = 0LL;
    return sub_40CD10(v2, a2);
  }
  if ( *a1 == 37 && a1[1] == 115 )
  {
    v2 = 0LL;
    do
    {
      v3 = a1[2 * ++v2];
      if ( !v3 )
        return sub_40CD10(v2, a2);
    }
    while ( v3 == 37 && a1[2 * v2 + 1] == 115 );
  }
  if ( (int)sub_40D6D0(&v5, a1, a2) >= 0 )
    return (_BYTE *)v5;
  if ( *__errno_location() == 12 )
    sub_4097B0();
  return 0LL;
}

int __fastcall sub_40CED0(FILE *stream)
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
  if ( !(unsigned int)sub_40CF50(stream) )
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

int __fastcall sub_40CF50(FILE *stream)
{
  if ( !stream || !__freading(stream) || !(stream->_flags & 0x100) )
    return fflush(stream);
  sub_40CF90(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_40CF90(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_40CFF0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // er10
  int v11; // er12

  v10 = (unsigned __int64)(a1 >> 2) + 475 - ((a1 & 3) == 0);
  v11 = (a6 >> 2) + 475 - ((a6 & 3) == 0);
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

__int64 __fastcall sub_40D110(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6, int *a7)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  bool v9; // of
  __int64 result; // rax

  v7 = a6;
  if ( !a7
    || (v8 = sub_40CFF0(a1, a2, a3, a4, a5, a7[5], a7[7], a7[2], a7[1], *a7),
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

__int64 __fastcall sub_40D1B0(__int64 (__fastcall *a1)(__int64 *, __int64), __int64 *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v9 = *a2;
  result = a1(&v9, a3);
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
        v9 = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        result = a1(&v9, v3);
        if ( !result )
        {
          v5 = v8;
          v8 = v6;
        }
        v6 = v8;
      }
      if ( !result && v6 )
      {
        v9 = v6;
        result = a1(&v9, v3);
      }
    }
  }
  return result;
}

__int64 __fastcall sub_40D270(int *a1, __int64 (__fastcall *a2)(__int64 *, __int64), _QWORD *a3)
{
  int *v3; // r14
  __int64 v4; // rsi
  int v5; // eax
  int v6; // edi
  _BOOL4 v7; // edx
  __int64 v8; // rbx
  int v9; // er12
  int v10; // ebp
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // r13
  int v14; // er12
  __int64 v15; // r14
  int *v16; // rax
  __int64 v17; // r15
  __int64 result; // rax
  bool v19; // dl
  __m128i *v20; // r14
  int v21; // esi
  __int64 v22; // rdx
  bool v23; // of
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __int64 v27; // rdx
  int i; // er13
  int v29; // er12
  int v30; // er15
  int v31; // [rsp+Ch] [rbp-10Ch]
  __int64 (__fastcall *v32)(__int64 *, __int64); // [rsp+10h] [rbp-108h]
  int v33; // [rsp+18h] [rbp-100h]
  int v34; // [rsp+1Ch] [rbp-FCh]
  int v35; // [rsp+28h] [rbp-F0h]
  _QWORD *v36; // [rsp+30h] [rbp-E8h]
  __int64 v37; // [rsp+38h] [rbp-E0h]
  int v38; // [rsp+40h] [rbp-D8h]
  int v39; // [rsp+44h] [rbp-D4h]
  __m128i *v40; // [rsp+48h] [rbp-D0h]
  __int64 v41; // [rsp+50h] [rbp-C8h]
  __int64 v42; // [rsp+58h] [rbp-C0h]
  __int128 v43; // [rsp+60h] [rbp-B8h]
  __int128 v44; // [rsp+70h] [rbp-A8h]
  __int128 v45; // [rsp+80h] [rbp-98h]
  __int64 v46; // [rsp+90h] [rbp-88h]
  __int64 v47; // [rsp+A0h] [rbp-78h]
  int v48; // [rsp+C0h] [rbp-58h]

  v3 = a1;
  v32 = a2;
  v4 = a1[3];
  v38 = *a1;
  v36 = a3;
  v31 = a1[1];
  v5 = a1[2];
  v6 = a1[4];
  v33 = v5;
  v35 = v3[8];
  v7 = 0;
  v8 = v3[5] + (__int64)(int)(v6 / 12 - ((unsigned int)(v6 % 12) >> 31));
  if ( !(v8 & 3) )
  {
    v7 = 1;
    if ( v8 == 100 * (v8 / 100) )
      v7 = ((v8 / 100) & 3) == 1;
  }
  v9 = 59;
  v10 = 6;
  v11 = (unsigned __int16)word_413900[13LL * v7 + (((v6 % 12) >> 31) & 0xC) + v6 % 12] - 1 + v4;
  if ( v38 <= 59 )
    v9 = v38;
  v12 = 0;
  if ( v9 >= 0 )
    v12 = v9;
  v34 = v12;
  v39 = -(int)*v36;
  v13 = sub_40CFF0(v8, v11, v33, v31, v12, 70, 0, 0, 0, v39);
  v37 = v13;
  v41 = v13;
  v40 = (__m128i *)v3;
  v14 = 0;
  v15 = v13;
  while ( 1 )
  {
    v16 = (int *)sub_40D1B0(v32, &v41, (__int64)&v43);
    v17 = v41;
    result = sub_40D110(v8, v11, v33, v31, v34, v41, v16);
    if ( v17 == result )
      break;
    if ( v17 == v13 && v17 != v15 )
    {
      if ( (int)v45 < 0 )
        goto LABEL_17;
      v19 = (_DWORD)v45 != 0;
      if ( v35 < 0 )
      {
        if ( v19 >= v14 )
        {
LABEL_17:
          v20 = v40;
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
    v14 = v45 != 0;
  }
  v20 = v40;
  if ( (v35 == 0) != ((_DWORD)v45 == 0) && v35 >= 0 && (int)v45 >= 0 )
  {
    for ( i = 601200; i != 269337600; i += 601200 )
    {
      v29 = 2;
      v30 = -i;
      v42 = result + -i;
      if ( !__OFADD__(result, -i) )
      {
LABEL_35:
        sub_40D1B0(v32, &v42, (__int64)&v47);
        if ( (v35 == 0) == (v48 == 0) || v48 < 0 )
        {
          v41 = sub_40D110(v8, v11, v33, v31, v34, v42, (int *)&v47);
          sub_40D1B0(v32, &v41, (__int64)&v43);
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
          goto LABEL_35;
      }
    }
  }
LABEL_18:
  v21 = v43;
  *v36 = result - (v37 + v39);
  if ( v21 == v38 )
    goto LABEL_22;
  v22 = ((v38 <= 0) & (unsigned __int8)(v21 == 60)) - (__int64)v34 + v38;
  v23 = __OFADD__(v22, result);
  v24 = v22 + result;
  v41 = v24;
  if ( !v23 )
  {
    v47 = v24;
    if ( v32(&v47, (__int64)&v43) )
    {
      result = v41;
LABEL_22:
      v25 = _mm_load_si128((const __m128i *)&v44);
      v26 = _mm_load_si128((const __m128i *)&v45);
      v27 = v46;
      *v20 = _mm_load_si128((const __m128i *)&v43);
      v20[1] = v25;
      v20[2] = v26;
      v20[3].m128i_i64[0] = v27;
      return result;
    }
  }
  return -1LL;
}

__int64 __fastcall sub_40D6B0(int *a1)
{
  tzset();
  return sub_40D270(a1, (__int64 (__fastcall *)(__int64 *, __int64))localtime_r, &unk_617628);
}

__int64 __fastcall sub_40D6D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *v3; // rax
  unsigned int v4; // edx
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v3 = (void *)sub_40D880(0LL, &v6, a2, a3);
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

__int64 __fastcall sub_40D730(char a1)
{
  return sub_40D740(a1);
}

__int64 __fastcall sub_40D740(char a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // rax
  int v7; // edi
  int v8; // er12
  int *v9; // rbp

  if ( a2 == 1030 )
  {
    if ( dword_617630 < 0 )
    {
      v3 = sub_40D740(a1);
      if ( v3 >= 0 && dword_617630 == -1 )
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
        dword_617630 = 1;
      }
      else
      {
        v3 = sub_40D740(a1);
        if ( v3 >= 0 )
        {
          dword_617630 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v3;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

char *__fastcall sub_40D880(void *a1, size_t *a2, char *a3, __int64 a4, double a5)
{
  char *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  _BYTE *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  char *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  char *v17; // rcx
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
  _BYTE *v33; // rdi
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
  char *result; // rax
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // er11
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  char *v71; // rdi
  int *v72; // r9
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  bool v76; // cf
  unsigned __int64 v77; // rax
  bool v78; // bl
  char *v79; // rax
  unsigned __int64 v80; // r9
  int v81; // ebx
  __int64 v82; // rax
  char *v83; // rdi
  unsigned __int128 v84; // fst7
  __int64 v85; // rax
  char *v86; // rdi
  unsigned __int64 v87; // rax
  void *v88; // rax
  char *v89; // rax
  char *v90; // rcx
  int v91; // er8
  __int16 v92; // ax
  unsigned __int64 v93; // r15
  char *v94; // rax
  char *v95; // rax
  char *v96; // rax
  char v97; // al
  unsigned __int64 v98; // r9
  size_t v99; // r8
  unsigned __int64 v100; // r10
  unsigned __int64 v101; // rdi
  __int64 v102; // rax
  unsigned __int64 v103; // r10
  unsigned __int64 v104; // rax
  char *v105; // rax
  __int64 v106; // rsi
  char v107; // al
  size_t v108; // r15
  size_t v109; // r14
  bool v110; // r13
  char *v111; // rax
  char *v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // r10
  char *v115; // rax
  char *v116; // rax
  char *v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rdx
  char v120; // al
  __int64 v121; // rdx
  unsigned __int64 v122; // rax
  char *v123; // rax
  __int64 v124; // rdx
  char v125; // al
  unsigned __int64 v126; // rax
  __int64 v127; // rsi
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // rax
  char *v131; // rsi
  char *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rsi
  unsigned __int64 v135; // rax
  char v136; // al
  __int64 v137; // rsi
  char v138; // al
  char *v139; // rax
  __int64 v140; // rdx
  char v141; // al
  __int64 v142; // rax
  char *v143; // rax
  char *v144; // rax
  void *v145; // rdx
  char v146; // al
  char *v147; // rax
  char *v148; // rax
  char v149; // al
  __int64 v150; // [rsp-8h] [rbp-718h]
  int *v151; // [rsp+8h] [rbp-708h]
  int *v152; // [rsp+10h] [rbp-700h]
  int *v153; // [rsp+18h] [rbp-6F8h]
  __int64 v154; // [rsp+20h] [rbp-6F0h]
  unsigned __int64 v155; // [rsp+28h] [rbp-6E8h]
  char *v156; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v158; // [rsp+40h] [rbp-6D0h]
  void *v159; // [rsp+48h] [rbp-6C8h]
  char *v160; // [rsp+50h] [rbp-6C0h]
  __int64 v161; // [rsp+58h] [rbp-6B8h]
  char *v162; // [rsp+60h] [rbp-6B0h]
  _BYTE *v163; // [rsp+68h] [rbp-6A8h]
  long double v164; // [rsp+70h] [rbp-6A0h]
  void *v165; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v167; // [rsp+94h] [rbp-67Ch]
  unsigned int v168; // [rsp+98h] [rbp-678h]
  unsigned int v169; // [rsp+9Ch] [rbp-674h]
  char v170; // [rsp+A0h] [rbp-670h]
  void *v171; // [rsp+A8h] [rbp-668h]
  __int64 v172; // [rsp+B0h] [rbp-660h]
  __int64 v173; // [rsp+190h] [rbp-580h]
  void *v174; // [rsp+198h] [rbp-578h]
  __int64 v175; // [rsp+1A0h] [rbp-570h]
  __int64 v176; // [rsp+1A8h] [rbp-568h]
  __int64 v177; // [rsp+1B0h] [rbp-560h]
  char v178; // [rsp+420h] [rbp-2F0h]

  v5 = a3;
  v6 = a4;
  src = a1;
  v158 = a2;
  if ( (int)sub_40F5C0(a3, &v173, &v170) < 0 )
    return 0LL;
  if ( (int)sub_40F3A0(v6, &v170) >= 0 )
  {
    v7 = v175 + 7;
    if ( (unsigned __int64)(v175 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v176, v7);
    v8 = v176 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v163 = (_BYTE *)(((unsigned __int64)&v155 + 7) & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = malloc(v9);
      v163 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v158;
    v12 = (char *)v174;
    v13 = v5;
    v14 = (char *)src;
    v161 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v174;
    if ( *(char **)v174 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (char *)(v16 - v13);
    v18 = (unsigned __int64)&v17[v15];
    v19 = (size_t)&v17[v15];
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
          v162 = v13;
          LOBYTE(v164) = v20;
          v165 = v17;
          v21 = (char *)malloc(v11);
          v17 = (char *)v165;
          v13 = v162;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v164) )
          {
            *(_QWORD *)&v164 = v162;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = (char *)v165;
            v13 = *(char **)&v164;
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
          *(_QWORD *)&v164 = v13;
          v165 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = (char *)v165;
          v13 = *(char **)&v164;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)&v17[v15];
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v173 != v161 )
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
              goto LABEL_239;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_239:
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
            *(_QWORD *)&v164 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v165) = v14 == src;
          v96 = (char *)malloc(v11);
          if ( !v96 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v165 )
            v14 = (char *)memcpy(v96, v14, v19);
          else
            v14 = v96;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v171;
      v28 = (long double *)((char *)v171 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v165) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v165 == 12 )
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
                v165 = (void *)-1LL;
                while ( 1 )
                {
                  v127 = (__int64)(v66 + 1);
                  v128 = -1LL;
                  v129 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v128 = 10 * v50;
                  v76 = __CFADD__(v128, v129);
                  v50 = v128 + v129;
                  v66 = (char *)v127;
                  if ( v76 )
                  {
                    if ( v67 == (char *)v127 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v165;
                      goto LABEL_82;
                    }
                    while ( *(++v66 - 1) != 48 )
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
              v70 = (char *)v171 + 32 * v69;
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
                v130 = (__int64)(v51 + 1);
                v55 = 0LL;
                if ( v52 != (char *)v130 )
                {
                  v131 = (char *)v130;
                  while ( 1 )
                  {
                    v132 = v131 + 1;
                    v133 = *v131 - 48;
                    v134 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v134 = 10 * v55;
                    v76 = __CFADD__(v134, v133);
                    v135 = v134 + v133;
                    v131 = v132;
                    v55 = v135;
                    if ( v76 )
                    {
                      if ( v52 == v132 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v131 = v132 + 1;
                        if ( *v132 == 48 )
                          break;
                        if ( v52 == v131 )
                          goto LABEL_88;
                        ++v132;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v131 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_376;
              }
              v54 = (char *)v171 + 32 * v53;
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
                  v87 = v56;
                  if ( v50 >= v56 )
                    v87 = v50;
                  v76 = __CFADD__(v87, 1LL);
                  v88 = (void *)(v87 + 1);
                  v165 = v88;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v88 <= 0x2BC )
                  {
                    v90 = &v178;
                  }
                  else
                  {
                    v159 = (void *)v50;
                    v160 = (char *)v55;
                    LODWORD(v162) = v68;
                    v164 = _FST7;
                    if ( v88 == (void *)-1LL )
                      goto LABEL_88;
                    v89 = (char *)malloc((size_t)v88);
                    v68 = (int)v162;
                    _FST7 = v164;
                    v90 = v89;
                    v55 = (unsigned __int64)v160;
                    v50 = (unsigned __int64)v159;
                    if ( !v89 )
                      goto LABEL_88;
                  }
                  v91 = (unsigned __int16)v168;
                  LOBYTE(v92) = v168;
                  HIBYTE(v92) = BYTE1(v168) | 3;
                  LOWORD(v168) = v92;
                  __asm (" fxam ");
                  if ( v62 & 2 )
                  {
                    *v90 = 45;
                    _FST7 = -_FST7;
                    v93 = (unsigned __int64)(v90 + 1);
                  }
                  else if ( v68 & 4 )
                  {
                    v93 = (unsigned __int64)(v90 + 1);
                    *v90 = 43;
                  }
                  else
                  {
                    v93 = (unsigned __int64)v90;
                    if ( v68 & 8 )
                    {
                      v93 = (unsigned __int64)(v90 + 1);
                      *v90 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v98 = v93 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      *(_BYTE *)(v93 + 2) = 102;
                      *(_WORD *)v93 = 28265;
                    }
                    else
                    {
                      *(_BYTE *)(v93 + 2) = 70;
                      *(_WORD *)v93 = 20041;
                    }
                    v93 = 0LL;
                    goto LABEL_264;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v97 = v12[72] & 0xDF;
                  switch ( v97 )
                  {
                    case 70:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || v55 )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v123 = nl_langinfo(0x10000);
                        v124 = (__int64)v160;
                        v98 = *(_QWORD *)&v164;
                        v125 = *v123;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v125 )
                          v125 = 46;
                        *(_BYTE *)(v93 + 1) = v125;
                        if ( v124 )
                        {
                          v126 = v98;
                          do
                            *(_BYTE *)(++v126 - 1) = 48;
                          while ( v126 != v93 + v124 + 2 );
                          v98 += v124;
                        }
                        goto LABEL_264;
                      }
                      goto LABEL_263;
                    case 69:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || (v106 = v93 + 1, v55) )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v139 = nl_langinfo(0x10000);
                        v140 = (__int64)v160;
                        v106 = *(_QWORD *)&v164;
                        v141 = *v139;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v141 )
                          v141 = 46;
                        *(_BYTE *)(v93 + 1) = v141;
                        if ( v140 )
                        {
                          v142 = v106;
                          do
                            *(_BYTE *)(++v142 - 1) = 48;
                          while ( v142 != v93 + v140 + 2 );
                          v106 += v140;
                        }
                      }
                      v107 = v12[72];
                      v98 = v106 + 4;
                      *(_BYTE *)(v106 + 3) = 48;
                      *(_BYTE *)v106 = v107;
                      *(_WORD *)(v106 + 1) = 12331;
                      goto LABEL_264;
                    case 71:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v154) = v91;
                          v155 = v50;
                          v156 = (char *)(v93 + 2);
                          v159 = v90;
                          LODWORD(v160) = v68;
                          v162 = (char *)v55;
                          *(_QWORD *)&v164 = v55 - 1;
                          v117 = nl_langinfo(0x10000);
                          v118 = *(_QWORD *)&v164;
                          v119 = (__int64)v162;
                          v120 = *v117;
                          LOBYTE(v68) = (_BYTE)v160;
                          v90 = (char *)v159;
                          v98 = (unsigned __int64)v156;
                          v50 = v155;
                          LOWORD(v91) = WORD2(v154);
                          if ( !v120 )
                            v120 = 46;
                          *(_BYTE *)(v93 + 1) = v120;
                          if ( v118 )
                          {
                            v121 = v93 + v119 + 1;
                            v122 = v98;
                            do
                              *(_BYTE *)(++v122 - 1) = 48;
                            while ( v122 != v121 );
                            v98 += v118;
                          }
                        }
                        else
                        {
                          LODWORD(v156) = v91;
                          v159 = (void *)v50;
                          v160 = (char *)(v93 + 2);
                          v162 = v90;
                          LODWORD(v164) = v68;
                          v148 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v164);
                          v90 = v162;
                          v149 = *v148;
                          v98 = (unsigned __int64)v160;
                          v50 = (unsigned __int64)v159;
                          LOWORD(v91) = (_WORD)v156;
                          if ( !v149 )
                            v149 = 46;
                          *(_BYTE *)(v93 + 1) = v149;
                        }
                        goto LABEL_264;
                      }
LABEL_263:
                      v98 = v93 + 1;
                      goto LABEL_264;
                  }
                  if ( v97 != 65 )
                    goto LABEL_200;
                  *(_BYTE *)v93 = 48;
                  *(_QWORD *)&v164 = v93 + 2;
                  v136 = v12[72];
                  *(_BYTE *)(v93 + 2) = 48;
                  *(_BYTE *)(v93 + 1) = v136 + 23;
                  if ( v68 & 0x10 || (v137 = v93 + 3, v55) )
                  {
                    HIDWORD(v154) = v91;
                    v155 = v50;
                    v156 = v90;
                    v159 = (void *)v55;
                    LODWORD(v160) = v68;
                    v162 = (char *)(v93 + 4);
                    v144 = nl_langinfo(0x10000);
                    v145 = v159;
                    v137 = (__int64)v162;
                    v146 = *v144;
                    LOBYTE(v68) = (_BYTE)v160;
                    v90 = v156;
                    v50 = v155;
                    LOWORD(v91) = WORD2(v154);
                    if ( !v146 )
                      v146 = 46;
                    *(_BYTE *)(v93 + 3) = v146;
                    if ( v145 )
                    {
                      v147 = (char *)v137;
                      do
                        *(++v147 - 1) = 48;
                      while ( v147 != (char *)v145 + v93 + 4 );
                      v137 += (__int64)v145;
                    }
                  }
                  v138 = v12[72];
                  v98 = v137 + 3;
                  *(_WORD *)(v137 + 1) = 12331;
                  v93 = *(_QWORD *)&v164;
                  *(_BYTE *)v137 = v138 + 15;
LABEL_264:
                  LOWORD(v168) = v91;
                  v99 = v98 - (_QWORD)v90;
                  if ( v50 > v98 - (unsigned __int64)v90 )
                  {
                    v100 = v50 - v99;
                    v101 = v98 + v100;
                    v99 = v98 + v100 - (_QWORD)v90;
                    if ( v68 & 2 )
                    {
                      if ( v100 )
                      {
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v101 != v98 );
                      }
                    }
                    else if ( v68 & 0x20 && v93 )
                    {
                      if ( v93 >= v98 )
                      {
                        v93 = v98;
                      }
                      else
                      {
                        v102 = -1LL;
                        do
                        {
                          *(_BYTE *)(v101 + v102) = *(_BYTE *)(v98 + v102);
                          --v102;
                        }
                        while ( v102 != v93 - 1 - v98 );
                      }
                      if ( v100 )
                      {
                        v103 = v93 + v100;
                        do
                          *(_BYTE *)(++v93 - 1) = 48;
                        while ( v93 != v103 );
                      }
                    }
                    else
                    {
                      v113 = -1LL;
                      if ( (unsigned __int64)v90 < v98 )
                      {
                        do
                        {
                          *(_BYTE *)(v101 + v113) = *(_BYTE *)(v98 + v113);
                          --v113;
                        }
                        while ( &v90[-v98 - 1] != (char *)v113 );
                        v98 = (unsigned __int64)v90;
                      }
                      if ( v100 )
                      {
                        v114 = v98 + v100;
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v98 != v114 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v165 <= v99 )
                    goto LABEL_200;
                  v104 = v99 + v19;
                  v15 = v99 + v19;
                  if ( v11 - v19 <= v99 )
                  {
                    if ( __CFADD__(v99, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v104 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v104 )
                          goto LABEL_374;
                      }
                      else
                      {
                        if ( v104 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_281;
                        }
LABEL_374:
                        if ( v104 == -1LL )
                          goto LABEL_88;
                        v11 = v99 + v19;
                      }
LABEL_281:
                      if ( v14 && v14 != src )
                      {
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v105 = (char *)realloc(v14, v11);
                        if ( !v105 )
                          goto LABEL_88;
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        v14 = v105;
                      }
                      else
                      {
                        LOBYTE(v162) = v14 == src;
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v115 = (char *)malloc(v11);
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        if ( !v115 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v162 )
                        {
                          v116 = (char *)memcpy(v115, v14, v19);
                          v90 = (char *)v165;
                          v99 = *(_QWORD *)&v164;
                          v14 = v116;
                        }
                        else
                        {
                          v14 = v115;
                        }
                      }
                    }
                  }
                  v165 = v90;
                  memcpy(&v14[v19], v90, v99);
                  if ( v165 != &v178 )
                    free(v165);
                  goto LABEL_110;
                }
LABEL_376:
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
        v32 = v163 + 1;
        *v163 = 37;
        if ( v31 & 1 )
        {
          v33 = v163;
          v163[1] = 39;
          v32 = v33 + 2;
        }
        if ( v31 & 2 )
          *v32++ = 45;
        if ( v31 & 4 )
          *v32++ = 43;
        if ( v31 & 8 )
          *v32++ = 32;
        if ( v31 & 0x10 )
          *v32++ = 35;
        if ( v31 & 0x40 )
          *v32++ = 73;
        if ( v31 & 0x20 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        if ( (unsigned int)v165 <= 0x10 )
        {
          v38 = 1LL << (char)v165;
          if ( (1LL << (char)v165) & 0x14180 )
            goto LABEL_125;
          if ( v38 & 0x1000 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( !(v38 & 0x600) )
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
            LODWORD(v162) = 1;
            v168 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v162) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v162;
          *(&v168 + (unsigned int)v162) = *((_DWORD *)v43 + 4);
          LODWORD(v162) = v44 + 1;
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
              *(_QWORD *)&v164 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v174 != &v177 )
                    free(v174);
                  if ( v171 != &v172 )
                    free(v171);
                  v14 = 0LL;
                  **(_DWORD **)&v164 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v164 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v164) = v14 == src;
            v95 = (char *)malloc(v11);
            v46 = v95;
            if ( !v95 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v164) )
              v46 = (char *)memcpy(v95, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v160 = v46;
            v47 = __errno_location();
            v48 = v160;
            v160 = v32;
            *(_QWORD *)&v164 = v47;
            LODWORD(v156) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v167 = -1;
              **(_DWORD **)&v164 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (_DWORD)v165 )
              {
                case 1:
                  v80 = (unsigned int)*((char *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v80 = *((unsigned __int8 *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v80 = (unsigned int)*((__int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v80 = *((unsigned __int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 0xD:
                case 0xE:
                  v80 = *((unsigned int *)v171 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v152 = &v167;
                      goto LABEL_153;
                    }
                    v151 = (int *)v80;
                    goto LABEL_210;
                  }
                  v153 = &v167;
                  v152 = (int *)v80;
                  break;
                case 7:
                case 8:
                case 9:
                case 0xA:
                case 0xF:
                case 0x10:
                case 0x11:
                  v71 = &v48[v19];
                  v72 = (int *)*((_QWORD *)v171 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v72, a5, &v167, v153);
LABEL_131:
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v151 = v72;
LABEL_210:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v168, a5, v169, v151);
LABEL_211:
                    v48 = (char *)v159;
LABEL_132:
                    v74 = v167;
                    if ( v167 < 0 )
                    {
LABEL_154:
                      if ( v160[1] )
                      {
                        v160[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v81 = **(_DWORD **)&v164;
                        if ( !**(_DWORD **)&v164 )
                        {
                          v81 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v81 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        **(_DWORD **)&v164 = v81;
                        return 0LL;
                      }
LABEL_136:
                      v167 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v164 = (_DWORD)v156;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        v14 = 0LL;
                        **(_DWORD **)&v164 = 75;
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
                          if ( !v48 || v78 )
                          {
                            v159 = v48;
                            v94 = (char *)malloc(v11);
                            v48 = (char *)v159;
                            if ( !v94 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v94, v159, v19);
                            else
                              v48 = v94;
                          }
                          else
                          {
                            v159 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v159;
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
                  v153 = &v167;
                  v152 = v72;
                  break;
                case 0xB:
                  v85 = *((_QWORD *)v12 + 10);
                  v86 = &v48[v19];
                  v159 = v48;
                  a5 = *((double *)v171 + 4 * v85 + 2);
                  if ( (_DWORD)v162 == 1 )
                  {
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, &v167, v153);
                  }
                  else
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, &v167, a5, v154, v155);
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, v169, &v167);
                  }
                  v48 = (char *)v159;
                  goto LABEL_132;
                case 0xC:
                  v82 = *((_QWORD *)v12 + 10);
                  v83 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 == 1 )
                  {
                    v84 = *((unsigned __int128 *)v171 + 2 * v82 + 1);
                    v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v84, v84 >> 64);
                    goto LABEL_211;
                  }
                  if ( (_DWORD)v162 != 2 )
                  {
                    v73 = __snprintf_chk(
                            v83,
                            v49,
                            1LL,
                            -1LL,
                            v163,
                            &v167,
                            a5,
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)),
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)) >> 64);
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v169, v150);
                  v48 = (char *)v159;
                  goto LABEL_132;
                default:
                  goto LABEL_409;
              }
              break;
            }
            v80 = v168;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v80, a5, v152, v153);
            v74 = v167;
            v48 = (char *)v159;
            if ( v167 < 0 )
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
LABEL_409:
          abort();
          return result;
      }
LABEL_110:
      v13 = (char *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v161;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v108 = v19;
    v109 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v109 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v109 )
        {
LABEL_304:
          v110 = v14 == src;
          if ( !v14 || v110 )
          {
            v143 = (char *)malloc(v11);
            if ( !v143 )
              goto LABEL_88;
            if ( v108 && v110 )
              v14 = (char *)memcpy(v143, v14, v108);
            else
              v14 = v143;
          }
          else
          {
            v111 = (char *)realloc(v14, v11);
            if ( !v111 )
              goto LABEL_126;
            v14 = v111;
          }
          goto LABEL_308;
        }
      }
      else if ( v109 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_304;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_304;
    }
LABEL_308:
    v14[v108] = 0;
    if ( v11 > v109 && v14 != src )
    {
      v112 = (char *)realloc(v14, v109);
      if ( v112 )
        v14 = v112;
    }
    if ( ptr )
      free(ptr);
    if ( v174 != &v177 )
      free(v174);
    if ( v171 != &v172 )
      free(v171);
    *v158 = v108;
    return v14;
  }
  if ( v174 != &v177 )
    free(v174);
  if ( v171 != &v172 )
    free(v171);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

char *__fastcall sub_40D880(void *a1, size_t *a2, char *a3, __int64 a4, double a5)
{
  char *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // rdi
  _BYTE *v10; // rax
  size_t v11; // r12
  char *v12; // r14
  char *v13; // r8
  char *v14; // rbx
  size_t v15; // r15
  _BYTE *v16; // rcx
  char *v17; // rcx
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
  _BYTE *v33; // rdi
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
  char *result; // rax
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v62; // fps^1
  char *v66; // rdx
  char *v67; // rdi
  int v68; // er11
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  char *v71; // rdi
  int *v72; // r9
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  bool v76; // cf
  unsigned __int64 v77; // rax
  bool v78; // bl
  char *v79; // rax
  unsigned __int64 v80; // r9
  int v81; // ebx
  __int64 v82; // rax
  char *v83; // rdi
  unsigned __int128 v84; // fst7
  __int64 v85; // rax
  char *v86; // rdi
  unsigned __int64 v87; // rax
  void *v88; // rax
  char *v89; // rax
  char *v90; // rcx
  int v91; // er8
  __int16 v92; // ax
  unsigned __int64 v93; // r15
  char *v94; // rax
  char *v95; // rax
  char *v96; // rax
  char v97; // al
  unsigned __int64 v98; // r9
  size_t v99; // r8
  unsigned __int64 v100; // r10
  unsigned __int64 v101; // rdi
  __int64 v102; // rax
  unsigned __int64 v103; // r10
  unsigned __int64 v104; // rax
  char *v105; // rax
  __int64 v106; // rsi
  char v107; // al
  size_t v108; // r15
  size_t v109; // r14
  bool v110; // r13
  char *v111; // rax
  char *v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // r10
  char *v115; // rax
  char *v116; // rax
  char *v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rdx
  char v120; // al
  __int64 v121; // rdx
  unsigned __int64 v122; // rax
  char *v123; // rax
  __int64 v124; // rdx
  char v125; // al
  unsigned __int64 v126; // rax
  __int64 v127; // rsi
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // rax
  char *v131; // rsi
  char *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rsi
  unsigned __int64 v135; // rax
  char v136; // al
  __int64 v137; // rsi
  char v138; // al
  char *v139; // rax
  __int64 v140; // rdx
  char v141; // al
  __int64 v142; // rax
  char *v143; // rax
  char *v144; // rax
  void *v145; // rdx
  char v146; // al
  char *v147; // rax
  char *v148; // rax
  char v149; // al
  __int64 v150; // [rsp-8h] [rbp-718h]
  int *v151; // [rsp+8h] [rbp-708h]
  int *v152; // [rsp+10h] [rbp-700h]
  int *v153; // [rsp+18h] [rbp-6F8h]
  __int64 v154; // [rsp+20h] [rbp-6F0h]
  unsigned __int64 v155; // [rsp+28h] [rbp-6E8h]
  char *v156; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v158; // [rsp+40h] [rbp-6D0h]
  void *v159; // [rsp+48h] [rbp-6C8h]
  char *v160; // [rsp+50h] [rbp-6C0h]
  __int64 v161; // [rsp+58h] [rbp-6B8h]
  char *v162; // [rsp+60h] [rbp-6B0h]
  _BYTE *v163; // [rsp+68h] [rbp-6A8h]
  long double v164; // [rsp+70h] [rbp-6A0h]
  void *v165; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v167; // [rsp+94h] [rbp-67Ch]
  unsigned int v168; // [rsp+98h] [rbp-678h]
  unsigned int v169; // [rsp+9Ch] [rbp-674h]
  char v170; // [rsp+A0h] [rbp-670h]
  void *v171; // [rsp+A8h] [rbp-668h]
  __int64 v172; // [rsp+B0h] [rbp-660h]
  __int64 v173; // [rsp+190h] [rbp-580h]
  void *v174; // [rsp+198h] [rbp-578h]
  __int64 v175; // [rsp+1A0h] [rbp-570h]
  __int64 v176; // [rsp+1A8h] [rbp-568h]
  __int64 v177; // [rsp+1B0h] [rbp-560h]
  char v178; // [rsp+420h] [rbp-2F0h]

  v5 = a3;
  v6 = a4;
  src = a1;
  v158 = a2;
  if ( (int)sub_40F5C0(a3, &v173, &v170) < 0 )
    return 0LL;
  if ( (int)sub_40F3A0(v6, &v170) >= 0 )
  {
    v7 = v175 + 7;
    if ( (unsigned __int64)(v175 + 7) <= 6 )
      v7 = -1LL;
    v76 = __CFADD__(v176, v7);
    v8 = v176 + v7;
    if ( v76 )
      goto LABEL_112;
    v9 = v8 + 6;
    if ( v8 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v9 <= 0xF9F )
    {
      ptr = 0LL;
      v23 = alloca(v8 + 14);
      v163 = (_BYTE *)(((unsigned __int64)&v155 + 7) & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      if ( v8 == -7LL )
        goto LABEL_112;
      v10 = malloc(v9);
      v163 = v10;
      if ( !v10 )
        goto LABEL_112;
      ptr = v10;
    }
    v11 = 0LL;
    if ( src )
      v11 = *v158;
    v12 = (char *)v174;
    v13 = v5;
    v14 = (char *)src;
    v161 = 0LL;
    v15 = 0LL;
    v16 = *(_BYTE **)v174;
    if ( *(char **)v174 == v13 )
      goto LABEL_111;
LABEL_14:
    v17 = (char *)(v16 - v13);
    v18 = (unsigned __int64)&v17[v15];
    v19 = (size_t)&v17[v15];
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
          v162 = v13;
          LOBYTE(v164) = v20;
          v165 = v17;
          v21 = (char *)malloc(v11);
          v17 = (char *)v165;
          v13 = v162;
          if ( !v21 )
            goto LABEL_88;
          if ( v15 && LOBYTE(v164) )
          {
            *(_QWORD *)&v164 = v162;
            v22 = (char *)memcpy(v21, v14, v15);
            v17 = (char *)v165;
            v13 = *(char **)&v164;
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
          *(_QWORD *)&v164 = v13;
          v165 = v17;
          v24 = (char *)realloc(v14, v11);
          if ( !v24 )
            goto LABEL_126;
          v17 = (char *)v165;
          v13 = *(char **)&v164;
          v14 = v24;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v18 == -1LL )
        goto LABEL_88;
      v11 = (size_t)&v17[v15];
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v14[v15], v13, (size_t)v17);
    while ( v173 != v161 )
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
              goto LABEL_239;
          }
          else
          {
            if ( v59 <= 0xC )
            {
              v11 = 12LL;
              goto LABEL_105;
            }
LABEL_239:
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
            *(_QWORD *)&v164 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v165) = v14 == src;
          v96 = (char *)malloc(v11);
          if ( !v96 )
            goto LABEL_88;
          if ( v19 && (_BYTE)v165 )
            v14 = (char *)memcpy(v96, v14, v19);
          else
            v14 = v96;
        }
LABEL_109:
        v14[v19] = 37;
        goto LABEL_110;
      }
      if ( v26 == -1 )
        goto LABEL_200;
      v27 = (char *)v171;
      v28 = (long double *)((char *)v171 + 32 * v26);
      v29 = *(_DWORD *)v28;
      LODWORD(v165) = *(_DWORD *)v28;
      if ( v25 != 110 )
      {
        v30 = v25 & 0xDF;
        if ( ((unsigned __int8)((v25 & 0xDF) - 69) <= 2u || v30 == 65) && (_DWORD)v165 == 12 )
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
                v165 = (void *)-1LL;
                while ( 1 )
                {
                  v127 = (__int64)(v66 + 1);
                  v128 = -1LL;
                  v129 = *v66 - 48;
                  if ( v50 <= 0x1999999999999999LL )
                    v128 = 10 * v50;
                  v76 = __CFADD__(v128, v129);
                  v50 = v128 + v129;
                  v66 = (char *)v127;
                  if ( v76 )
                  {
                    if ( v67 == (char *)v127 )
                    {
LABEL_81:
                      v50 = (unsigned __int64)v165;
                      goto LABEL_82;
                    }
                    while ( *(++v66 - 1) != 48 )
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
              v70 = (char *)v171 + 32 * v69;
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
                v130 = (__int64)(v51 + 1);
                v55 = 0LL;
                if ( v52 != (char *)v130 )
                {
                  v131 = (char *)v130;
                  while ( 1 )
                  {
                    v132 = v131 + 1;
                    v133 = *v131 - 48;
                    v134 = -1LL;
                    if ( v55 <= 0x1999999999999999LL )
                      v134 = 10 * v55;
                    v76 = __CFADD__(v134, v133);
                    v135 = v134 + v133;
                    v131 = v132;
                    v55 = v135;
                    if ( v76 )
                    {
                      if ( v52 == v132 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v131 = v132 + 1;
                        if ( *v132 == 48 )
                          break;
                        if ( v52 == v131 )
                          goto LABEL_88;
                        ++v132;
                      }
                      v55 = -1LL;
                    }
                    if ( v52 == v131 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_376;
              }
              v54 = (char *)v171 + 32 * v53;
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
                  v87 = v56;
                  if ( v50 >= v56 )
                    v87 = v50;
                  v76 = __CFADD__(v87, 1LL);
                  v88 = (void *)(v87 + 1);
                  v165 = v88;
                  if ( v76 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v88 <= 0x2BC )
                  {
                    v90 = &v178;
                  }
                  else
                  {
                    v159 = (void *)v50;
                    v160 = (char *)v55;
                    LODWORD(v162) = v68;
                    v164 = _FST7;
                    if ( v88 == (void *)-1LL )
                      goto LABEL_88;
                    v89 = (char *)malloc((size_t)v88);
                    v68 = (int)v162;
                    _FST7 = v164;
                    v90 = v89;
                    v55 = (unsigned __int64)v160;
                    v50 = (unsigned __int64)v159;
                    if ( !v89 )
                      goto LABEL_88;
                  }
                  v91 = (unsigned __int16)v168;
                  LOBYTE(v92) = v168;
                  HIBYTE(v92) = BYTE1(v168) | 3;
                  LOWORD(v168) = v92;
                  __asm (" fxam ");
                  if ( v62 & 2 )
                  {
                    *v90 = 45;
                    _FST7 = -_FST7;
                    v93 = (unsigned __int64)(v90 + 1);
                  }
                  else if ( v68 & 4 )
                  {
                    v93 = (unsigned __int64)(v90 + 1);
                    *v90 = 43;
                  }
                  else
                  {
                    v93 = (unsigned __int64)v90;
                    if ( v68 & 8 )
                    {
                      v93 = (unsigned __int64)(v90 + 1);
                      *v90 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v98 = v93 + 3;
                    if ( (unsigned __int8)(v12[72] - 65) > 0x19u )
                    {
                      *(_BYTE *)(v93 + 2) = 102;
                      *(_WORD *)v93 = 28265;
                    }
                    else
                    {
                      *(_BYTE *)(v93 + 2) = 70;
                      *(_WORD *)v93 = 20041;
                    }
                    v93 = 0LL;
                    goto LABEL_264;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v97 = v12[72] & 0xDF;
                  switch ( v97 )
                  {
                    case 70:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || v55 )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v123 = nl_langinfo(0x10000);
                        v124 = (__int64)v160;
                        v98 = *(_QWORD *)&v164;
                        v125 = *v123;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v125 )
                          v125 = 46;
                        *(_BYTE *)(v93 + 1) = v125;
                        if ( v124 )
                        {
                          v126 = v98;
                          do
                            *(_BYTE *)(++v126 - 1) = 48;
                          while ( v126 != v93 + v124 + 2 );
                          v98 += v124;
                        }
                        goto LABEL_264;
                      }
                      goto LABEL_263;
                    case 69:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 || (v106 = v93 + 1, v55) )
                      {
                        LODWORD(v155) = v91;
                        v156 = (char *)v50;
                        v159 = v90;
                        v160 = (char *)v55;
                        LODWORD(v162) = v68;
                        *(_QWORD *)&v164 = v93 + 2;
                        v139 = nl_langinfo(0x10000);
                        v140 = (__int64)v160;
                        v106 = *(_QWORD *)&v164;
                        v141 = *v139;
                        LOBYTE(v68) = (_BYTE)v162;
                        v90 = (char *)v159;
                        v50 = (unsigned __int64)v156;
                        LOWORD(v91) = v155;
                        if ( !v141 )
                          v141 = 46;
                        *(_BYTE *)(v93 + 1) = v141;
                        if ( v140 )
                        {
                          v142 = v106;
                          do
                            *(_BYTE *)(++v142 - 1) = 48;
                          while ( v142 != v93 + v140 + 2 );
                          v106 += v140;
                        }
                      }
                      v107 = v12[72];
                      v98 = v106 + 4;
                      *(_BYTE *)(v106 + 3) = 48;
                      *(_BYTE *)v106 = v107;
                      *(_WORD *)(v106 + 1) = 12331;
                      goto LABEL_264;
                    case 71:
                      *(_BYTE *)v93 = 48;
                      if ( v68 & 0x10 )
                      {
                        if ( v55 )
                        {
                          HIDWORD(v154) = v91;
                          v155 = v50;
                          v156 = (char *)(v93 + 2);
                          v159 = v90;
                          LODWORD(v160) = v68;
                          v162 = (char *)v55;
                          *(_QWORD *)&v164 = v55 - 1;
                          v117 = nl_langinfo(0x10000);
                          v118 = *(_QWORD *)&v164;
                          v119 = (__int64)v162;
                          v120 = *v117;
                          LOBYTE(v68) = (_BYTE)v160;
                          v90 = (char *)v159;
                          v98 = (unsigned __int64)v156;
                          v50 = v155;
                          LOWORD(v91) = WORD2(v154);
                          if ( !v120 )
                            v120 = 46;
                          *(_BYTE *)(v93 + 1) = v120;
                          if ( v118 )
                          {
                            v121 = v93 + v119 + 1;
                            v122 = v98;
                            do
                              *(_BYTE *)(++v122 - 1) = 48;
                            while ( v122 != v121 );
                            v98 += v118;
                          }
                        }
                        else
                        {
                          LODWORD(v156) = v91;
                          v159 = (void *)v50;
                          v160 = (char *)(v93 + 2);
                          v162 = v90;
                          LODWORD(v164) = v68;
                          v148 = nl_langinfo(0x10000);
                          LOBYTE(v68) = LOBYTE(v164);
                          v90 = v162;
                          v149 = *v148;
                          v98 = (unsigned __int64)v160;
                          v50 = (unsigned __int64)v159;
                          LOWORD(v91) = (_WORD)v156;
                          if ( !v149 )
                            v149 = 46;
                          *(_BYTE *)(v93 + 1) = v149;
                        }
                        goto LABEL_264;
                      }
LABEL_263:
                      v98 = v93 + 1;
                      goto LABEL_264;
                  }
                  if ( v97 != 65 )
                    goto LABEL_200;
                  *(_BYTE *)v93 = 48;
                  *(_QWORD *)&v164 = v93 + 2;
                  v136 = v12[72];
                  *(_BYTE *)(v93 + 2) = 48;
                  *(_BYTE *)(v93 + 1) = v136 + 23;
                  if ( v68 & 0x10 || (v137 = v93 + 3, v55) )
                  {
                    HIDWORD(v154) = v91;
                    v155 = v50;
                    v156 = v90;
                    v159 = (void *)v55;
                    LODWORD(v160) = v68;
                    v162 = (char *)(v93 + 4);
                    v144 = nl_langinfo(0x10000);
                    v145 = v159;
                    v137 = (__int64)v162;
                    v146 = *v144;
                    LOBYTE(v68) = (_BYTE)v160;
                    v90 = v156;
                    v50 = v155;
                    LOWORD(v91) = WORD2(v154);
                    if ( !v146 )
                      v146 = 46;
                    *(_BYTE *)(v93 + 3) = v146;
                    if ( v145 )
                    {
                      v147 = (char *)v137;
                      do
                        *(++v147 - 1) = 48;
                      while ( v147 != (char *)v145 + v93 + 4 );
                      v137 += (__int64)v145;
                    }
                  }
                  v138 = v12[72];
                  v98 = v137 + 3;
                  *(_WORD *)(v137 + 1) = 12331;
                  v93 = *(_QWORD *)&v164;
                  *(_BYTE *)v137 = v138 + 15;
LABEL_264:
                  LOWORD(v168) = v91;
                  v99 = v98 - (_QWORD)v90;
                  if ( v50 > v98 - (unsigned __int64)v90 )
                  {
                    v100 = v50 - v99;
                    v101 = v98 + v100;
                    v99 = v98 + v100 - (_QWORD)v90;
                    if ( v68 & 2 )
                    {
                      if ( v100 )
                      {
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v101 != v98 );
                      }
                    }
                    else if ( v68 & 0x20 && v93 )
                    {
                      if ( v93 >= v98 )
                      {
                        v93 = v98;
                      }
                      else
                      {
                        v102 = -1LL;
                        do
                        {
                          *(_BYTE *)(v101 + v102) = *(_BYTE *)(v98 + v102);
                          --v102;
                        }
                        while ( v102 != v93 - 1 - v98 );
                      }
                      if ( v100 )
                      {
                        v103 = v93 + v100;
                        do
                          *(_BYTE *)(++v93 - 1) = 48;
                        while ( v93 != v103 );
                      }
                    }
                    else
                    {
                      v113 = -1LL;
                      if ( (unsigned __int64)v90 < v98 )
                      {
                        do
                        {
                          *(_BYTE *)(v101 + v113) = *(_BYTE *)(v98 + v113);
                          --v113;
                        }
                        while ( &v90[-v98 - 1] != (char *)v113 );
                        v98 = (unsigned __int64)v90;
                      }
                      if ( v100 )
                      {
                        v114 = v98 + v100;
                        do
                          *(_BYTE *)(++v98 - 1) = 32;
                        while ( v98 != v114 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v165 <= v99 )
                    goto LABEL_200;
                  v104 = v99 + v19;
                  v15 = v99 + v19;
                  if ( v11 - v19 <= v99 )
                  {
                    if ( __CFADD__(v99, v19) )
                    {
                      if ( v11 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v11 < v104 )
                    {
                      if ( v11 )
                      {
                        if ( (v11 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v11 *= 2LL;
                        if ( v11 < v104 )
                          goto LABEL_374;
                      }
                      else
                      {
                        if ( v104 <= 0xC )
                        {
                          v11 = 12LL;
                          goto LABEL_281;
                        }
LABEL_374:
                        if ( v104 == -1LL )
                          goto LABEL_88;
                        v11 = v99 + v19;
                      }
LABEL_281:
                      if ( v14 && v14 != src )
                      {
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v105 = (char *)realloc(v14, v11);
                        if ( !v105 )
                          goto LABEL_88;
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        v14 = v105;
                      }
                      else
                      {
                        LOBYTE(v162) = v14 == src;
                        *(_QWORD *)&v164 = v99;
                        v165 = v90;
                        v115 = (char *)malloc(v11);
                        v90 = (char *)v165;
                        v99 = *(_QWORD *)&v164;
                        if ( !v115 )
                          goto LABEL_88;
                        if ( v19 && (_BYTE)v162 )
                        {
                          v116 = (char *)memcpy(v115, v14, v19);
                          v90 = (char *)v165;
                          v99 = *(_QWORD *)&v164;
                          v14 = v116;
                        }
                        else
                        {
                          v14 = v115;
                        }
                      }
                    }
                  }
                  v165 = v90;
                  memcpy(&v14[v19], v90, v99);
                  if ( v165 != &v178 )
                    free(v165);
                  goto LABEL_110;
                }
LABEL_376:
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
        v32 = v163 + 1;
        *v163 = 37;
        if ( v31 & 1 )
        {
          v33 = v163;
          v163[1] = 39;
          v32 = v33 + 2;
        }
        if ( v31 & 2 )
          *v32++ = 45;
        if ( v31 & 4 )
          *v32++ = 43;
        if ( v31 & 8 )
          *v32++ = 32;
        if ( v31 & 0x10 )
          *v32++ = 35;
        if ( v31 & 0x40 )
          *v32++ = 73;
        if ( v31 & 0x20 )
          *v32++ = 48;
        v34 = (_BYTE *)*((_QWORD *)v12 + 3);
        v35 = (_BYTE *)*((_QWORD *)v12 + 4);
        if ( v34 != v35 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v35 - v34;
          memcpy(v32, v34, v35 - v34);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        v36 = (_BYTE *)*((_QWORD *)v12 + 6);
        v37 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( v36 != v37 )
        {
          v162 = v27;
          *(_QWORD *)&v164 = v37 - v36;
          memcpy(v32, v36, v37 - v36);
          v27 = v162;
          v32 += *(_QWORD *)&v164;
        }
        if ( (unsigned int)v165 <= 0x10 )
        {
          v38 = 1LL << (char)v165;
          if ( (1LL << (char)v165) & 0x14180 )
            goto LABEL_125;
          if ( v38 & 0x1000 )
          {
            *v32++ = 76;
          }
          else
          {
            if ( !(v38 & 0x600) )
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
            LODWORD(v162) = 1;
            v168 = *((_DWORD *)v41 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v162) = 0;
LABEL_65:
        v42 = *((_QWORD *)v12 + 8);
        if ( v42 != -1 )
        {
          v43 = &v27[32 * v42];
          if ( *(_DWORD *)v43 != 5 )
            goto LABEL_200;
          v44 = (int)v162;
          *(&v168 + (unsigned int)v162) = *((_DWORD *)v43 + 4);
          LODWORD(v162) = v44 + 1;
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
              *(_QWORD *)&v164 = __errno_location();
LABEL_89:
              if ( v57 == src || !v57 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v174 != &v177 )
                    free(v174);
                  if ( v171 != &v172 )
                    free(v171);
                  v14 = 0LL;
                  **(_DWORD **)&v164 = 12;
                  return v14;
                }
LABEL_112:
                *(_QWORD *)&v164 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v57);
              goto LABEL_91;
            }
            LOBYTE(v164) = v14 == src;
            v95 = (char *)malloc(v11);
            v46 = v95;
            if ( !v95 )
              goto LABEL_88;
            if ( v19 && LOBYTE(v164) )
              v46 = (char *)memcpy(v95, v14, v19);
LABEL_76:
            v46[v19] = 0;
            v160 = v46;
            v47 = __errno_location();
            v48 = v160;
            v160 = v32;
            *(_QWORD *)&v164 = v47;
            LODWORD(v156) = *v47;
            while ( 2 )
            {
              v49 = 0x7FFFFFFFLL;
              v167 = -1;
              **(_DWORD **)&v164 = 0;
              if ( v11 - v19 <= 0x7FFFFFFF )
                v49 = v11 - v19;
              switch ( (_DWORD)v165 )
              {
                case 1:
                  v80 = (unsigned int)*((char *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v80 = *((unsigned __int8 *)v171 + 32 * *((_QWORD *)v12 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v80 = (unsigned int)*((__int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v80 = *((unsigned __int16 *)v171 + 16 * *((_QWORD *)v12 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 0xD:
                case 0xE:
                  v80 = *((unsigned int *)v171 + 8 * *((_QWORD *)v12 + 10) + 4);
LABEL_150:
                  v71 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v152 = &v167;
                      goto LABEL_153;
                    }
                    v151 = (int *)v80;
                    goto LABEL_210;
                  }
                  v153 = &v167;
                  v152 = (int *)v80;
                  break;
                case 7:
                case 8:
                case 9:
                case 0xA:
                case 0xF:
                case 0x10:
                case 0x11:
                  v71 = &v48[v19];
                  v72 = (int *)*((_QWORD *)v171 + 4 * *((_QWORD *)v12 + 10) + 2);
                  v159 = v48;
                  if ( (_DWORD)v162 != 1 )
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v72, a5, &v167, v153);
LABEL_131:
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v151 = v72;
LABEL_210:
                    v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v168, a5, v169, v151);
LABEL_211:
                    v48 = (char *)v159;
LABEL_132:
                    v74 = v167;
                    if ( v167 < 0 )
                    {
LABEL_154:
                      if ( v160[1] )
                      {
                        v160[1] = 0;
                        continue;
                      }
                      if ( v73 < 0 )
                      {
                        v81 = **(_DWORD **)&v164;
                        if ( !**(_DWORD **)&v164 )
                        {
                          v81 = 84;
                          if ( (v12[72] & 0xEF) != 99 )
                            v81 = 22;
                        }
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        **(_DWORD **)&v164 = v81;
                        return 0LL;
                      }
LABEL_136:
                      v167 = v73;
                      v74 = v73;
LABEL_137:
                      if ( (unsigned int)(v74 + 1) < v49 )
                      {
                        v14 = v48;
                        v15 = v19 + v74;
                        **(_DWORD **)&v164 = (_DWORD)v156;
                        goto LABEL_110;
                      }
                      if ( v11 - v19 > 0x7FFFFFFE )
                      {
                        if ( v48 != src && v48 )
                          free(v48);
                        if ( ptr )
                          free(ptr);
                        if ( v174 != &v177 )
                          free(v174);
                        if ( v171 != &v172 )
                          free(v171);
                        v14 = 0LL;
                        **(_DWORD **)&v164 = 75;
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
                          if ( !v48 || v78 )
                          {
                            v159 = v48;
                            v94 = (char *)malloc(v11);
                            v48 = (char *)v159;
                            if ( !v94 )
                              goto LABEL_202;
                            if ( v19 && v78 )
                              v48 = (char *)memcpy(v94, v159, v19);
                            else
                              v48 = v94;
                          }
                          else
                          {
                            v159 = v48;
                            v79 = (char *)realloc(v48, v11);
                            v48 = (char *)v159;
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
                  v153 = &v167;
                  v152 = v72;
                  break;
                case 0xB:
                  v85 = *((_QWORD *)v12 + 10);
                  v86 = &v48[v19];
                  v159 = v48;
                  a5 = *((double *)v171 + 4 * v85 + 2);
                  if ( (_DWORD)v162 == 1 )
                  {
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, &v167, v153);
                  }
                  else
                  {
                    if ( (_DWORD)v162 != 2 )
                    {
                      v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, &v167, a5, v154, v155);
                      v48 = (char *)v159;
                      goto LABEL_132;
                    }
                    v73 = __snprintf_chk(v86, v49, 1LL, -1LL, v163, v168, a5, v169, &v167);
                  }
                  v48 = (char *)v159;
                  goto LABEL_132;
                case 0xC:
                  v82 = *((_QWORD *)v12 + 10);
                  v83 = &v48[v19];
                  v159 = v48;
                  if ( (_DWORD)v162 == 1 )
                  {
                    v84 = *((unsigned __int128 *)v171 + 2 * v82 + 1);
                    v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v84, v84 >> 64);
                    goto LABEL_211;
                  }
                  if ( (_DWORD)v162 != 2 )
                  {
                    v73 = __snprintf_chk(
                            v83,
                            v49,
                            1LL,
                            -1LL,
                            v163,
                            &v167,
                            a5,
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)),
                            COERCE_UNSIGNED_INT128(*((long double *)v171 + 2 * v82 + 1)) >> 64);
                    goto LABEL_131;
                  }
                  v73 = __snprintf_chk(v83, v49, 1LL, -1LL, v163, v168, a5, v169, v150);
                  v48 = (char *)v159;
                  goto LABEL_132;
                default:
                  goto LABEL_409;
              }
              break;
            }
            v80 = v168;
LABEL_153:
            v73 = __snprintf_chk(v71, v49, 1LL, -1LL, v163, v80, a5, v152, v153);
            v74 = v167;
            v48 = (char *)v159;
            if ( v167 < 0 )
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
LABEL_409:
          abort();
          return result;
      }
LABEL_110:
      v13 = (char *)*((_QWORD *)v12 + 1);
      v12 += 88;
      v16 = *(_BYTE **)v12;
      ++v161;
      if ( v16 != v13 )
        goto LABEL_14;
LABEL_111:
      v19 = v15;
    }
    v108 = v19;
    v109 = v19 + 1;
    if ( v19 == -1LL )
    {
      if ( v11 != -1LL )
        goto LABEL_88;
    }
    else if ( v11 < v109 )
    {
      if ( v11 )
      {
        if ( (v11 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v11 *= 2LL;
        if ( v11 >= v109 )
        {
LABEL_304:
          v110 = v14 == src;
          if ( !v14 || v110 )
          {
            v143 = (char *)malloc(v11);
            if ( !v143 )
              goto LABEL_88;
            if ( v108 && v110 )
              v14 = (char *)memcpy(v143, v14, v108);
            else
              v14 = v143;
          }
          else
          {
            v111 = (char *)realloc(v14, v11);
            if ( !v111 )
              goto LABEL_126;
            v14 = v111;
          }
          goto LABEL_308;
        }
      }
      else if ( v109 <= 0xC )
      {
        v11 = 12LL;
        goto LABEL_304;
      }
      if ( v19 == -2LL )
        goto LABEL_88;
      v11 = v19 + 1;
      goto LABEL_304;
    }
LABEL_308:
    v14[v108] = 0;
    if ( v11 > v109 && v14 != src )
    {
      v112 = (char *)realloc(v14, v109);
      if ( v112 )
        v14 = v112;
    }
    if ( ptr )
      free(ptr);
    if ( v174 != &v177 )
      free(v174);
    if ( v171 != &v172 )
      free(v171);
    *v158 = v108;
    return v14;
  }
  if ( v174 != &v177 )
    free(v174);
  if ( v171 != &v172 )
    free(v171);
  v14 = 0LL;
  *__errno_location() = 22;
  return v14;
}

__int64 __fastcall sub_40F3A0(int *a1, unsigned __int64 *a2)
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
            v18 = &unk_413AC0;
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

__int64 __fastcall sub_40F5C0(char *a1, _QWORD *a2, unsigned __int64 *a3)
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

int __fastcall sub_410340(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &unk_617308 )
    v1 = (void *)unk_617308;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_410358(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v5; // [rsp-8h] [rbp-10h]

  v3 = (void (**)(void))&qword_616E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1LL )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
