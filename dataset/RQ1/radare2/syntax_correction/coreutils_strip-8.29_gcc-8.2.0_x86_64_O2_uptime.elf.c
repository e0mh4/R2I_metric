#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x401bc0 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    rdi = argc;
    rsi = argv;
    ebx = edi;
    fcn_00404040 (*(rsi));
    setlocale (6, 0x40a5a7);
    bindtextdomain (0x408b12, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x408b12, rsi);
    edi = 0x402490;
    eax = fcn_00408950 ();
    eax = 0;
    fcn_00403f30 (ebx, rbp, "uptime", "GNU coreutils", *(str_8_29), fcn_00402130);
    r8d = 0;
    rsi = rbp;
    ecx = 0x408e80;
    edx = 0x40a5a7;
    edi = ebx;
    eax = fcn_00407200 ();
    if (eax != 0xffffffff) {
        goto label_0;
    }
    rax = *(0x0060c2bc);
    ebx -= eax;
    if (ebx == 0) {
        goto label_1;
    }
    if (ebx != 1) {
        goto label_2;
    }
    eax = fcn_00401db0 (*((rbp + rax*8)), 0, rdx, rcx, r8, r9);
    do {
        eax = 0;
        return rax;
label_1:
        fcn_00401db0 ("/var/run/utmp", 1, rdx, rcx, r8, r9);
    } while (1);
