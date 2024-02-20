#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x401d70 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    rdi = argc;
    rsi = argv;
    r13d = 2;
    r12d = edi;
    ebp = 0;
    rdi = *(rsi);
    rbx = rsi;
    fcn_00403110 (*(rdi));
    setlocale (6, 0x40ca2f);
    bindtextdomain (0x4096b9, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x4096b9, rsi);
    edi = 0x402de0;
    fcn_00409580 ();
    do {
label_0:
        r8d = 0;
        ecx = 0x409d80;
        edx = 0x40970a;
        rsi = rbx;
        edi = r12d;
        eax = fcn_004089a0 ();
        if (eax == 0xffffffff) {
            goto label_5;
        }
        if (eax == 0x62) {
            goto label_6;
        }
        if (eax <= 0x62) {
            goto label_7;
        }
        if (eax != 0x63) {
            goto label_8;
        }
        r13d = 1;
    } while (1);
label_7:
    if (eax == 0xffffff7d) {
        r9d = 0;
        r8d = "H. Peter Anvin";
        eax = 0;
        rcx = *(str_8_29);
        fcn_004051b0 (*(obj.stdout), "dircolors", "GNU coreutils");
        eax = exit (0);
label_8:
        if (eax != 0x70) {
            goto label_4;
        }
        goto label_0;
    }
    if (eax != 0xffffff7e) {
        goto label_4;
    }
    fcn_00402a50 (0);
label_6:
    r13d = 0;
    goto label_0;
label_5:
    rax = *(0x0060f2bc);
    r12d -= eax;
    rbx = rbx + rax*8;
    if (r13d != 2) {
        if (bpl != 0) {
            goto label_9;
        }
    }
    eax = ebp;
    eax ^= 1;
    eax = (int32_t) al;
    if (eax < r12d) {
        goto label_10;
    }
    if (bpl == 0) {
        goto label_11;
    }
    ebx = "# Configuration file for dircolors, a utility to help you set the";
    r12 |= 0xffffffffffffffff;
    do {
        eax = puts (rbx);
        eax = 0;
        rdi = rbx;
        rcx = r12;
        __asm ("repne scasb al, byte [rdi]");
        rax = rcx;
        rax = ~rax;
        rbx += rax;
        rax = rbx;
        rax -= str__Configuration_file_for_dircolors__a_utility_to_help_you_set_the;
    } while (rax <= 0x104c);
    do {
label_1:
        ebp ^= 1;
        eax = (int32_t) bpl;
        return rax;
label_11:
        if (r13d == 2) {
            goto label_12;
        }
label_3:
        edx = 0;
        esi = 0;
        r8d = imp.free;
        ecx = imp.malloc;
        edi = 0x60f320;
        _obstack_begin ();
        if (r12d == 0) {
            goto label_13;
        }
        rbx = *(rbx);
        eax = strcmp (rbx, 0x40ca12);
        if (eax != 0) {
            rax = fcn_00402f60 (rbx, 0x40b15c, *(obj.stdin));
            if (rax == 0) {
                goto label_14;
            }
        }
        eax = fcn_00402480 (*(obj.stdin), rbx);
        r12d = eax;
        eax = fcn_004055a0 (*(obj.stdin));
        if (eax != 0) {
            goto label_14;
        }
INVALID_JUMP;
    } while (bpl == 0);
    rax = imp.__libc_start_main;
    r12 = imp.__libc_start_main;
    rbx = rax;
    rbx -= r12;
    while (1) {
        rdx = imp.__libc_start_main;
        rcx = imp.__libc_start_main;
        r14d = "';\nexport LS_COLORS\n";
        rax += rdx;
        rdx = ~rdx;
        rax &= rdx;
        rdx = imp.__libc_start_main;
        rsi = rax;
        rdi = rdx;
        rsi -= rcx;
        rdi -= rcx;
        edi = "LS_COLORS='";
        rsi = stdout;
        if (rsi > rdi) {
            rax = rdx;
        }
        *(0x0060f338) = rax;
        *(0x0060f330) = rax;
        eax = 0x40ca2d;
        if (r13d != 0) {
            r14 = rax;
        }
        eax = "setenv LS_COLORS '";
        if (r13d != 0) {
            rdi = rax;
        }
        fputs_unlocked ();
        rdi = r12;
        rdx = rbx;
        esi = 1;
        rcx = stdout;
        fwrite_unlocked ();
        rsi = stdout;
        rdi = r14;
        fputs_unlocked ();
        goto label_1;
label_13:
        eax = fcn_00402480 (0, 0);
        goto label_2;
label_12:
        rax = getenv ("SHELL");
        if (rax == 0) {
            goto label_15;
        }
        if (*(rax) == 0) {
            goto label_15;
        }
        rax = fcn_00402e80 (rax);
        rdi = rax;
        r13 = rax;
        eax = strcmp (rdi, 0x409715);
        if (eax == 0) {
            goto label_16;
        }
        r13d = 0;
        eax = strcmp (r13, "tcsh");
        r13b = (eax == 0) ? 1 : 0;
        goto label_3;
        *(0x0060f370) |= 2;
    }
label_14:
    rdx = rbx;
    rax = fcn_00404bb0 (0, 3);
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), 0x40b162);
    goto label_1;
label_16:
    r13d = 1;
    goto label_3;
label_10:
    if (bpl == 0) {
        goto label_17;
    }
    rax = fcn_00404d30 (*(rbx));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "extra operand %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    edx = 5;
    rax = dcgettext (0, "file operands cannot be combined with --print-database (-p)");
    edx = 0x40bf00;
    esi = 1;
    rdi = stderr;
    rcx = rax;
    eax = 0;
    fprintf_chk ();
    do {
label_4:
        fcn_00402a50 (1);
label_9:
        edx = 5;
        rax = dcgettext (0, "the options to output dircolors' internal database and\nto select a shell syntax are mutually exclusive");
        eax = 0;
        error (0, 0, rax);
    } while (1);
label_15:
    edx = 5;
    rax = dcgettext (0, "no SHELL environment variable, and no shell type option given");
    eax = 0;
    error (1, 0, rax);
