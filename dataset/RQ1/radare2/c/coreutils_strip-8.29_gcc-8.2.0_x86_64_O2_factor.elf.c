/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x401a80 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int64_t var_8h;
    rdi = argc;
    rsi = argv;
    rbx = rsi;
    fcn_00404760 (*(rsi));
    setlocale (6, 0x4105e7);
    bindtextdomain (0x40bdb0, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x40bdb0, rsi);
    if (*(0x00613300) == 0) {
        goto label_2;
    }
label_0:
    edi = 0x4045f0;
    fcn_0040bc60 ();
    edi = fcn.004023d0;
    fcn_0040bc60 ();
    do {
        r8d = 0;
        ecx = 0x40f260;
        edx = 0x4105e7;
        rsi = rbx;
        edi = ebp;
        eax = fcn_00408f40 ();
        if (eax == 0xffffffff) {
            goto label_3;
        }
        if (eax == 0xffffff7e) {
            goto label_4;
        }
        if (eax != 0x80) {
            goto label_5;
        }
        *(0x00613310) = 1;
    } while (1);
label_5:
    if (eax != 0xffffff7d) {
        fcn_004042e0 (1);
    }
    rax = fcn_00405150 ("Niels Moller", "Niels M\xc3\xb6ller");
    rbx = rax;
    rax = fcn_00405150 ("Torbjorn Granlund", "Torbj\xc3\xb6rn Granlund");
    rcx = *(str.8.29);
    r9 = rax;
    r8d = "Paul Rubin";
    eax = 0;
    fcn_00407da0 (*(obj.stdout), "factor", "GNU coreutils");
    exit (0);
label_2:
    rax = fcn_00407ee0 (0x400);
    *(0x00613300) = rax;
    *(0x00613308) = rax;
    goto label_0;
label_3:
    r12 = *(0x006132bc);
    if (r12d >= ebp) {
        goto label_6;
    }
    r13d = 1;
    r14d = 0;
    do {
        al = fcn_00404170 (*((rbx + r12*8)));
        if (al == 0) {
            r13d = r14d;
        }
        r12++;
    } while (ebp > r12d);
label_1:
    r13d ^= 1;
    eax = (int32_t) r13b;
    return rax;
label_6:
    r13d = 1;
    fcn_00406f70 (rsp);
    while (rax != 0) {
        eax = fcn_00404170 (rdi);
        r13d &= eax;
        rax = fcn_00406f80 (*(obj.stdin), 0x40be09, 3, rsp);
        rdi = *((rsp + 8));
        rax++;
    }
    free (rdi);
    goto label_1;
label_4:
    return fcn_004042e0 (0);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x401c6b */
#include <stdint.h>
 
int32_t fcn_00401c6b (void) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x401cc1 */
#include <stdint.h>
 
int64_t fcn_00401cc1 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x006132e8) != 0) {
        goto label_0;
    }
    r12d = section..dtors;
    ebx = 0x612e48;
    rbx -= section..dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x006132f0) = rax;
        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_00401c6b ();
    *(0x006132e8) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x401d18 */
#include <stdint.h>
 
int64_t fcn_00401d18 (void) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x401d20 */
#include <stdint.h>
 
int64_t fcn_00401d20 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = rsi;
    if ((sil & 1) == 0) {
        rax = rdi;
        rdi = rsi;
    }
    if (rdi == 0) {
        goto label_1;
    }
    rax >>= 1;
    goto label_2;
label_0:
    rcx = rdx;
    rsi = rdx;
    rcx >>= 0x3f;
    rsi &= rcx;
    rdx ^= rcx;
    rax += rsi;
    rdx -= rcx;
    do {
        rdi = rdx;
label_2:
        rdx >>= 1;
    } while ((dil & 1) == 0);
    rdx -= rax;
    if (rdx != 0) {
        goto label_0;
    }
    rax = rdi;
    rax |= 1;
    return rax;
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x401d80 */
#include <stdint.h>
 
