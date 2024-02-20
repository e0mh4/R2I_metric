
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_004074e0caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402365(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040236a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040236f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402374(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040904acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_0040dfdccaseD_5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


byte FUN_00402390(uint param_1,undefined *param_2)

{
  byte *__file;
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  lconv *plVar5;
  long lVar6;
  char *pcVar7;
  undefined uVar8;
  int *piVar9;
  undefined uVar10;
  long lVar11;
  ulong uVar12;
  undefined uVar13;
  byte **ppbVar14;
  char cVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte bVar18;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  long local_e0;
  long local_d8;
  undefined local_d0;
  stat local_c8;
  
  bVar21 = 0;
  FUN_004072f0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  plVar5 = localeconv();
  DAT_00617478 = plVar5->decimal_point;
  if (*DAT_00617478 == '\0') {
    DAT_00617478 = ".";
  }
  uVar13 = 0;
  cVar15 = '\0';
  DAT_00617470 = strlen(DAT_00617478);
  FUN_00410340(FUN_00405530);
  local_e0 = 0;
  while( true ) {
    iVar2 = FUN_0040add0(param_1,param_2,"c:fLt",&PTR_s_dereference_00410e20,0);
    if (iVar2 == -1) break;
    if (iVar2 == 99) {
      DAT_00617480 = 0;
      PTR_s__00617310 = "\n";
      local_e0 = DAT_00617638;
    }
    else if (iVar2 < 100) {
      if (iVar2 == -0x82) {
        FUN_00404870(0);
        goto LAB_0040287c;
      }
      if (iVar2 != 0x4c) goto LAB_004024c0;
      DAT_00617481 = '\x01';
    }
    else if (iVar2 == 0x74) {
      uVar13 = 1;
    }
    else if (iVar2 == 0x80) {
      local_e0 = DAT_00617638;
      DAT_00617480 = 1;
      PTR_s__00617310 = "";
    }
    else {
      if (iVar2 != 0x66) goto LAB_004024b6;
      cVar15 = '\x01';
    }
  }
  if (DAT_00617398._4_4_ == param_1) {
LAB_0040287c:
    uVar10 = dcgettext(0,"missing operand",5);
    error(0,0,uVar10);
LAB_004024b6:
    do {
      FUN_00404870(1);
INVALID_JUMP; //LAB_004024c0:
    } while (iVar2 != -0x83);
    FUN_00409420(stdout,&DAT_00410748,"GNU coreutils",PTR_DAT_00617318,"Michael Meskes",0);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (local_e0 == 0) {
    local_e0 = FUN_00403e80(cVar15,uVar13,0);
    local_d8 = FUN_00403e80(cVar15,uVar13,1);
  }
  else {
    lVar6 = FUN_0040bd00(local_e0,&DAT_004107fa);
    local_d8 = local_e0;
    if (lVar6 != 0) {
      pcVar7 = getenv("QUOTING_STYLE");
      if (pcVar7 == (char *)0x0) {
        FUN_004088b0(0,4);
      }
      else {
        iVar3 = FUN_00405190(pcVar7,&PTR_s_literal_00413240,&DAT_00413200,4);
        if (iVar3 < 0) {
          FUN_004088b0(0,4);
          uVar10 = FUN_00408f10(pcVar7);
          uVar8 = dcgettext(0,"ignoring invalid value of environment variable QUOTING_STYLE: %s",5);
          error(0,0,uVar8,uVar10);
        }
        else {
          FUN_004088b0(0,*(undefined *)(&DAT_00413200 + (long)iVar3 * 4));
        }
      }
    }
  }
  if ((int)DAT_00617398._4_4_ < (int)param_1) {
    uVar12 = (ulong)(int)DAT_00617398._4_4_;
    ppbVar14 = (byte **)(param_2 + uVar12);
    bVar19 = CARRY8((ulong)(~DAT_00617398._4_4_ + param_1),uVar12);
    lVar6 = (~DAT_00617398._4_4_ + param_1) + uVar12;
    bVar20 = lVar6 == 0;
    bVar18 = 1;
    do {
      __file = *ppbVar14;
      lVar11 = 2;
      pbVar16 = __file;
      pbVar17 = &DAT_004137ca;
      do {
        if (lVar11 == 0) break;
        lVar11 = lVar11 + -1;
        bVar19 = *pbVar16 < *pbVar17;
        bVar20 = *pbVar16 == *pbVar17;
        pbVar16 = pbVar16 + (ulong)bVar21 * -2 + 1;
        pbVar17 = pbVar17 + (ulong)bVar21 * -2 + 1;
      } while (bVar20);
      if (cVar15 == '\0') {
        if ((!bVar19 && !bVar20) == bVar19) {
          iVar3 = __fxstat(1,0,&local_c8);
          if (iVar3 == 0) goto LAB_0040268e;
          uVar10 = dcgettext(0,"cannot stat standard input",5);
          piVar9 = __errno_location();
          error(0,*piVar9,uVar10);
          bVar1 = 0;
        }
        else {
          if (DAT_00617481 == '\0') {
            iVar4 = __lxstat(1,(char *)__file,&local_c8);
          }
          else {
            iVar4 = __xstat(1,(char *)__file,&local_c8);
          }
          iVar3 = iVar2;
          if (iVar4 == 0) {
LAB_0040268e:
            lVar11 = local_d8;
            if ((local_c8.st_mode & 0xb000) != 0x2000) {
              lVar11 = local_e0;
            }
            bVar1 = FUN_004037b0(lVar11,iVar3,__file,FUN_004042e0,&local_c8);
            bVar1 = bVar1 ^ 1;
          }
          else {
            local_d0 = FUN_00408cc0(4,__file);
            pcVar7 = "cannot stat %s";
LAB_0040279d:
            uVar10 = dcgettext(0,pcVar7,5);
            piVar9 = __errno_location();
            error(0,*piVar9,uVar10,local_d0);
            bVar1 = 0;
          }
        }
      }
      else if ((!bVar19 && !bVar20) == bVar19) {
        uVar10 = FUN_00408cc0(4,__file);
        uVar8 = dcgettext(0,"using %s to denote standard input does not work in file system mode",5)
        ;
        error(0,0,uVar8,uVar10);
        bVar1 = 0;
      }
      else {
        iVar3 = statvfs((char *)__file,statvfs(&local_c8));
        if (iVar3 != 0) {
          local_d0 = FUN_00408cc0(4,__file);
          pcVar7 = "cannot read file system information for %s";
          goto LAB_0040279d;
        }
        bVar1 = FUN_004037b0(local_e0,0xffffffff,__file,FUN_00402b30,&local_c8);
        bVar1 = bVar1 ^ 1;
      }
      ppbVar14 = ppbVar14 + 1;
      bVar18 = bVar18 & bVar1;
      bVar19 = param_2 + lVar6 + 1 < ppbVar14;
      bVar20 = (byte **)(param_2 + lVar6 + 1) == ppbVar14;
    } while (!bVar20);
  }
  else {
    bVar18 = 1;
  }
  return bVar18 ^ 1;
}


void FUN_004028a0(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00616ff0)
            (FUN_00402390,unaff_retaddr,&stack0x00000008,FUN_004102d0,FUN_00410330,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x004028d8) */
/* WARNING: Removing unreachable block (ram,0x004028e2) */

void FUN_004028cb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402919) */

void FUN_004028ea(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402956) */

void FUN_00402921(void)

{
  if (DAT_006173c8 != '\0') {
    return;
  }
  FUN_004028cb();
  DAT_006173c8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402919) */

void thunk_FUN_004028ea(void)

{
  return;
}


void FUN_00402980(long param_1,long param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *__dest;
  uint __c;
  
  pcVar1 = (char *)(param_1 + param_2);
  pcVar4 = (char *)(param_1 + 1);
  __dest = pcVar4;
  do {
    if (pcVar1 <= pcVar4) {
LAB_00402a0c:
      strcpy(__dest,param_4);
      return;
    }
    cVar2 = *pcVar4;
    __c = (uint)cVar2;
    pcVar3 = strchr("\'-+ #0I",__c);
    if (pcVar3 == (char *)0x0) {
      if (pcVar4 < pcVar1) {
        while( true ) {
          __dest[(long)pcVar3] = (char)__c;
          pcVar3 = pcVar3 + 1;
          if (pcVar1 + -(long)pcVar4 == pcVar3) break;
          __c = (uint)(byte)pcVar4[(long)pcVar3];
        }
        __dest = __dest + (long)(pcVar1 + -(long)pcVar4);
      }
      goto LAB_00402a0c;
    }
    pcVar3 = strchr(param_3,__c);
    if (pcVar3 != (char *)0x0) {
      *__dest = cVar2;
      __dest = __dest + 1;
    }
    pcVar4 = pcVar4 + 1;
  } while( true );
}


void FUN_00402a30(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00402980(param_1,param_2,&DAT_004103a7,&DAT_004103a4);
  __printf_chk(1,param_1,param_3);
  return;
}


void FUN_00402a70(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00402980(param_1,param_2,&DAT_004137ca,&DAT_0041209b);
  __printf_chk(1,param_1,param_3);
  return;
}


void FUN_00402ab0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00402980(param_1,param_2,&DAT_004103ae,&DAT_004103ab);
  __printf_chk(1,param_1,param_3);
  return;
}


void FUN_00402af0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00402980(param_1,param_2,"\'-+ 0",&DAT_004103b2);
  __printf_chk(1,param_1,param_3);
  return;
}


undefined
FUN_00402b30(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
            undefined param_5,long *param_6)

{
  long lVar1;
  char *pcVar2;
  
  switch(param_3) {
  case 0x53:
    lVar1 = param_6[9];
    if (lVar1 == 0) goto switchD_00402b48_caseD_73;
    goto LAB_00402b5d;
  case 0x54:
    lVar1 = *param_6;
    if (lVar1 == 0x28cd3d45) {
      pcVar2 = "cramfs";
    }
    else if (lVar1 < 0x28cd3d46) {
      if (lVar1 == 0xadf5) {
        pcVar2 = "adfs";
      }
      else if (lVar1 < 0xadf6) {
        if (lVar1 == 0x4244) {
          pcVar2 = "hfs";
        }
        else if (lVar1 < 0x4245) {
          if (lVar1 == 0x138f) {
            pcVar2 = "minix (30 char.)";
          }
          else if (lVar1 < 0x1390) {
            if (lVar1 == 0x7c0) {
              pcVar2 = "jffs";
            }
            else if (lVar1 < 0x7c1) {
              pcVar2 = "qnx4";
              if ((lVar1 != 0x2f) && (pcVar2 = "autofs", lVar1 != 0x187)) goto LAB_00402c1d;
            }
            else {
              pcVar2 = "ext";
              if ((lVar1 != 0x137d) &&
                 ((pcVar2 = "minix", lVar1 != 0x137f && (pcVar2 = "devfs", lVar1 != 0x1373))))
              goto LAB_00402c1d;
            }
          }
          else if (lVar1 == 0x3434) {
            pcVar2 = "nilfs";
          }
          else if (lVar1 < 0x3435) {
            pcVar2 = "minix v2";
            if (((lVar1 != 0x2468) && (pcVar2 = "minix v2 (30 char.)", lVar1 != 0x2478)) &&
               (pcVar2 = "devpts", lVar1 != 0x1cd1)) goto LAB_00402c1d;
          }
          else {
            pcVar2 = "isofs";
            if (((lVar1 != 0x4004) && (pcVar2 = "fat", lVar1 != 0x4006)) &&
               (pcVar2 = "isofs", lVar1 != 0x4000)) goto LAB_00402c1d;
          }
        }
        else if (lVar1 == 0x5df5) {
          pcVar2 = "exofs";
        }
        else if (lVar1 < 0x5df6) {
          if (lVar1 == 0x4d44) {
            pcVar2 = "msdos";
          }
          else if (lVar1 < 0x4d45) {
            pcVar2 = "hfs+";
            if ((lVar1 != 0x482b) && (pcVar2 = "hfsx", lVar1 != 0x4858)) goto LAB_00402c1d;
          }
          else {
            pcVar2 = "smb";
            if ((lVar1 != 0x517b) &&
               ((pcVar2 = "novell", lVar1 != 0x564c && (pcVar2 = "minix3", lVar1 != 0x4d5a))))
            goto LAB_00402c1d;
          }
        }
        else if (lVar1 == 0x9660) {
          pcVar2 = "isofs";
        }
        else if (lVar1 < 0x9661) {
          pcVar2 = "romfs";
          if (((lVar1 != 0x7275) && (pcVar2 = "jffs2", lVar1 != 0x72b6)) &&
             (pcVar2 = "nfs", lVar1 != 0x6969)) goto LAB_00402c1d;
        }
        else {
          pcVar2 = "openprom";
          if (((lVar1 != 0x9fa1) && (pcVar2 = "usbdevfs", lVar1 != 0x9fa2)) &&
             (pcVar2 = "proc", lVar1 != 0x9fa0)) goto LAB_00402c1d;
        }
      }
      else if (lVar1 == 0x12ff7b5) {
        pcVar2 = "sysv4";
      }
      else if (lVar1 < 0x12ff7b6) {
        if (lVar1 == 0x414a53) {
          pcVar2 = "efs";
        }
        else if (lVar1 < 0x414a54) {
          if (lVar1 == 0xef53) {
            pcVar2 = "ext2/ext3";
          }
          else if (lVar1 < 0xef54) {
            pcVar2 = "affs";
            if ((lVar1 != 0xadff) && (pcVar2 = "ext2", lVar1 != 0xef51)) goto LAB_00402c1d;
          }
          else {
            pcVar2 = "ufs";
            if ((lVar1 != 0x11954) &&
               ((pcVar2 = "cgroupfs", lVar1 != 0x27e0eb && (pcVar2 = "ecryptfs", lVar1 != 0xf15f))))
            goto LAB_00402c1d;
          }
        }
        else if (lVar1 == 0x1021997) {
          pcVar2 = "v9fs";
        }
        else if (lVar1 < 0x1021998) {
          pcVar2 = "ceph";
          if (((lVar1 != 0xc36400) && (pcVar2 = "tmpfs", lVar1 != 0x1021994)) &&
             (pcVar2 = "hostfs", lVar1 != 0xc0ffee)) goto LAB_00402c1d;
        }
        else {
          pcVar2 = "xia";
          if (((lVar1 != 0x12fd16d) && (pcVar2 = "xenix", lVar1 != 0x12ff7b4)) &&
             (pcVar2 = "gfs/gfs2", lVar1 != 0x1161970)) goto LAB_00402c1d;
        }
      }
      else if (lVar1 == 0xbd00bd0) {
        pcVar2 = "lustre";
      }
      else if (lVar1 < 0xbd00bd1) {
        if (lVar1 == 0x13111a8) {
          pcVar2 = "ibrix";
        }
        else if (lVar1 < 0x13111a9) {
          pcVar2 = "sysv2";
          if ((lVar1 != 0x12ff7b6) && (pcVar2 = "coh", lVar1 != 0x12ff7b7)) goto LAB_00402c1d;
        }
        else {
          pcVar2 = "anon-inode FS";
          if ((lVar1 != 0x9041934) &&
             ((pcVar2 = "futexfs", lVar1 != 0xbad1dea && (pcVar2 = "rdt", lVar1 != 0x7655821))))
          goto LAB_00402c1d;
        }
      }
      else if (lVar1 == 0x19800202) {
        pcVar2 = "mqueue";
      }
      else if (lVar1 < 0x19800203) {
        pcVar2 = "balloon-kvm-fs";
        if (((lVar1 != 0x13661366) && (pcVar2 = "udf", lVar1 != 0x15013346)) &&
           (pcVar2 = "inodefs", lVar1 != 0x11307854)) goto LAB_00402c1d;
      }
      else {
        pcVar2 = "bfs";
        if (((lVar1 != 0x1badface) && (pcVar2 = "ubifs", lVar1 != 0x24051905)) &&
           (pcVar2 = "fhgfs", lVar1 != 0x19830326)) goto LAB_00402c1d;
      }
    }
    else if (lVar1 == 0x65735543) {
      pcVar2 = "fusectl";
    }
    else if (lVar1 < 0x65735544) {
      if (lVar1 == 0x534f434b) {
        pcVar2 = "sockfs";
      }
      else if (lVar1 < 0x534f434c) {
        if (lVar1 == 0x453dcd28) {
          pcVar2 = "cramfs-wend";
        }
        else if (lVar1 < 0x453dcd29) {
          if (lVar1 == 0x3153464a) {
            pcVar2 = "jfs";
          }
          else if (lVar1 < 0x3153464b) {
            pcVar2 = "inotifyfs";
            if ((lVar1 != 0x2bad1dea) && (pcVar2 = "zfs", lVar1 != 0x2fc12fc1)) goto LAB_00402c1d;
          }
          else {
            pcVar2 = "binfmt_misc";
            if ((lVar1 != 0x42494e4d) &&
               ((pcVar2 = "smackfs", lVar1 != 0x43415d53 && (pcVar2 = "befs", lVar1 != 0x42465331)))
               ) goto LAB_00402c1d;
          }
        }
        else if (lVar1 == 0x5346314d) {
          pcVar2 = "m1fs";
        }
        else if (lVar1 < 0x5346314e) {
          pcVar2 = "pipefs";
          if (((lVar1 != 0x50495045) && (pcVar2 = "reiserfs", lVar1 != 0x52654973)) &&
             (pcVar2 = "gpfs", lVar1 != 0x47504653)) goto LAB_00402c1d;
        }
        else {
          pcVar2 = "wslfs";
          if (((lVar1 != 0x53464846) && (pcVar2 = "ntfs", lVar1 != 0x5346544e)) &&
             (pcVar2 = "afs", lVar1 != 0x5346414f)) goto LAB_00402c1d;
        }
      }
      else if (lVar1 == 0x6165676c) {
        pcVar2 = "pstorefs";
      }
      else if (lVar1 < 0x6165676d) {
        if (lVar1 == 0x58295829) {
          pcVar2 = "zsmallocfs";
        }
        else if (lVar1 < 0x5829582a) {
          pcVar2 = "ufs";
          if ((lVar1 != 0x54190100) && (pcVar2 = "vzfs", lVar1 != 0x565a4653)) goto LAB_00402c1d;
        }
        else {
          pcVar2 = "aafs";
          if ((lVar1 != 0x5a3c69f0) &&
             ((pcVar2 = "acfs", lVar1 != 0x61636673 && (pcVar2 = "xfs", lVar1 != 0x58465342))))
          goto LAB_00402c1d;
        }
      }
      else if (lVar1 == 0x62656572) {
        pcVar2 = "sysfs";
      }
      else if (lVar1 < 0x62656573) {
        pcVar2 = "bdevfs";
        if (((lVar1 != 0x62646576) && (pcVar2 = "configfs", lVar1 != 0x62656570)) &&
           (pcVar2 = "aufs", lVar1 != 0x61756673)) goto LAB_00402c1d;
      }
      else {
        pcVar2 = "debugfs";
        if (((lVar1 != 0x64626720) && (pcVar2 = "daxfs", lVar1 != 0x64646178)) &&
           (pcVar2 = "cgroup2fs", lVar1 != 0x63677270)) goto LAB_00402c1d;
      }
    }
    else if (lVar1 == 0x858458f6) {
      pcVar2 = "ramfs";
    }
    else if (lVar1 < 0x858458f7) {
      if (lVar1 == 0x73636673) {
        pcVar2 = "securityfs";
      }
      else if (lVar1 < 0x73636674) {
        if (lVar1 == 0x68191122) {
          pcVar2 = "qnx6";
        }
        else if (lVar1 < 0x68191123) {
          pcVar2 = "fuseblk";
          if ((lVar1 != 0x65735546) && (pcVar2 = "rpc_pipefs", lVar1 != 0x67596969))
          goto LAB_00402c1d;
        }
        else {
          pcVar2 = "nfsd";
          if ((lVar1 != 0x6e667364) &&
             ((pcVar2 = "nsfs", lVar1 != 0x6e736673 && (pcVar2 = "k-afs", lVar1 != 0x6b414653))))
          goto LAB_00402c1d;
        }
      }
      else if (lVar1 == 0x7461636f) {
        pcVar2 = "ocfs2";
      }
      else if (lVar1 < 0x74616370) {
        pcVar2 = "btrfs_test";
        if (((lVar1 != 0x73727279) && (pcVar2 = "coda", lVar1 != 0x73757245)) &&
           (pcVar2 = "squashfs", lVar1 != 0x73717368)) goto LAB_00402c1d;
      }
      else {
        pcVar2 = "overlayfs";
        if (((lVar1 != 0x794c7630) && (pcVar2 = "prl_fs", lVar1 != 0x7c7c6673)) &&
           (pcVar2 = "tracefs", lVar1 != 0x74726163)) goto LAB_00402c1d;
      }
    }
    else if (lVar1 == 0xc97e8168) {
      pcVar2 = "logfs";
    }
    else if (lVar1 < 0xc97e8169) {
      if (lVar1 == 0xaad7aaea) {
        pcVar2 = "panfs";
      }
      else if (lVar1 < 0xaad7aaeb) {
        pcVar2 = "hugetlbfs";
        if (((lVar1 != 0x958458f6) && (pcVar2 = "vxfs", lVar1 != 0xa501fcf5)) &&
           (pcVar2 = "btrfs", lVar1 != 0x9123683e)) goto LAB_00402c1d;
      }
      else {
        pcVar2 = "vmhgfs";
        if (((lVar1 != 0xbacbacbc) && (pcVar2 = "snfs", lVar1 != 0xbeefdead)) &&
           (pcVar2 = "xenfs", lVar1 != 0xabba1974)) goto LAB_00402c1d;
      }
    }
    else if (lVar1 == 0xf97cff8c) {
      pcVar2 = "selinux";
    }
    else if (lVar1 < 0xf97cff8d) {
      pcVar2 = "efivarfs";
      if (((lVar1 != 0xde5e81e4) && (pcVar2 = "f2fs", lVar1 != 0xf2f52010)) &&
         (pcVar2 = "bpf_fs", lVar1 != 0xcafe4a11)) {
LAB_00402c1d:
        __sprintf_chk(&DAT_00617450,1,0x1d,"UNKNOWN (0x%lx)");
        pcVar2 = &DAT_00617450;
      }
    }
    else {
      pcVar2 = "smb2";
      if (((lVar1 != 0xfe534d42) && (pcVar2 = "cifs", lVar1 != 0xff534d42)) &&
         (pcVar2 = "hpfs", lVar1 != 0xf995e849)) goto LAB_00402c1d;
    }
    FUN_00402a70(param_1,param_2,pcVar2);
    break;
  default:
    pcVar2 = stdout->_IO_write_ptr;
    if (pcVar2 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = '?';
    }
    else {
      __overflow(stdout,0x3f);
    }
    break;
  case 0x61:
    FUN_00402af0(param_1,param_2,param_6[4]);
    break;
  case 0x62:
    FUN_00402af0(param_1,param_2,param_6[2]);
    break;
  case 99:
    lVar1 = param_6[5];
    goto LAB_00402b5d;
  case 100:
    FUN_00402af0(param_1,param_2,param_6[6]);
    break;
  case 0x66:
    FUN_00402af0(param_1,param_2,param_6[3]);
    break;
  case 0x69:
    FUN_00402a30(param_1,param_2,
                 CONCAT44(*(undefined *)(param_6 + 7),*(undefined *)((long)param_6 + 0x3c)));
    break;
  case 0x6c:
    FUN_00402ab0(param_1,param_2,param_6[8]);
    break;
  case 0x6e:
    FUN_00402a70(param_1,param_2,param_5);
    break;
  case 0x73:
switchD_00402b48_caseD_73:
    lVar1 = param_6[1];
LAB_00402b5d:
    FUN_00402ab0(param_1,param_2,lVar1);
    break;
  case 0x74:
    FUN_00402a30(param_1,param_2,*param_6);
  }
  return 0;
}


undefined *
FUN_004037b0(byte *param_1,undefined param_2,undefined param_3,code *param_4,undefined param_5)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  size_t sVar5;
  void *__dest;
  undefined uVar6;
  size_t sVar7;
  long lVar8;
  ushort **ppuVar9;
  undefined uVar10;
  char *pcVar11;
  char cVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  undefined uStack_d0;
  ulong uStack_c8;
  undefined auStack_c0 [32];
  undefined auStack_a0 [64];
  undefined uStack_60;
  byte local_55;
  undefined local_54;
  undefined local_50;
  code *local_48;
  undefined local_40;
  
  uStack_60 = 0x4037d9;
  local_54 = param_2;
  local_50 = param_3;
  local_48 = param_4;
  local_40 = param_5;
  sVar5 = strlen((char *)param_1);
  uStack_60 = 0x4037e2;
  __dest = (void *)FUN_00409560(sVar5 + 3);
  bVar4 = *param_1;
  local_55 = 0;
  do {
    while( true ) {
      if (bVar4 == 0) {
        uStack_60 = 0x4038cd;
        free(__dest);
        uStack_60 = 0x4038e0;
        fputs_unlocked(PTR_s__00617310,stdout);
        return (undefined *)(ulong)local_55;
      }
      pbVar15 = param_1 + 1;
      if (bVar4 != 0x25) break;
      uStack_60 = 0x403905;
      sVar5 = strspn((char *)pbVar15,"\'-+ #0I");
      uStack_60 = 0x403917;
      sVar7 = strspn((char *)(param_1 + sVar5 + 1),"0123456789");
      pbVar13 = param_1 + sVar5 + 1 + sVar7;
      bVar4 = *pbVar13;
      if (bVar4 == 0x2e) {
        uStack_60 = 0x403933;
        sVar5 = strspn((char *)(pbVar13 + 1),"0123456789");
        pbVar13 = pbVar13 + sVar5 + 1;
        bVar4 = *pbVar13;
      }
      lVar8 = (long)pbVar13 - (long)pbVar15;
      sVar5 = lVar8 + 1;
      uStack_60 = 0x403958;
      memcpy(__dest,param_1,sVar5);
      if (bVar4 == 0) {
        pbVar13 = pbVar13 + -1;
      }
      else if (bVar4 != 0x25) {
        pbVar15 = pbVar13 + 1;
        uStack_60 = 0x403986;
        bVar4 = (*local_48)(__dest,sVar5,(int)(char)bVar4,local_54,local_50,local_40);
        local_55 = local_55 | bVar4;
        goto LAB_00403826;
      }
      if (lVar8 != 0) {
        *(byte *)((long)__dest + sVar5) = bVar4;
        *(undefined *)((long)__dest + lVar8 + 2) = 0;
        uStack_60 = 0x403c71;
        uVar6 = FUN_00408f10(__dest);
        uStack_60 = 0x403c85;
        uVar10 = dcgettext(0,"%s: invalid directive",5);
        uStack_c8 = 0;
        uStack_d0 = 1;
        uStack_60 = 0x403c99;
        error(1,0,uVar10,uVar6);
        uStack_60 = uVar6;
        if (DAT_00617420 == 0) {
          pcVar11 = getenv("TZ");
          DAT_00617420 = FUN_0040c170(pcVar11);
        }
        uVar3 = uStack_c8;
        lVar8 = FUN_0040c450(DAT_00617420,&uStack_d0,auStack_a0);
        if (lVar8 == 0) {
          uVar6 = FUN_004059c0(uStack_d0,auStack_c0);
          __sprintf_chk(&DAT_006173e0,1,0x3d,"%s.%09d",uVar6,uVar3 & 0xffffffff);
          return &DAT_006173e0;
        }
        FUN_004072d0(&DAT_006173e0,0x3d,"%Y-%m-%d %H:%M:%S.%N %z",auStack_a0,DAT_00617420,
                     uVar3 & 0xffffffff);
        return &DAT_006173e0;
      }
      pbVar15 = pbVar13 + 1;
      pcVar11 = stdout->_IO_write_ptr;
      if (pcVar11 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar11 + 1;
        *pcVar11 = '%';
      }
      else {
        uStack_60 = 0x403b6a;
        __overflow(stdout,0x25);
      }
LAB_00403826:
      bVar4 = pbVar13[1];
      param_1 = pbVar15;
    }
    pbVar13 = param_1;
    if (bVar4 != 0x5c) {
      pbVar2 = (byte *)stdout->_IO_write_ptr;
      if (pbVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
        *pbVar2 = bVar4;
      }
      else {
        uStack_60 = 0x403acd;
        __overflow(stdout,(uint)bVar4);
      }
      goto LAB_00403826;
    }
    if (DAT_00617480 != '\0') {
      bVar4 = param_1[1];
      if ((byte)(bVar4 - 0x30) < 8) {
        bVar4 = bVar4 - 0x30;
        if ((byte)(param_1[2] - 0x30) < 8) {
          bVar4 = (param_1[2] - 0x30) + bVar4 * '\b';
          if ((byte)(param_1[3] - 0x30) < 8) {
            bVar4 = (param_1[3] - 0x30) + bVar4 * '\b';
            pbVar15 = param_1 + 4;
          }
          else {
            pbVar15 = param_1 + 3;
          }
        }
        else {
          pbVar15 = param_1 + 2;
        }
        pbVar13 = (byte *)stdout->_IO_write_ptr;
        if (pbVar13 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = (char *)(pbVar13 + 1);
          *pbVar13 = bVar4;
        }
        else {
          uStack_60 = 0x403c3b;
          __overflow(stdout,(uint)bVar4);
        }
        pbVar13 = pbVar15 + -1;
      }
      else {
        if (bVar4 == 0x78) {
          uStack_60 = 0x4039ed;
          ppuVar9 = __ctype_b_loc();
          bVar1 = param_1[2];
          if ((*(byte *)((long)*ppuVar9 + (ulong)bVar1 * 2 + 1) & 0x10) != 0) {
            if ((byte)(bVar1 + 0x9f) < 6) {
              bVar4 = bVar1 + 0xa9;
            }
            else {
              bVar4 = bVar1 - 0x37;
              if (5 < (byte)(bVar1 + 0xbf)) {
                bVar4 = bVar1 - 0x30;
              }
            }
            bVar1 = param_1[3];
            pbVar13 = param_1 + 2;
            if ((*(byte *)((long)*ppuVar9 + (ulong)bVar1 * 2 + 1) & 0x10) != 0) {
              pbVar13 = param_1 + 3;
              if ((byte)(bVar1 + 0x9f) < 6) {
                cVar12 = bVar1 + 0xa9;
              }
              else {
                cVar12 = bVar1 - 0x30;
                if ((byte)(bVar1 + 0xbf) < 6) {
                  cVar12 = bVar1 - 0x37;
                }
              }
              bVar4 = bVar4 * '\x10' + cVar12;
            }
            pbVar15 = pbVar13 + 1;
            pbVar2 = (byte *)stdout->_IO_write_ptr;
            if (pbVar2 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
              *pbVar2 = bVar4;
            }
            else {
              uStack_60 = 0x403c5a;
              __overflow(stdout,(uint)bVar4);
            }
            goto LAB_00403826;
          }
          uVar14 = 0x78;
switchD_004039de_caseD_23:
          uStack_60 = 0x403a1a;
          uVar6 = dcgettext(0,"warning: unrecognized escape \'\\%c\'",5);
          uStack_60 = 0x403a2b;
          error(0,0,uVar6,uVar14);
        }
        else {
          if (bVar4 == 0) {
            uStack_60 = 0x403884;
            uVar6 = dcgettext(0,"warning: backslash at end of format",5);
            uStack_60 = 0x403892;
            error(0,0,uVar6);
            goto LAB_00403892;
          }
          uVar14 = (uint)(char)bVar4;
          switch(bVar4) {
          case 0x22:
          case 0x5c:
            break;
          default:
            goto switchD_004039de_caseD_23;
          case 0x61:
            uVar14 = 7;
            bVar4 = 7;
            break;
          case 0x62:
            uVar14 = 8;
            bVar4 = 8;
            break;
          case 0x65:
            uVar14 = 0x1b;
            bVar4 = 0x1b;
            break;
          case 0x66:
            uVar14 = 0xc;
            bVar4 = 0xc;
            break;
          case 0x6e:
            uVar14 = 10;
            bVar4 = 10;
            break;
          case 0x72:
            uVar14 = 0xd;
            bVar4 = 0xd;
            break;
          case 0x74:
            uVar14 = 9;
            bVar4 = 9;
            break;
          case 0x76:
            uVar14 = 0xb;
            bVar4 = 0xb;
          }
        }
        pbVar2 = (byte *)stdout->_IO_write_ptr;
        pbVar13 = pbVar15;
        pbVar15 = param_1 + 2;
        if (pbVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
          *pbVar2 = bVar4;
        }
        else {
          uStack_60 = 0x403c2d;
          __overflow(stdout,uVar14 & 0xff);
        }
      }
      goto LAB_00403826;
    }
LAB_00403892:
    pcVar11 = stdout->_IO_write_ptr;
    if (stdout->_IO_write_end <= pcVar11) {
      uStack_60 = 0x403b80;
      __overflow(stdout,0x5c);
      goto LAB_00403826;
    }
    stdout->_IO_write_ptr = pcVar11 + 1;
    *pcVar11 = '\\';
    bVar4 = param_1[1];
    param_1 = pbVar15;
  } while( true );
}


undefined * FUN_00403ca0(undefined param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined uVar3;
  char *pcVar4;
  undefined local_78;
  ulong local_70;
  undefined local_68 [32];
  undefined local_48 [64];
  
  local_78 = param_1;
  local_70 = param_2;
  if (DAT_00617420 == 0) {
    pcVar4 = getenv("TZ");
    DAT_00617420 = FUN_0040c170(pcVar4);
  }
  uVar1 = local_70;
  lVar2 = FUN_0040c450(DAT_00617420,&local_78,local_48);
  if (lVar2 != 0) {
    FUN_004072d0(&DAT_006173e0,0x3d,"%Y-%m-%d %H:%M:%S.%N %z",local_48,DAT_00617420,
                 uVar1 & 0xffffffff);
    return &DAT_006173e0;
  }
  uVar3 = FUN_004059c0(local_78,local_68);
  __sprintf_chk(&DAT_006173e0,1,0x3d,"%s.%09d",uVar3,uVar1 & 0xffffffff);
  return &DAT_006173e0;
}


char * FUN_00403d70(char *param_1)

{
  char *__filename;
  char **ppcVar1;
  int iVar2;
  undefined uVar3;
  int *piVar4;
  stat local_138;
  stat local_a8;
  
  if (DAT_00617430 == '\0') {
    DAT_00617428 = (char **)FUN_0040b0c0(0);
    if (DAT_00617428 == (char **)0x0) {
      uVar3 = dcgettext(0,"cannot read table of mounted file systems",5);
      piVar4 = __errno_location();
      error(0,*piVar4,&DAT_0041209a,uVar3);
    }
    DAT_00617430 = '\x01';
  }
  iVar2 = __xstat(1,param_1,&local_138);
  ppcVar1 = DAT_00617428;
  if (iVar2 == 0) {
    for (; ppcVar1 != (char **)0x0; ppcVar1 = (char **)ppcVar1[6]) {
      if (((((*(byte *)(ppcVar1 + 5) & 1) != 0) && (__filename = *ppcVar1, *__filename == '/')) &&
          (iVar2 = strcmp(ppcVar1[1],param_1), iVar2 == 0)) &&
         (((iVar2 = __xstat(1,__filename,&local_a8), iVar2 == 0 &&
           (local_138.st_ino == local_a8.st_ino)) && (local_138.st_dev == local_a8.st_dev)))) {
        return *ppcVar1;
      }
    }
  }
  return (char *)0x0;
}


undefined FUN_00403e80(char param_1,char param_2,char param_3)

{
  undefined uVar1;
  void *pvVar2;
  void *__ptr;
  char *pcVar3;
  
  if (param_1 == '\0') {
    if (param_2 != '\0') {
      uVar1 = FUN_00409790("%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n");
      return uVar1;
    }
    uVar1 = dcgettext(0,"  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\n",5);
    pvVar2 = (void *)FUN_00409790(uVar1);
    pcVar3 = "Device: %Dh/%dd\tInode: %-10i  Links: %-5h Device type: %t,%T\n";
    if (param_3 == '\0') {
      pcVar3 = "Device: %Dh/%dd\tInode: %-10i  Links: %h\n";
    }
    uVar1 = dcgettext(0,pcVar3,5);
    __ptr = (void *)FUN_00409820(&DAT_004106e9,pvVar2,uVar1);
    free(pvVar2);
    uVar1 = dcgettext(0,"Access: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\n",5);
    pvVar2 = (void *)FUN_00409820(&DAT_004106e9,__ptr,uVar1);
    free(__ptr);
    uVar1 = dcgettext(0,"Access: %x\nModify: %y\nChange: %z\n Birth: %w\n",5);
    uVar1 = FUN_00409820(&DAT_004106e9,pvVar2,uVar1);
    free(pvVar2);
    return uVar1;
  }
  if (param_2 != '\0') {
    uVar1 = FUN_00409790("%n %i %l %t %s %S %b %f %a %c %d\n");
    return uVar1;
  }
  uVar1 = dcgettext(0,
                    "  File: \"%n\"\n    ID: %-8i Namelen: %-7l Type: %T\nBlock size: %-10s Fundamental block size: %S\nBlocks: Total: %-10b Free: %-10f Available: %a\nInodes: Total: %-10c Free: %d\n"
                    ,5);
  uVar1 = FUN_00409790(uVar1);
  return uVar1;
}


