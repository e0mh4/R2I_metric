/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x401d80 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    void * ptr;
    int64_t var_10h;
    uint32_t var_1bh;
    int64_t fildes;
    int64_t var_20h;
    int64_t var_38h;
    int64_t var_50h;
    int64_t var_b0h;
    int64_t var_b8h;
    rdi = argc;
    rsi = argv;
    r12 = rsi;
    ebp = 0;
    ebx = edi;
    fcn_00403bb0 (*(rsi));
    setlocale (6, 0x409c07);
    bindtextdomain (0x407f70, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x407f70, rsi);
    edi = 0x403810;
    fcn_00407e80 ();
    rax = getpagesize ();
    rax = (int64_t) eax;
    *(0x0060c320) = rax;
    setvbuf (*(obj.stdout), 0, 1, 0);
    *(0x0060c331) = 0;
    *(0x0060c332) = 0;
    *(0x0060c333) = 0;
    *(0x0060c334) = 0;
    *(0x0060c330) = 0;
    *(0x0060c338) = 0;
    *(0x0060c340) = 0;
    *(0x0060c348) = 0;
    *(0x0060c350) = 0;
    *(0x0060c358) = 0;
    do {
label_0:
        r8d = 0;
        ecx = 0x408200;
        edx = "clLmw";
        rsi = r12;
        edi = ebx;
        eax = fcn_004072a0 ();
        if (eax == 0xffffffff) {
            goto label_21;
        }
        if (eax == 0x63) {
            goto label_22;
        }
        if (eax <= 0x63) {
            goto label_23;
        }
        if (eax == 0x6d) {
            goto label_24;
        }
        if (eax <= 0x6d) {
            goto label_25;
        }
        if (eax != 0x77) {
            goto label_26;
        }
        *(0x0060c333) = 1;
    } while (1);
label_23:
    if (eax == 0xffffff7e) {
        goto label_27;
    }
    if (eax == 0x4c) {
        *(0x0060c330) = 1;
        goto label_0;
label_26:
        if (eax != 0x80) {
            goto label_20;
        }
        rbp = imp.__libc_start_main;
        goto label_0;
label_25:
        if (eax != 0x6c) {
            goto label_20;
        }
        *(0x0060c334) = 1;
        goto label_0;
    }
    if (eax != 0xffffff7d) {
label_20:
        eax = fcn_00403350 (1);
label_24:
        *(0x0060c332) = 1;
        goto label_0;
label_22:
        *(0x0060c331) = 1;
        goto label_0;
    }
    eax = 0;
    rcx = *(0x0060c250);
    r9d = "David MacKenzie";
    r8d = "Paul Rubin";
    fcn_00406060 (*(obj.stdout), 0x407ef3, "GNU coreutils");
    exit (0);
label_21:
    if (*(0x0060c334) == 0) {
        if (*(0x0060c333) == 0) {
            goto label_28;
        }
    }
label_8:
    rax = *(0x0060c2bc);
    if (rbp == 0) {
        goto label_29;
    }
    if (ebx > eax) {
        goto label_30;
    }
    eax = strcmp (rbp, 0x409bea);
    if (eax != 0) {
        goto label_31;
    }
    rbx = stdin;
label_14:
    eax = fileno (*(obj.stdin));
    rdx = rsp + 0x20;
    edi = 1;
    esi = eax;
    *(rsp) = rdx;
    eax = fxstat ();
    if (eax == 0) {
        eax = *((rsp + 0x38));
        eax &= 0xf000;
        if (eax == 0x8000) {
            goto label_32;
        }
    }
label_16:
    rax = fcn_004036e0 (rbx);
    r14 = rax;
    if (rax == 0) {
        goto label_33;
    }
    *((rsp + 0x1b)) = 0;
label_17:
    ebx = 0;
    rax = fcn_004061a0 (0x98);
    ecx = 1;
    *((rsp + 8)) = rax;
    *(rax) = 1;
label_11:
    *(0x0060c32c) = ecx;
    r12d = 0;
    r13d = 1;
    while (al == 0) {
        eax = strcmp (r15, 0x409bea);
        if (eax == 0) {
            goto label_34;
        }
        if (*(r15) == 0) {
            goto label_35;
        }
        if (rbx != 0) {
            goto label_36;
        }
        rax = *((rsp + 8));
        *((rsp + 0x10)) = rax;
label_1:
        eax = 0;
        eax = open (r15, 0, rdx);
        if (eax == 0xffffffff) {
            goto label_37;
        }
        edi = eax;
        *((rsp + 0x1c)) = eax;
        al = fcn_00402a20 (edi, r15, *((rsp + 0x10)), 0, r8, r9);
        r9d = *((rsp + 0x1c));
        *((rsp + 0x10)) = al;
        eax = close (r9d);
        edx = *((rsp + 0x10));
        if (eax != 0) {
            goto label_37;
        }
label_2:
        r13d &= edx;
label_3:
        if (rbx == 0) {
            rax = *((rsp + 8));
            *(rax) = 1;
        }
        r12++;
        rax = fcn_00403720 (r14, *(rsp));
        r15 = rax;
        if (rax == 0) {
            goto label_38;
        }
        if (rbp == 0) {
            goto label_39;
        }
        edi = 0x409bea;
        ecx = 2;
        rsi = rbp;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (rbp > 0) ? 1 : 0;
    }
    if (*(r15) == 0) {
        goto label_35;
    }
label_4:
    eax = 0;
    if (rbx != 0) {
label_36:
        rax = r12 * 0x98;
    }
    rax += *((rsp + 8));
    *((rsp + 0x10)) = rax;
    eax = strcmp (r15, 0x409bea);
    if (eax != 0) {
        goto label_1;
    }
    rcx |= 0xffffffffffffffff;
    *(0x0060c328) = 1;
    eax = fcn_00402a20 (0, r15, *((rsp + 0x10)), rcx, r8, r9);
    edx = eax;
    goto label_2;
label_34:
    rax = fcn_00405580 (4, r15);
    edx = 5;
    r13 = rax;
    rax = dcgettext (0, "when reading file names from stdin, no file name of %s allowed");
    rcx = r13;
    eax = 0;
    error (0, 0, rax);
    if (*(r15) != 0) {
        goto label_40;
    }
label_35:
    rax = fcn_004037b0 (r14);
    edx = 5;
    r15 = rax;
    rax = dcgettext (0, "invalid zero-length file name");
    r13 = rax;
    rax = fcn_00405650 (0, 3, rbp);
    r9 = r13;
    r8 = r15;
    rcx = rax;
    eax = 0;
    rax = error (0, 0, "%s:%lu: %s");
    r13d = 0;
    goto label_3;
label_39:
    if (*(rax) != 0) {
        goto label_4;
    }
    edx = 5;
    rax = dcgettext (0, "invalid zero-length file name");
    rcx = rax;
    eax = 0;
    error (0, 0, 0x408965);
label_40:
    r13d = 0;
    goto label_3;
