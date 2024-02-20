#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x402030 */
#include <stdint.h>
 
int32_t main (char ** format, int64_t arg_18h, int64_t arg_2ch, int32_t argc, char ** argv) {
    uint32_t var_8h;
    uint32_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_2ch;
    char ** var_33h;
    int64_t var_37h;
    int64_t var_38h;
    char * * endptr;
    int64_t var_48h;
    int64_t var_c8h;
    rdi = argc;
    rsi = argv;
    rbx = rsi;
    rdi = *(rsi);
    *((rsp + 0x33)) = 0x6f686365;
    *((rsp + 0x37)) = 0;
    if (rdi == 0) {
        goto label_22;
    }
label_4:
    fcn_004075c0 (rdi);
    fcn_004053a0 ();
    eax = getpid ();
    *(0x006123c4) = 0;
    *(0x006123d0) = eax;
    setlocale (6, 0x40f2d5);
    bindtextdomain (0x40d94f, "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x40d94f, rsi);
    edi = 0x4058e0;
    eax = fcn_0040bc80 ();
    while (eax != 0) {
        edx = 5;
        rax = dcgettext (0, "The atexit library function failed");
        r12 = rax;
        rax = errno_location ();
        eax = 0;
        error (1, *(rax), r12);
label_0:
        r14d = 0x402f00;
        eax = fcn_00404ea0 (0x612420, 0x800);
        r13d = eax;
        eax = rax - 1;
        if (eax > 1) {
            goto label_23;
        }
label_3:
        *((rsp + 0xc)) = 1;
        r12d = 0x4038b0;
        r15d = 0x40f292;
        *((rsp + 8)) = 0;
label_1:
        r8 = rsp + 0x2c;
        ecx = 0x40d6e0;
        rsi = rbx;
        edi = ebp;
        edx = "+0a:E:e::i::I:l::L:n:prs:txP:d:";
        eax = fcn_0040b0f0 ();
        if (eax == 0xffffffff) {
            goto label_24;
        }
        eax -= 0x30;
        if (eax > 0x50) {
            goto label_25;
        }
        /* switch table (81 cases) at 0x40d340 */
        edi = 0x403ec0;
        eax = fcn_0040bc80 ();
    }
    goto label_0;
    *(0x006123c1) = 1;
    *(0x006123c2) = 1;
    goto label_1;
    *((rsp + 8)) = 1;
    goto label_1;
    eax = fcn_00403570 (*(0x00612ec8), 0x50, 0, 0x7fffffff, 1);
    *(0x006122b0) = eax;
    goto label_1;
    r8d = 1;
    rcx |= 0xffffffffffffffff;
    rax = fcn_00403570 (*(0x00612ec8), 0x4c, 1, rcx, r8d);
    *(0x00612470) = 0;
    *(0x00612468) = rax;
    *(0x00612450) = 0;
    goto label_1;
    rax = imp.__libc_start_main;
    if (rax == 0) {
        goto label_26;
    }
label_8:
    *(0x00612450) = rax;
    *(0x00612470) = 0;
    *(0x00612468) = 0;
    goto label_1;
    rax = imp.__libc_start_main;
    if (rax == 0) {
        goto label_27;
    }
    if (*(rax) == 0) {
        goto label_27;
    }
    *(0x006123f8) = rax;
    goto label_1;
    *(0x006123c0) = 0;
    r12d = 0x403790;
    goto label_1;
    rax = strchr (*(0x00612ec8), 0x3d);
    if (rax != 0) {
        rax = *((rsp + 0x2c));
        edx = 5;
        rax <<= 5;
        rcx = *((rax + 0x40d6e0));
        *((rsp + 0x10)) = rcx;
        rax = dcgettext (0, "option --%s may not be set to a value which includes `='");
        rcx = *((rsp + 0x10));
        eax = 0;
        error (1, 0, rax);
    }
    rcx = imp.__libc_start_main;
    rdi = imp.__libc_start_main;
    *(0x006123b8) = rcx;
    *((rsp + 0x10)) = rcx;
    eax = unsetenv ();
    rcx = *((rsp + 0x10));
    if (eax == 0) {
        goto label_1;
    }
    edx = 5;
    *((rsp + 0x18)) = rcx;
    rax = dcgettext (0, "failed to unset environment variable %s");
    *((rsp + 0x10)) = rax;
    rax = errno_location ();
    rcx = *((rsp + 0x18));
    eax = 0;
    error (1, *(rax), *((rsp + 0x10)));
    goto label_1;
    *(0x00612420) = 1;
    goto label_1;
    eax = fcn_00404580 ("xargs");
    eax = 0;
    do {
label_2:
        return rax;
invalid_funccall(); //        void (*r14)() ();
        rax = fcn_00403570 (*(0x00612ec8), 0x73, 1, *(0x00612428), 0);
        r8 = imp.__libc_start_main;
        rcx = rax;
        if (r8 < rax) {
            goto label_28;
        }
label_7:
        *(0x00612438) = rcx;
        goto label_1;
        *((rsp + 0xc)) = 0;
        goto label_1;
        rcx |= 0xffffffffffffffff;
        r8d = 1;
        rax = fcn_00403570 (*(0x00612ec8), 0x6e, 1, rcx, r8d);
        *(0x00612468) = 0;
        *(0x00612470) = rax;
        rax--;
        if (rax == 0) {
            goto label_29;
        }
label_6:
        *(0x00612450) = 0;
        goto label_1;
        rdi = imp.__libc_start_main;
        if (rdi == 0) {
            goto label_30;
        }
        r8d = 1;
        rcx |= 0xffffffffffffffff;
        rax = fcn_00403570 (rdi, 0x6c, 1, rcx, r8d);
        *(0x00612468) = rax;
label_5:
        *(0x00612470) = 0;
        *(0x00612450) = 0;
        goto label_1;
        r9 = imp.__libc_start_main;
        rcx |= 0xffffffffffffffff;
        eax = 0;
        rdi = r9;
        r12d = *(r9);
        __asm ("repne scasb al, byte [rdi]");
        if (rcx == 0xfffffffffffffffd) {
            goto label_9;
        }
        if (r12b != 0x5c) {
            goto label_31;
        }
        r12d = *((r9 + 1));
        eax = r12 - 0x5c;
        if (al > 0x1a) {
            goto label_32;
        }
        eax = (int32_t) al;
        /* switch table (27 cases) at 0x40d5c8 */
        r15 = imp.__libc_start_main;
        goto label_1;
        eax = fcn_004032b0 (*(obj.stdout));
        eax = 0;
    } while (1);
label_25:
    fcn_004032b0 (*(obj.stderr));
    eax = 1;
    goto label_2;
label_23:
    edi = 0;
    rax = sysconf ();
    if (rax > 0) {
        if (rax <= 0x800) {
            goto label_33;
        }
        rdx = imp.__libc_start_main;
        rax -= 0x800;
        if (rax > rdx) {
            rax = rdx;
        }
        *(0x00612438) = rax;
    }
    if (*(0x00612438) <= 0x7ff) {
        goto label_34;
    }
    r14d = 0x402ec0;
    *(0x00612460) = 0x404120;
    fcn_00404f80 (0x612420);
    goto label_3;
label_22:
    edi = "xargs";
    goto label_4;
label_32:
    *((rsp + 0x10)) = r9;
    rax = errno_location ();
    r9 = *((rsp + 0x10));
    if (r12b == 0x78) {
        goto label_35;
    }
    *((rsp + 0x10)) = r9;
    *((rsp + 0x18)) = rax;
    rax = ctype_b_loc ();
    r9 = *((rsp + 0x10));
    r8 = *((rsp + 0x18));
    rax = *(rax);
    if ((*((rax + r12*2 + 1)) & 8) == 0) {
        goto label_36;
    }
label_21:
    *((rsp + 0x10)) = r9;
    *(r8) = 0;
    *((rsp + 0x40)) = 0;
    rax = strtoul (r9 + 1, rsp + 0x40, 8);
    r9 = *((rsp + 0x10));
    r12 = rax;
    if (rax > 0xff) {
        *((rsp + 0x10)) = r9;
        edx = 5;
label_20:
        rax = dcgettext (0, "Invalid escape sequence %s in input delimiter specification; character values must not exceed %lo.");
        r9 = *((rsp + 0x10));
        r8d = 0xff;
        eax = 0;
        rcx = r9;
        error (1, 0, rax);
        r9 = *((rsp + 0x10));
    }
label_19:
    r8 = *((rsp + 0x40));
    if (*(r8) != 0) {
        edx = 5;
        *((rsp + 0x18)) = r8;
        *((rsp + 0x10)) = r9;
        rax = dcgettext (0, "Invalid escape sequence %s in input delimiter specification; trailing characters %s not recognised.");
        r9 = *((rsp + 0x10));
        r8 = *((rsp + 0x18));
        eax = 0;
        rcx = r9;
        rax = error (1, 0, rax);
    }
label_9:
    *(0x006123c0) = r12b;
    r12d = 0x403790;
    goto label_1;
label_30:
    *(0x00612468) = 1;
    goto label_5;
label_29:
    if (*(0x00612450) == 0) {
        goto label_6;
    }
    *(0x00612470) = 0;
    goto label_1;
label_28:
    edx = 5;
    *((rsp + 0x10)) = r8;
    *((rsp + 0x18)) = rax;
    rax = dcgettext (0, "warning: value %ld for -s option is too large, using %ld instead");
    rcx = *((rsp + 0x18));
    r8 = *((rsp + 0x10));
    eax = 0;
    error (0, 0, rax);
    rcx = imp.__libc_start_main;
    goto label_7;
label_27:
    *(0x006123f8) = 0;
    goto label_1;
label_26:
    eax = 0x40d232;
    goto label_8;
label_31:
    edx = 5;
    r12d = 0;
    *((rsp + 0x10)) = r9;
    rax = dcgettext (0, "Invalid input delimiter specification %s: the delimiter must be either a single character or an escape sequence starting with \\.");
    r9 = *((rsp + 0x10));
    eax = 0;
    rcx = r9;
    error (1, 0, rax);
    goto label_9;
label_24:
    if (*(0x006123f8) != 0) {
        if (r12 == 0x403790) {
            goto label_37;
        }
    }
label_18:
invalid_funccall(); //    void (*r14)() ();
    if (r13d != 0) {
        goto label_38;
    }
    *((rsp + 0x40)) = 0x402ed0;
    rdi = rsp + 0x48;
    sigemptyset ();
    *((rsp + 0xc8)) = 0;
    eax = sigaction (0xa, rsp + 0x40, 0);
    if (eax != 0) {
        goto label_39;
    }
label_15:
    *((rsp + 0x40)) = 0x403720;
    rdi = rsp + 0x48;
    sigemptyset ();
    *((rsp + 0xc8)) = 0;
    eax = sigaction (0xc, rsp + 0x40, 0);
    if (eax != 0) {
        goto label_40;
    }
label_14:
    eax = strcmp (r15, 0x40f292);
    if (eax != 0) {
        goto label_41;
    }
    rax = stdin;
    *(0x006124e8) = rax;
label_13:
    if (*(0x00612450) == 0) {
        goto label_42;
    }
label_17:
    *(0x00612420) = 1;
label_16:
    if (*(0x0061233c) == ebp) {
        rax = rsp + 0x33;
        rbx = rsp + 0x38;
        *(0x0061233c) = 0;
        *((rsp + 0x38)) = rax;
    }
    if (*((rsp + 8)) != 0) {
        goto label_43;
    }
label_12:
    rax = imp.__libc_start_main;
    r13 |= 0xffffffffffffffff;
    rax = fcn_00409680 (rax + 1);
    *(0x006124e0) = rax;
    rax = imp.__libc_start_main;
    rax = fcn_00409680 (rax + 1);
    esi = 0;
    *(0x00612498) = rax;
    signal (0x11);
    if (*(0x00612450) == 0) {
        goto label_44;
    }
    rdi = (int64_t) ebp;
    rdi <<= 3;
    rax = fcn_00409680 (rdi);
    rdx = *(0x0061233c);
    rsi |= 0xffffffffffffffff;
    r15 = rax;
    eax = 0;
    if (ebp <= edx) {
        goto label_45;
    }
    do {
        rdi = *((rbx + rdx*8));
        rcx = rsi;
        __asm ("repne scasb al, byte [rdi]");
        rcx = ~rcx;
        rcx--;
        *((r15 + rdx*8)) = rcx;
        rdx++;
    } while (ebp > edx);
label_45:
    rdi = imp.__libc_start_main;
    eax = 0;
    rcx |= 0xffffffffffffffff;
    __asm ("repne scasb al, byte [rdi]");
    rax = rcx;
    rax = ~rax;
    rax--;
    *(0x00612448) = rax;
label_10:
invalid_funccall(); //    eax = void (*r12)() ();
    if (eax == 0xffffffff) {
        goto label_46;
    }
    r14 = (int64_t) eax;
    fcn_00405050 (0x612420, 0x612480);
    rax = *(0x0061233c);
    r14--;
    *(0x006124a0) = 0;
    rsi = *((r15 + rax*8));
    eax = *(0x006122b4);
    fcn_004047a0 (0x612420, 0x612480, *((rbx + rax*8)), rsi + 1, 0, 0);
    eax = *(0x0061233c);
    *(0x006122b4) = 0;
    eax++;
    r13 = (int64_t) eax;
    if (ebp <= eax) {
        goto label_47;
    }
    do {
        eax = *(0x006122b4);
        r13++;
        fcn_00404a40 (0x612420, 0x612480, *((rbx + r13*8)), *((r15 + r13*8)), 0, 0);
    } while (ebp > r13d);
label_47:
    eax = fcn_00404c00 (0x612420, 0x612480);
    goto label_10;
    do {
        eax = 0;
        rdi = rdx;
        __asm ("repne scasb al, byte [rdi]");
        eax = *(0x006122b4);
        rcx = ~rcx;
        fcn_004047a0 (0x612420, 0x612480, *((rbx + rax*8)), r13, 0, 0);
        *(0x0061233c)++;
label_44:
        rax = *(0x0061233c);
    } while (eax < ebp);
    rax = imp.__libc_start_main;
    *(0x006122b4) = 0;
    *(0x00612458) = rax;
    rax = imp.__libc_start_main;
    *(0x006124a8) = rax;
    do {
label_11:
invalid_funccall(); //        eax = void (*r12)() ();
        eax++;
        if (eax == 0) {
            goto label_48;
        }
        rax = imp.__libc_start_main;
    } while (rax == 0);
    if (rax > *(0x006124d0)) {
        goto label_11;
    }
    fcn_00404c00 (0x612420, 0x612480);
    *(0x006124d0) = 0;
    goto label_11;
label_48:
    rax = imp.__libc_start_main;
    if (*(0x00612480) == rax) {
        if (*((rsp + 0xc)) == 0) {
            goto label_46;
        }
        if (*(0x006123f0) != 0) {
            goto label_46;
        }
    }
    fcn_00404c00 (0x612420, 0x612480);
label_46:
    eax = imp.__libc_start_main;
    *(0x006123c4) = eax;
    eax = imp.__libc_start_main;
    goto label_2;
    r12d = 7;
    goto label_9;
    r12d = 0xd;
    goto label_9;
    r12d = 0xa;
    goto label_9;
    r12d = 0xc;
    goto label_9;
    r12d = 8;
    goto label_9;
    r12d = 0xb;
    goto label_9;
    r12d = 9;
    goto label_9;
label_43:
    rax = fcn_00404e60 ();
    edx = 5;
    r13 = rax;
    rax = dcgettext (0, "Your environment variables take up %lu bytes\n");
    rdx = r13;
    eax = 0;
    fprintf (*(obj.stderr), rax);
    r13 = imp.__libc_start_main;
    edx = 5;
    rax = dcgettext (0, "POSIX upper limit on argument length (this system): %lu\n");
    rdx = r13;
    eax = 0;
    fprintf (*(obj.stderr), rax);
    r13 = imp.__libc_start_main;
    edx = 5;
    rax = dcgettext (0, "POSIX smallest allowable upper limit on argument length (all systems): %lu\n");
    rdx = r13;
    eax = 0;
    fprintf (*(obj.stderr), rax);
    r13 = imp.__libc_start_main;
    rax = fcn_00404e60 ();
    edx = 5;
    r14 = rax;
    rax = dcgettext (0, "Maximum length of command we could actually use: %lu\n");
    rdx = r13;
    rdx -= r14;
    eax = 0;
    fprintf (*(obj.stderr), rax);
    edx = 5;
    r13 = imp.__libc_start_main;
    rax = dcgettext (0, "Size of command buffer we are actually using: %lu\n");
    rdx = r13;
    eax = 0;
    fprintf (*(obj.stderr), rax);
    edx = 5;
    rax = dcgettext (0, "Maximum parallelism (--max-procs must be no greater): %lu\n");
    edx = 0x7fffffff;
    eax = 0;
    fprintf (*(obj.stderr), rax);
    eax = isatty (0);
    if (eax == 0) {
        goto label_12;
    }
    edx = 5;
    rax = dcgettext (0, "\nExecution of xargs will continue now, and it will try to read its input and run commands; if this is not what you wanted to happen, please type the end-of-file keystroke.\n");
    eax = 0;
    fprintf (*(obj.stderr), rax);
    if (*((rsp + 0xc)) == 0) {
        goto label_12;
    }
    rax = *(0x0061233c);
    edx = 5;
    r13 = *((rbx + rax*8));
    rax = dcgettext (0, "Warning: %s will be run at least once.  If you do not want that to happen, then press the interrupt keystroke.\n");
    rdx = r13;
    eax = 0;
    fprintf (*(obj.stderr), rax);
    goto label_12;
label_41:
    *(0x006124d8) = 1;
    rdi = r15;
    rax = fcn_004036c0 ();
    *(0x006124e8) = rax;
    if (rax != 0) {
        goto label_13;
    }
    rdx = r15;
    rax = fcn_00408c90 (0, 8);
    edx = 5;
    r14 = rax;
    rax = dcgettext (0, "Cannot open input file %s");
    r13 = rax;
    rax = errno_location ();
    rcx = r14;
    eax = 0;
    error (1, *(rax), r13);
    goto label_13;
label_40:
    edx = 5;
    rax = dcgettext (0, "Cannot set SIGUSR2 signal handler");
    r13 = rax;
    rax = errno_location ();
    eax = 0;
    error (0, *(rax), r13);
    goto label_14;
label_39:
    edx = 5;
    rax = dcgettext (0, "Cannot set SIGUSR1 signal handler");
    r13 = rax;
    rax = errno_location ();
    eax = 0;
    error (0, *(rax), r13);
    goto label_15;
label_42:
    if (*(0x00612468) == 0) {
        goto label_16;
    }
    goto label_17;
label_37:
    edx = 5;
    rax = dcgettext (0, "warning: the -E option has no effect if -0 or -d is used.\n");
    eax = 0;
    error (0, 0, rax);
    goto label_18;
label_35:
    *(rax) = 0;
    *((rsp + 0x40)) = 0;
    rax = strtoul (r9 + 2, rsp + 0x40, 0x10);
    r9 = *((rsp + 0x10));
    r12 = rax;
    if (rax <= 0xff) {
        goto label_19;
    }
    *((rsp + 0x10)) = r9;
    edx = 5;
    esi = "Invalid escape sequence %s in input delimiter specification; character values must not exceed %lx.";
    goto label_20;
label_36:
    edx = 5;
    *((rsp + 0x18)) = r8;
    *((rsp + 0x10)) = r9;
    rax = dcgettext (0, "Invalid escape sequence %s in input delimiter specification.");
    r9 = *((rsp + 0x10));
    eax = 0;
    rcx = r9;
    error (1, 0, rax);
    edi = 0;
    r9 = *((rsp + 0x10));
    r8 = *((rsp + 0x18));
    goto label_21;
label_38:
    assert_fail ("BC_INIT_OK == bcstatus", "xargs.c", 0x2a2, "main");
label_33:
    assert_fail ("val > XARGS_POSIX_HEADROOM", "xargs.c", 0x1d8, "main");
label_34:
    return assert_fail ("bc_ctl.arg_max >= LINE_MAX", "xargs.c", 0x1f4, "main");
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x402e0b */
#include <stdint.h>
 
int32_t fcn_00402e0b (void) {
    eax = __progname;
    if (rax != obj.__progname) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = __progname;
invalid_funccall(); //        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x402e61 */
#include <stdint.h>
 
int64_t fcn_00402e61 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x00612388) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x611e48;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x00612390) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_00402e0b ();
    *(0x00612388) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x402eb8 */
#include <stdint.h>
 
int64_t fcn_00402eb8 (void) {
    do {
        esi = __progname;
        ecx = 2;
        rsi -= obj.__progname;
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
            edi = __progname;
invalid_funccall(); //            void (*rax)() ();
        }
label_0:
        return rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x402f30 */
#include <stdint.h>
 
uint64_t fcn_00402f30 (int64_t arg1, int64_t arg2) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t wstatus;
    rdi = arg1;
    rsi = arg2;
    if (*(0x006123e8) == 0) {
        goto label_5;
    }
    eax = edi;
    r15d = esi;
    eax ^= 1;
    r13d = 0;
    r12d = edi;
    *((rsp + 4)) = al;
label_1:
    *(0x006123cc) = 0;
    ebx = 0;
    bl = (r15d <= r13d) ? 1 : 0;
    ebx &= *((rsp + 4));
    do {
label_0:
        eax = waitpid (0xffffffff, rsp + 0x1c, ebx);
        if (eax != 0xffffffff) {
            if (eax != 0) {
                goto label_6;
            }
            if (ebx == 0) {
                goto label_7;
            }
            return eax;
        }
        rax = errno_location ();
        r14 = rax;
        if (*(rax) != 4) {
            edx = 5;
            rax = dcgettext (0, "error waiting for child process");
            eax = 0;
            error (1, *(r14), rax);
        }
        eax = imp.__libc_start_main;
    } while (eax == 0);
    if (r12b == 0) {
        ebx = ebp;
    }
    goto label_0;
label_6:
    rsi = imp.__libc_start_main;
    if (rsi == 0) {
        goto label_0;
    }
    rdi = imp.__libc_start_main;
    if (eax == *(rdi)) {
        goto label_8;
    }
    edx = 0;
    while (rcx < rsi) {
        if (*((rdi + rcx*4)) == eax) {
            goto label_4;
        }
        ecx = rdx + 1;
        rdx = rcx;
    }
    if (rcx == rsi) {
        goto label_0;
    }
label_4:
    *((rdi + rcx*4)) = 0;
    ebx = *((rsp + 0x1c));
    r13d++;
    *(0x006123e8)--;
    eax = (int32_t) bh;
    if (eax == 0xff) {
        goto label_9;
    }
label_3:
    if (bl == 0x7f) {
        goto label_10;
    }
label_2:
    eax = ebx;
    eax &= 0x7f;
    eax++;
    if (al > 1) {
        edx = 5;
        ebx &= 0x7f;
        rax = imp.__libc_start_main;
        rcx = *(rax);
        *((rsp + 8)) = rcx;
        rax = dcgettext (0, "%s: terminated by signal %d");
        rcx = *((rsp + 8));
        r8d = ebx;
        eax = 0;
        error (0x7d, 0, rax);
        ebx = *((rsp + 0x1c));
    }
    bh &= 0xff;
    if (bh != 0) {
        *(0x006123c8) = 0x7b;
    }
    if (*(0x006123e8) != 0) {
        goto label_1;
    }
    return rax;
label_10:
    edx = 5;
    ebx = (int32_t) bh;
    rax = imp.__libc_start_main;
    rcx = *(rax);
    *((rsp + 8)) = rcx;
    rax = dcgettext (0, "%s: stopped by signal %d");
    rcx = *((rsp + 8));
    r8d = ebx;
    eax = 0;
    error (0x7d, 0, rax);
    ebx = *((rsp + 0x1c));
    goto label_2;
label_9:
    rax = imp.__libc_start_main;
    edx = 5;
    rbx = *(rax);
    rax = dcgettext (0, "%s: exited with status 255; aborting");
    rcx = rbx;
    eax = 0;
    error (0x7c, 0, rax);
    ebx = *((rsp + 0x1c));
    goto label_3;
label_8:
    ecx = 0;
    goto label_4;
label_7:
    rbx = imp.__libc_start_main;
    edx = 5;
    rax = dcgettext (0, "WARNING: Lost track of %lu child processes");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    return rax;
label_5:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4031a0 */
#include <stdint.h>
 
int64_t fcn_004031a0 (int64_t arg1) {
    rdi = arg1;
    r13d = edi;
    r12 = imp.__libc_start_main;
    rax = imp.__libc_start_main;
    if (r12 == 0) {
        goto label_3;
    }
    esi = *(rax);
    if (esi == 0) {
        goto label_4;
    }
    ebp = 0;
    while (rdx < r12) {
        rdx = rax + rbx;
        ecx = *(rdx);
        if (ecx == 0) {
            goto label_1;
        }
        edx = rbp + 1;
        rbx = rdx*4;
    }
    while (r12 >= rcx) {
label_0:
        rdx = rax + rbx;
        eax = *(rdx);
        if (eax != 0) {
            goto label_5;
        }
label_1:
        *(rdx) = r13d;
        eax = ebp;
        *(0x006123e8)++;
        *(0x006123f0) = 1;
        return rax;
label_3:
        ebx = 0;
        ebp = 0;
        if (rax == 0) {
            goto label_6;
        }
        rdx = r12;
        rdx >>= 1;
        rdx = r12 + rdx + 1;
label_2:
        *(0x006123d8) = rdx;
        rax = fcn_004096d0 (rax, rdx*4);
        rcx = imp.__libc_start_main;
        *(0x006123e0) = rax;
    }
    edx = ebp;
    do {
        *((rax + r12*4)) = 0;
        r12d = rdx + 1;
        rdx = r12;
    } while (r12 < rcx);
    goto label_0;
label_4:
    rdx = rax;
    ebp = 0;
    goto label_1;
label_6:
    esi = 0x80;
    edx = 0x20;
    goto label_2;
label_5:
    return assert_fail ("0 == pids[i]", "xargs.c", 0x58c, "add_proc");
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4032b0 */
#include <stdint.h>
 
uint64_t fcn_004032b0 (int64_t arg1) {
    rdi = arg1;
    edx = 5;
    rbx = rdi;
    rbp = imp.__libc_start_main;
    rax = dcgettext (0, "Usage: %s [OPTION].. COMMAND [INITIAL-ARGS]..\n");
    rdx = rbp;
    eax = 0;
    fprintf (rbx, rax);
    edx = 5;
    rax = dcgettext (0, "Run COMMAND with arguments INITIAL-ARGS and more arguments read from input.\n\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "Mandatory and optional arguments to long options are also\nmandatory or optional for the corresponding short option.\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -0, --null                   items are separated by a null, not whitespace;\n                                 disables quote and backslash processing and\n                                 logical EOF processing\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -a, --arg-file=FILE          read arguments from FILE, not standard input\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -d, --delimiter=CHARACTER    items in input stream are separated by CHARACTER,\n                                 not by whitespace; disables quote and backslash\n                                 processing and logical EOF processing\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -E END                       set logical EOF string; if END occurs as a line\n                                 of input, the rest of the input is ignored\n                                 (ignored if -0 or -d was specified)\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -e, --eof[=END]              equivalent to -E END if END is specified;\n                                 otherwise, there is no end-of-file string\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -I R                         same as --replace=R\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -i, --replace[=R]            replace R in INITIAL-ARGS with names read\n                                 from standard input; if R is unspecified,\n                                 assume {}\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -L, --max-lines=MAX-LINES    use at most MAX-LINES non-blank input lines per\n                                 command line\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -l[MAX-LINES]                similar to -L but defaults to at most one non-\n                                 blank input line if MAX-LINES is not specified\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -n, --max-args=MAX-ARGS      use at most MAX-ARGS arguments per command line\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -P, --max-procs=MAX-PROCS    run at most MAX-PROCS processes at a time\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -p, --interactive            prompt before running commands\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "      --process-slot-var=VAR   set environment variable VAR in child processes\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -r, --no-run-if-empty        if there are no arguments, then do not run COMMAND;\n                                 if this option is not given, COMMAND will be\n                                 run at least once\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -s, --max-chars=MAX-CHARS    limit length of command line to MAX-CHARS\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "      --show-limits            show limits on command-line length\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -t, --verbose                print commands before executing them\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "  -x, --exit                   exit if the size (see -s) is exceeded\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "      --help                   display this help and exit\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "      --version                output version information and exit\n");
    fputs (rax, rbx);
    edx = 5;
    rax = dcgettext (0, "\nReport bugs to <bug-findutils@gnu.org>.\n");
    rsi = rbx;
    rdi = rax;
    return fputs ();
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x403570 */
#include <stdint.h>
 
uint64_t fcn_00403570 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    char * * endptr;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r14d = r8d;
    r13d = esi;
    r12 = rcx;
    rbx = rdi;
    rax = strtol (rdi, rsp + 8, 0xa);
    rdx = *((rsp + 8));
    if (rdx != rbx) {
        if (*(rdx) != 0) {
            goto label_0;
        }
        if (rax >= rbp) {
            if (r12 >= 0) {
                if (rax <= r12) {
                    goto label_1;
                }
                edx = 5;
                rbx = imp.__libc_start_main;
                rax = dcgettext (0, "%s: value for -%c option should be <= %ld\n");
                r8 = r12;
                ecx = r13d;
                rdx = rbx;
                eax = 0;
                fprintf (*(obj.stderr), rax);
                if (r14d != 0) {
                    goto label_2;
                }
                rax = r12;
            }
label_1:
            return rax;
        }
        edx = 5;
        rbx = imp.__libc_start_main;
        rax = dcgettext (0, "%s: value for -%c option should be >= %ld\n");
        r8 = rbp;
        ecx = r13d;
        rdx = rbx;
        eax = 0;
        fprintf (*(obj.stderr), rax);
        if (r14d != 0) {
            goto label_2;
        }
        rax = rbp;
        return rax;
    }
label_0:
    rbx = imp.__libc_start_main;
    edx = 5;
    rax = dcgettext (0, "%s: invalid number for -%c option\n");
    ecx = r13d;
    rdx = rbx;
    eax = 0;
    fprintf (*(obj.stderr), rax);
    fcn_004032b0 (*(obj.stderr));
    exit (1);
label_2:
    fcn_004032b0 (*(obj.stderr));
    return exit (1);
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4036c0 */
#include <stdint.h>
 
uint64_t fcn_004036c0 (void) {
    eax = 0;
    ebx = 0;
    eax = fcn_00405410 (rdi, 0, rdx, rcx);
    if (eax < 0) {
        goto label_0;
    }
    esi = 0x40d331;
    edi = eax;
    rax = fdopen ();
    rbx = rax;
    while (1) {
label_0:
        rax = rbx;
        return rax;
        rax = errno_location ();
        r13d = *(rax);
        r12 = rax;
        close (ebp);
        *(r12) = r13d;
    }
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x403740 */
#include <stdint.h>
 
int64_t fcn_00403740 (void) {
    while (*(0x006122b4) != 0) {
label_0:
        return;
    }
    rax = imp.__libc_start_main;
    if (*(0x00612480) == rax) {
        goto label_0;
    }
    eax = imp.__libc_start_main;
    if (eax != 0) {
        goto label_0;
    }
    esi = 0x612480;
    edi = 0x612420;
invalid_funccall(); //    return void (*0x404c00)() ();
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x403f30 */
#include <stdint.h>
 
int64_t fcn_00403f30 (int64_t arg1) {
    rdi = arg1;
    if (*(0x00612480) == 1) {
        goto label_4;
    }
    ebx = 0;
    while (eax >= 0) {
label_0:
        rax = imp.__libc_start_main;
        rbx++;
        rax--;
        if (rax <= rbx) {
            goto label_4;
        }
        rax = imp.__libc_start_main;
        rdx = *((rax + rbx*8));
        eax = 0;
        eax = fprintf (*(obj.stderr), 0x40d1c3);
    }
    edx = 5;
    rax = dcgettext (0, "Failed to write to stderr");
    r12 = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), r12);
    goto label_0;
label_4:
    if (bpl == 0) {
        goto label_5;
    }
    if (*(0x006123a8) == 0) {
        goto label_6;
    }
label_2:
    fwrite ("?..", 1, 4, *(obj.stderr));
    eax = fcn_00409e80 (*(obj.stderr));
    if (eax != 0) {
        goto label_7;
    }
label_1:
    rdi = imp.__libc_start_main;
    eax = IO_getc ();
    ebx = eax;
    if (eax == 0xa) {
        goto label_8;
    }
    if (eax == 0xffffffff) {
        goto label_8;
    }
    do {
        rdi = imp.__libc_start_main;
        eax = IO_getc ();
        if (eax == 0xffffffff) {
            goto label_3;
        }
    } while (eax != 0xa);
label_3:
    while (1) {
        ebx &= 0xffffffdf;
        al = (ebx == 0x59) ? 1 : 0;
        return rax;
label_7:
        edx = 5;
        rax = dcgettext (0, "Failed to write to stderr");
        rbx = rax;
        rax = errno_location ();
        eax = 0;
        error (1, *(rax), rbx);
        goto label_1;
label_5:
        rsi = stderr;
        edi = 0xa;
        eax = IO_putc ();
        eax = 0;
        return rax;
        edx = 5;
        rax = dcgettext (0, "Failed to read from stdin");
        rax = errno_location ();
        eax = 0;
        error (1, *(rax), rbp);
    }
label_6:
    edi = "/dev/tty";
    rax = fcn_004036c0 ();
    *(0x006123a8) = rax;
    if (rax != 0) {
        goto label_2;
    }
    edx = 5;
    rax = dcgettext (0, "failed to open /dev/tty for reading");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
    goto label_2;
label_8:
    eax = ebx;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x404580 */
#include <stdint.h>
 
void fcn_00404580 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    fcn_00409e80 (*(obj.stderr));
    edx = 5;
    rax = dcgettext (0, "Kevin Dalley");
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "James Youngman");
    edx = 5;
    rax = dcgettext (0, "Eric B. Decker");
    r9 = rbp;
    rcx = *(str_4_6_0);
    r8 = rax;
    eax = 0;
    fcn_00409550 (*(obj.stdout), rbx, "GNU findutils");
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x404600 */
#include <stdint.h>
 
int64_t fcn_00404600 (int64_t arg1, int64_t arg2, uint32_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
    rax = *((rsi + 0x40));
    if (dl == 0) {
        goto label_2;
    }
    while (1) {
        if (rax != 0) {
            rdx = *((rsi + 0x48));
            if (rax < rdx) {
                goto label_3;
            }
        }
        rdx = *((rdi + 0x38));
        rax = rcx + 1;
        rcx = 0xffffffffffffffff;
        if (rcx == -1) {
            rax = rcx;
        }
        if (rdx == 0) {
            goto label_4;
        }
label_0:
        rdx++;
        if (rdx < rax) {
            goto label_5;
        }
        rax = rdx;
        edx = 1;
        if (rax == 0) {
            rax = rdx;
        }
        return rax;
        *((rsi + 0x40)) = rcx;
        rax = rcx;
    }
label_5:
    return rax;
label_2:
    rdx = *((rsi + 0x48));
    if (rdx <= rcx) {
        if (rdx != 0) {
            goto label_6;
        }
    }
    *((rsi + 0x48)) = rcx;
label_6:
    if (rax != 0) {
        rdx = *((rsi + 0x48));
        if (rdx > rax) {
            goto label_7;
        }
    }
    rax = rcx;
    rax >>= 1;
label_1:
    rdx = *((rdi + 0x38));
    if (rdx != 0) {
        goto label_0;
    }
    edx = 1;
    if (rax == 0) {
        rax = rdx;
    }
    return rax;
label_4:
    return rax;
label_3:
    rsi = rdx;
    r8 = rcx + 1;
    rsi -= rax;
    rdx = rsi;
    rdx >>= 1;
    rax = rdx + rcx;
    if (rsi == 1) {
        rax = r8;
    }
    goto label_1;
label_7:
    rdx -= rax;
    rsi = rcx;
    rcx--;
    rax = rdx;
    rax >>= 1;
    rsi -= rax;
    rax = rsi;
    if (rdx == 1) {
        rax = rcx;
    }
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x404710 */
#include <stdint.h>
 
uint64_t fcn_00404710 (int64_t arg1, int64_t arg2) {
    uint32_t var_8h;
    rdi = arg1;
    rsi = arg2;
    r12 = rsi;
    ebx = 0;
    rax = getenv (rdi);
    if (rax != 0) {
        eax = fcn_004098e0 (rax, rsp, 0xa, rsp + 8, 0);
        if (eax != 0) {
            goto label_0;
        }
        ebx = 0;
        bl = (*((rsp + 8)) < r12) ? 1 : 0;
    }
    eax = ebx;
    return rax;
label_0:
    edx = 5;
    rax = dcgettext (0, "Environment variable %s is not set to a valid decimal number");
    r12 = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), r12);
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4047a0 */
#include <stdint.h>
 
uint64_t fcn_004047a0 (int64_t arg_50h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    *((rsp + 8)) = r8;
    r12d = *((rsp + 0x50));
    if (rdx == 0) {
        goto label_8;
    }
    r14 = rdi;
    rbx = rsi;
    r13 = rdx;
    r15 = r9;
    if (r12d == 0) {
        goto label_9;
    }
    if (r13 == str_do_not_care) {
        goto label_10;
    }
    do {
        rax = rbp + r15;
        rax += *((rbx + 0x20));
        if (rax > *((r14 + 0x18))) {
            if (r12d != 0) {
                goto label_11;
            }
            rax = *((r14 + 0x38));
            if (*(rbx) == rax) {
                goto label_11;
            }
            if (*((r14 + 0x30)) == 0) {
                goto label_6;
            }
label_5:
            edx = 5;
            rax = dcgettext (0, "argument list too long");
            eax = 0;
            error (1, 0, rax);
label_4:
            fcn_00404c00 (r14, rbx);
        }
        rdx = *(rbx);
        if (r12d == 0) {
            rax = *((r14 + 0x50));
            if (rax == 0) {
                goto label_12;
            }
            rcx = rdx;
            rcx -= *((r14 + 0x38));
            if (rax == rcx) {
                goto label_13;
            }
        }
label_12:
        if (rdx == *((r14 + 0x20))) {
label_13:
            fcn_00404c00 (r14, rbx);
            rdx = *(rbx);
        }
        rsi = *((rbx + 0x10));
        rax = *((rbx + 8));
        if (rdx >= rsi) {
label_0:
            if (rax == 0) {
                goto label_14;
            }
            rdx = rsi + rsi;
            rsi <<= 4;
            *((rbx + 0x10)) = rdx;
            rax = fcn_004096d0 (rax, rsi);
            *((rbx + 8)) = rax;
label_7:
            rdx = *(rbx);
            if (r13 == str_do_not_care) {
                goto label_15;
            }
        }
        rsi = rdx + 1;
        rcx = *((rbx + 0x20));
        *(rbx) = rsi;
        rsi = *((rbx + 0x18));
        rsi += rcx;
        *((rax + rdx*8)) = rsi;
        rsi = *((rsp + 8));
        if (rsi != 0) {
            rdi += rcx;
            strcpy (*((rbx + 0x18)), rsi);
            rcx = *((rbx + 0x20));
            rcx += r15;
            *((rbx + 0x20)) = rcx;
        }
        rcx += *((rbx + 0x18));
        strcpy (rcx, r13);
        rbp += *((rbx + 0x20));
        rax = *(rbx);
        *((rbx + 0x20)) = rbp;
        if (r12d != 0) {
            goto label_16;
        }
        rdx = *((r14 + 0x50));
        if (rdx != 0) {
            rcx = rax;
            rcx -= *((r14 + 0x38));
            if (rdx == rcx) {
                goto label_2;
            }
        }
        if (rax == *((r14 + 0x20))) {
label_2:
            fcn_00404c00 (r14, rbx);
label_1:
            if (r12d == 0) {
                goto label_17;
            }
            rbp = *((rbx + 0x20));
label_3:
            *((rbx + 0x28)) = rbp;
        }
label_17:
        return rax;
label_9:
        *((rsi + 0x38)) = 1;
    } while (r13 != str_do_not_care);
label_10:
    rdx = *(rbx);
    rsi = *((rbx + 0x10));
    rax = *((rbx + 8));
    if (rdx >= rsi) {
        goto label_0;
    }
label_15:
    rcx = rdx + 1;
    *(rbx) = rcx;
    *((rax + rdx*8)) = 0;
    goto label_1;
label_16:
    if (rax == *((r14 + 0x20))) {
        goto label_2;
    }
    goto label_3;
label_6:
    eax = *(r14);
    if (eax == 0) {
        goto label_4;
    }
    if (*((r14 + 0x48)) != 0) {
        goto label_5;
    }
    if (*((r14 + 0x50)) == 0) {
        goto label_4;
    }
    goto label_5;
label_11:
    edx = 5;
    rax = dcgettext (0, "cannot fit single argument within argument list size limit");
    eax = 0;
    error (1, 0, rax);
    if (*((r14 + 0x30)) != 0) {
        goto label_5;
    }
    goto label_6;
label_14:
    *((rbx + 0x10)) = 0x40;
    rax = fcn_00409680 (0x200);
    *((rbx + 8)) = rax;
    goto label_7;
label_8:
    return assert_fail ("arg != NULL", "buildcmd.c", 0x165, "bc_push_arg");
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x404a40 */
#include <stdint.h>
 
int64_t fcn_00404a40 (int64_t arg_80h, int64_t arg_88h, int64_t arg_90h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    char * src;
    int64_t var_30h;
    int64_t var_3ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r15 = rdx;
    r14 = rdi;
    r12 = rcx;
    rdi = *((rdi + 0x18));
    rbx = imp.__libc_start_main;
    rax = *((rsp + 0x80));
    *((rsp + 0x30)) = rsi;
    *((rsp + 0x20)) = r8;
    rbp = rdi - 1;
    *((rsp + 0x28)) = rax;
    rax = *((rsp + 0x88));
    *((rsp + 0x18)) = r9;
    *((rsp + 0x10)) = rax;
    eax = *((rsp + 0x90));
    *((rsp + 0x3c)) = eax;
    if (rbx != 0) {
        goto label_0;
    }
    goto label_2;
    do {
        r13 = rax;
        r13 -= r15;
        if (rbp <= r13) {
            goto label_3;
        }
        rbp -= r13;
        strncpy (rbx, r15, r13);
        rax = *((rsp + 0x10));
        rax += *((rsp + 0x18));
        rbx += r13;
        if (rax >= rbp) {
            goto label_4;
        }
        rbp -= rax;
        rax = *((rsp + 0x20));
        if (rax != 0) {
            strcpy (rbx, rax);
            rbx += *((rsp + 0x18));
        }
        strcpy (rbx, *((rsp + 0x28)));
        rax = *((r14 + 0x28));
        r15 = *((rsp + 8));
        rbx += *((rsp + 0x10));
        r12 -= rax;
        r15 += rax;
        r12 -= r13;
        if (*(r15) == 0) {
            goto label_1;
        }
label_0:
        rax = fcn_004066f0 (r15, *((r14 + 0x30)));
        *((rsp + 8)) = rax;
    } while (rax != 0);
    if (r12 >= rbp) {
        goto label_3;
    }
    r15 += r12;
    strncpy (rbx, r15, r12);
    rbp -= r12;
    rbx += r12;
    r12d = 0;
    if (*(r15) != 0) {
        goto label_0;
    }
    do {
label_1:
        eax = *((rsp + 0x3c));
        *(rbx) = 0;
        rcx = rbx + 1;
        rdi = r14;
        rdx = imp.__libc_start_main;
        rsi = *((rsp + 0x30));
        r9d = 0;
        r8d = 0;
        *((rsp + 0x80)) = eax;
        rcx -= rdx;
invalid_funccall(); //        void (*0x4047a0)() ();
label_4:
        r15 = *((rsp + 8));
INVALID_JUMP;
    } while (*(r15) == 0);
    edx = 5;
    rax = dcgettext (0, "command too long");
    eax = 0;
    error (1, 0, rax);
    goto label_1;
label_2:
    rdi++;
    rax = fcn_00409680 (rdi);
    rbx = rax;
    *(0x006124f0) = rax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x404c00 */
#include <stdint.h>
 
int64_t fcn_00404c00 (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    r14 = rdi;
    r12 = rsi;
    fcn_004047a0 (rdi, rsi, "do_not_care", 0, 0, 0);
    rax = *(r12);
    if (rax == 0) {
        goto label_3;
    }
    rdx = *((r12 + 8));
    if (*((rdx + rax*8 - 8)) != 0) {
        goto label_4;
    }
    r13d = 0;
    rax = fcn_00409680 (rax*8 + 8);
    r8 = *(r12);
    rbp = *((r14 + 0x38));
    r15 = rax;
    rdx = r8;
label_0:
    if (rbp == 0) {
        goto label_5;
    }
    rsi = *((r12 + 8));
    eax = 0;
    do {
        rax++;
        rcx = *((rsi + rax*8 - 8));
        *((r15 + rax*8 - 8)) = rcx;
    } while (rax != rbp);
    rax = r13 + rbp;
    rbx = rbp;
label_2:
    if (r8 <= rbx) {
        goto label_6;
    }
    if (rax >= rdx) {
        goto label_6;
    }
    rsi = *((r12 + 8));
    while (r8 > rbx) {
        if (rax >= rdx) {
            goto label_7;
        }
        rax++;
        rbx++;
        rcx = *((rsi + rax*8 - 8));
        *((r15 + rbx*8 - 8)) = rcx;
    }
label_7:
    if (rbx < rbp) {
        goto label_8;
    }
label_6:
    rsi = *((r12 + 0x30));
    rcx = r15;
    edx = ebx;
    *((r15 + rbx*8)) = 0;
    rdi = r14;
invalid_funccall(); //    eax = uint64_t (*r14 + 0x40)(uint64_t) (r8);
    r8 = *((rsp + 8));
    if (eax != 0) {
        goto label_9;
    }
    rax = *((r14 + 0x38));
    rax++;
    if (rax < r8) {
        goto label_10;
    }
    edx = 5;
    *((rsp + 8)) = r8;
    rax = dcgettext (0, "can't call exec() due to argument size restrictions");
    eax = 0;
    error (1, 0, rax);
    rbp = *((r14 + 0x38));
    r8 = *((rsp + 8));
label_1:
    rdx = *(r12);
    rcx = r13 + 1;
    rax = rdx;
    rax -= rbp;
    if (rcx < rax) {
        goto label_0;
    }
    free (r15);
    rax = *((r12 + 0x28));
    *(r12) = rbp;
    *((r12 + 0x20)) = rax;
    rax = 0xffffffff00000000;
    *((r12 + 0x38)) = rax;
    return rax;
label_10:
    rcx = r8;
    rax = fcn_00404600 (r14, r12, 0);
    rbp = *((r14 + 0x38));
    r8 = rax;
    goto label_1;
label_9:
    rcx = r8;
    rax = fcn_00404600 (r14, r12, 1);
    rbp = *((r14 + 0x38));
    r8 = rax;
    r13 -= rbp;
    r13 += rbx;
    goto label_1;
label_5:
    rax = r13;
    ebx = 0;
    goto label_2;
label_8:
    assert_fail ("dst_pos >= ctl->initial_argc", "buildcmd.c", 0x102, "copy_args");
label_4:
    assert_fail ("state->cmd_argv[state->cmd_argc-1] == NULL", "buildcmd.c", 0x116, "bc_do_exec");
label_3:
    return assert_fail ("state->cmd_argc > 0", "buildcmd.c", 0x115, "bc_do_exec");
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x404e60 */
#include <stdint.h>
 
int64_t fcn_00404e60 (void) {
    ebp = 0;
    rbx = _environ;
    rdi = *(rbx);
    if (rdi == 0) {
        goto label_0;
    }
    do {
        strlen (rdi);
        rbx += 8;
        rdi = *(rbx);
        rbp = rbp + rax + 1;
    } while (rdi != 0);
label_0:
    rax = rbp;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x404ea0 */
#include <stdint.h>
 
uint64_t fcn_00404ea0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rsi;
    rbx = rdi;
    rax = fcn_00404e60 ();
    *((rbx + 0x10)) = 0x1000;
    edi = 0;
    rax = sysconf ();
    *(rbx) = 0;
    rdx = 0x7fffffffffffffff;
    if (rax <= 0) {
        rax = rdx;
    }
    *((rbx + 8)) = rax;
    if (rbp <= rax) {
        rsi = rbp + r12;
        if (rsi >= rax) {
            goto label_0;
        }
        rax -= rsi;
        rdx = rax;
        *((rbx + 8)) = rax;
        rdx >>= 3;
        rdx -= 2;
        *((rbx + 0x20)) = rdx;
        if (rdx == 0) {
            goto label_1;
        }
        *((rbx + 0x18)) = rax;
        eax = 0;
        *((rbx + 0x28)) = 0;
        *((rbx + 0x30)) = 0;
        *((rbx + 0x38)) = 0;
        *((rbx + 0x40)) = 0x404700;
        *((rbx + 0x48)) = 0;
        *((rbx + 0x50)) = 0;
        return rax;
    }
    eax = 1;
    return rax;
label_0:
    eax = 2;
    return rax;
label_1:
    return assert_fail ("ctl->max_arg_count > 0", "buildcmd.c", 0x216, "bc_init_controlinfo");
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x404f80 */
#include <stdint.h>
 
int64_t fcn_00404f80 (int64_t arg1) {
    rdi = arg1;
    rax = *((rdi + 8));
    if (rax > 0x1ffff) {
        rax = *((rdi + 0x10));
        edx = 0x20000;
        if (rax >= 0x20001) {
            rax = rdx;
            goto label_0;
        }
    }
label_0:
    *((rdi + 0x18)) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x405050 */
#include <stdint.h>
 
int64_t fcn_00405050 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 0x38));
    *(rsi) = rax;
    rax = *((rsi + 0x28));
    *((rsi + 0x20)) = rax;
    rax = 0xffffffff00000000;
    *((rsi + 0x38)) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x405070 */
#include <stdint.h>
 
uint64_t fcn_00405070 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    ebp = 0;
    rdi = *(rdi);
    ebx = 0;
    if (rdi == 0) {
        goto label_0;
    }
    do {
        rax = strlen (rdi);
        rbx++;
        rdi = *((r12 + rbx*8));
        rbp += rax;
    } while (rdi != 0);
label_0:
    eax = fcn_00404710 ("__GNU_FINDUTILS_EXEC_ARG_COUNT_LIMIT", rbx);
    edx = 1;
    if (eax != 0) {
        eax = edx;
        return rax;
    }
    eax = fcn_00404710 ("__GNU_FINDUTILS_EXEC_ARG_LENGTH_LIMIT", rbp);
    dl = (eax != 0) ? 1 : 0;
    eax = edx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4050e0 */
#include <stdint.h>
 
uint64_t fcn_004050e0 (void) {
    edi = "/proc/self/fd";
    rax = fcn_00405aa0 ();
    if (rax == 0) {
        goto label_2;
    }
    r12d = 0;
    ebx = 0xffffffff;
    do {
label_0:
        rdi = rbp;
        rax = readdir ();
        if (rax == 0) {
            goto label_3;
        }
label_1:
        if (*((rax + 0x13)) != 0x2e) {
            goto label_4;
        }
        edx = *((rax + 0x14));
    } while (dl == 0x2e);
    if (dl == 0) {
        goto label_0;
    }
label_4:
    r12d = 1;
    eax = fcn_004055f0 (rax + 0x13, 0);
    rdi = rbp;
    if (ebx < eax) {
        ebx = eax;
    }
    rax = readdir ();
    if (rax != 0) {
        goto label_1;
    }
label_3:
    rdi = rbp;
    closedir ();
    while (1) {
        eax = ebx;
        return rax;
label_2:
        ebx = 0xffffffff;
    }
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x405260 */
#include <stdint.h>
 
uint64_t fcn_00405260 (void) {
    edi = 4;
    rax = sysconf ();
    rsi = rsp;
    edi = 7;
    rbx = rax;
    eax = 0x14;
    if (rax == -1) {
        rbx = rax;
    }
    eax = getrlimit ();
    edx = ebx;
    if (eax == 0) {
        rdx = *(rsp);
        if (rdx != -1) {
            edx = ebx;
            goto label_0;
        }
    }
label_0:
    eax = edx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4052b0 */
#include <stdint.h>
 
int64_t fcn_004052b0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (edi <= 0) {
        goto label_3;
    }
    r14d = edi;
    r13 = rsi;
    r12 = rdx;
    ebp = 0;
label_0:
    eax = r14d;
    r15d = 0x40;
    eax -= ebp;
    if (eax <= 0x40) {
        r15d = eax;
    }
    rsi = (int64_t) r15d;
    if (eax <= 0) {
        goto label_4;
    }
    rax = rsp;
    edx = 0;
    do {
        edi = 0;
        ecx = 5;
        rax += 8;
        *((rax - 2)) = di;
        edi = rbp + rdx;
        edx++;
        *((rax - 4)) = cx;
        *((rax - 8)) = edi;
    } while (edx < r15d);
    edx = 0;
    rdi = rsp;
    eax = poll ();
    if (eax == 0xffffffff) {
        goto label_5;
    }
    ebx = 0;
    do {
        if (*((rsp + rbx*8 + 6)) != 0x20) {
            edi = *((rsp + rbx*8));
            rsi = r12;
invalid_funccall(); //            eax = void (*r13)() ();
            if (eax != 0) {
                goto label_2;
            }
        }
        rbx++;
    } while (r15d > ebx);
label_1:
    ebp += r15d;
    if (r14d > ebp) {
        goto label_0;
    }
    eax = 0;
label_2:
    return rax;
label_4:
    edx = 0;
    rdi = rsp;
    eax = poll ();
    if (eax != 0xffffffff) {
        goto label_1;
    }
label_5:
    eax = 0xffffffff;
    goto label_2;
label_3:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4053a0 */
#include <stdint.h>
 
uint64_t fcn_004053a0 (void) {
    int64_t var_8h;
    int64_t var_10h;
    eax = fcn_004050e0 ();
    if (eax < 0) {
        eax = fcn_00405260 ();
    }
    edx = 0;
    *(rsp) = 0;
    *((rsp + 0x10)) = 0;
    dl = (eax != 0x7fffffff) ? 1 : 0;
    *((rsp + 8)) = 0;
    eax += edx;
    fcn_004052b0 (eax, 0x405160, rsp);
    rax = *(rsp);
    *(0x00612508) = rax;
    rax = *((rsp + 8));
    *(0x00612500) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x405410 */
#include <stdint.h>
 
uint64_t fcn_00405410 (int64_t arg_80h, int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = rdi;
    ebx = esi;
    esi &= 0x40;
    *((rsp + 0x30)) = rdx;
    if (esi != 0) {
        goto label_2;
    }
    r12d = 0;
label_0:
    ebp = *(0x006124f9);
    while (1) {
label_1:
        eax = 0;
        esi |= 0x80000;
        eax = fcn_00405b30 (r13, ebx, r12d, rcx);
        ebx = eax;
        if (eax >= 0) {
            if (*(0x006124f8) == 0) {
                goto label_3;
            }
        }
        eax = ebx;
        return eax;
        eax = 0;
        eax = fcn_00405b30 (0x40ddc6, 0x80000, rdx, rcx);
        r14d = eax;
        if (eax >= 0) {
            goto label_4;
        }
        *(0x006124f8) = bpl;
        *(0x006124f9) = 1;
    }
label_2:
    rax = rsp + 0x80;
    *((rsp + 8)) = 0x10;
    r12d = *((rsp + 0x30));
    *((rsp + 0x10)) = rax;
    rax = rsp + 0x20;
    *((rsp + 0x18)) = rax;
    goto label_0;
label_3:
    fcn_00405860 (eax, 1, rdx);
    eax = ebx;
    return rax;
label_4:
    edi = eax;
    eax = 0;
    eax = fcn_00409d40 (edi, 1, rdx, rcx, r8);
    close (r14d);
    ebp &= 1;
    *(0x006124f9) = 1;
    *(0x006124f8) = bpl;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x405550 */
#include <stdint.h>
 
uint64_t fcn_00405550 (void) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    rbx = imp.__libc_start_main;
    rbp = imp.__libc_start_main;
    eax = fcn_004050e0 ();
    if (eax < 0) {
        eax = fcn_00405260 ();
    }
    edx = 0;
    *((rsp + 8)) = rbx;
    dl = (eax != 0x7fffffff) ? 1 : 0;
    *(rsp) = rbp;
    eax += edx;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x18)) = 0xffffffff;
    fcn_004052b0 (eax, 0x4051d0, rsp);
    ebx = *((rsp + 0x18));
    if (ebx < 0) {
        return eax;
    }
    edx = 5;
    rax = dcgettext (0, "File descriptor %d will leak; please report this as a bug, remembering to include a detailed description of the simplest way to reproduce this problem.");
    ecx = ebx;
    eax = 0;
    error (0, 0, rax);
    return assert_fail ("no_leaks", "fdleak.c", 0x17e, "complain_about_leaky_fds");
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4055f0 */
#include <stdint.h>
 
int64_t fcn_004055f0 (int64_t arg1, int64_t arg2) {
    char * * endptr;
    rdi = arg1;
    rsi = arg2;
    r13d = esi;
    errno_location ();
    *(rax) = 0;
    r12 = rax;
    rax = strtol (rbp, rsp + 8, 0xa);
    rbx = rax;
    rax = 0x7fffffffffffffff;
    rax += rbx;
    if (rax <= 0xfffffffffffffffd) {
        goto label_1;
    }
    rcx = rbp;
    eax = 0;
    eax = error (1, *(r12), 0x40dcb9);
    do {
        rcx = rbp;
        esi = 0x22;
        eax = 0;
        *(r12) = 0x22;
        error (1, esi, 0x40dcb9);
label_0:
        eax = ebx;
        return rax;
label_1:
        eax = 0x80000000;
        edx = 0xffffffff;
        rax += rbx;
    } while (rax > rdx);
    rdx = *((rsp + 8));
    if (*(rdx) != 0) {
        goto label_2;
    }
    if (rdx != rbp) {
        goto label_0;
    }
    rax = fcn_00408c90 (0, r13d);
    edx = 5;
    rax = dcgettext (0, "Expected an integer: %s");
    rcx = rbp;
    eax = 0;
    error (1, *(r12), rax);
    goto label_0;
label_2:
    rdx = rbp;
    rax = fcn_00408c90 (1, r13d);
    rdx = *((rsp + 8));
    r14 = rax;
    rax = fcn_00408c90 (0, r13d);
    edx = 5;
    rax = dcgettext (0, "Unexpected suffix %s on %s");
    r8 = r14;
    rcx = rbp;
    eax = 0;
    error (1, *(r12), rax);
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x405740 */
#include <stdint.h>
 
uint64_t fcn_00405740 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = rdi;
    rbx = rsi;
    rax = errno_location ();
    r14d = *(rax);
    if (rbx == 0) {
        goto label_5;
    }
    rsi = *(rbp);
    r12 = rax;
    if (rsi == 0) {
        goto label_6;
    }
    rax = r13;
    if (rsi >= rbx) {
        goto label_2;
    }
    rdi = rsi + rsi;
    if (rsi <= rdi) {
        goto label_0;
    }
    goto label_7;
    do {
        rax = rdi + rdi;
        if (rdi > rax) {
            goto label_8;
        }
        rdi = rax;
INVALID_JUMP;
    } while (rdi < rbx);
    if (rsi != 0) {
        goto label_9;
    }
label_1:
    if (r13 != 0) {
        goto label_10;
    }
    *(rbp) = rdi;
    rax = malloc (rdi);
label_2:
    if (rax == 0) {
        goto label_11;
    }
label_3:
    *(r12) = r14d;
    return rax;
label_6:
    edi = 0x20;
    if (rbx > 0x10) {
        goto label_0;
    }
    edi = 0x10;
    goto label_1;
label_8:
    rdi = rbx;
    if (rsi == 0) {
        goto label_1;
    }
label_9:
    rax = r13;
    if (rsi == rdi) {
        goto label_2;
    }
label_4:
    *(rbp) = rdi;
    rax = realloc (r13, rdi);
    if (rax != 0) {
        goto label_3;
    }
label_11:
    eax = 0;
    return rax;
label_7:
    rdi = rbx;
    goto label_4;
label_10:
    assert_fail ("NULL == existing", "extendbuf.c", 0x4f, "extendbuf");
label_5:
    return assert_fail ("wanted > 0u", "extendbuf.c", 0x47, "extendbuf");
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x405860 */
#include <stdint.h>
 
int32_t fcn_00405860 (int64_t arg1, int64_t arg2, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
    eax = 0;
    ebx = edi;
    eax = fcn_00409d40 (rdi, 1, 0, rcx, r8);
    if (eax < 0) {
        goto label_0;
    }
    ecx = eax;
    eax |= 1;
    edx = ecx;
    edx &= 0xfffffffe;
    if (bpl != 0) {
        edx = eax;
    }
    eax = 0;
    if (edx == ecx) {
        goto label_1;
    }
    eax = fcn_00409d40 (ebx, 2, rdx, rcx, r8);
    al = (eax == 0xffffffff) ? 1 : 0;
    eax = (int32_t) al;
    eax = -eax;
    do {
label_1:
        return eax;
label_0:
        eax = 0xffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x405a00 */
#include <stdint.h>
 
uint64_t fcn_00405a00 (void) {
    eax = fcn_0040b2b0 (*(obj.stdout));
    if (eax != 0) {
        rax = errno_location ();
        rbx = rax;
        if (*(0x00612518) == 0) {
            goto label_0;
        }
        if (*(rax) != 0x20) {
            goto label_0;
        }
    }
    eax = fcn_0040b2b0 (*(obj.stderr));
    if (eax != 0) {
        goto label_1;
    }
    return rax;
label_0:
    edx = 5;
    rax = dcgettext (0, "write error");
    rdi = imp.__libc_start_main;
    if (rdi == 0) {
        goto label_2;
    }
    rax = fcn_00408e10 (rdi, rsi, rdx, rcx);
    r8 = rbp;
    rcx = rax;
    eax = 0;
    error (0, *(rbx), "%s: %s");
    do {
label_1:
        rax = exit (*(0x006122c0));
label_2:
        rcx = rax;
        eax = 0;
        error (0, *(rbx), 0x40dcb9);
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x405aa0 */
#include <stdint.h>
 
uint64_t fcn_00405aa0 (void) {
    rax = opendir ();
    rbx = rax;
    if (rax != 0) {
        rdi = rax;
        eax = dirfd ();
        if (eax <= 2) {
            goto label_1;
        }
    }
    rax = rbx;
    return rax;
label_1:
    eax = fcn_00409080 (eax, rsi);
    r12d = eax;
    rax = errno_location ();
    if (r12d >= 0) {
        goto label_2;
    }
    r14d = *(rax);
    r13d = 0;
    do {
label_0:
        rdi = rbx;
        rbx = r13;
        closedir ();
        *(rbp) = r14d;
        rax = rbx;
        return rax;
label_2:
        edi = r12d;
        rax = fdopendir ();
        r14d = *(rbp);
        r13 = rax;
    } while (rax != 0);
    close (r12d);
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x405b30 */
#include <stdint.h>
 
uint64_t fcn_00405b30 (int64_t arg_60h, int64_t arg3, int32_t oflag, const char * path) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_30h;
    rdx = arg3;
    rsi = oflag;
    rdi = path;
    *((rsp + 0x30)) = rdx;
    edx = 0;
    while (1) {
        eax = 0;
        eax = open (rdi, rsi, rdx);
        fcn_00409090 (eax, rsi);
        return eax;
        rax = rsp + 0x60;
        *((rsp + 8)) = 0x10;
        edx = *((rsp + 0x30));
        *((rsp + 0x10)) = rax;
        rax = rsp + 0x20;
        *((rsp + 0x18)) = rax;
    }
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x405b80 */
#include <stdint.h>
 
int64_t fcn_00405b80 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4) {
    int64_t var_28h;
    uint32_t var_20h;
    int64_t var_18h;
    int64_t var_8h;
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    rax = 0x1fffffffffffffff;
    if (rdx > rax) {
        goto label_5;
    }
    rbx = rdi;
    rdi = rdx*8;
    if (rdi > 0xfaf) {
        goto label_6;
    }
    rdi += 0x27;
    rdi &= 0xfffffffffffffff0;
    rdi = rsp + 0xf;
    rdi &= 0xfffffffffffffff0;
    rdi += 0x10;
    if (rdi == 0) {
        goto label_7;
    }
label_1:
    *((rdi + 8)) = 1;
    r8d = 0;
    r9d = 2;
    if (rdx <= 2) {
        goto label_8;
    }
label_0:
    eax = *((rsi + r9 - 1));
    if (al != *((rsi + r8))) {
        goto label_9;
    }
    goto label_10;
    do {
        r8 -= *((rdi + r8*8));
        if (*((rsi + r8)) == al) {
            goto label_10;
        }
INVALID_JUMP;
    } while (r8 != 0);
    *((rdi + r9*8)) = r9;
    r8d = 0;
label_3:
    r9++;
    if (rdx != r9) {
        goto label_0;
    }
label_8:
    *(rcx) = 0;
    r8d = *(rbx);
    r9 = rbx;
    eax = 0;
label_2:
    if (r8b == 0) {
        goto label_4;
    }
    do {
        if (*((rsi + rax)) == r8b) {
            goto label_11;
        }
        if (rax == 0) {
            goto label_12;
        }
        r10 = *((rdi + rax*8));
        rbx += r10;
        rax -= r10;
    } while (r8b != 0);
label_4:
    fcn_0040b900 (rdi);
    eax = 1;
    rbx = *((rbp - 8));
    return rax;
label_6:
    *((rbp - 0x28)) = rcx;
    *((rbp - 0x20)) = rdx;
    *((rbp - 0x18)) = rsi;
    rax = fcn_0040b890 (rdi);
    rcx = *((rbp - 0x28));
    rdx = *((rbp - 0x20));
    rdi = rax;
    rsi = *((rbp - 0x18));
    if (rdi != 0) {
        goto label_1;
    }
label_7:
    eax = 0;
    rbx = *((rbp - 8));
    return rax;
label_11:
    rax++;
    r10 = r9 + 1;
    if (rdx != rax) {
        r8d = *((r9 + 1));
        r9 = r10;
        goto label_2;
label_12:
        r8d = *((r9 + 1));
        rbx++;
        r9++;
        goto label_2;
label_10:
        r8++;
        rax = r9;
        rax -= r8;
        *((rdi + r9*8)) = rax;
        goto label_3;
label_5:
        eax = 0;
        return rax;
    }
    *(rcx) = rbx;
    goto label_4;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x405d00 */
#include <stdint.h>
 
void fcn_00405d00 (void) {
    return assert_fail ("iter->cur.wc == 0", "mbuiter.h", 0xb3, "mbuiter_multi_next");
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x405d20 */
#include <stdint.h>
 
uint64_t fcn_00405d20 (mbstate_t * arg1, int64_t arg2, uint32_t arg3) {
    uint32_t var_110h;
    mbstate_t * ps;
    uint32_t var_100h;
    mbstate_t * var_f8h;
    uint32_t var_f0h;
    int64_t var_ech;
    int64_t var_e4h;
    char * s;
    size_t var_d8h;
    int64_t var_d0h;
    int64_t var_cch;
    uint32_t var_b0h;
    int64_t var_ach;
    uint32_t var_a4h;
    char * var_a0h;
    size_t var_98h;
    uint32_t var_90h;
    int64_t var_8ch;
    uint32_t var_70h;
    int64_t var_6ch;
    int64_t var_64h;
    char * s2;
    size_t var_58h;
    uint32_t var_50h;
    int64_t var_4ch;
    int64_t var_28h;
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    /* [13] -r-x section size 40120 named .text */
label_3:
    abort ();
    rbx = rsi;
    *((rbp - 0x108)) = rdi;
    *((rbp - 0x110)) = rdx;
    rax = fcn_0040ba40 (rsi);
    rcx = rax;
    *((rbp - 0x100)) = rax;
    rax = 0x492492492492492;
    if (rcx > rax) {
        goto label_21;
    }
    rax = *((rbp - 0x100));
    rdi = rax*8;
    rdi -= rax;
    rdi <<= 3;
    if (rdi > 0xfaf) {
        goto label_22;
    }
    rdi += 0x27;
    rdi &= 0xfffffffffffffff0;
    r12 = rsp + 0xf;
    r12 &= 0xfffffffffffffff0;
    r12 += 0x10;
label_7:
    if (r12 == 0) {
        goto label_21;
    }
    rax = *((rbp - 0x100));
    *((rbp - 0xe0)) = rbx;
    rbx = r12;
    *((rbp - 0xf0)) = 0;
    r13 = rax * 3;
    *((rbp - 0xe4)) = 0;
    *((rbp - 0xec)) = 0;
    r13 <<= 4;
    r13 += r12;
    while (*((rbp - 0xf0)) == 0) {
        rdx = *((rbp - 0xe0));
        ecx = *(rdx);
        eax = ecx;
        al >>= 5;
        eax &= 7;
        eax = *((rax*4 + 0x40f520));
        eax >>= cl;
        if ((al & 1) == 0) {
            goto label_23;
        }
        *((rbp - 0xd8)) = 1;
        eax = *(rdx);
        *((rbp - 0xd0)) = 1;
        *((rbp - 0xcc)) = eax;
        r8d = *((rbp - 0xcc));
        *((rbp - 0xe4)) = 1;
        if (r8d == 0) {
            goto label_24;
        }
label_0:
        eax = 1;
label_10:
        rcx = rbp - 0xf0;
        rsi = *((rbp - 0xe0));
        rdx = *((rbp - 0xd8));
        rcx += 0x28;
        if (rsi == rcx) {
            goto label_25;
        }
        *(rbx) = rsi;
label_9:
        *((rbx + 8)) = rdx;
        *((rbx + 0x10)) = al;
        if (al != 0) {
            eax = *((rbp - 0xcc));
            *((rbx + 0x14)) = eax;
        }
        *((rbp - 0xe0)) += rdx;
        rbx += 0x30;
        *((rbp - 0xe4)) = 0;
    }
label_8:
    rax = ctype_get_mb_cur_max ();
    r14 = *((rbp - 0xe0));
    rax = fcn_00409040 (r14, rax);
    rsi = rbp - 0xf0;
    rcx = rsi + 4;
    rdx = rax;
    rax = fcn_0040b170 (rsi + 0x24, r14);
    *((rbp - 0xd8)) = rax;
    if (rax == -1) {
        goto label_26;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_27;
    }
    if (rax == 0) {
        rax = *((rbp - 0xe0));
        *((rbp - 0xd8)) = 1;
        if (*(rax) != 0) {
            goto label_28;
        }
        r9d = *((rbp - 0xcc));
        if (r9d != 0) {
            goto label_29;
        }
    }
    rax = rbp - 0xf0;
    *((rbp - 0xd0)) = 1;
    eax = mbsinit (rax + 4);
    if (eax != 0) {
        *((rbp - 0xf0)) = 0;
    }
    r8d = *((rbp - 0xcc));
    *((rbp - 0xe4)) = 1;
    if (r8d != 0) {
        goto label_0;
    }
label_24:
    r15d = 0;
    r14 = r12 + 0x30;
    *((r13 + 8)) = 1;
    *((rbp - 0xf8)) = 2;
    if (*((rbp - 0x100)) <= 2) {
        goto label_30;
    }
label_2:
    ebx = *((r14 + 0x10));
    while (bl != 0) {
        if (*((rax + 0x10)) == 0) {
            goto label_31;
        }
        eax = *((rax + 0x14));
        if (*((r14 + 0x14)) == eax) {
            goto label_32;
        }
label_1:
        if (r15 == 0) {
            goto label_33;
        }
        r15 -= *((r13 + r15*8));
        rax = r15 * 3;
        rax <<= 4;
        rax += r12;
    }
label_31:
    rdx = *((r14 + 8));
    if (rdx != *((rax + 8))) {
        goto label_1;
    }
    eax = memcmp (*(r14), *(rax), rdx);
    if (eax != 0) {
        goto label_1;
    }
label_32:
    rbx = *((rbp - 0xf8));
    r15++;
    rax = rbx;
    rax -= r15;
    *((r13 + rbx*8)) = rax;
label_19:
    *((rbp - 0xf8))++;
    r14 += 0x30;
    rax = *((rbp - 0xf8));
    if (*((rbp - 0x100)) != rax) {
        goto label_2;
    }
label_30:
    rax = *((rbp - 0x110));
    rbx = rbp - 0x70;
    *((rbp - 0xb0)) = 0;
    r15d = 0;
    rbx += 4;
    *((rbp - 0xa4)) = 0;
    *(rax) = 0;
    rax = *((rbp - 0x108));
    *((rbp - 0x108)) = rbx;
    rbx = rbp - 0xb0;
    rbx += 4;
    *((rbp - 0x70)) = 0;
    *((rbp - 0xac)) = 0;
    *((rbp - 0x6c)) = 0;
    *((rbp - 0x64)) = 0;
    *((rbp - 0xf8)) = rbx;
    *((rbp - 0xa0)) = rax;
    *((rbp - 0x60)) = rax;
    eax = 0;
label_14:
    if (al == 0) {
        goto label_6;
    }
    if (*((rbp - 0x50)) != 0) {
        goto label_11;
    }
label_17:
    rax = r15 * 3;
    rax <<= 4;
    rax += r12;
label_4:
    rdx = *((rax + 8));
    if (rdx == *((rbp - 0x58))) {
        goto label_34;
    }
label_5:
    if (r15 != 0) {
        goto label_35;
    }
label_13:
    if (*((rbp - 0xa4)) != 0) {
        goto label_36;
    }
    if (*((rbp - 0xb0)) != 0) {
        goto label_37;
    }
    rdx = *((rbp - 0xa0));
    ecx = *(rdx);
    eax = ecx;
    al >>= 5;
    eax &= 7;
    eax = *((rax*4 + 0x40f520));
    eax >>= cl;
    if ((al & 1) == 0) {
        goto label_38;
    }
    *((rbp - 0x98)) = 1;
    eax = *(rdx);
    *((rbp - 0x90)) = 1;
    *((rbp - 0x8c)) = eax;
    *((rbp - 0xa4)) = 1;
label_18:
    edx = *((rbp - 0x8c));
    if (edx == 0) {
        goto label_3;
    }
label_20:
    rax = *((rbp - 0x98));
    *((rbp - 0xa0)) += rax;
    rax = *((rbp - 0x58));
    *((rbp - 0x60)) += rax;
    *((rbp - 0xa4)) = 0;
    *((rbp - 0x64)) = 0;
label_6:
    if (*((rbp - 0x70)) != 0) {
        goto label_39;
    }
    rdx = *((rbp - 0x60));
    ecx = *(rdx);
    eax = ecx;
    al >>= 5;
    eax &= 7;
    eax = *((rax*4 + 0x40f520));
    eax >>= cl;
    if ((al & 1) == 0) {
        goto label_40;
    }
    *((rbp - 0x58)) = 1;
    eax = *(rdx);
    *((rbp - 0x50)) = 1;
    *((rbp - 0x4c)) = eax;
    *((rbp - 0x64)) = 1;
label_11:
    edx = *((rbp - 0x4c));
    if (edx == 0) {
        goto label_41;
    }
    rax = r15 * 3;
    rax <<= 4;
    rax += r12;
    if (*((rax + 0x10)) == 0) {
        goto label_4;
    }
    if (*((rax + 0x14)) != edx) {
        goto label_5;
    }
label_12:
    rax = *((rbp - 0x58));
    r15++;
    *((rbp - 0x60)) += rax;
    *((rbp - 0x64)) = 0;
    if (*((rbp - 0x100)) != r15) {
        goto label_6;
    }
    rax = *((rbp - 0xa0));
    rbx = *((rbp - 0x110));
    *(rbx) = rax;
label_41:
    fcn_0040b900 (r12);
    rsp = rbp - 0x28;
    eax = 1;
    return rax;
label_21:
    rsp = rbp - 0x28;
    eax = 0;
    return rax;
label_22:
    rax = fcn_0040b890 (rdi);
    r12 = rax;
    goto label_7;
label_23:
    rax = rbp - 0xf0;
    eax = mbsinit (rax + 4);
    if (eax == 0) {
        goto label_42;
    }
    *((rbp - 0xf0)) = 1;
    goto label_8;
label_25:
    rcx = rbx + 0x18;
    rax = memcpy (rcx, rsi, rdx);
    rdx = *((rbp - 0xd8));
    *(rbx) = rax;
    eax = *((rbp - 0xd0));
    goto label_9;
label_26:
    *((rbp - 0xd8)) = 1;
    eax = 0;
    *((rbp - 0xd0)) = 0;
    *((rbp - 0xe4)) = 1;
    goto label_10;
label_27:
    rax = strlen (*((rbp - 0xe0)));
    *((rbp - 0xd0)) = 0;
    *((rbp - 0xd8)) = rax;
    eax = 0;
    *((rbp - 0xe4)) = 1;
    goto label_10;
label_40:
    eax = mbsinit (*((rbp - 0x108)));
    if (eax == 0) {
        goto label_42;
    }
    *((rbp - 0x70)) = 1;
label_39:
    rax = ctype_get_mb_cur_max ();
    rbx = *((rbp - 0x60));
    rax = fcn_00409040 (rbx, rax);
    rsi = rbp - 0x70;
    rcx = rsi + 4;
    rdx = rax;
    rax = fcn_0040b170 (rsi + 0x24, rbx);
    *((rbp - 0x58)) = rax;
    if (rax == -1) {
        goto label_43;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_44;
    }
    if (rax == 0) {
        rax = *((rbp - 0x60));
        *((rbp - 0x58)) = 1;
        if (*(rax) != 0) {
            goto label_28;
        }
        eax = *((rbp - 0x4c));
        if (eax != 0) {
            goto label_29;
        }
    }
    rax = rbp - 0x70;
    *((rbp - 0x50)) = 1;
    eax = mbsinit (rax + 4);
    if (eax != 0) {
        *((rbp - 0x70)) = 0;
    }
    *((rbp - 0x64)) = 1;
    goto label_11;
label_34:
    eax = memcmp (*(rax), *((rbp - 0x60)), rdx);
    if (eax == 0) {
        goto label_12;
    }
    if (r15 == 0) {
        goto label_13;
    }
label_35:
    rbx = *((r13 + r15*8));
    r14 = r15;
    eax = *((rbp - 0x64));
    r14 -= rbx;
    if (rbx == 0) {
        goto label_14;
    }
    if (*((rbp - 0xa4)) == 0) {
        goto label_45;
    }
    while (esi != 0) {
label_16:
        rax = *((rbp - 0x98));
        *((rbp - 0xa4)) = 0;
        *((rbp - 0xa0)) += rax;
        rbx--;
        if (rbx == 0) {
            goto label_46;
        }
label_45:
        if (*((rbp - 0xb0)) != 0) {
            goto label_47;
        }
        rdx = *((rbp - 0xa0));
        ecx = *(rdx);
        eax = ecx;
        al >>= 5;
        eax &= 7;
        eax = *((rax*4 + 0x40f520));
        eax >>= cl;
        if ((al & 1) == 0) {
            goto label_48;
        }
        *((rbp - 0x98)) = 1;
        eax = *(rdx);
        *((rbp - 0x90)) = 1;
        *((rbp - 0x8c)) = eax;
        *((rbp - 0xa4)) = 1;
label_15:
        esi = *((rbp - 0x8c));
    }
    goto label_3;
label_48:
    eax = mbsinit (*((rbp - 0xf8)));
    if (eax == 0) {
        goto label_42;
    }
    *((rbp - 0xb0)) = 1;
label_47:
    rax = ctype_get_mb_cur_max ();
    r15 = *((rbp - 0xa0));
    rax = fcn_00409040 (r15, rax);
    rsi = rbp - 0xb0;
    rcx = rsi + 4;
    rdx = rax;
    rax = fcn_0040b170 (rsi + 0x24, r15);
    *((rbp - 0x98)) = rax;
    if (rax != -1) {
        if (rax == 0xfffffffffffffffe) {
            goto label_49;
        }
        if (rax == 0) {
            rax = *((rbp - 0xa0));
            *((rbp - 0x98)) = 1;
            if (*(rax) != 0) {
                goto label_28;
            }
            edi = *((rbp - 0x8c));
            if (edi != 0) {
                goto label_50;
            }
        }
        rax = rbp - 0xb0;
        *((rbp - 0x90)) = 1;
        eax = mbsinit (rax + 4);
        if (eax != 0) {
            *((rbp - 0xb0)) = 0;
        }
        *((rbp - 0xa4)) = 1;
        goto label_15;
    }
    *((rbp - 0x98)) = 1;
    *((rbp - 0x90)) = 0;
    goto label_16;
label_49:
    rax = strlen (*((rbp - 0xa0)));
    *((rbp - 0x90)) = 0;
    *((rbp - 0x98)) = rax;
    goto label_16;
label_46:
    eax = *((rbp - 0x64));
    r15 = r14;
    goto label_14;
label_43:
    *((rbp - 0x58)) = 1;
    *((rbp - 0x50)) = 0;
    *((rbp - 0x64)) = 1;
    goto label_17;
label_38:
    eax = mbsinit (*((rbp - 0xf8)));
    if (eax == 0) {
        goto label_42;
    }
    *((rbp - 0xb0)) = 1;
label_37:
    rax = ctype_get_mb_cur_max ();
    rbx = *((rbp - 0xa0));
    rax = fcn_00409040 (rbx, rax);
    rsi = rbp - 0xb0;
    rcx = rsi + 4;
    rdx = rax;
    rdi += 0x24;
    rax = fcn_0040b170 (rsi, rbx);
    *((rbp - 0x98)) = rax;
    if (rax == -1) {
        goto label_51;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_52;
    }
    if (rax == 0) {
        rax = *((rbp - 0xa0));
        *((rbp - 0x98)) = 1;
        if (*(rax) != 0) {
            goto label_28;
        }
        ecx = *((rbp - 0x8c));
        if (ecx != 0) {
            goto label_29;
        }
    }
    rax = rbp - 0xb0;
    *((rbp - 0x90)) = 1;
    eax = mbsinit (rax + 4);
    if (eax != 0) {
        *((rbp - 0xb0)) = 0;
    }
    *((rbp - 0xa4)) = 1;
    goto label_18;
label_33:
    rax = *((rbp - 0xf8));
    *((r13 + rax*8)) = rax;
    goto label_19;
label_44:
    rax = strlen (*((rbp - 0x60)));
    *((rbp - 0x50)) = 0;
    *((rbp - 0x58)) = rax;
    *((rbp - 0x64)) = 1;
    goto label_17;
label_36:
    if (*((rbp - 0x90)) == 0) {
        goto label_20;
    }
    goto label_18;
label_51:
    *((rbp - 0x98)) = 1;
    *((rbp - 0x90)) = 0;
    goto label_20;
label_52:
    rax = strlen (*((rbp - 0xa0)));
    *((rbp - 0x90)) = 0;
    *((rbp - 0x98)) = rax;
    goto label_20;
label_28:
    assert_fail ("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xb2, "mbuiter_multi_next");
label_42:
    assert_fail ("mbsinit (&iter->state)", "mbuiter.h", 0x96, "mbuiter_multi_next");
label_29:
    fcn_00405d00 ();
label_50:
    return assert_fail ("iter->cur.wc == 0", "mbuiter.h", 0xb3, "mbuiter_multi_next");
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4066f0 */
#include <stdint.h>
 
uint64_t fcn_004066f0 (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    int64_t var_10h;
    mbstate_t * var_14h;
    int64_t var_1ch;
    char * var_20h;
    size_t var_28h;
    uint32_t var_30h;
    int64_t var_34h;
    uint32_t var_50h;
    mbstate_t * var_54h;
    uint32_t var_5ch;
    char * s;
    size_t var_68h;
    uint32_t var_70h;
    int64_t var_74h;
    uint32_t var_90h;
    int64_t var_94h;
    int64_t var_9ch;
    char * var_a0h;
    size_t var_a8h;
    int64_t var_b0h;
    uint32_t var_b4h;
    int64_t var_c0h;
    uint32_t var_d0h;
    mbstate_t * var_d4h;
    uint32_t var_dch;
    char * s1;
    size_t var_e8h;
    uint32_t var_f0h;
    int64_t var_f4h;
    int64_t var_100h;
    uint32_t var_110h;
    mbstate_t * ps;
    uint32_t var_11ch;
    char * s2;
    size_t var_128h;
    uint32_t var_130h;
    uint32_t var_134h;
    rdi = arg1;
    rsi = arg2;
label_5:
    abort ();
    r13 = rsi;
    rax = ctype_get_mb_cur_max ();
    if (rax > 1) {
        goto label_31;
    }
    r15d = *(r13);
    rax = rbp;
    if (r15b == 0) {
        goto label_7;
    }
    ecx = *(rbp);
    if (cl == 0) {
        goto label_32;
    }
    r9 = r13;
    r12d = 0;
    edx = 0;
    r8d = 0;
    eax = 1;
    goto label_33;
label_0:
    if (r9 != 0) {
        rsi = rbx;
        rdi = r9;
        *(rsp) = r9;
        rsi -= r8;
        rax = strnlen ();
        r9 = *(rsp);
        r8 = rbx;
        r9 += rax;
        if (*(r9) != 0) {
            goto label_34;
        }
    }
    *(rsp) = r8;
    rax = strlen (r13);
    al = fcn_00405b80 (r14, r13, rax, rsp + 0x110);
    r8 = *(rsp);
    if (al != 0) {
        goto label_35;
    }
    r9d = 0;
    do {
label_1:
        ecx = *(r14);
        rdx = rbx;
label_33:
        r12++;
        rbx = rdx + 1;
        r14 = rbp + 1;
        if (r15b == cl) {
            goto label_36;
        }
        if (*((rbp + 1)) == 0) {
            goto label_32;
        }
label_2:
        dl = (r12 > 9) ? 1 : 0;
        dl &= al;
    } while (dl == 0);
    rax = r12 * 5;
    if (rbx >= rax) {
        goto label_0;
    }
label_34:
    eax = ebp;
    goto label_1;
label_31:
    ecx = *(r13);
    *((rsp + 0x20)) = r13;
    rbx = rsp + 0x14;
    *((rsp + 0x10)) = 0;
    eax = ecx;
    *((rsp + 0x1c)) = 0;
    *((rsp + 0x14)) = 0;
    al >>= 5;
    eax &= 7;
    eax = *((rax*4 + 0x40f520));
    eax >>= cl;
    if ((al & 1) == 0) {
        goto label_37;
    }
    *((rsp + 0x28)) = 1;
    *((rsp + 0x34)) = ecx;
    *((rsp + 0x30)) = 1;
    *((rsp + 0x1c)) = 1;
label_26:
    eax = *((rsp + 0x34));
    if (eax != 0) {
        goto label_29;
    }
    do {
label_4:
        rax = rbp;
label_7:
        return rax;
label_36:
        ecx = *((r13 + 1));
    } while (cl == 0);
    esi = *(r14);
    if (sil == 0) {
        goto label_32;
    }
    rbx = rdx + 2;
    if (cl != sil) {
        goto label_2;
    }
    rdx = -rdx;
    rdi = r13 + rdx;
    rdx += rbp;
    goto label_38;
label_3:
    esi = *((rdx + rbx));
    if (sil == 0) {
        goto label_32;
    }
    rbx++;
    if (cl != sil) {
        goto label_2;
    }
label_38:
    ecx = *((rdi + rbx));
    if (cl != 0) {
        goto label_3;
    }
    goto label_4;
label_25:
    *((rsp + 0x28)) = 1;
    *((rsp + 0x30)) = 0;
    *((rsp + 0x1c)) = 1;
label_29:
    *((rsp + 0x60)) = r13;
    r12d = 0;
    ebx = 0;
    r14d = 1;
    *((rsp + 0x50)) = 0;
    *((rsp + 0x54)) = 0;
    *((rsp + 0x5c)) = 0;
    *((rsp + 0xa0)) = rbp;
    *((rsp + 0x90)) = 0;
    *((rsp + 0x94)) = 0;
    *((rsp + 0x9c)) = 0;
    *((rsp + 8)) = 0;
label_8:
    r15 = rsp + 0x90;
    if (*((rsp + 0x90)) != 0) {
        goto label_39;
    }
    rdx = *((rsp + 0xa0));
    ecx = *(rdx);
    eax = ecx;
    al >>= 5;
    eax &= 7;
    eax = *((rax*4 + 0x40f520));
    eax >>= cl;
    if ((al & 1) == 0) {
        goto label_40;
    }
    *((rsp + 0xa8)) = 1;
    eax = *(rdx);
    *((rsp + 0xb0)) = 1;
    *((rsp + 0xb4)) = eax;
    *((rsp + 0x9c)) = 1;
label_17:
    r15d = *((rsp + 0xb4));
    if (r15d == 0) {
        goto label_32;
    }
    al = (r12 > 9) ? 1 : 0;
    al &= r14b;
    if (al == 0) {
        goto label_41;
    }
    rdx = r12 * 5;
    if (rbx >= rdx) {
        goto label_42;
    }
    rbx++;
    r14d = eax;
label_18:
    if (*((rsp + 0x30)) == 0) {
        goto label_19;
    }
    eax = *((rsp + 0x34));
    if (*((rsp + 0xb4)) != eax) {
        goto label_43;
    }
label_15:
    ecx = *(r13);
    __asm ("movdqa xmm1, xmmword [rsp + 0xa0]");
    *((rsp + 0x120)) = r13;
    r15 = rsp + 0x114;
    __asm ("movdqa xmm0, xmmword [rsp + 0x90]");
    *((rsp + 0x110)) = 0;
    *((rsp + 0xe0)) = xmm1;
    rax = *((rsp + 0xe8));
    __asm ("movdqa xmm2, xmmword [rsp + 0xb0]");
    eax = ecx;
    __asm ("movdqa xmm3, xmmword [rsp + 0xc0]");
    al >>= 5;
    *((rsp + 0xd0)) = xmm0;
    eax &= 7;
    *((rsp + 0xf0)) = xmm2;
    eax = *((rax*4 + 0x40f520));
    *((rsp + 0x100)) = xmm3;
    *((rsp + 0xdc)) = 0;
    eax >>= cl;
    *((rsp + 0x11c)) = 0;
    *((rsp + 0x114)) = 0;
    if ((al & 1) == 0) {
        goto label_44;
    }
    *((rsp + 0x128)) = 1;
    *((rsp + 0x134)) = ecx;
    *((rsp + 0x130)) = 1;
    *((rsp + 0x11c)) = 1;
label_23:
    esi = *((rsp + 0x134));
    if (esi == 0) {
        goto label_5;
    }
label_27:
    rax = *((rsp + 0x128));
    *((rsp + 0x11c)) = 0;
    rbx++;
    while (*((rsp + 0x110)) == 0) {
        rdx = *((rsp + 0x120));
        ecx = *(rdx);
        eax = ecx;
        al >>= 5;
        eax &= 7;
        eax = *((rax*4 + 0x40f520));
        eax >>= cl;
        if ((al & 1) == 0) {
            goto label_45;
        }
        *((rsp + 0x128)) = 1;
        eax = *(rdx);
        *((rsp + 0x130)) = 1;
        *((rsp + 0x134)) = eax;
        edx = *((rsp + 0x134));
        *((rsp + 0x11c)) = 1;
        if (edx == 0) {
            goto label_46;
        }
label_6:
        if (*((rsp + 0xdc)) != 0) {
            goto label_47;
        }
        if (*((rsp + 0xd0)) != 0) {
            goto label_48;
        }
        rdx = *((rsp + 0xe0));
        ecx = *(rdx);
        eax = ecx;
        al >>= 5;
        eax &= 7;
        eax = *((rax*4 + 0x40f520));
        eax >>= cl;
        if ((al & 1) == 0) {
            goto label_49;
        }
        *((rsp + 0xe8)) = 1;
        eax = *(rdx);
        *((rsp + 0xf0)) = 1;
        *((rsp + 0xf4)) = eax;
        *((rsp + 0xdc)) = 1;
label_11:
        eax = *((rsp + 0xf4));
        if (eax == 0) {
            goto label_32;
        }
label_9:
        if (*((rsp + 0x130)) == 0) {
            goto label_10;
        }
        al = (*((rsp + 0x134)) != eax) ? 1 : 0;
label_12:
        rdx = rbx + 1;
        if (al != 0) {
            goto label_43;
        }
        rax = *((rsp + 0xe8));
        rbx = rdx;
        rax = *((rsp + 0x128));
        *((rsp + 0xdc)) = 0;
        *((rsp + 0x11c)) = 0;
    }
label_13:
    rax = ctype_get_mb_cur_max ();
    r15 = *((rsp + 0x120));
    rax = fcn_00409040 (r15, rax);
    rsi = rsp + 0x110;
    rcx = rsp + 0x114;
    rdx = rax;
    rax = fcn_0040b170 (rsi + 0x24, r15);
    *((rsp + 0x128)) = rax;
    if (rax == -1) {
        goto label_50;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_51;
    }
    if (rax == 0) {
        rax = *((rsp + 0x120));
        *((rsp + 0x128)) = 1;
        if (*(rax) != 0) {
            goto label_52;
        }
        ecx = *((rsp + 0x134));
        if (ecx != 0) {
            goto label_53;
        }
    }
    *((rsp + 0x130)) = 1;
    eax = mbsinit (rsp + 0x114);
    if (eax != 0) {
        *((rsp + 0x110)) = 0;
    }
    edx = *((rsp + 0x134));
    *((rsp + 0x11c)) = 1;
    if (edx != 0) {
        goto label_6;
    }
label_46:
    rax = *((rsp + 0xa0));
    goto label_7;
    do {
        *((rsp + 0xe8)) = 1;
        *((rsp + 0xf0)) = 0;
        *((rsp + 0xdc)) = 1;
label_10:
        rdx = *((rsp + 0xe8));
        if (rdx == *((rsp + 0x128))) {
            goto label_54;
        }
label_43:
        r15 = *((rsp + 0xa8));
label_14:
        r12++;
        *((rsp + 0x9c)) = 0;
        goto label_8;
label_49:
        eax = mbsinit (rsp + 0xd4);
        if (eax == 0) {
            goto label_55;
        }
        *((rsp + 0xd0)) = 1;
label_48:
        rax = ctype_get_mb_cur_max ();
        r15 = *((rsp + 0xe0));
        rax = fcn_00409040 (r15, rax);
        rsi = rsp + 0xd0;
        rcx = rsp + 0xd4;
        rdx = rax;
        rax = fcn_0040b170 (rsi + 0x24, r15);
        *((rsp + 0xe8)) = rax;
    } while (rax == -1);
    if (rax == 0xfffffffffffffffe) {
        goto label_56;
    }
    if (rax == 0) {
        rax = *((rsp + 0xe0));
        *((rsp + 0xe8)) = 1;
        if (*(rax) != 0) {
            goto label_52;
        }
        eax = *((rsp + 0xf4));
        if (eax != 0) {
            goto label_53;
        }
    }
    *((rsp + 0xf0)) = 1;
    eax = mbsinit (rsp + 0xd4);
    if (eax != 0) {
        *((rsp + 0xd0)) = 0;
    }
    eax = *((rsp + 0xf4));
    *((rsp + 0xdc)) = 1;
    if (eax != 0) {
        goto label_9;
    }
label_32:
    eax = 0;
    goto label_7;
label_47:
    if (*((rsp + 0xf0)) == 0) {
        goto label_10;
    }
    goto label_11;
label_54:
    eax = memcmp (*((rsp + 0xe0)), *((rsp + 0x120)), rdx);
    al = (eax != 0) ? 1 : 0;
    goto label_12;
label_45:
    eax = mbsinit (rsp + 0x114);
    if (eax == 0) {
        goto label_55;
    }
    *((rsp + 0x110)) = 1;
    goto label_13;
label_16:
    *((rsp + 0xa8)) = 1;
    *((rsp + 0xb0)) = 0;
    *((rsp + 0x9c)) = 1;
label_22:
    al = (r12 > 9) ? 1 : 0;
    al &= r14b;
    if (al == 0) {
        goto label_57;
    }
    rdx = r12 * 5;
    if (rbx >= rdx) {
        goto label_42;
    }
    rbx++;
    r14d = eax;
label_19:
    r15 = *((rsp + 0xa8));
    if (r15 != *((rsp + 0x28))) {
        goto label_14;
    }
    eax = memcmp (*((rsp + 0xa0)), *((rsp + 0x20)), r15);
    if (eax != 0) {
        goto label_14;
    }
    goto label_15;
label_50:
    *((rsp + 0x128)) = 1;
    *((rsp + 0x130)) = 0;
    *((rsp + 0x11c)) = 1;
    goto label_6;
label_40:
    r15 = rsp + 0x90;
    eax = mbsinit (r15 + 4);
    if (eax == 0) {
        goto label_55;
    }
    *((rsp + 0x90)) = 1;
label_39:
    rax = ctype_get_mb_cur_max ();
    r8 = *((rsp + 0xa0));
    rdi = r8;
    *(rsp) = r8;
    rax = fcn_00409040 (rdi, rax);
    r8 = *(rsp);
    rcx = r15 + 4;
    rdx = rax;
    rax = fcn_0040b170 (r15 + 0x24, r8);
    *((rsp + 0xa8)) = rax;
    if (rax == -1) {
        goto label_16;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_58;
    }
    if (rax == 0) {
        rax = *((rsp + 0xa0));
        *((rsp + 0xa8)) = 1;
        if (*(rax) != 0) {
            goto label_52;
        }
        eax = *((rsp + 0xb4));
        if (eax != 0) {
            goto label_53;
        }
    }
    *((rsp + 0xb0)) = 1;
    eax = mbsinit (r15 + 4);
    if (eax != 0) {
        *((rsp + 0x90)) = 0;
    }
    *((rsp + 0x9c)) = 1;
    goto label_17;
label_51:
    rax = strlen (*((rsp + 0x120)));
    *((rsp + 0x130)) = 0;
    *((rsp + 0x128)) = rax;
    *((rsp + 0x11c)) = 1;
    goto label_6;
label_56:
    rax = strlen (*((rsp + 0xe0)));
    *((rsp + 0xf0)) = 0;
    *((rsp + 0xe8)) = rax;
    *((rsp + 0xdc)) = 1;
    goto label_10;
label_41:
    rbx++;
    goto label_18;
label_57:
    rbx++;
    goto label_19;
label_42:
    eax = *((rsp + 0x5c));
    r14 = rbx;
    r14 -= *((rsp + 8));
    if (r14 == 0) {
        goto label_59;
    }
    if (al == 0) {
        goto label_60;
    }
    while (r10d != 0) {
label_21:
        rax = *((rsp + 0x68));
        *((rsp + 0x5c)) = 0;
        r14--;
        if (r14 == 0) {
            goto label_30;
        }
label_60:
        if (*((rsp + 0x50)) != 0) {
            goto label_61;
        }
        rdx = *((rsp + 0x60));
        ecx = *(rdx);
        eax = ecx;
        al >>= 5;
        eax &= 7;
        eax = *((rax*4 + 0x40f520));
        eax >>= cl;
        if ((al & 1) == 0) {
            goto label_62;
        }
        *((rsp + 0x68)) = 1;
        eax = *(rdx);
        *((rsp + 0x70)) = 1;
        *((rsp + 0x74)) = eax;
        *((rsp + 0x5c)) = 1;
label_20:
        r10d = *((rsp + 0x74));
    }
    while (r8d == 0) {
        eax = fcn_00405d20 (rbp, r13, rsp + 0x110);
        r14d = eax;
        if (al != 0) {
            goto label_35;
        }
        edx = *((rsp + 0xb0));
        goto label_63;
label_62:
        eax = mbsinit (rsp + 0x54);
        if (eax == 0) {
            goto label_55;
        }
        *((rsp + 0x50)) = 1;
label_61:
        rax = ctype_get_mb_cur_max ();
        r15 = *((rsp + 0x60));
        rax = fcn_00409040 (r15, rax);
        rsi = rsp + 0x50;
        rcx = rsp + 0x54;
        rdx = rax;
        rax = fcn_0040b170 (rsi + 0x24, r15);
        *((rsp + 0x68)) = rax;
        if (rax != -1) {
            if (rax == 0xfffffffffffffffe) {
                goto label_64;
            }
            if (rax == 0) {
                *((rsp + 0x68)) = 1;
                rax = *((rsp + 0x60));
                if (*(rax) != 0) {
                    goto label_52;
                }
                r11d = *((rsp + 0x74));
                if (r11d != 0) {
                    goto label_53;
                }
            }
            *((rsp + 0x70)) = 1;
            eax = mbsinit (rsp + 0x54);
            if (eax != 0) {
                *((rsp + 0x50)) = 0;
            }
            *((rsp + 0x5c)) = 1;
            goto label_20;
        }
        *((rsp + 0x68)) = 1;
        *((rsp + 0x70)) = 0;
        goto label_21;
label_64:
        rax = strlen (*((rsp + 0x60)));
        *((rsp + 0x70)) = 0;
        *((rsp + 0x68)) = rax;
        goto label_21;
label_58:
        rax = strlen (*((rsp + 0xa0)));
        *((rsp + 0xb0)) = 0;
        *((rsp + 0xa8)) = rax;
        *((rsp + 0x9c)) = 1;
        goto label_22;
label_30:
        if (*((rsp + 0x50)) != 0) {
            goto label_65;
        }
        rdx = *((rsp + 0x60));
        ecx = *(rdx);
        eax = ecx;
        al >>= 5;
        eax &= 7;
        eax = *((rax*4 + 0x40f520));
        eax >>= cl;
        if ((al & 1) == 0) {
            goto label_66;
        }
        *((rsp + 0x68)) = 1;
        eax = *(rdx);
        *((rsp + 0x70)) = 1;
        *((rsp + 0x74)) = eax;
        *((rsp + 0x5c)) = 1;
label_24:
        r8d = *((rsp + 0x74));
    }
label_28:
    edx = *((rsp + 0xb0));
    r14d = 1;
label_63:
    rax = rbx + 1;
    *((rsp + 8)) = rbx;
    rbx = rax;
    if (dl != 0) {
        goto label_18;
    }
    goto label_19;
label_44:
    eax = mbsinit (r15);
    if (eax == 0) {
        goto label_55;
    }
    *((rsp + 0x110)) = 1;
    rax = ctype_get_mb_cur_max ();
    r8 = *((rsp + 0x120));
    rdi = r8;
    *(rsp) = r8;
    rax = fcn_00409040 (rdi, rax);
    r8 = *(rsp);
    rcx = r15;
    rdx = rax;
    rax = fcn_0040b170 (rsp + 0x134, r8);
    *((rsp + 0x128)) = rax;
    if (rax == -1) {
        goto label_67;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_68;
    }
    if (rax == 0) {
        rax = *((rsp + 0x120));
        *((rsp + 0x128)) = 1;
        if (*(rax) != 0) {
            goto label_52;
        }
        edi = *((rsp + 0x134));
        if (edi != 0) {
            goto label_53;
        }
    }
    *((rsp + 0x130)) = 1;
    eax = mbsinit (rsp + 0x114);
    if (eax != 0) {
        *((rsp + 0x110)) = 0;
    }
    *((rsp + 0x11c)) = 1;
    goto label_23;
label_66:
    eax = mbsinit (rsp + 0x54);
    if (eax == 0) {
        goto label_55;
    }
    *((rsp + 0x50)) = 1;
label_65:
    rax = ctype_get_mb_cur_max ();
    r14 = *((rsp + 0x60));
    rax = fcn_00409040 (r14, rax);
    rsi = rsp + 0x50;
    rcx = rsp + 0x54;
    rdx = rax;
    rax = fcn_0040b170 (rsi + 0x24, r14);
    *((rsp + 0x68)) = rax;
    if (rax == -1) {
        goto label_69;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_70;
    }
    if (rax == 0) {
        *((rsp + 0x68)) = 1;
        rax = *((rsp + 0x60));
        if (*(rax) != 0) {
            goto label_52;
        }
        r9d = *((rsp + 0x74));
        if (r9d != 0) {
            goto label_53;
        }
    }
    *((rsp + 0x70)) = 1;
    eax = mbsinit (rsp + 0x54);
    if (eax != 0) {
        *((rsp + 0x50)) = 0;
    }
    *((rsp + 0x5c)) = 1;
    goto label_24;
label_37:
    eax = mbsinit (rbx);
    if (eax == 0) {
        goto label_55;
    }
    *((rsp + 0x10)) = 1;
    rax = ctype_get_mb_cur_max ();
    r12 = *((rsp + 0x20));
    rax = fcn_00409040 (r12, rax);
    rcx = rbx;
    rdx = rax;
    rax = fcn_0040b170 (rsp + 0x34, r12);
    *((rsp + 0x28)) = rax;
    if (rax == -1) {
        goto label_25;
    }
    if (rax != 0xfffffffffffffffe) {
        if (rax == 0) {
            *((rsp + 0x28)) = 1;
            rax = *((rsp + 0x20));
            if (*(rax) != 0) {
                goto label_52;
            }
            eax = *((rsp + 0x34));
            if (eax == 0) {
                goto label_71;
            }
label_53:
            fcn_00405d00 ();
        }
label_71:
        *((rsp + 0x30)) = 1;
        eax = mbsinit (rsp + 0x14);
        if (eax != 0) {
            *((rsp + 0x10)) = 0;
        }
        *((rsp + 0x1c)) = 1;
        goto label_26;
label_67:
        *((rsp + 0x128)) = 1;
        *((rsp + 0x130)) = 0;
        goto label_27;
label_68:
        rax = strlen (*((rsp + 0x120)));
        *((rsp + 0x130)) = 0;
        *((rsp + 0x128)) = rax;
        goto label_27;
label_70:
        rax = strlen (*((rsp + 0x60)));
        *((rsp + 0x70)) = 0;
        *((rsp + 0x68)) = rax;
        *((rsp + 0x5c)) = 1;
        goto label_28;
label_35:
        rax = *((rsp + 0x110));
        goto label_7;
    }
    rax = strlen (*((rsp + 0x20)));
    *((rsp + 0x30)) = 0;
    *((rsp + 0x28)) = rax;
    *((rsp + 0x1c)) = 1;
    goto label_29;
label_69:
    *((rsp + 0x68)) = 1;
    *((rsp + 0x70)) = 0;
    *((rsp + 0x5c)) = 1;
    goto label_28;
label_59:
    if (al == 0) {
        goto label_30;
    }
    if (*((rsp + 0x70)) == 0) {
        goto label_28;
    }
    goto label_24;
label_55:
    assert_fail ("mbsinit (&iter->state)", "mbuiter.h", 0x96, "mbuiter_multi_next");
label_52:
    return assert_fail ("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xb2, "mbuiter_multi_next");
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4075c0 */
#include <stdint.h>
 
uint64_t fcn_004075c0 (int64_t arg1) {
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
            edi = 0x40ddc8;
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
        *(0x00612528) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x407660 */
#include <stdint.h>
 
uint64_t fcn_00407660 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_0040b320 ();
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
        eax = 0x40ddce;
        ebx = 0x40ddd9;
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
        eax = 0x40ddd2;
        ebx = 0x40ddd5;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x40dd60;
    ebx = 0x40ddcc;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x407760 */
#include <stdint.h>
 
uint64_t fcn_00407760 (int64_t arg_c8h, char * s, int64_t arg1, int64_t arg2, int64_t arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
    int64_t var_ch;
    size_t * var_10h;
    int64_t var_18h;
    size_t var_20h;
    char * var_28h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_5dh;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    do {
        abort ();
        r15 = rdi;
        r14 = rsi;
        ebp &= 2;
        *((rsp + 0x18)) = rdx;
        *((rsp + 0x10)) = rcx;
        *((rsp + 0xc)) = r8d;
        *((rsp + 0x58)) = r9d;
        rax = ctype_get_mb_cur_max ();
        r11d = *((rsp + 0xc));
        *((rsp + 0x50)) = rax;
    } while (r11d > 0xa);
    eax = r11d;
    r10 = *((rsp + 0x10));
    /* switch table (11 cases) at 0x40de40 */
    do {
        *((rsp + 0x5d)) = 1;
        ebx = 0;
        r11d = 2;
        *((rsp + 0xc)) = 0;
        *((rsp + 0x20)) = 1;
        *((rsp + 0x48)) = 0x40dd60;
        if (ebp != 0) {
            goto label_0;
        }
        eax |= *(rax);
        *((rsp + 0xc)) = 0;
    } while (ebp != 0);
    *((rsp + 0xc)) = 1;
invalid_funccall(); //    void (*0x4079b6)() ();
    if (ebp != 0) {
        goto label_1;
    }
    if (r14 != 0) {
        *(r15) = 0x22;
    }
    *((rsp + 0x5d)) = 0;
    ebx = 1;
    *((rsp + 0xc)) = 1;
    *((rsp + 0x20)) = 1;
    *((rsp + 0x48)) = 0x40ddcc;
invalid_funccall(); //    void (*0x4077e8)() ();
    *((rsp + 0x5d)) = 1;
    ebx = 0;
    r11d = 5;
    *((rsp + 0xc)) = 1;
    *((rsp + 0x20)) = 1;
    *((rsp + 0x48)) = 0x40ddcc;
invalid_funccall(); //    void (*0x4077e8)() ();
    *((rsp + 0x5d)) = 0;
    ebx = 0;
    *((rsp + 0xc)) = 1;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x48)) = 0;
invalid_funccall(); //    void (*0x4077e8)() ();
    if (r14 != 0) {
        esi = r11d;
        *((rsp + 0x10)) = r10;
        *((rsp + 0xc)) = r11d;
        rax = fcn_00407660 (0x40dddd, esi);
        r11d = *((rsp + 0xc));
        *((rsp + 0xc8)) = rax;
        rax = fcn_00407660 (0x40dd60, r11d);
        r10 = *((rsp + 0x10));
        r11d = *((rsp + 0xc));
        *((rsp + 0xd0)) = rax;
    }
    ebx = 0;
    if (ebp != 0) {
        goto label_2;
    }
    rax = *((rsp + 0xc8));
    eax = *(rax);
    if (al == 0) {
        goto label_2;
    }
    rdx = *((rsp + 0xc8));
    do {
        if (r14 > rbx) {
            *((r15 + rbx)) = al;
        }
        rbx++;
        eax = *((rdx + rbx));
    } while (al != 0);
label_2:
    *((rsp + 0x28)) = r11d;
    *((rsp + 0x10)) = r10;
    *(rsp + 0x5d) = (ebp != 0) ? 1 : 0;
    rax = strlen (*((rsp + 0xd0)));
    *((rsp + 0xc)) = 1;
    r10 = *((rsp + 0x10));
    *((rsp + 0x20)) = rax;
    rax = *((rsp + 0xd0));
    r11d = *((rsp + 0x28));
    *((rsp + 0x48)) = rax;
invalid_funccall(); //    void (*0x4077e8)() ();
    *((rsp + 0x5d)) = 0;
    ebx = 0;
    *((rsp + 0xc)) = 0;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x48)) = 0;
invalid_funccall(); //    void (*0x4077e8)() ();
    *((rsp + 0x5d)) = 1;
    ebx = 0;
    r11d = 2;
    *((rsp + 0xc)) = 1;
    *((rsp + 0x20)) = 1;
    *((rsp + 0x48)) = 0x40dd60;
invalid_funccall(); //    void (*0x4077e8)() ();
label_0:
    *((rsp + 0x5d)) = 1;
    ebx = 0;
    *((rsp + 0xc)) = 0;
    *((rsp + 0x20)) = 1;
    *((rsp + 0x48)) = 0x40dd60;
invalid_funccall(); //    void (*0x4077e8)() ();
label_1:
    *((rsp + 0x5d)) = 1;
    ebx = 0;
    *((rsp + 0xc)) = 1;
    *((rsp + 0x20)) = 1;
    *((rsp + 0x48)) = 0x40ddcc;
invalid_funccall(); //    return void (*0x4077e8)() ();
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4077e8 */
#include <stdint.h>
 
int64_t fcn_004077e8 (size_t * arg_ch, uint32_t arg_10h, char * s, size_t n, size_t * arg_28h, size_t * arg_30h, size_t arg_38h_2, size_t arg_40h, void * s2, uint32_t arg_50h, int64_t arg_78h, uint32_t arg_5dh, size_t arg_5eh, size_t arg_5fh, size_t arg_60h, size_t arg_68h, wint_t wc, mbstate_t * ps, uint32_t arg_d8h_2, int64_t arg_d8h, int64_t arg3) {
    rdx = arg3;
    r13d = 0;
    r8d = 0;
    eax = r11d;
    r11 = r10;
    ecx = r13d;
    r10d = eax;
    r13 = r8;
    r8d = ecx;
    do {
label_25:
        bpl = (r11 != r13) ? 1 : 0;
        if (r11 == -1) {
            rax = *((rsp + 0x18));
            bpl = (*((rax + r13)) != 0) ? 1 : 0;
        }
        if (bpl == 0) {
            goto label_34;
        }
        rdi = *((rsp + 0x18));
        al = (r10d != 2) ? 1 : 0;
        al &= *((rsp + 0xc));
        r9 = rdi + r13;
        *((rsp + 0x10)) = al;
        if (al == 0) {
            goto label_35;
        }
        rax = *((rsp + 0x20));
        if (rax == 0) {
            goto label_36;
        }
        r12 = r13 + rax;
        if (r11 == -1) {
            if (rax <= 1) {
                goto label_37;
            }
            *((rsp + 0x38)) = r10d;
            *((rsp + 0x30)) = r8b;
            *((rsp + 0x28)) = r9;
            rax = strlen (rdi);
            r10d = *((rsp + 0x38));
            r8d = *((rsp + 0x30));
            r9 = *((rsp + 0x28));
            r11 = rax;
        }
label_37:
        if (r12 > r11) {
            goto label_36;
        }
        rdi = r9;
        *((rsp + 0x40)) = r10d;
        *((rsp + 0x38)) = r11;
        *((rsp + 0x30)) = r8b;
        *((rsp + 0x28)) = r9;
        eax = memcmp (rdi, *((rsp + 0x48)), *((rsp + 0x20)));
        r9 = *((rsp + 0x28));
        r8d = *((rsp + 0x30));
        r11 = *((rsp + 0x38));
        r10d = *((rsp + 0x40));
        if (eax != 0) {
            goto label_36;
        }
        if (*((rsp + 0x5d)) != 0) {
            goto label_38;
        }
        r12d = *(r9);
        if (r12b > 0x7e) {
            goto label_39;
        }
        eax = (int32_t) r12b;
        /* switch table (127 cases) at 0x40de98 */
        *((rsp + 0x10)) = 0;
label_0:
        ebp = 0;
        if (*((rsp + 0xc0)) == 0) {
            goto label_40;
        }
label_10:
        eax = r12d;
        rsi = *((rsp + 0xc0));
        ecx = r12d;
        al >>= 5;
        eax = (int32_t) al;
        eax = *((rsi + rax*4));
        eax >>= cl;
        if ((al & 1) == 0) {
            goto label_40;
        }
        al = (r10d == 2) ? 1 : 0;
label_5:
        if (*((rsp + 0x5d)) != 0) {
            goto label_41;
        }
label_6:
        r13++;
label_1:
        edx = r8d;
        edx ^= 1;
        dl &= al;
        if (dl != 0) {
            if (r14 > rbx) {
                *((r15 + rbx)) = 0x27;
            }
            rax = rbx + 1;
            if (r14 > rax) {
                *((r15 + rbx + 1)) = 0x24;
            }
            rax = rbx + 2;
            if (r14 > rax) {
                *((r15 + rbx + 2)) = 0x27;
            }
            rbx += 3;
            r8d = edx;
        }
        if (rbx < r14) {
            *((r15 + rbx)) = 0x5c;
        }
        rbx++;
label_4:
        if (rbx < r14) {
            *((r15 + rbx)) = r12b;
        }
        rbx++;
    } while (1);
    *((rsp + 0x10)) = 0;
    al = (r11 != 1) ? 1 : 0;
    if (r11 == -1) {
        rax = *((rsp + 0x18));
        al = (*((rax + 1)) != 0) ? 1 : 0;
    }
    dl = (r10d == 2) ? 1 : 0;
    if (al == 0) {
label_14:
        if (r13 != 0) {
            goto label_2;
        }
label_15:
        eax = *((rsp + 0x5d));
        al &= dl;
        if (al != 0) {
            goto label_42;
        }
    }
label_2:
    ebp = *((rsp + 0xc));
    ebp ^= 1;
    ebp |= edx;
    ebp ^= 1;
    bpl |= *((rsp + 0x5d));
    if (bpl != 0) {
        goto label_0;
    }
label_9:
    r13++;
    if (*((rsp + 0x10)) == 0) {
        goto label_43;
    }
label_3:
    al = (r10d == 2) ? 1 : 0;
    goto label_1;
    *((rsp + 0x10)) = 0;
    if (r10d == 2) {
        goto label_44;
    }
    if (r10d == 5) {
        goto label_45;
    }
    r12d = 0x3f;
    dl = (r10d == 2) ? 1 : 0;
    goto label_2;
    *((rsp + 0x10)) = 0;
    edx = 0;
    r12d = 0x27;
    if (r10d != 2) {
        goto label_2;
    }
    if (*((rsp + 0x5d)) != 0) {
        goto label_46;
    }
    if (rbx < r14) {
        *((r15 + rbx)) = 0x27;
    }
    rax = rbx + 1;
    if (r14 > rax) {
        *((r15 + rbx + 1)) = 0x5c;
    }
    rax = rbx + 2;
    if (r14 > rax) {
        *((r15 + rbx + 2)) = 0x27;
    }
    rbx += 3;
    r13++;
    r8d = 0;
    r12d = 0x27;
label_28:
    if (*((rsp + 0x10)) != 0) {
        goto label_3;
    }
    goto label_4;
    *((rsp + 0x10)) = 0;
    edx = 0;
    goto label_2;
    *((rsp + 0x10)) = 0;
label_13:
    ebp = *((rsp + 0xc));
    bpl &= *((rsp + 0x5d));
    r12d = 0x5c;
    ecx = 0x5c;
    edx = ebp;
    al = (*((rsp + 0x20)) != 0) ? 1 : 0;
    dl &= al;
    if (dl != 0) {
        goto label_47;
    }
label_8:
    if (*((rsp + 0xc)) == 0) {
        goto label_2;
    }
    eax = edx;
    r12d = ecx;
    goto label_5;
    r12d = 0x6e;
    eax = 0;
label_7:
    if (*((rsp + 0x5d)) == 0) {
        goto label_6;
    }
label_41:
    esi = r10d;
    r10 = r11;
    r11d = esi;
    goto label_19;
    r12d = 0x62;
    eax = 0;
    goto label_7;
    r12d = 0x61;
    eax = 0;
    goto label_7;
    *((rsp + 0x10)) = 0;
    r12d = 0xd;
    ecx = 0x72;
    dl = (r10d == 2) ? 1 : 0;
    goto label_8;
    *((rsp + 0x10)) = 0;
    if (r13 != 0) {
        goto label_0;
    }
    edx = 0;
    goto label_2;
    r12d = 0x66;
    eax = 0;
    goto label_7;
    r12d = 0x76;
    eax = 0;
    goto label_7;
    r12d = 0x74;
    eax = 0;
    goto label_7;
label_12:
    if (*((rsp + 0x5d)) != 0) {
        goto label_48;
    }
    *((rsp + 0x10)) = 0;
    eax = r8d;
    dl = (r10d == 2) ? 1 : 0;
    eax ^= 1;
    al &= dl;
    if (al == 0) {
        goto label_49;
    }
    if (rbx < r14) {
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
        goto label_50;
    }
    r8d = eax;
label_23:
    *((r15 + rcx)) = 0x5c;
label_24:
    rbx = rcx + 1;
    rax = r13 + 1;
    if (r10d == 2) {
        goto label_51;
    }
    r12d = 0x30;
    if (rax < r11) {
        rsi = *((rsp + 0x18));
        eax = *((rsi + rax));
        eax -= 0x30;
        if (al <= 9) {
            goto label_52;
        }
    }
label_18:
    if (*((rsp + 0xc)) == 0) {
        goto label_9;
    }
    if (dl != 0) {
        goto label_9;
    }
    if (*((rsp + 0xc0)) != 0) {
        goto label_10;
    }
label_40:
    al = (r10d == 2) ? 1 : 0;
    if (*((rsp + 0x10)) != 0) {
        goto label_5;
    }
label_29:
    ebp ^= 1;
    r13++;
    ebp &= r8d;
    goto label_17;
label_16:
    *((rsp + 0x10)) = 0;
    do {
label_39:
        if (*((rsp + 0x50)) != 1) {
            goto label_53;
        }
        *((rsp + 0x38)) = r10d;
        *((rsp + 0x30)) = r11;
        *((rsp + 0x28)) = r8b;
        rax = ctype_b_loc ();
        edx = (int32_t) r12b;
        r8d = *((rsp + 0x28));
        r11 = *((rsp + 0x30));
        rax = *(rax);
        r10d = *((rsp + 0x38));
        ecx = 1;
        edx = *((rax + rdx*2));
        dx >>= 0xe;
        edx ^= 1;
        dl &= *((rsp + 0xc));
label_31:
        if (dl != 0) {
            goto label_54;
        }
        dl = (r10d == 2) ? 1 : 0;
        goto label_2;
label_35:
        r12d = *(r9);
    } while (r12b > 0x7e);
    eax = (int32_t) r12b;
    /* switch table (127 cases) at 0x40e290 */
    r12d = 0xa;
    ecx = 0x6e;
label_11:
    eax = *((rsp + 0x5d));
    dl = (r10d == 2) ? 1 : 0;
    al &= dl;
    *((rsp + 0x10)) = al;
    if (al == 0) {
        goto label_8;
    }
    eax = r10d;
    r10 = r11;
    r11d = eax;
    eax = *((rsp + 0x10));
label_19:
    if (*((rsp + 0xc)) != 0) {
        eax = 4;
        if (al == 0) {
            r11d = eax;
            goto label_33;
        }
    }
label_33:
    r9d &= 0xfffffffd;
    rax = fcn_00407760 (r15, r14, *((rsp + 0x38)), r10, r11d, *((rsp + 0x78)));
    rbx = rax;
label_20:
    rax = rbx;
    return rax;
    r12d = 9;
    ecx = 0x74;
    goto label_11;
    r12d = 7;
    ecx = 0x61;
    dl = (r10d == 2) ? 1 : 0;
    goto label_8;
    if (*((rsp + 0xc)) != 0) {
        goto label_12;
    }
    if ((*((rsp + 0x58)) & 1) != 0) {
        goto label_55;
    }
    if (*((rsp + 0x5d)) == 0) {
        goto label_56;
    }
    ebp = 0;
    if (*((rsp + 0xc0)) == 0) {
        goto label_57;
    }
    *((rsp + 0x10)) = 0;
    r12d = 0;
    goto label_10;
    r12d = 8;
    ecx = 0x62;
    dl = (r10d == 2) ? 1 : 0;
    goto label_8;
    if (r10d != 2) {
        goto label_13;
    }
    if (*((rsp + 0x5d)) != 0) {
        goto label_46;
    }
    r13++;
    r12d = 0x5c;
label_17:
    if (bpl == 0) {
        goto label_4;
    }
    if (rbx < r14) {
        *((r15 + rbx)) = 0x27;
    }
    rax = rbx + 1;
    if (r14 > rax) {
        *((r15 + rbx + 1)) = 0x27;
    }
    rbx += 2;
    r8d = 0;
    goto label_4;
    dl = (r10d == 2) ? 1 : 0;
    goto label_14;
    dl = (r10d == 2) ? 1 : 0;
    goto label_15;
    r12d = 0xd;
    ecx = 0x72;
    goto label_11;
    r12d = 0xc;
    ecx = 0x66;
    dl = (r10d == 2) ? 1 : 0;
    goto label_8;
    r12d = 0xb;
    ecx = 0x76;
    dl = (r10d == 2) ? 1 : 0;
    goto label_8;
label_36:
    r12d = *(r9);
    if (r12b > 0x7e) {
        goto label_16;
    }
    eax = (int32_t) r12b;
    /* switch table (127 cases) at 0x40e688 */
label_43:
    ebp ^= 1;
    ebp &= r8d;
    goto label_17;
label_45:
    if ((*((rsp + 0x58)) & 4) == 0) {
        goto label_58;
    }
    rax = r13 + 2;
    edx = 0;
    r12d = 0x3f;
    if (rax >= r11) {
        goto label_2;
    }
    rsi = *((rsp + 0x18));
    if (*((rsi + r13 + 1)) != 0x3f) {
        goto label_2;
    }
    r12d = *((rsi + rax));
    if (r12b > 0x3e) {
        goto label_59;
    }
    rsi = 0x7000a38200000000;
    if (((rsi >> r12) & 1) >= 0) {
        goto label_59;
    }
    if (*((rsp + 0x5d)) != 0) {
        goto label_38;
    }
    if (rbx < r14) {
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
    ebp = 0;
    r13 = rax;
    goto label_18;
label_44:
    if (*((rsp + 0x5d)) != 0) {
        goto label_46;
    }
    ebp = 0;
    r12d = 0x3f;
    goto label_9;
label_34:
    eax = r10d;
    ecx = *((rsp + 0x5d));
    r10 = r11;
    r11d = eax;
    al = (eax == 2) ? 1 : 0;
    eax &= ecx;
    dl = (rbx == 0) ? 1 : 0;
    al &= dl;
    if (al != 0) {
        goto label_19;
    }
    rax = *((rsp + 0x48));
    if (rax == 0) {
        goto label_60;
    }
    if (cl != 0) {
        goto label_60;
    }
    edx = *(rax);
    if (dl == 0) {
        goto label_60;
    }
    rax -= rbx;
    do {
        if (r14 > rbx) {
            *((r15 + rbx)) = dl;
        }
        rbx++;
        edx = *((rax + rbx));
    } while (dl != 0);
label_60:
    if (rbx >= r14) {
        goto label_20;
    }
    *((r15 + rbx)) = 0;
    goto label_20;
label_53:
    *((rsp + 0x78)) = 0;
    if (r11 == -1) {
        *((rsp + 0x38)) = r10d;
        *((rsp + 0x30)) = r8b;
        *((rsp + 0x28)) = r9;
        rax = strlen (*((rsp + 0x18)));
        r10d = *((rsp + 0x38));
        r8d = *((rsp + 0x30));
        r9 = *((rsp + 0x28));
        r11 = rax;
    }
    eax = 0;
    *((rsp + 0x60)) = rbx;
    *((rsp + 0x5e)) = r8b;
    rbx = rax;
    *((rsp + 0x5f)) = r12b;
    *((rsp + 0x68)) = r9;
    *((rsp + 0x38)) = r15;
    *((rsp + 0x40)) = r14;
    *((rsp + 0x28)) = r11;
    *((rsp + 0x30)) = r10d;
    while (al == 0) {
label_21:
        eax = iswprint (*((rsp + 0x74)));
        rdi = rsp + 0x78;
        eax = 0;
        if (eax == 0) {
        }
        rbx += r15;
        eax = mbsinit (rdi);
        if (eax != 0) {
            goto label_61;
        }
        rax = *((rsp + 0x18));
        r14 = r13 + rbx;
        rdx = *((rsp + 0x28));
        rcx = rsp + 0x78;
        r12 = rax + r14;
        rdx -= r14;
        rax = fcn_0040b170 (rsp + 0x74, r12);
        r15 = rax;
        if (rax == 0) {
            goto label_62;
        }
        if (rax == -1) {
            goto label_63;
        }
        if (rax == 0xfffffffffffffffe) {
            goto label_64;
        }
        al = (*((rsp + 0x30)) == 2) ? 1 : 0;
        al &= *((rsp + 0x5d));
    }
    if (r15 == 1) {
        goto label_21;
    }
    rsi = *((rsp + 0x18));
    rcx = rsi + r15;
    rdx = rsi + r14 + 1;
    r8 = rcx + r14;
    goto label_65;
label_22:
    rdx++;
    if (r8 == rdx) {
        goto label_21;
    }
label_65:
    ecx = *(rdx);
    ecx -= 0x5b;
    if (cl > 0x21) {
        goto label_22;
    }
    esi = 1;
    rsi <<= cl;
    rcx = rsi;
    rsi = 0x20000002b;
    if ((rcx & rsi) == 0) {
        goto label_22;
    }
    r15 = *((rsp + 0x38));
    r14 = *((rsp + 0x40));
    r10 = *((rsp + 0x28));
    r11d = *((rsp + 0x30));
    goto label_19;
label_49:
    rcx = rbx;
    if (rbx < r14) {
        goto label_23;
    }
    goto label_24;
    do {
label_42:
        edi = r10d;
        r10 = r11;
        r11d = edi;
        goto label_19;
label_58:
        edx = 0;
        r12d = 0x3f;
        goto label_2;
label_55:
        r13++;
        goto label_25;
label_54:
        edx = *((rsp + 0xc));
label_30:
        rcx += r13;
        eax = 0;
        r9d = *((rsp + 0x5d));
        esi = *((rsp + 0x10));
        rdi = *((rsp + 0x18));
        goto label_66;
label_26:
        bpl = (r10d == 2) ? 1 : 0;
        eax = ebp;
    } while (r9b != 0);
    eax = r8d;
    eax ^= 1;
    al &= bpl;
    if (al != 0) {
        if (rbx < r14) {
            *((r15 + rbx)) = 0x27;
        }
        r8 = rbx + 1;
        if (r14 > r8) {
            *((r15 + rbx + 1)) = 0x24;
        }
        r8 = rbx + 2;
        if (r14 > r8) {
            *((r15 + rbx + 2)) = 0x27;
        }
        rbx += 3;
        r8d = eax;
    }
    if (rbx < r14) {
        *((r15 + rbx)) = 0x5c;
    }
    rax = rbx + 1;
    if (r14 > rax) {
        eax = r12d;
        al >>= 6;
        eax += 0x30;
        *((r15 + rbx + 1)) = al;
    }
    rax = rbx + 2;
    if (r14 > rax) {
        eax = r12d;
        al >>= 3;
        eax &= 7;
        eax += 0x30;
        *((r15 + rbx + 2)) = al;
    }
    r12d &= 7;
    r13++;
    rbx += 3;
    r12d += 0x30;
    if (rcx <= r13) {
        goto label_4;
    }
    eax = edx;
label_27:
    if (rbx < r14) {
        *((r15 + rbx)) = r12b;
    }
    r12d = *((rdi + r13));
    rbx++;
label_66:
    if (dl != 0) {
        goto label_26;
    }
    ebp ^= 1;
    ebp &= r8d;
    if (sil != 0) {
        if (rbx < r14) {
            *((r15 + rbx)) = 0x5c;
        }
        rbx++;
    }
    r13++;
    if (r13 >= rcx) {
        goto label_17;
    }
    if (bpl != 0) {
        if (rbx < r14) {
            *((r15 + rbx)) = 0x27;
        }
        rsi = rbx + 1;
        if (r14 > rsi) {
            *((r15 + rbx + 1)) = 0x27;
        }
        rbx += 2;
        esi = 0;
        r8d = 0;
        goto label_27;
label_50:
        rbx += 4;
        r13++;
        r8d = eax;
        r12d = 0x30;
        goto label_28;
label_47:
        r13++;
        goto label_17;
label_57:
        r12d = 0;
        goto label_29;
    }
    esi = 0;
    goto label_27;
label_56:
    r13++;
    r12d = 0;
    goto label_17;
label_51:
    r13 = rax;
    r12d = 0x30;
    goto label_28;
label_52:
    if (r14 > rbx) {
        *((r15 + rbx)) = 0x30;
    }
    rax = rcx + 2;
    if (r14 > rax) {
        *((r15 + rcx + 2)) = 0x30;
    }
    rbx = rcx + 3;
    r12d = 0x30;
    goto label_18;
label_63:
    rcx = rbx;
    r8d = *((rsp + 0x5e));
    r12d = *((rsp + 0x5f));
    rbx = *((rsp + 0x60));
    r15 = *((rsp + 0x38));
    r14 = *((rsp + 0x40));
    r11 = *((rsp + 0x28));
    r10d = *((rsp + 0x30));
    edx = *((rsp + 0xc));
label_32:
    if (rcx > 1) {
        goto label_30;
    }
    goto label_31;
label_62:
    edx = *((rsp + 0xc));
    ebp ^= 1;
    rcx = rbx;
    r15 = *((rsp + 0x38));
    r8d = *((rsp + 0x5e));
    r12d = *((rsp + 0x5f));
    rbx = *((rsp + 0x60));
    r14 = *((rsp + 0x40));
    edx &= ebp;
    r11 = *((rsp + 0x28));
    r10d = *((rsp + 0x30));
    goto label_32;
label_64:
    r11 = *((rsp + 0x28));
    rsi = r14;
    rdi = r12;
    rax = rbx;
    rcx = rbx;
    r8d = *((rsp + 0x5e));
    r12d = *((rsp + 0x5f));
    r9 = *((rsp + 0x68));
    rbx = *((rsp + 0x60));
    r15 = *((rsp + 0x38));
    r14 = *((rsp + 0x40));
    r10d = *((rsp + 0x30));
    if (rsi >= r11) {
        goto label_67;
    }
    if (*(rdi) != 0) {
        goto label_68;
    }
    goto label_67;
    do {
        if (*((r9 + rax)) == 0) {
            goto label_69;
        }
label_68:
        rax++;
        rdx = r13 + rax;
    } while (r11 > rdx);
label_69:
    rcx = rax;
label_67:
    edx = *((rsp + 0xc));
    goto label_32;
label_61:
    edx = ebp;
    rcx = rbx;
    r8d = *((rsp + 0x5e));
    rbx = *((rsp + 0x60));
    edx ^= 1;
    r12d = *((rsp + 0x5f));
    r15 = *((rsp + 0x38));
    r14 = *((rsp + 0x40));
    r11 = *((rsp + 0x28));
    r10d = *((rsp + 0x30));
    dl &= *((rsp + 0xc));
    goto label_32;
label_59:
    r12d = 0x3f;
    goto label_2;
label_38:
    eax = r10d;
    r10 = r11;
    r11d = eax;
    goto label_33;
label_46:
    eax = r10d;
    r10 = r11;
    r11d = eax;
    eax = *((rsp + 0x5d));
    goto label_19;
label_48:
    eax = r10d;
    r10 = r11;
    r11d = eax;
    al = (eax == 2) ? 1 : 0;
    goto label_19;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4079ae */
#include <stdint.h>
 
int32_t fcn_004079ae (int64_t arg1, int64_t arg3) {
    int64_t var_7bh;
    rdi = arg1;
    rdx = arg3;
    eax |= *(rax);
    dh += al;
    al &= 0xc;
    *((rbp - 0x7b)) += cl;
    if (r14 == 0) {
invalid_funccall(); //        void (*0x4079bf)() ();
    }
    *(r15) = 0x27;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4079b6 */
#include <stdint.h>
 
int32_t fcn_004079ae (int64_t arg1, int64_t arg3) {
    int64_t var_7bh;
    rdi = arg1;
    rdx = arg3;
    eax |= *(rax);
    dh += al;
    al &= 0xc;
    *((rbp - 0x7b)) += cl;
    if (r14 == 0) {
invalid_funccall(); //        void (*0x4079bf)() ();
    }
    *(r15) = 0x27;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x408770 */
#include <stdint.h>
 
uint64_t fcn_00408770 (int64_t arg1, char * * arg2, int64_t arg3, int64_t arg4) {
    char * * var_8h;
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
        rbx = *(0x00612318);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x00612330) > r15d) {
        goto label_0;
    }
    edx = r15 + 1;
    rsi = rdx;
    r12 = rdx;
    rsi <<= 4;
    if (rbx == 0x612320) {
        goto label_1;
    }
    *((rsp + 0x10)) = rdx;
    rax = fcn_004096d0 (rbx, rsi);
    *(0x00612318) = rax;
    rbx = rax;
    do {
        rdx -= rdi;
        rdi <<= 4;
        rdx <<= 4;
        rdi += rbx;
        memset (*(0x00612330), 0, *((rsp + 0x10)));
        *(0x00612330) = r12d;
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
        rax = fcn_00407760 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x612540) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00409680 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00407760 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_1:
        *((rsp + 0x10)) = rdx;
        rax = fcn_004096d0 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x00612320]");
        rdx = *((rsp + 0x10));
        rbx = rax;
        *(0x00612318) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x408c90 */
#include <stdint.h>
 
int64_t fcn_00408c90 (uint32_t arg2, char * * arg3) {
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
    rax = rdx;
    *(rsp) = esi;
    *((rsp + 4)) = 0;
    *((rsp + 8)) = 0;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x18)) = 0;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x28)) = 0;
    *((rsp + 0x30)) = 0;
    fcn_00408770 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x408e10 */
#include <stdint.h>
 
int64_t fcn_00408e10 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x00612640]");
        __asm ("movdqa xmm1, xmmword [0x00612650]");
        __asm ("movdqa xmm2, xmmword [0x00612660]");
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
        fcn_00408770 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x408fe0 */
#include <stdint.h>
 
uint64_t fcn_00408fe0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13d = edi;
    r12 = rsi;
    rbx = rdx;
    do {
label_0:
        rax = read (r13d, r12, rbx);
        if (rax >= 0) {
            goto label_1;
        }
        rax = errno_location ();
        eax = *(rax);
    } while (eax == 4);
    if (eax == 0x16) {
        if (rbx <= 0x7fffe000) {
            goto label_1;
        }
        ebx = 0x7fffe000;
        goto label_0;
    }
label_1:
    rax = rbp;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x409040 */
#include <stdint.h>
 
uint64_t fcn_00409040 (char * arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = rsi;
    rbx = rsi;
    rax = fcn_0040b1a0 (rdi, 0, rdx);
    rsi = rax;
    rsi -= rbp;
    rsi++;
    rax = rbx;
    if (rax != 0) {
        rax = rsi;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x409080 */
#include <stdint.h>
 
int32_t fcn_00409080 (int64_t arg1, int64_t arg4) {
    rdi = arg1;
    rcx = arg4;
    edx = 3;
    esi = 0;
    eax = 0;
invalid_funccall(); //    return void (*0x409d40)() ();
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x409090 */
#include <stdint.h>
 
uint64_t fcn_00409090 (uint32_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ebx = edi;
    if (edi > 2) {
        eax = ebx;
        return eax;
    }
    eax = fcn_00409080 (rdi, rsi);
    r12d = eax;
    rax = errno_location ();
    ebx = r12d;
    r13d = *(rax);
    close (ebx);
    eax = ebx;
    *(rbp) = r13d;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4090e0 */
#include <stdint.h>
 
void fcn_004090e0 (int64_t arg_20h, int64_t arg_8h, int64_t arg_10h, int64_t arg_20h_2, int64_t arg_8h_2, int64_t arg_10h_2, int64_t arg_30h, int64_t arg_8h_3, int64_t arg_10h_3, int64_t arg_18h, int64_t arg1, char * arg2, char * arg3, char * arg4, int64_t arg5, int64_t arg6) {
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
        goto label_2;
    }
    r8 = rcx;
    eax = 0;
    rcx = rdx;
    rdx = rsi;
    fprintf (rdi, "%s (%s) %s\n");
    do {
        edx = 5;
        rax = dcgettext (0, 0x40eb2b);
        ecx = 0x7df;
        rdx = rax;
        eax = 0;
        fprintf (rbp, "Copyright %s %d Free Software Foundation, Inc.");
        edx = 5;
        rax = dcgettext (0, "\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n");
        eax = fputs (rax, rbp);
        if (r12 > 9) {
            goto label_3;
        }
        /* switch table (10 cases) at 0x40ee38 */
label_2:
        eax = 0;
        fprintf (rdi, "%s %s\n");
    } while (1);
    r9 = *((rbx + 0x18));
    r14 = *((rbx + 0x38));
    edx = 5;
    r13 = *((rbx + 0x30));
    r12 = *((rbx + 0x28));
    r15 = *((rbx + 0x20));
    r8 = *((rbx + 0x10));
    *((rsp + 0x10)) = r9;
    rcx = *((rbx + 8));
    rbx = *(rbx);
    *((rsp + 8)) = r8;
    *(rsp) = rcx;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
    r9 = *((rsp + 0x30));
label_0:
    r8 = *((rsp + 0x28));
    rcx = *((rsp + 0x20));
    rdx = rbx;
    eax = 0;
    fprintf (rbp, rax);
    return rax;
    r10 = *((rbx + 0x40));
    r9 = *((rbx + 0x18));
    edx = 5;
    r8 = *((rbx + 0x10));
    rcx = *((rbx + 8));
    r14 = *((rbx + 0x38));
    r13 = *((rbx + 0x30));
    *((rsp + 0x18)) = r10;
    r12 = *((rbx + 0x28));
    r15 = *((rbx + 0x20));
    *((rsp + 0x10)) = r9;
    *((rsp + 8)) = r8;
    rbx = *(rbx);
    *(rsp) = rcx;
label_1:
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
    rdx = rbx;
    r10 = *((rsp + 0x20));
    eax = 0;
    r9 = *((rsp + 0x40));
    r8 = *((rsp + 0x38));
    rcx = *((rsp + 0x30));
    fprintf (rbp, rax);
    return rax;
    rbx = *(rbx);
    edx = 5;
    rax = dcgettext (0, "Written by %s.\n");
    rdi = rbp;
    rdx = rbx;
    rsi = rax;
    eax = 0;
invalid_funccall(); //    void (*0x401de0)() ();
    r12 = *((rbx + 8));
    edx = 5;
    rbx = *(rbx);
    rax = dcgettext (0, "Written by %s and %s.\n");
    rcx = r12;
    rdx = rbx;
    rsi = rax;
    rdi = rbp;
    eax = 0;
invalid_funccall(); //    void (*0x401de0)() ();
    r13 = *((rbx + 0x10));
    r12 = *((rbx + 8));
    edx = 5;
    rbx = *(rbx);
    rax = dcgettext (0, "Written by %s, %s, and %s.\n");
    r8 = r13;
    rcx = r12;
    rdx = rbx;
    rsi = rax;
    rdi = rbp;
    eax = 0;
invalid_funccall(); //    void (*0x401de0)() ();
    r14 = *((rbx + 0x18));
    r13 = *((rbx + 0x10));
    edx = 5;
    r12 = *((rbx + 8));
    rbx = *(rbx);
    rax = dcgettext (0, "Written by %s, %s, %s,\nand %s.\n");
    r9 = r14;
    r8 = r13;
    rcx = r12;
    rdx = rbx;
    rsi = rax;
    rdi = rbp;
    eax = 0;
invalid_funccall(); //    void (*0x401de0)() ();
    r15 = *((rbx + 0x20));
    edx = 5;
    r14 = *((rbx + 0x18));
    r13 = *((rbx + 0x10));
    r12 = *((rbx + 8));
    rbx = *(rbx);
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, and %s.\n");
    r9 = r14;
    r8 = r13;
    rcx = r12;
    do {
        rdx = rbx;
        eax = 0;
        fprintf (rbp, rax);
        return;
        rcx = *((rbx + 8));
        r12 = *((rbx + 0x28));
        edx = 5;
        r15 = *((rbx + 0x20));
        r14 = *((rbx + 0x18));
        r13 = *((rbx + 0x10));
        rbx = *(rbx);
        *(rsp) = rcx;
        dcgettext (0, "Written by %s, %s, %s,\n%s, %s, and %s.\n");
        r9 = r14;
        r8 = r13;
        rcx = *((rsp + 0x10));
    } while (1);
    r8 = *((rbx + 0x10));
    rcx = *((rbx + 8));
    edx = 5;
    r13 = *((rbx + 0x30));
    r12 = *((rbx + 0x28));
    r15 = *((rbx + 0x20));
    r14 = *((rbx + 0x18));
    *((rsp + 8)) = r8;
    *(rsp) = rcx;
    rbx = *(rbx);
    dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
    r9 = r14;
    goto label_0;
label_3:
    r10 = *((rbx + 0x40));
    r9 = *((rbx + 0x18));
    edx = 5;
    esi = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    r8 = *((rbx + 0x10));
    rcx = *((rbx + 8));
    r14 = *((rbx + 0x38));
    r13 = *((rbx + 0x30));
    *((rsp + 0x18)) = r10;
    r12 = *((rbx + 0x28));
    r15 = *((rbx + 0x20));
    *((rsp + 0x10)) = r9;
    *((rsp + 8)) = r8;
    rbx = *(rbx);
    *(rsp) = rcx;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x409550 */
#include <stdint.h>
 
uint64_t fcn_00409550 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_004090e0 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x409680 */
#include <stdint.h>
 
uint64_t fcn_00409680 (int64_t arg1) {
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
    return fcn_004098a0 ();
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4096d0 */
#include <stdint.h>
 
uint64_t fcn_004096d0 (int64_t arg1, int64_t arg2) {
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
    return fcn_004098a0 ();
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x409840 */
#include <stdint.h>
 
uint64_t fcn_00409840 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00409680 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4098a0 */
#include <stdint.h>
 
uint64_t fcn_004098a0 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x006122c0), 0, 0x40dcb9);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x4098e0 */
#include <stdint.h>
 
uint64_t fcn_004098e0 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
    uint32_t var_8h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    if (edx > 0x24) {
        goto label_23;
    }
    r15 = rsi;
    rax = rsp + 0x18;
    *((rsp + 8)) = edx;
    r14 = rcx;
    r13 = r8;
    if (rsi == 0) {
        r15 = rax;
    }
    errno_location ();
    *(rax) = 0;
    r12 = rax;
    ebx = *(rbp);
    rax = ctype_b_loc ();
    edx = *((rsp + 8));
    rsi = *(rax);
    rax = rbp;
    while ((*((rsi + rcx*2 + 1)) & 0x20) != 0) {
        rax++;
        ebx = *(rax);
        ecx = (int32_t) bl;
    }
    if (bl == 0x2d) {
        goto label_1;
    }
    rax = strtoul (rbp, r15, rdx);
    r8 = *(r15);
    rbx = rax;
    if (r8 == rbp) {
        goto label_24;
    }
    eax = *(r12);
    if (eax != 0) {
        goto label_25;
    }
    ebp = 0;
    do {
        if (r13 != 0) {
            r12d = *(r8);
            if (r12b != 0) {
                goto label_26;
            }
        }
label_3:
        *(r14) = rbx;
label_0:
        eax = ebp;
        return rax;
INVALID_JUMP;
    } while (eax == 0x22);
    do {
label_1:
        goto label_0;
label_24:
        *((rsp + 8)) = r8;
    } while (r13 == 0);
    r12d = *(rbp);
    if (r12b == 0) {
        goto label_1;
    }
    esi = (int32_t) r12b;
    ebp = 0;
    ebx = 1;
    rax = strchr (r13, rsi);
    r8 = *((rsp + 8));
    if (rax == 0) {
        goto label_1;
    }
    do {
        *((rsp + 8)) = r8;
        rax = strchr (r13, 0x30);
        r8 = *((rsp + 8));
        if (rax == 0) {
            goto label_27;
        }
        eax = *((r8 + 1));
        if (al == 0x44) {
            goto label_28;
        }
        if (al == 0x69) {
            goto label_29;
        }
        if (al == 0x42) {
            goto label_28;
        }
        r12d -= 0x42;
        if (r12b > 0x35) {
            goto label_30;
        }
        r12d = (int32_t) r12b;
        /* switch table (54 cases) at 0x40ef18 */
label_26:
        esi = (int32_t) r12b;
        *((rsp + 8)) = r8;
        rax = strchr (r13, rsi);
        r8 = *((rsp + 8));
    } while (rax != 0);
    do {
label_30:
        *(r14) = rbx;
        ebp |= 2;
        goto label_0;
label_27:
        esi = 1;
        ecx = 0x400;
label_2:
        r12d -= 0x42;
    } while (r12b > 0x35);
    r12d = (int32_t) r12b;
    /* switch table (54 cases) at 0x40f0c8 */
label_28:
    esi = 2;
    ecx = 0x3e8;
    goto label_2;
    rsi = (int64_t) esi;
label_7:
    if (rbx < 0) {
        goto label_6;
    }
    rbx += rbx;
    do {
label_4:
        r8 += rsi;
        eax = ebp;
        eax |= 2;
        *(r15) = r8;
        if (*(r8) != 0) {
        }
        goto label_3;
        rsi = (int64_t) esi;
    } while (1);
    rsi = (int64_t) esi;
label_8:
    rax = rbx;
    rax >>= 0x37;
    if (rax != 0) {
        goto label_6;
    }
    rbx <<= 9;
    goto label_4;
    rsi = (int64_t) esi;
label_9:
    edi = 7;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*rbx overflow 0*/) {
            goto label_31;
        }
label_18:
        edi--;
    } while (edi != 0);
label_5:
    ebp |= r9d;
    goto label_4;
    rsi = (int64_t) esi;
label_10:
    edi = 8;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*ebp overflow 0*/) {
            goto label_32;
        }
label_19:
        edi--;
    } while (edi != 0);
    goto label_5;
    rsi = (int64_t) esi;
label_11:
    edi = 4;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*edi overflow 0*/) {
            goto label_33;
        }
label_21:
        edi--;
    } while (edi != 0);
    goto label_5;
    rsi = (int64_t) esi;
label_12:
    edi = 5;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*edi overflow 0*/) {
            goto label_34;
        }
label_22:
        edi--;
    } while (edi != 0);
    goto label_5;
    rsi = (int64_t) esi;
label_13:
    rax = rbx;
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*edi overflow 0*/) {
        goto label_6;
    }
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*edi overflow 0*/) {
        goto label_6;
    }
    rbx = rax;
    goto label_4;
    rdx = (int64_t) ecx;
    rsi = (int64_t) esi;
label_14:
    rax = rbx;
    rdx_rax = rax * rdx;
    rbx = rax;
    if (UNKNOWN_OP /*edi !overflow 0*/) {
        goto label_4;
    }
label_6:
    rbx |= 0xffffffffffffffff;
    goto label_4;
    rsi = (int64_t) esi;
label_15:
    rax = rbx;
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*rbx overflow 0*/) {
        goto label_35;
    }
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*rbx overflow 0*/) {
        goto label_35;
    }
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*rbx overflow 0*/) {
        goto label_35;
    }
    rbx = rax;
    eax = 0;
    ebp |= eax;
    goto label_4;
    rsi = (int64_t) esi;
label_16:
    edi = 6;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*ebp overflow 0*/) {
            goto label_36;
        }
label_20:
        edi--;
    } while (edi != 0);
    goto label_5;
    rsi = (int64_t) esi;
label_17:
    rax = rbx;
    rax >>= 0x36;
    if (rax != 0) {
        goto label_6;
    }
    rbx <<= 0xa;
    goto label_4;
    esi = 1;
    goto label_7;
    esi = 1;
    goto label_4;
    esi = 1;
    goto label_8;
    esi = 1;
    ecx = 0x400;
    goto label_9;
    esi = 1;
    ecx = 0x400;
    goto label_10;
    esi = 1;
    ecx = 0x400;
    goto label_11;
    esi = 1;
    ecx = 0x400;
    goto label_12;
    esi = 1;
    ecx = 0x400;
    goto label_13;
    esi = 1;
    edx = 0x400;
    goto label_14;
    esi = 1;
    ecx = 0x400;
    goto label_15;
    esi = 1;
    ecx = 0x400;
    goto label_16;
    esi = 1;
    goto label_17;
label_29:
    esi = 0;
    ecx = 0x400;
    sil = (*((r8 + 2)) == 0x42) ? 1 : 0;
    esi = rsi + rsi + 1;
    goto label_2;
label_35:
    eax = 1;
    rbx |= 0xffffffffffffffff;
    ebp |= eax;
    goto label_4;
label_31:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_18;
label_23:
    assert_fail ("0 <= strtol_base && strtol_base <= 36", "xstrtol.c", 0x60, "xstrtoul");
label_32:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_19;
label_36:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_20;
label_33:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_21;
label_34:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_22;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x409d40 */
#include <stdint.h>
 
uint64_t fcn_00409d40 (int64_t arg_70h, int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_38h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    do {
label_2:
        rax = rsp + 0x70;
        *((rsp + 0x30)) = rdx;
        *((rsp + 0x10)) = rax;
        rax = rsp + 0x20;
        *((rsp + 0x38)) = rcx;
        *((rsp + 8)) = 0x10;
        *((rsp + 0x18)) = rax;
        if (esi != 0x406) {
            goto label_4;
        }
        r12d = *((rax + 0x10));
        eax = imp.__libc_start_main;
        *((rsp + 8)) = 0x18;
        edx = r12d;
        if (eax >= 0) {
            eax = 0;
            eax = fcntl ();
            ebx = eax;
            if (eax < 0) {
                goto label_5;
            }
label_1:
            *(0x00612678) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
        eax = fcn_00409d40 (rdi, 0, rdx, rcx, r8);
    } while (1);
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x00612678) != 0xffffffff) {
        goto label_0;
    }
label_3:
    eax = 0;
    esi = 1;
    edi = ebx;
    eax = fcntl ();
    if (eax < 0) {
        goto label_6;
    }
    eax |= 1;
    esi = 2;
    edi = ebx;
    edx = eax;
    eax = 0;
    eax = fcntl ();
    if (eax != 0xffffffff) {
        goto label_0;
    }
label_6:
    rax = errno_location ();
    ebx = 0xffffffff;
    r12d = *(rax);
    close (ebx);
    *(rbp) = r12d;
    goto label_0;
label_4:
    rax = *((rsp + 0x18));
    rdx = *((rax + 0x10));
    eax = 0;
    eax = fcntl ();
    ebx = eax;
    return rax;
label_5:
    rax = errno_location ();
    if (*(rax) != 0x16) {
        goto label_1;
    }
    eax = 0;
    eax = fcn_00409d40 (ebp, 0, r12d, rcx, r8);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x00612678) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x409e80 */
#include <stdint.h>
 
uint32_t fcn_00409e80 (int64_t arg1) {
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
invalid_funccall(); //    void (*0x401e60)() ();
label_1:
    fcn_00409ef0 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x409ec0 */
#include <stdint.h>
 
int64_t fcn_00409ec0 (uint32_t arg1) {
    rdi = arg1;
    eax = 0;
    rcx = *((rdi + 0x20));
    if (*((rdi + 0x28)) <= rcx) {
        rax = *((rdi + 0x10));
        rax -= *((rdi + 8));
        if ((*(rdi) & 0x100) == 0) {
            goto label_0;
        }
        rdx = *((rdi + 0x58));
        rdx -= *((rdi + 0x48));
        rax += rdx;
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x409ef0 */
#include <stdint.h>
 
int64_t fcn_00409ef0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x401f20)() ();
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
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x409f50 */
#include <stdint.h>
 
uint64_t fcn_00409f50 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r11 = rdi + 8;
    r12d = *((rsi + 0x30));
    ebp = *(rsi);
    rbx = *((rsi + 0x34));
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
    *((rsi + 0x34)) = ebp;
    eax -= r8d;
    r12d += eax;
    *((rsi + 0x30)) = r12d;
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
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x40a030 */
#include <stdint.h>
 
int64_t fcn_0040a030 (uint32_t arg_a0h, int64_t arg_a8h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
    uint32_t var_ch;
    int64_t var_10h;
    uint32_t var_18h;
    uint32_t var_20h;
    int64_t var_28h;
    uint32_t var_2ch;
    int64_t var_30h;
    uint32_t var_38h;
    uint32_t var_40h;
    uint32_t var_48h;
    int64_t var_4ch;
    int64_t var_50h;
    int64_t var_58h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r12 = *((rsp + 0xa0));
    *((rsp + 0x10)) = rsi;
    *(rsp) = rdx;
    eax = *((r12 + 4));
    *((rsp + 0x20)) = rcx;
    *((rsp + 0x30)) = r8;
    *((rsp + 0x28)) = r9d;
    *((rsp + 0xc)) = eax;
    if (edi <= 0) {
        goto label_47;
    }
    *((r12 + 0x10)) = 0;
    eax = *(r12);
    if (eax != 0) {
        goto label_48;
    }
    *(r12) = 1;
    eax = 1;
    do {
        r11d = *((rsp + 0xa8));
        *((r12 + 0x34)) = eax;
        *((r12 + 0x30)) = eax;
        *((r12 + 0x20)) = 0;
        if (r11d == 0) {
            goto label_49;
        }
        *((r12 + 0x2c)) = 1;
        rax = *(rsp);
        r8d = 0;
        eax = *(rax);
        if (al == 0x2d) {
            goto label_6;
        }
        if (al == 0x2b) {
            goto label_29;
        }
label_7:
        *((r12 + 0x28)) = 0;
label_1:
        *((r12 + 0x18)) = 1;
        rax = *(rsp);
        eax = *(rax);
label_0:
        eax = 0;
        if (al != 0x3a) {
            eax = *((rsp + 0xc));
        }
        *((rsp + 0xc)) = eax;
        if (r8 == 0) {
            goto label_50;
        }
        if (*(r8) == 0) {
            goto label_50;
        }
label_5:
        if (*((rsp + 0x20)) != 0) {
            rax = *(r12);
            rbx = *((rsp + 0x10));
            rdx = rax;
            rax = *((rbx + rax*8));
            esi = *((rax + 1));
            if (sil == 0x2d) {
                goto label_51;
            }
            r9d = *((rsp + 0x28));
            if (r9d == 0) {
                goto label_22;
            }
            if (*((rax + 2)) != 0) {
                goto label_51;
            }
            *((rsp + 0x2c)) = edx;
            *((rsp + 0x18)) = r8;
            rax = strchr (*(rsp), rsi);
            r8 = *((rsp + 0x18));
            rdx = *((rsp + 0x2c));
            if (rax == 0) {
                goto label_51;
            }
        }
label_22:
        rbx = r8 + 1;
        *((rsp + 0x18)) = r8;
        *((r12 + 0x20)) = rbx;
        r13d = *(r8);
        esi = r13d;
        r14d = r13d;
        rax = strchr (*(rsp), esi);
        r8 = *((rsp + 0x18));
        if (*((r8 + 1)) == 0) {
            goto label_52;
        }
label_8:
        r14d -= 0x3a;
        if (r14b <= 1) {
            goto label_53;
        }
        if (rax == 0) {
            goto label_53;
        }
        edx = *((rax + 1));
        if (*(rax) == 0x57) {
            goto label_54;
        }
label_10:
        if (dl != 0x3a) {
            goto label_15;
        }
        edx = *((r8 + 1));
        if (*((rax + 2)) == 0x3a) {
            goto label_55;
        }
        rax = *(r12);
        if (dl == 0) {
            goto label_56;
        }
        eax++;
        *((r12 + 0x10)) = rbx;
        *(r12) = eax;
label_25:
        *((r12 + 0x20)) = 0;
        goto label_15;
label_48:
        ebx = *((r12 + 0x18));
    } while (ebx == 0);
    rbx = *(rsp);
    r8 = *((r12 + 0x20));
    eax = *(rbx);
    edx = rax - 0x2b;
    edx &= 0xfd;
    if (edx != 0) {
        goto label_0;
    }
    eax = *((rbx + 1));
    rbx++;
    *(rsp) = rbx;
    goto label_0;
label_50:
    eax = *(r12);
    if (*((r12 + 0x34)) > eax) {
        *((r12 + 0x34)) = eax;
    }
    if (eax < *((r12 + 0x30))) {
        *((r12 + 0x30)) = eax;
    }
    if (*((r12 + 0x28)) == 1) {
        goto label_57;
    }
label_3:
    if (ebp == eax) {
        goto label_58;
    }
    rbx = *((rsp + 0x10));
    rdx = (int64_t) eax;
    ecx = 3;
    edi = 0x40f291;
    rdx = *((rbx + rdx*8));
    rsi = *((rbx + rdx*8));
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    cl = (ebp > eax) ? 1 : 0;
    if (cl == 0) {
        edx = *((r12 + 0x30));
        ecx = *((r12 + 0x34));
        eax++;
        *(r12) = eax;
        if (edx == ecx) {
            goto label_59;
        }
        if (eax != ecx) {
            eax = fcn_00409f50 (rbx, r12);
            edx = *((r12 + 0x30));
        }
label_21:
        *((r12 + 0x34)) = ebp;
        *(r12) = ebp;
        goto label_60;
    }
    if (*(rdx) == 0x2d) {
        goto label_61;
    }
label_4:
    r10d = *((r12 + 0x28));
    if (r10d == 0) {
        goto label_47;
    }
    eax++;
    *((r12 + 0x10)) = rdx;
    r13d = 1;
    *(r12) = eax;
    do {
label_15:
        eax = r13d;
        return rax;
label_49:
        rax = getenv ("POSIXLY_CORRECT");
        if (rax != 0) {
            goto label_62;
        }
        *((r12 + 0x2c)) = 0;
        rax = *(rsp);
        eax = *(rax);
        if (al != 0x2d) {
            goto label_63;
        }
        r8 = *((r12 + 0x20));
label_6:
        *((r12 + 0x28)) = 2;
        goto label_1;
label_58:
        ebp = *((r12 + 0x34));
        edx = *((r12 + 0x30));
label_60:
        if (edx != ebp) {
            *(r12) = edx;
        }
label_47:
        r13d = 0xffffffff;
    } while (1);
label_57:
    edx = *((r12 + 0x34));
    if (*((r12 + 0x30)) == edx) {
        goto label_64;
    }
    if (eax != edx) {
        fcn_00409f50 (*((rsp + 0x10)), r12);
        edx = *(r12);
    }
label_9:
    if (ebp <= edx) {
        goto label_65;
    }
    rax = (int64_t) edx;
    rdi = *((rsp + 0x10));
    while (*(rcx) != 0x2d) {
label_2:
        edx = rsi + 1;
        rax++;
        *(r12) = edx;
        if (ebp <= eax) {
            goto label_65;
        }
        rcx = *((rdi + rax*8));
        esi = eax;
        edx = eax;
    }
    if (*((rcx + 1)) == 0) {
        goto label_2;
    }
    eax = *(r12);
label_16:
    *((r12 + 0x34)) = edx;
    goto label_3;
label_61:
    ecx = *((rdx + 1));
    if (cl == 0) {
        goto label_4;
    }
    sil = (*((rsp + 0x20)) != 0) ? 1 : 0;
    eax = 0;
    al = (cl == 0x2d) ? 1 : 0;
    rax &= rsi;
    r8 = rdx + rax + 1;
    *((r12 + 0x20)) = r8;
    goto label_5;
label_62:
    rax = *(rsp);
    r8 = *((r12 + 0x20));
    *((r12 + 0x2c)) = 1;
    eax = *(rax);
    if (al == 0x2d) {
        goto label_6;
    }
    if (al != 0x2b) {
        goto label_7;
    }
label_29:
    *((r12 + 0x28)) = 0;
    goto label_1;
label_52:
    *(r12)++;
    goto label_8;
label_64:
    if (eax == edx) {
        goto label_9;
    }
    *((r12 + 0x30)) = eax;
    edx = eax;
    goto label_9;
label_54:
    if (dl != 0x3b) {
        goto label_10;
    }
    if (*((rsp + 0x20)) == 0) {
        goto label_66;
    }
    rax = *(r12);
    if (*((r8 + 1)) == 0) {
        goto label_67;
    }
    eax++;
    *((r12 + 0x10)) = rbx;
    *(r12) = eax;
label_32:
    *((r12 + 0x20)) = rbx;
    r13d = *(rbx);
    r14 = rbx;
    if (r13b != 0) {
        goto label_68;
    }
    goto label_69;
    do {
        r14++;
        r13d = *(r14);
        if (r13b == 0) {
            goto label_69;
        }
INVALID_JUMP;
    } while (r13b != 0x3d);
label_69:
    rcx = *((rsp + 0x20));
    r15 = *(rcx);
    if (r15 == 0) {
        goto label_66;
    }
    rax = r14;
    edx = 0;
    edi = 0;
    *((rsp + 0x48)) = r13b;
    rax -= rbx;
    *((rsp + 0x38)) = r14;
    r13d = edx;
    esi = eax;
    *((rsp + 0x40)) = ebp;
    r14 = rax;
    *((rsp + 0xa0)) = r12;
    r12 = r15;
    r15 = rdi;
    *((rsp + 0x2c)) = 0;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x18)) = rsi;
    goto label_70;
label_11:
    r11d = *((rsp + 0x28));
    if (r11d == 0) {
        eax = *((rbp + 8));
        if (*((r15 + 8)) == eax) {
            goto label_71;
        }
    }
label_30:
    *((rsp + 0x20)) = 1;
    do {
label_12:
        rbp += 0x20;
        r12 = *(rbp);
        r13d++;
        if (r12 == 0) {
            goto label_72;
        }
label_70:
        eax = strncmp (r12, rbx, r14);
    } while (eax != 0);
    rax = strlen (r12);
    if (*((rsp + 0x18)) == rax) {
        goto label_73;
    }
    if (r15 != 0) {
        goto label_11;
    }
    *((rsp + 0x2c)) = r13d;
    r15 = rbp;
    goto label_12;
label_51:
    eax = *(r8);
    r13 = r8;
    if (al == 0) {
        goto label_74;
    }
    if (al == 0x3d) {
        goto label_74;
    }
    do {
        r13++;
        eax = *(r13);
        if (al == 0) {
            goto label_75;
        }
    } while (al != 0x3d);
label_75:
    rax = r13;
    rax -= r8;
    *((rsp + 0x2c)) = eax;
label_27:
    rbx = *((rsp + 0x20));
    r15 = *(rbx);
    if (r15 == 0) {
        goto label_76;
    }
    ecx = 0;
    *((rsp + 0x40)) = r13;
    r14d = 0;
    *((rsp + 0x4c)) = ebp;
    rsi = r8;
    r13 = rax;
    *((rsp + 0x38)) = 0xffffffff;
    *((rsp + 0x48)) = 0;
    *((rsp + 0x18)) = 0;
    goto label_77;
label_13:
    edi = *((rsp + 0x48));
    if (edi != 0) {
        goto label_18;
    }
    esi = *((rsp + 0x28));
    if (esi == 0) {
        ecx = *((rbx + 8));
        if (*((rax + 8)) == ecx) {
            goto label_78;
        }
    }
label_17:
    rax = malloc (0x10);
    if (rax == 0) {
        goto label_79;
    }
    *(rax) = rbx;
    *((rax + 8)) = r14;
    r14 = rax;
    do {
label_18:
        rbx += 0x20;
        r15 = *(rbx);
        ebp++;
        if (r15 == 0) {
            goto label_80;
        }
label_14:
label_77:
        eax = strncmp (r15, *((r12 + 0x20)), r13);
    } while (eax != 0);
    eax = strlen (r15);
    if (*((rsp + 0x2c)) == eax) {
        goto label_81;
    }
    rax = *((rsp + 0x18));
    if (rax != 0) {
        goto label_13;
    }
    *((rsp + 0x18)) = rbx;
    rbx += 0x20;
    r15 = *(rbx);
    *((rsp + 0x38)) = ebp;
    ebp++;
    if (r15 != 0) {
        goto label_14;
    }
label_80:
    eax = *((rsp + 0x48));
    r13 = *((rsp + 0x40));
    ebp = *((rsp + 0x4c));
    sil = (r14 != 0) ? 1 : 0;
    rdx = *(r12);
    if (al != 0) {
        goto label_82;
    }
    if (sil != 0) {
        goto label_82;
    }
    if (*((rsp + 0x18)) == 0) {
        goto label_76;
    }
label_19:
    eax = rdx + 1;
    rbx = *((rsp + 0x18));
    *(r12) = eax;
    ecx = *((rbx + 8));
    if (*(r13) == 0) {
        goto label_83;
    }
    if (ecx == 0) {
        goto label_84;
    }
    r13++;
    *((r12 + 0x10)) = r13;
label_20:
    rbx = *((r12 + 0x20));
    rax = strlen (*((r12 + 0x20)));
    rbx += rax;
    rax = *((rsp + 0x30));
    *((r12 + 0x20)) = rbx;
    if (rax != 0) {
        ebx = *((rsp + 0x38));
        *(rax) = ebx;
    }
    rsi = *((rsp + 0x18));
    rax = *((rsi + 0x10));
    r13d = *((rsi + 0x18));
    if (rax == 0) {
        goto label_15;
    }
label_31:
    *(rax) = r13d;
    r13d = 0;
    goto label_15;
label_65:
    eax = edx;
    goto label_16;
label_53:
    ebp = *((rsp + 0xc));
    if (ebp != 0) {
        goto label_85;
    }
label_26:
    *((r12 + 8)) = r13d;
    r13d = 0x3f;
    goto label_15;
label_78:
    rsi = *((rbx + 0x10));
    if (*((rax + 0x10)) != rsi) {
        goto label_17;
    }
    esi = *((rbx + 0x18));
    if (*((rax + 0x18)) != esi) {
        goto label_17;
    }
    eax = *((rsp + 0x28));
    *((rsp + 0x48)) = eax;
    goto label_18;
label_81:
    esi = *((rsp + 0x48));
    r15d = ebp;
    r13 = *((rsp + 0x40));
    ebp = *((rsp + 0x4c));
    if (esi == 0) {
        goto label_86;
    }
label_23:
    rdi = r14;
    if (r14 == 0) {
        goto label_24;
    }
    do {
        r14 = *((rdi + 8));
        eax = free (rdi);
        rdi = r14;
    } while (r14 != 0);
label_24:
    edx = *(r12);
    *((rsp + 0x38)) = r15d;
    *((rsp + 0x18)) = rbx;
    goto label_19;
label_83:
    if (ecx != 1) {
        goto label_20;
    }
    if (eax >= ebp) {
        goto label_87;
    }
    rcx = *((rsp + 0x10));
    rax = (int64_t) eax;
    edx += 2;
    *(r12) = edx;
    rax = *((rcx + rax*8));
    *((r12 + 0x10)) = rax;
    goto label_20;
label_59:
    *((r12 + 0x30)) = eax;
    edx = eax;
    goto label_21;
label_63:
    if (al == 0x2b) {
        goto label_88;
    }
    *((r12 + 0x28)) = 1;
    r8 = *((r12 + 0x20));
    goto label_1;
label_76:
    r14d = *((rsp + 0x28));
    if (r14d == 0) {
        goto label_89;
    }
    rsi = *((rsp + 0x10));
    rax = (int64_t) edx;
    rbx = *((rsi + rax*8));
    if (*((rbx + 1)) == 0x2d) {
        goto label_90;
    }
    r8 = *((r12 + 0x20));
    *((rsp + 0x2c)) = edx;
    esi = *(r8);
    *((rsp + 0x18)) = r8;
    rax = strchr (*(rsp), rsi);
    r8 = *((rsp + 0x18));
    edx = *((rsp + 0x2c));
    if (rax != 0) {
        goto label_22;
    }
    ecx = *((rsp + 0xc));
    if (ecx != 0) {
label_34:
        rax = *((rsp + 0x10));
        ebp = *(rbx);
        edx = 5;
        *(rsp) = r8;
        rbx = *(rax);
        rax = dcgettext (0, "%s: unrecognized option '%c%s'\n");
        r8 = *(rsp);
        ecx = ebp;
        rdx = rbx;
        eax = 0;
        fprintf (*(obj.stderr), rax);
        edx = *(r12);
    }
label_33:
    edx++;
    r13d = 0x3f;
    *((r12 + 0x20)) = 0x40f2d5;
    *(r12) = edx;
    *((r12 + 8)) = 0;
    goto label_15;
label_86:
    if (r14 != 0) {
        goto label_23;
    }
    goto label_24;
label_55:
    if (dl == 0) {
        goto label_91;
    }
    *((r12 + 0x10)) = rbx;
    *(r12)++;
    goto label_25;
label_84:
    edx = *((rsp + 0xc));
    if (edx != 0) {
        rcx = *((rsp + 0x10));
        rax = (int64_t) eax;
        rsi = *((rsp + 0x18));
        rax = *((rcx + rax*8 - 8));
        rbp = *(rsi);
        rbx = *(rcx);
        if (*((rax + 1)) == 0x2d) {
            goto label_92;
        }
        r13d = *(rax);
        edx = 5;
        rax = dcgettext (0, "%s: option '%c%s' doesn't allow an argument\n");
        r8 = rbp;
        rdx = rbx;
        ecx = r13d;
        eax = 0;
        fprintf (*(obj.stderr), rax);
    }
label_41:
    rbx = *((r12 + 0x20));
    r13d = 0x3f;
    rax = strlen (rbx);
    rbx += rax;
    rax = *((rsp + 0x18));
    *((r12 + 0x20)) = rbx;
    eax = *((rax + 0x18));
    *((r12 + 8)) = eax;
    goto label_15;
label_79:
    if (r14 == 0) {
        goto label_93;
    }
    do {
        r14 = *((r14 + 8));
        free (r14);
        rdi = r14;
    } while (r14 != 0);
label_93:
    *((rsp + 0x48)) = 1;
    goto label_18;
label_85:
    rax = *((rsp + 0x10));
    edx = 5;
    rbx = *(rax);
    rax = dcgettext (0, "%s: invalid option -- '%c'\n");
    ecx = r13d;
    rdx = rbx;
    eax = 0;
    eax = fprintf (*(obj.stderr), rax);
    goto label_26;
label_56:
    if (ebp == eax) {
        goto label_94;
    }
    rsi = *((rsp + 0x10));
    edx = rax + 1;
    *(r12) = edx;
    rax = *((rsi + rax*8));
    *((r12 + 0x10)) = rax;
    goto label_25;
label_74:
    *((rsp + 0x2c)) = 0;
    eax = 0;
    goto label_27;
label_82:
    ecx = *((rsp + 0xc));
    if (ecx == 0) {
        goto label_37;
    }
    if (sil == 0) {
        goto label_95;
    }
    rax = *((rsp + 0x10));
    *((rsp + 0x58)) = r14;
    rbp = *((rax + rdx*8));
    rbx = *(rax);
    edx = 5;
    rax = dcgettext (0, "%s: option '%s' is ambiguous; possibilities:");
    rdx = rbx;
    rcx = rbp;
    eax = 0;
    fprintf (*(obj.stderr), rax);
    rbx = rsp + 0x50;
    rax = *((rsp + 0x18));
    while (rbx != 0) {
        rax = *(rbx);
        rdx = *(rax);
        eax = 0;
        fprintf (*(obj.stderr), " '--%s'");
        rbx = *((rbx + 8));
    }
    fputc (0xa, *(obj.stderr));
label_38:
    rbx = *((r12 + 0x20));
    rax = strlen (*((r12 + 0x20)));
    *(r12)++;
    *((r12 + 8)) = 0;
    rbx += rax;
    *((r12 + 0x20)) = rbx;
    do {
label_28:
        r13d = 0x3f;
        goto label_15;
label_37:
        rbx = *((r12 + 0x20));
        *(rsp) = edx;
        rax = strlen (rbx);
        edx = *(rsp);
        *((r12 + 8)) = 0;
        rbx += rax;
        edx++;
        *((r12 + 0x20)) = rbx;
        *(r12) = edx;
    } while (r14 == 0);
    do {
        rbx = *((rdi + 8));
        free (r14);
        rdi = rbx;
    } while (rbx != 0);
    goto label_28;
label_88:
    r8 = *((r12 + 0x20));
    goto label_29;
label_71:
    rax = *((rbp + 0x10));
    if (*((r15 + 0x10)) != rax) {
        goto label_30;
    }
    eax = *((rbp + 0x18));
    eax = 1;
    if (*((r15 + 0x18)) == eax) {
        eax = *((rsp + 0x20));
    }
    *((rsp + 0x20)) = eax;
    goto label_12;
label_72:
    r10d = *((rsp + 0x20));
    r13d = *((rsp + 0x48));
    r14 = *((rsp + 0x38));
    ebp = *((rsp + 0x40));
    r12 = *((rsp + 0xa0));
    if (r10d != 0) {
        goto label_96;
    }
    if (r15 == 0) {
        goto label_66;
    }
label_36:
    eax = *((r15 + 8));
    if (r13b == 0) {
        goto label_97;
    }
    if (eax == 0) {
        goto label_98;
    }
    r14++;
    *((r12 + 0x10)) = r14;
label_35:
    rax = strlen (rbx);
    rbx += rax;
    rax = *((rsp + 0x30));
    *((r12 + 0x20)) = rbx;
    if (rax != 0) {
        ebx = *((rsp + 0x2c));
        *(rax) = ebx;
    }
    rax = *((r15 + 0x10));
    r13d = *((r15 + 0x18));
    if (rax != 0) {
        goto label_31;
    }
    goto label_15;
label_67:
    if (ebp == eax) {
        goto label_99;
    }
    rbx = *((rsp + 0x10));
    edx = rax + 1;
    *(r12) = edx;
    rbx = *((rbx + rax*8));
    *((r12 + 0x10)) = rbx;
    goto label_32;
label_91:
    *((r12 + 0x10)) = 0;
    goto label_25;
label_89:
    r13d = *((rsp + 0xc));
    if (r13d == 0) {
        goto label_33;
    }
    rax = *((rsp + 0x10));
    rbp = *((r12 + 0x20));
    rbx = *((rax + rdx*8));
    r8 = rbp;
    if (*((rbx + 1)) != 0x2d) {
        goto label_34;
    }
label_39:
    rax = *((rsp + 0x10));
    edx = 5;
    rbx = *(rax);
    rax = dcgettext (0, "%s: unrecognized option '--%s'\n");
    rcx = rbp;
    rdx = rbx;
    eax = 0;
    fprintf (*(obj.stderr), rax);
    edx = *(r12);
    goto label_33;
label_94:
    edi = *((rsp + 0xc));
    if (edi != 0) {
        goto label_100;
    }
label_40:
    rax = *(rsp);
    *((r12 + 8)) = r13d;
    r13d = 0;
    r13b = (*(rax) != 0x3a) ? 1 : 0;
    r13d = r13 * 5;
    goto label_25;
label_97:
    if (eax == 1) {
        goto label_101;
    }
    *((r12 + 0x10)) = 0;
    goto label_35;
label_73:
    eax = r13d;
    rsi = rbp;
    r14 = *((rsp + 0x38));
    r13d = *((rsp + 0x48));
    ebp = *((rsp + 0x40));
    r12 = *((rsp + 0xa0));
    *((rsp + 0x2c)) = eax;
    r15 = rsi;
    goto label_36;
label_95:
    if (al == 0) {
        goto label_37;
    }
    rax = *((rsp + 0x10));
    rbp = *((rax + rdx*8));
    rbx = *(rax);
    edx = 5;
    rax = dcgettext (0, "%s: option '%s' is ambiguous\n");
    rcx = rbp;
    rdx = rbx;
    eax = 0;
    fprintf (*(obj.stderr), rax);
    goto label_38;
label_87:
    r15d = *((rsp + 0xc));
    if (r15d != 0) {
        goto label_102;
    }
label_42:
    rbx = *((r12 + 0x20));
    rax = strlen (*((r12 + 0x20)));
    rbx += rax;
    rax = *((rsp + 0x18));
    *((r12 + 0x20)) = rbx;
    eax = *((rax + 0x18));
    *((r12 + 8)) = eax;
    rax = *(rsp);
    if (*(rax) != 0x3a) {
        goto label_28;
    }
label_43:
    r13d = 0x3a;
    goto label_15;
label_90:
    eax = *((rsp + 0xc));
    if (eax == 0) {
        goto label_33;
    }
    rbp = *((r12 + 0x20));
    goto label_39;
label_96:
    r9d = *((rsp + 0xc));
    while (1) {
        r13d = 0x3f;
        rax = strlen (rbx);
        *(r12)++;
        rbx += rax;
        *((r12 + 0x20)) = rbx;
        goto label_15;
label_66:
        *((r12 + 0x20)) = 0;
        r13d = 0x57;
        goto label_15;
label_100:
        rax = *((rsp + 0x10));
        edx = 5;
        rbx = *(rax);
        rax = dcgettext (0, "%s: option requires an argument -- '%c'\n");
        ecx = r13d;
        rdx = rbx;
        eax = 0;
        fprintf (*(obj.stderr), rax);
        goto label_40;
label_99:
        ebx = *((rsp + 0xc));
        if (ebx != 0) {
            goto label_103;
        }
label_44:
        rax = *(rsp);
        *((r12 + 8)) = r13d;
        r13d = 0;
        r13b = (*(rax) != 0x3a) ? 1 : 0;
        r13d = r13 * 5;
        goto label_15;
label_101:
        rax = *(r12);
        if (eax >= ebp) {
            goto label_104;
        }
        rsi = *((rsp + 0x10));
        edx = rax + 1;
        *(r12) = edx;
        rax = *((rsi + rax*8));
        *((r12 + 0x10)) = rax;
        goto label_35;
label_92:
        edx = 5;
        rax = dcgettext (0, "%s: option '--%s' doesn't allow an argument\n");
        rcx = rbp;
        rdx = rbx;
        eax = 0;
        fprintf (*(obj.stderr), rax);
        goto label_41;
label_102:
        rax = *((rsp + 0x18));
        edx = 5;
        rbp = *(rax);
        rax = *((rsp + 0x10));
        rbx = *(rax);
        rax = dcgettext (0, "%s: option '--%s' requires an argument\n");
        rcx = rbp;
        rdx = rbx;
        eax = 0;
        fprintf (*(obj.stderr), rax);
        goto label_42;
label_98:
        r8d = *((rsp + 0xc));
        if (r8d != 0) {
            goto label_105;
        }
label_45:
        r13d = 0x3f;
        rax = strlen (rbx);
        rbx += rax;
        *((r12 + 0x20)) = rbx;
        goto label_15;
        rax = *((rsp + 0x10));
        edx = 5;
        rbp = *(rax);
        rax = dcgettext (0, "%s: option '-W %s' is ambiguous\n");
        rcx = rbx;
        rdx = rbp;
        eax = 0;
        eax = fprintf (*(obj.stderr), rax);
        rbx = *((r12 + 0x20));
    }
label_104:
    if (*((rsp + 0xc)) != 0) {
        goto label_106;
    }
label_46:
    rdx = *((r12 + 0x20));
    eax = 0;
    rcx |= 0xffffffffffffffff;
    rdi = rdx;
    __asm ("repne scasb al, byte [rdi]");
    rax = rcx;
    rax = ~rax;
    rax = rdx + rax - 1;
    *((r12 + 0x20)) = rax;
    rax = *(rsp);
    if (*(rax) != 0x3a) {
        goto label_28;
    }
    goto label_43;
label_103:
    rax = *((rsp + 0x10));
    edx = 5;
    rbx = *(rax);
    rax = dcgettext (0, "%s: option requires an argument -- '%c'\n");
    ecx = r13d;
    rdx = rbx;
    eax = 0;
    fprintf (*(obj.stderr), rax);
    goto label_44;
label_105:
    rax = *((rsp + 0x10));
    rbp = *(r15);
    edx = 5;
    rbx = *(rax);
    rax = dcgettext (0, "%s: option '-W %s' doesn't allow an argument\n");
    rcx = rbp;
    rdx = rbx;
    eax = 0;
    fprintf (*(obj.stderr), rax);
    rbx = *((r12 + 0x20));
    goto label_45;
label_106:
    rax = *((rsp + 0x10));
    rbp = *(r15);
    edx = 5;
    rbx = *(rax);
    rax = dcgettext (0, "%s: option '-W %s' requires an argument\n");
    rcx = rbp;
    rdx = rbx;
    eax = 0;
    fprintf (*(obj.stderr), rax);
    goto label_46;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x40b070 */
#include <stdint.h>
 
int32_t fcn_0040b070 (int64_t arg_10h) {
    eax = *(0x0061233c);
    *(0x00612680) = eax;
    eax = *(0x00612338);
    *(0x00612684) = eax;
    eax = *((rsp + 0x10));
    fcn_0040a030 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0061233c) = edx;
    rdx = imp.__libc_start_main;
    *(0x00612ec8) = rdx;
    edx = imp.__libc_start_main;
    *(0x00612334) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x40b0f0 */
#include <stdint.h>
 
void fcn_0040b0f0 (void) {
    r9d = 0;
    fcn_0040b070 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x40b170 */
#include <stdint.h>
 
int64_t fcn_0040b170 (uint32_t arg2, size_t * arg3) {
    rsi = arg2;
    rdx = arg3;
    if (rsi != 0) {
        if (rdx != 0) {
            goto label_0;
        }
        rax = 0xfffffffffffffffe;
        return rax;
    }
    edx = 1;
    esi = 0x40f2d5;
    edi = 0;
label_0:
    return mbrtowc ();
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x40b1a0 */
#include <stdint.h>
 
int64_t fcn_0040b1a0 (uint32_t arg1, int64_t arg2, uint32_t arg3) {
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
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x40b2b0 */
#include <stdint.h>
 
uint64_t fcn_0040b2b0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = fpending ();
    r12 = rax;
    eax = ferror (rbx);
    eax = fclose (rbx);
    if (ebp != 0) {
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
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x40b320 */
#include <stdint.h>
 
uint64_t fcn_0040b320 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x40f2d5;
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
        r15d = 0x40f2d5;
label_2:
        *(0x006126b8) = r15;
        goto label_1;
label_19:
        r12d = 0x66;
        r14d = 0x65;
        r13d = "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
label_14:
        rax = malloc (0x74);
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
        r15d = 0x40f2d5;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x40d331;
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
    fclose (rbx);
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
        r15d = 0x40f2d5;
        rbx = rax;
        free (r15);
        fclose (r13);
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
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x40b890 */
#include <stdint.h>
 
uint64_t fcn_0040b890 (int64_t arg1) {
    rdi = arg1;
    rdi += 0x10;
    if (rdi >= 0) {
        rax = malloc (rdi);
        ecx = 0;
        rsi = rax;
        if (rax != 0) {
            rcx = rax + 0x10;
            *((rax + 0xc)) = 0x1415fb4a;
            rdx = 0xff00ff00ff00ff01;
            rax = rcx;
            rdx_rax = rax * rdx;
            rdx >>= 8;
            rax = rdx;
            rax <<= 8;
            rdx += rax;
            rax = rcx;
            rax -= rdx;
            rdx = rax;
            rax = *((rax*8 + 0x6126c0));
            *((rdx*8 + 0x6126c0)) = rcx;
            *(rsi) = rax;
        }
        rax = rcx;
        return rax;
    }
    ecx = 0;
    rax = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x40b900 */
#include <stdint.h>
 
int64_t fcn_0040b900 (uint32_t arg1) {
    rdi = arg1;
    if (rdi == 0) {
        goto label_0;
    }
    while (rcx == 0) {
label_0:
        return;
        rdx = 0xff00ff00ff00ff01;
        rax = rdi;
        rdx_rax = rax * rdx;
        rdx >>= 8;
        rax = rdx;
        rax <<= 8;
        rdx += rax;
        rax = rdi;
        rax -= rdx;
        rcx = *((rax*8 + 0x6126c0));
    }
    if (rcx != rdi) {
        goto label_1;
    }
    goto label_2;
    do {
        if (rdi == rax) {
            goto label_3;
        }
        rcx = rax;
label_1:
        rax = *((rcx - 0x10));
    } while (rax != 0);
    goto label_0;
label_3:
    rcx -= 0x10;
    do {
        rax = *((rdi - 0x10));
        rdi -= 0x10;
        *(rcx) = rax;
invalid_funccall(); //        void (*0x401b10)() ();
label_2:
        rcx = rax*8 + 0x6126c0;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x40ba40 */
#include <stdint.h>
 
uint64_t fcn_0040ba40 (int64_t arg1) {
    mbstate_t * ps;
    int64_t var_ch;
    char * s;
    size_t var_18h;
    int64_t var_20h;
    int64_t var_24h;
    rdi = arg1;
    rbx = rdi;
    rax = ctype_get_mb_cur_max ();
    if (rax > 1) {
        goto label_4;
    }
    rax = strlen (rbx);
    rbx = rax;
    do {
        rax = rbx;
        return rax;
label_4:
        *((rsp + 0x10)) = rbx;
        ebx = 0;
        *(rsp) = 0;
        *((rsp + 4)) = 0;
        *((rsp + 0xc)) = 0;
        goto label_5;
label_0:
        rdx = *((rsp + 0x10));
        ecx = *(rdx);
        eax = ecx;
        al >>= 5;
        eax &= 7;
        eax = *((rax*4 + 0x40f520));
        eax >>= cl;
        if ((al & 1) == 0) {
            goto label_6;
        }
        *((rsp + 0x18)) = 1;
        eax = *(rdx);
        *((rsp + 0x20)) = 1;
        *((rsp + 0x24)) = eax;
label_1:
        eax = *((rsp + 0x24));
    } while (eax == 0);
label_3:
    rax = *((rsp + 0x18));
    rbx++;
    *((rsp + 0xc)) = 0;
label_5:
    if (*(rsp) == 0) {
        goto label_0;
    }
label_2:
    rax = ctype_get_mb_cur_max ();
    rbp = *((rsp + 0x10));
    rax = fcn_00409040 (rbp, rax);
    rcx = rsp + 4;
    rdx = rax;
    rax = fcn_0040b170 (rsp + 0x24, rbp);
    *((rsp + 0x18)) = rax;
    if (rax == -1) {
        goto label_7;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_8;
    }
    if (rax == 0) {
        *((rsp + 0x18)) = 1;
        rax = *((rsp + 0x10));
        if (*(rax) != 0) {
            goto label_9;
        }
        edx = *((rsp + 0x24));
        if (edx != 0) {
            goto label_10;
        }
    }
    *((rsp + 0x20)) = 1;
    eax = mbsinit (rsp + 4);
    if (eax == 0) {
        goto label_1;
    }
    *(rsp) = 0;
    goto label_1;
label_6:
    eax = mbsinit (rsp + 4);
    if (eax != 0) {
        *(rsp) = 1;
        goto label_2;
label_7:
        *((rsp + 0x18)) = 1;
        *((rsp + 0x20)) = 0;
        goto label_3;
label_8:
        rax = strlen (*((rsp + 0x10)));
        *((rsp + 0x20)) = 0;
        *((rsp + 0x18)) = rax;
        goto label_3;
    }
    assert_fail ("mbsinit (&iter->state)", "mbuiter.h", 0x96, "mbuiter_multi_next");
label_9:
    assert_fail ("*iter->cur.ptr == '\\0'", "mbuiter.h", 0xb2, "mbuiter_multi_next");
label_10:
    return assert_fail ("iter->cur.wc == 0", "mbuiter.h", 0xb3, "mbuiter_multi_next");
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x40bc80 */
#include <stdint.h>
 
int64_t fcn_0040bc80 (void) {
    rax = 0x6122a8;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_xargs.elf @ 0x40bc98 */
#include <stdint.h>
 
void fcn_0040bc98 (int64_t arg3) {
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
