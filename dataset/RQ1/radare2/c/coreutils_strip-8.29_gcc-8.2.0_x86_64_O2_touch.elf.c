/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x401df0 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    tm* var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    uint32_t var_40h;
    uint32_t var_48h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    rdi = argc;
    rsi = argv;
    r14d = 0;
    r13d = 0;
    r12d = edi;
    fcn_00408430 (*(rsi));
    setlocale (6, 0x414b94);
    bindtextdomain (0x410fdb, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x410fdb, rsi);
    edi = 0x402f30;
    fcn_00410ee0 ();
    *(0x006183a2) = 0;
    *(0x006183a4) = 0;
    *(0x006183a3) = 0;
    do {
label_0:
        r8d = 0;
        ecx = 0x411920;
        edx = "acd:fhmr:t:";
        rsi = rbp;
        edi = r12d;
        eax = fcn_0040b5f0 ();
        ebx = eax;
        if (eax == 0xffffffff) {
            goto label_15;
        }
    } while (ebx == 0x66);
    if (ebx > 0x66) {
        if (ebx == 0x72) {
            goto label_16;
        }
        if (ebx > 0x72) {
            goto label_17;
        }
        if (ebx != 0x68) {
            goto label_18;
        }
        *(0x006183a1) = 1;
        goto label_0;
    }
    if (ebx != 0x61) {
        if (ebx > 0x61) {
            if (ebx == 0x63) {
                *(0x006183a3) = 1;
                goto label_0;
label_18:
                if (ebx != 0x6d) {
                    goto label_19;
                }
                *(0x006183a4) |= 2;
                goto label_0;
            }
            if (ebx != 0x64) {
                goto label_19;
            }
            r14 = imp.__libc_start_main;
            goto label_0;
        }
        if (ebx == 0xffffff7d) {
            eax = 0;
            rcx = *(str.8.29);
            r9d = "Arnold Robbins";
            r8d = "Paul Rubin";
            fcn_0040a4d0 (*(obj.stdout), "touch", "GNU coreutils");
            exit (0);
label_17:
            if (ebx != 0x74) {
                goto label_20;
            }
            eax = fcn_00408100 (0x618380, *(0x00618550), 6);
            r13d = eax;
            if (al == 0) {
                goto label_21;
            }
            *(0x00618388) = 0;
            __asm ("movdqa xmm0, xmmword [0x00618380]");
            *(0x00618390) = xmm0;
            goto label_0;
        }
        if (ebx != 0xffffff7e) {
            goto label_19;
        }
        fcn_004027e0 (0);
label_20:
        if (ebx != 0x80) {
            goto label_19;
        }
        fcn_00402e50 ("--time", *(0x00618550), 0x4118e0, 0x4118b0, 4, *(0x00618298));
        eax = *((rax*4 + 0x4118b0));
        *(0x006183a4) |= eax;
        goto label_0;
    }
    *(0x006183a4) |= 1;
    goto label_0;
label_16:
    rax = imp.__libc_start_main;
    *(0x006183a2) = 1;
    *(0x00618360) = rax;
    goto label_0;
label_15:
    if (*(0x006183a4) == 0) {
        *(0x006183a4) = 3;
    }
    eax = *(0x006183a2);
    if (r13b == 0) {
        goto label_22;
    }
    if (r14 != 0) {
        goto label_23;
    }
    if (al != 0) {
        goto label_23;
    }
label_9:
    eax = *(0x0061831c);
    if (eax == r12d) {
        goto label_24;
    }
    r13d = 1;
    if (eax < r12d) {
        goto label_25;
    }
    goto label_26;
    do {
label_2:
        if (r14d != 0) {
            goto label_27;
        }
        rax = errno_location ();
        if (*(0x006183a3) != 0) {
            if (*(rax) == 2) {
                goto label_3;
            }
        }
label_4:
        rax = fcn_00409e00 (4, r15);
        edx = 5;
        r14 = rax;
        rax = dcgettext (0, "setting times of %s");
        r15 = rax;
        rax = errno_location ();
        rcx = r14;
        eax = 0;
        error (0, *(rax), r15);
        r10d = 0;
label_1:
        eax = *(0x0061831c);
        r13d &= r10d;
        eax++;
        *(0x0061831c) = eax;
        if (eax >= r12d) {
            goto label_26;
        }
label_25:
        rax = (int64_t) eax;
        ecx = 2;
        edi = 0x411c1c;
        r11d = 1;
        r15 = *((rbp + rax*8));
        rsi = *((rbp + rax*8));
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        r9b = (eax > r12d) ? 1 : 0;
        r14d = (int32_t) r9b;
        if (r14d != 0) {
            if (*(0x006183a3) == 0) {
                if (*(0x006183a1) == 0) {
                    goto label_28;
                }
            }
label_8:
            r11d = ebx;
            r14d = 0;
        }
label_7:
        eax = imp.__libc_start_main;
        if (eax != 3) {
            if (eax == 2) {
                goto label_29;
            }
            eax--;
            if (eax != 0) {
                goto label_30;
            }
            *(0x00618398) = 0x3ffffffe;
        }
label_5:
        ecx = 0x618380;
        eax = 0;
        if (*(0x006183a0) != 0) {
            rcx = rax;
        }
        r10b = (r11d == 0xffffffff) ? 1 : 0;
        r10b &= *(0x006183a1);
        if (r10b != 0) {
            goto label_31;
        }
        if (r11d == 1) {
            goto label_32;
        }
        edi = r11d;
        *((rsp + 0x10)) = r10b;
        *((rsp + 0xc)) = r11d;
        eax = fcn_00403040 (edi, 0xffffff9c, r15, rcx, 0);
        r11d = *((rsp + 0xc));
        r10d = *((rsp + 0x10));
        edx = eax;
        if (r11d == 0) {
            *((rsp + 0x10)) = edx;
            *((rsp + 0xc)) = r10b;
            eax = close (0);
            edx = *((rsp + 0x10));
            if (eax != 0) {
                goto label_33;
            }
        }
label_6:
    } while (edx != 0);
    do {
label_3:
        r10d = 1;
        goto label_1;
label_32:
        eax = fcn_00403040 (1, 0xffffff9c, 0, rcx, 0);
    } while (eax == 0);
    rax = errno_location ();
    if (*(rax) != 9) {
        goto label_2;
    }
    if (*(0x006183a3) != 0) {
        goto label_3;
    }
    if (r14d == 0) {
        goto label_4;
    }
label_27:
    rax = fcn_00409e00 (4, r15);
    edx = 5;
    r15 = rax;
    rax = dcgettext (0, "cannot touch %s");
    rcx = r15;
    eax = 0;
    error (0, r14d, rax);
    r10d = 0;
    goto label_1;
label_29:
    *(0x00618388) = 0x3ffffffe;
    goto label_5;
label_31:
    edi |= 0xffffffff;
    eax = fcn_00403040 (rdi, 0xffffff9c, r15, rcx, 0x100);
    edx = eax;
    goto label_6;
label_26:
    r13d ^= 1;
    eax = (int32_t) r13b;
    return rax;
label_28:
    eax = fcn_00402fd0 (0, r15, 0x941, 0x1b6);
    r14d = 0;
    r11d = eax;
    if (eax != 0xffffffff) {
        goto label_7;
    }
    *((rsp + 0xc)) = eax;
    rax = errno_location ();
    r14d = *(rax);
    eax = r14 - 0x15;
    if (eax <= 1) {
        goto label_8;
    }
    r11d = *((rsp + 0xc));
    if (r14d != 1) {
        goto label_7;
    }
    goto label_8;
label_33:
    rax = fcn_00409e00 (4, r15);
    edx = 5;
    r14 = rax;
    rax = dcgettext (0, "failed to close %s");
    r15 = rax;
    rax = errno_location ();
    rcx = r14;
    eax = 0;
    al = error (0, *(rax), r15);
    r10d = *((rsp + 0xc));
    goto label_1;
label_22:
    if (al != 0) {
        goto label_34;
    }
    if (r14 == 0) {
        goto label_35;
    }
    fcn_004030d0 (rsp + 0x20);
    rdx = rsp + 0x20;
    rsi = r14;
    fcn_004027a0 (0x618380);
    __asm ("movdqa xmm1, xmmword [0x00618380]");
    *(0x00618390) = xmm1;
    if (*(0x006183a4) != 3) {
        goto label_9;
    }
    rax = *((rsp + 0x20));
    if (*(0x00618380) != rax) {
        goto label_9;
    }
    rdx = *((rsp + 0x28));
    if (*(0x00618388) != rdx) {
        goto label_9;
    }
    rax ^= 1;
    *((rsp + 0x38)) = rdx;
    rsi = r14;
    rdx = rsp + 0x30;
    *((rsp + 0x30)) = rax;
    fcn_004027a0 (rsp + 0x40);
    rax = *((rsp + 0x30));
    if (*((rsp + 0x40)) != rax) {
        goto label_9;
    }
    rax = *((rsp + 0x38));
    if (*((rsp + 0x48)) != rax) {
        goto label_9;
    }
label_35:
    eax = r12d;
    eax -= *(0x0061831c);
    eax--;
    if (eax > 0) {
        goto label_36;
    }
label_12:
    if (*(0x006183a4) == 3) {
        goto label_37;
    }
    *(0x00618388) = 0x3fffffff;
    *(0x00618398) = 0x3fffffff;
    goto label_9;
label_34:
    rdx = rsp + 0x40;
    edi = 1;
    rsi = imp.__libc_start_main;
    if (*(0x006183a1) != 0) {
        goto label_38;
    }
    eax = xstat ();
    al = (eax != 0) ? 1 : 0;
label_10:
    if (al != 0) {
        goto label_39;
    }
    rax = *((rsp + 0x88));
    *(0x00618380) = rax;
    rax = *((rsp + 0x90));
    *(0x00618388) = rax;
    rax = *((rsp + 0x98));
    *(0x00618390) = rax;
    rax = *((rsp + 0xa0));
    *(0x00618398) = rax;
    if (r14 == 0) {
        goto label_9;
    }
    eax = imp.__libc_start_main;
    if ((al & 1) != 0) {
        goto label_40;
    }
label_11:
    if ((al & 2) == 0) {
        goto label_9;
    }
    edx = 0x618390;
    rsi = r14;
    fcn_004027a0 (rdx);
    goto label_9;
label_38:
    eax = lxstat ();
    al = (eax != 0) ? 1 : 0;
    goto label_10;
label_37:
    *(0x006183a0) = 1;
    goto label_9;
label_40:
    edx = 0x618380;
    rsi = r14;
    fcn_004027a0 (rdx);
    eax = imp.__libc_start_main;
    goto label_11;
label_36:
    eax = fcn_004083b0 ();
    if (eax > 0x30daf) {
        goto label_12;
    }
    rax = *(0x0061831c);
    al = fcn_00408100 (0x618380, *((rbp + rax*8)), 9);
    if (al == 0) {
        goto label_12;
    }
    *(0x00618388) = 0;
    __asm ("movdqa xmm2, xmmword [0x00618380]");
    *(0x00618390) = xmm2;
    rax = getenv ("POSIXLY_CORRECT");
    while (rax == 0) {
label_13:
        *(0x0061831c)++;
        goto label_9;
label_24:
        edx = 5;
label_14:
        rax = dcgettext (0, "missing file operand");
        eax = 0;
        error (0, 0, rax);
label_19:
        fcn_004027e0 (1);
label_39:
        rax = fcn_00409e00 (4, *(0x00618360));
        edx = 5;
        rax = dcgettext (0, "failed to get attributes of %s");
        rbx = rax;
        rax = errno_location ();
        rcx = rbp;
        eax = 0;
        error (1, *(rax), rbx);
        rax = localtime (0x618380);
    }
    r10d = *(rax);
    r9d = *((rax + 4));
    r15d = *((rax + 8));
    r14d = *((rax + 0xc));
    edx = *((rax + 0x10));
    r13 = *((rax + 0x14));
    *((rsp + 0x1c)) = r10d;
    rax = *(0x0061831c);
    *((rsp + 0x18)) = r9d;
    edx++;
    r13 += 0x76c;
    rcx = *((rbp + rax*8));
    *((rsp + 0xc)) = edx;
    edx = 5;
    *((rsp + 0x10)) = rcx;
    rax = dcgettext (0, "warning: 'touch %s' is obsolete; use 'touch -t %04ld%02d%02d%02d%02d.%02d');
    r10d = *((rsp + 0x1c));
    r8 = r13;
    eax = 0;
    r9d = *((rsp + 0x20));
    r9d = *((rsp + 0x2c));
    rcx = *((rsp + 0x30));
    error (0, 0, rax);
    goto label_13;
label_30:
    assert_fail ("change_times == CH_ATIME", "src/touch.c", 0x99, "touch");
label_23:
    edx = 5;
    esi = "cannot specify times from more than one source";
    goto label_14;
label_21:
    rax = fcn_0040a050 (*(0x00618550));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid date format %s");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x4026eb */
#include <stdint.h>
 
int32_t fcn_004026eb (void) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x402741 */
#include <stdint.h>
 
int64_t fcn_00402741 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x00618348) != 0) {
        goto label_0;
    }
    r12d = section..dtors;
    ebx = 0x617e48;
    rbx -= section..dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x00618350) = rax;
        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_004026eb ();
    *(0x00618348) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x402798 */
#include <stdint.h>
 
int64_t fcn_00402798 (void) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x4027a0 */
#include <stdint.h>
 
