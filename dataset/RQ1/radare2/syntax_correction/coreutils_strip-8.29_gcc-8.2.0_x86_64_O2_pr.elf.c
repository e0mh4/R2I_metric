#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x401d40 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int64_t var_1h;
    int64_t var_dh_2;
    int64_t var_eh_2;
    int64_t var_fh_2;
    int64_t var_14h_2;
    int64_t var_18h_2;
    int64_t var_8h;
    uint32_t var_dh;
    uint32_t var_eh;
    uint32_t var_fh;
    int64_t var_14h;
    char ** var_18h;
    rdi = argc;
    rsi = argv;
    r15d = 0;
    r12 = rsi;
    *((rsp + 0x18)) = 0;
    fcn_00407110 (*(rsi));
    setlocale (6, 0x40ce63);
    bindtextdomain (0x40cef7, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x40cef7, rsi);
    edi = 0x4053d0;
    fcn_0040cd90 ();
    if (ebp > 1) {
        rdi = (int64_t) edi;
        rdi <<= 3;
        rax = fcn_00409300 (rbp - 1);
        r15 = rax;
    }
    *((rsp + 0xf)) = 0;
    ebx = 0;
    r13d = 0;
    r14d = 0;
    *((rsp + 0xe)) = 0;
    *((rsp + 0xd)) = 0;
    do {
label_0:
        edx = "-0123456789D:FJN:S::TW:abcde::fh:i::l:mn::o:rs::tvw:";
        r8 = rsp + 0x14;
        rsi = r12;
        edi = ebp;
        ecx = 0x40ebe0;
        *((rsp + 0x14)) = 0xffffffff;
        eax = fcn_0040b9d0 ();
        edx = eax;
        if (eax == 0xffffffff) {
            goto label_7;
        }
        eax = rax - 0x30;
        if (eax <= 9) {
            goto label_8;
        }
        edx += 0x83;
        if (edx > 0x104) {
            goto label_9;
        }
        /* switch table (261 cases) at 0x40e3a0 */
        rdx = imp.__libc_start_main;
        if (rdx == 0) {
            goto label_10;
        }
        al = fcn_00402820 (*((rsp + 0x14)), 0, rdx);
        if (al == 0) {
            goto label_11;
        }
label_1:
        ebx = 0;
    } while (1);
    ebx = 0;
    fcn_00402950 (*(0x00614630));
    r13d = 0;
    free (r13);
    *((rsp + 0x18)) = 0;
    goto label_0;
    edx = 5;
    rax = dcgettext (0, "'-w PAGE_WIDTH' invalid number of characters");
    r9d = 0;
    eax = fcn_00409680 (*(0x00614630), 1, 0x7fffffff, 0x40ce63, rax);
    ebx = *(0x0061443d);
    *((rsp + 0xd)) = bl;
    *((rsp + 0xe)) = bl;
    if (bl != 0) {
        goto label_1;
    }
    *(0x006142ac) = eax;
    ebx = 0;
    *((rsp + 0xe)) = 1;
    *((rsp + 0xd)) = 1;
    goto label_0;
    *(0x006143ea) = 1;
    ebx = 0;
    goto label_0;
    *(0x006142b5) = 0;
    ebx = 0;
    *(0x0061444a) = 1;
    goto label_0;
    eax = *(0x006143e0);
    *((rsp + 0xd)) = al;
    *((rsp + 0xf)) = al;
    if (al != 0) {
        goto label_1;
    }
    rdi = imp.__libc_start_main;
    if (rdi == 0) {
        goto label_12;
    }
    fcn_00402920 (rdi);
    ebx = 0;
    *((rsp + 0xf)) = 1;
    *((rsp + 0xd)) = 1;
    goto label_0;
    *(0x006143e1) = 1;
    ebx = 0;
    goto label_0;
    edx = 5;
    ebx = 0;
    rax = dcgettext (0, "'-o MARGIN' invalid line offset");
    r9d = 0;
    eax = fcn_00409680 (*(0x00614630), 0, 0x7fffffff, 0x40ce63, rax);
    *(0x0061442c) = eax;
    goto label_0;
    rdi = imp.__libc_start_main;
    *(0x006143fc) = 1;
    if (rdi == 0) {
        goto label_1;
    }
    ebx = 0;
    fcn_004052e0 (rdi, 0x6e, 0x614288, 0x614278);
    goto label_0;
    *(0x0061444f) = 1;
    ebx = 0;
    *(0x006142b4) = 0;
    goto label_0;
    edx = 5;
    ebx = 0;
    rax = dcgettext (0, "'-l PAGE_LENGTH' invalid number of lines");
    r9d = 0;
    eax = fcn_00409680 (*(0x00614630), 1, 0x7fffffff, 0x40ce63, rax);
    *(0x006142b0) = eax;
    goto label_0;
    rdi = imp.__libc_start_main;
    if (rdi != 0) {
        fcn_004052e0 (rdi, 0x69, 0x6142a0, "\b\t\b\tHB\xc4\x81");
    }
    *(0x00614434) = 1;
    ebx = 0;
    goto label_0;
    rax = imp.__libc_start_main;
    ebx = 0;
    *(0x006143c8) = rax;
    goto label_0;
    rdi = imp.__libc_start_main;
    *(0x006143e0) = 1;
    *(0x00614270) = 0x40ce63;
    *(0x006143dc) = 0;
    *((rsp + 0xf)) = 0;
    if (rdi == 0) {
        goto label_1;
    }
    fcn_00402920 (rdi);
    ebx = 0;
    goto label_0;
    edx = 5;
    ebx = 0;
    *(0x00614280) = 0;
    rax = dcgettext (0, "'-N NUMBER' invalid starting line number");
    r9d = 0;
    eax = fcn_00409680 (*(0x00614630), 0xffffffff80000000, 0x7fffffff, 0x40ce63, rax);
    *(0x0061427c) = eax;
    goto label_0;
    *(0x0061443c) = 1;
    ebx = 0;
    goto label_0;
    *(0x00614447) = 1;
    ebx = 0;
    goto label_0;
    rax = imp.__libc_start_main;
    ebx = 0;
    *(0x006143c0) = rax;
    goto label_0;
    rax = imp.__libc_start_main;
    if (*(0x00614418) == 0) {
        goto label_13;
    }
label_2:
    edx = r14d;
    ebx = 0;
    r14d++;
    *((r15 + rdx*8)) = rax;
    goto label_0;
    eax = 0;
    r9d = "Roland Huebner";
    r8d = "Pete TerMaat";
    rcx = *(str_8_29);
    fcn_004091c0 (*(obj.stdout), 0x40ce7a, "GNU coreutils");
    exit (0);
    *(0x00614444) = 1;
    ebx = 0;
    goto label_0;
    *(0x00614445) = 1;
    ebx = 0;
    *(0x006142b4) = 0;
    goto label_0;
    edx = 5;
    ebx = 0;
    *(0x0061443d) = 1;
    rax = dcgettext (0, "'-W PAGE_WIDTH' invalid number of characters");
    r9d = 0;
    eax = fcn_00409680 (*(0x00614630), 1, 0x7fffffff, 0x40ce63, rax);
    *((rsp + 0xe)) = 0;
    *(0x006142ac) = eax;
    goto label_0;
    *(0x006142b5) = 0;
    ebx = 0;
    *(0x0061444a) = 0;
    goto label_0;
    *(0x006143e8) = 1;
    ebx = 0;
    goto label_0;
    *(0x006143e9) = 1;
    ebx = 0;
    goto label_0;
    rdi = imp.__libc_start_main;
    if (rdi != 0) {
        fcn_004052e0 (rdi, 0x65, 0x6142a8, 0x6142a4);
    }
    *(0x00614435) = 1;
    ebx = 0;
    goto label_0;
label_8:
    rcx = rbx + 1;
    while (1) {
        *((r13 + rbx)) = dl;
        rbx = rcx;
        *((r13 + rcx)) = 0;
        goto label_0;
        *((rsp + 8)) = edx;
        *(rsp) = rcx;
        rax = fcn_00409460 (r13, rsp + 0x18);
        edx = *((rsp + 8));
        rcx = *(rsp);
        r13 = rax;
    }
label_13:
    if (*(rax) != 0x2b) {
        goto label_2;
    }
    al = fcn_00402820 (0xfffffffe, 0x2b, rax + 1);
    if (al != 0) {
        goto label_1;
    }
    rax = imp.__libc_start_main;
    goto label_2;
label_7:
    if (r13 != 0) {
        fcn_00402950 (r13);
        free (r13);
    }
    if (*(0x006143c0) == 0) {
        goto label_14;
    }
label_6:
    rax = getenv (0x40cf65);
    rax = fcn_0040bba0 (rax);
    *(0x006143b8) = rax;
    if (*(0x00614418) == 0) {
        *(0x00614418) = 1;
    }
    edi = *(0x0061444f);
    if (dil != 0) {
        if (*(0x0061444b) != 0) {
            goto label_15;
        }
        if (*(0x00614445) != 0) {
            goto label_16;
        }
    }
    if (*((rsp + 0xd)) != 0) {
        if (*((rsp + 0xe)) == 0) {
            goto label_17;
        }
        if (dil == 0) {
            if (*(0x0061444b) == 0) {
                goto label_18;
            }
        }
        *(0x0061443d) = 1;
        if (*((rsp + 0xf)) != 0) {
            goto label_19;
        }
    }
label_3:
    edx = *(0x0061433c);
    if (ebp <= edx) {
        goto label_20;
    }
    esi = ebp;
    rax = (int64_t) edx;
    esi -= edx;
    rax = r12 + rax*8;
    esi += r14d;
    do {
        rcx = *(rax);
        edx = r14d;
        r14d++;
        rax += 8;
        *((r15 + rdx*8)) = rcx;
    } while (r14d != esi);
    *(0x0061433c) = ebp;
label_20:
    if (r14d == 0) {
        goto label_21;
    }
    if (dil != 0) {
        goto label_22;
    }
    eax = r14 - 1;
    rbx = r15 + rax*8 + 8;
    do {
        r15 += 8;
        fcn_00403e40 (1, r15);
    } while (rbx != r15);
label_4:
    free (*(0x006143f0));
    free (*(0x00614398));
    free (*(0x00614478));
    free (*(0x00614458));
    free (*(0x00614450));
    free (*(0x00614470));
    if (*(0x00614446) != 0) {
        goto label_23;
    }
label_5:
    eax = *(0x00614420);
    return rax;
label_12:
    *((rsp + 0xf)) = 1;
    ebx = 0;
    *((rsp + 0xd)) = 1;
    goto label_0;
label_17:
    if (*(0x006143e0) == 1) {
        goto label_3;
    }
    if (*((rsp + 0xf)) == 0) {
        goto label_3;
    }
    if (dil != 0) {
        goto label_24;
    }
    if (*(0x0061444b) == 0) {
        goto label_3;
    }
label_24:
    if (*(0x0061443d) != 0) {
        goto label_19;
    }
    *(0x0061443c) = 1;
    if (*(0x006143dc) <= 0) {
        goto label_3;
    }
label_19:
    *(0x006143e0) = 1;
    goto label_3;
label_22:
    fcn_00403e40 (r14d, r15);
    goto label_4;
label_21:
    fcn_00403e40 (0, 0);
    goto label_4;
label_23:
    eax = fcn_0040aa20 (*(obj.stdin));
    eax++;
    if (eax != 0) {
        goto label_5;
    }
    edx = 5;
    rax = dcgettext (0, "standard input");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
label_14:
    rax = getenv ("POSIXLY_CORRECT");
    if (rax != 0) {
        al = fcn_00405590 (2);
        if (al == 0) {
            eax = "%b %e %H:%M %Y";
        }
    } else {
        eax = "%Y-%m-%d %H:%M";
    }
    *(0x006143c0) = rax;
    goto label_6;
label_18:
    *(0x0061443c) = 1;
    goto label_3;
    fcn_00404de0 (0);
label_9:
    fcn_00404de0 (1);
label_11:
    rax = fcn_00408d30 (*(0x00614630));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid page range %s");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_10:
    edx = 5;
    rax = dcgettext (0, "'--pages=FIRST_PAGE[:LAST_PAGE]' missing argument");
    eax = 0;
    error (1, 0, rax);
label_15:
    edx = 5;
    rax = dcgettext (0, "cannot specify number of columns when printing in parallel");
    eax = 0;
    error (1, 0, rax);
label_16:
    edx = 5;
    rax = dcgettext (0, "cannot specify both printing across and printing in parallel");
    eax = 0;
    error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4025fb */
#include <stdint.h>
 
int32_t fcn_004025fb (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x402651 */
#include <stdint.h>
 
int64_t fcn_00402651 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x00614368) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x613e48;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x00614370) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_004025fb ();
    *(0x00614368) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4026a8 */
#include <stdint.h>
 