label_38:
    eax = *((rsp + 0x20));
    if (eax == 3) {
        goto label_33;
    }
    if (eax != 4) {
        goto label_41;
    }
    r13d = 0;
    rax = fcn_00405650 (0, 3, rbp);
    edx = 5;
    rax = dcgettext (0, "%s: read error");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (0, *(rax), rbx);
    do {
label_5:
        if (*((rsp + 0x1b)) != 0) {
            goto label_42;
        }
label_6:
        rax = fcn_004037b0 (r14);
        if (rax > 1) {
            edx = 5;
            rax = dcgettext (0, "total");
            r9 = rax;
            fcn_00402850 (*(0x0060c358), *(0x0060c350), *(0x0060c348), *(0x0060c340), *(0x0060c338));
        }
        fcn_004037d0 (r14);
        free (*((rsp + 8)));
        if (*(0x0060c328) != 0) {
            goto label_43;
        }
label_7:
        r13d ^= 1;
        eax = (int32_t) r13b;
        return rax;
label_41:
        if (eax != 2) {
            assert_fail ("!\"unexpected error code from argv_iter\", "src/wc.c", 0x31a, "main");
        }
        al = (rbp == 0) ? 1 : 0;
        al &= r13b;
        ebx = eax;
    } while (al == 0);
    r13d = ebx;
    rax = fcn_004037b0 (r14);
    if (rax != 0) {
        goto label_5;
    }
    rcx |= 0xffffffffffffffff;
    *(0x0060c328) = 1;
    eax = fcn_00402a20 (0, 0, *((rsp + 8)), rcx, r8, r9);
    r13d = eax;
    goto label_5;
label_37:
    rax = fcn_00405650 (0, 3, r15);
    r15 = rax;
    rax = errno_location ();
    rcx = r15;
    eax = 0;
    error (0, *(rax), 0x408965);
    edx = 0;
    goto label_2;
label_42:
    fcn_00405950 (rsp + 0xb0);
    goto label_6;
label_43:
    eax = close (0);
    if (eax == 0) {
        goto label_7;
    }
    rax = errno_location ();
    eax = 0;
    eax = error (1, *(rax), 0x409bea);
label_28:
    if (*(0x0060c332) != 0) {
        goto label_8;
    }
    if (*(0x0060c331) != 0) {
        goto label_8;
    }
    if (*(0x0060c330) != 0) {
        goto label_8;
    }
    *(0x0060c331) = 1;
    *(0x0060c333) = 1;
    *(0x0060c334) = 1;
    goto label_8;
label_29:
    if (ebx <= eax) {
        goto label_44;
    }
    rdx = (int64_t) eax;
    ebx -= eax;
    rbx = (int64_t) ebx;
    *((rsp + 0x10)) = rdi;
    rax = fcn_004036b0 (r12 + rdx*8);
    r14 = rax;
    if (rax == 0) {
        goto label_33;
    }
    rax = rsp + 0x20;
    *((rsp + 0x1b)) = 0;
    *(rsp) = rax;
label_18:
    rdi = rbx * 0x98;
    rax = fcn_004061a0 (rdi);
    *((rsp + 8)) = rax;
    if (rbx == 1) {
        goto label_45;
    }
label_15:
    rax = *((rsp + 8));
    r12d = 0;
    r13 = rax + 8;
    while (r15 == 0) {
label_9:
        rdx = r13;
        esi = 0;
        edi = 1;
        eax = fxstat ();
label_10:
        r12++;
        *((r13 - 8)) = eax;
        r13 += 0x98;
        if (rbx == r12) {
            goto label_46;
        }
        rax = *((rsp + 0x10));
        r15 = *((rax + r12*8));
    }
    eax = strcmp (r15, 0x409bea);
    if (eax == 0) {
        goto label_9;
    }
    rdx = r13;
    rsi = r15;
    edi = 1;
    eax = xstat ();
    goto label_10;
label_46:
    rdx = *((rsp + 8));
    ecx = 1;
    if (*(rdx) > 0) {
        goto label_11;
    }
    edi = 1;
    eax = 0;
    ecx = 0;
    goto label_47;
label_12:
    edi = 7;
    do {
label_13:
        rcx++;
        rdx += 0x98;
        if (rbx == rcx) {
            goto label_48;
        }
label_47:
    } while (*(rdx) != 0);
    esi = *((rdx + 0x20));
    esi &= 0xf000;
    if (esi != 0x8000) {
        goto label_12;
    }
    rax += *((rdx + 0x38));
    goto label_13;
label_31:
    rax = fopen (rbp, 0x407fd8);
    rbx = rax;
    if (rax != 0) {
        goto label_14;
    }
    rax = fcn_00405580 (4, rbp);
    edx = 5;
    rax = dcgettext (0, "cannot open %s for reading");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), rbx);
label_48:
    ecx = 1;
    esi = 0xa;
    while (rax > 9) {
        edx = 0;
        ecx++;
        rax = rdx:rax / rsi;
        rdx = rdx:rax % rsi;
    }
    if (ecx < edi) {
        ecx = edi;
    }
    goto label_11;
label_44:
    rax = fcn_004036b0 (0x60c318);
    r14 = rax;
    if (rax == 0) {
        goto label_33;
    }
    rax = fcn_004061a0 (0x98);
    *((rsp + 0x1b)) = 0;
    *((rsp + 8)) = rax;
    rax = rsp + 0x20;
    *((rsp + 0x10)) = 0x60c318;
    *(rsp) = rax;
label_45:
    eax = *(0x0060c333);
    ecx = *(0x0060c334);
    ecx += eax;
    eax = *(0x0060c332);
    ecx += eax;
    eax = *(0x0060c331);
    ecx += eax;
    eax = *(0x0060c330);
    ecx += eax;
    if (ecx == 1) {
        goto label_49;
    }
    ebx = 1;
    goto label_15;
label_32:
    xmm2 = 0;
    __asm ("cvtsi2sd xmm2, qword [rsp + 0x50]");
    *((rsp + 8)) = xmm2;
    fcn_00403ab0 ();
    __asm ("mulsd xmm0, qword [0x00408948]");
    xmm1 = *(0x00408940);
    __asm ("comisd xmm0, xmm1");
    if (ecx <= 1) {
        goto label_50;
    }
label_19:
    __asm ("comisd xmm1, xmmword [rsp + 8]");
    if (ecx < 1) {
        goto label_16;
    }
    fcn_004058e0 (rsp + 0xb0);
    al = fcn_00405980 (rbx, rsp + 0xb0);
    *((rsp + 0x1b)) = al;
    if (al == 0) {
        goto label_51;
    }
    eax = fcn_00406430 (rbx);
    if (eax != 0) {
        goto label_51;
    }
    rax = *((rsp + 0xb8));
    rbx = *((rsp + 0xb0));
    rdi = rax;
    *((rsp + 0x10)) = rax;
    rax = fcn_004036b0 (rdi);
    r14 = rax;
    if (rax == 0) {
        goto label_33;
    }
    if (rbx == 0) {
        goto label_17;
    }
    edx = 0x98;
    rax = rdx;
    rdx:rax = rax * rbx;
    __asm ("seto dl");
    edx = (int32_t) dl;
    if (rax < 0) {
        goto label_33;
    }
    if (rdx == 0) {
        goto label_18;
    }
