/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x402180 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    char * var_sp_8h;
    char ** var_10h;
    int64_t var_14h;
    int64_t var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    uint32_t var_24h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_31h;
    uint32_t var_38h;
    uint32_t var_40h;
    int64_t var_50h;
    int64_t var_6ch;
    int64_t var_70h;
    rdi = argc;
    rsi = argv;
    r15d = 1;
    r14d = 0;
    r13d = 0xffffffff;
    r12 = (int64_t) edi;
    ebx = 0x10;
    *((rsp + 0x10)) = 0xffffffff;
    *((rsp + 0x14)) = 0xffffffff;
    *((rsp + 0x18)) = 0xffffffff;
    *((rsp + 0x1c)) = 0xffffffff;
    fcn_00403cb0 (*(rsi));
    setlocale (6, 0x40ef77);
    bindtextdomain (0x40c704, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x40c704, rsi);
    edi = 0x403bc0;
    fcn_0040c620 ();
    fcn_00402c50 (rsp + 0x20);
    do {
label_0:
        r8d = 0;
        ecx = 0x40d320;
        edx = "HLPRcfhv";
        rsi = rbp;
        edi = r12d;
        eax = fcn_00409c90 ();
        if (eax == 0xffffffff) {
            goto label_6;
        }
        if (eax == 0x66) {
            goto label_7;
        }
        if (eax <= 0x66) {
            goto label_8;
        }
        if (eax == 0x81) {
            goto label_9;
        }
        if (eax > 0x81) {
            goto label_10;
        }
        if (eax == 0x76) {
            goto label_11;
        }
        if (eax != 0x80) {
            goto label_12;
        }
        r13d = 1;
    } while (1);
label_8:
    if (eax == 0x4c) {
        goto label_13;
    }
    if (eax <= 0x4c) {
        goto label_14;
    }
    if (eax == 0x52) {
        goto label_15;
    }
    if (eax != 0x63) {
        goto label_16;
    }
    *((rsp + 0x20)) = r15d;
    goto label_0;
label_12:
    if (eax == 0x68) {
        goto label_17;
    }
    do {
label_1:
        eax = fcn_00402770 (1);
label_10:
        if (eax == 0x83) {
            goto label_18;
        }
        if (eax >= 0x83) {
            goto label_19;
        }
        r14d = 0;
        goto label_0;
label_16:
    } while (eax != 0x50);
    ebx = 0x10;
    goto label_0;
label_14:
    if (eax == 0xffffff7e) {
        goto label_20;
    }
    if (eax != 0x48) {
        goto label_21;
    }
    ebx = 0x11;
    goto label_0;
label_19:
    if (eax != 0x84) {
        goto label_1;
    }
    rax = imp.__libc_start_main;
    *(0x00612390) = rax;
    goto label_0;
label_21:
    if (eax != 0xffffff7d) {
        goto label_1;
    }
    eax = 0;
    rcx = *(str.8.29);
    r9d = "Jim Meyering";
    r8d = "David MacKenzie";
    fcn_00406180 (*(obj.stdout), "chown", "GNU coreutils");
    exit (0);
label_17:
    r13d = 0;
    goto label_0;
label_18:
    r14d = 1;
    goto label_0;
label_13:
    ebx = 2;
    goto label_0;
label_9:
    rax = fcn_00405c50 (*(0x00612550), rsp + 0x18, rsp + 0x1c, 0, 0);
    if (rax == 0) {
        goto label_0;
    }
    *((rsp + 8)) = rax;
    rax = fcn_004058d0 (*(0x00612550));
    rcx = *((rsp + 8));
    r8 = rax;
    eax = 0;
    error (1, 0, "%s: %s");
label_15:
    *((rsp + 0x24)) = 1;
    goto label_0;
label_7:
    *((rsp + 0x31)) = 1;
    goto label_0;
label_11:
    *((rsp + 0x20)) = 0;
    goto label_0;
label_6:
    if (*((rsp + 0x24)) != 0) {
        goto label_22;
    }
    ebx = 0x10;
    do {
label_2:
        rax = *(0x0061233c);
        r13 = imp.__libc_start_main;
        edx = r12d;
        rsp + 0x30 = (r13d != 0) ? 1 : 0;
        edx -= eax;
        if (r13 == 0) {
            goto label_23;
        }
        if (edx <= 0) {
            goto label_24;
        }
        rdx = rsp + 0x50;
        rsi = r13;
        edi = 1;
        eax = xstat ();
        if (eax != 0) {
            goto label_25;
        }
        r12d = *((rsp + 0x70));
        *((rsp + 0x10)) = edi;
        *((rsp + 0x14)) = r12d;
        rax = fcn_00402cd0 (*((rsp + 0x6c)));
        *((rsp + 0x38)) = rax;
        rax = fcn_00402c90 (r12d);
        *((rsp + 0x40)) = rax;
label_3:
        if (*((rsp + 0x24)) != 0) {
            if (r14b != 0) {
                goto label_26;
            }
        }
label_4:
        rax = *(0x0061233c);
        bh |= 4;
        rax = rsp + 0x28;
        eax = fcn_00403a80 (rbp + rax*8, ebx, *((rsp + 0x20)), *((rsp + 0x24)), *((rsp + 0x28)), *((rsp + 0x2c)));
        eax ^= 1;
        eax = (int32_t) al;
        return rax;
label_22:
    } while (ebx != 0x10);
    r13d--;
    if (r13d == 0) {
        goto label_27;
    }
    r13d = 0;
    goto label_2;
label_23:
    edx--;
    if (edx <= 0) {
        goto label_24;
    }
    rax = fcn_00405c50 (*((rbp + rax*8)), rsp + 0x10, rsp + 0x14, rsp + 0x38, rsp + 0x40);
    r12 = rax;
    if (rax != 0) {
        goto label_28;
    }
    if (*((rsp + 0x38)) == 0) {
        goto label_29;
    }
label_5:
    *(0x0061233c)++;
    goto label_3;
