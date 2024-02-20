#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x402a90 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int64_t var_6h_2;
    int64_t var_7h_2;
    int64_t var_8h_3;
    int64_t var_8h_2;
    int64_t var_14h_2;
    int64_t var_18h_2;
    int64_t var_1ch_2;
    int64_t var_6h;
    int64_t var_7h;
    uint32_t var_8h;
    int64_t var_25h;
    int64_t var_26h;
    int64_t var_27h_2;
    int64_t var_10h;
    uint32_t var_14h;
    int64_t var_2dh;
    int64_t var_2eh;
    uint32_t var_18h;
    int64_t var_31h_2;
    int64_t var_32h;
    int64_t var_33h;
    uint32_t var_1ch;
    int64_t var_35h_2;
    int64_t var_37h;
    int64_t var_20h;
    int64_t var_39h;
    int64_t var_3ah_2;
    int64_t var_24h;
    int64_t var_3dh;
    int64_t var_3eh;
    uint32_t var_27h;
    int64_t var_28h;
    int64_t var_2ch;
    int64_t var_30h;
    uint32_t var_31h;
    uint32_t var_35h;
    int64_t var_36h;
    uint32_t var_38h;
    uint32_t var_3ah;
    uint32_t var_3ch;
    int64_t var_40h;
    uint32_t var_44h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_78h;
    rdi = argc;
    rsi = argv;
    rbx = rsi;
    fcn_0040c3a0 (*(rsi));
    setlocale (6, 0x416f77);
    bindtextdomain (0x412a22, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x412a22, rsi);
    edi = 0x40a800;
    fcn_004128f0 ();
    *(0x0061b4ca) = 0;
    fcn_00405170 (rsp + 0x10);
    edx = 0;
    rax = 0x200000004;
    *((rsp + 0x18)) = rax;
    rax = 0x100000000;
    *((rsp + 0x44)) = 0;
    *((rsp + 0x14)) = 1;
    *((rsp + 0x20)) = rax;
    *((rsp + 0x28)) = dx;
    *((rsp + 0x2c)) = 0;
    *((rsp + 0x30)) = 0x1000000;
    *((rsp + 0x38)) = 0;
    rax = getenv ("POSIXLY_CORRECT");
    *((rsp + 6)) = 0;
    *((rsp + 0x48)) = 0;
    *((rsp + 0x50)) = 0;
    *((rsp + 8)) = 0;
    *((rsp + 7)) = 0;
    *(rsp + 0x40) = (rax != 0) ? 1 : 0;
    r12d = 0;
    r14d = 0;
    r15d = 0;
    r13d = 0;
    do {
label_0:
        r8d = 0;
        ecx = 0x413540;
        edx = "abdfHilLnprst:uvxPRS:TZ";
        rsi = rbx;
        edi = ebp;
        eax = fcn_00411340 ();
        if (eax == 0xffffffff) {
            goto label_8;
        }
        eax += 0x83;
        if (eax > 0x10b) {
            goto label_9;
        }
        /* switch table (268 cases) at 0x412c78 */
        rdi = imp.__libc_start_main;
        if (rdi != 0) {
            goto label_10;
        }
        eax = 0x101;
        *((rsp + 0x2d)) = 1;
        *((rsp + 0x2e)) = ax;
        *((rsp + 0x34)) = 1;
    } while (1);
    *((rsp + 0x18)) = 2;
    goto label_0;
    *((rsp + 0x27)) = 1;
    goto label_0;
    *((rsp + 0x18)) = 3;
    goto label_0;
    *((rsp + 0x26)) = 1;
    goto label_0;
    *((rsp + 0x32)) = 1;
    *((rsp + 0x14)) = 2;
    goto label_0;
    rax = imp.__libc_start_main;
    r13d = 1;
    if (rax != 0) {
        r14 = rax;
    }
    goto label_0;
    *((rsp + 0x14)) = 2;
    *((rsp + 0x32)) = 1;
    *((rsp + 0x2d)) = 1;
    *((rsp + 0x2e)) = 0x101;
    *((rsp + 0x34)) = 1;
    if (*(0x0061b4ca) != 0) {
        *((rsp + 0x35)) = 1;
    }
    *((rsp + 0x37)) = 1;
    *((rsp + 0x39)) = 0x101;
    goto label_0;
    rax = imp.__libc_start_main;
    if (*(0x0061b4ca) == 0) {
        goto label_11;
    }
    if (rax == 0) {
        goto label_12;
    }
    *((rsp + 8)) = rax;
    goto label_0;
    *((rsp + 6)) = 1;
    goto label_0;
    r15 = imp.__libc_start_main;
    r13d = 1;
    goto label_0;
    *((rsp + 0x3a)) = 1;
    goto label_0;
    *((rsp + 0x14)) = 2;
    goto label_0;
    *((rsp + 0x14)) = 4;
    goto label_0;
    *((rsp + 0x14)) = 3;
    goto label_0;
    eax = 0;
    rcx = *(str_8_29);
    r9d = "David MacKenzie";
    r8d = "Torbjorn Granlund";
    fcn_0040ff60 (*(obj.stdout), 0x4129a5, "GNU coreutils");
    exit (0);
    *((rsp + 0x25)) = 1;
    goto label_0;
    *(0x0061b4c8) = 1;
    goto label_0;
    fcn_00409ff0 ("--sparse", *(0x0061bae0), 0x413940, 0x413928, 4, *(0x0061b3c8));
    eax = *((rax*4 + 0x413928));
    *((rsp + 0x1c)) = eax;
    goto label_0;
    rsi = imp.__libc_start_main;
    if (rsi == 0) {
        goto label_13;
    }
    fcn_00409ff0 ("--reflink", rsi, 0x413910, 0x413900, 4, *(0x0061b3c8));
    eax = *((rax*4 + 0x413900));
    *((rsp + 0x44)) = eax;
    goto label_0;
    *(0x0061b4c9) = 1;
    goto label_0;
    edx = 0;
    fcn_00403280 (*(0x0061bae0), rsp + 0x10);
    goto label_0;
    *((rsp + 7)) = 1;
    goto label_0;
    *((rsp + 0x33)) = 0;
    goto label_0;
    *((rsp + 0x2c)) = 1;
    goto label_0;
    *((rsp + 0x3e)) = 1;
    goto label_0;
    *((rsp + 0x3d)) = 1;
    goto label_0;
    if (r12 != 0) {
        goto label_14;
    }
    rsi = imp.__libc_start_main;
    rdx = rsp + 0x60;
    edi = 1;
    eax = xstat ();
    if (eax != 0) {
        goto label_15;
    }
    eax = *((rsp + 0x78));
    r12 = imp.__libc_start_main;
    eax &= 0xf000;
    if (eax == 0x4000) {
        goto label_0;
    }
    rax = fcn_0040ddd0 (4, r12);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "target %s is not a directory");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
    *((rsp + 0x3c)) = 1;
    goto label_0;
label_10:
    edx = 1;
    rax = fcn_00403280 (rdi, rsp + 0x10);
    *((rsp + 0x34)) = 1;
    goto label_0;
label_11:
    if (rax == 0) {
        goto label_0;
    }
    edx = 5;
    rax = dcgettext (0, "warning: ignoring --context; it requires an SELinux-enabled kernel");
    eax = 0;
    error (0, 0, rax);
    goto label_0;
label_13:
    *((rsp + 0x44)) = 2;
    goto label_0;
label_8:
    if (*((rsp + 0x27)) != 0) {
        if (*((rsp + 0x3c)) != 0) {
            goto label_16;
        }
    }
    if (r13b == 0) {
        goto label_17;
    }
    edx = 5;
    esi = "options --backup and --no-clobber are mutually exclusive";
    if (*((rsp + 0x18)) == 2) {
        goto label_18;
    }
    if (*((rsp + 0x44)) == 2) {
        goto label_19;
    }
label_7:
    edx = 5;
    rax = dcgettext (0, "backup type");
    rsi = r14;
    eax = fcn_0040a730 (rax);
    do {
label_1:
        *((rsp + 0x10)) = eax;
        fcn_0040a180 (r15);
        if (*((rsp + 0x14)) == 1) {
            goto label_20;
        }
label_4:
        if (*((rsp + 0x3a)) != 0) {
            goto label_21;
        }
label_3:
        eax = *((rsp + 0x36));
        if (*((rsp + 0x31)) == 0) {
            if (*((rsp + 8)) == 0) {
                goto label_22;
            }
        }
        if (al != 0) {
            goto label_23;
        }
        *((rsp + 0x35)) = 0;
label_5:
        if (*((rsp + 8)) != 0) {
            goto label_24;
        }
label_2:
        if (*((rsp + 0x38)) != 0) {
            goto label_25;
        }
        fcn_00409500 (rdi);
        rdx = *(0x0061b43c);
        ecx = *((rsp + 6));
        r8 = rsp + 0x10;
        edi -= edx;
        eax = fcn_004041b0 (ebp, rbx + rdx*8, r12, rcx);
        eax ^= 1;
        eax = (int32_t) al;
        return rax;
label_17:
        if (*((rsp + 0x44)) == 2) {
            goto label_26;
        }
        eax = 0;
    } while (1);
label_26:
    if (*((rsp + 0x1c)) != 2) {
        goto label_27;
    }
    eax = 0;
    goto label_1;
label_22:
    if (al == 0) {
        goto label_2;
    }
    if (*(0x0061b4ca) != 0) {
        goto label_2;
    }
label_6:
    edx = 5;
    rax = dcgettext (0, "cannot preserve security context without an SELinux-enabled kernel");
    eax = 0;
    error (1, 0, rax);
label_20:
    if (*((rsp + 0x3a)) != 0) {
        if (*((rsp + 0x27)) != 0) {
            goto label_28;
        }
        *((rsp + 0x14)) = 2;
label_21:
        eax = *((rsp + 7));
        *((rsp + 0x24)) = al;
        goto label_3;
label_23:
        if (*((rsp + 0x35)) == 0) {
            goto label_29;
        }
        edx = 5;
        rax = dcgettext (0, "cannot set target context and preserve it");
        eax = 0;
        error (1, 0, rax);
    }
label_28:
    *((rsp + 0x14)) = 4;
    goto label_4;
label_12:
    *((rsp + 0x31)) = 1;
    goto label_0;
label_29:
    if (*(0x0061b4ca) != 0) {
        goto label_5;
    }
    goto label_6;
label_19:
    if (*((rsp + 0x1c)) == 2) {
        goto label_7;
    }
label_27:
    edx = 5;
    esi = "--reflink can be used only with --sparse=auto";
    goto label_18;
    fcn_00403c80 (0);
label_16:
    edx = 5;
label_18:
    rax = dcgettext (0, "cannot make both hard and symbolic links");
    eax = 0;
    error (0, 0, rax);
label_9:
    fcn_00403c80 (1);
label_24:
    errno_location ();
    *(rax) = 0x5f;
    rbx = rax;
    rax = fcn_0040e020 (*((rsp + 8)), rsi, rdx, rcx, r8);
    edx = 5;
    rax = dcgettext (0, "failed to set default file creation context to %s");
    rcx = rbp;
    eax = 0;
    error (1, *(rbx), rax);
label_25:
    edx = 5;
    rax = dcgettext (0, "cannot preserve extended attributes, cp is built without xattr support");
    eax = 0;
    error (1, 0, rax);
label_15:
    rax = fcn_0040ddd0 (4, *(0x0061bae0));
    edx = 5;
    rax = dcgettext (0, "failed to access %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), rbx);
label_14:
    edx = 5;
    rax = dcgettext (0, "multiple target directories specified");
    eax = 0;
    rax = error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4031cb */
#include <stdint.h>
 
int32_t fcn_004031cb (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x403221 */
#include <stdint.h>
 
int64_t fcn_00403221 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x0061b468) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x61ae48;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x0061b470) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_004031cb ();
    *(0x0061b468) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x403278 */
#include <stdint.h>
 