int64_t fcn_004026a8 (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4026b0 */
#include <stdint.h>
 
int32_t fcn_004026b0 (void) {
    eax = *(0x00614298);
    rdx = imp.__libc_start_main;
    if (eax == 0) {
        goto label_0;
    }
    ecx = rax - 1;
    esi = *(0x006142b4);
    eax = 0;
    rcx++;
    rcx <<= 6;
    rcx += rdx;
    do {
        if (*((rdx + 0x10)) > 1) {
            if (sil == 0) {
                goto label_1;
            }
            r8d = *((rdx + 0x2c));
            if (r8d <= 0) {
                goto label_1;
            }
            edi = *((rdx + 0x30));
            if (edi <= 0) {
                goto label_1;
            }
        }
        eax++;
label_1:
        rdx += 0x40;
    } while (rdx != rcx);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x402710 */
#include <stdint.h>
 
int64_t fcn_00402710 (void) {
    eax = *(0x00614298);
    rdi = imp.__libc_start_main;
    if (eax == 0) {
        goto label_0;
    }
    edx = rax - 1;
    ecx = imp.__libc_start_main;
    rax = rdi;
    esi = 0;
    rdx++;
    rdx <<= 6;
    rdx += rdi;
    do {
        if (*((rax + 0x10)) == 2) {
            *((rax + 0x10)) = 0;
            ecx++;
            esi = 1;
        }
        rax += 0x40;
    } while (rax != rdx);
    if (sil != 0) {
        *(0x00614410) = ecx;
    }
label_0:
    if (*(0x006142b4) != 0) {
        eax = 0;
        al = (*((rdi + 0x10)) != 3) ? 1 : 0;
        *(0x00614410) = eax;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4027f0 */
#include <stdint.h>
 
uint64_t fcn_004027f0 (void) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    edx = 5;
    rax = dcgettext (0, "integer overflow");
    eax = 0;
    error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x402820 */
#include <stdint.h>
 
uint64_t fcn_00402820 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    uint32_t var_10h;
    uint32_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13d = edi;
    r12d = esi;
    rbx = rdx;
    *((rsp + 0x18)) = 0xffffffffffffffff;
    eax = fcn_0040a5e0 (rbx, rsp + 8, 0xa, rsp + 0x10, 0x40ce63);
    if ((eax & 0xfffffffd) != 0) {
        goto label_2;
    }
    rdi = *((rsp + 8));
    if (rdi == rbx) {
        goto label_0;
    }
    if (*((rsp + 0x10)) == 0) {
        goto label_0;
    }
    eax = *(rdi);
    if (al == 0x3a) {
        goto label_3;
    }
label_1:
    if (al != 0) {
        goto label_0;
    }
    rax = *((rsp + 0x10));
    *(0x00614418) = rax;
    rax = *((rsp + 0x18));
    *(0x00614290) = rax;
    eax = 1;
    return rax;
    do {
label_0:
        eax = 0;
        return rax;
label_3:
        rbp = rdi + 1;
        eax = fcn_0040a5e0 (rbp, rsp + 8, 0xa, rsp + 0x18, 0x40ce63);
        if (eax != 0) {
            goto label_2;
        }
        rax = *((rsp + 8));
    } while (rax == rbp);
    rdx = *((rsp + 0x10));
    if (*((rsp + 0x18)) < rdx) {
        goto label_0;
    }
    eax = *(rax);
    goto label_1;
label_2:
    edx = (int32_t) r12b;
    r8 = rbx;
    return fcn_0040a550 (eax, r13d, rdx, 0x40ebe0);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x402920 */
#include <stdint.h>
 
uint64_t fcn_00402920 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = strlen (rdi);
    if (rax <= 0x7fffffff) {
        *(0x00614270) = rbx;
        *(0x006143dc) = eax;
        return rax;
    }
    fcn_004027f0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x402950 */
#include <stdint.h>
 
uint64_t fcn_00402950 (int64_t arg1) {
    rdi = arg1;
    edx = 5;
    rbx = rdi;
    rax = dcgettext (0, "invalid number of columns");
    r9d = 0;
    eax = fcn_00409680 (rbx, 1, 0x7fffffff, 0x40ce63, rax);
    *(0x0061444b) = 1;
    *(0x00614298) = eax;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4029a0 */
#include <stdint.h>
 
uint64_t fcn_004029a0 (uint32_t arg1) {
    rdi = arg1;
    if (*((rdi + 0x10)) == 3) {
        goto label_1;
    }
    rbx = rdi;
    rdi = *(rdi);
    if ((*(rdi) & 0x20) != 0) {
        goto label_2;
    }
    eax = fileno (rdi);
    if (eax != 0) {
        goto label_3;
    }
label_0:
    if (*(0x0061444f) != 0) {
        goto label_4;
    }
    edx = *(0x00614298);
    rax = imp.__libc_start_main;
    if (edx == 0) {
        goto label_5;
    }
    edx--;
    rdx++;
    rdx <<= 6;
    rdx += rax;
    do {
        ecx = *((rax + 0x2c));
        *((rax + 0x10)) = 3;
        if (ecx == 0) {
            *((rax + 0x30)) = 0;
        }
        rax += 0x40;
    } while (rax != rdx);
    *(0x00614410)--;
    return rax;
label_4:
    *((rbx + 0x10)) = 3;
    *((rbx + 0x30)) = 0;
label_5:
    *(0x00614410)--;
    return rax;
label_3:
    eax = fcn_0040aa20 (*(rbx));
    if (eax == 0) {
        goto label_0;
    }
    rdx = *((rbx + 8));
    rax = fcn_00408bb0 (0, 3);
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x40ef8a);
label_1:
    return rax;
label_2:
    rdx = *((rbx + 8));
    rax = fcn_00408bb0 (0, 3);
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x40ef8a);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x402ab0 */
#include <stdint.h>
 
uint64_t fcn_00402ab0 (int64_t arg1, int64_t arg2, int64_t arg7) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_30h;
    int64_t var_70h;
    int64_t var_c8h;
    int64_t var_d0h;
    rdi = arg1;
    rsi = arg2;
    xmm0 = arg7;
    ecx = 2;
    r12d = esi;
    rbx = rdi;
    edi = 0x410b71;
    rsi = rbx;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (unknown > unknown) ? 1 : 0;
    if (al == 0) {
        goto label_5;
    }
    if (r12d >= 0) {
        goto label_6;
    }
label_1:
    if (*(0x00614380) == 0) {
        goto label_7;
    }
    do {
label_0:
        __asm ("movdqa xmm0, xmmword [0x00614380]");
        *(rsp) = xmm0;
        r14 = *((rsp + 8));
label_2:
        rax = fcn_0040be80 (*(0x006143b8), rsp, rsp + 0x30);
        if (rax == 0) {
            goto label_8;
        }
        r8 = imp.__libc_start_main;
        r9d = r14d;
        rcx = rsp + 0x30;
        rdx = imp.__libc_start_main;
        fcn_004070f0 (0, 0xffffffffffffffff);
        r13 = rax + 1;
        rax = fcn_00409300 (r13);
        r9d = r14d;
        rcx = rsp + 0x30;
        r8 = imp.__libc_start_main;
        rdx = imp.__libc_start_main;
        rdi = rax;
        fcn_004070f0 (rdi, r13);
label_4:
        free (*(0x006143b0));
        rax = imp.__libc_start_main;
        *(0x006143b0) = rbp;
        if (rax == 0) {
            goto label_9;
        }
label_3:
        ebx = *(0x006142ac);
        *(0x006143a8) = rax;
        eax = fcn_00405850 (rbp, 0);
        ebx -= eax;
        eax = fcn_00405850 (*(0x006143a8), 0);
        ebx -= eax;
        *(0x006143a0) = ebx;
        return rax;
label_5:
        r12d = 0xffffffff;
    } while (*(0x00614380) != 0);
label_7:
    fcn_00405550 (0x614380);
    goto label_0;
label_6:
    rdx = rsp + 0x70;
    esi = r12d;
    edi = 1;
    eax = fxstat ();
    if (eax != 0) {
        goto label_1;
    }
    r14 = *((rsp + 0xd0));
    rax = *((rsp + 0xc8));
    *((rsp + 8)) = r14;
    *(rsp) = rax;
    goto label_2;
label_9:
    eax = 0x40ce63;
    __asm ("cmovns rax, rbx");
    goto label_3;
label_8:
    rax = fcn_00409300 (0x21);
    rax = fcn_004055f0 (*(rsp), rsp + 0x10, rdx);
    r9d = r14d;
    ecx = "%s.%09d";
    rdi = rbp;
    r8 = rax;
    edx = 0x21;
    esi = 1;
    eax = 0;
    sprintf_chk ();
    goto label_4;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x402ca0 */
#include <stdint.h>
 
int64_t fcn_00402ca0 (int64_t arg1) {
    rdi = arg1;
    ebx = imp.__libc_start_main;
    if (*(0x00614434) == 0) {
        goto label_0;
    }
    ebp -= ebx;
    *(0x00614430) = ebp;
    return;
    do {
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_1;
        }
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0x20;
label_0:
        ebx++;
    } while (ebp >= ebx);
    *(0x00614428) = ebp;
    return rax;
label_1:
    esi = 0x20;
    overflow ();
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x402d10 */
#include <stdint.h>
 
int64_t fcn_00402d10 (int64_t arg3) {
    rdx = arg3;
    r12d = imp.__libc_start_main;
    ebp = imp.__libc_start_main;
    r12d += ebp;
    do {
label_0:
        eax = r12d;
        eax -= ebp;
        if (eax <= 1) {
            goto label_1;
        }
        ecx = "\b\t\b\tHB\xc4\x81";
        eax = ebp;
        edx_eax = (int64_t) eax;
        eax = edx_eax / ecx;
        edx = edx_eax % ecx;
        ecx -= edx;
        ebx = rcx + rbp;
        if (r12d < ebx) {
            goto label_1;
        }
        rdi = stdout;
        esi = *(0x006142a0);
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_2;
        }
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = sil;
    } while (1);
    do {
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_3;
        }
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0x20;
label_1:
        ebp++;
    } while (r12d >= ebp);
    *(0x00614428) = r12d;
    *(0x00614430) = 0;
    r12 = rbx;
    return rax;
label_2:
    overflow ();
    goto label_0;
label_3:
    esi = 0x20;
    overflow ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x402dd0 */
#include <stdint.h>
 
int64_t fcn_00402dd0 (int64_t arg1) {
    rdi = arg1;
    edx = imp.__libc_start_main;
    eax = imp.__libc_start_main;
    if (edx <= 0) {
        goto label_3;
    }
    r13d = 0;
    r12 = *(0x00614270);
    ebp = imp.__libc_start_main;
label_0:
    rbx = r12;
    r14d = rbp + r12;
label_1:
    edx = r14d;
    edx -= ebx;
    if (edx <= 0) {
        goto label_4;
    }
    do {
        esi = *(rbx);
        rbx++;
        if (sil == 0x20) {
            goto label_5;
        }
        if (eax > 0) {
            fcn_00402d10 (rdi);
            esi = *((rbx - 1));
        }
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_6;
        }
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = sil;
label_2:
        edx = r14d;
        *(0x00614428)++;
        eax = imp.__libc_start_main;
        edx -= ebx;
    } while (edx > 0);
label_4:
    edx = r13d;
    __asm ("cmovns edx, ebp");
    ebp--;
    rcx = (int64_t) edx;
    ebp -= edx;
    r12 += rcx;
    if (eax > 0) {
        fcn_00402d10 (rdi);
    }
    eax = imp.__libc_start_main;
    eax--;
    *(0x006143d8) = eax;
    if (eax > 0) {
        eax = imp.__libc_start_main;
        goto label_0;
label_5:
        eax++;
        *(0x00614430) = eax;
        goto label_1;
label_6:
        eax = overflow ();
        goto label_2;
    }
    return rax;
label_3:
    if (eax <= 0) {
        return rax;
    }
invalid_funccall(); //    return void (*0x402d10)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x402ee0 */
#include <stdint.h>
 
uint64_t fcn_00402ee0 (void) {
    *(0x00614428) = 0;
    fcn_00402ca0 (*(0x0061442c));
    fcn_00402d10 (rdi);
    rbx = imp.__libc_start_main;
    if (rbx != 0) {
        edx = 5;
        rax = dcgettext (0, "Page %lu");
        r8 = rbx;
        edx = 0x114;
        rdi = rbp;
        rcx = rax;
        esi = 1;
        eax = 0;
        sprintf_chk ();
        ebx = imp.__libc_start_main;
        eax = fcn_00405850 (rbp, 0);
        edx = imp.__libc_start_main;
        ecx = 0x40ce63;
        r8 = imp.__libc_start_main;
        ebx -= eax;
        eax = 0;
        esi = "\n\n%*s%s%*s%s%*s%s\n\n\n";
        edi = 1;
        __asm ("cmovs ebx, eax");
        r9d = ebx;
        r9d >>= 1;
        ebx -= r9d;
        printf_chk ();
        *(0x00614448) = 0;
        *(0x00614428) = 0;
        return rax;
    }
    edx = 5;
    rax = dcgettext (0, "page number overflow");
    eax = 0;
    error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x402fe0 */
#include <stdint.h>
 
uint64_t fcn_00402fe0 (int64_t arg1, int64_t arg3) {
    int64_t var_ch;
    int64_t var_dh;
    int64_t var_eh;
    rdi = arg1;
    rdx = arg3;
    rbx = imp.__libc_start_main;
    if (*(0x006142a8) == dil) {
        goto label_4;
    }
    if (dil != 9) {
        ebp = (int32_t) dil;
        r12d = edi;
        rax = ctype_b_loc ();
        rax = *(rax);
        if ((*((rax + rbp*2 + 1)) & 0x40) != 0) {
            goto label_5;
        }
        if (*(0x006143ea) != 0) {
            goto label_6;
        }
        if (*(0x006143e9) == 0) {
            goto label_7;
        }
        if (r12b < 0) {
            goto label_6;
        }
        eax = imp.__libc_start_main;
        edi = r12d;
        *(rbx) = 0x5e;
        edi ^= 0x40;
        esi = rax + 2;
        *((rbx + 1)) = dil;
        eax = 2;
        goto label_2;
    }
    esi = imp.__libc_start_main;
    eax = imp.__libc_start_main;
    eax >>= 0x1f;
    eax >>= 0x1d;
    edx = rsi + rax;
    edx &= 7;
    eax -= edx;
    eax += 8;
    edx = eax;
    if (*(0x00614435) != 0) {
        goto label_8;
    }
label_0:
    *(rbx) = dil;
    eax = 1;
label_1:
    while (ecx < esi) {
        esi += edx;
label_2:
        *(0x00614424) = esi;
        return rax;
        if (esi == 0) {
            goto label_9;
        }
        ecx = edx;
        ecx = -ecx;
INVALID_JUMP;
    }
    *(0x00614424) = 0;
    return rax;
label_4:
    esi = imp.__libc_start_main;
    ecx = *(0x006142a4);
    eax = esi;
    edx_eax = (int64_t) eax;
    eax = edx_eax / ecx;
    edx = edx_eax % ecx;
    ecx -= edx;
    edx = ecx;
    if (*(0x00614435) == 0) {
        goto label_0;
    }
    if (ecx == 0) {
        goto label_10;
    }
    eax = ecx;
label_8:
    edx = rax - 1;
    rdx = rbx + rdx + 1;
    do {
        rbx++;
        *((rbx - 1)) = 0x20;
    } while (rbx != rdx);
    edx = eax;
    goto label_1;
label_5:
    eax = imp.__libc_start_main;
    *(rbx) = r12b;
    esi = rax + 1;
    eax = 1;
    goto label_2;
    do {
label_9:
        *(0x00614424) = 0;
        eax = 0;
        return rax;
label_6:
        *(rbx) = 0x5c;
        esi = 1;
        r8d = (int32_t) r12b;
        eax = 0;
        ecx = "%03o";
        edx = 4;
        rdi = rsp + 0xc;
        sprintf_chk ();
        eax = *((rsp + 0xc));
        *((rbx + 1)) = al;
        eax = *((rsp + 0xd));
        *((rbx + 2)) = al;
        eax = *((rsp + 0xe));
        *((rbx + 3)) = al;
        eax = imp.__libc_start_main;
        esi = rax + 4;
        eax = 4;
        goto label_2;
label_7:
        esi = imp.__libc_start_main;
        if (r12b != 8) {
            *(rbx) = r12b;
            eax = 1;
            goto label_2;
        }
        *(rbx) = 8;
    } while (esi == 0);
    ecx = 1;
    edx = 0xffffffff;
    eax = 1;
    goto label_3;
label_10:
    eax = 0;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4031e0 */
#include <stdint.h>
 
uint64_t fcn_004031e0 (int64_t arg1) {
    rdi = arg1;
    ebx = edi;
    if (*(0x00614434) == 0) {
        goto label_0;
    }
    eax = imp.__libc_start_main;
    if (dil == 0x20) {
        goto label_1;
    }
    ebp = (int32_t) dil;
    if (eax > 0) {
        fcn_00402d10 (rdi);
    }
    rax = ctype_b_loc ();
    rax = *(rax);
    if ((*((rax + rbp*2 + 1)) & 0x40) != 0) {
        goto label_2;
    }
    if (bl != 8) {
        goto label_0;
    }
    *(0x00614428)--;
    do {
label_0:
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_3;
        }
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = bl;
        return rax;
label_2:
        *(0x00614428)++;
    } while (1);
label_1:
    eax++;
    *(0x00614430) = eax;
    return rax;
label_3:
    esi = (int32_t) bl;
    return overflow ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x403410 */
#include <stdint.h>
 
int64_t fcn_00403410 (int64_t arg1, int64_t arg2, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
    if (*(0x0061444f) != 0) {
        goto label_0;
    }
    edx = *(0x00614298);
    rax = imp.__libc_start_main;
    if (edx == 0) {
        goto label_1;
    }
    ecx -= ecx;
    edx--;
    rdx++;
    ecx = ~ecx;
    rdx <<= 6;
    ecx += 2;
    rdx += rax;
    do {
        *((rax + 0x10)) = ecx;
        rax += 0x40;
    } while (rax != rdx);
label_1:
    *(rsi) = 0;
    *(0x00614410)--;
    return rax;
label_0:
    *(rdi) = 2;
    *(0x00614410)--;
    *(rsi) = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x403490 */
#include <stdint.h>
 
int64_t fcn_00403490 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r13 = rdi;
    r12d = esi;
    rbx = *(rdi);
    rax = *((rbx + 8));
    if (rax >= *((rbx + 0x10))) {
        goto label_10;
    }
    rdx = rax + 1;
    *((rbx + 8)) = rdx;
    eax = *(rax);
label_5:
    if (eax == 0xc) {
        goto label_11;
    }
    *((r13 + 0x39)) = 0;
    ebp = 0;
label_2:
    if (*(0x00614390) == 0) {
        goto label_1;
    }
    *((r13 + 0x39)) = 1;
    if (eax != 0xa) {
        goto label_12;
    }
    do {
label_3:
        if (*(0x00614280) != 0) {
            if (*(0x0061444f) == 1) {
                if (r12d != 1) {
                    goto label_13;
                }
            }
            if (bpl != 0) {
                goto label_13;
            }
            *(0x00614284)++;
        }
label_13:
        return rax;
label_0:
        rdx = rax + 1;
        *((rbx + 8)) = rdx;
        eax = *(rax);
INVALID_JUMP;
    } while (eax == 0xa);
label_12:
    if (eax == 0xc) {
        goto label_14;
    }
    if (eax == 0xffffffff) {
        goto label_15;
    }
    rax = *((rbx + 8));
    if (rax < *((rbx + 0x10))) {
        goto label_0;
    }
    rdi = rbx;
    uflow ();
    goto label_1;
label_11:
    if (*((r13 + 0x39)) == 0) {
        goto label_16;
    }
    rax = *((rbx + 8));
    if (rax >= *((rbx + 0x10))) {
        goto label_17;
    }
    rdx = rax + 1;
    *((rbx + 8)) = rdx;
    eax = *(rax);
label_9:
    if (eax == 0xa) {
        goto label_18;
    }
label_7:
    *((r13 + 0x39)) = 0;
    bpl = (eax == 0xc) ? 1 : 0;
    goto label_2;
label_15:
    fcn_004029a0 (r13);
    goto label_3;
label_14:
    eax = *(0x00614390);
label_4:
    if (al == 0) {
        goto label_6;
    }
    if (*(0x0061444f) != 0) {
        goto label_19;
    }
    edx = *(0x00614298);
    rax = imp.__libc_start_main;
    if (edx == 0) {
        goto label_6;
    }
    edx--;
    rdx++;
    rdx <<= 6;
    rdx += rax;
    do {
        *((rax + 0x39)) = 0;
        rax += 0x40;
    } while (rax != rdx);
    do {
label_6:
        rax = *((rbx + 8));
        if (rax >= *((rbx + 0x10))) {
            goto label_20;
        }
        rdx = rax + 1;
        *((rbx + 8)) = rdx;
        edi = *(rax);
label_8:
        if (edi == 0xa) {
            fcn_00403410 (r13 + 0x10, r13 + 0x30, rdx);
            goto label_3;
label_16:
            ebp = *(0x00614390);
            eax = ebp;
            if (bpl == 0) {
                goto label_21;
            }
            *((r13 + 0x39)) = 1;
            goto label_4;
        }
        ungetc (rdi, rbx);
        fcn_00403410 (r13 + 0x10, r13 + 0x30, rdx);
        goto label_3;
label_10:
        rdi = rbx;
        uflow ();
        goto label_5;
INVALID_JUMP;
    } while (1);
label_19:
    *((r13 + 0x39)) = 0;
    goto label_6;
label_18:
    rax = *((rbx + 8));
    if (rax < *((rbx + 0x10))) {
        rdx = rax + 1;
        *((rbx + 8)) = rdx;
        eax = *(rax);
        goto label_7;
label_20:
        rdi = rbx;
        eax = uflow ();
        edi = eax;
        goto label_8;
label_17:
        rdi = rbx;
        uflow ();
        goto label_9;
    }
    rdi = rbx;
    uflow ();
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4036c0 */
#include <stdint.h>
 
int32_t fcn_004036c0 (int64_t arg1) {
    rdi = arg1;
    r9d = imp.__libc_start_main;
    ecx = 0x40ce4f;
    eax = 0;
    r8d = *(0x00614278);
    rdx = 0xffffffffffffffff;
    rdi = imp.__libc_start_main;
    esi = 1;
    eax = sprintf_chk ();
    edx = *(0x00614278);
    *(0x00614400)++;
    eax -= edx;
    rbx = (int64_t) eax;
    eax = rdx - 1;
    rbx += *(0x006143f0);
    r12 = rbx + rax + 1;
    if (edx <= 0) {
        goto label_2;
    }
    do {
        rbx++;
        edi = *((rbx - 1));
invalid_funccall(); //        uint64_t (*rbp)() ();
    } while (rbx != r12);
label_2:
    edi = *(0x00614288);
    if (*(0x00614298) <= 1) {
        goto label_3;
    }
    if (dil == 9) {
        goto label_4;
    }
invalid_funccall(); //    uint64_t (*rbp)() ();
    do {
label_0:
        if (*(0x0061443d) != 0) {
            if (*(0x0061444f) != 0) {
                goto label_5;
            }
            eax = imp.__libc_start_main;
            *(0x00614424) += eax;
        }
label_5:
        return eax;
label_4:
        eax = imp.__libc_start_main;
        eax -= *(0x00614278);
        ebx = rax - 1;
    } while (eax <= 0);
label_1:
    ebx--;
    edi = 0x20;
invalid_funccall(); //    uint64_t (*rbp)() ();
    if (ebx == 0xffffffff) {
        goto label_0;
    }
    ebx--;
    edi = 0x20;
invalid_funccall(); //    uint64_t (*rbp)() ();
    if (ebx != 0xffffffff) {
        goto label_1;
    }
    goto label_0;
label_3:
invalid_funccall(); //    uint64_t (*rbp)() ();
    if (*(0x00614288) != 9) {
        goto label_0;
    }
    esi = imp.__libc_start_main;
    ecx = "\b\t\b\tHB\xc4\x81";
    eax = esi;
    edx_eax = (int64_t) eax;
    eax = edx_eax / ecx;
    edx = edx_eax % ecx;
    ecx -= edx;
    eax = rcx + rsi;
    *(0x00614428) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4037e0 */
#include <stdint.h>
 
int32_t fcn_004037e0 (int64_t arg1) {
    rdi = arg1;
    eax = imp.__libc_start_main;
    rbx = rdi;
    edi = *((rdi + 0x34));
    *(0x006143d4) = edi;
    if (edi > eax) {
        goto label_1;
    }
    if (*(0x006143e0) != 0) {
        goto label_2;
    }
    do {
        if (*((rbx + 0x38)) != 0) {
            goto label_3;
        }
label_0:
        return eax;
label_1:
        edi -= eax;
        fcn_00402ca0 (rdi);
        *(0x006143d4) = 0;
    } while (*(0x006143e0) == 0);
label_2:
    fcn_00402dd0 (rdi);
    if (*((rbx + 0x38)) == 0) {
        goto label_0;
    }
label_3:
    rdi = rbx + 0x20;
invalid_funccall(); //    return void (*0x4036c0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x403840 */
#include <stdint.h>
 
int64_t fcn_00403840 (uint32_t arg1) {
    rdi = arg1;
    rdi = *(rdi);
    rax = *((rdi + 8));
    if (rax >= *((rdi + 0x10))) {
        goto label_17;
    }
    rdx = rax + 1;
    *((rdi + 8)) = rdx;
    ebx = *(rax);
label_10:
    r13d = imp.__libc_start_main;
    if (ebx == 0xc) {
        goto label_18;
    }
label_2:
    *((rbp + 0x39)) = 0;
    if (ebx != 0xa) {
        if (ebx == 0xc) {
            goto label_19;
        }
        if (ebx == 0xffffffff) {
            goto label_0;
        }
        edi = (int32_t) bl;
        eax = fcn_00402fe0 (rdi, rsi);
        r12d = eax;
    }
    if (*(0x0061443d) != 0) {
        eax = imp.__libc_start_main;
        if (*(0x00614424) > eax) {
            goto label_20;
        }
    }
    if (*((rbp + 0x20)) == 0x402790) {
        goto label_5;
    }
    *(0x006143d0) = 1;
    if (*(0x00614448) != 0) {
        if (*(0x006142b4) == 0) {
            goto label_21;
        }
    }
label_11:
    if (*(0x0061444f) == 0) {
        goto label_22;
    }
    if (*(0x0061444e) == 0) {
        goto label_22;
    }
    eax = imp.__libc_start_main;
    r13 = imp.__libc_start_main;
    *(0x006143d8) = 0;
    if (eax <= 0) {
        goto label_23;
    }
    r14d = rax - 1;
    r14++;
    r14 <<= 6;
    r14 += r13;
    do {
        r13 += 0x40;
        fcn_004037e0 (r13);
        *(0x006143d8)++;
    } while (r14 != r13);
label_23:
    edi = *((rbp + 0x34));
    eax = 0;
    *(0x0061444e) = 0;
    if (*(0x0061443d) != 0) {
        eax = imp.__libc_start_main;
    }
    *(0x006143d4) = edi;
    *(0x00614430) = eax;
    goto label_24;
label_0:
    fcn_004029a0 (rbp);
    eax = 1;
    do {
label_6:
        return rax;
label_22:
        edi = imp.__libc_start_main;
label_24:
        eax = imp.__libc_start_main;
        if (eax < edi) {
            goto label_25;
        }
label_4:
        if (*(0x006143e0) != 0) {
            goto label_26;
        }
label_5:
        if (*((rbp + 0x38)) != 0) {
            goto label_27;
        }
label_8:
        *(0x0061444d) = 0;
        eax = 1;
    } while (ebx == 0xa);
    rbx = imp.__libc_start_main;
    eax = r12 - 1;
    r13 = rbx + rax + 1;
    if (r12d == 0) {
        goto label_1;
    }
    do {
        rbx++;
        edi = *((rbx - 1));
invalid_funccall(); //        uint64_t (*rbp + 0x20)() ();
    } while (r13 != rbx);
label_1:
    rdi = *(rbp);
    rax = *((rdi + 8));
    if (rax >= *((rdi + 0x10))) {
        goto label_28;
    }
    rdx = rax + 1;
    *((rdi + 8)) = rdx;
    eax = *(rax);
label_13:
    if (eax == 0xa) {
        goto label_29;
    }
    if (eax == 0xc) {
        goto label_30;
    }
    if (eax == 0xffffffff) {
        goto label_0;
    }
    edi = (int32_t) al;
    ebx = imp.__libc_start_main;
    eax = fcn_00402fe0 (rdi, rsi);
    if (*(0x0061443d) != 0) {
        goto label_31;
    }
label_7:
    rbx = imp.__libc_start_main;
    edx = rax - 1;
    r12 = rbx + rdx + 1;
    if (eax == 0) {
        goto label_1;
    }
    do {
        rbx++;
        edi = *((rbx - 1));
invalid_funccall(); //        uint64_t (*rbp + 0x20)() ();
    } while (rbx != r12);
    goto label_1;
label_18:
    rdi = *(rbp);
    rax = *((rdi + 8));
    rdx = *((rdi + 0x10));
    if (*((rbp + 0x39)) == 0) {
        goto label_32;
    }
    if (rax >= rdx) {
        goto label_33;
    }
    rdx = rax + 1;
    *((rdi + 8)) = rdx;
    ebx = *(rax);
label_15:
    if (ebx != 0xa) {
        goto label_2;
    }
    rdi = *(rbp);
    rax = *((rdi + 8));
    if (rax >= *((rdi + 0x10))) {
        goto label_34;
    }
    rdx = rax + 1;
    *((rdi + 8)) = rdx;
    ebx = *(rax);
    goto label_2;
label_19:
    rdi = *(rbp);
    rax = *((rdi + 8));
    rdx = *((rdi + 0x10));
label_32:
    if (rdx <= rax) {
        goto label_35;
    }
    rdx = rax + 1;
    *((rdi + 8)) = rdx;
    edi = *(rax);
label_14:
    if (edi != 0xa) {
        goto label_36;
    }
    *(0x0061444c) = 1;
    if (*(0x00614448) == 0) {
        goto label_9;
    }
label_3:
    if (*(0x006142b4) == 0) {
        goto label_37;
    }
    do {
label_9:
        if (*(0x0061444a) != 0) {
            *(0x00614449) = 1;
        }
label_12:
        fcn_00403410 (rbp + 0x10, rbp + 0x30, rdx);
        eax = 1;
        return rax;
label_36:
        eax = ungetc (rdi, *(rbp));
        *(0x0061444c) = 1;
    } while (*(0x00614448) == 0);
    goto label_3;
label_25:
    edi -= eax;
    fcn_00402ca0 (rdi);
    *(0x006143d4) = 0;
    goto label_4;
label_26:
    eax = fcn_00402dd0 (rdi);
    goto label_5;
label_20:
    *(0x00614424) = r13d;
    eax = 0;
    goto label_6;
label_31:
    ecx = imp.__libc_start_main;
    if (*(0x00614424) <= ecx) {
        goto label_7;
    }
    *(0x00614424) = ebx;
    eax = 0;
    goto label_6;
label_27:
    fcn_004036c0 (rbp + 0x20);
    goto label_8;
label_29:
    eax = 1;
    return rax;
label_30:
    rdi = *(rbp);
    rax = *((rdi + 8));
    if (rax >= *((rdi + 0x10))) {
        goto label_38;
    }
    rdx = rax + 1;
    *((rdi + 8)) = rdx;
    edi = *(rax);
label_16:
    if (edi == 0xa) {
        goto label_9;
    }
    ungetc (rdi, *(rbp));
    goto label_9;
label_17:
    eax = uflow ();
    ebx = eax;
    goto label_10;
label_21:
    fcn_00402ee0 ();
    goto label_11;
label_37:
    *(0x006143d0) = 1;
    fcn_00402ee0 ();
    goto label_12;
label_28:
    uflow ();
    goto label_13;
label_35:
    eax = uflow ();
    edi = eax;
    goto label_14;
label_33:
    eax = uflow ();
    ebx = eax;
    goto label_15;
label_38:
    eax = uflow ();
    edi = eax;
    goto label_16;
label_34:
    eax = uflow ();
    ebx = eax;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x403c80 */
#include <stdint.h>
 
uint64_t fcn_00403c80 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 2;
    edi = 0x410b71;
    rbx = rsi;
    rsi = rbp;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (unknown > unknown) ? 1 : 0;
    if (al != 0) {
        goto label_0;
    }
    edx = 5;
    rax = dcgettext (0, "standard input");
    rdi = stdin;
    *(0x00614446) = 1;
    *((rbx + 8)) = rax;
    *(rbx) = rdi;
    if (rdi == 0) {
        goto label_1;
    }
    do {
        fcn_00405480 (rdi, 2);
        *((rbx + 0x10)) = 0;
        *((rbx + 0x39)) = 0;
        ebx = 1;
        *(0x006143e4)++;
        eax = ebx;
        return rax;
label_0:
        *((rbx + 8)) = rbp;
        rax = fcn_004054b0 (rbp, 0x40cff8);
        rdi = rax;
        *(rbx) = rax;
    } while (rdi != 0);
label_1:
    ebx = *(0x006143e1);
    *(0x00614420) = 1;
    if (bl != 0) {
        ebx = 0;
        eax = ebx;
        return rax;
    }
    rdx = rbp;
    rax = fcn_00408bb0 (rdi, 3);
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (0, *(rax), 0x40ef8a);
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x403d80 */
#include <stdint.h>
 
uint64_t fcn_00403d80 (int64_t arg1) {
    rdi = arg1;
    rbx = *(rdi);
    while (rax < *((rbx + 0x10))) {
        rdx = rax + 1;
        *((rbx + 8)) = rdx;
        eax = *(rax);
        if (eax == 0xa) {
            goto label_3;
        }
label_0:
        if (eax == 0xc) {
            goto label_4;
        }
        if (eax == 0xffffffff) {
            goto label_5;
        }
        rax = *((rbx + 8));
    }
    rdi = rbx;
    eax = uflow ();
    if (eax != 0xa) {
        goto label_0;
    }
label_3:
    return rax;
label_4:
    rax = *((rbx + 8));
    if (rax >= *((rbx + 0x10))) {
        goto label_6;
    }
    rdx = rax + 1;
    *((rbx + 8)) = rdx;
    edi = *(rax);
label_2:
    if (edi != 0xa) {
        goto label_7;
    }
    if (*(0x0061444a) == 0) {
        goto label_8;
    }
label_1:
    *(0x00614449) = 1;
    do {
label_8:
        rsi = rbp + 0x30;
        rdi = rbp + 0x10;
invalid_funccall(); //        void (*0x403410)() ();
label_5:
        rdi = rbp;
invalid_funccall(); //        void (*0x4029a0)() ();
label_7:
        ungetc (rdi, rbx);
    } while (*(0x0061444a) == 0);
    goto label_1;
label_6:
    rdi = rbx;
    eax = uflow ();
    edi = eax;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x403e40 */
#include <stdint.h>
 
uint64_t fcn_00403e40 (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    int64_t var_ch;
    rdi = arg1;
    rsi = arg2;
    r12d = edi;
    rbx = rsi;
    edx = *(0x006142b0);
    eax = rdx - 0xa;
    *(0x00614440) = eax;
    if (eax <= 0) {
        goto label_34;
    }
    if (*(0x006142b5) == 0) {
        goto label_35;
    }
label_2:
    if (*(0x006143e8) != 0) {
        edx = imp.__libc_start_main;
        eax = imp.__libc_start_main;
        eax >>= 0x1f;
        eax += edx;
        eax >>= 1;
        *(0x00614440) = eax;
    }
    if (r12d != 0) {
        goto label_36;
    }
    *(0x0061444f) = 0;
    ecx = *(0x00614298);
label_5:
    if (*(0x006142b4) != 0) {
        *(0x00614444) = 1;
    }
    edx = *(0x0061443c);
    if (ecx <= 1) {
        goto label_37;
    }
    if (*(0x006143e0) != 0) {
        goto label_38;
    }
    eax = 0x411057;
    esi = 0x40ce62;
    *(0x006143dc) = 1;
    if (dl != 0) {
        rax = rsi;
    }
    *(0x006143e0) = 1;
    *(0x00614270) = rax;
    eax = 1;
label_3:
    *(0x0061443d) = 1;
    *(0x00614434) = 1;
label_16:
    if (dl != 0) {
        *(0x0061443d) = 0;
    }
    esi = *(0x006143fc);
    if (sil == 0) {
        goto label_39;
    }
    edx = *(0x0061427c);
    *(0x00614284) = edx;
    edx = *(0x00614278);
    edi = rdx + 1;
    if (*(0x00614288) == 9) {
        edi = edx;
        edi >>= 0x1f;
        edi >>= 0x1d;
        r8d = rdx + rdi;
        r8d &= 7;
        edi -= r8d;
        edi = rdx + rdi + 8;
    }
    *(0x006143f8) = edi;
    if (*(0x0061444f) == 0) {
        goto label_39;
    }
label_4:
    edx = rcx - 1;
    edx *= eax;
    if (UNKNOWN_OP /**(0x0061444f) overflow 0*/) {
        goto label_40;
    }
label_33:
    eax = *(0x006142ac);
    eax -= edi;
    eax -= edx;
    if (UNKNOWN_OP /*eax overflow 0*/) {
        goto label_41;
    }
    edx_eax = (int64_t) eax;
    eax = edx_eax / ecx;
    edx = edx_eax % ecx;
    *(0x00614438) = eax;
    if (eax <= 0) {
        goto label_42;
    }
    if (sil != 0) {
        goto label_43;
    }
label_17:
    free (*(0x00614398));
    edi = 8;
    if (*(0x006142a4) >= 8) {
        edi = *(0x006142a4);
    }
    rdi = (int64_t) edi;
    rax = fcn_00409300 (rdi);
    *(0x006143e4) = 0;
    *(0x00614398) = rax;
    free (*(0x00614478));
    rdi = *(0x00614298);
    rax = rdi;
    rax >>= 0x3a;
    al = (rax != 0) ? 1 : 0;
    rdi <<= 6;
    eax = (int32_t) al;
    if (rdi < 0) {
        goto label_44;
    }
    if (rax != 0) {
        goto label_44;
    }
    rax = fcn_00409300 (rdi);
    *(0x00614478) = rax;
    if (*(0x0061444f) == 0) {
        goto label_45;
    }
    if (r12d == 0) {
        goto label_46;
    }
    eax = r12 - 1;
    r12 = rbx + rax*8 + 8;
    while (al != 0) {
        rbx += 8;
        rbp += 0x40;
        if (rbx == r12) {
            goto label_46;
        }
label_0:
        al = fcn_00403c80 (*(rbx), rbp);
    }
    rbx += 8;
    *(0x00614298)--;
    if (rbx != r12) {
        goto label_0;
    }
label_46:
    eax = *(0x00614298);
    if (eax == 0) {
        goto label_7;
    }
    fcn_00402ab0 (0x40ce63, 0xffffffff, rdx);
label_25:
    eax = imp.__libc_start_main;
    *(0x00614410) = eax;
    if (*(0x006142b4) != 0) {
        goto label_47;
    }
label_24:
    r13 = imp.__libc_start_main;
    if (r13 > 1) {
        goto label_48;
    }
    *(0x00614408) = 1;
label_23:
    ebp = *(0x0061443d);
    esi = imp.__libc_start_main;
    r8d = 0;
    if (bpl != 0) {
        r8d = imp.__libc_start_main;
        r8d += esi;
        if (*(0x0061444f) != 0) {
            goto label_49;
        }
    }
label_27:
    r12d = imp.__libc_start_main;
    r10 = imp.__libc_start_main;
    r9d = *(0x00614298);
    r11d = *(0x006142b4);
    esi += r12d;
    rdx = r10;
    ebx = r9d;
    eax = r11d;
    if (r9d <= 1) {
        goto label_50;
    }
    r13d = *(0x0061444f);
    edi = *(0x006143fc);
    rax = r10;
    edx = 1;
    r14d = imp.__libc_start_main;
    r13d ^= 1;
    while (r11b != 0) {
        *((rax + 0x20)) = 0x402790;
        *((rax + 0x18)) = 0x403280;
label_1:
        ecx = 0;
        if (dil != 0) {
            cl = (edx == 1) ? 1 : 0;
            ecx |= r13d;
        }
        *((rax + 0x38)) = cl;
        *((rax + 0x34)) = esi;
        if (bpl == 0) {
            goto label_51;
        }
        esi = r12 + r8;
        edx++;
        rax += 0x40;
        r8d = rsi + r14;
        if (edx == r9d) {
            goto label_52;
        }
INVALID_JUMP;
    }
    *((rax + 0x20)) = fcn_004031e0;
    *((rax + 0x18)) = fcn_00403840;
    goto label_1;
label_34:
    *(0x006142b5) = 0;
    *(0x0061444a) = 1;
label_35:
    *(0x00614440) = edx;
    goto label_2;
label_38:
    eax = imp.__libc_start_main;
    if (dl != 0) {
        goto label_3;
    }
    if (eax != 1) {
        goto label_3;
    }
    rsi = *(0x00614270);
    if (*(rsi) != 9) {
        goto label_3;
    }
    *(0x00614270) = 0x411057;
    goto label_3;
label_39:
    edi = 0;
    goto label_4;
label_36:
    if (*(0x0061444f) == 0) {
        goto label_53;
    }
    *(0x00614298) = r12d;
    ecx = r12d;
    goto label_5;
label_45:
    if (r12d <= 0) {
        goto label_54;
    }
    al = fcn_00403c80 (*(rbx), rax);
    if (al != 0) {
        goto label_55;
    }
label_7:
    return rax;
label_51:
    edx++;
    r8d = 0;
    esi = 0;
    rax += 0x40;
    if (edx != r9d) {
        goto label_6;
    }
label_52:
    edx = r9 - 2;
    eax = r11d;
    rdx++;
    rdx <<= 6;
    rdx += r10;
label_32:
    if (r11b != 0) {
        if (*(0x00614444) != 0) {
            goto label_56;
        }
    }
    *((rdx + 0x20)) = fcn_004031e0;
    *((rdx + 0x18)) = fcn_00403840;
label_28:
    if (dil != 0) {
        edi = *(0x0061444f);
        edi ^= 1;
        cl = (ebx == 1) ? 1 : 0;
        edi |= ecx;
    }
    *((rdx + 0x38)) = dil;
    r12d = 0;
    rbx = r10;
    *((rdx + 0x34)) = esi;
    edx = *(0x00614284);
    *(0x00614400) = edx;
    if (al != 0) {
        goto label_57;
    }
label_8:
    if (r9d == 0) {
        goto label_14;
    }
    eax = r9 - 1;
    ecx = imp.__libc_start_main;
    rax++;
    rax <<= 6;
    rax += r10;
    do {
        edi = *((rbx + 0x10));
        edx = r12d;
        if (edi == 0) {
            edx = ecx;
        }
        rbx += 0x40;
        *((rbx - 0x10)) = edx;
    } while (rax != rbx);
label_14:
    eax = fcn_004026b0 ();
    if (eax == 0) {
        goto label_7;
    }
    if (*(0x006142b5) != 0) {
        *(0x00614448) = 1;
    }
    ebp = imp.__libc_start_main;
    *(0x006143d0) = 0;
    eax = rbp + rbp;
    if (*(0x006143e8) != 0) {
    }
    r13d = 0;
    if (ebp <= 0) {
        goto label_58;
    }
    eax = fcn_004026b0 ();
    if (eax == 0) {
        goto label_59;
    }
    esi = *(0x00614298);
    *(0x00614428) = r12d;
    *(0x00614430) = r12d;
    rbx = imp.__libc_start_main;
    *(0x006143d8) = r12d;
    *(0x006143d0) = 0;
    *(0x0061444e) = 0;
    *(0x0061444d) = 1;
    if (esi <= 0) {
        goto label_60;
    }
    r14d = 1;
    ecx = *((rbx + 0x30));
    *(0x00614424) = r12d;
    if (ecx > 0) {
invalid_funccall(); //        void (*0x4043d0)() ();
    }
label_60:
    eax = fcn_004026b0 ();
    if (eax == 0) {
        goto label_61;
    }
label_12:
    if (*(0x006143e8) == 0) {
invalid_funccall(); //        void (*0x404502)() ();
    }
label_31:
    eax = r9 - 1;
    rax++;
    rax <<= 6;
    rax += r10;
    do {
        edx = *((r10 + 0x10));
        if (edx == 0) {
            *((r10 + 0x39)) = 1;
        }
        r10 += 0x40;
    } while (r10 != rax);
label_59:
    *(0x006143d0) = r13b;
    if (r13b != 0) {
        if (*(0x006142b5) != 0) {
            goto label_62;
        }
    }
label_30:
    if (*(0x0061444a) == 0) {
        goto label_63;
    }
    if (*(0x00614449) == 0) {
        goto label_63;
    }
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
invalid_funccall(); //        void (*0x404d58)() ();
    }
label_63:
    rax = imp.__libc_start_main;
    rax++;
    *(0x00614408) = rax;
    if (rax > *(0x00614290)) {
        goto label_7;
    }
    fcn_00402710 ();
    r10 = imp.__libc_start_main;
    eax = *(0x006142b4);
    r9d = *(0x00614298);
    rbx = r10;
    if (al == 0) {
        goto label_8;
    }
label_57:
    r8d = *(0x00614444);
    eax = r9d;
    *(0x00614468) = r12d;
    *((rsp + 0xc)) = eax;
    if (eax <= 0) {
        goto label_64;
    }
    edx = rax - 1;
    rax = r10;
    rdx++;
    rdx <<= 6;
    rdx += r10;
    do {
        *((rax + 0x2c)) = 0;
        rax += 0x40;
    } while (rax != rdx);
    eax = imp.__libc_start_main;
    if (eax == 0) {
        goto label_65;
    }
    *((rsp + 8)) = 1;
    r13d = 0;
    ebp = 0;
    r15d = 0;
label_11:
    r14d = imp.__libc_start_main;
    *((rbx + 0x28)) = ebp;
    if (r14d != 0) {
        goto label_10;
    }
    goto label_66;
    do {
label_9:
        r14d--;
        if (r14d == 0) {
            goto label_66;
        }
label_10:
        eax = imp.__libc_start_main;
        if (eax == 0) {
            goto label_67;
        }
        r11d = *((rbx + 0x10));
    } while (r11d != 0);
    *(0x00614424) = r12d;
    al = fcn_00403840 (rbx);
    if (al == 0) {
        goto label_68;
    }
label_13:
    r10d = *((rbx + 0x10));
    eax = imp.__libc_start_main;
    if (r10d == 0) {
        goto label_69;
    }
    if (eax == r13d) {
        goto label_9;
    }
label_69:
    rsi = imp.__libc_start_main;
    *((rbx + 0x2c))++;
    ebp++;
    rdx = imp.__libc_start_main;
    *((rsi + r15*4)) = r13d;
    esi = imp.__libc_start_main;
    r13d = eax;
    *((rdx + r15*4)) = esi;
    r15d = ebp;
    r14d--;
    if (r14d != 0) {
        goto label_10;
    }
label_66:
    rbx += 0x40;
    ecx = *((rsp + 8));
    eax = r13d;
    rsi = r15*4;
    if (*((rsp + 0xc)) < ecx) {
        goto label_70;
    }
    r9d = imp.__libc_start_main;
    if (r9d != 0) {
        goto label_11;
    }
label_70:
    rbx = imp.__libc_start_main;
    r9d = *(0x00614298);
    r8d = *(0x00614444);
    r10 = rbx;
    goto label_18;
label_61:
    if (*(0x006142b5) != 0) {
        goto label_12;
    }
label_68:
    fcn_00403d80 (rbx);
    goto label_13;
label_67:
    r10 = imp.__libc_start_main;
    r9d = *(0x00614298);
    eax = r13d;
    rsi = r15*4;
    r8d = *(0x00614444);
    rbx = r10;
label_18:
    rdx = imp.__libc_start_main;
    r14d = r9 - 1;
    *((rdx + rsi)) = eax;
    if (r8b == 0) {
        goto label_71;
    }
    if (r9d <= 0) {
        goto label_72;
    }
    eax = ebp;
    r13d = r9 + 1;
    edi = 0;
    rsi = r10;
    edx_eax = (int64_t) eax;
    ecx = 1;
    eax = edx_eax / r9d;
    edx = edx_eax % r9d;
    r15d = rax + 1;
    do {
        r11d = eax;
        *((rsi + 0x28)) = edi;
        if (edx >= ecx) {
            r11d = r15d;
        }
        ecx++;
        rsi += 0x40;
        *((rsi - 0x14)) = r11d;
        edi += r11d;
    } while (ecx != r13d);
label_72:
    if (r14d == 0) {
        goto label_73;
    }
label_15:
    edx = r9 - 2;
    rax = r10;
    rbx = rdx;
    rdx++;
    rdx <<= 6;
    rdx += r10;
    do {
        ecx = *((rax + 0x2c));
        rax += 0x40;
        *((rax - 0x10)) = ecx;
    } while (rax != rdx);
    rbx++;
    rbx <<= 6;
    rbx += r10;
    if (r8b == 0) {
        goto label_74;
    }
label_73:
    eax = *((rbx + 0x2c));
    *((rbx + 0x30)) = eax;
    goto label_14;
label_71:
    if (r14d != 0) {
        goto label_15;
    }
label_74:
    r8d = *((rbx + 0x10));
    if (r8d != 0) {
        goto label_75;
    }
    eax = imp.__libc_start_main;
    *((rbx + 0x30)) = eax;
    goto label_14;
label_62:
    if (*(0x00614447) != 0) {
invalid_funccall(); //        void (*0x404970)() ();
    }
label_75:
    *((rbx + 0x30)) = 0;
    goto label_14;
label_37:
    *(0x006142b4) = 0;
    eax = imp.__libc_start_main;
    goto label_16;
label_43:
    free (*(0x006143f0));
    rdi = *(0x00614278);
    rax = rdi;
    rdi++;
    eax = 0xc;
    if (eax <= 0xb) {
        rdi = rax;
    }
    rax = fcn_00409300 (rdi);
    *(0x006143f0) = rax;
    goto label_17;
label_64:
    eax = 0;
label_65:
    esi = 0;
    ebp = 0;
    goto label_18;
label_48:
    r12d = 1;
label_22:
    rbx = imp.__libc_start_main;
    r14d = 1;
    r9d = *(0x00614298);
    if (*(0x00614440) <= 1) {
        goto label_76;
    }
label_20:
    if (r9d <= 0) {
        goto label_77;
    }
    while (eax != 0) {
        ebp++;
        rbx += 0x40;
        if (ebp > r9d) {
            goto label_78;
        }
label_19:
        eax = *((rbx + 0x10));
    }
    ebp++;
    rbx += 0x40;
    fcn_00403490 (rbx, ebp);
    r9d = *(0x00614298);
    if (ebp <= r9d) {
        goto label_19;
    }
label_78:
    rbx = imp.__libc_start_main;
label_77:
    r14d++;
    if (r14d < *(0x00614440)) {
        goto label_20;
    }
label_76:
    *(0x00614390) = 1;
    if (r9d <= 0) {
        goto label_79;
    }
    while (eax != 0) {
        ebp++;
        rbx += 0x40;
        if (ebp > r9d) {
            goto label_80;
        }
label_21:
        eax = *((rbx + 0x10));
    }
    ebp++;
    rbx += 0x40;
    fcn_00403490 (rbx, ebp);
    r9d = *(0x00614298);
    if (ebp <= r9d) {
        goto label_21;
    }
label_80:
    if (*(0x006142b4) == 0) {
        goto label_79;
    }
    rax = imp.__libc_start_main;
    if (r9d <= 0) {
        goto label_79;
    }
    edx = r9 - 1;
    rdx++;
    rdx <<= 6;
    rdx += rax;
    do {
        if (*((rax + 0x10)) != 3) {
            *((rax + 0x10)) = 2;
        }
        rax += 0x40;
    } while (rax != rdx);
label_79:
    fcn_00402710 ();
    eax = imp.__libc_start_main;
    *(0x00614390) = 0;
    if (eax <= 0) {
        goto label_81;
    }
    r12++;
    if (r13 != r12) {
        goto label_22;
    }
label_29:
    rax = imp.__libc_start_main;
    *(0x00614408) = rax;
    goto label_23;
label_47:
    ebx = imp.__libc_start_main;
    ebx *= *(0x00614298);
    if (UNKNOWN_OP /*r13 overflow r12*/) {
        goto label_82;
    }
    r12d = ebx;
    r12d++;
    if (UNKNOWN_OP /*r12d overflow 0*/) {
        goto label_82;
    }
    ebp = imp.__libc_start_main;
    ebp++;
    if (UNKNOWN_OP /*ebp overflow 0*/) {
        goto label_82;
    }
    ebp *= ebx;
    if (UNKNOWN_OP /*ebp overflow 0*/) {
        goto label_82;
    }
    free (*(0x00614458));
    rdi = (int64_t) r12d;
    rax = rdi;
    rax >>= 0x3e;
    al = (rax != 0) ? 1 : 0;
    rdi <<= 2;
    eax = (int32_t) al;
    if (rdi < 0) {
        goto label_44;
    }
    if (rax != 0) {
        goto label_44;
    }
    rax = fcn_00409300 (rdi);
    *(0x00614458) = rax;
    free (*(0x00614450));
    rdi = (int64_t) ebx;
    rax = rdi;
    rax >>= 0x3e;
    al = (rax != 0) ? 1 : 0;
    rdi <<= 2;
    eax = (int32_t) al;
    if (rdi < 0) {
        goto label_44;
    }
    if (rax != 0) {
        goto label_44;
    }
    rax = fcn_00409300 (rdi);
    rbx = (int64_t) ebp;
    *(0x00614450) = rax;
    free (*(0x00614470));
    eax = *(0x006143e0);
    rdi = rax + 1;
    rax = rbx;
    rdx_rax = rax * rdi;
    __asm ("seto dl");
    edx = (int32_t) dl;
    if (rax < 0) {
        goto label_44;
    }
    if (rdx != 0) {
        goto label_44;
    }
    rax = fcn_00409300 (rax);
    *(0x00614470) = rax;
    eax = *(0x006143e0);
    rax++;
    rbx *= rax;
    *(0x00614460) = rbx;
    goto label_24;
label_54:
    edx = 5;
    rax = dcgettext (0, "standard input");
    *((rbp + 0x39)) = 0;
    *((rbp + 8)) = rax;
    rax = stdin;
    *((rbp + 0x10)) = 0;
    *(rbp) = rax;
    *(0x00614446) = 1;
    *(0x006143e4)++;
    fcn_00402ab0 (0x40ce63, 0xffffffff, rdx);
    *((rbp + 0x2c)) = 0;
label_26:
    esi = *(0x00614298);
    rax = *((rbp + 8));
    rdx = rbp + 0x40;
    rcx = *(rbp);
    if (esi == 1) {
        goto label_25;
    }
    esi -= 2;
    rsi += 2;
    rsi <<= 6;
    rbp += rsi;
    do {
        *((rdx + 8)) = rax;
        rdx += 0x40;
        *((rdx - 0x40)) = rcx;
        *((rdx - 0x30)) = 0;
        *((rdx - 7)) = 0;
        *((rdx - 0x14)) = 0;
    } while (rdx != rbp);
    goto label_25;
label_55:
    eax = fileno (*(rbp));
    fcn_00402ab0 (*(rbx), eax, rdx);
    *((rbp + 0x2c)) = 0;
    goto label_26;
label_49:
    if (*(0x006143fc) == 0) {
        goto label_27;
    }
    r8d += *(0x006143f8);
    goto label_27;
label_56:
    *((rdx + 0x20)) = 0x402790;
    *((rdx + 0x18)) = 0x403280;
    goto label_28;
label_81:
    edx = 5;
    rax = dcgettext (0, "starting page number %lu exceeds page count %lu");
    r8 = r12;
    rcx = r13;
    eax = 0;
    error (0, 0, rax);
    eax = imp.__libc_start_main;
    if (eax <= 0) {
        goto label_7;
    }
    goto label_29;
    if (eax != 0) {
label_58:
        goto label_30;
    }
    if (r9d > 0) {
        goto label_31;
    }
    goto label_30;
label_50:
    ebx = 1;
    edi = *(0x006143fc);
    goto label_32;
label_82:
    fcn_004027f0 ();
label_41:
    *(0x00614438) = 0;
label_42:
    edx = 5;
    rax = dcgettext (0, "page width too narrow");
    eax = 0;
    error (1, 0, rax);
label_44:
    fcn_00409550 ();
label_40:
    edx = 0x7fffffff;
    goto label_33;
label_53:
    ecx = *(0x00614298);
    goto label_5;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x404de0 */
#include <stdint.h>
 
uint64_t fcn_00404de0 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [OPTION].. [FILE]..\n");
    rdx = rbp;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Paginate or columnate FILE(s) for printing.\n");
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
    rax = dcgettext (0, "\nMandatory arguments to long options are mandatory for short options too.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  +FIRST_PAGE[:LAST_PAGE], --pages=FIRST_PAGE[:LAST_PAGE]\n                    begin [stop] printing with page FIRST_[LAST_]PAGE\n  -COLUMN, --columns=COLUMN\n                    output COLUMN columns and print columns down,\n                    unless -a is used. Balance number of lines in the\n                    columns on each page\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -a, --across      print columns across rather than down, used together\n                    with -COLUMN\n  -c, --show-control-chars\n                    use hat notation (^G) and octal backslash notation\n  -d, --double-space\n                    double space the output\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -D, --date-format=FORMAT\n                    use FORMAT for the header date\n  -e[CHAR[WIDTH]], --expand-tabs[=CHAR[WIDTH]]\n                    expand input CHARs (TABs) to tab WIDTH (8)\n  -F, -f, --form-feed\n                    use form feeds instead of newlines to separate pages\n                    (by a 3-line page header with -F or a 5-line header\n                    and trailer without -F)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -h, --header=HEADER\n                    use a centered HEADER instead of filename in page header,\n                    -h \"\" prints a blank line, don't use -h\"\"\n  -i[CHAR[WIDTH]], --output-tabs[=CHAR[WIDTH]]\n                    replace spaces with CHARs (TABs) to tab WIDTH (8)\n  -J, --join-lines  merge full lines, turns off -W line truncation, no column\n                    alignment, --sep-string[=STRING] sets separators\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -l, --length=PAGE_LENGTH\n                    set the page length to PAGE_LENGTH (66) lines\n                    (default number of lines of text 56, and with -F 63).\n                    implies -t if PAGE_LENGTH <= 10\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -m, --merge       print all files in parallel, one in each column,\n                    truncate lines, but join lines of full length with -J\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -n[SEP[DIGITS]], --number-lines[=SEP[DIGITS]]\n                    number lines, use DIGITS (5) digits, then SEP (TAB),\n                    default counting starts with 1st line of input file\n  -N, --first-line-number=NUMBER\n                    start counting with NUMBER at 1st line of first\n                    page printed (see +FIRST_PAGE)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -o, --indent=MARGIN\n                    offset each line with MARGIN (zero) spaces, do not\n                    affect -w or -W, MARGIN will be added to PAGE_WIDTH\n  -r, --no-file-warnings\n                    omit warning when a file cannot be opened\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -s[CHAR], --separator[=CHAR]\n                    separate columns by a single character, default for CHAR\n                    is the <TAB> character without -w and 'no char' with -w.\n                    -s[CHAR] turns off line truncation of all 3 column\n                    options (-COLUMN|-a -COLUMN|-m) except -w is set\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -S[STRING], --sep-string[=STRING]\n                    separate columns by STRING,\n                    without -S: Default separator <TAB> with -J and <space>\n                    otherwise (same as -S\" \"), no effect on column options\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -t, --omit-header  omit page headers and trailers;\n                     implied if PAGE_LENGTH <= 10\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -T, --omit-pagination\n                    omit page headers and trailers, eliminate any pagination\n                    by form feeds set in input files\n  -v, --show-nonprinting\n                    use octal backslash notation\n  -w, --width=PAGE_WIDTH\n                    set page width to PAGE_WIDTH (72) characters for\n                    multiple text-column output only, -s[char] turns off (72)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -W, --page-width=PAGE_WIDTH\n                    set page width to PAGE_WIDTH (72) characters always,\n                    truncate lines, except -J option is set, no interference\n                    with -S or -s\n");
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
    *(rsp) = 0x40ce7d;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x40cef7;
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
        esi = 0x40ce7a;
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
        eax = strncmp (rax, 0x40cf01, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x40ce99;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = 0x40ce7a;
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x40ce63;
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
            eax = strncmp (rax, 0x40cf01, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = 0x40ce7a;
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x40ce99;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = 0x40ce7a;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4052e0 */
#include <stdint.h>
 
int64_t fcn_004052e0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    uint32_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r12d = esi;
    rbx = rdi;
    esi = *(rdi);
    eax = esi;
    esi -= 0x30;
    if (esi > 9) {
        *(rdx) = al;
        eax = *((rdi + 1));
        rbx++;
    }
    if (al == 0) {
        return eax;
    }
    eax = fcn_00409e00 (rbx, 0, 0xa, rsp + 8, 0x40ce63);
    if (eax == 0) {
        rax = *((rsp + 8));
        rdx = rax - 1;
        if (rdx > 0x7ffffffe) {
            goto label_0;
        }
        *(rbp) = eax;
        return rax;
    }
label_0:
    r12d = (int32_t) r12b;
    rax = fcn_00408d30 (rbx);
    edx = 5;
    rax = dcgettext (0, "'-%c' extra characters or invalid number in the argument: %s");
    esi = 0x4b;
    rbx = rax;
    if (*((rsp + 8)) <= 0x7fffffff) {
        rax = errno_location ();
    }
    r8 = rbp;
    ecx = r12d;
    eax = 0;
    error (0, *(rax), rbx);
    return fcn_00404de0 (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x405480 */
#include <stdint.h>
 
uint32_t fcn_00405480 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    if (rdi != 0) {
        ebx = esi;
        eax = fileno (rdi);
        ecx = ebx;
        edx = 0;
        esi = 0;
        edi = eax;
invalid_funccall(); //        void (*0x401ad0)() ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4054b0 */
#include <stdint.h>
 
uint64_t fcn_004054b0 (int64_t arg2, const char * filename) {
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
        eax = fcn_00408d50 (eax, rsi, rdx);
        r12d = eax;
        if (eax < 0) {
            goto label_1;
        }
        eax = fcn_0040aa20 (rbx);
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
    fcn_0040aa20 (rbx);
    *(rbp) = r12d;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x405550 */
#include <stdint.h>
 
uint64_t fcn_00405550 (int64_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x405590 */
#include <stdint.h>
 
uint64_t fcn_00405590 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x40ef8d;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4055f0 */
#include <stdint.h>
 
int64_t fcn_004055f0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rdx_rax = rax * rsi;
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
        rdx_rax = rax * r9;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x405850 */
#include <stdint.h>
 
uint64_t fcn_00405850 (int64_t arg1, int64_t arg2) {
    wint_t wc;
    mbstate_t * ps;
    rdi = arg1;
    rsi = arg2;
label_7:
    r15d = edx;
    r13 = rdi + rsi;
    rbx = rdi;
    rax = ctype_get_mb_cur_max ();
    if (rax <= 1) {
        goto label_8;
    }
    r12d = 0;
    if (rbx >= r13) {
        goto label_5;
    }
    r14d = 1;
    while (al <= 0x3f) {
        if (al < 0x25) {
            eax -= 0x20;
            if (al > 3) {
                goto label_9;
            }
        }
label_0:
        rbx++;
        r12d++;
label_1:
        if (rbx >= r13) {
            goto label_5;
        }
        eax = *(rbx);
    }
    if (al < 0x41) {
        goto label_9;
    }
    if (al <= 0x5f) {
        goto label_0;
    }
    eax -= 0x61;
    if (al <= 0x1d) {
        goto label_0;
    }
label_9:
    *((rsp + 8)) = 0;
    goto label_10;
label_2:
    edx = 0x7fffffff;
    edx -= r12d;
    if (edx < eax) {
        goto label_11;
    }
    r12d += eax;
label_3:
    rbx += rbp;
    eax = mbsinit (rsp + 8);
    if (eax != 0) {
        goto label_1;
    }
label_10:
    rdx -= rbx;
    rax = fcn_0040ba50 (rsp + 4, rbx, r13, rsp + 8);
    if (rax == -1) {
        goto label_12;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_13;
    }
    edi = *((rsp + 4));
    if (rax == 0) {
    }
    eax = wcwidth ();
    if (eax >= 0) {
        goto label_2;
    }
    if ((r15b & 2) != 0) {
        goto label_4;
    }
    eax = iswcntrl (*((rsp + 4)));
    if (eax != 0) {
        goto label_3;
    }
    if (r12d == 0x7fffffff) {
        goto label_11;
    }
    r12d++;
    goto label_3;
label_12:
    if ((r15b & 1) == 0) {
        goto label_0;
    }
label_4:
    r12d = 0xffffffff;
    do {
label_5:
        eax = r12d;
        return rax;
label_8:
        r12d = 0;
    } while (rbx >= r13);
    rax = ctype_b_loc ();
    r12d = 0;
    r15d &= 2;
    rdx = *(rax);
label_6:
    rbx++;
    eax = *((rbx - 1));
    eax = *((rdx + rax*2));
    if ((ah & 0x40) != 0) {
        goto label_14;
    }
    if (r15d != 0) {
        goto label_4;
    }
    if ((al & 2) != 0) {
        goto label_15;
    }
label_14:
    if (r12d == 0x7fffffff) {
        goto label_5;
    }
    r12d++;
label_15:
    if (r13 != rbx) {
        goto label_6;
    }
    goto label_5;
label_13:
    if ((r15b & 1) != 0) {
        goto label_4;
    }
    r12d++;
    rbx = r13;
    goto label_1;
label_11:
    r12d = 0x7fffffff;
    goto label_5;
    rbx = rdi;
    rax = strlen (rdi);
    edx = ebp;
    rdi = rbx;
    rsi = rax;
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x405880 */
#include <stdint.h>
 
uint64_t fcn_00405880 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4058d0 */
#include <stdint.h>
 
uint64_t fcn_004058d0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x405920 */
#include <stdint.h>
 
void fcn_00405920 (int64_t arg_4d8h_2, tm * arg_4d0h, int64_t arg_4d8h, int64_t arg1, char * arg11, int64_t arg2, char * arg3, tm * arg4, int64_t arg6, char * arg7, int64_t arg9) {
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
    eax = 0x40ce63;
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
    do {
        if (al > 0x30) {
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
INVALID_JUMP;
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
    /* switch table (123 cases) at 0x40efb0 */
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
INVALID_JUMP;
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
        fcn_004058d0 (rdi, rsi, rdx);
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
    rax = fcn_0040bf30 (*((rsp + 0x4d0)), rsp + 0x90);
    r11d = *((rsp + 0x40));
    edi = 0x30;
    rsi = rax;
    rcx = rax;
    do {
        rax = 0x6666666666666667;
        rdx_rax = rax * rcx;
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
    rax = fcn_00405920 (0, 0xffffffffffffffff, *((rsp + 0x40)), *((rsp + 0x18)), r13d, *((rsp + 0x28)));
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
        fcn_00405920 (r15, r11, *((rsp + 0x40)), *((rsp + 0x18)), r13d, *((rsp + 0x28)));
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
    edx_eax = eax * edx;
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
        edx_eax = eax * esi;
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
    edx_eax = eax * edx;
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
    edx_eax = eax * esi;
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
    edx_eax = eax * esi;
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
        fcn_004058d0 (rdi, rsi, rdx);
label_42:
        r15 += r13;
    }
    r14 += *((rsp + 0x30));
    r8 = rbx;
    goto label_7;
    *((rsp + 0x30)) = 0x40cf0e;
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
        edx_eax = eax * r9d;
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
    edx_eax = eax * edx;
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
    edx_eax = eax * edx;
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
        edx_eax = eax * edx;
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
        edx_eax = eax * esi;
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
        edx_eax = eax * esi;
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
        fcn_004058d0 (rdi, rsi, rdx);
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
    edx_eax = eax * edx;
    eax = esi;
    eax >>= 0x1f;
    *((rsp + 0x40)) = eax;
    edx += esi;
    edx >>= 0xb;
    edx -= eax;
    eax = esi;
    *((rsp + 0x30)) = edx;
    edx_eax = eax * edi;
    r10d = rdx + rsi;
    r10d >>= 5;
    r10d -= *((rsp + 0x40));
    eax = r10d;
    edx_eax = eax * edi;
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
    edx_eax = eax * edx;
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
    fcn_00405880 (rdi, rsi, rdx);
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
        edx_eax = eax * edx;
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
        edx_eax = (int64_t) eax;
        eax = edx_eax / edi;
        edx = edx_eax % edi;
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
    edx_eax = eax * edx;
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
        edx_eax = eax * r8d;
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
    edx_eax = eax * edx;
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
        fcn_00405880 (rdi, rsi, rdx);
        goto label_42;
label_93:
        esi = *((rsp + 0x30)) * 0x64;
        edi = 0;
        *((rsp + 0x30)) = 1;
        r10d = 5;
        esi += eax;
        goto label_17;
INVALID_JUMP;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4070f0 */
#include <stdint.h>
 
void fcn_004070f0 (int64_t arg5, int64_t arg6) {
    int64_t var_fh;
    r8 = arg5;
    r9 = arg6;
    *((rsp + 0xf)) = 0;
    fcn_00405920 (rdi, rsi, rdx, rcx, 0, rsp + 0x1f);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x407110 */
#include <stdint.h>
 
uint64_t fcn_00407110 (char ** arg1) {
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
            edi = 0x40f3c8;
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
        *(0x00614490) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4071b0 */
#include <stdint.h>
 
uint64_t fcn_004071b0 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_0040c0d0 ();
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
        eax = 0x40f3ce;
        ebx = 0x40f3d9;
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
        eax = 0x40f3d2;
        ebx = 0x40f3d5;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x410ba9;
    ebx = 0x40f3cc;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4072b0 */
#include <stdint.h>
 
uint64_t fcn_004072b0 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        /* [13] -r-x section size 45240 named .text */
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
    /* switch table (11 cases) at 0x40f440 */
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
    *((rsp + 0x50)) = 0x410ba9;
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
        /* switch table (127 cases) at 0x40f498 */
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
    rax = fcn_004072b0 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x40f890 */
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
    /* switch table (127 cases) at 0x40fc88 */
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
    *((rsp + 0x50)) = 0x410ba9;
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
        rax = fcn_0040ba50 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x410ba9;
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
        *((rsp + 0x50)) = 0x40f3cc;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_004071b0 (0x40f3dd, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_004071b0 (0x410ba9, r13d);
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
        *((rsp + 0x50)) = 0x40f3cc;
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
        *((rsp + 0x50)) = 0x410ba9;
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
    *((rsp + 0x50)) = 0x40f3cc;
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
    rax = fcn_004072b0 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x410ba9;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4084e0 */
#include <stdint.h>
 
uint64_t fcn_004084e0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x00614318);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x00614330) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x614320) {
        goto label_2;
    }
    rax = fcn_00409360 (rbx, rsi);
    *(0x00614318) = rax;
    rbx = rax;
    do {
        rdi = *(0x00614330);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x00614330) = r12d;
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
        rax = fcn_004072b0 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x6144a0) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00409300 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_004072b0 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00409360 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x00614320]");
        rbx = rax;
        *(0x00614318) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00409550 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x408b80 */
#include <stdint.h>
 
int64_t fcn_00408b80 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x006145a0]");
        __asm ("movdqa xmm1, xmmword [0x006145b0]");
        __asm ("movdqa xmm2, xmmword [0x006145c0]");
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
        fcn_004084e0 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x408bb0 */
#include <stdint.h>
 
int64_t fcn_00408bb0 (uint32_t arg2, int64_t arg3) {
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
    fcn_004084e0 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x408d30 */
#include <stdint.h>
 
void fcn_00408d30 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x6142e0;
    rdx = 0xffffffffffffffff;
    edi = 0;
invalid_funccall(); //    return void (*0x4084e0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x408d50 */
#include <stdint.h>
 
uint64_t fcn_00408d50 (int64_t arg_70h, int64_t arg1, int64_t arg4) {
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
            *(0x006145d8) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
invalid_funccall(); //        eax = void (*0x40aaa0)(uint64_t, uint64_t, uint64_t) (rdi, 0, rdx);
    }
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x006145d8) != 0xffffffff) {
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
invalid_funccall(); //    eax = void (*0x40aaa0)(uint64_t, uint64_t, uint64_t) (ebp, 0, r12d);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x006145d8) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x408d60 */
#include <stdint.h>
 
void fcn_00408d60 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x41012b);
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
        /* switch table (10 cases) at 0x410418 */
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
invalid_funccall(); //    void (*0x401cb0)() ();
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
invalid_funccall(); //    void (*0x401cb0)() ();
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
invalid_funccall(); //    void (*0x401cb0)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4091c0 */
#include <stdint.h>
 
uint64_t fcn_004091c0 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_00408d60 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x409300 */
#include <stdint.h>
 
uint64_t fcn_00409300 (int64_t arg1) {
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
    return fcn_00409550 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x409360 */
#include <stdint.h>
 
uint64_t fcn_00409360 (int64_t arg1, int64_t arg2) {
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
    return fcn_00409550 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x409460 */
#include <stdint.h>
 
int64_t fcn_00409460 (int64_t arg1, char ** arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *(rsi);
    if (rdi == 0) {
        goto label_0;
    }
    rdx = 0x5555555555555553;
    if (rax > rdx) {
        goto label_1;
    }
    rdx = rax;
    rdx >>= 1;
    rax = rdx + rax + 1;
    do {
        *(rsi) = rax;
        rsi = rax;
invalid_funccall(); //        void (*0x409360)() ();
label_0:
        if (rax == 0) {
            eax = 0x80;
            *(rsi) = rax;
            rsi = rax;
invalid_funccall(); //            void (*0x409360)() ();
        }
    } while (rax >= 0);
label_1:
    return fcn_00409550 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x409500 */
#include <stdint.h>
 
uint64_t fcn_00409500 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00409300 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x409550 */
#include <stdint.h>
 
uint64_t fcn_00409550 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x006142c0), 0, 0x40ef8a);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x409590 */
#include <stdint.h>
 
uint64_t fcn_00409590 (int64_t arg_50h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg6) {
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
    eax = fcn_004096b0 (rdi, 0, edx, rsp + 8, r8);
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
    if (rbp <= 0x3fffffff) {
        goto label_3;
    }
    do {
        *(r14) = 0x4b;
label_0:
        rax = fcn_00408d30 (r12);
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
    } while (ebp == 1);
    if (ebp != 3) {
        goto label_0;
    }
    *(rax) = 0;
    goto label_0;
label_3:
    eax = 0x22;
    edx = 0x4b;
    if (rbp <= 0xffffffffbfffffff) {
        eax = edx;
    }
    *(r14) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x409680 */
#include <stdint.h>
 
void fcn_00409680 (int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    fcn_00409590 (rdi, 0xa, rsi, rdx, rcx, r8);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x4096b0 */
#include <stdint.h>
 
uint64_t fcn_004096b0 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_fh;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    *(rsp) = rcx;
    if (edx > 0x24) {
        goto label_22;
    }
    rbx = rsi;
    rax = rsp + 0x18;
    if (rsi == 0) {
        rbx = rax;
    }
    r12 = rdi;
    r14 = r8;
    errno_location ();
    edx = ebp;
    ecx = 0;
    rdi = r12;
    *(rax) = 0;
    rsi = rbx;
    r13 = rax;
    rax = strtol_internal ();
    r15 = *(rbx);
    if (r15 == r12) {
        goto label_23;
    }
    eax = *(r13);
    if (eax != 0) {
        goto label_24;
    }
    r12d = 0;
label_0:
    if (r14 != 0) {
        r13d = *(r15);
        if (r13b != 0) {
            goto label_25;
        }
    }
label_4:
    rax = *(rsp);
    *(rax) = rbp;
    do {
label_1:
        eax = r12d;
        return rax;
label_24:
        r12d = 4;
    } while (eax != 0x22);
    r12d = 1;
    goto label_0;
label_23:
    if (r14 == 0) {
        goto label_26;
    }
    r13d = *(r15);
    r12d = 4;
    if (r13b == 0) {
        goto label_1;
    }
    esi = (int32_t) r13b;
    r12d = 0;
    rax = strchr (r14, rsi);
    if (rax == 0) {
        goto label_26;
    }
label_3:
    edx = r13 - 0x45;
    while (((rax >> rdx) & 1) >= 0) {
label_2:
        esi = 1;
        eax = 0x400;
label_21:
        r13d -= 0x42;
        if (r13b > 0x35) {
            goto label_27;
        }
        r13d = (int32_t) r13b;
        /* switch table (54 cases) at 0x4104f8 */
        rax = 0x814400308945;
        *((rsp + 0xf)) = dl;
    }
    rax = strchr (r14, 0x30);
    if (rax == 0) {
        goto label_2;
    }
    eax = *((r15 + 1));
    if (al == 0x44) {
        goto label_28;
    }
    if (al == 0x69) {
        goto label_29;
    }
    edx = *((rsp + 0xf));
    if (al == 0x42) {
        goto label_28;
    }
    /* switch table (48 cases) at 0x4106a8 */
label_26:
    r12d = 4;
    goto label_1;
label_25:
    esi = (int32_t) r13b;
    rax = strchr (r14, rsi);
    if (rax != 0) {
        goto label_3;
    }
label_27:
    rax = *(rsp);
    r12d |= 2;
    *(rax) = rbp;
    goto label_1;
    rax = 0xffe0000000000000;
    rsi = (int64_t) esi;
    if (rbp < rax) {
        goto label_30;
    }
    rax = 0x1fffffffffffff;
    if (rbp > rax) {
        goto label_31;
    }
    rbp <<= 0xa;
    do {
label_5:
        rsi += r15;
        eax = r12d;
        eax |= 2;
        *(rbx) = rsi;
        if (*(rsi) != 0) {
            r12d = eax;
        }
        goto label_4;
        rax = 0xc000000000000000;
        rsi = (int64_t) esi;
        if (rbp < rax) {
            goto label_30;
        }
        rax = 0x3fffffffffffffff;
        if (rbp > rax) {
            goto label_31;
        }
        rbp += rbp;
    } while (1);
    rcx = (int64_t) eax;
    rsi = (int64_t) esi;
    rax = 0x8000000000000000;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
label_18:
    if (rbp < rax) {
        goto label_30;
    }
    rdi = 0x7fffffffffffffff;
    rax = rdi;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    do {
        if (rax < rbp) {
            goto label_31;
        }
        rbp *= rcx;
        goto label_5;
        rcx = (int64_t) eax;
        rsi = (int64_t) esi;
        rax = 0x8000000000000000;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        rdi = rax;
label_17:
        if (rbp < rdi) {
            goto label_30;
        }
        r8 = 0x7fffffffffffffff;
        rax = r8;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rbp > rax) {
            goto label_31;
        }
        rbp *= rcx;
    } while (rbp >= rdi);
    do {
label_30:
        r12d = 1;
        goto label_5;
        rsi = (int64_t) esi;
label_12:
        rax = 0xffc0000000000000;
    } while (rbp < rax);
    rax = 0x3fffffffffffff;
    if (rbp > rax) {
        goto label_31;
    }
    rbp <<= 9;
    goto label_5;
    rsi = (int64_t) esi;
    goto label_5;
    rcx = (int64_t) eax;
    rsi = (int64_t) esi;
    rax = 0x8000000000000000;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    r9 = rax;
label_16:
    edi = 5;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (r9 <= rbp) {
        rax = r8;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rax < rbp) {
            goto label_32;
        }
        rbp *= rcx;
label_6:
        edi--;
        if (edi == 0) {
            goto label_33;
        }
    }
    r10d = 1;
    goto label_6;
    rcx = (int64_t) eax;
    rsi = (int64_t) esi;
    rax = 0x8000000000000000;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    r9 = rax;
label_15:
    edi = 4;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (r9 <= rbp) {
        rax = r8;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rax < rbp) {
            goto label_34;
        }
        rbp *= rcx;
label_7:
        edi--;
        if (edi == 0) {
            goto label_33;
        }
    }
    r10d = 1;
    goto label_7;
    rcx = (int64_t) eax;
    rsi = (int64_t) esi;
    rax = 0x8000000000000000;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    r9 = rax;
label_20:
    edi = 6;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (rbp >= r9) {
        rax = r8;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rax < rbp) {
            goto label_35;
        }
        rbp *= rcx;
label_8:
        edi--;
        if (edi == 0) {
            goto label_33;
        }
    }
    r10d = 1;
    goto label_8;
    rcx = (int64_t) eax;
    rsi = (int64_t) esi;
    rax = 0x8000000000000000;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    r9 = rax;
label_19:
    edi = 3;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (rbp >= r9) {
        rax = r8;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rax < rbp) {
            goto label_36;
        }
        rbp *= rcx;
label_9:
        edi--;
        if (edi == 0) {
            goto label_33;
        }
    }
    r10d = 1;
    goto label_9;
    rcx = (int64_t) eax;
    rsi = (int64_t) esi;
    rax = 0x8000000000000000;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    r9 = rax;
label_14:
    edi = 8;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (r9 <= rbp) {
        rax = r8;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rax < rbp) {
            goto label_37;
        }
        rbp *= rcx;
label_10:
        edi--;
        if (edi == 0) {
            goto label_33;
        }
    }
    r10d = 1;
    goto label_10;
    rcx = (int64_t) eax;
    rsi = (int64_t) esi;
    rax = 0x8000000000000000;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    r9 = rax;
label_13:
    edi = 7;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (r9 <= rbp) {
        rax = r8;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rax < rbp) {
            goto label_38;
        }
        rbp *= rcx;
label_11:
        edi--;
        if (edi == 0) {
            goto label_33;
        }
    }
    r10d = 1;
    goto label_11;
    esi = 1;
    goto label_12;
    esi = 1;
    ecx = 0x400;
    r9 = 0xffe0000000000000;
    goto label_13;
    esi = 1;
    ecx = 0x400;
    r9 = 0xffe0000000000000;
    goto label_14;
    esi = 1;
    ecx = 0x400;
    r9 = 0xffe0000000000000;
    goto label_15;
    esi = 1;
    ecx = 0x400;
    r9 = 0xffe0000000000000;
    goto label_16;
    esi = 1;
    ecx = 0x400;
    rdi = 0xffe0000000000000;
    goto label_17;
    esi = 1;
    ecx = 0x400;
    rax = 0xffe0000000000000;
    goto label_18;
    esi = 1;
    ecx = 0x400;
    r9 = 0xffe0000000000000;
    goto label_19;
    esi = 1;
    ecx = 0x400;
    r9 = 0xffe0000000000000;
    goto label_20;
    esi = 1;
    goto label_5;
label_33:
    r12d |= r10d;
    goto label_5;
label_31:
    r12d = 1;
    goto label_5;
label_38:
    r10d = 1;
    goto label_11;
label_32:
    r10d = 1;
    goto label_6;
label_37:
    r10d = 1;
    goto label_10;
label_36:
    r10d = 1;
    goto label_9;
label_35:
    r10d = 1;
    goto label_8;
label_34:
    r10d = 1;
    goto label_7;
label_28:
    esi = 2;
    eax = 0x3e8;
    goto label_21;
label_29:
    esi = 0;
    eax = 0x400;
    sil = (*((r15 + 2)) == 0x42) ? 1 : 0;
    esi = rsi + rsi + 1;
    goto label_21;
label_22:
    return assert_fail ("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60, "xstrtoimax");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x409e00 */
#include <stdint.h>
 
uint64_t fcn_00409e00 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_fh;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    *(rsp) = rcx;
    if (edx > 0x24) {
        goto label_22;
    }
    rbx = rsi;
    rax = rsp + 0x18;
    if (rsi == 0) {
        rbx = rax;
    }
    r12 = rdi;
    r14 = r8;
    errno_location ();
    *(rax) = 0;
    r13 = rax;
    rax = strtol (r12, rbx, ebp);
    r15 = *(rbx);
    if (r15 == r12) {
        goto label_23;
    }
    eax = *(r13);
    if (eax != 0) {
        goto label_24;
    }
    r12d = 0;
label_0:
    if (r14 != 0) {
        r13d = *(r15);
        if (r13b != 0) {
            goto label_25;
        }
    }
label_4:
    rax = *(rsp);
    *(rax) = rbp;
    do {
label_1:
        eax = r12d;
        return rax;
label_24:
        r12d = 4;
    } while (eax != 0x22);
    r12d = 1;
    goto label_0;
label_23:
    if (r14 == 0) {
        goto label_26;
    }
    r13d = *(r15);
    r12d = 4;
    if (r13b == 0) {
        goto label_1;
    }
    esi = (int32_t) r13b;
    r12d = 0;
    rax = strchr (r14, rsi);
    if (rax == 0) {
        goto label_26;
    }
label_3:
    edx = r13 - 0x45;
    while (((rax >> rdx) & 1) >= 0) {
label_2:
        esi = 1;
        eax = 0x400;
label_21:
        r13d -= 0x42;
        if (r13b > 0x35) {
            goto label_27;
        }
        r13d = (int32_t) r13b;
        /* switch table (54 cases) at 0x410838 */
        rax = 0x814400308945;
        *((rsp + 0xf)) = dl;
    }
    rax = strchr (r14, 0x30);
    if (rax == 0) {
        goto label_2;
    }
    eax = *((r15 + 1));
    if (al == 0x44) {
        goto label_28;
    }
    if (al == 0x69) {
        goto label_29;
    }
    edx = *((rsp + 0xf));
    if (al == 0x42) {
        goto label_28;
    }
    /* switch table (48 cases) at 0x4109e8 */
label_26:
    r12d = 4;
    goto label_1;
label_25:
    esi = (int32_t) r13b;
    rax = strchr (r14, rsi);
    if (rax != 0) {
        goto label_3;
    }
label_27:
    rax = *(rsp);
    r12d |= 2;
    *(rax) = rbp;
    goto label_1;
    rax = 0xffe0000000000000;
    rsi = (int64_t) esi;
    if (rbp < rax) {
        goto label_30;
    }
    rax = 0x1fffffffffffff;
    if (rbp > rax) {
        goto label_31;
    }
    rbp <<= 0xa;
    do {
label_5:
        rsi += r15;
        eax = r12d;
        eax |= 2;
        *(rbx) = rsi;
        if (*(rsi) != 0) {
            r12d = eax;
        }
        goto label_4;
        rax = 0xc000000000000000;
        rsi = (int64_t) esi;
        if (rbp < rax) {
            goto label_30;
        }
        rax = 0x3fffffffffffffff;
        if (rbp > rax) {
            goto label_31;
        }
        rbp += rbp;
    } while (1);
    rcx = (int64_t) eax;
    rsi = (int64_t) esi;
    rax = 0x8000000000000000;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
label_18:
    if (rbp < rax) {
        goto label_30;
    }
    rdi = 0x7fffffffffffffff;
    rax = rdi;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    do {
        if (rax < rbp) {
            goto label_31;
        }
        rbp *= rcx;
        goto label_5;
        rcx = (int64_t) eax;
        rsi = (int64_t) esi;
        rax = 0x8000000000000000;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        rdi = rax;
label_17:
        if (rbp < rdi) {
            goto label_30;
        }
        r8 = 0x7fffffffffffffff;
        rax = r8;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rbp > rax) {
            goto label_31;
        }
        rbp *= rcx;
    } while (rbp >= rdi);
    do {
label_30:
        r12d = 1;
        goto label_5;
        rsi = (int64_t) esi;
label_12:
        rax = 0xffc0000000000000;
    } while (rbp < rax);
    rax = 0x3fffffffffffff;
    if (rbp > rax) {
        goto label_31;
    }
    rbp <<= 9;
    goto label_5;
    rsi = (int64_t) esi;
    goto label_5;
    rcx = (int64_t) eax;
    rsi = (int64_t) esi;
    rax = 0x8000000000000000;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    r9 = rax;
label_16:
    edi = 5;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (r9 <= rbp) {
        rax = r8;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rax < rbp) {
            goto label_32;
        }
        rbp *= rcx;
label_6:
        edi--;
        if (edi == 0) {
            goto label_33;
        }
    }
    r10d = 1;
    goto label_6;
    rcx = (int64_t) eax;
    rsi = (int64_t) esi;
    rax = 0x8000000000000000;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    r9 = rax;
label_15:
    edi = 4;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (r9 <= rbp) {
        rax = r8;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rax < rbp) {
            goto label_34;
        }
        rbp *= rcx;
label_7:
        edi--;
        if (edi == 0) {
            goto label_33;
        }
    }
    r10d = 1;
    goto label_7;
    rcx = (int64_t) eax;
    rsi = (int64_t) esi;
    rax = 0x8000000000000000;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    r9 = rax;
label_20:
    edi = 6;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (rbp >= r9) {
        rax = r8;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rax < rbp) {
            goto label_35;
        }
        rbp *= rcx;
label_8:
        edi--;
        if (edi == 0) {
            goto label_33;
        }
    }
    r10d = 1;
    goto label_8;
    rcx = (int64_t) eax;
    rsi = (int64_t) esi;
    rax = 0x8000000000000000;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    r9 = rax;
label_19:
    edi = 3;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (rbp >= r9) {
        rax = r8;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rax < rbp) {
            goto label_36;
        }
        rbp *= rcx;
label_9:
        edi--;
        if (edi == 0) {
            goto label_33;
        }
    }
    r10d = 1;
    goto label_9;
    rcx = (int64_t) eax;
    rsi = (int64_t) esi;
    rax = 0x8000000000000000;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    r9 = rax;
label_14:
    edi = 8;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (r9 <= rbp) {
        rax = r8;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rax < rbp) {
            goto label_37;
        }
        rbp *= rcx;
label_10:
        edi--;
        if (edi == 0) {
            goto label_33;
        }
    }
    r10d = 1;
    goto label_10;
    rcx = (int64_t) eax;
    rsi = (int64_t) esi;
    rax = 0x8000000000000000;
    __asm ("cqo");
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    r9 = rax;
label_13:
    edi = 7;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (r9 <= rbp) {
        rax = r8;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rax < rbp) {
            goto label_38;
        }
        rbp *= rcx;
label_11:
        edi--;
        if (edi == 0) {
            goto label_33;
        }
    }
    r10d = 1;
    goto label_11;
    esi = 1;
    goto label_12;
    esi = 1;
    ecx = 0x400;
    r9 = 0xffe0000000000000;
    goto label_13;
    esi = 1;
    ecx = 0x400;
    r9 = 0xffe0000000000000;
    goto label_14;
    esi = 1;
    ecx = 0x400;
    r9 = 0xffe0000000000000;
    goto label_15;
    esi = 1;
    ecx = 0x400;
    r9 = 0xffe0000000000000;
    goto label_16;
    esi = 1;
    ecx = 0x400;
    rdi = 0xffe0000000000000;
    goto label_17;
    esi = 1;
    ecx = 0x400;
    rax = 0xffe0000000000000;
    goto label_18;
    esi = 1;
    ecx = 0x400;
    r9 = 0xffe0000000000000;
    goto label_19;
    esi = 1;
    ecx = 0x400;
    r9 = 0xffe0000000000000;
    goto label_20;
    esi = 1;
    goto label_5;
label_33:
    r12d |= r10d;
    goto label_5;
label_31:
    r12d = 1;
    goto label_5;
label_38:
    r10d = 1;
    goto label_11;
label_32:
    r10d = 1;
    goto label_6;
label_37:
    r10d = 1;
    goto label_10;
label_36:
    r10d = 1;
    goto label_9;
label_35:
    r10d = 1;
    goto label_8;
label_34:
    r10d = 1;
    goto label_7;
label_28:
    esi = 2;
    eax = 0x3e8;
    goto label_21;
label_29:
    esi = 0;
    eax = 0x400;
    sil = (*((r15 + 2)) == 0x42) ? 1 : 0;
    esi = rsi + rsi + 1;
    goto label_21;
label_22:
    return assert_fail ("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60, "xstrtol");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40a550 */
#include <stdint.h>
 
int64_t fcn_0040a550 (uint32_t arg1, int64_t arg2, int64_t arg4, int64_t arg5) {
    int64_t var_eh;
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
    r8 = arg5;
    do {
        abort ();
        edi--;
        ebx = *(0x006142c0);
    } while (edi > 3);
    r10d = esi;
    rsi = *((rdi*8 + 0x410be0));
    rax = (int64_t) r10d;
    if (r10d < 0) {
        goto label_0;
    }
    rax <<= 5;
    r12d = 0x410b70;
    r13 = *((rcx + rax));
    do {
        edx = 5;
        rax = dcgettext (0, rsi);
        r9 = rbp;
        r8 = r13;
        rcx = r12;
        eax = 0;
        error (ebx, 0, rax);
        rax = abort ();
label_0:
        r12d = 0x410b70;
        *((rsp + 0xe)) = dl;
        r13 = rsp + 0xe;
        r12 -= rax;
        *((rsp + 0xf)) = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40a5e0 */
#include <stdint.h>
 
uint64_t fcn_0040a5e0 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
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
        /* switch table (67 cases) at 0x410c00 */
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
    /* switch table (54 cases) at 0x410d80 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40aa20 */
#include <stdint.h>
 
uint64_t fcn_0040aa20 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_0040abe0 (rbx);
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
invalid_funccall(); //    void (*0x4019b0)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40abe0 */
#include <stdint.h>
 
uint32_t fcn_0040abe0 (int64_t arg1) {
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
invalid_funccall(); //    void (*0x401b90)() ();
label_1:
    fcn_0040ac20 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40ac20 */
#include <stdint.h>
 
int64_t fcn_0040ac20 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x401c50)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40ac80 */
#include <stdint.h>
 
uint64_t fcn_0040ac80 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40ad60 */
#include <stdint.h>
 
int64_t fcn_0040ad60 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40b380 */
#include <stdint.h>
 
uint64_t fcn_0040b380 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x410b70;
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
            fcn_0040ac80 (r12, rbx);
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
        fcn_0040ac80 (r12, rbx);
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
    eax = fcn_0040ad60 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_0040ad60 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40b950 */
#include <stdint.h>
 
int32_t fcn_0040b950 (int64_t arg_10h) {
    eax = *(0x0061433c);
    *(0x006145e0) = eax;
    eax = *(0x00614338);
    *(0x006145e4) = eax;
    eax = *((rsp + 0x10));
    fcn_0040b380 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0061433c) = edx;
    rdx = imp.__libc_start_main;
    *(0x00614630) = rdx;
    edx = imp.__libc_start_main;
    *(0x00614334) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40b9d0 */
#include <stdint.h>
 
void fcn_0040b9d0 (void) {
    r9d = 0;
    fcn_0040b950 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40ba50 */
#include <stdint.h>
 
uint64_t fcn_0040ba50 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_00405590 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40bad0 */
#include <stdint.h>
 
uint32_t fcn_0040bad0 (char * value) {
    rdi = value;
    if (*((rdi + 8)) != 0) {
        goto label_0;
    }
    edi = 0x40cf65;
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
        setenv (0x40cf65, rdi + 9, 1);
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40bb20 */
#include <stdint.h>
 
void fcn_0040bb20 (int64_t arg1) {
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
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40bb50 */
#include <stdint.h>
 
uint64_t fcn_0040bb50 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    rax = errno_location ();
    rbx = rax;
    r13d = *(rax);
    eax = fcn_0040bad0 (r12);
    if (al == 0) {
        r13d = *(rbx);
    }
    fcn_0040bb20 (r12);
    *(rbx) = r13d;
    eax = ebp;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40bba0 */
#include <stdint.h>
 
uint64_t fcn_0040bba0 (int64_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40bc30 */
#include <stdint.h>
 
int64_t fcn_0040bc30 (int64_t arg1, uint32_t arg2) {
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
        ebx = 0x40ce63;
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
    rax = fcn_0040bba0 (r12);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40bdb0 */
#include <stdint.h>
 
uint64_t fcn_0040bdb0 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    rax = getenv (0x40cf65);
    if (rax == 0) {
        goto label_1;
    }
    while (eax != 0) {
label_0:
        rax = fcn_0040bba0 (rbp);
        rbx = rax;
        if (rax != 0) {
            al = fcn_0040bad0 (r12);
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
        fcn_0040bb20 (rbx);
    }
    ebx = 0;
    *(rbp) = r12d;
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40be80 */
#include <stdint.h>
 
uint64_t fcn_0040be80 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rsi;
    if (rdi == 0) {
        goto label_1;
    }
    rbx = rdx;
    rax = fcn_0040bdb0 (rdi);
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
    al = fcn_0040bc30 (rbp, rbx);
    if (al == 0) {
        goto label_2;
    }
    while (al != 0) {
        rax = rbx;
        return rax;
label_2:
        if (r13 != 1) {
            eax = fcn_0040bb50 (r13);
        }
label_0:
        eax = 0;
        return rax;
        al = fcn_0040bb50 (r13);
    }
    goto label_0;
label_1:
    rdi = r12;
    rsi = rdx;
    return gmtime_r ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40bf30 */
#include <stdint.h>
 
uint64_t fcn_0040bf30 (tm * arg1, char * arg2) {
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
    rax = fcn_0040bdb0 (rdi);
    r12 = rax;
    if (rax == 0) {
        goto label_4;
    }
    rax = fcn_0040cd00 (rbx);
    *((rsp + 8)) = rax;
    if (rax == -1) {
        goto label_5;
    }
label_1:
    al = fcn_0040bc30 (rbp, rbx);
    if (al != 0) {
        goto label_0;
    }
    *((rsp + 8)) = 0xffffffffffffffff;
    do {
label_0:
        if (r12 != 1) {
            al = fcn_0040bb50 (r12);
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
    fcn_0040c050 (rsi);
    return rax;
label_4:
    rax = 0xffffffffffffffff;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40c050 */
#include <stdint.h>
 
void fcn_0040c050 (int64_t arg1) {
    rdi = arg1;
    *((rdi + 0x20)) = 0;
    edx = 0x614618;
    esi = imp.gmtime_r;
invalid_funccall(); //    return void (*0x40c8c0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40c070 */
#include <stdint.h>
 
uint64_t fcn_0040c070 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_0040aa20 (rbp);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40c0d0 */
#include <stdint.h>
 
uint64_t fcn_0040c0d0 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x40ce63;
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
        r15d = 0x40ce63;
label_2:
        *(0x00614620) = r15;
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
        r15d = 0x40ce63;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x40cff8;
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
    fcn_0040aa20 (rbx);
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
        r15d = 0x40ce63;
        rbx = rax;
        free (r15);
        fcn_0040aa20 (r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40c640 */
#include <stdint.h>
 
uint64_t fcn_0040c640 (int64_t arg_20h, int64_t arg_28h, int64_t arg_30h, int64_t arg_38h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
    edx_eax = eax * r9d;
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
    edx_eax = eax * r9d;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40c760 */
#include <stdint.h>
 
int64_t fcn_0040c760 (int64_t arg_10h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = fcn_0040c640 (rdi, rsi, rdx, rcx, r8, *((rax + 0x14)));
        rax += rbx;
        if (UNKNOWN_OP /*rax overflow 0*/) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40c800 */
#include <stdint.h>
 
int64_t fcn_0040c800 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
invalid_funccall(); //    rax = void (*r12)(uint64_t, uint64_t, uint64_t, uint64_t) (rbx, rbp, r12, r13);
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
invalid_funccall(); //        rax = void (*r12)(uint64_t) (rbx);
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
invalid_funccall(); //    void (*r12)(uint64_t) (rbp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40cd00 */
#include <stdint.h>
 
int64_t fcn_0040cd00 (int64_t arg1) {
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
    edx_eax = eax * edx;
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
        rdx_rax = rax * rdx;
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
    eax = *((rcx + rcx + 0x411100));
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
    rax = fcn_0040c640 (rdi, rsi, *((rsp + 0x38)), *((rsp + 0x2c)), r8d, r9);
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
        rax = fcn_0040c800 (*((rsp + 0x10)), rsp + 0x50, rsp + 0x60);
        r15 = *((rsp + 0x50));
        rax = fcn_0040c760 (rbx, *((rsp + 0x30)), *((rsp + 0x28)), *((rsp + 0x1c)), *((rsp + 0x2c)), r15);
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
        if (UNKNOWN_OP /*rax overflow 0*/) {
            goto label_8;
        }
        rsi = rsp + 0x60;
        rdi = rsp + 0xa0;
        rax = *((rsp + 0x10));
invalid_funccall(); //        rax = void (*rax)(uint64_t) (rax);
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
    *(rsp + 0x28) = (esi == 0) ? 1 : 0;
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
    if (UNKNOWN_OP /*rdx !overflow 0*/) {
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
    if (UNKNOWN_OP /*rdx overflow 0*/) {
        goto label_5;
    }
label_13:
    fcn_0040c800 (*((rsp + 0x10)), rsp + 0x58, rsp + 0xa0);
    eax = *((rsp + 0xc0));
    dl = (eax == 0) ? 1 : 0;
    if (bpl != dl) {
        if (eax >= 0) {
            goto label_14;
        }
    }
    rbx = *((rsp + 0x28));
    rax = rsp + 0xa8;
    rax = fcn_0040c760 (rbx, *((rsp + 0x30)), *((rsp + 0x28)), *((rsp + 0x1c)), *((rsp + 0x2c)), *((rsp + 0x68)));
    *((rsp + 0x50)) = rax;
    fcn_0040c800 (*((rsp + 0x10)), rsp + 0x50, rsp + 0x60);
    rax = *((rsp + 0x50));
    goto label_3;
label_14:
    rax = *((rsp + 0x50));
    goto label_5;
    rbx = rdi;
    tzset ();
    rdi = rbx;
    edx = 0x614628;
    esi = imp.localtime_r;
    goto label_6;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40cd90 */
#include <stdint.h>
 
int64_t fcn_0040cd90 (void) {
    rax = 0x614268;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_pr.elf @ 0x40cda8 */
#include <stdint.h>
 
void fcn_0040cda8 (int64_t arg3) {
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