label_33:
    fcn_004063f0 ();
label_49:
    rax = *((rsp + 8));
    ebx = 1;
    *(rax) = 1;
    goto label_11;
label_50:
    fcn_00403ab0 ();
    xmm1 = *(0x00408948);
    __asm ("mulsd xmm1, xmm0");
    goto label_19;
label_27:
    fcn_00403350 (0);
label_30:
    rax = fcn_00405580 (4, *((r12 + rax*8)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "extra operand %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    edx = 5;
    rax = dcgettext (0, "file operands cannot be combined with --files0-from");
    edx = 0x409740;
    esi = 1;
    rdi = stderr;
    rcx = rax;
    eax = 0;
    fprintf_chk ();
    goto label_20;
label_51:
    rax = fcn_00405580 (4, rbp);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot read file names from %s");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x40279b */
#include <stdint.h>
 
int32_t fcn_0040279b (void) {
    eax = 0x60c2c8;
    if (rax != 0x60c2c8) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = 0x60c2c8;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4027f1 */
#include <stdint.h>
 
int64_t fcn_004027f1 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x0060c308) != 0) {
        goto label_0;
    }
    r12d = section..dtors;
    ebx = 0x60be48;
    rbx -= section..dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x0060c310) = rax;
        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_0040279b ();
    *(0x0060c308) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x402848 */
#include <stdint.h>
 
