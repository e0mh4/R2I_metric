/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x401510 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int64_t var_8h;
    void * ptr;
    int64_t var_20h;
    char * * endptr;
    rdi = argc;
    rsi = argv;
    r13d = edi;
    rbx = rsi;
    rdi = *(rsi);
    if (rdi == 0) {
        goto label_15;
    }
label_3:
    fcn_00401cb0 (rdi);
    edi = 0x401c10;
    eax = fcn_00405810 ();
    if (eax != 0) {
        goto label_16;
    }
label_1:
    edi = 0x402;
    r14d = 0;
    r15d = 0;
    r12d = 0xa;
    *((rsp + 0x20)) = 0x402;
    rax = fcn_00403c70 (edi);
    *((rsp + 0x18)) = rax;
    fcn_00403c70 (0x402);
    *(rax) = 0;
    do {
label_2:
        r8d = 0;
        ecx = 0x405a60;
        edx = "hv0S:";
        rsi = rbx;
        edi = r13d;
        eax = fcn_00405110 ();
        if (eax == 0xffffffff) {
            goto label_17;
        }
        if (eax == 0x53) {
            goto label_18;
        }
        if (eax > 0x53) {
            if (eax == 0x68) {
                goto label_19;
            }
            if (eax != 0x76) {
                goto label_5;
            }
            eax = fcn_00401b70 ("frcode");
            eax = 0;
label_0:
            return rax;
        }
        r12d = 0;
    } while (eax == 0x30);
label_5:
    fcn_00401b10 (*(obj.stderr));
    eax = 1;
    goto label_0;
label_16:
    edx = 5;
    rax = dcgettext (0, "The atexit library function failed");
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbp);
    goto label_1;
label_18:
    rax = imp.__libc_start_main;
    r14 = imp.__libc_start_main;
    *(rsp) = rax;
    errno_location ();
    *(rax) = 0;
    r15 = rax;
    rax = strtol (r14, rsp + 0x28, 0xa);
    r14 = rax;
    if (rax == 0) {
        goto label_20;
    }
    rax = 0x7fffffffffffffff;
    rax += r14;
    if (rax <= 0xfffffffffffffffd) {
        goto label_21;
    }
    if (*(r15) != 0) {
        goto label_22;
    }
    r8 = *((rsp + 0x28));
    if (*(r8) != 0) {
        goto label_13;
    }
label_4:
    edx = 5;
    rax = dcgettext (0, "slocate security level %ld is unsupported.");
    rcx = r14;
    eax = 0;
    error (1, 0, rax);
    do {
label_14:
        r15d = 1;
        goto label_2;
label_19:
        eax = fcn_00401b10 (*(obj.stdout));
        eax = 0;
        goto label_0;
label_15:
        edi = "frcode";
        goto label_3;
label_20:
        r8 = *((rsp + 0x28));
        if (r8 == *(0x00608400)) {
            goto label_23;
        }
    } while (*(r8) == 0);
label_13:
    edx = 5;
    *((rsp + 8)) = r8;
    rax = dcgettext (0, "Security level %s has unexpected suffix %s.");
    r8 = *((rsp + 8));
    rcx = *(rsp);
    eax = 0;
    error (1, 0, rax);
label_12:
    r14 |= 0xffffffffffffffff;
    goto label_4;
label_17:
    if (*(0x0060821c) != r13d) {
        goto label_5;
    }
    rsi = stdout;
    if (r15d == 0) {
        goto label_24;
    }
    edi -= edi;
    edi += 0x31;
    fputc (rdi, rsi);
    fputc (0, *(obj.stdout));
label_11:
    *(rsp) = 0x402;
    r13d = 0;
label_6:
    rcx = stdin;
    edx = r12d;
    rsi = rsp + 0x20;
    rdi = rsp + 0x18;
    eax = getdelim ();
    if (eax <= 0) {
        goto label_25;
    }
    rdx = *((rsp + 0x18));
    rax = (int64_t) eax;
    *((rdx + rax - 1)) = 0;
    rsi = *((rsp + 0x18));
    edx = *(rbp);
    rax = rsi;
    if (*(rsi) != dl) {
        goto label_26;
    }
    if (dl == 0) {
        goto label_26;
    }
    rcx = rbp + 0x7ffffffe;
    rdi = rbp;
    while (*(rax) == dl) {
        if (dl == 0) {
            goto label_9;
        }
        if (rdi == rcx) {
            goto label_9;
        }
        rdi++;
        rax++;
        edx = *(rdi);
    }
