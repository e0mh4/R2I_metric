
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00402d80caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a65(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a6a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a6f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a74(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_00404c3acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */

byte FUN_00401a80(int param_1,undefined *param_2)

{
  bool bVar1;
  FILE *pFVar2;
  char cVar3;
  int iVar4;
  __uid_t __uid;
  passwd *ppVar5;
  undefined uVar6;
  char *pcVar7;
  group *pgVar8;
  undefined uVar9;
  int *piVar10;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar11;
  ulong uVar12;
  __gid_t _Var13;
  byte bVar14;
  byte bVar15;
  undefined auVar16 [16];
  undefined uStack_58;
  ulong local_50 [2];
  void *local_40 [2];
  
  bVar15 = 0;
  cVar3 = '\0';
  bVar1 = false;
  bVar14 = 0;
  FUN_00402b90(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_004070a0(FUN_00402aa0);
  uStack_58 = uStack_58 & 0xffffffffffffff;
LAB_00401ae0:
  do {
    iVar4 = FUN_00406590(param_1,param_2,"agnruzGZ",&PTR_s_context_004078a0,0);
    if (iVar4 == -1) break;
    if (iVar4 != 0x61) {
      if (iVar4 < 0x62) {
        if (iVar4 == -0x82) goto LAB_004022ad;
        if (iVar4 < -0x81) {
          if (iVar4 == -0x83) {
            FUN_00405010(stdout,&DAT_00407104,"GNU coreutils",PTR_DAT_0060b238,"Arnold Robbins",
                         "David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          goto LAB_004022a3;
        }
        if (iVar4 == 0x47) {
          bVar14 = 1;
          goto LAB_00401ae0;
        }
        if (iVar4 != 0x5a) goto LAB_004022a3;
        uVar9 = dcgettext(0,"--context (-Z) works only on an SELinux-enabled kernel",5);
        iVar4 = error(1,0,uVar9);
      }
      else {
        if (iVar4 == 0x72) {
          uStack_58 = CONCAT17(1,(undefined)uStack_58);
          goto LAB_00401ae0;
        }
        if (iVar4 < 0x73) {
          if (iVar4 == 0x67) {
            bVar15 = 1;
          }
          else {
            if (iVar4 != 0x6e) goto LAB_004022a3;
            DAT_0060b348 = '\x01';
          }
          goto LAB_00401ae0;
        }
        if (iVar4 == 0x75) {
          cVar3 = '\x01';
          goto LAB_00401ae0;
        }
      }
      if (iVar4 != 0x7a) goto LAB_004022a3;
      bVar1 = true;
    }
  } while( true );
  lVar11 = (long)DAT_0060b2bc;
  uVar12 = (ulong)(param_1 - DAT_0060b2bc);
  if (uVar12 < 2) {
    if (1 < (byte)(cVar3 + bVar15 + bVar14)) {
      uVar9 = dcgettext(0,"cannot print \"only\" of more than one choice",5);
      error(1,0,uVar9);
LAB_0040235b:
      param_2 = (undefined *)FUN_004047b0(param_2);
      uVar9 = dcgettext(0,"%s: no such user",5);
      error(1,0,uVar9,param_2);
LAB_0040238b:
      uVar9 = dcgettext(0,"cannot print only names or real IDs in default format",5);
      error(1,0,uVar9);
LAB_004023ad:
      uVar9 = dcgettext(0,"option --zero not permitted in default format",5);
      error(1,0,uVar9);
LAB_004023cf:
      uVar9 = dcgettext(0,"cannot get effective GID",5);
      auVar16 = error(1,*(int *)param_2,uVar9);
      uVar12 = uStack_58;
      uStack_58 = SUB168(auVar16,0);
      (*(code *)PTR___libc_start_main_0060aff0)
                (FUN_00401a80,uVar12,local_50,FUN_00407030,FUN_00407090,SUB168(auVar16 >> 0x40,0),
                 &uStack_58);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if ((cVar3 == '\0') && ((bVar14 | bVar15) == 0)) goto LAB_00401cc4;
    uVar12 = uVar12 - 1;
    if (uVar12 != 0) {
      local_50[0] = local_50[0] & 0xffffffffffffff00 | (ulong)(bVar14 | bVar15);
      param_2 = (undefined *)__errno_location();
      if (cVar3 == '\0') {
        if ((char)local_50[0] == '\0') goto LAB_00401cfc;
        goto LAB_00402089;
      }
      if (uStack_58._7_1_ == '\0') {
        *(undefined *)param_2 = 0;
        __uid = geteuid();
        DAT_0060b340 = __uid;
        if ((__uid == 0xffffffff) && (*(int *)param_2 != 0)) {
LAB_00401d1f:
          uVar9 = dcgettext(0,"cannot get effective UID",5);
          error(1,*(int *)param_2,uVar9);
          lVar11 = extraout_RDX_00;
          goto LAB_00401d41;
        }
      }
      else {
        *(undefined *)param_2 = 0;
        DAT_0060b344 = getuid();
        if (DAT_0060b344 == 0xffffffff) {
          if (*(int *)param_2 == 0) goto LAB_004020ff;
          while( true ) {
            uVar9 = dcgettext(0,"cannot get real UID",5);
            error(1,*(int *)param_2,uVar9);
            lVar11 = extraout_RDX;
LAB_00401cc4:
            if ((uStack_58._7_1_ != '\0') || (DAT_0060b348 != '\0')) goto LAB_0040238b;
            if (bVar1) goto LAB_004023ad;
            if (uVar12 != 0) goto LAB_00401d41;
            getenv("POSIXLY_CORRECT");
            param_2 = (undefined *)__errno_location();
LAB_00401cfc:
            *(int *)param_2 = 0;
            DAT_0060b340 = geteuid();
            if ((DAT_0060b340 == 0xffffffff) && (*(int *)param_2 != 0)) goto LAB_00401d1f;
LAB_00402089:
            if (bVar15 != 0) break;
            *(int *)param_2 = 0;
            DAT_0060b344 = getuid();
            if ((DAT_0060b344 != 0xffffffff) || (*(int *)param_2 == 0)) break;
          }
          *(int *)param_2 = 0;
          DAT_0060b338 = getegid();
          if ((DAT_0060b338 == 0xffffffff) && (*(int *)param_2 != 0)) goto LAB_004023cf;
          *(int *)param_2 = 0;
          DAT_0060b33c = getgid();
          local_50[0] = 0;
          if ((DAT_0060b33c == 0xffffffff) && (*(int *)param_2 != 0)) {
            uVar9 = dcgettext(0,"cannot get real GID",5);
            error(1,*(int *)param_2,uVar9);
            goto LAB_004020ff;
          }
          goto LAB_00401db6;
        }
LAB_0040210a:
        __uid = DAT_0060b344;
      }
LAB_00402110:
      if (DAT_0060b348 == '\0') {
LAB_004021d7:
        pcVar7 = (char *)FUN_00402b40(__uid,&DAT_0060b320);
      }
      else {
        ppVar5 = getpwuid(__uid);
        if (ppVar5 == (passwd *)0x0) {
          uVar9 = FUN_00402b40(__uid,&DAT_0060b320);
          uVar6 = dcgettext(0,"cannot find name for user ID %s",5);
          error(0,0,uVar6,uVar9);
          DAT_0060b230 = 0;
          goto LAB_004021d7;
        }
        pcVar7 = ppVar5->pw_name;
      }
      fputs_unlocked(pcVar7,stdout);
      goto LAB_00402037;
    }
LAB_00401d41:
    param_2 = (undefined *)param_2[lVar11];
    if (((*(char *)param_2 == '\0') ||
        (lVar11 = FUN_00404ae0(param_2,&DAT_0060b340,0,0,0), lVar11 != 0)) ||
       (ppVar5 = getpwuid(DAT_0060b340), ppVar5 == (passwd *)0x0)) goto LAB_0040235b;
    local_50[0] = FUN_00405380(ppVar5->pw_name);
    DAT_0060b340 = ppVar5->pw_uid;
    DAT_0060b338 = ppVar5->pw_gid;
    DAT_0060b33c = DAT_0060b338;
    DAT_0060b344 = DAT_0060b340;
    if (cVar3 != '\0') {
LAB_004020ff:
      __uid = DAT_0060b340;
      if (uStack_58._7_1_ != '\0') goto LAB_0040210a;
      goto LAB_00402110;
    }
LAB_00401db6:
    if (bVar15 != 0) {
      _Var13 = DAT_0060b338;
      if (uStack_58._7_1_ != '\0') {
        _Var13 = DAT_0060b33c;
      }
      cVar3 = FUN_00402820(_Var13);
      if (cVar3 != '\0') goto LAB_00402037;
LAB_00402030:
      DAT_0060b230 = 0;
      goto LAB_00402037;
    }
    if (bVar14 == 0) {
      uVar9 = FUN_00402b40(DAT_0060b344,&DAT_0060b320);
      uVar6 = dcgettext(0,"uid=%s",5);
      __printf_chk(1,uVar6,uVar9);
      ppVar5 = getpwuid(DAT_0060b344);
      if (ppVar5 != (passwd *)0x0) {
        __printf_chk(1,&DAT_00407261,ppVar5->pw_name);
      }
      uVar9 = FUN_00402b40(DAT_0060b33c,&DAT_0060b300);
      uVar6 = dcgettext(0," gid=%s",5);
      __printf_chk(1,uVar6,uVar9);
      pgVar8 = getgrgid(DAT_0060b33c);
      if (pgVar8 != (group *)0x0) {
        __printf_chk(1,&DAT_00407261,pgVar8->gr_name);
      }
      if (DAT_0060b340 != DAT_0060b344) {
        uVar9 = FUN_00402b40(DAT_0060b340,&DAT_0060b320);
        uVar6 = dcgettext(0," euid=%s",5);
        __printf_chk(1,uVar6,uVar9);
        ppVar5 = getpwuid(DAT_0060b340);
        if (ppVar5 != (passwd *)0x0) {
          __printf_chk(1,&DAT_00407261,ppVar5->pw_name);
        }
      }
      if (DAT_0060b338 != DAT_0060b33c) {
        uVar9 = FUN_00402b40(DAT_0060b338,&DAT_0060b300);
        uVar6 = dcgettext(0," egid=%s",5);
        __printf_chk(1,uVar6,uVar9);
        pgVar8 = getgrgid(DAT_0060b338);
        if (pgVar8 != (group *)0x0) {
          __printf_chk(1,&DAT_00407261,pgVar8->gr_name);
        }
      }
      if (local_50[0] == 0) goto LAB_004022b4;
      _Var13 = 0xffffffff;
      if (ppVar5 != (passwd *)0x0) {
        _Var13 = ppVar5->pw_gid;
      }
      iVar4 = FUN_004053e0(local_50[0],_Var13,local_40);
      if (-1 < iVar4) goto LAB_00401f7d;
      uVar9 = FUN_004047b0(local_50[0]);
      uVar6 = dcgettext(0,"failed to get groups for user %s",5);
      piVar10 = __errno_location();
      error(0,*piVar10,uVar6,uVar9);
      goto LAB_00402030;
    }
    if (bVar1) {
      cVar3 = FUN_004028a0(local_50[0],DAT_0060b344,DAT_0060b33c,DAT_0060b338,DAT_0060b348,0);
      if (cVar3 == '\0') goto LAB_00402030;
      goto LAB_00402197;
    }
    cVar3 = FUN_004028a0(local_50[0],DAT_0060b344,DAT_0060b33c,DAT_0060b338,DAT_0060b348,0x20);
    if (cVar3 == '\0') goto LAB_00402030;
  }
  else {
    uVar9 = FUN_004047b0(param_2[lVar11 + 1]);
    uVar6 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar6,uVar9);
LAB_004022a3:
    FUN_004024e0(1);
LAB_004022ad:
    FUN_004024e0(0);
LAB_004022b4:
    iVar4 = FUN_004053e0(0,DAT_0060b338,local_40);
    if (iVar4 < 0) {
      uVar9 = dcgettext(0,"failed to get groups for the current process",5);
      piVar10 = __errno_location();
      error(0,*piVar10,uVar9);
      goto LAB_00402030;
    }
LAB_00401f7d:
    pFVar2 = stdout;
    if (iVar4 != 0) {
      pcVar7 = (char *)dcgettext(0," groups=",5);
      fputs_unlocked(pcVar7,pFVar2);
    }
    for (lVar11 = 0; (int)lVar11 < iVar4; lVar11 = lVar11 + 1) {
      if ((int)lVar11 != 0) {
        pcVar7 = stdout->_IO_write_ptr;
        if (pcVar7 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar7 + 1;
          *pcVar7 = ',';
        }
        else {
          __overflow(stdout,0x2c);
        }
      }
      pFVar2 = stdout;
      pcVar7 = (char *)FUN_00402b40(*(undefined *)((long)local_40[0] + lVar11 * 4),&DAT_0060b300);
      fputs_unlocked(pcVar7,pFVar2);
      pgVar8 = getgrgid(*(__gid_t *)((long)local_40[0] + lVar11 * 4));
      if (pgVar8 != (group *)0x0) {
        __printf_chk(1,&DAT_00407261,pgVar8->gr_name);
      }
    }
    free(local_40[0]);
LAB_00402037:
    if (bVar1) {
LAB_00402197:
      iVar4 = 0;
      goto LAB_00402045;
    }
  }
  iVar4 = 10;
LAB_00402045:
  pcVar7 = stdout->_IO_write_ptr;
  if (stdout->_IO_write_end < pcVar7 || stdout->_IO_write_end == pcVar7) {
    __overflow(stdout,iVar4);
  }
  else {
    stdout->_IO_write_ptr = pcVar7 + 1;
    *pcVar7 = (char)iVar4;
  }
  return DAT_0060b230 ^ 1;
}


void FUN_00402400(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060aff0)
            (FUN_00401a80,unaff_retaddr,&stack0x00000008,FUN_00407030,FUN_00407090,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402438) */
/* WARNING: Removing unreachable block (ram,0x00402442) */

void FUN_0040242b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402479) */

void FUN_0040244a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004024b6) */

void FUN_00402481(void)

{
  if (DAT_0060b2e8 != '\0') {
    return;
  }
  FUN_0040242b();
  DAT_0060b2e8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402479) */

void thunk_FUN_0040244a(void)

{
  return;
}


void FUN_004024e0(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined uVar3;
  char *pcVar4;
  byte **ppbVar5;
  undefined uVar7;
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
  byte **ppbVar6;
  
  uVar7 = DAT_0060b378;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040251f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [USER]\n",5);
  __printf_chk(1,uVar3,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print user and group information for the specified USER,\nor (when USER omitted) for the current user.\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a             ignore, for compatibility with other versions\n  -Z, --context  print only the security context of the process\n  -g, --group    print only the effective group ID\n  -G, --groups   print all group IDs\n  -n, --name     print a name instead of a number, for -ugG\n  -r, --real     print the real ID instead of the effective ID, with -ugG\n  -u, --user     print only the effective user ID\n  -z, --zero     delimit entries with NUL characters, not whitespace;\n                   not permitted in default format\n"
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
                             "\nWithout any OPTION, print some useful set of identified information.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_00407125;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40719f;
  local_78[1] = (byte *)0x407137;
  local_78[2] = (byte *)0x40714d;
  local_78[3] = (byte *)0x407157;
  local_78[4] = (byte *)0x407166;
  local_50 = "sha2 utilities";
  local_48 = "sha384sum";
  local_40 = "sha2 utilities";
  local_38 = "sha512sum";
  local_30 = "sha2 utilities";
  local_28 = 0;
  local_20 = 0;
  ppbVar5 = &local_88;
  do {
    ppbVar6 = ppbVar5;
    ppbVar5 = ppbVar6 + 2;
    pbVar9 = *ppbVar5;
    bVar11 = false;
    bVar12 = pbVar9 == (byte *)0x0;
    if (bVar12) break;
    lVar8 = 3;
    pbVar10 = &DAT_00407104;
    do {
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
      bVar11 = *pbVar10 < *pbVar9;
      bVar12 = *pbVar10 == *pbVar9;
      pbVar10 = pbVar10 + (ulong)bVar13 * -2 + 1;
      pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
    } while (bVar12);
  } while ((!bVar11 && !bVar12) != bVar11);
  pbVar9 = ppbVar6[3];
  if (pbVar9 == (byte *)0x0) {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        pbVar9 = &DAT_00407104;
        goto LAB_004027eb;
      }
    }
    pbVar9 = &DAT_00407104;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_00407104);
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_004027eb:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,&DAT_00407104);
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_00407104);
    if (pbVar9 != &DAT_00407104) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_0040251f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


undefined FUN_00402820(__gid_t param_1,undefined param_2)

{
  undefined uVar1;
  group *pgVar2;
  undefined uVar3;
  char *__s;
  
  uVar1 = 1;
  if ((char)param_2 != '\0') {
    pgVar2 = getgrgid(param_1);
    if (pgVar2 != (group *)0x0) {
      __s = pgVar2->gr_name;
      goto LAB_00402880;
    }
    uVar3 = dcgettext(0,"cannot find name for group ID %lu",5);
    error(0,0,uVar3,param_1);
    uVar1 = 0;
  }
  param_2 = uVar1;
  __s = (char *)FUN_00402b40(param_1,&DAT_0060b350);
LAB_00402880:
  fputs_unlocked(__s,stdout);
  return param_2;
}


uint FUN_004028a0(long param_1,__uid_t param_2,__gid_t param_3,__gid_t param_4,undefined param_5,
                 byte param_6)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  passwd *ppVar4;
  int *piVar5;
  undefined uVar6;
  undefined uVar7;
  __gid_t _Var8;
  void *__ptr;
  uint unaff_R13D;
  uint uVar9;
  long lVar10;
  void *local_40 [2];
  
  if (param_1 == 0) {
    ppVar4 = (passwd *)0x0;
    uVar9 = 1;
  }
  else {
    ppVar4 = getpwuid(param_2);
    uVar9 = unaff_R13D & 0xffffff00 | (uint)(ppVar4 != (passwd *)0x0);
  }
  cVar2 = FUN_00402820(param_3,param_5);
  if (cVar2 == '\0') {
    uVar9 = 0;
  }
  if (param_3 != param_4) {
    pbVar1 = (byte *)stdout->_IO_write_ptr;
    if (pbVar1 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
      *pbVar1 = param_6;
    }
    else {
      __overflow(stdout,(uint)param_6);
    }
    cVar2 = FUN_00402820(param_4,param_5);
    if (cVar2 == '\0') {
      uVar9 = 0;
    }
  }
  _Var8 = param_4;
  if (ppVar4 != (passwd *)0x0) {
    _Var8 = ppVar4->pw_gid;
  }
  iVar3 = FUN_004053e0(param_1,_Var8,local_40);
  if (iVar3 < 0) {
    piVar5 = __errno_location();
    if (param_1 == 0) {
      uVar6 = dcgettext(0,"failed to get groups for the current process",5);
      error(0,*piVar5,uVar6);
    }
    else {
      uVar6 = FUN_004047b0(param_1);
      uVar7 = dcgettext(0,"failed to get groups for user %s",5);
      error(0,*piVar5,uVar7,uVar6);
    }
    uVar9 = 0;
  }
  else {
    __ptr = local_40[0];
    if (iVar3 != 0) {
      lVar10 = 0;
      do {
        if ((*(__gid_t *)((long)__ptr + lVar10) != param_4) &&
           (*(__gid_t *)((long)__ptr + lVar10) != param_3)) {
          pbVar1 = (byte *)stdout->_IO_write_ptr;
          if (pbVar1 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
            *pbVar1 = param_6;
          }
          else {
            __overflow(stdout,(uint)param_6);
          }
          cVar2 = FUN_00402820(*(undefined *)((long)local_40[0] + lVar10),param_5);
          __ptr = local_40[0];
          if (cVar2 == '\0') {
            uVar9 = 0;
          }
        }
        lVar10 = lVar10 + 4;
      } while ((ulong)(iVar3 - 1) * 4 + 4 != lVar10);
    }
    free(__ptr);
  }
  return uVar9;
}


