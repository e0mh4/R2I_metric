#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4020a0 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int64_t var_7h;
    uint32_t var_8h;
    void * var_10h;
    int64_t var_14h;
    void * var_18h;
    uint32_t var_20h;
    void * s1;
    void * ptr;
    int64_t var_38h;
    void * var_40h;
    int64_t var_48h;
    uint32_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint32_t var_68h;
    uint32_t var_6ch;
    int64_t var_6dh;
    int64_t var_6eh;
    rdi = argc;
    rsi = argv;
    xmm0 = 0;
    r14 = 0x7fffffffffffffff;
    r12d = 0;
    rbx = rsi;
    *((rsp + 0x50)) = xmm0;
    *((rsp + 0x60)) = xmm0;
    fcn_004051c0 (*(rsi));
    setlocale (6, 0x40cccf);
    bindtextdomain (0x40a3d8, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x40a3d8, rsi);
    edi = 0x4042c0;
    fcn_0040a210 ();
    *((rsp + 0x58)) = 3;
    *((rsp + 0x60)) = 0xffffffffffffffff;
    do {
label_0:
        r8d = 0;
        ecx = 0x40b420;
        edx = "fn:s:uvxz";
        rsi = rbx;
        edi = ebp;
        eax = fcn_004099c0 ();
        if (eax == 0xffffffff) {
            goto label_12;
        }
        if (eax == 0x73) {
            goto label_13;
        }
        if (eax <= 0x73) {
            goto label_14;
        }
        if (eax == 0x78) {
            goto label_15;
        }
        if (eax > 0x78) {
            goto label_16;
        }
        if (eax != 0x75) {
            goto label_17;
        }
        rsi = imp.__libc_start_main;
        if (rsi == 0) {
            goto label_18;
        }
        fcn_004041e0 ("--remove", rsi, 0x40b5a0, 0x40b580, 4, *(0x0060f2d8));
        eax = *((rax*4 + 0x40b580));
        *((rsp + 0x68)) = eax;
    } while (1);
label_14:
    if (eax == 0xffffff7e) {
        goto label_19;
    }
    if (eax > 0xffffff7e) {
        if (eax == 0x66) {
            *((rsp + 0x50)) = 1;
            goto label_0;
label_17:
            if (eax != 0x76) {
                goto label_20;
            }
            *((rsp + 0x6c)) = 1;
            goto label_0;
label_16:
            if (eax != 0x7a) {
                goto label_21;
            }
            *((rsp + 0x6e)) = 1;
            goto label_0;
        }
        if (eax != 0x6e) {
            goto label_20;
        }
        edx = 5;
        rax = dcgettext (0, "invalid number of passes");
        r9d = 0;
        rdx = 0x3fffffffffffffff;
        rax = fcn_004085a0 (*(0x0060f540), 0, rdx, 0x40cccf, rax);
        *((rsp + 0x58)) = rax;
        goto label_0;
    }
    if (eax != 0xffffff7d) {
        goto label_20;
    }
    r9d = 0;
    r8d = "Colin Plumb";
    eax = 0;
    rcx = *(str_8_29);
    fcn_00408100 (*(obj.stdout), "shred", "GNU coreutils");
    eax = exit (0);
label_21:
    if (eax != 0x80) {
        goto label_20;
    }
    r13 = imp.__libc_start_main;
    if (r12 != 0) {
        eax = strcmp (r12, r13);
        if (eax != 0) {
            goto label_22;
        }
    }
    r12 = r13;
    goto label_0;
label_13:
    edx = 5;
    rax = dcgettext (0, "invalid file size");
    rax = fcn_004084d0 (*(0x0060f540), 0, 0, r14, "cbBkKMGTPEZY0", rax);
    *((rsp + 0x70)) = rax;
    goto label_0;
label_15:
    *((rsp + 0x6d)) = 1;
    goto label_0;
label_18:
    *((rsp + 0x68)) = 3;
    goto label_0;
label_12:
    r14 = *(0x0060f35c);
    r13d = eax;
    ebp -= r14d;
    if (ebp == 0) {
        goto label_23;
    }
    rsi |= 0xffffffffffffffff;
    rdi = r12;
    rax = fcn_00406e30 ();
    *(0x0060f398) = rax;
    if (rax == 0) {
        goto label_24;
    }
    edi = 0x402a00;
    fcn_0040a210 ();
    if (ebp <= 0) {
        goto label_25;
    }
    eax = rbp - 1;
    r15 = rbx + r14*8;
    *((rsp + 7)) = 1;
    rax += r14;
    *((rsp + 0x14)) = r13d;
    rax = rbx + rax*8 + 8;
    *((rsp + 8)) = rax;
    while (al == 0) {
        eax = fcn_00408a90 (1, 3, rdx, rcx, r8);
        if (eax < 0) {
            goto label_26;
        }
        if ((ah & 4) != 0) {
            goto label_27;
        }
        al = fcn_004033d0 (1, rbp, rbx, rsp + 0x50);
label_2:
label_1:
        r15 += 8;
        free (rbp);
        if (*((rsp + 8)) == r15) {
            goto label_28;
        }
        rdx = *(r15);
        rax = fcn_00406c60 (0, 3);
        rax = fcn_00408470 (rax);
        r12 = *(r15);
        ecx = 2;
        edi = 0x40ccb2;
        rbx = imp.__libc_start_main;
        rsi = r12;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (*((rsp + 8)) > r15) ? 1 : 0;
    }
    eax = 0;
    eax = fcn_004044d0 (r12, 0x101, rdx, rcx);
    r14d = eax;
    if (eax < 0) {
        goto label_29;
    }
label_5:
    eax = fcn_004033d0 (r14d, rbp, rbx, rsp + 0x50);
    r13d = eax;
    eax = close (r14d);
    if (eax != 0) {
        goto label_30;
    }
    if (r13b == 0) {
        goto label_3;
    }
    if (*((rsp + 0x68)) != 0) {
        goto label_31;
    }
    do {
label_3:
        goto label_1;
label_29:
        rax = errno_location ();
        r13 = rax;
        if (*(rax) == 0xd) {
            goto label_32;
        }
label_4:
        edx = 5;
        rax = dcgettext (0, "%s: failed to open for writing");
        rcx = rbp;
        eax = 0;
        r13d = 0;
        error (0, *(r13), rax);
    } while (1);
label_27:
    edx = 5;
    rax = dcgettext (0, "%s: cannot shred append-only file descriptor");
    rcx = rbp;
    eax = 0;
    eax = error (0, 0, rax);
    eax = 0;
    goto label_2;
label_25:
    *((rsp + 7)) = 1;
label_28:
    eax = *((rsp + 7));
    eax ^= 1;
    eax = (int32_t) al;
    return;
label_30:
    edx = 5;
    r13d = 0;
    rax = dcgettext (0, "%s: failed to close");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (0, *(rax), rbx);
    goto label_3;
label_26:
    edx = 5;
    rax = dcgettext (0, "%s: fcntl failed");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    eax = error (0, *(rax), rbx);
    eax = 0;
    goto label_2;
label_32:
    if (*((rsp + 0x50)) == 0) {
        goto label_4;
    }
    eax = chmod (r12, 0x80);
    if (eax != 0) {
        goto label_4;
    }
    eax = fcn_004044d0 (r12, 0x101, rdx, rcx);
    r14d = eax;
    if (eax >= 0) {
        goto label_5;
    }
    goto label_4;
label_31:
    rax = fcn_00408470 (r12);
    r14 = rax;
    rdi = rax;
    *((rsp + 0x30)) = rax;
    rax = fcn_00404440 (rdi);
    rdi = r14;
    rbx = rax;
    rax = fcn_00404360 ();
    rdx = rax;
    *((rsp + 0x40)) = rax;
    rax = fcn_00406c60 (0, 3);
    rax = fcn_00408470 (rax);
    *((rsp + 0x18)) = rax;
    eax = *((rsp + 0x14));
    *((rsp + 0x10)) = eax;
    if (*((rsp + 0x68)) == 3) {
        goto label_33;
    }
label_8:
    if (*((rsp + 0x6c)) != 0) {
        goto label_34;
    }
label_7:
    if (*((rsp + 0x68)) == 1) {
        goto label_35;
    }
    fcn_004044a0 (rbx);
    rdx = *((rsp + 0x30));
    *((rsp + 0x20)) = r13b;
    r14 = rax - 1;
    rax = rbx;
    *((rsp + 0x38)) = rbp;
    rax -= rdx;
    *((rsp + 0x48)) = r15;
    r15 = rdx;
    rax += r12;
    *((rsp + 0x28)) = rax;
label_9:
    rdx = r14 + 1;
    if (r14 == -1) {
        goto label_36;
    }
    memset (rbx, 0x30, rdx);
    *((rbx + r14 + 1)) = 0;
label_6:
    eax = fcn_00407a00 (edx, r12, 0xffffff9c, r15, 1);
    if (eax == 0) {
        goto label_37;
    }
    rax = errno_location ();
    if (*(rax) != 0x11) {
        goto label_38;
    }
    rbp = rbx + r14;
    while (al == 0) {
        *(rbp) = 0x30;
        rax = rbp - 1;
        if (rbx == rbp) {
            goto label_38;
        }
        esi = *(rbp);
        rax = strchr ("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_.", rsi);
        if (rax == 0) {
            goto label_39;
        }
        eax = *((rax + 1));
    }
    *(rbp) = al;
    goto label_6;
label_36:
    r15 = *((rsp + 0x48));
    rbp = *((rsp + 0x38));
label_35:
    eax = unlink (r12);
    if (eax != 0) {
        goto label_40;
    }
    if (*((rsp + 0x6c)) != 0) {
        goto label_41;
    }
    do {
label_11:
        ebx = *((rsp + 0x10));
        if (ebx >= 0) {
            goto label_42;
        }
label_10:
        free (*((rsp + 0x30)));
        free (*((rsp + 0x40)));
        free (*((rsp + 0x18)));
        goto label_3;
label_34:
        edx = 5;
        rax = dcgettext (0, "%s: removing");
        rcx = rbp;
        eax = 0;
        error (0, 0, rax);
        goto label_7;
label_40:
        edx = 5;
        r13d = 0;
        rax = dcgettext (0, "%s: failed to remove");
        rbx = rax;
        rax = errno_location ();
        rcx = rbp;
        eax = 0;
        eax = error (0, *(rax), rbx);
    } while (1);
label_33:
    eax = 0;
    eax = fcn_004044d0 (*((rsp + 0x40)), 0x10900, rdx, rcx);
    *((rsp + 0x10)) = eax;
    goto label_8;
label_37:
    if (*((rsp + 0x10)) >= 0) {
        eax = fcn_00402a60 (*((rsp + 0x10)), *((rsp + 0x18)));
        eax = 0;
        if (eax == 0) {
            r13d = eax;
            goto label_43;
        }
    }