ulong FUN_00403f90(char *param_1,long param_2,long param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  long local_50;
  int local_48;
  ulong uVar12;
  
  pcVar4 = (char *)FUN_0040aed0(param_1,0x2e,param_2);
  if (pcVar4 == (char *)0x0) {
    local_48 = 0;
    iVar3 = 0;
LAB_00404120:
    iVar2 = 1;
    iVar8 = iVar3;
    do {
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 * 10;
    } while (iVar8 != 9);
    lVar5 = (long)iVar2;
    uVar12 = (long)param_4 / lVar5;
  }
  else {
    param_1[param_2] = '\0';
    param_2 = (long)pcVar4 - (long)param_1;
    uVar12 = param_4;
    if ((int)pcVar4[1] - 0x30U < 10) {
      lVar5 = strtol(pcVar4 + 1,(char **)0x0,10);
      if (0x7fffffff < lVar5) {
        lVar5 = 0x7fffffff;
      }
      iVar3 = (int)lVar5;
      if (iVar3 != 0) {
        if ((int)pcVar4[-1] - 0x30U < 10) goto LAB_00403ff9;
        local_48 = 0;
        goto LAB_00404117;
      }
      local_48 = 0;
      goto LAB_00404120;
    }
    iVar3 = 9;
    if ((int)pcVar4[-1] - 0x30U < 10) {
LAB_00403ff9:
      *pcVar4 = '\0';
      do {
        pcVar11 = pcVar4 + -1;
        pcVar7 = pcVar4 + -2;
        pcVar4 = pcVar11;
      } while ((int)*pcVar7 - 0x30U < 10);
      lVar5 = strtol(pcVar11,(char **)0x0,10);
      if (0x7fffffff < lVar5) {
        lVar5 = 0x7fffffff;
      }
      local_48 = (int)lVar5;
      if (1 < local_48) {
        pcVar11 = pcVar11 + (*pcVar11 == '0');
        param_2 = (long)pcVar11 - (long)param_1;
        if (((DAT_00617470 < (ulong)(long)local_48) &&
            (iVar2 = local_48 - (int)DAT_00617470, 1 < iVar2)) && (iVar2 = iVar2 - iVar3, 1 < iVar2)
           ) {
          pcVar4 = param_1;
          if (param_1 < pcVar11) {
            bVar1 = false;
            pcVar7 = param_1;
            do {
              if (*pcVar7 == '-') {
                bVar1 = true;
              }
              else {
                *pcVar4 = *pcVar7;
                pcVar4 = pcVar4 + 1;
              }
              pcVar7 = pcVar7 + 1;
            } while (pcVar11 != pcVar7);
            param_2 = (long)pcVar4 - (long)param_1;
            if (bVar1) goto LAB_00404117;
          }
          else {
            param_2 = 0;
          }
          iVar2 = __sprintf_chk(pcVar4,1,0xffffffffffffffff,&DAT_0041213d,iVar2);
          param_2 = param_2 + iVar2;
        }
      }
LAB_00404117:
      if (iVar3 < 9) goto LAB_00404120;
      lVar5 = 1;
      iVar2 = 1;
    }
    else {
      lVar5 = 1;
      local_48 = 0;
      iVar2 = 1;
    }
  }
  local_50 = param_3;
  if ((param_3 < 0) && (param_4 != 0)) {
    uVar10 = ((int)(1000000000 / (long)iVar2) - (int)uVar12) - (uint)((long)param_4 % lVar5 != 0);
    uVar12 = (ulong)uVar10;
    local_50 = param_3 + (ulong)(uVar10 != 0);
    if (local_50 == 0) {
      FUN_00402980(param_1,param_2,"\'-+ 0",&DAT_004106ee);
      uVar6 = __printf_chk(DAT_00411fa0,1,param_1);
      goto LAB_00404169;
    }
  }
  uVar6 = FUN_00402af0(param_1,param_2,local_50);
LAB_00404169:
  if (iVar3 != 0) {
    iVar2 = 9;
    if (iVar3 < 10) {
      iVar2 = iVar3;
    }
    iVar8 = (int)uVar6;
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    iVar9 = 0;
    if ((iVar8 < local_48) && (DAT_00617470 < (ulong)(long)(local_48 - iVar8))) {
      iVar9 = (local_48 - iVar8) - (iVar2 + (int)DAT_00617470);
    }
    uVar6 = (ulong)(uint)(iVar3 - iVar2);
    __printf_chk(1,"%s%.*d%-*.*d",DAT_00617478,iVar2,uVar12 & 0xffffffff,iVar9,
                 (ulong)(uint)(iVar3 - iVar2),0);
  }
  return uVar6;
}


undefined
FUN_004042e0(long param_1,long param_2,undefined param_3,undefined param_4,char *param_5,
            undefined *param_6)

{
  undefined uVar1;
  undefined uVar2;
  char *pcVar3;
  passwd *ppVar4;
  undefined uVar5;
  char *__ptr;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  undefined uVar11;
  
  switch(param_3) {
  case 0x41:
    uVar11 = 0;
    FUN_004059b0(param_6,&DAT_00617438);
    DAT_00617442 = 0;
    FUN_00402a70(param_1,param_2,&DAT_00617438);
    break;
  case 0x42:
    uVar11 = 0;
    FUN_00402ab0(param_1,param_2,0x200);
    break;
  case 0x43:
    piVar6 = __errno_location();
    *piVar6 = 0x5f;
    uVar2 = FUN_00408cc0(4,param_5);
    uVar5 = dcgettext(0,"failed to get security context of %s",5);
    uVar11 = 1;
    error(0,*piVar6,uVar5,uVar2);
    *(undefined *)(param_1 + param_2) = 0x73;
    __printf_chk(1,param_1,&DAT_00410707);
    break;
  case 0x44:
    uVar11 = 0;
    FUN_00402a30(param_1,param_2,*param_6);
    break;
  default:
    pcVar9 = stdout->_IO_write_ptr;
    if (pcVar9 < stdout->_IO_write_end) {
      uVar11 = 0;
      stdout->_IO_write_ptr = pcVar9 + 1;
      *pcVar9 = '?';
    }
    else {
      uVar11 = 0;
      __overflow(stdout,0x3f);
    }
    break;
  case 0x46:
    uVar2 = FUN_00405740(param_6);
    goto LAB_00404315;
  case 0x47:
    ppVar4 = (passwd *)getgrgid(*(__gid_t *)(param_6 + 4));
    goto joined_r0x004045a1;
  case 0x4e:
    uVar11 = 0;
    uVar1 = FUN_004088a0(0);
    uVar2 = FUN_00408cc0(uVar1,param_5);
    FUN_00402a70(param_1,param_2,uVar2);
    if ((*(uint *)(param_6 + 3) & 0xf000) != 0xa000) {
      return 0;
    }
    __ptr = (char *)FUN_00405090(param_5,param_6[6]);
    if (__ptr == (char *)0x0) {
      uVar2 = FUN_00408cc0(4,param_5);
      uVar11 = dcgettext(0,"cannot read symbolic link %s",5);
      piVar6 = __errno_location();
      error(0,*piVar6,uVar11,uVar2);
      return 1;
    }
    __printf_chk(1,&DAT_00410726);
    uVar1 = FUN_004088a0(0);
    pcVar3 = (char *)FUN_00408cc0(uVar1,__ptr);
    goto LAB_00404480;
  case 0x54:
    uVar7 = (uint)param_6[5] & 0xff;
    uVar8 = (int)(((ulong)param_6[5] >> 0xc) >> 8) << 8;
    goto LAB_004043a0;
  case 0x55:
    ppVar4 = getpwuid(*(__uid_t *)((long)param_6 + 0x1c));
joined_r0x004045a1:
    pcVar9 = "UNKNOWN";
    if (ppVar4 != (passwd *)0x0) {
      pcVar9 = ppVar4->pw_name;
    }
LAB_0040435d:
    uVar11 = 0;
    FUN_00402a70(param_1,param_2,pcVar9);
    break;
  case 0x57:
    uVar11 = 0;
    FUN_00403f90(param_1,param_2,0,0);
    break;
  case 0x58:
    uVar11 = 0;
    FUN_00403f90(param_1,param_2,param_6[9],param_6[10]);
    break;
  case 0x59:
    uVar11 = 0;
    FUN_00403f90(param_1,param_2,param_6[0xb],param_6[0xc]);
    break;
  case 0x5a:
    uVar11 = 0;
    FUN_00403f90(param_1,param_2,param_6[0xd],param_6[0xe]);
    break;
  case 0x61:
    uVar7 = *(uint *)(param_6 + 3);
    FUN_00402980(param_1,param_2,&DAT_004103a7,&DAT_0041072b);
    uVar11 = 0;
    __printf_chk(1,param_1,uVar7 & 0xfff);
    break;
  case 0x62:
    uVar11 = 0;
    FUN_00402ab0(param_1,param_2,param_6[8]);
    break;
  case 100:
    uVar11 = 0;
    FUN_00402ab0(param_1,param_2,*param_6);
    break;
  case 0x66:
    uVar11 = 0;
    FUN_00402a30(param_1,param_2,*(undefined *)(param_6 + 3));
    break;
  case 0x67:
    uVar11 = 0;
    FUN_00402ab0(param_1,param_2,*(undefined *)(param_6 + 4));
    break;
  case 0x68:
    uVar11 = 0;
    FUN_00402ab0(param_1,param_2,param_6[2]);
    break;
  case 0x69:
    uVar11 = 0;
    FUN_00402ab0(param_1,param_2,param_6[1]);
    break;
  case 0x6d:
    if ((DAT_00617481 == '\0') && ((*(uint *)(param_6 + 3) & 0xf000) == 0xa000)) {
LAB_00404790:
      __ptr = (char *)FUN_00404d10(param_5,param_6);
      if (__ptr != (char *)0x0) {
        pcVar3 = (char *)FUN_00403d70(__ptr);
        if (pcVar3 == (char *)0x0) {
          uVar11 = 0;
          pcVar3 = __ptr;
        }
        else {
          uVar11 = 0;
        }
        goto LAB_00404480;
      }
    }
    else {
      pcVar9 = canonicalize_file_name(param_5);
      if (pcVar9 != (char *)0x0) {
        uVar11 = 0;
        pcVar3 = (char *)FUN_00403d70(pcVar9);
        __ptr = (char *)0x0;
        free(pcVar9);
        if (pcVar3 != (char *)0x0) goto LAB_00404480;
        goto LAB_00404790;
      }
      uVar2 = FUN_00408cc0(4,param_5);
      uVar11 = dcgettext(0,"failed to canonicalize %s",5);
      piVar6 = __errno_location();
      error(0,*piVar6,uVar11,uVar2);
      __ptr = pcVar9;
    }
    uVar11 = 1;
    pcVar3 = "?";
LAB_00404480:
    FUN_00402a70(param_1,param_2,pcVar3);
    free(__ptr);
    break;
  case 0x6e:
    uVar11 = 0;
    FUN_00402a70(param_1,param_2,param_5);
    break;
  case 0x6f:
    lVar10 = param_6[7];
    if (0x1fffffffffffffff < lVar10 - 1U) {
      lVar10 = 0x200;
    }
    uVar11 = 0;
    FUN_00402ab0(param_1,param_2,lVar10);
    break;
  case 0x73:
    uVar11 = 0;
    FUN_00402af0(param_1,param_2,param_6[6]);
    break;
  case 0x74:
    uVar7 = (uint)((ulong)param_6[5] >> 8) & 0xfff;
    uVar8 = (uint)((ulong)param_6[5] >> 0x20) & 0xfffff000;
LAB_004043a0:
    uVar11 = 0;
    FUN_00402a30(param_1,param_2,uVar8 | uVar7);
    break;
  case 0x75:
    uVar11 = 0;
    FUN_00402ab0(param_1,param_2,*(undefined *)((long)param_6 + 0x1c));
    break;
  case 0x77:
    pcVar9 = "-";
    goto LAB_0040435d;
  case 0x78:
    uVar2 = param_6[10];
    uVar11 = param_6[9];
    goto LAB_00404310;
  case 0x79:
    uVar2 = param_6[0xc];
    uVar11 = param_6[0xb];
    goto LAB_00404310;
  case 0x7a:
    uVar2 = param_6[0xe];
    uVar11 = param_6[0xd];
LAB_00404310:
    uVar2 = FUN_00403ca0(uVar11,uVar2);
LAB_00404315:
    uVar11 = 0;
    FUN_00402a70(param_1,param_2,uVar2);
  }
  return uVar11;
}


void FUN_00404870(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined uVar3;
  char *pcVar4;
  undefined uVar5;
  byte **ppbVar6;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  byte *local_88;
  char *local_80;
  byte *local_78 [5];
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  undefined local_28;
  undefined local_20;
  byte **ppbVar7;
  
  uVar5 = DAT_00617498;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_004048af;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... FILE...\n",5);
  __printf_chk(1,uVar3,uVar5);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Display file or file system status.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -L, --dereference     follow links\n  -f, --file-system     display file system status instead of file status\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -c  --format=FORMAT   use the specified FORMAT instead of the default;\n                          output a newline after each use of FORMAT\n      --printf=FORMAT   like --format, but interpret backslash escapes,\n                          and do not output a mandatory trailing newline;\n                          if you want a newline, include \\n in FORMAT\n  -t, --terse           print the information in terse form\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe valid format sequences for files (without --file-system):\n\n  %a   access rights in octal (note \'#\' and \'0\' printf flags)\n  %A   access rights in human readable form\n  %b   number of blocks allocated (see %B)\n  %B   the size in bytes of each block reported by %b\n  %C   SELinux security context string\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %d   device number in decimal\n  %D   device number in hex\n  %f   raw mode in hex\n  %F   file type\n  %g   group ID of owner\n  %G   group name of owner\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %h   number of hard links\n  %i   inode number\n  %m   mount point\n  %n   file name\n  %N   quoted file name with dereference if symbolic link\n  %o   optimal I/O transfer size hint\n  %s   total size, in bytes\n  %t   major device type in hex, for character/block device special files\n  %T   minor device type in hex, for character/block device special files\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %u   user ID of owner\n  %U   user name of owner\n  %w   time of file birth, human-readable; - if unknown\n  %W   time of file birth, seconds since Epoch; 0 if unknown\n  %x   time of last access, human-readable\n  %X   time of last access, seconds since Epoch\n  %y   time of last data modification, human-readable\n  %Y   time of last data modification, seconds since Epoch\n  %z   time of last status change, human-readable\n  %Z   time of last status change, seconds since Epoch\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Valid format sequences for file systems:\n\n  %a   free blocks available to non-superuser\n  %b   total data blocks in file system\n  %c   total file nodes in file system\n  %d   free file nodes in file system\n  %f   free blocks in file system\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %i   file system ID in hex\n  %l   maximum length of filenames\n  %n   file name\n  %s   block size (for faster transfers)\n  %S   fundamental block size (for block counts)\n  %t   file system type in hex\n  %T   file system type in human readable form\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,"\n--terse is equivalent to the following FORMAT:\n    %s",5);
  __printf_chk(1,uVar5,"%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n");
  uVar5 = dcgettext(0,"--terse --file-system is equivalent to the following FORMAT:\n    %s",5);
  __printf_chk(1,uVar5,"%n %i %l %t %s %S %b %f %a %c %d\n");
  uVar5 = dcgettext(0,
                    "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(1,uVar5,&DAT_00410748);
  local_88 = &DAT_0041074d;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x4107c7;
  local_78[1] = (byte *)0x41075f;
  local_78[2] = (byte *)0x410775;
  local_78[3] = (byte *)0x41077f;
  local_78[4] = (byte *)0x41078e;
  local_50 = "sha2 utilities";
  local_48 = "sha384sum";
  local_40 = "sha2 utilities";
  local_38 = "sha512sum";
  local_30 = "sha2 utilities";
  local_28 = 0;
  local_20 = 0;
  ppbVar6 = &local_88;
  do {
    ppbVar7 = ppbVar6;
    ppbVar6 = ppbVar7 + 2;
    pbVar9 = *ppbVar6;
    bVar11 = false;
    bVar12 = pbVar9 == (byte *)0x0;
    if (bVar12) break;
    lVar8 = 5;
    pbVar10 = &DAT_00410748;
    do {
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
      bVar11 = *pbVar10 < *pbVar9;
      bVar12 = *pbVar10 == *pbVar9;
      pbVar10 = pbVar10 + (ulong)bVar13 * -2 + 1;
      pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
    } while (bVar12);
  } while ((!bVar11 && !bVar12) != bVar11);
  pbVar9 = ppbVar7[3];
  if (pbVar9 == (byte *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        pbVar9 = &DAT_00410748;
        goto LAB_00404ce3;
      }
    }
    pbVar9 = &DAT_00410748;
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_00410748);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00404ce3:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,&DAT_00410748);
      }
    }
    pcVar4 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_00410748);
    if (pbVar9 != &DAT_00410748) {
      pcVar4 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pbVar9,pcVar4);
LAB_004048af:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


char * FUN_00404d10(char *param_1,undefined *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  size_t sVar6;
  char *pcVar7;
  undefined uVar8;
  undefined uVar9;
  ulong uVar10;
  int *piVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined unaff_R15;
  undefined uStack_160;
  undefined local_158 [8];
  undefined auStack_150 [8];
  undefined local_148;
  undefined uStack_144;
  undefined uStack_140;
  undefined uStack_13c;
  undefined local_138;
  undefined uStack_134;
  __mode_t _Stack_130;
  __uid_t _Stack_12c;
  __gid_t local_128;
  int iStack_124;
  undefined uStack_120;
  undefined uStack_11c;
  undefined local_118;
  undefined uStack_114;
  undefined uStack_110;
  undefined uStack_10c;
  undefined local_108;
  undefined uStack_104;
  undefined uStack_100;
  undefined uStack_fc;
  undefined local_f8;
  undefined uStack_f4;
  undefined uStack_f0;
  undefined uStack_ec;
  undefined local_e8;
  undefined uStack_e4;
  undefined uStack_e0;
  undefined uStack_dc;
  undefined local_d8;
  undefined uStack_d4;
  undefined uStack_d0;
  undefined uStack_cc;
  undefined local_c8;
  undefined uStack_c4;
  undefined uStack_c0;
  undefined uStack_bc;
  undefined local_b8;
  undefined uStack_b4;
  undefined uStack_b0;
  undefined uStack_ac;
  undefined local_a8;
  undefined uStack_a4;
  __mode_t _Stack_a0;
  __uid_t _Stack_9c;
  __gid_t local_98;
  int iStack_94;
  undefined uStack_90;
  undefined uStack_8c;
  undefined local_88;
  undefined uStack_84;
  undefined uStack_80;
  undefined uStack_7c;
  undefined local_78;
  undefined uStack_74;
  undefined uStack_70;
  undefined uStack_6c;
  undefined local_68;
  undefined uStack_64;
  undefined uStack_60;
  undefined uStack_5c;
  undefined local_58;
  undefined uStack_54;
  undefined uStack_50;
  undefined uStack_4c;
  undefined local_48;
  undefined uStack_44;
  undefined uStack_40;
  undefined uStack_3c;
  undefined local_38;
  undefined uStack_34;
  undefined uStack_30;
  undefined uStack_2c;
  
  puVar13 = local_158;
  puVar12 = local_158;
  uStack_160 = 0x404d34;
  iVar3 = FUN_00408f30(local_158);
  uStack_160 = 0x404d3c;
  puVar4 = (uint *)__errno_location();
  if (iVar3 != 0) {
    uStack_160 = 0x40504b;
    uVar8 = dcgettext(0,"cannot get current directory",5);
    uStack_160 = 0x40505b;
    error(0,*puVar4,uVar8);
    return (char *)0x0;
  }
  if ((param_2[6] & 0xf000) == 0x4000) {
    local_148 = *param_2;
    uStack_144 = param_2[1];
    uStack_140 = param_2[2];
    uStack_13c = param_2[3];
    local_138 = param_2[4];
    uStack_134 = param_2[5];
    _Stack_130 = param_2[6];
    _Stack_12c = param_2[7];
    local_128 = param_2[8];
    iStack_124 = param_2[9];
    uStack_120 = param_2[10];
    uStack_11c = param_2[0xb];
    local_118 = param_2[0xc];
    uStack_114 = param_2[0xd];
    uStack_110 = param_2[0xe];
    uStack_10c = param_2[0xf];
    local_108 = param_2[0x10];
    uStack_104 = param_2[0x11];
    uStack_100 = param_2[0x12];
    uStack_fc = param_2[0x13];
    local_f8 = param_2[0x14];
    uStack_f4 = param_2[0x15];
    uStack_f0 = param_2[0x16];
    uStack_ec = param_2[0x17];
    local_e8 = param_2[0x18];
    uStack_e4 = param_2[0x19];
    uStack_e0 = param_2[0x1a];
    uStack_dc = param_2[0x1b];
    local_d8 = param_2[0x1c];
    uStack_d4 = param_2[0x1d];
    uStack_d0 = param_2[0x1e];
    uStack_cc = param_2[0x1f];
    local_c8 = param_2[0x20];
    uStack_c4 = param_2[0x21];
    uStack_c0 = param_2[0x22];
    uStack_bc = param_2[0x23];
    uStack_160 = 0x404fc6;
    iVar3 = chdir(param_1);
    pcVar7 = param_1;
    if (iVar3 < 0) goto LAB_00404fd1;
  }
  else {
    uStack_160 = 0x404d63;
    pcVar5 = (char *)FUN_004055d0(param_1);
    uStack_160 = 0x404d6e;
    sVar6 = strlen(pcVar5);
    lVar2 = -(sVar6 + 0x18 & 0xfffffffffffffff0);
    puVar12 = local_158 + lVar2;
    puVar13 = local_158 + lVar2;
    *(undefined *)(local_158 + lVar2 + -8) = 0x404d8e;
    pcVar7 = (char *)memcpy(auStack_150 + lVar2,pcVar5,sVar6 + 1);
    *(undefined *)(local_158 + lVar2 + -8) = 0x404d99;
    free(pcVar5);
    *(undefined *)(local_158 + lVar2 + -8) = 0x404da1;
    iVar3 = chdir(pcVar7);
    if (iVar3 < 0) {
LAB_00404fd1:
      *(undefined *)(puVar13 + -8) = 0x404fdb;
      uVar8 = FUN_00408cc0(4,pcVar7);
      *(undefined *)(puVar13 + -8) = 0x404fef;
      uVar9 = dcgettext(0,"cannot change to directory %s",5);
      uVar1 = *puVar4;
      *(undefined *)(puVar13 + -8) = 0x405004;
      error(0,uVar1,uVar9,uVar8);
      return (char *)0x0;
    }
    *(undefined *)(local_158 + lVar2 + -8) = 0x404dbf;
    iVar3 = __xstat(1,".",(stat *)&local_148);
    if (iVar3 < 0) {
      *(undefined *)(local_158 + lVar2 + -8) = 0x404dd4;
      uVar8 = FUN_00408cc0(4,pcVar7);
      *(undefined *)(local_158 + lVar2 + -8) = 0x404de8;
      uVar9 = dcgettext(0,"cannot stat current directory (now %s)",5);
      uVar1 = *puVar4;
      pcVar7 = (char *)0x0;
      *(undefined *)(local_158 + lVar2 + -8) = 0x404dfd;
      error(0,uVar1,uVar9,uVar8);
      puVar12 = local_158 + lVar2;
      goto LAB_00404f18;
    }
  }
  while( true ) {
    *(undefined *)(puVar12 + -8) = 0x404ecd;
    iVar3 = __xstat(1,"..",(stat *)&local_b8);
    if (iVar3 < 0) break;
    if ((CONCAT44(uStack_b4,local_b8) != CONCAT44(uStack_144,local_148)) ||
       (CONCAT44(uStack_ac,uStack_b0) == CONCAT44(uStack_13c,uStack_140))) {
      *(undefined *)(puVar12 + -8) = 0x404f15;
      pcVar7 = (char *)FUN_004097f0();
      goto LAB_00404f18;
    }
    *(undefined *)(puVar12 + -8) = 0x404e3a;
    iVar3 = chdir("..");
    if (iVar3 < 0) {
      *(undefined *)(puVar12 + -8) = 0x40501f;
      uVar8 = FUN_00408cc0(4,&DAT_00411fe3);
      pcVar7 = "cannot change to directory %s";
      goto LAB_00404ef1;
    }
    local_148 = local_b8;
    uStack_144 = uStack_b4;
    uStack_140 = uStack_b0;
    uStack_13c = uStack_ac;
    local_138 = local_a8;
    uStack_134 = uStack_a4;
    _Stack_130 = _Stack_a0;
    _Stack_12c = _Stack_9c;
    local_128 = local_98;
    iStack_124 = iStack_94;
    uStack_120 = uStack_90;
    uStack_11c = uStack_8c;
    local_118 = local_88;
    uStack_114 = uStack_84;
    uStack_110 = uStack_80;
    uStack_10c = uStack_7c;
    local_108 = local_78;
    uStack_104 = uStack_74;
    uStack_100 = uStack_70;
    uStack_fc = uStack_6c;
    local_f8 = local_68;
    uStack_f4 = uStack_64;
    uStack_f0 = uStack_60;
    uStack_ec = uStack_5c;
    local_e8 = local_58;
    uStack_e4 = uStack_54;
    uStack_e0 = uStack_50;
    uStack_dc = uStack_4c;
    local_d8 = local_48;
    uStack_d4 = uStack_44;
    uStack_d0 = uStack_40;
    uStack_cc = uStack_3c;
    local_c8 = local_38;
    uStack_c4 = uStack_34;
    uStack_c0 = uStack_30;
    uStack_bc = uStack_2c;
  }
  *(undefined *)(puVar12 + -8) = 0x404ee4;
  uVar8 = FUN_00408cc0(4,&DAT_00411fe3);
  pcVar7 = "cannot stat %s";
LAB_00404ef1:
  *(undefined *)(puVar12 + -8) = 0x404ef8;
  uVar9 = dcgettext(0,pcVar7,5);
  uVar1 = *puVar4;
  pcVar7 = (char *)0x0;
  *(undefined *)(puVar12 + -8) = 0x404f0d;
  error(0,uVar1,uVar9,uVar8);
LAB_00404f18:
  uVar1 = *puVar4;
  *(undefined *)(puVar12 + -8) = 0x404f28;
  iVar3 = FUN_00408f80(local_158);
  if (iVar3 == 0) {
    *(undefined *)(puVar12 + -8) = 0x404f3c;
    FUN_00408fa0(local_158);
    *puVar4 = uVar1;
    return pcVar7;
  }
  *(undefined *)(puVar12 + -8) = 0x405079;
  uVar8 = dcgettext(0,"failed to return to initial working directory",5);
  uVar10 = (ulong)*puVar4;
  pcVar5 = (char *)0x1;
  *(undefined *)(puVar12 + -8) = 0x40508c;
  error(1,uVar10,uVar8);
  *(undefined *)(puVar12 + -8) = unaff_R15;
  *(char **)(puVar12 + -0x10) = param_1;
  *(ulong *)(puVar12 + -0x18) = (ulong)uVar1;
  *(uint **)(puVar12 + -0x20) = puVar4;
  *(undefined **)(puVar12 + -0x28) = &stack0xfffffffffffffff8;
  *(char **)(puVar12 + -0x30) = pcVar7;
  sVar6 = uVar10 + 1;
  if (0x400 < uVar10) {
    sVar6 = 0x401;
  }
  do {
    *(undefined *)(puVar12 + -0x40) = 0x4050d8;
    pcVar7 = (char *)malloc(sVar6);
    while( true ) {
      if (pcVar7 == (char *)0x0) {
        return (char *)0x0;
      }
      *(undefined *)(puVar12 + -0x40) = 0x4050ee;
      uVar10 = readlink(pcVar5,pcVar7,sVar6);
      if ((long)uVar10 < 0) {
        *(undefined *)(puVar12 + -0x40) = 0x40514d;
        piVar11 = __errno_location();
        if (*piVar11 != 0x22) {
          *(undefined *)(puVar12 + -0x40) = 0x40515c;
          free(pcVar7);
          return (char *)0x0;
        }
      }
      if (uVar10 < sVar6) {
        pcVar7[uVar10] = '\0';
        return pcVar7;
      }
      *(undefined *)(puVar12 + -0x40) = 0x405103;
      free(pcVar7);
      if (0x3fffffffffffffff < sVar6) break;
      sVar6 = sVar6 * 2;
      *(undefined *)(puVar12 + -0x40) = 0x405113;
      pcVar7 = (char *)malloc(sVar6);
    }
    if (0x7ffffffffffffffe < sVar6) {
      *(undefined *)(puVar12 + -0x40) = 0x405175;
      piVar11 = __errno_location();
      *piVar11 = 0xc;
      return (char *)0x0;
    }
    sVar6 = 0x7fffffffffffffff;
  } while( true );
}


char * FUN_00405090(char *param_1,ulong param_2)

{
  char *__buf;
  ulong uVar1;
  int *piVar2;
  size_t __size;
  
  __size = param_2 + 1;
  if (0x400 < param_2) {
    __size = 0x401;
  }
  do {
    __buf = (char *)malloc(__size);
    while( true ) {
      if (__buf == (char *)0x0) {
        return (char *)0x0;
      }
      uVar1 = readlink(param_1,__buf,__size);
      if (((long)uVar1 < 0) && (piVar2 = __errno_location(), *piVar2 != 0x22)) {
        free(__buf);
        return (char *)0x0;
      }
      if (uVar1 < __size) {
        __buf[uVar1] = '\0';
        return __buf;
      }
      free(__buf);
      if (0x3fffffffffffffff < __size) break;
      __size = __size * 2;
      __buf = (char *)malloc(__size);
    }
    if (0x7ffffffffffffffe < __size) {
      piVar2 = __errno_location();
      *piVar2 = 0xc;
      return (char *)0x0;
    }
    __size = 0x7fffffffffffffff;
  } while( true );
}


void FUN_00405180(void)

{
  FUN_00404870(1);
  return;
}


long FUN_00405190(char *param_1,char **param_2,void *param_3,size_t param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  size_t __n;
  size_t sVar4;
  long lVar5;
  void *__s2;
  char *__s1;
  long local_58;
  
  __n = strlen(param_1);
  __s1 = *param_2;
  local_58 = -1;
  lVar2 = local_58;
  if (__s1 != (char *)0x0) {
    bVar1 = false;
    lVar2 = 0;
    __s2 = param_3;
LAB_00405227:
    do {
      lVar5 = lVar2;
      iVar3 = strncmp(__s1,param_1,__n);
      if (iVar3 == 0) {
        sVar4 = strlen(__s1);
        if (sVar4 == __n) {
          return lVar5;
        }
        if (local_58 == -1) {
          __s2 = (void *)((long)__s2 + param_4);
          __s1 = param_2[lVar5 + 1];
          lVar2 = lVar5 + 1;
          local_58 = lVar5;
          if (__s1 == (char *)0x0) break;
          goto LAB_00405227;
        }
        if (param_3 == (void *)0x0) {
          bVar1 = true;
        }
        else {
          iVar3 = memcmp((void *)(local_58 * param_4 + (long)param_3),__s2,param_4);
          if (iVar3 != 0) {
            bVar1 = true;
          }
        }
      }
      __s2 = (void *)((long)__s2 + param_4);
      __s1 = param_2[lVar5 + 1];
      lVar2 = lVar5 + 1;
    } while (__s1 != (char *)0x0);
    lVar2 = -2;
    if (!bVar1) {
      lVar2 = local_58;
    }
  }
  local_58 = lVar2;
  return local_58;
}