void FUN_00402a80(undefined param_1)

{
  DAT_0060b370 = param_1;
  return;
}


void FUN_00402a90(undefined param_1)

{
  DAT_0060b368 = param_1;
  return;
}


void FUN_00402aa0(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00406690(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060b368 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060b370 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00404600();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00402b1e;
    }
  }
  iVar1 = FUN_00406690(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00402b1e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060b240);
}


char * FUN_00402b40(ulong param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2 + 0x14);
  *(undefined *)(param_2 + 0x14) = 0;
  do {
    pcVar2 = pcVar2 + -1;
    *pcVar2 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  return pcVar2;
}


void FUN_00402b90(byte *param_1)

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
      pbVar6 = (byte *)"/.libs/";
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
        pbVar6 = &DAT_00407a60;
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
  DAT_0060b378 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00402c30(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00406750();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00402d08:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00407a71;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00407a66;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00402d08;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00407a6d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00407a6a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00402d30(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00403981:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_004035b6;
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
      goto LAB_00403981;
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
      param_8 = (char *)FUN_00402c30(&DAT_00407a75,param_5);
      param_9 = (char *)FUN_00402c30(&DAT_00408fef);
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
LAB_00402dc8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00402dd8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403558;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_004034d0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_004034e2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040334e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004031e5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_004034e2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_004034e2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_004034e2_caseD_b:
        bVar17 = 0x76;
        goto LAB_004031e5;
      case 0xc:
switchD_004034e2_caseD_c:
        bVar17 = 0x66;
LAB_004031e5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00403138;
        }
LAB_004031f0:
        bVar23 = false;
        goto LAB_00402fab;
      case 0xd:
        bVar20 = false;
switchD_00402ec8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00403100;
      case 0x20:
        bVar25 = false;
LAB_0040352a:
        uVar19 = 0x20;
        goto LAB_004034f2;
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
switchD_00402ec8_caseD_21:
        bVar25 = false;
        goto LAB_0040310b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040350a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00402f18;
        }
        bVar23 = false;
        goto LAB_00402f2f;
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
LAB_004034f2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00402f31;
      case 0x27:
        bVar20 = false;
        goto switchD_0040334e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040334e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00402ec8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040334e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00403127;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_004034d0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00402ec8_caseD_0;
      default:
        goto switchD_0040334e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004031f0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_004034e2_caseD_9;
      case 10:
        goto switchD_004034e2_caseD_a;
      case 0xb:
        goto switchD_004034e2_caseD_b;
      case 0xc:
        goto switchD_004034e2_caseD_c;
      case 0xd:
        goto switchD_00402ec8_caseD_d;
      case 0x20:
        goto LAB_0040352a;
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
        goto switchD_00402ec8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040350a;
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
        goto LAB_004034f2;
      case 0x27:
        goto switchD_0040334e_caseD_27;
      case 0x3f:
        goto switchD_0040334e_caseD_3f;
      case 0x5c:
        goto switchD_00402ec8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040334e_caseD_7b;
      }
      goto LAB_00402f72;
    }
    goto LAB_0040314a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_004034e2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00402ec8_caseD_0:
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
            goto LAB_00403028;
          }