uint64_t fcn_004027a0 (int64_t arg2) {
    rsi = arg2;
    rbx = rsi;
    al = fcn_00408000 (rdi, rsi, rdx);
    if (al != 0) {
        return al;
    }
    rax = fcn_0040a050 (rbx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid date format %s");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x4027e0 */
#include <stdint.h>
 
uint64_t fcn_004027e0 (int64_t arg1) {
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
    rax = dcgettext (0, "Update the access and modification times of each FILE to the current time.\n\nA FILE argument that does not exist is created empty, unless -c or -h\nis supplied.\n\nA FILE argument string of - is handled specially and causes touch to\nchange the times of the file associated with standard output.\n");
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
    rax = dcgettext (0, "  -a                     change only the access time\n  -c, --no-create        do not create any files\n  -d, --date=STRING      parse STRING and use it instead of current time\n  -f                     (ignored)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -h, --no-dereference   affect each symbolic link instead of any referenced\n                         file (useful only on systems that can change the\n                         timestamps of a symlink)\n  -m                     change only the modification time\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -r, --reference=FILE   use this file's times instead of current time\n  -t STAMP               use [[CC]YY]MMDDhhmm[.ss] instead of current time\n      --time=WORD        change the specified time:\n                           WORD is access, atime, or use: equivalent to -a\n                           WORD is modify or mtime: equivalent to -m\n");
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
    rax = dcgettext (0, "\nNote that the -d and -t options accept different time-date formats.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    *(rsp) = 0x410f61;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x410fdb;
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
        esi = "touch";
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
        eax = strncmp (rax, 0x410fe5, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x410f7d;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "touch";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x414b94;
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
            eax = strncmp (rax, 0x410fe5, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "touch";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x410f7d;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "touch";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x402b90 */
#include <stdint.h>
 
uint64_t fcn_00402b90 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x402cb0 */
#include <stdint.h>
 
uint64_t fcn_00402cb0 (int64_t arg1, int64_t arg2, uint32_t arg3) {
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
        rax = fcn_0040a030 (1, rbp);
        rax = fcn_00409d20 (0, 8, r12);
        r8 = rbp;
        rdx = rbx;
        esi = 0;
        rcx = rax;
        edi = 0;
        eax = 0;
        void (*0x401ce0)() ();
label_0:
        rax = dcgettext (0, "invalid argument %s for %s");
        rbx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x402d30 */
#include <stdint.h>
 
uint64_t fcn_00402d30 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_0040a050 (r12);
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
    rax = fcn_0040a050 (r12);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x402e50 */
#include <stdint.h>
 
uint64_t fcn_00402e50 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
    rax = fcn_00402b90 (r12, rbx, rbp, r8);
    while (1) {
        return rax;
        fcn_00402cb0 (r14, r12, rax);
        fcn_00402d30 (rbx, rbp, r15);
        void (*r13)() ();
        rax = 0xffffffffffffffff;
    }
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x402fd0 */
#include <stdint.h>
 
uint64_t fcn_00402fd0 (int64_t arg1, int64_t arg4, int64_t oflag, char * path) {
    rdi = arg1;
    rcx = arg4;
    rdx = oflag;
    rsi = path;
    eax = 0;
    eax = open (rsi, edx, ecx);
    ebx = eax;
    if (ebp != eax) {
        if (eax >= 0) {
            goto label_0;
        }
    }
    eax = ebx;
    return eax;
label_0:
    esi = ebp;
    edi = eax;
    eax = dup2 ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x403040 */
#include <stdint.h>
 
uint64_t fcn_00403040 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r13d = r8d;
    r12d = esi;
    rbx = rdx;
    if (edi >= 0) {
        goto label_2;
    }
    if (rdx == 0) {
        goto label_3;
    }
label_1:
    ecx = r13d;
    rdx = rbp;
    rsi = rbx;
    edi = r12d;
    eax = utimensat ();
    do {
label_0:
        if (eax == 1) {
            goto label_3;
        }
        return eax;
label_2:
        rsi = rcx;
        eax = futimens ();
    } while (rbx == 0);
    if (eax != 0xffffffff) {
        goto label_0;
    }
    rax = errno_location ();
    if (*(rax) == 0x26) {
        goto label_1;
    }
    eax = 0xffffffff;
    return rax;
label_3:
    errno_location ();
    *(rax) = 9;
    eax = 0xffffffff;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x4030d0 */
#include <stdint.h>
 
uint64_t fcn_004030d0 (int64_t arg1) {
    signed int64_t var_8h;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x403110 */
#include <stdint.h>
 
int64_t fcn_00403110 (int64_t arg_8h, int64_t arg_10h, int64_t arg_18h, uint32_t arg1, int64_t arg3, int64_t arg7) {
    rdi = arg1;
    rdx = arg3;
    xmm0 = arg7;
    rax = *((rdi + 0xa8));
    r8 = *((rsp + 0x10));
    r9 = *((rsp + 0x18));
    if (rax != 0) {
        if (*((rdi + 0x30)) != 0) {
            goto label_0;
        }
        if (*((rdi + 0xa1)) != 0) {
            goto label_0;
        }
        if (*((rdi + 0xc8)) == 0) {
            if (r9 <= 2) {
                goto label_1;
            }
        }
        __asm ("movdqu xmm0, xmmword [rsp + 8]");
        rax = *((rsp + 0x18));
        *((rdi + 0xd8)) = 1;
        __asm ("movups xmmword [rdi + 0x20], xmm0");
        *((rdi + 0x30)) = rax;
        return rax;
    }
label_0:
    if (r9 > 4) {
        rax++;
        r10 = r8;
        r9 -= 4;
        rsi = 0xa3d70a3d70a3d70b;
        *((rdi + 0xa8)) = rax;
        rax = r8;
        r10 >>= 0x3f;
        rdx:rax = rax * rsi;
        *((rdi + 0x30)) = r9;
        rcx = rdx + r8;
        rdx = r8;
        rcx >>= 6;
        rcx -= r10;
        rax = rcx * 5;
        rax *= 5;
        rax <<= 2;
        rdx -= rax;
        rax = rcx;
        *((rdi + 0x40)) = rdx;
        rdx:rax = rax * rsi;
        rax = rcx;
        rax >>= 0x3f;
        rsi = rdx + rcx;
        rdx = 0x346dc5d63886594b;
        rsi >>= 6;
        rsi -= rax;
        rax = rsi * 5;
        rax *= 5;
        rax <<= 2;
        rcx -= rax;
        rax = r8;
        rdx:rax = rax * rdx;
        *((rdi + 0x38)) = rcx;
        rdx >>= 0xb;
        rdx -= r10;
        *((rdi + 0x28)) = rdx;
        return rax;
    }
    *((rdi + 0xc8))++;
    if (r9 <= 2) {
        goto label_2;
    }
    rdx = 0xa3d70a3d70a3d70b;
    rax = r8;
    rdx:rax = rax * rdx;
    rax = r8;
    rax >>= 0x3f;
    rdx += r8;
    rdx >>= 6;
    rdx -= rax;
    rax = rdx * 5;
    *((rdi + 0x48)) = rdx;
    rax *= 5;
    rax <<= 2;
    r8 -= rax;
    *((rdi + 0x50)) = r8;
    do {
        *((rdi + 0x58)) = 0;
        *((rdi + 0x60)) = 0;
        *((rdi + 0x1c)) = 2;
        return rax;
label_1:
        *((rdi + 0xc8)) = 1;
label_2:
        *((rdi + 0x48)) = r8;
        *((rdi + 0x50)) = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x403290 */
#include <stdint.h>
 
int64_t fcn_00403290 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    eax = edi;
    edx = 0x91a2b3c5;
    ecx = edi;
    edx:eax = eax * edx;
    eax = edi;
    ecx >>= 0x1f;
    eax >>= 0x1f;
    r12 = rsi;
    ecx &= 2;
    r8d = rcx + 0x2b;
    ecx = "%c%02d";
    esi = 1;
    ebx = rdx + rdi;
    rdx = 0xffffffffffffffff;
    rdi = r12;
    ebx >>= 0xb;
    ebx -= eax;
    eax = ebx;
    eax >>= 0x1f;
    r9d = eax;
    r9d ^= ebx;
    ebx *= 0xe10;
    r9d -= eax;
    eax = 0;
    sprintf_chk ();
    ebp -= ebx;
    if (ebp == 0) {
        goto label_0;
    }
    rax = (int64_t) eax;
    ecx = 0x88888889;
    r8d = 0xcccccccd;
    rsi = r12 + rax;
    eax = ebp;
    eax >>= 0x1f;
    *(rsi) = 0x3a;
    ebp ^= eax;
    ebp -= eax;
    eax = ebp;
    edx:eax = eax * ecx;
    eax = ebp;
    ecx = edx;
    edi = edx;
    edx = 0x1b4e81b5;
    edx:eax = eax * edx;
    ecx >>= 5;
    edi >>= 5;
    eax = ecx;
    edi *= 0x3c;
    edx >>= 6;
    edx += 0x30;
    *((rsi + 1)) = dl;
    edx:eax = eax * r8d;
    edx >>= 3;
    eax = rdx * 5;
    eax += eax;
    ecx -= eax;
    rax = rsi + 3;
    ecx += 0x30;
    ebp -= edi;
    *((rsi + 2)) = cl;
    edi = ebp;
    if (ebp != 0) {
        goto label_1;
    }
    *(rax) = 0;
    do {
label_0:
        rax = r12;
        return rax;
label_1:
        eax = ebp;
        *((rsi + 3)) = 0x3a;
        edx:eax = eax * r8d;
        edx >>= 3;
        eax = rdx + 0x30;
        edx = rdx * 5;
        edx += edx;
        *((rsi + 4)) = al;
        rax = rsi + 6;
        edi -= edx;
        edi += 0x30;
        *((rsi + 5)) = dil;
        *(rax) = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x403390 */
#include <stdint.h>
 
int64_t fcn_00403390 (uint32_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    eax = edi;
    edx = 0x51eb851f;
    r9d = edi;
    edx:eax = eax * edx;
    eax = edi;
    ecx = 0;
    rbx = rsi;
    eax >>= 0x1f;
    esi = 1;
    edx >>= 5;
    r8d = edx;
    r8d -= eax;
    eax = r8d * 0x64;
    r8d += 0x13;
    r9d -= eax;
    eax = r8d;
    edx = r9d;
    eax >>= 0x1f;
    edx >>= 0x1f;
    r8d ^= eax;
    r9d ^= edx;
    rdi = rbx;
    cl = (edi >= 0xfffff894) ? 1 : 0;
    r9d -= edx;
    r8d -= eax;
    rdx = 0xffffffffffffffff;
    rcx += str.__02d_02d;
    eax = 0;
    sprintf_chk ();
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x403400 */
#include <stdint.h>
 
uint64_t fcn_00403400 (int64_t arg_e0h, int64_t arg1, int64_t arg10, int64_t arg11, size_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9) {
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    size_t var_28h;
    uint32_t var_30h;
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
    rdi = arg1;
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
    rbx = rdi;
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
    fwrite ("date: ", 1, 6, *(obj.stderr));
    rax = rsp + 0xe0;
    *((rsp + 0x10)) = rax;
    rax = rsp + 0x20;
    *((rsp + 8)) = 8;
    *((rsp + 0xc)) = 0x30;
    *((rsp + 0x18)) = rax;
    fcn_0040c370 (*(obj.stderr), rbx, rsp + 8);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x4034c0 */
#include <stdint.h>
 
uint64_t fcn_004034c0 (int64_t arg2, uint32_t arg4) {
    uint32_t var_8h;
    int64_t var_10h;
    rsi = arg2;
    rcx = arg4;
    rbx = rsi;
    *((rsp + 8)) = rcx;
    while (rax != 0) {
        ecx = *(rbx);
        eax = *((rbx + 4));
        ecx ^= *(rdx);
        eax ^= *((rdx + 4));
        ecx |= eax;
        eax = *((rbx + 8));
        eax ^= *((rdx + 8));
        ecx |= eax;
        eax = *((rbx + 0xc));
        eax ^= *((rdx + 0xc));
        ecx |= eax;
        eax = *((rbx + 0x10));
        eax ^= *((rdx + 0x10));
        ecx |= eax;
        eax = *((rbx + 0x14));
        eax ^= *((rdx + 0x14));
        ecx |= eax;
        al = (ecx == 0) ? 1 : 0;
label_0:
        return eax;
        rax = fcn_0040c180 (rdi, rsp + 8, rsp + 0x10);
        rdx = rax;
    }
    eax = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x403530 */
#include <stdint.h>
 
int32_t fcn_00403530 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    edi ^= 1;
    r8 = rdx;
    rcx = rsi;
    edi = (int32_t) dil;
    esi = 1;
    eax = 0;
    rdx = rdi + str___ld__s;
    rdi = stderr;
    fprintf_chk ();
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x403570 */
#include <stdint.h>
 
int64_t fcn_00403570 (int64_t arg1, int64_t arg3, signed int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = rdx;
    if (rcx > 2) {
        goto label_3;
    }
    if (r8 < 0) {
        goto label_4;
    }
label_1:
    ecx = 0;
    r9 *= 0x3c;
    __asm ("seto cl");
    if (sil != 0) {
        goto label_5;
    }
    edx = 0;
    r9 += r8;
    __asm ("seto dl");
    do {
        eax = 0;
        ecx |= edx;
        if (ecx == 0) {
label_0:
            rdx = r9 + 0x5a0;
            eax = 0;
            if (rdx > 0xb40) {
                goto label_6;
            }
            r9d *= 0x3c;
            eax = 1;
            *(rdi) = r9d;
        }
label_6:
        return eax;
label_5:
        edx = 0;
        r9 -= r8;
        __asm ("seto dl");
    } while (1);
label_4:
    ecx = 0;
label_2:
    rax = r9;
    rax <<= 4;
    rax -= r9;
    r9 = rcx + rax*4;
    goto label_0;
label_3:
    if (r8 >= 0) {
        goto label_1;
    }
    rdx = 0xa3d70a3d70a3d70b;
    rax = r9;
    rcx = r9;
    rdx:rax = rax * rdx;
    rax = r9;
    rax >>= 0x3f;
    rdx += r9;
    rdx >>= 6;
    rdx -= rax;
    rax = rdx * 5;
    r9 = rdx;
    rax *= 5;
    rax <<= 2;
    rcx -= rax;
    goto label_2;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x403630 */
#include <stdint.h>
 
uint64_t fcn_00403630 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    esi = 0x411ab3;
    ebx = 0x4130c0;
    while (eax != 0) {
        rbx += 0x10;
        rsi = *(rbx);
        if (rsi == 0) {
            goto label_3;
        }
        eax = strcmp (rbp, rsi);
    }
label_0:
    rax = rbx;
    return rax;
label_3:
    rsi = *((r12 + 0xe8));
    rbx = r12 + 0xe8;
    if (rsi != 0) {
        goto label_4;
    }
label_1:
    ebx = 0x412dc0;
    esi = 0x411ab7;
    while (eax != 0) {
        rbx += 0x10;
        rsi = *(rbx);
        if (rsi == 0) {
            goto label_5;
        }
        eax = strcmp (rbp, rsi);
    }
    goto label_0;
label_2:
    rbx += 0x10;
    rsi = *(rbx);
    if (rsi == 0) {
        goto label_1;
    }
label_4:
    eax = strcmp (rbp, rsi);
    if (eax != 0) {
        goto label_2;
    }
    rax = rbx;
    return rax;
label_5:
    ebx = 0;
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x4036f0 */
#include <stdint.h>
 
uint64_t fcn_004036f0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    edx = 5;
    rbx = rsi;
    rax = dcgettext (0, "parsed %s part: ");
    eax = 0;
    fcn_00403400 (rax, rbp, rdx, rcx, r8, r9);
    rsi = *((rbx + 0x68));
    if (rsi != 0) {
        goto label_3;
    }
    rsi = *((rbx + 0x70));
    if (rsi == 0) {
        goto label_4;
    }
label_1:
    al = fcn_00403530 (0, rsi, "month(s)");
    rsi = *((rbx + 0x78));
    edi = (int32_t) al;
label_2:
    while (rsi != 0) {
        al = fcn_00403530 (rdi, rsi, "day(s)");
        edi = (int32_t) al;
label_0:
        rsi = *((rbx + 0x80));
        if (rsi != 0) {
            al = fcn_00403530 (rdi, rsi, "hour(s)");
            edi = (int32_t) al;
        }
        rsi = *((rbx + 0x88));
        if (rsi != 0) {
            al = fcn_00403530 (rdi, rsi, "minutes");
            edi = (int32_t) al;
        }
        rsi = *((rbx + 0x90));
        if (rsi != 0) {
            al = fcn_00403530 (rdi, rsi, 0x411bdf);
            edi = (int32_t) al;
        }
        rsi = *((rbx + 0x98));
        if (rsi != 0) {
            fcn_00403530 (rdi, rsi, "nanoseconds");
        }
        rsi = stderr;
        edi = 0xa;
        void (*0x401b80)() ();
label_4:
        rsi = *((rbx + 0x78));
        edi = 0;
    }
    if (*((rbx + 0x80)) != 0) {
        goto label_0;
    }
    if (*((rbx + 0x88)) != 0) {
        goto label_0;
    }
    if (*((rbx + 0x90)) != 0) {
        goto label_0;
    }
    eax = *((rbx + 0x98));
    if (eax != 0) {
        goto label_0;
    }
    rbx = stderr;
    edx = 5;
    rax = dcgettext (0, "today/this/now\n");
    rsi = rbx;
    rdi = rax;
    void (*0x401b30)() ();
label_3:
    al = fcn_00403530 (0, rsi, "year(s)");
    rsi = *((rbx + 0x70));
    edi = (int32_t) al;
    if (rsi != 0) {
        goto label_1;
    }
    rsi = *((rbx + 0x78));
    goto label_2;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x403880 */
#include <stdint.h>
 
uint64_t fcn_00403880 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = rdi;
    r12 = rsi;
    r9d = 0;
    r8d = 0;
    rbx = rdx;
    edx = "(Y-M-D) %Y-%m-%d %H:%M:%S";
    rax = fcn_0040e2d0 (rbx, 0x64);
    if (r12 != 0) {
        if (eax > 0x63) {
            goto label_0;
        }
        if (*((r12 + 0xd0)) != 0) {
            goto label_1;
        }
    }
label_0:
    rax = rbx;
    return rax;
label_1:
    rax = fcn_00403290 (*((r12 + 0x18)), rsp);
    esi = 0x64;
    rdi = (int64_t) ebp;
    r8d = " TZ=%s";
    esi -= ebp;
    r9 = rax;
    rdi += rbx;
    rcx = 0xffffffffffffffff;
    rsi = (int64_t) esi;
    edx = 1;
    eax = 0;
    snprintf_chk ();
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x403920 */
#include <stdint.h>
 
uint64_t fcn_00403920 (uint32_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    if (*((rdi + 0xe0)) == 0) {
        goto label_0;
    }
    r9 = *((rdi + 8));
    rax = r9 + 1;
    if (rax > 0xd) {
        goto label_1;
    }
    rdx = rax * 5;
    eax = 0;
    eax = snprintf (rbp, 0x64, 0x411a7c, rax + rdx*2 + str.last);
    rdx = *((rbx + 0x10));
    if (edx > 6) {
        goto label_2;
    }
    if (eax > 0x63) {
        goto label_2;
    }
    do {
        ecx = 0;
        esi = 0x64;
        cl = (eax == 0) ? 1 : 0;
        esi -= eax;
        rax = (int64_t) eax;
        rsi = (int64_t) esi;
        rdi = rbp + rax;
        goto label_3;
label_1:
        edx = 1;
        r8d = 0x411b9e;
        rdi = rbp;
        eax = 0;
        rcx = 0xffffffffffffffff;
        esi = 0x64;
        snprintf_chk ();
        rdx = *((rbx + 0x10));
    } while (edx <= 6);
    do {
label_2:
        rax = rbp;
        return rax;
label_0:
        *(rsi) = 0;
        rdx = *((rdi + 0x10));
    } while (edx > 6);
    rdi = rsi;
    ecx = 1;
    esi = 0x64;
label_3:
    r9 = rdx*4 + 0x412b60;
    r8 = rcx + 0x411a7b;
    edx = 1;
    eax = 0;
    rcx = 0xffffffffffffffff;
    snprintf_chk ();
    rax = rbp;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x403a10 */
#include <stdint.h>
 
uint64_t fcn_00403a10 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    edx = 5;
    rbx = rsi;
    rax = dcgettext (0, "parsed %s part: ");
    eax = 0;
    fcn_00403400 (rax, rbp, rdx, rcx, r8, r9);
    if (*((rbx + 0xa8)) != 0) {
        if (*((rbx + 0xda)) == 0) {
            goto label_9;
        }
    }
    eax = *((rbx + 0xdf));
    edx = 0;
    if (*((rbx + 0xd8)) != al) {
label_1:
        rbp = *((rbx + 0x28));
        edx = 5;
        rax = dcgettext (0, "year: %04ld");
        rdi = stderr;
        esi = 1;
        rdx = rax;
        rcx = rbp;
        eax = 0;
        fprintf_chk ();
        eax = *((rbx + 0xd8));
        edx = 1;
        *((rbx + 0xdf)) = al;
    }
label_0:
    if (*((rbx + 0xc8)) != 0) {
        if (*((rbx + 0xdd)) == 0) {
            goto label_10;
        }
    }
    if (*((rbx + 0xb0)) != 0) {
        if (*((rbx + 0xdb)) != 0) {
            goto label_2;
        }
        if (dl != 0) {
            goto label_11;
        }
label_3:
        r13d = *((rbx + 0x10));
        r12 = *((rbx + 8));
        rax = fcn_00403920 (rbx, rsp);
        edx = 5;
        rax = dcgettext (0, "%s (day ordinal=%ld number=%d)");
        r9d = r13d;
        r8 = r12;
        rcx = rbp;
        rdi = stderr;
        rdx = rax;
        esi = 1;
        eax = 0;
        fprintf_chk ();
        *((rbx + 0xdb)) = 1;
        edx = 1;
    }
label_2:
    if (*((rbx + 0xb8)) == 0) {
        goto label_12;
    }
    if (*((rbx + 0xdc)) != 0) {
        goto label_12;
    }
    eax = 0x414b94;
    ecx = *((rbx + 0x14));
    esi = 1;
    r8d = " DST";
    rdi = stderr;
    if (*((rbx + 0xc0)) == 0) {
        r8 = rax;
    }
    edx ^= 1;
    eax = 0;
    edx = (int32_t) dl;
    rdx += str._isdst_d_s;
    fprintf_chk ();
    *((rbx + 0xdc)) = 1;
    if (*((rbx + 0xd0)) != 0) {
        if (*((rbx + 0xde)) == 0) {
            goto label_13;
        }
    }
    if (*((rbx + 0xa0)) == 0) {
        goto label_4;
    }
label_5:
    rbx = *((rbx + 0x58));
    do {
        fputc (0x20, *(obj.stderr));
        goto label_14;
label_12:
        if (*((rbx + 0xd0)) != 0) {
            if (*((rbx + 0xde)) == 0) {
                goto label_15;
            }
        }
        if (*((rbx + 0xa0)) == 0) {
            goto label_4;
        }
        rbx = *((rbx + 0x58));
    } while (dl != 0);
label_14:
    edx = 5;
    rax = dcgettext (0, "number of seconds: %ld");
    rdi = stderr;
    rcx = rbx;
    esi = 1;
    rdx = rax;
    eax = 0;
    fprintf_chk ();
label_4:
    eax = fputc (0xa, *(obj.stderr));
    return rax;
label_9:
    rcx = *((rbx + 0x28));
    r9 = *((rbx + 0x40));
    edx = "(Y-M-D) %04ld-%02ld-%02ld";
    eax = 0;
    r8 = *((rbx + 0x38));
    rdi = stderr;
    esi = 1;
    fprintf_chk ();
    *((rbx + 0xda)) = 1;
    edx = 1;
    eax = *((rbx + 0xdf));
    if (*((rbx + 0xd8)) == al) {
        goto label_0;
    }
    eax = fputc (0x20, *(obj.stderr));
    goto label_1;
label_10:
    edx ^= 1;
    rcx = *((rbx + 0x48));
    r9 = *((rbx + 0x58));
    esi = 1;
    edx = (int32_t) dl;
    r8 = *((rbx + 0x50));
    rdi = stderr;
    eax = 0;
    rdx += str.__02ld:_02ld:_02ld;
    fprintf_chk ();
    rcx = *((rbx + 0x60));
    if (rcx != 0) {
        goto label_16;
    }
label_6:
    if (*((rbx + 0x1c)) == 1) {
        goto label_17;
    }
label_8:
    *((rbx + 0xdd)) = 1;
    edx = 1;
    if (*((rbx + 0xb0)) == 0) {
        goto label_2;
    }
    edx = *((rbx + 0xdb));
    if (dl != 0) {
        goto label_2;
    }
label_11:
    fputc (0x20, *(obj.stderr));
    goto label_3;
label_15:
    edx ^= 1;
    ebp = (int32_t) dl;
    rbp += str._UTC_s;
label_7:
    rax = fcn_00403290 (*((rbx + 0x18)), rsp);
    rdi = stderr;
    rdx = rbp;
    esi = 1;
    rcx = rax;
    eax = 0;
    eax = fprintf_chk ();
    *((rbx + 0xde)) = 1;
    if (*((rbx + 0xa0)) == 0) {
        goto label_4;
    }
    goto label_5;
label_16:
    rdi = stderr;
    edx = ".%09d";
    esi = 1;
    eax = 0;
    fprintf_chk ();
    goto label_6;
label_13:
    goto label_7;
label_17:
    fwrite (0x411b7c, 1, 2, *(obj.stderr));
    goto label_8;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x403db0 */
#include <stdint.h>
 
int64_t fcn_00403db0 (int64_t arg1, int64_t arg10, int64_t arg11, int64_t arg7, int64_t arg8, int64_t arg9) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    uint32_t var_24h;
    int64_t var_28h;
    int64_t var_sp_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    uint32_t var_83h;
    int64_t var_a0h;
    int64_t var_d0h;
    int64_t var_d8h;
    int64_t var_e0h;
    int64_t var_f0h;
    int64_t var_100h;
    int64_t var_110h;
    int64_t var_118h;
    int64_t var_120h;
    int64_t var_128h;
    int64_t var_130h;
    int64_t var_138h;
    int64_t var_140h;
    int64_t var_144h;
    int64_t var_150h;
    rdi = arg1;
    xmm3 = arg10;
    xmm4 = arg11;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    r15d = 0;
    ecx = 0;
    r11d = 0xfffffffe;
    r8 = (int64_t) r15d;
    r9 = rdi;
    r13d = 0x26;
    r15d = (int32_t) r13b;
    r12 = rsp + 0xa0;
    *((rsp + 0xa0)) = cx;
    rbx = rsp + 0x150;
    r14 = r12;
    *((rsp + 0x24)) = 0;
    if (r15d == 0xffffffa3) {
        goto label_52;
    }
    do {
        if (ebp == 0xfffffffe) {
            goto label_53;
        }
label_6:
        if (ebp <= 0) {
            goto label_8;
        }
        if (ebp <= 0x115) {
            goto label_50;
        }
        r15d += 2;
        eax = 2;
label_2:
        if (r15d > 0x70) {
            goto label_52;
        }
        r10 = (int64_t) r15d;
        edx = *((r10 + 0x4135e0));
        if (edx != eax) {
            goto label_52;
        }
        r8d = *((r10 + str.OCDEFGH:IdkJKenL12efqM_N___AB___ABeeoZ_jpXo));
        if (r8d == 0) {
            goto label_54;
        }
        eax = *((rsp + 0x24));
        rcx = r14;
        eax += 0xffffffff;
        rbx += 0x38;
        *((rsp + 0x24)) = eax;
        rax = *((rsp + 0x28));
        *((rsp + 0xd8)) = rax;
        rax = *((rsp + 0x30));
        __asm ("movdqa xmm7, xmmword [rsp + 0xd0]");
        *((rsp + 0xe0)) = rax;
        rax = *((rsp + 0x100));
        __asm ("movdqa xmm0, xmmword [rsp + 0xe0]");
        __asm ("movups xmmword [rbx], xmm7");
        __asm ("movdqa xmm7, xmmword [rsp + 0xf0]");
        *((rbx + 0x30)) = rax;
        __asm ("movups xmmword [rbx + 0x10], xmm0");
        __asm ("movups xmmword [rbx + 0x20], xmm7");
label_15:
        r14 = rcx + 2;
        rax = r12 + 0x26;
        *((rcx + 2)) = r8w;
        if (r14 >= rax) {
            goto label_55;
        }
        if (r8d == 0xc) {
            goto label_56;
        }
        rax = (int64_t) r8d;
        r13d = *((rax + 0x4137a0));
        r15d = (int32_t) r13b;
    } while (r15d != 0xffffffa3);
label_52:
    ecx = *((r8 + 0x413720));
    edx = ecx;
    if (ecx != 0) {
        goto label_57;
    }
    if (*((rsp + 0x24)) != 3) {
        goto label_3;
    }
    if (ebp > 0) {
        goto label_58;
    }
    if (ebp != 0) {
        goto label_3;
    }
    do {
label_17:
        eax = 1;
label_38:
        return rax;
label_1:
        r8d = *((rax + str.OCDEFGH:IdkJKenL12efqM_N___AB___ABeeoZ_jpXo));
        if (r8d != 0) {
            goto label_59;
        }
label_0:
    } while (r14 == r12);
    r14 -= 2;
    r8 = *(r14);
    rbx -= 0x38;
label_3:
    eax = *((r8 + 0x4137a0));
    if (eax == 0xffffffa3) {
        goto label_0;
    }
    eax++;
    if (eax > 0x70) {
        goto label_0;
    }
    rax = (int64_t) eax;
    if (*((rax + 0x4135e0)) != 1) {
        goto label_0;
    }
    goto label_1;
label_57:
    rcx = (int64_t) ecx;
    eax = 1;
    edx -= 4;
    edi = *((rcx + 0x413520));
    eax -= edi;
    rsi = rdi;
    rax = (int64_t) eax;
    rdi = rax*8;
    rdi -= rax;
    rax = rbx + rdi*8;
    rdi = *((rax + 0x30));
    __asm ("movdqu xmm1, xmmword [rax]");
    __asm ("movdqu xmm2, xmmword [rax + 0x10]");
    __asm ("movdqu xmm3, xmmword [rax + 0x20]");
    r15 = *(rax);
    r10 = *((rax + 8));
    *((rsp + 0x140)) = rdi;
    rdi = *((rax + 0x20));
    r13 = *((rax + 0x10));
    *((rsp + 0x110)) = xmm1;
    r11 = *((rax + 0x18));
    *((rsp + 0x120)) = xmm2;
    *((rsp + 0x10)) = rdi;
    rdi = *((rax + 0x28));
    eax = *((rax + 0x30));
    *((rsp + 0x130)) = xmm3;
    *((rsp + 8)) = rdi;
    *((rsp + 0x18)) = eax;
    if (dl > 0x57) {
        goto label_60;
    }
    edx = (int32_t) dl;
    /* switch table (88 cases) at 0x4128a0 */
label_4:
    rdx = rax + 1;
    *(r9) = rdx;
    ebp = *(rax);
    if (bpl != 0) {
        goto label_50;
    }
label_8:
    eax = 0;
    ebp = 0;
    goto label_2;
label_58:
    goto label_3;
label_53:
    rax = *(r9);
    edi = 1;
    r11 = 0x3ffffff03ffffff;
    ebp = *(rax);
    ecx = ebp;
label_11:
    edx = ebp;
    if (cl > 0x20) {
        goto label_61;
    }
    rsi = rdi;
    rsi <<= cl;
    rcx = rsi;
    rsi = 0x100003e00;
    if ((rcx & rsi) == 0) {
        goto label_62;
    }
    rsi = rax + 1;
    do {
        *(r9) = rsi;
        ebp = *(rsi);
        rax = rsi;
        edx = ebp;
        if (bpl > 0x20) {
            goto label_61;
        }
        ecx = edx;
        r10 = rdi;
        rsi++;
        r10 <<= cl;
        rcx = r10;
        r10 = 0x100003e00;
    } while ((rcx & r10) != 0);
label_62:
    ecx = rbp - 0x30;
    if (ecx <= 9) {
        goto label_63;
    }
    ecx = rbp - 0x41;
    if (ecx > 0x39) {
        goto label_4;
    }
label_7:
    rsi = rdi;
    rsi <<= cl;
    if ((rsi & r11) == 0) {
        goto label_64;
    }
    rax = *(r9);
    r13 = rsp + 0x80;
    r11 = 0x3ffffff03ffffff;
    rsi = r13;
    rdi = r13 + 0x13;
    rax++;
    while ((r10 & r11) != 0) {
label_5:
        rax++;
        if (rsi < rdi) {
            *(rsi) = dl;
            rsi++;
        }
        *(r9) = rax;
        ecx = *(rax);
        edx = ecx;
        ecx -= 0x41;
        if (ecx > 0x39) {
            goto label_65;
        }
        r10 = rbp;
        r10 <<= cl;
    }
label_65:
    if (dl == 0x2e) {
        goto label_5;
    }
    *(rsi) = 0;
    eax = *((rsp + 0x80));
    rcx = r13;
    if (al == 0) {
        goto label_66;
    }
    do {
        edx = (int32_t) al;
        esi = rdx - 0x61;
        edx -= 0x20;
        if (esi < 0x1a) {
            eax = edx;
        }
        rcx++;
        *((rcx - 1)) = al;
        eax = *(rcx);
    } while (al != 0);
label_66:
    *((rsp + 0x10)) = rbx;
    esi = 0x411ba2;
    rbx = rbp;
    *((rsp + 8)) = r8d;
    while (eax != 0) {
        rbx += 0x10;
        rsi = *(rbx);
        if (rsi == 0) {
            goto label_67;
        }
        eax = strcmp (r13, rsi);
    }
    r9 = rbp;
    r8 = *((rsp + 8));
    rbx = *((rsp + 0x10));
    rdx = *((rbp + 0xc));
    ebp = *((rbp + 8));
label_41:
    *((rsp + 0xd0)) = rdx;
    goto label_6;
label_61:
    ecx = rdx - 0x2b;
    esi = rbp - 0x30;
    ecx &= 0xfffffffd;
    if (esi <= 9) {
        goto label_68;
    }
    if (cl == 0) {
        goto label_69;
    }
    ecx = rbp - 0x41;
    if (ecx <= 0x39) {
        goto label_7;
    }
label_64:
    if (dl != 0x28) {
        goto label_4;
    }
    rsi = *(r9);
    ecx = 0;
    goto label_70;
label_9:
    dl = (dl == 0x29) ? 1 : 0;
    edx = (int32_t) dl;
    rcx -= rdx;
label_10:
    if (rcx == 0) {
        goto label_71;
    }
    rsi = rax;
label_70:
    rax = rsi + 1;
    *(r9) = rax;
    edx = *((rax - 1));
    if (dl == 0) {
        goto label_8;
    }
    if (dl != 0x28) {
        goto label_9;
    }
    rcx++;
    goto label_10;
label_68:
    al = (dl == 0x2d) ? 1 : 0;
    if (cl != 0) {
        goto label_63;
    }
label_14:
    rax = *(r9);
    esi -= esi;
    esi &= 2;
    rdx = rax + 1;
    esi--;
    do {
        *(r9) = rdx;
        ecx = *(rdx);
        rax = rdx;
        edx = ecx;
        if (cl > 0x20) {
            goto label_72;
        }
        r10 = rdi;
        rdx = rax + 1;
        r10 <<= cl;
    } while ((r10 & rbp) != 0);
    ebp = (int32_t) cl;
    goto label_11;
label_40:
    *((rsp + 0xd0)) = 0;
label_50:
    rax = (int64_t) ebp;
    eax = *((rax + 0x413820));
label_12:
    r15d += eax;
    goto label_2;
label_72:
    ebp = (int32_t) cl;
    r10d = rbp - 0x30;
    if (r10d > 9) {
        goto label_11;
    }
label_16:
    r11 = rax;
    ecx = 0;
    edi = (int32_t) dl;
    r10d = 0x30;
label_13:
    edx = 0x30;
    ebp = rdi - 0x30;
    edx -= edi;
    if (esi == 0xffffffff) {
    }
    rdx = (int64_t) ebp;
    rcx += rdx;
    if (rcx overflow 0) {
        goto label_47;
    }
    edi = *((r11 + 1));
    rbp = r11 + 1;
    r13d = rdi - 0x30;
    edx = edi;
    if (r13d <= 9) {
        goto label_73;
    }
    edx &= 0xfffffffd;
    if (dl != 0x2c) {
        goto label_74;
    }
    edx = *((rbp + 1));
    edx -= 0x30;
    if (edx > 9) {
        goto label_74;
    }
    rbp = r11 + 3;
    r11d = *((r11 + 3));
    eax = 8;
    r13d = r11d;
    do {
        edx = rdx * 5;
        edi = r11 - 0x30;
        edx += edx;
        if (edi <= 9) {
            r11d = *((rbp + 1));
            edx += edi;
            rbp++;
            r13d = r11d;
            edi = r11 - 0x30;
        }
        eax--;
    } while (eax != 0);
    if (esi == 0xffffffff) {
        goto label_75;
    }
    if (edi > 9) {
        goto label_76;
    }
    do {
label_19:
        rbp++;
        eax = *(rbp);
        eax -= 0x30;
    } while (eax <= 9);
    if (esi >= 0) {
        goto label_76;
    }
    if (edx == 0) {
        goto label_76;
    }
label_20:
    rax = 0x8000000000000000;
    if (rcx == rax) {
        goto label_47;
    }
    eax = 0x3b9aca00;
    rcx--;
    *(r9) = rbp;
    eax -= edx;
    *((rsp + 0xd0)) = rcx;
    rax = (int64_t) eax;
    *((rsp + 0x28)) = rax;
    eax = 0x15;
    goto label_12;
label_73:
    rdx = rcx * 0xa;
    rcx = rdx;
    if (eax overflow 0) {
        goto label_47;
    }
    r11 = rbp;
    goto label_13;
label_69:
    al = (dl == 0x2d) ? 1 : 0;
    goto label_14;
label_59:
    rax = *((rsp + 0x28));
    rbx += 0x38;
    rcx = r14;
    *((rsp + 0x24)) = 3;
    *((rsp + 0xd8)) = rax;
    rax = *((rsp + 0x30));
    __asm ("movdqa xmm0, xmmword [rsp + 0xd0]");
    *((rsp + 0xe0)) = rax;
    rax = *((rsp + 0x100));
    __asm ("movups xmmword [rbx], xmm0");
    __asm ("movdqa xmm0, xmmword [rsp + 0xe0]");
    *((rbx + 0x30)) = rax;
    __asm ("movups xmmword [rbx + 0x10], xmm0");
    __asm ("movdqa xmm0, xmmword [rsp + 0xf0]");
    __asm ("movups xmmword [rbx + 0x20], xmm0");
    goto label_15;
label_74:
    rdi = rbp;
    edx = esi;
    *(r9) = rbp;
    rdi -= rax;
    edx >>= 0x1f;
    *((rsp + 0x28)) = rcx;
    eax -= eax;
    *((rsp + 0xd0)) = dl;
    eax = ~eax;
    *((rsp + 0x30)) = rdi;
    eax += 0x14;
    ebp -= ebp;
    ebp = ~ebp;
    ebp += 0x113;
    goto label_12;
label_71:
    ebp = *((rsi + 1));
    ecx = ebp;
    goto label_11;
label_54:
    rax = *((rbx + 0x68));
    __asm ("movdqu xmm7, xmmword [rbx + 0x38]");
    rcx = r14;
    rdx = rbx;
    __asm ("movdqu xmm0, xmmword [rbx + 0x48]");
    r15 = *((rbx + 0x38));
    *((rsp + 0x110)) = xmm7;
    __asm ("movdqu xmm7, xmmword [rbx + 0x58]");
    r10 = *((rbx + 0x40));
    r13 = *((rbx + 0x48));
    *((rsp + 0x140)) = rax;
    rax = *((rbx + 0x58));
    r11 = *((rbx + 0x50));
    *((rsp + 0x120)) = xmm0;
    *((rsp + 0x130)) = xmm7;
    *((rsp + 0x10)) = rax;
    rax = *((rbx + 0x60));
    *((rsp + 8)) = rax;
    eax = *((rbx + 0x68));
    *((rsp + 0x18)) = eax;
    eax = 0xffffffe4;
label_18:
    rdi = *((rsp + 0x10));
    esi = *((rsp + 0x18));
    *((rsp + 0x110)) = r15;
    rbx = rdx + 0x38;
    *((rsp + 0x118)) = r10;
    __asm ("movdqa xmm4, xmmword [rsp + 0x110]");
    *((rsp + 0x130)) = rdi;
    rdi = *((rsp + 8));
    *((rsp + 0x120)) = r13;
    *((rsp + 0x128)) = r11;
    __asm ("movdqa xmm5, xmmword [rsp + 0x120]");
    *((rsp + 0x138)) = rdi;
    __asm ("movdqa xmm6, xmmword [rsp + 0x130]");
    *((rsp + 0x140)) = esi;
    rsi = *((rsp + 0x140));
    __asm ("movups xmmword [rdx + 0x38], xmm4");
    *((rdx + 0x68)) = rsi;
    __asm ("movups xmmword [rdx + 0x48], xmm5");
    __asm ("movups xmmword [rdx + 0x58], xmm6");
    edx = *(rcx);
    r8d += edx;
    esi = edx;
    if (r8d <= 0x70) {
        r8 = (int64_t) r8d;
        dx = *((r8 + 0x4135e0));
        if (si == dx) {
            goto label_77;
        }
    }
    rax = (int64_t) eax;
    r8 = *((rax + 0x4136e0));
    goto label_15;
label_63:
    rax = *(r9);
    esi = 0;
    goto label_16;
    eax = *((rbx + 0x30));
    r8d = 0;
    eax += *((r9 + 0x98));
    __asm ("seto r8b");
    *((r9 + 0x98)) = eax;
    rax = *((r9 + 0x90));
    rax += *((rbx + 0x28));
    rdx = rax;
    __asm ("seto al");
    edi = 0;
    *((r9 + 0x90)) = rdx;
    rdx = *((r9 + 0x88));
    eax = (int32_t) al;
    rdx += *((rbx + 0x20));
    __asm ("seto dil");
    *((r9 + 0x88)) = rdx;
    esi = 0;
    rdx = *((r9 + 0x80));
    rdx += *((rbx + 0x18));
    __asm ("seto sil");
    *((r9 + 0x80)) = rdx;
    ecx = 0;
    rdx = *((r9 + 0x78));
    rdx += *((rbx + 0x10));
    __asm ("seto cl");
    *((r9 + 0x78)) = rdx;
    rdx = *((r9 + 0x70));
    *((rsp + 0x38)) = rcx;
    ecx = 0;
    rdx += *((rbx + 8));
    __asm ("seto cl");
    *((r9 + 0x70)) = rdx;
    *((rsp + 0x40)) = rcx;
    rdx = *((r9 + 0x68));
    ecx = 0;
    rdx += *(rbx);
    __asm ("seto cl");
    eax |= r8d;
    *((r9 + 0x68)) = rdx;
    eax |= edi;
    edi = *((rsp + 0x40));
    eax |= esi;
    al |= *((rsp + 0x38));
    dil |= al;
    if (dil != 0) {
        goto label_17;
    }
    if (rcx != 0) {
        goto label_17;
    }
    *((r9 + 0xa1)) = 1;
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    r8d = 0xffffffa3;
    eax = 0x10;
    goto label_18;
    rax = *((rbx - 0x38));
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    *((rsp + 0x144)) = 0;
    r8d = 0xffffffa3;
    *((rsp + 8)) = rax;
    eax = *((rbx - 0x30));
    *((rsp + 0x18)) = eax;
    eax = 0x11;
label_21:
    r11d = 0;
    r13d = 0;
    r10d = 0;
    r15d = 0;
    *((rsp + 0x10)) = 0;
    goto label_18;
label_75:
    if (edi > 9) {
        goto label_78;
    }
    if (r13b != 0x30) {
        goto label_79;
    }
    do {
        rbp++;
        eax = *(rbp);
        edi = eax;
        eax -= 0x30;
        if (eax > 9) {
            goto label_78;
        }
    } while (dil == 0x30);
label_79:
    eax = *(rbp);
    edx++;
    eax -= 0x30;
    if (eax <= 9) {
        goto label_19;
    }
    goto label_20;
label_47:
    eax = 2;
    goto label_12;
    *((rsp + 0x144)) = 0;
    rax = *((rbx - 0x30));
label_26:
    *((rsp + 8)) = rax;
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    r8d = 0xffffffa3;
    eax = 0x11;
label_27:
    *((rsp + 0x18)) = 0;
    goto label_21;
    *((r9 + 0x18)) = 0x6270;
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    r8d = 0xffffffa3;
    eax = 0xc;
    goto label_18;
    rax = *(rbx);
label_34:
    *((r9 + 0x18)) = eax;
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    r8d = 0xffffffa3;
    eax = 0xc;
    goto label_18;
    *((r9 + 0x14)) = 1;
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    r8d = 0xffffffa3;
    *((r9 + 0xc0))++;
    eax = 0xb;
    goto label_18;
    rax = *(rbx);
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    r8d = 0xffffffa3;
    *((r9 + 0x14)) = eax;
    eax = 0xb;
    goto label_18;
    r8 = *(rbx);
    *((rsp + 0x48)) = r10;
    esi = *((rbx - 0x38));
    *((rsp + 0x40)) = r11;
    *((r9 + 0xd0))++;
    *((rsp + 0x38)) = r9;
    al = fcn_00403570 (r9 + 0x18, rsi, *((rbx - 0x30)), *((rbx - 0x28)));
    r9 = *((rsp + 0x38));
    r11 = *((rsp + 0x40));
    r10 = *((rsp + 0x48));
    if (al == 0) {
        goto label_17;
    }
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    r8d = 0xffffffe5;
    eax = 0xa;
    goto label_18;
    rax = *((rbx - 0x38));
    rdx = *((rbx - 0xa0));
    *((r9 + 0x1c)) = 2;
    r8d = 0x14;
    rcx = *((rbx - 0x110));
    *((r9 + 0x58)) = rax;
    rax = *((rbx - 0x30));
    *((r9 + 0x48)) = rcx;
    rcx = r14 - 0xc;
    *((r9 + 0x50)) = rdx;
    rdx = rbx - 0x150;
    *((r9 + 0x60)) = rax;
    eax = 8;
    goto label_18;
    r15 = *((rbx + 8));
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    r10d = 0;
    r8d = 0xffffffa3;
    eax = 0x15;
    goto label_18;
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    eax = 0x11;
    r11d = 0;
    r8d = 0xffffffa3;
    r13d = 0;
    r10d = 0;
    r15d = 0;
    *((rsp + 0x144)) = 0;
    *((rsp + 0x18)) = 0;
    *((rsp + 8)) = 0;
    *((rsp + 0x10)) = 1;
    goto label_18;
    *((rsp + 0x144)) = 0;
    rax = *((rbx - 0x30));
    do {
        *((rsp + 0x10)) = rax;
        rdx = rbx - 0x70;
        rcx = r14 - 4;
        r8d = 0xffffffa3;
        eax = 0x11;
label_28:
        r11d = 0;
        r13d = 0;
        r10d = 0;
        r15d = 0;
        *((rsp + 0x18)) = 0;
        *((rsp + 8)) = 0;
        goto label_18;
        *((rsp + 0x144)) = 0;
        rax = *((rbx - 0x38));
    } while (1);
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    eax = 0x11;
    r13d = 0;
    r8d = 0xffffffa3;
    r10d = 0;
    r15d = 0;
    *((rsp + 0x144)) = 0;
    *((rsp + 0x18)) = 0;
    r11d = 1;
    *((rsp + 8)) = 0;
    *((rsp + 0x10)) = 0;
    goto label_18;
    r11 = *((rbx - 0x30));
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    *((rsp + 0x144)) = 0;
    r8d = 0xffffffa3;
    eax = 0x11;
    do {
label_24:
        *((rsp + 0x18)) = 0;
        r13d = 0;
        r10d = 0;
        r15d = 0;
        *((rsp + 8)) = 0;
        *((rsp + 0x10)) = 0;
        goto label_18;
        r11 = *((rbx - 0x38));
        rdx = rbx - 0x70;
        rcx = r14 - 4;
        *((rsp + 0x144)) = 0;
        r8d = 0xffffffa3;
        eax = 0x11;
    } while (1);
    r13 = *(rbx);
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    eax = 0x11;
    *((rsp + 0x144)) = 0;
    r8d = 0xffffffa3;
label_22:
    *((rsp + 0x18)) = 0;
    r11d = 0;
    r10d = 0;
    r15d = 0;
    *((rsp + 8)) = 0;
    *((rsp + 0x10)) = 0;
    goto label_18;
    rax = *((rbx - 0x30));
    rax *= *(rbx);
    xmm0 = 0;
    *((rsp + 0x140)) = 0;
    *((rsp + 0x110)) = xmm0;
    *((rsp + 0x120)) = xmm0;
    *((rsp + 0x130)) = xmm0;
    r13 = rax;
    if (al overflow 0) {
        goto label_17;
    }
    do {
        rdx = rbx - 0x70;
        rcx = r14 - 4;
        r8d = 0xffffffa3;
        eax = 0x11;
        goto label_22;
        rax = *((rbx - 0x38));
        rax *= *(rbx);
        xmm0 = 0;
        *((rsp + 0x140)) = 0;
        *((rsp + 0x110)) = xmm0;
        *((rsp + 0x120)) = xmm0;
        *((rsp + 0x130)) = xmm0;
        r13 = rax;
    } while (al !overflow 0);
    goto label_17;
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    eax = 0x11;
    r11d = 0;
    r8d = 0xffffffa3;
    r13d = 0;
    r15d = 0;
    *((rsp + 0x144)) = 0;
    *((rsp + 0x18)) = 0;
    r10d = 1;
    *((rsp + 8)) = 0;
    *((rsp + 0x10)) = 0;
    goto label_18;
    r10 = *((rbx - 0x30));
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    *((rsp + 0x144)) = 0;
    r8d = 0xffffffa3;
    eax = 0x11;
    do {
label_25:
        *((rsp + 0x18)) = 0;
        r11d = 0;
        r13d = 0;
        r15d = 0;
        *((rsp + 8)) = 0;
        *((rsp + 0x10)) = 0;
        goto label_18;
        r10 = *((rbx - 0x38));
        rdx = rbx - 0x70;
        rcx = r14 - 4;
        *((rsp + 0x144)) = 0;
        r8d = 0xffffffa3;
        eax = 0x11;
    } while (1);
    __asm ("movdqu xmm0, xmmword [rbx]");
    edx = 5;
    *((r9 + 0xa0)) = 1;
    __asm ("movups xmmword [r9 + 0x58], xmm0");
    *((rsp + 0x48)) = r10;
    *((rsp + 0x40)) = r11;
    *((rsp + 0x38)) = r9;
    rax = dcgettext (0, "number of seconds");
    rcx = r14 - 4;
    rdx = rbx - 0x70;
    r8d = 0xffffffa3;
    rdi = rax;
    eax = 2;
label_23:
    r9 = *((rsp + 0x38));
    r11 = *((rsp + 0x40));
    r10 = *((rsp + 0x48));
    if (*((r9 + 0xd9)) == 0) {
        goto label_18;
    }
    *((rsp + 0x68)) = r8d;
    *((rsp + 0x60)) = rdx;
    *((rsp + 0x58)) = eax;
    *((rsp + 0x50)) = r10;
    *((rsp + 0x48)) = rcx;
    fcn_00403a10 (rdi, r9);
label_29:
    r9 = *((rsp + 0x38));
    r11 = *((rsp + 0x40));
    rcx = *((rsp + 0x48));
    r10 = *((rsp + 0x50));
    eax = *((rsp + 0x58));
    rdx = *((rsp + 0x60));
    r8d = *((rsp + 0x68));
    goto label_18;
    *((rsp + 0x48)) = r10;
    edx = 5;
    *((r9 + 0xd0))++;
    *((rsp + 0x40)) = r11;
    *((rsp + 0x38)) = r9;
    do {
label_31:
        rax = dcgettext (0, 0x411bf6);
        rdx = rbx - 0x38;
        rcx = r14 - 2;
        r8d = 0xffffffa3;
        rdi = rax;
        eax = 4;
        goto label_23;
        *((rsp + 0x48)) = r10;
        edx = 5;
        esi = "local_zone";
        *((rsp + 0x40)) = r11;
        *((r9 + 0xb8))++;
        *((rsp + 0x38)) = r9;
    } while (1);
    r11 = *((rbx - 0x30));
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    *((rsp + 0x144)) = 0;
    r8d = 0x3c;
    eax = 0x12;
    goto label_24;
    rax = *((rbx - 0x30));
    rax *= *(rbx);
    xmm0 = 0;
    *((rsp + 0x140)) = 0;
    *((rsp + 0x110)) = xmm0;
    *((rsp + 0x120)) = xmm0;
    *((rsp + 0x130)) = xmm0;
    r13 = rax;
    if (*((r9 + 0xb8)) overflow 0) {
        goto label_17;
    }
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    r8d = 0x3c;
    eax = 0x12;
    goto label_22;
    r10 = *((rbx - 0x30));
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    *((rsp + 0x144)) = 0;
    r8d = 0x3c;
    eax = 0x12;
    goto label_25;
    r15 = *((rbx - 0x30));
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    *((rsp + 0x144)) = 0;
    r8d = 0x3c;
    eax = 0x12;
    do {
        *((rsp + 0x18)) = 0;
        r11d = 0;
        r13d = 0;
        r10d = 0;
        *((rsp + 8)) = 0;
        *((rsp + 0x10)) = 0;
        goto label_18;
        rdx = rbx - 0x38;
        rcx = r14 - 2;
        *((rsp + 0x144)) = 0;
        r8d = 0xffffffa3;
        eax = 0x11;
        *((rsp + 0x18)) = 0;
        *((rsp + 8)) = 1;
        goto label_21;
        r15 = *((rbx + 8));
        rdx = rbx - 0x70;
        rcx = r14 - 4;
        r8d = 0x2b;
        eax = 0x19;
        goto label_18;
        *((rsp + 0x144)) = 0;
        r15 = *((rbx - 0x38));
label_35:
        rdx = rbx - 0x70;
        rcx = r14 - 4;
        r8d = 0xffffffa3;
        eax = 0x11;
    } while (1);
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    eax = 0x11;
    r11d = 0;
    r8d = 0xffffffa3;
    r13d = 0;
    *((rsp + 0x144)) = 0;
    r10d = 0;
    *((rsp + 0x18)) = 0;
    r15d = 1;
    *((rsp + 8)) = 0;
    *((rsp + 0x10)) = 0;
    goto label_18;
    *((rsp + 0x144)) = 0;
    rax = *((rbx - 0x38));
    goto label_26;
    r13 = *(rbx);
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    eax = 0x13;
    *((rsp + 0x144)) = 0;
    r8d = 0xffffffa3;
    goto label_22;
    rax = *((rbx - 0x30));
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    *((rsp + 0x144)) = 0;
    r8d = 0x3c;
    *((rsp + 8)) = rax;
    eax = 0x12;
    goto label_27;
    rax = *((rbx - 0x30));
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    *((rsp + 0x144)) = 0;
    r8d = 0x3c;
    *((rsp + 0x10)) = rax;
    eax = 0x12;
    goto label_28;
    rax = *((rbx - 0x30));
    rdx = *((rbx - 0xa0));
    *((r9 + 0x58)) = 0;
    rcx = r14 - 8;
    *((r9 + 0x60)) = 0;
    r8d = 0x14;
    *((r9 + 0x48)) = rdx;
    rdx = rbx - 0xe0;
    *((r9 + 0x50)) = rax;
    eax = 8;
    *((r9 + 0x1c)) = 2;
    goto label_18;
    rax = *((rbx - 0x30));
    *((r9 + 0x50)) = 0;
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    *((r9 + 0x58)) = 0;
    r8d = 0x14;
    *((r9 + 0x48)) = rax;
    eax = 8;
    *((r9 + 0x60)) = 0;
    *((r9 + 0x1c)) = 2;
    goto label_18;
    *((rsp + 0x48)) = r10;
    *((rsp + 0x40)) = r11;
    *((r9 + 0x18)) = 0x6270;
label_30:
    eax = *((rbx + 0x30));
    r8d = 0;
    eax += *((r9 + 0x98));
    __asm ("seto r8b");
    *((r9 + 0x98)) = eax;
    rax = *((r9 + 0x90));
    rax += *((rbx + 0x28));
    rdx = rax;
    __asm ("seto al");
    edi = 0;
    *((r9 + 0x90)) = rdx;
    rdx = *((r9 + 0x88));
    eax = (int32_t) al;
    rdx += *((rbx + 0x20));
    __asm ("seto dil");
    *((r9 + 0x88)) = rdx;
    esi = 0;
    rdx = *((r9 + 0x80));
    rdx += *((rbx + 0x18));
    __asm ("seto sil");
    *((r9 + 0x80)) = rdx;
    r11d = 0;
    rdx = *((r9 + 0x78));
    rdx += *((rbx + 0x10));
    __asm ("seto r11b");
    *((r9 + 0x78)) = rdx;
    r10d = 0;
    rdx = *((r9 + 0x70));
    rdx += *((rbx + 8));
    __asm ("seto r10b");
    *((r9 + 0x70)) = rdx;
    ecx = 0;
    rdx = *((r9 + 0x68));
    rdx += *(rbx);
    __asm ("seto cl");
    eax |= r8d;
    *((r9 + 0x68)) = rdx;
    eax |= edi;
    edi = r10d;
    eax |= esi;
    eax |= r11d;
    dil |= al;
    if (dil != 0) {
        goto label_17;
    }
    if (rcx != 0) {
        goto label_17;
    }
    *((r9 + 0xa1)) = 1;
    edx = 5;
    *((rsp + 0x38)) = r9;
    rax = dcgettext (0, "relative");
    r9 = *((rsp + 0x38));
    rcx = r14 - 4;
    rdx = rbx - 0x70;
    rdi = rax;
    r8d = 0xffffffa3;
    eax = 0xc;
    r11 = *((rsp + 0x40));
    r10 = *((rsp + 0x48));
    if (*((r9 + 0xd9)) == 0) {
        goto label_18;
    }
    *((rsp + 0x68)) = r8d;
    *((rsp + 0x60)) = rdx;
    *((rsp + 0x58)) = eax;
    *((rsp + 0x50)) = r10;
    *((rsp + 0x48)) = rcx;
label_32:
    fcn_004036f0 (rdi, r9);
    goto label_29;
    rax = *((rbx - 0x38));
    *((rsp + 0x48)) = r10;
    *((rsp + 0x40)) = r11;
    *((r9 + 0x18)) = eax;
    goto label_30;
    *((rsp + 0x48)) = r10;
    edx = 5;
    esi = 0x410feb;
    *((rsp + 0x40)) = r11;
    *((r9 + 0xc8))++;
    *((rsp + 0x38)) = r9;
    goto label_31;
    *((rsp + 0x48)) = r10;
    edx = 5;
    esi = "datetime";
    *((rsp + 0x40)) = r11;
    *((r9 + 0xc8))++;
    *((r9 + 0xa8))++;
    *((rsp + 0x38)) = r9;
    goto label_31;
    rax = *((rbx - 0x38));
    rdx = *((rbx - 0xa0));
    r8d = 0xffffffa3;
    rcx = *((rbx - 0x110));
    *((r9 + 0x58)) = rax;
    rax = *((rbx - 0x30));
    *((r9 + 0x48)) = rcx;
    rcx = r14 - 0xc;
    *((r9 + 0x60)) = rax;
    rax = *(rbx);
    *((r9 + 0x50)) = rdx;
    rdx = rbx - 0x150;
    *((r9 + 0x1c)) = eax;
    eax = 7;
    goto label_18;
    rax = *((rbx - 0x30));
    rdx = *((rbx - 0xa0));
    rcx = r14 - 8;
    *((r9 + 0x58)) = 0;
    *((r9 + 0x60)) = 0;
    r8d = 0xffffffa3;
    *((r9 + 0x50)) = rax;
    rax = *(rbx);
    *((r9 + 0x48)) = rdx;
    rdx = rbx - 0xe0;
    *((r9 + 0x1c)) = eax;
    eax = 7;
    goto label_18;
    rax = *((rbx - 0x30));
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    *((r9 + 0x50)) = 0;
    *((r9 + 0x58)) = 0;
    r8d = 0xffffffa3;
    *((r9 + 0x48)) = rax;
    rax = *(rbx);
    *((r9 + 0x60)) = 0;
    *((r9 + 0x1c)) = eax;
    eax = 7;
    goto label_18;
    *((rsp + 0x48)) = r9;
    edx = 5;
    *((rsp + 0x40)) = r10;
    *((rsp + 0x38)) = r11;
label_33:
    rax = dcgettext (0, "hybrid");
    r9 = *((rsp + 0x48));
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    rdi = rax;
    r8d = 0xffffffa3;
    eax = 4;
    r11 = *((rsp + 0x38));
    r10 = *((rsp + 0x40));
    if (*((r9 + 0xd9)) == 0) {
        goto label_18;
    }
    *((rsp + 0x68)) = r8d;
    rsi = r9;
    *((rsp + 0x60)) = rdx;
    *((rsp + 0x58)) = eax;
    *((rsp + 0x50)) = r10;
    *((rsp + 0x48)) = rcx;
    *((rsp + 0x40)) = r11;
    *((rsp + 0x38)) = r9;
    goto label_32;
    edx = 5;
    *((rsp + 0x48)) = r9;
    *((rsp + 0x40)) = r10;
    *((rsp + 0x38)) = r11;
    rax = dcgettext (0, "number");
    r9 = *((rsp + 0x48));
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    rdi = rax;
    r8d = 0xffffffa3;
    eax = 4;
    r11 = *((rsp + 0x38));
    r10 = *((rsp + 0x40));
    if (*((r9 + 0xd9)) == 0) {
        goto label_18;
    }
    rsi = r9;
    *((rsp + 0x68)) = r8d;
    *((rsp + 0x60)) = rdx;
    *((rsp + 0x58)) = eax;
    *((rsp + 0x50)) = r10;
    *((rsp + 0x48)) = rcx;
    *((rsp + 0x40)) = r11;
    *((rsp + 0x38)) = r9;
    fcn_00403a10 (rdi, rsi);
    goto label_29;
    *((rsp + 0x48)) = r9;
    edx = 5;
    esi = "relative";
    *((rsp + 0x40)) = r10;
    *((rsp + 0x38)) = r11;
    goto label_33;
    *((rsp + 0x48)) = r10;
    edx = 5;
    esi = 0x411bfb;
    *((rsp + 0x40)) = r11;
    *((r9 + 0xb0))++;
    *((rsp + 0x38)) = r9;
    goto label_31;
    *((rsp + 0x48)) = r10;
    edx = 5;
    esi = "date";
    *((rsp + 0x40)) = r11;
    *((r9 + 0xa8))++;
    *((rsp + 0x38)) = r9;
    goto label_31;
    rax = *((rbx - 0x38));
label_37:
    *((r9 + 8)) = rax;
    rax = *(rbx);
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    *((r9 + 0xe0)) = 1;
    r8d = 0xffffffa3;
    *((r9 + 0x10)) = eax;
    eax = 0xd;
    goto label_18;
    rax = *((rbx - 0x38));
    *((r9 + 8)) = 0;
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    r8d = 0xffffffa3;
    *((r9 + 0x10)) = eax;
    eax = 0xd;
    goto label_18;
    rax = *(rbx);
    *((r9 + 8)) = 0;
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    r8d = 0xffffffa3;
    *((r9 + 0x10)) = eax;
    eax = 0xd;
    goto label_18;
    eax = *((rbx - 0x38));
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    r8d = 0xffffffa3;
    eax += 0xe10;
    *((r9 + 0x18)) = eax;
    eax = 0xc;
    goto label_18;
    eax = *(rbx);
    eax += 0xe10;
    goto label_34;
    r8 = *(rbx);
    *((rsp + 0x48)) = r10;
    esi = *((rbx - 0x38));
    *((rsp + 0x40)) = r11;
    *((rsp + 0x38)) = r9;
    al = fcn_00403570 (r9 + 0x18, rsi, *((rbx - 0x30)), *((rbx - 0x28)));
    if (al == 0) {
        goto label_17;
    }
    r9 = *((rsp + 0x38));
    edx = 0;
    rax = *((r9 + 0x18));
    rax += *((rbx - 0x70));
    rcx = (int64_t) eax;
    __asm ("seto dl");
    *((r9 + 0x18)) = eax;
    ecx = 1;
    if (rax != rcx) {
        edx = ecx;
    }
    if (edx != 0) {
        goto label_17;
    }
    rdx = rbx - 0xa8;
    rcx = r14 - 6;
    r8d = 0xffffffa3;
    eax = 0xc;
    r11 = *((rsp + 0x40));
    r10 = *((rsp + 0x48));
    goto label_18;
    *((rsp + 0x144)) = 0;
    r15 = *((rbx - 0x30));
    goto label_35;
    rcx = r14;
    rax = rsi*8;
    r8d = 0x2b;
    r15 = 0xffffffffffffffff;
    rax -= rsi;
    rsi += rsi;
    rax <<= 3;
    rcx -= rsi;
    rbx -= rax;
    eax = 0x19;
    rdx = rbx;
    goto label_18;
    rdx = *((r9 + 0x90));
    rax = *((rbx - 0x38));
    rdi = *((rbx - 0x30));
    rsi = *((rbx - 0x28));
    rcx = *((rbx - 0x20));
    r8d = *((rbx - 8));
    *((rsp + 0x58)) = rdx;
    rdx = *((r9 + 0x80));
    *((rsp + 0x38)) = rax;
    *((rsp + 0x40)) = rdi;
    rax = *((r9 + 0x88));
    *((rsp + 0x60)) = rdx;
    rdx = *((r9 + 0x78));
    *((rsp + 0x48)) = rsi;
    rdi = *((rbx - 0x10));
    *((rsp + 0x68)) = rdx;
    rdx = *((r9 + 0x70));
    *((rsp + 0x50)) = rcx;
    rsi = *((rbx - 0x18));
    *((rsp + 0x70)) = rdx;
    rdx = *((r9 + 0x68));
    ecx = *((r9 + 0x98));
    *((rsp + 0x78)) = rdx;
    edx = *(rbx);
    if (edx < 0) {
        goto label_80;
    }
    rdx = *((rsp + 0x58));
    ecx += r8d;
    __asm ("seto r8b");
    *((r9 + 0x98)) = ecx;
    ecx = 0;
    rdx += rdi;
    r8d = (int32_t) r8b;
    __asm ("seto cl");
    edi = 0;
    rax += rsi;
    *((r9 + 0x90)) = rdx;
    __asm ("seto dil");
    *((r9 + 0x88)) = rax;
    esi = 0;
    rax = *((rsp + 0x60));
    rax += *((rsp + 0x50));
    *((rsp + 0x58)) = rdi;
    __asm ("seto sil");
    *((r9 + 0x80)) = rax;
    edi = 0;
    rax = *((rsp + 0x68));
    rax += *((rsp + 0x48));
    __asm ("seto dil");
    *((r9 + 0x78)) = rax;
    edx = 0;
    rax = *((rsp + 0x70));
    rax += *((rsp + 0x40));
    __asm ("seto dl");
    *((r9 + 0x70)) = rax;
    rax = *((rsp + 0x78));
    *((rsp + 0x40)) = rdx;
    edx = 0;
    rax += *((rsp + 0x38));
    *((r9 + 0x68)) = rax;
    eax = ecx;
    __asm ("seto dl");
    eax |= r8d;
    al |= *((rsp + 0x58));
    eax |= esi;
    eax |= edi;
    al |= *((rsp + 0x40));
    eax |= edx;
label_43:
    if (al != 0) {
        goto label_17;
    }
    *((r9 + 0xa1)) = 1;
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    r8d = 0xffffffa3;
    eax = 0x10;
    goto label_18;
    rax = *((rbx - 0x60));
    __asm ("movdqu xmm0, xmmword [rbx - 0x70]");
    rdi = 0x8000000000000000;
    *((r9 + 0x30)) = rax;
    rax = *((rbx - 0x30));
    __asm ("movups xmmword [r9 + 0x20], xmm0");
    rdx = rax;
    rdx = -rdx;
    *((r9 + 0x38)) = rdx;
    if (rax == rdi) {
        goto label_17;
    }
    rax = *((rbx + 8));
    rdx = *((rbx + 8));
    rdx = -rdx;
    *((r9 + 0x40)) = rdx;
    if (rax == rdi) {
        goto label_17;
    }
    rdx = rbx - 0xa8;
    rcx = r14 - 6;
    r8d = 0xffffffa3;
    eax = 0xf;
    goto label_18;
    rax = *((rbx - 0x68));
    __asm ("movdqu xmm7, xmmword [rbx]");
    *((r9 + 0x40)) = rax;
    rax = *((rbx - 0x38));
    __asm ("movups xmmword [r9 + 0x20], xmm7");
    *((r9 + 0x38)) = rax;
label_36:
    rax = *((rbx + 0x10));
    rcx = r14 - 6;
    rdx = rbx - 0xa8;
    r8d = 0xffffffa3;
    *((r9 + 0x30)) = rax;
    eax = 0xe;
    goto label_18;
    rax = *((rbx - 0x30));
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    r8d = 0xffffffa3;
    *((r9 + 0x40)) = rax;
    rax = *(rbx);
    *((r9 + 0x38)) = rax;
    eax = 0xe;
    goto label_18;
    rax = *((rbx - 0xa8));
    __asm ("movdqu xmm0, xmmword [rbx]");
    rcx = r14 - 8;
    rdx = rbx - 0xe0;
    r8d = 0xffffffa3;
    *((r9 + 0x38)) = rax;
    rax = *((rbx - 0x68));
    __asm ("movups xmmword [r9 + 0x20], xmm0");
    *((r9 + 0x40)) = rax;
    rax = *((rbx + 0x10));
    *((r9 + 0x30)) = rax;
    eax = 0xe;
    goto label_18;
    rax = *((rbx - 0x38));
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    r8d = 0xffffffa3;
    *((r9 + 0x38)) = rax;
    rax = *((rbx + 8));
    *((r9 + 0x40)) = rax;
    eax = 0xe;
    goto label_18;
    rdi = 0x8000000000000000;
    rax = *((rbx - 0x70));
    *((r9 + 0x38)) = rax;
    rax = *((rbx - 0x30));
    rdx = *((rbx - 0x30));
    rdx = -rdx;
    *((r9 + 0x40)) = rdx;
    if (rax == rdi) {
        goto label_17;
    }
    rax = *((rbx + 8));
    rdx = *((rbx + 8));
    rdx = -rdx;
    *((r9 + 0x28)) = rdx;
    if (rax != rdi) {
        goto label_36;
    }
    goto label_17;
    rdi = 0x8000000000000000;
    rax = *((rbx - 0x68));
    *((r9 + 0x40)) = rax;
    rax = *((rbx - 0x38));
    *((r9 + 0x38)) = rax;
    rax = *((rbx + 8));
    rdx = *((rbx + 8));
    rdx = -rdx;
    *((r9 + 0x28)) = rdx;
    if (rax != rdi) {
        goto label_36;
    }
    goto label_17;
    rcx = *((rbx - 0xd0));
    eax = *((r9 + 0xd9));
    if (rcx <= 3) {
        goto label_81;
    }
    if (al != 0) {
        goto label_82;
    }
label_44:
    rax = *((rbx - 0xd0));
    __asm ("movdqu xmm0, xmmword [rbx - 0xe0]");
    rcx = r14 - 0xa;
    rdx = rbx - 0x118;
    r8d = 0xffffffa3;
    *((r9 + 0x30)) = rax;
    rax = *((rbx - 0x68));
    __asm ("movups xmmword [r9 + 0x20], xmm0");
    *((r9 + 0x38)) = rax;
    rax = *((rbx + 8));
    *((r9 + 0x40)) = rax;
    eax = 0xe;
    goto label_18;
    rax = *((rbx - 0x68));
    rcx = r14 - 6;
    rdx = rbx - 0xa8;
    r8d = 0xffffffa3;
    *((r9 + 0x38)) = rax;
    rax = *((rbx + 8));
    *((r9 + 0x40)) = rax;
    eax = 0xe;
    goto label_18;
    rax = *((rbx - 0x30));
    goto label_37;
    *((rsp + 0x48)) = r10;
    rdi = r9;
    *((rsp + 0x48)) = r11;
    *((rsp + 0x58)) = r9;
    fcn_00403110 (rdi, rsi, rdx, rcx, r8, r9);
    eax = *((rbx + 0x30));
    r8d = 0;
    r9 = *((rsp + 0x38));
    eax += *((r9 + 0x98));
    __asm ("seto r8b");
    *((r9 + 0x98)) = eax;
    rax = *((r9 + 0x90));
    rax += *((rbx + 0x28));
    rdx = rax;
    __asm ("seto al");
    edi = 0;
    *((r9 + 0x90)) = rdx;
    rdx = *((r9 + 0x88));
    eax = (int32_t) al;
    rdx += *((rbx + 0x20));
    __asm ("seto dil");
    *((r9 + 0x88)) = rdx;
    esi = 0;
    rdx = *((r9 + 0x80));
    rdx += *((rbx + 0x18));
    __asm ("seto sil");
    *((r9 + 0x80)) = rdx;
    r11d = 0;
    rdx = *((r9 + 0x78));
    rdx += *((rbx + 0x10));
    __asm ("seto r11b");
    *((r9 + 0x78)) = rdx;
    r10d = 0;
    rdx = *((r9 + 0x70));
    rdx += *((rbx + 8));
    __asm ("seto r10b");
    *((r9 + 0x70)) = rdx;
    ecx = 0;
    rdx = *((r9 + 0x68));
    rdx += *(rbx);
    __asm ("seto cl");
    eax |= r8d;
    *((r9 + 0x68)) = rdx;
    eax |= edi;
    edi = r10d;
    eax |= esi;
    eax |= r11d;
    dil |= al;
    if (dil != 0) {
        goto label_17;
    }
    if (rcx != 0) {
        goto label_17;
    }
    *((r9 + 0xa1)) = 1;
    rdx = rbx - 0x70;
    rcx = r14 - 4;
    r8d = 0xffffffa3;
    eax = 0x18;
    r11 = *((rsp + 0x40));
    r10 = *((rsp + 0x48));
    goto label_18;
    *((rsp + 0x48)) = r10;
    rdi = r9;
    *((rsp + 0x48)) = r11;
    *((rsp + 0x58)) = r9;
    fcn_00403110 (rdi, rsi, rdx, rcx, r8, r9);
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    r8d = 0xffffffa3;
    eax = 0x17;
    r9 = *((rsp + 0x38));
    r11 = *((rsp + 0x40));
    r10 = *((rsp + 0x48));
    goto label_18;
    r15 = *((rbx + 8));
    rdx = rbx - 0x38;
    rcx = r14 - 2;
    r10d = 0;
    r8d = 0xffffffa4;
    eax = 0x16;
    goto label_18;
label_77:
    r8d = *((r8 + str.OCDEFGH:IdkJKenL12efqM_N___AB___ABeeoZ_jpXo));
    goto label_15;
label_55:
    eax = 2;
    goto label_38;
label_67:
    r8d = *((rsp + 8));
    rbx = *((rsp + 0x10));
    r9 = rbp;
    do {
        edx = *(rbp);
        rbp += 4;
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
    rdx = rbp + 2;
    if ((eax & 0x8080) == 0) {
    }
    edi = eax;
    dil += al;
    eax = 1;
    rbp -= 3;
    rbp -= r13;
    if (rbp != 3) {
        eax = 0;
        if (rbp != 4) {
            goto label_83;
        }
        eax = 0;
        al = (*((rsp + 0x83)) == 0x2e) ? 1 : 0;
    }
label_83:
    ecx = 0x413320;
    *((rsp + 0x10)) = rbx;
    esi = "JANUARY";
    *((rsp + 0x38)) = rbp;
    rbx = rcx;
    *((rsp + 8)) = r8d;
    *((rsp + 0x18)) = r9;
    while (ebp != 0) {
        eax = strncmp (r13, rsi, 3);
        dl = (eax == 0) ? 1 : 0;
label_39:
        if (dl != 0) {
            goto label_84;
        }
        rbx += 0x10;
        rsi = *(rbx);
        if (rsi == 0) {
            goto label_85;
        }
    }
    eax = strcmp (r13, rsi);
    dl = (eax == 0) ? 1 : 0;
    goto label_39;
label_56:
    eax = 0;
    goto label_38;
label_76:
    rax = (int64_t) edx;
    *(r9) = rbp;
    *((rsp + 0x28)) = rax;
    eax -= eax;
    eax = ~eax;
    *((rsp + 0xd0)) = rcx;
    eax += 0x16;
    ebp -= ebp;
    ebp = ~ebp;
    ebp += 0x115;
    goto label_12;
label_78:
    if (edx != 0) {
        goto label_20;
    }
    *(r9) = rbp;
    eax = 0x15;
    *((rsp + 0xd0)) = rcx;
    *((rsp + 0x28)) = 0;
    goto label_12;
label_42:
    ecx = 4;
    rsi = r13;
    edi = 0x411b32;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    ecx = 0x413260;
    esi = "YEAR";
    al = (edx > 0) ? 1 : 0;
    if (al == 0) {
        goto label_40;
    }
    *((rsp + 0x10)) = rbx;
    rbx = rcx;
    *((rsp + 8)) = r8d;
    *((rsp + 0x38)) = dl;
    *((rsp + 0x18)) = r9;
    while (eax != 0) {
        rbx += 0x10;
        rsi = *(rbx);
        if (rsi == 0) {
            goto label_86;
        }
        eax = strcmp (r13, rsi);
    }
label_84:
    rcx = rbx;
    r8 = *((rsp + 8));
    rbx = *((rsp + 0x10));
    r9 = *((rsp + 0x18));
    rdx = *((rcx + 0xc));
    ebp = *((rcx + 8));
    goto label_41;
label_85:
    r9 = *((rsp + 0x18));
    r8d = *((rsp + 8));
    rbx = *((rsp + 0x10));
    rbp = *((rsp + 0x38));
    *((rsp + 0x10)) = dl;
    rdi = r9;
    *((rsp + 0x40)) = r8d;
    *((rsp + 8)) = r9;
    rax = fcn_00403630 (rdi, r13);
    r9 = *((rsp + 8));
    edx = *((rsp + 0x10));
    r8 = *((rsp + 0x40));
    if (rax == 0) {
        goto label_42;
    }
label_46:
    rdx = *((rax + 0xc));
    ebp = *((rax + 8));
    goto label_41;
label_81:
    rdi = *((rbx - 0xd8));
    *((rsp + 0x38)) = rdi;
    while (1) {
        rax = *((rsp + 0x38));
        __asm ("movdqu xmm7, xmmword [rbx]");
        rcx = r14 - 0xa;
        rdx = rbx - 0x118;
        r8d = 0xffffffa3;
        *((r9 + 0x38)) = rax;
        rax = *((rbx - 0x68));
        __asm ("movups xmmword [r9 + 0x20], xmm7");
        *((r9 + 0x40)) = rax;
        rax = *((rbx + 0x10));
        *((r9 + 0x30)) = rax;
        eax = 0xe;
        goto label_18;
label_80:
        rdx = *((rsp + 0x58));
        ecx -= r8d;
        __asm ("seto r8b");
        *((r9 + 0x98)) = ecx;
        ecx = 0;
        rdx -= rdi;
        r8d = (int32_t) r8b;
        __asm ("seto cl");
        *((r9 + 0x90)) = rdx;
        edx = 0;
        rax -= rsi;
        __asm ("seto dl");
        *((r9 + 0x88)) = rax;
        esi = 0;
        rax = *((rsp + 0x60));
        rax -= *((rsp + 0x50));
        __asm ("seto sil");
        *((r9 + 0x80)) = rax;
        edi = 0;
        rax = *((rsp + 0x68));
        rax -= *((rsp + 0x48));
        __asm ("seto dil");
        *((r9 + 0x78)) = rax;
        rax = *((rsp + 0x70));
        *((rsp + 0x48)) = rdi;
        edi = 0;
        rax -= *((rsp + 0x40));
        __asm ("seto dil");
        *((r9 + 0x70)) = rax;
        rax = *((rsp + 0x78));
        *((rsp + 0x40)) = rdi;
        edi = 0;
        rax -= *((rsp + 0x38));
        *((r9 + 0x68)) = rax;
        eax = ecx;
        __asm ("seto dil");
        eax |= r8d;
        eax |= edx;
        eax |= esi;
        al |= *((rsp + 0x48));
        al |= *((rsp + 0x40));
        eax |= edi;
        goto label_43;
label_82:
        rax = *((rbx - 0xd8));
        edx = 5;
        *((rsp + 0x58)) = r9;
        *((rsp + 0x50)) = r10;
        *((rsp + 0x48)) = r11;
        *((rsp + 0x40)) = rcx;
        *((rsp + 0x38)) = rax;
        rax = dcgettext (0, "warning: value %ld has %ld digits. Assuming YYYY/MM/DD\n");
        eax = 0;
        fcn_00403400 (rax, *((rsp + 0x38)), rcx, *((rsp + 0x40)), r8, r9);
        r9 = *((rsp + 0x58));
        r10 = *((rsp + 0x50));
        r11 = *((rsp + 0x48));
        goto label_44;
        edx = 5;
        *((rsp + 0x50)) = r9;
        *((rsp + 0x48)) = r10;
        *((rsp + 0x40)) = r11;
        rax = dcgettext (0, "warning: value %ld has less than 4 digits. Assuming MM/DD/YY[YY]\n");
        eax = 0;
        fcn_00403400 (rax, *((rsp + 0x38)), rdx, rcx, r8, r9);
        r9 = *((rsp + 0x50));
        r10 = *((rsp + 0x48));
        r11 = *((rsp + 0x40));
    }
label_86:
    rcx = r13 + rbp - 1;
    r8d = *((rsp + 8));
    rbx = *((rsp + 0x10));
    edx = *((rsp + 0x38));
    r9 = *((rsp + 0x18));
    if (*(rcx) == 0x53) {
        goto label_87;
    }
label_51:
    ecx = 0x413100;
    *((rsp + 8)) = r15d;
    esi = "TOMORROW";
    r15 = rbx;
    *((rsp + 0x10)) = rbp;
    rbx = rcx;
    while (eax != 0) {
        rbx += 0x10;
        rsi = *(rbx);
        if (rsi == 0) {
            goto label_88;
        }
        *((rsp + 0x38)) = r9;
        *((rsp + 0x18)) = dl;
        eax = strcmp (r13, rsi);
        edx = *((rsp + 0x18));
        r9 = *((rsp + 0x38));
    }
    rcx = rbx;
    r8 = (int64_t) ebp;
    rbx = r15;
    r15d = *((rsp + 8));
    rdx = *((rcx + 0xc));
    ebp = *((rcx + 8));
    goto label_41;
label_87:
    r10d = 0x413260;
    *((rsp + 8)) = r15d;
    esi = "YEAR";
    r15 = rbx;
    *((rsp + 0x10)) = rbp;
    rbx = r10;
    *(rcx) = 0;
    while (eax != 0) {
        rbx += 0x10;
        rsi = *(rbx);
        if (rsi == 0) {
            goto label_89;
        }
        *((rsp + 0x40)) = r9;
        *((rsp + 0x38)) = rcx;
        *((rsp + 0x18)) = dl;
        eax = strcmp (r13, rsi);
        edx = *((rsp + 0x18));
        rcx = *((rsp + 0x38));
        r9 = *((rsp + 0x40));
    }
    r10 = rbx;
    r8 = (int64_t) ebp;
    rbx = r15;
    r15d = *((rsp + 8));
    rdx = *((r10 + 0xc));
    ebp = *((r10 + 8));
    goto label_41;
label_88:
    r8 = (int64_t) ebp;
    rbp = *((rsp + 0x10));
    rbx = r15;
    eax = *((rsp + 0x80));
    r15d = *((rsp + 8));
    if (rbp == 1) {
        goto label_90;
    }
label_48:
    rsi = r13;
    rcx = r13;
    if (al != 0) {
        goto label_91;
    }
    goto label_92;
    do {
        rcx++;
label_45:
        rsi++;
        eax = *(rsi);
        *(rcx) = al;
        if (al == 0) {
            goto label_93;
        }
label_91:
    } while (al != 0x2e);
    edx = 1;
    goto label_45;
label_93:
    if (dl == 0) {
        goto label_92;
    }
    rdi = r9;
    *((rsp + 0x10)) = r8d;
    *((rsp + 8)) = r9;
    rax = fcn_00403630 (rdi, r13);
    r9 = *((rsp + 8));
    r8 = *((rsp + 0x10));
    if (rax != 0) {
        goto label_46;
    }
label_92:
    if (*((r9 + 0xd9)) == 0) {
        goto label_47;
    }
    edx = 5;
    *((rsp + 0x10)) = r9;
    *((rsp + 8)) = r8d;
    rax = dcgettext (0, "error: unknown word '%s'\n");
    eax = 0;
    fcn_00403400 (rax, r13, rdx, rcx, r8, r9);
    eax = 2;
    r8 = *((rsp + 8));
    r9 = *((rsp + 0x10));
    goto label_12;
label_60:
    eax = *((rcx + 0x413580));
    rcx = r14;
    eax -= 0x1c;
    rdx = (int64_t) eax;
    r8d = *((rdx + 0x413700));
    rdx = rsi * 0x38;
    rsi += rsi;
    rcx -= rsi;
    rbx -= rdx;
    rdx = rbx;
    goto label_18;
label_90:
    ecx = 0x412c20;
    if (al == 0x41) {
        goto label_94;
label_49:
        rcx = rdi;
    }
    rsi = *((rcx + 0x10));
    rdi = rcx + 0x10;
    if (rsi == 0) {
        goto label_48;
    }
    if (*(rsi) != al) {
        goto label_49;
    }
    rdx = *((rcx + 0x1c));
    ebp = *((rcx + 0x18));
    goto label_41;
label_94:
    *((rsp + 0xd0)) = 0xfffffffffffff1f0;
    goto label_50;
label_89:
    r8d = ebp;
    rbx = r15;
    rbp = *((rsp + 0x10));
    r15d = *((rsp + 8));
    *(rcx) = 0x53;
    goto label_51;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x406030 */
#include <stdint.h>
 
void fcn_00406030 (uint32_t arg1, int64_t arg3, int64_t arg4, int64_t arg5, void * arg6, char * s) {
    void * ptr;
    void * var_10h;
    int64_t var_18h;
    uint32_t var_20h;
    uint32_t var_28h;
    size_t var_30h;
    uint32_t var_38h;
    int64_t var_44h;
    uint32_t var_48h;
    int64_t var_50h;
    int64_t var_54h;
    int64_t var_58h;
    int64_t var_5ch;
    int64_t var_60h;
    int64_t var_70h;
    int64_t var_90h;
    int64_t var_94h;
    uint32_t var_98h;
    uint32_t var_9ch;
    uint32_t var_a0h;
    int64_t var_a4h;
    uint32_t var_a8h;
    uint32_t var_b0h;
    int64_t var_b8h;
    int64_t var_d0h;
    int64_t var_d4h;
    int64_t var_d8h;
    int64_t var_dch;
    int64_t var_e0h;
    int64_t var_e4h;
    int64_t var_f0h;
    int64_t var_110h;
    int64_t var_114h;
    int64_t var_118h;
    int64_t var_11ch;
    int64_t var_120h;
    int64_t var_124h;
    int64_t var_130h;
    int64_t var_140h;
    int64_t var_150h;
    int64_t var_170h;
    int64_t var_190h;
    int64_t var_200h;
    int64_t var_270h;
    int64_t var_272h;
    int64_t var_273h;
    int64_t var_290h;
    int64_t var_298h;
    int64_t var_2a0h;
    uint32_t var_2a3h;
    int64_t var_2e0h;
    int64_t var_2e8h;
    int64_t var_2f0h;
    int64_t var_2f4h;
    int64_t var_2f8h;
    int64_t var_2fch;
    int64_t var_308h;
    uint32_t var_310h;
    int64_t var_318h;
    int64_t var_320h;
    int64_t var_328h;
    int64_t var_330h;
    int64_t var_338h;
    int64_t var_340h;
    int64_t var_348h;
    uint32_t var_350h;
    uint32_t var_358h;
    int64_t var_360h;
    int64_t var_368h;
    int64_t var_370h;
    int64_t var_378h;
    uint32_t var_380h;
    uint32_t var_381h;
    uint32_t var_388h;
    int32_t var_390h;
    uint32_t var_398h;
    signed int64_t var_3a0h;
    uint32_t var_3a8h;
    uint32_t var_3b0h;
    int64_t var_3b8h;
    uint32_t var_3b9h;
    int64_t var_3bah;
    int64_t var_3bch;
    int64_t var_3c0h;
    int64_t var_3c8h;
    int64_t var_3d0h;
    uint32_t var_3d4h;
    int64_t var_3d8h;
    int64_t var_3e0h;
    int64_t var_3e4h;
    int64_t var_3e8h;
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rsi = s;
    r14 = r8;
    r13 = rdx;
    *((rsp + 0x28)) = rdi;
    *((rsp + 0x18)) = ecx;
    *((rsp + 0x10)) = r9;
    rax = strlen (rsi);
    *((rsp + 0x30)) = rax;
    if (r13 == 0) {
        goto label_57;
    }
label_8:
    rax = *((r13 + 8));
    rbx = *(r13);
    r12 = rbp;
    *((rsp + 0x20)) = rax;
    eax = *(rbp);
    if (al <= 0x20) {
        rdx = 0x100003e00;
        if (((rdx >> rax) & 1) < 0) {
            goto label_58;
        }
    }
label_1:
    edi = "TZ=\";
    ecx = 4;
    rsi = r12;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (((rdx >> rax) & 1) > 0) ? 1 : 0;
    if (al != 0) {
        goto label_59;
    }
    r15d = *((r12 + 4));
    rsi = r12 + 4;
    if (r15b == 0) {
        goto label_59;
    }
    rdx = rsi;
    eax = r15d;
    edi = 1;
    while (al != 0x5c) {
        if (al == 0x22) {
            goto label_60;
        }
        rax = rdx;
label_0:
        rdx = rax + 1;
        eax = *((rax + 1));
        rdi++;
        if (al == 0) {
            goto label_59;
        }
    }
    rax = rdx + 1;
    edx = *((rdx + 1));
    if (dl == 0x5c) {
        goto label_0;
    }
    if (dl == 0x22) {
        goto label_0;
    }
label_59:
    rax = fcn_0040c180 (r14, r13, rsp + 0x110);
    if (rax == 0) {
        goto label_61;
    }
    *((rsp + 8)) = 0;
    r15 = r14;
label_4:
    xmm0 = 0;
    eax = 0x411c96;
    *((rsp + 0x310)) = 0;
    if (*(r12) == 0) {
        r12 = rax;
    }
    eax = *((rsp + 0x18));
    r10d = 0;
    *((rsp + 0x2fc)) = 2;
    __asm ("movups xmmword [rsp + 0x348], xmm0");
    r11d = 0;
    *((rsp + 0x3b9)) = al;
    rax = *((rsp + 0x124));
    *((rsp + 0x2e0)) = r12;
    r12 = *((rsp + 0x20));
    rax += 0x76c;
    *((rsp + 0x308)) = rax;
    eax = *((rsp + 0x120));
    *((rsp + 0x340)) = r12;
    r12d = 0x76a700;
    eax++;
    __asm ("movups xmmword [rsp + 0x358], xmm0");
    rax = (int64_t) eax;
    __asm ("movups xmmword [rsp + 0x368], xmm0");
    *((rsp + 0x318)) = rax;
    rax = *((rsp + 0x11c));
    *((rsp + 0x378)) = 0;
    *((rsp + 0x320)) = rax;
    rax = *((rsp + 0x118));
    *((rsp + 0x380)) = r10w;
    *((rsp + 0x328)) = rax;
    rax = *((rsp + 0x114));
    *((rsp + 0x388)) = 0;
    *((rsp + 0x330)) = rax;
    rax = *((rsp + 0x110));
    *((rsp + 0x390)) = 0;
    *((rsp + 0x338)) = rax;
    eax = *((rsp + 0x130));
    *((rsp + 0x3a8)) = 0;
    *((rsp + 0xb0)) = eax;
    *((rsp + 0x398)) = 0;
    rdx = *((rsp + 0x140));
    *((rsp + 0x3a0)) = 0;
    *((rsp + 0x3b0)) = 0;
    *((rsp + 0x3b8)) = 0;
    *((rsp + 0x3ba)) = r11w;
    *((rsp + 0x3bc)) = 0;
    *((rsp + 0x3c0)) = 0;
    *((rsp + 0x3c8)) = rdx;
    *((rsp + 0x3d0)) = 0x10d;
    *((rsp + 0x3d4)) = eax;
    *((rsp + 0x3d8)) = 0;
    do {
        rax = (int64_t) r12d;
        rax += rbx;
        if (rax overflow 0) {
            goto label_25;
        }
        *((rsp + 0x190)) = rax;
        rax = fcn_0040c180 (r15, rsp + 0x190, rsp + 0x270);
        if (rax != 0) {
            rax = *((rsp + 0x2a0));
            if (rax == 0) {
                goto label_62;
            }
            edx = *((rsp + 0x290));
            if (edx != *((rsp + 0x3d4))) {
                goto label_63;
            }
        }
label_62:
        r12d += 0x76a700;
    } while (r12d != 0x1da9c00);
label_25:
    rdi = *((rsp + 0x3c8));
    if (rdi != 0) {
        rsi = *((rsp + 0x3d8));
        if (rsi == 0) {
            goto label_5;
        }
        eax = strcmp (rdi, rsi);
        if (eax == 0) {
            goto label_64;
        }
    }
label_5:
    eax = fcn_00403db0 (rsp + 0x2e0, rsi, rdx, rcx, r8, r9);
    if (eax != 0) {
        goto label_65;
    }
    if (*((rsp + 0x3b9)) != 0) {
        goto label_66;
    }
    ebx = *((rsp + 0x380));
    if (bl != 0) {
        goto label_67;
    }
    rax = *((rsp + 0x3a8));
    rdx = *((rsp + 0x3b0));
    rax |= *((rsp + 0x388));
    rdx += *((rsp + 0x398));
    rax |= *((rsp + 0x390));
    rax |= *((rsp + 0x3a0));
    rax |= rdx;
    if (rax > 1) {
        goto label_13;
    }
label_12:
    r12 = *((rsp + 0x308));
    if (r12 < 0) {
        goto label_68;
    }
    if (*((rsp + 0x310)) == 2) {
        goto label_69;
    }
label_23:
    ebp = 0;
    rax = r12 - 0x76c;
    if (r12 >= 0x76c) {
        goto label_70;
    }
    if (rax >= 0) {
        goto label_71;
    }
label_20:
    rdx = (int64_t) eax;
    *((rsp + 0xa4)) = eax;
    edx = 1;
    if (rax != rdx) {
    }
    ebp &= 1;
label_24:
    if (bpl != 0) {
        goto label_72;
    }
    rax = *((rsp + 0x318));
    edx = 0;
    rax += 0xffffffffffffffff;
    rcx = (int64_t) eax;
    __asm ("seto dl");
    esi = eax;
    *((rsp + 0xa0)) = eax;
    ecx = 1;
    if (rax != rcx) {
        edx = ecx;
    }
    ecx = *((rsp + 0x3b9));
    if (edx != 0) {
        goto label_73;
    }
    rax = *((rsp + 0x320));
    rdx = (int64_t) eax;
    *((rsp + 0x9c)) = eax;
    edx = eax;
    al = (rax != rdx) ? 1 : 0;
    eax = (int32_t) al;
    *((rsp + 0x18)) = eax;
    if (rax != rdx) {
        goto label_73;
    }
    rax = *((rsp + 0x3a8));
    if (rax != 0) {
        goto label_74;
    }
    if (*((rsp + 0x381)) == 0) {
        goto label_75;
    }
    if (*((rsp + 0x388)) != 0) {
        goto label_75;
    }
    if (*((rsp + 0x390)) == 0) {
        goto label_74;
    }
    *((rsp + 0x90)) = 0;
    *((rsp + 0x98)) = 0;
    *((rsp + 0x340)) = 0;
    if (cl != 0) {
        goto label_76;
    }
    r9d = 0;
    r8d = 0;
    edi = 0;
label_29:
    *((rsp + 0xb0)) = 0xffffffff;
label_28:
    if (*((rsp + 0x398)) != 0) {
        goto label_77;
    }
    eax = *((rsp + 0xb0));
label_30:
    *((rsp + 0xdc)) = edx;
    edx = *((rsp + 0xa4));
    *((rsp + 0xd0)) = edi;
    *((rsp + 0xe0)) = esi;
    *((rsp + 0xe4)) = edx;
    *((rsp + 0xd4)) = r8d;
    *((rsp + 0xd8)) = r9d;
    *((rsp + 0xf0)) = eax;
    rax = fcn_0040c230 (r15, rsp + 0x90);
    rdx = rsp + 0x90;
    rcx = rax;
    rbx = rax;
    al = fcn_004034c0 (r15, rsp + 0xd0);
    if (al != 0) {
        goto label_78;
    }
    rax = *((rsp + 0x3b0));
    *((rsp + 0x48)) = rax;
    if (rax != 0) {
        goto label_79;
    }
label_26:
    eax = *((rsp + 0xd8));
    r10d = *((rsp + 0xd0));
    r9d = *((rsp + 0x90));
    r8d = *((rsp + 0xd4));
    *((rsp + 0x28)) = eax;
    eax = *((rsp + 0x98));
    ecx = *((rsp + 0x94));
    r13d = *((rsp + 0xe0));
    *((rsp + 0x30)) = eax;
    eax = *((rsp + 0xdc));
    r12d = *((rsp + 0xa0));
    *((rsp + 0x10)) = eax;
    eax = *((rsp + 0x9c));
    *((rsp + 0x20)) = eax;
    eax = *((rsp + 0xe4));
    *((rsp + 0x38)) = eax;
    eax = *((rsp + 0xa4));
    *((rsp + 0x44)) = eax;
    eax = *((rsp + 0x3b9));
    if (r10d != r9d) {
        goto label_80;
    }
    if (r8d != ecx) {
        goto label_80;
    }
    ebx = *((rsp + 0x20));
    if (*((rsp + 0x10)) != ebx) {
        goto label_81;
    }
    ebx = *((rsp + 0x30));
    if (*((rsp + 0x28)) == ebx) {
        goto label_81;
    }
    if (r13d != r12d) {
        goto label_81;
    }
    ebx = *((rsp + 0x44));
    if (*((rsp + 0x38)) != ebx) {
        goto label_81;
    }
    if (al == 0) {
        goto label_13;
    }
    edx = 5;
    rax = dcgettext (0, "error: invalid date/time value:\n");
    rbx = rsp + 0x270;
    eax = 0;
    fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
    rax = fcn_00403880 (rsp + 0xd0, rsp + 0x2e0, rbx);
    edx = 5;
    rax = dcgettext (0, "    user provided time: '%s'\n");
    eax = 0;
    fcn_00403400 (rax, rbp, rdx, rcx, r8, r9);
    rax = fcn_00403880 (rsp + 0x90, rsp + 0x2e0, rbx);
    edx = 5;
    rax = dcgettext (0, "       normalized time: '%s'\n");
    eax = 0;
    fcn_00403400 (rax, rbp, rdx, rcx, r8, r9);
    eax = 0x414b94;
    ecx = 0x411c1b;
    *((rsp + 0x18)) = 1;
    rdx = rax;
label_51:
    r8d = 0x414b94;
label_50:
    esi = 0x414b94;
    edi = 0x411c1b;
    r10d = *((rsp + 0x44));
    if (r13d == r12d) {
        rdi = rsi;
    }
    r9d = "----";
    if (*((rsp + 0x38)) == r10d) {
        r9 = rsi;
    }
    esi = 0x64;
    edx = 1;
    eax = 0;
    ecx = 0x64;
    r8d = "                                 %4s %2s %2s %2s %2s %2s";
    rdi = rbx;
    snprintf_chk ();
    eax = 0x33;
    edx = 0x34;
    if (*((rsp + 0x2a3)) == 0x20) {
        goto label_82;
    }
    goto label_83;
    do {
        rax--;
        if (*((rbx + rax)) != 0x20) {
            goto label_83;
        }
label_82:
        rdx = (int64_t) eax;
    } while (eax != 0);
label_83:
    eax = 0;
    *((rsp + rdx + 0x270)) = 0;
    fcn_00403400 (0x411db2, rbx, rdx, rcx, r8, r9);
    edx = 5;
    rax = dcgettext (0, "     possible reasons:\n");
    eax = 0;
    fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
    ecx = *((rsp + 0x18));
    if (ecx != 0) {
        goto label_84;
    }
label_54:
    ecx = *((rsp + 0x20));
    if (*((rsp + 0x10)) != ecx) {
        if (r13d == r12d) {
            goto label_85;
        }
        edx = 5;
        rax = dcgettext (0, "       invalid day/month combination;\n");
        eax = 0;
        fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
    }
label_85:
    edx = 5;
    rax = dcgettext (0, "       numeric values overflow;\n");
    eax = 0;
    fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
    edx = 5;
    if (*((rsp + 0x48)) == 0) {
        goto label_86;
    }
    rax = dcgettext (0, "incorrect timezone");
label_53:
    eax = 0;
    fcn_00403400 ("       %s\n", rax, rdx, rcx, r8, r9);
label_13:
    ebx = 0;
label_3:
    if (r15 != r14) {
        fcn_0040c160 (r15);
    }
label_7:
    free (*((rsp + 8)));
    eax = ebx;
    return rax;
label_58:
    eax = 1;
label_2:
    r12++;
    ecx = *(r12);
    if (cl > 0x20) {
        goto label_1;
    }
    rsi = rax;
    rsi <<= cl;
    if ((rsi & rdx) == 0) {
        goto label_1;
    }
    goto label_2;
label_65:
    ebx = *((rsp + 0x3b9));
    if (bl == 0) {
        goto label_3;
    }
    rbx = *((rsp + 0x2e0));
    rbp += *((rsp + 0x30));
    edx = 5;
    if (rbx < rbp) {
        goto label_87;
    }
    rax = dcgettext (0, "error: parsing failed\n");
label_14:
    eax = 0;
    ebx = 0;
    fcn_00403400 (rax, rbx, rdx, rcx, r8, r9);
    goto label_3;
label_60:
    if (rdi > 0x64) {
        goto label_88;
    }
    rax = rsp + 0x200;
    *((rsp + 8)) = 0;
    *((rsp + 0x10)) = rax;
label_6:
    rdx = *((rsp + 0x10));
    if (r15b == 0x22) {
        goto label_89;
    }
    do {
        eax = 0;
        al = (r15b == 0x5c) ? 1 : 0;
        rdx++;
        rax += rsi;
        ecx = *(rax);
        r15d = *((rax + 1));
        rsi = rax + 1;
        *((rdx - 1)) = cl;
    } while (r15b != 0x22);
label_89:
    *(rdx) = 0;
    *((rsp + 0x38)) = rsi;
    rax = fcn_0040bea0 (*((rsp + 0x10)));
    r15 = rax;
    if (rax == 0) {
        goto label_90;
    }
    rsi = *((rsp + 0x38));
    eax = *((rsi + 1));
    r12 = rsi + 1;
    if (al > 0x20) {
        goto label_91;
    }
    rdx = 0x100003e00;
    if (((rdx >> rax) & 1) >= 0) {
        goto label_91;
    }
    eax = 1;
    do {
        r12++;
        ecx = *(r12);
        if (cl > 0x20) {
            goto label_91;
        }
        rsi = rax;
        rsi <<= cl;
    } while ((rsi & rdx) != 0);
label_91:
    rax = fcn_0040c180 (r15, r13, rsp + 0x110);
    if (rax != 0) {
        goto label_4;
    }
    ebx = 0;
    goto label_3;
label_64:
    *((rsp + 0x3d4)) = 0xffffffff;
    *((rsp + 0x3d8)) = 0;
    goto label_5;
label_67:
    __asm ("movdqu xmm1, xmmword [rsp + 0x338]");
    rax = *((rsp + 0x28));
    __asm ("movups xmmword [rax], xmm1");
    goto label_3;
label_66:
    edx = 5;
    rax = dcgettext (0, "input timezone: ");
    eax = 0;
    fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
    edx = 5;
    esi = '@timespec' - always UTC";
    if (*((rsp + 0x380)) != 0) {
        goto label_21;
    }
    edx = 5;
    esi = "parsed date/time string";
    if (*((rsp + 0x3b0)) != 0) {
        goto label_21;
    }
    rbx = *((rsp + 0x10));
    if (rbx == 0) {
        goto label_92;
    }
    if (r14 == r15) {
        goto label_93;
    }
    edx = 5;
    rax = dcgettext (0, "TZ=\"%s\" in date string");
    rcx = rbx;
label_22:
    rdi = stderr;
    rdx = rax;
    esi = 1;
    eax = 0;
    fprintf_chk ();
    goto label_94;
label_88:
    *((rsp + 0x38)) = rsi;
    rax = malloc (rdi);
    rsi = *((rsp + 0x38));
    *((rsp + 0x10)) = rax;
    *((rsp + 8)) = rax;
    if (rax != 0) {
        goto label_6;
    }
label_61:
    *((rsp + 8)) = 0;
    ebx = 0;
    goto label_7;
label_57:
    rdi = rsp + 0x60;
    r13 = rsp + 0x60;
    fcn_004030d0 (rdi);
    goto label_8;
label_92:
    edx = 5;
label_21:
    rax = dcgettext (0, "system default");
    rdi = stderr;
    esi = 1;
    rdx = rax;
    eax = 0;
    fprintf_chk ();
label_94:
    rax = *((rsp + 0x3b0));
    if (*((rsp + 0x398)) == 0) {
        goto label_95;
    }
    if (rax == 0) {
        goto label_96;
    }
label_11:
    rax = fcn_00403290 (*((rsp + 0x2f8)), rsp + 0x70);
    edx = " (%s)";
    esi = 1;
    rdi = stderr;
    rcx = rax;
    eax = 0;
    fprintf_chk ();
label_10:
label_9:
    fputc (0xa, *(obj.stderr));
    ebx = *((rsp + 0x3b9));
    if (*((rsp + 0x380)) == 0) {
        goto label_97;
    }
    __asm ("movdqu xmm2, xmmword [rsp + 0x338]");
    rax = *((rsp + 0x28));
    __asm ("movups xmmword [rax], xmm2");
label_27:
    if (bl == 0) {
        goto label_98;
    }
    edx = 5;
    esi = "timezone: system default\n";
    if (*((rsp + 0x10)) != 0) {
        rsi = *((rsp + 0x10));
        edi = "UTC0";
        ecx = 5;
        edx = 5;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (*((rsp + 0x10)) > 0) ? 1 : 0;
        if (al != 0) {
            goto label_99;
        }
    }
    rax = dcgettext (0, "timezone: Universal Time\n");
    eax = 0;
    fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
label_15:
    r13 = *((rsp + 0x28));
    edx = 5;
    rbp = *(r13);
    r12 = *((r13 + 8));
    rax = dcgettext (0, "final: %ld.%09d (epoch-seconds)\n");
    eax = 0;
    fcn_00403400 (rax, rbp, r12d, rcx, r8, r9);
    rsi = rsp + 0x150;
    rdi = r13;
    rax = gmtime_r ();
    if (rax != 0) {
        rax = fcn_00403880 (rsp + 0x150, 0, rsp + 0x190);
        edx = 5;
        rax = dcgettext (0, "final: %s (UTC)\n");
        eax = 0;
        fcn_00403400 (rax, rbp, rdx, rcx, r8, r9);
    }
    rax = fcn_0040c180 (r15, *((rsp + 0x28)), rsp + 0x270);
    if (rax == 0) {
        goto label_3;
    }
    rax = fcn_00403290 (*((rsp + 0x298)), rsp + 0x70);
    r12 = rax;
    rax = fcn_00403880 (rsp + 0x270, 0, rsp + 0x190);
    edx = 5;
    rax = dcgettext (0, "final: %s (UTC%s)\n");
    eax = 0;
    fcn_00403400 (rax, rbp, r12, rcx, r8, r9);
    goto label_3;
label_96:
    r9d = *((rsp + 0x2f4));
    rsi = stderr;
    if (r9d <= 0) {
        goto label_9;
    }
    fwrite (", dst", 1, 5, rsi);
    rax = *((rsp + 0x3b0));
label_95:
    if (rax == 0) {
        goto label_10;
    }
    goto label_11;
label_97:
    rsi = *((rsp + 0x3a8));
    rcx = *((rsp + 0x388));
    rdx = *((rsp + 0x3b0));
    rdx += *((rsp + 0x398));
    rax = rsi;
    rax |= rcx;
    rax |= *((rsp + 0x390));
    rax |= *((rsp + 0x3a0));
    rax |= rdx;
    if (rax <= 1) {
        goto label_12;
    }
    if (bl == 0) {
        goto label_13;
    }
    if (rsi > 1) {
        goto label_100;
    }
label_19:
    if (rcx > 1) {
        goto label_101;
    }
label_18:
    if (*((rsp + 0x390)) > 1) {
        goto label_102;
    }
label_17:
    if (*((rsp + 0x3a0)) > 1) {
        goto label_103;
    }
label_16:
    rax = *((rsp + 0x3b0));
    rax += *((rsp + 0x398));
    if (rax <= 1) {
        goto label_13;
    }
    eax = 0;
    ebx = 0;
    fcn_00403400 ("error: seen multiple time-zone parts\n", rsi, rdx, rcx, r8, r9);
    goto label_3;
label_87:
    dcgettext (0, "error: parsing failed, stopped at '%s'\n");
    goto label_14;
label_99:
    rax = dcgettext (0, "timezone: TZ=\"%s\" environment value\n");
    eax = 0;
    eax = fcn_00403400 (rax, *((rsp + 0x10)), rdx, rcx, r8, r9);
    goto label_15;
label_103:
    eax = 0;
    eax = fcn_00403400 ("error: seen multiple daylight-saving parts\n", rsi, rdx, rcx, r8, r9);
    goto label_16;
label_102:
    eax = 0;
    eax = fcn_00403400 ("error: seen multiple days parts\n", rsi, rdx, rcx, r8, r9);
    goto label_17;
label_101:
    eax = 0;
    eax = fcn_00403400 ("error: seen multiple date parts\n", rsi, rdx, rcx, r8, r9);
    goto label_18;
label_100:
    eax = 0;
    rax = fcn_00403400 ("error: seen multiple time parts\n", rsi, rdx, rcx, r8, r9);
    rcx = *((rsp + 0x388));
    goto label_19;
label_70:
    if (rax >= 0) {
        goto label_20;
    }
label_71:
    goto label_20;
label_93:
    rsi = *((rsp + 0x10));
    edi = "UTC0";
    ecx = 5;
    edx = 5;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    esi = "TZ=\"UTC0\" environment value or -u";
    al = (rax > 0) ? 1 : 0;
    if (al == 0) {
        goto label_21;
    }
    dcgettext (0, "TZ=\"%s\" environment value");
    rcx = *((rsp + 0x10));
    goto label_22;
label_69:
    eax = 0x76c;
    if (r12 >= 0x45) {
    }
    rbp += r12;
    if (bl != 0) {
        goto label_104;
    }
    r12 = rbp;
    goto label_23;
label_72:
    if (bl != 0) {
        goto label_105;
    }
label_31:
    ecx = *((rsp + 0x3b9));
label_73:
    edx = 5;
    esi = "error: year, month, or day overflow\n";
    if (cl == 0) {
        goto label_13;
    }
label_42:
    ebx = 0;
    rax = dcgettext (0, rsi);
    eax = 0;
    fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
    goto label_3;
label_68:
    rax = 0xfffffffffffff894;
    ebp = 0;
    rax -= r12;
    rdx = (int64_t) eax;
    __asm ("seto bpl");
    *((rsp + 0xa4)) = eax;
    eax = 1;
    if (rax != rdx) {
    }
    goto label_24;
label_90:
    ebx = 0;
    goto label_7;
label_63:
    *((rsp + 0x3d8)) = rax;
    *((rsp + 0x3e0)) = 0x10d;
    *((rsp + 0x3e4)) = edx;
    *((rsp + 0x3e8)) = 0;
    goto label_25;
label_79:
    esi = 0x5858;
    *((rsp + 0x272)) = 0x58;
    *((rsp + 0x270)) = si;
    fcn_00403290 (*((rsp + 0x2f8)), rsp + 0x273);
    rax = fcn_0040bea0 (rsp + 0x270);
    r12 = rax;
    if (rax == 0) {
        goto label_106;
    }
    rax = *((rsp + 0xd0));
    *((rsp + 0x90)) = rax;
    rax = *((rsp + 0xd8));
    *((rsp + 0x98)) = rax;
    rax = *((rsp + 0xe0));
    *((rsp + 0xa0)) = rax;
    eax = *((rsp + 0xf0));
    *((rsp + 0xb0)) = eax;
    rax = fcn_0040c230 (r12, rsp + 0x90);
    rdx = rsp + 0x90;
    rcx = rax;
    rbx = rax;
    eax = fcn_004034c0 (r12, rsp + 0xd0);
    r13d = eax;
    fcn_0040c160 (r12);
    if (r13b == 0) {
        goto label_26;
    }
label_78:
    if (*((rsp + 0x390)) == 0) {
        goto label_107;
    }
    if (*((rsp + 0x388)) != 0) {
        goto label_108;
    }
    rax = *((rsp + 0x2e8));
    if (rax > 0) {
        ecx = *((rsp + 0x2f0));
        if (*((rsp + 0xa8)) == ecx) {
            goto label_109;
        }
        rax--;
    }
label_109:
    rsi = rax * 7;
    if (rax overflow 0) {
        goto label_110;
    }
    ecx = *((rsp + 0x2f0));
    ecx -= *((rsp + 0xa8));
    edx = 0x92492493;
    ecx += 7;
    eax = ecx;
    edx:eax = eax * edx;
    eax = rdx + rcx;
    edx = ecx;
    edx >>= 0x1f;
    eax >>= 2;
    eax -= edx;
    edx = rax*8;
    edx -= eax;
    ecx -= edx;
    rax = (int64_t) ecx;
    rax += rsi;
    if (rax overflow 0) {
        goto label_110;
    }
    rdx = *((rsp + 0x9c));
    rax += rdx;
    __asm ("seto dl");
    rcx = (int64_t) eax;
    *((rsp + 0x9c)) = eax;
    edx = (int32_t) dl;
    ecx = 1;
    if (rax != rcx) {
        edx = ecx;
    }
    if (edx != 0) {
        goto label_110;
    }
    *((rsp + 0xb0)) = 0xffffffff;
    rax = fcn_0040c230 (r15, rsp + 0x90);
    rbx = rax;
    if (rax == -1) {
        goto label_110;
    }
    if (*((rsp + 0x3b9)) != 0) {
        goto label_111;
    }
label_33:
    rdi = *((rsp + 0x350));
    rdx = *((rsp + 0x348));
    rax = rdi;
    rax |= rdx;
    rax |= *((rsp + 0x358));
    if (rax != 0) {
        goto label_112;
    }
    eax = 0;
label_34:
    if (*((rsp + 0x3b0)) != 0) {
        rdx = *((rsp + 0x2f8));
        ecx = 0;
        r12 = rdx;
        rdx -= *((rsp + 0xb8));
        __asm ("seto cl");
        rbx -= rdx;
        __asm ("seto dl");
        edx = (int32_t) dl;
        rcx |= rdx;
        if (rcx != 0) {
            goto label_113;
        }
    }
label_36:
    if (al != 0) {
        goto label_114;
    }
label_35:
    rax = *((rsp + 0x360));
    r11 = rax * 0xe10;
    *((rsp + 0x18)) = rax;
    if (al overflow 0) {
        goto label_13;
    }
    rsi = *((rsp + 0x378));
    r9 = *((rsp + 0x340));
    rdi = 0x112e0be826d694b3;
    r9 += rsi;
    r8 = rsi;
    rax = r9;
    r10 = r9;
    rdx:rax = rax * rdi;
    rax = rdx;
    rdx = r9;
    rdx >>= 0x3f;
    rax >>= 0x1a;
    rax -= rdx;
    rdx = 0x44b82fa09b5a53;
    rax *= 0x3b9aca00;
    r10 -= rax;
    r10 += 0x3b9aca00;
    rcx = r10;
    rcx >>= 9;
    rax = rcx;
    rdx:rax = rax * rdx;
    rcx = rdx;
    rcx >>= 0xb;
    rcx *= 0x3b9aca00;
    r10 -= rcx;
    r9 -= r10;
    rcx = r10;
    rax = r9;
    r9 >>= 0x3f;
    rdx:rax = rax * rdi;
    rax = rdx;
    rax >>= 0x1a;
    eax -= r9d;
    rbx += r11;
    if (rbx overflow 0) {
        goto label_13;
    }
    r12 = *((rsp + 0x368));
    rdx = r12 * 0x3c;
    if (rbx overflow 0) {
        goto label_13;
    }
label_46:
    rbx += rdx;
    if (rbx overflow 0) {
        goto label_45;
    }
    r13 = *((rsp + 0x370));
    rbx += r13;
    if (rbx overflow 0) {
        goto label_45;
    }
    rax = (int64_t) eax;
    rbx += rax;
    if (rbx overflow 0) {
        goto label_45;
    }
    rax = *((rsp + 0x28));
    *(rax) = rbx;
    *((rax + 8)) = rcx;
    if (bpl != 0) {
        rax = r13;
        rax |= r12;
        rsi |= rax;
        rsi |= *((rsp + 0x18));
        if (rsi != 0) {
            goto label_115;
        }
    }
label_56:
    ebx = *((rsp + 0x3b9));
    goto label_27;
label_98:
    ebx = 1;
    goto label_3;
label_74:
    r9d = *((rsp + 0x2fc));
    rbx = *((rsp + 0x328));
    if (r9d == 0) {
        goto label_116;
    }
    if (r9d == 1) {
        goto label_117;
    }
    if (rbx > 0x17) {
        goto label_118;
    }
label_40:
    r9d = ebx;
label_38:
    *((rsp + 0x98)) = r9d;
label_39:
    r10 = *((rsp + 0x330));
    r11 = *((rsp + 0x338));
    r8d = r10d;
    *((rsp + 0x94)) = r10d;
    edi = r11d;
    *((rsp + 0x90)) = r11d;
    if (cl != 0) {
        goto label_119;
    }
    r9d = *((rsp + 0x98));
label_32:
    rcx = *((rsp + 0x388));
    rcx |= *((rsp + 0x390));
    rcx |= rax;
    if (rcx == 0) {
        goto label_28;
    }
    goto label_29;
label_77:
    eax = *((rsp + 0x2f4));
    *((rsp + 0xb0)) = eax;
    goto label_30;
label_105:
    edx = 5;
    rax = dcgettext (0, "error: out-of-range year %ld\n");
    eax = 0;
    fcn_00403400 (rax, r12, rdx, rcx, r8, r9);
    goto label_31;
label_75:
    *((rsp + 0x90)) = 0;
    *((rsp + 0x98)) = 0;
    *((rsp + 0x340)) = 0;
    if (cl != 0) {
        goto label_76;
    }
    r9d = 0;
    r8d = 0;
    edi = 0;
    goto label_32;
label_111:
    r12 = rsp + 0x190;
    rax = fcn_00403880 (rsp + 0x90, rsp + 0x2e0, r12);
    r12 = rax;
    rax = fcn_00403920 (rsp + 0x2e0, rsp + 0x270);
    edx = 5;
    r13 = rax;
    rax = dcgettext (0, "new start date: '%s' is '%s'\n");
    eax = 0;
    fcn_00403400 (rax, r13, r12, rcx, r8, r9);
label_107:
    if (*((rsp + 0x3b9)) == 0) {
        goto label_33;
    }
    rax = *((rsp + 0x390));
    if (*((rsp + 0x388)) != 0) {
        goto label_120;
    }
    r12 = rsp + 0x190;
    if (rax == 0) {
        goto label_121;
    }
label_37:
    rax = fcn_00403880 (rsp + 0x90, rsp + 0x2e0, r12);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "starting date/time: '%s'\n");
    eax = 0;
    fcn_00403400 (rax, r12, rdx, rcx, r8, r9);
    rdx = *((rsp + 0x348));
    rdi = *((rsp + 0x350));
    rcx = *((rsp + 0x358));
    eax = *((rsp + 0x3b9));
    rsi = rdx;
    rsi |= rdi;
    r11 = rsi;
    r11 |= rcx;
    if (r11 == 0) {
        goto label_34;
    }
    if (al == 0) {
        goto label_112;
    }
    if (rsi == 0) {
        goto label_122;
    }
    if (*((rsp + 0x9c)) != 0xf) {
        edx = 5;
        rax = dcgettext (0, "warning: when adding relative months/years, it is recommended to specify the 15th of the months\n");
        eax = 0;
        fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
        rcx = *((rsp + 0x358));
    }
    if (rcx != 0) {
        goto label_122;
    }
label_47:
    edx = 0;
    rax = *((rsp + 0xa4));
    rax += *((rsp + 0x348));
    rcx = (int64_t) eax;
    __asm ("seto dl");
    if (rax != rcx) {
        goto label_123;
    }
    if (edx != 0) {
        goto label_123;
    }
    *((rsp + 0x18)) = eax;
    rdi = *((rsp + 0x350));
label_41:
    rax = *((rsp + 0xa0));
    rax += rdi;
    r13 = rax;
    __asm ("seto al");
    rdx = (int64_t) r13d;
    eax = (int32_t) al;
    if (r13 != rdx) {
        goto label_123;
    }
    if (eax != 0) {
        goto label_123;
    }
    eax = 0;
    r12 = *((rsp + 0x9c));
    r12 += *((rsp + 0x358));
    rdx = (int64_t) r12d;
    __asm ("seto al");
    if (r12 != rdx) {
        goto label_123;
    }
    if (eax != 0) {
        goto label_123;
    }
    eax = *((rsp + 0x18));
    *((rsp + 0xa0)) = r13d;
    *((rsp + 0x9c)) = r12d;
    *((rsp + 0xa4)) = eax;
    rax = *((rsp + 0xd0));
    *((rsp + 0x90)) = rax;
    eax = *((rsp + 0xd8));
    *((rsp + 0x98)) = eax;
    eax = *((rsp + 0xf0));
    *((rsp + 0xb0)) = eax;
    rax = fcn_0040c230 (r15, rsp + 0x90);
    rbx = rax;
    if (rax == -1) {
        goto label_124;
    }
    eax = *((rsp + 0x3b9));
    if (al != 0) {
        goto label_125;
    }
    if (*((rsp + 0x3b0)) == 0) {
        goto label_35;
    }
    ecx = 0;
    rdx = *((rsp + 0x2f8));
    rdx -= *((rsp + 0xb8));
    __asm ("seto cl");
    rbx -= rdx;
    __asm ("seto dl");
    edx = (int32_t) dl;
    rcx |= rdx;
    if (rcx == 0) {
        goto label_36;
    }
    ebx = 0;
    goto label_3;
label_104:
    edx = 5;
    rax = dcgettext (0, "warning: adjusting year value %ld to %ld\n");
    rdx = rbp;
    r12 = rbp;
    eax = 0;
    fcn_00403400 (rax, r12, rdx, rcx, r8, r9);
    goto label_23;
label_123:
    if (*((rsp + 0x3b9)) == 0) {
        goto label_13;
    }
    edx = 5;
    ebx = 0;
    rax = dcgettext (0, "error: %s:%d\n");
    eax = 0;
    fcn_00403400 (rax, "parse-datetime.y", 0x877, rcx, r8, r9);
    goto label_3;
label_108:
    if (*((rsp + 0x3b9)) == 0) {
        goto label_33;
    }
label_43:
    r12 = rsp + 0x190;
label_49:
    rax = fcn_00403920 (rsp + 0x2e0, rsp + 0x270);
    edx = 5;
    r13 = rax;
    rax = dcgettext (0, "warning: day (%s) ignored when explicit dates are given\n");
    eax = 0;
    fcn_00403400 (rax, r13, rdx, rcx, r8, r9);
    goto label_37;
label_117:
    rdi = rbx - 1;
    r9d = rbx + 0xc;
    if (rdi <= 0xa) {
        goto label_38;
    }
    if (rbx != 0xc) {
        goto label_126;
    }
    *((rsp + 0x98)) = 0xc;
    r9d = 0xc;
    goto label_39;
label_116:
    rdi = rbx - 1;
    if (rdi <= 0xa) {
        goto label_40;
    }
    if (rbx != 0xc) {
        goto label_127;
    }
    *((rsp + 0x98)) = 0;
    goto label_39;
label_110:
    if (*((rsp + 0x3b9)) == 0) {
        goto label_13;
    }
    rax = fcn_00403880 (rsp + 0x90, rsp + 0x2e0, rsp + 0x190);
    r12d = *((rsp + 0x2f0));
    r13 = rax;
    rbp = *((rsp + 0x2e8));
    rax = fcn_00403920 (rsp + 0x2e0, rsp + 0x270);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "error: day '%s' (day ordinal=%ld number=%d) resulted in an invalid date: '%s'\n");
    eax = 0;
    ebx = 0;
    fcn_00403400 (rax, rbx, rbp, r12d, r13, r9);
    goto label_3;
label_112:
    rax = *((rsp + 0xa4));
    rax += rdx;
    __asm ("seto dl");
    rcx = (int64_t) eax;
    edx = (int32_t) dl;
    if (rax != rcx) {
        goto label_13;
    }
    if (edx != 0) {
        goto label_13;
    }
    *((rsp + 0x18)) = eax;
    goto label_41;
label_76:
    eax = 0;
    fcn_00403400 ("warning: using midnight as starting time: 00:00:00\n", rsi, rdx, rcx, r8, r9);
    do {
        rax = *((rsp + 0x3a8));
        edi = *((rsp + 0x90));
        r8d = *((rsp + 0x94));
        r9d = *((rsp + 0x98));
        edx = *((rsp + 0x9c));
        esi = *((rsp + 0xa0));
        goto label_32;
label_119:
        r12 = rsp + 0x190;
        r8d = "%02d:%02d:%02d";
        edx = 1;
        rdi = r12;
        eax = 0;
        ecx = 0x64;
        esi = 0x64;
        snprintf_chk ();
        edx = 5;
        if (*((rsp + 0x3a8)) == 0) {
            goto label_128;
        }
        rax = dcgettext (0, "using specified time as starting value: '%s'\n");
label_48:
        eax = 0;
        rax = fcn_00403400 (rax, r12, rdx, rcx, r8, r9);
    } while (1);
label_44:
    ebp = *((rsp + 0x3b9));
label_45:
    if (bpl == 0) {
        goto label_13;
    }
    edx = 5;
    esi = "error: adding relative time caused an overflow\n";
    goto label_42;
label_120:
    if (rax != 0) {
        goto label_43;
    }
    r12 = rsp + 0x190;
    goto label_37;
label_114:
    rax = fcn_00403880 (rsp + 0x90, rsp + 0x2e0, rsp + 0x190);
    edx = 5;
    rax = dcgettext (0, '%s' = %ld epoch-seconds\n");
    eax = 0;
    fcn_00403400 (rax, rbp, rbx, rcx, r8, r9);
    rax = *((rsp + 0x360));
    r9 = rax * 0xe10;
    *((rsp + 0x18)) = rax;
    if (rax overflow 0) {
        goto label_44;
    }
    rsi = *((rsp + 0x378));
    r10 = *((rsp + 0x340));
    rdi = 0x112e0be826d694b3;
    ebp = *((rsp + 0x3b9));
    r10 += rsi;
    r8 = rsi;
    rax = r10;
    r11 = r10;
    rdx:rax = rax * rdi;
    rax = rdx;
    rdx = r10;
    rdx >>= 0x3f;
    rax >>= 0x1a;
    rax -= rdx;
    rdx = 0x44b82fa09b5a53;
    rax *= 0x3b9aca00;
    r11 -= rax;
    r11 += 0x3b9aca00;
    rcx = r11;
    rcx >>= 9;
    rax = rcx;
    rdx:rax = rax * rdx;
    rcx = rdx;
    rcx >>= 0xb;
    rcx *= 0x3b9aca00;
    r11 -= rcx;
    r10 -= r11;
    rcx = r11;
    rax = r10;
    r10 >>= 0x3f;
    rdx:rax = rax * rdi;
    rax = rdx;
    rax >>= 0x1a;
    eax -= r10d;
    rbx += r9;
    if (rbx overflow 0) {
        goto label_45;
    }
    r12 = *((rsp + 0x368));
    rdx = r12 * 0x3c;
    if (rbx !overflow 0) {
        goto label_46;
    }
    goto label_45;
label_122:
    if (*((rsp + 0x98)) == 0xc) {
        goto label_47;
    }
    edx = 5;
    rax = dcgettext (0, "warning: when adding relative days, it is recommended to specify noon\n");
    eax = 0;
    fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
    goto label_47;
label_128:
    dcgettext (0, "using current time as starting value: '%s'\n");
    goto label_48;
label_118:
    *((rsp + 0x98)) = 0xffffffff;
label_55:
    if (cl == 0) {
        goto label_13;
    }
    edx = 5;
    rax = dcgettext (0, "error: invalid hour %ld%s\n");
    ebx = 0;
    eax = 0;
    al = fcn_00403400 (rax, rbx, rbp, rcx, r8, r9);
    goto label_3;
label_113:
    if (al == 0) {
        goto label_13;
    }
    edx = 5;
    ebx = 0;
    rax = dcgettext (0, "error: timezone %d caused time_t overflow\n");
    eax = 0;
    fcn_00403400 (rax, r12d, rdx, rcx, r8, r9);
    goto label_3;
label_121:
    edx = *((rsp + 0x9c));
    eax = *((rsp + 0xa0));
    *((rsp + 0x18)) = edx;
    r13d = rax + 1;
    rax = fcn_00403390 (*((rsp + 0xa4)), rsp + 0x150);
    edx = *((rsp + 0x18));
    r8d = "(Y-M-D) %s-%02d-%02d";
    rdi = r12;
    r9 = rax;
    ecx = 0x64;
    esi = 0x64;
    eax = 0;
    edx = 1;
    snprintf_chk ();
    edx = 5;
    rax = dcgettext (0, "using current date as starting value: '%s'\n");
    eax = 0;
    fcn_00403400 (rax, r12, rdx, rcx, r8, r9);
    if (*((rsp + 0x390)) == 0) {
        goto label_37;
    }
    if (*((rsp + 0x388)) != 0) {
        goto label_49;
    }
    goto label_37;
label_106:
    if (*((rsp + 0x3b9)) == 0) {
        goto label_13;
    }
    edx = 5;
    ebx = 0;
    rax = dcgettext (0, "error: tzalloc (\"%s\") failed\n");
    eax = 0;
    al = fcn_00403400 (rax, rsp + 0x270, rdx, rcx, r8, r9);
    goto label_3;
label_80:
    *((rsp + 0x5c)) = ecx;
    *((rsp + 0x58)) = r8d;
    *((rsp + 0x54)) = r9d;
    *((rsp + 0x50)) = r10d;
    if (al == 0) {
        goto label_13;
    }
    edx = 5;
    rax = dcgettext (0, "error: invalid date/time value:\n");
    rbx = rsp + 0x270;
    eax = 0;
    fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
    rax = fcn_00403880 (rsp + 0xd0, rsp + 0x2e0, rbx);
    edx = 5;
    rax = dcgettext (0, "    user provided time: '%s'\n");
    eax = 0;
    fcn_00403400 (rax, rbp, rdx, rcx, r8, r9);
    rax = fcn_00403880 (rsp + 0x90, rsp + 0x2e0, rbx);
    edx = 5;
    rax = dcgettext (0, "       normalized time: '%s'\n");
    eax = 0;
    fcn_00403400 (rax, rbp, rdx, rcx, r8, r9);
    r10d = *((rsp + 0x50));
    r9d = *((rsp + 0x54));
    if (r10d == r9d) {
        goto label_129;
    }
    r8d = *((rsp + 0x58));
    ecx = *((rsp + 0x5c));
    edx = 0x411c1b;
    eax = 0x414b94;
    if (r8d != ecx) {
        rax = rdx;
    }
label_52:
    esi = *((rsp + 0x30));
    ecx = 0x414b94;
    esi = 0x411c1b;
    if (*((rsp + 0x28)) != esi) {
        rcx = rsi;
    }
    r8 = rsi;
    edi = *((rsp + 0x20));
    if (*((rsp + 0x10)) != edi) {
        goto label_50;
    }
    goto label_51;
label_125:
    rcx = *((rsp + 0x358));
    rax = *((rsp + 0x350));
    edx = 5;
    *((rsp + 0x38)) = rcx;
    rcx = *((rsp + 0x348));
    *((rsp + 0x20)) = rax;
    *((rsp + 0x30)) = rcx;
    rax = dcgettext (0, "after date adjustment (%+ld years, %+ld months, %+ld days),\n");
    eax = 0;
    fcn_00403400 (rax, *((rsp + 0x30)), *((rsp + 0x20)), *((rsp + 0x38)), r8, r9);
    rax = fcn_00403880 (rsp + 0x90, rsp + 0x2e0, rsp + 0x190);
    edx = 5;
    *((rsp + 0x20)) = rax;
    rax = dcgettext (0, "    new date/time = '%s'\n");
    eax = 0;
    fcn_00403400 (rax, *((rsp + 0x20)), rdx, rcx, r8, r9);
    eax = *((rsp + 0xf0));
    if (eax != 0xffffffff) {
        if (eax == *((rsp + 0xb0))) {
            goto label_130;
        }
        edx = 5;
        rax = dcgettext (0, "warning: daylight saving time changed after date adjustment\n");
        eax = 0;
        fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
    }
label_130:
    if (*((rsp + 0x358)) == 0) {
        if (r12d == *((rsp + 0x9c))) {
            if (*((rsp + 0x350)) != 0) {
                goto label_131;
            }
            if (r13d == *((rsp + 0xa0))) {
                goto label_131;
            }
        }
        edx = 5;
        rax = dcgettext (0, "warning: month/year adjustment resulted in shifted dates:\n");
        eax = 0;
        fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
        rax = fcn_00403390 (*((rsp + 0x18)), rsp + 0x150);
        edx = 5;
        *((rsp + 0x18)) = rax;
        rax = dcgettext (0, "     adjusted Y M D: %s %02d %02d\n");
        eax = 0;
        fcn_00403400 (rax, *((rsp + 0x18)), r13 + 1, r12d, r8, r9);
        ecx = *((rsp + 0x9c));
        eax = *((rsp + 0xa0));
        *((rsp + 0x18)) = ecx;
        r12d = rax + 1;
        rax = fcn_00403390 (*((rsp + 0xa4)), rsp + 0x150);
        edx = 5;
        r13 = rax;
        rax = dcgettext (0, "   normalized Y M D: %s %02d %02d\n");
        eax = 0;
        fcn_00403400 (rax, r13, r12d, *((rsp + 0x18)), r8, r9);
    }
label_131:
    eax = *((rsp + 0x3b9));
    goto label_34;
label_81:
    if (al == 0) {
        goto label_13;
    }
    edx = 5;
    rax = dcgettext (0, "error: invalid date/time value:\n");
    rbx = rsp + 0x270;
    eax = 0;
    fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
    rax = fcn_00403880 (rsp + 0xd0, rsp + 0x2e0, rbx);
    edx = 5;
    rax = dcgettext (0, "    user provided time: '%s'\n");
    eax = 0;
    fcn_00403400 (rax, rbp, rdx, rcx, r8, r9);
    rax = fcn_00403880 (rsp + 0x90, rsp + 0x2e0, rbx);
    edx = 5;
    rax = dcgettext (0, "       normalized time: '%s'\n");
    eax = 0;
    fcn_00403400 (rax, rbp, rdx, rcx, r8, r9);
    edx = 0x414b94;
    rax = rdx;
    goto label_52;
label_86:
    dcgettext (0, "missing timezone");
    goto label_53;
label_84:
    edx = 5;
    rax = dcgettext (0, "       non-existing due to daylight-saving time;\n");
    eax = 0;
    fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
    goto label_54;
label_127:
    *((rsp + 0x98)) = 0xffffffff;
    goto label_55;
label_126:
    *((rsp + 0x98)) = 0xffffffff;
    goto label_55;
label_124:
    if (*((rsp + 0x3b9)) == 0) {
        goto label_13;
    }
    rax = fcn_00403880 (rsp + 0x90, rsp + 0x2e0, rsp + 0x190);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "error: adding relative date resulted in an invalid date: '%s'\n");
    ebx = 0;
    eax = 0;
    fcn_00403400 (rax, rbx, rdx, rcx, r8, r9);
    goto label_3;
label_115:
    edx = 5;
    *((rsp + 0x20)) = r8d;
    rax = dcgettext (0, "after time adjustment (%+ld hours, %+ld minutes, %+ld seconds, %+d ns),\n");
    eax = 0;
    fcn_00403400 (rax, *((rsp + 0x18)), r12, r13, *((rsp + 0x20)), r9);
    edx = 5;
    rax = dcgettext (0, "    new time = %ld epoch-seconds\n");
    eax = 0;
    fcn_00403400 (rax, rbx, rdx, rcx, r8, r9);
    if (*((rsp + 0xb0)) == 0xffffffff) {
        goto label_56;
    }
    rax = fcn_0040c180 (r15, *((rsp + 0x28)), rsp + 0x150);
    if (rax == 0) {
        goto label_56;
    }
    eax = *((rsp + 0x170));
    if (*((rsp + 0xb0)) == eax) {
        goto label_56;
    }
    edx = 5;
    rax = dcgettext (0, "warning: daylight saving time changed after time adjustment\n");
    eax = 0;
    fcn_00403400 (rax, rsi, rdx, rcx, r8, r9);
    goto label_56;
label_129:
    edx = 0x414b94;
    eax = 0x411c1b;
    goto label_52;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x408000 */
#include <stdint.h>
 
uint64_t fcn_00408000 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r15 = rdx;
    r14 = rsi;
    r13 = rdi;
    ebp = 0;
    rax = getenv (0x411eae);
    rdi = rax;
    r12 = rax;
    rax = fcn_0040bea0 (rdi);
    if (rax != 0) {
        rbx = rax;
        eax = fcn_00406030 (r13, r14, r15, 0, rax, r12);
        fcn_0040c160 (rbx);
    }
    eax = ebp;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x408070 */
#include <stdint.h>
 
uint64_t fcn_00408070 (int64_t arg1, signed int64_t arg2, uint32_t arg3, int64_t arg4) {
    time_t * timer;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    if (rdx != 1) {
        if (rdx == 2) {
            ecx &= 2;
            if (ecx == 0) {
                goto label_0;
            }
            eax = *(rsi) * 0x64;
            eax += *((rsi + 4));
            eax -= 0x76c;
            *(rdi) = eax;
            eax = 1;
            return eax;
        }
        rbx = rdi;
        time (rsp + 8);
        rax = localtime (rsp + 8);
        if (rax != 0) {
            eax = *((rax + 0x14));
            *(rbx) = eax;
            eax = 1;
        }
        return rax;
    }
    edx = *(rsi);
    eax = 1;
    *(rdi) = edx;
    if (*(rsi) <= 0x44) {
        ecx &= 8;
        if (ecx != 0) {
            goto label_0;
        }
        edx += 0x64;
        *(rdi) = edx;
        return rax;
    }
    return rax;
label_0:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x408100 */
#include <stdint.h>
 
uint64_t fcn_00408100 (int64_t arg1, int64_t arg3, char * s) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_24h;
    int64_t var_28h;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_34h;
    int64_t var_50h;
    int64_t var_60h;
    int64_t var_64h;
    int64_t var_68h;
    int64_t var_6ch;
    int64_t var_70h;
    int64_t var_80h;
    rdi = arg1;
    rdx = arg3;
    rsi = s;
label_2:
    r12 = rdi;
    rdi = rsi;
    rbx = rsi;
    rax = strlen (rdi);
    r13 = rax;
    if ((bpl & 4) == 0) {
        goto label_8;
    }
    rax = strchr (rbx, 0x2e);
    r14 = rax;
    if (rax == 0) {
        goto label_4;
    }
    rax -= rbx;
    r13 -= rax;
    if (r13 == 3) {
        goto label_9;
    }
    do {
label_0:
        eax = 0;
label_3:
        return rax;
label_9:
        r13 = rax;
label_4:
        rax = r13 - 8;
    } while (rax > 4);
    if ((r13b & 1) != 0) {
        goto label_0;
    }
    rax = rbx;
    rcx = r13 + rbx;
label_1:
    edx = *(rax);
    edx -= 0x30;
    if (edx > 9) {
        goto label_0;
    }
    rax++;
    if (rcx != rax) {
        goto label_1;
    }
    r13 >>= 1;
    edx = 0;
    do {
        eax = *((rbx + rdx*2));
        ecx = rax * 5;
        eax = *((rbx + rdx*2 + 1));
        eax = rax + rcx*2 - 0x30;
        *((rsp + rdx*4 + 0x60)) = eax;
        rdx++;
    } while (r13 != rdx);
    rdx = r13 - 4;
    if ((bpl & 1) == 0) {
        goto label_10;
    }
    eax = *((rsp + 0x60));
    eax--;
    *((rsp + 0x30)) = eax;
    eax = *((rsp + 0x64));
    *((rsp + 0x2c)) = eax;
    eax = *((rsp + 0x68));
    *((rsp + 0x28)) = eax;
    eax = *((rsp + 0x6c));
    *((rsp + 0x24)) = eax;
    al = fcn_00408070 (rsp + 0x34, rsp + 0x70, rdx, ebp);
    if (al == 0) {
        goto label_0;
    }
label_5:
    if (r14 == 0) {
        goto label_11;
    }
    eax = *((r14 + 1));
    eax -= 0x30;
    if (eax > 9) {
        goto label_0;
    }
    edx = *((r14 + 2));
    ecx = rdx - 0x30;
    if (ecx > 9) {
        goto label_0;
    }
    eax = rax * 5;
    eax = rdx + rax*2 - 0x30;
    *((rsp + 0x20)) = eax;
label_7:
    *((rsp + 0x60)) = eax;
    eax = *((rsp + 0x24));
    *((rsp + 0x80)) = 0xffffffff;
    *((rsp + 0x64)) = eax;
    rax = *((rsp + 0x28));
    *((rsp + 0x68)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x70)) = rax;
    rax = fcn_0040bdb0 (rsp + 0x60);
    rdx = rsp + 0x60;
    *(rsp) = rax;
    if (rax == -1) {
        goto label_12;
    }
label_6:
    eax = *((rsp + 0x34));
    ecx = *((rsp + 0x30));
    eax ^= *((rdx + 0x14));
    ecx ^= *((rdx + 0x10));
    eax |= ecx;
    ecx = *((rsp + 0x2c));
    ecx ^= *((rdx + 0xc));
    eax |= ecx;
    esi = *((rsp + 0x20));
    ecx = *((rsp + 0x28));
    edi = *(rdx);
    ecx ^= *((rdx + 8));
    eax |= ecx;
    ecx = *((rsp + 0x24));
    ecx ^= *((rdx + 4));
    eax |= ecx;
    edi ^= esi;
    eax |= edi;
    if (eax == 0) {
        goto label_13;
    }
    if (esi != 0x3c) {
        goto label_0;
    }
    edx = 0x10;
    rsi = rbx;
    rdi = rsp + 0x10;
    stpcpy_chk ();
    edx = 0x3935;
    *((rax - 2)) = dx;
    *(rax) = 0;
    al = fcn_00408100 (rsp + 8, rsp + 0x10, ebp);
    goto label_2;
    if (al == 0) {
        goto label_3;
    }
label_13:
    rax = *(rsp);
    *(r12) = rax;
    eax = 1;
    return rax;
label_8:
    r14d = 0;
    goto label_4;
label_10:
    al = fcn_00408070 (rsp + 0x34, rsp + 0x60, rdx, ebp);
    if (al == 0) {
        goto label_0;
    }
    rax = rsp + r13*4 + 0x50;
    esi = *(rax);
    edx = rsi - 1;
    *((rsp + 0x30)) = edx;
    edx = *((rax + 4));
    *((rsp + 0x2c)) = edx;
    edx = *((rax + 8));
    eax = *((rax + 0xc));
    *((rsp + 0x28)) = edx;
    *((rsp + 0x24)) = eax;
    goto label_5;
label_12:
    rax = localtime (rsp);
    rdx = rax;
    if (rax != 0) {
        goto label_6;
    }
    goto label_0;
label_11:
    *((rsp + 0x20)) = 0;
    eax = 0;
    goto label_7;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x4083b0 */
#include <stdint.h>
 
uint64_t fcn_004083b0 (void) {
    char * * endptr;
    ebx = 0x31069;
    rax = getenv ("_POSIX2_VERSION");
    if (rax == 0) {
        goto label_0;
    }
    while (*(rdx) != 0) {
label_0:
        eax = ebx;
        return rax;
        rax = strtol (rax, rsp + 8, 0xa);
        rdx = *((rsp + 8));
    }
    if (rax >= 0xffffffff80000000) {
        ebx = 0x7fffffff;
        if (rax <= 0x7fffffff) {
            rbx = rax;
        }
        eax = ebx;
        return rax;
    }
    ebx = 0x80000000;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x408430 */
#include <stdint.h>
 
uint64_t fcn_00408430 (char ** arg1) {
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
            edi = 0x413988;
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
        *(0x006183b8) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x4084d0 */
#include <stdint.h>
 
uint64_t fcn_004084d0 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_0040c4f0 ();
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
        eax = 0x41398c;
        ebx = 0x413997;
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
        eax = 0x413990;
        ebx = 0x413993;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x414b77;
    ebx = 0x411c21;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x4085d0 */
#include <stdint.h>
 
uint64_t fcn_004085d0 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        /* [13] -r-x section size 61784 named .text */
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
    /* switch table (11 cases) at 0x413a00 */
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
    *((rsp + 0x50)) = 0x414b77;
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
        /* switch table (127 cases) at 0x413a58 */
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
    rax = fcn_004085d0 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x413e50 */
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
    /* switch table (127 cases) at 0x414248 */
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
    *((rsp + 0x50)) = 0x414b77;
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
        rax = fcn_0040b670 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x414b77;
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
        *((rsp + 0x50)) = 0x411c21;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_004084d0 (0x41399b, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_004084d0 (0x414b77, r13d);
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
        *((rsp + 0x50)) = 0x411c21;
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
        *((rsp + 0x50)) = 0x414b77;
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
    *((rsp + 0x50)) = 0x411c21;
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
    rax = fcn_004085d0 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x414b77;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x409800 */
#include <stdint.h>
 
uint64_t fcn_00409800 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x006182f8);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x00618310) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x618300) {
        goto label_2;
    }
    rax = fcn_0040a670 (rbx, rsi);
    *(0x006182f8) = rax;
    rbx = rax;
    do {
        rdi = *(0x00618310);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x00618310) = r12d;
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
        rax = fcn_004085d0 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x6183c0) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_0040a610 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_004085d0 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_0040a670 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x00618300]");
        rbx = rax;
        *(0x006182f8) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_0040a860 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x409d20 */
#include <stdint.h>
 
int64_t fcn_00409d20 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_00409800 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x409e00 */
#include <stdint.h>
 
void fcn_00409e00 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = rsi;
    esi = edi;
    edi = 0;
    return void (*0x409d20)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x409ea0 */
#include <stdint.h>
 
int64_t fcn_00409ea0 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x006184c0]");
        __asm ("movdqa xmm1, xmmword [0x006184d0]");
        __asm ("movdqa xmm2, xmmword [0x006184e0]");
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
        fcn_00409800 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40a030 */
#include <stdint.h>
 
void fcn_0040a030 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 0x6182c0;
    rdx = 0xffffffffffffffff;
    return void (*0x409800)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40a050 */
#include <stdint.h>
 
void fcn_0040a050 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x6182c0;
    rdx = 0xffffffffffffffff;
    edi = 0;
    return void (*0x409800)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40a070 */
#include <stdint.h>
 
void fcn_0040a070 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x4146eb);
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
        /* switch table (10 cases) at 0x4149d8 */
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
    void (*0x401d60)() ();
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
    void (*0x401d60)() ();
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
    void (*0x401d60)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40a4d0 */
#include <stdint.h>
 
uint64_t fcn_0040a4d0 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_0040a070 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40a610 */
#include <stdint.h>
 
uint64_t fcn_0040a610 (int64_t arg1) {
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
    return fcn_0040a860 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40a670 */
#include <stdint.h>
 
uint64_t fcn_0040a670 (int64_t arg1, int64_t arg2) {
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
    return fcn_0040a860 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40a810 */
#include <stdint.h>
 
uint64_t fcn_0040a810 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_0040a610 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40a860 */
#include <stdint.h>
 
uint64_t fcn_0040a860 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x006182a0), 0, 0x411a7c);
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40a8a0 */
#include <stdint.h>
 
uint64_t fcn_0040a8a0 (int64_t arg1, int64_t arg2) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40a980 */
#include <stdint.h>
 
int64_t fcn_0040a980 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, signed int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40afa0 */
#include <stdint.h>
 
uint64_t fcn_0040afa0 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x411c1b;
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
            fcn_0040a8a0 (r12, rbx);
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
        fcn_0040a8a0 (r12, rbx);
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
    eax = fcn_0040a980 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_0040a980 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40b570 */
#include <stdint.h>
 
int32_t fcn_0040b570 (int64_t arg_10h) {
    eax = *(0x0061831c);
    *(0x00618500) = eax;
    eax = *(0x00618318);
    *(0x00618504) = eax;
    eax = *((rsp + 0x10));
    fcn_0040afa0 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0061831c) = edx;
    rdx = imp.__libc_start_main;
    *(0x00618550) = rdx;
    edx = imp.__libc_start_main;
    *(0x00618314) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40b5f0 */
#include <stdint.h>
 
void fcn_0040b5f0 (void) {
    r9d = 0;
    fcn_0040b570 (rdi);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40b670 */
#include <stdint.h>
 
uint64_t fcn_0040b670 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_0040c490 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40b6f0 */
#include <stdint.h>
 
uint64_t fcn_0040b6f0 (int64_t arg_20h, int64_t arg_28h, int64_t arg_30h, int64_t arg_38h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40b810 */
#include <stdint.h>
 
int64_t fcn_0040b810 (int64_t arg_10h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = fcn_0040b6f0 (rdi, rsi, rdx, rcx, r8, *((rax + 0x14)));
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40b8b0 */
#include <stdint.h>
 
int64_t fcn_0040b8b0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40bdb0 */
#include <stdint.h>
 
int64_t fcn_0040bdb0 (int64_t arg1) {
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
    eax = *((rcx + rcx + 0x414ba0));
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
    rax = fcn_0040b6f0 (rdi, rsi, *((rsp + 0x38)), *((rsp + 0x2c)), r8d, r9);
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
        rax = fcn_0040b8b0 (*((rsp + 0x10)), rsp + 0x50, rsp + 0x60);
        r15 = *((rsp + 0x50));
        rax = fcn_0040b810 (rbx, *((rsp + 0x30)), *((rsp + 0x28)), *((rsp + 0x1c)), *((rsp + 0x2c)), r15);
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
    fcn_0040b8b0 (*((rsp + 0x10)), rsp + 0x58, rsp + 0xa0);
    eax = *((rsp + 0xc0));
    dl = (eax == 0) ? 1 : 0;
    if (bpl != dl) {
        if (eax >= 0) {
            goto label_14;
        }
    }
    rbx = *((rsp + 0x28));
    rax = rsp + 0xa8;
    rax = fcn_0040b810 (rbx, *((rsp + 0x30)), *((rsp + 0x28)), *((rsp + 0x1c)), *((rsp + 0x2c)), *((rsp + 0x68)));
    *((rsp + 0x50)) = rax;
    fcn_0040b8b0 (*((rsp + 0x10)), rsp + 0x50, rsp + 0x60);
    rax = *((rsp + 0x50));
    goto label_3;
label_14:
    rax = *((rsp + 0x50));
    goto label_5;
    rbx = rdi;
    tzset ();
    rdi = rbx;
    edx = 0x618538;
    esi = imp.localtime_r;
    goto label_6;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40bdd0 */
#include <stdint.h>
 
uint32_t fcn_0040bdd0 (char * value) {
    rdi = value;
    if (*((rdi + 8)) != 0) {
        goto label_0;
    }
    edi = 0x411eae;
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
        setenv (0x411eae, rdi + 9, 1);
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40be20 */
#include <stdint.h>
 
void fcn_0040be20 (int64_t arg1) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40be50 */
#include <stdint.h>
 
uint64_t fcn_0040be50 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    rax = errno_location ();
    rbx = rax;
    r13d = *(rax);
    eax = fcn_0040bdd0 (r12);
    if (al == 0) {
        r13d = *(rbx);
    }
    fcn_0040be20 (r12);
    *(rbx) = r13d;
    eax = ebp;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40bea0 */
#include <stdint.h>
 
uint64_t fcn_0040bea0 (uint32_t arg1) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40bf30 */
#include <stdint.h>
 
int64_t fcn_0040bf30 (int64_t arg1, uint32_t arg2) {
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
        ebx = 0x414b94;
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
    rax = fcn_0040bea0 (r12);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40c0b0 */
#include <stdint.h>
 
uint64_t fcn_0040c0b0 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    rax = getenv (0x411eae);
    if (rax == 0) {
        goto label_1;
    }
    while (eax != 0) {
label_0:
        rax = fcn_0040bea0 (rbp);
        rbx = rax;
        if (rax != 0) {
            al = fcn_0040bdd0 (r12);
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
        fcn_0040be20 (rbx);
    }
    ebx = 0;
    *(rbp) = r12d;
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40c160 */
#include <stdint.h>
 
void fcn_0040c160 (uint32_t arg1) {
    rdi = arg1;
    if (rdi != 1) {
        void (*0x40be20)() ();
    }
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40c180 */
#include <stdint.h>
 
uint64_t fcn_0040c180 (int64_t arg1, uint32_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rsi;
    if (rdi == 0) {
        goto label_1;
    }
    rbx = rdx;
    rax = fcn_0040c0b0 (rdi);
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
    al = fcn_0040bf30 (rbp, rbx);
    if (al == 0) {
        goto label_2;
    }
    while (al != 0) {
        rax = rbx;
        return rax;
label_2:
        if (r13 != 1) {
            eax = fcn_0040be50 (r13);
        }
label_0:
        eax = 0;
        return rax;
        al = fcn_0040be50 (r13);
    }
    goto label_0;
label_1:
    rdi = r12;
    rsi = rdx;
    return gmtime_r ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40c230 */
#include <stdint.h>
 
uint64_t fcn_0040c230 (tm * arg1, char * arg2) {
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
    rax = fcn_0040c0b0 (rdi);
    r12 = rax;
    if (rax == 0) {
        goto label_4;
    }
    rax = fcn_0040bdb0 (rbx);
    *((rsp + 8)) = rax;
    if (rax == -1) {
        goto label_5;
    }
label_1:
    al = fcn_0040bf30 (rbp, rbx);
    if (al != 0) {
        goto label_0;
    }
    *((rsp + 8)) = 0xffffffffffffffff;
    do {
label_0:
        if (r12 != 1) {
            al = fcn_0040be50 (r12);
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
    fcn_0040c350 (rsi);
    return rax;
label_4:
    rax = 0xffffffffffffffff;
    goto label_2;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40c350 */
#include <stdint.h>
 
void fcn_0040c350 (int64_t arg1) {
    rdi = arg1;
    *((rdi + 0x20)) = 0;
    edx = 0x618540;
    esi = imp.gmtime_r;
    return void (*0x40b970)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40c370 */
#include <stdint.h>
 
uint64_t fcn_0040c370 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = rdi;
    r12 = rsp + 0x10;
    *((rsp + 8)) = 0x7d0;
    rax = fcn_0040e420 (r12, rsp + 8, rsi, rdx);
    rbx = *((rsp + 8));
    if (rax == 0) {
        goto label_1;
    }
    rdi = rax;
    rax = fwrite (rdi, 1, rbx, r13);
    if (rax < rbx) {
        goto label_2;
    }
    if (rbp != r12) {
        free (rbp);
    }
    if (rbx > 0x7fffffff) {
        goto label_3;
    }
    do {
label_0:
        eax = ebx;
        return rax;
label_2:
        ebx = 0xffffffff;
    } while (rbp == r12);
    rax = errno_location ();
    r13d = *(rax);
    r12 = rax;
    free (rbp);
    *(r12) = r13d;
    goto label_0;
label_3:
    errno_location ();
    *(rax) = 0x4b;
label_1:
    ebx = 0xffffffff;
    fcn_0040e410 (r13);
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40c430 */
#include <stdint.h>
 
uint64_t fcn_0040c430 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_0040e2f0 (rbp);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40c490 */
#include <stdint.h>
 
uint64_t fcn_0040c490 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x412020;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40c4f0 */
#include <stdint.h>
 
uint64_t fcn_0040c4f0 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x414b94;
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
        r15d = 0x414b94;
label_2:
        *(0x00618548) = r15;
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
        r15d = 0x414b94;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x411c0d;
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
    fcn_0040e2f0 (rbx);
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
        r15d = 0x414b94;
        rbx = rax;
        free (r15);
        fcn_0040e2f0 (r13);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40ca60 */
#include <stdint.h>
 
uint64_t fcn_0040ca60 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40cab0 */
#include <stdint.h>
 
uint64_t fcn_0040cab0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40cb00 */
#include <stdint.h>
 
void fcn_0040cb00 (int64_t arg_4d8h_2, tm * arg_4d0h, int64_t arg_4d8h, int64_t arg1, char * arg11, int64_t arg2, char * arg3, tm * arg4, int64_t arg6, char * arg7, int64_t arg9) {
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
    eax = 0x414b94;
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
    /* switch table (123 cases) at 0x414c80 */
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
        fcn_0040cab0 (rdi, rsi, rdx);
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
    rax = fcn_0040c230 (*((rsp + 0x4d0)), rsp + 0x90);
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
    rax = fcn_0040cb00 (0, 0xffffffffffffffff, *((rsp + 0x40)), *((rsp + 0x18)), r13d, *((rsp + 0x28)));
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
        fcn_0040cb00 (r15, r11, *((rsp + 0x40)), *((rsp + 0x18)), r13d, *((rsp + 0x28)));
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
        fcn_0040cab0 (rdi, rsi, rdx);
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
        fcn_0040cab0 (rdi, rsi, rdx);
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
    *((rsp + 0x30)) = 0x411b21;
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
    fcn_0040ca60 (rdi, rsi, rdx);
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
        fcn_0040ca60 (rdi, rsi, rdx);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40e2d0 */
#include <stdint.h>
 
void fcn_0040e2d0 (int64_t arg5, int64_t arg6) {
    int64_t var_fh;
    r8 = arg5;
    r9 = arg6;
    *((rsp + 0xf)) = 0;
    fcn_0040cb00 (rdi, rsi, rdx, rcx, 0, rsp + 0x1f);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40e2f0 */
#include <stdint.h>
 
uint64_t fcn_0040e2f0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_0040e370 (rbx);
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
    void (*0x401a30)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40e370 */
#include <stdint.h>
 
uint32_t fcn_0040e370 (int64_t arg1) {
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
    void (*0x401c50)() ();
label_1:
    fcn_0040e3b0 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40e3b0 */
#include <stdint.h>
 
int64_t fcn_0040e3b0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
        void (*0x401d00)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40e410 */
#include <stdint.h>
 
void fcn_0040e410 (int64_t arg1) {
    rdi = arg1;
    *(rdi) |= 0x20;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40e420 */
#include <stdint.h>
 
uint64_t fcn_0040e420 (uint32_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
    eax = fcn_00410160 (r15, rbp - 0x580, rbp - 0x670);
    if (eax < 0) {
        goto label_58;
    }
    eax = fcn_0040ff40 (rbx, rbp - 0x670);
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
    /* switch table (18 cases) at 0x415058 */
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
    /* switch table (5 cases) at 0x4150e8 */
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x40ff40 */
#include <stdint.h>
 
int64_t fcn_0040ff40 (int64_t arg1, uint32_t arg2) {
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
        /* switch table (23 cases) at 0x415120 */
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x410160 */
#include <stdint.h>
 
uint64_t fcn_00410160 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
    /* switch table (84 cases) at 0x415200 */
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x410ee0 */
#include <stdint.h>
 
int64_t fcn_00410ee0 (void) {
    rax = 0x618288;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_touch.elf @ 0x410ef8 */
#include <stdint.h>
 
void fcn_00410ef8 (int64_t arg3) {
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