label_17:
    rax = fcn_00404d30 (*((rbx + 8)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "extra operand %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    goto label_4;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x4021db */
#include <stdint.h>
 
int32_t fcn_004021db (void) {
    eax = 0x60f2c8;
    if (rax != 0x60f2c8) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = 0x60f2c8;
invalid_funccall(); //        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x402231 */
#include <stdint.h>
 
int64_t fcn_00402231 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x0060f308) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x60ee48;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x0060f310) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_004021db ();
    *(0x0060f308) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x402288 */
#include <stdint.h>
 
int64_t fcn_00402288 (void) {
    do {
        esi = 0x60f2c8;
        ecx = 2;
        rsi -= 0x60f2c8;
        rsi >>= 3;
        rax = rsi;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        rsi = rax;
        if (rax != 0) {
            eax = 0;
            if (rax == 0) {
                goto label_0;
            }
            edi = 0x60f2c8;
invalid_funccall(); //            void (*rax)() ();
        }
label_0:
        return rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x402290 */
#include <stdint.h>
 
uint64_t fcn_00402290 (int64_t arg1) {
    rdi = arg1;
    eax = *(rdi);
    if (al == 0) {
        goto label_6;
    }
    rbx = rdi;
    while (al == 0x27) {
        if (rcx == rdx) {
            goto label_7;
        }
label_2:
        rax = rdx + 1;
        *(0x0060f338) = rax;
        *(rdx) = 0x27;
        rax = imp.__libc_start_main;
        if (*(0x0060f340) == rax) {
            goto label_8;
        }
label_4:
        rdx = rax + 1;
        *(0x0060f338) = rdx;
        *(rax) = 0x5c;
        rax = imp.__libc_start_main;
        if (*(0x0060f340) == rax) {
            goto label_9;
        }
label_3:
        rdx = rax + 1;
        *(0x0060f338) = rdx;
        *(rax) = 0x27;
        rcx = imp.__libc_start_main;
        rdx = imp.__libc_start_main;
label_1:
        if (rcx == rdx) {
            goto label_10;
        }
label_0:
        rax = rdx + 1;
        rbx++;
        *(0x0060f338) = rax;
        eax = *((rbx - 1));
        *(rdx) = al;
        eax = *(rbx);
        if (al == 0) {
            goto label_11;
        }
        rcx = imp.__libc_start_main;
        rdx = imp.__libc_start_main;
        if (al == 0x3d) {
            goto label_12;
        }
        if (al > 0x3d) {
            goto label_13;
        }
    }
    if (al != 0x3a) {
        goto label_14;
    }
label_12:
    if (bpl == 0) {
        goto label_14;
    }
    if (rcx == rdx) {
        goto label_15;
    }
label_5:
    rax = rdx + 1;
    *(0x0060f338) = rax;
    *(rdx) = 0x5c;
    rcx = imp.__libc_start_main;
    rdx = imp.__libc_start_main;
    if (rcx != rdx) {
        goto label_0;
    }
label_10:
    esi = 1;
    edi = 0x60f320;
    al = _obstack_newchunk ();
    rdx = imp.__libc_start_main;
    goto label_0;
    do {
label_14:
        goto label_1;
label_13:
        if (al == 0x5c) {
            goto label_16;
        }
    } while (al != 0x5e);
label_16:
    ebp ^= 1;
    goto label_1;
label_11:
    return rax;
label_7:
    esi = 1;
    edi = 0x60f320;
    _obstack_newchunk ();
    rdx = imp.__libc_start_main;
    goto label_2;
label_9:
    esi = 1;
    edi = 0x60f320;
    _obstack_newchunk ();
    rax = imp.__libc_start_main;
    goto label_3;
label_8:
    esi = 1;
    edi = 0x60f320;
    _obstack_newchunk ();
    rax = imp.__libc_start_main;
    goto label_4;
label_15:
    esi = 1;
    edi = 0x60f320;
    _obstack_newchunk ();
    rdx = imp.__libc_start_main;
    goto label_5;
label_6:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x402480 */
#include <stdint.h>
 
uint64_t fcn_00402480 (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    char * var_10h;
    int64_t var_1bh;
    int64_t var_1ch;
    void * ptr;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    r14 = rdi;
    *((rsp + 8)) = rsi;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x28)) = 0;
    rax = getenv ("TERM");
    if (rax == 0) {
        goto label_15;
    }
    rbx = rax;
    eax = "none";
    if (*(rax) != 0) {
        rax = rbx;
    }
    *((rsp + 0x10)) = rax;
label_11:
    *((rsp + 0x1b)) = 1;
    r15d = 3;
    r12d = "# Configuration file for dircolors, a utility to help you set the";
    ebp = 0;
    do {
label_0:
        rbp++;
        if (r14 == 0) {
            goto label_16;
        }
label_1:
        rcx = r14;
        edx = 0xa;
        rsi = rsp + 0x28;
        rdi = rsp + 0x20;
        rax = getdelim ();
        if (rax <= 0) {
            goto label_17;
        }
        rbx = *((rsp + 0x20));
label_2:
        rax = ctype_b_loc ();
        rsi = *(rax);
        rdx = rax;
label_3:
        ecx = *(rbx);
        if ((*((rsi + rcx*2 + 1)) & 0x20) != 0) {
            goto label_18;
        }
    } while (cl == 0);
    if (cl == 0x23) {
        goto label_0;
    }
    r13 = rbx;
    do {
        r13++;
        eax = *(r13);
        rcx = rax;
        eax = *((rsi + rax*2));
        ax >>= 0xd;
        eax ^= 1;
        cl = (cl != 0) ? 1 : 0;
    } while ((cl & al) != 0);
    *(rsp) = rdx;
    rsi -= rbx;
    rax = fcn_00405580 (rbx, r13);
    rdx = *(rsp);
    rbx = rax;
    if (*(r13) == 0) {
        goto label_19;
    }
    rdi = *(rdx);
    do {
        r13++;
        eax = *(r13);
        rdx = rax;
    } while ((*((rdi + rax*2 + 1)) & 0x20) != 0);
    if (al == 0) {
        goto label_19;
    }
    rax = r13;
    if (dl != 0x23) {
        goto label_20;
    }
    goto label_19;
    do {
        rax = rsi;
label_20:
        edx = *((rax + 1));
        rsi = rax + 1;
        cl = (dl != 0) ? 1 : 0;
        dl = (dl != 0x23) ? 1 : 0;
    } while ((cl & dl) != 0);
    edx = *((rsi - 1));
    if ((*((rdi + rdx*2 + 1)) & 0x20) != 0) {
        goto label_21;
    }
label_6:
    rsi -= r13;
    rax = fcn_00405580 (r13, rsi);
    r13 = rax;
    if (rbx == 0) {
        goto label_0;
    }
    if (rax == 0) {
        goto label_22;
    }
    eax = fcn_00402d60 (rbx, "TERM");
    if (eax == 0) {
        goto label_23;
    }
    if (r15d == 2) {
        goto label_24;
    }
    if (r15d != 0) {
        eax = *(rbx);
        if (al == 0x2e) {
            goto label_25;
        }
label_5:
        if (al == 0x2a) {
            goto label_26;
        }
        eax = fcn_00402d60 (rbx, "OPTIONS");
        if (eax == 0) {
            goto label_4;
        }
        eax = fcn_00402d60 (rbx, "COLOR");
        if (eax == 0) {
            goto label_4;
        }
        eax = fcn_00402d60 (rbx, "EIGHTBIT");
        if (eax != 0) {
            goto label_27;
        }
    }
label_4:
    rbp++;
    free (rbx);
    free (r13);
    if (r14 != 0) {
        goto label_1;
    }
label_16:
    if (r12 == str_8_29) {
        goto label_28;
    }
    rdi = r12;
    rbx = r12;
    strlen (rdi);
    r12 = r12 + rax + 1;
    goto label_2;
label_18:
    rbx++;
    goto label_3;
label_19:
    if (rbx == 0) {
        goto label_0;
    }
label_22:
    rdx = *((rsp + 8));
    rax = fcn_00404bb0 (0, 3);
    edx = 5;
    r13 = rax;
    rax = dcgettext (0, "%s:%lu: invalid line;  missing second token");
    r8 = rbp;
    rcx = r13;
    eax = 0;
    error (0, 0, rax);
    free (rbx);
    *((rsp + 0x1b)) = 0;
    goto label_0;
label_23:
    eax = fcn_00407910 (r13, *((rsp + 0x10)), 0);
    if (eax == 0) {
        goto label_29;
    }
    r15d = 0;
    if (r15d != 2) {
        goto label_4;
    }
label_29:
    r15d = 2;
    goto label_4;
label_24:
    eax = *(rbx);
    r15d = 1;
    if (al != 0x2e) {
        goto label_5;
    }
label_25:
    rax = imp.__libc_start_main;
    if (*(0x0060f340) == rax) {
        goto label_30;
    }
label_9:
    rdx = rax + 1;
    *(0x0060f338) = rdx;
    *(rax) = 0x2a;
    fcn_00402290 (rbx);
    rax = imp.__libc_start_main;
    if (*(0x0060f340) == rax) {
        goto label_31;
    }
label_10:
    rdx = rax + 1;
    *(0x0060f338) = rdx;
    *(rax) = 0x3d;
    fcn_00402290 (r13);
    rax = imp.__libc_start_main;
    if (*(0x0060f340) == rax) {
        goto label_32;
    }
label_8:
    rdx = rax + 1;
    *(0x0060f338) = rdx;
    *(rax) = 0x3a;
    goto label_4;
label_21:
    rsi = rax;
label_7:
    eax = *((rsi - 1));
    rdx = rsi - 1;
    if ((*((rdi + rax*2 + 1)) & 0x20) == 0) {
        goto label_6;
    }
    rsi = rdx;
    goto label_7;
label_17:
    free (*((rsp + 0x20)));
label_28:
    eax = *((rsp + 0x1b));
    return rax;
label_26:
    fcn_00402290 (rbx);
    rax = imp.__libc_start_main;
    if (*(0x0060f340) == rax) {
        goto label_33;
    }
label_12:
    rax = imp.__libc_start_main;
    rdx = rax + 1;
    *(0x0060f338) = rdx;
    *(rax) = 0x3d;
    fcn_00402290 (r13);
    rax = imp.__libc_start_main;
    while (1) {
        rax = imp.__libc_start_main;
        goto label_8;
label_32:
        esi = 1;
        edi = 0x60f320;
        _obstack_newchunk ();
    }
label_30:
    esi = 1;
    edi = 0x60f320;
    _obstack_newchunk ();
    rax = imp.__libc_start_main;
    goto label_9;
label_31:
    esi = 1;
    edi = 0x60f320;
    _obstack_newchunk ();
    rax = imp.__libc_start_main;
    goto label_10;
label_15:
    *((rsp + 0x10)) = "none";
    goto label_11;
label_27:
    edx = 0;
    esi = "NORMAL";
    while (eax != 0) {
        rdx = *(rsp);
        rdx++;
        rsi = *((rdx*8 + 0x409fc0));
        if (rsi == 0) {
            goto label_34;
        }
        *((rsp + 0x1c)) = edx;
        *(rsp) = rdx;
        eax = fcn_00402d60 (rbx, rsi);
    }
    rax = imp.__libc_start_main;
    if (*(0x0060f340) == rax) {
        goto label_35;
    }
label_13:
    rax = *((rsp + 0x1c));
    rdx = *((rax*8 + 0x409e80));
    rax = imp.__libc_start_main;
    rcx = rax + 1;
    *(0x0060f338) = rcx;
    ecx = *(rdx);
    *(rax) = cl;
    rax = imp.__libc_start_main;
    if (*(0x0060f340) == rax) {
        goto label_36;
    }
label_14:
    rax = imp.__libc_start_main;
    rcx = rax + 1;
    *(0x0060f338) = rcx;
    edx = *((rdx + 1));
    *(rax) = dl;
    rax = imp.__libc_start_main;
    if (*(0x0060f340) != rax) {
        goto label_12;
    }
label_33:
    esi = 1;
    edi = 0x60f320;
    _obstack_newchunk ();
    goto label_12;
label_34:
    if (r15d == 3) {
        goto label_4;
    }
    rdx = *((rsp + 8));
    if (rdx == 0) {
        goto label_37;
    }
    rax = fcn_00404bb0 (0, 3);
    rcx = rax;
    do {
        edx = 5;
        *(rsp) = rcx;
        rax = dcgettext (0, "%s:%lu: unrecognized keyword %s");
        rcx = *(rsp);
        r9 = rbx;
        r8 = rbp;
        eax = 0;
        error (0, 0, rax);
        *((rsp + 0x1b)) = 0;
        goto label_4;
label_37:
        edx = 5;
        rax = dcgettext (0, "<internal>");
        rcx = rax;
    } while (1);
label_35:
    esi = 1;
    edi = 0x60f320;
    _obstack_newchunk ();
    goto label_13;
label_36:
    esi = 1;
    edi = 0x60f320;
    *(rsp) = rdx;
    _obstack_newchunk ();
    rdx = *(rsp);
    goto label_14;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x402a50 */
#include <stdint.h>
 
uint64_t fcn_00402a50 (int64_t arg1) {
    char * var_8h;
    int64_t var_10h;
    char * var_18h;
    char * var_20h;
    char * var_28h;
    char * var_30h;
    char * var_38h;
    char * var_40h;
    char * var_48h;
    char * var_50h;
    char * var_58h;
    int64_t var_60h;
    int64_t var_68h;
    rdi = arg1;
    edx = 5;
    ebx = edi;
    rbp = imp.__libc_start_main;
    if (edi != 0) {
        rax = dcgettext (0, "Try '%s --help' for more information.\n");
        rdi = stderr;
        rcx = rbp;
        esi = 1;
        rdx = rax;
        eax = 0;
        fprintf_chk ();
label_0:
        exit (ebx);
    }
    rax = dcgettext (0, "Usage: %s [OPTION].. [FILE]\n");
    rdx = rbp;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Output commands to set the LS_COLORS environment variable.\n\nDetermine format of output:\n  -b, --sh, --bourne-shell    output Bourne shell code to set LS_COLORS\n  -c, --csh, --c-shell        output C shell code to set LS_COLORS\n  -p, --print-database        output defaults\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --help     display this help and exit\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --version  output version information and exit\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nIf FILE is specified, read it to determine which colors to use for which\nfile types and extensions.  Otherwise, a precompiled database is used.\nFor details on the format of these files, run 'dircolors --print-database'.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    *(rsp) = 0x40963f;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x4096b9;
    *((rsp + 0x18)) = "Multi-call invocation";
    *((rsp + 0x20)) = "sha224sum";
    *((rsp + 0x28)) = "sha2 utilities";
    *((rsp + 0x30)) = "sha256sum";
    *((rsp + 0x38)) = "sha2 utilities";
    *((rsp + 0x40)) = "sha384sum";
    *((rsp + 0x48)) = "sha2 utilities";
    *((rsp + 0x50)) = "sha512sum";
    *((rsp + 0x58)) = "sha2 utilities";
    *((rsp + 0x60)) = 0;
    *((rsp + 0x68)) = 0;
    do {
        rax += 0x10;
        rdi = *(rax);
        if (rdi == 0) {
            goto label_2;
        }
        esi = "dircolors";
        ecx = 0xa;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        dl = (rdi > 0) ? 1 : 0;
    } while (dl != 0);
label_2:
    rbp = *((rax + 8));
    edx = 5;
    esi = "\n%s online help: <%s>\n";
    edi = 0;
    if (rbp == 0) {
        goto label_3;
    }
    rax = dcgettext (rdi, rsi);
    edi = 1;
    ecx = "https://www.gnu.org/software/coreutils/";
    edx = "GNU coreutils";
    rsi = rax;
    eax = 0;
    printf_chk ();
    rax = setlocale (5, 0);
    if (rax != 0) {
        eax = strncmp (rax, 0x4096c3, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x40965b;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "dircolors";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x40ca2f;
    r12 = rcx;
    while (1) {
        edx = 5;
        rax = dcgettext (0, "or available locally via: info '(coreutils) %s%s'\n");
        rcx = r12;
        rdx = rbp;
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
        goto label_0;
label_3:
        rax = dcgettext (rdi, rsi);
        edi = 1;
        ecx = "https://www.gnu.org/software/coreutils/";
        edx = "GNU coreutils";
        rsi = rax;
        eax = 0;
        printf_chk ();
        rax = setlocale (5, 0);
        if (rax != 0) {
            eax = strncmp (rax, 0x4096c3, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "dircolors";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x40965b;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "dircolors";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x402d60 */
#include <stdint.h>
 
int32_t fcn_00402d60 (uint32_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    eax = 0;
    if (rdi == rsi) {
        goto label_0;
    }
    edx = 0;
    while (al != 0) {
        rdx++;
        if (al != cl) {
            goto label_1;
        }
        r8d = *((rdi + rdx));
        ecx = r8 - 0x41;
        eax = r8d;
        if (ecx <= 0x19) {
            r8d += 0x20;
            eax += 0x20;
        }
        r9d = *((rsi + rdx));
        r10d = r9 - 0x41;
        ecx = r9d;
        if (r10d <= 0x19) {
            r9d += 0x20;
            ecx += 0x20;
        }
    }
label_1:
    eax = (int32_t) r8b;
    r9d = (int32_t) r9b;
    eax -= r9d;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x402e80 */
#include <stdint.h>
 
int64_t fcn_00402e80 (int64_t arg1) {
    rdi = arg1;
    edx = *(rdi);
    rax = rdi;
    if (dl != 0x2f) {
        goto label_1;
    }
    do {
        rax++;
        edx = *(rax);
    } while (dl == 0x2f);
label_1:
    if (dl == 0) {
        goto label_2;
    }
    rcx = rax;
    esi = 0;
    while (dl != 0x2f) {
        if (sil != 0) {
            rax = rcx;
            esi = 0;
        }
        rcx++;
        edx = *(rcx);
        if (dl == 0) {
            goto label_2;
        }
INVALID_JUMP;
    }
    rcx++;
    edx = *(rcx);
    esi = 1;
    if (dl != 0) {
        goto label_0;
    }
label_2:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x402f10 */
#include <stdint.h>
 
int64_t fcn_00402f10 (int64_t arg1) {
    rdi = arg1;
    eax = 0;
    ebx = 1;
    eax = open ("/dev/null", 0, rdx);
    if (ebp != eax) {
        ebx = 0;
        if (eax >= 0) {
            goto label_0;
        }
    }
    eax = ebx;
    return eax;
label_0:
    close (eax);
    errno_location ();
    *(rax) = 9;
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x402f60 */
#include <stdint.h>
 
uint64_t fcn_00402f60 (int64_t arg1, int64_t arg2, FILE * stream) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = stream;
    r15 = rsi;
    r12 = rdx;
    *((rsp + 8)) = rdi;
    eax = fileno (rdx);
    ebx = eax;
    rax = errno_location ();
    r14 = rax;
    if (ebx == 1) {
        goto label_9;
    }
    if (ebx == 2) {
        goto label_10;
    }
    if (ebx == 0) {
        goto label_11;
    }
    esi = 2;
    edi = 2;
    eax = dup2 ();
    bl = (eax != 2) ? 1 : 0;
label_4:
    esi = 1;
    edi = 1;
    eax = dup2 ();
    bpl = (eax != 1) ? 1 : 0;
label_6:
    esi = 0;
    edi = 0;
    eax = dup2 ();
    if (eax == 0) {
        goto label_12;
    }
    eax = fcn_00402f10 (0);
    r13d = eax;
    if (al == 0) {
        goto label_13;
    }
    if (bpl != 0) {
        goto label_14;
    }
    do {
label_0:
        if (bl != 0) {
            eax = fcn_00402f10 (2);
            ebx = eax;
            if (al == 0) {
                goto label_15;
            }
        }
label_3:
        rax = fcn_00407b50 (*((rsp + 8)), r15, r12);
        r12 = rax;
label_7:
        r15d = *(r14);
        if (bl != 0) {
            goto label_16;
        }
label_5:
        if (bpl != 0) {
            goto label_8;
        }
        if (r13b != 0) {
            goto label_17;
        }
label_1:
        if (r12 == 0) {
            goto label_18;
        }
label_2:
        rax = r12;
        return rax;
label_12:
        r13d = 0;
    } while (bpl == 0);
label_14:
    eax = fcn_00402f10 (1);
    if (al != 0) {
        goto label_0;
    }
    r15d = *(r14);
    r12d = 0;
    if (bl != 0) {
        goto label_19;
    }
label_8:
    close (1);
    if (r13b == 0) {
        goto label_1;
    }
label_17:
    close (0);
    if (r12 != 0) {
        goto label_2;
    }
label_18:
    *(r14) = r15d;
    goto label_2;
label_11:
    ebx = 0;
    ebp = 0;
    r13d = 0;
    goto label_3;
label_10:
    ebx = 0;
    goto label_4;
label_15:
    r15d = *(r14);
    r12d = 0;
label_16:
    close (2);
    goto label_5;
label_9:
    ebx = 0;
    ebp = 0;
    goto label_6;
label_13:
    r13d = 1;
    r12d = 0;
    goto label_7;
label_19:
    close (2);
    goto label_8;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x403110 */
#include <stdint.h>
 
uint64_t fcn_00403110 (char ** arg1) {
    rdi = arg1;
    if (rdi != 0) {
        rbx = rdi;
        rax = strrchr (rdi, 0x2f);
        if (rax != 0) {
            r8 = rax + 1;
            rdx = r8;
            rdx -= rbx;
            if (rdx <= 6) {
                goto label_0;
            }
            rsi = rax - 6;
            edi = "/.libs/";
            ecx = 7;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            dl = (rdx > 6) ? 1 : 0;
            if (dl != 0) {
                goto label_0;
            }
            edi = 0x40b1b0;
            ecx = 3;
            rsi = r8;
            rbx = r8;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            dl = (dl > 0) ? 1 : 0;
            if (dl != 0) {
                goto label_0;
            }
            rbx = rax + 4;
            *(obj.__progname) = rbx;
        }
label_0:
        *(0x0060f388) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x4031b0 */
#include <stdint.h>
 
uint64_t fcn_004031b0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    edx = 5;
    r12d = esi;
    rsi = rdi;
    rax = dcgettext (0, rsi);
    rbx = rax;
    while (1) {
label_0:
        rax = rbx;
        return rax;
        rax = fcn_00408fa0 ();
        edx = *(rax);
        edx &= 0xffffffdf;
        if (dl != 0x55) {
            goto label_1;
        }
        edx = *((rax + 1));
        edx &= 0xffffffdf;
        if (dl != 0x54) {
            goto label_2;
        }
        edx = *((rax + 2));
        edx &= 0xffffffdf;
        if (dl != 0x46) {
            goto label_2;
        }
        if (*((rax + 3)) != 0x2d) {
            goto label_2;
        }
        if (*((rax + 4)) != 0x38) {
            goto label_2;
        }
        if (*((rax + 5)) != 0) {
            goto label_2;
        }
        eax = 0x40b1b6;
        ebx = 0x40b1c1;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
    }
label_1:
    if (dl == 0x47) {
        edx = *((rax + 1));
        edx &= 0xffffffdf;
        if (dl != 0x42) {
            goto label_2;
        }
        if (*((rax + 2)) != 0x31) {
            goto label_2;
        }
        if (*((rax + 3)) != 0x38) {
            goto label_2;
        }
        if (*((rax + 4)) != 0x30) {
            goto label_2;
        }
        if (*((rax + 5)) != 0x33) {
            goto label_2;
        }
        if (*((rax + 6)) != 0x30) {
            goto label_2;
        }
        if (*((rax + 7)) != 0) {
            goto label_2;
        }
        eax = 0x40b1ba;
        ebx = 0x40b1bd;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x4096f9;
    ebx = 0x40b1b4;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x4032b0 */
#include <stdint.h>
 
uint64_t fcn_004032b0 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
    size_t * var_8h;
    size_t * var_10h;
    uint32_t var_1fh;
    char * s;
    size_t n;
    size_t * var_30h;
    size_t * var_38h;
    size_t var_40h;
    size_t var_48h;
    void * s2;
    char * var_58h;
    uint32_t var_60h;
    int64_t var_68h;
    uint32_t var_6ch;
    char * var_6dh;
    int64_t var_6eh;
    int64_t var_6fh;
    int64_t var_70h;
    int64_t var_78h;
    wint_t wc;
    mbstate_t * ps;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    do {
        /* [13] -r-x section size 30840 named .text */
        abort ();
label_5:
        r15 = rdi;
        r14 = rsi;
        r13d = r8d;
        *((rsp + 0x20)) = rdx;
        *((rsp + 8)) = rcx;
        *((rsp + 0x68)) = r9d;
        rax = ctype_get_mb_cur_max ();
        ebp &= 2;
        *((rsp + 0x60)) = rax;
        *(rsp + 0x6c) = (ebp != 0) ? 1 : 0;
    } while (r13d > 0xa);
    eax = r13d;
    r11 = *((rsp + 8));
    /* switch table (11 cases) at 0x40b220 */
label_30:
    *((rsp + 0x1f)) = 1;
    r10d = 0;
    ebx = 0;
    r13d = 2;
    *((rsp + 0x6d)) = 0;
    *((rsp + 0x58)) = 0;
    *((rsp + 0x6c)) = 1;
    *((rsp + 8)) = 0;
    *((rsp + 0x28)) = 1;
    *((rsp + 0x50)) = 0x4096f9;
label_21:
    r9 = r11;
    r12d = 0;
    r11d = r13d;
    do {
label_28:
        r13b = (r9 != r12) ? 1 : 0;
        if (r9 == -1) {
            rax = *((rsp + 0x20));
            r13b = (*((rax + r12)) != 0) ? 1 : 0;
        }
        if (r13b == 0) {
            goto label_47;
        }
        rdi = *((rsp + 0x20));
        al = (r11d != 2) ? 1 : 0;
        al &= *((rsp + 8));
        r8 = rdi + r12;
        *((rsp + 0x10)) = al;
        if (al == 0) {
            goto label_48;
        }
        rax = *((rsp + 0x28));
        if (rax == 0) {
            goto label_49;
        }
        rbp = r12 + rax;
        if (r9 == -1) {
            if (rax <= 1) {
                goto label_50;
            }
            *((rsp + 0x40)) = r11d;
            *((rsp + 0x38)) = r10b;
            *((rsp + 0x30)) = r8;
            rax = strlen (rdi);
            r11d = *((rsp + 0x40));
            r10d = *((rsp + 0x38));
            r8 = *((rsp + 0x30));
            r9 = rax;
        }
label_50:
        if (rbp > r9) {
            goto label_49;
        }
        rdi = r8;
        *((rsp + 0x48)) = r11d;
        *((rsp + 0x40)) = r9;
        *((rsp + 0x38)) = r10b;
        *((rsp + 0x30)) = r8;
        eax = memcmp (rdi, *((rsp + 0x50)), *((rsp + 0x28)));
        r8 = *((rsp + 0x30));
        r10d = *((rsp + 0x38));
        r9 = *((rsp + 0x40));
        r11d = *((rsp + 0x48));
        if (eax != 0) {
            goto label_49;
        }
        if (*((rsp + 0x6c)) != 0) {
            goto label_51;
        }
        ebp = *(r8);
        if (bpl > 0x7e) {
            goto label_52;
        }
        eax = (int32_t) bpl;
        /* switch table (127 cases) at 0x40b278 */
        *((rsp + 0x10)) = 0;
        al = (r9 != 1) ? 1 : 0;
        if (r9 == -1) {
            rax = *((rsp + 0x20));
            al = (*((rax + 1)) != 0) ? 1 : 0;
        }
        dl = (r11d == 2) ? 1 : 0;
        if (al != 0) {
            goto label_7;
        }
label_17:
        if (r12 != 0) {
            goto label_7;
        }
label_18:
        if (*((rsp + 0x6c)) != 0) {
            if (dl != 0) {
                goto label_53;
            }
        }
label_2:
        eax = *((rsp + 8));
        eax ^= 1;
        eax |= edx;
        eax ^= 1;
        al |= *((rsp + 0x6c));
        if (al == 0) {
            goto label_11;
        }
label_24:
        eax = 0;
label_10:
        if (*((rsp + 0xd0)) == 0) {
            goto label_11;
        }
        edx = ebp;
        rcx = *((rsp + 0xd0));
        dl >>= 5;
        edx = (int32_t) dl;
        edx = *((rcx + rdx*4));
        ecx = ebp;
        edx >>= cl;
        edx &= 1;
        if (edx == 0) {
            goto label_11;
        }
        dl = (r11d == 2) ? 1 : 0;
label_0:
        if (*((rsp + 0x6c)) != 0) {
            goto label_54;
        }
label_4:
        eax = r10d;
        eax ^= 1;
        al &= dl;
        if (al != 0) {
            if (r14 > rbx) {
                *((r15 + rbx)) = 0x27;
            }
            rdx = rbx + 1;
            if (rdx < r14) {
                *((r15 + rbx + 1)) = 0x24;
            }
            rdx = rbx + 2;
            if (rdx < r14) {
                *((r15 + rbx + 2)) = 0x27;
            }
            rbx += 3;
            r10d = eax;
        }
label_9:
        if (r14 > rbx) {
            *((r15 + rbx)) = 0x5c;
        }
        rbx++;
        r12++;
label_1:
        if (rbx < r14) {
            *((r15 + rbx)) = bpl;
        }
        edi = *((rsp + 0x1f));
        rbx++;
        eax = 0;
        if (r13b == 0) {
            edi = eax;
        }
        *((rsp + 0x1f)) = dil;
    } while (1);
label_3:
    if (*((rsp + 0x6c)) != 0) {
        goto label_55;
    }
    if (r14 == 0) {
        goto label_56;
    }
    edx = 0;
    if (*((rsp + 0x58)) != 0) {
        goto label_56;
    }
label_27:
    *((rsp + 0x6d)) = r13b;
    rbx += 3;
    eax = 0;
    r10d = 0;
    *((rsp + 0x58)) = r14;
    r14 = rdx;
label_11:
    dl = (r11d == 2) ? 1 : 0;
    if (*((rsp + 0x10)) != 0) {
        goto label_0;
    }
    eax ^= 1;
    r12++;
    eax &= r10d;
label_16:
    if (al == 0) {
        goto label_1;
    }
    if (r14 > rbx) {
        *((r15 + rbx)) = 0x27;
    }
    rax = rbx + 1;
    if (r14 > rax) {
        *((r15 + rbx + 1)) = 0x27;
    }
    rbx += 2;
    r10d = 0;
    goto label_1;
    *((rsp + 0x10)) = 0;
    if (r11d == 2) {
        goto label_57;
    }
    if (r11d == 5) {
        goto label_58;
    }
    dl = (r11d == 2) ? 1 : 0;
    r13d = 0;
    goto label_2;
    *((rsp + 0x10)) = 0;
    if (r11d == 2) {
        goto label_3;
    }
    *((rsp + 0x6d)) = r13b;
    edx = 0;
    goto label_2;
    *((rsp + 0x10)) = 0;
label_15:
    edx = *((rsp + 8));
    dl &= *((rsp + 0x6c));
    ecx = 0x5c;
    al = (*((rsp + 0x28)) != 0) ? 1 : 0;
    dl &= al;
    if (dl != 0) {
        goto label_59;
    }
label_8:
    if (*((rsp + 8)) != 0) {
        goto label_60;
    }
label_7:
    r13d = 0;
    goto label_2;
label_6:
    edx = 0;
    r13d = 0;
    if (*((rsp + 0x6c)) == 0) {
        goto label_4;
    }
label_54:
    r13d = r11d;
    eax = edx;
    r11 = r9;
label_42:
label_12:
    eax = 4;
    if (*((rsp + 8)) != 0) {
        r13d = eax;
    }
label_43:
    r9d &= 0xfffffffd;
    rax = fcn_004032b0 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
    goto label_5;
    rbx = rax;
label_44:
    rax = rbx;
    return rax;
    goto label_6;
    *((rsp + 0x10)) = 0;
    edx = 0;
    goto label_7;
    *((rsp + 0x10)) = 0;
    ecx = 0x72;
    dl = (r11d == 2) ? 1 : 0;
    goto label_8;
    do {
label_20:
        if (*((rsp + 0x6c)) != 0) {
            goto label_61;
        }
label_34:
        r13d = 0;
        goto label_9;
    } while (1);
label_14:
    if (*((rsp + 0x6c)) != 0) {
        goto label_62;
    }
    *((rsp + 0x10)) = 0;
    eax = r10d;
    dl = (r11d == 2) ? 1 : 0;
    eax ^= 1;
    al &= dl;
    if (al == 0) {
        goto label_63;
    }
    if (r14 > rbx) {
        *((r15 + rbx)) = 0x27;
    }
    rcx = rbx + 1;
    if (r14 > rcx) {
        *((r15 + rbx + 1)) = 0x24;
    }
    rcx = rbx + 2;
    if (r14 > rcx) {
        *((r15 + rbx + 2)) = 0x27;
    }
    rcx = rbx + 3;
    if (r14 <= rcx) {
        goto label_64;
    }
label_26:
    *((r15 + rcx)) = 0x5c;
    r10d = eax;
label_25:
    rbx = rcx + 1;
    if (r11d == 2) {
        goto label_65;
    }
    rax = r12 + 1;
    if (rax < r9) {
        rax = *((rsp + 0x20));
        eax = *((rax + r12 + 1));
        *((rsp + 0x30)) = al;
        eax -= 0x30;
        if (al <= 9) {
            goto label_66;
        }
    }
label_35:
    eax = *((rsp + 8));
    eax ^= 1;
    al |= dl;
    eax = r13d;
    r13d = 0;
    if (al == 0) {
        goto label_10;
    }
    goto label_11;
label_19:
    *((rsp + 0x10)) = 0;
    do {
label_52:
        if (*((rsp + 0x60)) != 1) {
            goto label_67;
        }
        *((rsp + 0x40)) = r11d;
        *((rsp + 0x38)) = r9;
        *((rsp + 0x30)) = r10b;
        rax = ctype_b_loc ();
        edx = (int32_t) bpl;
        r10d = *((rsp + 0x30));
        r9 = *((rsp + 0x38));
        rax = *(rax);
        r11d = *((rsp + 0x40));
        edi = 1;
        eax = *((rax + rdx*2));
        ax &= 0x4000;
        r13b = (ax != 0) ? 1 : 0;
        dl = (ax == 0) ? 1 : 0;
        dl &= *((rsp + 8));
label_37:
        if (dl != 0) {
            goto label_68;
        }
        dl = (r11d == 2) ? 1 : 0;
        goto label_2;
label_48:
        ebp = *(r8);
    } while (bpl > 0x7e);
    eax = (int32_t) bpl;
    /* switch table (127 cases) at 0x40b670 */
    ecx = 0x6e;
label_13:
    eax = *((rsp + 0x6c));
    dl = (r11d == 2) ? 1 : 0;
    al &= dl;
    *((rsp + 0x10)) = al;
    if (al == 0) {
        goto label_8;
    }
label_53:
    r11 = r9;
    r13d = 2;
    goto label_12;
    ecx = 0x74;
    goto label_13;
    ecx = 0x62;
    dl = (r11d == 2) ? 1 : 0;
    goto label_8;
    ecx = 0x61;
    dl = (r11d == 2) ? 1 : 0;
    goto label_8;
    if (*((rsp + 8)) != 0) {
        goto label_14;
    }
    if ((*((rsp + 0x68)) & 1) != 0) {
        goto label_69;
    }
    *((rsp + 0x10)) = 0;
    dl = (r11d == 2) ? 1 : 0;
    r13d = 0;
    ebp = 0;
    goto label_2;
    if (r11d != 2) {
        goto label_15;
    }
    if (*((rsp + 0x6c)) != 0) {
        goto label_55;
    }
    r12++;
    eax = r10d;
    r13d = 0;
    goto label_16;
    dl = (r11d == 2) ? 1 : 0;
    goto label_17;
    dl = (r11d == 2) ? 1 : 0;
    r13d = 0;
    goto label_18;
    dl = (r11d == 2) ? 1 : 0;
    goto label_18;
    ecx = 0x72;
    goto label_13;
    ecx = 0x66;
    dl = (r11d == 2) ? 1 : 0;
    goto label_8;
    ecx = 0x76;
    dl = (r11d == 2) ? 1 : 0;
    goto label_8;
label_49:
    ebp = *(r8);
    if (bpl > 0x7e) {
        goto label_19;
    }
    eax = (int32_t) bpl;
    /* switch table (127 cases) at 0x40ba68 */
    eax = 0;
    do {
label_31:
        r13d = *((rsp + 0x10));
        *((rsp + 0x10)) = al;
        eax = 0;
        goto label_10;
        eax = 0;
label_32:
        if (r12 != 0) {
            goto label_70;
        }
        r13d = *((rsp + 0x10));
        edx = 0;
        *((rsp + 0x10)) = al;
        goto label_2;
        eax = 0;
INVALID_JUMP;
    } while (1);
    goto label_6;
    goto label_20;
label_47:
    r13d = r11d;
    r11 = r9;
    dl = (r13d == 2) ? 1 : 0;
    if (rbx == 0) {
        if ((*((rsp + 0x6c)) & dl) != 0) {
            goto label_71;
        }
    }
    eax = *((rsp + 0x6c));
    eax ^= 1;
    dl &= al;
    if (dl == 0) {
        goto label_72;
    }
    if (*((rsp + 0x6d)) == 0) {
        goto label_45;
    }
    if (*((rsp + 0x1f)) != 0) {
        goto label_73;
    }
    al = (r14 == 0) ? 1 : 0;
    dl = (*((rsp + 0x58)) != 0) ? 1 : 0;
    al &= dl;
    if (al == 0) {
        goto label_74;
    }
    r14 = *((rsp + 0x58));
label_46:
    *(r15) = 0x27;
    r13d = 2;
    ebx = 1;
    *((rsp + 0x50)) = 0x4096f9;
    *((rsp + 0x28)) = 1;
    *((rsp + 0x6c)) = 0;
    *((rsp + 0x6d)) = al;
    goto label_21;
label_58:
    if ((*((rsp + 0x68)) & 4) != 0) {
        rax = r12 + 2;
        if (rax >= r9) {
            goto label_39;
        }
        rsi = *((rsp + 0x20));
        if (*((rsi + r12 + 1)) == 0x3f) {
            goto label_75;
        }
    }
label_39:
    edx = 0;
    r13d = 0;
    goto label_2;
label_57:
    if (*((rsp + 0x6c)) != 0) {
        goto label_55;
    }
    r13d = 0;
    eax = 0;
    goto label_11;
label_67:
    *((rsp + 0x88)) = 0;
    if (r9 == -1) {
        *((rsp + 0x40)) = r11d;
        *((rsp + 0x38)) = r10b;
        *((rsp + 0x30)) = r8;
        rax = strlen (*((rsp + 0x20)));
        r11d = *((rsp + 0x40));
        r10d = *((rsp + 0x38));
        r8 = *((rsp + 0x30));
        r9 = rax;
    }
    eax = 0;
    *((rsp + 0x70)) = rbx;
    *((rsp + 0x78)) = r8;
    rbx = rax;
    *((rsp + 0x6e)) = r10b;
    *((rsp + 0x6f)) = bpl;
    *((rsp + 0x40)) = r15;
    *((rsp + 0x48)) = r14;
    *((rsp + 0x30)) = r9;
    *((rsp + 0x38)) = r11d;
    while (*((rsp + 0x38)) != 2) {
label_22:
        eax = iswprint (*((rsp + 0x84)));
        rdi = rsp + 0x88;
        eax = 0;
        if (eax == 0) {
            r13d = eax;
        }
        rbx += r14;
        eax = mbsinit (rdi);
        if (eax != 0) {
            goto label_76;
        }
        rax = *((rsp + 0x20));
        r15 = r12 + rbx;
        rbp = rax + r15;
        rdx -= r15;
        rax = fcn_00408a20 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
        r14 = rax;
        if (rax == 0) {
            goto label_76;
        }
        if (rax == -1) {
            goto label_77;
        }
        if (rax == 0xfffffffffffffffe) {
            goto label_78;
        }
    }
    if (*((rsp + 0x6c)) == 0) {
        goto label_22;
    }
    if (rax == 1) {
        goto label_22;
    }
    rsi = *((rsp + 0x20));
    rax = rsi + r15 + 1;
    rsi += r14;
    rsi += r15;
    goto label_79;
label_23:
    rax++;
    if (rsi == rax) {
        goto label_22;
    }
label_79:
    ecx = *(rax);
    ecx -= 0x5b;
    if (cl > 0x21) {
        goto label_23;
    }
    edx = 1;
    rdx <<= cl;
    rcx = 0x20000002b;
    if ((rdx & rcx) == 0) {
        goto label_23;
    }
    r15 = *((rsp + 0x40));
    r14 = *((rsp + 0x48));
    r13d = 2;
    r11 = *((rsp + 0x30));
    goto label_12;
label_70:
    *((rsp + 0x10)) = al;
    r13d = 0;
    goto label_24;
label_63:
    rcx = rbx;
    if (r14 <= rbx) {
        goto label_25;
    }
    eax = r10d;
    goto label_26;
label_56:
    if (r14 > rbx) {
        *((r15 + rbx)) = 0x27;
    }
    rax = rbx + 1;
    if (r14 > rax) {
        *((r15 + rbx + 1)) = 0x5c;
    }
    rax = rbx + 2;
    if (r14 <= rax) {
        goto label_80;
    }
    rdx = r14;
    *((r15 + rbx + 2)) = 0x27;
    r14 = *((rsp + 0x58));
    goto label_27;
label_69:
    r12++;
    goto label_28;
label_68:
    edx = *((rsp + 8));
    r13d = 0;
label_36:
    rcx = rdi;
    *((rsp + 0x30)) = r13b;
    esi = 0;
    r13d = *((rsp + 0x6c));
    rcx += r12;
    edi = *((rsp + 0x10));
    r8 = *((rsp + 0x20));
    while (dl != 0) {
        al = (r11d == 2) ? 1 : 0;
        if (r13b != 0) {
            goto label_81;
        }
        esi = r10d;
        esi ^= 1;
        al &= sil;
        if (al != 0) {
            if (r14 > rbx) {
                *((r15 + rbx)) = 0x27;
            }
            rsi = rbx + 1;
            if (r14 > rsi) {
                *((r15 + rbx + 1)) = 0x24;
            }
            rsi = rbx + 2;
            if (r14 > rsi) {
                *((r15 + rbx + 2)) = 0x27;
            }
            rbx += 3;
            r10d = eax;
        }
        if (r14 > rbx) {
            *((r15 + rbx)) = 0x5c;
        }
        rax = rbx + 1;
        if (r14 > rax) {
            eax = ebp;
            al >>= 6;
            eax += 0x30;
            *((r15 + rbx + 1)) = al;
        }
        rax = rbx + 2;
        if (r14 > rax) {
            eax = ebp;
            al >>= 3;
            eax &= 7;
            eax += 0x30;
            *((r15 + rbx + 2)) = al;
        }
        ebp &= 7;
        r12++;
        rbx += 3;
        ebp += 0x30;
        if (r12 >= rcx) {
            goto label_82;
        }
        esi = edx;
label_29:
        if (r14 > rbx) {
            *((r15 + rbx)) = bpl;
        }
        ebp = *((r8 + r12));
        rbx++;
    }
    eax = esi;
    eax ^= 1;
    eax &= r10d;
    if (dil != 0) {
        if (r14 > rbx) {
            *((r15 + rbx)) = 0x5c;
        }
        rbx++;
    }
    r12++;
    if (r12 < rcx) {
        if (al == 0) {
            goto label_83;
        }
        if (r14 > rbx) {
            *((r15 + rbx)) = 0x27;
        }
        rax = rbx + 1;
        if (r14 > rax) {
            *((r15 + rbx + 1)) = 0x27;
        }
        rbx += 2;
        edi = 0;
        r10d = 0;
        goto label_29;
    }
    r13d = *((rsp + 0x30));
    goto label_16;
label_81:
    r13d = r11d;
    *((rsp + 8)) = al;
    r11 = r9;
    goto label_12;
label_64:
    rbx += 4;
    r10d = eax;
    r13d = 0;
    goto label_11;
    if (ebp != 0) {
        goto label_30;
    }
    *((rsp + 8)) = 1;
    do {
        if (r14 != 0) {
            goto label_84;
        }
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 1;
        r13d = 2;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x6c)) = 0;
        *((rsp + 0x28)) = 1;
        *((rsp + 0x50)) = 0x4096f9;
        goto label_21;
        if (ebp != 0) {
            goto label_85;
        }
        if (r14 == 0) {
            goto label_86;
        }
        *(r15) = 0x22;
        r10d = 0;
        *((rsp + 0x1f)) = 1;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
label_38:
        *((rsp + 0x6c)) = 0;
        ebx = 1;
        *((rsp + 8)) = 1;
        *((rsp + 0x28)) = 1;
        *((rsp + 0x50)) = 0x40b1b4;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_004031b0 (0x40b1c5, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_004031b0 (0x4096f9, r13d);
            r11 = *((rsp + 8));
            *((rsp + 0xe0)) = rax;
        }
        ebx = 0;
        if (ebp == 0) {
            goto label_87;
        }
label_41:
        *((rsp + 0x10)) = r11;
        rax = strlen (*((rsp + 0xe0)));
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        r11 = *((rsp + 0x10));
        *((rsp + 0x28)) = rax;
        rax = *((rsp + 0xe0));
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x50)) = rax;
        *((rsp + 0x58)) = 0;
        *((rsp + 8)) = 1;
        goto label_21;
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 0;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6c)) = 0;
        *((rsp + 8)) = 0;
        *((rsp + 0x28)) = 0;
        *((rsp + 0x50)) = 0;
        goto label_21;
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 0;
        r13d = 5;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6c)) = 1;
        *((rsp + 8)) = 1;
        *((rsp + 0x28)) = 1;
        *((rsp + 0x50)) = 0x40b1b4;
        goto label_21;
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 0;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6c)) = 0;
        *((rsp + 8)) = 1;
        *((rsp + 0x28)) = 0;
        *((rsp + 0x50)) = 0;
        goto label_21;
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 0;
        r13d = 2;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6c)) = 1;
        *((rsp + 8)) = 1;
        *((rsp + 0x28)) = 1;
        *((rsp + 0x50)) = 0x4096f9;
        goto label_21;
        eax = *((rsp + 0x10));
        goto label_31;
        eax = *((rsp + 0x10));
        goto label_32;
        eax = *((rsp + 0x10));
        goto label_33;
        edx = 0;
        r13d = 0;
        goto label_4;
        goto label_34;
label_66:
        if (r14 > rbx) {
            *((r15 + rbx)) = 0x30;
        }
        rax = rcx + 2;
        if (r14 > rax) {
            *((r15 + rcx + 2)) = 0x30;
        }
        rbx = rcx + 3;
        goto label_35;
        if (ebp != 0) {
            goto label_88;
        }
        *((rsp + 8)) = 0;
    } while (1);
label_82:
    r13d = *((rsp + 0x30));
    goto label_1;
label_59:
    r12++;
    eax = r10d;
    r13d = 0;
    goto label_16;
label_83:
    edi = 0;
    goto label_29;
label_76:
    rdi = rbx;
    edx = r13d;
    ebp = *((rsp + 0x6f));
    rbx = *((rsp + 0x70));
    r10d = *((rsp + 0x6e));
    r15 = *((rsp + 0x40));
    edx ^= 1;
    r14 = *((rsp + 0x48));
    r9 = *((rsp + 0x30));
    r11d = *((rsp + 0x38));
    dl &= *((rsp + 8));
label_40:
    if (rdi > 1) {
        goto label_36;
    }
    goto label_37;
label_86:
    *((rsp + 0x58)) = 0;
    r10d = 0;
    *((rsp + 0x1f)) = 1;
    *((rsp + 0x6d)) = 0;
    goto label_38;
label_65:
    eax = r13d;
    r13d = 0;
    goto label_11;
label_75:
    ebp = *((rsi + rax));
    if (bpl > 0x3e) {
        goto label_39;
    }
    rsi = 0x7000a38200000000;
    if (((rsi >> rbp) & 1) >= 0) {
        goto label_39;
    }
    if (*((rsp + 0x6c)) != 0) {
        goto label_51;
    }
    if (r14 > rbx) {
        *((r15 + rbx)) = 0x3f;
    }
    rdx = rbx + 1;
    if (r14 > rdx) {
        *((r15 + rbx + 1)) = 0x22;
    }
    rdx = rbx + 2;
    if (r14 > rdx) {
        *((r15 + rbx + 2)) = 0x22;
    }
    rdx = rbx + 3;
    if (r14 > rdx) {
        *((r15 + rbx + 3)) = 0x3f;
    }
    rbx += 4;
    edx = 0;
    r13d = 0;
    r12 = rax;
    goto label_35;
label_77:
    rdi = rbx;
    ebp = *((rsp + 0x6f));
    rbx = *((rsp + 0x70));
    r13d = 0;
    r10d = *((rsp + 0x6e));
    r15 = *((rsp + 0x40));
    r14 = *((rsp + 0x48));
    r9 = *((rsp + 0x30));
    r11d = *((rsp + 0x38));
    edx = *((rsp + 8));
    goto label_40;
label_78:
    r9 = *((rsp + 0x30));
    rsi = r15;
    rcx = rbp;
    rax = rbx;
    rdi = rbx;
    r8 = *((rsp + 0x78));
    r10d = *((rsp + 0x6e));
    ebp = *((rsp + 0x6f));
    rbx = *((rsp + 0x70));
    r15 = *((rsp + 0x40));
    r14 = *((rsp + 0x48));
    r11d = *((rsp + 0x38));
    if (rsi >= r9) {
        goto label_89;
    }
    if (*(rcx) != 0) {
        goto label_90;
    }
    goto label_89;
    do {
        if (*((r8 + rax)) == 0) {
            goto label_91;
        }
label_90:
        rax++;
        rdx = r12 + rax;
    } while (rdx < r9);
label_91:
    rdi = rax;
label_89:
    edx = *((rsp + 8));
    r13d = 0;
    goto label_40;
label_87:
    rax = *((rsp + 0xd8));
    eax = *(rax);
    if (al == 0) {
        goto label_41;
    }
    rdx = *((rsp + 0xd8));
    do {
        if (r14 > rbx) {
            *((r15 + rbx)) = al;
        }
        rbx++;
        eax = *((rdx + rbx));
    } while (al != 0);
    goto label_41;
label_61:
    r13d = r11d;
    eax = 0;
    r11 = r9;
    goto label_42;
label_85:
    *((rsp + 0x1f)) = 1;
    r10d = 0;
    ebx = 0;
    *((rsp + 0x6d)) = 0;
    *((rsp + 0x58)) = 0;
    *((rsp + 0x6c)) = 1;
    *((rsp + 8)) = 1;
    *((rsp + 0x28)) = 1;
    *((rsp + 0x50)) = 0x40b1b4;
    goto label_21;
label_51:
    r13d = r11d;
    r11 = r9;
    goto label_43;
label_72:
    edx = eax;
label_45:
    rax = *((rsp + 0x50));
    if (rax == 0) {
        goto label_92;
    }
    if (dl == 0) {
        goto label_92;
    }
    edx = *(rax);
    if (dl == 0) {
        goto label_92;
    }
    rax -= rbx;
    do {
        if (r14 > rbx) {
            *((r15 + rbx)) = dl;
        }
        rbx++;
        edx = *((rax + rbx));
    } while (dl != 0);
label_92:
    if (r14 <= rbx) {
        goto label_44;
    }
    *((r15 + rbx)) = 0;
    goto label_44;
label_55:
    r13d = r11d;
    r11 = r9;
    goto label_12;
label_62:
    r13d = r11d;
    r11 = r9;
    *(rsp + 8) = (r13d == 2) ? 1 : 0;
    goto label_12;
label_73:
    rax = fcn_004032b0 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
    goto label_5;
    rbx = rax;
    goto label_44;
label_74:
    edx = *((rsp + 0x6d));
    goto label_45;
label_71:
    r13d = 2;
    goto label_12;
label_84:
    r10d = 0;
    eax = 0;
    *((rsp + 0x1f)) = 1;
    *((rsp + 0x58)) = 0;
    goto label_46;
label_80:
    rdx = r14;
    r14 = *((rsp + 0x58));
    goto label_27;
label_88:
    *((rsp + 0x1f)) = 1;
    r10d = 0;
    ebx = 0;
    *((rsp + 0x6d)) = 0;
    *((rsp + 0x58)) = 0;
    *((rsp + 0x6c)) = 1;
    *((rsp + 8)) = 0;
    *((rsp + 0x28)) = 1;
    *((rsp + 0x50)) = 0x4096f9;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x4044e0 */
#include <stdint.h>
 
uint64_t fcn_004044e0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    int64_t var_30h;
    int64_t var_18h;
    int64_t var_24h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    do {
        abort ();
        r15 = (int64_t) edi;
        r14 = rdx;
        *((rsp + 8)) = rsi;
        rax = errno_location ();
        rbx = *(0x0060f298);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x0060f2b0) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x60f2a0) {
        goto label_2;
    }
    rax = fcn_00405350 (rbx, rsi);
    *(0x0060f298) = rax;
    rbx = rax;
    do {
        rdi = *(0x0060f2b0);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x0060f2b0) = r12d;
label_0:
        eax = *((rbp + 4));
        r15 <<= 4;
        rbx += r15;
        r15 = rbp + 8;
        eax |= 1;
        r11 = *(rbx);
        r12 = *((rbx + 8));
        *((rsp + 0x24)) = eax;
        rsi = r11;
        *((rsp + 0x30)) = r11;
        rax = fcn_004032b0 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x60f3a0) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_004052f0 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_004032b0 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00405350 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x0060f2a0]");
        rbx = rax;
        *(0x0060f298) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00405540 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x404b80 */