void FUN_004052b0(undefined param_1,undefined param_2,long param_3)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  
  if (param_3 == -1) {
    uVar1 = dcgettext(0,"invalid argument %s for %s",5);
  }
  else {
    uVar1 = dcgettext(0,"ambiguous argument %s for %s",5);
  }
  uVar2 = FUN_00408ef0(1,param_1);
  uVar3 = FUN_00408be0(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_00405330(long *param_1,void *param_2,size_t param_3)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined uVar3;
  long lVar4;
  void *__s2;
  long lVar5;
  void *__s1;
  
  __stream = stderr;
  __s1 = (void *)0x0;
  pcVar2 = (char *)dcgettext(0,"Valid arguments are:",5);
  lVar4 = 0;
  fputs_unlocked(pcVar2,__stream);
  lVar5 = *param_1;
  while (lVar5 != 0) {
    while ((__s2 = param_2, lVar4 == 0 || (iVar1 = memcmp(__s1,__s2,param_3), iVar1 != 0))) {
      lVar4 = lVar4 + 1;
      uVar3 = FUN_00408f10(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_00405400;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_00408f10(lVar5);
    __fprintf_chk(stderr,1,&DAT_00412098,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_00405400:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_00405450(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_00405190(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_004052b0(param_1,param_2,lVar1);
    FUN_00405330(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_004054c0(void *param_1,long *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    param_2 = param_2 + 1;
    do {
      iVar1 = memcmp(param_1,param_3,param_4);
      if (iVar1 == 0) {
        return lVar2;
      }
      lVar2 = *param_2;
      param_3 = (void *)((long)param_3 + param_4);
      param_2 = param_2 + 1;
    } while (lVar2 != 0);
  }
  return lVar2;
}


void FUN_00405510(undefined param_1)

{
  DAT_00617490 = param_1;
  return;
}


void FUN_00405520(undefined param_1)

{
  DAT_00617488 = param_1;
  return;
}


void FUN_00405530(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_0040c640(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_00617488 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_00617490 == 0) {
        error(0,*piVar2,&DAT_0041209a,uVar3);
      }
      else {
        uVar4 = FUN_00408d60();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_004055ae;
    }
  }
  iVar1 = FUN_0040c640(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_004055ae:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_00617328);
}


void FUN_004055d0(void)

{
  long lVar1;
  
  lVar1 = FUN_00405650();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004097b0();
}


ulong FUN_004055f0(char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  cVar1 = *param_1;
  lVar2 = FUN_004056b0();
  uVar3 = lVar2 - (long)param_1;
  if (((cVar1 == '/') < uVar3) && (*(char *)(lVar2 + -1) == '/')) {
    do {
      uVar4 = uVar3 - 1;
      if ((cVar1 == '/') == uVar4) {
        return uVar4;
      }
      lVar2 = uVar3 - 2;
      uVar3 = uVar4;
    } while (param_1[lVar2] == '/');
    return uVar4;
  }
  return uVar3;
}


undefined * FUN_00405650(void *param_1)

{
  size_t __n;
  undefined *__dest;
  
  __n = FUN_004055f0();
  __dest = (undefined *)malloc(__n + 1 + (ulong)(__n == 0));
  if (__dest != (undefined *)0x0) {
    __dest = (undefined *)memcpy(__dest,param_1,__n);
    if (__n == 0) {
      *__dest = 0x2e;
      __n = 1;
    }
    __dest[__n] = 0;
  }
  return __dest;
}


char * FUN_004056b0(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  while (cVar3 == '/') {
    param_1 = param_1 + 1;
    cVar3 = *param_1;
  }
  if (cVar3 != '\0') {
    bVar1 = false;
    pcVar2 = param_1;
    do {
      while (cVar3 == '/') {
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
        bVar1 = true;
        if (cVar3 == '\0') {
          return param_1;
        }
      }
      if (bVar1) {
        bVar1 = false;
        param_1 = pcVar2;
      }
      pcVar2 = pcVar2 + 1;
      cVar3 = *pcVar2;
    } while (cVar3 != '\0');
  }
  return param_1;
}


void FUN_00405710(char *param_1)

{
  long lVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_1);
  if (1 < sVar2) {
    while (lVar1 = sVar2 - 1, sVar2 = sVar2 - 1, param_1[lVar1] == '/') {
      if (sVar2 == 1) {
        return;
      }
    }
  }
  return;
}


void FUN_00405740(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18) & 0xf000;
  if (uVar1 == 0x8000) {
    if (*(long *)(param_1 + 0x30) == 0) {
      dcgettext(0,"regular empty file",5);
      return;
    }
    dcgettext(0,"regular file",5);
    return;
  }
  if (uVar1 == 0x4000) {
    dcgettext(0,"directory",5);
    return;
  }
  if (uVar1 == 0xa000) {
    dcgettext(0,"symbolic link",5);
    return;
  }
  if (uVar1 != 0x6000) {
    if (uVar1 == 0x2000) {
      dcgettext(0,"character special file",5);
      return;
    }
    if (uVar1 != 0x1000) {
      if (uVar1 != 0xc000) {
        dcgettext(0,"weird file",5);
        return;
      }
      dcgettext(0,"socket",5);
      return;
    }
    dcgettext(0,&DAT_00412108,5);
    return;
  }
  dcgettext(0,"block special file",5);
  return;
}


void FUN_00405830(uint param_1,undefined *param_2)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  
  uVar2 = 0x2d;
  uVar4 = param_1 & 0xf000;
  if ((((uVar4 != 0x8000) && (uVar2 = 100, uVar4 != 0x4000)) && (uVar2 = 0x62, uVar4 != 0x6000)) &&
     (((uVar2 = 99, uVar4 != 0x2000 && (uVar2 = 0x6c, uVar4 != 0xa000)) &&
      ((uVar2 = 0x70, uVar4 != 0x1000 && (uVar2 = 0x73, uVar4 != 0xc000)))))) {
    uVar2 = 0x3f;
  }
  *param_2 = uVar2;
  param_2[1] = (-((param_1 & 0x100) == 0) & 0xbbU) + 0x72;
  param_2[2] = (-((param_1 & 0x80) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 0x40) == 0);
  if ((param_1 & 0x800) == 0) {
    cVar3 = (bVar1 & 0xb5) + 0x78;
  }
  else {
    cVar3 = (bVar1 & 0xe0) + 0x73;
  }
  param_2[3] = cVar3;
  param_2[4] = (-((param_1 & 0x20) == 0) & 0xbbU) + 0x72;
  param_2[5] = (-((param_1 & 0x10) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 8) == 0);
  if ((param_1 & 0x400) == 0) {
    cVar3 = (bVar1 & 0xb5) + 0x78;
  }
  else {
    cVar3 = (bVar1 & 0xe0) + 0x73;
  }
  param_2[6] = cVar3;
  param_2[7] = (-((param_1 & 4) == 0) & 0xbbU) + 0x72;
  param_2[8] = (-((param_1 & 2) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 1) == 0);
  if ((param_1 & 0x200) != 0) {
    param_2[9] = (bVar1 & 0xe0) + 0x74;
    *(undefined *)(param_2 + 10) = 0x20;
    return;
  }
  param_2[9] = (bVar1 & 0xb5) + 0x78;
  *(undefined *)(param_2 + 10) = 0x20;
  return;
}


void FUN_004059b0(long param_1)

{
  FUN_00405830(*(undefined *)(param_1 + 0x18));
  return;
}


char * FUN_004059c0(ulong param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  
  pcVar1 = (char *)(param_2 + 0x14);
  *(undefined *)(param_2 + 0x14) = 0;
  if ((long)param_1 < 0) {
    do {
      pcVar2 = pcVar1;
      uVar3 = (long)param_1 / 10;
      pcVar2[-1] = ((char)uVar3 * '\n' + '0') - (char)param_1;
      pcVar1 = pcVar2 + -1;
      param_1 = uVar3;
    } while (uVar3 != 0);
    pcVar2[-2] = '-';
    return pcVar2 + -2;
  }
  do {
    pcVar1 = pcVar1 + -1;
    uVar3 = param_1 / 10;
    *pcVar1 = (char)param_1 + (char)uVar3 * -10 + '0';
    param_1 = uVar3;
  } while (uVar3 != 0);
  return pcVar1;
}


long FUN_00405a60(long param_1,long param_2,long param_3)

{
  __int32_t **pp_Var1;
  
  if (param_3 != 0) {
    param_3 = param_3 + -1;
    pp_Var1 = __ctype_tolower_loc();
    do {
      *(char *)(param_1 + param_3) = (char)(*pp_Var1)[*(byte *)(param_2 + param_3)];
      param_3 = param_3 + -1;
    } while (param_3 != -1);
  }
  return param_1;
}


long FUN_00405ab0(long param_1,long param_2,long param_3)

{
  __int32_t **pp_Var1;
  
  if (param_3 != 0) {
    param_3 = param_3 + -1;
    pp_Var1 = __ctype_toupper_loc();
    do {
      *(char *)(param_1 + param_3) = (char)(*pp_Var1)[*(byte *)(param_2 + param_3)];
      param_3 = param_3 + -1;
    } while (param_3 != -1);
  }
  return param_1;
}


/* WARNING: Type propagation algorithm not settling */

long FUN_00405b00(char *param_1,long param_2,char *param_3,tm *param_4,char param_5,
                 undefined param_6,undefined param_7,uint param_8)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  char cVar13;
  ulong __n;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  size_t sVar17;
  ulong uVar18;
  size_t sVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  char cVar24;
  uint uVar25;
  uint uVar26;
  char *__s;
  char *pcVar27;
  char cVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  bool bVar32;
  char *local_498;
  char *local_488;
  uint local_480;
  uint local_478;
  undefined local_458;
  char local_456;
  char local_455 [19];
  char local_442 [10];
  undefined local_438;
  undefined uStack_430;
  undefined local_428;
  undefined uStack_420;
  undefined local_418;
  long lStack_410;
  char *local_408;
  
  __s = param_4->tm_zone;
  uVar25 = param_4->tm_hour;
  if (__s == (char *)0x0) {
    __s = "";
  }
  if ((int)uVar25 < 0xd) {
    if (uVar25 == 0) {
      uVar25 = 0xc;
    }
  }
  else {
    uVar25 = uVar25 - 0xc;
  }
  cVar5 = *param_3;
  lVar31 = 0;
  if (cVar5 == '\0') {
LAB_00405b9b:
    if ((param_1 != (char *)0x0) && (param_2 != 0)) {
      *param_1 = '\0';
    }
    return lVar31;
  }
LAB_00405b6a:
  if (cVar5 == '%') {
    cVar5 = '\0';
    cVar24 = param_5;
    uVar6 = 0;
    do {
      uVar26 = uVar6;
      param_3 = param_3 + 1;
      cVar13 = *param_3;
      cVar28 = cVar13 + -0x30;
      bVar32 = cVar13 == '0';
      while (uVar6 = (uint)cVar13, !bVar32) {
        if (!bVar32 && SBORROW1(cVar13,'0') == cVar28 < '\0') {
          if (cVar13 == '^') {
            cVar24 = '\x01';
            uVar6 = uVar26;
          }
          else if (cVar13 != '_') {
            uVar20 = 0xffffffff;
            if (9 < uVar6 - 0x30) goto LAB_00405c48;
LAB_00405c91:
            uVar20 = 0;
            pcVar9 = param_3;
            goto LAB_00405c93;
          }
          break;
        }
        if (cVar13 != '#') {
          if (cVar13 != '-') {
            uVar20 = 0xffffffff;
            if (uVar6 - 0x30 < 10) goto LAB_00405c91;
            goto LAB_00405c48;
          }
          break;
        }
        param_3 = param_3 + 1;
        cVar13 = *param_3;
        cVar5 = '\x01';
        cVar28 = cVar13 + -0x30;
        bVar32 = cVar28 == '\0';
      }
    } while( true );
  }
  if ((ulong)(param_2 - lVar31) < 2) {
    return 0;
  }
  if (param_1 != (char *)0x0) {
    *param_1 = cVar5;
    param_1 = param_1 + 1;
  }
  lVar31 = lVar31 + 1;
  pcVar9 = param_3;
  goto LAB_00405b8e;
LAB_00405c93:
  do {
    uVar6 = (uint)pcVar9[1];
    param_3 = pcVar9 + 1;
    uVar14 = uVar6 - 0x30;
    if ((int)uVar20 < 0xccccccd) {
      if ((uVar20 == 0xccccccc) && ('7' < *pcVar9)) goto LAB_00405cde;
      uVar20 = *pcVar9 + -0x30 + uVar20 * 10;
    }
    else {
LAB_00405cde:
      if (9 < uVar14) {
        uVar20 = 0x7fffffff;
        break;
      }
      uVar6 = (uint)pcVar9[2];
      uVar20 = 0x7fffffff;
      param_3 = pcVar9 + 2;
      uVar14 = uVar6 - 0x30;
    }
    pcVar9 = param_3;
  } while (uVar14 < 10);
LAB_00405c48:
  if (((char)uVar6 == 'E') || ((char)uVar6 == 'O')) {
    uVar8 = (uint)(byte)param_3[1];
    param_3 = param_3 + 1;
    uVar14 = uVar6;
  }
  else {
    uVar14 = 0;
    uVar8 = uVar6;
  }
  cVar13 = (char)uVar8;
  pcVar11 = &local_456;
  pcVar9 = param_3;
  uVar6 = uVar25;
  local_478 = uVar20;
  switch(uVar8 & 0xff) {
  case 0:
    cVar5 = param_3[-1];
    param_3 = param_3 + -1;
LAB_00406ad7:
    uVar18 = param_2 - lVar31;
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar12 = (ulong)(int)uVar6;
    if (cVar5 != '%') break;
    __n = 1;
    pcVar9 = param_3;
    uVar29 = 1;
    if (uVar12 != 0) {
      uVar29 = uVar12;
    }
    goto LAB_00406983;
  case 0x25:
    uVar18 = param_2 - lVar31;
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar12 = (ulong)(int)uVar6;
    uVar29 = 1;
    if (uVar12 != 0) {
      uVar29 = uVar12;
    }
    if (uVar14 != 0) {
      __n = 1;
      goto LAB_00406983;
    }
    if (uVar18 <= uVar29) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (1 < (int)uVar20) {
        sVar19 = (long)(int)uVar20 - 1;
        pcVar11 = param_1 + sVar19;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar19);
          cVar13 = *param_3;
        }
        else {
          memset(param_1,0x20,sVar19);
          cVar13 = *param_3;
        }
      }
      *pcVar11 = cVar13;
      param_1 = pcVar11 + 1;
    }
    goto LAB_00406526;
  case 0x3a:
    pcVar9 = param_3 + 1;
    lVar30 = 1;
    cVar5 = param_3[1];
    while (cVar5 == ':') {
      lVar30 = lVar30 + 1;
      pcVar9 = param_3 + lVar30;
      cVar5 = param_3[lVar30];
    }
    if (cVar5 == 'z') goto LAB_00406a20;
    break;
  case 0x41:
  case 0x42:
  case 0x61:
    if (uVar14 != 0) break;
    if (cVar5 != '\0') {
      cVar24 = cVar5;
    }
LAB_00405d20:
    cVar28 = '\0';
    uVar14 = 0;
    goto LAB_00405d40;
  case 0x43:
    if (uVar14 != 0x45) {
      bVar4 = false;
      local_478 = 2;
      iVar15 = param_4->tm_year;
      iVar23 = iVar15 / 100 + 0x13;
      bVar32 = iVar15 < -0x76c;
      uVar6 = iVar23 - ((uint)(0 < iVar23) & (uint)(iVar15 % 100) >> 0x1f);
      uVar22 = 0;
      goto LAB_0040629f;
    }
LAB_00406f1c:
    uVar8 = 0;
    goto LAB_004062b2;
  case 0x44:
    if (uVar14 == 0) {
      local_498 = "%m/%d/%y";
      goto LAB_00406019;
    }
    break;
  case 0x46:
    if (uVar14 == 0) {
      local_498 = "%Y-%m-%d";
      goto LAB_00406019;
    }
    break;
  case 0x47:
  case 0x56:
  case 0x67:
    if (uVar14 != 0x45) {
      iVar15 = param_4->tm_year;
      iVar1 = param_4->tm_yday;
      iVar21 = param_4->tm_wday;
      uVar6 = iVar15 + -100 + (iVar15 >> 0x1f & 400U);
      iVar23 = (iVar1 - iVar21) + 0x17e;
      iVar23 = (iVar1 - iVar23) + 3 + (iVar23 / 7) * 7;
      if (iVar23 < 0) {
        uVar6 = uVar6 - 1;
        iVar23 = 0x16d;
        if (((uVar6 & 3) == 0) && (iVar23 = 0x16e, uVar6 == ((int)uVar6 / 100) * 100)) {
          iVar23 = ~-(uint)((int)uVar6 % 400 == 0) + 0x16e;
        }
        iVar7 = -1;
        iVar21 = ((iVar1 + iVar23) - iVar21) + 0x17e;
        iVar23 = ((iVar1 + iVar23) - iVar21) + 3 + (iVar21 / 7) * 7;
      }
      else {
        iVar7 = 0x16d;
        if (((uVar6 & 3) == 0) && (iVar7 = 0x16e, uVar6 == ((int)uVar6 / 100) * 100)) {
          iVar7 = (uVar6 == ((int)uVar6 / 400) * 400) + 0x16d;
        }
        iVar21 = ((iVar1 - iVar7) - iVar21) + 0x17e;
        iVar1 = ((iVar1 - iVar7) - iVar21) + 3 + (iVar21 / 7) * 7;
        if (-1 < iVar1) {
          iVar23 = iVar1;
        }
        iVar7 = (iVar1 >> 0x1f) + 1;
      }
      if (cVar13 == 'G') {
        bVar4 = false;
        local_478 = 4;
        uVar6 = iVar15 + 0x76c + iVar7;
        bVar32 = iVar15 < -0x76c - iVar7;
        uVar22 = 0;
        goto LAB_0040629f;
      }
      if (cVar13 == 'g') {
        local_478 = 2;
        uVar8 = (iVar15 % 100 + iVar7) % 100;
        uVar6 = uVar8;
        if ((int)uVar8 < 0) {
          uVar6 = uVar8 + 100;
          if (iVar15 < -0x76c - iVar7) {
            uVar6 = -uVar8;
          }
        }
      }
      else {
        uVar6 = iVar23 / 7 + 1;
        local_478 = 2;
      }
      goto LAB_00406290;
    }
    break;
  case 0x48:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_hour;
      local_478 = 2;
      goto LAB_00406290;
    }
    break;
  case 0x49:
    if (uVar14 != 0x45) {
      local_478 = 2;
      goto LAB_00406290;
    }
    break;
  case 0x4d:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_min;
      local_478 = 2;
      goto LAB_00406290;
    }
    break;
  case 0x4e:
    if (uVar14 != 0x45) {
      uVar6 = param_8;
      if (uVar20 == 0xffffffff) {
        uVar20 = 9;
        local_478 = 9;
      }
      else {
        uVar8 = param_8;
        uVar22 = uVar20;
        if ((int)uVar20 < 9) {
          do {
            uVar22 = uVar22 + 1;
            uVar6 = (int)uVar8 / 10;
            uVar8 = (int)uVar8 / 10;
          } while (uVar22 != 9);
        }
      }
      goto LAB_00406290;
    }
    break;
  case 0x50:
    cVar28 = '\x01';
    goto LAB_00406435;
  case 0x52:
    local_498 = "%H:%M";
    goto LAB_00406019;
  case 0x53:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_sec;
      local_478 = 2;
      goto LAB_00406290;
    }
    break;
  case 0x54:
    local_498 = "%H:%M:%S";
LAB_00406019:
    uVar29 = FUN_00405b00(0,0xffffffffffffffff,local_498,param_4,cVar24,param_6,param_7,param_8);
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar12 = (ulong)(int)uVar6;
    uVar18 = uVar12;
    if (uVar12 <= uVar29) {
      uVar18 = uVar29;
    }
    if ((ulong)(param_2 - lVar31) <= uVar18) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (uVar29 < uVar12) {
        sVar19 = (long)(int)uVar20 - uVar29;
        pcVar11 = param_1 + sVar19;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar19);
        }
        else {
          memset(param_1,0x20,sVar19);
        }
      }
      FUN_00405b00(pcVar11,param_2 - lVar31,local_498,param_4,cVar24,param_6,param_7,param_8);
      param_1 = pcVar11 + uVar29;
    }
    lVar31 = lVar31 + uVar18;
    goto LAB_00405b8e;
  case 0x55:
    if (uVar14 != 0x45) {
      iVar23 = (param_4->tm_yday - param_4->tm_wday) + 7;
      iVar15 = (int)((ulong)((long)iVar23 * -0x6db6db6d) >> 0x20);
LAB_0040685d:
      uVar6 = (iVar15 + iVar23 >> 2) - (iVar23 >> 0x1f);
      local_478 = 2;
      goto LAB_00406290;
    }
    break;
  case 0x57:
    if (uVar14 != 0x45) {
      iVar23 = param_4->tm_wday + 6;
      iVar23 = ((iVar23 / 7) * 7 - iVar23) + 7 + param_4->tm_yday;
      iVar15 = (int)((ulong)((long)iVar23 * -0x6db6db6d) >> 0x20);
      goto LAB_0040685d;
    }
    break;
  case 0x58:
  case 99:
  case 0x78:
    if (uVar14 != 0x4f) goto switchD_00405c61_caseD_72;
    break;
  case 0x59:
    if (uVar14 == 0x45) goto LAB_00406f1c;
    if (uVar14 == 0x4f) break;
    bVar4 = false;
    local_478 = 4;
    bVar32 = param_4->tm_year < -0x76c;
    uVar6 = param_4->tm_year + 0x76c;
    uVar22 = 0;
    goto LAB_00406810;
  case 0x5a:
    if (cVar5 != '\0') {
      cVar24 = '\0';
    }
    sVar19 = strlen(__s);
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar18 = (ulong)(int)uVar6;
    uVar29 = uVar18;
    if (uVar18 <= sVar19) {
      uVar29 = sVar19;
    }
    if ((ulong)(param_2 - lVar31) <= uVar29) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (sVar19 < uVar18) {
        sVar17 = (long)(int)uVar20 - sVar19;
        pcVar11 = param_1 + sVar17;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar17);
        }
        else {
          memset(param_1,0x20,sVar17);
        }
      }
      if (cVar5 == '\0') {
        if (cVar24 == '\0') {
          memcpy(pcVar11,__s,sVar19);
        }
        else {
          FUN_00405ab0();
        }
      }
      else {
        FUN_00405a60();
      }
      param_1 = pcVar11 + sVar19;
    }
    lVar31 = lVar31 + uVar29;
    goto LAB_00405b8e;
  case 0x62:
  case 0x68:
    if (cVar5 != '\0') {
      cVar24 = cVar5;
    }
    if (uVar14 == 0) goto LAB_00405d20;
    break;
  case 100:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_mday;
      local_478 = 2;
      goto LAB_00406290;
    }
    break;
  case 0x65:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_mday;
LAB_00406461:
      local_478 = 2;
      if ((uVar26 != 0x30) && (uVar26 != 0x2d)) {
        uVar26 = 0x5f;
      }
      goto LAB_00406290;
    }
    break;
  case 0x6a:
    if (uVar14 != 0x45) {
      bVar4 = false;
      local_478 = 3;
      bVar32 = param_4->tm_yday < -1;
      uVar6 = param_4->tm_yday + 1;
      uVar22 = 0;
      goto LAB_0040629f;
    }
    break;
  case 0x6b:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_hour;
      goto LAB_00406461;
    }
    break;
  case 0x6c:
    if (uVar14 != 0x45) goto LAB_00406461;
    break;
  case 0x6d:
    if (uVar14 != 0x45) {
      bVar4 = false;
      local_478 = 2;
      bVar32 = param_4->tm_mon < -1;
      uVar6 = param_4->tm_mon + 1;
      uVar22 = 0;
      goto LAB_0040629f;
    }
    break;
  case 0x6e:
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar29 = (ulong)(int)uVar6;
    if (uVar29 == 0) {
      uVar29 = 1;
    }
    if ((ulong)(param_2 - lVar31) <= uVar29) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (1 < (int)uVar20) {
        sVar19 = (long)(int)uVar20 - 1;
        pcVar11 = param_1 + sVar19;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar19);
        }
        else {
          memset(param_1,0x20,sVar19);
        }
      }
      *pcVar11 = '\n';
      param_1 = pcVar11 + 1;
    }
    goto LAB_00406526;
  case 0x70:
    cVar28 = '\0';
LAB_00406435:
    cVar13 = 'p';
    if (cVar5 != '\0') {
      cVar24 = '\0';
      cVar28 = cVar5;
    }
LAB_00405e5d:
    if (uVar14 != 0) {
      uVar8 = 0;
      goto LAB_004062bf;
    }
    goto LAB_00405d40;
  case 0x71:
    uVar8 = 1;
    local_478 = 1;
    if (uVar14 == 0x4f) goto LAB_004062b2;
    bVar4 = false;
    bVar32 = false;
    uVar22 = 0;
    uVar6 = (param_4->tm_mon * 0xb >> 5) + 1;
    goto LAB_00406560;
  case 0x72:
switchD_00405c61_caseD_72:
    cVar28 = '\0';
    goto LAB_00405e5d;
  case 0x73:
    pcVar9 = local_442 + 1;
    local_418 = *(undefined *)&param_4->tm_isdst;
    lStack_410 = param_4->tm_gmtoff;
    local_438 = *(undefined *)param_4;
    uStack_430 = *(undefined *)&param_4->tm_hour;
    local_428 = *(undefined *)&param_4->tm_mon;
    uStack_420 = *(undefined *)&param_4->tm_wday;
    local_408 = param_4->tm_zone;
    lVar10 = FUN_0040c500(param_7,&local_438);
    lVar30 = lVar10;
    do {
      lVar3 = lVar30 / 10;
      cVar5 = (char)lVar30 + (char)lVar3 * -10;
      if (lVar10 < 0) {
        cVar5 = -cVar5;
      }
      pcVar9 = pcVar9 + -1;
      *pcVar9 = cVar5 + '0';
      lVar30 = lVar3;
    } while (lVar3 != 0);
    local_478 = 1;
    if (0 < (int)uVar20) {
      local_478 = uVar20;
    }
    if (lVar10 < 0) goto LAB_00406ca8;
    goto LAB_00405f4d;
  case 0x74:
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar29 = (ulong)(int)uVar6;
    if (uVar29 == 0) {
      uVar29 = 1;
    }
    if ((ulong)(param_2 - lVar31) <= uVar29) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (1 < (int)uVar20) {
        sVar19 = (long)(int)uVar20 - 1;
        pcVar11 = param_1 + sVar19;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar19);
        }
        else {
          memset(param_1,0x20,sVar19);
        }
      }
      *pcVar11 = '\t';
      param_1 = pcVar11 + 1;
    }
LAB_00406526:
    lVar31 = lVar31 + uVar29;
    goto LAB_00405b8e;
  case 0x75:
    uVar6 = (param_4->tm_wday + 6) % 7 + 1;
    local_478 = 1;
    goto LAB_00406290;
  case 0x77:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_wday;
      local_478 = 1;
      goto LAB_00406290;
    }
    break;
  case 0x79:
    if (uVar14 == 0x45) goto LAB_00406f1c;
    local_478 = 2;
    uVar8 = param_4->tm_year % 100;
    uVar6 = uVar8;
    if ((int)uVar8 < 0) {
      uVar6 = uVar8 + 100;
      if (param_4->tm_year < -0x76c) {
        uVar6 = -uVar8;
      }
    }
LAB_00406290:
    bVar4 = false;
    uVar22 = 0;
    bVar32 = SUB41(uVar6 >> 0x1f,0);
LAB_0040629f:
    if (uVar14 == 0x4f) {
      uVar8 = local_478;
      if (bVar32 != false) {
LAB_00406819:
        uVar6 = -uVar6;
        goto LAB_00406560;
      }
LAB_004062b2:
      cVar28 = '\0';
LAB_004062bf:
      local_456 = (char)uVar14;
      pcVar11 = local_455;
      uVar14 = uVar8;
LAB_00405d40:
      local_458 = 0x2520;
      *pcVar11 = cVar13;
      pcVar11[1] = '\0';
      sVar19 = strftime((char *)&local_438,0x400,(char *)&local_458,param_4);
      pcVar9 = param_3;
      if (sVar19 == 0) goto LAB_00405b8e;
      local_498 = (char *)(sVar19 - 1);
      uVar6 = 0;
      if (-1 < (int)uVar20) {
        uVar6 = uVar20;
      }
      pcVar9 = (char *)(long)(int)uVar6;
      pcVar16 = pcVar9;
      if (pcVar9 <= local_498) {
        pcVar16 = local_498;
      }
      if ((char *)(param_2 - lVar31) <= pcVar16) {
        return 0;
      }
      if (param_1 != (char *)0x0) {
        pcVar11 = param_1;
        if ((uVar14 == 0) && (local_498 < pcVar9)) {
          sVar19 = (long)(int)uVar20 - (long)local_498;
          pcVar11 = param_1 + sVar19;
          if (uVar26 == 0x30) {
            memset(param_1,0x30,sVar19);
          }
          else {
            memset(param_1,0x20,sVar19);
          }
        }
        pcVar9 = (char *)((long)&local_438 + 1);
        local_488 = param_3;
        if (cVar28 == '\0') goto LAB_00405e2b;
        FUN_00405a60();
        goto LAB_00405e43;
      }
    }
    else {
LAB_00406810:
      if (bVar32 != false) goto LAB_00406819;
LAB_00406560:
      pcVar9 = local_442 + 1;
      do {
        pcVar11 = pcVar9;
        pcVar27 = pcVar9 + -1;
        if ((uVar22 & 1) != 0) {
          pcVar9[-1] = ':';
          pcVar11 = pcVar9 + -1;
          pcVar27 = pcVar9 + -2;
        }
        pcVar9 = pcVar27;
        uVar22 = (int)uVar22 >> 1;
        uVar14 = (uint)((ulong)uVar6 / 10);
        pcVar11[-1] = (char)uVar6 + (char)((ulong)uVar6 / 10) * -10 + '0';
        bVar2 = 9 < uVar6;
        uVar6 = uVar14;
      } while ((bVar2) || (uVar22 != 0));
      if ((int)local_478 < (int)uVar20) {
        local_478 = uVar20;
      }
      if (bVar32 == false) {
        if (bVar4) {
          if (uVar26 == 0x2d) {
            cVar13 = '+';
            goto LAB_00406cbc;
          }
          cVar5 = '+';
LAB_004065f0:
          local_498 = local_442 + (1 - (long)pcVar9);
          iVar23 = (local_478 - 1) - (int)local_498;
          pcVar11 = (char *)(param_2 - lVar31);
          if (iVar23 < 1) {
            uVar6 = 0;
            if (-1 < (int)uVar20) {
              uVar6 = uVar20;
            }
            pcVar27 = (char *)(long)(int)uVar6;
            pcVar16 = (char *)0x1;
            if (pcVar27 != (char *)0x0) {
              pcVar16 = pcVar27;
            }
            if (pcVar11 <= pcVar16) {
              return 0;
            }
            if (param_1 != (char *)0x0) {
              pcVar11 = param_1;
              if ((local_478 == 0) && ((char *)0x1 < pcVar27)) {
                sVar19 = (long)(int)uVar20 - 1;
                pcVar11 = param_1 + sVar19;
                local_478 = 0;
                if (uVar26 == 0x30) {
                  memset(param_1,0x30,sVar19);
                }
                else {
                  memset(param_1,0x20,sVar19);
                }
              }
              param_1 = pcVar11 + 1;
              *pcVar11 = cVar5;
            }
            lVar31 = lVar31 + (long)pcVar16;
            pcVar11 = (char *)(param_2 - lVar31);
          }
          else {
            if (uVar26 != 0x5f) {
              if (pcVar11 <= (char *)(long)(int)local_478) {
                return 0;
              }
              uVar6 = 0;
              if (-1 < (int)uVar20) {
                uVar6 = uVar20;
              }
              pcVar16 = (char *)(long)(int)uVar6;
              pcVar27 = (char *)0x1;
              if (pcVar16 != (char *)0x0) {
                pcVar27 = pcVar16;
              }
              if (pcVar11 <= pcVar27) {
                return 0;
              }
              lVar31 = lVar31 + (long)pcVar27;
              sVar19 = (size_t)iVar23;
              if (param_1 != (char *)0x0) {
                pcVar11 = param_1;
                if ((local_478 == 0) && ((char *)0x1 < pcVar16)) {
                  sVar17 = (long)(int)uVar20 - 1;
                  pcVar11 = param_1 + sVar17;
                  local_480 = 0;
                  local_478 = local_480;
                  if (uVar26 == 0x30) {
                    memset(param_1,0x30,sVar17);
                  }
                  else {
                    memset(param_1,0x20,sVar17);
                  }
                }
                param_1 = pcVar11 + 1;
                *pcVar11 = cVar5;
                goto LAB_004066c5;
              }
              goto LAB_00406710;
            }
LAB_00406e73:
            pcVar27 = (char *)(long)iVar23;
            if (pcVar11 <= pcVar27) {
              return 0;
            }
            if (param_1 != (char *)0x0) {
              memset(param_1,0x20,(size_t)pcVar27);
              param_1 = param_1 + (long)pcVar27;
            }
            lVar31 = lVar31 + (long)pcVar27;
            uVar6 = uVar20 - iVar23;
            bVar32 = iVar23 < (int)uVar20;
            uVar20 = 0;
            if (bVar32) {
              uVar20 = uVar6;
            }
            pcVar11 = (char *)(param_2 - lVar31);
            if (cVar5 == '\0') {
              pcVar27 = (char *)(long)(int)uVar20;
              uVar26 = 0x5f;
              local_498 = local_442 + (1 - (long)pcVar9);
            }
            else {
              pcVar27 = (char *)(long)(int)uVar20;
              pcVar16 = (char *)0x1;
              if (pcVar27 != (char *)0x0) {
                pcVar16 = pcVar27;
              }
              if (pcVar11 <= pcVar16) {
                return 0;
              }
              if (param_1 != (char *)0x0) {
                pcVar11 = param_1;
                if ((local_478 == 0) && ((char *)0x1 < pcVar27)) {
                  pcVar11 = param_1 + (long)(pcVar27 + -1);
                  memset(param_1,0x20,(size_t)(pcVar27 + -1));
                  local_478 = 0;
                }
                param_1 = pcVar11 + 1;
                *pcVar11 = cVar5;
              }
              lVar31 = lVar31 + (long)pcVar16;
              uVar26 = 0x5f;
              local_498 = local_442 + (1 - (long)pcVar9);
              pcVar11 = (char *)(param_2 - lVar31);
            }
          }
        }
        else {
LAB_00405f4d:
          local_498 = local_442 + (1 - (long)pcVar9);
          pcVar11 = (char *)(param_2 - lVar31);
          if ((uVar26 == 0x2d) || (iVar23 = local_478 - (int)local_498, iVar23 < 1)) {
            uVar6 = 0;
            if (-1 < (int)uVar20) {
              uVar6 = uVar20;
            }
            pcVar27 = (char *)(long)(int)uVar6;
            goto LAB_00405f86;
          }
          if (uVar26 == 0x5f) {
            cVar5 = '\0';
            goto LAB_00406e73;
          }
          if (pcVar11 <= (char *)(long)(int)local_478) {
            return 0;
          }
          sVar19 = (size_t)iVar23;
LAB_004066c5:
          if (param_1 != (char *)0x0) {
            memset(param_1,0x30,sVar19);
            param_1 = param_1 + sVar19;
          }
LAB_00406710:
          lVar31 = lVar31 + sVar19;
          uVar20 = 0;
          pcVar27 = (char *)0x0;
          pcVar11 = (char *)(param_2 - lVar31);
        }
      }
      else {
LAB_00406ca8:
        cVar5 = '-';
        cVar13 = '-';
        if (uVar26 != 0x2d) goto LAB_004065f0;
LAB_00406cbc:
        uVar6 = 0;
        if (-1 < (int)uVar20) {
          uVar6 = uVar20;
        }
        pcVar27 = (char *)(long)(int)uVar6;
        pcVar11 = (char *)0x1;
        if (pcVar27 != (char *)0x0) {
          pcVar11 = pcVar27;
        }
        if ((char *)(param_2 - lVar31) <= pcVar11) {
          return 0;
        }
        if (param_1 != (char *)0x0) {
          if ((local_478 == 0) && ((char *)0x1 < pcVar27)) {
            memset(param_1,0x20,(long)(int)uVar20 - 1U);
            local_480 = 0;
            param_1 = param_1 + ((long)(int)uVar20 - 1U);
            local_478 = local_480;
          }
          *param_1 = cVar13;
          param_1 = param_1 + 1;
        }
        lVar31 = lVar31 + (long)pcVar11;
        uVar26 = 0x2d;
        local_498 = local_442 + (1 - (long)pcVar9);
        pcVar11 = (char *)(param_2 - lVar31);
      }
LAB_00405f86:
      pcVar16 = pcVar27;
      if (pcVar27 <= local_498) {
        pcVar16 = local_498;
      }
      if (pcVar11 <= pcVar16) {
        return 0;
      }
      if (param_1 != (char *)0x0) {
        pcVar11 = param_1;
        local_488 = param_3;
        if ((local_478 == 0) && (local_498 < pcVar27)) {
          sVar19 = (long)(int)uVar20 - (long)local_498;
          pcVar11 = param_1 + sVar19;
          if (uVar26 == 0x30) {
            memset(param_1,0x30,sVar19);
          }
          else {
            memset(param_1,0x20,sVar19);
          }
        }
LAB_00405e2b:
        if (cVar24 == '\0') {
          memcpy(pcVar11,pcVar9,(size_t)local_498);
        }
        else {
          FUN_00405ab0();
        }
LAB_00405e43:
        param_1 = pcVar11 + (long)local_498;
        param_3 = local_488;
      }
    }
    lVar31 = lVar31 + (long)pcVar16;
    pcVar9 = param_3;
    goto LAB_00405b8e;
  case 0x7a:
    lVar30 = 0;
LAB_00406a20:
    if (param_4->tm_isdst < 0) goto LAB_00405b8e;
    bVar32 = true;
    iVar23 = (int)param_4->tm_gmtoff;
    if ((-1 < iVar23) && (bVar32 = false, iVar23 == 0)) {
      bVar32 = *__s == '-';
    }
    uVar6 = iVar23 / 0xe10;
    uVar8 = (iVar23 / 0x3c) % 0x3c;
    param_3 = pcVar9;
    if (lVar30 == 1) {
LAB_00407176:
      local_478 = 6;
      bVar4 = true;
      uVar6 = uVar6 * 100 + uVar8;
      uVar22 = 4;
    }
    else if (lVar30 == 0) {
      uVar22 = 0;
      bVar4 = true;
      local_478 = 5;
      uVar6 = uVar6 * 100 + uVar8;
    }
    else {
      if (lVar30 != 2) {
        if (lVar30 != 3) {
          cVar5 = *pcVar9;
          goto LAB_00406ad7;
        }
        if (iVar23 % 0x3c == 0) {
          if (uVar8 != 0) goto LAB_00407176;
          local_478 = 3;
          bVar4 = true;
          uVar22 = uVar8;
          goto LAB_0040629f;
        }
      }
      local_478 = 9;
      bVar4 = true;
      uVar22 = 0x14;
      uVar6 = iVar23 % 0x3c + uVar6 * 10000 + uVar8 * 100;
    }
    goto LAB_0040629f;
  }
  pcVar11 = param_3 + -1;
  do {
    pcVar9 = pcVar11;
    pcVar11 = pcVar9 + -1;
  } while (*pcVar9 != '%');
  __n = (ulong)(((int)(param_3 + -1) + 2) - (int)pcVar9);
  uVar18 = param_2 - lVar31;
  uVar6 = 0;
  if (-1 < (int)uVar20) {
    uVar6 = uVar20;
  }
  uVar12 = (ulong)(int)uVar6;
  uVar29 = uVar12;
  if (uVar12 <= __n) {
    uVar29 = __n;
  }
LAB_00406983:
  if (uVar18 <= uVar29) {
    return 0;
  }
  if (param_1 != (char *)0x0) {
    pcVar11 = param_1;
    if (__n < uVar12) {
      sVar19 = (long)(int)uVar20 - __n;
      pcVar11 = param_1 + sVar19;
      if (uVar26 == 0x30) {
        memset(param_1,0x30,sVar19);
      }
      else {
        memset(param_1,0x20,sVar19);
      }
    }
    if (cVar24 == '\0') {
      memcpy(pcVar11,pcVar9,__n);
    }
    else {
      FUN_00405ab0();
    }
    param_1 = pcVar11 + __n;
  }
  lVar31 = lVar31 + uVar29;
  pcVar9 = param_3;
LAB_00405b8e:
  cVar5 = pcVar9[1];
  param_3 = pcVar9 + 1;
  if (cVar5 == '\0') goto LAB_00405b9b;
  goto LAB_00405b6a;
}


void FUN_004072d0(void)

{
  FUN_00405b00();
  return;
}