label_9:
    rdi -= rbp;
    ebx = edi;
    r14d = edi;
    ebx -= r13d;
    eax = rbx + 0x8000;
    if (eax > 0xffff) {
        ebx = r13d;
        r14d = 0;
        ebx = -ebx;
    }
    if (r15d == 0) {
        eax = rbx + 0x7f;
        rsi = stdout;
        if (eax <= 0xfe) {
            goto label_27;
        }
        edi = 0x80;
        eax = IO_putc ();
        eax++;
        if (eax == 0) {
            goto label_28;
        }
label_10:
        r15 = stdout;
        if (ebx > 0x7fff) {
            goto label_29;
        }
        if (ebx < 0xffff8000) {
            goto label_30;
        }
        edi = ebx;
        rsi = r15;
        edi >>= 8;
        eax = IO_putc ();
        eax++;
        if (eax == 0) {
            goto label_31;
        }
        rsi = r15;
        edi = ebx;
        eax = IO_putc ();
        eax++;
        if (eax == 0) {
            goto label_31;
        }
label_7:
        rsi = *((rsp + 0x18));
    }
label_8:
    rdi = (int64_t) r14d;
    rdi += rsi;
    eax = fputs (rdi, *(obj.stdout));
    eax++;
    if (eax == 0) {
        goto label_32;
    }
    rsi = stdout;
    edi = 0;
    eax = IO_putc ();
    eax++;
    while (1) {
        rax = *((rsp + 0x18));
        rdx = *((rsp + 0x20));
        r15d = 0;
        r13d = r14d;
        rcx = *(rsp);
        *((rsp + 0x18)) = rbp;
        *(rsp) = rdx;
        *((rsp + 0x20)) = rcx;
        goto label_6;
label_32:
        fcn_00401ae0 ();
    }
label_27:
    edi = ebx;
    eax = IO_putc ();
    eax++;
    if (eax != 0) {
        goto label_7;
    }
label_31:
    fcn_00401ae0 ();
    rsi = *((rsp + 0x18));
    goto label_8;
label_25:
    free (*((rsp + 0x18)));
    eax = free (rbp);
    eax = 0;
    goto label_0;
label_26:
    rdi = rbp;
    goto label_9;
label_28:
    fcn_00401ae0 ();
    goto label_10;
label_24:
    rax = fwrite (0x405a40, 1, 0xa, rsi);
    if (rax == 0xa) {
        goto label_11;
    }
    edx = 5;
    rax = dcgettext (0, "Failed to write to standard output");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
    goto label_11;
label_22:
    edx = 5;
    rax = dcgettext (0, "Security level %s is outside the convertible range.");
    rcx = *(rsp);
    eax = 0;
    error (1, 0, rax);
    goto label_12;
label_23:
    edx = 5;
    rax = dcgettext (0, "You need to specify a security level as a decimal integer.");
    eax = 0;
    error (1, 0, rax);
    goto label_12;
label_21:
    r8 = *((rsp + 0x28));
    if (*(r8) != 0) {
        goto label_13;
    }
    if (r14 == 1) {
        goto label_14;
    }
    goto label_4;
label_30:
    assert_fail ("c >= SHRT_MIN", "frcode.c", 0x7c, "put_short");
label_29:
    return assert_fail ("c <= SHRT_MAX", "frcode.c", 0x7b, "put_short");
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x401a2b */
#include <stdint.h>
 
int32_t fcn_00401a2b (void) {
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
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x401a81 */
#include <stdint.h>
 
int64_t fcn_00401a81 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x00608248) != 0) {
        goto label_0;
    }
    r12d = section..dtors;
    ebx = 0x607e48;
    rbx -= section..dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x00608250) = rax;
        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_00401a2b ();
    *(0x00608248) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x401ad8 */
#include <stdint.h>
 
