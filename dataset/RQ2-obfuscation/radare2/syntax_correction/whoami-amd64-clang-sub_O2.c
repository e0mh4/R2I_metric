#include "decompile_radare2_obfuscated.h"
/* r2dec pseudo code output */
/* nostrip @ 0x402300 */
#include <stdint.h>
 
void dl_relocate_static_pie (void) {
}
/* r2dec pseudo code output */
/* nostrip @ 0x4023c0 */
#include <stdint.h>
 
uint64_t dbg_usage (int64_t arg1, char const * lc_messages) {
    int32_t status;
    rdi = arg1;
    rax = lc_messages;
    /* void usage(int status); */
    if (ebp == 0) {
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
        edx = 5;
        rax = dcgettext (0, "\n%s online help: <%s>\n");
        rsi = rax;
        edi = 1;
        edx = "GNU coreutils";
        ecx = "https://www.gnu.org/software/coreutils/";
        eax = 0;
        printf_chk ();
        rax = setlocale (5, 0);
        if (rax != 0) {
            eax = strncmp (rax, 0x4061d3, 3);
            if (eax == 0) {
                goto label_0;
            }
            edx = 5;
            rax = dcgettext (0, "Report any translation bugs to <https://translationproject.org/team/>\n");
            rsi = stdout;
            rdi = rax;
            fputs_unlocked ();
        }
label_0:
        edx = 5;
        rax = dcgettext (0, "Full documentation <%s%s>\n");
        rsi = rax;
        edi = 1;
        edx = "https://www.gnu.org/software/coreutils/";
        ecx = "whoami";
        eax = 0;
        printf_chk ();
        edx = 5;
        rax = dcgettext (0, "or available locally via: info '(coreutils) %s%s'\n");
        rsi = rax;
        edi = 1;
        edx = "whoami";
        ecx = " invocation";
        eax = 0;
        printf_chk ();
        exit (ebp);
    }
    rbx = stderr;
    edx = 5;
    rax = dcgettext (0, "Try '%s --help' for more information.\n");
    rdx = rax;
    rcx = program_name;
    esi = 1;
    eax = 0;
    rdi = rbx;
    fprintf_chk ();
    return exit (ebp);
}
/* r2dec pseudo code output */
/* nostrip @ 0x402560 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc, char ** argv, passwd * pw, uid_t uid) {
    rdi = argc;
    rsi = argv;
    rax = pw;
    rbx = uid;
    /* int main(int argc,char ** argv); */
    rbx = rsi;
    set_program_name (*(rbx));
    setlocale (6, 0x406096);
    bindtextdomain (0x406147, "/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
    textdomain (0x406147, rsi);
    edi = close_stdout;
    atexit ();
    eax = 0;
    parse_gnu_standard_options_only (ebp, rbx, "whoami", "GNU coreutils", *(obj.Version), 1);
    if (*(obj.optind) == ebp) {
        rax = errno_location ();
        *(rbp) = 0;
        eax = geteuid ();
        ebx = eax;
        if (ebx == 0xffffffff) {
            r14d = *(rbp);
            if (r14d != 0) {
                goto label_0;
            }
        }
        edi = ebx;
        rax = getpwuid ();
        if (rax == 0) {
            goto label_1;
        }
        eax = puts (*(rax));
        eax = 0;
        return rax;
    }
    edx = 5;
    rax = dcgettext (0, "extra operand %s");
    rax = *(obj.optind);
    rax = quote (*((rbx + rax*8)));
    rcx = rax;
    eax = 0;
    error (0, 0, rbp);
    dbg_usage (1);
label_1:
    r14d = *(rbp);
label_0:
    edx = 5;
    rax = dcgettext (0, "cannot find name for user ID %lu");
    ecx = ebx;
    eax = 0;
    rax = error (1, r14d, rax);
}
/* r2dec pseudo code output */
/* nostrip @ 0x402690 */
#include <stdint.h>
 