void FUN_004072f0(byte *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  
  bVar10 = 0;
  if (param_1 == (byte *)0x0) {
    fwrite("A NULL argv[0] was passed through an exec system call.\n",1,0x37,stderr);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar2 = strrchr((char *)param_1,0x2f);
  if (pcVar2 != (char *)0x0) {
    pbVar1 = (byte *)(pcVar2 + 1);
    uVar4 = (long)pbVar1 - (long)param_1;
    bVar7 = uVar4 < 6;
    bVar9 = uVar4 == 6;
    if (6 < (long)uVar4) {
      lVar3 = 7;
      pbVar5 = (byte *)(pcVar2 + -6);
      pbVar6 = &DAT_00412550;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar7 = *pbVar5 < *pbVar6;
        bVar9 = *pbVar5 == *pbVar6;
        pbVar5 = pbVar5 + (ulong)bVar10 * -2 + 1;
        pbVar6 = pbVar6 + (ulong)bVar10 * -2 + 1;
      } while (bVar9);
      bVar8 = false;
      bVar7 = (!bVar7 && !bVar9) == bVar7;
      if (bVar7) {
        lVar3 = 3;
        pbVar5 = pbVar1;
        pbVar6 = &DAT_00412558;
        do {
          if (lVar3 == 0) break;
          lVar3 = lVar3 + -1;
          bVar8 = *pbVar5 < *pbVar6;
          bVar7 = *pbVar5 == *pbVar6;
          pbVar5 = pbVar5 + (ulong)bVar10 * -2 + 1;
          pbVar6 = pbVar6 + (ulong)bVar10 * -2 + 1;
        } while (bVar7);
        param_1 = pbVar1;
        if ((!bVar8 && !bVar7) == bVar8) {
          param_1 = (byte *)(pcVar2 + 4);
          program_invocation_short_name = param_1;
        }
      }
    }
  }
  DAT_00617498 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00407390(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_0040c750();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00407468:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00412569;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0041255e;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00407468;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00412565;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00412562;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00407490(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
                  uint param_6,long param_7,char *param_8,char *param_9)

{
  byte *__s1;
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  ulong uVar9;
  ushort **ppuVar10;
  long lVar11;
  char *pcVar12;
  byte bVar13;
  char cVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  uint uVar18;
  ulong uVar19;
  bool bVar20;
  ulong uVar21;
  ulong uVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  size_t local_a0;
  char *local_78;
  ulong local_70;
  bool local_5c;
  bool local_5b;
  wint_t local_44;
  mbstate_t local_40 [2];
  
  sVar8 = __ctype_get_mb_cur_max();
  uVar18 = param_6 & 2;
  local_5c = uVar18 != 0;
  uVar9 = param_2;
  switch(param_5) {
  case 0:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    local_5b = false;
    local_70 = 0;
    local_5c = false;
    bVar6 = false;
    local_a0 = 0;
    local_78 = (char *)0x0;
    break;
  case 2:
    if (uVar18 != 0) {
      bVar2 = true;
      bVar3 = false;
      uVar15 = 0;
      local_5b = false;
      local_70 = 0;
      local_5c = true;
      bVar6 = false;
      local_a0 = 1;
      local_78 = "\'";
      break;
    }
    bVar6 = false;
LAB_004080e1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00407d16;
    }
    bVar2 = true;
    bVar3 = false;
    uVar15 = 1;
    param_5 = 2;
    local_70 = 0;
    local_5b = false;
    local_5c = false;
    local_a0 = 1;
    local_78 = "\'";
    break;
  case 3:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    param_5 = 2;
    local_5b = false;
    local_70 = 0;
    local_5c = true;
    bVar6 = true;
    local_a0 = 1;
    local_78 = "\'";
    break;
  case 4:
    if (uVar18 == 0) {
      bVar6 = true;
      goto LAB_004080e1;
    }
  case 1:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    param_5 = 2;
    local_5b = false;
    local_70 = 0;
    local_5c = true;
    bVar6 = false;
    local_a0 = 1;
    local_78 = "\'";
    break;
  case 5:
    if (uVar18 == 0) {
      if (param_2 != 0) {
        *param_1 = 0x22;
      }
      local_5b = false;
      local_70 = 0;
      bVar2 = true;
      bVar3 = false;
      local_5c = false;
      uVar15 = 1;
      bVar6 = true;
      local_a0 = 1;
      local_78 = "\"";
    }
    else {
      bVar2 = true;
      bVar3 = false;
      uVar15 = 0;
      local_5b = false;
      local_70 = 0;
      local_5c = true;
      bVar6 = true;
      local_a0 = 1;
      local_78 = "\"";
    }
    break;
  case 6:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    param_5 = 5;
    local_5b = false;
    local_70 = 0;
    local_5c = true;
    bVar6 = true;
    local_a0 = 1;
    local_78 = "\"";
    break;
  case 7:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    local_5b = false;
    local_70 = 0;
    local_5c = false;
    bVar6 = true;
    local_a0 = 0;
    local_78 = (char *)0x0;
    break;
  case 8:
  case 9:
  case 10:
    if (param_5 != 10) {
      param_8 = (char *)FUN_00407390(&DAT_0041256d,param_5);
      param_9 = (char *)FUN_00407390(&DAT_0041367c);
    }
    uVar15 = 0;
    if (uVar18 == 0) {
      cVar14 = *param_8;
      while (cVar14 != '\0') {
        if (uVar15 < param_2) {
          param_1[uVar15] = cVar14;
        }
        uVar15 = uVar15 + 1;
        cVar14 = param_8[uVar15];
      }
    }
    local_a0 = strlen(param_9);
    bVar2 = true;
    bVar3 = false;
    local_78 = param_9;
    local_5b = false;
    local_70 = 0;
    bVar6 = true;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_00407528:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00407538:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00407cb8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00407c30:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00407c42_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00407aae_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00407945;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00407c42_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00407c42_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00407c42_caseD_b:
        bVar17 = 0x76;
        goto LAB_00407945;
      case 0xc:
switchD_00407c42_caseD_c:
        bVar17 = 0x66;
LAB_00407945:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00407898;
        }
LAB_00407950:
        bVar23 = false;
        goto LAB_0040770b;
      case 0xd:
        bVar20 = false;
switchD_00407628_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00407860;
      case 0x20:
        bVar25 = false;
LAB_00407c8a:
        uVar19 = 0x20;
        goto LAB_00407c52;
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
        bVar20 = false;
switchD_00407628_caseD_21:
        bVar25 = false;
        goto LAB_0040786b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00407c6a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00407678;
        }
        bVar23 = false;
        goto LAB_0040768f;
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
        bVar25 = false;
LAB_00407c52:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00407691;
      case 0x27:
        bVar20 = false;
        goto switchD_00407aae_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00407aae_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00407628_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00407aae_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00407887;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00407c30;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00407628_caseD_0;
      default:
        goto switchD_00407aae_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00407950;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00407c42_caseD_9;
      case 10:
        goto switchD_00407c42_caseD_a;
      case 0xb:
        goto switchD_00407c42_caseD_b;
      case 0xc:
        goto switchD_00407c42_caseD_c;
      case 0xd:
        goto switchD_00407628_caseD_d;
      case 0x20:
        goto LAB_00407c8a;
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
        goto switchD_00407628_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00407c6a;
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
        goto LAB_00407c52;
      case 0x27:
        goto switchD_00407aae_caseD_27;
      case 0x3f:
        goto switchD_00407aae_caseD_3f;
      case 0x5c:
        goto switchD_00407628_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00407aae_caseD_7b;
      }
      goto LAB_004076d2;
    }
    goto LAB_004078aa;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00407c42_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00407628_caseD_0:
        bVar26 = param_5 == 2;
        bVar24 = (bool)((bVar3 ^ 1U) & bVar26);
        if (bVar24) {
          if (uVar15 < uVar9) {
            param_1[uVar15] = 0x27;
          }
          if (uVar15 + 1 < uVar9) {
            param_1[uVar15 + 1] = 0x24;
          }
          if (uVar15 + 2 < uVar9) {
            param_1[uVar15 + 2] = 0x27;
          }
          uVar16 = uVar15 + 3;
          bVar3 = bVar24;
          if (uVar9 <= uVar15 + 3) {
            uVar16 = uVar15 + 4;
            bVar23 = false;
            bVar17 = 0x30;
            bVar4 = bVar24;
            goto LAB_00407788;
          }
LAB_004079ca:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_004079ca;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00407788;
        }
        uVar19 = 0x30;
        if ((uVar22 + 1 < param_4) && ((byte)(param_3[uVar22 + 1] - 0x30U) < 10)) {
          if (uVar16 < uVar9) {
            param_1[uVar16] = 0x30;
          }
          if (uVar15 + 2 < uVar9) {
            param_1[uVar15 + 2] = 0x30;
          }
          uVar16 = uVar15 + 3;
          uVar19 = 0x30;
        }
LAB_00407a09:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00407788;
        goto LAB_00407691;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040789c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00407678;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00407538;
  default:
switchD_00407aae_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_0040ae50(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_004083ba;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_004084f7;
          goto LAB_004084e7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040789c;
            }
            pcVar12 = pcVar12 + 1;
          } while (param_3 + uVar1 + lVar11 != pcVar12);
        }
        iVar7 = iswprint(local_44);
        if (iVar7 == 0) {
          bVar23 = false;
        }
        uVar21 = uVar21 + lVar11;
        iVar7 = mbsinit(local_40);
      } while (iVar7 == 0);
      bVar25 = (bool)((bVar23 ^ 1U) & bVar6);
      goto LAB_004083ba;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00407a84;
  case 7:
    bVar25 = param_5 == 2;
    uVar19 = 7;
    bVar13 = 0x61;
    break;
  case 8:
    bVar25 = param_5 == 2;
    uVar19 = 8;
    bVar13 = 0x62;
    break;
  case 9:
    uVar19 = 9;
    bVar13 = 0x74;
    goto LAB_00407ac2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00407ac2;
  case 0xb:
    bVar25 = param_5 == 2;
    uVar19 = 0xb;
    bVar13 = 0x76;
    break;
  case 0xc:
    bVar25 = param_5 == 2;
    uVar19 = 0xc;
    bVar13 = 0x66;
    break;
  case 0xd:
    uVar19 = 0xd;
    bVar13 = 0x72;
LAB_00407ac2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00407ada:
      param_5 = 2;
      goto LAB_0040789c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00407666;
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
    bVar23 = false;
LAB_00407666:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00407ada;
    goto LAB_00407678;
  case 0x23:
  case 0x7e:
LAB_0040765d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00407666;
    goto LAB_0040786b;
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
    goto switchD_00407aae_caseD_25;
  case 0x27:
switchD_00407aae_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00407678;
    }
    if (!local_5c) {
      if ((uVar9 == 0) || (uVar19 = 0, uVar21 = uVar9, local_70 != 0)) {
        if (uVar15 < uVar9) {
          param_1[uVar15] = 0x27;
        }
        if (uVar15 + 1 < uVar9) {
          param_1[uVar15 + 1] = 0x5c;
        }
        uVar19 = uVar9;
        uVar21 = local_70;
        if (uVar15 + 2 < uVar9) {
          param_1[uVar15 + 2] = 0x27;
        }
      }
      uVar16 = uVar15 + 3;
      bVar17 = 0x27;
      uVar9 = uVar19;
      local_70 = uVar21;
      bVar24 = false;
      bVar4 = false;
      goto LAB_00407788;
    }
    goto LAB_0040789c;
  case 0x3f:
switchD_00407aae_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00407788;
      }
      goto LAB_0040789c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00407678;
    }
    if (((((param_6 & 4) != 0) && (uVar21 = uVar22 + 2, uVar21 < param_4)) &&
        (param_3[uVar22 + 1] == '?')) &&
       ((uVar19 = (ulong)(byte)param_3[uVar21], (byte)param_3[uVar21] < 0x3f &&
        ((0x7000a38200000000U >> (uVar19 & 0x3f) & 1) != 0)))) {
      if (!local_5c) {
        if (uVar15 < uVar9) {
          param_1[uVar15] = 0x3f;
        }
        if (uVar15 + 1 < uVar9) {
          param_1[uVar15 + 1] = 0x22;
        }
        if (uVar15 + 2 < uVar9) {
          param_1[uVar15 + 2] = 0x22;
        }
        if (uVar15 + 3 < uVar9) {
          param_1[uVar15 + 3] = 0x3f;
        }
        uVar16 = uVar15 + 4;
        bVar26 = false;
        uVar22 = uVar21;
        bVar24 = false;
        goto LAB_00407a09;
      }
      goto LAB_004078aa;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00407678;
  case 0x5c:
    if (param_5 != 2) {
switchD_00407628_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_004077a4;
    }
    if (local_5c) goto LAB_0040789c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_004077a4;
  case 0x7b:
  case 0x7d:
switchD_00407aae_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040765d;
    goto LAB_0040786b;
  }
LAB_00407860:
  if (!bVar6) {
LAB_0040786b:
    bVar23 = false;
    goto LAB_00407678;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00407887;
LAB_00407cb8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040789c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_004078aa:
    uVar9 = FUN_00407490(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040858d:
    uVar22 = uVar15;
    if (((local_78 != (char *)0x0) && (bVar23)) && (cVar14 = *local_78, cVar14 != '\0')) {
      do {
        if (uVar22 < uVar9) {
          param_1[uVar22] = cVar14;
        }
        uVar22 = uVar22 + 1;
        cVar14 = local_78[uVar22 - uVar15];
      } while (cVar14 != '\0');
    }
    if (uVar22 < uVar9) {
      param_1[uVar22] = 0;
    }
    return uVar22;
  }
  if (bVar2) {
    uVar9 = FUN_00407490(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040858d;
LAB_00407d16:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00407528;
  while (__s1[uVar21] != 0) {
LAB_004084e7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_004084f7:
  bVar23 = false;
LAB_004083ba:
  if (1 < uVar21) {
LAB_00407f7e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040789c;
        bVar26 = (bool)(bVar26 & (bVar4 ^ 1U));
        if (bVar26) {
          if (uVar15 < uVar9) {
            param_1[uVar15] = 0x27;
          }
          if (uVar15 + 1 < uVar9) {
            param_1[uVar15 + 1] = 0x24;
          }
          if (uVar15 + 2 < uVar9) {
            param_1[uVar15 + 2] = 0x27;
          }
          uVar15 = uVar15 + 3;
          bVar4 = bVar26;
        }
        if (uVar15 < uVar9) {
          param_1[uVar15] = 0x5c;
        }
        if (uVar15 + 1 < uVar9) {
          param_1[uVar15 + 1] = (char)(uVar19 >> 6) + '0';
        }
        if (uVar15 + 2 < uVar9) {
          param_1[uVar15 + 2] = ((byte)(uVar19 >> 3) & 7) + 0x30;
        }
        uVar22 = uVar16 + 1;
        uVar15 = uVar15 + 3;
        bVar17 = (bVar17 & 7) + 0x30;
        bVar26 = bVar25;
        if (uVar21 <= uVar22) goto LAB_0040771d;
      }
      else {
        bVar3 = (bool)((bVar26 ^ 1U) & bVar4);
        if (bVar20) {
          if (uVar15 < uVar9) {
            param_1[uVar15] = 0x5c;
          }
          uVar15 = uVar15 + 1;
        }
        uVar22 = uVar16 + 1;
        if (uVar21 <= uVar22) goto LAB_004077a4;
        if (bVar3) {
          if (uVar15 < uVar9) {
            param_1[uVar15] = 0x27;
          }
          if (uVar15 + 1 < uVar9) {
            param_1[uVar15 + 1] = 0x27;
          }
          uVar15 = uVar15 + 2;
          bVar20 = false;
          bVar4 = false;
        }
        else {
          bVar20 = false;
        }
      }
      uVar16 = uVar16 + 1;
      if (uVar15 < uVar9) {
        param_1[uVar15] = bVar17;
      }
      uVar19 = (ulong)(byte)param_3[uVar16];
      uVar15 = uVar15 + 1;
    } while( true );
  }
LAB_00407a84:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00407f7e;
  }
switchD_00407aae_caseD_25:
  bVar25 = param_5 == 2;
LAB_00407678:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040768f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00407691:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00407788;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00407788:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_004077a4:
      if (bVar3) {
        if (uVar15 < uVar9) {
          param_1[uVar15] = 0x27;
        }
        if (uVar15 + 1 < uVar9) {
          param_1[uVar15 + 1] = 0x27;
        }
        uVar15 = uVar15 + 2;
        bVar4 = false;
      }
      goto LAB_0040771d;
    }
  }
joined_r0x00407887:
  if (local_5c) {
LAB_00407898:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040789c;
  }
LAB_004076d2:
  bVar25 = (bool)((bVar3 ^ 1U) & bVar25);
  if (bVar25) {
    if (uVar15 < uVar9) {
      param_1[uVar15] = 0x27;
    }
    if (uVar15 + 1 < uVar9) {
      param_1[uVar15 + 1] = 0x24;
    }
    if (uVar15 + 2 < uVar9) {
      param_1[uVar15 + 2] = 0x27;
    }
    uVar15 = uVar15 + 3;
    bVar3 = bVar25;
  }
LAB_0040770b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040771d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00407538;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004086c0(int param_1,undefined param_2,undefined param_3,undefined *param_4)