#include <stdint.h>
 
int64_t fcn_00404b80 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    rdi = arg1;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    do {
        rax = imp.__libc_start_main;
        ecx = edx;
        __asm ("movdqa xmm0, xmmword [0x0060f4a0]");
        __asm ("movdqa xmm1, xmmword [0x0060f4b0]");
        __asm ("movdqa xmm2, xmmword [0x0060f4c0]");
        ecx &= 0x1f;
        *((rsp + 0x30)) = rax;
        eax = edx;
        al >>= 5;
        *(rsp) = xmm0;
        eax = (int32_t) al;
        *((rsp + 0x10)) = xmm1;
        r8 = rsp + rax*4 + 8;
        *((rsp + 0x20)) = xmm2;
        edx = *(r8);
        eax = *(r8);
        eax >>= cl;
        eax = ~eax;
        eax &= 1;
        eax <<= cl;
        eax ^= edx;
        *(r8) = eax;
        fcn_004044e0 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x404bb0 */
#include <stdint.h>
 
int64_t fcn_00404bb0 (uint32_t arg2, int64_t arg3) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    rsi = arg2;
    rdx = arg3;
    do {
        abort ();
    } while (esi == 0xa);
    rcx = 0x400000000000000;
    rax = rdx;
    *(rsp) = esi;
    *((rsp + 8)) = rcx;
    *((rsp + 4)) = 0;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x18)) = 0;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x28)) = 0;
    *((rsp + 0x30)) = 0;
    fcn_004044e0 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x404d30 */
#include <stdint.h>
 
void fcn_00404d30 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x60f260;
    rdx = 0xffffffffffffffff;
    edi = 0;
invalid_funccall(); //    return void (*0x4044e0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x404d50 */
#include <stdint.h>
 
void fcn_00404d50 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_30h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    eax = abort ();
    r12 = r9;
    rbx = r8;
    if (rsi == 0) {
        goto label_1;
    }
    r9 = rcx;
    r8 = rdx;
    rcx = rsi;
    edx = "%s (%s) %s\n";
    esi = 1;
    eax = 0;
    fprintf_chk ();
    do {
        edx = 5;
        rax = dcgettext (0, 0x40bf0b);
        r8d = 0x7e1;
        edx = "Copyright %s %d Free Software Foundation, Inc.";
        rdi = rbp;
        rcx = rax;
        esi = 1;
        eax = 0;
        fprintf_chk ();
        edx = 5;
        rax = dcgettext (0, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n");
        rsi = rbp;
        rdi = rax;
        eax = fputs_unlocked ();
        if (r12 > 9) {
            goto label_2;
        }
        /* switch table (10 cases) at 0x40c1f8 */
label_1:
        r8 = rcx;
        esi = 1;
        rcx = rdx;
        eax = 0;
        edx = "%s %s\n";
        fprintf_chk ();
    } while (1);
    r9 = *((rbx + 0x38));
    rax = *((rbx + 0x10));
    edx = 5;
    r8 = *((rbx + 8));
    r13 = *((rbx + 0x30));
    r12 = *((rbx + 0x28));
    r15 = *((rbx + 0x20));
    *((rsp + 0x10)) = r9;
    r14 = *((rbx + 0x18));
    rbx = *(rbx);
    *(rsp) = rax;
    *((rsp + 8)) = r8;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
    do {
        r9 = *((rsp + 0x18));
        rcx = rbx;
        rdx = rax;
        rdi = rbp;
        esi = 1;
        eax = 0;
        r9 = *((rsp + 0x30));
        r8 = *((rsp + 0x38));
        fprintf_chk ();
        return rax;
        r10 = *((rbx + 0x40));
        r9 = *((rbx + 0x38));
        edx = 5;
        rax = *((rbx + 0x10));
        r8 = *((rbx + 8));
        r13 = *((rbx + 0x30));
        r12 = *((rbx + 0x28));
        *((rsp + 0x18)) = r10;
        r15 = *((rbx + 0x20));
        r14 = *((rbx + 0x18));
        *((rsp + 0x10)) = r9;
        *(rsp) = rax;
        rbx = *(rbx);
        *((rsp + 8)) = r8;
label_0:
        dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
        r10 = *((rsp + 0x18));
    } while (1);
    rbx = *(rbx);
    edx = 5;
    rax = dcgettext (0, "Written by %s.\n");
    rdi = rbp;
    esi = 1;
    rcx = rbx;
    rdx = rax;
    eax = 0;
invalid_funccall(); //    void (*0x401cd0)() ();
    r12 = *((rbx + 8));
    edx = 5;
    rbx = *(rbx);
    rax = dcgettext (0, "Written by %s and %s.\n");
    r8 = r12;
    rcx = rbx;
    rdx = rax;
    rdi = rbp;
    esi = 1;
    eax = 0;
invalid_funccall(); //    void (*0x401cd0)() ();
    r13 = *((rbx + 0x10));
    r12 = *((rbx + 8));
    edx = 5;
    rbx = *(rbx);
    rax = dcgettext (0, "Written by %s, %s, and %s.\n");
    r9 = r13;
    r8 = r12;
    rcx = rbx;
    rdx = rax;
    rdi = rbp;
    esi = 1;
    eax = 0;
invalid_funccall(); //    void (*0x401cd0)() ();
    edx = 5;
    r14 = *((rbx + 0x18));
    r13 = *((rbx + 0x10));
    r12 = *((rbx + 8));
    rbx = *(rbx);
    rax = dcgettext (0, "Written by %s, %s, %s,\nand %s.\n");
    do {
        rdx = rax;
        r9 = r13;
        r8 = r12;
        rcx = rbx;
        rdi = rbp;
        esi = 1;
        eax = 0;
        fprintf_chk ();
        return;
        r15 = *((rbx + 0x20));
        edx = 5;
        r14 = *((rbx + 0x18));
        r13 = *((rbx + 0x10));
        r12 = *((rbx + 8));
        rbx = *(rbx);
        dcgettext (0, "Written by %s, %s, %s,\n%s, and %s.\n");
    } while (1);
    r8 = *((rbx + 8));
    r12 = *((rbx + 0x28));
    edx = 5;
    r15 = *((rbx + 0x20));
    r14 = *((rbx + 0x18));
    *(rsp) = r8;
    r13 = *((rbx + 0x10));
    rbx = *(rbx);
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, and %s.\n");
    r9 = r13;
    do {
        r8 = *((rsp + 0x20));
        rcx = rbx;
        rdx = rax;
        rdi = rbp;
        esi = 1;
        eax = 0;
        fprintf_chk ();
        return;
        r9 = *((rbx + 0x10));
        r13 = *((rbx + 0x30));
        edx = 5;
        r12 = *((rbx + 0x28));
        r15 = *((rbx + 0x20));
        r14 = *((rbx + 0x18));
        r8 = *((rbx + 8));
        *((rsp + 8)) = r9;
        rbx = *(rbx);
        *(rsp) = r8;
        dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
        r9 = *((rsp + 0x28));
    } while (1);
label_2:
    r10 = *((rbx + 0x40));
    r9 = *((rbx + 0x38));
    edx = 5;
    esi = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    rax = *((rbx + 0x10));
    r8 = *((rbx + 8));
    r13 = *((rbx + 0x30));
    r12 = *((rbx + 0x28));
    *((rsp + 0x18)) = r10;
    r15 = *((rbx + 0x20));
    r14 = *((rbx + 0x18));
    *((rsp + 0x10)) = r9;
    *(rsp) = rax;
    rbx = *(rbx);
    *((rsp + 8)) = r8;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x4051b0 */
#include <stdint.h>
 
uint64_t fcn_004051b0 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_70h;
    int64_t var_90h;
    int64_t var_98h;
    r8 = arg5;
    r9 = arg6;
    r11d = 0;
    rax = rsp + 0xb0;
    *((rsp + 0x90)) = r8;
    r10 = rsp + 0xb0;
    r8d = 0x20;
    *((rsp + 0x10)) = rax;
    rax = rsp + 0x70;
    *((rsp + 0x98)) = r9;
    r9d = 0;
    *((rsp + 8)) = 0x20;
    *((rsp + 0x18)) = rax;
    while (r8d <= 0x2f) {
        eax = r8d;
        r11 = rsp + 0x70;
        r8d += 8;
        rax += r11;
        r11d = 1;
        rax = *(rax);
        *((rsp + r9*8 + 0x20)) = rax;
        if (rax == 0) {
            goto label_1;
        }
label_0:
        r9++;
        if (r9 == 0xa) {
            goto label_1;
        }
    }
    rax = r10;
    r10 += 8;
    rax = *(rax);
    *((rsp + r9*8 + 0x20)) = rax;
    if (rax != 0) {
        goto label_0;
    }
label_1:
    if (r11b != 0) {
        *((rsp + 8)) = r8d;
    }
    fcn_00404d50 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x4052f0 */
#include <stdint.h>
 
uint64_t fcn_004052f0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = malloc (rdi);
    if (rax == 0) {
        if (rbx != 0) {
            goto label_0;
        }
    }
    return rax;
label_0:
    return fcn_00405540 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x405350 */
#include <stdint.h>
 
uint64_t fcn_00405350 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rsi;
    if (rsi == 0) {
        if (rdi != 0) {
            goto label_0;
        }
    }
    rax = realloc (rdi, rbx);
    if (rax == 0) {
        if (rbx != 0) {
            goto label_1;
        }
    }
    return rax;
label_0:
    eax = free (rdi);
    eax = 0;
    return rax;
label_1:
    return fcn_00405540 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x4054f0 */
#include <stdint.h>
 
uint64_t fcn_004054f0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_004052f0 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x405540 */
#include <stdint.h>
 
uint64_t fcn_00405540 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x0060f258), 0, 0x40b162);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x405580 */
#include <stdint.h>
 