label_43:
    if (*((rsp + 0x6c)) != 0) {
        rcx = *((rsp + 0x38));
        edx = 5;
        esi = "%s: renamed to %s";
        if (*((rsp + 0x20)) == 0) {
            rcx = r12;
        }
        *((rsp + 0x20)) = rcx;
        rax = dcgettext (0, rsi);
        rcx = *((rsp + 0x20));
        r8 = r15;
        eax = 0;
        error (0, 0, rax);
        *((rsp + 0x20)) = 0;
    }
    memcpy (*((rsp + 0x28)), rbx, r14 + 2);
label_38:
    r14--;
    goto label_9;
label_42:
    eax = fcn_00402a60 (ebx, *((rsp + 0x18)));
    edi = ebx;
    eax = 0;
    if (eax != 0) {
        r13d = eax;
    }
    eax = close (rdi);
    if (eax == 0) {
        goto label_10;
    }
    edx = 5;
    r13d = 0;
    rax = dcgettext (0, "%s: failed to close");
    rbx = rax;
    rax = errno_location ();
    rcx = *((rsp + 0x18));
    eax = 0;
    error (0, *(rax), rbx);
    goto label_10;
label_41:
    edx = 5;
    rax = dcgettext (0, "%s: removed");
    rcx = rbp;
    eax = 0;
    error (0, 0, rax);
    goto label_11;
label_23:
    edx = 5;
    rax = dcgettext (0, "missing file operand");
    eax = 0;
    error (0, 0, rax);
label_20:
    fcn_00403ac0 (1);
label_19:
    fcn_00403ac0 (0);
label_39:
    assert_fail (0x40a4f9, "src/shred.c", 0x40a, "incname");
label_24:
    rdx = r12;
    rax = fcn_00406c60 (0, 3);
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x40b61c);
label_22:
    edx = 5;
    rax = dcgettext (0, "multiple random sources specified");
    eax = 0;
    error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x40294b */
#include <stdint.h>
 