LAB_0040326a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040326a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00403028;
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
LAB_004032a9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00403028;
        goto LAB_00402f31;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040313c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00402f18;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00402dd8;
  default:
switchD_0040334e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00406610(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_00403c5a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00403d97;
          goto LAB_00403d87;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040313c;
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
      goto LAB_00403c5a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00403324;
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
    goto LAB_00403362;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403362;
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
LAB_00403362:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040337a:
      param_5 = 2;
      goto LAB_0040313c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00402f06;
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
LAB_00402f06:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040337a;
    goto LAB_00402f18;
  case 0x23:
  case 0x7e:
LAB_00402efd:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00402f06;
    goto LAB_0040310b;
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
    goto switchD_0040334e_caseD_25;
  case 0x27:
switchD_0040334e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00402f18;
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
      goto LAB_00403028;
    }
    goto LAB_0040313c;
  case 0x3f:
switchD_0040334e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00403028;
      }
      goto LAB_0040313c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00402f18;
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
        goto LAB_004032a9;
      }
      goto LAB_0040314a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00402f18;
  case 0x5c:
    if (param_5 != 2) {
switchD_00402ec8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00403044;
    }
    if (local_5c) goto LAB_0040313c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00403044;
  case 0x7b:
  case 0x7d:
switchD_0040334e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00402efd;
    goto LAB_0040310b;
  }
