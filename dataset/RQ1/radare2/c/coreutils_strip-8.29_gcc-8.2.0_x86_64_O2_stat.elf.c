/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x402390 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_38h;
    rdi = argc;
    rsi = argv;
    r15d = 1;
    r14d = edi;
    r13 = rsi;
    fcn_004072f0 (*(rsi));
    setlocale (6, 0x4137e7);
    bindtextdomain (0x4107c7, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x4107c7, rsi);
    rax = localeconv ();
    rdi = *(rax);
    eax = 0x411fe4;
    if (*(rdi) == 0) {
        rdi = rax;
    }
    ebx = 0;
    ebp = 0;
    *(0x00617478) = rdi;
    rax = strlen (rdi);
    edi = 0x405530;
    *(0x00617470) = rax;
    fcn_00410340 ();
    *((rsp + 8)) = 0;
    do {
label_0:
        r8d = 0;
        ecx = 0x410e20;
        edx = "c:fLt";
        rsi = r13;
        edi = r14d;
        eax = fcn_0040add0 ();
        r12d = eax;
        if (eax == 0xffffffff) {
            goto label_5;
        }
        if (r12d == 0x63) {
            goto label_6;
        }
        if (r12d <= 0x63) {
            goto label_7;
        }
        if (r12d == 0x74) {
            goto label_8;
        }
        if (r12d != 0x80) {
            goto label_9;
        }
        rax = imp.__libc_start_main;
        *(0x00617480) = r15b;
        *(0x00617310) = 0x4137e7;
        *((rsp + 8)) = rax;
    } while (1);
label_7:
    if (r12d == 0xffffff7e) {
        goto label_10;
    }
    if (r12d != 0x4c) {
        goto label_11;
    }
    *(0x00617481) = r15b;
    goto label_0;
label_9:
    if (r12d == 0x66) {
        goto label_12;
    }
    do {
label_4:
        eax = fcn_00404870 (1);
label_11:
    } while (r12d != 0xffffff7d);
    r9d = 0;
    r8d = "Michael Meskes";
    eax = 0;
    rcx = *(str.8.29);
    fcn_00409420 (*(obj.stdout), "stat", "GNU coreutils");
    exit (0);
label_12:
    goto label_0;
label_8:
    ebx = 1;
    goto label_0;
label_6:
    rax = imp.__libc_start_main;
    *(0x00617480) = 0;
    *(0x00617310) = 0x4137e6;
    *((rsp + 8)) = rax;
    goto label_0;
label_5:
    if (*(0x0061739c) == r14d) {
        goto label_13;
    }
    r15 = *((rsp + 8));
    if (r15 == 0) {
        goto label_14;
    }
    rax = fcn_0040bd00 (r15, 0x4107fa);
    *((rsp + 0x10)) = r15;
    if (rax != 0) {
        rax = getenv ("QUOTING_STYLE");
        rbx = rax;
        if (rax == 0) {
            goto label_15;
        }
        eax = fcn_00405190 (rax, 0x413240, 0x413200, 4);
        if (eax < 0) {
            goto label_16;
        }
        rax = (int64_t) eax;
        fcn_004088b0 (0, *((rax*4 + 0x413200)));
        *((rsp + 0x10)) = r15;
    }
label_3:
    eax = *(0x0061739c);
    if (r14d <= eax) {
        goto label_17;
    }
    rdx = (int64_t) eax;
    eax = ~eax;
    eax += r14d;
    rbx = r13 + rdx*8;
    rax += rdx;
    r15 = r13 + rax*8 + 8;
    r13d = 1;
    while (bpl != 0) {
        if (eax == 0) {
            goto label_18;
        }
        rsi = rsp + 0x20;
        rdi = r14;
        eax = statfs ();
        if (eax != 0) {
            goto label_19;
        }
        esi |= 0xffffffff;
        eax = fcn_004037b0 (*((rsp + 8)), rsi, r14, 0x402b30, rsp + 0x20);
        eax ^= 1;
label_1:
        eax = (int32_t) al;
        rbx += 8;
        r13d &= eax;
        if (r15 == rbx) {
            goto label_20;
        }
        r14 = *(rbx);
        ecx = 2;
        edi = 0x4137ca;
        rsi = r14;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (r15 > rbx) ? 1 : 0;
        eax = (int32_t) al;
    }
    if (eax == 0) {
        goto label_21;
    }
    if (*(0x00617481) == 0) {
        goto label_22;
    }
    rdx = rsp + 0x20;
    rsi = r14;
    edi = 1;
    eax = xstat ();
    al = (eax != 0) ? 1 : 0;
    do {
        esi = r12d;
        if (al != 0) {
            goto label_23;
        }
label_2:
        edx = *((rsp + 0x38));
        rdi = *((rsp + 0x10));
        r8 = rsp + 0x20;
        ecx = 0x4042e0;
        edx &= 0xb000;
        if (edx != 0x2000) {
            rdi = *((rsp + 8));
        }
        eax = fcn_004037b0 (rdi, rsi, r14, rcx, r8);
        eax ^= 1;
        goto label_1;
label_18:
        rax = fcn_00408cc0 (4, r14);
        edx = 5;
        r14 = rax;
        rax = dcgettext (0, "using %s to denote standard input does not work in file system mode");
        rcx = r14;
        eax = 0;
        eax = error (0, 0, rax);
        eax = 0;
        goto label_1;
label_22:
        rdx = rsp + 0x20;
        rsi = r14;
        edi = 1;
        eax = lxstat ();
        al = (eax != 0) ? 1 : 0;
    } while (1);
label_21:
    esi = 0;
    rdx = rsp + 0x20;
    edi = 1;
    eax = fxstat ();
    esi = eax;
    if (eax == 0) {
        goto label_2;
    }
    edx = 5;
    rax = dcgettext (0, "cannot stat standard input");
    r14 = rax;
    rax = errno_location ();
    eax = 0;
    eax = error (0, *(rax), r14);
    eax = 0;
    goto label_1;
label_17:
    r13d = 1;
label_20:
    r13d ^= 1;
    eax = (int32_t) r13b;
    return rax;
label_19:
    rax = fcn_00408cc0 (4, r14);
    edx = 5;
    *((rsp + 0x18)) = rax;
    do {
        rax = dcgettext (0, "cannot read file system information for %s");
        r14 = rax;
        rax = errno_location ();
        rcx = *((rsp + 0x18));
        eax = 0;
        eax = error (0, *(rax), r14);
        eax = 0;
        goto label_1;
label_23:
        rax = fcn_00408cc0 (4, r14);
        edx = 5;
        esi = "cannot stat %s";
        *((rsp + 0x18)) = rax;
    } while (1);
label_16:
    fcn_004088b0 (0, 4);
    rax = fcn_00408f10 (rbx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "ignoring invalid value of environment variable QUOTING_STYLE: %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    rax = *((rsp + 8));
    *((rsp + 0x10)) = rax;
    goto label_3;
label_14:
    r15d = (int32_t) bpl;
    edx = 0;
    esi = ebx;
    rax = fcn_00403e80 (r15d);
    edx = 1;
    esi = ebx;
    *((rsp + 8)) = rax;
    rax = fcn_00403e80 (r15d);
    *((rsp + 0x10)) = rax;
    goto label_3;
label_15:
    fcn_004088b0 (0, 4);
    rax = *((rsp + 8));
    *((rsp + 0x10)) = rax;
    goto label_3;
label_10:
    fcn_00404870 (0);
label_13:
    edx = 5;
    rax = dcgettext (0, "missing operand");
    eax = 0;
    error (0, 0, rax);
    goto label_4;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4028cb */
#include <stdint.h>
 
int32_t fcn_004028cb (void) {
    eax = __progname;
    if (rax != obj.__progname) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = __progname;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x402921 */
#include <stdint.h>
 
int64_t fcn_00402921 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x006173c8) != 0) {
        goto label_0;
    }
    r12d = section..dtors;
    ebx = 0x616e48;
    rbx -= section..dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x006173d0) = rax;
        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_004028cb ();
    *(0x006173c8) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x402978 */
#include <stdint.h>
 