int32_t fcn_0040294b (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4029a1 */
#include <stdint.h>
 
int64_t fcn_004029a1 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x0060f388) != 0) {
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
        *(0x0060f390) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_0040294b ();
    *(0x0060f388) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4029f8 */
#include <stdint.h>
 
int64_t fcn_004029f8 (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x402a10 */
#include <stdint.h>
 
int32_t fcn_00402a10 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    eax = 0;
    ebx = edi;
    eax = fcn_00408a90 (rdi, 3, rdx, rcx, r8);
    if (eax > 0) {
        ecx = eax;
        edx = eax;
        ch |= 0x40;
        dh &= 0xbf;
        if (bpl != 0) {
            edx = ecx;
        }
        if (edx != eax) {
            goto label_0;
        }
    }
    return eax;
label_0:
    edi = ebx;
    esi = 4;
    eax = 0;
invalid_funccall(); //    return void (*0x408a90)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x402a60 */
#include <stdint.h>
 
uint64_t fcn_00402a60 (void * arg1, time_t arg2) {
    int64_t var_15h;
    rdi = arg1;
    rsi = arg2;
    r13 = rsi;
    ebx = edi;
    eax = fdatasync ();
    if (eax != 0) {
        rax = errno_location ();
        ebp = *(rax);
        r12 = rax;
        eax = rbp - 0x15;
        if (eax > 1) {
            if (ebp == 9) {
                goto label_0;
            }
            edx = 5;
            rax = dcgettext (0, "%s: fdatasync failed");
            rcx = r13;
            eax = 0;
            error (0, ebp, rax);
            *(r12) = ebp;
            eax = 0xffffffff;
            goto label_1;
        }
label_0:
        edi = ebx;
        eax = fsync ();
        if (eax == 0) {
            goto label_2;
        }
        ebx = *(r12);
        eax = rbx - 0x15;
        if (eax > 1) {
            if (ebx != 9) {
                goto label_3;
            }
        }
        eax = sync ();
    }
label_2:
    eax = 0;
    do {
label_1:
        return rax;
label_3:
        edx = 5;
        rax = dcgettext (0, "%s: fsync failed");
        rcx = r13;
        eax = 0;
        error (0, ebx, rax);
        *(r12) = ebx;
        eax = 0xffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x402b20 */
#include <stdint.h>
 
 
void fcn_00402b20 (int64_t arg_870h, uint32_t arg_868h, int64_t arg1, int64_t arg2, time_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    time_t var_10h;
    uint32_t var_1bh;
    int64_t var_1ch;
    uint32_t var_20h;
    int64_t errname;
    void * ptr;
    int64_t var_38h;
    int64_t var_40h;
    char * s1;
    time_t var_50h;
    int64_t var_58h;
    char * format;
    int64_t var_6dh;
    int64_t var_6fh;
    int64_t var_70h;
    int64_t var_300h;
    int64_t var_590h;
    int64_t var_594h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r12d = edi;
    ebx = r8d;
    r13 = *(rcx);
    *((rsp + 0x10)) = rdx;
    *((rsp + 0x40)) = rcx;
    *((rsp + 0x1c)) = r8d;
    *((rsp + 0x38)) = r9;
    eax = getpagesize ();
    r14 = (int64_t) eax;
    if (ebx <= 0) {
        goto label_21;
    }
    ebx &= 0xfff;
    eax = ebx;
    eax <<= 0xc;
    eax |= ebx;
    edx = eax;
    edx >>= 4;
    if (ah == dl) {
        if (dl == al) {
            goto label_21;
        }
    }
    *((rsp + 0x20)) = 0xf000;
    r15d = 0xf000;
label_3:
    rbx = r14 - 1;
    rax = fcn_00408240 (r15 + rbx);
    edx = 0;
    rbx += rax;
    *((rsp + 0x30)) = rax;
    rax = rbx;
    rax = rdx_rax / r14;
    rdx = rdx_rax % r14;
    r14 = r13;
    rbx -= rdx;
    dl = (r13 > 0) ? 1 : 0;
    al = (r13 < *((rsp + 0x20))) ? 1 : 0;
    dl &= al;
    *((rsp + 0x1b)) = dl;
    if (dl == 0) {
        goto label_22;
    }
label_9:
    eax = *((rbp + 0x18));
    eax &= 0xf000;
    if (eax == 0x2000) {
        goto label_23;
    }
label_6:
    edx = 0;
    esi = 0;
    edi = r12d;
    rax = lseek ();
    if (rax > 0) {
        errno_location ();
        *(rax) = 0x16;
        rbx = rax;
label_20:
        edx = 5;
        rax = dcgettext (0, "%s: cannot rewind");
        rcx = *((rsp + 0x10));
label_15:
        eax = 0;
        error (0, *(rbx), rax);
label_0:
label_16:
        free (*((rsp + 0x30)));
        eax = 0xffffffff;
label_17:
        return rax;
    }
    if (rax != 0) {
        goto label_24;
    }
    ecx = *((rsp + 0x1c));
    if (ecx < 0) {
        goto label_25;
    }
label_7:
    eax = ecx;
    ecx &= 0xfff;
    eax <<= 0xc;
    eax &= 0xfff000;
    eax |= ecx;
    edx = eax;
    ax = rotate_left16 (ax, 8);
    edx >>= 4;
    *((rbx + 1)) = ax;
    *(rbx) = dl;
    if (r13 >= r15) {
        goto label_26;
    }
    if (r13 < 0) {
        goto label_26;
    }
    rbp >>= 1;
    if (rbp <= 2) {
        goto label_27;
    }
label_11:
    r15d = 3;
    do {
        r15 += r15;
        memcpy (rbx + r15, rbx, r15);
    } while (r15 <= rbp);
label_13:
    ebp = *((rsp + 0x1c));
    ebp &= 0x1000;
    if (r15 < r14) {
        goto label_28;
    }
    if (ebp != 0) {
        goto label_29;
    }
label_10:
    eax = *((rbx + 2));
    edx = 7;
    ecx = "%02x%02x%02x";
    esi = 1;
    r9d = *((rbx + 1));
    eax = 0;
    r8d = *(rbx);
    rdi = rsp + 0x79;
    sprintf_chk ();
    if (*((rsp + 0x868)) != 0) {
        goto label_30;
    }
label_8:
    *((rsp + 0x48)) = 0x40cccf;
    *((rsp + 8)) = 0;
    *((rsp + 0x50)) = 0;
    *(rsp) = 0;
label_2:
    if (r13 < 0) {
        goto label_31;
    }
    rax = *(rsp);
    rbp -= rax;
    if (rbp >= *((rsp + 0x20))) {
        goto label_31;
    }
    if (rbp == 0) {
        goto label_32;
    }
    if (r13 < rax) {
        goto label_32;
    }
    edi = *((rsp + 0x1c));
    if (edi < 0) {
        goto label_33;
    }
label_5:
    r15d = 0;
    rax = r15;
    r15 = r13;
    r13 = rax;
    while (rax > 0) {
        r13 += rax;
label_4:
        if (rbp <= r13) {
            goto label_34;
        }
label_1:
        rdx -= r13;
        rax = write (r12d, rbx + r13, rbp);
    }
    if (r15 < 0) {
        goto label_35;
    }
    rax = errno_location ();
    *((rsp + 0x28)) = rax;
    r14d = *(rax);
    if (*((rsp + 0x1b)) == 0) {
        if (r14d == 0x16) {
            goto label_36;
        }
    }
    rax = *(rsp);
    rax = fcn_00405170 (rax + r13, rsp + 0x590, rdx);
    edx = 5;
    *((rsp + 8)) = rax;
    rax = dcgettext (0, "%s: error writing at offset %s");
    r8 = *((rsp + 8));
    rcx = *((rsp + 0x10));
    eax = 0;
    error (0, r14d, rax);
    if (r14d != 5) {
        goto label_0;
    }
    r9 = r13;
    r9 |= 0x1ff;
    if (r9 >= rbp) {
        goto label_0;
    }
    rax = *(rsp);
    r13 = r9 + 1;
    edx = 0;
    edi = r12d;
    rsi = rax + r13;
    rax = lseek ();
    if (rax == -1) {
        goto label_37;
    }
    *((rsp + 8)) = 1;
    if (rbp > r13) {
        goto label_1;
    }
label_34:
    rax = r13;
    rcx = *(rsp);
    r13 = r15;
    r15 = rax;
    rax = 0x7fffffffffffffff;
    rax -= rcx;
    if (rax < r15) {
        goto label_38;
    }
    r15 += rcx;
    *(rsp) = r15;
    if (*((rsp + 0x868)) == 0) {
        goto label_2;
    }
    if (r13 == r15) {
        goto label_39;
    }
    rax = time (0);
    *((rsp + 0x50)) = rax;
    if (*((rsp + 0x58)) > rax) {
        goto label_2;
    }
    r8d = 1;
    rax = fcn_004045e0 (*(rsp), rsp + 0x300, 0x1b2, 1, r8d);
    rsi = rax;
    eax = strcmp (*((rsp + 0x48)), rsi);
    if (eax == 0) {
        goto label_2;
    }
label_14:
    if (r13 < 0) {
        goto label_40;
    }
    r9d = 0x64;
    if (r13 != 0) {
        rax = 0x28f5c28f5c28f5c;
        if (r15 > rax) {
            goto label_41;
        }
        rax = r15 * 5;
        edx = 0;
        rax *= 5;
        rax <<= 2;
        rax = rdx_rax / r13;
        rdx = rdx_rax % r13;
        r9 = rax;
    }
label_19:
    r8d = 1;
    *((rsp + 0x28)) = r9d;
    rax = fcn_004045e0 (r13, rsp + 0x590, 0x1b0, 1, r8d);
    edx = 5;
    esi = "%s: pass %lu/%lu (%s)..%s/%s %d%%";
    if (r13 == r15) {
    }
    r14 = rax;
    rax = dcgettext (0, rsi);
    r9d = *((rsp + 0x28));
    rdx = rsp + 0x81;
    r9 = *((rsp + 0x888));
    eax = 0;
    r8 = *((rsp + 0x880));
    rcx = *((rsp + 0x30));
    error (0, 0, rax);
label_18:
    rsi = rbp;
    rdi = rsp + 0x70;
    edx = 0x28c;
    strcpy_chk ();
    rax = *((rsp + 0x50));
    rax += 5;
    *((rsp + 0x58)) = rax;
    eax = fcn_00402a60 (r12d, *((rsp + 0x10)));
    if (eax == 0) {
        goto label_42;
    }
    rax = errno_location ();
    if (*(rax) != 5) {
        goto label_0;
    }
    rax = rsp + 0x70;
    *((rsp + 8)) = 1;
    *((rsp + 0x48)) = rax;
    goto label_2;
label_21:
    *((rsp + 0x20)) = 0x10000;
    r15d = 0x10002;
    goto label_3;
label_35:
    if (rax == 0) {
        goto label_43;
    }
    rax = errno_location ();
    r14d = *(rax);
    if (r14d == 0x1c) {
        goto label_43;
    }
    if (*((rsp + 0x1b)) != 0) {
        goto label_44;
    }
    if (r14d != 0x16) {
        goto label_44;
    }
label_36:
    fcn_00402a10 (r12d, 0, rdx, rcx);
    *((rsp + 0x1b)) = 1;
    goto label_4;
label_31:
    edi = *((rsp + 0x1c));
    rbp = *((rsp + 0x20));
    if (edi >= 0) {
        goto label_5;
    }
label_33:
    fcn_00407360 (*((rsp + 0x38)), rbx, rbp);
    goto label_5;
label_37:
    edx = 5;
    rax = dcgettext (0, "%s: lseek failed");
    rcx = *((rsp + 0x10));
    rdx = rax;
    rax = *((rsp + 0x28));
    eax = 0;
    eax = error (0, *(rax), rdx);
    goto label_0;
label_23:
    r11d = 6;
    eax = 0;
    rdx = rsp + 0x590;
    *((rsp + 0x590)) = r11w;
    *((rsp + 0x594)) = 1;
    eax = ioctl (r12d, 0x40086d01);
    if (eax != 0) {
        goto label_6;
    }
    ecx = *((rsp + 0x1c));
    if (ecx >= 0) {
        goto label_7;
    }
label_25:
    r10d = 0x6d6f;
    *((rsp + 0x69)) = 0x646e6172;
    *((rsp + 0x6d)) = r10w;
    *((rsp + 0x6f)) = 0;
    if (*((rsp + 0x868)) == 0) {
        goto label_8;
    }
label_30:
    edx = 5;
    rax = dcgettext (0, "%s: pass %lu/%lu (%s)..");
    rdx = rsp + 0x71;
    r9 = *((rsp + 0x878));
    eax = 0;
    r8 = *((rsp + 0x870));
    rcx = *((rsp + 0x20));
    error (0, 0, rax);
    rax = time (0);
    rax += 5;
    *((rsp + 0x68)) = rax;
    goto label_8;
label_22:
    eax = fcn_00402a10 (r12d, 1, rdx, rcx);
    goto label_9;
label_29:
    if (r14 == 0) {
        goto label_10;
    }
label_12:
    eax = 0;
    do {
        *((rbx + rax)) += 0x80;
        rax += 0x200;
    } while (rax < r14);
    goto label_10;
label_26:
    r14 = r15;
    rbp >>= 1;
    goto label_11;
label_28:
    rdx -= r15;
    memcpy (rbx + r15, rbx, r14);
    if (ebp != 0) {
        goto label_12;
    }
    goto label_10;
label_44:
    rdi += r13;
    rax = fcn_00405170 (*(rsp), rsp + 0x590, rdx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s: error writing at offset %s");
    rcx = *((rsp + 0x10));
    r8 = rbx;
    eax = 0;
    error (0, r14d, rax);
    goto label_0;
label_27:
    r15d = 3;
    goto label_13;
label_43:
    rax = 0x7fffffffffffffff;
    rax -= *(rsp);
    r15 = r13;
    if (rax < r13) {
        goto label_38;
    }
    rax = *((rsp + 0x40));
    r15 += *(rsp);
    r13 = r15;
    *(rsp) = r15;
    *(rax) = r15;
    if (*((rsp + 0x868)) == 0) {
        goto label_2;
    }
label_39:
    rax = *((rsp + 0x48));
    if (*(rax) != 0) {
        goto label_45;
    }
    rax = time (0);
    *((rsp + 0x50)) = rax;
    if (*((rsp + 0x58)) > rax) {
        goto label_2;
    }
label_45:
    r8d = 1;
    rax = fcn_004045e0 (r15, rsp + 0x300, 0x1b2, 1, r8d);
    goto label_14;
label_38:
    edx = 5;
    rax = dcgettext (0, "%s: file too large");
    rcx = *((rsp + 0x10));
    esi = 0;
    rdx = rax;
    goto label_15;
label_42:
    rax = rsp + 0x70;
    *((rsp + 0x48)) = rax;
    goto label_2;
label_32:
    eax = fcn_00402a60 (r12d, *((rsp + 0x10)));
    if (eax == 0) {
        goto label_46;
    }
    rax = errno_location ();
    rdi = *((rsp + 0x30));
    if (*(rax) != 5) {
        goto label_16;
    }
    free (rdi);
    eax = 1;
    goto label_17;
label_40:
    edx = 5;
    rax = dcgettext (0, "%s: pass %lu/%lu (%s)..%s");
    rdx = rsp + 0x71;
    r9 = *((rsp + 0x878));
    eax = 0;
    r8 = *((rsp + 0x870));
    rcx = *((rsp + 0x20));
    error (0, 0, rax);
    goto label_18;
label_41:
    rax = 0xa3d70a3d70a3d70b;
    rdx_rax = rax * r13;
    rax = r13;
    rax >>= 0x3f;
    rcx = rdx + r13;
    edx = 0;
    rcx >>= 6;
    rcx -= rax;
    rax = r15;
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    r9 = rax;
    goto label_19;
label_46:
    free (*((rsp + 0x30)));
    eax = *((rsp + 8));
    goto label_17;
label_24:
    rax = errno_location ();
    rbx = rax;
    goto label_20;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4033d0 */
#include <stdint.h>
 
uint64_t fcn_004033d0 (int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4) {
    int64_t var_8h;
    uint32_t var_10h_2;
    int64_t var_18h;
    uint32_t var_20h_2;
    uint32_t var_28h;
    uint32_t var_30h_2;
    int64_t var_38h_2;
    int64_t var_43h;
    int64_t var_44h;
    int64_t var_48h_2;
    int64_t var_58h_2;
    int64_t var_60h;
    int64_t var_78h;
    uint32_t var_90h;
    int64_t var_98h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    rbx = rcx;
    *((rsp + 0x18)) = rsi;
    *((rsp + 8)) = rdx;
    *((rsp + 0x28)) = 0;
    if (*((rcx + 0x1c)) != 0) {
        eax = *((rcx + 0x1e));
        rax += *((rcx + 8));
        *((rsp + 0x28)) = rax;
    }
    rdx = rsp + 0x60;
    esi = ebp;
    edi = 1;
    eax = fxstat ();
    if (eax != 0) {
        goto label_18;
    }
    eax = *((rsp + 0x78));
    eax &= 0xf000;
    if (eax == 0x2000) {
        goto label_19;
    }
label_9:
    cl = (eax == 0xc000) ? 1 : 0;
    dl = (eax == 0x1000) ? 1 : 0;
    cl |= dl;
    *((rsp + 0x43)) = cl;
    if (cl != 0) {
        goto label_8;
    }
    if (eax == 0x8000) {
        goto label_20;
    }
label_10:
    rdi = *((rbx + 8));
    rax = *((rbx + 8));
    rax >>= 0x3e;
    al = (rax != 0) ? 1 : 0;
    rdi <<= 2;
    eax = (int32_t) al;
    if (rdi < 0) {
        goto label_21;
    }
    if (rax != 0) {
        goto label_21;
    }
    rax = fcn_00408240 (rdi);
    r13 = rax;
    rax = *((rbx + 0x10));
    *((rsp + 0x20)) = rax;
    if (rax == -1) {
        goto label_22;
    }
    rax = *((rbx + 8));
    *((rsp + 0x30)) = rax;
    eax = *((rsp + 0x78));
    eax &= 0xf000;
    if (eax == 0x8000) {
        goto label_23;
    }
    *((rsp + 0x38)) = 0;
    if (*((rsp + 0x30)) == 0) {
        goto label_24;
    }
label_2:
    r12 = *((rsp + 0x30));
    r14d = 0x40b340;
    edi = 0;
    r9 = r13;
    *((rsp + 0x48)) = rbx;
    eax = 0xfffffffe;
    rbx = r12;
    *((rsp + 0x44)) = ebp;
    r12 = r14;
    r14 = rdi;
    while (eax == 0) {
        eax = 0xfffffffe;
        r12d = 0x40b344;
label_0:
        eax = -eax;
        rax = (int64_t) eax;
        if (rax >= rbx) {
            goto label_25;
        }
        r14 += rax;
        rbx -= rax;
label_1:
        eax = *(r12);
    }
    r12 += 4;
    if (eax < 0) {
        goto label_0;
    }
    r15 = (int64_t) eax;
    if (r15 > rbx) {
        goto label_26;
    }
    rbp = r15*4;
    rbx -= r15;
    r12 += rbp;
    rax = memcpy (r9, r12, rbp);
    r9 = rax;
    r9 += rbp;
    goto label_1;
label_8:
    edx = 5;
    rax = dcgettext (0, "%s: invalid file type");
    rcx = *((rsp + 0x18));
    eax = 0;
    error (0, 0, rax);
    *((rsp + 0x43)) = 0;
    do {
label_4:
        eax = *((rsp + 0x43));
        return rax;
label_18:
        edx = 5;
        rax = dcgettext (0, "%s: fstat failed");
        rbx = rax;
        rax = errno_location ();
        rcx = *((rsp + 0x18));
        eax = 0;
        error (0, *(rax), rbx);
        *((rsp + 0x43)) = 0;
    } while (1);
label_23:
    rax = *((rsp + 0x98));
    rdi = *((rsp + 0x90));
    rdx = 0x1fffffffffffffff;
    rcx = rax - 1;
    *((rsp + 0x38)) = rdi;
    edx = 0x200;
    rcx = *((rsp + 0x20));
    if (rcx > rdx) {
        rax = rdx;
    }
    if (rax > rcx) {
        rax = rcx;
    }
    if (rdi >= rax) {
        if (*((rsp + 0x30)) == 0) {
            goto label_24;
        }
        *((rsp + 0x38)) = 0;
        goto label_2;
label_22:
        eax = *((rsp + 0x78));
        eax &= 0xf000;
        if (eax != 0x8000) {
            goto label_27;
        }
        rsi = *((rsp + 0x90));
        edi = *((rbx + 0x1d));
        rax = *((rbx + 8));
        *((rsp + 0x20)) = rsi;
        *((rsp + 0x10)) = dil;
        *((rsp + 0x30)) = rax;
        if (dil != 0) {
            goto label_28;
        }
        rcx = *((rsp + 0x98));
        rax = 0x1fffffffffffffff;
        rdx = rcx - 1;
        eax = 0x200;
        if (rdx > rax) {
            rcx = rax;
        }
        rax = rsi;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rcx <= rsi) {
            goto label_29;
        }
        *((rsp + 0x38)) = rsi;
        if (rsi == 0) {
            goto label_29;
        }
label_17:
        if (rdx == 0) {
            goto label_30;
        }
        rdi = *((rsp + 0x20));
        rcx -= rdx;
        rax = 0x7fffffffffffffff;
        rax -= rdi;
        if (rax <= rcx) {
            rcx = rax;
        }
        rdi += rcx;
        *((rsp + 0x20)) = rdi;
    }
label_30:
    if (*((rsp + 0x30)) != 0) {
        goto label_2;
    }
label_7:
    rax = fcn_00406e60 (*((rsp + 8)));
    r14 = rax;
    rax = *((rsp + 0x38));
    if (rax == 0) {
        goto label_31;
    }
    *((rsp + 0x58)) = rax;
    rdx = *((rbx + 8));
    r12d = 0;
    *((rsp + 0x10)) = 1;
label_3:
    r15d = 0;
    *((rsp + 8)) = r13;
    r13 = rbx;
    rbx = r15;
    r15 = *((rsp + 0x18));
    while (rax > rbx) {
        r8d = 0;
        if (rbx < rdx) {
            rax = *((rsp + 8));
        }
        rbx++;
        eax = fcn_00402b20 (ebp, rsp + 0x70, r15, rsp + 0x68, *((rax + rbx*4)), r14);
        if (eax != 0) {
            if (eax < 0) {
                goto label_32;
            }
            *((rsp + 0x10)) = 0;
        }
        rdx = *((r13 + 8));
        eax = *((r13 + 0x1e));
        rax += rdx;
    }
    rbx = r13;
    r13 = *((rsp + 8));
label_12:
    if (*((rsp + 0x20)) == 0) {
        goto label_33;
    }
    rdx = *((rbx + 8));
label_13:
    rax = *((rsp + 0x20));
    r12 = *((rsp + 0x28));
    *((rsp + 0x20)) = 0;
    *((rsp + 0x58)) = rax;
    goto label_3;
label_32:
    r13 = *((rsp + 8));
label_15:
    free (*((rsp + 8)));
    goto label_4;
label_26:
    *((rsp + 0x10)) = r14;
    r14 = r12;
    r12 = rbx;
    ebp = *((rsp + 0x44));
    rbx = *((rsp + 0x48));
    if (r12 <= 1) {
        goto label_34;
    }
    rax = r12 * 3;
    if (r15 > rax) {
        goto label_34;
    }
    *((rsp + 0x48)) = rbx;
    rbx = r9;
    *((rsp + 0x44)) = ebp;
    goto label_35;
label_5:
    rbx = rcx;
    rbp = r15 - 1;
    do {
        r15 = rbp;
label_35:
        r14 += 4;
        if (r12 == r15) {
            goto label_36;
        }
        rbp = r15 - 1;
        rax = fcn_00406e70 (*((rsp + 8)), rbp);
    } while (r12 <= rax);
label_36:
    eax = *((r14 - 4));
    rcx = rbx + 4;
    *(rbx) = eax;
    r12--;
    if (r12 != 0) {
        goto label_5;
    }
    ebp = *((rsp + 0x44));
    rbx = *((rsp + 0x48));
label_11:
    rax = *((rsp + 0x30));
    rdi = *((rsp + 0x10));
    *((rsp + 0x44)) = ebp;
    r14d = 0;
    *((rsp + 0x48)) = rbx;
    rdx = rax;
    r12 = rdi - 1;
    r8 = rax - 1;
    rbx = rax;
    rdx -= rdi;
    r15 = r12;
    r12 = rdx;
    while (r15 <= rbp) {
        *((r13 + r12*4)) = r9d;
        r15 += r8;
        r12++;
        *((r13 + r14*4)) = 0xffffffff;
        r14++;
        r15 -= rbp;
        if (r14 == rbx) {
            goto label_37;
        }
label_6:
        r9d = *((r13 + r14*4));
    }
    *((rsp + 0x30)) = r8;
    r15 -= rbp;
    rsi -= r14;
    *((rsp + 0x10)) = r9d;
    rax = fcn_00406e70 (*((rsp + 8)), r12 - 1);
    r9d = *((rsp + 0x10));
    r8 = *((rsp + 0x30));
    rax += r14;
    rax = r13 + rax*4;
    esi = *(rax);
    *((r13 + r14*4)) = esi;
    r14++;
    *(rax) = r9d;
    if (r14 != rbx) {
        goto label_6;
    }
label_37:
    ebp = *((rsp + 0x44));
    rbx = *((rsp + 0x48));
    goto label_7;
label_19:
    eax = isatty (ebp);
    if (eax != 0) {
        goto label_8;
    }
    eax = *((rsp + 0x78));
    eax &= 0xf000;
    goto label_9;
label_20:
    if (*((rsp + 0x90)) >= 0) {
        goto label_10;
    }
    edx = 5;
    rax = dcgettext (0, "%s: file has negative size");
    rcx = *((rsp + 0x18));
    eax = 0;
    error (0, 0, rax);
    goto label_4;
label_34:
    goto label_11;
label_25:
    r12 = rbx;
    ebp = *((rsp + 0x44));
    rbx = *((rsp + 0x48));
    r14 += r12;
    *((rsp + 0x10)) = r14;
    goto label_11;
label_24:
    rax = fcn_00406e60 (*((rsp + 8)));
    *((rsp + 0x10)) = 1;
    r14 = rax;
    goto label_12;
label_27:
    esi = 0;
    edx = 2;
    edi = ebp;
    rax = lseek ();
    if (rax <= 0) {
        goto label_38;
    }
    rdi = *((rbx + 8));
    *((rsp + 0x20)) = rax;
    *((rsp + 0x38)) = 0;
    *((rsp + 0x30)) = rdi;
    if (rdi != 0) {
        goto label_2;
    }
label_14:
    rax = fcn_00406e60 (*((rsp + 8)));
    edx = 0;
    *((rsp + 0x10)) = 1;
    r14 = rax;
    goto label_13;
label_28:
    *((rsp + 0x38)) = 0;
    if (*((rsp + 0x30)) != 0) {
        goto label_2;
    }
    rax = fcn_00406e60 (*((rsp + 8)));
    r14 = rax;
    goto label_12;
label_38:
    *((rsp + 0x38)) = 0;
    rax = *((rbx + 8));
    *((rsp + 0x30)) = rax;
    if (rax != 0) {
        goto label_2;
    }
    goto label_14;
label_33:
    eax = *((rbx + 0x18));
    while (eax == 0) {
label_16:
        eax = *((rsp + 0x10));
        *((rsp + 0x43)) = al;
        goto label_15;
        esi = 0;
        edi = ebp;
        eax = ftruncate ();
    }
    eax = *((rsp + 0x78));
    eax &= 0xf000;
    if (eax != 0x8000) {
        goto label_16;
    }
    edx = 5;
    rax = dcgettext (0, "%s: error truncating");
    rbx = rax;
    rax = errno_location ();
    rcx = *((rsp + 0x18));
    eax = 0;
    error (0, *(rax), rbx);
    goto label_15;
label_29:
    *((rsp + 0x38)) = 0;
    goto label_17;
label_31:
    *((rsp + 0x10)) = 1;
    goto label_12;
label_21:
    return fcn_00408490 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x403ac0 */
#include <stdint.h>
 
uint64_t fcn_00403ac0 (int64_t arg1) {
    char * var_8h_2;
    int64_t var_10h;
    char * var_18h_2;
    char * var_20h;
    char * var_28h_2;
    char * var_30h;
    char * var_38h;
    char * var_40h;
    char * var_48h;
    char * var_50h;
    char * var_58h;
    int64_t var_60h_2;
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
    rax = dcgettext (0, "Usage: %s [OPTION].. FILE..\n");
    rdx = rbp;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Overwrite the specified FILE(s) repeatedly, in order to make it harder\nfor even very expensive hardware probing to recover the data.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nIf FILE is -, shred standard output.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nMandatory arguments to long options are mandatory for short options too.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rax = dcgettext (0, "  -f, --force    change permissions to allow writing if necessary\n  -n, --iterations=N  overwrite N times instead of the default (%d)\n      --random-source=FILE  get random bytes from FILE\n  -s, --size=N   shred this many bytes (suffixes like K, M, G accepted)\n");
    edx = 3;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -u             deallocate and remove file after overwriting\n      --remove[=HOW]  like -u but give control on HOW to delete;  See below\n  -v, --verbose  show progress\n  -x, --exact    do not round file sizes up to the next full block;\n                   this is the default for non-regular files\n  -z, --zero     add a final overwrite with zeros to hide shredding\n");
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
    rax = dcgettext (0, "\nDelete FILE(s) if --remove (-u) is specified.  The default is not to remove\nthe files because it is common to operate on device files like /dev/hda,\nand those files usually should not be removed.\nThe optional HOW parameter indicates how to remove a directory entry:\n'unlink' => use a standard unlink call.\n'wipe' => also first obfuscate bytes in the name.\n'wipesync' => also sync each obfuscated byte to disk.\nThe default mode is 'wipesync', but note it can be expensive.\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "CAUTION: Note that shred relies on a very important assumption:\nthat the file system overwrites data in place.  This is the traditional\nway to do things, but many modern file system designs do not satisfy this\nassumption.  The following are examples of file systems on which shred is\nnot effective, or is not guaranteed to be effective in all file system modes:\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rbp = stdout;
    rax = dcgettext (0, "* log-structured or journaled file systems, such as those supplied with\nAIX and Solaris (and JFS, ReiserFS, XFS, Ext3, etc.)\n\n* file systems that write redundant data and carry on even if some writes\nfail, such as RAID-based file systems\n\n* file systems that make snapshots, such as Network Appliance's NFS server\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "* file systems that cache in temporary locations, such as NFS\nversion 3 clients\n\n* compressed file systems\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "In the case of ext3 file systems, the above disclaimer applies\n(and shred is thus of limited effectiveness) only in data=journal mode,\nwhich journals file data in addition to just metadata.  In both the\ndata=ordered (default) and data=writeback modes, shred works as usual.\nExt3 journaling modes can be changed by adding the data=something option\nto the mount options for a particular file system in the /etc/fstab file,\nas documented in the mount man page (man mount).\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "In addition, file system backups and remote mirrors may contain copies\nof the file that cannot be removed, and that will allow a shredded file\nto be recovered later.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    *(rsp) = 0x40a35e;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x40a3d8;
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
        esi = "shred";
        ecx = 6;
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
        eax = strncmp (rax, 0x40a3e2, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x40a37a;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "shred";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x40cccf;
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
            eax = strncmp (rax, 0x40a3e2, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "shred";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x40a37a;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "shred";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x403f20 */
#include <stdint.h>
 
uint64_t fcn_00403f20 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x404040 */
#include <stdint.h>
 
uint64_t fcn_00404040 (int64_t arg1, int64_t arg2, uint32_t arg3) {
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
        rax = fcn_00406dc0 (1, rbp);
        rax = fcn_00406ab0 (0, 8, r12);
        r8 = rbp;
        rdx = rbx;
        esi = 0;
        rcx = rax;
        edi = 0;
        eax = 0;
invalid_funccall(); //        void (*0x401f60)() ();
label_0:
        rax = dcgettext (0, "invalid argument %s for %s");
        rbx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4040c0 */
#include <stdint.h>
 
uint64_t fcn_004040c0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_00406de0 (r12);
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
    rax = fcn_00406de0 (r12);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4041e0 */
#include <stdint.h>
 
uint64_t fcn_004041e0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
    rax = fcn_00403f20 (r12, rbx, rbp, r8);
    while (1) {
        return rax;
        fcn_00404040 (r14, r12, rax);
        fcn_004040c0 (rbx, rbp, r15);
invalid_funccall(); //        void (*r13)() ();
        rax = 0xffffffffffffffff;
    }
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x404360 */
#include <stdint.h>
 
uint64_t fcn_00404360 (void) {
    rax = fcn_004043e0 (rdi);
    if (rax != 0) {
        return rax;
    }
    return fcn_00408490 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x404380 */
#include <stdint.h>
 
uint64_t fcn_00404380 (uint32_t arg1) {
    rdi = arg1;
    ebp = 0;
    rbx = rdi;
    bpl = (*(rdi) == 0x2f) ? 1 : 0;
    rax = fcn_00404440 (rdi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4043e0 */
#include <stdint.h>
 
uint64_t fcn_004043e0 (int64_t arg1) {
    rdi = arg1;
    rax = fcn_00404380 (rdi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x404440 */
#include <stdint.h>
 
int64_t fcn_00404440 (int64_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4044a0 */
#include <stdint.h>
 
uint64_t fcn_004044a0 (int64_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4044d0 */
#include <stdint.h>
 
uint64_t fcn_004044d0 (int64_t arg_60h, int64_t arg3, int32_t oflag, const char * path) {
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
        fcn_00407c50 (eax);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x404520 */
#include <stdint.h>
 
uint64_t fcn_00404520 (int64_t arg1) {
    rdi = arg1;
    *(fp_stack--) = *(0x0040b6c4);
    *(fp_stack--) = fp_stack[unknown];
    if (fp_stack[0] >= fp_stack[1]) {
        goto label_0;
    }
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    eax = *((rsp - 0xa));
    ah |= 0xc;
    *((rsp - 0xc)) = ax;
    *(fp_stack--) = fp_stack[0];
    *((rsp - 0x18)) = fp_stack[0];
    fp_stack--;
    rax = *((rsp - 0x18));
    do {
        *((rsp - 0x20)) = rax;
        *(fp_stack--) = *((rsp - 0x20));
        if (rax < 0) {
            fp_stack[0] += *(0x0040b6c8);
        }
        if (edi == 0) {
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            __asm ("fucompi st(1)");
            if (edi != 0) {
                if (edi == 0) {
                    goto label_1;
                }
                fp_stack++;
            } else {
                fp_stack++;
            }
            rax++;
            *((rsp - 0x20)) = rax;
            *(fp_stack--) = *((rsp - 0x20));
            if (rax < 0) {
                goto label_2;
            }
        } else {
            fp_stack[1] = fp_stack[0];
            fp_stack--;
        }
label_1:
        return rax;
label_0:
        fp_stack[0] -= fp_stack[1];
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        eax = *((rsp - 0xa));
        ah |= 0xc;
        *((rsp - 0xc)) = ax;
        *((rsp - 0x18)) = fp_stack[0];
        fp_stack--;
        rax = *((rsp - 0x18));
        __asm ("btc rax, 0x3f");
    } while (1);
label_2:
    fp_stack[0] += *(0x0040b6c8);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4045e0 */
#include <stdint.h>
 
void fcn_004045e0 (int64_t arg1, void * arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    void * s2;
    int64_t var_10h;
    uint32_t var_14h;
    int64_t var_18h;
    size_t var_20h;
    int64_t var_30h;
    int64_t var_34h;
    int64_t var_38h;
    void * var_40h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    eax = edx;
    eax &= 0x20;
    r14 = rcx;
    ecx = edx;
    ecx &= 3;
    r13 = rsi;
    rbx = rdi;
    *((rsp + 0x30)) = eax;
    eax -= eax;
    eax &= 0xffffffe8;
    *((rsp + 8)) = rsi;
    eax += 0x400;
    *((rsp + 0x10)) = edx;
    *((rsp + 0x18)) = r8;
    *((rsp + 0x14)) = ecx;
    *((rsp + 0x34)) = eax;
    rax = localeconv ();
    r15 = *(rax);
    r12 = rax;
    rax = strlen (r15);
    edx = 1;
    r8 = rax;
    rax--;
    eax = 0x40a2b3;
    if (rax >= 0x10) {
        r15 = rax;
    }
    rax = *((r12 + 0x10));
    r12 = *((r12 + 8));
    if (rax >= 0x10) {
        r8 = rdx;
    }
    *((rsp + 0x20)) = r8;
    *((rsp + 0x38)) = rax;
    rax = strlen (r12);
    r8 = *((rsp + 0x20));
    eax = 0x40cccf;
    if (rax >= 0x11) {
        r12 = rax;
    }
    rax = r13 + 0x287;
    *(rsp) = rax;
    if (rbp > r14) {
        goto label_31;
    }
    rax = r14;
    edx = 0;
    rax = rdx_rax / rbp;
    rdx = rdx_rax % rbp;
    rcx = rax;
    if (rdx == 0) {
        rsi = rax;
        edx = 0;
        rsi *= rbx;
        rax = rsi;
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rax == rbx) {
            goto label_32;
        }
    }
label_5:
    *((rsp + 0x20)) = r14;
    *(fp_stack--) = *((rsp + 0x20));
    if (r14 < 0) {
        goto label_33;
    }
label_4:
    rax = *((rsp + 0x18));
    *((rsp + 0x20)) = rax;
    *(fp_stack--) = *((rsp + 0x20));
    if (rax < 0) {
        goto label_34;
    }
    *((rsp + 0x20)) = rbx;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *((rsp + 0x20));
    if (rbx < 0) {
        goto label_3;
    }
label_2:
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    if ((*((rsp + 0x10)) & 0x10) == 0) {
        goto label_1;
    }
label_0:
    *(fp_stack--) = *((rsp + 0x34));
    ebx = 0;
    *(fp_stack--) = fp_stack[0];
    while (ebx != 8) {
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        fp_tmp_0 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        *(fp_stack--) = fp_stack[0];
        ebx++;
        fp_stack[0] *= fp_stack[2];
        fp_tmp_1 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        if (fp_stack[0] < fp_stack[3]) {
            goto label_35;
        }
    }
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    goto label_36;
label_35:
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
label_36:
    ecx = *((rsp + 0x30));
    eax = 0;
    edi = *((rsp + 0x14));
    r14 = r8 + 1;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    al = (ecx == 0) ? 1 : 0;
    r15 = r14 + rax + 1;
    if (edi == 1) {
        goto label_37;
    }
    *(fp_stack--) = fp_stack[unknown];
    __asm ("fcompi st(1)");
    if (edi > 1) {
        goto label_38;
    }
    *(fp_stack--) = fp_stack[0];
label_12:
    unknown = fp_stack[0];
    fp_stack--;
    esi = 1;
    eax = 0;
    rbp = *((rsp + 0x18));
    ecx = "%.1Lf";
    rdx = 0xffffffffffffffff;
    rdi = rbp;
    unknown = fp_stack[0];
    fp_stack--;
    sprintf_chk ();
    rax = strlen (rbp);
    *(fp_stack--) = fp_stack[unknown];
    if (rax <= r15) {
        goto label_39;
    }
    *(fp_stack--) = *(0x0040b6cc);
    fp_stack[1] *= fp_stack[0];
label_26:
    *(fp_stack--) = fp_stack[unknown];
    __asm ("fcompi st(2)");
    if (rax > r15) {
        *((rsp + 0x20)) = fp_stack[0];
        fp_stack--;
        unknown = fp_stack[0];
        fp_stack--;
        fcn_00404520 (*((rsp + 0x24)));
        *(fp_stack--) = *((rsp + 0x20));
    }
label_15:
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    ecx = "%.0Lf";
    esi = 1;
    r15 = *((rsp + 0x18));
    rdx = 0xffffffffffffffff;
    eax = 0;
    rdi = r15;
    unknown = fp_stack[0];
    fp_stack--;
    sprintf_chk ();
    rax = strlen (r15);
    r14 = rax;
    goto label_14;
label_1:
    edi = *((rsp + 0x14));
    if (edi != 1) {
        *(fp_stack--) = fp_stack[unknown];
        __asm ("fcompi st(1)");
        if (edi > 1) {
            goto label_40;
        }
    }
label_11:
    esi = 1;
    ecx = "%.0Lf";
    eax = 0;
    rbx = *((rsp + 0x18));
    rdx = 0xffffffffffffffff;
    unknown = fp_stack[0];
    fp_stack--;
    rdi = rbx;
    sprintf_chk ();
    ebx = 0xffffffff;
    rax = strlen (rbx);
    r14 = rax;
label_14:
    r15 = *(rsp);
    r15 -= rax;
    r14 += r15;
    memmove (r15, *((rsp + 8)), rax);
label_22:
    if ((*((rsp + 0x10)) & 4) != 0) {
        goto label_41;
    }
label_6:
    if ((*((rsp + 0x10)) & 0x80) != 0) {
        if (ebx == 0xffffffff) {
            goto label_42;
        }
label_23:
        eax = *((rsp + 0x10));
        eax &= 0x100;
        ecx = eax;
        ecx |= ebx;
        if (ecx != 0) {
            goto label_43;
        }
    }
label_7:
    rax = *(rsp);
    *(rax) = 0;
    rax = r15;
    return;
label_3:
    fp_stack[0] += *(0x0040b6c8);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    if ((*((rsp + 0x10)) & 0x10) != 0) {
        goto label_0;
    }
    goto label_1;
label_34:
    fp_stack[0] += *(0x0040b6c8);
    *((rsp + 0x20)) = rbx;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *((rsp + 0x20));
    if (rbx >= 0) {
        goto label_2;
    }
    goto label_3;
label_33:
    fp_stack[0] += *(0x0040b6c8);
    goto label_4;
label_31:
    if (r14 == 0) {
        goto label_5;
    }
    rax = *((rsp + 0x18));
    edx = 0;
    rax = rdx_rax / r14;
    rdx = rdx_rax % r14;
    rcx = rax;
    if (rdx != 0) {
        goto label_5;
    }
    rax = rbx;
    edx = 0;
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    rbx = rax;
    rax = rdx * 5;
    edx = 0;
    rax += rax;
    rsi = rbx;
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    rdx += rdx;
    r9d = eax;
    if (rcx <= rdx) {
        goto label_44;
    }
    edi = 0;
    dil = (rdx != 0) ? 1 : 0;
label_18:
    ecx = *((rsp + 0x10));
    ecx &= 0x10;
    if (ecx == 0) {
        goto label_45;
    }
label_13:
    r10d = *((rsp + 0x34));
    ebx = 0;
    if (r10 <= rsi) {
        goto label_46;
    }
label_8:
    r14 = *(rsp);
    if (*((rsp + 0x14)) == 1) {
        goto label_47;
    }
label_24:
    r10d = *((rsp + 0x14));
    if (r10d == 0) {
        edi += r9d;
        if (edi <= 0) {
            goto label_16;
        }
label_17:
        rsi++;
        if (ecx == 0) {
            goto label_16;
        }
        eax = *((rsp + 0x34));
        if (rax == rsi) {
            goto label_48;
        }
    }
label_16:
    rcx = 0xcccccccccccccccd;
    r15 = r14;
    while (rsi > 9) {
        rsi = rdx;
        rax = rdx;
        rdi = rsi;
        r15--;
        rdx_rax = rax * rcx;
        rdx >>= 3;
        rax = rdx * 5;
        rax += rax;
        rdi -= rax;
        rax = rdi;
        eax += 0x30;
        *(r15) = al;
    }
    if ((*((rsp + 0x10)) & 4) == 0) {
        goto label_6;
    }
label_41:
    r13 = 0xffffffffffffffff;
    rax = strlen (r12);
    rbp -= r15;
    rsi = r15;
    ecx = 0x29;
    rdx = rbp;
    rdi = rsp + 0x40;
    *((rsp + 0x20)) = rax;
    memcpy_chk ();
    *((rsp + 0x14)) = ebx;
    r15 = *((rsp + 0x38));
    rbx = rbp;
    r13 = r12;
    r12 = *((rsp + 0x20));
    do {
        edx = *(r15);
        if (dl != 0) {
            eax = (int32_t) dl;
            if (dl >= 0x7f) {
                rax = rbx;
            }
            r15++;
        }
        if (rbp > rbx) {
            r15 = r14;
            ebx = *((rsp + 0x14));
            r15 -= rbp;
            memcpy (r15, rsp + 0x40, rbp);
            goto label_6;
        }
        r14 -= rbp;
        rbx -= rbp;
        rax = rsp + 0x40;
        memcpy (r14, rax + rbx, rbp);
        if (rbx == 0) {
            goto label_49;
        }
        r14 -= r12;
        memcpy (r14, r13, r12);
    } while (1);
label_42:
    rcx = *((rsp + 0x18));
    if (rcx <= 1) {
        goto label_50;
    }
    edx = *((rsp + 0x34));
    ebx = 1;
    eax = 1;
    do {
        rax *= rdx;
        if (rcx <= rax) {
            goto label_51;
        }
        ebx++;
    } while (ebx != 8);
label_51:
    ecx = *((rsp + 0x10));
    eax = *((rsp + 0x10));
    eax &= 0x100;
    ecx &= 0x40;
    if (ecx != 0) {
label_20:
        rcx = *((rsp + 8));
        rdi = rcx + 0x288;
        *((rcx + 0x287)) = 0x20;
        *(rsp) = rdi;
label_19:
        if (ebx == 0) {
            goto label_52;
        }
    }
    r9d = *((rsp + 0x30));
    if (r9d == 0) {
        if (ebx == 1) {
            goto label_53;
        }
    }
    rbx = (int64_t) ebx;
    rdi = *(rsp);
    ecx = *((rbx + 0x40b6b8));
    rdx = rdi + 1;
    *(rdi) = cl;
    if (eax == 0) {
        goto label_54;
    }
    r8d = *((rsp + 0x30));
    if (r8d != 0) {
        goto label_55;
    }
label_21:
    rax = rdx + 1;
    *(rdx) = 0x42;
    *(rsp) = rax;
    goto label_7;
label_9:
    dil = (edi != 0) ? 1 : 0;
    edi = (int32_t) dil;
label_10:
    ebx++;
    if (r10 > r11) {
        goto label_56;
    }
    if (ebx == 8) {
        goto label_8;
    }
label_46:
    rax = rsi;
    edx = 0;
    esi = edi;
    rax = rdx_rax / r10;
    rdx = rdx_rax % r10;
    esi >>= 1;
    r11 = rax;
    eax = rdx * 5;
    edx = 0;
    eax = r9 + rax*2;
    eax = edx_eax / ebp;
    edx = edx_eax % ebp;
    edx = rsi + rdx*2;
    r9d = eax;
    rsi = r11;
    edi += edx;
    if (ebp > edx) {
        goto label_9;
    }
    dil = (ebp < edi) ? 1 : 0;
    edi = (int32_t) dil;
    edi += 2;
    goto label_10;
label_40:
    unknown = fp_stack[0];
    fp_stack--;
    fcn_00404520 (rdi);
    goto label_11;
label_38:
    *(fp_stack--) = fp_stack[0];
    unknown = fp_stack[0];
    fp_stack--;
    unknown = fp_stack[0];
    fp_stack--;
    fcn_00404520 (rdi);
    *(fp_stack--) = fp_stack[unknown];
    goto label_12;
label_32:
    ecx = *((rsp + 0x10));
    edi = 0;
    r9d = 0;
    ecx &= 0x10;
    if (ecx != 0) {
        goto label_13;
    }
label_45:
    ebx = 0xffffffff;
    goto label_8;
    do {
label_39:
        if ((*((rsp + 0x10)) & 8) != 0) {
            rcx = *((rsp + 8));
            if (*((rcx + rax - 1)) == 0x30) {
                goto label_57;
            }
            fp_stack++;
        } else {
            fp_stack++;
        }
        rcx = rax;
        rcx -= r14;
        r14 = rcx;
        goto label_14;
label_37:
        ecx = "%.1Lf";
        esi = 1;
        eax = 0;
        *(fp_stack--) = fp_stack[0];
        unknown = fp_stack[0];
        fp_stack--;
        rbp = *((rsp + 0x18));
        rdx = 0xffffffffffffffff;
        rdi = rbp;
        unknown = fp_stack[0];
        fp_stack--;
        sprintf_chk ();
        rax = strlen (rbp);
        *(fp_stack--) = fp_stack[unknown];
    } while (rax <= r15);
    *(fp_stack--) = *(0x0040b6cc);
    fp_stack[1] *= fp_stack[0];
    goto label_15;
label_47:
    rax = rsi;
    rdi = (int64_t) edi;
    eax &= 1;
    rax += rdi;
    al = (rax != 0) ? 1 : 0;
    eax = (int32_t) al;
    r9d += eax;
    if (r9d <= 5) {
        goto label_16;
    }
    r14 = *(rsp);
    goto label_17;
label_44:
    dil = (r9d < 5) ? 1 : 0;
    edi = (int32_t) dil;
    edi += 2;
    goto label_18;
label_43:
    if ((*((rsp + 0x10)) & 0x40) == 0) {
        goto label_19;
    }
    goto label_20;
label_55:
    rdx = rdi + 2;
    *((rdi + 1)) = 0x69;
    goto label_21;
label_48:
    if (ebx == 8) {
        goto label_16;
    }
    ebx++;
    if ((*((rsp + 0x10)) & 8) == 0) {
        goto label_58;
    }
label_30:
    r15 = r14 - 1;
    *((r14 - 1)) = 0x31;
    goto label_22;
label_50:
    ebx = 0;
    goto label_23;
label_53:
    rcx = *(rsp);
    rdx = rcx + 1;
    *(rcx) = 0x6b;
    if (eax != 0) {
        goto label_21;
    }
label_54:
    *(rsp) = rdx;
    goto label_7;
label_56:
    if (r11 > 9) {
        goto label_8;
    }
    if (*((rsp + 0x14)) == 1) {
        goto label_59;
    }
    ebp = *((rsp + 0x14));
    dl = (ebp == 0) ? 1 : 0;
    r9b = (edi > 0) ? 1 : 0;
    edx &= r9d;
label_28:
    if (dl != 0) {
        goto label_60;
    }
    if (eax != 0) {
        goto label_61;
    }
label_29:
    r14 = *(rsp);
    if ((*((rsp + 0x10)) & 8) == 0) {
        eax = 0x30;
label_27:
        rdi = *((rsp + 8));
        r14 = rdi + 0x286;
        *((rdi + 0x286)) = al;
        eax = r8d;
        r14 -= r8;
        if (r8d >= 8) {
            goto label_62;
        }
        if ((r8b & 4) != 0) {
            goto label_63;
        }
        if (eax != 0) {
            edx = *(r15);
            *(r14) = dl;
            if ((al & 2) != 0) {
                goto label_64;
            }
        }
label_25:
        edi = 0;
    }
    if (*((rsp + 0x14)) == 1) {
        goto label_16;
    }
    r9d = 0;
    goto label_24;
label_64:
    edx = *((r15 + rax - 2));
    *((r14 + rax - 2)) = dx;
    goto label_25;
label_57:
    *(fp_stack--) = *(0x0040b6cc);
    fp_stack[1] *= fp_stack[0];
    if (*((rsp + 0x14)) != 1) {
        goto label_26;
    }
    goto label_15;
label_60:
    eax++;
    if (eax == 0xa) {
        goto label_65;
    }
label_61:
    eax += 0x30;
    goto label_27;
label_59:
    edx = eax;
    edx &= 1;
    edx += edi;
    dl = (edx > 2) ? 1 : 0;
    goto label_28;
label_62:
    rax = *(r15);
    r9 = r14 + 8;
    r10 = r15;
    r9 &= 0xfffffffffffffff8;
    *(r14) = rax;
    eax = r8d;
    rdx = *((r15 + rax - 8));
    *((r14 + rax - 8)) = rdx;
    rax = r14;
    rax -= r9;
    r10 -= rax;
    eax += r8d;
    eax &= 0xfffffff8;
    if (eax < 8) {
        goto label_25;
    }
    eax &= 0xfffffff8;
    edx = 0;
    do {
        edi = edx;
        edx += 8;
        r11 = *((r10 + rdi));
        *((r9 + rdi)) = r11;
    } while (edx < eax);
    goto label_25;
label_65:
    rsi = r11 + 1;
    if (rsi == 0xa) {
        goto label_66;
    }
    edi = 0;
    goto label_29;
label_58:
    rax = r8;
    *((r14 - 1)) = 0x30;
    rax = ~rax;
    r14 += rax;
    eax = r8d;
    if (r8d >= 8) {
        goto label_67;
    }
    r8d &= 4;
    if (r8d != 0) {
        goto label_68;
    }
    if (eax == 0) {
        goto label_30;
    }
    edx = *(r15);
    *(r14) = dl;
    if ((al & 2) == 0) {
        goto label_30;
    }
    edx = *((r15 + rax - 2));
    *((r14 + rax - 2)) = dx;
    goto label_30;
label_66:
    r14 = *(rsp);
    goto label_25;
label_67:
    rax = *(r15);
    rcx = r14 + 8;
    rcx &= 0xfffffffffffffff8;
    *(r14) = rax;
    eax = r8d;
    rdx = *((r15 + rax - 8));
    *((r14 + rax - 8)) = rdx;
    rax = r14;
    rax -= rcx;
    r15 -= rax;
    eax += r8d;
    eax &= 0xfffffff8;
    if (eax < 8) {
        goto label_30;
    }
    eax &= 0xfffffff8;
    edx = 0;
    do {
        esi = edx;
        edx += 8;
        rdi = *((r15 + rsi));
        *((rcx + rsi)) = rdi;
    } while (edx < eax);
    goto label_30;
label_63:
    edx = *(r15);
    *(r14) = edx;
    edx = *((r15 + rax - 4));
    *((r14 + rax - 4)) = edx;
    goto label_25;
label_68:
    edx = *(r15);
    *(r14) = edx;
    edx = *((r15 + rax - 4));
    *((r14 + rax - 4)) = edx;
    goto label_30;
label_49:
    ebx = *((rsp + 0x14));
    r15 = r14;
    goto label_6;
label_52:
    rdx = *(rsp);
    if (eax != 0) {
        goto label_21;
    }
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x405170 */
#include <stdint.h>
 
int64_t fcn_00405170 (uint32_t arg1, int64_t arg2, int64_t arg3) {
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
        rdx_rax = rax * rsi;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4051c0 */
#include <stdint.h>
 
uint64_t fcn_004051c0 (char ** arg1) {
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
            edi = 0x40b720;
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
        *(0x0060f3b0) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x405260 */
#include <stdint.h>
 
uint64_t fcn_00405260 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_00409c20 ();
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
        eax = 0x40b726;
        ebx = 0x40b731;
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
        eax = 0x40b72a;
        ebx = 0x40b72d;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x40ccaf;
    ebx = 0x40b724;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x405360 */
#include <stdint.h>
 
uint64_t fcn_00405360 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        /* [13] -r-x section size 33240 named .text */
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
    /* switch table (11 cases) at 0x40b7a0 */
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
    *((rsp + 0x50)) = 0x40ccaf;
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
        /* switch table (127 cases) at 0x40b7f8 */
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
    rax = fcn_00405360 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x40bbf0 */
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
    /* switch table (127 cases) at 0x40bfe8 */
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
    *((rsp + 0x50)) = 0x40ccaf;
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
        rax = fcn_00409a40 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x40ccaf;
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
        *((rsp + 0x50)) = 0x40b724;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00405260 (0x40b735, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00405260 (0x40ccaf, r13d);
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
        *((rsp + 0x50)) = 0x40b724;
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
        *((rsp + 0x50)) = 0x40ccaf;
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
    *((rsp + 0x50)) = 0x40b724;
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
    rax = fcn_00405360 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x40ccaf;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x406590 */
#include <stdint.h>
 
uint64_t fcn_00406590 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x0060f338);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x0060f350) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x60f340) {
        goto label_2;
    }
    rax = fcn_004082a0 (rbx, rsi);
    *(0x0060f338) = rax;
    rbx = rax;
    do {
        rdi = *(0x0060f350);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x0060f350) = r12d;
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
        rax = fcn_00405360 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x60f3c0) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00408240 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00405360 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_004082a0 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x0060f340]");
        rbx = rax;
        *(0x0060f338) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00408490 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x406ab0 */
#include <stdint.h>
 
int64_t fcn_00406ab0 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_00406590 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x406c30 */
#include <stdint.h>
 
int64_t fcn_00406c30 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x0060f4c0]");
        __asm ("movdqa xmm1, xmmword [0x0060f4d0]");
        __asm ("movdqa xmm2, xmmword [0x0060f4e0]");
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
        fcn_00406590 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x406c60 */
#include <stdint.h>
 
int64_t fcn_00406c60 (uint32_t arg2, int64_t arg3) {
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
    fcn_00406590 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x406dc0 */
#include <stdint.h>
 
void fcn_00406dc0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 0x60f300;
    rdx = 0xffffffffffffffff;
invalid_funccall(); //    return void (*0x406590)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x406de0 */
#include <stdint.h>
 
void fcn_00406de0 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x60f300;
    rdx = 0xffffffffffffffff;
    edi = 0;
invalid_funccall(); //    return void (*0x406590)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x406e30 */
#include <stdint.h>
 
uint64_t fcn_00406e30 (void) {
    rax = fcn_00407050 (rdi, rsi);
    rbx = rax;
    eax = 0;
    if (rbx != 0) {
        fcn_00408240 (0x18);
        *(rax) = rbx;
        *((rax + 0x10)) = 0;
        *((rax + 8)) = 0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x406e60 */
#include <stdint.h>
 
int64_t fcn_00406e60 (int64_t arg1) {
    rdi = arg1;
    rax = *(rdi);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x406e70 */
#include <stdint.h>
 
int64_t fcn_00406e70 (int64_t arg1, int64_t arg2) {
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
    fcn_00407360 (r12, rsp + 8, rdx);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x407050 */
#include <stdint.h>
 
uint64_t fcn_00407050 (int64_t arg1, int64_t arg2) {
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
    rax = fcn_00409b20 (rdi, 0x40c4a4);
    r13 = rax;
    if (rax == 0) {
        goto label_5;
    }
    fcn_00408240 (0x1038);
    ecx = 0x1000;
    rdi = r13;
    *(rax) = r13;
    if (rbp <= 0x1000) {
        rcx = rbp;
    }
    *((rax + 8)) = 0x406ff0;
    rbx = rax;
    *((rax + 0x10)) = r12;
    setvbuf (rdi, rax + 0x18, 0, rcx);
    do {
label_0:
        rax = rbx;
        return rax;
label_4:
        fcn_00408240 (0x1038);
        *(rax) = 0;
        rbx = rax;
        r13 = rax + 0x20;
        *((rax + 8)) = 0x406ff0;
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
        fcn_004077c0 (r13);
    } while (1);
label_3:
    rax = fcn_00408240 (0x1038);
    rbx = rax;
    *(rax) = 0;
    *((rax + 8)) = 0x406ff0;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x407360 */
#include <stdint.h>
 
uint64_t fcn_00407360 (int64_t arg1, int64_t arg2, uint32_t arg3) {
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
        fcn_00407510 (r14, r13);
    } while (rbx > 0x800);
    goto label_4;
    do {
        rbp += 0x800;
        fcn_00407510 (r14, rbp);
        rbx -= 0x800;
        if (rbx == 0) {
            goto label_5;
        }
INVALID_JUMP;
    } while (rbx > 0x7ff);
    fcn_00407510 (r14, r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4074c0 */
#include <stdint.h>
 
uint32_t fcn_004074c0 (int64_t arg1) {
    rdi = arg1;
    rdx = 0xffffffffffffffff;
    esi = 0x1038;
    rbx = rdi;
    rbp = *(rdi);
    explicit_bzero_chk ();
    eax = free (rbx);
    if (rbp != 0) {
        rdi = rbp;
invalid_funccall(); //        void (*0x408a10)() ();
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x407510 */
#include <stdint.h>
 
int64_t fcn_00407510 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4077c0 */
#include <stdint.h>
 
int64_t fcn_004077c0 (int64_t arg1) {
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
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4079a6 */
#include <stdint.h>
 
int64_t fcn_004079a6 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
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
        esi <<= 0xe;
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
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x407a00 */
#include <stdint.h>
 
uint64_t fcn_00407a00 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x407c50 */
#include <stdint.h>
 
uint64_t fcn_00407c50 (uint32_t arg1) {
    rdi = arg1;
    ebx = edi;
    if (edi > 2) {
        eax = ebx;
        return eax;
    }
    eax = fcn_0040a190 (rdi, rsi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x407ca0 */
#include <stdint.h>
 
void fcn_00407ca0 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x40c4ba);
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
        /* switch table (10 cases) at 0x40c7a0 */
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
invalid_funccall(); //    void (*0x402020)() ();
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
invalid_funccall(); //    void (*0x402020)() ();
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
invalid_funccall(); //    void (*0x402020)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x408100 */
#include <stdint.h>
 
uint64_t fcn_00408100 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_00407ca0 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x408240 */
#include <stdint.h>
 
uint64_t fcn_00408240 (int64_t arg1) {
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
    return fcn_00408490 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4082a0 */
#include <stdint.h>
 
uint64_t fcn_004082a0 (int64_t arg1, int64_t arg2) {
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
    return fcn_00408490 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x408440 */
#include <stdint.h>
 
uint64_t fcn_00408440 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00408240 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x408470 */
#include <stdint.h>
 
void fcn_00408470 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    strlen (rdi);
    rdi = rbx;
    rsi = rax + 1;
invalid_funccall(); //    return void (*0x408440)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x408490 */
#include <stdint.h>
 
uint64_t fcn_00408490 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x0060f2e0), 0, 0x40b61c);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4084d0 */
#include <stdint.h>
 
uint64_t fcn_004084d0 (int64_t arg_50h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg6) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r9 = arg6;
    r15 = rcx;
    r14 = rdx;
    edx = esi;
    r13 = r9;
    r12 = rdi;
    ebx = *((rsp + 0x50));
    eax = fcn_004085d0 (rdi, 0, edx, rsp + 8, r8);
    if (eax != 0) {
        goto label_1;
    }
    rbp = *((rsp + 8));
    if (rbp >= r14) {
        if (rbp <= r15) {
            goto label_2;
        }
    }
    rax = errno_location ();
    r14 = rax;
    eax -= eax;
    eax &= 0xffffffd7;
    eax += 0x4b;
    *(r14) = eax;
    do {
label_0:
        rax = fcn_00406de0 (r12);
        esi = *(r14);
        rcx = r13;
        edx = "%s: %s";
        r8 = rax;
        eax = 0;
        if (esi == 0x16) {
            esi = eax;
        }
        eax = 1;
        if (ebx == 0) {
            ebx = eax;
        }
        eax = 0;
        error (ebx, rsi, rdx);
        rbp = *((rsp + 8));
label_2:
        rax = rbp;
        return rax;
label_1:
        rax = errno_location ();
        r14 = rax;
        if (ebp == 1) {
            goto label_3;
        }
    } while (ebp != 3);
    *(rax) = 0;
    goto label_0;
label_3:
    *(rax) = 0x4b;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4085a0 */
#include <stdint.h>
 
void fcn_004085a0 (int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    fcn_004084d0 (rdi, 0xa, rsi, rdx, rcx, r8);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4085d0 */
#include <stdint.h>
 
uint64_t fcn_004085d0 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_8h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    if (edx > 0x24) {
        goto label_13;
    }
    r15 = rsi;
    rax = rsp + 0x18;
    *(rsp) = edx;
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
    edx = *(rsp);
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
    ecx = 0;
    rsi = r15;
    rdi = rbp;
    rax = strtoul_internal ();
    r8 = *(r15);
    rbx = rax;
    if (r8 == rbp) {
        goto label_14;
    }
    eax = *(r12);
    if (eax != 0) {
        goto label_15;
    }
    ebp = 0;
    do {
        if (r13 != 0) {
            r12d = *(r8);
            if (r12b != 0) {
                goto label_16;
            }
        }
label_2:
        *(r14) = rbx;
label_0:
        eax = ebp;
        return rax;
INVALID_JUMP;
    } while (eax == 0x22);
    do {
label_1:
        goto label_0;
label_14:
        *(rsp) = r8;
    } while (r13 == 0);
    r12d = *(rbp);
    if (r12b == 0) {
        goto label_1;
    }
    esi = (int32_t) r12b;
    ebp = 0;
    ebx = 1;
    rax = strchr (r13, rsi);
    r8 = *(rsp);
    if (rax == 0) {
        goto label_1;
    }
label_4:
    edx = r12 - 0x45;
    if (dl <= 0x2f) {
        rax = 0x814400308945;
        *(rsp) = dl;
        if (((rax >> rdx) & 1) >= 0) {
            goto label_17;
        }
        *((rsp + 8)) = r8;
        rax = strchr (r13, 0x30);
        r8 = *((rsp + 8));
        if (rax == 0) {
            goto label_17;
        }
        eax = *((r8 + 1));
        if (al == 0x44) {
            goto label_18;
        }
        if (al == 0x69) {
            goto label_19;
        }
        edx = *(rsp);
        if (al == 0x42) {
            goto label_18;
        }
        /* switch table (67 cases) at 0x40c878 */
    }
label_17:
    esi = 1;
    edx = 0x400;
label_7:
    r12d -= 0x42;
    if (r12b > 0x35) {
        goto label_20;
    }
    r12d = (int32_t) r12b;
    /* switch table (54 cases) at 0x40c9f8 */
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    rax = rbx;
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*r12b overflow 0x35*/) {
        goto label_5;
    }
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*r12b overflow 0x35*/) {
        goto label_5;
    }
    rbx = rax;
    do {
label_3:
        rsi = (int64_t) esi;
        eax = ebp;
        r8 += rsi;
        eax |= 2;
        *(r15) = r8;
        if (*(r8) != 0) {
        }
        goto label_2;
        esi = 1;
        edx = 0x400;
        rax = rbx;
        rdx_rax = rax * rdx;
        rbx = rax;
    } while (UNKNOWN_OP /**(r8) !overflow 0*/);
label_5:
    rbx |= 0xffffffffffffffff;
    goto label_3;
label_16:
    esi = (int32_t) r12b;
    *(rsp) = r8;
    rax = strchr (r13, rsi);
    r8 = *(rsp);
    if (rax != 0) {
        goto label_4;
    }
label_20:
    *(r14) = rbx;
    ebp |= 2;
    goto label_0;
    if (rbx < 0) {
        goto label_5;
    }
    rbx += rbx;
    goto label_3;
    esi = 1;
    rax = rbx;
    rax >>= 0x37;
    if (rax != 0) {
        goto label_5;
    }
    rbx <<= 9;
    goto label_3;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 7;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*rbx overflow 0*/) {
            goto label_21;
        }
label_8:
        edi--;
    } while (edi != 0);
label_6:
    ebp |= r9d;
    goto label_3;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 8;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*ebp overflow 0*/) {
            goto label_22;
        }
label_11:
        edi--;
    } while (edi != 0);
    goto label_6;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 4;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*edi overflow 0*/) {
            goto label_23;
        }
label_9:
        edi--;
    } while (edi != 0);
    goto label_6;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 5;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*edi overflow 0*/) {
            goto label_24;
        }
label_12:
        edi--;
    } while (edi != 0);
    goto label_6;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 6;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*edi overflow 0*/) {
            goto label_25;
        }
label_10:
        edi--;
    } while (edi != 0);
    goto label_6;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    rax = rbx;
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*edi overflow 0*/) {
        goto label_26;
    }
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*edi overflow 0*/) {
        goto label_26;
    }
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*edi overflow 0*/) {
        goto label_26;
    }
    rbx = rax;
    eax = 0;
    ebp |= eax;
    goto label_3;
    rax = rbx;
    rax >>= 0x36;
    if (rax != 0) {
        goto label_5;
    }
    rbx <<= 0xa;
    goto label_3;
    esi = 1;
    goto label_3;
label_18:
    esi = 2;
    edx = 0x3e8;
    goto label_7;
label_19:
    esi = 0;
    edx = 0x400;
    sil = (*((r8 + 2)) == 0x42) ? 1 : 0;
    esi = rsi + rsi + 1;
    goto label_7;
label_21:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_8;
label_26:
    eax = 1;
    rbx |= 0xffffffffffffffff;
    ebp |= eax;
    goto label_3;
label_23:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_9;
label_25:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_10;
label_22:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_11;
label_24:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_12;
label_13:
    return assert_fail ("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60, "xstrtoumax");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x408a10 */
#include <stdint.h>
 
uint64_t fcn_00408a10 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_00408bd0 (rbx);
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
invalid_funccall(); //    void (*0x401c70)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x408a90 */
#include <stdint.h>
 
uint64_t fcn_00408a90 (int64_t arg_70h, int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
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
            *(0x0060f4f8) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
        eax = fcn_00408a90 (rdi, 0, rdx, rcx, r8);
    } while (1);
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x0060f4f8) != 0xffffffff) {
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
    eax = fcn_00408a90 (ebp, 0, r12d, rcx, r8);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x0060f4f8) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x408bd0 */
#include <stdint.h>
 
uint32_t fcn_00408bd0 (int64_t arg1) {
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
invalid_funccall(); //    void (*0x401e90)() ();
label_1:
    fcn_00408c10 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x408c10 */
#include <stdint.h>
 
int64_t fcn_00408c10 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x401fa0)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x408c70 */
#include <stdint.h>
 
uint64_t fcn_00408c70 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x408d50 */
#include <stdint.h>
 
int64_t fcn_00408d50 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x409370 */
#include <stdint.h>
 
uint64_t fcn_00409370 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x40ccb1;
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
            fcn_00408c70 (r12, rbx);
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
        fcn_00408c70 (r12, rbx);
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
    eax = fcn_00408d50 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_00408d50 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x409940 */
#include <stdint.h>
 
int32_t fcn_00409940 (int64_t arg_10h) {
    eax = *(0x0060f35c);
    *(0x0060f500) = eax;
    eax = *(0x0060f358);
    *(0x0060f504) = eax;
    eax = *((rsp + 0x10));
    fcn_00409370 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0060f35c) = edx;
    rdx = imp.__libc_start_main;
    *(0x0060f540) = rdx;
    edx = imp.__libc_start_main;
    *(0x0060f354) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x4099c0 */
#include <stdint.h>
 
void fcn_004099c0 (void) {
    r9d = 0;
    fcn_00409940 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x409a40 */
#include <stdint.h>
 
uint64_t fcn_00409a40 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_00409bc0 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x409ac0 */
#include <stdint.h>
 
uint64_t fcn_00409ac0 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_00408a10 (rbp);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x409b20 */
#include <stdint.h>
 
uint64_t fcn_00409b20 (int64_t arg2, const char * filename) {
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
        eax = fcn_0040a190 (eax, rsi);
        r12d = eax;
        if (eax < 0) {
            goto label_1;
        }
        eax = fcn_00408a10 (rbx);
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
    fcn_00408a10 (rbx);
    *(rbp) = r12d;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x409bc0 */
#include <stdint.h>
 
uint64_t fcn_00409bc0 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x40ccd4;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x409c20 */
#include <stdint.h>
 
uint64_t fcn_00409c20 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x40cccf;
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
        r15d = 0x40cccf;
label_2:
        *(0x0060f538) = r15;
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
        r15d = 0x40cccf;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x40c495;
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
    fcn_00408a10 (rbx);
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
        r15d = 0x40cccf;
        rbx = rax;
        free (r15);
        fcn_00408a10 (r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x40a190 */
#include <stdint.h>
 
int32_t fcn_0040a190 (int64_t arg1, int64_t arg4) {
    rdi = arg1;
    rcx = arg4;
    edx = 3;
    esi = 0;
    eax = 0;
invalid_funccall(); //    return void (*0x408a90)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x40a210 */
#include <stdint.h>
 
int64_t fcn_0040a210 (void) {
    rax = 0x60f2c8;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_shred.elf @ 0x40a228 */
#include <stdint.h>
 
void fcn_0040a228 (int64_t arg3) {
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