int64_t fcn_00402848 (void) {
    do {
        esi = 0x60c2c8;
        ecx = 2;
        rsi -= 0x60c2c8;
        rsi >>= 3;
        rax = rsi;
        __asm ("cqo");
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
        rsi = rax;
        if (rax != 0) {
            eax = 0;
            if (rax == 0) {
                goto label_0;
            }
            edi = 0x60c2c8;
            void (*rax)() ();
        }
label_0:
        return rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x402850 */
#include <stdint.h>
 
uint64_t fcn_00402850 (int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r15 = rsi;
    r14 = rdx;
    r13 = rcx;
    r12 = r8;
    rbx = r9;
    if (*(0x0060c334) != 0) {
        goto label_5;
    }
label_3:
    if (*(0x0060c333) != 0) {
        goto label_6;
    }
label_2:
    if (*(0x0060c332) != 0) {
        goto label_7;
    }
label_1:
    if (*(0x0060c331) != 0) {
        goto label_8;
    }
label_0:
    while (1) {
        if (rbx != 0) {
            rax = strchr (rbx, 0xa);
            if (rax != 0) {
                rax = fcn_00405650 (0, 3, rbx);
                rbx = rax;
            }
            rdx = rax;
            esi = 0x408964;
            edi = 1;
            eax = 0;
            printf_chk ();
        }
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_9;
        }
        *((rdi + 0x28)) = rdx;
        *(rax) = 0xa;
label_4:
        return rax;
        rax = fcn_004038f0 (r12, rsp, rax + 1);
        edx = imp.__libc_start_main;
        rsi = rbp;
        edi = 1;
        rcx = rax;
        eax = 0;
        printf_chk ();
    }
label_8:
    rax = fcn_004038f0 (r13, rsp, rdx);
    edx = imp.__libc_start_main;
    rsi = rbp;
    edi = 1;
    rcx = rax;
    eax = 0;
    printf_chk ();
    goto label_0;
label_7:
    rax = fcn_004038f0 (r14, rsp, rdx);
    edx = imp.__libc_start_main;
    rsi = rbp;
    edi = 1;
    rcx = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
label_6:
    rax = fcn_004038f0 (r15, rsp, rdx);
    edx = imp.__libc_start_main;
    rsi = rbp;
    edi = 1;
    rcx = rax;
    eax = 0;
    printf_chk ();
    goto label_2;
label_5:
    rax = fcn_004038f0 (rdi, rsp, rdx);
    edx = imp.__libc_start_main;
    rsi = rbp;
    edi = 1;
    rcx = rax;
    eax = 0;
    printf_chk ();
    goto label_3;
label_9:
    esi = 0xa;
    overflow ();
    goto label_4;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x402a20 */
#include <stdint.h>
 
uint64_t fcn_00402a20 (int64_t arg_30h, int64_t arg_38h, uint32_t arg_3fh, int64_t arg_40h, int64_t arg_48h, wint_t wc, mbstate_t * ps, int64_t arg_60h, int64_t arg1, int64_t arg2, void * arg3, int64_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    uint32_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    rbx = rdx;
    *((rsp + 0x38)) = edi;
    *((rsp + 0x40)) = rsi;
    *((rsp + 0x48)) = rsi;
    if (rsi == 0) {
        goto label_21;
    }
label_11:
    rax = ctype_get_mb_cur_max ();
    r12d = *(0x0060c331);
    if (rax <= 1) {
        goto label_22;
    }
    eax = *(0x0060c332);
    *((rsp + 0x3f)) = al;
    do {
        if (*(0x0060c333) == 0) {
            r15d = *(0x0060c330);
            if (r15b != 0) {
                goto label_23;
            }
            if (r12b != 1) {
                goto label_24;
            }
            if (*((rsp + 0x3f)) != 0) {
                goto label_24;
            }
            if (*(0x0060c334) != 0) {
                goto label_25;
            }
label_17:
            eax = *(rbx);
            if (eax > 0) {
                goto label_26;
            }
label_13:
            if (eax == 0) {
                goto label_27;
            }
label_7:
            *((rsp + 0x28)) = 0;
label_9:
            ebp = *((rsp + 0x38));
            ecx = 2;
            edx = 0;
            esi = 0;
            r12 = rsp + 0x60;
            edi = ebp;
            fcn_004038b0 ();
            rbx = *((rsp + 0x28));
            goto label_28;
        }
label_23:
        edi = *((rsp + 0x38));
        ecx = 2;
        edx = 0;
        esi = 0;
        fcn_004038b0 ();
label_16:
        rax = ctype_get_mb_cur_max ();
        if (rax <= 1) {
            goto label_29;
        }
        r13d = 0;
        rax = rsp + 0x60;
        r15d = 0;
        ebp = 0;
        *((rsp + 0x58)) = 0;
        ebx = 0;
        r12d = 0;
        *((rsp + 0x20)) = 0;
        *((rsp + 0x28)) = 0;
        *((rsp + 0x18)) = 0;
        *((rsp + 8)) = 0;
        *((rsp + 0x30)) = rax;
        eax = r13d;
        r13 = r15;
        r15d = eax;
label_0:
        rax = *((rsp + 0x30));
        rdx -= r13;
        rax = fcn_00405ba0 (*((rsp + 0x38)), rax + r13, 0x4000);
        if (rax == 0) {
            goto label_30;
        }
        if (rax == -1) {
            goto label_31;
        }
        r13 += rax;
        r14 = *((rsp + 0x30));
        if (r15b != 0) {
            goto label_32;
        }
label_1:
        ecx = *(r14);
        eax = ecx;
        al >>= 5;
        eax &= 7;
        eax = *((rax*4 + 0x408980));
        eax >>= cl;
        if ((al & 1) == 0) {
            goto label_32;
        }
        *((rsp + 0x54)) = ecx;
        r12++;
        edx = 1;
label_10:
        eax = rcx - 9;
        r14 += rdx;
        r13 -= rdx;
        if (eax > 0x17) {
            goto label_33;
        }
        /* switch table (24 cases) at 0x408060 */
label_22:
        eax = *(0x0060c332);
        *((rsp + 0x3f)) = 0;
        if (r12b == 0) {
            r12d = eax;
        }
    } while (1);
    rax = *((rsp + 0x20));
    if (rax >= rbp) {
    }
    *((rsp + 0x20)) = rbp;
    ebp = 0;
label_3:
    ebx = 0;
label_2:
    if (r13 == 0) {
        goto label_0;
    }
    if (r15b == 0) {
        goto label_1;
    }
label_32:
    rcx = rsp + 0x58;
    r15 = *((rsp + 0x58));
    rax = fcn_00407320 (rsp + 0x54, r14, r13, rcx);
    if (rax == 0xfffffffffffffffe) {
        goto label_34;
    }
    if (rax == -1) {
        goto label_35;
    }
    *((rsp + 0x10)) = rax;
    eax = mbsinit (rsp + 0x58);
    rdx = *((rsp + 0x10));
    r15b = (eax == 0) ? 1 : 0;
    r12++;
    if (rdx != 0) {
        goto label_36;
    }
    *((rsp + 0x54)) = 0;
    r14++;
    ecx = 0;
    r13--;
label_14:
    *((rsp + 0x10)) = ecx;
    eax = iswprint (0);
    ecx = *((rsp + 0x10));
    if (eax == 0) {
        goto label_2;
    }
    edi = ecx;
    eax = wcwidth ();
    edi = *((rsp + 0x54));
    rdx = (int64_t) eax;
    rdx += rbp;
    if (eax > 0) {
    }
    eax = iswspace (rdi);
    if (eax != 0) {
        goto label_3;
    }
    ebx = 1;
    goto label_2;
    rbp++;
    goto label_3;
    rbp &= 0xfffffffffffffff8;
    rbp += 8;
    goto label_3;
label_29:
    ebx = 0;
    rax = rsp + 0x60;
    r13d = 0;
    ebp = 0;
    *((rsp + 0x28)) = 0;
    r15 = rbp;
    *((rsp + 8)) = 0;
    *((rsp + 0x30)) = rax;
    eax = ebx;
    rbx = r13;
    r13d = (int32_t) al;
label_4:
    rax = fcn_00405ba0 (*((rsp + 0x38)), *((rsp + 0x30)), 0x4000);
    if (rax == 0) {
        goto label_37;
    }
    if (rax == -1) {
        goto label_38;
    }
    r12 = *((rsp + 0x30));
    r14 = r12 + rax;
    do {
        r12++;
        esi = *((r12 - 1));
        edx = rsi - 9;
        if (dl > 0x17) {
            goto label_39;
        }
        edx = (int32_t) dl;
        /* switch table (24 cases) at 0x408120 */
        if (rbx < r15) {
            rbx = r15;
        }
        r15d = 0;
label_5:
        rbp += r13;
        r13d = 0;
label_6:
    } while (r12 != r14);
    goto label_4;
    r15++;
    goto label_5;
    rcx = r15;
    rcx &= 0xfffffffffffffff8;
    r15 = rcx + 8;
    goto label_5;
label_39:
    *((rsp + 0x10)) = sil;
    rax = ctype_b_loc ();
    esi = *((rsp + 0x10));
    rax = *(rax);
    eax = *((rax + rsi*2));
    if ((ah & 0x40) == 0) {
        goto label_6;
    }
    r15++;
    if ((ah & 0x20) != 0) {
        goto label_5;
    }
    r13d = 1;
    goto label_6;
    do {
        if (rax == -1) {
            goto label_40;
        }
        rbx += rax;
label_28:
        rax = fcn_00405ba0 (ebp, r12, 0x4000);
    } while (rax != 0);
    *((rsp + 0x28)) = rbx;
label_8:
    ebp = 0;
    r12d = 0;
    r14d = 0;
    r15d = 1;
    *((rsp + 8)) = 0;
    goto label_12;
label_27:
    eax = *((rbx + 0x20));
    eax &= 0xd000;
    if (eax != 0x8000) {
        goto label_7;
    }
    r12 = *((rbx + 0x38));
    if (r12 < 0) {
        goto label_7;
    }
    *((rsp + 0x28)) = r12;
    r13 = imp.__libc_start_main;
    if (rbp == -1) {
        goto label_41;
    }
    rax = r12;
    edx = 0;
    rax = rdx:rax / r13;
    rdx = rdx:rax % r13;
    if (rdx != 0) {
        goto label_8;
    }
    esi = 1;
    ebp = 0;
label_15:
    rdx = 0x1fffffffffffffff;
    rax = *((rbx + 0x40));
    rcx = rax - 1;
    rax++;
    ecx = 0x201;
    if (rcx <= rdx) {
        rcx = rax;
    }
    rax = r12;
    edx = 0;
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    r12 -= rdx;
    if (r12 <= rbp) {
        goto label_7;
    }
    if (sil == 0) {
        goto label_7;
    }
    edi = *((rsp + 0x38));
    edx = 1;
    rsi = r12;
    rax = lseek ();
    if (rax < 0) {
        goto label_7;
    }
    r12 -= rbp;
    *((rsp + 0x28)) = r12;
    goto label_9;
label_36:
    ecx = *((rsp + 0x54));
    goto label_10;
label_35:
    r14++;
    r13--;
    r15d = 1;
    goto label_2;
label_34:
    *((rsp + 0x58)) = r15;
    if (r13 != 0) {
        if (r13 == 0x4000) {
            r14++;
            r13d = 0x3fff;
        }
        rdi = *((rsp + 0x30));
        ecx = 0x4001;
        rdx = r13;
        rsi = r14;
        memmove_chk ();
    }
    r15d = 1;
    goto label_0;
label_21:
    edx = 5;
    rax = dcgettext (0, "standard input");
    *((rsp + 0x48)) = rax;
    goto label_11;
label_30:
    r15d = 1;
    do {
        rax = *((rsp + 0x20));
        r14 = *((rsp + 0x18));
        if (rax >= rbp) {
        }
        r14 += rbx;
label_12:
        rbx = *((rsp + 0x28));
        eax = *((rsp + 0x3f));
        r8 = rbp;
        rsi = r14;
        r13 = *((rsp + 8));
        if (*(0x0060c332) > al) {
            r12 = rbx;
        }
        r9 = *((rsp + 0x40));
        fcn_00402850 (r13, rsi, r12, rbx, r8);
        *(0x0060c358) += r13;
        *(0x0060c350) += r14;
        *(0x0060c348) += r12;
        *(0x0060c340) += rbx;
        if (*(0x0060c338) < rbp) {
            *(0x0060c338) = rbp;
        }
        eax = r15d;
        return rax;
label_31:
        r15d = 0;
        rax = fcn_00405650 (0, 3, *((rsp + 0x48)));
        r13 = rax;
        rax = errno_location ();
        rcx = r13;
        eax = 0;
        error (0, *(rax), 0x408965);
    } while (1);
label_37:
    eax = r13d;
    r12 = rbp;
    r13 = rbx;
    ebx = eax;
    r15d = 1;
    do {
        r14d = (int32_t) bl;
        if (r13 >= rbp) {
        }
        r14 += r12;
        r12d = 0;
        goto label_12;
label_38:
        eax = r13d;
        r13 = rbx;
        ebx = eax;
        r12 = rbp;
        rax = fcn_00405650 (0, 3, *((rsp + 0x48)));
        r15d = 0;
        r14 = rax;
        rax = errno_location ();
        rcx = r14;
        eax = 0;
        error (0, *(rax), 0x408965);
    } while (1);
label_26:
    esi = *((rsp + 0x38));
    rdx = rbx + 8;
    edi = 1;
    eax = fxstat ();
    *(rbx) = eax;
    goto label_13;
label_40:
    ebp = 0;
    *((rsp + 0x28)) = rbx;
    r12d = 0;
    r14d = 0;
    rax = fcn_00405650 (0, 3, *((rsp + 0x48)));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), 0x408965);
    *((rsp + 8)) = 0;
    goto label_12;
label_41:
    edi = *((rsp + 0x38));
    edx = 1;
    esi = 0;
    rax = lseek ();
    edx = 0;
    rax = r12;
    rax = rdx:rax / r13;
    rdx = rdx:rax % r13;
    if (rdx != 0) {
        if (rbp > *((rsp + 0x28))) {
            ebp = 0;
            r12d = 0;
            r14d = 0;
            r15d = 1;
            *((rsp + 0x28)) = 0;
            *((rsp + 8)) = 0;
            goto label_12;
label_33:
            edi = ecx;
            goto label_14;
        }
        goto label_8;
    }
    rsi = rbp;
    rsi = ~rsi;
    rsi >>= 0x3f;
    goto label_15;
label_24:
    edi = *((rsp + 0x38));
    edx = 0;
    esi = 0;
    ecx = 2;
    fcn_004038b0 ();
    if (*((rsp + 0x3f)) == 1) {
        goto label_16;
    }
    if (r12b == 0) {
        goto label_42;
    }
label_20:
    if (*(0x0060c334) == 0) {
        goto label_17;
    }
label_19:
    r13d = 0;
    rax = rsp + 0x60;
    *((rsp + 0x10)) = r15b;
    r14 = 0x8888888888888889;
    *((rsp + 0x28)) = 0;
    r15d = r13d;
    r13 = rax;
    *((rsp + 8)) = 0;
label_18:
    rax = fcn_00405ba0 (*((rsp + 0x38)), r13, 0x4000);
    if (rax == 0) {
        goto label_43;
    }
    if (rax == -1) {
        goto label_44;
    }
    rbp = r13 + rax;
    rdx:rax = rax * r14;
    rbx = rdx;
    rbx >>= 3;
    if (r15b != 0) {
        goto label_45;
    }
    if (rbp == r13) {
        goto label_46;
    }
    rdx = *((rsp + 8));
    rax = r13;
    do {
        rax++;
        ecx = 0;
        cl = (*((rax - 1)) == 0xa) ? 1 : 0;
        rdx += rcx;
    } while (rbp != rax);
    rax = rdx;
    rax -= *((rsp + 8));
    *((rsp + 8)) = rdx;
    r15b = (rax <= rbx) ? 1 : 0;
    goto label_18;
label_45:
    r12 = *((rsp + 8));
    rdi = r13;
    while (rax != 0) {
        r12++;
        rdx -= rdi;
        rax = fcn_004073a0 (rax + 1, 0xa, rbp);
    }
    rax = r12;
    rax -= *((rsp + 8));
    *((rsp + 8)) = r12;
    r15b = (rax <= rbx) ? 1 : 0;
    goto label_18;
label_42:
    if (*((rsp + 0x3f)) == 0) {
        goto label_19;
    }
    goto label_16;
label_43:
    ebp = 0;
    r12d = 0;
    r14d = 0;
    r15d = 1;
    goto label_12;
label_44:
    ebp = 0;
    r15d = *((rsp + 0x10));
    r12d = 0;
    r14d = 0;
    rax = fcn_00405650 (0, 3, *((rsp + 0x48)));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), 0x408965);
    goto label_12;