LAB_00403100:
  if (!bVar6) {
LAB_0040310b:
    bVar23 = false;
    goto LAB_00402f18;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00403127;
LAB_00403558:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040313c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040314a:
    uVar9 = FUN_00402d30(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00403e2d:
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
    uVar9 = FUN_00402d30(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00403e2d;
LAB_004035b6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00402dc8;
  while (__s1[uVar21] != 0) {
LAB_00403d87:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00403d97:
  bVar23 = false;
LAB_00403c5a:
  if (1 < uVar21) {
LAB_0040381e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040313c;
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
        if (uVar21 <= uVar22) goto LAB_00402fbd;
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
        if (uVar21 <= uVar22) goto LAB_00403044;
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
LAB_00403324:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040381e;
  }
switchD_0040334e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00402f18:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00402f2f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00402f31:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00403028;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00403028:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00403044:
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
      goto LAB_00402fbd;
    }
  }
joined_r0x00403127:
  if (local_5c) {
LAB_00403138:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040313c;
  }
LAB_00402f72:
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
LAB_00402fab:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00402fbd:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00402dd8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00403f60(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0060b298;
  if (DAT_0060b2b0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_004053a0();
    }
    if (PTR_DAT_0060b298 == &DAT_0060b2a0) {
      puVar8 = (undefined *)FUN_004051b0(0);
      uVar6 = PTR_DAT_0060b2a8._4_4_;
      uVar5 = PTR_DAT_0060b2a8._0_4_;
      uVar3 = _UNK_0060b2a4;
      PTR_DAT_0060b298 = (undefined *)puVar8;
      *puVar8 = _DAT_0060b2a0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_004051b0(PTR_DAT_0060b298);
      PTR_DAT_0060b298 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060b2b0 * 4,0,(long)((param_1 + 1) - DAT_0060b2b0) << 4);
    DAT_0060b2b0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00402d30(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060b380) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00405150(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00402d30(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00404100(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b480;
  }
  FUN_00405350(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404140(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060b480;
  }
  return *param_1;
}


void FUN_00404150(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060b480;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00404160(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b480;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_004041a0(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b480;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004041c0(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060b480;
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


void FUN_004041f0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060b480;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00402d30(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404270(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0060b480;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00402d30(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00405150(lVar3 + 1);
  FUN_00402d30(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404360(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404270(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404370(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060b298;
  if (1 < DAT_0060b2b0) {
    ppvVar2 = (void **)(PTR_DAT_0060b298 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060b298 + (ulong)(DAT_0060b2b0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060b380) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060b2a0 = 0x100;
    PTR_DAT_0060b2a8 = &DAT_0060b380;
  }
  if (__ptr_00 != &DAT_0060b2a0) {
    free(__ptr_00);
    PTR_DAT_0060b298 = &DAT_0060b2a0;
  }
  DAT_0060b2b0 = 1;
  return;
}


void FUN_00404410(undefined param_1,undefined param_2)

{
  FUN_00403f60(param_1,param_2,0xffffffffffffffff,&DAT_0060b480);
  return;
}


void FUN_00404430(void)

{
  FUN_00403f60();
  return;
}


void FUN_00404440(undefined param_1)

{
  FUN_00403f60(0,param_1,0xffffffffffffffff,&DAT_0060b480);
  return;
}


void FUN_00404460(undefined param_1,undefined param_2)

{
  FUN_00403f60(0,param_1,param_2,&DAT_0060b480);
  return;
}


void FUN_00404480(undefined param_1,int param_2,undefined param_3)

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
    FUN_00403f60(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004044f0(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00403f60(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404560(undefined param_1,undefined param_2)

{
  FUN_00404480(0,param_1,param_2);
  return;
}


void FUN_00404570(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004044f0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404580(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0060b4b0;
  local_48 = _DAT_0060b480;
  uStack_40 = uRam000000000060b488;
  local_38 = _DAT_0060b490;
  uStack_30 = uRam000000000060b498;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060b4a0;
  uStack_20 = uRam000000000060b4a8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00403f60(0,param_1,param_2,&local_48);
  return;
}


void FUN_004045f0(undefined param_1,char param_2)

{
  FUN_00404580(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404600(undefined param_1)

{
  FUN_00404580(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404620(undefined param_1,undefined param_2)

{
  FUN_00404580(param_1,param_2,0x3a);
  return;
}


void FUN_00404630(undefined param_1,int param_2,undefined param_3)

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
    FUN_00403f60(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004046a0(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060b488;
  local_38 = _DAT_0060b490;
  uStack_30 = uRam000000000060b498;
  local_28 = _DAT_0060b4a0;
  lStack_20 = uRam000000000060b4a8;
  local_18 = DAT_0060b4b0;
  local_48 = CONCAT44((int)((ulong)_DAT_0060b480 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00403f60(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404710(void)

{
  FUN_004046a0();
  return;
}


void FUN_00404720(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004046a0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404740(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_004046a0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00404760(void)

{
  FUN_00403f60();
  return;
}


void FUN_00404770(undefined param_1,undefined param_2)

{
  FUN_00403f60(0,param_1,param_2,&DAT_0060b260);
  return;
}


void FUN_00404790(undefined param_1,undefined param_2)

{
  FUN_00403f60(param_1,param_2,0xffffffffffffffff,&DAT_0060b260);
  return;
}


void FUN_004047b0(undefined param_1)

{
  FUN_00403f60(0,param_1,0xffffffffffffffff,&DAT_0060b260);
  return;
}


undefined
FUN_004047d0(char *param_1,long param_2,__uid_t *param_3,__gid_t *param_4,char **param_5,
            char **param_6)

{
  int iVar1;
  group *pgVar2;
  char *pcVar3;
  char *__name;
  passwd *ppVar4;
  void *__ptr;
  undefined uVar5;
  char *pcVar6;
  long lVar7;
  __gid_t __gid;
  bool bVar8;
  __uid_t local_6c;
  ulong local_58 [5];
  
  __gid = 0xffffffff;
  local_6c = *param_3;
  if (param_4 != (__gid_t *)0x0) {
    __gid = *param_4;
  }
  if (param_5 != (char **)0x0) {
    *param_5 = (char *)0x0;
  }
  if (param_6 != (char **)0x0) {
    *param_6 = (char *)0x0;
  }
  if (param_2 == 0) {
    __name = (char *)0x0;
    pcVar3 = (char *)0x0;
    if (*param_1 == '\0') goto LAB_0040487f;
    __name = (char *)FUN_00405380();
LAB_004049c8:
    if (__name == (char *)0x0) {
LAB_00404a2a:
      pcVar3 = (char *)0x0;
      goto LAB_0040487f;
    }
    pcVar3 = (char *)0x0;
    bVar8 = param_2 != 0;
    if (*__name == '+') {
LAB_004049e6:
      if (bVar8) {
        endpwent();
        pcVar6 = "invalid spec";
        __ptr = (void *)0x0;
        goto LAB_004049f7;
      }
      iVar1 = FUN_00405410(__name,0,10,local_58,"");
      if ((iVar1 != 0) || (local_6c = (__uid_t)local_58[0], 0xfffffffe < local_58[0])) {
        endpwent();
        pcVar6 = "invalid user";
        __ptr = (void *)0x0;
        goto LAB_004049f7;
      }
      endpwent();
      goto joined_r0x00404aa1;
    }
LAB_0040491a:
    ppVar4 = getpwnam(__name);
    if (ppVar4 == (passwd *)0x0) goto LAB_004049e6;
    local_6c = ppVar4->pw_uid;
    if (bVar8) {
      __gid = ppVar4->pw_gid;
      pgVar2 = getgrgid(__gid);
      if (pgVar2 == (group *)0x0) {
        pcVar3 = (char *)FUN_00402b40(__gid,local_58);
      }
      else {
        pcVar3 = pgVar2->gr_name;
      }
      pcVar3 = (char *)FUN_00405380(pcVar3);
      endgrent();
      endpwent();
      goto LAB_0040487f;
    }
    endpwent();
    if (pcVar3 == (char *)0x0) goto LAB_0040487f;
    if (*pcVar3 != '+') goto LAB_0040485a;
    goto LAB_0040495b;
  }
  lVar7 = param_2 - (long)param_1;
  if (lVar7 != 0) {
    __name = (char *)FUN_00405350(param_1,lVar7 + 1);
    __name[lVar7] = '\0';
    if (*(char *)(param_2 + 1) == '\0') goto LAB_004049c8;
    pcVar3 = (char *)(param_2 + 1);
    if (__name == (char *)0x0) goto LAB_00404841;
    bVar8 = pcVar3 == (char *)0x0 && param_2 != 0;
    if (*__name != '+') goto LAB_0040491a;
    goto LAB_004049e6;
  }
  if (*(char *)(param_2 + 1) == '\0') {
    __name = (char *)0x0;
    goto LAB_00404a2a;
  }
LAB_00404841:
  pcVar3 = (char *)(param_2 + 1);
  __name = (char *)0x0;
joined_r0x00404aa1:
  if (pcVar3 == (char *)0x0) goto LAB_0040487f;
  if (*pcVar3 == '+') {
LAB_0040495b:
    iVar1 = FUN_00405410(pcVar3,0,10,local_58,"");
    if ((iVar1 != 0) || (0xfffffffe < local_58[0])) {
      endgrent();
      pcVar6 = "invalid group";
      __ptr = (void *)FUN_00405380(pcVar3);
LAB_004049f7:
      free(__name);
      free(__ptr);
      uVar5 = dcgettext(0,pcVar6,5);
      return uVar5;
    }
  }
  else {
LAB_0040485a:
    pgVar2 = getgrnam(pcVar3);
    if (pgVar2 == (group *)0x0) goto LAB_0040495b;
    local_58[0] = (ulong)pgVar2->gr_gid;
  }
  __gid = (__gid_t)local_58[0];
  endgrent();
  pcVar3 = (char *)FUN_00405380(pcVar3);
LAB_0040487f:
  *param_3 = local_6c;
  if (param_4 != (__gid_t *)0x0) {
    *param_4 = __gid;
  }
  if (param_5 != (char **)0x0) {
    *param_5 = __name;
    __name = (char *)0x0;
  }
  if (param_6 != (char **)0x0) {
    *param_6 = pcVar3;
    pcVar3 = (char *)0x0;
  }
  free(__name);
  free(pcVar3);
  return 0;
}


long FUN_00404ae0(char *param_1,undefined param_2,long param_3,undefined param_4,
                 undefined param_5)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    lVar2 = FUN_004047d0(param_1,0,param_2,0,param_4,param_5);
    return lVar2;
  }
  pcVar1 = strchr(param_1,0x3a);
  lVar2 = FUN_004047d0(param_1,pcVar1,param_2,param_3,param_4,param_5);
  if (pcVar1 != (char *)0x0) {
    return lVar2;
  }
  if (lVar2 != 0) {
    pcVar1 = strchr(param_1,0x2e);
    if (pcVar1 == (char *)0x0) {
      return lVar2;
    }
    lVar3 = FUN_004047d0(param_1,pcVar1,param_2,param_3,param_4,param_5);
    if (lVar3 != 0) {
      return lVar2;
    }
  }
  return 0;
}


undefined
FUN_00404bb0(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_004087f3,5);
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
    goto LAB_00404e2c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00404e2c:
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
    goto LAB_00404ec9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00404ec9:
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
    goto LAB_00404caa;
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
LAB_00404caa:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00404f90(void)

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
  FUN_00404bb0();
  return;
}


void FUN_00404fb0(void)

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
  FUN_00404bb0();
  return;
}


void FUN_00405010(void)

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
  FUN_00404bb0();
  return;
}


void FUN_004050d0(void)

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


void FUN_00405150(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004053a0();
  }
  return;
}


void FUN_00405170(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00405150();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004053a0();
}


void thunk_FUN_00405150(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004053a0();
  }
  return;
}


void * FUN_004051b0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004053a0();
  }
  return pvVar1;
}


void FUN_004051f0(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_004051b0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004053a0();
}


void FUN_00405220(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040527b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040527b:
                    /* WARNING: Subroutine does not return */
      FUN_004053a0(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_004051b0(param_1,uVar2 * param_3);
  return;
}


void FUN_004052b0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_004051b0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_004052fa;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_004052fa:
                    /* WARNING: Subroutine does not return */
      FUN_004053a0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_004051b0(param_1,uVar1);
  return;
}


void FUN_00405300(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00405150();
  memset(__s,0,param_1);
  return;
}


void FUN_00405320(size_t param_1,ulong param_2)

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
  FUN_004053a0();
}


void FUN_00405350(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00405150(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00405380(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00405150(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_004053a0(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060b240,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


int FUN_004053e0(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00406d00();
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_004053a0();
    }
  }
  return iVar1;
}


ulong FUN_00405410(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

{
  byte bVar1;
  undefined auVar2 [16];
  int *piVar3;
  ushort **ppuVar4;
  byte *pbVar5;
  ulong uVar6;
  char *pcVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  byte *local_40 [2];
  
  if (0x24 < param_3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= strtol_base && strtol_base <= 36","lib/xstrtol.c",0x60,"xstrtoul");
  }
  if (param_2 == (byte **)0x0) {
    param_2 = local_40;
  }
  piVar3 = __errno_location();
  *piVar3 = 0;
  bVar12 = *param_1;
  ppuVar4 = __ctype_b_loc();
  pbVar5 = param_1;
  while ((*(byte *)((long)*ppuVar4 + (ulong)bVar12 * 2 + 1) & 0x20) != 0) {
    pbVar5 = pbVar5 + 1;
    bVar12 = *pbVar5;
  }
  if (bVar12 == 0x2d) {
    return 4;
  }
  uVar6 = strtoul((char *)param_1,(char **)param_2,param_3);
  pbVar5 = *param_2;
  if (pbVar5 == param_1) {
    if ((param_5 == (char *)0x0) || (bVar12 = *param_1, bVar12 == 0)) {
      return 4;
    }
    uVar14 = 0;
    uVar6 = 1;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) {
      return 4;
    }
  }
  else {
    if (*piVar3 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
      if (*piVar3 != 0x22) {
        return 4;
      }
    }
    uVar13 = (uint)uVar14;
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_004054b0;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_0040558c_caseD_1;
  }
  uVar13 = (uint)uVar14;
  uVar9 = bVar12 - 0x45;
  bVar8 = (byte)uVar9;
  if (((bVar8 < 0x30) && ((0x814400308945U >> ((ulong)uVar9 & 0x3f) & 1) != 0)) &&
     (pcVar7 = strchr(param_5,0x30), pcVar7 != (char *)0x0)) {
    bVar1 = pbVar5[1];
    if (bVar1 != 0x44) {
      if (bVar1 == 0x69) {
        uVar11 = 0x400;
        iVar15 = (pbVar5[2] == 0x42) + 1 + (uint)(pbVar5[2] == 0x42);
        goto LAB_0040557a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00405569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_00408bb8)[bVar8])();
        return uVar6;
      }
    }
    iVar15 = 2;
    uVar11 = 1000;
  }
  else {
    iVar15 = 1;
    uVar11 = 0x400;
  }
LAB_0040557a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_004055e7;
  default:
switchD_0040558c_caseD_1:
    *param_4 = uVar6;
    return (ulong)(uVar13 | 2);
  case 3:
    iVar16 = 6;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_00405674;
  case 5:
  case 0x25:
    uVar11 = (ulong)iVar10;
    if (((SUB168(ZEXT816(uVar6) * ZEXT816(uVar11) >> 0x40,0) != 0) ||
        (auVar2 = (ZEXT816(uVar6) * ZEXT816(uVar11) & (undefined)0xffffffffffffffff) *
                  ZEXT816(uVar11), SUB168(auVar2 >> 0x40,0) != 0)) ||
       (auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816(uVar11),
       uVar6 = SUB168(auVar2,0), SUB168(auVar2 >> 0x40,0) != 0)) {
      uVar6 = 0xffffffffffffffff;
      uVar14 = 1;
    }
    break;
  case 9:
  case 0x29:
    auVar2 = ZEXT816(uVar6) * ZEXT816(uVar11);
    goto joined_r0x004055ac;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_004055e7;
    auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x004055ac:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_004055e7:
      uVar14 = 1;
      uVar6 = 0xffffffffffffffff;
    }
    break;
  case 0xe:
    iVar16 = 5;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_00405674;
  case 0x12:
  case 0x32:
    iVar16 = 4;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_00405674;
  case 0x17:
    iVar16 = 8;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_00405674;
  case 0x18:
    iVar16 = 7;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
LAB_00405674:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_004055e7;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_004055e7;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_004054b0:
  *param_4 = uVar6;
  return uVar14;
}


void FUN_00405840(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_004058bc;
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
      if (iVar9 <= iVar3) goto LAB_004058bc;
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
LAB_004058bc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00405920(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00405b40;
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
            if (local_70 == (char *)0x0) goto LAB_00405a80;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00405a80;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00405a80:
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
              __fprintf_chk(__stream,1,&DAT_00408fe9,param_9,*param_4);
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
LAB_00405b40:
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


uint FUN_00405f40(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_00405f8a:
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
          goto LAB_0040608d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040608d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00406098:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00406008;
LAB_004060ac:
    if (*pbVar8 == 0) goto LAB_00406008;
  }
  else {
    if (param_7[6] == 0) goto LAB_00405f8a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00406098;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_004060ac;
LAB_00406008:
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
        FUN_00405840(param_2,param_7);
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
LAB_00406176:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00408ff1;
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
          FUN_00405840(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00406176;
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
        puVar15 = &DAT_00408ff1;
        goto LAB_004062d5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00406280;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00405920(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00408ff2);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00406280:
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
  puVar15 = &DAT_00409010;
LAB_004062d5:
  uVar3 = FUN_00405920(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406510(void)

{
  DAT_0060b4c0 = DAT_0060b2bc;
  _DAT_0060b4c4 = DAT_0060b2b8;
  FUN_00405f40();
  DAT_0060b2bc = DAT_0060b4c0;
  _DAT_0060b500 = DAT_0060b4d0;
  _DAT_0060b2b4 = DAT_0060b4c8;
  return;
}


void FUN_00406570(void)

{
  FUN_00406510();
  return;
}


void FUN_00406590(void)

{
  FUN_00406510();
  return;
}


void FUN_004065b0(void)

{
  FUN_00405f40();
  return;
}


void FUN_004065d0(void)

{
  FUN_00406510();
  return;
}


void FUN_004065f0(void)

{
  FUN_00405f40();
  return;
}


size_t FUN_00406610(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40900f;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00406634;
  }
  param_1 = &local_1c;
LAB_00406634:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_004066f0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00406690(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00406f10(param_1);
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


bool FUN_004066f0(int param_1)

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
    pbVar5 = &DAT_00409014;
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

char * FUN_00406750(void)

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
  if (DAT_0060b4f8 != (char *)0x0) goto LAB_0040678a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00406875:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00406896;
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
        goto LAB_00406875;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00406896:
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
LAB_00406930:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00406abc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00406930;
              if (uVar4 == 0x23) goto LAB_00406b21;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00406acf;
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
                FUN_00406f10(__stream);
                goto LAB_004068d4;
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
LAB_00406abc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00406acf;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_004068ce;
    }
  }
  DAT_0060b4f8 = "";
LAB_0040678a:
  cVar1 = *DAT_0060b4f8;
  pcVar7 = DAT_0060b4f8;
  do {
    if (cVar1 == '\0') {
LAB_004067e4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_004067e4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00406b21:
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
  if (uVar4 == 0xffffffff) goto LAB_00406acf;
  goto LAB_00406930;
LAB_00406acf:
  FUN_00406f10(__stream);
  if (local_d0 == 0) {
LAB_004068ce:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_004068d4:
  free(__file);
  DAT_0060b4f8 = pcVar7;
  goto LAB_0040678a;
}


void * FUN_00406cc0(void *param_1,ulong param_2)

{
  void *pvVar1;
  int *piVar2;
  
  if ((-1 < (long)(param_2 << 2)) && (param_2 >> 0x3e == 0)) {
    pvVar1 = realloc(param_1,param_2 << 2);
    return pvVar1;
  }
  piVar2 = __errno_location();
  *piVar2 = 0xc;
  return (void *)0x0;
}


uint FUN_00406d00(char *param_1,__gid_t param_2,__gid_t **param_3)

{
  __gid_t _Var1;
  __gid_t _Var2;
  __gid_t *p_Var3;
  int iVar4;
  uint uVar5;
  __gid_t *p_Var6;
  int *piVar7;
  __gid_t *p_Var8;
  uint local_2c;
  
  if (param_1 == (char *)0x0) {
    local_2c = getgroups(0,(__gid_t *)0x0);
    if ((int)local_2c < 0) {
      piVar7 = __errno_location();
      if (*piVar7 != 0x26) {
        return 0xffffffff;
      }
      p_Var8 = (__gid_t *)malloc(4);
      if (p_Var8 == (__gid_t *)0x0) {
        return 0xffffffff;
      }
      *p_Var8 = param_2;
      *param_3 = p_Var8;
      return (uint)(param_2 != 0xffffffff);
    }
    if ((local_2c == 0) || (param_2 != 0xffffffff)) {
      local_2c = local_2c + 1;
      p_Var8 = (__gid_t *)FUN_00406cc0(0,(long)(int)local_2c);
      if (p_Var8 == (__gid_t *)0x0) {
        return 0xffffffff;
      }
      if (param_2 != 0xffffffff) {
        iVar4 = getgroups(local_2c - 1,p_Var8 + 1);
        if (iVar4 < 0) goto LAB_00406d68;
        *p_Var8 = param_2;
        uVar5 = iVar4 + 1;
        goto LAB_00406e47;
      }
    }
    else {
      p_Var8 = (__gid_t *)FUN_00406cc0(0,(long)(int)local_2c);
      if (p_Var8 == (__gid_t *)0x0) {
        return 0xffffffff;
      }
    }
    uVar5 = getgroups(local_2c - (param_2 != 0xffffffff),p_Var8);
    if (-1 < (int)uVar5) {
LAB_00406e47:
      *param_3 = p_Var8;
      if (1 < (int)uVar5) {
        _Var1 = *p_Var8;
        p_Var6 = p_Var8 + (int)uVar5;
        p_Var3 = p_Var8;
        while (p_Var3 = p_Var3 + 1, p_Var3 < p_Var6) {
          _Var2 = *p_Var3;
          if ((_Var2 == _Var1) || (_Var2 == *p_Var8)) {
            uVar5 = uVar5 - 1;
          }
          else {
            p_Var8[1] = _Var2;
            p_Var8 = p_Var8 + 1;
          }
        }
        return uVar5;
      }
      return uVar5;
    }
  }
  else {
    local_2c = 10;
    p_Var6 = (__gid_t *)FUN_00406cc0(0,10);
    if (p_Var6 == (__gid_t *)0x0) {
      return 0xffffffff;
    }
    do {
      p_Var8 = p_Var6;
      uVar5 = local_2c;
      iVar4 = getgrouplist(param_1,param_2,p_Var8,(int *)&local_2c);
      if (-1 < iVar4) {
        p_Var6 = (__gid_t *)FUN_00406cc0(p_Var8,(long)(int)local_2c);
        if (p_Var6 != (__gid_t *)0x0) {
          *param_3 = p_Var6;
          return local_2c;
        }
        break;
      }
      if (local_2c == uVar5) {
        local_2c = local_2c * 2;
      }
      p_Var6 = (__gid_t *)FUN_00406cc0(p_Var8,(long)(int)local_2c);
    } while (p_Var6 != (__gid_t *)0x0);
  }
LAB_00406d68:
  piVar7 = __errno_location();
  iVar4 = *piVar7;
  free(p_Var8);
  *piVar7 = iVar4;
  return 0xffffffff;
}


int FUN_00406f10(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00406f77;
    }
    iVar1 = FUN_00406f90(param_1);
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
LAB_00406f77:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00406f90(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00406fd0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00406fd0(FILE *param_1,__off_t param_2,int param_3)

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


/* WARNING: Removing unreachable block (ram,0x00407063) */
/* WARNING: Removing unreachable block (ram,0x00407068) */

void FUN_00407030(void)

{
  __DT_INIT();
  return;
}


void FUN_00407090(void)

{
  return;
}


void FUN_004070a0(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060b228);
  return;
}


undefined FUN_004070b8(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060ae30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00402481();
  return;
}

