#include "decompile_radare2_obfuscated.h"
/* r2dec pseudo code output */
/* nostrip @ 0x402350 */
#include <stdint.h>
 
void dl_relocate_static_pie (void) {
}
/* r2dec pseudo code output */
/* nostrip @ 0x402410 */
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
        rax = dcgettext (0, "Print the number of processing units available to the current process,\nwhich may be less than the number of online processors\n\n");
        rsi = stdout;
        rdi = rax;
        fputs_unlocked ();
        edx = 5;
        rax = dcgettext (0, "      --all      print the number of installed processors\n      --ignore=N  if possible, exclude N processing units\n");
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
            eax = strncmp (rax, 0x406266, 3);
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
        ecx = "nproc";
        eax = 0;
        printf_chk ();
        edx = 5;
        rax = dcgettext (0, "or available locally via: info '(coreutils) %s%s'\n");
        rsi = rax;
        edi = 1;
        edx = "nproc";
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
/* nostrip @ 0x4025d0 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc, char ** argv, int32_t c, long unsigned int nproc) {
    rdi = argc;
    rsi = argv;
    rax = c;
    rdx = nproc;
    /* int main(int argc,char ** argv); */
    r14 = rsi;
    r12d = edi;
    set_program_name (*(r14));
    setlocale (6, 0x406ac2);
    bindtextdomain (0x4061e6, "/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
    textdomain (0x4061e6, rsi);
    edi = close_stdout;
    eax = atexit ();
    ebx = 2;
    r15d = 0;
    while (eax != 0x80) {
        if (eax != 0x81) {
            goto label_1;
        }
        rbp = optarg;
        edx = 5;
        rax = dcgettext (0, "invalid number");
        rdx = 0xffffffffffffffff;
        ecx = 0x406ac2;
        r9d = 0;
        r8 = rax;
        rax = xdectoumax (rbp, 0);
        r15 = rax;
label_0:
        ebp = 0;
        edx = 0x406ac2;
        ecx = longopts;
        r8d = 0;
        edi = r12d;
        rsi = r14;
        eax = getopt_long ();
        if (eax <= 0x7f) {
            goto label_2;
        }
    }
    goto label_0;
label_2:
    if (eax == 0xffffffff) {
        if (*(obj.optind) != r12d) {
            goto label_3;
        }
        edi = ebx;
        rax = num_processors ();
        rax -= r15;
        edx = 1;
        if (rax > 0) {
            rdx = rax;
        }
        edi = 1;
        esi = "%lu\n";
        eax = 0;
        eax = printf_chk ();
        eax = 0;
        return rax;
    }
    if (eax != 0xffffff7d) {
        if (eax != 0xffffff7e) {
            goto label_1;
        }
        dbg_usage (0);
label_3:
        edx = 5;
        rax = dcgettext (0, "extra operand %s");
        rbx = rax;
        rax = *(obj.optind);
        rax = quote (*((r14 + rax*8)), rsi);
        rcx = rax;
        eax = 0;
        error (0, 0, rbx);
        eax = dbg_usage (1);
    }
    eax = 0;
    version_etc (*(obj.stdout), "nproc", "GNU coreutils", *(obj.Version), "Giuseppe Scrivano", 0);
    exit (0);
label_1:
    dbg_usage (1);
}
/* r2dec pseudo code output */
/* nostrip @ 0x402770 */
#include <stdint.h>
 