label_2:
    rax = fcn_00405c60 (*((rbp + rax*8 + 8)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "extra operand %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
label_0:
    return fcn_00402130 (1, rsi, rdx, rcx, r8, r9);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x401cfb */
#include <stdint.h>
 
int32_t fcn_00401cfb (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x401d51 */
#include <stdint.h>
 
int64_t fcn_00401d51 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x0060c2e8) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x60be48;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x0060c2f0) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_00401cfb ();
    *(0x0060c2e8) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x401da8 */
#include <stdint.h>
 
int64_t fcn_00401da8 (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x401db0 */
#include <stdint.h>
 
uint64_t fcn_00401db0 (int64_t arg_8h, int64_t arg_10h, int64_t arg_18h, int64_t arg_20h, int64_t arg_28h, int64_t arg_30h, int64_t arg_38h, int64_t arg_40h, int64_t arg_48h, int64_t arg_50h, int64_t arg_58h, int64_t arg_60h, int64_t arg_68h, int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    int64_t var_18h;
    int64_t var_20h;
    time_t timer;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    rdi = arg1;
    rsi = arg2;
    ecx = esi;
    rbx = rdi;
    *((rsp + 0x20)) = 0;
    eax = fcn_00407360 (rdi, rsp + 0x18, rsp + 0x20);
    if (eax != 0) {
        goto label_5;
    }
    rcx = *((rsp + 0x18));
    rax = *((rsp + 0x20));
    rdx = rcx - 1;
    if (rcx == 0) {
        goto label_6;
    }
    ebx = 0;
    ebp = 0;
    while (*((rax + 0x2c)) == 0) {
label_0:
        if (cx == 2) {
            rbx = *((rax + 0x154));
        }
        rdx--;
        rax += 0x180;
        if (rdx == -1) {
            goto label_7;
        }
label_1:
        ecx = *(rax);
    }
    if (cx != 7) {
        goto label_0;
    }
    rdx--;
    rbp++;
    rax += 0x180;
    if (rdx != -1) {
        goto label_1;
    }
label_7:
    rax = time (0);
    *((rsp + 0x28)) = rax;
    if (rbx == 0) {
        goto label_8;
    }
    rax -= rbx;
    rdx = 0x1845c8a0ce512957;
    r13 = rax;
    rdx_rax = rax * rdx;
    rax = r13;
    rax >>= 0x3f;
    rdx >>= 0xd;
    rbx = rdx;
    rdx = 0x48d159e26af37c05;
    rbx -= rax;
    rsi = rbx * 0xfffffffffffeae80;
    rsi += r13;
    rax = rsi;
    rdx_rax = rax * rdx;
    rax = rsi;
    rax >>= 0x3f;
    rdx >>= 0xa;
    rdx -= rax;
    eax = edx * 0xe10;
    r12 = rdx;
    rdx = 0x8888888888888889;
    rax = (int64_t) eax;
    rsi -= rax;
    rax = rsi;
    rdx_rax = rax * rdx;
    rdx += rsi;
    rsi >>= 0x3f;
    rdx >>= 5;
    rdx -= rsi;
    r14 = rdx;
    rax = localtime (rsp + 0x28);
    edx = 5;
    r15 = rax;
    if (rax == 0) {
        goto label_9;
    }
    rax = dcgettext (0, " %H:%M:%S  ");
    r8d = 0;
    ecx = 0;
    rdx = r15;
    fcn_00403f10 (*(obj.stdout), rax);
label_3:
    if (r13 == -1) {
        goto label_10;
    }
    if (r13 > 0x1517f) {
        goto label_11;
    }
    edx = 5;
    rax = dcgettext (0, "up  %2d:%02d,  ");
    ecx = r14d;
    edx = r12d;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    do {
label_4:
        r8d = 5;
        rcx = rbp;
        edx = "%lu users";
        edi = 0;
        esi = "%lu user";
        rax = dcngettext ();
        rdx = rbp;
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
        esi = 3;
        rdi = rsp + 0x30;
        eax = getloadavg ();
        ebx = eax;
        if (eax == 0xffffffff) {
            goto label_12;
        }
        if (eax > 0) {
            xmm0 = *((rsp + 0x30));
            edx = 5;
            *((rsp + 8)) = xmm0;
            rax = dcgettext (0, ",  load average: %.2f");
            xmm0 = *((rsp + 8));
            edi = 1;
            rsi = rax;
            eax = 1;
            printf_chk ();
        }
        if (ebx > 1) {
            goto label_13;
        }
        if (ebx == 1) {
            goto label_12;
        }
label_2:
        return rax;
label_11:
        rcx = rbx;
        edi = 0;
        r8d = 5;
        edx = "up %ld days %2d:%02d,  ";
        esi = "up %ld day %2d:%02d,  ";
        rax = dcngettext ();
        r8d = r14d;
        ecx = r12d;
        rdx = rbx;
        rsi = rax;
        edi = 1;
        eax = 0;
        printf_chk ();
    } while (1);
label_13:
    xmm0 = *((rsp + 0x38));
    esi = ", %.2f";
    edi = 1;
    eax = 1;
    printf_chk ();
    if (ebx != 2) {
        xmm0 = *((rsp + 0x40));
        esi = ", %.2f";
        edi = 1;
        eax = 1;
        printf_chk ();
    }
label_12:
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax < *((rdi + 0x30))) {
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0xa;
        goto label_2;
label_9:
        rax = dcgettext (0, " ??:????  ");
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
        goto label_3;
label_10:
        edx = 5;
        rax = dcgettext (0, "up ???? days ??:??,  ");
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
        goto label_4;
label_6:
        rax = time (0);
        *((rsp + 0x28)) = rax;
label_8:
        edx = 5;
        rax = dcgettext (0, "couldn't get boot time");
        rbx = rax;
        rax = errno_location ();
        eax = 0;
        error (1, *(rax), rbx);
    }
    esi = 0xa;
    overflow ();
    goto label_2;
label_5:
    rdx = rbx;
    rax = fcn_00405ae0 (0, 3);
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    rax = error (1, *(rax), 0x408eb5);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x402130 */
#include <stdint.h>
 
uint64_t fcn_00402130 (char * arg_8h, int64_t arg_10h, char * arg_18h, char * arg_20h, char * arg_28h, char * arg_30h, char * arg_38h, char * arg_40h, char * arg_48h, char * arg_50h, char * arg_58h, int64_t arg_60h, int64_t arg_68h, int64_t arg1) {
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
    edx = 5;
    rax = dcgettext (0, "Print the current time, the length of time the system has been up,\nthe number of users on the system, and the average number of jobs\nin the run queue over the last 1, 5 and 15 minutes.");
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    edx = 5;
    rax = dcgettext (0, "  Processes in\nan uninterruptible sleep state also contribute to the load average.\n");
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    edx = 5;
    rax = dcgettext (0, "If FILE is not specified, use %s.  %s as FILE is common.\n\n");
    ecx = "/var/log/wtmp";
    edx = "/var/run/utmp";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
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
    *(rsp) = 0x408a98;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x408b12;
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
        esi = "uptime";
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
        eax = strncmp (rax, 0x408b1c, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x408ab4;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "uptime";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x40a5a7;
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
            eax = strncmp (rax, 0x408b1c, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "uptime";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x408ab4;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "uptime";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x402530 */
#include <stdint.h>
 
uint64_t fcn_00402530 (int64_t arg1, char * arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdx == 0) {
        goto label_0;
    }
    r12 = rdi;
    rbx = rsi;
    rbp += rbx;
    rax = ctype_tolower_loc ();
    r13 = rax;
    do {
        ecx = *(rbx);
        rax = *(r13);
        rbx++;
        fputc (*((rax + rcx*4)), r12);
    } while (rbx != rbp);
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x402590 */
#include <stdint.h>
 
uint64_t fcn_00402590 (int64_t arg1, char * arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdx == 0) {
        goto label_0;
    }
    r12 = rdi;
    rbx = rsi;
    rbp += rbx;
    rax = ctype_toupper_loc ();
    r13 = rax;
    do {
        ecx = *(rbx);
        rax = *(r13);
        rbx++;
        fputc (*((rax + rcx*4)), r12);
    } while (rbx != rbp);
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x4025f0 */
#include <stdint.h>
 
uint64_t fcn_004025f0 (int64_t arg_4e8h, int64_t arg1, char * arg11, char * arg2, tm * arg3, int64_t arg5, tm * arg6, char * arg7, int64_t arg9) {
    uint32_t var_4h;
    tm * timeptr;
    int64_t var_10h;
    tm * var_18h;
    int64_t var_20h;
    char * var_28h;
    char * var_30h;
    int64_t var_43h;
    int64_t var_44h;
    uint32_t var_48h;
    uint32_t c;
    uint32_t var_58h;
    uint32_t var_60h;
    uint32_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    char * format;
    int64_t var_82h;
    int64_t var_83h;
    int64_t var_97h;
    char * s;
    void * ptr;
    int64_t var_b0h;
    int64_t var_c0h;
    int64_t var_d0h;
    rdi = arg1;
    xmm4 = arg11;
    rsi = arg2;
    rdx = arg3;
    r8 = arg5;
    r9 = arg6;
    xmm0 = arg7;
    xmm2 = arg9;
label_10:
    eax = 0x40a5a7;
    r14 = rdi;
    rbx = rsi;
    r13 = *((rdx + 0x30));
    ebp = *((rdx + 8));
    *((rsp + 8)) = rdx;
    *((rsp + 0x20)) = r8;
    *((rsp + 0x18)) = r9;
    if (r13 == 0) {
        r13 = rax;
    }
    *((rsp + 0x43)) = cl;
    if (ebp <= 0xc) {
        goto label_53;
    }
    ebp -= 0xc;
label_0:
    edi = *(rbx);
    r12d = 0;
    if (dil == 0) {
        goto label_54;
    }
    rax = rsp + 0x82;
    *((rsp + 0x44)) = ebp;
    *((rsp + 0x10)) = rax;
    *((rsp + 0x28)) = r13;
    do {
        if (dil == 0x25) {
            goto label_55;
        }
        if (r12 > 0xfffffffffffffffd) {
            goto label_7;
        }
        if (r14 != 0) {
            fputc (rdi, r14);
        }
        r12++;
label_6:
        edi = *((rbp + 1));
        rbx = rbp + 1;
    } while (dil != 0);
    do {
label_54:
        rax = r12;
        return rax;
label_19:
        if (r11d == 0x5f) {
            goto label_56;
        }
        rdx = *((rsp + 0x30));
        if (rdx < rax) {
            goto label_57;
        }
label_7:
        r12d = 0;
    } while (1);
label_53:
    eax = 0xc;
    if (ebp == 0) {
    }
    goto label_0;
label_55:
    eax = *((rsp + 0x43));
    ebp = 0;
    r11d = 0;
    *((rsp + 4)) = al;
label_1:
    rbx++;
    eax = *(rbx);
    ecx = eax;
    edi = eax;
    if (al == 0x30) {
        goto label_58;
    }
    if (al > 0x30) {
        do {
            goto label_59;
        } while (al != 0x30); BROKEN_DOWHILE;
        if (al != 0x23) {
            goto label_60;
        }
        rbx++;
        eax = *(rbx);
        ecx = eax;
        edi = eax;
    }
    do {
label_58:
        r11d = eax;
        goto label_1;
INVALID_JUMP;
    } while (al == 0x2d);
    do {
        esi = rax - 0x30;
        r10d = 0xffffffff;
        if (esi <= 9) {
            goto label_61;
        }
label_3:
        if (cl == 0x45) {
            goto label_62;
        }
        r15d = 0;
        if (cl == 0x4f) {
            goto label_62;
        }
label_2:
        if (cl > 0x7a) {
            goto label_20;
        }
        eax = (int32_t) cl;
        /* switch table (123 cases) at 0x408ee0 */
label_59:
        if (al == 0x5e) {
            *((rsp + 4)) = 1;
            goto label_1;
        }
    } while (al != 0x5f);
    r11d = eax;
    goto label_1;
label_62:
    edi = *((rbx + 1));
    r15d = eax;
    rbx++;
    ecx = edi;
    goto label_2;
label_61:
    r10d = 0;
    do {
        eax = *((rbx + 1));
        r8 = rbx + 1;
        ecx = eax;
        edx = rax - 0x30;
        if (r10d > 0xccccccc) {
            goto label_63;
        }
        esi = *(rbx);
        if (r10d == 0xccccccc) {
            goto label_64;
        }
label_4:
        edi = r10 * 5;
        rbx = r8;
        r10d = rsi + rdi*2 - 0x30;
INVALID_JUMP;
    } while (edx <= 9);
    edi = eax;
    goto label_3;
label_64:
    if (sil <= 0x37) {
        goto label_4;
    }
label_63:
    if (edx > 9) {
        goto label_65;
    }
    eax = *((rbx + 2));
    r10d = 0x7fffffff;
    rbx += 2;
    ecx = eax;
    edx = rax - 0x30;
    goto label_5;
    if (r15d != 0) {
        goto label_20;
    }
    eax = *((rsp + 4));
    if (bpl != 0) {
        eax = ebp;
    }
    *((rsp + 4)) = al;
label_16:
    eax = 0x2520;
    *((rsp + 0x48)) = 0;
    r15d = 0;
    *((rsp + 0x80)) = ax;
    rax = *((rsp + 0x10));
label_8:
    *(rax) = cl;
    *((rax + 1)) = 0;
    *((rsp + 0x30)) = r10d;
    *((rsp + 0x50)) = r11d;
    rax = strftime (rsp + 0xa0, 0x400, rsp + 0x80, *((rsp + 8)));
    if (rax == 0) {
        goto label_6;
    }
    r10 = *((rsp + 0x30));
    rbx = rax - 1;
    eax = 0;
    rdx = r12;
    rdx = ~rdx;
    __asm ("cmovns rax, r10");
    rsi = rax;
    if (rbx >= rax) {
        rsi = rbx;
    }
    *((rsp + 0x30)) = rsi;
    if (rdx <= rsi) {
        goto label_7;
    }
    if (r14 == 0) {
        goto label_13;
    }
    if (r15d != 0) {
        goto label_35;
    }
    r11d = *((rsp + 0x50));
    if (rbx >= rax) {
        goto label_35;
    }
    r15 = (int64_t) r10d;
    r15 -= rbx;
    if (r11d == 0x30) {
        goto label_66;
    }
    r13d = 0;
    if (r15 == 0) {
        goto label_35;
    }
    do {
        r13++;
        fputc (0x20, r14);
    } while (r15 != r13);
label_35:
    if (*((rsp + 0x48)) != 0) {
        goto label_67;
    }
    if (*((rsp + 4)) == 0) {
        goto label_68;
    }
    fcn_00402590 (r14, rsp + 0xa1, rbx);
label_13:
    r12 += *((rsp + 0x30));
    goto label_6;
    if (r15d == 0x4f) {
        goto label_20;
    }
    *((rsp + 0x48)) = 0;
label_22:
    *((rsp + 0x80)) = bp;
    if (r15d != 0) {
        goto label_69;
    }
    rax = *((rsp + 0x10));
    goto label_8;
    if (r15d == 0x45) {
        goto label_20;
    }
    rax = *((rsp + 8));
    r9d = 2;
    esi = *((rax + 8));
    do {
label_14:
        eax = esi;
        edi = 0;
        ebp = 0;
        eax >>= 0x1f;
        r8d = eax;
label_9:
        if (r15d != 0x4f) {
            goto label_70;
        }
        if (r8b != 0) {
            goto label_71;
        }
label_24:
        edx = 0x2520;
        *((rsp + 0x48)) = 0;
        *((rsp + 0x80)) = dx;
label_52:
        *((rsp + 0x82)) = r15b;
        r15d = r9d;
        rax = rsp + 0x83;
        goto label_8;
        if (r15d == 0x45) {
            goto label_20;
        }
        esi = *((rsp + 0x44));
        r9d = 2;
    } while (1);
    if (r15d == 0x45) {
        goto label_72;
    }
    rax = *((rsp + 8));
    edx = 0x51eb851f;
    r9d = 2;
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
    ebp = 0;
    goto label_9;
    if (r15d != 0) {
        goto label_20;
    }
    *((rsp + 0x30)) = "%m/%d/%y";
label_21:
    eax = *((rsp + 4));
    *((rsp + 0x48)) = r10d;
    *((rsp + 0x58)) = r11d;
    *((rsp + 0xc)) = eax;
    edx = *((rsp + 0x4e8));
    rax = fcn_004025f0 (0, *((rsp + 0x40)), *((rsp + 0x18)), eax, *((rsp + 0x30)), *((rsp + 0x28)));
    goto label_10;
    edx = 0;
    r10 = *((rsp + 0x48));
    rcx = r12;
    rcx = ~rcx;
    __asm ("cmovns rdx, r10");
    if (rax >= rdx) {
    }
    if (rcx <= rbp) {
        goto label_7;
    }
    if (r14 == 0) {
        goto label_11;
    }
    r11d = *((rsp + 0x50));
    if (rax >= rdx) {
        goto label_43;
    }
    r13 = (int64_t) r10d;
    r13 -= rax;
    if (r11d == 0x30) {
        goto label_73;
    }
    r15d = 0;
    if (r13 == 0) {
        goto label_43;
    }
    do {
        r15++;
        fputc (0x20, r14);
    } while (r13 != r15);
label_43:
    eax = *((rsp + 0x4e8));
    fcn_004025f0 (r14, *((rsp + 0x40)), *((rsp + 0x18)), *((rsp + 0x14)), *((rsp + 0x30)), *((rsp + 0x28)));
    goto label_10;
label_11:
    r12 += rbp;
    goto label_6;
    eax = 1;
    __asm ("cmovns ebp, r10d");
    rbp = (int64_t) ebp;
    if (rbp == 0) {
    }
    rax = r12;
    rax = ~rax;
    if (rax <= rbp) {
        goto label_7;
    }
    if (r14 == 0) {
        goto label_11;
    }
    if (r10d <= 1) {
        goto label_12;
    }
    r10 = (int64_t) r10d;
    r15d = 0;
    r13 = r10 - 1;
    if (r11d == 0x30) {
        goto label_74;
    }
    do {
        r15++;
        fputc (0x20, r14);
    } while (r13 != r15);
label_12:
    fputc (9, r14);
    goto label_11;
    do {
label_74:
        r15++;
        fputc (0x30, r14);
    } while (r13 != r15);
    goto label_12;
    ecx = *((rbx - 1));
    r15 = rbx - 1;
label_18:
    eax = 0;
    rdx = r12;
    __asm ("cmovns eax, r10d");
    rdx = ~rdx;
    rax = (int64_t) eax;
    if (cl != 0x25) {
        goto label_75;
    }
    r13d = 1;
    if (rax != 0) {
        r13 = rax;
    }
    *((rsp + 0x30)) = r13;
    r13d = 1;
label_17:
    if (rdx <= *((rsp + 0x30))) {
        goto label_7;
    }
    if (r14 == 0) {
        goto label_13;
    }
    if (r13 >= rax) {
        goto label_39;
    }
    rbx = (int64_t) r10d;
    rax = rbx;
    rax -= r13;
    if (r11d == 0x30) {
        goto label_76;
    }
    ebx = 0;
    if (rax == 0) {
        goto label_39;
    }
    *((rsp + 0x48)) = rbp;
    rbx = rax;
    do {
        rbp++;
        fputc (0x20, r14);
    } while (rbx != rbp);
label_40:
    rbp = *((rsp + 0x48));
label_39:
    if (*((rsp + 4)) == 0) {
        goto label_77;
    }
    fcn_00402590 (r14, r15, r13);
    goto label_13;
    eax = 0;
    r13d = 1;
    rdx = r12;
    __asm ("cmovns eax, r10d");
    rsi = r13;
    rdx = ~rdx;
    rax = (int64_t) eax;
    if (rax != 0) {
        rsi = rax;
    }
    *((rsp + 0x30)) = rsi;
    if (r15d != 0) {
        goto label_78;
    }
    if (rdx <= rsi) {
        goto label_7;
    }
    if (r14 == 0) {
        goto label_15;
    }
    if (r10d <= 1) {
        goto label_79;
    }
    r10 = (int64_t) r10d;
    r15d = 0;
    rbp = r10 - 1;
    if (r11d == 0x30) {
        goto label_80;
    }
    do {
        r15++;
        fputc (0x20, r14);
    } while (rbp != r15);
label_29:
    edi = *(rbx);
label_79:
    fputc (rdi, r14);
label_15:
    r12 += *((rsp + 0x30));
    goto label_6;
    if (r15d == 0x45) {
        goto label_20;
    }
    rax = *((rsp + 8));
    r9d = 2;
    esi = *((rax + 4));
    goto label_14;
    if (r15d == 0x45) {
        goto label_20;
    }
    rax = *((rsp + 8));
    r9d = 2;
    esi = *(rax);
    goto label_14;
    if (r15d == 0x45) {
        goto label_20;
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
        r9d = 2;
        esi >>= 2;
        esi -= edi;
        goto label_14;
        if (r15d == 0x45) {
            goto label_20;
        }
        r9 = *((rsp + 8));
        esi = 0x92492493;
        eax = *((r9 + 0x18));
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
        edx = *((r9 + 0x1c));
        eax -= edi;
        edi = rax + rdx + 7;
        eax = edi;
        edx_eax = eax * esi;
    } while (1);
    if (r15d == 0x45) {
        goto label_72;
    }
    if (r15d == 0x4f) {
        goto label_20;
    }
    rax = *((rsp + 8));
    r9d = 4;
    esi = *((rax + 0x14));
    r8b = (esi < 0xfffff894) ? 1 : 0;
    esi += 0x76c;
    edi = 0;
    ebp = 0;
label_70:
    if (r8b != 0) {
label_71:
        esi = -esi;
    }
label_25:
    *((rsp + 0x30)) = r8b;
    rcx = rsp + 0x97;
    r15d = 0xcccccccd;
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
        edx_eax = eax * r15d;
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
    r8d = *((rsp + 0x30));
    if (r9d < r10d) {
        r9d = r10d;
    }
    *((rsp + 0x30)) = r9d;
    if (r8b != 0) {
        goto label_82;
    }
    if (bpl == 0) {
        goto label_83;
    }
    if (r11d == 0x2d) {
        goto label_84;
    }
    *((rsp + 0x50)) = 0x2b;
label_32:
    eax = *((rsp + 0x30));
    r15 = rsp + 0x97;
    r15 -= r13;
    eax--;
    eax -= r15d;
    edx = eax;
    *((rsp + 0x48)) = eax;
    rax = r12;
    rax = ~rax;
    if (edx <= 0) {
        goto label_85;
    }
    if (r11d == 0x5f) {
        goto label_86;
    }
    rdx = *((rsp + 0x30));
    rsi = rdx;
    if (rdx >= rax) {
        goto label_7;
    }
    edx = 0;
    ecx = 1;
    __asm ("cmovns edx, r10d");
    rdx = (int64_t) edx;
    if (rdx != 0) {
        rcx = rdx;
    }
    *((rsp + 0x58)) = rcx;
    if (rcx >= rax) {
        goto label_7;
    }
    if (r14 == 0) {
        goto label_87;
    }
    if (esi != 0) {
        goto label_48;
    }
    if (rdx <= 1) {
        goto label_48;
    }
    r10 = (int64_t) r10d;
    rax = r10 - 1;
    *((rsp + 0x60)) = rax;
    if (r11d == 0x30) {
        goto label_88;
    }
    ebp = 0;
    if (rax == 0) {
        goto label_48;
    }
    *((rsp + 0x68)) = r11d;
    *((rsp + 0x70)) = rbx;
    rbx = *((rsp + 0x60));
    do {
        rbp++;
        fputc (0x20, r14);
    } while (rbx != rbp);
    r11d = *((rsp + 0x68));
    rbx = *((rsp + 0x70));
label_48:
    edi = *((rsp + 0x50));
    *((rsp + 0x60)) = r11d;
    fputc (rdi, r14);
    r11d = *((rsp + 0x60));
label_87:
    r12 += *((rsp + 0x58));
label_57:
    rax = *((rsp + 0x48));
    *((rsp + 0x48)) = rax;
    if (r14 != 0) {
        goto label_89;
    }
label_36:
    r12 += *((rsp + 0x48));
    edx = 0;
    r10d = 0;
    rax = r12;
    rax = ~rax;
    goto label_33;
    if (r15d == 0x45) {
        goto label_20;
    }
    esi = *((rsp + 0x44));
label_26:
    r9d = 2;
    if (r11d == 0x30) {
        goto label_14;
    }
    if (r11d == 0x2d) {
        goto label_14;
    }
    r11d = 0x5f;
    goto label_14;
    rax = *((rsp + 8));
    edx = 0x92492493;
    r9d = 1;
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
    edx = *((rsp + 4));
    eax = 0;
    rdi = *((rsp + 0x28));
    *((rsp + 0x30)) = r10d;
    if (bpl != 0) {
        edx = eax;
    }
    *((rsp + 0x48)) = r11d;
    *((rsp + 4)) = dl;
    rax = strlen (rdi);
    r10 = *((rsp + 0x30));
    rcx = r12;
    r13 = rax;
    eax = 0;
    rcx = ~rcx;
    __asm ("cmovns rax, r10");
    rdx = rax;
    if (r13 >= rax) {
        rdx = r13;
    }
    *((rsp + 0x30)) = rdx;
    if (rcx <= rdx) {
        goto label_7;
    }
    if (r14 == 0) {
        goto label_15;
    }
    r11d = *((rsp + 0x48));
    if (r13 >= rax) {
        goto label_50;
    }
    rax = r10;
    rax -= r13;
    *((rsp + 0x48)) = rax;
    if (r11d == 0x30) {
        goto label_90;
    }
    r15d = 0;
    if (rax == 0) {
        goto label_50;
    }
    *((rsp + 0x50)) = bpl;
    r15 = r13;
    r13 = rbx;
    rbx = *((rsp + 0x48));
    do {
        rbp++;
        fputc (0x20, r14);
    } while (rbx != rbp);
    ebp = *((rsp + 0x50));
    rbx = r13;
    r13 = r15;
label_50:
    if (bpl != 0) {
        goto label_91;
    }
    if (*((rsp + 4)) == 0) {
        goto label_92;
    }
    fcn_00402590 (r14, *((rsp + 0x28)), r13);
    goto label_15;
    if (r15d == 0x45) {
        goto label_20;
    }
    rax = *((rsp + 8));
    r9d = 1;
    esi = *((rax + 0x18));
    goto label_14;
    eax = *((rsp + 4));
    if (bpl != 0) {
        eax = ebp;
    }
    *((rsp + 4)) = al;
    if (r15d == 0) {
        goto label_16;
    }
label_20:
    rax = rbx - 1;
    edx = rax + 2;
    do {
        r15 = rax;
        ebp -= eax;
        rax = rax - 1;
    } while (*((rax + 1)) != 0x25);
    eax = 0;
    r13 = (int64_t) ebp;
    rdx = r12;
    __asm ("cmovns eax, r10d");
    rdx = ~rdx;
    rax = (int64_t) eax;
    rsi = rax;
    if (r13 >= rax) {
        rsi = r13;
    }
    *((rsp + 0x30)) = rsi;
    goto label_17;
    r13d = 0;
label_28:
    rax = *((rsp + 8));
    esi = *((rax + 0x20));
    if (esi < 0) {
        goto label_93;
    }
    rsi = *((rax + 0x28));
    r8d = 1;
    if (esi >= 0) {
        r8d = 0;
        if (esi != 0) {
            goto label_94;
        }
        rax = *((rsp + 0x28));
        r8b = (*(rax) == 0x2d) ? 1 : 0;
    }
label_94:
    eax = esi;
    edx = 0x91a2b3c5;
    edi = 0x88888889;
    edx_eax = eax * edx;
    ebp >>= 0x1f;
    eax = esi;
    edx += esi;
    edx >>= 0xb;
    edx -= ebp;
    *((rsp + 0x30)) = edx;
    edx_eax = eax * edi;
    r9d = rdx + rsi;
    r9d >>= 5;
    r9d -= ebp;
    eax = r9d;
    edx_eax = eax * edi;
    eax = r9d;
    eax >>= 0x1f;
    edi = rdx + r9;
    edi >>= 5;
    edi -= eax;
    eax = r9d;
    edi *= 0x3c;
    r9d *= 0x3c;
    eax -= edi;
    edi = eax;
    esi -= r9d;
    if (r13 == 1) {
        goto label_46;
    }
    if (r13 == 0) {
        goto label_95;
    }
    if (r13 == 2) {
        goto label_96;
    }
    if (r13 == 3) {
        goto label_97;
    }
    ecx = *(rbx);
    r15 = rbx;
    goto label_18;
    rax = *((rsp + 8));
    *((rsp + 0x50)) = r10d;
    *((rsp + 0x48)) = r11d;
    r13 = rsp + 0x97;
    __asm ("movdqu xmm4, xmmword [rax + 0x20]");
    __asm ("movdqu xmm0, xmmword [rax]");
    __asm ("movdqu xmm2, xmmword [rax + 0x10]");
    rax = *((rax + 0x30));
    *((rsp + 0xa0)) = xmm0;
    *((rsp + 0xb0)) = xmm2;
    *((rsp + 0x30)) = xmm4;
    *((rsp + 0xc0)) = xmm4;
    *((rsp + 0xd0)) = rax;
    rax = fcn_00407970 (*((rsp + 0x18)), rsp + 0xa0);
    r11d = *((rsp + 0x48));
    r10d = *((rsp + 0x50));
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
    r9d = 1;
    if (r10d > 0) {
        r9d = r10d;
    }
    *((rsp + 0x30)) = r9d;
    if (rsi < 0) {
        goto label_82;
    }
label_83:
    r15 = rsp + 0x97;
    rax = r12;
    r15 -= r13;
    rax = ~rax;
    if (r11d == 0x2d) {
        goto label_98;
    }
    edx = *((rsp + 0x30));
    edx -= r15d;
    *((rsp + 0x48)) = edx;
    if (edx > 0) {
        goto label_19;
    }
label_98:
    edx = 0;
    __asm ("cmovns edx, r10d");
    rdx = (int64_t) edx;
label_33:
    rsi = rdx;
    if (r15 >= rdx) {
        rsi = r15;
    }
    *((rsp + 0x48)) = rsi;
    if (rsi >= rax) {
        goto label_7;
    }
    if (r14 == 0) {
        goto label_34;
    }
    edi = *((rsp + 0x30));
    if (edi != 0) {
        goto label_37;
    }
    if (r15 >= rdx) {
        goto label_37;
    }
    rax = (int64_t) r10d;
    rax -= r15;
    if (r11d == 0x30) {
        goto label_99;
    }
    ebx = 0;
    if (rax == 0) {
        goto label_37;
    }
    *((rsp + 0x30)) = rbp;
    rbx = rax;
    do {
        rbp++;
        fputc (0x20, r14);
    } while (rbx != rbp);
label_38:
    rbp = *((rsp + 0x30));
label_37:
    if (*((rsp + 4)) == 0) {
        goto label_100;
    }
    fcn_00402590 (r14, r13, r15);
label_34:
    r12 += *((rsp + 0x48));
    goto label_6;
    if (r15d == 0x45) {
        goto label_72;
    }
    rax = *((rsp + 8));
    edx = 0x51eb851f;
    r9d = 2;
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
    if (r15d != 0) {
        goto label_20;
    }
    *((rsp + 0x30)) = "%Y-%m-%d";
    goto label_21;
    if (r15d == 0x45) {
        goto label_20;
    }
    rdx = *((rsp + 8));
    ebp = *((rdx + 0x14));
    esi = *((rdx + 0x1c));
    r13d = *((rdx + 0x18));
    edx = 0x92492493;
    eax = ebp;
    edi = esi;
    eax >>= 0x1f;
    edi -= r13d;
    edi += 0x17e;
    eax &= 0x190;
    r9d = rbp + rax - 0x64;
    eax = edi;
    edx_eax = eax * edx;
    eax = rdx + rdi;
    edx = edi;
    edx >>= 0x1f;
    eax >>= 2;
    eax -= edx;
    edx = rax*8;
    edx -= eax;
    eax = edx;
    edx = esi;
    edx -= edi;
    r8d = rdx + rax + 3;
    if (r8d < 0) {
        goto label_101;
    }
    eax = 0x16d;
    if ((r9b & 3) == 0) {
        edi = 0x51eb851f;
        eax = r9d;
        edx_eax = eax * edi;
        eax = r9d;
        eax >>= 0x1f;
        *((rsp + 0x30)) = eax;
        edi = edx;
        edx >>= 5;
        edx -= eax;
        eax = 0x16e;
        edx *= 0x64;
        if (r9d != edx) {
            goto label_102;
        }
        edi >>= 7;
        eax = edi;
        eax -= *((rsp + 0x30));
        eax *= 0x190;
        al = (r9d == eax) ? 1 : 0;
        eax = (int32_t) al;
        eax += 0x16d;
    }
label_102:
    esi -= eax;
    edx = 0x92492493;
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
label_44:
    if (cl == 0x47) {
        goto label_103;
    }
    if (cl != 0x67) {
        goto label_104;
    }
    esi = 0x51eb851f;
    eax = ebp;
    edi = ebp;
    r9d = 2;
    edx_eax = eax * esi;
    eax = edx;
    edx = ebp;
    edx >>= 0x1f;
    eax >>= 5;
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
    if (edi >= 0) {
        goto label_14;
    }
    eax = 0xfffff894;
    edx = edi;
    esi += 0x64;
    eax -= r13d;
    edx = -edx;
    if (ebp < eax) {
        esi = edx;
    }
    goto label_14;
    *((rsp + 0x48)) = 1;
label_27:
    eax = *((rsp + 0x48));
    edx = *((rsp + 4));
    ecx = 0x70;
    if (bpl != 0) {
        eax = ebp;
    }
    *((rsp + 0x48)) = al;
    eax = 0;
    if (bpl != 0) {
        edx = eax;
    }
    *((rsp + 4)) = dl;
    goto label_22;
    *((rsp + 0x30)) = "%H:%M";
    goto label_21;
    eax = 1;
    __asm ("cmovns ebp, r10d");
    rbp = (int64_t) ebp;
    if (rbp == 0) {
    }
    rax = r12;
    rax = ~rax;
    if (rax <= rbp) {
        goto label_7;
    }
    if (r14 == 0) {
        goto label_11;
    }
    if (r10d <= 1) {
        goto label_23;
    }
    r10 = (int64_t) r10d;
    r15d = 0;
    r13 = r10 - 1;
    if (r11d == 0x30) {
        goto label_105;
    }
    do {
        r15++;
        fputc (0x20, r14);
    } while (r13 != r15);
label_23:
    fputc (0xa, r14);
    goto label_11;
    do {
label_105:
        r15++;
        fputc (0x30, r14);
    } while (r13 != r15);
    goto label_23;
    rax = *((rsp + 8));
    r9d = 1;
    eax = *((rax + 0x10));
    if (r15d == 0x4f) {
        goto label_24;
    }
    edx = rax * 5;
    ebp = 0;
    r8d = 0;
    edi = 0;
    esi = rax + rdx*2;
    esi >>= 5;
    esi++;
    goto label_25;
    if (r15d == 0x45) {
        goto label_20;
    }
    rax = *((rsp + 8));
    r9d = 2;
    esi = *((rax + 0x10));
    r8b = (esi < 0xffffffff) ? 1 : 0;
    esi++;
    edi = 0;
    ebp = 0;
    goto label_9;
    if (r15d == 0x45) {
        goto label_20;
    }
    rax = *((rsp + 8));
    r9d = 2;
    esi = *((rax + 0xc));
    goto label_14;
    if (r15d == 0x45) {
        goto label_20;
    }
    rax = *((rsp + 8));
    esi = *((rax + 0xc));
    goto label_26;
    if (r15d == 0x45) {
        goto label_20;
    }
    rax = *((rsp + 8));
    r9d = 3;
    esi = *((rax + 0x1c));
    r8b = (esi < 0xffffffff) ? 1 : 0;
    esi++;
    edi = 0;
    ebp = 0;
    goto label_9;
    if (r15d == 0x45) {
        goto label_20;
    }
    rax = *((rsp + 8));
    esi = *((rax + 8));
    goto label_26;
    if (r15d == 0x45) {
        goto label_20;
    }
    if (r10d != 0xffffffff) {
        goto label_106;
    }
    esi = *((rsp + 0x4e0));
    r10d = 9;
    r9d = 9;
    goto label_14;
    *((rsp + 0x30)) = "%H:%M:%S";
    goto label_21;
    *((rsp + 0x48)) = 0;
    goto label_27;
    eax = *((rbx + 1));
    rdx = rbx + 1;
    r13d = 1;
    if (al == 0x3a) {
        goto label_31;
    }
label_30:
    if (al != 0x7a) {
        goto label_20;
    }
    rbx = rdx;
    goto label_28;
    do {
label_80:
        r15++;
        fputc (0x30, r14);
    } while (rbp != r15);
    goto label_29;
label_31:
    r13++;
    eax = *((rbx + r13));
    rdx = rbx + r13;
    if (al != 0x3a) {
        goto label_30;
    }
    goto label_31;
label_65:
    edi = eax;
    rbx = r8;
    r10d = 0x7fffffff;
    goto label_3;
label_82:
    *((rsp + 0x50)) = 0x2d;
    if (r11d != 0x2d) {
        goto label_32;
    }
    *((rsp + 0x48)) = 0x2d;
label_41:
    edx = 0;
    r15d = 1;
    rax = r12;
    __asm ("cmovns edx, r10d");
    rax = ~rax;
    rdx = (int64_t) edx;
    if (rdx != 0) {
        r15 = rdx;
    }
    if (rax <= r15) {
        goto label_7;
    }
    if (r14 != 0) {
        r11d = *((rsp + 0x30));
        if (r11d == 0) {
            if (rdx > 1) {
                goto label_107;
            }
        }
label_45:
        edi = *((rsp + 0x48));
        *((rsp + 0x58)) = rdx;
        *((rsp + 0x50)) = r10d;
        fputc (rdi, r14);
        r10d = *((rsp + 0x50));
        rdx = *((rsp + 0x58));
    }
    r12 += r15;
    r15 = rsp + 0x97;
    r11d = 0x2d;
    rax = r12;
    r15 -= r13;
    rax = ~rax;
    goto label_33;
label_100:
    fwrite (r13, r15, 1, r14);
    goto label_34;
label_77:
    fwrite (r15, r13, 1, r14);
    goto label_13;
label_68:
    fwrite (rsp + 0xa1, rbx, 1, r14);
    goto label_13;
label_67:
    fcn_00402530 (r14, rsp + 0xa1, rbx);
    goto label_13;
label_66:
    if (r15 == 0) {
        goto label_35;
    }
    edx = 0;
    r13 = rdx;
    do {
        r13++;
        rax = fputc (0x30, r14);
    } while (r15 != r13);
    goto label_35;
label_85:
    edx = 0;
    ecx = 1;
    __asm ("cmovns edx, r10d");
    rdx = (int64_t) edx;
    if (rdx != 0) {
        rcx = rdx;
    }
    *((rsp + 0x48)) = rcx;
    if (rcx >= rax) {
        goto label_7;
    }
    if (r14 == 0) {
        goto label_108;
    }
    r8d = *((rsp + 0x30));
    if (r8d != 0) {
        goto label_47;
    }
    if (rdx <= 1) {
        goto label_47;
    }
    rbp = (int64_t) r10d;
    rax = rbp - 1;
    *((rsp + 0x58)) = rax;
    if (r11d == 0x30) {
        goto label_109;
    }
    ebp = 0;
    if (rax == 0) {
        goto label_47;
    }
    *((rsp + 0x60)) = r11d;
    *((rsp + 0x68)) = r10d;
    *((rsp + 0x70)) = rdx;
    *((rsp + 0x78)) = rbx;
    rbx = *((rsp + 0x58));
    do {
        rbp++;
        fputc (0x20, r14);
    } while (rbx != rbp);
    r11d = *((rsp + 0x60));
    r10d = *((rsp + 0x68));
    rdx = *((rsp + 0x70));
    rbx = *((rsp + 0x78));
label_47:
    edi = *((rsp + 0x50));
    *((rsp + 0x68)) = rdx;
    *((rsp + 0x60)) = r10d;
    *((rsp + 0x58)) = r11d;
    fputc (rdi, r14);
    r11d = *((rsp + 0x58));
    r10d = *((rsp + 0x60));
    rdx = *((rsp + 0x68));
label_108:
    r12 += *((rsp + 0x48));
    rax = r12;
    rax = ~rax;
    goto label_33;
label_56:
    *((rsp + 0x50)) = 0;
label_86:
    rbp = *((rsp + 0x48));
    if (rbp >= rax) {
        goto label_7;
    }
    if (r14 != 0) {
        goto label_110;
    }
label_42:
    edx = *((rsp + 0x48));
    eax = r10d;
    r12 += rbp;
    eax -= edx;
    r10d = 0;
    if (edx < r10d) {
        r10d = eax;
    }
    rax = r12;
    rax = ~rax;
    if (*((rsp + 0x50)) == 0) {
        goto label_111;
    }
    rdx = (int64_t) r10d;
    if (rdx != 0) {
    }
    if (rbp >= rax) {
        goto label_7;
    }
    if (r14 != 0) {
        r9d = *((rsp + 0x30));
        if (r9d == 0) {
            if (r10d > 1) {
                goto label_112;
            }
        }
label_49:
        edi = *((rsp + 0x50));
        *((rsp + 0x58)) = rdx;
        *((rsp + 0x48)) = r10d;
        fputc (rdi, r14);
        r10d = *((rsp + 0x48));
        rdx = *((rsp + 0x58));
    }
    r12 += rbp;
    r11d = 0x5f;
    r15 = rsp + 0x97;
    rax = r12;
    r15 -= r13;
    rax = ~rax;
    goto label_33;
label_89:
    ebx = 0;
    *((rsp + 0x58)) = r11d;
    *((rsp + 0x50)) = rbp;
    rbx = *((rsp + 0x48));
    do {
        rbp++;
        rax = fputc (0x30, r14);
    } while (rbp < rbx);
    rbp = *((rsp + 0x50));
    r11d = *((rsp + 0x58));
    goto label_36;
label_99:
    rbx = rax;
    if (rax == 0) {
        goto label_37;
    }
    edx = 0;
    *((rsp + 0x30)) = rbp;
    do {
        rbp++;
        rax = fputc (0x30, r14);
    } while (rbx != rbp);
    goto label_38;
label_72:
    r9d = 0;
    goto label_24;
label_76:
    rbx = rax;
    if (rax == 0) {
        goto label_39;
    }
    edx = 0;
    *((rsp + 0x48)) = rbp;
    do {
        rbp++;
        fputc (0x30, r14);
    } while (rbx != rbp);
    goto label_40;
label_84:
    *((rsp + 0x48)) = 0x2b;
    goto label_41;
label_93:
    goto label_6;
label_111:
    r15 = rsp + 0x97;
    rdx = (int64_t) r10d;
    r11d = 0x5f;
    r15 -= r13;
    goto label_33;
label_110:
    *((rsp + 0x58)) = r10d;
    r15d = 0;
    rax = rbx;
    rbx = r15;
    r15 = rax;
    do {
        rbx++;
        rax = fputc (0x20, r14);
    } while (rbp > rbx);
    r10d = *((rsp + 0x58));
    rbx = r15;
    goto label_42;
label_73:
    if (r13 == 0) {
        goto label_43;
    }
    edx = 0;
    r15 = rdx;
    do {
        r15++;
        fputc (0x30, r14);
    } while (r13 != r15);
    goto label_43;
label_101:
    r9d--;
    edx = 0x16d;
    if ((r9b & 3) == 0) {
        eax = r9d;
        edx = 0x51eb851f;
        edx_eax = eax * edx;
        eax = edx;
        edx = r9d;
        edx >>= 0x1f;
        eax >>= 5;
        eax -= edx;
        edx = 0x16e;
        eax *= 0x64;
        if (r9d != eax) {
            goto label_113;
        }
        eax = r9d;
        edi = 0x190;
        edx_eax = (int64_t) eax;
        eax = edx_eax / edi;
        edx = edx_eax % edi;
        edx -= edx;
        edx = ~edx;
        edx += 0x16e;
    }
label_113:
    esi += edx;
    edx = 0x92492493;
    edi = esi;
    edi -= r13d;
    r13d = 0xffffffff;
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
    r8d = rsi + rdx + 3;
    goto label_44;
label_106:
    if (r10d > 8) {
        goto label_114;
    }
    esi = *((rsp + 0x4e0));
    edi = r10d;
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
label_51:
    r9d = r10d;
    goto label_14;
label_104:
    eax = r8d;
    edx = 0x92492493;
    r9d = 2;
    edx_eax = eax * edx;
    esi = rdx + r8;
    r8d >>= 0x1f;
    esi >>= 2;
    esi -= r8d;
    esi++;
    goto label_14;
label_103:
    eax = 0xfffff894;
    esi = rbp + r13 + 0x76c;
    r9d = 4;
    eax -= r13d;
    r8b = (ebp < eax) ? 1 : 0;
    edi = 0;
    ebp = 0;
    goto label_9;
label_107:
    rax = (int64_t) r10d;
    rax--;
    if (rax == 0) {
        goto label_45;
    }
    *((rsp + 0x50)) = r10d;
    ebp = 0;
    *((rsp + 0x58)) = rdx;
    *((rsp + 0x60)) = rbx;
    rbx = rax;
    do {
        rbp++;
        fputc (0x20, r14);
    } while (rbx != rbp);
    r10d = *((rsp + 0x50));
    rdx = *((rsp + 0x58));
    rbx = *((rsp + 0x60));
    goto label_45;
    do {
label_96:
        edi *= 0x64;
        r9d = 9;
        eax = *((rsp + 0x30)) * 0x2710;
        eax += edi;
        edi = 0x14;
        esi += eax;
        goto label_9;
label_46:
        esi = *((rsp + 0x30)) * 0x64;
        r9d = 6;
        esi += edi;
        edi = 4;
        goto label_9;
label_92:
        fwrite (*((rsp + 0x28)), r13, 1, r14);
        goto label_15;
label_91:
        fcn_00402530 (r14, *((rsp + 0x28)), r13);
        goto label_15;
label_95:
        esi = *((rsp + 0x30)) * 0x64;
        edi = 0;
        r9d = 5;
        esi += eax;
        goto label_9;
INVALID_JUMP;
    } while (esi != 0);
    if (eax != 0) {
        goto label_46;
    }
    esi = *((rsp + 0x30));
    r9d = 3;
    goto label_9;
label_78:
    r15 = rbx;
    r13d = 1;
    goto label_17;
label_109:
    if (*((rsp + 0x58)) == 0) {
        goto label_47;
    }
    *((rsp + 0x60)) = r11d;
    ecx = 0;
    *((rsp + 0x68)) = r10d;
    *((rsp + 0x70)) = rbx;
    rbx = rcx;
    do {
        rbx++;
        fputc (0x30, r14);
    } while (*((rsp + 0x58)) != rbx);
    r11d = *((rsp + 0x60));
    r10d = *((rsp + 0x68));
    rdx = rbp;
    rbx = *((rsp + 0x70));
    goto label_47;
label_88:
    if (*((rsp + 0x60)) == 0) {
        goto label_48;
    }
    edx = 0;
    *((rsp + 0x68)) = rbx;
    rbx = rdx;
    do {
        rbx++;
        fputc (0x30, r14);
    } while (*((rsp + 0x60)) != rbx);
    r11d = ebp;
    rbx = *((rsp + 0x68));
    goto label_48;
label_112:
    rax = rdx - 1;
    *((rsp + 0x58)) = r10d;
    r15d = 0;
    *((rsp + 0x48)) = rax;
    *((rsp + 0x60)) = rbx;
    rbx = r15;
    r15 = rdx;
    do {
        rbx++;
        fputc (0x20, r14);
    } while (*((rsp + 0x48)) != rbx);
    r10d = *((rsp + 0x58));
    rbx = *((rsp + 0x60));
    rdx = r15;
    goto label_49;
label_90:
    if (*((rsp + 0x48)) == 0) {
        goto label_50;
    }
    ecx = 0;
    r15 = rcx;
    do {
        r15++;
        fputc (0x30, r14);
    } while (*((rsp + 0x48)) != r15);
    goto label_50;
label_114:
    esi = *((rsp + 0x4e0));
    goto label_51;
label_75:
    rbx = r15;
    goto label_20;
label_69:
    r9d = 0;
    goto label_52;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x403f10 */
#include <stdint.h>
 
void fcn_00403f10 (int64_t arg4, int64_t arg5) {
    int64_t var_17h;
    rcx = arg4;
    r8 = arg5;
    *((rsp + 0x17)) = 0;
    fcn_004025f0 (rdi, rsi, rdx, 0, rsp + 0x1f, rcx);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x403f30 */
#include <stdint.h>
 
uint64_t fcn_00403f30 (int64_t arg_100h, uint32_t arg1, int64_t arg10, int64_t arg11, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9) {
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_50h;
    int64_t var_60h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_90h;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_c0h;
    rdi = arg1;
    xmm3 = arg10;
    xmm4 = arg11;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
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
    ebx = *(0x0060c2b8);
    *(0x0060c2b8) = 0;
    while (eax == 0xffffffff) {
label_0:
        *(0x0060c2b8) = ebx;
        *(0x0060c2bc) = 0;
        return;
        r13 = r8;
        r12 = rcx;
        r8d = 0;
        ecx = 0x4092e0;
        edx = 0x4092b8;
        r14 = r9;
        eax = fcn_00407200 ();
    }
    if (eax == 0x68) {
        goto label_1;
    }
    if (eax != 0x76) {
        goto label_0;
    }
    rcx = r13;
    rdx = r12;
    rsi = rbp;
    rax = rsp + 0x100;
    r8 = rsp + 8;
    *((rsp + 8)) = 0x30;
    *((rsp + 0x10)) = rax;
    rax = rsp + 0x20;
    *((rsp + 0xc)) = 0x30;
    *((rsp + 0x18)) = rax;
    fcn_00406080 (*(obj.stdout));
    exit (0);
label_1:
    edi = 0;
invalid_funccall(); //    void (*r14)() ();
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x404040 */
#include <stdint.h>
 
uint64_t fcn_00404040 (char ** arg1) {
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
            edi = 0x409380;
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
        *(0x0060c308) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x4040e0 */
#include <stdint.h>
 
uint64_t fcn_004040e0 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_00407b70 ();
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
        eax = 0x409386;
        ebx = 0x409391;
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
        eax = 0x40938a;
        ebx = 0x40938d;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x40a577;
    ebx = 0x409384;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x4041e0 */
#include <stdint.h>
 
uint64_t fcn_004041e0 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        /* [13] -r-x section size 28136 named .text */
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
    /* switch table (11 cases) at 0x409400 */
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
    *((rsp + 0x50)) = 0x40a577;
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
        /* switch table (127 cases) at 0x409458 */
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
    rax = fcn_004041e0 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x409850 */
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
    /* switch table (127 cases) at 0x409c48 */
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
    *((rsp + 0x50)) = 0x40a577;
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
        rax = fcn_00407280 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x40a577;
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
        *((rsp + 0x50)) = 0x409384;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_004040e0 (0x409395, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_004040e0 (0x40a577, r13d);
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
        *((rsp + 0x50)) = 0x409384;
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
        *((rsp + 0x50)) = 0x40a577;
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
    *((rsp + 0x50)) = 0x409384;
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
    rax = fcn_004041e0 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x40a577;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x405410 */
#include <stdint.h>
 
uint64_t fcn_00405410 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
    rax = fcn_00406280 (rbx, rsi);
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
        rax = fcn_004041e0 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x60c320) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00406220 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_004041e0 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00406280 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x0060c2a0]");
        rbx = rax;
        *(0x0060c298) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00406470 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x405ab0 */
#include <stdint.h>
 
int64_t fcn_00405ab0 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x0060c420]");
        __asm ("movdqa xmm1, xmmword [0x0060c430]");
        __asm ("movdqa xmm2, xmmword [0x0060c440]");
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
        fcn_00405410 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x405ae0 */
#include <stdint.h>
 
int64_t fcn_00405ae0 (uint32_t arg2, int64_t arg3) {
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
    fcn_00405410 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x405c60 */
#include <stdint.h>
 
void fcn_00405c60 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x60c260;
    rdx = 0xffffffffffffffff;
    edi = 0;
invalid_funccall(); //    return void (*0x405410)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x405c80 */
#include <stdint.h>
 
void fcn_00405c80 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x40a0eb);
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
        /* switch table (10 cases) at 0x40a3d8 */
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
invalid_funccall(); //    void (*0x401b50)() ();
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
invalid_funccall(); //    void (*0x401b50)() ();
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
invalid_funccall(); //    void (*0x401b50)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x406080 */
#include <stdint.h>
 
int64_t fcn_00406080 (int64_t arg5) {
    r8 = arg5;
    r9d = 0;
    while (eax <= 0x2f) {
        r10d = eax;
        eax += 8;
        r10 += *((r8 + 0x10));
        *(r8) = eax;
        rax = *(r10);
        *((rsp + r9*8)) = rax;
        if (rax == 0) {
            goto label_1;
        }
label_0:
        r9++;
        if (r9 == 0xa) {
            goto label_1;
        }
        eax = *(r8);
    }
    r10 = *((r8 + 8));
    rax = r10 + 8;
    *((r8 + 8)) = rax;
    rax = *(r10);
    *((rsp + r9*8)) = rax;
    if (rax != 0) {
        goto label_0;
    }
label_1:
    fcn_00405c80 (rdi, rsi, rdx, rcx, rsp, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x406220 */
#include <stdint.h>
 
uint64_t fcn_00406220 (int64_t arg1) {
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
    return fcn_00406470 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x406280 */
#include <stdint.h>
 
uint64_t fcn_00406280 (int64_t arg1, int64_t arg2) {
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
    return fcn_00406470 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x406420 */
#include <stdint.h>
 
uint64_t fcn_00406420 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00406220 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x406470 */
#include <stdint.h>
 
uint64_t fcn_00406470 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x0060c258), 0, 0x408eb5);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x4064b0 */
#include <stdint.h>
 
uint64_t fcn_004064b0 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x406590 */
#include <stdint.h>
 
int64_t fcn_00406590 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x406bb0 */
#include <stdint.h>
 
uint64_t fcn_00406bb0 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x40a589;
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
            fcn_004064b0 (r12, rbx);
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
        fcn_004064b0 (r12, rbx);
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
    eax = fcn_00406590 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_00406590 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x407180 */
#include <stdint.h>
 
int32_t fcn_00407180 (int64_t arg_10h) {
    eax = *(0x0060c2bc);
    *(0x0060c460) = eax;
    eax = *(0x0060c2b8);
    *(0x0060c464) = eax;
    eax = *((rsp + 0x10));
    fcn_00406bb0 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0060c2bc) = edx;
    rdx = imp.__libc_start_main;
    *(0x0060c4b0) = rdx;
    edx = imp.__libc_start_main;
    *(0x0060c2b4) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x407200 */
#include <stdint.h>
 
void fcn_00407200 (void) {
    r9d = 0;
    fcn_00407180 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x407280 */
#include <stdint.h>
 
uint64_t fcn_00407280 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_00407b10 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x407360 */
#include <stdint.h>
 
uint64_t fcn_00407360 (int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14d = 0;
    r13d = ecx;
    r12d = r13d;
    r13d &= 1;
    r12d &= 2;
    ebp = 0;
    ebx = 0;
    *((rsp + 8)) = rsi;
    *((rsp + 0x10)) = rdx;
    utmpxname ();
    setutxent ();
    do {
label_2:
        rax = getutxent ();
        r15 = rax;
        if (rax == 0) {
            goto label_6;
        }
label_0:
        if (*((r15 + 0x2c)) != 0) {
            if (*(r15) == 7) {
                goto label_7;
            }
        }
    } while (r12d != 0);
label_1:
    if (rbx == rbp) {
        goto label_8;
    }
label_3:
    rdx = rbx + 1;
label_4:
    rax = rbx * 3;
    rsi = *(r15);
    rbx = rdx;
    rax <<= 7;
    rax += r14;
    *(rax) = rsi;
    rdi = rax + 8;
    rsi = *((r15 + 0x178));
    rdi &= 0xfffffffffffffff8;
    *((rax + 0x178)) = rsi;
    rax -= rdi;
    rsi = r15;
    rsi -= rax;
    eax += 0x180;
    eax >>= 3;
    ecx = eax;
    *(rdi) = *(rsi);
    rcx--;
    rsi += 8;
    rdi += 8;
    rax = getutxent ();
    r15 = rax;
    if (rax != 0) {
        goto label_0;
    }
label_6:
    endutxent ();
    rax = *((rsp + 8));
    *(rax) = rbx;
    rax = *((rsp + 0x10));
    *(rax) = r14;
    eax = 0;
    return rax;
label_7:
    if (r13d == 0) {
        goto label_1;
    }
    edi = *((r15 + 4));
    if (edi <= 0) {
        goto label_1;
    }
    eax = kill (rdi, 0);
    if (eax >= 0) {
        goto label_1;
    }
    do {
        rax = errno_location ();
    } while (rcx != 0);
    if (*(rax) == 3) {
        goto label_2;
    }
    if (rbx != rbp) {
        goto label_3;
    }
label_8:
    if (r14 == 0) {
        goto label_9;
    }
    rax = 0x38e38e38e38e37;
    if (rbx > rax) {
        goto label_10;
    }
    rdx = rbx + 1;
    rbp >>= 1;
    rbp += rdx;
    rsi <<= 7;
    do {
label_5:
        *((rsp + 0x18)) = rdx;
        rax = fcn_00406280 (r14, rbp + rbp*2);
        rdx = *((rsp + 0x18));
        r14 = rax;
        goto label_4;
label_9:
        if (rbx == 0) {
            goto label_11;
        }
        edx = 0x180;
        rax = rdx;
        rdx_rax = rax * rbx;
        __asm ("seto dl");
        edx = (int32_t) dl;
        if (rax < 0) {
            goto label_10;
        }
        if (rdx != 0) {
            goto label_10;
        }
        rsi = rbx * 3;
        rdx = rbx + 1;
        rsi <<= 7;
    } while (1);
label_11:
    esi = 0x180;
    edx = 1;
    goto label_5;
label_10:
    return fcn_00406470 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x407510 */
#include <stdint.h>
 
uint32_t fcn_00407510 (char * value) {
    rdi = value;
    if (*((rdi + 8)) != 0) {
        goto label_0;
    }
    edi = 0x40a5ac;
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
        setenv (0x40a5ac, rdi + 9, 1);
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x407560 */
#include <stdint.h>
 
void fcn_00407560 (int64_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x407590 */
#include <stdint.h>
 
uint64_t fcn_00407590 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    rax = errno_location ();
    rbx = rax;
    r13d = *(rax);
    eax = fcn_00407510 (r12);
    if (al == 0) {
        r13d = *(rbx);
    }
    fcn_00407560 (r12);
    *(rbx) = r13d;
    eax = ebp;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x4075e0 */
#include <stdint.h>
 
uint64_t fcn_004075e0 (int64_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x407670 */
#include <stdint.h>
 
int64_t fcn_00407670 (int64_t arg1, uint32_t arg2) {
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
        ebx = 0x40a5a7;
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
    rax = fcn_004075e0 (r12);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x4077f0 */
#include <stdint.h>
 
uint64_t fcn_004077f0 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    rax = getenv (0x40a5ac);
    if (rax == 0) {
        goto label_1;
    }
    while (eax != 0) {
label_0:
        rax = fcn_004075e0 (rbp);
        rbx = rax;
        if (rax != 0) {
            al = fcn_00407510 (r12);
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
        fcn_00407560 (rbx);
    }
    ebx = 0;
    *(rbp) = r12d;
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x407970 */
#include <stdint.h>
 
uint64_t fcn_00407970 (tm * arg1, char * arg2) {
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
    rax = fcn_004077f0 (rdi);
    r12 = rax;
    if (rax == 0) {
        goto label_4;
    }
    rax = fcn_004088c0 (rbx);
    *((rsp + 8)) = rax;
    if (rax == -1) {
        goto label_5;
    }
label_1:
    al = fcn_00407670 (rbp, rbx);
    if (al != 0) {
        goto label_0;
    }
    *((rsp + 8)) = 0xffffffffffffffff;
    do {
label_0:
        if (r12 != 1) {
            al = fcn_00407590 (r12);
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
    fcn_00407a90 (rsi);
    return rax;
label_4:
    rax = 0xffffffffffffffff;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x407a90 */
#include <stdint.h>
 
void fcn_00407a90 (int64_t arg1) {
    rdi = arg1;
    *((rdi + 0x20)) = 0;
    edx = 0x60c498;
    esi = imp.gmtime_r;
invalid_funccall(); //    return void (*0x408480)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x407ab0 */
#include <stdint.h>
 
uint64_t fcn_00407ab0 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_004080e0 (rbp);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x407b10 */
#include <stdint.h>
 
uint64_t fcn_00407b10 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x40a5af;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x407b70 */
#include <stdint.h>
 
uint64_t fcn_00407b70 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x40a5a7;
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
        r15d = 0x40a5a7;
label_2:
        *(0x0060c4a0) = r15;
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
        r15d = 0x40a5a7;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x408a38;
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
    fcn_004080e0 (rbx);
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
        r15d = 0x40a5a7;
        rbx = rax;
        free (r15);
        fcn_004080e0 (r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x4080e0 */
#include <stdint.h>
 
uint64_t fcn_004080e0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_00408160 (rbx);
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
invalid_funccall(); //    void (*0x401870)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x408160 */
#include <stdint.h>
 
uint32_t fcn_00408160 (int64_t arg1) {
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
invalid_funccall(); //    void (*0x401a30)() ();
label_1:
    fcn_004081a0 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x4081a0 */
#include <stdint.h>
 
int64_t fcn_004081a0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x401af0)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x408200 */
#include <stdint.h>
 
uint64_t fcn_00408200 (int64_t arg_20h, int64_t arg_28h, int64_t arg_30h, int64_t arg_38h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x408320 */
#include <stdint.h>
 
int64_t fcn_00408320 (int64_t arg_10h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = fcn_00408200 (rdi, rsi, rdx, rcx, r8, *((rax + 0x14)));
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x4083c0 */
#include <stdint.h>
 
int64_t fcn_004083c0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x4088c0 */
#include <stdint.h>
 
int64_t fcn_004088c0 (int64_t arg1) {
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
    eax = *((rcx + rcx + 0x40a640));
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
    rax = fcn_00408200 (rdi, rsi, *((rsp + 0x38)), *((rsp + 0x2c)), r8d, r9);
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
        rax = fcn_004083c0 (*((rsp + 0x10)), rsp + 0x50, rsp + 0x60);
        r15 = *((rsp + 0x50));
        rax = fcn_00408320 (rbx, *((rsp + 0x30)), *((rsp + 0x28)), *((rsp + 0x1c)), *((rsp + 0x2c)), r15);
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
    fcn_004083c0 (*((rsp + 0x10)), rsp + 0x58, rsp + 0xa0);
    eax = *((rsp + 0xc0));
    dl = (eax == 0) ? 1 : 0;
    if (bpl != dl) {
        if (eax >= 0) {
            goto label_14;
        }
    }
    rbx = *((rsp + 0x28));
    rax = rsp + 0xa8;
    rax = fcn_00408320 (rbx, *((rsp + 0x30)), *((rsp + 0x28)), *((rsp + 0x1c)), *((rsp + 0x2c)), *((rsp + 0x68)));
    *((rsp + 0x50)) = rax;
    fcn_004083c0 (*((rsp + 0x10)), rsp + 0x50, rsp + 0x60);
    rax = *((rsp + 0x50));
    goto label_3;
label_14:
    rax = *((rsp + 0x50));
    goto label_5;
    rbx = rdi;
    tzset ();
    rdi = rbx;
    edx = 0x60c4a8;
    esi = imp.localtime_r;
    goto label_6;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x408950 */
#include <stdint.h>
 
int64_t fcn_00408950 (void) {
    rax = 0x60c248;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_uptime.elf @ 0x408968 */
#include <stdint.h>
 
void fcn_00408968 (int64_t arg3) {
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