label_46:
    r15d = 1;
    goto label_18;
label_25:
    edi = *((rsp + 0x38));
    ecx = 2;
    edx = 0;
    esi = 0;
    fcn_004038b0 ();
    goto label_20;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x403350 */
#include <stdint.h>
 
uint64_t fcn_00403350 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n");
    rcx = rbp;
    rdx = rbp;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Print newline, word, and byte counts for each FILE, and a total line if\nmore than one FILE is specified.  A word is a non-zero-length sequence of\ncharacters delimited by white space.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nWith no FILE, or when FILE is -, read standard input.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nThe options below may be used to select which counts are printed, always in\nthe following order: newline, word, character, byte, maximum line length.\n  -c, --bytes            print the byte counts\n  -m, --chars            print the character counts\n  -l, --lines            print the newline counts\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --files0-from=F    read input from the files specified by\n                           NUL-terminated names in file F;\n                           If F is - then read names from standard input\n  -L, --max-line-length  print the maximum display width\n  -w, --words            print the word counts\n");
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
    *(rsp) = 0x407ef6;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x407f70;
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
        esi = 0x407ef3;
        ecx = 3;
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
        eax = strncmp (rax, 0x407f7a, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x407f12;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = 0x407ef3;
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x409c07;
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
            eax = strncmp (rax, 0x407f7a, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = 0x407ef3;
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x407f12;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = 0x407ef3;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4036b0 */
#include <stdint.h>
 
uint64_t fcn_004036b0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = malloc (0x30);
    if (rax != 0) {
        *(rax) = 0;
        *((rax + 0x20)) = rbx;
        *((rax + 0x28)) = rbx;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4036e0 */
#include <stdint.h>
 
uint64_t fcn_004036e0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = malloc (0x30);
    if (rax != 0) {
        *(rax) = rbx;
        *((rax + 0x10)) = 0;
        *((rax + 0x18)) = 0;
        *((rax + 8)) = 0;
        *((rax + 0x20)) = 0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x403720 */
#include <stdint.h>
 
uint64_t fcn_00403720 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rcx = *(rdi);
    if (rcx == 0) {
        goto label_0;
    }
    edx = 0;
    rsi = rdi + 0x18;
    rbx = rdi;
    rdi = rdi + 0x10;
    rax = getdelim ();
    if (rax < 0) {
        goto label_1;
    }
    *(rbp) = 1;
    rax = *((rbx + 0x10));
    *((rbx + 8))++;
    do {
        return rax;
label_0:
        rdx = *((rdi + 0x28));
        rax = *(rdx);
        if (rax == 0) {
            goto label_2;
        }
        rdx += 8;
        *(rsi) = 1;
        *((rdi + 0x28)) = rdx;
        return rax;
label_1:
        eax = feof (*(rbx));
        eax -= eax;
        eax &= 2;
        eax += 2;
        *(rbp) = eax;
        eax = 0;
    } while (1);
label_2:
    *(rsi) = 2;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4037b0 */
#include <stdint.h>
 
int64_t fcn_004037b0 (uint32_t arg1) {
    rdi = arg1;
    if (*(rdi) != 0) {
        rax = *((rdi + 8));
        return rax;
    }
    rax = *((rdi + 0x28));
    rax -= *((rdi + 0x20));
    rax >>= 3;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4037d0 */
#include <stdint.h>
 
void fcn_004037d0 (void ** ptr) {
    rdi = ptr;
    rbx = rdi;
    if (*(rdi) != 0) {
        free (*((rdi + 0x10)));
    }
    rdi = rbx;
    return free ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4038b0 */
#include <stdint.h>
 
void fcn_004038b0 (void) {
    return posix_fadvise ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4038f0 */
#include <stdint.h>
 
int64_t fcn_004038f0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = rsi + 0x14;
    *((rsi + 0x14)) = 0;
    rsi = 0xcccccccccccccccd;
    while (rdi > 9) {
        rdi = rdx;
        rax = rdx;
        r8 = rdi;
        rcx--;
        rdx:rax = rax * rsi;
        rdx >>= 3;
        rax = rdx * 5;
        rax += rax;
        r8 -= rax;
        rax = r8;
        eax += 0x30;
        *(rcx) = al;
    }
    rax = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4039f0 */
#include <stdint.h>
 
uint64_t fcn_004039f0 (void) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_30h;
    int64_t var_78h;
    edi = 0x55;
    rax = sysconf ();
    xmm0 = 0;
    edi = 0x1e;
    __asm ("cvtsi2sd xmm0, rax");
    *((rsp + 8)) = xmm0;
    rax = sysconf ();
    xmm0 = *((rsp + 8));
    xmm2 = 0;
    __asm ("comisd xmm0, xmm2");
    if (? >= ?) {
        xmm1 = 0;
        __asm ("cvtsi2sd xmm1, rax");
        __asm ("comisd xmm1, xmm2");
        if (? >= ?) {
            goto label_0;
        }
    }
    rdi = rsp + 0x10;
    eax = sysinfo ();
    xmm0 = *(0x004089a0);
    if (eax != 0) {
        return rax;
    }
    rax = *((rsp + 0x30));
    if (rax < 0) {
        goto label_1;
    }
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, rax");
    do {
        eax = *((rsp + 0x78));
        xmm1 = 0;
        __asm ("cvtsi2sd xmm1, rax");
label_0:
        __asm ("mulsd xmm0, xmm1");
        return rax;
label_1:
        rdx = rax;
        eax &= 1;
        xmm0 = 0;
        rdx >>= 1;
        rdx |= rax;
        __asm ("cvtsi2sd xmm0, rdx");
        __asm ("addsd xmm0, xmm0");
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x403ab0 */
#include <stdint.h>
 
uint64_t fcn_00403ab0 (void) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_38h;
    int64_t var_48h;
    int64_t var_78h;
    edi = 0x56;
    rax = sysconf ();
    xmm0 = 0;
    edi = 0x1e;
    __asm ("cvtsi2sd xmm0, rax");
    *((rsp + 8)) = xmm0;
    rax = sysconf ();
    xmm0 = *((rsp + 8));
    xmm2 = 0;
    __asm ("comisd xmm0, xmm2");
    if (? >= ?) {
        xmm1 = 0;
        __asm ("cvtsi2sd xmm1, rax");
        __asm ("comisd xmm1, xmm2");
        if (? >= ?) {
            goto label_1;
        }
    }
    rdi = rsp + 0x10;
    eax = sysinfo ();
    if (eax != 0) {
        goto label_2;
    }
    rax = *((rsp + 0x38));
    if (rax < 0) {
        goto label_3;
    }
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, rax");
    rax = *((rsp + 0x48));
    if (rax < 0) {
        goto label_4;
    }
    do {
        xmm1 = 0;
        __asm ("cvtsi2sd xmm1, rax");
label_0:
        eax = *((rsp + 0x78));
        __asm ("addsd xmm0, xmm1");
        xmm1 = 0;
        __asm ("cvtsi2sd xmm1, rax");
label_1:
        __asm ("mulsd xmm0, xmm1");
        return rax;
label_2:
        rax = fcn_004039f0 ();
        __asm ("mulsd xmm0, qword [0x004089a8]");
        return rax;
label_3:
        rdx = rax;
        eax &= 1;
        xmm0 = 0;
        rdx >>= 1;
        rdx |= rax;
        rax = *((rsp + 0x48));
        __asm ("cvtsi2sd xmm0, rdx");
        __asm ("addsd xmm0, xmm0");
    } while (rax >= 0);
label_4:
    rdx = rax;
    eax &= 1;
    xmm1 = 0;
    rdx >>= 1;
    rdx |= rax;
    __asm ("cvtsi2sd xmm1, rdx");
    __asm ("addsd xmm1, xmm1");
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x403bb0 */
#include <stdint.h>
 
uint64_t fcn_00403bb0 (char ** arg1) {
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
            edi = 0x4089f0;
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
        *(0x0060c370) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite (0x4089b0, 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x403c50 */
#include <stdint.h>
 
uint64_t fcn_00403c50 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_004078a0 ();
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
        eax = 0x4089f6;
        ebx = 0x408a01;
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
        eax = 0x4089fa;
        ebx = 0x4089fd;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x409bd7;
    ebx = 0x4089f4;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x403d50 */
#include <stdint.h>
 
uint64_t fcn_00403d50 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        /* [13] -r-x section size 24936 named .text */
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
        rsp + 0x6c = (ebp != 0) ? 1 : 0;
    } while (r13d > 0xa);
    eax = r13d;
    r11 = *((rsp + 8));
    /* switch table (11 cases) at 0x408a60 */
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
    *((rsp + 0x50)) = 0x409bd7;
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
        /* switch table (127 cases) at 0x408ab8 */
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
    rax = fcn_00403d50 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x408eb0 */
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
    /* switch table (127 cases) at 0x4092a8 */
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
label_33:
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
    *((rsp + 0x50)) = 0x409bd7;
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
        rax = fcn_00407320 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x409bd7;
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
        *((rsp + 0x50)) = 0x4089f4;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00403c50 (0x408a05, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00403c50 (0x409bd7, r13d);
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
        *((rsp + 0x50)) = 0x4089f4;
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
        *((rsp + 0x50)) = 0x409bd7;
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
    *((rsp + 0x50)) = 0x4089f4;
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
    rsp + 8 = (r13d == 2) ? 1 : 0;
    goto label_12;
label_73:
    rax = fcn_00403d50 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x409bd7;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x404f80 */
#include <stdint.h>
 
uint64_t fcn_00404f80 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x0060c298);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x0060c2b0) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x60c2a0) {
        goto label_2;
    }
    rax = fcn_00406200 (rbx, rsi);
    *(0x0060c298) = rax;
    rbx = rax;
    do {
        rdi = *(0x0060c2b0);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x0060c2b0) = r12d;
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
        rax = fcn_00403d50 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x60c380) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_004061a0 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00403d50 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00406200 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x0060c2a0]");
        rbx = rax;
        *(0x0060c298) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_004063f0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x405580 */
#include <stdint.h>
 
int64_t fcn_00405580 (int64_t arg1, int64_t arg2) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    do {
        abort ();
label_0:
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
    fcn_00404f80 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
    rdx = rsi;
    esi = edi;
    edi = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x405620 */
#include <stdint.h>
 
int64_t fcn_00405620 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x0060c480]");
        __asm ("movdqa xmm1, xmmword [0x0060c490]");
        __asm ("movdqa xmm2, xmmword [0x0060c4a0]");
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
        fcn_00404f80 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x405650 */
#include <stdint.h>
 
int64_t fcn_00405650 (int64_t arg1, uint32_t arg2, int64_t arg3) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    rdi = arg1;
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
    fcn_00404f80 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4057f0 */
#include <stdint.h>
 
uint64_t fcn_004057f0 (int64_t arg1) {
    rdi = arg1;
    rdx = *((rdi + 0x30));
    rbx = rdi;
    r12 = *((rdi + 0x28));
    rbp -= r12;
    rbp--;
    if (rdx == r12) {
        goto label_2;
    }
label_1:
    rcx = *((rbx + 0x48));
    rax = rdx + rcx;
    rcx = ~rcx;
    rdx = *((rbx + 0x38));
    rax &= rcx;
    rcx = *((rbx + 0x20));
    rsi = rax;
    rdi = rdx;
    *((rbx + 0x30)) = rax;
    rsi -= rcx;
    rdi -= rcx;
    if (rsi > rdi) {
        *((rbx + 0x30)) = rdx;
        rax = rdx;
    }
    *((rbx + 0x28)) = rax;
    rdx = *((rbx + 0x88));
    rax = *((rbx + 0x90));
    rax -= rdx;
    while (1) {
        *(rdx) = r12;
        rdx = *((rbx + 0xe0));
        rax = *((rbx + 0xe8));
        *((rbx + 0x88)) += 8;
        rax -= rdx;
        if (rax <= 7) {
            goto label_3;
        }
label_0:
        *(rdx) = rbp;
        *((rbx + 0xe0)) += 8;
        *(rbx)++;
        r12 = rbx;
        return rax;
        rdi = rbx + 0x70;
        esi = 8;
        _obstack_newchunk ();
        rdx = *((rbx + 0x88));
    }
label_3:
    rdi = rbx + 0xc8;
    esi = 8;
    _obstack_newchunk ();
    rdx = *((rbx + 0xe0));
    goto label_0;
label_2:
    *((rdi + 0x68)) |= 2;
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4058e0 */
#include <stdint.h>
 
void fcn_004058e0 (int64_t arg1) {
    rdi = arg1;
    r8d = imp.free;
    rbx = rdi;
    ecx = imp.malloc;
    *(rdi) = 0;
    edx = 0;
    rdi = rdi + 0x18;
    esi = 0;
    *((rdi - 0x10)) = 0;
    *((rdi - 8)) = 0;
    _obstack_begin ();
    rdi = rbx + 0x70;
    ecx = imp.malloc;
    edx = 0;
    r8d = imp.free;
    esi = 0;
    _obstack_begin ();
    rdi = rbx + 0xc8;
    edx = 0;
    esi = 0;
    r8d = imp.free;
    ecx = imp.malloc;
    return obstack_begin ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x405950 */
#include <stdint.h>
 
void fcn_00405950 (int64_t arg1) {
    rdi = arg1;
    esi = 0;
    rbx = rdi;
    rdi = rdi + 0x18;
    _obstack_free ();
    rdi = rbx + 0x70;
    esi = 0;
    _obstack_free ();
    rdi = rbx + 0xc8;
    esi = 0;
    return obstack_free ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x405980 */
#include <stdint.h>
 
uint64_t fcn_00405980 (int64_t arg1, int64_t arg2) {
    int64_t var_ch;
    rdi = arg1;
    rsi = arg2;
    r12 = rsi + 0x18;
    rbx = rsi;
    while (*((rbx + 0x38)) != rdx) {
        rcx = rdx + 1;
        *((rbx + 0x30)) = rcx;
        *(rdx) = al;
        if (eax == 0) {
            goto label_6;
        }
label_0:
        eax = fgetc (rbp);
        if (eax == 0xffffffff) {
            goto label_7;
        }
label_1:
        rdx = *((rbx + 0x30));
    }
    esi = 1;
    rdi = r12;
    *((rsp + 0xc)) = eax;
    _obstack_newchunk ();
    rdx = *((rbx + 0x30));
    eax = *((rsp + 0xc));
    rcx = rdx + 1;
    *((rbx + 0x30)) = rcx;
    *(rdx) = al;
    if (eax != 0) {
        goto label_0;
    }
label_6:
    fcn_004057f0 (rbx);
    eax = fgetc (rbp);
    if (eax != 0xffffffff) {
        goto label_1;
    }
label_7:
    rax = *((rbx + 0x30));
    if (rax != *((rbx + 0x28))) {
        if (rax == *((rbx + 0x38))) {
            goto label_8;
        }
label_5:
        rdx = rax + 1;
        *((rbx + 0x30)) = rdx;
        *(rax) = 0;
        fcn_004057f0 (rbx);
    }
    rdx = *((rbx + 0x88));
    rax = *((rbx + 0x90));
    rax -= rdx;
    if (rax <= 7) {
        goto label_9;
    }
label_2:
    *(rdx) = 0;
    rax = *((rbx + 0x88));
    rsi = *((rbx + 0x80));
    rdx = rax + 8;
    *((rbx + 0x88)) = rdx;
    if (rdx == rsi) {
        goto label_10;
    }
label_4:
    rcx = *((rbx + 0xa0));
    rax = rdx + rcx;
    rcx = ~rcx;
    rdx = *((rbx + 0x78));
    rax &= rcx;
    rcx = *((rbx + 0x90));
    rdi = rax;
    *((rbx + 0x88)) = rax;
    r8 = rcx;
    rdi -= rdx;
    r8 -= rdx;
    while (1) {
        *((rbx + 8)) = rsi;
        rdx = *((rbx + 0xe0));
        rsi = *((rbx + 0xd8));
        *((rbx + 0x80)) = rax;
        if (rdx == rsi) {
            goto label_11;
        }
label_3:
        rcx = *((rbx + 0xf8));
        rax = rdx + rcx;
        rcx = ~rcx;
        rdx = *((rbx + 0xd0));
        rax &= rcx;
        rcx = *((rbx + 0xe8));
        rdi = rax;
        *((rbx + 0xe0)) = rax;
        r9 = rcx;
        rdi -= rdx;
        r9 -= rdx;
        if (rdi > r9) {
            *((rbx + 0xe0)) = rcx;
            rax = rcx;
        }
        *((rbx + 0xd8)) = rax;
        *((rbx + 0x10)) = rsi;
        eax = ferror (rbp);
        al = (eax == 0) ? 1 : 0;
        return rax;
        *((rbx + 0x88)) = rcx;
        rax = rcx;
    }
label_9:
    rdi = rbx + 0x70;
    esi = 8;
    _obstack_newchunk ();
    rdx = *((rbx + 0x88));
    goto label_2;
label_11:
    *((rbx + 0x118)) |= 2;
    goto label_3;
label_10:
    *((rbx + 0xc0)) |= 2;
    goto label_4;
label_8:
    rdi = rbx + 0x18;
    esi = 1;
    _obstack_newchunk ();
    rax = *((rbx + 0x30));
    goto label_5;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x405ba0 */
#include <stdint.h>
 
uint64_t fcn_00405ba0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
    if (rbx > 0x7fffe000) {
        if (eax != 0x16) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x405c00 */
#include <stdint.h>
 
void fcn_00405c00 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x40974b);
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
        /* switch table (10 cases) at 0x409a38 */
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
    void (*0x401d00)() ();
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
    void (*0x401d00)() ();
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
    void (*0x401d00)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x406060 */
#include <stdint.h>
 
uint64_t fcn_00406060 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_00405c00 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4061a0 */
#include <stdint.h>
 
uint64_t fcn_004061a0 (int64_t arg1) {
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
    return fcn_004063f0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x406200 */
#include <stdint.h>
 
uint64_t fcn_00406200 (int64_t arg1, int64_t arg2) {
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
    return fcn_004063f0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4063a0 */
#include <stdint.h>
 
uint64_t fcn_004063a0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_004061a0 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4063f0 */
#include <stdint.h>
 
uint64_t fcn_004063f0 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x0060c258), 0, 0x408965);
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x406430 */
#include <stdint.h>
 
uint64_t fcn_00406430 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_004064b0 (rbx);
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
    void (*0x4019d0)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4064b0 */
#include <stdint.h>
 
uint32_t fcn_004064b0 (int64_t arg1) {
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
    void (*0x401bb0)() ();
label_1:
    fcn_004064f0 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4064f0 */
#include <stdint.h>
 
int64_t fcn_004064f0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
        void (*0x401c80)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x406550 */
#include <stdint.h>
 
uint64_t fcn_00406550 (int64_t arg1, int64_t arg2) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x406630 */
#include <stdint.h>
 
int64_t fcn_00406630 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, signed int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_ch;
    int64_t var_10h;
    void * ptr;
    int64_t var_20h;
    int64_t var_28h;
    char * s;
    int64_t var_38h;
    int64_t c;
    signed int64_t var_40h;
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
    edx = " '%s%s';
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x406c50 */
#include <stdint.h>
 
uint64_t fcn_00406c50 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x409be9;
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
            fcn_00406550 (r12, rbx);
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
        fcn_00406550 (r12, rbx);
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
    eax = fcn_00406630 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_00406630 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x407220 */
#include <stdint.h>
 
int32_t fcn_00407220 (int64_t arg_10h) {
    eax = *(0x0060c2bc);
    *(0x0060c4c0) = eax;
    eax = *(0x0060c2b8);
    *(0x0060c4c4) = eax;
    eax = *((rsp + 0x10));
    fcn_00406c50 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0060c2bc) = edx;
    rdx = imp.__libc_start_main;
    *(0x0060c500) = rdx;
    edx = imp.__libc_start_main;
    *(0x0060c2b4) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4072a0 */
#include <stdint.h>
 
void fcn_004072a0 (void) {
    r9d = 0;
    fcn_00407220 (rdi);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x407320 */
#include <stdint.h>
 
uint64_t fcn_00407320 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_00407840 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4073a0 */
#include <stdint.h>
 
int64_t fcn_004073a0 (uint32_t arg1, int64_t arg2, uint32_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4074f0 */
#include <stdint.h>
 
int64_t fcn_004074f0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 0x38));
    if ((*((rdi + 0x50)) & 1) != 0) {
        rdi = *((rdi + 0x48));
        rax = void (*rax)() ();
    }
    rdi = rsi;
    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x407510 */
#include <stdint.h>
 
int64_t fcn_00407510 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 0x40));
    if ((*((rdi + 0x50)) & 1) != 0) {
        rdi = *((rdi + 0x48));
        rax = void (*rax)() ();
    }
    rdi = rsi;
    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4075c0 */
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
        rax = fcn_004074f0 (rdi, rsi);
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
    rax = uint64_t (*obstack_alloc_failed_handler)() ();
    *((rdi + 0x50)) &= 0xfe;
    *((rdi + 0x38)) = rcx;
    *((rdi + 0x40)) = r8;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4075e0 */
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
    return void (*0x407530)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x407600 */
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
    rax = fcn_004074f0 (rdi, rbx);
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
        fcn_00407510 (r12, rbp);
    }
label_0:
    uint64_t (*obstack_alloc_failed_handler)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x407700 */
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x407740 */
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
        rax = fcn_00407510 (rbx, rsi);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4077b0 */
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4077e0 */
#include <stdint.h>
 
uint64_t fcn_004077e0 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_00406430 (rbp);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x407840 */
#include <stdint.h>
 
uint64_t fcn_00407840 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x409c0c;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x4078a0 */
#include <stdint.h>
 
uint64_t fcn_004078a0 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x409c07;
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
        r15d = 0x409c07;
label_2:
        *(0x0060c4f8) = r15;
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
        r15d = 0x409c07;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x407fd8;
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
    fcn_00406430 (rbx);
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
        r15d = 0x409c07;
        rbx = rax;
        free (r15);
        fcn_00406430 (r13);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x407e80 */
#include <stdint.h>
 
int64_t fcn_00407e80 (void) {
    rax = 0x60c248;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_wc.elf @ 0x407e98 */
#include <stdint.h>
 
void fcn_00407e98 (int64_t arg3) {
    rdx = arg3;
    ebx = segment.GNU_RELRO;
    do {
        rax = *(rbx);
        if (rax == -1) {
            goto label_0;
        }
        void (*rax)() ();
        rbx -= 8;
    } while (1);
label_0:
}