void dbg_close_stdout_set_file_name (char const * file) {
    rdi = file;
    /* void close_stdout_set_file_name(char const * file); */
    *(obj.file_name) = rdi;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402780 */
#include <stdint.h>
 
void dbg_close_stdout_set_ignore_EPIPE (_Bool ignore) {
    rdi = ignore;
    /* void close_stdout_set_ignore_EPIPE(_Bool ignore); */
    *(obj.ignore_EPIPE) = dil;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402790 */
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
        error (0, ebp, 0x4063e5);
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
/* nostrip @ 0x402850 */
#include <stdint.h>
 
uint64_t dbg_num_processors (long int nprocs, long unsigned int omp_env_threads, nproc_query query) {
    cpu_set_t set;
    rax = nprocs;
    rbx = omp_env_threads;
    rdi = query;
    /* long unsigned int num_processors(nproc_query query); */
    r14 = 0xffffffffffffffff;
    if (edi == 2) {
        rax = getenv ("OMP_NUM_THREADS");
        rdi = rax;
        rax = parse_omp_threads ();
        rbx = rax;
        rax = getenv ("OMP_THREAD_LIMIT");
        rdi = rax;
        rax = parse_omp_threads ();
        r14 -= r14;
        r14 |= rax;
        rax = r14;
        if (rbx < r14) {
            rax = rbx;
        }
        if (rbx != 0) {
            goto label_0;
        }
        edi = 1;
    }
    if (edi != 1) {
        goto label_1;
    }
    rdx = rsp + 8;
    edi = 0;
    esi = 0x80;
    eax = sched_getaffinity ();
    while (eax == 0) {
        edi = 0x54;
        rax = sysconf ();
        if (rax > 0) {
            goto label_2;
        }
        goto label_3;
label_1:
        edi = 0x53;
        rax = sysconf ();
        if (rax == 1) {
            rdx = rsp + 8;
            edi = 0;
            esi = 0x80;
            eax = sched_getaffinity ();
            if (eax != 0) {
                goto label_3;
            }
            rsi = rsp + 8;
            edi = 0x80;
            eax = sched_cpucount ();
            if (eax == 0) {
                goto label_3;
            }
            rax = (int64_t) eax;
        }
        if (rax > 0) {
            goto label_2;
        }
label_3:
        eax = 1;
        goto label_2;
        rsi = rsp + 8;
        edi = 0x80;
        eax = sched_cpucount ();
    }
    rax = (int64_t) eax;
label_2:
    if (rax < r14) {
        r14 = rax;
    }
    rax = r14;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402950 */
#include <stdint.h>
 
int32_t dbg_parse_omp_threads (int32_t c, char * endptr, char const * threads, long unsigned int value) {
    rdx = c;
    rcx = endptr;
    rdi = threads;
    rax = value;
    /* long unsigned int parse_omp_threads(char const * threads); */
    if (rdi == 0) {
        goto label_0;
    }
    al = *(rdi);
    if (al == 0) {
        goto label_1;
    }
    ecx = 0x80001f;
    do {
        edx = (int32_t) al;
        edx += 0xfffffff7;
        if (edx > 0x17) {
            goto label_2;
        }
        if (((ecx >> edx) & 1) >= 0) {
            goto label_2;
        }
        al = *((rdi + 1));
        rdi++;
    } while (al != 0);
label_1:
    eax = 0;
label_2:
    eax = (int32_t) al;
    eax += 0xffffffd0;
    if (eax > 9) {
        goto label_0;
    }
    *(rsp) = 0;
    eax = strtoul (rdi, rsp, 0xa);
    rcx = *(rsp);
    if (rcx == 0) {
        goto label_0;
    }
    dl = *(rcx);
    if (dl == 0) {
        goto label_3;
    }
    esi = 0x80001f;
    do {
        edx = (int32_t) dl;
        edx += 0xfffffff7;
        if (edx >= 0x18) {
            goto label_4;
        }
        if (((esi >> edx) & 1) >= 0) {
            goto label_4;
        }
        edx = *((rcx + 1));
        rcx++;
    } while (dl != 0);
label_4:
    *(rsp) = rcx;
label_3:
    cl = *(rcx);
    if (cl != 0x2c) {
        if (cl == 0) {
            goto label_5;
        }
label_0:
        eax = 0;
    }
label_5:
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4029f0 */
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
            eax = strncmp (r14, 0x406449, 3);
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
/* nostrip @ 0x402aa0 */
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
/* nostrip @ 0x402ae0 */
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
/* nostrip @ 0x402af0 */
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
/* nostrip @ 0x402b00 */
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
/* nostrip @ 0x402b40 */
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
/* nostrip @ 0x402b60 */
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
/* nostrip @ 0x402b90 */
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
/* nostrip @ 0x402c10 */
#include <stdint.h>
 
int64_t dbg_quotearg_buffer_restyled (int64_t arg_108h, uint32_t arg_f0h, int64_t arg_f8h, func main, uint32_t arg_1bh, int64_t arg_38h, int64_t arg_78h_2, int64_t arg_78h, uint32_t arg2, size_t * arg3, int64_t arg5, int64_t arg6, char * buffer, unsigned char c, _Bool elide_outer_quotes, unsigned char esc, size_t ilim) {
    int32_t flags;
    char const * arg;
    uint32_t var_fh;
    size_t argsize;
    int64_t var_1ah;
    uint32_t var_1bh;
    size_t var_1ch;
    uint32_t var_20h;
    uint32_t var_21h;
    int64_t var_22h;
    int64_t var_23h;
    int64_t var_24h;
    uint32_t var_25h;
    uint32_t var_26h;
    uint32_t var_27h;
    char const * quote_string;
    size_t var_30h;
    size_t bytes;
    size_t n;
    char const * left_quote;
    char const * right_quote;
    int64_t var_54h;
    size_t * var_58h;
    uint32_t var_60h;
    int64_t var_68h;
    wchar_t w;
    char * s;
    mbstate_t * ps;
    uint32_t var_84h;
    uint32_t var_88h;
    wint_t wc;
    size_t * var_90h;
    size_t * var_98h;
    int64_t var_a0h;
    uint32_t var_a8h;
    int64_t var_b0h;
    rsi = arg2;
    rdx = arg3;
    r8 = arg5;
    r9 = arg6;
    rdi = buffer;
    r12 = c;
    r15 = elide_outer_quotes;
    rcx = esc;
    rbx = ilim;
    /* size_t quotearg_buffer_restyled(char * buffer,size_t buffersize,char const * arg,size_t argsize,quoting_style quoting_style,int flags,unsigned int const * quote_these_too,char const * left_quote,char const * right_quote); */
label_12:
    ebx = r9d;
    r12d = r8d;
    *((rsp + 0x30)) = rcx;
    *((rsp + 0x28)) = rdx;
    *((rsp + 0x10)) = rdi;
    rax = *((rsp + 0x100));
    *((rsp + 0x70)) = rax;
    rax = *((rsp + 0xf8));
    *((rsp + 0x68)) = rax;
    rax = ctype_get_mb_cur_max ();
    *((rsp + 0xa8)) = rax;
    r15d = ebx;
    r15b >>= 1;
    r15b &= 1;
    eax = ebx;
    eax &= 1;
    *((rsp + 0x88)) = eax;
    *((rsp + 0x1c)) = ebx;
    ebx &= 4;
    *((rsp + 0x84)) = ebx;
    dil = 1;
    eax = 0;
    *((rsp + 0x60)) = rax;
    eax = 0;
    *((rsp + 0x48)) = rax;
    eax = 0;
    *((rsp + 0x40)) = rax;
    eax = 0;
    r9d = 0;
    ecx = 0;
    *((rsp + 0xa0)) = rcx;
label_11:
    r11 = rbp;
    if (r12d > 0xa) {
        goto label_16;
    }
    r8d = 7;
    r14d = 0;
    ecx = r12d;
    r13b = 1;
    esi = 0;
    r10 = *((rsp + 0x28));
    rbp = *((rsp + 0x30));
    /* switch table (11 cases) at 0x406450 */
    r14d = edi;
    rbx = r11;
    rax = gettext_quote (0x406976, r12d);
    *((rsp + 0x68)) = rax;
    rax = gettext_quote (0x406978, r12d);
    r9d = ebp;
    edi = r14d;
    r11 = rbx;
    *((rsp + 0x70)) = rax;
    *((rsp + 0x1a)) = dil;
    *((rsp + 0x50)) = r9d;
    if ((r15b & 1) != 0) {
        goto label_17;
    }
    rcx = *((rsp + 0x68));
    al = *(rcx);
    r14d = 0;
    if (al == 0) {
        goto label_18;
    }
    do {
        if (r14 < r11) {
            rdx = *((rsp + 0x10));
            *((rdx + r14)) = al;
        }
        eax = *((rcx + r14 + 1));
        r14++;
    } while (al != 0);
    goto label_18;
label_17:
    r14d = 0;
label_18:
    rbp = *((rsp + 0x70));
    rbx = r11;
    rax = strlen (*((rsp + 0x70)));
    r11 = rbx;
    *((rsp + 0x40)) = rax;
    r8d = r12d;
    *((rsp + 0x48)) = rbp;
    r13b = 1;
    sil = r15b;
    r10 = *((rsp + 0x28));
    rbp = *((rsp + 0x30));
    dil = *((rsp + 0x1a));
    r9d = *((rsp + 0x50));
    goto label_19;
    r8d = 0;
    r14d = 0;
    r13d = eax;
    esi = 0;
    goto label_19;
    al = 1;
    r15b = 1;
    cl = 1;
    if ((r15b & 1) != 0) {
        ecx = eax;
    }
    al = cl;
    r8d = 2;
    if ((r15b & 1) == 0) {
        if (r11 != 0) {
            rcx = *((rsp + 0x10));
            *(rcx) = 0x27;
        }
        r14d = 1;
    } else {
        r14d = 0;
    }
    ecx = 0x406978;
    *((rsp + 0x48)) = rcx;
    ecx = 1;
    *((rsp + 0x40)) = rcx;
    r13d = eax;
    goto label_20;
    r8d = 5;
    if ((r15b & 1) == 0) {
        if (r11 != 0) {
            rax = *((rsp + 0x10));
            *(rax) = 0x22;
        }
        r14d = 1;
        goto label_21;
        r13b = 1;
        r8d = 5;
        r14d = 0;
        eax = 0x406974;
        *((rsp + 0x48)) = rax;
        eax = 1;
        *((rsp + 0x40)) = rax;
        sil = 1;
    } else {
        r14d = 0;
label_21:
        eax = 0x406974;
        *((rsp + 0x48)) = rax;
        eax = 1;
        *((rsp + 0x40)) = rax;
        r13b = 1;
label_20:
        sil = r15b;
    }
label_19:
    r12b = (*((rsp + 0xf0)) != 0) ? 1 : 0;
    r15b = (r8d != 2) ? 1 : 0;
    al = (r8d == 2) ? 1 : 0;
    ecx = r13d;
    cl &= 1;
    *(rsp + 0x22) = (cl == 0) ? 1 : 0;
    ebx = r15d;
    *((rsp + 0x1b)) = cl;
    bl &= cl;
    cl = (*((rsp + 0x40)) != 0) ? 1 : 0;
    edx = ecx;
    *((rsp + 0x26)) = bl;
    dl &= bl;
    *((rsp + 0x27)) = dl;
    ebx = esi;
    bl &= 1;
    dl = (bl == 0) ? 1 : 0;
    al &= bl;
    *((rsp + 0x23)) = al;
    *((rsp + 0xf)) = bl;
    r12b &= bl;
    *((rsp + 0x25)) = r12b;
    dl |= r15b;
    *((rsp + 0x20)) = dl;
    *((rsp + 0x24)) = r13b;
    *((rsp + 0xb0)) = rsi;
    r13b &= sil;
    r13b &= cl;
    *((rsp + 0x21)) = r13b;
    r15d = 0;
    *((rsp + 0x38)) = r8;
    if (rbp != -1) {
label_4:
        if (r15 != rbp) {
            goto label_22;
        }
        goto label_23;
    }
label_5:
    if (*((r10 + r15)) == 0) {
        goto label_24;
    }
label_22:
    if (*((rsp + 0x27)) != 0) {
        rax = *((rsp + 0x40));
        rbx = r15 + rax;
        if (rax >= 2) {
            if (rbp != -1) {
                goto label_25;
            }
            r12d = edi;
            r13d = r9d;
            rax = strlen (r10);
            r9d = r13d;
            r8 = *((rsp + 0x38));
            edi = r12d;
            r11 = rbp;
            r10 = *((rsp + 0x28));
        }
label_25:
        if (rbx <= rbp) {
            goto label_26;
        }
    }
    esi = 0;
    do {
label_0:
        r12d = *((r10 + r15));
        if (r12 > 0x7e) {
            goto label_27;
        }
        edx = 0;
        r13b = 1;
        cl = 0x6e;
        bl = 0x61;
        eax = 0;
        /* switch table (127 cases) at 0x4064a8 */
label_3:
        if (*((rsp + 0x26)) == 0) {
            goto label_8;
        }
label_1:
        if (*((rsp + 0xf0)) != 0) {
            goto label_28;
        }
        goto label_29;
label_26:
        r13 = rbp;
        r12d = edi;
        rbx = r11;
        eax = memcmp (r10 + r15, *((rsp + 0x48)), *((rsp + 0x40)));
        sil = (eax == 0) ? 1 : 0;
        if (eax != 0) {
            goto label_30;
        }
        r10 = *((rsp + 0x28));
        r11 = rbx;
        edi = r12d;
        r8 = *((rsp + 0x38));
        r9d = ebp;
    } while (*((rsp + 0xf)) == 0);
    goto label_31;
label_30:
    r10 = *((rsp + 0x28));
    r11 = rbx;
    edi = r12d;
    r8 = *((rsp + 0x38));
    r9d = ebp;
    goto label_0;
    if (r15 != 0) {
        goto label_32;
    }
    goto label_33;
    eax = 0;
    if (rbp == -1) {
        goto label_34;
    }
    if (r15 != 0) {
        goto label_35;
    }
    if (rbp == 1) {
        goto label_33;
    }
    goto label_35;
    if (*((rsp + 0x1b)) == 0) {
        goto label_36;
    }
    if (*((rsp + 0xf)) != 0) {
        goto label_31;
    }
    if (r8d == 2) {
        eax = r9d;
        al &= 1;
        if (al != 0) {
            goto label_37;
        }
        if (r14 < r11) {
            rax = *((rsp + 0x10));
            *((rax + r14)) = 0x27;
        }
        rax = r14 + 1;
        if (rax < r11) {
            rcx = *((rsp + 0x10));
            *((rcx + rax)) = 0x24;
        }
        rax = r14 + 2;
        if (rax < r11) {
            rcx = *((rsp + 0x10));
            *((rcx + rax)) = 0x27;
        }
        r14 += 3;
        r9b = 1;
    }
label_37:
    rcx = r14;
    if (rcx < r11) {
        rax = *((rsp + 0x10));
        *((rax + rcx)) = 0x5c;
    }
    r14 = rcx + 1;
    al = 1;
    r12b = 0x30;
    if (r8d == 2) {
        goto label_35;
    }
    rdx = r15 + 1;
    if (rdx >= rbp) {
        goto label_35;
    }
    dl = *((r10 + rdx));
    dl += 0xd0;
    if (dl > 9) {
        goto label_35;
    }
    if (r14 < r11) {
        rdx = *((rsp + 0x10));
        *((rdx + r14)) = 0x30;
    }
    rdx = rcx + 2;
    if (rdx < r11) {
        ebx = esi;
        rsi = *((rsp + 0x10));
        *((rsi + rdx)) = 0x30;
        esi = ebx;
    }
    rcx += 3;
    r13d = 0;
    r14 = rcx;
    if (*((rsp + 0x26)) != 0) {
        goto label_1;
    }
    goto label_8;
    bl = 0x62;
    goto label_38;
    cl = 0x74;
    goto label_39;
    bl = 0x76;
    goto label_38;
    bl = 0x66;
    goto label_38;
    cl = 0x72;
    goto label_39;
    r12b = 0x27;
    al = 1;
    *((rsp + 0xa0)) = rax;
    if (r8d == 2) {
        if (*((rsp + 0xf)) != 0) {
            goto label_40;
        }
        al = (r11 == 0) ? 1 : 0;
        rcx = *((rsp + 0x60));
        rdx = *((rsp + 0x60));
        cl = (rdx != 0) ? 1 : 0;
        cl |= al;
        if (cl == 0) {
            rdx = r11;
        }
        *((rsp + 0x60)) = rdx;
        eax = 0;
        if (cl == 0) {
            r11 = rax;
        }
        if (r14 < r11) {
            rax = *((rsp + 0x10));
            *((rax + r14)) = 0x27;
        }
        rax = r14 + 1;
        if (rax < r11) {
            rcx = *((rsp + 0x10));
            *((rcx + rax)) = 0x5c;
        }
        rax = r14 + 2;
        if (rax < r11) {
            rcx = *((rsp + 0x10));
            *((rcx + rax)) = 0x27;
        }
        r14 += 3;
        r9d = 0;
    }
    eax = 0;
    r13b = 1;
    if (*((rsp + 0x26)) != 0) {
        goto label_1;
    }
    goto label_8;
    r12b = 0x3f;
    if (r8d == 5) {
        goto label_41;
    }
    if (r8d != 2) {
        goto label_32;
    }
    if (*((rsp + 0xf)) == 0) {
        goto label_32;
    }
    goto label_40;
    if (r8d != 2) {
        goto label_42;
    }
    if (*((rsp + 0xf)) != 0) {
        goto label_40;
    }
    r12b = 0x5c;
    eax = 0;
    goto label_43;
label_27:
    *((rsp + 0x54)) = esi;
    *((rsp + 0x50)) = r9d;
    *((rsp + 0x1a)) = dil;
    *((rsp + 0x98)) = r11;
    if (*((rsp + 0xa8)) != 1) {
        goto label_44;
    }
    rax = ctype_b_loc ();
    r10 = *((rsp + 0x28));
    rax = *(rax);
    r13d = *((rax + r12*2));
    r13d >>= 0xe;
    r13b &= 1;
    ebx = 1;
label_7:
    r13b &= 1;
    eax = r13d;
    al |= *((rsp + 0x22));
    r11 = *((rsp + 0x98));
    dil = *((rsp + 0x1a));
    r8 = *((rsp + 0x38));
    r9d = *((rsp + 0x50));
    esi = *((rsp + 0x54));
    if (rbx > 1) {
        goto label_45;
    }
    if (al == 0) {
        goto label_45;
    }
    eax = 0;
    if (*((rsp + 0x26)) != 0) {
        goto label_1;
    }
    goto label_8;
label_34:
    if (r15 != 0) {
        goto label_46;
    }
    cl = *((r10 + 1));
    if (cl != 0) {
        goto label_46;
    }
label_33:
    dl = 1;
    if (*((rsp + 0x20)) == 0) {
        goto label_40;
    }
    eax = 0;
    r13b = dl;
    if (*((rsp + 0x26)) != 0) {
        goto label_1;
    }
label_8:
    if (*((rsp + 0x25)) != 0) {
label_28:
        edx = 1;
        ecx = r12d;
        edx <<= cl;
        if (sil != 0) {
            goto label_47;
        }
        ecx = r12d;
        cl >>= 5;
        ecx = (int32_t) cl;
        rsi = *((rsp + 0xf0));
        edx &= *((rsi + rcx*4));
        ebx = r12d;
        if (edx == 0) {
            goto label_10;
        }
        goto label_48;
    }
label_29:
    ebx = r12d;
    if (sil != 0) {
        goto label_48;
    }
label_10:
    while ((r9b & 1) != 0) {
        al &= 1;
        if (al == 0) {
            if (r14 < r11) {
                rax = *((rsp + 0x10));
                *((rax + r14)) = 0x27;
            }
            rax = r14 + 1;
            if (rax < r11) {
                rcx = *((rsp + 0x10));
                *((rcx + rax)) = 0x27;
            }
            r14 += 2;
            r9d = 0;
        }
label_2:
        ebx = r12d;
        if (r14 < r11) {
            goto label_49;
        }
        goto label_50;
label_47:
        ebx = r12d;
        if (*((rsp + 0xf)) == 0) {
            goto label_51;
        }
        goto label_31;
label_36:
        if (*((rsp + 0x88)) != 0) {
            goto label_52;
        }
        r12d = 0;
        goto label_32;
label_42:
        cl = 0x5c;
        if (*((rsp + 0x21)) == 0) {
            goto label_39;
        }
        eax = 0;
        r12b = 0x5c;
label_43:
        r13d = 0;
    }
    goto label_2;
label_39:
    ebx = ecx;
    if (*((rsp + 0x20)) == 0) {
        goto label_40;
    }
label_38:
    eax = 0;
    r13d = 0;
    if (*((rsp + 0x1b)) == 0) {
        goto label_3;
    }
label_48:
    if (*((rsp + 0xf)) != 0) {
        goto label_31;
    }
label_51:
    if (r8d == 2) {
        eax = r9d;
        al &= 1;
        if (al != 0) {
            goto label_53;
        }
        if (r14 < r11) {
            rax = *((rsp + 0x10));
            *((rax + r14)) = 0x27;
        }
        rax = r14 + 1;
        if (rax < r11) {
            rcx = *((rsp + 0x10));
            *((rcx + rax)) = 0x24;
        }
        rax = r14 + 2;
        if (rax < r11) {
            rcx = *((rsp + 0x10));
            *((rcx + rax)) = 0x27;
        }
        r14 += 3;
        r9b = 1;
    }
label_53:
    if (r14 < r11) {
        rax = *((rsp + 0x10));
        *((rax + r14)) = 0x5c;
    }
    r14++;
    if (r14 < r11) {
label_49:
        rax = *((rsp + 0x10));
        *((rax + r14)) = bl;
    }
label_50:
    r14++;
    r13b = -r13b;
    r13b &= dil;
    edi = r13d;
label_52:
    r15++;
    if (rbp != -1) {
        goto label_4;
    }
    goto label_5;
label_44:
    *((rsp + 0x78)) = 0;
    if (rbp == -1) {
        rax = strlen (r10);
        r10 = *((rsp + 0x28));
    }
    rax = r10 + r15;
    *((rsp + 0x90)) = rax;
    r13b = 1;
    ebx = 0;
    rax = rsp + 0x78;
    rcx = rax;
    *((rsp + 0x30)) = rbp;
label_6:
    *((rsp + 0x58)) = rbx;
    rbx = rbx + r15;
    rbp -= rbx;
    rax = rpl_mbrtowc (rsp + 0x8c, r10 + rbx, rbp);
    if (rbp == 0) {
        goto label_54;
    }
    rsi = 0x20000002b;
    if (rbp == -1) {
        goto label_55;
    }
    if (rbp == 0xfffffffffffffffe) {
        goto label_56;
    }
    al = (rbp > 1) ? 1 : 0;
    al &= *((rsp + 0x23));
    r10 = *((rsp + 0x28));
    r11 = *((rsp + 0x98));
    rbx = *((rsp + 0x58));
    if (al != 1) {
        goto label_57;
    }
    rax = *((rsp + 0x90));
    rax = rax + rbx;
    ecx = 1;
    do {
        edx = *((rax + rcx));
        edx += 0xffffffa5;
        if (edx <= 0x21) {
            if (((rsi >> rdx) & 1) < 0) {
                goto label_58;
            }
        }
        rcx++;
    } while (rcx < rbp);
label_57:
    eax = iswprint (*((rsp + 0x8c)));
    if (eax == 0) {
        r13d = 0;
    }
    rax = rsp + 0x78;
    rbx += rbp;
    eax = mbsinit (rax);
    rcx = rbp;
    r10 = *((rsp + 0x28));
    rbp = *((rsp + 0x30));
    if (eax == 0) {
        goto label_6;
    }
    goto label_7;
label_46:
    goto label_35;
label_41:
    if (*((rsp + 0x84)) == 0) {
        goto label_32;
    }
    rcx = r15 + 2;
    if (rcx >= rbp) {
        goto label_32;
    }
    if (*((r10 + r15 + 1)) != 0x3f) {
        goto label_32;
    }
    edx = *((r10 + rcx));
    eax = 0;
    if (edx > 0x3e) {
        goto label_35;
    }
    ebx = esi;
    rsi = 0x7000a38200000000;
    if (((rsi >> rdx) & 1) < 0) {
        if (*((rsp + 0xf)) != 0) {
            goto label_59;
        }
        if (r14 < r11) {
            rax = *((rsp + 0x10));
            *((rax + r14)) = 0x3f;
        }
        rax = r14 + 1;
        if (rax < r11) {
            rsi = *((rsp + 0x10));
            *((rsi + rax)) = 0x22;
        }
        rax = r14 + 2;
        if (rax < r11) {
            rsi = *((rsp + 0x10));
            *((rsi + rax)) = 0x22;
        }
        rax = r14 + 3;
        if (rax < r11) {
            rsi = *((rsp + 0x10));
            *((rsi + rax)) = 0x3f;
        }
        r14 += 4;
        eax = 0;
        r15 = rcx;
        r12b = dl;
    }
    r13d = 0;
    esi = ebx;
    if (*((rsp + 0x26)) != 0) {
        goto label_1;
    }
    goto label_8;
label_32:
    eax = 0;
label_35:
    r13d = 0;
    if (*((rsp + 0x26)) != 0) {
        goto label_1;
    }
    goto label_8;
label_45:
    *((rsp + 0x30)) = al;
    rbx += r15;
    eax = 0;
    if (*((rsp + 0x30)) != 0) {
        goto label_60;
    }
    goto label_61;
label_9:
    if ((r9b & 1) != 0) {
        rcx = r8;
        r8 = rbx;
        ebx = eax;
        bl &= 1;
        if (bl == 0) {
            *((rsp + 0x54)) = esi;
            if (r14 < r11) {
                rsi = *((rsp + 0x10));
                *((rsi + r14)) = 0x27;
            }
            rsi = r14 + 1;
            if (rsi < r11) {
                rbx = *((rsp + 0x10));
                *((rbx + rsi)) = 0x27;
            }
            r14 += 2;
            r9d = 0;
            esi = *((rsp + 0x54));
        }
        rbx = r8;
        r8 = rcx;
    }
    if (r14 >= r11) {
        goto label_62;
    }
    ecx = esi;
    rsi = *((rsp + 0x10));
    *((rsi + r14)) = r12b;
    esi = ecx;
    while (*((rsp + 0x30)) == 0) {
label_61:
        if (*((rsp + 0xf)) != 0) {
            goto label_31;
        }
        if (r8d == 2) {
            eax = r9d;
            al &= 1;
            if (al != 0) {
                goto label_63;
            }
            if (r14 < r11) {
                rax = *((rsp + 0x10));
                *((rax + r14)) = 0x27;
            }
            rax = r14 + 1;
            if (rax < r11) {
                rdx = *((rsp + 0x10));
                *((rdx + rax)) = 0x24;
            }
            rax = r14 + 2;
            if (rax < r11) {
                rdx = *((rsp + 0x10));
                *((rdx + rax)) = 0x27;
            }
            r14 += 3;
            r9b = 1;
        }
label_63:
        if (r14 < r11) {
            rax = *((rsp + 0x10));
            *((rax + r14)) = 0x5c;
        }
        rax = r14 + 1;
        if (rax < r11) {
            edx = r12d;
            dl >>= 6;
            dl |= 0x30;
            ecx = esi;
            rsi = *((rsp + 0x10));
            *((rsi + rax)) = dl;
            esi = ecx;
        }
        rax = r14 + 2;
        if (rax < r11) {
            edx = r12d;
            dl >>= 3;
            dl &= 7;
            dl |= 0x30;
            ecx = esi;
            rsi = *((rsp + 0x10));
            *((rsi + rax)) = dl;
            esi = ecx;
        }
        r14 += 3;
        r12b &= 7;
        r12b |= 0x30;
        al = 1;
        goto label_64;
label_62:
        r14++;
        r12b = *((r10 + r15 + 1));
        r15 = rdx;
    }
label_60:
    if ((sil & 1) != 0) {
        if (r14 < r11) {
            rdx = *((rsp + 0x10));
            *((rdx + r14)) = 0x5c;
        }
        r14++;
        esi = 0;
    }
label_64:
    rdx = r15 + 1;
    if (rbx > rdx) {
        goto label_9;
    }
    goto label_10;
label_55:
    r13d = 0;
label_54:
    r10 = *((rsp + 0x28));
    rbp = *((rsp + 0x30));
    goto label_65;
label_56:
    rbp = *((rsp + 0x30));
    r10 = *((rsp + 0x28));
    if (rbp <= rbx) {
        goto label_66;
    }
    rbx = *((rsp + 0x58));
    do {
        rax = *((rsp + 0x90));
        if (*((rax + rbx)) == 0) {
            goto label_67;
        }
        rax = r15 + rbx + 1;
        rbx++;
    } while (rax < rbp);
    r13d = 0;
    goto label_7;
label_66:
    r13d = 0;
label_65:
    rbx = *((rsp + 0x58));
    goto label_7;
label_67:
    r13d = 0;
    goto label_7;
label_23:
    goto label_68;
label_24:
label_68:
    al = (r8d != 2) ? 1 : 0;
    cl = (r14 != 0) ? 1 : 0;
    if (*((rsp + 0xf)) != 0) {
        al |= cl;
        if (al == 0) {
            goto label_31;
        }
    }
    *((rsp + 0x30)) = rbp;
    al = (r8d != 2) ? 1 : 0;
    cl = (*((rsp + 0xf)) != 0) ? 1 : 0;
    dl = *((rsp + 0x24));
    rsi = *((rsp + 0xb0));
    if ((*((rsp + 0xa0)) & 1) == 0) {
        goto label_69;
    }
    al |= cl;
    if (al != 0) {
        goto label_69;
    }
    if ((dil & 1) != 0) {
        goto label_70;
    }
    if (*((rsp + 0x60)) == 0) {
        goto label_69;
    }
    r12d = r8d;
    al = dl;
    r15d = esi;
    rbp = *((rsp + 0x60));
    if (r11 == 0) {
        goto label_11;
    }
label_69:
    rdx = *((rsp + 0x48));
    if (rdx == 0) {
        goto label_71;
    }
    rcx = *((rsp + 0x10));
    if (*((rsp + 0xf)) != 0) {
        goto label_72;
    }
    al = *(rdx);
    if (al == 0) {
        goto label_72;
    }
    rdx++;
    do {
        if (r14 < r11) {
            *((rcx + r14)) = al;
        }
        r14++;
        eax = *(rdx);
        rdx++;
    } while (al != 0);
    goto label_72;
label_40:
    eax = 2;
label_15:
    *((rsp + 0x38)) = rax;
label_31:
    r9d = *((rsp + 0x1c));
    do {
        r8d = 4;
        rax = *((rsp + 0x38));
        if (*((rsp + 0x1b)) == 0) {
            r8d = eax;
        }
        if (eax != 2) {
            r8d = eax;
        }
        r9d &= 0xfffffffd;
        rax = quotearg_buffer_restyled (*((rsp + 0x18)), r11, r10, rbp, r8, r9);
        goto label_12;
label_13:
        r14 = rax;
label_14:
        return rax;
label_58:
        eax = 2;
        *((rsp + 0x38)) = rax;
        r9d = *((rsp + 0x1c));
        rbp = *((rsp + 0x30));
    } while (1);
label_70:
    quotearg_buffer_restyled (*((rsp + 0x18)), *((rsp + 0x68)), *((rsp + 0x30)), *((rsp + 0x38)), 5, *((rsp + 0x24)));
    goto label_12;
    goto label_13;
label_71:
    rcx = *((rsp + 0x10));
label_72:
    if (r14 >= r11) {
        goto label_14;
    }
    *((rcx + r14)) = 0;
    goto label_14;
label_59:
    eax = 5;
    goto label_15;
label_16:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4039e0 */
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
/* nostrip @ 0x403ab0 */
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
/* nostrip @ 0x403ba0 */
#include <stdint.h>
 
int64_t dbg_quotearg_free (struct slotvec * sv) {
    r14 = sv;
    /* void quotearg_free(); */
    r14 = slotvec;
    if (*(obj.nslots) < 2) {
        goto label_0;
    }
    r15 = r14 + 0x18;
    ebx = 1;
    do {
        free (*(r15));
        rbx++;
        rax = *(obj.nslots);
        r15 += 0x10;
    } while (rbx < rax);
label_0:
    rdi = *((r14 + 8));
    eax = slot0;
    if (rdi != rax) {
        free (rdi);
        *(obj.slotvec0) = 0x100;
        *(obj.slot0) = 0x4092d0;
    }
    eax = slotvec0;
    if (r14 != rax) {
        free (r14);
        *(obj.slotvec) = 0x4091c0;
    }
    *(obj.nslots) = 1;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x403c40 */
#include <stdint.h>
 
void quotearg_n (int64_t arg_8h, int64_t arg1, int64_t arg2) {
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    rdi = arg1;
    rsi = arg2;
    rdx = 0xffffffffffffffff;
    ecx = default_quoting_options;
invalid_funccall(); //    return void (*0x403c50)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x403c50 */
#include <stdint.h>
 
uint64_t dbg_quotearg_n_options (int64_t arg_8h, char const * arg, int64_t arg1, int64_t arg3, int64_t arg4, int32_t e, int32_t flags, size_t n, quoting_options const * options, char * val) {
    slotvec * sv;
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    rsi = arg;
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    rax = e;
    r9 = flags;
    r15 = n;
    rbx = options;
    r14 = val;
    /* char * quotearg_n_options(int n,char const * arg,size_t argsize,quoting_options const * options); */
    rbx = rcx;
    r15 = rdx;
    *((rsp + 0x20)) = rsi;
    r12d = edi;
    rax = errno_location ();
    r13 = rax;
    if (r12d >= 0) {
        eax = *(r13);
        rbp = slotvec;
        *((rsp + 0x18)) = r13;
        *(rsp) = eax;
        *((rsp + 0x10)) = rbx;
        *((rsp + 8)) = r15;
        if (*(obj.nslots) <= r12d) {
            if (r12d == 0x7fffffff) {
                goto label_0;
            }
            ebx = slotvec0;
            edi = 0;
            if (rbp != rbx) {
                rdi = rbp;
            }
            r15d = r12 + 1;
            rsi = (int64_t) r12d;
            rsi <<= 4;
            rsi += 0x10;
            rax = xrealloc ();
            r14 = rax;
            *(obj.slotvec) = r14;
            if (rbp == rbx) {
                __asm ("movups xmm0, xmmword [obj.slotvec0]");
                __asm ("movups xmmword [r14], xmm0");
            }
            rax = *(obj.nslots);
            rbp = (int64_t) r15d;
            rdx -= rax;
            rax <<= 4;
            rdi += rax;
            rdx <<= 4;
            memset (r14, 0, rbp);
            *(obj.nslots) = ebp;
            rbx = *((rsp + 0x10));
            r15 = *((rsp + 8));
        }
        r13 = (int64_t) r12d;
        r13 <<= 4;
        r12 = *((rbp + r13));
        r14 = *((rbp + r13 + 8));
        r9d |= 1;
        rax = rbx + 8;
        *((rsp + 0xc)) = r9d;
        rbx = rax;
        rax = quotearg_buffer_restyled (r14, r12, *((rsp + 0x28)), r15, *(rbx), *((rbx + 4)));
        r15 = rax;
        if (r12 > r15) {
            rax = *((rsp + 0x18));
            ebp = *(rsp);
        } else {
            rax = rbp + r13;
            r12 = rbp + r13 + 8;
            r15++;
            *(rax) = r15;
            eax = slot0;
            ebp = *(rsp);
            if (r14 != rax) {
                free (r14);
            }
            rax = xmalloc (r15);
            r14 = rax;
            *(r12) = r14;
            rax = *((rsp + 0x10));
            quotearg_buffer_restyled (r14, r15, *((rsp + 0x28)), *((rsp + 0x10)), *(rax), *((rsp + 0xc)));
            rax = *((rsp + 0x18));
        }
        *(rax) = ebp;
        rax = r14;
        return rax;
    }
    abort ();
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x403e10 */
#include <stdint.h>
 
void quotearg_n_mem (int64_t arg_8h, int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = default_quoting_options;
invalid_funccall(); //    return void (*0x403c50)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x403e20 */
#include <stdint.h>
 
int64_t dbg_quotearg (int64_t arg_8h, char const * arg, int64_t arg1) {
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    rax = arg;
    rdi = arg1;
    /* char * quotearg(char const * arg); */
    rax = rdi;
    edi = 0;
    rdx = 0xffffffffffffffff;
    ecx = default_quoting_options;
    rsi = rax;
invalid_funccall(); //    return void (*0x403c50)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x403e40 */
#include <stdint.h>
 
int64_t dbg_quotearg_mem (int64_t arg_8h, char const * arg, int64_t arg1, int64_t arg2, size_t argsize) {
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
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
invalid_funccall(); //    return void (*0x403c50)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x403e60 */
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
        quotearg_n_options (rdi, rax, 0xffffffffffffffff, rsp + 0x40);
        return rax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x403ed0 */
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
        quotearg_n_options (rdi, rdx, rcx, rax);
        return rax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x403f40 */
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
        quotearg_n_options (0, rsi, 0xffffffffffffffff, rsp + 0x40);
        return eax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x403fb0 */
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
        quotearg_n_options (0, rsi, rdx, rsp + 0x40);
        return eax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404020 */
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
    rdx = rdi;
    rsi = comment;
    *((rsp + 0x30)) = rsi;
    __asm ("movups xmm0, xmmword [0x004092b0]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x004092a0]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    eax = ecx;
    al >>= 5;
    eax = (int32_t) al;
    esi = *((rsp + rax*4 + 8));
    edi = *((rsp + rax*4 + 8));
    edi >>= cl;
    edi = ~edi;
    edi &= 1;
    edi <<= cl;
    edi ^= esi;
    *((rsp + rax*4 + 8)) = edi;
    quotearg_n_options (0, rdx, r8, rsp);
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404090 */
#include <stdint.h>
 
int64_t quotearg_char (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    ecx = esi;
    rax = rdi;
    rdx = comment;
    *((rsp + 0x30)) = rdx;
    __asm ("movups xmm0, xmmword [0x004092b0]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x004092a0]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    edx = ecx;
    dl >>= 5;
    edx = (int32_t) dl;
    esi = *((rsp + rdx*4 + 8));
    edi = *((rsp + rdx*4 + 8));
    edi >>= cl;
    edi = ~edi;
    edi &= 1;
    edi <<= cl;
    edi ^= esi;
    *((rsp + rdx*4 + 8)) = edi;
    quotearg_n_options (0, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404100 */
#include <stdint.h>
 
int64_t dbg_quotearg_colon (char const * arg, int64_t arg1, quoting_options * o) {
    quoting_options options;
    int64_t var_fh;
    int64_t var_10h;
    int64_t var_20h;
    rax = arg;
    rdi = arg1;
    rcx = o;
    /* char * quotearg_colon(char const * arg); */
    rax = rdi;
    rcx = comment;
    *((rsp + 0x30)) = rcx;
    __asm ("movups xmm0, xmmword [0x004092b0]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x004092a0]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    quotearg_n_options (0, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404160 */
#include <stdint.h>
 
int64_t dbg_quotearg_colon_mem (char const * arg, int64_t arg1, int64_t arg2, size_t argsize, quoting_options * o) {
    quoting_options options;
    int64_t var_fh;
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
    __asm ("movups xmm0, xmmword [0x004092b0]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x004092a0]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    quotearg_n_options (0, rdx, rax, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4041c0 */
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
        quotearg_n_options (rdi, rax, 0xffffffffffffffff, rsp);
        return rax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404260 */
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
    __asm ("movups xmm0, xmmword [0x004092b0]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x004092a0]");
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
        quotearg_n_options (rdi, rcx, 0xffffffffffffffff, rax);
        return rax;
    }
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4042d0 */
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
    __asm ("movups xmm0, xmmword [0x004092b0]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x004092a0]");
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
        quotearg_n_options (rdi, rcx, r8, rax);
        return rax;
    }
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404340 */
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
    __asm ("movups xmm0, xmmword [0x004092b0]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x004092a0]");
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
        quotearg_n_options (0, rax, 0xffffffffffffffff, rsp);
        return rax;
    }
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4043b0 */
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
    __asm ("movups xmm0, xmmword [0x004092b0]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x004092a0]");
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
        quotearg_n_options (0, rdx, rcx, rax);
        return rax;
    }
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404420 */
#include <stdint.h>
 
void quote_n_mem (int64_t arg_8h, int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = quote_quoting_options;
invalid_funccall(); //    return void (*0x403c50)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404430 */
#include <stdint.h>
 
int64_t dbg_quote_mem (int64_t arg_8h, char const * arg, int64_t arg1, int64_t arg2, size_t argsize) {
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
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
invalid_funccall(); //    return void (*0x403c50)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404450 */
#include <stdint.h>
 
void quote_n (int64_t arg_8h, int64_t arg1, int64_t arg2) {
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    rdi = arg1;
    rsi = arg2;
    rdx = 0xffffffffffffffff;
    ecx = quote_quoting_options;
invalid_funccall(); //    return void (*0x403c50)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404470 */
#include <stdint.h>
 
int64_t dbg_quote (int64_t arg_8h, char const * arg, int64_t arg1) {
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    rax = arg;
    rdi = arg1;
    /* char const * quote(char const * arg); */
    rax = rdi;
    edi = 0;
    rdx = 0xffffffffffffffff;
    ecx = quote_quoting_options;
    rsi = rax;
invalid_funccall(); //    return void (*0x403c50)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404490 */
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
    ecx = *(rax);
    ecx &= 0xffffffdf;
    if (ecx != 0x47) {
        if (ecx == 0x55) {
            ecx = *((rax + 1));
            ecx &= 0xffffffdf;
            if (ecx != 0x54) {
                goto label_1;
            }
            ecx = *((rax + 2));
            ecx &= 0xffffffdf;
            if (ecx != 0x46) {
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
            ecx = 0x40697a;
            eax = 0x40697e;
        } else {
            ecx = *((rax + 1));
            ecx &= 0xffffffdf;
            if (ecx != 0x42) {
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
        ecx = 0x406974;
        eax = 0x406978;
    }
    if (ebp == 9) {
        do {
            rax = rcx;
        } while (1); BROKEN_DOWHILE;
label_0:
        return rax;
label_2:
        ecx = 0x406982;
        eax = 0x406986;
    }
}
/* r2dec pseudo code output */
/* nostrip @ 0x404560 */
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
    rax = dcgettext (0, 0x4069f3);
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
        /* switch table (10 cases) at 0x406990 */
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
invalid_funccall(); //        void (*0x4022d0)() ();
        edx = 5;
        rax = dcgettext (0, "Written by %s and %s.\n");
        rdx = rax;
        rcx = *(r15);
        r8 = *((r15 + 8));
        esi = 1;
        eax = 0;
        rdi = r14;
invalid_funccall(); //        void (*0x4022d0)() ();
        edx = 5;
        rax = dcgettext (0, "Written by %s, %s, and %s.\n");
        rdx = rax;
        rcx = *(r15);
        r8 = *((r15 + 8));
        r9 = *((r15 + 0x10));
        esi = 1;
        eax = 0;
        rdi = r14;
invalid_funccall(); //        void (*0x4022d0)() ();
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
/* nostrip @ 0x4048c0 */
#include <stdint.h>
 
void dbg_version_etc_ar (char const * const * authors, char const * command_name, char const * package, FILE * stream, char const * version) {
    r8 = authors;
    rsi = command_name;
    rdx = package;
    rdi = stream;
    rcx = version;
    /* void version_etc_ar(FILE * stream,char const * command_name,char const * package,char const * version,char const * const * authors); */
    r9 = 0xffffffffffffffff;
    do {
        r9 = r9 + 1;
    } while (*((r8 + r9*8 + 8)) != 0);
invalid_funccall(); //    return void (*0x404560)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4048f0 */
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
    r9 = *(r8);
    if (r9 <= 0x28) {
        r10 = r9;
        r10 += *((r8 + 0x10));
        r9d = r9 + 8;
        *(r8) = r9d;
    } else {
        r10 = *((r8 + 8));
        rax = r10 + 8;
        *((r8 + 8)) = rax;
    }
    rax = *(r10);
    *(rsp) = rax;
    if (rax != 0) {
        if (r9d < 0x29) {
            r10 = (int64_t) r9d;
            r10 += *((r8 + 0x10));
            r9d += 8;
            *(r8) = r9d;
        } else {
            r9d = 0;
            goto label_0;
        }
        r10 = *((r8 + 8));
        rax = r10 + 8;
        *((r8 + 8)) = rax;
    }
    rax = *(r10);
    *((rsp + 8)) = rax;
    if (rax != 0) {
        if (r9d < 0x29) {
            r10 = (int64_t) r9d;
            r10 += *((r8 + 0x10));
            r9d += 8;
            *(r8) = r9d;
        } else {
            r9d = 1;
            goto label_0;
        }
        r10 = *((r8 + 8));
        rax = r10 + 8;
        *((r8 + 8)) = rax;
    }
    rax = *(r10);
    *((rsp + 0x10)) = rax;
    if (rax != 0) {
        if (r9d < 0x29) {
            r10 = (int64_t) r9d;
            r10 += *((r8 + 0x10));
            r9d += 8;
            *(r8) = r9d;
        } else {
            r9d = 2;
            goto label_0;
        }
        r10 = *((r8 + 8));
        rax = r10 + 8;
        *((r8 + 8)) = rax;
    }
    rax = *(r10);
    *((rsp + 0x18)) = rax;
    if (rax != 0) {
        if (r9d < 0x29) {
            r10 = (int64_t) r9d;
            r10 += *((r8 + 0x10));
            r9d += 8;
            *(r8) = r9d;
        } else {
            r9d = 3;
            goto label_0;
        }
        r10 = *((r8 + 8));
        rax = r10 + 8;
        *((r8 + 8)) = rax;
    }
    rax = *(r10);
    *((rsp + 0x20)) = rax;
    if (rax != 0) {
        if (r9d < 0x29) {
            r10 = (int64_t) r9d;
            r10 += *((r8 + 0x10));
            r9d += 8;
            *(r8) = r9d;
        } else {
            r9d = 4;
            goto label_0;
        }
        r10 = *((r8 + 8));
        rax = r10 + 8;
        *((r8 + 8)) = rax;
    }
    rax = *(r10);
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
/* nostrip @ 0x404ae0 */
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
/* nostrip @ 0x404b70 */
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
/* nostrip @ 0x404bf0 */
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
        if (rbx != 0) {
            if (rax == 0) {
                goto label_0;
            }
        }
        return rax;
    }
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404c30 */
#include <stdint.h>
 
uint64_t xmalloc (size_t size) {
    rdi = size;
    rbx = rdi;
    rax = malloc (rdi);
    if (rbx != 0) {
        if (rax == 0) {
            goto label_0;
        }
    }
    return rax;
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404c50 */
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
        if (rdi != 0) {
            if (rbx != 0) {
                goto label_0;
            }
            eax = free (rdi);
            eax = 0;
            return rax;
        }
label_0:
        rax = realloc (rdi, rbx);
        if (rbx != 0) {
            if (rax == 0) {
                goto label_1;
            }
        }
        return rax;
    }
label_1:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404ca0 */
#include <stdint.h>
 
uint64_t xrealloc (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rsi;
    if (rdi != 0) {
        if (rbx != 0) {
            goto label_0;
        }
        eax = free (rdi);
        eax = 0;
        return eax;
    }
label_0:
    rax = realloc (rdi, rbx);
    if (rbx != 0) {
        if (rax == 0) {
            goto label_1;
        }
    }
    return rax;
label_1:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404cd0 */
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
        rcx = rcx + rax + 1;
    } else {
        if (rcx == 0) {
            eax = 0x80;
            edx = 0;
            rax = rdx_rax / rbx;
            rdx = rdx_rax % rbx;
            ecx = 0;
            cl = (rbx > 0x80) ? 1 : 0;
            rcx += rax;
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
    if (rdi != 0) {
        if (rbx != 0) {
            goto label_2;
        }
        eax = free (rdi);
        eax = 0;
        return rax;
    }
label_2:
    rax = realloc (rdi, rbx);
    if (rbx != 0) {
        if (rax == 0) {
            goto label_0;
        }
    }
    return rax;
label_0:
    xalloc_die ();
label_1:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404d70 */
#include <stdint.h>
 
uint64_t dbg_xcharalloc (int64_t arg1, size_t n, void * p) {
    rdi = arg1;
    rbx = n;
    rax = p;
    /* char * xcharalloc(size_t n); */
    rbx = rdi;
    rax = malloc (rdi);
    if (rbx != 0) {
        if (rax == 0) {
            goto label_0;
        }
    }
    return rax;
label_0:
    return xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404d90 */
#include <stdint.h>
 
int64_t dbg_x2realloc (size_t n, void * p, size_t * pn) {
    rbx = n;
    rdi = p;
    rsi = pn;
    /* void * x2realloc(void * p,size_t * pn); */
    rax = *(rsi);
    if (rdi != 0) {
        rcx = 0x5555555555555554;
        if (rax >= rcx) {
            goto label_0;
        }
        rbx = rax;
        rbx >>= 1;
        rbx += rax;
        rbx++;
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
        if (rbx != 0) {
            if (rax == 0) {
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
/* nostrip @ 0x404e00 */
#include <stdint.h>
 
uint64_t dbg_xzalloc (int64_t arg1, size_t n, void * p) {
    rdi = arg1;
    rbx = n;
    r14 = p;
    /* void * xzalloc(size_t s); */
    rbx = rdi;
    rax = malloc (rdi);
    r14 = rax;
    if (rbx != 0) {
        if (r14 == 0) {
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
/* nostrip @ 0x404e40 */
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
/* nostrip @ 0x404e70 */
#include <stdint.h>
 
uint64_t xmemdup (int64_t arg1, size_t size) {
    rdi = arg1;
    rsi = size;
    rbx = rsi;
    r14 = rdi;
    rax = malloc (rbx);
    r15 = rax;
    if (rbx != 0) {
        if (r15 == 0) {
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
/* nostrip @ 0x404eb0 */
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
    rax = malloc (rbx + 1);
    r15 = rax;
    rbx++;
    if (rbx != 0) {
        if (r15 == 0) {
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
/* nostrip @ 0x404f00 */
#include <stdint.h>
 
uint64_t dbg_xalloc_die (void) {
    /* void xalloc_die(); */
    ebx = *(obj.exit_failure);
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (ebx, 0, 0x4063e5);
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404f30 */
#include <stdint.h>
 
int64_t dbg_xnumtoumax (int64_t arg_40h, int64_t arg1, int64_t arg3, int64_t arg6, int32_t base, char const * err, int32_t err_exit, uintmax_t max, uintmax_t min, char const * n_str, char const * suffixes, uintmax_t tnum) {
    rdi = arg1;
    rdx = arg3;
    r9 = arg6;
    rsi = base;
    r14 = err;
    rcx = err_exit;
    r15 = max;
    r13 = min;
    r12 = n_str;
    r8 = suffixes;
    rbx = tnum;
    /* uintmax_t xnumtoumax(char const * n_str,int base,uintmax_t min,uintmax_t max,char const * suffixes,char const * err,int err_exit); */
    r14 = r9;
    r15 = rcx;
    r13 = rdx;
    eax = esi;
    r12 = rdi;
    rcx = rsp;
    edx = eax;
    eax = xstrtoumax (rdi, 0);
    if (eax != 0) {
        if (eax != 1) {
            if (eax == 3) {
                errno_location ();
                *(rax) = 0;
            } else {
                errno_location ();
            }
            *(rax) = 0x4b;
        } else if (BROKEN_DOWHILE) {
            rbx = *(rsp);
            if (rbx >= r13) {
                if (rbx <= r15) {
                    goto label_0;
                }
            }
            errno_location ();
            ecx = 0x4b;
            edx = 0x22;
            if (rbx > 0x3fffffff) {
                edx = ecx;
            }
            *(rax) = edx;
        } else {
            rax = errno_location ();
        }
    }
    ecx = *((rsp + 0x40));
    ebx = 1;
    if (ecx != 0) {
        ebx = ecx;
    }
    ebp = *(rax);
    eax = 0;
    if (ebp == 0x16) {
    }
    rax = quote (r12, rsi);
    r8 = rax;
    eax = 0;
    rcx = r14;
    error (ebx, ebp, "%s: %s");
    rbx = *(rsp);
label_0:
    rax = *(rsp);
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x405000 */
#include <stdint.h>
 
int64_t dbg_xdectoumax (int64_t arg2, int64_t arg5, char const * err, int32_t err_exit, uintmax_t max, uintmax_t min, char const * n_str, char const * suffixes) {
    rsi = arg2;
    r8 = arg5;
    r10 = err;
    r9 = err_exit;
    rcx = max;
    rdx = min;
    rdi = n_str;
    rax = suffixes;
    /* uintmax_t xdectoumax(char const * n_str,uintmax_t min,uintmax_t max,char const * suffixes,char const * err,int err_exit); */
    r10 = r8;
    rax = rcx;
    *(rsp) = r9d;
    r8 = rax;
    r9 = r10;
    xnumtoumax (rdi, 0xa, rsi, rdx);
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x405030 */
#include <stdint.h>
 
uint64_t dbg_xstrtoumax (int64_t arg1, int64_t arg5, int32_t base, char ** restrict endptr, char const * restrict nptr, strtol_error overflow, char const * q, uintmax_t * val, char const * valid_suffixes) {
    char ** ptr;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    rdi = arg1;
    r8 = arg5;
    r12 = base;
    rsi = endptr;
    rbx = nptr;
    rax = overflow;
    rdx = q;
    rcx = val;
    r14 = valid_suffixes;
    /* strtol_error xstrtoumax(char const * s,char ** ptr,int strtol_base,uintmax_t * val,char const * valid_suffixes); */
    r14 = r8;
    r12d = edx;
    rbx = rdi;
    if (r12d >= 0x25) {
        goto label_0;
    }
    *((rsp + 8)) = rcx;
    rax = errno_location ();
    r15 = rax;
    *(r15) = 0;
    rax = ctype_b_loc ();
    rcx = *(rax);
    rdx = rbx;
    do {
        eax = *(rdx);
        rdx++;
    } while ((*((rcx + rax*2 + 1)) & 0x20) != 0);
    rsi = rsp + 0x20;
    if (rbp != 0) {
        rsi = rbp;
    }
    r13d = 4;
    if (al != 0x2d) {
        ebp = 0;
        ecx = 0;
        rdi = rbx;
        *((rsp + 0x18)) = rsi;
        edx = r12d;
        rax = strtoul_internal ();
        r12 = rax;
        rax = *((rsp + 0x18));
        rcx = *(rax);
        if (rcx != rbx) {
            eax = *(r15);
            if (eax != 0) {
                if (eax != 0x22) {
                    goto label_1;
                }
            }
            r15d = ebp;
            if (r14 == 0) {
            } else {
                if (r14 == 0) {
                    goto label_1;
                }
                esi = *(rbx);
                if (esi == 0) {
                    goto label_1;
                }
                rbx = rcx;
                rax = strchr (r14, rsi);
                rcx = rbx;
                if (rax == 0) {
                    goto label_1;
                }
                r15d = 0;
                r12d = 1;
            }
            r13d = *(rcx);
            if (r13d == 0) {
                goto label_2;
            }
            *((rsp + 0x10)) = rcx;
            rax = strchr (r14, r13d);
            if (rax != 0) {
                ecx = 1;
                esi = 0x400;
                eax = r13 - 0x45;
                if (eax <= 0x2f) {
                    rdx = 0x814400308945;
                    if (((rdx >> rax) & 1) >= 0) {
                        goto label_3;
                    }
                    rax = strchr (r14, 0x30);
                    if (rax != 0) {
                        rcx = *((rsp + 0x10));
                        eax = *((rcx + 1));
                        if (eax != 0x42) {
                            if (eax != 0x44) {
                                if (eax == 0x69) {
                                    eax = 0;
                                    al = (*((rcx + 2)) == 0x42) ? 1 : 0;
                                    rcx = rax + rax + 1;
                                    esi = 0x400;
                                }
                            } else {
                                ecx = 1;
                                esi = 0x400;
                            }
                        } else {
                            ecx = 2;
                            esi = 0x3e8;
                        }
                    }
                }
label_3:
                r13d += 0xffffffbe;
                if (r13d <= 0x35) {
                    eax = 0;
                    /* switch table (54 cases) at 0x406d00 */
                    rdi = 0xffffffffffffffff;
                    rax = 0xffffffffffffffff;
                    edx = 0;
                    rax = rdx_rax / rsi;
                    rdx = rdx_rax % rsi;
                    r8b -= r8b;
                    rbx = r12;
                    rbx *= rsi;
                    if (rax < r12) {
                        rbx = rdi;
                    }
                    dl -= dl;
                    rbp *= rsi;
                    if (rax < rbx) {
                    }
                    bl -= bl;
                    rsi *= rbp;
                    if (rax < rbp) {
                        rsi = rdi;
                    }
                    dl |= r8b;
                }
            } else {
                rax = *((rsp + 8));
                *(rax) = r12;
                r15d |= 2;
                goto label_4;
                rdi = 0xffffffffffffffff;
                rax = 0xffffffffffffffff;
                edx = 0;
                rax = rdx_rax / rsi;
                rdx = rdx_rax % rsi;
                rsi *= r12;
                if (rax < r12) {
                    rsi = rdi;
                }
                eax -= eax;
                goto label_5;
                rdi = 0xffffffffffffffff;
                rax = 0xffffffffffffffff;
                edx = 0;
                rax = rdx_rax / rsi;
                rdx = rdx_rax % rsi;
                r8b -= r8b;
                rbx = r12;
                rbx *= rsi;
                if (rax < r12) {
                    rbx = rdi;
                }
                dl -= dl;
                rsi *= rbx;
                if (rax < rbx) {
                    rsi = rdi;
                }
                dl |= r8b;
                goto label_6;
                r9 = 0xffffffffffffffff;
                rax = 0xffffffffffffffff;
                edx = 0;
                rax = rdx_rax / rsi;
                rdx = rdx_rax % rsi;
                r8b -= r8b;
                rbx = r12;
                rbx *= rsi;
                if (rax < r12) {
                    rbx = r9;
                }
                dl -= dl;
                rbp *= rsi;
                if (rax < rbx) {
                }
                r10b -= r10b;
                rdi = rbp;
                rdi *= rsi;
                if (rax < rbp) {
                    rdi = r9;
                }
                bl -= bl;
                rsi *= rdi;
                if (rax < rdi) {
                    rsi = r9;
                }
                dl |= r8b;
                goto label_7;
                eax = 0;
                rdx = r12;
                rdx >>= 0x36;
                al = (rdx != 0) ? 1 : 0;
                r12 <<= 0xa;
                goto label_8;
                rdi = 0xffffffffffffffff;
                rax = 0xffffffffffffffff;
                edx = 0;
                rax = rdx_rax / rsi;
                rdx = rdx_rax % rsi;
                r8b -= r8b;
                rbx = r12;
                rbx *= rsi;
                if (rax < r12) {
                    rbx = rdi;
                }
                dl -= dl;
                rbp *= rsi;
                if (rax < rbx) {
                }
                r9b -= r9b;
                rbx = rbp;
                rbx *= rsi;
                if (rax < rbp) {
                    rbx = rdi;
                }
                r10b -= r10b;
                rbp *= rsi;
                if (rax < rbx) {
                }
                r11b -= r11b;
                rbx = rbp;
                rbx *= rsi;
                if (rax < rbp) {
                    rbx = rdi;
                }
                bpl -= bpl;
                rsi *= rbx;
                if (rax < rbx) {
                    rsi = rdi;
                }
                dl |= r8b;
                dl |= r9b;
                dl |= r10b;
                dl |= r11b;
                dl |= bpl;
                goto label_6;
                rdi = 0xffffffffffffffff;
                rax = 0xffffffffffffffff;
                edx = 0;
                rax = rdx_rax / rsi;
                rdx = rdx_rax % rsi;
                r8b -= r8b;
                rbx = r12;
                rbx *= rsi;
                if (rax < r12) {
                    rbx = rdi;
                }
                dl -= dl;
                rbp *= rsi;
                if (rax < rbx) {
                }
                r9b -= r9b;
                rbx = rbp;
                rbx *= rsi;
                if (rax < rbp) {
                    rbx = rdi;
                }
                r10b -= r10b;
                rbp *= rsi;
                if (rax < rbx) {
                }
                bl -= bl;
                rsi *= rbp;
                if (rax < rbp) {
                    rsi = rdi;
                }
                dl |= r8b;
                dl |= r9b;
label_7:
                dl |= r10b;
            }
            dl |= bl;
label_6:
            dl &= 1;
            eax = (int32_t) dl;
            r12 = rsi;
            goto label_9;
            rdi = 0xffffffffffffffff;
            rax = 0xffffffffffffffff;
            edx = 0;
            rax = rdx_rax / rsi;
            rdx = rdx_rax % rsi;
            r8b -= r8b;
            rbx = r12;
            rbx *= rsi;
            if (rax < r12) {
                rbx = rdi;
            }
            dl -= dl;
            rbp *= rsi;
            if (rax < rbx) {
            }
            r9b -= r9b;
            rbx = rbp;
            rbx *= rsi;
            if (rax < rbp) {
                rbx = rdi;
            }
            r10b -= r10b;
            rbp *= rsi;
            if (rax < rbx) {
            }
            r11b -= r11b;
            rbx = rbp;
            rbx *= rsi;
            if (rax < rbp) {
                rbx = rdi;
            }
            r14b -= r14b;
            rbp *= rsi;
            if (rax < rbx) {
            }
            r13d = r15d;
            r15b -= r15b;
            rbx = rbp;
            rbx *= rsi;
            if (rax < rbp) {
                rbx = rdi;
            }
            bpl -= bpl;
            rsi *= rbx;
            if (rax < rbx) {
                rsi = rdi;
            }
            dl |= r8b;
            dl |= r9b;
            dl |= r10b;
            dl |= r11b;
            dl &= 1;
            dl |= r14b;
            dl |= r15b;
            r15d = r13d;
            dl |= bpl;
            goto label_10;
            rdi = 0xffffffffffffffff;
            rax = 0xffffffffffffffff;
            edx = 0;
            rax = rdx_rax / rsi;
            rdx = rdx_rax % rsi;
            r8b -= r8b;
            rbx = r12;
            rbx *= rsi;
            if (rax < r12) {
                rbx = rdi;
            }
            dl -= dl;
            rbp *= rsi;
            if (rax < rbx) {
            }
            r9b -= r9b;
            rbx = rbp;
            rbx *= rsi;
            if (rax < rbp) {
                rbx = rdi;
            }
            r10b -= r10b;
            rbp *= rsi;
            if (rax < rbx) {
            }
            r11b -= r11b;
            rbx = rbp;
            rbx *= rsi;
            if (rax < rbp) {
                rbx = rdi;
            }
            r14b -= r14b;
            rbp *= rsi;
            if (rax < rbx) {
            }
            bl -= bl;
            rsi *= rbp;
            if (rax < rbp) {
                rsi = rdi;
            }
            dl |= r8b;
            dl |= r9b;
            dl |= r10b;
            dl &= 1;
            dl |= r11b;
            dl |= r14b;
            dl |= bl;
label_10:
            eax = (int32_t) dl;
label_5:
            eax &= 1;
            r12 = rsi;
            goto label_9;
            eax = 0;
            rdx = r12;
            rdx >>= 0x37;
            al = (rdx != 0) ? 1 : 0;
            r12 <<= 9;
label_8:
            rdx -= rdx;
            rdx = ~rdx;
            r12 |= rdx;
            goto label_9;
            rax = r12 + r12;
            rdx = 0xffffffffffffffff;
            __asm ("cmovns rdx, rax");
            r12 >>= 0x3f;
            eax = r12d;
            r12 = rdx;
label_9:
            eax |= r15d;
            rdi = *((rsp + 0x10));
            rdx = rdi + rcx;
            rsi = *((rsp + 0x18));
            *(rsi) = rdx;
            r15d = rax + 2;
            if (*((rdi + rcx)) != 0) {
                r15d = eax;
                goto label_2;
            }
        }
label_2:
        rax = *((rsp + 8));
        *(rax) = r12;
label_4:
        r13d = r15d;
    }
label_1:
    eax = r15d;
    return rax;
label_0:
    return assert_fail ("0 <= strtol_base && strtol_base <= 36", "./lib/xstrtol.c", 0x54, "strtol_error xstrtoumax(const char *, char **, int, uintmax_t *, const char *)");
}
/* r2dec pseudo code output */
/* nostrip @ 0x405660 */
#include <stdint.h>
 
int64_t dbg_rpl_calloc (size_t bytes, size_t n, size_t s) {
    rax = bytes;
    rdi = n;
    rsi = s;
    /* void * rpl_calloc(size_t n,size_t s); */
    eax = 1;
    if (rdi != 0) {
        ecx = 1;
        if (rsi == 0) {
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
/* nostrip @ 0x4056b0 */
#include <stdint.h>
 
uint64_t dbg_rpl_mbrtowc (int64_t arg1, int64_t arg2, int64_t arg3, size_t n, mbstate_t * ps, size_t ret, char const * s) {
    wchar_t * pwc;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = n;
    rcx = ps;
    r15 = ret;
    r14 = s;
    /* size_t rpl_mbrtowc(wchar_t * pwc,char const * s,size_t n,mbstate_t * ps); */
    r12 = rdx;
    r14 = rsi;
    rbx = rsp + 4;
    if (rdi != 0) {
        rbx = rdi;
    }
    rax = mbrtowc (rbx, rsi, rdx, rcx);
    r15 = rax;
    if (r12 != 0) {
        if (r15 < 0xfffffffffffffffe) {
            goto label_0;
        }
        edi = 0;
        al = hard_locale ();
        if (al != 0) {
            goto label_0;
        }
        eax = *(r14);
        *(rbx) = eax;
        r15d = 1;
    }
label_0:
    rax = r15;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x405710 */
#include <stdint.h>
 
uint64_t dbg_close_stream (FILE * __stream, int64_t arg1) {
    rbx = __stream;
    rdi = arg1;
    /* int close_stream(FILE * stream); */
    rbx = rdi;
    rax = fpending ();
    r14 = rax;
    ebp = *(rbx);
    eax = rpl_fclose (rbx);
    if ((bpl & 0x20) == 0) {
        cl = (eax == 0) ? 1 : 0;
        eax = -eax;
        ebx -= ebx;
        if (r14 != 0) {
            goto label_0;
        }
        if (cl != 0) {
            goto label_0;
        }
        rax = errno_location ();
        ecx = 0;
        ebx = 0xffffffff;
        if (*(rax) == 9) {
            ebx = ecx;
        }
    } else {
        ebx = 0xffffffff;
        if (eax != 0) {
            goto label_0;
        }
        errno_location ();
        *(rax) = 0;
    }
label_0:
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x405770 */
#include <stdint.h>
 
uint64_t dbg_hard_locale (int32_t category, char const * p) {
    rdi = category;
    rbx = p;
    /* _Bool hard_locale(int category); */
    rax = setlocale (rdi, 0);
    rbx = rax;
    bpl = 1;
    if (rbx != 0) {
        eax = strcmp (rbx, 0x406f36);
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
/* nostrip @ 0x4057c0 */
#include <stdint.h>
 
uint64_t dbg_locale_charset (char const * codeset) {
    rax = codeset;
    /* char const * locale_charset(); */
    rax = nl_langinfo (0xe);
    ecx = 0x406ac2;
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
/* nostrip @ 0x4057f0 */
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
/* nostrip @ 0x405870 */
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
        if ((*((rbx + 1)) & 1) == 0) {
            goto label_0;
        }
        rpl_fseeko (rbx, 0, 1);
    }
label_0:
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4058b0 */
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
invalid_funccall(); //    void (*0x402270)() ();
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
/* nostrip @ 0x405920 */
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
/* nostrip @ 0x405990 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* nostrip @ 0x4059a0 */
#include <stdint.h>
 
void atexit (void) {
    rdx = *(obj.__dso_handle);
    esi = 0;
    return cxa_atexit ();
}