label_26:
    rax = fcn_004058f0 (0x612380);
    *((rsp + 0x28)) = rax;
    if (rax != 0) {
        goto label_4;
    }
    rax = fcn_00405680 (4, 0x40efb1);
    edx = 5;
    rax = dcgettext (0, "failed to get attributes of %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), rbx);
label_29:
    if (*((rsp + 0x40)) == 0) {
        goto label_5;
    }
    *((rsp + 0x38)) = 0x40ef77;
    goto label_5;
label_20:
    eax = fcn_00402770 (0);
label_24:
    if (eax >= r12d) {
        edx = 5;
        rax = dcgettext (0, "missing operand");
        eax = 0;
        error (0, 0, rax);
        goto label_1;
    }
    rax = fcn_004058d0 (*((rbp + r12*8 - 8)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "missing operand after %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    goto label_1;
label_25:
    rax = fcn_00405680 (4, r13);
    edx = 5;
    rax = dcgettext (0, "failed to get attributes of %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), rbx);
label_28:
    rax = *(0x0061233c);
    rax = fcn_004058d0 (*((rbp + rax*8)));
    rcx = r12;
    r8 = rax;
    eax = 0;
    error (1, 0, "%s: %s");
label_27:
    edx = 5;
    rax = dcgettext (0, "-R --dereference requires either -H or -L");
    eax = 0;
    rax = error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4026bb */
#include <stdint.h>
 
int32_t fcn_004026bb (void) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x402711 */
#include <stdint.h>
 
int64_t fcn_00402711 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x00612368) != 0) {
        goto label_0;
    }
    r12d = section..dtors;
    ebx = 0x611e48;
    rbx -= section..dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x00612370) = rax;
        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_004026bb ();
    *(0x00612368) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x402768 */
#include <stdint.h>
 
int64_t fcn_00402768 (void) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x402770 */
#include <stdint.h>
 
uint64_t fcn_00402770 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [OPTION]... [OWNER][:[GROUP]] FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n");
    rcx = rbp;
    rdx = rbp;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Change the owner and/or group of each FILE to OWNER and/or GROUP.\nWith --reference, change the owner and group of each FILE to those of RFILE.\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -c, --changes          like verbose but report only when a change is made\n  -f, --silent, --quiet  suppress most error messages\n  -v, --verbose          output a diagnostic for every file processed\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --dereference      affect the referent of each symbolic link (this is\n                         the default), rather than the symbolic link itself\n  -h, --no-dereference   affect symbolic links instead of any referenced file\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "                         (useful only on systems that can change the\n                         ownership of a symlink)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --from=CURRENT_OWNER:CURRENT_GROUP\n                         change the owner and/or group of each file only if\n                         its current owner and/or group match those specified\n                         here.  Either may be omitted, in which case a match\n                         is not required for the omitted attribute\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --no-preserve-root  do not treat '/' specially (the default)\n      --preserve-root    fail to operate recursively on '/'\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --reference=RFILE  use RFILE's owner and group rather than\n                         specifying OWNER:GROUP values\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -R, --recursive        operate on files and directories recursively\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nThe following options modify how a hierarchy is traversed when the -R\noption is also specified.  If more than one is specified, only the final\none takes effect.\n\n  -H                     if a command line argument is a symbolic link\n                         to a directory, traverse it\n  -L                     traverse every symbolic link to a directory\n                         encountered\n  -P                     do not traverse any symbolic links (default)\n\n");
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
    rax = dcgettext (0, "\nOwner is unchanged if missing.  Group is unchanged if missing, but changed\nto login group if implied by a ':' following a symbolic OWNER.\nOWNER and GROUP may be numeric as well as symbolic.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = imp.__libc_start_main;
    edx = 5;
    rax = dcgettext (0, "\nExamples:\n  %s root /u        Change the owner of /u to \"root\".\n  %s root:staff /u  Likewise, but also change its group to \"staff\".\n  %s -hR root /u    Change the owner of /u and subfiles to \"root\".\n");
    r8 = rbp;
    rcx = rbp;
    rdx = rbp;
    rsi = rax;
    edi = 1;
    eax = 0;
    printf_chk ();
    *(rsp) = 0x40c68a;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x40c704;
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
        esi = "chown";
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
        eax = strncmp (rax, 0x40c70e, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x40c6a6;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "chown";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x40ef77;
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
            eax = strncmp (rax, 0x40c70e, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "chown";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x40c6a6;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "chown";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x402bd0 */
#include <stdint.h>
 
uint64_t fcn_00402bd0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    if (rdi == 0) {
        goto label_0;
    }
    if (rsi == 0) {
        goto label_1;
    }
    rbx = rsi;
    rax = strlen (rdi);
    r12 = rax;
    strlen (rbx);
    rax = fcn_004062c0 (r12 + rax + 2);
    rsi = rbp;
    rdi = rax;
    r12 = rax;
    stpcpy ();
    *(rax) = 0x3a;
    strcpy (rax + 1, rbx);
    do {
        rax = r12;
        return rax;
label_0:
        if (rsi != 0) {
            rdi = rsi;
label_1:
            void (*0x4064f0)() ();
        }
        r12d = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x402c50 */
#include <stdint.h>
 
int32_t fcn_00402c50 (int64_t arg1) {
    rdi = arg1;
    eax = 1;
    *(rdi) = 2;
    *((rdi + 4)) = 0;
    *((rdi + 8)) = 0;
    *((rdi + 0x10)) = ax;
    *((rdi + 0x18)) = 0;
    *((rdi + 0x20)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x402c90 */
#include <stdint.h>
 
uint64_t fcn_00402c90 (int64_t arg1) {
    rdi = arg1;
    ebx = edi;
    rax = getgrgid ();
    if (rax != 0) {
        fcn_004064f0 (*(rax));
        return rax;
    }
    rax = fcn_00403c60 (ebx, rsp, rdx);
    fcn_004064f0 (rax);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x402cd0 */
#include <stdint.h>
 
uint64_t fcn_00402cd0 (int64_t arg1) {
    rdi = arg1;
    ebx = edi;
    rax = getpwuid ();
    if (rax != 0) {
        fcn_004064f0 (*(rax));
        return rax;
    }
    rax = fcn_00403c60 (ebx, rsp, rdx);
    fcn_004064f0 (rax);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x402d10 */
#include <stdint.h>
 
int64_t fcn_00402d10 (int64_t arg_190h, int64_t arg1, uint32_t arg2, int64_t arg3, void * arg4, void * arg5, void * arg6) {
    void * fildes;
    void * var_10h;
    void * ptr;
    void * var_20h;
    void * var_28h;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_c0h;
    int64_t var_c8h;
    uint32_t var_dch;
    uint32_t var_e0h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r15d = edx;
    r10d = r8d;
    r13 = rdi;
    r12 = rsi;
    rax = *((rsi + 0x38));
    edx = *((rsi + 0x70));
    *((rsp + 8)) = ecx;
    rbx = *((rsp + 0x190));
    *(rsp) = rax;
    if (dx > 0xa) {
        goto label_5;
    }
    eax = (int32_t) dx;
    /* switch table (11 cases) at 0x40d8b0 */
    *((rsp + 0x20)) = r9d;
    *((rsp + 0x10)) = edx;
    *((rsp + 0x18)) = r8d;
    al = fcn_004065a0 (rdi, rsi);
    edx = *((rsp + 0x10));
    r10d = *((rsp + 0x18));
    r9d = *((rsp + 0x20));
    if (al != 0) {
        goto label_37;
    }
    do {
label_5:
        rax = *((r12 + 0x30));
        r11d = r10d;
        r14 = r12 + 0x78;
        r11d &= r9d;
        *((rsp + 0x10)) = rax;
        eax = *((rbx + 0x10));
        if (r11d == 0xffffffff) {
            goto label_38;
        }
label_7:
        if (al != 0) {
label_8:
            eax = *((r12 + 0x90));
            eax &= 0xf000;
            if (eax == 0xa000) {
                goto label_39;
            }
        }
label_16:
        eax = edx;
        eax &= 0xfffffffd;
        bpl = (ax == 4) ? 1 : 0;
        edx--;
        al = (dx <= 1) ? 1 : 0;
        ebp |= eax;
        if (r10d != 0xffffffff) {
            if (*((r14 + 0x1c)) == r10d) {
                goto label_40;
            }
            if (bpl == 0) {
                goto label_41;
            }
            rax = *((rbx + 8));
            if (rax != 0) {
                rcx = *((r14 + 8));
                if (*(rax) == rcx) {
                    goto label_42;
                }
            }
            eax = *(rbx);
            if (eax == 2) {
                goto label_1;
            }
label_24:
            if (eax != 0) {
                goto label_1;
            }
            *((rsp + 0x28)) = 4;
            goto label_17;
        }
label_40:
        if (r9d == 0xffffffff) {
            goto label_43;
        }
        eax = *((r14 + 0x20));
        if (bpl != 0) {
            rdx = *((rbx + 8));
            if (rdx != 0) {
                goto label_44;
            }
        }
label_22:
        if (eax != r9d) {
            goto label_45;
        }
label_6:
        eax = *((rbx + 0x10));
label_9:
        ebp = *((r13 + 0x2c));
        if (al != 0) {
            goto label_46;
        }
label_10:
        eax = fcn_00406a00 (ebp, *((rsp + 0x10)), r15d, *((rsp + 8)), 0x100);
        bpl = (eax == 0) ? 1 : 0;
        if (eax != 0) {
            rax = errno_location ();
            if (*(rax) == 0x5f) {
                goto label_47;
            }
        }
label_15:
        if (bpl == 0) {
            goto label_18;
        }
label_29:
        eax = *(rbx);
        if (eax == 2) {
            goto label_20;
        }
        if (r15d == 0xffffffff) {
            goto label_48;
        }
        edi = *((r14 + 0x1c));
        if (edi == r15d) {
            goto label_48;
        }
        *((rsp + 0x28)) = 2;
        r15d = *((r14 + 0x20));
label_12:
        rax = fcn_00402cd0 (rdi);
        *((rsp + 0x10)) = rax;
        rax = fcn_00402c90 (r15d);
        r15 = *((rbx + 0x20));
        r14 = *((rbx + 0x18));
        *((rsp + 8)) = rax;
label_2:
        rax = fcn_00402bd0 (r14, r15);
        esi = 0;
        if (r15 != 0) {
            rsi = *((rsp + 8));
        }
        *((rsp + 0x18)) = rax;
        if (r14 == 0) {
            goto label_49;
        }
        rax = fcn_00402bd0 (*((rsp + 0x10)), rsi);
        *((rsp + 0x20)) = rax;
        eax = *((rsp + 0x28));
        if (eax == 3) {
            goto label_50;
        }
        if (eax == 4) {
            goto label_51;
        }
        edx = 5;
        rax = dcgettext (0, "changed ownership of %s from %s to %s\n");
        r15 = rax;
label_11:
        rax = fcn_00405680 (4, *(rsp));
        r14 = *((rsp + 0x20));
        r8 = *((rsp + 0x18));
        rsi = r15;
        rdx = rax;
        edi = 1;
        eax = 0;
        rcx = r14;
        printf_chk ();
        free (r14);
        free (*((rsp + 0x18)));
label_25:
        free (*((rsp + 0x10)));
        free (*((rsp + 8)));
label_1:
        if (*((rbx + 4)) == 0) {
            goto label_52;
        }
label_0:
        eax = ebp;
        return rax;
        ebp = *((rbx + 4));
    } while (bpl == 0);
    rax = *((rbx + 8));
    if (rax == 0) {
        goto label_0;
    }
    rcx = *(rax);
    if (*((rsi + 0x80)) != rcx) {
        goto label_0;
    }
    rax = *((rax + 8));
    if (*((rsi + 0x78)) != rax) {
        goto label_0;
    }
    rsi = *(rsp);
    edi = 0x40efb1;
    ecx = 2;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (*((rsi + 0x78)) > rax) ? 1 : 0;
    if (al != 0) {
        goto label_53;
    }
    rax = fcn_00405680 (4, *(rsp));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "it is dangerous to operate recursively on %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
label_34:
    edx = 5;
    ebp = 0;
    rax = dcgettext (0, "use --no-preserve-root to override this failsafe");
    eax = 0;
    error (0, 0, rax);
    edx = 4;
    rsi = r12;
    rdi = r13;
    fts_set ();
    rdi = r13;
    fts_read ();
    goto label_0;
    ebp = *((rbx + 0x11));
    if (bpl == 0) {
        goto label_54;
    }
label_3:
    eax = *(rbx);
    ebp = 0;
    if (eax == 2) {
        goto label_1;
    }
label_4:
    if (eax != 0) {
        goto label_1;
    }
    r15 = *((rbx + 0x20));
    r14 = *((rbx + 0x18));
    ebp = 0;
    *((rsp + 0x10)) = 0;
    *((rsp + 8)) = 0;
    *((rsp + 0x28)) = 3;
    goto label_2;
    if (*((rsi + 0x58)) == 0) {
        if (*((rsi + 0x20)) == 0) {
            goto label_55;
        }
    }
    ebp = *((rbx + 0x11));
    if (bpl != 0) {
        goto label_3;
    }
    rax = fcn_00405680 (4, *(rsp));
    edx = 5;
    esi = "cannot access %s";
    r15 = rax;
    goto label_56;
    ebp = *((rbx + 0x11));
    if (bpl != 0) {
        goto label_3;
    }
    rax = fcn_00405680 (4, *(rsp));
    edx = 5;
    r15 = rax;
label_56:
    rax = dcgettext (0, "cannot read directory %s");
    rcx = r15;
label_21:
    eax = 0;
    error (0, *((r12 + 0x40)), rax);
    eax = *(rbx);
    if (eax != 2) {
        goto label_4;
    }
    goto label_1;
    if (*((rbx + 4)) != 0) {
        goto label_5;
    }
label_31:
    goto label_0;
label_43:
    if (bpl == 0) {
        goto label_6;
    }
    rax = *((rbx + 8));
    if (rax == 0) {
        goto label_6;
    }
    rcx = *(rax);
    if (*((r14 + 8)) != rcx) {
        goto label_6;
    }
    rax = *((rax + 8));
    if (*(r14) != rax) {
        goto label_6;
    }
label_23:
    rsi = *(rsp);
    edi = 0x40efb1;
    ecx = 2;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (*(r14) > rax) ? 1 : 0;
    if (al != 0) {
        goto label_57;
    }
    rax = fcn_00405680 (4, *(rsp));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "it is dangerous to operate recursively on %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
label_32:
    edx = 5;
    ebp = 0;
    rax = dcgettext (0, "use --no-preserve-root to override this failsafe");
    eax = 0;
    error (0, 0, rax);
    goto label_0;
label_52:
    edx = 4;
    rsi = r12;
    rdi = r13;
    fts_set ();
    goto label_0;
label_46:
    if (r11d == 0xffffffff) {
        goto label_58;
    }
    eax = *((r14 + 0x18));
    eax &= 0xf000;
    if (eax == 0x8000) {
        goto label_59;
    }
    *((rsp + 0x18)) = 0x10900;
    if (eax != 0x4000) {
        goto label_58;
    }
label_14:
    edx = *((rsp + 0x18));
    rsi = *((rsp + 0x10));
    edi = ebp;
    *((rsp + 0x28)) = r9d;
    *((rsp + 0x20)) = r10d;
    eax = openat_2 ();
    r10d = *((rsp + 0x20));
    r9d = *((rsp + 0x28));
    ecx = eax;
    if (eax >= 0) {
        goto label_26;
    }
    rax = errno_location ();
    r8 = rax;
    if (*(rax) == 0xd) {
        goto label_60;
    }
label_18:
    ebp = *((rbx + 0x11));
    if (bpl == 0) {
        goto label_61;
    }
    eax = *(rbx);
    ebp = 0;
    if (eax == 2) {
        goto label_1;
    }
label_13:
    if (eax == 0) {
        goto label_62;
    }
    goto label_1;
label_38:
    if (*(rbx) != 2) {
        goto label_7;
    }
    if (*((rbx + 8)) != 0) {
        goto label_7;
    }
    if (al != 0) {
        goto label_8;
    }
    ecx = edx;
    ecx &= 0xfffffffd;
    if (cx == 4) {
        goto label_63;
    }
    edx--;
    if (dx > 1) {
        goto label_9;
    }
label_63:
    ebp = *((r13 + 0x2c));
    goto label_10;
    do {
label_50:
        edx = 5;
        if (*((rsp + 0x20)) == 0) {
            goto label_64;
        }
        if (r14 == 0) {
            goto label_65;
        }
        rax = dcgettext (0, "failed to change ownership of %s from %s to %s\n");
        r15 = rax;
        goto label_11;
label_49:
        rax = fcn_00402bd0 (0, rsi);
        *((rsp + 0x20)) = rax;
        eax = *((rsp + 0x28));
    } while (eax == 3);
    if (eax != 4) {
        goto label_66;
    }
    edx = 5;
    if (r15 == 0) {
        goto label_67;
    }
    rax = dcgettext (0, "group of %s retained as %s\n");
    r15 = rax;
    goto label_11;
label_48:
    ecx = *((rsp + 8));
    if (ecx == 0xffffffff) {
        goto label_68;
    }
    r15d = *((r14 + 0x20));
    if (r15d == ecx) {
        goto label_68;
    }
    edi = *((r14 + 0x1c));
    *((rsp + 0x28)) = 2;
    goto label_12;
label_26:
    esi = ecx;
    rdx = rsp + 0xc0;
    edi = 1;
    *((rsp + 0x10)) = ecx;
    *((rsp + 0x20)) = r9d;
    *((rsp + 0x18)) = r10d;
    eax = fxstat ();
    ecx = *((rsp + 0x10));
    if (eax != 0) {
        goto label_36;
    }
    rax = *((rsp + 0xc8));
    r10d = *((rsp + 0x18));
    r9d = *((rsp + 0x20));
    if (*((r14 + 8)) == rax) {
        goto label_69;
    }
label_28:
    *((rsp + 8)) = ecx;
    rax = errno_location ();
    ecx = *((rsp + 8));
    r15d = *(rax);
    close (ecx);
    eax = *(rbx);
    *(rbp) = r15d;
    if (eax == 2) {
        goto label_70;
    }
    if (eax != 0) {
        goto label_70;
    }
    ebp = 0;
label_62:
    *((rsp + 0x28)) = 3;
label_17:
    edi = *((r14 + 0x1c));
    r15d = *((r14 + 0x20));
    goto label_12;
label_61:
    rax = fcn_00405680 (4, *(rsp));
    edx = 5;
    *((rsp + 8)) = rax;
    if (r15d == 0xffffffff) {
        goto label_71;
    }
    rax = dcgettext (0, "changing ownership of %s");
    r15 = rax;
label_19:
    rax = errno_location ();
    rcx = *((rsp + 8));
    eax = 0;
    error (0, *(rax), r15);
    eax = *(rbx);
    if (eax != 2) {
        goto label_13;
    }
    goto label_1;
label_41:
    eax = *(rbx);
    while (eax != 0) {
label_20:
        goto label_1;
label_59:
        *((rsp + 0x18)) = 0x900;
        goto label_14;
label_51:
        edx = 5;
        rax = dcgettext (0, "ownership of %s retained as %s\n");
        r15 = rax;
        goto label_11;
label_60:
        eax = *((r14 + 0x18));
        r10d = *((rsp + 0x20));
        r9d = *((rsp + 0x28));
        eax &= 0xf000;
        if (eax == 0x8000) {
            goto label_72;
        }
label_27:
        ebp = *((r13 + 0x2c));
label_58:
        eax = fcn_00406a00 (ebp, *((rsp + 0x10)), r15d, *((rsp + 8)), 0);
        bpl = (eax == 0) ? 1 : 0;
        goto label_15;
label_39:
        esi = *((r13 + 0x2c));
        rdx = *((rsp + 0x10));
        r8d = 0;
        rcx = rsp + 0x30;
        edi = 1;
        *((rsp + 0x28)) = r9d;
        *((rsp + 0x20)) = r10d;
        *((rsp + 0x18)) = r11d;
        eax = fxstatat ();
        if (eax != 0) {
            goto label_73;
        }
        edx = *((r12 + 0x70));
        r14 = rsp + 0x30;
        r11d = *((rsp + 0x18));
        r10d = *((rsp + 0x20));
        r9d = *((rsp + 0x28));
        goto label_16;
label_65:
        if (r15 == 0) {
            goto label_74;
        }
        rax = dcgettext (0, "failed to change group of %s from %s to %s\n");
        r15 = rax;
        goto label_11;
    }
    *((rsp + 0x28)) = 4;
    goto label_17;
label_37:
    ebp = 0;
    rax = fcn_00405750 (0, 3, *(rsp));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    goto label_0;
label_36:
    *((rsp + 0x10)) = ecx;
    rax = errno_location ();
    ecx = *((rsp + 0x10));
    edx = *(rax);
    *((rsp + 8)) = edx;
    close (ecx);
    edx = *((rsp + 8));
    *(rbp) = edx;
    goto label_18;
label_71:
    rax = dcgettext (0, "changing group of %s");
    r15 = rax;
    goto label_19;
label_68:
    if (eax != 0) {
        goto label_20;
    }
    *((rsp + 0x28)) = 4;
    goto label_17;
label_67:
    rax = dcgettext (0, "ownership of %s retained\n");
    r15 = rax;
    goto label_11;
label_66:
    edx = 5;
    if (r15 == 0) {
        goto label_75;
    }
    rax = dcgettext (0, "changed group of %s from %s to %s\n");
    r15 = rax;
    goto label_11;
label_54:
    rax = fcn_00405750 (0, 3, *(rsp));
    esi = *((r12 + 0x40));
    edx = 0x40c716;
    rcx = rax;
    goto label_21;
label_44:
    rcx = *(rdx);
    if (*((r14 + 8)) != rcx) {
        goto label_22;
    }
    rcx = *((rdx + 8));
    if (*(r14) != rcx) {
        goto label_22;
    }
    goto label_23;
label_42:
    rax = *((rax + 8));
    if (*(r14) == rax) {
        goto label_23;
    }
label_45:
    eax = *(rbx);
    if (eax != 2) {
        goto label_24;
    }
    goto label_1;
label_47:
    eax = *(rbx);
    if (eax == 2) {
        goto label_1;
    }
    if (eax != 0) {
        goto label_1;
    }
    rax = fcn_00402cd0 (*((r14 + 0x1c)));
    *((rsp + 0x10)) = rax;
    rax = fcn_00402c90 (*((r14 + 0x20)));
    *((rsp + 8)) = rax;
    rax = fcn_00405680 (4, *(rsp));
    edx = 5;
    r14 = rax;
    rax = dcgettext (0, "neither symbolic link %s nor referent has been changed\n");
    rdx = r14;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_25;
label_64:
    esi = "failed to change ownership of %s to %s\n";
    if (r14 == 0) {
        goto label_76;
    }
label_30:
    rax = dcgettext (0, rsi);
    r15 = rax;
    rax = *((rsp + 0x18));
    *((rsp + 0x18)) = 0;
    *((rsp + 0x20)) = rax;
    goto label_11;
label_73:
    ebp = *((rbx + 0x11));
    if (bpl == 0) {
        goto label_77;
    }
    eax = *(rbx);
    ebp = 0;
    if (eax == 2) {
        goto label_1;
    }
label_33:
    if (eax != 0) {
        goto label_1;
    }
    r14 = rsp + 0x30;
    *((rsp + 0x28)) = 3;
    goto label_17;
label_72:
    edx = *((rsp + 0x18));
    rsi = *((rsp + 0x10));
    edi = ebp;
    *((rsp + 0x2c)) = r9d;
    *((rsp + 0x28)) = r10d;
    edx |= 1;
    *((rsp + 0x20)) = r8;
    eax = openat_2 ();
    r8 = *((rsp + 0x20));
    r10d = *((rsp + 0x28));
    ecx = eax;
    r9d = *((rsp + 0x2c));
    if (eax >= 0) {
        goto label_26;
    }
    if (*(r8) != 0xd) {
        goto label_18;
    }
    goto label_27;
label_70:
    ebp = 0;
    goto label_1;
label_69:
    rax = *((rsp + 0xc0));
    if (*(r14) != rax) {
        goto label_28;
    }
    if (r10d == 0xffffffff) {
        goto label_78;
    }
    if (r10d == *((rsp + 0xdc))) {
        goto label_78;
    }
label_35:
    *((rsp + 0x18)) = ecx;
    rax = errno_location ();
    ecx = *((rsp + 0x18));
    edx = *(rax);
    *((rsp + 0x10)) = edx;
    close (ecx);
    edx = *((rsp + 0x10));
    *(rbp) = edx;
    goto label_29;
label_75:
    rax = dcgettext (0, "no change to ownership of %s\n");
    r15 = rax;
    goto label_11;
label_76:
    esi = "failed to change group of %s to %s\n";
    if (r15 != 0) {
        goto label_30;
    }
    esi = "failed to change ownership of %s\n";
    goto label_30;
label_55:
    *((rsi + 0x20)) = 1;
    edx = 1;
    fts_set ();
    goto label_31;
label_74:
    rax = dcgettext (0, "failed to change ownership of %s\n");
    r15 = rax;
    goto label_11;
label_57:
    rax = fcn_004055a0 (1, 4, 0x40efb1);
    rax = fcn_004055a0 (0, 4, *(rsp));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "it is dangerous to operate recursively on %s (same as %s)");
    r8 = rbp;
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    goto label_32;
label_77:
    rax = fcn_00405680 (4, *(rsp));
    edx = 5;
    r14 = rax;
    rax = dcgettext (0, "cannot dereference %s");
    r15 = rax;
    rax = errno_location ();
    rcx = r14;
    eax = 0;
    error (0, *(rax), r15);
    eax = *(rbx);
    if (eax != 2) {
        goto label_33;
    }
    goto label_1;
label_53:
    rax = fcn_004055a0 (1, 4, 0x40efb1);
    rax = fcn_004055a0 (0, 4, *(rsp));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "it is dangerous to operate recursively on %s (same as %s)");
    r8 = rbp;
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    goto label_34;
label_78:
    if (r9d == 0xffffffff) {
        goto label_79;
    }
    if (r9d != *((rsp + 0xe0))) {
        goto label_35;
    }
label_79:
    edx = *((rsp + 8));
    edi = ecx;
    esi = r15d;
    *((rsp + 0x10)) = ecx;
    eax = fchown ();
    ecx = *((rsp + 0x10));
    if (eax != 0) {
        goto label_36;
    }
    eax = close (ecx);
    if (eax != 0) {
        goto label_18;
    }
    goto label_29;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x403a80 */
#include <stdint.h>
 
void fcn_00403a80 (int64_t arg_50h, int64_t arg2, char ** arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    char ** var_ch;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    eax = r8d;
    r15d = ecx;
    eax &= r9d;
    r14d = r9d;
    r13d = r8d;
    *((rsp + 0xc)) = edx;
    r12 = *((rsp + 0x50));
    if (eax == 0xffffffff) {
        goto label_3;
    }
label_0:
    edx = 0;
    ebx = 1;
    rax = fcn_00406550 (rdi);
    while (rax != 0) {
        eax = fcn_00402d10 (rbp, rax, *((rsp + 0x1c)), r15d, r13d, r14d);
        ebx &= eax;
        rdi = rbp;
        rax = fts_read ();
    }
    rax = errno_location ();
    ecx = *(rax);
    r13 = rax;
    if (ecx != 0) {
        ebx = *((r12 + 0x11));
        if (bl == 0) {
            goto label_4;
        }
        ebx = 0;
    }
label_2:
    rdi = rbp;
    eax = fts_close ();
    if (eax != 0) {
        goto label_5;
    }
label_1:
    eax = ebx;
    return;
label_3:
    if (*((r12 + 0x10)) != 0) {
        goto label_0;
    }
    eax = esi;
    eax |= 8;
    if (*(r12) == 2) {
        esi = eax;
    }
    goto label_0;
label_5:
    edx = 5;
    ebx = 0;
    rax = dcgettext (0, "fts_close failed");
    eax = 0;
    error (0, *(r13), rax);
    goto label_1;
label_4:
    edx = 5;
    rax = dcgettext (0, "fts_read failed");
    eax = 0;
    error (0, *(r13), rax);
    goto label_2;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x403c60 */
#include <stdint.h>
 
int64_t fcn_00403c60 (uint32_t arg1, int64_t arg2, int64_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x403cb0 */
#include <stdint.h>
 
uint64_t fcn_00403cb0 (char ** arg1) {
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
            edi = 0x40d960;
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
        *(0x006123a8) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x403d50 */
#include <stdint.h>
 
uint64_t fcn_00403d50 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_0040b370 ();
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
        eax = 0x40d966;
        ebx = 0x40d971;
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
        eax = 0x40d96a;
        ebx = 0x40d96d;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x40f1d4;
    ebx = 0x40d964;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x403e50 */
#include <stdint.h>
 
uint64_t fcn_00403e50 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        /* [13] -r-x section size 42280 named .text */
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
    /* switch table (11 cases) at 0x40d9e0 */
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
    *((rsp + 0x50)) = 0x40f1d4;
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
        /* switch table (127 cases) at 0x40da38 */
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
    rax = fcn_00403e50 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x40de30 */
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
    /* switch table (127 cases) at 0x40e228 */
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
    *((rsp + 0x50)) = 0x40f1d4;
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
        rax = fcn_00409d10 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x40f1d4;
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
        *((rsp + 0x50)) = 0x40d964;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00403d50 (0x40d975, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00403d50 (0x40f1d4, r13d);
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
        *((rsp + 0x50)) = 0x40d964;
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
        *((rsp + 0x50)) = 0x40f1d4;
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
    *((rsp + 0x50)) = 0x40d964;
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
    rax = fcn_00403e50 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x40f1d4;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x405080 */
#include <stdint.h>
 
uint64_t fcn_00405080 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x00612318);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x00612330) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x612320) {
        goto label_2;
    }
    rax = fcn_00406320 (rbx, rsi);
    *(0x00612318) = rax;
    rbx = rax;
    do {
        rdi = *(0x00612330);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
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
        rax = fcn_00403e50 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x6123c0) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_004062c0 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00403e50 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00406320 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x00612320]");
        rbx = rax;
        *(0x00612318) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00406510 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4055a0 */
#include <stdint.h>
 
int64_t fcn_004055a0 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_00405080 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x405680 */
#include <stdint.h>
 
void fcn_00405680 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = rsi;
    esi = edi;
    edi = 0;
    return void (*0x4055a0)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x405720 */
#include <stdint.h>
 
int64_t fcn_00405720 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x006124c0]");
        __asm ("movdqa xmm1, xmmword [0x006124d0]");
        __asm ("movdqa xmm2, xmmword [0x006124e0]");
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
        fcn_00405080 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x405750 */
#include <stdint.h>
 
int64_t fcn_00405750 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_00405080 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4058d0 */
#include <stdint.h>
 
void fcn_004058d0 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x6122e0;
    rdx = 0xffffffffffffffff;
    edi = 0;
    return void (*0x405080)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4058f0 */
#include <stdint.h>
 
uint64_t fcn_004058f0 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    esi = 0x40efb1;
    rbx = rdi;
    edi = 1;
    rdx = rsp;
    eax = lxstat ();
    if (eax == 0) {
        rax = *((rsp + 8));
        *(rbx) = rax;
        rax = *(rsp);
        *((rbx + 8)) = rax;
        rax = rbx;
        return rax;
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x405c50 */
#include <stdint.h>
 
uint64_t fcn_00405c50 (uint32_t arg1, char ** arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
label_7:
    r10 = rsi;
    r15d = 0xffffffff;
    r13 = r9;
    r12 = r8;
    eax = *(rdx);
    *((rsp + 0x10)) = rdx;
    *((rsp + 0xc)) = eax;
    if (rcx != 0) {
        r15d = *(rcx);
    }
    if (r12 != 0) {
        *(r12) = 0;
    }
    if (r13 != 0) {
        *(r13) = 0;
    }
    if (r10 == 0) {
        goto label_8;
    }
    r14 = r10;
    r14 -= rdi;
    if (r14 != 0) {
        goto label_9;
    }
    r14 = r10 + 1;
    if (*((r10 + 1)) == 0) {
        goto label_10;
    }
    do {
        ebx = 0;
        if (r14 != 0) {
label_4:
            if (*(r14) == 0x2b) {
                goto label_11;
            }
label_1:
            rdi = r14;
            rax = getgrnam ();
            if (rax == 0) {
                goto label_11;
            }
            r15d = *((rax + 0x10));
label_2:
            endgrent ();
            rax = fcn_004064f0 (r14);
            r14 = rax;
        }
label_0:
        rax = *((rsp + 0x10));
        ecx = *((rsp + 0xc));
        *(rax) = ecx;
        if (rbp != 0) {
            *(rbp) = r15d;
        }
        if (r12 != 0) {
            *(r12) = rbx;
            ebx = 0;
        }
        if (r13 != 0) {
            *(r13) = r14;
            r14d = 0;
        }
        free (rbx);
        eax = free (r14);
        eax = 0;
        return rax;
label_9:
        *((rsp + 0x18)) = r10;
        rax = fcn_004064c0 (rdi, r14 + 1);
        r10 = *((rsp + 0x18));
        *((rax + r14)) = 0;
        rbx = rax;
        if (*((r10 + 1)) == 0) {
            goto label_12;
        }
        r14 = r10 + 1;
    } while (rax == 0);
    dl = (r14 == 0) ? 1 : 0;
    al = (r10 != 0) ? 1 : 0;
    edx &= eax;
    if (*(rbx) == 0x2b) {
        goto label_13;
    }
label_3:
    rdi = rbx;
    *((rsp + 0xc)) = dl;
    rax = getpwnam ();
    edx = *((rsp + 0xc));
    if (rax == 0) {
        goto label_13;
    }
    ecx = *((rax + 0x10));
    *((rsp + 0xc)) = ecx;
    if (dl != 0) {
        goto label_14;
    }
    endpwent ();
    if (r14 == 0) {
        goto label_0;
    }
    if (*(r14) != 0x2b) {
        goto label_1;
    }
label_11:
    eax = fcn_004065d0 (r14, 0, 0xa, rsp + 0x20, 0x40ef77);
    if (eax != 0) {
        goto label_15;
    }
    r15 = *((rsp + 0x20));
    eax = 0xfffffffe;
    if (r15 <= rax) {
        goto label_2;
    }
label_15:
    endgrent ();
    r12d = "invalid group";
    rax = fcn_004064f0 (r14);
    goto label_5;
label_8:
    ebx = 0;
    r14d = 0;
    if (*(rdi) == 0) {
        goto label_0;
    }
    *((rsp + 0x18)) = r10;
    rax = fcn_004064f0 (rdi);
    r10 = *((rsp + 0x18));
    rbx = rax;
label_12:
    if (rbx == 0) {
        goto label_16;
    }
    r14d = 0;
    edx = 1;
    al = (r10 != 0) ? 1 : 0;
    edx &= eax;
    if (*(rbx) != 0x2b) {
        goto label_3;
    }
label_13:
    if (dl != 0) {
        endpwent ();
        r12d = "invalid spec";
        ebp = 0;
label_5:
        free (rbx);
        free (rbp);
        edx = 5;
        dcgettext (0, r12);
        return rax;
label_10:
        ebx = 0;
label_16:
        r14d = 0;
        goto label_0;
label_14:
        r15d = *((rax + 0x14));
        edi = *((rax + 0x14));
        rax = getgrgid ();
        if (rax == 0) {
            goto label_17;
        }
label_6:
        rax = fcn_004064f0 (*(rax));
        r14 = rax;
        endgrent ();
        endpwent ();
        goto label_0;
    }
    eax = fcn_004065d0 (rbx, 0, 0xa, rsp + 0x20, 0x40ef77);
    if (eax != 0) {
        goto label_18;
    }
    rax = *((rsp + 0x20));
    edx = 0xfffffffe;
    *((rsp + 0xc)) = eax;
    if (rax > rdx) {
        goto label_18;
    }
    endpwent ();
    if (r14 == 0) {
        goto label_0;
    }
    goto label_4;
label_18:
    endpwent ();
    r12d = "invalid user";
    ebp = 0;
    goto label_5;
label_17:
    rax = fcn_00403c60 (r15d, rsp + 0x20, rdx);
    rdi = rax;
    goto label_6;
    if (rdx == 0) {
        goto label_19;
    }
    r14 = rsi;
    r13 = r8;
    r12 = rcx;
    rbx = rdi;
    rax = strchr (rdi, 0x3a);
    r9 = r13;
    rsi = rax;
    r15 = rax;
    rax = void (*0x405940)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t) (rbx, rsi, r14, rbp, r12);
    goto label_7;
    r10 = rax;
    if (r15 != 0) {
        goto label_20;
    }
    *((rsp + 8)) = rax;
    if (rax == 0) {
        goto label_21;
    }
    rax = strchr (rbx, 0x2e);
    r10 = *((rsp + 8));
    if (rax == 0) {
        goto label_20;
    }
    r9 = r13;
    rax = void (*0x405940)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t) (rbx, rax, r14, rbp, r12);
    goto label_7;
    r10 = *((rsp + 8));
    while (1) {
label_20:
        rax = r10;
        return rax;
label_19:
        r9 = r8;
        rdx = rsi;
        r8 = rcx;
        esi = 0;
        ecx = 0;
        goto label_7;
label_21:
        r10d = 0;
    }
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x405d20 */
#include <stdint.h>
 
void fcn_00405d20 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x40e6f3);
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
        /* switch table (10 cases) at 0x40e9e0 */
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
    void (*0x4020e0)() ();
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
    void (*0x4020e0)() ();
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
    void (*0x4020e0)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x406180 */
#include <stdint.h>
 
uint64_t fcn_00406180 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_00405d20 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4062c0 */
#include <stdint.h>
 
uint64_t fcn_004062c0 (int64_t arg1) {
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
    return fcn_00406510 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x406320 */
#include <stdint.h>
 
uint64_t fcn_00406320 (int64_t arg1, int64_t arg2) {
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
    return fcn_00406510 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4064c0 */
#include <stdint.h>
 
uint64_t fcn_004064c0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_004062c0 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4064f0 */
#include <stdint.h>
 
void fcn_004064f0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    strlen (rdi);
    rdi = rbx;
    rsi = rax + 1;
    return void (*0x4064c0)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x406510 */
#include <stdint.h>
 
uint64_t fcn_00406510 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x006122d8), 0, 0x40c716);
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x406550 */
#include <stdint.h>
 
uint64_t fcn_00406550 (int64_t arg2) {
    rsi = arg2;
    esi |= 0x200;
    rax = fts_open ();
    if (rax != 0) {
        return rax;
    }
    rax = errno_location ();
    if (*(rax) != 0x16) {
        fcn_00406510 ();
    }
    return assert_fail ("errno != EINVAL", "lib/xfts.c", 0x29, "xfts_open");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4065a0 */
#include <stdint.h>
 
int32_t fcn_004065a0 (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    edx = *((rdi + 0x48));
    eax = 1;
    edx &= 0x11;
    if (edx != 0x10) {
        eax = 0;
        if (edx == 0x11) {
            goto label_0;
        }
    }
    return eax;
label_0:
    al = (*((rsi + 0x58)) != 0) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4065d0 */
#include <stdint.h>
 
uint64_t fcn_004065d0 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
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
    rax = strtoul (rbp, r15, rdx);
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
label_15:
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
        /* switch table (67 cases) at 0x40eae0 */
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
    /* switch table (54 cases) at 0x40ec60 */
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    rax = rbx;
    rdx:rax = rax * rcx;
    if (r12b overflow 0x35) {
        goto label_5;
    }
    rdx:rax = rax * rcx;
    if (r12b overflow 0x35) {
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
        rdx:rax = rax * rdx;
        rbx = rax;
    } while (*(r8) !overflow 0);
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
        rdx:rax = rax * rcx;
        rbx = rax;
        if (rbx overflow 0) {
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
        rdx:rax = rax * rcx;
        rbx = rax;
        if (ebp overflow 0) {
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
        rdx:rax = rax * rcx;
        rbx = rax;
        if (edi overflow 0) {
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
        rdx:rax = rax * rcx;
        rbx = rax;
        if (edi overflow 0) {
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
        rdx:rax = rax * rcx;
        rbx = rax;
        if (edi overflow 0) {
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
    rdx:rax = rax * rcx;
    if (edi overflow 0) {
        goto label_26;
    }
    rdx:rax = rax * rcx;
    if (edi overflow 0) {
        goto label_26;
    }
    rdx:rax = rax * rcx;
    if (edi overflow 0) {
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
    return assert_fail ("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60, "xstrtoul");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x406a00 */
#include <stdint.h>
 
uint64_t fcn_00406a00 (uint32_t arg1, void * arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_ch;
    uint32_t var_10h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    if ((r8d & 0xfffffeff) != 0) {
        goto label_4;
    }
    ebx = edi;
    r12 = rsi;
    r14d = edx;
    r15d = ecx;
    if (edi == 0xffffff9c) {
        goto label_5;
    }
    if (*(rsi) == 0x2f) {
        goto label_5;
    }
    rax = fcn_00409d90 (rsp + 0x10, edi, rsi);
    if (rax != 0) {
        edx = r15d;
        esi = r14d;
        rdi = rax;
        *(rsp) = rax;
        if (ebp == 0x100) {
            goto label_6;
        }
        eax = chown ();
        rcx = *(rsp);
        r13d = eax;
label_3:
        *(rsp) = rcx;
        rax = errno_location ();
        rcx = *(rsp);
        rdx = rsp + 0x10;
        esi = *(rax);
        if (rcx != rdx) {
            *((rsp + 0xc)) = esi;
            *(rsp) = rax;
            free (rcx);
            esi = *((rsp + 0xc));
            rax = *(rsp);
        }
        if (r13d != 0xffffffff) {
            goto label_1;
        }
        if (esi > 0x26) {
            goto label_7;
        }
        rcx = 0x4000102006;
        if (((rcx >> rsi) & 1) >= 0) {
            goto label_8;
        }
    }
label_0:
    eax = fcn_0040b990 (rsp + 0x10);
    if (eax != 0) {
        goto label_9;
    }
    if (ebx >= 0) {
        if (*((rsp + 0x10)) == ebx) {
            goto label_10;
        }
    }
    edi = ebx;
    eax = fchdir ();
    if (eax != 0) {
        goto label_11;
    }
    edx = r15d;
    esi = r14d;
    rdi = r12;
    if (ebp == 0x100) {
        goto label_12;
    }
    eax = chown ();
    r13d = eax;
label_2:
    if (r13d == 0xffffffff) {
        goto label_13;
    }
    eax = fcn_0040b9e0 (rsp + 0x10);
    if (eax != 0) {
        goto label_14;
    }
    fcn_0040ba00 (rsp + 0x10);
    do {
label_1:
        eax = r13d;
        return rax;
label_5:
        edx = r15d;
        esi = r14d;
        rdi = r12;
        if (ebp == 0x100) {
            goto label_15;
        }
        eax = chown ();
        r13d = eax;
    } while (1);
label_7:
    if (esi == 0x5f) {
        goto label_0;
    }
label_8:
    *(rax) = esi;
    goto label_1;
label_12:
    eax = lchown ();
    r13d = eax;
    goto label_2;
label_15:
    eax = lchown ();
    r13d = eax;
    goto label_1;
label_6:
    eax = lchown ();
    rcx = *(rsp);
    r13d = eax;
    goto label_3;
label_13:
    rax = errno_location ();
    rbx = rax;
    ebp = *(rax);
    eax = fcn_0040b9e0 (rsp + 0x10);
    if (eax != 0) {
        goto label_14;
    }
    fcn_0040ba00 (rsp + 0x10);
    if (ebp == 0) {
        goto label_1;
    }
    *(rbx) = ebp;
    goto label_1;
label_11:
    rax = errno_location ();
    r13d = 0xffffffff;
    ebp = *(rax);
    rbx = rax;
    fcn_0040ba00 (rsp + 0x10);
    *(rbx) = ebp;
    goto label_1;
label_10:
    r13d = 0xffffffff;
    fcn_0040ba00 (rsp + 0x10);
    errno_location ();
    *(rax) = 9;
    goto label_1;
label_4:
    errno_location ();
    r13d = 0xffffffff;
    *(rax) = 0x16;
    goto label_1;
label_14:
    rax = errno_location ();
    fcn_0040b910 (*(rax));
label_9:
    rax = errno_location ();
    return fcn_0040b8e0 (*(rax));
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x406cf0 */
#include <stdint.h>
 
uint64_t fcn_00406cf0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    rbp = rsi + 0x78;
    rbx = rsi;
    eax = *((rdi + 0x48));
    rsi = *((rsi + 0x30));
    if (*((rbx + 0x58)) != 0) {
        goto label_4;
    }
    while ((al & 2) != 0) {
label_0:
        rdx = rbp;
        edi = 1;
        eax = xstat ();
        if (eax == 0) {
            goto label_5;
        }
        rax = errno_location ();
        r12 = rax;
        eax = *(rax);
        if (eax != 2) {
            goto label_2;
        }
        rsi = *((rbx + 0x30));
        rdx = rbp;
        edi = 1;
        eax = lxstat ();
        if (eax != 0) {
            goto label_6;
        }
        *(r12) = 0;
        eax = 0xd;
        return rax;
label_4:
    }
    if (dl != 0) {
        goto label_0;
    }
    rdx = rsi;
    esi = *((r12 + 0x2c));
    r8d = 0x100;
    rcx = rbp;
    edi = 1;
    eax = fxstatat ();
    if (eax != 0) {
        goto label_7;
    }
label_5:
    eax = *((rbx + 0x90));
    eax &= 0xf000;
    if (eax == 0x4000) {
        goto label_8;
    }
    if (eax == 0xa000) {
        goto label_9;
    }
    al = (eax == 0x8000) ? 1 : 0;
    eax = (int32_t) al;
    eax = rax * 5;
    do {
label_1:
        return rax;
label_7:
        rax = errno_location ();
        eax = *(rax);
label_2:
        rdi = rbp + 8;
        *((rbx + 0x40)) = eax;
        eax = 0;
        rdi &= 0xfffffffffffffff8;
        *((rbx + 0x78)) = 0;
        *((rbp + 0x88)) = 0;
        rbp -= rdi;
        ecx = rbp + 0x90;
        ecx >>= 3;
        *(rdi) = rax;
        rcx--;
        rdi += 8;
        eax = 0xa;
        return rax;
label_8:
        rax = *((rbx + 0x88));
        if (rax <= 1) {
            goto label_10;
        }
        if (*((rbx + 0x58)) <= 0) {
            goto label_10;
        }
        rdx = rax - 2;
        if ((*((r12 + 0x48)) & 0x20) == 0) {
            rax = rdx;
        }
label_3:
        *((rbx + 0x68)) = rax;
        eax = 1;
    } while (*((rbx + 0x108)) != 0x2e);
    if (*((rbx + 0x109)) == 0) {
        goto label_11;
    }
    edx = *((rbx + 0x108));
    edx &= 0xffff00;
    if (edx != 0x2e00) {
        goto label_1;
    }
label_11:
    eax -= eax;
    eax &= 0xfffffffc;
    eax += 5;
    goto label_1;
label_6:
    eax = *(r12);
    goto label_2;
label_10:
    rax = 0xffffffffffffffff;
    goto label_3;
label_9:
    eax = 0xc;
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x406ea0 */
#include <stdint.h>
 
int64_t fcn_00406ea0 (int64_t arg1, uint32_t arg2, uint32_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rdx;
    rbx = rsi;
    r13 = *((rdi + 0x40));
    rdi = *((rdi + 0x10));
    if (*((rbp + 0x38)) < rdx) {
        rax = 0x1fffffffffffffff;
        rsi = rdx + 0x28;
        *((rbp + 0x38)) = rsi;
        if (rsi > rax) {
            goto label_0;
        }
        rsi <<= 3;
        rax = realloc (rdi, rsi);
        rdi = rax;
        if (rax == 0) {
            goto label_1;
        }
        *((rbp + 0x10)) = rax;
    }
    rdx = rdi;
    if (rbx == 0) {
        goto label_2;
    }
    do {
        rdx += 8;
        *((rdx - 8)) = rbx;
        rbx = *((rbx + 0x10));
    } while (rbx != 0);
label_2:
    rcx = r13;
    edx = 8;
    rsi = r12;
    qsort ();
    r8 = *((rbp + 0x10));
    rcx = r12;
    rax = *(r8);
    rdx = r8;
    rsi = rax;
    rcx--;
    if (rcx != 0) {
        goto label_3;
    }
    goto label_4;
    do {
        rsi = *(rdx);
label_3:
        rdi = *((rdx + 8));
        rdx += 8;
        *((rsi + 0x10)) = rdi;
        rcx--;
    } while (rcx != 0);
    rdx = *((r8 + r12*8 - 8));
    do {
        *((rdx + 0x10)) = 0;
        return rax;
label_1:
label_0:
        free (*((rbp + 0x10)));
        *((rbp + 0x10)) = 0;
        rax = rbx;
        *((rbp + 0x38)) = 0;
        return rax;
label_4:
        rdx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x406fa0 */
#include <stdint.h>
 
uint64_t fcn_00406fa0 (int64_t arg1, int64_t arg2, size_t size) {
    rdi = arg1;
    rsi = arg2;
    rdx = size;
    r13 = rsi;
    r12 = rdi;
    rdi &= 0xfffffffffffffff8;
    rax = malloc (rdx + 0x110);
    rbx = rax;
    if (rax != 0) {
        memcpy (rax + 0x108, r13, rbp);
        rax = *((r12 + 0x20));
        *((rbx + rbp + 0x108)) = 0;
        *((rbx + 0x60)) = rbp;
        *((rbx + 0x50)) = r12;
        *((rbx + 0x38)) = rax;
        *((rbx + 0x40)) = 0;
        *((rbx + 0x18)) = 0;
        *((rbx + 0x72)) = 0x30000;
        *((rbx + 0x20)) = 0;
        *((rbx + 0x28)) = 0;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x407030 */
#include <stdint.h>
 
void fcn_00407030 (uint32_t arg1) {
    rdi = arg1;
    if (rdi == 0) {
        goto label_0;
    }
    rbx = rdi;
    do {
        rdi = *((rbx + 0x18));
        rbp = *((rbx + 0x10));
        if (rdi != 0) {
            closedir ();
        }
        rbx = rbp;
        free (rbx);
    } while (rbp != 0);
    return;
label_0:
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x407080 */
#include <stdint.h>
 
uint32_t fcn_00407080 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    while (al == 0) {
        eax = fcn_0040b320 (rbx);
        if (eax >= 0) {
            goto label_1;
        }
label_0:
        al = fcn_0040b2d0 (rbx);
    }
    return eax;
label_1:
    close (eax);
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4070c0 */
#include <stdint.h>
 
int64_t fcn_004070c0 (int64_t arg1) {
    rdi = arg1;
label_0:
    abort ();
    rbx = *((rdi + 0x50));
    if ((*((rbx + 0x49)) & 2) == 0) {
        goto label_4;
    }
    r12 = *((rbx + 0x50));
    if (r12 == 0) {
        goto label_5;
    }
label_1:
    rax = *((rbp + 0x78));
    *(rsp) = rax;
    rax = fcn_0040a680 (r12, rsp);
    if (rax == 0) {
        goto label_6;
    }
    rax = *((rax + 8));
    do {
label_3:
        return rax;
label_6:
        rax = *((rbp + 0x50));
        rsi = rsp;
        edi = *((rax + 0x2c));
        eax = fstatfs ();
        if (eax != 0) {
            goto label_4;
        }
        rax = malloc (0x10);
        rbx = rax;
        rax = *(rsp);
    } while (rbx == 0);
    rdx = *((rbp + 0x78));
    *((rbx + 8)) = rax;
    rsi = rbx;
    *(rbx) = rdx;
    rax = fcn_0040b090 (r12);
    if (rax == 0) {
        goto label_7;
    }
    if (rbx != rax) {
        goto label_0;
    }
label_2:
    rax = *(rsp);
    return rax;
label_5:
    rax = fcn_0040a8f0 (0xd, 0, 0x406ca0, 0x406cb0, sym.imp.free);
    r12 = rax;
    *((rbx + 0x50)) = rax;
    if (rax != 0) {
        goto label_1;
    }
    rax = *((rbp + 0x50));
    rsi = rsp;
    edi = *((rax + 0x2c));
    eax = fstatfs ();
    if (eax == 0) {
        goto label_2;
    }
label_4:
    eax = 0;
    return rax;
label_7:
    free (rbx);
    rax = *(rsp);
    goto label_3;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4071e0 */
#include <stdint.h>
 
uint64_t fcn_004071e0 (void) {
    rax = fcn_004070c0 (rdi);
    if (rax == 0x9fa0) {
        goto label_1;
    }
    if (rax <= 0x9fa0) {
        goto label_2;
    }
    if (rax == 0x5346414f) {
        goto label_1;
    }
    edx = 2;
    if (rax == 0x58465342) {
        goto label_0;
    }
    edx = 0;
    dl = (rax == 0x52654973) ? 1 : 0;
    edx++;
    do {
label_0:
        eax = edx;
        return rax;
label_2:
        edx = 0;
    } while (rax == 0);
    edx = 0;
    dl = (rax != 0x6969) ? 1 : 0;
    eax = edx;
    return rax;
label_1:
    edx = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x407250 */
#include <stdint.h>
 
uint32_t fcn_00407250 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    esi = *((rdi + 0x2c));
    if (esi == ebp) {
        if (esi != 0xffffff9c) {
            goto label_0;
        }
    }
    if (dl != 0) {
        goto label_1;
    }
    if ((*((rbx + 0x48)) & 4) != 0) {
        goto label_2;
    }
    if (esi >= 0) {
        goto label_3;
    }
    do {
label_2:
        *((rbx + 0x2c)) = ebp;
        return;
label_1:
        eax = fcn_0040b2e0 (rbx + 0x60, rsi);
    } while (eax < 0);
    close (eax);
    *((rbx + 0x2c)) = ebp;
    return eax;
label_3:
    close (esi);
    *((rbx + 0x2c)) = ebp;
    return eax;
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4072c0 */
#include <stdint.h>
 
int32_t fcn_004072c0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    edx = *((rdi + 0x48));
    ebp &= 4;
    if (ebp == 0) {
        dh &= 2;
        if (dh == 0) {
            goto label_0;
        }
        edx = 1;
        fcn_00407250 (rdi, 0xffffff9c);
    } else {
        ebp = 0;
    }
    do {
        fcn_00407080 (rbx + 0x60);
        eax = ebp;
        return eax;
label_0:
        edi = *((rdi + 0x28));
        ebp = 0;
        eax = fchdir ();
        bpl = (eax != 0) ? 1 : 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x407320 */
#include <stdint.h>
 
uint64_t fcn_00407320 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rcx = *(rsi);
    rbx = rdi;
    rdi = *(rdi);
    rax = rcx + rdx + 0x100;
    if (rcx <= rax) {
        *(rsi) = rax;
        rax = realloc (rdi, rax);
        if (rax == 0) {
            goto label_0;
        }
        *(rbx) = rax;
        eax = 1;
        return rax;
    }
    free (rdi);
    *(rbx) = 0;
    errno_location ();
    *(rax) = 0x24;
    eax = 0;
    return rax;
label_0:
    eax = free (*(rbx));
    *(rbx) = 0;
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x407390 */
#include <stdint.h>
 
uint64_t fcn_00407390 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    edi &= 0x102;
    rbx = rsi;
    if (edi == 0) {
        goto label_0;
    }
    rax = fcn_0040a8f0 (0x1f, 0, 0x406c90, 0x406c70, sym.imp.free);
    *(rbx) = rax;
    al = (rax != 0) ? 1 : 0;
    do {
        return rax;
label_0:
        rax = malloc (0x20);
        rdi = rax;
        *(rbx) = rax;
        eax = 0;
    } while (rdi == 0);
    fcn_00409f20 (rdi);
    eax = 1;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4073f0 */
#include <stdint.h>
 
int32_t fcn_004073f0 (int64_t arg2, int64_t arg3, int32_t fd) {
    rsi = arg2;
    rdx = arg3;
    rdi = fd;
    eax = esi;
    rcx = rdx;
    edx = esi;
    edx <<= 0xd;
    eax <<= 7;
    edx &= 0x20000;
    eax &= 0x40000;
    edx |= eax;
    edx |= 0x90900;
    esi &= 0x200;
    if (esi != 0) {
        rsi = rcx;
        eax = 0;
        void (*0x40b940)() ();
    }
    esi = edx;
    rdi = rcx;
    eax = 0;
    return void (*0x409fb0)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x407440 */
#include <stdint.h>
 
uint64_t fcn_00407440 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r15 = rdi;
    r13 = rsi;
    rbx = rcx;
    r12d = *((rdi + 0x48));
    edx = *((rdi + 0x48));
    edx &= 4;
    if (rcx != 0) {
        edi = 0x40ee19;
        ecx = 3;
        rsi = rbx;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (rcx > 0) ? 1 : 0;
        if (al == 0) {
            if (edx != 0) {
                goto label_4;
            }
            if (ebp >= 0) {
                goto label_5;
            }
            if ((r12d & 0x200) == 0) {
                goto label_6;
            }
            rdx = r15 + 0x60;
            rdi = rdx;
            *((rsp + 8)) = rdx;
            al = fcn_0040b2d0 (rdi);
            rdx = *((rsp + 8));
            r14d = eax;
            if (al != 0) {
                goto label_2;
            }
            eax = fcn_0040b320 (rdx);
            r12d = eax;
            if (eax < 0) {
                goto label_7;
            }
            r14d = 1;
        }
    } else {
        if (edx != 0) {
            goto label_4;
        }
        if (ebp < 0) {
            goto label_8;
        }
        r12d = ebp;
        r14d = 0;
    }
    do {
label_3:
        rdx = rsp + 0x10;
        esi = r12d;
        edi = 1;
        eax = fxstat ();
        ebx = eax;
        if (eax == 0) {
            rax = *((rsp + 0x10));
            if (*((r13 + 0x78)) == rax) {
                rax = *((rsp + 0x18));
                if (*((r13 + 0x80)) == rax) {
                    goto label_9;
                }
            }
            errno_location ();
            *(rax) = 2;
        }
        ebx = 0xffffffff;
label_1:
        if (ebp < 0) {
            rax = errno_location ();
            r13d = *(rax);
            close (r12d);
            *(rbp) = r13d;
            goto label_0;
label_4:
            r12d &= 0x200;
            if (r12d != 0) {
                if (ebp >= 0) {
                    goto label_10;
                }
            }
            ebx = 0;
        }
label_0:
        eax = ebx;
        return rax;
label_6:
        r14d = 1;
label_2:
        eax = fcn_004073f0 (*((r15 + 0x2c)), r12d, rbx);
        r12d = eax;
    } while (eax >= 0);
    ebx = 0xffffffff;
    goto label_0;
label_9:
    if ((*((r15 + 0x49)) & 2) == 0) {
        edi = r12d;
        eax = fchdir ();
        ebx = eax;
        goto label_1;
label_10:
        ebx = 0;
        close (ebp);
        goto label_0;
label_7:
        r12d = *((r15 + 0x48));
        r14d = 1;
        goto label_2;
    }
    r14d ^= 1;
    edx = (int32_t) r14b;
    fcn_00407250 (r15, r12d);
    goto label_0;
label_5:
    r12d = ebp;
    r14d = 1;
    goto label_3;
label_8:
    r14d = 0;
    goto label_2;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x407610 */
#include <stdint.h>
 
uint64_t fcn_00407610 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    edi &= 0x102;
    r12 = rsi;
    rbx = rdx;
    if (edi == 0) {
        goto label_0;
    }
    rax = malloc (0x18);
    if (rax == 0) {
        goto label_1;
    }
    rax = *((rbx + 0x78));
    rsi = rbp;
    *((rbp + 0x10)) = rbx;
    *(rbp) = rax;
    rax = *((rbx + 0x80));
    *((rbp + 8)) = rax;
    rax = fcn_0040b090 (*(r12));
    r12 = rax;
    if (rbp == rax) {
        goto label_2;
    }
    free (rbp);
    if (r12 == 0) {
        goto label_1;
    }
    rax = *((r12 + 0x10));
    ecx = 2;
    *((rbx + 0x70)) = cx;
    *(rbx) = rax;
    do {
label_2:
        eax = 1;
        return rax;
label_0:
        al = fcn_00409f30 (*(r12), rdx + 0x78);
    } while (al == 0);
    edx = 2;
    *(rbx) = rbx;
    *((rbx + 0x70)) = dx;
    return rax;
label_1:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4076c0 */
#include <stdint.h>
 
int64_t fcn_004076c0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    do {
label_0:
        abort ();
        edi &= 0x102;
        rcx = rsi;
        if (edi != 0) {
            goto label_2;
        }
        rax = *((rdx + 8));
        if (rax == 0) {
            goto label_1;
        }
        if (*((rax + 0x58)) < 0) {
            goto label_1;
        }
        rcx = *(rsi);
    } while (*((rcx + 0x10)) == 0);
    rsi = *((rdx + 0x80));
    if (*(rcx) == rsi) {
        goto label_3;
    }
label_1:
    return rax;
label_2:
    rax = *((rdx + 0x78));
    rsi = rsp;
    *(rsp) = rax;
    rax = *((rdx + 0x80));
    *((rsp + 8)) = rax;
    rax = fcn_0040b0d0 (*(rcx));
    if (rax == 0) {
        goto label_0;
    }
    free (rax);
    return rax;
label_3:
    rsi = *((rdx + 0x78));
    if (*((rcx + 8)) != rsi) {
        goto label_1;
    }
    rdx = *((rax + 0x78));
    rax = *((rax + 0x80));
    *((rcx + 8)) = rdx;
    *(rcx) = rax;
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x407760 */
#include <stdint.h>
 
uint64_t fcn_00407760 (int64_t arg1, uint32_t arg2) {
    int64_t var_8h;
    int64_t var_10h;
    uint32_t var_18h;
    uint32_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    uint32_t var_38h;
    void ** s1;
    int64_t var_48h;
    uint32_t var_50h;
    uint32_t var_58h;
    uint32_t var_5eh;
    uint32_t var_5fh;
    rdi = arg1;
    rsi = arg2;
    r15 = rdi;
    r13 = *(rdi);
    *((rsp + 0x58)) = esi;
    rdi = *((r13 + 0x18));
    *((rsp + 0x50)) = rdi;
    if (rdi == 0) {
        goto label_26;
    }
    eax = dirfd ();
    if (eax < 0) {
        goto label_27;
    }
    if (*((r15 + 0x40)) == 0) {
        goto label_28;
    }
    *((rsp + 0x38)) = 0xffffffffffffffff;
label_9:
    *((rsp + 0x5f)) = 1;
    edi = *((r15 + 0x48));
label_10:
    rcx = *((r13 + 0x48));
    rax = rcx - 1;
    *((rsp + 0x10)) = rcx;
    *((rsp + 0x48)) = rax;
    rax = *((r13 + 0x38));
    if (*((rax + rcx - 1)) != 0x2f) {
        rax = rcx + 1;
        *((rsp + 0x48)) = rcx;
        *((rsp + 0x10)) = rax;
    }
    *((rsp + 0x40)) = 0;
    edi &= 4;
    if (edi != 0) {
        rax = *((rsp + 0x48));
        rax += *((r15 + 0x20));
        rcx = rax + 1;
        *(rax) = 0x2f;
        *((rsp + 0x40)) = rcx;
    }
    rax = *((r15 + 0x30));
    rax -= *((rsp + 0x10));
    *((rsp + 0x5e)) = 0;
    ebp = 0;
    *((rsp + 0x20)) = rax;
    rax = *((r13 + 0x58));
    rbx = r15;
    *((rsp + 8)) = 0;
    rax++;
    *((rsp + 0x28)) = r13;
    *((rsp + 0x30)) = rax;
    *((rsp + 0x18)) = 0;
    while (edx > 0xb) {
        *((r15 + 0x90)) = 0;
        eax = 2;
label_0:
        *((r15 + 0xa8)) = rax;
label_7:
        *((r15 + 0x10)) = 0;
        if (*((rsp + 0x18)) == 0) {
            goto label_29;
        }
        rax = *((rsp + 8));
        rbp++;
        *((rax + 0x10)) = r15;
        if (rbp >= *((rsp + 0x38))) {
            goto label_30;
        }
label_3:
        *((rsp + 8)) = r15;
        rax = *((rsp + 0x28));
        r15 = *((rax + 0x18));
        if (r15 == 0) {
            goto label_31;
        }
        errno_location ();
        rdi = r15;
        *(rax) = 0;
        r12 = rax;
        rax = readdir ();
        r14 = rax;
        if (rax == 0) {
            goto label_32;
        }
        if ((*((rbx + 0x48)) & 0x20) == 0) {
            if (*((rax + 0x13)) == 0x2e) {
                goto label_33;
            }
        }
label_5:
        r15 = r14 + 0x13;
        rax = strlen (r15);
        rdx = rax;
        r13 = rax;
        rax = fcn_00406fa0 (rbx, r15, rdx);
        r15 = rax;
        if (rax == 0) {
            goto label_34;
        }
        if (*((rsp + 0x20)) <= r13) {
            goto label_35;
        }
label_1:
        r8 = r13;
        r8 += *((rsp + 0x10));
        if (r8 < 0) {
            goto label_36;
        }
        rax = *((rsp + 0x30));
        rsi = r15 + 0x108;
        *((r15 + 0x58)) = rax;
        rax = *(rbx);
        *((r15 + 0x48)) = r8;
        *((r15 + 8)) = rax;
        rax = *(r14);
        *((r15 + 0x80)) = rax;
        eax = *((rbx + 0x48));
        if ((al & 4) != 0) {
            goto label_37;
        }
        *((r15 + 0x30)) = rsi;
label_2:
        if (*((rbx + 0x40)) != 0) {
            if ((ah & 4) == 0) {
                goto label_38;
            }
        }
        edx = *((r14 + 0x12));
        eax &= 0x18;
        esi = edx;
        edx--;
        if (eax == 0x18) {
            goto label_39;
        }
label_6:
        eax = 0xb;
        *((r15 + 0x70)) = ax;
    }
    eax = *((rdx*4 + 0x40ee20));
    *((r15 + 0x90)) = eax;
    eax = 2;
    goto label_0;
label_35:
    rax = *((rbx + 0x20));
    *((rsp + 0x20)) = rax;
    rax = *((rsp + 0x48));
    rdx = rax + r13 + 2;
    al = fcn_00407320 (rbx + 0x20, rbx + 0x30);
    if (al == 0) {
        goto label_34;
    }
    rdx = *((rbx + 0x20));
    if (rdx == *((rsp + 0x20))) {
        goto label_40;
    }
    rdx += *((rsp + 0x10));
    if ((*((rbx + 0x48)) & 4) == 0) {
        rdx = *((rsp + 0x40));
    }
    *((rsp + 0x40)) = rdx;
label_8:
    rcx = *((rbx + 0x30));
    rcx -= *((rsp + 0x10));
    *((rsp + 0x5e)) = al;
    *((rsp + 0x20)) = rcx;
    goto label_1;
label_37:
    rax = *((r15 + 0x38));
    *((r15 + 0x30)) = rax;
    rax = *((r15 + 0x60));
    memmove (*((rsp + 0x40)), rsi, rax + 1);
    eax = *((rbx + 0x48));
    goto label_2;
label_29:
    *((rsp + 0x18)) = r15;
    rbp++;
    if (rbp < *((rsp + 0x38))) {
        goto label_3;
    }
label_30:
    r13 = *((rsp + 0x28));
    r15 = rbx;
    if (*((rsp + 0x5e)) == 0) {
        goto label_41;
    }
label_14:
    rax = *((r15 + 8));
    rcx = *((r15 + 0x20));
    if (rax == 0) {
        goto label_42;
    }
    do {
        rdx = *((rax + 0x30));
        rsi = rax + 0x108;
        if (rdx != rsi) {
            rdx -= *((rax + 0x38));
            rdx += rcx;
            *((rax + 0x30)) = rdx;
        }
        *((rax + 0x38)) = rcx;
        rax = *((rax + 0x10));
    } while (rax != 0);
label_42:
    rax = *((rsp + 0x18));
    while (rdx != 0) {
label_4:
        rax = rdx;
        if (*((rax + 0x58)) < 0) {
            goto label_41;
        }
        rdx = *((rax + 0x30));
        rsi = rax + 0x108;
        if (rdx != rsi) {
            rdx -= *((rax + 0x38));
            rdx += rcx;
            *((rax + 0x30)) = rdx;
        }
        rdx = *((rax + 0x10));
        *((rax + 0x38)) = rcx;
    }
    rdx = *((rax + 8));
    goto label_4;
label_33:
    if (*((rax + 0x14)) == 0) {
        goto label_43;
    }
    if (*((rax + 0x14)) != 0x2e) {
        goto label_5;
    }
label_43:
    r15 = *((rsp + 8));
    goto label_3;
label_39:
    esi &= 0xfb;
    if (esi == 0) {
        goto label_6;
    }
    ecx = 0xb;
    *((r15 + 0x70)) = cx;
    if (edx <= 0xb) {
        goto label_44;
    }
    *((r15 + 0x90)) = 0;
    eax = 1;
    goto label_0;
label_38:
    edx = 0;
    ax = fcn_00406cf0 (rbx, r15);
    *((r15 + 0x70)) = ax;
    goto label_7;
label_40:
    eax = *((rsp + 0x5e));
    goto label_8;
label_26:
    eax = *((r15 + 0x48));
    ecx = *((r15 + 0x48));
    ecx &= 0x10;
    if (ecx != 0) {
        ecx = 0x20000;
        if ((al & 1) != 0) {
            goto label_45;
        }
    }
label_11:
    edx = eax;
    eax &= 0x204;
    rsi = *((r13 + 0x30));
    edi = 0xffffff9c;
    edx <<= 7;
    edx &= 0x40000;
    edx |= ecx;
    if (eax == 0x200) {
    }
    edx |= 0x90900;
    eax = 0;
    eax = fcn_0040b940 (*((r15 + 0x2c)), rsi, rdx, rcx, r8);
    ebx = eax;
    if (eax < 0) {
        goto label_46;
    }
    edi = eax;
    rax = fdopendir ();
    if (rax == 0) {
        goto label_47;
    }
    *((r13 + 0x18)) = rax;
    if (*((r13 + 0x70)) == 0xb) {
        goto label_48;
    }
    edi = *((r15 + 0x48));
    if ((edi & 0x100) != 0) {
        goto label_49;
    }
label_18:
    rax -= rax;
    eax &= 0x186a1;
    rax--;
    *((rsp + 0x38)) = rax;
    if (*((rsp + 0x58)) == 2) {
        goto label_50;
    }
    eax = *((r15 + 0x48));
    eax &= 0x38;
    if (eax == 0x18) {
        goto label_51;
    }
label_12:
    r14d = 1;
    r12b = (*((rsp + 0x58)) == 3) ? 1 : 0;
label_13:
    if ((*((r15 + 0x49)) & 2) != 0) {
        goto label_52;
    }
label_19:
    eax = fcn_00407440 (r15, r13, ebx, 0);
    if (eax == 0) {
        goto label_9;
    }
    ebp = *((r13 + 0x72));
    rdi = *((r13 + 0x18));
    ebp |= 1;
    if (r12b != 0) {
        if (r14b == 0) {
            goto label_53;
        }
label_20:
        *((rsp + 8)) = rdi;
        rax = errno_location ();
        rdi = *((rsp + 8));
        eax = *(rax);
        *((r13 + 0x40)) = eax;
    }
label_53:
    *((r13 + 0x72)) = bp;
    closedir ();
    edi = *((r15 + 0x48));
    *((r13 + 0x18)) = 0;
    if ((edi & 0x200) != 0) {
        if (ebx < 0) {
            goto label_21;
        }
        close (ebx);
        edi = *((r15 + 0x48));
    }
label_21:
    *((r13 + 0x18)) = 0;
    *((rsp + 0x5f)) = 0;
    goto label_10;
label_44:
    eax = *((rdx*4 + 0x40ee20));
    *((r15 + 0x90)) = eax;
    eax = 1;
    goto label_0;
label_34:
    rcx = r15;
    r13 = *((rsp + 0x28));
    r15 = rbx;
    ebx = *(r12);
    free (rcx);
    fcn_00407030 (*((rsp + 0x18)));
    rdi = *((r13 + 0x18));
    closedir ();
    r9d = 7;
    *((r13 + 0x18)) = 0;
    *((r13 + 0x70)) = r9w;
    *((rsp + 0x18)) = 0;
    *((r15 + 0x48)) |= 0x4000;
    *(r12) = ebx;
label_15:
    rax = *((rsp + 0x18));
    return rax;
label_45:
    ecx = 0;
    cl = (*((r13 + 0x58)) != 0) ? 1 : 0;
    ecx <<= 0x11;
    goto label_11;
label_51:
    if (*((r13 + 0x88)) != 2) {
        goto label_12;
    }
    rdi = r13;
    eax = fcn_004071e0 ();
    if (eax == 0) {
        goto label_12;
    }
    if (*((rsp + 0x58)) != 3) {
        goto label_50;
    }
    r14d = 0;
    r12d = 1;
    goto label_13;
label_31:
    r13 = rax;
    r15 = rbx;
label_17:
    if (*((rsp + 0x5e)) != 0) {
        goto label_14;
    }
label_41:
    if ((*((r15 + 0x48)) & 4) != 0) {
        rax = *((rsp + 0x10));
        if (*((r15 + 0x30)) != rax) {
            if (rbp != 0) {
                goto label_54;
            }
        }
label_54:
        rax = *((rsp + 0x40));
        *(rax) = 0;
    }
    if (*((rsp + 0x50)) != 0) {
        goto label_55;
    }
    if (*((rsp + 0x5f)) == 0) {
        goto label_55;
    }
    if (*((rsp + 0x58)) == 1) {
        goto label_56;
    }
    while (rbp != 0) {
        rax = *((r15 + 0x40));
        if (rbp <= 0x2710) {
            goto label_57;
        }
        if (rax == 0) {
            goto label_58;
        }
label_16:
        rsi = *((rsp + 0x18));
        rdx = rbp;
        rdi = r15;
        void (*0x406ea0)() ();
label_56:
        if (*((r13 + 0x58)) != 0) {
            goto label_59;
        }
        eax = fcn_004072c0 (r15);
        al = (eax != 0) ? 1 : 0;
label_22:
        if (al != 0) {
            goto label_60;
        }
label_55:
    }
    if (*((rsp + 0x58)) == 3) {
        goto label_61;
    }
label_25:
    fcn_00407030 (*((rsp + 0x18)));
    *((rsp + 0x18)) = 0;
    goto label_15;
label_24:
    rax = *((r15 + 0x40));
label_57:
    if (rax == 0) {
        goto label_15;
    }
    if (rbp == 1) {
        goto label_15;
    }
    goto label_16;
label_32:
    eax = *(r12);
    r13 = *((rsp + 0x28));
    r15 = rbx;
    if (eax != 0) {
        *((r13 + 0x40)) = eax;
        rax = *((rsp + 0x50));
        rax |= rbp;
        eax -= eax;
        eax &= 0xfffffffd;
        eax += 7;
        *((r13 + 0x70)) = ax;
    }
    rdi = *((r13 + 0x18));
    if (rdi == 0) {
        goto label_17;
    }
    closedir ();
    *((r13 + 0x18)) = 0;
    goto label_17;
label_47:
    rax = errno_location ();
    r12d = *(rax);
    close (ebx);
    *(rbp) = r12d;
label_46:
    *((r13 + 0x18)) = 0;
    if (*((rsp + 0x58)) == 3) {
        goto label_62;
    }
label_23:
    *((rsp + 0x18)) = 0;
    goto label_15;
label_28:
    *((rsp + 0x38)) = 0x186a0;
    edi = *((r15 + 0x48));
    *((rsp + 0x5f)) = 1;
    goto label_10;
label_50:
    *((rsp + 0x5f)) = 0;
    edi = *((r15 + 0x48));
    goto label_10;
label_49:
    rbp = r15 + 0x58;
    fcn_004076c0 (rdi, rbp, r13);
    edx = 0;
    fcn_00406cf0 (r15, r13);
    al = fcn_00407610 (*((r15 + 0x48)), rbp, r13);
    if (al != 0) {
        goto label_18;
    }
    errno_location ();
    *((rsp + 0x18)) = 0;
    *(rax) = 0xc;
    goto label_15;
label_48:
    edx = 0;
    ax = fcn_00406cf0 (r15, r13);
    *((r13 + 0x70)) = ax;
    goto label_18;
label_52:
    eax = 0;
    eax = fcn_0040bde0 (ebx, 0x406, 3, rcx, r8);
    ebx = eax;
    if (eax >= 0) {
        goto label_19;
    }
    ebp = *((r13 + 0x72));
    rdi = *((r13 + 0x18));
    ebp |= 1;
    if (r12b == 0) {
        goto label_63;
    }
    if (r14b != 0) {
        goto label_20;
    }
label_63:
    *((r13 + 0x72)) = bp;
    closedir ();
    edi = *((r15 + 0x48));
    goto label_21;
label_59:
    eax = fcn_00407440 (r15, *((r13 + 8)), 0xffffffff, 0x40ee19);
    al = (eax != 0) ? 1 : 0;
    goto label_22;
label_27:
    rdi = *((r13 + 0x18));
    closedir ();
    *((r13 + 0x18)) = 0;
    if (*((rsp + 0x58)) != 3) {
        goto label_23;
    }
label_62:
    r10d = 4;
    *((r13 + 0x70)) = r10w;
    rax = errno_location ();
    eax = *(rax);
    *((r13 + 0x40)) = eax;
    goto label_23;
label_60:
    edi = 7;
    *((r13 + 0x70)) = di;
    *((r15 + 0x48)) |= 0x4000;
    fcn_00407030 (*((rsp + 0x18)));
    *((rsp + 0x18)) = 0;
    goto label_15;
label_58:
    rax = fcn_004070c0 (r13);
    if (rax == 0x6969) {
        goto label_24;
    }
    if (rax == 0x1021994) {
        goto label_24;
    }
    *((r15 + 0x40)) = 0x406cc0;
    rax = fcn_00406ea0 (r15, *((rsp + 0x18)), rbp);
    *((r15 + 0x40)) = 0;
    *((rsp + 0x18)) = rax;
    goto label_15;
label_61:
    eax = *((r13 + 0x70));
    if (ax == 4) {
        goto label_25;
    }
    if (ax == 7) {
        goto label_25;
    }
    esi = 6;
    *((r13 + 0x70)) = si;
    goto label_25;
label_36:
    rcx = r15;
    r13 = *((rsp + 0x28));
    free (rcx);
    fcn_00407030 (*((rsp + 0x18)));
    rdi = *((r13 + 0x18));
    closedir ();
    r8d = 7;
    *((r13 + 0x18)) = 0;
    *((r13 + 0x70)) = r8w;
    *((rsp + 0x18)) = 0;
    *((rbx + 0x48)) |= 0x4000;
    *(r12) = 0x24;
    goto label_15;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x408120 */
#include <stdint.h>
 
uint64_t fts_open (int64_t arg1, int64_t arg2, int64_t arg3) {
    void * ptr;
    uint32_t var_16h;
    uint32_t var_17h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if ((esi & 0xffffe000) != 0) {
        goto label_10;
    }
    eax = esi;
    eax &= 0x204;
    if (eax == 0x204) {
        goto label_10;
    }
    if ((sil & 0x12) == 0) {
        goto label_10;
    }
    r13 = rdi;
    r14 = rdx;
    rax = calloc (0x80, 1);
    rbx = rax;
    if (rax == 0) {
        goto label_2;
    }
    *((rax + 0x40)) = r14;
    if ((bpl & 2) != 0) {
        goto label_11;
    }
    *((rax + 0x48)) = ebp;
label_3:
    rdi = *(r13);
    *((rbx + 0x2c)) = 0xffffff9c;
    if (rdi == 0) {
        goto label_12;
    }
    r15 = r13;
    r12d = 0;
    do {
        rax = strlen (rdi);
        if (r12 < rax) {
            r12 = rax;
        }
        r15 += 8;
        rdi = *(r15);
    } while (rdi != 0);
    rdx = r12 + 1;
    eax = 0x1000;
    if (rdx < 0x1000) {
        rdx = rax;
    }
label_8:
    al = fcn_00407320 (rbx + 0x20, rbx + 0x30);
    *((rsp + 0x16)) = al;
    if (al == 0) {
        goto label_13;
    }
    r15 = *(r13);
    if (r15 == 0) {
        goto label_14;
    }
    rax = fcn_00406fa0 (rbx, 0x40ef77, 0);
    rcx = rax;
    *((rsp + 8)) = rax;
    if (rax == 0) {
        goto label_15;
    }
    rax = 0xffffffffffffffff;
    r15 = *(r13);
    *((rcx + 0x58)) = rax;
    *((rcx + 0x68)) = rax;
    if (r14 != 0) {
label_4:
        eax = *((rbx + 0x48));
        eax >>= 0xa;
        eax &= 1;
        *((rsp + 0x16)) = al;
    }
    if (r15 == 0) {
        goto label_16;
    }
    *((rsp + 0x18)) = 0;
    ebp >>= 0xc;
    r12d = 0;
    ebp ^= 1;
    eax = ebp;
    ebp = 0;
    eax &= 1;
    *((rsp + 0x17)) = al;
    while (rax <= 2) {
label_0:
        rax = fcn_00406fa0 (rbx, r15, rax);
        r15 = rax;
        if (rax == 0) {
            goto label_17;
        }
        *((rax + 0x58)) = 0;
        rax = *((rsp + 8));
        *((r15 + 8)) = rax;
        rax = r15 + 0x108;
        *((r15 + 0x30)) = rax;
        if (r12 == 0) {
            goto label_18;
        }
        if (*((rsp + 0x16)) == 0) {
            goto label_18;
        }
        *((r15 + 0xa8)) = 2;
        ecx = 0xb;
        *((r15 + 0x70)) = cx;
        if (r14 == 0) {
            goto label_19;
        }
label_6:
        *((r15 + 0x10)) = r12;
        r12 = r15;
label_7:
        rbp++;
        r15 = *((r13 + rbp*8));
        if (r15 == 0) {
            goto label_20;
        }
        rax = strlen (r15);
    }
    if (*((rsp + 0x17)) == 0) {
        goto label_0;
    }
    if (*((r15 + rax - 1)) != 0x2f) {
        goto label_0;
    }
label_1:
    if (*((r15 + rax - 2)) != 0x2f) {
        goto label_0;
    }
    rax--;
    if (rax != 1) {
        goto label_1;
    }
    goto label_0;
label_20:
    if (r14 != 0) {
        if (rbp <= 1) {
            goto label_5;
        }
        rax = fcn_00406ea0 (rbx, r12, rbp);
        r12 = rax;
    }
label_5:
    rax = fcn_00406fa0 (rbx, 0x40ef77, 0);
    *(rbx) = rax;
    if (rax == 0) {
        goto label_17;
    }
    edx = 9;
    *((rax + 0x10)) = r12;
    *((rax + 0x70)) = dx;
    al = fcn_00407390 (*((rbx + 0x48)), rbx + 0x58);
    if (al == 0) {
        goto label_17;
    }
    esi = *((rbx + 0x48));
    if ((esi & 0x204) == 0) {
        goto label_21;
    }
label_9:
    fcn_0040b2b0 (rbx + 0x60, 0xffffffff);
    do {
label_2:
        rax = rbx;
        return rax;
label_10:
        errno_location ();
        ebx = 0;
        *(rax) = 0x16;
    } while (1);
label_17:
    fcn_00407030 (r12);
    free (*((rsp + 8)));
label_15:
    free (*((rbx + 0x20)));
label_13:
    ebx = 0;
    free (rbx);
    goto label_2;
label_11:
    eax = ebp;
    ah &= 0xfd;
    eax |= 4;
    *((rbx + 0x48)) = eax;
    goto label_3;
label_14:
    *((rsp + 8)) = 0;
    if (r14 != 0) {
        goto label_4;
    }
label_16:
    r12d = 0;
    goto label_5;
label_18:
    edx = 0;
    ax = fcn_00406cf0 (rbx, r15);
    *((r15 + 0x70)) = ax;
    if (r14 != 0) {
        goto label_6;
    }
    *((r15 + 0x10)) = 0;
    if (r12 == 0) {
        *((rsp + 0x18)) = r15;
        r12 = r15;
        goto label_7;
label_19:
        *((r15 + 0x10)) = 0;
    }
    rax = *((rsp + 0x18));
    *((rsp + 0x18)) = r15;
    *((rax + 0x10)) = r15;
    goto label_7;
label_12:
    edx = 0x1000;
    goto label_8;
label_21:
    eax = fcn_004073f0 (*((rbx + 0x2c)), rsi, 0x40ee1a);
    *((rbx + 0x28)) = eax;
    if (eax >= 0) {
        goto label_9;
    }
    *((rbx + 0x48)) |= 4;
    goto label_9;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x4084c0 */
#include <stdint.h>
 
uint64_t fts_close (int64_t arg_8h, void * ptr, void * arg_20h, int64_t fildes, int64_t arg_2ch, int64_t arg_48h, int64_t arg_50h, int64_t arg_58h, int64_t arg_60h, uint32_t arg1) {
    rdi = arg1;
    rdi = *(rdi);
    if (rdi == 0) {
        goto label_6;
    }
    if (*((rdi + 0x58)) >= 0) {
        goto label_0;
    }
    goto label_7;
    do {
        free (rdi);
        rdi = rbx;
        if (*((rbx + 0x58)) < 0) {
            goto label_4;
        }
label_0:
        rbx = *((rdi + 0x10));
    } while (rbx != 0);
    rbx = *((rdi + 8));
    free (rdi);
    rdi = rbx;
    if (*((rbx + 0x58)) >= 0) {
        goto label_0;
    }
label_4:
    free (rbx);
label_6:
    rdi = *((rbp + 8));
    if (rdi != 0) {
        fcn_00407030 (rdi);
    }
    free (*((rbp + 0x10)));
    free (*((rbp + 0x20)));
    eax = *((rbp + 0x48));
    if ((ah & 2) == 0) {
        goto label_8;
    }
    edi = *((rbp + 0x2c));
    if (edi >= 0) {
        goto label_9;
    }
    do {
label_1:
        ebx = 0;
label_2:
        fcn_00407080 (rbp + 0x60);
        rdi = *((rbp + 0x50));
        if (rdi != 0) {
            fcn_0040ab30 (rdi);
        }
        rdi = *((rbp + 0x58));
        if ((*((rbp + 0x48)) & 0x102) == 0) {
            goto label_10;
        }
        if (rdi != 0) {
            fcn_0040ab30 (rdi);
        }
label_3:
        free (rbp);
        if (ebx != 0) {
            goto label_11;
        }
label_5:
        eax = ebx;
        return eax;
label_8:
    } while ((al & 4) != 0);
    edi = *((rbp + 0x28));
    eax = fchdir ();
    if (eax != 0) {
        goto label_12;
    }
    eax = close (*((rbp + 0x28)));
    if (eax == 0) {
        goto label_1;
    }
    rax = errno_location ();
    r12 = rax;
    goto label_13;
label_9:
    eax = close (rdi);
    if (eax == 0) {
        goto label_1;
    }
    rax = errno_location ();
    ebx = *(rax);
    goto label_2;
label_10:
    free (rdi);
    goto label_3;
label_12:
    rax = errno_location ();
    r12 = rax;
    ebx = *(rax);
    eax = close (*((rbp + 0x28)));
    if (eax == 0) {
        goto label_2;
    }
    if (ebx != 0) {
        goto label_2;
    }
label_13:
    ebx = *(r12);
    goto label_2;
label_7:
    rbx = rdi;
    goto label_4;
label_11:
    errno_location ();
    *(rax) = ebx;
    ebx = 0xffffffff;
    goto label_5;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x408640 */
#include <stdint.h>
 
uint64_t fts_read (uint32_t arg_1h, int64_t arg_8h, int64_t arg_10h, int64_t arg_30h, int64_t arg_40h, int64_t fildes, uint32_t arg_68h, uint32_t arg_70h, int64_t arg_72h, int64_t arg_74h, uint32_t arg_78h, int64_t arg1) {
    rdi = arg1;
label_0:
    abort ();
    rbp = *(rdi);
    if (rbp == 0) {
        goto label_5;
    }
    edx = *((rdi + 0x48));
    if ((dh & 0x40) != 0) {
        goto label_5;
    }
    eax = *((rbp + 0x74));
    ebx = 3;
    r12 = rdi;
    *((rbp + 0x74)) = bx;
    if (ax == 1) {
        goto label_26;
    }
    ecx = *((rbp + 0x70));
    if (ax == 2) {
        goto label_27;
    }
    if (cx != 1) {
        goto label_1;
    }
    goto label_28;
    do {
        *(r12) = rbx;
        free (rbp);
        if (*((rbx + 0x58)) == 0) {
            goto label_29;
        }
        eax = *((rbx + 0x74));
        if (ax != 4) {
            goto label_30;
        }
label_1:
        rbx = *((rbp + 0x10));
    } while (rbx != 0);
    rbx = *((rbp + 8));
    if (*((rbx + 0x18)) != 0) {
        goto label_31;
    }
label_14:
    *(r12) = rbx;
    free (rbp);
    if (*((rbx + 0x58)) == -1) {
        goto label_32;
    }
    if (*((rbx + 0x70)) == 0xb) {
        goto label_0;
    }
    rdx = *((r12 + 0x20));
    rax = *((rbx + 0x48));
    *((rdx + rax)) = 0;
    if (*((rbx + 0x58)) == 0) {
        goto label_33;
    }
    eax = *((rbx + 0x72));
    if ((al & 2) != 0) {
        goto label_34;
    }
    if ((al & 1) == 0) {
        goto label_35;
    }
label_6:
    edi = *((r12 + 0x48));
    if (*((rbx + 0x70)) != 2) {
label_10:
        ecx = *((rbx + 0x40));
        if (ecx != 0) {
            goto label_36;
        }
        edx = 6;
        *((rbx + 0x70)) = dx;
        rax = fcn_004076c0 (rdi, r12 + 0x58, rbx);
        edi = *((r12 + 0x48));
    }
label_9:
    edi &= 0x4000;
    if (edi == 0) {
        goto label_13;
    }
label_5:
    ebp = 0;
label_3:
    rax = rbp;
    return rax;
label_27:
    eax = rcx - 0xc;
    if (ax <= 1) {
        goto label_37;
    }
    if (cx != 1) {
        goto label_1;
    }
label_2:
    if ((dl & 0x40) != 0) {
        rax = *((r12 + 0x18));
        if (*((rbp + 0x78)) != rax) {
            goto label_38;
        }
    }
    rdi = *((r12 + 8));
    if (rdi == 0) {
        goto label_39;
    }
    if ((dh & 0x20) != 0) {
        goto label_40;
    }
    eax = fcn_00407440 (r12, rbp, 0xffffffff, *((rbp + 0x30)));
    if (eax == 0) {
        goto label_41;
    }
    rax = errno_location ();
    rbx = *((r12 + 8));
    eax = *(rax);
    *((rbp + 0x72)) |= 1;
    *((rbp + 0x40)) = eax;
    if (rbx == 0) {
        goto label_4;
    }
    rax = rbx;
    do {
        rdx = *((rax + 8));
        rdx = *((rdx + 0x30));
        *((rax + 0x30)) = rdx;
        rax = *((rax + 0x10));
    } while (rax != 0);
label_4:
    *((r12 + 8)) = 0;
    goto label_17;
label_28:
    if (ax != 4) {
        goto label_2;
    }
label_38:
    if ((*((rbp + 0x72)) & 2) != 0) {
        goto label_42;
    }
label_16:
    rdi = *((r12 + 8));
    if (rdi != 0) {
        fcn_00407030 (rdi);
        *((r12 + 8)) = 0;
    }
    r10d = 6;
    *((rbp + 0x70)) = r10w;
    fcn_004076c0 (*((r12 + 0x48)), r12 + 0x58, rbp);
    goto label_3;
label_29:
    eax = fcn_004072c0 (r12);
    if (eax != 0) {
        goto label_43;
    }
    rdi = *((r12 + 0x58));
    if ((*((r12 + 0x48)) & 0x102) == 0) {
        goto label_44;
    }
    if (rdi != 0) {
        fcn_0040ab30 (rdi);
    }
label_15:
    rbp = rbx + 0x108;
    *((rbx + 0x48)) = rdx;
    rdx++;
    memmove (*((r12 + 0x20)), rbp, *((rbx + 0x60)));
    rax = strrchr (rbp, 0x2f);
    if (rax != 0) {
        if (rbp == rax) {
            goto label_45;
        }
label_8:
        r13 = rax + 1;
        rax = strlen (r13);
        r14 = rax;
        memmove (rbp, r13, rax + 1);
        *((rbx + 0x60)) = r14;
    }
label_7:
    rax = *((r12 + 0x20));
    *((rbx + 0x38)) = rax;
    *((rbx + 0x30)) = rax;
    fcn_00407390 (*((r12 + 0x48)), r12 + 0x58);
    eax = *((rbx + 0x70));
    goto label_24;
label_30:
    if (ax == 2) {
        goto label_46;
    }
label_17:
    rcx = *((rbx + 8));
    rdx = *((rcx + 0x48));
    rcx = *((rcx + 0x38));
    rax = rdx - 1;
    if (*((rcx + rdx - 1)) != 0x2f) {
        rax = rdx;
    }
    rax += *((r12 + 0x20));
    *(rax) = 0x2f;
    rsi = *((rbx + 0x60));
    memmove (rax + 1, rbx + 0x108, rsi + 1);
    eax = *((rbx + 0x70));
label_24:
    *(r12) = rbx;
    if (ax == 0xb) {
        goto label_47;
    }
label_11:
    if (ax != 1) {
        goto label_3;
    }
label_20:
    if (*((rbx + 0x58)) == 0) {
label_22:
        rax = *((rbx + 0x78));
        *((r12 + 0x18)) = rax;
    }
label_12:
    rdx = rbx;
    al = fcn_00407610 (*((r12 + 0x48)), r12 + 0x58, rdx);
    if (al != 0) {
        goto label_3;
    }
    errno_location ();
    ebp = 0;
    *(rax) = 0xc;
    goto label_3;
label_37:
    edx = 1;
    ax = fcn_00406cf0 (rdi, rbp);
    *((rbp + 0x70)) = ax;
    if (ax == 1) {
        goto label_48;
    }
    *(r12) = rbp;
    if (ax != 0xb) {
        goto label_3;
    }
    rbx = rbp;
label_47:
    rax = *((rbx + 0xa8));
    if (rax == 2) {
        goto label_49;
    }
    if (rax != 1) {
        goto label_0;
    }
label_13:
    rax = rbp;
    return rax;
label_26:
    edx = 0;
    ax = fcn_00406cf0 (rdi, rbp);
    *((rbp + 0x70)) = ax;
    goto label_3;
label_40:
    dh &= 0xdf;
    *((r12 + 0x48)) = edx;
    fcn_00407030 (rdi);
    *((r12 + 8)) = 0;
label_39:
    rax = fcn_00407760 (r12, 3);
    rbx = rax;
    *((r12 + 8)) = rax;
    if (rax != 0) {
        goto label_4;
    }
    edi = *((r12 + 0x48));
    if ((edi & 0x4000) != 0) {
        goto label_5;
    }
    r9d = *((rbp + 0x40));
    if (r9d != 0) {
        if (*((rbp + 0x70)) == 4) {
            goto label_50;
        }
        r8d = 7;
        *((rbp + 0x70)) = r8w;
    }
label_50:
    fcn_004076c0 (rdi, r12 + 0x58, rbp);
    goto label_3;
label_34:
    eax = *((r12 + 0x48));
    edi = *((rbx + 0x44));
    if ((al & 4) == 0) {
        if ((ah & 2) == 0) {
            goto label_51;
        }
        edx = 1;
        fcn_00407250 (r12, edi);
    }
label_19:
    close (*((rbx + 0x44)));
    goto label_6;
label_41:
    rbx = *((r12 + 8));
    goto label_4;
label_45:
    if (*((rbp + 1)) == 0) {
        goto label_7;
    }
    goto label_8;
label_32:
    ebp = 0;
    free (rbx);
    errno_location ();
    *(rax) = 0;
    *(r12) = 0;
    goto label_3;
label_36:
    eax = 7;
    *((rbx + 0x70)) = ax;
    goto label_9;
label_33:
    eax = fcn_004072c0 (r12);
    if (eax == 0) {
        goto label_6;
    }
label_18:
    rax = errno_location ();
    eax = *(rax);
    *((rbx + 0x40)) = eax;
    *((r12 + 0x48)) |= 0x4000;
    if (*((rbx + 0x70)) == 2) {
        goto label_5;
    }
    edi = *((r12 + 0x48));
    goto label_10;
label_49:
    rbp = *((rbx + 8));
    if (*((rbp + 0x68)) == 0) {
        eax = *((r12 + 0x48));
        eax &= 0x18;
        if (eax == 0x18) {
            goto label_52;
        }
    }
label_23:
    edx = 0;
    ax = fcn_00406cf0 (r12, rbx);
    edx = *((rbx + 0x90));
    *((rbx + 0x70)) = ax;
    edx &= 0xf000;
    if (edx != 0x4000) {
        goto label_11;
    }
    if (*((rbx + 0x58)) == 0) {
        goto label_53;
    }
    rcx = *((rbp + 0x68));
    rdx = rcx - 1;
    if (rdx <= 0xfffffffffffffffd) {
        goto label_54;
    }
label_25:
    if (ax == 1) {
        goto label_12;
    }
    goto label_13;
label_31:
    rax = *((rbx + 0x48));
    rdx = *((r12 + 0x20));
    *(r12) = rbx;
    *((rdx + rax)) = 0;
    rax = fcn_00407760 (r12, 3);
    rbx = rax;
    if (rax != 0) {
        goto label_55;
    }
    if ((*((r12 + 0x49)) & 0x40) != 0) {
        goto label_5;
    }
    rbx = *((rbp + 8));
    goto label_14;
label_43:
    *((r12 + 0x48)) |= 0x4000;
    goto label_5;
label_44:
    free (rdi);
    goto label_15;
label_42:
    close (*((rbp + 0x44)));
    goto label_16;
label_46:
    edx = 1;
    ax = fcn_00406cf0 (r12, rbx);
    *((rbx + 0x70)) = ax;
    if (ax == 1) {
        goto label_56;
    }
label_21:
    esi = 3;
    *((rbx + 0x74)) = si;
    goto label_17;
label_35:
    eax = fcn_00407440 (r12, *((rbx + 8)), 0xffffffff, 0x40ee19);
    if (eax == 0) {
        goto label_6;
    }
    goto label_18;
label_55:
    free (rbp);
    goto label_17;
label_51:
    eax = fchdir ();
    if (eax != 0) {
        rax = errno_location ();
        eax = *(rax);
        *((rbx + 0x40)) = eax;
        *((r12 + 0x48)) |= 0x4000;
    }
    edi = *((rbx + 0x44));
    goto label_19;
label_48:
    esi = *((r12 + 0x48));
    if ((sil & 4) == 0) {
        goto label_57;
    }
    *(r12) = rbp;
    rbx = rbp;
    goto label_20;
label_56:
    esi = *((r12 + 0x48));
    if ((sil & 4) != 0) {
        goto label_21;
    }
    eax = fcn_004073f0 (*((r12 + 0x2c)), rsi, 0x40ee1a);
    *((rbx + 0x44)) = eax;
    if (eax < 0) {
        goto label_58;
    }
    *((rbx + 0x72)) |= 2;
    goto label_21;
label_53:
    if (ax == 1) {
        goto label_22;
    }
    goto label_13;
label_52:
    rdi = rbp;
    eax = fcn_004071e0 ();
    if (eax != 2) {
        goto label_23;
    }
    eax = *((rbx + 0x70));
    goto label_11;
label_57:
    eax = fcn_004073f0 (*((r12 + 0x2c)), rsi, 0x40ee1a);
    *((rbp + 0x44)) = eax;
    if (eax >= 0) {
        *((rbp + 0x72)) |= 2;
        eax = *((rbp + 0x70));
        rbx = rbp;
        goto label_24;
label_54:
        *((rbp + 0x68)) = rdx;
        goto label_25;
    }
    rax = errno_location ();
    r11d = 7;
    eax = *(rax);
    *((rbp + 0x70)) = r11w;
    *((rbp + 0x40)) = eax;
    *(r12) = rbp;
    goto label_3;
label_58:
    rax = errno_location ();
    edi = 7;
    eax = *(rax);
    *((rbx + 0x70)) = di;
    *((rbx + 0x40)) = eax;
    goto label_21;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x408da0 */
#include <stdint.h>
 
int64_t fts_set (int64_t arg2, uint32_t arg3) {
    rsi = arg2;
    rdx = arg3;
    if (edx <= 4) {
        *((rsi + 0x74)) = dx;
        eax = 0;
        return eax;
    }
    errno_location ();
    *(rax) = 0x16;
    eax = 1;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x408dd0 */
#include <stdint.h>
 
uint64_t fts_children (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    rax = errno_location ();
    r13 = rax;
    if ((ebp & 0xffffdfff) != 0) {
        goto label_2;
    }
    r12 = *(rbx);
    *(rax) = 0;
    if ((*((rbx + 0x49)) & 0x40) != 0) {
        goto label_3;
    }
    edx = *((r12 + 0x70));
    if (dx == 9) {
        goto label_4;
    }
    eax = 0;
    if (dx != 1) {
        goto label_1;
    }
    rdi = *((rbx + 8));
    if (rdi != 0) {
        fcn_00407030 (rdi);
    }
    r14d = 1;
    if (ebp == 0x2000) {
        *((rbx + 0x48)) |= 0x2000;
        r14d = 2;
    }
    if (*((r12 + 0x58)) == 0) {
        rax = *((r12 + 0x30));
        if (*(rax) == 0x2f) {
            goto label_5;
        }
        esi = *((rbx + 0x48));
        if ((sil & 4) == 0) {
            goto label_6;
        }
    }
label_5:
    rax = fcn_00407760 (rbx, r14d);
    *((rbx + 8)) = rax;
    do {
label_1:
        return rax;
label_6:
        eax = fcn_004073f0 (*((rbx + 0x2c)), rsi, 0x40ee1a);
        if (eax < 0) {
            goto label_7;
        }
        rax = fcn_00407760 (rbx, r14d);
        *((rbx + 8)) = rax;
        if ((*((rbx + 0x49)) & 2) != 0) {
            goto label_8;
        }
        edi = ebp;
        eax = fchdir ();
        if (eax != 0) {
            goto label_9;
        }
        close (ebp);
label_0:
        rax = *((rbx + 8));
    } while (1);
label_2:
    *(rax) = 0x16;
    eax = 0;
    return rax;
label_3:
    eax = 0;
    return rax;
label_4:
    rax = *((r12 + 0x10));
    return rax;
label_8:
    edx = 1;
    eax = fcn_00407250 (rbx, ebp);
    goto label_0;
label_7:
    *((rbx + 8)) = 0;
    eax = 0;
    goto label_1;
label_9:
    ebx = *(r13);
    eax = close (ebp);
    eax = 0;
    *(r13) = ebx;
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x408f40 */
#include <stdint.h>
 
uint64_t fcn_00408f40 (int64_t arg1, int64_t arg2) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x409020 */
#include <stdint.h>
 
int64_t fcn_00409020 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, signed int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x409640 */
#include <stdint.h>
 
uint64_t fcn_00409640 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x40ef59;
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
            fcn_00408f40 (r12, rbx);
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
        fcn_00408f40 (r12, rbx);
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
    eax = fcn_00409020 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_00409020 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x409c10 */
#include <stdint.h>
 
int32_t fcn_00409c10 (int64_t arg_10h) {
    eax = *(0x0061233c);
    *(0x00612500) = eax;
    eax = *(0x00612338);
    *(0x00612504) = eax;
    eax = *((rsp + 0x10));
    fcn_00409640 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0061233c) = edx;
    rdx = imp.__libc_start_main;
    *(0x00612550) = rdx;
    edx = imp.__libc_start_main;
    *(0x00612334) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x409c90 */
#include <stdint.h>
 
void fcn_00409c90 (void) {
    r9d = 0;
    fcn_00409c10 (rdi);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x409d10 */
#include <stdint.h>
 
uint64_t fcn_00409d10 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_0040a000 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x409d90 */
#include <stdint.h>
 
int64_t fcn_00409d90 (int64_t arg1, uint32_t arg2, void * arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = rdi;
    if (*(rdx) == 0) {
        goto label_2;
    }
    eax = imp.__libc_start_main;
    r12d = esi;
    if (eax == 0) {
        goto label_3;
    }
label_1:
    if (eax < 0) {
        goto label_4;
    }
    eax = strlen (rbp);
    rdi = rax + 0x1b;
    while (rax != 0) {
        r8d = r12d;
        ecx = "/proc/self/fd/%d/";
        esi = 1;
        rdi = rbx;
        rdx = 0xffffffffffffffff;
        eax = 0;
        eax = sprintf_chk ();
        rdi = (int64_t) eax;
        rdi += rbx;
        strcpy (rdi, rbp);
        rax = rbx;
label_0:
        return rax;
        rax = malloc (rdi);
        rbx = rax;
    }
label_4:
    eax = 0;
    goto label_0;
label_3:
    eax = open ("/proc/self/fd", 0x10900, rdx);
    r13d = eax;
    if (eax < 0) {
        *(0x00612538) = 0xffffffff;
        eax = 0;
        return rax;
label_2:
        *(rdi) = 0;
        rax = rdi;
        return rax;
    }
    r8d = eax;
    ecx = "/proc/self/fd/%d/../fd";
    edx = 0x20;
    rdi = rsp;
    esi = 1;
    eax = 0;
    sprintf_chk ();
    eax = access (rsp, 0);
    eax -= eax;
    eax &= 2;
    eax--;
    *(0x00612538) = eax;
    close (r13d);
    eax = imp.__libc_start_main;
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x409ec0 */
#include <stdint.h>
 
uint64_t fcn_00409ec0 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_0040bd60 (rbp);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x409f20 */
#include <stdint.h>
 
void fcn_00409f20 (int64_t arg1) {
    rdi = arg1;
    *((rdi + 0x10)) = 0;
    *((rdi + 0x18)) = 0x95f616;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x409f30 */
#include <stdint.h>
 
int64_t fcn_00409f30 (uint32_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    if (*((rdi + 0x18)) != 0x95f616) {
        goto label_1;
    }
    rax = *((rdi + 0x10));
    rdx = *((rsi + 8));
    if (rax == 0) {
        goto label_2;
    }
    while (*(rsi) != rcx) {
        rcx = rax + 1;
        *((rdi + 0x10)) = rcx;
        if ((rax & rcx) == 0) {
            goto label_3;
        }
        eax = 0;
        return rax;
label_2:
        *((rdi + 0x10)) = 1;
label_0:
        rax = *(rsi);
        *(rdi) = rdx;
        *((rdi + 8)) = rax;
        eax = 0;
        return rax;
        rcx = *((rdi + 8));
    }
    eax = 1;
    return rax;
label_3:
    if (rcx != 0) {
        goto label_0;
    }
    eax = 1;
    return rax;
label_1:
    return assert_fail ("state->magic == 9827862", "lib/cycle-check.c", 0x3c, "cycle_check");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x409fb0 */
#include <stdint.h>
 
uint64_t fcn_00409fb0 (int64_t arg_60h, int64_t arg3, int32_t oflag, const char * path) {
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
        fcn_0040ba20 (eax);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40a000 */
#include <stdint.h>
 
uint64_t fcn_0040a000 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x40efec;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40a060 */
#include <stdint.h>
 
int64_t fcn_0040a060 (uint32_t arg1, int64_t arg3) {
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
    rdx:rax = rax * r9;
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
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40a120 */
#include <stdint.h>
 
uint64_t fcn_0040a120 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    do {
        abort ();
        rbx = rdi;
        rdi = rsi;
        rsi = *((rbx + 0x10));
        rax = uint64_t (*rbx + 0x30)(uint64_t) (rbx);
    } while (*((rbx + 0x10)) <= rax);
    rax <<= 4;
    rax += *(rbx);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40a150 */
#include <stdint.h>
 
uint64_t fcn_0040a150 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rdx;
    r13d = ecx;
    r12 = rdi;
    rax = fcn_0040a120 (rdi, rsi);
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
    al = uint64_t (*r12 + 0x38)() ();
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
        al = uint64_t (*r12 + 0x38)() ();
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
label_2:
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40a270 */
#include <stdint.h>
 
int64_t fcn_0040a270 (int64_t arg1) {
    rdi = arg1;
    rax = *(rdi);
    if (rax != 0x40f070) {
        xmm0 = *((rax + 8));
        __asm ("comiss xmm0, dword [0x0040f084]");
        if (rax > 0x40f070) {
            xmm1 = *(0x0040f088);
            __asm ("comiss xmm1, xmm0");
            if (rax <= 0x40f070) {
                goto label_0;
            }
            xmm1 = *((rax + 0xc));
            __asm ("comiss xmm1, dword [0x0040f08c]");
            if (rax <= 0x40f070) {
                goto label_0;
            }
            xmm1 = *(rax);
            __asm ("comiss xmm1, dword [0x0040f090]");
            if (rax < 0x40f070) {
                goto label_0;
            }
            __asm ("addss xmm1, dword [0x0040f084]");
            xmm2 = *((rax + 4));
            __asm ("comiss xmm2, xmm1");
            if (rax <= 0x40f070) {
                goto label_0;
            }
            xmm3 = *(0x0040f094);
            __asm ("comiss xmm3, xmm2");
            if (rax < 0x40f070) {
                goto label_0;
            }
            __asm ("comiss xmm0, xmm1");
            eax = 1;
            if (rax > 0x40f070) {
                goto label_1;
            }
        }
label_0:
        *(rdi) = 0x40f070;
        eax = 0;
        return rax;
    }
    eax = 1;
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40a2f0 */
#include <stdint.h>
 
uint64_t fcn_0040a2f0 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
        rax = fcn_0040a120 (rbp, r15);
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
    rax = fcn_0040a120 (rbp, r15);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40a680 */
#include <stdint.h>
 
uint64_t fcn_0040a680 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    rax = fcn_0040a120 (rdi, rsi);
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
        al = uint64_t (*r12 + 0x38)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40a8f0 */
#include <stdint.h>
 
uint64_t fcn_0040a8f0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    eax = 0x40a100;
    r15 = rsi;
    r14 = r8;
    r13 = rcx;
    r12 = rdx;
    edi = 0x50;
    if (rdx == 0) {
        r12 = rax;
    }
    eax = 0x40a110;
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
    al = fcn_0040a270 (rdi);
    if (al == 0) {
        goto label_0;
    }
    if (*((r15 + 0x10)) == 0) {
        goto label_6;
    }
label_1:
    rax = fcn_0040a060 (rbp, rsi);
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
        *((rax + 0x28)) = 0x40f070;
        al = fcn_0040a270 (rdi);
        xmm1 = *(0x0040f098);
    }
    if (rbp < 0) {
        goto label_7;
    }
label_2:
    xmm0 = 0;
    __asm ("cvtsi2ss xmm0, rbp");
label_3:
    __asm ("divss xmm0, xmm1");
    __asm ("comiss xmm0, dword [0x0040f09c]");
    if (rbp >= 0) {
        goto label_0;
    }
    __asm ("comiss xmm0, dword [0x0040f0a0]");
    if (rbp < 0) {
        goto label_8;
    }
    __asm ("subss xmm0, dword [0x0040f0a0]");
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40ab30 */
#include <stdint.h>
 
int64_t fcn_0040ab30 (uint32_t arg1) {
    rdi = arg1;
    r12 = rdi;
    rbp = *(rdi);
    rax = *((rdi + 8));
    if (*((rdi + 0x40)) == 0) {
        goto label_2;
    }
    if (*((rdi + 0x20)) == 0) {
        goto label_2;
    }
    if (rbp < rax) {
        goto label_0;
    }
    goto label_3;
    do {
        rbp += 0x10;
        if (rax <= rbp) {
            goto label_4;
        }
label_0:
        rdi = *(rbp);
    } while (rdi == 0);
    rbx = rbp;
    while (rbx != 0) {
        rdi = *(rbx);
        uint64_t (*r12 + 0x40)() ();
        rbx = *((rbx + 8));
    }
    rax = *((r12 + 8));
    rbp += 0x10;
    if (rax > rbp) {
        goto label_0;
    }
label_4:
    rbp = *(r12);
label_2:
    if (rbp >= rax) {
        goto label_3;
    }
label_1:
    rdi = *((rbp + 8));
    if (rdi == 0) {
        goto label_5;
    }
    do {
        rbx = *((rdi + 8));
        free (rdi);
        rdi = rbx;
    } while (rbx != 0);
label_5:
    rbp += 0x10;
    if (*((r12 + 8)) > rbp) {
        goto label_1;
    }
label_3:
    rdi = *((r12 + 0x48));
    if (rdi == 0) {
        goto label_6;
    }
    do {
        rbx = *((rdi + 8));
        free (rdi);
        rdi = rbx;
    } while (rbx != 0);
label_6:
    free (*(r12));
    rdi = r12;
    return free ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40ac10 */
#include <stdint.h>
 
uint64_t fcn_0040ac10 (int64_t arg1, uint32_t arg2) {
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
            __asm ("comiss xmm0, dword [0x0040f09c]");
            if (rsi >= 0) {
                goto label_4;
            }
            __asm ("comiss xmm0, dword [0x0040f0a0]");
            if (rsi < 0) {
                goto label_5;
            }
            __asm ("subss xmm0, dword [0x0040f0a0]");
            __asm ("cvttss2si rsi, xmm0");
            __asm ("btc rsi, 0x3f");
        }
label_2:
        rax = fcn_0040a060 (rsi, rsi);
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
        eax = fcn_0040a2f0 (rsp, rbp, 0);
        ebx = eax;
        if (al != 0) {
            goto label_7;
        }
        rax = *((rsp + 0x48));
        *((rbp + 0x48)) = rax;
        al = fcn_0040a2f0 (rbp, rsp, 1);
    } while (al == 0);
    al = fcn_0040a2f0 (rbp, rsp, 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40ae10 */
#include <stdint.h>
 
uint64_t fcn_0040ae10 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
    rax = fcn_0040a150 (rdi, rsi, rsp + 8, 0);
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
    fcn_0040a270 (rbx + 0x28);
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
    __asm ("comiss xmm0, dword [0x0040f09c]");
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
    __asm ("comiss xmm0, dword [0x0040f0a0]");
    if (rcx >= 0) {
        goto label_17;
    }
    __asm ("cvttss2si rsi, xmm0");
label_7:
    al = fcn_0040ac10 (rbx, rsi);
    if (al == 0) {
        goto label_5;
    }
    rax = fcn_0040a150 (rbx, rbp, rsp + 8, 0);
    if (rax == 0) {
        goto label_0;
    }
    goto label_6;
label_17:
    __asm ("subss xmm0, dword [0x0040f0a0]");
    __asm ("cvttss2si rsi, xmm0");
    __asm ("btc rsi, 0x3f");
    goto label_7;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40b090 */
#include <stdint.h>
 
uint64_t fcn_0040b090 (int64_t arg2) {
    int64_t var_8h;
    rsi = arg2;
    rbx = rsi;
    eax = fcn_0040ae10 (rdi, rsi, rsp + 8);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40b0d0 */
#include <stdint.h>
 
uint64_t fcn_0040b0d0 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    rbx = rdi;
    rax = fcn_0040a150 (rdi, rsi, rsp + 8, 1);
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
    fcn_0040a270 (rbx + 0x28);
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
    __asm ("comiss xmm0, dword [0x0040f0a0]");
    if (*((rdx + 0x10)) >= 0) {
        goto label_10;
    }
    __asm ("cvttss2si rsi, xmm0");
label_5:
    al = fcn_0040ac10 (rbx, rsi);
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
    __asm ("subss xmm0, dword [0x0040f0a0]");
    __asm ("cvttss2si rsi, xmm0");
    __asm ("btc rsi, 0x3f");
    goto label_5;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40b2b0 */
#include <stdint.h>
 
void fcn_0040b2b0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    *((rdi + 0x14)) = 0;
    *((rdi + 0x1c)) = 1;
    *(rdi) = esi;
    *((rdi + 4)) = esi;
    *((rdi + 8)) = esi;
    *((rdi + 0xc)) = esi;
    *((rdi + 0x10)) = esi;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40b2d0 */
#include <stdint.h>
 
uint32_t fcn_0040b2d0 (int64_t arg1) {
    rdi = arg1;
    eax = *((rdi + 0x1c));
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40b2e0 */
#include <stdint.h>
 
int32_t fcn_0040b2e0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    edx = *((rdi + 0x1c));
    ecx = *((rdi + 0x14));
    edx ^= 1;
    edx = (int32_t) dl;
    ecx += edx;
    ecx &= 3;
    eax = ecx;
    r8 = rdi + rax*4;
    eax = *(r8);
    *(r8) = esi;
    esi = *((rdi + 0x18));
    *((rdi + 0x14)) = ecx;
    if (esi == ecx) {
        edx += esi;
        edx &= 3;
        *((rdi + 0x18)) = edx;
    }
    *((rdi + 0x1c)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40b320 */
#include <stdint.h>
 
int32_t fcn_0040b320 (uint32_t arg1) {
    rdi = arg1;
    do {
        abort ();
    } while (*((rdi + 0x1c)) != 0);
    eax = *((rdi + 0x14));
    esi = *((rdi + 0x10));
    rcx = rdi + rax*4;
    rdx = rax;
    eax = *(rcx);
    *(rcx) = esi;
    if (edx != *((rdi + 0x18))) {
        edx += 3;
        edx &= 3;
        *((rdi + 0x14)) = edx;
        return eax;
    }
    *((rdi + 0x1c)) = 1;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40b370 */
#include <stdint.h>
 
uint64_t fcn_0040b370 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x40ef77;
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
    eax = 0x40f0b0;
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
        r15d = 0x40ef77;
label_2:
        *(0x00612540) = r15;
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
        r15d = 0x40ef77;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x40e6de;
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
    fcn_0040bd60 (rbx);
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
        r15d = 0x40ef77;
        rbx = rax;
        free (r15);
        fcn_0040bd60 (r13);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40b8e0 */
#include <stdint.h>
 
uint64_t fcn_0040b8e0 (int64_t arg1) {
    rdi = arg1;
    edx = 5;
    ebx = edi;
    rax = dcgettext (0, "unable to record current working directory");
    eax = 0;
    error (*(0x006122d8), ebx, rax);
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40b910 */
#include <stdint.h>
 
uint64_t fcn_0040b910 (int64_t arg1) {
    rdi = arg1;
    edx = 5;
    ebx = edi;
    rax = dcgettext (0, "failed to return to initial working directory");
    eax = 0;
    error (*(0x006122d8), ebx, rax);
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40b940 */
#include <stdint.h>
 
uint64_t fcn_0040b940 (int64_t arg_60h, int64_t arg4, int32_t fd, int32_t oflag, const char * path) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_38h;
    rcx = arg4;
    rdi = fd;
    rdx = oflag;
    rsi = path;
    *((rsp + 0x38)) = rcx;
    ecx = 0;
    while (1) {
        eax = 0;
        eax = openat (rdi, rsi, rdx);
        fcn_0040ba20 (eax);
        return eax;
        rax = rsp + 0x60;
        *((rsp + 8)) = 0x18;
        ecx = *((rsp + 0x38));
        *((rsp + 0x10)) = rax;
        rax = rsp + 0x20;
        *((rsp + 0x18)) = rax;
    }
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40b990 */
#include <stdint.h>
 
uint64_t fcn_0040b990 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = 0;
    *((rdi + 8)) = 0;
    eax = fcn_00409fb0 (0x40ee1a, 0x80000, rdx, rcx);
    edx = eax;
    *(rbx) = eax;
    eax = 0;
    if (edx >= 0) {
        return eax;
    }
    rax = fcn_0040bfc0 (0, 0);
    *((rbx + 8)) = rax;
    al = (rax == 0) ? 1 : 0;
    eax = (int32_t) al;
    eax = -eax;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40b9e0 */
#include <stdint.h>
 
uint64_t fcn_0040b9e0 (uint32_t arg1) {
    int64_t var_ch;
    rdi = arg1;
    eax = *(rdi);
    if (eax >= 0) {
        edi = eax;
        void (*0x401fb0)() ();
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
    rax = strspn (r13, 0x40efb1);
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
        eax = fcn_0040bab0 (rsp + 0xc, rbp);
        *(rbx) = 0x2f;
        if (eax != 0) {
            goto label_2;
        }
        rbx++;
        strspn (rbx, 0x40efb1);
        rbp = rbx + rax;
label_9:
        rax = r13;
        rax -= rbp;
    } while (rax > 0xfff);
    if (r13 > rbp) {
        eax = fcn_0040bab0 (rsp + 0xc, rbp);
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
        fcn_0040ba70 (*((rsp + 0xc)));
        *(r12) = ebx;
label_1:
        ebx = 0xffffffff;
label_3:
        eax = ebx;
        return rax;
label_7:
        eax = fcn_0040bab0 (rsp + 0xc, 0x40efb1);
    } while (eax != 0);
    rbp = r13 + rbx;
    goto label_0;
label_6:
    rax = fcn_0040c490 (r13 + 3, 0x2f, r14 - 3);
    rbx = rax;
    if (rax == 0) {
        goto label_1;
    }
    *(rax) = 0;
    eax = fcn_0040bab0 (rsp + 0xc, r13);
    *(rbx) = 0x2f;
    if (eax != 0) {
        goto label_2;
    }
    rbx++;
    strspn (rbx, 0x40efb1);
    rbp = rbx + rax;
    goto label_0;
label_11:
    *(r12) = 0x24;
    ebx = 0xffffffff;
    goto label_3;
label_13:
    fcn_0040ba70 (*((rsp + 0xc)));
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40ba00 */
#include <stdint.h>
 
void fcn_0040ba00 (uint32_t arg1) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40ba20 */
#include <stdint.h>
 
uint64_t fcn_0040ba20 (uint32_t arg1) {
    rdi = arg1;
    ebx = edi;
    if (edi > 2) {
        eax = ebx;
        return eax;
    }
    eax = fcn_0040c5a0 (rdi, rsi);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40ba70 */
#include <stdint.h>
 
uint32_t fcn_0040ba70 (int64_t arg1) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40bab0 */
#include <stdint.h>
 
int32_t fcn_0040bab0 (int64_t fd, const char * path) {
    rdi = fd;
    rsi = path;
    eax = 0;
    rbx = rdi;
    eax = openat (*(rdi), rsi, 0x10900);
    if (eax < 0) {
        goto label_0;
    }
    eax = fcn_0040ba70 (*(rbx));
    *(rbx) = ebp;
    eax = 0;
    do {
        return eax;
label_0:
        eax = 0xffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40bd60 */
#include <stdint.h>
 
uint64_t fcn_0040bd60 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_0040bf20 (rbx);
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
    void (*0x401ce0)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40bde0 */
#include <stdint.h>
 
uint64_t fcn_0040bde0 (int64_t arg_70h, int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
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
            *(0x00612548) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
        eax = fcn_0040bde0 (rdi, 0, rdx, rcx, r8);
    } while (1);
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x00612548) != 0xffffffff) {
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
    eax = fcn_0040bde0 (ebp, 0, r12d, rcx, r8);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x00612548) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40bf20 */
#include <stdint.h>
 
uint32_t fcn_0040bf20 (int64_t arg1) {
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
    void (*0x401f40)() ();
label_1:
    fcn_0040bf60 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40bf60 */
#include <stdint.h>
 
int64_t fcn_0040bf60 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
        void (*0x402060)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40bfc0 */
#include <stdint.h>
 
uint64_t fcn_0040bfc0 (void * arg1, uint32_t arg2) {
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
    esi = 0x40ee1a;
    *((rbx - 1)) = 0;
    edi = 1;
    eax = lxstat ();
    if (eax < 0) {
        goto label_14;
    }
    r15 = *((rsp + 0x60));
    rdx = rsp + 0x60;
    esi = 0x40efb1;
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
    eax = openat (r15d, 0x40ee19, 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40c490 */
#include <stdint.h>
 
int64_t fcn_0040c490 (uint32_t arg1, int64_t arg2, uint32_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40c5a0 */
#include <stdint.h>
 
int32_t fcn_0040c5a0 (int64_t arg1, int64_t arg4) {
    rdi = arg1;
    rcx = arg4;
    edx = 3;
    esi = 0;
    eax = 0;
    return void (*0x40bde0)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40c620 */
#include <stdint.h>
 
int64_t fcn_0040c620 (void) {
    rax = 0x6122c8;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_chown.elf @ 0x40c638 */
#include <stdint.h>
 
void fcn_0040c638 (int64_t arg3) {
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