{
  int iVar1;
  uint uVar2;
  undefined uVar3;
  ulong uVar4;
  undefined uVar5;
  undefined uVar6;
  int *piVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *__ptr;
  ulong *puVar10;
  
  piVar7 = __errno_location();
  iVar1 = *piVar7;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = (undefined *)PTR_DAT_00617378;
  if (DAT_00617390 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_004097b0();
    }
    if (PTR_DAT_00617378 == &DAT_00617380) {
      puVar8 = (undefined *)FUN_004095c0(0);
      uVar6 = PTR_DAT_00617388._4_4_;
      uVar5 = PTR_DAT_00617388._0_4_;
      uVar3 = _UNK_00617384;
      PTR_DAT_00617378 = (undefined *)puVar8;
      *puVar8 = _DAT_00617380;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_004095c0(PTR_DAT_00617378);
      PTR_DAT_00617378 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_00617390 * 4,0,(long)((param_1 + 1) - DAT_00617390) << 4);
    DAT_00617390 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00407490(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_006174a0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00409560(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00407490(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00408860(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006175a0;
  }
  FUN_00409760(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_004088a0(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006175a0;
  }
  return *param_1;
}


void FUN_004088b0(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006175a0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_004088c0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006175a0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00408900(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006175a0;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00408920(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006175a0;
  }
  *param_1 = 10;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(long *)(param_1 + 10) = param_2;
    *(long *)(param_1 + 0xc) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00408950(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_006175a0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00407490(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_004089d0(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_006175a0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00407490(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00409560(lVar3 + 1);
  FUN_00407490(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00408ac0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004089d0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408ad0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_00617378;
  if (1 < DAT_00617390) {
    ppvVar2 = (void **)(PTR_DAT_00617378 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_00617378 + (ulong)(DAT_00617390 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_006174a0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_00617380 = 0x100;
    PTR_DAT_00617388 = &DAT_006174a0;
  }
  if (__ptr_00 != &DAT_00617380) {
    free(__ptr_00);
    PTR_DAT_00617378 = &DAT_00617380;
  }
  DAT_00617390 = 1;
  return;
}


void FUN_00408b70(undefined param_1,undefined param_2)

{
  FUN_004086c0(param_1,param_2,0xffffffffffffffff,&DAT_006175a0);
  return;
}


void FUN_00408b90(void)

{
  FUN_004086c0();
  return;
}


void FUN_00408ba0(undefined param_1)

{
  FUN_004086c0(0,param_1,0xffffffffffffffff,&DAT_006175a0);
  return;
}


void FUN_00408bc0(undefined param_1,undefined param_2)

{
  FUN_004086c0(0,param_1,param_2,&DAT_006175a0);
  return;
}


void FUN_00408be0(undefined param_1,int param_2,undefined param_3)

{
  int local_48;
  undefined local_44;
  undefined local_40;
  undefined local_38;
  undefined local_30;
  undefined local_28;
  undefined local_20;
  undefined local_18;
  
  if (param_2 != 10) {
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_004086c0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00408c50(undefined param_1,int param_2,undefined param_3,undefined param_4)

{
  int local_48;
  undefined local_44;
  undefined local_40;
  undefined local_38;
  undefined local_30;
  undefined local_28;
  undefined local_20;
  undefined local_18;
  
  if (param_2 != 10) {
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_004086c0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00408cc0(undefined param_1,undefined param_2)

{
  FUN_00408be0(0,param_1,param_2);
  return;
}


void FUN_00408cd0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00408c50(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408ce0(undefined param_1,undefined param_2,byte param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  undefined uStack_20;
  undefined local_18;
  
  local_18 = DAT_006175d0;
  local_48 = _DAT_006175a0;
  uStack_40 = uRam00000000006175a8;
  local_38 = _DAT_006175b0;
  uStack_30 = uRam00000000006175b8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_006175c0;
  uStack_20 = uRam00000000006175c8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_004086c0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00408d50(undefined param_1,char param_2)

{
  FUN_00408ce0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00408d60(undefined param_1)

{
  FUN_00408ce0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00408d80(undefined param_1,undefined param_2)

{
  FUN_00408ce0(param_1,param_2,0x3a);
  return;
}


void FUN_00408d90(undefined param_1,int param_2,undefined param_3)

{
  int local_48;
  undefined local_44;
  undefined local_40;
  undefined local_38;
  undefined local_30;
  undefined local_28;
  undefined local_20;
  undefined local_18;
  
  if (param_2 != 10) {
    local_40 = 0x400000000000000;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_004086c0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408e00(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam00000000006175a8;
  local_38 = _DAT_006175b0;
  uStack_30 = uRam00000000006175b8;
  local_28 = _DAT_006175c0;
  lStack_20 = uRam00000000006175c8;
  local_18 = DAT_006175d0;
  local_48 = CONCAT44((int)((ulong)_DAT_006175a0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_004086c0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00408e70(void)

{
  FUN_00408e00();
  return;
}


void FUN_00408e80(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00408e00(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00408ea0(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00408e00(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00408ec0(void)

{
  FUN_004086c0();
  return;
}


void FUN_00408ed0(undefined param_1,undefined param_2)

{
  FUN_004086c0(0,param_1,param_2,&DAT_00617340);
  return;
}


void FUN_00408ef0(undefined param_1,undefined param_2)

{
  FUN_004086c0(param_1,param_2,0xffffffffffffffff,&DAT_00617340);
  return;
}


void FUN_00408f10(undefined param_1)

{
  FUN_004086c0(0,param_1,0xffffffffffffffff,&DAT_00617340);
  return;
}


int FUN_00408f30(int *param_1)

{
  int iVar1;
  long lVar2;
  
  *(undefined *)(param_1 + 2) = 0;
  iVar1 = FUN_0040c6a0(&DAT_00411fe4,0x80000);
  *param_1 = iVar1;
  if (-1 < iVar1) {
    return 0;
  }
  lVar2 = FUN_00409bb0(0,0);
  *(long *)(param_1 + 2) = lVar2;
  return -(uint)(lVar2 == 0);
}


void FUN_00408f80(int *param_1)

{
  if (-1 < *param_1) {
    fchdir(*param_1);
    return;
  }
  FUN_00409940(*(undefined *)(param_1 + 2));
  return;
}


void FUN_00408fa0(int *param_1)

{
  if (-1 < *param_1) {
    close(*param_1);
  }
  free(*(void **)(param_1 + 2));
  return;
}


undefined
FUN_00408fc0(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
            undefined param_6)

{
  undefined uVar1;
  char *pcVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined local_58;
  undefined local_50;
  undefined local_48;
  
  if (param_2 == 0) {
    __fprintf_chk(param_1,1,"%s %s\n",param_3,param_4);
  }
  else {
    __fprintf_chk(param_1,1,"%s (%s) %s\n",param_2,param_3,param_4);
  }
  uVar1 = dcgettext(0,&DAT_004132ab,5);
  __fprintf_chk(param_1,1,"Copyright %s %d Free Software Foundation, Inc.",uVar1,0x7e1);
  pcVar2 = (char *)dcgettext(0,
                             "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"
                             ,5);
  fputs_unlocked(pcVar2,param_1);
  switch(param_6) {
  case 0:
                    /* WARNING: Subroutine does not return */
    abort();
  case 1:
    uVar1 = *param_5;
    uVar4 = dcgettext(0,"Written by %s.\n",5);
    uVar1 = __fprintf_chk(param_1,1,uVar4,uVar1);
    return uVar1;
  case 2:
    uVar1 = param_5[1];
    uVar4 = *param_5;
    uVar5 = dcgettext(0,"Written by %s and %s.\n",5);
    uVar1 = __fprintf_chk(param_1,1,uVar5,uVar4,uVar1);
    return uVar1;
  case 3:
    uVar1 = param_5[2];
    uVar4 = param_5[1];
    uVar5 = *param_5;
    uVar6 = dcgettext(0,"Written by %s, %s, and %s.\n",5);
    uVar1 = __fprintf_chk(param_1,1,uVar6,uVar5,uVar4,uVar1);
    return uVar1;
  case 4:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
    goto LAB_0040923c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040923c:
    __fprintf_chk(param_1,1,uVar7,uVar6,uVar5,uVar4);
    return uVar1;
  case 6:
    local_58 = param_5[1];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    uVar1 = param_5[2];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
    goto LAB_004092d9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_004092d9:
    uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_58,uVar1,uVar6,uVar5,uVar4);
    return uVar1;
  case 8:
    local_48 = param_5[7];
    local_58 = param_5[2];
    local_50 = param_5[1];
    uVar1 = param_5[6];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
    goto LAB_004090ba;
  case 9:
    local_48 = param_5[7];
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
    local_58 = param_5[2];
    local_50 = param_5[1];
    uVar1 = param_5[6];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    uVar7 = *param_5;
    break;
  default:
    local_48 = param_5[7];
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    local_58 = param_5[2];
    local_50 = param_5[1];
    uVar1 = param_5[6];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    uVar7 = *param_5;
  }
  uVar3 = dcgettext(0,pcVar2,5);
LAB_004090ba:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_004093a0(void)

{
  long lVar1;
  long *in_R8;
  long lVar2;
  
  lVar2 = 0;
  lVar1 = *in_R8;
  while (lVar1 != 0) {
    lVar2 = lVar2 + 1;
    lVar1 = in_R8[lVar2];
  }
  FUN_00408fc0();
  return;
}


void FUN_004093c0(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint *in_R8;
  long lVar4;
  long local_58 [11];
  
  lVar4 = 0;
  do {
    uVar1 = *in_R8;
    if (uVar1 < 0x30) {
      *in_R8 = uVar1 + 8;
      lVar3 = *(long *)((ulong)uVar1 + *(long *)(in_R8 + 4));
      local_58[lVar4] = lVar3;
    }
    else {
      plVar2 = *(long **)(in_R8 + 2);
      *(long **)(in_R8 + 2) = plVar2 + 1;
      lVar3 = *plVar2;
      local_58[lVar4] = lVar3;
    }
  } while ((lVar3 != 0) && (lVar4 = lVar4 + 1, lVar4 != 10));
  FUN_00408fc0();
  return;
}


void FUN_00409420(void)

{
  long lVar1;
  undefined in_R8;
  ulong uVar2;
  undefined in_R9;
  long lVar3;
  long *plVar4;
  long local_88 [10];
  long local_38 [4];
  long local_18 [3];
  
  local_18[0] = in_R8;
  plVar4 = (long *)&stack0x00000008;
  uVar2 = 0x20;
  local_18[1] = in_R9;
  lVar3 = 0;
  do {
    if ((uint)uVar2 < 0x30) {
      lVar1 = *(long *)((long)local_38 + uVar2);
      local_88[lVar3] = lVar1;
      uVar2 = (ulong)((uint)uVar2 + 8);
    }
    else {
      lVar1 = *plVar4;
      local_88[lVar3] = lVar1;
      plVar4 = plVar4 + 1;
    }
  } while ((lVar1 != 0) && (lVar3 = lVar3 + 1, lVar3 != 10));
  FUN_00408fc0();
  return;
}


void FUN_004094e0(void)

{
  FILE *__stream;
  undefined uVar1;
  char *__s;
  
  uVar1 = dcgettext(0,"\nReport bugs to: %s\n",5);
  __printf_chk(1,uVar1,"bug-coreutils@gnu.org");
  uVar1 = dcgettext(0,"%s home page: <%s>\n",5);
  __printf_chk(1,uVar1,"GNU coreutils","https://www.gnu.org/software/coreutils/");
  __stream = stdout;
  __s = (char *)dcgettext(0,"General help using GNU software: <https://www.gnu.org/gethelp/>\n",5);
  fputs_unlocked(__s,__stream);
  return;
}


void FUN_00409560(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004097b0();
  }
  return;
}


void FUN_00409580(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00409560();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004097b0();
}


void thunk_FUN_00409560(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004097b0();
  }
  return;
}


void * FUN_004095c0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004097b0();
  }
  return pvVar1;
}


void FUN_00409600(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_004095c0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004097b0();
}


void FUN_00409630(long param_1,ulong *param_2,ulong param_3)

{
  undefined auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  if (param_1 == 0) {
    if (uVar2 == 0) {
      uVar2 = (ulong)(0x80 < param_3) +
              SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(param_3),0);
    }
    uVar3 = (ulong)(SUB168(ZEXT816(uVar2) * ZEXT816(param_3) >> 0x40,0) != 0);
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040968b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040968b:
                    /* WARNING: Subroutine does not return */
      FUN_004097b0(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_004095c0(param_1,uVar2 * param_3);
  return;
}


void FUN_004096c0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_004095c0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040970a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040970a:
                    /* WARNING: Subroutine does not return */
      FUN_004097b0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_004095c0(param_1,uVar1);
  return;
}


void FUN_00409710(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00409560();
  memset(__s,0,param_1);
  return;
}


void FUN_00409730(size_t param_1,ulong param_2)

{
  void *pvVar1;
  
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    pvVar1 = calloc(param_1,param_2);
    if (pvVar1 != (void *)0x0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004097b0();
}


void FUN_00409760(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00409560(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00409790(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00409560(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_004097b0(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_00617328,0,&DAT_0041209a,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_004097f0(void)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = FUN_00409bb0(0,0);
  if (lVar1 == 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_004097b0();
    }
  }
  return lVar1;
}


void FUN_00409820(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                 undefined param_9,undefined param_10,undefined param_11,undefined param_12,
                 undefined param_13,undefined param_14)

{
  char in_AL;
  undefined local_d0;
  undefined local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined local_b8 [8];
  undefined local_b0;
  undefined local_a8;
  undefined local_a0;
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
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c8 = &stack0x00000008;
  local_d0 = 8;
  local_c0 = local_b8;
  local_cc = 0x30;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  FUN_0040ce40(param_9,&local_d0);
  return;
}


void FUN_004098c0(int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    return;
  }
  iVar1 = close(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("! close_fail","lib/chdir-long.c",0x40,"cdb_free");
}


undefined FUN_00409900(int *param_1,char *param_2)

{
  int iVar1;
  undefined uVar2;
  
  iVar1 = openat(*param_1,param_2,0x10900);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_004098c0(*param_1);
    *param_1 = iVar1;
    uVar2 = 0;
  }
  return uVar2;
}


int FUN_00409940(char *param_1)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  undefined *puVar5;
  char *__s;
  int local_2c;
  
  iVar1 = chdir(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = __errno_location();
  if (*piVar2 != 0x24) {
    return iVar1;
  }
  sVar3 = strlen(param_1);
  local_2c = -100;
  if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 < len","lib/chdir-long.c",0x7e,"chdir_long");
  }
  if (sVar3 < 0x1000) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("4096 <= len","lib/chdir-long.c",0x7f,"chdir_long");
  }
  sVar4 = strspn(param_1,"/");
  if (sVar4 == 2) {
    puVar5 = (undefined *)FUN_0040aed0(param_1 + 3,0x2f,sVar3 - 3);
    if (puVar5 == (undefined *)0x0) {
      return -1;
    }
    *puVar5 = 0;
    iVar1 = FUN_00409900(&local_2c,param_1);
    *puVar5 = 0x2f;
    if (iVar1 != 0) goto LAB_00409a70;
    sVar4 = strspn(puVar5 + 1,"/");
    __s = puVar5 + 1 + sVar4;
  }
  else {
    __s = param_1;
    if (sVar4 != 0) {
      iVar1 = FUN_00409900(&local_2c,&DAT_00412556);
      if (iVar1 != 0) goto LAB_00409a70;
      __s = param_1 + sVar4;
    }
  }
  if (*__s == '/') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("*dir != \'/\'","lib/chdir-long.c",0xa2,"chdir_long");
  }
  param_1 = param_1 + sVar3;
  if (param_1 < __s) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dir <= dir_end","lib/chdir-long.c",0xa3,"chdir_long");
  }
  while (0xfff < (long)param_1 - (long)__s) {
    puVar5 = (undefined *)memrchr(__s,0x2f,0x1000);
    if (puVar5 == (undefined *)0x0) {
      *piVar2 = 0x24;
      return -1;
    }
    *puVar5 = 0;
    if (0xfff < (long)puVar5 - (long)__s) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("slash - dir < 4096","lib/chdir-long.c",0xb3,"chdir_long");
    }
    iVar1 = FUN_00409900(&local_2c,__s);
    *puVar5 = 0x2f;
    if (iVar1 != 0) goto LAB_00409a70;
    sVar3 = strspn(puVar5 + 1,"/");
    __s = puVar5 + 1 + sVar3;
  }
  if (((param_1 <= __s) || (iVar1 = FUN_00409900(&local_2c,__s), iVar1 == 0)) &&
     (iVar1 = fchdir(local_2c), iVar1 == 0)) {
    FUN_004098c0(local_2c);
    return 0;
  }
LAB_00409a70:
  iVar1 = *piVar2;
  FUN_004098c0(local_2c);
  *piVar2 = iVar1;
  return -1;
}


void * FUN_00409bb0(void *param_1,size_t param_2)

{
  char *__filename;
  bool bVar1;
  __dev_t _Var2;
  __dev_t _Var3;
  __ino_t _Var4;
  __ino_t _Var5;
  int iVar6;
  int iVar7;
  int *piVar8;
  DIR *__dirp;
  dirent *pdVar9;
  size_t __n;
  void *pvVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  __ino_t _Var15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  __dev_t local_120;
  void *local_110;
  void *local_108;
  ulong local_100;
  void *local_e8;
  stat local_c8;
  
  if (param_2 == 0) {
    local_100 = 0x1000;
    if (param_1 != (void *)0x0) {
      piVar8 = __errno_location();
      *piVar8 = 0x16;
      return (void *)0x0;
    }
LAB_00409be2:
    local_110 = malloc(local_100);
    if (local_110 == (void *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    local_110 = param_1;
    local_100 = param_2;
    if (param_1 == (void *)0x0) goto LAB_00409be2;
  }
  lVar13 = (long)local_110 + local_100;
  *(undefined *)(lVar13 + -1) = 0;
  iVar6 = __lxstat(1,".",&local_c8);
  _Var15 = local_c8.st_ino;
  _Var2 = local_c8.st_dev;
  if (-1 < iVar6) {
    local_120 = local_c8.st_dev;
    iVar6 = __lxstat(1,"/",&local_c8);
    _Var4 = local_c8.st_ino;
    _Var3 = local_c8.st_dev;
    if (-1 < iVar6) {
      local_e8 = (void *)(lVar13 + -1);
      bVar16 = _Var2 != local_c8.st_dev;
      bVar17 = _Var15 != local_c8.st_ino;
      if (!bVar16 && !bVar17) {
LAB_00409ec8:
        if (local_e8 == (void *)((long)local_110 + (local_100 - 1))) {
          *(undefined *)((long)local_e8 + -1) = 0x2f;
          local_e8 = (void *)((long)local_e8 + -1);
        }
        memmove(local_110,local_e8,lVar13 - (long)local_e8);
        local_108 = param_1;
        if (param_2 == 0) {
          local_108 = realloc(local_110,lVar13 - (long)local_e8);
        }
        if (local_108 != (void *)0x0) {
          return local_108;
        }
        return local_110;
      }
      piVar8 = __errno_location();
      __dirp = (DIR *)0x0;
      iVar6 = -100;
      do {
        iVar6 = openat(iVar6,"..",0);
        if (iVar6 < 0) {
          iVar7 = *piVar8;
          if (__dirp != (DIR *)0x0) goto LAB_00409f81;
          goto joined_r0x00409f8f;
        }
        iVar7 = __fxstat(1,iVar6,&local_c8);
        if (iVar7 != 0) {
          iVar7 = *piVar8;
          if (__dirp != (DIR *)0x0) {
            closedir(__dirp);
          }
LAB_00409fed:
          close(iVar6);
          goto joined_r0x00409f8f;
        }
        if (((__dirp != (DIR *)0x0) && (iVar7 = closedir(__dirp), iVar7 != 0)) ||
           (_Var5 = local_c8.st_ino, _Var2 = local_c8.st_dev, __dirp = fdopendir(iVar6),
           bVar1 = bVar16 || bVar17, __dirp == (DIR *)0x0)) {
          iVar7 = *piVar8;
          goto LAB_00409fed;
        }
LAB_00409d40:
        do {
          do {
            *piVar8 = 0;
            pdVar9 = readdir(__dirp);
            if (pdVar9 == (dirent *)0x0) {
              iVar7 = *piVar8;
              if ((iVar7 == 0) && (bVar1)) {
                rewinddir(__dirp);
                pdVar9 = readdir(__dirp);
                if (pdVar9 != (dirent *)0x0) {
                  bVar11 = false;
                  bVar1 = bVar11;
                  if (pdVar9->d_name[0] == '.') goto LAB_00409f50;
                  break;
                }
                iVar7 = *piVar8;
              }
              if (iVar7 == 0) {
                *piVar8 = 2;
                iVar7 = 2;
              }
              goto LAB_00409f81;
            }
            if (pdVar9->d_name[0] == '.') {
LAB_00409f50:
              if ((pdVar9->d_name[1] == '\0') || (*(short *)(pdVar9->d_name + 1) == 0x2e))
              goto LAB_00409d40;
            }
            bVar11 = bVar1;
          } while ((bVar1) &&
                  (bVar18 = pdVar9->d_ino == _Var15, bVar11 = bVar18 || _Var2 != local_120,
                  !bVar18 && _Var2 == local_120));
          __filename = pdVar9->d_name;
          iVar7 = __fxstatat(1,iVar6,__filename,&local_c8,0x100);
          bVar1 = bVar11;
        } while ((((iVar7 != 0) || ((local_c8.st_mode & 0xf000) != 0x4000)) ||
                 (local_c8.st_dev != local_120)) || (local_c8.st_ino != _Var15));
        uVar14 = (long)local_e8 - (long)local_110;
        __n = strlen(__filename);
        if (uVar14 <= __n) {
          if (param_2 == 0) {
            uVar12 = local_100;
            if (local_100 <= __n) {
              uVar12 = __n;
            }
            if ((!CARRY8(local_100,uVar12)) &&
               (pvVar10 = realloc(local_110,local_100 + uVar12), pvVar10 != (void *)0x0)) {
              local_e8 = memcpy((void *)((long)pvVar10 + uVar12 + uVar14),
                                (void *)((long)pvVar10 + uVar14),local_100 - uVar14);
              local_110 = pvVar10;
              local_100 = local_100 + uVar12;
              goto LAB_00409e5f;
            }
            *piVar8 = 0xc;
            iVar7 = 0xc;
          }
          else {
            *piVar8 = 0x22;
            iVar7 = 0x22;
          }
LAB_00409f81:
          closedir(__dirp);
          goto joined_r0x00409f8f;
        }
LAB_00409e5f:
        pvVar10 = memcpy((void *)((long)local_e8 - __n),__filename,__n);
        local_e8 = (void *)((long)pvVar10 + -1);
        local_120 = _Var2;
        *(undefined *)((long)pvVar10 + -1) = 0x2f;
        _Var15 = _Var5;
      } while ((_Var3 != _Var2) || (_Var4 != _Var5));
      iVar6 = closedir(__dirp);
      if (iVar6 == 0) {
        lVar13 = (long)local_110 + local_100;
        goto LAB_00409ec8;
      }
      goto LAB_00409fb0;
    }
  }
  piVar8 = __errno_location();
LAB_00409fb0:
  iVar7 = *piVar8;
joined_r0x00409f8f:
  if (param_1 == (void *)0x0) {
    free(local_110);
  }
  *piVar8 = iVar7;
  return (void *)0x0;
}


void FUN_0040a080(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined uVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar1 = param_2[0xb];
  iVar2 = *param_2;
  iVar3 = param_2[0xc];
  iVar8 = iVar1;
  iVar9 = iVar2;
  while (iVar3 < iVar9) {
    while( true ) {
      if (iVar3 <= iVar8) goto LAB_0040a0fc;
      iVar10 = iVar9 - iVar3;
      iVar7 = iVar3 - iVar8;
      if (iVar10 <= iVar7) break;
      lVar6 = (long)iVar8;
      iVar9 = iVar9 - iVar7;
      puVar5 = (undefined *)(param_1 + lVar6 * 8);
      do {
        uVar4 = *puVar5;
        *puVar5 = puVar5[iVar9 - lVar6];
        puVar5[iVar9 - lVar6] = uVar4;
        puVar5 = puVar5 + 1;
      } while ((undefined *)(param_1 + 8 + ((ulong)(iVar7 - 1) + lVar6) * 8) != puVar5);
      if (iVar9 <= iVar3) goto LAB_0040a0fc;
    }
    lVar6 = (long)iVar8;
    puVar5 = (undefined *)(param_1 + lVar6 * 8);
    do {
      uVar4 = *puVar5;
      *puVar5 = puVar5[iVar3 - lVar6];
      puVar5[iVar3 - lVar6] = uVar4;
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined *)(param_1 + 8 + ((ulong)(iVar10 - 1) + lVar6) * 8));
    iVar8 = iVar8 + iVar10;
  }
LAB_0040a0fc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_0040a160(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
                int param_6,int *param_7,int param_8,undefined param_9)

{
  char cVar1;
  undefined uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  undefined uVar8;
  undefined uVar9;
  char **ppcVar10;
  char *pcVar11;
  char **ppcVar12;
  char *pcVar13;
  char *__s1;
  FILE *__stream;
  ulong uVar14;
  size_t sVar15;
  char *__s1_00;
  long lVar16;
  char *local_70;
  uint local_44;
  
  pcVar13 = *(char **)(param_7 + 8);
  cVar1 = *pcVar13;
  pcVar11 = pcVar13;
  if ((cVar1 == '=') || (cVar1 == '\0')) {
    sVar15 = 0;
  }
  else {
    do {
      pcVar11 = pcVar11 + 1;
      if (*pcVar11 == '\0') break;
    } while (*pcVar11 != '=');
    sVar15 = (long)pcVar11 - (long)pcVar13;
  }
  uVar14 = 0;
  __s1 = *param_4;
  ppcVar10 = param_4;
  __s1_00 = __s1;
  if (__s1 != (char *)0x0) {
    while( true ) {
      iVar5 = strncmp(__s1_00,pcVar13,sVar15);
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_0040a380;
      ppcVar10 = ppcVar10 + 4;
      __s1_00 = *ppcVar10;
      iVar5 = (int)uVar14 + 1;
      if (__s1_00 == (char *)0x0) break;
      uVar14 = (ulong)iVar5;
    }
    lVar16 = 0;
    ppcVar10 = (char **)0x0;
    local_44 = 0xffffffff;
    bVar3 = false;
    bVar4 = false;
    local_70 = (char *)0x0;
    ppcVar12 = param_4;
    do {
      iVar6 = strncmp(__s1,pcVar13,sVar15);
      if (iVar6 == 0) {
        if (ppcVar10 == (char **)0x0) {
          local_44 = (uint)lVar16;
          ppcVar10 = ppcVar12;
        }
        else if (((((param_6 != 0) || (*(int *)(ppcVar10 + 1) != *(int *)(ppcVar12 + 1))) ||
                  (ppcVar10[2] != ppcVar12[2])) ||
                 (*(int *)(ppcVar10 + 3) != *(int *)(ppcVar12 + 3))) && (!bVar3)) {
          if (param_8 == 0) {
            bVar3 = true;
            if (local_70 == (char *)0x0) goto LAB_0040a2c0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_0040a2c0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_0040a2c0:
      ppcVar12 = ppcVar12 + 4;
      __s1 = *ppcVar12;
      lVar16 = lVar16 + 1;
    } while (__s1 != (char *)0x0);
    if ((local_70 != (char *)0x0) || (bVar3)) {
      if (param_8 != 0) {
        if (bVar3) {
          uVar2 = *param_2;
          uVar8 = dcgettext(0,"%s: option \'%s%s\' is ambiguous\n",5);
          __fprintf_chk(stderr,1,uVar8,uVar2,param_9,pcVar13);
          pcVar13 = *(char **)(param_7 + 8);
        }
        else {
          flockfile(stderr);
          uVar2 = *(undefined *)(param_7 + 8);
          uVar8 = *param_2;
          uVar9 = dcgettext(0,"%s: option \'%s%s\' is ambiguous; possibilities:",5);
          __fprintf_chk(stderr,1,uVar9,uVar8,param_9,uVar2);
          pcVar13 = local_70;
          __stream = stderr;
          do {
            if (*pcVar13 != '\0') {
              __fprintf_chk(__stream,1," \'%s%s\'",param_9,*param_4);
              __stream = stderr;
            }
            pcVar13 = pcVar13 + 1;
            param_4 = param_4 + 4;
          } while (local_70 + uVar14 + 1 != pcVar13);
          fputc(10,__stream);
          funlockfile(stderr);
          pcVar13 = *(char **)(param_7 + 8);
        }
      }
      if (bVar4) {
        free(local_70);
      }
      sVar15 = strlen(pcVar13);
      *(char **)(param_7 + 8) = pcVar13 + sVar15;
      *param_7 = *param_7 + 1;
      param_7[2] = 0;
      return 0x3f;
    }
    if (ppcVar10 != (char **)0x0) {
      uVar14 = (ulong)local_44;
LAB_0040a380:
      iVar6 = *param_7;
      *(undefined *)(param_7 + 8) = 0;
      iVar5 = iVar6 + 1;
      *param_7 = iVar5;
      if (*pcVar11 == '\0') {
        if (*(int *)(ppcVar10 + 1) == 1) {
          if (param_1 <= iVar5) {
            if (param_8 != 0) {
              pcVar13 = *ppcVar10;
              uVar2 = *param_2;
              uVar8 = dcgettext(0,"%s: option \'%s%s\' requires an argument\n",5);
              __fprintf_chk(stderr,1,uVar8,uVar2,param_9,pcVar13);
            }
            param_7[2] = *(int *)(ppcVar10 + 3);
            return (uint)(*param_3 != ':') * 5 + 0x3a;
          }
          *param_7 = iVar6 + 2;
          *(undefined *)(param_7 + 4) = param_2[iVar5];
        }
      }
      else {
        if (*(int *)(ppcVar10 + 1) == 0) {
          if (param_8 != 0) {
            pcVar13 = *ppcVar10;
            uVar2 = *param_2;
            uVar8 = dcgettext(0,"%s: option \'%s%s\' doesn\'t allow an argument\n",5);
            __fprintf_chk(stderr,1,uVar8,uVar2,param_9,pcVar13);
          }
          param_7[2] = *(int *)(ppcVar10 + 3);
          return 0x3f;
        }
        *(char **)(param_7 + 4) = pcVar11 + 1;
      }
      if (param_5 != (undefined *)0x0) {
        *param_5 = (int)uVar14;
      }
      if ((int *)ppcVar10[2] == (int *)0x0) {
        return *(int *)(ppcVar10 + 3);
      }
      *(int *)ppcVar10[2] = *(int *)(ppcVar10 + 3);
      return 0;
    }
  }
  if (((param_6 != 0) && (*(char *)(param_2[*param_7] + 1) != '-')) &&
     (pcVar11 = strchr(param_3,(int)cVar1), pcVar11 != (char *)0x0)) {
    return -1;
  }
  if (param_8 != 0) {
    uVar2 = *param_2;
    uVar8 = dcgettext(0,"%s: unrecognized option \'%s%s\'\n",5);
    __fprintf_chk(stderr,1,uVar8,uVar2,param_9,pcVar13);
  }
  *(undefined *)(param_7 + 8) = 0;
  *param_7 = *param_7 + 1;
  param_7[2] = 0;
  return 0x3f;
}


uint FUN_0040a780(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
                 ulong param_6,uint *param_7,int param_8)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  undefined *puVar15;
  
  bVar14 = 0;
  uVar3 = param_7[1];
  if ((int)param_1 < 1) {
    return 0xffffffff;
  }
  uVar11 = *param_7;
  *(undefined *)(param_7 + 4) = 0;
  if (uVar11 == 0) {
    *param_7 = 1;
    uVar11 = 1;
LAB_0040a7ca:
    param_7[0xc] = uVar11;
    param_7[0xb] = uVar11;
    *(undefined *)(param_7 + 8) = 0;
    if (*param_3 == '-') {
      param_7[10] = 2;
      param_3 = param_3 + 1;
      pbVar8 = (byte *)0x0;
    }
    else if (*param_3 == '+') {
      param_7[10] = 0;
      param_3 = param_3 + 1;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)0x0;
      if (param_8 == 0) {
        pcVar4 = getenv("POSIXLY_CORRECT");
        param_6 = param_6 & 0xffffffff;
        if (pcVar4 == (char *)0x0) {
          param_7[10] = 1;
          pbVar8 = *(byte **)(param_7 + 8);
          goto LAB_0040a8cd;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040a8cd:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_0040a8d8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_0040a848;
LAB_0040a8ec:
    if (*pbVar8 == 0) goto LAB_0040a848;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040a7ca;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_0040a8d8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0040a8ec;
LAB_0040a848:
    uVar11 = *param_7;
    if (param_7[0xc] != uVar11 && (int)uVar11 <= (int)param_7[0xc]) {
      param_7[0xc] = uVar11;
    }
    if ((int)uVar11 < (int)param_7[0xb]) {
      param_7[0xb] = uVar11;
    }
    if (param_7[10] == 1) {
      uVar7 = param_7[0xc];
      if (param_7[0xb] == uVar7) {
        if (uVar11 != uVar7) {
          param_7[0xb] = uVar11;
          uVar7 = uVar11;
        }
      }
      else if (uVar11 != uVar7) {
        FUN_0040a080(param_2,param_7);
        param_6 = param_6 & 0xffffffff;
        uVar7 = *param_7;
      }
      uVar11 = uVar7;
      uVar7 = uVar11;
      if ((int)uVar11 < (int)param_1) {
        lVar6 = (long)(int)uVar11;
        do {
          if ((*(char *)param_2[lVar6] == '-') && (((char *)param_2[lVar6])[1] != '\0')) {
            uVar11 = *param_7;
            uVar7 = (uint)lVar6;
            break;
          }
          uVar11 = (uint)lVar6 + 1;
          lVar6 = lVar6 + 1;
          *param_7 = uVar11;
          uVar7 = uVar11;
        } while ((int)lVar6 < (int)param_1);
      }
      param_7[0xc] = uVar7;
    }
    bVar12 = param_1 < uVar11;
    bVar13 = param_1 == uVar11;
    if (bVar13) {
      param_1 = param_7[0xc];
      uVar11 = param_7[0xb];
LAB_0040a9b6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_004137c9;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar12 = *pbVar9 < *pbVar10;
      bVar13 = *pbVar9 == *pbVar10;
      pbVar9 = pbVar9 + (ulong)bVar14 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar14 * -2 + 1;
    } while (bVar13);
    if ((!bVar12 && !bVar13) == bVar12) {
      uVar11 = uVar11 + 1;
      *param_7 = uVar11;
      if (param_7[0xb] == param_7[0xc]) {
        param_7[0xb] = uVar11;
      }
      else {
        bVar12 = uVar11 != param_7[0xc];
        uVar11 = param_7[0xb];
        if (bVar12) {
          FUN_0040a080(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_0040a9b6;
    }
    if ((*pbVar8 != 0x2d) || (bVar14 = pbVar8[1], bVar14 == 0)) {
      if (param_7[10] == 0) {
        return 0xffffffff;
      }
      *(byte **)(param_7 + 4) = pbVar8;
      *param_7 = uVar11 + 1;
      return 1;
    }
    if (param_4 != 0) {
      if (bVar14 == 0x2d) {
        *(byte **)(param_7 + 8) = pbVar8 + 2;
        puVar15 = &DAT_004137c9;
        goto LAB_0040ab15;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_0040aac0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_0040a160(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_004137ca);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_0040aac0:
    pbVar8 = pbVar8 + 1;
  }
  pbVar9 = pbVar8 + 1;
  *(byte **)(param_7 + 8) = pbVar9;
  bVar14 = *pbVar8;
  uVar11 = (uint)(char)bVar14;
  pcVar4 = strchr(param_3,uVar11);
  if (pbVar8[1] == 0) {
    *param_7 = *param_7 + 1;
  }
  if (((byte)(bVar14 - 0x3a) < 2) || (pcVar4 == (char *)0x0)) {
    if (uVar3 != 0) {
      uVar1 = *param_2;
      uVar5 = dcgettext(0,"%s: invalid option -- \'%c\'\n",5);
      __fprintf_chk(stderr,1,uVar5,uVar1,uVar11);
    }
    param_7[2] = uVar11;
    return 0x3f;
  }
  if (((*pcVar4 != 'W') || (param_4 == 0)) || (pcVar4[1] != ';')) {
    if (pcVar4[1] == ':') {
      if (pcVar4[2] == ':') {
        if (pbVar8[1] == 0) {
          *(undefined *)(param_7 + 4) = 0;
        }
        else {
          *(byte **)(param_7 + 4) = pbVar9;
          *param_7 = *param_7 + 1;
        }
      }
      else {
        uVar7 = *param_7;
        if (pbVar8[1] == 0) {
          if (param_1 == uVar7) {
            if (uVar3 != 0) {
              uVar1 = *param_2;
              uVar5 = dcgettext(0,"%s: option requires an argument -- \'%c\'\n",5);
              __fprintf_chk(stderr,1,uVar5,uVar1,uVar11);
            }
            param_7[2] = uVar11;
            uVar11 = (uint)(*param_3 != ':') * 5 + 0x3a;
          }
          else {
            uVar1 = param_2[(int)uVar7];
            *param_7 = uVar7 + 1;
            *(undefined *)(param_7 + 4) = uVar1;
          }
        }
        else {
          *(byte **)(param_7 + 4) = pbVar9;
          *param_7 = uVar7 + 1;
        }
      }
      *(undefined *)(param_7 + 8) = 0;
      return uVar11;
    }
    return uVar11;
  }
  if (pbVar8[1] == 0) {
    if (*param_7 == param_1) {
      if (uVar3 != 0) {
        uVar1 = *param_2;
        uVar5 = dcgettext(0,"%s: option requires an argument -- \'%c\'\n",5);
        __fprintf_chk(stderr,1,uVar5,uVar1,uVar11);
      }
      param_7[2] = uVar11;
      return (uint)(*param_3 != ':') * 5 + 0x3a;
    }
    pbVar9 = (byte *)param_2[(int)*param_7];
  }
  *(byte **)(param_7 + 8) = pbVar9;
  param_6 = 0;
  *(undefined *)(param_7 + 4) = 0;
  puVar15 = &DAT_004137e8;
LAB_0040ab15:
  uVar3 = FUN_0040a160(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ad50(void)

{
  DAT_006175e0 = DAT_00617398._4_4_;
  _DAT_006175e4 = (undefined)DAT_00617398;
  FUN_0040a780();
  DAT_00617398._4_4_ = DAT_006175e0;
  DAT_00617638 = DAT_006175f0;
  _DAT_00617394 = DAT_006175e8;
  return;
}


void FUN_0040adb0(void)

{
  FUN_0040ad50();
  return;
}


void FUN_0040add0(void)

{
  FUN_0040ad50();
  return;
}


void FUN_0040adf0(void)

{
  FUN_0040a780();
  return;
}


void FUN_0040ae10(void)

{
  FUN_0040ad50();
  return;
}


void FUN_0040ae30(void)

{
  FUN_0040a780();
  return;
}


size_t FUN_0040ae50(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x4137e7;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_0040ae74;
  }
  param_1 = &local_1c;
LAB_0040ae74:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_0040c6f0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_0040aed0(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_0040af10:
    uVar4 = (long)(int)(uint)CONCAT11(param_2,param_2) |
            (long)(int)(uint)CONCAT11(param_2,param_2) << 0x10;
    uVar4 = uVar4 | uVar4 << 0x20;
    if (7 < param_3) {
      uVar2 = *param_1 ^ uVar4;
      for (uVar2 = ~uVar2 & uVar2 + 0xfefefefefefefeff; (uVar2 & 0x8080808080808080) == 0;
          uVar2 = ~uVar2 & uVar2 + 0xfefefefefefefeff) {
        param_3 = param_3 - 8;
        param_1 = param_1 + 1;
        if (param_3 < 8) {
          if (param_3 == 0) {
            return (ulong *)0x0;
          }
          break;
        }
        uVar2 = *param_1 ^ uVar4;
      }
    }
    if (param_2 != *(char *)param_1) {
      puVar3 = (ulong *)((long)param_1 + param_3);
      do {
        param_1 = (ulong *)((long)param_1 + 1);
        if (param_1 == puVar3) {
          return (ulong *)0x0;
        }
      } while (*(char *)param_1 != param_2);
    }
  }
  else {
    cVar1 = *(char *)param_1;
    while (param_2 != cVar1) {
      param_1 = (ulong *)((long)param_1 + 1);
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return (ulong *)0x0;
      }
      if (((ulong)param_1 & 7) == 0) goto LAB_0040af10;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


void FUN_0040afe0(char *param_1)

{
  ulong uVar1;
  size_t sVar2;
  char *pcVar3;
  ulong uVar4;
  
  sVar2 = strlen(param_1);
  uVar4 = 0;
  pcVar3 = param_1;
  do {
    uVar1 = uVar4 + 1;
    if ((((param_1[uVar4] == '\\') && (uVar4 + 4 < sVar2 + 1)) &&
        ((byte)(param_1[uVar1] - 0x30U) < 4)) &&
       (((byte)(param_1[uVar4 + 2] - 0x30U) < 8 && ((byte)(param_1[uVar4 + 3] - 0x30U) < 8)))) {
      *pcVar3 = param_1[uVar4 + 3] + 'P' + (param_1[uVar4 + 2] + param_1[uVar1] * '\b') * '\b';
      uVar4 = uVar4 + 4;
    }
    else {
      *pcVar3 = param_1[uVar4];
      uVar4 = uVar1;
      if (sVar2 + 1 <= uVar1) {
        return;
      }
    }
    pcVar3 = pcVar3 + 1;
  } while( true );
}


void FUN_0040b070(void **param_1)

{
  free(*param_1);
  free(param_1[1]);
  free(param_1[2]);
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    free(param_1);
    return;
  }
  free(param_1[3]);
  free(param_1);
  return;
}


byte * FUN_0040b0c0(void)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  FILE *__stream;
  __ssize_t _Var4;
  char *pcVar5;
  byte **ppbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined *puVar9;
  long lVar10;
  byte **ppbVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte **ppbVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  undefined local_79;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  byte *local_50;
  char *local_48;
  size_t local_40 [2];
  
  bVar22 = 0;
  __stream = fopen("/proc/self/mountinfo","r");
  if (__stream == (FILE *)0x0) {
    lVar13 = setmntent("/etc/mtab","r");
    if (lVar13 == 0) {
      return (byte *)0;
    }
    ppbVar17 = &local_50;
    puVar9 = (undefined *)getmntent(lVar13);
    while (puVar9 != (undefined *)0x0) {
      lVar10 = hasmntopt(puVar9,&DAT_0041384b);
      ppbVar11 = (byte **)FUN_00409560(0x38);
      pbVar7 = (byte *)FUN_00409790(*puVar9);
      uVar1 = puVar9[1];
      *ppbVar11 = pbVar7;
      pbVar7 = (byte *)FUN_00409790(uVar1);
      ppbVar11[2] = (byte *)0x0;
      uVar1 = puVar9[2];
      ppbVar11[1] = pbVar7;
      pbVar7 = (byte *)FUN_00409790(uVar1);
      lVar14 = 7;
      ppbVar6 = ppbVar11 + 5;
      bVar18 = false;
      *(byte *)ppbVar6 = *(byte *)ppbVar6 | 4;
      bVar20 = *(byte *)ppbVar6 == 0;
      ppbVar11[3] = pbVar7;
      bVar21 = true;
      pbVar15 = pbVar7;
      pbVar16 = (byte *)"autofs";
      do {
        if (lVar14 == 0) break;
        lVar14 = lVar14 + -1;
        bVar18 = *pbVar15 < *pbVar16;
        bVar20 = *pbVar15 == *pbVar16;
        pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
        pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
      } while (bVar20);
      bVar19 = false;
      bVar18 = (!bVar18 && !bVar20) == bVar18;
      if (!bVar18) {
        lVar14 = 5;
        pbVar15 = pbVar7;
        pbVar16 = &DAT_004105d1;
        do {
          if (lVar14 == 0) break;
          lVar14 = lVar14 + -1;
          bVar19 = *pbVar15 < *pbVar16;
          bVar18 = *pbVar15 == *pbVar16;
          pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
          pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
        } while (bVar18);
        bVar20 = false;
        bVar18 = (!bVar19 && !bVar18) == bVar19;
        if (!bVar18) {
          lVar14 = 6;
          pbVar15 = pbVar7;
          pbVar16 = (byte *)"subfs";
          do {
            if (lVar14 == 0) break;
            lVar14 = lVar14 + -1;
            bVar20 = *pbVar15 < *pbVar16;
            bVar18 = *pbVar15 == *pbVar16;
            pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
            pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
          } while (bVar18);
          bVar19 = false;
          bVar18 = (!bVar20 && !bVar18) == bVar20;
          if (!bVar18) {
            lVar14 = 8;
            pbVar15 = pbVar7;
            pbVar16 = (byte *)"debugfs";
            do {
              if (lVar14 == 0) break;
              lVar14 = lVar14 + -1;
              bVar19 = *pbVar15 < *pbVar16;
              bVar18 = *pbVar15 == *pbVar16;
              pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
              pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
            } while (bVar18);
            bVar20 = false;
            bVar18 = (!bVar19 && !bVar18) == bVar19;
            if (!bVar18) {
              lVar14 = 7;
              pbVar15 = pbVar7;
              pbVar16 = (byte *)"devpts";
              do {
                if (lVar14 == 0) break;
                lVar14 = lVar14 + -1;
                bVar20 = *pbVar15 < *pbVar16;
                bVar18 = *pbVar15 == *pbVar16;
                pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
              } while (bVar18);
              bVar19 = false;
              bVar18 = (!bVar20 && !bVar18) == bVar20;
              if (!bVar18) {
                lVar14 = 8;
                pbVar15 = pbVar7;
                pbVar16 = (byte *)"fusectl";
                do {
                  if (lVar14 == 0) break;
                  lVar14 = lVar14 + -1;
                  bVar19 = *pbVar15 < *pbVar16;
                  bVar18 = *pbVar15 == *pbVar16;
                  pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                  pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                } while (bVar18);
                bVar20 = false;
                bVar18 = (!bVar19 && !bVar18) == bVar19;
                if (!bVar18) {
                  lVar14 = 7;
                  pbVar15 = pbVar7;
                  pbVar16 = (byte *)"mqueue";
                  do {
                    if (lVar14 == 0) break;
                    lVar14 = lVar14 + -1;
                    bVar20 = *pbVar15 < *pbVar16;
                    bVar18 = *pbVar15 == *pbVar16;
                    pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                    pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                  } while (bVar18);
                  bVar19 = false;
                  bVar18 = (!bVar20 && !bVar18) == bVar20;
                  if (!bVar18) {
                    lVar14 = 0xb;
                    pbVar15 = pbVar7;
                    pbVar16 = (byte *)"rpc_pipefs";
                    do {
                      if (lVar14 == 0) break;
                      lVar14 = lVar14 + -1;
                      bVar19 = *pbVar15 < *pbVar16;
                      bVar18 = *pbVar15 == *pbVar16;
                      pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                      pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                    } while (bVar18);
                    bVar20 = false;
                    bVar18 = (!bVar19 && !bVar18) == bVar19;
                    if (!bVar18) {
                      lVar14 = 6;
                      pbVar15 = pbVar7;
                      pbVar16 = (byte *)"sysfs";
                      do {
                        if (lVar14 == 0) break;
                        lVar14 = lVar14 + -1;
                        bVar20 = *pbVar15 < *pbVar16;
                        bVar18 = *pbVar15 == *pbVar16;
                        pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                        pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                      } while (bVar18);
                      bVar19 = false;
                      bVar18 = (!bVar20 && !bVar18) == bVar20;
                      if (!bVar18) {
                        lVar14 = 6;
                        pbVar15 = pbVar7;
                        pbVar16 = (byte *)"devfs";
                        do {
                          if (lVar14 == 0) break;
                          lVar14 = lVar14 + -1;
                          bVar19 = *pbVar15 < *pbVar16;
                          bVar18 = *pbVar15 == *pbVar16;
                          pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                          pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                        } while (bVar18);
                        bVar20 = false;
                        bVar18 = (!bVar19 && !bVar18) == bVar19;
                        if (!bVar18) {
                          lVar14 = 7;
                          pbVar15 = pbVar7;
                          pbVar16 = (byte *)"kernfs";
                          do {
                            if (lVar14 == 0) break;
                            lVar14 = lVar14 + -1;
                            bVar20 = *pbVar15 < *pbVar16;
                            bVar18 = *pbVar15 == *pbVar16;
                            pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                            pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                          } while (bVar18);
                          if ((!bVar20 && !bVar18) != bVar20) {
                            iVar3 = strcmp((char *)pbVar7,"ignore");
                            bVar21 = true;
                            if (iVar3 != 0) {
                              iVar3 = strcmp((char *)pbVar7,"none");
                              bVar21 = lVar10 == 0 && iVar3 == 0;
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
      }
      pbVar15 = *ppbVar11;
      *(byte *)(ppbVar11 + 5) = *(byte *)(ppbVar11 + 5) & 0xfe | bVar21;
      pcVar5 = strchr((char *)pbVar15,0x3a);
      bVar21 = true;
      if (pcVar5 != (char *)0x0) goto LAB_0040b70a;
      bVar18 = *pbVar15 < 0x2f;
      bVar20 = *pbVar15 == 0x2f;
      if (bVar20) {
        bVar18 = pbVar15[1] < 0x2f;
        bVar20 = pbVar15[1] == 0x2f;
        if (!bVar20) goto LAB_0040b7a2;
        lVar10 = 6;
        pbVar16 = pbVar7;
        pbVar8 = (byte *)"smbfs";
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          bVar18 = *pbVar16 < *pbVar8;
          bVar20 = *pbVar16 == *pbVar8;
          pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
          pbVar8 = pbVar8 + (ulong)bVar22 * -2 + 1;
        } while (bVar20);
        bVar19 = false;
        bVar20 = (!bVar18 && !bVar20) == bVar18;
        if (!bVar20) {
          lVar10 = 5;
          pbVar16 = &DAT_00410433;
          do {
            if (lVar10 == 0) break;
            lVar10 = lVar10 + -1;
            bVar19 = *pbVar7 < *pbVar16;
            bVar20 = *pbVar7 == *pbVar16;
            pbVar7 = pbVar7 + (ulong)bVar22 * -2 + 1;
            pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
          } while (bVar20);
          bVar18 = false;
          bVar20 = (!bVar19 && !bVar20) == bVar19;
          if (!bVar20) goto LAB_0040b7a2;
        }
      }
      else {
LAB_0040b7a2:
        lVar10 = 7;
        pbVar7 = (byte *)"-hosts";
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          bVar18 = *pbVar7 < *pbVar15;
          bVar20 = *pbVar7 == *pbVar15;
          pbVar7 = pbVar7 + (ulong)bVar22 * -2 + 1;
          pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
        } while (bVar20);
        bVar21 = (!bVar18 && !bVar20) == bVar18;
      }
LAB_0040b70a:
      ppbVar11[4] = (byte *)0xffffffffffffffff;
      *(byte *)(ppbVar11 + 5) = *(byte *)(ppbVar11 + 5) & 0xfd | bVar21 * '\x02';
      *ppbVar17 = (byte *)ppbVar11;
      ppbVar17 = ppbVar11 + 6;
      puVar9 = (undefined *)getmntent(lVar13);
    }
    iVar3 = endmntent(lVar13);
    if (iVar3 != 0) {
LAB_0040b36d:
      *ppbVar17 = (byte *)0x0;
      return local_50;
    }
  }
  else {
    local_48 = (char *)0x0;
    ppbVar17 = &local_50;
    local_40[0] = 0;
    while (_Var4 = __getdelim(&local_48,local_40,10,__stream), _Var4 != -1) {
      uVar2 = sscanf(local_48,"%*u %*u %u:%u %n%*s%n %n%*s%n%c",&local_78,&local_74,&local_58,
                     &local_54,&local_70,&local_6c,&local_79);
      if ((((uVar2 & 0xfffffffb) == 3) &&
          (pcVar5 = (char *)FUN_0040bd00(local_48 + local_6c,&DAT_00413801), pcVar5 != (char *)0x0))
         && (uVar2 = sscanf(pcVar5," - %n%*s%n %n%*s%n %c",&local_68,&local_64,&local_60,&local_5c,
                            &local_79), (uVar2 & 0xfffffffb) == 1)) {
        bVar21 = true;
        local_48[local_54] = '\0';
        local_48[local_6c] = '\0';
        pcVar5[local_64] = '\0';
        pcVar5[local_5c] = '\0';
        FUN_0040afe0(pcVar5 + local_60);
        FUN_0040afe0(local_48 + local_70);
        FUN_0040afe0(local_48 + local_58);
        ppbVar6 = (byte **)FUN_00409560(0x38);
        pbVar7 = (byte *)FUN_00409790(pcVar5 + local_60);
        *ppbVar6 = pbVar7;
        pbVar7 = (byte *)FUN_00409790(local_48 + local_70);
        ppbVar6[1] = pbVar7;
        pbVar7 = (byte *)FUN_00409790(local_48 + local_58);
        ppbVar6[2] = pbVar7;
        pbVar7 = (byte *)FUN_00409790(pcVar5 + local_68);
        ppbVar6[3] = pbVar7;
        *(byte *)(ppbVar6 + 5) = *(byte *)(ppbVar6 + 5) | 4;
        lVar13 = 7;
        bVar18 = false;
        pbVar8 = (byte *)(((ulong)local_74 & 0xffffff00) << 0xc |
                         ((ulong)local_78 & 0xfffff000) << 0x20 | (ulong)((local_78 & 0xfff) << 8) |
                         (ulong)(byte)local_74);
        bVar20 = pbVar8 == (byte *)0x0;
        pbVar15 = pbVar7;
        pbVar16 = (byte *)"autofs";
        do {
          if (lVar13 == 0) break;
          lVar13 = lVar13 + -1;
          bVar18 = *pbVar15 < *pbVar16;
          bVar20 = *pbVar15 == *pbVar16;
          pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
          pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
        } while (bVar20);
        ppbVar6[4] = pbVar8;
        bVar19 = false;
        bVar18 = (!bVar18 && !bVar20) == bVar18;
        if (!bVar18) {
          lVar13 = 5;
          pbVar15 = pbVar7;
          pbVar16 = &DAT_004105d1;
          do {
            if (lVar13 == 0) break;
            lVar13 = lVar13 + -1;
            bVar19 = *pbVar15 < *pbVar16;
            bVar18 = *pbVar15 == *pbVar16;
            pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
            pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
          } while (bVar18);
          bVar20 = false;
          bVar18 = (!bVar19 && !bVar18) == bVar19;
          if (!bVar18) {
            lVar13 = 6;
            pbVar15 = pbVar7;
            pbVar16 = (byte *)"subfs";
            do {
              if (lVar13 == 0) break;
              lVar13 = lVar13 + -1;
              bVar20 = *pbVar15 < *pbVar16;
              bVar18 = *pbVar15 == *pbVar16;
              pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
              pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
            } while (bVar18);
            bVar19 = false;
            bVar18 = (!bVar20 && !bVar18) == bVar20;
            if (!bVar18) {
              lVar13 = 8;
              pbVar15 = pbVar7;
              pbVar16 = (byte *)"debugfs";
              do {
                if (lVar13 == 0) break;
                lVar13 = lVar13 + -1;
                bVar19 = *pbVar15 < *pbVar16;
                bVar18 = *pbVar15 == *pbVar16;
                pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
              } while (bVar18);
              bVar20 = false;
              bVar18 = (!bVar19 && !bVar18) == bVar19;
              if (!bVar18) {
                lVar13 = 7;
                pbVar15 = pbVar7;
                pbVar16 = (byte *)"devpts";
                do {
                  if (lVar13 == 0) break;
                  lVar13 = lVar13 + -1;
                  bVar20 = *pbVar15 < *pbVar16;
                  bVar18 = *pbVar15 == *pbVar16;
                  pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                  pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                } while (bVar18);
                bVar19 = false;
                bVar18 = (!bVar20 && !bVar18) == bVar20;
                if (!bVar18) {
                  lVar13 = 8;
                  pbVar15 = pbVar7;
                  pbVar16 = (byte *)"fusectl";
                  do {
                    if (lVar13 == 0) break;
                    lVar13 = lVar13 + -1;
                    bVar19 = *pbVar15 < *pbVar16;
                    bVar18 = *pbVar15 == *pbVar16;
                    pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                    pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                  } while (bVar18);
                  bVar20 = false;
                  bVar18 = (!bVar19 && !bVar18) == bVar19;
                  if (!bVar18) {
                    lVar13 = 7;
                    pbVar15 = pbVar7;
                    pbVar16 = (byte *)"mqueue";
                    do {
                      if (lVar13 == 0) break;
                      lVar13 = lVar13 + -1;
                      bVar20 = *pbVar15 < *pbVar16;
                      bVar18 = *pbVar15 == *pbVar16;
                      pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                      pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                    } while (bVar18);
                    bVar19 = false;
                    bVar18 = (!bVar20 && !bVar18) == bVar20;
                    if (!bVar18) {
                      lVar13 = 0xb;
                      pbVar15 = pbVar7;
                      pbVar16 = (byte *)"rpc_pipefs";
                      do {
                        if (lVar13 == 0) break;
                        lVar13 = lVar13 + -1;
                        bVar19 = *pbVar15 < *pbVar16;
                        bVar18 = *pbVar15 == *pbVar16;
                        pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                        pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                      } while (bVar18);
                      bVar20 = false;
                      bVar18 = (!bVar19 && !bVar18) == bVar19;
                      if (!bVar18) {
                        lVar13 = 6;
                        pbVar15 = pbVar7;
                        pbVar16 = (byte *)"sysfs";
                        do {
                          if (lVar13 == 0) break;
                          lVar13 = lVar13 + -1;
                          bVar20 = *pbVar15 < *pbVar16;
                          bVar18 = *pbVar15 == *pbVar16;
                          pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                          pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                        } while (bVar18);
                        bVar19 = false;
                        bVar18 = (!bVar20 && !bVar18) == bVar20;
                        if (!bVar18) {
                          lVar13 = 6;
                          pbVar15 = pbVar7;
                          pbVar16 = (byte *)"devfs";
                          do {
                            if (lVar13 == 0) break;
                            lVar13 = lVar13 + -1;
                            bVar19 = *pbVar15 < *pbVar16;
                            bVar18 = *pbVar15 == *pbVar16;
                            pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                            pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                          } while (bVar18);
                          bVar20 = false;
                          bVar18 = (!bVar19 && !bVar18) == bVar19;
                          if (!bVar18) {
                            lVar13 = 7;
                            pbVar15 = pbVar7;
                            pbVar16 = (byte *)"kernfs";
                            do {
                              if (lVar13 == 0) break;
                              lVar13 = lVar13 + -1;
                              bVar20 = *pbVar15 < *pbVar16;
                              bVar18 = *pbVar15 == *pbVar16;
                              pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                              pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                            } while (bVar18);
                            if (((!bVar20 && !bVar18) != bVar20) &&
                               (iVar3 = strcmp((char *)pbVar7,"ignore"), iVar3 != 0)) {
                              iVar3 = strcmp((char *)pbVar7,"none");
                              bVar21 = iVar3 == 0;
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
        pbVar15 = *ppbVar6;
        *(byte *)(ppbVar6 + 5) = *(byte *)(ppbVar6 + 5) & 0xfe | bVar21;
        pcVar5 = strchr((char *)pbVar15,0x3a);
        bVar21 = true;
        if (pcVar5 != (char *)0x0) goto LAB_0040b326;
        bVar18 = *pbVar15 < 0x2f;
        bVar20 = *pbVar15 == 0x2f;
        if (bVar20) {
          bVar18 = pbVar15[1] < 0x2f;
          bVar20 = pbVar15[1] == 0x2f;
          if (!bVar20) goto LAB_0040b4cb;
          lVar13 = 6;
          pbVar16 = pbVar7;
          pbVar8 = (byte *)"smbfs";
          do {
            if (lVar13 == 0) break;
            lVar13 = lVar13 + -1;
            bVar18 = *pbVar16 < *pbVar8;
            bVar20 = *pbVar16 == *pbVar8;
            pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
            pbVar8 = pbVar8 + (ulong)bVar22 * -2 + 1;
          } while (bVar20);
          bVar19 = false;
          bVar20 = (!bVar18 && !bVar20) == bVar18;
          if (!bVar20) {
            lVar13 = 5;
            pbVar16 = &DAT_00410433;
            do {
              if (lVar13 == 0) break;
              lVar13 = lVar13 + -1;
              bVar19 = *pbVar7 < *pbVar16;
              bVar20 = *pbVar7 == *pbVar16;
              pbVar7 = pbVar7 + (ulong)bVar22 * -2 + 1;
              pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
            } while (bVar20);
            bVar18 = false;
            bVar20 = (!bVar19 && !bVar20) == bVar19;
            if (!bVar20) goto LAB_0040b4cb;
          }
        }
        else {
LAB_0040b4cb:
          lVar13 = 7;
          pbVar7 = (byte *)"-hosts";
          do {
            if (lVar13 == 0) break;
            lVar13 = lVar13 + -1;
            bVar18 = *pbVar7 < *pbVar15;
            bVar20 = *pbVar7 == *pbVar15;
            pbVar7 = pbVar7 + (ulong)bVar22 * -2 + 1;
            pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
          } while (bVar20);
          bVar21 = (!bVar18 && !bVar20) == bVar18;
        }
LAB_0040b326:
        *(byte *)(ppbVar6 + 5) = *(byte *)(ppbVar6 + 5) & 0xfd | bVar21 * '\x02';
        *ppbVar17 = (byte *)ppbVar6;
        ppbVar17 = ppbVar6 + 6;
      }
    }
    free(local_48);
    if ((*(byte *)&__stream->_flags & 0x20) != 0) {
      piVar12 = __errno_location();
      iVar3 = *piVar12;
      FUN_0040ced0(__stream);
      *piVar12 = iVar3;
      goto LAB_0040b753;
    }
    iVar3 = FUN_0040ced0(__stream);
    if (iVar3 != -1) goto LAB_0040b36d;
  }
  piVar12 = __errno_location();
  iVar3 = *piVar12;
LAB_0040b753:
  *ppbVar17 = (byte *)0x0;
  while (local_50 != (byte *)0x0) {
    pbVar7 = *(byte **)(local_50 + 0x30);
    FUN_0040b070();
    local_50 = pbVar7;
  }
  *piVar12 = iVar3;
  return (byte *)0;
}


ulong FUN_0040b880(long param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  
  lVar8 = 1;
  lVar4 = 1;
  uVar2 = 0xffffffffffffffff;
  uVar3 = 0;
  while (uVar7 = lVar4 + uVar3, uVar5 = uVar3, lVar4 + uVar3 < param_2) {
    while (uVar3 = uVar7, bVar1 = *(byte *)(param_1 + uVar2 + lVar4),
          *(byte *)(param_1 + uVar3) < bVar1) {
      lVar4 = 1;
      lVar8 = uVar3 - uVar2;
      uVar7 = uVar3 + 1;
      uVar5 = uVar3;
      if (param_2 <= uVar3 + 1) goto LAB_0040b8d3;
    }
    if (*(byte *)(param_1 + uVar3) == bVar1) {
      if (lVar4 == lVar8) {
        lVar4 = 1;
      }
      else {
        lVar4 = lVar4 + 1;
        uVar3 = uVar5;
      }
    }
    else {
      lVar8 = 1;
      lVar4 = 1;
      uVar2 = uVar5;
      uVar3 = uVar5 + 1;
    }
  }
LAB_0040b8d3:
  *param_3 = lVar8;
  lVar4 = 1;
  lVar8 = 1;
  uVar3 = 0;
  uVar7 = 0xffffffffffffffff;
  while (uVar5 = lVar8 + uVar3, uVar6 = uVar3, lVar8 + uVar3 < param_2) {
    while (uVar3 = uVar5, bVar1 = *(byte *)(param_1 + uVar7 + lVar8),
          bVar9 = *(byte *)(param_1 + uVar3) == bVar1, bVar1 <= *(byte *)(param_1 + uVar3) && !bVar9
          ) {
      lVar8 = 1;
      lVar4 = uVar3 - uVar7;
      uVar5 = uVar3 + 1;
      uVar6 = uVar3;
      if (param_2 <= uVar3 + 1) goto LAB_0040b920;
    }
    if (bVar9) {
      if (lVar8 == lVar4) {
        lVar8 = 1;
      }
      else {
        lVar8 = lVar8 + 1;
        uVar3 = uVar6;
      }
    }
    else {
      lVar4 = 1;
      lVar8 = 1;
      uVar3 = uVar6 + 1;
      uVar7 = uVar6;
    }
  }
LAB_0040b920:
  uVar3 = uVar2 + 1;
  if (uVar2 + 1 <= uVar7 + 1) {
    *param_3 = lVar4;
    uVar3 = uVar7 + 1;
  }
  return uVar3;
}


/* WARNING: Type propagation algorithm not settling */

byte * FUN_0040b9b0(long param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  byte *__n;
  byte **ppbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *local_840;
  byte *local_838 [256];
  byte *local_38;
  
  if (param_4 < (byte *)0x3) {
    local_840 = (byte *)0x1;
    __n = param_4 + -1;
  }
  else {
    __n = (byte *)FUN_0040b880(param_3,param_4,&local_840);
  }
  pbVar5 = local_840;
  ppbVar3 = local_838;
  do {
    *ppbVar3 = param_4;
    ppbVar3 = ppbVar3 + 1;
  } while (&local_38 != ppbVar3);
  if (param_4 == (byte *)0x0) {
    iVar2 = memcmp(param_3,param_3 + (long)local_840,(size_t)__n);
    if (iVar2 == 0) {
      return (byte *)0;
    }
  }
  else {
    pbVar10 = param_4 + -1;
    pbVar4 = param_3;
    do {
      bVar1 = *pbVar4;
      lVar6 = (long)pbVar10 - (long)pbVar4;
      pbVar4 = pbVar4 + 1;
      local_838[bVar1] = param_3 + lVar6;
    } while (param_3 + (long)param_4 != pbVar4);
    iVar2 = memcmp(param_3,param_3 + (long)local_840,(size_t)__n);
    if (iVar2 == 0) {
      pbVar4 = __n + -1;
      pbVar7 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
LAB_0040bbe9:
      do {
        while( true ) {
          pbVar9 = pbVar7 + (long)param_4;
          lVar6 = FUN_0040aed0(param_2 + param_1,0,(long)pbVar9 - (long)param_2);
          if (lVar6 != 0) {
            return (byte *)0;
          }
          if (pbVar9 == (byte *)0x0) {
            return (byte *)0;
          }
          pbVar8 = local_838[pbVar9[param_1 + -1]];
          param_2 = pbVar9;
          if (pbVar8 == (byte *)0x0) break;
          if ((pbVar8 < pbVar5) && (pbVar11 != (byte *)0x0)) {
            pbVar8 = param_4 + -(long)pbVar5;
          }
          pbVar7 = pbVar7 + (long)pbVar8;
          pbVar11 = (byte *)0x0;
        }
        pbVar9 = __n;
        if (__n <= pbVar11) {
          pbVar9 = pbVar11;
        }
        if (pbVar9 < pbVar10) {
          do {
            if (param_3[(long)pbVar9] != (pbVar7 + param_1)[(long)pbVar9]) {
              pbVar7 = pbVar9 + (long)(pbVar7 + (1 - (long)__n));
              pbVar11 = (byte *)0x0;
              goto LAB_0040bbe9;
            }
            pbVar9 = pbVar9 + 1;
          } while (pbVar9 != pbVar10);
        }
        pbVar9 = __n;
        if ((pbVar11 < __n) &&
           (pbVar8 = pbVar4, (pbVar7 + param_1)[(long)pbVar4] == param_3[(long)pbVar4])) {
          do {
            pbVar9 = pbVar8;
            if (pbVar11 == pbVar9) break;
            pbVar8 = pbVar9 + -1;
          } while (param_3[(long)(pbVar9 + -1)] == (pbVar9 + -1)[(long)(pbVar7 + param_1)]);
        }
        if (pbVar9 < pbVar11 + 1) {
          return pbVar7 + param_1;
        }
        pbVar7 = pbVar7 + (long)pbVar5;
        pbVar11 = param_4 + -(long)pbVar5;
      } while( true );
    }
  }
  pbVar5 = param_4 + -(long)__n;
  if (param_4 + -(long)__n < __n) {
    pbVar5 = __n;
  }
  pbVar10 = (byte *)0x0;
  local_840 = pbVar5 + 1;
  do {
    while( true ) {
      pbVar4 = param_4 + (long)pbVar10;
      lVar6 = FUN_0040aed0(param_2 + param_1,0,(long)pbVar4 - (long)param_2);
      if ((pbVar4 == (byte *)0x0) || (lVar6 != 0)) {
        return (byte *)0x0;
      }
      pbVar7 = local_838[pbVar4[param_1 + -1]];
      param_2 = pbVar4;
      if (pbVar7 == (byte *)0x0) break;
LAB_0040baa0:
      pbVar10 = pbVar10 + (long)pbVar7;
    }
    pbVar4 = pbVar10 + param_1;
    if (__n < param_4 + -1) {
      pbVar7 = __n;
      if (pbVar4[(long)__n] == param_3[(long)__n]) {
        do {
          pbVar7 = pbVar7 + 1;
          if (param_4 + -1 <= pbVar7) goto LAB_0040bb23;
        } while (param_3[(long)pbVar7] == pbVar4[(long)pbVar7]);
      }
      pbVar10 = pbVar10 + (1 - (long)__n);
      goto LAB_0040baa0;
    }
LAB_0040bb23:
    pbVar7 = __n + -1;
    if (pbVar7 == (byte *)0xffffffffffffffff) {
      return pbVar4;
    }
    if (pbVar4[(long)pbVar7] == param_3[(long)(__n + -1)]) {
      do {
        pbVar7 = pbVar7 + -1;
        if (pbVar7 == (byte *)0xffffffffffffffff) {
          return pbVar4;
        }
      } while (param_3[(long)pbVar7] == pbVar4[(long)pbVar7]);
    }
    pbVar10 = pbVar10 + (long)(pbVar5 + 1);
  } while( true );
}


char * FUN_0040bd00(char *param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  ulong __n;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  bool bVar18;
  long local_40 [2];
  
  cVar5 = *param_1;
  cVar2 = *param_2;
  pcVar7 = param_1;
  if (cVar5 == '\0') {
    pcVar7 = (char *)0x0;
    if (cVar2 == '\0') {
      pcVar7 = param_1;
    }
  }
  else if (cVar2 != '\0') {
    bVar3 = true;
    pcVar12 = param_1;
    pcVar13 = param_2;
    cVar11 = cVar2;
    do {
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
      bVar18 = cVar11 == cVar5;
      cVar11 = *pcVar13;
      bVar3 = (bool)(bVar3 & bVar18);
      cVar5 = *pcVar12;
      if (cVar5 == '\0') {
        if (cVar11 != '\0') {
          return (char *)0x0;
        }
        break;
      }
    } while (cVar11 != '\0');
    if (!bVar3) {
      uVar14 = (long)pcVar13 - (long)param_2;
      pcVar7 = strchr(param_1 + 1,(int)cVar2);
      if ((pcVar7 != (char *)0x0) && (uVar14 != 1)) {
        pcVar13 = pcVar13 + -uVar14;
        lVar15 = (long)(param_1 + uVar14) - (long)pcVar7;
        if (param_1 + uVar14 < pcVar7) {
          lVar15 = 1;
        }
        if (uVar14 < 0x20) {
          if (uVar14 < 3) {
            local_40[0] = 1;
            __n = uVar14 - 1;
          }
          else {
            __n = FUN_0040b880(pcVar13,uVar14,local_40);
          }
          lVar17 = local_40[0];
          iVar6 = memcmp(pcVar13,pcVar13 + local_40[0],__n);
          if (iVar6 == 0) {
            uVar9 = __n - 1;
            lVar16 = 0;
            uVar10 = 0;
            while( true ) {
              lVar1 = uVar14 + lVar16;
              lVar15 = FUN_0040aed0(pcVar7 + lVar15,0,lVar1 - lVar15);
              if ((lVar1 == 0) || (lVar15 != 0)) break;
              uVar8 = uVar10;
              if (uVar10 <= __n) {
                uVar8 = __n;
              }
              lVar15 = lVar1;
              if (uVar8 < uVar14) {
                if (pcVar7[lVar16 + uVar8] == pcVar13[uVar8]) {
                  do {
                    uVar8 = uVar8 + 1;
                    if (uVar14 == uVar8) goto LAB_0040bed3;
                  } while (pcVar13[uVar8] == pcVar7[uVar8 + lVar16]);
                }
                uVar10 = 0;
                lVar16 = uVar8 + (1 - __n) + lVar16;
              }
              else {
LAB_0040bed3:
                uVar8 = __n;
                if ((uVar10 < __n) && (uVar4 = uVar9, pcVar13[uVar9] == pcVar7[uVar9 + lVar16])) {
                  do {
                    uVar8 = uVar4;
                    if (uVar10 == uVar8) break;
                    uVar4 = uVar8 - 1;
                  } while (pcVar13[uVar8 - 1] == pcVar7[(uVar8 - 1) + lVar16]);
                }
                if (uVar8 < uVar10 + 1) {
                  return pcVar7 + lVar16;
                }
                lVar16 = lVar16 + lVar17;
                uVar10 = uVar14 - lVar17;
              }
            }
          }
          else {
            uVar9 = uVar14 - __n;
            if (uVar14 - __n < __n) {
              uVar9 = __n;
            }
            lVar17 = 0;
            local_40[0] = uVar9 + 1;
            while( true ) {
              lVar16 = uVar14 + lVar17;
              lVar15 = FUN_0040aed0(pcVar7 + lVar15,0,lVar16 - lVar15);
              if ((lVar16 == 0) || (lVar15 != 0)) break;
              lVar15 = lVar16;
              if (__n < uVar14) {
                uVar10 = __n;
                if (pcVar7[lVar17 + __n] == pcVar13[__n]) {
                  do {
                    uVar10 = uVar10 + 1;
                    if (uVar14 <= uVar10) goto LAB_0040bff3;
                  } while (pcVar13[uVar10] == pcVar7[uVar10 + lVar17]);
                }
                lVar17 = uVar10 + (1 - __n) + lVar17;
              }
              else {
LAB_0040bff3:
                pcVar12 = pcVar7 + lVar17;
                lVar16 = __n - 1;
                if (lVar16 == -1) {
                  return pcVar12;
                }
                if (pcVar12[lVar16] == pcVar13[__n - 1]) {
                  do {
                    lVar16 = lVar16 + -1;
                    if (lVar16 == -1) {
                      return pcVar12;
                    }
                  } while (pcVar13[lVar16] == pcVar12[lVar16]);
                }
                lVar17 = lVar17 + uVar9 + 1;
              }
            }
          }
          pcVar7 = (char *)0x0;
        }
        else {
          pcVar7 = (char *)FUN_0040b9b0(pcVar7,lVar15,pcVar13,uVar14);
        }
      }
    }
  }
  return pcVar7;
}


bool FUN_0040c0a0(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = unsetenv("TZ");
  }
  else {
    iVar1 = setenv("TZ",(char *)(param_1 + 9),1);
  }
  if (iVar1 == 0) {
    tzset();
  }
  return iVar1 == 0;
}


void FUN_0040c0f0(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*param_1;
    free(param_1);
    param_1 = plVar1;
  } while (plVar1 != (long *)0x0);
  return;
}


undefined FUN_0040c120(undefined param_1)

{
  undefined uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = __errno_location();
  iVar3 = *piVar2;
  uVar1 = FUN_0040c0a0(param_1);
  if ((char)uVar1 == '\0') {
    iVar3 = *piVar2;
  }
  FUN_0040c0f0(param_1);
  *piVar2 = iVar3;
  return uVar1;
}


undefined * FUN_0040c170(char *param_1)

{
  ulong __n;
  size_t sVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if (param_1 == (char *)0x0) {
    puVar2 = (undefined *)malloc(0x80);
    if (puVar2 != (undefined *)0x0) {
      *puVar2 = 0;
      *(undefined *)(puVar2 + 1) = 0;
      return puVar2;
    }
  }
  else {
    sVar1 = strlen(param_1);
    __n = sVar1 + 1;
    uVar3 = 0x76;
    if (0x75 < __n) {
      uVar3 = __n;
    }
    puVar2 = (undefined *)malloc(uVar3 + 0x11 & 0xfffffffffffffff8);
    if (puVar2 != (undefined *)0x0) {
      *puVar2 = 0;
      *(undefined *)(puVar2 + 1) = 1;
      memcpy((void *)((long)puVar2 + 9),param_1,__n);
      *(undefined *)((long)puVar2 + sVar1 + 10) = 0;
    }
  }
  return puVar2;
}


undefined FUN_0040c200(long *param_1,char *param_2)

{
  char *__s2;
  long *plVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  char *__s1;
  
  __s2 = *(char **)(param_2 + 0x30);
  if (__s2 == (char *)0x0) {
    return 1;
  }
  if ((__s2 < param_2) || (param_2 + 0x38 <= __s2)) {
    __s1 = (char *)((long)param_1 + 9);
    if (*__s2 == '\0') {
      __s1 = "";
    }
    else {
LAB_0040c248:
      iVar2 = strcmp(__s1,__s2);
      if (iVar2 != 0) {
        do {
          if (*__s1 == '\0') {
            if ((char *)((long)param_1 + 9) == __s1) {
              if (*(char *)(param_1 + 1) != '\0') goto LAB_0040c273;
              sVar3 = strlen(__s2);
              sVar3 = sVar3 + 1;
              uVar4 = 0;
            }
            else {
              sVar3 = strlen(__s2);
              sVar3 = sVar3 + 1;
              uVar4 = (long)__s1 - (long)(char *)((long)param_1 + 9);
              if (~uVar4 < sVar3) {
                piVar5 = __errno_location();
                *piVar5 = 0xc;
                return 0;
              }
            }
            if (uVar4 + sVar3 < 0x77) {
              memcpy(__s1,__s2,sVar3);
              __s1[sVar3] = '\0';
            }
            else {
              lVar6 = FUN_0040c170(__s2);
              *param_1 = lVar6;
              if (lVar6 == 0) {
                return 0;
              }
              *(undefined *)(lVar6 + 8) = 0;
              __s1 = (char *)(lVar6 + 9);
            }
            break;
          }
LAB_0040c273:
          sVar3 = strlen(__s1);
          __s1 = __s1 + sVar3 + 1;
          if ((*__s1 != '\0') || (plVar1 = (long *)*param_1, plVar1 == (long *)0x0))
          goto LAB_0040c248;
          __s1 = (char *)((long)plVar1 + 9);
          iVar2 = strcmp(__s1,__s2);
          param_1 = plVar1;
          if (iVar2 == 0) break;
        } while( true );
      }
    }
    *(char **)(param_2 + 0x30) = __s1;
  }
  return 1;
}


long FUN_0040c380(long param_1)

{
  char cVar1;
  int iVar2;
  char *__s2;
  long lVar3;
  int *piVar4;
  
  __s2 = getenv("TZ");
  if (__s2 == (char *)0x0) {
    if (*(char *)(param_1 + 8) == '\0') {
      return 1;
    }
  }
  else if (*(char *)(param_1 + 8) != '\0') {
    iVar2 = strcmp((char *)(param_1 + 9),__s2);
    if (iVar2 == 0) {
      return 1;
    }
  }
  lVar3 = FUN_0040c170(__s2);
  if (lVar3 != 0) {
    cVar1 = FUN_0040c0a0(param_1);
    if (cVar1 == '\0') {
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      if (lVar3 != 1) {
        FUN_0040c0f0(lVar3);
      }
      *piVar4 = iVar2;
      return 0;
    }
  }
  return lVar3;
}


void FUN_0040c430(long param_1)

{
  if (param_1 != 1) {
    FUN_0040c0f0();
    return;
  }
  return;
}


tm * FUN_0040c450(long param_1,time_t *param_2,tm *param_3)

{
  char cVar1;
  long lVar2;
  tm *ptVar3;
  
  if (param_1 == 0) {
    ptVar3 = gmtime_r(param_2,param_3);
    return ptVar3;
  }
  lVar2 = FUN_0040c380();
  if (lVar2 != 0) {
    ptVar3 = localtime_r(param_2,param_3);
    if ((ptVar3 == (tm *)0x0) || (cVar1 = FUN_0040c200(param_1,param_3), cVar1 == '\0')) {
      if (lVar2 != 1) {
        FUN_0040c120(lVar2);
      }
    }
    else if ((lVar2 == 1) || (cVar1 = FUN_0040c120(lVar2), cVar1 != '\0')) {
      return param_3;
    }
  }
  return (tm *)0x0;
}


long FUN_0040c500(long param_1,uint *param_2)

{
  char cVar1;
  long lVar2;
  tm *ptVar3;
  long local_60;
  tm local_58;
  
  if (param_1 == 0) {
    lVar2 = FUN_0040c620(param_2);
    return lVar2;
  }
  lVar2 = FUN_0040c380();
  if (lVar2 != 0) {
    local_60 = FUN_0040d6b0(param_2);
    if (((local_60 != -1) ||
        (((ptVar3 = localtime_r(&local_60,&local_58), ptVar3 != (tm *)0x0 &&
          ((((param_2[8] == 0) == (local_58.tm_isdst == 0) || ((int)param_2[8] < 0)) ||
           (local_58.tm_isdst < 0)))) &&
         ((param_2[4] ^ local_58.tm_mon | param_2[5] ^ local_58.tm_year |
           param_2[3] ^ local_58.tm_mday | param_2[2] ^ local_58.tm_hour |
           param_2[1] ^ local_58.tm_min | *param_2 ^ local_58.tm_sec) == 0)))) &&
       (cVar1 = FUN_0040c200(param_1,param_2), cVar1 == '\0')) {
      local_60 = -1;
    }
    if (lVar2 == 1) {
      return local_60;
    }
    cVar1 = FUN_0040c120(lVar2);
    if (cVar1 != '\0') {
      return local_60;
    }
  }
  return -1;
}


void FUN_0040c620(long param_1)

{
  *(undefined *)(param_1 + 0x20) = 0;
  FUN_0040d270(param_1,gmtime_r,&DAT_00617618);
  return;
}


ulong FUN_0040c640(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_0040ced0(param_1);
  if ((uVar1 & 0x20) == 0) {
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (lVar2 == 0) {
      piVar4 = __errno_location();
      return (ulong)-(uint)(*piVar4 != 9);
    }
  }
  else if ((int)uVar3 == 0) {
    piVar4 = __errno_location();
    *piVar4 = 0;
    return 0xffffffff;
  }
  return 0xffffffff;
}


void FUN_0040c6a0(char *param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_3 & 0xffffffff;
  }
  iVar1 = open(param_1,param_2,uVar2);
  FUN_0040ccc0(iVar1);
  return;
}


bool FUN_0040c6f0(int param_1)

{
  bool bVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  
  bVar9 = 0;
  pbVar2 = (byte *)setlocale(param_1,(char *)0x0);
  bVar1 = true;
  bVar6 = false;
  bVar8 = pbVar2 == (byte *)0x0;
  if (!bVar8) {
    lVar3 = 2;
    pbVar4 = pbVar2;
    pbVar5 = &DAT_00413870;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar6 = *pbVar4 < *pbVar5;
      bVar8 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + (ulong)bVar9 * -2 + 1;
      pbVar5 = pbVar5 + (ulong)bVar9 * -2 + 1;
    } while (bVar8);
    bVar1 = false;
    bVar7 = false;
    bVar6 = (!bVar6 && !bVar8) == bVar6;
    if (!bVar6) {
      lVar3 = 6;
      pbVar4 = (byte *)"POSIX";
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar7 = *pbVar2 < *pbVar4;
        bVar6 = *pbVar2 == *pbVar4;
        pbVar2 = pbVar2 + (ulong)bVar9 * -2 + 1;
        pbVar4 = pbVar4 + (ulong)bVar9 * -2 + 1;
      } while (bVar6);
      return (!bVar7 && !bVar6) != bVar7;
    }
  }
  return bVar1;
}


/* WARNING: Could not reconcile some variable overlaps */

char * FUN_0040c750(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *__s1;
  size_t sVar5;
  size_t sVar6;
  char *pcVar7;
  size_t __n;
  char *__file;
  FILE *__stream;
  byte *pbVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  char *__ptr;
  bool bVar14;
  long local_d0;
  undefined local_c0;
  undefined local_b8;
  undefined auStack_80 [8];
  undefined local_78;
  
  __s1 = nl_langinfo(0xe);
  if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  if (DAT_00617620 != (char *)0x0) goto LAB_0040c78a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_0040c875:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_0040c896;
    }
  }
  else {
    __n = strlen(pcVar7);
    if (__n == 0) {
      sVar6 = 0xe;
    }
    else {
      if (pcVar7[__n - 1] != '/') {
        sVar6 = __n + 0xf;
        sVar5 = __n + 1;
        goto LAB_0040c875;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_0040c896:
      puVar13 = (undefined *)(__file + sVar5);
      *puVar13 = 0x2e74657372616863;
      *(undefined *)((long)puVar13 + 0xc) = 0x73;
      *(undefined *)(puVar13 + 1) = 0x61696c61;
      iVar2 = open(__file,0);
      if (-1 < iVar2) {
        __stream = fdopen(iVar2,"r");
        local_d0 = 0;
        if (__stream != (FILE *)0x0) {
          pcVar7 = (char *)0x0;
LAB_0040c930:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040cabc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_0040c930;
              if (uVar4 == 0x23) goto LAB_0040cb21;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040cacf;
              do {
                puVar10 = puVar13;
                uVar3 = *(uint *)puVar10 + 0xfefefeff & ~*(uint *)puVar10;
                uVar4 = uVar3 & 0x80808080;
                puVar13 = (undefined *)((long)puVar10 + 4);
              } while (uVar4 == 0);
              bVar14 = (uVar3 & 0x8080) == 0;
              if (bVar14) {
                uVar4 = uVar4 >> 0x10;
              }
              if (bVar14) {
                puVar13 = (undefined *)((long)puVar10 + 6);
              }
              lVar11 = (long)puVar13 +
                       ((-3 - (ulong)CARRY1((byte)uVar4,(byte)uVar4)) - (long)&local_b8);
              puVar13 = &local_78;
              do {
                puVar10 = puVar13;
                uVar3 = *(uint *)puVar10 + 0xfefefeff & ~*(uint *)puVar10;
                uVar4 = uVar3 & 0x80808080;
                puVar13 = (undefined *)((long)puVar10 + 4);
              } while (uVar4 == 0);
              bVar14 = (uVar3 & 0x8080) == 0;
              if (bVar14) {
                uVar4 = uVar4 >> 0x10;
              }
              if (bVar14) {
                puVar13 = (undefined *)((long)puVar10 + 6);
              }
              local_c0 = (long)puVar13 +
                         ((-3 - (ulong)CARRY1((byte)uVar4,(byte)uVar4)) - (long)&local_78);
              lVar9 = lVar11 + local_c0;
              if (local_d0 == 0) {
                pcVar7 = (char *)malloc(lVar9 + 3);
              }
              else {
                lVar9 = lVar9 + local_d0;
                pcVar7 = (char *)realloc(__ptr,lVar9 + 3);
              }
              local_d0 = lVar9 + 2;
              if (pcVar7 == (char *)0x0) {
                pcVar7 = "";
                free(__ptr);
                FUN_0040ced0(__stream);
                goto LAB_0040c8d4;
              }
              uVar12 = lVar11 + 1;
              puVar13 = (undefined *)(pcVar7 + (-2 - lVar11) + (local_d0 - local_c0));
              uVar4 = (uint)uVar12;
              if (uVar4 < 8) {
                if ((uVar12 & 4) == 0) {
                  if (uVar4 != 0) {
                    *(undefined *)puVar13 = (undefined)local_b8;
                    if ((uVar12 & 2) != 0) {
                      *(undefined *)((long)puVar13 + ((uVar12 & 0xffffffff) - 2)) =
                           *(undefined *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 2));
                    }
                  }
                }
                else {
                  *(undefined *)puVar13 = (undefined)local_b8;
                  *(undefined *)((long)puVar13 + ((uVar12 & 0xffffffff) - 4)) =
                       *(undefined *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 4));
                }
              }
              else {
                *puVar13 = CONCAT44(local_b8._4_4_,(undefined)local_b8);
                *(undefined *)((long)puVar13 + ((uVar12 & 0xffffffff) - 8)) =
                     *(undefined *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 8));
                lVar11 = (long)puVar13 - ((ulong)(puVar13 + 1) & 0xfffffffffffffff8);
                uVar4 = uVar4 + (int)lVar11 & 0xfffffff8;
                if (7 < uVar4) {
                  uVar3 = 0;
                  do {
                    uVar12 = (ulong)uVar3;
                    uVar3 = uVar3 + 8;
                    *(undefined *)(((ulong)(puVar13 + 1) & 0xfffffffffffffff8) + uVar12) =
                         *(undefined *)((long)&local_b8 + (uVar12 - lVar11));
                  } while (uVar3 < uVar4);
                }
              }
              uVar12 = local_c0 + 1;
              puVar13 = (undefined *)(pcVar7 + (local_d0 - local_c0) + -1);
              uVar4 = (uint)uVar12;
              if (uVar4 < 8) {
                if ((uVar12 & 4) == 0) {
                  if (uVar4 != 0) {
                    *(undefined *)puVar13 = (undefined)local_78;
                    if ((uVar12 & 2) != 0) {
                      *(undefined *)((long)puVar13 + ((uVar12 & 0xffffffff) - 2)) =
                           *(undefined *)((long)auStack_80 + (uVar12 & 0xffffffff) + 6);
                    }
                  }
                }
                else {
                  *(undefined *)puVar13 = (undefined)local_78;
                  *(undefined *)((long)puVar13 + ((uVar12 & 0xffffffff) - 4)) =
                       *(undefined *)((long)auStack_80 + (uVar12 & 0xffffffff) + 4);
                }
              }
              else {
                *puVar13 = CONCAT44(local_78._4_4_,(undefined)local_78);
                *(undefined *)((long)puVar13 + ((uVar12 & 0xffffffff) - 8)) =
                     *(undefined *)((long)auStack_80 + (uVar12 & 0xffffffff));
                lVar11 = (long)puVar13 - ((ulong)(puVar13 + 1) & 0xfffffffffffffff8);
                uVar4 = uVar4 + (int)lVar11 & 0xfffffff8;
                if (7 < uVar4) {
                  uVar3 = 0;
                  do {
                    uVar12 = (ulong)uVar3;
                    uVar3 = uVar3 + 8;
                    *(undefined *)(((ulong)(puVar13 + 1) & 0xfffffffffffffff8) + uVar12) =
                         *(undefined *)((long)&local_78 + (uVar12 - lVar11));
                  } while (uVar3 < uVar4);
                }
              }
              pbVar8 = (byte *)__stream->_IO_read_ptr;
              if (pbVar8 < __stream->_IO_read_end) break;
LAB_0040cabc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040cacf;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040c8ce;
    }
  }
  DAT_00617620 = "";
LAB_0040c78a:
  cVar1 = *DAT_00617620;
  pcVar7 = DAT_00617620;
  do {
    if (cVar1 == '\0') {
LAB_0040c7e4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_0040c7e4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_0040cb21:
  do {
    pbVar8 = (byte *)__stream->_IO_read_ptr;
    if (pbVar8 < __stream->_IO_read_end) {
      __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
      uVar4 = (uint)*pbVar8;
      bVar14 = true;
    }
    else {
      uVar4 = __uflow(__stream);
      bVar14 = uVar4 != 0xffffffff;
    }
  } while ((uVar4 != 10) && (bVar14));
  if (uVar4 == 0xffffffff) goto LAB_0040cacf;
  goto LAB_0040c930;
LAB_0040cacf:
  FUN_0040ced0(__stream);
  if (local_d0 == 0) {
LAB_0040c8ce:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_0040c8d4:
  free(__file);
  DAT_00617620 = pcVar7;
  goto LAB_0040c78a;
}


uint FUN_0040ccc0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_0040d730();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


/* WARNING: Could not reconcile some variable overlaps */

undefined * FUN_0040cd10(long param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  char *__s;
  size_t sVar3;
  ulong uVar4;
  undefined *puVar5;
  int *piVar6;
  char **ppcVar7;
  ulong uVar8;
  undefined *__dest;
  long lVar9;
  bool bVar10;
  ulong local_50;
  char **ppcStack_48;
  
  local_50 = *param_2;
  ppcStack_48 = (char **)param_2[1];
  uVar2 = param_2[2];
  if (param_1 == 0) {
    __dest = (undefined *)FUN_00409560(1);
    puVar5 = __dest;
  }
  else {
    uVar8 = 0;
    lVar9 = param_1;
    do {
      uVar4 = local_50 & 0xffffffff;
      if ((uint)local_50 < 0x30) {
        local_50 = (ulong)((uint)local_50 + 8);
        ppcVar7 = (char **)(uVar4 + uVar2);
      }
      else {
        ppcVar7 = ppcStack_48;
        ppcStack_48 = ppcStack_48 + 1;
      }
      sVar3 = strlen(*ppcVar7);
      bVar10 = CARRY8(uVar8,sVar3);
      uVar8 = uVar8 + sVar3;
      if (bVar10) {
        uVar8 = 0xffffffffffffffff;
      }
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    if (0x7fffffff < uVar8) {
      piVar6 = __errno_location();
      *piVar6 = 0x4b;
      return (undefined *)0x0;
    }
    puVar5 = (undefined *)FUN_00409560(uVar8 + 1);
    __dest = puVar5;
    do {
      uVar1 = *(uint *)param_2;
      if (uVar1 < 0x30) {
        ppcVar7 = (char **)((ulong)uVar1 + param_2[2]);
        *(uint *)param_2 = uVar1 + 8;
      }
      else {
        ppcVar7 = (char **)param_2[1];
        param_2[1] = (ulong)(ppcVar7 + 1);
      }
      __s = *ppcVar7;
      sVar3 = strlen(__s);
      memcpy(__dest,__s,sVar3);
      __dest = __dest + sVar3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  *__dest = 0;
  return puVar5;
}


undefined FUN_0040ce40(char *param_1,undefined param_2)

{
  int iVar1;
  long lVar2;
  undefined uVar3;
  int *piVar4;
  undefined local_10 [2];
  
  if (*param_1 != '\0') {
    if ((*param_1 == '%') && (param_1[1] == 's')) {
      lVar2 = 0;
      do {
        lVar2 = lVar2 + 1;
        if (param_1[lVar2 * 2] == '\0') goto LAB_0040ce78;
      } while ((param_1[lVar2 * 2] == '%') && (param_1[lVar2 * 2 + 1] == 's'));
    }
    iVar1 = FUN_0040d6d0(local_10,param_1,param_2);
    if (-1 < iVar1) {
      return local_10[0];
    }
    piVar4 = __errno_location();
    if (*piVar4 != 0xc) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_004097b0();
  }
  lVar2 = 0;
LAB_0040ce78:
  uVar3 = FUN_0040cd10(lVar2);
  return uVar3;
}


int FUN_0040ced0(FILE *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  __off_t _Var4;
  
  iVar1 = fileno(param_1);
  if (-1 < iVar1) {
    iVar1 = __freading();
    if (iVar1 != 0) {
      iVar1 = fileno(param_1);
      _Var4 = lseek(iVar1,0,1);
      if (_Var4 == -1) goto LAB_0040cf37;
    }
    iVar1 = FUN_0040cf50(param_1);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      iVar2 = fclose(param_1);
      if (iVar1 != 0) {
        *piVar3 = iVar1;
        iVar2 = -1;
      }
      return iVar2;
    }
  }
LAB_0040cf37:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_0040cf50(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_0040cf90(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_0040cf90(FILE *param_1,__off_t param_2,int param_3)

{
  uint uVar1;
  int __fd;
  ulong uVar2;
  
  if (((param_1->_IO_read_end == param_1->_IO_read_ptr) &&
      (param_1->_IO_write_ptr == param_1->_IO_write_base)) &&
     (param_1->_IO_save_base == (char *)0x0)) {
    __fd = fileno(param_1);
    uVar2 = lseek(__fd,param_2,param_3);
    if (uVar2 != 0xffffffffffffffff) {
      param_1->_flags = param_1->_flags & 0xffffffef;
      param_1->_offset = uVar2;
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar1 = fseeko(param_1,param_2,param_3);
  return (ulong)uVar1;
}


long FUN_0040cff0(ulong param_1,long param_2,int param_3,int param_4,int param_5,uint param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = ((int)((long)param_1 >> 2) + 0x1db) - (uint)((param_1 & 3) == 0);
  iVar4 = ((int)((long)(int)param_6 >> 2) + 0x1db) - (uint)((param_6 & 3) == 0);
  iVar2 = iVar3 / 0x19 + (iVar3 % 0x19 >> 0x1f);
  iVar1 = iVar4 / 0x19 + (iVar4 % 0x19 >> 0x1f);
  return ((long)param_5 +
         (((long)param_4 +
          (((long)param_3 +
           (((param_2 + (param_1 - (long)(int)param_6) * 0x16d) - (long)param_7) +
           (long)(((iVar2 >> 2) - (iVar1 >> 2)) + ((iVar3 - iVar4) - (iVar2 - iVar1)))) * 0x18) -
          (long)param_8) * 0x3c) - (long)param_9) * 0x3c) - (long)param_10;
}


long FUN_0040d110(void)

{
  long lVar1;
  long in_R9;
  long param_7;
  
  if (param_7 != 0) {
    lVar1 = FUN_0040cff0();
    if (!SCARRY8(lVar1,in_R9)) {
      return lVar1 + in_R9;
    }
  }
  if (-1 < in_R9) {
    lVar1 = 0x7fffffffffffffff;
    if (0x7ffffffffffffffd < in_R9) {
      lVar1 = in_R9 + -1;
    }
    return lVar1;
  }
  if (in_R9 < -0x7ffffffffffffffe) {
    return in_R9 + 1;
  }
  return -0x8000000000000000;
}


void FUN_0040d1b0(code *param_1,long *param_2,undefined param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_30;
  
  local_30 = *param_2;
  lVar2 = (*param_1)(&local_30,param_3);
  if (lVar2 == 0) {
    lVar1 = 0;
    lVar5 = *param_2;
    if (*param_2 != 0) {
      while ((lVar4 = lVar1,
             lVar3 = (ulong)(((uint)lVar4 | (uint)lVar5) & 1) + (lVar5 >> 1) + (lVar4 >> 1),
             lVar4 == lVar3 || (lVar5 == lVar3))) {
        local_30 = lVar3;
        lVar2 = (*param_1)(&local_30,param_3);
        lVar1 = lVar3;
        if (lVar2 == 0) {
          lVar1 = lVar4;
          lVar5 = lVar3;
        }
      }
      if ((lVar2 == 0) && (lVar4 != 0)) {
        local_30 = lVar4;
        (*param_1)(&local_30,param_3);
        return;
      }
    }
  }
  return;
}


long FUN_0040d270(int *param_1,code *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  int local_e0;
  long local_c8;
  long local_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined local_88;
  long local_78 [4];
  int local_58;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[8];
  uVar11 = 0;
  iVar15 = param_1[4] % 0xc;
  uVar5 = iVar15 >> 0x1f;
  uVar12 = (long)(int)(param_1[4] / 0xc + uVar5) + (long)param_1[5];
  if ((uVar12 & 3) == 0) {
    uVar11 = 1;
    if (uVar12 == ((long)uVar12 / 100) * 100) {
      uVar11 = (uint)(((uint)((long)uVar12 / 100) & 3) == 1);
    }
  }
  iVar13 = 6;
  lVar14 = (long)param_1[3] +
           (long)(int)(*(ushort *)
                        (&DAT_00413900 +
                        ((long)(int)(iVar15 + (uVar5 & 0xc)) + (long)(int)uVar11 * 0xd) * 2) - 1);
  iVar15 = 0x3b;
  if (iVar1 < 0x3c) {
    iVar15 = iVar1;
  }
  iVar6 = 0;
  if (-1 < iVar15) {
    iVar6 = iVar15;
  }
  local_e0 = (int)*param_3;
  lVar7 = FUN_0040cff0(uVar12,lVar14,iVar3,iVar2,iVar6,0x46,0,0,0,-local_e0);
  bVar19 = false;
  lVar17 = lVar7;
  lVar18 = lVar7;
  local_c8 = lVar7;
  while( true ) {
    uVar8 = FUN_0040d1b0(param_2,&local_c8,&local_b8);
    lVar10 = local_c8;
    lVar9 = FUN_0040d110(uVar12,lVar14,iVar3,iVar2,iVar6,local_c8,uVar8);
    if (lVar10 == lVar9) break;
    if ((lVar10 == lVar17) && (lVar10 != lVar18)) {
      if (local_98 < 0) goto LAB_0040d480;
      if (iVar4 < 0) {
        if (bVar19 <= (local_98 != 0)) goto LAB_0040d480;
      }
      else if ((iVar4 != 0) != (local_98 != 0)) goto LAB_0040d480;
    }
    iVar13 = iVar13 + -1;
    if (iVar13 == 0) goto LAB_0040d530;
    bVar19 = local_98 != 0;
    lVar17 = lVar18;
    lVar18 = lVar10;
    local_c8 = lVar9;
  }
  lVar10 = lVar9;
  if ((((iVar4 == 0) != (local_98 == 0)) && (-1 < iVar4)) && (-1 < local_98)) {
    iVar15 = 0x92c70;
    do {
      iVar16 = 2;
      iVar13 = -iVar15;
      bVar19 = SCARRY8((long)iVar13,lVar10);
      local_c0 = iVar13 + lVar10;
      while( true ) {
        if (!bVar19) {
          uVar8 = 0x40d635;
          FUN_0040d1b0(param_2,&local_c0,local_78);
          if (((iVar4 == 0) == (local_58 == 0)) || (lVar10 = local_c8, local_58 < 0)) {
            local_c8 = FUN_0040d110(uVar12,lVar14,iVar3,iVar2,iVar6,local_c0,local_78);
            FUN_0040d1b0(param_2,&local_c8,&local_b8,uVar8);
            lVar10 = local_c8;
            goto LAB_0040d480;
          }
        }
        iVar13 = iVar13 + iVar15 * 2;
        if (iVar16 == 1) break;
        iVar16 = 1;
        bVar19 = SCARRY8((long)iVar13,lVar10);
        local_c0 = iVar13 + lVar10;
      }
      iVar15 = iVar15 + 0x92c70;
    } while (iVar15 != 0x100dc400);
  }
LAB_0040d480:
  *param_3 = lVar10 - (-local_e0 + lVar7);
  local_c8 = lVar10;
  if ((local_b8 == iVar1) ||
     ((lVar14 = (long)iVar1 + ((ulong)(iVar1 < 1 && local_b8 == 0x3c) - (long)iVar6),
      local_c8 = lVar10 + lVar14, !SCARRY8(lVar10,lVar14) &&
      (local_78[0] = local_c8, lVar14 = (*param_2)(local_78,&local_b8), lVar14 != 0)))) {
    *param_1 = local_b8;
    param_1[1] = iStack_b4;
    param_1[2] = iStack_b0;
    param_1[3] = iStack_ac;
    param_1[4] = local_a8;
    param_1[5] = iStack_a4;
    param_1[6] = iStack_a0;
    param_1[7] = iStack_9c;
    param_1[8] = local_98;
    param_1[9] = iStack_94;
    param_1[10] = iStack_90;
    param_1[0xb] = iStack_8c;
    *(undefined *)(param_1 + 0xc) = local_88;
  }
  else {
LAB_0040d530:
    local_c8 = -1;
  }
  return local_c8;
}


void FUN_0040d6b0(undefined param_1)

{
  tzset();
  FUN_0040d270(param_1,localtime_r,&DAT_00617628);
  return;
}


ulong FUN_0040d6d0(void **param_1,undefined param_2,undefined param_3)

{
  void *__ptr;
  int *piVar1;
  ulong local_10;
  
  __ptr = (void *)FUN_0040d880(0,&local_10,param_2,param_3);
  if (__ptr == (void *)0x0) {
    local_10 = 0xffffffff;
  }
  else if (local_10 < 0x80000000) {
    *param_1 = __ptr;
    local_10 = local_10 & 0xffffffff;
  }
  else {
    free(__ptr);
    piVar1 = __errno_location();
    *piVar1 = 0x4b;
    local_10 = 0xffffffff;
  }
  return local_10;
}


void FUN_0040d730(undefined param_1)

{
  FUN_0040d740(param_1,0,3);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0040d740(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_00617630 < 0) {
    iVar1 = FUN_0040d740(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_00617630 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_00617630 = 1;
      return iVar1;
    }
    iVar1 = FUN_0040d740(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_00617630 = -1;
  }
  uVar2 = fcntl(iVar1,1);
  if ((-1 < (int)uVar2) && (iVar3 = fcntl(iVar1,2,(ulong)(uVar2 | 1)), iVar3 != -1)) {
    return iVar1;
  }
  piVar4 = __errno_location();
  iVar3 = *piVar4;
  close(iVar1);
  *piVar4 = iVar3;
  return -1;
}


/* WARNING: Removing unreachable block (ram,0x0040f0bc) */
/* WARNING: Removing unreachable block (ram,0x0040f1fd) */
/* WARNING: Removing unreachable block (ram,0x0040f0d0) */
/* WARNING: Removing unreachable block (ram,0x0040e5a4) */
/* WARNING: Removing unreachable block (ram,0x0040db70) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined *
FUN_0040d880(undefined *param_1,undefined *param_2,undefined *param_3,undefined param_4)

{
  undefined uVar1;
  unkbyte10 Var2;
  undefined uVar3;
  uint uVar4;
  void *pvVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *__n;
  undefined *puVar13;
  undefined *puVar14;
  uint *puVar15;
  int *piVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  char *pcVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  char *pcVar25;
  char *pcVar26;
  undefined *puVar27;
  size_t sVar28;
  uint uVar29;
  long lVar30;
  undefined *puVar31;
  undefined *puVar32;
  bool bVar33;
  ushort in_FPUControlWord;
  float fVar34;
  undefined auStack_6f8 [4];
  uint local_6f4;
  undefined *local_6f0;
  undefined *local_6e8;
  undefined *local_6e0;
  undefined *local_6d8;
  undefined *local_6d0;
  undefined *local_6c8;
  long local_6c0;
  undefined local_6b8;
  undefined *local_6b0;
  undefined local_6a8 [4];
  undefined auStack_6a4 [12];
  undefined *local_698;
  undefined *local_690;
  int local_684;
  undefined local_680;
  uint local_67c;
  undefined local_678 [8];
  undefined *local_670;
  undefined auStack_668 [112];
  long local_588;
  undefined *local_580;
  long local_578;
  ulong local_570;
  undefined auStack_568 [78];
  undefined local_2f8 [356];
  
  local_6d8 = param_2;
  local_690 = param_1;
  iVar10 = FUN_0040f5c0(param_3,&local_588,local_678);
  if (iVar10 < 0) {
    return (undefined *)0x0;
  }
  iVar10 = FUN_0040f3a0(param_4,local_678);
  if (iVar10 < 0) {
    if (local_580 != auStack_568) {
      free(local_580);
    }
    if (local_670 != auStack_668) {
      free(local_670);
    }
    piVar16 = __errno_location();
    *piVar16 = 0x16;
    return (undefined *)0x0;
  }
  uVar11 = local_578 + 7;
  if (uVar11 < 7) {
    uVar11 = 0xffffffffffffffff;
  }
  uVar12 = uVar11 + local_570;
  puVar27 = auStack_6f8;
  if ((!CARRY8(uVar11,local_570)) &&
     (sVar28 = uVar12 + 6, puVar27 = auStack_6f8, uVar12 < 0xfffffffffffffffa)) {
    if (sVar28 < 4000) {
      local_6e0 = (undefined *)0x0;
      lVar30 = -(uVar12 + 0x1d & 0xfffffffffffffff0);
      puVar27 = auStack_6f8 + lVar30;
      local_6b0 = (undefined *)((long)&local_6f0 + lVar30);
LAB_0040d944:
      puVar31 = (undefined *)0x0;
      if (local_690 != (undefined *)0x0) {
        puVar31 = (undefined *)*local_6d8;
      }
      __n = (undefined *)0x0;
      local_6c0 = 0;
      puVar24 = (undefined *)*local_580;
      puVar20 = local_690;
      _local_6a8 = (int *)param_3;
      puVar32 = local_580;
      puVar14 = __n;
      if (puVar24 == param_3) goto LAB_0040daf8;
      do {
        puVar24 = (undefined *)((long)puVar24 - (long)_local_6a8);
        __n = puVar14 + (long)puVar24;
        puVar13 = puVar20;
        if (CARRY8((ulong)puVar14,(ulong)puVar24)) {
          if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040de70;
          __n = (undefined *)0xffffffffffffffff;
        }
        else if (puVar31 < __n) {
          if (puVar31 == (undefined *)0x0) {
            if (__n < (undefined *)0xd) {
              puVar31 = (undefined *)0xc;
            }
            else {
LAB_0040da8e:
              puVar31 = __n;
              if (__n == (undefined *)0xffffffffffffffff) goto LAB_0040de70;
            }
          }
          else {
            if ((long)puVar31 < 0) goto LAB_0040de70;
            puVar31 = (undefined *)((long)puVar31 * 2);
            if (puVar31 < __n) goto LAB_0040da8e;
          }
          if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
            local_6b8 = (undefined *)_local_6a8;
            _local_6a8 = (float)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
            local_698 = puVar24;
            *(undefined *)(puVar27 + -8) = 0x40d9ec;
            puVar13 = (undefined *)malloc((size_t)puVar31);
            if (puVar13 == (undefined *)0x0) goto LAB_0040de70;
            puVar24 = local_698;
            _local_6a8 = (int *)local_6b8;
            if ((puVar14 != (undefined *)0x0) && (local_6a8[0] != '\0')) {
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,local_6b8);
              *(undefined *)(puVar27 + -8) = 0x40da3a;
              puVar13 = (undefined *)memcpy(puVar13,puVar20,(size_t)puVar14);
              puVar24 = local_698;
            }
          }
          else {
            local_698 = puVar24;
            *(undefined *)(puVar27 + -8) = 0x40dacf;
            puVar13 = (undefined *)realloc(puVar20,(size_t)puVar31);
            if (puVar13 == (undefined *)0x0) {
LAB_0040e085:
              *(undefined *)(puVar27 + -8) = 0x40e08a;
              piVar16 = __errno_location();
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
              goto LAB_0040e098;
            }
            puVar24 = local_698;
          }
        }
        *(undefined *)(puVar27 + -8) = 0x40daf8;
        memcpy((undefined *)((long)puVar13 + (long)puVar14),_local_6a8,(size_t)puVar24);
        puVar20 = puVar13;
LAB_0040daf8:
        do {
          if (local_588 == local_6c0) {
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if ((undefined *)0xfffffffffffffffe < __n) {
              if (puVar31 == (undefined *)0xffffffffffffffff) goto LAB_0040ec82;
              goto LAB_0040de70;
            }
            if (puVar14 <= puVar31) goto LAB_0040ec82;
            if (puVar31 == (undefined *)0x0) {
              if (puVar14 < (undefined *)0xd) {
                puVar31 = (undefined *)0xc;
              }
              else {
LAB_0040f25f:
                puVar31 = puVar14;
                if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_0040de70;
              }
            }
            else {
              if ((long)puVar31 < 0) goto LAB_0040de70;
              puVar31 = (undefined *)((long)puVar31 * 2);
              if (puVar31 < puVar14) goto LAB_0040f25f;
            }
            bVar33 = puVar20 == local_690;
            if ((puVar20 == (undefined *)0x0) || (bVar33)) {
              *(undefined *)(puVar27 + -8) = 0x40f219;
              puVar24 = (undefined *)malloc((size_t)puVar31);
              if (puVar24 == (undefined *)0x0) goto LAB_0040de70;
              if ((__n != (undefined *)0x0) && (bVar33)) {
                *(undefined *)(puVar27 + -8) = 0x40f245;
                puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
              }
            }
            else {
              *(undefined *)(puVar27 + -8) = 0x40ec76;
              puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
              if (puVar24 == (undefined *)0x0) goto LAB_0040e085;
            }
LAB_0040ec82:
            *(undefined *)((long)puVar24 + (long)__n) = 0;
            if ((puVar14 < puVar31) && (puVar24 != local_690)) {
              *(undefined *)(puVar27 + -8) = 0x40eca0;
              puVar20 = (undefined *)realloc(puVar24,(size_t)puVar14);
              if (puVar20 != (undefined *)0x0) {
                puVar24 = puVar20;
              }
            }
            puVar31 = local_6e0;
            if (local_6e0 != (undefined *)0x0) {
              *(undefined *)(puVar27 + -8) = 0x40ecbb;
              free(puVar31);
            }
            if (local_580 != auStack_568) {
              *(undefined *)(puVar27 + -8) = 0x40ecd7;
              free(local_580);
            }
            if (local_670 != auStack_668) {
              *(undefined *)(puVar27 + -8) = 0x40ecf3;
              free(local_670);
            }
            *local_6d8 = __n;
            return puVar24;
          }
          bVar8 = *(byte *)(puVar32 + 9);
          lVar30 = puVar32[10];
          if (bVar8 == 0x25) {
            if (lVar30 != -1) goto LAB_0040e5ac;
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if (__n < (undefined *)0xffffffffffffffff) {
              if (puVar31 < puVar14) {
                if (puVar31 == (undefined *)0x0) {
                  if (puVar14 < (undefined *)0xd) {
                    puVar31 = (undefined *)0xc;
                  }
                  else {
LAB_0040e822:
                    puVar31 = puVar14;
                    if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_0040de70;
                  }
                }
                else {
                  if ((long)puVar31 < 0) goto LAB_0040de70;
                  puVar31 = (undefined *)((long)puVar31 * 2);
                  if (puVar31 < puVar14) goto LAB_0040e822;
                }
                if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                  local_698 = (undefined *)
                              ((ulong)local_698 & 0xffffffffffffff00 | (ulong)(puVar20 == local_690)
                              );
                  *(undefined *)(puVar27 + -8) = 0x40e76e;
                  puVar24 = (undefined *)malloc((size_t)puVar31);
                  if (puVar24 == (undefined *)0x0) goto LAB_0040de70;
                  if ((__n != (undefined *)0x0) && ((char)local_698 != '\0')) {
                    *(undefined *)(puVar27 + -8) = 0x40e7a0;
                    puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
                  }
                }
                else {
                  *(undefined *)(puVar27 + -8) = 0x40df66;
                  puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
                  if (puVar24 == (undefined *)0x0) goto LAB_0040e085;
                }
              }
            }
            else {
              if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040de70;
              puVar14 = (undefined *)0xffffffffffffffff;
            }
            *(undefined *)((long)puVar24 + (long)__n) = 0x25;
            puVar20 = puVar24;
            __n = puVar14;
            goto LAB_0040df77;
          }
          if (lVar30 == -1) goto LAB_0040e5ac;
          puVar15 = (uint *)(local_670 + lVar30 * 0x10);
          uVar4 = *puVar15;
          local_698 = (undefined *)((ulong)local_698 & 0xffffffff00000000 | (ulong)uVar4);
          if (bVar8 == 0x6e) {
            switch(uVar4) {
            case 0x12:
              **(undefined **)(puVar15 + 4) = (char)__n;
              break;
            case 0x13:
              **(undefined **)(puVar15 + 4) = (short)__n;
              break;
            case 0x14:
              **(undefined **)(puVar15 + 4) = (int)__n;
              break;
            case 0x15:
            case 0x16:
              **(undefined **)(puVar15 + 4) = __n;
              break;
            default:
switchD_0040dfdc_caseD_5:
                    /* WARNING: Subroutine does not return */
              *(undefined *)(puVar27 + -8) = 0x402383;
              abort();
            }
          }
          else {
            bVar8 = bVar8 & 0xdf;
            if (((((byte)(bVar8 + 0xbb) < 3) || (bVar8 == 0x41)) && (uVar4 == 0xc)) &&
               (fVar34 = *(float *)(puVar15 + 4), fVar34 == fVar34 + fVar34)) {
              pcVar21 = (char *)puVar32[4];
              local_6b8._0_4_ = *(uint *)(puVar32 + 2);
              if ((char *)puVar32[3] == pcVar21) {
                puVar24 = (undefined *)0x0;
              }
              else {
                puVar13 = (undefined *)puVar32[5];
                if (puVar13 == (undefined *)0xffffffffffffffff) {
                  puVar24 = (undefined *)0x0;
                  local_698 = puVar13;
                  pcVar25 = (char *)puVar32[3];
                  do {
                    pcVar26 = pcVar25 + 1;
                    uVar11 = 0xffffffffffffffff;
                    if (puVar24 < (undefined *)0x199999999999999a) {
                      uVar11 = (long)puVar24 * 10;
                    }
                    puVar24 = (undefined *)((long)(*pcVar25 + -0x30) + uVar11);
                    pcVar6 = pcVar26;
                    if (CARRY8((long)(*pcVar25 + -0x30),uVar11)) {
                      do {
                        puVar24 = local_698;
                        if (pcVar21 == pcVar6) goto LAB_0040de00;
                        pcVar26 = pcVar6 + 1;
                        cVar9 = *pcVar6;
                        pcVar6 = pcVar26;
                      } while (cVar9 != '0');
                      puVar24 = (undefined *)0xffffffffffffffff;
                    }
                    pcVar25 = pcVar26;
                  } while (pcVar21 != pcVar26);
                }
                else {
                  if (*(int *)(local_670 + (long)puVar13 * 0x10) != 5) goto LAB_0040e5ac;
                  iVar10 = *(int *)((long)(local_670 + (long)puVar13 * 0x10) + 0x10);
                  puVar24 = (undefined *)(long)iVar10;
                  if (iVar10 < 0) {
                    local_6b8._0_4_ = (uint)local_6b8 | 2;
                    puVar24 = (undefined *)-(long)(undefined *)(long)iVar10;
                  }
                }
              }
LAB_0040de00:
              pcVar21 = (char *)puVar32[7];
              if ((char *)puVar32[6] == pcVar21) {
LAB_0040e4b0:
                puVar18 = (undefined *)0xc;
                if (bVar8 != 0x41) {
                  puVar18 = (undefined *)0x12;
                }
                puVar13 = (undefined *)0x0;
                if (bVar8 != 0x41) {
                  puVar13 = (undefined *)0x6;
                }
              }
              else {
                if (puVar32[8] == -1) {
                  pcVar25 = (char *)puVar32[6] + 1;
                  puVar13 = (undefined *)0x0;
                  if (pcVar21 != pcVar25) {
                    do {
                      pcVar26 = pcVar25 + 1;
                      uVar11 = 0xffffffffffffffff;
                      if (puVar13 < (undefined *)0x199999999999999a) {
                        uVar11 = (long)puVar13 * 10;
                      }
                      puVar13 = (undefined *)((long)(*pcVar25 + -0x30) + uVar11);
                      pcVar6 = pcVar26;
                      if (CARRY8((long)(*pcVar25 + -0x30),uVar11)) {
                        do {
                          if (pcVar21 == pcVar6) goto LAB_0040de70;
                          pcVar26 = pcVar6 + 1;
                          cVar9 = *pcVar6;
                          pcVar6 = pcVar26;
                        } while (cVar9 != '0');
                        puVar13 = (undefined *)0xffffffffffffffff;
                      }
                      pcVar25 = pcVar26;
                    } while (pcVar21 != pcVar26);
                    goto LAB_0040de3c;
                  }
                }
                else {
                  if (*(int *)(local_670 + puVar32[8] * 0x10) != 5) goto LAB_0040e5ac;
                  iVar10 = *(int *)((long)(local_670 + puVar32[8] * 0x10) + 0x10);
                  puVar13 = (undefined *)(long)iVar10;
                  if (iVar10 < 0) goto LAB_0040e4b0;
LAB_0040de3c:
                  if (puVar13 != (undefined *)0x0) {
                    puVar18 = puVar13 + 6;
                    if (puVar13 < (undefined *)0xfffffffffffffff4) goto LAB_0040e4ce;
                    goto LAB_0040de70;
                  }
                }
                puVar18 = (undefined *)0xc;
              }
LAB_0040e4ce:
              if (puVar18 <= puVar24) {
                puVar18 = puVar24;
              }
              puVar17 = (undefined *)((long)puVar18 + 1);
              local_698 = puVar17;
              if (puVar18 == (undefined *)0xffffffffffffffff) goto LAB_0040de70;
              if (puVar17 < (undefined *)0x2bd) {
                puVar18 = local_2f8;
              }
              else {
                local_6d0 = puVar24;
                local_6c8 = puVar13;
                local_6b8 = (undefined *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                _local_6a8 = fVar34;
                if (puVar17 == (undefined *)0xffffffffffffffff) goto LAB_0040de70;
                *(undefined *)(puVar27 + -8) = 0x40e522;
                puVar18 = (undefined *)malloc((size_t)puVar17);
                puVar13 = local_6c8;
                puVar24 = local_6d0;
                fVar34 = _local_6a8;
                if (puVar18 == (undefined *)0x0) goto LAB_0040de70;
              }
              uVar4 = local_680 & 0xffff0000;
              uVar29 = (uint)in_FPUControlWord;
              local_680 = uVar4 | uVar29;
              uVar7 = local_680;
              local_680 = local_680 | 0x300;
              if ((float)0 <= fVar34) {
                if (((uint)local_6b8 & 4) == 0) {
                  puVar17 = puVar18;
                  if (((uint)local_6b8 & 8) != 0) {
                    puVar17 = (undefined *)((long)puVar18 + 1);
                    *(undefined *)puVar18 = 0x20;
                  }
                }
                else {
                  *(undefined *)puVar18 = 0x2b;
                  puVar17 = (undefined *)((long)puVar18 + 1);
                }
              }
              else {
                *(undefined *)puVar18 = 0x2d;
                fVar34 = -fVar34;
                puVar17 = (undefined *)((long)puVar18 + 1);
              }
              local_680._2_2_ = (undefined)(uVar4 >> 0x10);
              if (fVar34 <= (float)0) {
                if (fVar34 != (float)0) goto LAB_0040e5ac;
                bVar8 = *(byte *)(puVar32 + 9) & 0xdf;
                if (bVar8 == 0x46) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) == 0) && (puVar13 == (undefined *)0x0)) {
LAB_0040e9f7:
                    puVar13 = (undefined *)((long)puVar17 + 1);
                  }
                  else {
                    local_6f0 = (undefined *)
                                ((ulong)local_6f0 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6e8 = puVar24;
                    local_6d0 = puVar18;
                    local_6c8 = puVar13;
                    local_6b8 = (undefined *)
                                ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                    *(undefined *)(puVar27 + -8) = 0x40ef31;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    in_FPUControlWord = (ushort)local_6f0;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar13 = (undefined *)_local_6a8;
                    puVar24 = local_6e8;
                    if (local_6c8 != (undefined *)0x0) {
                      do {
                        puVar22 = (undefined *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 != (undefined *)((long)(puVar17 + 1) + (long)local_6c8));
                      puVar13 = (undefined *)((long)_local_6a8 + (long)local_6c8);
                    }
                  }
                }
                else if (bVar8 == 0x45) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) != 0) ||
                     (_local_6a8 = (int *)((long)puVar17 + 1), puVar13 != (undefined *)0x0)) {
                    local_6f0 = (undefined *)
                                ((ulong)local_6f0 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6e8 = puVar24;
                    local_6d0 = puVar18;
                    local_6c8 = puVar13;
                    local_6b8 = (undefined *)
                                ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                    *(undefined *)(puVar27 + -8) = 0x40f18f;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar24 = local_6e8;
                    in_FPUControlWord = (ushort)local_6f0;
                    if (local_6c8 != (undefined *)0x0) {
                      puVar14 = (undefined *)_local_6a8;
                      do {
                        puVar23 = puVar14 + 1;
                        *puVar14 = 0x30;
                        puVar14 = puVar23;
                      } while (puVar23 != (undefined *)((long)(puVar17 + 1) + (long)local_6c8));
                      _local_6a8 = (int *)((long)_local_6a8 + (long)local_6c8);
                    }
                  }
                  uVar3 = *(undefined *)(puVar32 + 9);
                  puVar13 = (undefined *)((long)_local_6a8 + 4);
                  *(undefined *)((long)_local_6a8 + 3) = 0x30;
                  *(undefined *)_local_6a8 = uVar3;
                  *(undefined *)((long)_local_6a8 + 1) = 0x302b;
                }
                else if (bVar8 == 0x47) {
                  *(undefined *)puVar17 = 0x30;
                  if (((uint)local_6b8 & 0x10) == 0) goto LAB_0040e9f7;
                  if (puVar13 == (undefined *)0x0) {
                    local_6e8 = (undefined *)
                                ((ulong)local_6e8 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6d0 = puVar24;
                    local_6c8 = puVar17 + 1;
                    local_6b8 = puVar18;
                    _local_6a8 = (float)CONCAT64(auStack_6a4._0_6_,(uint)local_6b8);
                    *(undefined *)(puVar27 + -8) = 0x40f347;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    in_FPUControlWord = (ushort)local_6e8;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6b8;
                    puVar13 = local_6c8;
                    puVar24 = local_6d0;
                    local_6b8._0_4_ = (uint)local_6a8;
                  }
                  else {
                    local_6f4 = uVar29;
                    local_6f0 = puVar24;
                    local_6e8 = puVar17 + 1;
                    local_6d0 = puVar18;
                    local_6c8 = (undefined *)
                                ((ulong)local_6c8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    local_6b8 = puVar13;
                    _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,
                                                   (undefined *)((long)puVar13 + -1));
                    *(undefined *)(puVar27 + -8) = 0x40ee5d;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    in_FPUControlWord = (ushort)local_6f4;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar13 = local_6e8;
                    puVar24 = local_6f0;
                    local_6b8._0_4_ = (uint)local_6c8;
                    if (_local_6a8 != (int *)0x0) {
                      do {
                        puVar22 = (undefined *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 !=
                               (undefined *)((undefined *)((long)puVar17 + 1) + (long)local_6b8));
                      puVar13 = (undefined *)((long)local_6e8 + (long)_local_6a8);
                    }
                  }
                }
                else {
                  if (bVar8 != 0x41) goto LAB_0040e5ac;
                  *(undefined *)puVar17 = 0x30;
                  _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                  cVar9 = *(char *)(puVar32 + 9);
                  *(undefined *)(puVar17 + 1) = 0x30;
                  *(char *)((long)puVar17 + 1) = cVar9 + '\x17';
                  if ((((uint)local_6b8 & 0x10) != 0) ||
                     (puVar22 = (undefined *)((long)puVar17 + 3), puVar13 != (undefined *)0x0)) {
                    local_6f4 = uVar29;
                    local_6f0 = puVar24;
                    local_6e8 = puVar18;
                    local_6d0 = puVar13;
                    local_6c8 = (undefined *)
                                ((ulong)local_6c8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    local_6b8 = puVar17 + 2;
                    *(undefined *)(puVar27 + -8) = 0x40f2a9;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 3) = cVar9;
                    puVar18 = local_6e8;
                    puVar22 = local_6b8;
                    puVar24 = local_6f0;
                    local_6b8._0_4_ = (uint)local_6c8;
                    uVar29 = local_6f4;
                    if (local_6d0 != (undefined *)0x0) {
                      puVar13 = local_6b8;
                      do {
                        puVar22 = (undefined *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 != (undefined *)((long)(puVar17 + 2) + (long)local_6d0));
                      puVar22 = (undefined *)((long)local_6b8 + (long)local_6d0);
                    }
                  }
                  in_FPUControlWord = (ushort)uVar29;
                  cVar9 = *(char *)(puVar32 + 9);
                  puVar13 = (undefined *)((long)puVar22 + 3);
                  *(undefined *)((long)puVar22 + 1) = 0x302b;
                  *(char *)puVar22 = cVar9 + '\x0f';
                  puVar17 = (undefined *)_local_6a8;
                }
              }
              else {
                if (fVar34 + fVar34 != fVar34) goto LAB_0040e5ac;
                puVar13 = (undefined *)((long)puVar17 + 3);
                if ((byte)(*(char *)(puVar32 + 9) + 0xbfU) < 0x1a) {
                  *(undefined *)(puVar17 + 1) = 0x46;
                  *puVar17 = 0x4e49;
                  puVar17 = (undefined *)0x0;
                }
                else {
                  *(undefined *)(puVar17 + 1) = 0x66;
                  *puVar17 = 0x6e69;
                  puVar17 = (undefined *)0x0;
                }
              }
              local_680 = CONCAT22(local_680._2_2_,in_FPUControlWord);
              _local_6a8 = (int *)((long)puVar13 - (long)puVar18);
              if (_local_6a8 < puVar24) {
                lVar30 = (long)puVar24 - (long)_local_6a8;
                puVar24 = (undefined *)((long)puVar13 + lVar30);
                _local_6a8 = (int *)((long)puVar24 - (long)puVar18);
                if (((uint)local_6b8 & 2) == 0) {
                  if ((((uint)local_6b8 & 0x20) == 0) || (puVar17 == (undefined *)0x0)) {
                    puVar14 = (undefined *)0xffffffffffffffff;
                    puVar17 = puVar13;
                    if (puVar18 < puVar13) {
                      do {
                        *(undefined *)((long)puVar24 + (long)puVar14) =
                             *(undefined *)((long)puVar13 + (long)puVar14);
                        puVar14 = puVar14 + -1;
                        puVar17 = puVar18;
                      } while ((undefined *)((long)puVar18 + (-1 - (long)puVar13)) != puVar14);
                    }
                    if (lVar30 != 0) {
                      puVar24 = puVar17;
                      do {
                        puVar13 = (undefined *)((long)puVar24 + 1);
                        *(undefined *)puVar24 = 0x20;
                        puVar24 = puVar13;
                      } while (puVar13 != (undefined *)(lVar30 + (long)puVar17));
                    }
                  }
                  else {
                    puVar22 = puVar13;
                    if (puVar17 < puVar13) {
                      puVar14 = (undefined *)0xffffffffffffffff;
                      do {
                        *(undefined *)((long)puVar24 + (long)puVar14) =
                             *(undefined *)((long)puVar13 + (long)puVar14);
                        puVar14 = puVar14 + -1;
                        puVar22 = puVar17;
                      } while (puVar14 != (undefined *)((long)puVar17 + (-1 - (long)puVar13)));
                    }
                    if (lVar30 != 0) {
                      puVar24 = puVar22;
                      do {
                        puVar13 = (undefined *)((long)puVar24 + 1);
                        *(undefined *)puVar24 = 0x30;
                        puVar24 = puVar13;
                      } while (puVar13 != (undefined *)(lVar30 + (long)puVar22));
                    }
                  }
                }
                else if (lVar30 != 0) {
                  do {
                    puVar17 = (undefined *)((long)puVar13 + 1);
                    *(undefined *)puVar13 = 0x20;
                    puVar13 = puVar17;
                  } while (puVar24 != puVar17);
                }
              }
              if (local_698 <= _local_6a8) {
LAB_0040e5ac:
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar27 + -8) = &UNK_0040e5b1;
                abort();
              }
              puVar14 = __n + (long)_local_6a8;
              puVar24 = puVar20;
              if (puVar31 + -(long)__n <= _local_6a8) {
                if (CARRY8((ulong)__n,(ulong)_local_6a8) == false) {
                  if (puVar31 < puVar14) {
                    if (puVar31 == (undefined *)0x0) {
                      if (puVar14 < (undefined *)0xd) {
                        puVar31 = (undefined *)0xc;
                      }
                      else {
LAB_0040f0aa:
                        puVar31 = puVar14;
                        if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_0040de70;
                      }
                    }
                    else {
                      if ((long)puVar31 < 0) goto LAB_0040de70;
                      puVar31 = (undefined *)((long)puVar31 * 2);
                      if (puVar31 < puVar14) goto LAB_0040f0aa;
                    }
                    if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                      local_6b8 = (undefined *)
                                  ((ulong)local_6b8 & 0xffffffffffffff00 |
                                  (ulong)(puVar20 == local_690));
                      local_698 = puVar18;
                      *(undefined *)(puVar27 + -8) = 0x40ed97;
                      puVar24 = (undefined *)malloc((size_t)puVar31);
                      if (puVar24 == (undefined *)0x0) goto LAB_0040de70;
                      puVar18 = local_698;
                      if ((__n != (undefined *)0x0) && ((char)local_6b8 != '\0')) {
                        *(undefined *)(puVar27 + -8) = 0x40ede5;
                        puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
                        puVar18 = local_698;
                      }
                    }
                    else {
                      local_698 = puVar18;
                      *(undefined *)(puVar27 + -8) = 0x40eb12;
                      puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
                      if (puVar24 == (undefined *)0x0) goto LAB_0040de70;
                      puVar18 = local_698;
                    }
                  }
                }
                else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040de70;
              }
              local_698 = puVar18;
              *(undefined *)(puVar27 + -8) = 0x40eb46;
              memcpy((undefined *)((long)puVar24 + (long)__n),puVar18,(size_t)_local_6a8);
              puVar13 = local_698;
              puVar20 = puVar24;
              __n = puVar14;
              if (local_698 != local_2f8) {
                *(undefined *)(puVar27 + -8) = 0x40eb65;
                free(puVar13);
              }
            }
            else {
              uVar4 = *(uint *)(puVar32 + 2);
              puVar24 = (undefined *)(local_6b0 + 1);
              *local_6b0 = 0x25;
              if ((uVar4 & 1) != 0) {
                local_6b0[1] = 0x27;
                puVar24 = (undefined *)(local_6b0 + 2);
              }
              if ((uVar4 & 2) != 0) {
                *(undefined *)puVar24 = 0x2d;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 4) != 0) {
                *(undefined *)puVar24 = 0x2b;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 8) != 0) {
                *(undefined *)puVar24 = 0x20;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x10) != 0) {
                *(undefined *)puVar24 = 0x23;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x40) != 0) {
                *(undefined *)puVar24 = 0x49;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x20) != 0) {
                *(undefined *)puVar24 = 0x30;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              pvVar5 = (void *)puVar32[3];
              puVar13 = local_670;
              if (pvVar5 != (void *)puVar32[4]) {
                local_6b8 = local_670;
                sVar28 = (long)(void *)puVar32[4] - (long)pvVar5;
                _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined *)(puVar27 + -8) = 0x40dc19;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              pvVar5 = (void *)puVar32[6];
              if (pvVar5 != (void *)puVar32[7]) {
                local_6b8 = puVar13;
                sVar28 = (long)(void *)puVar32[7] - (long)pvVar5;
                _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined *)(puVar27 + -8) = 0x40dc56;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              if ((uint)local_698 < 0x11) {
                uVar11 = 1L << ((byte)local_698 & 0x3f);
                if ((uVar11 & 0x14180) == 0) {
                  if ((uVar11 & 0x1000) == 0) {
                    if ((uVar11 & 0x600) != 0) {
                      *(undefined *)puVar24 = 0x6c;
                      puVar24 = (undefined *)((long)puVar24 + 1);
                      goto LAB_0040e078;
                    }
                  }
                  else {
                    *(undefined *)puVar24 = 0x4c;
                    puVar24 = (undefined *)((long)puVar24 + 1);
                  }
                }
                else {
LAB_0040e078:
                  *(undefined *)puVar24 = 0x6c;
                  puVar24 = (undefined *)((long)puVar24 + 1);
                }
              }
              uVar3 = *(undefined *)(puVar32 + 9);
              *(undefined *)((long)puVar24 + 1) = 0;
              *(undefined *)puVar24 = uVar3;
              if (puVar32[5] == -1) {
                local_6b8 = (undefined *)((ulong)local_6b8._4_4_ << 0x20);
              }
              else {
                if (*(int *)(puVar13 + puVar32[5] * 0x10) != 5) goto LAB_0040e5ac;
                local_6b8 = (undefined *)CONCAT44(local_6b8._4_4_,1);
                local_680 = *(uint *)((long)(puVar13 + puVar32[5] * 0x10) + 0x10);
              }
              if (puVar32[8] != -1) {
                if (*(int *)(puVar13 + puVar32[8] * 0x10) != 5) goto LAB_0040e5ac;
                (&local_680)[(ulong)local_6b8 & 0xffffffff] =
                     *(int *)((long)(puVar13 + puVar32[8] * 0x10) + 0x10);
                local_6b8 = (undefined *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)((uint)local_6b8 + 1));
              }
              puVar14 = __n + 2;
              puVar13 = puVar20;
              if (__n < (undefined *)0xfffffffffffffffe) {
                if (puVar31 < puVar14) {
                  if (puVar31 == (undefined *)0x0) {
                    if (puVar14 < (undefined *)0xd) {
                      puVar31 = (undefined *)0xc;
                    }
                    else {
LAB_0040e462:
                      puVar31 = puVar14;
                      if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_0040de70;
                    }
                  }
                  else {
                    if ((long)puVar31 < 0) goto LAB_0040de70;
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if (puVar31 < puVar14) goto LAB_0040e462;
                  }
                  if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                    _local_6a8 = (float)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
                    *(undefined *)(puVar27 + -8) = 0x40e70e;
                    puVar13 = (undefined *)malloc((size_t)puVar31);
                    if (puVar13 == (undefined *)0x0) goto LAB_0040de70;
                    if ((__n != (undefined *)0x0) && (local_6a8[0] != '\0')) {
                      *(undefined *)(puVar27 + -8) = 0x40e740;
                      puVar13 = (undefined *)memcpy(puVar13,puVar20,(size_t)__n);
                    }
                  }
                  else {
                    *(undefined *)(puVar27 + -8) = 0x40dd68;
                    puVar13 = (undefined *)realloc(puVar20,(size_t)puVar31);
                    if (puVar13 == (undefined *)0x0) goto LAB_0040de70;
                  }
                }
              }
              else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040de70;
              *(undefined *)((long)puVar13 + (long)__n) = 0;
              local_6c8 = puVar13;
              *(undefined *)(puVar27 + -8) = 0x40dd85;
              puVar15 = (uint *)__errno_location();
              puVar13 = local_6c8;
              local_6c8 = puVar24;
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar15);
              local_6e8 = (undefined *)((ulong)local_6e8 & 0xffffffff00000000 | (ulong)*puVar15);
LAB_0040dda8:
              uVar4 = local_680;
              puVar14 = local_6b0;
              local_684 = -1;
              uVar12 = (long)puVar31 - (long)__n;
              *_local_6a8 = 0;
              uVar11 = 0x7fffffff;
              if (uVar12 < 0x80000000) {
                uVar11 = uVar12;
              }
              switch((ulong)local_698 & 0xffffffff) {
              default:
                goto switchD_0040dfdc_caseD_5;
              case 1:
                uVar19 = (ulong)(uint)(int)*(char *)(local_670 + puVar32[10] * 0x10 + 8);
                break;
              case 2:
                uVar19 = (ulong)*(byte *)(local_670 + puVar32[10] * 0x10 + 8);
                break;
              case 3:
                uVar19 = (ulong)(uint)(int)(short)local_670[puVar32[10] * 0x10 + 8];
                break;
              case 4:
                uVar19 = (ulong)(ushort)local_670[puVar32[10] * 0x10 + 8];
                break;
              case 5:
              case 6:
              case 0xd:
              case 0xe:
                uVar19 = (ulong)*(uint *)(local_670 + puVar32[10] * 0x10 + 8);
                break;
              case 7:
              case 8:
              case 9:
              case 10:
              case 0xf:
              case 0x10:
              case 0x11:
                piVar16 = *(int **)(local_670 + puVar32[10] * 0x10 + 8);
                local_6d0 = puVar13;
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -8) = &local_684;
                  *(int **)(puVar27 + -0x10) = piVar16;
                  goto LAB_0040e682;
                }
                if ((uint)local_6b8 != 2) {
                  *(int **)(puVar27 + -0x10) = &local_684;
LAB_0040e0ea:
                  puVar14 = local_6b0;
                  *(undefined *)(puVar27 + -0x18) = 0x40e107;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,piVar16);
                  goto LAB_0040e110;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(int **)(puVar27 + -0x18) = piVar16;
                goto LAB_0040e636;
              case 0xb:
                local_6d0 = puVar13;
                uVar1 = *(undefined *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -0x10) = &local_684;
                }
                else {
                  if ((uint)local_6b8 != 2) {
                    *(undefined *)(puVar27 + -8) = 0x40e3de;
                    iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                            0xffffffffffffffff,puVar14,&local_684);
                    goto LAB_0040e110;
                  }
                  *(int **)(puVar27 + -8) = &local_684;
                  *(ulong *)(puVar27 + -0x10) = (ulong)local_67c;
                }
                uVar4 = local_680;
                puVar14 = local_6b0;
                *(undefined *)(puVar27 + -0x18) = 0x40e87e;
                iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar4);
                goto LAB_0040e110;
              case 0xc:
                local_6d0 = puVar13;
                Var2 = *(unkbyte10 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 != 1) {
                  if ((uint)local_6b8 != 2) {
                    piVar16 = &local_684;
                    *(unkbyte10 *)(puVar27 + -0x10) = Var2;
                    goto LAB_0040e0ea;
                  }
                  *(int **)(puVar27 + -0x10) = &local_684;
                  uVar19 = (ulong)local_67c;
                  *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                  *(ulong *)(puVar27 + -0x30) = uVar19;
                  *(undefined *)(puVar27 + -0x38) = 0x40e8df;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,uVar4);
                  goto LAB_0040e110;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                goto LAB_0040e63d;
              }
              local_6d0 = puVar13;
              if ((uint)local_6b8 == 1) {
                *(int **)(puVar27 + -8) = &local_684;
                *(ulong *)(puVar27 + -0x10) = uVar19;
LAB_0040e682:
                uVar19 = (ulong)local_680;
LAB_0040e22a:
                puVar14 = local_6b0;
                *(undefined *)(puVar27 + -0x18) = 0x40e247;
                iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar19);
                if (-1 < local_684) goto LAB_0040e11e;
LAB_0040e25e:
                puVar24 = local_6d0;
                if (*(char *)((long)local_6c8 + 1) == '\0') {
                  if (iVar10 < 0) {
                    iVar10 = *_local_6a8;
                    if ((iVar10 == 0) && (iVar10 = 0x54, (*(byte *)(puVar32 + 9) & 0xef) != 99)) {
                      iVar10 = 0x16;
                    }
                    if ((local_6d0 != local_690) && (local_6d0 != (undefined *)0x0)) {
                      *(undefined *)(puVar27 + -8) = 0x40e2b4;
                      free(puVar24);
                    }
                    puVar31 = local_6e0;
                    if (local_6e0 != (undefined *)0x0) {
                      *(undefined *)(puVar27 + -8) = 0x40e2c8;
                      free(puVar31);
                    }
                    if (local_580 != auStack_568) {
                      *(undefined *)(puVar27 + -8) = 0x40e2e4;
                      free(local_580);
                    }
                    if (local_670 != auStack_668) {
                      *(undefined *)(puVar27 + -8) = 0x40e300;
                      free(local_670);
                    }
                    *_local_6a8 = iVar10;
                    return (undefined *)0x0;
                  }
                  goto LAB_0040e138;
                }
                *(undefined *)((long)local_6c8 + 1) = 0;
                puVar13 = local_6d0;
                goto LAB_0040dda8;
              }
              if ((uint)local_6b8 != 2) {
                *(int **)(puVar27 + -0x10) = &local_684;
                goto LAB_0040e22a;
              }
              *(int **)(puVar27 + -0x10) = &local_684;
              *(ulong *)(puVar27 + -0x18) = uVar19;
LAB_0040e636:
              *(ulong *)(puVar27 + -0x20) = (ulong)local_67c;
LAB_0040e63d:
              uVar4 = local_680;
              puVar14 = local_6b0;
              *(undefined *)(puVar27 + -0x28) = 0x40e661;
              iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                      0xffffffffffffffff,puVar14,uVar4);
LAB_0040e110:
              if (local_684 < 0) goto LAB_0040e25e;
LAB_0040e11e:
              if (((ulong)(long)local_684 < uVar11) &&
                 (((undefined *)((long)local_684 + (long)local_6d0))[(long)__n] != '\0'))
              goto LAB_0040e5ac;
              if (local_684 < iVar10) {
LAB_0040e138:
                local_684 = iVar10;
              }
              puVar24 = local_6d0;
              puVar20 = local_6d0;
              if (uVar11 <= local_684 + 1) {
                if (0x7ffffffe < uVar12) {
                  if ((local_6d0 != local_690) && (local_6d0 != (undefined *)0x0)) {
                    *(undefined *)(puVar27 + -8) = 0x40e946;
                    free(puVar24);
                  }
                  puVar31 = local_6e0;
                  if (local_6e0 != (undefined *)0x0) {
                    *(undefined *)(puVar27 + -8) = 0x40e95a;
                    free(puVar31);
                  }
                  if (local_580 != auStack_568) {
                    *(undefined *)(puVar27 + -8) = 0x40e976;
                    free(local_580);
                  }
                  if (local_670 != auStack_668) {
                    *(undefined *)(puVar27 + -8) = 0x40e992;
                    free(local_670);
                  }
                  *_local_6a8 = 0x4b;
                  return (undefined *)0x0;
                }
                puVar13 = local_6d0;
                if ((long)puVar31 < 0) {
                  if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040de7f;
                }
                else {
                  if (CARRY8((ulong)(local_684 + 2),(ulong)__n) != false) goto LAB_0040de7f;
                  puVar14 = __n + (local_684 + 2);
                  if (__n + (local_684 + 2) <= (undefined *)((long)puVar31 * 2)) {
                    puVar14 = (undefined *)((long)puVar31 * 2);
                  }
                  if (puVar31 < puVar14) {
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if ((puVar31 < puVar14) &&
                       (puVar31 = puVar14, puVar14 == (undefined *)0xffffffffffffffff))
                    goto LAB_0040de7f;
                    bVar33 = local_6d0 == local_690;
                    if ((local_6d0 == (undefined *)0x0) || (bVar33)) {
                      *(undefined *)(puVar27 + -8) = 0x40e5df;
                      puVar13 = (undefined *)malloc((size_t)puVar31);
                      puVar24 = local_6d0;
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined *)0x0) goto LAB_0040de7f;
                      if ((__n != (undefined *)0x0) && (bVar33)) {
                        *(undefined *)(puVar27 + -8) = 0x40e60d;
                        puVar13 = (undefined *)memcpy(puVar13,puVar24,(size_t)__n);
                      }
                    }
                    else {
                      *(undefined *)(puVar27 + -8) = 0x40e1cd;
                      puVar13 = (undefined *)realloc(puVar24,(size_t)puVar31);
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined *)0x0) goto LAB_0040de7f;
                    }
                  }
                }
                goto LAB_0040dda8;
              }
              __n = __n + local_684;
              *_local_6a8 = local_6e8._0_4_;
            }
          }
LAB_0040df77:
          _local_6a8 = (int *)puVar32[1];
          puVar32 = puVar32 + 0xb;
          puVar24 = (undefined *)*puVar32;
          local_6c0 = local_6c0 + 1;
          puVar14 = __n;
        } while ((int *)puVar24 == _local_6a8);
      } while( true );
    }
    puVar27 = auStack_6f8;
    if (sVar28 != 0xffffffffffffffff) {
      local_6b0 = (undefined *)malloc(sVar28);
      puVar27 = auStack_6f8;
      if (local_6b0 != (undefined *)0x0) {
        local_6e0 = local_6b0;
        puVar27 = auStack_6f8;
        goto LAB_0040d944;
      }
    }
  }
  goto LAB_0040dfa0;
LAB_0040de70:
  *(undefined *)(puVar27 + -8) = 0x40de75;
  piVar16 = __errno_location();
  _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_0040de7f:
  if ((puVar20 != local_690) && (puVar20 != (undefined *)0x0)) {
LAB_0040e098:
    *(undefined *)(puVar27 + -8) = 0x40e0a0;
    free(puVar20);
  }
  puVar31 = local_6e0;
  if (local_6e0 != (undefined *)0x0) {
    *(undefined *)(puVar27 + -8) = 0x40dea9;
    free(puVar31);
    goto LAB_0040dea9;
  }
LAB_0040dfa0:
  *(undefined *)(puVar27 + -8) = 0x40dfa5;
  piVar16 = __errno_location();
  _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_0040dea9:
  if (local_580 != auStack_568) {
    *(undefined *)(puVar27 + -8) = 0x40dec5;
    free(local_580);
  }
  if (local_670 != auStack_668) {
    *(undefined *)(puVar27 + -8) = 0x40dee1;
    free(local_670);
  }
  *_local_6a8 = 0xc;
  return (undefined *)0x0;
}


undefined FUN_0040f3a0(uint *param_1,ulong *param_2)

{
  uint uVar1;
  undefined *puVar2;
  unkbyte10 *pVar3;
  undefined *puVar4;
  char *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char **ppcVar9;
  
  puVar2 = (undefined *)param_2[1];
  if (*param_2 != 0) {
    uVar6 = 0;
    do {
      switch(*puVar2) {
      default:
        return 0xffffffff;
      case 1:
      case 2:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar8 + 2;
        }
        *(char *)(puVar2 + 4) = (char)*puVar8;
        break;
      case 3:
      case 4:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar8 + 2;
        }
        *(short *)(puVar2 + 4) = (short)*puVar8;
        break;
      case 5:
      case 6:
      case 0xd:
      case 0xe:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar8 + 2;
        }
        puVar2[4] = *puVar8;
        break;
      case 7:
      case 8:
      case 9:
      case 10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar7 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined *)(puVar2 + 4) = *puVar7;
        break;
      case 0xb:
        uVar1 = param_1[1];
        if (uVar1 < 0xb0) {
          puVar7 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          param_1[1] = uVar1 + 0x10;
        }
        else {
          puVar7 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined *)(puVar2 + 4) = *puVar7;
        break;
      case 0xc:
        pVar3 = (unkbyte10 *)(*(long *)(param_1 + 2) + 0xfU & 0xfffffffffffffff0);
        *(long *)(param_1 + 2) = (long)pVar3 + 0x10;
        *(unkbyte10 *)(puVar2 + 4) = *pVar3;
        break;
      case 0xf:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          ppcVar9 = (char **)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          ppcVar9 = *(char ***)(param_1 + 2);
          *(char ***)(param_1 + 2) = ppcVar9 + 1;
        }
        pcVar5 = *ppcVar9;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "(NULL)";
        }
        *(char **)(puVar2 + 4) = pcVar5;
        break;
      case 0x10:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar7 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar7 + 1;
        }
        puVar4 = (undefined *)*puVar7;
        if (puVar4 == (undefined *)0x0) {
          puVar4 = &DAT_00413ac0;
        }
        *(undefined **)(puVar2 + 4) = puVar4;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar6 <= *param_2 && *param_2 != uVar6);
  }
  return 0;
}


undefined FUN_0040f5c0(byte *param_1,ulong *param_2,byte **param_3)

{
  ulong *puVar1;
  byte **ppbVar2;
  byte **ppbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong *__dest;
  ulong uVar8;
  int *piVar9;
  byte **__dest_00;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  byte *pbVar18;
  byte **__ptr;
  byte *pbVar19;
  ulong uVar20;
  ulong *__ptr_00;
  bool bVar21;
  ulong local_78;
  ulong local_70;
  byte *local_68;
  
  puVar1 = param_2 + 4;
  ppbVar2 = param_3 + 2;
  pbVar19 = (byte *)0x7;
  uVar8 = 0;
  *param_2 = 0;
  param_2[1] = (ulong)puVar1;
  *param_3 = (byte *)0x0;
  param_3[1] = (byte *)ppbVar2;
  local_70 = 0;
  local_78 = 0;
  local_68 = (byte *)0x0;
  __dest = puVar1;
  uVar20 = 7;
LAB_0040f63b:
  do {
    pbVar11 = param_1;
    pbVar12 = (byte *)0xffffffffffffffff;
    if (*pbVar11 == 0) {
      __dest[uVar8 * 0xb] = (ulong)pbVar11;
      param_2[2] = local_78;
      param_2[3] = local_70;
      return 0;
    }
    param_1 = pbVar11 + 1;
  } while (*pbVar11 != 0x25);
  ppbVar3 = (byte **)(__dest + uVar8 * 0xb);
  *ppbVar3 = pbVar11;
  *(undefined *)(ppbVar3 + 2) = 0;
  ppbVar3[3] = (byte *)0x0;
  ppbVar3[4] = (byte *)0x0;
  ppbVar3[5] = (byte *)0xffffffffffffffff;
  ppbVar3[6] = (byte *)0x0;
  ppbVar3[7] = (byte *)0x0;
  ppbVar3[8] = (byte *)0xffffffffffffffff;
  ppbVar3[10] = (byte *)0xffffffffffffffff;
  bVar17 = pbVar11[1];
  pbVar11 = param_1;
  pbVar18 = (byte *)0xffffffffffffffff;
  if (9 < (byte)(bVar17 - 0x30)) {
LAB_0040f706:
    do {
      pbVar11 = param_1 + 1;
      if (bVar17 == 0x27) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 1;
      }
      else if (bVar17 == 0x2d) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 2;
      }
      else if (bVar17 == 0x2b) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 4;
      }
      else if (bVar17 == 0x20) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 8;
      }
      else if (bVar17 == 0x23) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x10;
      }
      else if (bVar17 == 0x30) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x20;
      }
      else {
        if (bVar17 != 0x49) goto LAB_0040f768;
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x40;
      }
      bVar17 = *pbVar11;
      param_1 = pbVar11;
    } while( true );
  }
  do {
    bVar4 = pbVar11[1];
    pbVar11 = pbVar11 + 1;
  } while ((byte)(bVar4 - 0x30) < 10);
  pbVar18 = pbVar12;
  if (bVar4 != 0x24) goto LAB_0040f706;
  pbVar11 = (byte *)0x0;
  do {
    pbVar18 = param_1;
    pbVar14 = (byte *)0xffffffffffffffff;
    if (pbVar11 < (byte *)0x199999999999999a) {
      pbVar14 = (byte *)((long)pbVar11 * 10);
    }
    while( true ) {
      iVar6 = (int)(char)bVar17;
      bVar17 = pbVar18[1];
      pbVar11 = pbVar14 + (iVar6 + -0x30);
      param_1 = pbVar18 + 1;
      if (CARRY8((long)(iVar6 + -0x30),(ulong)pbVar14) == false) break;
      pbVar18 = param_1;
      pbVar14 = pbVar12;
      if (9 < (byte)(bVar17 - 0x30)) goto switchD_0040f947_caseD_26;
    }
  } while ((byte)(bVar17 - 0x30) < 10);
  if (pbVar11 + -1 < (byte *)0xfffffffffffffffe) {
    param_1 = pbVar18 + 2;
    bVar17 = pbVar18[2];
    pbVar18 = pbVar11 + -1;
    goto LAB_0040f706;
  }
  goto switchD_0040f947_caseD_26;
LAB_0040f768:
  if (bVar17 != 0x2a) {
    pbVar12 = local_68;
    if ((byte)(bVar17 - 0x30) < 10) {
      ppbVar3[3] = param_1;
      pbVar14 = param_1;
      uVar8 = local_78;
      if ((byte)(*param_1 - 0x30) < 10) {
        do {
          pbVar11 = pbVar14;
          pbVar14 = pbVar11 + 1;
        } while ((byte)(pbVar11[1] - 0x30) < 10);
        pbVar11 = pbVar11 + 2;
        uVar8 = (long)pbVar14 - (long)param_1;
        if ((ulong)((long)pbVar14 - (long)param_1) <= local_78) {
          uVar8 = local_78;
        }
      }
      local_78 = uVar8;
      ppbVar3[4] = pbVar14;
      bVar17 = *pbVar14;
      param_1 = pbVar14;
    }
joined_r0x0040f87a:
    uVar8 = local_70;
    local_68 = pbVar12;
    if (bVar17 != 0x2e) goto LAB_0040f781;
    bVar17 = param_1[1];
    ppbVar3[6] = param_1;
    if (bVar17 != 0x2a) {
      if ((byte)(param_1[1] - 0x30) < 10) {
        do {
          pbVar11 = pbVar11 + 1;
        } while ((byte)(*pbVar11 - 0x30) < 10);
        uVar8 = (long)pbVar11 - (long)param_1;
      }
      else {
        uVar8 = 1;
      }
      ppbVar3[7] = pbVar11;
      bVar17 = *pbVar11;
      param_1 = pbVar11;
      if (uVar8 <= local_70) {
        uVar8 = local_70;
      }
      goto LAB_0040f781;
    }
    pbVar11 = param_1 + 2;
    ppbVar3[7] = pbVar11;
    uVar8 = 2;
    if (1 < local_70) {
      uVar8 = local_70;
    }
    iVar6 = (int)(char)param_1[2];
    pbVar14 = pbVar11;
    if ((byte)(param_1[2] - 0x30) < 10) {
      do {
        bVar17 = pbVar14[1];
        pbVar14 = pbVar14 + 1;
      } while ((byte)(bVar17 - 0x30) < 10);
      if (bVar17 != 0x24) goto LAB_0040f8bf;
      uVar16 = 0;
      do {
        pbVar12 = pbVar11;
        uVar15 = 0xffffffffffffffff;
        if (uVar16 < 0x199999999999999a) {
          uVar15 = uVar16 * 10;
        }
        while( true ) {
          iVar7 = iVar6 + -0x30;
          uVar16 = uVar15 + (long)iVar7;
          pbVar11 = pbVar12 + 1;
          iVar6 = (int)(char)*pbVar11;
          bVar17 = *pbVar11 - 0x30;
          if (CARRY8(uVar15,(long)iVar7) == false) break;
          pbVar12 = pbVar11;
          uVar15 = 0xffffffffffffffff;
          if (9 < bVar17) goto switchD_0040f947_caseD_26;
        }
      } while (bVar17 < 10);
      pbVar14 = (byte *)(uVar16 - 1);
      if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_0040f947_caseD_26;
      ppbVar3[8] = pbVar14;
      pbVar11 = pbVar12 + 2;
    }
    else {
LAB_0040f8bf:
      pbVar14 = ppbVar3[8];
      if (ppbVar3[8] == (byte *)0xffffffffffffffff) {
        local_68 = pbVar12 + 1;
        ppbVar3[8] = pbVar12;
        pbVar14 = pbVar12;
        if (pbVar12 == (byte *)0xffffffffffffffff) goto switchD_0040f947_caseD_26;
      }
    }
    __ptr = (byte **)param_3[1];
    if (pbVar14 < pbVar19) {
      pbVar12 = *param_3;
      __dest_00 = __ptr;
LAB_0040f8de:
      if (pbVar12 <= pbVar14) {
        do {
          pbVar12 = pbVar12 + 1;
          *(undefined *)(__dest_00 + (long)pbVar12 * 4 + -4) = 0;
        } while (pbVar12 <= pbVar14);
        *param_3 = pbVar12;
      }
      iVar6 = *(int *)(__dest_00 + (long)pbVar14 * 4);
      param_1 = pbVar11;
      if (iVar6 == 0) {
        *(undefined *)(__dest_00 + (long)pbVar14 * 4) = 5;
        bVar17 = *pbVar11;
LAB_0040f781:
        local_70 = uVar8;
        uVar5 = 0;
        do {
          param_1 = param_1 + 1;
          if (bVar17 == 0x68) {
            uVar5 = uVar5 | 1 << ((byte)uVar5 & 1);
          }
          else if (bVar17 == 0x4c) {
            uVar5 = uVar5 | 4;
          }
          else {
            if ((((bVar17 != 0x6c) && (bVar17 != 0x6a)) && ((bVar17 & 0xdf) != 0x5a)) &&
               (bVar17 != 0x74)) goto code_r0x0040f944;
            uVar5 = uVar5 + 8;
          }
          bVar17 = *param_1;
        } while( true );
      }
      if (iVar6 == 5) {
        bVar17 = *pbVar11;
        goto LAB_0040f781;
      }
      goto LAB_0040fd8c;
    }
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar14) {
      pbVar19 = pbVar14 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_0040ff79;
        pbVar12 = *param_3;
        __ptr = ppbVar2;
LAB_0041022b:
        memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
        pbVar12 = *param_3;
      }
      else {
        __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
        __ptr = (byte **)param_3[1];
        if (__dest_00 == (byte **)0x0) goto LAB_0040ff60;
        pbVar12 = *param_3;
        if (ppbVar2 == __ptr) goto LAB_0041022b;
      }
      param_3[1] = (byte *)__dest_00;
      goto LAB_0040f8de;
    }
    goto LAB_0040ff60;
  }
  ppbVar3[3] = param_1;
  ppbVar3[4] = pbVar11;
  uVar8 = 1;
  if (local_78 != 0) {
    uVar8 = local_78;
  }
  iVar6 = (int)(char)param_1[1];
  pbVar14 = pbVar11;
  if ((byte)(param_1[1] - 0x30) < 10) {
    do {
      bVar17 = pbVar14[1];
      pbVar14 = pbVar14 + 1;
    } while ((byte)(bVar17 - 0x30) < 10);
    if (bVar17 != 0x24) goto LAB_0040f80d;
    pbVar14 = (byte *)0x0;
    do {
      pbVar10 = pbVar11;
      pbVar13 = (byte *)0xffffffffffffffff;
      if (pbVar14 < (byte *)0x199999999999999a) {
        pbVar13 = (byte *)((long)pbVar14 * 10);
      }
      while( true ) {
        iVar7 = iVar6 + -0x30;
        pbVar14 = pbVar13 + iVar7;
        iVar6 = (int)(char)pbVar10[1];
        pbVar11 = pbVar10 + 1;
        bVar17 = pbVar10[1] - 0x30;
        if (CARRY8((ulong)pbVar13,(long)iVar7) == false) break;
        pbVar10 = pbVar11;
        pbVar13 = pbVar12;
        if (9 < bVar17) goto switchD_0040f947_caseD_26;
      }
    } while (bVar17 < 10);
    pbVar14 = pbVar14 + -1;
    if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_0040f947_caseD_26;
    ppbVar3[5] = pbVar14;
    pbVar11 = pbVar10 + 2;
  }
  else {
LAB_0040f80d:
    pbVar14 = ppbVar3[5];
    if (ppbVar3[5] == (byte *)0xffffffffffffffff) {
      ppbVar3[5] = local_68;
      bVar21 = local_68 == (byte *)0xffffffffffffffff;
      pbVar14 = local_68;
      local_68 = local_68 + 1;
      if (bVar21) goto switchD_0040f947_caseD_26;
    }
  }
  __ptr = (byte **)param_3[1];
  if (pbVar14 < pbVar19) {
    pbVar12 = *param_3;
    __dest_00 = __ptr;
LAB_0040f82c:
    if (pbVar12 <= pbVar14) {
      do {
        pbVar12 = pbVar12 + 1;
        *(undefined *)(__dest_00 + (long)pbVar12 * 4 + -4) = 0;
      } while (pbVar12 <= pbVar14);
      *param_3 = pbVar12;
    }
    iVar6 = *(int *)(__dest_00 + (long)pbVar14 * 4);
    param_1 = pbVar11;
    local_78 = uVar8;
    pbVar12 = local_68;
    if (iVar6 == 0) {
      *(undefined *)(__dest_00 + (long)pbVar14 * 4) = 5;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    else {
      if (iVar6 != 5) goto LAB_0040fd8c;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    goto joined_r0x0040f87a;
  }
  pbVar19 = (byte *)((long)pbVar19 * 2);
  if (pbVar19 <= pbVar14) {
    pbVar19 = pbVar14 + 1;
  }
  if ((byte *)0x7ffffffffffffff < pbVar19) goto LAB_0040ff60;
  if (ppbVar2 != __ptr) {
    __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
    __ptr = (byte **)param_3[1];
    if (__dest_00 != (byte **)0x0) {
      pbVar12 = *param_3;
      if (ppbVar2 == __ptr) goto LAB_00410079;
      goto LAB_0040fb4d;
    }
    goto LAB_0040ff60;
  }
  __dest_00 = (byte **)malloc((long)pbVar19 << 5);
  if (__dest_00 != (byte **)0x0) {
    pbVar12 = *param_3;
    __ptr = ppbVar2;
LAB_00410079:
    memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
    pbVar12 = *param_3;
LAB_0040fb4d:
    param_3[1] = (byte *)__dest_00;
    goto LAB_0040f82c;
  }
  goto LAB_0040ff79;
code_r0x0040f944:
  switch(bVar17) {
  case 0x25:
    goto switchD_0040f947_caseD_25;
  default:
    goto switchD_0040f947_caseD_26;
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    iVar6 = 0xc;
    if ((int)uVar5 < 0x10) {
      iVar6 = ((uVar5 & 4) != 0) + 0xb;
    }
    break;
  case 0x43:
    iVar6 = 0xe;
    bVar17 = 99;
    break;
  case 0x53:
    iVar6 = 0x10;
    bVar17 = 0x73;
    break;
  case 0x58:
  case 0x6f:
  case 0x75:
  case 0x78:
    iVar6 = 10;
    if (((((int)uVar5 < 0x10) && ((uVar5 & 4) == 0)) && (iVar6 = 8, (int)uVar5 < 8)) &&
       (iVar6 = 2, (uVar5 & 2) == 0)) {
      iVar6 = (-(uint)((uVar5 & 1) == 0) & 2) + 4;
    }
    break;
  case 99:
    iVar6 = (7 < (int)uVar5) + 0xd;
    break;
  case 100:
  case 0x69:
    iVar6 = 9;
    if ((((int)uVar5 < 0x10) && ((uVar5 & 4) == 0)) &&
       ((iVar6 = 7, (int)uVar5 < 8 && (iVar6 = 1, (uVar5 & 2) == 0)))) {
      iVar6 = (-(uint)((uVar5 & 1) == 0) & 2) + 3;
    }
    break;
  case 0x6e:
    iVar6 = 0x16;
    if ((((int)uVar5 < 0x10) && ((uVar5 & 4) == 0)) &&
       ((iVar6 = 0x15, (int)uVar5 < 8 && (iVar6 = 0x12, (uVar5 & 2) == 0)))) {
      iVar6 = ((uVar5 & 1) == 0) + 0x13;
    }
    break;
  case 0x70:
    iVar6 = 0x11;
    break;
  case 0x73:
    iVar6 = (7 < (int)uVar5) + 0xf;
  }
  if (pbVar18 == (byte *)0xffffffffffffffff) {
    ppbVar3[10] = local_68;
    bVar21 = local_68 == (byte *)0xffffffffffffffff;
    pbVar18 = local_68;
    local_68 = local_68 + 1;
    if (bVar21) {
switchD_0040f947_caseD_26:
      __dest_00 = (byte **)param_3[1];
      goto LAB_0040fd8c;
    }
  }
  else {
    ppbVar3[10] = pbVar18;
  }
  __ptr = (byte **)param_3[1];
  __dest_00 = __ptr;
  if (pbVar18 < pbVar19) {
LAB_0040f975:
    pbVar11 = *param_3;
    if (pbVar11 <= pbVar18) {
      do {
        pbVar11 = pbVar11 + 1;
        *(undefined *)(__dest_00 + (long)pbVar11 * 4 + -4) = 0;
      } while (pbVar11 <= pbVar18);
      *param_3 = pbVar11;
    }
    iVar7 = *(int *)(__dest_00 + (long)pbVar18 * 4);
    if (iVar7 == 0) {
      *(int *)(__dest_00 + (long)pbVar18 * 4) = iVar6;
    }
    else if (iVar7 != iVar6) {
LAB_0040fd8c:
      if (ppbVar2 != __dest_00) {
        free(__dest_00);
      }
      if (puVar1 != (ulong *)param_2[1]) {
        free((ulong *)param_2[1]);
      }
      piVar9 = __errno_location();
      *piVar9 = 0x16;
      return 0xffffffff;
    }
switchD_0040f947_caseD_25:
    *(byte *)(ppbVar3 + 9) = bVar17;
    uVar8 = *param_2;
    ppbVar3[1] = param_1;
    uVar8 = uVar8 + 1;
    *param_2 = uVar8;
    if (uVar8 < uVar20) {
      __dest = (ulong *)param_2[1];
      goto LAB_0040f63b;
    }
    if (((long)uVar20 < 0) || (0x2e8ba2e8ba2e8ba < uVar20 * 2)) {
LAB_004102b3:
      __ptr = (byte **)param_3[1];
      goto LAB_0040ff60;
    }
    __ptr_00 = (ulong *)param_2[1];
    if (puVar1 != __ptr_00) {
      __dest = (ulong *)realloc(__ptr_00,uVar20 * 0xb0);
      if (__dest == (ulong *)0x0) goto LAB_004102b3;
      __ptr_00 = (ulong *)param_2[1];
      uVar8 = *param_2;
      if (puVar1 != __ptr_00) goto LAB_0040fa4f;
LAB_0040fb74:
      __dest = (ulong *)memcpy(__dest,__ptr_00,uVar8 * 0x58);
      uVar8 = *param_2;
LAB_0040fa4f:
      param_2[1] = (ulong)__dest;
      uVar20 = uVar20 * 2;
      goto LAB_0040f63b;
    }
    __dest = (ulong *)malloc(uVar20 * 0xb0);
    if (__dest != (ulong *)0x0) goto LAB_0040fb74;
    __ptr = (byte **)param_3[1];
    if (ppbVar2 == __ptr) goto LAB_0040ff89;
  }
  else {
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar18) {
      pbVar19 = pbVar18 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_0040ff79;
LAB_0040ff16:
        memcpy(__dest_00,__ptr,(long)*param_3 << 5);
LAB_0040fe5b:
        param_3[1] = (byte *)__dest_00;
        goto LAB_0040f975;
      }
      __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
      if (__dest_00 != (byte **)0x0) {
        __ptr = ppbVar2;
        if (ppbVar2 == (byte **)param_3[1]) goto LAB_0040ff16;
        goto LAB_0040fe5b;
      }
      goto LAB_004102b3;
    }
LAB_0040ff60:
    if (ppbVar2 == __ptr) goto LAB_0040ff79;
  }
  free(__ptr);
LAB_0040ff79:
  if (puVar1 != (ulong *)param_2[1]) {
    free((ulong *)param_2[1]);
  }
LAB_0040ff89:
  piVar9 = __errno_location();
  *piVar9 = 0xc;
  return 0xffffffff;
}


/* WARNING: Removing unreachable block (ram,0x00410303) */
/* WARNING: Removing unreachable block (ram,0x00410308) */

void FUN_004102d0(void)

{
  __DT_INIT();
  return;
}


void FUN_00410330(void)

{
  return;
}


void FUN_00410340(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_00617308);
  return;
}


undefined FUN_00410358(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00616e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00402921();
  return;
}