int64_t fcn_00403278 (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x403280 */
#include <stdint.h>
 
uint64_t fcn_00403280 (int64_t arg2, int64_t arg3) {
    rsi = arg2;
    rdx = arg3;
    do {
        /* [13] -r-x section size 65240 named .text */
        abort ();
        r13d = "--preserve";
        r12 = rsi;
        ebx = edx;
        rax = fcn_00410310 (rdi);
        r14 = rax;
        eax = "--no-preserve";
        if (bl == 0) {
            r13 = rax;
        }
        rbx = r14;
label_0:
        r15d = 0;
        rax = strchr (rbx, 0x2c);
        if (rax != 0) {
            *(rax) = 0;
            r15 = rax + 1;
        }
        fcn_00409ff0 (r13, rbx, 0x413500, 0x4134e0, 4, *(0x0061b3c8));
    } while (*((rax*4 + 0x4134e0)) > 6);
    eax = *((rax*4 + 0x4134e0));
    /* switch table (7 cases) at 0x412c40 */
    *((r12 + 0x27)) = bpl;
    *((r12 + 0x28)) = bpl;
label_1:
    rbx = r15;
    if (r15 != 0) {
        goto label_0;
    }
    rdi = r14;
invalid_funccall(); //    void (*0x402380)() ();
    *((r12 + 0x26)) = bpl;
    *((r12 + 0x25)) = bpl;
    goto label_1;
    *((r12 + 0x22)) = bpl;
    goto label_1;
    *((r12 + 0x1d)) = bpl;
    goto label_1;
    *((r12 + 0x1f)) = bpl;
    goto label_1;
    eax = ebp;
    *((r12 + 0x1e)) = bpl;
    eax ^= 1;
    *((r12 + 0x20)) = al;
    goto label_1;
    eax = ebp;
    *((r12 + 0x1e)) = bpl;
    eax ^= 1;
    *((r12 + 0x1f)) = bpl;
    *((r12 + 0x1d)) = bpl;
    *((r12 + 0x22)) = bpl;
    *((r12 + 0x20)) = al;
    if (*(0x0061b4ca) != 0) {
        *((r12 + 0x25)) = bpl;
    }
    *((r12 + 0x27)) = bpl;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4033e0 */
#include <stdint.h>
 
uint64_t fcn_004033e0 (int64_t arg1, int64_t arg2, uint32_t arg3) {
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = rdx;
    rdx = rsi;
    rbx = rsi;
    rsi = rdi;
    edi = 1;
    eax = xstat ();
    if (eax != 0) {
        goto label_1;
    }
    edx = *((rbx + 0x18));
    edx &= 0xf000;
    if (edx == 0x4000) {
        goto label_2;
    }
    do {
        eax &= 1;
label_0:
        return eax;
label_1:
        rax = errno_location ();
        r12d = *(rax);
        if (r12d != 0) {
            goto label_3;
        }
        eax = *((rbx + 0x18));
        eax &= 0xf000;
        al = (eax == 0x4000) ? 1 : 0;
        eax = (int32_t) al;
    } while (1);
label_3:
    if (r12d == 2) {
        *(r13) = 1;
        eax = 0;
        goto label_0;
label_2:
        eax = 1;
        goto label_0;
    }
    rax = fcn_0040ddd0 (4, rbp);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "failed to access %s");
    rcx = rbx;
    eax = 0;
    error (1, r12d, rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4034a0 */
#include <stdint.h>
 
uint64_t fcn_004034a0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_170h;
    int64_t var_168h;
    int64_t errname;
    int64_t var_158h;
    int64_t var_150h;
    int64_t var_138h;
    int64_t var_c0h;
    int64_t var_b0h;
    int64_t var_a8h;
    int64_t var_a0h;
    int64_t var_90h;
    int64_t var_80h;
    int64_t var_70h;
    int64_t var_60h;
    int64_t var_50h;
    int64_t var_40h;
    int64_t var_28h;
    void * s1;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r15 = rsi;
    r13 = r9;
    rbx = rdi;
    *((rbp - 0x168)) = rcx;
    *((rbp - 0x160)) = r8;
    *((rbp - 0x170)) = rdx;
    rax = strlen (rdi);
    rax += 0x18;
    rax &= 0xfffffffffffffff0;
    rdi &= 0xfffffffffffffff0;
    rax = memcpy (rsp + 0xf, rbx, rax + 1);
    rdi = rax;
    r12 = rax;
    rax = fcn_0040aa80 (rdi);
    r14 = rax;
    rax += 0x18;
    rax &= 0xfffffffffffffff0;
    rbx = rsp + 0xf;
    rbx &= 0xfffffffffffffff0;
    memcpy (rbx, r12, r14);
    rax = *((rbp - 0x168));
    *((rbx + r14)) = 0;
    rsi = rbx;
    rdx = rbp - 0x150;
    edi = 1;
    *(rax) = 0;
    eax = xstat ();
    if (eax == 0) {
        goto label_10;
    }
    rdi = r12 + r15;
    *((rbp - 0x158)) = rdi;
    if (*(rdi) != 0x2f) {
        goto label_11;
    }
    do {
        rdi++;
    } while (*(rdi) == 0x2f);
    do {
label_0:
        rax = strchr (rdi, 0x2f);
        rbx = rax;
        if (rax == 0) {
            goto label_12;
        }
        *(rbx) = 0;
        rdx = rbp - 0x150;
        rsi = r12;
        edi = 1;
        eax = xstat ();
        r14d = eax;
        if (eax != 0) {
            goto label_13;
        }
        if ((*((r13 + 0x1c)) & 0xffffff00) != 0) {
            goto label_13;
        }
label_1:
        ecx = 0;
        r8 = r13;
        al = fcn_00404fc0 (*((rbp - 0x158)), r12, 0);
        if (al == 0) {
            goto label_14;
        }
        eax = *((rbp - 0x138));
        eax &= 0xf000;
        if (eax != 0x4000) {
            goto label_15;
        }
        rax = *((rbp - 0x160));
        *(rax) = 0;
label_3:
        rax = 0xff000000ff00;
        if ((*((r13 + 0x20)) & rax) != 0) {
            goto label_16;
        }
label_2:
        rdi = rbx + 1;
        *(rbx) = 0x2f;
    } while (*((rbx + 1)) != 0x2f);
    do {
        rdi++;
    } while (*(rdi) == 0x2f);
    goto label_0;
label_13:
    rsi = *((rbp - 0x158));
    rdx = rbp - 0xc0;
    edi = 1;
    eax = xstat ();
    if (eax == 0) {
        goto label_17;
    }
    rax = errno_location ();
    r8d = *(rax);
    if (r8d != 0) {
        goto label_18;
    }
label_4:
    rax = fcn_004100e0 (0xa8);
    __asm ("movdqa xmm0, xmmword [rbp - 0xc0]");
    __asm ("movdqa xmm1, xmmword [rbp - 0xb0]");
    __asm ("movdqa xmm2, xmmword [rbp - 0xa0]");
    __asm ("movdqa xmm3, xmmword [rbp - 0x90]");
    r15 = rax;
    __asm ("movups xmmword [rax], xmm0");
    __asm ("movdqa xmm4, xmmword [rbp - 0x80]");
    __asm ("movdqa xmm5, xmmword [rbp - 0x70]");
    __asm ("movdqa xmm6, xmmword [rbp - 0x60]");
    __asm ("movdqa xmm7, xmmword [rbp - 0x50]");
    __asm ("movups xmmword [rax + 0x10], xmm1");
    __asm ("movdqa xmm0, xmmword [rbp - 0x40]");
    __asm ("movups xmmword [rax + 0x20], xmm2");
    rcx = *((rbp - 0x168));
    __asm ("movups xmmword [rax + 0x30], xmm3");
    __asm ("movups xmmword [rax + 0x40], xmm4");
    __asm ("movups xmmword [rax + 0x50], xmm5");
    __asm ("movups xmmword [rax + 0x60], xmm6");
    __asm ("movups xmmword [rax + 0x70], xmm7");
    __asm ("movups xmmword [rax + 0x80], xmm0");
    rax = rbx;
    rax -= r12;
    *((r15 + 0x90)) = 0;
    *((r15 + 0x98)) = rax;
    rax = *(rcx);
    *(rcx) = r15;
    *((r15 + 0xa0)) = rax;
    if (r14d == 0) {
        goto label_1;
    }
    r8 = r13;
    ecx = 1;
    al = fcn_00404fc0 (*((rbp - 0x158)), r12, *((r15 + 0x18)));
    if (al == 0) {
        goto label_14;
    }
    rax = *((rbp - 0x160));
    esi = *((r15 + 0x18));
    *(rax) = 1;
    if (*((r13 + 0x1d)) == 0) {
        goto label_19;
    }
    r14d = esi;
    r14d &= 0x3f;
    eax = r14d;
    eax = ~eax;
label_5:
    ecx = 0x1ff;
    rdi = r12;
    if (*((r13 + 0x20)) != 0) {
        esi = ecx;
    }
    esi &= eax;
    esi &= 0xfff;
    eax = mkdir ();
    if (eax != 0) {
        goto label_20;
    }
    rax = *((rbp - 0x170));
    if (rax != 0) {
        rdx = *((rbp - 0x158));
        rsi = rax;
        rcx = r12;
        edi = 1;
        eax = 0;
        printf_chk ();
    }
    rdx = rbp - 0x150;
    rsi = r12;
    edi = 1;
    eax = lxstat ();
    if (eax != 0) {
        goto label_21;
    }
    esi = *((rbp - 0x138));
    if (*((r13 + 0x1e)) == 0) {
        eax = esi;
        eax = ~eax;
        if ((eax & r14d) != 0) {
            goto label_22;
        }
label_6:
        eax = esi;
        eax &= 0x1c0;
        if (eax == 0x1c0) {
            goto label_23;
        }
        eax = esi;
        *((r15 + 0x90)) = 1;
        r14d |= eax;
        *((r15 + 0x18)) = r14d;
    }
label_7:
    eax = esi;
    eax &= 0x1c0;
    if (eax != 0x1c0) {
        esi |= 0x1c0;
        eax = chmod (r12, rsi);
        if (eax != 0) {
            goto label_24;
        }
    }
label_23:
    rax = *((rbp - 0x160));
    if (*(rax) != 0) {
        goto label_2;
    }
    goto label_3;
label_17:
    eax = *((rbp - 0xa8));
    eax &= 0xf000;
    if (eax == 0x4000) {
        goto label_4;
    }
    r8d = 0x14;
label_18:
    *((rbp - 0x160)) = r8d;
    rax = fcn_0040ddd0 (4, *((rbp - 0x158)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "failed to get attributes of %s");
    r8d = *((rbp - 0x160));
    rcx = rbx;
    eax = 0;
    eax = error (0, r8d, rax);
    eax = 0;
    goto label_25;
label_19:
    r14d = 0;
    eax = 0xffffffff;
    if (*((r13 + 0x1e)) == 0) {
        goto label_5;
    }
    r14d = esi;
    r14d &= 0x12;
    eax = r14d;
    eax = ~eax;
    goto label_5;
label_16:
    esi = *((r13 + 0x25));
    edx = 0;
    rcx = r13;
    al = fcn_00405090 (r12, rsi);
    if (al != 0) {
        goto label_2;
    }
    if (*((r13 + 0x26)) == 0) {
        goto label_2;
    }
label_14:
    eax = 0;
label_8:
    rsp = rbp - 0x28;
    return rax;
label_22:
    eax = fcn_004053d0 ();
    esi = *((rbp - 0x138));
    eax = ~eax;
    edx = esi;
    r14d &= eax;
    eax = esi;
    edx = ~edx;
    if ((edx & r14d) == 0) {
        goto label_6;
    }
    r14d |= eax;
    *((r15 + 0x90)) = 1;
    *((r15 + 0x18)) = r14d;
    goto label_7;
label_10:
    eax = *((rbp - 0x138));
    eax &= 0xf000;
    if (eax == 0x4000) {
        rax = *((rbp - 0x160));
        *(rax) = 0;
label_12:
        eax = 1;
label_25:
        rsp = rbp - 0x28;
        return rax;
    }
    do {
        rax = fcn_0040ddd0 (4, rbx);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "%s exists but is not a directory");
        rcx = rbx;
        eax = 0;
        eax = error (0, 0, rax);
        eax = 0;
        goto label_8;
label_11:
        rdi = *((rbp - 0x158));
        goto label_0;
label_15:
        rsi = r12;
    } while (1);
label_21:
    rax = fcn_0040ddd0 (4, r12);
    edx = 5;
    r12 = rax;
    do {
label_9:
        rax = dcgettext (0, "failed to get attributes of %s");
        rbx = rax;
        rax = errno_location ();
        rcx = r12;
        eax = 0;
        eax = error (0, *(rax), rbx);
        rsp = rbp - 0x28;
        eax = 0;
        return rax;
label_20:
        rax = fcn_0040ddd0 (4, r12);
        edx = 5;
        esi = "cannot make directory %s";
        r12 = rax;
    } while (1);
label_24:
    rax = fcn_0040ddd0 (4, r12);
    edx = 5;
    esi = "setting permissions for %s";
    r12 = rax;
    goto label_9;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x403a50 */
#include <stdint.h>
 
uint64_t fcn_00403a50 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_28h;
    void * s1;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r15 = rsi;
    r13 = rcx;
    r12 = rdi;
    rbx = rdx;
    rax = strlen (rdi);
    rax += 0x18;
    rax &= 0xfffffffffffffff0;
    rdi &= 0xfffffffffffffff0;
    rax = memcpy (rsp + 0xf, r12, rax + 1);
    r15 += rax;
    if (rbx == 0) {
        goto label_4;
    }
    r12 = rax;
    while (*((r13 + 0x1f)) == 0) {
label_0:
        if (*((r13 + 0x1d)) != 0) {
            goto label_5;
        }
label_1:
        r14d = *((r13 + 0x1e));
        if (r14b != 0) {
            goto label_6;
        }
label_2:
        if (*((rbx + 0x90)) != 0) {
            goto label_7;
        }
label_3:
        rax = *((rbx + 0x98));
        *((r12 + rax)) = 0x2f;
        rbx = *((rbx + 0xa0));
        if (rbx == 0) {
            goto label_4;
        }
        rax = *((rbx + 0x98));
        *((r12 + rax)) = 0;
    }
    rax = *((rbx + 0x50));
    rdx = *((rbx + 0x48));
    *((rbp - 0x50)) = rdx;
    *((rbp - 0x48)) = rax;
    rax = *((rbx + 0x60));
    *((rbp - 0x40)) = rdx;
    *((rbp - 0x38)) = rax;
    eax = fcn_0040f8a0 (r12, rbp - 0x50, *((rbx + 0x58)), rcx);
    if (eax == 0) {
        goto label_0;
    }
    r14d = 0;
    rax = fcn_0040ddd0 (4, r12);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "failed to preserve times for %s");
    rbx = rax;
    rax = errno_location ();
    rcx = r12;
    eax = 0;
    error (0, *(rax), rbx);
    goto label_8;
label_5:
    edx = *((rbx + 0x20));
    esi = *((rbx + 0x1c));
    rdi = r12;
    eax = lchown ();
    if (eax == 0) {
        goto label_1;
    }
    eax = fcn_004051b0 (r13);
    r14d = eax;
    if (al == 0) {
        goto label_9;
    }
    edx = *((rbx + 0x20));
    esi = 0xffffffff;
    rdi = r12;
    lchown ();
    r14d = *((r13 + 0x1e));
    if (r14b == 0) {
        goto label_2;
    }
label_6:
    ecx = 0xffffffff;
    r8d = *((rbx + 0x18));
    rdx = r12;
    eax = fcn_00409b40 (r15, ecx);
    if (eax == 0) {
        goto label_3;
    }
    r14d = 0;
    goto label_8;
label_7:
    eax = chmod (r12, *((rbx + 0x18)));
    if (eax == 0) {
        goto label_3;
    }
    rax = fcn_0040ddd0 (4, r12);
    edx = 5;
    r12 = rax;
    do {
        rax = dcgettext (0, "failed to preserve permissions for %s");
        rbx = rax;
        rax = errno_location ();
        rcx = r12;
        eax = 0;
        error (0, *(rax), rbx);
        goto label_8;
label_4:
        r14d = 1;
label_8:
        rsp = rbp - 0x28;
        eax = r14d;
        return rax;
label_9:
        rax = fcn_0040ddd0 (4, r12);
        edx = 5;
        esi = "failed to preserve ownership for %s";
        r12 = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x403c80 */
#include <stdint.h>
 
uint64_t fcn_00403c80 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [OPTION].. [-T] SOURCE DEST\n  or:  %s [OPTION].. SOURCE.. DIRECTORY\n  or:  %s [OPTION].. -t DIRECTORY SOURCE..\n");
    r8 = rbp;
    rcx = rbp;
    rdx = rbp;
    rsi = rax;
    edi = 1;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.\n");
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
    rax = dcgettext (0, "  -a, --archive                same as -dR --preserve=all\n      --attributes-only        don't copy the file data, just the attributes\n      --backup[=CONTROL]       make a backup of each existing destination file\n  -b                           like --backup but does not accept an argument\n      --copy-contents          copy contents of special files when recursive\n  -d                           same as --no-dereference --preserve=links\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -f, --force                  if an existing destination file cannot be\n                                 opened, remove it and try again (this option\n                                 is ignored when the -n option is also used)\n  -i, --interactive            prompt before overwrite (overrides a previous -n\n                                  option)\n  -H                           follow command-line symbolic links in SOURCE\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -l, --link                   hard link files instead of copying\n  -L, --dereference            always follow symbolic links in SOURCE\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -n, --no-clobber             do not overwrite an existing file (overrides\n                                 a previous -i option)\n  -P, --no-dereference         never follow symbolic links in SOURCE\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -p                           same as --preserve=mode,ownership,timestamps\n      --preserve[=ATTR_LIST]   preserve the specified attributes (default:\n                                 mode,ownership,timestamps), if possible\n                                 additional attributes: context, links, xattr,\n                                 all\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --no-preserve=ATTR_LIST  don't preserve the specified attributes\n      --parents                use full source file name under DIRECTORY\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -R, -r, --recursive          copy directories recursively\n      --reflink[=WHEN]         control clone/CoW copies. See below\n      --remove-destination     remove each existing destination file before\n                                 attempting to open it (contrast with --force)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --sparse=WHEN            control creation of sparse files. See below\n      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n                                 argument\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -s, --symbolic-link          make symbolic links instead of copying\n  -S, --suffix=SUFFIX          override the usual backup suffix\n  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY\n  -T, --no-target-directory    treat DEST as a normal file\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -u, --update                 copy only when the SOURCE file is newer\n                                 than the destination file or when the\n                                 destination file is missing\n  -v, --verbose                explain what is being done\n  -x, --one-file-system        stay on this file system\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -Z                           set SELinux security context of destination\n                                 file to default type\n      --context[=CTX]          like -Z, or if CTX is specified then set the\n                                 SELinux or SMACK security context to CTX\n");
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
    rax = dcgettext (0, "\nBy default, sparse SOURCE files are detected by a crude heuristic and the\ncorresponding DEST file is made sparse as well.  That is the behavior\nselected by --sparse=auto.  Specify --sparse=always to create a sparse DEST\nfile whenever the SOURCE file contains a long enough sequence of zero bytes.\nUse --sparse=never to inhibit creation of sparse files.\n\nWhen --reflink[=always] is specified, perform a lightweight copy, where the\ndata blocks are copied only when modified.  If this is not possible the copy\nfails, or if --reflink=auto is specified, fall back to a standard copy.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nAs a special case, cp makes a backup of SOURCE when the force and backup\noptions are given and SOURCE and DEST are the same name for an existing,\nregular file.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    *(rsp) = 0x4129a8;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x412a22;
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
        esi = 0x4129a5;
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
        eax = strncmp (rax, 0x412a2c, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x4129c4;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = 0x4129a5;
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x416f77;
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
            eax = strncmp (rax, 0x412a2c, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = 0x4129a5;
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x4129c4;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = 0x4129a5;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4041b0 */
#include <stdint.h>
 
uint64_t fcn_004041b0 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg5) {
    uint32_t var_f0h;
    uint32_t var_e8h;
    uint32_t var_d2h;
    int64_t var_d1h;
    int64_t var_d0h;
    int64_t var_c8h;
    int64_t var_c0h;
    int64_t var_a8h;
    int64_t var_28h;
    void * s1;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r8 = arg5;
    eax = 0;
    r12 = (int64_t) edi;
    rbx = rsi;
    *((rbp - 0xe8)) = rdx;
    al = (rdx == 0) ? 1 : 0;
    *((rbp - 0xd2)) = 0;
    if (eax >= r12d) {
        goto label_8;
    }
    r14 = r8;
    if (cl != 0) {
        goto label_9;
    }
    if (*((rbp - 0xe8)) == 0) {
        goto label_10;
    }
label_5:
    if (r12d != 1) {
        fcn_00405110 (r14);
        fcn_00405140 (r14);
    }
    eax = r12 - 1;
    r15d = 1;
    rax = rbx + rax*8 + 8;
    *((rbp - 0xf0)) = rax;
    while (*(0x0061b4c9) != 0) {
        rdi &= 0xfffffffffffffff0;
        rax = memcpy (rsp + 0xf, r12, rdx);
        rdi = rax;
        r13 = rax;
        fcn_0040abd0 (rdi);
        rdi = *((rbp - 0xe8));
        rsi = r13;
        rdx = rbp - 0xc8;
        rax = fcn_0040af00 ();
        edx = "%s -> %s\n";
        r9 = r14;
        r13 = rax;
        rsi = *((rbp - 0xc8));
        eax = 0;
        r8 = rbp - 0xd2;
        if (*((r14 + 0x2e)) == 0) {
            rdx = rax;
        }
        rsi -= r13;
        al = fcn_004034a0 (r13, rsi, rdx, rbp - 0xd0, r8, r9);
        if (al != 0) {
            goto label_3;
        }
        eax = *(0x0061b4c9);
        r15d = 0;
label_1:
        if (al != 0) {
            goto label_11;
        }
label_0:
        rbx += 8;
        free (r13);
        if (*((rbp - 0xf0)) == rbx) {
            goto label_12;
        }
        r12 = *(rbx);
        *((rbp - 0xc8)) = 0;
        if (*(0x0061b4c8) != 0) {
            goto label_13;
        }
label_2:
        rax = strlen (r12);
        rdx = rax + 1;
        rax += 0x18;
        rax &= 0xfffffffffffffff0;
    }
    rdi &= 0xfffffffffffffff0;
    rax = memcpy (rsp + 0xf, r12, rdx);
    rax = fcn_0040ab40 (rax);
    r13 = rax;
    fcn_0040abd0 (rax);
    edi = 0x412a7d;
    ecx = 3;
    rsi = r13;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (rdi > 0) ? 1 : 0;
    if (al != 0) {
        goto label_14;
    }
    rax = fcn_00410310 (*((rbp - 0xe8)));
    r13 = rax;
label_3:
    edx = *((rbp - 0xd2));
    r9d = 0;
    eax = fcn_00409280 (r12, r13, rdx, r14, rbp - 0xd1);
    r15d &= eax;
    if (*(0x0061b4c9) == 0) {
        goto label_0;
    }
    rsi -= r13;
    eax = fcn_00403a50 (r13, *((rbp - 0xc8)), *((rbp - 0xd0)), r14);
    r15d &= eax;
    eax = *(0x0061b4c9);
    goto label_1;
label_9:
    if (*((rbp - 0xe8)) != 0) {
        goto label_15;
    }
    if (r12d > 2) {
        goto label_16;
    }
    fcn_004033e0 (*((rsi + r12*8 - 8)), rbp - 0xc0, rbp - 0xd2);
label_4:
    r12 = *(rbx);
    rbx = *((rbx + 8));
    if (*(0x0061b4c9) != 0) {
        goto label_17;
    }
    if (*((r14 + 0x16)) != 0) {
        r13d = *(r14);
        if (r13d == 0) {
            goto label_18;
        }
        eax = strcmp (r12, rbx);
        if (eax != 0) {
            goto label_18;
        }
        if (*((rbp - 0xd2)) != 0) {
            goto label_18;
        }
        eax = *((rbp - 0xa8));
        eax &= 0xf000;
        if (eax != 0x8000) {
            goto label_18;
        }
        rdi = rbx;
        esi = r13d;
        rax = fcn_0040a6f0 ();
        rsi = r14;
        edi = 0x61b480;
        ecx = 0x12;
        *(rdi) = *(rsi);
        rcx--;
        rsi += 4;
        rdi += 4;
        rbx = rax;
        r14d = 0x61b480;
        *(0x0061b480) = 0;
    }
label_18:
    r9d = 0;
    eax = fcn_00409280 (r12, rbx, 0, r14, rbp - 0xc8);
    r15d = eax;
label_12:
    rsp = rbp - 0x28;
    eax = r15d;
    return rax;
label_13:
    fcn_0040abd0 (r12);
    goto label_2;
label_11:
    rdi = *((rbp - 0xd0));
    if (rdi == 0) {
        goto label_0;
    }
    do {
        rax = *((rdi + 0xa0));
        *((rbp - 0xd0)) = rax;
        free (rdi);
        rdi = *((rbp - 0xd0));
    } while (rdi != 0);
    goto label_0;
label_14:
    rdi = *((rbp - 0xe8));
    rsi = r13;
    edx = 0;
    rax = fcn_0040af00 ();
    r13 = rax;
    goto label_3;
label_10:
    if (r12d == 1) {
        goto label_4;
    }
    rax = (int64_t) r12d;
    r13 = rsi + rax*8 - 8;
    al = fcn_004033e0 (*(r13), rbp - 0xc0, rbp - 0xd2);
    if (al != 0) {
        goto label_19;
    }
    if (r12d == 2) {
        goto label_4;
    }
    rax = fcn_0040ddd0 (4, *(r13));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "target %s is not a directory");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_19:
    r12d--;
    rax = (int64_t) r12d;
    rax = *((rbx + rax*8));
    *((rbp - 0xe8)) = rax;
    if (rax != 0) {
        goto label_5;
    }
    goto label_4;
label_15:
    edx = 5;
    rax = dcgettext (0, "cannot combine --target-directory (-t) and --no-target-directory (-T)");
    eax = 0;
    error (1, 0, rax);
label_16:
    rax = fcn_0040ddd0 (4, *((rsi + 0x10)));
    edx = 5;
    rbx = rax;
    do {
        rax = dcgettext (0, "extra operand %s");
        rcx = rbx;
        eax = 0;
        error (0, 0, rax);
label_6:
        fcn_00403c80 (1);
label_8:
        r12d--;
        if (r12d != 0) {
            goto label_20;
        }
        rax = fcn_0040ddd0 (4, *(rsi));
        edx = 5;
        esi = "missing destination file operand after %s";
        rbx = rax;
    } while (1);
label_17:
    edx = 5;
label_7:
    do {
        rax = dcgettext (0, "with --parents, the destination must be a directory");
    } while (rcx != 0);
    eax = 0;
    error (0, 0, rax);
    goto label_6;
label_20:
    edx = 5;
    esi = "missing file operand";
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x404640 */
#include <stdint.h>
 
int32_t fcn_00404640 (char * arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    esi &= 0xf000;
    if (esi == 0xa000) {
        eax = 1;
        return eax;
    }
    rbx = rdi;
    al = fcn_004100a0 ();
    if (al != 0) {
        eax = 1;
        return eax;
    }
    rdi = rbx;
    esi = 2;
    eax = euidaccess ();
    al = (eax == 0) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x404690 */
#include <stdint.h>
 
uint64_t fcn_00404690 (char *** arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12d = edi;
    rbx = rsi;
    if (*(0x0061b8e0) == 0) {
        goto label_1;
    }
label_0:
    if (rbx != 0) {
        goto label_2;
    }
    goto label_3;
    do {
        rbx -= rax;
        if (rbx == 0) {
            goto label_3;
        }
label_2:
        rsi = imp.__libc_start_main;
        edi = r12d;
        if (*(0x0061b3b8) <= rbx) {
            rbp = *(0x0061b3b8);
        }
        rax = fcn_0040b000 (rdi, rsi, rbp);
    } while (rax == rbp);
    eax = 0;
    return rax;
label_3:
    eax = 1;
    return rax;
label_1:
    rax = calloc (*(0x0061b3b8), 1);
    if (rax != 0) {
        *(0x0061b8e0) = rax;
        goto label_0;
    }
    *(0x0061b8e0) = 0x61b4e0;
    *(0x0061b3b8) = 0x400;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x404740 */
#include <stdint.h>
 
uint64_t fcn_00404740 (int64_t arg2, uint32_t arg3) {
    rsi = arg2;
    rdx = arg3;
    rcx = rdx;
    rdx = rsi;
    esi = 3;
    eax = fallocate ();
    ebx = eax;
    while (eax != 0x5f) {
        eax = ebx;
        return eax;
        rax = errno_location ();
        eax = *(rax);
        if (eax == 0x26) {
            goto label_0;
        }
    }
label_0:
    ebx = 0;
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x404780 */
#include <stdint.h>
 
int64_t fcn_00404780 (char *** arg1, char * arg2, size_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = rsi;
    esi = edx;
    if (edi < 0) {
        rdi = rax;
invalid_funccall(); //        void (*0x4028d0)() ();
    }
    return fchmod ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4047a0 */
#include <stdint.h>
 
int64_t fcn_004047a0 (void) {
    errno_location ();
    edx = 5;
    *(rax) = 0x5f;
    rbx = rax;
    rax = dcgettext (0, "failed to restore the default file creation context");
    eax = 0;
    error (1, *(rbx), rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4047e0 */
#include <stdint.h>
 
uint64_t fcn_004047e0 (int64_t arg1, char * arg2, size_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rdi;
    rbx = rdx;
    rax = fcn_0040dcf0 (1, 4, rsi);
    rax = fcn_0040dcf0 (0, 4, r12);
    rcx = rbp;
    esi = "%s -> %s";
    edi = 1;
    rdx = rax;
    eax = 0;
    printf_chk ();
    if (rbx != 0) {
        rax = fcn_0040ddd0 (4, rbx);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, " (backup: %s)");
        rdx = rbx;
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
    }
    rdi = stdout;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x404890 */
#include <stdint.h>
 
void fcn_00404890 (int64_t arg1, char * arg2, int64_t arg3) {
    int64_t var_4h;
    int64_t var_dh;
    int64_t var_eh;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rdi;
    rbx = rsi;
    al = fcn_00404640 (rsi, *(rdx));
    if (al != 0) {
        goto label_0;
    }
    fcn_0040ad70 (*(rbp), rsp + 4);
    ebp = *(rbp);
    *((rsp + 0xe)) = 0;
    rax = fcn_0040ddd0 (4, rbx);
    ebp &= 0xfff;
    rbx = imp.__libc_start_main;
    r13 = rax;
    edx = 5;
    if (*((r12 + 0x18)) == 0) {
        if ((*((r12 + 0x14)) & 0xffff00) == 0) {
            goto label_1;
        }
    }
    rax = dcgettext (0, "%s: replace %s, overriding mode %04lo (%s)? ");
    rdx = rax;
    do {
        rdi = stderr;
        r9 = rbp;
        eax = 0;
        rsi = rsp + 0xd;
        r8 = r13;
        rcx = rbx;
        esi = 1;
        fprintf_chk ();
        fcn_00410370 ();
        return;
label_0:
        rax = fcn_0040ddd0 (4, rbx);
        rbx = imp.__libc_start_main;
        edx = 5;
        rax = dcgettext (0, "%s: overwrite %s? ");
        r8 = rbp;
        rcx = rbx;
        esi = 1;
        rdi = stderr;
        rdx = rax;
        eax = 0;
        fprintf_chk ();
        fcn_00410370 ();
        return;
label_1:
        rax = dcgettext (0, "%s: unwritable %s (mode %04lo, %s); try anyway? ");
        rdx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4049c0 */
#include <stdint.h>
 
uint64_t fcn_004049c0 (char * arg1, char * arg2, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
    r9d = (int32_t) dl;
    r12 = rsi;
    rsi = rdi;
    rbx = rdi;
    r8b = (r8b != 0) ? 1 : 0;
    r8d = (int32_t) r8b;
    r8d <<= 0xa;
    eax = fcn_00409900 (edx, rsi, 0xffffff9c, rsi, r8, r9);
    if (eax >= 0) {
        bl = (eax > 0) ? 1 : 0;
        bl &= bpl;
        if (bl == 0) {
            ebx = 1;
            eax = 1;
            return eax;
        }
        rax = fcn_0040ddd0 (4, r12);
        edx = 5;
        rax = dcgettext (0, "removed %s\n");
        rdx = rbp;
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
        eax = ebx;
        return rax;
    }
    rax = fcn_0040dcf0 (1, 4, rbx);
    r13 = rax;
    rax = fcn_0040dcf0 (0, 4, r12);
    edx = 5;
    rax = dcgettext (0, "cannot create hard link %s to %s");
    rbx = rax;
    rax = errno_location ();
    r8 = r13;
    rcx = rbp;
    eax = 0;
    ebx = 0;
    error (0, *(rax), rbx);
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x404ad0 */
#include <stdint.h>
 
uint64_t fcn_00404ad0 (char *** arg1, char * arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r13 = rsi;
    rsi = rcx;
    r12d = edx;
    edx = 1;
    rbx = rcx;
    rax = lseek ();
    if (rax < 0) {
        goto label_0;
    }
    while (eax >= 0) {
        eax = 1;
        return rax;
        rax -= rbx;
        rdx = rbx;
        eax = fcn_00404740 (ebp, rax);
    }
    rax = fcn_0040ddd0 (4, r13);
    edx = 5;
    esi = "error deallocating %s";
    goto label_1;
label_0:
    rax = fcn_0040ddd0 (4, r13);
    edx = 5;
label_1:
    rax = dcgettext (0, "cannot lseek %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    eax = error (0, *(rax), rbx);
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x404b90 */
#include <stdint.h>
 
int64_t fcn_00404b90 (int64_t arg_b0h, int64_t arg_b8h, int64_t arg_c0h, int64_t arg_c8h, int64_t arg_d0h, char *** arg1, char *** arg2, uint32_t arg3, int64_t arg4, uint32_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_10h;
    char *** var_18h;
    int64_t var_1dh;
    int64_t var_1eh;
    int64_t var_1fh;
    uint32_t buf;
    size_t nbyte;
    ssize_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    ssize_t var_50h;
    uint32_t var_58h;
    int64_t var_60h;
    char *** fildes;
    int64_t var_6ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rax = *((rsp + 0xb0));
    rbx = *((rsp + 0xc8));
    *((rsp + 0x1f)) = r9b;
    r10 = *((rsp + 0xd0));
    *((rsp + 0x40)) = rax;
    rax = *((rsp + 0xb8));
    *(r10) = 0;
    *((rsp + 0x10)) = rax;
    rax = *((rsp + 0xc0));
    *((rsp + 0x48)) = rbx;
    *((rsp + 0x28)) = rax;
    *((rsp + 0x60)) = r10;
    *(rbx) = 0;
    if (rax == 0) {
        goto label_8;
    }
    *((rsp + 0x58)) = r8;
    if (r8 == 0) {
        r8 = rcx;
    }
    *((rsp + 0x6c)) = r9d;
    r15d = 0;
    r13d = 0;
    *((rsp + 0x38)) = rcx;
    r14d = r15d;
    r15 = r13;
    *((rsp + 0x20)) = rdx;
    *((rsp + 0x18)) = esi;
    *((rsp + 0x68)) = edi;
    *((rsp + 0x50)) = r8;
    do {
label_4:
        rax = *((rsp + 0x38));
        rdx = *((rsp + 0x28));
        rsi = *((rsp + 0x20));
        edi = *((rsp + 0x68));
        if (rax <= rdx) {
            rdx = rax;
        }
        rax = read (rdi, rsi, rdx);
        *((rsp + 0x30)) = rax;
        if (rax >= 0) {
            goto label_9;
        }
        rax = errno_location ();
    } while (*(rax) == 4);
    rbx = rax;
    r15d = 0;
    rax = fcn_0040ddd0 (4, *((rsp + 0x40)));
    edx = 5;
    rax = dcgettext (0, "error reading %s");
    rcx = rbp;
    eax = 0;
    error (0, *(rbx), rax);
label_2:
    eax = r15d;
    return rax;
    if (*(rax) == 4) {
label_9:
        goto label_10;
    }
    rax = *((rsp + 0x48));
    r13 = *((rsp + 0x20));
    r12 = *((rsp + 0x30));
    rbx = *((rsp + 0x50));
    *(rax) += r12;
    r11 = r13;
    *(rsp + 0x1d) = (*((rsp + 0x58)) != 0) ? 1 : 0;
label_0:
    if (rbx > r12) {
        rbx = r12;
    }
    bpl = (rbx != 0) ? 1 : 0;
    bpl &= *((rsp + 0x1d));
    if (bpl == 0) {
        goto label_11;
    }
    rsi = r13;
    rdx = rbx;
    do {
        if (*(rsi) != 0) {
            goto label_12;
        }
        rsi++;
        rdx--;
        if (rdx == 0) {
            goto label_13;
        }
    } while ((dl & 0xf) != 0);
    *((rsp + 8)) = r11;
    eax = memcmp (r13, rsi, rdx);
    r11 = *((rsp + 8));
    bpl = (eax == 0) ? 1 : 0;
    edx = ebp;
    edx ^= r14d;
    al = (eax != 0) ? 1 : 0;
label_5:
    r9b = (r15 != 0) ? 1 : 0;
    r9d &= edx;
    if (rbx != r12) {
        goto label_14;
    }
    if (al == 0) {
        goto label_14;
    }
    if (r9b == 0) {
        goto label_15;
    }
    *((rsp + 8)) = 1;
    ebp = 0;
label_7:
    *((rsp + 0x1e)) = r9b;
    if (r14b != 0) {
        goto label_16;
    }
    do {
        rax = fcn_0040b000 (*((rsp + 0x18)), r11, r15);
        r9d = *((rsp + 0x1e));
        if (r15 != rax) {
            goto label_17;
        }
label_1:
        eax = *((rsp + 8));
        if (eax == 0) {
            goto label_18;
        }
        if (rbx == 0) {
            goto label_19;
        }
        if (r9b == 0) {
            goto label_20;
        }
        r15 = rbx;
        r11 = r13;
        r14d = ebp;
        ebx = 0;
        goto label_0;
label_11:
        eax = r14d;
        dl = (rbx == r12) ? 1 : 0;
        eax ^= 1;
        if ((dl & al) == 0) {
            if (rbx != 0) {
                goto label_21;
            }
        }
label_6:
        r9d = 0;
        r15 += rbx;
        *((rsp + 8)) = 1;
        *((rsp + 0x1e)) = r9b;
    } while (r14b == 0);
label_16:
    edx = *((rsp + 0x1f));
    al = fcn_00404ad0 (*((rsp + 0x18)), *((rsp + 0x10)), rdx, r15);
    r9d = *((rsp + 0x1e));
    if (al != 0) {
        goto label_1;
    }
    r15d = eax;
    goto label_2;
label_13:
    r9d = r14d;
    r9d ^= 1;
    al = (r15 != 0) ? 1 : 0;
    r9d &= eax;
label_14:
    if (r9b != 0) {
        goto label_22;
    }
label_21:
    rax = 0x7fffffffffffffff;
    rax -= rbx;
    if (rax < r15) {
        goto label_23;
    }
    r15 += rbx;
    r12 -= rbx;
    r13 += rbx;
    r14d = ebp;
label_3:
    if (r12 != 0) {
        goto label_0;
    }
    goto label_24;
label_18:
    r11 = r13;
    r12 -= rbx;
    r14d = ebp;
    r13 += rbx;
    r15 = rbx;
    goto label_3;
label_19:
    r15d = 0;
label_24:
    rcx = *((rsp + 0x30));
    rax = *((rsp + 0x60));
    *(rax) = bpl;
    if (r13 != 0) {
        r14d = ebp;
        goto label_4;
label_20:
        r11 = r13;
        r12 -= rbx;
        r14d = ebp;
        r13 += rbx;
        r15d = 0;
        goto label_3;
label_23:
        r15d = 0;
        rax = fcn_0040ddd0 (4, *((rsp + 0x40)));
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "overflow reading %s");
        rcx = rbx;
        eax = 0;
        error (0, 0, rax);
        goto label_2;
label_12:
        eax = ebp;
        edx = r14d;
        ebp = 0;
        goto label_5;
label_17:
        r15d = r14d;
        rax = fcn_0040ddd0 (4, *((rsp + 0x10)));
        edx = 5;
        rax = dcgettext (0, "error writing %s");
        rbx = rax;
        rax = errno_location ();
        rcx = rbp;
        eax = 0;
        error (0, *(rax), rbx);
        goto label_2;
    }
    r13 = r15;
    do {
        if (bpl != 0) {
            edx = *((rsp + 0x6c));
            rsi = *((rsp + 0x10));
            rcx = r13;
            edi = *((rsp + 0x18));
invalid_funccall(); //            void (*0x404ad0)() ();
        }
label_8:
        r15d = 1;
        goto label_2;
label_10:
        r13 = r15;
    } while (1);
label_15:
    ebp = 0;
    goto label_6;
label_22:
    *((rsp + 8)) = 0;
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x404fc0 */
#include <stdint.h>
 
uint64_t fcn_00404fc0 (int64_t arg1, int64_t arg4, uint32_t arg5) {
    rdi = arg1;
    rcx = arg4;
    r8 = arg5;
    if (*((r8 + 0x25)) == 0) {
        goto label_1;
    }
    r12 = rdi;
    rax = errno_location ();
    r13 = rax;
    while (bl != 0) {
        *(r13) = 0x5f;
        rax = fcn_0040ddd0 (4, r12);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "failed to get security context of %s");
        rcx = rbx;
        eax = 0;
        error (0, *(r13), rax);
        ebx = *((rbp + 0x26));
label_0:
        ebx ^= 1;
        eax = ebx;
        return rax;
        ebx = *((rbp + 0x26));
    }
    *(rax) = 0x5f;
    goto label_0;
label_1:
    ebx = ecx;
    bl &= *((r8 + 0x21));
    if (bl == 0) {
        ebx = 1;
        eax = 1;
        return rax;
    }
    errno_location ();
    *(rax) = 0x5f;
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x405090 */
#include <stdint.h>
 
uint64_t fcn_00405090 (char * arg1, int64_t arg4) {
    rdi = arg1;
    rcx = arg4;
    r12 = rdi;
    rbx = rcx;
    rax = errno_location ();
    while (*((rbx + 0x26)) != 0) {
        *(rbp) = 0x5f;
        rax = fcn_0040dcf0 (0, 4, r12);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "failed to set the security context of %s");
        rcx = rbx;
        eax = 0;
        eax = error (0, *(rbp), rax);
        eax = 0;
        return rax;
    }
    *(rax) = 0x5f;
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x405110 */
#include <stdint.h>
 
uint64_t fcn_00405110 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = fcn_0040b910 (0x3d, 0, 0x40c2d0, 0x40c310, 0x40c380);
    *((rbx + 0x38)) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x405140 */
#include <stdint.h>
 
uint64_t fcn_00405140 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = fcn_0040b910 (0x3d, 0, 0x40c300, 0x40c310, 0x40c380);
    *((rbx + 0x40)) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x405170 */
#include <stdint.h>
 
uint32_t fcn_00405170 (int64_t arg1) {
    rdi = arg1;
    xmm0 = 0;
    rbx = rdi;
    *((rdi + 0x40)) = 0;
    __asm ("movups xmmword [rdi], xmm0");
    __asm ("movups xmmword [rdi + 0x10], xmm0");
    __asm ("movups xmmword [rdi + 0x20], xmm0");
    __asm ("movups xmmword [rdi + 0x30], xmm0");
    eax = geteuid ();
    al = (eax == 0) ? 1 : 0;
    *((rbx + 0x1b)) = al;
    *((rbx + 0x1a)) = al;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4051b0 */
#include <stdint.h>
 
uint64_t fcn_004051b0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = errno_location ();
    edx = *(rax);
    al = (edx == 1) ? 1 : 0;
    dl = (edx == 0x16) ? 1 : 0;
    al |= dl;
    if (al != 0) {
        eax = *((rbx + 0x1a));
        eax ^= 1;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4051e0 */
#include <stdint.h>
 
int64_t fcn_004051e0 (uint32_t arg1, char * arg2, char *** arg3, int64_t arg4, int64_t arg6) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r9 = arg6;
    r12 = rsi;
    ebx = edx;
    r14d = *((rcx + 0x1c));
    r13d = *((rcx + 0x20));
    if (r8b != 0) {
        goto label_5;
    }
    rax = 0xff0000000000ff;
    if ((*((rdi + 0x18)) & rax) == 0) {
        goto label_6;
    }
    esi = *((r9 + 0x18));
    edx = *((rcx + 0x18));
label_0:
    eax = *((rcx + 0x18));
    eax = ~eax;
    ah |= 0xe;
    eax &= esi;
    if ((eax & 0xfff) == 0) {
        goto label_5;
    }
    edx &= esi;
    edx &= 0x1c0;
    eax = fcn_0040c480 (r12, ebx, rdx);
    if (eax != 0) {
        goto label_7;
    }
    do {
label_5:
        edx = r13d;
        esi = r14d;
        if (ebx == 0xffffffff) {
            goto label_8;
        }
        edi = ebx;
        eax = fchown ();
        if (eax == 0) {
            goto label_9;
        }
        rax = errno_location ();
        r14d = *(rax);
        r15 = rax;
        if (r14d == 1) {
            goto label_10;
        }
        if (r14d == 0x16) {
            goto label_10;
        }
label_2:
        al = fcn_004051b0 (rbp);
        edx = 0;
        if (al == 0) {
            goto label_11;
        }
label_1:
        eax = edx;
        return rax;
INVALID_JUMP;
    } while (*((rdi + 0x2b)) == 0);
    esi = *((r9 + 0x18));
    edx = *((rdi + 0x10));
    goto label_0;
    do {
label_9:
        edx = 1;
        goto label_1;
label_8:
        rdi = r12;
        eax = lchown ();
    } while (eax == 0);
    rax = errno_location ();
    ebx = *(rax);
    r14 = rax;
    if (ebx == 1) {
        goto label_12;
    }
    if (ebx != 0x16) {
        goto label_2;
    }
label_12:
    edx = r13d;
    esi = 0xffffffff;
    rdi = r12;
    lchown ();
    *(r14) = ebx;
    goto label_2;
label_11:
    rax = fcn_0040ddd0 (4, r12);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "failed to preserve ownership for %s");
    rbx = rax;
    rax = errno_location ();
    rcx = r12;
    eax = 0;
    error (0, *(rax), rbx);
    do {
label_4:
        edx = *((rbp + 0x24));
        edx = -edx;
        goto label_1;
label_10:
        edx = r13d;
        esi = 0xffffffff;
        edi = ebx;
        fchown ();
        *(r15) = r14d;
        goto label_2;
label_7:
        rax = errno_location ();
        rbx = rax;
        eax = *(rax);
        if (eax == 1) {
            goto label_13;
        }
        if (eax == 0x16) {
            goto label_13;
        }
label_3:
        rax = fcn_0040ddd0 (4, r12);
        edx = 5;
        r12 = rax;
        rax = dcgettext (0, "clearing permissions for %s");
        rcx = r12;
        eax = 0;
        error (0, *(rbx), rax);
    } while (1);
label_13:
    if (*((rbp + 0x1b)) != 0) {
        goto label_3;
    }
    goto label_4;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4053d0 */
#include <stdint.h>
 
int32_t fcn_004053d0 (void) {
    ebx = *(0x0061b3b0);
    if (ebx != 0xffffffff) {
        eax = ebx;
        return eax;
    }
    eax = umask (0);
    ebx = eax;
    edi = eax;
    *(0x0061b3b0) = eax;
    umask (edi);
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x405400 */
#include <stdint.h>
 
uint64_t fcn_00405400 (int64_t arg_10h, int64_t arg_18h, int64_t arg_20h, uint32_t arg_28h, int64_t arg1, char * arg2, int64_t arg3, uint32_t arg4, char *** arg5, uint32_t arg6) {
    uint32_t var_368h;
    uint32_t var_360h;
    uint32_t var_358h;
    int64_t var_354h;
    uint32_t var_350h;
    size_t var_348h;
    char * mode;
    uint32_t var_340h;
    uint32_t var_338h;
    uint32_t ptr;
    uint32_t var_328h;
    uint32_t var_323h;
    uint32_t var_322h;
    uint32_t var_321h;
    func * rtld_fini;
    func * fini;
    char * var_310h;
    size_t s1;
    size_t s2;
    uint32_t var_2f8h;
    char * var_2f0h;
    char *** fildes;
    char ** format;
    func * init;
    size_t src;
    char *** var_2c8h;
    uint32_t var_2c4h;
    char *** errname;
    char * newpath;
    int64_t var_2a9h;
    uint32_t var_2a8h;
    uint32_t var_2a0h;
    int64_t var_298h;
    int64_t var_290h;
    uint32_t var_288h;
    uint32_t var_280h;
    uint32_t var_27fh;
    void * var_278h;
    uint32_t var_270h;
    uint32_t var_268h;
    uint32_t var_260h;
    int64_t var_258h;
    uint32_t var_254h;
    uint32_t var_250h;
    int64_t var_248h;
    int64_t var_240h;
    int64_t var_228h;
    int64_t var_220h;
    int64_t var_218h;
    int64_t var_210h;
    uint32_t var_1e0h;
    uint32_t var_1d8h;
    uint32_t var_1d0h;
    int64_t var_1c8h;
    int64_t var_1c4h;
    int64_t var_1c0h;
    int64_t var_1b0h;
    uint32_t var_150h;
    uint32_t var_148h;
    int64_t var_140h;
    int64_t var_138h;
    int64_t var_130h;
    int64_t var_120h;
    int64_t var_118h;
    uint32_t var_110h;
    int64_t var_100h;
    int64_t var_f0h;
    int64_t var_e0h;
    int64_t var_d0h;
    uint32_t var_c0h;
    int64_t var_bch;
    uint32_t var_b8h;
    int64_t var_b0h;
    int64_t var_a8h;
    int64_t var_a4h;
    int64_t var_a0h;
    int64_t var_90h;
    int64_t var_88h;
    int64_t var_80h;
    int64_t var_70h;
    int64_t var_60h;
    int64_t var_50h;
    int64_t var_40h;
    int64_t var_28h;
    int64_t var_fh;
    void * var_fh_2;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
label_23:
    r14 = rdi;
    r13 = r9;
    r12d = edx;
    *((rbp - 0x2b8)) = rsi;
    *(rbp - 0x2c0) = (*((rbp + 0x28)) != 0) ? 1 : 0;
    ebx = *((rbp + 0x10));
    *((rbp - 0x2f8)) = rcx;
    eax = *((rbp - 0x2c0));
    *((rbp - 0x2e8)) = r8;
    if (*((r9 + 0x18)) != 0) {
        if (al == 0) {
            goto label_123;
        }
        rax = *((rbp + 0x28));
        *(rax) = 0;
    }
label_123:
    rax = *((rbp + 0x20));
    rsi = r14;
    edi = 1;
    *(rax) = 0;
    rax = rbp - 0x270;
    *((rbp - 0x2d8)) = rax;
    rdx = rax;
    if (*((r13 + 4)) == 2) {
        goto label_124;
    }
    eax = xstat ();
    rsi = r14;
    r15b = (eax != 0) ? 1 : 0;
    if (r15b != 0) {
        goto label_91;
    }
label_3:
    eax = *((rbp - 0x258));
    *((rbp - 0x2c8)) = eax;
    eax &= 0xf000;
    *((rbp - 0x2c4)) = eax;
    if (eax == 0x4000) {
        goto label_125;
    }
    if (bl != 0) {
        r10d = *(r13);
        rdi = *((r13 + 0x40));
        if (r10d == 0) {
            goto label_126;
        }
        fcn_0040aca0 (rdi, r14, *((rbp - 0x2d8)));
    }
label_4:
    *((rbp - 0x2e0)) = 1;
    eax = *((r13 + 4));
    if (eax != 4) {
        al = (eax == 3) ? 1 : 0;
        eax = (int32_t) al;
        eax &= ebx;
        *((rbp - 0x2e0)) = eax;
    }
    if (r12b != 0) {
        goto label_11;
    }
    eax = *((rbp - 0x2c4));
    if (eax != 0x8000) {
        if (*((r13 + 0x14)) == 0) {
            goto label_127;
        }
        if (eax == 0x4000) {
            goto label_127;
        }
        if (eax == 0xa000) {
            goto label_127;
        }
    }
    if (*((r13 + 0x18)) != 0) {
        goto label_127;
    }
    if (*((r13 + 0x2c)) != 0) {
        goto label_127;
    }
    if (*((r13 + 0x17)) != 0) {
        goto label_127;
    }
    r9d = *(r13);
    if (r9d != 0) {
        goto label_127;
    }
    if (*((r13 + 0x15)) != 0) {
        goto label_127;
    }
    rax = rbp - 0x1e0;
    rsi = *((rbp - 0x2b8));
    edi = 1;
    rdx = rax;
    *((rbp - 0x2f0)) = rax;
    eax = xstat ();
    r8d = 1;
    *(rbp - 0x2d0) = (eax != 0) ? 1 : 0;
    if (*((rbp - 0x2d0)) != 0) {
        goto label_128;
    }
label_10:
    rax = *((rbp - 0x1d8));
    if (*((rbp - 0x268)) == rax) {
        goto label_129;
    }
label_34:
    if (*((r13 + 4)) == 2) {
        goto label_130;
    }
label_30:
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_131;
    }
    if (*((r13 + 0x2d)) != 0) {
        goto label_132;
    }
label_27:
    eax = *((r13 + 8));
    if (*((r13 + 0x18)) != 0) {
        goto label_133;
    }
    if (eax == 2) {
        goto label_28;
    }
    if (eax == 3) {
        goto label_134;
    }
label_36:
    if (*((rbp - 0x2d0)) != 0) {
        goto label_28;
    }
    eax = *((rbp - 0x1c8));
    ecx = r8d;
    ecx ^= 1;
    edx = eax;
    edx &= 0xf000;
    if (edx == 0x4000) {
        goto label_135;
    }
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_136;
    }
    r12d = *(r13);
    if (bl != 0) {
label_57:
        if (r12d == 3) {
            goto label_137;
        }
        *((rbp - 0x300)) = cl;
        al = fcn_0040ad30 (*((r13 + 0x38)), *((rbp - 0x2b8)), *((rbp - 0x2f0)));
        ecx = *((rbp - 0x300));
        if (al != 0) {
            goto label_138;
        }
        if (*((rbp - 0x2c4)) != 0x4000) {
            eax = *((rbp - 0x1c8));
            edx = *((rbp - 0x1c8));
            edx &= 0xf000;
            if (edx == 0x4000) {
                goto label_139;
            }
        }
label_51:
        r12d = *(r13);
    }
    eax = *((r13 + 0x18));
    if (al != 0) {
        goto label_140;
    }
    if (r12d != 0) {
        goto label_141;
    }
label_73:
    edx = *((rbp - 0x1c8));
    *((rbp - 0x300)) = 0;
    edx &= 0xf000;
    dl = (edx == 0x4000) ? 1 : 0;
    dl |= al;
    if (dl != 0) {
        goto label_52;
    }
    eax = *((r13 + 0x15));
    *((rbp - 0x2d0)) = al;
    if (al == 0) {
        if (*((r13 + 0x22)) == 0) {
            goto label_142;
        }
        if (*((rbp - 0x1d0)) <= 1) {
            goto label_142;
        }
    }
label_72:
    *((rbp - 0x2d0)) = cl;
    eax = unlink (*((rbp - 0x2b8)));
    ecx = *((rbp - 0x2d0));
    if (eax != 0) {
        rax = errno_location ();
        ecx = *((rbp - 0x2d0));
        r12 = rax;
        if (*(rax) != 2) {
            goto label_143;
        }
    }
    eax = *((r13 + 0x2e));
    *((rbp - 0x2d0)) = al;
    if (al != 0) {
        goto label_144;
    }
    if (bl == 0) {
        goto label_145;
    }
    *((rbp - 0x2d0)) = bl;
    *((rbp - 0x300)) = 0;
    if (*((r13 + 0x38)) == 0) {
        goto label_146;
    }
label_1:
    if (*((r13 + 0x18)) != 0) {
        goto label_147;
    }
    esi = *(r13);
    if (esi != 0) {
        goto label_148;
    }
    rdx = rbp - 0x1e0;
    if (cl == 0) {
        goto label_149;
    }
label_41:
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_2;
    }
    al = fcn_0040ad30 (*((r13 + 0x38)), *((rbp - 0x2b8)), rdx);
    if (al == 0) {
        goto label_2;
    }
    rax = fcn_0040dcf0 (1, 4, *((rbp - 0x2b8)));
    r12 = rax;
    rax = fcn_0040dcf0 (0, 4, r14);
    edx = 5;
    rbx = rax;
label_31:
    rax = dcgettext (0, "will not copy %s through just-created symlink %s");
    r8 = r12;
    rcx = rbx;
label_103:
    eax = 0;
    error (0, 0, rax);
    do {
label_0:
        r15d = 0;
        goto label_6;
label_11:
        *((rbp - 0x2d0)) = 1;
        ecx = 0;
        *((rbp - 0x300)) = 0;
label_52:
        if (bl != 0) {
            goto label_150;
        }
label_2:
        if (*((r13 + 0x2e)) == 0) {
            goto label_146;
        }
        if (*((r13 + 0x18)) != 0) {
            goto label_151;
        }
label_19:
        if (*((rbp - 0x2c4)) == 0x4000) {
            goto label_152;
        }
        fcn_004047e0 (r14, *((rbp - 0x2b8)), *((rbp - 0x300)));
label_5:
        if (*((r13 + 0x18)) != 0) {
            goto label_153;
        }
label_20:
        if (*((r13 + 0x22)) != 0) {
            goto label_9;
        }
        eax = *((rbp - 0x2d0));
        *((rbp - 0x2f0)) = 0;
        *((rbp - 0x2c0)) = eax;
label_7:
        r12d = *((rbp - 0x2c8));
        r12d &= 0xfff;
        if (*((r13 + 0x2b)) != 0) {
            r12d = *((r13 + 0x10));
            r12d &= 0xfff;
        }
        if (*((r13 + 0x1d)) != 0) {
            goto label_154;
        }
        if (*((rbp - 0x2c4)) == 0x4000) {
            goto label_155;
        }
        ecx = *((rbp - 0x2c0));
        r8 = r13;
        al = fcn_00404fc0 (r14, *((rbp - 0x2b8)), *((rbp - 0x2c8)));
        *((rbp - 0x308)) = 0;
        if (al == 0) {
            goto label_6;
        }
label_17:
        eax = *((r13 + 0x2c));
        *((rbp - 0x2e8)) = al;
        if (al == 0) {
            goto label_156;
        }
        if (*(r14) != 0x2f) {
            rdi = *((rbp - 0x2b8));
            rax = fcn_0040aa60 ();
            esi = 0x412a7e;
            ecx = 2;
            rdi = rax;
            r12 = rax;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (*(r14) > 0x2f) ? 1 : 0;
            if (al != 0) {
                goto label_157;
            }
label_43:
            free (r12);
        }
        ecx = *((r13 + 0x16));
        eax = fcn_00409a40 (r14, 0xffffff9c, *((rbp - 0x2b8)), rcx);
        if (eax < 0) {
            goto label_158;
        }
        eax = *((rbp - 0x2e8));
        *((rbp - 0x321)) = 0;
        r8d = 0;
        *((rbp - 0x2e0)) = al;
label_21:
        r12b = (*((rbp - 0x2c4)) != 0x4000) ? 1 : 0;
        if (*((rbp - 0x2d0)) == 0) {
            if (*((r13 + 0x14)) == 1) {
                goto label_159;
            }
            if (r12b == 0) {
                goto label_159;
            }
            rax = 0xff000000ff00;
            if ((*((r13 + 0x20)) & rax) == 0) {
                goto label_159;
            }
            esi = *((r13 + 0x25));
            edx = 0;
            rcx = r13;
            *((rbp - 0x2c0)) = r8b;
            al = fcn_00405090 (*((rbp - 0x2b8)), rsi);
            r8d = *((rbp - 0x2c0));
            if (al != 0) {
                goto label_159;
            }
            if (*((r13 + 0x26)) != 0) {
                goto label_32;
            }
        }
label_159:
        if (bl != 0) {
            if (*((r13 + 0x38)) == 0) {
                goto label_160;
            }
            rsi = *((rbp - 0x2b8));
            rdx = rbp - 0xc0;
            edi = 1;
            *((rbp - 0x2c0)) = r8b;
            eax = lxstat ();
            r8d = *((rbp - 0x2c0));
            if (eax != 0) {
                goto label_160;
            }
            rax = fcn_0040aca0 (*((r13 + 0x38)), *((rbp - 0x2b8)), rbp - 0xc0);
            r8d = *((rbp - 0x2c0));
        }
label_160:
        if (*((r13 + 0x17)) != 0) {
            if (r12b != 0) {
                goto label_54;
            }
        }
        if (r8b != 0) {
            goto label_54;
        }
        if (*((r13 + 0x1f)) == 0) {
            goto label_161;
        }
        rax = *((rbp - 0x228));
        rsi = rbp - 0xc0;
        rdi = *((rbp - 0x2b8));
        *((rbp - 0xc0)) = rax;
        rax = *((rbp - 0x220));
        *((rbp - 0xb8)) = rax;
        rax = *((rbp - 0x218));
        *((rbp - 0xb0)) = rax;
        rax = *((rbp - 0x210));
        *((rbp - 0xa8)) = rax;
        if (*((rbp - 0x2e8)) == 0) {
            goto label_162;
        }
        eax = fcn_0040f8b0 (rdi, rsi, rdx, rcx);
        if (eax == 0) {
            goto label_161;
        }
        rax = errno_location ();
        if (*(rax) == 0x26) {
            goto label_161;
        }
label_40:
        rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
        edx = 5;
        r12 = rax;
        rax = dcgettext (0, "preserving times for %s");
        rbx = rax;
        rax = errno_location ();
        rcx = r12;
        eax = 0;
        error (0, *(rax), rbx);
    } while (*((r13 + 0x24)) != 0);
label_161:
    if (*((rbp - 0x2e8)) != 0) {
        goto label_54;
    }
label_39:
    if (*((r13 + 0x1d)) == 0) {
        goto label_71;
    }
    if (*((rbp - 0x2d0)) == 0) {
        eax = *((rbp - 0x1c4));
        if (*((rbp - 0x254)) == eax) {
            goto label_163;
        }
    }
label_70:
    r8d = *((rbp - 0x2d0));
    r9 = rbp - 0x1e0;
    eax = fcn_004051e0 (r13, *((rbp - 0x2b8)), 0xffffffff, *((rbp - 0x2d8)), r8);
    if (eax == 0xffffffff) {
        goto label_0;
    }
    ebx = *((rbp - 0x2c8));
    edx = *((rbp - 0x2c8));
    dh &= 0xf1;
    if (eax != 0) {
        edx = ebx;
    }
    *((rbp - 0x2c8)) = edx;
label_71:
    rax = 0xff0000000000ff;
    if ((*((r13 + 0x18)) & rax) != 0) {
        goto label_164;
    }
    if (*((r13 + 0x2b)) != 0) {
        goto label_165;
    }
    if (*((r13 + 0x20)) != 0) {
        goto label_166;
    }
    eax = *((rbp - 0x308));
    if (eax != 0) {
        goto label_167;
    }
label_15:
    if (*((rbp - 0x321)) == 0) {
        goto label_54;
    }
label_16:
    esi |= *((rbp - 0x308));
    eax = chmod (*((rbp - 0x2b8)), *((rbp - 0x344)));
    if (eax == 0) {
        goto label_54;
    }
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "preserving permissions for %s");
    rbx = rax;
    rax = errno_location ();
    rcx = r12;
    eax = 0;
    error (0, *(rax), rbx);
label_55:
    eax = *((rbp - 0x2e0));
    if (*((r13 + 0x24)) != 0) {
        eax = r15d;
    }
    r15d = eax;
    goto label_6;
label_150:
    if (*((r13 + 0x38)) != 0) {
        goto label_1;
    }
    goto label_2;
label_124:
    eax = lxstat ();
    rsi = r14;
    r15b = (eax != 0) ? 1 : 0;
    if (r15b == 0) {
        goto label_3;
    }
label_91:
    r15d = 0;
    rax = fcn_0040ddd0 (4, rsi);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "cannot stat %s");
    rbx = rax;
    rax = errno_location ();
    rcx = r12;
    eax = 0;
    error (0, *(rax), rbx);
label_6:
    rsp = rbp - 0x28;
    eax = r15d;
    return rax;
label_125:
    if (*((r13 + 0x2a)) == 0) {
        goto label_168;
    }
    if (bl == 0) {
        goto label_4;
    }
    goto label_169;
label_147:
    if (*((r13 + 0x2e)) != 0) {
        goto label_151;
    }
label_146:
    if (*((r13 + 0x2a)) == 0) {
        goto label_5;
    }
    if (*((rbp - 0x2c4)) != 0x4000) {
        goto label_5;
    }
label_8:
    rdx = *((rbp - 0x270));
    rdi = *((rbp - 0x268));
    if (bl == 0) {
        goto label_170;
    }
    rax = fcn_00409480 (*((rbp - 0x2b8)), rdi, rdx);
    *((rbp - 0x2f0)) = rax;
label_25:
    if (*((rbp - 0x2f0)) == 0) {
        goto label_12;
    }
label_13:
    al = fcn_0040e2f0 (r14, *((rbp - 0x2f0)));
    if (al != 0) {
        goto label_171;
    }
    al = fcn_0040e2f0 (*((rbp - 0x2b8)), *((rbp - 0x2f0)));
    if (al != 0) {
        goto label_172;
    }
    eax = *((r13 + 4));
    if (eax == 4) {
        goto label_12;
    }
    if (eax == 3) {
        if (bl != 0) {
            goto label_12;
        }
    }
    rax = fcn_0040dcf0 (1, 4, *((rbp - 0x2f0)));
    r12 = rax;
    rax = fcn_0040dcf0 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "will not create hard link %s to directory %s");
    r8 = r12;
    rcx = rbx;
    eax = 0;
    rax = error (0, 0, rax);
label_14:
    if (*((r13 + 0x25)) != 0) {
        goto label_56;
    }
label_22:
    rdi = *((rbp - 0x300));
    if (rdi == 0) {
        goto label_6;
    }
    eax = rename (rdi, *((rbp - 0x2b8)));
    if (eax != 0) {
        goto label_173;
    }
    if (*((r13 + 0x2e)) == 0) {
        goto label_6;
    }
    rax = fcn_0040dcf0 (1, 4, *((rbp - 0x2b8)));
    r12 = rax;
    rax = fcn_0040dcf0 (0, 4, *((rbp - 0x300)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s -> %s (unbackup)\n");
    rcx = r12;
    rdx = rbx;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_6;
label_9:
    if (*((r13 + 0x17)) == 0) {
        goto label_174;
    }
    *((rbp - 0x2f0)) = 0;
label_12:
    if (*((r13 + 0x18)) != 0) {
        goto label_175;
    }
    eax = *((rbp - 0x2d0));
    *((rbp - 0x2c0)) = eax;
    goto label_7;
label_151:
    if (*((rbp - 0x2c4)) != 0x4000) {
        goto label_153;
    }
    if (*((r13 + 0x2a)) != 0) {
        goto label_8;
    }
label_153:
    if (*((rbp - 0x260)) == 1) {
        goto label_176;
    }
    if (*((r13 + 0x22)) != 0) {
        goto label_9;
    }
    *((rbp - 0x2f0)) = 0;
label_175:
    eax = rename (r14, *((rbp - 0x2b8)));
    if (eax == 0) {
        goto label_177;
    }
    rax = errno_location ();
    r12 = rax;
    eax = *(rax);
    if (eax == 0x16) {
        goto label_178;
    }
    if (eax != 0x12) {
        goto label_179;
    }
    rdi = *((rbp - 0x2b8));
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_180;
    }
    eax = unlink (rdi);
    if (eax != 0) {
        if (*(r12) != 2) {
            goto label_181;
        }
    }
    al = (*((rbp - 0x2c4)) != 0x4000) ? 1 : 0;
    al &= *((r13 + 0x2e));
    *((rbp - 0x2d0)) = al;
    if (al != 0) {
        goto label_182;
    }
label_33:
    *((rbp - 0x2c0)) = 1;
    *((rbp - 0x2d0)) = 1;
    goto label_7;
label_127:
    rax = rbp - 0x1e0;
    rsi = *((rbp - 0x2b8));
    edi = 1;
    rdx = rax;
    *((rbp - 0x2f0)) = rax;
    eax = lxstat ();
    r8d = r12d;
    *(rbp - 0x2d0) = (eax != 0) ? 1 : 0;
    if (*((rbp - 0x2d0)) == 0) {
        goto label_10;
    }
label_128:
    rax = errno_location ();
    if (*(rax) == 2) {
        goto label_11;
    }
    *((rbp - 0x2c0)) = rax;
    r15d = r12d;
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot stat %s");
    r8 = *((rbp - 0x2c0));
    rcx = rbx;
    eax = 0;
    error (0, *(r8), rax);
    goto label_6;
label_174:
    if (*((rbp - 0x260)) > 1) {
        goto label_183;
    }
    eax = *((r13 + 4));
    if (bl != 0) {
        if (eax == 3) {
            goto label_183;
        }
    }
    *((rbp - 0x2f0)) = 0;
    if (eax != 4) {
        goto label_12;
    }
label_183:
    rax = fcn_00409480 (*((rbp - 0x2b8)), *((rbp - 0x268)), *((rbp - 0x270)));
    *((rbp - 0x2f0)) = rax;
label_26:
    if (*((rbp - 0x2f0)) == 0) {
        goto label_12;
    }
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_13;
    }
    ecx = *((r13 + 0x2e));
    r8d = *((rbp - 0x2e0));
    al = fcn_004049c0 (*((rbp - 0x2f0)), *((rbp - 0x2b8)), 1);
    if (al == 0) {
        goto label_14;
    }
label_28:
    r15d = 1;
    goto label_6;
label_126:
    al = fcn_0040ad30 (rdi, r14, *((rbp - 0x2d8)));
    if (al != 0) {
        goto label_184;
    }
label_169:
    fcn_0040aca0 (*((r13 + 0x40)), r14, *((rbp - 0x2d8)));
    goto label_4;
label_167:
    eax = fcn_004053d0 ();
    eax = ~eax;
    *((rbp - 0x308)) &= eax;
    if (*((rbp - 0x308)) == 0) {
        goto label_15;
    }
    if (*((rbp - 0x321)) == 1) {
        goto label_16;
    }
    if (*((rbp - 0x2d0)) != 0) {
        goto label_185;
    }
label_90:
    eax = *((rbp - 0x1c8));
    *((rbp - 0x344)) = eax;
    eax = ~eax;
    if ((*((rbp - 0x308)) & eax) != 0) {
        goto label_16;
    }
label_54:
    r15d = *((rbp - 0x2e0));
    goto label_6;
label_154:
    ecx = *((rbp - 0x2c0));
    r8 = r13;
    al = fcn_00404fc0 (r14, *((rbp - 0x2b8)), *((rbp - 0x2c8)));
    if (al == 0) {
        goto label_6;
    }
    eax = r12d;
    eax &= 0x3f;
    *((rbp - 0x308)) = eax;
    if (*((rbp - 0x2c4)) != 0x4000) {
        goto label_17;
    }
label_24:
    rdx = *((rbp - 0x268));
    rcx = *((rbp - 0x270));
    rax = *((rbp - 0x2e8));
    if (*((rbp - 0x2e8)) != 0) {
        goto label_186;
    }
    goto label_187;
    do {
label_18:
        rax = *(rax);
        if (rax == 0) {
            goto label_187;
        }
INVALID_JUMP;
    } while (*((rax + 8)) != rdx);
    if (*((rax + 0x10)) != rcx) {
        goto label_18;
    }
    rax = fcn_0040ddd0 (4, r14);
    edx = 5;
    rbx = rax;
label_44:
    rax = dcgettext (0, "cannot copy cyclic symbolic link %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    goto label_32;
label_148:
    if (*((r13 + 0x2e)) != 0) {
        goto label_19;
    }
    if (*((rbp - 0x2c4)) != 0x4000) {
        goto label_20;
    }
label_152:
    if (*((r13 + 0x2a)) == 0) {
        goto label_20;
    }
    goto label_8;
label_156:
    eax = *((r13 + 0x17));
    *((rbp - 0x321)) = al;
    if (al != 0) {
        goto label_188;
    }
    eax = *((rbp - 0x2c4));
    if (eax == 0x8000) {
        goto label_189;
    }
    r8b = (eax != 0xa000) ? 1 : 0;
    r8b &= *((r13 + 0x14));
    if (r8b != 0) {
        goto label_189;
    }
    *((rbp - 0x2c0)) = r8b;
    if (*((rbp - 0x2c4)) == 0x1000) {
        goto label_190;
    }
    ecx = *((rbp - 0x2c8));
    eax = *((rbp - 0x2c8));
    eax &= 0xb000;
    r12b = (eax == 0x2000) ? 1 : 0;
    al = (*((rbp - 0x2c4)) == 0xc000) ? 1 : 0;
    r12b |= al;
    *((rbp - 0x2e0)) = r12b;
    if (r12b == 0) {
        goto label_191;
    }
    edx = *((rbp - 0x308));
    rax = *((rbp - 0x248));
    edi = 0;
    rsi = *((rbp - 0x2b8));
    edx = ~edx;
    *((rbp - 0xc0)) = rax;
    edx &= ecx;
    rcx = rbp - 0xc0;
    eax = xmknod ();
    r8d = *((rbp - 0x2c0));
    *((rbp - 0x2e8)) = r8b;
    *((rbp - 0x321)) = r8b;
    if (eax == 0) {
        goto label_21;
    }
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    rbx = rax;
label_50:
    rax = dcgettext (0, "cannot create special file %s");
    r12 = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), r12);
label_32:
    if (*((r13 + 0x25)) != 0) {
        goto label_56;
    }
    if (*((rbp - 0x2f0)) != 0) {
        goto label_22;
    }
    fcn_004093f0 (*((rbp - 0x268)), *((rbp - 0x270)));
    goto label_22;
label_187:
    rsi = *((rbp - 0x2e8));
    rax = rsp + 0xf;
    rax &= 0xfffffffffffffff0;
    *((rbp - 0x318)) = rax;
    *(rax) = rsi;
    *((rax + 8)) = rdx;
    *((rax + 0x10)) = rcx;
    if (*((rbp - 0x2d0)) == 0) {
        eax = *((rbp - 0x1c8));
        eax &= 0xf000;
        if (eax == 0x4000) {
            goto label_192;
        }
    }
    esi = *((rbp - 0x308));
    rdi = *((rbp - 0x2b8));
    esi = ~esi;
    esi &= r12d;
    eax = mkdir ();
    if (eax != 0) {
        goto label_193;
    }
    rsi = *((rbp - 0x2b8));
    rdx = rbp - 0x1e0;
    edi = 1;
    eax = lxstat ();
    if (eax != 0) {
        goto label_194;
    }
    r12d = *((rbp - 0x1c8));
    *((rbp - 0x321)) = 0;
    eax = r12d;
    eax &= 0x1c0;
    if (eax != 0x1c0) {
        esi |= 0x1c0;
        eax = chmod (*((rbp - 0x2b8)), r12d);
        *((rbp - 0x344)) = r12d;
        *((rbp - 0x321)) = 1;
        if (eax != 0) {
            goto label_195;
        }
    }
    rax = *((rbp + 0x18));
    if (*(rax) == 0) {
        goto label_196;
    }
label_61:
    if (*((r13 + 0x2e)) != 0) {
        if (*((r13 + 0x18)) == 0) {
            goto label_197;
        }
        rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
        edx = 5;
        r12 = rax;
        rax = dcgettext (0, "created directory %s\n");
        rdx = r12;
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
    }
label_53:
    rax = *((rbp - 0x2f8));
    r12b = (rax != 0) ? 1 : 0;
    r12b &= *((r13 + 0x1c));
    *((rbp - 0x2e0)) = r12b;
    if (r12b != 0) {
        goto label_198;
    }
label_42:
    __asm ("movdqu xmm0, xmmword [r13]");
    __asm ("movdqu xmm1, xmmword [r13 + 0x10]");
    esi = 2;
    __asm ("movdqu xmm2, xmmword [r13 + 0x20]");
    __asm ("movdqu xmm3, xmmword [r13 + 0x30]");
    rax = *((r13 + 0x40));
    *((rbp - 0xc0)) = xmm0;
    *((rbp - 0xb0)) = xmm1;
    *((rbp - 0xa0)) = xmm2;
    *((rbp - 0x90)) = xmm3;
    *((rbp - 0x80)) = rax;
    rax = fcn_0040e7f0 (r14);
    *((rbp - 0x330)) = rax;
    if (rax == 0) {
        goto label_199;
    }
    if (*((r13 + 4)) == 3) {
        *((rbp - 0xbc)) = 2;
    }
    rax = *((rbp - 0x330));
    if (*(rax) == 0) {
        goto label_200;
    }
    rax = rbp - 0x150;
    ecx = 0;
    *((rbp - 0x338)) = r15b;
    r12 = *((rbp - 0x330));
    *((rbp - 0x310)) = rax;
    rax = rbp - 0xc0;
    r15d = ecx;
    *((rbp - 0x320)) = rax;
    rax = rbp - 0x2a0;
    *((rbp - 0x340)) = r13;
    r13 = *((rbp + 0x20));
    *((rbp - 0x2e0)) = 1;
    *((rbp - 0x2f8)) = rax;
    *((rbp - 0x2e8)) = r14;
    *((rbp - 0x328)) = ebx;
    while (*((rbp - 0x2a0)) == 0) {
        r15b |= *((rbp - 0x150));
        strlen (r12);
        r12 = r12 + rax + 1;
        if (*(r12) == 0) {
            goto label_201;
        }
        rdi = *((rbp - 0x2e8));
        edx = 0;
        rsi = r12;
        rax = fcn_0040af00 ();
        rdi = *((rbp - 0x2b8));
        edx = 0;
        rsi = r12;
        rbx = rax;
        rax = fcn_0040af00 ();
        r14 = rax;
        rax = *((rbp + 0x18));
        eax = *(rax);
        *((rbp - 0x150)) = al;
        al = fcn_00405400 (rbx, r14, *((rbp - 0x2c0)), *((rbp - 0x2d8)), *((rbp - 0x318)), *((rbp - 0x320)));
        goto label_23;
        *((rbp - 0x2e0)) &= al;
        eax = *((rbp - 0x2a0));
        *(r13) |= al;
        free (r14);
        free (rbx);
    }
label_201:
    r12d = r15d;
    r14 = *((rbp - 0x2e8));
    r15d = *((rbp - 0x338));
    r13 = *((rbp - 0x340));
    ebx = *((rbp - 0x328));
label_82:
    free (*((rbp - 0x330)));
    rax = *((rbp + 0x18));
    *(rax) = r12b;
label_77:
    *((rbp - 0x2e8)) = 0;
    r8d = 0;
    goto label_21;
label_155:
    ecx = *((rbp - 0x2c0));
    r8 = r13;
    al = fcn_00404fc0 (r14, *((rbp - 0x2b8)), *((rbp - 0x2c8)));
    if (al == 0) {
        goto label_6;
    }
    eax = r12d;
    eax &= 0x12;
    *((rbp - 0x308)) = eax;
    goto label_24;
label_168:
    rax = fcn_0040ddd0 (4, rsi);
    edx = 5;
    rbx = rax;
    if (*((r13 + 0x19)) == 0) {
        goto label_202;
    }
label_69:
    rax = dcgettext (0, "omitting directory %s");
label_29:
    rcx = rbx;
    eax = 0;
    r15d = 0;
    error (0, 0, rax);
    goto label_6;
label_83:
    rdx = *((rbp - 0x270));
    *((rbp - 0x300)) = 0;
label_170:
    rax = fcn_00409440 (*((rbp - 0x268)), rdx);
    *((rbp - 0x2f0)) = rax;
    goto label_25;
label_176:
    rax = fcn_00409440 (*((rbp - 0x268)), *((rbp - 0x270)));
    *((rbp - 0x2f0)) = rax;
    goto label_26;
label_132:
    ecx = 0;
    if (*((r13 + 0x1f)) != 0) {
        ecx = 1;
        if (*((r13 + 0x18)) == 0) {
            goto label_203;
        }
        rax = *((rbp - 0x270));
        cl = (*((rbp - 0x1e0)) != rax) ? 1 : 0;
    }
label_203:
    *((rbp - 0x300)) = r8b;
    eax = fcn_0040eb60 (*((rbp - 0x2b8)), *((rbp - 0x2f0)), *((rbp - 0x2d8)), 0);
    r8d = *((rbp - 0x300));
    if (eax < 0) {
        goto label_27;
    }
    if (*((rbp + 0x28)) != 0) {
        rax = *((rbp + 0x28));
        *(rax) = 1;
    }
    rax = fcn_00409480 (*((rbp - 0x2b8)), *((rbp - 0x268)), *((rbp - 0x270)));
    if (rax == 0) {
        goto label_28;
    }
    ecx = *((r13 + 0x2e));
    r8d = *((rbp - 0x2e0));
    al = fcn_004049c0 (rax, *((rbp - 0x2b8)), 1);
    if (al != 0) {
        goto label_28;
    }
    if (*((r13 + 0x25)) == 0) {
        goto label_6;
    }
label_56:
    fcn_004047a0 ();
label_202:
    dcgettext (0, "-r not specified; omitting directory %s");
    goto label_29;
label_130:
    r12d = 0;
    ecx = 0;
label_60:
    eax = *((rbp - 0x258));
    r9 = *((rbp - 0x2f0));
    rdx = *((rbp - 0x2d8));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_204;
    }
label_35:
    edi = *(r13);
    if (edi == 0) {
        goto label_205;
    }
    if (r12b != 0) {
        goto label_206;
    }
    if (*((r13 + 0x18)) != 0) {
        goto label_30;
    }
    if (*((r13 + 4)) == 2) {
        goto label_30;
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_30;
    }
    eax = *((r9 + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_30;
    }
label_38:
    rax = fcn_0040dcf0 (1, 4, *((rbp - 0x2b8)));
    r12 = rax;
    rax = fcn_0040dcf0 (0, 4, r14);
    edx = 5;
    esi = "%s and %s are the same file";
    rbx = rax;
    goto label_31;
label_188:
    r8d = *((rbp - 0x2e0));
    edx = *((r13 + 0x16));
    ecx = 0;
    al = fcn_004049c0 (r14, *((rbp - 0x2b8)), rdx);
    r8d = 0;
    *((rbp - 0x321)) = 0;
    *((rbp - 0x2e0)) = al;
    if (al != 0) {
        goto label_21;
    }
    goto label_32;
label_180:
    eax = rmdir ();
    if (eax == 0) {
        goto label_33;
    }
    if (*(r12) == 2) {
        goto label_33;
    }
label_181:
    rax = fcn_0040dcf0 (1, 4, *((rbp - 0x2b8)));
    r13 = rax;
    rax = fcn_0040dcf0 (0, 4, r14);
    edx = 5;
    rbx = rax;
label_37:
    rax = dcgettext (0, "inter-device move failed: %s to %s; unable to remove target");
    r8 = r13;
    rcx = rbx;
    eax = 0;
    error (0, *(r12), rax);
    fcn_004093f0 (*((rbp - 0x268)), *((rbp - 0x270)));
    goto label_6;
label_177:
    if (*((r13 + 0x2e)) != 0) {
        goto label_207;
    }
label_49:
    if (*((r13 + 0x21)) != 0) {
        goto label_208;
    }
label_48:
    if (*((rbp + 0x28)) != 0) {
        rax = *((rbp + 0x28));
        *(rax) = 1;
    }
    if (bl == 0) {
        goto label_28;
    }
    r15d = ebx;
    fcn_0040aca0 (*((r13 + 0x38)), *((rbp - 0x2b8)), *((rbp - 0x2d8)));
    goto label_6;
label_129:
    rax = *((rbp - 0x1e0));
    if (*((rbp - 0x270)) != rax) {
        goto label_34;
    }
    r12d = *((r13 + 0x17));
    if (r12b != 0) {
        goto label_47;
    }
    if (*((r13 + 4)) == 2) {
        goto label_209;
    }
    rax = rbp - 0x150;
    rsi = *((rbp - 0x2b8));
    edi = 1;
    *((rbp - 0x300)) = r8b;
    rdx = rax;
    *((rbp - 0x310)) = rax;
    eax = lxstat ();
    r8d = *((rbp - 0x300));
    if (eax != 0) {
        goto label_30;
    }
    rax = rbp - 0xc0;
    rsi = r14;
    edi = 1;
    rdx = rax;
    *((rbp - 0x320)) = rax;
    eax = lxstat ();
    r8d = *((rbp - 0x300));
    if (eax != 0) {
        goto label_30;
    }
    rax = *((rbp - 0x148));
    if (*((rbp - 0xb8)) == rax) {
        rax = *((rbp - 0x150));
        r12b = (*((rbp - 0xc0)) == rax) ? 1 : 0;
    }
    eax = *((rbp - 0xa8));
    r9 = *((rbp - 0x310));
    rdx = *((rbp - 0x320));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_35;
    }
    eax = *((rbp - 0x138));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_35;
    }
    if (*((r13 + 0x15)) == 0) {
        goto label_35;
    }
    goto label_30;
label_131:
    if (*((r13 + 0x18)) == 0) {
        goto label_36;
    }
    eax = *((r13 + 8));
label_133:
    if (eax == 2) {
        goto label_210;
    }
    if (eax == 3) {
        goto label_211;
    }
    if (eax != 4) {
        goto label_36;
    }
    if (*((r13 + 0x2f)) == 0) {
        goto label_36;
    }
    *((rbp - 0x300)) = r8b;
    al = fcn_00404640 (*((rbp - 0x2b8)), *((rbp - 0x1c8)));
    r8d = *((rbp - 0x300));
    if (al != 0) {
        goto label_36;
    }
label_211:
    rax = *((rbp - 0x2f0));
    *((rbp - 0x300)) = r8b;
    al = fcn_00404890 (r13, *((rbp - 0x2b8)), rax + 0x18);
    r8d = *((rbp - 0x300));
    if (al != 0) {
        goto label_36;
    }
label_210:
    if (*((rbp + 0x28)) == 0) {
        goto label_28;
    }
label_64:
    rax = *((rbp + 0x28));
    r15d = 1;
    *(rax) = 1;
    goto label_6;
label_173:
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "cannot un-backup %s");
    rbx = rax;
    rax = errno_location ();
    rcx = r12;
    eax = 0;
    error (0, *(rax), rbx);
    goto label_6;
label_179:
    rax = fcn_0040dcf0 (1, 4, *((rbp - 0x2b8)));
    r13 = rax;
    rax = fcn_0040dcf0 (0, 4, r14);
    edx = 5;
    esi = "cannot move %s to %s";
    rbx = rax;
    goto label_37;
label_189:
    eax = *((rbp - 0x258));
    sil = (*((r13 + 4)) == 2) ? 1 : 0;
    *((rbp - 0x318)) = eax;
    eax = *((r13 + 0x23));
    esi <<= 0x11;
    *((rbp - 0x310)) = al;
    eax = 0;
    eax = fcn_0040ac50 (r14, 0, rdx, rcx);
    *((rbp - 0x2c0)) = eax;
    if (eax < 0) {
        goto label_212;
    }
    esi = *((rbp - 0x2c0));
    rdx = rbp - 0x150;
    edi = 1;
    eax = fxstat ();
    if (eax != 0) {
        goto label_213;
    }
    rax = *((rbp - 0x148));
    if (*((rbp - 0x268)) != rax) {
        goto label_214;
    }
    rax = *((rbp - 0x150));
    if (*((rbp - 0x270)) != rax) {
        goto label_214;
    }
    r12d &= 0x1ff;
    *((rbp - 0x354)) = r12d;
    if (*((rbp - 0x2d0)) != 0) {
        goto label_112;
    }
    r12 = *((rbp - 0x2b8));
    esi -= esi;
    eax = 0;
    esi &= 0xfffffe00;
    esi += 0x201;
    eax = fcn_0040ac50 (r12, rsi, rdx, rcx);
    ecx = eax;
    *((rbp - 0x2e8)) = eax;
    rax = 0xff000000ff00;
    if ((*((r13 + 0x20)) & rax) == 0) {
        goto label_215;
    }
    if (ecx >= 0) {
        goto label_216;
    }
label_84:
    rax = errno_location ();
    r12 = rax;
    if (*((r13 + 0x16)) == 0) {
        goto label_217;
    }
    eax = unlink (*((rbp - 0x2b8)));
    if (eax != 0) {
        goto label_218;
    }
    if (*((r13 + 0x2e)) != 0) {
        goto label_219;
    }
label_116:
    eax = *((r13 + 0x21));
    ecx = *((rbp - 0x308));
    *((rbp - 0x2d0)) = al;
    *((rbp - 0x348)) = ecx;
    if (al != 0) {
        goto label_220;
    }
label_78:
    r12d = *((rbp - 0x348));
    eax = 0;
    r12d = ~r12d;
    r12d &= *((rbp - 0x354));
    edx = r12d;
    *((rbp - 0x2e0)) = r12d;
    eax = fcn_0040ac50 (*((rbp - 0x2b8)), 0xc1, edx, rcx);
    *((rbp - 0x2e8)) = eax;
    rax = errno_location ();
    edx = *((rbp - 0x2e8));
    r12d = *(rax);
    *((rbp - 0x2f8)) = rax;
    edx >>= 0x1f;
    al = (r12d == 0x11) ? 1 : 0;
    al &= dl;
    *((rbp - 0x320)) = al;
    if (al == 0) {
        goto label_221;
    }
    eax = *((r13 + 0x18));
    r12d = 0x11;
    *((rbp - 0x2d0)) = al;
    if (al == 0) {
        goto label_222;
    }
label_87:
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2e0)) = rax;
    rax = dcgettext (0, "cannot create regular file %s");
    rcx = *((rbp - 0x2e0));
label_59:
    eax = 0;
    error (0, r12d, rax);
    r8d = 0;
    *((rbp - 0x2e0)) = 0;
label_85:
    *((rbp - 0x2e8)) = r8b;
    eax = close (*((rbp - 0x2c0)));
    r8d = *((rbp - 0x2e8));
    if (eax < 0) {
        goto label_223;
    }
    *((rbp - 0x2c0)) = r8b;
    free (*((rbp - 0x2e0)));
    r8d = *((rbp - 0x2c0));
    *((rbp - 0x2e8)) = 0;
    *((rbp - 0x2e0)) = r8b;
    if (r8b != 0) {
        goto label_21;
    }
    goto label_32;
label_205:
    ecx = *((r13 + 0x18));
    if (cl != 0) {
        goto label_224;
    }
    if (*((r13 + 0x15)) != 0) {
        goto label_224;
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax != 0xa000) {
label_75:
        eax = *((r9 + 0x18));
        eax &= 0xf000;
        if (eax != 0xa000) {
            goto label_225;
        }
label_46:
        ecx = *((r13 + 0x18));
label_45:
        if (cl == 0) {
            goto label_79;
        }
        eax = *((rbp - 0x258));
        eax &= 0xf000;
        if (eax == 0xa000) {
            goto label_226;
        }
    }
label_79:
    if (*((r13 + 0x2c)) != 0) {
        goto label_227;
    }
    if ((*((r13 + 0x14)) & 0xff00ff00) != 0) {
        eax = *((r9 + 0x18));
        eax &= 0xf000;
        if (eax == 0xa000) {
            goto label_227;
        }
    }
    if (*((r13 + 4)) != 2) {
        goto label_38;
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_228;
    }
    __asm ("movdqa xmm4, xmmword [rdx]");
    *((rbp - 0xc0)) = xmm4;
    __asm ("movdqa xmm5, xmmword [rdx + 0x10]");
    *((rbp - 0xb0)) = xmm5;
    __asm ("movdqa xmm6, xmmword [rdx + 0x20]");
    *((rbp - 0xa0)) = xmm6;
    __asm ("movdqa xmm7, xmmword [rdx + 0x30]");
    *((rbp - 0x90)) = xmm7;
    __asm ("movdqa xmm4, xmmword [rdx + 0x40]");
    *((rbp - 0x80)) = xmm4;
    __asm ("movdqa xmm5, xmmword [rdx + 0x50]");
    *((rbp - 0x70)) = xmm5;
    __asm ("movdqa xmm6, xmmword [rdx + 0x60]");
    *((rbp - 0x60)) = xmm6;
    __asm ("movdqa xmm7, xmmword [rdx + 0x70]");
    *((rbp - 0x50)) = xmm7;
    __asm ("movdqa xmm4, xmmword [rdx + 0x80]");
    *((rbp - 0x40)) = xmm4;
label_96:
    eax = *((r9 + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_229;
    }
    __asm ("movdqa xmm5, xmmword [r9]");
    *((rbp - 0x150)) = xmm5;
    __asm ("movdqa xmm6, xmmword [r9 + 0x10]");
    *((rbp - 0x140)) = xmm6;
    __asm ("movdqa xmm7, xmmword [r9 + 0x20]");
    *((rbp - 0x130)) = xmm7;
    __asm ("movdqa xmm4, xmmword [r9 + 0x30]");
    *((rbp - 0x120)) = xmm4;
    __asm ("movdqa xmm5, xmmword [r9 + 0x40]");
    *((rbp - 0x110)) = xmm5;
    __asm ("movdqa xmm6, xmmword [r9 + 0x50]");
    *((rbp - 0x100)) = xmm6;
    __asm ("movdqa xmm7, xmmword [r9 + 0x60]");
    *((rbp - 0xf0)) = xmm7;
    __asm ("movdqa xmm4, xmmword [r9 + 0x70]");
    *((rbp - 0xe0)) = xmm4;
    __asm ("movdqa xmm5, xmmword [r9 + 0x80]");
    *((rbp - 0xd0)) = xmm5;
label_95:
    rax = *((rbp - 0x148));
    if (*((rbp - 0xb8)) != rax) {
        goto label_30;
    }
    rax = *((rbp - 0x150));
    if (*((rbp - 0xc0)) != rax) {
        goto label_30;
    }
    if (*((r13 + 0x17)) == 0) {
        goto label_38;
    }
label_47:
    *((rbp - 0x2d0)) = 1;
    goto label_30;
label_184:
    *((rbp - 0x2b8)) = al;
    rax = fcn_0040ddd0 (4, r14);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "warning: source file %s specified more than once");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    r8d = *((rbp - 0x2b8));
    r15d = r8d;
    goto label_6;
label_171:
    rax = fcn_0040dcf0 (1, 4, *(0x0061b8e8));
    rbx = rax;
    rax = fcn_0040dcf0 (0, 4, *(0x0061b8f0));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "cannot copy a directory, %s, into itself, %s");
    r8 = rbx;
    rcx = r12;
    eax = 0;
    error (0, 0, rax);
    rax = *((rbp + 0x20));
    *(rax) = 1;
    goto label_14;
label_162:
    eax = fcn_0040f8a0 (rdi, rsi, rdx, rcx);
    if (eax == 0) {
        goto label_39;
    }
    goto label_40;
label_149:
    rax = rbp - 0xc0;
    rsi = *((rbp - 0x2b8));
    edi = 1;
    rdx = rax;
    r12 = rax;
    eax = lxstat ();
    if (eax != 0) {
        goto label_2;
    }
    rdx = r12;
    goto label_41;
label_198:
    *((rbp - 0x2e8)) = 0;
    r8d = 0;
    rcx = *((rbp - 0x270));
    if (*(rax) != rcx) {
        goto label_21;
    }
    goto label_42;
label_157:
    rdx = rbp - 0x150;
    esi = 0x412a7e;
    edi = 1;
    eax = xstat ();
    if (eax != 0) {
        goto label_43;
    }
    rdx = rbp - 0xc0;
    rsi = r12;
    edi = 1;
    eax = xstat ();
    if (eax != 0) {
        goto label_43;
    }
    rax = *((rbp - 0xb8));
    if (*((rbp - 0x148)) == rax) {
        goto label_230;
    }
label_86:
    free (r12);
    rax = fcn_0040dea0 (0, 3, *((rbp - 0x2b8)));
    edx = 5;
    esi = "%s: can make relative symbolic links only in current directory";
    rbx = rax;
    goto label_44;
label_224:
    eax = *((r9 + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_30;
    }
    if (r12b != 0) {
        if (*((r9 + 0x10)) > 1) {
            goto label_231;
        }
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_45;
    }
label_225:
    rax = *((r9 + 8));
    if (*((rdx + 8)) != rax) {
        goto label_30;
    }
    rax = *(r9);
    if (*(rdx) != rax) {
        goto label_30;
    }
    if (*((r13 + 0x17)) == 0) {
        goto label_46;
    }
    goto label_47;
label_208:
    rcx = r13;
    edx = 1;
    fcn_00405090 (*((rbp - 0x2b8)), 0);
    goto label_48;
label_207:
    edx = 5;
    rax = dcgettext (0, "renamed ");
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    fcn_004047e0 (r14, *((rbp - 0x2b8)), *((rbp - 0x300)));
    goto label_49;
label_193:
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot create directory %s";
    rbx = rax;
    goto label_50;
label_135:
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_51;
    }
label_139:
    if (*((r13 + 0x18)) == 0) {
        goto label_232;
    }
    r12d = *(r13);
    if (r12d == 0) {
        goto label_232;
    }
label_58:
    edx = *((rbp - 0x258));
    edx &= 0xf000;
    if (edx == 0x4000) {
        goto label_233;
    }
label_63:
    *((rbp - 0x2f0)) = cl;
    rax = fcn_0040ab40 (r14);
    ecx = *((rbp - 0x2f0));
    r8 = rax;
    if (*(rax) == 0x2e) {
        goto label_234;
    }
label_62:
    if (r12d != 3) {
        rdi = r8;
        *((rbp - 0x2f0)) = cl;
        *((rbp - 0x308)) = r8;
        rax = strlen (rdi);
        *((rbp - 0x2d0)) = rax;
        rax = fcn_0040ab40 (*((rbp - 0x2b8)));
        rdi = rax;
        *((rbp - 0x300)) = rax;
        rax = strlen (rdi);
        rcx = imp.__libc_start_main;
        r12 = rax;
        rdi = rcx;
        *((rbp - 0x310)) = rcx;
        rax = strlen (rdi);
        ecx = *((rbp - 0x2f0));
        r9 = rax;
        rax = r12 + rax;
        *((rbp - 0x318)) = r9;
        if (*((rbp - 0x2d0)) != rax) {
            goto label_102;
        }
        r8 = *((rbp - 0x308));
        *((rbp - 0x2d0)) = cl;
        rdi = r8;
        *((rbp - 0x2f0)) = r8;
        eax = memcmp (rdi, *((rbp - 0x300)), r12);
        ecx = *((rbp - 0x2d0));
        if (eax != 0) {
            goto label_102;
        }
        r8 = *((rbp - 0x2f0));
        eax = strcmp (r8 + r12, *((rbp - 0x310)));
        ecx = *((rbp - 0x2d0));
        if (eax != 0) {
            goto label_102;
        }
        *((rbp - 0x300)) = cl;
        rax = strlen (*((rbp - 0x2b8)));
        r9 = *((rbp - 0x318));
        *((rbp - 0x2f0)) = rax;
        rax = fcn_004100e0 (r9 + rax + 1);
        rdx = *((rbp - 0x2f0));
        rsi = *((rbp - 0x2b8));
        r12 = rax;
        rax = imp.__libc_start_main;
        rdi = r12;
        *((rbp - 0x2d0)) = rax;
        rax = mempcpy ();
        strcpy (rax, *((rbp - 0x2d0)));
        rax = rbp - 0xc0;
        rsi = r12;
        edi = 1;
        rdx = rax;
        eax = xstat ();
        *((rbp - 0x2d0)) = eax;
        free (r12);
        eax = *((rbp - 0x2d0));
        ecx = *((rbp - 0x300));
        if (eax != 0) {
            goto label_102;
        }
        rax = *((rbp - 0xb8));
        if (*((rbp - 0x268)) == rax) {
            goto label_235;
        }
    }
label_102:
    *((rbp - 0x2d0)) = cl;
    rax = fcn_0040a6b0 (*((rbp - 0x2b8)), *(r13));
    ecx = *((rbp - 0x2d0));
    r12 = rax;
    *((rbp - 0x300)) = rax;
    *((rbp - 0x2f0)) = cl;
    if (rax == 0) {
        goto label_236;
    }
    rax = strlen (rax);
    rax += 0x18;
    rax &= 0xfffffffffffffff0;
    rdi &= 0xfffffffffffffff0;
    rax = memcpy (rsp + 0xf, r12, rax + 1);
    r12 = rax;
    free (*((rbp - 0x300)));
    *((rbp - 0x300)) = r12;
    ecx = *((rbp - 0x2f0));
    *((rbp - 0x2d0)) = 1;
    goto label_52;
label_192:
    rax = 0xff000000ff00;
    if ((*((r13 + 0x20)) & rax) != 0) {
        goto label_237;
    }
label_67:
    *((rbp - 0x321)) = 0;
    *((rbp - 0x308)) = 0;
    goto label_53;
label_164:
    ecx = 0xffffffff;
    r8d = *((rbp - 0x2c8));
    rdx = *((rbp - 0x2b8));
    eax = fcn_00409b40 (r14, ecx);
    if (eax == 0) {
        goto label_54;
    }
    goto label_55;
label_204:
    eax = *((rbp - 0x1c8));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_35;
    }
    *((rbp - 0x308)) = ecx;
    *((rbp - 0x300)) = r8b;
    al = fcn_0040e2f0 (r14, *((rbp - 0x2b8)));
    if (al != 0) {
        goto label_38;
    }
    r8d = *(r13);
    r8d = *((rbp - 0x300));
    if (r8d != 0) {
        goto label_30;
    }
    ecx = *((rbp - 0x308));
    if (ecx == 0) {
        goto label_30;
    }
    r12d = *((r13 + 0x18));
    eax = 1;
    r12d ^= 1;
label_68:
    if (r12b == 0) {
        goto label_38;
    }
    *((rbp - 0x2d0)) = al;
    goto label_30;
label_182:
    edx = 5;
    rax = dcgettext (0, "copied ");
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    fcn_004047e0 (r14, *((rbp - 0x2b8)), *((rbp - 0x300)));
    *((rbp - 0x2c0)) = 1;
    goto label_7;
label_178:
    edi = 1;
    r15d = 1;
    rax = fcn_0040dcf0 (edi, 4, *(0x0061b8e8));
    r12 = rax;
    rax = fcn_0040dcf0 (0, 4, *(0x0061b8f0));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot move %s to a subdirectory of itself, %s");
    r8 = r12;
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    rax = *((rbp + 0x20));
    *(rax) = 1;
    goto label_6;
label_158:
    rax = fcn_0040dcf0 (1, 4, r14);
    rbx = rax;
    rax = fcn_0040dcf0 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "cannot create symbolic link %s to %s");
    r14 = rax;
    rax = errno_location ();
    r8 = rbx;
    rcx = r12;
    eax = 0;
    error (0, *(rax), r14);
    goto label_32;
label_191:
    if (*((rbp - 0x2c4)) != 0xa000) {
        goto label_238;
    }
    rax = fcn_00409c30 (r14, *((rbp - 0x240)));
    r12 = rax;
    if (rax == 0) {
        goto label_239;
    }
    ecx = *((r13 + 0x16));
    eax = fcn_00409a40 (rax, 0xffffff9c, *((rbp - 0x2b8)), rcx);
    if (eax < 0) {
        goto label_240;
    }
label_81:
    free (r12);
    eax = *((r13 + 0x25));
    *((rbp - 0x321)) = al;
    if (al != 0) {
        goto label_56;
    }
    r8d = *((r13 + 0x1d));
    if (r8b != 0) {
        goto label_241;
    }
    *((rbp - 0x321)) = r8b;
    *((rbp - 0x2e8)) = 1;
    *((rbp - 0x2e0)) = 1;
    goto label_21;
label_136:
    if (*((r13 + 0x18)) == 0) {
        goto label_242;
    }
    r12d = *(r13);
    if (r12d == 0) {
        goto label_242;
    }
    if (bl != 0) {
        goto label_57;
    }
    goto label_58;
label_214:
    rax = fcn_0040ddd0 (4, r14);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "skipping file %s, as it was replaced while being copied");
    rcx = r12;
    esi = 0;
    rdx = rax;
    goto label_59;
label_165:
label_65:
    eax = fcn_00409bd0 (*((rbp - 0x2b8)), 0xffffffff, *((r13 + 0x10)));
    eax = *((rbp - 0x2e0));
    if (eax != 0) {
        eax = r15d;
    }
    r15d = eax;
    goto label_6;
label_209:
    r12d = 1;
    ecx = 1;
    goto label_60;
label_196:
    fcn_00409480 (*((rbp - 0x2b8)), *((rbp - 0x1d8)), *((rbp - 0x1e0)));
    rax = *((rbp + 0x18));
    *(rax) = 1;
    goto label_61;
label_137:
    if (*((r13 + 0x18)) != 0) {
        goto label_58;
    }
label_141:
    *((rbp - 0x2f0)) = cl;
    rax = fcn_0040ab40 (r14);
    ecx = *((rbp - 0x2f0));
    r8 = rax;
    if (*(rax) == 0x2e) {
        goto label_243;
    }
label_74:
    eax = *((rbp - 0x1c8));
    eax &= 0xf000;
    if (eax != 0x4000) {
        goto label_62;
    }
    do {
        *((rbp - 0x300)) = 0;
        goto label_52;
label_140:
        eax = *((rbp - 0x258));
        eax &= 0xf000;
        if (eax == 0x4000) {
            goto label_244;
        }
INVALID_JUMP;
    } while (r12d == 0);
    goto label_63;
label_172:
    rax = fcn_0040ddd0 (4, *(0x0061b8f0));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "warning: source directory %s specified more than once");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    if (*((r13 + 0x18)) == 0) {
        goto label_28;
    }
    if (*((rbp - 0x2c0)) != 0) {
        goto label_64;
    }
    goto label_28;
label_194:
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot stat %s";
    rbx = rax;
    goto label_50;
label_212:
    rax = fcn_0040ddd0 (4, r14);
    edx = 5;
    esi = "cannot open %s for reading";
    rbx = rax;
    goto label_50;
label_166:
    eax = fcn_004053d0 ();
    eax = ~eax;
    edx = eax;
    edx &= 0x1ff;
    goto label_65;
label_134:
    rax = *((rbp - 0x2f0));
    *((rbp - 0x300)) = r8b;
    al = fcn_00404890 (r13, *((rbp - 0x2b8)), rax + 0x18);
    r8d = *((rbp - 0x300));
    if (al != 0) {
        goto label_36;
    }
    goto label_28;
label_197:
    fcn_004047e0 (r14, *((rbp - 0x2b8)), 0);
    goto label_53;
label_190:
    eax = *((rbp - 0x308));
    rsi = *((rbp - 0x2b8));
    edi = 0;
    rcx = rbp - 0xc0;
    *((rbp - 0xc0)) = 0;
    eax = ~eax;
    eax &= *((rbp - 0x2c8));
    edx = eax;
    r12d = eax;
    eax = xmknod ();
    r8d = *((rbp - 0x2c0));
    if (eax != 0) {
        goto label_245;
    }
label_80:
    *((rbp - 0x2e8)) = r8b;
    *((rbp - 0x321)) = r8b;
    *((rbp - 0x2e0)) = 1;
    goto label_21;
label_244:
    eax = *((rbp - 0x1c8));
label_233:
    eax &= 0xf000;
    if (eax == 0x4000) {
        goto label_66;
    }
    if (r12d != 0) {
        goto label_63;
    }
    rax = fcn_0040dea0 (0, 3, *((rbp - 0x2b8)));
    r12 = rax;
    rax = fcn_0040dea0 (0, 3, r14);
    edx = 5;
    esi = "cannot move directory onto non-directory: %s -> %s";
    rbx = rax;
    goto label_31;
label_238:
    rax = fcn_0040ddd0 (4, r14);
    edx = 5;
    esi = "%s has unknown file type";
    rbx = rax;
    goto label_44;
label_237:
    esi = *((r13 + 0x25));
    edx = 0;
    rcx = r13;
    al = fcn_00405090 (*((rbp - 0x2b8)), rsi);
    if (al != 0) {
        goto label_67;
    }
    if (*((r13 + 0x26)) == 0) {
        goto label_67;
    }
    goto label_32;
label_206:
    *((rbp - 0x2d0)) = r8b;
    eax = fcn_0040e2f0 (r14, *((rbp - 0x2b8)));
    r8d = *((rbp - 0x2d0));
    eax ^= 1;
    r12d = eax;
    eax = 0;
    goto label_68;
label_227:
    rax = *(rdx);
    r12b = (*(r9) == rax) ? 1 : 0;
    eax = 0;
    goto label_68;
label_242:
    rax = fcn_0040dcf0 (1, 4, r14);
    r12 = rax;
    rax = fcn_0040dcf0 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot overwrite non-directory %s with directory %s";
    rbx = rax;
    goto label_31;
label_223:
    rax = fcn_0040ddd0 (4, r14);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "failed to close %s");
    r12 = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), r12);
    free (*((rbp - 0x2e0)));
    goto label_32;
