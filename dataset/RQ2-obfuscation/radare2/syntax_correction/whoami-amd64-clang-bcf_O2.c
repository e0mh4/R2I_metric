#include "decompile_radare2_obfuscated.h"
/* r2dec pseudo code output */
/* nostrip @ 0x402300 */
#include <stdint.h>
 
void dl_relocate_static_pie (void) {
}
/* r2dec pseudo code output */
/* nostrip @ 0x4023c0 */
#include <stdint.h>
 
uint64_t dbg_usage (int64_t arg1) {
    int32_t status;
    rdi = arg1;
    /* void usage(int status); */
    if (*(obj.y) < 0xa) {
        goto label_0;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx == 0) {
        goto label_0;
    }
    while (1);
label_0:
    if (ebp != 0) {
        goto label_1;
    }
    goto label_2;
    do {
        rbx = stderr;
        edx = 5;
        rax = dcgettext (0, "Try '%s --help' for more information.\n");
        rdx = rax;
        rcx = program_name;
        esi = 1;
        eax = 0;
        rdi = rbx;
        fprintf_chk ();
label_1:
        rbx = stderr;
        edx = 5;
        rax = dcgettext (0, "Try '%s --help' for more information.\n");
        rdx = rax;
        rcx = program_name;
        esi = 1;
        eax = 0;
        rdi = rbx;
        fprintf_chk ();
        if (*(obj.y) < 0xa) {
            goto label_3;
        }
        eax = x;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
    } while (ecx != 0);
    goto label_3;
    do {
        edx = 5;
        rax = dcgettext (0, "Usage: %s [OPTION]..\n");
        rcx = rax;
        rdx = program_name;
        edi = 1;
        eax = 0;
        rsi = rcx;
        printf_chk ();
        edx = 5;
        rax = dcgettext (0, "Print the user name associated with the current effective user ID.\nSame as id -un.\n\n");
        rsi = stdout;
        rdi = rax;
        fputs_unlocked ();
        edx = 5;
        rax = dcgettext (0, "      --help     display this help and exit\n");
        rsi = stdout;
        rdi = rax;
        fputs_unlocked ();
        edx = 5;
        rax = dcgettext (0, "      --version  output version information and exit\n");
        rsi = stdout;
        rdi = rax;
        fputs_unlocked ();
        emit_ancillary_info ();
label_2:
        edx = 5;
        rax = dcgettext (0, "Usage: %s [OPTION]..\n");
        rcx = rax;
        rdx = program_name;
        edi = 1;
        eax = 0;
        rsi = rcx;
        printf_chk ();
        edx = 5;
        rax = dcgettext (0, "Print the user name associated with the current effective user ID.\nSame as id -un.\n\n");
        rsi = stdout;
        rdi = rax;
        fputs_unlocked ();
        edx = 5;
        rax = dcgettext (0, "      --help     display this help and exit\n");
        rsi = stdout;
        rdi = rax;
        fputs_unlocked ();
        edx = 5;
        rax = dcgettext (0, "      --version  output version information and exit\n");
        rsi = stdout;
        rdi = rax;
        fputs_unlocked ();
        emit_ancillary_info ();
        if (*(obj.y) < 0xa) {
            goto label_3;
        }
        eax = x;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
    } while (ecx != 0);
label_3:
    return exit (ebp);
}
/* r2dec pseudo code output */
/* nostrip @ 0x4025d0 */
#include <stdint.h>
 
int64_t dbg_emit_ancillary_info (infomap const infomap[8], char const * lc_messages, char const * node) {
    xmm1 = infomap;
    rax = lc_messages;
    rbx = node;
    /* void emit_ancillary_info(char const * program); */
    if (*(obj_y_29) < 0xa) {
        goto label_0;
    }
    eax = x_28;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx == 0) {
        goto label_0;
    }
    while (1);
label_0:
    rax = comment;
    ebx = "whoami";
    if (rax != 0) {
        rbx = rax;
    }
    while (edx != 0) {
        edx = 5;
        rax = dcgettext (0, "\n%s online help: <%s>\n");
        rsi = rax;
        edi = 1;
        edx = "GNU coreutils";
        ecx = "https://www.gnu.org/software/coreutils/";
        eax = 0;
        printf_chk ();
        setlocale (5, 0);
        edx = 5;
        rax = dcgettext (0, "\n%s online help: <%s>\n");
        rsi = rax;
        edi = 1;
        edx = "GNU coreutils";
        ecx = "https://www.gnu.org/software/coreutils/";
        eax = 0;
        printf_chk ();
        setlocale (5, 0);
        if (*(obj_y_29) < 0xa) {
            goto label_1;
        }
        ecx = x_28;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
    }
label_1:
    if (rax != 0) {
        eax = strncmp (rax, 0x408232, 3);
        if (eax == 0) {
            goto label_2;
        }
        edx = 5;
        rax = dcgettext (0, "Report any translation bugs to <https://translationproject.org/team/>\n");
        rsi = stdout;
        rdi = rax;
        fputs_unlocked ();
    }
label_2:
    edx = 5;
    rax = dcgettext (0, "Full documentation <%s%s>\n");
    rsi = rax;
    r14d = "whoami";
    edi = 1;
    edx = "https://www.gnu.org/software/coreutils/";
    ecx = "whoami";
    eax = 0;
    printf_chk ();
    edx = 5;
    rax = dcgettext (0, "or available locally via: info '(coreutils) %s%s'\n");
    rdx = rax;
    eax = 0x4081b0;
    ecx = 0x408096;
    if (rbx == r14) {
        rcx = rax;
    }
    edi = 1;
    eax = 0;
    rsi = rdx;
    rdx = rbx;
    return printf_chk ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x402750 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc, char ** argv, passwd * pw) {
    uid_t uid;
    rdi = argc;
    rsi = argv;
    rax = pw;
    /* int main(int argc,char ** argv); */
    rbx = rsi;
    set_program_name (*(rbx));
    setlocale (6, 0x408096);
    bindtextdomain (0x408147, "/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
    textdomain (0x408147, rsi);
    edi = close_stdout;
    atexit ();
    eax = 0;
    parse_gnu_standard_options_only (ebp, rbx, "whoami", "GNU coreutils", *(obj.Version), 1);
    if (*(obj.optind) != ebp) {
        goto label_0;
    }
    rax = errno_location ();
    r14 = rax;
    *(r14) = 0;
    eax = geteuid ();
    while (*(r14) == 0) {
        if (*(obj_y_31) < 0xa) {
            goto label_1;
        }
        eax = x_30;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx != 0) {
            goto label_2;
        }
        goto label_1;
    }
    edx = x_30;
    ecx = y_31;
    goto label_3;
label_0:
    edx = 5;
    rax = dcgettext (0, "extra operand %s");
    rax = *(obj.optind);
    rax = quote (*((rbx + rax*8)));
    rcx = rax;
    eax = 0;
    error (0, 0, rbp);
    dbg_usage (1);
    do {
label_1:
        edi = ebp;
        getpwuid ();
        edx = x_30;
        ecx = y_31;
        if (ecx < 0xa) {
            goto label_4;
        }
        esi = rdx - 1;
        esi *= edx;
        esi &= 1;
        if (esi == 0) {
            goto label_4;
        }
label_2:
        edi = ebp;
        rax = getpwuid ();
    } while (1);
label_4:
    if (rax != 0) {
        eax = puts (*(rax));
        eax = 0;
        return rax;
    }
label_3:
    eax = rdx - 1;
    eax *= edx;
    eax &= 1;
    if (ecx < 0xa) {
        goto label_5;
    }
    while (1) {
label_5:
        ebx = *(r14);
        edx = 5;
        rax = dcgettext (0, "cannot find name for user ID %lu");
        rcx = rax;
        eax = 0;
        rcx = rbp;
        error (1, ebx, rcx);
        ebx = *(r14);
        edx = 5;
        rax = dcgettext (0, "cannot find name for user ID %lu");
        rcx = rax;
        eax = 0;
        rcx = rbp;
        error (1, ebx, rcx);
    }
}
/* r2dec pseudo code output */
/* nostrip @ 0x402910 */
#include <stdint.h>
 
int32_t dbg_close_stdout_set_file_name (char const * file) {
    rdi = file;
    /* void close_stdout_set_file_name(char const * file); */
    edx = x;
    eax = y;
    ecx = rdx - 1;
    ecx *= edx;
    ecx &= 1;
    if (eax < 0xa) {
        goto label_0;
    }
    while (1) {
label_0:
        *(obj.file_name) = rdi;
        if (eax < 0xa) {
            goto label_1;
        }
        if (ecx == 0) {
            goto label_1;
        }
        *(obj.file_name) = rdi;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402950 */
#include <stdint.h>
 
int32_t dbg_close_stdout_set_ignore_EPIPE (void) {
    /* void close_stdout_set_ignore_EPIPE(_Bool ignore); */
    edx = x_3;
    eax = y_4;
    ecx = rdx - 1;
    ecx *= edx;
    ecx &= 1;
    if (eax < 0xa) {
        goto label_0;
    }
    while (1) {
label_0:
        *(obj.ignore_EPIPE) = dil;
        if (eax < 0xa) {
            goto label_1;
        }
        if (ecx == 0) {
            goto label_1;
        }
        *(obj.ignore_EPIPE) = dil;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402990 */
#include <stdint.h>
 
uint64_t dbg_close_stdout (char const * write_error) {
    rbx = write_error;
    /* void close_stdout(); */
    if (*(obj_y_6) < 0xa) {
        goto label_0;
    }
    eax = x_5;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_0:
        close_stream (*(obj.stdout));
        if (*(obj_y_6) < 0xa) {
            goto label_1;
        }
        ecx = x_5;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_1;
        }
        eax = close_stream (*(obj.stdout));
    }
label_1:
    if (eax == 0) {
        goto label_2;
    }
    bl = ignore_EPIPE;
    rax = errno_location ();
    if (bl != 0) {
        if (*(rbp) == 0x20) {
            goto label_2;
        }
    }
    edx = 5;
    rax = dcgettext (0, "write error");
    rbx = rax;
    rdi = file_name;
    ebp = *(rbp);
    if (rdi != 0) {
        goto label_3;
    }
    if (*(obj_y_6) < 0xa) {
        goto label_4;
    }
    eax = x_5;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx != 0) {
        goto label_5;
    }
    goto label_4;
    do {
        close_stream (*(obj.stderr));
label_2:
        close_stream (*(obj.stderr));
        if (*(obj_y_6) < 0xa) {
            goto label_6;
        }
        ecx = x_5;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
    } while (edx != 0);
label_6:
    if (eax == 0) {
        return rax;
    }
    exit (*(obj.exit_failure));
label_3:
    rax = quotearg_colon ();
    rcx = rax;
    eax = 0;
    r8 = rbx;
    error (0, ebp, "%s: %s");
    eax = exit (*(obj.exit_failure));
    do {
label_4:
        eax = 0;
        rcx = rbx;
        error (0, ebp, 0x408355);
        if (*(obj_y_6) < 0xa) {
            goto label_7;
        }
        eax = x_5;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx == 0) {
            goto label_7;
        }
label_5:
        eax = 0;
        rcx = rbx;
        error (0, ebp, 0x408355);
    } while (1);
label_7:
    return exit (*(obj.exit_failure));
}
/* r2dec pseudo code output */
/* nostrip @ 0x402b10 */
#include <stdint.h>
 
uint64_t dbg_parse_long_options (int64_t arg_10h, int64_t arg10, int64_t arg11, int64_t arg2, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9, int32_t argc, char ** argv, int32_t c, char const * command_name, char const * package, int32_t saved_opterr, void (*usage_func)(), char const * version) {
    int64_t var_f0h;
    int64_t var_c0h;
    int64_t var_b0h;
    int64_t var_a0h;
    int64_t var_90h;
    int64_t var_80h;
    int64_t var_70h;
    int64_t var_60h;
    int64_t var_50h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    xmm3 = arg10;
    xmm4 = arg11;
    rsi = arg2;
    r9 = arg6;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    rdi = argc;
    rbx = argv;
    rax = c;
    rdx = command_name;
    rcx = package;
    r15 = saved_opterr;
    r13 = usage_func;
    r8 = version;
    /* void parse_long_options(int argc,char ** argv,char const * command_name,char const * package,char const * version,void (*usage_func)(),va_args ..); */
    r13 = r9;
    rbx = rsi;
    if (al != 0) {
        *((rbp - 0xc0)) = xmm0;
        *((rbp - 0xb0)) = xmm1;
        *((rbp - 0xa0)) = xmm2;
        *((rbp - 0x90)) = xmm3;
        *((rbp - 0x80)) = xmm4;
        *((rbp - 0x70)) = xmm5;
        *((rbp - 0x60)) = xmm6;
        *((rbp - 0x50)) = xmm7;
    }
    eax = x;
    r9d = y;
    esi = rax - 1;
    esi *= eax;
    esi &= 1;
    if (r9d >= 0xa) {
        if (esi != 0) {
            goto label_0;
        }
    }
    r15d = opterr;
    do {
        r14 = rsp;
        r14 += 0xffffffffffffffe0;
        *(obj.opterr) = 0;
        if (r9d < 0xa) {
            goto label_1;
        }
        if (esi == 0) {
            goto label_1;
        }
label_0:
        *(obj.opterr) = 0;
        r15d = 0;
    } while (1);
label_1:
    if (edi != 2) {
        goto label_2;
    }
    *((rbp - 0x30)) = rdx;
    *((rbp - 0x38)) = rcx;
    r12 = r8;
    while (edx != 0) {
        edi = 2;
        edx = 0x408358;
        ecx = long_options;
        r8d = 0;
        rsi = rbx;
        getopt_long ();
        edi = 2;
        edx = 0x408358;
        ecx = long_options;
        r8d = 0;
        rsi = rbx;
        getopt_long ();
        if (*(obj.y) < 0xa) {
            goto label_3;
        }
        ecx = x;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
    }
label_3:
    if (eax != 0x68) {
        rdx = *((rbp - 0x38));
        rsi = *((rbp - 0x30));
        if (eax != 0x76) {
            goto label_2;
        }
        rax = rbp - 0xf0;
        *((r14 + 0x10)) = rax;
        rax = rbp + 0x10;
        *((r14 + 8)) = rax;
        *((r14 + 4)) = 0x30;
        *(r14) = 0x30;
        rdi = stdout;
        rcx = r12;
        r8 = r14;
        version_etc_va ();
        exit (0);
    }
    edi = 0;
invalid_funccall(); //    void (*r13)() ();
label_2:
    *(obj.opterr) = r15d;
    *(obj.optind) = 0;
    rsp = rbp - 0x28;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402c90 */
#include <stdint.h>
 
uint64_t dbg_parse_gnu_standard_options_only (int64_t arg_10h, int64_t arg_18h, int64_t arg1, int64_t arg10, int64_t arg11, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg7, int64_t arg8, int64_t arg9, char ** argv, int32_t c, char const * optstring, int32_t saved_opterr, void (*usage_func)()) {
    int64_t var_f0h;
    int64_t var_c0h;
    int64_t var_b0h;
    int64_t var_a0h;
    int64_t var_90h;
    int64_t var_80h;
    int64_t var_70h;
    int64_t var_60h;
    int64_t var_50h;
    char const * version;
    char const * package;
    char const * command_name;
    int64_t var_28h;
    rdi = arg1;
    xmm3 = arg10;
    xmm4 = arg11;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    r13 = argv;
    rax = c;
    r14 = optstring;
    r12 = saved_opterr;
    rbx = usage_func;
    /* void parse_gnu_standard_options_only(int argc,char ** argv,char const * command_name,char const * package,char const * version,_Bool scan_all,void (*usage_func)(),va_args ..); */
    *((rbp - 0x40)) = r8;
    *((rbp - 0x38)) = rcx;
    *((rbp - 0x30)) = rdx;
    r13 = rsi;
    ebx = edi;
    if (al != 0) {
        *((rbp - 0xc0)) = xmm0;
        *((rbp - 0xb0)) = xmm1;
        *((rbp - 0xa0)) = xmm2;
        *((rbp - 0x90)) = xmm3;
        *((rbp - 0x80)) = xmm4;
        *((rbp - 0x70)) = xmm5;
        *((rbp - 0x60)) = xmm6;
        *((rbp - 0x50)) = xmm7;
    }
    eax = 0x408096;
    r14d = 0x408358;
    if (r9b != 0) {
        r14 = rax;
    }
    if (*(obj_y_5) < 0xa) {
        goto label_0;
    }
    eax = x_4;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_0:
        r15 = rsp;
        r15 += 0xffffffffffffffe0;
        r12d = opterr;
        *(obj.opterr) = 1;
        ecx = long_options;
        r8d = 0;
        edi = ebx;
        rsi = r13;
        rdx = r14;
        getopt_long ();
        if (*(obj_y_5) < 0xa) {
            goto label_1;
        }
        ecx = x_4;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_1;
        }
        *(obj.opterr) = 1;
        ecx = long_options;
        r8d = 0;
        edi = ebx;
        rsi = r13;
        rdx = r14;
        eax = getopt_long ();
    }