uint64_t fcn_00401d80 (uint32_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r13 = rdi + 0xe0;
    r12 = rdi + 0x10;
    ebx = *((rdi + 0xfa));
    ebx--;
    if (ebx == 0xffffffff) {
        goto label_1;
    }
    r8 = (int64_t) ebx;
    r11 = *((r12 + r8*8));
    rax = r8*8;
    if (rsi >= r11) {
        goto label_2;
    }
    rcx = r8 - 1;
    eax = ebx;
    r10 = rcx;
    while (eax != 0xffffffff) {
        r9 = r10 - 1;
        if (*((rdi + r9*8 + 0x18)) <= rsi) {
            goto label_3;
        }
        r10 = r9;
        eax--;
    }
    while (eax < ecx) {
        r11 = *((rdi + rcx*8 + 0x10));
        rcx--;
label_0:
        *((rdi + r8*8 + 0x18)) = r11;
        r9d = *((rdi + r8 + 0xe0));
        *((rdi + r8 + 0xe1)) = r9b;
        r8 = rcx;
    }
label_1:
    ebp++;
    *(r12) = rsi;
    *(r13) = dl;
    *((rdi + 0xfa)) = bpl;
    r12 = rbx;
    r13 = rbx;
    return rax;
    if (ebp == 0) {
label_3:
        goto label_4;
    }
    r10++;
    r12 = r12 + r10*8;
    r13 += r10;
    if (ebx > eax) {
        goto label_0;
    }
    goto label_1;
    if (ebx == eax) {
label_2:
        r10 = r8;
label_4:
        *((r13 + r10)) += dl;
        r12 = rbx;
        r13 = rbx;
        return rax;
    }
    r12 = r12 + rax + 8;
    r13 = r13 + r8 + 1;
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x401e60 */
#include <stdint.h>
 
int64_t fcn_00401e60 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r8 = arg5;
    r9 = rdx;
    if ((sil & 1) == 0) {
        goto label_1;
    }
    r8 = rdi;
    do {
label_0:
        rax = rdi;
        rdx:rax = rax * rdi;
        r10 = rdx;
        rax *= rcx;
        rdi = r10;
        rdx:rax = rax * r9;
        rdi -= rdx;
        rax = rdi + r9;
        if (r10 < rdx) {
            rdi = rax;
        }
        rsi >>= 1;
        if ((sil & 1) == 0) {
            goto label_1;
        }
        rax = r8;
        rdx:rax = rax * rdi;
        r10 = rdx;
        rax *= rcx;
        r8 = r10;
        rdx:rax = rax * r9;
        r8 -= rdx;
        rax = r8 + r9;
        if (r10 < rdx) {
            r8 = rax;
        }
    } while (1);
label_1:
    if (rsi != 0) {
        goto label_0;
    }
    rax = r8;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x401ed0 */
#include <stdint.h>
 
uint64_t fcn_00401ed0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r11 = rdi;
    r12 = r9;
    r8 = r9;
    rbx = rsi;
    rax = fcn_00401e60 (rdx, rcx, r11, rbx);
    rdi = r11;
    rdi -= r12;
    r8b = (r12 == rax) ? 1 : 0;
    dl = (rax == rdi) ? 1 : 0;
    r8b |= dl;
    if (r8b != 0) {
        goto label_0;
    }
    if (ebp <= 1) {
        goto label_0;
    }
    esi = 1;
    while (rdi != rax) {
        if (r12 == rax) {
            goto label_0;
        }
        esi++;
        if (ebp == esi) {
            goto label_0;
        }
        rdx:rax = rax * rax;
        rcx = rdx;
        rax *= rbx;
        rdx:rax = rax * r11;
        rax = rcx;
        rax -= rdx;
        r9 = rax + r11;
        if (rcx < rdx) {
            rax = r9;
        }
    }
    r8d = 1;
label_0:
    eax = r8d;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x401f60 */
#include <stdint.h>
 
int64_t fcn_00401f60 (int64_t arg_40h, int64_t arg_48h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, uint32_t arg6) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r9 = arg6;
    rbx = *((rsp + 0x48));
    r10 = *((rsp + 0x40));
    rbx = -rbx;
    if (rsi < 0) {
        goto label_2;
    }
    if (rcx < 0) {
        goto label_3;
    }
    if (r9 < 0) {
        goto label_4;
    }
    r15 = rbx;
    rax = rbp;
    rdx:rax = rax * r8;
    r12 = rax;
    r13 = rdx;
    rax = rbp;
    r15 *= r12;
    rdx:rax = rax * rcx;
    r11 = rdx;
    rax = r15;
    rdx:rax = rax * r10;
    rax = r15;
    r14 = rdx;
    rdx:rax = rax * r9;
    r12b = (r12 != 0) ? 1 : 0;
    r12d = (int32_t) r12b;
    rbp += r12;
    rbp += r14;
    r11 += 0;
    rbp += r13;
    r11 += 0;
    rbp += rax;
    r11 += rdx;
    rax = rsi;
    rdx:rax = rax * r8;
    r8 = rdx;
    r12 = rax;
    rax = rsi;
    esi = 0;
    r12 += rbp;
    r8 += 0;
    rbx *= r12;
    rdx:rax = rax * rcx;
    rcx = rdx;
    rax = rbx;
    rbp += r11;
    rcx += 0;
    rdx:rax = rax * r10;
    rax = rbx;
    r11 = rdx;
    rdx:rax = rax * r9;
    sil = (r12 != 0) ? 1 : 0;
    rsi += rbp;
    rsi += r11;
    rcx += 0;
    rsi += r8;
    rcx += 0;
    rsi += rax;
    rcx += rdx;
    rdx = rcx;
    rax = rsi;
    if (r9 >= rcx) {
        goto label_5;
    }
label_0:
    rsi -= r10;
    rcx -= r9;
    rdx = rcx;
    rax = rsi;
    do {
label_1:
        *(rdi) = rdx;
        return rax;
label_5:
    } while (rcx != 0);
    if (r10 <= rsi) {
        goto label_0;
    }
    goto label_1;
label_4:
    assert_fail ("(m1 >> (W_TYPE_SIZE - 1)) == 0", "src/factor.c", 0x3e9, "mulredc2");
label_3:
    assert_fail ("(b1 >> (W_TYPE_SIZE - 1)) == 0", "src/factor.c", 0x3e8, "mulredc2");
label_2:
    return assert_fail ("(a1 >> (W_TYPE_SIZE - 1)) == 0", "src/factor.c", 0x3e7, "mulredc2");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4020d0 */
#include <stdint.h>
 
void fcn_004020d0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_28h_2;
    int64_t var_30h;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r15 = r8;
    rbx = rdi;
    rax = *(r9);
    r10 = *(rsi);
    r11 = *((rsi + 8));
    r13 = *(rcx);
    *((rsp + 0x28)) = rdx;
    r14 = *((rcx + 8));
    r12 = *(rdx);
    *((rsp + 0x10)) = rax;
    rax = *((r9 + 8));
    *((rsp + 8)) = rax;
    while ((r12b & 1) == 0) {
label_0:
        r8 = r10;
        rcx = r11;
        r12 >>= 1;
        rax = fcn_00401f60 (rbx, r11, r10, rcx, r8, r14);
        r11 = *(rbx);
        r10 = rax;
        ebp--;
        if (ebp == 0) {
            goto label_2;
        }
    }
    r8 = r10;
    rcx = r11;
    *((rsp + 0x28)) = r11;
    *((rsp + 0x30)) = r10;
    rax = fcn_00401f60 (rbx, *((rsp + 0x18)), *((rsp + 0x20)), rcx, r8, r14);
    *((rsp + 0x20)) = rax;
    rax = *(rbx);
    *((rsp + 0x18)) = rax;
    r10 = *((rsp + 0x20));
    r11 = *((rsp + 0x18));
    goto label_0;
label_2:
    rax = *((rsp + 0x28));
    rbp = *((rax + 8));
    if (rbp != 0) {
        goto label_3;
    }
    goto label_4;
    do {
label_1:
        rdx = r10;
        rcx = r11;
        rax = fcn_00401f60 (rbx, r11, rdx, rcx, r10, r14);
        rbp >>= 1;
        r11 = *(rbx);
        r10 = rax;
        if (rbp == 0) {
            goto label_4;
        }
label_3:
    } while ((bpl & 1) == 0);
    rcx = r11;
    r8 = r10;
    *((rsp + 0x30)) = r10;
    *((rsp + 0x28)) = r11;
    rax = fcn_00401f60 (rbx, *((rsp + 0x18)), *((rsp + 0x20)), rcx, r8, r14);
    *((rsp + 0x20)) = rax;
    rax = *(rbx);
    *((rsp + 0x18)) = rax;
    r10 = *((rsp + 0x20));
    r11 = *((rsp + 0x18));
    goto label_1;
label_4:
    rax = *((rsp + 8));
    *(rbx) = rax;
    rax = *((rsp + 0x10));
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x402240 */
#include <stdint.h>
 
uint64_t fcn_00402240 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, uint32_t arg6) {
    int64_t var_fh;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r14 = rdi;
    r13d = r8d;
    r12 = rsi;
    rbx = r9;
    rax = fcn_004020d0 (rsp + 0x18, rdx, rcx, rdi, r12, r9);
    rcx = *(rbx);
    rsi = *((rsp + 0x18));
    rdi = *((rbx + 8));
    if (rcx == rax) {
        goto label_3;
    }
label_1:
    r9 = *((r14 + 8));
    rdx = *(r14);
    r10 = r9;
    rbp -= rcx;
    r10 -= rdi;
    *(rsp) = r10;
    r15b = (rax == rbp) ? 1 : 0;
    cl = (rsi == r10) ? 1 : 0;
    r15b &= cl;
    *((rsp + 0xf)) = r15b;
    if (r15b != 0) {
        goto label_4;
    }
    r15d = 1;
    if (r13d > 1) {
        goto label_5;
    }
    goto label_2;
    do {
label_0:
        r15d++;
        if (r13d == r15d) {
            goto label_2;
        }
        rdx = *(r14);
label_5:
        r8 = rax;
        rax = fcn_00401f60 (rsp + 0x28, rsi, rax, rsi, r8, *((r14 + 8)));
        rsi = *((rsp + 0x28));
        if (rbp == rax) {
            if (*(rsp) == rsi) {
                goto label_4;
            }
        }
    } while (*(rbx) != rax);
    if (*((rbx + 8)) != rsi) {
        goto label_0;
    }
label_2:
    eax = *((rsp + 0xf));
    return rax;
label_3:
    if (rdi != rsi) {
        goto label_1;
    }
label_4:
    *((rsp + 0xf)) = 1;
    goto label_2;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x402340 */
#include <stdint.h>
 
uint64_t fcn_00402340 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = rsp;
    rax = fcn_00404710 (rdi, rsp, rdx);
    edi = 0x14;
    r8 = rax;
    r8 -= rbx;
    rbx = rdi;
    rbx -= r8;
    if (rbx >= rbp) {
        goto label_0;
    }
    rdi = imp.__libc_start_main;
    r8 -= 0x14;
    rcx = rbp + rdi;
    rdx = rdi;
    rcx += r8;
    do {
        *(rdx) = 0x30;
        rdx++;
    } while (rdx != rcx);
    r8 += rbp;
    r8 += rdi;
    do {
        memcpy (r8, rax, rbx);
        rdi = rax + rbx;
        *(0x00613308) = rdi;
        return rax;
label_0:
        r8 = imp.__libc_start_main;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4023d0 */
#include <stdint.h>
 
uint64_t fcn_004023d0 (void) {
    rbx = imp.__libc_start_main;
    rbx -= rsi;
    rax = fcn_00404690 (1, *(0x00613300), rbx);
    if (rax == rbx) {
        rax = imp.__libc_start_main;
        *(0x00613308) = rax;
        return rax;
    }
    edx = 5;
    rax = dcgettext (0, "write error");
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    rax = error (1, *(rax), 0x40f2e9);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x402440 */
#include <stdint.h>
 
int64_t fcn_00402440 (uint32_t arg1, uint32_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = rdx;
    if (rsi != 0) {
        if (*((rdi + 8)) != 0) {
            goto label_0;
        }
        *(rdi) = rdx;
        *((rdi + 8)) = rsi;
        return rax;
    }
    edx = 1;
    rsi = rax;
    void (*0x401d80)() ();
label_0:
    return assert_fail ("factors->plarge[1] == 0", "src/factor.c", 0x235, "factor_insert_large");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x402490 */
#include <stdint.h>
 
int64_t fcn_00402490 (uint32_t arg1, int64_t arg2, uint32_t arg3, uint32_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    if ((r8b & 1) == 0) {
        goto label_2;
    }
    rax = rdx;
    r9 = rsi;
    rax |= rsi;
    if (rax != 0) {
        goto label_3;
    }
    goto label_4;
    do {
        rax = r9;
        rdx >>= 1;
        rax <<= 0x3f;
        r9 >>= 1;
        rdx |= rax;
label_3:
    } while ((dl & 1) == 0);
label_1:
    rax = r9;
    rax |= rcx;
    if (rax == 0) {
        goto label_5;
    }
label_0:
    if (r9 > rcx) {
        goto label_6;
    }
    al = (r9 == rcx) ? 1 : 0;
    if (rdx > r8) {
        if (al != 0) {
            goto label_6;
        }
    }
    if (r9 >= rcx) {
        if (rdx >= r8) {
            goto label_7;
        }
        if (al == 0) {
            goto label_7;
        }
    }
    r8 -= rdx;
    rcx -= r9;
    do {
        rax = rcx;
        r8 >>= 1;
        rax <<= 0x3f;
        rcx >>= 1;
        r8 |= rax;
    } while ((r8b & 1) == 0);
    rax = r9;
    rax |= rcx;
    if (rax != 0) {
        goto label_0;
    }
label_5:
    *(rdi) = 0;
    rsi = rdx;
    rdi = r8;
    void (*0x401d20)() ();
label_6:
    rdx -= r8;
    r9 -= rcx;
    do {
        rax = r9;
        rdx >>= 1;
        rax <<= 0x3f;
        r9 >>= 1;
        rdx |= rax;
    } while ((dl & 1) == 0);
    goto label_1;
label_4:
    *(rdi) = rcx;
    rax = r8;
    return rax;
label_7:
    *(rdi) = r9;
    rax = rdx;
    return rax;
label_2:
    return assert_fail ("b0 & 1", "src/factor.c", 0x1e3, "gcd2_odd");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x402590 */
#include <stdint.h>
 
int64_t fcn_00402590 (int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4, uint32_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    if (rcx == 0) {
        goto label_0;
    }
    rax = rdx;
    if (rsi == 0) {
        goto label_1;
    }
    __asm ("bsr r10, rcx");
    __asm ("bsr rdx, rsi");
    r10d ^= 0x3f;
    edx ^= 0x3f;
    r9 = r8;
    r10d -= edx;
    rdx = rcx;
    ecx = r10d;
    rdx <<= cl;
    ecx = 0x40;
    ecx -= r10d;
    r9 >>= cl;
    ecx = r10d;
    r9 |= rdx;
    r8 <<= cl;
    if (r10d <= 0) {
        goto label_2;
    }
    edx = 0;
    do {
        if (r9 >= rsi) {
            if (r9 != rsi) {
                goto label_3;
            }
            if (rax < r8) {
                goto label_3;
            }
        }
        rax -= r8;
        rsi -= r9;
label_3:
        rcx = r9;
        r8 >>= 1;
        edx++;
        rcx <<= 0x3f;
        r9 >>= 1;
        r8 |= rcx;
    } while (r10d != edx);
label_2:
    *(rdi) = rsi;
    return rax;
label_1:
    *(rdi) = 0;
    return rax;
label_0:
    return assert_fail ("d1 != 0", "src/factor.c", 0x1a3, "mod2");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x402640 */
#include <stdint.h>
 
int64_t fcn_00402640 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
label_0:
    r8 = rsi;
    if (rdi == 0) {
        goto label_1;
    }
    rdx = rdi;
    r9d = 0x40;
    esi = 0;
    rcx = 0x44b82fa09b5a53;
    rdx >>= 9;
    rax = rdx;
    rdx:rax = rax * rcx;
    ecx = 0x3b9aca00;
    rdx >>= 0xb;
    rax = rdx * 0x3b9aca00;
    rdi -= rax;
    eax = 0;
    do {
        r10 = rcx;
        rax >>= 1;
        rsi += rsi;
        r10 <<= 0x3f;
        rcx >>= 1;
        rax |= r10;
        if (rcx >= rdi) {
            if (rcx != rdi) {
                goto label_2;
            }
            if (rax > r8) {
                goto label_2;
            }
        }
        rsi++;
        r8 -= rax;
        rdi -= rcx;
label_2:
        r9d--;
    } while (r9d != 0);
    *((rsp + 8)) = r8;
    fcn_00402640 (rdx, rsi, rdx);
    goto label_0;
    r8 = *((rsp + 8));
    esi = 9;
    rdi = r8;
    void (*0x402340)() ();
label_1:
    esi = 0;
    rdi = r8;
    return void (*0x402340)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4026f0 */
#include <stdint.h>
 
int64_t fcn_004026f0 (void) {
    rax = imp.__libc_start_main;
    rbp = rax + 1;
    *(rax) = dil;
    *(0x00613308) = rbp;
    if (dil != 0xa) {
        return rax;
    }
    eax = *(0x00613230);
    rbx = imp.__libc_start_main;
    if (eax == 0xffffffff) {
        goto label_1;
    }
label_0:
    if (eax != 0) {
        goto label_2;
    }
    rax = rbp;
    rax -= rbx;
    rbx += 0x200;
    if (rax > 0x1ff) {
        goto label_3;
    }
    return rax;
    do {
        rbx = rax;
label_3:
        rax = rbx - 1;
    } while (*((rbx - 1)) != 0xa);
    *(0x00613308) = rbx;
    rbp -= rbx;
    fcn_004023d0 ();
    rcx = imp.__libc_start_main;
    rax = memcpy (rcx, rbx, rbp);
    rbp += rax;
    *(0x00613308) = rbp;
    return rax;
label_2:
    void (*0x4023d0)() ();
label_1:
    eax = isatty (0);
    *(0x00613230) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4027d0 */
#include <stdint.h>
 
int64_t fcn_004027d0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
label_3:
    *(rsp) = rsi;
    *((rsp + 8)) = rdx;
    if (rdi <= 1) {
        goto label_7;
    }
    rax = *(rsp);
    r12 = rdi;
    rax++;
    *((rsp + 0x28)) = rax;
label_6:
    r13d = 0;
    rcx = r12;
    esi = 0x40;
    eax = 1;
    edx = 0;
    rdi = r13;
    do {
        r8 = rcx;
        rdx >>= 1;
        r8 <<= 0x3f;
        rcx >>= 1;
        rdx |= r8;
        if (rcx >= rax) {
            if (rcx != rax) {
                goto label_8;
            }
            if (rdx > rdi) {
                goto label_8;
            }
        }
        rdi -= rdx;
        rax -= rcx;
label_8:
        esi--;
    } while (esi != 0);
    rax = r12;
    ebp = 0;
    r13 = rdi;
    rax -= rdi;
    rax = rdi + rdi;
    bpl = (rax > rdi) ? 1 : 0;
    rax -= r12;
    rbp = -rbp;
    rbp &= r12;
    rbp += rax;
    if (r12 <= *(rsp)) {
        goto label_9;
    }
    rbx = rbp;
    r15 = rbp;
    ecx = 1;
    r14d = 1;
label_2:
    rax = r12;
    r10 = r12;
    r11 = rcx;
    rax >>= 1;
    eax &= 0x7f;
    eax = *((rax + 0x40c220));
    rdx = rax + rax;
    rax *= rax;
    rax *= r12;
    rdx -= rax;
    rax = rdx + rdx;
    rdx *= rdx;
    rdx *= r12;
    rax -= rdx;
    r8 = rax + rax;
    rax *= rax;
    rax *= r12;
    r8 -= rax;
    rax = *(rsp);
    r10 -= rax;
    rax -= r12;
    r9 = rax;
    do {
label_0:
        rax = rbp;
        rdx:rax = rax * rbp;
        rcx = rdx;
        rax *= r8;
        rsi = rcx;
        rdx:rax = rax * r12;
        rsi -= rdx;
        rax = rsi + r12;
        if (rcx < rdx) {
            rsi = rax;
        }
        rax = r15;
        rbp -= rbp;
        rsi += r9;
        rbp &= r12;
        rbp += rsi;
        rcx -= rcx;
        rax -= rbp;
        rcx &= r12;
        rcx += rax;
        rax = r13;
        rdx:rax = rax * rcx;
        rcx = rdx;
        rax *= r8;
        r13 = rcx;
        rdx:rax = rax * r12;
        r13 -= rdx;
        rax = r13 + r12;
        if (rcx < rdx) {
            r13 = rax;
        }
        rax = r14;
        eax &= 0x1f;
        if (rax == 1) {
            goto label_10;
        }
label_1:
        r14--;
    } while (r14 != 0);
    rcx = r11 + r11;
    if (r11 == 0) {
        goto label_11;
    }
    rax = rbp;
    do {
        rdx:rax = rax * rax;
        rsi = rdx;
        rax *= r8;
        rdi = rsi;
        rdx:rax = rax * r12;
        rdi -= rdx;
        rax = rdi + r12;
        if (rsi < rdx) {
            rdi = rax;
        }
        rax -= rax;
        rdi += r9;
        r14++;
        rax &= r12;
        rax += rdi;
    } while (r11 != r14);
    r15 = rbp;
    rbx = rax;
    r11 = rcx;
    goto label_0;
label_10:
    rax = fcn_00401d20 (r13, r12);
    if (rax != 1) {
        goto label_12;
    }
    rbx = rbp;
    goto label_1;
    do {
label_12:
        rax = rbx;
        rdx:rax = rax * rbx;
        rcx = rdx;
        rax *= r8;
        rsi = rcx;
        rdx:rax = rax * r12;
        rsi -= rdx;
        rax = rsi + r12;
        if (rcx < rdx) {
            rsi = rax;
        }
        rax -= rax;
        rsi += r9;
        rax &= r12;
        rbx = rax + rsi;
        rax = r15;
        rdi -= rdi;
        rax -= rbx;
        rdi &= r12;
        rdi += rax;
        rax = fcn_00401d20 (rdi, r12);
    } while (rax == 1);
    rcx = r11;
    r11 = rax;
    if (r12 == rax) {
        goto label_13;
    }
    rax = r12;
    edx = 0;
    rax = rdx:rax / r11;
    rdx = rdx:rax % r11;
    r8 = rax;
    r12 = rax;
    if (r11 <= 1) {
        goto label_14;
    }
    if (r11 > 0x17ded78) {
        rdi = r11;
        *((rsp + 0x18)) = rcx;
        *((rsp + 0x10)) = r11;
        *((rsp + 0x20)) = rax;
        al = fcn_00403840 (rdi);
        r11 = *((rsp + 0x10));
        rcx = *((rsp + 0x18));
        r8 = *((rsp + 0x20));
        if (al == 0) {
            goto label_14;
        }
    }
    edx = 1;
    *((rsp + 0x18)) = r8;
    *((rsp + 0x10)) = rcx;
    fcn_00401d80 (*((rsp + 8)), r11);
    r8 = *((rsp + 0x18));
    rcx = *((rsp + 0x10));
    if (r8 <= 1) {
        goto label_15;
    }
label_4:
    if (r8 <= 0x17ded78) {
        goto label_16;
    }
    rdi = r8;
    *((rsp + 0x18)) = rcx;
    *((rsp + 0x10)) = r8;
    al = fcn_00403840 (rdi);
    r8 = *((rsp + 0x10));
    rcx = *((rsp + 0x18));
    if (al != 0) {
        goto label_16;
    }
    rax = rbp;
    edx = 0;
    rax = rdx:rax / r8;
    rdx = rdx:rax % r8;
    rax = r15;
    edx = 0;
    rax = rdx:rax / r8;
    rdx = rdx:rax % r8;
    rax = rbx;
    r15 = rdx;
    edx = 0;
    rax = rdx:rax / r8;
    rdx = rdx:rax % r8;
    rbx = rdx;
label_5:
    if (*(rsp) < r8) {
        goto label_2;
    }
label_9:
    assert_fail ("a < n", "src/factor.c", 0x5c8, "factor_using_pollard_rho");
label_11:
    r14 = r11;
    rbx = rbp;
    r11 = rcx;
    r15 = rbp;
    goto label_0;
label_14:
    *((rsp + 0x18)) = r8;
    *((rsp + 0x10)) = rcx;
    fcn_004027d0 (r11, *((rsp + 0x28)), *((rsp + 8)));
    goto label_3;
    r8 = *((rsp + 0x18));
    rcx = *((rsp + 0x10));
    if (r8 > 1) {
        goto label_4;
    }
    if (r8 == 1) {
label_15:
        goto label_17;
    }
    ebx = 0;
    r15d = 0;
    ebp = 0;
    goto label_5;
label_16:
    rdi = *((rsp + 8));
    edx = 1;
    rsi = r8;
    void (*0x401d80)() ();
label_13:
    if (r12 > 1) {
        goto label_6;
    }
label_7:
    assert_fail ("(1) < (n)", "src/factor.c", 0x5c2, "factor_using_pollard_rho");
label_17:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x402bf0 */
#include <stdint.h>
 
int64_t fcn_00402bf0 (uint32_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4) {
    int64_t var_10h_2;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    uint32_t var_30h;
    int64_t var_38h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    uint32_t var_60h;
    int64_t var_78h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
label_2:
    r12 = rsi;
    *((rsp + 0x30)) = rcx;
    rcx -= rcx;
    ecx &= 0x40;
    *((rsp + 0x18)) = rdx;
    edx = 0;
    rcx += 0x3f;
    dl = (rdi < 2) ? 1 : 0;
    rax -= rax;
    rax++;
    do {
        rsi = rdx;
        rax += rax;
        rdx += rdx;
        rsi >>= 0x3f;
        rax |= rsi;
        if (rbp >= rax) {
            if (rbp != rax) {
                goto label_8;
            }
            if (rdx < r12) {
                goto label_8;
            }
        }
        rdx -= r12;
        rax -= rbp;
label_8:
        rcx--;
    } while (rcx != -1);
    rbx = rdx;
    *(rsp) = rax;
    *((rsp + 8)) = rdx;
    rdx += rbx;
    rax += rax;
    *((rsp + 0x48)) = rax;
    rbx = rdx;
    rsi = rax;
    if (rax <= rbp) {
        if (rax != rbp) {
            goto label_9;
        }
        if (r12 > rdx) {
            goto label_9;
        }
    }
    rdx -= r12;
    rax -= rbp;
    *((rsp + 0x48)) = rax;
    rbx = rdx;
    rsi = rax;
label_9:
    *((rsp + 0x50)) = rsi;
    *((rsp + 0x58)) = rsi;
    if (r12 == 1) {
        if (rbp == 0) {
            goto label_7;
        }
    }
    *((rsp + 0x10)) = rbx;
    r15 = rbx;
    r13d = 1;
    *((rsp + 0x20)) = 1;
label_3:
    rax = r12;
    rax >>= 1;
    eax &= 0x7f;
    eax = *((rax + 0x40c220));
    rdx = rax + rax;
    rax *= rax;
    rax *= r12;
    rdx -= rax;
    rax = rdx + rdx;
    rdx *= rdx;
    rdx *= r12;
    rax -= rdx;
    r14 = rax + rax;
    rax *= rax;
    rax *= r12;
    r14 -= rax;
    do {
label_0:
        rdx = rbx;
        rax = fcn_00401f60 (rsp + 0x78, rsi, rdx, rsi, rbx, rbp);
        rdx = *((rsp + 0x78));
        rax += *((rsp + 0x28));
        rdx += 0;
        *((rsp + 0x58)) = rdx;
        rbx = rax;
        rsi = rdx;
        if (rbp >= rdx) {
            if (rbp != rdx) {
                goto label_10;
            }
            if (r12 > rax) {
                goto label_10;
            }
        }
        rax -= r12;
        rdx -= rbp;
        *((rsp + 0x48)) = rdx;
        rbx = rax;
        rsi = rdx;
label_10:
        rcx = *((rsp + 0x50));
        r8 = *((rsp + 0x10));
        r8 -= rbx;
        rcx -= rsi;
        if (rcx < 0) {
            r8 += r12;
            rcx += rbp;
        }
        rax = fcn_00401f60 (rsp + 0x78, *((rsp + 0x10)), *((rsp + 0x18)), rcx, r8, rbp);
        *((rsp + 0x18)) = rax;
        rax = *((rsp + 0x78));
        *((rsp + 0x10)) = rax;
        rax = r13;
        eax &= 0x1f;
        if (rax == 1) {
            goto label_11;
        }
        rsi = *((rsp + 0x48));
label_1:
        r13--;
    } while (r13 != 0);
    rax = *((rsp + 0x20));
    *((rsp + 0x50)) = rsi;
    r15 = rbx;
    rdi = rax + rax;
    *((rsp + 0x10)) = rdi;
    if (rax == 0) {
        goto label_12;
    }
    r15 = r13;
    r13 = *((rsp + 0x18));
    *((rsp + 0x28)) = rbx;
    rbx = rax;
    do {
        rax = fcn_00401f60 (rsp + 0x78, rsi, r15, rsi, rdx, rbp);
        rcx = *((rsp + 0x78));
        rax += r13;
        rcx += 0;
        *((rsp + 0x58)) = rcx;
        rdx = rax;
        rsi = rcx;
        if (rbp >= rcx) {
            if (rbp != rcx) {
                goto label_13;
            }
            if (r12 > rax) {
                goto label_13;
            }
        }
        rax -= r12;
        rcx -= rbp;
        *((rsp + 0x48)) = rcx;
        rdx = rax;
        rsi = rcx;
label_13:
        r15++;
    } while (rbx != r15);
    rbx = *((rsp + 0x28));
    r15 = rdx;
label_12:
    rax = *((rsp + 0x10));
    r13 = *((rsp + 0x20));
    *((rsp + 0x10)) = rbx;
    rbx = r15;
    *((rsp + 0x58)) = rsi;
    *((rsp + 0x20)) = rax;
    goto label_0;
label_11:
    rax = fcn_00402490 (rsp + 0x60, *(rsp), *((rsp + 8)), rbp, r12);
    if (*((rsp + 0x60)) == 0) {
        if (rax != 1) {
            goto label_14;
        }
        rsi = *((rsp + 0x48));
        r15 = rbx;
        *((rsp + 0x58)) = rsi;
        goto label_1;
    }
label_14:
    *((rsp + 0x28)) = r13;
    r13 = *((rsp + 0x18));
    *((rsp + 0x38)) = rbx;
    rbx = r14;
    r14 = *((rsp + 0x10));
    while (rdi == 0) {
        if (rax != 1) {
            goto label_15;
        }
        rdx = r15;
        rax = fcn_00401f60 (rsp + 0x78, *((rsp + 0x58)), rdx, rsi, r15, rbp);
        rdx = *((rsp + 0x78));
        rax += r13;
        rdx += 0;
        *((rsp + 0x68)) = rdx;
        r15 = rax;
        rcx = rdx;
        if (rbp >= rdx) {
            if (rbp != rdx) {
                goto label_16;
            }
            if (r12 > rax) {
                goto label_16;
            }
        }
        rax -= r12;
        rdx -= rbp;
        *((rsp + 0x58)) = rdx;
        r15 = rax;
        rcx = rdx;
label_16:
        rsi = *((rsp + 0x50));
        rdx = r14;
        rdx -= r15;
        rsi -= rcx;
        if (rsi < 0) {
            rdx += r12;
            rsi += rbp;
        }
        rax = fcn_00402490 (rsp + 0x60, rsi, rdx, rbp, r12);
        rdi = *((rsp + 0x60));
    }
    r8 = rax;
    *((rsp + 0x18)) = r13;
    if (r12 == rax) {
        if (rbp == rdi) {
            goto label_17;
        }
    }
    rax = r8;
    rsi = r8;
    *(rsp) = r8;
    rax >>= 1;
    eax &= 0x7f;
    eax = *((rax + 0x40c220));
    rdx = rax + rax;
    rax *= rax;
    rax *= r8;
    rdx -= rax;
    rax = rdx + rdx;
    rdx *= rdx;
    rdx *= r8;
    rax -= rdx;
    rax *= rax;
    rax *= r8;
    rdx -= rax;
    r12 *= rdx;
    al = fcn_00404050 (rdi, rsi, rax + rax);
    r8 = *(rsp);
    if (al != 0) {
        goto label_18;
    }
    rax = *((rsp + 0x18));
    fcn_00402bf0 (*((rsp + 0x60)), r8, rax + 1, *((rsp + 0x30)));
    goto label_2;
    do {
label_6:
        if (r12 <= 1) {
            goto label_19;
        }
        if (r12 > 0x17ded78) {
            al = fcn_00403840 (r12);
            if (al == 0) {
                goto label_19;
            }
        }
        edx = 1;
        rax = fcn_00401d80 (*((rsp + 0x30)), r12);
label_7:
        return rax;
label_15:
        r8 = rax;
        rax >>= 1;
        *((rsp + 0x18)) = r13;
        rbx = *((rsp + 0x38));
        eax &= 0x7f;
        *((rsp + 0x10)) = r14;
        r13 = *((rsp + 0x28));
        eax = *((rax + 0x40c220));
        rdx = rax + rax;
        rax *= rax;
        rax *= r8;
        rdx -= rax;
        rax = rdx + rdx;
        rdx *= rdx;
        rdx *= r8;
        rax -= rdx;
        rcx = rax + rax;
        rax *= rax;
        rax *= r8;
        rcx -= rax;
        r12 *= rcx;
        if (rbp < r8) {
            goto label_20;
        }
        rax = r12;
        rdx:rax = rax * r8;
        rbp -= rdx;
        rbp *= rcx;
label_5:
        if (r8 <= 1) {
            goto label_21;
        }
        if (r8 > 0x17ded78) {
            rdi = r8;
            *((rsp + 0x28)) = r8;
            al = fcn_00403840 (rdi);
            r8 = *((rsp + 0x28));
            if (al == 0) {
                goto label_21;
            }
        }
        edx = 1;
        fcn_00401d80 (*((rsp + 0x30)), r8);
label_4:
    } while (rbp == 0);
    al = fcn_00404050 (rbp, r12, rdx);
    if (al == 0) {
        rsi = *((rsp + 0x48));
        rax = fcn_00402590 (rsp + 0x48, *(rsi), rbx, rbp, r12);
        rsi = *((rsp + 0x50));
        rbx = rax;
        rax = fcn_00402590 (rsp + 0x50, *(rsi), *((rsp + 0x10)), rbp, r12);
        rsi = *((rsp + 0x58));
        *((rsp + 0x10)) = rax;
        rax = fcn_00402590 (rsp + 0x58, *(rsi), r15, rbp, r12);
        rsi = *((rsp + 0x48));
        r15 = rax;
        goto label_3;
label_21:
        rax = *((rsp + 0x18));
        fcn_004027d0 (r8, rax + 1, *((rsp + 0x30)));
        goto label_4;
label_20:
        ebp = 0;
        goto label_5;
label_19:
        fcn_004027d0 (r12, *((rsp + 0x18)), *((rsp + 0x30)));
        return rax;
    }
    fcn_00402440 (*((rsp + 0x30)), rbp, r12);
    return rax;
label_18:
    fcn_00402440 (*((rsp + 0x30)), *((rsp + 0x60)), r8);
    goto label_6;
label_17:
    rdx++;
    fcn_00402bf0 (rbp, r12, r13, *((rsp + 0x30)));
    goto label_2;
    goto label_7;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x403210 */
#include <stdint.h>
 
int64_t fcn_00403210 (uint32_t arg1, uint32_t arg2, uint32_t arg3, int64_t arg4) {
    uint32_t var_8h;
    uint32_t var_10h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rsi;
    *((rdx + 0xfa)) = 0;
    *((rsp + 8)) = rdi;
    *((rsp + 0x10)) = rdx;
    *((rdx + 8)) = 0;
    if (rdi == 0) {
        if (rsi > 1) {
            goto label_14;
        }
label_7:
        return;
    }
label_14:
    if ((r14b & 1) != 0) {
        goto label_15;
    }
    if (r14 != 0) {
        goto label_16;
    }
    rax = *((rsp + 8));
    __asm ("bsf rcx, rax");
    rax >>= cl;
    edx = rcx + 0x40;
    r14 = rax;
    fcn_00401d80 (*((rsp + 0x10)), 2);
    *((rsp + 8)) = 0;
    do {
        r13d = 0x1a;
        r12d = 3;
        ebp = 0;
        ebx = 0;
        r15 = 0x5555555555555555;
        r8 = 0xaaaaaaaaaaaaaaab;
        goto label_17;
label_16:
        rdi = *((rsp + 8));
        ecx = 0x40;
        __asm ("bsf rdx, r14");
        rax = rdi;
        ecx -= edx;
        rax <<= cl;
        ecx = edx;
        rdi >>= cl;
        r14 >>= cl;
        *((rsp + 8)) = rdi;
        r14 |= rax;
        fcn_00401d80 (*((rsp + 0x10)), 2);
label_15:
    } while (*((rsp + 8)) == 0);
    ebx = 1;
    r13d = 2;
    r15 = 0xaaaaaaaaaaaaaaab;
    r12d = 3;
    while (*((rsp + 8)) < rdx) {
label_0:
        r12 += r13;
        rbx++;
        if (*((rsp + 8)) == 0) {
            goto label_18;
        }
        if (ebp > 0x29b) {
            goto label_18;
        }
        rax = rbx;
        r13d = *((rbx + 0x40efa0));
        rax <<= 4;
        r15 = *((rax + 0x40c290));
        rsi = *((rax + 0x40c290));
        rsi *= r14;
        rax = rsi;
        rdx:rax = rax * r12;
    }
    rax = *((rsp + 8));
    rax -= rdx;
    rdx = rbx;
    rdx <<= 4;
    rax *= r15;
    rbp = *((rdx + 0x40c298));
    if (rax > rbp) {
        goto label_0;
    }
label_1:
    r14 = rsi;
    edx = 1;
    *((rsp + 8)) = rax;
    fcn_00401d80 (*((rsp + 0x10)), r12);
    rsi = r15;
    rsi *= r14;
    rax = rsi;
    rdx:rax = rax * r12;
    if (rdx > *((rsp + 8))) {
        goto label_0;
    }
    rax = *((rsp + 8));
    rax -= rdx;
    rax *= r15;
    if (rax > rbp) {
        goto label_0;
    }
    goto label_1;
label_18:
    if (ebp <= 0x29b) {
        goto label_19;
    }
    goto label_20;
    do {
        rdx = *((rbx + 0x10));
        rdx *= r14;
        if (rdx <= *((rbx + 0x18))) {
            goto label_21;
        }
label_2:
        rdx = *((rbx + 0x20));
        rdx *= r14;
        if (rdx <= *((rbx + 0x28))) {
            goto label_22;
        }
label_3:
        rdx = *((rbx + 0x30));
        rdx *= r14;
        if (*((rbx + 0x38)) >= rdx) {
            goto label_23;
        }
label_4:
        rdx = *((rbx + 0x40));
        rdx *= r14;
        if (*((rbx + 0x48)) >= rdx) {
            goto label_24;
        }
label_5:
        rdx = *((rbx + 0x50));
        rdx *= r14;
        if (rdx <= *((rbx + 0x58))) {
            goto label_25;
        }
label_12:
        rdx = *((rbx + 0x60));
        rdx *= r14;
        if (*((rbx + 0x68)) >= rdx) {
            goto label_26;
        }
label_10:
        rdx = *((rbx + 0x70));
        rdx *= r14;
        if (rdx <= *((rbx + 0x78))) {
            goto label_27;
        }
label_8:
        r12 += r13;
        rdx = r12;
        rdx *= r12;
        if (r14 < rdx) {
            goto label_20;
        }
        ebp += 8;
        if (ebp > 0x29b) {
            goto label_20;
        }
label_19:
        ebx = ebp;
        rdx = rbx;
        r13d = *((rbx + 0x40ece0));
        rdx <<= 4;
        r8 = *((rdx + 0x40c2a0));
        r15 = *((rdx + str.UUUUUUUU));
label_17:
        rdx = r14;
        rbx <<= 4;
        rdx *= r8;
        rbx += 0x40c2a0;
    } while (rdx > r15);
    do {
        r14 = rdx;
        edx = 1;
        *((rsp + 0x18)) = r8;
        fcn_00401d80 (*((rsp + 0x10)), r12);
        r8 = *((rsp + 0x18));
        rdx = r14;
        rdx *= r8;
    } while (rdx <= r15);
    rdx = *((rbx + 0x10));
    rdx *= r14;
    if (rdx > *((rbx + 0x18))) {
        goto label_2;
    }
label_21:
    esi = rbp + 1;
    r15d = *((rsi + 0x40efa0));
    r15 += r12;
    do {
        r14 = rdx;
        edx = 1;
        fcn_00401d80 (*((rsp + 0x10)), r15);
        rdx = *((rbx + 0x10));
        rdx *= r14;
    } while (rdx <= *((rbx + 0x18)));
    rdx = *((rbx + 0x20));
    rdx *= r14;
    if (rdx > *((rbx + 0x28))) {
        goto label_3;
    }
label_22:
    esi = rbp + 1;
    r15d = *((rsi + 0x40efa0));
    esi = rbp + 2;
    esi = *((rsi + 0x40efa0));
    r15 += rsi;
    r15 += r12;
    do {
        r14 = rdx;
        edx = 1;
        fcn_00401d80 (*((rsp + 0x10)), r15);
        rdx = *((rbx + 0x20));
        rdx *= r14;
    } while (rdx <= *((rbx + 0x28)));
    rdx = *((rbx + 0x30));
    rdx *= r14;
    if (*((rbx + 0x38)) < rdx) {
        goto label_4;
    }
label_23:
    esi = rbp + 1;
    r15d = *((rsi + 0x40efa0));
    esi = rbp + 3;
    esi = *((rsi + 0x40efa0));
    r15 += rsi;
    esi = rbp + 2;
    esi = *((rsi + 0x40efa0));
    r15 += r12;
    r15 += rsi;
    do {
        r14 = rdx;
        edx = 1;
        fcn_00401d80 (*((rsp + 0x10)), r15);
        rdx = *((rbx + 0x30));
        rdx *= r14;
    } while (rdx <= *((rbx + 0x38)));
    rdx = *((rbx + 0x40));
    rdx *= r14;
    if (*((rbx + 0x48)) < rdx) {
        goto label_5;
    }
label_24:
    r14 = rdx;
    r15d = rbp + 1;
    r8d = rbp + 5;
label_6:
    edx = r15d;
    rsi = r12;
    do {
        edi = edx;
        edx++;
        edi = *((rdi + 0x40efa0));
        rsi += rdi;
    } while (r8d != edx);
    edx = 1;
    *((rsp + 0x18)) = r8d;
    fcn_00401d80 (*((rsp + 0x10)), rsi);
    rdx = *((rbx + 0x40));
    r8d = *((rsp + 0x18));
    rdx *= r14;
    if (rdx > *((rbx + 0x48))) {
        goto label_5;
    }
    r14 = rdx;
    goto label_6;
label_20:
    if (*((rsp + 8)) != 0) {
        goto label_28;
    }
    if (r14 <= 1) {
        goto label_7;
    }
    al = fcn_00404050 (0, r14, rdx);
    if (al != 0) {
        goto label_29;
    }
    rdx = *((rsp + 0x10));
    rdi = r14;
    esi = 1;
    void (*0x4027d0)() ();
label_27:
    r14 = rdx;
    r15d = rbp + 1;
    r8d = rbp + 8;
label_9:
    edx = r15d;
    rsi = r12;
    do {
        edi = edx;
        edx++;
        edi = *((rdi + 0x40efa0));
        rsi += rdi;
    } while (r8d != edx);
    edx = 1;
    *((rsp + 0x18)) = r8d;
    fcn_00401d80 (*((rsp + 0x10)), rsi);
    rdx = *((rbx + 0x70));
    r8d = *((rsp + 0x18));
    rdx *= r14;
    if (rdx > *((rbx + 0x78))) {
        goto label_8;
    }
    r14 = rdx;
    goto label_9;
label_26:
    r14 = rdx;
    r15d = rbp + 1;
    r8d = rbp + 7;
label_11:
    edx = r15d;
    rsi = r12;
    do {
        edi = edx;
        edx++;
        edi = *((rdi + 0x40efa0));
        rsi += rdi;
    } while (r8d != edx);
    edx = 1;
    *((rsp + 0x18)) = r8d;
    fcn_00401d80 (*((rsp + 0x10)), rsi);
    rdx = *((rbx + 0x60));
    r8d = *((rsp + 0x18));
    rdx *= r14;
    if (rdx > *((rbx + 0x68))) {
        goto label_10;
    }
    r14 = rdx;
    goto label_11;
label_25:
    r14 = rdx;
    r15d = rbp + 1;
    r8d = rbp + 6;
label_13:
    edx = r15d;
    rsi = r12;
    do {
        edi = edx;
        edx++;
        edi = *((rdi + 0x40efa0));
        rsi += rdi;
    } while (r8d != edx);
    edx = 1;
    *((rsp + 0x18)) = r8d;
    fcn_00401d80 (*((rsp + 0x10)), rsi);
    rdx = *((rbx + 0x50));
    r8d = *((rsp + 0x18));
    rdx *= r14;
    if (rdx > *((rbx + 0x58))) {
        goto label_12;
    }
    r14 = rdx;
    goto label_13;
    do {
label_29:
        rsi = *((rsp + 8));
        rdi = *((rsp + 0x10));
        rdx = r14;
        void (*0x402440)() ();
label_28:
        al = fcn_00404050 (*((rsp + 8)), r14, rdx);
    } while (al != 0);
    rcx = *((rsp + 0x10));
    rdi = *((rsp + 8));
    rsi = r14;
    edx = 1;
    return void (*0x402bf0)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x403840 */
#include <stdint.h>
 
int64_t fcn_00403840 (int64_t arg1) {
    int64_t var_8h;
    uint32_t var_10h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_2fh;
    int64_t var_30h;
    int64_t var_40h;
    int64_t var_12ah;
    rdi = arg1;
    r14 = rdi - 1;
    rbx = rdi;
    *((rsp + 8)) = r14;
    if ((r14b & 1) != 0) {
        goto label_5;
    }
    eax = 0;
    do {
        r14 >>= 1;
        eax++;
    } while ((r14b & 1) == 0);
    *((rsp + 0x1c)) = eax;
label_4:
    rax = rbx;
    rcx = rbx;
    esi = 0x40;
    r15d = 0;
    rax >>= 1;
    eax &= 0x7f;
    eax = *((rax + 0x40c220));
    rdx = rax + rax;
    rax *= rax;
    rax *= rbx;
    rdx -= rax;
    rax = rdx + rdx;
    rdx *= rdx;
    rdx *= rbx;
    rax -= rdx;
    edx = 0;
    r13 = rax + rax;
    rax *= rax;
    rax *= rbx;
    r13 -= rax;
    eax = 1;
    do {
        rdi = rcx;
        rdx >>= 1;
        rdi <<= 0x3f;
        rcx >>= 1;
        rdx |= rdi;
        if (rcx >= rax) {
            if (rcx != rax) {
                goto label_6;
            }
            if (rdx > r15) {
                goto label_6;
            }
        }
        r15 -= rdx;
        rax -= rcx;
label_6:
        esi--;
    } while (esi != 0);
    rax = rbx;
    r10d = 0;
    rax -= r15;
    rcx = r14;
    r10b = (rax > r15) ? 1 : 0;
    r10 = -r10;
    rax = r10;
    rax &= rbx;
    r10 -= rbx;
    rbp = rax + r10;
    al = fcn_00401ed0 (rbx, r13, rbp, r15 + r15, *((rsp + 0x1c)), r15);
    *((rsp + 0x2f)) = al;
    if (al == 0) {
        goto label_7;
    }
    r12d = 0x40efa0;
    fcn_00403210 (0, *((rsp + 8)), rsp + 0x30, rcx);
    eax = *((rsp + 0x12a));
    *((rsp + 0x20)) = r14;
    *((rsp + 0x28)) = eax;
    eax--;
    rax = rsp + rax*8 + 0x40;
    *((rsp + 0x10)) = rax;
    eax = 2;
    r14 = rax;
label_0:
    eax = *((rsp + 0x28));
    if (eax == 0) {
        goto label_3;
    }
    r11 = rsp + 0x40;
    do {
        rax = *((rsp + 8));
        edx = 0;
        r8 = r15;
        rax = *(rdx:rax) / r11;
        rdx = *(rdx:rax) % r11;
        rax = fcn_00401e60 (rbp, rax, rbx, r13);
        if (*((rsp + 0x10)) == r11) {
            goto label_8;
        }
        r11 += 8;
    } while (rax != r15);
label_1:
    eax = *(r12);
    r14 += rax;
    rax = r15;
    rdx:rax = rax * r14;
    if (rdx != 0) {
        goto label_9;
    }
    edx = 0;
    rax = rdx:rax / rbx;
    rdx = rdx:rax % rbx;
label_2:
    al = fcn_00401ed0 (rbx, r13, rbp, *((rsp + 0x20)), *((rsp + 0x1c)), r15);
    if (al == 0) {
        goto label_7;
    }
    r12++;
    eax = 0x40f23c;
    if (rax != r12) {
        goto label_0;
    }
    edx = 5;
    rax = dcgettext (0, "Lucas prime test failure.  This should not happen");
    eax = 0;
    error (0, 0, rax);
    rax = abort ();
label_8:
    if (rax == r15) {
        goto label_1;
    }
label_3:
    eax = *((rsp + 0x2f));
    return rax;
label_9:
    if (rbx <= rdx) {
        goto label_10;
    }
    rsi = rbx;
    eax = 0x40;
    ecx = 0;
    do {
        rdi = rsi;
        rcx >>= 1;
        rdi <<= 0x3f;
        rsi >>= 1;
        rcx |= rdi;
        if (rsi >= rdx) {
            if (rsi != rdx) {
                goto label_11;
            }
            if (rcx > rbp) {
                goto label_11;
            }
        }
        rbp -= rcx;
        rdx -= rsi;
label_11:
        eax--;
    } while (eax != 0);
    goto label_2;
label_7:
    *((rsp + 0x2f)) = 0;
    goto label_3;
label_5:
    r14 = *((rsp + 8));
    *((rsp + 0x1c)) = 0;
    goto label_4;
label_10:
    return assert_fail ("(s1) < (n)", "src/factor.c", 0x4f4, "prime_p");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x404050 */
#include <stdint.h>
 
int64_t fcn_00404050 (uint32_t arg1, uint32_t arg2, int64_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    uint32_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_47h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    uint32_t var_70h;
    uint32_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    uint32_t var_a8h;
    int64_t var_b0h;
    uint32_t var_b8h;
    uint32_t var_1aah;
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
label_9:
    eax = 0;
    r15 = rsi;
    rbx = rdi;
    al = (rsi == 0) ? 1 : 0;
    rdi -= rax;
    rax = rdi;
    *((rsp + 0x20)) = rdi;
    rdi = rsi;
    rdi--;
    *((rsp + 0x18)) = rdi;
    if (rdi != 0) {
        goto label_10;
    }
    __asm ("bsf rcx, rax");
    *((rsp + 0x58)) = 0;
    rax >>= cl;
    *((rsp + 0x50)) = rax;
    eax = rcx + 0x40;
    *((rsp + 0x40)) = eax;
label_7:
    rax = r15;
    rax >>= 1;
    eax &= 0x7f;
    eax = *((rax + 0x40c220));
    rdx = rax + rax;
    rax *= rax;
    rax *= r15;
    rdx -= rax;
    rax = rdx + rdx;
    rdx *= rdx;
    rdx *= r15;
    rax -= rdx;
    r13 = rax + rax;
    rax *= rax;
    rax *= r15;
    r13 -= rax;
    rcx -= rcx;
    edx = 0;
    ecx &= 0x40;
    rcx += 0x3f;
    dl = (rbx < 2) ? 1 : 0;
    rax -= rax;
    rax++;
    do {
        rsi = rdx;
        rax += rax;
        rdx += rdx;
        rsi >>= 0x3f;
        rax |= rsi;
        if (rbx >= rax) {
            if (rbx != rax) {
                goto label_11;
            }
            if (r15 > rdx) {
                goto label_11;
            }
        }
        rdx -= r15;
        rax -= rbx;
label_11:
        rcx--;
    } while (rcx != -1);
    *((rsp + 0x78)) = rax;
    rdi = rdx;
    *((rsp + 0x70)) = rdx;
    rdx += rdi;
    rax += rax;
    *((rsp + 0x68)) = rax;
    *((rsp + 0x60)) = rdx;
    if (rbx < rax) {
        goto label_12;
    }
    if (rbx == rax) {
        goto label_13;
    }
label_6:
    *((rsp + 0x80)) = r15;
    *((rsp + 0x88)) = rbx;
    al = fcn_00402240 (rsp + 0x80, r13, rsp + 0x60, rsp + 0x50, *((rsp + 0x40)), rsp + 0x70);
    *((rsp + 0x47)) = al;
    if (al == 0) {
        goto label_8;
    }
    rbp = *((rsp + 0x18));
    r14 = *((rsp + 0x20));
    r12d = 0x40efa0;
    fcn_00403210 (r14, rbp, rsp + 0xb0, rcx);
    rax = rbp;
    rdx = r14;
    rdi = r14;
    rax >>= 1;
    rdx <<= 0x3f;
    rdx |= rax;
    rdi >>= 1;
    rax = rsp + 0xa8;
    *((rsp + 8)) = rdx;
    *((rsp + 0x10)) = rdi;
    *((rsp + 0x48)) = rax;
label_2:
    if (*((rsp + 0xb8)) != 0) {
        goto label_14;
    }
label_3:
    if (*((rsp + 0x1aa)) == 0) {
        goto label_8;
    }
label_4:
    r14d = 1;
    rax = rsp + 0xa8;
    *((rsp + 0x28)) = rbp;
    *((rsp + 0x30)) = r12;
    r12 = r14;
    r14 = *((rsp + 0x20));
    *((rsp + 0x38)) = rbx;
    rbx = *((rsp + 0x18));
    while (rdx != 2) {
        rax = rdx;
        rsi = rbx;
        rax >>= 1;
        eax &= 0x7f;
        eax = *((rax + 0x40c220));
        rcx = rax + rax;
        rax *= rax;
        rax *= rdx;
        rcx -= rax;
        rax = rcx + rcx;
        rcx *= rcx;
        rcx *= rdx;
        rax -= rcx;
        rcx = rax + rax;
        rax *= rax;
        rax *= rdx;
        rcx -= rax;
        rsi *= rcx;
        if (r14 < rdx) {
            goto label_15;
        }
        rax = rsi;
        *((rsp + 0x90)) = rsi;
        rdx:rax = rax * rdx;
        rax = r14;
        rax -= rdx;
        rcx *= rax;
        *((rsp + 0x98)) = rcx;
label_0:
        rax = fcn_004020d0 (rbp, rsp + 0x60, rsp + 0x90, rsp + 0x80, r13, rsp + 0x70);
        *((rsp + 0xa0)) = rax;
        if (rax == *((rsp + 0x70))) {
            goto label_16;
        }
        eax = *((rsp + 0x1aa));
        if (eax <= r12d) {
            goto label_8;
        }
label_1:
        r12++;
        rdx = *((rsp + r12*8 + 0xb8));
    }
    rax = *((rsp + 8));
    *((rsp + 0x90)) = rax;
    rax = *((rsp + 0x10));
    *((rsp + 0x98)) = rax;
    goto label_0;
label_16:
    eax = *((rsp + 0x1aa));
    rcx = *((rsp + 0xa8));
    rdx = *((rsp + 0x78));
    if (eax <= r12d) {
        goto label_17;
    }
    if (rcx != rdx) {
        goto label_1;
    }
    rbp = *((rsp + 0x28));
    r12 = *((rsp + 0x30));
    rbx = *((rsp + 0x38));
label_5:
    eax = *(r12);
    rbp += rax;
    eax = 0;
    rdx = rax;
    if (rbx <= rbp) {
        rdx = rbp;
    }
    rcx -= rcx;
    rcx &= 0xffffffffffffffc0;
    rcx += 0x7f;
    if (rbx > rbp) {
        rax = rbp;
    }
    do {
        rsi = rdx;
        rax += rax;
        rdx += rdx;
        rsi >>= 0x3f;
        rax |= rsi;
        if (rbx >= rax) {
            if (rbx != rax) {
                goto label_18;
            }
            if (r15 > rdx) {
                goto label_18;
            }
        }
        rdx -= r15;
        rax -= rbx;
label_18:
        rcx--;
    } while (rcx != -1);
    *((rsp + 0x60)) = rdx;
    *((rsp + 0x68)) = rax;
    al = fcn_00402240 (rsp + 0x80, r13, rsp + 0x60, rsp + 0x50, *((rsp + 0x40)), rsp + 0x70);
    if (al == 0) {
        goto label_19;
    }
    r12++;
    eax = 0x40f23c;
    if (rax != r12) {
        goto label_2;
    }
    edx = 5;
    rax = dcgettext (0, "Lucas prime test failure.  This should not happen");
    eax = 0;
    error (0, 0, rax);
    abort ();
label_15:
    *((rsp + 0x90)) = rsi;
    *((rsp + 0x98)) = 0;
    goto label_0;
label_19:
    *((rsp + 0x47)) = 0;
label_8:
    eax = *((rsp + 0x47));
    return rax;
label_14:
    rcx = *((rsp + 0xb0));
    *((rsp + 0x98)) = 0;
    rax = rcx;
    rax >>= 1;
    eax &= 0x7f;
    eax = *((rax + 0x40c220));
    rdx = rax + rax;
    rax *= rax;
    rax *= rcx;
    rdx -= rax;
    rax = rdx + rdx;
    rdx *= rdx;
    rdx *= rcx;
    rax -= rdx;
    rdx = rax + rax;
    rax *= rax;
    rax *= rcx;
    rdx -= rax;
    rax = *((rsp + 0x18));
    rax *= rdx;
    *((rsp + 0x90)) = rax;
    rax = fcn_004020d0 (*((rsp + 0x48)), rsp + 0x60, rsp + 0x90, rsp + 0x80, r13, rsp + 0x70);
    *((rsp + 0xa0)) = rax;
    if (rax != *((rsp + 0x70))) {
        goto label_3;
    }
    rcx = *((rsp + 0xa8));
    rdx = *((rsp + 0x78));
    al = (rcx != rdx) ? 1 : 0;
    if (*((rsp + 0x1aa)) == 0) {
        goto label_20;
    }
    if (rcx != rdx) {
        goto label_4;
    }
    goto label_5;
label_13:
    if (r15 > rdx) {
        goto label_6;
    }
label_12:
    rdx -= r15;
    rax -= rbx;
    *((rsp + 0x68)) = rax;
    *((rsp + 0x60)) = rdx;
    goto label_6;
label_10:
    rsi = *((rsp + 0x20));
    ecx = 0x40;
    rdx = *((rsp + 0x18));
    __asm ("bsf rax, rdx");
    ecx -= eax;
    edi = eax;
    *((rsp + 0x40)) = eax;
    rax = rsi;
    rax <<= cl;
    ecx = edi;
    rdx >>= cl;
    rax |= rdx;
    *((rsp + 0x50)) = rax;
    rax = rsi;
    rax >>= cl;
    *((rsp + 0x58)) = rax;
    goto label_7;
label_17:
    rbp = *((rsp + 0x28));
    r12 = *((rsp + 0x30));
    rbx = *((rsp + 0x38));
    al = (rcx != rdx) ? 1 : 0;
label_20:
    if (al == 0) {
        goto label_5;
    }
    goto label_8;
    if (rdi != 0) {
        goto label_9;
    }
    if (rsi > 1) {
        if (rsi > 0x17ded78) {
            rdi = rsi;
            void (*0x403840)() ();
        }
        eax = 1;
        return rax;
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4040a0 */
#include <stdint.h>
 
uint64_t fcn_004040a0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    uint32_t var_8h;
    uint32_t var_fah;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = rdi;
    fcn_00402640 (rdi, rsi, rdx);
    r13 = rsp;
    edi = 0x3a;
    fcn_004026f0 ();
    rax = fcn_00403210 (rbx, rbp, r13, rcx);
    if (*((rsp + 0xfa)) == 0) {
        goto label_1;
    }
    r12 = r13 + 0x10;
label_0:
    ebx = 0;
    if (*((rbp + 0xe0)) == 0) {
        goto label_2;
    }
    do {
        edi = 0x20;
        ebx++;
        fcn_004026f0 ();
        fcn_00402340 (*(r12), 0, rdx);
        eax = *((rbp + 0xe0));
    } while (eax > ebx);
label_2:
    rbp++;
    edx = *((rsp + 0xfa));
    r12 += 8;
    eax = ebp;
    eax -= r13d;
    if (edx > eax) {
        goto label_0;
    }
label_1:
    while (1) {
        edi = 0xa;
        fcn_004026f0 ();
        return rax;
        edi = 0x20;
        fcn_004026f0 ();
        fcn_00402640 (*((rsp + 8)), *(rsp), rdx);
    }
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x404170 */
#include <stdint.h>
 
int64_t fcn_00404170 (int64_t arg1) {
    rdi = arg1;
    rax = rdi;
    edx = *(rdi);
    if (dl != 0x20) {
        goto label_3;
    }
    do {
        rax++;
        edx = *(rax);
    } while (dl == 0x20);
label_3:
    r8 = rax + 1;
    if (dl == 0x2b) {
        rdx = rax + 2;
        rax = r8;
        r8 = rdx;
    }
    rcx = rax;
    esi = 4;
    do {
        rcx++;
        edx = *((rcx - 1));
        if (edx == 0) {
            goto label_4;
        }
        edx -= 0x30;
        esi = 0;
    } while (edx <= 9);
    do {
        rax = fcn_00406f50 (rdi);
        edx = 5;
        rbx = rax;
label_0:
        rax = dcgettext (0, "%s is not a valid positive integer");
        rcx = rbx;
        eax = 0;
        eax = error (0, 0, rax);
        eax = 0;
label_1:
        return rax;
label_4:
    } while (esi != 0);
    eax = *(rax);
    if (eax == 0) {
        goto label_5;
    }
    edx = rax - 0x30;
    ebp = 0;
    ebx = 0;
    r9 = 0x1999999999999999;
    do {
        rsi = rbp + rbp*4;
        rax = rbp + rbp;
        r10 = rbp;
        rcx = rbp;
        r10 >>= 0x3d;
        rsi += rsi;
        rcx >>= 0x3f;
        eax = edx;
        ecx += r10d;
        edx = 0;
        rax += rsi;
        dl = (rax < 0) ? 1 : 0;
        rax = rbx * 5;
        rax += rax;
        ebx = rdx + rcx;
        rbx += rax;
        if (rbx < 0) {
            goto label_6;
        }
        r8++;
        eax = *((r8 - 1));
        if (eax == 0) {
            goto label_7;
        }
        edx = rax - 0x30;
    } while (rbx <= r9);
    do {
label_6:
        rax = fcn_00406f50 (rdi);
        edx = 5;
        esi = "%s is too large";
        rbx = rax;
        goto label_0;
label_7:
    } while (rbx < 0);
label_2:
    while (1) {
        fcn_004040a0 (rbx, rbp, rdx);
        eax = 1;
        goto label_1;
        fwrite ("[using single-precision arithmetic] ", 1, 0x24, *(obj.stderr));
    }
label_5:
    ebp = 0;
    ebx = 0;
    goto label_2;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4042e0 */
#include <stdint.h>
 
uint64_t fcn_004042e0 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [NUMBER]...\n  or:  %s OPTION\n");
    rcx = rbp;
    rdx = rbp;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Print the prime factors of each specified integer NUMBER.  If none\nare specified on the command line, read them from standard input.\n\n");
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
    *(rsp) = 0x40bd36;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x40bdb0;
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
        esi = "factor";
        ecx = 7;
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
        eax = strncmp (rax, 0x40bdba, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x40bd52;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "factor";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x4105e7;
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
            eax = strncmp (rax, 0x40bdba, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "factor";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x40bd52;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "factor";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x404690 */
#include <stdint.h>
 
uint64_t fcn_00404690 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_004072e0 (r13d, rbp, rbx);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x404710 */
#include <stdint.h>
 
int64_t fcn_00404710 (uint32_t arg1, int64_t arg2, int64_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x404760 */
#include <stdint.h>
 
uint64_t fcn_00404760 (char ** arg1) {
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
            edi = 0x40f330;
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
        *(0x00613328) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x404800 */
#include <stdint.h>
 
void fcn_00404800 (void) {
    return assert_fail ("iter->cur.wc == 0", "lib/mbuiter.h", 0xb3, "mbuiter_multi_next");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x404820 */
#include <stdint.h>
 
uint64_t fcn_00404820 (int64_t arg1, int64_t arg2) {
    char * ptr;
    uint32_t var_10h;
    mbstate_t * ps;
    uint32_t var_1ch;
    char * s;
    size_t var_28h;
    size_t * var_30h;
    size_t * var_34h;
    uint32_t var_50h;
    int64_t var_54h;
    int64_t var_5ch;
    char * var_60h;
    size_t var_68h;
    int64_t var_70h;
    int64_t var_74h;
    rdi = arg1;
    rsi = arg2;
    /* [13] -r-x section size 41560 named .text */
label_0:
    abort ();
    rbx = rdi;
    rax = fcn_004073a0 (rsi, 2);
    r12 = rsp + 0x34;
    r14 = rsp + 0x74;
    *((rsp + 8)) = rax;
label_9:
    if (*(rbx) == 0) {
        goto label_8;
    }
    do {
        rax = fcn_0040a420 (rbx, *((rsp + 8)));
        if (rax == 0) {
            goto label_8;
        }
        rax = ctype_get_mb_cur_max ();
        if (rax > 1) {
            goto label_19;
        }
        strlen (*((rsp + 8)));
        r13 = rbp + rax;
        if (rbx < rbp) {
            rax = ctype_b_loc ();
            edx = *((rbp - 1));
            rax = *(rax);
            if ((*((rax + rdx*2)) & 8) != 0) {
                goto label_20;
            }
        }
        ebx = *(r13);
        if (bl == 0) {
            goto label_21;
        }
        rax = ctype_b_loc ();
        rax = *(rax);
        if ((*((rax + rbx*2)) & 8) == 0) {
            goto label_21;
        }
label_20:
        if (*(rbp) == 0) {
            goto label_8;
        }
        rbx = rbp + 1;
    } while (*(rbx) != 0);
label_8:
    r13d = 0;
label_7:
    free (*((rsp + 8)));
    eax = r13d;
    return rax;
label_19:
    *((rsp + 0x20)) = rbx;
    r13 = rsp + 0x14;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x14)) = 0;
    *((rsp + 0x1c)) = 0;
    if (rbx < rbp) {
        goto label_22;
    }
    goto label_23;
label_1:
    rbx = *((rsp + 0x20));
    ecx = *(rbx);
    eax = ecx;
    al >>= 5;
    eax &= 7;
    eax = *((rax*4 + 0x410680));
    eax >>= cl;
    if ((al & 1) == 0) {
        goto label_24;
    }
    *((rsp + 0x28)) = 1;
    r15d = *(rbx);
    *((rsp + 0x30)) = 1;
    *((rsp + 0x34)) = r15d;
    *((rsp + 0x1c)) = 1;
label_2:
    if (r15d == 0) {
        goto label_0;
    }
    rbx = *((rsp + 0x20));
label_3:
    rbx += *((rsp + 0x28));
    eax = *((rsp + 0x30));
    *((rsp + 0x1c)) = 0;
    *((rsp + 0x20)) = rbx;
    if (rbx >= rbp) {
        goto label_25;
    }
label_22:
    if (*((rsp + 0x10)) == 0) {
        goto label_1;
    }
    do {
        rax = ctype_get_mb_cur_max ();
        rbx = *((rsp + 0x20));
        rax = fcn_00407340 (rbx, rax);
        rax = fcn_00408fc0 (r12, rbx, rax, r13);
        *((rsp + 0x28)) = rax;
        if (rax == -1) {
            goto label_26;
        }
        if (rax == 0xfffffffffffffffe) {
            goto label_27;
        }
        if (rax != 0) {
            goto label_28;
        }
        *((rsp + 0x28)) = 1;
        rbx = *((rsp + 0x20));
        if (*(rbx) != 0) {
            goto label_29;
        }
        r15d = *((rsp + 0x34));
        if (r15d != 0) {
            goto label_30;
        }
label_4:
        *((rsp + 0x30)) = 1;
        eax = mbsinit (r13);
        if (eax != 0) {
            *((rsp + 0x10)) = 0;
        }
        *((rsp + 0x1c)) = 1;
        goto label_2;
label_24:
        eax = mbsinit (r13);
        if (eax == 0) {
            goto label_31;
        }
        *((rsp + 0x10)) = 1;
    } while (1);
label_26:
    r15d = *((rsp + 0x34));
    rbx = *((rsp + 0x20));
    *((rsp + 0x30)) = 0;
    *((rsp + 0x28)) = 1;
    goto label_3;
label_27:
    rbx = *((rsp + 0x20));
    rax = strlen (*((rsp + 0x20)));
    *((rsp + 0x30)) = 0;
    r15d = *((rsp + 0x34));
    *((rsp + 0x28)) = rax;
    goto label_3;
label_28:
    r15d = *((rsp + 0x34));
    goto label_4;
label_25:
    if (al == 0) {
        goto label_23;
    }
    eax = iswalnum (r15d);
    r13b = (eax == 0) ? 1 : 0;
label_13:
    rax = *((rsp + 8));
    *((rsp + 0x20)) = rbp;
    rbx = rsp + 0x54;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x14)) = 0;
    *((rsp + 0x1c)) = 0;
    *((rsp + 0x60)) = rax;
    *((rsp + 0x50)) = 0;
    *((rsp + 0x54)) = 0;
    *((rsp + 0x5c)) = 0;
    goto label_32;
label_5:
    rdx = *((rsp + 0x60));
    ecx = *(rdx);
    eax = ecx;
    al >>= 5;
    eax &= 7;
    eax = *((rax*4 + 0x410680));
    eax >>= cl;
    if ((al & 1) == 0) {
        goto label_33;
    }
    *((rsp + 0x68)) = 1;
    eax = *(rdx);
    *((rsp + 0x70)) = 1;
    *((rsp + 0x74)) = eax;
    ecx = *((rsp + 0x74));
    *((rsp + 0x5c)) = 1;
    if (ecx == 0) {
        goto label_34;
    }
label_6:
    if (*((rsp + 0x1c)) != 0) {
        goto label_35;
    }
    if (*((rsp + 0x10)) != 0) {
        goto label_36;
    }
    rdx = *((rsp + 0x20));
    ecx = *(rdx);
    eax = ecx;
    al >>= 5;
    eax &= 7;
    eax = *((rax*4 + 0x410680));
    eax >>= cl;
    if ((al & 1) == 0) {
        goto label_37;
    }
    *((rsp + 0x28)) = 1;
    eax = *(rdx);
    *((rsp + 0x30)) = 1;
    *((rsp + 0x34)) = eax;
    *((rsp + 0x1c)) = 1;
label_10:
    edi = *((rsp + 0x34));
    if (edi == 0) {
        goto label_0;
    }
label_11:
    rax = *((rsp + 0x28));
    rax = *((rsp + 0x68));
    *((rsp + 0x1c)) = 0;
    *((rsp + 0x5c)) = 0;
label_32:
    if (*((rsp + 0x50)) == 0) {
        goto label_5;
    }
label_12:
    rax = ctype_get_mb_cur_max ();
    r15 = *((rsp + 0x60));
    rax = fcn_00407340 (r15, rax);
    rax = fcn_00408fc0 (r14, r15, rax, rbx);
    *((rsp + 0x68)) = rax;
    if (rax == -1) {
        goto label_38;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_39;
    }
    if (rax == 0) {
        *((rsp + 0x68)) = 1;
        rax = *((rsp + 0x60));
        if (*(rax) != 0) {
            goto label_29;
        }
        esi = *((rsp + 0x74));
        if (esi != 0) {
            goto label_30;
        }
    }
    *((rsp + 0x70)) = 1;
    eax = mbsinit (rbx);
    if (eax != 0) {
        *((rsp + 0x50)) = 0;
    }
    ecx = *((rsp + 0x74));
    *((rsp + 0x5c)) = 1;
    if (ecx != 0) {
        goto label_6;
    }
label_34:
    if (*((rsp + 0x1c)) != 0) {
        goto label_40;
    }
    if (*((rsp + 0x10)) != 0) {
        goto label_41;
    }
    rdx = *((rsp + 0x20));
    ecx = *(rdx);
    eax = ecx;
    al >>= 5;
    eax &= 7;
    eax = *((rax*4 + 0x410680));
    eax >>= cl;
    if ((al & 1) == 0) {
        goto label_42;
    }
    *((rsp + 0x28)) = 1;
    ebx = *(rdx);
    *((rsp + 0x30)) = 1;
    *((rsp + 0x34)) = ebx;
    *((rsp + 0x1c)) = 1;
label_14:
    if (ebx != 0) {
label_15:
        if (*((rsp + 0x30)) == 0) {
            goto label_43;
        }
        eax = iswalnum (ebx);
        if (eax != 0) {
            goto label_44;
        }
    }
label_43:
    if (r13b != 0) {
        goto label_7;
    }
label_44:
    *((rsp + 0x20)) = rbp;
    rbx = rsp + 0x14;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x14)) = 0;
    *((rsp + 0x1c)) = 0;
    ecx = *(rbp);
    eax = ecx;
    al >>= 5;
    eax &= 7;
    eax = *((rax*4 + 0x410680));
    eax >>= cl;
    if ((al & 1) == 0) {
        goto label_45;
    }
    *((rsp + 0x28)) = 1;
    eax = *(rbp);
    *((rsp + 0x30)) = 1;
    *((rsp + 0x34)) = eax;
    *((rsp + 0x1c)) = 1;
label_16:
    eax = *((rsp + 0x34));
    if (eax == 0) {
        goto label_8;
    }
label_17:
    rbx = *((rsp + 0x28));
    rbx += rbp;
    goto label_9;
label_37:
    eax = mbsinit (rsp + 0x14);
    if (eax == 0) {
        goto label_31;
    }
    *((rsp + 0x10)) = 1;
label_36:
    rax = ctype_get_mb_cur_max ();
    r15 = *((rsp + 0x20));
    rax = fcn_00407340 (r15, rax);
    rax = fcn_00408fc0 (r12, r15, rax, rsp + 0x14);
    *((rsp + 0x28)) = rax;
    if (rax == -1) {
        goto label_46;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_47;
    }
    if (rax == 0) {
        *((rsp + 0x28)) = 1;
        rax = *((rsp + 0x20));
        if (*(rax) != 0) {
            goto label_29;
        }
        r8d = *((rsp + 0x34));
        if (r8d != 0) {
            goto label_30;
        }
    }
    *((rsp + 0x30)) = 1;
    eax = mbsinit (rsp + 0x14);
    if (eax != 0) {
        *((rsp + 0x10)) = 0;
    }
    *((rsp + 0x1c)) = 1;
    goto label_10;
label_35:
    if (*((rsp + 0x30)) == 0) {
        goto label_11;
    }
    goto label_10;
label_33:
    eax = mbsinit (rbx);
    if (eax == 0) {
        goto label_31;
    }
    *((rsp + 0x50)) = 1;
    goto label_12;
label_38:
    *((rsp + 0x68)) = 1;
    *((rsp + 0x70)) = 0;
    *((rsp + 0x5c)) = 1;
    goto label_6;
label_46:
    *((rsp + 0x28)) = 1;
    *((rsp + 0x30)) = 0;
    goto label_11;
label_39:
    rax = strlen (*((rsp + 0x60)));
    *((rsp + 0x70)) = 0;
    *((rsp + 0x68)) = rax;
    *((rsp + 0x5c)) = 1;
    goto label_6;
label_47:
    rax = strlen (*((rsp + 0x20)));
    *((rsp + 0x30)) = 0;
    *((rsp + 0x28)) = rax;
    goto label_11;
label_23:
    r13d = 1;
    goto label_13;
label_42:
    eax = mbsinit (rsp + 0x14);
    if (eax == 0) {
        goto label_31;
    }
    *((rsp + 0x10)) = 1;
label_41:
    rax = ctype_get_mb_cur_max ();
    rbx = *((rsp + 0x20));
    rax = fcn_00407340 (rbx, rax);
    rax = fcn_00408fc0 (r12, rbx, rax, rsp + 0x14);
    *((rsp + 0x28)) = rax;
    if (rax == -1) {
        goto label_48;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_49;
    }
    if (rax == 0) {
        goto label_50;
    }
    ebx = *((rsp + 0x34));
label_18:
    *((rsp + 0x30)) = 1;
    eax = mbsinit (rsp + 0x14);
    if (eax != 0) {
        *((rsp + 0x10)) = 0;
    }
    *((rsp + 0x1c)) = 1;
    goto label_14;
label_40:
    ebx = *((rsp + 0x34));
    if (*((rsp + 0x30)) == 0) {
        goto label_15;
    }
    goto label_14;
label_45:
    eax = mbsinit (rbx);
    if (eax == 0) {
        goto label_31;
    }
    *((rsp + 0x10)) = 1;
    rax = ctype_get_mb_cur_max ();
    r13 = *((rsp + 0x20));
    rax = fcn_00407340 (r13, rax);
    rax = fcn_00408fc0 (r12, r13, rax, rbx);
    *((rsp + 0x28)) = rax;
    if (rax != -1) {
        if (rax == 0xfffffffffffffffe) {
            goto label_51;
        }
        if (rax == 0) {
            *((rsp + 0x28)) = 1;
            rax = *((rsp + 0x20));
            if (*(rax) != 0) {
                goto label_29;
            }
            edx = *((rsp + 0x34));
            if (edx != 0) {
                goto label_52;
            }
        }
        *((rsp + 0x30)) = 1;
        eax = mbsinit (rsp + 0x14);
        if (eax != 0) {
            *((rsp + 0x10)) = 0;
        }
        *((rsp + 0x1c)) = 1;
        goto label_16;
label_48:
        *((rsp + 0x28)) = 1;
        ebx = *((rsp + 0x34));
        *((rsp + 0x30)) = 0;
        *((rsp + 0x1c)) = 1;
        goto label_15;
    }
    *((rsp + 0x28)) = 1;
    goto label_17;
label_50:
    *((rsp + 0x28)) = 1;
    rax = *((rsp + 0x20));
    if (*(rax) != 0) {
        goto label_29;
    }
    ebx = *((rsp + 0x34));
    if (ebx == 0) {
        goto label_18;
    }
label_52:
    fcn_00404800 ();
label_51:
    rax = strlen (*((rsp + 0x20)));
    *((rsp + 0x28)) = rax;
    goto label_17;
label_49:
    rax = strlen (*((rsp + 0x20)));
    *((rsp + 0x30)) = 0;
    ebx = *((rsp + 0x34));
    *((rsp + 0x28)) = rax;
    *((rsp + 0x1c)) = 1;
    goto label_15;
label_21:
    r13d = 1;
    goto label_7;
label_31:
    assert_fail ("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96, "mbuiter_multi_next");
label_29:
    assert_fail ("*iter->cur.ptr == '\\0', "lib/mbuiter.h", 0xb2, "mbuiter_multi_next");
label_30:
    return assert_fail ("iter->cur.wc == 0", "lib/mbuiter.h", 0xb3, "mbuiter_multi_next");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x405150 */
#include <stdint.h>
 
uint64_t fcn_00405150 (int64_t arg1, int64_t arg2) {
    void * ptr;
    rdi = arg1;
    rsi = arg2;
    edx = 5;
    rbx = rsi;
    rax = dcgettext (0, rdi);
    r13 = rax;
    rax = fcn_00409270 ();
    rdi = rax;
    r14 = rax;
    eax = fcn_00409150 (rdi, "UTF-8");
    if (eax != 0) {
        goto label_7;
    }
    if (rbx == 0) {
        goto label_8;
    }
    r15 = rbx;
    r12 = rbx;
    r14d = 0;
    do {
label_5:
        eax = strcmp (r13, rbp);
        if (eax != 0) {
            ebp = 0;
            al = fcn_00404820 (r13, rbp);
            if (al == 0) {
label_3:
                if (rbx == 0) {
                    goto label_9;
                }
                al = fcn_00404820 (r13, rbx);
                if (al == 0) {
                    goto label_9;
                }
label_0:
                if (rbp == 0) {
                    goto label_10;
                }
label_6:
                free (rbp);
            }
label_10:
            r12 = r13;
            if (r14 == 0) {
                goto label_2;
            }
label_1:
            free (r14);
        }
label_2:
        rax = r12;
        return rax;
label_8:
        r15d = 0;
        r12 = rbp;
        r14d = 0;
    } while (1);
label_9:
    if (r15 == 0) {
        goto label_11;
    }
    al = fcn_00404820 (r13, r15);
    if (al != 0) {
        goto label_0;
    }
label_11:
    rax = strlen (r13);
    rbx = rax;
    strlen (r12);
    rax = fcn_00407ee0 (rbx + rax + 4);
    r9 = r12;
    r8 = r13;
    ecx = "%s (%s)";
    rbx = rax;
    rdi = rax;
    esi = 1;
    eax = 0;
    rdx = 0xffffffffffffffff;
    sprintf_chk ();
    if (rbp != 0) {
        free (rbp);
    }
    r12 = rbx;
    if (r14 != 0) {
        goto label_1;
    }
    goto label_2;
label_7:
    rdx = r14;
    esi = "UTF-8";
    rdi = rbx;
    rax = fcn_004081c0 ();
    r12 = rax;
    rax = strlen (r14);
    r15 = rax;
    rax = fcn_00407ee0 (rax + 0xb);
    rax = memcpy (rax, r14, r15);
    rdi = rbx;
    esi = "UTF-8";
    rcx = rax;
    r15 += rax;
    rax = 0x4c534e4152542f2f;
    *(r15) = rax;
    eax = 0x5449;
    rdx = rcx;
    *((r15 + 8)) = ax;
    *((r15 + 0xa)) = 0;
    *((rsp + 8)) = rcx;
    rax = fcn_004081c0 ();
    rcx = *((rsp + 8));
    r14 = rax;
    free (rcx);
    if (r14 == 0) {
        goto label_12;
    }
    rax = strchr (r14, 0x3f);
    if (rax == 0) {
        goto label_13;
    }
    free (r14);
    if (r12 == 0) {
        goto label_14;
    }
label_4:
    eax = strcmp (r13, rbp);
    if (eax == 0) {
        goto label_2;
    }
    r15d = 0;
    r14d = 0;
    do {
        al = fcn_00404820 (r13, rbp);
        if (al != 0) {
            goto label_15;
        }
        rbx = r12;
        goto label_3;
label_13:
        if (r12 == 0) {
            goto label_16;
        }
        r15 = r14;
        eax = strcmp (r13, rbp);
    } while (eax != 0);
    if (r12 == r14) {
        goto label_2;
    }
    free (r14);
    goto label_2;
label_12:
    if (r12 != 0) {
        goto label_4;
    }
label_14:
    r12 = rbp;
    r15d = 0;
    ebx = 0;
    r14d = 0;
    goto label_5;
label_16:
    r15 = r14;
    ebx = 0;
    r12 = r14;
    goto label_5;
label_15:
    goto label_6;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4053d0 */
#include <stdint.h>
 
uint64_t fcn_004053d0 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_00409270 ();
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
        eax = 0x40f3a5;
        ebx = 0x40f3b0;
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
        eax = 0x40f3a9;
        ebx = 0x40f3ac;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x40f380;
    ebx = 0x40f3a3;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4054d0 */
#include <stdint.h>
 
uint64_t fcn_004054d0 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        rsp + 0x6c = (ebp != 0) ? 1 : 0;
    } while (r13d > 0xa);
    eax = r13d;
    r11 = *((rsp + 8));
    /* switch table (11 cases) at 0x40f420 */
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
    *((rsp + 0x50)) = 0x40f380;
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
        /* switch table (127 cases) at 0x40f478 */
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
    rax = fcn_004054d0 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x40f870 */
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
    /* switch table (127 cases) at 0x40fc68 */
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
    *((rsp + 0x50)) = 0x40f380;
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
        rax = fcn_00408fc0 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x40f380;
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
        *((rsp + 0x50)) = 0x40f3a3;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_004053d0 (0x40f3b4, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_004053d0 (0x40f380, r13d);
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
        *((rsp + 0x50)) = 0x40f3a3;
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
        *((rsp + 0x50)) = 0x40f380;
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
    *((rsp + 0x50)) = 0x40f3a3;
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
    rax = fcn_004054d0 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x40f380;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x406700 */
#include <stdint.h>
 
uint64_t fcn_00406700 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x00613298);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x006132b0) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x6132a0) {
        goto label_2;
    }
    rax = fcn_00407f40 (rbx, rsi);
    *(0x00613298) = rax;
    rbx = rax;
    do {
        rdi = *(0x006132b0);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x006132b0) = r12d;
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
        rax = fcn_004054d0 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x613340) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00407ee0 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_004054d0 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00407f40 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x006132a0]");
        rbx = rax;
        *(0x00613298) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00408130 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x406da0 */
#include <stdint.h>
 
int64_t fcn_00406da0 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x00613440]");
        __asm ("movdqa xmm1, xmmword [0x00613450]");
        __asm ("movdqa xmm2, xmmword [0x00613460]");
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
        fcn_00406700 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x406f50 */
#include <stdint.h>
 
void fcn_00406f50 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x613260;
    rdx = 0xffffffffffffffff;
    edi = 0;
    return void (*0x406700)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x406f70 */
#include <stdint.h>
 
void fcn_00406f70 (int64_t arg1) {
    rdi = arg1;
    *(rdi) = 0;
    *((rdi + 8)) = 0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x406f80 */
#include <stdint.h>
 
int64_t fcn_00406f80 (int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    xmm0 = 0;
    r13 = rcx;
    *(rsp) = xmm0;
    *((rsp + 0x10)) = xmm0;
    if (rdx == 0) {
        goto label_5;
    }
    rdx += rsi;
    edi = 1;
    do {
        ecx = *(rsi);
        rbx = rdi;
        rsi++;
        rax = rcx;
        rbx <<= cl;
        rax >>= 3;
        eax &= 0x18;
    } while (rdx != rsi);
    rax = *((rbp + 8));
    if (rax >= *((rbp + 0x10))) {
        goto label_6;
    }
    do {
        rdx = rax + 1;
        *((rbp + 8)) = rdx;
        ebx = *(rax);
label_0:
        rax = (int64_t) ebx;
        rax >>= 6;
        rax = *((rsp + rax*8));
        if (((rax >> rbx) & 1) >= 0) {
            goto label_7;
        }
label_5:
        rax = *((rbp + 8));
    } while (rax < *((rbp + 0x10)));
label_6:
    rdi = rbp;
    eax = uflow ();
    ebx = eax;
    if (eax >= 0) {
        goto label_0;
    }
label_7:
    r15 = *((r13 + 8));
    r14 = *(r13);
    r12d = 0;
    while (r12 != r14) {
        rdx = r15 + r12;
        if (ebx < 0) {
            goto label_8;
        }
label_1:
        rax = (int64_t) ebx;
        rax >>= 6;
        rax = *((rsp + rax*8));
        if (((rax >> rbx) & 1) < 0) {
            goto label_8;
        }
        *(rdx) = bl;
        r12++;
        rax = *((rbp + 8));
        if (rax >= *((rbp + 0x10))) {
            goto label_9;
        }
        rdx = rax + 1;
        *((rbp + 8)) = rdx;
        ebx = *(rax);
label_2:
        if (ebx < 0) {
            if (r12 == 0) {
                goto label_10;
            }
        }
    }
    if (r15 == 0) {
        goto label_11;
    }
    rax = 0x5555555555555553;
    if (r12 > rax) {
        goto label_12;
    }
    rax = r12;
    rax >>= 1;
    r14 = r12 + rax + 1;
label_3:
    rax = fcn_00407f40 (r15, r14);
    r15 = rax;
    rdx = r15 + r12;
    if (ebx >= 0) {
        goto label_1;
    }
label_8:
    *(rdx) = 0;
    *((r13 + 8)) = r15;
    *(r13) = r14;
label_4:
    rax = r12;
    return rax;
label_9:
    rdi = rbp;
    eax = uflow ();
    ebx = eax;
    goto label_2;
label_11:
    if (r12 != 0) {
        goto label_13;
    }
    r14d = 0x80;
    goto label_3;
    if (r12 >= 0) {
label_13:
        goto label_3;
    }
label_12:
    fcn_00408130 ();
label_10:
    r12 = 0xffffffffffffffff;
    goto label_4;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4072e0 */
#include <stdint.h>
 
uint64_t fcn_004072e0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x407340 */
#include <stdint.h>
 
uint64_t fcn_00407340 (char * arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = rsi;
    rbx = rsi;
    rax = fcn_00409040 (rdi, 0, rdx);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x407380 */
#include <stdint.h>
 
void fcn_00407380 (void) {
    return assert_fail ("iter->cur.wc == 0", "lib/mbiter.h", 0xaa, "mbiter_multi_next");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4073a0 */
#include <stdint.h>
 
uint64_t fcn_004073a0 (int64_t arg2, const char * src) {
    uint32_t var_8h;
    mbstate_t * ps;
    int64_t var_14h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    wint_t wc;
    rsi = arg2;
    rdi = src;
    rax = strdup (rdi);
    if (rax == 0) {
        goto label_6;
    }
    r12 = rax;
    rax = ctype_get_mb_cur_max ();
    if (rax <= 1) {
        goto label_7;
    }
    if (ebp != 0) {
        goto label_8;
    }
label_3:
    *((rsp + 0x18)) = r12;
    do {
        edx = *(rbp);
        rbp += 4;
        eax = rdx - 0x1010101;
        edx = ~edx;
        eax &= edx;
        eax &= 0x80808080;
    } while (eax == 0);
    edx = eax;
    *((rsp + 8)) = 0;
    rbx = r12;
    edx >>= 0x10;
    *((rsp + 0x14)) = 0;
    *((rsp + 0xc)) = 0;
    if ((eax & 0x8080) == 0) {
        eax = edx;
    }
    rdx = rbp + 2;
    if ((eax & 0x8080) == 0) {
    }
    esi = eax;
    sil += al;
    rbp -= 3;
    r14d = 0;
    *(rsp) = rbp;
    if (rbp > r12) {
        void (*0x407472)() ();
    }
    void (*0x40751a)() ();
label_7:
    if (ebp == 0) {
        goto label_9;
    }
    ebx = *(r12);
    if (bl == 0) {
        goto label_10;
    }
    rax = ctype_b_loc ();
    r13 = r12;
    rax = *(rax);
    while ((*((rax + rbx*2 + 1)) & 0x20) != 0) {
        r13++;
        ebx = *(r13);
        if (bl == 0) {
            goto label_5;
        }
    }
label_5:
    strlen (r13);
    memmove (r12, r13, rax + 1);
    if (ebp == 1) {
        void (*0x40751a)() ();
    }
label_9:
    rdx = r12;
    do {
        ecx = *(rdx);
        rdx += 4;
        eax = rcx - 0x1010101;
        ecx = ~ecx;
        eax &= ecx;
        eax &= 0x80808080;
    } while (eax == 0);
    ecx = eax;
    ecx >>= 0x10;
    if ((eax & 0x8080) == 0) {
        eax = ecx;
    }
    rcx = rdx + 2;
    if ((eax & 0x8080) == 0) {
        rdx = rcx;
    }
    esi = eax;
    sil += al;
    rdx -= 3;
    rbx = rdx - 1;
    if (r12 > rbx) {
        void (*0x40751a)() ();
    }
    rax = ctype_b_loc ();
    rdx = *(rax);
    goto label_11;
label_0:
    *(rbx) = 0;
    rbx--;
    if (r12 > rbx) {
        void (*0x40751a)() ();
    }
label_11:
    eax = *(rbx);
    if ((*((rdx + rax*2 + 1)) & 0x20) != 0) {
        goto label_0;
    }
    void (*0x40751a)() ();
label_8:
    *((rsp + 0x18)) = r12;
    rbx = r12;
    do {
        edx = *(rbx);
        rbx += 4;
        eax = rdx - 0x1010101;
        edx = ~edx;
        eax &= edx;
        eax &= 0x80808080;
    } while (eax == 0);
    edx = eax;
    *((rsp + 8)) = 0;
    r14 = r12;
    edx >>= 0x10;
    *((rsp + 0x14)) = 0;
    *((rsp + 0xc)) = 0;
    if ((eax & 0x8080) == 0) {
        eax = edx;
    }
    rdx = rbx + 2;
    if ((eax & 0x8080) == 0) {
        rbx = rdx;
    }
    esi = eax;
    sil += al;
    rbx -= 3;
    *(rsp) = rbx;
    if (rbx > r12) {
        goto label_12;
    }
    goto label_4;
    do {
        ecx = *(r14);
        eax = ecx;
        al >>= 5;
        eax &= 7;
        eax = *((rax*4 + 0x410680));
        eax >>= cl;
        if ((al & 1) == 0) {
            goto label_13;
        }
        *((rsp + 0x20)) = 1;
        eax = *(r14);
        *((rsp + 0x28)) = 1;
        r14 = *((rsp + 0x18));
        *((rsp + 0x2c)) = eax;
        *((rsp + 0x14)) = 1;
label_1:
        eax = iswspace (*((rsp + 0x2c)));
        if (eax == 0) {
            goto label_4;
        }
        rbx = *(rsp);
        r14 += *((rsp + 0x20));
        *((rsp + 0x14)) = 0;
        *((rsp + 0x18)) = r14;
        if (r14 >= rbx) {
            goto label_4;
        }
label_12:
    } while (*((rsp + 8)) == 0);
label_2:
    rdx -= r14;
    rax = fcn_00408fc0 (rsp + 0x2c, r14, rbx, rsp + 0xc);
    *((rsp + 0x20)) = rax;
    if (rax == -1) {
        goto label_14;
    }
    r14 = *((rsp + 0x18));
    if (rax == 0xfffffffffffffffe) {
        goto label_15;
    }
    if (rax != 0) {
        goto label_16;
    }
    *((rsp + 0x20)) = 1;
    if (*(r14) != 0) {
        void (*0x40791e)() ();
    }
    edx = *((rsp + 0x2c));
    if (edx != 0) {
        void (*0x407937)() ();
    }
label_16:
    *((rsp + 0x28)) = 1;
    eax = mbsinit (rsp + 0xc);
    if (eax != 0) {
        *((rsp + 8)) = 0;
    }
    *((rsp + 0x14)) = 1;
    goto label_1;
label_13:
    eax = mbsinit (rsp + 0xc);
    if (eax == 0) {
        void (*0x407905)() ();
    }
    *((rsp + 8)) = 1;
    goto label_2;
label_14:
    *((rsp + 0x20)) = 1;
    r14 = *((rsp + 0x18));
    *((rsp + 0x28)) = 0;
    *((rsp + 0x14)) = 1;
label_4:
    strlen (r14);
    memmove (r12, r14, rax + 1);
    if (ebp == 1) {
        void (*0x40751a)() ();
    }
    goto label_3;
label_15:
    rax = *(rsp);
    *((rsp + 0x28)) = 0;
    *((rsp + 0x14)) = 1;
    rax -= r14;
    *((rsp + 0x20)) = rax;
    goto label_4;
label_10:
    r13 = r12;
    goto label_5;
label_6:
    return fcn_00408130 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4076ce */
#include <stdint.h>
 
uint64_t fcn_004076ce (uint32_t arg_8h, mbstate_t * ps, int64_t arg_14h, int64_t arg_18h, int64_t arg_20h, uint32_t arg_28h, wint_t wc) {
    do {
        r14d = 1;
        if (*((rsp + 0x28)) != 0) {
            r14d = 0;
            eax = iswspace (*((rsp + 0x2c)));
            r14b = (eax == 0) ? 1 : 0;
        }
label_2:
        *((rsp + 0x18)) = rbx;
        *((rsp + 0x14)) = 0;
        if (rbx >= rbp) {
            goto label_4;
        }
label_0:
        if (*((rsp + 8)) != 0) {
            goto label_5;
        }
        ecx = *(rbx);
        eax = ecx;
        al >>= 5;
        eax &= 7;
        eax = *((rax*4 + 0x410680));
        eax >>= cl;
        if ((al & 1) == 0) {
            goto label_6;
        }
        *((rsp + 0x20)) = 1;
        eax = *(rbx);
        r15 = *((rsp + 0x18));
        rbp = *(rsp);
        *((rsp + 0x28)) = 1;
        *((rsp + 0x2c)) = eax;
        rbx = r15 + 1;
label_1:
        *((rsp + 0x14)) = 1;
    } while (r14d == 0);
    if (r14d == 1) {
        goto label_7;
    }
    if (r14d != 2) {
        goto label_8;
    }
    if (*((rsp + 0x28)) == 0) {
        goto label_8;
    }
    eax = iswspace (*((rsp + 0x2c)));
    *((rsp + 0x18)) = rbx;
    eax = 1;
    *((rsp + 0x14)) = 0;
    if (eax == 0) {
        r14d = eax;
    }
    if (rbx < rbp) {
        goto label_0;
    }
label_4:
    if (r14d == 2) {
        goto label_9;
    }
label_3:
    rax = r12;
    return rax;
label_6:
    eax = mbsinit (rsp + 0xc);
    if (eax == 0) {
        goto label_10;
    }
    *((rsp + 8)) = 1;
label_5:
    rdx -= rbx;
    rax = fcn_00408fc0 (rsp + 0x2c, rbx, rbp, rsp + 0xc);
    rbx = rax;
    *((rsp + 0x20)) = rax;
    if (rax == -1) {
        goto label_11;
    }
    r15 = *((rsp + 0x18));
    if (rax == 0xfffffffffffffffe) {
        goto label_12;
    }
    if (rax == 0) {
        *((rsp + 0x20)) = 1;
        if (*(r15) != 0) {
            goto label_13;
        }
        eax = *((rsp + 0x2c));
        if (eax != 0) {
            goto label_14;
        }
        ebx = 1;
    }
    *((rsp + 0x28)) = 1;
    rbx += r15;
    eax = mbsinit (rsp + 0xc);
    rbp = *(rsp);
    if (eax == 0) {
        goto label_1;
    }
    *((rsp + 8)) = 0;
    goto label_1;
label_7:
    if (*((rsp + 0x28)) == 0) {
        goto label_2;
    }
    eax = iswspace (*((rsp + 0x2c)));
    eax = 2;
    if (eax != 0) {
        r13 = r15;
    }
    if (eax != 0) {
        r14d = eax;
    }
    goto label_2;
    *(rax) += al;
label_11:
    r15 = *((rsp + 0x18));
    rbp = *(rsp);
    *((rsp + 0x28)) = 0;
    *((rsp + 0x20)) = 1;
    rbx = r15 + 1;
    goto label_1;
label_12:
    rbx = *(rsp);
    *((rsp + 0x28)) = 0;
    rax = rbx;
    rax -= r15;
    *((rsp + 0x20)) = rax;
    goto label_1;
label_8:
    r14d = 1;
    goto label_2;
label_9:
    *(r13) = 0;
    goto label_3;
label_10:
    assert_fail ("mbsinit (&iter->state)", "lib/mbiter.h", 0x8e, "mbiter_multi_next");
label_13:
    assert_fail ("*iter->cur.ptr == '\\0', "lib/mbiter.h", 0xa9, "mbiter_multi_next");
label_14:
    return fcn_00407380 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x407940 */
#include <stdint.h>
 
void fcn_00407940 (int64_t arg_20h_2, int64_t arg_30h, int64_t arg_8h_3, int64_t arg_10h, int64_t arg_8h_2, int64_t arg_8h_4, int64_t arg_10h_2, int64_t arg_18h_2, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x410135);
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
        /* switch table (10 cases) at 0x410420 */
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
    void (*0x4019d0)() ();
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
    void (*0x4019d0)() ();
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
    void (*0x4019d0)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x407da0 */
#include <stdint.h>
 
uint64_t fcn_00407da0 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_00407940 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x407ee0 */
#include <stdint.h>
 
uint64_t fcn_00407ee0 (int64_t arg1) {
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
    return fcn_00408130 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x407f40 */
#include <stdint.h>
 
uint64_t fcn_00407f40 (int64_t arg1, int64_t arg2) {
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
    return fcn_00408130 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4080e0 */
#include <stdint.h>
 
uint64_t fcn_004080e0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00407ee0 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x408130 */
#include <stdint.h>
 
uint64_t fcn_00408130 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x00613240), 0, 0x40f2e9);
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4081c0 */
#include <stdint.h>
 
uint64_t fcn_004081c0 (void) {
    rax = fcn_0040b710 (rdi, rsi, rdx);
    rbx = rax;
    while (*(rax) != 0xc) {
        rax = rbx;
        return rax;
        rax = errno_location ();
    }
    return fcn_00408130 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4081f0 */
#include <stdint.h>
 
uint64_t fcn_004081f0 (int64_t arg1, int64_t arg2) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4082d0 */
#include <stdint.h>
 
int64_t fcn_004082d0 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, signed int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4088f0 */
#include <stdint.h>
 
uint64_t fcn_004088f0 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x4105c9;
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
            fcn_004081f0 (r12, rbx);
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
        fcn_004081f0 (r12, rbx);
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
    eax = fcn_004082d0 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_004082d0 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x408ec0 */
#include <stdint.h>
 
int32_t fcn_00408ec0 (int64_t arg_10h) {
    eax = *(0x006132bc);
    *(0x00613480) = eax;
    eax = *(0x006132b8);
    *(0x00613484) = eax;
    eax = *((rsp + 0x10));
    fcn_004088f0 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x006132bc) = edx;
    rdx = imp.__libc_start_main;
    *(0x00613cc8) = rdx;
    edx = imp.__libc_start_main;
    *(0x006132b4) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x408f40 */
#include <stdint.h>
 
void fcn_00408f40 (void) {
    r9d = 0;
    fcn_00408ec0 (rdi);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x408fc0 */
#include <stdint.h>
 
uint64_t fcn_00408fc0 (wint_t arg1, uint32_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_00409210 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x409040 */
#include <stdint.h>
 
int64_t fcn_00409040 (uint32_t arg1, int64_t arg2, uint32_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x409150 */
#include <stdint.h>
 
int32_t fcn_00409150 (uint32_t arg1, int64_t arg2) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x4091b0 */
#include <stdint.h>
 
uint64_t fcn_004091b0 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_0040b800 (rbp);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x409210 */
#include <stdint.h>
 
uint64_t fcn_00409210 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x4105ec;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x409270 */
#include <stdint.h>
 
uint64_t fcn_00409270 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x4105e7;
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
        r15d = 0x4105e7;
label_2:
        *(0x006134b8) = r15;
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
        r15d = 0x4105e7;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x40bdd7;
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
    fcn_0040b800 (rbx);
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
        r15d = 0x4105e7;
        rbx = rax;
        free (r15);
        fcn_0040b800 (r13);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x409890 */
#include <stdint.h>
 
int64_t fcn_00409890 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_8h;
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    rax = rdx;
    rbx = rdi;
    rdi = rdx;
    rax >>= 0x3d;
    al = (rax != 0) ? 1 : 0;
    rdi <<= 3;
    if (rdi < 0) {
        goto label_5;
    }
    eax = (int32_t) al;
    if (rax != 0) {
        goto label_5;
    }
    if (rdi > 0xfaf) {
        goto label_6;
    }
    rdi += 0x27;
    rdi &= 0xfffffffffffffff0;
    rdi = rsp + 0xf;
    rdi &= 0xfffffffffffffff0;
    rdi += 0x10;
    if (rdi == 0) {
        goto label_5;
    }
label_1:
    *((rdi + 8)) = 1;
    r8d = 0;
    r9d = 2;
    if (rdx <= 2) {
        goto label_7;
    }
label_0:
    eax = *((rsi + r9 - 1));
    if (al != *((rsi + r8))) {
        goto label_8;
    }
    goto label_9;
    do {
        r8 -= *((rdi + r8*8));
        if (*((rsi + r8)) == al) {
            goto label_9;
        }
label_8:
    } while (r8 != 0);
    *((rdi + r9*8)) = r9;
    r8d = 0;
label_3:
    r9++;
    if (rdx != r9) {
        goto label_0;
    }
label_7:
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
            goto label_10;
        }
        if (rax == 0) {
            goto label_11;
        }
        r10 = *((rdi + rax*8));
        rbx += r10;
        rax -= r10;
    } while (r8b != 0);
label_4:
    fcn_0040b990 (rdi);
    eax = 1;
    rbx = *((rbp - 8));
    return rax;
label_6:
    *((rbp - 0x28)) = rcx;
    *((rbp - 0x20)) = rdx;
    *((rbp - 0x18)) = rsi;
    rax = fcn_0040b920 (rdi);
    rcx = *((rbp - 0x28));
    rdx = *((rbp - 0x20));
    rdi = rax;
    rsi = *((rbp - 0x18));
    if (rdi != 0) {
        goto label_1;
    }
label_5:
    eax = 0;
    rbx = *((rbp - 8));
    return rax;
label_10:
    rax++;
    r10 = r9 + 1;
    if (rdx != rax) {
        r8d = *((r9 + 1));
        r9 = r10;
        goto label_2;
label_11:
        r8d = *((r9 + 1));
        rbx++;
        r9++;
        goto label_2;
label_9:
        r8++;
        rax = r9;
        rax -= r8;
        *((rdi + r9*8)) = rax;
        goto label_3;
    }
    *(rcx) = rbx;
    goto label_4;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x409a20 */
#include <stdint.h>
 
void fcn_00409a20 (void) {
    return assert_fail ("iter->cur.wc == 0", "lib/mbuiter.h", 0xb3, "mbuiter_multi_next");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x409a40 */
#include <stdint.h>
 
uint64_t fcn_00409a40 (mbstate_t * arg1, int64_t arg2, uint32_t arg3) {
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
label_3:
    abort ();
    rbx = rsi;
    *((rbp - 0x108)) = rdi;
    *((rbp - 0x110)) = rdx;
    rax = fcn_0040ba20 (rsi);
    edx = 0x38;
    rcx = rax;
    *((rbp - 0x100)) = rax;
    rax = rdx;
    rdx:rax = rax * rcx;
    __asm ("seto dl");
    if (rax < 0) {
        goto label_21;
    }
    edx = (int32_t) dl;
    if (rdx != 0) {
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
        eax = *((rax*4 + 0x410680));
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
    rax = fcn_00407340 (r14, rax);
    rsi = rbp - 0xf0;
    rax = fcn_00408fc0 (rsi + 0x24, r14, rax, rsi + 4);
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
    eax = *((rax*4 + 0x410680));
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
    eax = *((rax*4 + 0x410680));
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
    fcn_0040b990 (r12);
    rsp = rbp - 0x28;
    eax = 1;
    return rax;
label_21:
    rsp = rbp - 0x28;
    eax = 0;
    return rax;
label_22:
    rax = fcn_0040b920 (rdi);
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
    rax = fcn_00407340 (rbx, rax);
    rsi = rbp - 0x70;
    rax = fcn_00408fc0 (rsi + 0x24, rbx, rax, rsi + 4);
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
        eax = *((rax*4 + 0x410680));
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
    rax = fcn_00407340 (r15, rax);
    rsi = rbp - 0xb0;
    rax = fcn_00408fc0 (rsi + 0x24, r15, rax, rsi + 4);
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
    rax = fcn_00407340 (rbx, rax);
    rsi = rbp - 0xb0;
    rdi += 0x24;
    rax = fcn_00408fc0 (rsi, rbx, rax, rsi + 4);
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
    assert_fail ("*iter->cur.ptr == '\\0', "lib/mbuiter.h", 0xb2, "mbuiter_multi_next");
label_42:
    assert_fail ("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96, "mbuiter_multi_next");
label_29:
    fcn_00409a20 ();
label_50:
    return assert_fail ("iter->cur.wc == 0", "lib/mbuiter.h", 0xb3, "mbuiter_multi_next");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x40a420 */
#include <stdint.h>
 
uint64_t fcn_0040a420 (int64_t arg1, int64_t arg2) {
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
    al = fcn_00409890 (r14, r13, rax, rsp + 0x110);
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
    eax = *((rax*4 + 0x410680));
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
    eax = *((rax*4 + 0x410680));
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
    eax = *((rax*4 + 0x410680));
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
        eax = *((rax*4 + 0x410680));
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
        eax = *((rax*4 + 0x410680));
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
    rax = fcn_00407340 (r15, rax);
    rsi = rsp + 0x110;
    rax = fcn_00408fc0 (rsi + 0x24, r15, rax, rsp + 0x114);
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
        rax = fcn_00407340 (r15, rax);
        rsi = rsp + 0xd0;
        rax = fcn_00408fc0 (rsi + 0x24, r15, rax, rsp + 0xd4);
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
    rax = fcn_00407340 (rdi, rax);
    r8 = *(rsp);
    rax = fcn_00408fc0 (r15 + 0x24, r8, rax, r15 + 4);
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
        eax = *((rax*4 + 0x410680));
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
        eax = fcn_00409a40 (rbp, r13, rsp + 0x110);
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
        rax = fcn_00407340 (r15, rax);
        rsi = rsp + 0x50;
        rax = fcn_00408fc0 (rsi + 0x24, r15, rax, rsp + 0x54);
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
        eax = *((rax*4 + 0x410680));
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
    rax = fcn_00407340 (rdi, rax);
    r8 = *(rsp);
    rax = fcn_00408fc0 (rsp + 0x134, r8, rax, r15);
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
    rax = fcn_00407340 (r14, rax);
    rsi = rsp + 0x50;
    rax = fcn_00408fc0 (rsi + 0x24, r14, rax, rsp + 0x54);
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
    rax = fcn_00407340 (r12, rax);
    rax = fcn_00408fc0 (rsp + 0x34, r12, rax, rbx);
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
            fcn_00409a20 ();
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
    assert_fail ("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96, "mbuiter_multi_next");
label_52:
    return assert_fail ("*iter->cur.ptr == '\\0', "lib/mbuiter.h", 0xb2, "mbuiter_multi_next");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x40b2f0 */
#include <stdint.h>
 
int64_t fcn_0040b2f0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    uint32_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    uint32_t var_40h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
label_1:
    abort ();
    r14 = rdi;
    r13 = rsi;
    esi = 0;
    rbx = rdx;
    edx = 0;
    *((rsp + 0x18)) = rdi;
    rdi = rbx;
    r15 = rsp + 0x40;
    rbp = rsp + 0x38;
    *((rsp + 8)) = rcx;
    ecx = 0;
    r12 = rsp + 0x30;
    *((rsp + 0x10)) = r8;
    r8d = 0;
    iconv ();
    *((rsp + 0x20)) = r14;
    r14d = 0;
    *((rsp + 0x28)) = r13;
    if (r13 != 0) {
        goto label_5;
    }
    goto label_6;
    do {
label_0:
        rax = *((rsp + 0x30));
        rax -= r15;
        r14 += rax;
        if (*((rsp + 0x28)) == 0) {
            goto label_6;
        }
label_5:
        r8 = rbp;
        rcx = r12;
        rdx = rsp + 0x28;
        rdi = rbx;
        rsi = rsp + 0x20;
        *((rsp + 0x30)) = r15;
        *((rsp + 0x38)) = 0x1000;
        rax = iconv ();
    } while (rax != -1);
    rax = errno_location ();
    eax = *(rax);
    if (eax == 7) {
        goto label_0;
    }
    if (eax != 0x16) {
        goto label_7;
    }
label_6:
    edx = 0;
    esi = 0;
    r8 = rbp;
    rcx = r12;
    rdi = rbx;
    *((rsp + 0x30)) = r15;
    *((rsp + 0x38)) = 0x1000;
    rax = iconv ();
    if (rax == -1) {
        goto label_7;
    }
    rax = *((rsp + 0x30));
    rax -= r15;
    rax += r14;
    *(rsp) = rax;
    if (rax == 0) {
        goto label_8;
    }
    rax = *((rsp + 8));
    r14 = *(rax);
    if (r14 == 0) {
        goto label_9;
    }
    rax = *((rsp + 0x10));
    rcx = *(rsp);
    if (*(rax) < rcx) {
        goto label_9;
    }
label_2:
    r8d = 0;
    ecx = 0;
    edx = 0;
    esi = 0;
    rdi = rbx;
    iconv ();
    rax = *((rsp + 0x18));
    *((rsp + 0x30)) = r13;
    *((rsp + 0x38)) = r14;
    *((rsp + 0x28)) = rax;
    rax = *(rsp);
    *((rsp + 0x40)) = rax;
    while (r13 != 0) {
        r8 = r15;
        rcx = rbp;
        rdx = r12;
        rdi = rbx;
        rsi = rsp + 0x28;
        rax = iconv ();
        if (rax == -1) {
            goto label_10;
        }
        r13 = *((rsp + 0x30));
    }
label_4:
    edx = 0;
    esi = 0;
    r8 = r15;
    rcx = rbp;
    rdi = rbx;
    rax = iconv ();
    if (rax == -1) {
        goto label_11;
    }
    if (*((rsp + 0x40)) != 0) {
        goto label_1;
    }
    rax = *((rsp + 8));
    rdi = *(rsp);
    ebx = 0;
    *(rax) = r14;
    rax = *((rsp + 0x10));
    *(rax) = rdi;
label_3:
    eax = ebx;
    return rax;
label_9:
    rax = malloc (*(rsp));
    r14 = rax;
    if (rax != 0) {
        goto label_2;
    }
    errno_location ();
    *(rax) = 0xc;
label_7:
    ebx = 0xffffffff;
    goto label_3;
label_8:
    rax = *((rsp + 0x10));
    ebx = 0;
    *(rax) = 0;
    goto label_3;
label_10:
    rax = errno_location ();
    if (*(rax) == 0x16) {
        goto label_4;
    }
label_11:
    rax = *((rsp + 8));
    ebx = 0xffffffff;
    if (*(rax) == r14) {
        goto label_3;
    }
    rax = errno_location ();
    r12d = *(rax);
    free (r14);
    *(rbp) = r12d;
    goto label_3;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x40b540 */
#include <stdint.h>
 
uint64_t fcn_0040b540 (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    r14 = rsi;
    *(rsp) = rdi;
    rax = strlen (rdi);
    rbx = rax;
    *((rsp + 8)) = rax;
    rbx <<= 4;
    if (rax >= 0x10000000) {
        rbx = rax;
    }
    r13 = rbx + 1;
    rax = malloc (r13);
    r12 = rax;
    if (rax == 0) {
        goto label_0;
    }
    r8d = 0;
    ecx = 0;
    edx = 0;
    esi = 0;
    rdi = r14;
    iconv ();
    *((rsp + 0x10)) = r12;
    *((rsp + 0x18)) = rbx;
    while (rax == -1) {
        rax = errno_location ();
        r15 = rax;
        eax = *(rax);
        if (eax == 0x16) {
            goto label_1;
        }
        if (eax != 7) {
            goto label_2;
        }
        rbx = *((rsp + 0x10));
        rbp = r13 + r13;
        rbx -= r12;
        if (r13 >= rbp) {
            goto label_3;
        }
        rax = realloc (r12, rbp);
        if (rax == 0) {
            goto label_3;
        }
        rdx = rax + rbx;
        r12 = rax;
        r13 = rbp;
        *((rsp + 0x10)) = rdx;
        rdx = rbp - 1;
        rdx -= rbx;
        *((rsp + 0x18)) = rdx;
        r8 = rsp + 0x18;
        rcx = rsp + 0x10;
        rsi = rsp;
        rdi = r14;
        rdx = rsp + 8;
        rax = iconv ();
    }
    while (rax == -1) {
        rax = errno_location ();
        r15 = rax;
        if (*(rax) != 7) {
            goto label_2;
        }
        rbx = *((rsp + 0x10));
        rbp = r13 + r13;
        rbx -= r12;
        if (r13 >= rbp) {
            goto label_3;
        }
        rax = realloc (r12, rbp);
        if (rax == 0) {
            goto label_3;
        }
        rdx = rax + rbx;
        r13 = rbp;
        r12 = rax;
        *((rsp + 0x10)) = rdx;
        rdx = rbp - 1;
        rdx -= rbx;
        *((rsp + 0x18)) = rdx;
label_1:
        edx = 0;
        esi = 0;
        r8 = rsp + 0x18;
        rdi = r14;
        rcx = rsp + 0x10;
        rax = iconv ();
    }
    rax = *((rsp + 0x10));
    rdx = rax + 1;
    *((rsp + 0x10)) = rdx;
    *(rax) = 0;
    rsi = *((rsp + 0x10));
    rsi -= r12;
    if (r13 <= rsi) {
        goto label_4;
    }
    rax = realloc (r12, rsi);
    if (rax != 0) {
        r12 = rax;
    }
    goto label_4;
label_3:
    *(r15) = 0xc;
label_2:
    r12d = 0;
    free (r12);
    do {
label_4:
        rax = r12;
        return rax;
label_0:
        errno_location ();
        *(rax) = 0xc;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x40b710 */
#include <stdint.h>
 
uint64_t fcn_0040b710 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = rdi;
    if (*(rdi) != 0) {
        r12 = rsi;
        rsi = rdx;
        eax = fcn_00409150 (r12, rsi);
        if (eax != 0) {
            goto label_1;
        }
    }
    rax = strdup (rbx);
    rbx = rax;
    if (rax == 0) {
        goto label_2;
    }
    do {
label_0:
        rax = rbx;
        return rax;
label_1:
        rdi = rbp;
        rsi = r12;
        rax = iconv_open ();
        if (rax == -1) {
            goto label_3;
        }
        rax = fcn_0040b540 (rbx, rax);
        rbx = rax;
        if (rax == 0) {
            goto label_4;
        }
        rdi = rbp;
        eax = iconv_close ();
    } while (eax >= 0);
    rax = errno_location ();
    ebx = 0;
    r12d = *(rax);
    free (rbx);
    *(rbp) = r12d;
    goto label_0;
label_2:
    errno_location ();
    *(rax) = 0xc;
    rax = rbx;
    return rax;
label_3:
    ebx = 0;
    goto label_0;
label_4:
    rax = errno_location ();
    rdi = rbp;
    r13d = *(rax);
    r12 = rax;
    iconv_close ();
    *(r12) = r13d;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x40b800 */
#include <stdint.h>
 
uint64_t fcn_0040b800 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_0040b880 (rbx);
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
    void (*0x401730)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x40b880 */
#include <stdint.h>
 
uint32_t fcn_0040b880 (int64_t arg1) {
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
    void (*0x4018c0)() ();
label_1:
    fcn_0040b8c0 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x40b8c0 */
#include <stdint.h>
 
int64_t fcn_0040b8c0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
        void (*0x401990)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x40b920 */
#include <stdint.h>
 
uint64_t fcn_0040b920 (int64_t arg1) {
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
            rdx:rax = rax * rdx;
            rdx >>= 8;
            rax = rdx;
            rax <<= 8;
            rdx += rax;
            rax = rcx;
            rax -= rdx;
            rdx = rax;
            rax = *((rax*8 + 0x6134c0));
            *((rdx*8 + 0x6134c0)) = rcx;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x40b990 */
#include <stdint.h>
 
int64_t fcn_0040b990 (uint32_t arg1) {
    rdi = arg1;
    if (rdi == 0) {
        goto label_0;
    }
    while (rcx == 0) {
label_0:
        return;
        rdx = 0xff00ff00ff00ff01;
        rax = rdi;
        rdx:rax = rax * rdx;
        rdx >>= 8;
        rax = rdx;
        rax <<= 8;
        rdx += rax;
        rax = rdi;
        rax -= rdx;
        rcx = *((rax*8 + 0x6134c0));
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
        void (*0x401670)() ();
label_2:
        rcx = rax*8 + 0x6134c0;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x40ba20 */
#include <stdint.h>
 
uint64_t fcn_0040ba20 (int64_t arg1) {
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
        eax = *((rax*4 + 0x410680));
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
    rax = fcn_00407340 (rbp, rax);
    rax = fcn_00408fc0 (rsp + 0x24, rbp, rax, rsp + 4);
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
    assert_fail ("mbsinit (&iter->state)", "lib/mbuiter.h", 0x96, "mbuiter_multi_next");
label_9:
    assert_fail ("*iter->cur.ptr == '\\0', "lib/mbuiter.h", 0xb2, "mbuiter_multi_next");
label_10:
    return assert_fail ("iter->cur.wc == 0", "lib/mbuiter.h", 0xb3, "mbuiter_multi_next");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x40bc60 */
#include <stdint.h>
 
int64_t fcn_0040bc60 (void) {
    rax = 0x613228;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_factor.elf @ 0x40bc78 */
#include <stdint.h>
 
void fcn_0040bc78 (int64_t arg3) {
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