label_236:
    rax = errno_location ();
    *((rbp - 0x2d0)) = 1;
    ecx = *((rbp - 0x2f0));
    r12 = rax;
    if (*(rax) == 2) {
        goto label_52;
    }
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    rbx = rax;
label_89:
    r15d = 0;
    rax = dcgettext (0, "cannot backup %s");
    rcx = rbx;
    eax = 0;
    error (0, *(r12), rax);
    goto label_6;
label_232:
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot overwrite directory %s with non-directory";
    rbx = rax;
    goto label_69;
label_163:
    eax = *((rbp - 0x1c0));
    if (*((rbp - 0x250)) != eax) {
        goto label_70;
    }
    goto label_71;
label_213:
    rax = fcn_0040ddd0 (4, r14);
    edx = 5;
    *((rbp - 0x2e0)) = rax;
    rax = dcgettext (0, "cannot fstat %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2e0));
    rdx = r12;
    esi = *(rax);
    goto label_59;
label_142:
    *((rbp - 0x300)) = 0;
    if (*((r13 + 4)) != 2) {
        goto label_52;
    }
    eax = *((rbp - 0x258));
    eax &= 0xf000;
    if (eax != 0x8000) {
        goto label_72;
    }
    goto label_52;
label_234:
    eax = 1;
label_76:
    edx = 0;
    dl = (*((r8 + 1)) == 0x2e) ? 1 : 0;
    edx = *((r8 + rdx + 1));
    if (dl == 0) {
        goto label_73;
    }
    if (dl == 0x2f) {
        goto label_73;
    }
    if (al == 0) {
        goto label_74;
    }
    goto label_62;
label_231:
    *((rbp - 0x310)) = r8b;
    *((rbp - 0x308)) = r9;
    *((rbp - 0x300)) = rdx;
    al = fcn_0040e2f0 (r14, *((rbp - 0x2b8)));
    rdx = *((rbp - 0x300));
    r9 = *((rbp - 0x308));
    r8d = *((rbp - 0x310));
    if (al == 0) {
        goto label_246;
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_75;
    }
    goto label_46;
label_243:
    eax = 0;
    goto label_76;
label_199:
    rax = fcn_0040ddd0 (4, r14);
    edx = 5;
    *((rbp - 0x2c0)) = rax;
    rax = dcgettext (0, "cannot access %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2c0));
    eax = 0;
    error (0, *(rax), r12);
    *((rbp - 0x2e0)) = 0;
    goto label_77;
label_195:
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "setting permissions for %s";
    rbx = rax;
    goto label_50;
label_112:
    eax = *((rbp - 0x308));
    *((rbp - 0x348)) = eax;
    goto label_78;
label_226:
    if (*((r9 + 0x10)) <= 1) {
        goto label_79;
    }
    rdi = r14;
    *((rbp - 0x310)) = r8b;
    *((rbp - 0x308)) = r9;
    *((rbp - 0x300)) = rdx;
    rax = canonicalize_file_name ();
    rdx = *((rbp - 0x300));
    r9 = *((rbp - 0x308));
    r8d = *((rbp - 0x310));
    if (rax == 0) {
        goto label_79;
    }
    rdi = rax;
    *((rbp - 0x300)) = r8b;
    *((rbp - 0x2d0)) = rax;
    eax = fcn_0040e2f0 (rdi, *((rbp - 0x2b8)));
    rcx = *((rbp - 0x2d0));
    eax ^= 1;
    r12d = eax;
    eax = free (rcx);
    eax = 0;
    r8d = *((rbp - 0x300));
    goto label_68;
label_245:
    esi = r12d;
    rdi = *((rbp - 0x2b8));
    esi &= 0xffffefff;
    eax = mkfifo ();
    r8d = *((rbp - 0x2c0));
    if (eax == 0) {
        goto label_80;
    }
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot create fifo %s";
    rbx = rax;
    goto label_50;
label_240:
    rax = errno_location ();
    eax = *(rax);
    *((rbp - 0x2c0)) = eax;
    if (eax == 0) {
        goto label_81;
    }
    if (*((r13 + 0x2d)) == 1) {
        if (*((rbp - 0x2d0)) == 0) {
            goto label_247;
        }
    }
label_111:
    free (r12);
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "cannot create symbolic link %s");
    rcx = r12;
    eax = 0;
    error (0, *((rbp - 0x2c0)), rax);
    goto label_32;
label_200:
    r12d = 0;
    *((rbp - 0x2e0)) = 1;
    goto label_82;
label_138:
    rax = fcn_0040dcf0 (1, 4, r14);
    r12 = rax;
    rax = fcn_0040dcf0 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "will not overwrite just-created %s with %s";
    rbx = rax;
    goto label_31;
label_145:
    al = (*((rbp - 0x2c4)) == 0x4000) ? 1 : 0;
    al &= *((r13 + 0x2a));
    *((rbp - 0x2d0)) = al;
    if (al != 0) {
        goto label_83;
    }
    *((rbp - 0x2d0)) = 1;
    *((rbp - 0x300)) = 0;
    goto label_5;
label_144:
    *((rbp - 0x2f0)) = cl;
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "removed %s\n");
    rdx = r12;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = *((rbp - 0x2f0));
    *((rbp - 0x300)) = 0;
    goto label_52;