uint64_t fcn_00405580 (int32_t n, const char * src) {
    rsi = n;
    rdi = src;
    rax = strndup (rdi, rsi);
    if (rax != 0) {
        return rax;
    }
    return fcn_00405540 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x4055a0 */
#include <stdint.h>
 
uint64_t fcn_004055a0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_00405620 (rbx);
        if (eax == 0) {
            goto label_2;
        }
        rax = errno_location ();
        r12d = *(rax);
        fclose (rbx);
        if (r12d != 0) {
            goto label_3;
        }
label_0:
        return rax;
        eax = fileno (rbx);
        esi = 0;
        edx = 1;
        edi = eax;
        rax = lseek ();
    }
label_2:
    rdi = rbx;
label_1:
invalid_funccall(); //    void (*0x4019d0)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x405620 */
#include <stdint.h>
 
uint32_t fcn_00405620 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    if (rdi != 0) {
        eax = freading ();
        if (eax == 0) {
            goto label_0;
        }
        if ((*(rbx) & 0x100) != 0) {
            goto label_1;
        }
    }
label_0:
    rdi = rbx;
invalid_funccall(); //    void (*0x401ba0)() ();
label_1:
    fcn_00407bf0 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x405660 */
#include <stdint.h>
 
int64_t fcn_00405660 (int64_t arg1) {
    rdi = arg1;
label_3:
    r12d = 0xc0000601;
    rbx = rdi;
label_0:
    edx = *((rbx + 4));
    if (edx == 0) {
        goto label_2;
    }
    do {
        if (edx == 0x5b) {
            goto label_6;
        }
        ecx = rdx - 0x21;
        if (ecx <= 0x1f) {
            if (((r12 >> rcx) & 1) < 0) {
                if (*((rbx + 8)) == 0x28) {
                    goto label_7;
                }
            }
            if (edx == 0x29) {
                goto label_8;
            }
        }
        rbx += 4;
        edx = *((rbx + 4));
    } while (edx != 0);
label_2:
    rax = rbp;
    r12 = rbx;
    return rax;
label_6:
    edx = imp.__libc_start_main;
    if (edx == 0) {
        goto label_9;
    }
label_5:
    edx = *((rbx + 8));
    if (edx == 0x21) {
        goto label_10;
    }
    eax = imp.__libc_start_main;
    if (eax < 0) {
        if (edx == 0x5e) {
            goto label_10;
        }
    }
    rbx += 8;
label_4:
    if (edx == 0x5d) {
        edx = *((rbx + 4));
        rbx += 4;
        goto label_11;
label_1:
        edx = *(rcx);
        rbx = rcx;
    }
label_11:
    rcx = rbx + 4;
    if (edx == 0x5d) {
        goto label_0;
    }
    if (edx != 0) {
        goto label_1;
    }
    goto label_2;
label_7:
    rax = fcn_00405660 (rbx + 8);
    goto label_3;
    rbx = rax;
    goto label_0;
label_10:
    edx = *((rbx + 0xc));
    rbx += 0xc;
    goto label_4;
label_9:
    rax = getenv ("POSIXLY_CORRECT");
    eax -= eax;
    eax |= 1;
    *(0x0060f4d8) = eax;
    goto label_5;
label_8:
    rax = rbx + 8;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x405760 */
#include <stdint.h>
 
int64_t fcn_00405760 (int64_t arg1) {
    rdi = arg1;
label_3:
    r12d = 0xc0000601;
    rbx = rdi;
label_0:
    edx = *((rbx + 1));
    if (dl == 0) {
        goto label_2;
    }
    do {
        if (dl == 0x5b) {
            goto label_6;
        }
        ecx = rdx - 0x21;
        if (cl <= 0x1f) {
            if (((r12 >> rcx) & 1) < 0) {
                if (*((rbx + 2)) == 0x28) {
                    goto label_7;
                }
            }
            if (dl == 0x29) {
                goto label_8;
            }
        }
        rbx++;
        edx = *((rbx + 1));
    } while (dl != 0);
label_2:
    rax = rbp;
    r12 = rbx;
    return rax;
label_6:
    edx = imp.__libc_start_main;
    if (edx == 0) {
        goto label_9;
    }
label_5:
    edx = *((rbx + 2));
    if (dl == 0x21) {
        goto label_10;
    }
    eax = imp.__libc_start_main;
    if (eax < 0) {
        if (dl == 0x5e) {
            goto label_10;
        }
    }
    rbx += 2;
label_4:
    if (dl == 0x5d) {
        edx = *((rbx + 1));
        rbx++;
        goto label_11;
label_1:
        edx = *(rcx);
        rbx = rcx;
    }
label_11:
    rcx = rbx + 1;
    if (dl == 0x5d) {
        goto label_0;
    }
    if (dl != 0) {
        goto label_1;
    }
    goto label_2;
label_7:
    rax = fcn_00405760 (rbx + 2);
    goto label_3;
    rbx = rax;
    goto label_0;
label_10:
    edx = *((rbx + 3));
    rbx += 3;
    goto label_4;
label_9:
    rax = getenv ("POSIXLY_CORRECT");
    eax -= eax;
    eax |= 1;
    *(0x0060f4d8) = eax;
    goto label_5;
label_8:
    rax = rbx + 2;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x405860 */
#include <stdint.h>
 
uint64_t fcn_00405860 (int64_t arg1, uint32_t arg3, wchar_t* arg4, int64_t arg5, uint32_t arg6, wchar_t * s) {
    int64_t var_78h;
    size_t var_70h;
    uint32_t var_68h;
    int64_t var_5dh;
    uint32_t var_5ch;
    wchar_t* var_58h;
    int64_t var_50h;
    size_t var_48h;
    int64_t var_38h;
    int64_t var_28h;
    int64_t var_fh;
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rsi = s;
    r12d = r8d;
    rbx = rsi;
    *((rbp - 0x50)) = edi;
    *((rbp - 0x68)) = rdx;
    *((rbp - 0x58)) = rcx;
    *((rbp - 0x5c)) = r9d;
    *((rbp - 0x5d)) = r8b;
    *((rbp - 0x38)) = 0;
    rax = wcslen (rsi);
    *((rbp - 0x48)) = rax;
    eax = *((rbx + 4));
    if (eax == 0) {
        goto label_6;
    }
    r14 = rbx + 4;
    r13 = rbp - 0x38;
    r8d = 0;
    *((rbp - 0x70)) = rbx;
    rsi = r14;
    rbx = r13;
    r15d = 0xc0000601;
    r13 = r8;
    while (edx > 0x1f) {
        if (eax == 0x7c) {
            if (r13 == 0) {
                goto label_18;
            }
        }
label_0:
        eax = *((r14 + 4));
        r14 += 4;
label_4:
        if (eax == 0) {
            goto label_6;
        }
label_1:
        if (eax == 0x5b) {
            goto label_19;
        }
label_2:
        edx = rax - 0x21;
    }
    if (((r15 >> rdx) & 1) < 0) {
        if (*((r14 + 4)) == 0x28) {
            goto label_20;
        }
    }
    if (eax != 0x29) {
        goto label_0;
    }
    rdx = r13 - 1;
    if (r13 == 0) {
        goto label_21;
    }
    eax = *((r14 + 4));
    r13 = rdx;
    r14 += 4;
    if (eax != 0) {
        goto label_1;
    }
    do {
label_6:
        eax = 0xffffffff;
label_10:
        rsp = rbp - 0x28;
        return rax;
label_20:
        r13++;
        r14 += 4;
        eax = 0x28;
        goto label_2;
label_19:
        ecx = imp.__libc_start_main;
        if (ecx == 0) {
            goto label_22;
        }
label_7:
        eax = *((r14 + 4));
        if (eax == 0x21) {
            goto label_23;
        }
        edx = imp.__libc_start_main;
        if (edx < 0) {
            if (eax == 0x5e) {
                goto label_23;
            }
        }
        rdx = r14 + 4;
label_5:
        if (eax != 0x5d) {
            goto label_24;
        }
        eax = *((rdx + 4));
        rdx += 4;
        goto label_24;
INVALID_JUMP;
    } while (eax == 0);
    eax = *(r14);
    rdx = r14;
label_24:
    r14 = rdx + 4;
    if (eax != 0x5d) {
        goto label_3;
    }
    eax = *((rdx + 4));
    goto label_4;
label_23:
    rdx = r14 + 8;
    eax = *((r14 + 8));
    goto label_5;
label_18:
    eax = *((rbp - 0x50));
    rdx = *((rbp - 0x48));
    eax -= 0x3f;
    if (eax > 1) {
        rdx = r14;
        rdx -= rsi;
        rdx >>= 2;
        rdx++;
    }
    rax = rdx*4 + 0xf;
    rax &= 0xfffffffffffffff8;
    rdi = rax - 8;
    if (rdi > 0x1f37) {
        goto label_6;
    }
    rcx = 0x3fffffffffffffff;
    if (rdx > rcx) {
        goto label_6;
    }
    rax += 0x17;
    rdx = r14;
    rax &= 0xfffffffffffffff0;
    rdx -= rsi;
    rdx >>= 2;
    r13 = rsp + 0xf;
    r13 &= 0xfffffffffffffff0;
    rdi = r13 + 8;
    wmempcpy ();
    rsi = r14 + 4;
    *(rax) = 0;
    eax = *((r14 + 4));
    r14 = rsi;
    *(r13) = 0;
    *(rbx) = r13;
    rbx = r13;
    r13d = 0;
    goto label_4;
label_22:
    *((rbp - 0x78)) = rsi;
    rax = getenv ("POSIXLY_CORRECT");
    rsi = *((rbp - 0x78));
    eax -= eax;
    eax |= 1;
    *(0x0060f4d8) = eax;
    goto label_7;
label_21:
    eax = *((rbp - 0x50));
    r13 = rbx;
    rbx = *((rbp - 0x70));
    eax -= 0x3f;
    if (eax > 1) {
        rax = r14;
        rax -= rsi;
        rax >>= 2;
        rax++;
        *((rbp - 0x48)) = rax;
    }
    rcx = *((rbp - 0x48));
    rax = rcx*4 + 0xf;
    rax &= 0xfffffffffffffff8;
    rdx = rax - 8;
    if (rdx > 0x1f37) {
        goto label_6;
    }
    rdx = 0x3fffffffffffffff;
    if (rcx > rdx) {
        goto label_6;
    }
    rax += 0x17;
    rdx = r14;
    rax &= 0xfffffffffffffff0;
    rdx -= rsi;
    rdx >>= 2;
    rax = rsp + 0xf;
    rax &= 0xfffffffffffffff0;
    rdi = rax + 8;
    r15 = rax;
    wmempcpy ();
    *(rax) = 0;
    *(r13) = r15;
    r13 = *((rbp - 0x38));
    *(r15) = 0;
    if (r13 == 0) {
        goto label_25;
    }
    if (*((r14 - 4)) != 0x29) {
        goto label_26;
    }
    r15d = *((rbp - 0x50));
    r15d -= 0x21;
    if (r15d > 0x1f) {
        goto label_27;
    }
    /* switch table (32 cases) at 0x40c328 */
    ecx = (int32_t) r12b;
    eax = fcn_00405df0 (r14, *((rbp - 0x68)), *((rbp - 0x58)), rcx, *((rbp - 0x5c)));
    if (eax == 0) {
        goto label_11;
    }
    eax = *((rbp - 0x5c));
    *((rbp - 0x70)) = r14;
    r14 = *((rbp - 0x68));
    r12d = eax;
    r15d = eax;
    r12d &= 0xfffffffb;
    r15d &= 1;
    if (r15d != 0) {
        r12d = eax;
    }
    rax = rbx - 4;
    *((rbp - 0x50)) = r15d;
    rbx = *((rbp - 0x58));
    *((rbp - 0x78)) = rax;
label_15:
    if (r14 > rbx) {
        goto label_28;
    }
    eax = *((rbp - 0x5d));
    r15 = r14;
    *((rbp - 0x48)) = eax;
    goto label_29;
label_8:
    ecx = 0;
    if (*((r15 - 4)) == 0x2f) {
        eax = *((rbp - 0x5c));
        eax &= 5;
        cl = (eax == 5) ? 1 : 0;
    }
    eax = fcn_00405df0 (*((rbp - 0x70)), r15, rbx, 0, r12d);
    if (eax == 0) {
        goto label_11;
    }
    ecx = 0;
    if (*((r15 - 4)) == 0x2f) {
        eax = *((rbp - 0x5c));
        eax &= 5;
        cl = (eax == 5) ? 1 : 0;
    }
    eax = fcn_00405df0 (*((rbp - 0x78)), r15, rbx, 0, r12d);
    if (eax == 0) {
        goto label_11;
    }
label_9:
    r13 = *((rbp - 0x38));
    do {
        r15 += 4;
        if (rbx < r15) {
            goto label_28;
        }
label_29:
        eax = fcn_00405df0 (r13 + 8, r14, r15, *((rbp - 0x48)), r12d);
    } while (eax != 0);
    if (r14 != r15) {
        goto label_8;
    }
    eax = fcn_00405df0 (*((rbp - 0x70)), r14, rbx, *((rbp - 0x48)), r12d);
    if (eax != 0) {
        goto label_9;
    }
label_11:
    eax = 0;
    goto label_10;
    rcx = *((rbp - 0x58));
    if (*((rbp - 0x68)) > rcx) {
        goto label_16;
    }
    eax = *((rbp - 0x5c));
    r15 = *((rbp - 0x68));
    *((rbp - 0x48)) = r13;
    r12d = (int32_t) r12b;
    *((rbp - 0x50)) = r14;
    ebx = eax;
    r14 = r15;
    ebx &= 0xfffffffb;
    if ((al & 1) != 0) {
        ebx = eax;
    }
label_12:
    r13 = *((rbp - 0x48));
    do {
        eax = fcn_00405df0 (r13 + 8, r15, r14, r12d, ebx);
        if (eax == 0) {
            goto label_30;
        }
        r13 = *(r13);
    } while (r13 != 0);
    if (r15 == r14) {
        goto label_31;
    }
    ecx = 0;
    if (*((r14 - 4)) == 0x2f) {
        eax = *((rbp - 0x5c));
        eax &= 5;
        cl = (eax == 5) ? 1 : 0;
    }
label_17:
    eax = fcn_00405df0 (*((rbp - 0x50)), r14, *((rbp - 0x58)), 0, ebx);
    if (eax == 0) {
        goto label_11;
    }
label_30:
    r14 += 4;
    if (*((rbp - 0x58)) >= r14) {
        goto label_12;
    }
    do {
label_16:
        eax = 1;
        goto label_10;
        r12d = (int32_t) r12b;
label_14:
        eax = *((rbp - 0x5c));
        r15 = *((rbp - 0x68));
        ebx = eax;
        ebx &= 0xfffffffb;
        if ((al & 1) != 0) {
            ebx = eax;
        }
        goto label_32;
label_13:
        r13 = *(r13);
        *((rbp - 0x38)) = r13;
    } while (r13 == 0);
label_32:
    rax = wcscat (r13 + 8, r14);
    eax = fcn_00405df0 (rax, r15, *((rbp - 0x58)), r12d, ebx);
    if (eax != 0) {
        goto label_13;
    }
    eax = 0;
    goto label_10;
    r12d = (int32_t) r12b;
    eax = fcn_00405df0 (r14, *((rbp - 0x68)), *((rbp - 0x58)), r12d, *((rbp - 0x5c)));
    if (eax != 0) {
        goto label_14;
    }
    eax = 0;
    goto label_10;
label_28:
    r13 = *(r13);
    *((rbp - 0x38)) = r13;
    if (r13 != 0) {
        goto label_15;
    }
    goto label_16;
label_31:
    ecx = r12d;
    goto label_17;
label_27:
    assert_fail ("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 0x4ad, "ext_wmatch");label_26:
    assert_fail ("p[-1] == L_(')')", "lib/fnmatch_loop.c", 0x455, "ext_wmatch");
label_25:
    return assert_fail ("list != NULL", "lib/fnmatch_loop.c", 0x454, "ext_wmatch");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x405df0 */
#include <stdint.h>
 
uint64_t fcn_00405df0 (size_t arg1, uint32_t arg2, wchar_t* arg3, int64_t arg4, uint32_t arg5) {
    wchar_t* var_8h;
    wchar_t* var_10h;
    uint32_t var_18h;
    wint_t * var_1ch;
    uint32_t var_20h;
    int64_t var_24h;
    int64_t var_28h;
    char * property;
    int64_t var_140h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
label_7:
    rax = rdi + 4;
    r14 = rdx;
    rbx = rsi;
    r15d = *(rdi);
    *((rsp + 0x18)) = r8d;
    *((rsp + 8)) = rax;
    if (r15d == 0) {
        goto label_44;
    }
    r12d = r8d;
    r8d &= 5;
    *((rsp + 0x10)) = rdx;
    *((rsp + 0x20)) = r8d;
    ebp &= 0x10;
    r10d = ecx;
    r12d &= 2;
    r13d = ebp;
label_1:
    if (r13d != 0) {
        *((rsp + 0x1c)) = r10b;
        eax = towlower (r15d);
        r10d = *((rsp + 0x1c));
        r15d = eax;
    }
    eax = r15 - 0x21;
    if (eax > 0x3b) {
        goto label_2;
    }
    /* switch table (60 cases) at 0x40c428 */
    if (r12d != 0) {
        goto label_45;
    }
    r15d = *((rbp + 4));
    rax = rbp + 8;
    *((rsp + 8)) = rax;
    if (r15d == 0) {
        goto label_4;
    }
    if (r13d == 0) {
        goto label_46;
    }
    eax = towlower (r15d);
    r15d = eax;
    if (*((rsp + 0x10)) == rbx) {
        goto label_4;
    }
label_8:
    towlower (*(rbx));
    rbp = *((rsp + 8));
    goto label_47;
    r8d = imp.__libc_start_main;
    if (r8d == 0) {
        goto label_48;
    }
label_23:
    if (*((rsp + 0x10)) == rbx) {
        goto label_4;
    }
    r8d = *(rbx);
    if (r8d == 0x2e) {
        goto label_49;
    }
    if (r8d == 0x2f) {
        if ((*((rsp + 0x18)) & 1) != 0) {
            goto label_4;
        }
    }
label_22:
    eax = *((rbp + 4));
    if (eax == 0x21) {
        goto label_50;
    }
    edi = imp.__libc_start_main;
    if (edi < 0) {
        if (eax == 0x5e) {
            goto label_50;
        }
    }
    *((rsp + 0x1c)) = 0;
    r14 = *((rsp + 8));
label_19:
    if (r13d != 0) {
        eax = towlower (r8d);
        r8d = eax;
    }
    *((rsp + 0x24)) = r15d;
    rbp = r14 + 4;
    r15 = rbx;
    eax = *(r14);
    ebx = r8d;
    while (r14d != 0x2d) {
        if (eax == ebx) {
            goto label_51;
        }
        eax = r14d;
label_0:
        if (eax == 0x5d) {
            goto label_52;
        }
label_13:
        if (r12d == 0) {
            if (eax == 0x5c) {
                goto label_53;
            }
        }
        if (eax == 0x5b) {
            goto label_54;
        }
        if (eax == 0) {
            goto label_55;
        }
        r14d = *(rbp);
label_11:
        if (r13d != 0) {
            eax = towlower (eax);
        }
label_15:
        rsi = rbp + 4;
    }
    edx = *((rbp + 4));
    if (edx == 0x5d) {
        goto label_56;
    }
    if (edx == 0) {
        goto label_56;
    }
label_14:
    rsi = rbp + 8;
    if (edx == 0x5c) {
        if (r12d == 0) {
            goto label_57;
        }
    }
label_20:
    if (edx == 0) {
        goto label_4;
    }
    r14d = *(rsi);
    rbp = rsi + 4;
    dil = (eax <= ebx) ? 1 : 0;
    dl = (edx >= ebx) ? 1 : 0;
    eax = r14d;
    if ((dil & dl) == 0) {
        goto label_0;
    }
    rbx = r15;
    rsi = rsi + 4;
    goto label_41;
    if ((*((rsp + 0x18)) & 0x20) != 0) {
        goto label_58;
    }
label_29:
    if (*((rsp + 0x10)) == rbx) {
        goto label_4;
    }
    eax = *(rbx);
    if (eax == 0x2f) {
        goto label_59;
    }
    al = (eax == 0x2e) ? 1 : 0;
    r10b &= al;
    if (r10b != 0) {
        goto label_4;
    }
    rbp = *((rsp + 8));
    goto label_9;
    if (*((rsp + 0x20)) == 5) {
        goto label_60;
    }
label_2:
    if (*((rsp + 0x10)) == rbx) {
        goto label_4;
    }
label_35:
    eax = *(rbx);
    if (r13d != 0) {
        eax = towlower (eax);
    }
    if (eax != r15d) {
        goto label_4;
    }
label_21:
    rbp = *((rsp + 8));
    r10d = 0;
label_9:
    r15d = *(rbp);
    rax = rbp + 4;
    rbx += 4;
    *((rsp + 8)) = rax;
    if (r15d != 0) {
        goto label_1;
    }
    r14 = *((rsp + 0x10));
label_44:
    if (rbx == r14) {
        goto label_26;
    }
    if ((*((rsp + 0x18)) & 8) != 0) {
        goto label_61;
    }
label_4:
    eax = 1;
label_3:
    return rax;
    if ((*((rsp + 0x18)) & 0x20) == 0) {
        goto label_2;
    }
    if (*((rbp + 4)) != 0x28) {
        goto label_2;
    }
    r8d = (int32_t) r10b;
    eax = fcn_00405860 (r15d, *((rsp + 8)), rbx, *((rsp + 0x10)), r8, *((rsp + 0x18)));
    if (eax == 0xffffffff) {
        goto label_2;
    }
    goto label_3;
    rax = rbp;
    r14 = *((rsp + 0x10));
    r13 = rax;
    eax = *((rsp + 0x18));
    eax &= 0x20;
    *((rsp + 0x20)) = eax;
    if (eax != 0) {
        goto label_62;
    }
label_28:
    if (r14 == rbx) {
        goto label_63;
    }
    if (*(rbx) != 0x2e) {
        goto label_63;
    }
    if (r10b != 0) {
        goto label_4;
    }
label_63:
    r11d = *((r13 + 4));
    r15 = r13 + 8;
    if (r11d != 0x2a) {
        if (r11d != 0x3f) {
            goto label_64;
        }
    }
    eax = *((rsp + 0x20));
    r13d = *((rsp + 0x18));
    dl = (eax != 0) ? 1 : 0;
    r13d &= 1;
    do {
label_5:
        if (*(r15) == 0x28) {
            if (dl != 0) {
                goto label_65;
            }
        }
label_17:
        if (r11d == 0x3f) {
            goto label_66;
        }
label_10:
        rax = r15;
label_16:
        r11d = *(rax);
        r15 = rax + 4;
    } while (r11d == 0x3f);
    if (r11d == 0x2a) {
        goto label_5;
    }
label_64:
    ecx = *((rsp + 0x18));
    ecx &= 1;
    if (r11d == 0) {
        goto label_67;
    }
    esi = ecx;
    *((rsp + 0x1c)) = r10b;
    rdx -= rbx;
    esi = -esi;
    *((rsp + 0x10)) = r11d;
    rdx >>= 2;
    esi &= 0x2f;
    *((rsp + 8)) = ecx;
    rax = wmemchr (rbx, esi, r14);
    r11d = *((rsp + 0x10));
    ecx = *((rsp + 8));
    r9 = rax;
    r10d = *((rsp + 0x1c));
    if (rax == 0) {
        r9 = r14;
    }
    if (r11d == 0x5b) {
        goto label_68;
    }
    r13d = *((rsp + 0x20));
    if (r13d != 0) {
        goto label_69;
    }
label_25:
    if (r11d == 0x2f) {
        goto label_70;
    }
    if (ecx == 0) {
        goto label_71;
    }
label_40:
    r13d = (int32_t) r10b;
    if (r11d == 0x5c) {
        goto label_72;
    }
label_43:
    if (ebp != 0) {
        *((rsp + 8)) = r9;
        eax = towlower (r11d);
        r9 = *((rsp + 8));
        r11d = eax;
    }
    r15 -= 4;
    if (r9 <= rbx) {
        goto label_4;
    }
    *((rsp + 8)) = r14;
    r12d = r11d;
    r14d = r13d;
    r13 = rbx;
    rbx = r9;
    goto label_73;
label_6:
    r13 += 4;
    r14d = 0;
    if (rbx <= r13) {
        goto label_4;
    }
label_73:
    eax = *(r13);
    if (ebp != 0) {
        eax = towlower (eax);
    }
    if (r12d != eax) {
        goto label_6;
    }
    eax = fcn_00405df0 (r15, r13, *((rsp + 8)), r14d, *((rsp + 0x18)));
    goto label_7;
    if (eax != 0) {
        goto label_6;
    }
label_26:
    eax = 0;
    goto label_3;
label_45:
    if (*((rsp + 0x10)) == rbx) {
        goto label_4;
    }
    if (r13d != 0) {
        goto label_8;
    }
label_24:
    eax = *(rbx);
    rbp = *((rsp + 8));
label_47:
    if (eax != r15d) {
        goto label_4;
    }
label_34:
    r10d = 0;
    goto label_9;
label_66:
    if (rbx == r14) {
        goto label_4;
    }
    if (*(rbx) == 0x2f) {
        goto label_74;
    }
label_18:
    rbx += 4;
    goto label_10;
label_54:
    r14d = *(rbp);
    if (r14d != 0x3a) {
        goto label_11;
    }
    r14 = rbp;
    edx = 0;
    goto label_75;
label_12:
    ecx = rax - 0x61;
    if (ecx > 0x18) {
        goto label_76;
    }
    rdx++;
    r14 = r8;
    *((rsp + rdx*4 + 0x13c)) = eax;
    if (rdx == 0x100) {
        goto label_4;
    }
label_75:
    eax = *((r14 + 4));
    r8 = r14 + 4;
    if (eax != 0x3a) {
        goto label_12;
    }
    if (*((r8 + 4)) == 0x5d) {
        goto label_77;
    }
label_76:
    rsi = rbp + 4;
    if (ebx == 0x5b) {
        goto label_51;
    }
    eax = 0x3a;
    goto label_13;
label_56:
    if (eax == ebx) {
        goto label_78;
    }
    if (edx != 0x5d) {
        goto label_14;
    }
    r14d = 0x5d;
    eax = 0x2d;
    goto label_11;
label_53:
    eax = *(rbp);
    if (eax == 0) {
        goto label_4;
    }
    if (r13d != 0) {
        towlower (eax);
    }
    r14d = *((rbp + 4));
    rbp += 4;
    goto label_15;
label_65:
    *((rsp + 0x10)) = r10b;
    *((rsp + 8)) = dl;
    *((rsp + 0x1c)) = r11d;
    rax = fcn_00405660 (r15);
    edx = *((rsp + 8));
    r10d = *((rsp + 0x10));
    if (rax != r15) {
        goto label_16;
    }
    r11d = *((rsp + 0x1c));
    goto label_17;
label_74:
    if (r13d == 0) {
        goto label_18;
    }
    goto label_4;
label_50:
    r14 = rbp + 8;
    *((rsp + 0x1c)) = 1;
    goto label_19;
label_57:
    rsi = rbp + 0xc;
    edx = *((rbp + 8));
    goto label_20;
label_60:
    if (*((rsp + 0x10)) == rbx) {
        goto label_4;
    }
    if (*(rbx) != 0x2f) {
        goto label_4;
    }
    rbp = *((rsp + 8));
    r10d = 1;
    goto label_9;
label_59:
    if ((*((rsp + 0x18)) & 1) == 0) {
        goto label_21;
    }
    goto label_4;
label_49:
    if (r10b == 0) {
        goto label_22;
    }
    goto label_4;
label_48:
    *((rsp + 0x1c)) = r10b;
    rax = getenv ("POSIXLY_CORRECT");
    r10d = *((rsp + 0x1c));
    eax -= eax;
    eax |= 1;
    *(0x0060f4d8) = eax;
    goto label_23;
label_46:
    if (*((rsp + 0x10)) != rbx) {
        goto label_24;
    }
    goto label_4;
label_69:
    eax = r11 - 0x21;
    if (eax > 0x1f) {
        goto label_25;
    }
    edx = 0x80000401;
    if (((rdx >> rax) & 1) >= 0) {
        goto label_25;
    }
    if (*(r15) != 0x28) {
        goto label_25;
    }
label_68:
    edi = *((rsp + 0x18));
    eax = *((rsp + 0x18));
    eax &= 0xfffffffb;
    if (ecx != 0) {
        eax = edi;
    }
    r15 -= 4;
    if (r9 <= rbx) {
        goto label_4;
    }
    r12 = r9;
label_27:
    ecx = (int32_t) r10b;
    eax = fcn_00405df0 (r15, rbx, r14, rcx, ebp);
    goto label_7;
    if (eax == 0) {
        goto label_26;
    }
    rbx += 4;
    r10d = 0;
    if (r12 > rbx) {
        goto label_27;
    }
    goto label_4;
label_62:
    if (*((r13 + 4)) != 0x28) {
        goto label_28;
    }
    r8d = (int32_t) r10b;
    *((rsp + 0x10)) = r10b;
    eax = fcn_00405860 (0x2a, *((rsp + 8)), rbx, r14, r8, *((rsp + 0x18)));
    if (eax != 0xffffffff) {
        goto label_3;
    }
    r10d = *((rsp + 0x10));
    goto label_28;
label_58:
    if (*((rbp + 4)) != 0x28) {
        goto label_29;
    }
    r8d = (int32_t) r10b;
    *((rsp + 0x1c)) = r10b;
    eax = fcn_00405860 (0x3f, *((rsp + 8)), rbx, *((rsp + 0x10)), r8, *((rsp + 0x18)));
    r10d = *((rsp + 0x1c));
    if (eax == 0xffffffff) {
        goto label_29;
    }
    goto label_3;
label_51:
    rbx = r15;
    r14d = *(rbp);
    goto label_41;
label_30:
    if (edx == 0x5d) {
        goto label_79;
    }
    r14d = *(r8);
label_31:
    rsi = rbp + 4;
label_41:
    r8 = rsi;
    edx = r14d;
    if (r14d == 0) {
        goto label_4;
    }
    r10b = (r14d == 0x5c) ? 1 : 0;
    al = (r12d == 0) ? 1 : 0;
    r10b &= al;
    if (r10b != 0) {
        goto label_80;
    }
    if (r14d != 0x5b) {
        goto label_30;
    }
    r14d = *((rbp + 4));
    if (r14d == 0x3a) {
        goto label_81;
    }
    if (r14d == 0x3d) {
        goto label_82;
    }
    rbp += 8;
    if (r14d != 0x2e) {
label_37:
        goto label_31;
label_33:
        if (*((rdx + 4)) == 0x5d) {
            goto label_83;
        }
INVALID_JUMP;
    }
    eax = *((rbp + 4));
    rdx = rbp + 4;
    if (eax == 0) {
        goto label_4;
    }
    if (eax != 0x2e) {
        goto label_32;
    }
    goto label_33;
label_80:
    ecx = *((rbp + 4));
    if (ecx == 0) {
        goto label_4;
    }
    r14d = *((rbp + 8));
    rbp += 8;
    goto label_31;
label_82:
    edx = *((rbp + 8));
    if (edx == 0) {
        goto label_4;
    }
    if (*((rbp + 0xc)) != 0x3d) {
        goto label_4;
    }
    if (*((rbp + 0x10)) != 0x5d) {
        goto label_4;
    }
    r8 = rbp + 0x18;
    edx = *((rbp + 0x14));
    goto label_30;
label_52:
    esi = *((rsp + 0x1c));
    rbx = r15;
    if (esi != 0) {
        goto label_34;
    }
    goto label_4;
label_55:
    rbx = r15;
    r15d = *((rsp + 0x24));
    goto label_35;
label_67:
    if (ecx == 0) {
        goto label_26;
    }
    if ((*((rsp + 0x18)) & 8) != 0) {
        goto label_26;
    }
    rdx -= rbx;
    rdx >>= 2;
    rax = wmemchr (rbx, 0x2f, r14);
    al = (rax != 0) ? 1 : 0;
    eax = (int32_t) al;
    goto label_3;
label_81:
    rax = rbp + 8;
    r14d = *((rbp + 8));
    rbp += 0x404;
    goto label_84;
label_36:
    r14d -= 0x61;
    if (r14d > 0x18) {
        goto label_85;
    }
    rax += 4;
    r14d = *(rax);
    if (rbp == rax) {
        goto label_4;
    }
label_84:
    if (r14d != 0x3a) {
        goto label_36;
    }
    if (*((rax + 4)) != 0x5d) {
        goto label_37;
    }
    r8 = rax + 0xc;
    edx = *((rax + 8));
    goto label_30;
label_77:
    *((rsp + rdx*4 + 0x140)) = 0;
    rsi = rsp + 0x30;
    rdx = rsp + 0x140;
    eax = *((rsp + 0x140));
    r9 = rdx + 0x400;
    goto label_86;
label_38:
    if (eax >= 0x25) {
        goto label_39;
    }
    ecx = rax - 0x20;
    if (ecx > 3) {
        goto label_4;
    }
label_39:
    if (rdx == r9) {
        goto label_4;
    }
    rdx += 4;
    rsi++;
    *((rsi - 1)) = al;
    eax = *(rdx);
    if (eax == 0) {
        goto label_87;
    }
label_86:
    if (eax <= 0x3f) {
        goto label_38;
    }
    if (eax < 0x41) {
        goto label_4;
    }
    if (eax <= 0x5f) {
        goto label_39;
    }
    ecx = rax - 0x61;
    if (ecx <= 0x1d) {
        goto label_39;
    }
    goto label_4;
    do {
label_71:
        goto label_40;
label_61:
        eax = 0;
        al = (*(rbx) != 0x2f) ? 1 : 0;
        goto label_3;
label_83:
        r8 = rbp + 0x10;
        edx = *((rbp + 0xc));
        goto label_30;
label_78:
        rbx = r15;
        goto label_41;
INVALID_JUMP;
    } while (ecx == 0);
    if (r14 > rbx) {
        goto label_88;
    }
    goto label_4;
label_42:
    rbx += 4;
    if (r14 <= rbx) {
        goto label_4;
    }
label_88:
    if (*(rbx) != 0x2f) {
        goto label_42;
    }
    ecx >>= 2;
    ecx &= 1;
    eax = fcn_00405df0 (r15, rbx + 4, r14, r8d, *((rsp + 0x18)));
    goto label_7;
    al = (eax != 0) ? 1 : 0;
    eax = (int32_t) al;
    goto label_3;
label_72:
    if (r12d != 0) {
        goto label_43;
    }
    r11d = *(r15);
    goto label_43;
label_79:
    eax = *((rsp + 0x1c));
    if (eax != 0) {
        goto label_4;
    }
    goto label_9;
label_87:
    *(rsi) = 0;
    *((rsp + 0x28)) = r8;
    rax = wctype (rsp + 0x30);
    r8 = *((rsp + 0x28));
    rsi = rax;
    if (rax == 0) {
        goto label_4;
    }
    *((rsp + 0x28)) = r8;
    eax = iswctype (*(r15), rsi);
    r8 = *((rsp + 0x28));
    if (eax == 0) {
        rbp = r8 + 0xc;
        eax = *((r8 + 8));
        goto label_0;
    }
    r9 = r14;
    rbp = r14 + 0xc;
    rbx = r15;
    r14d = *((r14 + 0xc));
    rsi = r9 + 0x10;
    goto label_41;
label_85:
    r14d = 0x3a;
    goto label_31;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x4068d0 */
#include <stdint.h>
 
uint64_t fcn_004068d0 (int64_t arg1, uint32_t arg3, size_t arg4, int64_t arg5, int64_t arg6, char * s) {
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_6dh;
    int64_t var_6ch;
    size_t var_68h;
    uint32_t var_60h;
    uint32_t var_58h;
    size_t var_50h;
    int64_t var_48h;
    int64_t var_38h;
    int64_t var_28h;
    int64_t var_fh;
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rsi = s;
    r12d = r8d;
    rbx = rsi;
    *((rbp - 0x48)) = edi;
    *((rbp - 0x60)) = rdx;
    *((rbp - 0x68)) = rcx;
    *((rbp - 0x6c)) = r9d;
    *((rbp - 0x6d)) = r8b;
    *((rbp - 0x38)) = 0;
    rax = strlen (rsi);
    *((rbp - 0x50)) = rax;
    eax = *((rbx + 1));
    if (al == 0) {
        goto label_6;
    }
    edi = *((rbp - 0x48));
    r14 = rbx + 1;
    r15 = rbp - 0x38;
    edx = 0;
    *((rbp - 0x78)) = rbx;
    rsi = r14;
    rbx = r15;
    r13d = 0xc0000601;
    edi -= 0x3f;
    r15 = rdx;
    *((rbp - 0x58)) = edi;
    while (dl > 0x1f) {
        if (al == 0x7c) {
            if (r15 == 0) {
                goto label_18;
            }
        }
label_0:
        eax = *((r14 + 1));
        r14++;
label_4:
        if (al == 0) {
            goto label_6;
        }
label_1:
        if (al == 0x5b) {
            goto label_19;
        }
label_2:
        edx = rax - 0x21;
    }
    if (((r13 >> rdx) & 1) < 0) {
        if (*((r14 + 1)) == 0x28) {
            goto label_20;
        }
    }
    if (al != 0x29) {
        goto label_0;
    }
    rdx = r15 - 1;
    if (r15 == 0) {
        goto label_21;
    }
    eax = *((r14 + 1));
    r15 = rdx;
    r14++;
    if (al != 0) {
        goto label_1;
    }
    do {
label_6:
        eax = 0xffffffff;
label_10:
        rsp = rbp - 0x28;
        return rax;
label_20:
        r15++;
        r14++;
        eax = 0x28;
        goto label_2;
label_19:
        ecx = imp.__libc_start_main;
        if (ecx == 0) {
            goto label_22;
        }
label_7:
        eax = *((r14 + 1));
        if (al == 0x21) {
            goto label_23;
        }
        edx = imp.__libc_start_main;
        if (edx < 0) {
            if (al == 0x5e) {
                goto label_23;
            }
        }
        rcx = r14 + 1;
label_5:
        if (al != 0x5d) {
            goto label_24;
        }
        eax = *((rcx + 1));
        rcx++;
        r14 = rcx + 1;
        if (al == 0x5d) {
            goto label_25;
        }
INVALID_JUMP;
    } while (al == 0);
    eax = *(r14);
    rcx = r14;
label_24:
    r14 = rcx + 1;
    if (al != 0x5d) {
        goto label_3;
    }
label_25:
    eax = *((rcx + 1));
    goto label_4;
label_23:
    rcx = r14 + 2;
    eax = *((r14 + 2));
    goto label_5;
label_18:
    rdx = r14;
    rdx -= rsi;
    rax = rdx + 1;
    if (*((rbp - 0x58)) <= 1) {
        rax = *((rbp - 0x50));
    }
    rax += 0xf;
    rax &= 0xfffffffffffffff8;
    rcx = rax - 8;
    if (rcx > 0x1f37) {
        goto label_6;
    }
    rax += 0x17;
    rax &= 0xfffffffffffffff0;
    r15 = rsp + 0xf;
    r15 &= 0xfffffffffffffff0;
    rdi = r15 + 8;
    mempcpy ();
    rsi = r14 + 1;
    *(rax) = 0;
    eax = *((r14 + 1));
    r14 = rsi;
    *(r15) = 0;
    *(rbx) = r15;
    rbx = r15;
    r15d = 0;
    goto label_4;
label_22:
    *((rbp - 0x80)) = rsi;
    rax = getenv ("POSIXLY_CORRECT");
    rsi = *((rbp - 0x80));
    eax -= eax;
    eax |= 1;
    *(0x0060f4d8) = eax;
    goto label_7;
label_21:
    eax = *((rbp - 0x48));
    rdx = r14;
    r15 = rbx;
    rbx = *((rbp - 0x78));
    rdx -= rsi;
    ecx = rax - 0x3f;
    rax = rdx + 1;
    if (ecx <= 1) {
        rax = *((rbp - 0x50));
    }
    rax += 0xf;
    rax &= 0xfffffffffffffff8;
    rcx = rax - 8;
    if (rcx > 0x1f37) {
        goto label_6;
    }
    rax += 0x17;
    rax &= 0xfffffffffffffff0;
    rax = rsp + 0xf;
    rax &= 0xfffffffffffffff0;
    rdi = rax + 8;
    r13 = rax;
    mempcpy ();
    *(r15) = r13;
    *(rax) = 0;
    rax = *((rbp - 0x38));
    *(r13) = 0;
    *((rbp - 0x50)) = rax;
    if (rax == 0) {
        goto label_26;
    }
    if (*((r14 - 1)) != 0x29) {
        goto label_27;
    }
    r13d = *((rbp - 0x48));
    r13d -= 0x21;
    if (r13d > 0x1f) {
        goto label_28;
    }
    /* switch table (32 cases) at 0x40c608 */
    ecx = (int32_t) r12b;
    eax = fcn_00406e20 (r14, *((rbp - 0x60)), *((rbp - 0x68)), rcx, *((rbp - 0x6c)));
    if (eax == 0) {
        goto label_11;
    }
    eax = *((rbp - 0x6c));
    r15 = *((rbp - 0x60));
    *((rbp - 0x58)) = r14;
    r14 = *((rbp - 0x50));
    r12d = eax;
    r13d = eax;
    r12d &= 0xfffffffb;
    r13d &= 1;
    if (r13d != 0) {
        r12d = eax;
    }
    rax = rbx - 1;
    *((rbp - 0x50)) = r13d;
    rbx = *((rbp - 0x68));
    *((rbp - 0x78)) = rax;
label_15:
    if (r15 > rbx) {
        goto label_29;
    }
    eax = *((rbp - 0x6d));
    r13 = r15;
    *((rbp - 0x48)) = eax;
    goto label_30;
label_8:
    ecx = 0;
    if (*((r13 - 1)) == 0x2f) {
        eax = *((rbp - 0x6c));
        eax &= 5;
        cl = (eax == 5) ? 1 : 0;
    }
    eax = fcn_00406e20 (*((rbp - 0x58)), r13, rbx, 0, r12d);
    if (eax == 0) {
        goto label_11;
    }
    ecx = 0;
    if (*((r13 - 1)) == 0x2f) {
        eax = *((rbp - 0x6c));
        eax &= 5;
        cl = (eax == 5) ? 1 : 0;
    }
    eax = fcn_00406e20 (*((rbp - 0x78)), r13, rbx, 0, r12d);
    if (eax == 0) {
        goto label_11;
    }
label_9:
    r14 = *((rbp - 0x38));
    do {
        r13++;
        if (rbx < r13) {
            goto label_29;
        }
label_30:
        eax = fcn_00406e20 (r14 + 8, r15, r13, *((rbp - 0x48)), r12d);
    } while (eax != 0);
    if (r15 != r13) {
        goto label_8;
    }
    eax = fcn_00406e20 (*((rbp - 0x58)), r15, rbx, *((rbp - 0x48)), r12d);
    if (eax != 0) {
        goto label_9;
    }
label_11:
    eax = 0;
    goto label_10;
    rdi = *((rbp - 0x68));
    if (*((rbp - 0x60)) > rdi) {
        goto label_16;
    }
    eax = *((rbp - 0x6c));
    r15 = *((rbp - 0x60));
    *((rbp - 0x48)) = r14;
    r12d = (int32_t) r12b;
    ebx = eax;
    r13 = r15;
    ebx &= 0xfffffffb;
    if ((al & 1) != 0) {
        ebx = eax;
    }
label_12:
    r14 = *((rbp - 0x50));
    do {
        eax = fcn_00406e20 (r14 + 8, r15, r13, r12d, ebx);
        if (eax == 0) {
            goto label_31;
        }
        r14 = *(r14);
    } while (r14 != 0);
    if (r15 == r13) {
        goto label_32;
    }
    ecx = 0;
    if (*((r13 - 1)) == 0x2f) {
        eax = *((rbp - 0x6c));
        eax &= 5;
        cl = (eax == 5) ? 1 : 0;
    }
label_17:
    eax = fcn_00406e20 (*((rbp - 0x48)), r13, *((rbp - 0x68)), 0, ebx);
    if (eax == 0) {
        goto label_11;
    }
label_31:
    r13++;
    if (*((rbp - 0x68)) >= r13) {
        goto label_12;
    }
    do {
label_16:
        eax = 1;
        goto label_10;
        r12d = (int32_t) r12b;
label_14:
        eax = *((rbp - 0x6c));
        r13 = *((rbp - 0x50));
        r15 = *((rbp - 0x68));
        ebx = eax;
        ebx &= 0xfffffffb;
        if ((al & 1) != 0) {
            ebx = eax;
        }
        goto label_33;
label_13:
        r13 = *(r13);
        *((rbp - 0x38)) = r13;
    } while (r13 == 0);
label_33:
    rax = strcat (r13 + 8, r14);
    eax = fcn_00406e20 (rax, *((rbp - 0x60)), r15, r12d, ebx);
    if (eax != 0) {
        goto label_13;
    }
    eax = 0;
    goto label_10;
    r12d = (int32_t) r12b;
    eax = fcn_00406e20 (r14, *((rbp - 0x60)), *((rbp - 0x68)), r12d, *((rbp - 0x6c)));
    if (eax != 0) {
        goto label_14;
    }
    eax = 0;
    goto label_10;
label_29:
    r14 = *(r14);
    *((rbp - 0x38)) = r14;
    if (r14 != 0) {
        goto label_15;
    }
    goto label_16;
label_32:
    ecx = r12d;
    goto label_17;
label_28:
    assert_fail ("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 0x4ad, "ext_match");label_27:
    assert_fail ("p[-1] == L_(')')", "lib/fnmatch_loop.c", 0x455, "ext_match");
label_26:
    return assert_fail ("list != NULL", "lib/fnmatch_loop.c", 0x454, "ext_match");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x406e20 */
#include <stdint.h>
 
uint64_t fcn_00406e20 (size_t arg1, uint32_t arg2, size_t arg3, int64_t arg4, int64_t arg5) {
    size_t var_8h;
    size_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_24h;
    uint32_t var_28h;
    int64_t var_2ch;
    char * property;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
label_7:
    rax = rdi + 1;
    r14 = rsi;
    r12d = *(rdi);
    *((rsp + 8)) = rdx;
    *((rsp + 0x20)) = r8d;
    *((rsp + 0x10)) = rax;
    if (r12b == 0) {
        goto label_43;
    }
    ebx = r8d;
    r8d &= 5;
    r13 = rdi;
    *((rsp + 0x28)) = r8d;
    r15d = ecx;
    ebp &= 2;
    ebx &= 0x10;
label_1:
    if (ebx != 0) {
        rax = ctype_tolower_loc ();
        rax = *(rax);
        r12d = *((rax + r12*4));
    }
    eax = r12 - 0x21;
    if (al > 0x3b) {
        goto label_2;
    }
    eax = (int32_t) al;
    /* switch table (60 cases) at 0x40c708 */
    if (ebp != 0) {
        goto label_44;
    }
    r12d = *((r13 + 1));
    r15 = r13 + 2;
    *((rsp + 0x10)) = r15;
    if (r12b == 0) {
        goto label_4;
    }
    if (ebx != 0) {
        goto label_45;
    }
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
    eax = (int32_t) r12b;
label_29:
    edx = *(r14);
    r13 = *((rsp + 0x10));
label_8:
    if (edx != eax) {
        goto label_4;
    }
label_37:
    r15d = 0;
    goto label_25;
    esi = imp.__libc_start_main;
    if (esi == 0) {
        goto label_46;
    }
label_28:
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
    r12d = *(r14);
    if (r12b == 0x2e) {
        goto label_47;
    }
    if (r12b == 0x2f) {
        if ((*((rsp + 0x20)) & 1) != 0) {
            goto label_4;
        }
    }
label_26:
    eax = *((r13 + 1));
    if (al == 0x21) {
        goto label_48;
    }
    ecx = imp.__libc_start_main;
    if (ecx < 0) {
        if (al == 0x5e) {
            goto label_48;
        }
    }
    *((rsp + 0x2c)) = 0;
    r15 = *((rsp + 0x10));
label_24:
    if (ebx != 0) {
        rax = ctype_tolower_loc ();
        rax = *(rax);
        r12d = *((rax + r12*4));
    }
    eax = (int32_t) r12b;
    r13 = r15 + 1;
    r15d = *(r15);
    *((rsp + 0x24)) = eax;
    while (sil != 0x2d) {
        if (r12b == r15b) {
            goto label_49;
        }
        r15d = (int32_t) sil;
        r13 = rax;
label_0:
        if (r15b == 0x5d) {
            goto label_50;
        }
label_12:
        if (ebp == 0) {
            if (r15b == 0x5c) {
                goto label_51;
            }
        }
        if (r15b == 0x5b) {
            goto label_52;
        }
        if (r15b == 0) {
            goto label_53;
        }
        esi = *(r13);
label_10:
        if (ebx != 0) {
            *((rsp + 0x18)) = sil;
            rax = ctype_tolower_loc ();
            esi = *((rsp + 0x18));
            rax = *(rax);
            r15d = *((rax + r15*4));
        }
label_15:
        rax = r13 + 1;
    }
    edx = *((r13 + 1));
    if (dl == 0x5d) {
        goto label_54;
    }
    if (dl == 0) {
        goto label_54;
    }
    ecx = (int32_t) r15b;
label_14:
    rax = r13 + 2;
    if (ebp == 0) {
        if (dl == 0x5c) {
            goto label_55;
        }
    }
label_23:
    if (dl == 0) {
        goto label_4;
    }
    esi = *(rax);
    r13 = rax + 1;
    r15d = (int32_t) sil;
    if (ecx > *((rsp + 0x24))) {
        goto label_0;
    }
    if (r12b > dl) {
        goto label_0;
    }
label_19:
    r13 = rax;
label_22:
    rax = r13 + 1;
    do {
label_13:
        r8 = rax;
        ecx = esi;
        if (sil == 0) {
            goto label_4;
        }
        r15b = (sil == 0x5c) ? 1 : 0;
        dl = (ebp == 0) ? 1 : 0;
        r15b &= dl;
        if (r15b != 0) {
            goto label_56;
        }
        if (sil == 0x5b) {
            goto label_57;
        }
label_36:
        if (cl == 0x5d) {
            goto label_58;
        }
        r13 = r8;
        esi = *(r8);
        rax = r13 + 1;
    } while (1);
    if ((*((rsp + 0x20)) & 0x20) != 0) {
        goto label_59;
    }
label_34:
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
    eax = *(r14);
    if (al == 0x2f) {
        goto label_60;
    }
    al = (al == 0x2e) ? 1 : 0;
    r15b &= al;
    if (r15b != 0) {
        goto label_4;
    }
    r13 = *((rsp + 0x10));
    goto label_25;
    if (*((rsp + 0x28)) == 5) {
        goto label_61;
    }
label_2:
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
label_38:
    eax = *(r14);
    r13 = rax;
    if (ebx != 0) {
        rax = ctype_tolower_loc ();
        rax = *(rax);
        eax = *((rax + r13*4));
    }
    if (eax != r12d) {
        goto label_4;
    }
label_27:
    r13 = *((rsp + 0x10));
    r15d = 0;
label_25:
    r12d = *(r13);
    rax = r13 + 1;
    r14++;
    *((rsp + 0x10)) = rax;
    if (r12b != 0) {
        goto label_1;
    }
label_43:
    if (*((rsp + 8)) == r14) {
        goto label_32;
    }
    if ((*((rsp + 0x20)) & 8) != 0) {
        goto label_62;
    }
label_4:
    eax = 1;
label_3:
    return rax;
    if ((*((rsp + 0x20)) & 0x20) == 0) {
        goto label_2;
    }
    if (*((r13 + 1)) != 0x28) {
        goto label_2;
    }
    edi = (int32_t) r12b;
    r8d = (int32_t) r15b;
    eax = fcn_004068d0 (rdi, *((rsp + 0x10)), r14, *((rsp + 8)), r8, *((rsp + 0x20)));
    if (eax == 0xffffffff) {
        goto label_2;
    }
    goto label_3;
    eax = *((rsp + 0x20));
    eax &= 0x20;
    *((rsp + 0x24)) = eax;
    if (eax != 0) {
        goto label_63;
    }
label_35:
    if (r14 == *((rsp + 8))) {
        goto label_64;
    }
    if (*(r14) != 0x2e) {
        goto label_64;
    }
    if (r15b != 0) {
        goto label_4;
    }
label_64:
    r8d = *((r13 + 1));
    r9 = r13 + 2;
    if (r8b != 0x2a) {
        if (r8b != 0x3f) {
            goto label_65;
        }
    }
    r10d = *((rsp + 0x24));
    r13d = *((rsp + 0x20));
    r12b = (r10d != 0) ? 1 : 0;
    r13d &= 1;
    do {
label_5:
        if (*(r9) == 0x28) {
            if (r12b != 0) {
                goto label_66;
            }
        }
label_17:
        if (r8b == 0x3f) {
            goto label_67;
        }
label_9:
        rax = r9;
label_16:
        r8d = *(rax);
        r9 = rax + 1;
    } while (r8b == 0x3f);
    if (r8b == 0x2a) {
        goto label_5;
    }
label_65:
    ecx = *((rsp + 0x20));
    ecx &= 1;
    if (r8b == 0) {
        goto label_68;
    }
    r13 = *((rsp + 8));
    esi = ecx;
    *((rsp + 0x28)) = r8b;
    esi = -esi;
    *((rsp + 0x18)) = r9;
    esi &= 0x2f;
    *((rsp + 0x10)) = ecx;
    rdx -= r14;
    rax = fcn_00408aa0 (r14, esi, r13);
    r8d = *((rsp + 0x28));
    ecx = *((rsp + 0x10));
    r12 = rax;
    r9 = *((rsp + 0x18));
    if (rax == 0) {
        r12 = r13;
    }
    if (r8b == 0x5b) {
        goto label_69;
    }
    edi = *((rsp + 0x24));
    if (edi != 0) {
        goto label_70;
    }
label_31:
    if (r8b == 0x2f) {
        goto label_71;
    }
    if (ecx == 0) {
        goto label_72;
    }
label_40:
    r15d = (int32_t) r15b;
    if (r8b == 0x5c) {
        goto label_73;
    }
label_42:
    if (ebx != 0) {
        *((rsp + 0x18)) = r8b;
        *((rsp + 0x10)) = r9;
        rax = ctype_tolower_loc ();
        r8d = *((rsp + 0x18));
        r9 = *((rsp + 0x10));
        rax = *(rax);
        r8d = *((rax + r8*4));
    }
    rax = r9 - 1;
    *((rsp + 0x10)) = rax;
    if (r12 <= r14) {
        goto label_4;
    }
    ebp = (int32_t) r8b;
    r13d = r15d;
    goto label_74;
label_6:
    r14++;
    r13d = 0;
    if (r12 == r14) {
        goto label_4;
    }
label_74:
    eax = *(r14);
    r15d = eax;
    if (ebx != 0) {
        rax = ctype_tolower_loc ();
        edx = (int32_t) r15b;
        rax = *(rax);
        eax = *((rax + rdx*4));
    }
    if (eax != ebp) {
        goto label_6;
    }
    eax = fcn_00406e20 (*((rsp + 0x10)), r14, *((rsp + 8)), r13d, *((rsp + 0x20)));
    goto label_7;
    if (eax != 0) {
        goto label_6;
    }
label_32:
    eax = 0;
    goto label_3;
label_44:
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
    if (ebx == 0) {
        goto label_75;
    }
    rax = ctype_tolower_loc ();
    r13 = *((rsp + 0x10));
    rdx = *(rax);
    eax = 0x5c;
label_30:
    esi = *(r14);
    edx = *((rdx + rsi*4));
    goto label_8;
label_67:
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
    if (*(r14) == 0x2f) {
        goto label_76;
    }
label_18:
    r14++;
    goto label_9;
label_52:
    esi = *(r13);
    if (sil != 0x3a) {
        goto label_10;
    }
    r15 = r13;
    edx = 0;
    goto label_77;
label_11:
    esi = rax - 0x61;
    if (sil > 0x18) {
        goto label_78;
    }
    rdx++;
    r15 = rcx;
    *((rsp + rdx + 0x2f)) = al;
    if (rdx == 0x100) {
        goto label_4;
    }
label_77:
    eax = *((r15 + 1));
    rcx = r15 + 1;
    if (al != 0x3a) {
        goto label_11;
    }
    if (*((rcx + 1)) == 0x5d) {
        goto label_79;
    }
label_78:
    rax = r13 + 1;
    if (r12b == 0x5b) {
        goto label_49;
    }
    r13 = rax;
    r15d = 0x3a;
    goto label_12;
label_54:
    if (r12b == r15b) {
        goto label_13;
    }
    ecx = (int32_t) r15b;
    if (dl != 0x5d) {
        goto label_14;
    }
    esi = 0x5d;
    r13 = rax;
    r15d = 0x2d;
    goto label_10;
label_51:
    r15d = *(r13);
    if (r15b == 0) {
        goto label_4;
    }
    if (ebx != 0) {
        rax = ctype_tolower_loc ();
        rax = *(rax);
        r15d = *((rax + r15*4));
    }
    esi = *((r13 + 1));
    r13++;
    goto label_15;
label_66:
    rdi = r9;
    *((rsp + 0x10)) = r9;
    *((rsp + 0x18)) = r8b;
    rax = fcn_00405760 (rdi);
    r9 = *((rsp + 0x10));
    if (rax != r9) {
        goto label_16;
    }
    r8d = *((rsp + 0x18));
    goto label_17;
label_76:
    if (r13d == 0) {
        goto label_18;
    }
    goto label_4;
label_57:
    esi = *((r13 + 1));
    if (sil == 0x3a) {
        goto label_80;
    }
    if (sil == 0x3d) {
        goto label_81;
    }
    r13 += 2;
    if (sil != 0x2e) {
        goto label_19;
    }
    goto label_82;
label_21:
    if (*((rdx + 1)) == 0x5d) {
        goto label_83;
    }
label_20:
    r13 = rdx;
label_82:
    eax = *((r13 + 1));
    rdx = r13 + 1;
    if (al == 0) {
        goto label_4;
    }
    if (al != 0x2e) {
        goto label_20;
    }
    goto label_21;
label_56:
    if (*((r13 + 1)) == 0) {
        goto label_4;
    }
    esi = *((r13 + 2));
    r13 += 2;
    goto label_22;
label_55:
    rax = r13 + 3;
    edx = *((r13 + 2));
    goto label_23;
label_48:
    r15 = r13 + 2;
    *((rsp + 0x2c)) = 1;
    goto label_24;
label_61:
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
    if (*(r14) != 0x2f) {
        goto label_4;
    }
    r13 = *((rsp + 0x10));
    r15d = 1;
    goto label_25;
label_47:
    if (r15b == 0) {
        goto label_26;
    }
    goto label_4;
label_60:
    if ((*((rsp + 0x20)) & 1) == 0) {
        goto label_27;
    }
    goto label_4;
label_46:
    rax = getenv ("POSIXLY_CORRECT");
    eax -= eax;
    eax |= 1;
    *(0x0060f4d8) = eax;
    goto label_28;
label_75:
    eax = 0x5c;
    goto label_29;
label_45:
    rax = ctype_tolower_loc ();
    rdx = *(rax);
    eax = (int32_t) r12b;
    eax = *((rdx + rax*4));
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
    eax = (int32_t) al;
    r13 = r15;
    goto label_30;
label_70:
    eax = r8 - 0x21;
    if (al > 0x1f) {
        goto label_31;
    }
    edx = 0x80000401;
    if (((rdx >> rax) & 1) >= 0) {
        goto label_31;
    }
    if (*(r9) != 0x28) {
        goto label_31;
    }
label_69:
    edi = *((rsp + 0x20));
    rbx = r9 - 1;
    eax = edi;
    eax &= 0xfffffffb;
    if (ecx != 0) {
        eax = edi;
    }
    r13d = eax;
    if (r12 <= r14) {
        goto label_4;
    }
    rbp = *((rsp + 8));
label_33:
    ecx = (int32_t) r15b;
    eax = fcn_00406e20 (rbx, r14, rbp, rcx, r13d);
    goto label_7;
    if (eax == 0) {
        goto label_32;
    }
    r14++;
    r15d = 0;
    if (r12 != r14) {
        goto label_33;
    }
    goto label_4;
label_59:
    if (*((r13 + 1)) != 0x28) {
        goto label_34;
    }
    r8d = (int32_t) r15b;
    eax = fcn_004068d0 (0x3f, *((rsp + 0x10)), r14, *((rsp + 8)), r8, *((rsp + 0x20)));
    if (eax == 0xffffffff) {
        goto label_34;
    }
    goto label_3;
label_63:
    if (*((r13 + 1)) != 0x28) {
        goto label_35;
    }
    r8d = (int32_t) r15b;
    eax = fcn_004068d0 (0x2a, *((rsp + 0x10)), r14, *((rsp + 8)), r8, *((rsp + 0x20)));
    if (eax != 0xffffffff) {
        goto label_3;
    }
    goto label_35;
label_81:
    if (*((r13 + 2)) == 0) {
        goto label_4;
    }
    if (*((r13 + 3)) != 0x3d) {
        goto label_4;
    }
    if (*((r13 + 4)) != 0x5d) {
        goto label_4;
    }
    r8 = r13 + 6;
    ecx = *((r13 + 5));
    goto label_36;
label_50:
    edx = *((rsp + 0x2c));
    if (edx != 0) {
        goto label_37;
    }
    goto label_4;
label_53:
    r12d = 0x5b;
    goto label_38;
label_68:
    if (ecx == 0) {
        goto label_32;
    }
    if ((*((rsp + 0x20)) & 8) != 0) {
        goto label_32;
    }
    rdx -= r14;
    rax = fcn_00408aa0 (r14, 0x2f, *((rsp + 8)));
    al = (rax != 0) ? 1 : 0;
    eax = (int32_t) al;
    goto label_3;
label_49:
    esi = *(r13);
    goto label_13;
label_80:
    rdx = r13 + 2;
    esi = *((r13 + 2));
    r13 += 0x101;
    goto label_84;
label_39:
    esi -= 0x61;
    if (sil > 0x18) {
        goto label_85;
    }
    rdx++;
    esi = *(rdx);
    if (r13 == rdx) {
        goto label_4;
    }
label_84:
    if (sil != 0x3a) {
        goto label_39;
    }
    if (*((rdx + 1)) != 0x5d) {
        goto label_19;
    }
    r8 = rdx + 3;
    ecx = *((rdx + 2));
    goto label_36;
label_79:
    *((rsp + 0x18)) = rcx;
    *((rsp + rdx + 0x30)) = 0;
    rax = wctype (rsp + 0x30);
    rcx = *((rsp + 0x18));
    r13 = rax;
    if (rax == 0) {
        goto label_4;
    }
    edi = *(r14);
    *((rsp + 0x18)) = rcx;
    eax = btowc (rdi);
    eax = iswctype (eax, r13);
    rcx = *((rsp + 0x18));
    if (eax != 0) {
        goto label_86;
    }
    r13 = r15 + 4;
    r15d = *((rcx + 2));
    goto label_0;
    do {
label_72:
        goto label_40;
label_62:
        eax = 0;
        al = (*(r14) != 0x2f) ? 1 : 0;
        goto label_3;
label_83:
        r8 = r13 + 4;
        ecx = *((r13 + 3));
        goto label_36;
INVALID_JUMP;
    } while (ecx == 0);
    rax = *((rsp + 8));
    if (rax > r14) {
        goto label_87;
    }
    goto label_4;
label_41:
    r14++;
    if (rax == r14) {
        goto label_4;
    }
label_87:
    if (*(r14) != 0x2f) {
        goto label_41;
    }
    ecx >>= 2;
    ecx &= 1;
    eax = fcn_00406e20 (r9, r14 + 1, *((rsp + 8)), r8d, *((rsp + 0x20)));
    goto label_7;
    al = (eax != 0) ? 1 : 0;
    eax = (int32_t) al;
    goto label_3;
label_73:
    if (ebp != 0) {
        goto label_42;
    }
    r8d = *(r9);
    goto label_42;
label_58:
    eax = *((rsp + 0x2c));
    if (eax != 0) {
        goto label_4;
    }
    r13 = r8;
    goto label_25;
label_86:
    r13 = r15 + 3;
    esi = *((r15 + 3));
    rax = r15 + 4;
    goto label_13;
label_85:
    esi = 0x3a;
    r13 = rax;
    goto label_22;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x407910 */
#include <stdint.h>
 
uint64_t fcn_00407910 (char * * arg1, char * arg2, int64_t arg3) {
    int64_t var_54h;
    char * s;
    char * * src;
    mbstate_t * ps;
    int64_t var_28h;
    wchar_t * dst;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12d = edx;
    *((rbp - 0x48)) = rdi;
    *((rbp - 0x50)) = rsi;
    rax = ctype_get_mb_cur_max ();
    while (rax == 0) {
label_0:
        rbx = *((rbp - 0x50));
        strlen (*((rbp - 0x50)));
        ecx = r12d;
        ecx >>= 2;
        ecx &= 1;
        fcn_00406e20 (*((rbp - 0x48)), rbx, rbx + rax, ecx, r12d);
label_1:
        rsp = rbp - 0x28;
        return rax;
        *((rbp - 0x38)) = 0;
        rax = mbsrtowcs (0, rbp - 0x48, 0, rbp - 0x38);
        rax++;
        rbx = rax;
    }
    eax = mbsinit (rbp - 0x38);
    if (eax == 0) {
        goto label_2;
    }
    rax = mbsrtowcs (0, rbp - 0x50, 0, rbp - 0x38);
    rax++;
    r13 = rax;
    if (rax == 0) {
        goto label_0;
    }
    eax = mbsinit (rbp - 0x38);
    if (eax == 0) {
        goto label_3;
    }
    rax = rbx;
    rax += r13;
    if (rax < 0) {
        goto label_4;
    }
    rdx = 0x3fffffffffffffff;
    if (rax > rdx) {
        goto label_4;
    }
    rdi = rax*4;
    if (rax > 0x7cf) {
        goto label_5;
    }
    rdi += 0x17;
    rdi &= 0xfffffffffffffff0;
    r14 = rsp + 0xf;
    r14 &= 0xfffffffffffffff0;
    r15 = r14 + rbx*4;
    mbsrtowcs (r14, rbp - 0x48, rbx, rbp - 0x38);
    eax = mbsinit (rbp - 0x38);
    if (eax == 0) {
        goto label_6;
    }
    mbsrtowcs (r15, rbp - 0x50, r13, rbp - 0x38);
    ecx = r12d;
    ecx >>= 2;
    ecx &= 1;
    fcn_00405df0 (r14, r15, r15 + r13*4 - 4, ecx, r12d);
    goto label_1;
    do {
label_4:
        errno_location ();
        *(rax) = 0xc;
        eax = 0xffffffff;
        goto label_1;
label_5:
        rax = malloc (rdi);
        r14 = rax;
    } while (rax == 0);
    r15 = rax + rbx*4;
    mbsrtowcs (rax, rbp - 0x48, rbx, rbp - 0x38);
    eax = mbsinit (rbp - 0x38);
    if (eax != 0) {
        mbsrtowcs (r15, rbp - 0x50, r13, rbp - 0x38);
        ecx = r12d;
        ecx >>= 2;
        ecx &= 1;
        eax = fcn_00405df0 (r14, r15, r15 + r13*4 - 4, ecx, r12d);
        *((rbp - 0x54)) = eax;
        free (r14);
        eax = *((rbp - 0x54));
        goto label_1;
    }
label_6:
    assert_fail ("mbsinit (&ps)", "lib/fnmatch.c", 0x147, "gnu_fnmatch");
label_3:
    assert_fail ("mbsinit (&ps)", "lib/fnmatch.c", 0x12d, "gnu_fnmatch");
label_2:
    return assert_fail ("mbsinit (&ps)", "lib/fnmatch.c", 0x129, "gnu_fnmatch");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x407b50 */
#include <stdint.h>
 
uint64_t fcn_00407b50 (int64_t arg1, int64_t arg2, FILE * stream) {
    rdi = arg1;
    rsi = arg2;
    rdx = stream;
    r12 = rsi;
    rax = freopen (rdi, rsi, rdx);
    rbx = rax;
    if (rax == 0) {
        goto label_0;
    }
    if (rbp == 0) {
        goto label_0;
    }
    eax = fileno (rax);
    esi = eax;
    edi = eax;
    r13d = eax;
    eax = dup2 ();
    while (*(rax) != 9) {
label_0:
        rax = rbx;
        return rax;
        rax = errno_location ();
    }
    eax = 0;
    eax = open ("/dev/null", 0x80000, rdx);
    r14d = eax;
    if (r13d != eax) {
        edi = eax;
        esi = r13d;
        eax = dup2 ();
        edi = r14d;
        if (eax < 0) {
            goto label_1;
        }
        close (rdi);
    }
    rdx = rbx;
    rsi = r12;
    rdi = rbp;
invalid_funccall(); //    void (*0x401aa0)() ();
label_1:
    close (rdi);
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x407bf0 */
#include <stdint.h>
 
int64_t fcn_00407bf0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x401c70)() ();
        rax = *((rdi + 0x20));
    }
    if (*((rdi + 0x48)) != 0) {
        goto label_0;
    }
    r12d = edx;
    rbx = rdi;
    eax = fileno (rdi);
    edx = r12d;
    rsi = rbp;
    edi = eax;
    rax = lseek ();
    if (rax != -1) {
        *(rbx) &= 0xffffffef;
        *((rbx + 0x90)) = rax;
        eax = 0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x407c50 */
#include <stdint.h>
 
uint64_t fcn_00407c50 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r11 = rdi + 8;
    r12d = *((rsi + 0x2c));
    ebp = *(rsi);
    rbx = *((rsi + 0x30));
    r9d = r12d;
    r10d = ebp;
    r8 = rbx;
label_1:
    if (r10d <= r8d) {
        goto label_2;
    }
label_0:
    if (r9d >= r8d) {
        goto label_2;
    }
    r14d = r10d;
    edx = r8d;
    r14d -= r8d;
    edx -= r9d;
    if (r14d <= edx) {
        goto label_3;
    }
    rcx = (int64_t) r9d;
    r10d -= edx;
    edx--;
    rdx += rcx;
    rax = rdi + rcx*8;
    r13 = r11 + rdx*8;
    rdx = (int64_t) r10d;
    rdx -= rcx;
    do {
        rcx = *(rax);
        r14 = *((rax + rdx*8));
        *(rax) = r14;
        *((rax + rdx*8)) = rcx;
        rax += 8;
    } while (r13 != rax);
    if (r10d > r8d) {
        goto label_0;
    }
label_2:
    eax = ebp;
    *((rsi + 0x30)) = ebp;
    eax -= r8d;
    r12d += eax;
    *((rsi + 0x2c)) = r12d;
    r12 = rbx;
    r13 = rbx;
    r14 = rbx;
    r15 = rbx;
    return rax;
label_3:
    rdx = (int64_t) r9d;
    ecx = r14 - 1;
    rcx += rdx;
    rax = rdi + rdx*8;
    r13 = r11 + rcx*8;
    rcx = rbx;
    rcx -= rdx;
    rdx = rcx;
    do {
        rcx = *(rax);
        r15 = *((rax + rdx*8));
        *(rax) = r15;
        *((rax + rdx*8)) = rcx;
        rax += 8;
    } while (rax != r13);
    r9d += r14d;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x407d30 */
#include <stdint.h>
 
int64_t fcn_00407d30 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_ch;
    int64_t var_10h;
    void * ptr;
    int64_t var_20h;
    int64_t var_28h;
    char * s;
    int64_t var_38h;
    int64_t c;
    int64_t var_40h;
    int64_t var_44h;
    void * var_48h;
    size_t nmeb;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rax = *((rsp + 0x90));
    *((rsp + 0x40)) = edi;
    *((rsp + 0x28)) = rsi;
    r14 = *((rax + 0x20));
    *((rsp + 0x30)) = rdx;
    *(rsp) = rcx;
    eax = *(r14);
    *((rsp + 0x20)) = r8;
    *((rsp + 0xc)) = r9d;
    *((rsp + 0x3f)) = al;
    if (al == 0x3d) {
        goto label_11;
    }
    if (al == 0) {
        goto label_11;
    }
    do {
        rbp++;
        eax = *(rbp);
        if (al == 0) {
            goto label_12;
        }
    } while (al != 0x3d);
label_12:
    r13 = rbp;
    r13 -= r14;
label_6:
    rbx = *(rsp);
    r12d = 0;
    rax = *(rbx);
    *((rsp + 0x10)) = rax;
    r15 = rax;
    if (rax != 0) {
        goto label_13;
    }
    goto label_14;
    do {
        r12 = (int64_t) r8d;
label_13:
        eax = strncmp (r15, r14, r13);
        if (eax == 0) {
            rax = strlen (r15);
            if (rax == r13) {
                goto label_15;
            }
        }
        rbx += 0x20;
        r15 = *(rbx);
        r8d = r12 + 1;
    } while (r15 != 0);
    rcx = *(rsp);
    *((rsp + 0x4c)) = r8d;
    r9d = 0;
    ebx = 0;
    *((rsp + 0x44)) = 0xffffffff;
    r15 = r9;
    *((rsp + 0x38)) = 0;
    *((rsp + 0x48)) = 0;
    *((rsp + 0x18)) = 0;
    *((rsp + 0x10)) = rbp;
    do {
        eax = strncmp (*((rsp + 0x10)), r14, r13);
        if (eax == 0) {
            if (rbx == 0) {
                goto label_16;
            }
            eax = *((rsp + 0xc));
            if (eax == 0) {
                goto label_17;
            }
label_0:
            r11d = *((rsp + 0x38));
            if (r11d != 0) {
                goto label_1;
            }
            r10d = *((rsp + 0x98));
            if (r10d == 0) {
                goto label_18;
            }
            if (*((rsp + 0x18)) == 0) {
                goto label_19;
            }
label_3:
            rax = *((rsp + 0x18));
            *((rax + r15)) = 1;
        }
label_1:
        rbp += 0x20;
        rdi = *(rbp);
        r15++;
    } while (rdi != 0);
    rbp = *((rsp + 0x10));
    if (*((rsp + 0x18)) != 0) {
        goto label_20;
    }
    r9d = *((rsp + 0x38));
    if (r9d != 0) {
        goto label_20;
    }
    if (rbx == 0) {
label_14:
        eax = *((rsp + 0xc));
        if (eax != 0) {
            rax = *((rsp + 0x90));
            rcx = *((rsp + 0x28));
            rax = *(rax);
            rax = *((rcx + rax*8));
            if (*((rax + 1)) == 0x2d) {
                goto label_21;
            }
            esi = *((rsp + 0x3f));
            rax = strchr (*((rsp + 0x30)), rsi);
            rdx = rax;
            eax = 0xffffffff;
            if (rdx != 0) {
                goto label_5;
            }
        }
label_21:
        ecx = *((rsp + 0x98));
        if (ecx != 0) {
            goto label_22;
        }
label_4:
        rax = *((rsp + 0x90));
        *((rax + 0x20)) = 0;
        *(rax)++;
        *((rax + 8)) = 0;
        eax = 0x3f;
        return rax;
    }
    r12d = *((rsp + 0x44));
label_15:
    rax = *((rsp + 0x90));
    rcx = *((rsp + 0x90));
    edx = *(rax);
    *((rcx + 0x20)) = 0;
    eax = rdx + 1;
    *(rcx) = eax;
    ecx = *((rbx + 8));
    if (*(rbp) != 0) {
        goto label_23;
    }
    if (ecx == 1) {
        goto label_24;
    }
label_2:
    rax = *((rsp + 0x20));
    if (rax != 0) {
        *(rax) = r12d;
    }
    rdx = *((rbx + 0x10));
    eax = *((rbx + 0x18));
    if (rdx != 0) {
        *(rdx) = eax;
        eax = 0;
    }
label_5:
    return rax;
label_17:
    eax = *((rbp + 8));
    if (*((rbx + 8)) != eax) {
        goto label_0;
    }
    rax = *((rbp + 0x10));
    if (*((rbx + 0x10)) != rax) {
        goto label_0;
    }
    eax = *((rbp + 0x18));
    if (*((rbx + 0x18)) != eax) {
        goto label_0;
    }
    goto label_1;
label_23:
    if (ecx == 0) {
        goto label_25;
    }
    rax = *((rsp + 0x90));
    rbp++;
    *((rax + 0x10)) = rbp;
    goto label_2;
label_16:
    *((rsp + 0x44)) = r15d;
    rbx = rbp;
    goto label_1;
label_18:
    *((rsp + 0x38)) = 1;
    if (*((rsp + 0x18)) == 0) {
        goto label_1;
    }
    goto label_3;
label_22:
    rax = *((rsp + 0x28));
    edx = 5;
    rbx = *(rax);
    rax = dcgettext (0, "%s: unrecognized option '%s%s'\n");
    r8 = *((rsp + 0xa0));
    r9 = r14;
    rdi = stderr;
    rdx = rax;
    rcx = rbx;
    esi = 1;
    eax = 0;
    fprintf_chk ();
    goto label_4;
label_20:
    r8d = *((rsp + 0x98));
    if (r8d != 0) {
        edi = *((rsp + 0x38));
        if (edi == 0) {
            goto label_26;
        }
        rax = *((rsp + 0x28));
        edx = 5;
        rbx = *(rax);
        rax = dcgettext (0, "%s: option '%s%s' is ambiguous\n");
        r8 = *((rsp + 0xa0));
        r9 = r14;
        rdi = stderr;
        rdx = rax;
        rcx = rbx;
        esi = 1;
        eax = 0;
        fprintf_chk ();
        rax = *((rsp + 0x90));
        r14 = *((rax + 0x20));
    }
label_9:
    esi = *((rsp + 0x48));
    if (esi != 0) {
        goto label_27;
    }
label_7:
    rax = strlen (r14);
    r14 += rax;
    rax = *((rsp + 0x90));
    *((rax + 0x20)) = r14;
    *(rax)++;
    *((rax + 8)) = 0;
    eax = 0x3f;
    goto label_5;
label_24:
    if (eax >= *((rsp + 0x40))) {
        goto label_28;
    }
    rcx = *((rsp + 0x90));
    edx += 2;
    rax = (int64_t) eax;
    *(rcx) = edx;
    rcx = *((rsp + 0x28));
    rax = *((rcx + rax*8));
    rcx = *((rsp + 0x90));
    *((rcx + 0x10)) = rax;
    goto label_2;
label_11:
    r13d = 0;
    goto label_6;
label_25:
    edx = *((rsp + 0x98));
    while (1) {
        eax = *((rbx + 0x18));
        rcx = *((rsp + 0x90));
        *((rcx + 8)) = eax;
        eax = 0x3f;
        goto label_5;
label_19:
        rdi = *((rsp + 0x4c));
        rax = calloc (rdi, 1);
        *((rsp + 0x18)) = rax;
        if (rax == 0) {
            goto label_29;
        }
        rax = *((rsp + 0x44));
        rcx = *((rsp + 0x18));
        *((rsp + 0x48)) = 1;
        *((rcx + rax)) = 1;
        goto label_3;
        rax = *((rsp + 0x28));
        r12 = *(rbx);
        edx = 5;
        rbp = *(rax);
        rax = dcgettext (0, "%s: option '%s%s' doesn't allow an argument\n");
        r8 = *((rsp + 0xa0));
        r9 = r12;
        rdi = stderr;
        rdx = rax;
        rcx = rbp;
        esi = 1;
        eax = 0;
        fprintf_chk ();
    }
label_27:
    free (*((rsp + 0x18)));
    goto label_7;
label_28:
    eax = *((rsp + 0x98));
    if (eax != 0) {
        goto label_30;
    }
label_10:
    eax = *((rbx + 0x18));
    rcx = *((rsp + 0x90));
    *((rcx + 8)) = eax;
    rax = *((rsp + 0x30));
    al = (*(rax) != 0x3a) ? 1 : 0;
    eax = (int32_t) al;
    eax = rax * 5;
    goto label_5;
label_26:
    rdi = stderr;
    flockfile ();
    rax = *((rsp + 0x90));
    edx = 5;
    rbx = *((rax + 0x20));
    rax = *((rsp + 0x28));
    rbp = *(rax);
    rax = dcgettext (0, "%s: option '%s%s' is ambiguous; possibilities:");
    rdi = stderr;
    r9 = rbx;
    r8 = *((rsp + 0xa0));
    rcx = rbp;
    rdx = rax;
    esi = 1;
    eax = 0;
    fprintf_chk ();
    rax = *((rsp + 0x18));
    rdi = stderr;
    rbx = *(rsp);
    r12 = rax + r12 + 1;
    while (*(rbp) == 0) {
label_8:
        rbp++;
        rbx += 0x20;
        if (r12 == rbp) {
            goto label_31;
        }
    }
    r8 = *(rbx);
    edx = " '%s%s'";
    esi = 1;
    eax = 0;
    rcx = *((rsp + 0xa0));
    fprintf_chk ();
    rdi = stderr;
    goto label_8;
label_31:
    fputc (0xa, rdi);
    rdi = stderr;
    funlockfile ();
    rax = *((rsp + 0x90));
    r14 = *((rax + 0x20));
    goto label_9;
label_30:
    rax = *((rsp + 0x28));
    r12 = *(rbx);
    edx = 5;
    rbp = *(rax);
    rax = dcgettext (0, "%s: option '%s%s' requires an argument\n");
    r8 = *((rsp + 0xa0));
    r9 = r12;
    rdi = stderr;
    rdx = rax;
    rcx = rbp;
    esi = 1;
    eax = 0;
    fprintf_chk ();
    goto label_10;
label_29:
    *((rsp + 0x38)) = 1;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408350 */
#include <stdint.h>
 
uint64_t fcn_00408350 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rbx = *((rsp + 0x70));
    *((rsp + 8)) = rcx;
    *((rsp + 0x10)) = r8;
    r13d = *((rbx + 4));
    if (edi <= 0) {
        goto label_16;
    }
    eax = *(rbx);
    r12 = rsi;
    r15 = rdx;
    *((rbx + 0x10)) = 0;
    if (eax == 0) {
        goto label_17;
    }
    esi = *((rbx + 0x18));
    if (esi == 0) {
label_1:
        *((rbx + 0x30)) = eax;
        *((rbx + 0x2c)) = eax;
        *((rbx + 0x20)) = 0;
        eax = *(r15);
        if (al == 0x2d) {
            goto label_18;
        }
        if (al == 0x2b) {
            goto label_19;
        }
        ecx = *((rsp + 0x78));
        edx = 0;
        if (ecx == 0) {
            goto label_20;
        }
label_8:
        *((rbx + 0x28)) = 0;
        goto label_11;
    }
    eax = *(rdx);
    rdx = *((rbx + 0x20));
    ecx = rax - 0x2b;
    ecx &= 0xfd;
    if (ecx != 0) {
        goto label_21;
    }
    eax = *((r15 + 1));
    r15++;
    eax = 0;
    if (al == 0x3a) {
        r13d = eax;
    }
    if (rdx != 0) {
        goto label_22;
    }
    do {
label_0:
        eax = *(rbx);
        if (*((rbx + 0x30)) > eax) {
            *((rbx + 0x30)) = eax;
        }
        if (eax < *((rbx + 0x2c))) {
            *((rbx + 0x2c)) = eax;
        }
        if (*((rbx + 0x28)) == 1) {
            goto label_23;
        }
label_4:
        if (ebp == eax) {
            goto label_24;
        }
        rdx = (int64_t) eax;
        ecx = 3;
        edi = 0x40ca11;
        r14 = *((r12 + rdx*8));
        rsi = *((r12 + rdx*8));
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        cl = (ebp > eax) ? 1 : 0;
        if (cl != 0) {
            goto label_25;
        }
        edx = *((rbx + 0x2c));
        ecx = *((rbx + 0x30));
        eax++;
        *(rbx) = eax;
        if (edx == ecx) {
            goto label_26;
        }
        if (eax != ecx) {
            fcn_00407c50 (r12, rbx);
            edx = *((rbx + 0x2c));
        }
label_12:
        *((rbx + 0x30)) = ebp;
        *(rbx) = ebp;
        goto label_27;
label_18:
        *((rbx + 0x28)) = 2;
        r15++;
        edx = 0;
label_11:
        *((rbx + 0x18)) = 1;
        eax = *(r15);
label_21:
        eax = 0;
        if (al == 0x3a) {
            r13d = eax;
        }
    } while (rdx == 0);
label_22:
    if (*(rdx) == 0) {
        goto label_0;
    }
label_6:
    r8 = rdx + 1;
    *((rsp + 0x20)) = rdx;
    *((rbx + 0x20)) = r8;
    r14d = *(rdx);
    *((rsp + 0x28)) = r8;
    *((rsp + 0x1c)) = r14b;
    rax = strchr (r15, r14d);
    rdx = *((rsp + 0x20));
    ecx = *((rsp + 0x1c));
    r8 = *((rsp + 0x28));
    if (*((rdx + 1)) == 0) {
        *(rbx)++;
    }
    ecx -= 0x3a;
    if (cl <= 1) {
        goto label_28;
    }
    if (rax == 0) {
        goto label_28;
    }
    ecx = *((rax + 1));
    if (*(rax) == 0x57) {
        goto label_29;
    }
label_7:
    if (cl == 0x3a) {
        goto label_30;
    }
    do {
label_2:
        eax = r14d;
        return rax;
label_25:
        if (*(r14) == 0x2d) {
            goto label_31;
        }
label_5:
        edx = *((rbx + 0x28));
        if (edx == 0) {
            goto label_16;
        }
        eax++;
        *((rbx + 0x10)) = r14;
        r14d = 1;
        *(rbx) = eax;
    } while (1);
label_17:
    *(rbx) = 1;
    eax = 1;
    goto label_1;
label_24:
    ebp = *((rbx + 0x30));
    edx = *((rbx + 0x2c));
label_27:
    if (edx != ebp) {
        *(rbx) = edx;
    }
label_16:
    r14d = 0xffffffff;
    goto label_2;
label_23:
    edx = *((rbx + 0x30));
    if (*((rbx + 0x2c)) == edx) {
        goto label_32;
    }
    if (eax != edx) {
        *((rsp + 0x1c)) = r9d;
        fcn_00407c50 (r12, rbx);
        edx = *(rbx);
        r9d = *((rsp + 0x1c));
    }
label_9:
    if (ebp <= edx) {
        goto label_33;
    }
    rax = (int64_t) edx;
    while (*(rcx) != 0x2d) {
label_3:
        edx = rsi + 1;
        rax++;
        *(rbx) = edx;
        if (ebp <= eax) {
            goto label_33;
        }
        rcx = *((r12 + rax*8));
        esi = eax;
        edx = eax;
    }
    if (*((rcx + 1)) == 0) {
        goto label_3;
    }
    eax = *(rbx);
label_10:
    *((rbx + 0x30)) = edx;
    goto label_4;
label_31:
    ecx = *((r14 + 1));
    if (cl == 0) {
        goto label_5;
    }
    if (*((rsp + 8)) == 0) {
        goto label_34;
    }
    if (cl == 0x2d) {
        goto label_35;
    }
    if (r9d == 0) {
        goto label_34;
    }
    if (*((r14 + 2)) == 0) {
        esi = (int32_t) cl;
        *((rsp + 0x1c)) = r9d;
        rax = strchr (r15, rsi);
        r9d = *((rsp + 0x1c));
        if (rax != 0) {
            goto label_34;
        }
    }
    rdx = r14 + 1;
    *((rbx + 0x20)) = rdx;
    eax = fcn_00407d30 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
    r14d = eax;
    if (eax != 0xffffffff) {
        goto label_2;
    }
    rax = *(rbx);
    r14 = *((r12 + rax*8));
label_34:
    rdx = r14 + 1;
    goto label_6;
label_29:
    if (*((rsp + 8)) == 0) {
        goto label_7;
    }
    if (cl != 0x3b) {
        goto label_7;
    }
    if (*((rdx + 1)) == 0) {
        rax = *(rbx);
        if (eax == ebp) {
            goto label_36;
        }
        r8 = *((r12 + rax*8));
    }
    *((rbx + 0x20)) = r8;
    *((rbx + 0x10)) = 0;
label_14:
    eax = fcn_00407d30 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
    r14d = eax;
    goto label_2;
label_20:
    *((rsp + 0x1c)) = r9d;
    rax = getenv ("POSIXLY_CORRECT");
    r9d = *((rsp + 0x1c));
    if (rax == 0) {
        goto label_37;
    }
    rdx = *((rbx + 0x20));
    goto label_8;
label_30:
    edx = *((rdx + 1));
    if (*((rax + 2)) == 0x3a) {
        goto label_38;
    }
    rax = *(rbx);
    if (dl != 0) {
        goto label_39;
    }
    if (ebp == eax) {
        goto label_40;
    }
    edx = rax + 1;
    rax = *((r12 + rax*8));
    *(rbx) = edx;
    *((rbx + 0x10)) = rax;
label_13:
    *((rbx + 0x20)) = 0;
    goto label_2;
label_32:
    if (eax == edx) {
        goto label_9;
    }
    *((rbx + 0x2c)) = eax;
    edx = eax;
    goto label_9;
label_33:
    eax = edx;
    goto label_10;
label_19:
    *((rbx + 0x28)) = 0;
    r15++;
    edx = 0;
    goto label_11;
label_28:
    while (1) {
        *((rbx + 8)) = r14d;
        r14d = 0x3f;
        goto label_2;
label_26:
        *((rbx + 0x2c)) = eax;
        edx = eax;
        goto label_12;
label_39:
        eax++;
        *((rbx + 0x10)) = r8;
        *(rbx) = eax;
        goto label_13;
        rbp = *(r12);
        edx = 5;
        rax = dcgettext (0, "%s: invalid option -- '%c'\n");
        rdi = stderr;
        r8d = r14d;
        esi = 1;
        rdx = rax;
        rcx = rbp;
        eax = 0;
        fprintf_chk ();
    }
label_38:
    if (dl != 0) {
        *((rbx + 0x10)) = r8;
        *(rbx)++;
        goto label_13;
label_37:
        *((rbx + 0x28)) = 1;
        rdx = *((rbx + 0x20));
        goto label_11;
    }
    *((rbx + 0x10)) = 0;
    goto label_13;
label_40:
    while (1) {
        *((rbx + 8)) = r14d;
        r14d = 0;
        r14b = (*(r15) != 0x3a) ? 1 : 0;
        r14d = r14 * 5;
        goto label_13;
label_35:
        rdx = r14 + 2;
        *((rbx + 0x20)) = rdx;
        goto label_14;
label_36:
        if (r13d != 0) {
            goto label_41;
        }
label_15:
        *((rbx + 8)) = r14d;
        r14d = 0;
        r14b = (*(r15) != 0x3a) ? 1 : 0;
        r14d = r14 * 5;
        goto label_2;
        rbp = *(r12);
        edx = 5;
        rax = dcgettext (0, "%s: option requires an argument -- '%c'\n");
        rdi = stderr;
        r8d = r14d;
        esi = 1;
        rdx = rax;
        rcx = rbp;
        eax = 0;
        fprintf_chk ();
    }
label_41:
    rbp = *(r12);
    edx = 5;
    rax = dcgettext (0, "%s: option requires an argument -- '%c'\n");
    rdi = stderr;
    r8d = r14d;
    esi = 1;
    rdx = rax;
    rcx = rbp;
    eax = 0;
    fprintf_chk ();
    goto label_15;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408920 */
#include <stdint.h>
 
int32_t fcn_00408920 (int64_t arg_10h) {
    eax = *(0x0060f2bc);
    *(0x0060f4e0) = eax;
    eax = *(0x0060f2b8);
    *(0x0060f4e4) = eax;
    eax = *((rsp + 0x10));
    fcn_00408350 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0060f2bc) = edx;
    rdx = imp.__libc_start_main;
    *(0x0060f520) = rdx;
    edx = imp.__libc_start_main;
    *(0x0060f2b4) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x4089a0 */
#include <stdint.h>
 
void fcn_004089a0 (void) {
    r9d = 0;
    fcn_00408920 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408a20 */
#include <stdint.h>
 
uint64_t fcn_00408a20 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
    int64_t var_ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = ps;
    if (rsi == 0) {
        goto label_1;
    }
    rbx = 0xfffffffffffffffe;
    if (rdx == 0) {
        goto label_0;
    }
    r12 = rdi;
    while (1) {
        rax = mbrtowc (r12, rbp, rdx, rcx);
        rbx = rax;
        if (rax > 0xfffffffffffffffd) {
            goto label_2;
        }
label_0:
        rax = rbx;
        return rax;
label_1:
        edx = 1;
        r12 = rsp + 0xc;
    }
label_2:
    al = fcn_00408f40 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408aa0 */
#include <stdint.h>
 
int64_t fcn_00408aa0 (uint32_t arg1, int64_t arg2, size_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r8d = esi;
    if (rdx == 0) {
        goto label_0;
    }
    if ((dil & 7) == 0) {
        goto label_1;
    }
    if (sil != *(rdi)) {
        goto label_2;
    }
    goto label_3;
    do {
        if ((dil & 7) == 0) {
            goto label_1;
        }
        if (*(rdi) == r8b) {
            goto label_3;
        }
label_2:
        rdi++;
        rdx--;
    } while (rdx != 0);
label_0:
    eax = 0;
    return eax;
label_1:
    r9d = esi;
    eax = (int32_t) sil;
    r9d <<= 8;
    r9d = (int32_t) r9w;
    r9d |= eax;
    r9 = (int64_t) r9d;
    rax = r9;
    rax <<= 0x10;
    r9 |= rax;
    rax = r9;
    rax <<= 0x20;
    r9 |= rax;
    if (rdx <= 7) {
        goto label_4;
    }
    r11 = 0xfefefefefefefeff;
    rax = *(rdi);
    r10 = 0x8080808080808080;
    rax ^= r9;
    rcx = rax + r11;
    rax = ~rax;
    rax &= rcx;
    if ((rax & r10) == 0) {
        goto label_5;
    }
    goto label_4;
    do {
        rax = *(rdi);
        rax ^= r9;
        rcx = rax + r11;
        rax = ~rax;
        rax &= rcx;
        if ((rax & r10) != 0) {
            goto label_4;
        }
label_5:
        rdx -= 8;
        rdi += 8;
    } while (rdx > 7);
    if (rdx == 0) {
        goto label_0;
    }
label_4:
    if (sil == *(rdi)) {
        goto label_3;
    }
    rcx = rdi + 1;
    rdi += rdx;
    while (rcx != rdi) {
        rcx++;
        if (*((rcx - 1)) == r8b) {
            goto label_6;
        }
        rax = rcx;
    }
    goto label_0;
label_3:
    rax = rdi;
label_6:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408bf0 */
#include <stdint.h>
 
int64_t fcn_00408bf0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 0x38));
    if ((*((rdi + 0x50)) & 1) != 0) {
        rdi = *((rdi + 0x48));
invalid_funccall(); //        rax = void (*rax)() ();
    }
    rdi = rsi;
invalid_funccall(); //    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408c10 */
#include <stdint.h>
 
int64_t fcn_00408c10 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 0x40));
    if ((*((rdi + 0x50)) & 1) != 0) {
        rdi = *((rdi + 0x48));
invalid_funccall(); //        rax = void (*rax)() ();
    }
    rdi = rsi;
invalid_funccall(); //    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408cc0 */
#include <stdint.h>
 
uint64_t obstack_begin (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
label_0:
    rbx = rdi;
    if (rdx == 0) {
        goto label_1;
    }
    r12 = rdx - 1;
    do {
        eax = 0xfe0;
        *((rbx + 0x30)) = r12;
        rdi = rbx;
        if (rsi == 0) {
            rsi = rax;
        }
        *(rbx) = rsi;
        rax = fcn_00408bf0 (rdi, rsi);
        *((rbx + 8)) = rax;
        if (rax == 0) {
            goto label_2;
        }
        rdx = rax + r12 + 0x10;
        rbp = -rbp;
        rbp &= rdx;
        rdx = *(rbx);
        *((rbx + 0x10)) = rbp;
        rdx += rax;
        *((rbx + 0x18)) = rbp;
        *(rax) = rdx;
        *((rbx + 0x20)) = rdx;
        *((rax + 8)) = 0;
        eax = 1;
        *((rbx + 0x50)) &= 0xf9;
        return rax;
label_1:
        r12d = 0xf;
    } while (1);
label_2:
invalid_funccall(); //    rax = uint64_t (*obstack_alloc_failed_handler)() ();
    *((rdi + 0x50)) &= 0xfe;
    *((rdi + 0x38)) = rcx;
    *((rdi + 0x40)) = r8;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408ce0 */
#include <stdint.h>
 
void obstack_begin_1 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    *((rdi + 0x50)) |= 1;
    *((rdi + 0x38)) = rcx;
    *((rdi + 0x40)) = r8;
    *((rdi + 0x48)) = r9;
invalid_funccall(); //    return void (*0x408c30)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408d00 */
#include <stdint.h>
 
uint64_t obstack_newchunk (int64_t arg_8h, int64_t arg_10h, uint32_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    eax = 0;
    r13 = *((rdi + 0x18));
    r13 -= *((rdi + 0x10));
    rbp = *((rdi + 8));
    rsi += r13;
    rdx = r13;
    al = (rsi < 0) ? 1 : 0;
    rsi += *((rdi + 0x30));
    cl = (rsi < 0) ? 1 : 0;
    rdx >>= 3;
    rbx = rsi + rdx + 0x64;
    if (*(rdi) >= rsi) {
        rsi = *(rdi);
    }
    if (rsi >= rbx) {
        rbx = rsi;
    }
    if (rax != 0) {
        goto label_0;
    }
    ecx = (int32_t) cl;
    if (rcx != 0) {
        goto label_0;
    }
    r12 = rdi;
    rax = fcn_00408bf0 (rdi, rbx);
    r14 = rax;
    if (rax == 0) {
        goto label_0;
    }
    rsi = rax + rbx;
    *((r12 + 8)) = rax;
    *((rax + 8)) = rbp;
    *((r12 + 0x20)) = rsi;
    *(rax) = rsi;
    rax = *((r12 + 0x30));
    rbx = r14 + rax + 0x10;
    rax = ~rax;
    rbx &= rax;
    memcpy (rbx, *((r12 + 0x10)), r13);
    if ((*((r12 + 0x50)) & 2) != 0) {
        goto label_1;
    }
    rax = *((r12 + 0x30));
    rdx = rbp + rax + 0x10;
    rax = ~rax;
    rax &= rdx;
    while (1) {
label_1:
        r13 += rbx;
        *((r12 + 0x10)) = rbx;
        *((r12 + 0x18)) = r13;
        *((r12 + 0x50)) &= 0xfd;
        return rax;
        rax = *((rbp + 8));
        *((r14 + 8)) = rax;
        fcn_00408c10 (r12, rbp);
    }
label_0:
invalid_funccall(); //    uint64_t (*obstack_alloc_failed_handler)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408e00 */
#include <stdint.h>
 
int64_t obstack_allocated_p (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 8));
    if (rax == 0) {
        goto label_0;
    }
    do {
        if (rsi > rax) {
            if (*(rax) >= rsi) {
                goto label_1;
            }
        }
        rax = *((rax + 8));
    } while (rax != 0);
    eax = 0;
    return rax;
label_1:
    eax = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408e40 */
#include <stdint.h>
 
int64_t obstack_free (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
label_0:
    abort ();
    rsi = *((rdi + 8));
    rbx = rdi;
    if (rsi == 0) {
        goto label_1;
    }
    do {
        if (rsi < rbp) {
            rax = *(rsi);
            if (rax >= rbp) {
                goto label_2;
            }
        }
        r12 = *((rsi + 8));
        rax = fcn_00408c10 (rbx, rsi);
        *((rbx + 0x50)) |= 2;
        rsi = r12;
    } while (r12 != 0);
label_1:
    if (rbp != 0) {
        goto label_0;
    }
    return rax;
label_2:
    *((rbx + 0x18)) = rbp;
    *((rbx + 0x10)) = rbp;
    *((rbx + 0x20)) = rax;
    *((rbx + 8)) = rsi;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408eb0 */
#include <stdint.h>
 
int64_t obstack_memory_used (int64_t arg1) {
    rdi = arg1;
    rdx = *((rdi + 8));
    eax = 0;
    if (rdx == 0) {
        goto label_0;
    }
    do {
        rcx = *(rdx);
        rcx -= rdx;
        rdx = *((rdx + 8));
        rax += rcx;
    } while (rdx != 0);
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408ee0 */
#include <stdint.h>
 
uint64_t fcn_00408ee0 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_004055a0 (rbp);
    if (ebx != 0) {
        goto label_1;
    }
    if (eax == 0) {
        goto label_0;
    }
    if (r12 != 0) {
        goto label_2;
    }
    rax = errno_location ();
    al = (*(rax) != 9) ? 1 : 0;
    eax = (int32_t) al;
    eax = -eax;
    do {
label_0:
        return rax;
label_1:
        if (eax != 0) {
            goto label_2;
        }
        errno_location ();
        *(rax) = 0;
        eax = 0xffffffff;
    } while (1);
label_2:
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408f40 */
#include <stdint.h>
 
uint64_t fcn_00408f40 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x4097f2;
        rsi = rdx;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        cl = (rdx > 0) ? 1 : 0;
        eax = 0;
        if (cl != 0) {
            goto label_0;
        }
    }
    return rax;
label_0:
    edi = "POSIX";
    ecx = 6;
    rsi = rdx;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (cl > 0) ? 1 : 0;
    al = (al != 0) ? 1 : 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x408fa0 */
#include <stdint.h>
 
uint64_t fcn_00408fa0 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x40ca2f;
    if (rax == 0) {
        rbx = rax;
    }
    if (r15 == 0) {
        goto label_15;
    }
label_1:
    ebp = *(r15);
    if (bpl != 0) {
        goto label_16;
    }
    goto label_17;
    do {
label_0:
        strlen (r15);
        rbp = r15 + rax + 1;
        strlen (rbp);
        r15 = rbp + rax + 1;
        ebp = *(r15);
        if (bpl == 0) {
            goto label_17;
        }
label_16:
        eax = strcmp (rbx, r15);
        if (eax == 0) {
            goto label_18;
        }
    } while (bpl != 0x2a);
    if (*((r15 + 1)) != 0) {
        goto label_0;
    }
label_18:
    strlen (r15);
    rbx = r15 + rax + 1;
label_17:
    eax = "ASCII";
    if (*(rbx) == 0) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
label_15:
    rax = getenv ("CHARSETALIASDIR");
    r13 = rax;
    if (rax == 0) {
        goto label_19;
    }
    if (*(rax) == 0) {
        goto label_19;
    }
    rax = strlen (rax);
    r12 = rax;
    r14 = rax;
    if (rax != 0) {
        goto label_20;
    }
label_13:
    rax = malloc (0xe);
    if (rax != 0) {
        goto label_21;
    }
    do {
        r15d = 0x40ca2f;
label_2:
        *(0x0060f518) = r15;
        goto label_1;
label_19:
        r12d = 0x65;
        r14d = 0x64;
        r13d = "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
label_14:
        rax = malloc (0x73);
    } while (rax == 0);
    memcpy (rbp, r13, r14);
    *((rbp + r14)) = 0x2f;
    do {
        r12 += rbp;
        rax = 0x2e74657372616863;
        *(r12) = rax;
        eax = 0x73;
        *((r12 + 0xc)) = ax;
        eax = 0;
        *((r12 + 8)) = 0x61696c61;
        eax = open (rbp, 0, rdx);
        r12d = eax;
        if (eax >= 0) {
            goto label_22;
        }
label_6:
        r15d = 0x40ca2f;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x40b15c;
    edi = eax;
    r15d = 0;
    rax = fdopen ();
    *((rsp + 8)) = 0;
    r13 = rax;
    if (rax == 0) {
        goto label_23;
    }
    rax = rbx;
    r12 = rsp + 0x60;
    r14 = rsp + 0x20;
    rbx = r13;
    r13 = rax;
    do {
label_3:
        rax = *((rbx + 8));
        if (rax >= *((rbx + 0x10))) {
            goto label_24;
        }
label_4:
        rdx = rax + 1;
        *((rbx + 8)) = rdx;
        edi = *(rax);
label_5:
        eax = rdi - 9;
    } while (eax <= 1);
    if (edi == 0x20) {
        goto label_3;
    }
    if (edi == 0x23) {
        goto label_25;
    }
    eax = ungetc (rdi, rbx);
    eax = 0;
    rcx = r12;
    rdx = r14;
    eax = fscanf (rbx, "%50s %50s");
    if (eax <= 1) {
        goto label_12;
    }
    rcx = r14;
    do {
        edx = *(rcx);
        rcx += 4;
        eax = rdx - 0x1010101;
        edx = ~edx;
        eax &= edx;
        eax &= 0x80808080;
    } while (eax == 0);
    edx = eax;
    edx >>= 0x10;
    if ((eax & 0x8080) == 0) {
        eax = edx;
    }
    rdx = rcx + 2;
    if ((eax & 0x8080) == 0) {
        rcx = rdx;
    }
    edx = eax;
    dl += al;
    rdx = r12;
    rcx -= 3;
    rcx -= r14;
    do {
        esi = *(rdx);
        rdx += 4;
        eax = rsi - 0x1010101;
        esi = ~esi;
        eax &= esi;
        eax &= 0x80808080;
    } while (eax == 0);
    esi = eax;
    *((rsp + 0x10)) = rcx;
    esi >>= 0x10;
    if ((eax & 0x8080) == 0) {
        eax = esi;
    }
    rsi = rdx + 2;
    if ((eax & 0x8080) == 0) {
        rdx = rsi;
    }
    esi = eax;
    sil += al;
    rdx -= 3;
    rdx -= r12;
    rax = rcx + rdx;
    *((rsp + 0x18)) = rdx;
    if (*((rsp + 8)) != 0) {
        goto label_26;
    }
    rcx = rax + 2;
    *((rsp + 8)) = rcx;
    rax = malloc (rax + 3);
    rcx = *((rsp + 0x10));
    rdx = *((rsp + 0x18));
label_9:
    if (rax == 0) {
        goto label_27;
    }
    rdi = *((rsp + 8));
    rsi = 0xfffffffffffffffe;
    rsi -= rcx;
    rcx++;
    rdi -= rdx;
    rsi += rdi;
    rsi += rax;
    if (ecx >= 8) {
        goto label_28;
    }
    if ((cl & 4) != 0) {
        goto label_29;
    }
    if (ecx != 0) {
        r9d = *(r14);
        *(rsi) = r9b;
        if ((cl & 2) != 0) {
            goto label_30;
        }
    }
label_10:
    rdx++;
    rcx = rax + rdi - 1;
    if (edx >= 8) {
        goto label_31;
    }
    if ((dl & 4) != 0) {
        goto label_32;
    }
    if (edx != 0) {
        esi = *(r12);
        *(rcx) = sil;
        if ((dl & 2) != 0) {
            goto label_33;
        }
    }
label_11:
    r15 = rax;
    rax = *((rbx + 8));
    if (rax < *((rbx + 0x10))) {
        goto label_4;
    }
label_24:
    rdi = rbx;
    eax = uflow ();
    edi = eax;
    if (eax != 0xffffffff) {
        goto label_5;
    }
label_12:
    rax = r13;
    r13 = rbx;
    rbx = rax;
    fcn_004055a0 (rbx);
    rax = *((rsp + 8));
    if (rax == 0) {
        goto label_6;
    }
    *((r15 + rax)) = 0;
    goto label_7;
    do {
        rdx = rax + 1;
        *((rbx + 8)) = rdx;
        eax = *(rax);
        edx = 1;
label_8:
        if (eax == 0xa) {
            goto label_34;
        }
        if (dl == 0) {
            goto label_34;
        }
label_25:
        rax = *((rbx + 8));
    } while (rax < *((rbx + 0x10)));
    rdi = rbx;
    eax = uflow ();
    dl = (eax != 0xffffffff) ? 1 : 0;
    goto label_8;
label_26:
    rax += *((rsp + 8));
    rcx = rax + 2;
    *((rsp + 8)) = rcx;
    eax = realloc (r15, rax + 3);
    rdx = *((rsp + 0x18));
    rcx = *((rsp + 0x10));
    goto label_9;
label_28:
    r9 = *(r14);
    *(rsi) = r9;
    r9d = ecx;
    r10 = *((r14 + r9 - 8));
    *((rsi + r9 - 8)) = r10;
    r9 = rsi + 8;
    r10 = r14;
    r9 &= 0xfffffffffffffff8;
    rsi -= r9;
    ecx += esi;
    r10 -= rsi;
    ecx &= 0xfffffff8;
    if (ecx < 8) {
        goto label_10;
    }
    ecx &= 0xfffffff8;
    esi = 0;
    do {
        r8d = esi;
        esi += 8;
        r11 = *((r10 + r8));
        *((r9 + r8)) = r11;
    } while (esi < ecx);
    goto label_10;
label_31:
    rsi = *(r12);
    r9 = r12;
    *(rcx) = rsi;
    esi = edx;
    rdi = *((r12 + rsi - 8));
    *((rcx + rsi - 8)) = rdi;
    rdi = rcx + 8;
    rdi &= 0xfffffffffffffff8;
    rcx -= rdi;
    edx += ecx;
    r9 -= rcx;
    edx &= 0xfffffff8;
    if (edx < 8) {
        goto label_11;
    }
    edx &= 0xfffffff8;
    ecx = 0;
    do {
        esi = ecx;
        ecx += 8;
        r8 = *((r9 + rsi));
        *((rdi + rsi)) = r8;
    } while (ecx < edx);
    goto label_11;
label_34:
    if (eax == 0xffffffff) {
        goto label_12;
    }
    goto label_3;
label_20:
    if (*((r13 + rax - 1)) == 0x2f) {
        rdi = rax + 0xe;
        goto label_13;
label_23:
        close (r12d);
        goto label_6;
label_29:
        r9d = *(r14);
        *(rsi) = r9d;
        r9d = *((r14 + rcx - 4));
        *((rsi + rcx - 4)) = r9d;
        goto label_10;
label_32:
        esi = *(r12);
        *(rcx) = esi;
        esi = *((r12 + rdx - 4));
        *((rcx + rdx - 4)) = esi;
        goto label_11;
label_27:
        rax = r13;
        r13 = rbx;
        r15d = 0x40ca2f;
        rbx = rax;
        free (r15);
        fcn_004055a0 (r13);
        goto label_7;
label_30:
        r9d = *((r14 + rcx - 2));
        *((rsi + rcx - 2)) = r9w;
        goto label_10;
label_33:
        esi = edx;
        edx = *((r12 + rsi - 2));
        *((rcx + rsi - 2)) = dx;
        goto label_11;
    }
    rdi = rax + 0xf;
    r12++;
    goto label_14;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x409580 */
#include <stdint.h>
 
int64_t fcn_00409580 (void) {
    rax = 0x60f248;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dircolors.elf @ 0x409598 */
#include <stdint.h>
 
void fcn_00409598 (int64_t arg3) {
    rdx = arg3;
    ebx = segment.GNU_RELRO;
    do {
        rax = *(rbx);
        if (rax == -1) {
            goto label_0;
        }
invalid_funccall(); //        void (*rax)() ();
        rbx -= 8;
    } while (1);
INVALID_JUMP;
}