int64_t fcn_00401ad8 (void) {
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
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x401ae0 */
#include <stdint.h>
 
uint64_t fcn_00401ae0 (void) {
    edx = 5;
    rax = dcgettext (0, "write error");
    rbx = rax;
    rax = errno_location ();
    rdx = rbx;
    edi = 1;
    esi = *(rax);
    eax = 0;
    return error ();
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x401b10 */
#include <stdint.h>
 
uint64_t fcn_00401b10 (int64_t arg1) {
    rdi = arg1;
    edx = 5;
    rbx = rdi;
    rbp = imp.__libc_start_main;
    rax = dcgettext (0, "Usage: %s [-0 | --null] [--version] [--help]\n");
    rdx = rbp;
    eax = 0;
    fprintf (rbx, rax);
    edx = 5;
    rax = dcgettext (0, "\nReport bugs to <bug-findutils@gnu.org>.\n");
    rsi = rbx;
    rdi = rax;
    return fputs ();
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x401b70 */
#include <stdint.h>
 
void fcn_00401b70 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    fcn_00403ed0 (*(obj.stderr));
    edx = 5;
    rax = dcgettext (0, "Kevin Dalley");
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "James Youngman");
    edx = 5;
    rax = dcgettext (0, "Eric B. Decker");
    r9 = rbp;
    rcx = *(str.4.6.0);
    r8 = rax;
    eax = 0;
    fcn_00403b40 (*(obj.stdout), rbx, "GNU findutils");
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x401cb0 */
#include <stdint.h>
 
uint64_t fcn_00401cb0 (int64_t arg1) {
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
            edi = 0x405b68;
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
        *(0x00608268) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x401d50 */
#include <stdint.h>
 
uint64_t fcn_00401d50 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_00405230 ();
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
        eax = 0x405b6e;
        ebx = 0x405b79;
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
        eax = 0x405b72;
        ebx = 0x405b75;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x406c99;
    ebx = 0x405b6c;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x401e50 */
#include <stdint.h>
 
uint64_t fcn_00401e50 (uint32_t arg_d8h_2, int64_t arg_d8h, char * s, int64_t arg1, int64_t arg2, char * arg3, size_t * arg4, size_t * arg5, int64_t arg6) {
    size_t * var_ch;
    size_t * var_10h;
    char * var_18h;
    size_t n;
    size_t * var_28h;
    size_t * var_30h;
    size_t var_38h;
    size_t var_40h;
    void * s2;
    uint32_t var_50h;
    int64_t var_58h;
    uint32_t var_5dh;
    size_t var_5eh;
    size_t var_5fh;
    size_t var_60h;
    size_t var_68h;
    wint_t wc;
    mbstate_t * ps;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    do {
        /* [13] -r-x section size 17240 named .text */
        abort ();
label_14:
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
    /* switch table (11 cases) at 0x405be0 */
label_1:
    *((rsp + 0x5d)) = 1;
    ebx = 0;
    r11d = 2;
    *((rsp + 0xc)) = 0;
    *((rsp + 0x20)) = 1;
    *((rsp + 0x48)) = 0x406c99;
label_0:
    r13d = 0;
    r8d = 0;
    eax = r11d;
    r11 = r10;
    ecx = r13d;
    r10d = eax;
    r13 = r8;
    r8d = ecx;
    do {
label_29:
        bpl = (r11 != r13) ? 1 : 0;
        if (r11 == -1) {
            rax = *((rsp + 0x18));
            bpl = (*((rax + r13)) != 0) ? 1 : 0;
        }
        if (bpl == 0) {
            goto label_38;
        }
        rdi = *((rsp + 0x18));
        al = (r10d != 2) ? 1 : 0;
        al &= *((rsp + 0xc));
        r9 = rdi + r13;
        *((rsp + 0x10)) = al;
        if (al == 0) {
            goto label_39;
        }
        rax = *((rsp + 0x20));
        if (rax == 0) {
            goto label_40;
        }
        r12 = r13 + rax;
        if (r11 == -1) {
            if (rax <= 1) {
                goto label_41;
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
label_41:
        if (r12 > r11) {
            goto label_40;
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
            goto label_40;
        }
        if (*((rsp + 0x5d)) != 0) {
            goto label_42;
        }
        r12d = *(r9);
        if (r12b > 0x7e) {
            goto label_43;
        }
        eax = (int32_t) r12b;
        /* switch table (127 cases) at 0x405c38 */
        *((rsp + 0x10)) = 0;
label_3:
        ebp = 0;
        if (*((rsp + 0xc0)) == 0) {
            goto label_44;
        }
label_13:
        eax = r12d;
        rsi = *((rsp + 0xc0));
        ecx = r12d;
        al >>= 5;
        eax = (int32_t) al;
        eax = *((rsi + rax*4));
        eax >>= cl;
        if ((al & 1) == 0) {
            goto label_44;
        }
        al = (r10d == 2) ? 1 : 0;
label_8:
        if (*((rsp + 0x5d)) != 0) {
            goto label_45;
        }
label_9:
        r13++;
label_4:
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
label_7:
        if (rbx < r14) {
            *((r15 + rbx)) = r12b;
        }
        rbx++;
    } while (1);
    if (ebp != 0) {
        goto label_46;
    }
    *((rsp + 0xc)) = 0;
label_2:
    if (r14 != 0) {
        *(r15) = 0x27;
    }
    *((rsp + 0x5d)) = 0;
    ebx = 1;
    r11d = 2;
    *((rsp + 0x20)) = 1;
    *((rsp + 0x48)) = 0x406c99;
    goto label_0;
    if (ebp != 0) {
        goto label_1;
    }
    *((rsp + 0xc)) = 1;
    goto label_2;
    if (ebp != 0) {
        goto label_47;
    }
    if (r14 != 0) {
        *(r15) = 0x22;
    }
    *((rsp + 0x5d)) = 0;
    ebx = 1;
    *((rsp + 0xc)) = 1;
    *((rsp + 0x20)) = 1;
    *((rsp + 0x48)) = 0x405b6c;
    goto label_0;
    *((rsp + 0x5d)) = 1;
    ebx = 0;
    r11d = 5;
    *((rsp + 0xc)) = 1;
    *((rsp + 0x20)) = 1;
    *((rsp + 0x48)) = 0x405b6c;
    goto label_0;
    *((rsp + 0x5d)) = 0;
    ebx = 0;
    *((rsp + 0xc)) = 1;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x48)) = 0;
    goto label_0;
    if (r14 != 0) {
        esi = r11d;
        *((rsp + 0x10)) = r10;
        *((rsp + 0xc)) = r11d;
        rax = fcn_00401d50 (0x405b7d, esi);
        r11d = *((rsp + 0xc));
        *((rsp + 0xc8)) = rax;
        rax = fcn_00401d50 (0x406c99, r11d);
        r10 = *((rsp + 0x10));
        r11d = *((rsp + 0xc));
        *((rsp + 0xd0)) = rax;
    }
    ebx = 0;
    if (ebp != 0) {
        goto label_48;
    }
    rax = *((rsp + 0xc8));
    eax = *(rax);
    if (al == 0) {
        goto label_48;
    }
    rdx = *((rsp + 0xc8));
    do {
        if (r14 > rbx) {
            *((r15 + rbx)) = al;
        }
        rbx++;
        eax = *((rdx + rbx));
    } while (al != 0);
label_48:
    *((rsp + 0x28)) = r11d;
    *((rsp + 0x10)) = r10;
    rsp + 0x5d = (ebp != 0) ? 1 : 0;
    rax = strlen (*((rsp + 0xd0)));
    *((rsp + 0xc)) = 1;
    r10 = *((rsp + 0x10));
    *((rsp + 0x20)) = rax;
    rax = *((rsp + 0xd0));
    r11d = *((rsp + 0x28));
    *((rsp + 0x48)) = rax;
    goto label_0;
    *((rsp + 0x5d)) = 0;
    ebx = 0;
    *((rsp + 0xc)) = 0;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x48)) = 0;
    goto label_0;
    *((rsp + 0x5d)) = 1;
    ebx = 0;
    r11d = 2;
    *((rsp + 0xc)) = 1;
    *((rsp + 0x20)) = 1;
    *((rsp + 0x48)) = 0x406c99;
    goto label_0;
    *((rsp + 0x10)) = 0;
    al = (r11 != 1) ? 1 : 0;
    if (r11 == -1) {
        rax = *((rsp + 0x18));
        al = (*((rax + 1)) != 0) ? 1 : 0;
    }
    dl = (r10d == 2) ? 1 : 0;
    if (al == 0) {
label_18:
        if (r13 != 0) {
            goto label_5;
        }
label_19:
        eax = *((rsp + 0x5d));
        al &= dl;
        if (al != 0) {
            goto label_49;
        }
    }
label_5:
    ebp = *((rsp + 0xc));
    ebp ^= 1;
    ebp |= edx;
    ebp ^= 1;
    bpl |= *((rsp + 0x5d));
    if (bpl != 0) {
        goto label_3;
    }
label_12:
    r13++;
    if (*((rsp + 0x10)) == 0) {
        goto label_50;
    }
label_6:
    al = (r10d == 2) ? 1 : 0;
    goto label_4;
    *((rsp + 0x10)) = 0;
    if (r10d == 2) {
        goto label_51;
    }
    if (r10d == 5) {
        goto label_52;
    }
    r12d = 0x3f;
    dl = (r10d == 2) ? 1 : 0;
    goto label_5;
    *((rsp + 0x10)) = 0;
    edx = 0;
    r12d = 0x27;
    if (r10d != 2) {
        goto label_5;
    }
    if (*((rsp + 0x5d)) != 0) {
        goto label_53;
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
label_32:
    if (*((rsp + 0x10)) != 0) {
        goto label_6;
    }
    goto label_7;
    *((rsp + 0x10)) = 0;
    edx = 0;
    goto label_5;
    *((rsp + 0x10)) = 0;
label_17:
    ebp = *((rsp + 0xc));
    bpl &= *((rsp + 0x5d));
    r12d = 0x5c;
    ecx = 0x5c;
    edx = ebp;
    al = (*((rsp + 0x20)) != 0) ? 1 : 0;
    dl &= al;
    if (dl != 0) {
        goto label_54;
    }
label_11:
    if (*((rsp + 0xc)) == 0) {
        goto label_5;
    }
    eax = edx;
    r12d = ecx;
    goto label_8;
    r12d = 0x6e;
    eax = 0;
label_10:
    if (*((rsp + 0x5d)) == 0) {
        goto label_9;
    }
label_45:
    esi = r10d;
    r10 = r11;
    r11d = esi;
    goto label_23;
    r12d = 0x62;
    eax = 0;
    goto label_10;
    r12d = 0x61;
    eax = 0;
    goto label_10;
    *((rsp + 0x10)) = 0;
    r12d = 0xd;
    ecx = 0x72;
    dl = (r10d == 2) ? 1 : 0;
    goto label_11;
    *((rsp + 0x10)) = 0;
    if (r13 != 0) {
        goto label_3;
    }
    edx = 0;
    goto label_5;
    r12d = 0x66;
    eax = 0;
    goto label_10;
    r12d = 0x76;
    eax = 0;
    goto label_10;
    r12d = 0x74;
    eax = 0;
    goto label_10;
label_16:
    if (*((rsp + 0x5d)) != 0) {
        goto label_55;
    }
    *((rsp + 0x10)) = 0;
    eax = r8d;
    dl = (r10d == 2) ? 1 : 0;
    eax ^= 1;
    al &= dl;
    if (al == 0) {
        goto label_56;
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
        goto label_57;
    }
    r8d = eax;
label_27:
    *((r15 + rcx)) = 0x5c;
label_28:
    rbx = rcx + 1;
    rax = r13 + 1;
    if (r10d == 2) {
        goto label_58;
    }
    r12d = 0x30;
    if (rax < r11) {
        rsi = *((rsp + 0x18));
        eax = *((rsi + rax));
        eax -= 0x30;
        if (al <= 9) {
            goto label_59;
        }
    }
label_22:
    if (*((rsp + 0xc)) == 0) {
        goto label_12;
    }
    if (dl != 0) {
        goto label_12;
    }
    if (*((rsp + 0xc0)) != 0) {
        goto label_13;
    }
label_44:
    al = (r10d == 2) ? 1 : 0;
    if (*((rsp + 0x10)) != 0) {
        goto label_8;
    }
label_33:
    ebp ^= 1;
    r13++;
    ebp &= r8d;
    goto label_21;
label_20:
    *((rsp + 0x10)) = 0;
    do {
label_43:
        if (*((rsp + 0x50)) != 1) {
            goto label_60;
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
label_35:
        if (dl != 0) {
            goto label_61;
        }
        dl = (r10d == 2) ? 1 : 0;
        goto label_5;
label_39:
        r12d = *(r9);
    } while (r12b > 0x7e);
    eax = (int32_t) r12b;
    /* switch table (127 cases) at 0x406030 */
    r12d = 0xa;
    ecx = 0x6e;
label_15:
    eax = *((rsp + 0x5d));
    dl = (r10d == 2) ? 1 : 0;
    al &= dl;
    *((rsp + 0x10)) = al;
    if (al == 0) {
        goto label_11;
    }
    eax = r10d;
    r10 = r11;
    r11d = eax;
    eax = *((rsp + 0x10));
label_23:
    if (*((rsp + 0xc)) != 0) {
        eax = 4;
        if (al == 0) {
            r11d = eax;
            goto label_37;
        }
    }
label_37:
    r9d &= 0xfffffffd;
    rax = fcn_00401e50 (r15, r14, *((rsp + 0x38)), r10, r11d, *((rsp + 0x78)));
    goto label_14;
    rbx = rax;
label_24:
    rax = rbx;
    return rax;
    r12d = 9;
    ecx = 0x74;
    goto label_15;
    r12d = 7;
    ecx = 0x61;
    dl = (r10d == 2) ? 1 : 0;
    goto label_11;
    if (*((rsp + 0xc)) != 0) {
        goto label_16;
    }
    if ((*((rsp + 0x58)) & 1) != 0) {
        goto label_62;
    }
    if (*((rsp + 0x5d)) == 0) {
        goto label_63;
    }
    ebp = 0;
    if (*((rsp + 0xc0)) == 0) {
        goto label_64;
    }
    *((rsp + 0x10)) = 0;
    r12d = 0;
    goto label_13;
    r12d = 8;
    ecx = 0x62;
    dl = (r10d == 2) ? 1 : 0;
    goto label_11;
    if (r10d != 2) {
        goto label_17;
    }
    if (*((rsp + 0x5d)) != 0) {
        goto label_53;
    }
    r13++;
    r12d = 0x5c;
label_21:
    if (bpl == 0) {
        goto label_7;
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
    goto label_7;
    dl = (r10d == 2) ? 1 : 0;
    goto label_18;
    dl = (r10d == 2) ? 1 : 0;
    goto label_19;
    r12d = 0xd;
    ecx = 0x72;
    goto label_15;
    r12d = 0xc;
    ecx = 0x66;
    dl = (r10d == 2) ? 1 : 0;
    goto label_11;
    r12d = 0xb;
    ecx = 0x76;
    dl = (r10d == 2) ? 1 : 0;
    goto label_11;
label_40:
    r12d = *(r9);
    if (r12b > 0x7e) {
        goto label_20;
    }
    eax = (int32_t) r12b;
    /* switch table (127 cases) at 0x406428 */
label_50:
    ebp ^= 1;
    ebp &= r8d;
    goto label_21;
label_52:
    if ((*((rsp + 0x58)) & 4) == 0) {
        goto label_65;
    }
    rax = r13 + 2;
    edx = 0;
    r12d = 0x3f;
    if (rax >= r11) {
        goto label_5;
    }
    rsi = *((rsp + 0x18));
    if (*((rsi + r13 + 1)) != 0x3f) {
        goto label_5;
    }
    r12d = *((rsi + rax));
    if (r12b > 0x3e) {
        goto label_66;
    }
    rsi = 0x7000a38200000000;
    if (((rsi >> r12) & 1) >= 0) {
        goto label_66;
    }
    if (*((rsp + 0x5d)) != 0) {
        goto label_42;
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
    goto label_22;
label_51:
    if (*((rsp + 0x5d)) != 0) {
        goto label_53;
    }
    ebp = 0;
    r12d = 0x3f;
    goto label_12;
label_38:
    eax = r10d;
    ecx = *((rsp + 0x5d));
    r10 = r11;
    r11d = eax;
    al = (eax == 2) ? 1 : 0;
    eax &= ecx;
    dl = (rbx == 0) ? 1 : 0;
    al &= dl;
    if (al != 0) {
        goto label_23;
    }
    rax = *((rsp + 0x48));
    if (rax == 0) {
        goto label_67;
    }
    if (cl != 0) {
        goto label_67;
    }
    edx = *(rax);
    if (dl == 0) {
        goto label_67;
    }
    rax -= rbx;
    do {
        if (r14 > rbx) {
            *((r15 + rbx)) = dl;
        }
        rbx++;
        edx = *((rax + rbx));
    } while (dl != 0);
label_67:
    if (rbx >= r14) {
        goto label_24;
    }
    *((r15 + rbx)) = 0;
    goto label_24;
label_60:
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
label_25:
        eax = iswprint (*((rsp + 0x74)));
        rdi = rsp + 0x78;
        eax = 0;
        if (eax == 0) {
        }
        rbx += r15;
        eax = mbsinit (rdi);
        if (eax != 0) {
            goto label_68;
        }
        rax = *((rsp + 0x18));
        r14 = r13 + rbx;
        rdx = *((rsp + 0x28));
        rcx = rsp + 0x78;
        r12 = rax + r14;
        rdx -= r14;
        rax = fcn_00405190 (rsp + 0x74, r12);
        r15 = rax;
        if (rax == 0) {
            goto label_69;
        }
        if (rax == -1) {
            goto label_70;
        }
        if (rax == 0xfffffffffffffffe) {
            goto label_71;
        }
        al = (*((rsp + 0x30)) == 2) ? 1 : 0;
        al &= *((rsp + 0x5d));
    }
    if (r15 == 1) {
        goto label_25;
    }
    rsi = *((rsp + 0x18));
    rcx = rsi + r15;
    rdx = rsi + r14 + 1;
    r8 = rcx + r14;
    goto label_72;
label_26:
    rdx++;
    if (r8 == rdx) {
        goto label_25;
    }
label_72:
    ecx = *(rdx);
    ecx -= 0x5b;
    if (cl > 0x21) {
        goto label_26;
    }
    esi = 1;
    rsi <<= cl;
    rcx = rsi;
    rsi = 0x20000002b;
    if ((rcx & rsi) == 0) {
        goto label_26;
    }
    r15 = *((rsp + 0x38));
    r14 = *((rsp + 0x40));
    r10 = *((rsp + 0x28));
    r11d = *((rsp + 0x30));
    goto label_23;
label_56:
    rcx = rbx;
    if (rbx < r14) {
        goto label_27;
    }
    goto label_28;
    do {
label_49:
        edi = r10d;
        r10 = r11;
        r11d = edi;
        goto label_23;
label_65:
        edx = 0;
        r12d = 0x3f;
        goto label_5;
label_62:
        r13++;
        goto label_29;
label_61:
        edx = *((rsp + 0xc));
label_34:
        rcx += r13;
        eax = 0;
        r9d = *((rsp + 0x5d));
        esi = *((rsp + 0x10));
        rdi = *((rsp + 0x18));
        goto label_73;
label_30:
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
        goto label_7;
    }
    eax = edx;
label_31:
    if (rbx < r14) {
        *((r15 + rbx)) = r12b;
    }
    r12d = *((rdi + r13));
    rbx++;
label_73:
    if (dl != 0) {
        goto label_30;
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
        goto label_21;
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
        goto label_31;
label_57:
        rbx += 4;
        r13++;
        r8d = eax;
        r12d = 0x30;
        goto label_32;
label_54:
        r13++;
        goto label_21;
label_64:
        r12d = 0;
        goto label_33;
    }
    esi = 0;
    goto label_31;
label_63:
    r13++;
    r12d = 0;
    goto label_21;
label_46:
    *((rsp + 0x5d)) = 1;
    ebx = 0;
    *((rsp + 0xc)) = 0;
    *((rsp + 0x20)) = 1;
    *((rsp + 0x48)) = 0x406c99;
    goto label_0;
label_58:
    r13 = rax;
    r12d = 0x30;
    goto label_32;
label_59:
    if (r14 > rbx) {
        *((r15 + rbx)) = 0x30;
    }
    rax = rcx + 2;
    if (r14 > rax) {
        *((r15 + rcx + 2)) = 0x30;
    }
    rbx = rcx + 3;
    r12d = 0x30;
    goto label_22;
label_70:
    rcx = rbx;
    r8d = *((rsp + 0x5e));
    r12d = *((rsp + 0x5f));
    rbx = *((rsp + 0x60));
    r15 = *((rsp + 0x38));
    r14 = *((rsp + 0x40));
    r11 = *((rsp + 0x28));
    r10d = *((rsp + 0x30));
    edx = *((rsp + 0xc));
label_36:
    if (rcx > 1) {
        goto label_34;
    }
    goto label_35;
label_69:
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
    goto label_36;
label_71:
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
        goto label_74;
    }
    if (*(rdi) != 0) {
        goto label_75;
    }
    goto label_74;
    do {
        if (*((r9 + rax)) == 0) {
            goto label_76;
        }
label_75:
        rax++;
        rdx = r13 + rax;
    } while (r11 > rdx);
label_76:
    rcx = rax;
label_74:
    edx = *((rsp + 0xc));
    goto label_36;
label_68:
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
    goto label_36;
label_47:
    *((rsp + 0x5d)) = 1;
    ebx = 0;
    *((rsp + 0xc)) = 1;
    *((rsp + 0x20)) = 1;
    *((rsp + 0x48)) = 0x405b6c;
    goto label_0;
label_66:
    r12d = 0x3f;
    goto label_5;
label_42:
    eax = r10d;
    r10 = r11;
    r11d = eax;
    goto label_37;
label_53:
    eax = r10d;
    r10 = r11;
    r11d = eax;
    eax = *((rsp + 0x5d));
    goto label_23;
label_55:
    eax = r10d;
    r10 = r11;
    r11d = eax;
    al = (eax == 2) ? 1 : 0;
    goto label_23;
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x402e60 */
#include <stdint.h>
 
uint64_t fcn_00402e60 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x006081f8);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x00608210) > r15d) {
        goto label_0;
    }
    edx = r15 + 1;
    rsi = rdx;
    r12 = rdx;
    rsi <<= 4;
    if (rbx == 0x608200) {
        goto label_1;
    }
    *((rsp + 0x10)) = rdx;
    rax = fcn_00403cc0 (rbx, rsi);
    *(0x006081f8) = rax;
    rbx = rax;
    do {
        rdx -= rdi;
        rdi <<= 4;
        rdx <<= 4;
        rdi += rbx;
        memset (*(0x00608210), 0, *((rsp + 0x10)));
        *(0x00608210) = r12d;
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
        rax = fcn_00401e50 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x608280) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00403c70 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00401e50 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_1:
        *((rsp + 0x10)) = rdx;
        rax = fcn_00403cc0 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x00608200]");
        rdx = *((rsp + 0x10));
        rbx = rax;
        *(0x006081f8) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x403500 */
#include <stdint.h>
 
int64_t fcn_00403500 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x00608380]");
        __asm ("movdqa xmm1, xmmword [0x00608390]");
        __asm ("movdqa xmm2, xmmword [0x006083a0]");
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
        fcn_00402e60 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x4036d0 */