int64_t fcn_00402978 (void) {
    do {
        esi = __progname;
        ecx = 2;
        rsi -= obj.__progname;
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
            edi = __progname;
            void (*rax)() ();
        }
label_0:
        return rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x402980 */
#include <stdint.h>
 
uint64_t fcn_00402980 (int64_t arg1, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    r15 = rdx;
    r13 = rdi + rsi;
    r12 = rdi + 1;
    rbx = r12;
    *((rsp + 8)) = rcx;
    if (r12 < r13) {
        goto label_0;
    }
    goto label_1;
    do {
        rax = strchr (r15, r14d);
        if (rax != 0) {
            *(r12) = bpl;
            r12++;
        }
        rbx++;
        if (r13 <= rbx) {
            goto label_1;
        }
label_0:
        r14d = *(rbx);
        esi = r14d;
        rax = strchr ('-+ #0I", esi);
    } while (rax != 0);
    if (rbx >= r13) {
        goto label_1;
    }
    r13 -= rbx;
    while (r13 != rax) {
        ebp = *((rbx + rax));
        *((r12 + rax)) = bpl;
        rax++;
    }
    r12 += r13;
label_1:
    rsi = *((rsp + 8));
    rdi = r12;
    return strcpy ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x402a30 */
#include <stdint.h>
 
uint32_t fcn_00402a30 (int64_t arg1, int64_t arg3) {
    rdi = arg1;
    rdx = arg3;
    ecx = 0x4103a4;
    rbx = rdi;
    eax = fcn_00402980 (rdi, rsi, 0x4103a7);
    rdx = rbp;
    rsi = rbx;
    edi = 1;
    eax = 0;
    return printf_chk ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x402a70 */
#include <stdint.h>
 
uint32_t fcn_00402a70 (int64_t arg1, int64_t arg3) {
    rdi = arg1;
    rdx = arg3;
    ecx = 0x41209b;
    rbx = rdi;
    eax = fcn_00402980 (rdi, rsi, 0x4137ca);
    rdx = rbp;
    rsi = rbx;
    edi = 1;
    eax = 0;
    return printf_chk ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x402ab0 */
#include <stdint.h>
 
uint32_t fcn_00402ab0 (int64_t arg1, int64_t arg3) {
    rdi = arg1;
    rdx = arg3;
    ecx = 0x4103ab;
    rbx = rdi;
    eax = fcn_00402980 (rdi, rsi, 0x4103ae);
    rdx = rbp;
    rsi = rbx;
    edi = 1;
    eax = 0;
    return printf_chk ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x402af0 */
#include <stdint.h>
 
uint32_t fcn_00402af0 (int64_t arg1, int64_t arg3) {
    rdi = arg1;
    rdx = arg3;
    ecx = 0x4103b2;
    rbx = rdi;
    eax = fcn_00402980 (rdi, rsi, '-+ 0");
    rdx = rbp;
    rsi = rbx;
    edi = 1;
    eax = 0;
    return printf_chk ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4037b0 */
#include <stdint.h>
 
uint64_t fcn_004037b0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_3h;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r14 = rdi;
    *((rsp + 4)) = esi;
    *((rsp + 8)) = rdx;
    *((rsp + 0x10)) = rcx;
    *((rsp + 0x18)) = r8;
    strlen (rdi);
    rax = fcn_00409560 (rax + 3);
    esi = *(r14);
    *((rsp + 3)) = 0;
    rbx = rax;
    if (sil != 0) {
        goto label_0;
    }
    goto label_6;
    do {
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_7;
        }
        rdx = rax + 1;
        r14 = r12;
        *((rdi + 0x28)) = rdx;
        *(rax) = sil;
label_1:
        esi = *((rbp + 1));
        if (sil == 0) {
            goto label_6;
        }
label_0:
        r12 = r14 + 1;
        if (sil == 0x25) {
            goto label_8;
        }
    } while (sil != 0x5c);
    if (*(0x00617480) != 0) {
        ebp = *((r14 + 1));
        eax = rbp - 0x30;
        if (al <= 7) {
            goto label_9;
        }
        if (bpl == 0x78) {
            goto label_10;
        }
        if (bpl != 0) {
            goto label_11;
        }
        edx = 5;
        rax = dcgettext (0, "warning: backslash at end of format");
        eax = 0;
        error (0, 0, rax);
    }
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_12;
    }
    rdx = rax + 1;
    r14 = r12;
    *((rdi + 0x28)) = rdx;
    *(rax) = 0x5c;
    esi = *((rbp + 1));
    if (sil != 0) {
        goto label_0;
    }
label_6:
    free (rbx);
    rsi = stdout;
    rdi = *(0x00617310);
    fputs_unlocked ();
    eax = *((rsp + 3));
    return rax;
label_8:
    strspn (r12, '-+ #0I");
    rbp = r14 + rax + 1;
    rax = strspn (rbp, "0123456789");
    rbp += rax;
    r15d = *(rbp);
    if (r15b == 0x2e) {
        strspn (rbp + 1, "0123456789");
        rbp = rbp + rax + 1;
        r15d = *(rbp);
    }
    rax = rbp;
    rax -= r12;
    r13 = rax + 1;
    r12 = rax;
    memcpy (rbx, r14, r13);
    if (r15b != 0) {
        if (r15b == 0x25) {
            goto label_13;
        }
        edx = (int32_t) r15b;
        r9 = *((rsp + 0x18));
        ecx = *((rsp + 4));
        rsi = r13;
        r8 = *((rsp + 8));
        rdi = rbx;
        rax = *((rsp + 0x10));
        r14 = rbp + 1;
        al = void (*rax)() ();
        goto label_1;
    }
    rbp--;
label_13:
    if (r12 != 0) {
        goto label_14;
    }
    rdi = stdout;
    r14 = rbp + 1;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_15;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = 0x25;
    goto label_1;
label_11:
    eax = rbp - 0x22;
    r13d = (int32_t) bpl;
    if (al <= 0x54) {
        eax = (int32_t) al;
        /* switch table (85 cases) at 0x410990 */
label_10:
        rax = ctype_b_loc ();
        ecx = *((r14 + 2));
        rdx = *(rax);
        rax = rcx;
        if ((*((rdx + rcx*2 + 1)) & 0x10) != 0) {
            goto label_16;
        }
        r13d = 0x78;
    }
    edx = 5;
    rax = dcgettext (0, "warning: unrecognized escape '\\%c');
    ecx = r13d;
    eax = 0;
    error (0, 0, rax);
label_2:
    rdi = stdout;
    r14 += 2;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_17;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = bpl;
    goto label_1;
label_9:
    eax = *((r14 + 2));
    r10d = (int32_t) bpl;
    r10d -= 0x30;
    edx = rax - 0x30;
    if (dl > 7) {
        goto label_18;
    }
    r10d = rax + r10*8 - 0x30;
    eax = *((r14 + 3));
    edx = rax - 0x30;
    if (dl > 7) {
        goto label_19;
    }
    r10d = rax + r10*8 - 0x30;
    r14 += 4;
label_5:
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_20;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = r10b;
label_4:
    rbp = r14 - 1;
    goto label_1;
label_7:
    eax = overflow ();
    r14 = r12;
    goto label_1;
label_16:
    esi = rax - 0x61;
    ecx = (int32_t) cl;
    if (sil <= 5) {
        goto label_21;
    }
    eax -= 0x41;
    esi = rcx - 0x37;
    ecx -= 0x30;
    eax = esi;
    eax = ecx;
    while (1) {
        esi = *((r14 + 3));
        rbp = r14 + 2;
        rcx = rsi;
        if ((*((rdx + rsi*2 + 1)) & 0x10) != 0) {
            edx = (int32_t) sil;
            esi = rsi - 0x61;
            rbp = r14 + 3;
            eax <<= 4;
            if (sil > 5) {
                goto label_22;
            }
            edx -= 0x57;
label_3:
            eax += edx;
        }
        rdi = stdout;
        r14 = rbp + 1;
        rdx = *((rdi + 0x28));
        if (rdx >= *((rdi + 0x30))) {
            goto label_23;
        }
        rcx = rdx + 1;
        *((rdi + 0x28)) = rcx;
        *(rdx) = al;
        goto label_1;
label_15:
        esi = 0x25;
        overflow ();
        goto label_1;
label_12:
        esi = 0x5c;
        r14 = r12;
        overflow ();
        goto label_1;
label_21:
        eax = rcx - 0x57;
    }
    r13d = 7;
    goto label_2;
    r13d = 8;
    goto label_2;
    r13d = 0x1b;
    goto label_2;
    r13d = 0xc;
    goto label_2;
    r13d = 0xa;
    goto label_2;
    r13d = 0xd;
    goto label_2;
    r13d = 9;
    goto label_2;
    r13d = 0xb;
    goto label_2;
label_22:
    ecx -= 0x41;
    esi = rdx - 0x37;
    edx -= 0x30;
    if (cl <= 5) {
        edx = esi;
    }
    goto label_3;
label_17:
    esi = (int32_t) r13b;
    overflow ();
    goto label_1;
label_20:
    esi = (int32_t) r10b;
    al = overflow ();
    goto label_4;
label_18:
    r14 += 2;
    goto label_5;
label_19:
    r14 += 3;
    goto label_5;
label_23:
    esi = (int32_t) al;
    overflow ();
    goto label_1;
label_14:
    *((rbx + r13)) = r15b;
    *((rbx + r12 + 2)) = 0;
    rax = fcn_00408f10 (rbx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s: invalid directive");
    rcx = rbx;
    eax = 0;
    rax = error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x403ca0 */
#include <stdint.h>
 
uint64_t fcn_00403ca0 (int64_t arg1, int64_t arg2) {
    int64_t var_8h_2;
    int64_t var_10h_2;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    *(rsp) = rdi;
    rdi = imp.__libc_start_main;
    *((rsp + 8)) = rsi;
    while (1) {
        rbx = *((rsp + 8));
        rax = fcn_0040c450 (rdi, rsp, rsp + 0x30);
        if (rax != 0) {
            r8 = imp.__libc_start_main;
            r9d = ebx;
            rcx = rsp + 0x30;
            edx = "%Y-%m-%d %H:%M:%S.%N %z";
            fcn_004072d0 (0x6173e0, 0x3d);
            eax = 0x6173e0;
            return rax;
        }
        rax = fcn_004059c0 (*(rsp), rsp + 0x10, rdx);
        r9d = ebx;
        ecx = "%s.%09d";
        edx = 0x3d;
        r8 = rax;
        esi = 1;
        edi = 0x6173e0;
        eax = 0;
        sprintf_chk ();
        eax = 0x6173e0;
        return rax;
        rax = getenv (0x4106c6);
        rax = fcn_0040c170 (rax);
        rdi = rax;
        *(0x00617420) = rax;
    }
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x403d70 */
#include <stdint.h>
 
uint64_t fcn_00403d70 (int64_t arg1) {
    uint32_t var_8h;
    int64_t var_90h;
    int64_t var_98h;
    rdi = arg1;
    r12 = rdi;
    if (*(0x00617430) == 0) {
        goto label_2;
    }
label_1:
    rdx = rsp;
    rsi = r12;
    edi = 1;
    eax = xstat ();
    if (eax != 0) {
        goto label_3;
    }
    rbx = imp.__libc_start_main;
    if (rbx != 0) {
        goto label_4;
    }
    goto label_3;
    do {
label_0:
        rbx = *((rbx + 0x30));
        if (rbx == 0) {
            goto label_3;
        }
label_4:
    } while ((*((rbx + 0x28)) & 1) == 0);
    rbp = *(rbx);
    if (*(rbp) != 0x2f) {
        goto label_0;
    }
    eax = strcmp (*((rbx + 8)), r12);
    if (eax != 0) {
        goto label_0;
    }
    rdx = rsp + 0x90;
    rsi = rbp;
    edi = 1;
    eax = xstat ();
    if (eax != 0) {
        goto label_0;
    }
    rax = *((rsp + 0x98));
    if (*((rsp + 8)) != rax) {
        goto label_0;
    }
    rax = *((rsp + 0x90));
    if (*(rsp) != rax) {
        goto label_0;
    }
    rax = *(rbx);
    goto label_5;
label_3:
    eax = 0;
label_5:
    return rax;
label_2:
    edi = 0;
    rax = fcn_0040b0c0 ();
    *(0x00617428) = rax;
    while (1) {
        *(0x00617430) = 1;
        goto label_1;
        edx = 5;
        rax = dcgettext (0, "cannot read table of mounted file systems");
        rbx = rax;
        rax = errno_location ();
        rcx = rbx;
        eax = 0;
        error (0, *(rax), 0x41209a);
    }
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x403e80 */
#include <stdint.h>
 
uint64_t fcn_00403e80 (int64_t arg3) {
    rdx = arg3;
    if (dil != 0) {
        if (sil != 0) {
            edi = "%n %i %l %t %s %S %b %f %a %c %d\n";
            r12 = rbx;
            void (*0x409790)() ();
        }
        edx = 5;
        rax = dcgettext (0, "  File: \"%n\"\n    ID: %-8i Namelen: %-7l Type: %T\nBlock size: %-10s Fundamental block size: %S\nBlocks: Total: %-10b Free: %-10f Available: %a\nInodes: Total: %-10c Free: %d\n");
        rdi = rax;
        void (*0x409790)() ();
    }
    if (sil != 0) {
        edi = "%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n";
        void (*0x409790)() ();
    }
    ebx = edx;
    edx = 5;
    rax = dcgettext (0, "  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\n");
    rax = fcn_00409790 (rax);
    edx = 5;
    esi = "Device: %Dh/%dd\tInode: %-10i  Links: %-5h Device type: %t,%T\n";
    r12 = rax;
    if (bl == 0) {
    }
    rax = dcgettext (0, "Device: %Dh/%dd\tInode: %-10i  Links: %h\n");
    eax = 0;
    rax = fcn_00409820 ("%s%s", r12, rax, rcx, r8, r9);
    free (r12);
    edx = 5;
    rax = dcgettext (0, "Access: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\n");
    eax = 0;
    rax = fcn_00409820 ("%s%s", rbp, rax, rcx, r8, r9);
    rbx = rax;
    free (rbp);
    edx = 5;
    rax = dcgettext (0, "Access: %x\nModify: %y\nChange: %z\n Birth: %w\n");
    eax = 0;
    rax = fcn_00409820 ("%s%s", rbx, rax, rcx, r8, r9);
    free (rbx);
    rax = rbp;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x403f90 */
#include <stdint.h>
 
void fcn_00403f90 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    long var_10h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rdi;
    r13 = rsi;
    r12 = rdx;
    *((rsp + 8)) = rdx;
    rax = fcn_0040aed0 (rdi, 0x2e, rsi);
    if (rax == 0) {
        goto label_6;
    }
    rcx = rax;
    r15 = rax;
    *((r14 + r13)) = 0;
    eax = *((rax + 1));
    rcx -= r14;
    eax -= 0x30;
    if (eax <= 9) {
        goto label_7;
    }
    eax = *((r15 - 1));
    ebx = 9;
    eax -= 0x30;
    if (eax > 9) {
        goto label_8;
    }
label_1:
    *(r15) = 0;
    do {
        r15--;
        eax = *((r15 - 1));
        eax -= 0x30;
    } while (eax <= 9);
    *((rsp + 0x18)) = rcx;
    rax = strtol (r15, 0, 0xa);
    edx = 0x7fffffff;
    rcx = *((rsp + 0x18));
    if (rax > 0x7fffffff) {
        rax = rdx;
    }
    r13 = rcx;
    *((rsp + 0x10)) = eax;
    if (eax <= 1) {
        goto label_5;
    }
    edx = 0;
    rcx = (int64_t) eax;
    dl = (*(r15) == 0x30) ? 1 : 0;
    r15 += rdx;
    rdx = imp.__libc_start_main;
    r13 = r15;
    r13 -= r14;
    if (rcx <= rdx) {
        goto label_5;
    }
    eax -= edx;
    if (eax <= 1) {
        goto label_5;
    }
    eax -= ebx;
    if (eax <= 1) {
        goto label_5;
    }
    rdi = r14;
    if (r14 >= r15) {
        goto label_9;
    }
    rdx = r14;
    esi = 0;
    while (cl != 0x2d) {
        *(rdi) = cl;
        rdi++;
label_0:
        rdx++;
        if (r15 == rdx) {
            goto label_10;
        }
        ecx = *(rdx);
    }
    esi = 1;
    goto label_0;
label_7:
    *((rsp + 0x10)) = rcx;
    rax = strtol (r15 + 1, 0, 0xa);
    edx = 0x7fffffff;
    rcx = *((rsp + 0x10));
    if (rax > 0x7fffffff) {
        rax = rdx;
    }
    ebx = eax;
    if (eax == 0) {
        goto label_11;
    }
    eax = *((r15 - 1));
    eax -= 0x30;
    if (eax <= 9) {
        goto label_1;
    }
    *((rsp + 0x10)) = 0;
    r13 = rcx;
label_5:
    if (ebx > 8) {
        goto label_12;
    }
label_2:
    esi = ebx;
    ecx = 1;
    do {
        ecx = rcx * 5;
        esi++;
        ecx += ecx;
    } while (esi != 9);
    rax = rbp;
    rsi = (int64_t) ecx;
    __asm ("cqo");
    rax = rdx:rax / rsi;
    rdx = rdx:rax % rsi;
    r15 = rax;
label_4:
    if (r12 >= 0) {
        goto label_13;
    }
    while (r12 != 0) {
label_13:
        rdx = *((rsp + 8));
        eax = fcn_00402af0 (r14, r13);
label_3:
        if (ebx != 0) {
            ecx = 9;
            edx = 0;
            edi = *((rsp + 0x10));
            if (ebx <= 9) {
                ecx = ebx;
            }
            ebx -= ecx;
            __asm ("cmovs eax, edx");
            r9d = 0;
            if (eax < edi) {
                r13d = edi;
                r13d -= eax;
                rax = imp.__libc_start_main;
                rdx = (int64_t) r13d;
                esi = rcx + rax;
                r13d -= esi;
                if (rdx <= rax) {
                    r9d = r13d;
                    goto label_14;
                }
            }
label_14:
            rdx = imp.__libc_start_main;
            r8d = r15d;
            eax = 0;
            esi = "%s%.*d%-*.*d";
            edi = 1;
            printf_chk ();
        }
        return;
label_6:
        *((rsp + 0x10)) = 0;
        ebx = 0;
        goto label_2;
        eax = 0x3b9aca00;
        edx:eax = (int64_t) eax;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        eax -= r15d;
        r15d = eax;
        rax = rbp;
        __asm ("cqo");
        rax = rdx:rax / rsi;
        rdx = rdx:rax % rsi;
        eax = 0;
        al = (rdx != 0) ? 1 : 0;
        r15d -= eax;
        al = (r15d != 0) ? 1 : 0;
        eax = (int32_t) al;
        r12 += rax;
        *((rsp + 8)) = r12;
    }
    ecx = 0x4106ee;
    fcn_00402980 (r14, r13, '-+ 0");
    xmm0 = *(0x00411fa0);
    rsi = r14;
    edi = 1;
    eax = 1;
    eax = printf_chk ();
    goto label_3;
label_11:
    *((rsp + 0x10)) = 0;
    r13 = rcx;
    goto label_2;
label_8:
    r13 = rcx;
    r15 = rbp;
    esi = 1;
    *((rsp + 0x10)) = 0;
    ecx = 1;
    goto label_4;
label_10:
    r13 = rdi;
    r13 -= r14;
    if (sil != 0) {
        goto label_5;
    }
    do {
        r8d = eax;
        ecx = 0x41213d;
        rdx = 0xffffffffffffffff;
        eax = 0;
        esi = 1;
        rax = sprintf_chk ();
        rax = (int64_t) eax;
        r13 += rax;
        goto label_5;
label_9:
        r13d = 0;
    } while (1);
label_12:
    r15 = rbp;
    esi = 1;
    ecx = 1;
    goto label_4;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x404870 */
#include <stdint.h>
 
uint64_t fcn_00404870 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [OPTION]... FILE...\n");
    rdx = rbp;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Display file or file system status.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nMandatory arguments to long options are mandatory for short options too.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -L, --dereference     follow links\n  -f, --file-system     display file system status instead of file status\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -c  --format=FORMAT   use the specified FORMAT instead of the default;\n                          output a newline after each use of FORMAT\n      --printf=FORMAT   like --format, but interpret backslash escapes,\n                          and do not output a mandatory trailing newline;\n                          if you want a newline, include \\n in FORMAT\n  -t, --terse           print the information in terse form\n");
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
    rax = dcgettext (0, "\nThe valid format sequences for files (without --file-system):\n\n  %a   access rights in octal (note '#' and '0' printf flags)\n  %A   access rights in human readable form\n  %b   number of blocks allocated (see %B)\n  %B   the size in bytes of each block reported by %b\n  %C   SELinux security context string\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  %d   device number in decimal\n  %D   device number in hex\n  %f   raw mode in hex\n  %F   file type\n  %g   group ID of owner\n  %G   group name of owner\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  %h   number of hard links\n  %i   inode number\n  %m   mount point\n  %n   file name\n  %N   quoted file name with dereference if symbolic link\n  %o   optimal I/O transfer size hint\n  %s   total size, in bytes\n  %t   major device type in hex, for character/block device special files\n  %T   minor device type in hex, for character/block device special files\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  %u   user ID of owner\n  %U   user name of owner\n  %w   time of file birth, human-readable; - if unknown\n  %W   time of file birth, seconds since Epoch; 0 if unknown\n  %x   time of last access, human-readable\n  %X   time of last access, seconds since Epoch\n  %y   time of last data modification, human-readable\n  %Y   time of last data modification, seconds since Epoch\n  %z   time of last status change, human-readable\n  %Z   time of last status change, seconds since Epoch\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Valid format sequences for file systems:\n\n  %a   free blocks available to non-superuser\n  %b   total data blocks in file system\n  %c   total file nodes in file system\n  %d   free file nodes in file system\n  %f   free blocks in file system\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rbp = stdout;
    rax = dcgettext (0, "  %i   file system ID in hex\n  %l   maximum length of filenames\n  %n   file name\n  %s   block size (for faster transfers)\n  %S   fundamental block size (for block counts)\n  %t   file system type in hex\n  %T   file system type in human readable form\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rax = dcgettext (0, "\n--terse is equivalent to the following FORMAT:\n    %s");
    edx = "%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    edx = 5;
    rax = dcgettext (0, "--terse --file-system is equivalent to the following FORMAT:\n    %s");
    edx = "%n %i %l %t %s %S %b %f %a %c %d\n";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    edx = 5;
    rax = dcgettext (0, "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell's documentation\nfor details about the options it supports.\n");
    edx = "stat";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    *(rsp) = 0x41074d;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x4107c7;
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
        esi = "stat";
        ecx = 5;
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
        eax = strncmp (rax, 0x4107d1, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x410769;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "stat";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x4137e7;
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
            eax = strncmp (rax, 0x4107d1, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "stat";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x410769;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "stat";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x404d10 */
#include <stdint.h>
 
uint64_t fcn_00404d10 (int64_t arg1, int64_t arg2) {
    int64_t var_150h;
    int64_t var_140h;
    int64_t var_138h;
    int64_t var_130h;
    int64_t var_120h;
    int64_t var_110h;
    int64_t var_100h;
    int64_t var_f0h;
    int64_t var_e0h;
    int64_t var_d0h;
    int64_t var_c0h;
    uint32_t var_b0h;
    uint32_t var_a8h;
    int64_t var_a0h;
    int64_t var_90h;
    int64_t var_80h;
    int64_t var_70h;
    int64_t var_60h;
    int64_t var_50h;
    int64_t var_40h;
    int64_t var_30h;
    int64_t var_20h;
    void * s1;
    rdi = arg1;
    rsi = arg2;
    r14 = rdi;
    rbx = rsi;
    eax = fcn_00408f30 (rbp - 0x150);
    r13d = eax;
    rax = errno_location ();
    r12 = rax;
    if (r13d != 0) {
        goto label_3;
    }
    eax = *((rbx + 0x18));
    eax &= 0xf000;
    if (eax == 0x4000) {
        goto label_4;
    }
    rdi = r14;
    rax = fcn_004055d0 ();
    rdi = rax;
    rbx = rax;
    rax = strlen (rdi);
    rax += 0x18;
    rax &= 0xfffffffffffffff0;
    rdi &= 0xfffffffffffffff0;
    rax = memcpy (rsp + 0xf, rbx, rax + 1);
    r13 = rax;
    free (rbx);
    rdi = r13;
    eax = chdir ();
    if (eax < 0) {
        goto label_5;
    }
    rdx = rbp - 0x140;
    esi = 0x411fe4;
    edi = 1;
    eax = xstat ();
    if (eax >= 0) {
        goto label_0;
    }
    rax = fcn_00408cc0 (4, r13);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot stat current directory (now %s)");
    rcx = rbx;
    eax = 0;
    ebx = 0;
    error (0, *(r12), rax);
    goto label_6;
    do {
        rax = *((rbp - 0x140));
        if (*((rbp - 0xb0)) != rax) {
            goto label_7;
        }
        rax = *((rbp - 0x138));
        if (*((rbp - 0xa8)) == rax) {
            goto label_7;
        }
        edi = 0x411fe3;
        eax = chdir ();
        if (eax < 0) {
            goto label_8;
        }
        __asm ("movdqa xmm0, xmmword [rbp - 0xb0]");
        __asm ("movdqa xmm1, xmmword [rbp - 0xa0]");
        __asm ("movdqa xmm2, xmmword [rbp - 0x90]");
        __asm ("movdqa xmm3, xmmword [rbp - 0x80]");
        *((rbp - 0x140)) = xmm0;
        __asm ("movdqa xmm4, xmmword [rbp - 0x70]");
        __asm ("movdqa xmm5, xmmword [rbp - 0x60]");
        __asm ("movdqa xmm6, xmmword [rbp - 0x50]");
        __asm ("movdqa xmm7, xmmword [rbp - 0x40]");
        *((rbp - 0x130)) = xmm1;
        __asm ("movdqa xmm0, xmmword [rbp - 0x30]");
        *((rbp - 0x120)) = xmm2;
        *((rbp - 0x110)) = xmm3;
        *((rbp - 0x100)) = xmm4;
        *((rbp - 0xf0)) = xmm5;
        *((rbp - 0xe0)) = xmm6;
        *((rbp - 0xd0)) = xmm7;
        *((rbp - 0xc0)) = xmm0;
label_0:
        rdx = rbp - 0xb0;
        esi = 0x411fe3;
        edi = 1;
        eax = xstat ();
    } while (eax >= 0);
    rax = fcn_00408cc0 (4, 0x411fe3);
    edx = 5;
    rbx = rax;
label_2:
    rax = dcgettext (0, "cannot stat %s");
    rcx = rbx;
    eax = 0;
    ebx = 0;
    error (0, *(r12), rax);
    goto label_6;
label_7:
    rax = fcn_004097f0 ();
    rbx = rax;
label_6:
    r13d = *(r12);
    eax = fcn_00408f80 (rbp - 0x150);
    if (eax != 0) {
        goto label_9;
    }
    fcn_00408fa0 (rbp - 0x150);
    *(r12) = r13d;
label_1:
    rsp = rbp - 0x20;
    rax = rbx;
    return rax;
label_4:
    __asm ("movdqu xmm1, xmmword [rbx]");
    __asm ("movdqu xmm2, xmmword [rbx + 0x10]");
    rdi = r14;
    __asm ("movdqu xmm3, xmmword [rbx + 0x20]");
    __asm ("movdqu xmm4, xmmword [rbx + 0x30]");
    *((rbp - 0x140)) = xmm1;
    __asm ("movdqu xmm5, xmmword [rbx + 0x40]");
    __asm ("movdqu xmm6, xmmword [rbx + 0x50]");
    *((rbp - 0x130)) = xmm2;
    __asm ("movdqu xmm7, xmmword [rbx + 0x60]");
    __asm ("movdqu xmm1, xmmword [rbx + 0x70]");
    __asm ("movdqu xmm2, xmmword [rbx + 0x80]");
    *((rbp - 0x120)) = xmm3;
    *((rbp - 0x110)) = xmm4;
    *((rbp - 0x100)) = xmm5;
    *((rbp - 0xf0)) = xmm6;
    *((rbp - 0xe0)) = xmm7;
    *((rbp - 0xd0)) = xmm1;
    *((rbp - 0xc0)) = xmm2;
    eax = chdir ();
    rsi = r14;
    if (eax >= 0) {
        goto label_0;
    }
    do {
        rax = fcn_00408cc0 (4, rsi);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "cannot change to directory %s");
        rcx = rbx;
        eax = 0;
        ebx = 0;
        error (0, *(r12), rax);
        goto label_1;
label_8:
        rax = fcn_00408cc0 (4, 0x411fe3);
        edx = 5;
        esi = "cannot change to directory %s";
        rbx = rax;
        goto label_2;
label_3:
        edx = 5;
        ebx = 0;
        rax = dcgettext (0, 0x411fa8);
        eax = 0;
        error (0, *(r12), rax);
        goto label_1;
label_5:
        rsi = r13;
    } while (1);
label_9:
    edx = 5;
    rax = dcgettext (0, "failed to return to initial working directory");
    eax = 0;
    rax = error (1, *(r12), rax);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x405090 */
#include <stdint.h>
 
uint64_t fcn_00405090 (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    eax = 0x401;
    r15 = 0x7ffffffffffffffe;
    r14 = 0x3fffffffffffffff;
    r13 = rdi;
    rbx = rsi + 1;
    if (rsi >= 0x401) {
        rbx = rax;
    }
label_0:
    rax = malloc (rbx);
    if (rax == 0) {
        goto label_2;
    }
    do {
        rdx = rbx;
        rsi = rax;
        rdi = r13;
        rax = readlink ();
        r12 = rax;
        if (rax < 0) {
            goto label_3;
        }
label_1:
        if (rbx > r12) {
            goto label_4;
        }
        free (rbp);
        if (rbx > r14) {
            goto label_5;
        }
        rbx += rbx;
        rax = malloc (rbx);
    } while (rax != 0);
label_2:
    rax = rbp;
    return rax;
label_5:
    if (rbx > r15) {
        goto label_6;
    }
    rbx = 0x7fffffffffffffff;
    goto label_0;
label_3:
    rax = errno_location ();
    if (*(rax) == 0x22) {
        goto label_1;
    }
    ebp = 0;
    free (rbp);
    goto label_2;
label_4:
    *((rbp + r12)) = 0;
    goto label_2;
label_6:
    errno_location ();
    ebp = 0;
    *(rax) = 0xc;
    goto label_2;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x405190 */
#include <stdint.h>
 
uint64_t fcn_00405190 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    char * s2;
    uint32_t var_17h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r15 = rsi;
    r13 = rcx;
    *((rsp + 8)) = rdi;
    *((rsp + 0x18)) = rdx;
    rax = strlen (rdi);
    r14 = *(r15);
    *(rsp) = 0xffffffffffffffff;
    if (r14 == 0) {
        goto label_3;
    }
    r12 = rax;
    *((rsp + 0x17)) = 0;
    ebx = 0;
    goto label_1;
label_0:
    rax = *((rsp + 0x18));
    if (rax == 0) {
        goto label_4;
    }
    rdi *= r13;
    rdi += rax;
    eax = memcmp (*(rsp), rbp, r13);
    ecx = 1;
    eax = *((rsp + 0x17));
    if (eax != 0) {
        eax = ecx;
    }
    *((rsp + 0x17)) = al;
    do {
label_2:
        rbx++;
        rbp += r13;
        r14 = *((r15 + rbx*8));
        if (r14 == 0) {
            goto label_5;
        }
label_1:
        eax = strncmp (r14, *((rsp + 8)), r12);
    } while (eax != 0);
    rax = strlen (r14);
    if (rax == r12) {
        goto label_6;
    }
    if (*(rsp) != -1) {
        goto label_0;
    }
    *(rsp) = rbx;
    rbx++;
    rbp += r13;
    r14 = *((r15 + rbx*8));
    if (r14 != 0) {
        goto label_1;
    }
label_5:
    rax = 0xfffffffffffffffe;
    if (*((rsp + 0x17)) == 0) {
        rax = *(rsp);
    }
    *(rsp) = rax;
    do {
label_3:
        rax = *(rsp);
        return rax;
label_4:
        *((rsp + 0x17)) = 1;
        goto label_2;
label_6:
        *(rsp) = rbx;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4052b0 */
#include <stdint.h>
 
uint64_t fcn_004052b0 (int64_t arg1, int64_t arg2, uint32_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    edx = 5;
    r12 = rsi;
    if (rdx == -1) {
        goto label_0;
    }
    rax = dcgettext (0, "ambiguous argument %s for %s");
    rbx = rax;
    do {
        rax = fcn_00408ef0 (1, rbp);
        rax = fcn_00408be0 (0, 8, r12);
        r8 = rbp;
        rdx = rbx;
        esi = 0;
        rcx = rax;
        edi = 0;
        eax = 0;
        void (*0x402250)() ();
label_0:
        rax = dcgettext (0, "invalid argument %s for %s");
        rbx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x405330 */
#include <stdint.h>
 
uint64_t fcn_00405330 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r15 = rdi;
    r14d = 0;
    r13 = rdx;
    edx = 5;
    rbx = stderr;
    rax = dcgettext (0, "Valid arguments are:");
    rdi = rax;
    rsi = rbx;
    ebx = 0;
    fputs_unlocked ();
    r12 = *(r15);
    if (r12 != 0) {
        goto label_1;
    }
    goto label_2;
    do {
label_0:
        rbx++;
        r14 = rbp;
        rbp += r13;
        rax = fcn_00408f10 (r12);
        edx = "\n  - %s";
        esi = 1;
        rdi = stderr;
        rcx = rax;
        eax = 0;
        fprintf_chk ();
        r12 = *((r15 + rbx*8));
        if (r12 == 0) {
            goto label_2;
        }
label_1:
    } while (rbx == 0);
    eax = memcmp (r14, rbp, r13);
    if (eax != 0) {
        goto label_0;
    }
    rbx++;
    rbp += r13;
    rax = fcn_00408f10 (r12);
    edx = ", %s";
    esi = 1;
    rdi = stderr;
    rcx = rax;
    eax = 0;
    fprintf_chk ();
    r12 = *((r15 + rbx*8));
    if (r12 != 0) {
        goto label_1;
    }
label_2:
    rdi = stderr;
    rax = *((rdi + 0x28));
    if (rax < *((rdi + 0x30))) {
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0xa;
        return rax;
    }
    esi = 0xa;
    return overflow ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4055d0 */
#include <stdint.h>
 
uint64_t fcn_004055d0 (void) {
    rax = fcn_00405650 (rdi);
    if (rax != 0) {
        return rax;
    }
    return fcn_004097b0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4055f0 */
#include <stdint.h>
 
uint64_t fcn_004055f0 (uint32_t arg1) {
    rdi = arg1;
    ebp = 0;
    rbx = rdi;
    bpl = (*(rdi) == 0x2f) ? 1 : 0;
    rax = fcn_004056b0 (rdi);
    rcx = rax;
    rcx -= rbx;
    if (rcx <= rbp) {
        goto label_0;
    }
    rdx = rcx - 1;
    if (*((rax - 1)) == 0x2f) {
        goto label_1;
    }
    goto label_0;
    do {
        rax = rdx - 1;
        if (*((rbx + rdx - 1)) != 0x2f) {
            goto label_2;
        }
        rdx = rax;
label_1:
    } while (rbp != rdx);
label_2:
    rax = rdx;
    return rax;
label_0:
    rdx = rcx;
    rax = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x405650 */
#include <stdint.h>
 
uint64_t fcn_00405650 (int64_t arg1) {
    rdi = arg1;
    rax = fcn_004055f0 (rdi);
    rbx = rax;
    al = (rax == 0) ? 1 : 0;
    eax = (int32_t) al;
    rax = malloc (rbx + rax + 1);
    rcx = rax;
    if (rax == 0) {
        goto label_0;
    }
    rax = memcpy (rax, rbp, rbx);
    rcx = rax;
    while (1) {
        *((rcx + rbx)) = 0;
label_0:
        rax = rcx;
        return rax;
        *(rax) = 0x2e;
        ebx = 1;
    }
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4056b0 */
#include <stdint.h>
 
int64_t fcn_004056b0 (int64_t arg1) {
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
label_0:
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x405740 */
#include <stdint.h>
 
int32_t fcn_00405740 (uint32_t arg1) {
    rdi = arg1;
    eax = *((rdi + 0x18));
    edx = 5;
    eax &= 0xf000;
    if (eax != 0x8000) {
        if (eax == 0x4000) {
            goto label_0;
        }
        if (eax == 0xa000) {
            goto label_1;
        }
        if (eax == 0x6000) {
            goto label_2;
        }
        if (eax == 0x2000) {
            goto label_3;
        }
        if (eax == 0x1000) {
            goto label_4;
        }
        if (eax == 0xc000) {
            goto label_5;
        }
        esi = "weird file";
        edi = 0;
        void (*0x401f10)() ();
    }
    if (*((rdi + 0x30)) == 0) {
        esi = "regular empty file";
        edi = 0;
        void (*0x401f10)() ();
    }
    esi = "regular file";
    edi = 0;
    void (*0x401f10)() ();
label_3:
    esi = "character special file";
    edi = 0;
    void (*0x401f10)() ();
label_0:
    esi = 0x411fbb;
    edi = 0;
    void (*0x401f10)() ();
label_5:
    esi = "socket";
    edi = 0;
    void (*0x401f10)() ();
label_1:
    esi = "symbolic link";
    edi = 0;
    void (*0x401f10)() ();
label_2:
    esi = "block special file";
    edi = 0;
    void (*0x401f10)() ();
label_4:
    esi = "fifo";
    edi = 0;
    return dcgettext ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4059b0 */
#include <stdint.h>
 
int32_t fcn_004059b0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
label_1:
    edx = edi;
    eax = 0x2d;
    edx &= 0xf000;
    if (edx != 0x8000) {
        eax = 0x64;
        if (edx == 0x4000) {
            goto label_2;
        }
        eax = 0x62;
        if (edx == 0x6000) {
            goto label_2;
        }
        eax = 0x63;
        if (edx == 0x2000) {
            goto label_2;
        }
        eax = 0x6c;
        if (edx == 0xa000) {
            goto label_2;
        }
        eax = 0x70;
        if (edx == 0x1000) {
            goto label_2;
        }
        eax = 0x73;
        edx = 0x3f;
        if (edx == 0xc000) {
            eax = edx;
            goto label_2;
        }
    }
label_2:
    *(rsi) = al;
    eax = edi;
    eax &= 0x100;
    eax -= eax;
    eax &= 0xffffffbb;
    eax += 0x72;
    *((rsi + 1)) = al;
    eax = edi;
    eax &= 0x80;
    eax -= eax;
    eax &= 0xffffffb6;
    eax += 0x77;
    *((rsi + 2)) = al;
    eax = edi;
    eax &= 0x40;
    eax -= eax;
    if ((edi & 0x800) == 0) {
        goto label_3;
    }
    eax &= 0xffffffe0;
    eax += 0x73;
    do {
        *((rsi + 3)) = al;
        eax = edi;
        eax &= 0x20;
        eax -= eax;
        eax &= 0xffffffbb;
        eax += 0x72;
        *((rsi + 4)) = al;
        eax = edi;
        eax &= 0x10;
        eax -= eax;
        eax &= 0xffffffb6;
        eax += 0x77;
        *((rsi + 5)) = al;
        eax = edi;
        eax &= 8;
        eax -= eax;
        if ((edi & 0x400) == 0) {
            goto label_4;
        }
        eax &= 0xffffffe0;
        eax += 0x73;
label_0:
        *((rsi + 6)) = al;
        eax = edi;
        eax &= 4;
        eax -= eax;
        eax &= 0xffffffbb;
        eax += 0x72;
        *((rsi + 7)) = al;
        eax = edi;
        eax &= 2;
        eax -= eax;
        eax &= 0xffffffb6;
        eax += 0x77;
        *((rsi + 8)) = al;
        eax = edi;
        eax &= 1;
        eax -= eax;
        edi &= 0x200;
        if (edi == 0) {
            goto label_5;
        }
        eax &= 0xffffffe0;
        eax += 0x74;
        *((rsi + 9)) = al;
        eax = 0x20;
        *((rsi + 0xa)) = ax;
        return eax;
label_3:
        eax &= 0xffffffb5;
        eax += 0x78;
    } while (1);
label_4:
    eax &= 0xffffffb5;
    eax += 0x78;
    goto label_0;
label_5:
    eax &= 0xffffffb5;
    eax += 0x78;
    *((rsi + 9)) = al;
    eax = 0x20;
    *((rsi + 0xa)) = ax;
    return eax;
    edi = *((rdi + 0x18));
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4059c0 */
#include <stdint.h>
 
int64_t fcn_004059c0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = rsi + 0x14;
    *((rsi + 0x14)) = 0;
    r8d = 0x30;
    rsi = 0xcccccccccccccccd;
    r9 = 0x6666666666666667;
    if (rdi < 0) {
        goto label_0;
    }
    do {
        rax = rdi;
        rcx--;
        rdx:rax = rax * rsi;
        rdx >>= 3;
        rax = rdx * 5;
        rax += rax;
        rdi -= rax;
        edi += 0x30;
        *(rcx) = dil;
        rdi = rdx;
    } while (rdx != 0);
    rax = rcx;
    return rax;
    do {
        rcx = rsi;
label_0:
        rax = rdi;
        rsi = rcx - 1;
        rdx:rax = rax * r9;
        rax = rdi;
        rax >>= 0x3f;
        rdx >>= 2;
        rdx -= rax;
        rax = rdx * 5;
        eax = r8 + rax*2;
        eax -= edi;
        rdi = rdx;
        *((rcx - 1)) = al;
    } while (rdx != 0);
    rcx -= 2;
    *((rsi - 1)) = 0x2d;
    rax = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x405a60 */
#include <stdint.h>
 
uint64_t fcn_00405a60 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdx == 0) {
        goto label_0;
    }
    r12 = rsi;
    rbx = rdx - 1;
    rax = ctype_tolower_loc ();
    do {
        ecx = *((r12 + rbx));
        rdx = *(rax);
        edx = *((rdx + rcx*4));
        *((rbp + rbx)) = dl;
        rbx--;
    } while (rbx != -1);
label_0:
    rax = rbp;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x405ab0 */
#include <stdint.h>
 
uint64_t fcn_00405ab0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdx == 0) {
        goto label_0;
    }
    r12 = rsi;
    rbx = rdx - 1;
    rax = ctype_toupper_loc ();
    do {
        ecx = *((r12 + rbx));
        rdx = *(rax);
        edx = *((rdx + rcx*4));
        *((rbp + rbx)) = dl;
        rbx--;
    } while (rbx != -1);
label_0:
    rax = rbp;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x405b00 */
#include <stdint.h>
 
void fcn_00405b00 (int64_t arg_4d8h_2, tm * arg_4d0h, int64_t arg_4d8h, int64_t arg1, char * arg11, int64_t arg2, char * arg3, tm * arg4, int64_t arg6, char * arg7, int64_t arg9) {
    tm * timeptr;
    int64_t var_10h;
    int64_t var_18h;
    char * var_20h;
    int64_t var_2bh;
    int64_t var_2ch;
    char * var_30h;
    char * var_40h;
    char * var_48h;
    char * var_50h;
    char * var_58h;
    char * var_60h;
    char * var_68h;
    char * format;
    int64_t var_72h;
    int64_t var_73h;
    int64_t var_87h;
    char * s;
    int64_t var_91h;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_c0h;
    rdi = arg1;
    xmm4 = arg11;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r9 = arg6;
    xmm0 = arg7;
    xmm2 = arg9;
label_12:
    eax = 0x4137e7;
    r15 = rdi;
    rbx = rdx;
    r12 = *((rcx + 0x30));
    r11d = *((rcx + 8));
    *(rsp) = rsi;
    *((rsp + 8)) = rcx;
    *((rsp + 0x18)) = r9;
    if (r12 == 0) {
        r12 = rax;
    }
    *((rsp + 0x2b)) = r8b;
    if (r11d <= 0xc) {
        goto label_52;
    }
    r11d -= 0xc;
label_0:
    eax = *(rbx);
    r14d = 0;
    if (al == 0) {
        goto label_53;
    }
    rdi = rsp + 0x72;
    *((rsp + 0x2c)) = r11d;
    *((rsp + 0x10)) = rdi;
    *((rsp + 0x20)) = r12;
    do {
        if (al == 0x25) {
            goto label_54;
        }
        rdx = *(rsp);
        rdx -= r14;
        if (rdx <= 1) {
            goto label_8;
        }
        if (r15 != 0) {
            *(r15) = al;
            r15++;
        }
        r14++;
        r8 = rbx;
label_7:
        eax = *((r8 + 1));
        rbx = r8 + 1;
    } while (al != 0);
label_53:
    if (r15 != 0) {
        if (*(rsp) == 0) {
            goto label_55;
        }
        *(r15) = 0;
        goto label_55;
label_8:
        r14d = 0;
    }
label_55:
    rax = r14;
    return rax;
label_52:
    eax = 0xc;
    if (r11d == 0) {
        r11d = eax;
    }
    goto label_0;
label_54:
    r11d = *((rsp + 0x2b));
    r8d = 0;
    r12d = 0;
label_1:
    rbx++;
    eax = *(rbx);
    ecx = eax;
    r9d = eax;
    if (al == 0x30) {
        goto label_2;
    }
    if (al > 0x30) {
        do {
            goto label_56;
        }
        if (al != 0x23) {
            goto label_57;
        }
        rbx++;
        eax = *(rbx);
        r8d = 1;
        ecx = eax;
        r9d = eax;
    } while (al != 0x30);
    do {
label_2:
        r12d = eax;
        goto label_1;
label_57:
    } while (al == 0x2d);
    eax -= 0x30;
    if (eax <= 9) {
        goto label_58;
    }
label_3:
    if (cl == 0x45) {
        goto label_59;
    }
    if (cl == 0x4f) {
        goto label_59;
    }
    r9d = 0;
label_4:
    if (cl > 0x7a) {
        goto label_25;
    }
    eax = (int32_t) cl;
    /* switch table (123 cases) at 0x412140 */
label_56:
    if (al == 0x5e) {
        r11d = 1;
        goto label_1;
    }
    if (al == 0x5f) {
        goto label_2;
    }
    eax -= 0x30;
    if (eax > 9) {
        goto label_3;
    }
label_58:
    ebp = 0;
    do {
        eax = *((rbx + 1));
        rsi = rbx + 1;
        ecx = eax;
        edx = rax - 0x30;
        if (ebp > 0xccccccc) {
            goto label_60;
        }
        edi = *(rbx);
        if (ebp == 0xccccccc) {
            goto label_61;
        }
label_5:
        r9d = rbp + rbp*4;
        rbx = rsi;
        ebp = rdi + r9*2 - 0x30;
label_6:
    } while (edx <= 9);
    r9d = eax;
    goto label_3;
label_59:
    ecx = *((rbx + 1));
    rbx++;
    goto label_4;
label_61:
    if (dil <= 0x37) {
        goto label_5;
    }
label_60:
    if (edx <= 9) {
        eax = *((rbx + 2));
        rbx += 2;
        ecx = eax;
        edx = rax - 0x30;
        goto label_6;
    }
    r9d = eax;
    rbx = rsi;
    goto label_3;
    if (r9d != 0) {
        goto label_25;
    }
    if (r8b != 0) {
        r11d = r8d;
    }
label_23:
    edx = 0x2520;
    rax = *((rsp + 0x10));
    r8 = rbx;
    r13d = 0;
    *((rsp + 0x70)) = dx;
    r9d = 0;
label_9:
    *(rax) = cl;
    *((rax + 1)) = 0;
    *((rsp + 0x30)) = r8;
    *((rsp + 0x48)) = r9d;
    *((rsp + 0x40)) = r11b;
    rax = strftime (rsp + 0x90, 0x400, rsp + 0x70, *((rsp + 8)));
    r8 = *((rsp + 0x30));
    if (rax == 0) {
        goto label_7;
    }
    rcx = rax - 1;
    eax = 0;
    rdx = *(rsp);
    __asm ("cmovns eax, ebp");
    rax = (int64_t) eax;
    rbx = rax;
    if (rcx >= rax) {
        rbx = rcx;
    }
    rdx -= r14;
    if (rdx <= rbx) {
        goto label_8;
    }
    if (r15 != 0) {
        r9d = *((rsp + 0x48));
        r11d = *((rsp + 0x40));
        if (r9d == 0) {
            if (rcx >= rax) {
                goto label_34;
            }
            rdx = (int64_t) ebp;
            *((rsp + 0x48)) = rcx;
            rdx -= rcx;
            *((rsp + 0x40)) = r8;
            rbp = r15 + rdx;
            *((rsp + 0x30)) = r11b;
            if (r12d == 0x30) {
                goto label_62;
            }
            r15 = rbp;
            memset (r15, 0x20, rdx);
            rcx = *((rsp + 0x48));
            r8 = *((rsp + 0x40));
            r11d = *((rsp + 0x30));
        }
label_34:
        *((rsp + 0x40)) = r8;
        rsi = rsp + 0x91;
        rdx = rcx;
        rdi = r15;
        *((rsp + 0x30)) = rcx;
        if (r13b != 0) {
            goto label_63;
        }
label_11:
        if (r11b == 0) {
            goto label_64;
        }
        fcn_00405ab0 (rdi, rsi, rdx);
        rcx = *((rsp + 0x30));
        r8 = *((rsp + 0x40));
label_31:
        r15 += rcx;
    }
label_10:
    r14 += rbx;
    goto label_7;
    if (r9d == 0x4f) {
        goto label_25;
    }
    r13d = 0;
label_15:
    edi = 0x2520;
    *((rsp + 0x70)) = di;
    if (r9d != 0) {
        goto label_65;
    }
    r8 = rbx;
    rax = *((rsp + 0x10));
    goto label_9;
    rax = *((rsp + 8));
    *((rsp + 0x40)) = r11b;
    r13 = rsp + 0x87;
    __asm ("movdqu xmm4, xmmword [rax + 0x20]");
    __asm ("movdqu xmm0, xmmword [rax]");
    __asm ("movdqu xmm2, xmmword [rax + 0x10]");
    rax = *((rax + 0x30));
    *((rsp + 0x90)) = xmm0;
    *((rsp + 0xa0)) = xmm2;
    *((rsp + 0x30)) = xmm4;
    *((rsp + 0xb0)) = xmm4;
    *((rsp + 0xc0)) = rax;
    rax = fcn_0040c500 (*((rsp + 0x4d0)), rsp + 0x90);
    r11d = *((rsp + 0x40));
    edi = 0x30;
    rsi = rax;
    rcx = rax;
    do {
        rax = 0x6666666666666667;
        rdx:rax = rax * rcx;
        rax = rcx;
        rax >>= 0x3f;
        rdx >>= 2;
        rdx -= rax;
        rax = rdx;
        rdx *= 5;
        rdx += rdx;
        rcx -= rdx;
        rdx = rcx;
        rcx = rax;
        eax = edi;
        eax -= edx;
        edx += 0x30;
        __asm ("cmovs edx, eax");
        r13--;
        *(r13) = dl;
    } while (rcx != 0);
    r10d = 1;
    if (ebp > 0) {
        r10d = ebp;
    }
    if (rsi < 0) {
        goto label_66;
    }
label_19:
    rax = *(rsp);
    rcx = rsp + 0x87;
    rcx -= r13;
    rax -= r14;
    if (r12d != 0x2d) {
        r9d = r10d;
        r9d -= ecx;
        if (r9d > 0) {
            goto label_67;
        }
    }
    r9d = 0;
    r8 = rbx;
    __asm ("cmovns r9d, ebp");
    r9 = (int64_t) r9d;
label_20:
    rbx = r9;
    if (rcx >= r9) {
        rbx = rcx;
    }
    if (rbx >= rax) {
        goto label_8;
    }
    if (r15 == 0) {
        goto label_10;
    }
    if (r10d == 0) {
        if (rcx >= r9) {
            goto label_35;
        }
        rdx = (int64_t) ebp;
        *((rsp + 0x48)) = rcx;
        rdx -= rcx;
        *((rsp + 0x40)) = r8;
        rbp = r15 + rdx;
        *((rsp + 0x30)) = r11b;
        if (r12d == 0x30) {
            goto label_68;
        }
        r15 = rbp;
        memset (r15, 0x20, rdx);
        rcx = *((rsp + 0x48));
        r8 = *((rsp + 0x40));
        r11d = *((rsp + 0x30));
    }
label_35:
    *((rsp + 0x40)) = r8;
    rdx = rcx;
    rsi = r13;
    rdi = r15;
    *((rsp + 0x30)) = rcx;
    goto label_11;
    if (r9d != 0) {
        goto label_25;
    }
    *((rsp + 0x30)) = "%m/%d/%y";
label_13:
    eax = *((rsp + 0x4d8));
    r13d = (int32_t) r11b;
    rax = fcn_00405b00 (0, 0xffffffffffffffff, *((rsp + 0x40)), *((rsp + 0x18)), r13d, *((rsp + 0x28)));
    goto label_12;
    r10 = rax;
    eax = 0;
    r11 = *(rsp);
    __asm ("cmovns eax, ebp");
    rax = (int64_t) eax;
    rsi = rax;
    if (r10 >= rax) {
        rsi = r10;
    }
    r11 -= r14;
    *((rsp + 0x40)) = rsi;
    if (r11 <= rsi) {
        goto label_8;
    }
    if (r15 != 0) {
        if (r10 < rax) {
            rdx = (int64_t) ebp;
            *((rsp + 0x50)) = r10;
            rdx -= r10;
            *((rsp + 0x48)) = r11;
            rbp = r15 + rdx;
            if (r12d == 0x30) {
                goto label_69;
            }
            r15 = rbp;
            memset (r15, 0x20, rdx);
            r10 = *((rsp + 0x50));
            r11 = *((rsp + 0x48));
        }
label_38:
        eax = *((rsp + 0x4d8));
        *((rsp + 0x48)) = r10;
        fcn_00405b00 (r15, r11, *((rsp + 0x40)), *((rsp + 0x18)), r13d, *((rsp + 0x28)));
        goto label_12;
        r10 = *((rsp + 0x58));
        r15 += r10;
    }
    r14 += *((rsp + 0x40));
    r8 = rbx;
    goto label_7;
    if (r9d != 0) {
        goto label_25;
    }
    *((rsp + 0x30)) = "%Y-%m-%d";
    goto label_13;
    if (r9d == 0x45) {
        goto label_25;
    }
    rdx = *((rsp + 8));
    esi = *((rdx + 0x14));
    r10d = *((rdx + 0x1c));
    r13d = *((rdx + 0x18));
    edx = 0x92492493;
    eax = esi;
    *((rsp + 0x30)) = esi;
    eax >>= 0x1f;
    eax &= 0x190;
    edi = rsi + rax - 0x64;
    esi = r10d;
    esi -= r13d;
    esi += 0x17e;
    eax = esi;
    edx:eax = eax * edx;
    eax = rdx + rsi;
    edx = esi;
    edx >>= 0x1f;
    eax >>= 2;
    eax -= edx;
    edx = rax*8;
    edx -= eax;
    eax = edx;
    edx = r10d;
    edx -= esi;
    r8d = rdx + rax + 3;
    if (r8d < 0) {
        goto label_70;
    }
    eax = 0x16d;
    if ((dil & 3) == 0) {
        esi = 0x51eb851f;
        eax = edi;
        edx:eax = eax * esi;
        eax = edi;
        eax >>= 0x1f;
        *((rsp + 0x40)) = eax;
        esi = edx;
        edx >>= 5;
        edx -= eax;
        eax = 0x16e;
        edx *= 0x64;
        if (edi != edx) {
            goto label_71;
        }
        esi >>= 7;
        eax = esi;
        eax -= *((rsp + 0x40));
        eax *= 0x190;
        al = (edi == eax) ? 1 : 0;
        eax = (int32_t) al;
        eax += 0x16d;
    }
label_71:
    esi = r10d;
    edx = 0x92492493;
    esi -= eax;
    edi = esi;
    edi -= r13d;
    edi += 0x17e;
    eax = edi;
    esi -= edi;
    edx:eax = eax * edx;
    eax = rdx + rdi;
    edx = edi;
    edx >>= 0x1f;
    eax >>= 2;
    eax -= edx;
    edx = rax*8;
    edx -= eax;
    r13d = rsi + rdx + 3;
    __asm ("cmovns r8d, r13d");
    r13d >>= 0x1f;
    r13d++;
label_39:
    if (cl == 0x47) {
        goto label_72;
    }
    if (cl != 0x67) {
        goto label_73;
    }
    eax = *((rsp + 0x30));
    esi = 0x51eb851f;
    r8d = *((rsp + 0x30));
    r10d = 2;
    edx:eax = eax * esi;
    edi = r8d;
    edx >>= 5;
    eax = edx;
    edx = r8d;
    edx >>= 0x1f;
    eax -= edx;
    eax *= 0x64;
    edi -= eax;
    edi += r13d;
    eax = edi;
    edx:eax = eax * esi;
    eax = edi;
    eax >>= 0x1f;
    esi = edx;
    esi >>= 5;
    esi -= eax;
    esi *= 0x64;
    edi -= esi;
    esi = edi;
    if (edi < 0) {
        eax = 0xfffff894;
        edx = edi;
        esi += 0x64;
        eax -= r13d;
        edx = -edx;
        if (r8d < eax) {
            esi = edx;
        }
    }
label_14:
    eax = esi;
    *((rsp + 0x30)) = 0;
    edi = 0;
    eax >>= 0x1f;
    r8d = eax;
label_17:
    if (r9d != 0x4f) {
        goto label_74;
    }
    if (r8b != 0) {
        goto label_75;
    }
label_18:
    eax = 0x2520;
    r13d = 0;
    *((rsp + 0x70)) = ax;
label_51:
    *((rsp + 0x72)) = r9b;
    r8 = rbx;
    r9d = r10d;
    rax = rsp + 0x73;
    goto label_9;
    eax = 0;
    rdi = *((rsp + 0x20));
    *((rsp + 0x48)) = r8b;
    if (r8b != 0) {
        r11d = eax;
    }
    *((rsp + 0x40)) = r11b;
    rax = strlen (rdi);
    rdx = *(rsp);
    r13 = rax;
    eax = 0;
    __asm ("cmovns eax, ebp");
    rax = (int64_t) eax;
    rsi = rax;
    if (r13 >= rax) {
        rsi = r13;
    }
    rdx -= r14;
    *((rsp + 0x30)) = rsi;
    if (rdx <= rsi) {
        goto label_8;
    }
    if (r15 != 0) {
        r11d = *((rsp + 0x40));
        r8d = *((rsp + 0x48));
        if (r13 < rax) {
            rdx = (int64_t) ebp;
            rdx -= r13;
            rbp = r15 + rdx;
            if (r12d == 0x30) {
                goto label_76;
            }
            *((rsp + 0x48)) = r8b;
            r15 = rbp;
            *((rsp + 0x40)) = r11b;
            memset (r15, 0x20, rdx);
            r8d = *((rsp + 0x48));
            r11d = *((rsp + 0x40));
        }
label_48:
        rdx = r13;
        rsi = *((rsp + 0x20));
        rdi = r15;
        if (r8b != 0) {
            goto label_77;
        }
        if (r11b == 0) {
            goto label_78;
        }
        fcn_00405ab0 (rdi, rsi, rdx);
label_42:
        r15 += r13;
    }
    r14 += *((rsp + 0x30));
    r8 = rbx;
    goto label_7;
    *((rsp + 0x30)) = "%H:%M";
    goto label_13;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    r10d = 2;
    esi = *((rax + 8));
    goto label_14;
    if (r9d == 0x45) {
        goto label_25;
    }
    esi = *((rsp + 0x2c));
    r10d = 2;
    goto label_14;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    r10d = 2;
    esi = *((rax + 4));
    goto label_14;
    if (r9d == 0x45) {
        goto label_25;
    }
    if (ebp != 0xffffffff) {
        goto label_79;
    }
    esi = *((rsp + 0x4d8));
    r10d = 9;
    goto label_14;
    r13d = 1;
label_28:
    eax = 0;
    ecx = 0x70;
    if (r8b != 0) {
        r13d = r8d;
    }
    if (r8b != 0) {
        r11d = eax;
    }
    goto label_15;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    esi = *((rax + 8));
label_16:
    r10d = 2;
    if (r12d == 0x30) {
        goto label_14;
    }
    if (r12d == 0x2d) {
        goto label_14;
    }
    r12d = 0x5f;
    goto label_14;
    if (r9d == 0x45) {
        goto label_25;
    }
    esi = *((rsp + 0x2c));
    goto label_16;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    *((rsp + 0x30)) = 0;
    r10d = 2;
    esi = *((rax + 0x10));
    r8b = (esi < 0xffffffff) ? 1 : 0;
    esi++;
    edi = 0;
    goto label_17;
    r13d = 0;
    eax = 1;
    __asm ("cmovns r13d, ebp");
    r13 = (int64_t) r13d;
    if (r13 == 0) {
        r13 = rax;
    }
    rax = *(rsp);
    rax -= r14;
    if (rax <= r13) {
        goto label_8;
    }
    if (r15 != 0) {
        if (ebp > 1) {
            rdx = (int64_t) ebp;
            rdx--;
            rbp = r15 + rdx;
            if (r12d == 0x30) {
                goto label_80;
            }
            r15 = rbp;
            memset (r15, 0x20, rdx);
        }
label_44:
        *(r15) = 0xa;
        r15++;
    }
label_21:
    r14 += r13;
    r8 = rbx;
    goto label_7;
    rax = *((rsp + 8));
    r10d = 1;
    eax = *((rax + 0x10));
    if (r9d == 0x4f) {
        goto label_18;
    }
    edx = rax * 5;
    *((rsp + 0x30)) = 0;
    r8d = 0;
    edi = 0;
    esi = rax + rdx*2;
    esi >>= 5;
    esi++;
label_22:
    *((rsp + 0x40)) = r8b;
    rcx = rsp + 0x87;
    r9d = 0xcccccccd;
    do {
        r13 = rcx - 1;
        if ((dil & 1) != 0) {
            rax = rcx - 2;
            *((rcx - 1)) = 0x3a;
            rcx = r13;
            r13 = rax;
        }
        eax = esi;
        r8d = esi;
        edi >>= 1;
        edx:eax = eax * r9d;
        edx >>= 3;
        eax = rdx * 5;
        eax += eax;
        r8d -= eax;
        eax = r8d;
        eax += 0x30;
        *((rcx - 1)) = al;
        rcx = r13;
        if (esi <= 9) {
            if (edi == 0) {
                goto label_81;
            }
        }
        esi = edx;
    } while (1);
label_81:
    r8d = *((rsp + 0x40));
    if (r10d < ebp) {
        r10d = ebp;
    }
    if (r8b != 0) {
        goto label_66;
    }
    if (*((rsp + 0x30)) == 0) {
        goto label_19;
    }
    if (r12d == 0x2d) {
        goto label_82;
    }
    *((rsp + 0x30)) = 0x2b;
label_32:
    rcx = rsp + 0x87;
    r9d = r10 - 1;
    rax = *(rsp);
    rcx -= r13;
    r9d -= ecx;
    rax -= r14;
    if (r9d <= 0) {
        goto label_83;
    }
    if (r12d == 0x5f) {
        goto label_84;
    }
    rdx = (int64_t) r10d;
    if (rdx >= rax) {
        goto label_8;
    }
    edx = 0;
    esi = 1;
    __asm ("cmovns edx, ebp");
    rdx = (int64_t) edx;
    if (rdx != 0) {
        rsi = rdx;
    }
    if (rsi >= rax) {
        goto label_8;
    }
    r14 += rsi;
    r9 = (int64_t) r9d;
    r8 = rbx;
    if (r15 != 0) {
        if (r10d == 0) {
            if (rdx <= 1) {
                goto label_49;
            }
            rdx = (int64_t) ebp;
            *((rsp + 0x58)) = r9;
            rdx--;
            *((rsp + 0x50)) = rcx;
            rbp = r15 + rdx;
            *((rsp + 0x48)) = r10d;
            *((rsp + 0x40)) = r11b;
            if (r12d == 0x30) {
                goto label_85;
            }
            r15 = rbp;
            memset (r15, 0x20, rdx);
            r9 = *((rsp + 0x58));
            rcx = *((rsp + 0x50));
            r10d = *((rsp + 0x48));
            r11d = *((rsp + 0x40));
        }
label_49:
        eax = *((rsp + 0x30));
        r15++;
        r8 = rbx;
        *((r15 - 1)) = al;
label_41:
        if (r15 == 0) {
            goto label_86;
        }
        rdx = r9;
        *((rsp + 0x58)) = rcx;
        *((rsp + 0x50)) = r10d;
        *((rsp + 0x48)) = r8;
        *((rsp + 0x40)) = r11b;
        *((rsp + 0x30)) = r9;
        memset (r15, 0x30, rdx);
        r9 = *((rsp + 0x30));
        rcx = *((rsp + 0x58));
        r10d = *((rsp + 0x50));
        r8 = *((rsp + 0x48));
        r11d = *((rsp + 0x40));
        r15 += r9;
    }
label_86:
    rax = *(rsp);
    r14 += r9;
    ebp = 0;
    r9d = 0;
    rax -= r14;
    goto label_20;
    r13d = 0;
    eax = 1;
    __asm ("cmovns r13d, ebp");
    r13 = (int64_t) r13d;
    if (r13 == 0) {
        r13 = rax;
    }
    rax = *(rsp);
    rax -= r14;
    if (rax <= r13) {
        goto label_8;
    }
    if (r15 == 0) {
        goto label_21;
    }
    if (ebp > 1) {
        rdx = (int64_t) ebp;
        rdx--;
        rbp = r15 + rdx;
        if (r12d == 0x30) {
            goto label_87;
        }
        r15 = rbp;
        memset (r15, 0x20, rdx);
    }
label_45:
    *(r15) = 9;
    r15++;
    goto label_21;
    rax = *((rsp + 8));
    edx = 0x92492493;
    r10d = 1;
    eax = *((rax + 0x18));
    esi = rax + 6;
    *((rsp + 0x30)) = eax;
    eax = esi;
    edx:eax = eax * edx;
    eax = rdx + rsi;
    edx = esi;
    edx >>= 0x1f;
    eax >>= 2;
    eax -= edx;
    edx = rax*8;
    edx -= eax;
    esi -= edx;
    esi++;
    goto label_14;
    if (r9d == 0x45) {
        goto label_88;
    }
    if (r9d == 0x4f) {
        goto label_25;
    }
    rax = *((rsp + 8));
    *((rsp + 0x30)) = 0;
    r10d = 4;
    esi = *((rax + 0x14));
    r8b = (esi < 0xfffff894) ? 1 : 0;
    esi += 0x76c;
    edi = 0;
label_74:
    if (r8b == 0) {
        goto label_22;
    }
label_75:
    esi = -esi;
    goto label_22;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    r10d = 2;
    esi = *(rax);
    goto label_14;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    edx = 0x92492493;
    edi = *((rax + 0x1c));
    edi -= *((rax + 0x18));
    edi += 7;
    eax = edi;
    edx:eax = eax * edx;
    do {
        esi = rdx + rdi;
        edi >>= 0x1f;
        r10d = 2;
        esi >>= 2;
        esi -= edi;
        goto label_14;
        if (r9d == 0x45) {
            goto label_88;
        }
        rax = *((rsp + 8));
        edx = 0x51eb851f;
        *((rsp + 0x30)) = 0;
        r10d = 2;
        edi = *((rax + 0x14));
        eax = *((rax + 0x14));
        edx:eax = eax * edx;
        eax = edx;
        edx = edi;
        edx >>= 0x1f;
        eax >>= 5;
        eax -= edx;
        edx = edi;
        esi = rax + 0x13;
        eax *= 0x64;
        edx -= eax;
        eax = edx;
        eax >>= 0x1f;
        dl = (esi > 0) ? 1 : 0;
        eax &= edx;
        r8b = (edi < 0xfffff894) ? 1 : 0;
        esi -= eax;
        edi = 0;
        goto label_17;
        if (r9d == 0x45) {
            goto label_25;
        }
        r10 = *((rsp + 8));
        esi = 0x92492493;
        eax = *((r10 + 0x18));
        edi = rax + 6;
        *((rsp + 0x30)) = eax;
        eax = edi;
        edx:eax = eax * esi;
        eax = rdx + rdi;
        edx = edi;
        edx >>= 0x1f;
        eax >>= 2;
        eax -= edx;
        edx = rax*8;
        edx -= eax;
        eax = edx;
        edx = *((r10 + 0x1c));
        eax -= edi;
        edi = rax + rdx + 7;
        eax = edi;
        edx:eax = eax * esi;
    } while (1);
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    r10d = 1;
    esi = *((rax + 0x18));
    goto label_14;
    if (r8b != 0) {
        r11d = r8d;
    }
    if (r9d == 0) {
        goto label_23;
    }
label_25:
    rax = rbx - 1;
    edx = rax + 2;
    do {
        ecx = edx;
        r9 = rax;
        ecx -= eax;
        rax = rax - 1;
    } while (*((rax + 1)) != 0x25);
    rdx = *(rsp);
    eax = 0;
    rcx = (int64_t) ecx;
    r8 = rbx;
    rdx -= r14;
    __asm ("cmovns eax, ebp");
    rax = (int64_t) eax;
    r13 = rax;
    if (rcx >= rax) {
        r13 = rcx;
    }
label_24:
    if (rdx <= r13) {
        goto label_8;
    }
    if (r15 != 0) {
        if (rcx < rax) {
            rdx = (int64_t) ebp;
            *((rsp + 0x50)) = rcx;
            rdx -= rcx;
            *((rsp + 0x48)) = r8;
            rbx = r15 + rdx;
            *((rsp + 0x40)) = r9;
            *((rsp + 0x30)) = r11b;
            if (r12d == 0x30) {
                goto label_89;
            }
            r15 = rbx;
            memset (r15, 0x20, rdx);
            rcx = *((rsp + 0x50));
            r8 = *((rsp + 0x48));
            r9 = *((rsp + 0x40));
            r11d = *((rsp + 0x30));
        }
label_36:
        *((rsp + 0x40)) = r8;
        rdx = rcx;
        rsi = r9;
        rdi = r15;
        *((rsp + 0x30)) = rcx;
        if (r11b == 0) {
            goto label_90;
        }
        fcn_00405ab0 (rdi, rsi, rdx);
        rcx = *((rsp + 0x30));
        r8 = *((rsp + 0x40));
label_33:
        r15 += rcx;
    }
    r14 += r13;
    goto label_7;
    r13d = 0;
label_27:
    rax = *((rsp + 8));
    esi = *((rax + 0x20));
    if (esi < 0) {
        goto label_91;
    }
    rsi = *((rax + 0x28));
    r8d = 1;
    if (esi >= 0) {
        r8d = 0;
        if (esi != 0) {
            goto label_92;
        }
        rax = *((rsp + 0x20));
        r8b = (*(rax) == 0x2d) ? 1 : 0;
    }
label_92:
    eax = esi;
    edx = 0x91a2b3c5;
    edi = 0x88888889;
    edx:eax = eax * edx;
    eax = esi;
    eax >>= 0x1f;
    *((rsp + 0x40)) = eax;
    edx += esi;
    edx >>= 0xb;
    edx -= eax;
    eax = esi;
    *((rsp + 0x30)) = edx;
    edx:eax = eax * edi;
    r10d = rdx + rsi;
    r10d >>= 5;
    r10d -= *((rsp + 0x40));
    eax = r10d;
    edx:eax = eax * edi;
    eax = r10d;
    eax >>= 0x1f;
    edi = rdx + r10;
    edi >>= 5;
    edi -= eax;
    eax = r10d;
    edi *= 0x3c;
    r10d *= 0x3c;
    eax -= edi;
    edi = eax;
    esi -= r10d;
    if (r13 == 1) {
        goto label_43;
    }
    if (r13 == 0) {
        goto label_93;
    }
    if (r13 == 2) {
        goto label_94;
    }
    if (r13 == 3) {
        goto label_95;
    }
    ecx = *(rbx);
    r9 = rbx;
label_26:
    rdx = *(rsp);
    eax = 0;
    rdx -= r14;
    __asm ("cmovns eax, ebp");
    rax = (int64_t) eax;
    if (cl != 0x25) {
        goto label_96;
    }
    r13d = 1;
    r8 = r9;
    ecx = 1;
    if (rax != 0) {
        r13 = rax;
    }
    goto label_24;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    r10d = 2;
    esi = *((rax + 0xc));
    goto label_14;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    esi = *((rax + 0xc));
    goto label_16;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    *((rsp + 0x30)) = 0;
    r10d = 3;
    esi = *((rax + 0x1c));
    r8b = (esi < 0xffffffff) ? 1 : 0;
    esi++;
    edi = 0;
    goto label_17;
    rdx = *(rsp);
    eax = 0;
    r13d = 1;
    rdx -= r14;
    __asm ("cmovns eax, ebp");
    rax = (int64_t) eax;
    if (rax != 0) {
        r13 = rax;
    }
    if (r9d != 0) {
        goto label_97;
    }
    if (r13 >= rdx) {
        goto label_8;
    }
    if (r15 == 0) {
        goto label_21;
    }
    if (ebp > 1) {
        rdx = (int64_t) ebp;
        rdx--;
        rbp = r15 + rdx;
        if (r12d == 0x30) {
            goto label_98;
        }
        r15 = rbp;
        memset (r15, 0x20, rdx);
        ecx = *(rbx);
    }
label_47:
    *(r15) = cl;
    r15++;
    goto label_21;
    r9 = rbx - 1;
    ecx = *((rbx - 1));
    goto label_26;
    if (r9d == 0x45) {
        goto label_88;
    }
    rax = *((rsp + 8));
    edx = 0x51eb851f;
    r10d = 2;
    edi = *((rax + 0x14));
    eax = *((rax + 0x14));
    edx:eax = eax * edx;
    eax = edi;
    eax >>= 0x1f;
    esi = edx;
    esi >>= 5;
    esi -= eax;
    eax = edi;
    esi *= 0x64;
    eax -= esi;
    esi = eax;
    if (eax >= 0) {
        goto label_14;
    }
    eax = -eax;
    esi += 0x64;
    if (edi <= 0xfffff893) {
        esi = eax;
    }
    goto label_14;
    eax = *((rbx + 1));
    rdx = rbx + 1;
    r13d = 1;
    if (al == 0x3a) {
        goto label_30;
    }
label_29:
    if (al != 0x7a) {
        goto label_25;
    }
    rbx = rdx;
    goto label_27;
    r13d = 0;
    goto label_28;
    *((rsp + 0x30)) = "%H:%M:%S";
    goto label_13;
label_30:
    r13++;
    eax = *((rbx + r13));
    rdx = rbx + r13;
    if (al != 0x3a) {
        goto label_29;
    }
    goto label_30;
label_64:
    memcpy (rdi, rsi, rdx);
    r8 = *((rsp + 0x40));
    rcx = *((rsp + 0x30));
    goto label_31;
label_66:
    *((rsp + 0x30)) = 0x2d;
    ecx = 0x2d;
    if (r12d != 0x2d) {
        goto label_32;
    }
label_37:
    r9d = 0;
    r12d = 1;
    rax = *(rsp);
    __asm ("cmovns r9d, ebp");
    r9 = (int64_t) r9d;
    if (r9 != 0) {
        r12 = r9;
    }
    rax -= r14;
    if (rax <= r12) {
        goto label_8;
    }
    if (r15 != 0) {
        if (r10d == 0) {
            if (r9 <= 1) {
                goto label_99;
            }
            r8 = (int64_t) ebp;
            *((rsp + 0x58)) = cl;
            r8--;
            *((rsp + 0x50)) = r9;
            rdx = r8;
            *((rsp + 0x48)) = r10d;
            *((rsp + 0x40)) = r11b;
            *((rsp + 0x30)) = r8;
            memset (r15, 0x20, rdx);
            r8 = *((rsp + 0x30));
            ecx = *((rsp + 0x58));
            r9 = *((rsp + 0x50));
            r10d = *((rsp + 0x48));
            r11d = *((rsp + 0x40));
            r15 += r8;
        }
label_99:
        *(r15) = cl;
        r15++;
    }
    rax = *(rsp);
    r14 += r12;
    r8 = rbx;
    r12d = 0x2d;
    rcx = rsp + 0x87;
    rcx -= r13;
    rax -= r14;
    goto label_20;
label_90:
    memcpy (rdi, rsi, rdx);
    r8 = *((rsp + 0x40));
    rcx = *((rsp + 0x30));
    goto label_33;
label_63:
    fcn_00405a60 (rdi, rsi, rdx);
    rcx = *((rsp + 0x30));
    r8 = *((rsp + 0x40));
    goto label_31;
label_62:
    r15 = rbp;
    rax = memset (r15, 0x30, rdx);
    r11d = *((rsp + 0x30));
    r8 = *((rsp + 0x40));
    rcx = *((rsp + 0x48));
    goto label_34;
label_83:
    r9d = 0;
    r8d = 1;
    __asm ("cmovns r9d, ebp");
    r9 = (int64_t) r9d;
    if (r9 != 0) {
        r8 = r9;
    }
    if (r8 >= rax) {
        goto label_8;
    }
    if (r15 != 0) {
        if (r10d == 0) {
            if (r9 <= 1) {
                goto label_46;
            }
            rdx = (int64_t) ebp;
            *((rsp + 0x68)) = rcx;
            rdx--;
            *((rsp + 0x60)) = r8;
            rax = r15 + rdx;
            *((rsp + 0x58)) = r9;
            *((rsp + 0x40)) = rax;
            *((rsp + 0x50)) = r10d;
            *((rsp + 0x48)) = r11b;
            if (r12d == 0x30) {
                goto label_100;
            }
            memset (r15, 0x20, rdx);
            r15 = *((rsp + 0x40));
            rcx = *((rsp + 0x68));
            r8 = *((rsp + 0x60));
            r9 = *((rsp + 0x58));
            r10d = *((rsp + 0x50));
            r11d = *((rsp + 0x48));
        }
label_46:
        eax = *((rsp + 0x30));
        r15++;
        *((r15 - 1)) = al;
    }
    rax = *(rsp);
    r14 += r8;
    r8 = rbx;
    rax -= r14;
    goto label_20;
label_40:
    *((rsp + 0x30)) = 0;
label_84:
    r12 = (int64_t) r9d;
    if (r12 >= rax) {
        goto label_8;
    }
    if (r15 != 0) {
        *((rsp + 0x50)) = r9d;
        *((rsp + 0x48)) = r10d;
        r15 += r12;
        *((rsp + 0x40)) = r11b;
        memset (r15, 0x20, r12);
        r9d = *((rsp + 0x50));
        r10d = *((rsp + 0x48));
        r11d = *((rsp + 0x40));
    }
    eax = ebp;
    r14 += r12;
    eax -= r9d;
    if (r9d < ebp) {
    }
    rax = *(rsp);
    rax -= r14;
    if (*((rsp + 0x30)) == 0) {
        rcx = rsp + 0x87;
        r9 = (int64_t) ebp;
        r8 = rbx;
        r12d = 0x5f;
        rcx -= r13;
        goto label_20;
label_68:
        r15 = rbp;
        memset (r15, 0x30, rdx);
        r11d = *((rsp + 0x30));
        r8 = *((rsp + 0x40));
        rcx = *((rsp + 0x48));
        goto label_35;
label_88:
        r10d = 0;
        goto label_18;
label_89:
        r15 = rbx;
        rax = memset (r15, 0x30, rdx);
        r11d = *((rsp + 0x30));
        r9 = *((rsp + 0x40));
        r8 = *((rsp + 0x48));
        rcx = *((rsp + 0x50));
        goto label_36;
label_82:
        ecx = 0x2b;
        goto label_37;
label_91:
        r8 = rbx;
        goto label_7;
    }
    r9 = (int64_t) ebp;
    ecx = 1;
    if (r9 != 0) {
        rcx = r9;
    }
    if (rcx >= rax) {
        goto label_8;
    }
    if (r15 != 0) {
        if (r10d == 0) {
            if (r9 <= 1) {
                goto label_101;
            }
            r12 = r9 - 1;
            *((rsp + 0x58)) = rcx;
            *((rsp + 0x50)) = r10d;
            r15 += r12;
            *((rsp + 0x48)) = r11b;
            *((rsp + 0x40)) = r9;
            memset (r15, 0x20, r12);
            rcx = *((rsp + 0x58));
            r10d = *((rsp + 0x50));
            r11d = *((rsp + 0x48));
            r9 = *((rsp + 0x40));
        }
label_101:
        eax = *((rsp + 0x30));
        r15++;
        *((r15 - 1)) = al;
    }
    rax = *(rsp);
    r14 += rcx;
    r8 = rbx;
    r12d = 0x5f;
    rcx = rsp + 0x87;
    rcx -= r13;
    rax -= r14;
    goto label_20;
label_69:
    r15 = rbp;
    memset (r15, 0x30, rdx);
    r11 = *((rsp + 0x48));
    r10 = *((rsp + 0x50));
    goto label_38;
label_70:
    esi = rdi - 1;
    edx = 0x16d;
    if ((sil & 3) == 0) {
        eax = esi;
        edx = 0x51eb851f;
        edx:eax = eax * edx;
        eax = edx;
        edx = esi;
        edx >>= 0x1f;
        eax >>= 5;
        eax -= edx;
        edx = 0x16e;
        eax *= 0x64;
        if (esi != eax) {
            goto label_102;
        }
        eax = esi;
        edi = 0x190;
        edx:eax = (int64_t) eax;
        eax = edx:eax / edi;
        edx = edx:eax % edi;
        edx -= edx;
        edx = ~edx;
        edx += 0x16e;
    }
label_102:
    r10d += edx;
    edx = 0x92492493;
    esi = r10d;
    esi -= r13d;
    r13d = 0xffffffff;
    esi += 0x17e;
    eax = esi;
    r10d -= esi;
    edx:eax = eax * edx;
    eax = rdx + rsi;
    edx = esi;
    edx >>= 0x1f;
    eax >>= 2;
    eax -= edx;
    edx = rax*8;
    edx -= eax;
    r8d = r10 + rdx + 3;
    goto label_39;
label_79:
    if (ebp > 8) {
        goto label_103;
    }
    esi = *((rsp + 0x4d8));
    edi = ebp;
    r8d = 0x66666667;
    do {
        eax = esi;
        esi >>= 0x1f;
        edi++;
        edx:eax = eax * r8d;
        edx >>= 2;
        edx -= esi;
        esi = edx;
    } while (edi != 9);
label_50:
    r10d = ebp;
    goto label_14;
label_73:
    eax = r8d;
    edx = 0x92492493;
    r10d = 2;
    edx:eax = eax * edx;
    esi = rdx + r8;
    r8d >>= 0x1f;
    esi >>= 2;
    esi -= r8d;
    esi++;
    goto label_14;
label_72:
    esi = *((rsp + 0x30));
    eax = 0xfffff894;
    *((rsp + 0x30)) = 0;
    r10d = 4;
    eax -= r13d;
    esi = rsi + r13 + 0x76c;
    r8b = (esi < eax) ? 1 : 0;
    edi = 0;
    goto label_17;
label_67:
    if (r12d == 0x5f) {
        goto label_40;
    }
    rdx = (int64_t) r10d;
    if (rdx >= rax) {
        goto label_8;
    }
    r9 = (int64_t) r9d;
    r8 = rbx;
    goto label_41;
    do {
label_94:
        eax = *((rsp + 0x30)) * 0x2710;
        r10d = 9;
        *((rsp + 0x30)) = 1;
        edi *= 0x64;
        eax += edi;
        edi = 0x14;
        esi += eax;
        goto label_17;
label_43:
        esi = *((rsp + 0x30)) * 0x64;
        r10d = 6;
        *((rsp + 0x30)) = 1;
        esi += edi;
        edi = 4;
        goto label_17;
label_78:
        memcpy (rdi, rsi, rdx);
        goto label_42;
label_77:
        fcn_00405a60 (rdi, rsi, rdx);
        goto label_42;
label_93:
        esi = *((rsp + 0x30)) * 0x64;
        edi = 0;
        *((rsp + 0x30)) = 1;
        r10d = 5;
        esi += eax;
        goto label_17;
label_95:
    } while (esi != 0);
    if (eax != 0) {
        goto label_43;
    }
    esi = *((rsp + 0x30));
    r10d = 3;
    *((rsp + 0x30)) = 1;
    goto label_17;
label_97:
    r8 = rbx;
    r9 = rbx;
    ecx = 1;
    goto label_24;
label_80:
    r15 = rbp;
    memset (r15, 0x30, rdx);
    goto label_44;
label_87:
    r15 = rbp;
    memset (r15, 0x30, rdx);
    goto label_45;
label_100:
    memset (r15, 0x30, rdx);
    r15 = *((rsp + 0x40));
    r11d = *((rsp + 0x48));
    r10d = *((rsp + 0x50));
    r9 = *((rsp + 0x58));
    r8 = *((rsp + 0x60));
    rcx = *((rsp + 0x68));
    goto label_46;
label_98:
    r15 = rbp;
    memset (r15, 0x30, rdx);
    ecx = *(rbx);
    goto label_47;
label_76:
    r15 = rbp;
    memset (r15, 0x30, rdx);
    r11d = *((rsp + 0x40));
    r8d = *((rsp + 0x48));
    goto label_48;
label_85:
    r15 = rbp;
    memset (r15, 0x30, rdx);
    r11d = *((rsp + 0x40));
    r10d = *((rsp + 0x48));
    rcx = *((rsp + 0x50));
    r9 = *((rsp + 0x58));
    goto label_49;
label_103:
    esi = *((rsp + 0x4d8));
    goto label_50;
label_65:
    r10d = 0;
    goto label_51;
label_96:
    rbx = r9;
    goto label_25;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4072d0 */
#include <stdint.h>
 
void fcn_004072d0 (int64_t arg5, int64_t arg6) {
    int64_t var_fh;
    r8 = arg5;
    r9 = arg6;
    *((rsp + 0xf)) = 0;
    fcn_00405b00 (rdi, rsi, rdx, rcx, 0, rsp + 0x1f);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4072f0 */
#include <stdint.h>
 
uint64_t fcn_004072f0 (char ** arg1) {
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
            edi = 0x412558;
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
        *(0x00617498) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x407390 */
#include <stdint.h>
 
uint64_t fcn_00407390 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_0040c750 ();
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
        eax = 0x41255e;
        ebx = 0x412569;
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
        eax = 0x412562;
        ebx = 0x412565;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x41367c;
    ebx = 0x41255c;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x407490 */
#include <stdint.h>
 
uint64_t fcn_00407490 (int64_t arg_d8h, char * s, int64_t arg1, char * arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    size_t * var_10h;
    int64_t var_1fh;
    char * var_20h;
    size_t var_28h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_6ch;
    char * var_6dh;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    do {
        /* [13] -r-x section size 57368 named .text */
        abort ();
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
    /* switch table (11 cases) at 0x4125c0 */
    do {
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 0;
        r13d = 2;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6c)) = 1;
        *((rsp + 8)) = 0;
        *((rsp + 0x28)) = 1;
        *((rsp + 0x50)) = 0x41367c;
    } while (ebp != 0);
    *((rsp + 8)) = 1;
    do {
        if (r14 != 0) {
            goto label_2;
        }
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 1;
        r13d = 2;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x6c)) = 0;
        *((rsp + 0x28)) = 1;
        *((rsp + 0x50)) = 0x41367c;
        void (*0x407528)() ();
        if (ebp != 0) {
            goto label_3;
        }
        if (r14 == 0) {
            goto label_4;
        }
        *(r15) = 0x22;
        r10d = 0;
        *((rsp + 0x1f)) = 1;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
label_0:
        *((rsp + 0x6c)) = 0;
        ebx = 1;
        *((rsp + 8)) = 1;
        *((rsp + 0x28)) = 1;
        *((rsp + 0x50)) = 0x41255c;
        void (*0x407528)() ();
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00407390 (0x41256d, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00407390 (0x41367c, r13d);
            r11 = *((rsp + 8));
            *((rsp + 0xe0)) = rax;
        }
        ebx = 0;
        if (ebp == 0) {
            goto label_5;
        }
label_1:
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
        void (*0x407528)() ();
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 0;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6c)) = 0;
        *((rsp + 8)) = 0;
        *((rsp + 0x28)) = 0;
        *((rsp + 0x50)) = 0;
        void (*0x407528)() ();
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 0;
        r13d = 5;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6c)) = 1;
        *((rsp + 8)) = 1;
        *((rsp + 0x28)) = 1;
        *((rsp + 0x50)) = 0x41255c;
        void (*0x407528)() ();
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 0;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6c)) = 0;
        *((rsp + 8)) = 1;
        *((rsp + 0x28)) = 0;
        *((rsp + 0x50)) = 0;
        void (*0x407528)() ();
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 0;
        r13d = 2;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6c)) = 1;
        *((rsp + 8)) = 1;
        *((rsp + 0x28)) = 1;
        *((rsp + 0x50)) = 0x41367c;
        void (*0x407528)() ();
        if (ebp != 0) {
            goto label_6;
        }
        *((rsp + 8)) = 0;
    } while (1);
label_4:
    *((rsp + 0x58)) = 0;
    r10d = 0;
    *((rsp + 0x1f)) = 1;
    *((rsp + 0x6d)) = 0;
    goto label_0;
label_5:
    rax = *((rsp + 0xd8));
    eax = *(rax);
    if (al == 0) {
        goto label_1;
    }
    rdx = *((rsp + 0xd8));
    do {
        if (r14 > rbx) {
            *((r15 + rbx)) = al;
        }
        rbx++;
        eax = *((rdx + rbx));
    } while (al != 0);
    goto label_1;
label_3:
    *((rsp + 0x1f)) = 1;
    r10d = 0;
    ebx = 0;
    *((rsp + 0x6d)) = 0;
    *((rsp + 0x58)) = 0;
    *((rsp + 0x6c)) = 1;
    *((rsp + 8)) = 1;
    *((rsp + 0x28)) = 1;
    *((rsp + 0x50)) = 0x41255c;
    void (*0x407528)() ();
label_2:
    r10d = 0;
    eax = 0;
    *((rsp + 0x1f)) = 1;
    *((rsp + 0x58)) = 0;
    void (*0x407d16)() ();
label_6:
    *((rsp + 0x1f)) = 1;
    r10d = 0;
    ebx = 0;
    *((rsp + 0x6d)) = 0;
    *((rsp + 0x58)) = 0;
    *((rsp + 0x6c)) = 1;
    *((rsp + 8)) = 0;
    *((rsp + 0x28)) = 1;
    *((rsp + 0x50)) = 0x41367c;
    return void (*0x407528)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x407528 */
#include <stdint.h>
 
int64_t fcn_00407528 (size_t * arg_8h, uint32_t arg_10h, uint32_t arg_1fh, char * s, size_t n, size_t * arg_30h, size_t * arg_38h, size_t arg_40h, size_t arg_48h, void * s2, char * arg_78h, uint32_t arg_60h, int64_t arg_88h_2, uint32_t arg_6ch, uint32_t arg_6dh, int64_t arg_6eh, int64_t arg_6fh, int64_t arg_70h, int64_t arg_78h_2, wint_t wc, mbstate_t * ps, int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h) {
    r9 = r11;
    r12d = 0;
    r11d = r13d;
    do {
label_26:
        r13b = (r9 != r12) ? 1 : 0;
        if (r9 == -1) {
            rax = *((rsp + 0x20));
            r13b = (*((rax + r12)) != 0) ? 1 : 0;
        }
        if (r13b == 0) {
            goto label_41;
        }
        rdi = *((rsp + 0x20));
        al = (r11d != 2) ? 1 : 0;
        al &= *((rsp + 8));
        r8 = rdi + r12;
        *((rsp + 0x10)) = al;
        if (al == 0) {
            goto label_42;
        }
        rax = *((rsp + 0x28));
        if (rax == 0) {
            goto label_43;
        }
        rbp = r12 + rax;
        if (r9 == -1) {
            if (rax <= 1) {
                goto label_44;
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
label_44:
        if (rbp > r9) {
            goto label_43;
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
            goto label_43;
        }
        if (*((rsp + 0x6c)) != 0) {
            goto label_45;
        }
        ebp = *(r8);
        if (bpl > 0x7e) {
            goto label_46;
        }
        eax = (int32_t) bpl;
        /* switch table (127 cases) at 0x412618 */
        *((rsp + 0x10)) = 0;
        al = (r9 != 1) ? 1 : 0;
        if (r9 == -1) {
            rax = *((rsp + 0x20));
            al = (*((rax + 1)) != 0) ? 1 : 0;
        }
        dl = (r11d == 2) ? 1 : 0;
        if (al != 0) {
            goto label_6;
        }
label_16:
        if (r12 != 0) {
            goto label_6;
        }
label_17:
        if (*((rsp + 0x6c)) != 0) {
            if (dl != 0) {
                goto label_47;
            }
        }
label_2:
        eax = *((rsp + 8));
        eax ^= 1;
        eax |= edx;
        eax ^= 1;
        al |= *((rsp + 0x6c));
        if (al == 0) {
            goto label_10;
        }
label_22:
        eax = 0;
label_9:
        if (*((rsp + 0xd0)) == 0) {
            goto label_10;
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
            goto label_10;
        }
        dl = (r11d == 2) ? 1 : 0;
label_0:
        if (*((rsp + 0x6c)) != 0) {
            goto label_48;
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
label_8:
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
        goto label_49;
    }
    if (r14 == 0) {
        goto label_50;
    }
    edx = 0;
    if (*((rsp + 0x58)) != 0) {
        goto label_50;
    }
label_25:
    *((rsp + 0x6d)) = r13b;
    rbx += 3;
    eax = 0;
    r10d = 0;
    *((rsp + 0x58)) = r14;
    r14 = rdx;
label_10:
    dl = (r11d == 2) ? 1 : 0;
    if (*((rsp + 0x10)) != 0) {
        goto label_0;
    }
    eax ^= 1;
    r12++;
    eax &= r10d;
label_15:
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
        goto label_51;
    }
    if (r11d == 5) {
        goto label_52;
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
label_14:
    edx = *((rsp + 8));
    dl &= *((rsp + 0x6c));
    ecx = 0x5c;
    al = (*((rsp + 0x28)) != 0) ? 1 : 0;
    dl &= al;
    if (dl != 0) {
        goto label_53;
    }
label_7:
    if (*((rsp + 8)) != 0) {
        goto label_54;
    }
label_6:
    r13d = 0;
    goto label_2;
label_5:
    edx = 0;
    r13d = 0;
    if (*((rsp + 0x6c)) == 0) {
        goto label_4;
    }
label_48:
    r13d = r11d;
    eax = edx;
    r11 = r9;
label_37:
label_11:
    eax = 4;
    if (*((rsp + 8)) != 0) {
        r13d = eax;
    }
label_38:
    r9d &= 0xfffffffd;
    rax = fcn_00407490 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
    rbx = rax;
label_39:
    rax = rbx;
    return rax;
    goto label_5;
    *((rsp + 0x10)) = 0;
    edx = 0;
    goto label_6;
    *((rsp + 0x10)) = 0;
    ecx = 0x72;
    dl = (r11d == 2) ? 1 : 0;
    goto label_7;
    do {
label_19:
        if (*((rsp + 0x6c)) != 0) {
            goto label_55;
        }
label_31:
        r13d = 0;
        goto label_8;
    } while (1);
label_13:
    if (*((rsp + 0x6c)) != 0) {
        goto label_56;
    }
    *((rsp + 0x10)) = 0;
    eax = r10d;
    dl = (r11d == 2) ? 1 : 0;
    eax ^= 1;
    al &= dl;
    if (al == 0) {
        goto label_57;
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
        goto label_58;
    }
label_24:
    *((r15 + rcx)) = 0x5c;
    r10d = eax;
label_23:
    rbx = rcx + 1;
    if (r11d == 2) {
        goto label_59;
    }
    rax = r12 + 1;
    if (rax < r9) {
        rax = *((rsp + 0x20));
        eax = *((rax + r12 + 1));
        *((rsp + 0x30)) = al;
        eax -= 0x30;
        if (al <= 9) {
            goto label_60;
        }
    }
label_32:
    eax = *((rsp + 8));
    eax ^= 1;
    al |= dl;
    eax = r13d;
    r13d = 0;
    if (al == 0) {
        goto label_9;
    }
    goto label_10;
label_18:
    *((rsp + 0x10)) = 0;
    do {
label_46:
        if (*((rsp + 0x60)) != 1) {
            goto label_61;
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
label_34:
        if (dl != 0) {
            goto label_62;
        }
        dl = (r11d == 2) ? 1 : 0;
        goto label_2;
label_42:
        ebp = *(r8);
    } while (bpl > 0x7e);
    eax = (int32_t) bpl;
    /* switch table (127 cases) at 0x412a10 */
    ecx = 0x6e;
label_12:
    eax = *((rsp + 0x6c));
    dl = (r11d == 2) ? 1 : 0;
    al &= dl;
    *((rsp + 0x10)) = al;
    if (al == 0) {
        goto label_7;
    }
label_47:
    r11 = r9;
    r13d = 2;
    goto label_11;
    ecx = 0x74;
    goto label_12;
    ecx = 0x62;
    dl = (r11d == 2) ? 1 : 0;
    goto label_7;
    ecx = 0x61;
    dl = (r11d == 2) ? 1 : 0;
    goto label_7;
    if (*((rsp + 8)) != 0) {
        goto label_13;
    }
    if ((*((rsp + 0x68)) & 1) != 0) {
        goto label_63;
    }
    *((rsp + 0x10)) = 0;
    dl = (r11d == 2) ? 1 : 0;
    r13d = 0;
    ebp = 0;
    goto label_2;
    if (r11d != 2) {
        goto label_14;
    }
    if (*((rsp + 0x6c)) != 0) {
        goto label_49;
    }
    r12++;
    eax = r10d;
    r13d = 0;
    goto label_15;
    dl = (r11d == 2) ? 1 : 0;
    goto label_16;
    dl = (r11d == 2) ? 1 : 0;
    r13d = 0;
    goto label_17;
    dl = (r11d == 2) ? 1 : 0;
    goto label_17;
    ecx = 0x72;
    goto label_12;
    ecx = 0x66;
    dl = (r11d == 2) ? 1 : 0;
    goto label_7;
    ecx = 0x76;
    dl = (r11d == 2) ? 1 : 0;
    goto label_7;
label_43:
    ebp = *(r8);
    if (bpl > 0x7e) {
        goto label_18;
    }
    eax = (int32_t) bpl;
    /* switch table (127 cases) at 0x412e08 */
    eax = 0;
    do {
label_28:
        r13d = *((rsp + 0x10));
        *((rsp + 0x10)) = al;
        eax = 0;
        goto label_9;
        eax = 0;
label_29:
        if (r12 != 0) {
            goto label_64;
        }
        r13d = *((rsp + 0x10));
        edx = 0;
        *((rsp + 0x10)) = al;
        goto label_2;
        eax = 0;
label_30:
    } while (1);
    goto label_5;
    goto label_19;
label_41:
    r13d = r11d;
    r11 = r9;
    dl = (r13d == 2) ? 1 : 0;
    if (rbx == 0) {
        if ((*((rsp + 0x6c)) & dl) != 0) {
            goto label_65;
        }
    }
    eax = *((rsp + 0x6c));
    eax ^= 1;
    dl &= al;
    if (dl == 0) {
        goto label_66;
    }
    if (*((rsp + 0x6d)) == 0) {
        goto label_40;
    }
    if (*((rsp + 0x1f)) != 0) {
        goto label_67;
    }
    al = (r14 == 0) ? 1 : 0;
    dl = (*((rsp + 0x58)) != 0) ? 1 : 0;
    al &= dl;
    if (al == 0) {
        goto label_68;
    }
    r14 = *((rsp + 0x58));
label_52:
    if ((*((rsp + 0x68)) & 4) != 0) {
        rax = r12 + 2;
        if (rax >= r9) {
            goto label_35;
        }
        rsi = *((rsp + 0x20));
        if (*((rsi + r12 + 1)) == 0x3f) {
            goto label_69;
        }
    }
label_35:
    edx = 0;
    r13d = 0;
    goto label_2;
label_51:
    if (*((rsp + 0x6c)) != 0) {
        goto label_49;
    }
    r13d = 0;
    eax = 0;
    goto label_10;
label_61:
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
label_20:
        eax = iswprint (*((rsp + 0x84)));
        rdi = rsp + 0x88;
        eax = 0;
        if (eax == 0) {
            r13d = eax;
        }
        rbx += r14;
        eax = mbsinit (rdi);
        if (eax != 0) {
            goto label_70;
        }
        rax = *((rsp + 0x20));
        r15 = r12 + rbx;
        rbp = rax + r15;
        rdx -= r15;
        rax = fcn_0040ae50 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
        r14 = rax;
        if (rax == 0) {
            goto label_70;
        }
        if (rax == -1) {
            goto label_71;
        }
        if (rax == 0xfffffffffffffffe) {
            goto label_72;
        }
    }
    if (*((rsp + 0x6c)) == 0) {
        goto label_20;
    }
    if (rax == 1) {
        goto label_20;
    }
    rsi = *((rsp + 0x20));
    rax = rsi + r15 + 1;
    rsi += r14;
    rsi += r15;
    goto label_73;
label_21:
    rax++;
    if (rsi == rax) {
        goto label_20;
    }
label_73:
    ecx = *(rax);
    *((rbx - 0x67fa417)) |= al;
    *((rdi - 0x18)) &= esi;
    edx = 1;
    rdx <<= cl;
    rcx = 0x20000002b;
    if ((rdx & rcx) == 0) {
        goto label_21;
    }
    r15 = *((rsp + 0x40));
    r14 = *((rsp + 0x48));
    r13d = 2;
    r11 = *((rsp + 0x30));
    goto label_11;
label_64:
    *((rsp + 0x10)) = al;
    r13d = 0;
    goto label_22;
label_57:
    rcx = rbx;
    if (r14 <= rbx) {
        goto label_23;
    }
    eax = r10d;
    goto label_24;
label_50:
    if (r14 > rbx) {
        *((r15 + rbx)) = 0x27;
    }
    rax = rbx + 1;
    if (r14 > rax) {
        *((r15 + rbx + 1)) = 0x5c;
    }
    rax = rbx + 2;
    if (r14 <= rax) {
        goto label_74;
    }
    rdx = r14;
    *((r15 + rbx + 2)) = 0x27;
    r14 = *((rsp + 0x58));
    goto label_25;
label_63:
    r12++;
    goto label_26;
label_62:
    edx = *((rsp + 8));
    r13d = 0;
label_33:
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
            goto label_75;
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
            goto label_76;
        }
        esi = edx;
label_27:
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
            goto label_77;
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
        goto label_27;
    }
    r13d = *((rsp + 0x30));
    goto label_15;
label_75:
    r13d = r11d;
    *((rsp + 8)) = al;
    r11 = r9;
    goto label_11;
label_58:
    rbx += 4;
    r10d = eax;
    r13d = 0;
    goto label_10;
    eax = *((rsp + 0x10));
    goto label_28;
    eax = *((rsp + 0x10));
    goto label_29;
    eax = *((rsp + 0x10));
    goto label_30;
    edx = 0;
    r13d = 0;
    goto label_4;
    goto label_31;
label_60:
    if (r14 > rbx) {
        *((r15 + rbx)) = 0x30;
    }
    rax = rcx + 2;
    if (r14 > rax) {
        *((r15 + rcx + 2)) = 0x30;
    }
    rbx = rcx + 3;
    goto label_32;
label_76:
    r13d = *((rsp + 0x30));
    goto label_1;
label_53:
    r12++;
    eax = r10d;
    r13d = 0;
    goto label_15;
label_77:
    edi = 0;
    goto label_27;
label_70:
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
label_36:
    if (rdi > 1) {
        goto label_33;
    }
    goto label_34;
label_59:
    eax = r13d;
    r13d = 0;
    goto label_10;
label_69:
    ebp = *((rsi + rax));
    if (bpl > 0x3e) {
        goto label_35;
    }
    rsi = 0x7000a38200000000;
    if (((rsi >> rbp) & 1) >= 0) {
        goto label_35;
    }
    if (*((rsp + 0x6c)) != 0) {
        goto label_45;
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
    goto label_32;
label_71:
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
    goto label_36;
label_72:
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
        goto label_78;
    }
    if (*(rcx) != 0) {
        goto label_79;
    }
    goto label_78;
    do {
        if (*((r8 + rax)) == 0) {
            goto label_80;
        }
label_79:
        rax++;
        rdx = r12 + rax;
    } while (rdx < r9);
label_80:
    rdi = rax;
label_78:
    edx = *((rsp + 8));
    r13d = 0;
    goto label_36;
label_55:
    r13d = r11d;
    eax = 0;
    r11 = r9;
    goto label_37;
label_45:
    r13d = r11d;
    r11 = r9;
    goto label_38;
label_66:
    edx = eax;
label_40:
    rax = *((rsp + 0x50));
    if (rax == 0) {
        goto label_81;
    }
    if (dl == 0) {
        goto label_81;
    }
    edx = *(rax);
    if (dl == 0) {
        goto label_81;
    }
    rax -= rbx;
    do {
        if (r14 > rbx) {
            *((r15 + rbx)) = dl;
        }
        rbx++;
        edx = *((rax + rbx));
    } while (dl != 0);
label_81:
    if (r14 <= rbx) {
        goto label_39;
    }
    *((r15 + rbx)) = 0;
    goto label_39;
label_49:
    r13d = r11d;
    r11 = r9;
    goto label_11;
label_56:
    r13d = r11d;
    r11 = r9;
    rsp + 8 = (r13d == 2) ? 1 : 0;
    goto label_11;
label_67:
    rax = fcn_00407490 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
    rbx = rax;
    goto label_39;
label_68:
    edx = *((rsp + 0x6d));
    goto label_40;
label_65:
    r13d = 2;
    goto label_11;
label_74:
    rdx = r14;
    r14 = *((rsp + 0x58));
    goto label_25;
label_54:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x407d16 */
#include <stdint.h>
 
void fcn_00407d16 (int64_t arg_28h, int64_t arg_50h, int64_t arg_6ch, int64_t arg_6dh) {
    *(r15) = 0x27;
    r13d = 2;
    ebx = 1;
    *((rsp + 0x50)) = 0x41367c;
    *((rsp + 0x28)) = 1;
    *((rsp + 0x6c)) = 0;
    *((rsp + 0x6d)) = al;
    return void (*0x407528)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x407ecf */
#include <stdint.h>
 
void fcn_00407ecf (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    *((rbx - 0x67fa417)) |= al;
    *((rdi - 0x18)) &= esi;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4086c0 */
#include <stdint.h>
 
uint64_t fcn_004086c0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x00617378);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x00617390) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x617380) {
        goto label_2;
    }
    rax = fcn_004095c0 (rbx, rsi);
    *(0x00617378) = rax;
    rbx = rax;
    do {
        rdi = *(0x00617390);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x00617390) = r12d;
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
        rax = fcn_00407490 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x6174a0) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00409560 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00407490 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_004095c0 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x00617380]");
        rbx = rax;
        *(0x00617378) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_004097b0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4088a0 */
#include <stdint.h>
 
int32_t fcn_004088a0 (int64_t arg1) {
    rdi = arg1;
    eax = 0x6175a0;
    if (rdi == 0) {
        rdi = rax;
    }
    eax = *(rdi);
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4088b0 */
#include <stdint.h>
 
int32_t fcn_004088b0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    eax = 0x6175a0;
    if (rdi == 0) {
        rdi = rax;
    }
    *(rdi) = esi;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x408be0 */
#include <stdint.h>
 
int64_t fcn_00408be0 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    rax = rdx;
    *(rsp) = esi;
    *((rsp + 4)) = 0;
    *((rsp + 8)) = 0;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x18)) = 0;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x28)) = 0;
    *((rsp + 0x30)) = 0;
    fcn_004086c0 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x408cc0 */
#include <stdint.h>
 
void fcn_00408cc0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = rsi;
    esi = edi;
    edi = 0;
    return void (*0x408be0)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x408d60 */
#include <stdint.h>
 
int64_t fcn_00408d60 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x006175a0]");
        __asm ("movdqa xmm1, xmmword [0x006175b0]");
        __asm ("movdqa xmm2, xmmword [0x006175c0]");
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
        fcn_004086c0 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x408ef0 */
#include <stdint.h>
 
void fcn_00408ef0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 0x617340;
    rdx = 0xffffffffffffffff;
    return void (*0x4086c0)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x408f10 */
#include <stdint.h>
 
void fcn_00408f10 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x617340;
    rdx = 0xffffffffffffffff;
    edi = 0;
    return void (*0x4086c0)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x408f30 */
#include <stdint.h>
 
uint64_t fcn_00408f30 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = 0;
    *((rdi + 8)) = 0;
    eax = fcn_0040c6a0 (0x411fe4, 0x80000, rdx, rcx);
    edx = eax;
    *(rbx) = eax;
    eax = 0;
    if (edx >= 0) {
        return eax;
    }
    rax = fcn_00409bb0 (0, 0);
    *((rbx + 8)) = rax;
    al = (rax == 0) ? 1 : 0;
    eax = (int32_t) al;
    eax = -eax;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x408f80 */
#include <stdint.h>
 
uint64_t fcn_00408f80 (int64_t arg1) {
    int64_t var_ch;
    rdi = arg1;
    eax = *(rdi);
    if (eax >= 0) {
        edi = eax;
        void (*0x4021e0)() ();
    }
    rdi = *((rdi + 8));
    r13 = rdi;
    eax = chdir ();
    ebx = eax;
    if (eax == 0) {
        goto label_3;
    }
    rax = errno_location ();
    r12 = rax;
    if (*(rax) != 0x24) {
        goto label_3;
    }
    rax = strlen (r13);
    *((rsp + 0xc)) = 0xffffff9c;
    r14 = rax;
    if (rax == 0) {
        goto label_4;
    }
    if (rax <= 0xfff) {
        goto label_5;
    }
    rax = strspn (r13, 0x412556);
    rbx = rax;
    if (rax == 2) {
        goto label_6;
    }
    if (rax != 0) {
        goto label_7;
    }
label_0:
    if (*(rbp) == 0x2f) {
        goto label_8;
    }
    r13 += r14;
    if (rbp <= r13) {
        goto label_9;
    }
    goto label_10;
    do {
        edx = 0x1000;
        esi = 0x2f;
        rdi = rbp;
        rax = memrchr ();
        rbx = rax;
        if (rax == 0) {
            goto label_11;
        }
        *(rax) = 0;
        rax -= rbp;
        if (rax > 0xfff) {
            goto label_12;
        }
        eax = fcn_00409900 (rsp + 0xc, rbp);
        *(rbx) = 0x2f;
        if (eax != 0) {
            goto label_2;
        }
        rbx++;
        strspn (rbx, 0x412556);
        rbp = rbx + rax;
label_9:
        rax = r13;
        rax -= rbp;
    } while (rax > 0xfff);
    if (r13 > rbp) {
        eax = fcn_00409900 (rsp + 0xc, rbp);
        if (eax != 0) {
            goto label_2;
        }
    }
    edi = *((rsp + 0xc));
    eax = fchdir ();
    ebx = eax;
    if (eax == 0) {
        goto label_13;
    }
    do {
label_2:
        ebx = *(r12);
        fcn_004098c0 (*((rsp + 0xc)));
        *(r12) = ebx;
label_1:
        ebx = 0xffffffff;
label_3:
        eax = ebx;
        return rax;
label_7:
        eax = fcn_00409900 (rsp + 0xc, 0x412556);
    } while (eax != 0);
    rbp = r13 + rbx;
    goto label_0;
label_6:
    rax = fcn_0040aed0 (r13 + 3, 0x2f, r14 - 3);
    rbx = rax;
    if (rax == 0) {
        goto label_1;
    }
    *(rax) = 0;
    eax = fcn_00409900 (rsp + 0xc, r13);
    *(rbx) = 0x2f;
    if (eax != 0) {
        goto label_2;
    }
    rbx++;
    strspn (rbx, 0x412556);
    rbp = rbx + rax;
    goto label_0;
label_11:
    *(r12) = 0x24;
    ebx = 0xffffffff;
    goto label_3;
label_13:
    fcn_004098c0 (*((rsp + 0xc)));
    goto label_3;
label_12:
    assert_fail ("slash - dir < 4096", "lib/chdir-long.c", 0xb3, "chdir_long");
label_8:
    assert_fail ("*dir != '/', "lib/chdir-long.c", 0xa2, "chdir_long");
label_10:
    assert_fail ("dir <= dir_end", "lib/chdir-long.c", 0xa3, "chdir_long");
label_5:
    assert_fail ("4096 <= len", "lib/chdir-long.c", 0x7f, "chdir_long");
label_4:
    return assert_fail ("0 < len", "lib/chdir-long.c", 0x7e, "chdir_long");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x408fa0 */
#include <stdint.h>
 
void fcn_00408fa0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    edi = *(rdi);
    if (edi >= 0) {
        close (rdi);
    }
    rdi = *((rbx + 8));
    return free ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x408fc0 */
#include <stdint.h>
 
void fcn_00408fc0 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x4132ab);
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
        /* switch table (10 cases) at 0x413598 */
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
    void (*0x4022f0)() ();
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
    void (*0x4022f0)() ();
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
    void (*0x4022f0)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x409420 */
#include <stdint.h>
 
uint64_t fcn_00409420 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_00408fc0 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x409560 */
#include <stdint.h>
 
uint64_t fcn_00409560 (int64_t arg1) {
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
    return fcn_004097b0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4095c0 */
#include <stdint.h>
 
uint64_t fcn_004095c0 (int64_t arg1, int64_t arg2) {
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
    return fcn_004097b0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x409760 */
#include <stdint.h>
 
uint64_t fcn_00409760 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00409560 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x409790 */
#include <stdint.h>
 
void fcn_00409790 (char * arg1) {
    rdi = arg1;
    rbx = rdi;
    strlen (rdi);
    rdi = rbx;
    rsi = rax + 1;
    return void (*0x409760)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4097b0 */
#include <stdint.h>
 
uint64_t fcn_004097b0 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x00617328), 0, 0x41209a);
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4097f0 */
#include <stdint.h>
 
uint64_t fcn_004097f0 (void) {
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    rax = fcn_00409bb0 (0, 0);
    rbx = rax;
    while (*(rax) != 0xc) {
        rax = rbx;
        return rax;
        rax = errno_location ();
    }
    return fcn_004097b0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x409820 */
#include <stdint.h>
 
uint64_t fcn_00409820 (int64_t arg_e0h, int64_t arg10, int64_t arg11, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9) {
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_60h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_90h;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_c0h;
    xmm3 = arg10;
    xmm4 = arg11;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    *((rsp + 0x28)) = rsi;
    *((rsp + 0x30)) = rdx;
    *((rsp + 0x38)) = rcx;
    *((rsp + 0x40)) = r8;
    *((rsp + 0x48)) = r9;
    if (al != 0) {
        *((rsp + 0x50)) = xmm0;
        *((rsp + 0x60)) = xmm1;
        *((rsp + 0x70)) = xmm2;
        *((rsp + 0x80)) = xmm3;
        *((rsp + 0x90)) = xmm4;
        *((rsp + 0xa0)) = xmm5;
        *((rsp + 0xb0)) = xmm6;
        *((rsp + 0xc0)) = xmm7;
    }
    rax = rsp + 0xe0;
    *((rsp + 8)) = 8;
    *((rsp + 0x10)) = rax;
    rax = rsp + 0x20;
    *((rsp + 0xc)) = 0x30;
    *((rsp + 0x18)) = rax;
    fcn_0040ce40 (rdi, rsp + 8);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x4098c0 */
#include <stdint.h>
 
uint32_t fcn_004098c0 (int64_t arg1) {
    rdi = arg1;
    if (edi < 0) {
        return;
    }
    eax = close (rdi);
    if (eax == 0) {
        return eax;
    }
    return assert_fail ("! close_fail", "lib/chdir-long.c", 0x40, "cdb_free");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x409900 */
#include <stdint.h>
 
int32_t fcn_00409900 (int64_t fd, const char * path) {
    rdi = fd;
    rsi = path;
    eax = 0;
    rbx = rdi;
    eax = openat (*(rdi), rsi, 0x10900);
    if (eax < 0) {
        goto label_0;
    }
    eax = fcn_004098c0 (*(rbx));
    *(rbx) = ebp;
    eax = 0;
    do {
        return eax;
label_0:
        eax = 0xffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x409bb0 */
#include <stdint.h>
 
uint64_t fcn_00409bb0 (void * arg1, uint32_t arg2) {
    int64_t var_8h;
    uint32_t var_10h;
    void * ptr;
    void * var_20h;
    size_t size;
    uint32_t var_30h;
    int64_t var_3fh;
    void * s2;
    uint32_t var_48h;
    uint32_t var_50h;
    void ** var_58h;
    uint32_t var_60h;
    uint32_t var_68h;
    int64_t var_78h;
    rdi = arg1;
    rsi = arg2;
    *((rsp + 0x20)) = rdi;
    *((rsp + 0x30)) = rsi;
    if (rsi != 0) {
        goto label_11;
    }
    *((rsp + 0x28)) = 0x1000;
    if (rdi != 0) {
        goto label_12;
    }
    do {
        rax = malloc (*((rsp + 0x28)));
        *((rsp + 0x18)) = rax;
        if (rax != 0) {
            goto label_13;
        }
label_2:
        rax = *((rsp + 0x18));
        return rax;
label_11:
        rax = *((rsp + 0x30));
        *((rsp + 0x28)) = rax;
    } while (*((rsp + 0x20)) == 0);
    rax = *((rsp + 0x20));
    *((rsp + 0x18)) = rax;
label_13:
    rbx = *((rsp + 0x18));
    rbx += *((rsp + 0x28));
    rdx = rsp + 0x60;
    esi = 0x411fe4;
    *((rbx - 1)) = 0;
    edi = 1;
    eax = lxstat ();
    if (eax < 0) {
        goto label_14;
    }
    r15 = *((rsp + 0x60));
    rdx = rsp + 0x60;
    esi = 0x412556;
    edi = 1;
    r14 = *((rsp + 0x68));
    *((rsp + 8)) = r15;
    eax = lxstat ();
    if (eax < 0) {
        goto label_14;
    }
    rax = rbx - 1;
    rsi = *((rsp + 0x68));
    *((rsp + 0x40)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0x50)) = rsi;
    *((rsp + 0x48)) = rax;
    dl = (r15 != rax) ? 1 : 0;
    al = (r14 != rsi) ? 1 : 0;
    dl |= al;
    *((rsp + 0x3f)) = dl;
    if (dl == 0) {
        goto label_15;
    }
    rax = errno_location ();
    ebp = 0;
    r15d = 0xffffff9c;
    r12 = rax;
label_1:
    eax = 0;
    eax = openat (r15d, 0x411fe3, 0);
    r15d = eax;
    if (eax < 0) {
        goto label_16;
    }
    rdx = rsp + 0x60;
    esi = eax;
    edi = 1;
    eax = fxstat ();
    if (eax != 0) {
        goto label_17;
    }
    if (rbp != 0) {
        rdi = rbp;
        eax = closedir ();
        if (eax != 0) {
            goto label_18;
        }
    }
    rax = *((rsp + 0x60));
    edi = r15d;
    *((rsp + 0x10)) = rax;
    rax = *((rsp + 0x68));
    *((rsp + 0x58)) = rax;
    rax = fdopendir ();
    if (rax == 0) {
        goto label_18;
    }
    r13d = *((rsp + 0x3f));
    do {
label_0:
        *(r12) = 0;
        rdi = rbp;
        rax = readdir ();
        if (rax == 0) {
            goto label_19;
        }
        if (*((rax + 0x13)) == 0x2e) {
            goto label_20;
        }
label_4:
        if (r13b == 0) {
            goto label_3;
        }
        rcx = *((rsp + 8));
        dl = (*(rax) == r14) ? 1 : 0;
        cl = (*((rsp + 0x10)) != rcx) ? 1 : 0;
        dl |= cl;
    } while (dl == 0);
    r13d = edx;
label_3:
    rbx = rax + 0x13;
    rcx = rsp + 0x60;
    esi = r15d;
    edi = 1;
    r8d = 0x100;
    rdx = rbx;
    eax = fxstatat ();
    if (eax != 0) {
        goto label_0;
    }
    eax = *((rsp + 0x78));
    eax &= 0xf000;
    if (eax != 0x4000) {
        goto label_0;
    }
    rax = *((rsp + 8));
    if (*((rsp + 0x60)) != rax) {
        goto label_0;
    }
    if (*((rsp + 0x68)) != r14) {
        goto label_0;
    }
    r13 = *((rsp + 0x40));
    r13 -= *((rsp + 0x18));
    rax = strlen (rbx);
    r14 = rax;
    if (r13 <= rax) {
        if (*((rsp + 0x30)) != 0) {
            goto label_21;
        }
        rax = *((rsp + 0x28));
        rdx = rax;
        if (r14 >= rax) {
            rdx = r14;
        }
        rax += rdx;
        *((rsp + 0x40)) = rdx;
        *((rsp + 8)) = rax;
        if (rax < 0) {
            goto label_22;
        }
        rax = realloc (*((rsp + 0x18)), rax);
        rdx = *((rsp + 0x40));
        if (rax == 0) {
            goto label_22;
        }
        rdx += r13;
        *((rsp + 0x18)) = rax;
        rdx -= r13;
        rax = memcpy (rax + rdx, rax + r13, *((rsp + 0x28)));
        *((rsp + 0x40)) = rax;
        rax = *((rsp + 8));
        *((rsp + 0x28)) = rax;
    }
    r8 = *((rsp + 0x40));
    r8 -= r14;
    rax = memcpy (r8, rbx, r14);
    rsi = *((rsp + 0x58));
    r8 = rax;
    rax = rax - 1;
    *((rsp + 0x40)) = rax;
    rax = *((rsp + 0x10));
    r14 = rsi;
    *((r8 - 1)) = 0x2f;
    *((rsp + 8)) = rax;
    if (*((rsp + 0x48)) != rax) {
        goto label_1;
    }
    if (*((rsp + 0x50)) != rsi) {
        goto label_1;
    }
    rdi = rbp;
    eax = closedir ();
    if (eax != 0) {
        goto label_23;
    }
    rbx = *((rsp + 0x18));
    rbx += *((rsp + 0x28));
label_15:
    rax = *((rsp + 0x18));
    rsi = *((rsp + 0x28));
    rax = rax + rsi - 1;
    if (*((rsp + 0x40)) == rax) {
        goto label_24;
    }
label_10:
    rbx -= rsi;
    memmove (*((rsp + 0x18)), *((rsp + 0x40)), rbx);
    if (*((rsp + 0x30)) == 0) {
        goto label_25;
    }
label_9:
    rax = *((rsp + 0x20));
    if (rax == 0) {
        rax = *((rsp + 0x18));
    }
    *((rsp + 0x18)) = rax;
    goto label_2;
label_19:
    ebx = *(r12);
    if (ebx != 0) {
        goto label_26;
    }
    if (r13b == 0) {
        goto label_26;
    }
    rdi = rbp;
    rewinddir ();
    rdi = rbp;
    rax = readdir ();
    if (rax == 0) {
        goto label_27;
    }
    r13d = 0;
    if (*((rax + 0x13)) != 0x2e) {
        goto label_3;
    }
label_20:
    if (*((rax + 0x14)) == 0) {
        goto label_0;
    }
    if (*((rax + 0x14)) != 0x2e) {
        goto label_4;
    }
    goto label_0;
label_27:
    ebx = *(r12);
label_26:
    if (ebx == 0) {
        *(r12) = 2;
        ebx = 2;
    }
label_7:
    rdi = rbp;
    closedir ();
label_6:
    if (*((rsp + 0x20)) == 0) {
        goto label_28;
    }
    do {
label_5:
        *(r12) = ebx;
        *((rsp + 0x18)) = 0;
        goto label_2;
label_14:
        rax = errno_location ();
        r12 = rax;
label_23:
        ebx = *(r12);
    } while (*((rsp + 0x20)) != 0);
label_28:
    free (*((rsp + 0x18)));
    goto label_5;
label_12:
    errno_location ();
    *((rsp + 0x18)) = 0;
    *(rax) = 0x16;
    goto label_2;
label_18:
    ebx = *(r12);
label_8:
    close (r15d);
    goto label_6;
label_16:
    ebx = *(r12);
    if (rbp == 0) {
        goto label_6;
    }
    goto label_7;
label_17:
    ebx = *(r12);
    if (rbp == 0) {
        goto label_8;
    }
    rdi = rbp;
    closedir ();
    goto label_8;
label_25:
    rax = realloc (*((rsp + 0x18)), rbx);
    *((rsp + 0x20)) = rax;
    goto label_9;
label_24:
    rax = *((rsp + 0x40));
    *((rax - 1)) = 0x2f;
    rax--;
    *((rsp + 0x40)) = rax;
    goto label_10;
label_22:
    *(r12) = 0xc;
    ebx = 0xc;
    goto label_7;
label_21:
    *(r12) = 0x22;
    ebx = 0x22;
    goto label_7;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40a080 */
#include <stdint.h>
 
uint64_t fcn_0040a080 (int64_t arg1, int64_t arg2) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40a160 */
#include <stdint.h>
 
int64_t fcn_0040a160 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, signed int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40a780 */
#include <stdint.h>
 
uint64_t fcn_0040a780 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x4137c9;
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
            fcn_0040a080 (r12, rbx);
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
        fcn_0040a080 (r12, rbx);
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
    eax = fcn_0040a160 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_0040a160 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40ad50 */
#include <stdint.h>
 
int32_t fcn_0040ad50 (int64_t arg_10h) {
    eax = *(0x0061739c);
    *(0x006175e0) = eax;
    eax = *(0x00617398);
    *(0x006175e4) = eax;
    eax = *((rsp + 0x10));
    fcn_0040a780 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0061739c) = edx;
    rdx = imp.__libc_start_main;
    *(0x00617638) = rdx;
    edx = imp.__libc_start_main;
    *(0x00617394) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40add0 */
#include <stdint.h>
 
void fcn_0040add0 (void) {
    r9d = 0;
    fcn_0040ad50 (rdi);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40ae50 */
#include <stdint.h>
 
uint64_t fcn_0040ae50 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_0040c6f0 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40aed0 */
#include <stdint.h>
 
int64_t fcn_0040aed0 (uint32_t arg1, int64_t arg2, uint32_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40afe0 */
#include <stdint.h>
 
uint64_t fcn_0040afe0 (char * arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = strlen (rdi);
    rcx = rbx;
    edx = 0;
    rax++;
    while (dil != 0x5c) {
label_0:
        *(rcx) = dil;
        rcx++;
        if (rax <= rsi) {
            goto label_2;
        }
label_1:
        rdx = rsi;
        edi = *((rbx + rdx));
        rsi = rdx + 1;
    }
    r8 = rdx + 4;
    if (r8 >= rax) {
        goto label_0;
    }
    r9d = *((rbx + rsi));
    r10d = r9 - 0x30;
    if (r10b > 3) {
        goto label_0;
    }
    r10d = *((rbx + rdx + 2));
    r11d = r10 - 0x30;
    if (r11b > 7) {
        goto label_0;
    }
    edx = *((rbx + rdx + 3));
    r11d = rdx - 0x30;
    if (r11b > 7) {
        goto label_0;
    }
    edx = r10 + r9*8;
    rcx++;
    rsi = r8;
    edx = r11 + rdx*8 - 0x80;
    *((rcx - 1)) = dl;
    goto label_1;
label_2:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40b070 */
#include <stdint.h>
 
void fcn_0040b070 (void ** ptr) {
    rdi = ptr;
    rbx = rdi;
    free (*(rdi));
    free (*((rbx + 8)));
    free (*((rbx + 0x10)));
    if ((*((rbx + 0x28)) & 4) == 0) {
        rdi = rbx;
        void (*0x401df0)() ();
    }
    free (*((rbx + 0x18)));
    rdi = rbx;
    return free ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40b0c0 */
#include <stdint.h>
 
uint64_t fcn_0040b0c0 (void) {
    int64_t var_fh;
    int64_t var_27h;
    uint32_t var_40h_2;
    uint32_t var_44h;
    int64_t var_40h;
    char * var_3ch;
    int64_t var_40h_3;
    int64_t var_44h_2;
    int64_t var_48h_2;
    int64_t var_4ch;
    int64_t var_60h;
    int64_t var_64h;
    int64_t var_48h;
    char * ptr;
    int64_t var_58h;
    rax = fopen ("/proc/self/mountinfo", 0x4120a7);
    if (rax == 0) {
        goto label_9;
    }
    *((rsp + 0x50)) = 0;
    r12 = rsp + 0x48;
    r14 = 0xfffff00000000000;
    *((rsp + 0x58)) = 0;
    do {
label_0:
        rcx = rbp;
        edx = 0xa;
        rsi = rsp + 0x58;
        rdi = rsp + 0x50;
        rax = getdelim ();
        if (rax == -1) {
            goto label_10;
        }
        rbx = rsp + 0x27;
        rax = rsp + 0x3c;
        rax = rsp + 0x40;
        eax = 0;
        r9 = rsp + 0x64;
        r8 = rsp + 0x60;
        rcx = rsp + 0x44;
        eax = sscanf (*((rsp + 0x70)), "%*u %*u %u:%u %n%*s%n %n%*s%n%c", rsp + 0x40);
        eax &= 0xfffffffb;
    } while (eax != 3);
    rdi = *((rsp + 0x2c));
    rdi += *((rsp + 0x50));
    rax = fcn_0040bd00 (rdi, 0x413801);
    r15 = rax;
    if (rax == 0) {
        goto label_0;
    }
    eax = 0;
    r9 = rsp + 0x4c;
    r8 = rsp + 0x48;
    rcx = rsp + 0x44;
    eax = sscanf (rax, " - %n%*s%n %n%*s%n %c", rsp + 0x40);
    eax &= 0xfffffffb;
    if (eax != 1) {
        goto label_0;
    }
    rax = *((rsp + 0x44));
    rdx = *((rsp + 0x50));
    r13d = 1;
    *((rdx + rax)) = 0;
    rdx = *((rsp + 0x50));
    rax = *((rsp + 0x2c));
    *((rdx + rax)) = 0;
    rax = *((rsp + 0x34));
    *((r15 + rax)) = 0;
    rax = *((rsp + 0x3c));
    *((r15 + rax)) = 0;
    rdi = *((rsp + 0x38));
    rdi += r15;
    fcn_0040afe0 (rdi);
    rdi = *((rsp + 0x28));
    rdi += *((rsp + 0x50));
    fcn_0040afe0 (rdi);
    rdi = *((rsp + 0x40));
    rdi += *((rsp + 0x50));
    fcn_0040afe0 (rdi);
    rax = fcn_00409560 (0x38);
    rdi = *((rsp + 0x38));
    rbx = rax;
    rdi += r15;
    rax = fcn_00409790 (rdi);
    rdi = *((rsp + 0x28));
    rdi += *((rsp + 0x50));
    *(rbx) = rax;
    rax = fcn_00409790 (rdi);
    rdi = *((rsp + 0x40));
    rdi += *((rsp + 0x50));
    *((rbx + 8)) = rax;
    rax = fcn_00409790 (rdi);
    rdi = *((rsp + 0x30));
    *((rbx + 0x10)) = rax;
    rdi += r15;
    rax = fcn_00409790 (rdi);
    edx = *((rsp + 0x20));
    edi = "autofs";
    rsi = 0xffffff00000;
    r15 = rax;
    *((rbx + 0x18)) = rax;
    eax = *((rsp + 0x24));
    rcx = rdx;
    rdx <<= 0x20;
    *((rbx + 0x28)) |= 4;
    rcx <<= 8;
    rdx &= r14;
    ecx &= 0xfff00;
    rdx |= rcx;
    ecx = (int32_t) al;
    rax <<= 0xc;
    rdx |= rcx;
    rax &= rsi;
    ecx = 7;
    rsi = r15;
    rax |= rdx;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    *((rbx + 0x20)) = rax;
    al = (rax > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "proc";
    ecx = 5;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    while (al == 0) {
label_1:
        eax = *((rbx + 0x28));
        eax &= 0xfffffffe;
        eax |= r13d;
        r13 = *(rbx);
        *((rbx + 0x28)) = al;
        rax = strchr (r13, 0x3a);
        edx = 1;
        if (rax == 0) {
            goto label_11;
        }
label_2:
        eax = *((rbx + 0x28));
        edx += edx;
        eax &= 0xfffffffd;
        eax |= edx;
        *((rbx + 0x28)) = al;
        *(r12) = rbx;
        r12 = rbx + 0x30;
        goto label_0;
label_10:
        free (*((rsp + 0x50)));
        if ((*(rbp) & 0x20) != 0) {
            goto label_12;
        }
        eax = fcn_0040ced0 (rbp);
        if (eax == 0xffffffff) {
            goto label_13;
        }
label_3:
        *(r12) = 0;
        rax = *((rsp + 0x48));
label_8:
        return rax;
        edi = "subfs";
        ecx = 6;
        rsi = r15;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (eax > 0xffffffff) ? 1 : 0;
    }
    edi = "debugfs";
    ecx = 8;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "devpts";
    ecx = 7;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "fusectl";
    ecx = 8;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "mqueue";
    ecx = 7;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "rpc_pipefs";
    ecx = 0xb;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "sysfs";
    ecx = 6;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = 0x41066d;
    ecx = 6;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "kernfs";
    ecx = 7;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    eax = strcmp (r15, "ignore");
    if (eax == 0) {
        goto label_1;
    }
    eax = strcmp (r15, "none");
    r13b = (eax == 0) ? 1 : 0;
    goto label_1;
label_11:
    if (*(r13) == 0x2f) {
        goto label_14;
    }
label_5:
    esi = "-hosts";
    ecx = 7;
    rdi = r13;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (*(r13) > 0x2f) ? 1 : 0;
    dl = (al == 0) ? 1 : 0;
    goto label_2;
label_9:
    esi = 0x4120a7;
    edi = "/etc/mtab";
    rax = setmntent ();
    r13 = rax;
    if (rax == 0) {
        goto label_15;
    }
    rdi = r13;
    r12 = rsp + 0x48;
    r14 = 0xffffffffffffffff;
    rax = getmntent ();
    if (rax == 0) {
        goto label_16;
    }
    do {
        esi = "bind";
        rdi = rbp;
        rax = hasmntopt ();
        r15 = rax;
        rax = fcn_00409560 (0x38);
        rbx = rax;
        rax = fcn_00409790 (*(rbp));
        *(rbx) = rax;
        rax = fcn_00409790 (*((rbp + 8)));
        *((rbx + 0x10)) = 0;
        *((rbx + 8)) = rax;
        rax = fcn_00409790 (*((rbp + 0x10)));
        edi = "autofs";
        ecx = 7;
        *((rbx + 0x28)) |= 4;
        rsi = rax;
        *((rbx + 0x18)) = rax;
        edx = 1;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (*((rbx + 0x28)) > 0) ? 1 : 0;
        if (al != 0) {
            edi = "proc";
            ecx = 5;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "subfs";
            ecx = 6;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "debugfs";
            ecx = 8;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "devpts";
            ecx = 7;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "fusectl";
            ecx = 8;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "mqueue";
            ecx = 7;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "rpc_pipefs";
            ecx = 0xb;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "sysfs";
            ecx = 6;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = 0x41066d;
            ecx = 6;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "kernfs";
            ecx = 7;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            *((rsp + 0xf)) = dl;
            eax = strcmp (rbp, "ignore");
            edx = *((rsp + 0xf));
            if (eax == 0) {
                goto label_17;
            }
            eax = strcmp (rbp, "none");
            dl = (r15 == 0) ? 1 : 0;
            al = (eax == 0) ? 1 : 0;
            edx &= eax;
        }
label_17:
        eax = *((rbx + 0x28));
        r15 = *(rbx);
        eax &= 0xfffffffe;
        eax |= edx;
        *((rbx + 0x28)) = al;
        rax = strchr (r15, 0x3a);
        edx = 1;
        if (rax == 0) {
            goto label_18;
        }
label_4:
        eax = *((rbx + 0x28));
        edx += edx;
        *((rbx + 0x20)) = r14;
        rdi = r13;
        eax &= 0xfffffffd;
        eax |= edx;
        *((rbx + 0x28)) = al;
        *(r12) = rbx;
        r12 = rbx + 0x30;
        rax = getmntent ();
    } while (rax != 0);
label_16:
    rdi = r13;
    eax = endmntent ();
    if (eax != 0) {
        goto label_3;
    }
label_13:
    rax = errno_location ();
    r14d = *(rax);
    r13 = rax;
label_6:
    *(r12) = 0;
    rdi = *((rsp + 0x48));
    if (rdi == 0) {
        goto label_19;
    }
    do {
        rbx = *((rdi + 0x30));
        eax = fcn_0040b070 (rdi);
        *((rsp + 0x48)) = rbx;
        rdi = rbx;
    } while (rbx != 0);
label_19:
    *(r13) = r14d;
    eax = 0;
    return rax;
label_18:
    if (*(r15) == 0x2f) {
        goto label_20;
    }
label_7:
    esi = "-hosts";
    ecx = 7;
    rdi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (*(r15) > 0x2f) ? 1 : 0;
    dl = (al == 0) ? 1 : 0;
    goto label_4;
label_14:
    if (*((r13 + 1)) != 0x2f) {
        goto label_5;
    }
    edi = "smbfs";
    ecx = 6;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (*((r13 + 1)) > 0x2f) ? 1 : 0;
    if (al == 0) {
        goto label_2;
    }
    edi = "cifs";
    ecx = 5;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_2;
    }
    goto label_5;
label_12:
    rax = errno_location ();
    r14d = *(rax);
    r13 = rax;
    fcn_0040ced0 (rbp);
    *(r13) = r14d;
    goto label_6;
label_20:
    if (*((r15 + 1)) != 0x2f) {
        goto label_7;
    }
    edi = "smbfs";
    ecx = 6;
    rsi = rbp;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (*((r15 + 1)) > 0x2f) ? 1 : 0;
    if (al == 0) {
        goto label_4;
    }
    edi = "cifs";
    ecx = 5;
    rsi = rbp;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_4;
    }
    goto label_7;
label_15:
    eax = 0;
    goto label_8;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40b880 */
#include <stdint.h>
 
int64_t fcn_0040b880 (uint32_t arg1, uint32_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r11d = 1;
    r8d = 1;
    r9d = 0;
    rax = 0xffffffffffffffff;
label_0:
    rcx = r8 + r9;
    if (rcx >= rsi) {
        goto label_2;
    }
    do {
        r10 = rdi + rax;
        ebx = *((r10 + r8));
        if (*((rdi + rcx)) >= bl) {
            goto label_3;
        }
        r9 = rcx;
        r8d = 1;
        r11 = rcx;
        rcx = r8 + r9;
        r11 -= rax;
    } while (rcx < rsi);
label_2:
    *(rdx) = r11;
    ebx = 1;
    r8d = 1;
    r9d = 0;
    r10 = 0xffffffffffffffff;
label_1:
    rcx = r8 + r9;
    if (rsi <= rcx) {
        goto label_4;
    }
    do {
        r11 = rdi + r10;
        r11d = *((r11 + r8));
        if (*((rdi + rcx)) <= r11b) {
            goto label_5;
        }
        r9 = rcx;
        r8d = 1;
        rbx = rcx;
        rcx = r8 + r9;
        rbx -= r10;
    } while (rsi > rcx);
label_4:
    r10++;
    rax++;
    if (r10 >= rax) {
        *(rdx) = rbx;
        rax = r10;
    }
    return rax;
    if (r10 != rax) {
label_3:
        rax = r9;
        r11d = 1;
        r9++;
        r8d = 1;
        goto label_0;
        if (r9 == 0) {
label_5:
            goto label_6;
        }
        r10 = r9;
        ebx = 1;
        r9++;
        r8d = 1;
        goto label_1;
    }
    if (r8 != r11) {
        r8++;
        goto label_0;
label_6:
        if (r8 == rbx) {
            goto label_7;
        }
        r8++;
        goto label_1;
    }
    r9 = rcx;
    r8d = 1;
    goto label_0;
label_7:
    r9 = rcx;
    r8d = 1;
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40b9b0 */
#include <stdint.h>
 
uint64_t fcn_0040b9b0 (int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    uint32_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_850h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r15 = rdi;
    r12 = rdx;
    rbx = rcx;
    if (rcx <= 2) {
        goto label_8;
    }
    rax = fcn_0040b880 (r12, rcx, rsp + 0x48);
    r13 = rax;
    rax = *((rsp + 0x48));
    *((rsp + 0x20)) = rax;
label_6:
    rax = rsp + 0x50;
    rdx = rsp + 0x850;
    do {
        *(rax) = rbx;
        rax += 8;
    } while (rdx != rax);
    rax = *((rsp + 0x20));
    rsi = r12 + rax;
    if (rbx == 0) {
        goto label_9;
    }
    r10 = rbx - 1;
    r9 = rbx + r12;
    rax = r12;
    rdi = r12 + r10;
    do {
        edx = *(rax);
        rcx = rdi;
        rcx -= rax;
        rax++;
        *((rsp + rdx*8 + 0x50)) = rcx;
    } while (r9 != rax);
    *((rsp + 8)) = r10;
    eax = memcmp (r12, rsi, r13);
    if (eax == 0) {
        goto label_10;
    }
label_1:
    rax = rbx;
    r14 = rbx - 1;
    rax -= r13;
    if (rax < r13) {
        rax = r13;
    }
    r9d = 0;
    rax++;
    *((rsp + 0x20)) = rax;
    *((rsp + 0x48)) = rax;
    eax = 1;
    rax -= r13;
    *((rsp + 0x18)) = rax;
    while (rax != 0) {
label_0:
        r9 += rax;
label_2:
        rcx = r9 + rbx;
        *((rsp + 0x10)) = r9;
        rdx = rcx;
        *((rsp + 8)) = rcx;
        rdx -= rbp;
        rax = fcn_0040aed0 (r15 + rbp, 0, rdx);
        rcx = *((rsp + 8));
        if (rcx == 0) {
            goto label_3;
        }
        r9 = *((rsp + 0x10));
        if (rax != 0) {
            goto label_3;
        }
        eax = *((r15 + rcx - 1));
        rax = *((rsp + rax*8 + 0x50));
    }
    rdx = r15 + r9;
    if (r13 >= r14) {
        goto label_11;
    }
    rax = r13;
    edi = *((r12 + r13));
    if (*((rdx + r13)) == dil) {
        goto label_12;
    }
    goto label_13;
    do {
        edi = *((rdx + rax));
        if (*((r12 + rax)) != dil) {
            goto label_13;
        }
label_12:
        rax++;
    } while (rax < r14);
label_11:
    rax = r13 - 1;
    if (rax == -1) {
        goto label_14;
    }
    esi = *((r12 + r13 - 1));
    if (*((rdx + rax)) == sil) {
        goto label_15;
    }
    goto label_16;
    do {
        esi = *((rdx + rax));
        if (*((r12 + rax)) != sil) {
            goto label_16;
        }
label_15:
        rax--;
    } while (rax != -1);
label_14:
    rax = rdx;
    goto label_7;
label_13:
    r9 += *((rsp + 0x18));
    goto label_0;
label_9:
    eax = memcmp (r12, rsi, r13);
    if (eax != 0) {
        goto label_1;
    }
    do {
label_3:
        eax = 0;
label_7:
        return rax;
label_16:
        r9 += *((rsp + 0x20));
        goto label_2;
label_10:
        rax = r13 - 1;
        r10 = *((rsp + 8));
        r11d = 0;
        r14d = 0;
        *((rsp + 0x38)) = rax;
        rax = rbx;
        rax -= *((rsp + 0x20));
        *((rsp + 0x28)) = rax;
        eax = 1;
        rax -= r13;
        *((rsp + 0x30)) = rax;
        goto label_17;
label_4:
        if (rax < *((rsp + 0x20))) {
            if (r11 == 0) {
                rax = *((rsp + 0x28));
                goto label_18;
            }
        }
label_18:
        r14 += rax;
        r11d = 0;
label_5:
label_17:
        r9 = r14 + rbx;
        *((rsp + 0x18)) = r10;
        rdx = r9;
        *((rsp + 0x10)) = r11;
        rdx -= rbp;
        *((rsp + 8)) = r9;
        rax = fcn_0040aed0 (r15 + rbp, 0, rdx);
    } while (rax != 0);
    r9 = *((rsp + 8));
    r11 = *((rsp + 0x10));
    r10 = *((rsp + 0x18));
    if (r9 == 0) {
        goto label_3;
    }
    eax = *((r15 + r9 - 1));
    rax = *((rsp + rax*8 + 0x50));
    if (rax != 0) {
        goto label_4;
    }
    rax = r13;
    if (r11 >= r13) {
        rax = r11;
    }
    if (rax >= r10) {
        goto label_19;
    }
    rdx = r15 + r14;
    while (*((r12 + rax)) == sil) {
        rax++;
        if (rax == r10) {
            goto label_19;
        }
        esi = *((rdx + rax));
    }
    rdi = *((rsp + 0x30));
    r11d = 0;
    rcx = rdi + r14;
    r14 = rax + rcx;
    goto label_5;
label_19:
    rdi = *((rsp + 0x38));
    rax = *((rsp + 0x38));
    if (r11 >= r13) {
        goto label_20;
    }
    rdx = r15 + r14;
    esi = *((r12 + rdi));
    if (*((rdx + rdi)) == sil) {
        goto label_21;
    }
    goto label_20;
    do {
        ecx = *((rax + rdx - 1));
        if (*((r12 + rax - 1)) != cl) {
            goto label_22;
        }
        rax = rsi;
label_21:
        rsi = rax - 1;
    } while (r11 != rax);
    do {
label_22:
        r11++;
        if (r11 > rax) {
            goto label_23;
        }
        r14 += *((rsp + 0x20));
        r11 = *((rsp + 0x28));
        goto label_5;
label_8:
        *((rsp + 0x48)) = 1;
        r13 = rcx - 1;
        *((rsp + 0x20)) = 1;
        goto label_6;
label_20:
        rax = r13;
    } while (1);
label_23:
    rax = r15 + r14;
    goto label_7;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40bd00 */
#include <stdint.h>
 
uint64_t fcn_0040bd00 (int64_t arg2, char * s) {
    int64_t var_8h;
    int64_t var_10h;
    void * s2;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_38h;
    rsi = arg2;
    rdi = s;
    eax = *(rdi);
    r9d = *(rsi);
    if (al == 0) {
        goto label_6;
    }
    if (r9b == 0) {
        goto label_7;
    }
    rbx = rsi;
    rdx = rdi;
    ecx = r9d;
    r8d = 1;
    while (al != 0) {
        if (cl == 0) {
            goto label_8;
        }
        rdx++;
        rbx++;
        al = (cl == al) ? 1 : 0;
        ecx = *(rbx);
        r8d &= eax;
        eax = *(rdx);
    }
    r12d = 0;
    if (cl == 0) {
label_8:
        r12 = rdi;
        if (r8b != 0) {
            goto label_1;
        }
        r13 = rdi;
        rbp -= rsi;
        esi = (int32_t) r9b;
        rax = strchr (rdi + 1, rsi);
        r12 = rax;
        if (rax == 0) {
            goto label_1;
        }
        if (rbp == 1) {
            goto label_1;
        }
        rax = r13 + rbp;
        rbx -= rbp;
        r8 = rax;
        r8 -= r12;
        eax = 1;
        if (rax < r12) {
            r8 = rax;
        }
        if (rbp <= 0x1f) {
            goto label_9;
        }
        rax = fcn_0040b9b0 (r12, r8, rbx, rbp);
        r12 = rax;
    }
label_1:
    rax = r12;
    return rax;
label_9:
    if (rbp <= 2) {
        goto label_10;
    }
    *((rsp + 8)) = r8;
    rax = fcn_0040b880 (rbx, rbp, rsp + 0x38);
    r8 = *((rsp + 8));
    r15 = rax;
    rax = *((rsp + 0x38));
    *((rsp + 0x18)) = rax;
label_4:
    rax = *((rsp + 0x18));
    *((rsp + 8)) = r8;
    eax = memcmp (rbx, rbx + rax, r15);
    r8 = *((rsp + 8));
    if (eax != 0) {
        goto label_11;
    }
    rax = r15 - 1;
    r13d = 0;
    r14d = 0;
    *((rsp + 0x20)) = rax;
    rax = rbp;
    rax -= *((rsp + 0x18));
    *((rsp + 0x28)) = rax;
    eax = 1;
    rax -= r15;
    *((rsp + 0x10)) = rax;
label_0:
    r11 = rbp + r14;
    rdx = r11;
    *((rsp + 8)) = r11;
    rdx -= r8;
    rax = fcn_0040aed0 (r12 + r8, 0, rdx);
    r11 = *((rsp + 8));
    if (r11 == 0) {
        goto label_2;
    }
    if (rax != 0) {
        goto label_2;
    }
    rax = r13;
    if (r15 >= r13) {
        rax = r15;
    }
    if (rbp <= rax) {
        goto label_12;
    }
    rdx = r12 + rax;
    ecx = *((rbx + rax));
    if (*((rdx + r14)) != cl) {
        goto label_13;
    }
    rdx = r12 + r14;
    while (rbp != rax) {
        esi = *((rdx + rax));
        if (*((rbx + rax)) != sil) {
            goto label_13;
        }
        rax++;
    }
label_12:
    rax = *((rsp + 0x20));
    if (r15 <= r13) {
        goto label_14;
    }
    rcx = *((rsp + 0x20));
    rsi = r12 + r14;
    edi = *((rsi + rcx));
    if (*((rbx + rcx)) == dil) {
        goto label_15;
    }
    goto label_14;
    do {
        edi = *((rax + rsi - 1));
        if (*((rbx + rax - 1)) != dil) {
            goto label_5;
        }
        rax = rdx;
label_15:
        rdx = rax - 1;
    } while (r13 != rax);
label_5:
    r10 = r13 + 1;
    if (r10 > rax) {
        goto label_16;
    }
    r13 = *((rsp + 0x28));
    r14 += *((rsp + 0x18));
    do {
        r8 = r11;
        goto label_0;
label_13:
        rdi = *((rsp + 0x10));
        r13d = 0;
        r9 = rdi + r14;
        r14 = rax + r9;
    } while (1);
    do {
label_2:
        r12d = 0;
        goto label_1;
label_11:
        rax = rbp;
        rax -= r15;
        if (rax < r15) {
            rax = r15;
        }
        r14d = 0;
        rax++;
        *((rsp + 0x18)) = rax;
        *((rsp + 0x38)) = rax;
        rax = r12 + r15;
        *((rsp + 8)) = rax;
        eax = 1;
        rax -= r15;
        *((rsp + 0x10)) = rax;
label_3:
        r13 = rbp + r14;
        rdx -= r8;
        rax = fcn_0040aed0 (r12 + r8, 0, r13);
    } while (r13 == 0);
    if (rax != 0) {
        goto label_2;
    }
    rdx = r12 + r14;
    if (rbp <= r15) {
        goto label_17;
    }
    rsi = *((rsp + 8));
    rax = r15;
    rdx = r12 + r14;
    ecx = *((rbx + r15));
    if (*((rsi + r14)) == cl) {
        goto label_18;
    }
    goto label_19;
    do {
        edi = *((rdx + rax));
        if (*((rbx + rax)) != dil) {
            goto label_19;
        }
label_18:
        rax++;
    } while (rbp > rax);
label_17:
    rax = r15 - 1;
    if (rax == -1) {
        goto label_20;
    }
    edi = *((rbx + r15 - 1));
    if (*((rdx + rax)) == dil) {
        goto label_21;
    }
    goto label_22;
    do {
        esi = *((rdx + rax));
        if (*((rbx + rax)) != sil) {
            goto label_22;
        }
label_21:
        rax--;
    } while (rax != -1);
label_20:
    r12 = rdx;
    goto label_1;
label_19:
    rsi = *((rsp + 0x10));
    r9 = rsi + r14;
    r14 = rax + r9;
    do {
        r8 = r13;
        goto label_3;
label_22:
        r14 += *((rsp + 0x18));
    } while (1);
label_6:
    r12d = 0;
    if (r9b == 0) {
        r12 = rdi;
    }
    goto label_1;
label_7:
    r12 = rdi;
    goto label_1;
label_10:
    *((rsp + 0x38)) = 1;
    r15 = rbp - 1;
    *((rsp + 0x18)) = 1;
    goto label_4;
label_14:
    rax = r15;
    goto label_5;
label_16:
    r12 += r14;
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40c0a0 */
#include <stdint.h>
 
uint32_t fcn_0040c0a0 (char * value) {
    rdi = value;
    if (*((rdi + 8)) != 0) {
        goto label_0;
    }
    edi = 0x4106c6;
    eax = unsetenv ();
    do {
        edx = 0;
        if (eax == 0) {
            tzset ();
            edx = 1;
        }
        eax = 1;
        return eax;
label_0:
        setenv (0x4106c6, rdi + 9, 1);
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40c0f0 */
#include <stdint.h>
 
void fcn_0040c0f0 (int64_t arg1) {
    rdi = arg1;
    if (rdi == 0) {
        goto label_0;
    }
    do {
        rbx = *(rdi);
        free (rdi);
        rdi = rbx;
    } while (rbx != 0);
    return;
label_0:
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40c120 */
#include <stdint.h>
 
uint64_t fcn_0040c120 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    rax = errno_location ();
    rbx = rax;
    r13d = *(rax);
    eax = fcn_0040c0a0 (r12);
    if (al == 0) {
        r13d = *(rbx);
    }
    fcn_0040c0f0 (r12);
    *(rbx) = r13d;
    eax = ebp;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40c170 */
#include <stdint.h>
 
uint64_t fcn_0040c170 (int64_t arg1) {
    rdi = arg1;
    if (rdi == 0) {
        goto label_0;
    }
    r12 = rdi;
    strlen (rdi);
    edi = 0x76;
    rbp = rax + 1;
    if (rbp >= 0x76) {
        rdi = rbp;
    }
    rdi += 0x11;
    rdi &= 0xfffffffffffffff8;
    rax = malloc (rdi);
    rbx = rax;
    if (rax == 0) {
        goto label_1;
    }
    *(rax) = 0;
    eax = 1;
    *((rbx + 8)) = ax;
    memcpy (rbx + 9, r12, rbp);
    *((rbx + rbp + 9)) = 0;
    do {
label_1:
        rax = rbx;
        return rax;
label_0:
        rax = malloc (0x80);
        rbx = rax;
    } while (rax == 0);
    edx = 0;
    *(rbx) = 0;
    rax = rbx;
    *((rbx + 8)) = dx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40c200 */
#include <stdint.h>
 
int64_t fcn_0040c200 (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = *((rsi + 0x30));
    if (r12 == 0) {
        goto label_4;
    }
    r13 = rsi;
    if (rsi <= r12) {
        rdx = rsi + 0x38;
        eax = 1;
        if (r12 < rdx) {
            goto label_2;
        }
    }
    rbx = rbp + 9;
    if (*(r12) == 0) {
        goto label_5;
    }
    do {
label_0:
        eax = strcmp (rbx, r12);
        if (eax == 0) {
            goto label_3;
        }
label_1:
        if (*(rbx) == 0) {
            r14 = rbp + 9;
            if (r14 != rbx) {
                goto label_6;
            }
            if (*((rbp + 8)) == 0) {
                goto label_7;
            }
        }
        strlen (rbx);
        rbx = rbx + rax + 1;
    } while (*(rbx) != 0);
    rax = *(rbp);
    if (rax == 0) {
        goto label_0;
    }
    rbx = rax + 9;
    eax = strcmp (rbx, r12);
    if (eax != 0) {
        goto label_1;
    }
    do {
label_3:
        *((r13 + 0x30)) = rbx;
        eax = 1;
label_2:
        return rax;
label_5:
        ebx = 0x4137e7;
    } while (1);
label_4:
    eax = 1;
    return rax;
label_6:
    strlen (r12);
    r15 = rax + 1;
    rax = rbx;
    rax -= r14;
    rdx = rax;
    rdx = ~rdx;
    if (rdx < r15) {
        errno_location ();
        *(rax) = 0xc;
        eax = 0;
        goto label_2;
label_7:
        eax = strlen (r12);
        r15 = rax + 1;
        eax = 0;
    }
    rax += r15;
    if (rax <= 0x76) {
        memcpy (rbx, r12, r15);
        *((rbx + r15)) = 0;
        goto label_3;
    }
    rax = fcn_0040c170 (r12);
    *(rbp) = rax;
    if (rax != 0) {
        *((rax + 8)) = 0;
        rbx = rax + 9;
        goto label_3;
    }
    eax = 0;
    goto label_2;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40c380 */
#include <stdint.h>
 
uint64_t fcn_0040c380 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    rax = getenv (0x4106c6);
    if (rax == 0) {
        goto label_1;
    }
    while (eax != 0) {
label_0:
        rax = fcn_0040c170 (rbp);
        rbx = rax;
        if (rax != 0) {
            al = fcn_0040c0a0 (r12);
            if (al == 0) {
                goto label_2;
            }
        }
        rax = rbx;
        return rax;
        ebx = 1;
        eax = strcmp (r12 + 9, rax);
    }
    rax = rbx;
    return rax;
label_1:
    ebx = 1;
    if (*((r12 + 8)) != 0) {
        goto label_0;
    }
    rax = rbx;
    return rax;
label_2:
    rax = errno_location ();
    r12d = *(rax);
    if (rbx != 1) {
        fcn_0040c0f0 (rbx);
    }
    ebx = 0;
    *(rbp) = r12d;
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40c450 */
#include <stdint.h>
 
uint64_t fcn_0040c450 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rsi;
    if (rdi == 0) {
        goto label_1;
    }
    rbx = rdx;
    rax = fcn_0040c380 (rdi);
    r13 = rax;
    if (rax == 0) {
        goto label_0;
    }
    rsi = rbx;
    rdi = r12;
    rax = localtime_r ();
    if (rax == 0) {
        goto label_2;
    }
    al = fcn_0040c200 (rbp, rbx);
    if (al == 0) {
        goto label_2;
    }
    while (al != 0) {
        rax = rbx;
        return rax;
label_2:
        if (r13 != 1) {
            eax = fcn_0040c120 (r13);
        }
label_0:
        eax = 0;
        return rax;
        al = fcn_0040c120 (r13);
    }
    goto label_0;
label_1:
    rdi = r12;
    rsi = rdx;
    return gmtime_r ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40c500 */
#include <stdint.h>
 
uint64_t fcn_0040c500 (tm * arg1, char * arg2) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_14h;
    int64_t var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_24h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rbx = rsi;
    if (rdi == 0) {
        goto label_3;
    }
    rax = fcn_0040c380 (rdi);
    r12 = rax;
    if (rax == 0) {
        goto label_4;
    }
    rax = fcn_0040d6b0 (rbx);
    *((rsp + 8)) = rax;
    if (rax == -1) {
        goto label_5;
    }
label_1:
    al = fcn_0040c200 (rbp, rbx);
    if (al != 0) {
        goto label_0;
    }
    *((rsp + 8)) = 0xffffffffffffffff;
    do {
label_0:
        if (r12 != 1) {
            al = fcn_0040c120 (r12);
            if (al == 0) {
                goto label_4;
            }
        }
        rax = *((rsp + 8));
label_2:
        return rax;
label_5:
        rsi = rsp + 0x10;
        rdi = rsp + 8;
        rax = localtime_r ();
    } while (rax == 0);
    eax = *((rbx + 0x20));
    edx = *((rsp + 0x30));
    sil = (eax == 0) ? 1 : 0;
    cl = (edx == 0) ? 1 : 0;
    if (sil == cl) {
        goto label_6;
    }
    if (eax < 0) {
        goto label_6;
    }
    if (edx >= 0) {
        goto label_0;
    }
label_6:
    eax = *((rbx + 0x10));
    edx = *((rbx + 0x14));
    eax ^= *((rsp + 0x20));
    edx ^= *((rsp + 0x24));
    eax |= edx;
    edx = *((rbx + 0xc));
    edx ^= *((rsp + 0x1c));
    eax |= edx;
    edx = *((rbx + 8));
    edx ^= *((rsp + 0x18));
    eax |= edx;
    edx = *((rbx + 4));
    edx ^= *((rsp + 0x14));
    eax |= edx;
    edx = *(rbx);
    edx ^= *((rsp + 0x10));
    eax |= edx;
    if (eax == 0) {
        goto label_1;
    }
    goto label_0;
label_3:
    fcn_0040c620 (rsi);
    return rax;
label_4:
    rax = 0xffffffffffffffff;
    goto label_2;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40c620 */
#include <stdint.h>
 
void fcn_0040c620 (int64_t arg1) {
    rdi = arg1;
    *((rdi + 0x20)) = 0;
    edx = 0x617618;
    esi = imp.gmtime_r;
    return void (*0x40d270)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40c640 */
#include <stdint.h>
 
uint64_t fcn_0040c640 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_0040ced0 (rbp);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40c6a0 */
#include <stdint.h>
 
uint64_t fcn_0040c6a0 (int64_t arg_60h, int64_t arg3, int32_t oflag, const char * path) {
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
        fcn_0040ccc0 (eax);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40c6f0 */
#include <stdint.h>
 
uint64_t fcn_0040c6f0 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x413870;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40c750 */
#include <stdint.h>
 
uint64_t fcn_0040c750 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x4137e7;
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
        r15d = 0x4137e7;
label_2:
        *(0x00617620) = r15;
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
        r15d = 0x4137e7;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x4120a7;
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
    fcn_0040ced0 (rbx);
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
        r15d = 0x4137e7;
        rbx = rax;
        free (r15);
        fcn_0040ced0 (r13);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40ccc0 */
#include <stdint.h>
 
uint64_t fcn_0040ccc0 (uint32_t arg1) {
    rdi = arg1;
    ebx = edi;
    if (edi > 2) {
        eax = ebx;
        return eax;
    }
    eax = fcn_0040d730 (rdi, rsi, rdx);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40cd10 */
#include <stdint.h>
 
uint64_t fcn_0040cd10 (int64_t arg1, int64_t arg2, int64_t arg7) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    xmm0 = arg7;
    __asm ("movdqu xmm0, xmmword [rsi]");
    __asm ("movups xmmword [rsp + 8], xmm0");
    r15 = *((rsi + 0x10));
    *((rsp + 0x18)) = r15;
    if (rdi == 0) {
        goto label_2;
    }
    r13 = rdi;
    r12 = rsi;
    ebx = 0;
    r14 = 0xffffffffffffffff;
    while (eax <= 0x2f) {
        edx = eax;
        eax += 8;
        *((rsp + 8)) = eax;
        rdx += r15;
label_0:
        rax = strlen (*(rdx));
        rbx += rax;
        if (rbx < 0) {
            rbx = r14;
        }
        rbp--;
        if (rbp == 0) {
            goto label_3;
        }
        eax = *((rsp + 8));
    }
    rdx = *((rsp + 0x10));
    rax = rdx + 8;
    *((rsp + 0x10)) = rax;
    goto label_0;
label_3:
    if (rbx > 0x7fffffff) {
        goto label_4;
    }
    rax = fcn_00409560 (rbx + 1);
    rbx = rax;
    while (eax <= 0x2f) {
        edx = eax;
        eax += 8;
        rdx += *((r12 + 0x10));
        *(r12) = eax;
label_1:
        r15 = *(rdx);
        rax = strlen (*(rdx));
        r14 = rax;
        memcpy (rbx, r15, rax);
        rbx += r14;
        r13--;
        if (r13 == 0) {
            goto label_5;
        }
        eax = *(r12);
    }
    rdx = *((r12 + 8));
    rax = rdx + 8;
    *((r12 + 8)) = rax;
    goto label_1;
label_2:
    rax = fcn_00409560 (1);
    rbx = rax;
label_5:
    *(rbx) = 0;
    do {
        rax = rbp;
        return rax;
label_4:
        errno_location ();
        ebp = 0;
        *(rax) = 0x4b;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40ce40 */
#include <stdint.h>
 
uint64_t fcn_0040ce40 (uint32_t arg1, int64_t arg2) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    eax = *(rdi);
    if (al == 0) {
        goto label_0;
    }
    if (al != 0x25) {
        goto label_1;
    }
    if (*((rdi + 1)) != 0x73) {
        goto label_1;
    }
    eax = 0;
    while (cl != 0) {
        if (cl != 0x25) {
            goto label_1;
        }
        if (*((rdi + rax*2 + 1)) != 0x73) {
            goto label_1;
        }
        rax++;
        ecx = *((rdi + rax*2));
    }
    do {
        fcn_0040cd10 (rax, rsi, rdx);
        return rax;
label_1:
        eax = fcn_0040d6d0 (rsp + 8, rdi, rsi);
        if (eax >= 0) {
            rax = *((rsp + 8));
            return rax;
        }
        rax = errno_location ();
        if (*(rax) == 0xc) {
            goto label_2;
        }
        eax = 0;
        return rax;
label_0:
        eax = 0;
    } while (1);
label_2:
    return fcn_004097b0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40ced0 */
#include <stdint.h>
 
uint64_t fcn_0040ced0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_0040cf50 (rbx);
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
    void (*0x401ee0)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40cf50 */
#include <stdint.h>
 
uint32_t fcn_0040cf50 (int64_t arg1) {
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
    void (*0x402160)() ();
label_1:
    fcn_0040cf90 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40cf90 */
#include <stdint.h>
 
int64_t fcn_0040cf90 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
        void (*0x402280)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40cff0 */
#include <stdint.h>
 
uint64_t fcn_0040cff0 (int64_t arg_20h, int64_t arg_28h, int64_t arg_30h, int64_t arg_38h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r10 = rdi;
    eax = 0;
    r11 = (int64_t) edx;
    r10 >>= 2;
    rcx = (int64_t) ecx;
    r8 = (int64_t) r8d;
    rbx = (int64_t) r9d;
    r10d += 0x1db;
    r12 = rbx;
    al = ((dil & 3) == 0) ? 1 : 0;
    r12 >>= 2;
    r10d -= eax;
    eax = 0;
    r12d += 0x1db;
    r9d &= 3;
    r9d = 0x51eb851f;
    al = (r9d == 0) ? 1 : 0;
    rdi -= rbx;
    r12d -= eax;
    eax = r10d;
    edx:eax = eax * r9d;
    eax = r10d;
    eax >>= 0x1f;
    edx >>= 3;
    edx = r10d;
    r10d -= r12d;
    ebp -= eax;
    eax = rbp + rbp*4;
    eax = rax * 5;
    edx -= eax;
    eax = edx;
    eax >>= 0x1f;
    ebp -= eax;
    eax = r12d;
    edx:eax = eax * r9d;
    eax = r12d;
    r9d = r12d;
    eax >>= 0x1f;
    edx >>= 3;
    edx -= eax;
    eax = rdx * 5;
    eax = rax * 5;
    r9d -= eax;
    eax = r9d;
    eax >>= 0x1f;
    edx -= eax;
    eax = ebp;
    eax -= edx;
    rdx = (int64_t) edx;
    r10d -= eax;
    rdx >>= 2;
    eax = r10d;
    r10 = (int64_t) ebp;
    r10 >>= 2;
    r10d -= edx;
    rdx = *((rsp + 0x28));
    r10d += eax;
    rax = rdi * 9;
    rax = rdi + rax*8;
    r10 = (int64_t) r10d;
    rax *= 5;
    rsi += rax;
    rax = *((rsp + 0x20));
    rsi -= rax;
    rsi += r10;
    rax = rsi * 3;
    rax = r11 + rax*8;
    rax -= rdx;
    rdx = rax;
    rdx <<= 4;
    rdx -= rax;
    rax = rcx + rdx*4;
    rdx = *((rsp + 0x30));
    rax -= rdx;
    rdx = rax;
    rdx <<= 4;
    rdx -= rax;
    rax = r8 + rdx*4;
    rdx = *((rsp + 0x38));
    r12 = rbx;
    rax -= rdx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40d110 */
#include <stdint.h>
 
int64_t fcn_0040d110 (int64_t arg_10h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rax = *((rsp + 0x10));
    rbx = r9;
    if (rax != 0) {
        r9d = *(rax);
        r9d = *((rax + 4));
        r9d = *((rax + 8));
        r9d = *((rax + 0x1c));
        rax = fcn_0040cff0 (rdi, rsi, rdx, rcx, r8, *((rax + 0x14)));
        rax += rbx;
        if (rax overflow 0) {
            goto label_0;
        }
        return rax;
    }
label_0:
    if (rbx >= 0) {
        rcx = 0x7ffffffffffffffd;
        rdx = rbx - 1;
        rax = 0x7fffffffffffffff;
        if (rbx > rcx) {
            rax = rdx;
        }
        return rax;
    }
    rax = 0x8000000000000002;
    if (rbx < rax) {
        rax = rbx + 1;
        return rax;
    }
    rax = 0x8000000000000000;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40d1b0 */
#include <stdint.h>
 
int64_t fcn_0040d1b0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = rdx;
    r12 = rdi;
    rbx = rsi;
    rax = *(rsi);
    rsi = rdx;
    rdi = rsp + 8;
    rax = void (*r12)(uint64_t, uint64_t, uint64_t, uint64_t) (rbx, rbp, r12, r13);
    while (1) {
label_1:
        return rax;
        r14 = *(rbx);
        ebp = 0;
        if (r14 != 0) {
            goto label_2;
        }
    }
    do {
label_0:
label_2:
        rdx = r14;
        rbx >>= 1;
        rdx >>= 1;
        rdx += rbx;
        rbx = rbp;
        rbx |= r14;
        ebx &= 1;
        rbx += rdx;
        if (rbp != rbx) {
            if (r14 != rbx) {
                goto label_3;
            }
        }
        rsi = r13;
        rdi = rsp + 8;
        rax = void (*r12)(uint64_t) (rbx);
    } while (rax != 0);
    r14 = rbx;
    rbx = rbp;
    goto label_0;
label_3:
    if (rax != 0) {
        goto label_1;
    }
    if (rbp == 0) {
        goto label_1;
    }
    rsi = r13;
    rdi = rsp + 8;
    void (*r12)(uint64_t) (rbp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40d6b0 */
#include <stdint.h>
 
int64_t fcn_0040d6b0 (int64_t arg1) {
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_44h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_90h;
    int64_t var_a0h;
    int64_t var_c0h;
    rdi = arg1;
label_6:
    r14 = rdi;
    eax = *(rdi);
    *((rsp + 0x10)) = rsi;
    rsi = *((rdi + 0xc));
    *((rsp + 0x40)) = eax;
    eax = *((rdi + 4));
    *((rsp + 0x30)) = rdx;
    edx = 0x2aaaaaab;
    *((rsp + 0xc)) = eax;
    eax = *((rdi + 8));
    edi = *((rdi + 0x10));
    *((rsp + 0x18)) = eax;
    eax = *((r14 + 0x20));
    *((rsp + 0x28)) = eax;
    eax = edi;
    edx:eax = eax * edx;
    eax = edi;
    eax >>= 0x1f;
    edx >>= 1;
    ecx = edx;
    edx = 0;
    ecx -= eax;
    eax = rcx * 3;
    ebx = ecx;
    eax <<= 2;
    edi -= eax;
    eax = edi;
    ecx = edi;
    eax >>= 0x1f;
    ebx -= eax;
    rax = *((r14 + 0x14));
    rbx = (int64_t) ebx;
    rbx += rax;
    if ((bl & 3) == 0) {
        rdx = 0xa3d70a3d70a3d70b;
        rax = rbx;
        rdx:rax = rax * rdx;
        rax = rdx + rbx;
        rdx = rbx;
        rdx >>= 0x3f;
        rax >>= 6;
        rax -= rdx;
        rdx = rax * 5;
        rdi = rdx * 5;
        edx = 1;
        rdi <<= 2;
        if (rbx == rdi) {
            goto label_7;
        }
    }
label_1:
    eax = ecx;
    r12d = 0x3b;
    rdi = rbx;
    eax >>= 0x1f;
    r9d = 0x46;
    eax &= 0xc;
    ecx += eax;
    rax = (int64_t) edx;
    rdx = rax + rax;
    rcx = (int64_t) ecx;
    rdx += rax;
    rax = rax + rdx*4;
    rcx += rax;
    eax = *((rcx + rcx + 0x413900));
    eax--;
    rax = (int64_t) eax;
    rsi += rax;
    eax = *((rsp + 0x40));
    *((rsp + 0x20)) = rsi;
    if (eax <= 0x3b) {
        r12d = eax;
    }
    eax = 0;
    __asm ("cmovns eax, r12d");
    *((rsp + 0x1c)) = eax;
    r8d = eax;
    rax = *((rsp + 0x30));
    rax = *(rax);
    *((rsp + 0x38)) = rax;
    eax = *((rsp + 0x38));
    eax = -eax;
    *((rsp + 0x44)) = eax;
    rax = fcn_0040cff0 (rdi, rsi, *((rsp + 0x38)), *((rsp + 0x2c)), r8d, r9);
    r13 = rax;
    *((rsp + 0x38)) = rax;
    *((rsp + 0x50)) = rax;
    eax = 0;
    *((rsp + 0x48)) = r14;
    r12d = eax;
    r14 = r13;
    while (r15 != r13) {
label_0:
        ebp--;
        if (ebp == 0) {
            goto label_8;
        }
        r8d = *((rsp + 0x80));
        *((rsp + 0x50)) = rax;
        r12d = 0;
        r13 = r14;
        r14 = r15;
        r12b = (r8d != 0) ? 1 : 0;
        rax = fcn_0040d1b0 (*((rsp + 0x10)), rsp + 0x50, rsp + 0x60);
        r15 = *((rsp + 0x50));
        rax = fcn_0040d110 (rbx, *((rsp + 0x30)), *((rsp + 0x28)), *((rsp + 0x1c)), *((rsp + 0x2c)), r15);
        if (r15 == rax) {
            goto label_9;
        }
    }
    if (r15 == r14) {
        goto label_0;
    }
    r10d = *((rsp + 0x80));
    if (r10d < 0) {
        goto label_2;
    }
    r9d = *((rsp + 0x28));
    dl = (r10d != 0) ? 1 : 0;
    if (r9d < 0) {
        goto label_10;
    }
    cl = (r9d != 0) ? 1 : 0;
    if (cl == dl) {
        goto label_0;
    }
label_2:
    r14 = *((rsp + 0x48));
    rax = r15;
label_3:
    rdx = *((rsp + 0x44));
    rcx = rax;
    rdx += *((rsp + 0x38));
    rcx -= rdx;
    esi = *((rsp + 0x60));
    edi = *((rsp + 0x40));
    rdx = rcx;
    rcx = *((rsp + 0x30));
    *(rcx) = rdx;
    if (esi != edi) {
        r12 = *((rsp + 0x1c));
        cl = (edi <= 0) ? 1 : 0;
        edx = 0;
        dl = (esi == 0x3c) ? 1 : 0;
        rdx &= rcx;
        rcx = rdx;
        rdx = (int64_t) edi;
        rcx -= r12;
        rdx += rcx;
        rax += rdx;
        *((rsp + 0x50)) = rax;
        if (rax overflow 0) {
            goto label_8;
        }
        rsi = rsp + 0x60;
        rdi = rsp + 0xa0;
        rax = *((rsp + 0x10));
        rax = void (*rax)(uint64_t) (rax);
        if (rax == 0) {
            goto label_8;
        }
        rax = *((rsp + 0x50));
    }
    __asm ("movdqa xmm0, xmmword [rsp + 0x60]");
    __asm ("movdqa xmm1, xmmword [rsp + 0x70]");
    __asm ("movdqa xmm2, xmmword [rsp + 0x80]");
    rdx = *((rsp + 0x90));
    __asm ("movups xmmword [r14], xmm0");
    __asm ("movups xmmword [r14 + 0x10], xmm1");
    __asm ("movups xmmword [r14 + 0x20], xmm2");
    *((r14 + 0x30)) = rdx;
    goto label_11;
label_8:
    rax = 0xffffffffffffffff;
label_11:
    return rax;
label_7:
    eax &= 3;
    edx = 0;
    dl = (rax == 1) ? 1 : 0;
    goto label_1;
label_10:
    edx = (int32_t) dl;
    if (edx < r12d) {
        goto label_0;
    }
    goto label_2;
label_9:
    esi = *((rsp + 0x28));
    edx = *((rsp + 0x80));
    r14 = *((rsp + 0x48));
    rsp + 0x28 = (esi == 0) ? 1 : 0;
    ebp = *((rsp + 0x28));
    cl = (edx == 0) ? 1 : 0;
    if (bpl == cl) {
        goto label_3;
    }
    if (esi < 0) {
        goto label_3;
    }
    if (edx < 0) {
        goto label_3;
    }
    r13d = 0x92c70;
    *((rsp + 0x28)) = rbx;
    goto label_12;
label_4:
    r13d += 0x92c70;
    if (r13d == 0x100dc400) {
        goto label_3;
    }
label_12:
    r15d = r13d;
    ebx = r13 + r13;
    r12d = 2;
    r15d = -r15d;
    rdx = (int64_t) r15d;
    rdx += rax;
    *((rsp + 0x58)) = rdx;
    if (rdx !overflow 0) {
        goto label_13;
    }
label_5:
    r15d += ebx;
    if (r12d == 1) {
        goto label_4;
    }
    rdx = (int64_t) r15d;
    r12d = 1;
    rdx += rax;
    *((rsp + 0x58)) = rdx;
    if (rdx overflow 0) {
        goto label_5;
    }
label_13:
    fcn_0040d1b0 (*((rsp + 0x10)), rsp + 0x58, rsp + 0xa0);
    eax = *((rsp + 0xc0));
    dl = (eax == 0) ? 1 : 0;
    if (bpl != dl) {
        if (eax >= 0) {
            goto label_14;
        }
    }
    rbx = *((rsp + 0x28));
    rax = rsp + 0xa8;
    rax = fcn_0040d110 (rbx, *((rsp + 0x30)), *((rsp + 0x28)), *((rsp + 0x1c)), *((rsp + 0x2c)), *((rsp + 0x68)));
    *((rsp + 0x50)) = rax;
    fcn_0040d1b0 (*((rsp + 0x10)), rsp + 0x50, rsp + 0x60);
    rax = *((rsp + 0x50));
    goto label_3;
label_14:
    rax = *((rsp + 0x50));
    goto label_5;
    rbx = rdi;
    tzset ();
    rdi = rbx;
    edx = 0x617628;
    esi = imp.localtime_r;
    goto label_6;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40d6d0 */
#include <stdint.h>
 
uint64_t fcn_0040d6d0 (int64_t arg1, uint32_t arg2, int64_t arg3) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = rdi;
    rax = fcn_0040d880 (0, rsp + 8, rsi, rdx);
    if (rax == 0) {
        goto label_1;
    }
    rdx = *((rsp + 8));
    if (rdx > 0x7fffffff) {
        goto label_2;
    }
    *(rbx) = rax;
    eax = edx;
    do {
label_0:
        return rax;
label_2:
        free (rax);
        errno_location ();
        *(rax) = 0x4b;
        eax = 0xffffffff;
    } while (1);
label_1:
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40d730 */
#include <stdint.h>
 
uint64_t fcn_0040d730 (int64_t arg_70h, int64_t arg1, int64_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_38h;
    rdi = arg1;
    rcx = arg4;
    edx = 3;
    esi = 0;
    eax = 0;
    while (1) {
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
            *(0x00617630) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
        eax = void (*0x40d740)(uint64_t, uint64_t, uint64_t) (rdi, 0, rdx);
    }
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x00617630) != 0xffffffff) {
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
    eax = void (*0x40d740)(uint64_t, uint64_t, uint64_t) (ebp, 0, r12d);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x00617630) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40d880 */
#include <stdint.h>
 
uint64_t fcn_0040d880 (uint32_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_6ech;
    char ** var_6e8h;
    char ** var_6e0h;
    int64_t var_6d8h;
    int64_t var_6d0h;
    char ** var_6c8h;
    void * var_6c0h;
    uint32_t var_6b8h;
    char ** var_6b0h;
    void * var_6a8h;
    char ** var_6a0h;
    uint32_t var_690h;
    uint32_t var_688h;
    int64_t var_67ch;
    int64_t var_678h;
    int64_t var_674h;
    int64_t var_670h;
    int64_t var_668h;
    uint32_t var_580h;
    int64_t var_578h;
    int64_t var_570h;
    int64_t var_568h;
    int64_t var_2f0h;
    int64_t var_28h;
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
label_1:
    abort ();
    r15 = rdx;
    rbx = rcx;
    *((rbp - 0x688)) = rdi;
    *((rbp - 0x6d0)) = rsi;
    eax = fcn_0040f5c0 (r15, rbp - 0x580, rbp - 0x670);
    if (eax < 0) {
        goto label_58;
    }
    eax = fcn_0040f3a0 (rbx, rbp - 0x670);
    if (eax < 0) {
        goto label_59;
    }
    rax = *((rbp - 0x570));
    rdx = 0xffffffffffffffff;
    rax += 7;
    if (rax <= 6) {
        rax = rdx;
    }
    rax += *((rbp - 0x568));
    if (rax < 0) {
        goto label_60;
    }
    rdi = rax;
    rdi += 6;
    if (rdi < 0) {
        goto label_60;
    }
    if (rdi <= 0xf9f) {
        goto label_61;
    }
    if (rdi == -1) {
        goto label_60;
    }
    rax = malloc (rdi);
    *((rbp - 0x6a8)) = rax;
    if (rax == 0) {
        goto label_60;
    }
    *((rbp - 0x6d8)) = rax;
    do {
        r12d = 0;
        if (*((rbp - 0x688)) != 0) {
            rax = *((rbp - 0x6d0));
            r12 = *(rax);
        }
        r14 = *((rbp - 0x578));
        r13d = 0;
        r8 = r15;
        rbx = *((rbp - 0x688));
        *((rbp - 0x6b8)) = 0;
        r15 = r13;
        rcx = *(r14);
        if (rcx == r8) {
            goto label_62;
        }
label_2:
        rcx -= r8;
        rax = r15;
        rax += rcx;
        r13 = rax;
        if (rax < 0) {
            goto label_63;
        }
        if (r12 >= rax) {
            goto label_6;
        }
        if (r12 != 0) {
            goto label_64;
        }
        if (rax > 0xc) {
            goto label_65;
        }
        r12d = 0xc;
        dl = (rbx == *((rbp - 0x688))) ? 1 : 0;
        if (rbx != 0) {
            goto label_66;
        }
label_0:
        *((rbp - 0x6b0)) = r8;
        *((rbp - 0x6a0)) = dl;
        *((rbp - 0x690)) = rcx;
        rax = malloc (r12);
        rcx = *((rbp - 0x690));
        edx = *((rbp - 0x6a0));
        r9 = rax;
        r8 = *((rbp - 0x6b0));
        if (rax == 0) {
            goto label_5;
        }
        if (r15 == 0) {
            goto label_67;
        }
        if (dl == 0) {
            goto label_67;
        }
        *((rbp - 0x6a0)) = r8;
        *((rbp - 0x690)) = rcx;
        rax = memcpy (rax, rbx, r15);
        rcx = *((rbp - 0x690));
        r8 = *((rbp - 0x6a0));
        rbx = rax;
        goto label_6;
label_61:
        *((rbp - 0x6d8)) = 0;
        rax += 0x1d;
        rax &= 0xfffffffffffffff0;
        rax = rsp + 0xf;
        rax &= 0xfffffffffffffff0;
        *((rbp - 0x6a8)) = rax;
    } while (1);
    if (rax < 0) {
label_64:
        goto label_5;
    }
    r12 += r12;
    if (r12 < rax) {
label_65:
        if (rax == -1) {
            goto label_5;
        }
        r12 = rax;
    }
    dl = (rbx == *((rbp - 0x688))) ? 1 : 0;
    if (rbx == 0) {
        goto label_0;
    }
label_66:
    if (dl != 0) {
        goto label_0;
    }
    *((rbp - 0x6a0)) = r8;
    *((rbp - 0x690)) = rcx;
    rax = realloc (rbx, r12);
    if (rax == 0) {
        goto label_37;
    }
    rcx = *((rbp - 0x690));
    r8 = *((rbp - 0x6a0));
    rbx = rax;
label_6:
    memcpy (rbx + r15, r8, rcx);
label_3:
    rax = *((rbp - 0x6b8));
    if (*((rbp - 0x580)) == rax) {
        goto label_68;
    }
    r15d = *((r14 + 0x48));
    rax = *((r14 + 0x50));
    if (r15b == 0x25) {
        goto label_69;
    }
    if (rax == -1) {
        goto label_34;
    }
    r8 = *((rbp - 0x668));
    rax <<= 5;
    rdx = r8 + rax;
    eax = *(rdx);
    *((rbp - 0x690)) = eax;
    if (r15b == 0x6e) {
        goto label_70;
    }
    eax = r15d;
    eax &= 0xffffffdf;
    ecx = rax - 0x45;
    if (cl > 2) {
        if (al != 0x41) {
            goto label_71;
        }
    }
    if (*((rbp - 0x690)) == 0xc) {
        goto label_72;
    }
    goto label_71;
label_8:
    fp_stack++;
    goto label_71;
label_9:
    fp_stack++;
label_71:
    rsi = *((rbp - 0x6a8));
    eax = *((r14 + 0x10));
    r15 = rsi + 1;
    *(rsi) = 0x25;
    if ((al & 1) != 0) {
        rdi = *((rbp - 0x6a8));
        *((rdi + 1)) = 0x27;
        r15 = rdi + 2;
    }
    if ((al & 2) != 0) {
        *(r15) = 0x2d;
        r15++;
    }
    if ((al & 4) != 0) {
        *(r15) = 0x2b;
        r15++;
    }
    if ((al & 8) != 0) {
        *(r15) = 0x20;
        r15++;
    }
    if ((al & 0x10) != 0) {
        *(r15) = 0x23;
        r15++;
    }
    if ((al & 0x40) != 0) {
        *(r15) = 0x49;
        r15++;
    }
    if ((al & 0x20) != 0) {
        *(r15) = 0x30;
        r15++;
    }
    rsi = *((r14 + 0x18));
    rdx = *((r14 + 0x20));
    if (rsi != rdx) {
        rcx = rdx;
        *((rbp - 0x6b0)) = r8;
        rcx -= rsi;
        rdx = rcx;
        *((rbp - 0x6a0)) = rcx;
        memcpy (r15, rsi, rdx);
        rcx = *((rbp - 0x6a0));
        r8 = *((rbp - 0x6b0));
        r15 += rcx;
    }
    rsi = *((r14 + 0x30));
    rdx = *((r14 + 0x38));
    if (rsi != rdx) {
        rcx = rdx;
        *((rbp - 0x6b0)) = r8;
        rcx -= rsi;
        rdx = rcx;
        *((rbp - 0x6a0)) = rcx;
        memcpy (r15, rsi, rdx);
        rcx = *((rbp - 0x6a0));
        r8 = *((rbp - 0x6b0));
        r15 += rcx;
    }
    esi = *((rbp - 0x690));
    if (esi <= 0x10) {
        eax = 1;
        ecx = esi;
        rax <<= cl;
        if ((eax & 0x14180) != 0) {
            goto label_73;
        }
        if ((ah & 0x10) != 0) {
            goto label_74;
        }
        if ((ah & 6) != 0) {
            goto label_75;
        }
    }
label_12:
    eax = *((r14 + 0x48));
    *((r15 + 1)) = 0;
    *(r15) = al;
    rax = *((r14 + 0x28));
    if (rax == -1) {
        goto label_76;
    }
    rax <<= 5;
    rax += r8;
    if (*(rax) != 5) {
        goto label_34;
    }
    *((rbp - 0x6b0)) = 1;
    eax = *((rax + 0x10));
    *((rbp - 0x678)) = eax;
label_28:
    rax = *((r14 + 0x40));
    if (rax != -1) {
        rax <<= 5;
        r8 += rax;
        if (*(r8) != 5) {
            goto label_34;
        }
        eax = *((rbp - 0x6b0));
        edx = *((r8 + 0x10));
        *((rbp + rax*4 - 0x678)) = edx;
        eax = rax + 1;
        *((rbp - 0x6b0)) = eax;
    }
    rax = r13;
    rax += 2;
    if (rax < 0) {
        goto label_77;
    }
    if (r12 >= rax) {
        goto label_78;
    }
    if (r12 != 0) {
        goto label_79;
    }
    if (rax > 0xc) {
        goto label_80;
    }
    r12d = 0xc;
label_20:
    dl = (rbx == *((rbp - 0x688))) ? 1 : 0;
    if (rbx == 0) {
        goto label_81;
    }
    if (dl != 0) {
        goto label_81;
    }
    rax = realloc (rbx, r12);
    r11 = rax;
    if (rax == 0) {
        goto label_5;
    }
label_30:
    *((r11 + r13)) = 0;
    *((rbp - 0x6c0)) = r11;
    rax = errno_location ();
    r11 = *((rbp - 0x6c0));
    *((rbp - 0x6c0)) = r15;
    *((rbp - 0x6a0)) = rax;
    eax = *(rax);
    *((rbp - 0x6e0)) = eax;
label_14:
    rax = *((rbp - 0x6a0));
    r15 = r12;
    ebx = 0x7fffffff;
    *((rbp - 0x67c)) = 0xffffffff;
    r15 -= r13;
    *(rax) = 0;
    eax = *((rbp - 0x690));
    if (r15 <= 0x7fffffff) {
        rbx = r15;
    }
    if (eax > 0x11) {
        goto label_1;
    }
    /* switch table (18 cases) at 0x413938 */
label_43:
    if (rdi != rdx) {
        goto label_82;
    }
label_42:
    r10 = rcx;
label_10:
    rdx = *((r14 + 0x30));
    rcx = *((r14 + 0x38));
    if (rdx == rcx) {
        goto label_83;
    }
    rsi = *((r14 + 0x40));
    if (rsi == -1) {
        goto label_84;
    }
    rsi <<= 5;
    r8 += rsi;
    if (*(r8) != 5) {
        goto label_85;
    }
    rdx = *((r8 + 0x10));
    if (edx < 0) {
        goto label_83;
    }
label_44:
    if (rdx == 0) {
        goto label_86;
    }
    rax = rdx;
    rax += 0xc;
    rcx = rax;
    if (rax >= 0) {
        goto label_51;
    }
    fp_stack++;
    goto label_5;
label_21:
    fp_stack++;
    goto label_5;
label_22:
    fp_stack++;
    goto label_5;
label_46:
    fp_stack++;
    goto label_5;
label_47:
    fp_stack++;
label_5:
    rax = errno_location ();
    r15 = rbx;
    *((rbp - 0x6a0)) = rax;
label_23:
    if (r15 != *((rbp - 0x688))) {
        if (r15 != 0) {
            goto label_87;
        }
    }
label_13:
    rax = *((rbp - 0x6d8));
    if (rax == 0) {
        goto label_60;
    }
    free (rax);
label_4:
    rax = rbp - 0x580;
    rdi = *((rbp - 0x578));
    rax += 0x20;
    if (rdi != rax) {
        free (rdi);
    }
    rax = rbp - 0x670;
    rdi = *((rbp - 0x668));
    rax += 0x10;
    if (rdi != rax) {
        free (rdi);
    }
    rax = *((rbp - 0x6a0));
    ebx = 0;
    *(rax) = 0xc;
label_7:
    rsp = rbp - 0x28;
    rax = rbx;
    return rax;
label_69:
    if (rax != -1) {
        goto label_34;
    }
    rax = r13;
    rax++;
    r15 = rax;
    if (rax < 0) {
        goto label_88;
    }
    if (r12 < rax) {
        if (r12 != 0) {
            goto label_89;
        }
        if (rax > 0xc) {
            goto label_90;
        }
        r12d = 0xc;
label_31:
        dl = (rbx == *((rbp - 0x688))) ? 1 : 0;
        if (rbx == 0) {
            goto label_91;
        }
        if (dl != 0) {
            goto label_91;
        }
        rax = realloc (rbx, r12);
        if (rax == 0) {
            goto label_37;
        }
        rbx = rax;
    }
label_29:
    *((rbx + r13)) = 0x25;
label_11:
    r8 = *((r14 + 8));
    r14 += 0x58;
    rcx = *(r14);
    *((rbp - 0x6b8))++;
    if (rcx != r8) {
        goto label_2;
    }
label_62:
    r13 = r15;
    goto label_3;
label_60:
    rax = errno_location ();
    *((rbp - 0x6a0)) = rax;
    goto label_4;
label_63:
    if (r12 != -1) {
        goto label_5;
    }
    r13 = 0xffffffffffffffff;
    goto label_6;
label_70:
    eax -= 0x12;
    if (eax > 4) {
        goto label_1;
    }
    /* switch table (5 cases) at 0x4139c8 */
label_58:
    ebx = 0;
    goto label_7;
label_72:
    *(fp_stack--) = fp_stack[?];
    if (fp_stack[0] == fp_stack[0]) {
        goto label_92;
    }
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] += fp_stack[1];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    if (fp_stack[0] == fp_stack[1]) {
        goto label_8;
    }
    if (fp_stack[0] != fp_stack[1]) {
        goto label_9;
    }
label_92:
    rdx = *((r14 + 0x18));
    rdi = *((r14 + 0x20));
    r11d = *((r14 + 0x10));
    if (rdx == rdi) {
        goto label_93;
    }
    rcx = *((r14 + 0x28));
    if (rcx == -1) {
        goto label_94;
    }
    rcx <<= 5;
    rcx += r8;
    if (*(rcx) != 5) {
        goto label_95;
    }
    r10 = *((rcx + 0x10));
    if (r10d >= 0) {
        goto label_10;
    }
    r11d |= 2;
    r10 = -r10;
    goto label_10;
    rax = *((rdx + 0x10));
    r15 = r13;
    *(rax) = r13;
    goto label_11;
label_75:
    *(r15) = 0x6c;
    r15++;
label_73:
    *(r15) = 0x6c;
    r15++;
    goto label_12;
label_37:
    rax = errno_location ();
    r15 = rbx;
    *((rbp - 0x6a0)) = rax;
label_87:
    free (r15);
    goto label_13;
    rax = *((r14 + 0x50));
    rdi = r11 + r13;
    rax <<= 5;
    rax += *((rbp - 0x668));
    r9 = *((rax + 0x10));
    eax = *((rbp - 0x6b0));
    *((rbp - 0x6c8)) = r11;
    if (eax == 1) {
        goto label_96;
    }
    if (eax == 2) {
        goto label_97;
    }
    rax = rbp - 0x67c;
label_17:
    r8 = *((rbp - 0x6a8));
    rsi = rbx;
    edx = 1;
    eax = 0;
    rcx = 0xffffffffffffffff;
    eax = snprintf_chk ();
    r11 = *((rbp - 0x6c8));
label_19:
    edx = *((rbp - 0x67c));
    if (edx < 0) {
        goto label_98;
    }
label_15:
    rcx = (int64_t) edx;
    if (rcx < rbx) {
        rcx += r11;
        if (*((rcx + r13)) != 0) {
            goto label_34;
        }
    }
    if (edx < eax) {
label_16:
        *((rbp - 0x67c)) = eax;
        edx = eax;
    }
    eax = rdx + 1;
    if (rax < rbx) {
        goto label_99;
    }
    if (r15 > 0x7ffffffe) {
        goto label_100;
    }
    eax = rdx + 2;
    ecx = 0;
    rax += r13;
    cl = (rax < 0) ? 1 : 0;
    if (r12 < 0) {
        goto label_101;
    }
    rdx = r12 + r12;
    if (rcx != 0) {
        goto label_24;
    }
    if (rdx >= rax) {
        rax = rdx;
    }
    if (r12 >= rax) {
        goto label_14;
    }
    r12 += r12;
    if (r12 < rax) {
        goto label_102;
    }
label_25:
    bl = (r11 == *((rbp - 0x688))) ? 1 : 0;
    if (r11 == 0) {
        goto label_103;
    }
    if (bl != 0) {
        goto label_103;
    }
    rdi = r11;
    *((rbp - 0x6c8)) = r11;
    rax = realloc (rdi, r12);
    r11 = *((rbp - 0x6c8));
    if (rax == 0) {
        goto label_24;
    }
    r11 = rax;
    goto label_14;
    rax = *((r14 + 0x50));
    rax <<= 5;
    rax += *((rbp - 0x668));
    r9d = *((rax + 0x10));
label_18:
    eax = *((rbp - 0x6b0));
    rdi = r11 + r13;
    *((rbp - 0x6c8)) = r11;
    if (eax == 1) {
        goto label_104;
    }
    if (eax == 2) {
        goto label_105;
    }
    rax = rbp - 0x67c;
label_26:
    r8 = *((rbp - 0x6a8));
    rcx = 0xffffffffffffffff;
    rsi = rbx;
    eax = 0;
    edx = 1;
    eax = snprintf_chk ();
    edx = *((rbp - 0x67c));
    r11 = *((rbp - 0x6c8));
    if (edx >= 0) {
        goto label_15;
    }
label_98:
    rsi = *((rbp - 0x6c0));
    if (*((rsi + 1)) != 0) {
        goto label_106;
    }
    if (eax >= 0) {
        goto label_16;
    }
    rax = *((rbp - 0x6a0));
    r15 = r11;
    ebx = *(rax);
    if (ebx == 0) {
        eax = *((r14 + 0x48));
        ebx = 0x54;
        eax &= 0xffffffef;
        eax = 0x16;
        if (al == 0x63) {
            ebx = eax;
            goto label_107;
        }
    }
label_107:
    if (r15 != *((rbp - 0x688))) {
        if (r15 == 0) {
            goto label_108;
        }
        free (r15);
    }
label_108:
    rax = *((rbp - 0x6d8));
    if (rax != 0) {
        free (rax);
    }
    rax = rbp - 0x580;
    rdi = *((rbp - 0x578));
    rax += 0x20;
    if (rdi != rax) {
        free (rdi);
    }
    rax = rbp - 0x670;
    rdi = *((rbp - 0x668));
    rax += 0x10;
    if (rdi != rax) {
        free (rdi);
    }
    rax = *((rbp - 0x6a0));
    *(rax) = ebx;
    ebx = 0;
    goto label_7;
    rax = *((r14 + 0x50));
    rdi = r11 + r13;
    *((rbp - 0x6c8)) = r11;
    rax <<= 5;
    rax += *((rbp - 0x668));
    *(fp_stack--) = fp_stack[?];
    eax = *((rbp - 0x6b0));
    if (eax == 1) {
        goto label_109;
    }
    if (eax == 2) {
        goto label_110;
    }
    r9 = rbp - 0x67c;
    ? = fp_stack[0];
    fp_stack--;
    goto label_17;
    rax = *((r14 + 0x50));
    rax <<= 5;
    rax += *((rbp - 0x668));
    r9d = *((rax + 0x10));
    goto label_18;
    rax = *((r14 + 0x50));
    rdi = r11 + r13;
    *((rbp - 0x6c8)) = r11;
    rax <<= 5;
    rax += *((rbp - 0x668));
    xmm0 = *((rax + 0x10));
    eax = *((rbp - 0x6b0));
    if (eax == 1) {
        goto label_111;
    }
    if (eax == 2) {
        goto label_112;
    }
    r8 = *((rbp - 0x6a8));
    r9 = rbp - 0x67c;
    edx = 1;
    rsi = rbx;
    rcx = 0xffffffffffffffff;
    eax = 1;
    snprintf_chk ();
    r11 = *((rbp - 0x6c8));
    goto label_19;
    rax = *((r14 + 0x50));
    rax <<= 5;
    rax += *((rbp - 0x668));
    r9d = *((rax + 0x10));
    goto label_18;
    rax = *((r14 + 0x50));
    rax <<= 5;
    rax += *((rbp - 0x668));
    r9d = *((rax + 0x10));
    goto label_18;
    rax = *((r14 + 0x50));
    rax <<= 5;
    rax += *((rbp - 0x668));
    r9d = *((rax + 0x10));
    goto label_18;
    if (rax < 0) {
label_79:
        goto label_5;
    }
    r12 += r12;
    if (r12 >= rax) {
        goto label_20;
    }
label_80:
    if (rax == -1) {
        goto label_5;
    }
    r12 = rax;
    goto label_20;
    rax = *((rdx + 0x10));
    r15 = r13;
    *(rax) = r13d;
    goto label_11;
    rax = *((rdx + 0x10));
    r15 = r13;
    *(rax) = r13w;
    goto label_11;
    rax = *((rdx + 0x10));
    r15 = r13;
    *(rax) = r13b;
    goto label_11;
label_83:
    edx = 0x12;
    ecx = 0xc;
    eax = 6;
    if (al != 0x41) {
        rcx = rdx;
    }
    edx = 0;
    if (al != 0x41) {
        rdx = rax;
    }
label_51:
    rax = rcx;
    if (r10 >= rcx) {
        rax = r10;
    }
    rax++;
    *((rbp - 0x690)) = rax;
    if (rax < 0) {
        goto label_21;
    }
    if (rax <= 0x2bc) {
        goto label_113;
    }
    *((rbp - 0x6c8)) = r10;
    *((rbp - 0x6c0)) = rdx;
    *((rbp - 0x6b0)) = r11d;
    ? = fp_stack[0];
    fp_stack--;
    if (rax == -1) {
        goto label_5;
    }
    rax = malloc (rax);
    r11d = *((rbp - 0x6b0));
    *(fp_stack--) = fp_stack[?];
    rcx = rax;
    rdx = *((rbp - 0x6c0));
    r10 = *((rbp - 0x6c8));
    if (rax == 0) {
        goto label_22;
    }
label_33:
    if (fp_stack[0] == fp_stack[0]) {
        goto label_114;
    }
    r8d = *((rbp - 0x678));
    eax = r8d;
    ah |= 3;
    *((rbp - 0x678)) = ax;
    __asm ("fxam");
    ax = fp_status;
    if ((ah & 2) == 0) {
        goto label_115;
    }
    *(rcx) = 0x2d;
    fp_stack[0] = -fp_stack[0];
    r15 = rcx + 1;
label_35:
    *(fp_stack--) = 0.0;
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    if (fp_stack[0] <= fp_stack[1]) {
        goto label_116;
    }
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] += fp_stack[1];
    __asm ("fucompi st(1)");
    fp_stack++;
    if (fp_stack[0] != fp_stack[1]) {
        goto label_117;
    }
    goto label_34;
label_85:
    fp_stack++;
    goto label_34;
label_95:
    fp_stack++;
label_34:
    abort ();
label_101:
    if (r12 == -1) {
        goto label_14;
    }
    do {
label_24:
        r15 = r11;
        goto label_23;
label_103:
        *((rbp - 0x6c8)) = r11;
        rax = malloc (r12);
        r11 = *((rbp - 0x6c8));
        rcx = rax;
    } while (rax == 0);
    if (r13 == 0) {
        goto label_118;
    }
    if (bl == 0) {
        goto label_118;
    }
    rax = memcpy (rax, r11, r13);
    r11 = rax;
    goto label_14;
label_102:
    if (rax == -1) {
        goto label_24;
    }
    r12 = rax;
    goto label_25;
label_105:
    rax = rbp - 0x67c;
    do {
        eax = *((rbp - 0x674));
label_32:
        r9d = *((rbp - 0x678));
        edx = 1;
        rsi = rbx;
        eax = 0;
        r8 = *((rbp - 0x6a8));
        rcx = 0xffffffffffffffff;
        snprintf_chk ();
        r11 = *((rbp - 0x6c8));
        goto label_19;
label_104:
        rax = rbp - 0x67c;
label_27:
        r9d = *((rbp - 0x678));
        goto label_26;
label_97:
        rax = rbp - 0x67c;
    } while (1);
label_96:
    rax = rbp - 0x67c;
    goto label_27;
label_106:
    *((rsi + 1)) = 0;
    goto label_14;
label_118:
    r11 = rcx;
    goto label_14;
label_76:
    *((rbp - 0x6b0)) = 0;
    goto label_28;
label_88:
    if (r12 != -1) {
        goto label_5;
    }
    r15 = 0xffffffffffffffff;
    goto label_29;
label_81:
    *((rbp - 0x6a0)) = dl;
    rax = malloc (r12);
    edx = *((rbp - 0x6a0));
    r11 = rax;
    if (rax == 0) {
        goto label_5;
    }
    if (r13 == 0) {
        goto label_30;
    }
    if (dl == 0) {
        goto label_30;
    }
    rax = memcpy (rax, rbx, r13);
    r11 = rax;
    goto label_30;
label_77:
    if (r12 != -1) {
        goto label_5;
    }
label_78:
    r11 = rbx;
    goto label_30;
label_91:
    *((rbp - 0x690)) = dl;
    rax = malloc (r12);
    edx = *((rbp - 0x690));
    rcx = rax;
    if (rax == 0) {
        goto label_5;
    }
    if (r13 == 0) {
        goto label_119;
    }
    if (dl == 0) {
        goto label_119;
    }
    rax = memcpy (rax, rbx, r13);
    rbx = rax;
    goto label_29;
label_67:
    rbx = r9;
    goto label_6;
label_59:
    rax = rbp - 0x580;
    rdi = *((rbp - 0x578));
    rax += 0x20;
    if (rdi != rax) {
        free (rdi);
    }
    rax = rbp - 0x670;
    rdi = *((rbp - 0x668));
    rax += 0x10;
    if (rdi != rax) {
        free (rdi);
    }
    errno_location ();
    ebx = 0;
    *(rax) = 0x16;
    goto label_7;
    if (rdi < rax) {
label_89:
        goto label_5;
    }
    r12 += r12;
    if (r12 >= rax) {
        goto label_31;
    }
label_90:
    if (rax == -1) {
        goto label_5;
    }
    r12 = rax;
    goto label_31;
label_74:
    *(r15) = 0x4c;
    r15++;
    goto label_12;
label_112:
    rax = rbp - 0x67c;
    eax = *((rbp - 0x674));
    do {
        r9d = *((rbp - 0x678));
        r8 = *((rbp - 0x6a8));
        edx = 1;
        rsi = rbx;
        rcx = 0xffffffffffffffff;
        eax = 1;
        snprintf_chk ();
        r11 = *((rbp - 0x6c8));
        goto label_19;
label_111:
        rax = rbp - 0x67c;
    } while (1);
label_110:
    rax = rbp - 0x67c;
    r9d = *((rbp - 0x678));
    r8 = *((rbp - 0x6a8));
    eax = *((rbp - 0x674));
    edx = 1;
    rsi = rbx;
    rcx = 0xffffffffffffffff;
    ? = fp_stack[0];
    fp_stack--;
    eax = 0;
    snprintf_chk ();
    r11 = *((rbp - 0x6c8));
    goto label_19;
label_109:
    rax = rbp - 0x67c;
    ? = fp_stack[0];
    fp_stack--;
    goto label_32;
label_99:
    rax = *((rbp - 0x6a0));
    esi = *((rbp - 0x6e0));
    r15 = (int64_t) edx;
    rbx = r11;
    r15 += r13;
    *(rax) = esi;
    goto label_11;
label_100:
    if (r11 != *((rbp - 0x688))) {
        if (r11 == 0) {
            goto label_120;
        }
        free (r11);
    }
label_120:
    rax = *((rbp - 0x6d8));
    if (rax != 0) {
        free (rax);
    }
    rax = rbp - 0x580;
    rdi = *((rbp - 0x578));
    rax += 0x20;
    if (rdi != rax) {
        free (rdi);
    }
    rax = rbp - 0x670;
    rdi = *((rbp - 0x668));
    rax += 0x10;
    if (rdi != rax) {
        free (rdi);
    }
    rax = *((rbp - 0x6a0));
    ebx = 0;
    *(rax) = 0x4b;
    goto label_7;
label_113:
    rcx = rbp - 0x2f0;
    goto label_33;
label_116:
    __asm ("fucompi st(1)");
    fp_stack++;
    if (rdi == rax) {
        goto label_34;
    }
    if (rdi != rax) {
        goto label_34;
    }
    eax = *((r14 + 0x48));
    eax &= 0xffffffdf;
    if (al != 0x46) {
        goto label_121;
    }
    *(r15) = 0x30;
    if ((r11b & 0x10) != 0) {
        goto label_122;
    }
    if (rdx != 0) {
        goto label_122;
    }
label_40:
    r9 = r15 + 1;
label_36:
    *((rbp - 0x678)) = r8w;
label_50:
    r8 = r9;
    r8 -= rcx;
    if (r10 <= r8) {
        goto label_39;
    }
    r10 -= r8;
    rdi = r9 + r10;
    r8 = rdi;
    r8 -= rcx;
    if ((r11b & 2) != 0) {
        goto label_123;
    }
    r11d &= 0x20;
    if (r11d == 0) {
        goto label_124;
    }
    if (r15 == 0) {
        goto label_124;
    }
    if (r15 >= r9) {
        goto label_125;
    }
    rdx = r15 - 1;
    rax = 0xffffffffffffffff;
    rdx -= r9;
    do {
        esi = *((r9 + rax));
        *((rdi + rax)) = sil;
        rax--;
    } while (rax != rdx);
label_56:
    if (r10 == 0) {
        goto label_39;
    }
    r10 += r15;
    do {
        r15++;
        *((r15 - 1)) = 0x30;
    } while (r15 != r10);
label_39:
    if (*((rbp - 0x690)) <= r8) {
        goto label_34;
    }
    rdx = r12;
    rax = r13;
    esi = 0;
    rdx -= r13;
    rax += r8;
    sil = (rax < 0) ? 1 : 0;
    r15 = rax;
    if (rdx > r8) {
        goto label_38;
    }
    if (rsi != 0) {
        goto label_126;
    }
    if (r12 >= rax) {
        goto label_38;
    }
    if (r12 != 0) {
        goto label_127;
    }
    if (rax > 0xc) {
        goto label_128;
    }
    r12d = 0xc;
label_49:
    dl = (rbx == *((rbp - 0x688))) ? 1 : 0;
    if (rbx == 0) {
        goto label_129;
    }
    if (dl != 0) {
        goto label_129;
    }
    *((rbp - 0x6a0)) = r8;
    *((rbp - 0x690)) = rcx;
    rax = realloc (rbx, r12);
    if (rax == 0) {
        goto label_5;
    }
    rcx = *((rbp - 0x690));
    r8 = *((rbp - 0x6a0));
    rbx = rax;
label_38:
    rsi = rcx;
    *((rbp - 0x690)) = rcx;
    memcpy (rbx + r13, rsi, r8);
    rcx = *((rbp - 0x690));
    rax = rbp - 0x2f0;
    if (rcx == rax) {
        goto label_11;
    }
    al = free (rcx);
    goto label_11;
label_115:
    if ((r11b & 4) == 0) {
        goto label_130;
    }
    r15 = rcx + 1;
    *(rcx) = 0x2b;
    goto label_35;
label_119:
    rbx = rcx;
    goto label_29;
label_121:
    if (al != 0x45) {
        goto label_131;
    }
    *(r15) = 0x30;
    if ((r11b & 0x10) != 0) {
        goto label_132;
    }
    rsi = r15 + 1;
    al = (rdx != 0) ? 1 : 0;
    if (al != 0) {
        goto label_132;
    }
label_52:
    eax = *((r14 + 0x48));
    r9 = rsi + 4;
    *((rsi + 3)) = 0x30;
    *(rsi) = al;
    eax = 0x302b;
    *((rsi + 1)) = ax;
    goto label_36;
label_93:
    r10d = 0;
    goto label_10;
    if (al != 0) {
label_117:
        goto label_34;
    }
    eax = *((r14 + 0x48));
    r9 = r15 + 3;
    eax -= 0x41;
    if (al > 0x19) {
        goto label_133;
    }
    eax = 0x4e49;
    *((r15 + 2)) = 0x46;
    *(r15) = ax;
    r15d = 0;
    goto label_36;
label_68:
    r14 = r13;
    r15 = r13;
    r14++;
    if (r14 < 0) {
        goto label_134;
    }
    if (r12 >= r14) {
        goto label_53;
    }
    if (r12 != 0) {
        goto label_135;
    }
    if (r14 > 0xc) {
        goto label_136;
    }
    r12d = 0xc;
label_54:
    r13b = (rbx == *((rbp - 0x688))) ? 1 : 0;
    if (rbx == 0) {
        goto label_137;
    }
    if (r13b != 0) {
        goto label_137;
    }
    rax = realloc (rbx, r12);
    if (rax == 0) {
        goto label_37;
    }
    rbx = rax;
label_53:
    *((rbx + r15)) = 0;
    if (r12 > r14) {
        if (rbx == *((rbp - 0x688))) {
            goto label_138;
        }
        rax = realloc (rbx, r14);
        if (rax == 0) {
            rbx = rax;
            goto label_138;
        }
    }
label_138:
    rax = *((rbp - 0x6d8));
    if (rax != 0) {
        free (rax);
    }
    rax = rbp - 0x580;
    rdi = *((rbp - 0x578));
    rax += 0x20;
    if (rdi != rax) {
        free (rdi);
    }
    rax = rbp - 0x670;
    rdi = *((rbp - 0x668));
    rax += 0x10;
    if (rdi != rax) {
        free (rdi);
    }
    rax = *((rbp - 0x6d0));
    *(rax) = r15;
    goto label_7;
label_126:
    if (r12 != -1) {
        goto label_5;
    }
    goto label_38;
label_130:
    r15 = rcx;
    if ((r11b & 8) == 0) {
        goto label_35;
    }
    r15 = rcx + 1;
    *(rcx) = 0x20;
    goto label_35;
label_124:
    rdx = rcx - 1;
    rax = 0xffffffffffffffff;
    rdx -= r9;
    if (rcx >= r9) {
        goto label_139;
    }
    do {
        esi = *((r9 + rax));
        *((rdi + rax)) = sil;
        rax--;
    } while (rdx != rax);
    r9 = rcx;
label_139:
    if (r10 == 0) {
        goto label_39;
    }
    r10 += r9;
    do {
        r9++;
        *((r9 - 1)) = 0x20;
    } while (r9 != r10);
    goto label_39;
label_129:
    *((rbp - 0x6b0)) = dl;
    *((rbp - 0x6a0)) = r8;
    *((rbp - 0x690)) = rcx;
    rax = malloc (r12);
    rcx = *((rbp - 0x690));
    r8 = *((rbp - 0x6a0));
    r9 = rax;
    edx = *((rbp - 0x6b0));
    if (rax == 0) {
        goto label_5;
    }
    if (r13 == 0) {
        goto label_140;
    }
    if (dl == 0) {
        goto label_140;
    }
    *((rbp - 0x6a0)) = r8;
    *((rbp - 0x690)) = rcx;
    rax = memcpy (rax, rbx, r13);
    rcx = *((rbp - 0x690));
    r8 = *((rbp - 0x6a0));
    rbx = rax;
    goto label_38;
label_131:
    if (al != 0x47) {
        goto label_141;
    }
    *(r15) = 0x30;
    if ((r11b & 0x10) == 0) {
        goto label_40;
    }
    r9 = r15 + 2;
    if (rdx == 0) {
        goto label_142;
    }
    rsi = rdx - 1;
    *((rbp - 0x6ec)) = r8d;
    *((rbp - 0x6e8)) = r10;
    *((rbp - 0x6e0)) = r9;
    *((rbp - 0x6c8)) = rcx;
    *((rbp - 0x6c0)) = r11d;
    *((rbp - 0x6b0)) = rdx;
    *((rbp - 0x6a0)) = rsi;
    rax = nl_langinfo (0x10000);
    rsi = *((rbp - 0x6a0));
    rdx = *((rbp - 0x6b0));
    eax = *(rax);
    r11d = *((rbp - 0x6c0));
    rcx = *((rbp - 0x6c8));
    r9 = *((rbp - 0x6e0));
    r10 = *((rbp - 0x6e8));
    r8d = *((rbp - 0x6ec));
    if (al == 0) {
        goto label_143;
    }
label_57:
    *((r15 + 1)) = al;
    if (rsi == 0) {
        goto label_36;
    }
    rdx = r15 + rdx + 1;
    rax = r9;
    do {
        rax++;
        *((rax - 1)) = 0x30;
    } while (rax != rdx);
    r9 += rsi;
    goto label_36;
label_123:
    if (r10 == 0) {
        goto label_39;
    }
    do {
        r9++;
        *((r9 - 1)) = 0x20;
    } while (rdi != r9);
    goto label_39;
label_133:
    eax = 0x6e69;
    *((r15 + 2)) = 0x66;
    *(r15) = ax;
    r15d = 0;
    goto label_36;
label_122:
    r9 = r15 + 2;
    *((rbp - 0x6e8)) = r8d;
    *((rbp - 0x6e0)) = r10;
    *((rbp - 0x6c8)) = rcx;
    *((rbp - 0x6c0)) = rdx;
    *((rbp - 0x6b0)) = r11d;
    *((rbp - 0x6a0)) = r9;
    rax = nl_langinfo (0x10000);
    esi = 0x2e;
    rdx = *((rbp - 0x6c0));
    r9 = *((rbp - 0x6a0));
    eax = *(rax);
    r11d = *((rbp - 0x6b0));
    rcx = *((rbp - 0x6c8));
    r10 = *((rbp - 0x6e0));
    r8d = *((rbp - 0x6e8));
    if (al == 0) {
        eax = esi;
    }
    *((r15 + 1)) = al;
    if (rdx == 0) {
        goto label_36;
    }
    rsi = r15 + rdx + 2;
    rax = r9;
    do {
        rax++;
        *((rax - 1)) = 0x30;
    } while (rax != rsi);
    r9 += rdx;
    goto label_36;
label_94:
    r10d = 0;
    *((rbp - 0x690)) = rcx;
    goto label_144;
label_41:
    if (rdi == rdx) {
        goto label_10;
    }
label_144:
    rsi = rdx + 1;
    edx = *(rdx);
    rcx = 0x1999999999999999;
    r9 = 0xffffffffffffffff;
    edx -= 0x30;
    rdx = (int64_t) edx;
    if (r10 <= rcx) {
        r9 = r10 * 5;
        r9 += r9;
    }
    rdx += r9;
    r10 = rdx;
    rdx = rsi;
    if (rdx >= 0) {
        goto label_41;
    }
    rcx = *((rbp - 0x690));
    if (rdi == rsi) {
        goto label_42;
    }
label_82:
    rdx++;
    if (*((rdx - 1)) != 0x30) {
        goto label_43;
    }
    *((rbp - 0x690)) = rcx;
    r10 = 0xffffffffffffffff;
    goto label_41;
label_84:
    rax = rdx + 1;
    edx = 0;
    if (rcx == rax) {
        goto label_86;
    }
    rsi = rax;
    goto label_145;
label_45:
    if (rcx == rsi) {
        goto label_44;
    }
label_145:
    r9 = 0x1999999999999999;
    rdi = rsi + 1;
    esi = *(rsi);
    esi -= 0x30;
    rax = (int64_t) esi;
    rsi = 0xffffffffffffffff;
    if (rdx <= r9) {
        rsi = rdx * 5;
        rsi += rsi;
    }
    rax += rsi;
    rsi = rdi;
    rdx = rax;
    if (rax >= 0) {
        goto label_45;
    }
    if (rcx == rdi) {
        goto label_46;
    }
label_48:
    rsi = rdi + 1;
    if (*((rsi - 1)) == 0x30) {
        rdx = 0xffffffffffffffff;
        goto label_45;
    }
    if (rcx == rsi) {
        goto label_47;
    }
    rdi = rsi;
    goto label_48;
    if (rcx < rsi) {
label_127:
        goto label_5;
    }
    r12 += r12;
    if (r12 >= rax) {
        goto label_49;
    }
label_128:
    if (rax == -1) {
        goto label_5;
    }
    r12 = rax;
    goto label_49;
label_114:
    fp_stack++;
    r15d -= 0x41;
    r9 = rcx + 3;
    if (r15b > 0x19) {
        goto label_146;
    }
    eax = 0x414e;
    *((rcx + 2)) = 0x4e;
    r15d = 0;
    *(rcx) = ax;
    goto label_50;
label_86:
    ecx = 0xc;
    goto label_51;
label_141:
    if (al != 0x41) {
        goto label_34;
    }
    rax = r15 + 2;
    *(r15) = 0x30;
    *((rbp - 0x6a0)) = rax;
    eax = *((r14 + 0x48));
    *((r15 + 2)) = 0x30;
    eax += 0x17;
    *((r15 + 1)) = al;
    if ((r11b & 0x10) != 0) {
        goto label_147;
    }
    rsi = r15 + 3;
    al = (rdx != 0) ? 1 : 0;
    if (al != 0) {
        goto label_147;
    }
label_55:
    eax = *((r14 + 0x48));
    r15d = 0x302b;
    r9 = rsi + 3;
    *((rsi + 1)) = r15w;
    r15 = *((rbp - 0x6a0));
    eax += 0xf;
    *(rsi) = al;
    goto label_36;
label_132:
    rsi = r15 + 2;
    *((rbp - 0x6e8)) = r8d;
    *((rbp - 0x6e0)) = r10;
    *((rbp - 0x6c8)) = rcx;
    *((rbp - 0x6c0)) = rdx;
    *((rbp - 0x6b0)) = r11d;
    *((rbp - 0x6a0)) = rsi;
    rax = nl_langinfo (0x10000);
    edi = 0x2e;
    rdx = *((rbp - 0x6c0));
    rsi = *((rbp - 0x6a0));
    eax = *(rax);
    r11d = *((rbp - 0x6b0));
    rcx = *((rbp - 0x6c8));
    r10 = *((rbp - 0x6e0));
    r8d = *((rbp - 0x6e8));
    if (al == 0) {
        eax = edi;
    }
    *((r15 + 1)) = al;
    if (rdx == 0) {
        goto label_52;
    }
    rdi = r15 + rdx + 2;
    rax = rsi;
    do {
        rax++;
        *((rax - 1)) = 0x30;
    } while (rax != rdi);
    rsi += rdx;
    goto label_52;
label_140:
    rbx = r9;
    goto label_38;
label_146:
    eax = 0x616e;
    *((rcx + 2)) = 0x6e;
    r15d = 0;
    *(rcx) = ax;
    goto label_50;
label_137:
    rax = malloc (r12);
    rcx = rax;
    if (rax == 0) {
        goto label_5;
    }
    rdx = r15;
    if (r15 == 0) {
        goto label_148;
    }
    if (r13b == 0) {
        goto label_148;
    }
    rax = memcpy (rax, rbx, rdx);
    rbx = rax;
    goto label_53;
    if (r13b < 0) {
label_135:
        goto label_5;
    }
    r12 += r12;
    if (r12 >= r14) {
        goto label_54;
    }
label_136:
    if (r14 == -1) {
        goto label_5;
    }
    r12 = r14;
    goto label_54;
label_147:
    rsi = r15 + 4;
    *((rbp - 0x6ec)) = r8d;
    *((rbp - 0x6e8)) = r10;
    *((rbp - 0x6e0)) = rcx;
    *((rbp - 0x6c8)) = rdx;
    *((rbp - 0x6c0)) = r11d;
    *((rbp - 0x6b0)) = rsi;
    rax = nl_langinfo (0x10000);
    edi = 0x2e;
    rdx = *((rbp - 0x6c8));
    rsi = *((rbp - 0x6b0));
    eax = *(rax);
    r11d = *((rbp - 0x6c0));
    rcx = *((rbp - 0x6e0));
    r10 = *((rbp - 0x6e8));
    r8d = *((rbp - 0x6ec));
    if (al == 0) {
        eax = edi;
    }
    *((r15 + 3)) = al;
    if (rdx == 0) {
        goto label_55;
    }
    rdi = r15 + rdx + 4;
    rax = rsi;
    do {
        rax++;
        *((rax - 1)) = 0x30;
    } while (rax != rdi);
    rsi += rdx;
    goto label_55;
label_125:
    r15 = r9;
    goto label_56;
label_148:
    rbx = rcx;
    goto label_53;
label_142:
    *((rbp - 0x6e0)) = r8d;
    *((rbp - 0x6c8)) = r10;
    *((rbp - 0x6c0)) = r9;
    *((rbp - 0x6b0)) = rcx;
    *((rbp - 0x6a0)) = r11d;
    rax = nl_langinfo (0x10000);
    edx = 0x2e;
    r11d = *((rbp - 0x6a0));
    rcx = *((rbp - 0x6b0));
    eax = *(rax);
    r9 = *((rbp - 0x6c0));
    r10 = *((rbp - 0x6c8));
    r8d = *((rbp - 0x6e0));
    if (al == 0) {
        eax = edx;
    }
    *((r15 + 1)) = al;
    goto label_36;
label_143:
    eax = 0x2e;
    goto label_57;
label_134:
    if (r12 == -1) {
        goto label_53;
    }
    goto label_5;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40f3a0 */
#include <stdint.h>
 
int64_t fcn_0040f3a0 (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rsi + 8));
    if (*(rsi) == 0) {
        goto label_6;
    }
    edx = 0;
    r9d = "(NULL)";
    r8d = "(NULL)";
    do {
        if (*(rax) > 0x16) {
            goto label_7;
        }
        ecx = *(rax);
        /* switch table (23 cases) at 0x413a00 */
        ecx = *(rdi);
        if (ecx > 0x2f) {
            goto label_8;
        }
        r10d = ecx;
        ecx += 8;
        r10 += *((rdi + 0x10));
        *(rdi) = ecx;
label_1:
        rcx = *(r10);
        *((rax + 0x10)) = rcx;
label_0:
        rdx++;
        rax += 0x20;
    } while (*(rsi) > rdx);
label_6:
    eax = 0;
    return rax;
    ecx = *(rdi);
    if (ecx > 0x2f) {
        goto label_9;
    }
    r10d = ecx;
    ecx += 8;
    r10 += *((rdi + 0x10));
    *(rdi) = ecx;
    do {
        ecx = *(r10);
        *((rax + 0x10)) = ecx;
        goto label_0;
        ecx = *(rdi);
        if (ecx > 0x2f) {
            goto label_10;
        }
        r10d = ecx;
        ecx += 8;
        r10 += *((rdi + 0x10));
        *(rdi) = ecx;
label_3:
        ecx = *(r10);
        *((rax + 0x10)) = cx;
        goto label_0;
        ecx = *(rdi);
        if (ecx > 0x2f) {
            goto label_11;
        }
        r10d = ecx;
        ecx += 8;
        r10 += *((rdi + 0x10));
        *(rdi) = ecx;
label_2:
        ecx = *(r10);
        *((rax + 0x10)) = cl;
        goto label_0;
label_8:
        r10 = *((rdi + 8));
        rcx = r10 + 8;
        *((rdi + 8)) = rcx;
        goto label_1;
label_9:
        r10 = *((rdi + 8));
        rcx = r10 + 8;
        *((rdi + 8)) = rcx;
    } while (1);
label_11:
    r10 = *((rdi + 8));
    rcx = r10 + 8;
    *((rdi + 8)) = rcx;
    goto label_2;
label_10:
    r10 = *((rdi + 8));
    rcx = r10 + 8;
    *((rdi + 8)) = rcx;
    goto label_3;
    ecx = *((rdi + 4));
    if (ecx > 0xaf) {
        goto label_12;
    }
    r10d = ecx;
    ecx += 0x10;
    r10 += *((rdi + 0x10));
    *((rdi + 4)) = ecx;
label_4:
    xmm0 = *(r10);
    *((rax + 0x10)) = xmm0;
    goto label_0;
    rcx = *((rdi + 8));
    rcx += 0xf;
    rcx &= 0xfffffffffffffff0;
    r10 = rcx + 0x10;
    *((rdi + 8)) = r10;
    *(fp_stack--) = fp_stack[?];
    ? = fp_stack[0];
    fp_stack--;
    goto label_0;
    ecx = *(rdi);
    if (ecx > 0x2f) {
        goto label_13;
    }
    r10d = ecx;
    ecx += 8;
    r10 += *((rdi + 0x10));
    *(rdi) = ecx;
label_5:
    rcx = *(r10);
    if (rcx == 0) {
        rcx = r9;
    }
    *((rax + 0x10)) = rcx;
    goto label_0;
    ecx = *(rdi);
    if (ecx > 0x2f) {
        goto label_14;
    }
    r10d = ecx;
    ecx += 8;
    r10 += *((rdi + 0x10));
    *(rdi) = ecx;
    do {
        rcx = *(r10);
        if (rcx == 0) {
            rcx = r8;
        }
        *((rax + 0x10)) = rcx;
        goto label_0;
label_7:
        eax = 0xffffffff;
        return rax;
label_14:
        r10 = *((rdi + 8));
        rcx = r10 + 8;
        *((rdi + 8)) = rcx;
    } while (1);
label_12:
    r10 = *((rdi + 8));
    rcx = r10 + 8;
    *((rdi + 8)) = rcx;
    goto label_4;
label_13:
    r10 = *((rdi + 8));
    rcx = r10 + 8;
    *((rdi + 8)) = rcx;
    goto label_5;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x40f5c0 */
#include <stdint.h>
 
uint64_t fcn_0040f5c0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    void ** var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    uint32_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = rsi + 0x20;
    rax = rdx + 0x10;
    r8 = rsi;
    r15 = rdx;
    r9d = 7;
    r11d = 7;
    r10 = 0xffffffffffffffff;
    r13d = 0;
    *(rsi) = 0;
    *((rsi + 8)) = rcx;
    *((rsp + 0x28)) = rcx;
    *(rdx) = 0;
    *((rsp + 8)) = rax;
    *((rdx + 8)) = rax;
    *((rsp + 0x18)) = 0;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x20)) = 0;
    while (al != 0) {
        rbp = rdi + 1;
        if (al == 0x25) {
            goto label_32;
        }
label_3:
        rdi = rbp;
        eax = *(rdi);
    }
    rax = r13 * 5;
    rax = r13 + rax*2;
    *((rcx + rax*8)) = rdi;
    rax = *((rsp + 0x10));
    *((r8 + 0x10)) = rax;
    rax = *((rsp + 0x18));
    *((r8 + 0x18)) = rax;
    eax = 0;
label_11:
    return rax;
label_32:
    rax = r13 * 5;
    r14 = r10;
    rax = r13 + rax*2;
    r12 = rcx + rax*8;
    *(r12) = rdi;
    *((r12 + 0x10)) = 0;
    *((r12 + 0x18)) = 0;
    *((r12 + 0x20)) = 0;
    *((r12 + 0x28)) = r10;
    *((r12 + 0x30)) = 0;
    *((r12 + 0x38)) = 0;
    *((r12 + 0x40)) = r10;
    *((r12 + 0x50)) = r10;
    ebx = *((rdi + 1));
    eax = rbx - 0x30;
    if (al > 9) {
        goto label_4;
    }
    goto label_33;
    do {
        if (bl == 0x2d) {
            goto label_34;
        }
        if (bl == 0x2b) {
            goto label_35;
        }
        if (bl == 0x20) {
            goto label_36;
        }
        if (bl == 0x23) {
            goto label_37;
        }
        if (bl == 0x30) {
            goto label_38;
        }
        if (bl != 0x49) {
            goto label_39;
        }
        *((r12 + 0x10)) |= 0x40;
label_0:
        ebx = *(rcx);
label_4:
        rcx = rbp + 1;
    } while (bl != 0x27);
    *((r12 + 0x10)) |= 1;
    goto label_0;
label_34:
    *((r12 + 0x10)) |= 2;
    goto label_0;
label_35:
    *((r12 + 0x10)) |= 4;
    goto label_0;
label_36:
    *((r12 + 0x10)) |= 8;
    goto label_0;
label_37:
    *((r12 + 0x10)) |= 0x10;
    goto label_0;
label_38:
    *((r12 + 0x10)) |= 0x20;
    goto label_0;
label_39:
    if (bl == 0x2a) {
        goto label_40;
    }
    eax = rbx - 0x30;
    if (al <= 9) {
        goto label_41;
    }
label_17:
    if (bl == 0x2e) {
        goto label_42;
    }
label_2:
    eax = 0;
    esi = 1;
    while (bl != 0x68) {
        if (bl == 0x4c) {
            goto label_43;
        }
        if (bl != 0x6c) {
            if (bl == 0x6a) {
                goto label_44;
            }
            edx = ebx;
            edx &= 0xffffffdf;
            if (dl == 0x5a) {
                goto label_44;
            }
            if (bl != 0x74) {
                goto label_45;
            }
        }
label_44:
        eax += 8;
label_1:
        ebx = *(rbp);
        rbp++;
    }
    ecx = eax;
    edx = esi;
    ecx &= 1;
    edx <<= cl;
    eax |= edx;
    goto label_1;
label_40:
    rsi = *((rsp + 0x10));
    eax = 1;
    *((r12 + 0x18)) = rbp;
    *((r12 + 0x20)) = rcx;
    if (rsi != 0) {
        rax = rsi;
    }
    *((rsp + 0x10)) = rax;
    eax = *((rbp + 1));
    edx = rax - 0x30;
    if (dl <= 9) {
        goto label_46;
    }
label_8:
    rbx = *((r12 + 0x28));
    if (rbx == -1) {
        goto label_47;
    }
label_7:
    r13 = *((r15 + 8));
    if (r9 <= rbx) {
        goto label_48;
    }
    rdx = *(r15);
label_5:
    if (rdx > rbx) {
        goto label_49;
    }
    do {
        rdx++;
        rax = rdx;
        rax <<= 5;
        *((r13 + rax - 0x20)) = 0;
    } while (rdx <= rbx);
    *(r15) = rdx;
label_49:
    rbx <<= 5;
    rax = r13 + rbx;
    edx = *(rax);
    if (edx != 0) {
        goto label_50;
    }
    *(rax) = 5;
    ebx = *(rcx);
    rcx++;
    if (bl != 0x2e) {
        goto label_2;
    }
label_42:
    *((r12 + 0x30)) = rbp;
    if (*((rbp + 1)) != 0x2a) {
        goto label_51;
    }
    rsi = *((rsp + 0x18));
    eax = 2;
    rcx = rbp + 2;
    *((r12 + 0x38)) = rcx;
    if (rsi >= 2) {
        rax = rsi;
    }
    *((rsp + 0x18)) = rax;
    eax = *((rbp + 2));
    edx = rax - 0x30;
    if (dl <= 9) {
        goto label_52;
    }
label_27:
    rbx = *((r12 + 0x40));
    if (rbx == -1) {
        goto label_53;
    }
label_26:
    r13 = *((r15 + 8));
    if (r9 <= rbx) {
        goto label_54;
    }
    rdx = *(r15);
label_20:
    if (rdx > rbx) {
        goto label_55;
    }
    do {
        rdx++;
        rax = rdx;
        rax <<= 5;
        *((r13 + rax - 0x20)) = 0;
    } while (rdx <= rbx);
    *(r15) = rdx;
label_55:
    rax = rbx;
    rax <<= 5;
    rax += r13;
    edx = *(rax);
    if (edx != 0) {
        goto label_56;
    }
    *(rax) = 5;
    ebx = *(rcx);
    goto label_2;
label_43:
    eax |= 4;
    goto label_1;
label_45:
    edx = rbx - 0x25;
    if (dl > 0x53) {
        goto label_15;
    }
    edx = (int32_t) dl;
    /* switch table (84 cases) at 0x413ae0 */
    ecx = 0;
    cl = (eax > 7) ? 1 : 0;
    ecx += 0xf;
label_10:
    if (r14 == -1) {
        goto label_57;
    }
    *((r12 + 0x50)) = r14;
label_16:
    r13 = *((r15 + 8));
    if (r9 <= r14) {
        goto label_58;
    }
label_14:
    rax = *(r15);
    if (rax > r14) {
        goto label_59;
    }
    do {
        rax++;
        rdx = rax;
        rdx <<= 5;
        *((r13 + rdx - 0x20)) = 0;
    } while (rax <= r14);
    *(r15) = rax;
label_59:
    r14 <<= 5;
    rax = r13 + r14;
    edx = *(rax);
    if (edx != 0) {
        goto label_60;
    }
    *(rax) = ecx;
label_12:
    *((r12 + 0x48)) = bl;
    rax = *(r8);
    *((r12 + 8)) = rbp;
    r13 = rax + 1;
    *(r8) = r13;
    if (r11 > r13) {
        rcx = *((r8 + 8));
        goto label_3;
    }
    if (r11 < 0) {
        goto label_61;
    }
    rax = 0x2e8ba2e8ba2e8ba;
    rbx = r11 + r11;
    if (rbx > rax) {
        goto label_61;
    }
    rax = r11 * 5;
    r12 = *((r8 + 8));
    *((rsp + 0x38)) = r8;
    rsi = r11 + rax*2;
    *((rsp + 0x30)) = r9;
    rsi <<= 4;
    if (*((rsp + 0x28)) == r12) {
        goto label_62;
    }
    rax = realloc (r12, rsi);
    r9 = *((rsp + 0x30));
    r8 = *((rsp + 0x38));
    r10 = 0xffffffffffffffff;
    rcx = rax;
    if (rax == 0) {
        goto label_61;
    }
    r12 = *((r8 + 8));
    r13 = *(r8);
    if (*((rsp + 0x28)) == r12) {
        goto label_63;
    }
label_6:
    *((r8 + 8)) = rcx;
    r11 = rbx;
    goto label_3;
label_33:
    rax = rbp;
    do {
        rax++;
        edx = *(rax);
        ecx = rdx - 0x30;
    } while (cl <= 9);
    if (dl == 0x24) {
        goto label_64;
    }
    r14 = r10;
    goto label_4;
label_51:
    eax = *((rbp + 1));
    eax -= 0x30;
    if (al > 9) {
        goto label_65;
    }
    do {
        rcx++;
        eax = *(rcx);
        eax -= 0x30;
    } while (al <= 9);
    rax = rcx;
    rax -= rbp;
label_30:
    rsi = *((rsp + 0x18));
    *((r12 + 0x38)) = rcx;
    ebx = *(rcx);
    if (rsi >= rax) {
        rax = rsi;
    }
    *((rsp + 0x18)) = rax;
    goto label_2;
label_48:
    r9 += r9;
    rax = rbx + 1;
    if (r9 <= rbx) {
        r9 = rax;
    }
    rax = 0x7ffffffffffffff;
    if (r9 > rax) {
        goto label_66;
    }
    rsi = r9;
    *((rsp + 0x48)) = r8;
    rsi <<= 5;
    *((rsp + 0x40)) = r9;
    *((rsp + 0x38)) = r11;
    *((rsp + 0x30)) = rcx;
    if (*((rsp + 8)) == r13) {
        goto label_67;
    }
    rax = realloc (r13, rsi);
    rsi = *((r15 + 8));
    rcx = *((rsp + 0x30));
    r10 = 0xffffffffffffffff;
    r13 = rax;
    r11 = *((rsp + 0x38));
    r9 = *((rsp + 0x40));
    r8 = *((rsp + 0x48));
    if (rax == 0) {
        goto label_19;
    }
    rdx = *(r15);
    if (*((rsp + 8)) == rsi) {
        goto label_68;
    }
label_22:
    *((r15 + 8)) = r13;
    goto label_5;
label_62:
    rax = malloc (rsi);
    r9 = *((rsp + 0x30));
    r8 = *((rsp + 0x38));
    rcx = rax;
    if (rax == 0) {
        goto label_69;
    }
label_63:
    rax = r13 * 5;
    *((rsp + 0x38)) = r8;
    *((rsp + 0x30)) = r9;
    rdx <<= 3;
    rax = memcpy (rcx, r12, r13 + rax*2);
    r8 = *((rsp + 0x38));
    r9 = *((rsp + 0x30));
    r10 = 0xffffffffffffffff;
    rcx = rax;
    r13 = *(r8);
    goto label_6;
label_47:
    rsi = *((rsp + 0x20));
    rax = rsi + 1;
    *((r12 + 0x28)) = rsi;
    if (rsi == -1) {
        goto label_15;
    }
    rbx = *((rsp + 0x20));
    *((rsp + 0x20)) = rax;
    goto label_7;
label_46:
    rdx = rcx;
    do {
        rdx++;
        esi = *(rdx);
        edi = rsi - 0x30;
    } while (dil <= 9);
    if (sil != 0x24) {
        goto label_8;
    }
    esi = 0;
    while (rbp == 0) {
        if (bl > 9) {
            goto label_70;
        }
        rdi = 0x1999999999999999;
        eax -= 0x30;
        rdx = r10;
        rax = (int64_t) eax;
        if (rsi <= rdi) {
            rdx = rsi * 5;
            rdx += rdx;
        }
        rdi = rcx;
label_9:
        ebp = 0;
        rdx += rax;
        eax = *((rcx + 1));
        bpl = (rdx < 0) ? 1 : 0;
        rsi = rdx;
        rcx++;
        ebx = rax - 0x30;
    }
    if (bl > 9) {
        goto label_15;
    }
    eax -= 0x30;
    rdx = r10;
    rdi = rcx;
    rax = (int64_t) eax;
    goto label_9;
    ecx = 0;
    cl = (eax > 7) ? 1 : 0;
    ecx += 0xd;
    goto label_10;
    ecx = 0x16;
    if (eax > 0xf) {
        goto label_10;
    }
    if ((al & 4) != 0) {
        goto label_10;
    }
    ecx = 0x15;
    if (eax > 7) {
        goto label_10;
    }
    ecx = 0x12;
    if ((al & 2) != 0) {
        goto label_10;
    }
    ecx = 0;
    cl = ((al & 1) == 0) ? 1 : 0;
    ecx += 0x13;
    goto label_10;
    ecx = 9;
    if (eax > 0xf) {
        goto label_10;
    }
    if ((al & 4) != 0) {
        goto label_10;
    }
    ecx = 7;
    if (eax > 7) {
        goto label_10;
    }
    ecx = 1;
    if ((al & 2) != 0) {
        goto label_10;
    }
    eax &= 1;
    ecx -= ecx;
    ecx &= 2;
    ecx += 3;
    goto label_10;
    ecx = 0x11;
    goto label_10;
    ecx = 0xc;
    if (eax > 0xf) {
        goto label_10;
    }
    ecx = 0;
    cl = ((al & 4) != 0) ? 1 : 0;
    ecx += 0xb;
    goto label_10;
    ecx = 0x10;
    ebx = 0x73;
    goto label_10;
    ecx = 0xe;
    ebx = 0x63;
    goto label_10;
    ecx = 0xa;
    if (eax > 0xf) {
        goto label_10;
    }
    if ((al & 4) != 0) {
        goto label_10;
    }
    ecx = 8;
    if (eax > 7) {
        goto label_10;
    }
    ecx = 2;
    if ((al & 2) != 0) {
        goto label_10;
    }
    eax &= 1;
    ecx -= ecx;
    ecx &= 2;
    ecx += 4;
    goto label_10;
label_15:
    r13 = *((r15 + 8));
label_13:
    if (*((rsp + 8)) != r13) {
        *((rsp + 8)) = r8;
        free (r13);
        r8 = *((rsp + 8));
    }
    rdi = *((r8 + 8));
    if (*((rsp + 0x28)) != rdi) {
        free (rdi);
    }
    errno_location ();
    *(rax) = 0x16;
    eax = 0xffffffff;
    goto label_11;
label_60:
    if (edx == ecx) {
        goto label_12;
    }
    goto label_13;
label_58:
    r9 += r9;
    rax = r14 + 1;
    if (r9 <= r14) {
        r9 = rax;
    }
    rax = 0x7ffffffffffffff;
    if (r9 > rax) {
        goto label_66;
    }
    rsi = r9;
    *((rsp + 0x48)) = r8;
    rsi <<= 5;
    *((rsp + 0x40)) = r9;
    *((rsp + 0x38)) = r11;
    *((rsp + 0x30)) = ecx;
    if (*((rsp + 8)) == r13) {
        goto label_71;
    }
    rax = realloc (r13, rsi);
    ecx = *((rsp + 0x30));
    r11 = *((rsp + 0x38));
    r10 = 0xffffffffffffffff;
    r13 = rax;
    r9 = *((rsp + 0x40));
    r8 = *((rsp + 0x48));
    if (rax == 0) {
        goto label_61;
    }
    rax = *((rsp + 8));
    if (rax == *((r15 + 8))) {
        goto label_72;
    }
label_18:
    *((r15 + 8)) = r13;
    goto label_14;
label_57:
    rsi = *((rsp + 0x20));
    rax = rsi + 1;
    *((r12 + 0x50)) = rsi;
    if (rsi == -1) {
        goto label_15;
    }
    r14 = *((rsp + 0x20));
    *((rsp + 0x20)) = rax;
    goto label_16;
label_41:
    *((r12 + 0x18)) = rbp;
    eax = *(rbp);
    eax -= 0x30;
    if (al > 9) {
        goto label_73;
    }
    rcx = rbp;
    while (al <= 9) {
        rcx = rdx;
        eax = *((rcx + 1));
        rdx = rcx + 1;
        eax -= 0x30;
    }
    rsi = *((rsp + 0x10));
    rax = rdx;
    rcx += 2;
    rax -= rbp;
    if (rsi >= rax) {
        rax = rsi;
    }
    *((rsp + 0x10)) = rax;
label_73:
    *((r12 + 0x20)) = rbp;
    ebx = *(rbp);
    goto label_17;
label_50:
    if (edx != 5) {
        goto label_13;
    }
    ebx = *(rcx);
    rcx++;
    goto label_17;
label_71:
    rax = malloc (rsi);
    ecx = *((rsp + 0x30));
    r11 = *((rsp + 0x38));
    r9 = *((rsp + 0x40));
    r8 = *((rsp + 0x48));
    if (rax == 0) {
        goto label_21;
    }
label_31:
    rdi = rax;
    *((rsp + 0x48)) = r8;
    *((rsp + 0x40)) = r9;
    r13 = rax;
    rdx <<= 5;
    *((rsp + 0x38)) = r11;
    *((rsp + 0x30)) = ecx;
    memcpy (rdi, r13, *(r15));
    r8 = *((rsp + 0x48));
    ecx = *((rsp + 0x30));
    r10 = 0xffffffffffffffff;
    r9 = *((rsp + 0x40));
    r11 = *((rsp + 0x38));
    goto label_18;
    do {
label_66:
        rsi = r13;
label_19:
        if (*((rsp + 8)) != rsi) {
label_23:
            *((rsp + 8)) = r8;
            free (rsi);
            r8 = *((rsp + 8));
        }
label_21:
        rdi = *((r8 + 8));
        if (*((rsp + 0x28)) != rdi) {
            free (rdi);
        }
label_24:
        errno_location ();
        *(rax) = 0xc;
        eax = 0xffffffff;
        return rax;
label_54:
        r9 += r9;
        rax = rbx + 1;
        if (r9 <= rbx) {
            r9 = rax;
        }
        rax = 0x7ffffffffffffff;
    } while (r9 > rax);
    rsi = r9;
    *((rsp + 0x48)) = r8;
    rsi <<= 5;
    *((rsp + 0x40)) = r9;
    *((rsp + 0x38)) = r11;
    *((rsp + 0x30)) = rcx;
    if (*((rsp + 8)) == r13) {
        goto label_74;
    }
    rax = realloc (r13, rsi);
    rsi = *((r15 + 8));
    rcx = *((rsp + 0x30));
    r10 = 0xffffffffffffffff;
    r13 = rax;
    r11 = *((rsp + 0x38));
    r9 = *((rsp + 0x40));
    r8 = *((rsp + 0x48));
    if (rax == 0) {
        goto label_19;
    }
    rdx = *(r15);
    if (*((rsp + 8)) == rsi) {
        goto label_75;
    }
label_29:
    *((r15 + 8)) = r13;
    goto label_20;
label_56:
    if (edx != 5) {
        goto label_13;
    }
    ebx = *(rcx);
    goto label_2;
label_67:
    rax = malloc (rsi);
    rcx = *((rsp + 0x30));
    r11 = *((rsp + 0x38));
    r9 = *((rsp + 0x40));
    r8 = *((rsp + 0x48));
    if (rax == 0) {
        goto label_21;
    }
    r13 = rax;
label_68:
    rdx <<= 5;
    *((rsp + 0x48)) = r8;
    *((rsp + 0x40)) = r9;
    *((rsp + 0x38)) = r11;
    *((rsp + 0x30)) = rcx;
    eax = memcpy (r13, *((rsp + 8)), *(r15));
    rdx = *(r15);
    r8 = *((rsp + 0x48));
    r10 = 0xffffffffffffffff;
    r9 = *((rsp + 0x40));
    r11 = *((rsp + 0x38));
    rcx = *((rsp + 0x30));
    goto label_22;
label_69:
    rsi = *((r15 + 8));
    if (*((rsp + 8)) != rsi) {
        goto label_23;
    }
    goto label_24;
label_64:
    eax = 0;
    while (rdi == 0) {
        if (sil > 9) {
            goto label_76;
        }
        rdi = 0x1999999999999999;
        edx = (int32_t) bl;
        rsi = r10;
        edx -= 0x30;
        rdx = (int64_t) edx;
        if (rax <= rdi) {
            rsi = rax * 5;
            rsi += rsi;
        }
        rcx = rbp;
label_25:
        edi = 0;
        ebx = *((rbp + 1));
        rdx += rsi;
        dil = (rdx < 0) ? 1 : 0;
        rax = rdx;
        rbp++;
        esi = rbx - 0x30;
    }
    if (sil > 9) {
        goto label_15;
    }
    edx = (int32_t) bl;
    rsi = r10;
    rcx = rbp;
    edx -= 0x30;
    rdx = (int64_t) edx;
    goto label_25;
label_53:
    rsi = *((rsp + 0x20));
    rax = rsi + 1;
    *((r12 + 0x40)) = rsi;
    if (rsi == -1) {
        goto label_15;
    }
    rbx = *((rsp + 0x20));
    *((rsp + 0x20)) = rax;
    goto label_26;
label_52:
    rdx = rcx;
    do {
        rdx++;
        esi = *(rdx);
        edi = rsi - 0x30;
    } while (dil <= 9);
    if (sil != 0x24) {
        goto label_27;
    }
    esi = 0;
    while (rbp == 0) {
        if (bl > 9) {
            goto label_77;
        }
        rdi = 0x1999999999999999;
        eax -= 0x30;
        rdx = r10;
        rax = (int64_t) eax;
        if (rsi <= rdi) {
            rdx = rsi * 5;
            rdx += rdx;
        }
        rdi = rcx;
label_28:
        ebp = 0;
        rdx += rax;
        bpl = (rdx < 0) ? 1 : 0;
        rcx++;
        eax = *(rcx);
        rsi = rdx;
        ebx = rax - 0x30;
    }
    if (bl > 9) {
        goto label_15;
    }
    eax -= 0x30;
    rdx = r10;
    rdi = rcx;
    rax = (int64_t) eax;
    goto label_28;
label_76:
    r14 = rdx;
    r14--;
    if (r14 > 0xfffffffffffffffd) {
        goto label_15;
    }
    rbp = rcx + 2;
    ebx = *((rcx + 2));
    goto label_4;
label_74:
    rax = malloc (rsi);
    rcx = *((rsp + 0x30));
    r11 = *((rsp + 0x38));
    r9 = *((rsp + 0x40));
    r8 = *((rsp + 0x48));
    if (rax == 0) {
        goto label_21;
    }
    r13 = rax;
label_75:
    rdx <<= 5;
    *((rsp + 0x48)) = r8;
    *((rsp + 0x40)) = r9;
    *((rsp + 0x38)) = r11;
    *((rsp + 0x30)) = rcx;
    memcpy (r13, *((rsp + 8)), *(r15));
    rdx = *(r15);
    r8 = *((rsp + 0x48));
    r10 = 0xffffffffffffffff;
    r9 = *((rsp + 0x40));
    r11 = *((rsp + 0x38));
    rcx = *((rsp + 0x30));
    goto label_29;
label_65:
    eax = 1;
    goto label_30;
label_70:
    rbx = rdx - 1;
    if (rbx > 0xfffffffffffffffd) {
        goto label_15;
    }
    *((r12 + 0x28)) = rbx;
    rcx = rdi + 2;
    goto label_7;
label_77:
    rbx = rdx - 1;
    if (rbx > 0xfffffffffffffffd) {
        goto label_15;
    }
    *((r12 + 0x40)) = rbx;
    rcx = rdi + 2;
    goto label_26;
label_61:
    rsi = *((r15 + 8));
    goto label_19;
label_72:
    rax = r13;
    r13 = *((rsp + 8));
    goto label_31;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x410340 */
#include <stdint.h>
 
int64_t fcn_00410340 (void) {
    rax = 0x617308;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_stat.elf @ 0x410358 */
#include <stdint.h>
 
void fcn_00410358 (int64_t arg3) {
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