label_1:
    if (eax == 0xffffffff) {
        goto label_2;
    }
    rbx = *((rbp + 0x10));
    if (eax == 0x68) {
        goto label_3;
    }
    if (eax != 0x76) {
        goto label_4;
    }
    rax = rbp - 0xf0;
    *((r15 + 0x10)) = rax;
    rax = rbp + 0x18;
    *((r15 + 8)) = rax;
    *((r15 + 4)) = 0x30;
    *(r15) = 0x30;
    rdi = stdout;
    rsi = *((rbp - 0x30));
    rdx = *((rbp - 0x38));
    rcx = *((rbp - 0x40));
    r8 = r15;
    version_etc_va ();
    exit (0);
    do {
        edi = *(obj.exit_failure);
invalid_funccall(); //        void (*rbx)() ();
label_4:
        edi = *(obj.exit_failure);
invalid_funccall(); //        void (*rbx)() ();
        if (*(obj_y_5) < 0xa) {
            goto label_2;
        }
        eax = x_4;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
    } while (ecx != 0);
    goto label_2;
label_3:
    edi = 0;
invalid_funccall(); //    void (*rbx)() ();
label_2:
    *(obj.opterr) = r12d;
    rsp = rbp - 0x28;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402e30 */
#include <stdint.h>
 
uint64_t dbg_set_program_name (char ** arg1, char const * base, char const * slash) {
    rdi = arg1;
    r14 = base;
    rax = slash;
    /* void set_program_name(char const * argv0); */
    rbx = rdi;
    if (rbx == 0) {
        goto label_0;
    }
    rax = strrchr (rbx, 0x2f);
    r14 = rax + 1;
    if (rax == 0) {
        r14 = rbx;
    }
    rax = r14;
    rax -= rbx;
    if (rax < 7) {
        goto label_1;
    }
    if (*(obj.y) < 0xa) {
        goto label_2;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx == 0) {
        goto label_2;
    }
    while (1);
label_2:
    eax = strncmp (r14 - 7, "/.libs/", 7);
    if (eax == 0) {
        eax = strncmp (r14, 0x408410, 3);
        if (eax == 0) {
            r14 += 3;
            *(obj.__progname) = r14;
        }
        rbx = r14;
    }
label_1:
    *(obj.program_name) = rbx;
    *(obj.program_invocation_name) = rbx;
    return rax;
label_0:
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 0x37, 1, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x402f00 */
#include <stdint.h>
 
uint64_t dbg_clone_quoting_options (int64_t arg1, quoting_options * o, quoting_options * p) {
    int32_t e;
    rdi = arg1;
    rbx = o;
    rax = p;
    /* quoting_options * clone_quoting_options(quoting_options * o); */
    rbx = rdi;
    rax = errno_location ();
    r14 = rax;
    ebp = *(r14);
    eax = default_quoting_options;
    if (rbx == 0) {
        rbx = rax;
    }
    esi = 0x38;
    rdi = rbx;
    xmemdup ();
    *(r14) = ebp;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402f40 */
#include <stdint.h>
 
int64_t dbg_get_quoting_style (quoting_options const * o) {
    rdi = o;
    /* quoting_style get_quoting_style(quoting_options const * o); */
    eax = default_quoting_options;
    if (rdi != 0) {
        rax = rdi;
    }
    eax = *(rax);
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402f50 */
#include <stdint.h>
 
int64_t dbg_set_quoting_style (quoting_options * o, enum quoting_style s) {
    rdi = o;
    rsi = s;
    /* void set_quoting_style(quoting_options * o,quoting_style s); */
    if (*(obj_y_22) < 0xa) {
        goto label_0;
    }
    eax = x_21;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_0:
        eax = default_quoting_options;
        if (rdi != 0) {
            rax = rdi;
        }
        *(rax) = esi;
        if (*(obj_y_22) < 0xa) {
            goto label_1;
        }
        eax = x_21;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx == 0) {
            goto label_1;
        }
        eax = default_quoting_options;
        if (rdi != 0) {
            rax = rdi;
        }
        *(rax) = esi;
    }
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402fb0 */
#include <stdint.h>
 
int32_t set_char_quoting (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = esi;
    esi = default_quoting_options;
    if (rdi != 0) {
        rsi = rdi;
    }
    eax = ecx;
    al >>= 5;
    r8d = (int32_t) al;
    r9d = *((rsi + r8*4 + 8));
    edi = *((rsi + r8*4 + 8));
    edi >>= cl;
    eax = edi;
    eax &= 1;
    edi ^= edx;
    edi &= 1;
    edi <<= cl;
    edi ^= r9d;
    *((rsi + r8*4 + 8)) = edi;
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402ff0 */
#include <stdint.h>
 
int32_t dbg_set_quoting_flags (int32_t i, quoting_options * o, int32_t r) {
    rsi = i;
    rdi = o;
    rax = r;
    /* int set_quoting_flags(quoting_options * o,int i); */
    ecx = default_quoting_options;
    if (rdi != 0) {
        rcx = rdi;
    }
    eax = *((rcx + 4));
    *((rcx + 4)) = esi;
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x403010 */
#include <stdint.h>
 
int64_t set_custom_quoting (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    eax = default_quoting_options;
    if (rdi != 0) {
        rax = rdi;
    }
    *(rax) = 0xa;
    if (rsi != 0) {
        if (rdx == 0) {
            goto label_0;
        }
        *((rax + 0x28)) = rsi;
        *((rax + 0x30)) = rdx;
        return rax;
    }
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x403040 */
#include <stdint.h>
 
uint64_t dbg_quotearg_buffer (int64_t arg_4h, int64_t arg_8h, int64_t arg_28h, int64_t arg_30h, char const * arg, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, size_t argsize, char * buffer, size_t buffersize, quoting_options const * o, size_t r) {
    quoting_options const * p;
    int32_t e;
    int64_t var_4h;
    r15 = arg;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = argsize;
    r13 = buffer;
    r12 = buffersize;
    r8 = o;
    rax = r;
    /* size_t quotearg_buffer(char * buffer,size_t buffersize,char const * arg,size_t argsize,quoting_options const * o); */
    r14 = rcx;
    r15 = rdx;
    r12 = rsi;
    r13 = rdi;
    if (r8 != 0) {
    }
    rax = errno_location ();
    rbx = rax;
    eax = *(rbx);
    *((rsp + 4)) = eax;
    rax = rbp + 8;
    quotearg_buffer_restyled (r13, r12, r15, r14, *(rbp), *((rbp + 4)));
    ecx = *((rsp + 4));
    *(rbx) = ecx;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4030c0 */
#include <stdint.h>
 
int64_t dbg_quotearg_buffer_restyled (int64_t arg_128h, uint32_t arg_110h, int64_t arg_118h, int64_t arg_120h, uint32_t arg2, uint32_t arg4, int64_t arg5, int64_t arg6, char * buffer, size_t bytes, unsigned char c, _Bool elide_outer_quotes, unsigned char esc, enum quoting_style quoting_style) {
    char const * left_quote;
    uint32_t var_eh;
    uint32_t var_fh;
    int64_t var_10h;
    char const * quote_string;
    int64_t var_1ch;
    int64_t var_23h;
    uint32_t var_24h;
    int64_t var_2ah;
    uint32_t var_2bh;
    int64_t var_2ch;
    uint32_t var_2dh;
    uint32_t var_2eh;
    uint32_t var_2fh;
    size_t n;
    void * s2;
    size_t * var_40h;
    char ** ubp_av;
    int64_t var_50h;
    char const * right_quote;
    int64_t var_60h;
    uint32_t var_68h;
    int32_t flags;
    uint32_t var_70h;
    char * s;
    uint32_t var_80h;
    wchar_t w;
    int64_t var_90h;
    size_t * var_98h;
    int64_t var_a0h;
    uint32_t var_a4h;
    uint32_t var_a8h;
    wint_t wc;
    int64_t var_b0h;
    size_t * var_b8h;
    mbstate_t * ps;
    uint32_t var_c8h;
    int64_t var_d0h;
    rsi = arg2;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rdi = buffer;
    r14 = bytes;
    rdx = c;
    r13 = elide_outer_quotes;
    xmm5 = esc;
    r12 = quoting_style;
    /* size_t quotearg_buffer_restyled(char * buffer,size_t buffersize,char const * arg,size_t argsize,quoting_style quoting_style,int flags,unsigned int const * quote_these_too,char const * left_quote,char const * right_quote); */
label_29:
    ebx = r9d;
    r12d = r8d;
    *((rsp + 0x80)) = rcx;
    *((rsp + 0x48)) = rdx;
    r15 = rsi;
    *((rsp + 0x40)) = rdi;
    rax = *((rsp + 0x120));
    *((rsp + 0x78)) = rax;
    rbp = *((rsp + 0x118));
    rax = ctype_get_mb_cur_max ();
    *((rsp + 0xc8)) = rax;
    r13d = ebx;
    r13b >>= 1;
    r13b &= 1;
    eax = ebx;
    eax &= 1;
    *((rsp + 0xa8)) = eax;
    *((rsp + 0x8c)) = ebx;
    ebx &= 4;
    *((rsp + 0xa4)) = ebx;
    r10b = 1;
    eax = 0;
    *((rsp + 0x68)) = rax;
    eax = 0;
    *((rsp + 0x38)) = rax;
    eax = 0;
    *((rsp + 0x30)) = rax;
    eax = 0;
    *((rsp + 0x50)) = rax;
    *((rsp + 0x1c)) = 0;
    eax = 0;
    *((rsp + 0x90)) = rax;
label_28:
    if (r12d > 0xa) {
        goto label_30;
    }
    eax = r12d;
    ecx = 0;
    ebx = 0;
    esi = 0;
    rdi = *((rsp + 0x40));
    r8 = r15;
    r11 = *((rsp + 0x80));
    /* switch table (11 cases) at 0x408420 */
    if (*(obj_y_32) < 0xa) {
        goto label_31;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx != 0) {
        goto label_32;
    }
    goto label_31;
    eax = x_31;
    ecx = y_32;
    if (ecx < 0xa) {
        goto label_33;
        al = 1;
        *((rsp + 0x50)) = rax;
        if (*(obj_y_32) >= 0xa) {
            eax = x_31;
            ecx = rax - 1;
            ecx *= eax;
            ecx &= 1;
            if (ecx != 0) {
                goto label_34;
            }
        }
        r13b = 1;
        eax = x_31;
        ecx = y_32;
        if (ecx >= 0xa) {
            edx = rax - 1;
            edx *= eax;
            edx &= 1;
            if (edx != 0) {
                goto label_35;
            }
        }
        dl = 1;
        if ((r13b & 1) != 0) {
            rdx = *((rsp + 0x50));
        }
        *((rsp + 0x50)) = rdx;
        if (ecx < 0xa) {
            goto label_33;
        }
    }
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx != 0) {
        goto label_36;
    }
label_33:
    ecx = 2;
    if ((r13b & 1) != 0) {
        goto label_37;
    }
    if (r8 == 0) {
        goto label_38;
    }
    *(rdi) = 0x27;
    if (*(obj_y_32) < 0xa) {
        goto label_38;
    }
    do {
        eax = x_31;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx == 0) {
            goto label_39;
        }
        *(rdi) = 0x27;
    } while (*(obj_y_32) >= 0xa);
label_39:
    ebx = 1;
    eax = 0x40894a;
    *((rsp + 0x38)) = rax;
    eax = 1;
    *((rsp + 0x30)) = rax;
    sil = r13b;
    ecx = 2;
    goto label_40;
label_37:
    ebx = 0;
    eax = 0x40894a;
    goto label_41;
    al = 1;
    *((rsp + 0x50)) = rax;
    ecx = 5;
    if ((r13b & 1) == 0) {
        if (r8 != 0) {
            *(rdi) = 0x22;
        }
        ebx = 1;
        goto label_42;
        al = 1;
        *((rsp + 0x50)) = rax;
        ecx = 5;
        ebx = 0;
        eax = 0x408946;
        *((rsp + 0x38)) = rax;
        eax = 1;
        *((rsp + 0x30)) = rax;
        sil = 1;
        goto label_40;
        ebx = 0;
        al = 1;
        *((rsp + 0x50)) = rax;
        ecx = 7;
        esi = 0;
        if (*(obj_y_32) < 0xa) {
            goto label_40;
        }
        eax = x_31;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        ecx = 7;
        esi = 0;
        if (ecx == 0) {
            goto label_40;
        }
        goto label_43;
label_38:
        ebx = 1;
        eax = 0x40894a;
    } else {
        ebx = 0;
label_42:
        eax = 0x408946;
    }
label_41:
    *((rsp + 0x38)) = rax;
    eax = 1;
    *((rsp + 0x30)) = rax;
    sil = r13b;
    goto label_40;
    do {
label_31:
        ebx = r10d;
        rax = gettext_quote (0x408948, r12d);
        rax = gettext_quote (0x40894a, r12d);
        *((rsp + 0x78)) = rax;
        if (*(obj_y_32) < 0xa) {
            goto label_44;
        }
        eax = x_31;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        rdi = *((rsp + 0x40));
        r8 = r15;
        r10d = ebx;
        if (ecx == 0) {
            goto label_45;
        }
label_32:
        ebx = r10d;
        gettext_quote (0x408948, r12d);
        gettext_quote (0x40894a, r12d);
        r10d = ebx;
    } while (1);
label_44:
    rdi = *((rsp + 0x40));
    r8 = r15;
    r10d = ebx;
label_45:
    if ((r13b & 1) != 0) {
        goto label_46;
    }
    if (*(obj_y_32) >= 0xa) {
        eax = x_31;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx != 0) {
            goto label_47;
        }
    }
    edx = 0;
    do {
label_0:
        eax = *((rbp + rdx));
        if (al == 0) {
            goto label_48;
        }
        if (rdx < r8) {
            *((rdi + rdx)) = al;
        }
        rdx++;
    } while (*(obj_y_32) < 0xa);
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx == 0) {
        goto label_0;
    }
    goto label_47;
label_46:
    *((rsp + 0x70)) = rbp;
    r14d = r10d;
    ebx = 0;
    goto label_49;
label_48:
    *((rsp + 0x70)) = rbp;
    rbx = rdx;
    r14d = r10d;
label_49:
    rbp = *((rsp + 0x78));
    rax = strlen (*((rsp + 0x78)));
    *((rsp + 0x30)) = rax;
    al = 1;
    *((rsp + 0x50)) = rax;
    *((rsp + 0x38)) = rbp;
    sil = r13b;
    r8 = r15;
    r11 = *((rsp + 0x80));
    r10d = r14d;
    ecx = r12d;
    rbp = *((rsp + 0x70));
label_40:
    *((rsp + 0x70)) = rbp;
    r14d = x_31;
    r13d = y_32;
    if (r13d >= 0xa) {
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_50;
        }
    }
    dl = (*((rsp + 0x110)) != 0) ? 1 : 0;
    rbp = *((rsp + 0x50));
    rdi = rbx;
    r9d = r10d;
    r10 = r8;
    r8d = ecx;
    ebx = ebp;
    bl &= 1;
    *(rsp + 0x2a) = (bl == 0) ? 1 : 0;
    r15b = (r8d != 2) ? 1 : 0;
    al = (r8d == 2) ? 1 : 0;
    ecx = r15d;
    *((rsp + 0xf)) = bl;
    cl &= bl;
    r12b = (*((rsp + 0x30)) != 0) ? 1 : 0;
    ebx = r12d;
    *((rsp + 0x2f)) = cl;
    bl &= cl;
    *((rsp + 0x80)) = bl;
    ebx = esi;
    bl &= 1;
    cl = (bl == 0) ? 1 : 0;
    al &= bl;
    *((rsp + 0x2c)) = al;
    *((rsp + 0xe)) = bl;
    dl &= bl;
    *((rsp + 0x24)) = r8d;
    r8 = r10;
    r10d = r9d;
    r9 = r11;
    r11 = rdi;
    rdi = *((rsp + 0x40));
    *((rsp + 0x2e)) = dl;
    edx = r13d;
    cl |= r15b;
    *((rsp + 0x2d)) = cl;
    eax = ebp;
    *((rsp + 0xd0)) = rsi;
    al &= sil;
    al &= r12b;
    *((rsp + 0x2b)) = al;
    r13d = 0;
    r15 = *((rsp + 0x48));
    goto label_51;
label_26:
    r11 += 2;
    ecx = 0;
    goto label_25;
label_22:
    ecx = 0x10;
label_2:
    bpl = r10b;
    if (edx >= 0xa) {
        goto label_18;
    }
    goto label_19;
    do {
label_10:
        *((rdi + rax)) = 0x22;
        if (*(obj_y_32) < 0xa) {
            goto label_9;
        }
        esi = x_31;
        ebp = rsi - 1;
        ebp *= esi;
        ebp &= 1;
        if (ebp == 0) {
            goto label_9;
        }
label_11:
        *((rdi + rax)) = 0x22;
    } while (1);
label_9:
    rax = r11 + 3;
    if (rax >= r8) {
        goto label_52;
    }
    if (*(obj_y_32) < 0xa) {
        goto label_53;
    }
    esi = x_31;
    ebp = rsi - 1;
    ebp *= esi;
    ebp &= 1;
    while (1) {
label_53:
        *((rdi + rax)) = 0x3f;
        if (*(obj_y_32) < 0xa) {
            goto label_52;
        }
        esi = x_31;
        ebp = rsi - 1;
        ebp *= esi;
        ebp &= 1;
        if (ebp == 0) {
            goto label_52;
        }
        *((rdi + rax)) = 0x3f;
    }
label_52:
    r11 += 4;
    eax = 0;
    r13 = rcx;
    r12b = dl;
    goto label_54;
label_1:
    if (edx >= 0xa) {
label_18:
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_55;
        }
    }
label_19:
    if (ecx == 0) {
        goto label_56;
    }
    if (ecx == 0xf) {
        goto label_56;
    }
    goto label_57;
    do {
label_14:
        *((rdi + rax)) = 0x24;
        r14d = x_31;
        edx = y_32;
        if (edx < 0xa) {
            goto label_13;
        }
        ecx = r14 - 1;
        ecx *= r14d;
        ecx &= 1;
        if (ecx == 0) {
            goto label_13;
        }
label_15:
        *((rdi + rax)) = 0x24;
    } while (1);
label_13:
    rax = r11 + 2;
    if (rax >= r8) {
        goto label_58;
    }
    if (edx < 0xa) {
        goto label_59;
    }
    ecx = r14 - 1;
    ecx *= r14d;
    ecx &= 1;
    while (1) {
label_59:
        *((rdi + rax)) = 0x27;
        r14d = x_31;
        edx = y_32;
        if (edx < 0xa) {
            goto label_58;
        }
        ecx = r14 - 1;
        ecx *= r14d;
        ecx &= 1;
        if (ecx == 0) {
            goto label_58;
        }
        *((rdi + rax)) = 0x27;
    }
label_58:
    r11 += 3;
    cl = 1;
label_12:
    if (edx >= 0xa) {
label_16:
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_60;
        }
    }