void dbg_close_stdout_set_file_name (char const * file) {
    rdi = file;
    /* void close_stdout_set_file_name(char const * file); */
    *(obj.file_name) = rdi;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4026a0 */
#include <stdint.h>
 
void dbg_close_stdout_set_ignore_EPIPE (_Bool ignore) {
    rdi = ignore;
    /* void close_stdout_set_ignore_EPIPE(_Bool ignore); */
    *(obj.ignore_EPIPE) = dil;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4026b0 */
#include <stdint.h>
 
uint64_t dbg_close_stdout (char const * write_error) {
    rbx = write_error;
    /* void close_stdout(); */
    eax = close_stream (*(obj.stdout));
    if (eax != 0) {
        bl = ignore_EPIPE;
        rax = errno_location ();
        if (bl == 0) {
            goto label_0;
        }
        if (*(rbp) != 0x20) {
            goto label_0;
        }
    }
    eax = close_stream (*(obj.stderr));
    if (eax == 0) {
        return rax;
label_0:
        edx = 5;
        rax = dcgettext (0, "write error");
        rbx = rax;
        rdi = file_name;
        ebp = *(rbp);
        if (rdi != 0) {
            goto label_1;
        }
        eax = 0;
        rcx = rbx;
        error (0, ebp, 0x40628d);
        exit (*(obj.exit_failure));
    }
    exit (*(obj.exit_failure));
label_1:
    rax = quotearg_colon (rdi);
    rcx = rax;
    eax = 0;
    r8 = rbx;
    error (0, ebp, "%s: %s");
    return exit (*(obj.exit_failure));
}
/* r2dec pseudo code output */
/* nostrip @ 0x402770 */
#include <stdint.h>
 
uint64_t dbg_parse_long_options (int64_t arg_100h, int64_t arg10, int64_t arg11, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9, int32_t argc, char ** argv, int32_t c, char const * command_name, char const * package, void (*usage_func)(), char const * version) {
    int32_t saved_opterr;
    va_list authors;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
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
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    rdi = argc;
    rsi = argv;
    rax = c;
    r12 = command_name;
    r15 = package;
    rbx = usage_func;
    r14 = version;
    /* void parse_long_options(int argc,char ** argv,char const * command_name,char const * package,char const * version,void (*usage_func)(),va_args ..); */
    rbx = r9;
    r14 = r8;
    r15 = rcx;
    r12 = rdx;
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
    ebp = opterr;
    *(obj.opterr) = 0;
    if (edi == 2) {
        edi = 2;
        edx = 0x406290;
        ecx = long_options;
        r8d = 0;
        eax = getopt_long ();
        if (eax != 0x68) {
            if (eax != 0x76) {
                goto label_0;
            }
            rax = rsp + 0x20;
            *((rsp + 0x10)) = rax;
            rax = rsp + 0x100;
            *((rsp + 8)) = rax;
            *((rsp + 4)) = 0x30;
            *(rsp) = 0x30;
            rdi = stdout;
            r8 = rsp;
            rsi = r12;
            rdx = r15;
            rcx = r14;
            version_etc_va ();
            exit (0);
        }
        edi = 0;
invalid_funccall(); //        void (*rbx)() ();
    }
label_0:
    *(obj.opterr) = ebp;
    *(obj.optind) = 0;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402870 */
#include <stdint.h>
 
uint64_t dbg_parse_gnu_standard_options_only (int64_t arg_100h, int64_t arg_108h, int64_t arg10, int64_t arg11, int64_t arg5, int64_t arg7, int64_t arg8, int64_t arg9, int32_t argc, char ** argv, int32_t c, char const * command_name, char const * optstring, char const * package, _Bool scan_all, void (*usage_func)(), char const * version) {
    int32_t saved_opterr;
    va_list authors;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
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
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    rdi = argc;
    rsi = argv;
    rax = c;
    rbx = command_name;
    rdx = optstring;
    r15 = package;
    r9 = scan_all;
    rcx = usage_func;
    r14 = version;
    /* void parse_gnu_standard_options_only(int argc,char ** argv,char const * command_name,char const * package,char const * version,_Bool scan_all,void (*usage_func)(),va_args ..); */
    r14 = r8;
    r15 = rcx;
    rbx = rdx;
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
    ebp = opterr;
    *(obj.opterr) = 1;
    eax = 0x406096;
    edx = 0x406290;
    if (r9b != 0) {
        rdx = rax;
    }
    ecx = long_options;
    r8d = 0;
    eax = getopt_long ();
    if (eax != 0xffffffff) {
        rcx = *((rsp + 0x100));
        if (eax != 0x68) {
            if (eax == 0x76) {
                goto label_0;
            }
            edi = *(obj.exit_failure);
        } else {
            edi = 0;
        }
invalid_funccall(); //        void (*rcx)() ();
    }
    *(obj.opterr) = ebp;
    return eax;
label_0:
    rax = rsp + 0x20;
    *((rsp + 0x10)) = rax;
    rax = rsp + 0x108;
    *((rsp + 8)) = rax;
    *((rsp + 4)) = 0x30;
    *(rsp) = 0x30;
    rdi = stdout;
    r8 = rsp;
    rsi = rbx;
    rdx = r15;
    rcx = r14;
    version_etc_va ();
    return exit (0);
}
/* r2dec pseudo code output */
/* nostrip @ 0x402970 */
#include <stdint.h>
 
uint64_t dbg_set_program_name (char ** arg1, char const * base, char const * slash) {
    rdi = arg1;
    r14 = base;
    rax = slash;
    /* void set_program_name(char const * argv0); */
    rbx = rdi;
    if (rbx != 0) {
        rax = strrchr (rbx, 0x2f);
        r14 = rax + 1;
        if (rax == 0) {
            r14 = rbx;
        }
        rax = r14;
        rax -= rbx;
        if (rax >= 7) {
            eax = strncmp (r14 - 7, "/.libs/", 7);
            if (eax != 0) {
                goto label_0;
            }
            eax = strncmp (r14, 0x406340, 3);
            if (eax == 0) {
                r14 += 3;
                *(obj.__progname) = r14;
            }
            rbx = r14;
        }
label_0:
        *(obj.program_name) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 0x37, 1, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x402a20 */
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
/* nostrip @ 0x402a60 */
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
/* nostrip @ 0x402a70 */
#include <stdint.h>
 
int64_t dbg_set_quoting_style (quoting_options * o, enum quoting_style s) {
    rdi = o;
    rsi = s;
    /* void set_quoting_style(quoting_options * o,quoting_style s); */
    eax = default_quoting_options;
    if (rdi != 0) {
        rax = rdi;
    }
    *(rax) = esi;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402a80 */
#include <stdint.h>
 
int32_t set_char_quoting (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r8d = default_quoting_options;
    if (rdi != 0) {
        r8 = rdi;
    }
    ecx = esi;
    cl ^= 0xe0;
    cl &= sil;
    eax = esi;
    al >>= 5;
    r9d = (int32_t) al;
    esi = *((r8 + r9*4 + 8));
    edi = *((r8 + r9*4 + 8));
    edi >>= cl;
    eax = edi;
    eax ^= 0xfffffffe;
    eax &= edi;
    edi = eax;
    edi = ~edi;
    edi &= edx;
    edx = ~edx;
    edx |= 0xfffffffe;
    edi &= 1;
    edx &= eax;
    edx |= edi;
    edx <<= cl;
    ecx = edx;
    ecx = ~ecx;
    ecx &= 0x9dece435;
    edx &= 0x62131bca;
    edi = esi;
    edi = ~edi;
    edi &= 0x9dece435;
    esi &= 0x62131bca;
    edx |= ecx;
    esi |= edi;
    esi ^= edx;
    *((r8 + r9*4 + 8)) = esi;
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402af0 */
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
/* nostrip @ 0x402b10 */
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
    dil = (rsi != 0) ? 1 : 0;
    cl = (rdx != 0) ? 1 : 0;
    cl ^= dil;
    if (rdx == 0) {
        if (rsi == 0) {
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
/* nostrip @ 0x402b50 */
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
/* nostrip @ 0x402bd0 */
#include <stdint.h>
 
int64_t dbg_quotearg_buffer_restyled (int64_t arg_108h, uint32_t arg_f0h, int64_t arg_f8h, int64_t arg_100h, size_t * arg2, size_t * arg3, int64_t arg5, int64_t arg6, size_t argsize, size_t bytes, unsigned char c, _Bool elide_outer_quotes, unsigned char esc) {
    int64_t var_1h;
    uint32_t var_5h;
    int64_t var_6h;
    uint32_t var_7h;
    char const * arg;
    size_t var_eh;
    uint32_t var_fh;
    size_t * main;
    uint32_t var_1eh;
    int64_t var_1fh;
    char const * quote_string;
    uint32_t var_21h;
    uint32_t var_22h;
    uint32_t var_23h;
    int64_t var_24h;
    size_t * var_28h;
    size_t ilim;
    size_t var_38h;
    void * s2;
    int32_t flags;
    char const * left_quote;
    char const * right_quote;
    size_t * var_58h;
    int64_t var_78h_2;
    func rtld_fini;
    int64_t var_68h;
    char * s;
    wchar_t w;
    size_t n;
    mbstate_t * ps;
    uint32_t var_8ch;
    uint32_t var_90h;
    wint_t wc;
    int64_t var_98h;
    int64_t var_a0h;
    size_t var_a8h;
    uint32_t var_b0h;
    rsi = arg2;
    rdx = arg3;
    r8 = arg5;
    r9 = arg6;
    r11 = argsize;
    rdi = bytes;
    r13 = c;
    r12 = elide_outer_quotes;
    rcx = esc;
    /* size_t quotearg_buffer_restyled(char * buffer,size_t buffersize,char const * arg,size_t argsize,quoting_style quoting_style,int flags,unsigned int const * quote_these_too,char const * left_quote,char const * right_quote); */
label_14:
    ebx = r9d;
    r13d = r8d;
    *((rsp + 0x38)) = rcx;
    *((rsp + 0x28)) = rdx;
    *((rsp + 0x10)) = rdi;
    rax = *((rsp + 0x100));
    *((rsp + 0x70)) = rax;
    rax = *((rsp + 0xf8));
    *((rsp + 0x68)) = rax;
    rax = ctype_get_mb_cur_max ();
    *((rsp + 0xb0)) = rax;
    r12d = ebx;
    r12b >>= 1;
    r12b &= 1;
    eax = ebx;
    eax ^= 0xfffffffe;
    eax &= ebx;
    *((rsp + 0x90)) = eax;
    eax = ebx;
    eax ^= 0xfffffffb;
    *((rsp + 0x64)) = ebx;
    eax &= ebx;
    *((rsp + 0x8c)) = eax;
    r9b = 1;
    r8 = 0x62ff2d22a07dc239;
    eax = 0;
    *((rsp + 0x58)) = rax;
    eax = 0;
    *((rsp + 0x40)) = rax;
    esi = 0;
    eax = 0;
    *((rsp + 8)) = 0;
    ecx = 0;
    *((rsp + 0xa0)) = rcx;
    goto label_18;
label_13:
    *((rsp + 0x38)) = r11;
    cl = (edi != 2) ? 1 : 0;
    al = (*((rsp + 5)) != 0) ? 1 : 0;
    al |= cl;
    rcx = *((rsp + 0xa0));
    edx = ecx;
    dl ^= 0xfe;
    dl &= cl;
    cl = (dl != 0) ? 1 : 0;
    dl = (dl == 0) ? 1 : 0;
    dl ^= al;
    if (dl != 0) {
        goto label_19;
    }
    al ^= 1;
    cl |= al;
    cl ^= 1;
    if (cl != 0) {
        goto label_19;
    }
    eax = r9d;
    al ^= 0xfe;
    if ((al & r9b) != 0) {
        goto label_20;
    }
    al = (*((rsp + 0x58)) == 0) ? 1 : 0;
    cl = (*((rsp + 0x48)) != 0) ? 1 : 0;
    cl |= al;
    if (cl == 1) {
        goto label_19;
    }
    al = 1;
    r13d = edi;
    al = bl;
    r12d = ebp;
    rbp = *((rsp + 0x58));
    if (al == 0) {
        goto label_19;
        eax = r12d;
        al ^= 0xfe;
        if ((al & r12b) != 0) {
            r14d = 0;
            goto label_21;
            r15b = 1;
            edx = 5;
            r14d = 0;
            eax = 0x406876;
            *((rsp + 0x40)) = rax;
            r10d = 1;
            sil = 1;
            goto label_22;
        }
        if (rbp != 0) {
            *(rdi) = 0x22;
        }
        r14d = 1;
label_21:
        eax = 0x406876;
        *((rsp + 0x40)) = rax;
        r10d = 1;
        r15b = 1;
        sil = r12b;
        edx = 5;
        goto label_22;
    }
label_18:
    r10 = rsi;
    if (r13d > 0xa) {
        goto label_23;
    }
    edx = 7;
    r14d = 0;
    ecx = r13d;
    r15b = 1;
    esi = 0;
    rdi = *((rsp + 0x10));
    rbx = *((rsp + 0x38));
    /* switch table (11 cases) at 0x406350 */
    ebx = r9d;
    rax = gettext_quote (0x406878, r13d);
    *((rsp + 0x68)) = rax;
    rax = gettext_quote (0x40687a, r13d);
    r9d = ebx;
    rdi = *((rsp + 0x10));
    *((rsp + 0x70)) = rax;
    eax = r12d;
    al = ~al;
    al |= 0xfe;
    *((rsp + 6)) = r9b;
    while (al == 0) {
        r14d = 0;
        goto label_24;
        rdx = *((rsp + 0x68));
        al = *(rdx);
        rsi = 0x95fb53789b2dc18f;
    }
    ecx = 0;
    do {
        if (rcx < rbp) {
            *((rdi + rcx)) = al;
        }
        r14 = rcx + rsi + 1;
        r14 -= rsi;
        eax = *((rdx + rcx + 1));
        rcx = r14;
    } while (al != 0);
label_24:
    rbx = *((rsp + 0x70));
    rax = strlen (*((rsp + 0x70)));
    r10 = rax;
    edx = r13d;
    *((rsp + 0x40)) = rbx;
    sil = r12b;
    rbx = *((rsp + 0x38));
    r8 = 0x62ff2d22a07dc239;
    r9b = *((rsp + 6));
    r15b = 1;
    goto label_22;
    edx = 0;
    r14d = 0;
    r15d = eax;
    esi = 0;
    goto label_22;
    al = 1;
    r12b = 1;
    ecx = r12d;
    cl ^= 0xfe;
    cl = 1;
    if ((cl & r12b) != 0) {
        ecx = eax;
    }
    al = cl;
    ecx = r12d;
    cl ^= 0xfe;
    if ((cl & r12b) != 0) {
        r14d = 0;
    } else {
        if (rbp != 0) {
            *(rdi) = 0x27;
        }
        r14d = 1;
    }
    ecx = 0x40687a;
    *((rsp + 0x40)) = rcx;
    r10d = 1;
    r15d = eax;
    sil = r12b;
    edx = 2;
label_22:
    *((rsp + 0x30)) = rdx;
    r12b = (*((rsp + 0xf0)) != 0) ? 1 : 0;
    ecx = r15d;
    cl ^= 0xfe;
    al = (edx != 2) ? 1 : 0;
    r13 = rbx;
    r11 = rbp;
    dl = (edx == 2) ? 1 : 0;
    cl &= r15b;
    *((rsp + 7)) = cl;
    cl = (cl == 0) ? 1 : 0;
    ebx = edx;
    *((rsp + 0x1f)) = cl;
    bl |= cl;
    bl ^= 1;
    *((rsp + 0x78)) = r10;
    rdi = r8;
    r8 = *((rsp + 0x28));
    r11 = r13;
    r10b = (r10 != 0) ? 1 : 0;
    ecx = r10d;
    *((rsp + 0x22)) = bl;
    cl ^= bl;
    cl = ~cl;
    cl &= r10b;
    *((rsp + 0x23)) = cl;
    ecx = esi;
    cl ^= 0xfe;
    cl &= sil;
    *((rsp + 5)) = cl;
    cl = (cl != 0) ? 1 : 0;
    bl = (cl == 0) ? 1 : 0;
    al |= bl;
    al ^= 1;
    *((rsp + 0x20)) = al;
    bl ^= r12b;
    bl &= r12b;
    *((rsp + 0x21)) = bl;
    eax = edx;
    al ^= cl;
    dl |= cl;
    dl ^= 1;
    dl |= al;
    *((rsp + 0xf)) = dl;
    *((rsp + 0xe)) = r15b;
    r15b = ~r15b;
    *((rsp + 0xa8)) = rsi;
    ecx = esi;
    cl = ~cl;
    cl |= r15b;
    eax = ecx;
    al = ~al;
    cl ^= 1;
    al = ((cl & al) != 0) ? 1 : 0;
    r10b ^= al;
    r10b = ~r10b;
    r10b &= al;
    *((rsp + 0x1e)) = r10b;
    r10 = r8;
    r8 = rdi;
    rdi = *((rsp + 0x10));
    r12d = 0;
    if (r11 != -1) {
label_3:
        if (r12 != r11) {
            goto label_25;
        }
        goto label_26;
    }
label_4:
    if (*((r10 + r12)) == 0) {
        goto label_27;
    }
label_25:
    if (*((rsp + 0x23)) != 0) {
        al = (r11 == -1) ? 1 : 0;
        rsi = *((rsp + 0x78));
        cl = (rsi > 1) ? 1 : 0;
        rbx = r12;
        rdx = 0x8e7cbf2a3aa3b7e5;
        rbx -= rdx;
        rbx += rsi;
        rbx += rdx;
        cl ^= al;
        if (rbx == 0) {
            if (rsi < 2) {
                goto label_28;
            }
            r15d = r9d;
            rax = strlen (r10);
            r9d = r15d;
            r8 = 0x62ff2d22a07dc239;
            r10 = *((rsp + 0x28));
            rdi = *((rsp + 0x10));
            r11 = rax;
        }
label_28:
        if (rbx <= r11) {
            goto label_29;
        }
    }
    ecx = 0;
    do {
label_0:
        r15d = ecx;
        r13d = *((r10 + r12));
        if (r13 > 0x7e) {
            goto label_30;
        }
        esi = 0;
        al = 1;
        cl = 0x6e;
        bl = 0x61;
        edx = 0;
        /* switch table (127 cases) at 0x4063a8 */
label_2:
        if (*((rsp + 0x22)) == 0) {
            goto label_7;
        }
label_1:
        if (*((rsp + 0xf0)) != 0) {
            goto label_31;
        }
        goto label_32;
label_29:
        r15d = r9d;
        r13 = rbp;
        bl = (*((rsp + 5)) == 0) ? 1 : 0;
        eax = memcmp (r10 + r12, *((rsp + 0x40)), *((rsp + 0x78)));
        al = (eax != 0) ? 1 : 0;
        cl = (eax == 0) ? 1 : 0;
        if ((al & bl) != 0) {
            goto label_33;
        }
        al ^= bl;
        rdi = *((rsp + 0x10));
        r10 = *((rsp + 0x28));
        r11 = rbp;
        r8 = 0x62ff2d22a07dc239;
        r9d = r15d;
    } while ((al & bl) != 0);
    goto label_34;
label_33:
    rdi = *((rsp + 0x10));
    r10 = *((rsp + 0x28));
    r11 = rbp;
    r8 = 0x62ff2d22a07dc239;
    r9d = r15d;
    goto label_0;
    if (r12 != 0) {
        goto label_35;
    }
    goto label_36;
    if (r11 == -1) {
        goto label_37;
    }
    al = (r11 != 1) ? 1 : 0;
    cl = (r12 != 0) ? 1 : 0;
    edx = 0;
    if ((cl & al) != 0) {
        goto label_8;
    }
    cl ^= al;
    if ((cl & al) == 0) {
        goto label_36;
    }
    goto label_8;
    if (*((rsp + 7)) == 0) {
        goto label_38;
    }
    if (*((rsp + 5)) != 0) {
        goto label_34;
    }
    rdx = *((rsp + 0x30));
    al = (edx == 2) ? 1 : 0;
    ecx = *((rsp + 8));
    cl = ~cl;
    cl |= 0xfe;
    cl = (cl == 0xff) ? 1 : 0;
    cl ^= al;
    if (cl != 0xff) {
        goto label_39;
    }
    if (edx != 2) {
        goto label_39;
    }
    if (r14 < rbp) {
        *((rdi + r14)) = 0x27;
    }
    rax = r14;
    rcx = 0x904ef83cbac1b19e;
    rax -= rcx;
    rax = rax + rcx + 1;
    if (rax < rbp) {
        *((rdi + rax)) = 0x24;
    }
    rcx = r14;
    rcx = -rcx;
    eax = 2;
    rax -= rcx;
    if (rax < rbp) {
        *((rdi + rax)) = 0x27;
    }
    rax = 0x788ec96944b31fb7;
    rcx = rax;
    rax = r14 + rcx + 3;
    rax -= rcx;
    cl = 1;
    *((rsp + 8)) = ecx;
    if (rax < rbp) {
        goto label_40;
    }
    goto label_41;
    bl = 0x62;
    goto label_42;
    cl = 0x74;
    goto label_43;
    bl = 0x76;
    goto label_42;
    bl = 0x66;
    goto label_42;
    cl = 0x72;
    goto label_43;
    r13b = 0x27;
    al = 1;
    *((rsp + 0xa0)) = rax;
    if (*((rsp + 0x30)) == 2) {
        if (*((rsp + 5)) != 0) {
            goto label_44;
        }
        al = (rbp == 0) ? 1 : 0;
        rcx = *((rsp + 0x58));
        rsi = *((rsp + 0x58));
        cl = (rsi != 0) ? 1 : 0;
        edx = ecx;
        dl &= al;
        cl ^= al;
        cl |= dl;
        if (cl == 0) {
            rsi = rbp;
        }
        *((rsp + 0x58)) = rsi;
        eax = 0;
        if (cl == 0) {
        }
        if (r14 < rbp) {
            *((rdi + r14)) = 0x27;
        }
        rax = r14;
        rax = -rax;
        ecx = 1;
        rcx -= rax;
        if (rcx < rbp) {
            *((rdi + rcx)) = 0x5c;
        }
        ecx = 2;
        rcx -= rax;
        if (rcx < rbp) {
            *((rdi + rcx)) = 0x27;
        }
        r14 += 3;
        *((rsp + 8)) = 0;
    }
    edx = 0;
    al = 1;
    if (*((rsp + 0x22)) != 0) {
        goto label_1;
    }
    goto label_7;
    r13b = 0x3f;
    rax = *((rsp + 0x30));
    if (eax == 5) {
        goto label_45;
    }
    if (eax != 2) {
        goto label_35;
    }
    if (*((rsp + 5)) == 0) {
        goto label_35;
    }
    goto label_44;
    if (*((rsp + 0x30)) != 2) {
        goto label_46;
    }
    if (*((rsp + 5)) != 0) {
        goto label_44;
    }
    r13b = 0x5c;
    edx = 0;
    eax = 0;
    goto label_11;
label_30:
    *((rsp + 0x48)) = rbp;
    *((rsp + 6)) = r9b;
    if (*((rsp + 0xb0)) != 1) {
        goto label_47;
    }
    *((rsp + 0x38)) = r11;
    rax = ctype_b_loc ();
    r10 = *((rsp + 0x28));
    rax = *(rax);
    ecx = *((rax + r13*2));
    ecx >>= 0xe;
    cl &= 1;
    esi = 1;
label_12:
    al = cl;
    al ^= 0xfe;
    al &= cl;
    r8b = (al != 0) ? 1 : 0;
    dl = (rsi < 2) ? 1 : 0;
    ecx = r8d;
    bl = *((rsp + 0x1f));
    cl &= bl;
    r8b ^= bl;
    r8b |= cl;
    dl ^= r8b;
    rbp = *((rsp + 0x48));
    if (dl == 1) {
        goto label_48;
    }
    if (rsi >= 2) {
        goto label_48;
    }
    edx = 0;
    r11 = *((rsp + 0x38));
    r8 = 0x62ff2d22a07dc239;
    r9b = *((rsp + 6));
    rdi = *((rsp + 0x10));
    if (*((rsp + 0x22)) != 0) {
        goto label_1;
    }
    goto label_7;
label_37:
    al = (*((r10 + 1)) != 0) ? 1 : 0;
    cl = (r12 != 0) ? 1 : 0;
    edx = 0;
    if ((cl & al) != 0) {
        goto label_49;
    }
    cl ^= al;
    if ((cl & al) != 0) {
        goto label_49;
    }
label_36:
    sil = 1;
    if (*((rsp + 0xf)) == 0) {
        goto label_44;
    }
    edx = 0;
    al = sil;
    if (*((rsp + 0x22)) != 0) {
        goto label_1;
    }
label_7:
    if (*((rsp + 0x21)) != 0) {
label_31:
        ecx = r13d;
        cl >>= 5;
        ecx = (int32_t) cl;
        rsi = *((rsp + 0xf0));
        esi = *((rsi + rcx*4));
        ecx = r13d;
        cl ^= 0xe0;
        cl &= r13b;
        ebx = 1;
        ebx <<= cl;
        ebx ^= esi;
        ebx = ~ebx;
        cl = ((ebx & esi) == 0) ? 1 : 0;
        bl = (r15b == 0) ? 1 : 0;
        bl ^= cl;
        if (r15b != 0) {
            goto label_50;
        }
    }
label_32:
    ebx = r13d;
    if (r15b != 0) {
        goto label_51;
    }
    do {
label_11:
        ecx = *((rsp + 8));
        cl = ~cl;
        cl |= 0xfe;
        dl = ~dl;
        dl |= 0xfe;
        cl = (cl == 0xff) ? 1 : 0;
        dl = (dl != 0xff) ? 1 : 0;
        dl |= cl;
        if (dl != 1) {
            cl = 1;
            if (cl == 0) {
                goto label_52;
            }
            if (r14 < rbp) {
                *((rdi + r14)) = 0x27;
            }
            rcx = r14;
            rdx = 0x8cd7f854d35caefc;
            rcx -= rdx;
            rcx = rcx + rdx + 1;
            if (rcx < rbp) {
                *((rdi + rcx)) = 0x27;
            }
            rcx = 0x24af43e9b5bf94c3;
            r14 = r14 + rcx + 2;
            r14 -= rcx;
            *((rsp + 8)) = 0;
        }
label_52:
        ebx = r13d;
        if (r14 < rbp) {
            goto label_53;
        }
        goto label_54;
label_50:
        ebx = r13d;
        if (*((rsp + 5)) == 0) {
            goto label_55;
        }
        goto label_34;
label_46:
        cl = 0x5c;
        if (*((rsp + 0x1e)) == 0) {
            goto label_43;
        }
        edx = 0;
        r13b = 0x5c;
        eax = 0;
    } while (1);
label_43:
    ebx = ecx;
    if (*((rsp + 0xf)) == 0) {
        goto label_44;
    }
label_42:
    edx = 0;
    eax = 0;
    if (*((rsp + 7)) == 0) {
        goto label_2;
    }
label_51:
    if (*((rsp + 5)) != 0) {
        goto label_34;
    }
label_55:
    esi = *((rsp + 8));
    ecx = *((rsp + 8));
    cl ^= 0xfe;
    dl = (*((rsp + 0x30)) != 2) ? 1 : 0;
    cl = ((cl & sil) != 0) ? 1 : 0;
    cl |= dl;
    if (cl != 1) {
        cl = 1;
        if (cl == 0) {
            goto label_56;
        }
        if (r14 < rbp) {
            *((rdi + r14)) = 0x27;
        }
        rcx = 0x57635e786a48b60;
        rdx = rcx;
        rcx = r14 + rdx + 1;
        rcx -= rdx;
        if (rcx < rbp) {
            *((rdi + rcx)) = 0x24;
        }
        rcx = r14 + 2;
        if (rcx < rbp) {
            *((rdi + rcx)) = 0x27;
        }
        r14 += 3;
        cl = 1;
        *((rsp + 8)) = ecx;
    }
label_56:
    if (r14 < rbp) {
        *((rdi + r14)) = 0x5c;
    }
    rcx = 0xf2369cbba8928360;
    r14 = r14 + rcx + 1;
    r14 -= rcx;
    if (r14 < rbp) {
label_53:
        *((rdi + r14)) = bl;
    }
label_54:
    r14 = r14 + r8 + 1;
    ecx = eax;
    cl ^= 0xfe;
    cl &= al;
    if (cl != 0) {
        ecx = r9d;
    }
    r14 -= r8;
    r9d = ecx;
label_6:
    r12 = -r12;
    eax = 1;
    rax -= r12;
    r12 = rax;
    if (r11 != -1) {
        goto label_3;
    }
    goto label_4;
label_47:
    *((rsp + 0x80)) = 0;
    if (r11 == -1) {
        rax = strlen (r10);
        r10 = *((rsp + 0x28));
        r11 = rax;
    }
    rax = r10 + r12;
    *((rsp + 0x98)) = rax;
    al = 1;
    *((rsp + 0x24)) = eax;
    ebp = 0;
    rax = rsp + 0x80;
    rcx = rax;
    *((rsp + 0x38)) = r11;
label_5:
    rbx = rbp;
    rax = 0xa70d02956f40b2c3;
    rbx -= rax;
    rbx += r12;
    rbx += rax;
    rax = 0xc1d5c458694f9756;
    rdx -= rbx;
    rdx -= rax;
    rax = rpl_mbrtowc (rsp + 0x94, r10 + rbx, r11 + rax);
    rdi = rax;
    if (rdi == 0) {
        goto label_57;
    }
    rsi = 0x14043678fe8a24c8;
    if (rdi == -1) {
        goto label_58;
    }
    r11 = *((rsp + 0x38));
    if (rdi == 0xfffffffffffffffe) {
        goto label_59;
    }
    *((rsp + 0x50)) = rbp;
    al = *((rsp + 0x20));
    al ^= 1;
    cl = (rdi < 2) ? 1 : 0;
    cl |= al;
    r10 = *((rsp + 0x28));
    rbp = *((rsp + 0x48));
    if (cl == 1) {
        goto label_60;
    }
    al = 1;
    if (al == 0) {
        goto label_60;
    }
    rax = *((rsp + 0x50));
    rcx = *((rsp + 0x98));
    rax = rcx + rax;
    ecx = 1;
    do {
        edx = *((rax + rcx));
        edx += 0xffffffa5;
        if (edx <= 0x21) {
            rbx = 0x20000002b;
            if (((rbx >> rdx) & 1) < 0) {
                goto label_44;
            }
        }
        rcx = rcx + rsi + 1;
        rcx -= rsi;
    } while (rcx < rdi);
label_60:
    rbx = rdi;
    eax = iswprint (*((rsp + 0x94)));
    if (eax == 0) {
        *((rsp + 0x24)) = 0;
    }
    rcx = *((rsp + 0x50));
    rax = 0xd1db9ec0478b7a9d;
    rbx -= rax;
    rbx += rcx;
    rbx += rax;
    eax = mbsinit (rsp + 0x80);
    rcx = rbp;
    rsi = rbx;
    r10 = *((rsp + 0x28));
    r11 = *((rsp + 0x38));
    if (eax == 0) {
        goto label_5;
    }
    goto label_61;
label_38:
    if (*((rsp + 0x90)) != 0) {
        goto label_6;
    }
    r13d = 0;
    goto label_35;
label_49:
    r11 = 0xffffffffffffffff;
    goto label_8;
label_45:
    if (*((rsp + 0x8c)) != 0) {
        rax = 0x9035910ebfa73863;
        rcx = rax;
        rax = r12 + rcx + 2;
        rax -= rcx;
        if (rax < r11) {
            rcx = 0xd51ff49002e98485;
            rdx = rcx;
            rcx = r12 + rdx + 1;
            rcx -= rdx;
            if (*((r10 + rcx)) != 0x3f) {
                goto label_35;
            }
            ecx = *((r10 + rax));
            edx = 0;
            if (ecx > 0x3e) {
                goto label_8;
            }
            rsi = 0x7000a38200000000;
            if (((rsi >> rcx) & 1) >= 0) {
                goto label_8;
            }
            if (*((rsp + 5)) != 0) {
                goto label_62;
            }
            if (r14 < rbp) {
                *((rdi + r14)) = 0x3f;
            }
            rdx = 0x6a4613951cafae6d;
            rsi = rdx;
            rdx = r14 + rsi + 1;
            rdx -= rsi;
            if (rdx < rbp) {
                *((rdi + rdx)) = 0x22;
            }
            rdx = r14;
            rsi = 0xc41b7c4bbb524000;
            rdx -= rsi;
            rdx = rdx + rsi + 2;
            if (rdx < rbp) {
                *((rdi + rdx)) = 0x22;
            }
            rdx = r14;
            rsi = 0x7ab275e8abab34c1;
            rdx -= rsi;
            rdx = rdx + rsi + 3;
            if (rdx < rbp) {
                *((rdi + rdx)) = 0x3f;
            }
            r14 = -r14;
            esi = 4;
            rsi -= r14;
            edx = 0;
            r12 = rax;
            r14 = rsi;
            r13b = cl;
        }
    } else {
label_35:
        edx = 0;
    }
label_8:
    eax = 0;
    if (*((rsp + 0x22)) != 0) {
        goto label_1;
    }
    goto label_7;
label_39:
    rax = r14;
    if (rax < rbp) {
label_40:
        *((rdi + rax)) = 0x5c;
    }
label_41:
    rcx = rax;
    rdx = 0xc15e277223ec58fd;
    rcx -= rdx;
    r14 = rcx + rdx + 1;
    dl = 1;
    r13b = 0x30;
    if (*((rsp + 0x30)) == 2) {
        goto label_8;
    }
    rcx = r12;
    rsi = 0xd27d2df4a16afc81;
    rcx -= rsi;
    rcx = rcx + rsi + 1;
    if (rcx >= r11) {
        goto label_8;
    }
    cl = *((r10 + rcx));
    cl += 0xd0;
    if (cl > 9) {
        goto label_8;
    }
    if (r14 < rbp) {
        *((rdi + r14)) = 0x30;
    }
    rcx = 0x7cd181083d28e096;
    rsi = rcx;
    rcx = rax + rsi + 2;
    rcx -= rsi;
    if (rcx < rbp) {
        *((rdi + rcx)) = 0x30;
    }
    rcx = 0x5d0e0dd8fd52b37;
    r14 = rax + rcx + 3;
    r14 -= rcx;
    goto label_8;
label_48:
    rsi += r12;
    *((rsp + 0x50)) = rsi;
    r9 = r12 + 1;
    edx = 0;
    r11 = *((rsp + 0x38));
    if (r8b != 0) {
        goto label_63;
    }
    while (*((rsp + 0x50)) > r9) {
label_10:
        edi = r15d;
        ecx = *((rsp + 8));
        ebx = *((rsp + 8));
        bl ^= 0xfe;
        bl &= cl;
        sil = (bl != 0) ? 1 : 0;
        ecx = edx;
        cl = ~cl;
        cl |= 0xfe;
        cl = (cl == 0xff) ? 1 : 0;
        cl ^= sil;
        if (cl == 0xff) {
            if (bl != 0) {
                r15d = edi;
                if (r14 < rbp) {
                    rcx = *((rsp + 0x10));
                    *((rcx + r14)) = 0x27;
                }
                rcx = r14 + 1;
                if (rcx < rbp) {
                    rsi = *((rsp + 0x10));
                    *((rsi + rcx)) = 0x27;
                    r15d = edi;
                }
                r14 = -r14;
                ecx = 2;
                rcx -= r14;
                *((rsp + 8)) = 0;
                r14 = rcx;
            }
        } else {
            r15d = edi;
        }
        rcx = 0x8248105f5c633024;
        r12 = r12 + rcx + 1;
        if (r14 >= rbp) {
            goto label_64;
        }
        rcx = *((rsp + 0x10));
        *((rcx + r14)) = r13b;
        goto label_64;
label_9:
        if (*((rsp + 5)) != 0) {
            goto label_34;
        }
        rbx = *((rsp + 0x30));
        cl = (ebx == 2) ? 1 : 0;
        esi = *((rsp + 8));
        edx = *((rsp + 8));
        dl ^= 0xfe;
        dl = ((dl & sil) == 0) ? 1 : 0;
        dl ^= cl;
        if ((dl & sil) == 0) {
            if (ebx != 2) {
                goto label_65;
            }
            if (r14 < rbp) {
                rcx = *((rsp + 0x10));
                *((rcx + r14)) = 0x27;
            }
            rcx = r14;
            rcx = -rcx;
            edx = 1;
            rdx -= rcx;
            if (rdx < rbp) {
                rcx = *((rsp + 0x10));
                *((rcx + rdx)) = 0x24;
            }
            rdx = r14 + 2;
            if (rdx < rbp) {
                rcx = *((rsp + 0x10));
                *((rcx + rdx)) = 0x27;
            }
            rcx = 0x71004f7dfe0a6a3d;
            r14 = r14 + rcx + 3;
            r14 -= rcx;
            cl = 1;
            *((rsp + 8)) = ecx;
        }
label_65:
        if (r14 < rbp) {
            rcx = *((rsp + 0x10));
            *((rcx + r14)) = 0x5c;
        }
        rdx = r14 + 1;
        if (rdx < rbp) {
            ecx = r13d;
            cl >>= 6;
            cl |= 0x60;
            cl ^= 0x50;
            rsi = *((rsp + 0x10));
            *((rsi + rdx)) = cl;
        }
        rcx = 0xe18a8fd28121d94f;
        rdx = r14 + rcx + 2;
        rdx -= rcx;
        if (rdx < rbp) {
            ecx = r13d;
            cl >>= 3;
            cl |= 0x30;
            cl &= 0x37;
            rsi = *((rsp + 0x10));
            *((rsi + rdx)) = cl;
        }
        r14 = -r14;
        esi = 3;
        rsi -= r14;
        ebx = r13d;
        bl ^= 0xf8;
        bl &= r13b;
        edx = ebx;
        dl = ~dl;
        dl &= 0x4f;
        ecx = ebx;
        cl &= 0xb0;
        cl |= dl;
        cl ^= 0x7f;
        bl &= 0x30;
        bl |= cl;
        dl = 1;
        r14 = rsi;
        r13b = bl;
    }
    goto label_66;
label_64:
    rcx = 0x8248105f5c633024;
    r12 -= rcx;
    rcx = 0xff125961f5d6ed19;
    r14 -= rcx;
    r14 = r14 + rcx + 1;
    r13b = *((r10 + r9));
    r9++;
    if (r8b == 0) {
        goto label_9;
    }
label_63:
    ecx = r15d;
    cl = ~cl;
    cl |= 0xfe;
    if (cl == 0xff) {
        goto label_67;
    }
    if (r14 < rbp) {
        rcx = *((rsp + 0x10));
        *((rcx + r14)) = 0x5c;
    }
    r14 = -r14;
    ecx = 1;
    rcx -= r14;
    r15d = 0;
    r14 = rcx;
    if (*((rsp + 0x50)) > r9) {
        goto label_10;
    }
    goto label_66;
label_67:
    if (*((rsp + 0x50)) > r9) {
        goto label_10;
    }
label_66:
    r9--;
    r12 = r9;
    r8 = 0x62ff2d22a07dc239;
    r9b = *((rsp + 6));
    rdi = *((rsp + 0x10));
    goto label_11;
label_58:
    *((rsp + 0x24)) = 0;
label_57:
    r10 = *((rsp + 0x28));
    goto label_68;
label_59:
    r10 = *((rsp + 0x28));
    if (r11 <= rbx) {
        goto label_69;
    }
    rcx = 0xcc149a1667ee91b8;
    do {
        rax = *((rsp + 0x98));
        if (*((rax + rbp)) == 0) {
            goto label_69;
        }
        rbp = rbp + rcx + 1;
        rbp -= rcx;
        rax = rbp + r12;
    } while (rax < r11);
label_69:
    *((rsp + 0x24)) = 0;
label_68:
    rsi = rbp;
label_61:
    ecx = *((rsp + 0x24));
    goto label_12;
label_26:
    *((rsp + 0x48)) = rbp;
    r11 = r12;
    goto label_70;
label_27:
    *((rsp + 0x48)) = rbp;
    r11 = 0xffffffffffffffff;
label_70:
    rsi = *((rsp + 0x78));
    bl = *((rsp + 0xe));
    rbp = *((rsp + 0xa8));
    rdi = *((rsp + 0x30));
    dl = (edi == 2) ? 1 : 0;
    al = (r14 == 0) ? 1 : 0;
    al ^= dl;
    cl = (*((rsp + 5)) == 0) ? 1 : 0;
    al = ~al;
    al &= dl;
    al ^= 1;
    if ((cl & al) != 0) {
        goto label_13;
    }
    cl ^= al;
    if ((cl & al) != 0) {
        goto label_13;
    }
    rbp = *((rsp + 0x48));
    goto label_17;
label_34:
    rdi = *((rsp + 0x30));
    goto label_17;
label_44:
    edi = 2;
label_17:
    al = (edi != 2) ? 1 : 0;
    dl = *((rsp + 7));
    cl = (dl == 0) ? 1 : 0;
    cl ^= al;
    eax = 4;
    if (dl != 0) {
        eax = edi;
    }
    r8d = eax;
    if (dl == 0) {
        r8d = edi;
    }
    if (edi == 2) {
        r8d = eax;
    }
    r9d &= 0xfffffffd;
    rax = quotearg_buffer_restyled (*((rsp + 0x18)), rbp, r10, r11, r8, *((rsp + 0x64)));
    goto label_14;
label_15:
    r14 = rax;
label_16:
    return rax;
label_19:
    al = (*((rsp + 5)) == 0) ? 1 : 0;
    rdx = *((rsp + 0x40));
    cl = (rdx != 0) ? 1 : 0;
    cl ^= al;
    if (rdx != 0) {
        goto label_71;
    }
    rcx = *((rsp + 0x10));
    if (rdx == 0) {
        goto label_72;
    }
    al = *(rdx);
    rsi = *((rsp + 0x48));
    if (al == 0) {
        goto label_73;
    }
    rdx++;
    do {
        if (r14 < rsi) {
            *((rcx + r14)) = al;
        }
        r14++;
        eax = *(rdx);
        rdx++;
    } while (al != 0);
    goto label_73;
label_20:
    quotearg_buffer_restyled (*((rsp + 0x18)), *((rsp + 0x60)), *((rsp + 0x30)), *((rsp + 0x40)), 5, *((rsp + 0x6c)));
    goto label_14;
    goto label_15;
label_71:
    rcx = *((rsp + 0x10));
    rsi = *((rsp + 0x48));
    if (r14 >= rsi) {
        goto label_16;
    }
    goto label_74;
label_72:
    rsi = *((rsp + 0x48));
label_73:
    if (r14 >= rsi) {
        goto label_16;
    }
label_74:
    *((rcx + r14)) = 0;
    goto label_16;
label_62:
    edi = 5;
    goto label_17;
label_23:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x403d90 */
#include <stdint.h>
 
uint64_t dbg_quotearg_alloc (int64_t arg1, int64_t arg2, size_t argsize, char * buf, size_t n, quoting_options const * o, quoting_options const * p) {
    int32_t flags;
    int32_t e;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    r12 = argsize;
    r13 = buf;
    rbx = n;
    rdx = o;
    r14 = p;
    /* char * quotearg_alloc(char const * arg,size_t argsize,quoting_options const * o); */
    r12 = rsi;
    rbx = rdi;
    *((rsp + 8)) = rbx;
    r14d = default_quoting_options;
    if (rdx != 0) {
        r14 = rdx;
    }
    rax = errno_location ();
    *((rsp + 0x10)) = rax;
    ecx = *(rax);
    *((rsp + 4)) = ecx;
    ebp = *((r14 + 4));
    eax = *((r14 + 4));
    eax &= 1;
    ebp ^= 1;
    ebp |= eax;
    r15 = r14 + 8;
    quotearg_buffer_restyled (0, 0, rbx, r12, *(r14), ebp);
    rcx = 0x6cc8fdb62f6074db;
    rbx = rax + rcx + 1;
    rbx -= rcx;
    rax = xmalloc (rbx);
    r13 = rax;
    quotearg_buffer_restyled (r13, rbx, *((rsp + 0x10)), r12, *(r14), ebp);
    eax = *((rsp + 4));
    rcx = *((rsp + 0x10));
    *(rcx) = eax;
    rax = r13;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x403e70 */
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
    eax = *((r12 + 4));
    ecx = 0;
    cl = (rbx == 0) ? 1 : 0;
    edx = eax;
    edx = ~edx;
    ebp = ~ebp;
    ebp |= edx;
    edx &= 0x5530148e;
    eax &= 0xaacfeb71;
    eax |= edx;
    ecx |= 0x5530148e;
    ecx ^= eax;
    ebp = ~ebp;
    ebp |= ecx;
    r13 = r12 + 8;
    rax = quotearg_buffer_restyled (0, 0, r15, r14, *(r12), ebp);
    rbx = rax;
    rax = 0x171b95faa836514e;
    r15 = rbx + rax + 1;
    r15 -= rax;
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
/* nostrip @ 0x403f90 */
#include <stdint.h>
 
int64_t dbg_quotearg_free (struct slotvec * sv) {
    r14 = sv;
    /* void quotearg_free(); */
    r14 = slotvec;
    if (*(obj.nslots) < 2) {
        goto label_0;
    }
    r12 = r14 + 0x18;
    r15 = 0x905b268215148d50;
    ebx = 1;
    do {
        free (*(r12));
        rbx = rbx + r15 + 1;
        rbx -= r15;
        rax = *(obj.nslots);
        r12 += 0x10;
    } while (rbx < rax);
label_0:
    rdi = *((r14 + 8));
    eax = slot0;
    if (rdi != rax) {
        free (rdi);
        *(obj.slotvec0) = 0x100;
        *(obj.slot0) = 0x409290;
    }
    eax = slotvec0;
    if (r14 != rax) {
        free (r14);
        *(obj.slotvec) = 0x409198;
    }
    *(obj.nslots) = 1;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404040 */
#include <stdint.h>
 
void quotearg_n (int64_t arg1, int64_t arg2) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rdx = 0xffffffffffffffff;
    ecx = default_quoting_options;
invalid_funccall(); //    return void (*0x404050)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404050 */
#include <stdint.h>
 
uint64_t dbg_quotearg_n_options (char const * arg, int64_t arg1, int64_t arg3, int64_t arg4, int32_t e, size_t n, quoting_options const * options, struct slotvec * sv, char * val) {
    int32_t flags;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h;
    uint32_t var_30h;
    rsi = arg;
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    rax = e;
    r15 = n;
    rbx = options;
    r14 = sv;
    r12 = val;
    /* char * quotearg_n_options(int n,char const * arg,size_t argsize,quoting_options const * options); */
    rbx = rcx;
    r15 = rdx;
    *((rsp + 0x20)) = rsi;
    r12d = edi;
    rax = errno_location ();
    if (r12d >= 0) {
        eax = *(rbp);
        r14 = slotvec;
        *((rsp + 0x18)) = rbp;
        *((rsp + 4)) = eax;
        *((rsp + 0x10)) = rbx;
        *((rsp + 8)) = r15;
        if (*(obj.nslots) <= r12d) {
            if (r12d == 0x7fffffff) {
                goto label_0;
            }
            ebx = slotvec0;
            edi = 0;
            if (r14 != rbx) {
                rdi = r14;
            }
            r15d = r12 + 1;
            rsi = (int64_t) r15d;
            rsi <<= 4;
            rax = xrealloc ();
            r13 = rax;
            *(obj.slotvec) = r13;
            if (r14 == rbx) {
                __asm ("movups xmm0, xmmword [obj.slotvec0]");
                __asm ("movups xmmword [r13], xmm0");
            }
            rax = *(obj.nslots);
            ecx = r15 + 0x5dbcb3;
            ecx -= eax;
            rax <<= 4;
            rdi += rax;
            ecx += 0xffa2434d;
            rdx = (int64_t) ecx;
            rdx <<= 4;
            memset (r13, 0, rdx);
            *(obj.nslots) = r15d;
            r14 = r13;
            rbx = *((rsp + 0x10));
            r15 = *((rsp + 8));
        }
        r13 = (int64_t) r12d;
        r13 <<= 4;
        *((rsp + 0x30)) = rsi;
        r12 = *((r14 + r13 + 8));
        ebp = *((rbx + 4));
        eax = *((rbx + 4));
        eax &= 1;
        ebp ^= 1;
        ebp |= eax;
        rax = rbx + 8;
        *((rsp + 0x40)) = rax;
        rax = quotearg_buffer_restyled (r12, *((r14 + r13)), *((rsp + 0x28)), r15, *(rbx), ebp);
        r15 = rax;
        if (*((rsp + 0x30)) > r15) {
            rax = *((rsp + 0x18));
            ebx = *((rsp + 4));
        } else {
            rax = r14 + r13;
            r14 = r14 + r13 + 8;
            r15++;
            *(rax) = r15;
            eax = slot0;
            ebx = *((rsp + 4));
            if (r12 != rax) {
                free (r12);
            }
            rax = xmalloc (r15);
            r12 = rax;
            *(r14) = r12;
            rax = *((rsp + 0x10));
            quotearg_buffer_restyled (r12, r15, *((rsp + 0x28)), *((rsp + 0x10)), *(rax), ebp);
            rax = *((rsp + 0x18));
        }
        *(rax) = ebx;
        rax = r12;
        return rax;
    }
    abort ();
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404220 */
#include <stdint.h>
 
void quotearg_n_mem (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = default_quoting_options;
invalid_funccall(); //    return void (*0x404050)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404230 */
#include <stdint.h>
 
int64_t dbg_quotearg (char const * arg, int64_t arg1) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h;
    int64_t var_30h;
    rax = arg;
    rdi = arg1;
    /* char * quotearg(char const * arg); */
    rax = rdi;
    edi = 0;
    rdx = 0xffffffffffffffff;
    ecx = default_quoting_options;
    rsi = rax;
invalid_funccall(); //    return void (*0x404050)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404250 */
#include <stdint.h>
 
int64_t dbg_quotearg_mem (char const * arg, int64_t arg1, int64_t arg2, size_t argsize) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h;
    int64_t var_30h;
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
invalid_funccall(); //    return void (*0x404050)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404270 */
#include <stdint.h>
 
int64_t quotearg_n_style (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    rax = rdx;
    __asm ("xorps xmm0, xmm0");
    *((rsp + 0x20)) = xmm0;
    *((rsp + 0x10)) = xmm0;
    *(rsp) = xmm0;
    *((rsp + 0x30)) = 0;
    if (esi != 0xa) {
        *((rsp + 0x40)) = esi;
        ecx = *((rsp + 0x30));
        *((rsp + 0x74)) = ecx;
        xmm0 = *(rsp);
        xmm1 = *((rsp + 0x10));
        xmm2 = *((rsp + 0x20));
        __asm ("movups xmmword [rsp + 0x64], xmm2");
        __asm ("movups xmmword [rsp + 0x54], xmm1");
        __asm ("movups xmmword [rsp + 0x44], xmm0");
        rcx = rsp + 0x40;
        quotearg_n_options (rdi, rax, 0xffffffffffffffff);
        return rax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4042e0 */
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
        rcx = rax;
        quotearg_n_options (rdi, rdx, rcx);
        return rax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404350 */
#include <stdint.h>
 
int32_t dbg_quotearg_style (char const * arg, enum quoting_style style) {
    quoting_options o;
    int64_t var_10h;
    int64_t var_20h;
    uint32_t var_40h;
    int64_t var_44h;
    int64_t var_54h;
    int64_t var_64h;
    int64_t var_74h;
    rsi = arg;
    rdi = style;
    /* char * quotearg_style(enum quoting_style s,char const * arg); */
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
        rcx = rsp + 0x40;
        quotearg_n_options (0, rsi, 0xffffffffffffffff);
        return eax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4043c0 */
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
        rcx = rsp + 0x40;
        quotearg_n_options (0, rsi, rdx);
        return eax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404430 */
#include <stdint.h>
 
int32_t quotearg_char_mem (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = edx;
    r8 = rsi;
    r9 = rdi;
    rsi = comment;
    *((rsp + 0x30)) = rsi;
    __asm ("movups xmm0, xmmword [0x00409270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00409260]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    eax = ecx;
    al >>= 5;
    esi = (int32_t) al;
    eax = *((rsp + rsi*4 + 8));
    edx = *((rsp + rsi*4 + 8));
    edx >>= cl;
    edi = edx;
    edi ^= 0xfffffffe;
    edi &= edx;
    edx = edi;
    edx = ~edx;
    edx &= 0x16b9b0e9;
    edi &= 0xe9464f16;
    edi |= edx;
    edi ^= 0x16b9b0e8;
    edi <<= cl;
    ecx = edi;
    ecx = ~ecx;
    ecx &= eax;
    eax = ~eax;
    eax &= edi;
    eax |= ecx;
    *((rsp + rsi*4 + 8)) = eax;
    rcx = rsp;
    quotearg_n_options (0, r9, r8);
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4044d0 */
#include <stdint.h>
 
int32_t quotearg_char (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    r8 = rdi;
    rcx = comment;
    *((rsp + 0x30)) = rcx;
    __asm ("movups xmm0, xmmword [0x00409270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00409260]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    ecx = esi;
    cl ^= 0xe0;
    cl &= sil;
    edx = esi;
    dl >>= 5;
    edx = (int32_t) dl;
    esi = *((rsp + rdx*4 + 8));
    edi = *((rsp + rdx*4 + 8));
    edi >>= cl;
    edi = ~edi;
    edi &= 1;
    edi <<= cl;
    ecx = edi;
    ecx = ~ecx;
    ecx &= 0x192d388;
    edi &= 0xfe6d2c77;
    eax = esi;
    eax = ~eax;
    eax &= 0x192d388;
    esi &= 0xfe6d2c77;
    edi |= ecx;
    esi |= eax;
    esi ^= edi;
    *((rsp + rdx*4 + 8)) = esi;
    rcx = rsp;
    quotearg_n_options (0, r8, 0xffffffffffffffff);
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404570 */
#include <stdint.h>
 
int64_t dbg_quotearg_colon (char const * arg, int64_t arg1, quoting_options * o) {
    quoting_options options;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_20h;
    rax = arg;
    rdi = arg1;
    rcx = o;
    /* char * quotearg_colon(char const * arg); */
    rax = rdi;
    rcx = comment;
    *((rsp + 0x30)) = rcx;
    __asm ("movups xmm0, xmmword [0x00409270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00409260]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    ecx = *((rsp + 0xc));
    edx = *((rsp + 0xc));
    edx &= 0x4000000;
    ecx ^= 0x4000000;
    ecx |= edx;
    *((rsp + 0xc)) = ecx;
    rcx = rsp;
    quotearg_n_options (0, rax, 0xffffffffffffffff);
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4045e0 */
#include <stdint.h>
 
int64_t dbg_quotearg_colon_mem (char const * arg, int64_t arg1, int64_t arg2, size_t argsize, quoting_options * o) {
    quoting_options options;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_20h;
    rdx = arg;
    rdi = arg1;
    rsi = arg2;
    rax = argsize;
    rcx = o;
    /* char * quotearg_colon_mem(char const * arg,size_t argsize); */
    rax = rsi;
    rdx = rdi;
    rcx = comment;
    *((rsp + 0x30)) = rcx;
    __asm ("movups xmm0, xmmword [0x00409270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00409260]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    ecx = *((rsp + 0xc));
    esi = *((rsp + 0xc));
    esi &= 0x4000000;
    ecx ^= 0x4000000;
    ecx |= esi;
    *((rsp + 0xc)) = ecx;
    rcx = rsp;
    quotearg_n_options (0, rdx, rax);
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404650 */
#include <stdint.h>
 
int64_t dbg_quotearg_n_style_colon (char const * arg, int64_t arg3, int32_t n, quoting_options * o, enum quoting_style style) {
    quoting_options options;
    int64_t var_ch;
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
        ecx = *((rsp + 0xc));
        edx = *((rsp + 0xc));
        edx &= 0x4000000;
        ecx ^= 0x4000000;
        ecx |= edx;
        *((rsp + 0xc)) = ecx;
        rcx = rsp;
        quotearg_n_options (rdi, rax, 0xffffffffffffffff);
        return rax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404700 */
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
    __asm ("movups xmm0, xmmword [0x00409270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00409260]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    *(rsp) = 0xa;
    r8b = (rsi != 0) ? 1 : 0;
    al = (rdx != 0) ? 1 : 0;
    al ^= r8b;
    if (rdx == 0) {
        if (rsi == 0) {
            goto label_0;
        }
        *((rsp + 0x28)) = rsi;
        *((rsp + 0x30)) = rdx;
        rax = rsp;
        rcx = rax;
        quotearg_n_options (rdi, rcx, 0xffffffffffffffff);
        return rax;
    }
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404780 */
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
    __asm ("movups xmm0, xmmword [0x00409270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00409260]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    *(rsp) = 0xa;
    r9b = (rsi == 0) ? 1 : 0;
    al = (rdx == 0) ? 1 : 0;
    al |= r9b;
    if (al != 1) {
        al = 1;
        if (al == 0) {
            goto label_0;
        }
        *((rsp + 0x28)) = rsi;
        *((rsp + 0x30)) = rdx;
        rax = rsp;
        rcx = rax;
        quotearg_n_options (rdi, rcx, r8);
        return rax;
    }
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404800 */
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
    __asm ("movups xmm0, xmmword [0x00409270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00409260]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    *(rsp) = 0xa;
    cl = (rdi == 0) ? 1 : 0;
    dl = (rsi == 0) ? 1 : 0;
    dl |= cl;
    if (dl != 1) {
        cl = 1;
        if (cl == 0) {
            goto label_0;
        }
        *((rsp + 0x28)) = rdi;
        *((rsp + 0x30)) = rsi;
        rcx = rsp;
        quotearg_n_options (0, rax, 0xffffffffffffffff);
        return rax;
    }
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404880 */
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
    __asm ("movups xmm0, xmmword [0x00409270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00409260]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    *(rsp) = 0xa;
    r8b = (rdi == 0) ? 1 : 0;
    al = (rsi == 0) ? 1 : 0;
    al |= r8b;
    if (al != 1) {
        al = 1;
        if (al == 0) {
            goto label_0;
        }
        *((rsp + 0x28)) = rdi;
        *((rsp + 0x30)) = rsi;
        rax = rsp;
        rcx = rax;
        quotearg_n_options (0, rdx, rcx);
        return rax;
    }
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404900 */
#include <stdint.h>
 
void quote_n_mem (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = quote_quoting_options;
invalid_funccall(); //    return void (*0x404050)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404910 */
#include <stdint.h>
 
int64_t dbg_quote_mem (char const * arg, int64_t arg1, int64_t arg2, size_t argsize) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h;
    int64_t var_30h;
    rdx = arg;
    rdi = arg1;
    rsi = arg2;
    rax = argsize;
    /* char const * quote_mem(char const * arg,size_t argsize); */
    rax = rsi;
    rdx = rdi;
    edi = 0;
    ecx = quote_quoting_options;
    rsi = rdx;
    rdx = rax;
invalid_funccall(); //    return void (*0x404050)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404930 */
#include <stdint.h>
 
void quote_n (int64_t arg1, int64_t arg2) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rdx = 0xffffffffffffffff;
    ecx = quote_quoting_options;
invalid_funccall(); //    return void (*0x404050)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404950 */
#include <stdint.h>
 
int64_t dbg_quote (char const * arg, int64_t arg1) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h;
    int64_t var_30h;
    rax = arg;
    rdi = arg1;
    /* char const * quote(char const * arg); */
    rax = rdi;
    edi = 0;
    rdx = 0xffffffffffffffff;
    ecx = quote_quoting_options;
    rsi = rax;
invalid_funccall(); //    return void (*0x404050)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404970 */
#include <stdint.h>
 
uint64_t dbg_gettext_quote (int64_t arg1, int64_t arg2, char const * locale_code, char const * msgid) {
    enum quoting_style s;
    rdi = arg1;
    rsi = arg2;
    rax = locale_code;
    rbx = msgid;
    /* char const * gettext_quote(char const * msgid,quoting_style s); */
    rbx = rdi;
    edx = 5;
    rax = dcgettext (0, rbx);
    if (rax != rbx) {
        goto label_0;
    }
    rax = locale_charset ();
    edx = *(rax);
    ecx = edx;
    ecx ^= 0x20;
    ecx &= edx;
    if (ecx != 0x47) {
        if (ecx == 0x55) {
            ecx = *((rax + 1));
            edx = ecx;
            edx ^= 0x20;
            edx &= ecx;
            if (edx != 0x54) {
                goto label_1;
            }
            ecx = *((rax + 2));
            ecx = ~ecx;
            ecx |= 0x20;
            if (ecx != 0xffffffb9) {
                goto label_1;
            }
            if (*((rax + 3)) != 0x2d) {
                goto label_1;
            }
            if (*((rax + 4)) != 0x38) {
                goto label_1;
            }
            if (*((rax + 5)) != 0) {
                goto label_1;
            }
            ecx = 0x40687c;
            eax = 0x406880;
        } else {
            ecx = *((rax + 1));
            ecx = ~ecx;
            ecx |= 0x20;
            if (ecx != 0xffffffbd) {
                goto label_1;
            }
            if (*((rax + 2)) != 0x31) {
                goto label_1;
            }
            if (*((rax + 3)) != 0x38) {
                goto label_1;
            }
            if (*((rax + 4)) != 0x30) {
                goto label_1;
            }
            if (*((rax + 5)) != 0x33) {
                goto label_1;
            }
            if (*((rax + 6)) != 0x30) {
                goto label_1;
            }
            if (*((rax + 7)) == 0) {
                goto label_2;
            }
        }
label_1:
        ecx = 0x406876;
        eax = 0x40687a;
    }
    if (ebp == 9) {
        do {
            rax = rcx;
        } while (1); BROKEN_DOWHILE;
label_0:
        return rax;
label_2:
        ecx = 0x406884;
        eax = 0x406888;
    }
}
/* r2dec pseudo code output */
/* nostrip @ 0x404a50 */
#include <stdint.h>
 
uint64_t dbg_version_etc_arn (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg5, char const * const * authors, char const * command_name, size_t n_authors, char const * package, FILE * stream, char const * version) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r8 = arg5;
    r15 = authors;
    rcx = command_name;
    r12 = n_authors;
    rbx = package;
    r14 = stream;
    r9 = version;
    /* void version_etc_arn(FILE * stream,char const * command_name,char const * package,char const * version,char const * const * authors,size_t n_authors); */
    r12 = r9;
    r15 = r8;
    r9 = rcx;
    rbx = rdx;
    rcx = rsi;
    r14 = rdi;
    esi = 1;
    if (rcx != 0) {
        edx = "%s (%s) %s\n";
        eax = 0;
        rdi = r14;
        r8 = rbx;
        eax = fprintf_chk ();
    } else {
        edx = "%s %s\n";
        eax = 0;
        rdi = r14;
        rcx = rbx;
        r8 = r9;
        fprintf_chk ();
    }
    edx = 5;
    rax = dcgettext (0, 0x4068f3);
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
        /* switch table (10 cases) at 0x406890 */
    } else {
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
        goto label_0;
        edx = 5;
        rax = dcgettext (0, "Written by %s.\n");
        rdx = rax;
        rcx = *(r15);
        esi = 1;
        eax = 0;
        rdi = r14;
invalid_funccall(); //        void (*0x402290)() ();
        edx = 5;
        rax = dcgettext (0, "Written by %s and %s.\n");
        rdx = rax;
        rcx = *(r15);
        r8 = *((r15 + 8));
        esi = 1;
        eax = 0;
        rdi = r14;
invalid_funccall(); //        void (*0x402290)() ();
        edx = 5;
        rax = dcgettext (0, "Written by %s, %s, and %s.\n");
        rdx = rax;
        rcx = *(r15);
        r8 = *((r15 + 8));
        r9 = *((r15 + 0x10));
        esi = 1;
        eax = 0;
        rdi = r14;
invalid_funccall(); //        void (*0x402290)() ();
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
        goto label_0;
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
        goto label_0;
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
        goto label_0;
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
        goto label_0;
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
        goto label_0;
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
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404db0 */
#include <stdint.h>
 
int64_t dbg_version_etc_ar (char const * const * authors, char const * command_name, char const * package, FILE * stream, char const * version) {
    r8 = authors;
    rsi = command_name;
    rdx = package;
    rdi = stream;
    rcx = version;
    /* void version_etc_ar(FILE * stream,char const * command_name,char const * package,char const * version,char const * const * authors); */
    r9 = 0xffffffffffffffff;
    eax = 0;
    do {
        rax++;
        r9 = r9 + 1;
    } while (*((r8 + r9*8 + 8)) != 0);
invalid_funccall(); //    return void (*0x404a50)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404de0 */
#include <stdint.h>
 
uint64_t dbg_version_etc_va (__va_list_tag * authors, char const * command_name, char const * package, FILE * stream, char const * version) {
    char const * authtab[11];
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    r8 = authors;
    rsi = command_name;
    rdx = package;
    rdi = stream;
    rcx = version;
    /* void version_etc_va(FILE * stream,char const * command_name,char const * package,char const * version,__va_list_tag * authors); */
    r10 = *(r8);
    if (r10 <= 0x28) {
        r9 = r10;
        r9 += *((r8 + 0x10));
        r10d = r10 + 8;
        *(r8) = r10d;
    } else {
        r9 = *((r8 + 8));
        rax = r9 + 8;
        *((r8 + 8)) = rax;
    }
    rax = *(r9);
    *(rsp) = rax;
    if (rax != 0) {
        if (r10d < 0x29) {
            r9 = (int64_t) r10d;
            r9 += *((r8 + 0x10));
            r10d += 8;
            *(r8) = r10d;
        } else {
            r9d = 0;
            goto label_0;
        }
        r9 = *((r8 + 8));
        rax = r9 + 8;
        *((r8 + 8)) = rax;
    }
    rax = *(r9);
    *((rsp + 8)) = rax;
    if (rax != 0) {
        if (r10d < 0x29) {
            r9 = (int64_t) r10d;
            r9 += *((r8 + 0x10));
            r10d += 8;
            *(r8) = r10d;
        } else {
            r9d = 1;
            goto label_0;
        }
        r9 = *((r8 + 8));
        rax = r9 + 8;
        *((r8 + 8)) = rax;
    }
    rax = *(r9);
    *((rsp + 0x10)) = rax;
    if (rax != 0) {
        if (r10d < 0x29) {
            r9 = (int64_t) r10d;
            r9 += *((r8 + 0x10));
            r10d += 8;
            *(r8) = r10d;
        } else {
            r9d = 2;
            goto label_0;
        }
        r9 = *((r8 + 8));
        rax = r9 + 8;
        *((r8 + 8)) = rax;
    }
    rax = *(r9);
    *((rsp + 0x18)) = rax;
    if (rax != 0) {
        if (r10d < 0x29) {
            r9 = (int64_t) r10d;
            r9 += *((r8 + 0x10));
            r10d = -r10d;
            eax = 8;
            eax -= r10d;
            *(r8) = eax;
            r10d = eax;
        } else {
            r9d = 3;
            goto label_0;
        }
        r9 = *((r8 + 8));
        rax = r9 + 8;
        *((r8 + 8)) = rax;
    }
    rax = *(r9);
    *((rsp + 0x20)) = rax;
    if (rax != 0) {
        if (r10d < 0x29) {
            r9 = (int64_t) r10d;
            r9 += *((r8 + 0x10));
            r10d += 8;
            *(r8) = r10d;
        } else {
            r9d = 4;
            goto label_0;
        }
        r9 = *((r8 + 8));
        rax = r9 + 8;
        *((r8 + 8)) = rax;
    }
    rax = *(r9);
    *((rsp + 0x28)) = rax;
    if (rax != 0) {
        r9 = *((r8 + 8));
        rax = r9 + 8;
        *((r8 + 8)) = rax;
        rax = *(r9);
        *((rsp + 0x30)) = rax;
        if (rax != 0) {
            r9 = *((r8 + 8));
            rax = r9 + 8;
            *((r8 + 8)) = rax;
            rax = *(r9);
            *((rsp + 0x38)) = rax;
            if (rax != 0) {
                r9 = *((r8 + 8));
                rax = r9 + 8;
                *((r8 + 8)) = rax;
                rax = *(r9);
                *((rsp + 0x40)) = rax;
                if (rax != 0) {
                    r9 = *((r8 + 8));
                    rax = r9 + 8;
                    *((r8 + 8)) = rax;
                    rax = *(r9);
                    *((rsp + 0x48)) = rax;
                    r9d = 9;
                    r9 -= 0xffffffffffffffff;
                } else if (BROKEN_DOWHILE) {
                    r9d = 5;
                } else {
                    r9d = 6;
                }
            } else {
                r9d = 7;
            }
        } else {
            r9d = 8;
        }
    }
label_0:
    r8 = rsp;
    version_etc_arn (rdi, rsi, rdx, rcx);
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404fe0 */
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
/* nostrip @ 0x405070 */
#include <stdint.h>
 
void dbg_emit_bug_reporting_address (void) {
    /* void emit_bug_reporting_address(); */
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
    return fputs_unlocked ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4050f0 */
#include <stdint.h>
 
int64_t dbg_xnmalloc (uint32_t arg1, int64_t arg2, size_t n, void * p) {
    rdi = arg1;
    rsi = arg2;
    rbx = n;
    rax = p;
    /* void * xnmalloc(size_t n,size_t s); */
    rbx = rsi;
    rax = 0x7fffffffffffffff;
    edx = 0;
    rax = rdx_rax / rbx;
    rdx = rdx_rax % rbx;
    if (rax >= rdi) {
        rbx *= rdi;
        rax = malloc (rbx);
        cl = (rbx == 0) ? 1 : 0;
        dl = (rax != 0) ? 1 : 0;
        dl |= cl;
        if (dl != 1) {
            cl = 1;
            if (cl != 0) {
                goto label_0;
            }
        }
        return rax;
    }
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405140 */
#include <stdint.h>
 
uint64_t xmalloc (size_t size) {
    rdi = size;
    rbx = rdi;
    rax = malloc (rdi);
    cl = (rax == 0) ? 1 : 0;
    dl = (rbx != 0) ? 1 : 0;
    dl ^= cl;
    if (rbx == 0) {
        if (rbx != 0) {
            goto label_0;
        }
    }
    return rax;
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405170 */
#include <stdint.h>
 
int64_t dbg_xnrealloc (int64_t arg1, uint32_t arg2, int64_t arg3, size_t n, void * p) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = n;
    rax = p;
    /* void * xnrealloc(void * p,size_t n,size_t s); */
    rbx = rdx;
    rax = 0x7fffffffffffffff;
    edx = 0;
    rax = rdx_rax / rbx;
    rdx = rdx_rax % rbx;
    if (rax >= rsi) {
        rbx *= rsi;
        al = (rbx == 0) ? 1 : 0;
        cl = (rdi != 0) ? 1 : 0;
        cl ^= al;
        if (rdi == 0) {
            if (rdi == 0) {
                goto label_0;
            }
            eax = free (rdi);
            eax = 0;
            return rax;
        }
label_0:
        rax = realloc (rdi, rbx);
        cl = (rbx == 0) ? 1 : 0;
        dl = (rax != 0) ? 1 : 0;
        dl |= cl;
        if (dl != 1) {
            cl = 1;
            if (cl != 0) {
                goto label_1;
            }
        }
        return rax;
    }
label_1:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4051e0 */
#include <stdint.h>
 
uint64_t xrealloc (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rsi;
    al = (rdi == 0) ? 1 : 0;
    cl = (rbx != 0) ? 1 : 0;
    cl |= al;
    bpl = 1;
    if (cl != 1) {
        if (bpl != 0) {
            eax = free (rdi);
            eax = 0;
        }
    } else {
        rax = realloc (rdi, rbx);
        cl = (rbx == 0) ? 1 : 0;
        dl = (rax != 0) ? 1 : 0;
        dl |= cl;
        if (dl == 1) {
            goto label_0;
        }
        if (bpl != 0) {
            goto label_1;
        }
    }
label_0:
    return rax;
label_1:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405240 */
#include <stdint.h>
 
int64_t x2nrealloc (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = rdx;
    rcx = *(rsi);
    if (rdi != 0) {
        rax = 0x5555555555555554;
        edx = 0;
        rax = rdx_rax / rbx;
        rdx = rdx_rax % rbx;
        if (rax <= rcx) {
            goto label_0;
        }
        rax = rcx;
        rax >>= 1;
        rcx++;
        rdx = 0x3d08f1964b422ef1;
        rcx -= rdx;
        rcx += rax;
        rcx += rdx;
    } else {
        if (rcx == 0) {
            eax = 0x80;
            edx = 0;
            rax = rdx_rax / rbx;
            rdx = rdx_rax % rbx;
            rcx = rax;
            eax = 0;
            al = (rbx > 0x80) ? 1 : 0;
            rdx = 0xb4a80e1fe7938091;
            rcx -= rdx;
            rcx += rax;
            rcx += rdx;
        }
        rax = 0x7fffffffffffffff;
        edx = 0;
        rax = rdx_rax / rbx;
        rdx = rdx_rax % rbx;
        if (rax < rcx) {
            goto label_1;
        }
    }
    *(rsi) = rcx;
    rbx *= rcx;
    al = (rdi == 0) ? 1 : 0;
    cl = (rbx != 0) ? 1 : 0;
    cl |= al;
    bpl = 1;
    if (cl != 1) {
        if (bpl != 0) {
            eax = free (rdi);
            eax = 0;
        }
    } else {
        rax = realloc (rdi, rbx);
        cl = (rbx == 0) ? 1 : 0;
        dl = (rax != 0) ? 1 : 0;
        dl |= cl;
        if (dl == 1) {
            goto label_2;
        }
        if (bpl != 0) {
            goto label_0;
        }
    }
label_2:
    return rax;
label_0:
    xalloc_die ();
label_1:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405330 */
#include <stdint.h>
 
uint64_t dbg_xcharalloc (int64_t arg1, size_t n, void * p) {
    rdi = arg1;
    rbx = n;
    rax = p;
    /* char * xcharalloc(size_t n); */
    rbx = rdi;
    rax = malloc (rdi);
    cl = (rax == 0) ? 1 : 0;
    dl = (rbx != 0) ? 1 : 0;
    dl ^= cl;
    if (rbx == 0) {
        if (rbx != 0) {
            goto label_0;
        }
    }
    return rax;
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405360 */
#include <stdint.h>
 
int64_t dbg_x2realloc (int64_t arg1, size_t n, void * p, size_t * pn) {
    rdi = arg1;
    rbx = n;
    rax = p;
    rsi = pn;
    /* void * x2realloc(void * p,size_t * pn); */
    rax = *(rsi);
    if (rdi != 0) {
        rcx = 0x5555555555555554;
        if (rax >= rcx) {
            goto label_0;
        }
        rcx = rax;
        rcx >>= 1;
        rcx = -rcx;
        rcx = -rcx;
        rbx = rax + rcx + 1;
        *(rsi) = rbx;
        if (rbx != 0) {
            goto label_1;
        }
        eax = free (rdi);
        eax = 0;
        return rax;
    }
    ebx = 0x80;
    if (rax != 0) {
        rbx = rax;
    }
    if (rbx >= 0) {
        *(rsi) = rbx;
label_1:
        rax = realloc (rdi, rbx);
        cl = (rax == 0) ? 1 : 0;
        dl = (rbx != 0) ? 1 : 0;
        dl ^= cl;
        if (rbx == 0) {
            if (rbx != 0) {
                goto label_2;
            }
        }
        return rax;
    }
label_2:
    xalloc_die ();
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4053e0 */
#include <stdint.h>
 
uint64_t dbg_xzalloc (int64_t arg1, size_t n, void * p) {
    rdi = arg1;
    rbx = n;
    r14 = p;
    /* void * xzalloc(size_t s); */
    rbx = rdi;
    rax = malloc (rdi);
    r14 = rax;
    al = (r14 == 0) ? 1 : 0;
    cl = (rbx != 0) ? 1 : 0;
    cl ^= al;
    if (rbx == 0) {
        if (rbx != 0) {
            goto label_0;
        }
    }
    memset (r14, 0, rbx);
    rax = r14;
    return rax;
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405430 */
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
/* nostrip @ 0x405460 */
#include <stdint.h>
 
uint64_t xmemdup (int64_t arg1, size_t size) {
    rdi = arg1;
    rsi = size;
    rbx = rsi;
    r14 = rdi;
    rax = malloc (rbx);
    r15 = rax;
    al = (r15 == 0) ? 1 : 0;
    cl = (rbx != 0) ? 1 : 0;
    cl ^= al;
    if (rbx == 0) {
        if (rbx != 0) {
            goto label_0;
        }
    }
    memcpy (r15, r14, rbx);
    rax = r15;
    return rax;
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4054b0 */
#include <stdint.h>
 
uint64_t dbg_xstrdup (int64_t arg1, size_t n, void * p, char const * string) {
    rdi = arg1;
    rbx = n;
    r15 = p;
    r14 = string;
    /* char * xstrdup(char const * string); */
    r14 = rdi;
    rax = strlen (rdi);
    rbx = rax;
    rax = 0xb3513215eae4138c;
    rbx -= rax;
    rbx++;
    rbx += rax;
    bpl = (rbx != 0) ? 1 : 0;
    rax = malloc (rbx);
    r15 = rax;
    al = (r15 == 0) ? 1 : 0;
    al ^= bpl;
    if (r15 == 0) {
        if (rbx != 0) {
            goto label_0;
        }
    }
    memcpy (r15, r14, rbx);
    rax = r15;
    return rax;
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405520 */
#include <stdint.h>
 
uint64_t dbg_xalloc_die (void) {
    /* void xalloc_die(); */
    ebx = *(obj.exit_failure);
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (ebx, 0, 0x40628d);
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405550 */
#include <stdint.h>
 
int64_t dbg_rpl_calloc (size_t bytes, size_t n, size_t s) {
    rax = bytes;
    rdi = n;
    rsi = s;
    /* void * rpl_calloc(size_t n,size_t s); */
    cl = (rdi == 0) ? 1 : 0;
    dl = (rsi == 0) ? 1 : 0;
    rax = rdi;
    rax |= rsi;
    eax = 1;
    if (rax != 0) {
        cl ^= dl;
        ecx = 1;
        if (rax != 0) {
            goto label_0;
        }
        rax = rsi;
        rax *= rdi;
        edx = 0;
        rax = rdx_rax / rsi;
        rdx = rdx_rax % rsi;
        rax = rsi;
        rcx = rdi;
        if (rax == rdi) {
            goto label_0;
        }
        errno_location ();
        *(rax) = 0xc;
        eax = 0;
        return rax;
    }
    ecx = 1;
label_0:
    rdi = rcx;
    rsi = rax;
    return calloc ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4055b0 */
#include <stdint.h>
 
uint64_t dbg_rpl_mbrtowc (int64_t arg1, int64_t arg2, int64_t arg3, size_t n, mbstate_t * ps, size_t ret, char const * s) {
    wchar_t * pwc;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = n;
    rcx = ps;
    r15 = ret;
    r14 = s;
    /* size_t rpl_mbrtowc(wchar_t * pwc,char const * s,size_t n,mbstate_t * ps); */
    rbx = rdx;
    r14 = rsi;
    r12 = rsp + 4;
    if (rdi != 0) {
        r12 = rdi;
    }
    rax = mbrtowc (r12, rsi, rdx, rcx);
    r15 = rax;
    al = (rbx == 0) ? 1 : 0;
    cl = (r15 < 0xfffffffffffffffe) ? 1 : 0;
    cl |= al;
    if (cl != 1) {
        al = 1;
        if (al == 0) {
            goto label_0;
        }
        edi = 0;
        al = hard_locale ();
        if (al != 0) {
            goto label_0;
        }
        eax = *(r14);
        *(r12) = eax;
        r15d = 1;
    }
label_0:
    rax = r15;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x405620 */
#include <stdint.h>
 
uint64_t dbg_close_stream (FILE * __stream, int64_t arg1) {
    rbx = __stream;
    rdi = arg1;
    /* int close_stream(FILE * stream); */
    rbx = rdi;
    rax = fpending ();
    r14 = rax;
    ebp = *(rbx);
    ebp = ~ebp;
    ebp |= 0xffffffdf;
    eax = rpl_fclose (rbx);
    if (ebp != 0xffffffff) {
        ebx = 0xffffffff;
        if (eax != 0) {
            goto label_0;
        }
        errno_location ();
        *(rax) = 0;
    } else {
        cl = (eax == 0) ? 1 : 0;
        dl = (r14 != 0) ? 1 : 0;
        eax = -eax;
        ebx -= ebx;
        if ((dl & cl) != 0) {
            goto label_0;
        }
        dl ^= cl;
        if ((dl & cl) != 0) {
            goto label_0;
        }
        rax = errno_location ();
        ecx = 0;
        ebx = 0xffffffff;
        if (*(rax) != 9) {
            ebx = ecx;
            goto label_0;
        }
    }
label_0:
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x405690 */
#include <stdint.h>
 
uint64_t dbg_hard_locale (int32_t category, char const * p) {
    rdi = category;
    rbx = p;
    /* _Bool hard_locale(int category); */
    rax = setlocale (rdi, 0);
    rbx = rax;
    bpl = 1;
    if (rbx != 0) {
        eax = strcmp (rbx, 0x406c00);
        if (eax != 0) {
            eax = strcmp (rbx, "POSIX");
            if (eax != 0) {
                goto label_0;
            }
        }
        ebp = 0;
    }
label_0:
    eax = ebp;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4056e0 */
#include <stdint.h>
 
uint64_t dbg_locale_charset (char const * codeset) {
    rax = codeset;
    /* char const * locale_charset(); */
    rax = nl_langinfo (0xe);
    ecx = 0x406096;
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
/* nostrip @ 0x405710 */
#include <stdint.h>
 
uint64_t dbg_rpl_fclose (int64_t arg1, int32_t fd, FILE * fp) {
    rdi = arg1;
    rax = fd;
    rbx = fp;
    /* int rpl_fclose(FILE * fp); */
    rbx = rdi;
    eax = fileno (rdi);
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
                goto label_0;
            }
        }
        eax = rpl_fflush (rbx);
        if (eax == 0) {
            goto label_0;
        }
        rax = errno_location ();
        r14 = rax;
        ebp = *(r14);
        fclose (rbx);
        if (ebp != 0) {
            *(r14) = ebp;
            eax = 0xffffffff;
        }
        return rax;
    }
label_0:
    rdi = rbx;
    return fclose ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x405790 */
#include <stdint.h>
 
uint32_t dbg_rpl_fflush (int64_t arg1, FILE * fp) {
    rdi = arg1;
    rbx = fp;
    /* int rpl_fflush(FILE * stream); */
    rbx = rdi;
    if (rbx != 0) {
        rdi = rbx;
        eax = freading ();
        if (eax == 0) {
            goto label_0;
        }
        eax = *(rbx);
        ecx = *(rbx);
        ecx ^= 0xfffffeff;
        if ((ecx & eax) == 0) {
            goto label_0;
        }
        rpl_fseeko (rbx, 0, 1);
    }
label_0:
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4057d0 */
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
    if (rax == *((rbx + 8))) {
        rax = *((rbx + 0x28));
        if (rax != *((rbx + 0x20))) {
            goto label_0;
        }
        if (*((rbx + 0x48)) == 0) {
            goto label_1;
        }
    }
label_0:
    rdi = rbx;
    rsi = rbp;
    edx = r14d;
    r14 = rbx;
invalid_funccall(); //    void (*0x402250)() ();
label_1:
    eax = fileno (rbx);
    edi = eax;
    rsi = rbp;
    edx = r14d;
    rax = lseek ();
    if (rax != -1) {
        *(rbx) &= 0xef;
        *((rbx + 0x90)) = rax;
        eax = 0;
    } else {
        eax = 0xffffffff;
    }
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x405840 */
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
/* nostrip @ 0x4058b0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* nostrip @ 0x4058c0 */
#include <stdint.h>
 
void atexit (void) {
    rdx = *(obj.__dso_handle);
    esi = 0;
    return cxa_atexit ();
}