label_215:
    ecx = *((rbp - 0x2e8));
    if (ecx < 0) {
        goto label_84;
    }
label_94:
    *((rbp - 0x348)) = 0;
label_101:
    rax = rbp - 0xc0;
    esi = *((rbp - 0x2e8));
    edi = 1;
    rdx = rax;
    *((rbp - 0x320)) = rax;
    eax = fxstat ();
    *((rbp - 0x2f8)) = eax;
    if (eax != 0) {
        goto label_248;
    }
    if (*((rbp - 0x310)) == 0) {
        goto label_109;
    }
    if (*((r13 + 0x34)) != 0) {
        goto label_249;
    }
label_110:
    eax = getpagesize ();
    r12 = (int64_t) eax;
    rax = *((rbp - 0x88));
    *((rbp - 0x340)) = rax;
    rdx = rax - 0x20000;
    *((rbp - 0x330)) = rax;
    rax = 0x1ffffffffffe0000;
    if (rdx > rax) {
        rcx = *((rbp - 0x340));
        rax = 0x1fffffffffffffff;
        *((rbp - 0x330)) = 0x20000;
        rdx = rcx - 1;
        eax = 0x200;
        if (rdx <= rax) {
            rax = rcx;
        }
        *((rbp - 0x340)) = rax;
    }
    edi = *((rbp - 0x2c0));
    ecx = 2;
    edx = 0;
    esi = 0;
    fcn_0040ac10 ();
    r9d = *((rbp - 0x138));
    r9d &= 0xf000;
    if (r9d == 0x8000) {
        rax = *((rbp - 0x120));
        ecx = 0x200;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        al = (*((rbp - 0x110)) < rax) ? 1 : 0;
        eax = (int32_t) al;
        *((rbp - 0x2f8)) = eax;
    }
    rax = r12 - 1;
    *((rbp - 0x2e0)) = rax;
    eax = *((rbp - 0xa8));
    eax &= 0xf000;
    if (eax == 0x8000) {
        goto label_250;
    }
label_107:
    rdi = *((rbp - 0x118));
    rsi = *((rbp - 0x330));
    rax = 0x1ffffffffffe0000;
    r8 = 0x7fffffffffffffff;
    r8 -= r12;
    *((rbp - 0x338)) = r9d;
    rdx = rdi - 0x20000;
    *((rbp - 0x2e0)) = r8;
    eax = 0x20000;
    rdx = r8;
    if (rdx > rax) {
        rdi = rax;
    }
    rax = fcn_0040a780 (rdi, rsi, rdx);
    r9d = *((rbp - 0x338));
    r8 = *((rbp - 0x2e0));
    rcx = rax;
    if (r9d == 0x8000) {
        goto label_251;
    }
label_106:
    rax = *((rbp - 0x330));
    edx = 0;
    rsi = rcx + rax - 1;
    rax = rsi;
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    rsi -= rdx;
    *((rbp - 0x330)) = rsi;
    if (rsi == 0) {
        goto label_252;
    }
    if (r8 < rsi) {
        goto label_252;
    }
label_105:
    rax = *((rbp - 0x330));
    rax = fcn_004100e0 (r12 + rax);
    rcx = r12 - 1;
    edx = 0;
    rcx += rax;
    *((rbp - 0x2e0)) = rax;
    rax = rcx;
    rax = rdx_rax / r12;
    rdx = rdx_rax % r12;
    rcx -= rdx;
    *((rbp - 0x350)) = rcx;
    if (*((rbp - 0x2f8)) != 0) {
        goto label_253;
    }
    rax = rbp - 0x2a0;
    *((rbp - 0x340)) = 0;
    *((rbp - 0x2f8)) = rax;
    r9b = (*((r13 + 0xc)) == 3) ? 1 : 0;
label_114:
    rax = rbp - 0x2a8;
    ch |= bh;
    *((rbx - 0x2e74b))--;
    *((rbx - 0x2bf43))--;
invalid_funccall(); //    void (*rdx - 1)(uint64_t*, uint64_t, uint64_t) (*((rbp - 0x2f8)), rax, rdx);
    al = fcn_00404b90 (rdi, rsi, *((rbp - 0x350)), *((rbp - 0x330)), *((rbp - 0x340)), 0);
    if (al == 0) {
        goto label_98;
    }
    if (*((rbp - 0x2a8)) != 0) {
        goto label_254;
    }
label_88:
    if (*((r13 + 0x1f)) != 0) {
        goto label_255;
    }
label_92:
    if (*((r13 + 0x1d)) != 0) {
        eax = *((rbp - 0xa4));
        if (*((rbp - 0x254)) == eax) {
            eax = *((rbp - 0xa0));
            if (*((rbp - 0x250)) == eax) {
                goto label_256;
            }
        }
        r9 = *((rbp - 0x320));
        r8d = *((rbp - 0x2d0));
        eax = fcn_004051e0 (r13, *((rbp - 0x2b8)), *((rbp - 0x2e8)), *((rbp - 0x2d8)), r8);
        if (eax == 0xffffffff) {
            goto label_98;
        }
        if (eax != 0) {
            goto label_256;
        }
        *((rbp - 0x318)) &= 0xfffff1ff;
    }
label_256:
    if (*((r13 + 0x27)) != 0) {
        if ((*((rbp - 0xa8)) & 0x80) == 0) {
            goto label_257;
        }
    }
label_104:
    rax = 0xff0000000000ff;
    if ((*((r13 + 0x18)) & rax) != 0) {
        goto label_258;
    }
    if (*((r13 + 0x2b)) != 0) {
        goto label_259;
    }
    if (*((r13 + 0x20)) != 0) {
        goto label_260;
    }
    r8d = 1;
    if (*((rbp - 0x348)) != 0) {
        goto label_261;
    }
label_93:
    *((rbp - 0x2f8)) = r8b;
    eax = close (*((rbp - 0x2e8)));
    r8d = *((rbp - 0x2f8));
    if (eax >= 0) {
        goto label_85;
    }
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2e8)) = rax;
    rax = dcgettext (0, "failed to close %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2e8));
    eax = 0;
    error (0, *(rax), r12);
    r8d = 0;
    goto label_85;
label_241:
    edx = *((rbp - 0x250));
    esi = *((rbp - 0x254));
    *((rbp - 0x2c0)) = r8b;
    rdi = *((rbp - 0x2b8));
    eax = lchown ();
    r8d = *((rbp - 0x2c0));
    if (eax == 0) {
        goto label_262;
    }
    al = fcn_004051b0 (r13);
    *((rbp - 0x2e8)) = al;
    if (al == 0) {
        goto label_263;
    }
    eax = *((rbp - 0x2e8));
    r8d = 0;
    *((rbp - 0x2e0)) = al;
    goto label_21;
label_230:
    rax = *((rbp - 0xc0));
    if (*((rbp - 0x150)) != rax) {
        goto label_86;
    }
    goto label_43;
label_222:
    rsi = *((rbp - 0x2b8));
    rdx = rbp - 0xc0;
    edi = 1;
    eax = lxstat ();
    if (eax == 0) {
        eax = *((rbp - 0xa8));
        eax &= 0xf000;
        if (eax != 0xa000) {
            goto label_221;
        }
        r8d = *((r13 + 0x30));
        if (r8b == 0) {
            goto label_264;
        }
        eax = 0;
        eax = fcn_0040ac50 (*((rbp - 0x2b8)), 0x41, *((rbp - 0x2e0)), rcx);
        *((rbp - 0x2e8)) = eax;
        rax = *((rbp - 0x2f8));
        r12d = *(rax);
    }
label_221:
    eax = *((rbp - 0x2e8));
    eax >>= 0x1f;
    dl = (r12d == 0x15) ? 1 : 0;
    dl &= al;
    *((rbp - 0x2d0)) = dl;
    if (dl == 0) {
        goto label_265;
    }
    rsi = *((rbp - 0x2b8));
    r12d = 0x15;
    rdi = rsi;
    if (*(rsi) == 0) {
        goto label_87;
    }
    eax = 0;
    rcx |= 0xffffffffffffffff;
    r12d = 0;
    __asm ("repne scasb al, byte [rdi]");
    rax = rcx;
    rax = ~rax;
    r12b = (*((rsi + rax - 2)) != 0x2f) ? 1 : 0;
    r12d += 0x14;
    goto label_87;
label_246:
    r12d = *((r13 + 0x18));
    r12d ^= 1;
    goto label_68;
label_109:
    *((rbp - 0x2e0)) = 0;
    goto label_88;
label_239:
    rax = fcn_0040ddd0 (4, r14);
    edx = 5;
    esi = "cannot read symbolic link %s";
    rbx = rax;
    goto label_50;
label_143:
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot remove %s";
    rbx = rax;
    goto label_89;
label_185:
    rsi = *((rbp - 0x2b8));
    rdx = rbp - 0x1e0;
    edi = 1;
    eax = lxstat ();
    if (eax == 0) {
        goto label_90;
    }
    rsi = *((rbp - 0x2b8));
    goto label_91;
label_262:
    *((rbp - 0x2e8)) = r8b;
    *((rbp - 0x2e0)) = r8b;
    r8d = 0;
    goto label_21;
label_255:
    rax = *((rbp - 0x228));
    *((rbp - 0x2a0)) = rax;
    rax = *((rbp - 0x220));
    *((rbp - 0x298)) = rax;
    rax = *((rbp - 0x218));
    *((rbp - 0x290)) = rax;
    rax = *((rbp - 0x210));
    *((rbp - 0x288)) = rax;
    eax = fcn_0040f460 (*((rbp - 0x2e8)), *((rbp - 0x2b8)), rbp - 0x2a0, rcx, r8);
    if (eax == 0) {
        goto label_92;
    }
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2f8)) = rax;
    rax = dcgettext (0, "preserving times for %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2f8));
    eax = 0;
    error (0, *(rax), r12);
    if (*((r13 + 0x24)) == 0) {
        goto label_92;
    }
label_98:
    r8d = 0;
    goto label_93;
label_216:
    esi = *((r13 + 0x25));
    rcx = r13;
    edx = 0;
    eax = fcn_00405090 (r12, rsi);
    r8d = eax;
    if (al != 0) {
        goto label_94;
    }
    eax = *((r13 + 0x26));
    *((rbp - 0x2d0)) = al;
    if (al == 0) {
        goto label_94;
    }
    *((rbp - 0x2d0)) = 0;
    *((rbp - 0x2e0)) = 0;
    goto label_93;
label_229:
    rax = rbp - 0x150;
    rsi = *((rbp - 0x2b8));
    edi = 1;
    *((rbp - 0x300)) = r8b;
    rdx = rax;
    eax = xstat ();
    r8d = *((rbp - 0x300));
    if (eax == 0) {
        goto label_95;
    }
    goto label_30;
label_228:
    rax = rbp - 0xc0;
    rsi = r14;
    edi = 1;
    *((rbp - 0x308)) = r8b;
    rdx = rax;
    *((rbp - 0x300)) = r9;
    eax = xstat ();
    r9 = *((rbp - 0x300));
    r8d = *((rbp - 0x308));
    if (eax == 0) {
        goto label_96;
    }
    goto label_30;
label_248:
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2e0)) = rax;
    rax = dcgettext (0, "cannot fstat %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2e0));
    eax = 0;
    error (0, *(rax), r12);
    r8d = 0;
    *((rbp - 0x2e0)) = 0;
    goto label_93;
label_258:
    r8d = *((rbp - 0x318));
    ecx = *((rbp - 0x2e8));
    rdx = *((rbp - 0x2b8));
    eax = fcn_00409b40 (r14, *((rbp - 0x2c0)));
    r8d = 1;
    if (eax == 0) {
        goto label_93;
    }
label_118:
    r8d = *((r13 + 0x24));
    r8d ^= 1;
    goto label_93;
label_217:
    r12d = *(r12);
    if (r12d == 2) {
        if (*((r13 + 0x18)) == 0) {
            goto label_266;
        }
    }
    *((rbp - 0x2d0)) = 0;
    goto label_87;
label_266:
    *((rbp - 0x348)) = 0;
    goto label_78;
label_253:
    *((rbp - 0x323)) = 0;
    *((rbp - 0x328)) = 1;
label_108:
    rcx = rbp - 0x2a0;
    rax = *((rbp - 0x120));
    r12d = 0;
    rsi = rcx;
    *((rbp - 0x2f8)) = rcx;
    *((rbp - 0x368)) = rax;
    fcn_00409550 (*((rbp - 0x2c0)), rsi);
    r10d = 0;
    *((rbp - 0x358)) = ebx;
    ecx = 0;
    *((rbp - 0x360)) = r13;
    rbx = *((rbp - 0x368));
    *((rbp - 0x322)) = r15b;
    r15d = *((rbp - 0x310));
    *((rbp - 0x338)) = r14;
    r14 = r10;
label_100:
    *((rbp - 0x310)) = rcx;
    al = fcn_00409580 (*((rbp - 0x2f8)));
    rcx = *((rbp - 0x310));
    if (al == 0) {
        goto label_267;
    }
    if (*((rbp - 0x288)) == 0) {
        goto label_268;
    }
    rdx = r14;
    rsi = r12;
    r13d = 0;
    eax = 0;
    while (rcx == 0) {
label_97:
        r8d = 0;
        if (*((rbp - 0x328)) == 3) {
            r8 = *((rbp - 0x340));
        }
label_99:
        rax = rbp - 0x2a9;
        rax = rbp - 0x2a8;
        al = fcn_00404b90 (*((rbp - 0x2c0)), *((rbp - 0x2e8)), *((rbp - 0x350)), *((rbp - 0x330)), r8, 1);
        if (al == 0) {
            goto label_269;
        }
        rax = *((rbp - 0x2a8));
        rcx = r12 + rax;
        if (rax != 0) {
            r15d = *((rbp - 0x2a9));
        }
        if (rbx == rcx) {
            goto label_270;
        }
        eax = r13 + 1;
        rsi = r12;
        rdx = r14;
        r13 = rax;
        if (rax >= *((rbp - 0x288))) {
            goto label_268;
        }
        rcx = rax * 3;
        rax = *((rbp - 0x278));
        rax = rax + rcx*8;
        r12 = *(rax);
        r14 = *((rax + 8));
        rax = r12 + r14;
        if (rbx < rax) {
            r14 = rbx;
            if (r12 > rbx) {
                r12 = rbx;
            }
            r14 -= r12;
        }
        rcx = r12;
        r15d = 0;
        rcx -= rsi;
        rcx -= rdx;
    }
    edi = *((rbp - 0x2c0));
    edx = 0;
    rsi = r12;
    *((rbp - 0x310)) = rcx;
    rax = lseek ();
    rcx = *((rbp - 0x310));
    if (rax < 0) {
        goto label_271;
    }
    eax = *((rbp - 0x328));
    if (eax == 1) {
        goto label_272;
    }
    dl = (eax == 3) ? 1 : 0;
    eax = fcn_00404ad0 (*((rbp - 0x2e8)), *((rbp - 0x2b8)), 0, rcx);
    r15d = eax;
    if (al != 0) {
        goto label_97;
    }
label_269:
    r15d = *((rbp - 0x322));
    r14 = *((rbp - 0x338));
    r13 = *((rbp - 0x360));
    ebx = *((rbp - 0x358));
label_117:
    free (*((rbp - 0x278)));
    goto label_98;
label_272:
    al = fcn_00404690 (*((rbp - 0x2e8)), rcx);
    if (al == 0) {
        goto label_273;
    }
    r8d = 0;
    goto label_99;
label_270:
    *((rbp - 0x27f)) = 1;
label_268:
    *((rbp - 0x310)) = rcx;
    free (*((rbp - 0x278)));
    *((rbp - 0x278)) = 0;
    *((rbp - 0x288)) = 0;
    rcx = *((rbp - 0x310));
    if (*((rbp - 0x27f)) == 0) {
        goto label_100;
    }
    *((rbp - 0x310)) = r15b;
    r14 = *((rbp - 0x338));
    r15d = *((rbp - 0x322));
    r13 = *((rbp - 0x360));
    ebx = *((rbp - 0x358));
label_120:
    r12b = (*((rbp - 0x368)) > rcx) ? 1 : 0;
    if (*((rbp - 0x368)) > rcx) {
        goto label_274;
    }
    if (*((rbp - 0x310)) == 0) {
        goto label_88;
    }
label_274:
    if (*((rbp - 0x328)) == 1) {
        goto label_275;
    }
    rsi = *((rbp - 0x368));
    edi = *((rbp - 0x2e8));
    *((rbp - 0x2f8)) = rcx;
    eax = ftruncate ();
    rcx = *((rbp - 0x2f8));
    if (eax != 0) {
        goto label_122;
    }
    if (*((rbp - 0x328)) != 3) {
        goto label_88;
    }
    if (r12b == 0) {
        goto label_88;
    }
    rdx = *((rbp - 0x368));
    rdx -= rcx;
    eax = fcn_00404740 (*((rbp - 0x2e8)), rcx);
    if (eax >= 0) {
        goto label_88;
    }
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2f8)) = rax;
label_115:
    rax = dcgettext (0, "error deallocating %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2f8));
    eax = 0;
    error (0, *(rax), r12);
    goto label_98;
label_265:
    *((rbp - 0x2d0)) = 1;
    if (*((rbp - 0x2e8)) < 0) {
        goto label_87;
    }
    goto label_101;
label_259:
label_119:
    eax = fcn_00409bd0 (*((rbp - 0x2b8)), *((rbp - 0x2e8)), *((r13 + 0x10)));
    r8b = (eax == 0) ? 1 : 0;
    goto label_93;
label_235:
    rax = *((rbp - 0xc0));
    if (*((rbp - 0x270)) != rax) {
        goto label_102;
    }
    if (*((r13 + 0x18)) == 0) {
        goto label_276;
    }
    edx = 5;
    rax = dcgettext (0, "backing up %s might destroy source;  %s not moved");
    rbx = rax;
    do {
        rax = fcn_0040dcf0 (1, 4, r14);
        r12 = rax;
        rax = fcn_0040dcf0 (0, 4, *((rbp - 0x2b8)));
        r8 = r12;
        rdx = rbx;
        rcx = rax;
        goto label_103;
label_276:
        edx = 5;
        rax = dcgettext (0, "backing up %s might destroy source;  %s not copied");
        rbx = rax;
    } while (1);
label_257:
    eax = geteuid ();
    if (eax == 0) {
        goto label_104;
    }
    eax = fcn_00404780 (*((rbp - 0x2e8)), *((rbp - 0x2b8)), 0x180);
    if (eax != 0) {
        goto label_104;
    }
    edx = ~edx;
    edx &= *((rbp - 0x354));
    fcn_00404780 (*((rbp - 0x2e8)), *((rbp - 0x2b8)), *((rbp - 0x348)));
    goto label_104;
label_252:
    *((rbp - 0x330)) = rcx;
    goto label_105;
label_251:
    rax = *((rbp - 0x120));
    if (*((rbp - 0x330)) <= rax) {
        goto label_106;
    }
    rax++;
    *((rbp - 0x330)) = rax;
    goto label_106;
label_250:
    eax = *((r13 + 0xc));
    if (eax == 3) {
        goto label_277;
    }
    if (eax != 2) {
        goto label_107;
    }
    if ((*((rbp - 0x2f8)) & 1) == 0) {
        goto label_107;
    }
    rax = *((rbp - 0x330));
    rax = fcn_004100e0 (rax + r12);
    rcx = r12 - 1;
    edx = 0;
    rcx += rax;
    *((rbp - 0x2e0)) = rax;
    rax = rcx;
    rax = rdx_rax / r12;
    rdx = rdx_rax % r12;
    rcx -= rdx;
    *((rbp - 0x350)) = rcx;
label_113:
    eax = *((r13 + 0xc));
    *((rbp - 0x328)) = eax;
    eax = *((rbp - 0x310));
    *((rbp - 0x323)) = al;
    goto label_108;
label_249:
    edx = *((rbp - 0x2c0));
    eax = 0;
    eax = ioctl (*((rbp - 0x2e8)), 0x40049409);
    if (eax == 0) {
        goto label_109;
    }
    if (*((r13 + 0x34)) != 2) {
        goto label_110;
    }
    rax = fcn_0040dcf0 (1, 4, r14);
    *((rbp - 0x2f8)) = rax;
    rax = fcn_0040dcf0 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "failed to clone %s from %s");
    *((rbp - 0x2e0)) = rax;
    rax = errno_location ();
    r8 = *((rbp - 0x2f8));
    rcx = r12;
    eax = 0;
    error (0, *(rax), *((rbp - 0x2e0)));
    r8d = 0;
    *((rbp - 0x2e0)) = 0;
    goto label_93;