label_17:
    if (r11 < r8) {
        *((rdi + r11)) = 0x5c;
    }
    r11++;
    r12b = sil;
label_25:
    r14d = x_31;
    edx = y_32;
    if (r11 >= r8) {
        goto label_61;
    }
    if (edx < 0xa) {
        goto label_62;
    }
    eax = r14 - 1;
    eax *= r14d;
    eax &= 1;
    if (eax != 0) {
        goto label_63;
    }
    do {
label_62:
        *((rdi + r11)) = r12b;
        r14d = x_31;
        edx = y_32;
        if (edx < 0xa) {
            goto label_61;
        }
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax == 0) {
            goto label_61;
        }
label_63:
        *((rdi + r11)) = r12b;
    } while (1);
label_61:
    *((rsp + 0x1c)) = ecx;
    r11++;
    bpl = -bpl;
    bpl &= r10b;
    ecx = 0;
    if (edx < 0xa) {
        goto label_1;
    }
    eax = r14 - 1;
    eax *= r14d;
    eax &= 1;
    if (eax == 0) {
        goto label_1;
    }
    goto label_64;
label_56:
    r13++;
    r10d = ebp;
label_51:
    *((rsp + 0x10)) = edx;
    if (r9 != -1) {
        if (r13 != r9) {
            goto label_65;
        }
        goto label_66;
    }
    if (*((r15 + r13)) == 0) {
        goto label_67;
    }
label_65:
    if (*((rsp + 0x80)) != 0) {
        rax = *((rsp + 0x30));
        r12 = r13 + rax;
        if (rax >= 2) {
            if (r9 != -1) {
                goto label_68;
            }
            rbx = r8;
            r15d = r10d;
            rax = strlen (r15);
            edx = *((rsp + 0x10));
            r11 = rbp;
            r10d = r15d;
            r8 = rbx;
            r15 = *((rsp + 0x48));
            rdi = *((rsp + 0x40));
            r9 = rax;
            if (r12 > r9) {
                goto label_69;
            }
            goto label_70;
        }
label_68:
        if (edx >= 0xa) {
            eax = r14 - 1;
            eax *= r14d;
            eax &= 1;
            if (eax != 0) {
                goto label_71;
            }
        }
        if (r12 <= r9) {
            goto label_70;
        }
    }
label_69:
    ebx = 0;
label_3:
    if (edx >= 0xa) {
label_4:
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_72;
        }
    }
label_5:
    r12d = *((r15 + r13));
    if (r12 > 0x7e) {
        goto label_73;
    }
    bpl = 1;
    cl = 0x74;
    sil = 0x62;
    edx = 0;
    eax = 0;
    /* switch table (127 cases) at 0x408478 */
label_7:
    if (*((rsp + 0x2f)) == 0) {
        goto label_20;
    }
label_6:
    if (*((rsp + 0x110)) != 0) {
        goto label_74;
    }
    goto label_75;
label_70:
    if (edx >= 0xa) {
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_76;
        }
    }
    *((rsp + 0x58)) = r14;
    rax = r15;
    r15 = r11;
    r12d = r10d;
    rbx = r9;
    rcx = r13;
    r13 = rax;
    r14 = rcx;
    eax = memcmp (rax + rcx, *((rsp + 0x38)), *((rsp + 0x30)));
    al = (eax == 0) ? 1 : 0;
    if (eax != 0) {
        goto label_77;
    }
    ecx = 0x10;
    rdi = *((rsp + 0x40));
    r8 = rbp;
    r9 = rbx;
    r10d = r12d;
    r11 = r15;
    r15 = r13;
    r13 = r14;
    ebx = eax;
    r14 = *((rsp + 0x58));
    edx = *((rsp + 0x10));
    if (*((rsp + 0xe)) != 0) {
        goto label_2;
    }
    goto label_3;
label_77:
    rdi = *((rsp + 0x40));
    r8 = rbp;
    r9 = rbx;
    r10d = r12d;
    r11 = r15;
    r15 = r13;
    r13 = r14;
    ebx = eax;
    r14 = *((rsp + 0x58));
    edx = *((rsp + 0x10));
    if (edx >= 0xa) {
        goto label_4;
    }
    goto label_5;
    if (r13 != 0) {
        goto label_78;
    }
    goto label_79;
    eax = 0;
    if (r9 == -1) {
        goto label_80;
    }
    if (r13 != 0) {
        goto label_54;
    }
    if (r9 == 1) {
        goto label_79;
    }
    goto label_54;
    if (*((rsp + 0xf)) == 0) {
        goto label_81;
    }
    ecx = 0x10;
    edx = *((rsp + 0x10));
    if (*((rsp + 0xe)) != 0) {
        goto label_2;
    }
    if (*((rsp + 0x24)) != 2) {
        goto label_82;
    }
    eax = *((rsp + 0x1c));
    al &= 1;
    if (al != 0) {
        goto label_82;
    }
    if (r11 < r8) {
        *((rdi + r11)) = 0x27;
        r14d = x_31;
        edx = y_32;
    }
    if (edx >= 0xa) {
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_83;
        }
    }
    rax = r11 + 1;
    if (rax >= r8) {
        goto label_84;
    }
    do {
        *((rdi + rax)) = 0x24;
        if (*(obj_y_32) < 0xa) {
            goto label_84;
        }
        ecx = x_31;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
    } while (edx != 0);
label_84:
    rax = r11 + 2;
    if (rax < r8) {
        *((rdi + rax)) = 0x27;
    }
    r11 += 3;
    al = 1;
    *((rsp + 0x1c)) = eax;
label_82:
    rcx = r11;
    if (rcx < r8) {
        *((rdi + rcx)) = 0x5c;
    }
    r11 = rcx + 1;
    al = 1;
    r12b = 0x30;
    if (*((rsp + 0x24)) == 2) {
        goto label_54;
    }
    if (*(obj_y_32) >= 0xa) {
        edx = x_31;
        esi = rdx - 1;
        esi *= edx;
        esi &= 1;
        if (esi != 0) {
            goto label_85;
        }
    }
    rdx = r13 + 1;
    if (rdx >= r9) {
        goto label_54;
    }
    dl = *((r15 + rdx));
    dl += 0xd0;
    if (dl > 9) {
        goto label_54;
    }
    if (r11 < r8) {
        *((rdi + r11)) = 0x30;
    }
    rdx = rcx + 2;
    if (rdx < r8) {
        *((rdi + rdx)) = 0x30;
    }
    rcx += 3;
    ebp = 0;
    r11 = rcx;
    if (*((rsp + 0x2f)) != 0) {
        goto label_6;
    }
    goto label_20;
    sil = 0x61;
    goto label_86;
    cl = 0x6e;
    goto label_87;
    sil = 0x76;
    goto label_86;
    sil = 0x66;
    goto label_86;
    cl = 0x72;
    goto label_87;
    r12b = 0x27;
    if (*((rsp + 0x24)) != 2) {
        goto label_88;
    }
    if (*((rsp + 0xe)) != 0) {
        goto label_89;
    }
    al = (r8 == 0) ? 1 : 0;
    rcx = *((rsp + 0x68));
    rdx = *((rsp + 0x68));
    cl = (rdx != 0) ? 1 : 0;
    cl |= al;
    if (cl == 0) {
        rdx = r8;
    }
    *((rsp + 0x68)) = rdx;
    eax = 0;
    if (cl == 0) {
        r8 = rax;
    }
    if (r11 < r8) {
        *((rdi + r11)) = 0x27;
    }
    rax = r11 + 1;
    if (rax < r8) {
        *((rdi + rax)) = 0x5c;
    }
    eax = x_31;
    ecx = y_32;
    if (ecx >= 0xa) {
        edx = rax - 1;
        edx *= eax;
        edx &= 1;
        if (edx != 0) {
            goto label_90;
        }
    }
    rdx = r11 + 2;
    if (rdx >= r8) {
        goto label_91;
    }
    do {
        *((rdi + rdx)) = 0x27;
        eax = x_31;
        ecx = y_32;
        if (ecx < 0xa) {
            goto label_91;
        }
        esi = rax - 1;
        esi *= eax;
        esi &= 1;
    } while (esi != 0);
label_91:
    if (ecx >= 0xa) {
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx != 0) {
            goto label_92;
        }
    }
    r11 += 3;
    al = 1;
    *((rsp + 0x90)) = rax;
    *((rsp + 0x1c)) = 0;
    goto label_93;
    r12b = 0x3f;
    eax = *((rsp + 0x24));
    if (eax == 5) {
        goto label_94;
    }
    if (eax != 2) {
        goto label_78;
    }
    ecx = 0x10;
    if (*((rsp + 0xe)) != 0) {
        goto label_95;
    }
    goto label_78;
    if (*((rsp + 0x24)) != 2) {
        goto label_96;
    }
    ecx = 0x10;
    if (*((rsp + 0xe)) != 0) {
        goto label_95;
    }
    r12b = 0x5c;
    eax = 0;
    goto label_97;
label_73:
    *((rsp + 0x98)) = r11;
    *((rsp + 0x23)) = r10b;
    *((rsp + 0xb8)) = r8;
    if (*((rsp + 0xc8)) != 1) {
        goto label_98;
    }
    rax = ctype_b_loc ();
    r9 = rbp;
    rax = *(rax);
    ebp = *((rax + r12*2));
    ebp >>= 0xe;
    bpl &= 1;
    ecx = 1;
    edx = *((rsp + 0x10));
    goto label_99;
label_80:
    if (r13 != 0) {
        goto label_100;
    }
    cl = *((r15 + 1));
    if (cl != 0) {
        goto label_100;
    }
label_79:
    dl = 1;
    if (*((rsp + 0x24)) == 2) {
        ecx = 0x10;
        if (*((rsp + 0xe)) != 0) {
            goto label_95;
        }
    }
    eax = 0;
    bpl = dl;
    if (*((rsp + 0x2f)) != 0) {
        goto label_6;
    }
    goto label_20;
label_81:
    ecx = 0xf;
    edx = *((rsp + 0x10));
    if (*((rsp + 0xa8)) != 0) {
        goto label_2;
    }
    r12d = 0;
    goto label_78;
label_88:
    al = 1;
    *((rsp + 0x90)) = rax;
label_93:
    eax = 0;
    bpl = 1;
    if (*((rsp + 0x2f)) != 0) {
        goto label_6;
    }
    goto label_20;
label_96:
    cl = 0x5c;
    if (*((rsp + 0x2b)) != 0) {
        eax = 0;
        r12b = 0x5c;
label_97:
        ebp = 0;
        goto label_101;
    }
label_87:
    esi = ecx;
    if (*((rsp + 0x2d)) == 0) {
        goto label_102;
    }
label_86:
    eax = 0;
    if (*((rsp + 0xf)) != 0) {
        goto label_103;
    }
    goto label_7;
label_98:
    *((rsp + 0xa0)) = ebx;
    *((rsp + 0xc0)) = 0;
    if (r9 == -1) {
        rax = strlen (r15);
        r9 = rax;
    }
    rax = r15 + r13;
    *((rsp + 0xb0)) = rax;
    al = 1;
    ecx = 0;
    *((rsp + 0x60)) = r13;
label_8:
    *((rsp + 0x10)) = eax;
    r14 = rcx;
    rbp = rcx + r13;
    r13 = r9;
    r9 -= rbp;
    rdx = r9;
    rcx = rsp + 0xc0;
    rax = rpl_mbrtowc (rsp + 0xac, r15 + rbp);
    rbx = rax;
    if (rbx == 0) {
        goto label_104;
    }
    if (*(obj_y_32) >= 0xa) {
        eax = x_31;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx != 0) {
            goto label_105;
        }
    }
    if (rbx == -1) {
        goto label_106;
    }
    r9 = r13;
    if (rbx == 0xfffffffffffffffe) {
        goto label_107;
    }
    al = (rbx > 1) ? 1 : 0;
    al &= *((rsp + 0x2c));
    rsi = 0x20000002b;
    if (al != 1) {
        goto label_108;
    }
    rax = *((rsp + 0xb0));
    rax = rax + r14;
    ecx = 1;
    do {
        edx = *((rax + rcx));
        edx += 0xffffffa5;
        if (edx <= 0x21) {
            if (((rsi >> rdx) & 1) < 0) {
                goto label_109;
            }
        }
        rcx++;
    } while (rcx < rbx);
label_108:
    eax = iswprint (*((rsp + 0xac)));
    *((rsp + 0x58)) = 0;
    if (eax != 0) {
        ebp = *((rsp + 0x10));
    }
    r14 += rbx;
    eax = mbsinit (rsp + 0xc0);
    rcx = r14;
    al = bpl;
    r15 = *((rsp + 0x48));
    r9 = r13;
    r13 = *((rsp + 0x60));
    if (eax == 0) {
        goto label_8;
    }
    goto label_110;
label_100:
    r9 = 0xffffffffffffffff;
    goto label_54;
label_109:
    *((rsp + 0x58)) = 0x10;
    ebp = *((rsp + 0x10));
    r15 = *((rsp + 0x48));
    r13 = *((rsp + 0x60));
    rcx = r14;
    goto label_110;
label_94:
    if (*((rsp + 0xa4)) == 0) {
        goto label_78;
    }
    rcx = r13 + 2;
    if (rcx >= r9) {
        goto label_78;
    }
    if (*((r15 + r13 + 1)) != 0x3f) {
        goto label_78;
    }
    edx = *((r15 + rcx));
    eax = 0;
    if (edx > 0x3e) {
        goto label_54;
    }
    rsi = 0x7000a38200000000;
    if (((rsi >> rdx) & 1) >= 0) {
        goto label_54;
    }
    if (*((rsp + 0xe)) != 0) {
        goto label_102;
    }
    if (r11 >= r8) {
        goto label_111;
    }
    do {
        *((rdi + r11)) = 0x3f;
        r14d = x_31;
        eax = y_32;
        *((rsp + 0x10)) = eax;
        if (eax < 0xa) {
            goto label_111;
        }
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
    } while (eax != 0);
label_111:
    if (*((rsp + 0x10)) >= 0xa) {
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_112;
        }
    }
    rax = r11 + 1;
    if (rax < r8) {
        *((rdi + rax)) = 0x22;
    }
    rax = r11 + 2;
    if (rax >= r8) {
        goto label_9;
    }
    if (*(obj_y_32) < 0xa) {
        goto label_10;
    }
    esi = x_31;
    ebp = rsi - 1;
    ebp *= esi;
    ebp &= 1;
    if (ebp != 0) {
        goto label_11;
    }
    goto label_10;
label_78:
    eax = 0;
label_54:
    ebp = 0;
    if (*((rsp + 0x2f)) != 0) {
        goto label_6;
    }
label_20:
    if (*((rsp + 0x2e)) != 0) {
label_74:
        ecx = r12d;
        cl >>= 5;
        ecx = (int32_t) cl;
        rdx = *((rsp + 0x110));
        ecx = *((rdx + rcx*4));
        edx = (int32_t) r12b;
        if (((ecx >> edx) & 1) < 0) {
            esi = r12d;
        }
    } else {
label_75:
        r14d = x_31;
        edx = y_32;
        if (edx >= 0xa) {
            ecx = r14 - 1;
            ecx *= r14d;
            ecx &= 1;
            if (ecx != 0) {
                goto label_113;
            }
        }
        *((rsp + 0x10)) = edx;
        esi = r12d;
        if (bl == 0) {
            goto label_101;
        }
    }
label_103:
    r14d = x_31;
    ecx = 0x10;
    edx = y_32;
    if (*((rsp + 0xe)) != 0) {
        goto label_2;
    }
    if (edx >= 0xa) {
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_114;
        }
    }
    if (*((rsp + 0x24)) != 2) {
        goto label_115;
    }
    ecx = *((rsp + 0x1c));
    eax = *((rsp + 0x1c));
    al &= 1;
    if (al != 0) {
        goto label_12;
    }
    if (r11 >= r8) {
        goto label_116;
    }
    do {
        *((rdi + r11)) = 0x27;
        r14d = x_31;
        edx = y_32;
        if (edx < 0xa) {
            goto label_116;
        }
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
    } while (eax != 0);
