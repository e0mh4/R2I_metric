
undefined8 FUN_00100810(FILE *param_1,char *param_2)

{
  int iVar1;
  ulong __size;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 extraout_RAX;
  char *pcVar4;
  undefined8 uStack_28;
  
  if (*param_2 == '0') {
    __size = 0;
    iVar1 = 2;
    pcVar2 = (char *)0x0;
  }
  else if (*param_2 == 'L') {
    __size = 0;
    iVar1 = 1;
    pcVar2 = (char *)0x0;
  }
  else {
    __size = strtoul(param_2,(char **)0x0,10);
    if (__size == 0) {
      iVar1 = fileno(param_1);
      if (iVar1 == 1) {
        pcVar2 = "stdout";
      }
      else {
        pcVar2 = "stderr";
        if ((iVar1 != 2) && (pcVar2 = "stdin", iVar1 != 0)) {
          pcVar2 = "unknown";
        }
      }
      uVar3 = dcgettext(0,"invalid buffering mode %s for %s\n",5);
      uVar3 = __fprintf_chk(*(undefined8 *)PTR_stderr_00300ff8,1,uVar3,param_2,pcVar2,uStack_28);
      return uVar3;
    }
    pcVar2 = (char *)malloc(__size);
    iVar1 = 0;
    if (pcVar2 == (char *)0x0) {
      uVar3 = dcgettext(0,"failed to allocate a %lu byte stdio buffer\n",5);
      uVar3 = __fprintf_chk(*(undefined8 *)PTR_stderr_00300ff8,1,uVar3,__size);
      return uVar3;
    }
  }
  iVar1 = setvbuf(param_1,pcVar2,iVar1,__size);
  if (iVar1 == 0) {
    return uStack_28;
  }
  iVar1 = fileno(param_1);
  if (iVar1 == 1) {
    pcVar4 = "stdout";
  }
  else {
    pcVar4 = "stderr";
    if ((iVar1 != 2) && (pcVar4 = "stdin", iVar1 != 0)) {
      pcVar4 = "unknown";
    }
  }
  uVar3 = dcgettext(0,"could not set buffering of %s to mode %s\n",5);
  __fprintf_chk(*(undefined8 *)PTR_stderr_00300ff8,1,uVar3,pcVar4,param_2);
  free(pcVar2);
  return extraout_RAX;
}


void FUN_001009c0(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar1 = getenv("_STDBUF_E");
  pcVar2 = getenv("_STDBUF_I");
  pcVar3 = getenv("_STDBUF_O");
  if (pcVar1 != (char *)0x0) {
    FUN_00100810(*(undefined8 *)PTR_stderr_00300ff8,pcVar1);
  }
  if (pcVar2 != (char *)0x0) {
    FUN_00100810(*(undefined8 *)PTR_stdin_00300fd8,pcVar2);
  }
  if (pcVar3 != (char *)0x0) {
    FUN_00100810(*(undefined8 *)PTR_stdout_00300fd0,pcVar3);
    return;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00100a52) */
/* WARNING: Removing unreachable block (ram,0x00100a5e) */

void FUN_00100a3f(void)

{
  return;
}


void FUN_00100a61(void)

{
  long lVar1;
  
  lVar1 = SUB168(ZEXT816(0) / SEXT816(2),0);
  if ((lVar1 != 0) && (PTR__ITM_registerTMCloneTable_00300fe8 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_registerTMCloneTable_00300fe8)
              (&_edata,lVar1,SUB168(ZEXT816(0) % SEXT816(2),0));
    return;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00100ae7) */

void FUN_00100a9a(void)

{
  if (_edata != '\0') {
    return;
  }
  if (PTR___cxa_finalize_00300ff0 != (undefined *)0x0) {
    __cxa_finalize(PTR_LOOP_00301058);
  }
  FUN_00100a3f();
  _edata = 1;
  return;
}


void thunk_FUN_00100a61(void)

{
  long lVar1;
  
  lVar1 = SUB168(ZEXT816(0) / SEXT816(2),0);
  if ((lVar1 != 0) && (PTR__ITM_registerTMCloneTable_00300fe8 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_registerTMCloneTable_00300fe8)
              (&_edata,lVar1,SUB168(ZEXT816(0) % SEXT816(2),0));
    return;
  }
  return;
}


undefined8 FUN_00100b0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00300df8; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}