label_263:
    edx = 5;
    rax = dcgettext (0, "failed to preserve ownership for %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2b8));
    eax = 0;
    error (0, *(rax), r12);
    eax = *((r13 + 0x24));
    *((rbp - 0x321)) = al;
    if (al != 0) {
        goto label_32;
    }
    r8d = *((rbp - 0x2c0));
    *((rbp - 0x2e8)) = r8b;
    *((rbp - 0x2e0)) = r8b;
    r8d = 0;
    goto label_21;
label_247:
    eax = *((rbp - 0x1c8));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_111;
    }
    eax = *((rbp - 0x2d0));
    rcx |= 0xffffffffffffffff;
    rdi = r12;
    rsi = *((rbp - 0x1b0));
    __asm ("repne scasb al, byte [rdi]");
    rcx = ~rcx;
    rax = rcx - 1;
    if (rsi != rax) {
        goto label_111;
    }
    rax = fcn_00409c30 (*((rbp - 0x2b8)), rsi);
    if (rax == 0) {
        goto label_111;
    }
    rdi = rax;
    *((rbp - 0x2e0)) = rax;
    eax = strcmp (rdi, r12);
    rdx = *((rbp - 0x2e0));
    rdi = rdx;
    if (eax != 0) {
        goto label_278;
    }
    free (rdi);
    goto label_81;
label_220:
    r8 = r13;
    ecx = 1;
    eax = fcn_00404fc0 (r14, *((rbp - 0x2b8)), *((rbp - 0x354)));
    r8d = eax;
    if (al != 0) {
        goto label_112;
    }
    *((rbp - 0x2e0)) = 0;
    goto label_85;
label_277:
    rax = *((rbp - 0x330));
    rax = fcn_004100e0 (rax + r12);
    rcx = r12 - 1;
    edx = 0;
    rcx += rax;
    *((rbp - 0x2e0)) = rax;
    rax = rcx;
    rax = rdx_rax / r12;
    rdx = rdx_rax % r12;
    rcx -= rdx;
    *((rbp - 0x350)) = rcx;
    if (*((rbp - 0x2f8)) != 0) {
        goto label_113;
    }
    r9d = 0;
    rax = rbp - 0x2a0;
    r9b = (*((r13 + 0xc)) == 3) ? 1 : 0;
    *((rbp - 0x2f8)) = rax;
    goto label_114;
label_254:
    rsi = *((rbp - 0x2a0));
    edi = *((rbp - 0x2e8));
    eax = ftruncate ();
    if (eax >= 0) {
        goto label_88;
    }
label_122:
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "failed to extend %s";
    *((rbp - 0x2f8)) = rax;
    goto label_115;
label_219:
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "removed %s\n");
    rdx = r12;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_116;
label_271:
    r14 = *((rbp - 0x338));
    r15d = *((rbp - 0x322));
    r13 = *((rbp - 0x360));
    ebx = *((rbp - 0x358));
    rax = fcn_0040ddd0 (4, r14);
    edx = 5;
    *((rbp - 0x2f8)) = rax;
label_121:
    rax = dcgettext (0, "cannot lseek %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2f8));
    eax = 0;
    error (0, *(rax), r12);
    goto label_117;
label_218:
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2e0)) = rax;
    rax = dcgettext (0, "cannot remove %s");
    rcx = *((rbp - 0x2e0));
    esi = *(r12);
    rdx = rax;
    goto label_59;