#include <stdint.h>
 
void fcn_004036d0 (int64_t arg_20h, int64_t arg_8h, int64_t arg_10h, int64_t arg_20h_2, int64_t arg_8h_2, int64_t arg_10h_2, int64_t arg_30h, int64_t arg_8h_3, int64_t arg_10h_3, int64_t arg_18h, int64_t arg1, char * arg2, char * arg3, char * arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x4068cb);
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
        /* switch table (10 cases) at 0x406bd8 */
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
    void (*0x4013b0)() ();
    r12 = *((rbx + 8));
    edx = 5;
    rbx = *(rbx);
    rax = dcgettext (0, "Written by %s and %s.\n");
    rcx = r12;
    rdx = rbx;
    rsi = rax;
    rdi = rbp;
    eax = 0;
    void (*0x4013b0)() ();
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
    void (*0x4013b0)() ();
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
    void (*0x4013b0)() ();
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
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x403b40 */
#include <stdint.h>
 
uint64_t fcn_00403b40 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_004036d0 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x403c70 */
#include <stdint.h>
 
uint64_t fcn_00403c70 (int64_t arg1) {
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
    return fcn_00403e90 ();
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x403cc0 */
#include <stdint.h>
 
uint64_t fcn_00403cc0 (int64_t arg1, int64_t arg2) {
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
    return fcn_00403e90 ();
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x403e30 */
#include <stdint.h>
 
uint64_t fcn_00403e30 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00403c70 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x403e90 */
#include <stdint.h>
 
uint64_t fcn_00403e90 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x006081b8), 0, 0x405b23);
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x403ed0 */
#include <stdint.h>
 