label_116:
    rax = r11 + 1;
    if (rax >= r8) {
        goto label_13;
    }
    if (edx < 0xa) {
        goto label_14;
    }
    ecx = r14 - 1;
    ecx *= r14d;
    ecx &= 1;
    if (ecx != 0) {
        goto label_15;
    }
    goto label_14;
label_115:
    ecx = *((rsp + 0x1c));
    if (edx >= 0xa) {
        goto label_16;
    }
    goto label_17;
label_102:
    bpl = r10b;
    edx = *((rsp + 0x10));
    ecx = 0x10;
    if (edx >= 0xa) {
        goto label_18;
    }
    goto label_19;
label_89:
    ecx = 0x10;
    al = 1;
    *((rsp + 0x90)) = rax;
label_95:
    bpl = r10b;
    edx = *((rsp + 0x10));
    if (edx >= 0xa) {
        goto label_18;
    }
    goto label_19;
label_104:
    r15 = *((rsp + 0x48));
    r9 = r13;
    r13 = *((rsp + 0x60));
    rcx = r14;
    ebp = *((rsp + 0x10));
    goto label_117;
label_106:
    ebp = 0;
    r15 = *((rsp + 0x48));
    r9 = r13;
    goto label_118;
label_107:
    if (r9 <= rbp) {
        goto label_119;
    }
    r15 = *((rsp + 0x48));
    r13 = *((rsp + 0x60));
    rcx = r14;
    do {
        rax = *((rsp + 0xb0));
        if (*((rax + rcx)) == 0) {
            goto label_120;
        }
        rax = r13 + rcx + 1;
        rcx++;
    } while (rax < r9);
label_120:
    ebp = 0;
    goto label_117;
label_119:
    ebp = 0;
    r15 = *((rsp + 0x48));
label_118:
    r13 = *((rsp + 0x60));
    rcx = r14;
label_117:
    *((rsp + 0x58)) = 0;
label_110:
    r14d = x_31;
    edx = y_32;
    if (edx >= 0xa) {
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_121;
        }
    }
    ebx = *((rsp + 0xa0));
    if (*((rsp + 0x58)) == 0) {
        goto label_99;
    }
    al = *((rsp + 0x23));
    bpl = *((rsp + 0x23));
    rdi = *((rsp + 0x40));
    r8 = *((rsp + 0xb8));
    r11 = *((rsp + 0x98));
    ecx = *((rsp + 0x58));
    if (edx >= 0xa) {
        goto label_18;
    }
    goto label_19;
label_99:
    r10b = *((rsp + 0x23));
    if (edx >= 0xa) {
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_122;
        }
    }
    bpl &= 1;
    r8 = *((rsp + 0xb8));
    if (rcx > 1) {
        goto label_123;
    }
    eax = ebp;
    al |= *((rsp + 0x2a));
    if (al == 0) {
        goto label_123;
    }
    eax = 0;
    rdi = *((rsp + 0x40));
    r11 = *((rsp + 0x98));
    if (*((rsp + 0x2f)) != 0) {
        goto label_6;
    }
    goto label_20;
label_123:
    rcx += r13;
    *((rsp + 0x10)) = rcx;
    eax = 0;
    rdi = *((rsp + 0x40));
    r11 = *((rsp + 0x98));
    goto label_124;
label_23:
    rax = r11 + 2;
    if (rax < r8) {
        ecx = r12d;
        cl >>= 3;
        cl &= 7;
        cl |= 0x30;
        *((rdi + rax)) = cl;
    }
    r11 += 3;
    r12b &= 7;
    r12b |= 0x30;
    al = 1;
    do {
label_21:
        r14d = x_31;
        edx = y_32;
        if (edx >= 0xa) {
            ecx = r14 - 1;
            ecx *= r14d;
            ecx &= 1;
            if (ecx != 0) {
                goto label_125;
            }
        }
        rcx = r13 + 1;
        if (*((rsp + 0x10)) <= rcx) {
            goto label_126;
        }
        if ((*((rsp + 0x1c)) & 1) != 0) {
            edx = eax;
            dl &= 1;
            if (dl != 0) {
                goto label_127;
            }
            if (r11 < r8) {
                *((rdi + r11)) = 0x27;
            }
            rdx = r11 + 1;
            if (rdx < r8) {
                *((rdi + rdx)) = 0x27;
            }
            r11 += 2;
            *((rsp + 0x1c)) = 0;
        }
label_127:
        if (r11 < r8) {
            *((rdi + r11)) = r12b;
        }
        r14d = x_31;
        edx = y_32;
        if (edx >= 0xa) {
            esi = edx;
            edx = r14 - 1;
            edx *= r14d;
            edx &= 1;
            edx = esi;
            if (edx != 0) {
                goto label_128;
            }
        }
        r12b = *((r15 + rcx));
        r11++;
        r13 = rcx;
label_124:
        ecx = *((rsp + 0x1c));
        if (*((rsp + 0xf)) != 0) {
            if (edx >= 0xa) {
                ecx = r14 - 1;
                ecx *= r14d;
                ecx &= 1;
                ecx = *((rsp + 0x1c));
                if (ecx != 0) {
                    goto label_129;
                }
            }
            if (bpl == 0) {
                goto label_130;
            }
        }
    } while ((bl & 1) == 0);
    if (r11 < r8) {
        *((rdi + r11)) = 0x5c;
    }
    r11++;
    ebx = 0;
    goto label_21;
label_130:
    if (*((rsp + 0xe)) != 0) {
        goto label_22;
    }
    if (*((rsp + 0x24)) != 2) {
        goto label_131;
    }
    eax = ecx;
    al &= 1;
    if (al != 0) {
        goto label_131;
    }
    if (r11 >= r8) {
        goto label_132;
    }
    do {
        *((rdi + r11)) = 0x27;
        r14d = x_31;
        edx = y_32;
        if (edx < 0xa) {
            goto label_132;
        }
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
    } while (eax != 0);
label_132:
    rax = r11 + 1;
    if (rax < r8) {
        *((rdi + rax)) = 0x24;
        r14d = x_31;
        edx = y_32;
    }
    if (edx >= 0xa) {
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_133;
        }
    }
    rax = r11 + 2;
    if (rax >= r8) {
        goto label_134;
    }
    do {
        *((rdi + rax)) = 0x27;
        r14d = x_31;
        edx = y_32;
        if (edx < 0xa) {
            goto label_134;
        }
        ecx = r14 - 1;
        ecx *= r14d;
        ecx &= 1;
    } while (ecx != 0);
label_134:
    if (edx >= 0xa) {
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_135;
        }
    }
    r11 += 3;
    cl = 1;
label_131:
    if (r11 < r8) {
        *((rdi + r11)) = 0x5c;
        r14d = x_31;
        edx = y_32;
    }
    if (edx >= 0xa) {
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_136;
        }
    }
    *((rsp + 0x1c)) = ecx;
    rax = r11 + 1;
    if (rax >= r8) {
        goto label_23;
    }
    ecx = r12d;
    cl >>= 6;
    cl |= 0x30;
label_24:
    *((rdi + rax)) = cl;
    if (*(obj_y_32) < 0xa) {
        goto label_23;
    }
    edx = x_31;
    esi = rdx - 1;
    esi *= edx;
    esi &= 1;
    if (esi != 0) {
        goto label_24;
    }
    goto label_23;
label_126:
    *((rsp + 0x10)) = edx;
label_101:
    ecx = *((rsp + 0x1c));
    if ((cl & 1) == 0) {
        goto label_25;
    }
    al &= 1;
    eax = *((rsp + 0x10));
    if (al != 0) {
        goto label_25;
    }
    if (r11 < r8) {
        *((rdi + r11)) = 0x27;
        r14d = x_31;
        eax = y_32;
    }
    if (eax >= 0xa) {
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_137;
        }
    }
    rax = r11 + 1;
    if (rax >= r8) {
        goto label_26;
    }
label_27:
    *((rdi + rax)) = 0x27;
    if (*(obj_y_32) < 0xa) {
        goto label_26;
    }
    ecx = x_31;
    edx = rcx - 1;
    edx *= ecx;
    edx &= 1;
    if (edx != 0) {
        goto label_27;
    }
    goto label_26;
label_66:
    r9 = r13;
    goto label_138;
label_67:
    r9 = 0xffffffffffffffff;
label_138:
    edx = *((rsp + 0x24));
    al = (edx != 2) ? 1 : 0;
    cl = (r11 != 0) ? 1 : 0;
    if (*((rsp + 0xe)) != 0) {
        al |= cl;
        if (al == 0) {
            goto label_139;
        }
    }
    al = (edx != 2) ? 1 : 0;
    cl = (*((rsp + 0xe)) != 0) ? 1 : 0;
    if ((*((rsp + 0x90)) & 1) == 0) {
        goto label_140;
    }
    al |= cl;
    if (al != 0) {
        goto label_140;
    }
    if ((r10b & 1) != 0) {
        goto label_141;
    }
    if (*((rsp + 0x68)) == 0) {
        goto label_140;
    }
    if (r8 != 0) {
        goto label_140;
    }
    *((rsp + 0x80)) = r9;
    r12d = edx;
    rcx = *((rsp + 0xd0));
    r13d = ecx;
    r15 = *((rsp + 0x68));
    rbp = *((rsp + 0x70));
    if (*((rsp + 0x10)) < 0xa) {
        goto label_28;
    }
    eax = r14 - 1;
    eax *= r14d;
    eax &= 1;
    r12d = edx;
    r13d = ecx;
    r15 = *((rsp + 0x68));
    if (eax == 0) {
        goto label_28;
    }
label_55:
label_72:
label_113:
label_47:
label_64:
label_114:
label_60:
label_71:
label_76:
label_50:
label_137:
label_36:
label_35:
label_125:
label_128:
label_43:
label_34:
label_105:
label_129:
label_122:
label_136:
label_121:
label_133:
label_135:
label_90:
label_92:
label_83:
label_85:
label_57:
    if (ecx == 0x10) {
        *((rsp + 0x10)) = edx;
        edx = *((rsp + 0x24));
label_139:
        if (*((rsp + 0xf)) == 0) {
        }
        if (edx != 2) {
        }
        r13d = *((rsp + 0x8c));
        r13d &= 0xfffffffd;
        r15 = r8;
        r12 = r9;
        rbx = *((rsp + 0x70));
        if (*((rsp + 0x10)) < 0xa) {
            goto label_142;
        }
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax != 0) {
            goto label_143;
        }
        goto label_142;
INVALID_JUMP;
    }
    goto label_144;
label_140:
    edx = *((rsp + 0x10));
    if (edx >= 0xa) {
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax == 0) {
            goto label_145;
        }
    }
label_145:
    al = (*((rsp + 0xe)) != 0) ? 1 : 0;
    rcx = *((rsp + 0x38));
    if (rcx == 0) {
        goto label_146;
    }
    if (al != 0) {
        goto label_146;
    }
    al = *(rcx);
    if (al == 0) {
        goto label_146;
    }
    rcx++;
    do {
        if (r11 < r8) {
            *((rdi + r11)) = al;
            r14d = x_31;
            edx = y_32;
        }
        if (edx >= 0xa) {
            eax = r14 - 1;
            eax *= r14d;
            eax &= 1;
            if (eax != 0) {
                goto label_147;
            }
        }
        r11++;
        eax = *(rcx);
        rcx++;
    } while (al != 0);
label_146:
    if (edx >= 0xa) {
        eax = r14 - 1;
        eax *= r14d;
        eax &= 1;
        if (eax == 0) {
            goto label_148;
        }
label_147:
label_141:
        rax = quotearg_buffer_restyled (rdi, *((rsp + 0x70)), r15, r9, 5, *((rsp + 0x94)));
        goto label_29;
        r11 = rax;
        goto label_144;
    }
label_148:
    if (r11 >= r8) {
        goto label_144;
    }
    do {
        *((rdi + r11)) = 0;
        if (*(obj_y_32) < 0xa) {
            goto label_144;
        }
        eax = x_31;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
    } while (ecx != 0);
    goto label_144;
label_30:
    abort ();
    do {
label_142:
        rax = quotearg_buffer_restyled (rdi, r8, *((rsp + 0x50)), r9, ebp, r13d);
        goto label_29;
        r11 = rax;
        if (*(obj_y_32) < 0xa) {
            goto label_144;
        }
        eax = x_31;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        rdi = *((rsp + 0x40));
        r8 = r15;
        r9 = r12;
        if (ecx == 0) {
            goto label_144;
        }
label_143:
        quotearg_buffer_restyled (rdi, r8, *((rsp + 0x50)), r9, ebp, r13d);
        goto label_29;
        r9 = r12;
        r8 = r15;
        rdi = *((rsp + 0x60));
    } while (1);
label_144:
    rax = r11;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404900 */
#include <stdint.h>
 
uint64_t dbg_quotearg_alloc (char const * arg, int64_t arg1, int64_t arg2, char * buf, size_t n, quoting_options const * o, quoting_options const * p) {
    int32_t flags;
    int32_t e;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    r12 = arg;
    rdi = arg1;
    rsi = arg2;
    r13 = buf;
    rbx = n;
    rdx = o;
    r14 = p;
    /* char * quotearg_alloc(char const * arg,size_t argsize,quoting_options const * o); */
    rbx = rsi;
    *((rsp + 8)) = rbx;
    r12 = rdi;
    r14d = default_quoting_options;
    if (rdx != 0) {
        r14 = rdx;
    }
    rax = errno_location ();
    *((rsp + 0x10)) = rax;
    ecx = *(rax);
    *((rsp + 4)) = ecx;
    ebp = *((r14 + 4));
    ebp |= 1;
    r15 = r14 + 8;
    rax = quotearg_buffer_restyled (0, 0, r12, rbx, *(r14), ebp);
    rbx = rax;
    rbx++;
    rax = xmalloc (rbx);
    r13 = rax;
    quotearg_buffer_restyled (r13, rbx, r12, *((rsp + 0x10)), *(r14), ebp);
    eax = *((rsp + 4));
    rcx = *((rsp + 0x10));
    *(rcx) = eax;
    rax = r13;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4049d0 */
#include <stdint.h>
 
uint64_t quotearg_alloc_mem (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    rbx = rdx;
    *((rsp + 0x18)) = rbx;
    r14 = rsi;
    *((rsp + 0x10)) = r14;
    r15 = rdi;
    *((rsp + 8)) = r15;
    r12d = default_quoting_options;
    if (rcx != 0) {
        r12 = rcx;
    }
    rax = errno_location ();
    *((rsp + 0x20)) = rax;
    ecx = *(rax);
    *((rsp + 4)) = ecx;
    ebp = 0;
    bpl = (rbx == 0) ? 1 : 0;
    ebp |= *((r12 + 4));
    r13 = r12 + 8;
    rax = quotearg_buffer_restyled (0, 0, r15, r14, *(r12), ebp);
    rbx = rax;
    r15 = rbx + 1;
    rax = xmalloc (r15);
    r14 = rax;
    quotearg_buffer_restyled (r14, r15, *((rsp + 0x10)), *((rsp + 0x18)), *(r12), ebp);
    rax = *((rsp + 0x38));
    ecx = *((rsp + 4));
    rdx = *((rsp + 0x20));
    *(rdx) = ecx;
    if (rax != 0) {
        *(rax) = rbx;
    }
    rax = r14;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404ac0 */
#include <stdint.h>
 
int32_t dbg_quotearg_free (struct slotvec * sv) {
    r14 = sv;
    /* void quotearg_free(); */
    r14 = slotvec;
    if (*(obj.nslots) < 2) {
        goto label_1;
    }
    eax = x_37;
    ecx = y_38;
    rbx = r14 + 0x18;
    r15d = 1;
label_0:
    if (ecx < 0xa) {
        goto label_2;
    }
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_2:
        free (*(rbx));
        eax = x_37;
        ecx = y_38;
        if (ecx < 0xa) {
            goto label_3;
        }
        edx = rax - 1;
        edx *= eax;
        edx &= 1;
        if (edx == 0) {
            goto label_3;
        }
        free (*(rbx));
    }
label_3:
    r15++;
    rdx = *(obj.nslots);
    rbx += 0x10;
    if (r15 < rdx) {
        goto label_0;
    }
label_1:
    rdi = *((r14 + 8));
    eax = slot0;
    if (rdi != rax) {
        free (rdi);
        *(obj.slotvec0) = 0x100;
        *(obj.slot0) = 0x40b290;
    }
    eax = slotvec0;
    eax = x_37;
    ecx = y_38;
    if (r14 == rax) {
        goto label_4;
    }
    if (ecx < 0xa) {
        goto label_5;
    }
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_5:
        free (r14);
        *(obj.slotvec) = 0x40b198;
        eax = x_37;
        ecx = y_38;
        if (ecx < 0xa) {
            goto label_4;
        }
        edx = rax - 1;
        edx *= eax;
        edx &= 1;
        if (edx == 0) {
            goto label_4;
        }
        eax = free (r14);
        *(obj.slotvec) = 0x40b198;
    }
label_4:
    if (ecx < 0xa) {
        goto label_6;
    }
    edx = rax - 1;
    edx *= eax;
    edx &= 1;
    while (1) {
label_6:
        *(obj.nslots) = 1;
        if (ecx < 0xa) {
            goto label_7;
        }
        edx = rax - 1;
        edx *= eax;
        edx &= 1;
        if (edx == 0) {
            goto label_7;
        }
        *(obj.nslots) = 1;
    }
label_7:
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404c20 */
#include <stdint.h>
 
void quotearg_n (int64_t arg_4h, int64_t arg_8h, int64_t arg_28h, int64_t arg_30h, int64_t arg1, int64_t arg2) {
    int64_t var_ch;
    int64_t var_10h_2;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h_2;
    int64_t var_40h;
    rdi = arg1;
    rsi = arg2;
    rdx = 0xffffffffffffffff;
    ecx = default_quoting_options;
invalid_funccall(); //    return void (*0x404c30)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404c30 */
#include <stdint.h>
 
uint64_t dbg_quotearg_n_options (int64_t arg_4h, int64_t arg_8h, int64_t arg_28h, int64_t arg_30h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int32_t flags, size_t n, size_t size, struct slotvec * sv, char * val) {
    quoting_options const * options;
    int64_t var_ch;
    int64_t var_10h_2;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h_2;
    int64_t var_40h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r9 = flags;
    r12 = n;
    r14 = size;
    r15 = sv;
    rbx = val;
    /* char * quotearg_n_options(int n,char const * arg,size_t argsize,quoting_options const * options); */
    r12 = rdx;
    rbx = rsi;
    r13d = edi;
    if (*(obj_y_42) < 0xa) {
        goto label_0;
    }
    eax = x_41;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx == 0) {
        goto label_0;
    }
    while (1);
label_0:
    rax = errno_location ();
    if (r13d >= 0) {
        ecx = *(rax);
        r15 = slotvec;
        *((rsp + 0x18)) = r12;
        *((rsp + 0x10)) = rbx;
        *((rsp + 0x20)) = rax;
        *(rsp) = ecx;
        if (*(obj.nslots) <= r13d) {
            rbx = rbp;
            if (r13d == 0x7fffffff) {
                goto label_1;
            }
            r12d = slotvec0;
            edi = 0;
            if (r15 != r12) {
                rdi = r15;
            }
            ebp = r13 + 1;
            rsi = (int64_t) r13d;
            rsi <<= 4;
            rsi += 0x10;
            rax = xrealloc (rdi, rsi);
            r14 = rax;
            *(obj.slotvec) = r14;
            if (r15 == r12) {
                __asm ("movups xmm0, xmmword [obj.slotvec0]");
                __asm ("movups xmmword [r14], xmm0");
            }
            rax = *(obj.nslots);
            rbp = (int64_t) ebp;
            rdx -= rax;
            rax <<= 4;
            rdi += rax;
            rdx <<= 4;
            memset (r14, 0, rbp);
            *(obj.nslots) = ebp;
            r15 = r14;
            r12 = *((rsp + 0x18));
            rbx = *((rsp + 0x10));
        }
        r13 = (int64_t) r13d;
        r13 <<= 4;
        r14 = *((r15 + r13));
        r8d = *(rbp);
        r9d |= 1;
        rax = rbp + 8;
        *((rsp + 0x10)) = rdi;
        *((rsp + 0xc)) = r9d;
        *((rsp + 0x40)) = rbp;
        *((rsp + 0x40)) = rax;
        rax = quotearg_buffer_restyled (*((r15 + r13 + 8)), r14, rbx, r12, *(r8d), *((rbp + 4)));
        r12 = rax;
        if (r14 > r12) {
            rax = *((rsp + 0x20));
            ecx = *(rsp);
            rbx = *((rsp + 8));
            goto label_2;
        }
        rax = r15 + r13;
        r12++;
        if (*(obj_y_42) < 0xa) {
            goto label_3;
        }
        ecx = x_41;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx != 0) {
            goto label_4;
        }
    } else {
        abort ();
label_1:
        xalloc_die ();
    }
    do {
label_3:
        *(rax) = r12;
        if (*(obj_y_42) < 0xa) {
            goto label_5;
        }
        ecx = x_41;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_5;
        }
label_4:
        *(rax) = r12;
    } while (1);