label_261:
    *((rbp - 0x2f8)) = r8b;
    eax = fcn_004053d0 ();
    r8d = *((rbp - 0x2f8));
    eax = ~eax;
    if ((*((rbp - 0x348)) & eax) == 0) {
        goto label_93;
    }
    eax = fcn_00404780 (*((rbp - 0x2e8)), *((rbp - 0x2b8)), *((rbp - 0x354)));
    r8d = *((rbp - 0x2f8));
    if (eax == 0) {
        goto label_93;
    }
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2f8)) = rax;
    rax = dcgettext (0, "preserving permissions for %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2f8));
    eax = 0;
    error (0, *(rax), r12);
    goto label_118;
label_260:
    eax = fcn_004053d0 ();
    eax = ~eax;
    edx = eax;
    edx &= 0x1b6;
    goto label_119;
label_267:
    *((rbp - 0x310)) = r15b;
    r14 = *((rbp - 0x338));
    r15d = *((rbp - 0x322));
    r13 = *((rbp - 0x360));
    ebx = *((rbp - 0x358));
    if (*((rbp - 0x27f)) != 0) {
        goto label_120;
    }
    if (*((rbp - 0x280)) != 0) {
        r9d = 0;
        eax = 0;
        r9b = (*((r13 + 0xc)) == 3) ? 1 : 0;
        if (*((rbp - 0x323)) != 0) {
            rax = *((rbp - 0x340));
        }
        *((rbp - 0x340)) = rax;
        goto label_114;
label_273:
        r15d = *((rbp - 0x322));
        r14 = *((rbp - 0x338));
        r13 = *((rbp - 0x360));
        ebx = *((rbp - 0x358));
        rax = fcn_0040dea0 (0, 3, *((rbp - 0x2b8)));
        edx = 5;
        esi = "%s: write failed";
        *((rbp - 0x2f8)) = rax;
        goto label_121;
    }
    rax = fcn_0040dea0 (0, 3, r14);
    edx = 5;
    esi = "%s: failed to get extents info";
    *((rbp - 0x2f8)) = rax;
    goto label_115;
label_275:
    rsi -= rcx;
    al = fcn_00404690 (*((rbp - 0x2e8)), *((rbp - 0x368)));
    if (al != 0) {
        goto label_88;
    }
    goto label_122;
label_278:
    free (rdi);
    goto label_111;
label_264:
    *((rbp - 0x2e8)) = r8b;
    rax = fcn_0040ddd0 (4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "not writing through dangling symlink %s");
    rcx = r12;
    eax = 0;
    error (0, 0, rax);
    eax = *((rbp - 0x320));
    *((rbp - 0x2e0)) = 0;
    r8d = *((rbp - 0x2e8));
    *((rbp - 0x2d0)) = al;
    goto label_85;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4082b7 */
#include <stdint.h>
 
void fcn_004082b7 (void) {
    ch |= bh;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409280 */
#include <stdint.h>
 
uint64_t fcn_00409280 (int64_t arg1, int64_t arg2, uint32_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    if (rcx == 0) {
        goto label_0;
    }
    if (*(rcx) > 3) {
        goto label_1;
    }
    eax = *((rcx + 0xc));
    r10d = rax - 1;
    if (r10d > 2) {
        goto label_2;
    }
    r10d = *((rcx + 0x34));
    if (r10d > 2) {
        goto label_3;
    }
    while (*((rcx + 0x2c)) == 0) {
        if (eax != 2) {
            if (r10d == 2) {
                goto label_4;
            }
        }
        *((rsp + 0xf)) = 0;
        edx = (int32_t) dl;
        *(0x0061b8f0) = rdi;
        *(0x0061b8e8) = rsi;
        rax = rsp + 0x1f;
        fcn_00405400 (rdi, rsi, rdx, 0, 0, rcx);
        return rax;
    }
    assert_fail ("!(co->hard_link && co->symbolic_link)", "src/copy.c", 0xb64, "valid_options");
label_4:
    assert_fail ("! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)", "src/copy.c", 0xb67, "valid_options");
label_3:
    assert_fail ("VALID_REFLINK_MODE (co->reflink_mode)", "src/copy.c", 0xb63, "valid_options");
label_0:
    assert_fail ("co != NULL", "src/copy.c", 0xb60, "valid_options");
label_2:
    assert_fail ("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 0xb62, "valid_options");
label_1:
    return assert_fail ("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 0xb61, "valid_options");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4093f0 */
#include <stdint.h>
 
uint64_t fcn_004093f0 (uint32_t arg1, uint32_t arg2) {
    uint32_t var_8h;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    *(rsp) = rdi;
    *((rsp + 8)) = rsi;
    rsi = rsp;
    *((rsp + 0x10)) = 0;
    rax = fcn_0040c0f0 (*(0x0061b8f8));
    if (rax != 0) {
        rbx = rax;
        free (*((rax + 0x10)));
        free (rbx);
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409440 */
#include <stdint.h>
 
uint64_t fcn_00409440 (uint32_t arg1, uint32_t arg2) {
    uint32_t var_8h;
    rdi = arg1;
    rsi = arg2;
    *(rsp) = rdi;
    *((rsp + 8)) = rsi;
    rax = fcn_0040b6a0 (*(0x0061b8f8), rsp);
    if (rax != 0) {
        rax = *((rax + 0x10));
        return rax;
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409480 */
#include <stdint.h>
 
uint64_t fcn_00409480 (char * arg1, uint32_t arg2, uint32_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = rdi;
    r12 = rsi;
    rax = fcn_004100e0 (0x18);
    rbx = rax;
    rax = fcn_00410310 (r13);
    rsi = rbx;
    *(rbx) = r12;
    *((rbx + 0x10)) = rax;
    *((rbx + 8)) = rbp;
    rax = fcn_0040c0b0 (*(0x0061b8f8));
    if (rax != 0) {
        eax = 0;
        if (rbx != rbp) {
            free (*((rbx + 0x10)));
            free (rbx);
            rax = *((rbp + 0x10));
        }
        return rax;
    }
    return fcn_00410330 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409500 */
#include <stdint.h>
 
uint64_t fcn_00409500 (int64_t arg_8h) {
    rax = fcn_0040b910 (0x67, 0, 0x4093a0, 0x4093b0, 0x4093d0);
    *(0x0061b8f8) = rax;
    if (rax != 0) {
        return rax;
    }
    return fcn_00410330 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409550 */
#include <stdint.h>
 
int32_t fcn_00409550 (char *** arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    eax = 0;
    *(rsi) = edi;
    *((rsi + 0x28)) = 0;
    *((rsi + 8)) = 0;
    *((rsi + 0x18)) = 0;
    *((rsi + 0x20)) = ax;
    *((rsi + 0x10)) = 1;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409580 */
#include <stdint.h>
 
int64_t fcn_00409580 (uint32_t arg1) {
    int64_t var_20h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_14h;
    int64_t var_18h;
    int64_t var_30h;
    rdi = arg1;
    r15 = 0x7fffffffffffffff;
    r13d = 0;
    r12 = rdi;
    rbx = *((rdi + 0x28));
    rdx = *((rdi + 8));
    r14 = rbp + 0x20;
label_6:
    eax = 0;
    ecx = 0x200;
    rdi = rbp;
    esi = 0xc020660b;
    do {
        *(rdi) = rax;
        rcx--;
        rdi += 8;
    } while (rcx != 0);
    eax = *((r12 + 0x10));
    *(rsp) = rdx;
    rdx = ~rdx;
    *((rsp + 0x18)) = 0x48;
    *((rsp + 0x10)) = eax;
    eax = 0;
    *((rsp + 8)) = rdx;
    rdx = rbp;
    eax = ioctl (*(r12), rsi);
    if (eax < 0) {
        goto label_7;
    }
    eax = *((rsp + 0x14));
    if (eax == 0) {
        goto label_8;
    }
    rdx = rax;
    rcx = *((r12 + 0x18));
    rdx = ~rdx;
    if (rcx > rdx) {
        goto label_9;
    }
    edx = 0x18;
    rdi = *((r12 + 0x28));
    rcx += rax;
    rax = rdx;
    *((r12 + 0x18)) = rcx;
    rbx -= rdi;
    rdx_rax = rax * rcx;
    __asm ("seto dl");
    edx = (int32_t) dl;
    if (rax < 0) {
        goto label_10;
    }
    if (rdx != 0) {
        goto label_10;
    }
    rsi <<= 3;
    rax = fcn_00410140 (rdi, rcx + rcx*2);
    r8d = *((rsp + 0x14));
    *((r12 + 0x28)) = rax;
    rbx += rax;
    if (r8d == 0) {
        goto label_11;
    }
    rax = *((rsp + 0x30));
    rcx = r15;
    rdx = *((rsp + 0x20));
    rcx -= rax;
    if (rdx > rcx) {
        goto label_12;
    }
    edi = 0;
    rcx = r14;
    do {
        if (r13d == 0) {
            goto label_13;
        }
        r9d = *((rcx + 0x28));
        r10 = *((rbx + 8));
        rsi = *(rbx);
        r11d = r9d;
        rsi += r10;
        r11d &= 0xfffffffe;
        if (*((rbx + 0x10)) == r11d) {
            goto label_14;
        }
label_3:
        if (rsi <= rdx) {
            goto label_15;
        }
label_0:
        r9 = rsi;
        r9 -= rdx;
        if (r9 < rax) {
            goto label_7;
        }
        rdx += rax;
        *(rcx) = rsi;
        rdx -= rsi;
        *((rcx + 0x10)) = rdx;
label_4:
        if (edi >= r8d) {
            goto label_11;
        }
label_1:
        edx = edi;
        rsi = r15;
        rax = rdx*8;
        rax -= rdx;
        rcx = r14 + rax*8;
        rax = *((rcx + 0x10));
        rdx = *(rcx);
        rsi -= rax;
    } while (rdx <= rsi);
label_12:
    rax = assert_fail ("fm_extents[i].fe_logical <= OFF_T_MAX - fm_extents[i].fe_length", "src/extent-scan.c", 0x8d, "extent_scan_read");
label_13:
    rsi = *((r12 + 8));
    if (rsi > rdx) {
        goto label_0;
    }
    r9d = *((rcx + 0x28));
label_15:
    ecx = r13d;
    edi++;
    r13d++;
    rsi = rcx * 3;
    rcx = *((r12 + 0x28));
    rbx = rcx + rsi*8;
    *(rbx) = rdx;
    *((rbx + 8)) = rax;
    *((rbx + 0x10)) = r9d;
    if (edi < r8d) {
        goto label_1;
    }
label_11:
    if ((*((rbx + 0x10)) & 1) != 0) {
        goto label_16;
    }
    eax = *((r12 + 0x21));
    if (r13d <= 0x48) {
        goto label_17;
    }
    if (al != 0) {
        goto label_18;
    }
    eax = r13 - 1;
    rdx = *((r12 + 0x28));
    rcx = rax * 3;
    *((r12 + 0x18)) = rax;
    rax = *((rdx + rcx*8 - 0x10));
    rax += *((rdx + rcx*8 - 0x18));
    *((r12 + 8)) = rax;
label_5:
    eax = 1;
    do {
label_2:
        return rax;
label_7:
        eax = 0;
    } while (*((r12 + 8)) != 0);
    *((r12 + 0x20)) = 1;
    eax = 0;
    goto label_2;
label_14:
    if (rdx != rsi) {
        goto label_3;
    }
    rax += r10;
    *((rbx + 0x10)) = r9d;
    edi++;
    *((rbx + 8)) = rax;
    goto label_4;
label_17:
    edi = r13d;
    *((r12 + 0x18)) = rdi;
    if (al != 0) {
        goto label_5;
    }
    rdx = *((rbx + 8));
    rdx += *(rbx);
    *((r12 + 8)) = rdx;
    if (r13d != 0x48) {
        goto label_6;
    }
    goto label_5;
label_16:
    *((r12 + 0x21)) = 1;
label_18:
    eax = r13d;
    *((r12 + 0x18)) = rax;
    goto label_5;
label_8:
    *((r12 + 0x21)) = 1;
    al = (*((r12 + 8)) != 0) ? 1 : 0;
    goto label_2;
label_10:
    fcn_00410330 ();
label_9:
    return assert_fail ("scan->ei_count <= SIZE_MAX - fiemap->fm_mapped_extents", "src/extent-scan.c", 0x7e, "extent_scan_read");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409870 */
#include <stdint.h>
 
uint64_t fcn_00409870 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    rbx = rsi;
    rax = fcn_0040ab40 (rdi);
    rax -= r12;
    rdi = rax + 9;
    if (rdi > 0x100) {
        rax = malloc (rdi);
        rbx = rax;
        if (rax == 0) {
            goto label_0;
        }
    }
    rdx = rbp;
    rsi = r12;
    rdi = rbx;
    mempcpy ();
    rdx = "CuXXXXXX";
    *(rax) = rdx;
    edx = *(0x00415a40);
    *((rax + 8)) = dl;
    rax = rbx;
    do {
        return rax;
label_0:
        eax = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409900 */
#include <stdint.h>
 
uint64_t fcn_00409900 (int64_t arg1, char * arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_24h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r15d = edi;
    r14 = rsi;
    r13d = r8d;
    r12 = rcx;
    *((rsp + 8)) = r9d;
    eax = linkat ();
    r9d = *((rsp + 8));
    ebx = eax;
    if (r9b != 1) {
        goto label_0;
    }
    if (eax == 0) {
        goto label_0;
    }
    rax = errno_location ();
    while (r12d == 0) {
label_0:
        eax = ebx;
        return rax;
        *((rsp + 8)) = rax;
        rax = fcn_00409870 (r12, rsp + 0x30);
        rbx = rax;
        if (rax == 0) {
            goto label_2;
        }
        *((rsp + 0x10)) = r15d;
        *((rsp + 0x18)) = r14;
        *((rsp + 0x20)) = ebp;
        *((rsp + 0x24)) = r13d;
        eax = fcn_0040e910 (rax, 0, rsp + 0x10, 0x409850, 6);
        r9 = *((rsp + 8));
        if (eax == 0) {
            goto label_3;
        }
        r12d = *(r9);
label_1:
        rax = rsp + 0x30;
        if (rbx != rax) {
            *((rsp + 8)) = r9;
            free (rbx);
            r9 = *((rsp + 8));
        }
        ebx = 1;
    }
    *(r9) = r12d;
    ebx = 0xffffffff;
    goto label_0;
label_3:
    rcx = r12;
    edx = ebp;
    rsi = rbx;
    edi = ebp;
    *((rsp + 8)) = r9;
    eax = renameat ();
    r9 = *((rsp + 8));
    r12d = eax;
    if (eax != 0) {
        r12d = *(r9);
    }
    edx = 0;
    rsi = rbx;
    edi = ebp;
    *((rsp + 8)) = r9;
    unlinkat ();
    r9 = *((rsp + 8));
    goto label_1;
label_2:
    ebx = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409a40 */
#include <stdint.h>
 
uint64_t fcn_00409a40 (int64_t arg1, int64_t arg2, char * arg3, int64_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14d = ecx;
    r13 = rdi;
    r12 = rdx;
    eax = symlinkat ();
    ebx = eax;
    if (r14b != 1) {
        goto label_2;
    }
    if (eax == 0) {
        goto label_2;
    }
    rax = errno_location ();
    r14 = rax;
    while (1) {
label_2:
        eax = ebx;
        return rax;
        r15 = rsp + 0x10;
        rax = fcn_00409870 (r12, r15);
        rbx = rax;
        if (rax == 0) {
            goto label_3;
        }
        *(rsp) = r13;
        *((rsp + 8)) = ebp;
        eax = fcn_0040e910 (rax, 0, rsp, 0x4098e0, 6);
        if (eax == 0) {
            goto label_4;
        }
        r12d = *(r14);
label_1:
        if (rbx != r15) {
            free (rbx);
        }
        if (r12d != 0) {
            goto label_5;
        }
label_0:
        ebx = 1;
    }
label_4:
    rcx = r12;
    edx = ebp;
    rsi = rbx;
    edi = ebp;
    eax = renameat ();
    if (eax != 0) {
        goto label_6;
    }
    if (rbx == r15) {
        goto label_0;
    }
    free (rbx);
    goto label_0;
label_6:
    edx = 0;
    rsi = rbx;
    edi = ebp;
    r12d = *(r14);
    unlinkat ();
    goto label_1;
label_5:
    *(r14) = r12d;
    ebx = 0xffffffff;
    goto label_2;
label_3:
    ebx = 0xffffffff;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409b40 */
#include <stdint.h>
 
uint64_t fcn_00409b40 (int64_t arg1, char * arg3) {
    rdi = arg1;
    rdx = arg3;
    r12 = rdi;
    eax = fcn_0040c440 (rdi, rsi, rdx);
    ebx = eax;
    if (eax != 0xfffffffe) {
        if (eax == 0xffffffff) {
            rax = fcn_0040e020 (rbp, rsi, rdx, rcx, r8);
            edx = 5;
            r12 = rax;
            rax = dcgettext (0, "preserving permissions for %s");
            rax = errno_location ();
            rcx = r12;
            eax = 0;
            error (0, *(rax), rbp);
        }
        eax = ebx;
        return rax;
    }
    rax = fcn_0040e020 (r12, rsi, rdx, rcx, r8);
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (0, *(rax), 0x415a9d);
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409bd0 */
#include <stdint.h>
 
uint64_t fcn_00409bd0 (char * arg1, char *** arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    eax = fcn_0040c480 (rdi, rsi, rdx);
    ebx = eax;
    if (eax == 0) {
        eax = ebx;
        return eax;
    }
    rax = fcn_0040e020 (rbp, rsi, rdx, rcx, r8);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "setting permissions for %s");
    rax = errno_location ();
    rcx = r12;
    eax = 0;
    error (0, *(rax), rbp);
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409c30 */
#include <stdint.h>
 
uint64_t fcn_00409c30 (char * arg1, uint32_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409d30 */
#include <stdint.h>
 
uint64_t fcn_00409d30 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409e50 */
#include <stdint.h>
 
uint64_t fcn_00409e50 (int64_t arg1, int64_t arg2, uint32_t arg3) {
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
        rax = fcn_0040e000 (1, rbp);
        rax = fcn_0040dcf0 (0, 8, r12);
        r8 = rbp;
        rdx = rbx;
        esi = 0;
        rcx = rax;
        edi = 0;
        eax = 0;
invalid_funccall(); //        void (*0x4028f0)() ();
label_0:
        rax = dcgettext (0, "invalid argument %s for %s");
        rbx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409ed0 */
#include <stdint.h>
 
uint64_t fcn_00409ed0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_0040e020 (r12, rsi, rdx, rcx, r8);
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
INVALID_JUMP;
    } while (rbx == 0);
    eax = memcmp (r14, rbp, r13);
    if (eax != 0) {
        goto label_0;
    }
    rbx++;
    rbp += r13;
    rax = fcn_0040e020 (r12, rsi, rdx, rcx, r8);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x409ff0 */
#include <stdint.h>
 
uint64_t fcn_00409ff0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r15 = r8;
    r14 = rdi;
    r13 = r9;
    r12 = rsi;
    rbx = rdx;
    rax = fcn_00409d30 (r12, rbx, rbp, r8);
    while (1) {
        return rax;
        fcn_00409e50 (r14, r12, rax);
        fcn_00409ed0 (rbx, rbp, r15);
invalid_funccall(); //        void (*r13)() ();
        rax = 0xffffffffffffffff;
    }
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40a0b0 */
#include <stdint.h>
 
uint64_t fcn_0040a0b0 (int64_t arg1, void ** arg2) {
    rdi = arg1;
    rsi = arg2;
    r13 = rsi;
    rbx = rdi;
    rax = fcn_0040ab40 (rdi);
    rdi = rax;
    rax = fcn_0040aba0 (rdi);
    while (r12 <= rdx) {
        return rax;
        esi = 0x2e;
        r14d = *(rbp);
        r12 = rax;
        *(rbp) = si;
        errno_location ();
        esi = 3;
        rdi = rbx;
        *(rax) = 0;
        r15 = rax;
        rax = pathconf ();
        if (rax < 0) {
            goto label_2;
        }
label_1:
        rdx = rax;
label_0:
        *(rbp) = r14w;
    }
    rsi = rbx + r13;
    rax = rsi;
    rax -= rbp;
    if (rax >= rdx) {
        goto label_3;
    }
    rdx = rax + 1;
    do {
        *(rsi) = 0x7e;
        *((rbp + rdx)) = 0;
        return rax;
label_3:
        rsi = rbp + rdx - 1;
    } while (1);
label_2:
    ecx = *(r15);
    edx = 0xff;
    if (ecx != 0) {
        goto label_0;
    }
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40a180 */
#include <stdint.h>
 
uint64_t fcn_0040a180 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    if (rdi == 0) {
        goto label_2;
    }
label_1:
    while (rax != rbx) {
label_0:
        ebx = 0x415aa0;
        *(0x0061b900) = rbx;
        return;
        rax = fcn_0040ab40 (rbx);
    }
    *(0x0061b900) = rbx;
    return rax;
label_2:
    rax = getenv ("SIMPLE_BACKUP_SUFFIX");
    rbx = rax;
    if (rax == 0) {
        goto label_0;
    }
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40a1e0 */
#include <stdint.h>
 
uint64_t fcn_0040a1e0 (void * arg1, uint32_t arg2) {
    void ** s1;
    void * s2;
    int64_t var_18h;
    int64_t var_20h;
    size_t size;
    uint32_t var_30h;
    size_t n;
    uint32_t var_40h;
    uint32_t var_47h;
    int64_t var_48h;
    int64_t var_50h;
    size_t * var_58h;
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    *((rsp + 0x10)) = rdi;
    *((rsp + 0x40)) = esi;
    *((rsp + 0x47)) = dl;
    rax = fcn_0040ab40 (rdi);
    r14 = rax;
    rax = strlen (rax);
    r14 -= rbx;
    rdi = imp.__libc_start_main;
    rax += r14;
    *((rsp + 8)) = rax;
    if (rdi == 0) {
        goto label_11;
    }
label_10:
    rax = strlen (rdi);
    rsi = *((rsp + 8));
    rax++;
    rbx = rsi + 1;
    *((rsp + 0x58)) = rax;
    rsi = rax;
    eax = 9;
    *((rsp + 0x38)) = rbx;
    if (rax >= 9) {
        rax = rsi;
    }
    rax += rbx;
    rdi = rax;
    *((rsp + 0x48)) = rax;
    rax = malloc (rdi);
    r15 = rax;
    if (rax == 0) {
        goto label_9;
    }
    r12d = 0;
label_2:
    memcpy (r15, *((rsp + 0x10)), *((rsp + 0x38)));
    if (*((rsp + 0x40)) == 1) {
        goto label_12;
    }
    rbx = r15 + r14;
    rax = fcn_0040aba0 (rbx);
    r13 = rax;
    if (r12 == 0) {
        goto label_13;
    }
    rdi = r12;
    rewinddir ();
label_5:
    rax = *((rsp + 0x48));
    *((rsp + 0x20)) = 1;
    *((rsp + 0x28)) = rax;
    rax = r13 + 4;
    *((rsp + 0x30)) = rax;
    do {
label_0:
        rdi = r12;
        rax = readdir ();
        if (rax == 0) {
            goto label_8;
        }
label_1:
        rbx = rax + 0x13;
        rax = strlen (rbx);
    } while (rax < *((rsp + 0x30)));
    rcx = r13 + 2;
    rdx = rcx;
    *((rsp + 0x18)) = rcx;
    eax = memcmp (r15 + r14, rbx, rdx);
    if (eax != 0) {
        goto label_0;
    }
    rcx = *((rsp + 0x18));
    rbx += rcx;
    eax = *(rbx);
    edx = rax - 0x31;
    if (dl > 8) {
        goto label_0;
    }
    edx = *((rbx + 1));
    ecx = 1;
    r8b = (al == 0x39) ? 1 : 0;
    eax = edx;
    edx -= 0x30;
    if (edx > 9) {
        goto label_14;
    }
    do {
        al = (al == 0x39) ? 1 : 0;
        rcx++;
        edx = *((rbx + rcx));
        r8d &= eax;
        eax = edx;
        edx -= 0x30;
    } while (edx <= 9);
label_14:
    if (al != 0x7e) {
        goto label_0;
    }
    if (*((rbx + rcx + 1)) != 0) {
        goto label_0;
    }
    rdx = *((rsp + 0x20));
    if (rdx < rcx) {
        goto label_15;
    }
    *((rsp + 0x50)) = rcx;
    *((rsp + 0x18)) = r8b;
    if (rdx != rcx) {
        goto label_0;
    }
    rax = *((rsp + 8));
    eax = memcmp (r15 + rax + 2, rbx, rdx);
    r8d = *((rsp + 0x18));
    rcx = *((rsp + 0x50));
    if (eax > 0) {
        goto label_0;
    }
label_15:
    edx = (int32_t) r8b;
    rsi = *((rsp + 8));
    ebp = (int32_t) r8b;
    rax = rdx + rcx;
    *((rsp + 0x20)) = rax;
    rax = rsi + rax + 4;
    if (rax <= *((rsp + 0x28))) {
        goto label_16;
    }
    esi = 0;
    rdi = rax;
    __asm ("sets sil");
    rdi += rdi;
    if (rdi < 0) {
        goto label_17;
    }
    if (rsi != 0) {
        goto label_17;
    }
    *((rsp + 0x28)) = rdi;
label_6:
    *((rsp + 0x50)) = rdx;
    *((rsp + 0x18)) = rcx;
    rax = realloc (r15, *((rsp + 0x28)));
    rcx = *((rsp + 0x18));
    rdx = *((rsp + 0x50));
    r8 = rax;
    if (rax == 0) {
        goto label_18;
    }
label_7:
    rax = *((rsp + 8));
    esi = 0x7e2e;
    *((rsp + 0x50)) = r8;
    *((rsp + 0x18)) = rcx;
    rax += r8;
    *(rax) = si;
    r9 = rax + rdx + 2;
    *((rax + 2)) = 0x30;
    rax = memcpy (r9, rbx, rcx + 2);
    rcx = *((rsp + 0x18));
    r8 = *((rsp + 0x50));
    rcx += rax;
    edx = *((rcx - 1));
    rax = rcx - 1;
    if (dl != 0x39) {
        goto label_19;
    }
    do {
        *(rax) = 0x30;
        rax--;
        edx = *(rax);
    } while (dl == 0x39);
label_19:
    edx++;
    rdi = r12;
    r15 = r8;
    *(rax) = dl;
    rax = readdir ();
    if (rax != 0) {
        goto label_1;
    }
label_8:
    if (ebp == 2) {
        goto label_20;
    }
    if (ebp == 3) {
        goto label_18;
    }
    if (ebp == 1) {
        goto label_21;
    }
label_4:
    if (*((rsp + 0x47)) == 0) {
        goto label_22;
    }
    if (r12 == 0) {
        goto label_23;
    }
    rdi = r12;
    eax = dirfd ();
    rcx = r15 + r14;
    edx = eax;
    if (eax < 0) {
        goto label_23;
    }
label_3:
    r8b = (*((rsp + 0x40)) != 1) ? 1 : 0;
    eax = fcn_0040e040 (0xffffff9c, *((rsp + 0x10)), rdx, rcx, 0);
    if (eax == 0) {
        goto label_22;
    }
    rax = errno_location ();
    ebp = *(rax);
    if (ebp == 0x11) {
        goto label_2;
    }
    rbx = rax;
    if (r12 != 0) {
        rdi = r12;
        closedir ();
    }
    r15d = 0;
    free (r15);
    *(rbx) = ebp;
    do {
label_9:
        rax = r15;
        return rax;
label_23:
        rcx = r15;
        edx = 0xffffff9c;
        r14d = 0;
        goto label_3;
label_12:
        rax = *((rsp + 8));
        memcpy (r15 + rax, *(0x0061b900), *((rsp + 0x58)));
        goto label_4;
label_20:
        if (*((rsp + 0x40)) == 2) {
            rax = *((rsp + 8));
            rax = memcpy (r15 + rax, *(0x0061b900), *((rsp + 0x58)));
            *((rsp + 0x40)) = 1;
        }
label_21:
        fcn_0040a0b0 (r15, *((rsp + 8)));
        goto label_4;
label_13:
        edi = 0x2e;
        eax = *(rbx);
        *(rbx) = di;
        rdi = r15;
        *((rsp + 0x18)) = ax;
        rax = fcn_0040a9c0 ();
        rcx = rbx + r13;
        r12 = rax;
        if (rax == 0) {
            goto label_24;
        }
        eax = *((rsp + 0x18));
        *(rbx) = ax;
        *(rcx) = 0x7e317e2e;
        *((rcx + 4)) = 0;
        goto label_5;
label_18:
        r15d = 0;
        free (r15);
        errno_location ();
        *(rax) = 0xc;
    } while (1);
label_17:
    *((rsp + 0x28)) = rax;
    goto label_6;
label_16:
    r8 = r15;
    goto label_7;
label_24:
    *((rsp + 0x20)) = rcx;
    ebp = 0;
    rax = errno_location ();
    rcx = *((rsp + 0x20));
    eax = *((rsp + 0x18));
    bpl = (*(rax) == 0xc) ? 1 : 0;
    *(rbx) = ax;
    ebp += 2;
    *(rcx) = 0x7e317e2e;
    *((rcx + 4)) = 0;
    goto label_8;
label_22:
    if (r12 == 0) {
        goto label_9;
    }
    rdi = r12;
    closedir ();
    goto label_9;
label_11:
    fcn_0040a180 (rdi);
    rdi = imp.__libc_start_main;
    goto label_10;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40a6b0 */
#include <stdint.h>
 
void fcn_0040a6b0 (char * arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    edx = 1;
invalid_funccall(); //    return void (*0x40a1e0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40a6c0 */
#include <stdint.h>
 
int32_t fcn_0040a6c0 (void) {
    fcn_00409ff0 (rdi, rsi, 0x415b20, 0x415b00, 4, *(0x0061b3c8));
    eax = *((rax*4 + 0x415b00));
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40a6f0 */
#include <stdint.h>
 
uint64_t fcn_0040a6f0 (void) {
    edx = 0;
    rax = fcn_0040a1e0 (rdi, rsi);
    if (rax != 0) {
        return rax;
    }
    return fcn_00410330 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40a730 */
#include <stdint.h>
 
uint64_t fcn_0040a730 (uint32_t arg2) {
    rsi = arg2;
    if (rsi != 0) {
        if (*(rsi) != 0) {
            goto label_0;
        }
    }
    rax = getenv (0x415ab8);
    if (rax != 0) {
        if (*(rax) != 0) {
            goto label_1;
        }
    }
    eax = 2;
    return rax;
label_1:
    rsi = rax;
    edi = "$VERSION_CONTROL";
label_0:
invalid_funccall(); //    return void (*0x40a6c0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40a780 */
#include <stdint.h>
 
int64_t fcn_0040a780 (uint32_t arg1, void * arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = rdx;
    if (rdi != 0) {
        goto label_3;
    }
    edi = 0x2000;
    rdi = rsi;
    while (rsi == 0) {
label_0:
        if (rdi <= rcx) {
            rcx = rdi;
        }
        r8 = rcx;
label_1:
        rax = rcx;
        return rax;
INVALID_JUMP;
    }
    r8 = rsi;
    rax = rdi;
label_2:
    edx = 0;
    rax = rdx_rax / r8;
    rdx = rdx_rax % r8;
    if (rdx != 0) {
        goto label_4;
    }
    rax = rdi;
    edx = 0;
    rax = rdx_rax / r8;
    rdx = rdx_rax % r8;
    r8 = rsi;
    r8 *= rax;
    r9 = rax;
    if (r8 > rcx) {
        goto label_0;
    }
    rax = r8;
    edx = 0;
    rax = rdx_rax / rsi;
    rdx = rdx_rax % rsi;
    if (rax != r9) {
        goto label_0;
    }
    goto label_1;
label_4:
    rax = r8;
    r8 = rdx;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40a920 */
#include <stdint.h>
 
uint64_t fcn_0040a920 (void) {
    eax = fcn_004114a0 (*(obj.stdout));
    if (eax != 0) {
        rax = errno_location ();
        rbx = rax;
        if (*(0x0061b910) == 0) {
            goto label_0;
        }
        if (*(rax) != 0x20) {
            goto label_0;
        }
    }
    eax = fcn_004114a0 (*(obj.stderr));
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
    rax = fcn_0040de70 (rdi, rsi, rdx, rcx);
    r8 = rbp;
    rcx = rax;
    eax = 0;
    error (0, *(rbx), "%s: %s");
    do {
label_1:
        rax = exit (*(0x0061b3d0));
label_2:
        rcx = rax;
        eax = 0;
        error (0, *(rbx), 0x415a9d);
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40a9c0 */
#include <stdint.h>
 
uint64_t fcn_0040a9c0 (void) {
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
    edi = eax;
    eax = 0;
    eax = fcn_004103e0 (edi, 0x406, 3, rcx, r8);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40aa60 */
#include <stdint.h>
 
uint64_t fcn_0040aa60 (void) {
    rax = fcn_0040aae0 (rdi);
    if (rax != 0) {
        return rax;
    }
    return fcn_00410330 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40aa80 */
#include <stdint.h>
 
uint64_t fcn_0040aa80 (uint32_t arg1) {
    rdi = arg1;
    ebp = 0;
    rbx = rdi;
    bpl = (*(rdi) == 0x2f) ? 1 : 0;
    rax = fcn_0040ab40 (rdi);
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
INVALID_JUMP;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40aae0 */
#include <stdint.h>
 
uint64_t fcn_0040aae0 (int64_t arg1) {
    rdi = arg1;
    rax = fcn_0040aa80 (rdi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40ab40 */
#include <stdint.h>
 
int64_t fcn_0040ab40 (char * arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40aba0 */
#include <stdint.h>
 
uint64_t fcn_0040aba0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = strlen (rdi);
    while (rdx != 1) {
        rdx = rax - 1;
        if (*((rbx + rax - 1)) != 0x2f) {
            return rax;
        }
        rax = rdx;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40abd0 */
#include <stdint.h>
 
uint64_t fcn_0040abd0 (int64_t arg1) {
    rdi = arg1;
    rax = fcn_0040ab40 (rdi);
    rbx = rax;
    if (*(rax) == 0) {
        rbx = rbp;
    }
    rax = fcn_0040aba0 (rbx);
    rbx += rax;
    *(rbx) = 0;
    al = (*(rbx) != 0) ? 1 : 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40ac10 */
#include <stdint.h>
 
void fcn_0040ac10 (void) {
    return posix_fadvise ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40ac50 */
#include <stdint.h>
 
uint64_t fcn_0040ac50 (int64_t arg_60h, uint32_t arg3, int32_t oflag, const char * path) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    uint32_t var_30h;
    rdx = arg3;
    rsi = oflag;
    rdi = path;
    *((rsp + 0x30)) = rdx;
    edx = 0;
    while (1) {
        eax = 0;
        eax = open (rdi, rsi, rdx);
        fcn_0040eaf0 (eax);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40aca0 */
#include <stdint.h>
 
uint64_t fcn_0040aca0 (int64_t arg1, char * arg2, func * arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdi != 0) {
        r13 = rdi;
        r12 = rsi;
        rax = fcn_004100e0 (0x18);
        rbx = rax;
        rax = fcn_00410310 (r12);
        rsi = rbx;
        *(rbx) = rax;
        rax = *((rbp + 8));
        *((rbx + 8)) = rax;
        rax = *(rbp);
        *((rbx + 0x10)) = rax;
        rax = fcn_0040c0b0 (r13);
        if (rax == 0) {
            goto label_0;
        }
        if (rbx != rax) {
            rdi = rbx;
            goto label_1;
        }
        return rax;
    }
    return rax;
label_0:
    fcn_00410330 ();
label_1:
    rbx = rdi;
    free (*(rdi));
    rdi = rbx;
    return free ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40ad30 */
#include <stdint.h>
 
int64_t fcn_0040ad30 (int64_t arg1, char * arg2, int64_t arg3) {
    int64_t var_8h;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdi != 0) {
        rax = *((rdx + 8));
        *(rsp) = rsi;
        *((rsp + 8)) = rax;
        rax = *(rdx);
        *((rsp + 0x10)) = rax;
        rax = fcn_0040b6a0 (rdi, rsp);
        al = (rax != 0) ? 1 : 0;
        return rax;
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40ad70 */
#include <stdint.h>
 
int32_t fcn_0040ad70 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    edx = edi;
    eax = 0x2d;
    edx &= 0xf000;
    if (edx != 0x8000) {
        eax = 0x64;
        if (edx == 0x4000) {
            goto label_1;
        }
        eax = 0x62;
        if (edx == 0x6000) {
            goto label_1;
        }
        eax = 0x63;
        if (edx == 0x2000) {
            goto label_1;
        }
        eax = 0x6c;
        if (edx == 0xa000) {
            goto label_1;
        }
        eax = 0x70;
        if (edx == 0x1000) {
            goto label_1;
        }
        eax = 0x73;
        edx = 0x3f;
        if (edx == 0xc000) {
            eax = edx;
            goto label_1;
        }
    }
label_1:
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
        goto label_2;
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
            goto label_3;
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
            goto label_4;
        }
        eax &= 0xffffffe0;
        eax += 0x74;
        *((rsi + 9)) = al;
        eax = 0x20;
        *((rsi + 0xa)) = ax;
        return eax;
label_2:
        eax &= 0xffffffb5;
        eax += 0x78;
    } while (1);
label_3:
    eax &= 0xffffffb5;
    eax += 0x78;
    goto label_0;
label_4:
    eax &= 0xffffffb5;
    eax += 0x78;
    *((rsi + 9)) = al;
    eax = 0x20;
    *((rsi + 0xa)) = ax;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40af00 */
#include <stdint.h>
 
uint64_t fcn_0040af00 (void) {
    uint32_t var_fh;
invalid_funccall(); //    rax = void (*0x40af20)() ();
    if (rax != 0) {
        return rax;
    }
    return fcn_00410330 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40b000 */
#include <stdint.h>
 
uint64_t fcn_0040b000 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdx == 0) {
        goto label_0;
    }
    r13d = edi;
    rbx = rdx;
    r12d = 0;
    while (rax != -1) {
        if (rax == 0) {
            goto label_1;
        }
        r12 += rax;
        rbp += rax;
        rbx -= rax;
        if (rbx == 0) {
            goto label_2;
        }
        rax = fcn_0040e290 (r13d, rbp, rbx);
    }
    do {
label_2:
        rax = r12;
        return rax;
label_1:
        errno_location ();
        *(rax) = 0x1c;
        rax = r12;
        return rax;
label_0:
        r12d = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40b080 */
#include <stdint.h>
 
int64_t fcn_0040b080 (uint32_t arg1, int64_t arg3) {
    rdi = arg1;
    rdx = arg3;
    esi = 0xa;
    r9 = 0xaaaaaaaaaaaaaaab;
    if (rdi >= 0xa) {
        rsi = rdi;
    }
    rsi |= 1;
    if (rsi == -1) {
        goto label_1;
    }
label_0:
    rax = rsi;
    rcx = rsi;
    rdx_rax = rax * r9;
    rax = rdx;
    rax >>= 1;
    rax *= 3;
    rcx -= rax;
    rax = rcx;
    if (rsi <= 9) {
        goto label_2;
    }
    if (rcx == 0) {
        goto label_3;
    }
    r8d = 0x10;
    edi = 9;
    ecx = 3;
    while (rdi < rsi) {
        r8 += 8;
        if (rdx == 0) {
            goto label_3;
        }
        rcx += 2;
        rax = rsi;
        edx = 0;
        rdi += r8;
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        rax = rdx;
    }
label_2:
    if (rax != 0) {
        goto label_1;
    }
label_3:
    rsi += 2;
    if (rsi != -1) {
        goto label_0;
    }
label_1:
    rax = rsi;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40b140 */
#include <stdint.h>
 
uint64_t fcn_0040b140 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    do {
        abort ();
        rbx = rdi;
        rdi = rsi;
        rsi = *((rbx + 0x10));
invalid_funccall(); //        rax = uint64_t (*rbx + 0x30)(uint64_t) (rbx);
    } while (*((rbx + 0x10)) <= rax);
    rax <<= 4;
    rax += *(rbx);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40b170 */
#include <stdint.h>
 
uint64_t fcn_0040b170 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rdx;
    r13d = ecx;
    r12 = rdi;
    rax = fcn_0040b140 (rdi, rsi);
    *(r14) = rax;
    rsi = *(rax);
    if (rsi == 0) {
        goto label_1;
    }
    rbx = rax;
    if (rsi == rbp) {
        goto label_2;
    }
    rdi = rbp;
invalid_funccall(); //    al = uint64_t (*r12 + 0x38)() ();
    if (al != 0) {
        goto label_3;
    }
    rax = *((rbx + 8));
    if (rax == 0) {
        goto label_1;
    }
    rsi = *(rax);
    if (rbp != rsi) {
        goto label_4;
    }
    goto label_5;
    do {
        rbx = *((rbx + 8));
        rax = *((rbx + 8));
        if (rax == 0) {
            goto label_1;
        }
        rsi = *(rax);
        if (rsi == rbp) {
            goto label_5;
        }
label_4:
        rdi = rbp;
invalid_funccall(); //        al = uint64_t (*r12 + 0x38)() ();
    } while (al == 0);
    rax = *((rbx + 8));
    rsi = *(rax);
label_5:
    if (r13b == 0) {
        goto label_0;
    }
    rdx = *((rax + 8));
    *((rbx + 8)) = rdx;
    *(rax) = 0;
    rdx = *((r12 + 0x48));
    *((rax + 8)) = rdx;
    *((r12 + 0x48)) = rax;
    do {
label_0:
        rax = rsi;
        return rax;
label_3:
        rsi = *(rbx);
INVALID_JUMP;
    } while (r13b == 0);
    rax = *((rbx + 8));
    if (rax != 0) {
        __asm ("movdqu xmm0, xmmword [rax]");
        __asm ("movups xmmword [rbx], xmm0");
        *(rax) = 0;
        rdx = *((r12 + 0x48));
        *((rax + 8)) = rdx;
        *((r12 + 0x48)) = rax;
        rax = rsi;
        return rax;
label_1:
        esi = 0;
        rax = rsi;
        return rax;
    }
    *(rbx) = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40b290 */
#include <stdint.h>
 
int64_t fcn_0040b290 (int64_t arg1) {
    rdi = arg1;
    rax = *(rdi);
    if (rax != 0x415c00) {
        xmm0 = *((rax + 8));
        __asm ("comiss xmm0, dword [0x00415c14]");
        if (rax > 0x415c00) {
            xmm1 = *(0x00415c18);
            __asm ("comiss xmm1, xmm0");
            if (rax <= 0x415c00) {
                goto label_0;
            }
            xmm1 = *((rax + 0xc));
            __asm ("comiss xmm1, dword [0x00415c1c]");
            if (rax <= 0x415c00) {
                goto label_0;
            }
            xmm1 = *(rax);
            __asm ("comiss xmm1, dword [0x00415c20]");
            if (rax < 0x415c00) {
                goto label_0;
            }
            __asm ("addss xmm1, dword [0x00415c14]");
            xmm2 = *((rax + 4));
            __asm ("comiss xmm2, xmm1");
            if (rax <= 0x415c00) {
                goto label_0;
            }
            xmm3 = *(0x00415c24);
            __asm ("comiss xmm3, xmm2");
            if (rax < 0x415c00) {
                goto label_0;
            }
            __asm ("comiss xmm0, xmm1");
            eax = 1;
            if (rax > 0x415c00) {
                goto label_1;
            }
        }
label_0:
        *(rdi) = 0x415c00;
        eax = 0;
        return rax;
    }
    eax = 1;
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40b310 */
#include <stdint.h>
 
uint64_t fcn_0040b310 (int64_t arg1, uint32_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r14d = edx;
    r13 = rsi;
    r12 = *(rsi);
    if (r12 < *((rsi + 8))) {
        goto label_2;
    }
    goto label_5;
    do {
label_1:
        r12 += 0x10;
        if (*((r13 + 8)) <= r12) {
            goto label_5;
        }
label_2:
        r15 = *(r12);
    } while (r15 == 0);
    rbx = *((r12 + 8));
    if (rbx != 0) {
        goto label_0;
    }
    goto label_6;
    do {
        rcx = *((rax + 8));
        *((rbx + 8)) = rcx;
        *((rax + 8)) = rbx;
        rbx = rdx;
        if (rdx == 0) {
            goto label_7;
        }
label_0:
        r15 = *(rbx);
        rax = fcn_0040b140 (rbp, r15);
        rdx = *((rbx + 8));
    } while (*(rax) != 0);
    *(rax) = r15;
    *((rbp + 0x18))++;
    *(rbx) = 0;
    rax = *((rbp + 0x48));
    *((rbx + 8)) = rax;
    *((rbp + 0x48)) = rbx;
    rbx = rdx;
    if (rdx != 0) {
        goto label_0;
    }
label_7:
    r15 = *(r12);
label_6:
    *((r12 + 8)) = 0;
    if (r14b != 0) {
        goto label_1;
    }
    rax = fcn_0040b140 (rbp, r15);
    rbx = rax;
    if (*(rax) == 0) {
        goto label_8;
    }
    rax = *((rbp + 0x48));
    if (rax == 0) {
        goto label_9;
    }
    rdx = *((rax + 8));
    *((rbp + 0x48)) = rdx;
label_4:
    rdx = *((rbx + 8));
    *(rax) = r15;
    *((rax + 8)) = rdx;
    *((rbx + 8)) = rax;
label_3:
    *(r12) = 0;
    r12 += 0x10;
    *((r13 + 0x18))--;
    if (*((r13 + 8)) > r12) {
        goto label_2;
    }
label_5:
    eax = 1;
    return rax;
label_8:
    *(rax) = r15;
    *((rbp + 0x18))++;
    goto label_3;
label_9:
    rax = malloc (0x10);
    if (rax != 0) {
        goto label_4;
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40b6a0 */
#include <stdint.h>
 
uint64_t fcn_0040b6a0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    rax = fcn_0040b140 (rdi, rsi);
    rsi = *(rax);
    if (rsi == 0) {
        goto label_0;
    }
    rbx = rax;
    while (rbx != 0) {
        rsi = *(rbx);
        if (rsi == rbp) {
            goto label_1;
        }
        rdi = rbp;
invalid_funccall(); //        al = uint64_t (*r12 + 0x38)() ();
        if (al != 0) {
            goto label_2;
        }
        rbx = *((rbx + 8));
    }
label_0:
    eax = 0;
    return rax;
label_2:
    rbp = *(rbx);
label_1:
    rax = *(rbx);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40b910 */
#include <stdint.h>
 
uint64_t fcn_0040b910 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    eax = 0x40b120;
    r15 = rsi;
    r14 = r8;
    r13 = rcx;
    r12 = rdx;
    edi = 0x50;
    if (rdx == 0) {
        r12 = rax;
    }
    eax = 0x40b130;
    if (rcx == 0) {
        r13 = rax;
    }
    rax = malloc (rdi);
    rbx = rax;
    if (rax == 0) {
        goto label_4;
    }
    rdi = rax + 0x28;
    if (r15 == 0) {
        goto label_5;
    }
    *((rax + 0x28)) = r15;
    al = fcn_0040b290 (rdi);
    if (al == 0) {
        goto label_0;
    }
    if (*((r15 + 0x10)) == 0) {
        goto label_6;
    }
label_1:
    rax = fcn_0040b080 (rbp, rsi);
    rax >>= 0x3d;
    al = (rax != 0) ? 1 : 0;
    eax = (int32_t) al;
    if (((rbp >> 0x3c) & 1) < 0) {
        goto label_0;
    }
    if (rax != 0) {
        goto label_0;
    }
    *((rbx + 0x10)) = rbp;
    if (rbp == 0) {
        goto label_0;
    }
    rax = calloc (rbp, 0x10);
    *(rbx) = rax;
    if (rax == 0) {
        goto label_0;
    }
    rbp <<= 4;
    *((rbx + 0x18)) = 0;
    rbp += rax;
    *((rbx + 0x20)) = 0;
    *((rbx + 8)) = rbp;
    *((rbx + 0x30)) = r12;
    *((rbx + 0x38)) = r13;
    *((rbx + 0x40)) = r14;
    *((rbx + 0x48)) = 0;
    while (al == 0) {
label_0:
        ebx = 0;
        free (rbx);
label_4:
        rax = rbx;
        return rax;
label_5:
        *((rax + 0x28)) = 0x415c00;
        al = fcn_0040b290 (rdi);
        xmm1 = *(0x00415c28);
    }
    if (rbp < 0) {
        goto label_7;
    }
label_2:
    xmm0 = 0;
    __asm ("cvtsi2ss xmm0, rbp");
label_3:
    __asm ("divss xmm0, xmm1");
    __asm ("comiss xmm0, dword [0x00415c2c]");
    if (rbp >= 0) {
        goto label_0;
    }
    __asm ("comiss xmm0, dword [0x00415c30]");
    if (rbp < 0) {
        goto label_8;
    }
    __asm ("subss xmm0, dword [0x00415c30]");
    __asm ("cvttss2si rbp, xmm0");
    __asm ("btc rbp, 0x3f");
    goto label_1;
label_6:
    xmm1 = *((r15 + 8));
    if (rbp >= 0) {
        goto label_2;
    }
label_7:
    rax = rbp;
    ebp &= 1;
    xmm0 = 0;
    rax >>= 1;
    rax |= rbp;
    __asm ("cvtsi2ss xmm0, rax");
    __asm ("addss xmm0, xmm0");
    goto label_3;
label_8:
    __asm ("cvttss2si rbp, xmm0");
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40bc30 */
#include <stdint.h>
 
uint64_t fcn_0040bc30 (int64_t arg1, uint32_t arg2) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    rdi = arg1;
    rsi = arg2;
    do {
label_0:
        rax = abort ();
        r12 = *((rdi + 0x28));
        if (*((r12 + 0x10)) == 0) {
            if (rsi < 0) {
                goto label_3;
            }
            xmm0 = 0;
            __asm ("cvtsi2ss xmm0, rsi");
label_1:
            __asm ("divss xmm0, dword [r12 + 8]");
            __asm ("comiss xmm0, dword [0x00415c2c]");
            if (rsi >= 0) {
                goto label_4;
            }
            __asm ("comiss xmm0, dword [0x00415c30]");
            if (rsi < 0) {
                goto label_5;
            }
            __asm ("subss xmm0, dword [0x00415c30]");
            __asm ("cvttss2si rsi, xmm0");
            __asm ("btc rsi, 0x3f");
        }
label_2:
        rax = fcn_0040b080 (rsi, rsi);
        rdx = rax*8;
        rbx = rax;
        rax >>= 0x3d;
        al = (rax != 0) ? 1 : 0;
        edx = 1;
        eax = (int32_t) al;
        __asm ("cmovs rax, rdx");
        if (rbx == 0) {
            goto label_4;
        }
        if (rax != 0) {
            goto label_4;
        }
        if (*((rbp + 0x10)) == rbx) {
            goto label_6;
        }
        rax = calloc (rbx, 0x10);
        *(rsp) = rax;
        if (rax == 0) {
            goto label_4;
        }
        *((rsp + 0x10)) = rbx;
        rbx <<= 4;
        rbx += rax;
        rax = *((rbp + 0x30));
        *((rsp + 0x18)) = 0;
        *((rsp + 8)) = rbx;
        *((rsp + 0x30)) = rax;
        rax = *((rbp + 0x38));
        *((rsp + 0x20)) = 0;
        *((rsp + 0x38)) = rax;
        rax = *((rbp + 0x40));
        *((rsp + 0x28)) = r12;
        *((rsp + 0x40)) = rax;
        rax = *((rbp + 0x48));
        *((rsp + 0x48)) = rax;
        eax = fcn_0040b310 (rsp, rbp, 0);
        ebx = eax;
        if (al != 0) {
            goto label_7;
        }
        rax = *((rsp + 0x48));
        *((rbp + 0x48)) = rax;
        al = fcn_0040b310 (rbp, rsp, 1);
    } while (al == 0);
    al = fcn_0040b310 (rbp, rsp, 0);
    if (al == 0) {
        goto label_0;
    }
    free (*(rsp));
    eax = ebx;
    return rax;
label_4:
    ebx = 0;
    do {
        eax = ebx;
        return rax;
label_3:
        rax = rsi;
        esi &= 1;
        xmm0 = 0;
        rax >>= 1;
        rax |= rsi;
        __asm ("cvtsi2ss xmm0, rax");
        __asm ("addss xmm0, xmm0");
        goto label_1;
label_5:
        __asm ("cvttss2si rsi, xmm0");
        goto label_2;
label_6:
        ebx = 1;
        eax = 1;
        return rax;
label_7:
        free (*(rbp));
        rax = *(rsp);
        *(rbp) = rax;
        rax = *((rsp + 8));
        *((rbp + 8)) = rax;
        rax = *((rsp + 0x10));
        *((rbp + 0x10)) = rax;
        rax = *((rsp + 0x18));
        *((rbp + 0x18)) = rax;
        rax = *((rsp + 0x48));
        *((rbp + 0x48)) = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40be30 */
#include <stdint.h>
 
uint64_t fcn_0040be30 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    do {
label_6:
        abort ();
    } while (rsi == 0);
    r12 = rdx;
    rbx = rdi;
    rax = fcn_0040b170 (rdi, rsi, rsp + 8, 0);
    rdx = rax;
    if (rax != 0) {
        eax = 0;
        if (r12 != 0) {
            *(r12) = rdx;
        }
        return rax;
    }
    rax = *((rbx + 0x18));
    if (rax < 0) {
        goto label_8;
    }
    xmm1 = 0;
    rdx = *((rbx + 0x28));
    __asm ("cvtsi2ss xmm1, rax");
    rax = *((rbx + 0x10));
    if (rax < 0) {
        goto label_9;
    }
    do {
        xmm0 = 0;
        __asm ("cvtsi2ss xmm0, rax");
        __asm ("mulss xmm0, dword [rdx + 8]");
        __asm ("comiss xmm1, xmm0");
        if (rax > 0) {
            goto label_10;
        }
label_0:
        r12 = *((rsp + 8));
        if (*(r12) == 0) {
            goto label_11;
        }
        rax = *((rbx + 0x48));
        if (rax == 0) {
            goto label_12;
        }
        rdx = *((rax + 8));
        *((rbx + 0x48)) = rdx;
label_1:
        rdx = *((r12 + 8));
        *(rax) = rbp;
        *((rax + 8)) = rdx;
        *((r12 + 8)) = rax;
        eax = 1;
        *((rbx + 0x20))++;
        return rax;
label_8:
        rdx = rax;
        eax &= 1;
        xmm1 = 0;
        rdx >>= 1;
        rdx |= rax;
        rax = *((rbx + 0x10));
        __asm ("cvtsi2ss xmm1, rdx");
        rdx = *((rbx + 0x28));
        __asm ("addss xmm1, xmm1");
    } while (rax >= 0);
label_9:
    rcx = rax;
    eax &= 1;
    xmm0 = 0;
    rcx >>= 1;
    rcx |= rax;
    __asm ("cvtsi2ss xmm0, rcx");
    __asm ("addss xmm0, xmm0");
    __asm ("mulss xmm0, dword [rdx + 8]");
    __asm ("comiss xmm1, xmm0");
    if (rcx <= 0) {
        goto label_0;
    }
label_10:
    fcn_0040b290 (rbx + 0x28);
    rdx = *((rbx + 0x28));
    rax = *((rbx + 0x10));
    xmm2 = *((rdx + 8));
    if (rax < 0) {
        goto label_13;
    }
    xmm0 = 0;
    __asm ("cvtsi2ss xmm0, rax");
label_3:
    rax = *((rbx + 0x18));
    if (rax < 0) {
        goto label_14;
    }
    xmm1 = 0;
    __asm ("cvtsi2ss xmm1, rax");
label_2:
    xmm3 = xmm2;
    __asm ("mulss xmm3, xmm0");
    __asm ("comiss xmm1, xmm3");
    if (rax <= 0) {
        goto label_0;
    }
    __asm ("mulss xmm0, dword [rdx + 0xc]");
    if (*((rdx + 0x10)) == 0) {
        goto label_15;
    }
label_4:
    __asm ("comiss xmm0, dword [0x00415c2c]");
    if (*((rdx + 0x10)) < 0) {
        goto label_16;
    }
    do {
label_5:
        eax = 0xffffffff;
        return rax;
label_11:
        *(r12) = rbp;
        eax = 1;
        *((rbx + 0x20))++;
        *((rbx + 0x18))++;
        return rax;
label_12:
        rax = malloc (0x10);
    } while (rax == 0);
    goto label_1;
label_14:
    rcx = rax;
    eax &= 1;
    xmm1 = 0;
    rcx >>= 1;
    rcx |= rax;
    __asm ("cvtsi2ss xmm1, rcx");
    __asm ("addss xmm1, xmm1");
    goto label_2;
label_13:
    rcx = rax;
    eax &= 1;
    xmm0 = 0;
    rcx >>= 1;
    rcx |= rax;
    __asm ("cvtsi2ss xmm0, rcx");
    __asm ("addss xmm0, xmm0");
    goto label_3;
label_15:
    __asm ("mulss xmm0, xmm2");
    goto label_4;
label_16:
    __asm ("comiss xmm0, dword [0x00415c30]");
    if (rcx >= 0) {
        goto label_17;
    }
    __asm ("cvttss2si rsi, xmm0");
label_7:
    al = fcn_0040bc30 (rbx, rsi);
    if (al == 0) {
        goto label_5;
    }
    rax = fcn_0040b170 (rbx, rbp, rsp + 8, 0);
    if (rax == 0) {
        goto label_0;
    }
    goto label_6;
label_17:
    __asm ("subss xmm0, dword [0x00415c30]");
    __asm ("cvttss2si rsi, xmm0");
    __asm ("btc rsi, 0x3f");
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40c0b0 */
#include <stdint.h>
 
uint64_t fcn_0040c0b0 (int64_t arg2) {
    int64_t var_8h;
    rsi = arg2;
    rbx = rsi;
    eax = fcn_0040be30 (rdi, rsi, rsp + 8);
    if (eax != 0xffffffff) {
        if (eax == 0) {
            rbx = *((rsp + 8));
        }
        rax = rbx;
        return rax;
    }
    ebx = 0;
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40c0f0 */
#include <stdint.h>
 
uint64_t fcn_0040c0f0 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    rbx = rdi;
    rax = fcn_0040b170 (rdi, rsi, rsp + 8, 1);
    if (rax == 0) {
        goto label_0;
    }
    rax = *((rsp + 8));
    *((rbx + 0x20))--;
    while (rax <= 0) {
label_0:
        rax = rbp;
        return rax;
        rax = *((rbx + 0x18));
        rax--;
        *((rbx + 0x18)) = rax;
        if (rax < 0) {
            goto label_6;
        }
        xmm0 = 0;
        rdx = *((rbx + 0x28));
        __asm ("cvtsi2ss xmm0, rax");
        rax = *((rbx + 0x10));
        if (rax < 0) {
            goto label_7;
        }
label_1:
        xmm1 = 0;
        __asm ("cvtsi2ss xmm1, rax");
label_2:
        __asm ("mulss xmm1, dword [rdx]");
        __asm ("comiss xmm1, xmm0");
    }
    fcn_0040b290 (rbx + 0x28);
    rax = *((rbx + 0x10));
    rdx = *((rbx + 0x28));
    if (rax < 0) {
        goto label_8;
    }
    xmm0 = 0;
    __asm ("cvtsi2ss xmm0, rax");
label_4:
    rax = *((rbx + 0x18));
    if (rax < 0) {
        goto label_9;
    }
    xmm1 = 0;
    __asm ("cvtsi2ss xmm1, rax");
label_3:
    xmm2 = *(rdx);
    __asm ("mulss xmm2, xmm0");
    __asm ("comiss xmm2, xmm1");
    if (rax <= 0) {
        goto label_0;
    }
    __asm ("mulss xmm0, dword [rdx + 4]");
    if (*((rdx + 0x10)) == 0) {
        __asm ("mulss xmm0, dword [rdx + 8]");
    }
    __asm ("comiss xmm0, dword [0x00415c30]");
    if (*((rdx + 0x10)) >= 0) {
        goto label_10;
    }
    __asm ("cvttss2si rsi, xmm0");
label_5:
    al = fcn_0040bc30 (rbx, rsi);
    if (al != 0) {
        goto label_0;
    }
    rdi = *((rbx + 0x48));
    if (rdi == 0) {
        goto label_11;
    }
    do {
        r12 = *((rdi + 8));
        rax = free (rdi);
        rdi = r12;
    } while (r12 != 0);
label_11:
    *((rbx + 0x48)) = 0;
    goto label_0;
label_6:
    rdx = rax;
    eax &= 1;
    xmm0 = 0;
    rdx >>= 1;
    rdx |= rax;
    rax = *((rbx + 0x10));
    __asm ("cvtsi2ss xmm0, rdx");
    rdx = *((rbx + 0x28));
    __asm ("addss xmm0, xmm0");
    if (rax >= 0) {
        goto label_1;
    }
label_7:
    rcx = rax;
    eax &= 1;
    xmm1 = 0;
    rcx >>= 1;
    rcx |= rax;
    __asm ("cvtsi2ss xmm1, rcx");
    __asm ("addss xmm1, xmm1");
    goto label_2;
label_9:
    rcx = rax;
    eax &= 1;
    xmm1 = 0;
    rcx >>= 1;
    rcx |= rax;
    __asm ("cvtsi2ss xmm1, rcx");
    __asm ("addss xmm1, xmm1");
    goto label_3;
label_8:
    rcx = rax;
    eax &= 1;
    xmm0 = 0;
    rcx >>= 1;
    rcx |= rax;
    __asm ("cvtsi2ss xmm0, rcx");
    __asm ("addss xmm0, xmm0");
    goto label_4;
label_10:
    __asm ("subss xmm0, dword [0x00415c30]");
    __asm ("cvttss2si rsi, xmm0");
    __asm ("btc rsi, 0x3f");
    goto label_5;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40c3a0 */
#include <stdint.h>
 
uint64_t fcn_0040c3a0 (char ** arg1) {
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
            edi = 0x415c80;
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
        *(0x0061b920) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite (0x415c40, 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40c440 */
#include <stdint.h>
 
uint32_t fcn_0040c440 (int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_ch;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    rbx = rdx;
    edx = r8d;
    rcx = rsp + 0xc;
    eax = fcn_00411440 (rdi, rsi);
    if (eax != 0) {
        goto label_0;
    }
    fcn_00411470 (rsp + 0xc, rbx, ebp);
    do {
        return eax;
label_0:
        eax = 0xfffffffe;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40c480 */
#include <stdint.h>
 
void fcn_0040c480 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    *((rsp + 0xc)) = edx;
    fcn_00411470 (rsp + 0xc, rdi, esi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40c4a0 */
#include <stdint.h>
 
uint64_t fcn_0040c4a0 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_004115e0 ();
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
        eax = 0x415c86;
        ebx = 0x415c91;
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
        eax = 0x415c8a;
        ebx = 0x415c8d;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x416f57;
    ebx = 0x415c84;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40c5a0 */
#include <stdint.h>
 
uint64_t fcn_0040c5a0 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
    /* switch table (11 cases) at 0x415d00 */
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
    *((rsp + 0x50)) = 0x416f57;
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
        /* switch table (127 cases) at 0x415d58 */
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
    rax = fcn_0040c5a0 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x416150 */
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
    /* switch table (127 cases) at 0x416548 */
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
    *((rsp + 0x50)) = 0x416f57;
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
        rax = fcn_004113c0 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x416f57;
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
        *((rsp + 0x50)) = 0x415c84;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_0040c4a0 (0x415c95, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_0040c4a0 (0x416f57, r13d);
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
        *((rsp + 0x50)) = 0x415c84;
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
        *((rsp + 0x50)) = 0x416f57;
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
    *((rsp + 0x50)) = 0x415c84;
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
    rax = fcn_0040c5a0 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x416f57;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40d7d0 */
#include <stdint.h>
 
uint64_t fcn_0040d7d0 (int64_t arg_4h, int64_t arg_8h, int64_t arg_28h, int64_t arg_30h, int64_t arg1, char * arg2, int64_t arg3, int64_t arg4) {
    char * var_8h;
    char * var_30h;
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
        rbx = *(0x0061b418);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x0061b430) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x61b420) {
        goto label_2;
    }
    rax = fcn_00410140 (rbx, rsi);
    *(0x0061b418) = rax;
    rbx = rax;
    do {
        rdi = *(0x0061b430);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x0061b430) = r12d;
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
        rax = fcn_0040c5a0 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x61b940) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_004100e0 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_0040c5a0 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00410140 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x0061b420]");
        rbx = rax;
        *(0x0061b418) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00410330 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40dcf0 */
#include <stdint.h>
 
int64_t fcn_0040dcf0 (int64_t arg1, uint32_t arg2, char * arg3) {
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
    fcn_0040d7d0 (rdi, rax, 0xffffffffffffffff, rsp, r8, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40ddd0 */
#include <stdint.h>
 
void fcn_0040ddd0 (int64_t arg1, char * arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = rsi;
    esi = edi;
    edi = 0;
invalid_funccall(); //    return void (*0x40dcf0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40de70 */
#include <stdint.h>
 
int64_t fcn_0040de70 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x0061ba40]");
        __asm ("movdqa xmm1, xmmword [0x0061ba50]");
        __asm ("movdqa xmm2, xmmword [0x0061ba60]");
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
        fcn_0040d7d0 (0, rdi, rsi, rsp, eax, r9);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40dea0 */
#include <stdint.h>
 
int64_t fcn_0040dea0 (int64_t arg1, uint32_t arg2, char * arg3) {
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
    fcn_0040d7d0 (rdi, rax, 0xffffffffffffffff, rsp, r8, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40e000 */
#include <stdint.h>
 
void fcn_0040e000 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 0x61b3e0;
    rdx = 0xffffffffffffffff;
invalid_funccall(); //    return void (*0x40d7d0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40e020 */
#include <stdint.h>
 
void fcn_0040e020 (int64_t arg_4h, int64_t arg_8h, int64_t arg_28h, int64_t arg_30h, uint32_t arg1) {
    int64_t var_8h;
    int64_t var_30h;
    int64_t var_18h;
    int64_t var_24h;
    rdi = arg1;
    rsi = rdi;
    ecx = 0x61b3e0;
    rdx = 0xffffffffffffffff;
    edi = 0;
invalid_funccall(); //    return void (*0x40d7d0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40e040 */
#include <stdint.h>
 
uint64_t fcn_0040e040 (int64_t arg1, void * arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_28h;
    int64_t var_a0h;
    int64_t var_b8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9d = r8d;
    eax = 0;
    r14d = edi;
    r13d = edx;
    r12 = rcx;
    r8 = rcx;
    ecx = edx;
    rdx = rsi;
    rbx = rsi;
    esi = edi;
    edi = 0x13c;
    eax = syscall ();
    edx = eax;
    if (eax >= 0) {
        goto label_0;
    }
    *((rsp + 8)) = eax;
    rax = errno_location ();
    edx = *((rsp + 8));
    r9 = rax;
    eax = *(rax);
    ecx = rax - 0x16;
    ecx &= 0xffffffef;
    r15b = (ecx != 0) ? 1 : 0;
    al = (eax != 0x5f) ? 1 : 0;
    r15b &= al;
    if (r15b != 0) {
        goto label_0;
    }
    if (ebp == 0) {
        goto label_2;
    }
    ebp &= 0xfffffffe;
    if (ebp == 0) {
        goto label_3;
    }
    *(r9) = 0x5f;
    edx = 0xffffffff;
    do {
label_0:
        eax = edx;
        return rax;
label_3:
        rdx = r12;
        esi = r13d;
        edi = 1;
        *((rsp + 8)) = r9;
        r8d = 0x100;
        rcx = rsp + 0xa0;
        eax = fxstatat ();
        r9 = *((rsp + 8));
        if (eax == 0) {
            goto label_4;
        }
        eax = *(r9);
        if (eax == 0x4b) {
            goto label_4;
        }
        if (eax != 2) {
            goto label_1;
        }
        r15d = 1;
label_2:
        *((rsp + 8)) = r9;
        rax = strlen (rbx);
        rax = strlen (r12);
        if (rbp == 0) {
            goto label_5;
        }
        r9 = *((rsp + 8));
        if (rax == 0) {
            goto label_5;
        }
        if (*((rbx + rbp - 1)) != 0x2f) {
            if (*((r12 + rax - 1)) != 0x2f) {
                goto label_5;
            }
        }
        rcx = rsp + 0x10;
        rdx = rbx;
        esi = r14d;
        edi = 1;
        r8d = 0x100;
        *((rsp + 8)) = r9;
        eax = fxstatat ();
        if (eax != 0) {
            goto label_1;
        }
        r9 = *((rsp + 8));
        if (r15b == 0) {
            goto label_6;
        }
        eax = *((rsp + 0x28));
        eax &= 0xf000;
        if (eax == 0x4000) {
            goto label_5;
        }
        *(r9) = 2;
        edx = 0xffffffff;
    } while (1);
    do {
        eax = *((rsp + 0xb8));
        eax &= 0xf000;
        if (eax == 0x4000) {
            goto label_7;
        }
        *(r9) = 0x14;
label_1:
        edx = 0xffffffff;
        goto label_0;
label_6:
        rdx = r12;
        esi = r13d;
        edi = 1;
        *((rsp + 8)) = r9;
        r8d = 0x100;
        rcx = rsp + 0xa0;
        eax = fxstatat ();
        r9 = *((rsp + 8));
    } while (eax == 0);
    if (*(r9) != 2) {
        goto label_1;
    }
    eax = *((rsp + 0x28));
    eax &= 0xf000;
    if (eax != 0x4000) {
        goto label_1;
    }
    do {
label_5:
        edx = r13d;
        rcx = r12;
        rsi = rbx;
        edi = r14d;
        eax = renameat ();
        edx = eax;
        goto label_0;
label_4:
        *(r9) = 0x11;
        edx = 0xffffffff;
        goto label_0;
label_7:
        eax = *((rsp + 0x28));
        eax &= 0xf000;
    } while (eax == 0x4000);
    *(r9) = 0x15;
    edx = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40e290 */
#include <stdint.h>
 
uint64_t fcn_0040e290 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13d = edi;
    r12 = rsi;
    rbx = rdx;
    do {
label_0:
        rax = write (r13d, r12, rbx);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40e2f0 */
#include <stdint.h>
 
uint64_t fcn_0040e2f0 (char * arg1, char * arg2) {
    uint32_t var_8h;
    int64_t var_90h;
    int64_t var_98h;
    rdi = arg1;
    rsi = arg2;
    r15 = rdi;
    r14 = rsi;
    ebx = 0;
    rax = fcn_0040ab40 (rdi);
    rax = fcn_0040ab40 (r14);
    r12 = rax;
    rax = fcn_0040aba0 (rbp);
    r13 = rax;
    rax = fcn_0040aba0 (r12);
    while (eax != 0) {
label_0:
        eax = ebx;
        return rax;
        eax = memcmp (rbp, r12, r13);
    }
    rdi = r15;
    rax = fcn_0040aa60 ();
    rdi = r14;
    rax = fcn_0040aa60 ();
    rdx = rsp;
    rsi = rbp;
    edi = 1;
    r12 = rax;
    eax = xstat ();
    if (eax != 0) {
        goto label_2;
    }
label_1:
    rdx = rsp + 0x90;
    rsi = r12;
    edi = 1;
    eax = xstat ();
    while (1) {
        ebx = 0;
        rax = *((rsp + 0x98));
        if (*((rsp + 8)) == rax) {
            rax = *((rsp + 0x90));
            bl = (*(rsp) == rax) ? 1 : 0;
        }
        free (rbp);
        free (r12);
        goto label_0;
        rax = errno_location ();
        rcx = r12;
        eax = 0;
        error (1, *(rax), 0x415a9d);
    }
label_2:
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), 0x415a9d);
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40e450 */
#include <stdint.h>
 
int64_t fcn_0040e450 (int64_t arg1, int64_t arg2) {
    uint32_t const void * unknown;
    uint32_t var_10h;
    int64_t var_18h;
    uint32_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    rdi = arg1;
    rsi = arg2;
    rax = *((rsi*8 + 0x4169e0));
    *((rsp + 8)) = rax;
    if (rdi == 0) {
        goto label_9;
    }
    rbx = rdi;
    r15d = 0;
    r12d = 0;
    r14d = 0;
    rax = errno_location ();
    r13d = 0;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x10)) = 0;
    while (al != 0x2e) {
label_1:
        if (al != 0) {
            goto label_10;
        }
label_0:
        *(rbp) = 0;
        rdi = rbx;
        rax = readdir ();
        rcx = rax;
        if (rax == 0) {
            goto label_11;
        }
        r8 = rax + 0x13;
        eax = *((rax + 0x13));
    }
    if (*((rcx + 0x14)) == 0x2e) {
        goto label_12;
    }
    eax = *((rcx + 0x14));
    if (al == 0) {
        goto label_0;
    }
label_10:
    rdi = r8;
    *((rsp + 0x18)) = r8;
    *((rsp + 0x28)) = rcx;
    strlen (rdi);
    r8 = *((rsp + 0x18));
    rdx = rax + 1;
    if (*((rsp + 8)) == 0) {
        goto label_13;
    }
    rax = r12 + 1;
    rcx = *((rsp + 0x28));
    *((rsp + 0x18)) = rax;
    if (r12 == *((rsp + 0x20))) {
        goto label_14;
    }
label_2:
    *((rsp + 0x30)) = rdx;
    r12 <<= 4;
    *((rsp + 0x28)) = rcx;
    r12 += r14;
    rax = fcn_00410310 (r8);
    rcx = *((rsp + 0x28));
    rdx = *((rsp + 0x30));
    *(r12) = rax;
    rax = *(rcx);
    r15 += rdx;
    *((r12 + 8)) = rax;
    r12 = *((rsp + 0x18));
    goto label_0;
label_12:
    eax = *((rcx + 0x15));
    goto label_1;
label_11:
    ebx = *(rbp);
    if (ebx != 0) {
        goto label_15;
    }
    if (*((rsp + 8)) == 0) {
        goto label_16;
    }
    rbx = r15 + 1;
    if (r12 == 0) {
        rax = fcn_004100e0 (rbx);
        r13 = rax;
        goto label_17;
    }
    rcx = *((rsp + 8));
    rsi = r12;
    edx = 0x10;
    rdi = r14;
    r12 <<= 4;
    ebp = 0;
    qsort ();
    r12 += r14;
    rbx = r14;
    rax = fcn_004100e0 (rbx);
    r13 = rax;
    do {
        r15 = r13 + rbp;
        rsi = *(rbx);
        rbx += 0x10;
        rdi = r15;
        rax = stpcpy ();
        rax -= r15;
        rbp = rbp + rax + 1;
        free (*((rbx - 0x10)));
    } while (rbx != r12);
    rbp += r13;
label_17:
    free (r14);
    do {
label_3:
        *(rbp) = 0;
label_4:
        rax = r13;
        return rax;
label_13:
        rax = *((rsp + 0x10));
        rsi = r15;
        rax -= r15;
        rsi += rdx;
        cl = (rsi < 0) ? 1 : 0;
        *((rsp + 0x18)) = rsi;
        ecx = (int32_t) cl;
        if (rax <= rdx) {
            if (rcx != 0) {
                goto label_8;
            }
            if (r13 == 0) {
                goto label_18;
            }
            rax = 0x5555555555555553;
            rsi = *((rsp + 0x18));
            if (rsi > rax) {
                goto label_8;
            }
            rax = rsi;
            rax >>= 1;
            rax = rsi + rax + 1;
label_5:
            *((rsp + 0x10)) = rax;
label_6:
            *((rsp + 0x30)) = rdx;
            *((rsp + 0x28)) = r8;
            rax = fcn_00410140 (r13, *((rsp + 0x10)));
            r8 = *((rsp + 0x28));
            r13 = rax;
        }
        memcpy (r13 + r15, r8, *((rsp + 0x30)));
        r15 = *((rsp + 0x18));
        goto label_0;
label_16:
        if (*((rsp + 0x10)) == r15) {
            goto label_19;
        }
        rbp = r13 + r15;
    } while (1);
label_14:
    if (r14 == 0) {
        goto label_20;
    }
    rax = 0x555555555555554;
    if (r12 > rax) {
        goto label_8;
    }
    rax = r12;
    rax >>= 1;
    rax += *((rsp + 0x18));
    *((rsp + 0x20)) = rax;
    rsi <<= 4;
label_7:
    *((rsp + 0x38)) = rdx;
    *((rsp + 0x30)) = r8;
    *((rsp + 0x28)) = rcx;
    rax = fcn_00410140 (r14, rax);
    rdx = *((rsp + 0x38));
    r8 = *((rsp + 0x30));
    r14 = rax;
    rcx = *((rsp + 0x28));
    goto label_2;
label_19:
    rbx = *((rsp + 0x10));
    rax = fcn_00410140 (r13, rbx + 1);
    r13 = rax;
    rbp = rax + rbx;
    goto label_3;
label_15:
    free (r14);
    r13d = 0;
    free (r13);
    *(rbp) = ebx;
    goto label_4;
label_9:
    r13d = 0;
    goto label_4;
label_18:
    rax = rsi;
    if (rsi == 0) {
        goto label_21;
    }
    if (rsi >= 0) {
        goto label_5;
    }
    do {
label_8:
        fcn_00410330 ();
label_21:
        *((rsp + 0x10)) = 0x80;
        goto label_6;
label_20:
        if (r12 == 0) {
            goto label_22;
        }
        rax = r12;
        rsi = r12;
        rax >>= 0x3c;
        al = (rax != 0) ? 1 : 0;
        rsi <<= 4;
        eax = (int32_t) al;
    } while (rsi < 0);
    if (rax == 0) {
        goto label_7;
    }
    goto label_8;
label_22:
    *((rsp + 0x20)) = 8;
    esi = 0x80;
    *((rsp + 0x18)) = 1;
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40e7f0 */
#include <stdint.h>
 
uint64_t fcn_0040e7f0 (int64_t arg2) {
    rsi = arg2;
    rax = fcn_0040a9c0 ();
    if (rax != 0) {
        rbx = rax;
        rax = fcn_0040e450 (rax, ebp);
        rdi = rbx;
        eax = closedir ();
        if (eax != 0) {
            goto label_0;
        }
        rax = rbp;
        return rax;
    }
    ebp = 0;
    rax = rbp;
    return rax;
label_0:
    rax = errno_location ();
    ebp = 0;
    r12d = *(rax);
    rbx = rax;
    free (rbp);
    rax = rbp;
    *(rbx) = r12d;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40e8f0 */
#include <stdint.h>
 
void fcn_0040e8f0 (void) {
    return assert_fail ("! \"invalid KIND in __gen_tempname\"", "lib/tempname.c", 0x147, "gen_tempname_len");}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40e910 */
#include <stdint.h>
 
uint64_t fcn_0040e910 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_2ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r14 = rdi;
    r13 = r8;
    *((rsp + 0x18)) = rdx;
    *((rsp + 8)) = rdi;
    *((rsp + 0x20)) = rcx;
    rax = errno_location ();
    r15 = rax;
    eax = *(rax);
    *((rsp + 0x2c)) = eax;
    rax = strlen (r14);
    rdx = (int64_t) ebp;
    rdx += r13;
    if (rdx > rax) {
        goto label_2;
    }
    rax -= rdx;
    rbx = rax;
    rax = r14 + rax;
    rdi = rax;
    *((rsp + 0x10)) = rax;
    rax = strspn (rdi, 0x415ab5);
    if (r13 > rax) {
        goto label_2;
    }
    rsi = r13;
    edi = 0;
    rax = fcn_00411b80 ();
    if (rax == 0) {
        goto label_3;
    }
    rax = *((rsp + 8));
    r12d = 0x3a2f8;
    rax += r13;
    rbx += rax;
label_0:
    r14 = *((rsp + 0x10));
    if (r13 == 0) {
        goto label_4;
    }
    do {
        r14++;
        fcn_00411bc0 (rbp, 0x3d);
        eax = *((rax + str_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789));
        *((r14 - 1)) = al;
    } while (r14 != rbx);
label_4:
    rsi = *((rsp + 0x18));
    rdi = *((rsp + 8));
    rax = *((rsp + 0x20));
invalid_funccall(); //    eax = void (*rax)() ();
    edx = eax;
    if (eax >= 0) {
        goto label_5;
    }
    ecx = *(r15);
    if (ecx != 0x11) {
        goto label_6;
    }
    r12d--;
    if (r12d != 0) {
        goto label_0;
    }
    fcn_00411ce0 (rbp);
    *(r15) = 0x11;
    edx = 0xffffffff;
    goto label_1;
label_5:
    eax = *((rsp + 0x2c));
    *(r15) = eax;
    ecx = eax;
    do {
        *((rsp + 0x10)) = edx;
        *((rsp + 8)) = ecx;
        fcn_00411ce0 (rbp);
        ecx = *((rsp + 8));
        edx = *((rsp + 0x10));
        *(r15) = ecx;
label_1:
        eax = edx;
        return rax;
label_6:
        edx = 0xffffffff;
    } while (1);
label_2:
    *(r15) = 0x16;
    edx = 0xffffffff;
    goto label_1;
label_3:
    edx = 0xffffffff;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40eaf0 */
#include <stdint.h>
 
uint64_t fcn_0040eaf0 (uint32_t arg1) {
    rdi = arg1;
    ebx = edi;
    if (edi > 2) {
        eax = ebx;
        return eax;
    }
    eax = fcn_00412750 (rdi, rsi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40eb60 */
#include <stdint.h>
 
uint64_t fcn_0040eb60 (char * arg1, char * arg2, func * arg3, int64_t arg4) {
    int64_t var_8h;
    char * var_10h;
    uint32_t var_18h;
    char * var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_5ch;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_d8h;
    int64_t var_e0h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    ebx = ecx;
    r13 = *((rdx + 0x60));
    r12 = *((rsi + 0x58));
    rbp = *((rdx + 0x58));
    r14 = *((rsi + 0x60));
    r15d = r13d;
    ebx &= 1;
    if (ebx != 0) {
        rsp = (r12 == rbp) ? 1 : 0;
        ecx = *(rsp);
        al = (r14d == r13d) ? 1 : 0;
        al &= cl;
        *((rsp + 8)) = al;
        if (al != 0) {
            goto label_15;
        }
        rax = rbp - 1;
        if (rax > r12) {
            goto label_2;
        }
        rax = r12 - 1;
        if (rax > rbp) {
            goto label_0;
        }
        rdx = imp.__libc_start_main;
        *((rsp + 0x10)) = rsi;
        *((rsp + 0x20)) = rdi;
        if (rdx == 0) {
            goto label_16;
        }
label_1:
        rsi = imp.__libc_start_main;
        if (rsi == 0) {
            goto label_17;
        }
label_5:
        rax = *((rsp + 0x10));
        rax = *(rax);
        *(rsi) = rax;
        rax = fcn_0040c0b0 (rdx);
        r9 = rax;
        if (rax == 0) {
            goto label_18;
        }
        if (*(0x0061ba78) == rax) {
            goto label_19;
        }
label_7:
        edi = *((r9 + 8));
        *((rsp + 0x18)) = edi;
        if (*((r9 + 0xc)) == 0) {
            goto label_20;
        }
        eax = 0;
        al = (edi == 0x77359400) ? 1 : 0;
        eax = ~eax;
        rax = (int64_t) eax;
        rbp &= rax;
        eax = r15d;
        r15d = r13d;
        edx_eax = (int64_t) eax;
        eax = edx_eax / edi;
        edx = edx_eax % edi;
        r15d -= edx;
    }
label_4:
    if (rbp > r12) {
        goto label_2;
    }
    ebx = 1;
    if (rbp != r12) {
        goto label_0;
    }
    if (r15d > r14d) {
        goto label_2;
    }
    bl = (r15d < r14d) ? 1 : 0;
    ebx = (int32_t) bl;
    do {
label_0:
        eax = ebx;
        return rax;
label_15:
        ebx = 0;
    } while (1);
label_3:
    eax = r15d;
    edx_eax = (int64_t) eax;
    eax = edx_eax / r8d;
    edx = edx_eax % r8d;
    eax = r13d;
    eax -= edx;
    if (eax <= r14d) {
        goto label_21;
    }
label_2:
    ebx = 0xffffffff;
    goto label_0;
label_16:
    rax = fcn_0040b910 (0x10, 0, 0x40eb40, 0x40eb50, sym.imp.free);
    rdx = rax;
    *(0x0061ba80) = rax;
    if (rax != 0) {
        goto label_1;
    }
label_6:
    rdx = rsp + 0x50;
label_8:
    *((rsp + 0x58)) = 0x77359400;
    r9 = rdx;
    *((rsp + 0x5c)) = 0;
    *((rsp + 0x18)) = 0x77359400;
label_20:
    rax = *((rsp + 0x10));
    r8d = 0x66666667;
    rdi = *((rax + 0x50));
    rcx = *((rax + 0x70));
    eax = edi;
    esi = edi;
    *((rsp + 0x30)) = rdi;
    edx_eax = eax * r8d;
    esi >>= 0x1f;
    edx >>= 2;
    edx -= esi;
    esi = edi;
    edi = ecx;
    eax = rdx * 5;
    r11d = edx;
    edi >>= 0x1f;
    eax += eax;
    esi -= eax;
    eax = ecx;
    edx_eax = eax * r8d;
    edx >>= 2;
    edx -= edi;
    edi = r14d;
    eax = rdx * 5;
    r10d = edx;
    edi >>= 0x1f;
    eax += eax;
    ecx -= eax;
    eax = r14d;
    edx_eax = eax * r8d;
    ecx |= esi;
    esi = r14d;
    edx >>= 2;
    edx -= edi;
    eax = rdx * 5;
    edi = edx;
    *((rsp + 0x28)) = edx;
    eax += eax;
    esi -= eax;
    ecx |= esi;
    if (ecx != 0) {
        goto label_22;
    }
    rax = *((rsp + 0x10));
    ecx = r11d;
    esi = r10d;
    rax = *((rax + 0x48));
    *((rsp + 0x48)) = rax;
    if (*((rsp + 0x18)) <= 0xa) {
        goto label_23;
    }
    eax = r11d;
    edx_eax = eax * r8d;
    eax = r11d;
    eax >>= 0x1f;
    edx >>= 2;
    edx -= eax;
    eax = rdx * 5;
    eax += eax;
    r11d -= eax;
    eax = r10d;
    edx_eax = eax * r8d;
    eax = r10d;
    eax >>= 0x1f;
    edx >>= 2;
    edx -= eax;
    eax = rdx * 5;
    eax += eax;
    r10d -= eax;
    eax = *((rsp + 0x28));
    r11d |= r10d;
    r10d = 0x66666667;
    edx_eax = eax * r8d;
    r8d = *((rsp + 0x28));
    eax = *((rsp + 0x28));
    eax >>= 0x1f;
    edx >>= 2;
    edx -= eax;
    eax = rdx * 5;
    edx = r8d;
    r8d = 0xa;
    eax += eax;
    edx -= eax;
    eax = 8;
    r11d |= edx;
    if (r11d != 0) {
        goto label_24;
    }
    *((rsp + 0x28)) = rbp;
    *((rsp + 0x40)) = r9;
    r9d = *((rsp + 0x18));
    *((rsp + 0x3c)) = r15d;
    r15d = eax;
    do {
        eax = ecx;
        ecx >>= 0x1f;
        r11d = r8 * 5;
        edx_eax = eax * r10d;
        eax = esi;
        esi >>= 0x1f;
        r11d += r11d;
        r8d = r11d;
        edx >>= 2;
        edx -= ecx;
        ecx = edx;
        edx_eax = eax * r10d;
        eax = edi;
        edi >>= 0x1f;
        edx >>= 2;
        edx -= esi;
        esi = edx;
        edx_eax = eax * r10d;
        edx >>= 2;
        edx -= edi;
        edi = edx;
        if (r11d >= r9d) {
            goto label_25;
        }
        eax = ecx;
        edx_eax = eax * r10d;
        eax = ecx;
        eax >>= 0x1f;
        edx >>= 2;
        edx -= eax;
        eax = rdx * 5;
        eax += eax;
        ebp -= eax;
        eax = esi;
        edx_eax = eax * r10d;
        eax = esi;
        eax >>= 0x1f;
        edx >>= 2;
        edx -= eax;
        eax = rdx * 5;
        edx = esi;
        eax += eax;
        edx -= eax;
        eax = edi;
        ebp |= edx;
        edx_eax = eax * r10d;
        eax = edi;
        eax >>= 0x1f;
        edx >>= 2;
        edx -= eax;
        eax = rdx * 5;
        edx = edi;
        eax += eax;
        edx -= eax;
        ebp |= edx;
        if (ebp != 0) {
            goto label_25;
        }
        r15d--;
    } while (r15d != 0);
    rax = *((rsp + 0x48));
    rdi = *((rsp + 0x10));
    rbp = *((rsp + 0x28));
    r15d = *((rsp + 0x3c));
    rax |= r12;
    rax |= *((rdi + 0x68));
    r9 = *((rsp + 0x40));
    if ((al & 1) == 0) {
        goto label_26;
    }
    *((r9 + 8)) = 0x3b9aca00;
    rax = rbp;
    r8d = 0x3b9aca00;
label_9:
    if (r12 > rbp) {
        goto label_0;
    }
    if (r14d < r13d) {
        goto label_27;
    }
    if (*(rsp) != 0) {
        goto label_0;
    }
label_27:
    if (r12 < rax) {
        goto label_2;
    }
    if (r12 == rax) {
        goto label_3;
    }
label_21:
    rax = *((rsp + 0x48));
    edx = 0x38e38e39;
    *((rsp + 0x18)) = r8d;
    rdi = *((rsp + 0x20));
    *((rsp + 0x60)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x68)) = rax;
    eax = *((rsp + 8));
    rax |= r12;
    *((rsp + 0x70)) = rax;
    eax = r8d;
    edx_eax = eax * edx;
    edx >>= 1;
    eax = rdx + r14;
    rax = (int64_t) eax;
    *((rsp + 0x78)) = rax;
    rax = *((rsp + 0x10));
    eax = *((rax + 0x18));
    *(rsp) = eax;
    eax &= 0xf000;
    rax = rsp + 0x60;
    *(rsp) = r9;
    *((rsp + 8)) = rax;
    rsi = rax;
    if (eax == 0xa000) {
        goto label_28;
    }
    eax = fcn_0040f8a0 (rdi, rsi, rdx, rcx);
    r8d = *((rsp + 0x18));
    r9 = *(rsp);
    al = (eax != 0) ? 1 : 0;
label_11:
    if (al == 0) {
        rax = *((rsp + 0x10));
        *((rsp + 0x18)) = r8d;
        edi = 1;
        rdx = rsp + 0x80;
        rsi = *((rsp + 0x20));
        eax = *((rax + 0x18));
        *(rsp) = eax;
        eax &= 0xf000;
        *(rsp) = r9;
        if (eax == 0xa000) {
            goto label_29;
        }
        eax = xstat ();
        r8d = *((rsp + 0x18));
        r9 = *(rsp);
        r10d = eax;
label_12:
        rax = *((rsp + 0xd8));
        rcx = *((rsp + 0xe0));
        rdi = (int64_t) r14d;
        rdx = rdi;
        rsi = rax;
        rdx ^= rcx;
        rsi ^= r12;
        rdx |= rsi;
        rsi = (int64_t) r10d;
        rdx |= rsi;
        if (rdx == 0) {
            goto label_30;
        }
        rax = *((rsp + 0x10));
        *((rsp + 0x78)) = rdi;
        *((rsp + 0x70)) = r12;
        rsi = *((rsp + 8));
        eax = *((rax + 0x18));
        rdi = *((rsp + 0x20));
        *((rsp + 0x18)) = r8d;
        *((rsp + 0x10)) = r10d;
        eax &= 0xf000;
        *(rsp) = r9;
        if (eax == 0xa000) {
            goto label_31;
        }
        fcn_0040f8a0 (rdi, rsi, rdx, rcx);
        r8d = *((rsp + 0x18));
        r10d = *((rsp + 0x10));
        r9 = *(rsp);
label_14:
        if (r10d == 0) {
            goto label_32;
        }
    }
    ebx = 0xfffffffe;
    goto label_0;
label_32:
    rax = *((rsp + 0xd8));
    rcx = *((rsp + 0xe0));
label_30:
    eax &= 1;
    edx = 0x66666667;
    eax *= 0x3b9aca00;
    ecx += eax;
    eax = ecx;
    edx_eax = eax * edx;
    eax = edx;
    edx = ecx;
    eax >>= 2;
    edx >>= 0x1f;
    eax -= edx;
    eax = rax * 5;
    eax += eax;
    if (ecx != eax) {
        goto label_33;
    }
    if (r8d == 0xa) {
        goto label_34;
    }
    esi = 9;
    ebx = 0xa;
    edi = 0x66666667;
    while (esi != 0) {
        ebx = rbx * 5;
        ebx += ebx;
        if (ebx == r8d) {
            goto label_35;
        }
        eax = ecx;
        ecx >>= 0x1f;
        edx_eax = eax * edi;
        edx >>= 2;
        edx -= ecx;
        eax = edx;
        ecx = edx;
        edx_eax = eax * edi;
        eax = ecx;
        eax >>= 0x1f;
        edx >>= 2;
        edx -= eax;
        eax = rdx * 5;
        eax += eax;
        if (ecx != eax) {
            goto label_35;
        }
        esi--;
    }
    rax = 0xfffffffffffffffe;
    ebx = 0x77359400;
label_13:
    rbp &= rax;
    eax = r15d;
    r15d = r13d;
    edx_eax = (int64_t) eax;
    eax = edx_eax / ebx;
    edx = edx_eax % ebx;
    r15d -= edx;
label_22:
    *((r9 + 8)) = ebx;
    *((r9 + 0xc)) = 1;
    goto label_4;
label_17:
    *((rsp + 0x18)) = rdx;
    rax = malloc (0x10);
    rsi = rax;
    *(0x0061ba78) = rax;
    if (rax == 0) {
        goto label_36;
    }
    *((rax + 8)) = 0x77359400;
    rdx = *((rsp + 0x18));
    *((rax + 0xc)) = 0;
    goto label_5;
label_18:
    rdi = imp.__libc_start_main;
    if (rdi == 0) {
        goto label_6;
    }
label_10:
    rax = *((rsp + 0x10));
    rdx = rsp + 0x50;
    rsi = rdx;
    *((rsp + 0x18)) = rdx;
    rax = *(rax);
    *((rsp + 0x50)) = rax;
    rax = fcn_0040b6a0 (rdi, rsi);
    rdx = *((rsp + 0x18));
    r9 = rax;
    if (rax != 0) {
        goto label_7;
    }
    goto label_8;
label_19:
    *(0x0061ba78) = 0;
    goto label_7;
label_25:
    rbp = *((rsp + 0x28));
    r9 = *((rsp + 0x40));
    *(rsp + 8) = (r11d == 0x77359400) ? 1 : 0;
    eax = *((rsp + 8));
    r15d = *((rsp + 0x3c));
    *((r9 + 8)) = r11d;
    eax = ~eax;
    rax = (int64_t) eax;
    rax &= rbp;
    goto label_9;
label_26:
    rax = rbp;
    *((r9 + 8)) = 0x77359400;
    r8d = 0x77359400;
    rax &= 0xfffffffffffffffe;
    *((rsp + 8)) = 1;
    goto label_9;
label_36:
    rdi = imp.__libc_start_main;
    goto label_10;
label_28:
    eax = fcn_0040f8b0 (rdi, rsi, rdx, rcx);
    r9 = *(rsp);
    r8d = *((rsp + 0x18));
    al = (eax != 0) ? 1 : 0;
    goto label_11;
label_24:
    *((r9 + 8)) = 0xa;
    rax = rbp;
    goto label_9;
label_23:
    *((r9 + 8)) = 0xa;
    rax = rbp;
    r8d = 0xa;
    goto label_9;
label_29:
    eax = lxstat ();
    r9 = *(rsp);
    r8d = *((rsp + 0x18));
    r10d = eax;
    goto label_12;
label_35:
    eax = 0;
    al = (ebx == 0x77359400) ? 1 : 0;
    eax = ~eax;
    rax = (int64_t) eax;
    goto label_13;
label_31:
    rax = fcn_0040f8b0 (rdi, rsi, rdx, rcx);
    r9 = *(rsp);
    r10d = *((rsp + 0x10));
    r8d = *((rsp + 0x18));
    goto label_14;
label_34:
    ebx = 0xa;
label_33:
    rax |= 0xffffffffffffffff;
    goto label_13;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40f2d0 */
#include <stdint.h>
 
int64_t fcn_0040f2d0 (int64_t arg1, uint32_t arg2) {
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rbx = *(rsi);
    rax = *((rbx + 8));
    rdx = *((rbx + 0x18));
    if (rax == 0x3ffffffe) {
        goto label_3;
    }
    if (rax == 0x3fffffff) {
        goto label_4;
    }
    if (rdx != 0x3ffffffe) {
        goto label_2;
    }
label_1:
    rdx = *((rbp + 0x58));
    rax = *((rbp + 0x60));
    *((rbx + 0x10)) = rdx;
    *((rbx + 0x18)) = rax;
    eax = 0;
    do {
label_0:
        return rax;
label_3:
        eax = 1;
    } while (rdx == 0x3ffffffe);
    rcx = *((rdi + 0x48));
    rax = *((rdi + 0x50));
    *(rbx) = rcx;
    *((rbx + 8)) = rax;
label_2:
    eax = 0;
    if (rdx != 0x3fffffff) {
        goto label_0;
    }
    *((rsp + 0xf)) = al;
    fcn_00411500 (rbx + 0x10);
    eax = *((rsp + 0xf));
    return rax;
label_4:
    if (rdx == 0x3fffffff) {
        goto label_5;
    }
    eax = fcn_00411500 (rbx);
    rdx = *((rbx + 0x18));
    if (rdx == 0x3ffffffe) {
        goto label_1;
    }
    goto label_2;
label_5:
    *(rsi) = 0;
    eax = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40f3a0 */
#include <stdint.h>
 
int64_t fcn_0040f3a0 (int64_t arg1) {
    rdi = arg1;
    r9 = *((rdi + 8));
    rsi = r9 - 0x3ffffffe;
    if (rsi > 1) {
        if (r9 > 0x3b9ac9ff) {
            goto label_0;
        }
    }
    rdx = *((rdi + 0x18));
    r8 = rdx - 0x3ffffffe;
    if (r8 > 1) {
        if (rdx > 0x3b9ac9ff) {
            goto label_0;
        }
    }
    ecx = 0;
    r10d = 0;
    if (rsi <= 1) {
        *(rdi) = 0;
        ecx = 0;
        r10d = 1;
        cl = (r9 == 0x3ffffffe) ? 1 : 0;
    }
    if (r8 <= 1) {
        eax = 0;
        *((rdi + 0x10)) = 0;
        r10d = 1;
        al = (rdx == 0x3ffffffe) ? 1 : 0;
        ecx += eax;
    }
    eax = 0;
    al = (ecx == 1) ? 1 : 0;
    eax += r10d;
    return eax;
label_0:
    errno_location ();
    *(rax) = 0x16;
    eax = 0xffffffff;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40f460 */
#include <stdint.h>
 
uint64_t fcn_0040f460 (char *** arg1, char * arg2, uint32_t arg3, int64_t arg7, int64_t arg8) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    uint32_t var_b8h;
    uint32_t var_c0h;
    int64_t var_c8h;
    uint32_t var_d0h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    xmm0 = arg7;
    xmm1 = arg8;
    ebx = edi;
    if (rdx == 0) {
        goto label_10;
    }
    __asm ("movdqu xmm0, xmmword [rdx]");
    __asm ("movdqu xmm1, xmmword [rdx + 0x10]");
    *((rsp + 8)) = rdi;
    *((rsp + 0x10)) = xmm0;
    *((rsp + 0x20)) = xmm1;
    eax = fcn_0040f3a0 (rsp + 0x10);
    r13d = eax;
    if (eax < 0) {
        goto label_11;
    }
label_1:
    if (ebx < 0) {
        if (rbp == 0) {
            goto label_12;
        }
    }
    eax = imp.__libc_start_main;
    if (eax >= 0) {
        if (r13d == 2) {
            goto label_13;
        }
        rsi = *((rsp + 8));
label_2:
        if (ebx < 0) {
            goto label_14;
        }
        edi = ebx;
        eax = futimens ();
        r12d = eax;
        if (eax <= 0) {
            goto label_15;
        }
label_4:
        errno_location ();
        *(rax) = 0x26;
    }
label_7:
    *(0x0061ba8c) = 0xffffffff;
    *(0x0061ba88) = 0xffffffff;
    if (r13d != 0) {
        if (r13d != 3) {
            rdx = rsp + 0x70;
            if (ebx < 0) {
                goto label_16;
            }
            esi = ebx;
            edi = 1;
            eax = fxstat ();
            al = (eax != 0) ? 1 : 0;
label_3:
            if (al != 0) {
                goto label_11;
            }
        }
        if (*((rsp + 8)) == 0) {
            goto label_17;
        }
        r12d = 0;
        al = fcn_0040f2d0 (rsp + 0x70, rsp + 8);
        if (al != 0) {
            goto label_0;
        }
    }
    rsi = *((rsp + 8));
    if (rsi == 0) {
        goto label_17;
    }
    rax = *(rsi);
    rdi = *((rsi + 8));
    r13 = rsp + 0x30;
    rcx = 0x20c49ba5e353f7cf;
    *((rsp + 0x30)) = rax;
    rax = rdi;
    rdi >>= 0x3f;
    rdx_rax = rax * rcx;
    rax = *((rsi + 0x10));
    rsi = *((rsi + 0x18));
    *((rsp + 0x40)) = rax;
    rax = rsi;
    rsi >>= 0x3f;
    rdx >>= 7;
    rdx -= rdi;
    *((rsp + 0x38)) = rdx;
    rdx_rax = rax * rcx;
    rcx = rdx;
    rdx = r13;
    rcx >>= 7;
    rcx -= rsi;
    *((rsp + 0x48)) = rcx;
    if (ebx < 0) {
        goto label_18;
    }
    do {
        esi = 0;
        edi = ebx;
        eax = futimesat ();
        r12d = eax;
        if (eax == 0) {
            goto label_19;
        }
        r12d = 0xffffffff;
        if (rbp != 0) {
            rax = *((rsp + 8));
            esi = 0;
            if (rax != 0) {
                rdx = *(rax);
                rax = *((rax + 0x10));
                rsi = rsp + 0x50;
                *((rsp + 0x50)) = rdx;
                *((rsp + 0x58)) = rax;
            }
            rdi = rbp;
            eax = utime ();
            r12d = eax;
        }
label_0:
        eax = r12d;
        return rax;
label_17:
        r13d = 0;
        rdx = r13;
    } while (ebx >= 0);
label_18:
    rsi = rbp;
    edi = 0xffffff9c;
    eax = futimesat ();
    r12d = eax;
    goto label_0;
label_10:
    *((rsp + 8)) = 0;
    r13d = 0;
    goto label_1;
label_13:
    rdx = rsp + 0x70;
    if (ebx < 0) {
        goto label_20;
    }
    esi = ebx;
    edi = 1;
    eax = fxstat ();
    al = (eax != 0) ? 1 : 0;
label_5:
    if (al != 0) {
        goto label_11;
    }
    rsi = *((rsp + 8));
    if (*((rsi + 8)) == 0x3ffffffe) {
        goto label_21;
    }
    r13d = 3;
    if (*((rsi + 0x18)) != 0x3ffffffe) {
        goto label_2;
    }
    rax = *((rsp + 0xd0));
    rdx = *((rsp + 0xc8));
    *((rsi + 0x18)) = rax;
    *((rsi + 0x10)) = rdx;
    goto label_2;
label_16:
    rsi = rbp;
    edi = 1;
    eax = xstat ();
    al = (eax != 0) ? 1 : 0;
    goto label_3;
label_14:
    rdx = rsi;
    ecx = 0;
    rsi = rbp;
    edi = 0xffffff9c;
    eax = utimensat ();
    r12d = eax;
    if (eax > 0) {
        goto label_4;
    }
    if (eax != 0) {
label_15:
        goto label_22;
    }
label_6:
    *(0x0061ba8c) = 1;
    goto label_0;
label_19:
    if (r13 == 0) {
        goto label_0;
    }
    bpl = (*((r13 + 8)) > 0x7a11f) ? 1 : 0;
    r14b = (*((r13 + 0x18)) > 0x7a11f) ? 1 : 0;
    if (bpl != 0) {
        goto label_23;
    }
    if (r14b == 0) {
        goto label_0;
    }
label_23:
    rdx = rsp + 0x70;
    esi = ebx;
    edi = 1;
    eax = fxstat ();
    if (eax != 0) {
        goto label_0;
    }
    rdx = *((rsp + 0xc8));
    rdx -= *((r13 + 0x10));
    rax = *((rsp + 0xb8));
    __asm ("movdqa xmm2, xmmword [r13]");
    rax -= *(r13);
    __asm ("movdqa xmm3, xmmword [r13 + 0x10]");
    dl = (rdx == 1) ? 1 : 0;
    *((rsp + 0x50)) = xmm2;
    *((rsp + 0x60)) = xmm3;
    r14d &= edx;
    if (rax != 1) {
        goto label_24;
    }
    if (bpl == 0) {
        goto label_24;
    }
    if (*((rsp + 0xc0)) != 0) {
        goto label_24;
    }
    *((rsp + 0x58)) = 0;
    if (r14b != 0) {
        if (*((rsp + 0xd0)) == 0) {
            goto label_25;
        }
    }
label_9:
    rdx = rsp + 0x50;
    esi = 0;
    edi = ebx;
    futimesat ();
label_8:
    r12d = 0;
    goto label_0;
label_20:
    rsi = rbp;
    edi = 1;
    eax = xstat ();
    al = (eax != 0) ? 1 : 0;
    goto label_5;
label_21:
    rax = *((rsp + 0xc0));
    rdx = *((rsp + 0xb8));
    r13d = 3;
    *(rsi) = rdx;
    *((rsi + 8)) = rax;
    goto label_2;
label_12:
    errno_location ();
    *(rax) = 9;
label_11:
    r12d = 0xffffffff;
    goto label_0;
label_22:
    rax = errno_location ();
    if (*(rax) != 0x26) {
        goto label_6;
    }
    goto label_7;
label_24:
    if (r14b == 0) {
        goto label_8;
    }
    if (*((rsp + 0xd0)) != 0) {
        goto label_8;
    }
label_25:
    *((rsp + 0x68)) = 0;
    goto label_9;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40f8a0 */
#include <stdint.h>
 
void fcn_0040f8a0 (int64_t arg1, int64_t arg2, int64_t arg7, int64_t arg8) {
    rdi = arg1;
    rsi = arg2;
    xmm0 = arg7;
    xmm1 = arg8;
    rdx = rsi;
    rsi = rdi;
    edi = 0xffffffff;
invalid_funccall(); //    return void (*0x40f460)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40f8b0 */
#include <stdint.h>
 
uint64_t fcn_0040f8b0 (int64_t arg1, int64_t arg2, int64_t arg7, int64_t arg8) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_48h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    rdi = arg1;
    rsi = arg2;
    xmm0 = arg7;
    xmm1 = arg8;
    r12 = rdi;
    if (rsi == 0) {
        goto label_7;
    }
    __asm ("movdqu xmm0, xmmword [rsi]");
    __asm ("movdqu xmm1, xmmword [rsi + 0x10]");
    *((rsp + 8)) = rdi;
    *((rsp + 0x10)) = xmm0;
    *((rsp + 0x20)) = xmm1;
    eax = fcn_0040f3a0 (rsp + 0x10);
    ebx = eax;
    if (eax < 0) {
        goto label_3;
    }
    eax = imp.__libc_start_main;
    if (eax < 0) {
        goto label_6;
    }
    if (ebx == 2) {
        goto label_8;
    }
    rdx = *((rsp + 8));
    do {
label_4:
        ecx = 0x100;
        rsi = r12;
        edi = 0xffffff9c;
        eax = utimensat ();
        if (eax <= 0) {
            goto label_9;
        }
        errno_location ();
        *(rax) = 0x26;
label_6:
        *(0x0061ba88) = 0xffffffff;
        if (ebx == 0) {
            goto label_10;
        }
        if (ebx != 3) {
            goto label_11;
        }
        if (*((rsp + 8)) != 0) {
label_2:
            ebp = 0;
            al = fcn_0040f2d0 (rsp + 0x30, rsp + 8);
            if (al != 0) {
                goto label_1;
            }
        }
label_0:
        eax = *((rsp + 0x48));
        eax &= 0xf000;
        if (eax == 0xa000) {
            goto label_12;
        }
        eax = fcn_0040f460 (0xffffffff, r12, *((rsp + 8)), rcx, r8);
label_1:
        eax = ebp;
        return rax;
label_7:
        ecx = imp.__libc_start_main;
        edx = 0;
        ebx = 0;
        *((rsp + 8)) = 0;
    } while (ecx >= 0);
    *(0x0061ba88) = 0xffffffff;
label_10:
    rdx = rsp + 0x30;
    rsi = r12;
    edi = 1;
    eax = lxstat ();
    if (eax == 0) {
        goto label_0;
    }
    do {
label_3:
        goto label_1;
        if (eax != 0) {
label_9:
            goto label_13;
        }
label_5:
        *(0x0061ba8c) = 1;
        eax = ebp;
        *(0x0061ba88) = 1;
        return rax;
label_11:
        rdx = rsp + 0x30;
        rsi = r12;
        edi = 1;
        eax = lxstat ();
    } while (eax != 0);
    if (*((rsp + 8)) != 0) {
        goto label_2;
    }
    goto label_0;
label_8:
    rdx = rsp + 0x30;
    rsi = r12;
    edi = 1;
    eax = lxstat ();
    if (eax != 0) {
        goto label_3;
    }
    rdx = *((rsp + 8));
    if (*((rdx + 8)) == 0x3ffffffe) {
        goto label_14;
    }
    ebx = 3;
    if (*((rdx + 0x18)) != 0x3ffffffe) {
        goto label_4;
    }
    rax = *((rsp + 0x90));
    rcx = *((rsp + 0x88));
    *((rdx + 0x18)) = rax;
    *((rdx + 0x10)) = rcx;
    goto label_4;
label_14:
    rax = *((rsp + 0x80));
    rcx = *((rsp + 0x78));
    ebx = 3;
    *(rdx) = rcx;
    *((rdx + 8)) = rax;
    goto label_4;
label_13:
    rax = errno_location ();
    if (*(rax) != 0x26) {
        goto label_5;
    }
    goto label_6;
label_12:
    errno_location ();
    *(rax) = 0x26;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40fb00 */
#include <stdint.h>
 
void fcn_0040fb00 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x416ad2);
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
        /* switch table (10 cases) at 0x416db8 */
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
invalid_funccall(); //    void (*0x4029f0)() ();
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
invalid_funccall(); //    void (*0x4029f0)() ();
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
invalid_funccall(); //    void (*0x4029f0)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x40ff60 */
#include <stdint.h>
 
uint64_t fcn_0040ff60 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_0040fb00 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4100a0 */
#include <stdint.h>
 
uint32_t fcn_004100a0 (void) {
    if (*(0x0061ba91) != 0) {
        eax = *(0x0061ba90);
        return eax;
    }
    eax = geteuid ();
    *(0x0061ba91) = 1;
    al = (eax == 0) ? 1 : 0;
    *(0x0061ba90) = al;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4100e0 */
#include <stdint.h>
 
uint64_t fcn_004100e0 (void * arg1) {
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
    return fcn_00410330 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x410140 */
#include <stdint.h>
 
uint64_t fcn_00410140 (int64_t arg1, int64_t arg2) {
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
    return fcn_00410330 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4102e0 */
#include <stdint.h>
 
uint64_t fcn_004102e0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_004100e0 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x410310 */
#include <stdint.h>
 
void fcn_00410310 (uint32_t arg1) {
    rdi = arg1;
    rbx = rdi;
    strlen (rdi);
    rdi = rbx;
    rsi = rax + 1;
invalid_funccall(); //    return void (*0x4102e0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x410330 */
#include <stdint.h>
 
uint64_t fcn_00410330 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x0061b3d0), 0, 0x415a9d);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x410370 */
#include <stdint.h>
 
uint64_t fcn_00410370 (void) {
    int64_t var_8h;
    edx = 0xa;
    ebx = 0;
    rcx = stdin;
    rsi = rsp + 8;
    rdi = rsp;
    *(rsp) = 0;
    *((rsp + 8)) = 0;
    rax = getdelim ();
    if (rax <= 0) {
        goto label_0;
    }
    rdi = *(rsp);
    rax = rdi + rax - 1;
    while (1) {
        eax = rpmatch ();
        bl = (eax > 0) ? 1 : 0;
label_0:
        free (*(rsp));
        eax = ebx;
        return rax;
        *(rax) = 0;
        rdi = *(rsp);
    }
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4103e0 */
#include <stdint.h>
 
uint64_t fcn_004103e0 (int64_t arg_70h, int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
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
            *(0x0061ba94) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
        eax = fcn_004103e0 (rdi, 0, rdx, rcx, r8);
    } while (1);
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x0061ba94) != 0xffffffff) {
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
    eax = fcn_004103e0 (ebp, 0, r12d, rcx, r8);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x0061ba94) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x410520 */
#include <stdint.h>
 
uint32_t fcn_00410520 (int64_t arg1) {
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
invalid_funccall(); //    void (*0x402800)() ();
label_1:
    fcn_00410590 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x410560 */
#include <stdint.h>
 
int64_t fcn_00410560 (uint32_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x410590 */
#include <stdint.h>
 
int64_t fcn_00410590 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x402920)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4105f0 */
#include <stdint.h>
 
uint64_t fcn_004105f0 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4106d0 */
#include <stdint.h>
 
int64_t fcn_004106d0 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x410cf0 */
#include <stdint.h>
 
uint64_t fcn_00410cf0 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
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
        edi = 0x416f59;
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
            fcn_004105f0 (r12, rbx);
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
        fcn_004105f0 (r12, rbx);
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
    eax = fcn_004106d0 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_004106d0 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4112c0 */
#include <stdint.h>
 
int32_t fcn_004112c0 (int64_t arg_10h) {
    eax = *(0x0061b43c);
    *(0x0061baa0) = eax;
    eax = *(0x0061b438);
    *(0x0061baa4) = eax;
    eax = *((rsp + 0x10));
    fcn_00410cf0 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0061b43c) = edx;
    rdx = imp.__libc_start_main;
    *(0x0061bae0) = rdx;
    edx = imp.__libc_start_main;
    *(0x0061b434) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x411340 */
#include <stdint.h>
 
void fcn_00411340 (void) {
    r9d = 0;
    fcn_004112c0 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4113c0 */
#include <stdint.h>
 
uint64_t fcn_004113c0 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_00411540 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x411440 */
#include <stdint.h>
 
int32_t fcn_00411440 (int64_t arg3, int64_t arg4) {
    rdx = arg3;
    rcx = arg4;
    *(rcx) = edx;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x411450 */
#include <stdint.h>
 
int32_t fcn_00411450 (int64_t arg2, int64_t arg3) {
    rsi = arg2;
    rdx = arg3;
    eax = esi;
    esi = edx;
    if (eax != 0xffffffff) {
        edi = eax;
invalid_funccall(); //        void (*0x4028b0)() ();
    }
    return chmod ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x411470 */
#include <stdint.h>
 
int64_t fcn_00411470 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = rsi;
    edx = *(rdi);
    eax = fcn_00411450 (rax, edx);
    al = (eax != 0) ? 1 : 0;
    eax = (int32_t) al;
    eax = -eax;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4114a0 */
#include <stdint.h>
 
uint64_t fcn_004114a0 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_00412760 (rbp);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x411500 */
#include <stdint.h>
 
uint64_t fcn_00411500 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    rsi = rdi;
    rbx = rdi;
    edi = 0;
    eax = clock_gettime ();
    if (eax != 0) {
        esi = 0;
        rdi = rsp;
        gettimeofday ();
        rax = *(rsp);
        *(rbx) = rax;
        rax = *((rsp + 8)) * 0x3e8;
        *((rbx + 8)) = rax;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x411540 */
#include <stdint.h>
 
uint64_t fcn_00411540 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x416f7c;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4115a0 */
#include <stdint.h>
 
 
int64_t fcn_004115a0 (int64_t arg1) {
    rdi = arg1;
    rcx = *(rdi);
    if (cl == 0) {
        goto label_0;
    }
    eax = 0;
    do {
        rax = rotate_left64 (rax, 9);
        rdi++;
        rax += rcx;
        rcx = *(rdi);
    } while (cl != 0);
    edx = 0;
    rax = rdx_rax / rsi;
    rdx = rdx_rax % rsi;
    rax = rdx;
    return rax;
label_0:
    edx = 0;
    rax = rdx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4115e0 */
#include <stdint.h>
 
uint64_t fcn_004115e0 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x416f77;
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
        r15d = 0x416f77;
label_2:
        *(0x0061bad8) = r15;
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
        r15d = 0x416f77;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x412b70;
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
    fcn_00412760 (rbx);
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
        r15d = 0x416f77;
        rbx = rax;
        free (r15);
        fcn_00412760 (r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x411b80 */
#include <stdint.h>
 
uint64_t fcn_00411b80 (void) {
    rax = fcn_00411da0 (rdi, rsi);
    rbx = rax;
    eax = 0;
    if (rbx != 0) {
        fcn_004100e0 (0x18);
        *(rax) = rbx;
        *((rax + 0x10)) = 0;
        *((rax + 8)) = 0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x411bc0 */
#include <stdint.h>
 
int64_t fcn_00411bc0 (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    r15 = rdi;
    r14 = rsi + 1;
    r13 = rsi;
    r12 = *(rdi);
    rbp = *((rdi + 8));
    rbx = *((rdi + 0x10));
    while (rbx >= r13) {
        if (rbx == r13) {
            goto label_1;
        }
label_0:
        rax = rbx;
        edx = 0;
        rax -= r13;
        rax = rdx_rax / r14;
        rdx = rdx_rax % r14;
        rsi = rdx;
        rcx = rax;
        rbx -= rdx;
        rax = rbp;
        edx = 0;
        rax = rdx_rax / r14;
        rdx = rdx_rax % r14;
        if (rbp <= rbx) {
            goto label_2;
        }
        rbx = rsi - 1;
    }
    rax = rbx;
    edx = 0;
    do {
        rax <<= 8;
        rdx++;
        rax += 0xff;
    } while (r13 > rax);
    fcn_004120b0 (r12, rsp + 8, rdx);
    rax = rsp + 8;
    do {
        edx = *(rax);
        rbx <<= 8;
        rbp <<= 8;
        rax++;
        rbx += 0xff;
        rbp += rdx;
    } while (r13 > rbx);
    if (rbx != r13) {
        goto label_0;
    }
label_1:
    *((r15 + 0x10)) = 0;
    *((r15 + 8)) = 0;
    do {
        rax = rbp;
        return rax;
label_2:
        *((r15 + 8)) = rax;
        *((r15 + 0x10)) = rcx;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x411ce0 */
#include <stdint.h>
 
uint64_t fcn_00411ce0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fcn_00412210 (*(rdi));
    r12d = eax;
    rax = errno_location ();
    rdi = rbx;
    esi = 0x18;
    rdx = 0xffffffffffffffff;
    r13d = *(rax);
    explicit_bzero_chk ();
    free (rbx);
    *(rbp) = r13d;
    eax = r12d;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x411da0 */
#include <stdint.h>
 
uint64_t fcn_00411da0 (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    uid_t var_10h;
    rdi = arg1;
    rsi = arg2;
    if (rsi == 0) {
        goto label_3;
    }
    r12 = rdi;
    if (rdi == 0) {
        goto label_4;
    }
    rax = fcn_004127e0 (rdi, 0x41703c);
    r13 = rax;
    if (rax == 0) {
        goto label_5;
    }
    fcn_004100e0 (0x1038);
    ecx = 0x1000;
    rdi = r13;
    *(rax) = r13;
    if (rbp <= 0x1000) {
        rcx = rbp;
    }
    *((rax + 8)) = 0x411d40;
    rbx = rax;
    *((rax + 0x10)) = r12;
    setvbuf (rdi, rax + 0x18, 0, rcx);
    do {
label_0:
        rax = rbx;
        return rax;
label_4:
        fcn_004100e0 (0x1038);
        *(rax) = 0;
        rbx = rax;
        r13 = rax + 0x20;
        *((rax + 8)) = 0x411d40;
        *((rax + 0x10)) = 0;
        *((rax + 0x18)) = 0;
        eax = 0;
        eax = open ("/dev/urandom", 0, rdx);
        r15d = eax;
        if (eax < 0) {
            goto label_6;
        }
        rdx = rbp;
        edi = eax;
        rsi = r13;
        r14d = 0x800;
        ecx = 0x1018;
        if (rbp > 0x800) {
            rdx = r14;
        }
        rax = read_chk ();
        close (r15d);
        if (rbp <= 0x7ff) {
            goto label_7;
        }
label_1:
        fcn_00412510 (r13);
    } while (1);
label_3:
    rax = fcn_004100e0 (0x1038);
    rbx = rax;
    *(rax) = 0;
    *((rax + 8)) = 0x411d40;
    *((rax + 0x10)) = 0;
    goto label_0;
label_6:
    r12 = rsp + 0x10;
    esi = 0;
    r14d = 0x14;
    rdi = r12;
    gettimeofday ();
    __asm ("movdqa xmm0, xmmword [rsp + 0x10]");
    __asm ("movups xmmword [rbx + 0x20], xmm0");
    eax = getpid ();
    *((rsp + 0x10)) = eax;
    *((rbx + 0x30)) = eax;
label_2:
    eax = 4;
    rbp -= r14;
    if (rbp > 4) {
    }
    eax = getppid ();
    rsi = r13 + r14;
    *((rsp + 0x10)) = eax;
    edi = ebp;
    if (ebp == 0) {
        goto label_8;
    }
    eax = 0;
    do {
        edx = eax;
        eax++;
        ecx = *((r12 + rdx));
        *((rsi + rdx)) = cl;
    } while (eax < edi);
label_8:
    rbp += r14;
    if (rbp > 0x7ff) {
        goto label_1;
    }
    r14d = 0x800;
    eax = 4;
    r14 -= rbp;
    if (r14 > 4) {
        r14 = rax;
    }
    eax = getuid ();
    rsi = r13 + rbp;
    *((rsp + 0x10)) = eax;
    edi = r14d;
    if (r14d == 0) {
        goto label_9;
    }
    eax = 0;
    do {
        edx = eax;
        eax++;
        ecx = *((r12 + rdx));
        *((rsi + rdx)) = cl;
    } while (eax < edi);
label_9:
    rbp += r14;
    if (rbp > 0x7ff) {
        goto label_1;
    }
    eax = getgid ();
    edx = 4;
    rsi = r13 + rbp;
    *((rsp + 0x10)) = eax;
    eax = 0x800;
    rax -= rbp;
    if (rax > 4) {
        rax = rdx;
    }
    edi = eax;
    if (eax == 0) {
        goto label_1;
    }
    eax = 0;
    do {
        edx = eax;
        eax++;
        ecx = *((r12 + rdx));
        *((rsi + rdx)) = cl;
    } while (eax < edi);
    goto label_1;
label_5:
    ebx = 0;
    goto label_0;
label_7:
    rcx = r14;
    eax = 0x10;
    __asm ("cmovs rbp, r12");
    r12 = rsp + 0x10;
    rdi = r12;
    rcx -= rbp;
    r15 = r13 + rbp;
    if (rcx > 0x10) {
        rcx = rax;
    }
    esi = 0;
    rbp += rcx;
    *((rsp + 8)) = rcx;
    gettimeofday ();
    rcx = *((rsp + 8));
    rdi = r15;
    rsi = r12;
    *(rdi) = *(rsi);
    rcx--;
    rsi++;
    rdi++;
    if (rbp > 0x7ff) {
        goto label_1;
    }
    r14 -= rbp;
    eax = 4;
    if (r14 > 4) {
        r14 = rax;
    }
    eax = getpid ();
    rsi = r12;
    *((rsp + 0x10)) = eax;
    ecx = r14d;
    rax = r13 + rbp;
    r14 += rbp;
    rdi = rax;
    *(rdi) = *(rsi);
    rcx--;
    rsi++;
    rdi++;
    if (r14 <= 0x7ff) {
        goto label_2;
    }
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4120b0 */
#include <stdint.h>
 
uint64_t fcn_004120b0 (int64_t arg1, int64_t arg2, uint32_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rdi;
    rbx = rdx;
    r13 = *(rdi);
    if (r13 == 0) {
        goto label_1;
    }
    rax = errno_location ();
    r15d = 0;
    r14 = rax;
    while (rbx != 0) {
        rax = *(r12);
        rdi = *((r12 + 0x10));
        if ((*(rax) & 0x20) == 0) {
            edx = r15d;
        }
        *(r14) = edx;
invalid_funccall(); //        uint64_t (*r12 + 8)() ();
        r13 = *(r12);
        rdx = rbx;
        rdi = rbp;
        rcx = r13;
        esi = 1;
        rax = fread_unlocked ();
        edx = *(r14);
        rbp += rax;
        rbx -= rax;
    }
label_0:
    return rax;
label_1:
    r15 = *((rdi + 0x18));
    r13 = rdi + 0x838;
    r14 = rdi + 0x20;
    if (rdx <= r15) {
        goto label_2;
    }
    do {
        rbp += r15;
        rsi -= r15;
        rbx -= r15;
        rsi += r13;
        memcpy (rbp, 0x800, r15);
        if ((bpl & 7) == 0) {
            goto label_3;
        }
        r15d = 0x800;
        fcn_00412260 (r14, r13);
    } while (rbx > 0x800);
    goto label_4;
    do {
        rbp += 0x800;
        fcn_00412260 (r14, rbp);
        rbx -= 0x800;
        if (rbx == 0) {
            goto label_5;
        }
INVALID_JUMP;
    } while (rbx > 0x7ff);
    fcn_00412260 (r14, r13);
label_4:
    r15d = 0x800;
    do {
        memcpy (rbp, r13, rbx);
        rcx = r15;
        rcx -= rbx;
        *((r12 + 0x18)) = rcx;
        goto label_0;
label_5:
        *((r12 + 0x18)) = 0;
        return rax;
label_2:
        r13 -= r15;
        r13 += 0x800;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x412210 */
#include <stdint.h>
 
uint32_t fcn_00412210 (int64_t arg1) {
    rdi = arg1;
    rdx = 0xffffffffffffffff;
    esi = 0x1038;
    rbx = rdi;
    rbp = *(rdi);
    explicit_bzero_chk ();
    eax = free (rbx);
    if (rbp != 0) {
        rdi = rbp;
invalid_funccall(); //        void (*0x412760)() ();
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x412260 */
#include <stdint.h>
 
int64_t fcn_00412260 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 0x810));
    r11 = *((rdi + 0x808));
    r10 = rdi + 0x400;
    rdx = *((rdi + 0x800));
    r9 = rsi;
    r8 = rax + 1;
    rax = rdi;
    *((rdi + 0x810)) = r8;
    r11 += r8;
    do {
        rcx = rdx;
        rcx <<= 0x15;
        rdx ^= rcx;
        rcx = *(rax);
        rdx = ~rdx;
        rdx += *((rax + 0x400));
        r8 = rcx;
        r8d &= 0x7f8;
        rbx = *((rdi + r8));
        rbx += rdx;
        r8 = rbx;
        r8 += r11;
        r11 = rdx;
        *(rax) = r8;
        r8 >>= 8;
        r11 >>= 5;
        r8d &= 0x7f8;
        rdx ^= r11;
        rbx = *((rdi + r8));
        rbx += rcx;
        *(r9) = rbx;
        r8 = *((rax + 8));
        rdx += *((rax + 0x408));
        r11 = rdx;
        rdx = r8;
        edx &= 0x7f8;
        rcx = *((rdi + rdx));
        rdx = r11;
        rdx <<= 0xc;
        rcx += r11;
        rdx ^= r11;
        rcx += rbx;
        *((rax + 8)) = rcx;
        rcx >>= 8;
        ecx &= 0x7f8;
        rbx = *((rdi + rcx));
        rbx += r8;
        *((r9 + 8)) = rbx;
        rcx = *((rax + 0x10));
        rdx += *((rax + 0x410));
        r8 = rcx;
        r8d &= 0x7f8;
        r11 = *((rdi + r8));
        r11 += rdx;
        r8 = r11;
        r8 += rbx;
        *((rax + 0x10)) = r8;
        r8 >>= 8;
        r8d &= 0x7f8;
        rcx += *((rdi + r8));
        *((r9 + 0x10)) = rcx;
        r11 = rcx;
        r8 = *((rax + 0x18));
        rcx = rdx;
        rcx >>= 0x21;
        rdx ^= rcx;
        rcx = r8;
        rdx += *((rax + 0x418));
        ecx &= 0x7f8;
        rbx = *((rdi + rcx));
        rbx += rdx;
        rcx = rbx;
        rcx += r11;
        rax += 0x20;
        r9 += 0x20;
        *((rax - 8)) = rcx;
        rcx >>= 8;
        ecx &= 0x7f8;
        r11 = *((rdi + rcx));
        r11 += r8;
        *((r9 - 8)) = r11;
    } while (rax != r10);
    rsi += 0x400;
    r9 = rdi + 0x800;
    do {
        rcx = rdx;
        rcx <<= 0x15;
        rdx ^= rcx;
        rcx = *(rax);
        rdx = ~rdx;
        rdx += *((rax - 0x400));
        r8 = rcx;
        r10 = rdx;
        r8d &= 0x7f8;
        r10 >>= 5;
        rbx = *((rdi + r8));
        rbx += rdx;
        rdx ^= r10;
        r8 = rbx;
        r8 += r11;
        *(rax) = r8;
        r8 >>= 8;
        r8d &= 0x7f8;
        rcx += *((rdi + r8));
        *(rsi) = rcx;
        r8 = *((rax + 8));
        r11 = rcx;
        rdx += *((rax - 0x3f8));
        r10 = rdx;
        rdx = r8;
        edx &= 0x7f8;
        rcx = *((rdi + rdx));
        rdx = r10;
        rdx <<= 0xc;
        rcx += r10;
        rdx ^= r10;
        rcx += r11;
        *((rax + 8)) = rcx;
        rcx >>= 8;
        ecx &= 0x7f8;
        r11 = *((rdi + rcx));
        r11 += r8;
        *((rsi + 8)) = r11;
        rcx = *((rax + 0x10));
        rdx += *((rax - 0x3f0));
        r8 = rcx;
        r8d &= 0x7f8;
        rbx = *((rdi + r8));
        rbx += rdx;
        r8 = rbx;
        r8 += r11;
        *((rax + 0x10)) = r8;
        r8 >>= 8;
        r8d &= 0x7f8;
        rcx += *((rdi + r8));
        *((rsi + 0x10)) = rcx;
        r10 = rcx;
        r8 = *((rax + 0x18));
        rcx = rdx;
        rcx >>= 0x21;
        rdx ^= rcx;
        rcx = r8;
        rdx += *((rax - 0x3e8));
        ecx &= 0x7f8;
        rbx = *((rdi + rcx));
        rbx += rdx;
        rcx = rbx;
        rcx += r10;
        rax += 0x20;
        rsi += 0x20;
        *((rax - 8)) = rcx;
        rcx >>= 8;
        ecx &= 0x7f8;
        r11 = *((rdi + rcx));
        r11 += r8;
        *((rsi - 8)) = r11;
    } while (rax != r9);
    *((rdi + 0x800)) = rdx;
    *((rdi + 0x808)) = r11;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x412510 */
#include <stdint.h>
 
int64_t fcn_00412510 (int64_t arg1) {
    rdi = arg1;
    rdx = rdi;
    rax = rdi;
    rcx = 0x98f5704f6c44c0ab;
    rsi = 0x82f053db8355e0ce;
    r11 = 0xb29b2e824a595524;
    r12 = 0xae985bf2cbfc89ed;
    r10 = 0x8c0ea5053d4712a0;
    r9 = 0xb9f8b322c73ac862;
    rbp = rdi + 0x800;
    r8 = 0x647c4677a2884b7c;
    rbx = 0x48fe4a0fa5a09315;
    do {
        r13 = *(rax);
        rsi += *((rax + 0x20));
        rcx += *((rax + 0x38));
        rbx += *((rax + 0x28));
        r13 -= rsi;
        r12 += *((rax + 0x30));
        r8 += r13;
        r13 = rcx;
        r13 >>= 9;
        rcx += r8;
        rbx ^= r13;
        r13 = *((rax + 8));
        r13 -= rbx;
        r9 += r13;
        r13 = r8;
        r13 <<= 9;
        r8 += r9;
        r12 ^= r13;
        r13 = *((rax + 0x10));
        r13 -= r12;
        r10 += r13;
        r13 = r9;
        r13 >>= 0x17;
        r9 += r10;
        rcx ^= r13;
        r13 = *((rax + 0x18));
        r13 -= rcx;
        r11 += r13;
        r13 = r10;
        r13 <<= 0xf;
        r10 += r11;
        r8 ^= r13;
        r13 = r11;
        rsi -= r8;
        r13 >>= 0xe;
        *(rax) = r8;
        r9 ^= r13;
        r13 = rsi;
        r11 += rsi;
        rbx -= r9;
        r13 <<= 0x14;
        *((rax + 8)) = r9;
        r10 ^= r13;
        r13 = rsi + rbx;
        rsi = rbx;
        r12 -= r10;
        rsi >>= 0x11;
        *((rax + 0x10)) = r10;
        rax += 0x40;
        r11 ^= rsi;
        rsi = r12;
        rbx += r12;
        rcx -= r11;
        rsi <<= 0xe;
        *((rax - 0x28)) = r11;
        rsi ^= r13;
        r12 += rcx;
        *((rax - 0x18)) = rbx;
        *((rax - 0x20)) = rsi;
        *((rax - 0x10)) = r12;
        *((rax - 8)) = rcx;
    } while (rbp != rax);
    do {
        rcx += *((rdx + 0x38));
        rsi += *((rdx + 0x20));
        r8 += *(rdx);
        rax = rcx;
        rbx += *((rdx + 0x28));
        r8 -= rsi;
        rax >>= 9;
        r9 += *((rdx + 8));
        r12 += *((rdx + 0x30));
        rbx ^= rax;
        rax = r8;
        r10 += *((rdx + 0x10));
        rcx += r8;
        r9 -= rbx;
        rax <<= 9;
        r11 += *((rdx + 0x18));
        r12 ^= rax;
        rax = r9;
        r8 += r9;
        r10 -= r12;
        rax >>= 0x17;
        rcx ^= rax;
        rax = r10;
        r9 += r10;
        r11 -= rcx;
        rax <<= 0xf;
        r8 ^= rax;
        rax = r11;
        r10 += r11;
        rsi -= r8;
        rax >>= 0xe;
        *(rdx) = r8;
        r9 ^= rax;
        rax = rsi;
        r11 += rsi;
        rbx -= r9;
        rax <<= 0x14;
        *((rdx + 8)) = r9;
        r10 ^= rax;
        rax = rsi + rbx;
        rsi = rbx;
        r12 -= r10;
        rsi >>= 0x11;
        *((rdx + 0x10)) = r10;
        rdx += 0x40;
        r11 ^= rsi;
        rsi = r12;
        rbx += r12;
        rcx -= r11;
        rsi <<= 0xe;
        *((rdx - 0x28)) = r11;
        rsi ^= rax;
        r12 += rcx;
        *((rdx - 0x18)) = rbx;
        *((rdx - 0x20)) = rsi;
        *((rdx - 0x10)) = r12;
        *((rdx - 8)) = rcx;
    } while (rbp != rdx);
    *((rdi + 0x810)) = 0;
    *((rdi + 0x808)) = 0;
    *((rdi + 0x800)) = 0;
    r12 = rbx;
    r13 = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x412750 */
#include <stdint.h>
 
int32_t fcn_00412750 (int64_t arg1, int64_t arg4) {
    rdi = arg1;
    rcx = arg4;
    edx = 3;
    esi = 0;
    eax = 0;
invalid_funccall(); //    return void (*0x4103e0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x412760 */
#include <stdint.h>
 
uint64_t fcn_00412760 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_00410520 (rbx);
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
invalid_funccall(); //    void (*0x4024e0)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4127e0 */
#include <stdint.h>
 
uint64_t fcn_004127e0 (int64_t arg2, const char * filename) {
    rsi = arg2;
    rdi = filename;
    rax = fopen (rdi, rsi);
    rbx = rax;
    if (rax == 0) {
        goto label_0;
    }
    eax = fileno (rax);
    while (rax != 0) {
label_0:
        rax = rbx;
        return rax;
        eax = fcn_00412750 (eax, rsi);
        r12d = eax;
        if (eax < 0) {
            goto label_1;
        }
        eax = fcn_00412760 (rbx);
        if (eax != 0) {
            goto label_2;
        }
        rsi = rbp;
        edi = r12d;
        rax = fdopen ();
        rbx = rax;
    }
label_2:
    rax = errno_location ();
    ebp = *(rax);
    rbx = rax;
    close (r12d);
    *(rbx) = ebp;
    ebx = 0;
    goto label_0;
label_1:
    rax = errno_location ();
    ebx = 0;
    r12d = *(rax);
    fcn_00412760 (rbx);
    *(rbp) = r12d;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x4128f0 */
#include <stdint.h>
 
int64_t fcn_004128f0 (void) {
    rax = 0x61b3a8;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cp.elf @ 0x412908 */
#include <stdint.h>
 
void fcn_00412908 (int64_t arg3) {
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