uint32_t fcn_00403ed0 (int64_t arg1) {
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
    void (*0x401400)() ();
label_1:
    fcn_00403f10 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x403f10 */
#include <stdint.h>
 
int64_t fcn_00403f10 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
        void (*0x401480)() ();
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
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x403f70 */
#include <stdint.h>
 
uint64_t fcn_00403f70 (int64_t arg1, int64_t arg2) {
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
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x404050 */
#include <stdint.h>
 
int64_t fcn_00404050 (uint32_t arg_a0h, int64_t arg_a8h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
    edi = 0x406c90;
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
            eax = fcn_00403f70 (rbx, r12);
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
        fcn_00403f70 (*((rsp + 0x10)), r12);
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
label_68:
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
    *((r12 + 0x20)) = 0x406cd4;
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
        fprintf (*(obj.stderr), " '--%s');
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
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x405090 */
#include <stdint.h>
 
int32_t fcn_00405090 (int64_t arg_10h) {
    eax = *(0x0060821c);
    *(0x006083c0) = eax;
    eax = *(0x00608218);
    *(0x006083c4) = eax;
    eax = *((rsp + 0x10));
    fcn_00404050 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0060821c) = edx;
    rdx = imp.__libc_start_main;
    *(0x00608400) = rdx;
    edx = imp.__libc_start_main;
    *(0x00608214) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x405110 */
#include <stdint.h>
 
void fcn_00405110 (void) {
    r9d = 0;
    fcn_00405090 (rdi);
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x405190 */
#include <stdint.h>
 
int64_t fcn_00405190 (int64_t arg2, int64_t arg3) {
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
    esi = 0x406cd4;
    edi = 0;
label_0:
    return mbrtowc ();
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x4051c0 */
#include <stdint.h>
 
uint64_t fcn_004051c0 (int64_t arg1) {
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
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x405230 */
#include <stdint.h>
 
uint64_t fcn_00405230 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x406cd4;
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
        r15d = 0x406cd4;
label_2:
        *(0x006083f8) = r15;
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
        r15d = 0x406cd4;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x405b09;
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
        r15d = 0x406cd4;
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
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x405810 */
#include <stdint.h>
 
int64_t fcn_00405810 (void) {
    rax = 0x6081a8;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ../dataset/findutils_strip_8.2/findutils_strip-4.6.0_gcc-8.2.0_x86_64_O2_frcode.elf @ 0x405828 */
#include <stdint.h>
 
void fcn_00405828 (int64_t arg3) {
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