label_5:
    rbp = r15 + r13 + 8;
    eax = slot0;
    rdi = *((rsp + 8));
    if (rdi != rax) {
        free (rdi);
    }
    rax = xmalloc (r12);
    rbx = rax;
    *(rbp) = rbx;
    rax = *((rsp + 0x30));
    quotearg_buffer_restyled (rbx, r12, *((rsp + 0x18)), *((rsp + 0x20)), *(rax), *((rsp + 0xc)));
    rax = *((rsp + 0x20));
    ecx = *(rsp);
label_2:
    *(rax) = ecx;
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404e70 */
#include <stdint.h>
 
void quotearg_n_mem (int64_t arg_4h, int64_t arg_8h, int64_t arg_28h, int64_t arg_30h, int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_ch;
    int64_t var_10h_2;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h_2;
    int64_t var_40h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = default_quoting_options;
invalid_funccall(); //    return void (*0x404c30)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404e80 */
#include <stdint.h>
 
int64_t dbg_quotearg (int64_t arg_4h, int64_t arg_8h, int64_t arg_28h, int64_t arg_30h, char const * arg, int64_t arg1) {
    int64_t var_ch;
    int64_t var_10h_2;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h_2;
    int64_t var_40h;
    rax = arg;
    rdi = arg1;
    /* char * quotearg(char const * arg); */
    rax = rdi;
    edi = 0;
    rdx = 0xffffffffffffffff;
    ecx = default_quoting_options;
    rsi = rax;
invalid_funccall(); //    return void (*0x404c30)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404ea0 */
#include <stdint.h>
 
int64_t dbg_quotearg_mem (int64_t arg_4h, int64_t arg_8h, int64_t arg_28h, int64_t arg_30h, char const * arg, int64_t arg1, int64_t arg2, size_t argsize) {
    int64_t var_ch;
    int64_t var_10h_2;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h_2;
    int64_t var_40h;
    rdx = arg;
    rdi = arg1;
    rsi = arg2;
    rax = argsize;
    /* char * quotearg_mem(char const * arg,size_t argsize); */
    rax = rsi;
    rdx = rdi;
    edi = 0;
    ecx = default_quoting_options;
    rsi = rdx;
    rdx = rax;
invalid_funccall(); //    return void (*0x404c30)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404ec0 */
#include <stdint.h>
 
int32_t dbg_quotearg_n_style (char const * arg, int64_t arg1, int64_t arg2, int64_t arg3, int32_t n, enum quoting_style style) {
    quoting_options o;
    int64_t var_40h;
    int64_t var_30h;
    int64_t var_18h;
    r14 = arg;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r15 = n;
    rbx = style;
    /* char * quotearg_n_style(int n,quoting_style s,char const * arg); */
    r14 = rdx;
    ebx = esi;
    r15d = edi;
    if (*(obj_y_50) < 0xa) {
        goto label_0;
    }
    eax = x_49;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_0:
        rcx = rsp;
        rcx += 0xffffffffffffffc0;
        __asm ("xorps xmm0, xmm0");
        *((rbp - 0x30)) = xmm0;
        *((rbp - 0x40)) = xmm0;
        *(o.style) = xmm0;
        *(o.right_quote) = 0;
        if (ebx == 0xa) {
            goto label_1;
        }
        eax = *(o.right_quote);
        *((rcx + 0x34)) = eax;
        xmm0 = *(o.style);
        xmm1 = *((rbp - 0x40));
        xmm2 = *((rbp - 0x30));
        __asm ("movups xmmword [rcx + 0x24], xmm2");
        __asm ("movups xmmword [rcx + 0x14], xmm1");
        __asm ("movups xmmword [rcx + 4], xmm0");
        quotearg_n_options (r15d, r14, 0xffffffffffffffff, ebx, r8, r9);
        if (*(obj_y_50) < 0xa) {
            goto label_2;
        }
        ecx = x_49;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_2;
        }
        rcx = rsp;
        rcx += 0xffffffffffffffc0;
        __asm ("xorps xmm0, xmm0");
        *((rbp - 0x30)) = xmm0;
        *((rbp - 0x40)) = xmm0;
        *(o.style) = xmm0;
        *(o.right_quote) = 0;
        if (ebx == 0xa) {
            goto label_3;
        }
        eax = *(o.right_quote);
        *((rcx + 0x34)) = eax;
        xmm0 = *(o.style);
        xmm1 = *((rbp - 0x40));
        xmm2 = *((rbp - 0x30));
        __asm ("movups xmmword [rcx + 0x24], xmm2");
        __asm ("movups xmmword [rcx + 0x14], xmm1");
        __asm ("movups xmmword [rcx + 4], xmm0");
        quotearg_n_options (r15d, r14, 0xffffffffffffffff, ebx, r8, r9);
    }
label_2:
    rsp = rbp - 0x18;
    return eax;
label_1:
    abort ();
label_3:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404fe0 */
#include <stdint.h>
 
uint64_t quotearg_n_style_mem (int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    uint32_t var_40h;
    int64_t var_44h;
    int64_t var_54h;
    int64_t var_64h;
    int64_t var_74h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    __asm ("xorps xmm0, xmm0");
    *((rsp + 0x20)) = xmm0;
    *((rsp + 0x10)) = xmm0;
    *(rsp) = xmm0;
    *((rsp + 0x30)) = 0;
    if (esi != 0xa) {
        *((rsp + 0x40)) = esi;
        eax = *((rsp + 0x30));
        *((rsp + 0x74)) = eax;
        xmm0 = *(rsp);
        xmm1 = *((rsp + 0x10));
        xmm2 = *((rsp + 0x20));
        __asm ("movups xmmword [rsp + 0x64], xmm2");
        __asm ("movups xmmword [rsp + 0x54], xmm1");
        __asm ("movups xmmword [rsp + 0x44], xmm0");
        rax = rsp + 0x40;
        quotearg_n_options (rdi, rdx, rcx, rax, r8, r9);
        return rax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405050 */
#include <stdint.h>
 
int64_t dbg_quotearg_style (char const * arg, int64_t arg1, enum quoting_style s) {
    int64_t var_50h;
    int64_t var_40h;
    int64_t var_30h;
    int64_t var_20h;
    int64_t var_18h;
    rax = arg;
    rdi = arg1;
    rsi = s;
    /* char * quotearg_style(enum quoting_style s,char const * arg); */
    rax = rsi;
    ecx = edi;
    edi = 0;
    esi = ecx;
    rdx = rax;
invalid_funccall(); //    return void (*0x404ec0)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405070 */
#include <stdint.h>
 
int32_t dbg_quotearg_style_mem (char const * arg, size_t argsize, enum quoting_style style) {
    quoting_options o;
    int64_t var_10h;
    int64_t var_20h;
    uint32_t var_40h;
    int64_t var_44h;
    int64_t var_54h;
    int64_t var_64h;
    int64_t var_74h;
    rsi = arg;
    rdx = argsize;
    rdi = style;
    /* char * quotearg_style_mem(enum quoting_style s,char const * arg,size_t argsize); */
    __asm ("xorps xmm0, xmm0");
    *((rsp + 0x20)) = xmm0;
    *((rsp + 0x10)) = xmm0;
    *(rsp) = xmm0;
    *((rsp + 0x30)) = 0;
    if (edi != 0xa) {
        *((rsp + 0x40)) = edi;
        eax = *((rsp + 0x30));
        *((rsp + 0x74)) = eax;
        xmm0 = *(rsp);
        xmm1 = *((rsp + 0x10));
        xmm2 = *((rsp + 0x20));
        __asm ("movups xmmword [rsp + 0x64], xmm2");
        __asm ("movups xmmword [rsp + 0x54], xmm1");
        __asm ("movups xmmword [rsp + 0x44], xmm0");
        quotearg_n_options (0, rsi, rdx, rsp + 0x40, r8, r9);
        return eax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4050e0 */
#include <stdint.h>
 
uint64_t dbg_quotearg_char_mem (char const * arg, int64_t arg1, int64_t arg2, int64_t arg3, size_t argsize, quoting_options * o, int32_t shift) {
    int64_t var_20h;
    r15 = arg;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r14 = argsize;
    rax = o;
    rbx = shift;
    /* char * quotearg_char_mem(char const * arg,size_t argsize,char ch); */
    ebx = edx;
    r14 = rsi;
    r15 = rdi;
    eax = ebx;
    al >>= 5;
    ebx &= 0x1f;
    r12d = (int32_t) al;
    if (*(obj_y_60) < 0xa) {
        goto label_0;
    }
    eax = x_59;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_0:
        rdx = rsp;
        rax = rdx - 0x40;
        rcx = comment;
        *((rdx - 0x10)) = rcx;
        __asm ("movups xmm0, xmmword [0x0040b270]");
        __asm ("movups xmmword [rdx - 0x20], xmm0");
        __asm ("movups xmm0, xmmword [0x0040b260]");
        __asm ("movups xmmword [rdx - 0x30], xmm0");
        __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
        __asm ("movups xmmword [rdx - 0x40], xmm0");
        esi = *((rdx + r12*4 - 0x38));
        edi = *((rdx + r12*4 - 0x38));
        ecx = ebx;
        edi >>= cl;
        edi = ~edi;
        edi &= 1;
        edi <<= cl;
        edi ^= esi;
        *((rdx + r12*4 - 0x38)) = edi;
        quotearg_n_options (0, r15, r14, rax, r8, r9);
        if (*(obj_y_60) < 0xa) {
            goto label_1;
        }
        ecx = x_59;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_1;
        }
        rdx = rsp;
        rax = rdx - 0x40;
        rcx = comment;
        *((rdx - 0x10)) = rcx;
        __asm ("movups xmm0, xmmword [0x0040b270]");
        __asm ("movups xmmword [rdx - 0x20], xmm0");
        __asm ("movups xmm0, xmmword [0x0040b260]");
        __asm ("movups xmmword [rdx - 0x30], xmm0");
        __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
        __asm ("movups xmmword [rdx - 0x40], xmm0");
        esi = *((rdx + r12*4 - 0x38));
        edi = *((rdx + r12*4 - 0x38));
        ecx = ebx;
        edi >>= cl;
        edi = ~edi;
        edi &= 1;
        edi <<= cl;
        edi ^= esi;
        *((rdx + r12*4 - 0x38)) = edi;
        quotearg_n_options (0, r15, r14, rax, r8, r9);
    }
label_1:
    rsp = rbp - 0x20;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x405210 */
#include <stdint.h>
 
int32_t quotearg_char (int64_t arg1, int64_t arg2) {
    int64_t var_20h;
    rdi = arg1;
    rsi = arg2;
    eax = esi;
    rsi = 0xffffffffffffffff;
    edx = eax;
invalid_funccall(); //    return void (*0x4050e0)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405220 */
#include <stdint.h>
 
void dbg_quotearg_colon (char const * arg) {
    int64_t var_20h;
    rdi = arg;
    /* char * quotearg_colon(char const * arg); */
    rsi = 0xffffffffffffffff;
    edx = 0x3a;
invalid_funccall(); //    return void (*0x4050e0)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405240 */
#include <stdint.h>
 
int32_t dbg_quotearg_colon_mem (char const * arg, int64_t arg1, int64_t arg2, size_t argsize) {
    rbx = arg;
    rdi = arg1;
    rsi = arg2;
    r14 = argsize;
    /* char * quotearg_colon_mem(char const * arg,size_t argsize); */
    r14 = rsi;
    rbx = rdi;
    if (*(obj_y_66) < 0xa) {
        goto label_0;
    }
    eax = x_65;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_0:
        quotearg_char_mem (rbx, r14, 0x3a);
        if (*(obj_y_66) < 0xa) {
            goto label_1;
        }
        ecx = x_65;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_1;
        }
        quotearg_char_mem (rbx, r14, 0x3a);
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4052b0 */
#include <stdint.h>
 
int64_t dbg_quotearg_n_style_colon (char const * arg, int64_t arg3, int32_t n, quoting_options * o, enum quoting_style style) {
    quoting_options options;
    int64_t var_fh;
    int64_t var_10h;
    int64_t var_14h;
    int64_t var_20h;
    int64_t var_24h;
    int64_t var_34h;
    int64_t var_40h;
    int64_t var_50h;
    int64_t var_60h;
    int64_t var_70h;
    rax = arg;
    rdx = arg3;
    rdi = n;
    rcx = o;
    rsi = style;
    /* char * quotearg_n_style_colon(int n,quoting_style s,char const * arg); */
    rax = rdx;
    __asm ("xorps xmm0, xmm0");
    *((rsp + 0x20)) = xmm0;
    *((rsp + 0x10)) = xmm0;
    *(rsp) = xmm0;
    *((rsp + 0x30)) = 0;
    if (esi != 0xa) {
        ecx = *((rsp + 0x30));
        *((rsp + 0x70)) = ecx;
        xmm0 = *(rsp);
        xmm1 = *((rsp + 0x10));
        xmm2 = *((rsp + 0x20));
        *((rsp + 0x60)) = xmm2;
        *((rsp + 0x50)) = xmm1;
        *((rsp + 0x40)) = xmm0;
        *(rsp) = esi;
        ecx = *((rsp + 0x70));
        *((rsp + 0x34)) = ecx;
        xmm0 = *((rsp + 0x40));
        xmm1 = *((rsp + 0x50));
        xmm2 = *((rsp + 0x60));
        __asm ("movups xmmword [rsp + 0x24], xmm2");
        __asm ("movups xmmword [rsp + 0x14], xmm1");
        __asm ("movups xmmword [rsp + 4], xmm0");
        quotearg_n_options (rdi, rax, 0xffffffffffffffff, rsp, r8, r9);
        return rax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405350 */
#include <stdint.h>
 
int64_t quotearg_n_custom (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    rax = comment;
    *((rsp + 0x30)) = rax;
    __asm ("movups xmm0, xmmword [0x0040b270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x0040b260]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    *(rsp) = 0xa;
    if (rsi != 0) {
        if (rdx == 0) {
            goto label_0;
        }
        *((rsp + 0x28)) = rsi;
        *((rsp + 0x30)) = rdx;
        rax = rsp;
        quotearg_n_options (rdi, rcx, 0xffffffffffffffff, rax, r8, r9);
        return rax;
    }
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4053c0 */
#include <stdint.h>
 
int64_t quotearg_n_custom_mem (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    rax = comment;
    *((rsp + 0x30)) = rax;
    __asm ("movups xmm0, xmmword [0x0040b270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x0040b260]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    *(rsp) = 0xa;
    if (rsi != 0) {
        if (rdx == 0) {
            goto label_0;
        }
        *((rsp + 0x28)) = rsi;
        *((rsp + 0x30)) = rdx;
        rax = rsp;
        quotearg_n_options (rdi, rcx, r8, rax, r8, r9);
        return rax;
    }
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405430 */
#include <stdint.h>
 
int64_t dbg_quotearg_custom (char const * arg, int64_t arg3, char const * left_quote, char const * right_quote) {
    quoting_options o;
    int64_t var_10h;
    int64_t var_20h;
    rax = arg;
    rdx = arg3;
    rdi = left_quote;
    rsi = right_quote;
    /* char * quotearg_custom(char const * left_quote,char const * right_quote,char const * arg); */
    rax = rdx;
    rcx = comment;
    *((rsp + 0x30)) = rcx;
    __asm ("movups xmm0, xmmword [0x0040b270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x0040b260]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    *(rsp) = 0xa;
    if (rdi != 0) {
        if (rsi == 0) {
            goto label_0;
        }
        *((rsp + 0x28)) = rdi;
        *((rsp + 0x30)) = rsi;
        quotearg_n_options (0, rax, 0xffffffffffffffff, rsp, r8, r9);
        return rax;
    }
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4054a0 */
#include <stdint.h>
 
int64_t dbg_quotearg_custom_mem (char const * arg, size_t argsize, char const * left_quote, char const * right_quote) {
    quoting_options o;
    int64_t var_10h;
    int64_t var_20h;
    rdx = arg;
    rcx = argsize;
    rdi = left_quote;
    rsi = right_quote;
    /* char * quotearg_custom_mem(char const * left_quote,char const * right_quote,char const * arg,size_t argsize); */
    rax = comment;
    *((rsp + 0x30)) = rax;
    __asm ("movups xmm0, xmmword [0x0040b270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x0040b260]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    *(rsp) = 0xa;
    if (rdi != 0) {
        if (rsi == 0) {
            goto label_0;
        }
        *((rsp + 0x28)) = rdi;
        *((rsp + 0x30)) = rsi;
        rax = rsp;
        quotearg_n_options (0, rdx, rcx, rax, r8, r9);
        return rax;
    }
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405510 */
#include <stdint.h>
 
int32_t quote_n_mem (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r14 = rdx;
    rbx = rsi;
    if (*(obj_y_78) < 0xa) {
        goto label_0;
    }
    eax = x_77;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_0:
        quotearg_n_options (ebp, rbx, r14, obj.quote_quoting_options, r8, r9);
        if (*(obj_y_78) < 0xa) {
            goto label_1;
        }
        ecx = x_77;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_1;
        }
        quotearg_n_options (ebp, rbx, r14, obj.quote_quoting_options, r8, r9);
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x405580 */
#include <stdint.h>
 
int32_t dbg_quote_mem (char const * arg, int64_t arg1, int64_t arg2, size_t argsize) {
    rbx = arg;
    rdi = arg1;
    rsi = arg2;
    r14 = argsize;
    /* char const * quote_mem(char const * arg,size_t argsize); */
    r14 = rsi;
    rbx = rdi;
    if (*(obj_y_78) < 0xa) {
        goto label_0;
    }
    eax = x_77;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_0:
        quotearg_n_options (0, rbx, r14, obj.quote_quoting_options, r8, r9);
        if (*(obj_y_78) < 0xa) {
            goto label_1;
        }
        ecx = x_77;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_1;
        }
        quotearg_n_options (0, rbx, r14, obj.quote_quoting_options, r8, r9);
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4055f0 */
#include <stdint.h>
 
int32_t quote_n (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rsi;
    if (*(obj_y_78) < 0xa) {
        goto label_0;
    }
    eax = x_77;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_0:
        quotearg_n_options (ebp, rbx, 0xffffffffffffffff, obj.quote_quoting_options, r8, r9);
        if (*(obj_y_78) < 0xa) {
            goto label_1;
        }
        ecx = x_77;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_1;
        }
        quotearg_n_options (ebp, rbx, 0xffffffffffffffff, obj.quote_quoting_options, r8, r9);
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x405670 */
#include <stdint.h>
 
int32_t dbg_quote (char const * arg, int64_t arg1) {
    rbx = arg;
    rdi = arg1;
    /* char const * quote(char const * arg); */
    rbx = rdi;
    if (*(obj_y_78) < 0xa) {
        goto label_0;
    }
    eax = x_77;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_0:
        quotearg_n_options (0, rbx, 0xffffffffffffffff, obj.quote_quoting_options, r8, r9);
        if (*(obj_y_78) < 0xa) {
            goto label_1;
        }
        ecx = x_77;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_1;
        }
        quotearg_n_options (0, rbx, 0xffffffffffffffff, obj.quote_quoting_options, r8, r9);
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4056e0 */
#include <stdint.h>
 
uint64_t dbg_gettext_quote (int64_t arg1, int64_t arg2, char const * msgid, enum quoting_style s, char const * translation) {
    char const * locale_code;
    rdi = arg1;
    rsi = arg2;
    rbx = msgid;
    r14 = s;
    rax = translation;
    /* char const * gettext_quote(char const * msgid,quoting_style s); */
    r14d = esi;
    rbx = rdi;
    edx = 5;
    rax = dcgettext (0, rbx);
    if (rax == rbx) {
        rax = locale_charset ();
        ecx = 0x46;
        r8d = 0x2d;
        r9d = 0x38;
        eax = strcaseeq0 (rbp, 0x55, 0x54);
        if (eax == 0) {
            goto label_1;
        }
        ecx = 0x40894c;
        eax = 0x408950;
        if (*(rbx) != 0x60) {
label_0:
            rax = rcx;
            goto label_2;
        }
    }
label_2:
    if (*(obj_y_86) < 0xa) {
        goto label_3;
    }
    ecx = x_85;
    edx = rcx - 1;
    edx *= ecx;
    edx &= 1;
    if (edx == 0) {
        goto label_3;
    }
    while (1);
label_3:
    return rax;
label_1:
    if (*(obj_y_86) >= 0xa) {
        eax = x_85;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx == 0) {
            goto label_4;
        }
    }
label_4:
    ecx = 0x31;
    r8d = 0x38;
    r9d = 0x30;
    eax = strcaseeq0 (rbp, 0x47, 0x42);
    if (eax != 0) {
        ecx = 0x408954;
        eax = 0x408958;
        goto label_0;
    }
    ecx = 0x408946;
    eax = 0x40894a;
    goto label_0;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4057f0 */
#include <stdint.h>
 
int64_t dbg_strcaseeq0 (uint32_t arg_38h, uint32_t arg_40h, uint32_t arg1) {
    int32_t c;
    int64_t var_41h;
    int64_t var_1h;
    rdi = arg1;
    /* int strcaseeq0(char const * s1,char const * s2,char s20,char s21,char s22,char s23,char s24,char s25,char s26,char s27,char s28); */
    if (*(obj_y_88) < 0xa) {
        goto label_1;
    }
    eax = x_87;
    ebp = rax - 1;
    ebp *= eax;
    ebp &= 1;
    if (ebp == 0) {
        goto label_1;
    }
    while (1);
label_1:
    ebx = (int32_t) sil;
    ebp = *(rdi);
    eax = rbx - 0x41;
    if (eax <= 0x19) {
        ebp &= 0xffffffdf;
        eax = 0;
        if (ebp == ebx) {
            goto label_2;
        }
        goto label_3;
    }
    eax = 0;
    if (bpl != sil) {
        goto label_3;
    }
label_2:
    if (sil == 0) {
        goto label_4;
    }
    ebp = (int32_t) dl;
    eax = rbp - 0x41;
    esi = *((rdi + 1));
    if (eax <= 0x19) {
        esi &= 0xffffffdf;
        eax = 0;
        if (esi == ebp) {
            goto label_5;
        }
        goto label_3;
    }
    eax = 0;
    if (sil != dl) {
        goto label_3;
    }
label_5:
    if (dl == 0) {
        goto label_6;
    }
    sil = *((rsp + 0x40));
    r15b = *((rsp + 0x38));
    r13d = (int32_t) cl;
    r11d = r13 - 0x41;
    r10d = *((rdi + 2));
    eax = r10d;
    eax &= 0xffffffdf;
    *((rsp - 0x14)) = eax;
    r12d = x_91;
    *(rsp - 0x38) = (r13b == 0) ? 1 : 0;
    edx = (int32_t) r8b;
    *((rsp - 0x10)) = rdx;
    edx = rdx - 0x41;
    *((rsp - 0x18)) = edx;
    ebp = x_97;
    ebx = rbp - 1;
    ebx *= ebp;
    bl = ((bl & 1) == 0) ? 1 : 0;
    r14d = (int32_t) r9b;
    dl = (*(obj_y_98) < 0xa) ? 1 : 0;
    dl |= bl;
    *((rsp - 0x3a)) = dl;
    ebp = x_99;
    ebx = rbp - 1;
    ebx *= ebp;
    bl = ((bl & 1) == 0) ? 1 : 0;
    dl = (*(obj_y_100) < 0xa) ? 1 : 0;
    dl |= bl;
    *((rsp - 0x3c)) = dl;
    ebp = x_101;
    ebx = rbp - 1;
    ebx *= ebp;
    bl = ((bl & 1) == 0) ? 1 : 0;
    dl = (*(obj_y_102) < 0xa) ? 1 : 0;
    dl |= bl;
    *((rsp - 0x3b)) = dl;
    ebp = x_93;
    ebx = rbp - 1;
    ebx *= ebp;
    bl = ((bl & 1) == 0) ? 1 : 0;
    edx = r14 - 0x41;
    *((rsp - 0x1c)) = edx;
    al = (*(obj_y_94) < 0xa) ? 1 : 0;
    ebp = x_89;
    edx = rbp - 1;
    edx *= ebp;
    ebp = (int32_t) r15b;
    al |= bl;
    *((rsp - 0x39)) = al;
    rax = r13;
    dl = ((dl & 1) == 0) ? 1 : 0;
    r15b = (*(obj_y_90) < 0xa) ? 1 : 0;
    r15b |= dl;
    edx = r12 - 1;
    edx *= r12d;
    ebx = rbp - 0x41;
    *((rsp - 0x20)) = ebx;
    dl = ((dl & 1) == 0) ? 1 : 0;
    r13b = (*(obj_y_92) < 0xa) ? 1 : 0;
    r13b |= dl;
    edx = esi;
    *((rsp - 8)) = rax;
    r12b = (r10b != al) ? 1 : 0;
    al = (r10b == al) ? 1 : 0;
    r12b |= *((rsp - 0x38));
    ebx = (int32_t) dl;
    rdx = rbp;
    esi = rbx - 0x41;
    *((rsp - 0x24)) = esi;
    esi = eax;
    *((rsp - 0x30)) = rbp;
    *((rsp - 0x38)) = rdx;
    do {
label_0:
        if (r11d >= 0x1a) {
            goto label_7;
        }
        rax = *((rsp - 8));
        if (*((rsp - 0x14)) != eax) {
            goto label_8;
        }
        if (r13b == 0) {
            goto label_9;
        }
        if (cl != 0) {
            goto label_10;
        }
        r14b = 1;
    } while (r15b == 0);
    goto label_11;
label_7:
    if (r13b == 0) {
        goto label_12;
    }
    r14b = sil;
    if (r12b != 0) {
        goto label_13;
    }
label_10:
    r10 = rbx;
    ebx = *((rdi + 3));
    if (*((rsp - 0x18)) >= 0x1a) {
        goto label_14;
    }
    ebx &= 0xffffffdf;
    rdx = *((rsp - 0x10));
    r14b = (ebx == edx) ? 1 : 0;
    if (r8b == 0) {
        goto label_15;
    }
    rbp = *((rsp - 0x30));
    rdx = *((rsp - 0x38));
    rbx = r10;
    if (ebx == edx) {
        goto label_16;
    }
    goto label_13;
label_8:
    if (r13b == 0) {
        goto label_17;
    }
    r14d = 0;
    if (r15b == 0) {
        goto label_0;
    }
    goto label_11;
label_14:
    if (*((rsp - 0x39)) == 0) {
        goto label_18;
    }
    r14b = (bl == r8b) ? 1 : 0;
    if (r8b != 0) {
        rbx = r10;
        if (bl != r8b) {
            goto label_13;
        }
label_16:
        ebx = *((rdi + 4));
        if (*((rsp - 0x1c)) <= 0x19) {
            ebx &= 0xffffffdf;
            r14b = (ebx == ebp) ? 1 : 0;
            if (r9b == 0) {
                goto label_19;
            }
            rbx = r10;
            if (ebx == ebp) {
                goto label_20;
            }
            goto label_13;
        }
        r14b = (bl == r9b) ? 1 : 0;
        if (r9b == 0) {
            goto label_21;
        }
        rbx = r10;
        if (bl != r9b) {
            goto label_13;
        }
label_20:
        ebx = *((rdi + 5));
        if (*((rsp - 0x20)) <= 0x19) {
            if (*((rsp - 0x3a)) == 0) {
                goto label_22;
            }
            ebx &= 0xffffffdf;
            r14b = (ebx == edx) ? 1 : 0;
            if (*((rsp + 0x38)) == 0) {
                goto label_23;
            }
            rbx = r10;
            if (ebx == edx) {
                goto label_24;
            }
            goto label_13;
        }
        edx = *((rsp + 0x38));
        r14b = (bl == dl) ? 1 : 0;
        if (dl == 0) {
            goto label_25;
        }
        rdx = *((rsp - 0x38));
        rbx = r10;
        if (bl != *((rsp + 0x38))) {
            goto label_13;
        }
label_24:
        ebx = *((rdi + 6));
        if (*((rsp - 0x24)) > 0x19) {
            goto label_26;
        }
        if (*((rsp - 0x3c)) == 0) {
            goto label_27;
        }
        ebx &= 0xffffffdf;
        r14b = (ebx == r10d) ? 1 : 0;
        if (*((rsp + 0x40)) == 0) {
            goto label_28;
        }
        rbx = r10;
        if (ebx == r10d) {
            goto label_29;
        }
        goto label_13;
    }
    rbx = r10;
    if (r15b == 0) {
        goto label_0;
    }
    goto label_11;
label_19:
    rbx = r10;
    if (r15b == 0) {
        goto label_0;
    }
    goto label_11;
label_21:
    rbx = r10;
    if (r15b == 0) {
        goto label_0;
    }
    goto label_11;
label_26:
    edx = *((rsp + 0x40));
    r14b = (bl == dl) ? 1 : 0;
    if (dl == 0) {
        goto label_15;
    }
    rbp = *((rsp - 0x30));
    rdx = *((rsp - 0x38));
    rbx = r10;
    if (bl != *((rsp + 0x40))) {
        goto label_13;
    }
label_29:
    if (*((rsp - 0x3b)) == 0) {
        goto label_30;
    }
    if (*((rsp - 0x3c)) == 0) {
        goto label_31;
    }
    r14b = (*((rdi + 7)) == 0) ? 1 : 0;
    if (r15b == 0) {
        goto label_0;
    }
    goto label_11;
label_15:
    rbp = *((rsp - 0x30));
label_25:
    rdx = *((rsp - 0x38));
    rbx = r10;
label_13:
    if (r15b == 0) {
        goto label_0;
    }
    goto label_11;
label_23:
    rbx = r10;
    if (r15b == 0) {
        goto label_0;
    }
    goto label_11;
label_28:
    rbx = r10;
    if (r15b == 0) {
        goto label_0;
    }
label_11:
    eax = (int32_t) r14b;
    goto label_3;
label_12:
label_9:
label_17:
label_18:
label_22:
label_27:
label_30:
label_31:
label_6:
    if (*(obj_y_90) >= 0xa) {
        eax = x_89;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        eax = 1;
        if (ecx == 0) {
            goto label_3;
        }
    }
label_4:
    eax = 1;
label_3:
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x405d00 */
#include <stdint.h>
 
uint64_t dbg_version_etc_arn (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg5, int64_t arg6, char const * const * authors, char const * command_name, size_t n_authors, char const * package, FILE * stream, char const * version) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r8 = arg5;
    r9 = arg6;
    r15 = authors;
    rcx = command_name;
    r12 = n_authors;
    rbx = package;
    r14 = stream;
    r13 = version;
    /* void version_etc_arn(FILE * stream,char const * command_name,char const * package,char const * version,char const * const * authors,size_t n_authors); */
    r12 = r9;
    r15 = r8;
    r13 = rcx;
    rbx = rdx;
    rcx = rsi;
    r14 = rdi;
    if (rcx != 0) {
        esi = 1;
        edx = "%s (%s) %s\n";
        eax = 0;
        rdi = r14;
        r8 = rbx;
        r9 = r13;
        fprintf_chk ();
        goto label_0;
    }
    if (*(obj.y) < 0xa) {
        goto label_1;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_1:
        esi = 1;
        edx = "%s %s\n";
        eax = 0;
        rdi = r14;
        rcx = rbx;
        r8 = r13;
        fprintf_chk ();
        if (*(obj.y) < 0xa) {
            goto label_0;
        }
        eax = x;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx == 0) {
            goto label_0;
        }
        esi = 1;
        edx = "%s %s\n";
        eax = 0;
        rdi = r14;
        rcx = rbx;
        r8 = r13;
        fprintf_chk ();
    }
label_0:
    edx = 5;
    rax = dcgettext (0, 0x4089c3);
    rcx = rax;
    esi = 1;
    edx = "Copyright %s %d Free Software Foundation, Inc.";
    r8d = 0x7e3;
    eax = 0;
    rdi = r14;
    fprintf_chk ();
    edx = 5;
    rax = dcgettext (0, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n");
    rdi = rax;
    rsi = r14;
    fputs_unlocked ();
    if (r12 <= 9) {
        /* switch table (10 cases) at 0x408960 */
        edx = 5;
        rax = dcgettext (0, "Written by %s.\n");
        rdx = rax;
        rcx = *(r15);
        esi = 1;
        eax = 0;
        rdi = r14;
invalid_funccall(); //        void (*0x402290)() ();
    }
    if (*(obj.y) < 0xa) {
        goto label_2;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx != 0) {
        goto label_3;
    }
    goto label_2;
    edx = 5;
    rax = dcgettext (0, "Written by %s and %s.\n");
    rdx = rax;
    rcx = *(r15);
    r8 = *((r15 + 8));
    esi = 1;
    eax = 0;
    rdi = r14;
invalid_funccall(); //    void (*0x402290)() ();
    if (*(obj.y) < 0xa) {
        goto label_4;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx != 0) {
        goto label_5;
    }
    goto label_4;
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\nand %s.\n");
    rdx = rax;
    rcx = *(r15);
    r8 = *((r15 + 8));
    r9 = *((r15 + 0x10));
    esi = 1;
    eax = 0;
    rdi = r14;
    fprintf_chk ();
    goto label_6;
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, and %s.\n");
    rdx = rax;
    rcx = *(r15);
    r8 = *((r15 + 8));
    r9 = *((r15 + 0x10));
    esi = 1;
    eax = 0;
    rdi = r14;
    fprintf_chk ();
    goto label_6;
    if (*(obj.y) < 0xa) {
        goto label_7;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx != 0) {
        goto label_8;
    }
    goto label_7;
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
    rdx = rax;
    rcx = *(r15);
    r8 = *((r15 + 8));
    r9 = *((r15 + 0x10));
    esi = 1;
    eax = 0;
    rdi = r14;
    fprintf_chk ();
    goto label_6;
    if (*(obj.y) < 0xa) {
        goto label_9;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx != 0) {
        goto label_10;
    }
    goto label_9;
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
    rdx = rax;
    rcx = *(r15);
    r8 = *((r15 + 8));
    r9 = *((r15 + 0x10));
    esi = 1;
    eax = 0;
    rdi = r14;
    fprintf_chk ();
    goto label_6;
    do {
label_4:
        edx = 5;
        rax = dcgettext (0, "Written by %s, %s, and %s.\n");
        rdx = rax;
        rcx = *(r15);
        r8 = *((r15 + 8));
        r9 = *((r15 + 0x10));
        esi = 1;
        eax = 0;
        rdi = r14;
        fprintf_chk ();
        if (*(obj.y) < 0xa) {
            goto label_6;
        }
        eax = x;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx == 0) {
            goto label_6;
        }
label_5:
        edx = 5;
        rax = dcgettext (0, "Written by %s, %s, and %s.\n");
        rdx = rax;
        rcx = *(r15);
        r8 = *((r15 + 8));
        r9 = *((r15 + 0x10));
        esi = 1;
        eax = 0;
        rdi = r14;
        fprintf_chk ();
    } while (1);
    do {
label_7:
        edx = 5;
        rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, and %s.\n");
        rdx = rax;
        rcx = *(r15);
        r8 = *((r15 + 8));
        r9 = *((r15 + 0x10));
        esi = 1;
        eax = 0;
        rdi = r14;
        fprintf_chk ();
        if (*(obj.y) < 0xa) {
            goto label_6;
        }
        eax = x;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx == 0) {
            goto label_6;
        }
label_8:
        edx = 5;
        rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, and %s.\n");
        rdx = rax;
        rcx = *(r15);
        r8 = *((r15 + 8));
        r9 = *((r15 + 0x10));
        esi = 1;
        eax = 0;
        rdi = r14;
        fprintf_chk ();
    } while (1);
    do {
label_9:
        edx = 5;
        rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
        rdx = rax;
        rcx = *(r15);
        r8 = *((r15 + 8));
        r9 = *((r15 + 0x10));
        esi = 1;
        eax = 0;
        rdi = r14;
        fprintf_chk ();
        if (*(obj.y) < 0xa) {
            goto label_6;
        }
        eax = x;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx == 0) {
            goto label_6;
        }
label_10:
        edx = 5;
        rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
        rdx = rax;
        rcx = *(r15);
        r8 = *((r15 + 8));
        r9 = *((r15 + 0x10));
        esi = 1;
        eax = 0;
        rdi = r14;
        fprintf_chk ();
    } while (1);
    do {
label_2:
        edx = 5;
        rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
        rdx = rax;
        rcx = *(r15);
        r8 = *((r15 + 8));
        r9 = *((r15 + 0x10));
        esi = 1;
        eax = 0;
        rdi = r14;
        fprintf_chk ();
        if (*(obj.y) < 0xa) {
            goto label_6;
        }
        eax = x;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx == 0) {
            goto label_6;
        }
label_3:
        edx = 5;
        rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
        rdx = rax;
        rcx = *(r15);
        r8 = *((r15 + 8));
        r9 = *((r15 + 0x10));
        esi = 1;
        eax = 0;
        rdi = r14;
        fprintf_chk ();
    } while (1);
label_6:
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4062d0 */
#include <stdint.h>
 
uint32_t dbg_version_etc_ar (char const * const * authors, char const * command_name, char const * package, FILE * stream, char const * version) {
    r8 = authors;
    rsi = command_name;
    rdx = package;
    rdi = stream;
    rcx = version;
    /* void version_etc_ar(FILE * stream,char const * command_name,char const * package,char const * version,char const * const * authors); */
    r9d = x_20;
    eax = r9 - 1;
    eax *= r9d;
    r9b = ((al & 1) == 0) ? 1 : 0;
    al = (*(obj_y_21) < 0xa) ? 1 : 0;
    al |= r9b;
    r9 = 0xffffffffffffffff;
    do {
        if (al == 0) {
            goto label_0;
        }
        r9 = r9 + 1;
    } while (*((r8 + r9*8 + 8)) != 0);
invalid_funccall(); //    void (*0x405d00)() ();
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x406330 */
#include <stdint.h>
 
uint64_t dbg_version_etc_va (__va_list_tag * authors, char const * authtab[11], char const * command_name, char const * package, FILE * stream, char const * version) {
    int64_t var_8h;
    r8 = authors;
    rbx = authtab;
    rsi = command_name;
    rdx = package;
    rdi = stream;
    rcx = version;
    /* void version_etc_va(FILE * stream,char const * command_name,char const * package,char const * version,__va_list_tag * authors); */
    eax = x_22;
    r10d = y_23;
    r9d = rax - 1;
    r9d *= eax;
    al = ((r9b & 1) == 0) ? 1 : 0;
    r11b = (r10d < 0xa) ? 1 : 0;
    r11b |= al;
    do {
        rbx = rsp;
        rbx += 0xffffffffffffffb0;
    } while (r11b == 0);
    if (r10d >= 0xa) {
        r9d &= 1;
        if (r9d != 0) {
            goto label_1;
        }
    }
    r9d = 0;
    do {
label_0:
        if (r9 > 9) {
            goto label_2;
        }
        r11 = *(r8);
        if (r11 <= 0x28) {
            r10 = r11;
            r10 += *((r8 + 0x10));
            eax = r11 + 8;
            *(r8) = eax;
        } else {
            r10 = *((r8 + 8));
            rax = r10 + 8;
            *((r8 + 8)) = rax;
        }
        rax = *(r10);
        *((rbx + r9*8)) = rax;
        if (rax == 0) {
            goto label_2;
        }
        r9++;
    } while (*(obj_y_23) < 0xa);
    r10d = x_22;
    eax = r10 - 1;
    eax *= r10d;
    eax &= 1;
    if (eax == 0) {
        goto label_0;
    }
label_1:
label_2:
    version_etc_arn (rdi, rsi, rdx, rcx, rbx);
    rsp = rbp - 8;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x406400 */
#include <stdint.h>
 
uint64_t dbg_version_etc (int64_t arg_e0h, int64_t arg10, int64_t arg11, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9, char const * command_name, char const * package, FILE * stream, char const * version) {
    va_list authors;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
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
    r8 = arg5;
    r9 = arg6;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    rsi = command_name;
    rdx = package;
    rdi = stream;
    rcx = version;
    /* void version_etc(FILE * stream,char const * command_name,char const * package,char const * version,va_args ..); */
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
    *((rsp + 0x48)) = r9;
    *((rsp + 0x40)) = r8;
    rax = rsp + 0x20;
    *((rsp + 0x10)) = rax;
    rax = rsp + 0xe0;
    *((rsp + 8)) = rax;
    *((rsp + 4)) = 0x30;
    *(rsp) = 0x20;
    r8 = rsp;
    version_etc_va ();
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x406490 */
#include <stdint.h>
 
void dbg_emit_bug_reporting_address (void) {
    /* void emit_bug_reporting_address(); */
    if (*(obj_y_27) < 0xa) {
        goto label_0;
    }
    eax = x_26;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_0:
        edx = 5;
        rax = dcgettext (0, "\nReport bugs to: %s\n");
        rcx = rax;
        edi = 1;
        edx = "bug-coreutils@gnu.org";
        eax = 0;
        rsi = rcx;
        printf_chk ();
        edx = 5;
        rax = dcgettext (0, "%s home page: <%s>\n");
        rsi = rax;
        edi = 1;
        edx = "GNU coreutils";
        ecx = "https://www.gnu.org/software/coreutils/";
        eax = 0;
        printf_chk ();
        edx = 5;
        rax = dcgettext (0, "General help using GNU software: <https://www.gnu.org/gethelp/>\n");
        rsi = stdout;
        rdi = rax;
        fputs_unlocked ();
        if (*(obj_y_27) < 0xa) {
            goto label_1;
        }
        eax = x_26;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx == 0) {
            goto label_1;
        }
        edx = 5;
        rax = dcgettext (0, "\nReport bugs to: %s\n");
        rcx = rax;
        edi = 1;
        edx = "bug-coreutils@gnu.org";
        eax = 0;
        rsi = rcx;
        printf_chk ();
        edx = 5;
        rax = dcgettext (0, "%s home page: <%s>\n");
        rsi = rax;
        edi = 1;
        edx = "GNU coreutils";
        ecx = "https://www.gnu.org/software/coreutils/";
        eax = 0;
        printf_chk ();
        edx = 5;
        rax = dcgettext (0, "General help using GNU software: <https://www.gnu.org/gethelp/>\n");
        rsi = stdout;
        rdi = rax;
        fputs_unlocked ();
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4065c0 */
#include <stdint.h>
 
int64_t dbg_xnmalloc (uint32_t arg1, int64_t arg2, size_t n, void * p) {
    rdi = arg1;
    rsi = arg2;
    r14 = n;
    rax = p;
    /* void * xnmalloc(size_t n,size_t s); */
    r14 = rsi;
    if (*(obj.y) < 0xa) {
        goto label_0;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx == 0) {
        goto label_0;
    }
    while (1);
label_0:
    rax = 0x7fffffffffffffff;
    edx = 0;
    rax = rdx_rax / r14;
    rdx = rdx_rax % r14;
    if (rax < rdi) {
        goto label_1;
    }
    r14 *= rdi;
    eax = x_1;
    ecx = rax - 1;
    ecx *= eax;
    al = ((cl & 1) == 0) ? 1 : 0;
    bl = (*(obj_y_2) < 0xa) ? 1 : 0;
    bl |= al;
    do {
        rax = malloc (r14);
    } while (bl == 0);
    if (r14 != 0) {
        if (rax == 0) {
            goto label_1;
        }
    }
    return rax;
label_1:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x406660 */
#include <stdint.h>
 
uint64_t xmalloc (size_t size) {
    rdi = size;
    r14 = rdi;
    eax = x_1;
    ecx = rax - 1;
    ecx *= eax;
    al = ((cl & 1) == 0) ? 1 : 0;
    bl = (*(obj_y_2) < 0xa) ? 1 : 0;
    bl |= al;
    do {
        rax = malloc (r14);
    } while (bl == 0);
    if (r14 != 0) {
        if (rax == 0) {
            goto label_0;
        }
    }
    return rax;
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4066c0 */
#include <stdint.h>
 
int64_t dbg_xnrealloc (int64_t arg1, int64_t arg3, size_t n, void * p, size_t s) {
    rdi = arg1;
    rdx = arg3;
    rsi = n;
    r14 = p;
    rbx = s;
    /* void * xnrealloc(void * p,size_t n,size_t s); */
    rbx = rdx;
    r14 = rdi;
    rax = 0x7fffffffffffffff;
    edx = 0;
    rax = rdx_rax / rbx;
    rdx = rdx_rax % rbx;
    if (rax >= rsi) {
        rbx *= rsi;
        if (*(obj_y_4) < 0xa) {
            goto label_0;
        }
        eax = x_3;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx != 0) {
            goto label_1;
        }
    } else {
        xalloc_die ();
    }
    do {
label_0:
        xrealloc (r14, rbx);
        if (*(obj_y_4) < 0xa) {
            goto label_2;
        }
        ecx = x_3;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_2;
        }
label_1:
        xrealloc (r14, rbx);
    } while (1);
label_2:
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x406740 */
#include <stdint.h>
 
uint64_t dbg_xrealloc (int64_t arg1, int64_t arg2, size_t n, void * p) {
    rdi = arg1;
    rsi = arg2;
    rbx = n;
    r14 = p;
    /* void * xrealloc(void * p,size_t n); */
    rbx = rsi;
    r14 = rdi;
    if (r14 != 0) {
        if (rbx == 0) {
            if (*(obj_y_6) < 0xa) {
                goto label_0;
            }
            eax = x_5;
            ecx = rax - 1;
            ecx *= eax;
            ecx &= 1;
            if (ecx != 0) {
                goto label_1;
            }
        }
    } else {
        rax = realloc (r14, rbx);
        if (rbx == 0) {
            goto label_2;
        }
        if (rax != 0) {
            goto label_2;
        }
        xalloc_die ();
    }
    do {
label_0:
        eax = free (r14);
        eax = 0;
        if (*(obj_y_6) < 0xa) {
            goto label_2;
        }
        ecx = x_5;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_2;
        }
label_1:
        free (r14);
    } while (1);
label_2:
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4067c0 */
#include <stdint.h>
 
int64_t x2nrealloc (int64_t arg_4h, int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r8 = rdx;
    rcx = *(rsi);
    if (rdi == 0) {
        goto label_0;
    }
    if (*(obj_y_8) < 0xa) {
        goto label_1;
    }
    eax = x_7;
    edx = rax - 1;
    edx *= eax;
    edx &= 1;
    if (edx == 0) {
        goto label_1;
    }
    while (1);
label_0:
    if (rcx != 0) {
        goto label_2;
    }
    if (*(obj_y_8) >= 0xa) {
        eax = x_7;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx == 0) {
            goto label_3;
        }
label_1:
        rax = 0x5555555555555554;
        edx = 0;
        rax = rdx_rax / r8;
        rdx = rdx_rax % r8;
        if (rax <= rcx) {
            goto label_4;
        }
        rax = rcx;
        rax >>= 1;
        rcx = rcx + rax + 1;
        goto label_5;
    }
label_3:
    eax = 0x80;
    edx = 0;
    rax = rdx_rax / r8;
    rdx = rdx_rax % r8;
    ecx = 0;
    while (1);
    cl = (r8 > 0x80) ? 1 : 0;
    rcx += rax;
label_2:
    rax = 0x7fffffffffffffff;
    edx = 0;
    rax = rdx_rax / r8;
    rdx = rdx_rax % r8;
    if (rax >= rcx) {
label_5:
        *(rsi) = rcx;
        r8 *= rcx;
        rsi = r8;
invalid_funccall(); //        void (*0x406740)() ();
label_4:
        xalloc_die ();
    }
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x406890 */
#include <stdint.h>
 
uint64_t dbg_xcharalloc (int64_t arg_4h, int64_t arg1, size_t n, void * p) {
    rdi = arg1;
    r14 = n;
    rax = p;
    /* char * xcharalloc(size_t n); */
    r14 = rdi;
    eax = x_1;
    ecx = rax - 1;
    ecx *= eax;
    al = ((cl & 1) == 0) ? 1 : 0;
    bl = (*(obj_y_2) < 0xa) ? 1 : 0;
    bl |= al;
    do {
        rax = malloc (r14);
    } while (bl == 0);
    if (r14 != 0) {
        if (rax == 0) {
            goto label_0;
        }
    }
    return rax;
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4068f0 */
#include <stdint.h>
 
int64_t dbg_x2realloc (int64_t arg_4h, int64_t arg1, size_t n, void * p, size_t * pn) {
    rdi = arg1;
    rsi = n;
    rbx = p;
    r14 = pn;
    /* void * x2realloc(void * p,size_t * pn); */
    r14 = rsi;
    rbx = rdi;
    r15 = 0x5555555555555554;
    if (*(obj_y_12) >= 0xa) {
        eax = x_11;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx != 0) {
            goto label_3;
        }
    }
label_0:
    rsi = *(r14);
    if (rbx == 0) {
        goto label_4;
    }
    if (*(obj_y_8) < 0xa) {
        goto label_5;
    }
    eax = x_7;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx == 0) {
        goto label_5;
    }
    while (1);
label_4:
    if (rsi == 0) {
        goto label_6;
    }
    if (rsi >= 0) {
        goto label_1;
    }
    xalloc_die ();
label_5:
    if (rsi >= r15) {
        goto label_7;
    }
    rax = rsi;
    rax >>= 1;
    do {
label_1:
        *(r14) = rsi;
        xrealloc (rbx, rsi + rax + 1);
        if (*(obj_y_12) >= 0xa) {
            ecx = x_11;
            edx = rcx - 1;
            edx *= ecx;
            edx &= 1;
            if (edx == 0) {
                goto label_8;
            }
label_3:
            rsi = *(r14);
            if (rbx != 0) {
                if (*(obj_y_8) < 0xa) {
                    goto label_9;
                }
                eax = x_7;
                ecx = rax - 1;
                ecx *= eax;
                ecx &= 1;
                if (ecx == 0) {
                    goto label_9;
                }
            }
            if (rsi == 0) {
                goto label_10;
            }
            if (rsi < 0) {
                xalloc_die ();
label_9:
                if (rsi >= r15) {
                    goto label_11;
                }
                rax = rsi;
                rax >>= 1;
            }
label_2:
            *(r14) = rsi;
            xrealloc (rbx, rsi + rax + 1);
            goto label_0;
        }
label_8:
        return rax;
label_6:
        esi = 0x80;
    } while (*(obj_y_8) < 0xa);
    eax = x_7;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx == 0) {
        goto label_1;
    }
label_10:
    esi = 0x80;
    if (*(obj_y_8) < 0xa) {
        goto label_2;
    }
    eax = x_7;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx == 0) {
        goto label_2;
    }
label_7:
    xalloc_die ();
label_11:
    return xalloc_die ();
    while (1);
}
/* r2dec pseudo code output */
/* nostrip @ 0x406a60 */
#include <stdint.h>
 
uint64_t dbg_xzalloc (int64_t arg_4h, int64_t arg1, size_t n, void * p) {
    rdi = arg1;
    r14 = n;
    rbx = p;
    /* void * xzalloc(size_t s); */
    r14 = rdi;
    eax = x_13;
    ecx = y_14;
    ebp = rax - 1;
    ebp *= eax;
    ebp &= 1;
    r12d = x_1;
    r13d = y_2;
    if (ecx >= 0xa) {
        if (ebp != 0) {
            goto label_1;
        }
    }
label_0:
    *((rsp + 4)) = ecx;
    eax = r12 - 1;
    eax *= r12d;
    al = ((al & 1) == 0) ? 1 : 0;
    r15b = (r13d < 0xa) ? 1 : 0;
    r15b |= al;
    do {
        rax = malloc (r14);
        rbx = rax;
    } while (r15b == 0);
    if (r14 != 0) {
        if (rbx == 0) {
            goto label_2;
        }
    }
    memset (rbx, 0, r14);
    ecx = *((rsp + 4));
    if (ecx < 0xa) {
        goto label_3;
    }
    if (ebp == 0) {
        goto label_3;
    }
label_1:
    if (r13d < 0xa) {
        goto label_0;
    }
    eax = r12 - 1;
    eax *= r12d;
    eax &= 1;
    if (eax == 0) {
        goto label_0;
    }
label_3:
    rax = rbx;
    return rax;
label_2:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x406b30 */
#include <stdint.h>
 
int64_t dbg_xcalloc (size_t n, void * p, size_t s) {
    rdi = n;
    rax = p;
    rsi = s;
    /* void * xcalloc(size_t n,size_t s); */
    rax = 0x7fffffffffffffff;
    edx = 0;
    rax = rdx_rax / rsi;
    rdx = rdx_rax % rsi;
    if (rax >= rdi) {
        rax = rpl_calloc ();
        if (rax == 0) {
            goto label_0;
        }
        return rax;
    }
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x406b60 */
#include <stdint.h>
 
uint64_t xmemdup (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r15 = rsi;
    r14 = rdi;
    eax = x_1;
    ecx = rax - 1;
    ecx *= eax;
    al = ((cl & 1) == 0) ? 1 : 0;
    bpl = (*(obj_y_2) < 0xa) ? 1 : 0;
    bpl |= al;
    do {
        rax = malloc (r15);
        rbx = rax;
    } while (bpl == 0);
    if (r15 != 0) {
        if (rbx == 0) {
            goto label_0;
        }
    }
    memcpy (rbx, r14, r15);
    rax = rbx;
    return rax;
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x406bd0 */
#include <stdint.h>
 
uint64_t dbg_xstrdup (int64_t arg1, size_t n, void * p, char const * string) {
    rdi = arg1;
    r15 = n;
    rbx = p;
    r14 = string;
    /* char * xstrdup(char const * string); */
    r14 = rdi;
    rax = strlen (rdi);
    r15 = rax;
    r15++;
    eax = x_1;
    ecx = rax - 1;
    ecx *= eax;
    al = ((cl & 1) == 0) ? 1 : 0;
    bpl = (*(obj_y_2) < 0xa) ? 1 : 0;
    bpl |= al;
    do {
        rax = malloc (r15);
        rbx = rax;
    } while (bpl == 0);
    if (r15 != 0) {
        if (rbx == 0) {
            goto label_0;
        }
    }
    memcpy (rbx, r14, r15);
    rax = rbx;
    return rax;
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x406c50 */
#include <stdint.h>
 
uint64_t dbg_xalloc_die (void) {
    /* void xalloc_die(); */
    ebx = *(obj.exit_failure);
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (ebx, 0, 0x408355);
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x406c80 */
#include <stdint.h>
 
uint64_t dbg_rpl_calloc (size_t bytes, size_t n, size_t s) {
    rax = bytes;
    rdi = n;
    rsi = s;
    /* void * rpl_calloc(size_t n,size_t s); */
    ecx = x;
    r8d = y;
    r14d = 1;
    if (rdi == 0) {
        goto label_0;
    }
    r15d = 1;
    if (rsi == 0) {
        goto label_1;
    }
    if (r8d < 0xa) {
        goto label_2;
    }
    eax = rcx - 1;
    eax *= ecx;
    eax &= 1;
    if (eax == 0) {
        goto label_2;
    }
    while (1);
label_0:
    r15d = 1;
    goto label_1;
label_2:
    rax = rsi;
    rax *= rdi;
    edx = 0;
    rax = rdx_rax / rsi;
    rdx = rdx_rax % rsi;
    r14 = rsi;
    r15 = rdi;
    if (rax != rdi) {
        goto label_3;
    }
label_1:
    eax = rcx - 1;
    eax *= ecx;
    al = ((al & 1) == 0) ? 1 : 0;
    bl = (r8d < 0xa) ? 1 : 0;
    bl |= al;
    do {
        calloc (r15, r14);
    } while (bl == 0);
    do {
        return rax;
label_3:
        errno_location ();
        *(rax) = 0xc;
        eax = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* nostrip @ 0x406d30 */
#include <stdint.h>
 
uint64_t dbg_rpl_mbrtowc (int64_t arg2, int64_t arg3, size_t n, mbstate_t * ps, wchar_t * pwc, size_t ret, char const * s) {
    int64_t var_20h;
    rsi = arg2;
    rdx = arg3;
    r15 = n;
    rcx = ps;
    rdi = pwc;
    r12 = ret;
    r14 = s;
    /* size_t rpl_mbrtowc(wchar_t * pwc,char const * s,size_t n,mbstate_t * ps); */
    r15 = rdx;
    r14 = rsi;
    eax = x;
    edx = rax - 1;
    edx *= eax;
    dl = ((dl & 1) == 0) ? 1 : 0;
    al = (*(obj.y) < 0xa) ? 1 : 0;
    al |= dl;
    do {
        rbx = rsp;
        rbx += 0xfffffffffffffff0;
    } while (al == 0);
    if (rdi != 0) {
        rbx = rdi;
    }
    rax = mbrtowc (rbx, r14, r15, rcx);
    r12 = rax;
    if (r15 != 0) {
        if (r12 < 0xfffffffffffffffe) {
            goto label_0;
        }
        edi = 0;
        al = hard_locale ();
        if (al != 0) {
            goto label_0;
        }
        eax = *(r14);
        *(rbx) = eax;
        r12d = 1;
    }
label_0:
    rax = r12;
    rsp = rbp - 0x20;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x406dc0 */
#include <stdint.h>
 
uint64_t dbg_close_stream (FILE * __stream, int64_t arg1) {
    rbx = __stream;
    rdi = arg1;
    /* int close_stream(FILE * stream); */
    rbx = rdi;
    if (*(obj.y) < 0xa) {
        goto label_0;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_0:
        rdi = rbx;
        rax = fpending ();
        r14 = rax;
        r12d = *(rbx);
        rpl_fclose (rbx);
        r15d = x;
        ebp = y;
        if (ebp < 0xa) {
            goto label_1;
        }
        ecx = r15 - 1;
        ecx *= r15d;
        ecx &= 1;
        if (ecx == 0) {
            goto label_1;
        }
        rdi = rbx;
        fpending ();
        eax = rpl_fclose (rbx);
    }
label_1:
    if ((r12b & 0x20) == 0) {
        ebx = 0;
        if (eax == 0) {
            goto label_2;
        }
        if (r14 == 0) {
            rax = errno_location ();
            if (*(rax) != 9) {
                goto label_3;
            }
        } else {
            if (eax != 0) {
                goto label_3;
            }
            errno_location ();
            *(rax) = 0;
            r15d = x;
            ebp = y;
        }
label_3:
        ebx = 0xffffffff;
        if (ebp < 0xa) {
            goto label_2;
        }
        eax = r15 - 1;
        eax *= r15d;
        eax &= 1;
        if (eax == 0) {
            goto label_2;
        }
    }
label_2:
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x406e90 */
#include <stdint.h>
 
uint64_t dbg_hard_locale (int32_t category, char const * p) {
    rdi = category;
    rbx = p;
    /* _Bool hard_locale(int category); */
    rax = setlocale (rdi, 0);
    rbx = rax;
    bpl = 1;
    if (rbx == 0) {
        goto label_0;
    }
    eax = strcmp (rbx, 0x408cd0);
    if (eax != 0) {
        eax = strcmp (rbx, "POSIX");
        if (eax != 0) {
            goto label_0;
        }
    }
    ebp = 0;
    if (*(obj.y) < 0xa) {
        goto label_0;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx == 0) {
        goto label_0;
    }
    while (1);
label_0:
    eax = ebp;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x406f00 */
#include <stdint.h>
 
uint64_t dbg_locale_charset (char const * codeset) {
    rax = codeset;
    /* char const * locale_charset(); */
    rax = nl_langinfo (0xe);
    ecx = 0x408096;
    if (rax != 0) {
        rcx = rax;
    }
    eax = "ASCII";
    if (*(rcx) != 0) {
        rax = rcx;
    }
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x406f30 */
#include <stdint.h>
 
uint64_t dbg_rpl_fclose (int64_t arg1, int32_t fd, FILE * fp) {
    rdi = arg1;
    rax = fd;
    rbx = fp;
    /* int rpl_fclose(FILE * fp); */
    rbx = rdi;
    if (*(obj.y) < 0xa) {
        goto label_1;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_1:
        fileno (rbx);
        if (*(obj.y) < 0xa) {
            goto label_2;
        }
        ecx = x;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_2;
        }
        eax = fileno (rbx);
    }
label_2:
    if (eax >= 0) {
        rdi = rbx;
        eax = freading ();
        if (eax != 0) {
            eax = fileno (rbx);
            esi = 0;
            edx = 1;
            edi = eax;
            rax = lseek ();
            if (rax == -1) {
                goto label_3;
            }
        }
        eax = rpl_fflush (rbx);
        if (eax == 0) {
            goto label_3;
        }
        if (*(obj.y) < 0xa) {
            goto label_4;
        }
        eax = x;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx == 0) {
            goto label_4;
        }
    }
label_3:
    rdi = rbx;
invalid_funccall(); //    void (*0x4020b0)() ();
label_4:
    rax = errno_location ();
    r14 = rax;
    ebp = *(r14);
    fclose (rbx);
    if (ebp == 0) {
        goto label_5;
    }
    if (*(obj.y) >= 0xa) {
        eax = x;
        ecx = rax - 1;
        ecx *= eax;
        ecx &= 1;
        if (ecx != 0) {
            goto label_6;
        }
    }
label_0:
    *(r14) = ebp;
    eax = 0xffffffff;
    if (*(obj.y) < 0xa) {
        goto label_5;
    }
    ecx = x;
    edx = rcx - 1;
    edx *= ecx;
    edx &= 1;
    if (edx != 0) {
label_6:
        *(r14) = ebp;
        goto label_0;
    }
label_5:
    return rax;
    while (1);
}
/* r2dec pseudo code output */
/* nostrip @ 0x407040 */
#include <stdint.h>
 
int32_t dbg_rpl_fflush (int64_t arg1, FILE * fp) {
    rdi = arg1;
    rbx = fp;
    /* int rpl_fflush(FILE * stream); */
    rbx = rdi;
    if (rbx == 0) {
        goto label_1;
    }
    if (*(obj.y) < 0xa) {
        goto label_2;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    while (1) {
label_2:
        rdi = rbx;
        freading ();
        if (*(obj.y) < 0xa) {
            goto label_3;
        }
        ecx = x;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_3;
        }
        rdi = rbx;
        eax = freading ();
    }
label_3:
    if (eax != 0) {
        goto label_4;
    }
label_1:
    rdi = rbx;
invalid_funccall(); //    void (*0x4021e0)() ();
    do {
label_0:
        fflush (rbx);
label_4:
        if ((*((rbx + 1)) & 1) != 0) {
            rpl_fseeko (rbx, 0, 1);
        }
        if (*(obj_y_2) >= 0xa) {
            eax = x_1;
            ecx = rax - 1;
            ecx *= eax;
            ecx &= 1;
            if (ecx != 0) {
                goto label_5;
            }
        }
        fflush (rbx);
        if (*(obj.y) < 0xa) {
            goto label_6;
        }
        ecx = x;
        edx = rcx - 1;
        edx *= ecx;
        edx &= 1;
        if (edx == 0) {
            goto label_6;
        }
        if ((*((rbx + 1)) & 1) != 0) {
            rpl_fseeko (rbx, 0, 1);
        }
    } while (*(obj_y_2) < 0xa);
    eax = x_1;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx == 0) {
        goto label_0;
    }
label_5:
label_6:
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x407150 */
#include <stdint.h>
 
int64_t dbg_rpl_fseeko (int64_t arg1, int64_t arg2, int64_t arg3, FILE * fp, off_t pos, int32_t whence) {
    off_t offset;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = fp;
    rax = pos;
    r14 = whence;
    /* int rpl_fseeko(FILE * fp,off_t offset,int whence); */
    r14d = edx;
    rbx = rdi;
    rax = *((rbx + 0x10));
    if (rax != *((rbx + 8))) {
label_0:
        rdi = rbx;
        rsi = rbp;
        edx = r14d;
        r14 = rbx;
invalid_funccall(); //        void (*0x402250)() ();
    }
    if (*(obj.y) < 0xa) {
        goto label_2;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx &= 1;
    if (ecx == 0) {
        goto label_2;
    }
    while (1);
label_2:
    rax = *((rbx + 0x28));
    if (rax != *((rbx + 0x20))) {
        goto label_0;
    }
    if (*((rbx + 0x48)) != 0) {
        goto label_0;
    }
    eax = fileno (rbx);
    edi = eax;
    rsi = rbp;
    edx = r14d;
    rax = lseek ();
    if (rax == -1) {
        goto label_3;
    }
    *(rbx) &= 0xef;
    *((rbx + 0x90)) = rax;
    eax = 0;
    do {
label_1:
        return rax;
label_3:
        eax = 0xffffffff;
    } while (*(obj.y) < 0xa);
    ecx = x;
    edx = rcx - 1;
    edx *= ecx;
    edx &= 1;
    if (edx == 0) {
        goto label_1;
    }
}
/* r2dec pseudo code output */
/* nostrip @ 0x407210 */
#include <stdint.h>
 
uint64_t libc_csu_init (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r15 = obj___frame_dummy_init_array_entry;
    r14 = rdx;
    r13 = rsi;
    r12d = edi;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    rbp -= r15;
    rax = _init ();
    rbp >>= 3;
    if (rbp == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rdx = r14;
        rsi = r13;
        edi = r12d;
invalid_funccall(); //        uint64_t (*r15 + rbx*8)() ();
        rbx++;
    } while (rbp != rbx);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x407280 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* nostrip @ 0x407290 */
#include <stdint.h>
 
void atexit (void) {
    rdx = *(obj.__dso_handle);
    esi = 0;
    return cxa_atexit ();
}
